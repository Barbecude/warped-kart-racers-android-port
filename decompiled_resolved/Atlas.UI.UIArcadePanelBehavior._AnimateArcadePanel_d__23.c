// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIArcadePanelBehavior.<AnimateArcadePanel>d__23

// ============================================================
// RVA: 0x156b8c4 | Atlas.UI.UIArcadePanelBehavior.<AnimateArcadePanel>d__23..ctor
// ============================================================

void Atlas_UI_UIArcadePanelBehavior__AnimateArcadePanel_d__23___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x156b8f0 | Atlas.UI.UIArcadePanelBehavior.<AnimateArcadePanel>d__23.System.IDisposable.Dispose
// ============================================================

undefined1  [16]
Atlas_UI_UIArcadePanelBehavior__AnimateArcadePanel_d__23__System_IDisposable_Dispose
          (long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (*(int *)(param_1 + 0x10) == 2 || *(int *)(param_1 + 0x10) == -3) {
    if ((bRam0000000003eb5008 & 1) == 0) {
      func_0x00f78a20(0x3d330c0);
      bRam0000000003eb5008 = 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    auVar2._8_8_ = uRam0000000003d330c0;
    auVar2._0_8_ = param_1 + 0x30;
    return auVar2;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



// ============================================================
// RVA: 0x156b908 | Atlas.UI.UIArcadePanelBehavior.<AnimateArcadePanel>d__23.<>m__Finally1
// ============================================================

undefined1  [16]
Atlas_UI_UIArcadePanelBehavior__AnimateArcadePanel_d__23____m__Finally1(long param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb5008 & 1) == 0) {
    func_0x00f78a20(0x3d330c0);
    bRam0000000003eb5008 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  auVar1._8_8_ = uRam0000000003d330c0;
  auVar1._0_8_ = param_1 + 0x30;
  return auVar1;
}



// ============================================================
// RVA: 0x156b964 | Atlas.UI.UIArcadePanelBehavior.<AnimateArcadePanel>d__23.MoveNext
// ============================================================

undefined8 Atlas_UI_UIArcadePanelBehavior__AnimateArcadePanel_d__23__MoveNext(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5007 & 1) == 0) {
    func_0x00f78a20(0x3d330c8);
    func_0x00f78a20(0x3d330d0);
    func_0x00f78a20(0x3d3c640);
    func_0x00f78a20(0x3d25a68);
    func_0x00f78a20(0x3d68fa8);
    func_0x00f78a20(0x3d68fa0);
    bRam0000000003eb5007 = 1;
  }
  if (3 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    uVar3 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
    /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(uVar5,uVar3,0);
    uVar5 = 1;
    goto code_r0x0156bb88;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x0156bbe4;
    }
    if (*(long *)(lVar4 + 0x78) == 0) {
      func_0x00f78af4();
      goto code_r0x0156bbe4;
    }
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar4 + 0x78),1,0);
    if (*(long *)(lVar4 + 0x78) == 0) {
      func_0x00f78af4();
      goto code_r0x0156bbe4;
    }
    /*UnityEngine.Animator$$Play*/ func_0x032113b4(*(long *)(lVar4 + 0x78),/*STR('Anim_VFX_UIShineEffect')*/ uRam0000000003d68fa0,0);
    if (*(long *)(lVar4 + 0x80) == 0) {
      func_0x00f78af4();
      goto code_r0x0156bbe4;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*(long *)(lVar4 + 0x80),uRam0000000003d3c640);
    *(undefined8 *)(param_1 + 0x38) = uStack_40;
    *(undefined8 *)(param_1 + 0x30) = uStack_48;
    *(undefined8 *)(param_1 + 0x40) = uStack_38;
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (*(long *)(param_1 + 0x48) == 0) {
      func_0x00f78af4();
      goto code_r0x0156bbe4;
    }
    /*Atlas.UI.UIStarBehaviour$$PlayAnimation*/ func_0x0151d784(*(long *)(param_1 + 0x48),0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
      func_0x00f78af4();
    }
    else {
      if (*(long *)(lVar4 + 0x78) != 0) {
        /*UnityEngine.Animator$$Play*/ func_0x032113b4(*(long *)(lVar4 + 0x78),/*STR('Anim_VFX_UIShineEffect_Backward')*/ uRam0000000003d68fa8,0);
        return 0;
      }
      func_0x00f78af4();
    }
    goto code_r0x0156bbe4;
  }
  uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined8 *)(param_1 + 0x30),uRam0000000003d330c8);
  if ((uVar2 & 1) == 0) {
    Atlas_UI_UIArcadePanelBehavior__AnimateArcadePanel_d__23____m__Finally1(param_1);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    uVar3 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
    /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(0x40000000,uVar3,0);
    uVar5 = 3;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x40);
    *(long *)(param_1 + 0x48) = lVar4;
    if (lVar4 == 0) {
      func_0x00f78af4();
code_r0x0156bbe4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x156bbe8);
      (*pcVar1)();
    }
    /*Atlas.UI.UIStarBehaviour$$Rotate*/ func_0x0151d940(lVar4,0);
    uVar3 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
    /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(0x3e800000,uVar3,0);
    uVar5 = 2;
  }
code_r0x0156bb88:
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  return 1;
}



// ============================================================
// RVA: 0x156bc60 | Atlas.UI.UIArcadePanelBehavior.<AnimateArcadePanel>d__23.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_UIArcadePanelBehavior__AnimateArcadePanel_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156bc68 | Atlas.UI.UIArcadePanelBehavior.<AnimateArcadePanel>d__23.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_UIArcadePanelBehavior__AnimateArcadePanel_d__23__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d647a8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156bca8 | Atlas.UI.UIArcadePanelBehavior.<AnimateArcadePanel>d__23.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_UIArcadePanelBehavior__AnimateArcadePanel_d__23__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



