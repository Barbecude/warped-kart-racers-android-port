// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UILeagueRewardBehaviour.<AnimateStars>d__20

// ============================================================
// RVA: 0x156caa0 | Atlas.UI.UILeagueRewardBehaviour.<AnimateStars>d__20..ctor
// ============================================================

void Atlas_UI_UILeagueRewardBehaviour__AnimateStars_d__20___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x156cacc | Atlas.UI.UILeagueRewardBehaviour.<AnimateStars>d__20.System.IDisposable.Dispose
// ============================================================

undefined1  [16]
Atlas_UI_UILeagueRewardBehaviour__AnimateStars_d__20__System_IDisposable_Dispose
          (long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (*(int *)(param_1 + 0x10) == 1 || *(int *)(param_1 + 0x10) == -3) {
    if ((bRam0000000003eb5011 & 1) == 0) {
      func_0x00f78a20(0x3d330c0);
      bRam0000000003eb5011 = 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    auVar2._8_8_ = uRam0000000003d330c0;
    auVar2._0_8_ = param_1 + 0x28;
    return auVar2;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



// ============================================================
// RVA: 0x156cae4 | Atlas.UI.UILeagueRewardBehaviour.<AnimateStars>d__20.<>m__Finally1
// ============================================================

undefined1  [16] Atlas_UI_UILeagueRewardBehaviour__AnimateStars_d__20____m__Finally1(long param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb5011 & 1) == 0) {
    func_0x00f78a20(0x3d330c0);
    bRam0000000003eb5011 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  auVar1._8_8_ = uRam0000000003d330c0;
  auVar1._0_8_ = param_1 + 0x28;
  return auVar1;
}



// ============================================================
// RVA: 0x156cb40 | Atlas.UI.UILeagueRewardBehaviour.<AnimateStars>d__20.MoveNext
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Atlas_UI_UILeagueRewardBehaviour__AnimateStars_d__20__MoveNext(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000003eb5010 & 1) == 0) {
    func_0x00f78a20(0x3d330c8);
    func_0x00f78a20(0x3d330d0);
    func_0x00f78a20(0x3d3c640);
    func_0x00f78a20(0x3d25a68);
    bRam0000000003eb5010 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (*(long *)(param_1 + 0x40) == 0) {
      func_0x00f78af4();
      goto code_r0x0156ccac;
    }
    /*Atlas.UI.UIStarBehaviour$$PlayAnimation*/ func_0x0151d784(*(long *)(param_1 + 0x40),0);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00f78af4();
      goto code_r0x0156ccac;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
    if (lVar2 == 0) {
      func_0x00f78af4();
      goto code_r0x0156ccac;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_38,lVar2,uRam0000000003d3c640);
    *(undefined8 *)(param_1 + 0x30) = uStack_30;
    *(undefined8 *)(param_1 + 0x28) = uStack_38;
    *(undefined8 *)(param_1 + 0x38) = uStack_28;
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  }
  uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined8 *)(param_1 + 0x28),uRam0000000003d330c8);
  if ((uVar3 & 1) == 0) {
    Atlas_UI_UILeagueRewardBehaviour__AnimateStars_d__20____m__Finally1(param_1);
    uVar4 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x40) = lVar2;
    if (lVar2 == 0) {
      func_0x00f78af4();
code_r0x0156ccac:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x156ccb0);
      (*pcVar1)();
    }
    /*Atlas.UI.UIStarBehaviour$$Rotate*/ func_0x0151d940(lVar2,0);
    uVar4 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
    /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(_UNK_033f813c,uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    uVar4 = 1;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x156cd24 | Atlas.UI.UILeagueRewardBehaviour.<AnimateStars>d__20.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_UILeagueRewardBehaviour__AnimateStars_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156cd2c | Atlas.UI.UILeagueRewardBehaviour.<AnimateStars>d__20.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_UILeagueRewardBehaviour__AnimateStars_d__20__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d64800);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156cd6c | Atlas.UI.UILeagueRewardBehaviour.<AnimateStars>d__20.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_UILeagueRewardBehaviour__AnimateStars_d__20__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



