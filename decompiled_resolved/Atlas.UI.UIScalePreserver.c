// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIScalePreserver

// ============================================================
// RVA: 0x151d548 | Atlas.UI.UIScalePreserver.Update
// ============================================================

undefined8 Atlas_UI_UIScalePreserver__Update(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (*(long *)(param_3 + 0x20) != 0) {
    fVar3 = (float)/*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(*(long *)(param_3 + 0x20),0);
    if (*(long *)(param_3 + 0x20) != 0) {
      /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(*(long *)(param_3 + 0x20),0);
      *(float *)(param_3 + 0x28) = (1.0 - fVar3) + 1.0;
      *(float *)(param_3 + 0x2c) = (1.0 - param_2) + 1.0;
      *(undefined4 *)(param_3 + 0x30) = 0x3f800000;
      lVar1 = *(long *)(param_3 + 0x18);
      if (lVar1 != 0) {
        if (pcRam0000000003ec19a8 == (code *)0x0) {
          pcRam0000000003ec19a8 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        uVar2 = (*pcRam0000000003ec19a8)(lVar1,&stack0xffffffffffffffd0);
        return uVar2;
      }
    }
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar2;
}



// ============================================================
// RVA: 0x151d5c0 | Atlas.UI.UIScalePreserver..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIScalePreserver___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



