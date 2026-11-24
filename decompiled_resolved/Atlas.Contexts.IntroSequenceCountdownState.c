// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.IntroSequenceCountdownState

// ============================================================
// RVA: 0x15b8a2c | Atlas.Contexts.IntroSequenceCountdownState.Init
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Contexts_IntroSequenceCountdownState__Init
               (undefined4 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int extraout_w1;
  int iVar10;
  float fVar11;
  double dVar12;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  
  if ((bRam0000000003eb52a2 & 1) == 0) {
    func_0x00f78a20(0x3d55088);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d55198);
    bRam0000000003eb52a2 = 1;
  }
  *(undefined4 *)(param_2 + 0x78) = param_1;
  *(undefined8 *)(param_2 + 0xb8) = param_4;
  if (param_3 != 0) {
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_3,uRam0000000003d55150);
    *(undefined8 *)(param_2 + 0x80) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_3,uRam0000000003d55198);
    *(undefined8 *)(param_2 + 0x88) = uVar5;
    lVar6 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_3,uRam0000000003d55088);
    *(long *)(param_2 + 0xa8) = lVar6;
    if (lVar6 != 0) {
      *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(lVar6 + 0x20);
      *(undefined8 *)(param_2 + 0xc0) = param_5;
      return;
    }
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb52a3 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d5a098);
    func_0x00f78a20(0x3d22ff0);
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d3ac88);
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d3acd8);
    func_0x00f78a20(0x3d1daa8);
    bRam0000000003eb52a3 = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  if ((*(long *)(lVar6 + 0x80) != 0) &&
     (lVar7 = *(long *)(*(long *)(lVar6 + 0x80) + 0x20), lVar7 != 0)) {
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_e0,lVar7,0);
    *(undefined8 *)(lVar6 + 0x98) = uStack_d8;
    *(undefined8 *)(lVar6 + 0x90) = uStack_e0;
    *(undefined8 *)(lVar6 + 0xa0) = uStack_d0;
    if ((*(long *)(lVar6 + 0x88) != 0) &&
       (plVar8 = *(long **)(*(long *)(lVar6 + 0x88) + 0x30), plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0x2d8))(plVar8,1,*(undefined8 *)(*plVar8 + 0x2e0));
      if (*(long *)(lVar6 + 0xb0) != 0) {
        /*Atlas.Audio.MusicManager$$SetParameter*/ func_0x0149d550(*(long *)(lVar6 + 0xb0),2,0);
        if (*(long *)(lVar6 + 0xb0) != 0) {
          /*Atlas.Audio.MusicManager$$SetParameter*/ func_0x0149d5e8(*(long *)(lVar6 + 0xb0),2,0);
          if (*(long *)(lVar6 + 0xa8) != 0) {
            /*Atlas.Audio.AtlasAudioManager$$PlayCountdownSFX*/ func_0x0145a1a4(*(long *)(lVar6 + 0xa8),0);
            if (*(long *)(lVar6 + 0xc0) != 0) {
              /*Atlas.Gameplay.VfxHitVolumeManager$$FireVFXEvent*/ func_0x01527a08(*(long *)(lVar6 + 0xc0),1,0);
            }
            if (*(long *)(lVar6 + 0xb8) == 0) {
              return;
            }
            lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
            if (lVar7 == 0) {
              return;
            }
            iVar4 = *(int *)(lVar7 + 0x18);
            lVar7 = func_0x00f78aec(/*System.Collections.Generic.List<int>_TypeInfo*/ uRam0000000003d1daa8);
            /*System.Collections.Generic.List<int>$$.ctor*/ func_0x023db0e4(lVar7,iVar4,uRam0000000003d3ac88);
            if (0 < iVar4) {
              if (lVar7 == 0) goto code_r0x015b8e10;
              iVar10 = 0;
              do {
                /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar7,iVar10,uRam0000000003d3ac90);
                iVar10 = iVar10 + 1;
              } while (iVar4 != iVar10);
            }
            if (((*(ushort *)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Core.Extensions.ListExtensions$$Shuffle<int>*/ func_0x01874460(lVar7,uRam0000000003d5a098);
            if ((*(long *)(lVar6 + 0xb8) != 0) &&
               (lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10), lVar6 != 0)) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,lVar6,uRam0000000003d3ae20);
              uVar1 = _UNK_033f813c;
              uVar3 = 0;
              while( true ) {
                uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c8,uRam0000000003d328d0);
                lVar6 = lStack_b8;
                if ((uVar9 & 1) == 0) {
                  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003d328c8);
                  return;
                }
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= uVar3) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                iVar10 = *(int *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar3 * 4 + 0x20);
                fVar11 = (float)/*UnityEngine.Random$$Range*/ func_0x03252854(0,uVar1,0);
                if (lVar6 == 0) {
                  func_0x00f78af4();
                  goto code_r0x015b8e0c;
                }
                lVar6 = *(long *)(lVar6 + 0x30);
                if (lVar6 == 0) {
                  func_0x00f78af4();
                  goto code_r0x015b8e0c;
                }
                *(float *)(lVar6 + 0x88) = fVar11 + ((float)iVar10 + 1.0) / (float)iVar4;
                uVar3 = uVar3 + 1;
              }
              func_0x00f78af4();
