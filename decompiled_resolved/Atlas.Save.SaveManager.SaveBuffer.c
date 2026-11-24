// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Save.SaveManager.SaveBuffer

// ============================================================
// RVA: 0x156802c | Atlas.Save.SaveManager.SaveBuffer.ResetMemoryStream
// ============================================================

void Atlas_Save_SaveManager_SaveBuffer__ResetMemoryStream(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb4ff3 & 1) == 0) {
    func_0x00f78a20(0x3d23370);
    bRam0000000003eb4ff3 = 1;
  }
  uVar2 = *param_1;
  uVar1 = func_0x00f78aec(/*System.IO.MemoryStream_TypeInfo*/ uRam0000000003d23370);
  /*System.IO.MemoryStream$$.ctor*/ func_0x02b044fc(uVar1,uVar2,0);
  param_1[1] = uVar1;
  return;
}



