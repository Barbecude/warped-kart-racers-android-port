// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Audio.WeaponAudioManager

// ============================================================
// RVA: 0x15300f0 | Atlas.Audio.WeaponAudioManager.DistanceFromPlayer
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01638aa8) */

ulong Atlas_Audio_WeaponAudioManager__DistanceFromPlayer(ulong param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  long lVar6;
  undefined8 *puVar7;
  uint extraout_w8;
  uint uVar8;
  long lVar9;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 unaff_x20;
  long lVar10;
  code *pcVar11;
  undefined4 extraout_s0;
  undefined1 auVar12 [16];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x48);
    if (lVar9 == 0) {
      return param_1;
    }
    lVar9 = *(long *)(lVar9 + 0xb8);
    if ((lVar9 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar9,0), unaff_x19 = 0, param_2 != 0)) {
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(param_2,0);
      if ((bRam0000000003ec1ac1 & 1) == 0) {
        func_0x00f78a20(0x3d232c0);
        bRam0000000003ec1ac1 = 1;
      }
      uVar5 = /*System.Math_TypeInfo*/ uRam0000000003d232c0;
      if (((*(ushort *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0xe0) == 0)) {
        uVar5 = func_0x00f78ad0();
      }
      return uVar5;
    }
  }
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb4ea2 & 1) == 0) {
    func_0x00f78a20(0x3d297b0);
    func_0x00f78a20(0x3d3dea0);
    bRam0000000003eb4ea2 = 1;
  }
  uVar5 = *(ulong *)(lVar9 + 0x28);
  uVar2 = func_0x00f78aec(/*Atlas.Audio.WeaponAudioManager.GraveyardInfo_TypeInfo*/ uRam0000000003d297b0);
  /*Atlas.Audio.WeaponAudioManager.GraveyardInfo$$.ctor*/ func_0x0156ec04(extraout_s0,uVar2,extraout_x1,0);
  if (uVar5 == 0) {
    uVar5 = func_0x00f78af4();
    if ((*(char *)(uVar5 + 0x2c) != '\0') &&
       (uVar3 = *(ulong *)(uVar5 + 0x10), uVar5 = 0, uVar3 != 0)) {
      if ((bRam0000000003eb56ac & 1) == 0) {
        func_0x00f78a20(0x3d24568,0,0);
        bRam0000000003eb56ac = 1;
      }
      lVar9 = uVar3 + 0x28;
      iVar1 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar9,0);
      if (iVar1 != 0) {
        uVar2 = *(undefined8 *)(uVar3 + 0x28);
        if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar2,0);
        /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar9,*(byte *)(uVar3 + 0x31) ^ 1,0);
        /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar9,0);
        /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar9,0);
      }
      return uVar3;
    }
    return uVar5;
  }
  lVar9 = *(long *)(uVar5 + 0x10);
  puVar7 = puRam0000000003d3dea0;
  if (lVar9 == 0) {
code_r0x0242716c:
    uVar2 = unaff_x20;
    uVar5 = unaff_x19;
    uVar3 = func_0x00f78af4();
    lVar9 = extraout_x9;
    uVar8 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar5 + 0x18) = uVar8 + 1;
  }
  else {
    uVar8 = *(uint *)(uVar5 + 0x18);
    uVar3 = uVar5;
    if (uVar8 != *(uint *)(lVar9 + 0x18)) goto code_r0x02427170;
    puVar7 = *(undefined8 **)(*(long *)(puRam0000000003d3dea0[3] + 0xc0) + 0x60);
    uVar3 = (*(code *)*puVar7)(uVar5,uVar8 + 1);
    lVar9 = *(long *)(uVar5 + 0x10);
    uVar8 = *(uint *)(uVar5 + 0x18);
    *(uint *)(uVar5 + 0x18) = uVar8 + 1;
    unaff_x19 = uVar5;
    unaff_x20 = uVar2;
    if (lVar9 == 0) goto code_r0x0242716c;
  }
  if (uVar8 < *(uint *)(lVar9 + 0x18)) {
    *(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20) = uVar2;
    *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
    return uVar3;
  }
  uVar2 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar2,0);
  lVar6 = auVar12._8_8_;
  lVar9 = auVar12._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))(lVar6,0x14);
  if (lVar9 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar11)();
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x28);
  lVar10 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (lVar6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = func_0x00f78adc(lVar6,lVar10);
    if (lVar4 == 0) {
      func_0x00f78e5c(lVar6,lVar10);
      goto code_r0x0242734c;
    }
  }
  (*pcVar11)(lVar9,lVar4,*(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0x28));
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68))(lVar9);
  return (ulong)(iVar1 - 1);
}



