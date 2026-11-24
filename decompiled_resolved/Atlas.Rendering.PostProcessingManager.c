// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.PostProcessingManager

// ============================================================
// RVA: 0x14cb088 | Atlas.Rendering.PostProcessingManager.RegisterVolume
// ============================================================

/* WARNING: Possible PIC construction at 0x014cb180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cb184) */

void Atlas_Rendering_PostProcessingManager__RegisterVolume(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *unaff_x22;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 ***pppuVar18;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar11 = 0x3eb4000;
  if ((bRam0000000003eb4b5f & 1) == 0) {
    func_0x00f78a20(0x3d3d660);
    bRam0000000003eb4b5f = 1;
  }
  uVar4 = /*Atlas.Rendering.PostProcessingManager$$HasVolume*/ func_0x014cc1a0(param_1,param_2);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (param_2 != 0) {
    uVar11 = /*UnityEngine.Rendering.Volume$$get_profile*/ func_0x0310b320(param_2,0);
    *(undefined8 *)(param_2 + 0x28) = uVar11;
    if (*(long *)(param_1 + 0x18) != 0) {
      lStack_48 = param_2;
      uStack_40 = uVar11;
      uStack_38 = uVar11;
      /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$Add*/ func_0x0256b590(*(long *)(param_1 + 0x18),&lStack_48,uRam0000000003d3d660);
      /*Atlas.Rendering.PostProcessingManager$$ApplySettingsToVolumeProfile*/ func_0x014cc328(param_1,uVar11);
      return;
    }
  }
  auVar17 = func_0x00f78af4();
  lVar5 = auVar17._8_8_;
  pcStack_58 = Atlas_Rendering_PostProcessingEffectBehaviour__UnRegisterVolumesWithManger;
  lVar10 = *(long *)(auVar17._0_8_ + 0x18);
  puStack_60 = &stack0xfffffffffffffff0;
  if (lVar10 != 0) {
    if ((int)*(ulong *)(lVar10 + 0x18) < 1) {
      return;
    }
    uVar11 = 0;
    puVar1 = (undefined8 *)(lVar10 + 0x28);
    param_1 = lVar5;
    unaff_x22 = puVar1;
    if ((*(ulong *)(lVar10 + 0x18) & 0xffffffff) == 0) {
      uVar15 = func_0x00f78b24();
      func_0x00f78ac0(uVar15,0);
    }
    else if (lVar5 != 0) {
      unaff_x22 = (undefined8 *)(lVar10 + 0x40);
      auVar17._8_8_ = *puVar1;
      auVar17._0_8_ = lVar5;
      param_3 = 1;
      puVar16 = (undefined *)0x14cb184;
      goto code_r0x014cb1b4;
    }
  }
  puVar16 = &Atlas_Rendering_PostProcessingManager__UnRegisterVolume;
  auVar17 = func_0x00f78af4();
code_r0x014cb1b4:
  lVar5 = auVar17._0_8_;
  ppuStack_90 = &puStack_60;
  puStack_88 = puVar16;
  if ((bRam0000000003eb4b61 & 1) == 0) {
    func_0x00f78a20(0x3d3d678);
    func_0x00f78a20(0x3d3d680);
    func_0x00f78a20(0x3d3d688);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b61 = 1;
  }
  lVar12 = *(long *)(lVar5 + 0x18);
  if (lVar12 != 0) {
    uVar8 = *(uint *)(lVar12 + 0x18);
    if ((int)uVar8 < 1) {
      return;
    }
    lVar14 = 0;
    uVar4 = 0;
    do {
      if (*(uint *)(lVar12 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar12 = *(long *)(lVar12 + 0x10) + lVar14;
      lVar13 = *(long *)(lVar12 + 0x20);
      uVar15 = *(undefined8 *)(lVar12 + 0x30);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar13,auVar17._8_8_,0);
      if (iVar3 != 0) {
        if (param_3 != 0) {
          if (lVar13 == 0) break;
          *(undefined8 *)(lVar13 + 0x28) = uVar15;
        }
        lVar5 = *(long *)(lVar5 + 0x18);
        if (lVar5 != 0) {
          pppuVar18 = &ppuStack_90;
          uVar8 = *(uint *)(lVar5 + 0x18);
          uVar7 = (uint)uVar4;
          uVar15 = uRam0000000003d3d678;
          if (uVar8 <= uVar7) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            uVar8 = *(uint *)(lVar5 + 0x18);
          }
          uVar8 = uVar8 - 1;
          *(uint *)(lVar5 + 0x18) = uVar8;
          if (uVar8 - uVar7 != 0 && (int)uVar7 <= (int)uVar8) {
            uVar15 = *(undefined8 *)(lVar5 + 0x10);
            /*System.Array$$Copy*/ func_0x0292b4cc(uVar15,uVar7 + 1,uVar15,uVar4,uVar8 - uVar7,0,in_x6,in_x7,lVar10,param_1
                           );
            uVar8 = *(uint *)(lVar5 + 0x18);
          }
          lVar10 = *(long *)(lVar5 + 0x10);
          if (lVar10 == 0) {
            func_0x00f78af4();
          }
          else if (uVar8 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar8 * 0x18;
            *(undefined8 *)(lVar10 + 0x20) = 0;
            *(undefined8 *)(lVar10 + 0x28) = 0;
            *(undefined8 *)(lVar10 + 0x30) = 0;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            return;
          }
          uVar6 = func_0x00f78b24();
          auVar17 = func_0x00f78ac0(uVar6,0);
          lVar10 = auVar17._0_8_;
          puVar16 = &System_Collections_Generic_List_PostProcessingManager_VolumeInfo___RemoveRange;
          iVar3 = auVar17._8_4_;
          iVar9 = (int)uVar15;
          if (iVar3 < 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
          }
          if (iVar9 < 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
          }
          if (*(int *)(lVar10 + 0x18) - iVar3 < iVar9) {
            /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
          }
          if (0 < iVar9) {
            iVar2 = *(int *)(lVar10 + 0x18) - iVar9;
            *(int *)(lVar10 + 0x18) = iVar2;
            if (iVar2 - iVar3 != 0 && iVar3 <= iVar2) {
              /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar10 + 0x10),iVar9 + iVar3,
                              *(undefined8 *)(lVar10 + 0x10),auVar17._8_8_,iVar2 - iVar3,0,in_x6,
                              in_x7,unaff_x22,uVar11,uVar4,lVar5,pppuVar18,puVar16);
              iVar2 = *(int *)(lVar10 + 0x18);
            }
            /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar10 + 0x10),iVar2,uVar15,0);
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          }
          return;
        }
        break;
      }
      if ((ulong)uVar8 - 1 == uVar4) {
        return;
      }
      lVar12 = *(long *)(lVar5 + 0x18);
      lVar14 = lVar14 + 0x18;
      uVar4 = uVar4 + 1;
    } while (lVar12 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14cb1b4 | Atlas.Rendering.PostProcessingManager.UnRegisterVolume
// ============================================================

void Atlas_Rendering_PostProcessingManager__UnRegisterVolume
               (long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar5;
  undefined8 unaff_x19;
  int iVar6;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 *puVar13;
  undefined *puVar14;
  
  if ((bRam0000000003eb4b61 & 1) == 0) {
    func_0x00f78a20(0x3d3d678);
    func_0x00f78a20(0x3d3d680);
    func_0x00f78a20(0x3d3d688);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b61 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    uVar5 = *(uint *)(lVar8 + 0x18);
    if ((int)uVar5 < 1) {
      return;
    }
    lVar10 = 0;
    uVar7 = 0;
    do {
      if (*(uint *)(lVar8 + 0x18) <= uVar7) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar8 = *(long *)(lVar8 + 0x10) + lVar10;
      lVar9 = *(long *)(lVar8 + 0x20);
      uVar11 = *(undefined8 *)(lVar8 + 0x30);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar9,param_2,0);
      if (iVar2 != 0) {
        if (param_3 != 0) {
          if (lVar9 == 0) break;
          *(undefined8 *)(lVar9 + 0x28) = uVar11;
        }
        lVar8 = *(long *)(param_1 + 0x18);
        if (lVar8 != 0) {
          puVar13 = &stack0xfffffffffffffff0;
          uVar5 = *(uint *)(lVar8 + 0x18);
          uVar4 = (uint)uVar7;
          uVar11 = uRam0000000003d3d678;
          if (uVar5 <= uVar4) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            uVar5 = *(uint *)(lVar8 + 0x18);
          }
          uVar5 = uVar5 - 1;
          *(uint *)(lVar8 + 0x18) = uVar5;
          if (uVar5 - uVar4 != 0 && (int)uVar4 <= (int)uVar5) {
            uVar11 = *(undefined8 *)(lVar8 + 0x10);
            /*System.Array$$Copy*/ func_0x0292b4cc(uVar11,uVar4 + 1,uVar11,uVar7,uVar5 - uVar4,0,in_x6,in_x7,unaff_x20,
                            unaff_x19);
            uVar5 = *(uint *)(lVar8 + 0x18);
          }
          lVar10 = *(long *)(lVar8 + 0x10);
          if (lVar10 == 0) {
            func_0x00f78af4();
          }
          else if (uVar5 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar5 * 0x18;
            *(undefined8 *)(lVar10 + 0x20) = 0;
            *(undefined8 *)(lVar10 + 0x28) = 0;
            *(undefined8 *)(lVar10 + 0x30) = 0;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            return;
          }
          uVar3 = func_0x00f78b24();
          auVar12 = func_0x00f78ac0(uVar3,0);
          lVar10 = auVar12._0_8_;
          puVar14 = &System_Collections_Generic_List_PostProcessingManager_VolumeInfo___RemoveRange;
          iVar2 = auVar12._8_4_;
          iVar6 = (int)uVar11;
          if (iVar2 < 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
          }
          if (iVar6 < 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
          }
          if (*(int *)(lVar10 + 0x18) - iVar2 < iVar6) {
            /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
          }
          if (0 < iVar6) {
            iVar1 = *(int *)(lVar10 + 0x18) - iVar6;
            *(int *)(lVar10 + 0x18) = iVar1;
            if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
              /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar10 + 0x10),iVar6 + iVar2,
                              *(undefined8 *)(lVar10 + 0x10),auVar12._8_8_,iVar1 - iVar2,0,in_x6,
                              in_x7,unaff_x22,unaff_x21,uVar7,lVar8,puVar13,puVar14);
              iVar1 = *(int *)(lVar10 + 0x18);
            }
            /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar10 + 0x10),iVar1,uVar11,0);
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          }
          return;
        }
        break;
      }
      if ((ulong)uVar5 - 1 == uVar7) {
        return;
      }
      lVar8 = *(long *)(param_1 + 0x18);
      lVar10 = lVar10 + 0x18;
      uVar7 = uVar7 + 1;
    } while (lVar8 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14cb968 | Atlas.Rendering.PostProcessingManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014cbd40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cbd44) */

