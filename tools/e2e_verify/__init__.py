"""External verification harness for Warped Kart Racers 1:1 port (E2E-M1).

Stdlib-only package covering:
- F1: Decompilation completeness & Ghidra process/project safety
- F2: Symbol resolution & live progress dashboard accuracy
- F3: Unity project hygiene, .asmdef DAG & batchmode compile/test verification
- F4: 1:1 il2cpp_dump/dump.cs parity, stub detection & .cs.meta GUID integrity
"""

__version__ = "1.0.0"

__all__ = [
    "verify_decompilation",
    "verify_parity_and_fidelity",
    "verify_unity_build",
    "run_e2e_suite",
]
