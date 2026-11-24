// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Audio.WeaponAudio

// ============================================================
// RVA: 0x152fde0 | Atlas.Audio.WeaponAudio.get_WeaponName
// ============================================================

undefined4 Atlas_Audio_WeaponAudio__get_WeaponName(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x152fde8 | Atlas.Audio.WeaponAudio.set_WeaponName
// ============================================================

void Atlas_Audio_WeaponAudio__set_WeaponName(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ============================================================
// RVA: 0x152fdf0 | Atlas.Audio.WeaponAudio.Pickup
// ============================================================

long Atlas_Audio_WeaponAudio__Pickup(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  if ((bRam0000000003eb4e99 & 1) == 0) {
    lVar1 = func_0x00f78a20(0x3d76368);
    bRam0000000003eb4e99 = 1;
  }
  if ((*(char *)(param_1 + 0x2c) != '\0') &&
     (lVar2 = *(long *)(param_1 + 0x10), lVar1 = 0, lVar2 != 0)) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0x3f800000,lVar2,*(undefined8 *)(param_1 + 0x18),/*STR('WeaponActions')*/ uRam0000000003d76368,0);
    return lVar2;
  }
  return lVar1;
}



// ============================================================
// RVA: 0x152fe60 | Atlas.Audio.WeaponAudio.Use
// ============================================================

long Atlas_Audio_WeaponAudio__Use(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  if ((bRam0000000003eb4e9a & 1) == 0) {
    lVar1 = func_0x00f78a20(0x3d76368);
    bRam0000000003eb4e9a = 1;
  }
  if ((*(char *)(param_1 + 0x2c) != '\0') &&
     (lVar2 = *(long *)(param_1 + 0x10), lVar1 = 0, lVar2 != 0)) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0x40000000,lVar2,*(undefined8 *)(param_1 + 0x18),/*STR('WeaponActions')*/ uRam0000000003d76368,0);
    return lVar2;
  }
  return lVar1;
}



// ============================================================
// RVA: 0x152fed0 | Atlas.Audio.WeaponAudio.InTransit
// ============================================================

long Atlas_Audio_WeaponAudio__InTransit(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = param_1;
  if ((bRam0000000003eb4e9b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    lVar1 = func_0x00f78a20(0x3d76368);
    bRam0000000003eb4e9b = 1;
  }
  if ((*(char *)(param_1 + 0x2c) != '\0') && (lVar3 = *(long *)(param_1 + 0x10), lVar3 != 0)) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_2,0);
    if ((uVar2 & 1) == 0) {
      param_2 = *(undefined8 *)(param_1 + 0x18);
    }
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0x40400000,lVar3,param_2,/*STR('WeaponActions')*/ uRam0000000003d76368,0);
    return lVar3;
  }
  return lVar1;
}



// ============================================================
// RVA: 0x152ff94 | Atlas.Audio.WeaponAudio.Ricochet
// ============================================================

long Atlas_Audio_WeaponAudio__Ricochet(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  if ((bRam0000000003eb4e9c & 1) == 0) {
    lVar1 = func_0x00f78a20(0x3d76368);
    bRam0000000003eb4e9c = 1;
  }
  if ((*(char *)(param_1 + 0x2c) != '\0') &&
     (lVar2 = *(long *)(param_1 + 0x10), lVar1 = 0, lVar2 != 0)) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0x40800000,lVar2,*(undefined8 *)(param_1 + 0x18),/*STR('WeaponActions')*/ uRam0000000003d76368,0);
    return lVar2;
  }
  return lVar1;
}



// ============================================================
// RVA: 0x1530004 | Atlas.Audio.WeaponAudio.Explode
// ============================================================

/* WARNING: Possible PIC construction at 0x0153005c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01530060) */
/* WARNING: Removing unreachable block (ram,0x01530068) */
/* WARNING: Removing unreachable block (ram,0x0153006c) */
/* WARNING: Removing unreachable block (ram,0x01530070) */
/* WARNING: Removing unreachable block (ram,0x01530084) */
/* WARNING: Removing unreachable block (ram,0x0153008c) */
/* WARNING: Removing unreachable block (ram,0x01530090) */
/* WARNING: Removing unreachable block (ram,0x015300a4) */
/* WARNING: Removing unreachable block (ram,0x015300a8) */
/* WARNING: Removing unreachable block (ram,0x015300b0) */
/* WARNING: Removing unreachable block (ram,0x01638aa8) */