ulong Atlas_Rendering_PostProcessingManager__Init(long param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  undefined1 uVar13;
  undefined4 uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar17;
  undefined8 unaff_x25;
  long lVar18;
  ulong unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_91 [81];
  
  puVar3 = &stack0xffffffffffffffc0;
  puVar19 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b5b & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d1ed88);
    func_0x00f78a20(0x3d3d658);
    func_0x00f78a20(0x3d1e268);
    func_0x00f78a20(0x3d5bb28);
    func_0x00f78a20(0x3d23e10);
    bRam0000000003eb4b5b = 1;
  }
  *(long *)(param_1 + 0x10) = param_2;
  lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>_TypeInfo*/ uRam0000000003d1e268);
  /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$.ctor*/ func_0x0256a864(lVar4,uRam0000000003d3d658);
  *(long *)(param_1 + 0x18) = lVar4;
  if (((*(ushort *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = 0x3d23e10;
  uVar7 = 0x3d3d658;
  uVar1 = 0x3eb4000;
  if (**(long **)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xb8) != 0) {
    *(undefined4 *)(param_1 + 0x20) =
         *(undefined4 *)(**(long **)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xb8) + 0x18);
    uVar5 = func_0x00f78a34(/*bool[]_TypeInfo*/ uRam0000000003d1ed88);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = *(long *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xd8);
    uVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,param_1,uRam0000000003d5bb28,uRam0000000003d2a320);
    uVar7 = 0x3d5bb28;
    uVar1 = 0x3d2a320;
    if (param_2 != 0) {
      /*Atlas.Settings.AtlasQualitySettings$$RegisterOnSettingChanged*/ func_0x0145ee3c(param_2,lVar4,uVar5,0);
      puVar3 = (undefined1 *)register0x00000008;
      lVar4 = param_1;
      param_1 = unaff_x19;
      param_2 = unaff_x20;
      puVar19 = unaff_x29;
      goto code_r0x014cbb04;
    }
  }
  unaff_x24 = uVar1;
  unaff_x23 = uVar7;
  unaff_x22 = uVar5;
  unaff_x21 = lVar4;
  unaff_x30 = &Atlas_Rendering_PostProcessingManager__ApplyPostProcessingSettings;
  lVar4 = func_0x00f78af4();
code_r0x014cbb04:
  *(ulong *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(long *)(puVar3 + -0x28) = unaff_x21;
  *(long *)(puVar3 + -0x20) = param_2;
  *(long *)(puVar3 + -0x18) = param_1;
  *(undefined1 **)(puVar3 + -0x10) = puVar19;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  uVar5 = 0x3eb4000;
  if ((bRam0000000003eb4b63 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d23e10);
    bRam0000000003eb4b63 = 1;
  }
  puVar3[-0x51] = 0;
  if (0 < *(int *)(lVar4 + 0x20)) {
    lVar17 = 0x20;
    lVar18 = 0x20;
    do {
      if (((*(ushort *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar15 = **(long **)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xb8);
      if (lVar15 == 0) goto code_r0x014cbc50;
      unaff_x26 = lVar17 - 0x20;
      if (*(uint *)(lVar15 + 0x18) <= unaff_x26) {
code_r0x014cbc54:
        uVar7 = func_0x00f78b24();
        lVar15 = func_0x00f78ac0(uVar7,0);
        *(long *)(puVar3 + -0xa0) = lVar17;
        *(undefined8 *)(puVar3 + -0x98) = 0x3d1feb0;
        *(undefined8 *)(puVar3 + -0x90) = 0x3d23e10;
        *(long *)(puVar3 + -0x88) = unaff_x21;
        *(undefined8 *)(puVar3 + -0x80) = uVar5;
        *(long *)(puVar3 + -0x78) = lVar4;
        *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x10;
        *(undefined **)(puVar3 + -0x68) = &Atlas_Rendering_PostProcessingManager__DeInit;
        if ((bRam0000000003eb4b5c & 1) == 0) {
          func_0x00f78a20(0x3d2a320);
          func_0x00f78a20(0x3d1b598);
          func_0x00f78a20(0x3d1feb0);
          func_0x00f78a20(0x3d5bb28);
          bRam0000000003eb4b5c = 1;
        }
        lVar4 = *(long *)(lVar15 + 0x10);
        if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xd8);
        uVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,lVar15,uRam0000000003d5bb28,uRam0000000003d2a320);
        if (lVar4 == 0) {
          puVar20 = &Atlas_Rendering_PostProcessingManager__UnRegisterAllVolumes;
          auVar21 = func_0x00f78af4();
        }
        else {
          /*Atlas.Settings.AtlasQualitySettings$$UnRegisterOnSettingChanged*/ func_0x0145ee50(lVar4,uVar7,uVar5,0);
          auVar21._8_8_ = 1;
          auVar21._0_8_ = lVar15;
          puVar20 = &UNK_014cbd44;
        }
        lVar17 = auVar21._8_8_;
        lVar8 = auVar21._0_8_;
        *(undefined8 *)(puVar3 + -0xd0) = uVar5;
        *(undefined8 *)(puVar3 + -200) = uVar7;
        *(long *)(puVar3 + -0xc0) = lVar4;
        *(long *)(puVar3 + -0xb8) = lVar15;
        *(undefined1 **)(puVar3 + -0xb0) = puVar3 + -0x70;
        *(undefined **)(puVar3 + -0xa8) = puVar20;
        if ((bRam0000000003eb4b60 & 1) == 0) {
          func_0x00f78a20(0x3d33648);
          func_0x00f78a20(0x3d33650);
          func_0x00f78a20(0x3d33658);
          func_0x00f78a20(0x3d3d668);
          func_0x00f78a20(0x3d3d670);
          bRam0000000003eb4b60 = 1;
        }
        *(undefined8 *)(puVar3 + -0xe0) = 0;
        *(undefined8 *)(puVar3 + -0xf8) = 0;
        *(undefined8 *)(puVar3 + -0x100) = 0;
        *(undefined8 *)(puVar3 + -0xe8) = 0;
        *(undefined8 *)(puVar3 + -0xf0) = 0;
        if (auVar21._8_4_ != 0) {
          if (*(long *)(lVar8 + 0x18) == 0) goto code_r0x014cbe74;
          /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$GetEnumerator*/ func_0x0256c15c(puVar3 + -0x100,*(long *)(lVar8 + 0x18),uRam0000000003d3d670);
          lVar17 = 0x3d33650;
          while (uVar6 = /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$MoveNext*/ func_0x01f81bac(puVar3 + -0x100,uRam0000000003d33650), (uVar6 & 1) != 0) {
            if (*(long *)(puVar3 + -0xf0) == 0) {
              func_0x00f78af4();
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x14cbe74);
              (*pcVar2)();
            }
            *(undefined8 *)(*(long *)(puVar3 + -0xf0) + 0x28) = *(undefined8 *)(puVar3 + -0xe0);
          }
          /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(puVar3 + -0x100,uRam0000000003d33648);
        }
        goto code_r0x014cbe40;
      }
      uVar5 = *(undefined8 *)(lVar15 + lVar18);
      puVar3[-0x51] = 0;
      unaff_x21 = *(long *)(lVar4 + 0x10);
      if (((*(byte *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (unaff_x21 == 0) {
code_r0x014cbc50:
        func_0x00f78af4();
        goto code_r0x014cbc54;
      }
      /*Atlas.Settings.AtlasQualitySettings$$TryGetBoolParameter*/ func_0x0145f6d0(unaff_x21,*(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xd8),uVar5
                      ,puVar3 + -0x51,0);
      lVar15 = *(long *)(lVar4 + 0x28);
      if (lVar15 == 0) goto code_r0x014cbc50;
      if (*(uint *)(lVar15 + 0x18) <= unaff_x26) goto code_r0x014cbc54;
      *(undefined1 *)(lVar15 + lVar17) = puVar3[-0x51];
      lVar18 = lVar18 + 0x10;
      lVar15 = lVar17 + -0x1f;
      lVar17 = lVar17 + 1;
    } while (lVar15 < *(int *)(lVar4 + 0x20));
  }
  uVar6 = /*Atlas.Rendering.PostProcessingManager$$ApplySettingsToVolumes*/ func_0x014cc5c4(lVar4);
  return uVar6;
code_r0x014cc0e0:
  lVar4 = 0;
  do {
    if (plVar9 != (long *)0x0) {
      lVar17 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar6 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar10 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto code_r0x014cc13c;
          }
          piVar16 = piVar16 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014cc13c:
      uVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    }
    if (lVar4 == 0) {
      return uVar6;
    }
    func_0x00f78ac0(lVar4,0);
    if (extraout_w1_00 != 1) goto code_r0x014cc19c;
    plVar11 = (long *)___cxa_begin_catch();
    lVar4 = *plVar11;
    uVar6 = ___cxa_end_catch();
  } while( true );
  while( true ) {
    plVar9 = (long *)___cxa_begin_catch();
    lVar17 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(puVar3 + -0x100,uRam0000000003d33648);
    if (lVar17 != 0) break;
code_r0x014cbe40:
    if (*(long *)(lVar8 + 0x18) != 0) {
      uVar6 = /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$Clear*/ func_0x0256b8c8(*(long *)(lVar8 + 0x18),uRam0000000003d3d668);
      return uVar6;
    }
code_r0x014cbe74:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014cbeb4;
  }
  func_0x00f78ac0(lVar17,0);
code_r0x014cbeb4:
  uVar7 = __Unwind_Resume();
  *(undefined8 *)(puVar3 + -0x130) = uVar5;
  *(undefined8 *)(puVar3 + -0x128) = 0x3eb4000;
  *(long *)(puVar3 + -0x120) = lVar17;
  *(long *)(puVar3 + -0x118) = lVar8;
  *(undefined1 **)(puVar3 + -0x110) = puVar3 + -0xb0;
  *(undefined **)(puVar3 + -0x108) =
       &Atlas_Rendering_PostProcessingManager__RegisterAllVolumeObjects;
  if ((bRam0000000003eb4b5d & 1) == 0) {
    func_0x00f78a20(0x3d5b090);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b5d = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar9 = (long *)/*UnityEngine.Object$$FindObjectsOfType<Volume>*/ func_0x018a6574(1,uRam0000000003d5b090);
  *(undefined8 *)(puVar3 + -0x130) = *(undefined8 *)(puVar3 + -0x130);
  *(undefined8 *)(puVar3 + -0x128) = *(undefined8 *)(puVar3 + -0x128);
  *(undefined8 *)(puVar3 + -0x120) = *(undefined8 *)(puVar3 + -0x120);
  *(undefined8 *)(puVar3 + -0x118) = *(undefined8 *)(puVar3 + -0x118);
  *(undefined8 *)(puVar3 + -0x110) = *(undefined8 *)(puVar3 + -0x110);
  *(undefined8 *)(puVar3 + -0x108) = *(undefined8 *)(puVar3 + -0x108);
  if ((bRam0000000003eb4b5e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d190);
    func_0x00f78a20(0x3d1d3a0);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b5e = 1;
  }
  if (plVar9 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar6 != 0) {
      piVar16 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerable<Volume>_TypeInfo*/ lRam0000000003d1d190) {
          puVar10 = (undefined8 *)(lVar4 + (long)*piVar16 * 0x10 + 0x138);
          goto code_r0x014cbff8;
        }
        piVar16 = piVar16 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerable<Volume>_TypeInfo*/ lRam0000000003d1d190,0);
code_r0x014cbff8:
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    if (plVar9 != (long *)0x0) {
      do {
        lVar4 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar6 != 0) {
          piVar16 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar10 = (undefined8 *)(lVar4 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x014cc068;
            }
            piVar16 = piVar16 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014cc068:
        uVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar6 & 1) == 0) goto code_r0x014cc0e0;
        lVar4 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar6 != 0) {
          piVar16 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0) {
              puVar10 = (undefined8 *)(lVar4 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x014cc0c4;
            }
            piVar16 = piVar16 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0,0);
code_r0x014cc0c4:
        uVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        Atlas_Rendering_PostProcessingManager__RegisterVolume(uVar7,uVar5);
      } while( true );
    }
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14cc168);
  (*pcVar2)();
code_r0x014cc19c:
  auVar21 = __Unwind_Resume();
  lVar17 = auVar21._8_8_;
  *(undefined8 *)(puVar3 + -0x170) = 0x3d2a320;
  *(undefined8 *)(puVar3 + -0x168) = 0x3d5bb28;
  *(undefined8 *)(puVar3 + -0x160) = 0x3d1d3a0;
  *(undefined8 *)(puVar3 + -0x158) = 0x3d22180;
  *(long *)(puVar3 + -0x150) = lVar4;
  *(long **)(puVar3 + -0x148) = plVar9;
  *(undefined1 **)(puVar3 + -0x140) = puVar3 + -0x110;
  *(undefined **)(puVar3 + -0x138) = &Atlas_Rendering_PostProcessingManager__HasVolume;
  if ((bRam0000000003eb4b62 & 1) == 0) {
    func_0x00f78a20(0x3d33648);
    func_0x00f78a20(0x3d33650);
    func_0x00f78a20(0x3d33658);
    func_0x00f78a20(0x3d3d670);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b62 = 1;
  }
  *(undefined8 *)(puVar3 + -0x180) = 0;
  *(undefined8 *)(puVar3 + -0x198) = 0;
  *(undefined8 *)(puVar3 + -0x1a0) = 0;
  *(undefined8 *)(puVar3 + -0x188) = 0;
  *(undefined8 *)(puVar3 + -400) = 0;
  lVar4 = *(long *)(auVar21._0_8_ + 0x18);
  if (lVar4 == 0) {
    func_0x00f78af4();
    if (extraout_w1_01 == 1) {
      plVar9 = (long *)___cxa_begin_catch();
      lVar17 = *plVar9;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(puVar3 + -0x1a0,/*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0);
      if (lVar17 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar22 = func_0x00f78ac0(lVar17,0);
    lVar4 = auVar22._0_8_;
    *(undefined8 *)(puVar3 + -0x210) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x208) = unaff_x27;
    *(ulong *)(puVar3 + -0x200) = unaff_x26;
    *(long *)(puVar3 + -0x1f8) = lVar18;
    *(undefined8 *)(puVar3 + -0x1f0) = 0x3d2a320;
    *(undefined8 *)(puVar3 + -0x1e8) = 0x3d5bb28;
    *(undefined8 *)(puVar3 + -0x1e0) = 0x3d1d3a0;
    *(undefined8 *)(puVar3 + -0x1d8) = 0x3eb4000;
    *(long *)(puVar3 + -0x1d0) = auVar21._0_8_;
    *(long *)(puVar3 + -0x1c8) = lVar17;
    *(undefined1 **)(puVar3 + -0x1c0) = puVar3 + -0x140;
    *(undefined **)(puVar3 + -0x1b8) =
         &Atlas_Rendering_PostProcessingManager__ApplySettingsToVolumeProfile;
    if ((bRam0000000003eb4b65 & 1) == 0) {
      func_0x00f78a20(0x3d33180);
      func_0x00f78a20(0x3d33188);
      func_0x00f78a20(0x3d33190);
      func_0x00f78a20(0x3d3c8b8);
      func_0x00f78a20(0x3d23e10);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb4b65 = 1;
    }
    *(undefined8 *)(puVar3 + -0x230) = 0;
    *(undefined8 *)(puVar3 + -0x228) = 0;
    *(undefined8 *)(puVar3 + -0x220) = 0;
    if ((auVar22._8_8_ == 0) || (lVar18 = *(long *)(auVar22._8_8_ + 0x18), lVar18 == 0)) {
      func_0x00f78af4();
      if (extraout_w1_02 == 1) {
        plVar9 = (long *)___cxa_begin_catch();
        lVar4 = *plVar9;
        ___cxa_end_catch();
        uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar3 + -0x230,uRam0000000003d5bb28);
        if (lVar4 == 0) {
          return uVar6;
        }
        func_0x00f78ac0(lVar4,0);
      }
      uVar6 = __Unwind_Resume();
      return uVar6;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar3 + -0x248,lVar18,uRam0000000003d3c8b8);
    *(undefined8 *)(puVar3 + -0x228) = *(undefined8 *)(puVar3 + -0x240);
    *(undefined8 *)(puVar3 + -0x230) = *(undefined8 *)(puVar3 + -0x248);
    *(undefined8 *)(puVar3 + -0x220) = *(undefined8 *)(puVar3 + -0x238);
    do {
      uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar3 + -0x230,uRam0000000003d33188);
      if ((uVar6 & 1) == 0) {
        uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar3 + -0x230,uRam0000000003d33180);
        return uVar6;
      }
      lVar18 = *(long *)(puVar3 + -0x220);
      if (*(int *)(lVar4 + 0x20) < 1) {
        if (lVar18 == 0) {
          func_0x00f78af4();
code_r0x014cc554:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x14cc558);
          (*pcVar2)();
        }
      }
      else {
        uVar6 = 0;
        lVar17 = 0x28;
        do {
          if (((*(ushort *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar15 = **(long **)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xb8);
          if (lVar15 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar6) {
            uVar5 = func_0x00f78b24();
            func_0x00f78ac0(uVar5,0);
            goto code_r0x014cc554;
          }
          if (lVar18 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          uVar7 = *(undefined8 *)(lVar15 + lVar17);
          uVar5 = /*System.Object$$GetType*/ func_0x02959198(lVar18,0);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar12 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar5,uVar7,0);
          if ((uVar12 & 1) != 0) {
            lVar17 = *(long *)(lVar4 + 0x28);
            if (lVar17 == 0) {
              func_0x00f78af4();
              goto code_r0x014cc554;
            }
            if ((uint)uVar6 < *(uint *)(lVar17 + 0x18)) {
              uVar13 = *(undefined1 *)(lVar17 + uVar6 + 0x20);
              goto code_r0x014cc4e4;
            }
            uVar5 = func_0x00f78b24();
            func_0x00f78ac0(uVar5,0);
            goto code_r0x014cc554;
          }
          uVar6 = uVar6 + 1;
          lVar17 = lVar17 + 0x10;
        } while ((long)uVar6 < (long)*(int *)(lVar4 + 0x20));
      }
      uVar13 = 0;
code_r0x014cc4e4:
      *(undefined1 *)(lVar18 + 0x18) = uVar13;
    } while( true );
  }
  /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$GetEnumerator*/ func_0x0256c15c(puVar3 + -0x1a0,lVar4,uRam0000000003d3d670);
  do {
    uVar6 = /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$MoveNext*/ func_0x01f81bac(puVar3 + -0x1a0,uRam0000000003d33650);
    if ((uVar6 & 1) == 0) {
      uVar14 = 0x3f;
      goto code_r0x014cc2a0;
    }
    uVar5 = *(undefined8 *)(puVar3 + -400);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,lVar17,0);
  } while ((uVar12 & 1) == 0);
  uVar14 = 0x41;