code_r0x015b8e0c:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x15b8e10);
              (*pcVar2)();
            }
          }
        }
      }
    }
  }
code_r0x015b8e10:
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar8 = (long *)___cxa_begin_catch();
    lVar6 = *plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003d328c8);
    if (lVar6 == 0) {
      return;
    }
    func_0x00f78ac0(lVar6,0);
  }
  lVar6 = __Unwind_Resume();
  if ((bRam0000000003eb52a4 & 1) == 0) {
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb52a4 = 1;
  }
  if ((*(long *)(lVar6 + 0x80) != 0) &&
     (lVar7 = *(long *)(*(long *)(lVar6 + 0x80) + 0x20), lVar7 != 0)) {
    fVar11 = *(float *)(lVar6 + 0x78);
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_140,lVar7,0);
    uStack_158 = uStack_138;
    uStack_160 = uStack_140;
    uStack_150 = uStack_130;
    uVar3 = /*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(lVar6 + 0x90,&uStack_160,0);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_128 = /*System.TimeSpan$$FromMilliseconds*/ func_0x029f0858((double)uVar3,0);
    dVar12 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_128,0);
    if (fVar11 - (float)dVar12 <= 3.0) {
      iVar4 = /*UnityEngine.Mathf$$CeilToInt*/ func_0x0323d108(0);
      if (iVar4 < 1) {
        /*Core.StateManagement.State$$InvokeNotifyStateComplete*/ func_0x02b951ec(lVar6,0);
      }
      else if (iVar4 != *(int *)(lVar6 + 0x7c)) {
        *(int *)(lVar6 + 0x7c) = iVar4;
      }
    }
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15b8b10 | Atlas.Contexts.IntroSequenceCountdownState.OnEnter
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Contexts_IntroSequenceCountdownState__OnEnter(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int extraout_w1;
  int iVar9;
  float fVar10;
  double dVar11;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000003eb52a3 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d5a098);
    func_0x00f78a20(0x3d22ff0);
    func_0x00f78a20(0x3d3ac90);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d3ac88);
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d3acd8);
    func_0x00f78a20(0x3d1daa8);
    bRam0000000003eb52a3 = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x80) + 0x20), lVar5 != 0)) {
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_90,lVar5,0);
    *(undefined8 *)(param_1 + 0x98) = uStack_88;
    *(undefined8 *)(param_1 + 0x90) = uStack_90;
    *(undefined8 *)(param_1 + 0xa0) = uStack_80;
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (plVar6 = *(long **)(*(long *)(param_1 + 0x88) + 0x30), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x2d8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x2e0));
      if (*(long *)(param_1 + 0xb0) != 0) {
        /*Atlas.Audio.MusicManager$$SetParameter*/ func_0x0149d550(*(long *)(param_1 + 0xb0),2,0);
        if (*(long *)(param_1 + 0xb0) != 0) {
          /*Atlas.Audio.MusicManager$$SetParameter*/ func_0x0149d5e8(*(long *)(param_1 + 0xb0),2,0);
          if (*(long *)(param_1 + 0xa8) != 0) {
            /*Atlas.Audio.AtlasAudioManager$$PlayCountdownSFX*/ func_0x0145a1a4(*(long *)(param_1 + 0xa8),0);
            if (*(long *)(param_1 + 0xc0) != 0) {
              /*Atlas.Gameplay.VfxHitVolumeManager$$FireVFXEvent*/ func_0x01527a08(*(long *)(param_1 + 0xc0),1,0);
            }
            if (*(long *)(param_1 + 0xb8) == 0) {
              return;
            }
            lVar5 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
            if (lVar5 == 0) {
              return;
            }
            iVar4 = *(int *)(lVar5 + 0x18);
            lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<int>_TypeInfo*/ uRam0000000003d1daa8);
            /*System.Collections.Generic.List<int>$$.ctor*/ func_0x023db0e4(lVar5,iVar4,uRam0000000003d3ac88);
            if (0 < iVar4) {
              if (lVar5 == 0) goto LAB_015b8e10;
              iVar9 = 0;
              do {
                /*System.Collections.Generic.List<int>$$Add*/ func_0x023dbccc(lVar5,iVar9,uRam0000000003d3ac90);
                iVar9 = iVar9 + 1;
              } while (iVar4 != iVar9);
            }
            if (((*(ushort *)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Extensions.ListExtensions_TypeInfo*/ lRam0000000003d22ff0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Core.Extensions.ListExtensions$$Shuffle<int>*/ func_0x01874460(lVar5,uRam0000000003d5a098);
            if ((*(long *)(param_1 + 0xb8) != 0) &&
               (lVar7 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10), lVar7 != 0)) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,lVar7,uRam0000000003d3ae20);
              uVar1 = _UNK_033f813c;
              uVar3 = 0;
              while( true ) {
                uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_78,uRam0000000003d328d0);
                lVar7 = lStack_68;
                if ((uVar8 & 1) == 0) {
                  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d328c8);
                  return;
                }
                if (lVar5 == 0) break;
                if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                iVar9 = *(int *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar3 * 4 + 0x20);
                fVar10 = (float)/*UnityEngine.Random$$Range*/ func_0x03252854(0,uVar1,0);
                if (lVar7 == 0) {
                  func_0x00f78af4();
                  goto code_r0x015b8e0c;
                }
                lVar7 = *(long *)(lVar7 + 0x30);
                if (lVar7 == 0) {
                  func_0x00f78af4();
                  goto code_r0x015b8e0c;
                }
                *(float *)(lVar7 + 0x88) = fVar10 + ((float)iVar9 + 1.0) / (float)iVar4;
                uVar3 = uVar3 + 1;
              }
              func_0x00f78af4();
code_r0x015b8e0c:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x15b8e10);
              (*pcVar2)();
            }
          }
        }
      }
    }
  }
