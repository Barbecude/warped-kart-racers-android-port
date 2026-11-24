// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Debugging.SimpleProfileTimer

// ============================================================
// RVA: 0x14f6ffc | Atlas.Debugging.SimpleProfileTimer.Start
// ============================================================

void Atlas_Debugging_SimpleProfileTimer__Start(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb4cab & 1) == 0) {
    func_0x00f78a20(0x3d24d88);
    bRam0000000003eb4cab = 1;
  }
  lVar1 = func_0x00f78aec(/*System.Diagnostics.Stopwatch_TypeInfo*/ lRam0000000003d24d88);
  /*System.Diagnostics.Stopwatch$$.ctor*/ func_0x02f28530(lVar1,0);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    /*System.Diagnostics.Stopwatch$$Restart*/ func_0x02f288f8(lVar1,0);
    param_1[1] = param_2;
    return;
  }
  plVar2 = (long *)func_0x00f78af4();
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    if ((bRam0000000003ebc362 & 1) == 0) {
      func_0x00f78a20(0x3d24d88,0);
      bRam0000000003ebc362 = 1;
    }
    if (*(char *)(lVar1 + 0x20) != '\0') {
      lVar4 = *(long *)(lVar1 + 0x10);
      if (((*(ushort *)(/*System.Diagnostics.Stopwatch_TypeInfo*/ lRam0000000003d24d88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Diagnostics.Stopwatch_TypeInfo*/ lRam0000000003d24d88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = func_0x00f7d7e4();
      lVar4 = (lVar3 + lVar4) - *(long *)(lVar1 + 0x18);
      if (lVar4 < 1) {
        lVar4 = 0;
      }
      *(long *)(lVar1 + 0x10) = lVar4;
      *(undefined1 *)(lVar1 + 0x20) = 0;
    }
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14f707c | Atlas.Debugging.SimpleProfileTimer.StopAndLog
// ============================================================

void Atlas_Debugging_SimpleProfileTimer__StopAndLog(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((bRam0000000003ebc362 & 1) == 0) {
      func_0x00f78a20(0x3d24d88,0);
      bRam0000000003ebc362 = 1;
    }
    if (*(char *)(lVar1 + 0x20) != '\0') {
      lVar3 = *(long *)(lVar1 + 0x10);
      if (((*(ushort *)(/*System.Diagnostics.Stopwatch_TypeInfo*/ lRam0000000003d24d88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Diagnostics.Stopwatch_TypeInfo*/ lRam0000000003d24d88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar2 = func_0x00f7d7e4();
      lVar3 = (lVar2 + lVar3) - *(long *)(lVar1 + 0x18);
      if (lVar3 < 1) {
        lVar3 = 0;
      }
      *(long *)(lVar1 + 0x10) = lVar3;
      *(undefined1 *)(lVar1 + 0x20) = 0;
    }
    return;
  }
  func_0x00f78af4();
  return;
}



