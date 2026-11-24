// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Audio.AudioManager

// ============================================================
// RVA: 0x1639270 | Core.Audio.AudioManager.Init
// ============================================================

void Core_Audio_AudioManager__Init(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb56b0 & 1) == 0) {
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    bRam0000000003eb56b0 = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    /*FMODUnity.RuntimeUtils$$EnforceLibraryOrder*/ func_0x016ed3a4(0);
    uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3bf88);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x16392f8 | Core.Audio.AudioManager.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x01639364: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01639368) */

ulong Core_Audio_AudioManager__DeInit(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  int extraout_w1;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  ulong auStack_138 [2];
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar2 = param_1;
  if ((bRam0000000003eb56b1 & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    uVar2 = func_0x00f78a20(0x3d3c008);
    bRam0000000003eb56b1 = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    return uVar2;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
    puVar9 = &Core_Audio_AudioManager__UnloadBank;
    auVar10 = func_0x00f78af4();
    uVar6 = auVar10._8_8_;
    param_1 = auVar10._0_8_;
  }
  else {
    if (*(int *)(lVar7 + 0x18) < 1) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      return uVar2;
    }
    uVar6 = *(undefined8 *)
             (*(long *)(lVar7 + 0x10) + (ulong)(*(int *)(lVar7 + 0x18) - 1) * 8 + 0x20);
    puVar9 = (undefined *)0x1639368;
  }
  uVar2 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  puStack_28 = puVar9;
  if ((bRam0000000003eb56b4 & 1) == 0) {
    uVar2 = func_0x00f78a20(0x3d24568);
    bRam0000000003eb56b4 = 1;
  }
  if ((*(char *)(param_1 + 0x10) == '\0') ||
     (uVar2 = /*Core.Audio.AudioManager$$IsBankLoaded*/ func_0x0163942c(param_1,uVar6), (int)uVar2 == 0)) {
    return uVar2;
  }
  /*Core.Audio.AudioManager$$RemoveFromLoadedBanksList*/ func_0x01639684(param_1,uVar6);
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5dce & 1) == 0) {
    func_0x00f78a20(0x3d2ff98,0);
    func_0x00f78a20(0x3d2ffa0);
    func_0x00f78a20(0x3d2ffc0);
    func_0x00f78a20(0x3d3bfe0);
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb5dce = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  if (((*(byte *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x40) != 0)) {
    uVar2 = /*System.Collections.Generic.Dictionary<string, RuntimeManager.LoadedBank>$$TryGetValue*/ func_0x01ef224c(*(long *)(lVar7 + 0x40),uVar6,&uStack_60,uRam0000000003d2ffa0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    iVar1 = (int)uStack_58 + -1;
    uStack_58 = CONCAT44(uStack_58._4_4_,iVar1);
    if (iVar1 == 0) {
      func_0x01245490(uStack_60);
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x40) != 0)) {
        /*System.Collections.Generic.Dictionary<string, RuntimeManager.LoadedBank>$$Remove*/ func_0x01ef1f34(*(long *)(lVar7 + 0x40),uVar6,uRam0000000003d2ff98);
        lVar7 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x48) != 0)) {
          uVar2 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(lVar7 + 0x48),uVar6,uRam0000000003d3bfe0);
          return uVar2;
        }
      }
    }
    else {
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x40) != 0)) {
        uVar2 = /*System.Collections.Generic.Dictionary<string, RuntimeManager.LoadedBank>$$set_Item*/ func_0x01ef061c(*(long *)(lVar7 + 0x40),uVar6,uStack_60,uStack_58,
                                uRam0000000003d2ffc0);
        return uVar2;
      }
    }
  }
  func_0x00f78af4();
  uStack_88 = 0x3eb5000;
  uStack_80 = 0x3d24568;
  puStack_68 = &FMODUnity_RuntimeManager__AnyBankLoading;
  uVar8 = 0;
  lVar7 = 0x3d24568;
  uStack_78 = uVar6;
  ppuStack_70 = &puStack_30;
  if ((bRam0000000003eb5dcf & 1) == 0) {
    func_0x00f78a20(0x3d2ffb8);
    func_0x00f78a20(0x3d34fa0);
    func_0x00f78a20(0x3d34fa8);
    func_0x00f78a20(0x3d34fb0);
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d421e0);
    bRam0000000003eb5dcf = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  iStack_b4 = 0;
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
  if (((lVar3 != 0) && (*(long *)(lVar3 + 0x40) != 0)) &&
     (lVar3 = /*System.Collections.Generic.Dictionary<string, RuntimeManager.LoadedBank>$$get_Values*/ func_0x01ef0490(*(long *)(lVar3 + 0x40),uRam0000000003d2ffb8), lVar3 != 0)) {
    /*System.Collections.Generic.Dictionary.ValueCollection<string, RuntimeManager.LoadedBank>$$GetEnumerator*/ func_0x01ba7198(&uStack_b0,lVar3,uRam0000000003d421e0);
    uVar8 = 0;
    while (uVar2 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<string, RuntimeManager.LoadedBank>$$MoveNext*/ func_0x01fdccd0(&uStack_b0,uRam0000000003d34fa8), (uVar2 & 1) != 0) {
      func_0x012454a0(uStack_a0,&iStack_b4);
      uVar8 = uVar8 | iStack_b4 == 2;
    }
    /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<string, RuntimeManager.LoadedBank>$$Dispose*/ func_0x01fdcccc(&uStack_b0,uRam0000000003d34fa0);
code_r0x016eb560:
    return (ulong)uVar8;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar7 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<string, RuntimeManager.LoadedBank>$$Dispose*/ func_0x01fdcccc(&uStack_b0,/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568);
    if (lVar7 == 0) goto code_r0x016eb560;
    func_0x00f78ac0(lVar7,0);
  }
  lVar3 = __Unwind_Resume();
  uStack_e8 = 0x3d24568;
  uStack_e0 = 0x3eb5000;
  puStack_c8 = &FMODUnity_RuntimeManager__PathToGUID;
  lStack_d8 = lVar7;
  ppuStack_d0 = &ppuStack_70;
  if ((bRam0000000003eb5dd1 & 1) == 0) {
    func_0x00f78a20(0x3d21ce0);
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d7cc30);
    bRam0000000003eb5dd1 = 1;
  }
  if (((*(ushort *)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_f8 = (*(ulong **)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0xb8))[1];
  uStack_100 = **(ulong **)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0xb8);
  if (lVar3 != 0) {
    iVar1 = /*System.String$$StartsWith*/ func_0x029ce8f8(lVar3,/*STR('{')*/ uRam0000000003d7cc30,0);
    if (iVar1 != 0) {
      /*FMOD.Studio.Util$$parseID*/ func_0x016ed418(lVar3,&uStack_100,0);
      return uStack_100;
    }
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
    if (lVar7 != 0) {
      iVar1 = /*FMOD.Studio.System$$lookupID*/ func_0x016f6b44(lVar7 + 0x20,lVar3,&uStack_100,0);
      if (iVar1 != 0x4a) {
        return uStack_100;
      }
      goto code_r0x016eb6cc;
    }
  }
  func_0x00f78af4();
code_r0x016eb6cc:
  func_0x00f78a24(64100000);
  uVar6 = func_0x00f78aec();
  /*FMODUnity.EventNotFoundException$$.ctor*/ func_0x016e0150(uVar6,lVar3);
  uVar5 = func_0x00f78a24(0x3d5c8f0);
  auVar10 = func_0x00f78ac0(uVar6,uVar5);
  uStack_128 = 0x3eb5000;
  puStack_108 = &FMODUnity_RuntimeManager__CreateInstance;
  uStack_120 = uVar6;
  lStack_118 = lVar3;
  ppuStack_110 = &ppuStack_d0;
  if ((bRam0000000003eb5dd3 & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb5dd3 = 1;
  }
  auStack_138[0] = 0;
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*FMODUnity.RuntimeManager$$GetEventDescription*/ func_0x016eb78c(auVar10._0_8_,auVar10._8_8_);
  func_0x01245210(uVar6,auStack_138);
  return auStack_138[0];
}



// ============================================================
// RVA: 0x1639384 | Core.Audio.AudioManager.UnloadBank
// ============================================================

ulong Core_Audio_AudioManager__UnloadBank(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int extraout_w1;
  uint uVar8;
  undefined1 auVar9 [16];
  ulong auStack_118 [2];
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  if ((bRam0000000003eb56b4 & 1) == 0) {
    uVar2 = func_0x00f78a20(0x3d24568);
    bRam0000000003eb56b4 = 1;
  }
  if ((*(char *)(param_1 + 0x10) == '\0') ||
     (uVar2 = /*Core.Audio.AudioManager$$IsBankLoaded*/ func_0x0163942c(param_1,param_2), (int)uVar2 == 0)) {
    return uVar2;
  }
  /*Core.Audio.AudioManager$$RemoveFromLoadedBanksList*/ func_0x01639684(param_1,param_2);
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5dce & 1) == 0) {
    func_0x00f78a20(0x3d2ff98,0);
    func_0x00f78a20(0x3d2ffa0);
    func_0x00f78a20(0x3d2ffc0);
    func_0x00f78a20(0x3d3bfe0);
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb5dce = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  if (((*(byte *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x40) != 0)) {
    uVar2 = /*System.Collections.Generic.Dictionary<string, RuntimeManager.LoadedBank>$$TryGetValue*/ func_0x01ef224c(*(long *)(lVar3 + 0x40),param_2,&uStack_40,uRam0000000003d2ffa0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    iVar1 = (int)uStack_38 + -1;
    uStack_38 = CONCAT44(uStack_38._4_4_,iVar1);
    if (iVar1 == 0) {
      func_0x01245490(uStack_40);
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x40) != 0)) {
        /*System.Collections.Generic.Dictionary<string, RuntimeManager.LoadedBank>$$Remove*/ func_0x01ef1f34(*(long *)(lVar3 + 0x40),param_2,uRam0000000003d2ff98);
        lVar3 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
        if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
          uVar2 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(lVar3 + 0x48),param_2,uRam0000000003d3bfe0);
          return uVar2;
        }
      }
    }
    else {
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x40) != 0)) {
        uVar2 = /*System.Collections.Generic.Dictionary<string, RuntimeManager.LoadedBank>$$set_Item*/ func_0x01ef061c(*(long *)(lVar3 + 0x40),param_2,uStack_40,uStack_38,
                                uRam0000000003d2ffc0);
        return uVar2;
      }
    }
  }
  func_0x00f78af4();
  uStack_68 = 0x3eb5000;
  uStack_60 = 0x3d24568;
  puStack_48 = &FMODUnity_RuntimeManager__AnyBankLoading;
  uVar8 = 0;
  lVar3 = 0x3d24568;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5dcf & 1) == 0) {
    func_0x00f78a20(0x3d2ffb8);
    func_0x00f78a20(0x3d34fa0);
    func_0x00f78a20(0x3d34fa8);
    func_0x00f78a20(0x3d34fb0);
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d421e0);
    bRam0000000003eb5dcf = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  iStack_94 = 0;
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
  if (((lVar4 != 0) && (*(long *)(lVar4 + 0x40) != 0)) &&
     (lVar4 = /*System.Collections.Generic.Dictionary<string, RuntimeManager.LoadedBank>$$get_Values*/ func_0x01ef0490(*(long *)(lVar4 + 0x40),uRam0000000003d2ffb8), lVar4 != 0)) {
    /*System.Collections.Generic.Dictionary.ValueCollection<string, RuntimeManager.LoadedBank>$$GetEnumerator*/ func_0x01ba7198(&uStack_90,lVar4,uRam0000000003d421e0);
    uVar8 = 0;
    while (uVar2 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<string, RuntimeManager.LoadedBank>$$MoveNext*/ func_0x01fdccd0(&uStack_90,uRam0000000003d34fa8), (uVar2 & 1) != 0) {
      func_0x012454a0(uStack_80,&iStack_94);
      uVar8 = uVar8 | iStack_94 == 2;
    }
    /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<string, RuntimeManager.LoadedBank>$$Dispose*/ func_0x01fdcccc(&uStack_90,uRam0000000003d34fa0);
code_r0x016eb560:
    return (ulong)uVar8;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar3 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<string, RuntimeManager.LoadedBank>$$Dispose*/ func_0x01fdcccc(&uStack_90,/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568);
    if (lVar3 == 0) goto code_r0x016eb560;
    func_0x00f78ac0(lVar3,0);
  }
  lVar4 = __Unwind_Resume();
  uStack_c8 = 0x3d24568;
  uStack_c0 = 0x3eb5000;
  puStack_a8 = &FMODUnity_RuntimeManager__PathToGUID;
  lStack_b8 = lVar3;
  ppuStack_b0 = &puStack_50;
  if ((bRam0000000003eb5dd1 & 1) == 0) {
    func_0x00f78a20(0x3d21ce0);
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d7cc30);
    bRam0000000003eb5dd1 = 1;
  }
  if (((*(ushort *)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_d8 = (*(ulong **)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0xb8))[1];
  uStack_e0 = **(ulong **)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0xb8);
  if (lVar4 != 0) {
    iVar1 = /*System.String$$StartsWith*/ func_0x029ce8f8(lVar4,/*STR('{')*/ uRam0000000003d7cc30,0);
    if (iVar1 != 0) {
      /*FMOD.Studio.Util$$parseID*/ func_0x016ed418(lVar4,&uStack_e0,0);
      return uStack_e0;
    }
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar3 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
    if (lVar3 != 0) {
      iVar1 = /*FMOD.Studio.System$$lookupID*/ func_0x016f6b44(lVar3 + 0x20,lVar4,&uStack_e0,0);
      if (iVar1 != 0x4a) {
        return uStack_e0;
      }
      goto code_r0x016eb6cc;
    }
  }
  func_0x00f78af4();
code_r0x016eb6cc:
  func_0x00f78a24(64100000);
  uVar6 = func_0x00f78aec();
  /*FMODUnity.EventNotFoundException$$.ctor*/ func_0x016e0150(uVar6,lVar4);
  uVar7 = func_0x00f78a24(0x3d5c8f0);
  auVar9 = func_0x00f78ac0(uVar6,uVar7);
  uStack_108 = 0x3eb5000;
  puStack_e8 = &FMODUnity_RuntimeManager__CreateInstance;
  uStack_100 = uVar6;
  lStack_f8 = lVar4;
  ppuStack_f0 = &ppuStack_b0;
  if ((bRam0000000003eb5dd3 & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb5dd3 = 1;
  }
  auStack_118[0] = 0;
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*FMODUnity.RuntimeManager$$GetEventDescription*/ func_0x016eb78c(auVar9._0_8_,auVar9._8_8_);
  func_0x01245210(uVar6,auStack_118);
  return auStack_118[0];
}



// ============================================================
// RVA: 0x1639428 | Core.Audio.AudioManager.Update
// ============================================================

void Core_Audio_AudioManager__Update(void)

{
  return;
}



// ============================================================
// RVA: 0x163942c | Core.Audio.AudioManager.IsBankLoaded
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1639590 | Core.Audio.AudioManager.LoadBank
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1639684 | Core.Audio.AudioManager.RemoveFromLoadedBanksList
// ============================================================

ulong Core_Audio_AudioManager__RemoveFromLoadedBanksList(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int extraout_w1;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong unaff_x22;
  long lVar13;
  undefined1 auVar14 [16];
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar12 = 0x3eb5000;
  uVar3 = param_1;
  if ((bRam0000000003eb56c0 & 1) == 0) {
    func_0x00f78a20(0x3d3bfe8);
    func_0x00f78a20(0x3d3c000);
    uVar3 = func_0x00f78a20(0x3d3c008);
    bRam0000000003eb56c0 = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    return uVar3;
  }
  lVar13 = *(long *)(param_1 + 0x18);
  if (lVar13 != 0) {
    uVar9 = *(int *)(lVar13 + 0x18) - 1;
    unaff_x22 = (ulong)uVar9;
    if (*(int *)(lVar13 + 0x18) < 1) {
      return uVar3;
    }
    uVar12 = 0;
    do {
      uVar11 = (uint)uVar12;
      if (*(uint *)(lVar13 + 0x18) <= uVar11) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + (long)(int)uVar11 * 8 + 0x20);
      if (lVar13 == 0) break;
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(lVar13,param_2,5,0);
      if ((int)uVar3 != 0) {
        uVar3 = *(ulong *)(param_1 + 0x18);
        if (uVar3 != 0) {
          uVar9 = *(uint *)(uVar3 + 0x18);
          uVar8 = uVar3;
          uVar6 = uRam0000000003d3bfe8;
          if (uVar9 <= uVar11) {
            uVar8 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            uVar9 = *(uint *)(uVar3 + 0x18);
          }
          iVar2 = uVar9 - 1;
          *(int *)(uVar3 + 0x18) = iVar2;
          if (iVar2 - uVar11 != 0 && (int)uVar11 <= iVar2) {
            uVar6 = *(undefined8 *)(uVar3 + 0x10);
            uVar8 = /*System.Array$$Copy*/ func_0x0292b4cc(uVar6,uVar11 + 1,uVar6,uVar12,iVar2 - uVar11,0);
          }
          lVar13 = *(long *)(uVar3 + 0x10);
          if (lVar13 == 0) {
            func_0x00f78af4();
          }
          else if (*(uint *)(uVar3 + 0x18) < *(uint *)(lVar13 + 0x18)) {
            *(undefined8 *)(lVar13 + (long)(int)*(uint *)(uVar3 + 0x18) * 8 + 0x20) = 0;
            *(int *)(uVar3 + 0x1c) = *(int *)(uVar3 + 0x1c) + 1;
            return uVar8;
          }
          uVar7 = func_0x00f78b24();
          auVar14 = func_0x00f78ac0(uVar7,0);
          uVar12 = auVar14._0_8_;
          iVar2 = auVar14._8_4_;
          iVar10 = (int)uVar6;
          uVar3 = uVar12;
          if (iVar2 < 0) {
            uVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
          }
          if (iVar10 < 0) {
            uVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
          }
          if (*(int *)(uVar12 + 0x18) - iVar2 < iVar10) {
            uVar3 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
          }
          if (0 < iVar10) {
            iVar1 = *(int *)(uVar12 + 0x18) - iVar10;
            *(int *)(uVar12 + 0x18) = iVar1;
            if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
              /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar12 + 0x10),iVar10 + iVar2,
                              *(undefined8 *)(uVar12 + 0x10),auVar14._8_8_,iVar1 - iVar2,0);
              iVar1 = *(int *)(uVar12 + 0x18);
            }
            uVar3 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar12 + 0x10),iVar1,uVar6,0);
            *(int *)(uVar12 + 0x1c) = *(int *)(uVar12 + 0x1c) + 1;
          }
          return uVar3;
        }
        break;
      }
      if (uVar9 == uVar11) {
        return uVar3;
      }
      lVar13 = *(long *)(param_1 + 0x18);
      uVar12 = (ulong)(uVar11 + 1);
    } while (lVar13 != 0);
  }
  lVar13 = func_0x00f78af4();
  puStack_48 = &Core_Audio_AudioManager__AnyBanksLoading;
  uStack_60 = param_2;
  uStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb56b5 & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56b5 = 1;
  }
  if (*(char *)(lVar13 + 0x10) == '\0') {
    return 0;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = 0;
  lVar13 = 0x3d24568;
  uStack_70 = unaff_x22;
  uStack_68 = uVar12;
  if ((bRam0000000003eb5dcf & 1) == 0) {
    func_0x00f78a20(0x3d2ffb8);
    func_0x00f78a20(0x3d34fa0);
    func_0x00f78a20(0x3d34fa8);
    func_0x00f78a20(0x3d34fb0);
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d421e0);
    bRam0000000003eb5dcf = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  iStack_94 = 0;
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
  if (((lVar4 != 0) && (*(long *)(lVar4 + 0x40) != 0)) &&
     (lVar4 = /*System.Collections.Generic.Dictionary<string, RuntimeManager.LoadedBank>$$get_Values*/ func_0x01ef0490(*(long *)(lVar4 + 0x40),uRam0000000003d2ffb8), lVar4 != 0)) {
    /*System.Collections.Generic.Dictionary.ValueCollection<string, RuntimeManager.LoadedBank>$$GetEnumerator*/ func_0x01ba7198(&uStack_90,lVar4,uRam0000000003d421e0);
    uVar9 = 0;
    while (uVar3 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<string, RuntimeManager.LoadedBank>$$MoveNext*/ func_0x01fdccd0(&uStack_90,uRam0000000003d34fa8), (uVar3 & 1) != 0) {
      func_0x012454a0(uStack_80,&iStack_94);
      uVar9 = uVar9 | iStack_94 == 2;
    }
    /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<string, RuntimeManager.LoadedBank>$$Dispose*/ func_0x01fdcccc(&uStack_90,uRam0000000003d34fa0);
code_r0x016eb560:
    return (ulong)uVar9;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar13 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<string, RuntimeManager.LoadedBank>$$Dispose*/ func_0x01fdcccc(&uStack_90,/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568);
    if (lVar13 == 0) goto code_r0x016eb560;
    func_0x00f78ac0(lVar13,0);
  }
  lVar4 = __Unwind_Resume();
  uStack_c8 = 0x3d24568;
  uStack_c0 = 0x3eb5000;
  puStack_a8 = &FMODUnity_RuntimeManager__PathToGUID;
  uStack_d0 = unaff_x22;
  lStack_b8 = lVar13;
  ppuStack_b0 = &puStack_50;
  if ((bRam0000000003eb5dd1 & 1) == 0) {
    func_0x00f78a20(0x3d21ce0);
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d7cc30);
    bRam0000000003eb5dd1 = 1;
  }
  if (((*(ushort *)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_d8 = (*(ulong **)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0xb8))[1];
  uStack_e0 = **(ulong **)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0xb8);
  if (lVar4 != 0) {
    iVar2 = /*System.String$$StartsWith*/ func_0x029ce8f8(lVar4,/*STR('{')*/ uRam0000000003d7cc30,0);
    if (iVar2 != 0) {
      /*FMOD.Studio.Util$$parseID*/ func_0x016ed418(lVar4,&uStack_e0,0);
      return uStack_e0;
    }
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar13 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
    if (lVar13 != 0) {
      iVar2 = /*FMOD.Studio.System$$lookupID*/ func_0x016f6b44(lVar13 + 0x20,lVar4,&uStack_e0,0);
      if (iVar2 != 0x4a) {
        return uStack_e0;
      }
      goto code_r0x016eb6cc;
    }
  }
  func_0x00f78af4();
code_r0x016eb6cc:
  func_0x00f78a24(64100000);
  uVar6 = func_0x00f78aec();
  /*FMODUnity.EventNotFoundException$$.ctor*/ func_0x016e0150(uVar6,lVar4);
  uVar7 = func_0x00f78a24(0x3d5c8f0);
  auVar14 = func_0x00f78ac0(uVar6,uVar7);
  uStack_108 = 0x3eb5000;
  puStack_e8 = &FMODUnity_RuntimeManager__CreateInstance;
  uStack_110 = unaff_x22;
  uStack_100 = uVar6;
  lStack_f8 = lVar4;
  pppuStack_f0 = &ppuStack_b0;
  if ((bRam0000000003eb5dd3 & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb5dd3 = 1;
  }
  uStack_118 = 0;
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*FMODUnity.RuntimeManager$$GetEventDescription*/ func_0x016eb78c(auVar14._0_8_,auVar14._8_8_);
  func_0x01245210(uVar6,&uStack_118);
  return uStack_118;
}



// ============================================================
// RVA: 0x163978c | Core.Audio.AudioManager.AnyBanksLoading
// ============================================================

ulong Core_Audio_AudioManager__AnyBanksLoading(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int extraout_w1;
  uint uVar8;
  undefined1 auVar9 [16];
  ulong uStack_d8;
  ulong uStack_a0;
  ulong uStack_98;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb56b5 & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56b5 = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    return 0;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = 0;
  if ((bRam0000000003eb5dcf & 1) == 0) {
    func_0x00f78a20(0x3d2ffb8);
    func_0x00f78a20(0x3d34fa0);
    func_0x00f78a20(0x3d34fa8);
    func_0x00f78a20(0x3d34fb0);
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d421e0);
    bRam0000000003eb5dcf = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  iStack_54 = 0;
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar2 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
  if (((lVar2 != 0) && (*(long *)(lVar2 + 0x40) != 0)) &&
     (lVar2 = /*System.Collections.Generic.Dictionary<string, RuntimeManager.LoadedBank>$$get_Values*/ func_0x01ef0490(*(long *)(lVar2 + 0x40),uRam0000000003d2ffb8), lVar2 != 0)) {
    /*System.Collections.Generic.Dictionary.ValueCollection<string, RuntimeManager.LoadedBank>$$GetEnumerator*/ func_0x01ba7198(&uStack_50,lVar2,uRam0000000003d421e0);
    uVar8 = 0;
    while (uVar3 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<string, RuntimeManager.LoadedBank>$$MoveNext*/ func_0x01fdccd0(&uStack_50,uRam0000000003d34fa8), (uVar3 & 1) != 0) {
      func_0x012454a0(uStack_40,&iStack_54);
      uVar8 = uVar8 | iStack_54 == 2;
    }
    /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<string, RuntimeManager.LoadedBank>$$Dispose*/ func_0x01fdcccc(&uStack_50,uRam0000000003d34fa0);
code_r0x016eb560:
    return (ulong)uVar8;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar2 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<string, RuntimeManager.LoadedBank>$$Dispose*/ func_0x01fdcccc(&uStack_50,/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568);
    if (lVar2 == 0) goto code_r0x016eb560;
    func_0x00f78ac0(lVar2,0);
  }
  lVar2 = __Unwind_Resume();
  if ((bRam0000000003eb5dd1 & 1) == 0) {
    func_0x00f78a20(0x3d21ce0);
    func_0x00f78a20(0x3d24568);
    func_0x00f78a20(0x3d7cc30);
    bRam0000000003eb5dd1 = 1;
  }
  if (((*(ushort *)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_98 = (*(ulong **)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0xb8))[1];
  uStack_a0 = **(ulong **)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0xb8);
  if (lVar2 != 0) {
    iVar1 = /*System.String$$StartsWith*/ func_0x029ce8f8(lVar2,/*STR('{')*/ uRam0000000003d7cc30,0);
    if (iVar1 != 0) {
      /*FMOD.Studio.Util$$parseID*/ func_0x016ed418(lVar2,&uStack_a0,0);
      return uStack_a0;
    }
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar5 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
    if (lVar5 != 0) {
      iVar1 = /*FMOD.Studio.System$$lookupID*/ func_0x016f6b44(lVar5 + 0x20,lVar2,&uStack_a0,0);
      if (iVar1 != 0x4a) {
        return uStack_a0;
      }
      goto code_r0x016eb6cc;
    }
  }
  func_0x00f78af4();
code_r0x016eb6cc:
  func_0x00f78a24(64100000);
  uVar6 = func_0x00f78aec();
  /*FMODUnity.EventNotFoundException$$.ctor*/ func_0x016e0150(uVar6,lVar2);
  uVar7 = func_0x00f78a24(0x3d5c8f0);
  auVar9 = func_0x00f78ac0(uVar6,uVar7);
  if ((bRam0000000003eb5dd3 & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb5dd3 = 1;
  }
  uStack_d8 = 0;
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*FMODUnity.RuntimeManager$$GetEventDescription*/ func_0x016eb78c(auVar9._0_8_,auVar9._8_8_);
  func_0x01245210(uVar6,&uStack_d8);
  return uStack_d8;
}



// ============================================================
// RVA: 0x1639804 | Core.Audio.AudioManager.WaitForLoad
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1639878 | Core.Audio.AudioManager.SetListenerCount
// ============================================================

void Core_Audio_AudioManager__SetListenerCount(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  if ((bRam0000000003eb56b7 & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56b7 = 1;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_38 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
  /*FMOD.Studio.System$$setNumListeners*/ func_0x016f6f50(&uStack_38,param_2,0);
  return;
}



// ============================================================
// RVA: 0x1639900 | Core.Audio.AudioManager.SetListenerTransform
// ============================================================

void Core_Audio_AudioManager__SetListenerTransform
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 unaff_x19;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 uVar12;
  long unaff_x23;
  long lVar13;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined1 *puVar14;
  undefined8 unaff_x30;
  undefined *puVar15;
  undefined1 auVar16 [16];
  
  if ((bRam0000000003eb56b8 & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56b8 = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = 0;
  if ((bRam0000000003eb5ddf & 1) == 0) {
    func_0x00f78a20(0x3d24568,param_3,0,0);
    bRam0000000003eb5ddf = 1;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  do {
    lVar8 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    lVar9 = lVar10;
    if ((bRam0000000003eb5de0 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d24568);
      bRam0000000003eb5de0 = 1;
    }
    lVar13 = 0x3d24568;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar10,0);
    if (iVar2 == 0) {
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
      if (lVar3 != 0) {
        /*FMODUnity.RuntimeUtils$$To3DAttributes*/ func_0x016ecd90((undefined1 *)((long)register0x00000008 + -0x70),param_3,0,0);
        *(undefined8 *)((long)register0x00000008 + -200) =
             *(undefined8 *)((long)register0x00000008 + -0x68);
        *(undefined8 *)((long)register0x00000008 + -0xd0) =
             *(undefined8 *)((long)register0x00000008 + -0x70);
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0x58);
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0x60);
        *(undefined8 *)((long)register0x00000008 + -0xa8) =
             *(undefined8 *)((long)register0x00000008 + -0x48);
        *(undefined8 *)((long)register0x00000008 + -0xb0) =
             *(undefined8 *)((long)register0x00000008 + -0x50);
        /*FMOD.Studio.System$$setListenerAttributes*/ func_0x016f6fc8(lVar3 + 0x20,param_2,(undefined1 *)((long)register0x00000008 + -0xd0),0);
        return;
      }
    }
    else {
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
      lVar13 = 0x3d24568;
      if (lVar3 != 0) {
        lVar8 = 0;
        /*FMODUnity.RuntimeUtils$$To3DAttributes*/ func_0x016ecd90((undefined1 *)((long)register0x00000008 + -0x70),param_3,0);
        lVar13 = lVar3;
        if ((lVar10 != 0) && (lVar4 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar10,0), lVar4 != 0)) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0);
          /*FMODUnity.RuntimeUtils$$ToFMODVector*/ func_0x016ecc80(0);
          *(undefined8 *)((long)register0x00000008 + -0x98) =
               *(undefined8 *)((long)register0x00000008 + -0x68);
          *(undefined8 *)((long)register0x00000008 + -0xa0) =
               *(undefined8 *)((long)register0x00000008 + -0x70);
          *(undefined8 *)((long)register0x00000008 + -0x88) =
               *(undefined8 *)((long)register0x00000008 + -0x58);
          *(undefined8 *)((long)register0x00000008 + -0x90) =
               *(undefined8 *)((long)register0x00000008 + -0x60);
          *(undefined8 *)((long)register0x00000008 + -0x78) =
               *(undefined8 *)((long)register0x00000008 + -0x48);
          *(undefined8 *)((long)register0x00000008 + -0x80) =
               *(undefined8 *)((long)register0x00000008 + -0x50);
          /*FMOD.Studio.System$$setListenerAttributes*/ func_0x016f7028(lVar3 + 0x20,param_2,(undefined1 *)((long)register0x00000008 + -0xa0),0);
          return;
        }
      }
    }
    auVar16 = func_0x00f78af4();
    lVar4 = auVar16._8_8_;
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x100);
    *(long *)((long)register0x00000008 + -0x100) = lVar10;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = param_3;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0xe0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0xd8) =
         &FMODUnity_RuntimeManager__SetListenerLocation;
    puVar14 = (undefined1 *)((long)register0x00000008 + -0xe0);
    uVar12 = 0x3eb5000;
    lVar3 = lVar8;
    if ((bRam0000000003eb5ddb & 1) == 0) {
      func_0x00f78a20(0x3d24568);
      bRam0000000003eb5ddb = 1;
    }
    if (auVar16._0_8_ == 0) {
      puVar15 = &FMODUnity_RuntimeManager__SetListenerLocation2D;
      auVar16 = func_0x00f78af4();
      uVar11 = 0;
    }
    else {
      uVar5 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(auVar16._0_8_,0);
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar5;
      auVar16 = auVar16 << 0x40;
      puVar14 = *(undefined1 **)((long)register0x00000008 + -0xe0);
      puVar15 = *(undefined **)((long)register0x00000008 + -0xd8);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x100);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0xf8);
      puVar1 = (undefined1 *)((long)register0x00000008 + -0xd0);
      lVar3 = lVar4;
      lVar9 = lVar8;
      lVar8 = *(long *)((long)register0x00000008 + -0xe8);
      lVar4 = *(long *)((long)register0x00000008 + -0xf0);
    }
    uVar7 = auVar16._8_8_;
    uVar6 = auVar16._0_8_;
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0xd0);
    *(undefined8 *)(puVar1 + -0x40) = 0x3d23990;
    *(long *)(puVar1 + -0x38) = lVar13;
    *(undefined8 *)(puVar1 + -0x30) = uVar12;
    *(undefined8 *)(puVar1 + -0x28) = uVar11;
    *(long *)(puVar1 + -0x20) = lVar4;
    *(long *)(puVar1 + -0x18) = lVar8;
    *(undefined1 **)(puVar1 + -0x10) = puVar14;
    *(undefined **)(puVar1 + -8) = puVar15;
    unaff_x24 = 0x3d23990;
    if ((bRam0000000003eb5de1 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d24568);
      bRam0000000003eb5de1 = 1;
    }
    unaff_x23 = 0x3d24568;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
    if (iVar2 == 0) {
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
      if (lVar10 != 0) {
        /*FMODUnity.RuntimeUtils$$To3DAttributes*/ func_0x016ecfc4(puVar1 + -0x70,uVar7,lVar3,0);
        *(undefined8 *)(puVar1 + -200) = *(undefined8 *)(puVar1 + -0x68);
        *(undefined8 *)(puVar1 + -0xd0) = *(undefined8 *)(puVar1 + -0x70);
        *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0x58);
        *(undefined8 *)(puVar1 + -0xc0) = *(undefined8 *)(puVar1 + -0x60);
        *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0x48);
        *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0x50);
        /*FMOD.Studio.System$$setListenerAttributes*/ func_0x016f6fc8(lVar10 + 0x20,uVar6,puVar1 + -0xd0,0);
        return;
      }
    }
    else {
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = /*FMODUnity.RuntimeManager$$get_Instance*/ func_0x016e769c();
      unaff_x23 = 0x3d24568;
      if (((lVar10 != 0) &&
          (/*FMODUnity.RuntimeUtils$$To3DAttributes*/ func_0x016ecfc4(puVar1 + -0x70,uVar7,lVar3,0), unaff_x23 = lVar10, lVar9 != 0)) &&
         (lVar8 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar9,0), lVar8 != 0)) {
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
        /*FMODUnity.RuntimeUtils$$ToFMODVector*/ func_0x016ecc80(0);
        *(undefined8 *)(puVar1 + -0x98) = *(undefined8 *)(puVar1 + -0x68);
        *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0x70);
        *(undefined8 *)(puVar1 + -0x88) = *(undefined8 *)(puVar1 + -0x58);
        *(undefined8 *)(puVar1 + -0x90) = *(undefined8 *)(puVar1 + -0x60);
        *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0x48);
        *(undefined8 *)(puVar1 + -0x80) = *(undefined8 *)(puVar1 + -0x50);
        /*FMOD.Studio.System$$setListenerAttributes*/ func_0x016f7028(lVar10 + 0x20,uVar6,puVar1 + -0xa0,0);
        return;
      }
    }
    auVar16 = func_0x00f78af4();
    lVar10 = auVar16._8_8_;
    param_3 = auVar16._0_8_;
    *(long *)(puVar1 + -0x100) = lVar9;
    *(undefined8 *)(puVar1 + -0xf8) = uVar7;
    *(long *)(puVar1 + -0xf0) = lVar3;
    *(undefined8 *)(puVar1 + -0xe8) = uVar6;
    *(undefined1 **)(puVar1 + -0xe0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0xd8) = &FMODUnity_RuntimeManager__SetListenerLocation;
    if ((bRam0000000003eb5ddc & 1) == 0) {
      func_0x00f78a20(0x3d24568);
      bRam0000000003eb5ddc = 1;
    }
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_2 = 0;
    unaff_x29 = *(undefined8 *)(puVar1 + -0xe0);
    unaff_x30 = *(undefined8 *)(puVar1 + -0xd8);
    unaff_x20 = *(undefined8 *)(puVar1 + -0xf0);
    unaff_x19 = *(undefined8 *)(puVar1 + -0xe8);
    unaff_x22 = *(undefined8 *)(puVar1 + -0x100);
    unaff_x21 = *(undefined8 *)(puVar1 + -0xf8);
  } while( true );
}



