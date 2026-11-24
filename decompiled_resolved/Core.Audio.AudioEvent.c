// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Audio.AudioEvent

// ============================================================
// RVA: 0x1638668 | Core.Audio.AudioEvent.get_EventInstance
// ============================================================

undefined8 Core_Audio_AudioEvent__get_EventInstance(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1638670 | Core.Audio.AudioEvent.get_EventDescription
// ============================================================

undefined8 Core_Audio_AudioEvent__get_EventDescription(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1638678 | Core.Audio.AudioEvent..ctor
// ============================================================

void Core_Audio_AudioEvent___ctor(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x31) = 1;
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1638690 | Core.Audio.AudioEvent..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x01638798: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163879c) */
/* WARNING: Removing unreachable block (ram,0x016387b0) */
/* WARNING: Removing unreachable block (ram,0x016387d0) */
/* WARNING: Removing unreachable block (ram,0x016387d8) */
/* WARNING: Removing unreachable block (ram,0x016387dc) */
/* WARNING: Removing unreachable block (ram,0x01638828) */
/* WARNING: Removing unreachable block (ram,0x0163880c) */
/* WARNING: Removing unreachable block (ram,0x01638808) */

void Core_Audio_AudioEvent___ctor(long param_1,long param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x31) = 1;
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  if ((bRam0000000003eb56a9 & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d78f40);
    func_0x00f78a20(0x3d78f38);
    bRam0000000003eb56a9 = 1;
  }
  if (param_2 == 0) {
    param_1 = func_0x00f78af4();
  }
  else {
    uVar1 = /*System.String$$Contains*/ func_0x029cd7a4(param_2,/*STR('event:')*/ uRam0000000003d78f38,0);
    if ((uVar1 & 1) == 0) {
      param_2 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('event:/')*/ uRam0000000003d78f40,param_2,0);
    }
    *(long *)(param_1 + 0x10) = param_2;
    *(char *)(param_1 + 0x18) = (char)param_3;
    if (param_3 == 0) {
      return;
    }
  }
  if ((bRam0000000003eb56af & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56af = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*FMODUnity.RuntimeManager$$GetEventDescription*/ func_0x016ebd84(uVar2,0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



// ============================================================
// RVA: 0x16386e8 | Core.Audio.AudioEvent.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x01638798: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163879c) */
/* WARNING: Removing unreachable block (ram,0x016387b0) */
/* WARNING: Removing unreachable block (ram,0x016387d0) */
/* WARNING: Removing unreachable block (ram,0x016387d8) */
/* WARNING: Removing unreachable block (ram,0x016387dc) */
/* WARNING: Removing unreachable block (ram,0x01638828) */
/* WARNING: Removing unreachable block (ram,0x0163880c) */
/* WARNING: Removing unreachable block (ram,0x01638808) */

void Core_Audio_AudioEvent__Init(long param_1,long param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb56a9 & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d78f40);
    func_0x00f78a20(0x3d78f38);
    bRam0000000003eb56a9 = 1;
  }
  if (param_2 == 0) {
    param_1 = func_0x00f78af4();
  }
  else {
    uVar1 = /*System.String$$Contains*/ func_0x029cd7a4(param_2,/*STR('event:')*/ uRam0000000003d78f38,0);
    if ((uVar1 & 1) == 0) {
      param_2 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('event:/')*/ uRam0000000003d78f40,param_2,0);
    }
    *(long *)(param_1 + 0x10) = param_2;
    *(char *)(param_1 + 0x18) = (char)param_3;
    if (param_3 == 0) {
      return;
    }
  }
  if ((bRam0000000003eb56af & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56af = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*FMODUnity.RuntimeManager$$GetEventDescription*/ func_0x016ebd84(uVar2,0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  return;
}



// ============================================================
// RVA: 0x1638850 | Core.Audio.AudioEvent.Lookup
// ============================================================

void Core_Audio_AudioEvent__Lookup(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb56af & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56af = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*FMODUnity.RuntimeManager$$GetEventDescription*/ func_0x016ebd84(uVar1,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1638948 | Core.Audio.AudioEvent.DeInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1638a28 | Core.Audio.AudioEvent.Stop
// ============================================================

long Core_Audio_AudioEvent__Stop(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb56ac & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56ac = 1;
  }
  lVar1 = param_1 + 0x28;
  iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar1,0);
  if (iVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar4,0);
    if ((param_2 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 0x31) ^ 1;
    }
    else {
      bVar3 = 1;
    }
    /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar1,bVar3,0);
    /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar1,0);
    /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar1,0);
  }
  return param_1;
}