// ============================================================
// RVA: 0x1530194 | Atlas.Audio.WeaponAudioManager.MarkForDestroy
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01638aa8) */

ulong Atlas_Audio_WeaponAudioManager__MarkForDestroy
                (undefined4 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  uint extraout_w8;
  uint uVar7;
  long lVar8;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 unaff_x20;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  
  if ((bRam0000000003eb4ea2 & 1) == 0) {
    func_0x00f78a20(0x3d297b0);
    func_0x00f78a20(0x3d3dea0);
    bRam0000000003eb4ea2 = 1;
  }
  uVar9 = *(ulong *)(param_2 + 0x28);
  uVar2 = func_0x00f78aec(/*Atlas.Audio.WeaponAudioManager.GraveyardInfo_TypeInfo*/ uRam0000000003d297b0);
  /*Atlas.Audio.WeaponAudioManager.GraveyardInfo$$.ctor*/ func_0x0156ec04(param_1,uVar2,param_3,0);
  if (uVar9 == 0) {
    uVar9 = func_0x00f78af4();
    if ((*(char *)(uVar9 + 0x2c) != '\0') &&
       (uVar3 = *(ulong *)(uVar9 + 0x10), uVar9 = 0, uVar3 != 0)) {
      if ((bRam0000000003eb56ac & 1) == 0) {
        func_0x00f78a20(0x3d24568,0,0);
        bRam0000000003eb56ac = 1;
      }
      lVar8 = uVar3 + 0x28;
      iVar1 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar8,0);
      if (iVar1 != 0) {
        uVar2 = *(undefined8 *)(uVar3 + 0x28);
        if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar2,0);
        /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar8,*(byte *)(uVar3 + 0x31) ^ 1,0);
        /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar8,0);
        /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar8,0);
      }
      return uVar3;
    }
    return uVar9;
  }
  lVar8 = *(long *)(uVar9 + 0x10);
  puVar6 = puRam0000000003d3dea0;
  if (lVar8 == 0) {
code_r0x0242716c:
    uVar2 = unaff_x20;
    uVar9 = unaff_x19;
    uVar3 = func_0x00f78af4();
    lVar8 = extraout_x9;
    uVar7 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar9 + 0x18) = uVar7 + 1;
  }
  else {
    uVar7 = *(uint *)(uVar9 + 0x18);
    uVar3 = uVar9;
    if (uVar7 != *(uint *)(lVar8 + 0x18)) goto code_r0x02427170;
    puVar6 = *(undefined8 **)(*(long *)(puRam0000000003d3dea0[3] + 0xc0) + 0x60);
    uVar3 = (*(code *)*puVar6)(uVar9,uVar7 + 1);
    lVar8 = *(long *)(uVar9 + 0x10);
    uVar7 = *(uint *)(uVar9 + 0x18);
    *(uint *)(uVar9 + 0x18) = uVar7 + 1;
    unaff_x19 = uVar9;
    unaff_x20 = uVar2;
    if (lVar8 == 0) goto code_r0x0242716c;
  }
  if (uVar7 < *(uint *)(lVar8 + 0x18)) {
    *(undefined8 *)(lVar8 + (long)(int)uVar7 * 8 + 0x20) = uVar2;
    *(int *)(uVar9 + 0x1c) = *(int *)(uVar9 + 0x1c) + 1;
    return uVar3;
  }
  uVar2 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar2,0);
  lVar5 = auVar12._8_8_;
  lVar8 = auVar12._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x48))(lVar5,0x14);
  if (lVar8 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar11)();
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x28);
  lVar10 = *(long *)(*(long *)(puVar6[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = func_0x00f78adc(lVar5,lVar10);
    if (lVar4 == 0) {
      func_0x00f78e5c(lVar5,lVar10);
      goto code_r0x0242734c;
    }
  }
  (*pcVar11)(lVar8,lVar4,*(undefined8 *)(*(long *)(puVar6[3] + 0xc0) + 0x28));
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x68))(lVar8);
  return (ulong)(iVar1 - 1);
}



