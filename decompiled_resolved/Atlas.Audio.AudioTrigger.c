// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Audio.AudioTrigger

// ============================================================
// RVA: 0x1471a7c | Atlas.Audio.AudioTrigger.get_Doppler
// ============================================================

undefined1 Atlas_Audio_AudioTrigger__get_Doppler(long param_1)

{
  return *(undefined1 *)(param_1 + 0x94);
}



// ============================================================
// RVA: 0x1471a84 | Atlas.Audio.AudioTrigger.get_DopplerMultiplier
// ============================================================

undefined4 Atlas_Audio_AudioTrigger__get_DopplerMultiplier(long param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x1471a8c | Atlas.Audio.AudioTrigger.GetMode
// ============================================================

undefined4 Atlas_Audio_AudioTrigger__GetMode(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x1471a94 | Atlas.Audio.AudioTrigger.SetMode
// ============================================================

void Atlas_Audio_AudioTrigger__SetMode(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}



// ============================================================
// RVA: 0x1471a9c | Atlas.Audio.AudioTrigger.GetReverbName
// ============================================================

undefined8 Atlas_Audio_AudioTrigger__GetReverbName(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x1471aa4 | Atlas.Audio.AudioTrigger.SetReverbName
// ============================================================

void Atlas_Audio_AudioTrigger__SetReverbName(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}



// ============================================================
// RVA: 0x1471aac | Atlas.Audio.AudioTrigger.GetGlobalReverb
// ============================================================

undefined1 Atlas_Audio_AudioTrigger__GetGlobalReverb(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1471ab4 | Atlas.Audio.AudioTrigger.SetGlobalReverb
// ============================================================

void Atlas_Audio_AudioTrigger__SetGlobalReverb(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x68) = param_2;
  return;
}



// ============================================================
// RVA: 0x1471abc | Atlas.Audio.AudioTrigger.GetGlobalSound
// ============================================================

undefined1 Atlas_Audio_AudioTrigger__GetGlobalSound(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x1471ac4 | Atlas.Audio.AudioTrigger.Play
// ============================================================

ulong Atlas_Audio_AudioTrigger__Play(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4876 & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4876 = 1;
  }
  uVar2 = *(ulong *)(param_1 + 0xb0);
  if (uVar2 == 0) {
    uVar1 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(param_1 + 0x48),/*STR('')*/ uRam0000000003d65d08,0);
    if ((uVar1 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + 0xb0);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      uVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
      uVar1 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar2,uVar3,0,0,0);
      *(ulong *)(param_1 + 0xb0) = uVar2;
    }
    if (uVar2 == 0) {
      return uVar1;
    }
  }
  /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar2,param_2,0);
  return uVar2;
}



// ============================================================
// RVA: 0x1471b94 | Atlas.Audio.AudioTrigger.Stop
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01638aa8) */

long Atlas_Audio_AudioTrigger__Stop(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0xb0);
  if (lVar3 == 0) {
    return 0;
  }
  if ((bRam0000000003eb56ac & 1) == 0) {
    func_0x00f78a20(0x3d24568,0,0);
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
    /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar1,*(byte *)(lVar3 + 0x31) ^ 1,0);
    /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar1,0);
    /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar1,0);
  }
  return lVar3;
}



// ============================================================
// RVA: 0x1471bac | Atlas.Audio.AudioTrigger.PlaySOS
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Audio_AudioTrigger__PlaySOS(float param_1,long param_2)

{
  *(float *)(param_2 + 0xc0) = param_1 * _UNK_033f82c0 + _UNK_033f82c4;
  *(float *)(param_2 + 0xc4) = param_1;
  return;
}



// ============================================================
// RVA: 0x1471bcc | Atlas.Audio.AudioTrigger.Remap
// ============================================================

float Atlas_Audio_AudioTrigger__Remap
                (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  return (param_1 - param_2) * ((param_5 - param_4) / (param_3 - param_2)) + param_4;
}



// ============================================================
// RVA: 0x1471be8 | Atlas.Audio.AudioTrigger.internalPlaySOS
// ============================================================

long Atlas_Audio_AudioTrigger__internalPlaySOS(undefined4 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  long lVar3;
  undefined4 extraout_s0;
  
  if ((bRam0000000003eb4877 & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4877 = 1;
  }
  lVar3 = *(long *)(param_2 + 0xb8);
  if (lVar3 != 0) {
    uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0);
LAB_01471cc8:
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(param_1,lVar3,uVar2,*(undefined8 *)(param_2 + 0x38),0);
    return lVar3;
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    uVar2 = /*System.String$$Trim*/ func_0x029bab94(*(long *)(param_2 + 0x48),0);
    iVar1 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar2,/*STR('')*/ uRam0000000003d65d08,0);
    if (iVar1 == 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x20);
    }
    else {
      if (*(long *)(param_2 + 0x48) == 0) goto code_r0x01471cf0;
      uVar2 = /*System.String$$Trim*/ func_0x029bab94(*(long *)(param_2 + 0x48),0);
    }
    lVar3 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
    /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(lVar3,uVar2,1,0,0);
    *(long *)(param_2 + 0xb8) = lVar3;
    uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0);
    if (lVar3 != 0) goto LAB_01471cc8;
  }
code_r0x01471cf0:
  lVar3 = func_0x00f78af4();
  lVar3 = *(long *)(lVar3 + 0xb0);
  if (lVar3 != 0) {
    iVar1 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar3 + 0x28,0,0,0);
    if (iVar1 != 0) {
      /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(extraout_s0,lVar3 + 0x28,extraout_x1,0,0);
    }
    return lVar3;
  }
  return 0;
}



// ============================================================
// RVA: 0x1471cf4 | Atlas.Audio.AudioTrigger.SetParameter
// ============================================================

long Atlas_Audio_AudioTrigger__SetParameter(undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0xb0);
  if (lVar2 != 0) {
    iVar1 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar2 + 0x28,0,0,0);
    if (iVar1 != 0) {
      /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(param_1,lVar2 + 0x28,param_3,0,0);
    }
    return lVar2;
  }
  return 0;
}



// ============================================================
// RVA: 0x1471d0c | Atlas.Audio.AudioTrigger.Update
// ============================================================

long Atlas_Audio_AudioTrigger__Update(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined4 uVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 200);
  lVar3 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  *(float *)(param_1 + 200) = fVar5 + extraout_s0_00;
  if ((*(int *)(param_1 + 0x60) == 1) && (fVar5 = *(float *)(param_1 + 0xc0), 0.0 < fVar5)) {
    lVar3 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar5 = fVar5 - extraout_s0_01;
    *(float *)(param_1 + 0xc0) = fVar5;
    if (fVar5 <= 0.0) {
      *(undefined4 *)(param_1 + 0xc0) = 0xbf800000;
      uVar4 = *(undefined4 *)(param_1 + 0xc4);
      if ((bRam0000000003eb4877 & 1) == 0) {
        func_0x00f78a20(0x3d1ff30);
        func_0x00f78a20(0x3d65d08);
        bRam0000000003eb4877 = 1;
      }
      lVar3 = *(long *)(param_1 + 0xb8);
      if (lVar3 != 0) {
        uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
LAB_01471cc8:
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(uVar4,lVar3,uVar2,*(undefined8 *)(param_1 + 0x38),0);
        return lVar3;
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar2 = /*System.String$$Trim*/ func_0x029bab94(*(long *)(param_1 + 0x48),0);
        iVar1 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar2,/*STR('')*/ uRam0000000003d65d08,0);
        if (iVar1 == 0) {
          uVar2 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          if (*(long *)(param_1 + 0x48) == 0) goto code_r0x01471cf0;
          uVar2 = /*System.String$$Trim*/ func_0x029bab94(*(long *)(param_1 + 0x48),0);
        }
        lVar3 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
        /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(lVar3,uVar2,1,0,0);
        *(long *)(param_1 + 0xb8) = lVar3;
        uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
        if (lVar3 != 0) goto LAB_01471cc8;
      }
code_r0x01471cf0:
      lVar3 = func_0x00f78af4();
      lVar3 = *(long *)(lVar3 + 0xb0);
      if (lVar3 != 0) {
        iVar1 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar3 + 0x28,0,0,0);
        if (iVar1 != 0) {
          /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(extraout_s0,lVar3 + 0x28,extraout_x1,0,0);
        }
        return lVar3;
      }
      return 0;
    }
  }
  return lVar3;
}



// ============================================================
// RVA: 0x1471d94 | Atlas.Audio.AudioTrigger.ProcessCrowd
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1471f4c | Atlas.Audio.AudioTrigger.OnEnable
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1472094 | Atlas.Audio.AudioTrigger.StartReverb
// ============================================================

undefined8
Atlas_Audio_AudioTrigger__StartReverb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb487a & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb487a = 1;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_38 = /*FMODUnity.RuntimeManager$$CreateInstance*/ func_0x016e24f4(param_2,0);
  iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(&uStack_38,0);
  if (iVar2 != 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_3,0);
    uVar1 = uStack_38;
    if (iVar2 != 0) {
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*FMODUnity.RuntimeManager$$AttachInstanceToGameObject*/ func_0x016e2610(uVar1,param_3,0,0);
    }
    /*FMOD.Studio.EventInstance$$start*/ func_0x016dfb2c(&uStack_38,0);
  }
  return uStack_38;
}



// ============================================================
// RVA: 0x14721a0 | Atlas.Audio.AudioTrigger.CreateCollider
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14724c0 | Atlas.Audio.AudioTrigger.OnDisable
// ============================================================

/* WARNING: Possible PIC construction at 0x01472500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01349cb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01349cb4) */
/* WARNING: Removing unreachable block (ram,0x01349cbc) */
/* WARNING: Removing unreachable block (ram,0x01349cd0) */
/* WARNING: Removing unreachable block (ram,0x01349cf0) */
/* WARNING: Removing unreachable block (ram,0x01349d20) */
/* WARNING: Removing unreachable block (ram,0x01349d08) */