// ============================================================
// RVA: 0x1638af0 | Core.Audio.AudioEvent.Play
// ============================================================

undefined8 Core_Audio_AudioEvent__Play(undefined8 param_1)

{
  /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,param_1,0,0);
  return param_1;
}



// ============================================================
// RVA: 0x1638b20 | Core.Audio.AudioEvent.PlayInternal
// ============================================================

undefined8
Core_Audio_AudioEvent__PlayInternal
          (undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  char cStack_51;
  
  if ((bRam0000000003eb56ab & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d7b898);
    bRam0000000003eb56ab = 1;
  }
  cStack_51 = '\0';
  lVar1 = param_2 + 0x20;
  uVar4 = /*FMOD.Studio.EventDescription$$isValid*/ func_0x016df5c8(lVar1,0);
  if ((uVar4 & 1) == 0) {
    Core_Audio_AudioEvent__Lookup(param_2);
  }
  uVar5 = /*FMOD.Studio.EventDescription$$isValid*/ func_0x016df5c8(lVar1,0);
  if ((int)uVar5 != 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
      auVar6 = func_0x00f78af4();
      Core_Audio_AudioEvent__PlayInternal(0,auVar6._0_8_,auVar6._8_8_,0);
      return auVar6._0_8_;
    }
    uVar4 = /*System.String$$StartsWith*/ func_0x029ce958(*(long *)(param_2 + 0x10),/*STR('snapshot')*/ uRam0000000003d7b898,1,0);
    if ((uVar4 & 1) == 0) {
      /*FMOD.Studio.EventDescription$$isOneshot*/ func_0x016df0d8(lVar1,param_2 + 0x30,0);
    }
    /*FMOD.Studio.EventDescription$$is3D*/ func_0x016df1e0(lVar1,&cStack_51,0);
    lVar2 = param_2 + 0x28;
    uVar4 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar2,0);
    if ((uVar4 & 1) == 0) {
      /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar2,0);
    }
    if ((*(char *)(param_2 + 0x30) != '\0') && (iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar2,0), iVar3 != 0)) {
      /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar2,0);
      /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar2,0);
    }
    uVar4 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar2,0);
    if ((uVar4 & 1) == 0) {
      /*FMOD.Studio.EventDescription$$createInstance*/ func_0x016df2e8(lVar1,lVar2,0);
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_3,0,0);
    if (iVar3 != 0) {
      /*Core.Audio.AudioEvent$$AttachToTransform*/ func_0x01638da4(param_2,param_3);
    }
    if ((cStack_51 != '\0') && (*(char *)(param_2 + 0x32) != '\0')) {
      /*FMOD.Studio.EventInstance$$setProperty*/ func_0x016dfa78(*(undefined4 *)(param_2 + 0x34),lVar2,3,0);
      /*FMOD.Studio.EventInstance$$setProperty*/ func_0x016dfa78(*(undefined4 *)(param_2 + 0x38),lVar2,4,0);
    }
    uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_4,0);
    if ((uVar4 & 1) == 0) {
      /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(param_1,lVar2,param_4,0,0);
    }
    uVar5 = /*FMOD.Studio.EventInstance$$start*/ func_0x016dfb2c(lVar2,0);
  }
  return uVar5;
}



// ============================================================
// RVA: 0x1638d28 | Core.Audio.AudioEvent.Play
// ============================================================

undefined8 Core_Audio_AudioEvent__Play(undefined8 param_1,undefined8 param_2)

{
  Core_Audio_AudioEvent__PlayInternal(0,param_1,param_2,0);
  return param_1;
}



// ============================================================
// RVA: 0x1638d54 | Core.Audio.AudioEvent.Play
// ============================================================

undefined8 Core_Audio_AudioEvent__Play(undefined8 param_1,undefined8 param_2)

{
  Core_Audio_AudioEvent__PlayInternal(param_1,0,param_2);
  return param_1;
}



// ============================================================
// RVA: 0x1638d80 | Core.Audio.AudioEvent.Play
// ============================================================

undefined8 Core_Audio_AudioEvent__Play(undefined8 param_1)

{
  Core_Audio_AudioEvent__PlayInternal();
  return param_1;
}



