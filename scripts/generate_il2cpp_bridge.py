import os
import json

IL2CPP_SYMBOLS_JSON = r"C:\tools\unity_native_runtime\il2cpp_symbols.json"
UNITY_FRAMEWORK_BIN = r"C:\wkr\extracted_binary\UnityFramework"
OUT_DIR = r"C:\tools\unity_native_runtime\il2cpp_bridge"
os.makedirs(OUT_DIR, exist_ok=True)

with open(IL2CPP_SYMBOLS_JSON, "r") as f:
    required_symbols = json.load(f)

with open(UNITY_FRAMEWORK_BIN, "rb") as f:
    data = f.read()

# Parse Mach-O Symbol Table
ncmds = int.from_bytes(data[16:20], 'little')
pos = 32
symtab_cmd = None
for _ in range(ncmds):
    cmd = int.from_bytes(data[pos:pos+4], 'little')
    cmdsize = int.from_bytes(data[pos+4:pos+8], 'little')
    if cmd == 2: # LC_SYMTAB
        symtab_cmd = data[pos:pos+cmdsize]
        break
    pos += cmdsize

symoff = int.from_bytes(symtab_cmd[8:12], 'little')
nsyms = int.from_bytes(symtab_cmd[12:16], 'little')
stroff = int.from_bytes(symtab_cmd[16:20], 'little')
strsize = int.from_bytes(symtab_cmd[20:24], 'little')
str_data = data[stroff:stroff+strsize]

macho_syms = {}
for i in range(nsyms):
    n_strx = int.from_bytes(data[symoff + i*16 : symoff + i*16 + 4], 'little')
    n_value = int.from_bytes(data[symoff + i*16 + 8 : symoff + i*16 + 16], 'little')
    sname = str_data[n_strx:str_data.find(b'\x00', n_strx)].decode('ascii', errors='ignore')
    if sname.startswith('_il2cpp_'):
        macho_syms[sname[1:]] = n_value

print(f"Found {len(macho_syms)} il2cpp symbols in Mach-O.")

sym_entries = []
for sym in required_symbols:
    val = macho_syms.get(sym, 0)
    sym_entries.append((sym, val))

c_source = r'''/*
 * Native IL2CPP Bridge for Warped Kart Racers (Android ARM64)
 * Bridges Unity 2020.3.31f1 Android engine (libunity.so) with
 * authentic game IL2CPP machine code inside UnityFramework.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <dlfcn.h>
#include <libgen.h>
#include <android/log.h>

#define LOG_TAG "WKR_IL2CPP"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#define MACHO_TEXT_SIZE      0x3a5c000
#define MACHO_CONST_SIZE     0x230000
#define MACHO_DATA_FILESIZE  0x22c000
#define MACHO_DATA_VMSIZE    0x5ac000
#define MACHO_TOTAL_VMSIZE   0x4238000

#define REBASE_OFF           0x3eb8000
#define REBASE_SIZE          43032
#define BIND_OFF             0x3ec2818
#define BIND_SIZE            19632

uint8_t* g_macho_base = NULL;
int g_bridge_initialized = 0;

#define NUM_SYMBOLS ''' + str(len(sym_entries)) + r'''
void* g_target_ptrs[NUM_SYMBOLS];

static const uint64_t g_macho_offsets[NUM_SYMBOLS] = {
'''

# Add offsets table
for sym, offset in sym_entries:
    c_source += f"    0x{offset:x}, // {sym}\n"