segment_command *
Atlas_Audio_AudioTrigger__OnDisable
          (long param_1,undefined8 param_2,segment_command *param_3,char *param_4,
          segment_command *param_5,undefined4 *param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  segment_command *psVar6;
  segment_command *psVar7;
  segment_command *psVar8;
  segment_command *psVar9;
  segment_command *psVar10;
  segment_command *psVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  segment_command *psVar15;
  segment_command *psVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  long extraout_x1;
  long extraout_x1_00;
  undefined1 *extraout_x1_01;
  long extraout_x1_02;
  byte *pbVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  undefined1 uVar22;
  byte bVar23;
  int *piVar24;
  long unaff_x19;
  undefined1 *puVar25;
  undefined8 unaff_x20;
  undefined8 uVar26;
  undefined4 *puVar27;
  dword *pdVar28;
  dword *pdVar29;
  undefined8 unaff_x21;
  undefined8 *puVar30;
  char *pcVar31;
  undefined8 unaff_x22;
  char *pcVar32;
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_47f8 [1680];
  undefined1 auStack_4168 [1040];
  undefined1 auStack_3d58 [9888];
  undefined1 auStack_16b8 [336];
  undefined1 auStack_1568 [4448];
  undefined1 auStack_408 [688];
  undefined1 auStack_158 [312];
  
  puVar25 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x68) != '\0') {
    /*Atlas.Audio.AudioTrigger$$StopReverb*/ func_0x01472528(param_1,*(undefined8 *)(param_1 + 0xa8));
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
LAB_01472504:
    lVar14 = *(long *)(param_1 + 0xb8);
    if (lVar14 == 0) {
      return (segment_command *)0x0;
    }
  }
  else {
    param_3 = (segment_command *)0x0;
    /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(param_1 + 0xb0),0);
    lVar14 = *(long *)(param_1 + 0xb0);
    if (lVar14 == 0) goto LAB_01472504;
    unaff_x30 = 0x1472504;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar25;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb56aa & 1) == 0) {
    func_0x00f78a20(0x3d24568,0);
    bRam0000000003eb56aa = 1;
  }
  /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar14,0);
  uVar26 = *(undefined8 *)(lVar14 + 0x28);
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar26,0);
  psVar15 = (segment_command *)/*FMOD.Studio.EventDescription$$isValid*/ func_0x016df5c8((undefined8 *)(lVar14 + 0x20),0);
  if ((int)psVar15 == 0) {
    return psVar15;
  }
  lVar1 = lVar14 + 0x28;
  psVar15 = (segment_command *)/*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar1,0);
  if ((int)psVar15 != 0) {
    /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar1,0);
    psVar15 = (segment_command *)/*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar1,0);
  }
  if (*(char *)(lVar14 + 0x18) == '\0') {
    return psVar15;
  }
  puVar21 = *(undefined8 **)((long)register0x00000008 + -0x30);
  uVar26 = *(undefined8 *)((long)register0x00000008 + -0x28);
  psVar16 = *(segment_command **)(lVar14 + 0x20);
  *(undefined8 **)((long)register0x00000008 + -0x30) = puVar21;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar26;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  *(undefined8 *)((long)register0x00000008 + -0x38) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
  psVar15 = (segment_command *)
            func_0x01279100(psVar16,(undefined1 *)((long)register0x00000008 + -0x148));
  if ((int)psVar15 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x148) + 0x24) >> 1 & 1) == 0) {
      psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar15 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x140));
      if ((int)psVar15 == 0) {
        uVar26 = 0x10;
        param_3 = (segment_command *)&MACH_HEADER.ncmds;
        psVar15 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x148) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x138));
        if ((int)psVar15 == 0) {
          puVar30 = *(undefined8 **)((long)register0x00000008 + -0x138);
          *puVar30 = &UNK_03c7d930;
          *(undefined4 *)(puVar30 + 1) = 0x10;
          *(int *)((long)puVar30 + 0xc) = (int)psVar16;
          psVar15 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x148) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x140));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -0x138) = 0;
    param_4 = "EventDescription::unloadSampleData";
    param_5 = (segment_command *)((long)register0x00000008 + -0x138);
    param_3 = psVar16;
    func_0x013aa954(psVar15,0xc);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x38)) {
    return psVar15;
  }
  auVar42 = ___stack_chk_fail();
  puVar27 = auVar42._8_8_;
  psVar6 = auVar42._0_8_;
  *(segment_command **)((long)register0x00000008 + -400) = unaff_x24;
  *(dword **)((long)register0x00000008 + -0x188) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x180) = puVar21;
  *(undefined8 *)((long)register0x00000008 + -0x178) = uVar26;
  *(segment_command **)((long)register0x00000008 + -0x170) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x168) = psVar16;
  *(undefined1 **)((long)register0x00000008 + -0x160) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x158) = &DAT_01344790;
  *(undefined8 *)((long)register0x00000008 + -0x198) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 == (undefined4 *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01344878:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x298),0x100,puVar27);
      param_4 = "EventDescription::getSampleLoadingState";
      param_5 = (segment_command *)((long)register0x00000008 + -0x298);
      param_3 = psVar6;
      func_0x013aa954(psVar15,0xc);
    }
  }
  else {
    *puVar27 = 1;
    *(undefined8 *)((long)register0x00000008 + -0x2a0) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar6,(undefined1 *)((long)register0x00000008 + -0x2a8));
    if ((int)psVar15 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x2a8) + 0x24) >> 1 & 1) == 0) {
        psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar15 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2a0));
        if ((int)psVar15 == 0) {
          unaff_x23 = &MACH_HEADER.flags;
          param_3 = (segment_command *)&MACH_HEADER.flags;
          psVar15 = (segment_command *)
                    func_0x012933e8(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x2a8) + 0x98),
                                    (undefined1 *)((long)register0x00000008 + -0x298));
          if ((int)psVar15 == 0) {
            puVar21 = *(undefined8 **)((long)register0x00000008 + -0x298);
            *puVar21 = &UNK_03c7d9a8;
            *(undefined4 *)(puVar21 + 1) = 0x18;
            *(int *)((long)puVar21 + 0xc) = auVar42._0_4_;
            psVar15 = (segment_command *)
                      func_0x01292948(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x2a8) + 0x98),puVar21
                                     );
            if ((int)psVar15 == 0) {
              *puVar27 = *(undefined4 *)(puVar21 + 2);
            }
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2a0));
    if ((int)psVar15 != 0) goto code_r0x01344878;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x198)) {
    return psVar15;
  }
  psVar16 = (segment_command *)___stack_chk_fail();
  *(undefined8 **)((long)register0x00000008 + -0x2e0) = puVar21;
  *(segment_command **)((long)register0x00000008 + -0x2d8) = psVar15;
  *(undefined4 **)((long)register0x00000008 + -0x2d0) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x2c8) = psVar6;
  *(undefined1 **)((long)register0x00000008 + -0x2c0) =
       (undefined1 *)((long)register0x00000008 + -0x160);
  *(undefined **)((long)register0x00000008 + -0x2b8) = &DAT_013448f0;
  *(undefined8 *)((long)register0x00000008 + -0x2e8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x3f0) = 0;
  psVar6 = (segment_command *)
           func_0x01279100(psVar16,(undefined1 *)((long)register0x00000008 + -0x3f8));
  if ((int)psVar6 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x3f8) + 0x24) >> 1 & 1) == 0) {
      psVar6 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar6 = (segment_command *)func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3f0))
      ;
      if ((int)psVar6 == 0) {
        psVar15 = (segment_command *)&MACH_HEADER.ncmds;
        param_3 = (segment_command *)&MACH_HEADER.ncmds;
        psVar6 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x3f8) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -1000));
        if ((int)psVar6 == 0) {
          puVar30 = *(undefined8 **)((long)register0x00000008 + -1000);
          *puVar30 = &UNK_03c7da20;
          *(undefined4 *)(puVar30 + 1) = 0x10;
          *(int *)((long)puVar30 + 0xc) = (int)psVar16;
          psVar6 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x3f8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3f0));
  if (((int)psVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -1000) = 0;
    param_4 = "EventDescription::releaseAllInstances";
    param_5 = (segment_command *)((long)register0x00000008 + -1000);
    param_3 = psVar16;
    func_0x013aa954(psVar6,0xc);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2e8)) {
    return psVar6;
  }
  auVar42 = ___stack_chk_fail();
  puVar30 = auVar42._8_8_;
  psVar8 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x450) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x448) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x440) = unaff_x24;
  *(dword **)((long)register0x00000008 + -0x438) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x430) = puVar21;
  *(segment_command **)((long)register0x00000008 + -0x428) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x420) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x418) = psVar16;
  *(undefined1 **)((long)register0x00000008 + -0x410) =
       (undefined1 *)((long)register0x00000008 + -0x2c0);
  *(undefined **)((long)register0x00000008 + -0x408) = &DAT_01344a08;
  *(undefined8 *)((long)register0x00000008 + -0x458) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x558) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x550) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x548) = 0;
  psVar15 = param_3;
  psVar16 = (segment_command *)
            func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x550));
  if ((((int)psVar16 == 0) &&
      (psVar16 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x558),
                                 *(undefined8 *)((long)register0x00000008 + -0x550)),
      (int)psVar16 == 0)) &&
     (psVar16 = (segment_command *)
                func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0x560)),
     (int)psVar16 == 0)) {
    lVar14 = *(long *)(*(long *)((long)register0x00000008 + -0x560) + 8);
    *(long *)((long)register0x00000008 + -0x548) = lVar14;
    lVar14 = *(long *)(lVar14 + 0xd0);
    *(undefined8 **)(lVar14 + 0x40) = puVar30;
    uVar5 = 0;
    if (puVar30 != (undefined8 *)0x0) {
      uVar5 = SUB84(param_3,0);
    }
    *(undefined4 *)(lVar14 + 0x48) = uVar5;
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x558));
  if (((int)psVar16 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    unaff_x23 = (dword *)((long)register0x00000008 + -0x558);
    unaff_x24 = (segment_command *)&section_000000b8.reserved2;
    iVar3 = func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x558),0x100,puVar30);
    puVar30 = (undefined8 *)(long)iVar3;
    iVar3 = func_0x0135ce6c((long)unaff_x23 + (long)puVar30,0x100 - iVar3,", ");
    func_0x0135cce0((long)unaff_x23 + (long)puVar30 + (long)iVar3,
                    0x100 - (int)((long)puVar30 + (long)iVar3),param_3);
    param_4 = "EventDescription::setCallback";
    param_5 = (segment_command *)((long)register0x00000008 + -0x558);
    psVar15 = psVar8;
    func_0x013aa954(psVar16,0xc);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x458)) {
    return psVar16;
  }
  auVar42 = ___stack_chk_fail();
  puVar21 = auVar42._8_8_;
  psVar6 = auVar42._0_8_;
  *(undefined8 **)((long)register0x00000008 + -0x590) = puVar30;
  *(segment_command **)((long)register0x00000008 + -0x588) = psVar16;
  *(segment_command **)((long)register0x00000008 + -0x580) = param_3;
  *(segment_command **)((long)register0x00000008 + -0x578) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x570) =
       (undefined1 *)((long)register0x00000008 + -0x410);
  *(undefined **)((long)register0x00000008 + -0x568) = &DAT_01344b64;
  *(undefined8 *)((long)register0x00000008 + -0x598) = *(undefined8 *)PTR_03a5d648;
  if (puVar21 == (undefined8 *)0x0) {
    psVar16 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01344c0c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x698),0x100,puVar21);
      param_4 = "EventDescription::getUserData";
      param_5 = (segment_command *)((long)register0x00000008 + -0x698);
      psVar15 = psVar6;
      func_0x013aa954(psVar16,0xc);
    }
  }
  else {
    *puVar21 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x698) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x690) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x688) = 0;
    psVar16 = (segment_command *)
              func_0x01279100(psVar6,(undefined1 *)((long)register0x00000008 + -0x690));
    if ((((int)psVar16 == 0) &&
        (psVar16 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x698),
                                   *(undefined8 *)((long)register0x00000008 + -0x690)),
        (int)psVar16 == 0)) &&
       (psVar16 = (segment_command *)
                  func_0x01279164(psVar6,(undefined1 *)((long)register0x00000008 + -0x6a0)),
       (int)psVar16 == 0)) {
      lVar14 = *(long *)(*(long *)((long)register0x00000008 + -0x6a0) + 8);
      *(long *)((long)register0x00000008 + -0x688) = lVar14;
      *puVar21 = *(undefined8 *)(*(long *)(lVar14 + 0xd0) + 0x38);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x698));
    if ((int)psVar16 != 0) goto code_r0x01344c0c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x598)) {
    return psVar16;
  }
  auVar42 = ___stack_chk_fail();
  uVar26 = auVar42._8_8_;
  psVar8 = auVar42._0_8_;
  *(undefined8 **)((long)register0x00000008 + -0x6d0) = puVar30;
  *(segment_command **)((long)register0x00000008 + -0x6c8) = psVar16;
  *(undefined8 **)((long)register0x00000008 + -0x6c0) = puVar21;
  *(segment_command **)((long)register0x00000008 + -0x6b8) = psVar6;
  *(undefined1 **)((long)register0x00000008 + -0x6b0) =
       (undefined1 *)((long)register0x00000008 + -0x570);
  *(undefined **)((long)register0x00000008 + -0x6a8) = &DAT_01344c80;
  *(undefined8 *)((long)register0x00000008 + -0x6d8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x7d8) = 0;
  *(undefined8 *)((long)register0x00000008 + -2000) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x7c8) = 0;
  psVar16 = (segment_command *)
            func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -2000));
  if ((((int)psVar16 == 0) &&
      (psVar16 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x7d8),
                                 *(undefined8 *)((long)register0x00000008 + -2000)),
      (int)psVar16 == 0)) &&
     (psVar16 = (segment_command *)
                func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0x7e0)),
     (int)psVar16 == 0)) {
    lVar14 = *(long *)(*(long *)((long)register0x00000008 + -0x7e0) + 8);
    *(long *)((long)register0x00000008 + -0x7c8) = lVar14;
    *(undefined8 *)(*(long *)(lVar14 + 0xd0) + 0x38) = uVar26;
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x7d8));
  if (((int)psVar16 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x7d8),0x100,uVar26);
    param_4 = "EventDescription::setUserData";
    param_5 = (segment_command *)((long)register0x00000008 + -0x7d8);
    psVar15 = psVar8;
    func_0x013aa954(psVar16,0xc);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x6d8)) {
    return psVar16;
  }
  auVar42 = ___stack_chk_fail();
  puVar21 = auVar42._8_8_;
  psVar6 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x820) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x818) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x810) = puVar30;
  *(segment_command **)((long)register0x00000008 + -0x808) = psVar16;
  *(undefined8 *)((long)register0x00000008 + -0x800) = uVar26;
  *(segment_command **)((long)register0x00000008 + -0x7f8) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x7f0) =
       (undefined1 *)((long)register0x00000008 + -0x6b0);
  *(undefined **)((long)register0x00000008 + -0x7e8) = &DAT_01344d84;
  *(undefined8 *)((long)register0x00000008 + -0x828) = *(undefined8 *)PTR_03a5d648;
  if (puVar21 == (undefined8 *)0x0) {
    psVar16 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01344e44:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d254((undefined1 *)((long)register0x00000008 + -0x928),0x100,puVar21);
      param_4 = "Bus::getID";
      param_5 = (segment_command *)((long)register0x00000008 + -0x928);
      psVar15 = psVar6;
      func_0x013aa954(psVar16,0xf);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x928) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x920) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x918) = 0;
    psVar16 = (segment_command *)
              func_0x01279100(psVar6,(undefined1 *)((long)register0x00000008 + -0x920));
    puVar30 = puVar21;
    if ((((int)psVar16 == 0) &&
        (psVar16 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x928),
                                   *(undefined8 *)((long)register0x00000008 + -0x920)),
        (int)psVar16 == 0)) &&
       (psVar16 = (segment_command *)
                  func_0x01279164(psVar6,(undefined1 *)((long)register0x00000008 + -0x930)),
       (int)psVar16 == 0)) {
      *(long *)((long)register0x00000008 + -0x918) = *(long *)((long)register0x00000008 + -0x930);
      lVar14 = *(long *)(*(long *)((long)register0x00000008 + -0x930) + 0x10);
      uVar26 = *(undefined8 *)(lVar14 + 0x10);
      puVar21[1] = *(undefined8 *)(lVar14 + 0x18);
      *puVar21 = uVar26;
      puVar30 = (undefined8 *)0x0;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x928));
    if (puVar30 != (undefined8 *)0x0) {
      *puVar30 = 0;
      puVar30[1] = 0;
    }
    if ((int)psVar16 != 0) goto code_r0x01344e44;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x828)) {
    return psVar16;
  }
  auVar42 = ___stack_chk_fail();
  pcVar32 = auVar42._8_8_;
  psVar8 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x990) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x988) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x980) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x978) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x970) = unaff_x24;
  *(dword **)((long)register0x00000008 + -0x968) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x960) = puVar30;
  *(segment_command **)((long)register0x00000008 + -0x958) = psVar16;
  *(undefined8 **)((long)register0x00000008 + -0x950) = puVar21;
  *(segment_command **)((long)register0x00000008 + -0x948) = psVar6;
  *(undefined1 **)((long)register0x00000008 + -0x940) =
       (undefined1 *)((long)register0x00000008 + -0x7f0);
  *(undefined **)((long)register0x00000008 + -0x938) = &DAT_01344ebc;
  *(undefined8 *)((long)register0x00000008 + -0x998) = *(undefined8 *)PTR_03a5d648;
  if ((segment_command *)pcVar32 != (segment_command *)0x0) {
    *(char *)&((segment_command *)pcVar32)->cmd = '\0';
  }
  if ((segment_command *)param_4 != (segment_command *)0x0) {
    ((segment_command *)param_4)->cmd = 0;
  }
  psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
  psVar16 = psVar15;
  pcVar31 = param_4;
  if (((int)psVar15 < 0) ||
     ((segment_command *)pcVar32 == (segment_command *)0x0 && (int)psVar15 != 0)) {
code_r0x01344fac:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      unaff_x24 = (segment_command *)((long)register0x00000008 + -0xa98);
      unaff_x25 = (segment_command *)&section_000000b8.reserved2;
      iVar3 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + -0xa98),0x100,pcVar32);
      pcVar32 = ", ";
      iVar4 = func_0x0135ce6c((long)unaff_x24->segname + (long)iVar3 + -8,0x100 - iVar3,", ");
      unaff_x26 = (long)iVar3 + (long)iVar4;
      iVar3 = func_0x0135cc94((long)unaff_x24->segname + unaff_x26 + -8,0x100 - (int)unaff_x26,
                              psVar15);
      uVar2 = (int)unaff_x26 + iVar3;
      psVar15 = (segment_command *)(ulong)uVar2;
      iVar3 = func_0x0135ce6c((long)unaff_x24->segname + (long)(int)uVar2 + -8,0x100 - uVar2,", ");
      func_0x0135d05c((long)unaff_x24->segname + (long)(int)(uVar2 + iVar3) + -8,
                      0x100 - (uVar2 + iVar3),param_4);
      pcVar31 = "Bus::getPath";
      param_5 = (segment_command *)((long)register0x00000008 + -0xa98);
      psVar16 = psVar8;
      func_0x013aa954(psVar6,0xf);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0xa98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa88) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0xa90));
    if (((int)psVar6 == 0) &&
       ((psVar6 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0xa98),
                                  *(undefined8 *)((long)register0x00000008 + -0xa90)),
        (int)psVar6 == 0 &&
        (psVar6 = (segment_command *)
                  func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0xab0)),
        (int)psVar6 == 0)))) {
      *(long *)((long)register0x00000008 + -0xa88) = *(long *)((long)register0x00000008 + -0xab0);
      lVar14 = *(long *)(*(long *)((long)register0x00000008 + -0xab0) + 0x10);
      uVar26 = *(undefined8 *)(lVar14 + 0x10);
      *(undefined8 *)((long)register0x00000008 + -0xaa8) = *(undefined8 *)(lVar14 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0xab0) = uVar26;
      psVar16 = (segment_command *)pcVar32;
      pcVar31 = (char *)psVar15;
      param_5 = (segment_command *)param_4;
      psVar6 = (segment_command *)
               func_0x013145c8(*(undefined8 *)((long)register0x00000008 + -0xa90),
                               (undefined1 *)((long)register0x00000008 + -0xab0));
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0xa98));
    if ((int)psVar6 != 0) goto code_r0x01344fac;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x998)) {
    return psVar6;
  }
  auVar42 = ___stack_chk_fail();
  psVar7 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0xaf0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0xae8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0xae0) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0xad8) = psVar15;
  *(char **)((long)register0x00000008 + -0xad0) = param_4;
  *(segment_command **)((long)register0x00000008 + -0xac8) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0xac0) =
       (undefined1 *)((long)register0x00000008 + -0x940);
  *(undefined **)((long)register0x00000008 + -0xab8) = &DAT_01345090;
  *(undefined8 *)((long)register0x00000008 + -0xaf8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0xc00) = 0;
  psVar15 = (segment_command *)
            func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0xc08));
  if ((int)psVar15 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0xc08) + 0x24) >> 1 & 1) == 0) {
      psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar15 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0xc00));
      if ((int)psVar15 == 0) {
        psVar6 = (segment_command *)&MACH_HEADER.flags;
        psVar16 = (segment_command *)&MACH_HEADER.flags;
        psVar15 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0xc08) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0xbf8));
        if ((int)psVar15 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0xbf8);
          *puVar21 = &UNK_03c7e6c8;
          *(undefined4 *)(puVar21 + 1) = 0x18;
          *(int *)((long)puVar21 + 0xc) = auVar42._0_4_;
          *(char *)(puVar21 + 2) = auVar42[8];
          psVar15 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0xc08) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0xc00));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cddc((undefined1 *)((long)register0x00000008 + -0xbf8),0x100,auVar42._8_8_);
    pcVar31 = "Bus::setPaused";
    param_5 = (segment_command *)((long)register0x00000008 + -0xbf8);
    psVar16 = psVar7;
    func_0x013aa954(psVar15,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0xaf8)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  puVar25 = auVar43._8_8_;
  psVar8 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0xc40) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0xc38) = psVar15;
  *(long *)((long)register0x00000008 + -0xc30) = auVar42._8_8_;
  *(segment_command **)((long)register0x00000008 + -0xc28) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0xc20) =
       (undefined1 *)((long)register0x00000008 + -0xac0);
  *(undefined **)((long)register0x00000008 + -0xc18) = &DAT_013451c4;
  *(undefined8 *)((long)register0x00000008 + -0xc48) = *(undefined8 *)PTR_03a5d648;
  if (puVar25 == (undefined1 *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x0134527c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d1a4((undefined1 *)((long)register0x00000008 + -0xd48),0x100,puVar25);
      pcVar31 = "Bus::getPaused";
      param_5 = (segment_command *)((long)register0x00000008 + -0xd48);
      psVar16 = psVar8;
      func_0x013aa954(psVar15,0xf);
    }
  }
  else {
    *puVar25 = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd38) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0xd40));
    if ((((int)psVar15 == 0) &&
        (psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0xd48),
                                   *(undefined8 *)((long)register0x00000008 + -0xd40)),
        (int)psVar15 == 0)) &&
       (psVar15 = (segment_command *)
                  func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0xd50)),
       (int)psVar15 == 0)) {
      lVar14 = *(long *)((long)register0x00000008 + -0xd50);
      *(long *)((long)register0x00000008 + -0xd38) = lVar14;
      if (*(char *)(lVar14 + 0x28) == '\0') {
        uVar22 = *(undefined1 *)(lVar14 + 0x2a);
      }
      else {
        uVar22 = 1;
      }
      psVar15 = (segment_command *)0x0;
      *puVar25 = uVar22;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0xd48));
    if ((int)psVar15 != 0) goto code_r0x0134527c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0xc48)) {
    return psVar15;
  }
  auVar42 = ___stack_chk_fail();
  psVar7 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0xd90) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0xd88) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0xd80) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0xd78) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0xd70) = puVar25;
  *(segment_command **)((long)register0x00000008 + -0xd68) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0xd60) =
       (undefined1 *)((long)register0x00000008 + -0xc20);
  *(undefined **)((long)register0x00000008 + -0xd58) = &DAT_013452f0;
  *(undefined8 *)((long)register0x00000008 + -0xd98) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0xea0) = 0;
  psVar15 = (segment_command *)
            func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0xea8));
  if ((int)psVar15 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0xea8) + 0x24) >> 1 & 1) == 0) {
      psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar15 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0xea0));
      if ((int)psVar15 == 0) {
        psVar6 = (segment_command *)&MACH_HEADER.flags;
        psVar16 = (segment_command *)&MACH_HEADER.flags;
        psVar15 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0xea8) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0xe98));
        if ((int)psVar15 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0xe98);
          *puVar21 = &UNK_03c7e740;
          *(undefined4 *)(puVar21 + 1) = 0x18;
          *(int *)((long)puVar21 + 0xc) = auVar42._0_4_;
          *(char *)(puVar21 + 2) = auVar42[8];
          psVar15 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0xea8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0xea0));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cddc((undefined1 *)((long)register0x00000008 + -0xe98),0x100,auVar42._8_8_);
    pcVar31 = "Bus::setMute";
    param_5 = (segment_command *)((long)register0x00000008 + -0xe98);
    psVar16 = psVar7;
    func_0x013aa954(psVar15,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0xd98)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  puVar25 = auVar43._8_8_;
  psVar8 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0xee0) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0xed8) = psVar15;
  *(long *)((long)register0x00000008 + -0xed0) = auVar42._8_8_;
  *(segment_command **)((long)register0x00000008 + -0xec8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0xec0) =
       (undefined1 *)((long)register0x00000008 + -0xd60);
  *(undefined **)((long)register0x00000008 + -0xeb8) = &DAT_01345424;
  *(undefined8 *)((long)register0x00000008 + -0xee8) = *(undefined8 *)PTR_03a5d648;
  if (puVar25 == (undefined1 *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x013454dc:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d1a4((undefined1 *)((long)register0x00000008 + -0xfe8),0x100,puVar25);
      pcVar31 = "Bus::getMute";
      param_5 = (segment_command *)((long)register0x00000008 + -0xfe8);
      psVar16 = psVar8;
      func_0x013aa954(psVar15,0xf);
    }
  }
  else {
    *puVar25 = 0;
    *(undefined8 *)((long)register0x00000008 + -0xfe8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xfe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xfd8) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0xfe0));
    if ((((int)psVar15 == 0) &&
        (psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0xfe8),
                                   *(undefined8 *)((long)register0x00000008 + -0xfe0)),
        (int)psVar15 == 0)) &&
       (psVar15 = (segment_command *)
                  func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0xff0)),
       (int)psVar15 == 0)) {
      lVar14 = *(long *)((long)register0x00000008 + -0xff0);
      *(long *)((long)register0x00000008 + -0xfd8) = lVar14;
      if (*(char *)(lVar14 + 0x29) == '\0') {
        uVar22 = *(undefined1 *)(lVar14 + 0x2b);
      }
      else {
        uVar22 = 1;
      }
      psVar15 = (segment_command *)0x0;
      *puVar25 = uVar22;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0xfe8));
    if ((int)psVar15 != 0) goto code_r0x013454dc;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0xee8)) {
    return psVar15;
  }
  psVar7 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x1030) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x1028) = unaff_d8;
  *(segment_command **)((long)register0x00000008 + -0x1020) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x1018) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0x1010) = puVar25;
  *(segment_command **)((long)register0x00000008 + -0x1008) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x1000) =
       (undefined1 *)((long)register0x00000008 + -0xec0);
  *(undefined **)((long)register0x00000008 + -0xff8) = &DAT_01345550;
  *(undefined8 *)((long)register0x00000008 + -0x1038) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x1140) = 0;
  psVar8 = (segment_command *)
           func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x1148));
  if ((int)psVar8 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x1148) + 0x24) >> 1 & 1) == 0) {
      psVar8 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar8 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1140));
      if ((int)psVar8 == 0) {
        psVar15 = (segment_command *)&MACH_HEADER.flags;
        psVar16 = (segment_command *)&MACH_HEADER.flags;
        psVar8 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x1148) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x1138));
        if ((int)psVar8 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x1138);
          *puVar21 = &UNK_03c7e650;
          *(undefined4 *)(puVar21 + 1) = 0x18;
          *(int *)((long)puVar21 + 0xc) = (int)psVar7;
          *(int *)(puVar21 + 2) = (int)extraout_d0;
          psVar8 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x1148) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1140));
  if (((int)psVar8 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cd7c(extraout_d0,(undefined1 *)((long)register0x00000008 + -0x1138),0x100);
    pcVar31 = "Bus::setVolume";
    param_5 = (segment_command *)((long)register0x00000008 + -0x1138);
    psVar16 = psVar7;
    func_0x013aa954(psVar8,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1038)) {
    return psVar8;
  }
  auVar42 = ___stack_chk_fail();
  puVar27 = auVar42._8_8_;
  psVar9 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x11a0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x1198) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x1190) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x1188) = pcVar32;
  *(segment_command **)((long)register0x00000008 + -0x1180) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x1178) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x1170) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x1168) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x1160) =
       (undefined1 *)((long)register0x00000008 + -0x1000);
  *(undefined **)((long)register0x00000008 + -0x1158) = &DAT_01345684;
  *(undefined8 *)((long)register0x00000008 + -0x11a8) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 != (undefined4 *)0x0) {
    *puVar27 = 0;
  }
  if (psVar16 != (segment_command *)0x0) {
    psVar16->cmd = 0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x12a8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x12a0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1298) = 0;
  psVar15 = psVar16;
  psVar6 = (segment_command *)
           func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x12a0));
  if ((((int)psVar6 == 0) &&
      (psVar6 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x12a8),
                                *(undefined8 *)((long)register0x00000008 + -0x12a0)),
      (int)psVar6 == 0)) &&
     (psVar6 = (segment_command *)
               func_0x01279164(psVar9,(undefined1 *)((long)register0x00000008 + -0x12b0)),
     (int)psVar6 == 0)) {
    *(undefined8 *)((long)register0x00000008 + -0x1298) =
         *(undefined8 *)((long)register0x00000008 + -0x12b0);
    psVar15 = psVar16;
    psVar6 = (segment_command *)
             func_0x0129ccf0(*(undefined8 *)((long)register0x00000008 + -0x12b0),puVar27);
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x12a8));
  if (((int)psVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    pcVar32 = (char *)((long)register0x00000008 + -0x12a8);
    unaff_x24 = (segment_command *)&section_000000b8.reserved2;
    iVar3 = func_0x0135d15c((undefined1 *)((long)register0x00000008 + -0x12a8),0x100,puVar27);
    puVar27 = (undefined4 *)(long)iVar3;
    iVar3 = func_0x0135ce6c((long)puVar27 + (long)((long)((segment_command *)pcVar32)->segname + -8)
                            ,0x100 - iVar3,", ");
    func_0x0135d15c((long)((segment_command *)pcVar32)->segname + (long)puVar27 + (long)iVar3 + -8,
                    0x100 - (int)((long)puVar27 + (long)iVar3),psVar16);
    pcVar31 = "Bus::getVolume";
    param_5 = (segment_command *)((long)register0x00000008 + -0x12a8);
    psVar15 = psVar9;
    func_0x013aa954(psVar6,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x11a8)) {
    return psVar6;
  }
  auVar42 = ___stack_chk_fail();
  psVar8 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x12f0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x12e8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x12e0) = psVar6;
  *(undefined4 **)((long)register0x00000008 + -0x12d8) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x12d0) = psVar16;
  *(segment_command **)((long)register0x00000008 + -0x12c8) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x12c0) =
       (undefined1 *)((long)register0x00000008 + -0x1160);
  *(undefined **)((long)register0x00000008 + -0x12b8) = &DAT_013457e8;
  *(undefined8 *)((long)register0x00000008 + -0x12f8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x1400) = 0;
  psVar16 = (segment_command *)
            func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x1408));
  if ((int)psVar16 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x1408) + 0x24) >> 1 & 1) == 0) {
      psVar16 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar16 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1400));
      if ((int)psVar16 == 0) {
        psVar6 = (segment_command *)&MACH_HEADER.flags;
        psVar15 = (segment_command *)&MACH_HEADER.flags;
        psVar16 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x1408) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x13f8));
        if ((int)psVar16 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x13f8);
          *puVar21 = &UNK_03c7e7b8;
          *(undefined4 *)(puVar21 + 1) = 0x18;
          *(int *)((long)puVar21 + 0xc) = auVar42._0_4_;
          *(int *)(puVar21 + 2) = auVar42._8_4_;
          psVar16 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x1408) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1400));
  if (((int)psVar16 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x13f8),0x100,auVar42._8_8_);
    pcVar31 = "Bus::stopAllEvents";
    param_5 = (segment_command *)((long)register0x00000008 + -0x13f8);
    psVar15 = psVar8;
    func_0x013aa954(psVar16,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x12f8)) {
    return psVar16;
  }
  psVar7 = (segment_command *)___stack_chk_fail();
  *(segment_command **)((long)register0x00000008 + -0x1440) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x1438) = psVar16;
  *(long *)((long)register0x00000008 + -0x1430) = auVar42._8_8_;
  *(segment_command **)((long)register0x00000008 + -0x1428) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x1420) =
       (undefined1 *)((long)register0x00000008 + -0x12c0);
  *(undefined **)((long)register0x00000008 + -0x1418) = &DAT_0134591c;
  *(undefined8 *)((long)register0x00000008 + -0x1448) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x1550) = 0;
  psVar8 = (segment_command *)
           func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x1558));
  if ((int)psVar8 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x1558) + 0x24) >> 1 & 1) == 0) {
      psVar8 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar8 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1550));
      if ((int)psVar8 == 0) {
        psVar16 = (segment_command *)&MACH_HEADER.ncmds;
        psVar15 = (segment_command *)&MACH_HEADER.ncmds;
        psVar8 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x1558) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x1548));
        if ((int)psVar8 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x1548);
          *puVar21 = &UNK_03c7e4e8;
          *(undefined4 *)(puVar21 + 1) = 0x10;
          *(int *)((long)puVar21 + 0xc) = (int)psVar7;
          psVar8 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x1558) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1550));
  if (((int)psVar8 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -0x1548) = 0;
    pcVar31 = "Bus::lockChannelGroup";
    param_5 = (segment_command *)((long)register0x00000008 + -0x1548);
    psVar15 = psVar7;
    func_0x013aa954(psVar8,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1448)) {
    return psVar8;
  }
  psVar9 = (segment_command *)___stack_chk_fail();
  *(segment_command **)((long)register0x00000008 + -0x1590) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x1588) = psVar16;
  *(segment_command **)((long)register0x00000008 + -0x1580) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x1578) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x1570) =
       (undefined1 *)((long)register0x00000008 + -0x1420);
  *(undefined **)((long)register0x00000008 + -0x1568) = &DAT_01345a34;
  *(undefined8 *)((long)register0x00000008 + -0x1598) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x16a0) = 0;
  psVar8 = (segment_command *)
           func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x16a8));
  if ((int)psVar8 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x16a8) + 0x24) >> 1 & 1) == 0) {
      psVar8 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar8 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x16a0));
      if ((int)psVar8 == 0) {
        psVar16 = (segment_command *)&MACH_HEADER.ncmds;
        psVar15 = (segment_command *)&MACH_HEADER.ncmds;
        psVar8 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x16a8) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x1698));
        if ((int)psVar8 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x1698);
          *puVar21 = &UNK_03c7e560;
          *(undefined4 *)(puVar21 + 1) = 0x10;
          *(int *)((long)puVar21 + 0xc) = (int)psVar9;
          psVar8 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x16a8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x16a0));
  if (((int)psVar8 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -0x1698) = 0;
    pcVar31 = "Bus::unlockChannelGroup";
    param_5 = (segment_command *)((long)register0x00000008 + -0x1698);
    psVar15 = psVar9;
    func_0x013aa954(psVar8,0xf);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1598)) {
    return psVar8;
  }
  auVar42 = ___stack_chk_fail();
  puVar21 = auVar42._8_8_;
  psVar7 = auVar42._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x16f0) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x16e8) = pcVar32;
  *(segment_command **)((long)register0x00000008 + -0x16e0) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x16d8) = psVar16;
  *(segment_command **)((long)register0x00000008 + -0x16d0) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x16c8) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x16c0) =
       (undefined1 *)((long)register0x00000008 + -0x1570);
  *(undefined **)((long)register0x00000008 + -0x16b8) = &DAT_01345b4c;
  *(undefined8 *)((long)register0x00000008 + -0x16f8) = *(undefined8 *)PTR_03a5d648;
  if (puVar21 == (undefined8 *)0x0) {
    psVar16 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01345c30:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x17f8),0x100,puVar21);
      pcVar31 = "Bus::getChannelGroup";
      param_5 = (segment_command *)((long)register0x00000008 + -0x17f8);
      psVar15 = psVar7;
      func_0x013aa954(psVar16,0xf);
    }
  }
  else {
    *puVar21 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1800) = 0;
    psVar16 = (segment_command *)
              func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x1808));
    if ((int)psVar16 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x1808) + 0x24) >> 1 & 1) == 0) {
        psVar16 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar16 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1800));
        if ((int)psVar16 == 0) {
          pcVar32 = (char *)&MACH_HEADER.flags;
          psVar15 = (segment_command *)&MACH_HEADER.flags;
          psVar16 = (segment_command *)
                    func_0x012933e8(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x1808) + 0x98),
                                    (undefined1 *)((long)register0x00000008 + -0x17f8));
          if ((int)psVar16 == 0) {
            psVar6 = *(segment_command **)((long)register0x00000008 + -0x17f8);
            *(undefined **)psVar6 = &UNK_03c7e5d8;
            psVar6->segname[0] = '\x18';
            psVar6->segname[1] = '\0';
            psVar6->segname[2] = '\0';
            psVar6->segname[3] = '\0';
            *(int *)(psVar6->segname + 4) = auVar42._0_4_;
            psVar16 = (segment_command *)
                      func_0x01292948(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x1808) + 0x98),psVar6
                                     );
            if ((int)psVar16 == 0) {
              *puVar21 = *(undefined8 *)(psVar6->segname + 8);
            }
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1800));
    if ((int)psVar16 != 0) goto code_r0x01345c30;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x16f8)) {
    return psVar16;
  }
  auVar42 = ___stack_chk_fail();
  puVar30 = auVar42._8_8_;
  psVar8 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x1860) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x1858) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x1850) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x1848) = pcVar32;
  *(segment_command **)((long)register0x00000008 + -0x1840) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x1838) = psVar16;
  *(undefined8 **)((long)register0x00000008 + -0x1830) = puVar21;
  *(segment_command **)((long)register0x00000008 + -0x1828) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x1820) =
       (undefined1 *)((long)register0x00000008 + -0x16c0);
  *(undefined **)((long)register0x00000008 + -0x1818) = &DAT_01345ca8;
  *(undefined8 *)((long)register0x00000008 + -0x1868) = *(undefined8 *)PTR_03a5d648;
  psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
  psVar16 = psVar15;
  if ((puVar30 == (undefined8 *)0x0) || (psVar15 == (segment_command *)0x0)) {
code_r0x01345d5c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      pcVar32 = (char *)((long)register0x00000008 + -0x1968);
      unaff_x24 = (segment_command *)&section_000000b8.reserved2;
      iVar3 = func_0x0135d09c((undefined1 *)((long)register0x00000008 + -0x1968),0x100,puVar30);
      puVar30 = (undefined8 *)(long)iVar3;
      iVar3 = func_0x0135ce6c((long)puVar30 +
                              (long)((long)((segment_command *)pcVar32)->segname + -8),0x100 - iVar3
                              ,", ");
      func_0x0135d09c((long)((segment_command *)pcVar32)->segname + (long)puVar30 + (long)iVar3 + -8
                      ,0x100 - (int)((long)puVar30 + (long)iVar3),psVar15);
      pcVar31 = "Bus::getCPUUsage";
      param_5 = (segment_command *)((long)register0x00000008 + -0x1968);
      psVar16 = psVar8;
      func_0x013aa954(psVar6,0xf);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x1968) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1960) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1958) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x1960));
    if (((int)psVar6 == 0) &&
       ((psVar6 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1968),
                                  *(undefined8 *)((long)register0x00000008 + -0x1960)),
        (int)psVar6 == 0 &&
        (psVar6 = (segment_command *)
                  func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0x1970)),
        (int)psVar6 == 0)))) {
      *(long *)((long)register0x00000008 + -0x1958) = *(long *)((long)register0x00000008 + -0x1970);
      lVar14 = *(long *)(*(long *)((long)register0x00000008 + -0x1970) + 8);
      if (lVar14 == 0) {
        psVar6 = (segment_command *)0x0;
      }
      else {
        psVar16 = psVar15;
        psVar6 = (segment_command *)func_0x0123accc(lVar14,puVar30);
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1968));
    if ((int)psVar6 != 0) goto code_r0x01345d5c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1868)) {
    return psVar6;
  }
  auVar42 = ___stack_chk_fail();
  puVar21 = auVar42._8_8_;
  psVar7 = auVar42._0_8_;
  *(undefined8 **)((long)register0x00000008 + -0x19a0) = puVar30;
  *(segment_command **)((long)register0x00000008 + -0x1998) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x1990) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x1988) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x1980) =
       (undefined1 *)((long)register0x00000008 + -0x1820);
  *(undefined **)((long)register0x00000008 + -0x1978) = &DAT_01345e18;
  *(undefined8 *)((long)register0x00000008 + -0x19a8) = *(undefined8 *)PTR_03a5d648;
  if (puVar21 == (undefined8 *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01345ebc:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x1aa8),0x100,puVar21);
      pcVar31 = "Bus::getMemoryUsage";
      param_5 = (segment_command *)((long)register0x00000008 + -0x1aa8);
      psVar16 = psVar7;
      func_0x013aa954(psVar15,0xf);
    }
  }
  else {
    *(undefined4 *)(puVar21 + 1) = 0;
    *puVar21 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1aa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1aa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1a98) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x1aa0));
    if ((((int)psVar15 == 0) &&
        (psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1aa8),
                                   *(undefined8 *)((long)register0x00000008 + -0x1aa0)),
        (int)psVar15 == 0)) &&
       (psVar15 = (segment_command *)
                  func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x1ab0)),
       (int)psVar15 == 0)) {
      *(undefined8 *)((long)register0x00000008 + -0x1a98) =
           *(undefined8 *)((long)register0x00000008 + -0x1ab0);
      psVar15 = (segment_command *)
                func_0x0129cd38(*(undefined8 *)((long)register0x00000008 + -0x1ab0),puVar21);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1aa8));
    if ((int)psVar15 != 0) goto code_r0x01345ebc;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x19a8)) {
    return psVar15;
  }
  auVar42 = ___stack_chk_fail();
  puVar17 = auVar42._8_8_;
  psVar6 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x1af0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x1ae8) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x1ae0) = puVar30;
  *(segment_command **)((long)register0x00000008 + -0x1ad8) = psVar15;
  *(undefined8 **)((long)register0x00000008 + -0x1ad0) = puVar21;
  *(segment_command **)((long)register0x00000008 + -0x1ac8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x1ac0) =
       (undefined1 *)((long)register0x00000008 + -0x1980);
  *(undefined **)((long)register0x00000008 + -0x1ab8) = &DAT_01345f30;
  *(undefined8 *)((long)register0x00000008 + -0x1af8) = *(undefined8 *)PTR_03a5d648;
  if (puVar17 == (undefined8 *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01345ff0:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d254((undefined1 *)((long)register0x00000008 + -0x1bf8),0x100,puVar17);
      pcVar31 = "VCA::getID";
      param_5 = (segment_command *)((long)register0x00000008 + -0x1bf8);
      psVar16 = psVar6;
      func_0x013aa954(psVar15,0x10);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x1bf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1bf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1be8) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar6,(undefined1 *)((long)register0x00000008 + -0x1bf0));
    puVar30 = puVar17;
    if ((((int)psVar15 == 0) &&
        (psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1bf8),
                                   *(undefined8 *)((long)register0x00000008 + -0x1bf0)),
        (int)psVar15 == 0)) &&
       (psVar15 = (segment_command *)
                  func_0x01279164(psVar6,(undefined1 *)((long)register0x00000008 + -0x1c00)),
       (int)psVar15 == 0)) {
      *(long *)((long)register0x00000008 + -0x1be8) = *(long *)((long)register0x00000008 + -0x1c00);
      lVar14 = *(long *)(*(long *)((long)register0x00000008 + -0x1c00) + 0x10);
      uVar26 = *(undefined8 *)(lVar14 + 0x10);
      puVar17[1] = *(undefined8 *)(lVar14 + 0x18);
      *puVar17 = uVar26;
      puVar30 = (undefined8 *)0x0;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1bf8));
    if (puVar30 != (undefined8 *)0x0) {
      *puVar30 = 0;
      puVar30[1] = 0;
    }
    if ((int)psVar15 != 0) goto code_r0x01345ff0;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1af8)) {
    return psVar15;
  }
  auVar42 = ___stack_chk_fail();
  pcVar33 = auVar42._8_8_;
  psVar8 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x1c60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x1c58) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x1c50) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x1c48) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x1c40) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x1c38) = pcVar32;
  *(undefined8 **)((long)register0x00000008 + -0x1c30) = puVar30;
  *(segment_command **)((long)register0x00000008 + -0x1c28) = psVar15;
  *(undefined8 **)((long)register0x00000008 + -0x1c20) = puVar17;
  *(segment_command **)((long)register0x00000008 + -0x1c18) = psVar6;
  *(undefined1 **)((long)register0x00000008 + -0x1c10) =
       (undefined1 *)((long)register0x00000008 + -0x1ac0);
  *(undefined **)((long)register0x00000008 + -0x1c08) = &DAT_01346068;
  *(undefined8 *)((long)register0x00000008 + -0x1c68) = *(undefined8 *)PTR_03a5d648;
  if ((segment_command *)pcVar33 != (segment_command *)0x0) {
    *(char *)&((segment_command *)pcVar33)->cmd = '\0';
  }
  if ((segment_command *)pcVar31 != (segment_command *)0x0) {
    ((segment_command *)pcVar31)->cmd = 0;
  }
  psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
  psVar15 = psVar16;
  pcVar32 = pcVar31;
  if (((int)psVar16 < 0) ||
     ((segment_command *)pcVar33 == (segment_command *)0x0 && (int)psVar16 != 0)) {
code_r0x01346158:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      unaff_x24 = (segment_command *)((long)register0x00000008 + -0x1d68);
      unaff_x25 = (segment_command *)&section_000000b8.reserved2;
      iVar3 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + -0x1d68),0x100,pcVar33);
      pcVar33 = ", ";
      iVar4 = func_0x0135ce6c((long)unaff_x24->segname + (long)iVar3 + -8,0x100 - iVar3,", ");
      unaff_x26 = (long)iVar3 + (long)iVar4;
      iVar3 = func_0x0135cc94((long)unaff_x24->segname + unaff_x26 + -8,0x100 - (int)unaff_x26,
                              psVar16);
      uVar2 = (int)unaff_x26 + iVar3;
      psVar16 = (segment_command *)(ulong)uVar2;
      iVar3 = func_0x0135ce6c((long)unaff_x24->segname + (long)(int)uVar2 + -8,0x100 - uVar2,", ");
      func_0x0135d05c((long)unaff_x24->segname + (long)(int)(uVar2 + iVar3) + -8,
                      0x100 - (uVar2 + iVar3),pcVar31);
      pcVar32 = "VCA::getPath";
      param_5 = (segment_command *)((long)register0x00000008 + -0x1d68);
      psVar15 = psVar8;
      func_0x013aa954(psVar6,0x10);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x1d68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1d60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1d58) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x1d60));
    if (((int)psVar6 == 0) &&
       ((psVar6 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1d68),
                                  *(undefined8 *)((long)register0x00000008 + -0x1d60)),
        (int)psVar6 == 0 &&
        (psVar6 = (segment_command *)
                  func_0x01279164(psVar8,(undefined1 *)((long)register0x00000008 + -0x1d80)),
        (int)psVar6 == 0)))) {
      *(long *)((long)register0x00000008 + -0x1d58) = *(long *)((long)register0x00000008 + -0x1d80);
      lVar14 = *(long *)(*(long *)((long)register0x00000008 + -0x1d80) + 0x10);
      uVar26 = *(undefined8 *)(lVar14 + 0x10);
      *(undefined8 *)((long)register0x00000008 + -0x1d78) = *(undefined8 *)(lVar14 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x1d80) = uVar26;
      psVar15 = (segment_command *)pcVar33;
      pcVar32 = (char *)psVar16;
      param_5 = (segment_command *)pcVar31;
      psVar6 = (segment_command *)
               func_0x013145c8(*(undefined8 *)((long)register0x00000008 + -0x1d60),
                               (undefined1 *)((long)register0x00000008 + -0x1d80));
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1d68));
    if ((int)psVar6 != 0) goto code_r0x01346158;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1c68)) {
    return psVar6;
  }
  psVar7 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x1dc0) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x1db8) = extraout_d0;
  *(segment_command **)((long)register0x00000008 + -0x1db0) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x1da8) = psVar16;
  *(char **)((long)register0x00000008 + -0x1da0) = pcVar31;
  *(segment_command **)((long)register0x00000008 + -0x1d98) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x1d90) =
       (undefined1 *)((long)register0x00000008 + -0x1c10);
  *(undefined **)((long)register0x00000008 + -0x1d88) = &DAT_0134623c;
  *(undefined8 *)((long)register0x00000008 + -0x1dc8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x1ed0) = 0;
  psVar8 = (segment_command *)
           func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x1ed8));
  if ((int)psVar8 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x1ed8) + 0x24) >> 1 & 1) == 0) {
      psVar8 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar8 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x1ed0));
      if ((int)psVar8 == 0) {
        psVar16 = (segment_command *)&MACH_HEADER.flags;
        psVar15 = (segment_command *)&MACH_HEADER.flags;
        psVar8 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x1ed8) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x1ec8));
        if ((int)psVar8 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x1ec8);
          *puVar21 = &UNK_03c7e830;
          *(undefined4 *)(puVar21 + 1) = 0x18;
          *(int *)((long)puVar21 + 0xc) = (int)psVar7;
          *(int *)(puVar21 + 2) = (int)extraout_d0_00;
          psVar8 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x1ed8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x1ed0));
  if (((int)psVar8 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cd7c(extraout_d0_00,(undefined1 *)((long)register0x00000008 + -0x1ec8),0x100);
    pcVar32 = "VCA::setVolume";
    param_5 = (segment_command *)((long)register0x00000008 + -0x1ec8);
    psVar15 = psVar7;
    func_0x013aa954(psVar8,0x10);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1dc8)) {
    return psVar8;
  }
  auVar42 = ___stack_chk_fail();
  puVar27 = auVar42._8_8_;
  psVar9 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x1f30) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x1f28) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x1f20) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x1f18) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x1f10) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x1f08) = psVar16;
  *(segment_command **)((long)register0x00000008 + -0x1f00) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x1ef8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x1ef0) =
       (undefined1 *)((long)register0x00000008 + -0x1d90);
  *(undefined **)((long)register0x00000008 + -0x1ee8) = &DAT_01346370;
  *(undefined8 *)((long)register0x00000008 + -0x1f38) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 != (undefined4 *)0x0) {
    *puVar27 = 0;
  }
  if (psVar15 != (segment_command *)0x0) {
    psVar15->cmd = 0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x2038) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x2030) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x2028) = 0;
  psVar16 = psVar15;
  psVar6 = (segment_command *)
           func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x2030));
  if ((((int)psVar6 == 0) &&
      (psVar6 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2038),
                                *(undefined8 *)((long)register0x00000008 + -0x2030)),
      (int)psVar6 == 0)) &&
     (psVar6 = (segment_command *)
               func_0x01279164(psVar9,(undefined1 *)((long)register0x00000008 + -0x2040)),
     (int)psVar6 == 0)) {
    *(undefined8 *)((long)register0x00000008 + -0x2028) =
         *(undefined8 *)((long)register0x00000008 + -0x2040);
    psVar16 = psVar15;
    psVar6 = (segment_command *)
             func_0x0129ca90(*(undefined8 *)((long)register0x00000008 + -0x2040),puVar27);
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2038));
  if (((int)psVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    pcVar33 = (char *)((long)register0x00000008 + -0x2038);
    unaff_x24 = (segment_command *)&section_000000b8.reserved2;
    iVar3 = func_0x0135d15c((undefined1 *)((long)register0x00000008 + -0x2038),0x100,puVar27);
    puVar27 = (undefined4 *)(long)iVar3;
    iVar3 = func_0x0135ce6c((long)puVar27 + (long)((long)((segment_command *)pcVar33)->segname + -8)
                            ,0x100 - iVar3,", ");
    func_0x0135d15c((long)((segment_command *)pcVar33)->segname + (long)puVar27 + (long)iVar3 + -8,
                    0x100 - (int)((long)puVar27 + (long)iVar3),psVar15);
    pcVar32 = "VCA::getVolume";
    param_5 = (segment_command *)((long)register0x00000008 + -0x2038);
    psVar16 = psVar9;
    func_0x013aa954(psVar6,0x10);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x1f38)) {
    return psVar6;
  }
  auVar42 = ___stack_chk_fail();
  puVar18 = auVar42._8_8_;
  psVar8 = auVar42._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x2080) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x2078) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x2070) = psVar6;
  *(undefined4 **)((long)register0x00000008 + -0x2068) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x2060) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x2058) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x2050) =
       (undefined1 *)((long)register0x00000008 + -0x1ef0);
  *(undefined **)((long)register0x00000008 + -0x2048) = &DAT_013464d4;
  *(undefined8 *)((long)register0x00000008 + -0x2088) = *(undefined8 *)PTR_03a5d648;
  if (puVar18 == (ulong *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x013465b8:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x2188),0x100,puVar18);
      pcVar32 = "EventInstance::getDescription";
      param_5 = (segment_command *)((long)register0x00000008 + -0x2188);
      psVar16 = psVar8;
      func_0x013aa954(psVar15,0xd);
    }
  }
  else {
    *puVar18 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2190) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x2198));
    if ((int)psVar15 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x2198) + 0x24) >> 1 & 1) == 0) {
        psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar15 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2190));
        if ((int)psVar15 == 0) {
          pcVar33 = (char *)&MACH_HEADER.flags;
          psVar16 = (segment_command *)&MACH_HEADER.flags;
          psVar15 = (segment_command *)
                    func_0x012933e8(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x2198) + 0x98),
                                    (undefined1 *)((long)register0x00000008 + -0x2188));
          if ((int)psVar15 == 0) {
            psVar6 = *(segment_command **)((long)register0x00000008 + -0x2188);
            *(undefined **)psVar6 = &UNK_03c7da98;
            psVar6->segname[0] = '\x18';
            psVar6->segname[1] = '\0';
            psVar6->segname[2] = '\0';
            psVar6->segname[3] = '\0';
            *(int *)(psVar6->segname + 4) = auVar42._0_4_;
            psVar15 = (segment_command *)
                      func_0x01292948(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x2198) + 0x98),psVar6
                                     );
            if ((int)psVar15 == 0) {
              *puVar18 = (ulong)*(uint *)(psVar6->segname + 8);
            }
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2190));
    if ((int)psVar15 != 0) goto code_r0x013465b8;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2088)) {
    return psVar15;
  }
  auVar42 = ___stack_chk_fail();
  pdVar28 = auVar42._8_8_;
  psVar7 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x21f0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x21e8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x21e0) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x21d8) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x21d0) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x21c8) = psVar15;
  *(ulong **)((long)register0x00000008 + -0x21c0) = puVar18;
  *(segment_command **)((long)register0x00000008 + -0x21b8) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x21b0) =
       (undefined1 *)((long)register0x00000008 + -0x2050);
  *(undefined **)((long)register0x00000008 + -0x21a8) = &DAT_01346630;
  *(undefined8 *)((long)register0x00000008 + -0x21f8) = *(undefined8 *)PTR_03a5d648;
  if (pdVar28 != (dword *)0x0) {
    *pdVar28 = 0;
  }
  if (psVar16 != (segment_command *)0x0) {
    psVar16->cmd = 0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x22f8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x22f0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x22e8) = 0;
  psVar15 = psVar16;
  psVar6 = (segment_command *)
           func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x22f0));
  if ((((int)psVar6 == 0) &&
      (psVar6 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x22f8),
                                *(undefined8 *)((long)register0x00000008 + -0x22f0)),
      (int)psVar6 == 0)) &&
     (psVar6 = (segment_command *)
               func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x2300)),
     (int)psVar6 == 0)) {
    lVar14 = 0;
    if (*(long *)((long)register0x00000008 + -0x2300) != 0) {
      lVar14 = *(long *)((long)register0x00000008 + -0x2300) + -8;
    }
    *(long *)((long)register0x00000008 + -0x22e8) = lVar14;
    psVar15 = psVar16;
    psVar6 = (segment_command *)func_0x01295240(lVar14,pdVar28);
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x22f8));
  if (((int)psVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    pcVar33 = (char *)((long)register0x00000008 + -0x22f8);
    unaff_x24 = (segment_command *)&section_000000b8.reserved2;
    iVar3 = func_0x0135d15c((undefined1 *)((long)register0x00000008 + -0x22f8),0x100,pdVar28);
    pdVar28 = (dword *)(long)iVar3;
    iVar3 = func_0x0135ce6c((long)pdVar28 + (long)((long)((segment_command *)pcVar33)->segname + -8)
                            ,0x100 - iVar3,", ");
    func_0x0135d15c((long)((segment_command *)pcVar33)->segname + (long)pdVar28 + (long)iVar3 + -8,
                    0x100 - (int)((long)pdVar28 + (long)iVar3),psVar16);
    pcVar32 = "EventInstance::getVolume";
    param_5 = (segment_command *)((long)register0x00000008 + -0x22f8);
    psVar15 = psVar7;
    func_0x013aa954(psVar6,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x21f8)) {
    return psVar6;
  }
  psVar8 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x2340) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x2338) = extraout_d0_00;
  *(segment_command **)((long)register0x00000008 + -0x2330) = psVar6;
  *(dword **)((long)register0x00000008 + -9000) = pdVar28;
  *(segment_command **)((long)register0x00000008 + -0x2320) = psVar16;
  *(segment_command **)((long)register0x00000008 + -0x2318) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x2310) =
       (undefined1 *)((long)register0x00000008 + -0x21b0);
  *(undefined **)((long)register0x00000008 + -0x2308) = &DAT_013467a0;
  *(undefined8 *)((long)register0x00000008 + -0x2348) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x2450) = 0;
  psVar16 = (segment_command *)
            func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x2458));
  if ((int)psVar16 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x2458) + 0x24) >> 1 & 1) == 0) {
      psVar16 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar16 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2450));
      if ((int)psVar16 == 0) {
        pdVar28 = &MACH_HEADER.flags;
        psVar15 = (segment_command *)&MACH_HEADER.flags;
        psVar16 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x2458) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x2448));
        if ((int)psVar16 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x2448);
          *puVar21 = &UNK_03c7ded0;
          *(undefined4 *)(puVar21 + 1) = 0x18;
          *(int *)((long)puVar21 + 0xc) = (int)psVar8;
          *(int *)(puVar21 + 2) = (int)extraout_d0_01;
          psVar16 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x2458) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2450));
  if (((int)psVar16 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cd7c(extraout_d0_01,(undefined1 *)((long)register0x00000008 + -0x2448),0x100);
    pcVar32 = "EventInstance::setVolume";
    param_5 = (segment_command *)((long)register0x00000008 + -0x2448);
    psVar15 = psVar8;
    func_0x013aa954(psVar16,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2348)) {
    return psVar16;
  }
  auVar42 = ___stack_chk_fail();
  pdVar29 = auVar42._8_8_;
  psVar7 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x24b0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x24a8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x24a0) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x2498) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x2490) = psVar6;
  *(dword **)((long)register0x00000008 + -0x2488) = pdVar28;
  *(segment_command **)((long)register0x00000008 + -0x2480) = psVar16;
  *(segment_command **)((long)register0x00000008 + -0x2478) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x2470) =
       (undefined1 *)((long)register0x00000008 + -0x2310);
  *(undefined **)((long)register0x00000008 + -0x2468) = &DAT_013468d4;
  *(undefined8 *)((long)register0x00000008 + -0x24b8) = *(undefined8 *)PTR_03a5d648;
  if (pdVar29 != (dword *)0x0) {
    *pdVar29 = 0;
  }
  if (psVar15 != (segment_command *)0x0) {
    psVar15->cmd = 0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x25b8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x25b0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x25a8) = 0;
  psVar16 = psVar15;
  psVar6 = (segment_command *)
           func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x25b0));
  if ((((int)psVar6 == 0) &&
      (psVar6 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x25b8),
                                *(undefined8 *)((long)register0x00000008 + -0x25b0)),
      (int)psVar6 == 0)) &&
     (psVar6 = (segment_command *)
               func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x25c0)),
     (int)psVar6 == 0)) {
    lVar14 = 0;
    if (*(long *)((long)register0x00000008 + -0x25c0) != 0) {
      lVar14 = *(long *)((long)register0x00000008 + -0x25c0) + -8;
    }
    *(long *)((long)register0x00000008 + -0x25a8) = lVar14;
    psVar16 = psVar15;
    psVar6 = (segment_command *)func_0x0129528c(lVar14,pdVar29);
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x25b8));
  if (((int)psVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    pcVar33 = (char *)((long)register0x00000008 + -0x25b8);
    unaff_x24 = (segment_command *)&section_000000b8.reserved2;
    iVar3 = func_0x0135d15c((undefined1 *)((long)register0x00000008 + -0x25b8),0x100,pdVar29);
    pdVar29 = (dword *)(long)iVar3;
    iVar3 = func_0x0135ce6c((long)pdVar29 + (long)((long)((segment_command *)pcVar33)->segname + -8)
                            ,0x100 - iVar3,", ");
    func_0x0135d15c((long)((segment_command *)pcVar33)->segname + (long)pdVar29 + (long)iVar3 + -8,
                    0x100 - (int)((long)pdVar29 + (long)iVar3),psVar15);
    pcVar32 = "EventInstance::getPitch";
    param_5 = (segment_command *)((long)register0x00000008 + -0x25b8);
    psVar16 = psVar7;
    func_0x013aa954(psVar6,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x24b8)) {
    return psVar6;
  }
  psVar8 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x2600) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x25f8) = extraout_d0_01;
  *(segment_command **)((long)register0x00000008 + -0x25f0) = psVar6;
  *(dword **)((long)register0x00000008 + -0x25e8) = pdVar29;
  *(segment_command **)((long)register0x00000008 + -0x25e0) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x25d8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x25d0) =
       (undefined1 *)((long)register0x00000008 + -0x2470);
  *(undefined **)((long)register0x00000008 + -0x25c8) = &DAT_01346a44;
  *(undefined8 *)((long)register0x00000008 + -0x2608) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -10000) = 0;
  psVar15 = (segment_command *)
            func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x2718));
  if ((int)psVar15 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x2718) + 0x24) >> 1 & 1) == 0) {
      psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar15 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -10000));
      if ((int)psVar15 == 0) {
        pdVar29 = &MACH_HEADER.flags;
        psVar16 = (segment_command *)&MACH_HEADER.flags;
        psVar15 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x2718) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x2708));
        if ((int)psVar15 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x2708);
          *puVar21 = &UNK_03c7df48;
          *(undefined4 *)(puVar21 + 1) = 0x18;
          *(int *)((long)puVar21 + 0xc) = (int)psVar8;
          *(int *)(puVar21 + 2) = (int)extraout_d0_02;
          psVar15 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x2718) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -10000));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cd7c(extraout_d0_02,(undefined1 *)((long)register0x00000008 + -0x2708),0x100);
    pcVar32 = "EventInstance::setPitch";
    param_5 = (segment_command *)((long)register0x00000008 + -0x2708);
    psVar16 = psVar8;
    func_0x013aa954(psVar15,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2608)) {
    return psVar15;
  }
  auVar42 = ___stack_chk_fail();
  psVar9 = auVar42._8_8_;
  psVar7 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x2760) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x2758) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x2750) = psVar6;
  *(dword **)((long)register0x00000008 + -0x2748) = pdVar29;
  *(segment_command **)((long)register0x00000008 + -0x2740) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x2738) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x2730) =
       (undefined1 *)((long)register0x00000008 + -0x25d0);
  *(undefined **)((long)register0x00000008 + -0x2728) = &DAT_01346b78;
  *(undefined8 *)((long)register0x00000008 + -0x2768) = *(undefined8 *)PTR_03a5d648;
  if (psVar9 == (segment_command *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01346c54:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x2868),0x100,psVar9);
      pcVar32 = "EventInstance::get3DAttributes";
      param_5 = (segment_command *)((long)register0x00000008 + -0x2868);
      psVar16 = psVar7;
      func_0x013aa954(psVar15,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x2868) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2860) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2858) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x2860));
    psVar6 = psVar9;
    if ((((int)psVar15 == 0) &&
        (psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2868),
                                   *(undefined8 *)((long)register0x00000008 + -0x2860)),
        (int)psVar15 == 0)) &&
       (psVar15 = (segment_command *)
                  func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x2870)),
       (int)psVar15 == 0)) {
      lVar14 = 0;
      if (*(long *)((long)register0x00000008 + -0x2870) != 0) {
        lVar14 = *(long *)((long)register0x00000008 + -0x2870) + -8;
      }
      *(long *)((long)register0x00000008 + -0x2858) = lVar14;
      qVar35 = *(qword *)(lVar14 + 0x40);
      qVar34 = *(qword *)(lVar14 + 0x38);
      qVar36 = *(qword *)(lVar14 + 0x48);
      qVar40 = *(qword *)(lVar14 + 0x60);
      qVar38 = *(qword *)(lVar14 + 0x58);
      psVar9->vmaddr = *(qword *)(lVar14 + 0x50);
      *(qword *)((long)psVar9->segname + 8) = qVar36;
      psVar9->fileoff = qVar40;
      psVar9->vmsize = qVar38;
      *(qword *)psVar9->segname = qVar35;
      psVar9->cmd = (int)qVar34;
      psVar9->cmdsize = (int)(qVar34 >> 0x20);
      psVar6 = (segment_command *)0x0;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2868));
    if (psVar6 != (segment_command *)0x0) {
      psVar6->vmaddr = 0;
      *(qword *)((long)psVar6->segname + 8) = 0;
      psVar6->fileoff = 0;
      psVar6->vmsize = 0;
      *(qword *)psVar6->segname = 0;
      psVar6->cmd = 0;
      psVar6->cmdsize = 0;
    }
    if ((int)psVar15 != 0) goto code_r0x01346c54;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2768)) {
    return psVar15;
  }
  auVar42 = ___stack_chk_fail();
  puVar21 = auVar42._8_8_;
  psVar8 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x28b0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x28a8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x28a0) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x2898) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x2890) = psVar9;
  *(segment_command **)((long)register0x00000008 + -0x2888) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x2880) =
       (undefined1 *)((long)register0x00000008 + -0x2730);
  *(undefined **)((long)register0x00000008 + -0x2878) = &DAT_01346ccc;
  *(undefined8 *)((long)register0x00000008 + -0x28b8) = *(undefined8 *)PTR_03a5d648;
  if (puVar21 == (undefined8 *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01346da4:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x29b8),0x100,puVar21);
      pcVar32 = "EventInstance::set3DAttributes";
      param_5 = (segment_command *)((long)register0x00000008 + -0x29b8);
      psVar16 = psVar8;
      func_0x013aa954(psVar15,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x29c0) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x29c8));
    if ((int)psVar15 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x29c8) + 0x24) >> 1 & 1) == 0) {
        psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar15 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x29c0));
        if ((int)psVar15 == 0) {
          psVar6 = (segment_command *)&segment_command_00000020.vmsize;
          psVar16 = (segment_command *)&segment_command_00000020.vmsize;
          psVar15 = (segment_command *)
                    func_0x012933e8(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x29c8) + 0x98),
                                    (undefined1 *)((long)register0x00000008 + -0x29b8));
          if ((int)psVar15 == 0) {
            puVar30 = *(undefined8 **)((long)register0x00000008 + -0x29b8);
            *puVar30 = &UNK_03c7dfc0;
            *(undefined4 *)(puVar30 + 1) = 0x40;
            *(int *)((long)puVar30 + 0xc) = auVar42._0_4_;
            uVar13 = puVar21[1];
            uVar26 = *puVar21;
            uVar37 = puVar21[2];
            uVar41 = puVar21[5];
            uVar39 = puVar21[4];
            puVar30[5] = puVar21[3];
            puVar30[4] = uVar37;
            puVar30[7] = uVar41;
            puVar30[6] = uVar39;
            puVar30[3] = uVar13;
            puVar30[2] = uVar26;
            psVar15 = (segment_command *)
                      func_0x01292948(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x29c8) + 0x98));
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x29c0));
    if ((int)psVar15 != 0) goto code_r0x01346da4;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x28b8)) {
    return psVar15;
  }
  auVar42 = ___stack_chk_fail();
  puVar27 = auVar42._8_8_;
  psVar7 = auVar42._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x2a00) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x29f8) = psVar15;
  *(undefined8 **)((long)register0x00000008 + -0x29f0) = puVar21;
  *(segment_command **)((long)register0x00000008 + -0x29e8) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x29e0) =
       (undefined1 *)((long)register0x00000008 + -0x2880);
  *(undefined **)((long)register0x00000008 + -0x29d8) = &DAT_01346e1c;
  *(undefined8 *)((long)register0x00000008 + -0x2a08) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 == (undefined4 *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01346ec8:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d09c((undefined1 *)((long)register0x00000008 + -0x2b08),0x100,puVar27);
      pcVar32 = "EventInstance::getListenerMask";
      param_5 = (segment_command *)((long)register0x00000008 + -0x2b08);
      psVar16 = psVar7;
      func_0x013aa954(psVar15,0xd);
    }
  }
  else {
    *puVar27 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2b08) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2b00) = 0;
    *(undefined8 *)((long)register0x00000008 + -11000) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x2b00));
    if ((((int)psVar15 == 0) &&
        (psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2b08),
                                   *(undefined8 *)((long)register0x00000008 + -0x2b00)),
        (int)psVar15 == 0)) &&
       (psVar15 = (segment_command *)
                  func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x2b10)),
       (int)psVar15 == 0)) {
      lVar14 = 0;
      if (*(long *)((long)register0x00000008 + -0x2b10) != 0) {
        lVar14 = *(long *)((long)register0x00000008 + -0x2b10) + -8;
      }
      *(long *)((long)register0x00000008 + -11000) = lVar14;
      *puVar27 = *(undefined4 *)(lVar14 + 0x88);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2b08));
    if ((int)psVar15 != 0) goto code_r0x01346ec8;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2a08)) {
    return psVar15;
  }
  auVar42 = ___stack_chk_fail();
  psVar8 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x2b50) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x2b48) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x2b40) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x2b38) = psVar15;
  *(undefined4 **)((long)register0x00000008 + -0x2b30) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x2b28) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x2b20) =
       (undefined1 *)((long)register0x00000008 + -0x29e0);
  *(undefined **)((long)register0x00000008 + -0x2b18) = &DAT_01346f3c;
  *(undefined8 *)((long)register0x00000008 + -0x2b58) = *(undefined8 *)PTR_03a5d648;
  if (auVar42._8_4_ == 0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01347008:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135cce0((undefined1 *)((long)register0x00000008 + -0x2c58),0x100,auVar42._8_8_);
      pcVar32 = "EventInstance::setListenerMask";
      param_5 = (segment_command *)((long)register0x00000008 + -0x2c58);
      psVar16 = psVar8;
      func_0x013aa954(psVar15,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x2c60) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x2c68));
    if ((int)psVar15 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x2c68) + 0x24) >> 1 & 1) == 0) {
        psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar15 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2c60));
        if ((int)psVar15 == 0) {
          psVar6 = (segment_command *)&MACH_HEADER.flags;
          psVar16 = (segment_command *)&MACH_HEADER.flags;
          psVar15 = (segment_command *)
                    func_0x012933e8(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x2c68) + 0x98),
                                    (undefined1 *)((long)register0x00000008 + -0x2c58));
          if ((int)psVar15 == 0) {
            puVar21 = *(undefined8 **)((long)register0x00000008 + -0x2c58);
            *puVar21 = &UNK_03c7e038;
            *(undefined4 *)(puVar21 + 1) = 0x18;
            *(int *)((long)puVar21 + 0xc) = auVar42._0_4_;
            *(int *)(puVar21 + 2) = auVar42._8_4_;
            psVar15 = (segment_command *)
                      func_0x01292948(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x2c68) + 0x98));
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2c60));
    if ((int)psVar15 != 0) goto code_r0x01347008;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2b58)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  pdVar28 = auVar43._8_8_;
  psVar7 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x2cc0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x2cb8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x2cb0) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x2ca8) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x2ca0) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x2c98) = psVar15;
  *(long *)((long)register0x00000008 + -0x2c90) = auVar42._8_8_;
  *(segment_command **)((long)register0x00000008 + -0x2c88) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x2c80) =
       (undefined1 *)((long)register0x00000008 + -0x2b20);
  *(undefined **)((long)register0x00000008 + -0x2c78) = &DAT_01347080;
  *(undefined8 *)((long)register0x00000008 + -0x2cc8) = *(undefined8 *)PTR_03a5d648;
  psVar15 = psVar16;
  if ((psVar16 == (segment_command *)0x0) || (psVar16->cmd = 0, 5 < auVar43._8_4_)) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01347144:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      pcVar33 = (char *)((long)register0x00000008 + -0x2dc8);
      unaff_x24 = (segment_command *)&section_000000b8.reserved2;
      iVar3 = func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x2dc8),0x100,pdVar28);
      pdVar28 = (dword *)(long)iVar3;
      iVar3 = func_0x0135ce6c((long)pdVar28 +
                              (long)((long)((segment_command *)pcVar33)->segname + -8),0x100 - iVar3
                              ,", ");
      func_0x0135d15c((long)((segment_command *)pcVar33)->segname + (long)pdVar28 + (long)iVar3 + -8
                      ,0x100 - (int)((long)pdVar28 + (long)iVar3),psVar16);
      pcVar32 = "EventInstance::getProperty";
      param_5 = (segment_command *)((long)register0x00000008 + -0x2dc8);
      psVar15 = psVar7;
      func_0x013aa954(psVar6,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x2dc8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2dc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2db8) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x2dc0));
    if ((((int)psVar6 == 0) &&
        (psVar6 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2dc8),
                                  *(undefined8 *)((long)register0x00000008 + -0x2dc0)),
        (int)psVar6 == 0)) &&
       (psVar6 = (segment_command *)
                 func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x2dd0)),
       (int)psVar6 == 0)) {
      lVar14 = 0;
      if (*(long *)((long)register0x00000008 + -0x2dd0) != 0) {
        lVar14 = *(long *)((long)register0x00000008 + -0x2dd0) + -8;
      }
      *(long *)((long)register0x00000008 + -0x2db8) = lVar14;
      psVar16->cmd = *(dword *)(lVar14 + ((ulong)pdVar28 & 0xffffffff) * 4 + 0xa4);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2dc8));
    if ((int)psVar6 != 0) goto code_r0x01347144;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2cc8)) {
    return psVar6;
  }
  psVar8 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x2e20) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x2e18) = extraout_d0_02;
  *(segment_command **)((long)register0x00000008 + -0x2e10) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x2e08) = pcVar33;
  *(dword **)((long)register0x00000008 + -0x2e00) = pdVar28;
  *(segment_command **)((long)register0x00000008 + -0x2df8) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x2df0) = psVar16;
  *(segment_command **)((long)register0x00000008 + -0x2de8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x2de0) =
       (undefined1 *)((long)register0x00000008 + -0x2c80);
  *(undefined **)((long)register0x00000008 + -0x2dd8) = &DAT_013471f8;
  *(undefined8 *)((long)register0x00000008 + -0x2e28) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x2f30) = 0;
  psVar16 = (segment_command *)
            func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x2f38));
  if ((int)psVar16 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x2f38) + 0x24) >> 1 & 1) == 0) {
      psVar16 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar16 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x2f30));
      if ((int)psVar16 == 0) {
        pdVar28 = &MACH_HEADER.flags;
        psVar15 = (segment_command *)&MACH_HEADER.flags;
        psVar16 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x2f38) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x2f28));
        if ((int)psVar16 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x2f28);
          *puVar21 = &UNK_03c7e0b0;
          *(undefined4 *)(puVar21 + 1) = 0x18;
          *(int *)((long)puVar21 + 0xc) = (int)psVar8;
          *(int *)(puVar21 + 2) = (int)extraout_x1;
          *(int *)((long)puVar21 + 0x14) = (int)extraout_d0_03;
          psVar16 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x2f38) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x2f30));
  lVar14 = extraout_x1;
  if (((int)psVar16 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    pdVar28 = (dword *)((long)register0x00000008 + -0x2f28);
    pcVar33 = (char *)&section_000000b8.reserved2;
    iVar3 = func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x2f28),0x100,extraout_x1);
    lVar14 = (long)iVar3;
    iVar3 = func_0x0135ce6c((long)pdVar28 + lVar14,0x100 - iVar3,", ");
    func_0x0135cd7c(extraout_d0_03,(long)pdVar28 + lVar14 + iVar3,0x100 - (int)(lVar14 + iVar3));
    pcVar32 = "EventInstance::setProperty";
    param_5 = (segment_command *)((long)register0x00000008 + -0x2f28);
    psVar15 = psVar8;
    func_0x013aa954(psVar16,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2e28)) {
    return psVar16;
  }
  auVar42 = ___stack_chk_fail();
  pdVar29 = auVar42._8_8_;
  psVar6 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x2f90) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x2f88) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x2f80) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x2f78) = pcVar33;
  *(dword **)((long)register0x00000008 + -0x2f70) = pdVar28;
  *(segment_command **)((long)register0x00000008 + -0x2f68) = psVar16;
  *(long *)((long)register0x00000008 + -0x2f60) = lVar14;
  *(segment_command **)((long)register0x00000008 + -0x2f58) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x2f50) =
       (undefined1 *)((long)register0x00000008 + -0x2de0);
  *(undefined **)((long)register0x00000008 + -0x2f48) = &DAT_01347374;
  *(undefined8 *)((long)register0x00000008 + -0x2f98) = *(undefined8 *)PTR_03a5d648;
  psVar16 = psVar15;
  if ((psVar15 == (segment_command *)0x0) || (psVar15->cmd = 0, 3 < auVar42._8_4_)) {
    psVar8 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01347438:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      pcVar33 = (char *)((long)register0x00000008 + -0x3098);
      unaff_x24 = (segment_command *)&section_000000b8.reserved2;
      iVar3 = func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x3098),0x100,pdVar29);
      pdVar29 = (dword *)(long)iVar3;
      iVar3 = func_0x0135ce6c((long)pdVar29 +
                              (long)((long)((segment_command *)pcVar33)->segname + -8),0x100 - iVar3
                              ,", ");
      func_0x0135d15c((long)((segment_command *)pcVar33)->segname + (long)pdVar29 + (long)iVar3 + -8
                      ,0x100 - (int)((long)pdVar29 + (long)iVar3),psVar15);
      pcVar32 = "EventInstance::getReverbLevel";
      param_5 = (segment_command *)((long)register0x00000008 + -0x3098);
      psVar16 = psVar6;
      func_0x013aa954(psVar8,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x3098) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3090) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3088) = 0;
    psVar8 = (segment_command *)
             func_0x01279100(psVar6,(undefined1 *)((long)register0x00000008 + -0x3090));
    if ((((int)psVar8 == 0) &&
        (psVar8 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3098),
                                  *(undefined8 *)((long)register0x00000008 + -0x3090)),
        (int)psVar8 == 0)) &&
       (psVar8 = (segment_command *)
                 func_0x01279164(psVar6,(undefined1 *)((long)register0x00000008 + -0x30a0)),
       (int)psVar8 == 0)) {
      lVar14 = 0;
      if (*(long *)((long)register0x00000008 + -0x30a0) != 0) {
        lVar14 = *(long *)((long)register0x00000008 + -0x30a0) + -8;
      }
      *(long *)((long)register0x00000008 + -0x3088) = lVar14;
      psVar15->cmd = *(dword *)(lVar14 + ((ulong)pdVar29 & 0xffffffff) * 4 + 0x94);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3098));
    if ((int)psVar8 != 0) goto code_r0x01347438;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x2f98)) {
    return psVar8;
  }
  psVar7 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x30f0) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x30e8) = extraout_d0_03;
  *(segment_command **)((long)register0x00000008 + -0x30e0) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x30d8) = pcVar33;
  *(dword **)((long)register0x00000008 + -0x30d0) = pdVar29;
  *(segment_command **)((long)register0x00000008 + -0x30c8) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x30c0) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x30b8) = psVar6;
  *(undefined1 **)((long)register0x00000008 + -0x30b0) =
       (undefined1 *)((long)register0x00000008 + -0x2f50);
  *(undefined **)((long)register0x00000008 + -0x30a8) = &DAT_013474ec;
  *(undefined8 *)((long)register0x00000008 + -0x30f8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x3200) = 0;
  psVar15 = (segment_command *)
            func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x3208));
  if ((int)psVar15 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x3208) + 0x24) >> 1 & 1) == 0) {
      psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar15 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3200));
      if ((int)psVar15 == 0) {
        pdVar29 = &MACH_HEADER.flags;
        psVar16 = (segment_command *)&MACH_HEADER.flags;
        psVar15 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x3208) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x31f8));
        if ((int)psVar15 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x31f8);
          *puVar21 = &UNK_03c7e128;
          *(undefined4 *)(puVar21 + 1) = 0x18;
          *(int *)((long)puVar21 + 0xc) = (int)psVar7;
          *(int *)(puVar21 + 2) = (int)extraout_x1_00;
          *(int *)((long)puVar21 + 0x14) = (int)extraout_d0_04;
          psVar15 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x3208) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3200));
  lVar14 = extraout_x1_00;
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    pdVar29 = (dword *)((long)register0x00000008 + -0x31f8);
    pcVar33 = (char *)&section_000000b8.reserved2;
    iVar3 = func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x31f8),0x100,extraout_x1_00)
    ;
    lVar14 = (long)iVar3;
    iVar3 = func_0x0135ce6c((long)pdVar29 + lVar14,0x100 - iVar3,", ");
    func_0x0135cd7c(extraout_d0_04,(long)pdVar29 + lVar14 + iVar3,0x100 - (int)(lVar14 + iVar3));
    pcVar32 = "EventInstance::setReverbLevel";
    param_5 = (segment_command *)((long)register0x00000008 + -0x31f8);
    psVar16 = psVar7;
    func_0x013aa954(psVar15,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x30f8)) {
    return psVar15;
  }
  auVar42 = ___stack_chk_fail();
  puVar25 = auVar42._8_8_;
  psVar6 = auVar42._0_8_;
  *(dword **)((long)register0x00000008 + -0x3240) = pdVar29;
  *(segment_command **)((long)register0x00000008 + -0x3238) = psVar15;
  *(long *)((long)register0x00000008 + -0x3230) = lVar14;
  *(segment_command **)((long)register0x00000008 + -0x3228) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x3220) =
       (undefined1 *)((long)register0x00000008 + -0x30b0);
  *(undefined **)((long)register0x00000008 + -0x3218) = &DAT_01347668;
  *(undefined8 *)((long)register0x00000008 + -0x3248) = *(undefined8 *)PTR_03a5d648;
  if (puVar25 == (undefined1 *)0x0) {
    psVar15 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01347714:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d1a4((undefined1 *)((long)register0x00000008 + -0x3348),0x100,puVar25);
      pcVar32 = "EventInstance::getPaused";
      param_5 = (segment_command *)((long)register0x00000008 + -0x3348);
      psVar16 = psVar6;
      func_0x013aa954(psVar15,0xd);
    }
  }
  else {
    *puVar25 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3348) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3340) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3338) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(psVar6,(undefined1 *)((long)register0x00000008 + -0x3340));
    if ((((int)psVar15 == 0) &&
        (psVar15 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3348),
                                   *(undefined8 *)((long)register0x00000008 + -0x3340)),
        (int)psVar15 == 0)) &&
       (psVar15 = (segment_command *)
                  func_0x01279164(psVar6,(undefined1 *)((long)register0x00000008 + -0x3350)),
       (int)psVar15 == 0)) {
      lVar14 = 0;
      if (*(long *)((long)register0x00000008 + -0x3350) != 0) {
        lVar14 = *(long *)((long)register0x00000008 + -0x3350) + -8;
      }
      *(long *)((long)register0x00000008 + -0x3338) = lVar14;
      *puVar25 = *(undefined1 *)(lVar14 + 0xbc);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3348));
    if ((int)psVar15 != 0) goto code_r0x01347714;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3248)) {
    return psVar15;
  }
  auVar42 = ___stack_chk_fail();
  psVar8 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x3390) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x3388) = unaff_x27;
  *(dword **)((long)register0x00000008 + -0x3380) = pdVar29;
  *(segment_command **)((long)register0x00000008 + -0x3378) = psVar15;
  *(undefined1 **)((long)register0x00000008 + -0x3370) = puVar25;
  *(segment_command **)((long)register0x00000008 + -0x3368) = psVar6;
  *(undefined1 **)((long)register0x00000008 + -0x3360) =
       (undefined1 *)((long)register0x00000008 + -0x3220);
  *(undefined **)((long)register0x00000008 + -0x3358) = &DAT_01347788;
  *(undefined8 *)((long)register0x00000008 + -0x3398) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x34a0) = 0;
  psVar15 = (segment_command *)
            func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x34a8));
  if ((int)psVar15 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x34a8) + 0x24) >> 1 & 1) == 0) {
      psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar15 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x34a0));
      if ((int)psVar15 == 0) {
        pdVar29 = &MACH_HEADER.flags;
        psVar16 = (segment_command *)&MACH_HEADER.flags;
        psVar15 = (segment_command *)
                  func_0x012933e8(*(undefined8 *)
                                   (*(long *)((long)register0x00000008 + -0x34a8) + 0x98),
                                  (undefined1 *)((long)register0x00000008 + -0x3498));
        if ((int)psVar15 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x3498);
          *puVar21 = &UNK_03c7e1a0;
          *(undefined4 *)(puVar21 + 1) = 0x18;
          *(int *)((long)puVar21 + 0xc) = auVar42._0_4_;
          *(char *)(puVar21 + 2) = auVar42[8];
          psVar15 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x34a8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x34a0));
  if (((int)psVar15 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cddc((undefined1 *)((long)register0x00000008 + -0x3498),0x100,auVar42._8_8_);
    pcVar32 = "EventInstance::setPaused";
    param_5 = (segment_command *)((long)register0x00000008 + -0x3498);
    psVar16 = psVar8;
    func_0x013aa954(psVar15,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3398)) {
    return psVar15;
  }
  auVar43 = ___stack_chk_fail();
  pcVar31 = auVar43._8_8_;
  psVar6 = auVar43._0_8_;
  *(long *)((long)register0x00000008 + -0x3510) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x3508) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x3500) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x34f8) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x34f0) = unaff_x24;
  *(char **)((long)register0x00000008 + -0x34e8) = pcVar33;
  *(dword **)((long)register0x00000008 + -0x34e0) = pdVar29;
  *(segment_command **)((long)register0x00000008 + -0x34d8) = psVar15;
  *(long *)((long)register0x00000008 + -0x34d0) = auVar42._8_8_;
  *(segment_command **)((long)register0x00000008 + -0x34c8) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x34c0) =
       (undefined1 *)((long)register0x00000008 + -0x3360);
  *(undefined **)((long)register0x00000008 + -0x34b8) = &DAT_013478bc;
  *(undefined8 *)((long)register0x00000008 + -0x3518) = *(undefined8 *)PTR_03a5d648;
  if (psVar16 != (segment_command *)0x0) {
    psVar16->cmd = 0;
  }
  if ((segment_command *)pcVar32 != (segment_command *)0x0) {
    ((segment_command *)pcVar32)->cmd = 0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x3618) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x3610) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x3608) = 0;
  psVar15 = psVar16;
  pcVar33 = pcVar32;
  psVar8 = (segment_command *)
           func_0x01279100(psVar6,(undefined1 *)((long)register0x00000008 + -0x3610));
  if ((((int)psVar8 == 0) &&
      (psVar8 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3618),
                                *(undefined8 *)((long)register0x00000008 + -0x3610)),
      (int)psVar8 == 0)) &&
     (psVar8 = (segment_command *)
               func_0x01279164(psVar6,(undefined1 *)((long)register0x00000008 + -0x3620)),
     (int)psVar8 == 0)) {
    lVar14 = 0;
    if (*(long *)((long)register0x00000008 + -0x3620) != 0) {
      lVar14 = *(long *)((long)register0x00000008 + -0x3620) + -8;
    }
    *(long *)((long)register0x00000008 + -0x3608) = lVar14;
    lVar14 = *(long *)(lVar14 + 0x18);
    if (lVar14 == 0) {
      psVar8 = (segment_command *)((long)&MACH_HEADER.reserved + 2);
    }
    else if ((int)*(uint *)(lVar14 + 0x98) < 1) {
code_r0x01347ac0:
      psVar8 = (segment_command *)((long)&segment_command_00000020.fileoff + 2);
    }
    else {
      uVar12 = 0;
      piVar24 = (int *)(*(long *)(lVar14 + 0x90) + 4);
      psVar8 = (segment_command *)((long)&segment_command_00000020.fileoff + 2);
      do {
        if (piVar24[-1] == auVar43._8_4_ && *piVar24 == auVar43._12_4_) {
          if ((int)uVar12 < 0) goto code_r0x01347ac0;
          psVar15 = psVar16;
          pcVar33 = pcVar32;
          psVar8 = (segment_command *)func_0x012951d8();
          break;
        }
        uVar12 = uVar12 + 1;
        piVar24 = piVar24 + 2;
      } while (*(uint *)(lVar14 + 0x98) != uVar12);
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3618));
  if (((int)psVar8 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(char **)((long)register0x00000008 + -0x3620) = pcVar31;
    unaff_x24 = (segment_command *)((long)register0x00000008 + -0x3618);
    unaff_x25 = (segment_command *)&section_000000b8.reserved2;
    iVar3 = func_0x0127980c((undefined1 *)((long)register0x00000008 + -0x3618),0x100,
                            (undefined1 *)((long)register0x00000008 + -0x3620));
    pcVar31 = ", ";
    iVar4 = func_0x0135ce6c((long)unaff_x24->segname + (long)iVar3 + -8,0x100 - iVar3,", ");
    unaff_x26 = (long)iVar3 + (long)iVar4;
    iVar3 = func_0x0135d15c((long)unaff_x24->segname + unaff_x26 + -8,0x100 - (int)unaff_x26,psVar16
                           );
    uVar2 = (int)unaff_x26 + iVar3;
    psVar16 = (segment_command *)(ulong)uVar2;
    iVar3 = func_0x0135ce6c((long)unaff_x24->segname + (long)(int)uVar2 + -8,0x100 - uVar2,", ");
    func_0x0135d15c((long)unaff_x24->segname + (long)(int)(uVar2 + iVar3) + -8,
                    0x100 - (uVar2 + iVar3),pcVar32);
    pcVar33 = "EventInstance::getParameterByID";
    param_5 = (segment_command *)((long)register0x00000008 + -0x3618);
    psVar15 = psVar6;
    func_0x013aa954(psVar8,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3518)) {
    return psVar8;
  }
  psVar7 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x3670) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x3668) = extraout_d0_04;
  *(segment_command **)((long)register0x00000008 + -0x3660) = unaff_x24;
  *(segment_command **)((long)register0x00000008 + -0x3658) = psVar8;
  *(char **)((long)register0x00000008 + -0x3650) = pcVar31;
  *(segment_command **)((long)register0x00000008 + -0x3648) = psVar16;
  *(char **)((long)register0x00000008 + -0x3640) = pcVar32;
  *(segment_command **)((long)register0x00000008 + -0x3638) = psVar6;
  *(undefined1 **)((long)register0x00000008 + -0x3630) =
       (undefined1 *)((long)register0x00000008 + -0x34c0);
  *(undefined **)((long)register0x00000008 + -0x3628) = &DAT_01347acc;
  *(undefined8 *)((long)register0x00000008 + -0x3678) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x3780) = 0;
  psVar16 = psVar15;
  psVar6 = (segment_command *)
           func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x3788));
  if ((int)psVar6 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x3788) + 0x24) >> 1 & 1) == 0) {
      psVar6 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar6 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3780));
      if ((int)psVar6 == 0) {
        psVar8 = &segment_command_00000020;
        psVar16 = &segment_command_00000020;
        psVar6 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x3788) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x3778));
        if ((int)psVar6 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x3778);
          *puVar21 = &UNK_03c7dcf0;
          *(undefined4 *)(puVar21 + 1) = 0x20;
          *(int *)((long)puVar21 + 0xc) = (int)psVar7;
          puVar21[2] = extraout_x1_01;
          *(int *)(puVar21 + 3) = (int)extraout_d0_05;
          *(char *)((long)puVar21 + 0x1c) = (char)psVar15;
          psVar6 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x3788) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3780));
  puVar25 = extraout_x1_01;
  if (((int)psVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 **)((long)register0x00000008 + -0x3780) = extraout_x1_01;
    puVar25 = (undefined1 *)((long)register0x00000008 + -0x3778);
    psVar15 = (segment_command *)&section_000000b8.reserved2;
    iVar3 = func_0x0127980c((undefined1 *)((long)register0x00000008 + -0x3778),0x100,
                            (undefined1 *)((long)register0x00000008 + -0x3780));
    psVar8 = (segment_command *)(long)iVar3;
    iVar3 = func_0x0135ce6c(puVar25 + (long)psVar8,0x100 - iVar3,", ");
    func_0x0135cd7c(extraout_d0_05,puVar25 + (long)(psVar8->segname + (long)iVar3 + -8),
                    0x100 - (int)(psVar8->segname + (long)iVar3 + -8));
    pcVar33 = "EventInstance::setParameterByID";
    param_5 = (segment_command *)((long)register0x00000008 + -0x3778);
    psVar16 = psVar7;
    func_0x013aa954(psVar6,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3678)) {
    return psVar6;
  }
  auVar42 = ___stack_chk_fail();
  pcVar32 = auVar42._8_8_;
  psVar10 = auVar42._0_8_;
  psVar9 = (segment_command *)((long)register0x00000008 + -0x3900);
  *(long *)((long)register0x00000008 + -0x37f0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x37e8) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x37e0) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x37d8) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x37d0) = unaff_x24;
  *(segment_command **)((long)register0x00000008 + -0x37c8) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x37c0) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x37b8) = psVar6;
  *(undefined1 **)((long)register0x00000008 + -0x37b0) = puVar25;
  *(segment_command **)((long)register0x00000008 + -0x37a8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x37a0) =
       (undefined1 *)((long)register0x00000008 + -0x3630);
  *(undefined **)((long)register0x00000008 + -0x3798) = &DAT_01347c54;
  *(undefined8 *)((long)register0x00000008 + -0x37f8) = *(undefined8 *)PTR_03a5d648;
  if (psVar16 != (segment_command *)0x0) {
    psVar16->cmd = 0;
  }
  if ((segment_command *)pcVar33 != (segment_command *)0x0) {
    ((segment_command *)pcVar33)->cmd = 0;
  }
  psVar15 = psVar16;
  pcVar31 = pcVar33;
  if ((segment_command *)pcVar32 == (segment_command *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01347d38:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      unaff_x24 = (segment_command *)((long)register0x00000008 + -0x38f8);
      unaff_x25 = (segment_command *)&section_000000b8.reserved2;
      iVar3 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + -0x38f8),0x100,pcVar32);
      pcVar32 = ", ";
      iVar4 = func_0x0135ce6c((long)unaff_x24->segname + (long)iVar3 + -8,0x100 - iVar3,", ");
      unaff_x26 = (long)iVar3 + (long)iVar4;
      iVar3 = func_0x0135d15c((long)unaff_x24->segname + unaff_x26 + -8,0x100 - (int)unaff_x26,
                              psVar16);
      uVar2 = (int)unaff_x26 + iVar3;
      psVar16 = (segment_command *)(ulong)uVar2;
      iVar3 = func_0x0135ce6c((long)unaff_x24->segname + (long)(int)uVar2 + -8,0x100 - uVar2,", ");
      func_0x0135d15c((long)unaff_x24->segname + (long)(int)(uVar2 + iVar3) + -8,
                      0x100 - (uVar2 + iVar3),pcVar33);
      pcVar31 = "EventInstance::getParameterByName";
      param_5 = (segment_command *)((long)register0x00000008 + -0x38f8);
      psVar15 = psVar10;
      func_0x013aa954(psVar6,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x38f8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38f0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38e8) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar10,(undefined1 *)((long)register0x00000008 + -0x38f0));
    if ((((int)psVar6 == 0) &&
        (psVar6 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x38f8),
                                  *(undefined8 *)((long)register0x00000008 + -0x38f0)),
        (int)psVar6 == 0)) &&
       (psVar6 = (segment_command *)
                 func_0x01279164(psVar10,(undefined1 *)((long)register0x00000008 + -0x3900)),
       (int)psVar6 == 0)) {
      lVar14 = 0;
      if (*(long *)((long)register0x00000008 + -0x3900) != 0) {
        lVar14 = *(long *)((long)register0x00000008 + -0x3900) + -8;
      }
      *(long *)((long)register0x00000008 + -0x38e8) = lVar14;
      *(undefined4 *)((long)register0x00000008 + -0x3900) = 0;
      psVar15 = (segment_command *)pcVar32;
      psVar6 = (segment_command *)
               func_0x0133d158(*(undefined8 *)((long)register0x00000008 + -0x38f0));
      pcVar31 = (char *)psVar9;
      if ((int)psVar6 == 0) {
        psVar15 = psVar16;
        pcVar31 = pcVar33;
        psVar6 = (segment_command *)
                 func_0x012951d8(*(undefined8 *)((long)register0x00000008 + -0x38e8),
                                 *(undefined4 *)((long)register0x00000008 + -0x3900));
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x38f8));
    if ((int)psVar6 != 0) goto code_r0x01347d38;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x37f8)) {
    return psVar6;
  }
  psVar8 = (segment_command *)___stack_chk_fail();
  *(undefined8 *)((long)register0x00000008 + -0x3960) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x3958) = extraout_d0_05;
  *(long *)((long)register0x00000008 + -0x3950) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x3948) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x3940) = unaff_x24;
  *(segment_command **)((long)register0x00000008 + -0x3938) = psVar6;
  *(char **)((long)register0x00000008 + -0x3930) = pcVar32;
  *(segment_command **)((long)register0x00000008 + -0x3928) = psVar16;
  *(char **)((long)register0x00000008 + -0x3920) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x3918) = psVar10;
  *(undefined1 **)((long)register0x00000008 + -0x3910) =
       (undefined1 *)((long)register0x00000008 + -0x37a0);
  *(undefined **)((long)register0x00000008 + -0x3908) = &DAT_01347e34;
  *(undefined8 *)((long)register0x00000008 + -0x3968) = *(undefined8 *)PTR_03a5d648;
  psVar16 = psVar15;
  lVar14 = extraout_x1_02;
  if (extraout_x1_02 == 0) {
code_r0x01347eb8:
    psVar9 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
    psVar15 = (segment_command *)pcVar32;
    psVar7 = psVar6;
code_r0x01347f4c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      psVar15 = (segment_command *)((long)register0x00000008 + -0x3a68);
      psVar7 = (segment_command *)&section_000000b8.reserved2;
      iVar3 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + -0x3a68),0x100,
                              extraout_x1_02);
      lVar14 = (long)iVar3;
      iVar3 = func_0x0135ce6c((long)psVar15->segname + lVar14 + -8,0x100 - iVar3,", ");
      func_0x0135cd7c(extraout_d0_06,(long)psVar15->segname + lVar14 + iVar3 + -8,
                      0x100 - (int)(lVar14 + iVar3));
      pcVar31 = "EventInstance::setParameterByName";
      param_5 = (segment_command *)((long)register0x00000008 + -0x3a68);
      psVar16 = psVar8;
      func_0x013aa954(psVar9,0xd);
    }
  }
  else {
    psVar7 = (segment_command *)func_0x013eddc4(extraout_x1_02);
    iVar3 = (int)psVar7;
    pcVar32 = (char *)psVar15;
    if (0x7f < iVar3) goto code_r0x01347eb8;
    *(undefined8 *)((long)register0x00000008 + -0x3a70) = 0;
    psVar9 = (segment_command *)
             func_0x01279100(psVar8,(undefined1 *)((long)register0x00000008 + -0x3a78));
    if ((int)psVar9 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x3a78) + 0x24) >> 1 & 1) == 0) {
        psVar9 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar9 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3a70));
        if ((int)psVar9 == 0) {
          unaff_x24 = (segment_command *)&section_00000068.reloff;
          psVar16 = (segment_command *)&section_00000068.reloff;
          psVar9 = (segment_command *)
                   func_0x012933e8(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x3a78) + 0x98),
                                   (undefined1 *)((long)register0x00000008 + -0x3a68));
          if ((int)psVar9 == 0) {
            puVar21 = *(undefined8 **)((long)register0x00000008 + -0x3a68);
            *puVar21 = &UNK_03c7de58;
            *(undefined4 *)(puVar21 + 1) = 0xa0;
            *(int *)((long)puVar21 + 0xc) = (int)psVar8;
            psVar16 = (segment_command *)(long)(iVar3 + 1);
            _memcpy(puVar21 + 4,extraout_x1_02);
            *(uint *)(puVar21 + 1) = iVar3 + 0x24U & 0xfffffffc;
            *(int *)(puVar21 + 2) = (int)extraout_d0_06;
            *(char *)((long)puVar21 + 0x14) = (char)psVar15;
            psVar9 = (segment_command *)
                     func_0x01292948(*(undefined8 *)
                                      (*(long *)((long)register0x00000008 + -0x3a78) + 0x98),puVar21
                                    );
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3a70));
    if ((int)psVar9 != 0) goto code_r0x01347f4c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3968)) {
    return psVar9;
  }
  auVar42 = ___stack_chk_fail();
  pcVar33 = auVar42._8_8_;
  psVar10 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x3ae0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x3ad8) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x3ad0) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x3ac8) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x3ac0) = unaff_x24;
  *(segment_command **)((long)register0x00000008 + -0x3ab8) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x3ab0) = psVar15;
  *(segment_command **)((long)register0x00000008 + -0x3aa8) = psVar9;
  *(long *)((long)register0x00000008 + -0x3aa0) = lVar14;
  *(segment_command **)((long)register0x00000008 + -15000) = psVar8;
  *(undefined1 **)((long)register0x00000008 + -0x3a90) =
       (undefined1 *)((long)register0x00000008 + -0x3910);
  *(undefined **)((long)register0x00000008 + -0x3a88) = &DAT_01348004;
  *(undefined8 *)((long)register0x00000008 + -0x3ae8) = *(undefined8 *)PTR_03a5d648;
  psVar6 = psVar16;
  pcVar32 = pcVar31;
  psVar15 = param_5;
  if ((int)pcVar31 < 0x21) {
    *(undefined8 *)((long)register0x00000008 + -0x3bf0) = 0;
    psVar8 = (segment_command *)
             func_0x01279100(psVar10,(undefined1 *)((long)register0x00000008 + -0x3bf8));
    psVar7 = unaff_x25;
    if ((int)psVar8 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x3bf8) + 0x24) >> 1 & 1) == 0) {
        psVar8 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar8 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3bf0));
        if ((int)psVar8 == 0) {
          psVar7 = (segment_command *)func_0x0127d8ec(pcVar31);
          if ((int)psVar7 < 0x300) {
            psVar6 = psVar7;
            psVar8 = (segment_command *)
                     func_0x012933e8(*(undefined8 *)
                                      (*(long *)((long)register0x00000008 + -0x3bf8) + 0x98),
                                     (undefined1 *)((long)register0x00000008 + -0x3be8));
            if ((int)psVar8 == 0) {
              puVar21 = *(undefined8 **)((long)register0x00000008 + -0x3be8);
              *puVar21 = &UNK_03c7dde0;
              *(int *)(puVar21 + 1) = (int)psVar7;
              *(int *)((long)puVar21 + 0xc) = auVar42._0_4_;
              *(int *)(puVar21 + 2) = (int)pcVar31;
              uVar26 = func_0x0127d9fc(puVar21);
              _memcpy(uVar26,pcVar33,
                      -((ulong)pcVar31 >> 0x1f & 1) & 0xfffffff800000000 |
                      ((ulong)pcVar31 & 0xffffffff) << 3);
              uVar26 = func_0x0127da04(puVar21);
              psVar6 = (segment_command *)
                       (-((ulong)pcVar31 >> 0x1f & 1) & 0xfffffffc00000000 |
                       ((ulong)pcVar31 & 0xffffffff) << 2);
              _memcpy(uVar26,psVar16);
              *(char *)((long)puVar21 + 0x14) = (char)param_5;
              psVar8 = (segment_command *)
                       func_0x01292948(*(undefined8 *)
                                        (*(long *)((long)register0x00000008 + -0x3bf8) + 0x98),
                                       puVar21);
            }
          }
          else {
            psVar8 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
            psVar7 = unaff_x25;
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3bf0));
    unaff_x25 = psVar7;
    if ((int)psVar8 != 0) goto code_r0x01348130;
  }
  else {
    psVar8 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
    param_5 = unaff_x24;
code_r0x01348130:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      param_5 = (segment_command *)((long)register0x00000008 + -0x3be8);
      unaff_x25 = (segment_command *)&section_000000b8.reserved2;
      iVar3 = func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x3be8),0x100,pcVar33);
      pcVar33 = ", ";
      iVar4 = func_0x0135ce6c((long)param_5->segname + (long)iVar3 + -8,0x100 - iVar3,", ");
      unaff_x26 = (long)iVar3 + (long)iVar4;
      iVar3 = func_0x0135d15c((long)param_5->segname + unaff_x26 + -8,0x100 - (int)unaff_x26,psVar16
                             );
      uVar2 = (int)unaff_x26 + iVar3;
      psVar16 = (segment_command *)(ulong)uVar2;
      iVar3 = func_0x0135ce6c((long)param_5->segname + (long)(int)uVar2 + -8,0x100 - uVar2,", ");
      func_0x0135cc94((long)param_5->segname + (long)(int)(uVar2 + iVar3) + -8,
                      0x100 - (uVar2 + iVar3),pcVar31);
      pcVar32 = "EventInstance::setParametersByIDs";
      psVar15 = (segment_command *)((long)register0x00000008 + -0x3be8);
      psVar6 = psVar10;
      func_0x013aa954(psVar8,0xd);
    }
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3ae8)) {
    return psVar8;
  }
  psVar7 = (segment_command *)___stack_chk_fail();
  *(char **)((long)register0x00000008 + -0x3c30) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x3c28) = psVar16;
  *(char **)((long)register0x00000008 + -0x3c20) = pcVar31;
  *(segment_command **)((long)register0x00000008 + -0x3c18) = psVar10;
  *(undefined1 **)((long)register0x00000008 + -0x3c10) =
       (undefined1 *)((long)register0x00000008 + -0x3a90);
  *(undefined **)((long)register0x00000008 + -0x3c08) = &DAT_01348214;
  *(undefined8 *)((long)register0x00000008 + -0x3c38) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x3d40) = 0;
  psVar9 = (segment_command *)
           func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x3d48));
  if ((int)psVar9 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x3d48) + 0x24) >> 1 & 1) == 0) {
      psVar9 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar9 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3d40));
      if ((int)psVar9 == 0) {
        psVar16 = (segment_command *)&MACH_HEADER.ncmds;
        psVar6 = (segment_command *)&MACH_HEADER.ncmds;
        psVar9 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x3d48) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x3d38));
        if ((int)psVar9 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x3d38);
          *puVar21 = &UNK_03c7e3f8;
          *(undefined4 *)(puVar21 + 1) = 0x10;
          *(int *)((long)puVar21 + 0xc) = (int)psVar7;
          psVar9 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x3d48) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3d40));
  if (((int)psVar9 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -0x3d38) = 0;
    pcVar32 = "EventInstance::triggerCue";
    psVar15 = (segment_command *)((long)register0x00000008 + -0x3d38);
    psVar6 = psVar7;
    func_0x013aa954(psVar9,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3c38)) {
    return psVar9;
  }
  auVar42 = ___stack_chk_fail();
  lVar14 = auVar42._8_8_;
  psVar10 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x3da0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x3d98) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x3d90) = param_5;
  *(segment_command **)((long)register0x00000008 + -0x3d88) = psVar8;
  *(char **)((long)register0x00000008 + -0x3d80) = pcVar33;
  *(segment_command **)((long)register0x00000008 + -0x3d78) = psVar16;
  *(segment_command **)((long)register0x00000008 + -0x3d70) = psVar9;
  *(segment_command **)((long)register0x00000008 + -0x3d68) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x3d60) =
       (undefined1 *)((long)register0x00000008 + -0x3c10);
  *(undefined **)((long)register0x00000008 + -0x3d58) = &DAT_0134832c;
  *(undefined8 *)((long)register0x00000008 + -0x3da8) = *(undefined8 *)PTR_03a5d648;
  psVar7 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
  psVar16 = psVar6;
  if ((lVar14 == 0) || (psVar6 == (segment_command *)0x0)) {
code_r0x013483ec:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      psVar8 = (segment_command *)((long)register0x00000008 + -0x3ea8);
      param_5 = (segment_command *)&section_000000b8.reserved2;
      iVar3 = func_0x0135d09c((undefined1 *)((long)register0x00000008 + -0x3ea8),0x100,lVar14);
      lVar14 = (long)iVar3;
      iVar3 = func_0x0135ce6c(psVar8->segname + lVar14 + -8,0x100 - iVar3,", ");
      func_0x0135d09c(psVar8->segname + lVar14 + iVar3 + -8,0x100 - (int)(lVar14 + iVar3),psVar6);
      pcVar32 = "EventInstance::getCPUUsage";
      psVar15 = (segment_command *)((long)register0x00000008 + -0x3ea8);
      psVar16 = psVar10;
      func_0x013aa954(psVar7,0xd);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x3ea8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3ea0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x3e98) = 0;
    psVar7 = (segment_command *)
             func_0x01279100(psVar10,(undefined1 *)((long)register0x00000008 + -0x3ea0));
    if (((int)psVar7 == 0) &&
       ((psVar7 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x3ea8),
                                  *(undefined8 *)((long)register0x00000008 + -0x3ea0)),
        (int)psVar7 == 0 &&
        (psVar7 = (segment_command *)
                  func_0x01279164(psVar10,(undefined1 *)((long)register0x00000008 + -0x3eb0)),
        (int)psVar7 == 0)))) {
      lVar1 = 0;
      if (*(long *)((long)register0x00000008 + -0x3eb0) != 0) {
        lVar1 = *(long *)((long)register0x00000008 + -0x3eb0) + -8;
      }
      *(long *)((long)register0x00000008 + -0x3e98) = lVar1;
      if (*(long *)(lVar1 + 0x10) == 0) {
        psVar7 = (segment_command *)0x0;
      }
      else {
        psVar16 = psVar6;
        psVar7 = (segment_command *)func_0x012e4648(*(long *)(lVar1 + 0x10),lVar14);
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x3ea8));
    if ((int)psVar7 != 0) goto code_r0x013483ec;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3da8)) {
    return psVar7;
  }
  auVar42 = ___stack_chk_fail();
  puVar21 = auVar42._8_8_;
  psVar9 = auVar42._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x3ef0) = param_5;
  *(segment_command **)((long)register0x00000008 + -0x3ee8) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x3ee0) = psVar7;
  *(long *)((long)register0x00000008 + -0x3ed8) = lVar14;
  *(segment_command **)((long)register0x00000008 + -0x3ed0) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x3ec8) = psVar10;
  *(undefined1 **)((long)register0x00000008 + -0x3ec0) =
       (undefined1 *)((long)register0x00000008 + -0x3d60);
  *(undefined **)((long)register0x00000008 + -0x3eb8) = &DAT_013484a8;
  *(undefined8 *)((long)register0x00000008 + -0x3ef8) = *(undefined8 *)PTR_03a5d648;
  if (puVar21 == (undefined8 *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x0134858c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x3ff8),0x100,puVar21);
      pcVar32 = "EventInstance::getChannelGroup";
      psVar15 = (segment_command *)((long)register0x00000008 + -0x3ff8);
      psVar16 = psVar9;
      func_0x013aa954(psVar6,0xd);
    }
  }
  else {
    *puVar21 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4000) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x4008));
    if ((int)psVar6 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x4008) + 0x24) >> 1 & 1) == 0) {
        psVar6 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar6 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4000));
        if ((int)psVar6 == 0) {
          psVar8 = (segment_command *)&MACH_HEADER.flags;
          psVar16 = (segment_command *)&MACH_HEADER.flags;
          psVar6 = (segment_command *)
                   func_0x012933e8(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x4008) + 0x98),
                                   (undefined1 *)((long)register0x00000008 + -0x3ff8));
          if ((int)psVar6 == 0) {
            psVar7 = *(segment_command **)((long)register0x00000008 + -0x3ff8);
            *(undefined **)psVar7 = &UNK_03c7db10;
            psVar7->segname[0] = '\x18';
            psVar7->segname[1] = '\0';
            psVar7->segname[2] = '\0';
            psVar7->segname[3] = '\0';
            *(int *)(psVar7->segname + 4) = auVar42._0_4_;
            psVar6 = (segment_command *)
                     func_0x01292948(*(undefined8 *)
                                      (*(long *)((long)register0x00000008 + -0x4008) + 0x98),psVar7)
            ;
            if ((int)psVar6 == 0) {
              *puVar21 = *(undefined8 *)(psVar7->segname + 8);
            }
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4000));
    if ((int)psVar6 != 0) goto code_r0x0134858c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x3ef8)) {
    return psVar6;
  }
  psVar10 = (segment_command *)___stack_chk_fail();
  *(segment_command **)((long)register0x00000008 + -0x4040) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4038) = psVar6;
  *(undefined8 **)((long)register0x00000008 + -0x4030) = puVar21;
  *(segment_command **)((long)register0x00000008 + -0x4028) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x4020) =
       (undefined1 *)((long)register0x00000008 + -0x3ec0);
  *(undefined **)((long)register0x00000008 + -0x4018) = &DAT_01348604;
  *(undefined8 *)((long)register0x00000008 + -0x4048) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x4150) = 0;
  psVar9 = (segment_command *)
           func_0x01279100(psVar10,(undefined1 *)((long)register0x00000008 + -0x4158));
  if ((int)psVar9 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x4158) + 0x24) >> 1 & 1) == 0) {
      psVar9 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar9 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4150));
      if ((int)psVar9 == 0) {
        psVar6 = (segment_command *)&MACH_HEADER.ncmds;
        psVar16 = (segment_command *)&MACH_HEADER.ncmds;
        psVar9 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x4158) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x4148));
        if ((int)psVar9 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x4148);
          *puVar21 = &UNK_03c7e218;
          *(undefined4 *)(puVar21 + 1) = 0x10;
          *(int *)((long)puVar21 + 0xc) = (int)psVar10;
          psVar9 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x4158) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4150));
  if (((int)psVar9 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -0x4148) = 0;
    pcVar32 = "EventInstance::start";
    psVar15 = (segment_command *)((long)register0x00000008 + -0x4148);
    psVar16 = psVar10;
    func_0x013aa954(psVar9,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4048)) {
    return psVar9;
  }
  auVar42 = ___stack_chk_fail();
  psVar11 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x41a0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x4198) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x4190) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4188) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x4180) = psVar9;
  *(segment_command **)((long)register0x00000008 + -0x4178) = psVar10;
  *(undefined1 **)((long)register0x00000008 + -0x4170) =
       (undefined1 *)((long)register0x00000008 + -0x4020);
  *(undefined **)((long)register0x00000008 + -0x4168) = &DAT_0134871c;
  *(undefined8 *)((long)register0x00000008 + -0x41a8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x42b0) = 0;
  psVar6 = (segment_command *)
           func_0x01279100(psVar11,(undefined1 *)((long)register0x00000008 + -0x42b8));
  if ((int)psVar6 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x42b8) + 0x24) >> 1 & 1) == 0) {
      psVar6 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar6 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x42b0));
      if ((int)psVar6 == 0) {
        psVar7 = (segment_command *)&MACH_HEADER.flags;
        psVar16 = (segment_command *)&MACH_HEADER.flags;
        psVar6 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x42b8) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x42a8));
        if ((int)psVar6 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x42a8);
          *puVar21 = &UNK_03c7e290;
          *(undefined4 *)(puVar21 + 1) = 0x18;
          *(int *)((long)puVar21 + 0xc) = auVar42._0_4_;
          *(int *)(puVar21 + 2) = auVar42._8_4_;
          psVar6 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x42b8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x42b0));
  if (((int)psVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x42a8),0x100,auVar42._8_8_);
    pcVar32 = "EventInstance::stop";
    psVar15 = (segment_command *)((long)register0x00000008 + -0x42a8);
    psVar16 = psVar11;
    func_0x013aa954(psVar6,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x41a8)) {
    return psVar6;
  }
  auVar43 = ___stack_chk_fail();
  puVar27 = auVar43._8_8_;
  psVar9 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x42f0) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x42e8) = psVar6;
  *(long *)((long)register0x00000008 + -0x42e0) = auVar42._8_8_;
  *(segment_command **)((long)register0x00000008 + -0x42d8) = psVar11;
  *(undefined1 **)((long)register0x00000008 + -0x42d0) =
       (undefined1 *)((long)register0x00000008 + -0x4170);
  *(undefined **)((long)register0x00000008 + -0x42c8) = &DAT_01348850;
  *(undefined8 *)((long)register0x00000008 + -0x42f8) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 == (undefined4 *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x0134892c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d05c((undefined1 *)((long)register0x00000008 + -0x43f8),0x100,puVar27);
      pcVar32 = "EventInstance::getTimelinePosition";
      psVar15 = (segment_command *)((long)register0x00000008 + -0x43f8);
      psVar16 = psVar9;
      func_0x013aa954(psVar6,0xd);
    }
  }
  else {
    *puVar27 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x43f8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x43f0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x43e8) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x43f0));
    if ((((int)psVar6 == 0) &&
        (psVar6 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x43f8),
                                  *(undefined8 *)((long)register0x00000008 + -0x43f0)),
        (int)psVar6 == 0)) &&
       (psVar6 = (segment_command *)
                 func_0x01279164(psVar9,(undefined1 *)((long)register0x00000008 + -0x4400)),
       (int)psVar6 == 0)) {
      lVar14 = 0;
      if (*(long *)((long)register0x00000008 + -0x4400) != 0) {
        lVar14 = *(long *)((long)register0x00000008 + -0x4400) + -8;
      }
      *(long *)((long)register0x00000008 + -0x43e8) = lVar14;
      if (*(long *)(lVar14 + 0x10) == 0) {
        psVar6 = (segment_command *)0x0;
        *puVar27 = 0;
      }
      else {
        uVar12 = func_0x012b7f30(*(long *)(lVar14 + 0x10) + 200);
        psVar6 = (segment_command *)0x0;
        *puVar27 = (int)((uVar12 & 0xffffffff) / 0x30);
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x43f8));
    if ((int)psVar6 != 0) goto code_r0x0134892c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x42f8)) {
    return psVar6;
  }
  auVar42 = ___stack_chk_fail();
  psVar10 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x4440) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x4438) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x4430) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4428) = psVar6;
  *(undefined4 **)((long)register0x00000008 + -0x4420) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x4418) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x4410) =
       (undefined1 *)((long)register0x00000008 + -0x42d0);
  *(undefined **)((long)register0x00000008 + -0x4408) = &DAT_013489a0;
  *(undefined8 *)((long)register0x00000008 + -0x4448) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x4550) = 0;
  psVar6 = (segment_command *)
           func_0x01279100(psVar10,(undefined1 *)((long)register0x00000008 + -0x4558));
  if ((int)psVar6 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x4558) + 0x24) >> 1 & 1) == 0) {
      psVar6 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar6 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4550));
      if ((int)psVar6 == 0) {
        psVar7 = (segment_command *)&MACH_HEADER.flags;
        psVar16 = (segment_command *)&MACH_HEADER.flags;
        psVar6 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x4558) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x4548));
        if ((int)psVar6 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x4548);
          *puVar21 = &UNK_03c7e308;
          *(undefined4 *)(puVar21 + 1) = 0x18;
          *(int *)((long)puVar21 + 0xc) = auVar42._0_4_;
          *(int *)(puVar21 + 2) = auVar42._8_4_;
          psVar6 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x4558) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4550));
  if (((int)psVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x4548),0x100,auVar42._8_8_);
    pcVar32 = "EventInstance::setTimelinePosition";
    psVar15 = (segment_command *)((long)register0x00000008 + -0x4548);
    psVar16 = psVar10;
    func_0x013aa954(psVar6,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4448)) {
    return psVar6;
  }
  auVar43 = ___stack_chk_fail();
  puVar27 = auVar43._8_8_;
  psVar9 = auVar43._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x4590) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4588) = psVar6;
  *(long *)((long)register0x00000008 + -0x4580) = auVar42._8_8_;
  *(segment_command **)((long)register0x00000008 + -0x4578) = psVar10;
  *(undefined1 **)((long)register0x00000008 + -0x4570) =
       (undefined1 *)((long)register0x00000008 + -0x4410);
  *(undefined **)((long)register0x00000008 + -0x4568) = &DAT_01348ad4;
  *(undefined8 *)((long)register0x00000008 + -0x4598) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 == (undefined4 *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01348b84:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x4698),0x100,puVar27);
      pcVar32 = "EventInstance::getPlaybackState";
      psVar15 = (segment_command *)((long)register0x00000008 + -0x4698);
      psVar16 = psVar9;
      func_0x013aa954(psVar6,0xd);
    }
  }
  else {
    *puVar27 = 2;
    *(undefined8 *)((long)register0x00000008 + -0x4698) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4690) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4688) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x4690));
    if ((((int)psVar6 == 0) &&
        (psVar6 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4698),
                                  *(undefined8 *)((long)register0x00000008 + -0x4690)),
        (int)psVar6 == 0)) &&
       (psVar6 = (segment_command *)
                 func_0x01279164(psVar9,(undefined1 *)((long)register0x00000008 + -0x46a0)),
       (int)psVar6 == 0)) {
      lVar14 = 0;
      if (*(long *)((long)register0x00000008 + -0x46a0) != 0) {
        lVar14 = *(long *)((long)register0x00000008 + -0x46a0) + -8;
      }
      *(long *)((long)register0x00000008 + -0x4688) = lVar14;
      uVar5 = func_0x012952d8();
      *puVar27 = uVar5;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4698));
    if ((int)psVar6 != 0) goto code_r0x01348b84;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4598)) {
    return psVar6;
  }
  psVar10 = (segment_command *)___stack_chk_fail();
  *(segment_command **)((long)register0x00000008 + -0x46d0) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x46c8) = psVar6;
  *(undefined4 **)((long)register0x00000008 + -0x46c0) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x46b8) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x46b0) =
       (undefined1 *)((long)register0x00000008 + -0x4570);
  *(undefined **)((long)register0x00000008 + -0x46a8) = &DAT_01348bf8;
  *(undefined8 *)((long)register0x00000008 + -0x46d8) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x47e0) = 0;
  psVar9 = (segment_command *)
           func_0x01279100(psVar10,(undefined1 *)((long)register0x00000008 + -0x47e8));
  if ((int)psVar9 == 0) {
    if ((*(byte *)(*(long *)((long)register0x00000008 + -0x47e8) + 0x24) >> 1 & 1) == 0) {
      psVar9 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
    }
    else {
      psVar9 = (segment_command *)
               func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x47e0));
      if ((int)psVar9 == 0) {
        psVar6 = (segment_command *)&MACH_HEADER.ncmds;
        psVar16 = (segment_command *)&MACH_HEADER.ncmds;
        psVar9 = (segment_command *)
                 func_0x012933e8(*(undefined8 *)
                                  (*(long *)((long)register0x00000008 + -0x47e8) + 0x98),
                                 (undefined1 *)((long)register0x00000008 + -0x47d8));
        if ((int)psVar9 == 0) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x47d8);
          *puVar21 = &UNK_03c7e380;
          *(undefined4 *)(puVar21 + 1) = 0x10;
          *(int *)((long)puVar21 + 0xc) = (int)psVar10;
          psVar9 = (segment_command *)
                   func_0x01292948(*(undefined8 *)
                                    (*(long *)((long)register0x00000008 + -0x47e8) + 0x98));
        }
      }
    }
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x47e0));
  if (((int)psVar9 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    *(undefined1 *)((long)register0x00000008 + -0x47d8) = 0;
    pcVar32 = "EventInstance::release";
    psVar15 = (segment_command *)((long)register0x00000008 + -0x47d8);
    psVar16 = psVar10;
    func_0x013aa954(psVar9,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x46d8)) {
    return psVar9;
  }
  auVar42 = ___stack_chk_fail();
  pbVar19 = auVar42._8_8_;
  psVar11 = auVar42._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x4820) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4818) = psVar6;
  *(segment_command **)((long)register0x00000008 + -0x4810) = psVar9;
  *(segment_command **)((long)register0x00000008 + -0x4808) = psVar10;
  *(undefined1 **)((long)register0x00000008 + -0x4800) =
       (undefined1 *)((long)register0x00000008 + -0x46b0);
  *(undefined **)((long)register0x00000008 + -0x47f8) = &DAT_01348d10;
  *(undefined8 *)((long)register0x00000008 + -0x4828) = *(undefined8 *)PTR_03a5d648;
  if (pbVar19 == (byte *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01348dd0:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d1a4((undefined1 *)((long)register0x00000008 + -0x4928),0x100,pbVar19);
      pcVar32 = "EventInstance::isVirtual";
      psVar15 = (segment_command *)((long)register0x00000008 + -0x4928);
      psVar16 = psVar11;
      func_0x013aa954(psVar6,0xd);
    }
  }
  else {
    *pbVar19 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4928) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4920) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4918) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar11,(undefined1 *)((long)register0x00000008 + -0x4920));
    if ((((int)psVar6 == 0) &&
        (psVar6 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4928),
                                  *(undefined8 *)((long)register0x00000008 + -0x4920)),
        (int)psVar6 == 0)) &&
       (psVar6 = (segment_command *)
                 func_0x01279164(psVar11,(undefined1 *)((long)register0x00000008 + -0x4930)),
       (int)psVar6 == 0)) {
      lVar14 = 0;
      if (*(long *)((long)register0x00000008 + -0x4930) != 0) {
        lVar14 = *(long *)((long)register0x00000008 + -0x4930) + -8;
      }
      *(long *)((long)register0x00000008 + -0x4918) = lVar14;
      bVar23 = 0;
      if (*(long *)(lVar14 + 0x10) != 0) {
        bVar23 = *(byte *)(*(long *)(lVar14 + 0x10) + 0x2b0) >> 4 & 1;
      }
      psVar6 = (segment_command *)0x0;
      *pbVar19 = bVar23;
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4928));
    if ((int)psVar6 != 0) goto code_r0x01348dd0;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4828)) {
    return psVar6;
  }
  auVar42 = ___stack_chk_fail();
  uVar26 = auVar42._8_8_;
  psVar9 = auVar42._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x4960) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4958) = psVar6;
  *(byte **)((long)register0x00000008 + -0x4950) = pbVar19;
  *(segment_command **)((long)register0x00000008 + -0x4948) = psVar11;
  *(undefined1 **)((long)register0x00000008 + -0x4940) =
       (undefined1 *)((long)register0x00000008 + -0x4800);
  *(undefined **)((long)register0x00000008 + -0x4938) = &DAT_01348e44;
  *(undefined8 *)((long)register0x00000008 + -0x4968) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x4a68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x4a60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x4a58) = 0;
  psVar6 = (segment_command *)
           func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x4a60));
  if ((((int)psVar6 == 0) &&
      (psVar6 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4a68),
                                *(undefined8 *)((long)register0x00000008 + -0x4a60)),
      (int)psVar6 == 0)) &&
     (psVar6 = (segment_command *)
               func_0x01279164(psVar9,(undefined1 *)((long)register0x00000008 + -0x4a70)),
     (int)psVar6 == 0)) {
    lVar14 = 0;
    if (*(long *)((long)register0x00000008 + -0x4a70) != 0) {
      lVar14 = *(long *)((long)register0x00000008 + -0x4a70) + -8;
    }
    *(long *)((long)register0x00000008 + -0x4a58) = lVar14;
    *(undefined8 *)(lVar14 + 0x30) = uVar26;
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4a68));
  if (((int)psVar6 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x4a68),0x100,uVar26);
    pcVar32 = "EventInstance::setUserData";
    psVar15 = (segment_command *)((long)register0x00000008 + -0x4a68);
    psVar16 = psVar9;
    func_0x013aa954(psVar6,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4968)) {
    return psVar6;
  }
  auVar42 = ___stack_chk_fail();
  puVar21 = auVar42._8_8_;
  psVar10 = auVar42._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x4aa0) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4a98) = psVar6;
  *(undefined8 *)((long)register0x00000008 + -0x4a90) = uVar26;
  *(segment_command **)((long)register0x00000008 + -0x4a88) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x4a80) =
       (undefined1 *)((long)register0x00000008 + -0x4940);
  *(undefined **)((long)register0x00000008 + -0x4a78) = &DAT_01348f4c;
  *(undefined8 *)((long)register0x00000008 + -0x4aa8) = *(undefined8 *)PTR_03a5d648;
  if (puVar21 == (undefined8 *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01348ff8:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x4ba8),0x100,puVar21);
      pcVar32 = "EventInstance::getUserData";
      psVar15 = (segment_command *)((long)register0x00000008 + -0x4ba8);
      psVar16 = psVar10;
      func_0x013aa954(psVar6,0xd);
    }
  }
  else {
    *puVar21 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4ba8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4ba0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4b98) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar10,(undefined1 *)((long)register0x00000008 + -0x4ba0));
    if ((((int)psVar6 == 0) &&
        (psVar6 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4ba8),
                                  *(undefined8 *)((long)register0x00000008 + -0x4ba0)),
        (int)psVar6 == 0)) &&
       (psVar6 = (segment_command *)
                 func_0x01279164(psVar10,(undefined1 *)((long)register0x00000008 + -0x4bb0)),
       (int)psVar6 == 0)) {
      lVar14 = 0;
      if (*(long *)((long)register0x00000008 + -0x4bb0) != 0) {
        lVar14 = *(long *)((long)register0x00000008 + -0x4bb0) + -8;
      }
      *(long *)((long)register0x00000008 + -0x4b98) = lVar14;
      *puVar21 = *(undefined8 *)(lVar14 + 0x30);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4ba8));
    if ((int)psVar6 != 0) goto code_r0x01348ff8;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4aa8)) {
    return psVar6;
  }
  auVar42 = ___stack_chk_fail();
  puVar30 = auVar42._8_8_;
  psVar9 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x4c00) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x4bf8) = unaff_x27;
  *(segment_command **)((long)register0x00000008 + -0x4bf0) = param_5;
  *(segment_command **)((long)register0x00000008 + -0x4be8) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x4be0) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4bd8) = psVar6;
  *(undefined8 **)((long)register0x00000008 + -0x4bd0) = puVar21;
  *(segment_command **)((long)register0x00000008 + -0x4bc8) = psVar10;
  *(undefined1 **)((long)register0x00000008 + -0x4bc0) =
       (undefined1 *)((long)register0x00000008 + -0x4a80);
  *(undefined **)((long)register0x00000008 + -0x4bb8) = &DAT_0134906c;
  *(undefined8 *)((long)register0x00000008 + -0x4c08) = *(undefined8 *)PTR_03a5d648;
  *(undefined8 *)((long)register0x00000008 + -0x4d08) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x4d00) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x4cf8) = 0;
  psVar6 = psVar16;
  psVar7 = (segment_command *)
           func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x4d00));
  if ((((int)psVar7 == 0) &&
      (psVar7 = (segment_command *)
                func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4d08),
                                *(undefined8 *)((long)register0x00000008 + -0x4d00)),
      (int)psVar7 == 0)) &&
     (psVar7 = (segment_command *)
               func_0x01279164(psVar9,(undefined1 *)((long)register0x00000008 + -0x4d10)),
     (int)psVar7 == 0)) {
    lVar14 = 0;
    if (*(long *)((long)register0x00000008 + -0x4d10) != 0) {
      lVar14 = *(long *)((long)register0x00000008 + -0x4d10) + -8;
    }
    *(long *)((long)register0x00000008 + -0x4cf8) = lVar14;
    *(undefined8 **)(lVar14 + 0x78) = puVar30;
    uVar5 = 0;
    if (puVar30 != (undefined8 *)0x0) {
      uVar5 = SUB84(psVar16,0);
    }
    *(undefined4 *)(lVar14 + 0x74) = uVar5;
  }
  func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4d08));
  if (((int)psVar7 != 0) && (*(char *)(lRam0000000003eae058 + 0x10) < '\0')) {
    psVar8 = (segment_command *)((long)register0x00000008 + -0x4d08);
    param_5 = (segment_command *)&section_000000b8.reserved2;
    iVar3 = func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x4d08),0x100,puVar30);
    puVar30 = (undefined8 *)(long)iVar3;
    iVar3 = func_0x0135ce6c((long)puVar30 + (long)(psVar8->segname + -8),0x100 - iVar3,", ");
    func_0x0135cce0(psVar8->segname + (long)puVar30 + (long)iVar3 + -8,
                    0x100 - (int)((long)puVar30 + (long)iVar3),psVar16);
    pcVar32 = "EventInstance::setCallback";
    psVar15 = (segment_command *)((long)register0x00000008 + -0x4d08);
    psVar6 = psVar9;
    func_0x013aa954(psVar7,0xd);
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4c08)) {
    return psVar7;
  }
  auVar42 = ___stack_chk_fail();
  puVar21 = auVar42._8_8_;
  psVar10 = auVar42._0_8_;
  *(undefined8 **)((long)register0x00000008 + -0x4d40) = puVar30;
  *(segment_command **)((long)register0x00000008 + -0x4d38) = psVar7;
  *(segment_command **)((long)register0x00000008 + -0x4d30) = psVar16;
  *(segment_command **)((long)register0x00000008 + -0x4d28) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x4d20) =
       (undefined1 *)((long)register0x00000008 + -0x4bc0);
  *(undefined **)((long)register0x00000008 + -0x4d18) = &DAT_013491cc;
  *(undefined8 *)((long)register0x00000008 + -0x4d48) = *(undefined8 *)PTR_03a5d648;
  if (puVar21 == (undefined8 *)0x0) {
    psVar16 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x0134927c:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x4e48),0x100,puVar21);
      pcVar32 = "EventInstance::getMemoryUsage";
      psVar15 = (segment_command *)((long)register0x00000008 + -0x4e48);
      psVar6 = psVar10;
      func_0x013aa954(psVar16,0xd);
    }
  }
  else {
    *(undefined4 *)(puVar21 + 1) = 0;
    *puVar21 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4e48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4e40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x4e38) = 0;
    psVar16 = (segment_command *)
              func_0x01279100(psVar10,(undefined1 *)((long)register0x00000008 + -0x4e40));
    if ((((int)psVar16 == 0) &&
        (psVar16 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4e48),
                                   *(undefined8 *)((long)register0x00000008 + -0x4e40)),
        (int)psVar16 == 0)) &&
       (psVar16 = (segment_command *)
                  func_0x01279164(psVar10,(undefined1 *)((long)register0x00000008 + -0x4e50)),
       (int)psVar16 == 0)) {
      lVar14 = 0;
      if (*(long *)((long)register0x00000008 + -0x4e50) != 0) {
        lVar14 = *(long *)((long)register0x00000008 + -0x4e50) + -8;
      }
      *(long *)((long)register0x00000008 + -0x4e38) = lVar14;
      psVar16 = (segment_command *)func_0x012957f8(lVar14,puVar21);
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4e48));
    if ((int)psVar16 != 0) goto code_r0x0134927c;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4d48)) {
    return psVar16;
  }
  auVar42 = ___stack_chk_fail();
  puVar27 = auVar42._8_8_;
  psVar7 = auVar42._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x4e90) = param_5;
  *(segment_command **)((long)register0x00000008 + -0x4e88) = psVar8;
  *(undefined8 **)((long)register0x00000008 + -0x4e80) = puVar30;
  *(segment_command **)((long)register0x00000008 + -0x4e78) = psVar16;
  *(undefined8 **)((long)register0x00000008 + -0x4e70) = puVar21;
  *(segment_command **)((long)register0x00000008 + -0x4e68) = psVar10;
  *(undefined1 **)((long)register0x00000008 + -0x4e60) =
       (undefined1 *)((long)register0x00000008 + -0x4d20);
  *(undefined **)((long)register0x00000008 + -0x4e58) = &DAT_013492f0;
  *(undefined8 *)((long)register0x00000008 + -0x4e98) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 == (undefined4 *)0x0) {
    psVar16 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x013493d8:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x4f98),0x100,puVar27);
      pcVar32 = "Bank::getSampleLoadingState";
      psVar15 = (segment_command *)((long)register0x00000008 + -0x4f98);
      psVar6 = psVar7;
      func_0x013aa954(psVar16,0x11);
    }
  }
  else {
    *puVar27 = 1;
    *(undefined8 *)((long)register0x00000008 + -0x4fa0) = 0;
    psVar16 = (segment_command *)
              func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x4fa8));
    if ((int)psVar16 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x4fa8) + 0x24) >> 1 & 1) == 0) {
        psVar16 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar16 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x4fa0));
        if ((int)psVar16 == 0) {
          psVar8 = (segment_command *)&MACH_HEADER.flags;
          psVar6 = (segment_command *)&MACH_HEADER.flags;
          psVar16 = (segment_command *)
                    func_0x012933e8(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x4fa8) + 0x98),
                                    (undefined1 *)((long)register0x00000008 + -0x4f98));
          if ((int)psVar16 == 0) {
            puVar30 = *(undefined8 **)((long)register0x00000008 + -0x4f98);
            *puVar30 = &UNK_03c7d0c0;
            *(undefined4 *)(puVar30 + 1) = 0x18;
            *(int *)((long)puVar30 + 0xc) = auVar42._0_4_;
            psVar16 = (segment_command *)
                      func_0x01292948(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x4fa8) + 0x98),
                                      puVar30);
            if ((int)psVar16 == 0) {
              *puVar27 = *(undefined4 *)(puVar30 + 2);
            }
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x4fa0));
    if ((int)psVar16 != 0) goto code_r0x013493d8;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4e98)) {
    return psVar16;
  }
  auVar42 = ___stack_chk_fail();
  puVar20 = auVar42._8_8_;
  psVar9 = auVar42._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x4ff0) = param_5;
  *(segment_command **)((long)register0x00000008 + -0x4fe8) = psVar8;
  *(undefined8 **)((long)register0x00000008 + -0x4fe0) = puVar30;
  *(segment_command **)((long)register0x00000008 + -0x4fd8) = psVar16;
  *(undefined4 **)((long)register0x00000008 + -0x4fd0) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x4fc8) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x4fc0) =
       (undefined1 *)((long)register0x00000008 + -0x4e60);
  *(undefined **)((long)register0x00000008 + -0x4fb8) = &DAT_01349450;
  *(undefined8 *)((long)register0x00000008 + -0x4ff8) = *(undefined8 *)PTR_03a5d648;
  if (puVar20 == (undefined4 *)0x0) {
    psVar16 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x01349550:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d2d4((undefined1 *)((long)register0x00000008 + -0x50f8),0x100,puVar20);
      pcVar32 = "Bank::getLoadingState";
      psVar15 = (segment_command *)((long)register0x00000008 + -0x50f8);
      psVar6 = psVar9;
      func_0x013aa954(psVar16,0x11);
    }
  }
  else {
    *puVar20 = 1;
    *(undefined8 *)((long)register0x00000008 + -0x5100) = 0;
    psVar16 = (segment_command *)
              func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x5108));
    if ((int)psVar16 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x5108) + 0x24) >> 1 & 1) == 0) {
        psVar16 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar16 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x5100));
        if ((int)psVar16 == 0) {
          psVar8 = (segment_command *)&MACH_HEADER.flags;
          psVar6 = (segment_command *)&MACH_HEADER.flags;
          psVar16 = (segment_command *)
                    func_0x012933e8(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x5108) + 0x98),
                                    (undefined1 *)((long)register0x00000008 + -0x50f8));
          if ((int)psVar16 == 0) {
            puVar30 = *(undefined8 **)((long)register0x00000008 + -0x50f8);
            *puVar30 = &UNK_03c7d048;
            *(undefined4 *)(puVar30 + 1) = 0x18;
            *(int *)((long)puVar30 + 0xc) = auVar42._0_4_;
            psVar16 = (segment_command *)
                      func_0x01292948(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x5108) + 0x98),
                                      puVar30);
            if ((int)psVar16 == 0) {
              *puVar20 = *(undefined4 *)(puVar30 + 2);
              if (*(int *)(puVar30 + 2) == 4) {
                psVar16 = (segment_command *)(ulong)*(uint *)((long)puVar30 + 0x14);
              }
              else {
                psVar16 = (segment_command *)0x0;
              }
            }
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x5100));
    if ((int)psVar16 != 0) goto code_r0x01349550;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x4ff8)) {
    return psVar16;
  }
  auVar42 = ___stack_chk_fail();
  puVar21 = auVar42._8_8_;
  psVar7 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x5150) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x5148) = unaff_x27;
  *(undefined8 **)((long)register0x00000008 + -0x5140) = puVar30;
  *(segment_command **)((long)register0x00000008 + -0x5138) = psVar16;
  *(undefined4 **)((long)register0x00000008 + -0x5130) = puVar20;
  *(segment_command **)((long)register0x00000008 + -0x5128) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x5120) =
       (undefined1 *)((long)register0x00000008 + -0x4fc0);
  *(undefined **)((long)register0x00000008 + -0x5118) = &DAT_013495c8;
  *(undefined8 *)((long)register0x00000008 + -0x5158) = *(undefined8 *)PTR_03a5d648;
  if (puVar21 == (undefined8 *)0x0) {
    psVar16 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x013496a0:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d254((undefined1 *)((long)register0x00000008 + -0x5258),0x100,puVar21);
      pcVar32 = "Bank::getID";
      psVar15 = (segment_command *)((long)register0x00000008 + -0x5258);
      psVar6 = psVar7;
      func_0x013aa954(psVar16,0x11);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x5258) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x5250) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x5248) = 0;
    psVar16 = (segment_command *)
              func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x5250));
    puVar30 = puVar21;
    if ((((int)psVar16 == 0) &&
        (psVar16 = (segment_command *)
                   func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x5258),
                                   *(undefined8 *)((long)register0x00000008 + -0x5250)),
        (int)psVar16 == 0)) &&
       (psVar16 = (segment_command *)
                  func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x5260)),
       (int)psVar16 == 0)) {
      lVar14 = *(long *)((long)register0x00000008 + -0x5260);
      *(long *)((long)register0x00000008 + -0x5248) = lVar14;
      if (*(int *)(lVar14 + 0x34) == 0) {
        psVar16 = (segment_command *)0x0;
        uVar26 = *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x10);
        puVar21[1] = *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x18);
        *puVar21 = uVar26;
        puVar30 = (undefined8 *)0x0;
      }
      else {
        psVar16 = (segment_command *)(segment_command_00000020.segname + 6);
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x5258));
    if (puVar30 != (undefined8 *)0x0) {
      *puVar30 = 0;
      puVar30[1] = 0;
    }
    if ((int)psVar16 != 0) goto code_r0x013496a0;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x5158)) {
    return psVar16;
  }
  auVar42 = ___stack_chk_fail();
  pcVar31 = auVar42._8_8_;
  psVar9 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x52c0) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x52b8) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x52b0) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x52a8) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x52a0) = param_5;
  *(segment_command **)((long)register0x00000008 + -0x5298) = psVar8;
  *(undefined8 **)((long)register0x00000008 + -0x5290) = puVar30;
  *(segment_command **)((long)register0x00000008 + -0x5288) = psVar16;
  *(undefined8 **)((long)register0x00000008 + -0x5280) = puVar21;
  *(segment_command **)((long)register0x00000008 + -0x5278) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x5270) =
       (undefined1 *)((long)register0x00000008 + -0x5120);
  *(undefined **)((long)register0x00000008 + -0x5268) = &DAT_01349718;
  *(undefined8 *)((long)register0x00000008 + -0x52c8) = *(undefined8 *)PTR_03a5d648;
  if ((segment_command *)pcVar31 != (segment_command *)0x0) {
    *(char *)&((segment_command *)pcVar31)->cmd = '\0';
  }
  if ((segment_command *)pcVar32 != (segment_command *)0x0) {
    ((segment_command *)pcVar32)->cmd = 0;
  }
  psVar8 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
  psVar16 = psVar6;
  pcVar33 = pcVar32;
  if (((int)psVar6 < 0) ||
     ((segment_command *)pcVar31 == (segment_command *)0x0 && (int)psVar6 != 0)) {
code_r0x013497f4:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      param_5 = (segment_command *)((long)register0x00000008 + -0x53c8);
      unaff_x25 = (segment_command *)&section_000000b8.reserved2;
      iVar3 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + -0x53c8),0x100,pcVar31);
      pcVar31 = ", ";
      iVar4 = func_0x0135ce6c((long)param_5->segname + (long)iVar3 + -8,0x100 - iVar3,", ");
      unaff_x26 = (long)iVar3 + (long)iVar4;
      iVar3 = func_0x0135cc94((long)param_5->segname + unaff_x26 + -8,0x100 - (int)unaff_x26,psVar6)
      ;
      uVar2 = (int)unaff_x26 + iVar3;
      psVar6 = (segment_command *)(ulong)uVar2;
      iVar3 = func_0x0135ce6c((long)param_5->segname + (long)(int)uVar2 + -8,0x100 - uVar2,", ");
      func_0x0135d05c((long)param_5->segname + (long)(int)(uVar2 + iVar3) + -8,
                      0x100 - (uVar2 + iVar3),pcVar32);
      pcVar33 = "Bank::getPath";
      psVar15 = (segment_command *)((long)register0x00000008 + -0x53c8);
      psVar16 = psVar9;
      func_0x013aa954(psVar8,0x11,psVar9);
    }
  }
  else {
    *(undefined8 *)((long)register0x00000008 + -0x53c8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x53c0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x53b8) = 0;
    psVar8 = (segment_command *)
             func_0x01279100(psVar9,(undefined1 *)((long)register0x00000008 + -0x53c0));
    if (((int)psVar8 == 0) &&
       ((psVar8 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x53c8),
                                  *(undefined8 *)((long)register0x00000008 + -0x53c0)),
        (int)psVar8 == 0 &&
        (psVar8 = (segment_command *)
                  func_0x01279164(psVar9,(undefined1 *)((long)register0x00000008 + -0x53e0)),
        (int)psVar8 == 0)))) {
      lVar14 = *(long *)((long)register0x00000008 + -0x53e0);
      *(long *)((long)register0x00000008 + -0x53b8) = lVar14;
      if (*(int *)(lVar14 + 0x34) == 0) {
        uVar26 = *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x10);
        *(undefined8 *)((long)register0x00000008 + -0x53d8) =
             *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x18);
        *(undefined8 *)((long)register0x00000008 + -0x53e0) = uVar26;
        psVar16 = (segment_command *)pcVar31;
        pcVar33 = (char *)psVar6;
        psVar15 = (segment_command *)pcVar32;
        psVar8 = (segment_command *)
                 func_0x013145c8(*(undefined8 *)((long)register0x00000008 + -0x53c0),
                                 (undefined1 *)((long)register0x00000008 + -0x53e0),pcVar31);
      }
      else {
        psVar8 = (segment_command *)(segment_command_00000020.segname + 6);
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x53c8));
    if ((int)psVar8 != 0) goto code_r0x013497f4;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x52c8)) {
    return psVar8;
  }
  auVar42 = ___stack_chk_fail();
  puVar27 = auVar42._8_8_;
  psVar7 = auVar42._0_8_;
  *(segment_command **)((long)register0x00000008 + -0x5410) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x5408) = psVar6;
  *(char **)((long)register0x00000008 + -0x5400) = pcVar32;
  *(segment_command **)((long)register0x00000008 + -0x53f8) = psVar9;
  *(undefined1 **)((long)register0x00000008 + -0x53f0) =
       (undefined1 *)((long)register0x00000008 + -0x5270);
  *(undefined **)((long)register0x00000008 + -0x53e8) = &DAT_01349900;
  *(undefined8 *)((long)register0x00000008 + -0x5418) = *(undefined8 *)PTR_03a5d648;
  if (puVar27 == (undefined4 *)0x0) {
    psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
code_r0x013499c8:
    if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
      func_0x0135d05c((undefined1 *)((long)register0x00000008 + -0x5518),0x100,puVar27);
      pcVar33 = "Bank::getStringCount";
      psVar15 = (segment_command *)((long)register0x00000008 + -0x5518);
      psVar16 = psVar7;
      func_0x013aa954(psVar6,0x11,psVar7);
    }
  }
  else {
    *puVar27 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x5520) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(psVar7,(undefined1 *)((long)register0x00000008 + -0x5528));
    if ((int)psVar6 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x5528) + 0x24) >> 1 & 1) == 0) {
        psVar6 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar6 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x5520));
        if (((int)psVar6 == 0) &&
           (psVar6 = (segment_command *)
                     func_0x01279164(psVar7,(undefined1 *)((long)register0x00000008 + -0x5518)),
           (int)psVar6 == 0)) {
          if (*(int *)(*(long *)((long)register0x00000008 + -0x5518) + 0x34) == 0) {
            lVar14 = *(long *)(*(long *)(*(long *)((long)register0x00000008 + -0x5518) + 0x18) +
                              0x2c8);
            uVar5 = 0;
            if (lVar14 != 0) {
              uVar5 = *(undefined4 *)(lVar14 + 0x18);
            }
            psVar6 = (segment_command *)0x0;
            *puVar27 = uVar5;
          }
          else {
            psVar6 = (segment_command *)(segment_command_00000020.segname + 6);
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x5520));
    if ((int)psVar6 != 0) goto code_r0x013499c8;
  }
  if (*(long *)PTR_03a5d648 == *(long *)((long)register0x00000008 + -0x5418)) {
    return psVar6;
  }
  auVar42 = ___stack_chk_fail();
  uVar26 = auVar42._0_8_;
  *(long *)((long)register0x00000008 + -0x5590) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x5588) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x5580) = unaff_x26;
  *(segment_command **)((long)register0x00000008 + -0x5578) = unaff_x25;
  *(segment_command **)((long)register0x00000008 + -0x5570) = param_5;
  *(char **)((long)register0x00000008 + -0x5568) = pcVar31;
  *(segment_command **)((long)register0x00000008 + -0x5560) = psVar8;
  *(segment_command **)((long)register0x00000008 + -0x5558) = psVar6;
  *(undefined4 **)((long)register0x00000008 + -0x5550) = puVar27;
  *(segment_command **)((long)register0x00000008 + -0x5548) = psVar7;
  *(undefined1 **)((long)register0x00000008 + -0x5540) =
       (undefined1 *)((long)register0x00000008 + -0x53f0);
  *(undefined **)((long)register0x00000008 + -0x5538) = &DAT_01349a3c;
  *(undefined8 *)((long)register0x00000008 + -0x55a0) = *(undefined8 *)PTR_03a5d648;
  if ((segment_command *)pcVar33 != (segment_command *)0x0) {
    *(char *)&((segment_command *)pcVar33)->cmd = '\0';
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
  if ((-1 < (int)psVar15) &&
     ((segment_command *)pcVar33 != (segment_command *)0x0 || (int)psVar15 == 0)) {
    *(undefined8 *)((long)register0x00000008 + -0x56a8) = 0;
    psVar6 = (segment_command *)
             func_0x01279100(uVar26,(undefined1 *)((long)register0x00000008 + -0x56b0));
    if ((int)psVar6 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x56b0) + 0x24) >> 1 & 1) == 0) {
        psVar6 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar6 = (segment_command *)
                 func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x56a8));
        if (((int)psVar6 == 0) &&
           (psVar6 = (segment_command *)
                     func_0x01279164(uVar26,(undefined1 *)((long)register0x00000008 + -0x56a0)),
           (int)psVar6 == 0)) {
          if (*(int *)(*(long *)((long)register0x00000008 + -0x56a0) + 0x34) == 0) {
            lVar14 = *(long *)(*(long *)(*(long *)((long)register0x00000008 + -0x56a0) + 0x18) +
                              0x2c8);
            if (lVar14 == 0) {
              psVar6 = (segment_command *)((long)&MACH_HEADER.reserved + 3);
            }
            else {
              psVar6 = (segment_command *)
                       func_0x012472b8(lVar14,auVar42._8_8_,psVar16,pcVar33,psVar15,param_6);
            }
          }
          else {
            psVar6 = (segment_command *)(segment_command_00000020.segname + 6);
          }
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x56a8));
    if ((int)psVar6 == 0) goto code_r0x01349c18;
  }
  if (*(char *)(lRam0000000003eae058 + 0x10) < '\0') {
    unaff_x27 = 0x100;
    iVar3 = func_0x0135cc94((undefined1 *)((long)register0x00000008 + -0x56a0),0x100,auVar42._8_8_);
    iVar4 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + (long)iVar3 + -0x56a0),
                            0x100 - iVar3,", ");
    unaff_x28 = (long)iVar3 + (long)iVar4;
    iVar3 = func_0x0135d254((undefined1 *)((long)register0x00000008 + unaff_x28 + -0x56a0),
                            0x100 - (int)unaff_x28,psVar16);
    iVar3 = (int)unaff_x28 + iVar3;
    iVar4 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + (long)iVar3 + -0x56a0),
                            0x100 - iVar3,", ");
    iVar3 = iVar3 + iVar4;
    iVar4 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + (long)iVar3 + -0x56a0),
                            0x100 - iVar3,pcVar33);
    iVar3 = iVar3 + iVar4;
    iVar4 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + (long)iVar3 + -0x56a0),
                            0x100 - iVar3,", ");
    uVar2 = iVar3 + iVar4;
    pcVar33 = (char *)(ulong)uVar2;
    iVar3 = func_0x0135cc94((undefined1 *)((long)register0x00000008 + (long)(int)uVar2 + -0x56a0),
                            0x100 - uVar2,psVar15);
    uVar2 = uVar2 + iVar3;
    psVar15 = (segment_command *)(ulong)uVar2;
    iVar3 = func_0x0135ce6c((undefined1 *)((long)register0x00000008 + (long)(int)uVar2 + -0x56a0),
                            0x100 - uVar2,", ");
    func_0x0135d05c((undefined1 *)((long)register0x00000008 + (long)(int)(uVar2 + iVar3) + -0x56a0),
                    0x100 - (uVar2 + iVar3),param_6);
    func_0x013aa954(psVar6,0x11,uVar26,"Bank::getStringInfo",
                    (undefined1 *)((long)register0x00000008 + -0x56a0));
  }
code_r0x01349c18:
  if (*(long *)PTR_03a5d648 != *(long *)((long)register0x00000008 + -0x55a0)) {
    uVar13 = ___stack_chk_fail();
    *(long *)((long)register0x00000008 + -0x56e0) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x56d8) = unaff_x27;
    *(undefined4 **)((long)register0x00000008 + -0x56d0) = param_6;
    *(undefined8 *)((long)register0x00000008 + -0x56c8) = uVar26;
    *(undefined1 **)((long)register0x00000008 + -0x56c0) =
         (undefined1 *)((long)register0x00000008 + -0x5540);
    *(undefined **)((long)register0x00000008 + -0x56b8) = &DAT_01349c88;
    *(undefined8 *)((long)register0x00000008 + -0x56e8) = *(undefined8 *)PTR_03a5d648;
    *(char **)((long)register0x00000008 + -0x5820) = pcVar33;
    *(segment_command **)((long)register0x00000008 + -0x5818) = psVar15;
    *(undefined8 *)((long)register0x00000008 + -0x5810) = uVar13;
    *(undefined8 *)((long)register0x00000008 + -0x5808) = uVar26;
    *(undefined1 **)((long)register0x00000008 + -0x5800) =
         (undefined1 *)((long)register0x00000008 + -0x56c0);
    *(undefined **)((long)register0x00000008 + -0x57f8) = &UNK_01349cb4;
    *(undefined8 *)((long)register0x00000008 + -0x5830) = 0;
    psVar15 = (segment_command *)
              func_0x01279100(uVar13,(undefined1 *)((long)register0x00000008 + -0x5838));
    if ((int)psVar15 == 0) {
      if ((*(byte *)(*(long *)((long)register0x00000008 + -0x5838) + 0x24) >> 1 & 1) == 0) {
        psVar15 = (segment_command *)((long)&segment_command_00000020.fileoff + 3);
      }
      else {
        psVar15 = (segment_command *)
                  func_0x0127a71c((undefined1 *)((long)register0x00000008 + -0x5830));
        if (((int)psVar15 == 0) &&
           (psVar15 = (segment_command *)
                      func_0x012933e8(*(undefined8 *)
                                       (*(long *)((long)register0x00000008 + -0x5838) + 0x98),
                                      (undefined1 *)((long)register0x00000008 + -0x5828),0x10),
           (int)psVar15 == 0)) {
          puVar21 = *(undefined8 **)((long)register0x00000008 + -0x5828);
          *puVar21 = &UNK_03c7d228;
          *(undefined4 *)(puVar21 + 1) = 0x10;
          *(int *)((long)puVar21 + 0xc) = (int)uVar13;
          psVar15 = (segment_command *)
                    func_0x01292948(*(undefined8 *)
                                     (*(long *)((long)register0x00000008 + -0x5838) + 0x98));
        }
      }
    }
    func_0x0127a76c((undefined1 *)((long)register0x00000008 + -0x5830));
    return psVar15;
  }
  return psVar6;
}



// ============================================================
// RVA: 0x1472528 | Atlas.Audio.AudioTrigger.StopReverb
// ============================================================

void Atlas_Audio_AudioTrigger__StopReverb(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  iVar1 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(&uStack_18,0);
  if (iVar1 != 0) {
    /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(&uStack_18,1,0);
  }
  return;
}



// ============================================================
// RVA: 0x1472564 | Atlas.Audio.AudioTrigger.CalcDoppler
// ============================================================

long Atlas_Audio_AudioTrigger__CalcDoppler
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  uVar6 = param_2;
  uVar9 = param_3;
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
  if (lVar2 == 0) {
    lVar2 = func_0x00f78af4();
    if ((bRam0000000003eb487c & 1) == 0) {
      func_0x00f78a20(0x3d72c30);
      func_0x00f78a20(0x3d68d38);
      func_0x00f78a20(0x3d65d08);
      func_0x00f78a20(0x3d78f98);
      func_0x00f78a20(0x3d6bdf8);
      func_0x00f78a20(0x3d7b8b8);
      bRam0000000003eb487c = 1;
    }
    uVar3 = /*STR('event:/SenseOfSpeed/SoS_Whooshes_01')*/ uRam0000000003d78f98;
    *(undefined8 *)(lVar2 + 0x18) = /*STR('DopplerSpeed')*/ uRam0000000003d6bdf8;
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    uVar3 = /*STR('snapshot:/Reverbs/')*/ uRam0000000003d7b8b8;
    *(undefined8 *)(lVar2 + 0x28) = /*STR('Ambiences/Crowd')*/ uRam0000000003d68d38;
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
    *(undefined8 *)(lVar2 + 0x38) = /*STR('Speed')*/ uRam0000000003d72c30;
    *(undefined4 *)(lVar2 + 0x40) = 0x437a0000;
    uVar3 = /*STR('')*/ uRam0000000003d65d08;
    *(undefined8 *)(lVar2 + 0x48) = /*STR('')*/ uRam0000000003d65d08;
    *(undefined8 *)(lVar2 + 0x58) = uVar3;
    *(undefined4 *)(lVar2 + 100) = 0x3f800000;
    uVar4 = /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    *(undefined4 *)(lVar2 + 0x6c) = uVar4;
    *(undefined4 *)(lVar2 + 0x70) = uVar6;
    *(undefined4 *)(lVar2 + 0x74) = uVar9;
    *(undefined4 *)(lVar2 + 0x80) = 1;
    uVar4 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar2 + 0x84) = uVar4;
    *(undefined4 *)(lVar2 + 0x88) = uVar6;
    *(undefined4 *)(lVar2 + 0x8c) = uVar9;
    *(undefined4 *)(lVar2 + 0x90) = 0x3e99999a;
    *(undefined4 *)(lVar2 + 0x98) = 0x3f800000;
    *(undefined1 *)(lVar2 + 0x9c) = 1;
    *(undefined4 *)(lVar2 + 0xa0) = 0x43fa0000;
    uVar3 = NEON_fmov(0x3f800000,4);
    *(undefined4 *)(lVar2 + 0xc0) = 0xbf800000;
    *(undefined8 *)(lVar2 + 0xd0) = uVar3;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar2;
  }
  uVar4 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0);
  fVar5 = (float)/*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(param_1,param_2,param_3,uVar4,uVar6,uVar9,0);
  fVar7 = *(float *)(param_5 + 0xcc);
  *(float *)(param_5 + 0xcc) = fVar5;
  lVar2 = *(long *)(param_5 + 0xb0);
  if (lVar2 != 0) {
    fVar8 = *(float *)(param_5 + 0x98);
    uVar3 = *(undefined8 *)(param_5 + 0x18);
    iVar1 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar2 + 0x28,0,0,0);
    if (iVar1 != 0) {
      /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(((fVar7 - fVar5) / param_4) * fVar8,lVar2 + 0x28,uVar3,0,0);
    }
    return lVar2;
  }
  return 0;
}



// ============================================================
// RVA: 0x1472618 | Atlas.Audio.AudioTrigger..ctor
// ============================================================

undefined1  [16]
Atlas_Audio_AudioTrigger___ctor
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb487c & 1) == 0) {
    func_0x00f78a20(0x3d72c30);
    func_0x00f78a20(0x3d68d38);
    func_0x00f78a20(0x3d65d08);
    func_0x00f78a20(0x3d78f98);
    func_0x00f78a20(0x3d6bdf8);
    func_0x00f78a20(0x3d7b8b8);
    bRam0000000003eb487c = 1;
  }
  uVar2 = /*STR('event:/SenseOfSpeed/SoS_Whooshes_01')*/ uRam0000000003d78f98;
  *(undefined8 *)(param_4 + 0x18) = /*STR('DopplerSpeed')*/ uRam0000000003d6bdf8;
  *(undefined8 *)(param_4 + 0x20) = uVar2;
  uVar2 = /*STR('snapshot:/Reverbs/')*/ uRam0000000003d7b8b8;
  *(undefined8 *)(param_4 + 0x28) = /*STR('Ambiences/Crowd')*/ uRam0000000003d68d38;
  *(undefined8 *)(param_4 + 0x30) = uVar2;
  *(undefined8 *)(param_4 + 0x38) = /*STR('Speed')*/ uRam0000000003d72c30;
  *(undefined4 *)(param_4 + 0x40) = 0x437a0000;
  uVar2 = /*STR('')*/ uRam0000000003d65d08;
  *(undefined8 *)(param_4 + 0x48) = /*STR('')*/ uRam0000000003d65d08;
  *(undefined8 *)(param_4 + 0x58) = uVar2;
  *(undefined4 *)(param_4 + 100) = 0x3f800000;
  uVar1 = /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  *(undefined4 *)(param_4 + 0x6c) = uVar1;
  *(undefined4 *)(param_4 + 0x70) = param_2;
  *(undefined4 *)(param_4 + 0x74) = param_3;
  *(undefined4 *)(param_4 + 0x80) = 1;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x84) = uVar1;
  *(undefined4 *)(param_4 + 0x88) = param_2;
  *(undefined4 *)(param_4 + 0x8c) = param_3;
  *(undefined4 *)(param_4 + 0x90) = 0x3e99999a;
  *(undefined4 *)(param_4 + 0x98) = 0x3f800000;
  *(undefined1 *)(param_4 + 0x9c) = 1;
  *(undefined4 *)(param_4 + 0xa0) = 0x43fa0000;
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(param_4 + 0xc0) = 0xbf800000;
  *(undefined8 *)(param_4 + 0xd0) = uVar2;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_4;
  return auVar3;
}



