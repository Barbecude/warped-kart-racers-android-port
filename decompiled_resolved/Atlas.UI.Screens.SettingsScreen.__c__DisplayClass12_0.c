// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SettingsScreen.<>c__DisplayClass12_0

// ============================================================
// RVA: 0x1569c2c | Atlas.UI.Screens.SettingsScreen.<>c__DisplayClass12_0..ctor
// ============================================================

void Atlas_UI_Screens_SettingsScreen___c__DisplayClass12_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1569c34 | Atlas.UI.Screens.SettingsScreen.<>c__DisplayClass12_0.<BuildOptions>b__0
// ============================================================

/* WARNING: Possible PIC construction at 0x01633784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014f6518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01569c74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014f651c) */
/* WARNING: Removing unreachable block (ram,0x014f6538) */
/* WARNING: Removing unreachable block (ram,0x014f6564) */
/* WARNING: Removing unreachable block (ram,0x014f6578) */
/* WARNING: Removing unreachable block (ram,0x01cb5944) */
/* WARNING: Removing unreachable block (ram,0x01cb5968) */
/* WARNING: Removing unreachable block (ram,0x01cb5950) */
/* WARNING: Removing unreachable block (ram,0x014f6520) */
/* WARNING: Removing unreachable block (ram,0x01633788) */
/* WARNING: Removing unreachable block (ram,0x0163378c) */
/* WARNING: Removing unreachable block (ram,0x01633798) */
/* WARNING: Removing unreachable block (ram,0x016337b4) */
/* WARNING: Removing unreachable block (ram,0x016337d0) */
/* WARNING: Removing unreachable block (ram,0x01633848) */
/* WARNING: Removing unreachable block (ram,0x01633828) */
/* WARNING: Removing unreachable block (ram,0x01569c78) */

void Atlas_UI_Screens_SettingsScreen___c__DisplayClass12_0___BuildOptions_b__0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 **ppuVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined1 *puStack_40;
  code *pcStack_38;
  
  auVar9._8_8_ = unaff_x19;
  auVar9._0_8_ = unaff_x20;
  puVar1 = &stack0xfffffffffffffff0;
  ppuVar7 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    puVar8 = &Atlas_UI_Screens_SettingsScreen__SetLanguageCoroutine_d__14___ctor;
    func_0x00f78af4();
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if ((bRam0000000003eb4c9e & 1) == 0) {
      func_0x00f78a20(0x3d412d8,uVar6,0);
      bRam0000000003eb4c9e = 1;
    }
    if (*(char *)(lVar4 + 0x80) != '\0') {
      return;
    }
    if ((*(long *)(lVar4 + 0x78) != 0) &&
       (lVar2 = *(long *)(*(long *)(lVar4 + 0x78) + 0x58), lVar2 != 0)) {
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lVar2,uVar6,5,0);
      if ((uVar3 & 1) != 0) {
        return;
      }
      *(undefined1 *)(lVar4 + 0x80) = 1;
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d412d8);
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0xa8) != 0)) {
        /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(lVar2 + 0xa8),*(undefined4 *)(lVar4 + 0x48),1,0);
        lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d412d8);
        if ((lVar2 != 0) && (*(long *)(lVar2 + 0xa8) != 0)) {
          /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(lVar2 + 0xa8),4,1,0);
          lVar2 = *(long *)(lVar4 + 0x70);
          lVar4 = Atlas_UI_Screens_SettingsScreen__SetLanguageCoroutine(lVar4,uVar6);
          if (lVar2 != 0) {
            lVar2 = *(long *)(lVar2 + 0x18);
            if (lVar2 == 0) {
              func_0x00f78af4(0,lVar4,0);
              if ((bRam0000000003eb566b & 1) == 0) {
                func_0x00f78a20(0x3d1fa78);
                func_0x00f78a20(0x3d3bfa0);
                func_0x00f78a20(0x3d3a8d8);
                func_0x00f78a20(0x3d3a8e8);
                func_0x00f78a20(0x3d62580);
                func_0x00f78a20(0x3d26db0);
                bRam0000000003eb566b = 1;
              }
              func_0x00f78aec(/*Core.Application.CoroutineRunner.<>c__DisplayClass7_0_TypeInfo*/ uRam0000000003d26db0);
              return;
            }
            if (lVar4 == 0) {
              func_0x00f78a24(0x3d23938,0,0);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d7b500);
              /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar5,uVar6,0);
            }
            else {
              if (pcRam0000000003ec01d0 == (code *)0x0) {
                pcRam0000000003ec01d0 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                            );
              }
              uVar3 = (*pcRam0000000003ec01d0)(lVar2);
              if ((uVar3 & 1) != 0) {
                if (pcRam0000000003ec01e0 == (code *)0x0) {
                  pcRam0000000003ec01e0 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                              );
                }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000003ec01e0)(lVar2,lVar4);
                return;
              }
              func_0x00f78a24(0x3d1fce8);
              uVar5 = func_0x00f78aec();
              uVar6 = func_0x00f78a24(0x3d6af80);
              /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar5,uVar6,0);
            }
            uVar6 = func_0x00f78a24(0x3d5a8a8);
            auVar9 = func_0x00f78ac0(uVar5,uVar6);
            pcStack_38 = (code *)&UnityEngine_MonoBehaviour__StartCoroutineManaged2;
            puStack_40 = &stack0xfffffffffffffff0;
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              puStack_40 = &stack0xfffffffffffffff0;
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003ec01e0)(auVar9._0_8_,auVar9._8_8_);
            return;
          }
        }
      }
    }
    auVar9 = func_0x00f78af4();
    puVar1 = &stack0xffffffffffffffa0;
    pcStack_38 = Atlas_UI_Screens_SettingsScreen__SetLanguageCoroutine;
    ppuVar7 = &puStack_40;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4c9f & 1) == 0) {
      func_0x00f78a20(0x3d28c28);
      bRam0000000003eb4c9f = 1;
    }
    func_0x00f78aec(/*Atlas.UI.Screens.SettingsScreen.<SetLanguageCoroutine>d__14_TypeInfo*/ uRam0000000003d28c28);
    puVar8 = (undefined *)0x14f651c;
  }
  *(undefined1 (*) [16])(puVar1 + -0x20) = auVar9;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar7;
  *(undefined **)(puVar1 + -8) = puVar8;
  return;
}