// ============================================================
// RVA: 0x15302c8 | Atlas.Audio.WeaponAudioManager.Deregister
// ============================================================

void Atlas_Audio_WeaponAudioManager__Deregister(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar6;
  long lVar7;
  undefined8 unaff_x19;
  int iVar8;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong uVar9;
  undefined8 unaff_x22;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 *puVar13;
  undefined *puVar14;
  ulong uVar10;
  
  if ((bRam0000000003eb4ea3 & 1) == 0) {
    func_0x00f78a20(0x3d3c948);
    func_0x00f78a20(0x3d3dec0);
    func_0x00f78a20(0x3d3c950);
    func_0x00f78a20(0x3d3dec8);
    func_0x00f78a20(0x3d3ded0);
    bRam0000000003eb4ea3 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x28) + 0x18);
    do {
      uVar10 = uVar9;
      uVar2 = (int)uVar10 - 1;
      uVar9 = (ulong)uVar2;
      if ((int)uVar2 < 0) {
        return;
      }
      lVar11 = *(long *)(param_1 + 0x28);
      if (lVar11 == 0) goto LAB_015303f0;
      if (*(uint *)(lVar11 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + uVar9 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_015303f0;
    } while (*(long *)(lVar11 + 0x10) != param_2);
    if (*(long *)(param_1 + 0x20) != 0) {
      iVar3 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(param_1 + 0x20),param_2,uRam0000000003d3c948);
      if (iVar3 != 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_015303f0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(param_1 + 0x20),param_2,uRam0000000003d3c950);
      }
      lVar11 = *(long *)(param_1 + 0x28);
      if (lVar11 != 0) {
        puVar13 = &stack0xfffffffffffffff0;
        uVar6 = *(uint *)(lVar11 + 0x18);
        uVar4 = uRam0000000003d3dec0;
        if (uVar6 <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar6 = *(uint *)(lVar11 + 0x18);
        }
        iVar3 = uVar6 - 1;
        *(int *)(lVar11 + 0x18) = iVar3;
        if (iVar3 - uVar2 != 0 && (int)uVar2 <= iVar3) {
          uVar4 = *(undefined8 *)(lVar11 + 0x10);
          /*System.Array$$Copy*/ func_0x0292b4cc(uVar4,uVar10,uVar4,uVar9,iVar3 - uVar2,0,in_x6,in_x7,unaff_x20,unaff_x19);
        }
        lVar7 = *(long *)(lVar11 + 0x10);
        if (lVar7 == 0) {
          func_0x00f78af4();
        }
        else if (*(uint *)(lVar11 + 0x18) < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + (long)(int)*(uint *)(lVar11 + 0x18) * 8 + 0x20) = 0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          return;
        }
        uVar5 = func_0x00f78b24();
        auVar12 = func_0x00f78ac0(uVar5,0);
        lVar7 = auVar12._0_8_;
        puVar14 = &System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange;
        iVar3 = auVar12._8_4_;
        iVar8 = (int)uVar4;
        if (iVar3 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
        }
        if (iVar8 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
        }
        if (*(int *)(lVar7 + 0x18) - iVar3 < iVar8) {
          /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
        }
        if (0 < iVar8) {
          iVar1 = *(int *)(lVar7 + 0x18) - iVar8;
          *(int *)(lVar7 + 0x18) = iVar1;
          if (iVar1 - iVar3 != 0 && iVar3 <= iVar1) {
            /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar7 + 0x10),iVar8 + iVar3,
                            *(undefined8 *)(lVar7 + 0x10),auVar12._8_8_,iVar1 - iVar3,0,in_x6,in_x7,
                            unaff_x22,unaff_x21,uVar9,lVar11,puVar13,puVar14);
            iVar1 = *(int *)(lVar7 + 0x18);
          }
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar7 + 0x10),iVar1,uVar4,0);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        }
        return;
      }
    }
  }
