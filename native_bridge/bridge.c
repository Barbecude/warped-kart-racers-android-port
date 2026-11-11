/*
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

static uint8_t* g_macho_base = NULL;
static int g_bridge_initialized = 0;

#define NUM_SYMBOLS 225
static void* g_target_ptrs[NUM_SYMBOLS];

static const uint64_t g_macho_offsets[NUM_SYMBOLS] = {
    0xf76bc0, // il2cpp_init
    0xf76bf4, // il2cpp_init_utf16
    0xf76c84, // il2cpp_shutdown
    0xf76c88, // il2cpp_set_config_dir
    0xf76c8c, // il2cpp_set_data_dir
    0xf76c90, // il2cpp_set_temp_dir
    0xf76c94, // il2cpp_set_commandline_arguments
    0xf76ca4, // il2cpp_set_commandline_arguments_utf16
    0xf76cb4, // il2cpp_set_config_utf16
    0xf76cb8, // il2cpp_set_config
    0xf76cbc, // il2cpp_set_memory_callbacks
    0xf76cc0, // il2cpp_get_corlib
    0xf76cc4, // il2cpp_add_internal_call
    0xf76cc8, // il2cpp_resolve_icall
    0xf76ccc, // il2cpp_alloc
    0xf76cd0, // il2cpp_free
    0xf76cd4, // il2cpp_array_class_get
    0xf76cd8, // il2cpp_array_length
    0xf76cdc, // il2cpp_array_get_byte_length
    0xf76ce0, // il2cpp_array_new
    0xf76ce4, // il2cpp_array_new_specific
    0xf76ce8, // il2cpp_array_new_full
    0xf76cec, // il2cpp_bounded_array_class_get
    0xf76cf0, // il2cpp_array_element_size
    0xf76cf4, // il2cpp_assembly_get_image
    0xf778f8, // il2cpp_class_for_each
    0xf76cf8, // il2cpp_class_enum_basetype
    0xf76d00, // il2cpp_class_is_generic
    0xf76d04, // il2cpp_class_is_inflated
    0xf76d08, // il2cpp_class_is_assignable_from
    0xf76d0c, // il2cpp_class_is_subclass_of
    0xf76d10, // il2cpp_class_has_parent
    0xf76d14, // il2cpp_class_from_il2cpp_type
    0xf76d1c, // il2cpp_class_from_name
    0xf76cfc, // il2cpp_class_from_system_type
    0xf76d20, // il2cpp_class_get_element_class
    0xf76d24, // il2cpp_class_get_events
    0xf76d28, // il2cpp_class_get_fields
    0xf76d2c, // il2cpp_class_get_nested_types
    0xf76d30, // il2cpp_class_get_interfaces
    0xf76d34, // il2cpp_class_get_properties
    0xf76d38, // il2cpp_class_get_property_from_name
    0xf76d3c, // il2cpp_class_get_field_from_name
    0xf76d40, // il2cpp_class_get_methods
    0xf76d44, // il2cpp_class_get_method_from_name
    0xf76d48, // il2cpp_class_get_name
    0xf778d8, // il2cpp_type_get_name_chunked
    0xf76d4c, // il2cpp_class_get_namespace
    0xf76d50, // il2cpp_class_get_parent
    0xf76d54, // il2cpp_class_get_declaring_type
    0xf76d58, // il2cpp_class_instance_size
    0xf76d5c, // il2cpp_class_num_fields
    0xf76d60, // il2cpp_class_is_valuetype
    0xf76d68, // il2cpp_class_value_size
    0xf76d64, // il2cpp_class_is_blittable
    0xf76d6c, // il2cpp_class_get_flags
    0xf76d70, // il2cpp_class_is_abstract
    0xf76d74, // il2cpp_class_is_interface
    0xf76d78, // il2cpp_class_array_element_size
    0xf76d7c, // il2cpp_class_from_type
    0xf76d84, // il2cpp_class_get_type
    0xf76d88, // il2cpp_class_get_type_token
    0xf76d90, // il2cpp_class_has_attribute
    0xf76d94, // il2cpp_class_has_references
    0xf76d98, // il2cpp_class_is_enum
    0xf76d9c, // il2cpp_class_get_image
    0xf76da0, // il2cpp_class_get_assemblyname
    0xf76da4, // il2cpp_class_get_rank
    0xf76dac, // il2cpp_class_get_data_size
    0xf76db4, // il2cpp_class_get_static_field_data
    0xf76dbc, // il2cpp_class_get_bitmap_size
    0xf76dc0, // il2cpp_class_get_bitmap
    0xf76de4, // il2cpp_stats_dump_to_file
    0xf77170, // il2cpp_stats_get_value
    0xf771fc, // il2cpp_domain_get
    0xf77200, // il2cpp_domain_assembly_open
    0xf77208, // il2cpp_domain_get_assemblies
    0xf7723c, // il2cpp_raise_exception
    0xf7724c, // il2cpp_exception_from_name_msg
    0xf77250, // il2cpp_get_exception_argument_null
    0xf77254, // il2cpp_format_exception
    0xf772bc, // il2cpp_format_stack_trace
    0xf77324, // il2cpp_unhandled_exception
    0xf77328, // il2cpp_native_stack_trace
    0xf773ec, // il2cpp_field_get_flags
    0xf773e8, // il2cpp_field_get_name
    0xf773f0, // il2cpp_field_get_parent
    0xf773f4, // il2cpp_field_get_offset
    0xf773f8, // il2cpp_field_get_type
    0xf773fc, // il2cpp_field_get_value
    0xf77400, // il2cpp_field_get_value_object
    0xf77404, // il2cpp_field_has_attribute
    0xf77408, // il2cpp_field_set_value
    0xf77410, // il2cpp_field_static_get_value
    0xf77414, // il2cpp_field_static_set_value
    0xf7740c, // il2cpp_field_set_value_object
    0xf77418, // il2cpp_field_is_literal
    0xf77428, // il2cpp_gc_collect
    0xf7742c, // il2cpp_gc_collect_a_little
    0xf77430, // il2cpp_gc_start_incremental_collection
    0xf77438, // il2cpp_gc_disable
    0xf77434, // il2cpp_gc_enable
    0xf7743c, // il2cpp_gc_is_disabled
    0xf77440, // il2cpp_gc_set_mode
    0xf77448, // il2cpp_gc_get_max_time_slice_ns
    0xf7744c, // il2cpp_gc_set_max_time_slice_ns
    0xf77444, // il2cpp_gc_is_incremental
    0xf77450, // il2cpp_gc_get_used_size
    0xf77454, // il2cpp_gc_get_heap_size
    0xf774c4, // il2cpp_gc_wbarrier_set_field
    0xf774cc, // il2cpp_gc_has_strict_wbarriers
    0xf774d4, // il2cpp_gc_set_external_allocation_tracker
    0xf774d8, // il2cpp_gc_set_external_wbarrier_tracker
    0xf77458, // il2cpp_gc_foreach_heap
    0xf77484, // il2cpp_stop_gc_world
    0xf77488, // il2cpp_start_gc_world
    0xf7748c, // il2cpp_gchandle_new
    0xf77490, // il2cpp_gchandle_new_weakref
    0xf77494, // il2cpp_gchandle_get_target
    0xf774dc, // il2cpp_gchandle_free
    0xf77498, // il2cpp_gchandle_foreach_get_target
    0xf774e0, // il2cpp_object_header_size
    0xf774e8, // il2cpp_array_object_header_size
    0xf774f0, // il2cpp_offset_of_array_length_in_array_object_header
    0xf774f8, // il2cpp_offset_of_array_bounds_in_array_object_header
    0xf77500, // il2cpp_allocation_granularity
    0xf77508, // il2cpp_unity_liveness_calculation_begin
    0xf7750c, // il2cpp_unity_liveness_calculation_end
    0xf77510, // il2cpp_unity_liveness_calculation_from_root
    0xf77514, // il2cpp_unity_liveness_calculation_from_statics
    0xf77518, // il2cpp_method_get_return_type
    0xf77544, // il2cpp_method_get_declaring_type
    0xf77524, // il2cpp_method_get_name
    0xf7751c, // il2cpp_method_get_from_reflection
    0xf77520, // il2cpp_method_get_object
    0xf77528, // il2cpp_method_is_generic
    0xf7752c, // il2cpp_method_is_inflated
    0xf77530, // il2cpp_method_is_instance
    0xf77534, // il2cpp_method_get_param_count
    0xf77538, // il2cpp_method_get_param
    0xf7753c, // il2cpp_method_get_class
    0xf77540, // il2cpp_method_has_attribute
    0xf77548, // il2cpp_method_get_flags
    0xf7757c, // il2cpp_method_get_token
    0xf77580, // il2cpp_method_get_param_name
    0xf775b0, // il2cpp_property_get_flags
    0xf775a4, // il2cpp_property_get_get_method
    0xf775a8, // il2cpp_property_get_set_method
    0xf775a0, // il2cpp_property_get_name
    0xf775ac, // il2cpp_property_get_parent
    0xf775b4, // il2cpp_object_get_class
    0xf775b8, // il2cpp_object_get_size
    0xf775bc, // il2cpp_object_get_virtual_method
    0xf775c0, // il2cpp_object_new
    0xf775e4, // il2cpp_object_unbox
    0xf775e8, // il2cpp_value_box
    0xf775ec, // il2cpp_monitor_enter
    0xf775f0, // il2cpp_monitor_try_enter
    0xf775f4, // il2cpp_monitor_exit
    0xf775f8, // il2cpp_monitor_pulse
    0xf775fc, // il2cpp_monitor_pulse_all
    0xf77600, // il2cpp_monitor_wait
    0xf77604, // il2cpp_monitor_try_wait
    0xf77620, // il2cpp_runtime_invoke
    0xf77608, // il2cpp_runtime_invoke_convert_args
    0xf77638, // il2cpp_runtime_class_init
    0xf7763c, // il2cpp_runtime_object_init
    0xf77640, // il2cpp_runtime_object_init_exception
    0xf77644, // il2cpp_runtime_unhandled_exception_policy_set
    0xf77648, // il2cpp_string_length
    0xf7764c, // il2cpp_string_chars
    0xf77650, // il2cpp_string_new
    0xf7765c, // il2cpp_string_new_len
    0xf77658, // il2cpp_string_new_utf16
    0xf77654, // il2cpp_string_new_wrapper
    0xf77660, // il2cpp_string_intern
    0xf77664, // il2cpp_string_is_interned
    0xf77668, // il2cpp_thread_current
    0xf7766c, // il2cpp_thread_attach
    0xf77670, // il2cpp_thread_detach
    0xf77674, // il2cpp_thread_get_all_attached_threads
    0xf77678, // il2cpp_is_vm_thread
    0xf7767c, // il2cpp_current_thread_walk_frame_stack
    0xf77680, // il2cpp_thread_walk_frame_stack
    0xf77684, // il2cpp_current_thread_get_top_frame
    0xf77690, // il2cpp_thread_get_top_frame
    0xf77694, // il2cpp_current_thread_get_frame_at
    0xf77698, // il2cpp_thread_get_frame_at
    0xf7769c, // il2cpp_current_thread_get_stack_depth
    0xf776bc, // il2cpp_thread_get_stack_depth
    0xf776c4, // il2cpp_override_stack_backtrace
    0xf776c8, // il2cpp_type_get_object
    0xf776cc, // il2cpp_type_get_type
    0xf776d0, // il2cpp_type_get_class_or_element_class
    0xf776d4, // il2cpp_type_get_name
    0xf7781c, // il2cpp_type_is_byref
    0xf77828, // il2cpp_type_get_attrs
    0xf77830, // il2cpp_type_equals
    0xf77778, // il2cpp_type_get_assembly_qualified_name
    0xf77834, // il2cpp_type_is_static
    0xf77840, // il2cpp_type_is_pointer_type
    0xf77854, // il2cpp_image_get_assembly
    0xf77858, // il2cpp_image_get_name
    0xf7785c, // il2cpp_image_get_filename
    0xf77860, // il2cpp_image_get_entry_point
    0xf77864, // il2cpp_image_get_class_count
    0xf7787c, // il2cpp_image_get_class
    0xf77880, // il2cpp_capture_memory_snapshot
    0xf77884, // il2cpp_free_captured_memory_snapshot
    0xf77888, // il2cpp_set_find_plugin_callback
    0xf7788c, // il2cpp_register_log_callback
    0xf77890, // il2cpp_debugger_set_agent_options
    0xf77894, // il2cpp_is_debugger_attached
    0xf77898, // il2cpp_register_debugger_agent_transport
    0xf7789c, // il2cpp_debug_get_method_info
    0xf778a0, // il2cpp_unity_install_unitytls_interface
    0xf778a4, // il2cpp_custom_attrs_from_class
    0xf778b4, // il2cpp_custom_attrs_from_method
    0xf778cc, // il2cpp_custom_attrs_get_attr
    0xf778c8, // il2cpp_custom_attrs_has_attr
    0xf778d0, // il2cpp_custom_attrs_construct
    0xf778d4, // il2cpp_custom_attrs_free
    0xf778e8, // il2cpp_class_set_userdata
    0xf778f0, // il2cpp_class_get_userdata_offset
    0xf776c0, // il2cpp_set_default_thread_affinity
};

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


__attribute__((visibility("default"), naked))
void il2cpp_init(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 0\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 0]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 0\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 0]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_init_utf16(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 8\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 8]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 8\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 8]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_shutdown(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 16\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 16]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 16\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 16]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_set_config_dir(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 24\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 24]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 24\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 24]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_set_data_dir(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 32\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 32]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 32\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 32]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_set_temp_dir(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 40\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 40]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 40\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 40]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_set_commandline_arguments(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 48\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 48]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 48\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 48]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_set_commandline_arguments_utf16(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 56\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 56]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 56\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 56]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_set_config_utf16(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 64\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 64]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 64\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 64]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_set_config(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 72\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 72]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 72\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 72]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_set_memory_callbacks(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 80\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 80]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 80\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 80]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_get_corlib(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 88\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 88]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 88\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 88]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_add_internal_call(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 96\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 96]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 96\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 96]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_resolve_icall(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 104\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 104]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 104\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 104]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_alloc(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 112\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 112]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 112\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 112]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_free(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 120\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 120]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 120\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 120]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_array_class_get(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 128\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 128]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 128\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 128]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_array_length(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 136\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 136]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 136\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 136]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_array_get_byte_length(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 144\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 144]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 144\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 144]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_array_new(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 152\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 152]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 152\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 152]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_array_new_specific(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 160\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 160]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 160\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 160]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_array_new_full(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 168\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 168]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 168\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 168]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_bounded_array_class_get(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 176\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 176]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 176\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 176]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_array_element_size(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 184\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 184]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 184\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 184]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_assembly_get_image(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 192\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 192]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 192\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 192]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_for_each(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 200\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 200]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 200\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 200]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_enum_basetype(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 208\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 208]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 208\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 208]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_is_generic(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 216\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 216]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 216\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 216]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_is_inflated(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 224\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 224]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 224\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 224]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_is_assignable_from(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 232\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 232]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 232\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 232]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_is_subclass_of(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 240\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 240]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 240\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 240]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_has_parent(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 248\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 248]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 248\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 248]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_from_il2cpp_type(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 256\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 256]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 256\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 256]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_from_name(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 264\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 264]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 264\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 264]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_from_system_type(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 272\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 272]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 272\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 272]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_element_class(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 280\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 280]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 280\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 280]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_events(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 288\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 288]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 288\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 288]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_fields(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 296\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 296]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 296\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 296]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_nested_types(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 304\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 304]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 304\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 304]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_interfaces(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 312\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 312]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 312\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 312]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_properties(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 320\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 320]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 320\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 320]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_property_from_name(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 328\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 328]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 328\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 328]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_field_from_name(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 336\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 336]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 336\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 336]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_methods(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 344\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 344]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 344\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 344]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_method_from_name(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 352\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 352]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 352\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 352]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_name(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 360\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 360]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 360\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 360]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_type_get_name_chunked(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 368\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 368]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 368\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 368]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_namespace(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 376\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 376]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 376\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 376]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_parent(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 384\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 384]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 384\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 384]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_declaring_type(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 392\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 392]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 392\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 392]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_instance_size(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 400\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 400]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 400\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 400]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_num_fields(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 408\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 408]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 408\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 408]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_is_valuetype(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 416\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 416]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 416\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 416]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_value_size(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 424\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 424]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 424\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 424]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_is_blittable(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 432\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 432]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 432\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 432]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_flags(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 440\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 440]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 440\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 440]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_is_abstract(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 448\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 448]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 448\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 448]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_is_interface(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 456\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 456]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 456\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 456]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_array_element_size(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 464\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 464]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 464\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 464]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_from_type(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 472\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 472]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 472\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 472]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_type(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 480\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 480]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 480\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 480]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_type_token(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 488\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 488]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 488\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 488]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_has_attribute(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 496\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 496]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 496\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 496]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_has_references(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 504\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 504]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 504\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 504]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_is_enum(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 512\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 512]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 512\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 512]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_image(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 520\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 520]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 520\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 520]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_assemblyname(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 528\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 528]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 528\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 528]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_rank(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 536\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 536]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 536\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 536]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_data_size(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 544\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 544]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 544\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 544]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_static_field_data(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 552\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 552]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 552\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 552]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_bitmap_size(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 560\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 560]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 560\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 560]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_bitmap(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 568\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 568]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 568\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 568]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_stats_dump_to_file(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 576\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 576]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 576\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 576]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_stats_get_value(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 584\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 584]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 584\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 584]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_domain_get(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 592\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 592]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 592\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 592]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_domain_assembly_open(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 600\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 600]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 600\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 600]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_domain_get_assemblies(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 608\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 608]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 608\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 608]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_raise_exception(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 616\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 616]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 616\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 616]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_exception_from_name_msg(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 624\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 624]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 624\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 624]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_get_exception_argument_null(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 632\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 632]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 632\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 632]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_format_exception(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 640\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 640]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 640\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 640]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_format_stack_trace(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 648\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 648]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 648\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 648]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_unhandled_exception(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 656\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 656]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 656\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 656]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_native_stack_trace(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 664\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 664]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 664\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 664]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_field_get_flags(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 672\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 672]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 672\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 672]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_field_get_name(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 680\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 680]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 680\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 680]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_field_get_parent(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 688\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 688]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 688\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 688]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_field_get_offset(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 696\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 696]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 696\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 696]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_field_get_type(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 704\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 704]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 704\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 704]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_field_get_value(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 712\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 712]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 712\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 712]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_field_get_value_object(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 720\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 720]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 720\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 720]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_field_has_attribute(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 728\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 728]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 728\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 728]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_field_set_value(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 736\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 736]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 736\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 736]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_field_static_get_value(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 744\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 744]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 744\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 744]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_field_static_set_value(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 752\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 752]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 752\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 752]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_field_set_value_object(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 760\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 760]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 760\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 760]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_field_is_literal(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 768\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 768]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 768\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 768]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_collect(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 776\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 776]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 776\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 776]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_collect_a_little(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 784\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 784]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 784\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 784]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_start_incremental_collection(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 792\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 792]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 792\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 792]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_disable(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 800\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 800]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 800\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 800]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_enable(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 808\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 808]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 808\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 808]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_is_disabled(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 816\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 816]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 816\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 816]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_set_mode(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 824\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 824]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 824\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 824]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_get_max_time_slice_ns(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 832\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 832]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 832\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 832]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_set_max_time_slice_ns(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 840\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 840]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 840\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 840]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_is_incremental(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 848\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 848]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 848\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 848]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_get_used_size(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 856\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 856]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 856\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 856]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_get_heap_size(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 864\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 864]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 864\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 864]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_wbarrier_set_field(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 872\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 872]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 872\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 872]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_has_strict_wbarriers(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 880\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 880]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 880\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 880]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_set_external_allocation_tracker(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 888\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 888]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 888\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 888]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_set_external_wbarrier_tracker(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 896\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 896]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 896\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 896]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gc_foreach_heap(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 904\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 904]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 904\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 904]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_stop_gc_world(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 912\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 912]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 912\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 912]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_start_gc_world(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 920\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 920]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 920\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 920]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gchandle_new(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 928\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 928]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 928\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 928]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gchandle_new_weakref(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 936\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 936]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 936\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 936]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gchandle_get_target(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 944\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 944]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 944\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 944]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gchandle_free(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 952\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 952]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 952\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 952]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_gchandle_foreach_get_target(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 960\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 960]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 960\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 960]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_object_header_size(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 968\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 968]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 968\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 968]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_array_object_header_size(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 976\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 976]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 976\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 976]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_offset_of_array_length_in_array_object_header(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 984\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 984]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 984\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 984]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_offset_of_array_bounds_in_array_object_header(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 992\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 992]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 992\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 992]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_allocation_granularity(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1000\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1000]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1000\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1000]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_unity_liveness_calculation_begin(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1008\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1008]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1008\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1008]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_unity_liveness_calculation_end(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1016\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1016]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1016\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1016]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_unity_liveness_calculation_from_root(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1024\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1024]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1024\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1024]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_unity_liveness_calculation_from_statics(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1032\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1032]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1032\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1032]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_get_return_type(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1040\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1040]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1040\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1040]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_get_declaring_type(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1048\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1048]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1048\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1048]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_get_name(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1056\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1056]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1056\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1056]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_get_from_reflection(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1064\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1064]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1064\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1064]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_get_object(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1072\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1072]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1072\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1072]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_is_generic(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1080\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1080]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1080\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1080]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_is_inflated(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1088\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1088]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1088\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1088]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_is_instance(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1096\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1096]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1096\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1096]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_get_param_count(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1104\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1104]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1104\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1104]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_get_param(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1112\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1112]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1112\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1112]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_get_class(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1120\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1120]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1120\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1120]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_has_attribute(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1128\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1128]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1128\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1128]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_get_flags(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1136\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1136]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1136\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1136]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_get_token(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1144\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1144]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1144\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1144]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_method_get_param_name(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1152\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1152]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1152\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1152]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_property_get_flags(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1160\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1160]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1160\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1160]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_property_get_get_method(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1168\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1168]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1168\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1168]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_property_get_set_method(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1176\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1176]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1176\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1176]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_property_get_name(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1184\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1184]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1184\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1184]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_property_get_parent(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1192\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1192]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1192\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1192]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_object_get_class(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1200\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1200]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1200\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1200]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_object_get_size(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1208\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1208]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1208\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1208]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_object_get_virtual_method(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1216\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1216]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1216\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1216]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_object_new(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1224\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1224]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1224\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1224]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_object_unbox(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1232\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1232]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1232\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1232]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_value_box(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1240\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1240]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1240\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1240]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_monitor_enter(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1248\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1248]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1248\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1248]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_monitor_try_enter(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1256\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1256]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1256\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1256]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_monitor_exit(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1264\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1264]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1264\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1264]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_monitor_pulse(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1272\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1272]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1272\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1272]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_monitor_pulse_all(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1280\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1280]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1280\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1280]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_monitor_wait(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1288\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1288]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1288\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1288]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_monitor_try_wait(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1296\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1296]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1296\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1296]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_runtime_invoke(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1304\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1304]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1304\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1304]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_runtime_invoke_convert_args(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1312\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1312]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1312\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1312]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_runtime_class_init(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1320\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1320]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1320\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1320]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_runtime_object_init(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1328\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1328]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1328\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1328]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_runtime_object_init_exception(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1336\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1336]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1336\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1336]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_runtime_unhandled_exception_policy_set(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1344\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1344]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1344\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1344]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_string_length(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1352\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1352]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1352\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1352]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_string_chars(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1360\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1360]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1360\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1360]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_string_new(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1368\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1368]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1368\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1368]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_string_new_len(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1376\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1376]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1376\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1376]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_string_new_utf16(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1384\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1384]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1384\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1384]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_string_new_wrapper(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1392\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1392]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1392\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1392]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_string_intern(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1400\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1400]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1400\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1400]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_string_is_interned(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1408\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1408]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1408\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1408]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_thread_current(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1416\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1416]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1416\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1416]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_thread_attach(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1424\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1424]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1424\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1424]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_thread_detach(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1432\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1432]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1432\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1432]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_thread_get_all_attached_threads(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1440\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1440]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1440\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1440]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_is_vm_thread(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1448\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1448]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1448\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1448]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_current_thread_walk_frame_stack(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1456\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1456]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1456\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1456]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_thread_walk_frame_stack(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1464\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1464]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1464\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1464]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_current_thread_get_top_frame(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1472\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1472]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1472\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1472]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_thread_get_top_frame(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1480\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1480]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1480\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1480]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_current_thread_get_frame_at(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1488\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1488]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1488\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1488]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_thread_get_frame_at(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1496\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1496]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1496\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1496]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_current_thread_get_stack_depth(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1504\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1504]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1504\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1504]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_thread_get_stack_depth(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1512\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1512]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1512\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1512]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_override_stack_backtrace(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1520\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1520]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1520\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1520]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_type_get_object(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1528\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1528]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1528\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1528]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_type_get_type(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1536\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1536]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1536\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1536]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_type_get_class_or_element_class(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1544\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1544]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1544\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1544]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_type_get_name(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1552\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1552]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1552\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1552]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_type_is_byref(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1560\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1560]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1560\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1560]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_type_get_attrs(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1568\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1568]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1568\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1568]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_type_equals(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1576\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1576]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1576\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1576]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_type_get_assembly_qualified_name(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1584\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1584]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1584\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1584]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_type_is_static(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1592\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1592]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1592\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1592]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_type_is_pointer_type(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1600\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1600]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1600\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1600]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_image_get_assembly(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1608\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1608]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1608\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1608]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_image_get_name(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1616\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1616]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1616\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1616]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_image_get_filename(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1624\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1624]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1624\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1624]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_image_get_entry_point(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1632\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1632]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1632\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1632]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_image_get_class_count(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1640\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1640]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1640\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1640]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_image_get_class(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1648\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1648]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1648\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1648]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_capture_memory_snapshot(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1656\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1656]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1656\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1656]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_free_captured_memory_snapshot(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1664\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1664]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1664\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1664]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_set_find_plugin_callback(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1672\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1672]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1672\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1672]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_register_log_callback(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1680\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1680]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1680\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1680]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_debugger_set_agent_options(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1688\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1688]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1688\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1688]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_is_debugger_attached(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1696\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1696]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1696\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1696]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_register_debugger_agent_transport(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1704\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1704]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1704\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1704]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_debug_get_method_info(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1712\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1712]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1712\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1712]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_unity_install_unitytls_interface(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1720\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1720]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1720\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1720]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_custom_attrs_from_class(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1728\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1728]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1728\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1728]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_custom_attrs_from_method(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1736\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1736]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1736\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1736]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_custom_attrs_get_attr(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1744\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1744]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1744\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1744]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_custom_attrs_has_attr(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1752\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1752]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1752\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1752]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_custom_attrs_construct(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1760\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1760]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1760\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1760]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_custom_attrs_free(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1768\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1768]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1768\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1768]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_set_userdata(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1776\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1776]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1776\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1776]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_class_get_userdata_offset(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1784\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1784]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1784\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1784]\n"
        "br x16\n"
    );
}


__attribute__((visibility("default"), naked))
void il2cpp_set_default_thread_affinity(void) {
    __asm__ volatile (
        "adrp x16, g_target_ptrs + 1792\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1792]\n"
        "cbz x16, 1f\n"
        "br x16\n"
        "1:\n"
        "stp x29, x30, [sp, #-16]!\n"
        "bl init_bridge\n"
        "ldp x29, x30, [sp], #16\n"
        "adrp x16, g_target_ptrs + 1792\n"
        "ldr x16, [x16, :lo12:g_target_ptrs + 1792]\n"
        "br x16\n"
    );
}
