// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.MiniLeaderboardBehaviour

// ============================================================
// RVA: 0x1494abc | Atlas.UI.MiniLeaderboardBehaviour.get_RefreshTime
// ============================================================

undefined4 Atlas_UI_MiniLeaderboardBehaviour__get_RefreshTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1494ac4 | Atlas.UI.MiniLeaderboardBehaviour.get_PlayerPosition
// ============================================================

undefined8 Atlas_UI_MiniLeaderboardBehaviour__get_PlayerPosition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1494acc | Atlas.UI.MiniLeaderboardBehaviour.get_PositionBehaviours
// ============================================================

undefined8 Atlas_UI_MiniLeaderboardBehaviour__get_PositionBehaviours(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1494ad4 | Atlas.UI.MiniLeaderboardBehaviour.SetPositionBehaviourOrder
// ============================================================

undefined8
Atlas_UI_MiniLeaderboardBehaviour__SetPositionBehaviourOrder
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int extraout_w1;
  int extraout_w1_00;
  undefined1 auVar8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((param_2 != 0) && (lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0), lVar2 != 0)) {
    if (pcRam0000000003ec18d0 == (code *)0x0) {
      pcRam0000000003ec18d0 =
           (code *)func_0x00f789d4("UnityEngine.Transform::SetSiblingIndex(System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x032770e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*pcRam0000000003ec18d0)(lVar2,param_3);
    return uVar7;
  }
  auVar8 = func_0x00f78af4();
  lVar2 = auVar8._8_8_;
  puVar3 = auVar8._0_8_;
  if ((bRam0000000003eb49be & 1) == 0) {
    func_0x00f78a20(0x3d32938);
    func_0x00f78a20(0x3d32940);
    func_0x00f78a20(0x3d32948);
    func_0x00f78a20(0x3d3af28);
    bRam0000000003eb49be = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  if (puVar3[4] == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar2 = *plVar5;
      ___cxa_end_catch();
      uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,*puVar3);
      if (lVar2 == 0) {
        return uVar7;
      }
      func_0x00f78ac0(lVar2,0);
    }
    lVar6 = __Unwind_Resume();
    puStack_78 = &Atlas_UI_MiniLeaderboardBehaviour__SetUpLeaderboardEntries;
    puStack_90 = puVar3;
    lStack_88 = lVar2;
    puStack_80 = &stack0xffffffffffffffd0;
    if ((bRam0000000003eb49bf & 1) == 0) {
      func_0x00f78a20(0x3d32938);
      func_0x00f78a20(0x3d32940);
      func_0x00f78a20(0x3d32948);
      func_0x00f78a20(0x3d3af28);
      bRam0000000003eb49bf = 1;
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    lStack_98 = 0;
    if (*(long *)(lVar6 + 0x20) == 0) {
      func_0x00f78af4();
      if (extraout_w1_00 == 1) {
        plVar5 = (long *)___cxa_begin_catch();
        lVar2 = *plVar5;
        ___cxa_end_catch();
        uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,uRam0000000003d32938);
        if (lVar2 == 0) {
          return uVar7;
        }
        func_0x00f78ac0(lVar2,0);
      }
      uVar7 = __Unwind_Resume();
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar7;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(lVar6 + 0x20),uRam0000000003d3af28);
    while( true ) {
      uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a8,uRam0000000003d32940);
      if ((uVar4 & 1) == 0) {
        uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,uRam0000000003d32938);
        return uVar7;
      }
      if (lStack_98 == 0) break;
      Atlas_UI_LeaderboardEntryBehaviour__SetUp(lStack_98,0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1494d08);
    (*pcVar1)();
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,puVar3[4],uRam0000000003d3af28);
  while( true ) {
    uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d32940);
    if ((uVar4 & 1) == 0) {
      uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32938);
      return uVar7;
    }
    if (lStack_58 == 0) break;
    Atlas_UI_LeaderboardEntryBehaviour__SetHitCounterActive(lStack_58,lVar2,0);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1494bf4);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1494b10 | Atlas.UI.MiniLeaderboardBehaviour.ShowHitCounter
// ============================================================

undefined8 Atlas_UI_MiniLeaderboardBehaviour__ShowHitCounter(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb49be & 1) == 0) {
    func_0x00f78a20(0x3d32938);
    func_0x00f78a20(0x3d32940);
    func_0x00f78a20(0x3d32948);
    func_0x00f78a20(0x3d3af28);
    bRam0000000003eb49be = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_1[4] != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,param_1[4],uRam0000000003d3af28);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d32940);
      if ((uVar2 & 1) == 0) {
        uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32938);
        return uVar3;
      }
      if (lStack_38 == 0) break;
      Atlas_UI_LeaderboardEntryBehaviour__SetHitCounterActive(lStack_38,param_2,0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1494bf4);
    (*pcVar1)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    param_2 = *plVar4;
    ___cxa_end_catch();
    uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,*param_1);
    if (param_2 == 0) {
      return uVar3;
    }
    func_0x00f78ac0(param_2,0);
  }
  lVar5 = __Unwind_Resume();
  puStack_58 = &Atlas_UI_MiniLeaderboardBehaviour__SetUpLeaderboardEntries;
  puStack_70 = param_1;
  lStack_68 = param_2;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb49bf & 1) == 0) {
    func_0x00f78a20(0x3d32938);
    func_0x00f78a20(0x3d32940);
    func_0x00f78a20(0x3d32948);
    func_0x00f78a20(0x3d3af28);
    bRam0000000003eb49bf = 1;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_78 = 0;
  if (*(long *)(lVar5 + 0x20) == 0) {
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar5 = *plVar4;
      ___cxa_end_catch();
      uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003d32938);
      if (lVar5 == 0) {
        return uVar3;
      }
      func_0x00f78ac0(lVar5,0);
    }
    uVar3 = __Unwind_Resume();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar3;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_88,*(long *)(lVar5 + 0x20),uRam0000000003d3af28);
  while( true ) {
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_88,uRam0000000003d32940);
    if ((uVar2 & 1) == 0) {
      uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003d32938);
      return uVar3;
    }
    if (lStack_78 == 0) break;
    Atlas_UI_LeaderboardEntryBehaviour__SetUp(lStack_78,0);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1494d08);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1494c34 | Atlas.UI.MiniLeaderboardBehaviour.SetUpLeaderboardEntries
// ============================================================

undefined8 Atlas_UI_MiniLeaderboardBehaviour__SetUpLeaderboardEntries(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  int extraout_w1;
  long lVar5;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000003eb49bf & 1) == 0) {
    func_0x00f78a20(0x3d32938);
    func_0x00f78a20(0x3d32940);
    func_0x00f78a20(0x3d32948);
    func_0x00f78a20(0x3d3af28);
    bRam0000000003eb49bf = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar5 = *plVar4;
      ___cxa_end_catch();
      uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_38,uRam0000000003d32938);
      if (lVar5 == 0) {
        return uVar3;
      }
      func_0x00f78ac0(lVar5,0);
    }
    uVar3 = __Unwind_Resume();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar3;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_38,*(long *)(param_1 + 0x20),uRam0000000003d3af28);
  while( true ) {
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_38,uRam0000000003d32940);
    if ((uVar2 & 1) == 0) {
      uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_38,uRam0000000003d32938);
      return uVar3;
    }
    if (lStack_28 == 0) break;
    Atlas_UI_LeaderboardEntryBehaviour__SetUp(lStack_28,0);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1494d08);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1494d50 | Atlas.UI.MiniLeaderboardBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_MiniLeaderboardBehaviour___ctor(ulong param_1)

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