LAB_015303f0:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15303fc | Atlas.Audio.WeaponAudioManager.Init
// ============================================================

void Atlas_Audio_WeaponAudioManager__Init(long param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  int extraout_w1;
  uint uVar7;
  undefined8 *puVar8;
  float extraout_s0;
  float fVar9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  puVar8 = (undefined8 *)0x3d30688;
  if ((bRam0000000003eb4e9e & 1) == 0) {
    func_0x00f78a20(0x3d30690);
    func_0x00f78a20(0x3d30688);
    func_0x00f78a20(0x3d1c680);
    func_0x00f78a20(0x3d76390);
    func_0x00f78a20(0x3d763e8);
    func_0x00f78a20(0x3d763e0);
    func_0x00f78a20(0x3d763a8);
    func_0x00f78a20(0x3d763c0);
    func_0x00f78a20(0x3d76380);
    func_0x00f78a20(0x3d76388);
    bRam0000000003eb4e9e = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  lVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>_TypeInfo*/ uRam0000000003d1c680);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(lVar3,uRam0000000003d30688);
  if (lVar3 != 0) {
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar3,0,/*STR('Weapons/RedShellNew')*/ uRam0000000003d763c0,uRam0000000003d30690);
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar3,1,/*STR('Weapons/Clam')*/ uRam0000000003d76388,uRam0000000003d30690);
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar3,2,/*STR('Weapons/Turd')*/ uRam0000000003d763e8,uRam0000000003d30690);
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar3,3,/*STR('Weapons/CulturePod')*/ uRam0000000003d76390,uRam0000000003d30690);
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar3,6,/*STR('Weapons/Boost')*/ uRam0000000003d76380,uRam0000000003d30690);
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar3,7,/*STR('Weapons/LaserWeapon')*/ uRam0000000003d763a8,uRam0000000003d30690);
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar3,8,/*STR('Weapons/SpeedShield')*/ uRam0000000003d763e0,uRam0000000003d30690);
    *(long *)(param_1 + 0x10) = lVar3;
    return;
  }
  lVar4 = func_0x00f78af4();
  uStack_90 = 0x3d1c680;
  uStack_88 = 0x3d30688;
  puStack_68 = &Atlas_Audio_WeaponAudioManager__DeInit;
  lStack_80 = lVar3;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e9f & 1) == 0) {
    func_0x00f78a20(0x3d30698);
    func_0x00f78a20(0x3d33858);
    func_0x00f78a20(0x3d33860);
    func_0x00f78a20(0x3d33868);
    func_0x00f78a20(0x3d3dea8);
    func_0x00f78a20(0x3d3deb0);
    bRam0000000003eb4e9f = 1;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  if (*(long *)(lVar4 + 0x10) == 0) goto code_r0x015306fc;
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Clear*/ func_0x01ea7390(*(long *)(lVar4 + 0x10),uRam0000000003d30698);
  *(undefined8 *)(lVar4 + 0x10) = 0;
  if (*(long *)(lVar4 + 0x28) == 0) goto code_r0x015306fc;
  puVar8 = (undefined8 *)0x3d3dea8;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(lVar4 + 0x28),uRam0000000003d3deb0);
  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a8,uRam0000000003d33860), (uVar5 & 1) != 0) {
    if (lStack_98 == 0) {
      func_0x00f78af4();
code_r0x015306f8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15306fc);
      (*pcVar1)();
    }
    if (*(long *)(lStack_98 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x015306f8;
    }
    Atlas_Audio_WeaponAudio__DeInit();
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,uRam0000000003d33858);
  do {
    if (*(long *)(lVar4 + 0x28) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar4 + 0x28),*puVar8);
      return;
    }