ulong Atlas_Audio_WeaponAudio__Explode(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x1;
  undefined8 *puVar11;
  uint extraout_w8;
  uint uVar12;
  long extraout_x9;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong uVar13;
  undefined8 unaff_x21;
  undefined8 uVar14;
  undefined8 unaff_x22;
  long lVar15;
  undefined8 unaff_x23;
  code *pcVar16;
  undefined8 unaff_x24;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined *puVar17;
  undefined4 uVar18;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  long lVar10;
  
  uVar14 = 0x3eb4000;
  if ((bRam0000000003eb4e9d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d76368);
    bRam0000000003eb4e9d = 1;
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 == 0) goto LAB_015300ec;
    uVar18 = *(undefined4 *)(param_1 + 0x28);
    puVar3 = (undefined1 *)register0x00000008;
    param_2 = unaff_x20;
    uVar14 = unaff_x21;
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_015300ec:
      puVar17 = &Atlas_Audio_WeaponAudioManager__DistanceFromPlayer;
      auVar19 = func_0x00f78af4();
    }
    else {
      auVar19._8_8_ = *(undefined8 *)(param_1 + 0x18);
      auVar19._0_8_ = *(long *)(param_1 + 0x20);
      puVar17 = (undefined *)0x1530060;
    }
    puVar3 = &stack0xffffffffffffff90;
    unaff_x29 = &puStack_40;
    lVar5 = *(long *)(auVar19._0_8_ + 0x18);
    unaff_x19 = param_1;
    puStack_40 = &stack0xfffffffffffffff0;
    puStack_38 = puVar17;
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x48);
      if (lVar5 == 0) {
        return auVar19._0_8_;
      }
      lVar5 = *(long *)(lVar5 + 0xb8);
      if ((lVar5 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0), unaff_x19 = 0, auVar19._8_8_ != 0)) {
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(auVar19._8_8_,0);
        if ((bRam0000000003ec1ac1 & 1) == 0) {
          func_0x00f78a20(0x3d232c0);
          bRam0000000003ec1ac1 = 1;
        }
        uVar13 = /*System.Math_TypeInfo*/ uRam0000000003d232c0;
        if (((*(ushort *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0xe0) == 0)) {
          uVar13 = func_0x00f78ad0();
        }
        return uVar13;
      }
    }
    unaff_x30 = &Atlas_Audio_WeaponAudioManager__MarkForDestroy;
    lVar5 = func_0x00f78af4();
    param_1 = extraout_x1;
    uVar18 = extraout_s0;
  }
  *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
  *(undefined8 *)(puVar3 + -0x38) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = uVar14;
  *(undefined8 *)(puVar3 + -0x20) = param_2;
  *(long *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  if ((bRam0000000003eb4ea2 & 1) == 0) {
    func_0x00f78a20(0x3d297b0);
    func_0x00f78a20(0x3d3dea0);
    bRam0000000003eb4ea2 = 1;
  }
  uVar13 = *(ulong *)(lVar5 + 0x28);
  uVar14 = func_0x00f78aec(/*Atlas.Audio.WeaponAudioManager.GraveyardInfo_TypeInfo*/ uRam0000000003d297b0);
  /*Atlas.Audio.WeaponAudioManager.GraveyardInfo$$.ctor*/ func_0x0156ec04(uVar18,uVar14,param_1,0);
  if (uVar13 == 0) {
    uVar13 = func_0x00f78af4();
    if ((*(char *)(uVar13 + 0x2c) != '\0') &&
       (uVar6 = *(ulong *)(uVar13 + 0x10), uVar13 = 0, uVar6 != 0)) {
      *(undefined8 *)(puVar3 + -0x70) = 0x3eb4000;
      *(undefined8 *)(puVar3 + -0x68) = uVar14;
      *(undefined8 *)(puVar3 + -0x60) = 0;
      *(long *)(puVar3 + -0x58) = param_1;
      *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
      *(undefined **)(puVar3 + -0x48) = &Atlas_Audio_WeaponAudio__Stop;
      if ((bRam0000000003eb56ac & 1) == 0) {
        func_0x00f78a20(0x3d24568,0,0);
        bRam0000000003eb56ac = 1;
      }
      lVar5 = uVar6 + 0x28;
      iVar4 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar5,0);
      if (iVar4 != 0) {
        uVar14 = *(undefined8 *)(uVar6 + 0x28);
        if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar14,0);
        /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar5,*(byte *)(uVar6 + 0x31) ^ 1,0);
        /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar5,0);
        /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar5,0);
      }
      return uVar6;
    }
    return uVar13;
  }
  uVar8 = *(undefined8 *)(puVar3 + -0x20);
  uVar6 = *(ulong *)(puVar3 + -0x18);
  uVar1 = *(undefined8 *)(puVar3 + -0x30);
  uVar2 = *(undefined8 *)(puVar3 + -0x28);
  *(undefined8 *)(puVar3 + -0x20) = uVar8;
  *(ulong *)(puVar3 + -0x18) = uVar6;
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  lVar5 = *(long *)(uVar13 + 0x10);
  puVar11 = puRam0000000003d3dea0;
  if (lVar5 == 0) {
code_r0x0242716c:
    uVar14 = uVar8;
    uVar13 = uVar6;
    uVar7 = func_0x00f78af4();
    lVar5 = extraout_x9;
    uVar12 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar13 + 0x18) = uVar12 + 1;
  }
  else {
    uVar12 = *(uint *)(uVar13 + 0x18);
    uVar7 = uVar13;
    if (uVar12 != *(uint *)(lVar5 + 0x18)) goto code_r0x02427170;
    puVar11 = *(undefined8 **)(*(long *)(puRam0000000003d3dea0[3] + 0xc0) + 0x60);
    uVar7 = (*(code *)*puVar11)(uVar13,uVar12 + 1);
    lVar5 = *(long *)(uVar13 + 0x10);
    uVar12 = *(uint *)(uVar13 + 0x18);
    *(uint *)(uVar13 + 0x18) = uVar12 + 1;
    uVar6 = uVar13;
    uVar8 = uVar14;
    if (lVar5 == 0) goto code_r0x0242716c;
  }
  if (uVar12 < *(uint *)(lVar5 + 0x18)) {
    *(undefined8 *)(lVar5 + (long)(int)uVar12 * 8 + 0x20) = uVar14;
    *(int *)(uVar13 + 0x1c) = *(int *)(uVar13 + 0x1c) + 1;
    return uVar7;
  }
  uVar8 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar8,0);
  lVar10 = auVar19._8_8_;
  lVar5 = auVar19._0_8_;
  *(undefined8 *)(puVar3 + -0x60) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x58) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x50) = uVar1;
  *(undefined8 *)(puVar3 + -0x48) = uVar2;
  *(undefined8 *)(puVar3 + -0x40) = uVar14;
  *(ulong *)(puVar3 + -0x38) = uVar13;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x48))(lVar10,0x14);
  if (lVar5 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar16)();
  }
  pcVar16 = (code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x28);
  lVar15 = *(long *)(*(long *)(puVar11[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar15);
  }
  if (lVar10 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = func_0x00f78adc(lVar10,lVar15);
    if (lVar9 == 0) {
      func_0x00f78e5c(lVar10,lVar15);
      goto code_r0x0242734c;
    }
  }
  (*pcVar16)(lVar5,lVar9,*(undefined8 *)(*(long *)(puVar11[3] + 0xc0) + 0x28));
  iVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x68))(lVar5);
  return (ulong)(iVar4 - 1);
}