LAB_015b8e10:
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar5 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d328c8);
    if (lVar5 == 0) {
      return;
    }
    func_0x00f78ac0(lVar5,0);
  }
  lVar5 = __Unwind_Resume();
  if ((bRam0000000003eb52a4 & 1) == 0) {
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb52a4 = 1;
  }
  if ((*(long *)(lVar5 + 0x80) != 0) &&
     (lVar7 = *(long *)(*(long *)(lVar5 + 0x80) + 0x20), lVar7 != 0)) {
    fVar10 = *(float *)(lVar5 + 0x78);
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_f0,lVar7,0);
    uStack_108 = uStack_e8;
    uStack_110 = uStack_f0;
    uStack_100 = uStack_e0;
    uVar3 = /*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(lVar5 + 0x90,&uStack_110,0);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_d8 = /*System.TimeSpan$$FromMilliseconds*/ func_0x029f0858((double)uVar3,0);
    dVar11 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_d8,0);
    if (fVar10 - (float)dVar11 <= 3.0) {
      iVar4 = /*UnityEngine.Mathf$$CeilToInt*/ func_0x0323d108(0);
      if (iVar4 < 1) {
        /*Core.StateManagement.State$$InvokeNotifyStateComplete*/ func_0x02b951ec(lVar5,0);
      }
      else if (iVar4 != *(int *)(lVar5 + 0x7c)) {
        *(int *)(lVar5 + 0x7c) = iVar4;
      }
    }
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15b8e64 | Atlas.Contexts.IntroSequenceCountdownState.OnUpdate
// ============================================================