code_r0x015306fc:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01530744;
    plVar6 = (long *)___cxa_begin_catch();
    lVar3 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,uRam0000000003d33858);
  } while (lVar3 == 0);
  func_0x00f78ac0(lVar3,0);
code_r0x01530744:
  lVar3 = __Unwind_Resume();
  if ((bRam0000000003eb4ea0 & 1) == 0) {
    func_0x00f78a20(0x3d3c948);
    func_0x00f78a20(0x3d3c950);
    func_0x00f78a20(0x3d3deb8);
    func_0x00f78a20(0x3d3dec8);
    func_0x00f78a20(0x3d3ded0);
    bRam0000000003eb4ea0 = 1;
  }
  lVar4 = *(long *)(lVar3 + 0x28);
  if (lVar4 != 0) {
    uVar7 = *(int *)(lVar4 + 0x18) - 1;
    if (*(int *)(lVar4 + 0x18) < 1) {
      return;
    }
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar7) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (ulong)uVar7 * 8 + 0x20);
      if (lVar4 == 0) break;
      fVar9 = *(float *)(lVar4 + 0x18) - extraout_s0;
      *(float *)(lVar4 + 0x18) = fVar9;
      if (fVar9 <= 0.0) {
        if (*(long *)(lVar4 + 0x10) == 0) break;
        Atlas_Audio_WeaponAudio__DeInit();
        if (*(long *)(lVar3 + 0x20) == 0) break;
        iVar2 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(lVar3 + 0x20),*(undefined8 *)(lVar4 + 0x10),
                                uRam0000000003d3c948);
        if (iVar2 != 0) {
          if (*(long *)(lVar3 + 0x20) == 0) break;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(lVar3 + 0x20),*(undefined8 *)(lVar4 + 0x10),uRam0000000003d3c950
                         );
        }
        if (*(long *)(lVar3 + 0x28) == 0) break;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(lVar3 + 0x28),lVar4,uRam0000000003d3deb8);
      }
      uVar7 = uVar7 - 1;
      if ((int)uVar7 < 0) {
        return;
      }
      lVar4 = *(long *)(lVar3 + 0x28);
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15305c8 | Atlas.Audio.WeaponAudioManager.DeInit
// ============================================================

void Atlas_Audio_WeaponAudioManager__DeInit(long param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  int extraout_w1;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 *unaff_x21;
  float extraout_s0;
  float fVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb4e9f & 1) == 0) {
    func_0x00f78a20(0x3d30698);
    func_0x00f78a20(0x3d33858);
    func_0x00f78a20(0x3d33860);
    func_0x00f78a20(0x3d33868);
    func_0x00f78a20(0x3d3dea8);
    func_0x00f78a20(0x3d3deb0);
    bRam0000000003eb4e9f = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_015306fc;
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Clear*/ func_0x01ea7390(*(long *)(param_1 + 0x10),uRam0000000003d30698);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_015306fc;
  unaff_x21 = (undefined8 *)0x3d3dea8;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*(long *)(param_1 + 0x28),uRam0000000003d3deb0);
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d33860), (uVar3 & 1) != 0) {
    if (lStack_38 == 0) {
      func_0x00f78af4();
code_r0x015306f8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15306fc);
      (*pcVar1)();
    }
    if (*(long *)(lStack_38 + 0x10) == 0) {
      func_0x00f78af4();
      goto code_r0x015306f8;
    }
    Atlas_Audio_WeaponAudio__DeInit();
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d33858);
  do {
    if (*(long *)(param_1 + 0x28) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x28),*unaff_x21);
      return;
    }
LAB_015306fc:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01530744;
    plVar4 = (long *)___cxa_begin_catch();
    lVar5 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d33858);
  } while (lVar5 == 0);
  func_0x00f78ac0(lVar5,0);
