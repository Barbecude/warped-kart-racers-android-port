// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIArcadeSingleMedalBehaviour

// ============================================================
// RVA: 0x1513c8c | Atlas.UI.UIArcadeSingleMedalBehaviour.get_Icon
// ============================================================

undefined8 Atlas_UI_UIArcadeSingleMedalBehaviour__get_Icon(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1513c94 | Atlas.UI.UIArcadeSingleMedalBehaviour.get_Text
// ============================================================

undefined8 Atlas_UI_UIArcadeSingleMedalBehaviour__get_Text(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1513c9c | Atlas.UI.UIArcadeSingleMedalBehaviour.get_GraphicsToColour
// ============================================================

undefined8 Atlas_UI_UIArcadeSingleMedalBehaviour__get_GraphicsToColour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1513ca4 | Atlas.UI.UIArcadeSingleMedalBehaviour.get_GoldColour
// ============================================================

undefined4 Atlas_UI_UIArcadeSingleMedalBehaviour__get_GoldColour(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x1513cb0 | Atlas.UI.UIArcadeSingleMedalBehaviour.Set
// ============================================================

void Atlas_UI_UIArcadeSingleMedalBehaviour__Set
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined4 uStack_44;
  
  uStack_44 = (undefined4)param_2;
  if ((bRam0000000003eb4d8e & 1) == 0) {
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb4d8e = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,param_2,param_3,0);
  }
  else {
    uVar1 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_44,0);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x558))(plVar5,uVar1,*(undefined8 *)(*plVar5 + 0x560));
    uVar1 = Atlas_UI_ArcadeMedalSprites__GetMedalSprite(param_1 + 0x58,param_4,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_1 + 0x18),uVar1,0);
      return;
    }
  }
  uVar1 = func_0x00f78af4();
  lVar2 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$AnimateMedal*/ func_0x01513ddc();
  if (lVar2 == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar4 = func_0x00f78aec();
    uVar1 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar4,uVar1,0);
  }
  else {
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar3 = (*pcRam0000000003ec01d0)(uVar1);
    if ((uVar3 & 1) != 0) {
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec01e0)(uVar1,lVar2);
      return;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar4 = func_0x00f78aec();
    uVar1 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar4,uVar1,0);
  }
  uVar1 = func_0x00f78a24(0x3d5a8a8);
  auVar6 = func_0x00f78ac0(uVar4,uVar1);
  if (pcRam0000000003ec01e0 == (code *)0x0) {
    pcRam0000000003ec01e0 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec01e0)(auVar6._0_8_,auVar6._8_8_);
  return;
}



// ============================================================
// RVA: 0x1513db0 | Atlas.UI.UIArcadeSingleMedalBehaviour.DoMedalAnimation
// ============================================================

void Atlas_UI_UIArcadeSingleMedalBehaviour__DoMedalAnimation(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$AnimateMedal*/ func_0x01513ddc();
  if (lVar1 == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar3 = func_0x00f78aec();
    uVar4 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar3,uVar4,0);
  }
  else {
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar2 = (*pcRam0000000003ec01d0)(param_1);
    if ((uVar2 & 1) != 0) {
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec01e0)(param_1,lVar1);
      return;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar3 = func_0x00f78aec();
    uVar4 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar3,uVar4,0);
  }
  uVar4 = func_0x00f78a24(0x3d5a8a8);
  auVar5 = func_0x00f78ac0(uVar3,uVar4);
  if (pcRam0000000003ec01e0 == (code *)0x0) {
    pcRam0000000003ec01e0 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec01e0)(auVar5._0_8_,auVar5._8_8_);
  return;
}



// ============================================================
// RVA: 0x1513ddc | Atlas.UI.UIArcadeSingleMedalBehaviour.AnimateMedal
// ============================================================

long Atlas_UI_UIArcadeSingleMedalBehaviour__AnimateMedal(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam0000000003eb4d8f & 1) == 0) {
    func_0x00f78a20(0x3d29440);
    bRam0000000003eb4d8f = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.UIArcadeSingleMedalBehaviour.<AnimateMedal>d__19_TypeInfo*/ uRam0000000003d29440);
  /*Atlas.UI.UIArcadeSingleMedalBehaviour.<AnimateMedal>d__19$$.ctor*/ func_0x0156c454(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    *(undefined4 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar1;
}



// ============================================================
// RVA: 0x1513e60 | Atlas.UI.UIArcadeSingleMedalBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIArcadeSingleMedalBehaviour___ctor(ulong param_1)

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