void Atlas_Contexts_IntroSequenceCountdownState__OnUpdate(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  double dVar4;
  float fVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb52a4 & 1) == 0) {
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb52a4 = 1;
  }
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x80) + 0x20), lVar3 != 0)) {
    fVar5 = *(float *)(param_1 + 0x78);
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_60,lVar3,0);
    uStack_78 = uStack_58;
    uStack_80 = uStack_60;
    uStack_70 = uStack_50;
    uVar1 = /*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(param_1 + 0x90,&uStack_80,0);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_48 = /*System.TimeSpan$$FromMilliseconds*/ func_0x029f0858((double)uVar1,0);
    dVar4 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_48,0);
    if (fVar5 - (float)dVar4 <= 3.0) {
      iVar2 = /*UnityEngine.Mathf$$CeilToInt*/ func_0x0323d108(0);
      if (iVar2 < 1) {
        /*Core.StateManagement.State$$InvokeNotifyStateComplete*/ func_0x02b951ec(param_1,0);
      }
      else if (iVar2 != *(int *)(param_1 + 0x7c)) {
        *(int *)(param_1 + 0x7c) = iVar2;
      }
    }
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15b8f84 | Atlas.Contexts.IntroSequenceCountdownState.OnLateUpdate
// ============================================================

void Atlas_Contexts_IntroSequenceCountdownState__OnLateUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15b8f88 | Atlas.Contexts.IntroSequenceCountdownState.OnFixedUpdate
// ============================================================

void Atlas_Contexts_IntroSequenceCountdownState__OnFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15b8f8c | Atlas.Contexts.IntroSequenceCountdownState.OnExit
// ============================================================

void Atlas_Contexts_IntroSequenceCountdownState__OnExit(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined4 uStack_88;
  int iStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lVar4 = *(long *)(param_1 + 0xc0);
  if (lVar4 == 0) {
    return;
  }
  if ((bRam0000000003eb4e67 & 1) == 0) {
    func_0x00f78a20(0x3d32590,2,0);
    func_0x00f78a20(0x3d325a8);
    func_0x00f78a20(0x3d325b0);
    func_0x00f78a20(0x3d32598);
    func_0x00f78a20(0x3d325a0);
    func_0x00f78a20(0x3d325b8);
    func_0x00f78a20(0x3d3a7b0);
    func_0x00f78a20(0x3d3a7a8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e67 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  iStack_80 = 0;
  if (*(long *)(lVar4 + 0x10) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a0,*(long *)(lVar4 + 0x10),uRam0000000003d3a7b0);
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    lStack_50 = lStack_90;
    while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_60,uRam0000000003d325b0), lVar1 = lStack_50,
          (uVar3 & 1) != 0) {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar1,0,0);
      if ((uVar3 & 1) == 0) {
        if (lVar1 == 0) {
          func_0x00f78af4();
          goto code_r0x01527c48;
        }
        if (*(int *)(lVar1 + 0x44) == 2) {
          /*Atlas.Gameplay.HitVolumeVFXTriggerBehaviour$$ManualActivate*/ func_0x015b5220(lVar1,0);
        }
      }
    }
    uStack_88 = 0x54;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,uRam0000000003d325a8);
  }
  iStack_80 = 0;
  if (*(long *)(lVar4 + 0x18) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,*(long *)(lVar4 + 0x18),uRam0000000003d3a7a8);
    while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_78,uRam0000000003d32598), lVar4 = lStack_68,
          (uVar3 & 1) != 0) {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if (lVar4 == 0) {
          func_0x00f78af4();
code_r0x01527c48:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1527c4c);
          (*pcVar2)();
        }
        if (*(int *)(lVar4 + 0x40) == 2) {
          /*Atlas.Gameplay.HitVolumeVFXAdditionalTriggerBehaviour$$ManualActivate*/ func_0x015b5190(lVar4,0);
        }
      }
    }
    iStack_80 = iStack_80 + 1;
    uStack_88 = 0xa8;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d32590);
  }
  return;
}



// ============================================================
// RVA: 0x15b8fa4 | Atlas.Contexts.IntroSequenceCountdownState.OnDeInit
// ============================================================

void Atlas_Contexts_IntroSequenceCountdownState__OnDeInit(long param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



// ============================================================
// RVA: 0x15b8fb0 | Atlas.Contexts.IntroSequenceCountdownState..ctor
// ============================================================

void Atlas_Contexts_IntroSequenceCountdownState___ctor(void)

{
  return;
}