code_r0x01530744:
  lVar5 = __Unwind_Resume();
  if ((bRam0000000003eb4ea0 & 1) == 0) {
    func_0x00f78a20(0x3d3c948);
    func_0x00f78a20(0x3d3c950);
    func_0x00f78a20(0x3d3deb8);
    func_0x00f78a20(0x3d3dec8);
    func_0x00f78a20(0x3d3ded0);
    bRam0000000003eb4ea0 = 1;
  }
  lVar6 = *(long *)(lVar5 + 0x28);
  if (lVar6 != 0) {
    uVar7 = *(int *)(lVar6 + 0x18) - 1;
    if (*(int *)(lVar6 + 0x18) < 1) {
      return;
    }
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar7) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (ulong)uVar7 * 8 + 0x20);
      if (lVar6 == 0) break;
      fVar8 = *(float *)(lVar6 + 0x18) - extraout_s0;
      *(float *)(lVar6 + 0x18) = fVar8;
      if (fVar8 <= 0.0) {
        if (*(long *)(lVar6 + 0x10) == 0) break;
        Atlas_Audio_WeaponAudio__DeInit();
        if (*(long *)(lVar5 + 0x20) == 0) break;
        iVar2 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(lVar5 + 0x20),*(undefined8 *)(lVar6 + 0x10),
                                uRam0000000003d3c948);
        if (iVar2 != 0) {
          if (*(long *)(lVar5 + 0x20) == 0) break;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(lVar5 + 0x20),*(undefined8 *)(lVar6 + 0x10),uRam0000000003d3c950
                         );
        }
        if (*(long *)(lVar5 + 0x28) == 0) break;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(lVar5 + 0x28),lVar6,uRam0000000003d3deb8);
      }
      uVar7 = uVar7 - 1;
      if ((int)uVar7 < 0) {
        return;
      }
      lVar6 = *(long *)(lVar5 + 0x28);
    } while (lVar6 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1530748 | Atlas.Audio.WeaponAudioManager.Update
// ============================================================

void Atlas_Audio_WeaponAudioManager__Update(float param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  
  if ((bRam0000000003eb4ea0 & 1) == 0) {
    func_0x00f78a20(0x3d3c948);
    func_0x00f78a20(0x3d3c950);
    func_0x00f78a20(0x3d3deb8);
    func_0x00f78a20(0x3d3dec8);
    func_0x00f78a20(0x3d3ded0);
    bRam0000000003eb4ea0 = 1;
  }
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 != 0) {
    uVar3 = *(int *)(lVar2 + 0x18) - 1;
    if (*(int *)(lVar2 + 0x18) < 1) {
      return;
    }
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + (ulong)uVar3 * 8 + 0x20);
      if (lVar2 == 0) break;
      fVar4 = *(float *)(lVar2 + 0x18) - param_1;
      *(float *)(lVar2 + 0x18) = fVar4;
      if (fVar4 <= 0.0) {
        if (*(long *)(lVar2 + 0x10) == 0) break;
        Atlas_Audio_WeaponAudio__DeInit();
        if (*(long *)(param_2 + 0x20) == 0) break;
        iVar1 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(param_2 + 0x20),*(undefined8 *)(lVar2 + 0x10),
                                uRam0000000003d3c948);
        if (iVar1 != 0) {
          if (*(long *)(param_2 + 0x20) == 0) break;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(param_2 + 0x20),*(undefined8 *)(lVar2 + 0x10),
                          uRam0000000003d3c950);
        }
        if (*(long *)(param_2 + 0x28) == 0) break;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(param_2 + 0x28),lVar2,uRam0000000003d3deb8);
      }
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
        return;
      }
      lVar2 = *(long *)(param_2 + 0x28);
    } while (lVar2 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1530894 | Atlas.Audio.WeaponAudioManager.Create
// ============================================================

/* WARNING: Possible PIC construction at 0x0153093c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01530b3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01530940) */
/* WARNING: Removing unreachable block (ram,0x01530948) */
/* WARNING: Removing unreachable block (ram,0x01530990) */
/* WARNING: Removing unreachable block (ram,0x01530994) */
/* WARNING: Removing unreachable block (ram,0x015309b8) */
/* WARNING: Removing unreachable block (ram,0x01530b40) */
/* WARNING: Removing unreachable block (ram,0x01530b48) */

long Atlas_Audio_WeaponAudioManager__Create(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000003eb4ea1 & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d306a0);
    func_0x00f78a20(0x3d306a8);
    func_0x00f78a20(0x3d3c938);
    func_0x00f78a20(0x3d25aa0);
    bRam0000000003eb4ea1 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar3 = func_0x00f78af4();
    if ((bRam0000000003eb4ea4 & 1) == 0) {
      func_0x00f78a20(0x3d3dea8);
      func_0x00f78a20(0x3d3c940);
      func_0x00f78a20(0x3d3c958);
      func_0x00f78a20(0x3d3dec8);
      func_0x00f78a20(0x3d3c960);
      func_0x00f78a20(0x3d3ded0);
      bRam0000000003eb4ea4 = 1;
    }
    lVar5 = *(long *)(lVar3 + 0x28);
    if (lVar5 != 0) {
      uVar1 = *(int *)(lVar5 + 0x18) - 1;
      if ((int)uVar1 < 0) {
code_r0x01530ad8:
        lVar5 = *(long *)(lVar3 + 0x20);
        if (lVar5 != 0) {
          uVar1 = *(int *)(lVar5 + 0x18) - 1;
          if ((int)uVar1 < 0) {
code_r0x01530b28:
            lVar3 = *(long *)(lVar3 + 0x28);
            if (lVar3 != 0) {
              lVar5 = lVar3;
              if (0 < *(int *)(lVar3 + 0x18)) {
                lVar5 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar3 + 0x10),0,*(int *)(lVar3 + 0x18),0);
                *(undefined4 *)(lVar3 + 0x18) = 0;
              }
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              return lVar5;
            }
          }
          else {
            do {
              if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              if (*(long *)(*(long *)(lVar5 + 0x10) + (ulong)uVar1 * 8 + 0x20) != 0) {
                Atlas_Audio_WeaponAudio__DeInit();
              }
              uVar1 = uVar1 - 1;
              if ((int)uVar1 < 0) goto code_r0x01530b28;
              lVar5 = *(long *)(lVar3 + 0x20);
            } while (lVar5 != 0);
          }
        }
      }
      else {
        do {
          if (*(uint *)(lVar5 + 0x18) <= uVar1) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (ulong)uVar1 * 8 + 0x20);
          if (lVar5 == 0) break;
          lVar5 = *(long *)(lVar5 + 0x10);
          if (lVar5 != 0) {
            if ((*(char *)(lVar5 + 0x2c) != '\0') && (*(long *)(lVar5 + 0x10) != 0)) {
              /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar5 + 0x10),0,0);
            }
            Atlas_Audio_WeaponAudio__DeInit(lVar5);
          }
          uVar1 = uVar1 - 1;
          if ((int)uVar1 < 0) goto code_r0x01530ad8;
          lVar5 = *(long *)(lVar3 + 0x28);
        } while (lVar5 != 0);
      }
    }
    lVar3 = func_0x00f78af4();
    if ((bRam0000000003eb4ea5 & 1) == 0) {
      func_0x00f78a20(0x3d3c930);
      func_0x00f78a20(0x3d3de98);
      func_0x00f78a20(0x3d1e3e0);
      func_0x00f78a20(0x3d1dfd0);
      bRam0000000003eb4ea5 = 1;
    }
    uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<WeaponAudio>_TypeInfo*/ uRam0000000003d1dfd0);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar4,uRam0000000003d3c930);
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>_TypeInfo*/ uRam0000000003d1e3e0);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar4,uRam0000000003d3de98);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
  }
  else {
    iVar2 = /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$ContainsKey*/ func_0x01ea7430(*(long *)(param_1 + 0x10),param_2,uRam0000000003d306a0);
    if (iVar2 == 0) {
      return 0;
    }
    lVar3 = func_0x00f78aec(/*Atlas.Audio.WeaponAudio_TypeInfo*/ uRam0000000003d25aa0);
  }
  return lVar3;
}