code_r0x014cc2a0:
  *(undefined4 *)(puVar3 + -0x1b0) = uVar14;
  /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(puVar3 + -0x1a0,uRam0000000003d33648);
  if (*(int *)(puVar3 + -0x1b0) != 0x41) {
    uVar6 = 0;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x14cbb04 | Atlas.Rendering.PostProcessingManager.ApplyPostProcessingSettings
// ============================================================

/* WARNING: Possible PIC construction at 0x014cbd40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cbd44) */

ulong Atlas_Rendering_PostProcessingManager__ApplyPostProcessingSettings(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  undefined1 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  long unaff_x21;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long *plStack_148;
  undefined1 ****ppppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 uStack_51;
  
  uVar13 = 0x3eb4000;
  if ((bRam0000000003eb4b63 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d23e10);
    bRam0000000003eb4b63 = 1;
  }
  uStack_51 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar14 = 0x20;
    lVar15 = 0x20;
    do {
      if (((*(ushort *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = **(long **)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xb8);
      if (lVar10 == 0) goto LAB_014cbc50;
      if ((ulong)*(uint *)(lVar10 + 0x18) <= lVar14 - 0x20U) {
LAB_014cbc54:
        uVar3 = func_0x00f78b24();
        lVar15 = func_0x00f78ac0(uVar3,0);
        uStack_98 = 0x3d1feb0;
        uStack_90 = 0x3d23e10;
        puStack_68 = &Atlas_Rendering_PostProcessingManager__DeInit;
        lStack_a0 = lVar14;
        lStack_88 = unaff_x21;
        uStack_80 = uVar13;
        lStack_78 = param_1;
        puStack_70 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb4b5c & 1) == 0) {
          func_0x00f78a20(0x3d2a320);
          func_0x00f78a20(0x3d1b598);
          func_0x00f78a20(0x3d1feb0);
          func_0x00f78a20(0x3d5bb28);
          bRam0000000003eb4b5c = 1;
        }
        lVar14 = *(long *)(lVar15 + 0x10);
        if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xd8);
        uVar13 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar13,lVar15,uRam0000000003d5bb28,uRam0000000003d2a320);
        if (lVar14 == 0) {
          puVar16 = &Atlas_Rendering_PostProcessingManager__UnRegisterAllVolumes;
          auVar17 = func_0x00f78af4();
        }
        else {
          /*Atlas.Settings.AtlasQualitySettings$$UnRegisterOnSettingChanged*/ func_0x0145ee50(lVar14,uVar3,uVar13,0);
          auVar17._8_8_ = 1;
          auVar17._0_8_ = lVar15;
          puVar16 = &UNK_014cbd44;
        }
        lVar10 = auVar17._8_8_;
        lVar11 = auVar17._0_8_;
        uStack_d0 = uVar13;
        uStack_c8 = uVar3;
        lStack_c0 = lVar14;
        lStack_b8 = lVar15;
        ppuStack_b0 = &puStack_70;
        puStack_a8 = puVar16;
        if ((bRam0000000003eb4b60 & 1) == 0) {
          func_0x00f78a20(0x3d33648);
          func_0x00f78a20(0x3d33650);
          func_0x00f78a20(0x3d33658);
          func_0x00f78a20(0x3d3d668);
          func_0x00f78a20(0x3d3d670);
          bRam0000000003eb4b60 = 1;
        }
        uStack_e0 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        lStack_f0 = 0;
        if (auVar17._8_4_ != 0) {
          if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x014cbe74;
          /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$GetEnumerator*/ func_0x0256c15c(&uStack_100,*(long *)(lVar11 + 0x18),uRam0000000003d3d670);
          lVar10 = 0x3d33650;
          while (uVar2 = /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$MoveNext*/ func_0x01f81bac(&uStack_100,uRam0000000003d33650), (uVar2 & 1) != 0) {
            if (lStack_f0 == 0) {
              func_0x00f78af4();
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x14cbe74);
              (*pcVar1)();
            }
            *(undefined8 *)(lStack_f0 + 0x28) = uStack_e0;
          }
          /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_100,uRam0000000003d33648);
        }
        goto code_r0x014cbe40;
      }
      uVar13 = *(undefined8 *)(lVar10 + lVar15);
      uStack_51 = 0;
      unaff_x21 = *(long *)(param_1 + 0x10);
      if (((*(byte *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (unaff_x21 == 0) {
LAB_014cbc50:
        func_0x00f78af4();
        goto LAB_014cbc54;
      }
      /*Atlas.Settings.AtlasQualitySettings$$TryGetBoolParameter*/ func_0x0145f6d0(unaff_x21,*(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xd8),
                      uVar13,&uStack_51,0);
      lVar10 = *(long *)(param_1 + 0x28);
      if (lVar10 == 0) goto LAB_014cbc50;
      if ((ulong)*(uint *)(lVar10 + 0x18) <= lVar14 - 0x20U) goto LAB_014cbc54;
      *(undefined1 *)(lVar10 + lVar14) = uStack_51;
      lVar15 = lVar15 + 0x10;
      lVar10 = lVar14 + -0x1f;
      lVar14 = lVar14 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x20));
  }
  uVar2 = /*Atlas.Rendering.PostProcessingManager$$ApplySettingsToVolumes*/ func_0x014cc5c4(param_1);
  return uVar2;
code_r0x014cc0e0:
  lVar15 = 0;
  do {
    if (plVar4 != (long *)0x0) {
      lVar14 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar2 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar5 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x014cc13c;
          }
          piVar12 = piVar12 + 4;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014cc13c:
      uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    if (lVar15 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(lVar15,0);
    if (extraout_w1_00 != 1) goto code_r0x014cc19c;
    plVar6 = (long *)___cxa_begin_catch();
    lVar15 = *plVar6;
    uVar2 = ___cxa_end_catch();
  } while( true );
  while( true ) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar10 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_100,uRam0000000003d33648);
    if (lVar10 != 0) break;
code_r0x014cbe40:
    if (*(long *)(lVar11 + 0x18) != 0) {
      uVar2 = /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$Clear*/ func_0x0256b8c8(*(long *)(lVar11 + 0x18),uRam0000000003d3d668);
      return uVar2;
    }
code_r0x014cbe74:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014cbeb4;
  }
  func_0x00f78ac0(lVar10,0);
