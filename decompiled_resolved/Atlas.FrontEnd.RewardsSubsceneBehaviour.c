// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.RewardsSubsceneBehaviour

// ============================================================
// RVA: 0x14e4038 | Atlas.FrontEnd.RewardsSubsceneBehaviour.get_CharacterRankLocator
// ============================================================

undefined8 Atlas_FrontEnd_RewardsSubsceneBehaviour__get_CharacterRankLocator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x14e4040 | Atlas.FrontEnd.RewardsSubsceneBehaviour.get_CharacterRankFloorSpotObject
// ============================================================

undefined8 Atlas_FrontEnd_RewardsSubsceneBehaviour__get_CharacterRankFloorSpotObject(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x14e4048 | Atlas.FrontEnd.RewardsSubsceneBehaviour.get_CharacterRankFloorSpotRenderer
// ============================================================

undefined8 Atlas_FrontEnd_RewardsSubsceneBehaviour__get_CharacterRankFloorSpotRenderer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x14e4050 | Atlas.FrontEnd.RewardsSubsceneBehaviour.get_KartLocator
// ============================================================

undefined8 Atlas_FrontEnd_RewardsSubsceneBehaviour__get_KartLocator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x14e4058 | Atlas.FrontEnd.RewardsSubsceneBehaviour.get_CharacterLocator
// ============================================================

undefined8 Atlas_FrontEnd_RewardsSubsceneBehaviour__get_CharacterLocator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x14e4060 | Atlas.FrontEnd.RewardsSubsceneBehaviour.get_AntennaLocator
// ============================================================

undefined8 Atlas_FrontEnd_RewardsSubsceneBehaviour__get_AntennaLocator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x14e4068 | Atlas.FrontEnd.RewardsSubsceneBehaviour.get_GliderLocator
// ============================================================

undefined8 Atlas_FrontEnd_RewardsSubsceneBehaviour__get_GliderLocator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x14e4070 | Atlas.FrontEnd.RewardsSubsceneBehaviour.get_WheelLocator
// ============================================================

undefined8 Atlas_FrontEnd_RewardsSubsceneBehaviour__get_WheelLocator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x14e4078 | Atlas.FrontEnd.RewardsSubsceneBehaviour.SetupUI
// ============================================================

long Atlas_FrontEnd_RewardsSubsceneBehaviour__SetupUI(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x50),param_2,0);
    lVar2 = *(long *)(param_1 + 0x60);
    if (lVar2 != 0) {
      lVar3 = 0x98;
      if ((int)param_2 == 0) {
        lVar3 = 0x90;
      }
      uVar4 = *(undefined8 *)(param_1 + lVar3);
      if (pcRam0000000003ec0ae0 == (code *)0x0) {
        pcRam0000000003ec0ae0 =
             (code *)func_0x00f789d4("UnityEngine.Renderer::SetMaterial(UnityEngine.Material)");
      }
                    /* WARNING: Could not recover jumptable at 0x0325bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*pcRam0000000003ec0ae0)(lVar2,uVar4);
      return lVar2;
    }
  }
  auVar5 = func_0x00f78af4();
  lVar2 = auVar5._8_8_;
  if ((bRam0000000003eb4bf6 & 1) == 0) {
    func_0x00f78a20(0x3d244b8);
    bRam0000000003eb4bf6 = 1;
  }
  lVar3 = *(long *)(auVar5._0_8_ + 0x58);
  if (lVar3 != 0) {
    lVar3 = /*UnityEngine.Renderer$$get_material*/ func_0x0325be64(lVar3,0);
    if (((*(ushort *)(/*Atlas.FrontEnd.RewardsSubsceneBehaviour_TypeInfo*/ lRam0000000003d244b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.FrontEnd.RewardsSubsceneBehaviour_TypeInfo*/ lRam0000000003d244b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((lVar2 != 0) && (lVar3 != 0)) {
      uVar1 = **(undefined4 **)(/*Atlas.FrontEnd.RewardsSubsceneBehaviour_TypeInfo*/ lRam0000000003d244b8 + 0xb8);
      puStack_58 = *(undefined **)(lVar2 + 0x70);
      puStack_60 = *(undefined1 **)(lVar2 + 0x68);
      if (pcRam0000000003ebfd28 == (code *)0x0) {
        pcRam0000000003ebfd28 =
             (code *)func_0x00f789d4("UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)"
                                     ,uVar1,0);
      }
      lVar2 = (*pcRam0000000003ebfd28)(lVar3,uVar1,&puStack_60);
      return lVar2;
    }
  }
  lVar2 = func_0x00f78af4();
  puStack_58 = &Atlas_FrontEnd_RewardsSubsceneBehaviour___ctor;
  puStack_60 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb517d & 1) == 0) {
    func_0x00f78a20(0x3d2e428,0);
    func_0x00f78a20(0x3d1c210);
    bRam0000000003eb517d = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar4,uRam0000000003d2e428);
  *(undefined8 *)(lVar2 + 0x40) = uVar4;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar2;
}



// ============================================================
// RVA: 0x14e40cc | Atlas.FrontEnd.RewardsSubsceneBehaviour.OnIPChanged
// ============================================================

long Atlas_FrontEnd_RewardsSubsceneBehaviour__OnIPChanged(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4bf6 & 1) == 0) {
    func_0x00f78a20(0x3d244b8);
    bRam0000000003eb4bf6 = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    lVar2 = /*UnityEngine.Renderer$$get_material*/ func_0x0325be64(*(long *)(param_1 + 0x58),0);
    if (((*(ushort *)(/*Atlas.FrontEnd.RewardsSubsceneBehaviour_TypeInfo*/ lRam0000000003d244b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.FrontEnd.RewardsSubsceneBehaviour_TypeInfo*/ lRam0000000003d244b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((param_2 != 0) && (lVar2 != 0)) {
      uVar1 = **(undefined4 **)(/*Atlas.FrontEnd.RewardsSubsceneBehaviour_TypeInfo*/ lRam0000000003d244b8 + 0xb8);
      puStack_38 = *(undefined **)(param_2 + 0x70);
      puStack_40 = *(undefined1 **)(param_2 + 0x68);
      if (pcRam0000000003ebfd28 == (code *)0x0) {
        pcRam0000000003ebfd28 =
             (code *)func_0x00f789d4("UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)"
                                     ,uVar1,0);
      }
      lVar2 = (*pcRam0000000003ebfd28)(lVar2,uVar1,&puStack_40);
      return lVar2;
    }
  }
  lVar2 = func_0x00f78af4();
  puStack_38 = &Atlas_FrontEnd_RewardsSubsceneBehaviour___ctor;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb517d & 1) == 0) {
    func_0x00f78a20(0x3d2e428,0);
    func_0x00f78a20(0x3d1c210);
    bRam0000000003eb517d = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar3,uRam0000000003d2e428);
  *(undefined8 *)(lVar2 + 0x40) = uVar3;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar2;
}



// ============================================================
// RVA: 0x14e4170 | Atlas.FrontEnd.RewardsSubsceneBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_FrontEnd_RewardsSubsceneBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb517d & 1) == 0) {
    func_0x00f78a20(0x3d2e428,0);
    func_0x00f78a20(0x3d1c210);
    bRam0000000003eb517d = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar1,uRam0000000003d2e428);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x14e4178 | Atlas.FrontEnd.RewardsSubsceneBehaviour..cctor
// ============================================================

void Atlas_FrontEnd_RewardsSubsceneBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb4bf7 & 1) == 0) {
    func_0x00f78a20(0x3d244b8);
    func_0x00f78a20(0x3d777a8);
    bRam0000000003eb4bf7 = 1;
  }
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_ToonColour')*/ uRam0000000003d777a8,0);
  **(undefined4 **)(/*Atlas.FrontEnd.RewardsSubsceneBehaviour_TypeInfo*/ lRam0000000003d244b8 + 0xb8) = uVar1;
  return;
}



