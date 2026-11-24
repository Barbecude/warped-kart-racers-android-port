// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.UsableManager.<>c

// ============================================================
// RVA: 0x156d00c | Atlas.Gameplay.Usables.UsableManager.<>c..cctor
// ============================================================

void Atlas_Gameplay_Usables_UsableManager___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5014 & 1) == 0) {
    func_0x00f78a20(0x3d296c8);
    bRam0000000003eb5014 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.Gameplay.Usables.UsableManager.<>c_TypeInfo*/ lRam0000000003d296c8 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x156d06c | Atlas.Gameplay.Usables.UsableManager.<>c..ctor
// ============================================================

void Atlas_Gameplay_Usables_UsableManager___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x156d074 | Atlas.Gameplay.Usables.UsableManager.<>c.<CreateAoEHitCallBacks>b__36_0
// ============================================================

undefined8 Atlas_Gameplay_Usables_UsableManager___c___CreateAoEHitCallBacks_b__36_0(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5015 & 1) == 0) {
    func_0x00f78a20(0x3d1fc30);
    bRam0000000003eb5015 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Gameplay.AoEHit_TypeInfo*/ uRam0000000003d1fc30);
  /*Atlas.Gameplay.AoEHit$$.ctor*/ func_0x01449ed0(uVar1,0);
  return uVar1;
}



// ============================================================
// RVA: 0x156d0cc | Atlas.Gameplay.Usables.UsableManager.<>c.<CreateAoEHitCallBacks>b__36_1
// ============================================================

void Atlas_Gameplay_Usables_UsableManager___c___CreateAoEHitCallBacks_b__36_1
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_5 == 0) {
    func_0x00f78af4();
    return;
  }
  if ((bRam0000000003eb4732 & 1) == 0) {
    func_0x00f78a20(0x3d39c50,0);
    func_0x00f78a20(0x3d3b6f8);
    bRam0000000003eb4732 = 1;
  }
  if ((*(long *)(param_5 + 0x60) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_5 + 0x60) + 0x20), lVar1 != 0)) {
    /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_38,lVar1,0);
    lVar1 = *(long *)(param_5 + 0x50);
    *(undefined8 *)(param_5 + 0x40) = uStack_30;
    *(undefined8 *)(param_5 + 0x38) = uStack_38;
    *(undefined8 *)(param_5 + 0x48) = uStack_28;
    *(undefined8 *)(param_5 + 0x30) = 0;
    *(undefined8 *)(param_5 + 0x18) = 0;
    *(undefined8 *)(param_5 + 0x20) = 0;
    *(undefined8 *)(param_5 + 0x10) = 0;
    if (lVar1 != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(lVar1,uRam0000000003d39c50);
      if (*(long *)(param_5 + 0x58) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_5 + 0x58),uRam0000000003d3b6f8);
        *(undefined4 *)(param_5 + 0x78) = 0;
        *(long *)(param_5 + 0x50) = 0;
        *(undefined8 *)(param_5 + 0x58) = 0;
        uVar2 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        *(undefined4 *)(param_5 + 0x7c) = uVar2;
        *(undefined4 *)(param_5 + 0x80) = param_2;
        *(undefined4 *)(param_5 + 0x84) = param_3;
        *(undefined8 *)(param_5 + 0x28) = 0;
        *(undefined8 *)(param_5 + 0x60) = 0;
        return;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x156d0e8 | Atlas.Gameplay.Usables.UsableManager.<>c.<CreateAoEHitCallBacks>b__36_2
// ============================================================

void Atlas_Gameplay_Usables_UsableManager___c___CreateAoEHitCallBacks_b__36_2(void)

{
  return;
}



// ============================================================
// RVA: 0x156d0ec | Atlas.Gameplay.Usables.UsableManager.<>c.<CreateAoEHitCallBacks>b__36_3
// ============================================================

void Atlas_Gameplay_Usables_UsableManager___c___CreateAoEHitCallBacks_b__36_3(void)

{
  return;
}