code_r0x014cbeb4:
  uVar3 = __Unwind_Resume();
  uStack_128 = 0x3eb4000;
  puStack_108 = &Atlas_Rendering_PostProcessingManager__RegisterAllVolumeObjects;
  uStack_130 = uVar13;
  lStack_120 = lVar10;
  lStack_118 = lVar11;
  pppuStack_110 = &ppuStack_b0;
  if ((bRam0000000003eb4b5d & 1) == 0) {
    func_0x00f78a20(0x3d5b090);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b5d = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*UnityEngine.Object$$FindObjectsOfType<Volume>*/ func_0x018a6574(1,uRam0000000003d5b090);
  if ((bRam0000000003eb4b5e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d190);
    func_0x00f78a20(0x3d1d3a0);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b5e = 1;
  }
  if (plVar4 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar15 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar2 != 0) {
      piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerable<Volume>_TypeInfo*/ lRam0000000003d1d190) {
          puVar5 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x014cbff8;
        }
        piVar12 = piVar12 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IEnumerable<Volume>_TypeInfo*/ lRam0000000003d1d190,0);
code_r0x014cbff8:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar4 != (long *)0x0) {
      do {
        lVar15 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar2 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar5 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x014cc068;
            }
            piVar12 = piVar12 + 4;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014cc068:
        uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar2 & 1) == 0) goto code_r0x014cc0e0;
        lVar15 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar2 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0) {
              puVar5 = (undefined8 *)(lVar15 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x014cc0c4;
            }
            piVar12 = piVar12 + 4;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0,0);
code_r0x014cc0c4:
        uVar13 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        Atlas_Rendering_PostProcessingManager__RegisterVolume(uVar3,uVar13);
      } while( true );
    }
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14cc168);
  (*pcVar1)();
code_r0x014cc19c:
  auVar17 = __Unwind_Resume();
  lVar14 = auVar17._8_8_;
  uStack_170 = 0x3d2a320;
  uStack_168 = 0x3d5bb28;
  uStack_160 = 0x3d1d3a0;
  uStack_158 = 0x3d22180;
  puStack_138 = &Atlas_Rendering_PostProcessingManager__HasVolume;
  lStack_150 = lVar15;
  plStack_148 = plVar4;
  ppppuStack_140 = &pppuStack_110;
  if ((bRam0000000003eb4b62 & 1) == 0) {
    func_0x00f78a20(0x3d33648);
    func_0x00f78a20(0x3d33650);
    func_0x00f78a20(0x3d33658);
    func_0x00f78a20(0x3d3d670);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b62 = 1;
  }
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar15 = *(long *)(auVar17._0_8_ + 0x18);
  if (lVar15 == 0) {
    func_0x00f78af4();
    if (extraout_w1_01 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar14 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_1a0,/*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0);
      if (lVar14 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar17 = func_0x00f78ac0(lVar14,0);
    lVar15 = auVar17._0_8_;
    if ((bRam0000000003eb4b65 & 1) == 0) {
      func_0x00f78a20(0x3d33180);
      func_0x00f78a20(0x3d33188);
      func_0x00f78a20(0x3d33190);
      func_0x00f78a20(0x3d3c8b8);
      func_0x00f78a20(0x3d23e10);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb4b65 = 1;
    }
    uStack_230 = 0;
    uStack_228 = 0;
    lStack_220 = 0;
    if ((auVar17._8_8_ == 0) || (lVar14 = *(long *)(auVar17._8_8_ + 0x18), lVar14 == 0)) {
      func_0x00f78af4();
      if (extraout_w1_02 == 1) {
        plVar4 = (long *)___cxa_begin_catch();
        lVar15 = *plVar4;
        ___cxa_end_catch();
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_230,uRam0000000003d5bb28);
        if (lVar15 == 0) {
          return uVar2;
        }
        func_0x00f78ac0(lVar15,0);
      }
      uVar2 = __Unwind_Resume();
      return uVar2;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_248,lVar14,uRam0000000003d3c8b8);
    uStack_228 = uStack_240;
    uStack_230 = uStack_248;
    lStack_220 = lStack_238;
    do {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_230,uRam0000000003d33188);
      lVar14 = lStack_220;
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_230,uRam0000000003d33180);
        return uVar2;
      }
      if (*(int *)(lVar15 + 0x20) < 1) {
        if (lStack_220 == 0) {
          func_0x00f78af4();
code_r0x014cc554:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x14cc558);
          (*pcVar1)();
        }
      }
      else {
        uVar2 = 0;
        lVar10 = 0x28;
        do {
          if (((*(ushort *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar11 = **(long **)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xb8);
          if (lVar11 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar2) {
            uVar13 = func_0x00f78b24();
            func_0x00f78ac0(uVar13,0);
            goto code_r0x014cc554;
          }
          if (lVar14 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          uVar3 = *(undefined8 *)(lVar11 + lVar10);
          uVar13 = /*System.Object$$GetType*/ func_0x02959198(lVar14,0);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar13,uVar3,0);
          if ((uVar7 & 1) != 0) {
            lVar10 = *(long *)(lVar15 + 0x28);
            if (lVar10 == 0) {
              func_0x00f78af4();
              goto code_r0x014cc554;
            }
            if ((uint)uVar2 < *(uint *)(lVar10 + 0x18)) {
              uVar8 = *(undefined1 *)(lVar10 + uVar2 + 0x20);
              goto code_r0x014cc4e4;
            }
            uVar13 = func_0x00f78b24();
            func_0x00f78ac0(uVar13,0);
            goto code_r0x014cc554;
          }
          uVar2 = uVar2 + 1;
          lVar10 = lVar10 + 0x10;
        } while ((long)uVar2 < (long)*(int *)(lVar15 + 0x20));
      }
      uVar8 = 0;
code_r0x014cc4e4:
      *(undefined1 *)(lVar14 + 0x18) = uVar8;
    } while( true );
  }
  /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$GetEnumerator*/ func_0x0256c15c(&uStack_1a0,lVar15,uRam0000000003d3d670);
  do {
    uVar2 = /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$MoveNext*/ func_0x01f81bac(&uStack_1a0,uRam0000000003d33650);
    uVar13 = uStack_190;
    if ((uVar2 & 1) == 0) {
      iVar9 = 0x3f;
      goto code_r0x014cc2a0;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,lVar14,0);
  } while ((uVar7 & 1) == 0);
  iVar9 = 0x41;
code_r0x014cc2a0:
  /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_1a0,uRam0000000003d33648);
  if (iVar9 != 0x41) {
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x14cbc60 | Atlas.Rendering.PostProcessingManager.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014cbd40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cbd44) */

ulong Atlas_Rendering_PostProcessingManager__DeInit(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  long lVar8;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4b5c & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d5bb28);
    bRam0000000003eb4b5c = 1;
  }
  lVar13 = *(long *)(param_1 + 0x10);
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xd8);
  uVar2 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d5bb28,uRam0000000003d2a320);
  if (lVar13 == 0) {
    puVar16 = &Atlas_Rendering_PostProcessingManager__UnRegisterAllVolumes;
    auVar17 = func_0x00f78af4();
    lVar8 = auVar17._8_8_;
    lVar15 = auVar17._0_8_;
  }
  else {
    /*Atlas.Settings.AtlasQualitySettings$$UnRegisterOnSettingChanged*/ func_0x0145ee50(lVar13,uVar14,uVar2,0);
    lVar8 = 1;
    puVar16 = (undefined *)0x14cbd44;
    lVar15 = param_1;
  }
  uStack_70 = uVar2;
  uStack_68 = uVar14;
  lStack_60 = lVar13;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  puStack_48 = puVar16;
  if ((bRam0000000003eb4b60 & 1) == 0) {
    func_0x00f78a20(0x3d33648);
    func_0x00f78a20(0x3d33650);
    func_0x00f78a20(0x3d33658);
    func_0x00f78a20(0x3d3d668);
    func_0x00f78a20(0x3d3d670);
    bRam0000000003eb4b60 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  lStack_90 = 0;
  if ((int)lVar8 != 0) {
    if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x014cbe74;
    /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$GetEnumerator*/ func_0x0256c15c(&uStack_a0,*(long *)(lVar15 + 0x18),uRam0000000003d3d670);
    lVar8 = 0x3d33650;
    while (uVar3 = /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$MoveNext*/ func_0x01f81bac(&uStack_a0,uRam0000000003d33650), (uVar3 & 1) != 0) {
      if (lStack_90 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14cbe74);
        (*pcVar1)();
      }
      *(undefined8 *)(lStack_90 + 0x28) = uStack_80;
    }
    /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_a0,uRam0000000003d33648);
  }
  do {
    if (*(long *)(lVar15 + 0x18) != 0) {
      uVar3 = /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$Clear*/ func_0x0256b8c8(*(long *)(lVar15 + 0x18),uRam0000000003d3d668);
      return uVar3;
    }
code_r0x014cbe74:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014cbeb4;
    plVar4 = (long *)___cxa_begin_catch();
    lVar8 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_a0,uRam0000000003d33648);
  } while (lVar8 == 0);
  func_0x00f78ac0(lVar8,0);