// ============================================================
// RVA: 0x1530238 | Atlas.Audio.WeaponAudio.Stop
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01638aa8) */

long Atlas_Audio_WeaponAudio__Stop(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((*(char *)(param_1 + 0x2c) != '\0') &&
     (lVar3 = *(long *)(param_1 + 0x10), param_1 = 0, lVar3 != 0)) {
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
  return param_1;
}



// ============================================================
// RVA: 0x1530258 | Atlas.Audio.WeaponAudio.Init
// ============================================================

void Atlas_Audio_WeaponAudio__Init
               (undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  *(undefined8 *)(param_2 + 0x10) = param_3;
  *(undefined8 *)(param_2 + 0x18) = param_4;
  *(undefined8 *)(param_2 + 0x20) = param_5;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  *(undefined1 *)(param_2 + 0x2c) = 1;
  return;
}



// ============================================================
// RVA: 0x1530270 | Atlas.Audio.WeaponAudio.DeInit
// ============================================================

void Atlas_Audio_WeaponAudio__DeInit(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  long unaff_x19;
  int iVar12;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong uVar13;
  undefined8 unaff_x22;
  long lVar15;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar16 [16];
  ulong uVar14;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((*(char *)(param_1 + 0x2c) != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(param_1 + 0x10),0,0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(*(long *)(param_1 + 0x10),0);
  }
  lVar7 = *(long *)(param_1 + 0x20);
  lVar8 = param_1;
  if (lVar7 == 0) {
    unaff_x30 = &Atlas_Audio_WeaponAudioManager__Deregister;
    auVar16 = func_0x00f78af4();
    lVar7 = auVar16._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    lVar8 = auVar16._8_8_;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4ea3 & 1) == 0) {
    func_0x00f78a20(0x3d3c948);
    func_0x00f78a20(0x3d3dec0);
    func_0x00f78a20(0x3d3c950);
    func_0x00f78a20(0x3d3dec8);
    func_0x00f78a20(0x3d3ded0);
    bRam0000000003eb4ea3 = 1;
  }
  if (*(long *)(lVar7 + 0x28) != 0) {
    uVar13 = (ulong)*(uint *)(*(long *)(lVar7 + 0x28) + 0x18);
    do {
      uVar14 = uVar13;
      uVar5 = (int)uVar14 - 1;
      uVar13 = (ulong)uVar5;
      if ((int)uVar5 < 0) {
        return;
      }
      lVar15 = *(long *)(lVar7 + 0x28);
      if (lVar15 == 0) goto code_r0x015303f0;
      if (*(uint *)(lVar15 + 0x18) <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + uVar13 * 8 + 0x20);
      if (lVar15 == 0) goto code_r0x015303f0;
    } while (*(long *)(lVar15 + 0x10) != lVar8);
    if (*(long *)(lVar7 + 0x20) != 0) {
      iVar6 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(lVar7 + 0x20),lVar8,uRam0000000003d3c948);
      if (iVar6 != 0) {
        if (*(long *)(lVar7 + 0x20) == 0) goto code_r0x015303f0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(lVar7 + 0x20),lVar8,uRam0000000003d3c950);
      }
      lVar8 = *(long *)(lVar7 + 0x28);
      if (lVar8 != 0) {
        uVar2 = *(undefined8 *)((long)register0x00000008 + -0x30);
        uVar3 = *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        uVar11 = *(uint *)(lVar8 + 0x18);
        uVar9 = uRam0000000003d3dec0;
        if (uVar11 <= uVar5) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar11 = *(uint *)(lVar8 + 0x18);
        }
        iVar6 = uVar11 - 1;
        *(int *)(lVar8 + 0x18) = iVar6;
        if (iVar6 - uVar5 != 0 && (int)uVar5 <= iVar6) {
          uVar9 = *(undefined8 *)(lVar8 + 0x10);
          /*System.Array$$Copy*/ func_0x0292b4cc(uVar9,uVar14,uVar9,uVar13,iVar6 - uVar5,0);
        }
        lVar7 = *(long *)(lVar8 + 0x10);
        if (lVar7 == 0) {
          func_0x00f78af4();
        }
        else if (*(uint *)(lVar8 + 0x18) < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + (long)(int)*(uint *)(lVar8 + 0x18) * 8 + 0x20) = 0;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          return;
        }
        uVar10 = func_0x00f78b24();
        auVar16 = func_0x00f78ac0(uVar10,0);
        lVar7 = auVar16._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x50) = uVar2;
        *(undefined8 *)((long)register0x00000008 + -0x48) = uVar3;
        *(ulong *)((long)register0x00000008 + -0x40) = uVar13;
        *(long *)((long)register0x00000008 + -0x38) = lVar8;
        *(undefined1 **)((long)register0x00000008 + -0x30) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x28) =
             &System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange;
        iVar6 = auVar16._8_4_;
        iVar12 = (int)uVar9;
        if (iVar6 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
        }
        if (iVar12 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
        }
        if (*(int *)(lVar7 + 0x18) - iVar6 < iVar12) {
          /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
        }
        if (0 < iVar12) {
          iVar4 = *(int *)(lVar7 + 0x18) - iVar12;
          *(int *)(lVar7 + 0x18) = iVar4;
          if (iVar4 - iVar6 != 0 && iVar6 <= iVar4) {
            /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar7 + 0x10),iVar12 + iVar6,
                            *(undefined8 *)(lVar7 + 0x10),auVar16._8_8_,iVar4 - iVar6,0);
            iVar4 = *(int *)(lVar7 + 0x18);
          }
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar7 + 0x10),iVar4,uVar9,0);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        }
        return;
      }
    }
  }
code_r0x015303f0:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15303f4 | Atlas.Audio.WeaponAudio..ctor
// ============================================================

void Atlas_Audio_WeaponAudio___ctor(void)

{
  return;
}



