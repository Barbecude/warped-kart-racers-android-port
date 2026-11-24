// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.CampaignPanelButtonBehaviour

// ============================================================
// RVA: 0x15406c0 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_Button
// ============================================================

undefined8 Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_Button(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15406c8 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_FlagsBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_FlagsBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15406d0 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_NamePanel
// ============================================================

undefined8 Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_NamePanel(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15406d8 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_NameText
// ============================================================

undefined8 Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_NameText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15406e0 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_HighlightImage
// ============================================================

undefined8 Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_HighlightImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15406e8 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_BorderImage
// ============================================================

undefined8 Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_BorderImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x15406f0 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_BackgroundImage
// ============================================================

undefined8 Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_BackgroundImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15406f8 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_LockIcon
// ============================================================

undefined8 Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_LockIcon(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x1540700 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_LockCanvasGroup
// ============================================================

undefined8 Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_LockCanvasGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x1540708 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_UnlockImages
// ============================================================

undefined8 Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_UnlockImages(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x1540710 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_ChallengePanel
// ============================================================

undefined8 Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_ChallengePanel(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1540718 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_CompleteColor
// ============================================================

undefined4 Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_CompleteColor(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1540724 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_DifficultyImage
// ============================================================

undefined8 Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_DifficultyImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x154072c | Atlas.UI.Screens.CampaignPanelButtonBehaviour.get_GraphicsToTransitionToColour
// ============================================================

undefined8
Atlas_UI_Screens_CampaignPanelButtonBehaviour__get_GraphicsToTransitionToColour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x1540734 | Atlas.UI.Screens.CampaignPanelButtonBehaviour.TransitionToColour
// ============================================================

long Atlas_UI_Screens_CampaignPanelButtonBehaviour__TransitionToColour
               (undefined4 param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if ((bRam0000000003eb4f37 & 1) == 0) {
    func_0x00f78a20(0x3d329c8);
    func_0x00f78a20(0x3d329d0);
    func_0x00f78a20(0x3d329d8);
    func_0x00f78a20(0x3d3b180);
    func_0x00f78a20(0x3d77380);
    bRam0000000003eb4f37 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  if (*(long *)(param_2 + 0x88) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar6 = *plVar5;
      ___cxa_end_catch();
      lVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003eb4000);
      if (lVar6 == 0) {
        return lVar4;
      }
      func_0x00f78ac0(lVar6,0);
    }
    lVar4 = __Unwind_Resume();
    if ((bRam0000000003eb4f38 & 1) == 0) {
      func_0x00f78a20(0x3d3b178);
      func_0x00f78a20(0x3d1dba0);
      bRam0000000003eb4f38 = 1;
    }
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<MaskableGraphic>_TypeInfo*/ uRam0000000003d1dba0);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar3,uRam0000000003d3b178);
    *(undefined8 *)(lVar4 + 0x88) = uVar3;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar4;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,*(long *)(param_2 + 0x88),uRam0000000003d3b180);
  while( true ) {
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d329d0);
    if ((uVar2 & 1) == 0) {
      lVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d329c8);
      return lVar4;
    }
    if (plStack_48 == (long *)0x0) break;
    uVar3 = (**(code **)(*plStack_48 + 0x358))(plStack_48,*(undefined8 *)(*plStack_48 + 0x360));
    uStack_68 = 0;
    uStack_60 = 0;
    /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0,0x3f800000,0x3f800000,0x3f800000,&uStack_68,0);
    /*DG.Tweening.ShortcutExtensions$$DOVector*/ func_0x016b1f34((undefined4)uStack_68,uStack_68._4_4_,(undefined4)uStack_60,uStack_60._4_4_,
                    param_1,uVar3,/*STR('_Params')*/ uRam0000000003d77380,0);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1540878);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x15408c0 | Atlas.UI.Screens.CampaignPanelButtonBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_CampaignPanelButtonBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4f38 & 1) == 0) {
    func_0x00f78a20(0x3d3b178);
    func_0x00f78a20(0x3d1dba0);
    bRam0000000003eb4f38 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<MaskableGraphic>_TypeInfo*/ uRam0000000003d1dba0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3b178);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
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