code_r0x014cbeb4:
  uVar14 = __Unwind_Resume();
  uStack_c8 = 0x3eb4000;
  puStack_a8 = &Atlas_Rendering_PostProcessingManager__RegisterAllVolumeObjects;
  uStack_d0 = uVar2;
  lStack_c0 = lVar8;
  lStack_b8 = lVar15;
  ppuStack_b0 = &puStack_50;
  if ((bRam0000000003eb4b5d & 1) == 0) {
    func_0x00f78a20(0x3d5b090);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b5d = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*UnityEngine.Object$$FindObjectsOfType<Volume>*/ func_0x018a6574(1,uRam0000000003d5b090);
  if ((bRam0000000003eb4b5e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d190);
    func_0x00f78a20(0x3d1d3a0);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b5e = 1;
  }
  if (plVar4 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar13 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar3 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerable<Volume>_TypeInfo*/ lRam0000000003d1d190) {
          puVar5 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x014cbff8;
        }
        piVar12 = piVar12 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IEnumerable<Volume>_TypeInfo*/ lRam0000000003d1d190,0);
code_r0x014cbff8:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar4 != (long *)0x0) {
      do {
        lVar13 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar3 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar5 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x014cc068;
            }
            piVar12 = piVar12 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014cc068:
        uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar3 & 1) == 0) goto code_r0x014cc0e0;
        lVar13 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar3 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0) {
              puVar5 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x014cc0c4;
            }
            piVar12 = piVar12 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0,0);
code_r0x014cc0c4:
        uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        Atlas_Rendering_PostProcessingManager__RegisterVolume(uVar14,uVar2);
      } while( true );
    }
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14cc168);
  (*pcVar1)();
code_r0x014cc0e0:
  lVar13 = 0;
  do {
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar3 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x014cc13c;
          }
          piVar12 = piVar12 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014cc13c:
      uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    if (lVar13 == 0) {
      return uVar3;
    }
    func_0x00f78ac0(lVar13,0);
    if (extraout_w1_00 != 1) break;
    plVar6 = (long *)___cxa_begin_catch();
    lVar13 = *plVar6;
    uVar3 = ___cxa_end_catch();
  } while( true );
  auVar17 = __Unwind_Resume();
  lVar8 = auVar17._8_8_;
  uStack_110 = 0x3d2a320;
  uStack_108 = 0x3d5bb28;
  uStack_100 = 0x3d1d3a0;
  uStack_f8 = 0x3d22180;
  puStack_d8 = &Atlas_Rendering_PostProcessingManager__HasVolume;
  lStack_f0 = lVar13;
  plStack_e8 = plVar4;
  pppuStack_e0 = &ppuStack_b0;
  if ((bRam0000000003eb4b62 & 1) == 0) {
    func_0x00f78a20(0x3d33648);
    func_0x00f78a20(0x3d33650);
    func_0x00f78a20(0x3d33658);
    func_0x00f78a20(0x3d3d670);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b62 = 1;
  }
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lVar13 = *(long *)(auVar17._0_8_ + 0x18);
  if (lVar13 == 0) {
    func_0x00f78af4();
    if (extraout_w1_01 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar8 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_140,/*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0);
      if (lVar8 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar17 = func_0x00f78ac0(lVar8,0);
    lVar13 = auVar17._0_8_;
    if ((bRam0000000003eb4b65 & 1) == 0) {
      func_0x00f78a20(0x3d33180);
      func_0x00f78a20(0x3d33188);
      func_0x00f78a20(0x3d33190);
      func_0x00f78a20(0x3d3c8b8);
      func_0x00f78a20(0x3d23e10);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb4b65 = 1;
    }
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    lStack_1c0 = 0;
    if ((auVar17._8_8_ == 0) || (lVar8 = *(long *)(auVar17._8_8_ + 0x18), lVar8 == 0)) {
      func_0x00f78af4();
      if (extraout_w1_02 == 1) {
        plVar4 = (long *)___cxa_begin_catch();
        lVar13 = *plVar4;
        ___cxa_end_catch();
        uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1d0,uRam0000000003d5bb28);
        if (lVar13 == 0) {
          return uVar3;
        }
        func_0x00f78ac0(lVar13,0);
      }
      uVar3 = __Unwind_Resume();
      return uVar3;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1e8,lVar8,uRam0000000003d3c8b8);
    uStack_1c8 = uStack_1e0;
    uStack_1d0 = uStack_1e8;
    lStack_1c0 = lStack_1d8;
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1d0,uRam0000000003d33188);
      lVar8 = lStack_1c0;
      if ((uVar3 & 1) == 0) {
        uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1d0,uRam0000000003d33180);
        return uVar3;
      }
      if (*(int *)(lVar13 + 0x20) < 1) {
        if (lStack_1c0 == 0) {
          func_0x00f78af4();
code_r0x014cc554:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x14cc558);
          (*pcVar1)();
        }
      }
      else {
        uVar3 = 0;
        lVar15 = 0x28;
        do {
          if (((*(ushort *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar11 = **(long **)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xb8);
          if (lVar11 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar3) {
            uVar2 = func_0x00f78b24();
            func_0x00f78ac0(uVar2,0);
            goto code_r0x014cc554;
          }
          if (lVar8 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          uVar14 = *(undefined8 *)(lVar11 + lVar15);
          uVar2 = /*System.Object$$GetType*/ func_0x02959198(lVar8,0);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar2,uVar14,0);
          if ((uVar7 & 1) != 0) {
            lVar15 = *(long *)(lVar13 + 0x28);
            if (lVar15 == 0) {
              func_0x00f78af4();
              goto code_r0x014cc554;
            }
            if ((uint)uVar3 < *(uint *)(lVar15 + 0x18)) {
              uVar9 = *(undefined1 *)(lVar15 + uVar3 + 0x20);
              goto code_r0x014cc4e4;
            }
            uVar2 = func_0x00f78b24();
            func_0x00f78ac0(uVar2,0);
            goto code_r0x014cc554;
          }
          uVar3 = uVar3 + 1;
          lVar15 = lVar15 + 0x10;
        } while ((long)uVar3 < (long)*(int *)(lVar13 + 0x20));
      }
      uVar9 = 0;
code_r0x014cc4e4:
      *(undefined1 *)(lVar8 + 0x18) = uVar9;
    } while( true );
  }
  /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$GetEnumerator*/ func_0x0256c15c(&uStack_140,lVar13,uRam0000000003d3d670);
  do {
    uVar3 = /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$MoveNext*/ func_0x01f81bac(&uStack_140,uRam0000000003d33650);
    uVar2 = uStack_130;
    if ((uVar3 & 1) == 0) {
      iVar10 = 0x3f;
      goto code_r0x014cc2a0;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,lVar8,0);
  } while ((uVar7 & 1) == 0);
  iVar10 = 0x41;
code_r0x014cc2a0:
  /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_140,uRam0000000003d33648);
  if (iVar10 != 0x41) {
    uVar3 = 0;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x14cbd68 | Atlas.Rendering.PostProcessingManager.UnRegisterAllVolumes
// ============================================================

ulong Atlas_Rendering_PostProcessingManager__UnRegisterAllVolumes(long param_1,int param_2)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  undefined8 *unaff_x23;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb4b60 & 1) == 0) {
    func_0x00f78a20(0x3d33648);
    func_0x00f78a20(0x3d33650);
    func_0x00f78a20(0x3d33658);
    func_0x00f78a20(0x3d3d668);
    func_0x00f78a20(0x3d3d670);
    bRam0000000003eb4b60 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  lStack_50 = 0;
  if (param_2 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_014cbe74;
    /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$GetEnumerator*/ func_0x0256c15c(&uStack_60,*(long *)(param_1 + 0x18),uRam0000000003d3d670);
    while (uVar2 = /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$MoveNext*/ func_0x01f81bac(&uStack_60,uRam0000000003d33650), (uVar2 & 1) != 0) {
      if (lStack_50 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14cbe74);
        (*pcVar1)();
      }
      *(undefined8 *)(lStack_50 + 0x28) = uStack_40;
    }
    /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_60,uRam0000000003d33648);
  }
  do {
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar2 = /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$Clear*/ func_0x0256b8c8(*(long *)(param_1 + 0x18),uRam0000000003d3d668);
      return uVar2;
    }
LAB_014cbe74:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014cbeb4;
    plVar3 = (long *)___cxa_begin_catch();
    lVar14 = *plVar3;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_60,uRam0000000003d33648);
  } while (lVar14 == 0);
  func_0x00f78ac0(lVar14,0);
code_r0x014cbeb4:
  uVar4 = __Unwind_Resume();
  if ((bRam0000000003eb4b5d & 1) == 0) {
    func_0x00f78a20(0x3d5b090);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b5d = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*UnityEngine.Object$$FindObjectsOfType<Volume>*/ func_0x018a6574(1,uRam0000000003d5b090);
  if ((bRam0000000003eb4b5e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d190);
    func_0x00f78a20(0x3d1d3a0);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b5e = 1;
  }
  if (plVar3 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar14 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar2 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerable<Volume>_TypeInfo*/ lRam0000000003d1d190) {
          puVar5 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x014cbff8;
        }
        piVar13 = piVar13 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.Generic.IEnumerable<Volume>_TypeInfo*/ lRam0000000003d1d190,0);
code_r0x014cbff8:
    plVar3 = (long *)(*(code *)*puVar5)(plVar3,puVar5[1]);
    if (plVar3 != (long *)0x0) {
      do {
        lVar14 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar2 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar5 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014cc068;
            }
            piVar13 = piVar13 + 4;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014cc068:
        uVar2 = (*(code *)*puVar5)(plVar3,puVar5[1]);
        if ((uVar2 & 1) == 0) goto code_r0x014cc0e0;
        lVar14 = *plVar3;
        uVar2 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar2 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0) {
              puVar5 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014cc0c4;
            }
            piVar13 = piVar13 + 4;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0,0);
code_r0x014cc0c4:
        uVar6 = (*(code *)*puVar5)(plVar3,puVar5[1]);
        Atlas_Rendering_PostProcessingManager__RegisterVolume(uVar4,uVar6);
      } while( true );
    }
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14cc168);
  (*pcVar1)();