// ============================================================
// RVA: 0x1639994 | Core.Audio.AudioManager.SetParameter
// ============================================================

void Core_Audio_AudioManager__SetParameter(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  
  if ((bRam0000000003eb56b9 & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56b9 = 1;
  }
  if (*(char *)(param_2 + 0x10) != '\0') {
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_48 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
    /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(param_1,&uStack_48,param_3,0,0);
  }
  return;
}



// ============================================================
// RVA: 0x1639a3c | Core.Audio.AudioManager.TryGetParameterIdByName
// ============================================================

undefined8
Core_Audio_AudioManager__TryGetParameterIdByName
          (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb56ba & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56ba = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_68 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
    iVar1 = /*FMOD.Studio.System$$getParameterDescriptionByName*/ func_0x016f2b74(&uStack_68,param_2,&uStack_60,0);
    if (iVar1 == 0) {
      *param_3 = uStack_58;
      return 1;
    }
  }
  *param_3 = 0;
  return 0;
}



// ============================================================
// RVA: 0x1639b00 | Core.Audio.AudioManager.GetParameterIdByName
// ============================================================

undefined8 Core_Audio_AudioManager__GetParameterIdByName(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  Core_Audio_AudioManager__TryGetParameterIdByName(param_1,param_2,&uStack_18);
  return uStack_18;
}