// ============================================================
// RVA: 0x1638da4 | Core.Audio.AudioEvent.AttachToTransform
// ============================================================

void Core_Audio_AudioEvent__AttachToTransform(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb56ae & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56ae = 1;
  }
  iVar1 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(param_1 + 0x28,0);
  if (iVar1 != 0) {
    /*FMODUnity.RuntimeUtils$$To3DAttributes*/ func_0x016eccfc(&uStack_60,param_2,0);
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    /*FMOD.Studio.EventInstance$$set3DAttributes*/ func_0x016dfa48(param_1 + 0x28,&uStack_90,0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*FMODUnity.RuntimeManager$$AttachInstanceToGameObject*/ func_0x016e2610(uVar2,param_2,0,0);
  }
  return;
}



// ============================================================
// RVA: 0x1638e70 | Core.Audio.AudioEvent.Pause
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1638eb4 | Core.Audio.AudioEvent.UnPause
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1638ef8 | Core.Audio.AudioEvent.SetVolume
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1638f4c | Core.Audio.AudioEvent.Set3DDistance
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1638fbc | Core.Audio.AudioEvent.IsValid
// ============================================================

ulong Core_Audio_AudioEvent__IsValid(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = /*FMOD.Studio.EventInstance$$hasHandle*/ func_0x016e0094((undefined8 *)(param_1 + 0x28),0);
  if ((int)uVar2 != 0) {
    iVar1 = func_0x01245238(*(undefined8 *)(param_1 + 0x28));
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}



// ============================================================
// RVA: 0x1638fc8 | Core.Audio.AudioEvent.SetParameter
// ============================================================

long Core_Audio_AudioEvent__SetParameter
               (undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(param_2 + 0x28,0);
  if (iVar1 != 0) {
    /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(param_1,param_2 + 0x28,param_3,param_4,0);
  }
  return param_2;
}



// ============================================================
// RVA: 0x1639030 | Core.Audio.AudioEvent.GetParameter
// ============================================================

undefined4 Core_Audio_AudioEvent__GetParameter(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  iVar1 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(param_1 + 0x28,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    /*FMOD.Studio.EventInstance$$getParameterByName*/ func_0x016dfc80(0,param_1 + 0x28,param_2,&uStack_24,0);
    uVar2 = uStack_24;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x1639088 | Core.Audio.AudioEvent.SetGlobalParameter
// ============================================================

void Core_Audio_AudioEvent__SetGlobalParameter
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  
  if ((bRam0000000003eb56ad & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56ad = 1;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_48 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
  /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(param_1,&uStack_48,param_3,param_4,0);
  return;
}



// ============================================================
// RVA: 0x1639128 | Core.Audio.AudioEvent.SetParameter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1639198 | Core.Audio.AudioEvent.GetParameterIdByName
// ============================================================

undefined8 Core_Audio_AudioEvent__GetParameterIdByName(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  iVar1 = /*FMOD.Studio.EventDescription$$isValid*/ func_0x016df5c8(param_1 + 0x20,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    /*FMOD.Studio.EventDescription$$getParameterDescriptionByName*/ func_0x016dec30(param_1 + 0x20,param_2,&uStack_50,0);
    uVar2 = uStack_48;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x16391fc | Core.Audio.AudioEvent.SetAttenuation
// ============================================================

void Core_Audio_AudioEvent__SetAttenuation(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined1 *)(param_3 + 0x32) = 1;
  *(undefined4 *)(param_3 + 0x34) = param_1;
  *(undefined4 *)(param_3 + 0x38) = param_2;
  return;
}



// ============================================================
// RVA: 0x163920c | Core.Audio.AudioEvent.AllowFadeout
// ============================================================

void Core_Audio_AudioEvent__AllowFadeout(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x31) = param_2;
  return;
}



// ============================================================
// RVA: 0x1639214 | Core.Audio.AudioEvent.IsPlaying
// ============================================================

bool Core_Audio_AudioEvent__IsPlaying(long param_1)

{
  bool bVar1;
  int iVar2;
  int iStack_24;
  
  iStack_24 = 0;
  iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(param_1 + 0x28,0);
  bVar1 = false;
  if (iVar2 != 0) {
    /*FMOD.Studio.EventInstance$$getPlaybackState*/ func_0x016dfb5c(param_1 + 0x28,&iStack_24,0);
    bVar1 = iStack_24 != 2;
  }
  return bVar1;
}