code_r0x014cc0e0:
  lVar14 = 0;
  do {
    if (plVar3 != (long *)0x0) {
      lVar11 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar2 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x014cc13c;
          }
          piVar13 = piVar13 + 4;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014cc13c:
      uVar2 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    }
    if (lVar14 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(lVar14,0);
    if (extraout_w1_00 != 1) break;
    plVar7 = (long *)___cxa_begin_catch();
    lVar14 = *plVar7;
    uVar2 = ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar14 = auVar16._8_8_;
  if ((bRam0000000003eb4b62 & 1) == 0) {
    func_0x00f78a20(0x3d33648);
    func_0x00f78a20(0x3d33650);
    func_0x00f78a20(0x3d33658);
    func_0x00f78a20(0x3d3d670);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b62 = 1;
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar11 = *(long *)(auVar16._0_8_ + 0x18);
  if (lVar11 == 0) {
    func_0x00f78af4();
    if (extraout_w1_01 == 1) {
      plVar3 = (long *)___cxa_begin_catch();
      lVar14 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_100,/*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0);
      if (lVar14 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar16 = func_0x00f78ac0(lVar14,0);
    lVar14 = auVar16._0_8_;
    if ((bRam0000000003eb4b65 & 1) == 0) {
      func_0x00f78a20(0x3d33180);
      func_0x00f78a20(0x3d33188);
      func_0x00f78a20(0x3d33190);
      func_0x00f78a20(0x3d3c8b8);
      func_0x00f78a20(0x3d23e10);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb4b65 = 1;
    }
    uStack_190 = 0;
    uStack_188 = 0;
    lStack_180 = 0;
    if ((auVar16._8_8_ == 0) || (lVar11 = *(long *)(auVar16._8_8_ + 0x18), lVar11 == 0)) {
      func_0x00f78af4();
      if (extraout_w1_02 == 1) {
        plVar3 = (long *)___cxa_begin_catch();
        lVar14 = *plVar3;
        ___cxa_end_catch();
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_190,*unaff_x23);
        if (lVar14 == 0) {
          return uVar2;
        }
        func_0x00f78ac0(lVar14,0);
      }
      uVar2 = __Unwind_Resume();
      return uVar2;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1a8,lVar11,uRam0000000003d3c8b8);
    uStack_188 = uStack_1a0;
    uStack_190 = uStack_1a8;
    lStack_180 = lStack_198;
    do {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_190,uRam0000000003d33188);
      lVar11 = lStack_180;
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_190,uRam0000000003d33180);
        return uVar2;
      }
      if (*(int *)(lVar14 + 0x20) < 1) {
        if (lStack_180 == 0) {
          func_0x00f78af4();
code_r0x014cc554:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x14cc558);
          (*pcVar1)();
        }
      }
      else {
        uVar2 = 0;
        lVar15 = 0x28;
        do {
          if (((*(ushort *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar12 = **(long **)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xb8);
          if (lVar12 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar2) {
            uVar4 = func_0x00f78b24();
            func_0x00f78ac0(uVar4,0);
            goto code_r0x014cc554;
          }
          if (lVar11 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          uVar6 = *(undefined8 *)(lVar12 + lVar15);
          uVar4 = /*System.Object$$GetType*/ func_0x02959198(lVar11,0);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar4,uVar6,0);
          if ((uVar8 & 1) != 0) {
            lVar15 = *(long *)(lVar14 + 0x28);
            if (lVar15 == 0) {
              func_0x00f78af4();
              goto code_r0x014cc554;
            }
            if ((uint)uVar2 < *(uint *)(lVar15 + 0x18)) {
              uVar9 = *(undefined1 *)(lVar15 + uVar2 + 0x20);
              goto code_r0x014cc4e4;
            }
            uVar4 = func_0x00f78b24();
            func_0x00f78ac0(uVar4,0);
            goto code_r0x014cc554;
          }
          uVar2 = uVar2 + 1;
          lVar15 = lVar15 + 0x10;
        } while ((long)uVar2 < (long)*(int *)(lVar14 + 0x20));
      }
      uVar9 = 0;
code_r0x014cc4e4:
      *(undefined1 *)(lVar11 + 0x18) = uVar9;
    } while( true );
  }
  /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$GetEnumerator*/ func_0x0256c15c(&uStack_100,lVar11,uRam0000000003d3d670);
  do {
    uVar2 = /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$MoveNext*/ func_0x01f81bac(&uStack_100,uRam0000000003d33650);
    uVar4 = uStack_f0;
    if ((uVar2 & 1) == 0) {
      iVar10 = 0x3f;
      goto code_r0x014cc2a0;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,lVar14,0);
  } while ((uVar8 & 1) == 0);
  iVar10 = 0x41;
code_r0x014cc2a0:
  /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_100,uRam0000000003d33648);
  if (iVar10 != 0x41) {
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x14cbeb8 | Atlas.Rendering.PostProcessingManager.RegisterAllVolumeObjects
// ============================================================

ulong Atlas_Rendering_PostProcessingManager__RegisterAllVolumeObjects(undefined8 param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  undefined1 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 *unaff_x23;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000003eb4b5d & 1) == 0) {
    func_0x00f78a20(0x3d5b090);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b5d = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*UnityEngine.Object$$FindObjectsOfType<Volume>*/ func_0x018a6574(1,uRam0000000003d5b090);
  if ((bRam0000000003eb4b5e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d190);
    func_0x00f78a20(0x3d1d3a0);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b5e = 1;
  }
  if (plVar2 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar9 = *plVar2;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerable<Volume>_TypeInfo*/ lRam0000000003d1d190) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x014cbff8;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.Generic.IEnumerable<Volume>_TypeInfo*/ lRam0000000003d1d190,0);
code_r0x014cbff8:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar2 != (long *)0x0) {
      do {
        lVar9 = *plVar2;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014cc068;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014cc068:
        uVar12 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar12 & 1) == 0) goto code_r0x014cc0e0;
        lVar9 = *plVar2;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0) {
              puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014cc0c4;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0,0);
code_r0x014cc0c4:
        uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        Atlas_Rendering_PostProcessingManager__RegisterVolume(param_1,uVar4);
      } while( true );
    }
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14cc168);
  (*pcVar1)();
code_r0x014cc0e0:
  lVar9 = 0;
  do {
    if (plVar2 != (long *)0x0) {
      lVar10 = *plVar2;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x014cc13c;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar2,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014cc13c:
      uVar12 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    }
    if (lVar9 == 0) {
      return uVar12;
    }
    func_0x00f78ac0(lVar9,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    lVar9 = *plVar5;
    uVar12 = ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar9 = auVar16._8_8_;
  if ((bRam0000000003eb4b62 & 1) == 0) {
    func_0x00f78a20(0x3d33648);
    func_0x00f78a20(0x3d33650);
    func_0x00f78a20(0x3d33658);
    func_0x00f78a20(0x3d3d670);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b62 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (lVar10 == 0) {
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar2 = (long *)___cxa_begin_catch();
      lVar9 = *plVar2;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_a0,/*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0);
      if (lVar9 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar16 = func_0x00f78ac0(lVar9,0);
    lVar9 = auVar16._0_8_;
    if ((bRam0000000003eb4b65 & 1) == 0) {
      func_0x00f78a20(0x3d33180);
      func_0x00f78a20(0x3d33188);
      func_0x00f78a20(0x3d33190);
      func_0x00f78a20(0x3d3c8b8);
      func_0x00f78a20(0x3d23e10);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb4b65 = 1;
    }
    uStack_130 = 0;
    uStack_128 = 0;
    lStack_120 = 0;
    if ((auVar16._8_8_ == 0) || (lVar10 = *(long *)(auVar16._8_8_ + 0x18), lVar10 == 0)) {
      func_0x00f78af4();
      if (extraout_w1_01 == 1) {
        plVar2 = (long *)___cxa_begin_catch();
        lVar9 = *plVar2;
        ___cxa_end_catch();
        uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_130,*unaff_x23);
        if (lVar9 == 0) {
          return uVar12;
        }
        func_0x00f78ac0(lVar9,0);
      }
      uVar12 = __Unwind_Resume();
      return uVar12;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_148,lVar10,uRam0000000003d3c8b8);
    uStack_128 = uStack_140;
    uStack_130 = uStack_148;
    lStack_120 = lStack_138;
    do {
      uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_130,uRam0000000003d33188);
      lVar10 = lStack_120;
      if ((uVar12 & 1) == 0) {
        uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_130,uRam0000000003d33180);
        return uVar12;
      }
      if (*(int *)(lVar9 + 0x20) < 1) {
        if (lStack_120 == 0) {
          func_0x00f78af4();
code_r0x014cc554:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x14cc558);
          (*pcVar1)();
        }
      }
      else {
        uVar12 = 0;
        lVar15 = 0x28;
        do {
          if (((*(ushort *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar11 = **(long **)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xb8);
          if (lVar11 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar12) {
            uVar4 = func_0x00f78b24();
            func_0x00f78ac0(uVar4,0);
            goto code_r0x014cc554;
          }
          if (lVar10 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          uVar14 = *(undefined8 *)(lVar11 + lVar15);
          uVar4 = /*System.Object$$GetType*/ func_0x02959198(lVar10,0);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar6 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar4,uVar14,0);
          if ((uVar6 & 1) != 0) {
            lVar15 = *(long *)(lVar9 + 0x28);
            if (lVar15 == 0) {
              func_0x00f78af4();
              goto code_r0x014cc554;
            }
            if ((uint)uVar12 < *(uint *)(lVar15 + 0x18)) {
              uVar7 = *(undefined1 *)(lVar15 + uVar12 + 0x20);
              goto code_r0x014cc4e4;
            }
            uVar4 = func_0x00f78b24();
            func_0x00f78ac0(uVar4,0);
            goto code_r0x014cc554;
          }
          uVar12 = uVar12 + 1;
          lVar15 = lVar15 + 0x10;
        } while ((long)uVar12 < (long)*(int *)(lVar9 + 0x20));
      }
      uVar7 = 0;
code_r0x014cc4e4:
      *(undefined1 *)(lVar10 + 0x18) = uVar7;
    } while( true );
  }
  /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$GetEnumerator*/ func_0x0256c15c(&uStack_a0,lVar10,uRam0000000003d3d670);
  do {
    uVar12 = /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$MoveNext*/ func_0x01f81bac(&uStack_a0,uRam0000000003d33650);
    uVar4 = uStack_90;
    if ((uVar12 & 1) == 0) {
      iVar8 = 0x3f;
      goto code_r0x014cc2a0;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,lVar9,0);
  } while ((uVar6 & 1) == 0);
  iVar8 = 0x41;
code_r0x014cc2a0:
  /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_a0,uRam0000000003d33648);
  if (iVar8 != 0x41) {
    uVar12 = 0;
  }
  return uVar12;
}



// ============================================================
// RVA: 0x14cbf44 | Atlas.Rendering.PostProcessingManager.RegisterVolumes
// ============================================================

