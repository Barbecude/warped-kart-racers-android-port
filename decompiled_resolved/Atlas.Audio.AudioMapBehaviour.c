// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Audio.AudioMapBehaviour

// ============================================================
// RVA: 0x14717bc | Atlas.Audio.AudioMapBehaviour.get_Ambiences
// ============================================================

undefined8 Atlas_Audio_AudioMapBehaviour__get_Ambiences(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14717c4 | Atlas.Audio.AudioMapBehaviour.get_SoundTriggers
// ============================================================

undefined8 Atlas_Audio_AudioMapBehaviour__get_SoundTriggers(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x14717cc | Atlas.Audio.AudioMapBehaviour.get_DopplerTriggers
// ============================================================

undefined8 Atlas_Audio_AudioMapBehaviour__get_DopplerTriggers(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x14717d4 | Atlas.Audio.AudioMapBehaviour.get_DistanceFromAmbience
// ============================================================

undefined4 Atlas_Audio_AudioMapBehaviour__get_DistanceFromAmbience(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x14717dc | Atlas.Audio.AudioMapBehaviour.GatherTriggers
// ============================================================

long Atlas_Audio_AudioMapBehaviour__GatherTriggers(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  long lVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000003eb4874 & 1) == 0) {
    func_0x00f78a20(0x3d321e8);
    func_0x00f78a20(0x3d321f0);
    func_0x00f78a20(0x3d321f8);
    func_0x00f78a20(0x3d39de0);
    func_0x00f78a20(0x3d39df0);
    func_0x00f78a20(0x3d39dd8);
    func_0x00f78a20(0x3d1d7e8);
    func_0x00f78a20(0x3d5b050);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4874 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar2 = (undefined8 *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b050);
  lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<AudioTrigger>_TypeInfo*/ uRam0000000003d1d7e8);
  /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(lVar3,puVar2,uRam0000000003d39dd8);
  *(long *)(param_1 + 0x20) = lVar3;
  if (lVar3 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar7 = *plVar5;
      ___cxa_end_catch();
      lVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,*puVar2);
      if (lVar7 == 0) {
        return lVar3;
      }
      func_0x00f78ac0(lVar7,0);
    }
    lVar3 = __Unwind_Resume();
    if ((bRam0000000003eb4875 & 1) == 0) {
      func_0x00f78a20(0x3d39dd0);
      func_0x00f78a20(0x3d1d7e8);
      bRam0000000003eb4875 = 1;
    }
    uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<AudioTrigger>_TypeInfo*/ uRam0000000003d1d7e8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d39dd0);
    *(undefined8 *)(lVar3 + 0x18) = uVar6;
    uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<AudioTrigger>_TypeInfo*/ uRam0000000003d1d7e8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d39dd0);
    *(undefined8 *)(lVar3 + 0x20) = uVar6;
    *(undefined4 *)(lVar3 + 0x28) = 0x43c80000;
    uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<AudioTrigger>_TypeInfo*/ uRam0000000003d1d7e8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d39dd0);
    *(undefined8 *)(lVar3 + 0x30) = uVar6;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar3;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,lVar3,uRam0000000003d39df0);
  while( true ) {
    uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d321f0);
    if ((uVar4 & 1) == 0) {
      lVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d321e8);
      return lVar3;
    }
    if (lStack_48 == 0) break;
    if (*(char *)(lStack_48 + 0x94) != '\0') {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00f78af4();
code_r0x0147197c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1471980);
        (*pcVar1)();
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x30),lStack_48,uRam0000000003d39de0);
    }
  }
  func_0x00f78af4();
  goto code_r0x0147197c;
}



// ============================================================
// RVA: 0x14719c4 | Atlas.Audio.AudioMapBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Audio_AudioMapBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4875 & 1) == 0) {
    func_0x00f78a20(0x3d39dd0);
    func_0x00f78a20(0x3d1d7e8);
    bRam0000000003eb4875 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<AudioTrigger>_TypeInfo*/ uRam0000000003d1d7e8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d39dd0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<AudioTrigger>_TypeInfo*/ uRam0000000003d1d7e8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d39dd0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0x43c80000;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<AudioTrigger>_TypeInfo*/ uRam0000000003d1d7e8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d39dd0);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
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