// ============================================================
// RVA: 0x15309f0 | Atlas.Audio.WeaponAudioManager.ClearAllWeapons
// ============================================================

/* WARNING: Possible PIC construction at 0x01530b3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01530b40) */
/* WARNING: Removing unreachable block (ram,0x01530b48) */

undefined1  [16] Atlas_Audio_WeaponAudioManager__ClearAllWeapons(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4ea4 & 1) == 0) {
    func_0x00f78a20(0x3d3dea8);
    func_0x00f78a20(0x3d3c940);
    func_0x00f78a20(0x3d3c958);
    func_0x00f78a20(0x3d3dec8);
    func_0x00f78a20(0x3d3c960);
    func_0x00f78a20(0x3d3ded0);
    bRam0000000003eb4ea4 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar1 = *(int *)(lVar3 + 0x18) - 1;
    if ((int)uVar1 < 0) {
LAB_01530ad8:
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 != 0) {
        uVar1 = *(int *)(lVar3 + 0x18) - 1;
        if ((int)uVar1 < 0) {
code_r0x01530b28:
          lVar3 = *(long *)(param_1 + 0x28);
          auVar4._8_8_ = uRam0000000003d3dea8;
          auVar4._0_8_ = lVar3;
          if (lVar3 != 0) {
            if (0 < *(int *)(lVar3 + 0x18)) {
              auVar4 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar3 + 0x10),0,*(int *)(lVar3 + 0x18),0);
              *(undefined4 *)(lVar3 + 0x18) = 0;
            }
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            return auVar4;
          }
        }
        else {
          do {
            if (*(uint *)(lVar3 + 0x18) <= uVar1) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (*(long *)(*(long *)(lVar3 + 0x10) + (ulong)uVar1 * 8 + 0x20) != 0) {
              Atlas_Audio_WeaponAudio__DeInit();
            }
            uVar1 = uVar1 - 1;
            if ((int)uVar1 < 0) goto code_r0x01530b28;
            lVar3 = *(long *)(param_1 + 0x20);
          } while (lVar3 != 0);
        }
      }
    }
    else {
      do {
        if (*(uint *)(lVar3 + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (ulong)uVar1 * 8 + 0x20);
        if (lVar3 == 0) break;
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 != 0) {
          if ((*(char *)(lVar3 + 0x2c) != '\0') && (*(long *)(lVar3 + 0x10) != 0)) {
            /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar3 + 0x10),0,0);
          }
          Atlas_Audio_WeaponAudio__DeInit(lVar3);
        }
        uVar1 = uVar1 - 1;
        if ((int)uVar1 < 0) goto LAB_01530ad8;
        lVar3 = *(long *)(param_1 + 0x28);
      } while (lVar3 != 0);
    }
  }
  auVar5._0_8_ = func_0x00f78af4();
  if ((bRam0000000003eb4ea5 & 1) == 0) {
    func_0x00f78a20(0x3d3c930);
    func_0x00f78a20(0x3d3de98);
    func_0x00f78a20(0x3d1e3e0);
    func_0x00f78a20(0x3d1dfd0);
    bRam0000000003eb4ea5 = 1;
  }
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<WeaponAudio>_TypeInfo*/ uRam0000000003d1dfd0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar2,uRam0000000003d3c930);
  *(undefined8 *)(auVar5._0_8_ + 0x20) = uVar2;
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>_TypeInfo*/ uRam0000000003d1e3e0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar2,uRam0000000003d3de98);
  *(undefined8 *)(auVar5._0_8_ + 0x28) = uVar2;
  auVar5._8_8_ = 0;
  return auVar5;
}



// ============================================================
// RVA: 0x1530b68 | Atlas.Audio.WeaponAudioManager..ctor
// ============================================================

undefined1  [16] Atlas_Audio_WeaponAudioManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4ea5 & 1) == 0) {
    func_0x00f78a20(0x3d3c930);
    func_0x00f78a20(0x3d3de98);
    func_0x00f78a20(0x3d1e3e0);
    func_0x00f78a20(0x3d1dfd0);
    bRam0000000003eb4ea5 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<WeaponAudio>_TypeInfo*/ uRam0000000003d1dfd0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3c930);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>_TypeInfo*/ uRam0000000003d1e3e0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3de98);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