ulong Atlas_Rendering_PostProcessingManager__RegisterVolumes(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  undefined1 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 *unaff_x23;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000003eb4b5e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d190);
    func_0x00f78a20(0x3d1d3a0);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b5e = 1;
  }
  if (param_2 == (long *)0x0) {
    func_0x00f78af4();
  }
  else {
    lVar9 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerable<Volume>_TypeInfo*/ lRam0000000003d1d190) {
          puVar2 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_014cbff8;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(param_2,/*System.Collections.Generic.IEnumerable<Volume>_TypeInfo*/ lRam0000000003d1d190,0);
LAB_014cbff8:
    plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
    if (plVar3 != (long *)0x0) {
      do {
        lVar9 = *plVar3;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar2 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014cc068;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar2 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014cc068:
        uVar12 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        if ((uVar12 & 1) == 0) goto code_r0x014cc0e0;
        lVar9 = *plVar3;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0) {
              puVar2 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014cc0c4;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar2 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0,0);
code_r0x014cc0c4:
        uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        Atlas_Rendering_PostProcessingManager__RegisterVolume(param_1,uVar4);
      } while( true );
    }
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14cc168);
  (*pcVar1)();
code_r0x014cc0e0:
  lVar9 = 0;
  do {
    if (plVar3 != (long *)0x0) {
      lVar10 = *plVar3;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar2 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x014cc13c;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014cc13c:
      uVar12 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    }
    if (lVar9 == 0) {
      return uVar12;
    }
    func_0x00f78ac0(lVar9,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    lVar9 = *plVar5;
    uVar12 = ___cxa_end_catch();
  } while( true );
  auVar16 = __Unwind_Resume();
  lVar9 = auVar16._8_8_;
  if ((bRam0000000003eb4b62 & 1) == 0) {
    func_0x00f78a20(0x3d33648);
    func_0x00f78a20(0x3d33650);
    func_0x00f78a20(0x3d33658);
    func_0x00f78a20(0x3d3d670);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b62 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar10 = *(long *)(auVar16._0_8_ + 0x18);
  if (lVar10 == 0) {
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar3 = (long *)___cxa_begin_catch();
      lVar9 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_a0,/*System.Collections.Generic.IEnumerator<Volume>_TypeInfo*/ lRam0000000003d1d3a0);
      if (lVar9 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar16 = func_0x00f78ac0(lVar9,0);
    lVar9 = auVar16._0_8_;
    if ((bRam0000000003eb4b65 & 1) == 0) {
      func_0x00f78a20(0x3d33180);
      func_0x00f78a20(0x3d33188);
      func_0x00f78a20(0x3d33190);
      func_0x00f78a20(0x3d3c8b8);
      func_0x00f78a20(0x3d23e10);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb4b65 = 1;
    }
    uStack_130 = 0;
    uStack_128 = 0;
    lStack_120 = 0;
    if ((auVar16._8_8_ == 0) || (lVar10 = *(long *)(auVar16._8_8_ + 0x18), lVar10 == 0)) {
      func_0x00f78af4();
      if (extraout_w1_01 == 1) {
        plVar3 = (long *)___cxa_begin_catch();
        lVar9 = *plVar3;
        ___cxa_end_catch();
        uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_130,*unaff_x23);
        if (lVar9 == 0) {
          return uVar12;
        }
        func_0x00f78ac0(lVar9,0);
      }
      uVar12 = __Unwind_Resume();
      return uVar12;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_148,lVar10,uRam0000000003d3c8b8);
    uStack_128 = uStack_140;
    uStack_130 = uStack_148;
    lStack_120 = lStack_138;
    do {
      uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_130,uRam0000000003d33188);
      lVar10 = lStack_120;
      if ((uVar12 & 1) == 0) {
        uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_130,uRam0000000003d33180);
        return uVar12;
      }
      if (*(int *)(lVar9 + 0x20) < 1) {
        if (lStack_120 == 0) {
          func_0x00f78af4();
code_r0x014cc554:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x14cc558);
          (*pcVar1)();
        }
      }
      else {
        uVar12 = 0;
        lVar15 = 0x28;
        do {
          if (((*(ushort *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar11 = **(long **)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xb8);
          if (lVar11 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar12) {
            uVar4 = func_0x00f78b24();
            func_0x00f78ac0(uVar4,0);
            goto code_r0x014cc554;
          }
          if (lVar10 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          uVar14 = *(undefined8 *)(lVar11 + lVar15);
          uVar4 = /*System.Object$$GetType*/ func_0x02959198(lVar10,0);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar6 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar4,uVar14,0);
          if ((uVar6 & 1) != 0) {
            lVar15 = *(long *)(lVar9 + 0x28);
            if (lVar15 == 0) {
              func_0x00f78af4();
              goto code_r0x014cc554;
            }
            if ((uint)uVar12 < *(uint *)(lVar15 + 0x18)) {
              uVar7 = *(undefined1 *)(lVar15 + uVar12 + 0x20);
              goto code_r0x014cc4e4;
            }
            uVar4 = func_0x00f78b24();
            func_0x00f78ac0(uVar4,0);
            goto code_r0x014cc554;
          }
          uVar12 = uVar12 + 1;
          lVar15 = lVar15 + 0x10;
        } while ((long)uVar12 < (long)*(int *)(lVar9 + 0x20));
      }
      uVar7 = 0;
code_r0x014cc4e4:
      *(undefined1 *)(lVar10 + 0x18) = uVar7;
    } while( true );
  }
  /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$GetEnumerator*/ func_0x0256c15c(&uStack_a0,lVar10,uRam0000000003d3d670);
  do {
    uVar12 = /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$MoveNext*/ func_0x01f81bac(&uStack_a0,uRam0000000003d33650);
    uVar4 = uStack_90;
    if ((uVar12 & 1) == 0) {
      iVar8 = 0x3f;
      goto code_r0x014cc2a0;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,lVar9,0);
  } while ((uVar6 & 1) == 0);
  iVar8 = 0x41;
code_r0x014cc2a0:
  /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_a0,uRam0000000003d33648);
  if (iVar8 != 0x41) {
    uVar12 = 0;
  }
  return uVar12;
}



// ============================================================
// RVA: 0x14cc1a0 | Atlas.Rendering.PostProcessingManager.HasVolume
// ============================================================

ulong Atlas_Rendering_PostProcessingManager__HasVolume(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int extraout_w1;
  int extraout_w1_00;
  undefined1 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb4b62 & 1) == 0) {
    func_0x00f78a20(0x3d33648);
    func_0x00f78a20(0x3d33650);
    func_0x00f78a20(0x3d33658);
    func_0x00f78a20(0x3d3d670);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b62 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      param_2 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_70,*unaff_x22);
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar13 = func_0x00f78ac0(param_2,0);
    lVar10 = auVar13._0_8_;
    if ((bRam0000000003eb4b65 & 1) == 0) {
      func_0x00f78a20(0x3d33180);
      func_0x00f78a20(0x3d33188);
      func_0x00f78a20(0x3d33190);
      func_0x00f78a20(0x3d3c8b8);
      func_0x00f78a20(0x3d23e10);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb4b65 = 1;
    }
    uStack_100 = 0;
    uStack_f8 = 0;
    lStack_f0 = 0;
    if ((auVar13._8_8_ == 0) || (lVar5 = *(long *)(auVar13._8_8_ + 0x18), lVar5 == 0)) {
      func_0x00f78af4();
      if (extraout_w1_00 == 1) {
        plVar4 = (long *)___cxa_begin_catch();
        lVar10 = *plVar4;
        ___cxa_end_catch();
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_100,*unaff_x23);
        if (lVar10 == 0) {
          return uVar2;
        }
        func_0x00f78ac0(lVar10,0);
      }
      uVar2 = __Unwind_Resume();
      return uVar2;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_118,lVar5,uRam0000000003d3c8b8);
    uStack_f8 = uStack_110;
    uStack_100 = uStack_118;
    lStack_f0 = lStack_108;
    do {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_100,uRam0000000003d33188);
      lVar5 = lStack_f0;
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_100,uRam0000000003d33180);
        return uVar2;
      }
      if (*(int *)(lVar10 + 0x20) < 1) {
        if (lStack_f0 == 0) {
          func_0x00f78af4();
code_r0x014cc554:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x14cc558);
          (*pcVar1)();
        }
      }
      else {
        uVar2 = 0;
        lVar12 = 0x28;
        do {
          if (((*(ushort *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar9 = **(long **)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xb8);
          if (lVar9 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar2) {
            uVar6 = func_0x00f78b24();
            func_0x00f78ac0(uVar6,0);
            goto code_r0x014cc554;
          }
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          uVar11 = *(undefined8 *)(lVar9 + lVar12);
          uVar6 = /*System.Object$$GetType*/ func_0x02959198(lVar5,0);
          if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar3 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar6,uVar11,0);
          if ((uVar3 & 1) != 0) {
            lVar12 = *(long *)(lVar10 + 0x28);
            if (lVar12 == 0) {
              func_0x00f78af4();
              goto code_r0x014cc554;
            }
            if (*(uint *)(lVar12 + 0x18) <= (uint)uVar2) {
              uVar6 = func_0x00f78b24();
              func_0x00f78ac0(uVar6,0);
              goto code_r0x014cc554;
            }
            uVar7 = *(undefined1 *)(lVar12 + uVar2 + 0x20);
            goto code_r0x014cc4e4;
          }
          uVar2 = uVar2 + 1;
          lVar12 = lVar12 + 0x10;
        } while ((long)uVar2 < (long)*(int *)(lVar10 + 0x20));
      }
      uVar7 = 0;
code_r0x014cc4e4:
      *(undefined1 *)(lVar5 + 0x18) = uVar7;
    } while( true );
  }
  /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$GetEnumerator*/ func_0x0256c15c(&uStack_70,*(long *)(param_1 + 0x18),uRam0000000003d3d670);
  do {
    uVar2 = /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$MoveNext*/ func_0x01f81bac(&uStack_70,uRam0000000003d33650);
    uVar6 = uStack_60;
    if ((uVar2 & 1) == 0) {
      iVar8 = 0x3f;
      goto LAB_014cc2a0;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,param_2,0);
  } while ((uVar3 & 1) == 0);
  iVar8 = 0x41;