// ============================================================
// RVA: 0x1639b28 | Core.Audio.AudioManager.SetParameter
// ============================================================

void Core_Audio_AudioManager__SetParameter
               (undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  
  if ((bRam0000000003eb56bb & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56bb = 1;
  }
  if (*(char *)(param_2 + 0x10) != '\0') {
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_48 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
    /*FMOD.Studio.System$$setParameterByID*/ func_0x016f2dc4(param_1,&uStack_48,param_3,param_4,0);
  }
  return;
}



// ============================================================
// RVA: 0x1639bd4 | Core.Audio.AudioManager.TryGetParameter
// ============================================================

bool Core_Audio_AudioManager__TryGetParameter(long param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb56bc & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56bc = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar1 = false;
    *param_3 = 0;
  }
  else {
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_38 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
    iVar2 = /*FMOD.Studio.System$$getParameterByName*/ func_0x016f6808(&uStack_38,param_2,param_3,0);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}



// ============================================================
// RVA: 0x1639c84 | Core.Audio.AudioManager.PlayOneShot
// ============================================================

void Core_Audio_AudioManager__PlayOneShot(long param_1,undefined8 param_2)

{
  if ((bRam0000000003eb56bd & 1) == 0) {
    func_0x00f78a20(0x3d24568);
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
// RVA: 0x1639d18 | Core.Audio.AudioManager.PlayOneShot
// ============================================================

void Core_Audio_AudioManager__PlayOneShot
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5)

{
  if ((bRam0000000003eb56be & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56be = 1;
  }
  if (*(char *)(param_4 + 0x10) != '\0') {
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
    /*FMODUnity.RuntimeManager$$PathToGUID*/ func_0x016eb5b8(param_5);
    /*FMODUnity.RuntimeManager$$PlayOneShot*/ func_0x016ebad0(param_1,param_2,param_3);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x1639dd0 | Core.Audio.AudioManager.MuteAllEvents
// ============================================================

void Core_Audio_AudioManager__MuteAllEvents(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  if ((bRam0000000003eb56bf & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56bf = 1;
  }
  if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*FMODUnity.RuntimeManager$$MuteAllEvents*/ func_0x016ec738(param_2,0);
  uStack_38 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
  /*FMOD.Studio.System$$update*/ func_0x016f1ce8(&uStack_38,0);
  return;
}



// ============================================================
// RVA: 0x1639e60 | Core.Audio.AudioManager.SetGlobalParameter
// ============================================================

void Core_Audio_AudioManager__SetGlobalParameter
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  
  if ((bRam0000000003eb56c1 & 1) == 0) {
    func_0x00f78a20(0x3d24568);
    bRam0000000003eb56c1 = 1;
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
// RVA: 0x1639f00 | Core.Audio.AudioManager..ctor
// ============================================================

void Core_Audio_AudioManager___ctor(void)

{
  return;
}



