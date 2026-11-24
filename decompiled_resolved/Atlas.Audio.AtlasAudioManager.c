// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Audio.AtlasAudioManager

// ============================================================
// RVA: 0x14586e0 | Atlas.Audio.AtlasAudioManager.get_PlayerKart
// ============================================================

undefined8 Atlas_Audio_AtlasAudioManager__get_PlayerKart(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x14586e8 | Atlas.Audio.AtlasAudioManager.get_WeaponManager
// ============================================================

undefined8 Atlas_Audio_AtlasAudioManager__get_WeaponManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x14586f0 | Atlas.Audio.AtlasAudioManager.get_Quality_FullEngine
// ============================================================

undefined1 Atlas_Audio_AtlasAudioManager__get_Quality_FullEngine(long param_1)

{
  return *(undefined1 *)(param_1 + 200);
}



// ============================================================
// RVA: 0x14586f8 | Atlas.Audio.AtlasAudioManager.get_Quality_Terrain
// ============================================================

undefined1 Atlas_Audio_AtlasAudioManager__get_Quality_Terrain(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc9);
}



// ============================================================
// RVA: 0x1458700 | Atlas.Audio.AtlasAudioManager.get_Quality_Voiceover
// ============================================================

undefined1 Atlas_Audio_AtlasAudioManager__get_Quality_Voiceover(long param_1)

{
  return *(undefined1 *)(param_1 + 0xca);
}



// ============================================================
// RVA: 0x1458708 | Atlas.Audio.AtlasAudioManager.get_Quality_AIVoiceover
// ============================================================

undefined1 Atlas_Audio_AtlasAudioManager__get_Quality_AIVoiceover(long param_1)

{
  return *(undefined1 *)(param_1 + 0xcb);
}



// ============================================================
// RVA: 0x1458710 | Atlas.Audio.AtlasAudioManager.get_Quality_AiEngines
// ============================================================

undefined1 Atlas_Audio_AtlasAudioManager__get_Quality_AiEngines(long param_1)

{
  return *(undefined1 *)(param_1 + 0xcc);
}



// ============================================================
// RVA: 0x1458718 | Atlas.Audio.AtlasAudioManager.get_Quality_Collisions
// ============================================================

undefined1 Atlas_Audio_AtlasAudioManager__get_Quality_Collisions(long param_1)

{
  return *(undefined1 *)(param_1 + 0xcd);
}



// ============================================================
// RVA: 0x1458720 | Atlas.Audio.AtlasAudioManager.get_Quality_Reverbs
// ============================================================

undefined1 Atlas_Audio_AtlasAudioManager__get_Quality_Reverbs(long param_1)

{
  return *(undefined1 *)(param_1 + 0xce);
}



// ============================================================
// RVA: 0x1458728 | Atlas.Audio.AtlasAudioManager.get_Quality_Ambience
// ============================================================

undefined1 Atlas_Audio_AtlasAudioManager__get_Quality_Ambience(long param_1)

{
  return *(undefined1 *)(param_1 + 0xcf);
}



// ============================================================
// RVA: 0x1458730 | Atlas.Audio.AtlasAudioManager.get_Quality_Weapons
// ============================================================

undefined1 Atlas_Audio_AtlasAudioManager__get_Quality_Weapons(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x1458738 | Atlas.Audio.AtlasAudioManager.get_Quality_SOS
// ============================================================

undefined1 Atlas_Audio_AtlasAudioManager__get_Quality_SOS(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd1);
}



// ============================================================
// RVA: 0x1458740 | Atlas.Audio.AtlasAudioManager.get_Quality_MapSounds
// ============================================================

undefined1 Atlas_Audio_AtlasAudioManager__get_Quality_MapSounds(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd2);
}



// ============================================================
// RVA: 0x1458748 | Atlas.Audio.AtlasAudioManager.get_GameMode
// ============================================================

undefined4 Atlas_Audio_AtlasAudioManager__get_GameMode(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x1458750 | Atlas.Audio.AtlasAudioManager.get_IsRaceOver
// ============================================================

undefined1 Atlas_Audio_AtlasAudioManager__get_IsRaceOver(long param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x1458758 | Atlas.Audio.AtlasAudioManager.SetAudioMapBehaviour
// ============================================================

/* WARNING: Possible PIC construction at 0x0145893c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01458904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01458908) */

void Atlas_Audio_AtlasAudioManager__SetAudioMapBehaviour(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined *puVar9;
  undefined1 auVar10 [12];
  undefined8 uStack_118;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  uVar8 = 0x3eb4000;
  if ((bRam0000000003eb47c3 & 1) == 0) {
    func_0x00f78a20(0x3d321e8);
    func_0x00f78a20(0x3d321f0);
    func_0x00f78a20(0x3d321f8);
    func_0x00f78a20(0x3d39de0);
    func_0x00f78a20(0x3d39de8);
    func_0x00f78a20(0x3d39df0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb47c3 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  lVar7 = param_1;
  if (*(long *)(param_1 + 0xe0) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0xe0),uRam0000000003d39de8);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(long *)(param_1 + 0x60) = param_2;
    if (param_2 != 0) {
      /*Atlas.Audio.AudioMapBehaviour$$GatherTriggers*/ func_0x014717dc(param_2,0);
    }
    if (*(char *)(param_1 + 0xd2) == '\0') {
      iVar2 = 2;
      puVar9 = &UNK_01458908;
      goto code_r0x014589d0;
    }
    uVar8 = 0x3d23990;
    param_2 = *(long *)(param_1 + 0x60);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_2,0);
    if (iVar2 == 0) goto LAB_0145892c;
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x20), lVar4 != 0)) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,lVar4,uRam0000000003d39df0);
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      lStack_50 = lStack_68;
      unaff_x22 = 0x3d321f0;
LAB_01458898:
      do {
        uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_60,uRam0000000003d321f0);
        lVar4 = lStack_50;
        if ((uVar5 & 1) == 0) goto LAB_01458918;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar4,0);
        param_2 = lVar4;
        if ((uVar5 & 1) != 0) {
          if (lVar4 == 0) {
            func_0x00f78af4();
          }
          else {
            if (*(int *)(lVar4 + 0x60) != 3) goto LAB_01458898;
            if (*(long *)(param_1 + 0xe0) != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0xe0),lVar4,uRam0000000003d39de0);
              goto LAB_01458898;
            }
            func_0x00f78af4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x145897c);
          (*pcVar1)();
        }
      } while( true );
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    param_2 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,uRam0000000003d321e8);
    if (param_2 == 0) goto LAB_0145892c;
    func_0x00f78ac0(param_2,0);
  }
  puVar9 = &Atlas_Audio_AtlasAudioManager__DisableMapAudio;
  auVar10 = __Unwind_Resume();
  iVar2 = auVar10._8_4_;
  lVar7 = auVar10._0_8_;
code_r0x014589d0:
  uStack_b0 = unaff_x22;
  uStack_a8 = uVar8;
  lStack_a0 = param_2;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  puStack_88 = puVar9;
  if ((bRam0000000003eb47e9 & 1) == 0) {
    func_0x00f78a20(0x3d321e8);
    func_0x00f78a20(0x3d321f0);
    func_0x00f78a20(0x3d321f8);
    func_0x00f78a20(0x3d39df0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb47e9 = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
  if (iVar3 != 0) {
    if (*(long *)(lVar7 + 0x60) == 0) {
      func_0x00f78af4();
      if (extraout_w1_00 == 1) {
        plVar6 = (long *)___cxa_begin_catch();
        lVar7 = *plVar6;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003d321e8);
        if (lVar7 == 0) {
          return;
        }
        func_0x00f78ac0(lVar7,0);
      }
      __Unwind_Resume();
      if ((bRam0000000003eb47c4 & 1) == 0) {
        func_0x00f78a20(0x3d6d268);
        bRam0000000003eb47c4 = 1;
      }
      uVar8 = /*STR('GameStates')*/ uRam0000000003d6d268;
      if ((bRam0000000003eb56c1 & 1) == 0) {
        func_0x00f78a20(0x3d24568,/*STR('GameStates')*/ uRam0000000003d6d268,0,0);
        bRam0000000003eb56c1 = 1;
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_118 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
      /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4((float)extraout_w1_01,&uStack_118,uVar8,0,0);
      return;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0x60) + 0x20);
    if (lVar7 != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,lVar7,uRam0000000003d39df0);
      while( true ) {
        do {
          uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c8,uRam0000000003d321f0);
          lVar7 = lStack_b8;
          if ((uVar5 & 1) == 0) {
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003d321e8);
            return;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar7,0);
        } while ((uVar5 & 1) == 0);
        if (lVar7 == 0) break;
        if (*(int *)(lVar7 + 0x60) == iVar2) {
          lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0);
          if (lVar7 == 0) {
            func_0x00f78af4();
code_r0x01458b48:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1458b4c);
            (*pcVar1)();
          }
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,0,0);
        }
      }
      func_0x00f78af4();
      goto code_r0x01458b48;
    }
  }
  return;
LAB_01458918:
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,uRam0000000003d321e8);
LAB_0145892c:
  if (*(char *)(param_1 + 0xce) != '\0') {
    if (*(char *)(param_1 + 0xd1) == '\0') {
      /*Atlas.Audio.AtlasAudioManager$$DisableMapAudio*/ func_0x014589d0(param_1,1);
    }
    return;
  }
  iVar2 = 0;
  puVar9 = &UNK_01458940;
  goto code_r0x014589d0;
}



// ============================================================
// RVA: 0x14589d0 | Atlas.Audio.AtlasAudioManager.DisableMapAudio
// ============================================================

void Atlas_Audio_AtlasAudioManager__DisableMapAudio(long param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 uVar6;
  undefined8 uStack_98;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb47e9 & 1) == 0) {
    func_0x00f78a20(0x3d321e8);
    func_0x00f78a20(0x3d321f0);
    func_0x00f78a20(0x3d321f8);
    func_0x00f78a20(0x3d39df0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb47e9 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if (iVar2 != 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar5 = (long *)___cxa_begin_catch();
        lVar3 = *plVar5;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d321e8);
        if (lVar3 == 0) {
          return;
        }
        func_0x00f78ac0(lVar3,0);
      }
      __Unwind_Resume();
      if ((bRam0000000003eb47c4 & 1) == 0) {
        func_0x00f78a20(0x3d6d268);
        bRam0000000003eb47c4 = 1;
      }
      uVar6 = /*STR('GameStates')*/ uRam0000000003d6d268;
      if ((bRam0000000003eb56c1 & 1) == 0) {
        func_0x00f78a20(0x3d24568,/*STR('GameStates')*/ uRam0000000003d6d268,0,0);
        bRam0000000003eb56c1 = 1;
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_98 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
      /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4((float)extraout_w1_00,&uStack_98,uVar6,0,0);
      return;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x20);
    if (lVar3 != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,lVar3,uRam0000000003d39df0);
      while( true ) {
        do {
          uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d321f0);
          lVar3 = lStack_38;
          if ((uVar4 & 1) == 0) {
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d321e8);
            return;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar3,0);
        } while ((uVar4 & 1) == 0);
        if (lVar3 == 0) break;
        if (*(int *)(lVar3 + 0x60) == param_2) {
          lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0);
          if (lVar3 == 0) {
            func_0x00f78af4();
code_r0x01458b48:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1458b4c);
            (*pcVar1)();
          }
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,0,0);
        }
      }
      func_0x00f78af4();
      goto code_r0x01458b48;
    }
  }
  return;
}



// ============================================================
// RVA: 0x1458ba0 | Atlas.Audio.AtlasAudioManager.SetAudioState
// ============================================================

void Atlas_Audio_AtlasAudioManager__SetAudioState(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb47c4 & 1) == 0) {
    func_0x00f78a20(0x3d6d268);
    bRam0000000003eb47c4 = 1;
  }
  uVar1 = /*STR('GameStates')*/ uRam0000000003d6d268;
  if ((bRam0000000003eb56c1 & 1) == 0) {
    func_0x00f78a20(0x3d24568,/*STR('GameStates')*/ uRam0000000003d6d268,0,0);
    bRam0000000003eb56c1 = 1;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_48 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
  /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4((float)param_2,&uStack_48,uVar1,0,0);
  return;
}



// ============================================================
// RVA: 0x1458c04 | Atlas.Audio.AtlasAudioManager.GetAudioMapBehaviour
// ============================================================

undefined8 Atlas_Audio_AtlasAudioManager__GetAudioMapBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x1458c0c | Atlas.Audio.AtlasAudioManager.SetMusicManager
// ============================================================

void Atlas_Audio_AtlasAudioManager__SetMusicManager(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



// ============================================================
// RVA: 0x1458c14 | Atlas.Audio.AtlasAudioManager.GetMusicManager
// ============================================================

undefined8 Atlas_Audio_AtlasAudioManager__GetMusicManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1458c1c | Atlas.Audio.AtlasAudioManager.ResetLapCounter
// ============================================================

void Atlas_Audio_AtlasAudioManager__ResetLapCounter(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// ============================================================
// RVA: 0x1458c28 | Atlas.Audio.AtlasAudioManager.Init
// ============================================================

void Atlas_Audio_AtlasAudioManager__Init(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb47c5 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d57308);
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d24b40);
    func_0x00f78a20(0x3d25aa8);
    func_0x00f78a20(0x3d72c28);
    bRam0000000003eb47c5 = 1;
  }
  uStack_48 = 0;
  /*Core.Audio.AudioManager$$Init*/ func_0x01639270(param_1,0);
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('SpeechRulesDefinitionDefault')*/ uRam0000000003d72c28,0);
    if (lVar2 != 0) {
      uVar1 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,uVar1,uRam0000000003d57308);
      *(undefined8 *)(param_1 + 0xc0) = uVar1;
      lVar2 = func_0x00f78aec(/*Atlas.Audio.SpeechManager_TypeInfo*/ uRam0000000003d24b40);
      /*Atlas.Audio.SpeechManager$$.ctor*/ func_0x014ff348(lVar2,0);
      *(long *)(param_1 + 0x28) = lVar2;
      if (lVar2 != 0) {
        /*Atlas.Audio.SpeechManager$$Init*/ func_0x014fdc1c(lVar2,param_1,*(undefined8 *)(param_1 + 0xc0),0);
        lVar2 = func_0x00f78aec(/*Atlas.Audio.SpeechManager_TypeInfo*/ uRam0000000003d24b40);
        /*Atlas.Audio.SpeechManager$$.ctor*/ func_0x014ff348(lVar2,0);
        *(long *)(param_1 + 0x30) = lVar2;
        if (lVar2 != 0) {
          /*Atlas.Audio.SpeechManager$$Init*/ func_0x014fdc1c(lVar2,param_1,*(undefined8 *)(param_1 + 0xc0),0);
          lVar2 = func_0x00f78aec(/*Atlas.Audio.WeaponAudioManager_TypeInfo*/ uRam0000000003d25aa8);
          /*Atlas.Audio.WeaponAudioManager$$.ctor*/ func_0x01530b68(lVar2,0);
          *(long *)(param_1 + 0x38) = lVar2;
          if (lVar2 != 0) {
            /*Atlas.Audio.WeaponAudioManager$$Init*/ func_0x015303fc(lVar2,param_1,0);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x328);
            uVar1 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
            /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar1,uVar3,0,0,0);
            *(undefined8 *)(param_1 + 0x98) = uVar1;
            uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x330);
            uVar1 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
            /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar1,uVar3,0,0,0);
            *(undefined8 *)(param_1 + 0xa0) = uVar1;
            uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x340);
            uVar1 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
            /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar1,uVar3,0,0,0);
            *(undefined8 *)(param_1 + 0xa8) = uVar1;
            uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x348);
            uVar1 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
            /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar1,uVar3,0,0,0);
            *(undefined8 *)(param_1 + 0xb8) = uVar1;
            uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0xf0);
            uVar1 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
            /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar1,uVar3,0,0,0);
            *(undefined8 *)(param_1 + 0xb0) = uVar1;
            if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uStack_48 = /*FMODUnity.RuntimeManager$$get_CoreSystem*/ func_0x016e83cc(0);
            /*FMOD.System$$mixerSuspend*/ func_0x016f4298(&uStack_48,0);
            uStack_48 = /*FMODUnity.RuntimeManager$$get_CoreSystem*/ func_0x016e83cc(0);
            /*FMOD.System$$mixerResume*/ func_0x016f42a4(&uStack_48,0);
            uStack_48 = /*FMODUnity.RuntimeManager$$get_CoreSystem*/ func_0x016e83cc(0);
            /*FMOD.System$$getOutput*/ func_0x016f341c(&uStack_48,param_1 + 0xdc,0);
            return;
          }
        }
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1458f64 | Atlas.Audio.AtlasAudioManager.LoadBanks
// ============================================================

void Atlas_Audio_AtlasAudioManager__LoadBanks(void)

{
  return;
}



// ============================================================
// RVA: 0x1458f68 | Atlas.Audio.AtlasAudioManager.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1459080 | Atlas.Audio.AtlasAudioManager.ApplyAudioSettings
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1459368 | Atlas.Audio.AtlasAudioManager.GetCharacterById
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1459410 | Atlas.Audio.AtlasAudioManager.GetKartById
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14594b8 | Atlas.Audio.AtlasAudioManager.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014595e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01459604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01349cb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01349cb4) */
/* WARNING: Removing unreachable block (ram,0x01349cbc) */
/* WARNING: Removing unreachable block (ram,0x01349cd0) */
/* WARNING: Removing unreachable block (ram,0x01349cf0) */
/* WARNING: Removing unreachable block (ram,0x01349d20) */
/* WARNING: Removing unreachable block (ram,0x01349d08) */

segment_command * Atlas_Audio_AtlasAudioManager__DeInit(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  segment_command *psVar5;
  segment_command *psVar6;
  segment_command *psVar7;
  segment_command *psVar8;
  segment_command *psVar9;
  segment_command *psVar10;
  ulong uVar11;
  undefined8 uVar12;
  segment_command *psVar13;
  long lVar14;
  segment_command *psVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  long extraout_x1;
  long extraout_x1_00;
  undefined1 *extraout_x1_01;
  long extraout_x1_02;
  byte *pbVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  char *pcVar21;
  segment_command *in_x4;
  undefined4 *in_x5;
  undefined1 uVar22;
  byte bVar23;
  int *piVar24;
  long unaff_x19;
  undefined1 *puVar25;
  long unaff_x20;
  long lVar26;
  undefined4 *puVar27;
  dword *pdVar28;
  dword *pdVar29;
  undefined8 unaff_x21;
  undefined8 uVar30;
  undefined8 *puVar31;
  char *pcVar32;
  segment_command *unaff_x22;
  char *pcVar33;
  dword *unaff_x23;
  segment_command *unaff_x24;
  segment_command *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  qword qVar34;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 extraout_d0_06;
  qword qVar35;
  qword qVar36;
  undefined8 uVar37;
  qword qVar38;
  undefined8 uVar39;
  qword qVar40;
  undefined8 uVar41;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar42 [12];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStack_4818 [1680];
  undefined1 auStack_4188 [1040];
  undefined1 auStack_3d78 [9888];
  undefined1 auStack_16d8 [336];
  undefined1 auStack_1588 [4448];
  undefined1 auStack_428 [688];
  undefined1 auStack_178 [224];
  undefined8 uStack_98;
  segment_command *psStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  puVar25 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb47c9 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d52278);
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47c9 = 1;
  }
  /*Core.Audio.AudioManager$$DeInit*/ func_0x016392f8(param_1,0);
  lVar26 = *(long *)(param_1 + 0x80);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar30 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x380);
  psVar13 = (segment_command *)func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(psVar13,param_1,uRam0000000003d52278,uRam0000000003d2a320);
  if (lVar26 == 0) {
LAB_0145963c:
    lVar14 = func_0x00f78af4();
    puStack_48 = &Atlas_Audio_AtlasAudioManager__OnEndOfLevel;
    lStack_60 = lVar26;
    lStack_58 = param_1;
    puStack_50 = puVar25;
    if (*(long *)(lVar14 + 0x38) == 0) {
      auVar42 = func_0x00f78af4();
      puStack_68 = &Atlas_Audio_AtlasAudioManager__Mute;
      psStack_90 = psVar13;
      uStack_88 = uVar30;
      lStack_80 = lVar26;
      lStack_78 = lVar14;
      ppuStack_70 = &puStack_50;
      if ((bRam0000000003eb47cb & 1) == 0) {
        func_0x00f78a20(0x3d24568);
        func_0x00f78a20(0x3d760b8);
        bRam0000000003eb47cb = 1;
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_98 = /*FMODUnity.RuntimeManager$$GetVCA*/ func_0x016ec5dc(/*STR('Vca:/SFX')*/ uRam0000000003d760b8,0);
      puVar27 = (undefined4 *)(auVar42._0_8_ + 0xd4);
      if (auVar42._8_4_ == 0) {
        uVar4 = *puVar27;
      }
      else {
        /*FMOD.Studio.VCA$$getVolume*/ func_0x016f833c(&uStack_98,puVar27,0);
        uVar4 = 0;
      }
      psVar13 = (segment_command *)/*FMOD.Studio.VCA$$setVolume*/ func_0x016f8370(uVar4,&uStack_98,0);
      return psVar13;
    }
    psVar13 = (segment_command *)/*Atlas.Audio.WeaponAudioManager$$ClearAllWeapons*/ func_0x015309f0(*(long *)(lVar14 + 0x38),0);
    *(undefined1 *)(lVar14 + 0x90) = 1;
    return psVar13;
  }
  pcVar21 = (char *)0x0;
  psVar6 = psVar13;
  /*Atlas.Settings.AtlasQualitySettings$$UnRegisterOnSettingChanged*/ func_0x0145ee50(lVar26,uVar30);
  if (*(long *)(param_1 + 0x28) != 0) {
    /*Atlas.Audio.SpeechManager$$DeInit*/ func_0x014fe06c(*(long *)(param_1 + 0x28),0);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_0145963c;
  /*Atlas.Audio.SpeechManager$$DeInit*/ func_0x014fe06c(*(long *)(param_1 + 0x30),0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_0145963c;
  /*Atlas.Audio.WeaponAudioManager$$DeInit*/ func_0x015305c8(*(long *)(param_1 + 0x38),0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  lVar14 = *(long *)(param_1 + 0x98);
  if (lVar14 == 0) {
    if (*(long *)(param_1 + 0xa0) != 0) {
      /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(*(long *)(param_1 + 0xa0),0);
    }
    lVar14 = *(long *)(param_1 + 0xa8);
    if (lVar14 == 0) {
      lVar14 = *(long *)(param_1 + 0xb0);
      if (lVar14 == 0) {
        return (segment_command *)0x0;
      }
    }
    else {
      unaff_x30 = 0x1459608;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x19 = param_1;
      unaff_x20 = lVar26;
      unaff_x21 = uVar30;
      unaff_x22 = psVar13;
      unaff_x23 = (dword *)0x3d52278;
      unaff_x24 = (segment_command *)0x3d2a320;
      unaff_x29 = puVar25;
    }
  }
  else {
    unaff_x30 = 0x14595e8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_1;
    unaff_x20 = lVar26;
    unaff_x21 = uVar30;
    unaff_x22 = psVar13;
    unaff_x23 = (dword *)0x3d52278;
    unaff_x24 = (segment_command *)0x3d2a320;
    unaff_x29 = puVar25;
  }
  *(segment_command **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb56aa & 1) == 0) {
    func_0x00f78a20(0x3d24568,0);
    bRam0000000003eb56aa = 1;
  }
  /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar14,0);
  uVar30 = *(undefined8 *)(lVar14 + 0x28);
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar30,0);
  psVar13 = (segment_command *)/*FMOD.Studio.EventDescription$$isValid*/ func_0x016df5c8((undefined8 *)(lVar14 + 0x20),0);
  if ((int)psVar13 == 0) {
    return psVar13;
  }
  lVar26 = lVar14 + 0x28;
  psVar13 = (segment_command *)/*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar26,0);
  if ((int)psVar13 != 0) {
    /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar26,0);
    psVar13 = (segment_command *)/*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar26,0);
  }
  if (*(char *)(lVar14 + 0x18) == '\0') {
    return psVar13;
  }
  puVar20 = *(undefined8 **)((long)register0x00000008 + -0x30);
  uVar30 = *(undefined8 *)((long)register0x00000008 + -0x28);
  psVar15 = *(segment_command **)(lVar14 + 0x20);
  *(undefined8 **)((long)register0x00000008 + -0x30) = puVar20;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar30;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  *(undefined8 *)((long)register0x00000008 + -0x38) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
  psVar13 = (segment_command *)
            func_0x01279100(psVar15,(undefined1 *)((long)register0x00000008 + -0x148));
  if ((int)psVar13 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x148) + 0x24) >> 1 & 1) == 0) {
      psVar13 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar13 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x140));
      if ((int)psVar13 == 0) {
        uVar30 = 0x10;
        psVar6 = (segment_command *)&MACH_HEADER.ncmds;
        psVar13 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x148) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x138));
        if ((int)psVar13 == 0) {
          puVar31 = *(undefined8 **)((long)register0x00000008 + -0x138);
          *puVar31 = &UNK_03c7d930;
          *(undefined4 *)(puVar31 + 1) = 0x10;
          *(int *)((long)puVar31 + 0xc) = (int)psVar15;
          psVar13 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x148) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x140));
  if (((int)psVar13 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -0x138) = 0;
    pcVar21 = "EventDescription::unloadSampleData";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x138);
    psVar6 = psVar15;
    func_0x013aa954(psVar13,0xc);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x38)) {
    return psVar13;
  }
  auVar43 = ___stack_chk_fail();
  puVar27 = auVar43._8_8_;
  psVar5 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -400) = unaff_x24;
  *(dword **)((long)register0x00000008 + -0x188) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x180) = puVar20;
  *(undefined8 *)((long)register0x00000008 + -0x178) = uVar30;
  *(segment_command **)((long)register0x00000008 + -0x170) = psVar13;
  *(segment_command **)((long)register0x00000008 + -0x168) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0x160) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x158) = &DAT_01344790;
  *(undefined8 *)((long)register0x00000008 + -0x198) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 == (undefined4 *)0x0) {
    psVar13 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01344878:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x298),0x100,puVar27);
      pcVar21 = "EventDescription::getSampleLoadingState";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x298);
      psVar6 = psVar5;
      func_0x013aa954(psVar13,0xc);
    }
  }
  else {
    *puVar27 = 1;
    *(undefined8 *)((long)register0x00000008 + -0x2a0) = 0;
    psVar13 = (segment_command *)
              func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x2a8));
    if ((int)psVar13 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x2a8) + 0x24) >> 1 & 1) == 0) {
        psVar13 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar13 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2a0));
        if ((int)psVar13 == 0) {
          unaff_x23 = &MACH_HEADER.flags;
          psVar6 = (segment_command *)&MACH_HEADER.flags;
          psVar13 = (segment_command *)
                    func_0x012933e8(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x2a8) + 0x98),
                                    (undefined1 *)((long)register0x00000008 + -0x298));
          if ((int)psVar13 == 0) {
            puVar20 = *(undefined8 **)((long)register0x00000008 + -0x298);
            *puVar20 = &UNK_03c7d9a8;
            *(undefined4 *)(puVar20 + 1) = 0x18;
            *(int *)((long)puVar20 + 0xc) = auVar43._0_4_;
            psVar13 = (segment_command *)
                      func_0x01292948(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x2a8) + 0x98),puVar20
                                     );
            if ((int)psVar13 == 0) {
              *puVar27 = *(undefined4 *)(puVar20 + 2);
            }
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2a0));
    if ((int)psVar13 != 0) goto code_r0x01344878;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x198)) {
    return psVar13;
  }
  psVar15 = (segment_command *)___stack_chk_fail();
  *(undefined8 **)((long)register0x00000008 + -0x2e0) = puVar20;
  *(segment_command **)((long)register0x00000008 + -0x2d8) = psVar13;
  *(undefined4 **)((long)register0x00000008 + -0x2d0) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x2c8) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x2c0) =
       (undefined1 *)((long)register0x00000008 + -0x160);
  *(undefined **)((long)register0x00000008 + -0x2b8) = &DAT_013448f0;
  *(undefined8 *)((long)register0x00000008 + -0x2e8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x3f0) = 0;
  psVar5 = (segment_command *)
           func_0x01279100(psVar15,(undefined1 *)((long)register0x00000008 + -0x3f8));
  if ((int)psVar5 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x3f8) + 0x24) >> 1 & 1) == 0) {
      psVar5 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar5 = (segment_command *)func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3f0))
      ;
      if ((int)psVar5 == 0) {
        psVar13 = (segment_command *)&MACH_HEADER.ncmds;
        psVar6 = (segment_command *)&MACH_HEADER.ncmds;
        psVar5 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x3f8) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -1000));
        if ((int)psVar5 == 0) {
          puVar31 = *(undefined8 **)((long)register0x00000008 + -1000);
          *puVar31 = &UNK_03c7da20;
          *(undefined4 *)(puVar31 + 1) = 0x10;
          *(int *)((long)puVar31 + 0xc) = (int)psVar15;
          psVar5 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x3f8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3f0));
  if (((int)psVar5 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -1000) = 0;
    pcVar21 = "EventDescription::releaseAllInstances";
    in_x4 = (segment_command *)((long)register0x00000008 + -1000);
    psVar6 = psVar15;
    func_0x013aa954(psVar5,0xc);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2e8)) {
    return psVar5;
  }
  auVar43 = ___stack_chk_fail();
  puVar31 = auVar43._8_8_;
  psVar7 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x450) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x448) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x440) = unaff_x24;
  *(dword **)((long)register0x00000008 + -0x438) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x430) = puVar20;
  *(segment_command **)((long)register0x00000008 + -0x428) = psVar13;
  *(segment_command **)((long)register0x00000008 + -0x420) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0x418) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0x410) =
       (undefined1 *)((long)register0x00000008 + -0x2c0);
  *(undefined **)((long)register0x00000008 + -0x408) = &DAT_01344a08;
  *(undefined8 *)((long)register0x00000008 + -0x458) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x558) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x550) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x548) = 0;
  psVar13 = psVar6;
  psVar15 = (segment_command *)
            func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x550));
  if ((((int)psVar15 == 0) &&
      (psVar15 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x558),
                                 *(undefined8 *)((long)register0x00000008 + -0x550)),
      (int)psVar15 == 0)) &&
     (psVar15 = (segment_command *)
                func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x560)),
     (int)psVar15 == 0)) {
    lVar26 = *(long *)(*(long *)((long)register0x00000008 + -0x560) + 8);
    *(long *)((long)register0x00000008 + -0x548) = lVar26;
    lVar26 = *(long *)(lVar26 + 0xd0);
    *(undefined8 **)(lVar26 + 0x40) = puVar31;
    uVar4 = 0;
    if (puVar31 != (undefined8 *)0x0) {
      uVar4 = SUB84(psVar6,0);
    }
    *(undefined4 *)(lVar26 + 0x48) = uVar4;
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x558));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    unaff_x23 = (dword *)((long)register0x00000008 + -0x558);
    unaff_x24 = (segment_command *)&section_000000b8.reserved2;
    iVar2 = func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x558),0x100,puVar31);
    puVar31 = (undefined8 *)(long)iVar2;
    iVar2 = func_0x0135ce6c((long)unaff_x23 + (long)puVar31,0x100 - iVar2,", ");
    func_0x0135cce0((long)unaff_x23 + (long)puVar31 + (long)iVar2,
                    0x100 - (int)((long)puVar31 + (long)iVar2),psVar6);
    pcVar21 = "EventDescription::setCallback";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x558);
    psVar13 = psVar7;
    func_0x013aa954(psVar15,0xc);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x458)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  puVar20 = auVar43._8_8_;
  psVar5 = auVar43._0_8_;
  *(undefined8 **)((long)register0x00000008 + -0x590) = puVar31;
  *(segment_command **)((long)register0x00000008 + -0x588) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x580) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x578) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x570) =
       (undefined1 *)((long)register0x00000008 + -0x410);
  *(undefined **)((long)register0x00000008 + -0x568) = &DAT_01344b64;
  *(undefined8 *)((long)register0x00000008 + -0x598) = *(undefined8 *)PTR_03a5d648;
  if (puVar20 == (undefined8 *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01344c0c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x698),0x100,puVar20);
      pcVar21 = "EventDescription::getUserData";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x698);
      psVar13 = psVar5;
      func_0x013aa954(psVar6,0xc);
    }
  }
  else {
    *puVar20 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x698) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x690) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x688) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x690));
    if ((((int)psVar6 == 0) &&
        (psVar6 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x698),
                                  *(undefined8 *)((long)register0x00000008 + -0x690)),
        (int)psVar6 == 0)) &&
       (psVar6 = (segment_command *)
                 func_0x01279164(psVar5,(undefined1 *)((long)register0x00000008 + -0x6a0)),
       (int)psVar6 == 0)) {
      lVar26 = *(long *)(*(long *)((long)register0x00000008 + -0x6a0) + 8);
      *(long *)((long)register0x00000008 + -0x688) = lVar26;
      *puVar20 = *(undefined8 *)(*(long *)(lVar26 + 0xd0) + 0x38);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x698));
    if ((int)psVar6 != 0) goto code_r0x01344c0c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x598)) {
    return psVar6;
  }
  auVar43 = ___stack_chk_fail();
  uVar30 = auVar43._8_8_;
  psVar15 = auVar43._0_8_;
  *(undefined8 **)((long)register0x00000008 + -0x6d0) = puVar31;
  *(segment_command **)((long)register0x00000008 + -0x6c8) = psVar6;
  *(undefined8 **)((long)register0x00000008 + -0x6c0) = puVar20;
  *(segment_command **)((long)register0x00000008 + -0x6b8) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x6b0) =
       (undefined1 *)((long)register0x00000008 + -0x570);
  *(undefined **)((long)register0x00000008 + -0x6a8) = &DAT_01344c80;
  *(undefined8 *)((long)register0x00000008 + -0x6d8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x7d8) = 0;
  *(undefined8 *)((long)register0x00000008 + -2000) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x7c8) = 0;
  psVar6 = (segment_command *)
           func_0x01279100(psVar15,(undefined1 *)((long)register0x00000008 + -2000));
  if ((((int)psVar6 == 0) &&
      (psVar6 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x7d8),
                                *(undefined8 *)((long)register0x00000008 + -2000)), (int)psVar6 == 0
      )) && (psVar6 = (segment_command *)
                      func_0x01279164(psVar15,(undefined1 *)((long)register0x00000008 + -0x7e0)),
            (int)psVar6 == 0)) {
    lVar26 = *(long *)(*(long *)((long)register0x00000008 + -0x7e0) + 8);
    *(long *)((long)register0x00000008 + -0x7c8) = lVar26;
    *(undefined8 *)(*(long *)(lVar26 + 0xd0) + 0x38) = uVar30;
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x7d8));
  if (((int)psVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x7d8),0x100,uVar30);
    pcVar21 = "EventDescription::setUserData";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x7d8);
    psVar13 = psVar15;
    func_0x013aa954(psVar6,0xc);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x6d8)) {
    return psVar6;
  }
  auVar43 = ___stack_chk_fail();
  puVar20 = auVar43._8_8_;
  psVar5 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x820) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x818) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x810) = puVar31;
  *(segment_command **)((long)register0x00000008 + -0x808) = psVar6;
  *(undefined8 *)((long)register0x00000008 + -0x800) = uVar30;
  *(segment_command **)((long)register0x00000008 + -0x7f8) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0x7f0) =
       (undefined1 *)((long)register0x00000008 + -0x6b0);
  *(undefined **)((long)register0x00000008 + -0x7e8) = &DAT_01344d84;
  *(undefined8 *)((long)register0x00000008 + -0x828) = *(undefined8 *)PTR_03a5d648;
  if (puVar20 == (undefined8 *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01344e44:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d254((undefined1 *)((long)register0x00000008 + -0x928),0x100,puVar20);
      pcVar21 = "Bus::getID";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x928);
      psVar13 = psVar5;
      func_0x013aa954(psVar6,0xf);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x928) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x920) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x918) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x920));
    puVar31 = puVar20;
    if ((((int)psVar6 == 0) &&
        (psVar6 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x928),
                                  *(undefined8 *)((long)register0x00000008 + -0x920)),
        (int)psVar6 == 0)) &&
       (psVar6 = (segment_command *)
                 func_0x01279164(psVar5,(undefined1 *)((long)register0x00000008 + -0x930)),
       (int)psVar6 == 0)) {
      *(long *)((long)register0x00000008 + -0x918) = *(long *)((long)register0x00000008 + -0x930);
      lVar26 = *(long *)(*(long *)((long)register0x00000008 + -0x930) + 0x10);
      uVar30 = *(undefined8 *)(lVar26 + 0x10);
      puVar20[1] = *(undefined8 *)(lVar26 + 0x18);
      *puVar20 = uVar30;
      puVar31 = (undefined8 *)0x0;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x928));
    if (puVar31 != (undefined8 *)0x0) {
      *puVar31 = 0;
      puVar31[1] = 0;
    }
    if ((int)psVar6 != 0) goto code_r0x01344e44;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x828)) {
    return psVar6;
  }
  auVar43 = ___stack_chk_fail();
  pcVar33 = auVar43._8_8_;
  psVar15 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x990) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x988) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x980) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x978) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x970) = unaff_x24;
  *(dword **)((long)register0x00000008 + -0x968) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x960) = puVar31;
  *(segment_command **)((long)register0x00000008 + -0x958) = psVar6;
  *(undefined8 **)((long)register0x00000008 + -0x950) = puVar20;
  *(segment_command **)((long)register0x00000008 + -0x948) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x940) =
       (undefined1 *)((long)register0x00000008 + -0x7f0);
  *(undefined **)((long)register0x00000008 + -0x938) = &DAT_01344ebc;
  *(undefined8 *)((long)register0x00000008 + -0x998) = *(undefined8 *)PTR_03a5d648;
  if ((segment_command *)pcVar33 != (segment_command *)0x0) {
    *(char *)&((segment_command *)pcVar33)->cmd = '\0';
  }
  if ((segment_command *)pcVar21 != (segment_command *)0x0) {
    ((segment_command *)pcVar21)->cmd = 0;
  }
  psVar5 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
  psVar6 = psVar13;
  pcVar32 = pcVar21;
  if (((int)psVar13 < 0) ||
     ((segment_command *)pcVar33 == (segment_command *)0x0 && (int)psVar13 != 0)) {
code_r0x01344fac:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      unaff_x24 = (segment_command *)((long)register0x00000008 + -0xa98);
      unaff_x25 = (segment_command *)&section_000000b8.reserved2;
      iVar2 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + -0xa98),0x100,pcVar33);
      pcVar33 = ", ";
      iVar3 = func_0x0135ce6c((long)unaff_x24->segname + (long)iVar2 + -8,0x100 - iVar2,", ");
      unaff_x26 = (long)iVar2 + (long)iVar3;
      iVar2 = func_0x0135cc94((long)unaff_x24->segname + unaff_x26 + -8,0x100 - (int)unaff_x26,
                              psVar13);
      uVar1 = (int)unaff_x26 + iVar2;
      psVar13 = (segment_command *)(ulong)uVar1;
      iVar2 = func_0x0135ce6c((long)unaff_x24->segname + (long)(int)uVar1 + -8,0x100 - uVar1,", ");
      func_0x0135d05c((long)unaff_x24->segname + (long)(int)(uVar1 + iVar2) + -8,
                      0x100 - (uVar1 + iVar2),pcVar21);
      pcVar32 = "Bus::getPath";
      in_x4 = (segment_command *)((long)register0x00000008 + -0xa98);
      psVar6 = psVar15;
      func_0x013aa954(psVar5,0xf);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0xa98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa88) = 0;
    psVar5 = (segment_command *)
             func_0x01279100(psVar15,(undefined1 *)((long)register0x00000008 + -0xa90));
    if (((int)psVar5 == 0) &&
       ((psVar5 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0xa98),
                                  *(undefined8 *)((long)register0x00000008 + -0xa90)),
        (int)psVar5 == 0 &&
        (psVar5 = (segment_command *)
                  func_0x01279164(psVar15,(undefined1 *)((long)register0x00000008 + -0xab0)),
        (int)psVar5 == 0)))) {
      *(long *)((long)register0x00000008 + -0xa88) = *(long *)((long)register0x00000008 + -0xab0);
      lVar26 = *(long *)(*(long *)((long)register0x00000008 + -0xab0) + 0x10);
      uVar30 = *(undefined8 *)(lVar26 + 0x10);
      *(undefined8 *)((long)register0x00000008 + -0xaa8) = *(undefined8 *)(lVar26 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0xab0) = uVar30;
      psVar6 = (segment_command *)pcVar33;
      pcVar32 = (char *)psVar13;
      in_x4 = (segment_command *)pcVar21;
      psVar5 = (segment_command *)
               func_0x013145c8(*(undefined8 *)((long)register0x00000008 + -0xa90),
                               (undefined1 *)((long)register0x00000008 + -0xab0));
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0xa98));
    if ((int)psVar5 != 0) goto code_r0x01344fac;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x998)) {
    return psVar5;
  }
  auVar43 = ___stack_chk_fail();
  psVar7 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0xaf0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0xae8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0xae0) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0xad8) = psVar13;
  *(char **)((long)register0x00000008 + -0xad0) = pcVar21;
  *(segment_command **)((long)register0x00000008 + -0xac8) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0xac0) =
       (undefined1 *)((long)register0x00000008 + -0x940);
  *(undefined **)((long)register0x00000008 + -0xab8) = &DAT_01345090;
  *(undefined8 *)((long)register0x00000008 + -0xaf8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0xc00) = 0;
  psVar13 = (segment_command *)
            func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0xc08));
  if ((int)psVar13 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0xc08) + 0x24) >> 1 & 1) == 0) {
      psVar13 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar13 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0xc00));
      if ((int)psVar13 == 0) {
        psVar5 = (segment_command *)&MACH_HEADER.flags;
        psVar6 = (segment_command *)&MACH_HEADER.flags;
        psVar13 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0xc08) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0xbf8));
        if ((int)psVar13 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0xbf8);
          *puVar20 = &UNK_03c7e6c8;
          *(undefined4 *)(puVar20 + 1) = 0x18;
          *(int *)((long)puVar20 + 0xc) = auVar43._0_4_;
          *(char *)(puVar20 + 2) = auVar43[8];
          psVar13 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0xc08) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0xc00));
  if (((int)psVar13 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cddc((undefined1 *)((long)register0x00000008 + -0xbf8),0x100,auVar43._8_8_);
    pcVar32 = "Bus::setPaused";
    in_x4 = (segment_command *)((long)register0x00000008 + -0xbf8);
    psVar6 = psVar7;
    func_0x013aa954(psVar13,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0xaf8)) {
    return psVar13;
  }
  auVar44 = ___stack_chk_fail();
  puVar25 = auVar44._8_8_;
  psVar15 = auVar44._0_8_;
  *(segment_command **)((long)register0x00000008 + -0xc40) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0xc38) = psVar13;
  *(long *)((long)register0x00000008 + -0xc30) = auVar43._8_8_;
  *(segment_command **)((long)register0x00000008 + -0xc28) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0xc20) =
       (undefined1 *)((long)register0x00000008 + -0xac0);
  *(undefined **)((long)register0x00000008 + -0xc18) = &DAT_013451c4;
  *(undefined8 *)((long)register0x00000008 + -0xc48) = *(undefined8 *)PTR_03a5d648;
  if (puVar25 == (undefined1 *)0x0) {
    psVar13 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x0134527c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d1a4((undefined1 *)((long)register0x00000008 + -0xd48),0x100,puVar25);
      pcVar32 = "Bus::getPaused";
      in_x4 = (segment_command *)((long)register0x00000008 + -0xd48);
      psVar6 = psVar15;
      func_0x013aa954(psVar13,0xf);
    }
  }
  else {
    *puVar25 = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd38) = 0;
    psVar13 = (segment_command *)
              func_0x01279100(psVar15,(undefined1 *)((long)register0x00000008 + -0xd40));
    if ((((int)psVar13 == 0) &&
        (psVar13 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0xd48),
                                   *(undefined8 *)((long)register0x00000008 + -0xd40)),
        (int)psVar13 == 0)) &&
       (psVar13 = (segment_command *)
                  func_0x01279164(psVar15,(undefined1 *)((long)register0x00000008 + -0xd50)),
       (int)psVar13 == 0)) {
      lVar26 = *(long *)((long)register0x00000008 + -0xd50);
      *(long *)((long)register0x00000008 + -0xd38) = lVar26;
      if (*(char *)(lVar26 + 0x28) == '\0') {
        uVar22 = *(undefined1 *)(lVar26 + 0x2a);
      }
      else {
        uVar22 = 1;
      }
      psVar13 = (segment_command *)0x0;
      *puVar25 = uVar22;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0xd48));
    if ((int)psVar13 != 0) goto code_r0x0134527c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0xc48)) {
    return psVar13;
  }
  auVar43 = ___stack_chk_fail();
  psVar7 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0xd90) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0xd88) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0xd80) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0xd78) = psVar13;
  *(undefined1 **)((long)register0x00000008 + -0xd70) = puVar25;
  *(segment_command **)((long)register0x00000008 + -0xd68) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0xd60) =
       (undefined1 *)((long)register0x00000008 + -0xc20);
  *(undefined **)((long)register0x00000008 + -0xd58) = &DAT_013452f0;
  *(undefined8 *)((long)register0x00000008 + -0xd98) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0xea0) = 0;
  psVar13 = (segment_command *)
            func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0xea8));
  if ((int)psVar13 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0xea8) + 0x24) >> 1 & 1) == 0) {
      psVar13 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar13 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0xea0));
      if ((int)psVar13 == 0) {
        psVar5 = (segment_command *)&MACH_HEADER.flags;
        psVar6 = (segment_command *)&MACH_HEADER.flags;
        psVar13 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0xea8) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0xe98));
        if ((int)psVar13 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0xe98);
          *puVar20 = &UNK_03c7e740;
          *(undefined4 *)(puVar20 + 1) = 0x18;
          *(int *)((long)puVar20 + 0xc) = auVar43._0_4_;
          *(char *)(puVar20 + 2) = auVar43[8];
          psVar13 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0xea8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0xea0));
  if (((int)psVar13 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cddc((undefined1 *)((long)register0x00000008 + -0xe98),0x100,auVar43._8_8_);
    pcVar32 = "Bus::setMute";
    in_x4 = (segment_command *)((long)register0x00000008 + -0xe98);
    psVar6 = psVar7;
    func_0x013aa954(psVar13,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0xd98)) {
    return psVar13;
  }
  auVar44 = ___stack_chk_fail();
  puVar25 = auVar44._8_8_;
  psVar15 = auVar44._0_8_;
  *(segment_command **)((long)register0x00000008 + -0xee0) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0xed8) = psVar13;
  *(long *)((long)register0x00000008 + -0xed0) = auVar43._8_8_;
  *(segment_command **)((long)register0x00000008 + -0xec8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0xec0) =
       (undefined1 *)((long)register0x00000008 + -0xd60);
  *(undefined **)((long)register0x00000008 + -0xeb8) = &DAT_01345424;
  *(undefined8 *)((long)register0x00000008 + -0xee8) = *(undefined8 *)PTR_03a5d648;
  if (puVar25 == (undefined1 *)0x0) {
    psVar13 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x013454dc:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d1a4((undefined1 *)((long)register0x00000008 + -0xfe8),0x100,puVar25);
      pcVar32 = "Bus::getMute";
      in_x4 = (segment_command *)((long)register0x00000008 + -0xfe8);
      psVar6 = psVar15;
      func_0x013aa954(psVar13,0xf);
    }
  }
  else {
    *puVar25 = 0;
    *(undefined8 *)((long)register0x00000008 + -0xfe8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xfe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xfd8) = 0;
    psVar13 = (segment_command *)
              func_0x01279100(psVar15,(undefined1 *)((long)register0x00000008 + -0xfe0));
    if ((((int)psVar13 == 0) &&
        (psVar13 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0xfe8),
                                   *(undefined8 *)((long)register0x00000008 + -0xfe0)),
        (int)psVar13 == 0)) &&
       (psVar13 = (segment_command *)
                  func_0x01279164(psVar15,(undefined1 *)((long)register0x00000008 + -0xff0)),
       (int)psVar13 == 0)) {
      lVar26 = *(long *)((long)register0x00000008 + -0xff0);
      *(long *)((long)register0x00000008 + -0xfd8) = lVar26;
      if (*(char *)(lVar26 + 0x29) == '\0') {
        uVar22 = *(undefined1 *)(lVar26 + 0x2b);
      }
      else {
        uVar22 = 1;
      }
      psVar13 = (segment_command *)0x0;
      *puVar25 = uVar22;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0xfe8));
    if ((int)psVar13 != 0) goto code_r0x013454dc;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0xee8)) {
    return psVar13;
  }
  psVar7 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x1030) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x1028) = unaff_d8;
  *(segment_command **)((long)register0x00000008 + -0x1020) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0x1018) = psVar13;
  *(undefined1 **)((long)register0x00000008 + -0x1010) = puVar25;
  *(segment_command **)((long)register0x00000008 + -0x1008) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0x1000) =
       (undefined1 *)((long)register0x00000008 + -0xec0);
  *(undefined **)((long)register0x00000008 + -0xff8) = &DAT_01345550;
  *(undefined8 *)((long)register0x00000008 + -0x1038) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x1140) = 0;
  psVar15 = (segment_command *)
            func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x1148));
  if ((int)psVar15 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x1148) + 0x24) >> 1 & 1) == 0) {
      psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar15 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1140));
      if ((int)psVar15 == 0) {
        psVar13 = (segment_command *)&MACH_HEADER.flags;
        psVar6 = (segment_command *)&MACH_HEADER.flags;
        psVar15 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x1148) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x1138));
        if ((int)psVar15 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x1138);
          *puVar20 = &UNK_03c7e650;
          *(undefined4 *)(puVar20 + 1) = 0x18;
          *(int *)((long)puVar20 + 0xc) = (int)psVar7;
          *(int *)(puVar20 + 2) = (int)extraout_d0;
          psVar15 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x1148) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1140));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cd7c(extraout_d0,(undefined1 *)((long)register0x00000008 + -0x1138),0x100);
    pcVar32 = "Bus::setVolume";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x1138);
    psVar6 = psVar7;
    func_0x013aa954(psVar15,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1038)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  puVar27 = auVar43._8_8_;
  psVar8 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x11a0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x1198) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x1190) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x1188) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x1180) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0x1178) = psVar13;
  *(segment_command **)((long)register0x00000008 + -0x1170) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x1168) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x1160) =
       (undefined1 *)((long)register0x00000008 + -0x1000);
  *(undefined **)((long)register0x00000008 + -0x1158) = &DAT_01345684;
  *(undefined8 *)((long)register0x00000008 + -0x11a8) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 != (undefined4 *)0x0) {
    *puVar27 = 0;
  }
  if (psVar6 != (segment_command *)0x0) {
    psVar6->cmd = 0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x12a8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x12a0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1298) = 0;
  psVar13 = psVar6;
  psVar15 = (segment_command *)
            func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x12a0));
  if ((((int)psVar15 == 0) &&
      (psVar15 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x12a8),
                                 *(undefined8 *)((long)register0x00000008 + -0x12a0)),
      (int)psVar15 == 0)) &&
     (psVar15 = (segment_command *)
                func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0x12b0)),
     (int)psVar15 == 0)) {
    *(undefined8 *)((long)register0x00000008 + -0x1298) =
         *(undefined8 *)((long)register0x00000008 + -0x12b0);
    psVar13 = psVar6;
    psVar15 = (segment_command *)
              func_0x0129ccf0(*(undefined8 *)((long)register0x00000008 + -0x12b0),puVar27);
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x12a8));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    pcVar33 = (char *)((long)register0x00000008 + -0x12a8);
    unaff_x24 = (segment_command *)&section_000000b8.reserved2;
    iVar2 = func_0x0135d15c((undefined1 *)((long)register0x00000008 + -0x12a8),0x100,puVar27);
    puVar27 = (undefined4 *)(long)iVar2;
    iVar2 = func_0x0135ce6c((long)puVar27 + (long)((long)((segment_command *)pcVar33)->segname + -8)
                            ,0x100 - iVar2,", ");
    func_0x0135d15c((long)((segment_command *)pcVar33)->segname + (long)puVar27 + (long)iVar2 + -8,
                    0x100 - (int)((long)puVar27 + (long)iVar2),psVar6);
    pcVar32 = "Bus::getVolume";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x12a8);
    psVar13 = psVar8;
    func_0x013aa954(psVar15,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x11a8)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  psVar5 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x12f0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x12e8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x12e0) = psVar15;
  *(undefined4 **)((long)register0x00000008 + -0x12d8) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x12d0) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x12c8) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x12c0) =
       (undefined1 *)((long)register0x00000008 + -0x1160);
  *(undefined **)((long)register0x00000008 + -0x12b8) = &DAT_013457e8;
  *(undefined8 *)((long)register0x00000008 + -0x12f8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x1400) = 0;
  psVar6 = (segment_command *)
           func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x1408));
  if ((int)psVar6 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x1408) + 0x24) >> 1 & 1) == 0) {
      psVar6 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar6 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1400));
      if ((int)psVar6 == 0) {
        psVar15 = (segment_command *)&MACH_HEADER.flags;
        psVar13 = (segment_command *)&MACH_HEADER.flags;
        psVar6 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x1408) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x13f8));
        if ((int)psVar6 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x13f8);
          *puVar20 = &UNK_03c7e7b8;
          *(undefined4 *)(puVar20 + 1) = 0x18;
          *(int *)((long)puVar20 + 0xc) = auVar43._0_4_;
          *(int *)(puVar20 + 2) = auVar43._8_4_;
          psVar6 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x1408) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1400));
  if (((int)psVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x13f8),0x100,auVar43._8_8_);
    pcVar32 = "Bus::stopAllEvents";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x13f8);
    psVar13 = psVar5;
    func_0x013aa954(psVar6,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x12f8)) {
    return psVar6;
  }
  psVar7 = (segment_command *)___stack_chk_fail();
  *(segment_command **)((long)register0x00000008 + -0x1440) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x1438) = psVar6;
  *(long *)((long)register0x00000008 + -0x1430) = auVar43._8_8_;
  *(segment_command **)((long)register0x00000008 + -0x1428) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x1420) =
       (undefined1 *)((long)register0x00000008 + -0x12c0);
  *(undefined **)((long)register0x00000008 + -0x1418) = &DAT_0134591c;
  *(undefined8 *)((long)register0x00000008 + -0x1448) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x1550) = 0;
  psVar5 = (segment_command *)
           func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x1558));
  if ((int)psVar5 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x1558) + 0x24) >> 1 & 1) == 0) {
      psVar5 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar5 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1550));
      if ((int)psVar5 == 0) {
        psVar6 = (segment_command *)&MACH_HEADER.ncmds;
        psVar13 = (segment_command *)&MACH_HEADER.ncmds;
        psVar5 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x1558) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x1548));
        if ((int)psVar5 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x1548);
          *puVar20 = &UNK_03c7e4e8;
          *(undefined4 *)(puVar20 + 1) = 0x10;
          *(int *)((long)puVar20 + 0xc) = (int)psVar7;
          psVar5 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x1558) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1550));
  if (((int)psVar5 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -0x1548) = 0;
    pcVar32 = "Bus::lockChannelGroup";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x1548);
    psVar13 = psVar7;
    func_0x013aa954(psVar5,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1448)) {
    return psVar5;
  }
  psVar8 = (segment_command *)___stack_chk_fail();
  *(segment_command **)((long)register0x00000008 + -0x1590) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x1588) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x1580) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0x1578) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x1570) =
       (undefined1 *)((long)register0x00000008 + -0x1420);
  *(undefined **)((long)register0x00000008 + -0x1568) = &DAT_01345a34;
  *(undefined8 *)((long)register0x00000008 + -0x1598) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x16a0) = 0;
  psVar5 = (segment_command *)
           func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x16a8));
  if ((int)psVar5 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x16a8) + 0x24) >> 1 & 1) == 0) {
      psVar5 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar5 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x16a0));
      if ((int)psVar5 == 0) {
        psVar6 = (segment_command *)&MACH_HEADER.ncmds;
        psVar13 = (segment_command *)&MACH_HEADER.ncmds;
        psVar5 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x16a8) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x1698));
        if ((int)psVar5 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x1698);
          *puVar20 = &UNK_03c7e560;
          *(undefined4 *)(puVar20 + 1) = 0x10;
          *(int *)((long)puVar20 + 0xc) = (int)psVar8;
          psVar5 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x16a8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x16a0));
  if (((int)psVar5 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -0x1698) = 0;
    pcVar32 = "Bus::unlockChannelGroup";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x1698);
    psVar13 = psVar8;
    func_0x013aa954(psVar5,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1598)) {
    return psVar5;
  }
  auVar43 = ___stack_chk_fail();
  puVar20 = auVar43._8_8_;
  psVar7 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x16f0) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x16e8) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x16e0) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x16d8) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x16d0) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0x16c8) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x16c0) =
       (undefined1 *)((long)register0x00000008 + -0x1570);
  *(undefined **)((long)register0x00000008 + -0x16b8) = &DAT_01345b4c;
  *(undefined8 *)((long)register0x00000008 + -0x16f8) = *(undefined8 *)PTR_03a5d648;
  if (puVar20 == (undefined8 *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01345c30:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x17f8),0x100,puVar20);
      pcVar32 = "Bus::getChannelGroup";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x17f8);
      psVar13 = psVar7;
      func_0x013aa954(psVar6,0xf);
    }
  }
  else {
    *puVar20 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1800) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x1808));
    if ((int)psVar6 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x1808) + 0x24) >> 1 & 1) == 0) {
        psVar6 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar6 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1800));
        if ((int)psVar6 == 0) {
          pcVar33 = (char *)&MACH_HEADER.flags;
          psVar13 = (segment_command *)&MACH_HEADER.flags;
          psVar6 = (segment_command *)
                   func_0x012933e8(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x1808) + 0x98),
                                   (undefined1 *)((long)register0x00000008 + -0x17f8));
          if ((int)psVar6 == 0) {
            psVar15 = *(segment_command **)((long)register0x00000008 + -0x17f8);
            *(undefined **)psVar15 = &UNK_03c7e5d8;
            psVar15->segname[0] = '\x18';
            psVar15->segname[1] = '\0';
            psVar15->segname[2] = '\0';
            psVar15->segname[3] = '\0';
            *(int *)(psVar15->segname + 4) = auVar43._0_4_;
            psVar6 = (segment_command *)
                     func_0x01292948(*(undefined8 *)
                                      (*(long *)((long)register0x00000008 + -0x1808) + 0x98),psVar15
                                    );
            if ((int)psVar6 == 0) {
              *puVar20 = *(undefined8 *)(psVar15->segname + 8);
            }
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1800));
    if ((int)psVar6 != 0) goto code_r0x01345c30;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x16f8)) {
    return psVar6;
  }
  auVar43 = ___stack_chk_fail();
  puVar31 = auVar43._8_8_;
  psVar5 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x1860) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x1858) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x1850) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x1848) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x1840) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x1838) = psVar6;
  *(undefined8 **)((long)register0x00000008 + -0x1830) = puVar20;
  *(segment_command **)((long)register0x00000008 + -0x1828) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x1820) =
       (undefined1 *)((long)register0x00000008 + -0x16c0);
  *(undefined **)((long)register0x00000008 + -0x1818) = &DAT_01345ca8;
  *(undefined8 *)((long)register0x00000008 + -0x1868) = *(undefined8 *)PTR_03a5d648;
  psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
  psVar6 = psVar13;
  if ((puVar31 == (undefined8 *)0x0) || (psVar13 == (segment_command *)0x0)) {
code_r0x01345d5c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      pcVar33 = (char *)((long)register0x00000008 + -0x1968);
      unaff_x24 = (segment_command *)&section_000000b8.reserved2;
      iVar2 = func_0x0135d09c((undefined1 *)((long)register0x00000008 + -0x1968),0x100,puVar31);
      puVar31 = (undefined8 *)(long)iVar2;
      iVar2 = func_0x0135ce6c((long)puVar31 +
                              (long)((long)((segment_command *)pcVar33)->segname + -8),0x100 - iVar2
                              ,", ");
      func_0x0135d09c((long)((segment_command *)pcVar33)->segname + (long)puVar31 + (long)iVar2 + -8
                      ,0x100 - (int)((long)puVar31 + (long)iVar2),psVar13);
      pcVar32 = "Bus::getCPUUsage";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x1968);
      psVar6 = psVar5;
      func_0x013aa954(psVar15,0xf);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x1968) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1960) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1958) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x1960));
    if (((int)psVar15 == 0) &&
       ((psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1968),
                                   *(undefined8 *)((long)register0x00000008 + -0x1960)),
        (int)psVar15 == 0 &&
        (psVar15 = (segment_command *)
                   func_0x01279164(psVar5,(undefined1 *)((long)register0x00000008 + -0x1970)),
        (int)psVar15 == 0)))) {
      *(long *)((long)register0x00000008 + -0x1958) = *(long *)((long)register0x00000008 + -0x1970);
      lVar26 = *(long *)(*(long *)((long)register0x00000008 + -0x1970) + 8);
      if (lVar26 == 0) {
        psVar15 = (segment_command *)0x0;
      }
      else {
        psVar6 = psVar13;
        psVar15 = (segment_command *)func_0x0123accc(lVar26,puVar31);
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1968));
    if ((int)psVar15 != 0) goto code_r0x01345d5c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1868)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  puVar20 = auVar43._8_8_;
  psVar7 = auVar43._0_8_;
  *(undefined8 **)((long)register0x00000008 + -0x19a0) = puVar31;
  *(segment_command **)((long)register0x00000008 + -0x1998) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x1990) = psVar13;
  *(segment_command **)((long)register0x00000008 + -0x1988) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x1980) =
       (undefined1 *)((long)register0x00000008 + -0x1820);
  *(undefined **)((long)register0x00000008 + -0x1978) = &DAT_01345e18;
  *(undefined8 *)((long)register0x00000008 + -0x19a8) = *(undefined8 *)PTR_03a5d648;
  if (puVar20 == (undefined8 *)0x0) {
    psVar13 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01345ebc:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x1aa8),0x100,puVar20);
      pcVar32 = "Bus::getMemoryUsage";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x1aa8);
      psVar6 = psVar7;
      func_0x013aa954(psVar13,0xf);
    }
  }
  else {
    *(undefined4 *)(puVar20 + 1) = 0;
    *puVar20 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1aa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1aa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1a98) = 0;
    psVar13 = (segment_command *)
              func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x1aa0));
    if ((((int)psVar13 == 0) &&
        (psVar13 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1aa8),
                                   *(undefined8 *)((long)register0x00000008 + -0x1aa0)),
        (int)psVar13 == 0)) &&
       (psVar13 = (segment_command *)
                  func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x1ab0)),
       (int)psVar13 == 0)) {
      *(undefined8 *)((long)register0x00000008 + -0x1a98) =
           *(undefined8 *)((long)register0x00000008 + -0x1ab0);
      psVar13 = (segment_command *)
                func_0x0129cd38(*(undefined8 *)((long)register0x00000008 + -0x1ab0),puVar20);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1aa8));
    if ((int)psVar13 != 0) goto code_r0x01345ebc;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x19a8)) {
    return psVar13;
  }
  auVar43 = ___stack_chk_fail();
  puVar16 = auVar43._8_8_;
  psVar15 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x1af0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x1ae8) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x1ae0) = puVar31;
  *(segment_command **)((long)register0x00000008 + -0x1ad8) = psVar13;
  *(undefined8 **)((long)register0x00000008 + -0x1ad0) = puVar20;
  *(segment_command **)((long)register0x00000008 + -0x1ac8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x1ac0) =
       (undefined1 *)((long)register0x00000008 + -0x1980);
  *(undefined **)((long)register0x00000008 + -0x1ab8) = &DAT_01345f30;
  *(undefined8 *)((long)register0x00000008 + -0x1af8) = *(undefined8 *)PTR_03a5d648;
  if (puVar16 == (undefined8 *)0x0) {
    psVar13 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01345ff0:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d254((undefined1 *)((long)register0x00000008 + -0x1bf8),0x100,puVar16);
      pcVar32 = "VCA::getID";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x1bf8);
      psVar6 = psVar15;
      func_0x013aa954(psVar13,0x10);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x1bf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1bf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1be8) = 0;
    psVar13 = (segment_command *)
              func_0x01279100(psVar15,(undefined1 *)((long)register0x00000008 + -0x1bf0));
    puVar31 = puVar16;
    if ((((int)psVar13 == 0) &&
        (psVar13 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1bf8),
                                   *(undefined8 *)((long)register0x00000008 + -0x1bf0)),
        (int)psVar13 == 0)) &&
       (psVar13 = (segment_command *)
                  func_0x01279164(psVar15,(undefined1 *)((long)register0x00000008 + -0x1c00)),
       (int)psVar13 == 0)) {
      *(long *)((long)register0x00000008 + -0x1be8) = *(long *)((long)register0x00000008 + -0x1c00);
      lVar26 = *(long *)(*(long *)((long)register0x00000008 + -0x1c00) + 0x10);
      uVar30 = *(undefined8 *)(lVar26 + 0x10);
      puVar16[1] = *(undefined8 *)(lVar26 + 0x18);
      *puVar16 = uVar30;
      puVar31 = (undefined8 *)0x0;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1bf8));
    if (puVar31 != (undefined8 *)0x0) {
      *puVar31 = 0;
      puVar31[1] = 0;
    }
    if ((int)psVar13 != 0) goto code_r0x01345ff0;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1af8)) {
    return psVar13;
  }
  auVar43 = ___stack_chk_fail();
  pcVar21 = auVar43._8_8_;
  psVar5 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x1c60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x1c58) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x1c50) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x1c48) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x1c40) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x1c38) = pcVar33;
  *(undefined8 **)((long)register0x00000008 + -0x1c30) = puVar31;
  *(segment_command **)((long)register0x00000008 + -0x1c28) = psVar13;
  *(undefined8 **)((long)register0x00000008 + -0x1c20) = puVar16;
  *(segment_command **)((long)register0x00000008 + -0x1c18) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0x1c10) =
       (undefined1 *)((long)register0x00000008 + -0x1ac0);
  *(undefined **)((long)register0x00000008 + -0x1c08) = &DAT_01346068;
  *(undefined8 *)((long)register0x00000008 + -0x1c68) = *(undefined8 *)PTR_03a5d648;
  if ((segment_command *)pcVar21 != (segment_command *)0x0) {
    *(char *)&((segment_command *)pcVar21)->cmd = '\0';
  }
  if ((segment_command *)pcVar32 != (segment_command *)0x0) {
    ((segment_command *)pcVar32)->cmd = 0;
  }
  psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
  psVar13 = psVar6;
  pcVar33 = pcVar32;
  if (((int)psVar6 < 0) ||
     ((segment_command *)pcVar21 == (segment_command *)0x0 && (int)psVar6 != 0)) {
code_r0x01346158:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      unaff_x24 = (segment_command *)((long)register0x00000008 + -0x1d68);
      unaff_x25 = (segment_command *)&section_000000b8.reserved2;
      iVar2 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + -0x1d68),0x100,pcVar21);
      pcVar21 = ", ";
      iVar3 = func_0x0135ce6c((long)unaff_x24->segname + (long)iVar2 + -8,0x100 - iVar2,", ");
      unaff_x26 = (long)iVar2 + (long)iVar3;
      iVar2 = func_0x0135cc94((long)unaff_x24->segname + unaff_x26 + -8,0x100 - (int)unaff_x26,
                              psVar6);
      uVar1 = (int)unaff_x26 + iVar2;
      psVar6 = (segment_command *)(ulong)uVar1;
      iVar2 = func_0x0135ce6c((long)unaff_x24->segname + (long)(int)uVar1 + -8,0x100 - uVar1,", ");
      func_0x0135d05c((long)unaff_x24->segname + (long)(int)(uVar1 + iVar2) + -8,
                      0x100 - (uVar1 + iVar2),pcVar32);
      pcVar33 = "VCA::getPath";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x1d68);
      psVar13 = psVar5;
      func_0x013aa954(psVar15,0x10);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x1d68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1d60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1d58) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x1d60));
    if (((int)psVar15 == 0) &&
       ((psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1d68),
                                   *(undefined8 *)((long)register0x00000008 + -0x1d60)),
        (int)psVar15 == 0 &&
        (psVar15 = (segment_command *)
                   func_0x01279164(psVar5,(undefined1 *)((long)register0x00000008 + -0x1d80)),
        (int)psVar15 == 0)))) {
      *(long *)((long)register0x00000008 + -0x1d58) = *(long *)((long)register0x00000008 + -0x1d80);
      lVar26 = *(long *)(*(long *)((long)register0x00000008 + -0x1d80) + 0x10);
      uVar30 = *(undefined8 *)(lVar26 + 0x10);
      *(undefined8 *)((long)register0x00000008 + -0x1d78) = *(undefined8 *)(lVar26 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x1d80) = uVar30;
      psVar13 = (segment_command *)pcVar21;
      pcVar33 = (char *)psVar6;
      in_x4 = (segment_command *)pcVar32;
      psVar15 = (segment_command *)
                func_0x013145c8(*(undefined8 *)((long)register0x00000008 + -0x1d60),
                                (undefined1 *)((long)register0x00000008 + -0x1d80));
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1d68));
    if ((int)psVar15 != 0) goto code_r0x01346158;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1c68)) {
    return psVar15;
  }
  psVar7 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x1dc0) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x1db8) = extraout_d0;
  *(segment_command **)((long)register0x00000008 + -0x1db0) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x1da8) = psVar6;
  *(char **)((long)register0x00000008 + -0x1da0) = pcVar32;
  *(segment_command **)((long)register0x00000008 + -0x1d98) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x1d90) =
       (undefined1 *)((long)register0x00000008 + -0x1c10);
  *(undefined **)((long)register0x00000008 + -0x1d88) = &DAT_0134623c;
  *(undefined8 *)((long)register0x00000008 + -0x1dc8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x1ed0) = 0;
  psVar5 = (segment_command *)
           func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x1ed8));
  if ((int)psVar5 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x1ed8) + 0x24) >> 1 & 1) == 0) {
      psVar5 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar5 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1ed0));
      if ((int)psVar5 == 0) {
        psVar6 = (segment_command *)&MACH_HEADER.flags;
        psVar13 = (segment_command *)&MACH_HEADER.flags;
        psVar5 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x1ed8) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x1ec8));
        if ((int)psVar5 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x1ec8);
          *puVar20 = &UNK_03c7e830;
          *(undefined4 *)(puVar20 + 1) = 0x18;
          *(int *)((long)puVar20 + 0xc) = (int)psVar7;
          *(int *)(puVar20 + 2) = (int)extraout_d0_00;
          psVar5 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x1ed8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1ed0));
  if (((int)psVar5 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cd7c(extraout_d0_00,(undefined1 *)((long)register0x00000008 + -0x1ec8),0x100);
    pcVar33 = "VCA::setVolume";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x1ec8);
    psVar13 = psVar7;
    func_0x013aa954(psVar5,0x10);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1dc8)) {
    return psVar5;
  }
  auVar43 = ___stack_chk_fail();
  puVar27 = auVar43._8_8_;
  psVar8 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x1f30) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x1f28) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x1f20) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x1f18) = pcVar21;
  *(segment_command **)((long)register0x00000008 + -0x1f10) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x1f08) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x1f00) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0x1ef8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x1ef0) =
       (undefined1 *)((long)register0x00000008 + -0x1d90);
  *(undefined **)((long)register0x00000008 + -0x1ee8) = &DAT_01346370;
  *(undefined8 *)((long)register0x00000008 + -0x1f38) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 != (undefined4 *)0x0) {
    *puVar27 = 0;
  }
  if (psVar13 != (segment_command *)0x0) {
    psVar13->cmd = 0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x2038) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x2030) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x2028) = 0;
  psVar6 = psVar13;
  psVar15 = (segment_command *)
            func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x2030));
  if ((((int)psVar15 == 0) &&
      (psVar15 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2038),
                                 *(undefined8 *)((long)register0x00000008 + -0x2030)),
      (int)psVar15 == 0)) &&
     (psVar15 = (segment_command *)
                func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0x2040)),
     (int)psVar15 == 0)) {
    *(undefined8 *)((long)register0x00000008 + -0x2028) =
         *(undefined8 *)((long)register0x00000008 + -0x2040);
    psVar6 = psVar13;
    psVar15 = (segment_command *)
              func_0x0129ca90(*(undefined8 *)((long)register0x00000008 + -0x2040),puVar27);
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2038));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    pcVar21 = (char *)((long)register0x00000008 + -0x2038);
    unaff_x24 = (segment_command *)&section_000000b8.reserved2;
    iVar2 = func_0x0135d15c((undefined1 *)((long)register0x00000008 + -0x2038),0x100,puVar27);
    puVar27 = (undefined4 *)(long)iVar2;
    iVar2 = func_0x0135ce6c((long)puVar27 + (long)((long)((segment_command *)pcVar21)->segname + -8)
                            ,0x100 - iVar2,", ");
    func_0x0135d15c((long)((segment_command *)pcVar21)->segname + (long)puVar27 + (long)iVar2 + -8,
                    0x100 - (int)((long)puVar27 + (long)iVar2),psVar13);
    pcVar33 = "VCA::getVolume";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x2038);
    psVar6 = psVar8;
    func_0x013aa954(psVar15,0x10);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1f38)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  puVar17 = auVar43._8_8_;
  psVar5 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x2080) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x2078) = pcVar21;
  *(segment_command **)((long)register0x00000008 + -0x2070) = psVar15;
  *(undefined4 **)((long)register0x00000008 + -0x2068) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x2060) = psVar13;
  *(segment_command **)((long)register0x00000008 + -0x2058) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x2050) =
       (undefined1 *)((long)register0x00000008 + -0x1ef0);
  *(undefined **)((long)register0x00000008 + -0x2048) = &DAT_013464d4;
  *(undefined8 *)((long)register0x00000008 + -0x2088) = *(undefined8 *)PTR_03a5d648;
  if (puVar17 == (ulong *)0x0) {
    psVar13 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x013465b8:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x2188),0x100,puVar17);
      pcVar33 = "EventInstance::getDescription";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x2188);
      psVar6 = psVar5;
      func_0x013aa954(psVar13,0xd);
    }
  }
  else {
    *puVar17 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2190) = 0;
    psVar13 = (segment_command *)
              func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x2198));
    if ((int)psVar13 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x2198) + 0x24) >> 1 & 1) == 0) {
        psVar13 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar13 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2190));
        if ((int)psVar13 == 0) {
          pcVar21 = (char *)&MACH_HEADER.flags;
          psVar6 = (segment_command *)&MACH_HEADER.flags;
          psVar13 = (segment_command *)
                    func_0x012933e8(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x2198) + 0x98),
                                    (undefined1 *)((long)register0x00000008 + -0x2188));
          if ((int)psVar13 == 0) {
            psVar15 = *(segment_command **)((long)register0x00000008 + -0x2188);
            *(undefined **)psVar15 = &UNK_03c7da98;
            psVar15->segname[0] = '\x18';
            psVar15->segname[1] = '\0';
            psVar15->segname[2] = '\0';
            psVar15->segname[3] = '\0';
            *(int *)(psVar15->segname + 4) = auVar43._0_4_;
            psVar13 = (segment_command *)
                      func_0x01292948(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x2198) + 0x98),
                                      psVar15);
            if ((int)psVar13 == 0) {
              *puVar17 = (ulong)*(uint *)(psVar15->segname + 8);
            }
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2190));
    if ((int)psVar13 != 0) goto code_r0x013465b8;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2088)) {
    return psVar13;
  }
  auVar43 = ___stack_chk_fail();
  pdVar28 = auVar43._8_8_;
  psVar7 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x21f0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x21e8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x21e0) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x21d8) = pcVar21;
  *(segment_command **)((long)register0x00000008 + -0x21d0) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x21c8) = psVar13;
  *(ulong **)((long)register0x00000008 + -0x21c0) = puVar17;
  *(segment_command **)((long)register0x00000008 + -0x21b8) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x21b0) =
       (undefined1 *)((long)register0x00000008 + -0x2050);
  *(undefined **)((long)register0x00000008 + -0x21a8) = &DAT_01346630;
  *(undefined8 *)((long)register0x00000008 + -0x21f8) = *(undefined8 *)PTR_03a5d648;
  if (pdVar28 != (dword *)0x0) {
    *pdVar28 = 0;
  }
  if (psVar6 != (segment_command *)0x0) {
    psVar6->cmd = 0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x22f8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x22f0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x22e8) = 0;
  psVar13 = psVar6;
  psVar15 = (segment_command *)
            func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x22f0));
  if ((((int)psVar15 == 0) &&
      (psVar15 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x22f8),
                                 *(undefined8 *)((long)register0x00000008 + -0x22f0)),
      (int)psVar15 == 0)) &&
     (psVar15 = (segment_command *)
                func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x2300)),
     (int)psVar15 == 0)) {
    lVar26 = 0;
    if (*(long *)((long)register0x00000008 + -0x2300) != 0) {
      lVar26 = *(long *)((long)register0x00000008 + -0x2300) + -8;
    }
    *(long *)((long)register0x00000008 + -0x22e8) = lVar26;
    psVar13 = psVar6;
    psVar15 = (segment_command *)func_0x01295240(lVar26,pdVar28);
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x22f8));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    pcVar21 = (char *)((long)register0x00000008 + -0x22f8);
    unaff_x24 = (segment_command *)&section_000000b8.reserved2;
    iVar2 = func_0x0135d15c((undefined1 *)((long)register0x00000008 + -0x22f8),0x100,pdVar28);
    pdVar28 = (dword *)(long)iVar2;
    iVar2 = func_0x0135ce6c((long)pdVar28 + (long)((long)((segment_command *)pcVar21)->segname + -8)
                            ,0x100 - iVar2,", ");
    func_0x0135d15c((long)((segment_command *)pcVar21)->segname + (long)pdVar28 + (long)iVar2 + -8,
                    0x100 - (int)((long)pdVar28 + (long)iVar2),psVar6);
    pcVar33 = "EventInstance::getVolume";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x22f8);
    psVar13 = psVar7;
    func_0x013aa954(psVar15,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x21f8)) {
    return psVar15;
  }
  psVar5 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x2340) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x2338) = extraout_d0_00;
  *(segment_command **)((long)register0x00000008 + -0x2330) = psVar15;
  *(dword **)((long)register0x00000008 + -9000) = pdVar28;
  *(segment_command **)((long)register0x00000008 + -0x2320) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x2318) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x2310) =
       (undefined1 *)((long)register0x00000008 + -0x21b0);
  *(undefined **)((long)register0x00000008 + -0x2308) = &DAT_013467a0;
  *(undefined8 *)((long)register0x00000008 + -0x2348) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x2450) = 0;
  psVar6 = (segment_command *)
           func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x2458));
  if ((int)psVar6 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x2458) + 0x24) >> 1 & 1) == 0) {
      psVar6 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar6 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2450));
      if ((int)psVar6 == 0) {
        pdVar28 = &MACH_HEADER.flags;
        psVar13 = (segment_command *)&MACH_HEADER.flags;
        psVar6 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x2458) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x2448));
        if ((int)psVar6 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x2448);
          *puVar20 = &UNK_03c7ded0;
          *(undefined4 *)(puVar20 + 1) = 0x18;
          *(int *)((long)puVar20 + 0xc) = (int)psVar5;
          *(int *)(puVar20 + 2) = (int)extraout_d0_01;
          psVar6 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x2458) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2450));
  if (((int)psVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cd7c(extraout_d0_01,(undefined1 *)((long)register0x00000008 + -0x2448),0x100);
    pcVar33 = "EventInstance::setVolume";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x2448);
    psVar13 = psVar5;
    func_0x013aa954(psVar6,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2348)) {
    return psVar6;
  }
  auVar43 = ___stack_chk_fail();
  pdVar29 = auVar43._8_8_;
  psVar7 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x24b0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x24a8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x24a0) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x2498) = pcVar21;
  *(segment_command **)((long)register0x00000008 + -0x2490) = psVar15;
  *(dword **)((long)register0x00000008 + -0x2488) = pdVar28;
  *(segment_command **)((long)register0x00000008 + -0x2480) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x2478) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x2470) =
       (undefined1 *)((long)register0x00000008 + -0x2310);
  *(undefined **)((long)register0x00000008 + -0x2468) = &DAT_013468d4;
  *(undefined8 *)((long)register0x00000008 + -0x24b8) = *(undefined8 *)PTR_03a5d648;
  if (pdVar29 != (dword *)0x0) {
    *pdVar29 = 0;
  }
  if (psVar13 != (segment_command *)0x0) {
    psVar13->cmd = 0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x25b8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x25b0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x25a8) = 0;
  psVar6 = psVar13;
  psVar15 = (segment_command *)
            func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x25b0));
  if ((((int)psVar15 == 0) &&
      (psVar15 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x25b8),
                                 *(undefined8 *)((long)register0x00000008 + -0x25b0)),
      (int)psVar15 == 0)) &&
     (psVar15 = (segment_command *)
                func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x25c0)),
     (int)psVar15 == 0)) {
    lVar26 = 0;
    if (*(long *)((long)register0x00000008 + -0x25c0) != 0) {
      lVar26 = *(long *)((long)register0x00000008 + -0x25c0) + -8;
    }
    *(long *)((long)register0x00000008 + -0x25a8) = lVar26;
    psVar6 = psVar13;
    psVar15 = (segment_command *)func_0x0129528c(lVar26,pdVar29);
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x25b8));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    pcVar21 = (char *)((long)register0x00000008 + -0x25b8);
    unaff_x24 = (segment_command *)&section_000000b8.reserved2;
    iVar2 = func_0x0135d15c((undefined1 *)((long)register0x00000008 + -0x25b8),0x100,pdVar29);
    pdVar29 = (dword *)(long)iVar2;
    iVar2 = func_0x0135ce6c((long)pdVar29 + (long)((long)((segment_command *)pcVar21)->segname + -8)
                            ,0x100 - iVar2,", ");
    func_0x0135d15c((long)((segment_command *)pcVar21)->segname + (long)pdVar29 + (long)iVar2 + -8,
                    0x100 - (int)((long)pdVar29 + (long)iVar2),psVar13);
    pcVar33 = "EventInstance::getPitch";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x25b8);
    psVar6 = psVar7;
    func_0x013aa954(psVar15,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x24b8)) {
    return psVar15;
  }
  psVar5 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x2600) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x25f8) = extraout_d0_01;
  *(segment_command **)((long)register0x00000008 + -0x25f0) = psVar15;
  *(dword **)((long)register0x00000008 + -0x25e8) = pdVar29;
  *(segment_command **)((long)register0x00000008 + -0x25e0) = psVar13;
  *(segment_command **)((long)register0x00000008 + -0x25d8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x25d0) =
       (undefined1 *)((long)register0x00000008 + -0x2470);
  *(undefined **)((long)register0x00000008 + -0x25c8) = &DAT_01346a44;
  *(undefined8 *)((long)register0x00000008 + -0x2608) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -10000) = 0;
  psVar13 = (segment_command *)
            func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x2718));
  if ((int)psVar13 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x2718) + 0x24) >> 1 & 1) == 0) {
      psVar13 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar13 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -10000));
      if ((int)psVar13 == 0) {
        pdVar29 = &MACH_HEADER.flags;
        psVar6 = (segment_command *)&MACH_HEADER.flags;
        psVar13 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x2718) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x2708));
        if ((int)psVar13 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x2708);
          *puVar20 = &UNK_03c7df48;
          *(undefined4 *)(puVar20 + 1) = 0x18;
          *(int *)((long)puVar20 + 0xc) = (int)psVar5;
          *(int *)(puVar20 + 2) = (int)extraout_d0_02;
          psVar13 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x2718) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -10000));
  if (((int)psVar13 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cd7c(extraout_d0_02,(undefined1 *)((long)register0x00000008 + -0x2708),0x100);
    pcVar33 = "EventInstance::setPitch";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x2708);
    psVar6 = psVar5;
    func_0x013aa954(psVar13,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2608)) {
    return psVar13;
  }
  auVar43 = ___stack_chk_fail();
  psVar8 = auVar43._8_8_;
  psVar7 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x2760) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x2758) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x2750) = psVar15;
  *(dword **)((long)register0x00000008 + -0x2748) = pdVar29;
  *(segment_command **)((long)register0x00000008 + -0x2740) = psVar13;
  *(segment_command **)((long)register0x00000008 + -0x2738) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x2730) =
       (undefined1 *)((long)register0x00000008 + -0x25d0);
  *(undefined **)((long)register0x00000008 + -0x2728) = &DAT_01346b78;
  *(undefined8 *)((long)register0x00000008 + -0x2768) = *(undefined8 *)PTR_03a5d648;
  if (psVar8 == (segment_command *)0x0) {
    psVar13 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01346c54:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x2868),0x100,psVar8);
      pcVar33 = "EventInstance::get3DAttributes";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x2868);
      psVar6 = psVar7;
      func_0x013aa954(psVar13,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x2868) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2860) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2858) = 0;
    psVar13 = (segment_command *)
              func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x2860));
    psVar15 = psVar8;
    if ((((int)psVar13 == 0) &&
        (psVar13 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2868),
                                   *(undefined8 *)((long)register0x00000008 + -0x2860)),
        (int)psVar13 == 0)) &&
       (psVar13 = (segment_command *)
                  func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x2870)),
       (int)psVar13 == 0)) {
      lVar26 = 0;
      if (*(long *)((long)register0x00000008 + -0x2870) != 0) {
        lVar26 = *(long *)((long)register0x00000008 + -0x2870) + -8;
      }
      *(long *)((long)register0x00000008 + -0x2858) = lVar26;
      qVar35 = *(qword *)(lVar26 + 0x40);
      qVar34 = *(qword *)(lVar26 + 0x38);
      qVar36 = *(qword *)(lVar26 + 0x48);
      qVar40 = *(qword *)(lVar26 + 0x60);
      qVar38 = *(qword *)(lVar26 + 0x58);
      psVar8->vmaddr = *(qword *)(lVar26 + 0x50);
      *(qword *)((long)psVar8->segname + 8) = qVar36;
      psVar8->fileoff = qVar40;
      psVar8->vmsize = qVar38;
      *(qword *)psVar8->segname = qVar35;
      psVar8->cmd = (int)qVar34;
      psVar8->cmdsize = (int)(qVar34 >> 0x20);
      psVar15 = (segment_command *)0x0;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2868));
    if (psVar15 != (segment_command *)0x0) {
      psVar15->vmaddr = 0;
      *(qword *)((long)psVar15->segname + 8) = 0;
      psVar15->fileoff = 0;
      psVar15->vmsize = 0;
      *(qword *)psVar15->segname = 0;
      psVar15->cmd = 0;
      psVar15->cmdsize = 0;
    }
    if ((int)psVar13 != 0) goto code_r0x01346c54;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2768)) {
    return psVar13;
  }
  auVar43 = ___stack_chk_fail();
  puVar20 = auVar43._8_8_;
  psVar5 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x28b0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x28a8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x28a0) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x2898) = psVar13;
  *(segment_command **)((long)register0x00000008 + -0x2890) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x2888) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x2880) =
       (undefined1 *)((long)register0x00000008 + -0x2730);
  *(undefined **)((long)register0x00000008 + -0x2878) = &DAT_01346ccc;
  *(undefined8 *)((long)register0x00000008 + -0x28b8) = *(undefined8 *)PTR_03a5d648;
  if (puVar20 == (undefined8 *)0x0) {
    psVar13 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01346da4:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x29b8),0x100,puVar20);
      pcVar33 = "EventInstance::set3DAttributes";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x29b8);
      psVar6 = psVar5;
      func_0x013aa954(psVar13,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x29c0) = 0;
    psVar13 = (segment_command *)
              func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x29c8));
    if ((int)psVar13 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x29c8) + 0x24) >> 1 & 1) == 0) {
        psVar13 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar13 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x29c0));
        if ((int)psVar13 == 0) {
          psVar15 = (segment_command *)&segment_command_00000020.vmsize;
          psVar6 = (segment_command *)&segment_command_00000020.vmsize;
          psVar13 = (segment_command *)
                    func_0x012933e8(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x29c8) + 0x98),
                                    (undefined1 *)((long)register0x00000008 + -0x29b8));
          if ((int)psVar13 == 0) {
            puVar31 = *(undefined8 **)((long)register0x00000008 + -0x29b8);
            *puVar31 = &UNK_03c7dfc0;
            *(undefined4 *)(puVar31 + 1) = 0x40;
            *(int *)((long)puVar31 + 0xc) = auVar43._0_4_;
            uVar12 = puVar20[1];
            uVar30 = *puVar20;
            uVar37 = puVar20[2];
            uVar41 = puVar20[5];
            uVar39 = puVar20[4];
            puVar31[5] = puVar20[3];
            puVar31[4] = uVar37;
            puVar31[7] = uVar41;
            puVar31[6] = uVar39;
            puVar31[3] = uVar12;
            puVar31[2] = uVar30;
            psVar13 = (segment_command *)
                      func_0x01292948(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x29c8) + 0x98));
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x29c0));
    if ((int)psVar13 != 0) goto code_r0x01346da4;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x28b8)) {
    return psVar13;
  }
  auVar43 = ___stack_chk_fail();
  puVar27 = auVar43._8_8_;
  psVar7 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x2a00) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x29f8) = psVar13;
  *(undefined8 **)((long)register0x00000008 + -0x29f0) = puVar20;
  *(segment_command **)((long)register0x00000008 + -0x29e8) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x29e0) =
       (undefined1 *)((long)register0x00000008 + -0x2880);
  *(undefined **)((long)register0x00000008 + -0x29d8) = &DAT_01346e1c;
  *(undefined8 *)((long)register0x00000008 + -0x2a08) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 == (undefined4 *)0x0) {
    psVar13 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01346ec8:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d09c((undefined1 *)((long)register0x00000008 + -0x2b08),0x100,puVar27);
      pcVar33 = "EventInstance::getListenerMask";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x2b08);
      psVar6 = psVar7;
      func_0x013aa954(psVar13,0xd);
    }
  }
  else {
    *puVar27 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2b08) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2b00) = 0;
    *(undefined8 *)((long)register0x00000008 + -11000) = 0;
    psVar13 = (segment_command *)
              func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x2b00));
    if ((((int)psVar13 == 0) &&
        (psVar13 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2b08),
                                   *(undefined8 *)((long)register0x00000008 + -0x2b00)),
        (int)psVar13 == 0)) &&
       (psVar13 = (segment_command *)
                  func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x2b10)),
       (int)psVar13 == 0)) {
      lVar26 = 0;
      if (*(long *)((long)register0x00000008 + -0x2b10) != 0) {
        lVar26 = *(long *)((long)register0x00000008 + -0x2b10) + -8;
      }
      *(long *)((long)register0x00000008 + -11000) = lVar26;
      *puVar27 = *(undefined4 *)(lVar26 + 0x88);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2b08));
    if ((int)psVar13 != 0) goto code_r0x01346ec8;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2a08)) {
    return psVar13;
  }
  auVar43 = ___stack_chk_fail();
  psVar5 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x2b50) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x2b48) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x2b40) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x2b38) = psVar13;
  *(undefined4 **)((long)register0x00000008 + -0x2b30) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x2b28) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x2b20) =
       (undefined1 *)((long)register0x00000008 + -0x29e0);
  *(undefined **)((long)register0x00000008 + -0x2b18) = &DAT_01346f3c;
  *(undefined8 *)((long)register0x00000008 + -0x2b58) = *(undefined8 *)PTR_03a5d648;
  if (auVar43._8_4_ == 0) {
    psVar13 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01347008:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135cce0((undefined1 *)((long)register0x00000008 + -0x2c58),0x100,auVar43._8_8_);
      pcVar33 = "EventInstance::setListenerMask";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x2c58);
      psVar6 = psVar5;
      func_0x013aa954(psVar13,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x2c60) = 0;
    psVar13 = (segment_command *)
              func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x2c68));
    if ((int)psVar13 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x2c68) + 0x24) >> 1 & 1) == 0) {
        psVar13 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar13 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2c60));
        if ((int)psVar13 == 0) {
          psVar15 = (segment_command *)&MACH_HEADER.flags;
          psVar6 = (segment_command *)&MACH_HEADER.flags;
          psVar13 = (segment_command *)
                    func_0x012933e8(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x2c68) + 0x98),
                                    (undefined1 *)((long)register0x00000008 + -0x2c58));
          if ((int)psVar13 == 0) {
            puVar20 = *(undefined8 **)((long)register0x00000008 + -0x2c58);
            *puVar20 = &UNK_03c7e038;
            *(undefined4 *)(puVar20 + 1) = 0x18;
            *(int *)((long)puVar20 + 0xc) = auVar43._0_4_;
            *(int *)(puVar20 + 2) = auVar43._8_4_;
            psVar13 = (segment_command *)
                      func_0x01292948(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x2c68) + 0x98));
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2c60));
    if ((int)psVar13 != 0) goto code_r0x01347008;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2b58)) {
    return psVar13;
  }
  auVar44 = ___stack_chk_fail();
  pdVar28 = auVar44._8_8_;
  psVar7 = auVar44._0_8_;
  *(long *)((long)register0x00000008 + -0x2cc0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x2cb8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x2cb0) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x2ca8) = pcVar21;
  *(segment_command **)((long)register0x00000008 + -0x2ca0) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x2c98) = psVar13;
  *(long *)((long)register0x00000008 + -0x2c90) = auVar43._8_8_;
  *(segment_command **)((long)register0x00000008 + -0x2c88) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x2c80) =
       (undefined1 *)((long)register0x00000008 + -0x2b20);
  *(undefined **)((long)register0x00000008 + -0x2c78) = &DAT_01347080;
  *(undefined8 *)((long)register0x00000008 + -0x2cc8) = *(undefined8 *)PTR_03a5d648;
  psVar13 = psVar6;
  if ((psVar6 == (segment_command *)0x0) || (psVar6->cmd = 0, 5 < auVar44._8_4_)) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01347144:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      pcVar21 = (char *)((long)register0x00000008 + -0x2dc8);
      unaff_x24 = (segment_command *)&section_000000b8.reserved2;
      iVar2 = func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x2dc8),0x100,pdVar28);
      pdVar28 = (dword *)(long)iVar2;
      iVar2 = func_0x0135ce6c((long)pdVar28 +
                              (long)((long)((segment_command *)pcVar21)->segname + -8),0x100 - iVar2
                              ,", ");
      func_0x0135d15c((long)((segment_command *)pcVar21)->segname + (long)pdVar28 + (long)iVar2 + -8
                      ,0x100 - (int)((long)pdVar28 + (long)iVar2),psVar6);
      pcVar33 = "EventInstance::getProperty";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x2dc8);
      psVar13 = psVar7;
      func_0x013aa954(psVar15,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x2dc8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2dc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2db8) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x2dc0));
    if ((((int)psVar15 == 0) &&
        (psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2dc8),
                                   *(undefined8 *)((long)register0x00000008 + -0x2dc0)),
        (int)psVar15 == 0)) &&
       (psVar15 = (segment_command *)
                  func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x2dd0)),
       (int)psVar15 == 0)) {
      lVar26 = 0;
      if (*(long *)((long)register0x00000008 + -0x2dd0) != 0) {
        lVar26 = *(long *)((long)register0x00000008 + -0x2dd0) + -8;
      }
      *(long *)((long)register0x00000008 + -0x2db8) = lVar26;
      psVar6->cmd = *(dword *)(lVar26 + ((ulong)pdVar28 & 0xffffffff) * 4 + 0xa4);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2dc8));
    if ((int)psVar15 != 0) goto code_r0x01347144;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2cc8)) {
    return psVar15;
  }
  psVar5 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x2e20) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x2e18) = extraout_d0_02;
  *(segment_command **)((long)register0x00000008 + -0x2e10) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x2e08) = pcVar21;
  *(dword **)((long)register0x00000008 + -0x2e00) = pdVar28;
  *(segment_command **)((long)register0x00000008 + -0x2df8) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x2df0) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x2de8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x2de0) =
       (undefined1 *)((long)register0x00000008 + -0x2c80);
  *(undefined **)((long)register0x00000008 + -0x2dd8) = &DAT_013471f8;
  *(undefined8 *)((long)register0x00000008 + -0x2e28) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x2f30) = 0;
  psVar6 = (segment_command *)
           func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x2f38));
  if ((int)psVar6 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x2f38) + 0x24) >> 1 & 1) == 0) {
      psVar6 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar6 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2f30));
      if ((int)psVar6 == 0) {
        pdVar28 = &MACH_HEADER.flags;
        psVar13 = (segment_command *)&MACH_HEADER.flags;
        psVar6 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x2f38) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x2f28));
        if ((int)psVar6 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x2f28);
          *puVar20 = &UNK_03c7e0b0;
          *(undefined4 *)(puVar20 + 1) = 0x18;
          *(int *)((long)puVar20 + 0xc) = (int)psVar5;
          *(int *)(puVar20 + 2) = (int)extraout_x1;
          *(int *)((long)puVar20 + 0x14) = (int)extraout_d0_03;
          psVar6 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x2f38) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2f30));
  lVar26 = extraout_x1;
  if (((int)psVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    pdVar28 = (dword *)((long)register0x00000008 + -0x2f28);
    pcVar21 = (char *)&section_000000b8.reserved2;
    iVar2 = func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x2f28),0x100,extraout_x1);
    lVar26 = (long)iVar2;
    iVar2 = func_0x0135ce6c((long)pdVar28 + lVar26,0x100 - iVar2,", ");
    func_0x0135cd7c(extraout_d0_03,(long)pdVar28 + lVar26 + iVar2,0x100 - (int)(lVar26 + iVar2));
    pcVar33 = "EventInstance::setProperty";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x2f28);
    psVar13 = psVar5;
    func_0x013aa954(psVar6,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2e28)) {
    return psVar6;
  }
  auVar43 = ___stack_chk_fail();
  pdVar29 = auVar43._8_8_;
  psVar15 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x2f90) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x2f88) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x2f80) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x2f78) = pcVar21;
  *(dword **)((long)register0x00000008 + -0x2f70) = pdVar28;
  *(segment_command **)((long)register0x00000008 + -0x2f68) = psVar6;
  *(long *)((long)register0x00000008 + -0x2f60) = lVar26;
  *(segment_command **)((long)register0x00000008 + -0x2f58) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x2f50) =
       (undefined1 *)((long)register0x00000008 + -0x2de0);
  *(undefined **)((long)register0x00000008 + -0x2f48) = &DAT_01347374;
  *(undefined8 *)((long)register0x00000008 + -0x2f98) = *(undefined8 *)PTR_03a5d648;
  psVar6 = psVar13;
  if ((psVar13 == (segment_command *)0x0) || (psVar13->cmd = 0, 3 < auVar43._8_4_)) {
    psVar5 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01347438:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      pcVar21 = (char *)((long)register0x00000008 + -0x3098);
      unaff_x24 = (segment_command *)&section_000000b8.reserved2;
      iVar2 = func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x3098),0x100,pdVar29);
      pdVar29 = (dword *)(long)iVar2;
      iVar2 = func_0x0135ce6c((long)pdVar29 +
                              (long)((long)((segment_command *)pcVar21)->segname + -8),0x100 - iVar2
                              ,", ");
      func_0x0135d15c((long)((segment_command *)pcVar21)->segname + (long)pdVar29 + (long)iVar2 + -8
                      ,0x100 - (int)((long)pdVar29 + (long)iVar2),psVar13);
      pcVar33 = "EventInstance::getReverbLevel";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x3098);
      psVar6 = psVar15;
      func_0x013aa954(psVar5,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x3098) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3090) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3088) = 0;
    psVar5 = (segment_command *)
             func_0x01279100(psVar15,(undefined1 *)((long)register0x00000008 + -0x3090));
    if ((((int)psVar5 == 0) &&
        (psVar5 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3098),
                                  *(undefined8 *)((long)register0x00000008 + -0x3090)),
        (int)psVar5 == 0)) &&
       (psVar5 = (segment_command *)
                 func_0x01279164(psVar15,(undefined1 *)((long)register0x00000008 + -0x30a0)),
       (int)psVar5 == 0)) {
      lVar26 = 0;
      if (*(long *)((long)register0x00000008 + -0x30a0) != 0) {
        lVar26 = *(long *)((long)register0x00000008 + -0x30a0) + -8;
      }
      *(long *)((long)register0x00000008 + -0x3088) = lVar26;
      psVar13->cmd = *(dword *)(lVar26 + ((ulong)pdVar29 & 0xffffffff) * 4 + 0x94);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3098));
    if ((int)psVar5 != 0) goto code_r0x01347438;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2f98)) {
    return psVar5;
  }
  psVar7 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x30f0) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x30e8) = extraout_d0_03;
  *(segment_command **)((long)register0x00000008 + -0x30e0) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x30d8) = pcVar21;
  *(dword **)((long)register0x00000008 + -0x30d0) = pdVar29;
  *(segment_command **)((long)register0x00000008 + -0x30c8) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0x30c0) = psVar13;
  *(segment_command **)((long)register0x00000008 + -0x30b8) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0x30b0) =
       (undefined1 *)((long)register0x00000008 + -0x2f50);
  *(undefined **)((long)register0x00000008 + -0x30a8) = &DAT_013474ec;
  *(undefined8 *)((long)register0x00000008 + -0x30f8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x3200) = 0;
  psVar13 = (segment_command *)
            func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x3208));
  if ((int)psVar13 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x3208) + 0x24) >> 1 & 1) == 0) {
      psVar13 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar13 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3200));
      if ((int)psVar13 == 0) {
        pdVar29 = &MACH_HEADER.flags;
        psVar6 = (segment_command *)&MACH_HEADER.flags;
        psVar13 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x3208) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x31f8));
        if ((int)psVar13 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x31f8);
          *puVar20 = &UNK_03c7e128;
          *(undefined4 *)(puVar20 + 1) = 0x18;
          *(int *)((long)puVar20 + 0xc) = (int)psVar7;
          *(int *)(puVar20 + 2) = (int)extraout_x1_00;
          *(int *)((long)puVar20 + 0x14) = (int)extraout_d0_04;
          psVar13 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x3208) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3200));
  lVar26 = extraout_x1_00;
  if (((int)psVar13 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    pdVar29 = (dword *)((long)register0x00000008 + -0x31f8);
    pcVar21 = (char *)&section_000000b8.reserved2;
    iVar2 = func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x31f8),0x100,extraout_x1_00)
    ;
    lVar26 = (long)iVar2;
    iVar2 = func_0x0135ce6c((long)pdVar29 + lVar26,0x100 - iVar2,", ");
    func_0x0135cd7c(extraout_d0_04,(long)pdVar29 + lVar26 + iVar2,0x100 - (int)(lVar26 + iVar2));
    pcVar33 = "EventInstance::setReverbLevel";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x31f8);
    psVar6 = psVar7;
    func_0x013aa954(psVar13,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x30f8)) {
    return psVar13;
  }
  auVar43 = ___stack_chk_fail();
  puVar25 = auVar43._8_8_;
  psVar15 = auVar43._0_8_;
  *(dword **)((long)register0x00000008 + -0x3240) = pdVar29;
  *(segment_command **)((long)register0x00000008 + -0x3238) = psVar13;
  *(long *)((long)register0x00000008 + -0x3230) = lVar26;
  *(segment_command **)((long)register0x00000008 + -0x3228) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x3220) =
       (undefined1 *)((long)register0x00000008 + -0x30b0);
  *(undefined **)((long)register0x00000008 + -0x3218) = &DAT_01347668;
  *(undefined8 *)((long)register0x00000008 + -0x3248) = *(undefined8 *)PTR_03a5d648;
  if (puVar25 == (undefined1 *)0x0) {
    psVar13 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01347714:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d1a4((undefined1 *)((long)register0x00000008 + -0x3348),0x100,puVar25);
      pcVar33 = "EventInstance::getPaused";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x3348);
      psVar6 = psVar15;
      func_0x013aa954(psVar13,0xd);
    }
  }
  else {
    *puVar25 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3348) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3340) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3338) = 0;
    psVar13 = (segment_command *)
              func_0x01279100(psVar15,(undefined1 *)((long)register0x00000008 + -0x3340));
    if ((((int)psVar13 == 0) &&
        (psVar13 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3348),
                                   *(undefined8 *)((long)register0x00000008 + -0x3340)),
        (int)psVar13 == 0)) &&
       (psVar13 = (segment_command *)
                  func_0x01279164(psVar15,(undefined1 *)((long)register0x00000008 + -0x3350)),
       (int)psVar13 == 0)) {
      lVar26 = 0;
      if (*(long *)((long)register0x00000008 + -0x3350) != 0) {
        lVar26 = *(long *)((long)register0x00000008 + -0x3350) + -8;
      }
      *(long *)((long)register0x00000008 + -0x3338) = lVar26;
      *puVar25 = *(undefined1 *)(lVar26 + 0xbc);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3348));
    if ((int)psVar13 != 0) goto code_r0x01347714;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3248)) {
    return psVar13;
  }
  auVar43 = ___stack_chk_fail();
  psVar5 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x3390) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x3388) = unaff_x27;
  *(dword **)((long)register0x00000008 + -0x3380) = pdVar29;
  *(segment_command **)((long)register0x00000008 + -0x3378) = psVar13;
  *(undefined1 **)((long)register0x00000008 + -0x3370) = puVar25;
  *(segment_command **)((long)register0x00000008 + -0x3368) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0x3360) =
       (undefined1 *)((long)register0x00000008 + -0x3220);
  *(undefined **)((long)register0x00000008 + -0x3358) = &DAT_01347788;
  *(undefined8 *)((long)register0x00000008 + -0x3398) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x34a0) = 0;
  psVar13 = (segment_command *)
            func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x34a8));
  if ((int)psVar13 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x34a8) + 0x24) >> 1 & 1) == 0) {
      psVar13 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar13 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x34a0));
      if ((int)psVar13 == 0) {
        pdVar29 = &MACH_HEADER.flags;
        psVar6 = (segment_command *)&MACH_HEADER.flags;
        psVar13 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x34a8) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x3498));
        if ((int)psVar13 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x3498);
          *puVar20 = &UNK_03c7e1a0;
          *(undefined4 *)(puVar20 + 1) = 0x18;
          *(int *)((long)puVar20 + 0xc) = auVar43._0_4_;
          *(char *)(puVar20 + 2) = auVar43[8];
          psVar13 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x34a8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x34a0));
  if (((int)psVar13 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cddc((undefined1 *)((long)register0x00000008 + -0x3498),0x100,auVar43._8_8_);
    pcVar33 = "EventInstance::setPaused";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x3498);
    psVar6 = psVar5;
    func_0x013aa954(psVar13,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3398)) {
    return psVar13;
  }
  auVar44 = ___stack_chk_fail();
  pcVar32 = auVar44._8_8_;
  psVar15 = auVar44._0_8_;
  *(long *)((long)register0x00000008 + -0x3510) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x3508) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x3500) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x34f8) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x34f0) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x34e8) = pcVar21;
  *(dword **)((long)register0x00000008 + -0x34e0) = pdVar29;
  *(segment_command **)((long)register0x00000008 + -0x34d8) = psVar13;
  *(long *)((long)register0x00000008 + -0x34d0) = auVar43._8_8_;
  *(segment_command **)((long)register0x00000008 + -0x34c8) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x34c0) =
       (undefined1 *)((long)register0x00000008 + -0x3360);
  *(undefined **)((long)register0x00000008 + -0x34b8) = &DAT_013478bc;
  *(undefined8 *)((long)register0x00000008 + -0x3518) = *(undefined8 *)PTR_03a5d648;
  if (psVar6 != (segment_command *)0x0) {
    psVar6->cmd = 0;
  }
  if ((segment_command *)pcVar33 != (segment_command *)0x0) {
    ((segment_command *)pcVar33)->cmd = 0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x3618) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x3610) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x3608) = 0;
  psVar13 = psVar6;
  pcVar21 = pcVar33;
  psVar5 = (segment_command *)
           func_0x01279100(psVar15,(undefined1 *)((long)register0x00000008 + -0x3610));
  if ((((int)psVar5 == 0) &&
      (psVar5 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3618),
                                *(undefined8 *)((long)register0x00000008 + -0x3610)),
      (int)psVar5 == 0)) &&
     (psVar5 = (segment_command *)
               func_0x01279164(psVar15,(undefined1 *)((long)register0x00000008 + -0x3620)),
     (int)psVar5 == 0)) {
    lVar26 = 0;
    if (*(long *)((long)register0x00000008 + -0x3620) != 0) {
      lVar26 = *(long *)((long)register0x00000008 + -0x3620) + -8;
    }
    *(long *)((long)register0x00000008 + -0x3608) = lVar26;
    lVar26 = *(long *)(lVar26 + 0x18);
    if (lVar26 == 0) {
      psVar5 = (segment_command *)((long)&MACH_HEADER.reserved + 2);
    }
    else if ((int)*(uint *)(lVar26 + 0x98) < 1) {
code_r0x01347ac0:
      psVar5 = (segment_command *)((long)&segment_command_00000020.fileoff + 2);
    }
    else {
      uVar11 = 0;
      piVar24 = (int *)(*(long *)(lVar26 + 0x90) + 4);
      psVar5 = (segment_command *)((long)&segment_command_00000020.fileoff + 2);
      do {
        if (piVar24[-1] == auVar44._8_4_ && *piVar24 == auVar44._12_4_) {
          if ((int)uVar11 < 0) goto code_r0x01347ac0;
          psVar13 = psVar6;
          pcVar21 = pcVar33;
          psVar5 = (segment_command *)func_0x012951d8();
          break;
        }
        uVar11 = uVar11 + 1;
        piVar24 = piVar24 + 2;
      } while (*(uint *)(lVar26 + 0x98) != uVar11);
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3618));
  if (((int)psVar5 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(char **)((long)register0x00000008 + -0x3620) = pcVar32;
    unaff_x24 = (segment_command *)((long)register0x00000008 + -0x3618);
    unaff_x25 = (segment_command *)&section_000000b8.reserved2;
    iVar2 = func_0x0127980c((undefined1 *)((long)register0x00000008 + -0x3618),0x100,
                            (undefined1 *)((long)register0x00000008 + -0x3620));
    pcVar32 = ", ";
    iVar3 = func_0x0135ce6c((long)unaff_x24->segname + (long)iVar2 + -8,0x100 - iVar2,", ");
    unaff_x26 = (long)iVar2 + (long)iVar3;
    iVar2 = func_0x0135d15c((long)unaff_x24->segname + unaff_x26 + -8,0x100 - (int)unaff_x26,psVar6)
    ;
    uVar1 = (int)unaff_x26 + iVar2;
    psVar6 = (segment_command *)(ulong)uVar1;
    iVar2 = func_0x0135ce6c((long)unaff_x24->segname + (long)(int)uVar1 + -8,0x100 - uVar1,", ");
    func_0x0135d15c((long)unaff_x24->segname + (long)(int)(uVar1 + iVar2) + -8,
                    0x100 - (uVar1 + iVar2),pcVar33);
    pcVar21 = "EventInstance::getParameterByID";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x3618);
    psVar13 = psVar15;
    func_0x013aa954(psVar5,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3518)) {
    return psVar5;
  }
  psVar7 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x3670) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x3668) = extraout_d0_04;
  *(segment_command **)((long)register0x00000008 + -0x3660) = unaff_x24;
  *(segment_command **)((long)register0x00000008 + -0x3658) = psVar5;
  *(char **)((long)register0x00000008 + -0x3650) = pcVar32;
  *(segment_command **)((long)register0x00000008 + -0x3648) = psVar6;
  *(char **)((long)register0x00000008 + -0x3640) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x3638) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0x3630) =
       (undefined1 *)((long)register0x00000008 + -0x34c0);
  *(undefined **)((long)register0x00000008 + -0x3628) = &DAT_01347acc;
  *(undefined8 *)((long)register0x00000008 + -0x3678) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x3780) = 0;
  psVar6 = psVar13;
  psVar15 = (segment_command *)
            func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x3788));
  if ((int)psVar15 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x3788) + 0x24) >> 1 & 1) == 0) {
      psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar15 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3780));
      if ((int)psVar15 == 0) {
        psVar5 = &segment_command_00000020;
        psVar6 = &segment_command_00000020;
        psVar15 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x3788) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x3778));
        if ((int)psVar15 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x3778);
          *puVar20 = &UNK_03c7dcf0;
          *(undefined4 *)(puVar20 + 1) = 0x20;
          *(int *)((long)puVar20 + 0xc) = (int)psVar7;
          puVar20[2] = extraout_x1_01;
          *(int *)(puVar20 + 3) = (int)extraout_d0_05;
          *(char *)((long)puVar20 + 0x1c) = (char)psVar13;
          psVar15 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x3788) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3780));
  puVar25 = extraout_x1_01;
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 **)((long)register0x00000008 + -0x3780) = extraout_x1_01;
    puVar25 = (undefined1 *)((long)register0x00000008 + -0x3778);
    psVar13 = (segment_command *)&section_000000b8.reserved2;
    iVar2 = func_0x0127980c((undefined1 *)((long)register0x00000008 + -0x3778),0x100,
                            (undefined1 *)((long)register0x00000008 + -0x3780));
    psVar5 = (segment_command *)(long)iVar2;
    iVar2 = func_0x0135ce6c(puVar25 + (long)psVar5,0x100 - iVar2,", ");
    func_0x0135cd7c(extraout_d0_05,puVar25 + (long)(psVar5->segname + (long)iVar2 + -8),
                    0x100 - (int)(psVar5->segname + (long)iVar2 + -8));
    pcVar21 = "EventInstance::setParameterByID";
    in_x4 = (segment_command *)((long)register0x00000008 + -0x3778);
    psVar6 = psVar7;
    func_0x013aa954(psVar15,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3678)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  pcVar33 = auVar43._8_8_;
  psVar9 = auVar43._0_8_;
  psVar8 = (segment_command *)((long)register0x00000008 + -0x3900);
  *(long *)((long)register0x00000008 + -0x37f0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x37e8) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x37e0) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x37d8) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x37d0) = unaff_x24;
  *(segment_command **)((long)register0x00000008 + -0x37c8) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0x37c0) = psVar13;
  *(segment_command **)((long)register0x00000008 + -0x37b8) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0x37b0) = puVar25;
  *(segment_command **)((long)register0x00000008 + -0x37a8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x37a0) =
       (undefined1 *)((long)register0x00000008 + -0x3630);
  *(undefined **)((long)register0x00000008 + -0x3798) = &DAT_01347c54;
  *(undefined8 *)((long)register0x00000008 + -0x37f8) = *(undefined8 *)PTR_03a5d648;
  if (psVar6 != (segment_command *)0x0) {
    psVar6->cmd = 0;
  }
  if ((segment_command *)pcVar21 != (segment_command *)0x0) {
    ((segment_command *)pcVar21)->cmd = 0;
  }
  psVar13 = psVar6;
  pcVar32 = pcVar21;
  if ((segment_command *)pcVar33 == (segment_command *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01347d38:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      unaff_x24 = (segment_command *)((long)register0x00000008 + -0x38f8);
      unaff_x25 = (segment_command *)&section_000000b8.reserved2;
      iVar2 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + -0x38f8),0x100,pcVar33);
      pcVar33 = ", ";
      iVar3 = func_0x0135ce6c((long)unaff_x24->segname + (long)iVar2 + -8,0x100 - iVar2,", ");
      unaff_x26 = (long)iVar2 + (long)iVar3;
      iVar2 = func_0x0135d15c((long)unaff_x24->segname + unaff_x26 + -8,0x100 - (int)unaff_x26,
                              psVar6);
      uVar1 = (int)unaff_x26 + iVar2;
      psVar6 = (segment_command *)(ulong)uVar1;
      iVar2 = func_0x0135ce6c((long)unaff_x24->segname + (long)(int)uVar1 + -8,0x100 - uVar1,", ");
      func_0x0135d15c((long)unaff_x24->segname + (long)(int)(uVar1 + iVar2) + -8,
                      0x100 - (uVar1 + iVar2),pcVar21);
      pcVar32 = "EventInstance::getParameterByName";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x38f8);
      psVar13 = psVar9;
      func_0x013aa954(psVar15,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x38f8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38f0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38e8) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x38f0));
    if ((((int)psVar15 == 0) &&
        (psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x38f8),
                                   *(undefined8 *)((long)register0x00000008 + -0x38f0)),
        (int)psVar15 == 0)) &&
       (psVar15 = (segment_command *)
                  func_0x01279164(psVar9,(undefined1 *)((long)register0x00000008 + -0x3900)),
       (int)psVar15 == 0)) {
      lVar26 = 0;
      if (*(long *)((long)register0x00000008 + -0x3900) != 0) {
        lVar26 = *(long *)((long)register0x00000008 + -0x3900) + -8;
      }
      *(long *)((long)register0x00000008 + -0x38e8) = lVar26;
      *(undefined4 *)((long)register0x00000008 + -0x3900) = 0;
      psVar13 = (segment_command *)pcVar33;
      psVar15 = (segment_command *)
                func_0x0133d158(*(undefined8 *)((long)register0x00000008 + -0x38f0));
      pcVar32 = (char *)psVar8;
      if ((int)psVar15 == 0) {
        psVar13 = psVar6;
        pcVar32 = pcVar21;
        psVar15 = (segment_command *)
                  func_0x012951d8(*(undefined8 *)((long)register0x00000008 + -0x38e8),
                                  *(undefined4 *)((long)register0x00000008 + -0x3900));
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x38f8));
    if ((int)psVar15 != 0) goto code_r0x01347d38;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x37f8)) {
    return psVar15;
  }
  psVar5 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x3960) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x3958) = extraout_d0_05;
  *(long *)((long)register0x00000008 + -0x3950) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x3948) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x3940) = unaff_x24;
  *(segment_command **)((long)register0x00000008 + -0x3938) = psVar15;
  *(char **)((long)register0x00000008 + -0x3930) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x3928) = psVar6;
  *(char **)((long)register0x00000008 + -0x3920) = pcVar21;
  *(segment_command **)((long)register0x00000008 + -0x3918) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x3910) =
       (undefined1 *)((long)register0x00000008 + -0x37a0);
  *(undefined **)((long)register0x00000008 + -0x3908) = &DAT_01347e34;
  *(undefined8 *)((long)register0x00000008 + -0x3968) = *(undefined8 *)PTR_03a5d648;
  psVar6 = psVar13;
  lVar26 = extraout_x1_02;
  if (extraout_x1_02 == 0) {
code_r0x01347eb8:
    psVar8 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
    psVar13 = (segment_command *)pcVar33;
    psVar7 = psVar15;
code_r0x01347f4c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      psVar13 = (segment_command *)((long)register0x00000008 + -0x3a68);
      psVar7 = (segment_command *)&section_000000b8.reserved2;
      iVar2 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + -0x3a68),0x100,
                              extraout_x1_02);
      lVar26 = (long)iVar2;
      iVar2 = func_0x0135ce6c((long)psVar13->segname + lVar26 + -8,0x100 - iVar2,", ");
      func_0x0135cd7c(extraout_d0_06,(long)psVar13->segname + lVar26 + iVar2 + -8,
                      0x100 - (int)(lVar26 + iVar2));
      pcVar32 = "EventInstance::setParameterByName";
      in_x4 = (segment_command *)((long)register0x00000008 + -0x3a68);
      psVar6 = psVar5;
      func_0x013aa954(psVar8,0xd);
    }
  }
  else {
    psVar7 = (segment_command *)func_0x013eddc4(extraout_x1_02);
    iVar2 = (int)psVar7;
    pcVar33 = (char *)psVar13;
    if (0x7f < iVar2) goto code_r0x01347eb8;
    *(undefined8 *)((long)register0x00000008 + -0x3a70) = 0;
    psVar8 = (segment_command *)
             func_0x01279100(psVar5,(undefined1 *)((long)register0x00000008 + -0x3a78));
    if ((int)psVar8 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x3a78) + 0x24) >> 1 & 1) == 0) {
        psVar8 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar8 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3a70));
        if ((int)psVar8 == 0) {
          unaff_x24 = (segment_command *)&section_00000068.reloff;
          psVar6 = (segment_command *)&section_00000068.reloff;
          psVar8 = (segment_command *)
                   func_0x012933e8(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x3a78) + 0x98),
                                   (undefined1 *)((long)register0x00000008 + -0x3a68));
          if ((int)psVar8 == 0) {
            puVar20 = *(undefined8 **)((long)register0x00000008 + -0x3a68);
            *puVar20 = &UNK_03c7de58;
            *(undefined4 *)(puVar20 + 1) = 0xa0;
            *(int *)((long)puVar20 + 0xc) = (int)psVar5;
            psVar6 = (segment_command *)(long)(iVar2 + 1);
            _memcpy(puVar20 + 4,extraout_x1_02);
            *(uint *)(puVar20 + 1) = iVar2 + 0x24U & 0xfffffffc;
            *(int *)(puVar20 + 2) = (int)extraout_d0_06;
            *(char *)((long)puVar20 + 0x14) = (char)psVar13;
            psVar8 = (segment_command *)
                     func_0x01292948(*(undefined8 *)
                                      (*(long *)((long)register0x00000008 + -0x3a78) + 0x98),puVar20
                                    );
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3a70));
    if ((int)psVar8 != 0) goto code_r0x01347f4c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3968)) {
    return psVar8;
  }
  auVar43 = ___stack_chk_fail();
  pcVar33 = auVar43._8_8_;
  psVar9 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x3ae0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x3ad8) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x3ad0) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x3ac8) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x3ac0) = unaff_x24;
  *(segment_command **)((long)register0x00000008 + -0x3ab8) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x3ab0) = psVar13;
  *(segment_command **)((long)register0x00000008 + -0x3aa8) = psVar8;
  *(long *)((long)register0x00000008 + -0x3aa0) = lVar26;
  *(segment_command **)((long)register0x00000008 + -15000) = psVar5;
  *(undefined1 **)((long)register0x00000008 + -0x3a90) =
       (undefined1 *)((long)register0x00000008 + -0x3910);
  *(undefined **)((long)register0x00000008 + -0x3a88) = &DAT_01348004;
  *(undefined8 *)((long)register0x00000008 + -0x3ae8) = *(undefined8 *)PTR_03a5d648;
  psVar15 = psVar6;
  pcVar21 = pcVar32;
  psVar13 = in_x4;
  if ((int)pcVar32 < 0x21) {
    *(undefined8 *)((long)register0x00000008 + -0x3bf0) = 0;
    psVar5 = (segment_command *)
             func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x3bf8));
    psVar7 = unaff_x25;
    if ((int)psVar5 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x3bf8) + 0x24) >> 1 & 1) == 0) {
        psVar5 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar5 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3bf0));
        if ((int)psVar5 == 0) {
          psVar7 = (segment_command *)func_0x0127d8ec(pcVar32);
          if ((int)psVar7 < 0x300) {
            psVar15 = psVar7;
            psVar5 = (segment_command *)
                     func_0x012933e8(*(undefined8 *)
                                      (*(long *)((long)register0x00000008 + -0x3bf8) + 0x98),
                                     (undefined1 *)((long)register0x00000008 + -0x3be8));
            if ((int)psVar5 == 0) {
              puVar20 = *(undefined8 **)((long)register0x00000008 + -0x3be8);
              *puVar20 = &UNK_03c7dde0;
              *(int *)(puVar20 + 1) = (int)psVar7;
              *(int *)((long)puVar20 + 0xc) = auVar43._0_4_;
              *(int *)(puVar20 + 2) = (int)pcVar32;
              uVar30 = func_0x0127d9fc(puVar20);
              _memcpy(uVar30,pcVar33,
                      -((ulong)pcVar32 >> 0x1f & 1) & 0xfffffff800000000 |
                      ((ulong)pcVar32 & 0xffffffff) << 3);
              uVar30 = func_0x0127da04(puVar20);
              psVar15 = (segment_command *)
                        (-((ulong)pcVar32 >> 0x1f & 1) & 0xfffffffc00000000 |
                        ((ulong)pcVar32 & 0xffffffff) << 2);
              _memcpy(uVar30,psVar6);
              *(char *)((long)puVar20 + 0x14) = (char)in_x4;
              psVar5 = (segment_command *)
                       func_0x01292948(*(undefined8 *)
                                        (*(long *)((long)register0x00000008 + -0x3bf8) + 0x98),
                                       puVar20);
            }
          }
          else {
            psVar5 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
            psVar7 = unaff_x25;
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3bf0));
    unaff_x25 = psVar7;
    if ((int)psVar5 != 0) goto code_r0x01348130;
  }
  else {
    psVar5 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
    in_x4 = unaff_x24;
code_r0x01348130:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      in_x4 = (segment_command *)((long)register0x00000008 + -0x3be8);
      unaff_x25 = (segment_command *)&section_000000b8.reserved2;
      iVar2 = func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x3be8),0x100,pcVar33);
      pcVar33 = ", ";
      iVar3 = func_0x0135ce6c((long)in_x4->segname + (long)iVar2 + -8,0x100 - iVar2,", ");
      unaff_x26 = (long)iVar2 + (long)iVar3;
      iVar2 = func_0x0135d15c((long)in_x4->segname + unaff_x26 + -8,0x100 - (int)unaff_x26,psVar6);
      uVar1 = (int)unaff_x26 + iVar2;
      psVar6 = (segment_command *)(ulong)uVar1;
      iVar2 = func_0x0135ce6c((long)in_x4->segname + (long)(int)uVar1 + -8,0x100 - uVar1,", ");
      func_0x0135cc94((long)in_x4->segname + (long)(int)(uVar1 + iVar2) + -8,0x100 - (uVar1 + iVar2)
                      ,pcVar32);
      pcVar21 = "EventInstance::setParametersByIDs";
      psVar13 = (segment_command *)((long)register0x00000008 + -0x3be8);
      psVar15 = psVar9;
      func_0x013aa954(psVar5,0xd);
    }
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3ae8)) {
    return psVar5;
  }
  psVar7 = (segment_command *)___stack_chk_fail();
  *(char **)((long)register0x00000008 + -0x3c30) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x3c28) = psVar6;
  *(char **)((long)register0x00000008 + -0x3c20) = pcVar32;
  *(segment_command **)((long)register0x00000008 + -0x3c18) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x3c10) =
       (undefined1 *)((long)register0x00000008 + -0x3a90);
  *(undefined **)((long)register0x00000008 + -0x3c08) = &DAT_01348214;
  *(undefined8 *)((long)register0x00000008 + -0x3c38) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x3d40) = 0;
  psVar8 = (segment_command *)
           func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x3d48));
  if ((int)psVar8 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x3d48) + 0x24) >> 1 & 1) == 0) {
      psVar8 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar8 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3d40));
      if ((int)psVar8 == 0) {
        psVar6 = (segment_command *)&MACH_HEADER.ncmds;
        psVar15 = (segment_command *)&MACH_HEADER.ncmds;
        psVar8 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x3d48) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x3d38));
        if ((int)psVar8 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x3d38);
          *puVar20 = &UNK_03c7e3f8;
          *(undefined4 *)(puVar20 + 1) = 0x10;
          *(int *)((long)puVar20 + 0xc) = (int)psVar7;
          psVar8 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x3d48) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3d40));
  if (((int)psVar8 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -0x3d38) = 0;
    pcVar21 = "EventInstance::triggerCue";
    psVar13 = (segment_command *)((long)register0x00000008 + -0x3d38);
    psVar15 = psVar7;
    func_0x013aa954(psVar8,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3c38)) {
    return psVar8;
  }
  auVar43 = ___stack_chk_fail();
  lVar26 = auVar43._8_8_;
  psVar9 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x3da0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x3d98) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x3d90) = in_x4;
  *(segment_command **)((long)register0x00000008 + -0x3d88) = psVar5;
  *(char **)((long)register0x00000008 + -0x3d80) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x3d78) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x3d70) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x3d68) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x3d60) =
       (undefined1 *)((long)register0x00000008 + -0x3c10);
  *(undefined **)((long)register0x00000008 + -0x3d58) = &DAT_0134832c;
  *(undefined8 *)((long)register0x00000008 + -0x3da8) = *(undefined8 *)PTR_03a5d648;
  psVar7 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
  psVar6 = psVar15;
  if ((lVar26 == 0) || (psVar15 == (segment_command *)0x0)) {
code_r0x013483ec:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      psVar5 = (segment_command *)((long)register0x00000008 + -0x3ea8);
      in_x4 = (segment_command *)&section_000000b8.reserved2;
      iVar2 = func_0x0135d09c((undefined1 *)((long)register0x00000008 + -0x3ea8),0x100,lVar26);
      lVar26 = (long)iVar2;
      iVar2 = func_0x0135ce6c(psVar5->segname + lVar26 + -8,0x100 - iVar2,", ");
      func_0x0135d09c(psVar5->segname + lVar26 + iVar2 + -8,0x100 - (int)(lVar26 + iVar2),psVar15);
      pcVar21 = "EventInstance::getCPUUsage";
      psVar13 = (segment_command *)((long)register0x00000008 + -0x3ea8);
      psVar6 = psVar9;
      func_0x013aa954(psVar7,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x3ea8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3ea0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3e98) = 0;
    psVar7 = (segment_command *)
             func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x3ea0));
    if (((int)psVar7 == 0) &&
       ((psVar7 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3ea8),
                                  *(undefined8 *)((long)register0x00000008 + -0x3ea0)),
        (int)psVar7 == 0 &&
        (psVar7 = (segment_command *)
                  func_0x01279164(psVar9,(undefined1 *)((long)register0x00000008 + -0x3eb0)),
        (int)psVar7 == 0)))) {
      lVar14 = 0;
      if (*(long *)((long)register0x00000008 + -0x3eb0) != 0) {
        lVar14 = *(long *)((long)register0x00000008 + -0x3eb0) + -8;
      }
      *(long *)((long)register0x00000008 + -0x3e98) = lVar14;
      if (*(long *)(lVar14 + 0x10) == 0) {
        psVar7 = (segment_command *)0x0;
      }
      else {
        psVar6 = psVar15;
        psVar7 = (segment_command *)func_0x012e4648(*(long *)(lVar14 + 0x10),lVar26);
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3ea8));
    if ((int)psVar7 != 0) goto code_r0x013483ec;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3da8)) {
    return psVar7;
  }
  auVar43 = ___stack_chk_fail();
  puVar20 = auVar43._8_8_;
  psVar8 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x3ef0) = in_x4;
  *(segment_command **)((long)register0x00000008 + -0x3ee8) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0x3ee0) = psVar7;
  *(long *)((long)register0x00000008 + -0x3ed8) = lVar26;
  *(segment_command **)((long)register0x00000008 + -0x3ed0) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x3ec8) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x3ec0) =
       (undefined1 *)((long)register0x00000008 + -0x3d60);
  *(undefined **)((long)register0x00000008 + -0x3eb8) = &DAT_013484a8;
  *(undefined8 *)((long)register0x00000008 + -0x3ef8) = *(undefined8 *)PTR_03a5d648;
  if (puVar20 == (undefined8 *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x0134858c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x3ff8),0x100,puVar20);
      pcVar21 = "EventInstance::getChannelGroup";
      psVar13 = (segment_command *)((long)register0x00000008 + -0x3ff8);
      psVar6 = psVar8;
      func_0x013aa954(psVar15,0xd);
    }
  }
  else {
    *puVar20 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4000) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x4008));
    if ((int)psVar15 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x4008) + 0x24) >> 1 & 1) == 0) {
        psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar15 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4000));
        if ((int)psVar15 == 0) {
          psVar5 = (segment_command *)&MACH_HEADER.flags;
          psVar6 = (segment_command *)&MACH_HEADER.flags;
          psVar15 = (segment_command *)
                    func_0x012933e8(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x4008) + 0x98),
                                    (undefined1 *)((long)register0x00000008 + -0x3ff8));
          if ((int)psVar15 == 0) {
            psVar7 = *(segment_command **)((long)register0x00000008 + -0x3ff8);
            *(undefined **)psVar7 = &UNK_03c7db10;
            psVar7->segname[0] = '\x18';
            psVar7->segname[1] = '\0';
            psVar7->segname[2] = '\0';
            psVar7->segname[3] = '\0';
            *(int *)(psVar7->segname + 4) = auVar43._0_4_;
            psVar15 = (segment_command *)
                      func_0x01292948(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x4008) + 0x98),psVar7
                                     );
            if ((int)psVar15 == 0) {
              *puVar20 = *(undefined8 *)(psVar7->segname + 8);
            }
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4000));
    if ((int)psVar15 != 0) goto code_r0x0134858c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3ef8)) {
    return psVar15;
  }
  psVar9 = (segment_command *)___stack_chk_fail();
  *(segment_command **)((long)register0x00000008 + -0x4040) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4038) = psVar15;
  *(undefined8 **)((long)register0x00000008 + -0x4030) = puVar20;
  *(segment_command **)((long)register0x00000008 + -0x4028) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x4020) =
       (undefined1 *)((long)register0x00000008 + -0x3ec0);
  *(undefined **)((long)register0x00000008 + -0x4018) = &DAT_01348604;
  *(undefined8 *)((long)register0x00000008 + -0x4048) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x4150) = 0;
  psVar8 = (segment_command *)
           func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x4158));
  if ((int)psVar8 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x4158) + 0x24) >> 1 & 1) == 0) {
      psVar8 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar8 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4150));
      if ((int)psVar8 == 0) {
        psVar15 = (segment_command *)&MACH_HEADER.ncmds;
        psVar6 = (segment_command *)&MACH_HEADER.ncmds;
        psVar8 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x4158) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x4148));
        if ((int)psVar8 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x4148);
          *puVar20 = &UNK_03c7e218;
          *(undefined4 *)(puVar20 + 1) = 0x10;
          *(int *)((long)puVar20 + 0xc) = (int)psVar9;
          psVar8 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x4158) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4150));
  if (((int)psVar8 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -0x4148) = 0;
    pcVar21 = "EventInstance::start";
    psVar13 = (segment_command *)((long)register0x00000008 + -0x4148);
    psVar6 = psVar9;
    func_0x013aa954(psVar8,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4048)) {
    return psVar8;
  }
  auVar43 = ___stack_chk_fail();
  psVar10 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x41a0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x4198) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x4190) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4188) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x4180) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x4178) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x4170) =
       (undefined1 *)((long)register0x00000008 + -0x4020);
  *(undefined **)((long)register0x00000008 + -0x4168) = &DAT_0134871c;
  *(undefined8 *)((long)register0x00000008 + -0x41a8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x42b0) = 0;
  psVar15 = (segment_command *)
            func_0x01279100(psVar10,(undefined1 *)((long)register0x00000008 + -0x42b8));
  if ((int)psVar15 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x42b8) + 0x24) >> 1 & 1) == 0) {
      psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar15 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x42b0));
      if ((int)psVar15 == 0) {
        psVar7 = (segment_command *)&MACH_HEADER.flags;
        psVar6 = (segment_command *)&MACH_HEADER.flags;
        psVar15 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x42b8) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x42a8));
        if ((int)psVar15 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x42a8);
          *puVar20 = &UNK_03c7e290;
          *(undefined4 *)(puVar20 + 1) = 0x18;
          *(int *)((long)puVar20 + 0xc) = auVar43._0_4_;
          *(int *)(puVar20 + 2) = auVar43._8_4_;
          psVar15 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x42b8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x42b0));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x42a8),0x100,auVar43._8_8_);
    pcVar21 = "EventInstance::stop";
    psVar13 = (segment_command *)((long)register0x00000008 + -0x42a8);
    psVar6 = psVar10;
    func_0x013aa954(psVar15,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x41a8)) {
    return psVar15;
  }
  auVar44 = ___stack_chk_fail();
  puVar27 = auVar44._8_8_;
  psVar8 = auVar44._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x42f0) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x42e8) = psVar15;
  *(long *)((long)register0x00000008 + -0x42e0) = auVar43._8_8_;
  *(segment_command **)((long)register0x00000008 + -0x42d8) = psVar10;
  *(undefined1 **)((long)register0x00000008 + -0x42d0) =
       (undefined1 *)((long)register0x00000008 + -0x4170);
  *(undefined **)((long)register0x00000008 + -0x42c8) = &DAT_01348850;
  *(undefined8 *)((long)register0x00000008 + -0x42f8) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 == (undefined4 *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x0134892c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d05c((undefined1 *)((long)register0x00000008 + -0x43f8),0x100,puVar27);
      pcVar21 = "EventInstance::getTimelinePosition";
      psVar13 = (segment_command *)((long)register0x00000008 + -0x43f8);
      psVar6 = psVar8;
      func_0x013aa954(psVar15,0xd);
    }
  }
  else {
    *puVar27 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x43f8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x43f0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x43e8) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x43f0));
    if ((((int)psVar15 == 0) &&
        (psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x43f8),
                                   *(undefined8 *)((long)register0x00000008 + -0x43f0)),
        (int)psVar15 == 0)) &&
       (psVar15 = (segment_command *)
                  func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0x4400)),
       (int)psVar15 == 0)) {
      lVar26 = 0;
      if (*(long *)((long)register0x00000008 + -0x4400) != 0) {
        lVar26 = *(long *)((long)register0x00000008 + -0x4400) + -8;
      }
      *(long *)((long)register0x00000008 + -0x43e8) = lVar26;
      if (*(long *)(lVar26 + 0x10) == 0) {
        psVar15 = (segment_command *)0x0;
        *puVar27 = 0;
      }
      else {
        uVar11 = func_0x012b7f30(*(long *)(lVar26 + 0x10) + 200);
        psVar15 = (segment_command *)0x0;
        *puVar27 = (int)((uVar11 & 0xffffffff) / 0x30);
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x43f8));
    if ((int)psVar15 != 0) goto code_r0x0134892c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x42f8)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  psVar9 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x4440) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x4438) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x4430) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4428) = psVar15;
  *(undefined4 **)((long)register0x00000008 + -0x4420) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x4418) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x4410) =
       (undefined1 *)((long)register0x00000008 + -0x42d0);
  *(undefined **)((long)register0x00000008 + -0x4408) = &DAT_013489a0;
  *(undefined8 *)((long)register0x00000008 + -0x4448) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x4550) = 0;
  psVar15 = (segment_command *)
            func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x4558));
  if ((int)psVar15 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x4558) + 0x24) >> 1 & 1) == 0) {
      psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar15 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4550));
      if ((int)psVar15 == 0) {
        psVar7 = (segment_command *)&MACH_HEADER.flags;
        psVar6 = (segment_command *)&MACH_HEADER.flags;
        psVar15 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x4558) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x4548));
        if ((int)psVar15 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x4548);
          *puVar20 = &UNK_03c7e308;
          *(undefined4 *)(puVar20 + 1) = 0x18;
          *(int *)((long)puVar20 + 0xc) = auVar43._0_4_;
          *(int *)(puVar20 + 2) = auVar43._8_4_;
          psVar15 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x4558) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4550));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x4548),0x100,auVar43._8_8_);
    pcVar21 = "EventInstance::setTimelinePosition";
    psVar13 = (segment_command *)((long)register0x00000008 + -0x4548);
    psVar6 = psVar9;
    func_0x013aa954(psVar15,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4448)) {
    return psVar15;
  }
  auVar44 = ___stack_chk_fail();
  puVar27 = auVar44._8_8_;
  psVar8 = auVar44._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x4590) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4588) = psVar15;
  *(long *)((long)register0x00000008 + -0x4580) = auVar43._8_8_;
  *(segment_command **)((long)register0x00000008 + -0x4578) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x4570) =
       (undefined1 *)((long)register0x00000008 + -0x4410);
  *(undefined **)((long)register0x00000008 + -0x4568) = &DAT_01348ad4;
  *(undefined8 *)((long)register0x00000008 + -0x4598) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 == (undefined4 *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01348b84:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x4698),0x100,puVar27);
      pcVar21 = "EventInstance::getPlaybackState";
      psVar13 = (segment_command *)((long)register0x00000008 + -0x4698);
      psVar6 = psVar8;
      func_0x013aa954(psVar15,0xd);
    }
  }
  else {
    *puVar27 = 2;
    *(undefined8 *)((long)register0x00000008 + -0x4698) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4690) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4688) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x4690));
    if ((((int)psVar15 == 0) &&
        (psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4698),
                                   *(undefined8 *)((long)register0x00000008 + -0x4690)),
        (int)psVar15 == 0)) &&
       (psVar15 = (segment_command *)
                  func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0x46a0)),
       (int)psVar15 == 0)) {
      lVar26 = 0;
      if (*(long *)((long)register0x00000008 + -0x46a0) != 0) {
        lVar26 = *(long *)((long)register0x00000008 + -0x46a0) + -8;
      }
      *(long *)((long)register0x00000008 + -0x4688) = lVar26;
      uVar4 = func_0x012952d8();
      *puVar27 = uVar4;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4698));
    if ((int)psVar15 != 0) goto code_r0x01348b84;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4598)) {
    return psVar15;
  }
  psVar9 = (segment_command *)___stack_chk_fail();
  *(segment_command **)((long)register0x00000008 + -0x46d0) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x46c8) = psVar15;
  *(undefined4 **)((long)register0x00000008 + -0x46c0) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x46b8) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x46b0) =
       (undefined1 *)((long)register0x00000008 + -0x4570);
  *(undefined **)((long)register0x00000008 + -0x46a8) = &DAT_01348bf8;
  *(undefined8 *)((long)register0x00000008 + -0x46d8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x47e0) = 0;
  psVar8 = (segment_command *)
           func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x47e8));
  if ((int)psVar8 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x47e8) + 0x24) >> 1 & 1) == 0) {
      psVar8 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar8 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x47e0));
      if ((int)psVar8 == 0) {
        psVar15 = (segment_command *)&MACH_HEADER.ncmds;
        psVar6 = (segment_command *)&MACH_HEADER.ncmds;
        psVar8 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x47e8) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x47d8));
        if ((int)psVar8 == 0) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x47d8);
          *puVar20 = &UNK_03c7e380;
          *(undefined4 *)(puVar20 + 1) = 0x10;
          *(int *)((long)puVar20 + 0xc) = (int)psVar9;
          psVar8 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x47e8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x47e0));
  if (((int)psVar8 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -0x47d8) = 0;
    pcVar21 = "EventInstance::release";
    psVar13 = (segment_command *)((long)register0x00000008 + -0x47d8);
    psVar6 = psVar9;
    func_0x013aa954(psVar8,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x46d8)) {
    return psVar8;
  }
  auVar43 = ___stack_chk_fail();
  pbVar18 = auVar43._8_8_;
  psVar10 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x4820) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4818) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x4810) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x4808) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x4800) =
       (undefined1 *)((long)register0x00000008 + -0x46b0);
  *(undefined **)((long)register0x00000008 + -0x47f8) = &DAT_01348d10;
  *(undefined8 *)((long)register0x00000008 + -0x4828) = *(undefined8 *)PTR_03a5d648;
  if (pbVar18 == (byte *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01348dd0:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d1a4((undefined1 *)((long)register0x00000008 + -0x4928),0x100,pbVar18);
      pcVar21 = "EventInstance::isVirtual";
      psVar13 = (segment_command *)((long)register0x00000008 + -0x4928);
      psVar6 = psVar10;
      func_0x013aa954(psVar15,0xd);
    }
  }
  else {
    *pbVar18 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4928) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4920) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4918) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar10,(undefined1 *)((long)register0x00000008 + -0x4920));
    if ((((int)psVar15 == 0) &&
        (psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4928),
                                   *(undefined8 *)((long)register0x00000008 + -0x4920)),
        (int)psVar15 == 0)) &&
       (psVar15 = (segment_command *)
                  func_0x01279164(psVar10,(undefined1 *)((long)register0x00000008 + -0x4930)),
       (int)psVar15 == 0)) {
      lVar26 = 0;
      if (*(long *)((long)register0x00000008 + -0x4930) != 0) {
        lVar26 = *(long *)((long)register0x00000008 + -0x4930) + -8;
      }
      *(long *)((long)register0x00000008 + -0x4918) = lVar26;
      bVar23 = 0;
      if (*(long *)(lVar26 + 0x10) != 0) {
        bVar23 = *(byte *)(*(long *)(lVar26 + 0x10) + 0x2b0) >> 4 & 1;
      }
      psVar15 = (segment_command *)0x0;
      *pbVar18 = bVar23;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4928));
    if ((int)psVar15 != 0) goto code_r0x01348dd0;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4828)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  uVar30 = auVar43._8_8_;
  psVar8 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x4960) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4958) = psVar15;
  *(byte **)((long)register0x00000008 + -0x4950) = pbVar18;
  *(segment_command **)((long)register0x00000008 + -0x4948) = psVar10;
  *(undefined1 **)((long)register0x00000008 + -0x4940) =
       (undefined1 *)((long)register0x00000008 + -0x4800);
  *(undefined **)((long)register0x00000008 + -0x4938) = &DAT_01348e44;
  *(undefined8 *)((long)register0x00000008 + -0x4968) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x4a68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x4a60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x4a58) = 0;
  psVar15 = (segment_command *)
            func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x4a60));
  if ((((int)psVar15 == 0) &&
      (psVar15 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4a68),
                                 *(undefined8 *)((long)register0x00000008 + -0x4a60)),
      (int)psVar15 == 0)) &&
     (psVar15 = (segment_command *)
                func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0x4a70)),
     (int)psVar15 == 0)) {
    lVar26 = 0;
    if (*(long *)((long)register0x00000008 + -0x4a70) != 0) {
      lVar26 = *(long *)((long)register0x00000008 + -0x4a70) + -8;
    }
    *(long *)((long)register0x00000008 + -0x4a58) = lVar26;
    *(undefined8 *)(lVar26 + 0x30) = uVar30;
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4a68));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x4a68),0x100,uVar30);
    pcVar21 = "EventInstance::setUserData";
    psVar13 = (segment_command *)((long)register0x00000008 + -0x4a68);
    psVar6 = psVar8;
    func_0x013aa954(psVar15,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4968)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  puVar20 = auVar43._8_8_;
  psVar9 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x4aa0) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4a98) = psVar15;
  *(undefined8 *)((long)register0x00000008 + -0x4a90) = uVar30;
  *(segment_command **)((long)register0x00000008 + -0x4a88) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x4a80) =
       (undefined1 *)((long)register0x00000008 + -0x4940);
  *(undefined **)((long)register0x00000008 + -0x4a78) = &DAT_01348f4c;
  *(undefined8 *)((long)register0x00000008 + -0x4aa8) = *(undefined8 *)PTR_03a5d648;
  if (puVar20 == (undefined8 *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01348ff8:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x4ba8),0x100,puVar20);
      pcVar21 = "EventInstance::getUserData";
      psVar13 = (segment_command *)((long)register0x00000008 + -0x4ba8);
      psVar6 = psVar9;
      func_0x013aa954(psVar15,0xd);
    }
  }
  else {
    *puVar20 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4ba8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4ba0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4b98) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x4ba0));
    if ((((int)psVar15 == 0) &&
        (psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4ba8),
                                   *(undefined8 *)((long)register0x00000008 + -0x4ba0)),
        (int)psVar15 == 0)) &&
       (psVar15 = (segment_command *)
                  func_0x01279164(psVar9,(undefined1 *)((long)register0x00000008 + -0x4bb0)),
       (int)psVar15 == 0)) {
      lVar26 = 0;
      if (*(long *)((long)register0x00000008 + -0x4bb0) != 0) {
        lVar26 = *(long *)((long)register0x00000008 + -0x4bb0) + -8;
      }
      *(long *)((long)register0x00000008 + -0x4b98) = lVar26;
      *puVar20 = *(undefined8 *)(lVar26 + 0x30);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4ba8));
    if ((int)psVar15 != 0) goto code_r0x01348ff8;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4aa8)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  puVar31 = auVar43._8_8_;
  psVar8 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x4c00) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x4bf8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x4bf0) = in_x4;
  *(segment_command **)((long)register0x00000008 + -0x4be8) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0x4be0) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4bd8) = psVar15;
  *(undefined8 **)((long)register0x00000008 + -0x4bd0) = puVar20;
  *(segment_command **)((long)register0x00000008 + -0x4bc8) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x4bc0) =
       (undefined1 *)((long)register0x00000008 + -0x4a80);
  *(undefined **)((long)register0x00000008 + -0x4bb8) = &DAT_0134906c;
  *(undefined8 *)((long)register0x00000008 + -0x4c08) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x4d08) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x4d00) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x4cf8) = 0;
  psVar15 = psVar6;
  psVar7 = (segment_command *)
           func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x4d00));
  if ((((int)psVar7 == 0) &&
      (psVar7 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4d08),
                                *(undefined8 *)((long)register0x00000008 + -0x4d00)),
      (int)psVar7 == 0)) &&
     (psVar7 = (segment_command *)
               func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0x4d10)),
     (int)psVar7 == 0)) {
    lVar26 = 0;
    if (*(long *)((long)register0x00000008 + -0x4d10) != 0) {
      lVar26 = *(long *)((long)register0x00000008 + -0x4d10) + -8;
    }
    *(long *)((long)register0x00000008 + -0x4cf8) = lVar26;
    *(undefined8 **)(lVar26 + 0x78) = puVar31;
    uVar4 = 0;
    if (puVar31 != (undefined8 *)0x0) {
      uVar4 = SUB84(psVar6,0);
    }
    *(undefined4 *)(lVar26 + 0x74) = uVar4;
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4d08));
  if (((int)psVar7 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    psVar5 = (segment_command *)((long)register0x00000008 + -0x4d08);
    in_x4 = (segment_command *)&section_000000b8.reserved2;
    iVar2 = func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x4d08),0x100,puVar31);
    puVar31 = (undefined8 *)(long)iVar2;
    iVar2 = func_0x0135ce6c((long)puVar31 + (long)(psVar5->segname + -8),0x100 - iVar2,", ");
    func_0x0135cce0(psVar5->segname + (long)puVar31 + (long)iVar2 + -8,
                    0x100 - (int)((long)puVar31 + (long)iVar2),psVar6);
    pcVar21 = "EventInstance::setCallback";
    psVar13 = (segment_command *)((long)register0x00000008 + -0x4d08);
    psVar15 = psVar8;
    func_0x013aa954(psVar7,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4c08)) {
    return psVar7;
  }
  auVar43 = ___stack_chk_fail();
  puVar20 = auVar43._8_8_;
  psVar9 = auVar43._0_8_;
  *(undefined8 **)((long)register0x00000008 + -0x4d40) = puVar31;
  *(segment_command **)((long)register0x00000008 + -0x4d38) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4d30) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x4d28) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x4d20) =
       (undefined1 *)((long)register0x00000008 + -0x4bc0);
  *(undefined **)((long)register0x00000008 + -0x4d18) = &DAT_013491cc;
  *(undefined8 *)((long)register0x00000008 + -0x4d48) = *(undefined8 *)PTR_03a5d648;
  if (puVar20 == (undefined8 *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x0134927c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x4e48),0x100,puVar20);
      pcVar21 = "EventInstance::getMemoryUsage";
      psVar13 = (segment_command *)((long)register0x00000008 + -0x4e48);
      psVar15 = psVar9;
      func_0x013aa954(psVar6,0xd);
    }
  }
  else {
    *(undefined4 *)(puVar20 + 1) = 0;
    *puVar20 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4e48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4e40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4e38) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x4e40));
    if ((((int)psVar6 == 0) &&
        (psVar6 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4e48),
                                  *(undefined8 *)((long)register0x00000008 + -0x4e40)),
        (int)psVar6 == 0)) &&
       (psVar6 = (segment_command *)
                 func_0x01279164(psVar9,(undefined1 *)((long)register0x00000008 + -0x4e50)),
       (int)psVar6 == 0)) {
      lVar26 = 0;
      if (*(long *)((long)register0x00000008 + -0x4e50) != 0) {
        lVar26 = *(long *)((long)register0x00000008 + -0x4e50) + -8;
      }
      *(long *)((long)register0x00000008 + -0x4e38) = lVar26;
      psVar6 = (segment_command *)func_0x012957f8(lVar26,puVar20);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4e48));
    if ((int)psVar6 != 0) goto code_r0x0134927c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4d48)) {
    return psVar6;
  }
  auVar43 = ___stack_chk_fail();
  puVar27 = auVar43._8_8_;
  psVar7 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x4e90) = in_x4;
  *(segment_command **)((long)register0x00000008 + -0x4e88) = psVar5;
  *(undefined8 **)((long)register0x00000008 + -0x4e80) = puVar31;
  *(segment_command **)((long)register0x00000008 + -0x4e78) = psVar6;
  *(undefined8 **)((long)register0x00000008 + -0x4e70) = puVar20;
  *(segment_command **)((long)register0x00000008 + -0x4e68) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x4e60) =
       (undefined1 *)((long)register0x00000008 + -0x4d20);
  *(undefined **)((long)register0x00000008 + -0x4e58) = &DAT_013492f0;
  *(undefined8 *)((long)register0x00000008 + -0x4e98) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 == (undefined4 *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x013493d8:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x4f98),0x100,puVar27);
      pcVar21 = "Bank::getSampleLoadingState";
      psVar13 = (segment_command *)((long)register0x00000008 + -0x4f98);
      psVar15 = psVar7;
      func_0x013aa954(psVar6,0x11);
    }
  }
  else {
    *puVar27 = 1;
    *(undefined8 *)((long)register0x00000008 + -0x4fa0) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x4fa8));
    if ((int)psVar6 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x4fa8) + 0x24) >> 1 & 1) == 0) {
        psVar6 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar6 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4fa0));
        if ((int)psVar6 == 0) {
          psVar5 = (segment_command *)&MACH_HEADER.flags;
          psVar15 = (segment_command *)&MACH_HEADER.flags;
          psVar6 = (segment_command *)
                   func_0x012933e8(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x4fa8) + 0x98),
                                   (undefined1 *)((long)register0x00000008 + -0x4f98));
          if ((int)psVar6 == 0) {
            puVar31 = *(undefined8 **)((long)register0x00000008 + -0x4f98);
            *puVar31 = &UNK_03c7d0c0;
            *(undefined4 *)(puVar31 + 1) = 0x18;
            *(int *)((long)puVar31 + 0xc) = auVar43._0_4_;
            psVar6 = (segment_command *)
                     func_0x01292948(*(undefined8 *)
                                      (*(long *)((long)register0x00000008 + -0x4fa8) + 0x98),puVar31
                                    );
            if ((int)psVar6 == 0) {
              *puVar27 = *(undefined4 *)(puVar31 + 2);
            }
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4fa0));
    if ((int)psVar6 != 0) goto code_r0x013493d8;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4e98)) {
    return psVar6;
  }
  auVar43 = ___stack_chk_fail();
  puVar19 = auVar43._8_8_;
  psVar8 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x4ff0) = in_x4;
  *(segment_command **)((long)register0x00000008 + -0x4fe8) = psVar5;
  *(undefined8 **)((long)register0x00000008 + -0x4fe0) = puVar31;
  *(segment_command **)((long)register0x00000008 + -0x4fd8) = psVar6;
  *(undefined4 **)((long)register0x00000008 + -0x4fd0) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x4fc8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x4fc0) =
       (undefined1 *)((long)register0x00000008 + -0x4e60);
  *(undefined **)((long)register0x00000008 + -0x4fb8) = &DAT_01349450;
  *(undefined8 *)((long)register0x00000008 + -0x4ff8) = *(undefined8 *)PTR_03a5d648;
  if (puVar19 == (undefined4 *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01349550:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x50f8),0x100,puVar19);
      pcVar21 = "Bank::getLoadingState";
      psVar13 = (segment_command *)((long)register0x00000008 + -0x50f8);
      psVar15 = psVar8;
      func_0x013aa954(psVar6,0x11);
    }
  }
  else {
    *puVar19 = 1;
    *(undefined8 *)((long)register0x00000008 + -0x5100) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x5108));
    if ((int)psVar6 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x5108) + 0x24) >> 1 & 1) == 0) {
        psVar6 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar6 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x5100));
        if ((int)psVar6 == 0) {
          psVar5 = (segment_command *)&MACH_HEADER.flags;
          psVar15 = (segment_command *)&MACH_HEADER.flags;
          psVar6 = (segment_command *)
                   func_0x012933e8(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x5108) + 0x98),
                                   (undefined1 *)((long)register0x00000008 + -0x50f8));
          if ((int)psVar6 == 0) {
            puVar31 = *(undefined8 **)((long)register0x00000008 + -0x50f8);
            *puVar31 = &UNK_03c7d048;
            *(undefined4 *)(puVar31 + 1) = 0x18;
            *(int *)((long)puVar31 + 0xc) = auVar43._0_4_;
            psVar6 = (segment_command *)
                     func_0x01292948(*(undefined8 *)
                                      (*(long *)((long)register0x00000008 + -0x5108) + 0x98),puVar31
                                    );
            if ((int)psVar6 == 0) {
              *puVar19 = *(undefined4 *)(puVar31 + 2);
              if (*(int *)(puVar31 + 2) == 4) {
                psVar6 = (segment_command *)(ulong)*(uint *)((long)puVar31 + 0x14);
              }
              else {
                psVar6 = (segment_command *)0x0;
              }
            }
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x5100));
    if ((int)psVar6 != 0) goto code_r0x01349550;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4ff8)) {
    return psVar6;
  }
  auVar43 = ___stack_chk_fail();
  puVar20 = auVar43._8_8_;
  psVar7 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x5150) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x5148) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x5140) = puVar31;
  *(segment_command **)((long)register0x00000008 + -0x5138) = psVar6;
  *(undefined4 **)((long)register0x00000008 + -0x5130) = puVar19;
  *(segment_command **)((long)register0x00000008 + -0x5128) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x5120) =
       (undefined1 *)((long)register0x00000008 + -0x4fc0);
  *(undefined **)((long)register0x00000008 + -0x5118) = &DAT_013495c8;
  *(undefined8 *)((long)register0x00000008 + -0x5158) = *(undefined8 *)PTR_03a5d648;
  if (puVar20 == (undefined8 *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x013496a0:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d254((undefined1 *)((long)register0x00000008 + -0x5258),0x100,puVar20);
      pcVar21 = "Bank::getID";
      psVar13 = (segment_command *)((long)register0x00000008 + -0x5258);
      psVar15 = psVar7;
      func_0x013aa954(psVar6,0x11);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x5258) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x5250) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x5248) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x5250));
    puVar31 = puVar20;
    if ((((int)psVar6 == 0) &&
        (psVar6 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x5258),
                                  *(undefined8 *)((long)register0x00000008 + -0x5250)),
        (int)psVar6 == 0)) &&
       (psVar6 = (segment_command *)
                 func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x5260)),
       (int)psVar6 == 0)) {
      lVar26 = *(long *)((long)register0x00000008 + -0x5260);
      *(long *)((long)register0x00000008 + -0x5248) = lVar26;
      if (*(int *)(lVar26 + 0x34) == 0) {
        psVar6 = (segment_command *)0x0;
        uVar30 = *(undefined8 *)(*(long *)(lVar26 + 0x18) + 0x10);
        puVar20[1] = *(undefined8 *)(*(long *)(lVar26 + 0x18) + 0x18);
        *puVar20 = uVar30;
        puVar31 = (undefined8 *)0x0;
      }
      else {
        psVar6 = (segment_command *)(segment_command_00000020.segname + 6);
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x5258));
    if (puVar31 != (undefined8 *)0x0) {
      *puVar31 = 0;
      puVar31[1] = 0;
    }
    if ((int)psVar6 != 0) goto code_r0x013496a0;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x5158)) {
    return psVar6;
  }
  auVar43 = ___stack_chk_fail();
  pcVar33 = auVar43._8_8_;
  psVar8 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x52c0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x52b8) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x52b0) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x52a8) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x52a0) = in_x4;
  *(segment_command **)((long)register0x00000008 + -0x5298) = psVar5;
  *(undefined8 **)((long)register0x00000008 + -0x5290) = puVar31;
  *(segment_command **)((long)register0x00000008 + -0x5288) = psVar6;
  *(undefined8 **)((long)register0x00000008 + -0x5280) = puVar20;
  *(segment_command **)((long)register0x00000008 + -0x5278) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x5270) =
       (undefined1 *)((long)register0x00000008 + -0x5120);
  *(undefined **)((long)register0x00000008 + -0x5268) = &DAT_01349718;
  *(undefined8 *)((long)register0x00000008 + -0x52c8) = *(undefined8 *)PTR_03a5d648;
  if ((segment_command *)pcVar33 != (segment_command *)0x0) {
    *(char *)&((segment_command *)pcVar33)->cmd = '\0';
  }
  if ((segment_command *)pcVar21 != (segment_command *)0x0) {
    ((segment_command *)pcVar21)->cmd = 0;
  }
  psVar5 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
  psVar6 = psVar15;
  pcVar32 = pcVar21;
  if (((int)psVar15 < 0) ||
     ((segment_command *)pcVar33 == (segment_command *)0x0 && (int)psVar15 != 0)) {
code_r0x013497f4:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      in_x4 = (segment_command *)((long)register0x00000008 + -0x53c8);
      unaff_x25 = (segment_command *)&section_000000b8.reserved2;
      iVar2 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + -0x53c8),0x100,pcVar33);
      pcVar33 = ", ";
      iVar3 = func_0x0135ce6c((long)in_x4->segname + (long)iVar2 + -8,0x100 - iVar2,", ");
      unaff_x26 = (long)iVar2 + (long)iVar3;
      iVar2 = func_0x0135cc94((long)in_x4->segname + unaff_x26 + -8,0x100 - (int)unaff_x26,psVar15);
      uVar1 = (int)unaff_x26 + iVar2;
      psVar15 = (segment_command *)(ulong)uVar1;
      iVar2 = func_0x0135ce6c((long)in_x4->segname + (long)(int)uVar1 + -8,0x100 - uVar1,", ");
      func_0x0135d05c((long)in_x4->segname + (long)(int)(uVar1 + iVar2) + -8,0x100 - (uVar1 + iVar2)
                      ,pcVar21);
      pcVar32 = "Bank::getPath";
      psVar13 = (segment_command *)((long)register0x00000008 + -0x53c8);
      psVar6 = psVar8;
      func_0x013aa954(psVar5,0x11,psVar8);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x53c8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x53c0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x53b8) = 0;
    psVar5 = (segment_command *)
             func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x53c0));
    if (((int)psVar5 == 0) &&
       ((psVar5 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x53c8),
                                  *(undefined8 *)((long)register0x00000008 + -0x53c0)),
        (int)psVar5 == 0 &&
        (psVar5 = (segment_command *)
                  func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0x53e0)),
        (int)psVar5 == 0)))) {
      lVar26 = *(long *)((long)register0x00000008 + -0x53e0);
      *(long *)((long)register0x00000008 + -0x53b8) = lVar26;
      if (*(int *)(lVar26 + 0x34) == 0) {
        uVar30 = *(undefined8 *)(*(long *)(lVar26 + 0x18) + 0x10);
        *(undefined8 *)((long)register0x00000008 + -0x53d8) =
             *(undefined8 *)(*(long *)(lVar26 + 0x18) + 0x18);
        *(undefined8 *)((long)register0x00000008 + -0x53e0) = uVar30;
        psVar6 = (segment_command *)pcVar33;
        pcVar32 = (char *)psVar15;
        psVar13 = (segment_command *)pcVar21;
        psVar5 = (segment_command *)
                 func_0x013145c8(*(undefined8 *)((long)register0x00000008 + -0x53c0),
                                 (undefined1 *)((long)register0x00000008 + -0x53e0),pcVar33);
      }
      else {
        psVar5 = (segment_command *)(segment_command_00000020.segname + 6);
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x53c8));
    if ((int)psVar5 != 0) goto code_r0x013497f4;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x52c8)) {
    return psVar5;
  }
  auVar43 = ___stack_chk_fail();
  puVar27 = auVar43._8_8_;
  psVar7 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x5410) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0x5408) = psVar15;
  *(char **)((long)register0x00000008 + -0x5400) = pcVar21;
  *(segment_command **)((long)register0x00000008 + -0x53f8) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x53f0) =
       (undefined1 *)((long)register0x00000008 + -0x5270);
  *(undefined **)((long)register0x00000008 + -0x53e8) = &DAT_01349900;
  *(undefined8 *)((long)register0x00000008 + -0x5418) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 == (undefined4 *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x013499c8:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d05c((undefined1 *)((long)register0x00000008 + -0x5518),0x100,puVar27);
      pcVar32 = "Bank::getStringCount";
      psVar13 = (segment_command *)((long)register0x00000008 + -0x5518);
      psVar6 = psVar7;
      func_0x013aa954(psVar15,0x11,psVar7);
    }
  }
  else {
    *puVar27 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x5520) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x5528));
    if ((int)psVar15 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x5528) + 0x24) >> 1 & 1) == 0) {
        psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar15 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x5520));
        if (((int)psVar15 == 0) &&
           (psVar15 = (segment_command *)
                      func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x5518)),
           (int)psVar15 == 0)) {
          if (*(int *)(*(long *)((long)register0x00000008 + -0x5518) + 0x34) == 0) {
            lVar26 = *(long *)(*(long *)(*(long *)((long)register0x00000008 + -0x5518) + 0x18) +
                              0x2c8);
            uVar4 = 0;
            if (lVar26 != 0) {
              uVar4 = *(undefined4 *)(lVar26 + 0x18);
            }
            psVar15 = (segment_command *)0x0;
            *puVar27 = uVar4;
          }
          else {
            psVar15 = (segment_command *)(segment_command_00000020.segname + 6);
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x5520));
    if ((int)psVar15 != 0) goto code_r0x013499c8;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x5418)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  uVar30 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x5590) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x5588) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x5580) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x5578) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x5570) = in_x4;
  *(char **)((long)register0x00000008 + -0x5568) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x5560) = psVar5;
  *(segment_command **)((long)register0x00000008 + -0x5558) = psVar15;
  *(undefined4 **)((long)register0x00000008 + -0x5550) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x5548) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x5540) =
       (undefined1 *)((long)register0x00000008 + -0x53f0);
  *(undefined **)((long)register0x00000008 + -0x5538) = &DAT_01349a3c;
  *(undefined8 *)((long)register0x00000008 + -0x55a0) = *(undefined8 *)PTR_03a5d648;
  if ((segment_command *)pcVar32 != (segment_command *)0x0) {
    *(char *)&((segment_command *)pcVar32)->cmd = '\0';
  }
  if (in_x5 != (undefined4 *)0x0) {
    *in_x5 = 0;
  }
  psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
  if ((-1 < (int)psVar13) &&
     ((segment_command *)pcVar32 != (segment_command *)0x0 || (int)psVar13 == 0)) {
    *(undefined8 *)((long)register0x00000008 + -0x56a8) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(uVar30,(undefined1 *)((long)register0x00000008 + -0x56b0));
    if ((int)psVar15 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x56b0) + 0x24) >> 1 & 1) == 0) {
        psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar15 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x56a8));
        if (((int)psVar15 == 0) &&
           (psVar15 = (segment_command *)
                      func_0x01279164(uVar30,(undefined1 *)((long)register0x00000008 + -0x56a0)),
           (int)psVar15 == 0)) {
          if (*(int *)(*(long *)((long)register0x00000008 + -0x56a0) + 0x34) == 0) {
            lVar26 = *(long *)(*(long *)(*(long *)((long)register0x00000008 + -0x56a0) + 0x18) +
                              0x2c8);
            if (lVar26 == 0) {
              psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
            }
            else {
              psVar15 = (segment_command *)
                        func_0x012472b8(lVar26,auVar43._8_8_,psVar6,pcVar32,psVar13,in_x5);
            }
          }
          else {
            psVar15 = (segment_command *)(segment_command_00000020.segname + 6);
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x56a8));
    if ((int)psVar15 == 0) goto code_r0x01349c18;
  }
  if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
    unaff_x27 = 0x100;
    iVar2 = func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x56a0),0x100,auVar43._8_8_);
    iVar3 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + (long)iVar2 + -0x56a0),
                            0x100 - iVar2,", ");
    unaff_x28 = (long)iVar2 + (long)iVar3;
    iVar2 = func_0x0135d254((undefined1 *)((long)register0x00000008 + unaff_x28 + -0x56a0),
                            0x100 - (int)unaff_x28,psVar6);
    iVar2 = (int)unaff_x28 + iVar2;
    iVar3 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + (long)iVar2 + -0x56a0),
                            0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + (long)iVar2 + -0x56a0),
                            0x100 - iVar2,pcVar32);
    iVar2 = iVar2 + iVar3;
    iVar3 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + (long)iVar2 + -0x56a0),
                            0x100 - iVar2,", ");
    uVar1 = iVar2 + iVar3;
    pcVar32 = (char *)(ulong)uVar1;
    iVar2 = func_0x0135cc94((undefined1 *)((long)register0x00000008 + (long)(int)uVar1 + -0x56a0),
                            0x100 - uVar1,psVar13);
    uVar1 = uVar1 + iVar2;
    psVar13 = (segment_command *)(ulong)uVar1;
    iVar2 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + (long)(int)uVar1 + -0x56a0),
                            0x100 - uVar1,", ");
    func_0x0135d05c((undefined1 *)((long)register0x00000008 + (long)(int)(uVar1 + iVar2) + -0x56a0),
                    0x100 - (uVar1 + iVar2),in_x5);
    func_0x013aa954(psVar15,0x11,uVar30,"Bank::getStringInfo",
                    (undefined1 *)((long)register0x00000008 + -0x56a0));
  }
code_r0x01349c18:
  if (*(long *)PTR_03a5d648 != *(long *)((long)register0x00000008 + -0x55a0)) {
    uVar12 = ___stack_chk_fail();
    *(long *)((long)register0x00000008 + -0x56e0) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x56d8) = unaff_x27;
    *(undefined4 **)((long)register0x00000008 + -0x56d0) = in_x5;
    *(undefined8 *)((long)register0x00000008 + -0x56c8) = uVar30;
    *(undefined1 **)((long)register0x00000008 + -0x56c0) =
         (undefined1 *)((long)register0x00000008 + -0x5540);
    *(undefined **)((long)register0x00000008 + -0x56b8) = &DAT_01349c88;
    *(undefined8 *)((long)register0x00000008 + -0x56e8) = *(undefined8 *)PTR_03a5d648;
    *(char **)((long)register0x00000008 + -0x5820) = pcVar32;
    *(segment_command **)((long)register0x00000008 + -0x5818) = psVar13;
    *(undefined8 *)((long)register0x00000008 + -0x5810) = uVar12;
    *(undefined8 *)((long)register0x00000008 + -0x5808) = uVar30;
    *(undefined1 **)((long)register0x00000008 + -0x5800) =
         (undefined1 *)((long)register0x00000008 + -0x56c0);
    *(undefined **)((long)register0x00000008 + -0x57f8) = &UNK_01349cb4;
    *(undefined8 *)((long)register0x00000008 + -0x5830) = 0;
    psVar13 = (segment_command *)
              func_0x01279100(uVar12,(undefined1 *)((long)register0x00000008 + -0x5838));
    if ((int)psVar13 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x5838) + 0x24) >> 1 & 1) == 0) {
        psVar13 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar13 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x5830));
        if (((int)psVar13 == 0) &&
           (psVar13 = (segment_command *)
                      func_0x012933e8(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x5838) + 0x98),
                                      (undefined1 *)((long)register0x00000008 + -0x5828),0x10),
           (int)psVar13 == 0)) {
          puVar20 = *(undefined8 **)((long)register0x00000008 + -0x5828);
          *puVar20 = &UNK_03c7d228;
          *(undefined4 *)(puVar20 + 1) = 0x10;
          *(int *)((long)puVar20 + 0xc) = (int)uVar12;
          psVar13 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x5838) + 0x98));
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x5830));
    return psVar13;
  }
  return psVar15;
}



// ============================================================
// RVA: 0x1459640 | Atlas.Audio.AtlasAudioManager.OnEndOfLevel
// ============================================================

void Atlas_Audio_AtlasAudioManager__OnEndOfLevel(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auVar3 [12];
  undefined8 uStack_58;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    /*Atlas.Audio.WeaponAudioManager$$ClearAllWeapons*/ func_0x015309f0(*(long *)(param_1 + 0x38),0);
    *(undefined1 *)(param_1 + 0x90) = 1;
    return;
  }
  auVar3 = func_0x00f78af4();
  if ((bRam0000000003eb47cb & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d760b8);
    bRam0000000003eb47cb = 1;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_58 = /*FMODUnity.RuntimeManager$$GetVCA*/ func_0x016ec5dc(/*STR('Vca:/SFX')*/ uRam0000000003d760b8,0);
  puVar1 = (undefined4 *)(auVar3._0_8_ + 0xd4);
  if (auVar3._8_4_ == 0) {
    uVar2 = *puVar1;
  }
  else {
    /*FMOD.Studio.VCA$$getVolume*/ func_0x016f833c(&uStack_58,puVar1,0);
    uVar2 = 0;
  }
  /*FMOD.Studio.VCA$$setVolume*/ func_0x016f8370(uVar2,&uStack_58,0);
  return;
}



// ============================================================
// RVA: 0x1459678 | Atlas.Audio.AtlasAudioManager.Mute
// ============================================================

void Atlas_Audio_AtlasAudioManager__Mute(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb47cb & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d760b8);
    bRam0000000003eb47cb = 1;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_38 = /*FMODUnity.RuntimeManager$$GetVCA*/ func_0x016ec5dc(/*STR('Vca:/SFX')*/ uRam0000000003d760b8,0);
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xd4);
  }
  else {
    /*FMOD.Studio.VCA$$getVolume*/ func_0x016f833c(&uStack_38,(undefined4 *)(param_1 + 0xd4),0);
    uVar1 = 0;
  }
  /*FMOD.Studio.VCA$$setVolume*/ func_0x016f8370(uVar1,&uStack_38,0);
  return;
}



// ============================================================
// RVA: 0x1459738 | Atlas.Audio.AtlasAudioManager.SetPlayerAudio
// ============================================================

void Atlas_Audio_AtlasAudioManager__SetPlayerAudio(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



// ============================================================
// RVA: 0x1459740 | Atlas.Audio.AtlasAudioManager.UpdateLaps
// ============================================================

long Atlas_Audio_AtlasAudioManager__UpdateLaps(long param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar12 [12];
  undefined *puStack_38;
  
  if ((0 < param_2) && (*(int *)(param_1 + 0x54) != param_2)) {
    *(int *)(param_1 + 0x54) = param_2;
    piVar1 = (int *)(param_1 + 0x58);
    if (param_2 <= *piVar1) {
      lVar5 = *(long *)(param_1 + 0x20);
      param_1 = 0;
      if (lVar5 != 0) {
        uVar10 = 4;
        if (*piVar1 == param_2) {
          uVar10 = 5;
        }
        uVar11 = 3;
        if (param_2 != 1) {
          uVar11 = uVar10;
        }
        uVar8 = (ulong)uVar11;
        puVar2 = &stack0xfffffffffffffff0;
        lVar6 = lVar5;
        if ((bRam0000000003eb4a17 & 1) == 0) {
          lVar6 = func_0x00f78a20(0x3d71930,uVar8,0);
          bRam0000000003eb4a17 = 1;
        }
        if (*(int *)(lVar5 + 0x30) == 0) {
          lVar6 = 0;
          if ((*(long *)(lVar5 + 0x10) != 0) &&
             (lVar6 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar5 + 0x10),0), (int)lVar6 != 0)) {
            lVar6 = *(long *)(lVar5 + 0x10);
            uVar9 = /*STR('RaceMusic_Context')*/ uRam0000000003d71930;
            puStack_38 = unaff_x30;
            if (lVar6 != 0) {
Core_Audio_AudioEvent__SetParameter:
              *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
              *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
              *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
              *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
              *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
              *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(undefined **)((long)register0x00000008 + -8) = puStack_38;
              iVar4 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar6 + 0x28,0,0,0);
              if (iVar4 != 0) {
                /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34((float)(int)uVar11,lVar6 + 0x28,uVar9,0,0);
              }
              return lVar6;
            }
            auVar12 = func_0x00f78af4();
            uVar11 = auVar12._8_4_;
            lVar7 = auVar12._0_8_;
            puStack_38 = &Atlas_Audio_MusicManager__SetParameter;
            lVar6 = lVar7;
            if ((bRam0000000003eb4a18 & 1) == 0) {
              lVar6 = func_0x00f78a20(0x3d69668);
              bRam0000000003eb4a18 = 1;
            }
            if (*(int *)(lVar7 + 0x30) == 1) {
              lVar6 = 0;
              if ((*(long *)(lVar7 + 0x10) != 0) &&
                 (lVar6 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar7 + 0x10),0), (int)lVar6 != 0)) {
                lVar6 = *(long *)(lVar7 + 0x10);
                if (lVar6 == 0) {
                  lVar5 = func_0x00f78af4();
                  if ((bRam0000000003eb4a15 & 1) == 0) {
                    func_0x00f78a20(0x3d71930);
                    func_0x00f78a20(0x3d69668);
                    bRam0000000003eb4a15 = 1;
                  }
                  lVar6 = 0;
                  if (*(long *)(lVar5 + 0x10) != 0) {
                    puVar3 = (undefined8 *)0x3d69668;
                    if (*(int *)(lVar5 + 0x30) != 1) {
                      puVar3 = (undefined8 *)0x3d71930;
                    }
                    lVar6 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar5 + 0x10),*puVar3,0);
                    *(undefined4 *)(lVar5 + 0x40) = extraout_s0;
                  }
                  return lVar6;
                }
                register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                unaff_x21 = 0x3eb4000;
                uVar9 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668;
                unaff_x19 = uVar8;
                unaff_x20 = lVar5;
                unaff_x29 = puVar2;
                goto Core_Audio_AudioEvent__SetParameter;
              }
            }
            return lVar6;
          }
        }
        return lVar6;
      }
    }
  }
  return param_1;
}



// ============================================================
// RVA: 0x1459790 | Atlas.Audio.AtlasAudioManager.UpdateRanking
// ============================================================

void Atlas_Audio_AtlasAudioManager__UpdateRanking(long param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  *(long *)(param_1 + 0x68) = param_2;
  if (param_2 == 0) {
LAB_01459820:
    func_0x00f78af4();
LAB_01459824:
    uVar1 = func_0x00f78b24();
    lVar3 = func_0x00f78ac0(uVar1,0);
    *(undefined4 *)(lVar3 + 0xd8) = 0xffffffff;
    return;
  }
  uVar2 = *(uint *)(param_2 + 0x18);
  if (0 < (int)uVar2) {
    uVar4 = 0;
    do {
      if (uVar2 <= uVar4) goto LAB_01459824;
      lVar3 = *(long *)(param_2 + (long)(int)uVar4 * 8 + 0x20);
      if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) goto LAB_01459820;
      lVar3 = *(long *)(lVar3 + 0x70);
      if (lVar3 != 0) {
        if (lVar3 == 0) goto LAB_01459820;
        /*Atlas.Audio.KartAudio$$SetRanking*/ func_0x015c04e8(lVar3,uVar4,0);
      }
      uVar4 = uVar4 + 1;
      uVar2 = *(uint *)(param_2 + 0x18);
    } while ((int)uVar4 < (int)uVar2);
  }
  return;
}



// ============================================================
// RVA: 0x1459830 | Atlas.Audio.AtlasAudioManager.ResetTimeRemaining
// ============================================================

void Atlas_Audio_AtlasAudioManager__ResetTimeRemaining(long param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  return;
}



// ============================================================
// RVA: 0x145983c | Atlas.Audio.AtlasAudioManager.UpdateTimeRemaining
// ============================================================

long Atlas_Audio_AtlasAudioManager__UpdateTimeRemaining(long param_1,uint param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((param_2 < 0xb) && (*(uint *)(param_1 + 0xd8) != param_2)) {
    *(uint *)(param_1 + 0xd8) = param_2;
    lVar2 = *(long *)(param_1 + 0xb8);
    if (lVar2 == 0) {
      unaff_x30 = &Atlas_Audio_AtlasAudioManager__PlayCulturePodAlert;
      lVar2 = func_0x00f78af4();
      lVar2 = *(long *)(lVar2 + 0xa0);
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x29 = puVar1;
      if (lVar2 == 0) {
        return 0;
      }
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar2,0,0);
    return lVar2;
  }
  return param_1;
}



// ============================================================
// RVA: 0x145987c | Atlas.Audio.AtlasAudioManager.PlayCulturePodAlert
// ============================================================

long Atlas_Audio_AtlasAudioManager__PlayCulturePodAlert(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar1,0,0);
    return lVar1;
  }
  return 0;
}



// ============================================================
// RVA: 0x1459890 | Atlas.Audio.AtlasAudioManager.PlayFinishMusic
// ============================================================

long Atlas_Audio_AtlasAudioManager__PlayFinishMusic(long param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar9 [16];
  
  lVar8 = *(long *)(param_1 + 0x48);
  if (lVar8 == 0) {
    return param_1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    auVar9 = func_0x00f78af4();
    lVar8 = auVar9._0_8_;
    if ((bRam0000000003eb56bd & 1) == 0) {
      lVar8 = func_0x00f78a20(0x3d24568,auVar9._8_8_,0);
      bRam0000000003eb56bd = 1;
    }
    if (*(char *)(auVar9._0_8_ + 0x10) != '\0') {
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003eb5dd4 & 1) == 0) {
        func_0x00f78a20(0x3d24568,0);
        bRam0000000003eb5dd4 = 1;
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*FMODUnity.RuntimeManager$$PathToGUID*/ func_0x016eb5b8(auVar9._8_8_);
      lVar8 = /*FMODUnity.RuntimeManager$$PlayOneShot*/ func_0x016ebad0(0,0,0);
      return lVar8;
    }
    return lVar8;
  }
  if (*(int *)(lVar4 + 0x30) == 1) {
    uVar7 = 5;
    if (2 < *(int *)(lVar8 + 0xc0)) {
      uVar7 = 6;
    }
    auVar9._8_4_ = uVar7;
    auVar9._0_8_ = lVar4;
    auVar9._12_4_ = 0;
  }
  else {
    if (*(int *)(lVar4 + 0x30) != 0) {
      return lVar4;
    }
    uVar6 = 6;
    if (7 < *(int *)(lVar8 + 0xc0)) {
      uVar6 = 7;
    }
    puVar1 = &stack0xfffffffffffffff0;
    lVar8 = lVar4;
    if ((bRam0000000003eb4a17 & 1) == 0) {
      lVar8 = func_0x00f78a20(0x3d71930,(ulong)uVar6,0);
      bRam0000000003eb4a17 = 1;
    }
    if (*(int *)(lVar4 + 0x30) != 0) {
      return lVar8;
    }
    if (*(long *)(lVar4 + 0x10) == 0) {
      return 0;
    }
    lVar8 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar4 + 0x10),0);
    if ((int)lVar8 == 0) {
      return lVar8;
    }
    lVar8 = *(long *)(lVar4 + 0x10);
    uVar5 = /*STR('RaceMusic_Context')*/ uRam0000000003d71930;
    if (lVar8 != 0) goto Core_Audio_AudioEvent__SetParameter;
    unaff_x30 = &Atlas_Audio_MusicManager__SetParameter;
    auVar9 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = (ulong)uVar6;
    unaff_x20 = lVar4;
    unaff_x21 = 0x3eb4000;
    unaff_x29 = puVar1;
  }
  lVar4 = auVar9._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  lVar8 = lVar4;
  if ((bRam0000000003eb4a18 & 1) == 0) {
    lVar8 = func_0x00f78a20(0x3d69668);
    bRam0000000003eb4a18 = 1;
  }
  if (*(int *)(lVar4 + 0x30) == 1) {
    lVar8 = 0;
    if ((*(long *)(lVar4 + 0x10) != 0) &&
       (lVar8 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar4 + 0x10),0), (int)lVar8 != 0)) {
      lVar8 = *(long *)(lVar4 + 0x10);
      if (lVar8 == 0) {
        lVar8 = func_0x00f78af4();
        *(undefined1 (*) [16])((long)register0x00000008 + -0x50) = auVar9;
        *(undefined1 **)((long)register0x00000008 + -0x40) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x38) = &Atlas_Audio_MusicManager__SaveParameter
        ;
        if ((bRam0000000003eb4a15 & 1) == 0) {
          func_0x00f78a20(0x3d71930);
          func_0x00f78a20(0x3d69668);
          bRam0000000003eb4a15 = 1;
        }
        lVar4 = 0;
        if (*(long *)(lVar8 + 0x10) != 0) {
          puVar2 = (undefined8 *)0x3d69668;
          if (*(int *)(lVar8 + 0x30) != 1) {
            puVar2 = (undefined8 *)0x3d71930;
          }
          lVar4 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar8 + 0x10),*puVar2,0);
          *(undefined4 *)(lVar8 + 0x40) = extraout_s0;
        }
        return lVar4;
      }
      uVar6 = auVar9._8_4_;
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
      unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
      unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
      unaff_x19 = *(ulong *)((long)register0x00000008 + -0x18);
      unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
      unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
      uVar5 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668;
Core_Audio_AudioEvent__SetParameter:
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar8 + 0x28,0,0,0);
      if (iVar3 != 0) {
        /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34((float)(int)uVar6,lVar8 + 0x28,uVar5,0,0);
      }
      return lVar8;
    }
  }
  return lVar8;
}



// ============================================================
// RVA: 0x14598fc | Atlas.Audio.AtlasAudioManager.PlayUISound
// ============================================================

void Atlas_Audio_AtlasAudioManager__PlayUISound(long param_1,undefined8 param_2)

{
  if ((bRam0000000003eb56bd & 1) == 0) {
    func_0x00f78a20(0x3d24568,param_2,0);
    bRam0000000003eb56bd = 1;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003eb5dd4 & 1) == 0) {
      func_0x00f78a20(0x3d24568,0);
      bRam0000000003eb5dd4 = 1;
    }
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*FMODUnity.RuntimeManager$$PathToGUID*/ func_0x016eb5b8(param_2);
    /*FMODUnity.RuntimeManager$$PlayOneShot*/ func_0x016ebad0(0,0,0);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x1459904 | Atlas.Audio.AtlasAudioManager.ProcessCrowds
// ============================================================

/* WARNING: Type propagation algorithm not settling */

long Atlas_Audio_AtlasAudioManager__ProcessCrowds
               (uint param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******pppppppuVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined8 unaff_d9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000003eb47cc & 1) == 0) {
    func_0x00f78a20(0x3d321e8);
    func_0x00f78a20(0x3d321f0);
    func_0x00f78a20(0x3d321f8);
    func_0x00f78a20(0x3d39df0);
    bRam0000000003eb47cc = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if ((*(long *)(param_4 + 0x48) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_4 + 0x48) + 0xb8), lVar4 != 0)) {
    uVar13 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0);
    if (*(long *)(param_4 + 0xe0) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,*(long *)(param_4 + 0xe0),uRam0000000003d39df0);
      while( true ) {
        uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d321f0);
        if ((uVar5 & 1) == 0) {
          lVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d321e8);
          return lVar4;
        }
        if (lStack_48 == 0) break;
        /*Atlas.Audio.AudioTrigger$$ProcessCrowd*/ func_0x01471d94(uVar13,param_2,param_3,param_1,lStack_48,0);
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1459a24);
      (*pcVar1)();
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    param_4 = *plVar6;
    ___cxa_end_catch();
    lVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003eb4000);
    if (param_4 == 0) {
      return lVar4;
    }
    func_0x00f78ac0(param_4,0);
  }
  lVar4 = __Unwind_Resume();
  puVar2 = &uStack_90;
  uStack_80 = 0x3eb4000;
  puStack_68 = &Atlas_Audio_AtlasAudioManager__Update;
  pppppppuVar11 = &pppppppuStack_70;
  uVar10 = 0x3eb4000;
  uStack_90 = extraout_d0;
  uStack_88 = extraout_var;
  lStack_78 = param_4;
  pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb47cd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb47cd = 1;
  }
  *(ulong *)(lVar4 + 0x70) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x70) >> 0x20) + (float)uStack_90,
                (float)*(undefined8 *)(lVar4 + 0x70) + (float)uStack_90);
  if (*(long *)(lVar4 + 0x28) != 0) {
    /*Atlas.Audio.SpeechManager$$Update*/ func_0x014feff4(*(long *)(lVar4 + 0x28),0);
  }
  if (*(long *)(lVar4 + 0x30) != 0) {
    /*Atlas.Audio.SpeechManager$$Update*/ func_0x014feff4(uStack_90,*(long *)(lVar4 + 0x30),0);
  }
  if (*(long *)(lVar4 + 0x38) != 0) {
    /*Atlas.Audio.WeaponAudioManager$$Update*/ func_0x01530748(uStack_90,*(long *)(lVar4 + 0x38),0);
  }
  if (*(long *)(lVar4 + 0x30) == 0) {
    puVar12 = &Atlas_Audio_AtlasAudioManager__CalculateDopplerObjects;
    lVar9 = func_0x00f78af4();
  }
  else {
    uVar5 = /*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar4 + 0x30),0);
    if ((uVar5 & 1) == 0) {
      *(float *)(lVar4 + 0x88) = *(float *)(lVar4 + 0x88) - (float)uStack_90;
    }
    if (*(long *)(lVar4 + 0x48) != 0) {
      uVar10 = *(undefined8 *)(lVar4 + 0x60);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
      if (iVar3 != 0) {
        Atlas_Audio_AtlasAudioManager__ProcessCrowds(lVar4);
      }
    }
    *(float *)(lVar4 + 0x8c) = *(float *)(lVar4 + 0x8c) + (float)uStack_90;
    puVar2 = (undefined8 *)auStack_60;
    lVar9 = lVar4;
    lVar4 = lStack_78;
    uVar10 = uStack_80;
    pppppppuVar11 = pppppppuStack_70;
    puVar12 = puStack_68;
  }
  *(undefined8 *)((long)puVar2 + -0x50) = unaff_d9;
  *(ulong *)((long)puVar2 + -0x48) = (ulong)param_1;
  *(undefined8 *)((long)puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)((long)puVar2 + -0x20) = uVar10;
  *(long *)((long)puVar2 + -0x18) = lVar4;
  *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar11;
  *(undefined **)((long)puVar2 + -8) = puVar12;
  if ((bRam0000000003eb47ea & 1) == 0) {
    func_0x00f78a20(0x3d321e8);
    func_0x00f78a20(0x3d321f0);
    func_0x00f78a20(0x3d321f8);
    func_0x00f78a20(0x3d39df0);
    func_0x00f78a20(0x3d39df8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb47ea = 1;
  }
  uVar10 = *(undefined8 *)(lVar9 + 0x60);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = 0;
  lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
  if ((int)lVar4 != 0) {
    if ((*(long *)(lVar9 + 0x60) == 0) ||
       (lVar4 = *(long *)(*(long *)(lVar9 + 0x60) + 0x30), lVar4 == 0)) {
      func_0x00f78af4();
      if (extraout_w1_00 == 1) {
        plVar6 = (long *)___cxa_begin_catch();
        lVar9 = *plVar6;
        ___cxa_end_catch();
        lVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)puVar2 + -0x70),uRam0000000003d321e8);
        if (lVar9 == 0) {
          return lVar4;
        }
        func_0x00f78ac0(lVar9,0);
      }
      __Unwind_Resume();
      *(undefined8 *)((long)puVar2 + -0xc0) = 0x3d23990;
      *(undefined8 *)((long)puVar2 + -0xb8) = unaff_x21;
      *(undefined8 *)((long)puVar2 + -0xb0) = uVar10;
      *(long *)((long)puVar2 + -0xa8) = lVar9;
      *(undefined1 **)((long)puVar2 + -0xa0) = (undefined1 *)((long)puVar2 + -0x10);
      *(undefined **)((long)puVar2 + -0x98) = &Atlas_Audio_AtlasAudioManager__StartReverb;
      if ((bRam0000000003eb47ce & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d24568);
        func_0x00f78a20(0x3d7b8a0);
        bRam0000000003eb47ce = 1;
      }
      *(undefined8 *)((long)puVar2 + -200) = 0;
      if (extraout_x1 == 0) {
        func_0x00f78af4();
        *(undefined1 **)((long)puVar2 + -0xf0) = (undefined1 *)((long)puVar2 + -0xa0);
        *(undefined **)((long)puVar2 + -0xe8) = &Atlas_Audio_AtlasAudioManager__StopReverb;
        *(undefined8 *)((long)puVar2 + -0xf8) = extraout_x1_00;
        /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38((undefined1 *)((long)puVar2 + -0xf8),0,0);
        lVar4 = /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74((undefined1 *)((long)puVar2 + -0xf8),0);
        return lVar4;
      }
      uVar5 = /*System.String$$Contains*/ func_0x029cd7a4(extraout_x1,/*STR('snapshot:')*/ uRam0000000003d7b8a0,0);
      lVar4 = extraout_x1;
      if ((uVar5 & 1) == 0) {
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar4 = /*System.String$$Concat*/ func_0x029bdb88(*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x158),
                                extraout_x1,0);
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
      *(undefined8 *)((long)puVar2 + -0xd0) = uVar10;
      iVar3 = /*FMOD.Studio.System$$getEvent*/ func_0x016f5ce8((undefined1 *)((long)puVar2 + -0xd0),lVar4,
                              (undefined1 *)((long)puVar2 + -200),0);
      lVar9 = 0;
      if (iVar3 == 0) {
        if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*FMODUnity.RuntimeManager$$CreateInstance*/ func_0x016e24f4(lVar4,0);
        *(undefined8 *)((long)puVar2 + -0xd8) = uVar10;
        iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c((undefined1 *)((long)puVar2 + -0xd8),0);
        if (iVar3 != 0) {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
          if (iVar3 != 0) {
            uVar10 = *(undefined8 *)((long)puVar2 + -0xd8);
            if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*FMODUnity.RuntimeManager$$AttachInstanceToGameObject*/ func_0x016e2610(uVar10,uVar8,0,0);
          }
          /*FMOD.Studio.EventInstance$$start*/ func_0x016dfb2c((undefined1 *)((long)puVar2 + -0xd8),0);
        }
        lVar9 = *(long *)((long)puVar2 + -0xd8);
      }
      return lVar9;
    }
    if ((0 < *(int *)(lVar4 + 0x18)) && (*(long *)(lVar9 + 0x48) != 0)) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)puVar2 + -0x88),lVar4,uRam0000000003d39df0);
      *(undefined8 *)((long)puVar2 + -0x68) = *(undefined8 *)((long)puVar2 + -0x80);
      *(undefined8 *)((long)puVar2 + -0x70) = *(undefined8 *)((long)puVar2 + -0x88);
      *(undefined8 *)((long)puVar2 + -0x60) = *(undefined8 *)((long)puVar2 + -0x78);
code_r0x01459c88:
      do {
        uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)puVar2 + -0x70),uRam0000000003d321f0);
        if ((uVar5 & 1) == 0) {
          lVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)puVar2 + -0x70),uRam0000000003d321e8);
          return lVar4;
        }
        if (*(long *)(lVar9 + 0x48) == 0) {
          func_0x00f78af4();
          goto code_r0x01459d48;
        }
        lVar4 = *(long *)((long)puVar2 + -0x60);
        uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x48) + 0xb8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
      } while (iVar3 == 0 || lVar4 == 0);
      if (*(long *)(lVar9 + 0x48) == 0) {
        func_0x00f78af4();
      }
      else {
        lVar7 = *(long *)(*(long *)(lVar9 + 0x48) + 0xb8);
        if (lVar7 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0);
          /*Atlas.Audio.AudioTrigger$$CalcDoppler*/ func_0x01472564(lVar4,0);
          goto code_r0x01459c88;
        }
        func_0x00f78af4();
      }
code_r0x01459d48:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1459d4c);
      (*pcVar1)();
    }
  }
  return lVar4;
}



// ============================================================
// RVA: 0x1459a68 | Atlas.Audio.AtlasAudioManager.Update
// ============================================================

long Atlas_Audio_AtlasAudioManager__Update(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int extraout_w1;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  undefined *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 auStack_30 [2];
  
  puVar2 = auStack_30;
  puVar11 = &stack0xfffffffffffffff0;
  uVar10 = 0x3eb4000;
  auStack_30[0] = param_1;
  if ((bRam0000000003eb47cd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb47cd = 1;
  }
  *(ulong *)(param_2 + 0x70) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20) + (float)auStack_30[0],
                (float)*(undefined8 *)(param_2 + 0x70) + (float)auStack_30[0]);
  if (*(long *)(param_2 + 0x28) != 0) {
    /*Atlas.Audio.SpeechManager$$Update*/ func_0x014feff4(*(long *)(param_2 + 0x28),0);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    /*Atlas.Audio.SpeechManager$$Update*/ func_0x014feff4(auStack_30[0],*(long *)(param_2 + 0x30),0);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    /*Atlas.Audio.WeaponAudioManager$$Update*/ func_0x01530748(auStack_30[0],*(long *)(param_2 + 0x38),0);
  }
  if (*(long *)(param_2 + 0x30) == 0) {
    unaff_x30 = &Atlas_Audio_AtlasAudioManager__CalculateDopplerObjects;
    lVar7 = func_0x00f78af4();
  }
  else {
    uVar4 = /*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(param_2 + 0x30),0);
    if ((uVar4 & 1) == 0) {
      *(float *)(param_2 + 0x88) = *(float *)(param_2 + 0x88) - (float)auStack_30[0];
    }
    if (*(long *)(param_2 + 0x48) != 0) {
      uVar10 = *(undefined8 *)(param_2 + 0x60);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
      if (iVar3 != 0) {
        Atlas_Audio_AtlasAudioManager__ProcessCrowds(param_2);
      }
    }
    *(float *)(param_2 + 0x8c) = *(float *)(param_2 + 0x8c) + (float)auStack_30[0];
    puVar2 = (undefined8 *)register0x00000008;
    lVar7 = param_2;
    param_2 = unaff_x19;
    uVar10 = unaff_x20;
    puVar11 = unaff_x29;
  }
  *(undefined8 *)((long)puVar2 + -0x50) = unaff_d9;
  *(undefined8 *)((long)puVar2 + -0x48) = unaff_d8;
  *(undefined8 *)((long)puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)((long)puVar2 + -0x20) = uVar10;
  *(long *)((long)puVar2 + -0x18) = param_2;
  *(undefined1 **)((long)puVar2 + -0x10) = puVar11;
  *(undefined **)((long)puVar2 + -8) = unaff_x30;
  if ((bRam0000000003eb47ea & 1) == 0) {
    func_0x00f78a20(0x3d321e8);
    func_0x00f78a20(0x3d321f0);
    func_0x00f78a20(0x3d321f8);
    func_0x00f78a20(0x3d39df0);
    func_0x00f78a20(0x3d39df8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb47ea = 1;
  }
  uVar10 = *(undefined8 *)(lVar7 + 0x60);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = 0;
  lVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar10,0,0);
  if ((int)lVar5 != 0) {
    if ((*(long *)(lVar7 + 0x60) == 0) ||
       (lVar5 = *(long *)(*(long *)(lVar7 + 0x60) + 0x30), lVar5 == 0)) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar8 = (long *)___cxa_begin_catch();
        lVar7 = *plVar8;
        ___cxa_end_catch();
        lVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)puVar2 + -0x70),uRam0000000003d321e8);
        if (lVar7 == 0) {
          return lVar5;
        }
        func_0x00f78ac0(lVar7,0);
      }
      __Unwind_Resume();
      *(undefined8 *)((long)puVar2 + -0xc0) = 0x3d23990;
      *(undefined8 *)((long)puVar2 + -0xb8) = unaff_x21;
      *(undefined8 *)((long)puVar2 + -0xb0) = uVar10;
      *(long *)((long)puVar2 + -0xa8) = lVar7;
      *(undefined1 **)((long)puVar2 + -0xa0) = (undefined1 *)((long)puVar2 + -0x10);
      *(undefined **)((long)puVar2 + -0x98) = &Atlas_Audio_AtlasAudioManager__StartReverb;
      if ((bRam0000000003eb47ce & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d24568);
        func_0x00f78a20(0x3d7b8a0);
        bRam0000000003eb47ce = 1;
      }
      *(undefined8 *)((long)puVar2 + -200) = 0;
      if (extraout_x1 == 0) {
        func_0x00f78af4();
        *(undefined1 **)((long)puVar2 + -0xf0) = (undefined1 *)((long)puVar2 + -0xa0);
        *(undefined **)((long)puVar2 + -0xe8) = &Atlas_Audio_AtlasAudioManager__StopReverb;
        *(undefined8 *)((long)puVar2 + -0xf8) = extraout_x1_00;
        /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38((undefined1 *)((long)puVar2 + -0xf8),0,0);
        lVar7 = /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74((undefined1 *)((long)puVar2 + -0xf8),0);
        return lVar7;
      }
      uVar4 = /*System.String$$Contains*/ func_0x029cd7a4(extraout_x1,/*STR('snapshot:')*/ uRam0000000003d7b8a0,0);
      lVar7 = extraout_x1;
      if ((uVar4 & 1) == 0) {
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = /*System.String$$Concat*/ func_0x029bdb88(*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x158),
                                extraout_x1,0);
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
      *(undefined8 *)((long)puVar2 + -0xd0) = uVar10;
      iVar3 = /*FMOD.Studio.System$$getEvent*/ func_0x016f5ce8((undefined1 *)((long)puVar2 + -0xd0),lVar7,
                              (undefined1 *)((long)puVar2 + -200),0);
      lVar5 = 0;
      if (iVar3 == 0) {
        if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*FMODUnity.RuntimeManager$$CreateInstance*/ func_0x016e24f4(lVar7,0);
        *(undefined8 *)((long)puVar2 + -0xd8) = uVar10;
        iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c((undefined1 *)((long)puVar2 + -0xd8),0);
        if (iVar3 != 0) {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
          if (iVar3 != 0) {
            uVar10 = *(undefined8 *)((long)puVar2 + -0xd8);
            if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*FMODUnity.RuntimeManager$$AttachInstanceToGameObject*/ func_0x016e2610(uVar10,uVar9,0,0);
          }
          /*FMOD.Studio.EventInstance$$start*/ func_0x016dfb2c((undefined1 *)((long)puVar2 + -0xd8),0);
        }
        lVar5 = *(long *)((long)puVar2 + -0xd8);
      }
      return lVar5;
    }
    if ((0 < *(int *)(lVar5 + 0x18)) && (*(long *)(lVar7 + 0x48) != 0)) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)puVar2 + -0x88),lVar5,uRam0000000003d39df0);
      *(undefined8 *)((long)puVar2 + -0x68) = *(undefined8 *)((long)puVar2 + -0x80);
      *(undefined8 *)((long)puVar2 + -0x70) = *(undefined8 *)((long)puVar2 + -0x88);
      *(undefined8 *)((long)puVar2 + -0x60) = *(undefined8 *)((long)puVar2 + -0x78);
code_r0x01459c88:
      do {
        uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)puVar2 + -0x70),uRam0000000003d321f0);
        if ((uVar4 & 1) == 0) {
          lVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)puVar2 + -0x70),uRam0000000003d321e8);
          return lVar7;
        }
        if (*(long *)(lVar7 + 0x48) == 0) {
          func_0x00f78af4();
          goto code_r0x01459d48;
        }
        lVar5 = *(long *)((long)puVar2 + -0x60);
        uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0x48) + 0xb8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
      } while (iVar3 == 0 || lVar5 == 0);
      if (*(long *)(lVar7 + 0x48) == 0) {
        func_0x00f78af4();
      }
      else {
        lVar6 = *(long *)(*(long *)(lVar7 + 0x48) + 0xb8);
        if (lVar6 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar6,0);
          /*Atlas.Audio.AudioTrigger$$CalcDoppler*/ func_0x01472564(lVar5,0);
          goto code_r0x01459c88;
        }
        func_0x00f78af4();
      }
code_r0x01459d48:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1459d4c);
      (*pcVar1)();
    }
  }
  return lVar5;
}



// ============================================================
// RVA: 0x1459b80 | Atlas.Audio.AtlasAudioManager.CalculateDopplerObjects
// ============================================================

long Atlas_Audio_AtlasAudioManager__CalculateDopplerObjects(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int extraout_w1;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000003eb47ea & 1) == 0) {
    func_0x00f78a20(0x3d321e8);
    func_0x00f78a20(0x3d321f0);
    func_0x00f78a20(0x3d321f8);
    func_0x00f78a20(0x3d39df0);
    func_0x00f78a20(0x3d39df8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb47ea = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = 0;
  lVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
  if ((int)lVar3 != 0) {
    if ((*(long *)(param_1 + 0x60) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x30), lVar3 == 0)) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar6 = (long *)___cxa_begin_catch();
        lVar5 = *plVar6;
        ___cxa_end_catch();
        lVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_70,uRam0000000003d321e8);
        if (lVar5 == 0) {
          return lVar3;
        }
        func_0x00f78ac0(lVar5,0);
      }
      __Unwind_Resume();
      uStack_c0 = 0x3d23990;
      puStack_98 = &Atlas_Audio_AtlasAudioManager__StartReverb;
      puStack_a0 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb47ce & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d24568);
        func_0x00f78a20(0x3d7b8a0);
        bRam0000000003eb47ce = 1;
      }
      uStack_c8 = 0;
      if (extraout_x1 == 0) {
        func_0x00f78af4();
        puStack_e8 = &Atlas_Audio_AtlasAudioManager__StopReverb;
        uStack_f8 = extraout_x1_00;
        ppuStack_f0 = &puStack_a0;
        /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(&uStack_f8,0,0);
        lVar3 = /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(&uStack_f8,0);
        return lVar3;
      }
      uVar4 = /*System.String$$Contains*/ func_0x029cd7a4(extraout_x1,/*STR('snapshot:')*/ uRam0000000003d7b8a0,0);
      lVar3 = extraout_x1;
      if ((uVar4 & 1) == 0) {
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar3 = /*System.String$$Concat*/ func_0x029bdb88(*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x158),
                                extraout_x1,0);
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_d0 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
      iVar2 = /*FMOD.Studio.System$$getEvent*/ func_0x016f5ce8(&uStack_d0,lVar3,&uStack_c8,0);
      lStack_d8 = 0;
      if (iVar2 == 0) {
        if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lStack_d8 = /*FMODUnity.RuntimeManager$$CreateInstance*/ func_0x016e24f4(lVar3,0);
        iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(&lStack_d8,0);
        if (iVar2 != 0) {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
          lVar3 = lStack_d8;
          if (iVar2 != 0) {
            if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*FMODUnity.RuntimeManager$$AttachInstanceToGameObject*/ func_0x016e2610(lVar3,uVar7,0,0);
          }
          /*FMOD.Studio.EventInstance$$start*/ func_0x016dfb2c(&lStack_d8,0);
        }
      }
      return lStack_d8;
    }
    if ((0 < *(int *)(lVar3 + 0x18)) && (*(long *)(param_1 + 0x48) != 0)) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_88,lVar3,uRam0000000003d39df0);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      lStack_60 = lStack_78;
LAB_01459c88:
      do {
        uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_70,uRam0000000003d321f0);
        lVar3 = lStack_60;
        if ((uVar4 & 1) == 0) {
          lVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_70,uRam0000000003d321e8);
          return lVar3;
        }
        if (*(long *)(param_1 + 0x48) == 0) {
          func_0x00f78af4();
          goto code_r0x01459d48;
        }
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0xb8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
      } while (iVar2 == 0 || lVar3 == 0);
      if (*(long *)(param_1 + 0x48) == 0) {
        func_0x00f78af4();
      }
      else {
        lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0xb8);
        if (lVar5 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
          /*Atlas.Audio.AudioTrigger$$CalcDoppler*/ func_0x01472564(lVar3,0);
          goto LAB_01459c88;
        }
        func_0x00f78af4();
      }
code_r0x01459d48:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1459d4c);
      (*pcVar1)();
    }
  }
  return lVar3;
}



// ============================================================
// RVA: 0x1459da8 | Atlas.Audio.AtlasAudioManager.StartReverb
// ============================================================

undefined8
Atlas_Audio_AtlasAudioManager__StartReverb(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb47ce & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d7b8a0);
    bRam0000000003eb47ce = 1;
  }
  uStack_38 = 0;
  if (param_2 == 0) {
    func_0x00f78af4();
    puStack_58 = &Atlas_Audio_AtlasAudioManager__StopReverb;
    uStack_68 = extraout_x1;
    puStack_60 = &stack0xfffffffffffffff0;
    /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(&uStack_68,0,0);
    uVar3 = /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(&uStack_68,0);
    return uVar3;
  }
  uVar2 = /*System.String$$Contains*/ func_0x029cd7a4(param_2,/*STR('snapshot:')*/ uRam0000000003d7b8a0,0);
  if ((uVar2 & 1) == 0) {
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_2 = /*System.String$$Concat*/ func_0x029bdb88(*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x158),
                              param_2,0);
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_40 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
  iVar1 = /*FMOD.Studio.System$$getEvent*/ func_0x016f5ce8(&uStack_40,param_2,&uStack_38,0);
  uStack_48 = 0;
  if (iVar1 == 0) {
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_48 = /*FMODUnity.RuntimeManager$$CreateInstance*/ func_0x016e24f4(param_2,0);
    iVar1 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(&uStack_48,0);
    if (iVar1 != 0) {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_3,0);
      uVar3 = uStack_48;
      if (iVar1 != 0) {
        if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*FMODUnity.RuntimeManager$$AttachInstanceToGameObject*/ func_0x016e2610(uVar3,param_3,0,0);
      }
      /*FMOD.Studio.EventInstance$$start*/ func_0x016dfb2c(&uStack_48,0);
    }
  }
  return uStack_48;
}



// ============================================================
// RVA: 0x1459f74 | Atlas.Audio.AtlasAudioManager.StopReverb
// ============================================================

void Atlas_Audio_AtlasAudioManager__StopReverb(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(&uStack_18,0,0);
  /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(&uStack_18,0);
  return;
}



// ============================================================
// RVA: 0x1459fac | Atlas.Audio.AtlasAudioManager.ResetLevel
// ============================================================

/* WARNING: Possible PIC construction at 0x0145a18c: Changing call to branch */

void Atlas_Audio_AtlasAudioManager__ResetLevel(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x22;
  undefined8 ***pppuVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb47cf & 1) == 0) {
    func_0x00f78a20(0x3d6ae20);
    func_0x00f78a20(0x3d69650);
    bRam0000000003eb47cf = 1;
  }
  *(undefined4 *)(param_1 + 0x50) = 2;
  *(undefined1 *)(param_1 + 0x90) = 0;
  lVar7 = 0;
  if ((param_2 != 0) && (lVar7 = *(long *)(param_2 + 0x10), lVar7 != 0)) {
    iVar2 = /*System.String$$Contains*/ func_0x029cd7a4(lVar7,/*STR('Context')*/ uRam0000000003d6ae20,0);
    if (iVar2 != 0) {
      uVar3 = /*System.String$$Contains*/ func_0x029cd7a4(lVar7,/*STR('Battle')*/ uRam0000000003d69650,0);
      *(undefined4 *)(param_1 + 0x50) = uVar3;
    }
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (*(long *)(param_1 + 0x28) != 0) {
      /*Atlas.Audio.SpeechManager$$Reset*/ func_0x014fe274(*(long *)(param_1 + 0x28),0);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      return;
    }
  }
  auVar11 = func_0x00f78af4();
  lVar8 = auVar11._8_8_;
  lVar6 = auVar11._0_8_;
  puVar1 = auStack_70;
  puStack_38 = &Atlas_Audio_AtlasAudioManager__PauseAllAudio;
  pppuVar9 = &ppuStack_40;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb47d0 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb47d0 = 1;
  }
  uVar4 = 0x3d24568;
  if (auVar11._8_4_ == 0) {
    iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar6 + 0x78,0);
    if (iVar2 == 0) {
      return;
    }
    uStack_68 = *(undefined8 *)(lVar6 + 0x78);
    /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(&uStack_68,0,0);
    /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(&uStack_68,0);
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = 0;
    puVar10 = &UNK_0145a190;
  }
  else {
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = Atlas_Audio_AtlasAudioManager__StartReverb
                      (/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28,
                       *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x338),0);
    *(undefined8 *)(lVar6 + 0x78) = uVar4;
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = 1;
    uVar4 = 0x3eb4000;
    puVar1 = &stack0xffffffffffffffd0;
    lVar6 = param_1;
    lVar8 = lVar7;
    pppuVar9 = (undefined8 ***)ppuStack_40;
    puVar10 = puStack_38;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = uVar4;
  *(long *)(puVar1 + -0x20) = lVar8;
  *(long *)(puVar1 + -0x18) = lVar6;
  *(undefined8 ****)(puVar1 + -0x10) = pppuVar9;
  *(undefined **)(puVar1 + -8) = puVar10;
  if ((bRam0000000003eb5de4 & 1) == 0) {
    func_0x00f78a20(0x3d24568,0);
    func_0x00f78a20(0x3d780c0);
    bRam0000000003eb5de4 = 1;
  }
  *(undefined8 *)(puVar1 + -0x38) = 0;
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*FMODUnity.RuntimeManager$$get_HasBanksLoaded*/ func_0x016ec6a8();
  if (iVar2 != 0) {
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0();
    *(undefined8 *)(puVar1 + -0x40) = uVar4;
    iVar2 = /*FMOD.Studio.System$$getBus*/ func_0x016f5e68(puVar1 + -0x40,/*STR('bus:/')*/ uRam0000000003d780c0,puVar1 + -0x38,0);
    if (iVar2 == 0) {
      func_0x012453dc(*(undefined8 *)(puVar1 + -0x38),uVar5);
    }
  }
  return;
}



// ============================================================
// RVA: 0x145a078 | Atlas.Audio.AtlasAudioManager.PauseAllAudio
// ============================================================

/* WARNING: Possible PIC construction at 0x0145a18c: Changing call to branch */

void Atlas_Audio_AtlasAudioManager__PauseAllAudio(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar5;
  undefined *unaff_x30;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  puVar1 = auStack_40;
  puVar5 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb47d0 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb47d0 = 1;
  }
  uVar3 = 0x3d24568;
  if ((int)param_2 == 0) {
    iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(param_1 + 0x78,0);
    if (iVar2 == 0) {
      return;
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x78);
    /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(&uStack_38,0,0);
    /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(&uStack_38,0);
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = 0;
    unaff_x30 = &UNK_0145a190;
  }
  else {
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = Atlas_Audio_AtlasAudioManager__StartReverb
                      (/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28,
                       *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x338),0);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = 1;
    puVar1 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
    param_2 = unaff_x20;
    uVar3 = unaff_x21;
    puVar5 = unaff_x29;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = uVar3;
  *(undefined8 *)(puVar1 + -0x20) = param_2;
  *(long *)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar5;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if ((bRam0000000003eb5de4 & 1) == 0) {
    func_0x00f78a20(0x3d24568,0);
    func_0x00f78a20(0x3d780c0);
    bRam0000000003eb5de4 = 1;
  }
  *(undefined8 *)(puVar1 + -0x38) = 0;
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*FMODUnity.RuntimeManager$$get_HasBanksLoaded*/ func_0x016ec6a8();
  if (iVar2 != 0) {
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0();
    *(undefined8 *)(puVar1 + -0x40) = uVar3;
    iVar2 = /*FMOD.Studio.System$$getBus*/ func_0x016f5e68(puVar1 + -0x40,/*STR('bus:/')*/ uRam0000000003d780c0,puVar1 + -0x38,0);
    if (iVar2 == 0) {
      func_0x012453dc(*(undefined8 *)(puVar1 + -0x38),uVar4);
    }
  }
  return;
}



// ============================================================
// RVA: 0x145a1a4 | Atlas.Audio.AtlasAudioManager.PlayCountdownSFX
// ============================================================

long Atlas_Audio_AtlasAudioManager__PlayCountdownSFX(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb47d1 & 1) == 0) {
    func_0x00f78a20(0x3d71930);
    bRam0000000003eb47d1 = 1;
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0x40000000,lVar1,0,/*STR('RaceMusic_Context')*/ uRam0000000003d71930);
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  lVar1 = *(long *)(lVar1 + 0xb0);
  if (lVar1 != 0) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar1,0,0);
    return lVar1;
  }
  return 0;
}



// ============================================================
// RVA: 0x145a200 | Atlas.Audio.AtlasAudioManager.PlayPause
// ============================================================

long Atlas_Audio_AtlasAudioManager__PlayPause(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar1,0,0);
    return lVar1;
  }
  return 0;
}



// ============================================================
// RVA: 0x145a214 | Atlas.Audio.AtlasAudioManager.GetSpeechChannel
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x145a258 | Atlas.Audio.AtlasAudioManager.SpeakBoostPad
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x145a428 | Atlas.Audio.AtlasAudioManager.SpeakDriftPurple
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x145a5c8 | Atlas.Audio.AtlasAudioManager.SpeakGliding
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x145a778 | Atlas.Audio.AtlasAudioManager.SpeakHitSelf
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x145a934 | Atlas.Audio.AtlasAudioManager.SpeakHitOtherKart
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x145aad4 | Atlas.Audio.AtlasAudioManager.SpeakHitOtherKartTurd
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x145aba4 | Atlas.Audio.AtlasAudioManager.SpeakHitOtherKart
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x145ad64 | Atlas.Audio.AtlasAudioManager.SpeakCollisionAI
// ============================================================

/* WARNING: Possible PIC construction at 0x0145ae70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x0145b3ac) */
/* WARNING: Removing unreachable block (ram,0x0145b3b0) */
/* WARNING: Removing unreachable block (ram,0x0145b1dc) */
/* WARNING: Removing unreachable block (ram,0x0145b1e0) */
/* WARNING: Removing unreachable block (ram,0x0145b02c) */
/* WARNING: Removing unreachable block (ram,0x0145b030) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145ae74) */
/* WARNING: Removing unreachable block (ram,0x0145ae78) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
Atlas_Audio_AtlasAudioManager__SpeakCollisionAI
          (undefined1 param_1 [16],uint param_2,undefined4 param_3,undefined1 *param_4,long param_5,
          int *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  int **ppiVar5;
  ulong *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  long *plVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *extraout_x1;
  ulong extraout_x1_00;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  dword *pdVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x26;
  undefined8 uVar27;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar28;
  undefined8 *******pppppppuVar29;
  undefined *puVar30;
  int iVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  ulong extraout_d0;
  uint uVar36;
  undefined4 uVar37;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  int *piStack_480;
  long lStack_478;
  undefined8 *******pppppppuStack_470;
  undefined *puStack_468;
  ulong uStack_460;
  ulong uStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  undefined8 *******pppppppuStack_430;
  undefined *puStack_428;
  ulong uStack_420;
  ulong uStack_418;
  undefined8 *******pppppppuStack_3d0;
  undefined *puStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  undefined8 *******pppppppuStack_370;
  undefined *puStack_368;
  int *piStack_360;
  int *piStack_358;
  int *piStack_350;
  long lStack_348;
  undefined8 *******pppppppuStack_340;
  undefined *puStack_338;
  int *piStack_330;
  int *piStack_328;
  int *piStack_320;
  long lStack_318;
  undefined8 *******pppppppuStack_310;
  undefined *puStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  undefined8 *******pppppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 *******pppppppuStack_250;
  undefined *puStack_248;
  undefined8 *******pppppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 *******pppppppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 *******pppppppuStack_140;
  undefined *puStack_138;
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  
  auVar38._8_8_ = param_6;
  auVar38._0_8_ = param_5;
  puVar6 = (ulong *)&stack0xffffffffffffff90;
  puVar8 = param_4;
  piVar13 = param_6;
  if ((bRam0000000003eb47dc & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    puVar8 = (undefined1 *)func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47dc = 1;
  }
  piVar25 = *(int **)(param_4 + 0x30);
  if (piVar25 == (int *)0x0) {
    return puVar8;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (param_5 != 0) {
    lVar26 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x368);
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar27 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x1d8);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar41._8_8_ = uVar27;
    auVar41._0_8_ = uVar9;
    puVar30 = (undefined *)0x145ae74;
    pppppppuVar29 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto code_r0x014fe3e8;
  }
  auVar38 = func_0x00f78af4();
  lVar26 = auVar38._8_8_;
  puVar6 = (ulong *)&stack0xffffffffffffff30;
  puStack_78 = &Atlas_Audio_AtlasAudioManager__SpeakThrowProjectile;
  param_6 = piVar13;
  pppppppuStack_80 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb47d9 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47d9 = 1;
    param_6 = piVar13;
  }
  if (lVar26 != 0) {
    puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar26,0);
    if ((int)puVar8 != 0) {
      puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar26,0);
      lVar22 = 0x28;
      if ((int)puVar8 == 0) {
        lVar22 = 0x30;
      }
      lVar22 = *(long *)(auVar38._0_8_ + lVar22);
      auVar38._8_8_ = lVar22;
      auVar38._0_8_ = lVar26;
      if (lVar22 != 0) {
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        piVar25 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
        lVar26 = *(long *)(lVar26 + 0xb8);
        uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
        uVar27 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
        uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar41._8_8_ = uVar27;
        auVar41._0_8_ = uVar9;
        param_6 = (int *)((long)&MACH_HEADER.filetype + 2);
        puVar30 = &UNK_0145b02c;
        pppppppuVar29 = &pppppppuStack_80;
        goto code_r0x014fe3e8;
      }
    }
    return puVar8;
  }
  auVar38 = func_0x00f78af4();
  lVar26 = auVar38._8_8_;
  puVar6 = (ulong *)&stack0xfffffffffffffed0;
  puStack_d8 = &Atlas_Audio_AtlasAudioManager__SpeakPickupUsable;
  pppppppuStack_e0 = &pppppppuStack_80;
  if ((bRam0000000003eb47da & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47da = 1;
  }
  if (lVar26 != 0) {
    puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar26,0);
    if ((int)puVar8 != 0) {
      puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar26,0);
      lVar22 = 0x28;
      if ((int)puVar8 == 0) {
        lVar22 = 0x30;
      }
      lVar22 = *(long *)(auVar38._0_8_ + lVar22);
      auVar38._8_8_ = lVar22;
      auVar38._0_8_ = lVar26;
      if (lVar22 != 0) {
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        piVar25 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x360);
        lVar26 = *(long *)(lVar26 + 0xb8);
        uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
        uVar27 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x360);
        uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar41._8_8_ = uVar27;
        auVar41._0_8_ = uVar9;
        param_6 = (int *)0x0;
        puVar30 = &UNK_0145b1dc;
        pppppppuVar29 = &pppppppuStack_e0;
        goto code_r0x014fe3e8;
      }
    }
    return puVar8;
  }
  auVar38 = func_0x00f78af4();
  lVar26 = auVar38._8_8_;
  puVar10 = auVar38._0_8_;
  puVar6 = (ulong *)&stack0xfffffffffffffe60;
  puStack_138 = &Atlas_Audio_AtlasAudioManager__SpeakCollision;
  puVar8 = puVar10;
  piVar13 = param_6;
  pppppppuStack_140 = &pppppppuStack_e0;
  if ((bRam0000000003eb47db & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    puVar8 = (undefined1 *)func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47db = 1;
  }
  uVar36 = (uint)piVar13;
  if ((int)param_6 < 2) {
    return puVar8;
  }
  if (lVar26 != 0) {
    puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar26,0);
    if ((int)puVar8 == 0) {
      return puVar8;
    }
    if (*(float *)(puVar10 + 0x70) <= 3.0) {
      return puVar8;
    }
    puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar26,0);
    lVar26 = 0x28;
    if ((int)puVar8 == 0) {
      lVar26 = 0x30;
    }
    lVar26 = *(long *)(puVar10 + lVar26);
    if (lVar26 == 0) {
      *(undefined4 *)(puVar10 + 0x70) = 0;
      return puVar8;
    }
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar27 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x1d8);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar41._8_8_ = uVar27;
    auVar41._0_8_ = uVar9;
    puVar30 = &UNK_0145b3ac;
    piVar25 = param_6;
    pppppppuVar29 = &pppppppuStack_140;
    goto code_r0x014fe3e8;
  }
  auVar38 = func_0x00f78af4();
  lVar26 = auVar38._8_8_;
  auVar39._8_8_ = lVar26;
  auVar39._0_8_ = puVar10;
  puStack_1a8 = &Atlas_Audio_AtlasAudioManager__SpeakWinOrLose;
  pppppppuStack_1b0 = &pppppppuStack_140;
  uVar18 = uVar36;
  if ((bRam0000000003eb47dd & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47dd = 1;
  }
  if (lVar26 == 0) {
    puVar10 = (undefined1 *)func_0x00f78af4();
    puVar6 = (ulong *)&stack0xfffffffffffffdc0;
    puStack_1e8 = &Atlas_Audio_AtlasAudioManager__SpeakIntro;
    puVar8 = puVar10;
    pppppppuStack_1f0 = &pppppppuStack_1b0;
    if ((bRam0000000003eb47de & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      puVar8 = (undefined1 *)func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47de = 1;
    }
    lVar26 = *(long *)(puVar10 + 0x48);
    if ((lVar26 == 0) ||
       (auVar38._8_8_ = *(long *)(puVar10 + 0x28), auVar38._0_8_ = lVar26,
       *(long *)(puVar10 + 0x28) == 0)) {
      return puVar8;
    }
    unaff_x24 = 0x3d1ff28;
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar26 = *(long *)(puVar10 + 0x48);
      if (lVar26 == 0) {
        auVar39 = func_0x00f78af4();
        piVar13 = auVar39._8_8_;
        puVar10 = auVar39._0_8_;
        ppiVar5 = (int **)&stack0xfffffffffffffd60;
        puStack_248 = &Atlas_Audio_AtlasAudioManager__SpeakOvertake;
        pppppppuVar28 = &pppppppuStack_250;
        piVar23 = (int *)0x3eb4000;
        puVar8 = puVar10;
        pppppppuStack_250 = &pppppppuStack_1f0;
        if ((bRam0000000003eb47df & 1) == 0) {
          puVar8 = (undefined1 *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47df = 1;
        }
        if (*(int *)(puVar10 + 0x50) != 0) {
          return puVar8;
        }
        lVar26 = *(long *)(puVar10 + 0x68);
        if (lVar26 == 0) {
          return puVar8;
        }
        if ((int)(*(uint *)(lVar26 + 0x18) - 1) <= (int)uVar18) {
          return puVar8;
        }
        if ((uint)((long)(int)uVar18 + 1) < *(uint *)(lVar26 + 0x18)) {
          lVar26 = *(long *)(lVar26 + ((long)(int)uVar18 + 1) * 8 + 0x20);
          if (((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x10), lVar26 != 0)) &&
             (piVar13 != (int *)0x0)) {
            param_6 = *(int **)(lVar26 + 0x70);
            uVar14 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(piVar13,0);
            if ((uVar14 & 1) == 0) {
              if (param_6 == (int *)0x0) goto code_r0x0145b92c;
              puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_6,0);
              if ((int)puVar8 == 0) {
                return puVar8;
              }
            }
            if (((*(long *)(piVar13 + 0x2e) != 0) &&
                (uVar32 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(piVar13 + 0x2e),0), param_6 != (int *)0x0)) &&
               (*(long *)(param_6 + 0x2e) != 0)) {
              unaff_d9 = (ulong)param_2;
              uVar36 = param_2;
              uVar37 = param_3;
              uVar33 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_6 + 0x2e),0);
              fVar34 = (float)/*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(uVar32,param_2,param_3,uVar33,uVar36,uVar37,0);
              unaff_x23 = 0x3d1ff28;
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar26 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8);
              if (*(float *)(lVar26 + 0x31c) <= fVar34 || param_6 == piVar13) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
              }
              fVar34 = *(float *)(puVar10 + 0x74);
              unaff_d8 = (ulong)(uint)fVar34;
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
                lVar26 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8);
              }
              if (fVar34 < *(float *)(lVar26 + 0x318)) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
              }
              piVar23 = *(int **)(puVar10 + 0x28);
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (piVar23 != (int *)0x0) {
                piVar19 = *(int **)(piVar13 + 0x2e);
                iVar31 = piVar13[0x60];
                piVar25 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x378);
                iVar7 = 0;
                pdVar21 = &MACH_HEADER.cputype;
                puVar30 = &UNK_0145b8cc;
                piVar11 = piVar25;
                piVar17 = piVar23;
                uVar32 = 0;
                goto code_r0x014fe2a8;
              }
            }
          }
code_r0x0145b92c:
          func_0x00f78af4();
        }
        uVar9 = func_0x00f78b24();
        auVar38 = func_0x00f78ac0(uVar9,0);
        lVar26 = auVar38._8_8_;
        piVar13 = auVar38._0_8_;
        puVar6 = &uStack_300;
        puStack_2a8 = &Atlas_Audio_AtlasAudioManager__SpeakRespawning;
        piVar25 = (int *)0x3eb4000;
        uStack_300 = unaff_d9;
        uStack_2f8 = unaff_d8;
        pppppppuStack_2b0 = pppppppuVar28;
        if ((bRam0000000003eb47e0 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e0 = 1;
        }
        if (lVar26 != 0) {
          puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar26,0);
          lVar22 = 0x28;
          if ((int)puVar8 == 0) {
            lVar22 = 0x30;
          }
          piVar25 = *(int **)((long)piVar13 + lVar22);
          auVar38._8_8_ = piVar25;
          auVar38._0_8_ = lVar26;
          if (piVar25 == (int *)0x0) {
            return puVar8;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(piVar13 + 0x12) != 0) {
            piVar25 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar26 = *(long *)(*(long *)(piVar13 + 0x12) + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar27 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar41._8_8_ = uVar27;
            auVar41._0_8_ = uVar9;
            param_6 = (int *)((long)&MACH_HEADER.cputype + 1);
            puVar30 = &UNK_0145ba68;
            pppppppuVar29 = &pppppppuStack_2b0;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        piVar11 = (int *)func_0x00f78af4();
        piStack_330 = piVar23;
        piStack_328 = piVar13;
        piStack_320 = piVar25;
        lStack_318 = lVar26;
        pppppppuStack_310 = &pppppppuStack_2b0;
        puStack_308 = &Atlas_Audio_AtlasAudioManager__SpeakShield;
        piVar13 = piVar11;
        if ((bRam0000000003eb47e1 & 1) == 0) {
          piVar13 = (int *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e1 = 1;
        }
        lVar26 = *(long *)(piVar11 + 0x12);
        if (lVar26 == 0) {
          return (undefined1 *)piVar13;
        }
        piVar23 = *(int **)(piVar11 + 10);
        lVar22 = lVar26;
        pppppppuVar28 = pppppppuStack_310;
        puVar30 = puStack_308;
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) != 0)) {
joined_r0x0145bba8:
          auVar39._8_8_ = lVar26;
          auVar39._0_8_ = lStack_318;
          pppppppuStack_310 = pppppppuVar28;
          puStack_308 = puVar30;
          if (piVar23 != (int *)0x0) {
            piVar25 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
            piVar11 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
            piVar19 = *(int **)(lVar22 + 0xb8);
            iVar31 = *(int *)(lVar22 + 0x180);
            iVar7 = 10;
            pdVar21 = (dword *)((long)&MACH_HEADER.magic + 1);
            ppiVar5 = (int **)&uStack_300;
            piVar13 = piStack_320;
            param_6 = piStack_328;
            piVar17 = piStack_330;
            uVar32 = _UNK_033f813c;
            goto code_r0x014fe2a8;
          }
        }
        else {
          func_0x00f78ad0();
          lVar22 = *(long *)(piVar11 + 0x12);
          pppppppuVar28 = pppppppuStack_310;
          puVar30 = puStack_308;
          if (lVar22 != 0) goto joined_r0x0145bba8;
        }
        auVar38 = func_0x00f78af4();
        lVar22 = auVar38._8_8_;
        piStack_360 = (int *)0x3d1ff28;
        puStack_338 = &Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
        piStack_358 = piVar11;
        piStack_350 = piVar23;
        lStack_348 = lVar26;
        pppppppuStack_340 = &pppppppuStack_310;
        if ((bRam0000000003eb47e2 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e2 = 1;
        }
        if (lVar22 != 0) {
          puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar22,0);
          if ((int)puVar8 == 0) {
            return puVar8;
          }
          piVar23 = *(int **)(auVar38._0_8_ + 0x28);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar39._8_8_ = lVar22;
          auVar39._0_8_ = lStack_348;
          lVar26 = *(long *)(auVar38._0_8_ + 0x48);
          if ((lVar26 != 0) && (piVar23 != (int *)0x0)) {
            piVar25 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
            piVar11 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
            piVar19 = *(int **)(lVar26 + 0xb8);
            iVar31 = *(int *)(lVar26 + 0x180);
            uVar32 = 0;
            iVar7 = 6;
            pdVar21 = (dword *)((long)&MACH_HEADER.magic + 3);
            ppiVar5 = &piStack_330;
            piVar13 = piStack_350;
            param_6 = piStack_358;
            piVar17 = piStack_360;
            pppppppuVar28 = pppppppuStack_340;
            puVar30 = puStack_338;
            goto code_r0x014fe2a8;
          }
        }
        auVar41 = func_0x00f78af4();
        lVar26 = auVar41._8_8_;
        puVar6 = &uStack_3c0;
        puStack_368 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
        uStack_3c0 = unaff_d9;
        uStack_3b8 = unaff_d8;
        pppppppuStack_370 = &pppppppuStack_340;
        if ((bRam0000000003eb47e3 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e3 = 1;
        }
        if (lVar26 != 0) {
          puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar26,0);
          lVar22 = 0x28;
          if ((int)puVar8 == 0) {
            lVar22 = 0x30;
          }
          lVar22 = *(long *)(auVar41._0_8_ + lVar22);
          auVar38._8_8_ = lVar22;
          auVar38._0_8_ = lVar26;
          if (lVar22 == 0) {
            return puVar8;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar26 = *(long *)(auVar41._0_8_ + 0x48);
          if (lVar26 != 0) {
            piVar25 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar26 = *(long *)(lVar26 + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar27 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar41._8_8_ = uVar27;
            auVar41._0_8_ = uVar9;
            param_6 = (int *)((long)&MACH_HEADER.filetype + 3);
            puVar30 = &UNK_0145bdac;
            pppppppuVar29 = &pppppppuStack_370;
            goto code_r0x014fe3e8;
          }
        }
        auVar40 = func_0x00f78af4();
        lVar22 = auVar40._8_8_;
        lVar26 = auVar40._0_8_;
        puVar6 = &uStack_420;
        puStack_3c8 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
        pppppppuVar29 = &pppppppuStack_3d0;
        lVar24 = 0x3eb4000;
        uStack_420 = unaff_d9;
        uStack_418 = unaff_d8;
        pppppppuStack_3d0 = &pppppppuStack_370;
        if ((bRam0000000003eb47e4 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e4 = 1;
        }
        if (lVar22 != 0) {
          puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar22,0);
          lVar24 = 0x28;
          if ((int)puVar8 == 0) {
            lVar24 = 0x30;
          }
          lVar24 = *(long *)(lVar26 + lVar24);
          auVar38._8_8_ = lVar24;
          auVar38._0_8_ = lVar22;
          if (lVar24 == 0) {
            return puVar8;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(lVar26 + 0x48) != 0) {
            piVar25 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar26 = *(long *)(*(long *)(lVar26 + 0x48) + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar27 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar41._8_8_ = uVar27;
            auVar41._0_8_ = uVar9;
            param_6 = (int *)((long)&MACH_HEADER.ncmds + 1);
            puVar30 = &UNK_0145bf54;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        lVar12 = func_0x00f78af4();
        auVar39._8_8_ = extraout_x1;
        auVar39._0_8_ = lVar12;
        ppiVar5 = (int **)&uStack_460;
        uStack_450 = 0x3d1ff28;
        puStack_428 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
        pppppppuVar28 = &pppppppuStack_430;
        uStack_460 = unaff_d9;
        uStack_458 = unaff_d8;
        lStack_440 = lVar24;
        pppppppuStack_430 = pppppppuVar29;
        if ((bRam0000000003eb47e5 & 1) == 0) {
          lStack_448 = lVar26;
          lStack_438 = lVar22;
          func_0x00f78a20(0x3d1ff28);
          auVar40._8_8_ = lStack_438;
          auVar40._0_8_ = lStack_448;
          bRam0000000003eb47e5 = 1;
        }
        lStack_438 = auVar40._8_8_;
        lStack_448 = auVar40._0_8_;
        unaff_d8 = extraout_d0 & 0xffffffff;
        if (extraout_x1 == (int *)0x0) {
code_r0x0145c21c:
          lStack_438 = auVar40._8_8_;
          lStack_448 = auVar40._0_8_;
          fVar34 = (float)func_0x00f78af4();
          puStack_468 = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
          uStack_490 = unaff_d9;
          uStack_488 = unaff_d8;
          piStack_480 = extraout_x1;
          lStack_478 = lVar12;
          pppppppuStack_470 = pppppppuVar28;
          if ((bRam0000000003eb47e6 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d24568);
            bRam0000000003eb47e6 = 1;
          }
          if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uStack_498 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
          if ((((byte)/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28[0x133] >> 2 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar35 = _UNK_033f8148;
          if (fVar34 != 0.0) {
            fVar35 = fVar34;
          }
          fVar34 = INFINITY;
          if (fVar35 != -INFINITY) {
            fVar34 = ABS(SQRT(fVar35));
          }
          puVar8 = (undefined1 *)
                   /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar34,&uStack_498,
                                   *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x388),
                                   1,0);
          return puVar8;
        }
        iVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
        if ((iVar7 != 0) &&
           (puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)puVar8 == 0)) {
          return puVar8;
        }
        auVar40._8_8_ = lStack_438;
        auVar40._0_8_ = lStack_448;
        if (*(long *)(lVar12 + 0x30) == 0) goto code_r0x0145c21c;
        puVar8 = (undefined1 *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar12 + 0x30),0);
        if ((((ulong)puVar8 & 1) != 0) || (*(int *)(lVar12 + 0x50) != 1)) {
          return puVar8;
        }
        piVar17 = (int *)0x3d1ff28;
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar26 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8);
        if (*(float *)(lVar26 + 0x30) <= (float)extraout_d0) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
        }
        if (0.0 <= *(float *)(lVar12 + 0x88)) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
        }
        if ((char)extraout_x1[0xe] == '\0') {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
        }
        fVar34 = *(float *)(lVar12 + 0x8c);
        unaff_d8 = (ulong)(uint)fVar34;
        puVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
          puVar8 = (undefined1 *)func_0x00f78ad0();
          lVar26 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8);
        }
        if (fVar34 <= *(float *)(lVar26 + 800)) {
          return puVar8;
        }
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
        if (iVar7 == 2) {
          piVar23 = *(int **)(lVar12 + 0x30);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar3._8_8_ = lStack_438;
          auVar3._0_8_ = lStack_448;
          auVar40._8_8_ = lStack_438;
          auVar40._0_8_ = lStack_448;
          lVar26 = *(long *)(lVar12 + 0x48);
          if ((lVar26 == 0) || (auVar40 = auVar3, piVar23 == (int *)0x0)) goto code_r0x0145c21c;
          piVar25 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
          piVar11 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
          piVar19 = *(int **)(lVar26 + 0xb8);
          iVar31 = *(int *)(lVar26 + 0x180);
          uVar32 = 0x3f800000;
          iVar7 = 6;
        }
        else if (iVar7 == 1) {
          piVar23 = *(int **)(lVar12 + 0x30);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar40._8_8_ = lStack_438;
          auVar40._0_8_ = lStack_448;
          if (piVar23 == (int *)0x0) goto code_r0x0145c21c;
          piVar19 = *(int **)(extraout_x1 + 0x2e);
          iVar31 = extraout_x1[0x60];
          piVar25 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x378);
          uVar32 = 0;
          iVar7 = 1;
          piVar11 = piVar25;
        }
        else {
          if (iVar7 != 0) {
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            puVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
            *(undefined4 *)(lVar12 + 0x88) =
                 *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x34);
            return puVar8;
          }
          piVar23 = *(int **)(lVar12 + 0x30);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar40._8_8_ = lStack_438;
          auVar40._0_8_ = lStack_448;
          if (piVar23 == (int *)0x0) goto code_r0x0145c21c;
          piVar19 = *(int **)(extraout_x1 + 0x2e);
          iVar31 = extraout_x1[0x60];
          piVar25 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x378);
          uVar32 = 0;
          iVar7 = 0;
          piVar11 = piVar25;
        }
        pdVar21 = &MACH_HEADER.cputype;
        puVar30 = &UNK_0145c1e0;
        piVar13 = extraout_x1;
        param_6 = piVar23;
        goto code_r0x014fe2a8;
      }
    }
    piVar25 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
    lVar26 = *(long *)(lVar26 + 0xb8);
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar27 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar41._8_8_ = uVar27;
    auVar41._0_8_ = uVar9;
    param_6 = (int *)((long)&MACH_HEADER.magic + 1);
    puVar30 = &UNK_0145b660;
    pppppppuVar29 = &pppppppuStack_1f0;
code_r0x014fe3e8:
    lVar22 = auVar41._0_8_;
    *(long *)((long)puVar6 + -0x30) = lVar26;
    *(int **)((long)puVar6 + -0x28) = piVar25;
    *(long *)((long)puVar6 + -0x20) = auVar38._8_8_;
    *(long *)((long)puVar6 + -0x18) = auVar38._0_8_;
    *(undefined8 ********)((long)puVar6 + -0x10) = pppppppuVar29;
    *(undefined **)((long)puVar6 + -8) = puVar30;
    puVar8 = (undefined1 *)/*System.Object$$.ctor*/ func_0x0294d018(lVar22,0);
    *(long *)(lVar22 + 0x10) = auVar41._8_8_;
    *(float *)(lVar22 + 0x18) = (float)(int)param_6;
    return puVar8;
  }
  puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar26,0);
  if ((int)puVar8 == 0) {
    return puVar8;
  }
  uVar32 = 0x40000000;
  if (8 < uVar36) {
    uVar32 = 0x40400000;
  }
  uVar37 = 0x3f800000;
  if (3 < uVar36) {
    uVar37 = uVar32;
  }
  uVar32 = 0;
  if (1 < (int)uVar36) {
    uVar32 = uVar37;
  }
  /*Atlas.Audio.KartAudio$$OnRaceFinished*/ func_0x015c133c(lVar26,0);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar8 = (undefined1 *)
           /*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60(uVar32,auVar38._0_8_,
                           *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x370),0,0);
  piVar23 = *(int **)(auVar38._0_8_ + 0x28);
  if (piVar23 == (int *)0x0) {
    return puVar8;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  piVar19 = *(int **)(lVar26 + 0xb8);
  iVar31 = *(int *)(lVar26 + 0x180);
  piVar25 = *(int **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x370);
  iVar7 = 0;
  pdVar21 = (dword *)((long)&MACH_HEADER.magic + 1);
  ppiVar5 = (int **)&stack0xfffffffffffffe60;
  piVar11 = (int *)0x0;
  piVar13 = (int *)0x0;
  piVar17 = (int *)0x3eb4000;
  pppppppuVar28 = pppppppuStack_1b0;
  puVar30 = puStack_1a8;
  uVar32 = 0;
code_r0x014fe2a8:
  lVar26 = auVar39._8_8_;
  auVar42._8_8_ = lVar26;
  auVar42._0_8_ = piVar23;
  auVar38._8_8_ = piVar19;
  auVar38._0_8_ = pdVar21;
  puVar6 = (ulong *)((long)ppiVar5 + -0x70);
  *(ulong *)((long)ppiVar5 + -0x70) = unaff_d9;
  *(ulong *)((long)ppiVar5 + -0x68) = unaff_d8;
  *(undefined8 *)((long)ppiVar5 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppiVar5 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppiVar5 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppiVar5 + -0x48) = 0x3d1ff28;
  *(undefined8 *)((long)ppiVar5 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppiVar5 + -0x38) = unaff_x23;
  *(int **)((long)ppiVar5 + -0x30) = piVar17;
  *(int **)((long)ppiVar5 + -0x28) = param_6;
  *(int **)((long)ppiVar5 + -0x20) = piVar13;
  *(long *)((long)ppiVar5 + -0x18) = auVar39._0_8_;
  *(undefined8 ********)((long)ppiVar5 + -0x10) = pppppppuVar28;
  *(undefined **)((long)ppiVar5 + -8) = puVar30;
  param_6 = piVar25;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  if (piVar11 == (int *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = (int *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(piVar13,uRam0000000003d3bf00);
    lVar22 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar22,0);
    *(int **)(lVar22 + 0x10) = piVar11;
    *(float *)(lVar22 + 0x18) = (float)iVar7;
    if (piVar13 == (int *)0x0) {
      puVar30 = &Atlas_Audio_SpeechParam___ctor;
      auVar41 = func_0x00f78af4();
      pppppppuVar29 = (undefined8 *******)((long)ppiVar5 + -0x10);
      goto code_r0x014fe3e8;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(piVar13,lVar22,uRam0000000003d3bf08);
  }
  uVar9 = *(undefined8 *)((long)ppiVar5 + -0x50);
  uVar1 = *(undefined8 *)((long)ppiVar5 + -0x48);
  uVar27 = *(undefined8 *)((long)ppiVar5 + -0x60);
  uVar2 = *(undefined8 *)((long)ppiVar5 + -0x58);
  *(undefined8 *)((long)ppiVar5 + -0x50) = *(undefined8 *)((long)ppiVar5 + -0x70);
  *(undefined8 *)((long)ppiVar5 + -0x48) = *(undefined8 *)((long)ppiVar5 + -0x68);
  *(undefined8 *)((long)ppiVar5 + -0x40) = *(undefined8 *)((long)ppiVar5 + -0x40);
  *(undefined8 *)((long)ppiVar5 + -0x38) = *(undefined8 *)((long)ppiVar5 + -0x38);
  *(undefined8 *)((long)ppiVar5 + -0x30) = *(undefined8 *)((long)ppiVar5 + -0x30);
  *(undefined8 *)((long)ppiVar5 + -0x28) = *(undefined8 *)((long)ppiVar5 + -0x28);
  *(undefined8 *)((long)ppiVar5 + -0x20) = *(undefined8 *)((long)ppiVar5 + -0x20);
  *(undefined8 *)((long)ppiVar5 + -0x18) = *(undefined8 *)((long)ppiVar5 + -0x18);
  *(undefined8 *)((long)ppiVar5 + -0x10) = *(undefined8 *)((long)ppiVar5 + -0x10);
  *(undefined8 *)((long)ppiVar5 + -8) = *(undefined8 *)((long)ppiVar5 + -8);
  *(int *)((long)ppiVar5 + -0x54) = (int)pdVar21;
  piVar17 = piVar25;
  piVar20 = piVar19;
  piVar11 = piVar13;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(iVar31,uVar32,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if ((char)piVar23[0xd] == '\0') {
code_r0x014fe49c:
    piVar11 = (int *)((long)ppiVar5 + -0x54);
    puVar30 = &UNK_014fe4b4;
    piVar17 = piVar25;
    piVar20 = piVar13;
  }
  else {
    if (*(long *)(piVar23 + 4) != 0) {
      if (*(char *)(*(long *)(piVar23 + 4) + 0xcb) == '\0') {
        return (undefined1 *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar30 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar42 = func_0x00f78af4();
  }
  lVar24 = auVar42._8_8_;
  lVar22 = auVar42._0_8_;
  *(undefined8 *)((long)ppiVar5 + -0xc0) = uVar27;
  *(undefined8 *)((long)ppiVar5 + -0xb8) = uVar2;
  *(undefined8 *)((long)ppiVar5 + -0xb0) = uVar9;
  *(undefined8 *)((long)ppiVar5 + -0xa8) = uVar1;
  *(undefined8 *)((long)ppiVar5 + -0xa0) = 0x3eb4000;
  *(long *)((long)ppiVar5 + -0x98) = lVar26;
  *(int **)((long)ppiVar5 + -0x90) = piVar25;
  *(int **)((long)ppiVar5 + -0x88) = piVar23;
  *(int **)((long)ppiVar5 + -0x80) = piVar19;
  *(int **)((long)ppiVar5 + -0x78) = piVar13;
  *(undefined1 **)((long)ppiVar5 + -0x70) = (undefined1 *)((long)ppiVar5 + -0x10);
  *(undefined **)((long)ppiVar5 + -0x68) = puVar30;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)((long)ppiVar5 + -0xe0) = 0;
  *(undefined8 *)((long)ppiVar5 + -0xd8) = 0;
  *(undefined8 *)((long)ppiVar5 + -0xd0) = 0;
  *(undefined4 *)((long)ppiVar5 + -0xe4) = 0;
  if (*(long *)(lVar22 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar22 + 0x10) + 0x90) != '\0') {
    return (undefined1 *)0x0;
  }
  if (lVar24 == 0) goto code_r0x014fe8f8;
  uVar14 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar24,0);
  if ((uVar14 & 1) != 0) {
    return (undefined1 *)0x0;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(piVar17,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350),0
                         );
  if (iVar7 != 0) {
    if (piVar20 == (int *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)ppiVar5 + -0x100),piVar20,uRam0000000003d3bf10);
    *(undefined8 *)((long)ppiVar5 + -0xd8) = *(undefined8 *)((long)ppiVar5 + -0xf8);
    *(undefined8 *)((long)ppiVar5 + -0xe0) = *(undefined8 *)((long)ppiVar5 + -0x100);
    *(undefined8 *)((long)ppiVar5 + -0xd0) = *(undefined8 *)((long)ppiVar5 + -0xf0);
    while (uVar14 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)ppiVar5 + -0xe0),uRam0000000003d32f58),
          (uVar14 & 1) != 0) {
      lVar26 = *(long *)((long)ppiVar5 + -0xd0);
      if (lVar26 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar9 = *(undefined8 *)(lVar26 + 0x10);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar14 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar9,*(undefined8 *)
                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310),0);
      if ((uVar14 & 1) != 0) {
        fVar35 = *(float *)(lVar26 + 0x18);
        fVar34 = -fVar35;
        if (fVar35 != INFINITY) {
          fVar34 = fVar35;
        }
        *(int *)((long)ppiVar5 + -0xe4) = (int)fVar34;
        plVar15 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,(undefined1 *)((long)ppiVar5 + -0xe4)
                                         );
        if (plVar15 == (long *)0x0) goto code_r0x014fe8fc;
        uVar9 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        puVar16 = (undefined4 *)func_0x00f78ae4(plVar15);
        *(undefined4 *)((long)ppiVar5 + -0xe4) = *puVar16;
        piVar17 = (int *)/*System.String$$Concat*/ func_0x029bdb88(piVar17,uVar9,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)ppiVar5 + -0xe0),uRam0000000003d32f50);
  }
  if (*(long *)(lVar22 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar7 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar22 + 0x28),piVar17,uRam0000000003d30020);
  if (iVar7 == 0) {
code_r0x014fe888:
    puVar8 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar22 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar22 + 0x28),piVar17,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*piVar11 - 1U < 2) {
        iVar7 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      iVar7 = 1;
code_r0x014fe860:
      *piVar11 = iVar7;
    }
    iVar7 = (int)extraout_x1_00;
    if (iVar7 == 3) {
      if ((*(long *)(lVar24 + 0xa0) == 0) ||
         (lVar26 = *(long *)(*(long *)(lVar24 + 0xa0) + 0x90), lVar26 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar4)();
      }
      iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar26,0);
      if (1 < iVar7) {
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (undefined1 *)(ulong)(iVar7 < 3);
      }
      uVar14 = 2;
    }
    else {
      uVar14 = extraout_x1_00;
      if (iVar7 != 2) {
        if (iVar7 == 0) {
          puVar8 = (undefined1 *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar24,0);
          return puVar8;
        }
        goto code_r0x014fe888;
      }
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar14,0);
    puVar8 = (undefined1 *)(ulong)(iVar7 == 0);
  }
  return puVar8;
}



// ============================================================
// RVA: 0x145aef8 | Atlas.Audio.AtlasAudioManager.SpeakThrowProjectile
// ============================================================

/* WARNING: Possible PIC construction at 0x0145b028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x0145b3ac) */
/* WARNING: Removing unreachable block (ram,0x0145b3b0) */
/* WARNING: Removing unreachable block (ram,0x0145b1dc) */
/* WARNING: Removing unreachable block (ram,0x0145b1e0) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145b02c) */
/* WARNING: Removing unreachable block (ram,0x0145b030) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Audio_AtlasAudioManager__SpeakThrowProjectile
                  (undefined1 param_1 [16],uint param_2,undefined4 param_3,long param_4,
                  dword *param_5,dword *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  dword **ppdVar5;
  ulong *puVar6;
  int iVar7;
  dword *pdVar8;
  undefined8 uVar9;
  dword *pdVar10;
  dword *pdVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined4 *puVar15;
  dword *pdVar16;
  dword *extraout_x1;
  long lVar17;
  ulong extraout_x1_00;
  uint uVar18;
  dword *pdVar19;
  dword dVar20;
  dword *pdVar21;
  dword *pdVar22;
  long lVar23;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar24;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar25;
  undefined8 *******pppppppuVar26;
  undefined *puVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  ulong extraout_d0;
  uint uVar33;
  undefined4 uVar34;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  dword *pdStack_410;
  long lStack_408;
  undefined8 *******pppppppuStack_400;
  undefined *puStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  dword *pdStack_3d0;
  dword *pdStack_3c8;
  undefined8 *******pppppppuStack_3c0;
  undefined *puStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  undefined8 *******pppppppuStack_360;
  undefined *puStack_358;
  ulong uStack_350;
  ulong uStack_348;
  undefined8 *******pppppppuStack_300;
  undefined *puStack_2f8;
  dword *pdStack_2f0;
  dword *pdStack_2e8;
  dword *pdStack_2e0;
  long lStack_2d8;
  undefined8 *******pppppppuStack_2d0;
  undefined *puStack_2c8;
  dword *pdStack_2c0;
  dword *pdStack_2b8;
  dword *pdStack_2b0;
  dword *pdStack_2a8;
  undefined8 *******pppppppuStack_2a0;
  undefined *puStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined8 *******pppppppuStack_240;
  undefined *puStack_238;
  undefined8 *******pppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 *******pppppppuStack_180;
  undefined *puStack_178;
  undefined8 *******pppppppuStack_140;
  undefined *puStack_138;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  
  puVar6 = (ulong *)&stack0xffffffffffffffa0;
  if ((bRam0000000003eb47d9 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47d9 = 1;
  }
  if (param_5 != (dword *)0x0) {
    pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
    if ((int)pdVar8 == 0) {
      return pdVar8;
    }
    pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
    lVar23 = 0x28;
    if ((int)pdVar8 == 0) {
      lVar23 = 0x30;
    }
    pdVar21 = *(dword **)(param_4 + lVar23);
    if (pdVar21 == (dword *)0x0) {
      return pdVar8;
    }
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
    lVar23 = *(long *)(param_5 + 0x2e);
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar35._8_8_ = uVar24;
    auVar35._0_8_ = uVar9;
    param_6 = (dword *)((long)&MACH_HEADER.filetype + 2);
    puVar27 = (undefined *)0x145b02c;
    pppppppuVar26 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto code_r0x014fe3e8;
  }
  auVar35 = func_0x00f78af4();
  param_5 = auVar35._8_8_;
  puVar6 = (ulong *)&stack0xffffffffffffff40;
  puStack_68 = &Atlas_Audio_AtlasAudioManager__SpeakPickupUsable;
  pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb47da & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47da = 1;
  }
  if (param_5 != (dword *)0x0) {
    pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
    if ((int)pdVar8 != 0) {
      pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
      lVar23 = 0x28;
      if ((int)pdVar8 == 0) {
        lVar23 = 0x30;
      }
      pdVar21 = *(dword **)(auVar35._0_8_ + lVar23);
      if (pdVar21 != (dword *)0x0) {
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x360);
        lVar23 = *(long *)(param_5 + 0x2e);
        uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
        uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x360);
        uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar35._8_8_ = uVar24;
        auVar35._0_8_ = uVar9;
        param_6 = (dword *)0x0;
        puVar27 = &UNK_0145b1dc;
        pppppppuVar26 = &pppppppuStack_70;
        goto code_r0x014fe3e8;
      }
    }
    return pdVar8;
  }
  auVar35 = func_0x00f78af4();
  pdVar21 = auVar35._8_8_;
  param_5 = auVar35._0_8_;
  puVar6 = (ulong *)&stack0xfffffffffffffed0;
  puStack_c8 = &Atlas_Audio_AtlasAudioManager__SpeakCollision;
  pdVar8 = param_5;
  pdVar11 = param_6;
  pppppppuStack_d0 = &pppppppuStack_70;
  if ((bRam0000000003eb47db & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    pdVar8 = (dword *)func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47db = 1;
  }
  uVar33 = (uint)pdVar11;
  if ((int)param_6 < 2) {
    return pdVar8;
  }
  if (pdVar21 != (dword *)0x0) {
    pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar21,0);
    if ((int)pdVar8 == 0) {
      return pdVar8;
    }
    if ((float)param_5[0x1c] <= 3.0) {
      return pdVar8;
    }
    pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar21,0);
    lVar23 = 0x28;
    if ((int)pdVar8 == 0) {
      lVar23 = 0x30;
    }
    lVar23 = *(long *)((long)param_5 + lVar23);
    if (lVar23 == 0) {
      param_5[0x1c] = 0;
      return pdVar8;
    }
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x1d8);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar35._8_8_ = uVar24;
    auVar35._0_8_ = uVar9;
    puVar27 = &UNK_0145b3ac;
    pdVar8 = param_6;
    pppppppuVar26 = &pppppppuStack_d0;
    goto code_r0x014fe3e8;
  }
  auVar35 = func_0x00f78af4();
  lVar23 = auVar35._8_8_;
  auVar36._8_8_ = lVar23;
  auVar36._0_8_ = param_5;
  puStack_138 = &Atlas_Audio_AtlasAudioManager__SpeakWinOrLose;
  pppppppuStack_140 = &pppppppuStack_d0;
  uVar18 = uVar33;
  if ((bRam0000000003eb47dd & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47dd = 1;
  }
  if (lVar23 == 0) {
    pdVar11 = (dword *)func_0x00f78af4();
    puVar6 = (ulong *)&stack0xfffffffffffffe30;
    puStack_178 = &Atlas_Audio_AtlasAudioManager__SpeakIntro;
    pdVar8 = pdVar11;
    pppppppuStack_180 = &pppppppuStack_140;
    if ((bRam0000000003eb47de & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      pdVar8 = (dword *)func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47de = 1;
    }
    param_5 = *(dword **)(pdVar11 + 0x12);
    if ((param_5 == (dword *)0x0) || (pdVar21 = *(dword **)(pdVar11 + 10), pdVar21 == (dword *)0x0))
    {
      return pdVar8;
    }
    unaff_x24 = 0x3d1ff28;
    pdVar22 = param_5;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
      pdVar22 = *(dword **)(pdVar11 + 0x12);
      if (pdVar22 == (dword *)0x0) {
        auVar36 = func_0x00f78af4();
        pdVar11 = auVar36._8_8_;
        pdVar21 = auVar36._0_8_;
        ppdVar5 = (dword **)&stack0xfffffffffffffdd0;
        puStack_1d8 = &Atlas_Audio_AtlasAudioManager__SpeakOvertake;
        pppppppuVar25 = &pppppppuStack_1e0;
        pdVar22 = (dword *)0x3eb4000;
        pdVar8 = pdVar21;
        pppppppuStack_1e0 = &pppppppuStack_180;
        if ((bRam0000000003eb47df & 1) == 0) {
          pdVar8 = (dword *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47df = 1;
        }
        if (pdVar21[0x14] != 0) {
          return pdVar8;
        }
        lVar23 = *(long *)(pdVar21 + 0x1a);
        if (lVar23 == 0) {
          return pdVar8;
        }
        if ((int)(*(uint *)(lVar23 + 0x18) - 1) <= (int)uVar18) {
          return pdVar8;
        }
        if ((uint)((long)(int)uVar18 + 1) < *(uint *)(lVar23 + 0x18)) {
          lVar23 = *(long *)(lVar23 + ((long)(int)uVar18 + 1) * 8 + 0x20);
          if (((lVar23 != 0) && (lVar23 = *(long *)(lVar23 + 0x10), lVar23 != 0)) &&
             (pdVar11 != (dword *)0x0)) {
            param_6 = *(dword **)(lVar23 + 0x70);
            uVar13 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar11,0);
            if ((uVar13 & 1) == 0) {
              if (param_6 == (dword *)0x0) goto code_r0x0145b92c;
              pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_6,0);
              if ((int)pdVar8 == 0) {
                return pdVar8;
              }
            }
            if (((*(long *)(pdVar11 + 0x2e) != 0) &&
                (uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(pdVar11 + 0x2e),0), param_6 != (dword *)0x0)) &&
               (*(long *)(param_6 + 0x2e) != 0)) {
              unaff_d9 = (ulong)param_2;
              uVar33 = param_2;
              uVar34 = param_3;
              uVar30 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_6 + 0x2e),0);
              fVar31 = (float)/*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(uVar29,param_2,param_3,uVar30,uVar33,uVar34,0);
              unaff_x23 = 0x3d1ff28;
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
              }
              lVar23 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
              if (*(float *)(lVar23 + 0x31c) <= fVar31 || param_6 == pdVar11) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
              }
              fVar31 = (float)pdVar21[0x1d];
              unaff_d8 = (ulong)(uint)fVar31;
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
                lVar23 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
              }
              if (fVar31 < *(float *)(lVar23 + 0x318)) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
              }
              pdVar22 = *(dword **)(pdVar21 + 10);
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
              }
              if (pdVar22 != (dword *)0x0) {
                pdVar21 = *(dword **)(pdVar11 + 0x2e);
                iVar28 = pdVar11[0x60];
                pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
                iVar7 = 0;
                param_5 = &MACH_HEADER.cputype;
                puVar27 = &UNK_0145b8cc;
                pdVar10 = pdVar8;
                pdVar16 = pdVar22;
                uVar29 = 0;
                goto code_r0x014fe2a8;
              }
            }
          }
code_r0x0145b92c:
          func_0x00f78af4();
        }
        uVar9 = func_0x00f78b24();
        auVar35 = func_0x00f78ac0(uVar9,0);
        param_5 = auVar35._8_8_;
        pdVar11 = auVar35._0_8_;
        puVar6 = &uStack_290;
        puStack_238 = &Atlas_Audio_AtlasAudioManager__SpeakRespawning;
        pdVar21 = (dword *)0x3eb4000;
        uStack_290 = unaff_d9;
        uStack_288 = unaff_d8;
        pppppppuStack_240 = pppppppuVar25;
        if ((bRam0000000003eb47e0 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e0 = 1;
        }
        if (param_5 != (dword *)0x0) {
          pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
          lVar23 = 0x28;
          if ((int)pdVar8 == 0) {
            lVar23 = 0x30;
          }
          pdVar21 = *(dword **)((long)pdVar11 + lVar23);
          if (pdVar21 == (dword *)0x0) {
            return pdVar8;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(pdVar11 + 0x12) != 0) {
            pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            lVar23 = *(long *)(*(long *)(pdVar11 + 0x12) + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar35._8_8_ = uVar24;
            auVar35._0_8_ = uVar9;
            param_6 = (dword *)((long)&MACH_HEADER.cputype + 1);
            puVar27 = &UNK_0145ba68;
            pppppppuVar26 = &pppppppuStack_240;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        pdVar10 = (dword *)func_0x00f78af4();
        pdStack_2c0 = pdVar22;
        pdStack_2b8 = pdVar11;
        pdStack_2b0 = pdVar21;
        pdStack_2a8 = param_5;
        pppppppuStack_2a0 = &pppppppuStack_240;
        puStack_298 = &Atlas_Audio_AtlasAudioManager__SpeakShield;
        pdVar8 = pdVar10;
        if ((bRam0000000003eb47e1 & 1) == 0) {
          pdVar8 = (dword *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e1 = 1;
        }
        lVar23 = *(long *)(pdVar10 + 0x12);
        if (lVar23 == 0) {
          return pdVar8;
        }
        pdVar22 = *(dword **)(pdVar10 + 10);
        lVar12 = lVar23;
        pppppppuVar25 = pppppppuStack_2a0;
        puVar27 = puStack_298;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] != 0)) {
joined_r0x0145bba8:
          auVar36._8_8_ = lVar23;
          auVar36._0_8_ = pdStack_2a8;
          pppppppuStack_2a0 = pppppppuVar25;
          puStack_298 = puVar27;
          if (pdVar22 != (dword *)0x0) {
            pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            pdVar10 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            pdVar21 = *(dword **)(lVar12 + 0xb8);
            iVar28 = *(int *)(lVar12 + 0x180);
            iVar7 = 10;
            param_5 = (dword *)((long)&MACH_HEADER.magic + 1);
            ppdVar5 = (dword **)&uStack_290;
            pdVar11 = pdStack_2b0;
            param_6 = pdStack_2b8;
            pdVar16 = pdStack_2c0;
            uVar29 = _UNK_033f813c;
            goto code_r0x014fe2a8;
          }
        }
        else {
          func_0x00f78ad0();
          lVar12 = *(long *)(pdVar10 + 0x12);
          pppppppuVar25 = pppppppuStack_2a0;
          puVar27 = puStack_298;
          if (lVar12 != 0) goto joined_r0x0145bba8;
        }
        auVar35 = func_0x00f78af4();
        lVar12 = auVar35._8_8_;
        pdStack_2f0 = (dword *)0x3d1ff28;
        puStack_2c8 = &Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
        pdStack_2e8 = pdVar10;
        pdStack_2e0 = pdVar22;
        lStack_2d8 = lVar23;
        pppppppuStack_2d0 = &pppppppuStack_2a0;
        if ((bRam0000000003eb47e2 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e2 = 1;
        }
        if (lVar12 != 0) {
          pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar12,0);
          if ((int)pdVar8 == 0) {
            return pdVar8;
          }
          pdVar22 = *(dword **)(auVar35._0_8_ + 0x28);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar36._8_8_ = lVar12;
          auVar36._0_8_ = lStack_2d8;
          lVar23 = *(long *)(auVar35._0_8_ + 0x48);
          if ((lVar23 != 0) && (pdVar22 != (dword *)0x0)) {
            pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            pdVar10 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            pdVar21 = *(dword **)(lVar23 + 0xb8);
            iVar28 = *(int *)(lVar23 + 0x180);
            uVar29 = 0;
            iVar7 = 6;
            param_5 = (dword *)((long)&MACH_HEADER.magic + 3);
            ppdVar5 = &pdStack_2c0;
            pdVar11 = pdStack_2e0;
            param_6 = pdStack_2e8;
            pdVar16 = pdStack_2f0;
            pppppppuVar25 = pppppppuStack_2d0;
            puVar27 = puStack_2c8;
            goto code_r0x014fe2a8;
          }
        }
        auVar35 = func_0x00f78af4();
        param_5 = auVar35._8_8_;
        puVar6 = &uStack_350;
        puStack_2f8 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
        uStack_350 = unaff_d9;
        uStack_348 = unaff_d8;
        pppppppuStack_300 = &pppppppuStack_2d0;
        if ((bRam0000000003eb47e3 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e3 = 1;
        }
        if (param_5 != (dword *)0x0) {
          pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
          lVar23 = 0x28;
          if ((int)pdVar8 == 0) {
            lVar23 = 0x30;
          }
          pdVar21 = *(dword **)(auVar35._0_8_ + lVar23);
          if (pdVar21 == (dword *)0x0) {
            return pdVar8;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          lVar23 = *(long *)(auVar35._0_8_ + 0x48);
          if (lVar23 != 0) {
            pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            lVar23 = *(long *)(lVar23 + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar35._8_8_ = uVar24;
            auVar35._0_8_ = uVar9;
            param_6 = (dword *)((long)&MACH_HEADER.filetype + 3);
            puVar27 = &UNK_0145bdac;
            pppppppuVar26 = &pppppppuStack_300;
            goto code_r0x014fe3e8;
          }
        }
        auVar37 = func_0x00f78af4();
        param_5 = auVar37._8_8_;
        lVar23 = auVar37._0_8_;
        puVar6 = &uStack_3b0;
        puStack_358 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
        pppppppuVar26 = &pppppppuStack_360;
        pdVar21 = (dword *)0x3eb4000;
        uStack_3b0 = unaff_d9;
        uStack_3a8 = unaff_d8;
        pppppppuStack_360 = &pppppppuStack_300;
        if ((bRam0000000003eb47e4 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e4 = 1;
        }
        if (param_5 != (dword *)0x0) {
          pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
          lVar12 = 0x28;
          if ((int)pdVar8 == 0) {
            lVar12 = 0x30;
          }
          pdVar21 = *(dword **)(lVar23 + lVar12);
          if (pdVar21 == (dword *)0x0) {
            return pdVar8;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(lVar23 + 0x48) != 0) {
            pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            lVar23 = *(long *)(*(long *)(lVar23 + 0x48) + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar35._8_8_ = uVar24;
            auVar35._0_8_ = uVar9;
            param_6 = (dword *)((long)&MACH_HEADER.ncmds + 1);
            puVar27 = &UNK_0145bf54;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        lVar12 = func_0x00f78af4();
        auVar36._8_8_ = extraout_x1;
        auVar36._0_8_ = lVar12;
        ppdVar5 = (dword **)&uStack_3f0;
        uStack_3e0 = 0x3d1ff28;
        puStack_3b8 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
        pppppppuVar25 = &pppppppuStack_3c0;
        uStack_3f0 = unaff_d9;
        uStack_3e8 = unaff_d8;
        pdStack_3d0 = pdVar21;
        pppppppuStack_3c0 = pppppppuVar26;
        if ((bRam0000000003eb47e5 & 1) == 0) {
          lStack_3d8 = lVar23;
          pdStack_3c8 = param_5;
          func_0x00f78a20(0x3d1ff28);
          auVar37._8_8_ = pdStack_3c8;
          auVar37._0_8_ = lStack_3d8;
          bRam0000000003eb47e5 = 1;
        }
        pdStack_3c8 = auVar37._8_8_;
        lStack_3d8 = auVar37._0_8_;
        unaff_d8 = extraout_d0 & 0xffffffff;
        if (extraout_x1 == (dword *)0x0) {
code_r0x0145c21c:
          pdStack_3c8 = auVar37._8_8_;
          lStack_3d8 = auVar37._0_8_;
          fVar31 = (float)func_0x00f78af4();
          puStack_3f8 = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
          uStack_420 = unaff_d9;
          uStack_418 = unaff_d8;
          pdStack_410 = extraout_x1;
          lStack_408 = lVar12;
          pppppppuStack_400 = pppppppuVar25;
          if ((bRam0000000003eb47e6 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d24568);
            bRam0000000003eb47e6 = 1;
          }
          if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uStack_428 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
          if (((*(byte *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          fVar32 = _UNK_033f8148;
          if (fVar31 != 0.0) {
            fVar32 = fVar31;
          }
          fVar31 = INFINITY;
          if (fVar32 != -INFINITY) {
            fVar31 = ABS(SQRT(fVar32));
          }
          pdVar8 = (dword *)/*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar31,&uStack_428,
                                            *(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x388),1,0);
          return pdVar8;
        }
        iVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
        if ((iVar7 != 0) && (pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)pdVar8 == 0)) {
          return pdVar8;
        }
        auVar37._8_8_ = pdStack_3c8;
        auVar37._0_8_ = lStack_3d8;
        if (*(long *)(lVar12 + 0x30) == 0) goto code_r0x0145c21c;
        pdVar8 = (dword *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar12 + 0x30),0);
        if ((((ulong)pdVar8 & 1) != 0) || (*(int *)(lVar12 + 0x50) != 1)) {
          return pdVar8;
        }
        pdVar16 = (dword *)0x3d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        lVar23 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
        if (*(float *)(lVar23 + 0x30) <= (float)extraout_d0) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        }
        if (0.0 <= *(float *)(lVar12 + 0x88)) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        }
        if ((char)extraout_x1[0xe] == '\0') {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        }
        fVar31 = *(float *)(lVar12 + 0x8c);
        unaff_d8 = (ulong)(uint)fVar31;
        pdVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          pdVar8 = (dword *)func_0x00f78ad0();
          lVar23 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
        }
        if (fVar31 <= *(float *)(lVar23 + 800)) {
          return pdVar8;
        }
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
        if (iVar7 == 2) {
          pdVar22 = *(dword **)(lVar12 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar3._8_8_ = pdStack_3c8;
          auVar3._0_8_ = lStack_3d8;
          auVar37._8_8_ = pdStack_3c8;
          auVar37._0_8_ = lStack_3d8;
          lVar23 = *(long *)(lVar12 + 0x48);
          if ((lVar23 == 0) || (auVar37 = auVar3, pdVar22 == (dword *)0x0)) goto code_r0x0145c21c;
          pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
          pdVar10 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
          pdVar21 = *(dword **)(lVar23 + 0xb8);
          iVar28 = *(int *)(lVar23 + 0x180);
          uVar29 = 0x3f800000;
          iVar7 = 6;
        }
        else if (iVar7 == 1) {
          pdVar22 = *(dword **)(lVar12 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar37._8_8_ = pdStack_3c8;
          auVar37._0_8_ = lStack_3d8;
          if (pdVar22 == (dword *)0x0) goto code_r0x0145c21c;
          pdVar21 = *(dword **)(extraout_x1 + 0x2e);
          iVar28 = extraout_x1[0x60];
          pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
          uVar29 = 0;
          iVar7 = 1;
          pdVar10 = pdVar8;
        }
        else {
          if (iVar7 != 0) {
            if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
              func_0x00f78ad0();
            }
            pdVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
            *(undefined4 *)(lVar12 + 0x88) =
                 *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x34);
            return pdVar8;
          }
          pdVar22 = *(dword **)(lVar12 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar37._8_8_ = pdStack_3c8;
          auVar37._0_8_ = lStack_3d8;
          if (pdVar22 == (dword *)0x0) goto code_r0x0145c21c;
          pdVar21 = *(dword **)(extraout_x1 + 0x2e);
          iVar28 = extraout_x1[0x60];
          pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
          uVar29 = 0;
          iVar7 = 0;
          pdVar10 = pdVar8;
        }
        param_5 = &MACH_HEADER.cputype;
        puVar27 = &UNK_0145c1e0;
        pdVar11 = extraout_x1;
        param_6 = pdVar22;
        goto code_r0x014fe2a8;
      }
    }
    pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
    lVar23 = *(long *)(pdVar22 + 0x2e);
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar35._8_8_ = uVar24;
    auVar35._0_8_ = uVar9;
    param_6 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar27 = &UNK_0145b660;
    pppppppuVar26 = &pppppppuStack_180;
code_r0x014fe3e8:
    lVar12 = auVar35._0_8_;
    *(long *)((long)puVar6 + -0x30) = lVar23;
    *(dword **)((long)puVar6 + -0x28) = pdVar8;
    *(dword **)((long)puVar6 + -0x20) = pdVar21;
    *(dword **)((long)puVar6 + -0x18) = param_5;
    *(undefined8 ********)((long)puVar6 + -0x10) = pppppppuVar26;
    *(undefined **)((long)puVar6 + -8) = puVar27;
    pdVar8 = (dword *)/*System.Object$$.ctor*/ func_0x0294d018(lVar12,0);
    *(long *)(lVar12 + 0x10) = auVar35._8_8_;
    *(float *)(lVar12 + 0x18) = (float)(int)param_6;
    return pdVar8;
  }
  pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar23,0);
  if ((int)pdVar8 == 0) {
    return pdVar8;
  }
  uVar29 = 0x40000000;
  if (8 < uVar33) {
    uVar29 = 0x40400000;
  }
  uVar34 = 0x3f800000;
  if (3 < uVar33) {
    uVar34 = uVar29;
  }
  uVar29 = 0;
  if (1 < (int)uVar33) {
    uVar29 = uVar34;
  }
  /*Atlas.Audio.KartAudio$$OnRaceFinished*/ func_0x015c133c(lVar23,0);
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  pdVar8 = (dword *)/*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60(uVar29,auVar35._0_8_,
                                    *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x370)
                                    ,0,0);
  pdVar22 = *(dword **)(auVar35._0_8_ + 0x28);
  if (pdVar22 == (dword *)0x0) {
    return pdVar8;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  pdVar21 = *(dword **)(lVar23 + 0xb8);
  iVar28 = *(int *)(lVar23 + 0x180);
  pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x370);
  iVar7 = 0;
  param_5 = (dword *)((long)&MACH_HEADER.magic + 1);
  ppdVar5 = (dword **)&stack0xfffffffffffffed0;
  pdVar10 = (dword *)0x0;
  pdVar11 = (dword *)0x0;
  pdVar16 = (dword *)0x3eb4000;
  pppppppuVar25 = pppppppuStack_140;
  puVar27 = puStack_138;
  uVar29 = 0;
code_r0x014fe2a8:
  lVar23 = auVar36._8_8_;
  auVar38._8_8_ = lVar23;
  auVar38._0_8_ = pdVar22;
  puVar6 = (ulong *)((long)ppdVar5 + -0x70);
  *(ulong *)((long)ppdVar5 + -0x70) = unaff_d9;
  *(ulong *)((long)ppdVar5 + -0x68) = unaff_d8;
  *(undefined8 *)((long)ppdVar5 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppdVar5 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppdVar5 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppdVar5 + -0x48) = unaff_x25;
  *(undefined8 *)((long)ppdVar5 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppdVar5 + -0x38) = unaff_x23;
  *(dword **)((long)ppdVar5 + -0x30) = pdVar16;
  *(dword **)((long)ppdVar5 + -0x28) = param_6;
  *(dword **)((long)ppdVar5 + -0x20) = pdVar11;
  *(long *)((long)ppdVar5 + -0x18) = auVar36._0_8_;
  *(undefined8 ********)((long)ppdVar5 + -0x10) = pppppppuVar25;
  *(undefined **)((long)ppdVar5 + -8) = puVar27;
  param_6 = pdVar8;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  if (pdVar10 == (dword *)0x0) {
    pdVar11 = (dword *)0x0;
  }
  else {
    pdVar11 = (dword *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(pdVar11,uRam0000000003d3bf00);
    lVar12 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar12,0);
    *(dword **)(lVar12 + 0x10) = pdVar10;
    *(float *)(lVar12 + 0x18) = (float)iVar7;
    if (pdVar11 == (dword *)0x0) {
      puVar27 = &Atlas_Audio_SpeechParam___ctor;
      auVar35 = func_0x00f78af4();
      pppppppuVar26 = (undefined8 *******)((long)ppdVar5 + -0x10);
      goto code_r0x014fe3e8;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(pdVar11,lVar12,uRam0000000003d3bf08);
  }
  uVar9 = *(undefined8 *)((long)ppdVar5 + -0x50);
  uVar1 = *(undefined8 *)((long)ppdVar5 + -0x48);
  uVar24 = *(undefined8 *)((long)ppdVar5 + -0x60);
  uVar2 = *(undefined8 *)((long)ppdVar5 + -0x58);
  *(undefined8 *)((long)ppdVar5 + -0x50) = *(undefined8 *)((long)ppdVar5 + -0x70);
  *(undefined8 *)((long)ppdVar5 + -0x48) = *(undefined8 *)((long)ppdVar5 + -0x68);
  *(undefined8 *)((long)ppdVar5 + -0x40) = *(undefined8 *)((long)ppdVar5 + -0x40);
  *(undefined8 *)((long)ppdVar5 + -0x38) = *(undefined8 *)((long)ppdVar5 + -0x38);
  *(undefined8 *)((long)ppdVar5 + -0x30) = *(undefined8 *)((long)ppdVar5 + -0x30);
  *(undefined8 *)((long)ppdVar5 + -0x28) = *(undefined8 *)((long)ppdVar5 + -0x28);
  *(undefined8 *)((long)ppdVar5 + -0x20) = *(undefined8 *)((long)ppdVar5 + -0x20);
  *(undefined8 *)((long)ppdVar5 + -0x18) = *(undefined8 *)((long)ppdVar5 + -0x18);
  *(undefined8 *)((long)ppdVar5 + -0x10) = *(undefined8 *)((long)ppdVar5 + -0x10);
  *(undefined8 *)((long)ppdVar5 + -8) = *(undefined8 *)((long)ppdVar5 + -8);
  *(int *)((long)ppdVar5 + -0x54) = (int)param_5;
  pdVar16 = pdVar8;
  pdVar19 = pdVar21;
  pdVar10 = pdVar11;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(iVar28,uVar29,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if ((char)pdVar22[0xd] == '\0') {
code_r0x014fe49c:
    pdVar10 = (dword *)((long)ppdVar5 + -0x54);
    puVar27 = &UNK_014fe4b4;
    pdVar16 = pdVar8;
    pdVar19 = pdVar11;
  }
  else {
    if (*(long *)(pdVar22 + 4) != 0) {
      if (*(char *)(*(long *)(pdVar22 + 4) + 0xcb) == '\0') {
        return (dword *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar27 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar38 = func_0x00f78af4();
  }
  lVar17 = auVar38._8_8_;
  lVar12 = auVar38._0_8_;
  *(undefined8 *)((long)ppdVar5 + -0xc0) = uVar24;
  *(undefined8 *)((long)ppdVar5 + -0xb8) = uVar2;
  *(undefined8 *)((long)ppdVar5 + -0xb0) = uVar9;
  *(undefined8 *)((long)ppdVar5 + -0xa8) = uVar1;
  *(undefined8 *)((long)ppdVar5 + -0xa0) = 0x3eb4000;
  *(long *)((long)ppdVar5 + -0x98) = lVar23;
  *(dword **)((long)ppdVar5 + -0x90) = pdVar8;
  *(dword **)((long)ppdVar5 + -0x88) = pdVar22;
  *(dword **)((long)ppdVar5 + -0x80) = pdVar21;
  *(dword **)((long)ppdVar5 + -0x78) = pdVar11;
  *(undefined1 **)((long)ppdVar5 + -0x70) = (undefined1 *)((long)ppdVar5 + -0x10);
  *(undefined **)((long)ppdVar5 + -0x68) = puVar27;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)((long)ppdVar5 + -0xe0) = 0;
  *(undefined8 *)((long)ppdVar5 + -0xd8) = 0;
  *(undefined8 *)((long)ppdVar5 + -0xd0) = 0;
  *(undefined4 *)((long)ppdVar5 + -0xe4) = 0;
  if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar12 + 0x10) + 0x90) != '\0') {
    return (dword *)0x0;
  }
  if (lVar17 == 0) goto code_r0x014fe8f8;
  uVar13 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar17,0);
  if ((uVar13 & 1) != 0) {
    return (dword *)0x0;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(pdVar16,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350),0
                         );
  if (iVar7 != 0) {
    if (pdVar19 == (dword *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)ppdVar5 + -0x100),pdVar19,uRam0000000003d3bf10);
    *(undefined8 *)((long)ppdVar5 + -0xd8) = *(undefined8 *)((long)ppdVar5 + -0xf8);
    *(undefined8 *)((long)ppdVar5 + -0xe0) = *(undefined8 *)((long)ppdVar5 + -0x100);
    *(undefined8 *)((long)ppdVar5 + -0xd0) = *(undefined8 *)((long)ppdVar5 + -0xf0);
    while (uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)ppdVar5 + -0xe0),uRam0000000003d32f58),
          (uVar13 & 1) != 0) {
      lVar23 = *(long *)((long)ppdVar5 + -0xd0);
      if (lVar23 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar9 = *(undefined8 *)(lVar23 + 0x10);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      uVar13 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar9,*(undefined8 *)
                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310),0);
      if ((uVar13 & 1) != 0) {
        fVar32 = *(float *)(lVar23 + 0x18);
        fVar31 = -fVar32;
        if (fVar32 != INFINITY) {
          fVar31 = fVar32;
        }
        *(int *)((long)ppdVar5 + -0xe4) = (int)fVar31;
        plVar14 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,(undefined1 *)((long)ppdVar5 + -0xe4)
                                         );
        if (plVar14 == (long *)0x0) goto code_r0x014fe8fc;
        uVar9 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        puVar15 = (undefined4 *)func_0x00f78ae4(plVar14);
        *(undefined4 *)((long)ppdVar5 + -0xe4) = *puVar15;
        pdVar16 = (dword *)/*System.String$$Concat*/ func_0x029bdb88(pdVar16,uVar9,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)ppdVar5 + -0xe0),uRam0000000003d32f50);
  }
  if (*(long *)(lVar12 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar7 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar12 + 0x28),pdVar16,uRam0000000003d30020);
  if (iVar7 == 0) {
code_r0x014fe888:
    pdVar8 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar12 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar12 + 0x28),pdVar16,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*pdVar10 - 1 < 2) {
        dVar20 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      dVar20 = 1;
code_r0x014fe860:
      *pdVar10 = dVar20;
    }
    iVar7 = (int)extraout_x1_00;
    if (iVar7 == 3) {
      if ((*(long *)(lVar17 + 0xa0) == 0) ||
         (lVar23 = *(long *)(*(long *)(lVar17 + 0xa0) + 0x90), lVar23 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar4)();
      }
      iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar23,0);
      if (1 < iVar7) {
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (dword *)(ulong)(iVar7 < 3);
      }
      uVar13 = 2;
    }
    else {
      uVar13 = extraout_x1_00;
      if (iVar7 != 2) {
        if (iVar7 == 0) {
          pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar17,0);
          return pdVar8;
        }
        goto code_r0x014fe888;
      }
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar13,0);
    pdVar8 = (dword *)(ulong)(iVar7 == 0);
  }
  return pdVar8;
}



// ============================================================
// RVA: 0x145b0a8 | Atlas.Audio.AtlasAudioManager.SpeakPickupUsable
// ============================================================

/* WARNING: Possible PIC construction at 0x0145b1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x0145b3ac) */
/* WARNING: Removing unreachable block (ram,0x0145b3b0) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145b1dc) */
/* WARNING: Removing unreachable block (ram,0x0145b1e0) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Audio_AtlasAudioManager__SpeakPickupUsable
                  (undefined1 param_1 [16],uint param_2,undefined4 param_3,long param_4,
                  dword *param_5,dword *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  dword **ppdVar5;
  ulong *puVar6;
  int iVar7;
  dword *pdVar8;
  undefined8 uVar9;
  dword *pdVar10;
  dword *pdVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined4 *puVar15;
  dword *pdVar16;
  dword *extraout_x1;
  long lVar17;
  ulong extraout_x1_00;
  uint uVar18;
  dword *pdVar19;
  dword dVar20;
  dword *pdVar21;
  dword *pdVar22;
  long lVar23;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar24;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar25;
  undefined8 *******pppppppuVar26;
  undefined *puVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  ulong extraout_d0;
  uint uVar33;
  undefined4 uVar34;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  dword *pdStack_3b0;
  long lStack_3a8;
  undefined8 *******pppppppuStack_3a0;
  undefined *puStack_398;
  ulong uStack_390;
  ulong uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  dword *pdStack_370;
  dword *pdStack_368;
  undefined8 *******pppppppuStack_360;
  undefined *puStack_358;
  ulong uStack_350;
  ulong uStack_348;
  undefined8 *******pppppppuStack_300;
  undefined *puStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined8 *******pppppppuStack_2a0;
  undefined *puStack_298;
  dword *pdStack_290;
  dword *pdStack_288;
  dword *pdStack_280;
  long lStack_278;
  undefined8 *******pppppppuStack_270;
  undefined *puStack_268;
  dword *pdStack_260;
  dword *pdStack_258;
  dword *pdStack_250;
  dword *pdStack_248;
  undefined8 *******pppppppuStack_240;
  undefined *puStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 *******pppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 *******pppppppuStack_180;
  undefined *puStack_178;
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  
  puVar6 = (ulong *)&stack0xffffffffffffffa0;
  if ((bRam0000000003eb47da & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47da = 1;
  }
  if (param_5 != (dword *)0x0) {
    pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
    if ((int)pdVar8 == 0) {
      return pdVar8;
    }
    pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
    lVar23 = 0x28;
    if ((int)pdVar8 == 0) {
      lVar23 = 0x30;
    }
    pdVar21 = *(dword **)(param_4 + lVar23);
    if (pdVar21 == (dword *)0x0) {
      return pdVar8;
    }
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x360);
    lVar23 = *(long *)(param_5 + 0x2e);
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x360);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar35._8_8_ = uVar24;
    auVar35._0_8_ = uVar9;
    param_6 = (dword *)0x0;
    puVar27 = (undefined *)0x145b1dc;
    pppppppuVar26 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto code_r0x014fe3e8;
  }
  auVar35 = func_0x00f78af4();
  pdVar21 = auVar35._8_8_;
  param_5 = auVar35._0_8_;
  puVar6 = (ulong *)&stack0xffffffffffffff30;
  puStack_68 = &Atlas_Audio_AtlasAudioManager__SpeakCollision;
  pdVar8 = param_5;
  pdVar11 = param_6;
  pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb47db & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    pdVar8 = (dword *)func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47db = 1;
  }
  uVar33 = (uint)pdVar11;
  if ((int)param_6 < 2) {
    return pdVar8;
  }
  if (pdVar21 != (dword *)0x0) {
    pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar21,0);
    if ((int)pdVar8 == 0) {
      return pdVar8;
    }
    if ((float)param_5[0x1c] <= 3.0) {
      return pdVar8;
    }
    pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar21,0);
    lVar23 = 0x28;
    if ((int)pdVar8 == 0) {
      lVar23 = 0x30;
    }
    lVar23 = *(long *)((long)param_5 + lVar23);
    if (lVar23 == 0) {
      param_5[0x1c] = 0;
      return pdVar8;
    }
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x1d8);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar35._8_8_ = uVar24;
    auVar35._0_8_ = uVar9;
    puVar27 = &UNK_0145b3ac;
    pdVar8 = param_6;
    pppppppuVar26 = &pppppppuStack_70;
    goto code_r0x014fe3e8;
  }
  auVar35 = func_0x00f78af4();
  lVar23 = auVar35._8_8_;
  auVar36._8_8_ = lVar23;
  auVar36._0_8_ = param_5;
  puStack_d8 = &Atlas_Audio_AtlasAudioManager__SpeakWinOrLose;
  pppppppuStack_e0 = &pppppppuStack_70;
  uVar18 = uVar33;
  if ((bRam0000000003eb47dd & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47dd = 1;
  }
  if (lVar23 == 0) {
    pdVar11 = (dword *)func_0x00f78af4();
    puVar6 = (ulong *)&stack0xfffffffffffffe90;
    puStack_118 = &Atlas_Audio_AtlasAudioManager__SpeakIntro;
    pdVar8 = pdVar11;
    pppppppuStack_120 = &pppppppuStack_e0;
    if ((bRam0000000003eb47de & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      pdVar8 = (dword *)func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47de = 1;
    }
    param_5 = *(dword **)(pdVar11 + 0x12);
    if ((param_5 == (dword *)0x0) || (pdVar21 = *(dword **)(pdVar11 + 10), pdVar21 == (dword *)0x0))
    {
      return pdVar8;
    }
    unaff_x24 = 0x3d1ff28;
    pdVar22 = param_5;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
      pdVar22 = *(dword **)(pdVar11 + 0x12);
      if (pdVar22 == (dword *)0x0) {
        auVar36 = func_0x00f78af4();
        pdVar11 = auVar36._8_8_;
        pdVar21 = auVar36._0_8_;
        ppdVar5 = (dword **)&stack0xfffffffffffffe30;
        puStack_178 = &Atlas_Audio_AtlasAudioManager__SpeakOvertake;
        pppppppuVar25 = &pppppppuStack_180;
        pdVar22 = (dword *)0x3eb4000;
        pdVar8 = pdVar21;
        pppppppuStack_180 = &pppppppuStack_120;
        if ((bRam0000000003eb47df & 1) == 0) {
          pdVar8 = (dword *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47df = 1;
        }
        if (pdVar21[0x14] != 0) {
          return pdVar8;
        }
        lVar23 = *(long *)(pdVar21 + 0x1a);
        if (lVar23 == 0) {
          return pdVar8;
        }
        if ((int)(*(uint *)(lVar23 + 0x18) - 1) <= (int)uVar18) {
          return pdVar8;
        }
        if ((uint)((long)(int)uVar18 + 1) < *(uint *)(lVar23 + 0x18)) {
          lVar23 = *(long *)(lVar23 + ((long)(int)uVar18 + 1) * 8 + 0x20);
          if (((lVar23 != 0) && (lVar23 = *(long *)(lVar23 + 0x10), lVar23 != 0)) &&
             (pdVar11 != (dword *)0x0)) {
            param_6 = *(dword **)(lVar23 + 0x70);
            uVar13 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar11,0);
            if ((uVar13 & 1) == 0) {
              if (param_6 == (dword *)0x0) goto code_r0x0145b92c;
              pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_6,0);
              if ((int)pdVar8 == 0) {
                return pdVar8;
              }
            }
            if (((*(long *)(pdVar11 + 0x2e) != 0) &&
                (uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(pdVar11 + 0x2e),0), param_6 != (dword *)0x0)) &&
               (*(long *)(param_6 + 0x2e) != 0)) {
              unaff_d9 = (ulong)param_2;
              uVar33 = param_2;
              uVar34 = param_3;
              uVar30 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_6 + 0x2e),0);
              fVar31 = (float)/*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(uVar29,param_2,param_3,uVar30,uVar33,uVar34,0);
              unaff_x23 = 0x3d1ff28;
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
              }
              lVar23 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
              if (*(float *)(lVar23 + 0x31c) <= fVar31 || param_6 == pdVar11) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
              }
              fVar31 = (float)pdVar21[0x1d];
              unaff_d8 = (ulong)(uint)fVar31;
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
                lVar23 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
              }
              if (fVar31 < *(float *)(lVar23 + 0x318)) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
              }
              pdVar22 = *(dword **)(pdVar21 + 10);
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
              }
              if (pdVar22 != (dword *)0x0) {
                pdVar21 = *(dword **)(pdVar11 + 0x2e);
                iVar28 = pdVar11[0x60];
                pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
                iVar7 = 0;
                param_5 = &MACH_HEADER.cputype;
                puVar27 = &UNK_0145b8cc;
                pdVar10 = pdVar8;
                pdVar16 = pdVar22;
                uVar29 = 0;
                goto code_r0x014fe2a8;
              }
            }
          }
code_r0x0145b92c:
          func_0x00f78af4();
        }
        uVar9 = func_0x00f78b24();
        auVar35 = func_0x00f78ac0(uVar9,0);
        param_5 = auVar35._8_8_;
        pdVar11 = auVar35._0_8_;
        puVar6 = &uStack_230;
        puStack_1d8 = &Atlas_Audio_AtlasAudioManager__SpeakRespawning;
        pdVar21 = (dword *)0x3eb4000;
        uStack_230 = unaff_d9;
        uStack_228 = unaff_d8;
        pppppppuStack_1e0 = pppppppuVar25;
        if ((bRam0000000003eb47e0 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e0 = 1;
        }
        if (param_5 != (dword *)0x0) {
          pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
          lVar23 = 0x28;
          if ((int)pdVar8 == 0) {
            lVar23 = 0x30;
          }
          pdVar21 = *(dword **)((long)pdVar11 + lVar23);
          if (pdVar21 == (dword *)0x0) {
            return pdVar8;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(pdVar11 + 0x12) != 0) {
            pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            lVar23 = *(long *)(*(long *)(pdVar11 + 0x12) + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar35._8_8_ = uVar24;
            auVar35._0_8_ = uVar9;
            param_6 = (dword *)((long)&MACH_HEADER.cputype + 1);
            puVar27 = &UNK_0145ba68;
            pppppppuVar26 = &pppppppuStack_1e0;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        pdVar10 = (dword *)func_0x00f78af4();
        pdStack_260 = pdVar22;
        pdStack_258 = pdVar11;
        pdStack_250 = pdVar21;
        pdStack_248 = param_5;
        pppppppuStack_240 = &pppppppuStack_1e0;
        puStack_238 = &Atlas_Audio_AtlasAudioManager__SpeakShield;
        pdVar8 = pdVar10;
        if ((bRam0000000003eb47e1 & 1) == 0) {
          pdVar8 = (dword *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e1 = 1;
        }
        lVar23 = *(long *)(pdVar10 + 0x12);
        if (lVar23 == 0) {
          return pdVar8;
        }
        pdVar22 = *(dword **)(pdVar10 + 10);
        lVar12 = lVar23;
        pppppppuVar25 = pppppppuStack_240;
        puVar27 = puStack_238;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] != 0)) {
joined_r0x0145bba8:
          auVar36._8_8_ = lVar23;
          auVar36._0_8_ = pdStack_248;
          pppppppuStack_240 = pppppppuVar25;
          puStack_238 = puVar27;
          if (pdVar22 != (dword *)0x0) {
            pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            pdVar10 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            pdVar21 = *(dword **)(lVar12 + 0xb8);
            iVar28 = *(int *)(lVar12 + 0x180);
            iVar7 = 10;
            param_5 = (dword *)((long)&MACH_HEADER.magic + 1);
            ppdVar5 = (dword **)&uStack_230;
            pdVar11 = pdStack_250;
            param_6 = pdStack_258;
            pdVar16 = pdStack_260;
            uVar29 = _UNK_033f813c;
            goto code_r0x014fe2a8;
          }
        }
        else {
          func_0x00f78ad0();
          lVar12 = *(long *)(pdVar10 + 0x12);
          pppppppuVar25 = pppppppuStack_240;
          puVar27 = puStack_238;
          if (lVar12 != 0) goto joined_r0x0145bba8;
        }
        auVar35 = func_0x00f78af4();
        lVar12 = auVar35._8_8_;
        pdStack_290 = (dword *)0x3d1ff28;
        puStack_268 = &Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
        pdStack_288 = pdVar10;
        pdStack_280 = pdVar22;
        lStack_278 = lVar23;
        pppppppuStack_270 = &pppppppuStack_240;
        if ((bRam0000000003eb47e2 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e2 = 1;
        }
        if (lVar12 != 0) {
          pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar12,0);
          if ((int)pdVar8 == 0) {
            return pdVar8;
          }
          pdVar22 = *(dword **)(auVar35._0_8_ + 0x28);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar36._8_8_ = lVar12;
          auVar36._0_8_ = lStack_278;
          lVar23 = *(long *)(auVar35._0_8_ + 0x48);
          if ((lVar23 != 0) && (pdVar22 != (dword *)0x0)) {
            pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            pdVar10 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            pdVar21 = *(dword **)(lVar23 + 0xb8);
            iVar28 = *(int *)(lVar23 + 0x180);
            uVar29 = 0;
            iVar7 = 6;
            param_5 = (dword *)((long)&MACH_HEADER.magic + 3);
            ppdVar5 = &pdStack_260;
            pdVar11 = pdStack_280;
            param_6 = pdStack_288;
            pdVar16 = pdStack_290;
            pppppppuVar25 = pppppppuStack_270;
            puVar27 = puStack_268;
            goto code_r0x014fe2a8;
          }
        }
        auVar35 = func_0x00f78af4();
        param_5 = auVar35._8_8_;
        puVar6 = &uStack_2f0;
        puStack_298 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
        uStack_2f0 = unaff_d9;
        uStack_2e8 = unaff_d8;
        pppppppuStack_2a0 = &pppppppuStack_270;
        if ((bRam0000000003eb47e3 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e3 = 1;
        }
        if (param_5 != (dword *)0x0) {
          pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
          lVar23 = 0x28;
          if ((int)pdVar8 == 0) {
            lVar23 = 0x30;
          }
          pdVar21 = *(dword **)(auVar35._0_8_ + lVar23);
          if (pdVar21 == (dword *)0x0) {
            return pdVar8;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          lVar23 = *(long *)(auVar35._0_8_ + 0x48);
          if (lVar23 != 0) {
            pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            lVar23 = *(long *)(lVar23 + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar35._8_8_ = uVar24;
            auVar35._0_8_ = uVar9;
            param_6 = (dword *)((long)&MACH_HEADER.filetype + 3);
            puVar27 = &UNK_0145bdac;
            pppppppuVar26 = &pppppppuStack_2a0;
            goto code_r0x014fe3e8;
          }
        }
        auVar37 = func_0x00f78af4();
        param_5 = auVar37._8_8_;
        lVar23 = auVar37._0_8_;
        puVar6 = &uStack_350;
        puStack_2f8 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
        pppppppuVar26 = &pppppppuStack_300;
        pdVar21 = (dword *)0x3eb4000;
        uStack_350 = unaff_d9;
        uStack_348 = unaff_d8;
        pppppppuStack_300 = &pppppppuStack_2a0;
        if ((bRam0000000003eb47e4 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e4 = 1;
        }
        if (param_5 != (dword *)0x0) {
          pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
          lVar12 = 0x28;
          if ((int)pdVar8 == 0) {
            lVar12 = 0x30;
          }
          pdVar21 = *(dword **)(lVar23 + lVar12);
          if (pdVar21 == (dword *)0x0) {
            return pdVar8;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(lVar23 + 0x48) != 0) {
            pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            lVar23 = *(long *)(*(long *)(lVar23 + 0x48) + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar35._8_8_ = uVar24;
            auVar35._0_8_ = uVar9;
            param_6 = (dword *)((long)&MACH_HEADER.ncmds + 1);
            puVar27 = &UNK_0145bf54;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        lVar12 = func_0x00f78af4();
        auVar36._8_8_ = extraout_x1;
        auVar36._0_8_ = lVar12;
        ppdVar5 = (dword **)&uStack_390;
        uStack_380 = 0x3d1ff28;
        puStack_358 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
        pppppppuVar25 = &pppppppuStack_360;
        uStack_390 = unaff_d9;
        uStack_388 = unaff_d8;
        pdStack_370 = pdVar21;
        pppppppuStack_360 = pppppppuVar26;
        if ((bRam0000000003eb47e5 & 1) == 0) {
          lStack_378 = lVar23;
          pdStack_368 = param_5;
          func_0x00f78a20(0x3d1ff28);
          auVar37._8_8_ = pdStack_368;
          auVar37._0_8_ = lStack_378;
          bRam0000000003eb47e5 = 1;
        }
        pdStack_368 = auVar37._8_8_;
        lStack_378 = auVar37._0_8_;
        unaff_d8 = extraout_d0 & 0xffffffff;
        if (extraout_x1 == (dword *)0x0) {
code_r0x0145c21c:
          pdStack_368 = auVar37._8_8_;
          lStack_378 = auVar37._0_8_;
          fVar31 = (float)func_0x00f78af4();
          puStack_398 = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
          uStack_3c0 = unaff_d9;
          uStack_3b8 = unaff_d8;
          pdStack_3b0 = extraout_x1;
          lStack_3a8 = lVar12;
          pppppppuStack_3a0 = pppppppuVar25;
          if ((bRam0000000003eb47e6 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d24568);
            bRam0000000003eb47e6 = 1;
          }
          if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uStack_3c8 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
          if (((*(byte *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          fVar32 = _UNK_033f8148;
          if (fVar31 != 0.0) {
            fVar32 = fVar31;
          }
          fVar31 = INFINITY;
          if (fVar32 != -INFINITY) {
            fVar31 = ABS(SQRT(fVar32));
          }
          pdVar8 = (dword *)/*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar31,&uStack_3c8,
                                            *(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x388),1,0);
          return pdVar8;
        }
        iVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
        if ((iVar7 != 0) && (pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)pdVar8 == 0)) {
          return pdVar8;
        }
        auVar37._8_8_ = pdStack_368;
        auVar37._0_8_ = lStack_378;
        if (*(long *)(lVar12 + 0x30) == 0) goto code_r0x0145c21c;
        pdVar8 = (dword *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar12 + 0x30),0);
        if ((((ulong)pdVar8 & 1) != 0) || (*(int *)(lVar12 + 0x50) != 1)) {
          return pdVar8;
        }
        pdVar16 = (dword *)0x3d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        lVar23 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
        if (*(float *)(lVar23 + 0x30) <= (float)extraout_d0) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        }
        if (0.0 <= *(float *)(lVar12 + 0x88)) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        }
        if ((char)extraout_x1[0xe] == '\0') {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        }
        fVar31 = *(float *)(lVar12 + 0x8c);
        unaff_d8 = (ulong)(uint)fVar31;
        pdVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          pdVar8 = (dword *)func_0x00f78ad0();
          lVar23 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
        }
        if (fVar31 <= *(float *)(lVar23 + 800)) {
          return pdVar8;
        }
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
        if (iVar7 == 2) {
          pdVar22 = *(dword **)(lVar12 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar3._8_8_ = pdStack_368;
          auVar3._0_8_ = lStack_378;
          auVar37._8_8_ = pdStack_368;
          auVar37._0_8_ = lStack_378;
          lVar23 = *(long *)(lVar12 + 0x48);
          if ((lVar23 == 0) || (auVar37 = auVar3, pdVar22 == (dword *)0x0)) goto code_r0x0145c21c;
          pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
          pdVar10 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
          pdVar21 = *(dword **)(lVar23 + 0xb8);
          iVar28 = *(int *)(lVar23 + 0x180);
          uVar29 = 0x3f800000;
          iVar7 = 6;
        }
        else if (iVar7 == 1) {
          pdVar22 = *(dword **)(lVar12 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar37._8_8_ = pdStack_368;
          auVar37._0_8_ = lStack_378;
          if (pdVar22 == (dword *)0x0) goto code_r0x0145c21c;
          pdVar21 = *(dword **)(extraout_x1 + 0x2e);
          iVar28 = extraout_x1[0x60];
          pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
          uVar29 = 0;
          iVar7 = 1;
          pdVar10 = pdVar8;
        }
        else {
          if (iVar7 != 0) {
            if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
              func_0x00f78ad0();
            }
            pdVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
            *(undefined4 *)(lVar12 + 0x88) =
                 *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x34);
            return pdVar8;
          }
          pdVar22 = *(dword **)(lVar12 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar37._8_8_ = pdStack_368;
          auVar37._0_8_ = lStack_378;
          if (pdVar22 == (dword *)0x0) goto code_r0x0145c21c;
          pdVar21 = *(dword **)(extraout_x1 + 0x2e);
          iVar28 = extraout_x1[0x60];
          pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
          uVar29 = 0;
          iVar7 = 0;
          pdVar10 = pdVar8;
        }
        param_5 = &MACH_HEADER.cputype;
        puVar27 = &UNK_0145c1e0;
        pdVar11 = extraout_x1;
        param_6 = pdVar22;
        goto code_r0x014fe2a8;
      }
    }
    pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
    lVar23 = *(long *)(pdVar22 + 0x2e);
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar35._8_8_ = uVar24;
    auVar35._0_8_ = uVar9;
    param_6 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar27 = &UNK_0145b660;
    pppppppuVar26 = &pppppppuStack_120;
code_r0x014fe3e8:
    lVar12 = auVar35._0_8_;
    *(long *)((long)puVar6 + -0x30) = lVar23;
    *(dword **)((long)puVar6 + -0x28) = pdVar8;
    *(dword **)((long)puVar6 + -0x20) = pdVar21;
    *(dword **)((long)puVar6 + -0x18) = param_5;
    *(undefined8 ********)((long)puVar6 + -0x10) = pppppppuVar26;
    *(undefined **)((long)puVar6 + -8) = puVar27;
    pdVar8 = (dword *)/*System.Object$$.ctor*/ func_0x0294d018(lVar12,0);
    *(long *)(lVar12 + 0x10) = auVar35._8_8_;
    *(float *)(lVar12 + 0x18) = (float)(int)param_6;
    return pdVar8;
  }
  pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar23,0);
  if ((int)pdVar8 == 0) {
    return pdVar8;
  }
  uVar29 = 0x40000000;
  if (8 < uVar33) {
    uVar29 = 0x40400000;
  }
  uVar34 = 0x3f800000;
  if (3 < uVar33) {
    uVar34 = uVar29;
  }
  uVar29 = 0;
  if (1 < (int)uVar33) {
    uVar29 = uVar34;
  }
  /*Atlas.Audio.KartAudio$$OnRaceFinished*/ func_0x015c133c(lVar23,0);
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  pdVar8 = (dword *)/*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60(uVar29,auVar35._0_8_,
                                    *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x370)
                                    ,0,0);
  pdVar22 = *(dword **)(auVar35._0_8_ + 0x28);
  if (pdVar22 == (dword *)0x0) {
    return pdVar8;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  pdVar21 = *(dword **)(lVar23 + 0xb8);
  iVar28 = *(int *)(lVar23 + 0x180);
  pdVar8 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x370);
  iVar7 = 0;
  param_5 = (dword *)((long)&MACH_HEADER.magic + 1);
  ppdVar5 = (dword **)&stack0xffffffffffffff30;
  pdVar10 = (dword *)0x0;
  pdVar11 = (dword *)0x0;
  pdVar16 = (dword *)0x3eb4000;
  pppppppuVar25 = pppppppuStack_e0;
  puVar27 = puStack_d8;
  uVar29 = 0;
code_r0x014fe2a8:
  lVar23 = auVar36._8_8_;
  auVar38._8_8_ = lVar23;
  auVar38._0_8_ = pdVar22;
  puVar6 = (ulong *)((long)ppdVar5 + -0x70);
  *(ulong *)((long)ppdVar5 + -0x70) = unaff_d9;
  *(ulong *)((long)ppdVar5 + -0x68) = unaff_d8;
  *(undefined8 *)((long)ppdVar5 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppdVar5 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppdVar5 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppdVar5 + -0x48) = unaff_x25;
  *(undefined8 *)((long)ppdVar5 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppdVar5 + -0x38) = unaff_x23;
  *(dword **)((long)ppdVar5 + -0x30) = pdVar16;
  *(dword **)((long)ppdVar5 + -0x28) = param_6;
  *(dword **)((long)ppdVar5 + -0x20) = pdVar11;
  *(long *)((long)ppdVar5 + -0x18) = auVar36._0_8_;
  *(undefined8 ********)((long)ppdVar5 + -0x10) = pppppppuVar25;
  *(undefined **)((long)ppdVar5 + -8) = puVar27;
  param_6 = pdVar8;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  if (pdVar10 == (dword *)0x0) {
    pdVar11 = (dword *)0x0;
  }
  else {
    pdVar11 = (dword *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(pdVar11,uRam0000000003d3bf00);
    lVar12 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar12,0);
    *(dword **)(lVar12 + 0x10) = pdVar10;
    *(float *)(lVar12 + 0x18) = (float)iVar7;
    if (pdVar11 == (dword *)0x0) {
      puVar27 = &Atlas_Audio_SpeechParam___ctor;
      auVar35 = func_0x00f78af4();
      pppppppuVar26 = (undefined8 *******)((long)ppdVar5 + -0x10);
      goto code_r0x014fe3e8;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(pdVar11,lVar12,uRam0000000003d3bf08);
  }
  uVar9 = *(undefined8 *)((long)ppdVar5 + -0x50);
  uVar1 = *(undefined8 *)((long)ppdVar5 + -0x48);
  uVar24 = *(undefined8 *)((long)ppdVar5 + -0x60);
  uVar2 = *(undefined8 *)((long)ppdVar5 + -0x58);
  *(undefined8 *)((long)ppdVar5 + -0x50) = *(undefined8 *)((long)ppdVar5 + -0x70);
  *(undefined8 *)((long)ppdVar5 + -0x48) = *(undefined8 *)((long)ppdVar5 + -0x68);
  *(undefined8 *)((long)ppdVar5 + -0x40) = *(undefined8 *)((long)ppdVar5 + -0x40);
  *(undefined8 *)((long)ppdVar5 + -0x38) = *(undefined8 *)((long)ppdVar5 + -0x38);
  *(undefined8 *)((long)ppdVar5 + -0x30) = *(undefined8 *)((long)ppdVar5 + -0x30);
  *(undefined8 *)((long)ppdVar5 + -0x28) = *(undefined8 *)((long)ppdVar5 + -0x28);
  *(undefined8 *)((long)ppdVar5 + -0x20) = *(undefined8 *)((long)ppdVar5 + -0x20);
  *(undefined8 *)((long)ppdVar5 + -0x18) = *(undefined8 *)((long)ppdVar5 + -0x18);
  *(undefined8 *)((long)ppdVar5 + -0x10) = *(undefined8 *)((long)ppdVar5 + -0x10);
  *(undefined8 *)((long)ppdVar5 + -8) = *(undefined8 *)((long)ppdVar5 + -8);
  *(int *)((long)ppdVar5 + -0x54) = (int)param_5;
  pdVar16 = pdVar8;
  pdVar19 = pdVar21;
  pdVar10 = pdVar11;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(iVar28,uVar29,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if ((char)pdVar22[0xd] == '\0') {
code_r0x014fe49c:
    pdVar10 = (dword *)((long)ppdVar5 + -0x54);
    puVar27 = &UNK_014fe4b4;
    pdVar16 = pdVar8;
    pdVar19 = pdVar11;
  }
  else {
    if (*(long *)(pdVar22 + 4) != 0) {
      if (*(char *)(*(long *)(pdVar22 + 4) + 0xcb) == '\0') {
        return (dword *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar27 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar38 = func_0x00f78af4();
  }
  lVar17 = auVar38._8_8_;
  lVar12 = auVar38._0_8_;
  *(undefined8 *)((long)ppdVar5 + -0xc0) = uVar24;
  *(undefined8 *)((long)ppdVar5 + -0xb8) = uVar2;
  *(undefined8 *)((long)ppdVar5 + -0xb0) = uVar9;
  *(undefined8 *)((long)ppdVar5 + -0xa8) = uVar1;
  *(undefined8 *)((long)ppdVar5 + -0xa0) = 0x3eb4000;
  *(long *)((long)ppdVar5 + -0x98) = lVar23;
  *(dword **)((long)ppdVar5 + -0x90) = pdVar8;
  *(dword **)((long)ppdVar5 + -0x88) = pdVar22;
  *(dword **)((long)ppdVar5 + -0x80) = pdVar21;
  *(dword **)((long)ppdVar5 + -0x78) = pdVar11;
  *(undefined1 **)((long)ppdVar5 + -0x70) = (undefined1 *)((long)ppdVar5 + -0x10);
  *(undefined **)((long)ppdVar5 + -0x68) = puVar27;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)((long)ppdVar5 + -0xe0) = 0;
  *(undefined8 *)((long)ppdVar5 + -0xd8) = 0;
  *(undefined8 *)((long)ppdVar5 + -0xd0) = 0;
  *(undefined4 *)((long)ppdVar5 + -0xe4) = 0;
  if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar12 + 0x10) + 0x90) != '\0') {
    return (dword *)0x0;
  }
  if (lVar17 == 0) goto code_r0x014fe8f8;
  uVar13 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar17,0);
  if ((uVar13 & 1) != 0) {
    return (dword *)0x0;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(pdVar16,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350),0
                         );
  if (iVar7 != 0) {
    if (pdVar19 == (dword *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)ppdVar5 + -0x100),pdVar19,uRam0000000003d3bf10);
    *(undefined8 *)((long)ppdVar5 + -0xd8) = *(undefined8 *)((long)ppdVar5 + -0xf8);
    *(undefined8 *)((long)ppdVar5 + -0xe0) = *(undefined8 *)((long)ppdVar5 + -0x100);
    *(undefined8 *)((long)ppdVar5 + -0xd0) = *(undefined8 *)((long)ppdVar5 + -0xf0);
    while (uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)ppdVar5 + -0xe0),uRam0000000003d32f58),
          (uVar13 & 1) != 0) {
      lVar23 = *(long *)((long)ppdVar5 + -0xd0);
      if (lVar23 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar9 = *(undefined8 *)(lVar23 + 0x10);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      uVar13 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar9,*(undefined8 *)
                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310),0);
      if ((uVar13 & 1) != 0) {
        fVar32 = *(float *)(lVar23 + 0x18);
        fVar31 = -fVar32;
        if (fVar32 != INFINITY) {
          fVar31 = fVar32;
        }
        *(int *)((long)ppdVar5 + -0xe4) = (int)fVar31;
        plVar14 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,(undefined1 *)((long)ppdVar5 + -0xe4)
                                         );
        if (plVar14 == (long *)0x0) goto code_r0x014fe8fc;
        uVar9 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        puVar15 = (undefined4 *)func_0x00f78ae4(plVar14);
        *(undefined4 *)((long)ppdVar5 + -0xe4) = *puVar15;
        pdVar16 = (dword *)/*System.String$$Concat*/ func_0x029bdb88(pdVar16,uVar9,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)ppdVar5 + -0xe0),uRam0000000003d32f50);
  }
  if (*(long *)(lVar12 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar7 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar12 + 0x28),pdVar16,uRam0000000003d30020);
  if (iVar7 == 0) {
code_r0x014fe888:
    pdVar8 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar12 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar12 + 0x28),pdVar16,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*pdVar10 - 1 < 2) {
        dVar20 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      dVar20 = 1;
code_r0x014fe860:
      *pdVar10 = dVar20;
    }
    iVar7 = (int)extraout_x1_00;
    if (iVar7 == 3) {
      if ((*(long *)(lVar17 + 0xa0) == 0) ||
         (lVar23 = *(long *)(*(long *)(lVar17 + 0xa0) + 0x90), lVar23 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar4)();
      }
      iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar23,0);
      if (1 < iVar7) {
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (dword *)(ulong)(iVar7 < 3);
      }
      uVar13 = 2;
    }
    else {
      uVar13 = extraout_x1_00;
      if (iVar7 != 2) {
        if (iVar7 == 0) {
          pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar17,0);
          return pdVar8;
        }
        goto code_r0x014fe888;
      }
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar13,0);
    pdVar8 = (dword *)(ulong)(iVar7 == 0);
  }
  return pdVar8;
}



// ============================================================
// RVA: 0x145b258 | Atlas.Audio.AtlasAudioManager.SpeakCollision
// ============================================================

/* WARNING: Possible PIC construction at 0x0145b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145b3ac) */
/* WARNING: Removing unreachable block (ram,0x0145b3b0) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Audio_AtlasAudioManager__SpeakCollision
                  (undefined1 param_1 [16],uint param_2,undefined4 param_3,dword *param_4,
                  dword *param_5,dword *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  dword **ppdVar5;
  ulong *puVar6;
  int iVar7;
  dword *pdVar8;
  undefined8 uVar9;
  dword *pdVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 *puVar14;
  dword *pdVar15;
  dword *extraout_x1;
  long lVar16;
  ulong extraout_x1_00;
  uint uVar17;
  dword *pdVar18;
  dword dVar19;
  dword *pdVar20;
  dword *pdVar21;
  dword *pdVar22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar23;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 uVar24;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar25;
  undefined8 *******pppppppuVar26;
  undefined *puVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  ulong extraout_d0;
  uint uVar33;
  undefined4 uVar34;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  dword *pdStack_350;
  dword *pdStack_348;
  undefined8 *******pppppppuStack_340;
  undefined *puStack_338;
  ulong uStack_330;
  ulong uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  dword *pdStack_310;
  dword *pdStack_308;
  undefined8 *******pppppppuStack_300;
  undefined *puStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  undefined8 *******pppppppuStack_2a0;
  undefined *puStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined8 *******pppppppuStack_240;
  undefined *puStack_238;
  dword *pdStack_230;
  dword *pdStack_228;
  dword *pdStack_220;
  dword *pdStack_218;
  undefined8 *******pppppppuStack_210;
  undefined *puStack_208;
  dword *pdStack_200;
  dword *pdStack_1f8;
  dword *pdStack_1f0;
  dword *pdStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined *puStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 *******pppppppuStack_180;
  undefined *puStack_178;
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  undefined8 *******pppppppuStack_c0;
  undefined *puStack_b8;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  
  puVar6 = (ulong *)&stack0xffffffffffffff90;
  pdVar8 = param_4;
  pdVar21 = param_6;
  if ((bRam0000000003eb47db & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    pdVar8 = (dword *)func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47db = 1;
  }
  uVar33 = (uint)pdVar21;
  if ((int)param_6 < 2) {
    return pdVar8;
  }
  if (param_5 != (dword *)0x0) {
    pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
    if (((int)pdVar8 == 0) || ((float)param_4[0x1c] <= 3.0)) {
      return pdVar8;
    }
    pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
    lVar11 = 0x28;
    if ((int)pdVar8 == 0) {
      lVar11 = 0x30;
    }
    pdVar21 = *(dword **)((long)param_4 + lVar11);
    if (pdVar21 == (dword *)0x0) {
      param_4[0x1c] = 0;
      return pdVar8;
    }
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x1d8);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar35._8_8_ = uVar24;
    auVar35._0_8_ = uVar9;
    puVar27 = (undefined *)0x145b3ac;
    pdVar8 = param_4;
    pdVar18 = param_6;
    pppppppuVar26 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto code_r0x014fe3e8;
  }
  auVar35 = func_0x00f78af4();
  pdVar21 = auVar35._8_8_;
  puStack_78 = &Atlas_Audio_AtlasAudioManager__SpeakWinOrLose;
  pppppppuStack_80 = (undefined8 *******)&stack0xfffffffffffffff0;
  uVar17 = uVar33;
  if ((bRam0000000003eb47dd & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47dd = 1;
  }
  if (pdVar21 == (dword *)0x0) {
    pdVar18 = (dword *)func_0x00f78af4();
    puVar6 = (ulong *)&stack0xfffffffffffffef0;
    puStack_b8 = &Atlas_Audio_AtlasAudioManager__SpeakIntro;
    pdVar21 = pdVar18;
    pppppppuStack_c0 = &pppppppuStack_80;
    if ((bRam0000000003eb47de & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      pdVar21 = (dword *)func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47de = 1;
    }
    pdVar8 = *(dword **)(pdVar18 + 0x12);
    if ((pdVar8 == (dword *)0x0) || (param_5 = *(dword **)(pdVar18 + 10), param_5 == (dword *)0x0))
    {
      return pdVar21;
    }
    unaff_x24 = 0x3d1ff28;
    pdVar21 = pdVar8;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
      pdVar21 = *(dword **)(pdVar18 + 0x12);
      if (pdVar21 == (dword *)0x0) {
        auVar35 = func_0x00f78af4();
        pdVar21 = auVar35._8_8_;
        param_4 = auVar35._0_8_;
        ppdVar5 = (dword **)&stack0xfffffffffffffe90;
        puStack_118 = &Atlas_Audio_AtlasAudioManager__SpeakOvertake;
        pppppppuVar25 = &pppppppuStack_120;
        pdVar20 = (dword *)0x3eb4000;
        pdVar8 = param_4;
        pppppppuStack_120 = &pppppppuStack_c0;
        if ((bRam0000000003eb47df & 1) == 0) {
          pdVar8 = (dword *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47df = 1;
        }
        if (param_4[0x14] != 0) {
          return pdVar8;
        }
        lVar11 = *(long *)(param_4 + 0x1a);
        if (lVar11 == 0) {
          return pdVar8;
        }
        if ((int)(*(uint *)(lVar11 + 0x18) - 1) <= (int)uVar17) {
          return pdVar8;
        }
        if ((uint)((long)(int)uVar17 + 1) < *(uint *)(lVar11 + 0x18)) {
          lVar11 = *(long *)(lVar11 + ((long)(int)uVar17 + 1) * 8 + 0x20);
          if (((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x10), lVar11 != 0)) &&
             (pdVar21 != (dword *)0x0)) {
            param_6 = *(dword **)(lVar11 + 0x70);
            uVar12 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar21,0);
            if ((uVar12 & 1) == 0) {
              if (param_6 == (dword *)0x0) goto code_r0x0145b92c;
              pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_6,0);
              if ((int)pdVar8 == 0) {
                return pdVar8;
              }
            }
            if (((*(long *)(pdVar21 + 0x2e) != 0) &&
                (uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(pdVar21 + 0x2e),0), param_6 != (dword *)0x0)) &&
               (*(long *)(param_6 + 0x2e) != 0)) {
              unaff_d9 = (ulong)param_2;
              uVar33 = param_2;
              uVar34 = param_3;
              uVar30 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_6 + 0x2e),0);
              fVar31 = (float)/*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(uVar29,param_2,param_3,uVar30,uVar33,uVar34,0);
              unaff_x23 = 0x3d1ff28;
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
              }
              lVar11 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
              if (*(float *)(lVar11 + 0x31c) <= fVar31 || param_6 == pdVar21) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
              }
              fVar31 = (float)param_4[0x1d];
              unaff_d8 = (ulong)(uint)fVar31;
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
                lVar11 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
              }
              if (fVar31 < *(float *)(lVar11 + 0x318)) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
              }
              pdVar20 = *(dword **)(param_4 + 10);
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
              }
              if (pdVar20 != (dword *)0x0) {
                param_5 = *(dword **)(pdVar21 + 0x2e);
                iVar28 = pdVar21[0x60];
                pdVar18 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
                iVar7 = 0;
                pdVar8 = &MACH_HEADER.cputype;
                puVar27 = &UNK_0145b8cc;
                pdVar15 = pdVar18;
                pdVar10 = pdVar21;
                pdVar22 = pdVar20;
                uVar29 = 0;
                goto code_r0x014fe2a8;
              }
            }
          }
code_r0x0145b92c:
          func_0x00f78af4();
        }
        uVar9 = func_0x00f78b24();
        auVar35 = func_0x00f78ac0(uVar9,0);
        pdVar8 = auVar35._8_8_;
        pdVar21 = auVar35._0_8_;
        puVar6 = &uStack_1d0;
        puStack_178 = &Atlas_Audio_AtlasAudioManager__SpeakRespawning;
        param_5 = (dword *)0x3eb4000;
        uStack_1d0 = unaff_d9;
        uStack_1c8 = unaff_d8;
        pppppppuStack_180 = pppppppuVar25;
        if ((bRam0000000003eb47e0 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e0 = 1;
        }
        if (pdVar8 != (dword *)0x0) {
          pdVar18 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar8,0);
          lVar11 = 0x28;
          if ((int)pdVar18 == 0) {
            lVar11 = 0x30;
          }
          param_5 = *(dword **)((long)pdVar21 + lVar11);
          if (param_5 == (dword *)0x0) {
            return pdVar18;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(pdVar21 + 0x12) != 0) {
            pdVar18 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            pdVar21 = *(dword **)(*(long *)(pdVar21 + 0x12) + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar35._8_8_ = uVar24;
            auVar35._0_8_ = uVar9;
            param_6 = (dword *)((long)&MACH_HEADER.cputype + 1);
            puVar27 = &UNK_0145ba68;
            pppppppuVar26 = &pppppppuStack_180;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        pdVar18 = (dword *)func_0x00f78af4();
        pdStack_200 = pdVar20;
        pdStack_1f8 = pdVar21;
        pdStack_1f0 = param_5;
        pdStack_1e8 = pdVar8;
        pppppppuStack_1e0 = &pppppppuStack_180;
        puStack_1d8 = &Atlas_Audio_AtlasAudioManager__SpeakShield;
        pdVar8 = pdVar18;
        if ((bRam0000000003eb47e1 & 1) == 0) {
          pdVar8 = (dword *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e1 = 1;
        }
        pdVar10 = *(dword **)(pdVar18 + 0x12);
        if (pdVar10 == (dword *)0x0) {
          return pdVar8;
        }
        pdVar20 = *(dword **)(pdVar18 + 10);
        pdVar8 = pdVar10;
        param_4 = pdStack_1e8;
        pppppppuVar25 = pppppppuStack_1e0;
        puVar27 = puStack_1d8;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] != 0)) {
joined_r0x0145bba8:
          pdStack_1e8 = param_4;
          pppppppuStack_1e0 = pppppppuVar25;
          puStack_1d8 = puVar27;
          if (pdVar20 != (dword *)0x0) {
            pdVar18 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            pdVar15 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            param_5 = *(dword **)(pdVar8 + 0x2e);
            iVar28 = pdVar8[0x60];
            iVar7 = 10;
            pdVar8 = (dword *)((long)&MACH_HEADER.magic + 1);
            ppdVar5 = (dword **)&uStack_1d0;
            pdVar21 = pdVar10;
            pdVar10 = pdStack_1f0;
            param_6 = pdStack_1f8;
            pdVar22 = pdStack_200;
            uVar29 = _UNK_033f813c;
            goto code_r0x014fe2a8;
          }
        }
        else {
          func_0x00f78ad0();
          pdVar8 = *(dword **)(pdVar18 + 0x12);
          param_4 = pdStack_1e8;
          pppppppuVar25 = pppppppuStack_1e0;
          puVar27 = puStack_1d8;
          if (pdVar8 != (dword *)0x0) goto joined_r0x0145bba8;
        }
        auVar35 = func_0x00f78af4();
        pdVar21 = auVar35._8_8_;
        pdStack_230 = (dword *)0x3d1ff28;
        puStack_208 = &Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
        pdStack_228 = pdVar18;
        pdStack_220 = pdVar20;
        pdStack_218 = pdVar10;
        pppppppuStack_210 = &pppppppuStack_1e0;
        if ((bRam0000000003eb47e2 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e2 = 1;
        }
        if (pdVar21 != (dword *)0x0) {
          pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar21,0);
          if ((int)pdVar8 == 0) {
            return pdVar8;
          }
          pdVar20 = *(dword **)(auVar35._0_8_ + 0x28);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          lVar11 = *(long *)(auVar35._0_8_ + 0x48);
          if ((lVar11 != 0) && (pdVar20 != (dword *)0x0)) {
            pdVar18 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            pdVar15 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            param_5 = *(dword **)(lVar11 + 0xb8);
            iVar28 = *(int *)(lVar11 + 0x180);
            uVar29 = 0;
            iVar7 = 6;
            pdVar8 = (dword *)((long)&MACH_HEADER.magic + 3);
            ppdVar5 = &pdStack_200;
            param_4 = pdStack_218;
            pdVar10 = pdStack_220;
            param_6 = pdStack_228;
            pdVar22 = pdStack_230;
            pppppppuVar25 = pppppppuStack_210;
            puVar27 = puStack_208;
            goto code_r0x014fe2a8;
          }
        }
        auVar35 = func_0x00f78af4();
        pdVar8 = auVar35._8_8_;
        puVar6 = &uStack_290;
        puStack_238 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
        uStack_290 = unaff_d9;
        uStack_288 = unaff_d8;
        pppppppuStack_240 = &pppppppuStack_210;
        if ((bRam0000000003eb47e3 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e3 = 1;
        }
        if (pdVar8 != (dword *)0x0) {
          pdVar21 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar8,0);
          lVar11 = 0x28;
          if ((int)pdVar21 == 0) {
            lVar11 = 0x30;
          }
          param_5 = *(dword **)(auVar35._0_8_ + lVar11);
          if (param_5 == (dword *)0x0) {
            return pdVar21;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          lVar11 = *(long *)(auVar35._0_8_ + 0x48);
          if (lVar11 != 0) {
            pdVar18 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            pdVar21 = *(dword **)(lVar11 + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar35._8_8_ = uVar24;
            auVar35._0_8_ = uVar9;
            param_6 = (dword *)((long)&MACH_HEADER.filetype + 3);
            puVar27 = &UNK_0145bdac;
            pppppppuVar26 = &pppppppuStack_240;
            goto code_r0x014fe3e8;
          }
        }
        auVar36 = func_0x00f78af4();
        pdVar8 = auVar36._8_8_;
        lVar11 = auVar36._0_8_;
        puVar6 = &uStack_2f0;
        puStack_298 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
        pppppppuVar26 = &pppppppuStack_2a0;
        param_5 = (dword *)0x3eb4000;
        uStack_2f0 = unaff_d9;
        uStack_2e8 = unaff_d8;
        pppppppuStack_2a0 = &pppppppuStack_240;
        if ((bRam0000000003eb47e4 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e4 = 1;
        }
        if (pdVar8 != (dword *)0x0) {
          pdVar21 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar8,0);
          lVar16 = 0x28;
          if ((int)pdVar21 == 0) {
            lVar16 = 0x30;
          }
          param_5 = *(dword **)(lVar11 + lVar16);
          if (param_5 == (dword *)0x0) {
            return pdVar21;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(lVar11 + 0x48) != 0) {
            pdVar18 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            pdVar21 = *(dword **)(*(long *)(lVar11 + 0x48) + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar35._8_8_ = uVar24;
            auVar35._0_8_ = uVar9;
            param_6 = (dword *)((long)&MACH_HEADER.ncmds + 1);
            puVar27 = &UNK_0145bf54;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        param_4 = (dword *)func_0x00f78af4();
        ppdVar5 = (dword **)&uStack_330;
        uStack_320 = 0x3d1ff28;
        puStack_2f8 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
        pppppppuVar25 = &pppppppuStack_300;
        uStack_330 = unaff_d9;
        uStack_328 = unaff_d8;
        pdStack_310 = param_5;
        pppppppuStack_300 = pppppppuVar26;
        if ((bRam0000000003eb47e5 & 1) == 0) {
          lStack_318 = lVar11;
          pdStack_308 = pdVar8;
          func_0x00f78a20(0x3d1ff28);
          auVar36._8_8_ = pdStack_308;
          auVar36._0_8_ = lStack_318;
          bRam0000000003eb47e5 = 1;
        }
        pdStack_308 = auVar36._8_8_;
        lStack_318 = auVar36._0_8_;
        unaff_d8 = extraout_d0 & 0xffffffff;
        if (extraout_x1 == (dword *)0x0) {
code_r0x0145c21c:
          pdStack_308 = auVar36._8_8_;
          lStack_318 = auVar36._0_8_;
          fVar31 = (float)func_0x00f78af4();
          puStack_338 = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
          uStack_360 = unaff_d9;
          uStack_358 = unaff_d8;
          pdStack_350 = extraout_x1;
          pdStack_348 = param_4;
          pppppppuStack_340 = pppppppuVar25;
          if ((bRam0000000003eb47e6 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d24568);
            bRam0000000003eb47e6 = 1;
          }
          if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uStack_368 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
          if (((*(byte *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          fVar32 = _UNK_033f8148;
          if (fVar31 != 0.0) {
            fVar32 = fVar31;
          }
          fVar31 = INFINITY;
          if (fVar32 != -INFINITY) {
            fVar31 = ABS(SQRT(fVar32));
          }
          pdVar8 = (dword *)/*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar31,&uStack_368,
                                            *(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x388),1,0);
          return pdVar8;
        }
        iVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
        if ((iVar7 != 0) && (pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)pdVar8 == 0)) {
          return pdVar8;
        }
        auVar36._8_8_ = pdStack_308;
        auVar36._0_8_ = lStack_318;
        if (*(long *)(param_4 + 0xc) == 0) goto code_r0x0145c21c;
        pdVar8 = (dword *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(param_4 + 0xc),0);
        if ((((ulong)pdVar8 & 1) != 0) || (param_4[0x14] != 1)) {
          return pdVar8;
        }
        pdVar22 = (dword *)0x3d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        lVar11 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
        if (*(float *)(lVar11 + 0x30) <= (float)extraout_d0) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        }
        if (0.0 <= (float)param_4[0x22]) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        }
        if ((char)extraout_x1[0xe] == '\0') {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        }
        fVar31 = (float)param_4[0x23];
        unaff_d8 = (ulong)(uint)fVar31;
        pdVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          pdVar8 = (dword *)func_0x00f78ad0();
          lVar11 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
        }
        if (fVar31 <= *(float *)(lVar11 + 800)) {
          return pdVar8;
        }
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
        if (iVar7 == 2) {
          pdVar20 = *(dword **)(param_4 + 0xc);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar3._8_8_ = pdStack_308;
          auVar3._0_8_ = lStack_318;
          auVar36._8_8_ = pdStack_308;
          auVar36._0_8_ = lStack_318;
          lVar11 = *(long *)(param_4 + 0x12);
          if ((lVar11 == 0) || (auVar36 = auVar3, pdVar20 == (dword *)0x0)) goto code_r0x0145c21c;
          pdVar18 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
          pdVar15 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
          param_5 = *(dword **)(lVar11 + 0xb8);
          iVar28 = *(int *)(lVar11 + 0x180);
          uVar29 = 0x3f800000;
          iVar7 = 6;
        }
        else if (iVar7 == 1) {
          pdVar20 = *(dword **)(param_4 + 0xc);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar36._8_8_ = pdStack_308;
          auVar36._0_8_ = lStack_318;
          if (pdVar20 == (dword *)0x0) goto code_r0x0145c21c;
          param_5 = *(dword **)(extraout_x1 + 0x2e);
          iVar28 = extraout_x1[0x60];
          pdVar18 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
          uVar29 = 0;
          iVar7 = 1;
          pdVar15 = pdVar18;
        }
        else {
          if (iVar7 != 0) {
            if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
              func_0x00f78ad0();
            }
            pdVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
            param_4[0x22] = *(int *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x34);
            return pdVar8;
          }
          pdVar20 = *(dword **)(param_4 + 0xc);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar36._8_8_ = pdStack_308;
          auVar36._0_8_ = lStack_318;
          if (pdVar20 == (dword *)0x0) goto code_r0x0145c21c;
          param_5 = *(dword **)(extraout_x1 + 0x2e);
          iVar28 = extraout_x1[0x60];
          pdVar18 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
          uVar29 = 0;
          iVar7 = 0;
          pdVar15 = pdVar18;
        }
        pdVar8 = &MACH_HEADER.cputype;
        puVar27 = &UNK_0145c1e0;
        pdVar21 = extraout_x1;
        pdVar10 = extraout_x1;
        param_6 = pdVar20;
        goto code_r0x014fe2a8;
      }
    }
    pdVar18 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
    pdVar21 = *(dword **)(pdVar21 + 0x2e);
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar35._8_8_ = uVar24;
    auVar35._0_8_ = uVar9;
    param_6 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar27 = &UNK_0145b660;
    pppppppuVar26 = &pppppppuStack_c0;
code_r0x014fe3e8:
    lVar11 = auVar35._0_8_;
    *(dword **)((long)puVar6 + -0x30) = pdVar21;
    *(dword **)((long)puVar6 + -0x28) = pdVar18;
    *(dword **)((long)puVar6 + -0x20) = param_5;
    *(dword **)((long)puVar6 + -0x18) = pdVar8;
    *(undefined8 ********)((long)puVar6 + -0x10) = pppppppuVar26;
    *(undefined **)((long)puVar6 + -8) = puVar27;
    pdVar8 = (dword *)/*System.Object$$.ctor*/ func_0x0294d018(lVar11,0);
    *(long *)(lVar11 + 0x10) = auVar35._8_8_;
    *(float *)(lVar11 + 0x18) = (float)(int)param_6;
    return pdVar8;
  }
  pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar21,0);
  if ((int)pdVar8 == 0) {
    return pdVar8;
  }
  uVar29 = 0x40000000;
  if (8 < uVar33) {
    uVar29 = 0x40400000;
  }
  uVar34 = 0x3f800000;
  if (3 < uVar33) {
    uVar34 = uVar29;
  }
  uVar29 = 0;
  if (1 < (int)uVar33) {
    uVar29 = uVar34;
  }
  /*Atlas.Audio.KartAudio$$OnRaceFinished*/ func_0x015c133c(pdVar21,0);
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  pdVar8 = (dword *)/*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60(uVar29,auVar35._0_8_,
                                    *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x370)
                                    ,0,0);
  pdVar20 = *(dword **)(auVar35._0_8_ + 0x28);
  if (pdVar20 == (dword *)0x0) {
    return pdVar8;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  param_5 = *(dword **)(pdVar21 + 0x2e);
  iVar28 = pdVar21[0x60];
  pdVar18 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x370);
  iVar7 = 0;
  pdVar8 = (dword *)((long)&MACH_HEADER.magic + 1);
  ppdVar5 = (dword **)&stack0xffffffffffffff90;
  pdVar15 = (dword *)0x0;
  pdVar10 = (dword *)0x0;
  pdVar22 = (dword *)0x3eb4000;
  pppppppuVar25 = pppppppuStack_80;
  puVar27 = puStack_78;
  uVar29 = 0;
code_r0x014fe2a8:
  auVar37._8_8_ = pdVar21;
  auVar37._0_8_ = pdVar20;
  puVar6 = (ulong *)((long)ppdVar5 + -0x70);
  *(ulong *)((long)ppdVar5 + -0x70) = unaff_d9;
  *(ulong *)((long)ppdVar5 + -0x68) = unaff_d8;
  *(undefined8 *)((long)ppdVar5 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppdVar5 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppdVar5 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppdVar5 + -0x48) = unaff_x25;
  *(undefined8 *)((long)ppdVar5 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppdVar5 + -0x38) = unaff_x23;
  *(dword **)((long)ppdVar5 + -0x30) = pdVar22;
  *(dword **)((long)ppdVar5 + -0x28) = param_6;
  *(dword **)((long)ppdVar5 + -0x20) = pdVar10;
  *(dword **)((long)ppdVar5 + -0x18) = param_4;
  *(undefined8 ********)((long)ppdVar5 + -0x10) = pppppppuVar25;
  *(undefined **)((long)ppdVar5 + -8) = puVar27;
  param_6 = pdVar18;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  if (pdVar15 == (dword *)0x0) {
    pdVar10 = (dword *)0x0;
  }
  else {
    pdVar10 = (dword *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(pdVar10,uRam0000000003d3bf00);
    lVar11 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar11,0);
    *(dword **)(lVar11 + 0x10) = pdVar15;
    *(float *)(lVar11 + 0x18) = (float)iVar7;
    if (pdVar10 == (dword *)0x0) {
      puVar27 = &Atlas_Audio_SpeechParam___ctor;
      auVar35 = func_0x00f78af4();
      pppppppuVar26 = (undefined8 *******)((long)ppdVar5 + -0x10);
      goto code_r0x014fe3e8;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(pdVar10,lVar11,uRam0000000003d3bf08);
  }
  uVar9 = *(undefined8 *)((long)ppdVar5 + -0x50);
  uVar1 = *(undefined8 *)((long)ppdVar5 + -0x48);
  uVar24 = *(undefined8 *)((long)ppdVar5 + -0x60);
  uVar2 = *(undefined8 *)((long)ppdVar5 + -0x58);
  *(undefined8 *)((long)ppdVar5 + -0x50) = *(undefined8 *)((long)ppdVar5 + -0x70);
  *(undefined8 *)((long)ppdVar5 + -0x48) = *(undefined8 *)((long)ppdVar5 + -0x68);
  *(undefined8 *)((long)ppdVar5 + -0x40) = *(undefined8 *)((long)ppdVar5 + -0x40);
  *(undefined8 *)((long)ppdVar5 + -0x38) = *(undefined8 *)((long)ppdVar5 + -0x38);
  *(undefined8 *)((long)ppdVar5 + -0x30) = *(undefined8 *)((long)ppdVar5 + -0x30);
  *(undefined8 *)((long)ppdVar5 + -0x28) = *(undefined8 *)((long)ppdVar5 + -0x28);
  *(undefined8 *)((long)ppdVar5 + -0x20) = *(undefined8 *)((long)ppdVar5 + -0x20);
  *(undefined8 *)((long)ppdVar5 + -0x18) = *(undefined8 *)((long)ppdVar5 + -0x18);
  *(undefined8 *)((long)ppdVar5 + -0x10) = *(undefined8 *)((long)ppdVar5 + -0x10);
  *(undefined8 *)((long)ppdVar5 + -8) = *(undefined8 *)((long)ppdVar5 + -8);
  *(int *)((long)ppdVar5 + -0x54) = (int)pdVar8;
  pdVar15 = pdVar18;
  pdVar22 = param_5;
  pdVar8 = pdVar10;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(iVar28,uVar29,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if ((char)pdVar20[0xd] == '\0') {
code_r0x014fe49c:
    pdVar8 = (dword *)((long)ppdVar5 + -0x54);
    puVar27 = &UNK_014fe4b4;
    pdVar15 = pdVar18;
    pdVar22 = pdVar10;
  }
  else {
    if (*(long *)(pdVar20 + 4) != 0) {
      if (*(char *)(*(long *)(pdVar20 + 4) + 0xcb) == '\0') {
        return (dword *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar27 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar37 = func_0x00f78af4();
  }
  lVar16 = auVar37._8_8_;
  lVar11 = auVar37._0_8_;
  *(undefined8 *)((long)ppdVar5 + -0xc0) = uVar24;
  *(undefined8 *)((long)ppdVar5 + -0xb8) = uVar2;
  *(undefined8 *)((long)ppdVar5 + -0xb0) = uVar9;
  *(undefined8 *)((long)ppdVar5 + -0xa8) = uVar1;
  *(undefined8 *)((long)ppdVar5 + -0xa0) = 0x3eb4000;
  *(dword **)((long)ppdVar5 + -0x98) = pdVar21;
  *(dword **)((long)ppdVar5 + -0x90) = pdVar18;
  *(dword **)((long)ppdVar5 + -0x88) = pdVar20;
  *(dword **)((long)ppdVar5 + -0x80) = param_5;
  *(dword **)((long)ppdVar5 + -0x78) = pdVar10;
  *(undefined1 **)((long)ppdVar5 + -0x70) = (undefined1 *)((long)ppdVar5 + -0x10);
  *(undefined **)((long)ppdVar5 + -0x68) = puVar27;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)((long)ppdVar5 + -0xe0) = 0;
  *(undefined8 *)((long)ppdVar5 + -0xd8) = 0;
  *(undefined8 *)((long)ppdVar5 + -0xd0) = 0;
  *(undefined4 *)((long)ppdVar5 + -0xe4) = 0;
  if (*(long *)(lVar11 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar11 + 0x10) + 0x90) != '\0') {
    return (dword *)0x0;
  }
  if (lVar16 == 0) goto code_r0x014fe8f8;
  uVar12 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar16,0);
  if ((uVar12 & 1) != 0) {
    return (dword *)0x0;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(pdVar15,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350),0
                         );
  if (iVar7 != 0) {
    if (pdVar22 == (dword *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)ppdVar5 + -0x100),pdVar22,uRam0000000003d3bf10);
    *(undefined8 *)((long)ppdVar5 + -0xd8) = *(undefined8 *)((long)ppdVar5 + -0xf8);
    *(undefined8 *)((long)ppdVar5 + -0xe0) = *(undefined8 *)((long)ppdVar5 + -0x100);
    *(undefined8 *)((long)ppdVar5 + -0xd0) = *(undefined8 *)((long)ppdVar5 + -0xf0);
    while (uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)ppdVar5 + -0xe0),uRam0000000003d32f58),
          (uVar12 & 1) != 0) {
      lVar23 = *(long *)((long)ppdVar5 + -0xd0);
      if (lVar23 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar9 = *(undefined8 *)(lVar23 + 0x10);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar9,*(undefined8 *)
                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310),0);
      if ((uVar12 & 1) != 0) {
        fVar32 = *(float *)(lVar23 + 0x18);
        fVar31 = -fVar32;
        if (fVar32 != INFINITY) {
          fVar31 = fVar32;
        }
        *(int *)((long)ppdVar5 + -0xe4) = (int)fVar31;
        plVar13 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,(undefined1 *)((long)ppdVar5 + -0xe4)
                                         );
        if (plVar13 == (long *)0x0) goto code_r0x014fe8fc;
        uVar9 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        puVar14 = (undefined4 *)func_0x00f78ae4(plVar13);
        *(undefined4 *)((long)ppdVar5 + -0xe4) = *puVar14;
        pdVar15 = (dword *)/*System.String$$Concat*/ func_0x029bdb88(pdVar15,uVar9,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)ppdVar5 + -0xe0),uRam0000000003d32f50);
  }
  if (*(long *)(lVar11 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar7 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar11 + 0x28),pdVar15,uRam0000000003d30020);
  if (iVar7 == 0) {
code_r0x014fe888:
    pdVar8 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar11 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar11 + 0x28),pdVar15,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*pdVar8 - 1 < 2) {
        dVar19 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      dVar19 = 1;
code_r0x014fe860:
      *pdVar8 = dVar19;
    }
    iVar7 = (int)extraout_x1_00;
    if (iVar7 == 3) {
      if ((*(long *)(lVar16 + 0xa0) == 0) ||
         (lVar11 = *(long *)(*(long *)(lVar16 + 0xa0) + 0x90), lVar11 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar4)();
      }
      iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar11,0);
      if (1 < iVar7) {
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (dword *)(ulong)(iVar7 < 3);
      }
      uVar12 = 2;
    }
    else {
      uVar12 = extraout_x1_00;
      if (iVar7 != 2) {
        if (iVar7 == 0) {
          pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar16,0);
          return pdVar8;
        }
        goto code_r0x014fe888;
      }
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar12,0);
    pdVar8 = (dword *)(ulong)(iVar7 == 0);
  }
  return pdVar8;
}



// ============================================================
// RVA: 0x145b418 | Atlas.Audio.AtlasAudioManager.SpeakWinOrLose
// ============================================================

/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * Atlas_Audio_AtlasAudioManager__SpeakWinOrLose
                (undefined1 param_1 [16],uint param_2,undefined4 param_3,long param_4,long param_5,
                uint param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  int **ppiVar5;
  ulong *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  int *extraout_x1;
  long lVar15;
  ulong extraout_x1_00;
  int iVar16;
  long lVar17;
  int *piVar18;
  int *piVar19;
  dword *pdVar20;
  undefined8 unaff_x19;
  dword *pdVar21;
  int *unaff_x20;
  int *piVar22;
  int *unaff_x21;
  int *unaff_x22;
  undefined8 uVar23;
  undefined8 unaff_x23;
  undefined8 uVar24;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar26;
  undefined *unaff_x30;
  undefined *puVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  ulong extraout_d0;
  uint uVar33;
  undefined4 uVar34;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  int *piStack_2e0;
  long lStack_2d8;
  undefined8 *******pppppppuStack_2d0;
  undefined *puStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  int *piStack_2a0;
  dword *pdStack_298;
  undefined8 *******pppppppuStack_290;
  undefined *puStack_288;
  ulong uStack_280;
  ulong uStack_278;
  undefined8 *******pppppppuStack_230;
  undefined *puStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined8 *******pppppppuStack_1d0;
  undefined *puStack_1c8;
  int *piStack_1c0;
  int *piStack_1b8;
  int *piStack_1b0;
  long lStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined *puStack_198;
  int *piStack_190;
  int *piStack_188;
  int *piStack_180;
  dword *pdStack_178;
  undefined8 *******pppppppuStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 *******pppppppuStack_110;
  undefined *puStack_108;
  undefined8 *******pppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  
  auVar35._8_8_ = param_5;
  auVar35._0_8_ = unaff_x19;
  uVar33 = param_6;
  if ((bRam0000000003eb47dd & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47dd = 1;
  }
  if (param_5 == 0) {
    piVar9 = (int *)func_0x00f78af4();
    puVar6 = (ulong *)&stack0xffffffffffffff60;
    puStack_48 = &Atlas_Audio_AtlasAudioManager__SpeakIntro;
    piVar8 = piVar9;
    ppppppuStack_50 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb47de & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      piVar8 = (int *)func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47de = 1;
    }
    pdVar21 = *(dword **)(piVar9 + 0x12);
    if ((pdVar21 == (dword *)0x0) || (piVar18 = *(int **)(piVar9 + 10), piVar18 == (int *)0x0)) {
      return piVar8;
    }
    unaff_x24 = 0x3d1ff28;
    pdVar20 = pdVar21;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
      pdVar20 = *(dword **)(piVar9 + 0x12);
      if (pdVar20 == (dword *)0x0) {
        auVar35 = func_0x00f78af4();
        unaff_x20 = auVar35._8_8_;
        piVar9 = auVar35._0_8_;
        ppiVar5 = (int **)&stack0xffffffffffffff00;
        puStack_a8 = &Atlas_Audio_AtlasAudioManager__SpeakOvertake;
        unaff_x29 = &pppppppuStack_b0;
        piVar22 = (int *)0x3eb4000;
        piVar8 = piVar9;
        pppppppuStack_b0 = &ppppppuStack_50;
        if ((bRam0000000003eb47df & 1) == 0) {
          piVar8 = (int *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47df = 1;
        }
        if (piVar9[0x14] != 0) {
          return piVar8;
        }
        lVar14 = *(long *)(piVar9 + 0x1a);
        if (lVar14 == 0) {
          return piVar8;
        }
        if ((int)(*(uint *)(lVar14 + 0x18) - 1) <= (int)uVar33) {
          return piVar8;
        }
        if ((uint)((long)(int)uVar33 + 1) < *(uint *)(lVar14 + 0x18)) {
          lVar14 = *(long *)(lVar14 + ((long)(int)uVar33 + 1) * 8 + 0x20);
          if (((lVar14 != 0) && (lVar14 = *(long *)(lVar14 + 0x10), lVar14 != 0)) &&
             (unaff_x20 != (int *)0x0)) {
            unaff_x21 = *(int **)(lVar14 + 0x70);
            uVar11 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(unaff_x20,0);
            if ((uVar11 & 1) == 0) {
              if (unaff_x21 == (int *)0x0) goto code_r0x0145b92c;
              piVar8 = (int *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(unaff_x21,0);
              if ((int)piVar8 == 0) {
                return piVar8;
              }
            }
            if (((*(long *)(unaff_x20 + 0x2e) != 0) &&
                (uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(unaff_x20 + 0x2e),0), unaff_x21 != (int *)0x0))
               && (*(long *)(unaff_x21 + 0x2e) != 0)) {
              unaff_d9 = (ulong)param_2;
              uVar33 = param_2;
              uVar34 = param_3;
              uVar30 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(unaff_x21 + 0x2e),0);
              fVar31 = (float)/*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(uVar29,param_2,param_3,uVar30,uVar33,uVar34,0);
              unaff_x23 = 0x3d1ff28;
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
              }
              lVar14 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e);
              if (*(float *)(lVar14 + 0x31c) <= fVar31 || unaff_x21 == unaff_x20) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
              }
              fVar31 = (float)piVar9[0x1d];
              unaff_d8 = (ulong)(uint)fVar31;
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
                lVar14 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e);
              }
              if (fVar31 < *(float *)(lVar14 + 0x318)) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
              }
              piVar22 = *(int **)(piVar9 + 10);
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
              }
              if (piVar22 != (int *)0x0) {
                piVar18 = *(int **)(unaff_x20 + 0x2e);
                iVar28 = unaff_x20[0x60];
                lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x378);
                iVar7 = 0;
                pdVar21 = &MACH_HEADER.cputype;
                unaff_x30 = &UNK_0145b8cc;
                lVar14 = lVar17;
                unaff_x22 = piVar22;
                uVar29 = 0;
                goto code_r0x014fe2a8;
              }
            }
          }
code_r0x0145b92c:
          func_0x00f78af4();
        }
        uVar24 = func_0x00f78b24();
        auVar35 = func_0x00f78ac0(uVar24,0);
        pdVar21 = auVar35._8_8_;
        piVar8 = auVar35._0_8_;
        puVar6 = &uStack_160;
        puStack_108 = &Atlas_Audio_AtlasAudioManager__SpeakRespawning;
        piVar18 = (int *)0x3eb4000;
        uStack_160 = unaff_d9;
        uStack_158 = unaff_d8;
        pppppppuStack_110 = unaff_x29;
        if ((bRam0000000003eb47e0 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e0 = 1;
        }
        if (pdVar21 != (dword *)0x0) {
          piVar9 = (int *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar21,0);
          lVar14 = 0x28;
          if ((int)piVar9 == 0) {
            lVar14 = 0x30;
          }
          piVar18 = *(int **)((long)piVar8 + lVar14);
          if (piVar18 == (int *)0x0) {
            return piVar9;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(piVar8 + 0x12) != 0) {
            lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
            uVar23 = *(undefined8 *)(*(long *)(piVar8 + 0x12) + 0xb8);
            uVar24 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar24,uRam0000000003d3bf00);
            uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar24 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar37._8_8_ = uVar25;
            auVar37._0_8_ = uVar24;
            iVar16 = 5;
            puVar27 = &UNK_0145ba68;
            pppppppuVar26 = &pppppppuStack_110;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        piVar9 = (int *)func_0x00f78af4();
        piStack_190 = piVar22;
        piStack_188 = piVar8;
        piStack_180 = piVar18;
        pdStack_178 = pdVar21;
        pppppppuStack_170 = &pppppppuStack_110;
        puStack_168 = &Atlas_Audio_AtlasAudioManager__SpeakShield;
        piVar8 = piVar9;
        if ((bRam0000000003eb47e1 & 1) == 0) {
          piVar8 = (int *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e1 = 1;
        }
        lVar14 = *(long *)(piVar9 + 0x12);
        if (lVar14 == 0) {
          return piVar8;
        }
        piVar22 = *(int **)(piVar9 + 10);
        lVar10 = lVar14;
        unaff_x22 = piStack_190;
        unaff_x20 = piStack_180;
        unaff_x29 = pppppppuStack_170;
        unaff_x30 = puStack_168;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] != 0)) {
joined_r0x0145bba8:
          auVar35._8_8_ = lVar14;
          auVar35._0_8_ = pdStack_178;
          piStack_190 = unaff_x22;
          piStack_180 = unaff_x20;
          pppppppuStack_170 = unaff_x29;
          puStack_168 = unaff_x30;
          if (piVar22 != (int *)0x0) {
            lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
            lVar14 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
            piVar18 = *(int **)(lVar10 + 0xb8);
            iVar28 = *(int *)(lVar10 + 0x180);
            iVar7 = 10;
            pdVar21 = (dword *)((long)&MACH_HEADER.magic + 1);
            ppiVar5 = (int **)&uStack_160;
            unaff_x21 = piStack_188;
            uVar29 = _UNK_033f813c;
            goto code_r0x014fe2a8;
          }
        }
        else {
          func_0x00f78ad0();
          lVar10 = *(long *)(piVar9 + 0x12);
          unaff_x22 = piStack_190;
          unaff_x20 = piStack_180;
          unaff_x29 = pppppppuStack_170;
          unaff_x30 = puStack_168;
          if (lVar10 != 0) goto joined_r0x0145bba8;
        }
        auVar37 = func_0x00f78af4();
        lVar17 = auVar37._8_8_;
        piStack_1c0 = (int *)0x3d1ff28;
        puStack_198 = &Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
        piStack_1b8 = piVar9;
        piStack_1b0 = piVar22;
        lStack_1a8 = lVar14;
        pppppppuStack_1a0 = &pppppppuStack_170;
        if ((bRam0000000003eb47e2 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e2 = 1;
        }
        if (lVar17 != 0) {
          piVar8 = (int *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar17,0);
          if ((int)piVar8 == 0) {
            return piVar8;
          }
          piVar22 = *(int **)(auVar37._0_8_ + 0x28);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar35._8_8_ = lVar17;
          auVar35._0_8_ = lStack_1a8;
          lVar10 = *(long *)(auVar37._0_8_ + 0x48);
          if ((lVar10 != 0) && (piVar22 != (int *)0x0)) {
            lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
            lVar14 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
            piVar18 = *(int **)(lVar10 + 0xb8);
            iVar28 = *(int *)(lVar10 + 0x180);
            uVar29 = 0;
            iVar7 = 6;
            pdVar21 = (dword *)((long)&MACH_HEADER.magic + 3);
            ppiVar5 = &piStack_190;
            unaff_x20 = piStack_1b0;
            unaff_x21 = piStack_1b8;
            unaff_x22 = piStack_1c0;
            unaff_x29 = pppppppuStack_1a0;
            unaff_x30 = puStack_198;
            goto code_r0x014fe2a8;
          }
        }
        auVar35 = func_0x00f78af4();
        pdVar21 = auVar35._8_8_;
        puVar6 = &uStack_220;
        puStack_1c8 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
        uStack_220 = unaff_d9;
        uStack_218 = unaff_d8;
        pppppppuStack_1d0 = &pppppppuStack_1a0;
        if ((bRam0000000003eb47e3 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e3 = 1;
        }
        if (pdVar21 != (dword *)0x0) {
          piVar8 = (int *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar21,0);
          lVar14 = 0x28;
          if ((int)piVar8 == 0) {
            lVar14 = 0x30;
          }
          piVar18 = *(int **)(auVar35._0_8_ + lVar14);
          if (piVar18 == (int *)0x0) {
            return piVar8;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          lVar14 = *(long *)(auVar35._0_8_ + 0x48);
          if (lVar14 != 0) {
            lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
            uVar23 = *(undefined8 *)(lVar14 + 0xb8);
            uVar24 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar24,uRam0000000003d3bf00);
            uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar24 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar37._8_8_ = uVar25;
            auVar37._0_8_ = uVar24;
            iVar16 = 0xf;
            puVar27 = &UNK_0145bdac;
            pppppppuVar26 = &pppppppuStack_1d0;
            goto code_r0x014fe3e8;
          }
        }
        auVar36 = func_0x00f78af4();
        pdVar21 = auVar36._8_8_;
        lVar14 = auVar36._0_8_;
        puVar6 = &uStack_280;
        puStack_228 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
        pppppppuVar26 = &pppppppuStack_230;
        piVar18 = (int *)0x3eb4000;
        uStack_280 = unaff_d9;
        uStack_278 = unaff_d8;
        pppppppuStack_230 = &pppppppuStack_1d0;
        if ((bRam0000000003eb47e4 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e4 = 1;
        }
        if (pdVar21 != (dword *)0x0) {
          piVar8 = (int *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar21,0);
          lVar17 = 0x28;
          if ((int)piVar8 == 0) {
            lVar17 = 0x30;
          }
          piVar18 = *(int **)(lVar14 + lVar17);
          if (piVar18 == (int *)0x0) {
            return piVar8;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(lVar14 + 0x48) != 0) {
            lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
            uVar23 = *(undefined8 *)(*(long *)(lVar14 + 0x48) + 0xb8);
            uVar24 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar24,uRam0000000003d3bf00);
            uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar24 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar37._8_8_ = uVar25;
            auVar37._0_8_ = uVar24;
            iVar16 = 0x11;
            puVar27 = &UNK_0145bf54;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        lVar17 = func_0x00f78af4();
        auVar35._8_8_ = extraout_x1;
        auVar35._0_8_ = lVar17;
        ppiVar5 = (int **)&uStack_2c0;
        uStack_2b0 = 0x3d1ff28;
        puStack_288 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
        unaff_x29 = &pppppppuStack_290;
        uStack_2c0 = unaff_d9;
        uStack_2b8 = unaff_d8;
        piStack_2a0 = piVar18;
        pppppppuStack_290 = pppppppuVar26;
        if ((bRam0000000003eb47e5 & 1) == 0) {
          lStack_2a8 = lVar14;
          pdStack_298 = pdVar21;
          func_0x00f78a20(0x3d1ff28);
          auVar36._8_8_ = pdStack_298;
          auVar36._0_8_ = lStack_2a8;
          bRam0000000003eb47e5 = 1;
        }
        pdStack_298 = auVar36._8_8_;
        lStack_2a8 = auVar36._0_8_;
        unaff_d8 = extraout_d0 & 0xffffffff;
        if (extraout_x1 == (int *)0x0) {
code_r0x0145c21c:
          pdStack_298 = auVar36._8_8_;
          lStack_2a8 = auVar36._0_8_;
          fVar31 = (float)func_0x00f78af4();
          puStack_2c8 = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
          uStack_2f0 = unaff_d9;
          uStack_2e8 = unaff_d8;
          piStack_2e0 = extraout_x1;
          lStack_2d8 = lVar17;
          pppppppuStack_2d0 = unaff_x29;
          if ((bRam0000000003eb47e6 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d24568);
            bRam0000000003eb47e6 = 1;
          }
          if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uStack_2f8 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
          if (((*(byte *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          fVar32 = _UNK_033f8148;
          if (fVar31 != 0.0) {
            fVar32 = fVar31;
          }
          fVar31 = INFINITY;
          if (fVar32 != -INFINITY) {
            fVar31 = ABS(SQRT(fVar32));
          }
          piVar8 = (int *)/*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar31,&uStack_2f8,
                                          *(undefined8 *)
                                           (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x388),1,0);
          return piVar8;
        }
        iVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
        if ((iVar7 != 0) && (piVar8 = (int *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)piVar8 == 0)) {
          return piVar8;
        }
        auVar36._8_8_ = pdStack_298;
        auVar36._0_8_ = lStack_2a8;
        if (*(long *)(lVar17 + 0x30) == 0) goto code_r0x0145c21c;
        piVar8 = (int *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar17 + 0x30),0);
        if ((((ulong)piVar8 & 1) != 0) || (*(int *)(lVar17 + 0x50) != 1)) {
          return piVar8;
        }
        unaff_x22 = (int *)0x3d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        lVar14 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e);
        if (*(float *)(lVar14 + 0x30) <= (float)extraout_d0) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
        }
        if (0.0 <= *(float *)(lVar17 + 0x88)) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
        }
        if ((char)extraout_x1[0xe] == '\0') {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
        }
        fVar31 = *(float *)(lVar17 + 0x8c);
        unaff_d8 = (ulong)(uint)fVar31;
        piVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
          piVar8 = (int *)func_0x00f78ad0();
          lVar14 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e);
        }
        if (fVar31 <= *(float *)(lVar14 + 800)) {
          return piVar8;
        }
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
        if (iVar7 == 2) {
          piVar22 = *(int **)(lVar17 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar3._8_8_ = pdStack_298;
          auVar3._0_8_ = lStack_2a8;
          auVar36._8_8_ = pdStack_298;
          auVar36._0_8_ = lStack_2a8;
          lVar10 = *(long *)(lVar17 + 0x48);
          if ((lVar10 == 0) || (auVar36 = auVar3, piVar22 == (int *)0x0)) goto code_r0x0145c21c;
          lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
          lVar14 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
          piVar18 = *(int **)(lVar10 + 0xb8);
          iVar28 = *(int *)(lVar10 + 0x180);
          uVar29 = 0x3f800000;
          iVar7 = 6;
        }
        else if (iVar7 == 1) {
          piVar22 = *(int **)(lVar17 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar36._8_8_ = pdStack_298;
          auVar36._0_8_ = lStack_2a8;
          if (piVar22 == (int *)0x0) goto code_r0x0145c21c;
          piVar18 = *(int **)(extraout_x1 + 0x2e);
          iVar28 = extraout_x1[0x60];
          lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x378);
          uVar29 = 0;
          iVar7 = 1;
          lVar14 = lVar17;
        }
        else {
          if (iVar7 != 0) {
            if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
              func_0x00f78ad0();
            }
            piVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
            *(undefined4 *)(lVar17 + 0x88) =
                 *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x34);
            return piVar8;
          }
          piVar22 = *(int **)(lVar17 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar36._8_8_ = pdStack_298;
          auVar36._0_8_ = lStack_2a8;
          if (piVar22 == (int *)0x0) goto code_r0x0145c21c;
          piVar18 = *(int **)(extraout_x1 + 0x2e);
          iVar28 = extraout_x1[0x60];
          lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x378);
          uVar29 = 0;
          iVar7 = 0;
          lVar14 = lVar17;
        }
        pdVar21 = &MACH_HEADER.cputype;
        unaff_x30 = &UNK_0145c1e0;
        unaff_x20 = extraout_x1;
        unaff_x21 = piVar22;
        goto code_r0x014fe2a8;
      }
    }
    lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
    uVar23 = *(undefined8 *)(pdVar20 + 0x2e);
    uVar24 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar24,uRam0000000003d3bf00);
    uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
    uVar24 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar37._8_8_ = uVar25;
    auVar37._0_8_ = uVar24;
    iVar16 = 1;
    puVar27 = &UNK_0145b660;
    pppppppuVar26 = &ppppppuStack_50;
code_r0x014fe3e8:
    lVar14 = auVar37._0_8_;
    *(undefined8 *)((long)puVar6 + -0x30) = uVar23;
    *(long *)((long)puVar6 + -0x28) = lVar17;
    *(int **)((long)puVar6 + -0x20) = piVar18;
    *(dword **)((long)puVar6 + -0x18) = pdVar21;
    *(undefined8 ********)((long)puVar6 + -0x10) = pppppppuVar26;
    *(undefined **)((long)puVar6 + -8) = puVar27;
    piVar8 = (int *)/*System.Object$$.ctor*/ func_0x0294d018(lVar14,0);
    *(long *)(lVar14 + 0x10) = auVar37._8_8_;
    *(float *)(lVar14 + 0x18) = (float)iVar16;
    return piVar8;
  }
  piVar8 = (int *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
  if ((int)piVar8 == 0) {
    return piVar8;
  }
  uVar29 = 0x40000000;
  if (8 < param_6) {
    uVar29 = 0x40400000;
  }
  uVar34 = 0x3f800000;
  if (3 < param_6) {
    uVar34 = uVar29;
  }
  uVar29 = 0;
  if (1 < (int)param_6) {
    uVar29 = uVar34;
  }
  /*Atlas.Audio.KartAudio$$OnRaceFinished*/ func_0x015c133c(param_5,0);
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  piVar8 = (int *)/*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60(uVar29,param_4,
                                  *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x370),0
                                  ,0);
  piVar22 = *(int **)(param_4 + 0x28);
  if (piVar22 == (int *)0x0) {
    return piVar8;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  piVar18 = *(int **)(param_5 + 0xb8);
  iVar28 = *(int *)(param_5 + 0x180);
  lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x370);
  iVar7 = 0;
  pdVar21 = (dword *)((long)&MACH_HEADER.magic + 1);
  ppiVar5 = (int **)register0x00000008;
  lVar14 = 0;
  uVar29 = 0;
code_r0x014fe2a8:
  uVar23 = auVar35._8_8_;
  auVar38._8_8_ = uVar23;
  auVar38._0_8_ = piVar22;
  puVar6 = (ulong *)((long)ppiVar5 + -0x70);
  *(ulong *)((long)ppiVar5 + -0x70) = unaff_d9;
  *(ulong *)((long)ppiVar5 + -0x68) = unaff_d8;
  *(undefined8 *)((long)ppiVar5 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppiVar5 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppiVar5 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppiVar5 + -0x48) = unaff_x25;
  *(undefined8 *)((long)ppiVar5 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppiVar5 + -0x38) = unaff_x23;
  *(int **)((long)ppiVar5 + -0x30) = unaff_x22;
  *(int **)((long)ppiVar5 + -0x28) = unaff_x21;
  *(int **)((long)ppiVar5 + -0x20) = unaff_x20;
  *(long *)((long)ppiVar5 + -0x18) = auVar35._0_8_;
  *(undefined8 ********)((long)ppiVar5 + -0x10) = unaff_x29;
  *(undefined **)((long)ppiVar5 + -8) = unaff_x30;
  lVar10 = lVar17;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  iVar16 = (int)lVar10;
  if (lVar14 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(piVar8,uRam0000000003d3bf00);
    lVar10 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar10,0);
    *(long *)(lVar10 + 0x10) = lVar14;
    *(float *)(lVar10 + 0x18) = (float)iVar7;
    if (piVar8 == (int *)0x0) {
      puVar27 = &Atlas_Audio_SpeechParam___ctor;
      auVar37 = func_0x00f78af4();
      pppppppuVar26 = (undefined8 *******)((long)ppiVar5 + -0x10);
      goto code_r0x014fe3e8;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(piVar8,lVar10,uRam0000000003d3bf08);
  }
  uVar24 = *(undefined8 *)((long)ppiVar5 + -0x50);
  uVar1 = *(undefined8 *)((long)ppiVar5 + -0x48);
  uVar25 = *(undefined8 *)((long)ppiVar5 + -0x60);
  uVar2 = *(undefined8 *)((long)ppiVar5 + -0x58);
  *(undefined8 *)((long)ppiVar5 + -0x50) = *(undefined8 *)((long)ppiVar5 + -0x70);
  *(undefined8 *)((long)ppiVar5 + -0x48) = *(undefined8 *)((long)ppiVar5 + -0x68);
  *(undefined8 *)((long)ppiVar5 + -0x40) = *(undefined8 *)((long)ppiVar5 + -0x40);
  *(undefined8 *)((long)ppiVar5 + -0x38) = *(undefined8 *)((long)ppiVar5 + -0x38);
  *(undefined8 *)((long)ppiVar5 + -0x30) = *(undefined8 *)((long)ppiVar5 + -0x30);
  *(undefined8 *)((long)ppiVar5 + -0x28) = *(undefined8 *)((long)ppiVar5 + -0x28);
  *(undefined8 *)((long)ppiVar5 + -0x20) = *(undefined8 *)((long)ppiVar5 + -0x20);
  *(undefined8 *)((long)ppiVar5 + -0x18) = *(undefined8 *)((long)ppiVar5 + -0x18);
  *(undefined8 *)((long)ppiVar5 + -0x10) = *(undefined8 *)((long)ppiVar5 + -0x10);
  *(undefined8 *)((long)ppiVar5 + -8) = *(undefined8 *)((long)ppiVar5 + -8);
  *(int *)((long)ppiVar5 + -0x54) = (int)pdVar21;
  lVar14 = lVar17;
  piVar19 = piVar18;
  piVar9 = piVar8;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(iVar28,uVar29,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if ((char)piVar22[0xd] == '\0') {
code_r0x014fe49c:
    piVar9 = (int *)((long)ppiVar5 + -0x54);
    puVar27 = &UNK_014fe4b4;
    lVar14 = lVar17;
    piVar19 = piVar8;
  }
  else {
    if (*(long *)(piVar22 + 4) != 0) {
      if (*(char *)(*(long *)(piVar22 + 4) + 0xcb) == '\0') {
        return (int *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar27 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar38 = func_0x00f78af4();
  }
  lVar15 = auVar38._8_8_;
  lVar10 = auVar38._0_8_;
  *(undefined8 *)((long)ppiVar5 + -0xc0) = uVar25;
  *(undefined8 *)((long)ppiVar5 + -0xb8) = uVar2;
  *(undefined8 *)((long)ppiVar5 + -0xb0) = uVar24;
  *(undefined8 *)((long)ppiVar5 + -0xa8) = uVar1;
  *(undefined8 *)((long)ppiVar5 + -0xa0) = 0x3eb4000;
  *(undefined8 *)((long)ppiVar5 + -0x98) = uVar23;
  *(long *)((long)ppiVar5 + -0x90) = lVar17;
  *(int **)((long)ppiVar5 + -0x88) = piVar22;
  *(int **)((long)ppiVar5 + -0x80) = piVar18;
  *(int **)((long)ppiVar5 + -0x78) = piVar8;
  *(undefined1 **)((long)ppiVar5 + -0x70) = (undefined1 *)((long)ppiVar5 + -0x10);
  *(undefined **)((long)ppiVar5 + -0x68) = puVar27;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)((long)ppiVar5 + -0xe0) = 0;
  *(undefined8 *)((long)ppiVar5 + -0xd8) = 0;
  *(undefined8 *)((long)ppiVar5 + -0xd0) = 0;
  *(undefined4 *)((long)ppiVar5 + -0xe4) = 0;
  if (*(long *)(lVar10 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar10 + 0x10) + 0x90) != '\0') {
    return (int *)0x0;
  }
  if (lVar15 == 0) goto code_r0x014fe8f8;
  uVar11 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar15,0);
  if ((uVar11 & 1) != 0) {
    return (int *)0x0;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar14,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350),0)
  ;
  if (iVar7 != 0) {
    if (piVar19 == (int *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)ppiVar5 + -0x100),piVar19,uRam0000000003d3bf10);
    *(undefined8 *)((long)ppiVar5 + -0xd8) = *(undefined8 *)((long)ppiVar5 + -0xf8);
    *(undefined8 *)((long)ppiVar5 + -0xe0) = *(undefined8 *)((long)ppiVar5 + -0x100);
    *(undefined8 *)((long)ppiVar5 + -0xd0) = *(undefined8 *)((long)ppiVar5 + -0xf0);
    while (uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)ppiVar5 + -0xe0),uRam0000000003d32f58),
          (uVar11 & 1) != 0) {
      lVar17 = *(long *)((long)ppiVar5 + -0xd0);
      if (lVar17 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar24 = *(undefined8 *)(lVar17 + 0x10);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar24,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310),0);
      if ((uVar11 & 1) != 0) {
        fVar32 = *(float *)(lVar17 + 0x18);
        fVar31 = -fVar32;
        if (fVar32 != INFINITY) {
          fVar31 = fVar32;
        }
        *(int *)((long)ppiVar5 + -0xe4) = (int)fVar31;
        plVar12 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,(undefined1 *)((long)ppiVar5 + -0xe4)
                                         );
        if (plVar12 == (long *)0x0) goto code_r0x014fe8fc;
        uVar24 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        puVar13 = (undefined4 *)func_0x00f78ae4(plVar12);
        *(undefined4 *)((long)ppiVar5 + -0xe4) = *puVar13;
        lVar14 = /*System.String$$Concat*/ func_0x029bdb88(lVar14,uVar24,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)ppiVar5 + -0xe0),uRam0000000003d32f50);
  }
  if (*(long *)(lVar10 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar7 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar10 + 0x28),lVar14,uRam0000000003d30020);
  if (iVar7 == 0) {
code_r0x014fe888:
    piVar8 = (int *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar10 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar10 + 0x28),lVar14,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*piVar9 - 1U < 2) {
        iVar7 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      iVar7 = 1;
code_r0x014fe860:
      *piVar9 = iVar7;
    }
    iVar7 = (int)extraout_x1_00;
    if (iVar7 == 3) {
      if ((*(long *)(lVar15 + 0xa0) == 0) ||
         (lVar14 = *(long *)(*(long *)(lVar15 + 0xa0) + 0x90), lVar14 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar4)();
      }
      iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar14,0);
      if (1 < iVar7) {
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (int *)(ulong)(iVar7 < 3);
      }
      uVar11 = 2;
    }
    else {
      uVar11 = extraout_x1_00;
      if (iVar7 != 2) {
        if (iVar7 == 0) {
          piVar8 = (int *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar15,0);
          return piVar8;
        }
        goto code_r0x014fe888;
      }
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar11,0);
    piVar8 = (int *)(ulong)(iVar7 == 0);
  }
  return piVar8;
}



// ============================================================
// RVA: 0x145b55c | Atlas.Audio.AtlasAudioManager.SpeakIntro
// ============================================================

/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * Atlas_Audio_AtlasAudioManager__SpeakIntro
                (undefined1 param_1 [16],uint param_2,undefined4 param_3,int *param_4,
                undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  int **ppiVar5;
  ulong *puVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 *puVar14;
  long lVar15;
  int *extraout_x1;
  long lVar16;
  ulong extraout_x1_00;
  long lVar17;
  int iVar18;
  dword *pdVar19;
  dword *pdVar20;
  int *piVar21;
  long lVar22;
  undefined8 uVar23;
  int *piVar24;
  undefined8 unaff_x23;
  undefined8 unaff_x25;
  undefined8 uVar25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar26;
  undefined8 *******pppppppuVar27;
  undefined *puVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  ulong extraout_d0;
  uint uVar34;
  undefined4 uVar35;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  int *piStack_2a0;
  long lStack_298;
  undefined8 *******pppppppuStack_290;
  undefined *puStack_288;
  ulong uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  int *piStack_260;
  dword *pdStack_258;
  undefined8 *******pppppppuStack_250;
  undefined *puStack_248;
  ulong uStack_240;
  ulong uStack_238;
  undefined8 *******pppppppuStack_1f0;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  int *piStack_180;
  int *piStack_178;
  int *piStack_170;
  long lStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  int *piStack_150;
  int *piStack_148;
  int *piStack_140;
  dword *pdStack_138;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  
  puVar6 = (ulong *)&stack0xffffffffffffffa0;
  piVar8 = param_4;
  if ((bRam0000000003eb47de & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    piVar8 = (int *)func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47de = 1;
  }
  pdVar20 = *(dword **)(param_4 + 0x12);
  if ((pdVar20 == (dword *)0x0) || (piVar21 = *(int **)(param_4 + 10), piVar21 == (int *)0x0)) {
    return piVar8;
  }
  pdVar19 = pdVar20;
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
    pdVar19 = *(dword **)(param_4 + 0x12);
    if (pdVar19 == (dword *)0x0) {
      auVar36 = func_0x00f78af4();
      piVar11 = auVar36._8_8_;
      piVar21 = auVar36._0_8_;
      ppiVar5 = (int **)&stack0xffffffffffffff40;
      puStack_68 = &Atlas_Audio_AtlasAudioManager__SpeakOvertake;
      piVar24 = (int *)0x3eb4000;
      piVar8 = piVar21;
      pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
      if ((bRam0000000003eb47df & 1) == 0) {
        piVar8 = (int *)func_0x00f78a20(0x3d1ff28);
        bRam0000000003eb47df = 1;
      }
      if (piVar21[0x14] != 0) {
        return piVar8;
      }
      lVar22 = *(long *)(piVar21 + 0x1a);
      if (lVar22 == 0) {
        return piVar8;
      }
      if ((int)(*(uint *)(lVar22 + 0x18) - 1) <= param_6) {
        return piVar8;
      }
      if ((uint)((long)param_6 + 1) < *(uint *)(lVar22 + 0x18)) {
        lVar22 = *(long *)(lVar22 + ((long)param_6 + 1) * 8 + 0x20);
        if (((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) ||
           (piVar11 == (int *)0x0)) {
code_r0x0145b92c:
          func_0x00f78af4();
          goto code_r0x0145b930;
        }
        piVar8 = *(int **)(lVar22 + 0x70);
        uVar12 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(piVar11,0);
        if ((uVar12 & 1) == 0) {
          if (piVar8 == (int *)0x0) goto code_r0x0145b92c;
          piVar10 = (int *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(piVar8,0);
          if ((int)piVar10 == 0) {
            return piVar10;
          }
        }
        if (((*(long *)(piVar11 + 0x2e) == 0) ||
            (uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(piVar11 + 0x2e),0), piVar8 == (int *)0x0)) ||
           (*(long *)(piVar8 + 0x2e) == 0)) goto code_r0x0145b92c;
        unaff_d9 = (ulong)param_2;
        uVar34 = param_2;
        uVar35 = param_3;
        uVar30 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(piVar8 + 0x2e),0);
        fVar31 = (float)/*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(uVar29,param_2,param_3,uVar30,uVar34,uVar35,0);
        unaff_x23 = 0x3d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        lVar22 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e);
        if (*(float *)(lVar22 + 0x31c) <= fVar31 || piVar8 == piVar11) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
        }
        fVar31 = (float)piVar21[0x1d];
        unaff_d8 = (ulong)(uint)fVar31;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
          lVar22 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e);
        }
        if (fVar31 < *(float *)(lVar22 + 0x318)) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
        }
        piVar24 = *(int **)(piVar21 + 10);
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        if (piVar24 == (int *)0x0) goto code_r0x0145b92c;
        piVar21 = *(int **)(piVar11 + 0x2e);
        iVar32 = piVar11[0x60];
        lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x378);
        iVar18 = 0;
        pdVar20 = &MACH_HEADER.cputype;
        lVar17 = lVar22;
        piVar10 = piVar24;
        pppppppuVar26 = &pppppppuStack_70;
        puVar28 = &UNK_0145b8cc;
        uVar29 = 0;
      }
      else {
code_r0x0145b930:
        uVar9 = func_0x00f78b24();
        auVar36 = func_0x00f78ac0(uVar9,0);
        pdVar20 = auVar36._8_8_;
        piVar8 = auVar36._0_8_;
        puVar6 = &uStack_120;
        puStack_c8 = &Atlas_Audio_AtlasAudioManager__SpeakRespawning;
        piVar21 = (int *)0x3eb4000;
        uStack_120 = unaff_d9;
        uStack_118 = unaff_d8;
        pppppppuStack_d0 = &pppppppuStack_70;
        if ((bRam0000000003eb47e0 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e0 = 1;
        }
        if (pdVar20 != (dword *)0x0) {
          piVar11 = (int *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar20,0);
          lVar22 = 0x28;
          if ((int)piVar11 == 0) {
            lVar22 = 0x30;
          }
          piVar21 = *(int **)((long)piVar8 + lVar22);
          if (piVar21 == (int *)0x0) {
            return piVar11;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(piVar8 + 0x12) != 0) {
            lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
            uVar23 = *(undefined8 *)(*(long *)(piVar8 + 0x12) + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar38._8_8_ = uVar25;
            auVar38._0_8_ = uVar9;
            iVar7 = 5;
            puVar28 = &UNK_0145ba68;
            pppppppuVar27 = &pppppppuStack_d0;
            goto code_r0x014fe3e8;
          }
        }
        piVar11 = (int *)func_0x00f78af4();
        piStack_150 = piVar24;
        piStack_148 = piVar8;
        piStack_140 = piVar21;
        pdStack_138 = pdVar20;
        pppppppuStack_130 = &pppppppuStack_d0;
        puStack_128 = &Atlas_Audio_AtlasAudioManager__SpeakShield;
        piVar8 = piVar11;
        if ((bRam0000000003eb47e1 & 1) == 0) {
          piVar8 = (int *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e1 = 1;
        }
        lVar22 = *(long *)(piVar11 + 0x12);
        if (lVar22 == 0) {
          return piVar8;
        }
        piVar24 = *(int **)(piVar11 + 10);
        lVar15 = lVar22;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] != 0)) {
joined_r0x0145bba8:
          auVar36._8_8_ = lVar22;
          auVar36._0_8_ = pdStack_138;
          if (piVar24 != (int *)0x0) {
            lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
            lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
            piVar21 = *(int **)(lVar15 + 0xb8);
            iVar32 = *(int *)(lVar15 + 0x180);
            iVar18 = 10;
            pdVar20 = (dword *)((long)&MACH_HEADER.magic + 1);
            ppiVar5 = (int **)&uStack_120;
            piVar11 = piStack_140;
            piVar8 = piStack_148;
            piVar10 = piStack_150;
            pppppppuVar26 = pppppppuStack_130;
            puVar28 = puStack_128;
            uVar29 = _UNK_033f813c;
            goto code_r0x014fe2a8;
          }
        }
        else {
          func_0x00f78ad0();
          lVar15 = *(long *)(piVar11 + 0x12);
          if (lVar15 != 0) goto joined_r0x0145bba8;
        }
        auVar38 = func_0x00f78af4();
        lVar15 = auVar38._8_8_;
        piStack_180 = (int *)0x3d1ff28;
        puStack_158 = &Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
        piStack_178 = piVar11;
        piStack_170 = piVar24;
        lStack_168 = lVar22;
        pppppppuStack_160 = &pppppppuStack_130;
        if ((bRam0000000003eb47e2 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e2 = 1;
        }
        if (lVar15 != 0) {
          piVar8 = (int *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar15,0);
          if ((int)piVar8 == 0) {
            return piVar8;
          }
          piVar24 = *(int **)(auVar38._0_8_ + 0x28);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar36._8_8_ = lVar15;
          auVar36._0_8_ = lStack_168;
          lVar15 = *(long *)(auVar38._0_8_ + 0x48);
          if ((lVar15 != 0) && (piVar24 != (int *)0x0)) {
            lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
            lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
            piVar21 = *(int **)(lVar15 + 0xb8);
            iVar32 = *(int *)(lVar15 + 0x180);
            uVar29 = 0;
            iVar18 = 6;
            pdVar20 = (dword *)((long)&MACH_HEADER.magic + 3);
            ppiVar5 = &piStack_150;
            piVar11 = piStack_170;
            piVar8 = piStack_178;
            piVar10 = piStack_180;
            pppppppuVar26 = pppppppuStack_160;
            puVar28 = puStack_158;
            goto code_r0x014fe2a8;
          }
        }
        auVar36 = func_0x00f78af4();
        pdVar20 = auVar36._8_8_;
        puVar6 = &uStack_1e0;
        puStack_188 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
        uStack_1e0 = unaff_d9;
        uStack_1d8 = unaff_d8;
        pppppppuStack_190 = &pppppppuStack_160;
        if ((bRam0000000003eb47e3 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e3 = 1;
        }
        if (pdVar20 != (dword *)0x0) {
          piVar8 = (int *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar20,0);
          lVar22 = 0x28;
          if ((int)piVar8 == 0) {
            lVar22 = 0x30;
          }
          piVar21 = *(int **)(auVar36._0_8_ + lVar22);
          if (piVar21 == (int *)0x0) {
            return piVar8;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          lVar15 = *(long *)(auVar36._0_8_ + 0x48);
          if (lVar15 != 0) {
            lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
            uVar23 = *(undefined8 *)(lVar15 + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar38._8_8_ = uVar25;
            auVar38._0_8_ = uVar9;
            iVar7 = 0xf;
            puVar28 = &UNK_0145bdac;
            pppppppuVar27 = &pppppppuStack_190;
            goto code_r0x014fe3e8;
          }
        }
        auVar37 = func_0x00f78af4();
        pdVar20 = auVar37._8_8_;
        lVar15 = auVar37._0_8_;
        puVar6 = &uStack_240;
        puStack_1e8 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
        pppppppuVar27 = &pppppppuStack_1f0;
        piVar21 = (int *)0x3eb4000;
        uStack_240 = unaff_d9;
        uStack_238 = unaff_d8;
        pppppppuStack_1f0 = &pppppppuStack_190;
        if ((bRam0000000003eb47e4 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e4 = 1;
        }
        if (pdVar20 != (dword *)0x0) {
          piVar8 = (int *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar20,0);
          lVar22 = 0x28;
          if ((int)piVar8 == 0) {
            lVar22 = 0x30;
          }
          piVar21 = *(int **)(lVar15 + lVar22);
          if (piVar21 == (int *)0x0) {
            return piVar8;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(lVar15 + 0x48) != 0) {
            lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
            uVar23 = *(undefined8 *)(*(long *)(lVar15 + 0x48) + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar38._8_8_ = uVar25;
            auVar38._0_8_ = uVar9;
            iVar7 = 0x11;
            puVar28 = &UNK_0145bf54;
            goto code_r0x014fe3e8;
          }
        }
        lVar22 = func_0x00f78af4();
        auVar36._8_8_ = extraout_x1;
        auVar36._0_8_ = lVar22;
        ppiVar5 = (int **)&uStack_280;
        uStack_270 = 0x3d1ff28;
        puStack_248 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
        pppppppuVar26 = &pppppppuStack_250;
        uStack_280 = unaff_d9;
        uStack_278 = unaff_d8;
        piStack_260 = piVar21;
        pppppppuStack_250 = pppppppuVar27;
        if ((bRam0000000003eb47e5 & 1) == 0) {
          lStack_268 = lVar15;
          pdStack_258 = pdVar20;
          func_0x00f78a20(0x3d1ff28);
          auVar37._8_8_ = pdStack_258;
          auVar37._0_8_ = lStack_268;
          bRam0000000003eb47e5 = 1;
        }
        pdStack_258 = auVar37._8_8_;
        lStack_268 = auVar37._0_8_;
        unaff_d8 = extraout_d0 & 0xffffffff;
        if (extraout_x1 == (int *)0x0) {
code_r0x0145c21c:
          pdStack_258 = auVar37._8_8_;
          lStack_268 = auVar37._0_8_;
          fVar31 = (float)func_0x00f78af4();
          puStack_288 = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
          uStack_2b0 = unaff_d9;
          uStack_2a8 = unaff_d8;
          piStack_2a0 = extraout_x1;
          lStack_298 = lVar22;
          pppppppuStack_290 = pppppppuVar26;
          if ((bRam0000000003eb47e6 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d24568);
            bRam0000000003eb47e6 = 1;
          }
          if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uStack_2b8 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
          if (((*(byte *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          fVar33 = _UNK_033f8148;
          if (fVar31 != 0.0) {
            fVar33 = fVar31;
          }
          fVar31 = INFINITY;
          if (fVar33 != -INFINITY) {
            fVar31 = ABS(SQRT(fVar33));
          }
          piVar8 = (int *)/*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar31,&uStack_2b8,
                                          *(undefined8 *)
                                           (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x388),1,0);
          return piVar8;
        }
        iVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
        if ((iVar7 != 0) && (piVar8 = (int *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)piVar8 == 0)) {
          return piVar8;
        }
        auVar37._8_8_ = pdStack_258;
        auVar37._0_8_ = lStack_268;
        if (*(long *)(lVar22 + 0x30) == 0) goto code_r0x0145c21c;
        piVar8 = (int *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar22 + 0x30),0);
        if ((((ulong)piVar8 & 1) != 0) || (*(int *)(lVar22 + 0x50) != 1)) {
          return piVar8;
        }
        piVar10 = (int *)0x3d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        lVar15 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e);
        if (*(float *)(lVar15 + 0x30) <= (float)extraout_d0) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
        }
        if (0.0 <= *(float *)(lVar22 + 0x88)) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
        }
        if ((char)extraout_x1[0xe] == '\0') {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
        }
        fVar31 = *(float *)(lVar22 + 0x8c);
        unaff_d8 = (ulong)(uint)fVar31;
        piVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
          piVar8 = (int *)func_0x00f78ad0();
          lVar15 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e);
        }
        if (fVar31 <= *(float *)(lVar15 + 800)) {
          return piVar8;
        }
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
        if (iVar7 == 2) {
          piVar24 = *(int **)(lVar22 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar3._8_8_ = pdStack_258;
          auVar3._0_8_ = lStack_268;
          auVar37._8_8_ = pdStack_258;
          auVar37._0_8_ = lStack_268;
          lVar15 = *(long *)(lVar22 + 0x48);
          if ((lVar15 == 0) || (auVar37 = auVar3, piVar24 == (int *)0x0)) goto code_r0x0145c21c;
          lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
          lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
          piVar21 = *(int **)(lVar15 + 0xb8);
          iVar32 = *(int *)(lVar15 + 0x180);
          uVar29 = 0x3f800000;
          iVar18 = 6;
        }
        else if (iVar7 == 1) {
          piVar24 = *(int **)(lVar22 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar37._8_8_ = pdStack_258;
          auVar37._0_8_ = lStack_268;
          if (piVar24 == (int *)0x0) goto code_r0x0145c21c;
          piVar21 = *(int **)(extraout_x1 + 0x2e);
          iVar32 = extraout_x1[0x60];
          lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x378);
          uVar29 = 0;
          iVar18 = 1;
          lVar17 = lVar22;
        }
        else {
          if (iVar7 != 0) {
            if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
              func_0x00f78ad0();
            }
            piVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28;
            *(undefined4 *)(lVar22 + 0x88) =
                 *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x34);
            return piVar8;
          }
          piVar24 = *(int **)(lVar22 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar37._8_8_ = pdStack_258;
          auVar37._0_8_ = lStack_268;
          if (piVar24 == (int *)0x0) goto code_r0x0145c21c;
          piVar21 = *(int **)(extraout_x1 + 0x2e);
          iVar32 = extraout_x1[0x60];
          lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x378);
          uVar29 = 0;
          iVar18 = 0;
          lVar17 = lVar22;
        }
        pdVar20 = &MACH_HEADER.cputype;
        puVar28 = &UNK_0145c1e0;
        piVar11 = extraout_x1;
        piVar8 = piVar24;
      }
code_r0x014fe2a8:
      uVar23 = auVar36._8_8_;
      auVar39._8_8_ = uVar23;
      auVar39._0_8_ = piVar24;
      puVar6 = (ulong *)((long)ppiVar5 + -0x70);
      *(ulong *)((long)ppiVar5 + -0x70) = unaff_d9;
      *(ulong *)((long)ppiVar5 + -0x68) = unaff_d8;
      *(undefined8 *)((long)ppiVar5 + -0x60) = unaff_x28;
      *(undefined8 *)((long)ppiVar5 + -0x58) = unaff_x27;
      *(undefined8 *)((long)ppiVar5 + -0x50) = unaff_x26;
      *(undefined8 *)((long)ppiVar5 + -0x48) = unaff_x25;
      *(undefined8 *)((long)ppiVar5 + -0x40) = 0x3d1ff28;
      *(undefined8 *)((long)ppiVar5 + -0x38) = unaff_x23;
      *(int **)((long)ppiVar5 + -0x30) = piVar10;
      *(int **)((long)ppiVar5 + -0x28) = piVar8;
      *(int **)((long)ppiVar5 + -0x20) = piVar11;
      *(long *)((long)ppiVar5 + -0x18) = auVar36._0_8_;
      *(undefined8 ********)((long)ppiVar5 + -0x10) = pppppppuVar26;
      *(undefined **)((long)ppiVar5 + -8) = puVar28;
      lVar15 = lVar22;
      if ((bRam0000000003eb4cd9 & 1) == 0) {
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        func_0x00f78a20(0x3d24b48);
        bRam0000000003eb4cd9 = 1;
      }
      iVar7 = (int)lVar15;
      if (lVar17 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(piVar8,uRam0000000003d3bf00);
        lVar15 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        /*System.Object$$.ctor*/ func_0x0294d018(lVar15,0);
        *(long *)(lVar15 + 0x10) = lVar17;
        *(float *)(lVar15 + 0x18) = (float)iVar18;
        if (piVar8 == (int *)0x0) {
          puVar28 = &Atlas_Audio_SpeechParam___ctor;
          auVar38 = func_0x00f78af4();
          pppppppuVar27 = (undefined8 *******)((long)ppiVar5 + -0x10);
          goto code_r0x014fe3e8;
        }
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(piVar8,lVar15,uRam0000000003d3bf08);
      }
      uVar9 = *(undefined8 *)((long)ppiVar5 + -0x50);
      uVar1 = *(undefined8 *)((long)ppiVar5 + -0x48);
      uVar25 = *(undefined8 *)((long)ppiVar5 + -0x60);
      uVar2 = *(undefined8 *)((long)ppiVar5 + -0x58);
      *(undefined8 *)((long)ppiVar5 + -0x50) = *(undefined8 *)((long)ppiVar5 + -0x70);
      *(undefined8 *)((long)ppiVar5 + -0x48) = *(undefined8 *)((long)ppiVar5 + -0x68);
      *(undefined8 *)((long)ppiVar5 + -0x40) = *(undefined8 *)((long)ppiVar5 + -0x40);
      *(undefined8 *)((long)ppiVar5 + -0x38) = *(undefined8 *)((long)ppiVar5 + -0x38);
      *(undefined8 *)((long)ppiVar5 + -0x30) = *(undefined8 *)((long)ppiVar5 + -0x30);
      *(undefined8 *)((long)ppiVar5 + -0x28) = *(undefined8 *)((long)ppiVar5 + -0x28);
      *(undefined8 *)((long)ppiVar5 + -0x20) = *(undefined8 *)((long)ppiVar5 + -0x20);
      *(undefined8 *)((long)ppiVar5 + -0x18) = *(undefined8 *)((long)ppiVar5 + -0x18);
      *(undefined8 *)((long)ppiVar5 + -0x10) = *(undefined8 *)((long)ppiVar5 + -0x10);
      *(undefined8 *)((long)ppiVar5 + -8) = *(undefined8 *)((long)ppiVar5 + -8);
      *(int *)((long)ppiVar5 + -0x54) = (int)pdVar20;
      lVar15 = lVar22;
      piVar10 = piVar21;
      piVar11 = piVar8;
      if ((bRam0000000003eb4cda & 1) == 0) {
        func_0x00f78a20(iVar32,uVar29,0x3d3da38);
        bRam0000000003eb4cda = 1;
      }
      if ((char)piVar24[0xd] == '\0') {
code_r0x014fe49c:
        piVar11 = (int *)((long)ppiVar5 + -0x54);
        puVar28 = &UNK_014fe4b4;
        lVar15 = lVar22;
        piVar10 = piVar8;
      }
      else {
        if (*(long *)(piVar24 + 4) != 0) {
          if (*(char *)(*(long *)(piVar24 + 4) + 0xcb) == '\0') {
            return (int *)0x0;
          }
          goto code_r0x014fe49c;
        }
        puVar28 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
        auVar39 = func_0x00f78af4();
      }
      lVar16 = auVar39._8_8_;
      lVar17 = auVar39._0_8_;
      *(undefined8 *)((long)ppiVar5 + -0xc0) = uVar25;
      *(undefined8 *)((long)ppiVar5 + -0xb8) = uVar2;
      *(undefined8 *)((long)ppiVar5 + -0xb0) = uVar9;
      *(undefined8 *)((long)ppiVar5 + -0xa8) = uVar1;
      *(undefined8 *)((long)ppiVar5 + -0xa0) = 0x3eb4000;
      *(undefined8 *)((long)ppiVar5 + -0x98) = uVar23;
      *(long *)((long)ppiVar5 + -0x90) = lVar22;
      *(int **)((long)ppiVar5 + -0x88) = piVar24;
      *(int **)((long)ppiVar5 + -0x80) = piVar21;
      *(int **)((long)ppiVar5 + -0x78) = piVar8;
      *(undefined1 **)((long)ppiVar5 + -0x70) = (undefined1 *)((long)ppiVar5 + -0x10);
      *(undefined **)((long)ppiVar5 + -0x68) = puVar28;
      if ((bRam0000000003eb4cde & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d30020);
        func_0x00f78a20(0x3d30028);
        func_0x00f78a20(0x3d32f50);
        func_0x00f78a20(0x3d32f58);
        func_0x00f78a20(0x3d32f60);
        func_0x00f78a20(0x3d3bf10);
        func_0x00f78a20(0x3d269f8);
        bRam0000000003eb4cde = 1;
      }
      *(undefined8 *)((long)ppiVar5 + -0xe0) = 0;
      *(undefined8 *)((long)ppiVar5 + -0xd8) = 0;
      *(undefined8 *)((long)ppiVar5 + -0xd0) = 0;
      *(undefined4 *)((long)ppiVar5 + -0xe4) = 0;
      if (*(long *)(lVar17 + 0x10) == 0) goto code_r0x014fe8f8;
      if (*(char *)(*(long *)(lVar17 + 0x10) + 0x90) != '\0') {
        return (int *)0x0;
      }
      if (lVar16 == 0) goto code_r0x014fe8f8;
      uVar12 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar16,0);
      if ((uVar12 & 1) != 0) {
        return (int *)0x0;
      }
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar15,*(undefined8 *)
                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350),0);
      if (iVar7 != 0) {
        if (piVar10 == (int *)0x0) goto code_r0x014fe8f8;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)ppiVar5 + -0x100),piVar10,uRam0000000003d3bf10);
        *(undefined8 *)((long)ppiVar5 + -0xd8) = *(undefined8 *)((long)ppiVar5 + -0xf8);
        *(undefined8 *)((long)ppiVar5 + -0xe0) = *(undefined8 *)((long)ppiVar5 + -0x100);
        *(undefined8 *)((long)ppiVar5 + -0xd0) = *(undefined8 *)((long)ppiVar5 + -0xf0);
        while (uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)ppiVar5 + -0xe0),uRam0000000003d32f58),
              (uVar12 & 1) != 0) {
          lVar22 = *(long *)((long)ppiVar5 + -0xd0);
          if (lVar22 == 0) {
            func_0x00f78af4();
            goto code_r0x014fe900;
          }
          uVar9 = *(undefined8 *)(lVar22 + 0x10);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          uVar12 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar9,*(undefined8 *)
                                          (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310),0);
          if ((uVar12 & 1) != 0) {
            fVar33 = *(float *)(lVar22 + 0x18);
            fVar31 = -fVar33;
            if (fVar33 != INFINITY) {
              fVar31 = fVar33;
            }
            *(int *)((long)ppiVar5 + -0xe4) = (int)fVar31;
            plVar13 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,
                                              (undefined1 *)((long)ppiVar5 + -0xe4));
            if (plVar13 == (long *)0x0) goto code_r0x014fe8fc;
            uVar9 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
            puVar14 = (undefined4 *)func_0x00f78ae4(plVar13);
            *(undefined4 *)((long)ppiVar5 + -0xe4) = *puVar14;
            lVar15 = /*System.String$$Concat*/ func_0x029bdb88(lVar15,uVar9,0);
          }
        }
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)ppiVar5 + -0xe0),uRam0000000003d32f50);
      }
      if (*(long *)(lVar17 + 0x28) == 0) goto code_r0x014fe8f8;
      iVar7 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar17 + 0x28),lVar15,uRam0000000003d30020);
      if (iVar7 == 0) {
code_r0x014fe888:
        piVar8 = (int *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        if (*(long *)(lVar17 + 0x28) == 0) goto code_r0x014fe8f8;
        /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar17 + 0x28),lVar15,uRam0000000003d30028);
        if ((extraout_x1_00 & 0xff00000000) == 0) {
          if (*piVar11 - 1U < 2) {
            iVar7 = 4;
            goto code_r0x014fe860;
          }
        }
        else {
          iVar7 = 1;
code_r0x014fe860:
          *piVar11 = iVar7;
        }
        iVar7 = (int)extraout_x1_00;
        if (iVar7 == 3) {
          if ((*(long *)(lVar16 + 0xa0) == 0) ||
             (lVar22 = *(long *)(*(long *)(lVar16 + 0xa0) + 0x90), lVar22 == 0)) {
code_r0x014fe8f8:
            func_0x00f78af4();
code_r0x014fe8fc:
            func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x14fe904);
            (*pcVar4)();
          }
          iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar22,0);
          if (1 < iVar7) {
            iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
            return (int *)(ulong)(iVar7 < 3);
          }
          uVar12 = 2;
        }
        else {
          uVar12 = extraout_x1_00;
          if (iVar7 != 2) {
            if (iVar7 == 0) {
              piVar8 = (int *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar16,0);
              return piVar8;
            }
            goto code_r0x014fe888;
          }
        }
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar12,0);
        piVar8 = (int *)(ulong)(iVar7 == 0);
      }
      return piVar8;
    }
  }
  lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x350);
  uVar23 = *(undefined8 *)(pdVar19 + 0x2e);
  uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
  uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ piRam0000000003d1ff28 + 0x2e) + 0x310);
  uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
  auVar38._8_8_ = uVar25;
  auVar38._0_8_ = uVar9;
  iVar7 = 1;
  puVar28 = (undefined *)0x145b660;
  pppppppuVar27 = (undefined8 *******)&stack0xfffffffffffffff0;
code_r0x014fe3e8:
  lVar15 = auVar38._0_8_;
  *(undefined8 *)((long)puVar6 + -0x30) = uVar23;
  *(long *)((long)puVar6 + -0x28) = lVar22;
  *(int **)((long)puVar6 + -0x20) = piVar21;
  *(dword **)((long)puVar6 + -0x18) = pdVar20;
  *(undefined8 ********)((long)puVar6 + -0x10) = pppppppuVar27;
  *(undefined **)((long)puVar6 + -8) = puVar28;
  piVar8 = (int *)/*System.Object$$.ctor*/ func_0x0294d018(lVar15,0);
  *(long *)(lVar15 + 0x10) = auVar38._8_8_;
  *(float *)(lVar15 + 0x18) = (float)iVar7;
  return piVar8;
}



// ============================================================
// RVA: 0x145b6f0 | Atlas.Audio.AtlasAudioManager.SpeakOvertake
// ============================================================

/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Audio_AtlasAudioManager__SpeakOvertake
                  (undefined1 param_1 [16],uint param_2,undefined4 param_3,dword *param_4,
                  dword *param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  dword **ppdVar5;
  ulong *puVar6;
  int iVar7;
  dword *pdVar8;
  ulong uVar9;
  dword *pdVar10;
  undefined8 uVar11;
  dword *pdVar12;
  dword *pdVar13;
  long lVar14;
  long *plVar15;
  undefined4 *puVar16;
  long lVar17;
  dword *extraout_x1;
  long lVar18;
  ulong extraout_x1_00;
  dword *pdVar19;
  int iVar20;
  dword dVar21;
  long lVar22;
  dword *pdVar23;
  dword *pdVar24;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar26;
  undefined8 *******pppppppuVar27;
  undefined *puVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  ulong extraout_d0;
  uint uVar34;
  undefined4 uVar35;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  dword *pdStack_240;
  dword *pdStack_238;
  undefined8 *******pppppppuStack_230;
  undefined *puStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  dword *pdStack_200;
  dword *pdStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined *puStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  dword *pdStack_120;
  dword *pdStack_118;
  dword *pdStack_110;
  dword *pdStack_108;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  dword *pdStack_f0;
  dword *pdStack_e8;
  dword *pdStack_e0;
  dword *pdStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  
  ppdVar5 = (dword **)&stack0xffffffffffffffa0;
  pdVar24 = (dword *)0x3eb4000;
  pdVar8 = param_4;
  if ((bRam0000000003eb47df & 1) == 0) {
    pdVar8 = (dword *)func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47df = 1;
  }
  if (param_4[0x14] != 0) {
    return pdVar8;
  }
  lVar22 = *(long *)(param_4 + 0x1a);
  if (lVar22 == 0) {
    return pdVar8;
  }
  if ((int)(*(uint *)(lVar22 + 0x18) - 1) <= param_6) {
    return pdVar8;
  }
  if ((uint)((long)param_6 + 1) < *(uint *)(lVar22 + 0x18)) {
    lVar22 = *(long *)(lVar22 + ((long)param_6 + 1) * 8 + 0x20);
    if (((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) ||
       (param_5 == (dword *)0x0)) {
code_r0x0145b92c:
      func_0x00f78af4();
      goto code_r0x0145b930;
    }
    pdVar8 = *(dword **)(lVar22 + 0x70);
    uVar9 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_5,0);
    if ((uVar9 & 1) == 0) {
      if (pdVar8 == (dword *)0x0) goto code_r0x0145b92c;
      pdVar10 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar8,0);
      if ((int)pdVar10 == 0) {
        return pdVar10;
      }
    }
    if (((*(long *)(param_5 + 0x2e) == 0) ||
        (uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_5 + 0x2e),0), pdVar8 == (dword *)0x0)) ||
       (*(long *)(pdVar8 + 0x2e) == 0)) goto code_r0x0145b92c;
    unaff_d9 = (ulong)param_2;
    uVar34 = param_2;
    uVar35 = param_3;
    uVar30 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(pdVar8 + 0x2e),0);
    fVar31 = (float)/*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(uVar29,param_2,param_3,uVar30,uVar34,uVar35,0);
    unaff_x23 = 0x3d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    lVar22 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
    if (*(float *)(lVar22 + 0x31c) <= fVar31 || pdVar8 == param_5) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    fVar31 = (float)param_4[0x1d];
    unaff_d8 = (ulong)(uint)fVar31;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
      lVar22 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
    }
    if (fVar31 < *(float *)(lVar22 + 0x318)) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    pdVar24 = *(dword **)(param_4 + 10);
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    if (pdVar24 == (dword *)0x0) goto code_r0x0145b92c;
    pdVar19 = *(dword **)(param_5 + 0x2e);
    iVar32 = param_5[0x60];
    lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
    iVar20 = 0;
    pdVar10 = &MACH_HEADER.cputype;
    pdVar12 = param_5;
    lVar17 = lVar22;
    pdVar13 = pdVar24;
    pppppppuVar26 = (undefined8 *******)&stack0xfffffffffffffff0;
    puVar28 = &UNK_0145b8cc;
    uVar29 = 0;
  }
  else {
code_r0x0145b930:
    uVar11 = func_0x00f78b24();
    auVar36 = func_0x00f78ac0(uVar11,0);
    pdVar10 = auVar36._8_8_;
    pdVar8 = auVar36._0_8_;
    puVar6 = &uStack_c0;
    puStack_68 = &Atlas_Audio_AtlasAudioManager__SpeakRespawning;
    pdVar19 = (dword *)0x3eb4000;
    uStack_c0 = unaff_d9;
    uStack_b8 = unaff_d8;
    pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb47e0 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e0 = 1;
    }
    if (pdVar10 != (dword *)0x0) {
      pdVar12 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar10,0);
      lVar22 = 0x28;
      if ((int)pdVar12 == 0) {
        lVar22 = 0x30;
      }
      pdVar19 = *(dword **)((long)pdVar8 + lVar22);
      if (pdVar19 == (dword *)0x0) {
        return pdVar12;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      if (*(long *)(pdVar8 + 0x12) != 0) {
        lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        pdVar12 = *(dword **)(*(long *)(pdVar8 + 0x12) + 0xb8);
        uVar11 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar11,uRam0000000003d3bf00);
        uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        uVar11 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar36._8_8_ = uVar25;
        auVar36._0_8_ = uVar11;
        iVar7 = 5;
        puVar28 = &UNK_0145ba68;
        pppppppuVar27 = &pppppppuStack_70;
        goto code_r0x014fe3e8;
      }
    }
    pdVar13 = (dword *)func_0x00f78af4();
    pdStack_f0 = pdVar24;
    pdStack_e8 = pdVar8;
    pdStack_e0 = pdVar19;
    pdStack_d8 = pdVar10;
    pppppppuStack_d0 = &pppppppuStack_70;
    puStack_c8 = &Atlas_Audio_AtlasAudioManager__SpeakShield;
    pdVar8 = pdVar13;
    if ((bRam0000000003eb47e1 & 1) == 0) {
      pdVar8 = (dword *)func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47e1 = 1;
    }
    pdVar23 = *(dword **)(pdVar13 + 0x12);
    if (pdVar23 == (dword *)0x0) {
      return pdVar8;
    }
    pdVar24 = *(dword **)(pdVar13 + 10);
    pdVar8 = pdVar23;
    param_5 = pdStack_e0;
    param_4 = pdStack_d8;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] != 0)) {
joined_r0x0145bba8:
      pdStack_e0 = param_5;
      pdStack_d8 = param_4;
      if (pdVar24 != (dword *)0x0) {
        lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        pdVar19 = *(dword **)(pdVar8 + 0x2e);
        iVar32 = pdVar8[0x60];
        iVar20 = 10;
        pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
        ppdVar5 = (dword **)&uStack_c0;
        pdVar12 = pdVar23;
        pdVar8 = pdStack_e8;
        pdVar13 = pdStack_f0;
        pppppppuVar26 = pppppppuStack_d0;
        puVar28 = puStack_c8;
        uVar29 = _UNK_033f813c;
        goto code_r0x014fe2a8;
      }
    }
    else {
      func_0x00f78ad0();
      pdVar8 = *(dword **)(pdVar13 + 0x12);
      param_5 = pdStack_e0;
      param_4 = pdStack_d8;
      if (pdVar8 != (dword *)0x0) goto joined_r0x0145bba8;
    }
    auVar36 = func_0x00f78af4();
    pdVar12 = auVar36._8_8_;
    pdStack_120 = (dword *)0x3d1ff28;
    puStack_f8 = &Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
    pdStack_118 = pdVar13;
    pdStack_110 = pdVar24;
    pdStack_108 = pdVar23;
    pppppppuStack_100 = &pppppppuStack_d0;
    if ((bRam0000000003eb47e2 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47e2 = 1;
    }
    if (pdVar12 != (dword *)0x0) {
      pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar12,0);
      if ((int)pdVar8 == 0) {
        return pdVar8;
      }
      pdVar24 = *(dword **)(auVar36._0_8_ + 0x28);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar14 = *(long *)(auVar36._0_8_ + 0x48);
      if ((lVar14 != 0) && (pdVar24 != (dword *)0x0)) {
        lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        pdVar19 = *(dword **)(lVar14 + 0xb8);
        iVar32 = *(int *)(lVar14 + 0x180);
        uVar29 = 0;
        iVar20 = 6;
        pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
        ppdVar5 = &pdStack_f0;
        param_4 = pdStack_108;
        param_5 = pdStack_110;
        pdVar8 = pdStack_118;
        pdVar13 = pdStack_120;
        pppppppuVar26 = pppppppuStack_100;
        puVar28 = puStack_f8;
        goto code_r0x014fe2a8;
      }
    }
    auVar36 = func_0x00f78af4();
    pdVar10 = auVar36._8_8_;
    puVar6 = &uStack_180;
    puStack_128 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
    uStack_180 = unaff_d9;
    uStack_178 = unaff_d8;
    pppppppuStack_130 = &pppppppuStack_100;
    if ((bRam0000000003eb47e3 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e3 = 1;
    }
    if (pdVar10 != (dword *)0x0) {
      pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar10,0);
      lVar22 = 0x28;
      if ((int)pdVar8 == 0) {
        lVar22 = 0x30;
      }
      pdVar19 = *(dword **)(auVar36._0_8_ + lVar22);
      if (pdVar19 == (dword *)0x0) {
        return pdVar8;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar17 = *(long *)(auVar36._0_8_ + 0x48);
      if (lVar17 != 0) {
        lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        pdVar12 = *(dword **)(lVar17 + 0xb8);
        uVar11 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar11,uRam0000000003d3bf00);
        uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        uVar11 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar36._8_8_ = uVar25;
        auVar36._0_8_ = uVar11;
        iVar7 = 0xf;
        puVar28 = &UNK_0145bdac;
        pppppppuVar27 = &pppppppuStack_130;
        goto code_r0x014fe3e8;
      }
    }
    auVar37 = func_0x00f78af4();
    pdVar10 = auVar37._8_8_;
    lVar17 = auVar37._0_8_;
    puVar6 = &uStack_1e0;
    puStack_188 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
    pppppppuVar27 = &pppppppuStack_190;
    pdVar19 = (dword *)0x3eb4000;
    uStack_1e0 = unaff_d9;
    uStack_1d8 = unaff_d8;
    pppppppuStack_190 = &pppppppuStack_130;
    if ((bRam0000000003eb47e4 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e4 = 1;
    }
    if (pdVar10 != (dword *)0x0) {
      pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar10,0);
      lVar22 = 0x28;
      if ((int)pdVar8 == 0) {
        lVar22 = 0x30;
      }
      pdVar19 = *(dword **)(lVar17 + lVar22);
      if (pdVar19 == (dword *)0x0) {
        return pdVar8;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      if (*(long *)(lVar17 + 0x48) != 0) {
        lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        pdVar12 = *(dword **)(*(long *)(lVar17 + 0x48) + 0xb8);
        uVar11 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar11,uRam0000000003d3bf00);
        uVar25 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        uVar11 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar36._8_8_ = uVar25;
        auVar36._0_8_ = uVar11;
        iVar7 = 0x11;
        puVar28 = &UNK_0145bf54;
        goto code_r0x014fe3e8;
      }
    }
    param_4 = (dword *)func_0x00f78af4();
    ppdVar5 = (dword **)&uStack_220;
    uStack_210 = 0x3d1ff28;
    puStack_1e8 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
    pppppppuVar26 = &pppppppuStack_1f0;
    uStack_220 = unaff_d9;
    uStack_218 = unaff_d8;
    pdStack_200 = pdVar19;
    pppppppuStack_1f0 = pppppppuVar27;
    if ((bRam0000000003eb47e5 & 1) == 0) {
      lStack_208 = lVar17;
      pdStack_1f8 = pdVar10;
      func_0x00f78a20(0x3d1ff28);
      auVar37._8_8_ = pdStack_1f8;
      auVar37._0_8_ = lStack_208;
      bRam0000000003eb47e5 = 1;
    }
    pdStack_1f8 = auVar37._8_8_;
    lStack_208 = auVar37._0_8_;
    unaff_d8 = extraout_d0 & 0xffffffff;
    if (extraout_x1 == (dword *)0x0) {
code_r0x0145c21c:
      pdStack_1f8 = auVar37._8_8_;
      lStack_208 = auVar37._0_8_;
      fVar31 = (float)func_0x00f78af4();
      puStack_228 = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
      uStack_250 = unaff_d9;
      uStack_248 = unaff_d8;
      pdStack_240 = extraout_x1;
      pdStack_238 = param_4;
      pppppppuStack_230 = pppppppuVar26;
      if ((bRam0000000003eb47e6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d24568);
        bRam0000000003eb47e6 = 1;
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_258 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
      if (((*(byte *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      fVar33 = _UNK_033f8148;
      if (fVar31 != 0.0) {
        fVar33 = fVar31;
      }
      fVar31 = INFINITY;
      if (fVar33 != -INFINITY) {
        fVar31 = ABS(SQRT(fVar33));
      }
      pdVar8 = (dword *)/*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar31,&uStack_258,
                                        *(undefined8 *)
                                         (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x388),1,0);
      return pdVar8;
    }
    iVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
    if ((iVar7 != 0) && (pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)pdVar8 == 0)) {
      return pdVar8;
    }
    auVar37._8_8_ = pdStack_1f8;
    auVar37._0_8_ = lStack_208;
    if (*(long *)(param_4 + 0xc) == 0) goto code_r0x0145c21c;
    pdVar8 = (dword *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(param_4 + 0xc),0);
    if ((((ulong)pdVar8 & 1) != 0) || (param_4[0x14] != 1)) {
      return pdVar8;
    }
    pdVar13 = (dword *)0x3d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    lVar22 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
    if (*(float *)(lVar22 + 0x30) <= (float)extraout_d0) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    if (0.0 <= (float)param_4[0x22]) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    if ((char)extraout_x1[0xe] == '\0') {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    fVar31 = (float)param_4[0x23];
    unaff_d8 = (ulong)(uint)fVar31;
    pdVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      pdVar8 = (dword *)func_0x00f78ad0();
      lVar22 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
    }
    if (fVar31 <= *(float *)(lVar22 + 800)) {
      return pdVar8;
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
    if (iVar7 == 2) {
      pdVar24 = *(dword **)(param_4 + 0xc);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      auVar3._8_8_ = pdStack_1f8;
      auVar3._0_8_ = lStack_208;
      auVar37._8_8_ = pdStack_1f8;
      auVar37._0_8_ = lStack_208;
      lVar14 = *(long *)(param_4 + 0x12);
      if ((lVar14 == 0) || (auVar37 = auVar3, pdVar24 == (dword *)0x0)) goto code_r0x0145c21c;
      lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
      lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
      pdVar19 = *(dword **)(lVar14 + 0xb8);
      iVar32 = *(int *)(lVar14 + 0x180);
      uVar29 = 0x3f800000;
      iVar20 = 6;
    }
    else if (iVar7 == 1) {
      pdVar24 = *(dword **)(param_4 + 0xc);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      auVar37._8_8_ = pdStack_1f8;
      auVar37._0_8_ = lStack_208;
      if (pdVar24 == (dword *)0x0) goto code_r0x0145c21c;
      pdVar19 = *(dword **)(extraout_x1 + 0x2e);
      iVar32 = extraout_x1[0x60];
      lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
      uVar29 = 0;
      iVar20 = 1;
      lVar17 = lVar22;
    }
    else {
      if (iVar7 != 0) {
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        pdVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        param_4[0x22] = *(int *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x34);
        return pdVar8;
      }
      pdVar24 = *(dword **)(param_4 + 0xc);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      auVar37._8_8_ = pdStack_1f8;
      auVar37._0_8_ = lStack_208;
      if (pdVar24 == (dword *)0x0) goto code_r0x0145c21c;
      pdVar19 = *(dword **)(extraout_x1 + 0x2e);
      iVar32 = extraout_x1[0x60];
      lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
      uVar29 = 0;
      iVar20 = 0;
      lVar17 = lVar22;
    }
    pdVar10 = &MACH_HEADER.cputype;
    puVar28 = &UNK_0145c1e0;
    pdVar12 = extraout_x1;
    param_5 = extraout_x1;
    pdVar8 = pdVar24;
  }
code_r0x014fe2a8:
  auVar38._8_8_ = pdVar12;
  auVar38._0_8_ = pdVar24;
  puVar6 = (ulong *)((long)ppdVar5 + -0x70);
  *(ulong *)((long)ppdVar5 + -0x70) = unaff_d9;
  *(ulong *)((long)ppdVar5 + -0x68) = unaff_d8;
  *(undefined8 *)((long)ppdVar5 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppdVar5 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppdVar5 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppdVar5 + -0x48) = unaff_x25;
  *(undefined8 *)((long)ppdVar5 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppdVar5 + -0x38) = unaff_x23;
  *(dword **)((long)ppdVar5 + -0x30) = pdVar13;
  *(dword **)((long)ppdVar5 + -0x28) = pdVar8;
  *(dword **)((long)ppdVar5 + -0x20) = param_5;
  *(dword **)((long)ppdVar5 + -0x18) = param_4;
  *(undefined8 ********)((long)ppdVar5 + -0x10) = pppppppuVar26;
  *(undefined **)((long)ppdVar5 + -8) = puVar28;
  lVar14 = lVar22;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  iVar7 = (int)lVar14;
  if (lVar17 == 0) {
    pdVar8 = (dword *)0x0;
  }
  else {
    pdVar8 = (dword *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(pdVar8,uRam0000000003d3bf00);
    lVar14 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar14,0);
    *(long *)(lVar14 + 0x10) = lVar17;
    *(float *)(lVar14 + 0x18) = (float)iVar20;
    if (pdVar8 == (dword *)0x0) {
      puVar28 = &Atlas_Audio_SpeechParam___ctor;
      auVar36 = func_0x00f78af4();
      pppppppuVar27 = (undefined8 *******)((long)ppdVar5 + -0x10);
code_r0x014fe3e8:
      lVar17 = auVar36._0_8_;
      *(dword **)((long)puVar6 + -0x30) = pdVar12;
      *(long *)((long)puVar6 + -0x28) = lVar22;
      *(dword **)((long)puVar6 + -0x20) = pdVar19;
      *(dword **)((long)puVar6 + -0x18) = pdVar10;
      *(undefined8 ********)((long)puVar6 + -0x10) = pppppppuVar27;
      *(undefined **)((long)puVar6 + -8) = puVar28;
      pdVar8 = (dword *)/*System.Object$$.ctor*/ func_0x0294d018(lVar17,0);
      *(long *)(lVar17 + 0x10) = auVar36._8_8_;
      *(float *)(lVar17 + 0x18) = (float)iVar7;
      return pdVar8;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(pdVar8,lVar14,uRam0000000003d3bf08);
  }
  uVar11 = *(undefined8 *)((long)ppdVar5 + -0x50);
  uVar1 = *(undefined8 *)((long)ppdVar5 + -0x48);
  uVar25 = *(undefined8 *)((long)ppdVar5 + -0x60);
  uVar2 = *(undefined8 *)((long)ppdVar5 + -0x58);
  *(undefined8 *)((long)ppdVar5 + -0x50) = *(undefined8 *)((long)ppdVar5 + -0x70);
  *(undefined8 *)((long)ppdVar5 + -0x48) = *(undefined8 *)((long)ppdVar5 + -0x68);
  *(undefined8 *)((long)ppdVar5 + -0x40) = *(undefined8 *)((long)ppdVar5 + -0x40);
  *(undefined8 *)((long)ppdVar5 + -0x38) = *(undefined8 *)((long)ppdVar5 + -0x38);
  *(undefined8 *)((long)ppdVar5 + -0x30) = *(undefined8 *)((long)ppdVar5 + -0x30);
  *(undefined8 *)((long)ppdVar5 + -0x28) = *(undefined8 *)((long)ppdVar5 + -0x28);
  *(undefined8 *)((long)ppdVar5 + -0x20) = *(undefined8 *)((long)ppdVar5 + -0x20);
  *(undefined8 *)((long)ppdVar5 + -0x18) = *(undefined8 *)((long)ppdVar5 + -0x18);
  *(undefined8 *)((long)ppdVar5 + -0x10) = *(undefined8 *)((long)ppdVar5 + -0x10);
  *(undefined8 *)((long)ppdVar5 + -8) = *(undefined8 *)((long)ppdVar5 + -8);
  *(int *)((long)ppdVar5 + -0x54) = (int)pdVar10;
  lVar17 = lVar22;
  pdVar13 = pdVar19;
  pdVar10 = pdVar8;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(iVar32,uVar29,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if ((char)pdVar24[0xd] == '\0') {
code_r0x014fe49c:
    pdVar10 = (dword *)((long)ppdVar5 + -0x54);
    puVar28 = &UNK_014fe4b4;
    lVar17 = lVar22;
    pdVar13 = pdVar8;
  }
  else {
    if (*(long *)(pdVar24 + 4) != 0) {
      if (*(char *)(*(long *)(pdVar24 + 4) + 0xcb) == '\0') {
        return (dword *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar28 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar38 = func_0x00f78af4();
  }
  lVar18 = auVar38._8_8_;
  lVar14 = auVar38._0_8_;
  *(undefined8 *)((long)ppdVar5 + -0xc0) = uVar25;
  *(undefined8 *)((long)ppdVar5 + -0xb8) = uVar2;
  *(undefined8 *)((long)ppdVar5 + -0xb0) = uVar11;
  *(undefined8 *)((long)ppdVar5 + -0xa8) = uVar1;
  *(undefined8 *)((long)ppdVar5 + -0xa0) = 0x3eb4000;
  *(dword **)((long)ppdVar5 + -0x98) = pdVar12;
  *(long *)((long)ppdVar5 + -0x90) = lVar22;
  *(dword **)((long)ppdVar5 + -0x88) = pdVar24;
  *(dword **)((long)ppdVar5 + -0x80) = pdVar19;
  *(dword **)((long)ppdVar5 + -0x78) = pdVar8;
  *(undefined1 **)((long)ppdVar5 + -0x70) = (undefined1 *)((long)ppdVar5 + -0x10);
  *(undefined **)((long)ppdVar5 + -0x68) = puVar28;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)((long)ppdVar5 + -0xe0) = 0;
  *(undefined8 *)((long)ppdVar5 + -0xd8) = 0;
  *(undefined8 *)((long)ppdVar5 + -0xd0) = 0;
  *(undefined4 *)((long)ppdVar5 + -0xe4) = 0;
  if (*(long *)(lVar14 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar14 + 0x10) + 0x90) != '\0') {
    return (dword *)0x0;
  }
  if (lVar18 == 0) goto code_r0x014fe8f8;
  uVar9 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar18,0);
  if ((uVar9 & 1) != 0) {
    return (dword *)0x0;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar17,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350),0)
  ;
  if (iVar7 != 0) {
    if (pdVar13 == (dword *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)ppdVar5 + -0x100),pdVar13,uRam0000000003d3bf10);
    *(undefined8 *)((long)ppdVar5 + -0xd8) = *(undefined8 *)((long)ppdVar5 + -0xf8);
    *(undefined8 *)((long)ppdVar5 + -0xe0) = *(undefined8 *)((long)ppdVar5 + -0x100);
    *(undefined8 *)((long)ppdVar5 + -0xd0) = *(undefined8 *)((long)ppdVar5 + -0xf0);
    while (uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)ppdVar5 + -0xe0),uRam0000000003d32f58),
          (uVar9 & 1) != 0) {
      lVar22 = *(long *)((long)ppdVar5 + -0xd0);
      if (lVar22 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar11 = *(undefined8 *)(lVar22 + 0x10);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar11,*(undefined8 *)
                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310),0);
      if ((uVar9 & 1) != 0) {
        fVar33 = *(float *)(lVar22 + 0x18);
        fVar31 = -fVar33;
        if (fVar33 != INFINITY) {
          fVar31 = fVar33;
        }
        *(int *)((long)ppdVar5 + -0xe4) = (int)fVar31;
        plVar15 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,(undefined1 *)((long)ppdVar5 + -0xe4)
                                         );
        if (plVar15 == (long *)0x0) goto code_r0x014fe8fc;
        uVar11 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        puVar16 = (undefined4 *)func_0x00f78ae4(plVar15);
        *(undefined4 *)((long)ppdVar5 + -0xe4) = *puVar16;
        lVar17 = /*System.String$$Concat*/ func_0x029bdb88(lVar17,uVar11,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)ppdVar5 + -0xe0),uRam0000000003d32f50);
  }
  if (*(long *)(lVar14 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar7 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar14 + 0x28),lVar17,uRam0000000003d30020);
  if (iVar7 == 0) {
code_r0x014fe888:
    pdVar8 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar14 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar14 + 0x28),lVar17,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*pdVar10 - 1 < 2) {
        dVar21 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      dVar21 = 1;
code_r0x014fe860:
      *pdVar10 = dVar21;
    }
    iVar7 = (int)extraout_x1_00;
    if (iVar7 == 3) {
      if ((*(long *)(lVar18 + 0xa0) == 0) ||
         (lVar22 = *(long *)(*(long *)(lVar18 + 0xa0) + 0x90), lVar22 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar4)();
      }
      iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar22,0);
      if (1 < iVar7) {
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (dword *)(ulong)(iVar7 < 3);
      }
      uVar9 = 2;
    }
    else {
      uVar9 = extraout_x1_00;
      if (iVar7 != 2) {
        if (iVar7 == 0) {
          pdVar8 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar18,0);
          return pdVar8;
        }
        goto code_r0x014fe888;
      }
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar9,0);
    pdVar8 = (dword *)(ulong)(iVar7 == 0);
  }
  return pdVar8;
}



// ============================================================
// RVA: 0x145b93c | Atlas.Audio.AtlasAudioManager.SpeakRespawning
// ============================================================

/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Audio_AtlasAudioManager__SpeakRespawning(dword *param_1,dword *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  dword *pdVar7;
  undefined8 uVar8;
  dword *pdVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 *puVar13;
  long lVar14;
  dword *extraout_x1;
  long lVar15;
  ulong extraout_x1_00;
  int iVar16;
  dword dVar17;
  dword *pdVar18;
  dword *pdVar19;
  dword *pdVar20;
  long lVar21;
  undefined8 unaff_x22;
  dword *pdVar22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar23;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar24;
  undefined8 *******pppppppuVar25;
  undefined *puVar26;
  int iVar27;
  float extraout_s0;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uStack_1f8;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  dword *pdStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  
  puVar5 = &stack0xffffffffffffffa0;
  if ((bRam0000000003eb47e0 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47e0 = 1;
  }
  pdVar7 = (dword *)0x3eb4000;
  if (param_2 != (dword *)0x0) {
    pdVar7 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_2,0);
    lVar21 = 0x28;
    if ((int)pdVar7 == 0) {
      lVar21 = 0x30;
    }
    pdVar19 = *(dword **)((long)param_1 + lVar21);
    if (pdVar19 == (dword *)0x0) {
      return pdVar7;
    }
    unaff_x24 = 0x3d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    pdVar7 = pdVar19;
    if (*(long *)(param_1 + 0x12) != 0) {
      lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
      pdVar22 = *(dword **)(*(long *)(param_1 + 0x12) + 0xb8);
      uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
      uVar23 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
      uVar8 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      auVar31._8_8_ = uVar23;
      auVar31._0_8_ = uVar8;
      iVar6 = 5;
      puVar26 = (undefined *)0x145ba68;
      pdVar9 = param_2;
      pppppppuVar25 = (undefined8 *******)&stack0xfffffffffffffff0;
      goto code_r0x014fe3e8;
    }
  }
  pdVar9 = (dword *)func_0x00f78af4();
  pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
  puStack_68 = &Atlas_Audio_AtlasAudioManager__SpeakShield;
  pdVar19 = pdVar9;
  if ((bRam0000000003eb47e1 & 1) == 0) {
    pdVar19 = (dword *)func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47e1 = 1;
  }
  pdVar18 = *(dword **)(pdVar9 + 0x12);
  if (pdVar18 == (dword *)0x0) {
    return pdVar19;
  }
  pdVar20 = *(dword **)(pdVar9 + 10);
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] != 0)) {
    pdVar22 = pdVar18;
    if (pdVar20 != (dword *)0x0) goto code_r0x0145bb48;
code_r0x0145bbac:
    auVar31 = func_0x00f78af4();
    pdVar22 = auVar31._8_8_;
    uStack_c0 = 0x3d1ff28;
    puStack_98 = &Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
    pdStack_b8 = pdVar9;
    pdStack_b0 = pdVar20;
    pdStack_a8 = pdVar18;
    pppppppuStack_a0 = &pppppppuStack_70;
    if ((bRam0000000003eb47e2 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47e2 = 1;
    }
    if (pdVar22 != (dword *)0x0) {
      pdVar7 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar22,0);
      if ((int)pdVar7 == 0) {
        return pdVar7;
      }
      pdVar20 = *(dword **)(auVar31._0_8_ + 0x28);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = *(long *)(auVar31._0_8_ + 0x48);
      if ((lVar10 != 0) && (pdVar20 != (dword *)0x0)) {
        lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        lVar14 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        pdVar19 = *(dword **)(lVar10 + 0xb8);
        iVar27 = *(int *)(lVar10 + 0x180);
        uVar29 = 0;
        iVar16 = 6;
        pdVar9 = (dword *)((long)&MACH_HEADER.magic + 3);
        puVar4 = &stack0xffffffffffffff70;
        param_2 = pdStack_a8;
        pdVar7 = pdStack_b0;
        param_1 = pdStack_b8;
        unaff_x22 = uStack_c0;
        pppppppuVar24 = pppppppuStack_a0;
        puVar26 = puStack_98;
        goto code_r0x014fe2a8;
      }
    }
    auVar31 = func_0x00f78af4();
    pdVar9 = auVar31._8_8_;
    puVar5 = &stack0xfffffffffffffee0;
    puStack_c8 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
    pppppppuStack_d0 = &pppppppuStack_a0;
    if ((bRam0000000003eb47e3 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e3 = 1;
    }
    if (pdVar9 != (dword *)0x0) {
      pdVar7 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar9,0);
      lVar21 = 0x28;
      if ((int)pdVar7 == 0) {
        lVar21 = 0x30;
      }
      pdVar19 = *(dword **)(auVar31._0_8_ + lVar21);
      if (pdVar19 == (dword *)0x0) {
        return pdVar7;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar14 = *(long *)(auVar31._0_8_ + 0x48);
      if (lVar14 != 0) {
        lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        pdVar22 = *(dword **)(lVar14 + 0xb8);
        uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
        uVar23 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        uVar8 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar31._8_8_ = uVar23;
        auVar31._0_8_ = uVar8;
        iVar6 = 0xf;
        puVar26 = &UNK_0145bdac;
        pppppppuVar25 = &pppppppuStack_d0;
        goto code_r0x014fe3e8;
      }
    }
    auVar31 = func_0x00f78af4();
    pdVar9 = auVar31._8_8_;
    puVar5 = &stack0xfffffffffffffe80;
    puStack_128 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
    pppppppuVar25 = &pppppppuStack_130;
    pppppppuStack_130 = &pppppppuStack_d0;
    if ((bRam0000000003eb47e4 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e4 = 1;
    }
    if (pdVar9 != (dword *)0x0) {
      pdVar7 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar9,0);
      lVar21 = 0x28;
      if ((int)pdVar7 == 0) {
        lVar21 = 0x30;
      }
      pdVar19 = *(dword **)(auVar31._0_8_ + lVar21);
      if (pdVar19 == (dword *)0x0) {
        return pdVar7;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar14 = *(long *)(auVar31._0_8_ + 0x48);
      if (lVar14 != 0) {
        lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        pdVar22 = *(dword **)(lVar14 + 0xb8);
        uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
        uVar23 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        uVar8 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar31._8_8_ = uVar23;
        auVar31._0_8_ = uVar8;
        iVar6 = 0x11;
        puVar26 = &UNK_0145bf54;
        goto code_r0x014fe3e8;
      }
    }
    param_2 = (dword *)func_0x00f78af4();
    puVar4 = &stack0xfffffffffffffe40;
    puStack_188 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
    pppppppuVar24 = &pppppppuStack_190;
    pppppppuStack_190 = pppppppuVar25;
    if ((bRam0000000003eb47e5 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47e5 = 1;
    }
    if (extraout_x1 == (dword *)0x0) {
code_r0x0145c21c:
      fVar30 = (float)func_0x00f78af4();
      if ((bRam0000000003eb47e6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d24568);
        bRam0000000003eb47e6 = 1;
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_1f8 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
      if (((*(byte *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      fVar28 = _UNK_033f8148;
      if (fVar30 != 0.0) {
        fVar28 = fVar30;
      }
      fVar30 = INFINITY;
      if (fVar28 != -INFINITY) {
        fVar30 = ABS(SQRT(fVar28));
      }
      pdVar7 = (dword *)/*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar30,&uStack_1f8,
                                        *(undefined8 *)
                                         (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x388),1,0);
      return pdVar7;
    }
    iVar6 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
    if ((iVar6 != 0) && (pdVar7 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)pdVar7 == 0)) {
      return pdVar7;
    }
    if (*(long *)(param_2 + 0xc) == 0) goto code_r0x0145c21c;
    pdVar7 = (dword *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(param_2 + 0xc),0);
    if ((((ulong)pdVar7 & 1) != 0) || (param_2[0x14] != 1)) {
      return pdVar7;
    }
    unaff_x22 = 0x3d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    lVar21 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
    if (*(float *)(lVar21 + 0x30) <= extraout_s0) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    if (0.0 <= (float)param_2[0x22]) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    if ((char)extraout_x1[0xe] == '\0') {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    fVar30 = (float)param_2[0x23];
    unaff_d8 = (ulong)(uint)fVar30;
    pdVar7 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      pdVar7 = (dword *)func_0x00f78ad0();
      lVar21 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
    }
    if (fVar30 <= *(float *)(lVar21 + 800)) {
      return pdVar7;
    }
    iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
    if (iVar6 == 2) {
      pdVar20 = *(dword **)(param_2 + 0xc);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = *(long *)(param_2 + 0x12);
      if ((lVar10 == 0) || (pdVar20 == (dword *)0x0)) goto code_r0x0145c21c;
      lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
      lVar14 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
      pdVar19 = *(dword **)(lVar10 + 0xb8);
      iVar27 = *(int *)(lVar10 + 0x180);
      uVar29 = 0x3f800000;
      iVar16 = 6;
    }
    else if (iVar6 == 1) {
      pdVar20 = *(dword **)(param_2 + 0xc);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      if (pdVar20 == (dword *)0x0) goto code_r0x0145c21c;
      pdVar19 = *(dword **)(extraout_x1 + 0x2e);
      iVar27 = extraout_x1[0x60];
      lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
      uVar29 = 0;
      iVar16 = 1;
      lVar14 = lVar21;
    }
    else {
      if (iVar6 != 0) {
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        pdVar7 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        param_2[0x22] = *(int *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x34);
        return pdVar7;
      }
      pdVar20 = *(dword **)(param_2 + 0xc);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      if (pdVar20 == (dword *)0x0) goto code_r0x0145c21c;
      pdVar19 = *(dword **)(extraout_x1 + 0x2e);
      iVar27 = extraout_x1[0x60];
      lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
      uVar29 = 0;
      iVar16 = 0;
      lVar14 = lVar21;
    }
    pdVar9 = &MACH_HEADER.cputype;
    puVar26 = &UNK_0145c1e0;
    pdVar22 = extraout_x1;
    pdVar7 = extraout_x1;
    param_1 = pdVar20;
  }
  else {
    func_0x00f78ad0();
    pdVar22 = *(dword **)(pdVar9 + 0x12);
    if ((pdVar22 == (dword *)0x0) || (pdVar20 == (dword *)0x0)) goto code_r0x0145bbac;
code_r0x0145bb48:
    lVar21 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
    lVar14 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
    pdVar19 = *(dword **)(pdVar22 + 0x2e);
    iVar27 = pdVar22[0x60];
    iVar16 = 10;
    pdVar9 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar4 = &stack0xffffffffffffffa0;
    pdVar22 = pdVar18;
    pppppppuVar24 = pppppppuStack_70;
    puVar26 = puStack_68;
    uVar29 = _UNK_033f813c;
  }
code_r0x014fe2a8:
  auVar32._8_8_ = pdVar22;
  auVar32._0_8_ = pdVar20;
  puVar5 = puVar4 + -0x70;
  *(undefined8 *)(puVar4 + -0x70) = unaff_d9;
  *(ulong *)(puVar4 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(dword **)(puVar4 + -0x28) = param_1;
  *(dword **)(puVar4 + -0x20) = pdVar7;
  *(dword **)(puVar4 + -0x18) = param_2;
  *(undefined8 ********)(puVar4 + -0x10) = pppppppuVar24;
  *(undefined **)(puVar4 + -8) = puVar26;
  lVar10 = lVar21;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  iVar6 = (int)lVar10;
  if (lVar14 == 0) {
    pdVar7 = (dword *)0x0;
  }
  else {
    pdVar7 = (dword *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(pdVar7,uRam0000000003d3bf00);
    lVar10 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar10,0);
    *(long *)(lVar10 + 0x10) = lVar14;
    *(float *)(lVar10 + 0x18) = (float)iVar16;
    if (pdVar7 == (dword *)0x0) {
      puVar26 = &Atlas_Audio_SpeechParam___ctor;
      auVar31 = func_0x00f78af4();
      pppppppuVar25 = (undefined8 *******)(puVar4 + -0x10);
code_r0x014fe3e8:
      lVar14 = auVar31._0_8_;
      *(dword **)(puVar5 + -0x30) = pdVar22;
      *(long *)(puVar5 + -0x28) = lVar21;
      *(dword **)(puVar5 + -0x20) = pdVar19;
      *(dword **)(puVar5 + -0x18) = pdVar9;
      *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar25;
      *(undefined **)(puVar5 + -8) = puVar26;
      pdVar7 = (dword *)/*System.Object$$.ctor*/ func_0x0294d018(lVar14,0);
      *(long *)(lVar14 + 0x10) = auVar31._8_8_;
      *(float *)(lVar14 + 0x18) = (float)iVar6;
      return pdVar7;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(pdVar7,lVar10,uRam0000000003d3bf08);
  }
  uVar8 = *(undefined8 *)(puVar4 + -0x50);
  uVar1 = *(undefined8 *)(puVar4 + -0x48);
  uVar23 = *(undefined8 *)(puVar4 + -0x60);
  uVar2 = *(undefined8 *)(puVar4 + -0x58);
  *(undefined8 *)(puVar4 + -0x50) = *(undefined8 *)(puVar4 + -0x70);
  *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(puVar4 + -0x68);
  *(undefined8 *)(puVar4 + -0x40) = *(undefined8 *)(puVar4 + -0x40);
  *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(puVar4 + -0x38);
  *(undefined8 *)(puVar4 + -0x30) = *(undefined8 *)(puVar4 + -0x30);
  *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)(puVar4 + -0x28);
  *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
  *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
  *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
  *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  *(int *)(puVar4 + -0x54) = (int)pdVar9;
  lVar14 = lVar21;
  pdVar18 = pdVar19;
  pdVar9 = pdVar7;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(iVar27,uVar29,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if ((char)pdVar20[0xd] == '\0') {
code_r0x014fe49c:
    pdVar9 = (dword *)(puVar4 + -0x54);
    puVar26 = &UNK_014fe4b4;
    lVar14 = lVar21;
    pdVar18 = pdVar7;
  }
  else {
    if (*(long *)(pdVar20 + 4) != 0) {
      if (*(char *)(*(long *)(pdVar20 + 4) + 0xcb) == '\0') {
        return (dword *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar26 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar32 = func_0x00f78af4();
  }
  lVar15 = auVar32._8_8_;
  lVar10 = auVar32._0_8_;
  *(undefined8 *)(puVar4 + -0xc0) = uVar23;
  *(undefined8 *)(puVar4 + -0xb8) = uVar2;
  *(undefined8 *)(puVar4 + -0xb0) = uVar8;
  *(undefined8 *)(puVar4 + -0xa8) = uVar1;
  *(undefined8 *)(puVar4 + -0xa0) = 0x3eb4000;
  *(dword **)(puVar4 + -0x98) = pdVar22;
  *(long *)(puVar4 + -0x90) = lVar21;
  *(dword **)(puVar4 + -0x88) = pdVar20;
  *(dword **)(puVar4 + -0x80) = pdVar19;
  *(dword **)(puVar4 + -0x78) = pdVar7;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x68) = puVar26;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)(puVar4 + -0xe0) = 0;
  *(undefined8 *)(puVar4 + -0xd8) = 0;
  *(undefined8 *)(puVar4 + -0xd0) = 0;
  *(undefined4 *)(puVar4 + -0xe4) = 0;
  if (*(long *)(lVar10 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar10 + 0x10) + 0x90) != '\0') {
    return (dword *)0x0;
  }
  if (lVar15 == 0) goto code_r0x014fe8f8;
  uVar11 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar15,0);
  if ((uVar11 & 1) != 0) {
    return (dword *)0x0;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar14,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350),0)
  ;
  if (iVar6 != 0) {
    if (pdVar18 == (dword *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar4 + -0x100,pdVar18,uRam0000000003d3bf10);
    *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(puVar4 + -0xf8);
    *(undefined8 *)(puVar4 + -0xe0) = *(undefined8 *)(puVar4 + -0x100);
    *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xf0);
    while (uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar4 + -0xe0,uRam0000000003d32f58), (uVar11 & 1) != 0) {
      lVar21 = *(long *)(puVar4 + -0xd0);
      if (lVar21 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar8 = *(undefined8 *)(lVar21 + 0x10);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar8,*(undefined8 *)
                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310),0);
      if ((uVar11 & 1) != 0) {
        fVar28 = *(float *)(lVar21 + 0x18);
        fVar30 = -fVar28;
        if (fVar28 != INFINITY) {
          fVar30 = fVar28;
        }
        *(int *)(puVar4 + -0xe4) = (int)fVar30;
        plVar12 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,puVar4 + -0xe4);
        if (plVar12 == (long *)0x0) goto code_r0x014fe8fc;
        uVar8 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        puVar13 = (undefined4 *)func_0x00f78ae4(plVar12);
        *(undefined4 *)(puVar4 + -0xe4) = *puVar13;
        lVar14 = /*System.String$$Concat*/ func_0x029bdb88(lVar14,uVar8,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0xe0,uRam0000000003d32f50);
  }
  if (*(long *)(lVar10 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar6 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar10 + 0x28),lVar14,uRam0000000003d30020);
  if (iVar6 == 0) {
code_r0x014fe888:
    pdVar7 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar10 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar10 + 0x28),lVar14,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*pdVar9 - 1 < 2) {
        dVar17 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      dVar17 = 1;
code_r0x014fe860:
      *pdVar9 = dVar17;
    }
    iVar6 = (int)extraout_x1_00;
    if (iVar6 == 3) {
      if ((*(long *)(lVar15 + 0xa0) == 0) ||
         (lVar21 = *(long *)(*(long *)(lVar15 + 0xa0) + 0x90), lVar21 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar3)();
      }
      iVar6 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar21,0);
      if (1 < iVar6) {
        iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (dword *)(ulong)(iVar6 < 3);
      }
      uVar11 = 2;
    }
    else {
      uVar11 = extraout_x1_00;
      if (iVar6 != 2) {
        if (iVar6 == 0) {
          pdVar7 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar15,0);
          return pdVar7;
        }
        goto code_r0x014fe888;
      }
    }
    iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar11,0);
    pdVar7 = (dword *)(ulong)(iVar6 == 0);
  }
  return pdVar7;
}



// ============================================================
// RVA: 0x145bae4 | Atlas.Audio.AtlasAudioManager.SpeakShield
// ============================================================

/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_AtlasAudioManager__SpeakShield(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined4 *puVar11;
  ulong extraout_x1;
  ulong extraout_x1_00;
  int iVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  ulong unaff_x19;
  ulong uVar19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  ulong uVar20;
  undefined8 unaff_x23;
  undefined8 uVar21;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar22;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  undefined4 uVar25;
  float extraout_s0;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uStack_198;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  
  uVar7 = param_1;
  if ((bRam0000000003eb47e1 & 1) == 0) {
    uVar7 = func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47e1 = 1;
  }
  uVar19 = *(ulong *)(param_1 + 0x48);
  if (uVar19 == 0) {
    return uVar7;
  }
  uVar7 = *(ulong *)(param_1 + 0x28);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) != 0)) {
    uVar20 = uVar19;
    if (uVar7 != 0) goto code_r0x0145bb48;
LAB_0145bbac:
    auVar29 = func_0x00f78af4();
    uVar20 = auVar29._8_8_;
    uStack_60 = 0x3d1ff28;
    puStack_38 = &Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
    uStack_58 = param_1;
    uStack_50 = uVar7;
    uStack_48 = uVar19;
    pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb47e2 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47e2 = 1;
    }
    if (uVar20 != 0) {
      uVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(uVar20,0);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      uVar7 = *(ulong *)(auVar29._0_8_ + 0x28);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar18 = *(long *)(auVar29._0_8_ + 0x48);
      if ((lVar18 != 0) && (uVar7 != 0)) {
        lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
        lVar16 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
        piVar14 = *(int **)(lVar18 + 0xb8);
        uVar25 = *(undefined4 *)(lVar18 + 0x180);
        uVar27 = 0;
        iVar6 = 6;
        lVar18 = 3;
        puVar4 = &stack0xffffffffffffffd0;
        unaff_x19 = uStack_48;
        unaff_x20 = uStack_50;
        unaff_x21 = uStack_58;
        unaff_x22 = uStack_60;
        unaff_x29 = pppppppuStack_40;
        unaff_x30 = puStack_38;
        goto code_r0x014fe2a8;
      }
    }
    auVar29 = func_0x00f78af4();
    lVar18 = auVar29._8_8_;
    puVar5 = &stack0xffffffffffffff40;
    puStack_68 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
    pppppppuStack_70 = &pppppppuStack_40;
    if ((bRam0000000003eb47e3 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e3 = 1;
    }
    if (lVar18 != 0) {
      uVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar18,0);
      lVar16 = 0x28;
      if ((int)uVar7 == 0) {
        lVar16 = 0x30;
      }
      piVar14 = *(int **)(auVar29._0_8_ + lVar16);
      if (piVar14 == (int *)0x0) {
        return uVar7;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar16 = *(long *)(auVar29._0_8_ + 0x48);
      if (lVar16 != 0) {
        lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
        uVar20 = *(ulong *)(lVar16 + 0xb8);
        uVar21 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar21,uRam0000000003d3bf00);
        uVar22 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
        uVar21 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar29._8_8_ = uVar22;
        auVar29._0_8_ = uVar21;
        iVar12 = 0xf;
        puVar24 = &UNK_0145bdac;
        pppppppuVar23 = &pppppppuStack_70;
        goto code_r0x014fe3e8;
      }
    }
    auVar29 = func_0x00f78af4();
    lVar18 = auVar29._8_8_;
    puVar5 = &stack0xfffffffffffffee0;
    puStack_c8 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
    pppppppuVar23 = &pppppppuStack_d0;
    pppppppuStack_d0 = &pppppppuStack_70;
    if ((bRam0000000003eb47e4 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e4 = 1;
    }
    if (lVar18 != 0) {
      uVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar18,0);
      lVar16 = 0x28;
      if ((int)uVar7 == 0) {
        lVar16 = 0x30;
      }
      piVar14 = *(int **)(auVar29._0_8_ + lVar16);
      if (piVar14 == (int *)0x0) {
        return uVar7;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar16 = *(long *)(auVar29._0_8_ + 0x48);
      if (lVar16 != 0) {
        lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
        uVar20 = *(ulong *)(lVar16 + 0xb8);
        uVar21 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar21,uRam0000000003d3bf00);
        uVar22 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
        uVar21 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar29._8_8_ = uVar22;
        auVar29._0_8_ = uVar21;
        iVar12 = 0x11;
        puVar24 = &UNK_0145bf54;
        goto code_r0x014fe3e8;
      }
    }
    unaff_x19 = func_0x00f78af4();
    puVar4 = &stack0xfffffffffffffea0;
    puStack_128 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
    unaff_x29 = &pppppppuStack_130;
    pppppppuStack_130 = pppppppuVar23;
    if ((bRam0000000003eb47e5 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47e5 = 1;
    }
    if (extraout_x1 == 0) {
code_r0x0145c21c:
      fVar28 = (float)func_0x00f78af4();
      if ((bRam0000000003eb47e6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d24568);
        bRam0000000003eb47e6 = 1;
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_198 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
      if (((*(byte *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar26 = _UNK_033f8148;
      if (fVar28 != 0.0) {
        fVar26 = fVar28;
      }
      fVar28 = INFINITY;
      if (fVar26 != -INFINITY) {
        fVar28 = ABS(SQRT(fVar26));
      }
      uVar7 = /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar28,&uStack_198,
                              *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x388),1,0);
      return uVar7;
    }
    iVar6 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
    if ((iVar6 != 0) && (uVar7 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)uVar7 == 0)) {
      return uVar7;
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) goto code_r0x0145c21c;
    uVar7 = /*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(unaff_x19 + 0x30),0);
    if (((uVar7 & 1) != 0) || (*(int *)(unaff_x19 + 0x50) != 1)) {
      return uVar7;
    }
    unaff_x22 = 0x3d1ff28;
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar16 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
    if (*(float *)(lVar16 + 0x30) <= extraout_s0) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
    }
    if (0.0 <= *(float *)(unaff_x19 + 0x88)) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
    }
    if (*(char *)(extraout_x1 + 0x38) == '\0') {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
    }
    fVar28 = *(float *)(unaff_x19 + 0x8c);
    unaff_d8 = (ulong)(uint)fVar28;
    uVar7 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      uVar7 = func_0x00f78ad0();
      lVar16 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
    }
    if (fVar28 <= *(float *)(lVar16 + 800)) {
      return uVar7;
    }
    iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
    if (iVar6 == 2) {
      uVar7 = *(ulong *)(unaff_x19 + 0x30);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar18 = *(long *)(unaff_x19 + 0x48);
      if ((lVar18 == 0) || (uVar7 == 0)) goto code_r0x0145c21c;
      lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
      lVar16 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
      piVar14 = *(int **)(lVar18 + 0xb8);
      uVar25 = *(undefined4 *)(lVar18 + 0x180);
      uVar27 = 0x3f800000;
      iVar6 = 6;
    }
    else if (iVar6 == 1) {
      uVar7 = *(ulong *)(unaff_x19 + 0x30);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (uVar7 == 0) goto code_r0x0145c21c;
      piVar14 = *(int **)(extraout_x1 + 0xb8);
      uVar25 = *(undefined4 *)(extraout_x1 + 0x180);
      lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
      uVar27 = 0;
      iVar6 = 1;
      lVar16 = lVar13;
    }
    else {
      if (iVar6 != 0) {
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
        *(undefined4 *)(unaff_x19 + 0x88) =
             *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x34);
        return uVar7;
      }
      uVar7 = *(ulong *)(unaff_x19 + 0x30);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (uVar7 == 0) goto code_r0x0145c21c;
      piVar14 = *(int **)(extraout_x1 + 0xb8);
      uVar25 = *(undefined4 *)(extraout_x1 + 0x180);
      lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
      uVar27 = 0;
      iVar6 = 0;
      lVar16 = lVar13;
    }
    lVar18 = 4;
    unaff_x30 = &UNK_0145c1e0;
    uVar20 = extraout_x1;
    unaff_x20 = extraout_x1;
    unaff_x21 = uVar7;
  }
  else {
    func_0x00f78ad0();
    uVar20 = *(ulong *)(param_1 + 0x48);
    if ((uVar20 == 0) || (uVar7 == 0)) goto LAB_0145bbac;
code_r0x0145bb48:
    lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
    lVar16 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
    piVar14 = *(int **)(uVar20 + 0xb8);
    uVar25 = *(undefined4 *)(uVar20 + 0x180);
    iVar6 = 10;
    lVar18 = 1;
    puVar4 = (undefined1 *)register0x00000008;
    uVar20 = uVar19;
    uVar27 = _UNK_033f813c;
  }
code_r0x014fe2a8:
  auVar30._8_8_ = uVar20;
  auVar30._0_8_ = uVar7;
  puVar5 = puVar4 + -0x70;
  *(undefined8 *)(puVar4 + -0x70) = unaff_d9;
  *(ulong *)(puVar4 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = unaff_x21;
  *(ulong *)(puVar4 + -0x20) = unaff_x20;
  *(ulong *)(puVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(puVar4 + -0x10) = unaff_x29;
  *(undefined **)(puVar4 + -8) = unaff_x30;
  lVar9 = lVar13;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  iVar12 = (int)lVar9;
  if (lVar16 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(piVar8,uRam0000000003d3bf00);
    lVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar9,0);
    *(long *)(lVar9 + 0x10) = lVar16;
    *(float *)(lVar9 + 0x18) = (float)iVar6;
    if (piVar8 == (int *)0x0) {
      puVar24 = &Atlas_Audio_SpeechParam___ctor;
      auVar29 = func_0x00f78af4();
      pppppppuVar23 = (undefined8 *******)(puVar4 + -0x10);
code_r0x014fe3e8:
      lVar16 = auVar29._0_8_;
      *(ulong *)(puVar5 + -0x30) = uVar20;
      *(long *)(puVar5 + -0x28) = lVar13;
      *(int **)(puVar5 + -0x20) = piVar14;
      *(long *)(puVar5 + -0x18) = lVar18;
      *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar23;
      *(undefined **)(puVar5 + -8) = puVar24;
      uVar7 = /*System.Object$$.ctor*/ func_0x0294d018(lVar16,0);
      *(long *)(lVar16 + 0x10) = auVar29._8_8_;
      *(float *)(lVar16 + 0x18) = (float)iVar12;
      return uVar7;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(piVar8,lVar9,uRam0000000003d3bf08);
  }
  uVar21 = *(undefined8 *)(puVar4 + -0x50);
  uVar1 = *(undefined8 *)(puVar4 + -0x48);
  uVar22 = *(undefined8 *)(puVar4 + -0x60);
  uVar2 = *(undefined8 *)(puVar4 + -0x58);
  *(undefined8 *)(puVar4 + -0x50) = *(undefined8 *)(puVar4 + -0x70);
  *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(puVar4 + -0x68);
  *(undefined8 *)(puVar4 + -0x40) = *(undefined8 *)(puVar4 + -0x40);
  *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(puVar4 + -0x38);
  *(undefined8 *)(puVar4 + -0x30) = *(undefined8 *)(puVar4 + -0x30);
  *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)(puVar4 + -0x28);
  *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
  *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
  *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
  *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  *(int *)(puVar4 + -0x54) = (int)lVar18;
  lVar16 = lVar13;
  piVar15 = piVar14;
  piVar17 = piVar8;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(uVar25,uVar27,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if (*(char *)(uVar7 + 0x34) == '\0') {
code_r0x014fe49c:
    piVar17 = (int *)(puVar4 + -0x54);
    puVar24 = &UNK_014fe4b4;
    lVar16 = lVar13;
    piVar15 = piVar8;
  }
  else {
    if (*(long *)(uVar7 + 0x10) != 0) {
      if (*(char *)(*(long *)(uVar7 + 0x10) + 0xcb) == '\0') {
        return 0;
      }
      goto code_r0x014fe49c;
    }
    puVar24 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar30 = func_0x00f78af4();
  }
  lVar9 = auVar30._8_8_;
  lVar18 = auVar30._0_8_;
  *(undefined8 *)(puVar4 + -0xc0) = uVar22;
  *(undefined8 *)(puVar4 + -0xb8) = uVar2;
  *(undefined8 *)(puVar4 + -0xb0) = uVar21;
  *(undefined8 *)(puVar4 + -0xa8) = uVar1;
  *(undefined8 *)(puVar4 + -0xa0) = 0x3eb4000;
  *(ulong *)(puVar4 + -0x98) = uVar20;
  *(long *)(puVar4 + -0x90) = lVar13;
  *(ulong *)(puVar4 + -0x88) = uVar7;
  *(int **)(puVar4 + -0x80) = piVar14;
  *(int **)(puVar4 + -0x78) = piVar8;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x68) = puVar24;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)(puVar4 + -0xe0) = 0;
  *(undefined8 *)(puVar4 + -0xd8) = 0;
  *(undefined8 *)(puVar4 + -0xd0) = 0;
  *(undefined4 *)(puVar4 + -0xe4) = 0;
  if (*(long *)(lVar18 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar18 + 0x10) + 0x90) != '\0') {
    return 0;
  }
  if (lVar9 == 0) goto code_r0x014fe8f8;
  uVar7 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar9,0);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar16,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350),0);
  if (iVar6 != 0) {
    if (piVar15 == (int *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar4 + -0x100,piVar15,uRam0000000003d3bf10);
    *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(puVar4 + -0xf8);
    *(undefined8 *)(puVar4 + -0xe0) = *(undefined8 *)(puVar4 + -0x100);
    *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xf0);
    while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar4 + -0xe0,uRam0000000003d32f58), (uVar7 & 1) != 0) {
      lVar13 = *(long *)(puVar4 + -0xd0);
      if (lVar13 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar21 = *(undefined8 *)(lVar13 + 0x10);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar21,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310)
                              ,0);
      if ((uVar7 & 1) != 0) {
        fVar26 = *(float *)(lVar13 + 0x18);
        fVar28 = -fVar26;
        if (fVar26 != INFINITY) {
          fVar28 = fVar26;
        }
        *(int *)(puVar4 + -0xe4) = (int)fVar28;
        plVar10 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,puVar4 + -0xe4);
        if (plVar10 == (long *)0x0) goto code_r0x014fe8fc;
        uVar21 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        puVar11 = (undefined4 *)func_0x00f78ae4(plVar10);
        *(undefined4 *)(puVar4 + -0xe4) = *puVar11;
        lVar16 = /*System.String$$Concat*/ func_0x029bdb88(lVar16,uVar21,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0xe0,uRam0000000003d32f50);
  }
  if (*(long *)(lVar18 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar6 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar18 + 0x28),lVar16,uRam0000000003d30020);
  if (iVar6 == 0) {
code_r0x014fe888:
    uVar7 = 1;
  }
  else {
    if (*(long *)(lVar18 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar18 + 0x28),lVar16,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*piVar17 - 1U < 2) {
        iVar6 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      iVar6 = 1;
code_r0x014fe860:
      *piVar17 = iVar6;
    }
    iVar6 = (int)extraout_x1_00;
    if (iVar6 == 3) {
      if ((*(long *)(lVar9 + 0xa0) == 0) ||
         (lVar16 = *(long *)(*(long *)(lVar9 + 0xa0) + 0x90), lVar16 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar3)();
      }
      iVar6 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar16,0);
      if (1 < iVar6) {
        iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (ulong)(iVar6 < 3);
      }
      uVar7 = 2;
    }
    else {
      uVar7 = extraout_x1_00;
      if (iVar6 != 2) {
        if (iVar6 == 0) {
          uVar7 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar9,0);
          return uVar7;
        }
        goto code_r0x014fe888;
      }
    }
    iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar7,0);
    uVar7 = (ulong)(iVar6 == 0);
  }
  return uVar7;
}



// ============================================================
// RVA: 0x145bbb0 | Atlas.Audio.AtlasAudioManager.SpeakOffRoad
// ============================================================

/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_AtlasAudioManager__SpeakOffRoad(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  long extraout_x1;
  ulong extraout_x1_00;
  long lVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  long lVar19;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar20;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar21;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar22;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  undefined4 uVar25;
  float extraout_s0;
  float fVar26;
  float fVar27;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uStack_168;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb47e2 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47e2 = 1;
  }
  if (param_2 == 0) {
LAB_0145bc7c:
    auVar28 = func_0x00f78af4();
    lVar19 = auVar28._8_8_;
    puVar6 = &stack0xffffffffffffff70;
    puStack_38 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
    ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb47e3 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e3 = 1;
    }
    if (lVar19 != 0) {
      uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar19,0);
      lVar20 = 0x28;
      if ((int)uVar8 == 0) {
        lVar20 = 0x30;
      }
      piVar14 = *(int **)(auVar28._0_8_ + lVar20);
      if (piVar14 == (int *)0x0) {
        return uVar8;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar20 = *(long *)(auVar28._0_8_ + 0x48);
      if (lVar20 != 0) {
        lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
        param_2 = *(long *)(lVar20 + 0xb8);
        uVar21 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar21,uRam0000000003d3bf00);
        uVar22 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
        uVar21 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar28._8_8_ = uVar22;
        auVar28._0_8_ = uVar21;
        iVar7 = 0xf;
        puVar24 = &UNK_0145bdac;
        pppppppuVar23 = &ppppppuStack_40;
        goto code_r0x014fe3e8;
      }
    }
    auVar28 = func_0x00f78af4();
    lVar19 = auVar28._8_8_;
    puVar6 = &stack0xffffffffffffff10;
    puStack_98 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
    pppppppuVar23 = &pppppppuStack_a0;
    pppppppuStack_a0 = &ppppppuStack_40;
    if ((bRam0000000003eb47e4 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e4 = 1;
    }
    if (lVar19 != 0) {
      uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar19,0);
      lVar20 = 0x28;
      if ((int)uVar8 == 0) {
        lVar20 = 0x30;
      }
      piVar14 = *(int **)(auVar28._0_8_ + lVar20);
      if (piVar14 == (int *)0x0) {
        return uVar8;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar20 = *(long *)(auVar28._0_8_ + 0x48);
      if (lVar20 != 0) {
        lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
        param_2 = *(long *)(lVar20 + 0xb8);
        uVar21 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar21,uRam0000000003d3bf00);
        uVar22 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
        uVar21 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar28._8_8_ = uVar22;
        auVar28._0_8_ = uVar21;
        iVar7 = 0x11;
        puVar24 = &UNK_0145bf54;
        goto code_r0x014fe3e8;
      }
    }
    unaff_x19 = func_0x00f78af4();
    puVar5 = &stack0xfffffffffffffed0;
    puStack_f8 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
    unaff_x29 = &pppppppuStack_100;
    pppppppuStack_100 = pppppppuVar23;
    if ((bRam0000000003eb47e5 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47e5 = 1;
    }
    if (extraout_x1 == 0) {
code_r0x0145c21c:
      fVar27 = (float)func_0x00f78af4();
      if ((bRam0000000003eb47e6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d24568);
        bRam0000000003eb47e6 = 1;
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_168 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
      if (((*(byte *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar26 = _UNK_033f8148;
      if (fVar27 != 0.0) {
        fVar26 = fVar27;
      }
      fVar27 = INFINITY;
      if (fVar26 != -INFINITY) {
        fVar27 = ABS(SQRT(fVar26));
      }
      uVar8 = /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar27,&uStack_168,
                              *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x388),1,0);
      return uVar8;
    }
    iVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
    if ((iVar7 != 0) && (uVar8 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)uVar8 == 0)) {
      return uVar8;
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) goto code_r0x0145c21c;
    uVar8 = /*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(unaff_x19 + 0x30),0);
    if (((uVar8 & 1) != 0) || (*(int *)(unaff_x19 + 0x50) != 1)) {
      return uVar8;
    }
    unaff_x22 = 0x3d1ff28;
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar20 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
    if (*(float *)(lVar20 + 0x30) <= extraout_s0) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
    }
    if (0.0 <= *(float *)(unaff_x19 + 0x88)) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
    }
    if (*(char *)(extraout_x1 + 0x38) == '\0') {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
    }
    fVar27 = *(float *)(unaff_x19 + 0x8c);
    unaff_d8 = (ulong)(uint)fVar27;
    uVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      uVar8 = func_0x00f78ad0();
      lVar20 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
    }
    if (fVar27 <= *(float *)(lVar20 + 800)) {
      return uVar8;
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
    if (iVar7 == 2) {
      lVar20 = *(long *)(unaff_x19 + 0x30);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar19 = *(long *)(unaff_x19 + 0x48);
      if ((lVar19 == 0) || (lVar20 == 0)) goto code_r0x0145c21c;
      lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
      lVar16 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
      piVar14 = *(int **)(lVar19 + 0xb8);
      uVar25 = *(undefined4 *)(lVar19 + 0x180);
      uVar21 = 0x3f800000;
      iVar18 = 6;
    }
    else if (iVar7 == 1) {
      lVar20 = *(long *)(unaff_x19 + 0x30);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar20 == 0) goto code_r0x0145c21c;
      piVar14 = *(int **)(extraout_x1 + 0xb8);
      uVar25 = *(undefined4 *)(extraout_x1 + 0x180);
      lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
      uVar21 = 0;
      iVar18 = 1;
      lVar16 = lVar13;
    }
    else {
      if (iVar7 != 0) {
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
        *(undefined4 *)(unaff_x19 + 0x88) =
             *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x34);
        return uVar8;
      }
      lVar20 = *(long *)(unaff_x19 + 0x30);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar20 == 0) goto code_r0x0145c21c;
      piVar14 = *(int **)(extraout_x1 + 0xb8);
      uVar25 = *(undefined4 *)(extraout_x1 + 0x180);
      lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
      uVar21 = 0;
      iVar18 = 0;
      lVar16 = lVar13;
    }
    lVar19 = 4;
    unaff_x30 = &UNK_0145c1e0;
    param_2 = extraout_x1;
    unaff_x20 = extraout_x1;
    unaff_x21 = lVar20;
  }
  else {
    uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_2,0);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    lVar20 = *(long *)(param_1 + 0x28);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar19 = *(long *)(param_1 + 0x48);
    if ((lVar19 == 0) || (lVar20 == 0)) goto LAB_0145bc7c;
    lVar13 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
    lVar16 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
    piVar14 = *(int **)(lVar19 + 0xb8);
    uVar25 = *(undefined4 *)(lVar19 + 0x180);
    uVar21 = 0;
    iVar18 = 6;
    lVar19 = 3;
    puVar5 = (undefined1 *)register0x00000008;
  }
  auVar29._8_8_ = param_2;
  auVar29._0_8_ = lVar20;
  puVar6 = puVar5 + -0x70;
  *(undefined8 *)(puVar5 + -0x70) = unaff_d9;
  *(ulong *)(puVar5 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(long *)(puVar5 + -0x28) = unaff_x21;
  *(long *)(puVar5 + -0x20) = unaff_x20;
  *(long *)(puVar5 + -0x18) = unaff_x19;
  *(undefined8 ********)(puVar5 + -0x10) = unaff_x29;
  *(undefined **)(puVar5 + -8) = unaff_x30;
  lVar10 = lVar13;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  iVar7 = (int)lVar10;
  if (lVar16 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(piVar9,uRam0000000003d3bf00);
    lVar10 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar10,0);
    *(long *)(lVar10 + 0x10) = lVar16;
    *(float *)(lVar10 + 0x18) = (float)iVar18;
    if (piVar9 == (int *)0x0) {
      puVar24 = &Atlas_Audio_SpeechParam___ctor;
      auVar28 = func_0x00f78af4();
      pppppppuVar23 = (undefined8 *******)(puVar5 + -0x10);
code_r0x014fe3e8:
      lVar20 = auVar28._0_8_;
      *(long *)(puVar6 + -0x30) = param_2;
      *(long *)(puVar6 + -0x28) = lVar13;
      *(int **)(puVar6 + -0x20) = piVar14;
      *(long *)(puVar6 + -0x18) = lVar19;
      *(undefined8 ********)(puVar6 + -0x10) = pppppppuVar23;
      *(undefined **)(puVar6 + -8) = puVar24;
      uVar8 = /*System.Object$$.ctor*/ func_0x0294d018(lVar20,0);
      *(long *)(lVar20 + 0x10) = auVar28._8_8_;
      *(float *)(lVar20 + 0x18) = (float)iVar7;
      return uVar8;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(piVar9,lVar10,uRam0000000003d3bf08);
  }
  uVar22 = *(undefined8 *)(puVar5 + -0x50);
  uVar2 = *(undefined8 *)(puVar5 + -0x48);
  uVar1 = *(undefined8 *)(puVar5 + -0x60);
  uVar3 = *(undefined8 *)(puVar5 + -0x58);
  *(undefined8 *)(puVar5 + -0x50) = *(undefined8 *)(puVar5 + -0x70);
  *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x68);
  *(undefined8 *)(puVar5 + -0x40) = *(undefined8 *)(puVar5 + -0x40);
  *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(puVar5 + -0x38);
  *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
  *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
  *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
  *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
  *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
  *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  *(int *)(puVar5 + -0x54) = (int)lVar19;
  lVar19 = lVar13;
  piVar15 = piVar14;
  piVar17 = piVar9;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(uVar25,uVar21,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if (*(char *)(lVar20 + 0x34) == '\0') {
code_r0x014fe49c:
    piVar17 = (int *)(puVar5 + -0x54);
    puVar24 = &UNK_014fe4b4;
    lVar19 = lVar13;
    piVar15 = piVar9;
  }
  else {
    if (*(long *)(lVar20 + 0x10) != 0) {
      if (*(char *)(*(long *)(lVar20 + 0x10) + 0xcb) == '\0') {
        return 0;
      }
      goto code_r0x014fe49c;
    }
    puVar24 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar29 = func_0x00f78af4();
  }
  lVar10 = auVar29._8_8_;
  lVar16 = auVar29._0_8_;
  *(undefined8 *)(puVar5 + -0xc0) = uVar1;
  *(undefined8 *)(puVar5 + -0xb8) = uVar3;
  *(undefined8 *)(puVar5 + -0xb0) = uVar22;
  *(undefined8 *)(puVar5 + -0xa8) = uVar2;
  *(undefined8 *)(puVar5 + -0xa0) = 0x3eb4000;
  *(long *)(puVar5 + -0x98) = param_2;
  *(long *)(puVar5 + -0x90) = lVar13;
  *(long *)(puVar5 + -0x88) = lVar20;
  *(int **)(puVar5 + -0x80) = piVar14;
  *(int **)(puVar5 + -0x78) = piVar9;
  *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x68) = puVar24;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)(puVar5 + -0xe0) = 0;
  *(undefined8 *)(puVar5 + -0xd8) = 0;
  *(undefined8 *)(puVar5 + -0xd0) = 0;
  *(undefined4 *)(puVar5 + -0xe4) = 0;
  if (*(long *)(lVar16 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar16 + 0x10) + 0x90) != '\0') {
    return 0;
  }
  if (lVar10 == 0) goto code_r0x014fe8f8;
  uVar8 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar10,0);
  if ((uVar8 & 1) != 0) {
    return 0;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar19,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350),0);
  if (iVar7 != 0) {
    if (piVar15 == (int *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar5 + -0x100,piVar15,uRam0000000003d3bf10);
    *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(puVar5 + -0xf8);
    *(undefined8 *)(puVar5 + -0xe0) = *(undefined8 *)(puVar5 + -0x100);
    *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0xf0);
    while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar5 + -0xe0,uRam0000000003d32f58), (uVar8 & 1) != 0) {
      lVar20 = *(long *)(puVar5 + -0xd0);
      if (lVar20 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar21 = *(undefined8 *)(lVar20 + 0x10);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar21,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310)
                              ,0);
      if ((uVar8 & 1) != 0) {
        fVar26 = *(float *)(lVar20 + 0x18);
        fVar27 = -fVar26;
        if (fVar26 != INFINITY) {
          fVar27 = fVar26;
        }
        *(int *)(puVar5 + -0xe4) = (int)fVar27;
        plVar11 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,puVar5 + -0xe4);
        if (plVar11 == (long *)0x0) goto code_r0x014fe8fc;
        uVar21 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        puVar12 = (undefined4 *)func_0x00f78ae4(plVar11);
        *(undefined4 *)(puVar5 + -0xe4) = *puVar12;
        lVar19 = /*System.String$$Concat*/ func_0x029bdb88(lVar19,uVar21,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar5 + -0xe0,uRam0000000003d32f50);
  }
  if (*(long *)(lVar16 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar7 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar16 + 0x28),lVar19,uRam0000000003d30020);
  if (iVar7 == 0) {
code_r0x014fe888:
    uVar8 = 1;
  }
  else {
    if (*(long *)(lVar16 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar16 + 0x28),lVar19,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*piVar17 - 1U < 2) {
        iVar7 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      iVar7 = 1;
code_r0x014fe860:
      *piVar17 = iVar7;
    }
    iVar7 = (int)extraout_x1_00;
    if (iVar7 == 3) {
      if ((*(long *)(lVar10 + 0xa0) == 0) ||
         (lVar20 = *(long *)(*(long *)(lVar10 + 0xa0) + 0x90), lVar20 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar4)();
      }
      iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar20,0);
      if (1 < iVar7) {
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (ulong)(iVar7 < 3);
      }
      uVar8 = 2;
    }
    else {
      uVar8 = extraout_x1_00;
      if (iVar7 != 2) {
        if (iVar7 == 0) {
          uVar8 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar10,0);
          return uVar8;
        }
        goto code_r0x014fe888;
      }
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar8,0);
    uVar8 = (ulong)(iVar7 == 0);
  }
  return uVar8;
}



// ============================================================
// RVA: 0x145bc80 | Atlas.Audio.AtlasAudioManager.SpeakSneer
// ============================================================

/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_AtlasAudioManager__SpeakSneer(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 *puVar9;
  long lVar10;
  long extraout_x1;
  long lVar11;
  ulong extraout_x1_00;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x20;
  long lVar16;
  long unaff_x21;
  int *unaff_x22;
  int *piVar17;
  undefined8 unaff_x23;
  undefined8 uVar18;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar19;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar20;
  undefined *unaff_x30;
  undefined *puVar21;
  float extraout_s0;
  undefined4 uVar22;
  float fVar23;
  undefined8 uVar24;
  uint uVar25;
  float fVar26;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar27 [16];
  undefined8 uStack_138;
  undefined *puStack_68;
  
  puVar20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb47e3 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47e3 = 1;
  }
  lVar16 = 0x3eb4000;
  piVar17 = unaff_x22;
  uVar18 = unaff_x23;
  uVar5 = unaff_x24;
  uVar19 = unaff_x25;
  uVar14 = unaff_x26;
  uVar7 = unaff_d8;
  if (param_2 == 0) {
LAB_0145be24:
    unaff_d8 = uVar7;
    unaff_x26 = uVar14;
    unaff_x25 = uVar19;
    unaff_x24 = uVar5;
    unaff_x23 = uVar18;
    unaff_x22 = piVar17;
    unaff_x21 = param_1;
    unaff_x20 = lVar16;
    auVar27 = func_0x00f78af4();
    lVar15 = auVar27._8_8_;
    puStack_68 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
    if ((bRam0000000003eb47e4 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e4 = 1;
    }
    if (lVar15 != 0) {
      uVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar15,0);
      lVar16 = 0x28;
      if ((int)uVar7 == 0) {
        lVar16 = 0x30;
      }
      lVar16 = *(long *)(auVar27._0_8_ + lVar16);
      if (lVar16 == 0) {
        return uVar7;
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = *(long *)(auVar27._0_8_ + 0x48);
      if (lVar10 != 0) {
        param_1 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
        uVar25 = *(uint *)(lVar10 + 0x180);
        piVar17 = *(int **)(lVar10 + 0xb8);
        piVar4 = (int *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(piVar4,uRam0000000003d3bf00);
        uVar5 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
        uVar18 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        /*Atlas.Audio.SpeechParam$$.ctor*/ func_0x014fe3e8(uVar18,uVar5,0x11,0);
        if (piVar4 != (int *)0x0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(piVar4,uVar18,uRam0000000003d3bf08);
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
          unaff_x30 = puStack_68;
          goto Atlas_Audio_SpeechManager__TryPlay;
        }
      }
    }
    lVar16 = func_0x00f78af4();
    if ((bRam0000000003eb47e5 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47e5 = 1;
    }
    if (extraout_x1 == 0) {
code_r0x0145c21c:
      fVar26 = (float)func_0x00f78af4();
      if ((bRam0000000003eb47e6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d24568);
        bRam0000000003eb47e6 = 1;
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_138 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
      if (((*(byte *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar23 = _UNK_033f8148;
      if (fVar26 != 0.0) {
        fVar23 = fVar26;
      }
      fVar26 = INFINITY;
      if (fVar23 != -INFINITY) {
        fVar26 = ABS(SQRT(fVar23));
      }
      uVar7 = /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar26,&uStack_138,
                              *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x388),1,0);
      return uVar7;
    }
    iVar2 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
    if ((iVar2 != 0) && (uVar7 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)uVar7 == 0)) {
      return uVar7;
    }
    if (*(long *)(lVar16 + 0x30) == 0) goto code_r0x0145c21c;
    uVar7 = /*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar16 + 0x30),0);
    if ((uVar7 & 1) != 0) {
      return uVar7;
    }
    if (*(int *)(lVar16 + 0x50) != 1) {
      return uVar7;
    }
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar15 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
    if (*(float *)(lVar15 + 0x30) <= extraout_s0) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
    }
    if (0.0 <= *(float *)(lVar16 + 0x88)) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
    }
    if (*(char *)(extraout_x1 + 0x38) == '\0') {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
    }
    fVar26 = *(float *)(lVar16 + 0x8c);
    uVar7 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      uVar7 = func_0x00f78ad0();
      lVar15 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
    }
    if (fVar26 <= *(float *)(lVar15 + 800)) {
      return uVar7;
    }
    iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
    if (iVar2 == 2) {
      lVar15 = *(long *)(lVar16 + 0x30);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = *(long *)(lVar16 + 0x48);
      if ((lVar10 == 0) || (lVar15 == 0)) goto code_r0x0145c21c;
      uVar5 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
      uVar18 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
      uVar19 = *(undefined8 *)(lVar10 + 0xb8);
      uVar22 = *(undefined4 *)(lVar10 + 0x180);
      uVar24 = 0x3f800000;
      uVar14 = 6;
    }
    else if (iVar2 == 1) {
      lVar15 = *(long *)(lVar16 + 0x30);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar15 == 0) goto code_r0x0145c21c;
      uVar19 = *(undefined8 *)(extraout_x1 + 0xb8);
      uVar22 = *(undefined4 *)(extraout_x1 + 0x180);
      uVar5 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
      uVar24 = 0;
      uVar14 = 1;
      uVar18 = uVar5;
    }
    else {
      if (iVar2 != 0) goto code_r0x0145c1e0;
      lVar15 = *(long *)(lVar16 + 0x30);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar15 == 0) goto code_r0x0145c21c;
      uVar19 = *(undefined8 *)(extraout_x1 + 0xb8);
      uVar22 = *(undefined4 *)(extraout_x1 + 0x180);
      uVar5 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
      uVar24 = 0;
      uVar14 = 0;
      uVar18 = uVar5;
    }
    /*Atlas.Audio.SpeechManager$$TryPlay*/ func_0x014fe2a8(uVar22,uVar24,lVar15,extraout_x1,uVar5,uVar19,uVar18,uVar14,4,0);
code_r0x0145c1e0:
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
    *(undefined4 *)(lVar16 + 0x88) = *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x34);
    return uVar7;
  }
  uVar3 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_2,0);
  lVar16 = 0x28;
  if ((int)uVar3 == 0) {
    lVar16 = 0x30;
  }
  lVar16 = *(long *)(param_1 + lVar16);
  if (lVar16 == 0) {
    return uVar3;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar15 = *(long *)(param_1 + 0x48);
  uVar5 = 0x3d1ff28;
  if (lVar15 == 0) goto LAB_0145be24;
  param_1 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
  uVar25 = *(uint *)(lVar15 + 0x180);
  piVar17 = *(int **)(lVar15 + 0xb8);
  piVar4 = (int *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(piVar4,uRam0000000003d3bf00);
  uVar19 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
  uVar5 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
  /*Atlas.Audio.SpeechParam$$.ctor*/ func_0x014fe3e8(uVar5,uVar19,0xf,0);
  uVar18 = 0;
  uVar14 = 0x3d24000;
  uVar7 = (ulong)uVar25;
  if (piVar4 == (int *)0x0) goto LAB_0145be24;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(piVar4,uVar5,uRam0000000003d3bf08);
  lVar15 = param_2;
  param_2 = unaff_x19;
  puVar20 = unaff_x29;
Atlas_Audio_SpeechManager__TryPlay:
  auVar27._8_8_ = lVar15;
  auVar27._0_8_ = lVar16;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(int **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = param_2;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar20;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined4 *)((long)register0x00000008 + -0x54) = 1;
  lVar10 = param_1;
  piVar12 = piVar17;
  piVar13 = piVar4;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(uVar25,0,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if (*(char *)(lVar16 + 0x34) == '\0') {
code_r0x014fe49c:
    piVar13 = (int *)((long)register0x00000008 + -0x54);
    puVar21 = &UNK_014fe4b4;
    lVar10 = param_1;
    piVar12 = piVar4;
  }
  else {
    if (*(long *)(lVar16 + 0x10) != 0) {
      if (*(char *)(*(long *)(lVar16 + 0x10) + 0xcb) == '\0') {
        return 0;
      }
      goto code_r0x014fe49c;
    }
    puVar21 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar27 = func_0x00f78af4();
  }
  lVar11 = auVar27._8_8_;
  lVar6 = auVar27._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0x98) = lVar15;
  *(long *)((long)register0x00000008 + -0x90) = param_1;
  *(long *)((long)register0x00000008 + -0x88) = lVar16;
  *(int **)((long)register0x00000008 + -0x80) = piVar17;
  *(int **)((long)register0x00000008 + -0x78) = piVar4;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x68) = puVar21;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
  *(undefined4 *)((long)register0x00000008 + -0xe4) = 0;
  if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar6 + 0x10) + 0x90) != '\0') {
    return 0;
  }
  if (lVar11 == 0) goto code_r0x014fe8f8;
  uVar7 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar11,0);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar10,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350),0);
  if (iVar2 != 0) {
    if (piVar12 == (int *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)register0x00000008 + -0x100),piVar12,uRam0000000003d3bf10);
    *(undefined8 *)((long)register0x00000008 + -0xd8) =
         *(undefined8 *)((long)register0x00000008 + -0xf8);
    *(undefined8 *)((long)register0x00000008 + -0xe0) =
         *(undefined8 *)((long)register0x00000008 + -0x100);
    *(undefined8 *)((long)register0x00000008 + -0xd0) =
         *(undefined8 *)((long)register0x00000008 + -0xf0);
    while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)register0x00000008 + -0xe0),
                                   uRam0000000003d32f58), (uVar7 & 1) != 0) {
      lVar16 = *(long *)((long)register0x00000008 + -0xd0);
      if (lVar16 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar18 = *(undefined8 *)(lVar16 + 0x10);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar18,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310)
                              ,0);
      if ((uVar7 & 1) != 0) {
        fVar23 = *(float *)(lVar16 + 0x18);
        fVar26 = -fVar23;
        if (fVar23 != INFINITY) {
          fVar26 = fVar23;
        }
        *(int *)((long)register0x00000008 + -0xe4) = (int)fVar26;
        plVar8 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,
                                         (undefined1 *)((long)register0x00000008 + -0xe4));
        if (plVar8 == (long *)0x0) goto code_r0x014fe8fc;
        uVar18 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        puVar9 = (undefined4 *)func_0x00f78ae4(plVar8);
        *(undefined4 *)((long)register0x00000008 + -0xe4) = *puVar9;
        lVar10 = /*System.String$$Concat*/ func_0x029bdb88(lVar10,uVar18,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0xe0),uRam0000000003d32f50);
  }
  if (*(long *)(lVar6 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar2 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar6 + 0x28),lVar10,uRam0000000003d30020);
  if (iVar2 == 0) {
code_r0x014fe888:
    uVar7 = 1;
  }
  else {
    if (*(long *)(lVar6 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar6 + 0x28),lVar10,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*piVar13 - 1U < 2) {
        iVar2 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      iVar2 = 1;
code_r0x014fe860:
      *piVar13 = iVar2;
    }
    iVar2 = (int)extraout_x1_00;
    if (iVar2 == 3) {
      if ((*(long *)(lVar11 + 0xa0) == 0) ||
         (lVar16 = *(long *)(*(long *)(lVar11 + 0xa0) + 0x90), lVar16 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar1)();
      }
      iVar2 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar16,0);
      if (1 < iVar2) {
        iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (ulong)(iVar2 < 3);
      }
      uVar7 = 2;
    }
    else {
      uVar7 = extraout_x1_00;
      if (iVar2 != 2) {
        if (iVar2 == 0) {
          uVar7 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar11,0);
          return uVar7;
        }
        goto code_r0x014fe888;
      }
    }
    iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar7,0);
    uVar7 = (ulong)(iVar2 == 0);
  }
  return uVar7;
}



// ============================================================
// RVA: 0x145be28 | Atlas.Audio.AtlasAudioManager.SpeakIncoming
// ============================================================

/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_AtlasAudioManager__SpeakIncoming(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  long extraout_x1;
  ulong extraout_x1_00;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined8 uVar14;
  float extraout_s0;
  float fVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  
  if ((bRam0000000003eb47e4 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47e4 = 1;
  }
  if (param_2 != 0) {
    uVar3 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_2,0);
    lVar11 = 0x28;
    if ((int)uVar3 == 0) {
      lVar11 = 0x30;
    }
    lVar11 = *(long *)(param_1 + lVar11);
    if (lVar11 == 0) {
      return uVar3;
    }
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar9 = *(long *)(param_1 + 0x48);
    if (lVar9 != 0) {
      uVar12 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
      uVar17 = *(undefined4 *)(lVar9 + 0x180);
      piVar13 = *(int **)(lVar9 + 0xb8);
      piVar4 = (int *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(piVar4,uRam0000000003d3bf00);
      uVar14 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
      uVar5 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      /*Atlas.Audio.SpeechParam$$.ctor*/ func_0x014fe3e8(uVar5,uVar14,0x11,0);
      if (piVar4 != (int *)0x0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(piVar4,uVar5,uRam0000000003d3bf08);
        uVar5 = uVar12;
        piVar7 = piVar4;
        if ((bRam0000000003eb4cda & 1) == 0) {
          func_0x00f78a20(uVar17,0,0x3d3da38);
          bRam0000000003eb4cda = 1;
        }
        if (*(char *)(lVar11 + 0x34) == '\0') {
code_r0x014fe49c:
          piVar7 = (int *)&stack0xffffffffffffffac;
          uVar5 = uVar12;
          piVar13 = piVar4;
        }
        else {
          if (*(long *)(lVar11 + 0x10) != 0) {
            if (*(char *)(*(long *)(lVar11 + 0x10) + 0xcb) == '\0') {
              return 0;
            }
            goto code_r0x014fe49c;
          }
          auVar19 = func_0x00f78af4();
          param_2 = auVar19._8_8_;
          lVar11 = auVar19._0_8_;
        }
        if ((bRam0000000003eb4cde & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d30020);
          func_0x00f78a20(0x3d30028);
          func_0x00f78a20(0x3d32f50);
          func_0x00f78a20(0x3d32f58);
          func_0x00f78a20(0x3d32f60);
          func_0x00f78a20(0x3d3bf10);
          func_0x00f78a20(0x3d269f8);
          bRam0000000003eb4cde = 1;
        }
        uStack_e0 = 0;
        uStack_d8 = 0;
        iStack_e4 = 0;
        if (*(long *)(lVar11 + 0x10) == 0) goto code_r0x014fe8f8;
        if (*(char *)(*(long *)(lVar11 + 0x10) + 0x90) != '\0') {
          return 0;
        }
        if (param_2 == 0) goto code_r0x014fe8f8;
        uVar3 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(param_2,0);
        if ((uVar3 & 1) != 0) {
          return 0;
        }
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar5,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350),0);
        if (iVar2 != 0) {
          if (piVar13 == (int *)0x0) goto code_r0x014fe8f8;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_100,piVar13,uRam0000000003d3bf10);
          uStack_d8 = uStack_f8;
          uStack_e0 = uStack_100;
          while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e0,uRam0000000003d32f58), (uVar3 & 1) != 0) {
            if (lStack_f0 == 0) {
              func_0x00f78af4();
              goto code_r0x014fe900;
            }
            uVar12 = *(undefined8 *)(lStack_f0 + 0x10);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar12,*(undefined8 *)
                                            (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310),0);
            if ((uVar3 & 1) != 0) {
              fVar15 = *(float *)(lStack_f0 + 0x18);
              fVar18 = -fVar15;
              if (fVar15 != INFINITY) {
                fVar18 = fVar15;
              }
              iStack_e4 = (int)fVar18;
              plVar6 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,&iStack_e4);
              if (plVar6 == (long *)0x0) goto code_r0x014fe8fc;
              uVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
              piVar13 = (int *)func_0x00f78ae4(plVar6);
              iStack_e4 = *piVar13;
              uVar5 = /*System.String$$Concat*/ func_0x029bdb88(uVar5,uVar12,0);
            }
          }
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e0,uRam0000000003d32f50);
        }
        if (*(long *)(lVar11 + 0x28) == 0) goto code_r0x014fe8f8;
        iVar2 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar11 + 0x28),uVar5,uRam0000000003d30020);
        if (iVar2 == 0) {
code_r0x014fe888:
          uVar3 = 1;
        }
        else {
          if (*(long *)(lVar11 + 0x28) == 0) goto code_r0x014fe8f8;
          /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar11 + 0x28),uVar5,uRam0000000003d30028);
          if ((extraout_x1_00 & 0xff00000000) == 0) {
            if (*piVar7 - 1U < 2) {
              iVar2 = 4;
              goto code_r0x014fe860;
            }
          }
          else {
            iVar2 = 1;
code_r0x014fe860:
            *piVar7 = iVar2;
          }
          iVar2 = (int)extraout_x1_00;
          if (iVar2 == 3) {
            if ((*(long *)(param_2 + 0xa0) == 0) ||
               (lVar11 = *(long *)(*(long *)(param_2 + 0xa0) + 0x90), lVar11 == 0)) {
code_r0x014fe8f8:
              func_0x00f78af4();
code_r0x014fe8fc:
              func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x14fe904);
              (*pcVar1)();
            }
            iVar2 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar11,0);
            if (1 < iVar2) {
              iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
              return (ulong)(iVar2 < 3);
            }
            uVar3 = 2;
          }
          else {
            uVar3 = extraout_x1_00;
            if (iVar2 != 2) {
              if (iVar2 == 0) {
                uVar3 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(param_2,0);
                return uVar3;
              }
              goto code_r0x014fe888;
            }
          }
          iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar3,0);
          uVar3 = (ulong)(iVar2 == 0);
        }
        return uVar3;
      }
    }
  }
  lVar11 = func_0x00f78af4();
  if ((bRam0000000003eb47e5 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47e5 = 1;
  }
  if (extraout_x1 == 0) {
code_r0x0145c21c:
    fVar18 = (float)func_0x00f78af4();
    if ((bRam0000000003eb47e6 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d24568);
      bRam0000000003eb47e6 = 1;
    }
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_d8 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
    if (((*(byte *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar15 = _UNK_033f8148;
    if (fVar18 != 0.0) {
      fVar15 = fVar18;
    }
    fVar18 = INFINITY;
    if (fVar15 != -INFINITY) {
      fVar18 = ABS(SQRT(fVar15));
    }
    uVar3 = /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar18,&uStack_d8,
                            *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x388),1,0);
    return uVar3;
  }
  iVar2 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
  if ((iVar2 != 0) && (uVar3 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)uVar3 == 0)) {
    return uVar3;
  }
  if (*(long *)(lVar11 + 0x30) == 0) goto code_r0x0145c21c;
  uVar3 = /*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar11 + 0x30),0);
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  if (*(int *)(lVar11 + 0x50) != 1) {
    return uVar3;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
  if (*(float *)(lVar9 + 0x30) <= extraout_s0) {
    return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
  }
  if (0.0 <= *(float *)(lVar11 + 0x88)) {
    return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
  }
  if (*(char *)(extraout_x1 + 0x38) == '\0') {
    return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
  }
  fVar18 = *(float *)(lVar11 + 0x8c);
  uVar3 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    uVar3 = func_0x00f78ad0();
    lVar9 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
  }
  if (fVar18 <= *(float *)(lVar9 + 800)) {
    return uVar3;
  }
  iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
  if (iVar2 == 2) {
    lVar9 = *(long *)(lVar11 + 0x30);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar10 = *(long *)(lVar11 + 0x48);
    if ((lVar10 == 0) || (lVar9 == 0)) goto code_r0x0145c21c;
    uVar12 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
    uVar5 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
    uVar14 = *(undefined8 *)(lVar10 + 0xb8);
    uVar17 = *(undefined4 *)(lVar10 + 0x180);
    uVar16 = 0x3f800000;
    uVar8 = 6;
  }
  else if (iVar2 == 1) {
    lVar9 = *(long *)(lVar11 + 0x30);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar9 == 0) goto code_r0x0145c21c;
    uVar14 = *(undefined8 *)(extraout_x1 + 0xb8);
    uVar17 = *(undefined4 *)(extraout_x1 + 0x180);
    uVar12 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
    uVar16 = 0;
    uVar8 = 1;
    uVar5 = uVar12;
  }
  else {
    if (iVar2 != 0) goto code_r0x0145c1e0;
    lVar9 = *(long *)(lVar11 + 0x30);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar9 == 0) goto code_r0x0145c21c;
    uVar14 = *(undefined8 *)(extraout_x1 + 0xb8);
    uVar17 = *(undefined4 *)(extraout_x1 + 0x180);
    uVar12 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
    uVar16 = 0;
    uVar8 = 0;
    uVar5 = uVar12;
  }
  /*Atlas.Audio.SpeechManager$$TryPlay*/ func_0x014fe2a8(uVar17,uVar16,lVar9,extraout_x1,uVar12,uVar14,uVar5,uVar8,4,0);
code_r0x0145c1e0:
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
  *(undefined4 *)(lVar11 + 0x88) = *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x34);
  return uVar3;
}



// ============================================================
// RVA: 0x145bfd0 | Atlas.Audio.AtlasAudioManager.RandomAISpeech
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Audio_AtlasAudioManager__RandomAISpeech(float param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uStack_78;
  
  if ((bRam0000000003eb47e5 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47e5 = 1;
  }
  if (param_3 == 0) {
LAB_0145c21c:
    fVar12 = (float)func_0x00f78af4();
    if ((bRam0000000003eb47e6 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d24568);
      bRam0000000003eb47e6 = 1;
    }
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_78 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
    if (((*(byte *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar10 = _UNK_033f8148;
    if (fVar12 != 0.0) {
      fVar10 = fVar12;
    }
    fVar12 = INFINITY;
    if (fVar10 != -INFINITY) {
      fVar12 = ABS(SQRT(fVar10));
    }
    /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar12,&uStack_78,
                    *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x388),1,0);
    return;
  }
  iVar1 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_3,0);
  if ((iVar1 != 0) && (iVar1 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(param_3,0), iVar1 == 0)) {
    return;
  }
  if (*(long *)(param_2 + 0x30) == 0) goto LAB_0145c21c;
  uVar2 = /*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(param_2 + 0x30),0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(int *)(param_2 + 0x50) != 1) {
    return;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8);
  if (*(float *)(lVar7 + 0x30) <= param_1) {
    return;
  }
  if (0.0 <= *(float *)(param_2 + 0x88)) {
    return;
  }
  if (*(char *)(param_3 + 0x38) == '\0') {
    return;
  }
  fVar12 = *(float *)(param_2 + 0x8c);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar7 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8);
  }
  if (fVar12 <= *(float *)(lVar7 + 800)) {
    return;
  }
  iVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
  if (iVar1 == 2) {
    lVar7 = *(long *)(param_2 + 0x30);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = *(long *)(param_2 + 0x48);
    if ((lVar8 == 0) || (lVar7 == 0)) goto LAB_0145c21c;
    uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x350);
    uVar5 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x310);
    uVar4 = *(undefined8 *)(lVar8 + 0xb8);
    uVar9 = *(undefined4 *)(lVar8 + 0x180);
    uVar11 = 0x3f800000;
    uVar6 = 6;
  }
  else if (iVar1 == 1) {
    lVar7 = *(long *)(param_2 + 0x30);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) goto LAB_0145c21c;
    uVar4 = *(undefined8 *)(param_3 + 0xb8);
    uVar9 = *(undefined4 *)(param_3 + 0x180);
    uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x378);
    uVar11 = 0;
    uVar6 = 1;
    uVar5 = uVar3;
  }
  else {
    if (iVar1 != 0) goto LAB_0145c1e0;
    lVar7 = *(long *)(param_2 + 0x30);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) goto LAB_0145c21c;
    uVar4 = *(undefined8 *)(param_3 + 0xb8);
    uVar9 = *(undefined4 *)(param_3 + 0x180);
    uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x378);
    uVar11 = 0;
    uVar6 = 0;
    uVar5 = uVar3;
  }
  /*Atlas.Audio.SpeechManager$$TryPlay*/ func_0x014fe2a8(uVar9,uVar11,lVar7,param_3,uVar3,uVar4,uVar5,uVar6,4,0);
LAB_0145c1e0:
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x34);
  return;
}



// ============================================================
// RVA: 0x145c220 | Atlas.Audio.AtlasAudioManager.SetMusicVolume
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Audio_AtlasAudioManager__SetMusicVolume(float param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb47e6 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb47e6 = 1;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_38 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
  if (((*(byte *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar1 = _UNK_033f8148;
  if (param_1 != 0.0) {
    fVar1 = param_1;
  }
  fVar2 = INFINITY;
  if (fVar1 != -INFINITY) {
    fVar2 = ABS(SQRT(fVar1));
  }
  /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar2,&uStack_38,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x388),1
                  ,0);
  return;
}



// ============================================================
// RVA: 0x145c310 | Atlas.Audio.AtlasAudioManager.CalcLogVolume
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Atlas_Audio_AtlasAudioManager__CalcLogVolume(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = _UNK_033f8148;
  if (param_1 != 0.0) {
    fVar1 = param_1;
  }
  fVar2 = INFINITY;
  if (fVar1 != -INFINITY) {
    fVar2 = ABS(SQRT(fVar1));
  }
  return fVar2;
}



// ============================================================
// RVA: 0x145c344 | Atlas.Audio.AtlasAudioManager.SetSfxVolume
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Audio_AtlasAudioManager__SetSfxVolume(float param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb47e7 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb47e7 = 1;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_38 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
  if (((*(byte *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar1 = _UNK_033f8148;
  if (param_1 != 0.0) {
    fVar1 = param_1;
  }
  fVar2 = INFINITY;
  if (fVar1 != -INFINITY) {
    fVar2 = ABS(SQRT(fVar1));
  }
  /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar2,&uStack_38,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x390),1
                  ,0);
  return;
}



// ============================================================
// RVA: 0x145c434 | Atlas.Audio.AtlasAudioManager.SetVOVolume
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Audio_AtlasAudioManager__SetVOVolume(float param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb47e8 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb47e8 = 1;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_38 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
  if (((*(byte *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar1 = _UNK_033f8148;
  if (param_1 != 0.0) {
    fVar1 = param_1;
  }
  fVar2 = INFINITY;
  if (fVar1 != -INFINITY) {
    fVar2 = ABS(SQRT(fVar1));
  }
  /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar2,&uStack_38,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x398),1
                  ,0);
  return;
}



// ============================================================
// RVA: 0x145c524 | Atlas.Audio.AtlasAudioManager.StopAllSpeech
// ============================================================

/* WARNING: Possible PIC construction at 0x0145c550: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145c554) */
/* WARNING: Removing unreachable block (ram,0x0145c55c) */
/* WARNING: Removing unreachable block (ram,0x0145c56c) */
/* WARNING: Removing unreachable block (ram,0x01638ab0) */

long Atlas_Audio_AtlasAudioManager__StopAllSpeech(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    /*Atlas.Audio.SpeechManager$$ClearQueue*/ func_0x014fe204(*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
      if (lVar3 == 0) {
        return 0;
      }
      if ((bRam0000000003eb56ac & 1) == 0) {
        func_0x00f78a20(0x3d24568,1,0);
        bRam0000000003eb56ac = 1;
      }
      lVar1 = lVar3 + 0x28;
      iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar1,0);
      if (iVar2 != 0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x28);
        if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar4,0);
        /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar1,1,0);
        /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar1,0);
        /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar1,0);
      }
      return lVar3;
    }
  }
  lVar3 = func_0x00f78af4();
  return lVar3;
}



// ============================================================
// RVA: 0x145c580 | Atlas.Audio.AtlasAudioManager.UnloadBanks
// ============================================================

void Atlas_Audio_AtlasAudioManager__UnloadBanks(void)

{
  return;
}



// ============================================================
// RVA: 0x145c584 | Atlas.Audio.AtlasAudioManager.Remap
// ============================================================

float Atlas_Audio_AtlasAudioManager__Remap
                (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  return (param_1 - param_2) * ((param_5 - param_4) / (param_3 - param_2)) + param_4;
}



// ============================================================
// RVA: 0x145c5a0 | Atlas.Audio.AtlasAudioManager..ctor
// ============================================================

undefined1  [16] Atlas_Audio_AtlasAudioManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb47eb & 1) == 0) {
    func_0x00f78a20(0x3d1f010);
    func_0x00f78a20(0x3d39dd0);
    func_0x00f78a20(0x3d1d7e8);
    bRam0000000003eb47eb = 1;
  }
  *(undefined4 *)(param_1 + 0x50) = 2;
  *(undefined4 *)(param_1 + 0x58) = 3;
  uVar1 = func_0x00f78a34(/*Atlas.Gameplay.Player.GameContextPlayer[]_TypeInfo*/ uRam0000000003d1f010,0);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 200) = 0x101010101010101;
  *(undefined4 *)(param_1 + 0xcf) = 0x1010101;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<AudioTrigger>_TypeInfo*/ uRam0000000003d1d7e8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d39dd0);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