LAB_014cc2a0:
  /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_70,uRam0000000003d33648);
  if (iVar8 != 0x41) {
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x14cc328 | Atlas.Rendering.PostProcessingManager.ApplySettingsToVolumeProfile
// ============================================================

void Atlas_Rendering_PostProcessingManager__ApplySettingsToVolumeProfile(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *unaff_x23;
  long lVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb4b65 & 1) == 0) {
    func_0x00f78a20(0x3d33180);
    func_0x00f78a20(0x3d33188);
    func_0x00f78a20(0x3d33190);
    func_0x00f78a20(0x3d3c8b8);
    func_0x00f78a20(0x3d23e10);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4b65 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar8 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,*unaff_x23);
      if (lVar8 == 0) {
        return;
      }
      func_0x00f78ac0(lVar8,0);
    }
    __Unwind_Resume();
    return;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,*(long *)(param_2 + 0x18),uRam0000000003d3c8b8);
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  lStack_70 = lStack_88;
  do {
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d33188);
    lVar8 = lStack_70;
    if ((uVar2 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d33180);
      return;
    }
    if (*(int *)(param_1 + 0x20) < 1) {
      if (lStack_70 == 0) {
        func_0x00f78af4();
code_r0x014cc554:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14cc558);
        (*pcVar1)();
      }
    }
    else {
      uVar2 = 0;
      lVar10 = 0x28;
      do {
        if (((*(ushort *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = **(long **)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xb8);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014cc554;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar2) {
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto code_r0x014cc554;
        }
        if (lVar8 == 0) {
          func_0x00f78af4();
          goto code_r0x014cc554;
        }
        uVar9 = *(undefined8 *)(lVar7 + lVar10);
        uVar3 = /*System.Object$$GetType*/ func_0x02959198(lVar8,0);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar3,uVar9,0);
        if ((uVar4 & 1) != 0) {
          lVar10 = *(long *)(param_1 + 0x28);
          if (lVar10 == 0) {
            func_0x00f78af4();
            goto code_r0x014cc554;
          }
          if ((uint)uVar2 < *(uint *)(lVar10 + 0x18)) {
            uVar6 = *(undefined1 *)(lVar10 + uVar2 + 0x20);
            goto code_r0x014cc4e4;
          }
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto code_r0x014cc554;
        }
        uVar2 = uVar2 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((long)uVar2 < (long)*(int *)(param_1 + 0x20));
    }
    uVar6 = 0;
code_r0x014cc4e4:
    *(undefined1 *)(lVar8 + 0x18) = uVar6;
  } while( true );
}



// ============================================================
// RVA: 0x14cc5b8 | Atlas.Rendering.PostProcessingManager.UpdateValidation
// ============================================================

void Atlas_Rendering_PostProcessingManager__UpdateValidation(void)

{
  return;
}



// ============================================================
// RVA: 0x14cc5bc | Atlas.Rendering.PostProcessingManager.SuppressValidation
// ============================================================

void Atlas_Rendering_PostProcessingManager__SuppressValidation(void)

{
  return;
}



// ============================================================
// RVA: 0x14cc5c0 | Atlas.Rendering.PostProcessingManager.ResumeValidation
// ============================================================

void Atlas_Rendering_PostProcessingManager__ResumeValidation(void)

{
  return;
}



// ============================================================
// RVA: 0x14cc5c4 | Atlas.Rendering.PostProcessingManager.ApplySettingsToVolumes
// ============================================================

void Atlas_Rendering_PostProcessingManager__ApplySettingsToVolumes(long param_1)

{
  ulong uVar1;
  long *plVar2;
  int extraout_w1;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb4b64 & 1) == 0) {
    func_0x00f78a20(0x3d33648);
    func_0x00f78a20(0x3d33650);
    func_0x00f78a20(0x3d33658);
    func_0x00f78a20(0x3d3d670);
    bRam0000000003eb4b64 = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar2 = (long *)___cxa_begin_catch();
      lVar3 = *plVar2;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_60,uRam0000000003eb4000);
      if (lVar3 == 0) {
        return;
      }
      func_0x00f78ac0(lVar3,0);
    }
    __Unwind_Resume();
    return;
  }
  /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$GetEnumerator*/ func_0x0256c15c(&uStack_60,*(long *)(param_1 + 0x18),uRam0000000003d3d670);
  while (uVar1 = /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$MoveNext*/ func_0x01f81bac(&uStack_60,uRam0000000003d33650), (uVar1 & 1) != 0) {
    Atlas_Rendering_PostProcessingManager__ApplySettingsToVolumeProfile(param_1,uStack_48);
  }
  /*System.Collections.Generic.List.Enumerator<PostProcessingManager.VolumeInfo>$$Dispose*/ func_0x01f81ba8(&uStack_60,uRam0000000003d33648);
  return;
}



// ============================================================
// RVA: 0x14cc6d4 | Atlas.Rendering.PostProcessingManager..ctor
// ============================================================

void Atlas_Rendering_PostProcessingManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x14cc6dc | Atlas.Rendering.PostProcessingManager..cctor
// ============================================================

undefined8 Atlas_Rendering_PostProcessingManager___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  if ((bRam0000000003eb4b66 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d19070);
    func_0x00f78a20(0x3d19148);
    func_0x00f78a20(0x3d191a0);
    func_0x00f78a20(0x3d191a8);
    func_0x00f78a20(0x3d19338);
    func_0x00f78a20(0x3d19470);
    func_0x00f78a20(0x3d19aa8);
    func_0x00f78a20(0x3d19be0);
    func_0x00f78a20(0x3d23e10);
    func_0x00f78a20(0x3d1f860);
    func_0x00f78a20(0x3d19e10);
    func_0x00f78a20(0x3d19ff0);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d1a190);
    bRam0000000003eb4b66 = 1;
  }
  lVar1 = func_0x00f78a34(/*Atlas.Rendering.PostProcessingManager.SettingInfo[]_TypeInfo*/ uRam0000000003d1f860,0xb);
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Rendering.Universal.Bloom_var*/ uRam0000000003d19070;
  uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xe0);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar2,0);
  uStack_50 = 0;
  uStack_48 = 0;
  /*Atlas.Rendering.PostProcessingManager.SettingInfo$$.ctor*/ func_0x0156326c(&uStack_50,uVar3,uVar2,0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x28) = uStack_48;
      *(undefined8 *)(lVar1 + 0x20) = uStack_50;
      uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xe8);
      uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*UnityEngine.Rendering.Universal.ChromaticAberration_var*/ uRam0000000003d19148,0);
      uStack_60 = 0;
      uStack_58 = 0;
      /*Atlas.Rendering.PostProcessingManager.SettingInfo$$.ctor*/ func_0x0156326c(&uStack_60,uVar3,uVar2,0);
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x38) = uStack_58;
        *(undefined8 *)(lVar1 + 0x30) = uStack_60;
        uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xf0);
        uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*UnityEngine.Rendering.Universal.FilmGrain_var*/ uRam0000000003d19470,0);
        uStack_70 = 0;
        uStack_68 = 0;
        /*Atlas.Rendering.PostProcessingManager.SettingInfo$$.ctor*/ func_0x0156326c(&uStack_70,uVar3,uVar2,0);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x48) = uStack_68;
          *(undefined8 *)(lVar1 + 0x40) = uStack_70;
          uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0xf8);
          uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*UnityEngine.Rendering.Universal.DepthOfField_var*/ uRam0000000003d19338,0);
          uStack_80 = 0;
          uStack_78 = 0;
          /*Atlas.Rendering.PostProcessingManager.SettingInfo$$.ctor*/ func_0x0156326c(&uStack_80,uVar3,uVar2,0);
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar1 + 0x58) = uStack_78;
            *(undefined8 *)(lVar1 + 0x50) = uStack_80;
            uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x100);
            uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*UnityEngine.Rendering.Universal.MotionBlur_var*/ uRam0000000003d19aa8,0);
            uStack_90 = 0;
            uStack_88 = 0;
            /*Atlas.Rendering.PostProcessingManager.SettingInfo$$.ctor*/ func_0x0156326c(&uStack_90,uVar3,uVar2,0);
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x68) = uStack_88;
              *(undefined8 *)(lVar1 + 0x60) = uStack_90;
              uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x108);
              uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*UnityEngine.Rendering.Universal.PaniniProjection_var*/ uRam0000000003d19be0,0);
              uStack_a0 = 0;
              uStack_98 = 0;
              /*Atlas.Rendering.PostProcessingManager.SettingInfo$$.ctor*/ func_0x0156326c(&uStack_a0,uVar3,uVar2,0);
              if (5 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x78) = uStack_98;
                *(undefined8 *)(lVar1 + 0x70) = uStack_a0;
                uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x110);
                uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*UnityEngine.Rendering.Universal.ShadowsMidtonesHighlights_var*/ uRam0000000003d19e10,0);
                uStack_b0 = 0;
                uStack_a8 = 0;
                /*Atlas.Rendering.PostProcessingManager.SettingInfo$$.ctor*/ func_0x0156326c(&uStack_b0,uVar3,uVar2,0);
                if (6 < *(uint *)(lVar1 + 0x18)) {
                  *(undefined8 *)(lVar1 + 0x88) = uStack_a8;
                  *(undefined8 *)(lVar1 + 0x80) = uStack_b0;
                  uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x118);
                  uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*UnityEngine.Rendering.Universal.Tonemapping_var*/ uRam0000000003d19ff0,0);
                  uStack_c0 = 0;
                  uStack_b8 = 0;
                  /*Atlas.Rendering.PostProcessingManager.SettingInfo$$.ctor*/ func_0x0156326c(&uStack_c0,uVar3,uVar2,0);
                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar1 + 0x98) = uStack_b8;
                    *(undefined8 *)(lVar1 + 0x90) = uStack_c0;
                    uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x120);
                    uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*UnityEngine.Rendering.Universal.Vignette_var*/ uRam0000000003d1a190,0);
                    uStack_d0 = 0;
                    uStack_c8 = 0;
                    /*Atlas.Rendering.PostProcessingManager.SettingInfo$$.ctor*/ func_0x0156326c(&uStack_d0,uVar3,uVar2,0);
                    if (8 < *(uint *)(lVar1 + 0x18)) {
                      *(undefined8 *)(lVar1 + 0xa8) = uStack_c8;
                      *(undefined8 *)(lVar1 + 0xa0) = uStack_d0;
                      uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x128);
                      uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*UnityEngine.Rendering.Universal.ColorAdjustments_var*/ uRam0000000003d191a0,0);
                      uStack_e0 = 0;
                      uStack_d8 = 0;
                      /*Atlas.Rendering.PostProcessingManager.SettingInfo$$.ctor*/ func_0x0156326c(&uStack_e0,uVar3,uVar2,0);
                      if (9 < *(uint *)(lVar1 + 0x18)) {
                        *(undefined8 *)(lVar1 + 0xb8) = uStack_d8;
                        *(undefined8 *)(lVar1 + 0xb0) = uStack_e0;
                        uVar3 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x130);
                        uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*UnityEngine.Rendering.Universal.ColorCurves_var*/ uRam0000000003d191a8,0);
                        uStack_f0 = 0;
                        uStack_e8 = 0;
                        uVar2 = /*Atlas.Rendering.PostProcessingManager.SettingInfo$$.ctor*/ func_0x0156326c(&uStack_f0,uVar3,uVar2,0);
                        if (10 < *(uint *)(lVar1 + 0x18)) {
                          *(undefined8 *)(lVar1 + 200) = uStack_e8;
                          *(undefined8 *)(lVar1 + 0xc0) = uStack_f0;
                          **(long **)(/*Atlas.Rendering.PostProcessingManager_TypeInfo*/ lRam0000000003d23e10 + 0xb8) = lVar1;
                          return uVar2;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar2 = func_0x00f78b24();
    func_0x00f78ac0(uVar2,0);
  }
  lVar1 = func_0x00f78af4();
  return *(undefined8 *)(lVar1 + 0x20);
}



