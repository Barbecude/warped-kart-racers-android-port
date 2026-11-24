// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.RaceGameContext.<OnInit>d__8

// ============================================================
// RVA: 0x1563764 | Atlas.Contexts.RaceGameContext.<OnInit>d__8..ctor
// ============================================================

void Atlas_Contexts_RaceGameContext__OnInit_d__8___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1563790 | Atlas.Contexts.RaceGameContext.<OnInit>d__8.System.IDisposable.Dispose
// ============================================================

void Atlas_Contexts_RaceGameContext__OnInit_d__8__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1563794 | Atlas.Contexts.RaceGameContext.<OnInit>d__8.MoveNext
// ============================================================

ulong Atlas_Contexts_RaceGameContext__OnInit_d__8__MoveNext(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int extraout_w1;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((bRam0000000003eb4fd2 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d55088);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d32578);
    func_0x00f78a20(0x3d32580);
    func_0x00f78a20(0x3d32588);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3a798);
    func_0x00f78a20(0x3d3a788);
    func_0x00f78a20(0x3d1d9b8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5bf38);
    func_0x00f78a20(0x3d5bf40);
    bRam0000000003eb4fd2 = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 != 0) {
      uVar3 = Atlas_Contexts_RaceGameContext____n__0
                        (lVar7,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      *(undefined4 *)(param_1 + 0x10) = 1;
      goto LAB_01563aa0;
    }
    goto LAB_01563acc;
  }
  if (iVar1 != 1) goto LAB_01563aa0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x1c0) == 0)) {
LAB_01563acc:
    func_0x00f78af4();
  }
  else {
    *(undefined4 *)(lVar7 + 0x24c) = *(undefined4 *)(*(long *)(lVar7 + 0x1c0) + 0xcc);
    if (*(long *)(lVar7 + 0x38) == 0) goto LAB_01563acc;
    *(undefined2 *)(*(long *)(lVar7 + 0x38) + 0x80) = 0x100;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_01563acc;
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x30),uRam0000000003d55088);
    *(undefined8 *)(lVar7 + 0x250) = uVar3;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_01563acc;
    lVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x30),uRam0000000003d55150);
    *(long *)(lVar7 + 600) = lVar4;
    if (((lVar4 == 0) || (*(long *)(lVar4 + 0x20) == 0)) ||
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 0x10), lVar4 == 0)) goto LAB_01563acc;
    uVar8 = *(undefined8 *)(lVar4 + 0x80);
    uVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar3,lVar7,uRam0000000003d5bf40,0);
    plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar8,uVar3,0);
    if (plVar5 == (long *)0x0) {
LAB_0156394c:
      *(long **)(lVar4 + 0x80) = plVar5;
      if (*(long *)(lVar7 + 0x250) != 0) {
        /*Atlas.Audio.AtlasAudioManager$$ResetLapCounter*/ func_0x01458c1c(*(long *)(lVar7 + 0x250),*(undefined4 *)(lVar7 + 0x24c),0);
        if (*(long *)(lVar7 + 0x1d0) != 0) {
          uVar3 = *(undefined8 *)(*(long *)(lVar7 + 0x1d0) + 0x58);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,0,0);
          if ((uVar6 & 1) == 0) {
            if ((*(long *)(lVar7 + 0x1d0) == 0) ||
               (lVar4 = *(long *)(*(long *)(lVar7 + 0x1d0) + 0x58), lVar4 == 0)) goto LAB_01563acc;
            lVar4 = *(long *)(lVar4 + 0x18);
          }
          else {
            lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<HitVolumeBehaviour>_TypeInfo*/ uRam0000000003d1d9b8);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar4,uRam0000000003d3a788);
          }
          *(long *)(lVar7 + 0x260) = lVar4;
          if (lVar4 != 0) {
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,lVar4,uRam0000000003d3a798);
            while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d32580), lVar4 = lStack_58,
                  (uVar6 & 1) != 0) {
              uVar3 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
              /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar3,lVar7,uRam0000000003d5bf38,0);
              if (lVar4 == 0) {
                func_0x00f78af4();
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1563acc);
                (*pcVar2)();
              }
              /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar4,uVar3,0);
            }
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32578);
            goto LAB_01563aa0;
          }
        }
      }
      goto LAB_01563acc;
    }
    if (*plVar5 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78) goto LAB_0156394c;
  }
  func_0x00f78e5c();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar7 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32578);
    if (lVar7 == 0) {
LAB_01563aa0:
      return (ulong)(iVar1 == 0);
    }
    func_0x00f78ac0(lVar7,0);
  }
  lVar7 = __Unwind_Resume();
  return *(ulong *)(lVar7 + 0x18);
}



// ============================================================
// RVA: 0x1563b18 | Atlas.Contexts.RaceGameContext.<OnInit>d__8.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Contexts_RaceGameContext__OnInit_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1563b20 | Atlas.Contexts.RaceGameContext.<OnInit>d__8.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_Contexts_RaceGameContext__OnInit_d__8__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63a88);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1563b60 | Atlas.Contexts.RaceGameContext.<OnInit>d__8.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Contexts_RaceGameContext__OnInit_d__8__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



