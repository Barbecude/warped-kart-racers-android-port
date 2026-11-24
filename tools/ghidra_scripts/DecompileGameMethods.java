// Batch-decompile all Atlas.* and Core.* IL2CPP methods from UnityFramework into per-class C files.
//@category IL2CPP

import java.io.*;
import java.nio.charset.StandardCharsets;
import java.util.*;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

public class DecompileGameMethods extends GhidraScript {

    @Override
    protected void run() throws Exception {
        String workDir = System.getenv("WKR_WORKDIR");
        if (workDir == null || workDir.isEmpty()) workDir = ".";
        String maxEnv = System.getenv("WKR_MAX_METHODS");
        int maxMethods = (maxEnv != null && !maxEnv.isEmpty()) ? Integer.parseInt(maxEnv) : 999999;

        File symFile = new File(workDir, "tools/all_symbols.tsv");
        File gameFile = new File(workDir, "tools/game_methods.tsv");
        File outDir = new File(workDir, "decompiled_c");
        outDir.mkdirs();

        println("[WKR] Loading symbol names from " + symFile.getAbsolutePath());
        int symCount = 0;
        try (BufferedReader br = new BufferedReader(new InputStreamReader(new FileInputStream(symFile), StandardCharsets.UTF_8))) {
            String line;
            while ((line = br.readLine()) != null) {
                int tab = line.indexOf('\t');
                if (tab <= 0) continue;
                long off = Long.parseUnsignedLong(line.substring(0, tab), 16);
                String name = line.substring(tab + 1);
                Address addr = toAddr(off);
                try {
                    createLabel(addr, name, true, SourceType.USER_DEFINED);
                    symCount++;
                } catch (Exception ignored) {
                }
            }
        }
        println("[WKR] Created " + symCount + " labels.");

        // Read target game methods grouped by class
        Map<String, List<String[]>> byClass = new LinkedHashMap<>();
        int totalTarget = 0;
        try (BufferedReader br = new BufferedReader(new InputStreamReader(new FileInputStream(gameFile), StandardCharsets.UTF_8))) {
            String line;
            while ((line = br.readLine()) != null) {
                String[] parts = line.split("\t");
                if (parts.length < 4) continue;
                byClass.computeIfAbsent(parts[1], k -> new ArrayList<>()).add(parts);
                totalTarget++;
                if (totalTarget >= maxMethods) break;
            }
        }
        println("[WKR] Target classes: " + byClass.size() + ", methods: " + totalTarget);

        DecompInterface decomp = new DecompInterface();
        decomp.toggleCCode(true);
        decomp.toggleSyntaxTree(false);
        decomp.openProgram(currentProgram);

        int done = 0;
        int ok = 0;
        int fail = 0;
        long t0 = System.currentTimeMillis();

        for (Map.Entry<String, List<String[]>> entry : byClass.entrySet()) {
            if (monitor.isCancelled()) break;
            String clsName = entry.getKey();
            String safeFile = clsName.replace('<', '_').replace('>', '_').replace(':', '_').replace('/', '_') + ".c";
            File clsOut = new File(outDir, safeFile);

            StringBuilder sb = new StringBuilder();
            sb.append("// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4\n");
            sb.append("// Class: ").append(clsName).append("\n\n");

            for (String[] parts : entry.getValue()) {
                if (monitor.isCancelled()) break;
                long off = Long.parseUnsignedLong(parts[0], 16);
                String methName = parts[2];
                String symName = parts[3];
                Address addr = toAddr(off);

                Function func = getFunctionAt(addr);
                if (func == null) {
                    DisassembleCommand dis = new DisassembleCommand(addr, new AddressSet(addr, addr.add(0x4000)), true);
                    dis.applyTo(currentProgram, monitor);
                    func = createFunction(addr, symName);
                }

                sb.append("// ============================================================\n");
                sb.append("// RVA: 0x").append(parts[0]).append(" | ").append(clsName).append(".").append(methName).append("\n");
                sb.append("// ============================================================\n");

                if (func != null) {
                    try {
                        DecompileResults res = decomp.decompileFunction(func, 15, monitor);
                        if (res != null && res.decompileCompleted() && res.getDecompiledFunction() != null) {
                            sb.append(res.getDecompiledFunction().getC()).append("\n\n");
                            ok++;
                        } else {
                            sb.append("// [DECOMPILE_FAILED: ").append(res != null ? res.getErrorMessage() : "null").append("]\n\n");
                            fail++;
                        }
                    } catch (Exception ex) {
                        sb.append("// [DECOMPILE_EXCEPTION: ").append(ex.getMessage()).append("]\n\n");
                        fail++;
                    }
                } else {
                    sb.append("// [NO_FUNCTION_AT_ADDRESS]\n\n");
                    fail++;
                }

                done++;
                if (done % 500 == 0) {
                    long sec = (System.currentTimeMillis() - t0) / 1000;
                    println("[WKR] Progress: " + done + "/" + totalTarget + " (ok=" + ok + ", fail=" + fail + ", " + sec + "s)");
                }
            }

            try (Writer w = new OutputStreamWriter(new FileOutputStream(clsOut), StandardCharsets.UTF_8)) {
                w.write(sb.toString());
            }
        }

        decomp.dispose();
        long sec = (System.currentTimeMillis() - t0) / 1000;
        println("[WKR] FINISHED! total=" + done + ", ok=" + ok + ", fail=" + fail + ", classes=" + byClass.size() + ", time=" + sec + "s");
    }
}
