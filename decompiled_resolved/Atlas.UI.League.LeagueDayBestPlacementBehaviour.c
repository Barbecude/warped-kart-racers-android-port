// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.League.LeagueDayBestPlacementBehaviour

// ============================================================
// RVA: 0x15eda2c | Atlas.UI.League.LeagueDayBestPlacementBehaviour.get_IconImage
// ============================================================

undefined8 Atlas_UI_League_LeagueDayBestPlacementBehaviour__get_IconImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15eda34 | Atlas.UI.League.LeagueDayBestPlacementBehaviour.get_BackgroundImage
// ============================================================

undefined8 Atlas_UI_League_LeagueDayBestPlacementBehaviour__get_BackgroundImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15eda3c | Atlas.UI.League.LeagueDayBestPlacementBehaviour.get_Text
// ============================================================

undefined8 Atlas_UI_League_LeagueDayBestPlacementBehaviour__get_Text(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15eda44 | Atlas.UI.League.LeagueDayBestPlacementBehaviour.Setup
// ============================================================

undefined1  [16]
Atlas_UI_League_LeagueDayBestPlacementBehaviour__Setup(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb5414 & 1) == 0) {
    func_0x00f78a20(0x3d670b8);
    bRam0000000003eb5414 = 1;
  }
  if (param_2 < 0xc) {
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar2 = /*LeaderboardSuffixLocIDs$$GetLocID*/ func_0x015ecf4c(*(long *)(param_1 + 0x30),param_2 + 1), param_3 != 0)) {
      uVar2 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(param_3,uVar2,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        /*TMPro.TMP_Text$$SetText*/ func_0x031b3d44(*(long *)(param_1 + 0x28),uVar2,1,0);
        plVar1 = *(long **)(param_1 + 0x20);
        if (plVar1 != (long *)0x0) {
          puVar4 = (undefined4 *)(param_1 + 0x54);
          puVar3 = (undefined4 *)(param_1 + 0x48);
          puVar5 = (undefined4 *)(param_1 + 0x50);
          puVar6 = (undefined4 *)(param_1 + 0x4c);
          goto LAB_015edb18;
        }
      }
    }
  }
  else if (*(long *)(param_1 + 0x28) != 0) {
    /*TMPro.TMP_Text$$SetText*/ func_0x031b3d44(*(long *)(param_1 + 0x28),/*STR('-')*/ uRam0000000003d670b8,1,0);
    plVar1 = *(long **)(param_1 + 0x20);
    if (plVar1 != (long *)0x0) {
      puVar4 = (undefined4 *)(param_1 + 0x44);
      puVar3 = (undefined4 *)(param_1 + 0x38);
      puVar5 = (undefined4 *)(param_1 + 0x40);
      puVar6 = (undefined4 *)(param_1 + 0x3c);
LAB_015edb18:
                    /* WARNING: Could not recover jumptable at 0x015edb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar7 = (**(code **)(*plVar1 + 0x2a8))
                         (*puVar3,*puVar6,*puVar5,*puVar4,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
      return auVar7;
    }
  }
  auVar7._0_8_ = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar7._8_8_ = 0;
  return auVar7;
}



// ============================================================
// RVA: 0x15edb48 | Atlas.UI.League.LeagueDayBestPlacementBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_League_LeagueDayBestPlacementBehaviour___ctor(ulong param_1)

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