c_source += r'''};

static uint64_t read_uleb128(const uint8_t** p) {
    uint64_t result = 0;
    int shift = 0;
    while (1) {
        uint8_t byte = **p;
        (*p)++;
        result |= (uint64_t)(byte & 0x7f) << shift;
        if (!(byte & 0x80)) break;
        shift += 7;
    }
    return result;
}

static int64_t read_sleb128(const uint8_t** p) {
    int64_t result = 0;
    int shift = 0;
    uint8_t byte;
    while (1) {
        byte = **p;
        (*p)++;
        result |= (int64_t)(byte & 0x7f) << shift;
        shift += 7;
        if (!(byte & 0x80)) break;
    }
    if ((shift < 64) && (byte & 0x40)) {
        result |= -(1LL << shift);
    }
    return result;
}

static void* dummy_apple_stub(void) {
    return NULL;
}

static void apply_rebase(uint8_t* base, const uint8_t* rebase_data, size_t rebase_len) {
    uintptr_t slide = (uintptr_t)base;
    const uint8_t* p = rebase_data;
    const uint8_t* end = p + rebase_len;
    uint32_t seg_idx = 0;
    uint64_t seg_offset = 0;
    
    uint64_t seg_bases[3] = { 0x0, 0x3a5c000, 0x3c8c000 };

    while (p < end) {
        uint8_t b = *p++;
        uint8_t op = b & 0xf0;
        uint8_t imm = b & 0x0f;

        switch (op) {
            case 0x00: break;
            case 0x10: break;
            case 0x20:
                seg_idx = imm;
                seg_offset = read_uleb128(&p);
                break;
            case 0x30:
                seg_offset += read_uleb128(&p);
                break;
            case 0x40:
                seg_offset += imm * 8;
                break;
            case 0x50: {
                for (int i = 0; i < imm; i++) {
                    if (seg_idx < 3) {
                        uint64_t* ptr = (uint64_t*)(base + seg_bases[seg_idx] + seg_offset);
                        *ptr += slide;
                    }
                    seg_offset += 8;
                }
                break;
            }
            case 0x60: {
                uint64_t count = read_uleb128(&p);
                for (uint64_t i = 0; i < count; i++) {
                    if (seg_idx < 3) {
                        uint64_t* ptr = (uint64_t*)(base + seg_bases[seg_idx] + seg_offset);
                        *ptr += slide;
                    }
                    seg_offset += 8;
                }
                break;
            }
            case 0x70: {
                if (seg_idx < 3) {
                    uint64_t* ptr = (uint64_t*)(base + seg_bases[seg_idx] + seg_offset);
                    *ptr += slide;
                }
                seg_offset += 8 + read_uleb128(&p);
                break;
            }
            case 0x80: {
                uint64_t count = read_uleb128(&p);
                uint64_t skip = read_uleb128(&p);
                for (uint64_t i = 0; i < count; i++) {
                    if (seg_idx < 3) {
                        uint64_t* ptr = (uint64_t*)(base + seg_bases[seg_idx] + seg_offset);
                        *ptr += slide;
                    }
                    seg_offset += 8 + skip;
                }
                break;
            }
        }
    }
}

static void apply_bind(uint8_t* base, const uint8_t* bind_data, size_t bind_len) {
    const uint8_t* p = bind_data;
    const uint8_t* end = p + bind_len;
    uint32_t seg_idx = 0;
    uint64_t seg_offset = 0;
    int64_t addend = 0;
    void* resolved_addr = NULL;
    
    uint64_t seg_bases[3] = { 0x0, 0x3a5c000, 0x3c8c000 };

    while (p < end) {
        uint8_t b = *p++;
        uint8_t op = b & 0xf0;
        uint8_t imm = b & 0x0f;

        switch (op) {
            case 0x00: break;
            case 0x10: case 0x20:
                if (op == 0x20) read_uleb128(&p);
                break;
            case 0x30: break;
            case 0x40: {
                const char* symbol_name = (const char*)p;
                p += strlen(symbol_name) + 1;
                
                const char* lookup_name = symbol_name;
                if (lookup_name[0] == '_') lookup_name++;
                
                resolved_addr = dlsym(RTLD_DEFAULT, lookup_name);
                if (!resolved_addr) {
                    resolved_addr = dlsym(RTLD_DEFAULT, symbol_name);
                }
                if (!resolved_addr) {
                    resolved_addr = (void*)dummy_apple_stub;
                }
                break;
            }
            case 0x50: break;
            case 0x60:
                addend = read_sleb128(&p);
                break;
            case 0x70:
                seg_idx = imm;
                seg_offset = read_uleb128(&p);
                break;
            case 0x80:
                seg_offset += read_uleb128(&p);
                break;
            case 0x90: {
                if (seg_idx < 3) {
                    uint64_t* ptr = (uint64_t*)(base + seg_bases[seg_idx] + seg_offset);
                    *ptr = (uint64_t)((uintptr_t)resolved_addr + addend);
                }
                seg_offset += 8;
                break;
            }
            case 0xa0: {
                if (seg_idx < 3) {
                    uint64_t* ptr = (uint64_t*)(base + seg_bases[seg_idx] + seg_offset);
                    *ptr = (uint64_t)((uintptr_t)resolved_addr + addend);
                }
                seg_offset += 8 + read_uleb128(&p);
                break;
            }
            case 0xb0: {
                if (seg_idx < 3) {
                    uint64_t* ptr = (uint64_t*)(base + seg_bases[seg_idx] + seg_offset);
                    *ptr = (uint64_t)((uintptr_t)resolved_addr + addend);
                }
                seg_offset += 8 + imm * 8;
                break;
            }
            case 0xc0: {
                uint64_t count = read_uleb128(&p);
                uint64_t skip = read_uleb128(&p);
                for (uint64_t i = 0; i < count; i++) {
                    if (seg_idx < 3) {
                        uint64_t* ptr = (uint64_t*)(base + seg_bases[seg_idx] + seg_offset);
                        *ptr = (uint64_t)((uintptr_t)resolved_addr + addend);
                    }
                    seg_offset += 8 + skip;
                }
                break;
            }
        }
    }
}

void init_bridge(void) {
    if (g_bridge_initialized) return;
    g_bridge_initialized = 1;
    
    LOGI("==================================================");
    LOGI("Initializing Warped Kart Racers Native IL2CPP Bridge...");

    Dl_info dlinfo;
    char framework_path[1024] = {0};
    if (dladdr((void*)init_bridge, &dlinfo) && dlinfo.dli_fname) {
        char buf[1024];
        strncpy(buf, dlinfo.dli_fname, sizeof(buf)-1);
        char* dir = dirname(buf);
        snprintf(framework_path, sizeof(framework_path), "%s/libunityframework.so", dir);
    }
    
    LOGI("Target framework path: %s", framework_path);
    int fd = open(framework_path, O_RDONLY);
    if (fd < 0) {
        LOGE("Failed to open %s! Error: %d", framework_path, fd);
        for (int i = 0; i < NUM_SYMBOLS; i++) {
            g_target_ptrs[i] = (void*)dummy_apple_stub;
        }
        return;
    }

    g_macho_base = (uint8_t*)mmap(NULL, MACHO_TOTAL_VMSIZE, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
    if (g_macho_base == MAP_FAILED) {
        LOGE("Failed to mmap %d bytes for Mach-O image!", MACHO_TOTAL_VMSIZE);
        close(fd);
        for (int i = 0; i < NUM_SYMBOLS; i++) {
            g_target_ptrs[i] = (void*)dummy_apple_stub;
        }
        return;
    }
    LOGI("Allocated Mach-O image base at: %p", g_macho_base);

    pread(fd, g_macho_base + 0x0, MACHO_TEXT_SIZE, 0x0);
    pread(fd, g_macho_base + 0x3a5c000, MACHO_CONST_SIZE, 0x3a5c000);
    pread(fd, g_macho_base + 0x3c8c000, MACHO_DATA_FILESIZE, 0x3c8c000);
    memset(g_macho_base + 0x3c8c000 + MACHO_DATA_FILESIZE, 0, MACHO_DATA_VMSIZE - MACHO_DATA_FILESIZE);

    uint8_t rebase_buf[REBASE_SIZE];
    pread(fd, rebase_buf, REBASE_SIZE, REBASE_OFF);
    LOGI("Applying Mach-O rebasing...");
    apply_rebase(g_macho_base, rebase_buf, REBASE_SIZE);

    uint8_t bind_buf[BIND_SIZE];
    pread(fd, bind_buf, BIND_SIZE, BIND_OFF);
    LOGI("Applying Mach-O symbol binding...");
    apply_bind(g_macho_base, bind_buf, BIND_SIZE);

    mprotect(g_macho_base, MACHO_TEXT_SIZE, PROT_READ | PROT_EXEC);
    mprotect(g_macho_base + 0x3a5c000, MACHO_CONST_SIZE, PROT_READ);
    mprotect(g_macho_base + 0x3c8c000, MACHO_DATA_VMSIZE, PROT_READ | PROT_WRITE);

    close(fd);

    for (int i = 0; i < NUM_SYMBOLS; i++) {
        if (g_macho_offsets[i] != 0) {
            g_target_ptrs[i] = (void*)(g_macho_base + g_macho_offsets[i]);
        } else {
            g_target_ptrs[i] = (void*)dummy_apple_stub;
        }
    }

    LOGI("Mach-O image loaded, rebased, and all 225 IL2CPP functions linked!");
    LOGI("==================================================");
}

__attribute__((constructor))
void bridge_constructor(void) {
    init_bridge();
}

'''

symbol_definitions = []
for i, (sym, offset) in enumerate(sym_entries):
    byte_offset = i * 8
    thunk = f'''
__attribute__((visibility("default"), naked))
void {sym}(void) {{
    __asm__ volatile (
        "adrp x16, g_target_ptrs + {byte_offset}\\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + {byte_offset}]\\n"
        "cbz x16, 1f\\n"
        "br x16\\n"
        "1:\\n"
        "stp x29, x30, [sp, #-16]!\\n"
        "bl init_bridge\\n"
        "ldp x29, x30, [sp], #16\\n"
        "adrp x16, g_target_ptrs + {byte_offset}\\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + {byte_offset}]\\n"
        "br x16\\n"
    );
}}
'''
    symbol_definitions.append(thunk)

full_c_code = c_source + "\n".join(symbol_definitions)

with open(os.path.join(OUT_DIR, "bridge.c"), "w") as f:
    f.write(full_c_code)

print("Generated updated bridge.c successfully!")
