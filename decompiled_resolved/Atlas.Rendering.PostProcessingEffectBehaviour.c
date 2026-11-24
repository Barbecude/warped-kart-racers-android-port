// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.PostProcessingEffectBehaviour

// ============================================================
// RVA: 0x14caf10 | Atlas.Rendering.PostProcessingEffectBehaviour.get_Effects
// ============================================================

undefined8 Atlas_Rendering_PostProcessingEffectBehaviour__get_Effects(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14caf18 | Atlas.Rendering.PostProcessingEffectBehaviour.Awake
// ============================================================

/* WARNING: Possible PIC construction at 0x014cb054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cb180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cb058) */
/* WARNING: Removing unreachable block (ram,0x014cb184) */

void Atlas_Rendering_PostProcessingEffectBehaviour__Awake
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x22;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 *****pppppuVar25;
  undefined1 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 ***pppuStack_d0;
  undefined *puStack_c8;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar13 = 0x3eb4000;
  if ((bRam0000000003eb4b56 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b56 = 1;
  }
  iVar11 = (int)param_3;
  lVar15 = *(long *)(param_1 + 0x18);
  if (lVar15 != 0) {
    uVar12 = *(uint *)(lVar15 + 0x18);
    if (0 < (int)uVar12) {
      unaff_x22 = (undefined8 *)0x0;
      do {
        iVar11 = (int)param_3;
        uVar10 = (uint)unaff_x22;
        if (uVar12 <= uVar10) goto LAB_014cb000;
        lVar13 = lVar15 + (long)(int)uVar10 * 0x18;
        param_1 = *(long *)(lVar13 + 0x28);
        lVar13 = *(long *)(lVar13 + 0x30);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar11 = 0;
        iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0);
        if (iVar6 != 0) {
          if (lVar13 == 0) goto LAB_014caffc;
          iVar11 = 0;
          /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar13,0);
        }
        if (param_1 == 0) goto LAB_014caffc;
        param_3 = 0;
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(param_1,0);
        unaff_x22 = (undefined8 *)(ulong)(uVar10 + 1);
        uVar12 = *(uint *)(lVar15 + 0x18);
      } while ((int)(uVar10 + 1) < (int)uVar12);
    }
    return;
  }
LAB_014caffc:
  func_0x00f78af4();
LAB_014cb000:
  uVar7 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar7,0);
  lVar17 = auVar22._8_8_;
  puStack_48 = &Atlas_Rendering_PostProcessingEffectBehaviour__RegisterVolumesWithManger;
  lVar14 = *(long *)(auVar22._0_8_ + 0x18);
  puVar16 = unaff_x22;
  puStack_70 = unaff_x22;
  lStack_68 = lVar15;
  lStack_60 = lVar13;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar14 == 0) {
code_r0x014cb084:
    puVar21 = &Atlas_Rendering_PostProcessingManager__RegisterVolume;
    auVar22 = func_0x00f78af4();
  }
  else {
    if ((int)*(ulong *)(lVar14 + 0x18) < 1) {
      return;
    }
    lVar15 = 0;
    puVar1 = (undefined8 *)(lVar14 + 0x28);
    param_1 = lVar17;
    puVar16 = puVar1;
    if ((*(ulong *)(lVar14 + 0x18) & 0xffffffff) == 0) {
      uVar7 = func_0x00f78b24();
      func_0x00f78ac0(uVar7,0);
      goto code_r0x014cb084;
    }
    if (lVar17 == 0) goto code_r0x014cb084;
    puVar16 = (undefined8 *)(lVar14 + 0x40);
    auVar22._8_8_ = *puVar1;
    auVar22._0_8_ = lVar17;
    puVar21 = &UNK_014cb058;
  }
  lVar17 = auVar22._8_8_;
  lVar13 = auVar22._0_8_;
  uVar7 = 0x3eb4000;
  puStack_a0 = puVar16;
  lStack_98 = lVar15;
  lStack_90 = lVar14;
  lStack_88 = param_1;
  ppuStack_80 = &puStack_50;
  puStack_78 = puVar21;
  if ((bRam0000000003eb4b5f & 1) == 0) {
    func_0x00f78a20(0x3d3d660);
    bRam0000000003eb4b5f = 1;
  }
  uVar8 = /*Atlas.Rendering.PostProcessingManager$$HasVolume*/ func_0x014cc1a0(lVar13,lVar17);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (lVar17 != 0) {
    uVar7 = /*UnityEngine.Rendering.Volume$$get_profile*/ func_0x0310b320(lVar17,0);
    *(undefined8 *)(lVar17 + 0x28) = uVar7;
    if (*(long *)(lVar13 + 0x18) != 0) {
      lStack_b8 = lVar17;
      uStack_b0 = uVar7;
      uStack_a8 = uVar7;
      /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$Add*/ func_0x0256b590(*(long *)(lVar13 + 0x18),&lStack_b8,uRam0000000003d3d660);
      /*Atlas.Rendering.PostProcessingManager$$ApplySettingsToVolumeProfile*/ func_0x014cc328(lVar13,uVar7);
      return;
    }
  }
  auVar23 = func_0x00f78af4();
  lVar15 = auVar23._8_8_;
  auVar3._8_8_ = lVar17;
  auVar3._0_8_ = lVar15;
  puStack_c8 = &Atlas_Rendering_PostProcessingEffectBehaviour__UnRegisterVolumesWithManger;
  lVar14 = *(long *)(auVar23._0_8_ + 0x18);
  puStack_f0 = puVar16;
  uStack_e8 = uVar7;
  lStack_d8 = lVar13;
  pppuStack_d0 = &ppuStack_80;
  auVar23 = auVar22;
  if (lVar14 != 0) {
    if ((int)*(ulong *)(lVar14 + 0x18) < 1) {
      return;
    }
    uVar7 = 0;
    puVar1 = (undefined8 *)(lVar14 + 0x28);
    puVar16 = puVar1;
    if ((*(ulong *)(lVar14 + 0x18) & 0xffffffff) == 0) {
      lStack_e0 = lVar17;
      uVar20 = func_0x00f78b24();
      func_0x00f78ac0(uVar20,0);
      auVar23._8_8_ = lStack_e0;
      auVar23._0_8_ = lVar15;
    }
    else {
      auVar23 = auVar3;
      if (lVar15 != 0) {
        puVar16 = (undefined8 *)(lVar14 + 0x40);
        auVar24._8_8_ = *puVar1;
        auVar24._0_8_ = lVar15;
        iVar11 = 1;
        puVar21 = &UNK_014cb184;
        goto code_r0x014cb1b4;
      }
    }
  }
  lStack_e0 = auVar23._8_8_;
  lVar15 = auVar23._0_8_;
  puVar21 = &Atlas_Rendering_PostProcessingManager__UnRegisterVolume;
  auVar24 = func_0x00f78af4();
  auVar22._8_8_ = lStack_e0;
  auVar22._0_8_ = lStack_d8;
code_r0x014cb1b4:
  lStack_e0 = auVar22._8_8_;
  lStack_d8 = auVar22._0_8_;
  lVar13 = auVar24._0_8_;
  ppppuStack_100 = &pppuStack_d0;
  puStack_f8 = puVar21;
  if ((bRam0000000003eb4b61 & 1) == 0) {
    func_0x00f78a20(0x3d3d678);
    func_0x00f78a20(0x3d3d680);
    func_0x00f78a20(0x3d3d688);
    func_0x00f78a20(0x3d23990);
    auVar22._8_8_ = lStack_e0;
    auVar22._0_8_ = lStack_d8;
    bRam0000000003eb4b61 = 1;
  }
  lVar17 = *(long *)(lVar13 + 0x18);
  auVar5 = auVar22;
  if (lVar17 != 0) {
    uVar12 = *(uint *)(lVar17 + 0x18);
    if ((int)uVar12 < 1) {
      return;
    }
    lVar19 = 0;
    uVar8 = 0;
    do {
      lStack_e0 = auVar22._8_8_;
      lStack_d8 = auVar22._0_8_;
      if (*(uint *)(lVar17 + 0x18) <= uVar8) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        auVar22._8_8_ = lStack_e0;
        auVar22._0_8_ = lStack_d8;
      }
      lStack_e0 = auVar22._8_8_;
      lStack_d8 = auVar22._0_8_;
      lVar17 = *(long *)(lVar17 + 0x10) + lVar19;
      lVar18 = *(long *)(lVar17 + 0x20);
      uVar20 = *(undefined8 *)(lVar17 + 0x30);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
        auVar22._8_8_ = lStack_e0;
        auVar22._0_8_ = lStack_d8;
      }
      lStack_e0 = auVar22._8_8_;
      lStack_d8 = auVar22._0_8_;
      iVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar18,auVar24._8_8_,0);
      auVar22._8_8_ = lStack_e0;
      auVar22._0_8_ = lStack_d8;
      auVar5._8_8_ = lStack_e0;
      auVar5._0_8_ = lStack_d8;
      auVar4._8_8_ = lStack_e0;
      auVar4._0_8_ = lStack_d8;
      if (iVar6 != 0) {
        if (iVar11 != 0) {
          if (lVar18 == 0) break;
          *(undefined8 *)(lVar18 + 0x28) = uVar20;
        }
        lVar13 = *(long *)(lVar13 + 0x18);
        auVar5 = auVar22;
        if (lVar13 != 0) {
          pppppuVar25 = &ppppuStack_100;
          uVar12 = *(uint *)(lVar13 + 0x18);
          uVar10 = (uint)uVar8;
          uVar20 = uRam0000000003d3d678;
          if (uVar12 <= uVar10) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            uVar12 = *(uint *)(lVar13 + 0x18);
          }
          uVar12 = uVar12 - 1;
          *(uint *)(lVar13 + 0x18) = uVar12;
          if (uVar12 - uVar10 != 0 && (int)uVar10 <= (int)uVar12) {
            uVar20 = *(undefined8 *)(lVar13 + 0x10);
            /*System.Array$$Copy*/ func_0x0292b4cc(uVar20,uVar10 + 1,uVar20,uVar8,uVar12 - uVar10,0,in_x6,in_x7,lVar14,
                            lVar15);
            uVar12 = *(uint *)(lVar13 + 0x18);
          }
          lVar15 = *(long *)(lVar13 + 0x10);
          if (lVar15 == 0) {
            func_0x00f78af4();
          }
          else if (uVar12 < *(uint *)(lVar15 + 0x18)) {
            lVar15 = lVar15 + (long)(int)uVar12 * 0x18;
            *(undefined8 *)(lVar15 + 0x20) = 0;
            *(undefined8 *)(lVar15 + 0x28) = 0;
            *(undefined8 *)(lVar15 + 0x30) = 0;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            return;
          }
          uVar9 = func_0x00f78b24();
          auVar22 = func_0x00f78ac0(uVar9,0);
          lVar15 = auVar22._0_8_;
          puVar21 = &System_Collections_Generic_List_PostProcessingManager_VolumeInfo___RemoveRange;
          iVar11 = auVar22._8_4_;
          iVar6 = (int)uVar20;
          if (iVar11 < 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
          }
          if (iVar6 < 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
          }
          if (*(int *)(lVar15 + 0x18) - iVar11 < iVar6) {
            /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
          }
          if (0 < iVar6) {
            iVar2 = *(int *)(lVar15 + 0x18) - iVar6;
            *(int *)(lVar15 + 0x18) = iVar2;
            if (iVar2 - iVar11 != 0 && iVar11 <= iVar2) {
              /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar15 + 0x10),iVar6 + iVar11,
                              *(undefined8 *)(lVar15 + 0x10),auVar22._8_8_,iVar2 - iVar11,0,in_x6,
                              in_x7,puVar16,uVar7,uVar8,lVar13,pppppuVar25,puVar21);
              iVar2 = *(int *)(lVar15 + 0x18);
            }
            /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar15 + 0x10),iVar2,uVar20,0);
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          }
          return;
        }
        break;
      }
      if ((ulong)uVar12 - 1 == uVar8) {
        return;
      }
      lVar17 = *(long *)(lVar13 + 0x18);
      lVar19 = lVar19 + 0x18;
      uVar8 = uVar8 + 1;
      auVar5 = auVar4;
    } while (lVar17 != 0);
  }
  lStack_e0 = auVar5._8_8_;
  lStack_d8 = auVar5._0_8_;
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14cb00c | Atlas.Rendering.PostProcessingEffectBehaviour.RegisterVolumesWithManger
// ============================================================

/* WARNING: Possible PIC construction at 0x014cb054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cb180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cb058) */
/* WARNING: Removing unreachable block (ram,0x014cb184) */

void Atlas_Rendering_PostProcessingEffectBehaviour__RegisterVolumesWithManger
               (long param_1,long param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar8;
  long unaff_x19;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 unaff_x21;
  undefined8 uVar12;
  long *unaff_x22;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined1 ****ppppuVar19;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  lVar10 = *(long *)(param_1 + 0x18);
  lStack_48 = unaff_x19;
  if (lVar10 == 0) {
LAB_014cb084:
    puVar17 = &Atlas_Rendering_PostProcessingManager__RegisterVolume;
    auVar18 = func_0x00f78af4();
    lVar7 = auVar18._8_8_;
    param_2 = auVar18._0_8_;
  }
  else {
    if ((int)*(ulong *)(lVar10 + 0x18) < 1) {
      return;
    }
    unaff_x21 = 0;
    plVar13 = (long *)(lVar10 + 0x28);
    lStack_48 = param_2;
    unaff_x22 = plVar13;
    if ((*(ulong *)(lVar10 + 0x18) & 0xffffffff) == 0) {
      uVar12 = func_0x00f78b24();
      func_0x00f78ac0(uVar12,0);
      goto LAB_014cb084;
    }
    if (param_2 == 0) goto LAB_014cb084;
    unaff_x22 = (long *)(lVar10 + 0x40);
    lVar7 = *plVar13;
    puVar17 = (undefined *)0x14cb058;
  }
  uVar12 = 0x3eb4000;
  plStack_60 = unaff_x22;
  uStack_58 = unaff_x21;
  lStack_50 = lVar10;
  puStack_40 = &stack0xfffffffffffffff0;
  puStack_38 = puVar17;
  if ((bRam0000000003eb4b5f & 1) == 0) {
    func_0x00f78a20(0x3d3d660);
    bRam0000000003eb4b5f = 1;
  }
  uVar4 = /*Atlas.Rendering.PostProcessingManager$$HasVolume*/ func_0x014cc1a0(param_2,lVar7);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (lVar7 != 0) {
    uVar12 = /*UnityEngine.Rendering.Volume$$get_profile*/ func_0x0310b320(lVar7,0);
    *(undefined8 *)(lVar7 + 0x28) = uVar12;
    if (*(long *)(param_2 + 0x18) != 0) {
      lStack_78 = lVar7;
      uStack_70 = uVar12;
      uStack_68 = uVar12;
      /*System.Collections.Generic.List<PostProcessingManager.VolumeInfo>$$Add*/ func_0x0256b590(*(long *)(param_2 + 0x18),&lStack_78,uRam0000000003d3d660);
      /*Atlas.Rendering.PostProcessingManager$$ApplySettingsToVolumeProfile*/ func_0x014cc328(param_2,uVar12);
      return;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar10 = auVar18._8_8_;
  puStack_88 = &Atlas_Rendering_PostProcessingEffectBehaviour__UnRegisterVolumesWithManger;
  lVar11 = *(long *)(auVar18._0_8_ + 0x18);
  plVar13 = unaff_x22;
  plStack_b0 = unaff_x22;
  uStack_a8 = uVar12;
  lStack_a0 = lVar7;
  lStack_98 = param_2;
  ppuStack_90 = &puStack_40;
  if (lVar11 != 0) {
    if ((int)*(ulong *)(lVar11 + 0x18) < 1) {
      return;
    }
    uVar12 = 0;
    plVar1 = (long *)(lVar11 + 0x28);
    param_2 = lVar10;
    plVar13 = plVar1;
    if ((*(ulong *)(lVar11 + 0x18) & 0xffffffff) == 0) {
      uVar16 = func_0x00f78b24();
      func_0x00f78ac0(uVar16,0);
    }
    else if (lVar10 != 0) {
      plVar13 = (long *)(lVar11 + 0x40);
      auVar18._8_8_ = *plVar1;
      auVar18._0_8_ = lVar10;
      param_3 = 1;
      puVar17 = &UNK_014cb184;
      goto code_r0x014cb1b4;
    }
  }
  puVar17 = &Atlas_Rendering_PostProcessingManager__UnRegisterVolume;
  auVar18 = func_0x00f78af4();
code_r0x014cb1b4:
  lVar10 = auVar18._0_8_;
  pppuStack_c0 = &ppuStack_90;
  puStack_b8 = puVar17;
  if ((bRam0000000003eb4b61 & 1) == 0) {
    func_0x00f78a20(0x3d3d678);
    func_0x00f78a20(0x3d3d680);
    func_0x00f78a20(0x3d3d688);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b61 = 1;
  }
  lVar7 = *(long *)(lVar10 + 0x18);
  if (lVar7 != 0) {
    uVar8 = *(uint *)(lVar7 + 0x18);
    if ((int)uVar8 < 1) {
      return;
    }
    lVar15 = 0;
    uVar4 = 0;
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(lVar7 + 0x10) + lVar15;
      lVar14 = *(long *)(lVar7 + 0x20);
      uVar16 = *(undefined8 *)(lVar7 + 0x30);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar14,auVar18._8_8_,0);
      if (iVar3 != 0) {
        if (param_3 != 0) {
          if (lVar14 == 0) break;
          *(undefined8 *)(lVar14 + 0x28) = uVar16;
        }
        lVar10 = *(long *)(lVar10 + 0x18);
        if (lVar10 != 0) {
          ppppuVar19 = &pppuStack_c0;
          uVar8 = *(uint *)(lVar10 + 0x18);
          uVar6 = (uint)uVar4;
          uVar16 = uRam0000000003d3d678;
          if (uVar8 <= uVar6) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            uVar8 = *(uint *)(lVar10 + 0x18);
          }
          uVar8 = uVar8 - 1;
          *(uint *)(lVar10 + 0x18) = uVar8;
          if (uVar8 - uVar6 != 0 && (int)uVar6 <= (int)uVar8) {
            uVar16 = *(undefined8 *)(lVar10 + 0x10);
            /*System.Array$$Copy*/ func_0x0292b4cc(uVar16,uVar6 + 1,uVar16,uVar4,uVar8 - uVar6,0,in_x6,in_x7,lVar11,param_2
                           );
            uVar8 = *(uint *)(lVar10 + 0x18);
          }
          lVar7 = *(long *)(lVar10 + 0x10);
          if (lVar7 == 0) {
            func_0x00f78af4();
          }
          else if (uVar8 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = lVar7 + (long)(int)uVar8 * 0x18;
            *(undefined8 *)(lVar7 + 0x20) = 0;
            *(undefined8 *)(lVar7 + 0x28) = 0;
            *(undefined8 *)(lVar7 + 0x30) = 0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            return;
          }
          uVar5 = func_0x00f78b24();
          auVar18 = func_0x00f78ac0(uVar5,0);
          lVar7 = auVar18._0_8_;
          puVar17 = &System_Collections_Generic_List_PostProcessingManager_VolumeInfo___RemoveRange;
          iVar3 = auVar18._8_4_;
          iVar9 = (int)uVar16;
          if (iVar3 < 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
          }
          if (iVar9 < 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
          }
          if (*(int *)(lVar7 + 0x18) - iVar3 < iVar9) {
            /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
          }
          if (0 < iVar9) {
            iVar2 = *(int *)(lVar7 + 0x18) - iVar9;
            *(int *)(lVar7 + 0x18) = iVar2;
            if (iVar2 - iVar3 != 0 && iVar3 <= iVar2) {
              /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar7 + 0x10),iVar9 + iVar3,
                              *(undefined8 *)(lVar7 + 0x10),auVar18._8_8_,iVar2 - iVar3,0,in_x6,
                              in_x7,plVar13,uVar12,uVar4,lVar10,ppppuVar19,puVar17);
              iVar2 = *(int *)(lVar7 + 0x18);
            }
            /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar7 + 0x10),iVar2,uVar16,0);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          }
          return;
        }
        break;
      }
      if ((ulong)uVar8 - 1 == uVar4) {
        return;
      }
      lVar7 = *(long *)(lVar10 + 0x18);
      lVar15 = lVar15 + 0x18;
      uVar4 = uVar4 + 1;
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14cb134 | Atlas.Rendering.PostProcessingEffectBehaviour.UnRegisterVolumesWithManger
// ============================================================

/* WARNING: Possible PIC construction at 0x014cb180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cb184) */

void Atlas_Rendering_PostProcessingEffectBehaviour__UnRegisterVolumesWithManger
               (long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar6;
  long unaff_x19;
  int iVar7;
  long lVar8;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 **ppuVar16;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    if ((int)*(ulong *)(lVar8 + 0x18) < 1) {
      return;
    }
    unaff_x21 = 0;
    puVar1 = (undefined8 *)(lVar8 + 0x28);
    unaff_x19 = param_2;
    unaff_x22 = puVar1;
    if ((*(ulong *)(lVar8 + 0x18) & 0xffffffff) == 0) {
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
    }
    else if (param_2 != 0) {
      unaff_x22 = (undefined8 *)(lVar8 + 0x40);
      uVar5 = *puVar1;
      param_3 = 1;
      puVar14 = (undefined *)0x14cb184;
      goto code_r0x014cb1b4;
    }
  }
  puVar14 = &Atlas_Rendering_PostProcessingManager__UnRegisterVolume;
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._8_8_;
  param_2 = auVar15._0_8_;
code_r0x014cb1b4:
  puStack_40 = &stack0xfffffffffffffff0;
  puStack_38 = puVar14;
  if ((bRam0000000003eb4b61 & 1) == 0) {
    func_0x00f78a20(0x3d3d678);
    func_0x00f78a20(0x3d3d680);
    func_0x00f78a20(0x3d3d688);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b61 = 1;
  }
  lVar10 = *(long *)(param_2 + 0x18);
  if (lVar10 != 0) {
    uVar6 = *(uint *)(lVar10 + 0x18);
    if ((int)uVar6 < 1) {
      return;
    }
    lVar12 = 0;
    uVar9 = 0;
    do {
      if (*(uint *)(lVar10 + 0x18) <= uVar9) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar10 = *(long *)(lVar10 + 0x10) + lVar12;
      lVar11 = *(long *)(lVar10 + 0x20);
      uVar13 = *(undefined8 *)(lVar10 + 0x30);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar11,uVar5,0);
      if (iVar3 != 0) {
        if (param_3 != 0) {
          if (lVar11 == 0) break;
          *(undefined8 *)(lVar11 + 0x28) = uVar13;
        }
        lVar10 = *(long *)(param_2 + 0x18);
        if (lVar10 != 0) {
          ppuVar16 = &puStack_40;
          uVar6 = *(uint *)(lVar10 + 0x18);
          uVar4 = (uint)uVar9;
          uVar5 = uRam0000000003d3d678;
          if (uVar6 <= uVar4) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            uVar6 = *(uint *)(lVar10 + 0x18);
          }
          uVar6 = uVar6 - 1;
          *(uint *)(lVar10 + 0x18) = uVar6;
          if (uVar6 - uVar4 != 0 && (int)uVar4 <= (int)uVar6) {
            uVar5 = *(undefined8 *)(lVar10 + 0x10);
            /*System.Array$$Copy*/ func_0x0292b4cc(uVar5,uVar4 + 1,uVar5,uVar9,uVar6 - uVar4,0,in_x6,in_x7,lVar8,unaff_x19)
            ;
            uVar6 = *(uint *)(lVar10 + 0x18);
          }
          lVar8 = *(long *)(lVar10 + 0x10);
          if (lVar8 == 0) {
            func_0x00f78af4();
          }
          else if (uVar6 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar6 * 0x18;
            *(undefined8 *)(lVar8 + 0x20) = 0;
            *(undefined8 *)(lVar8 + 0x28) = 0;
            *(undefined8 *)(lVar8 + 0x30) = 0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            return;
          }
          uVar13 = func_0x00f78b24();
          auVar15 = func_0x00f78ac0(uVar13,0);
          lVar8 = auVar15._0_8_;
          puVar14 = &System_Collections_Generic_List_PostProcessingManager_VolumeInfo___RemoveRange;
          iVar3 = auVar15._8_4_;
          iVar7 = (int)uVar5;
          if (iVar3 < 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
          }
          if (iVar7 < 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
          }
          if (*(int *)(lVar8 + 0x18) - iVar3 < iVar7) {
            /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
          }
          if (0 < iVar7) {
            iVar2 = *(int *)(lVar8 + 0x18) - iVar7;
            *(int *)(lVar8 + 0x18) = iVar2;
            if (iVar2 - iVar3 != 0 && iVar3 <= iVar2) {
              /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar8 + 0x10),iVar7 + iVar3,
                              *(undefined8 *)(lVar8 + 0x10),auVar15._8_8_,iVar2 - iVar3,0,in_x6,
                              in_x7,unaff_x22,unaff_x21,uVar9,lVar10,ppuVar16,puVar14);
              iVar2 = *(int *)(lVar8 + 0x18);
            }
            /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar8 + 0x10),iVar2,uVar5,0);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          }
          return;
        }
        break;
      }
      if ((ulong)uVar6 - 1 == uVar9) {
        return;
      }
      lVar10 = *(long *)(param_2 + 0x18);
      lVar12 = lVar12 + 0x18;
      uVar9 = uVar9 + 1;
    } while (lVar10 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14cb310 | Atlas.Rendering.PostProcessingEffectBehaviour.StartEffect
// ============================================================

/* WARNING: Possible PIC construction at 0x014cb370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cb3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cb5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cb6d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cb848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cb68c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cb5a8) */
/* WARNING: Removing unreachable block (ram,0x014cb634) */
/* WARNING: Removing unreachable block (ram,0x014cb5ac) */
/* WARNING: Removing unreachable block (ram,0x014cb5b4) */
/* WARNING: Removing unreachable block (ram,0x014cb5c8) */
/* WARNING: Removing unreachable block (ram,0x014cb5d0) */
/* WARNING: Removing unreachable block (ram,0x014cb5d4) */
/* WARNING: Removing unreachable block (ram,0x014cb648) */
/* WARNING: Removing unreachable block (ram,0x014cb65c) */
/* WARNING: Removing unreachable block (ram,0x014cb664) */
/* WARNING: Removing unreachable block (ram,0x014cb668) */
/* WARNING: Removing unreachable block (ram,0x014cb690) */
/* WARNING: Removing unreachable block (ram,0x014cb698) */
/* WARNING: Removing unreachable block (ram,0x014cb67c) */
/* WARNING: Removing unreachable block (ram,0x014cb680) */
/* WARNING: Removing unreachable block (ram,0x014cb5e8) */
/* WARNING: Removing unreachable block (ram,0x014cb5fc) */
/* WARNING: Removing unreachable block (ram,0x014cb604) */
/* WARNING: Removing unreachable block (ram,0x014cb608) */
/* WARNING: Removing unreachable block (ram,0x014cb6b4) */
/* WARNING: Removing unreachable block (ram,0x014cb60c) */
/* WARNING: Removing unreachable block (ram,0x0320d82c) */
/* WARNING: Removing unreachable block (ram,0x0320d850) */
/* WARNING: Removing unreachable block (ram,0x0320d864) */
/* WARNING: Removing unreachable block (ram,0x014cb3f0) */
/* WARNING: Removing unreachable block (ram,0x014cb404) */
/* WARNING: Removing unreachable block (ram,0x014cb40c) */
/* WARNING: Removing unreachable block (ram,0x014cb414) */
/* WARNING: Removing unreachable block (ram,0x014cb374) */
/* WARNING: Removing unreachable block (ram,0x014cb378) */
/* WARNING: Removing unreachable block (ram,0x014cb37c) */
/* WARNING: Removing unreachable block (ram,0x014cb384) */
/* WARNING: Removing unreachable block (ram,0x014cb3a4) */
/* WARNING: Removing unreachable block (ram,0x014cb3bc) */
/* WARNING: Removing unreachable block (ram,0x014cb3c4) */
/* WARNING: Removing unreachable block (ram,0x014cb3c8) */
/* WARNING: Removing unreachable block (ram,0x014cb440) */
/* WARNING: Removing unreachable block (ram,0x014cb448) */
/* WARNING: Removing unreachable block (ram,0x014cb3dc) */
/* WARNING: Removing unreachable block (ram,0x014cb468) */
/* WARNING: Removing unreachable block (ram,0x014cb3e0) */
/* WARNING: Removing unreachable block (ram,0x0321a930) */
/* WARNING: Removing unreachable block (ram,0x0321a954) */
/* WARNING: Removing unreachable block (ram,0x0321a968) */
/* WARNING: Removing unreachable block (ram,0x014cb390) */
/* WARNING: Removing unreachable block (ram,0x014cb6dc) */
/* WARNING: Removing unreachable block (ram,0x014cb6e0) */
/* WARNING: Removing unreachable block (ram,0x014cb6fc) */
/* WARNING: Removing unreachable block (ram,0x014cb72c) */
/* WARNING: Removing unreachable block (ram,0x014cb74c) */
/* WARNING: Removing unreachable block (ram,0x014cb760) */
/* WARNING: Removing unreachable block (ram,0x014cb76c) */
/* WARNING: Removing unreachable block (ram,0x014cb788) */
/* WARNING: Removing unreachable block (ram,0x014cb87c) */
/* WARNING: Removing unreachable block (ram,0x014cb790) */
/* WARNING: Removing unreachable block (ram,0x014cb7a4) */
/* WARNING: Removing unreachable block (ram,0x014cb7ac) */
/* WARNING: Removing unreachable block (ram,0x014cb7b0) */
/* WARNING: Removing unreachable block (ram,0x014cb7c4) */
/* WARNING: Removing unreachable block (ram,0x014cb888) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x014cb7c8) */
/* WARNING: Removing unreachable block (ram,0x014cb7d8) */
/* WARNING: Removing unreachable block (ram,0x014cb81c) */
/* WARNING: Removing unreachable block (ram,0x014cb824) */
/* WARNING: Removing unreachable block (ram,0x014cb82c) */
/* WARNING: Removing unreachable block (ram,0x014cb84c) */
/* WARNING: Removing unreachable block (ram,0x014cb860) */
/* WARNING: Removing unreachable block (ram,0x014cb83c) */
/* WARNING: Removing unreachable block (ram,0x014cb6e8) */
/* WARNING: Removing unreachable block (ram,0x014cb6ec) */

ulong Atlas_Rendering_PostProcessingEffectBehaviour__StartEffect
                (undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x23;
  uint uVar14;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  if ((bRam0000000003eb4b57 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23e08);
    bRam0000000003eb4b57 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  puVar15 = (undefined *)0x14cb374;
  puVar2 = auStack_50;
  puVar3 = (undefined1 *)register0x00000008;
  do {
    plVar7 = auVar16._8_8_;
    lVar12 = auVar16._0_8_;
    plVar8 = (long *)(puVar3 + -0x48);
    uVar13 = 0x3eb4000;
    puVar4 = puVar2 + -0x60;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(ulong *)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = 0x3eb4000;
    *(long *)(puVar2 + -0x28) = lVar12;
    *(long **)(puVar2 + -0x20) = param_2;
    *(long **)(puVar2 + -0x18) = param_3;
    *(undefined1 **)(puVar2 + -0x10) = puVar3 + -0x10;
    *(undefined **)(puVar2 + -8) = puVar15;
    unaff_x23 = *(long *)(lVar12 + 0x18);
    plVar9 = plVar8;
    plVar11 = param_3;
    if (unaff_x23 != 0) {
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      uVar13 = (ulong)(0 < (int)uVar1);
      if ((int)uVar1 < 1) {
code_r0x014cb4fc:
        *plVar8 = 0;
        *(undefined8 *)(puVar3 + -0x40) = 0;
        *(undefined8 *)(puVar3 + -0x38) = 0;
        return uVar13;
      }
      unaff_x24 = 0;
      unaff_x25 = 0x18;
      while (uVar14 = (uint)unaff_x24, plVar11 = plVar8, param_2 = plVar7, uVar14 < uVar1) {
        lVar10 = unaff_x23 + (long)(int)uVar14 * 0x18;
        lVar12 = *(long *)(lVar10 + 0x20);
        uVar6 = *(undefined8 *)(lVar10 + 0x28);
        *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(lVar10 + 0x30);
        *(undefined8 *)(puVar2 + -0x60) = uVar6;
        if (lVar12 == 0) goto code_r0x014cb540;
        plVar9 = (long *)((long)&MACH_HEADER.cputype + 1);
        iVar5 = /*System.String$$Equals*/ func_0x029caa48(lVar12,plVar7,5,0);
        if (iVar5 != 0) {
          *plVar8 = lVar12;
          uVar6 = *(undefined8 *)(puVar2 + -0x60);
          *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar2 + -0x58);
          *(undefined8 *)(puVar3 + -0x40) = uVar6;
          return uVar13;
        }
        uVar14 = uVar14 + 1;
        unaff_x24 = (ulong)uVar14;
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        uVar13 = (ulong)((int)uVar14 < (int)uVar1);
        if ((int)uVar1 <= (int)uVar14) goto code_r0x014cb4fc;
      }
      uVar6 = func_0x00f78b24();
      func_0x00f78ac0(uVar6,0);
    }
code_r0x014cb540:
    auVar16 = func_0x00f78af4();
    param_3 = auVar16._8_8_;
    *(ulong *)(puVar2 + -0x90) = uVar13;
    *(long *)(puVar2 + -0x88) = lVar12;
    *(long **)(puVar2 + -0x80) = param_2;
    *(long **)(puVar2 + -0x78) = plVar11;
    *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x68) = &Atlas_Rendering_PostProcessingEffectBehaviour__EndEffect;
    if ((bRam0000000003eb4b58 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d23e08);
      bRam0000000003eb4b58 = 1;
    }
    *(undefined8 *)(puVar2 + -0xa8) = 0;
    *(undefined8 *)(puVar2 + -0xa0) = 0;
    *(undefined8 *)(puVar2 + -0x98) = 0;
    puVar15 = &UNK_014cb5a8;
    puVar2 = puVar2 + -0xb0;
    param_2 = plVar9;
    puVar3 = puVar4;
  } while( true );
}



// ============================================================
// RVA: 0x14cb46c | Atlas.Rendering.PostProcessingEffectBehaviour.TryGetEffect
// ============================================================

/* WARNING: Possible PIC construction at 0x014cb848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cb68c: Changing call to branch */

long * Atlas_Rendering_PostProcessingEffectBehaviour__TryGetEffect
                 (long param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_x1;
  long lVar8;
  ulong uVar9;
  long *unaff_x19;
  long lVar10;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  ulong unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  undefined1 *puVar14;
  undefined *puVar15;
  ulong extraout_d0;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar16 [16];
  long lStack_60;
  long lStack_58;
  
  puVar14 = &stack0xfffffffffffffff0;
  uVar12 = *(ulong *)(param_1 + 0x18);
  plVar7 = param_3;
  if (uVar12 != 0) {
    uVar1 = *(uint *)(uVar12 + 0x18);
    unaff_x22 = (long *)(ulong)(0 < (int)uVar1);
    if (0 < (int)uVar1) {
      unaff_x24 = 0;
      unaff_x25 = 0x18;
      do {
        uVar13 = (uint)unaff_x24;
        unaff_x19 = param_3;
        unaff_x20 = param_2;
        if (uVar1 <= uVar13) {
          uVar11 = func_0x00f78b24();
          func_0x00f78ac0(uVar11,0);
          goto LAB_014cb540;
        }
        lVar8 = uVar12 + (long)(int)uVar13 * 0x18;
        unaff_x21 = *(long *)(lVar8 + 0x20);
        lStack_58 = *(long *)(lVar8 + 0x30);
        lStack_60 = *(long *)(lVar8 + 0x28);
        if (unaff_x21 == 0) goto LAB_014cb540;
        plVar7 = (long *)((long)&MACH_HEADER.cputype + 1);
        iVar4 = /*System.String$$Equals*/ func_0x029caa48(unaff_x21,param_2,5,0);
        if (iVar4 != 0) {
          *param_3 = unaff_x21;
          param_3[2] = lStack_58;
          param_3[1] = lStack_60;
          return unaff_x22;
        }
        uVar13 = uVar13 + 1;
        unaff_x24 = (ulong)uVar13;
        uVar1 = *(uint *)(uVar12 + 0x18);
        unaff_x22 = (long *)(ulong)((int)uVar13 < (int)uVar1);
      } while ((int)uVar13 < (int)uVar1);
    }
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    return unaff_x22;
  }
LAB_014cb540:
  puVar15 = &Atlas_Rendering_PostProcessingEffectBehaviour__EndEffect;
  auVar16 = func_0x00f78af4();
  plVar3 = &lStack_60;
code_r0x014cb544:
  lVar8 = auVar16._0_8_;
  *(long **)((long)plVar3 + -0x30) = unaff_x22;
  *(long *)((long)plVar3 + -0x28) = unaff_x21;
  *(long *)((long)plVar3 + -0x20) = unaff_x20;
  *(long **)((long)plVar3 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar3 + -0x10) = puVar14;
  *(undefined **)((long)plVar3 + -8) = puVar15;
  puVar14 = (undefined1 *)((long)plVar3 + -0x10);
  uVar11 = 0x3eb4000;
  if ((bRam0000000003eb4b58 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23e08);
    bRam0000000003eb4b58 = 1;
  }
  *(undefined8 *)((long)plVar3 + -0x48) = 0;
  *(undefined8 *)((long)plVar3 + -0x40) = 0;
  *(undefined8 *)((long)plVar3 + -0x38) = 0;
  plVar5 = (long *)Atlas_Rendering_PostProcessingEffectBehaviour__TryGetEffect
                             (lVar8,auVar16._8_8_,(undefined1 *)((long)plVar3 + -0x48));
  if ((int)plVar5 == 0) {
    return plVar5;
  }
  lVar10 = *(long *)((long)plVar3 + -0x38);
  if (((ulong)plVar7 & 1) == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
    if (iVar4 != 0) {
      plVar7 = (long *)0x3d23e08;
      if (((*(ushort *)((long)/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ plRam0000000003d23e08 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ plRam0000000003d23e08[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      if (lVar10 != 0) {
        uVar2 = *(undefined4 *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ plRam0000000003d23e08[0x17] + 8);
        *(undefined8 *)((long)plVar3 + -0x30) = *(undefined8 *)((long)plVar3 + -0x30);
        *(undefined8 *)((long)plVar3 + -0x28) = *(undefined8 *)((long)plVar3 + -0x28);
        *(undefined8 *)((long)plVar3 + -0x20) = *(undefined8 *)((long)plVar3 + -0x20);
        *(undefined8 *)((long)plVar3 + -0x18) = *(undefined8 *)((long)plVar3 + -0x18);
        *(undefined8 *)((long)plVar3 + -0x10) = *(undefined8 *)((long)plVar3 + -0x10);
        *(undefined8 *)((long)plVar3 + -8) = *(undefined8 *)((long)plVar3 + -8);
        if (pcRam0000000003ebe460 == (code *)0x0) {
          pcRam0000000003ebe460 =
               (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
        }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar7 = (long *)(*pcRam0000000003ebe460)(lVar10,uVar2);
        return plVar7;
      }
      goto code_r0x014cb6b4;
    }
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
  if (iVar4 == 0) {
    lVar6 = *(long *)((long)plVar3 + -0x40);
    if (lVar6 != 0) {
      puVar14 = *(undefined1 **)((long)plVar3 + -0x10);
      puVar15 = *(undefined **)((long)plVar3 + -8);
      plVar7 = *(long **)((long)plVar3 + -0x20);
      lVar10 = *(long *)((long)plVar3 + -0x18);
      uVar11 = *(undefined8 *)((long)plVar3 + -0x30);
      lVar8 = *(long *)((long)plVar3 + -0x28);
      goto code_r0x0321a930;
    }
  }
  else if (lVar10 != 0) {
    puVar15 = &UNK_014cb690;
    plVar3 = (long *)((long)plVar3 + -0x50);
    lVar6 = lVar10;
code_r0x0321a930:
    *(undefined8 *)((long)plVar3 + -0x30) = uVar11;
    *(long *)((long)plVar3 + -0x28) = lVar8;
    *(long **)((long)plVar3 + -0x20) = plVar7;
    *(long *)((long)plVar3 + -0x18) = lVar10;
    *(undefined1 **)((long)plVar3 + -0x10) = puVar14;
    *(undefined **)((long)plVar3 + -8) = puVar15;
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar7 = (long *)(*pcRam0000000003ebe9d8)(lVar6,0);
    return plVar7;
  }
code_r0x014cb6b4:
  uVar11 = func_0x00f78af4();
  *(undefined8 *)((long)plVar3 + -0x70) = unaff_d9;
  *(ulong *)((long)plVar3 + -0x68) = unaff_d8;
  *(undefined1 **)((long)plVar3 + -0x60) = puVar14;
  *(undefined **)((long)plVar3 + -0x58) =
       &Atlas_Rendering_PostProcessingEffectBehaviour__SetEffectAmount;
  unaff_d8 = extraout_d0 & 0xffffffff;
  *(undefined8 *)((long)plVar3 + -0x88) = 0;
  *(undefined8 *)((long)plVar3 + -0x80) = 0;
  *(undefined8 *)((long)plVar3 + -0x78) = 0;
  plVar5 = (long *)Atlas_Rendering_PostProcessingEffectBehaviour__TryGetEffect
                             (uVar11,extraout_x1,(undefined1 *)((long)plVar3 + -0x88));
  if ((int)plVar5 != 0) {
    if (*(long *)((long)plVar3 + -0x80) == 0) {
      unaff_x19 = (long *)func_0x00f78af4();
      *(long **)((long)plVar3 + -0xe0) = unaff_x26;
      *(undefined8 *)((long)plVar3 + -0xd8) = unaff_x25;
      *(ulong *)((long)plVar3 + -0xd0) = unaff_x24;
      *(ulong *)((long)plVar3 + -200) = uVar12;
      *(undefined8 *)((long)plVar3 + -0xc0) = 0x3eb4000;
      *(long *)((long)plVar3 + -0xb8) = lVar8;
      *(long **)((long)plVar3 + -0xb0) = plVar7;
      *(long *)((long)plVar3 + -0xa8) = lVar10;
      *(undefined1 **)((long)plVar3 + -0xa0) = (undefined1 *)((long)plVar3 + -0x60);
      *(undefined **)((long)plVar3 + -0x98) = &Atlas_Rendering_PostProcessingEffectBehaviour__Update
      ;
      puVar14 = (undefined1 *)((long)plVar3 + -0xa0);
      unaff_x20 = 0x3eb4000;
      plVar7 = unaff_x19;
      if ((bRam0000000003eb4b59 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        plVar7 = (long *)func_0x00f78a20(0x3d23e08);
        bRam0000000003eb4b59 = 1;
      }
      *(undefined4 *)((long)plVar3 + -0xf0) = 0;
      *(undefined8 *)((long)plVar3 + -0x108) = 0;
      *(undefined8 *)((long)plVar3 + -0x110) = 0;
      *(undefined8 *)((long)plVar3 + -0xf8) = 0;
      *(undefined8 *)((long)plVar3 + -0x100) = 0;
      unaff_x22 = (long *)unaff_x19[3];
      unaff_x21 = lVar8;
      if (unaff_x22 == (long *)0x0) {
code_r0x014cb888:
        plVar7 = (long *)func_0x00f78af4();
        *(long **)((long)plVar3 + -0x170) = unaff_x22;
        *(long *)((long)plVar3 + -0x168) = unaff_x21;
        *(long *)((long)plVar3 + -0x160) = unaff_x20;
        *(long **)((long)plVar3 + -0x158) = unaff_x19;
        *(undefined1 **)((long)plVar3 + -0x150) = puVar14;
        *(undefined **)((long)plVar3 + -0x148) =
             &Atlas_Rendering_PostProcessingEffectBehaviour___ctor;
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return plVar7;
      }
      if ((int)unaff_x22[3] < 1) {
        return plVar7;
      }
      uVar12 = 0;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d23e08;
      uVar9 = unaff_x22[3] & 0xffffffff;
      unaff_x26 = unaff_x22 + 6;
      do {
        if (uVar9 <= uVar12) {
          uVar11 = func_0x00f78b24();
          func_0x00f78ac0(uVar11,0);
          goto code_r0x014cb888;
        }
        unaff_x20 = unaff_x26[-2];
        auVar16._8_8_ = unaff_x20;
        auVar16._0_8_ = unaff_x19;
        unaff_x21 = *unaff_x26;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x21,0,0);
        if (((ulong)plVar7 & 1) == 0) {
          if (unaff_x21 == 0) goto code_r0x014cb888;
          plVar7 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(unaff_x21,0);
          if ((int)plVar7 != 0) {
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)plVar3 + -0x138),unaff_x21,0,0);
            *(undefined8 *)((long)plVar3 + -0x108) = *(undefined8 *)((long)plVar3 + -0x130);
            *(undefined8 *)((long)plVar3 + -0x110) = *(undefined8 *)((long)plVar3 + -0x138);
            *(undefined8 *)((long)plVar3 + -0xf8) = *(undefined8 *)((long)plVar3 + -0x120);
            *(undefined8 *)((long)plVar3 + -0x100) = *(undefined8 *)((long)plVar3 + -0x128);
            *(undefined4 *)((long)plVar3 + -0xf0) = *(undefined4 *)((long)plVar3 + -0x118);
            unaff_x21 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)plVar3 + -0x110),0);
            if (((*(ushort *)((long)/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ plRam0000000003d23e08 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ plRam0000000003d23e08[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            plVar7 = /*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ plRam0000000003d23e08;
            if ((int)unaff_x21 == *(int *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ plRam0000000003d23e08[0x17] + 4)) goto code_r0x014cb83c;
          }
        }
        uVar12 = uVar12 + 1;
        uVar9 = (ulong)*(uint *)(unaff_x22 + 3);
        unaff_x26 = unaff_x26 + 3;
        if ((long)(int)*(uint *)(unaff_x22 + 3) <= (long)uVar12) {
          return plVar7;
        }
      } while( true );
    }
    *(int *)(*(long *)((long)plVar3 + -0x80) + 0x24) = (int)extraout_d0;
  }
  return plVar5;
code_r0x014cb83c:
  plVar7 = (long *)((long)&MACH_HEADER.magic + 1);
  puVar15 = &UNK_014cb84c;
  plVar3 = (long *)((long)plVar3 + -0x140);
  goto code_r0x014cb544;
}



// ============================================================
// RVA: 0x14cb544 | Atlas.Rendering.PostProcessingEffectBehaviour.EndEffect
// ============================================================

/* WARNING: Possible PIC construction at 0x014cb68c: Changing call to branch */

ulong Atlas_Rendering_PostProcessingEffectBehaviour__EndEffect
                (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  ulong uVar7;
  long unaff_x19;
  ulong unaff_x20;
  long lVar8;
  undefined8 unaff_x21;
  long lVar9;
  undefined8 unaff_x22;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b58 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23e08);
    bRam0000000003eb4b58 = 1;
  }
  uStack_48 = 0;
  lStack_40 = 0;
  lStack_38 = 0;
  uVar4 = Atlas_Rendering_PostProcessingEffectBehaviour__TryGetEffect(param_1,param_2,&uStack_48);
  lVar10 = lStack_38;
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if ((param_3 & 1) == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
    if (iVar3 != 0) {
      if (((*(ushort *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar10 != 0) {
        uVar2 = *(undefined4 *)(*(long *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08 + 0xb8) + 8);
        if (pcRam0000000003ebe460 == (code *)0x0) {
          pcRam0000000003ebe460 =
               (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
        }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*pcRam0000000003ebe460)(lVar10,uVar2);
        return uVar4;
      }
      goto LAB_014cb6b4;
    }
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
  if (iVar3 == 0) {
    lVar10 = lStack_40;
    if (lStack_40 != 0) goto code_r0x0321a930;
  }
  else if (lVar10 != 0) {
    unaff_x30 = &UNK_014cb690;
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    unaff_x19 = lVar10;
    unaff_x20 = param_3;
    unaff_x21 = param_1;
    unaff_x22 = 0x3eb4000;
    unaff_x29 = puVar1;
code_r0x0321a930:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*pcRam0000000003ebe9d8)(lVar10,0);
    return uVar4;
  }
LAB_014cb6b4:
  uVar5 = func_0x00f78af4();
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uVar4 = Atlas_Rendering_PostProcessingEffectBehaviour__TryGetEffect(uVar5,extraout_x1,&uStack_88);
  if ((int)uVar4 != 0) {
    if (lStack_80 == 0) {
      uVar6 = func_0x00f78af4();
      uVar4 = uVar6;
      if ((bRam0000000003eb4b59 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        uVar4 = func_0x00f78a20(0x3d23e08);
        bRam0000000003eb4b59 = 1;
      }
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lVar10 = *(long *)(uVar6 + 0x18);
      if (lVar10 == 0) {
code_r0x014cb888:
        uVar4 = func_0x00f78af4();
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar4;
      }
      if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
        uVar11 = 0;
        uVar7 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
        plVar12 = (long *)(lVar10 + 0x30);
        do {
          if (uVar7 <= uVar11) {
            uVar5 = func_0x00f78b24();
            func_0x00f78ac0(uVar5,0);
            goto code_r0x014cb888;
          }
          lVar8 = plVar12[-2];
          lVar9 = *plVar12;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar9,0,0);
          if ((uVar4 & 1) == 0) {
            if (lVar9 == 0) goto code_r0x014cb888;
            uVar4 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(lVar9,0);
            if ((int)uVar4 != 0) {
              /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_138,lVar9,0,0);
              uStack_108 = uStack_130;
              uStack_110 = uStack_138;
              uStack_f8 = uStack_120;
              uStack_100 = uStack_128;
              uStack_f0 = uStack_118;
              iVar3 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_110,0);
              if (((*(ushort *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar4 = /*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08;
              if (iVar3 == *(int *)(*(long *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08 + 0xb8) + 4)) {
                uVar4 = Atlas_Rendering_PostProcessingEffectBehaviour__EndEffect(uVar6,lVar8,1);
              }
            }
          }
          uVar11 = uVar11 + 1;
          uVar7 = (ulong)*(uint *)(lVar10 + 0x18);
          plVar12 = plVar12 + 3;
        } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
      return uVar4;
    }
    *(undefined4 *)(lStack_80 + 0x24) = extraout_s0;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x14cb6b8 | Atlas.Rendering.PostProcessingEffectBehaviour.SetEffectAmount
// ============================================================

ulong Atlas_Rendering_PostProcessingEffectBehaviour__SetEffectAmount
                (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  uVar2 = Atlas_Rendering_PostProcessingEffectBehaviour__TryGetEffect(param_2,param_3,&uStack_38);
  if ((int)uVar2 != 0) {
    if (lStack_30 == 0) {
      uVar3 = func_0x00f78af4();
      uVar2 = uVar3;
      if ((bRam0000000003eb4b59 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        uVar2 = func_0x00f78a20(0x3d23e08);
        bRam0000000003eb4b59 = 1;
      }
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lVar8 = *(long *)(uVar3 + 0x18);
      if (lVar8 != 0) {
        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
          uVar9 = 0;
          uVar5 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          plVar10 = (long *)(lVar8 + 0x30);
          do {
            if (uVar5 <= uVar9) {
              uVar4 = func_0x00f78b24();
              func_0x00f78ac0(uVar4,0);
              goto code_r0x014cb888;
            }
            lVar6 = plVar10[-2];
            lVar7 = *plVar10;
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar7,0,0);
            if ((uVar2 & 1) == 0) {
              if (lVar7 == 0) goto code_r0x014cb888;
              uVar2 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(lVar7,0);
              if ((int)uVar2 != 0) {
                /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_e8,lVar7,0,0);
                uStack_b8 = uStack_e0;
                uStack_c0 = uStack_e8;
                uStack_a8 = uStack_d0;
                uStack_b0 = uStack_d8;
                uStack_a0 = uStack_c8;
                iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_c0,0);
                if (((*(ushort *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar2 = /*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08;
                if (iVar1 == *(int *)(*(long *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08 + 0xb8) + 4)) {
                  uVar2 = Atlas_Rendering_PostProcessingEffectBehaviour__EndEffect(uVar3,lVar6,1);
                }
              }
            }
            uVar9 = uVar9 + 1;
            uVar5 = (ulong)*(uint *)(lVar8 + 0x18);
            plVar10 = plVar10 + 3;
          } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
        }
        return uVar2;
      }
code_r0x014cb888:
      uVar2 = func_0x00f78af4();
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar2;
    }
    *(undefined4 *)(lStack_30 + 0x24) = param_1;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x14cb700 | Atlas.Rendering.PostProcessingEffectBehaviour.Update
// ============================================================

ulong Atlas_Rendering_PostProcessingEffectBehaviour__Update(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  uVar2 = param_1;
  if ((bRam0000000003eb4b59 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    uVar2 = func_0x00f78a20(0x3d23e08);
    bRam0000000003eb4b59 = 1;
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar8 = 0;
      uVar4 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      plVar9 = (long *)(lVar7 + 0x30);
      do {
        if (uVar4 <= uVar8) {
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
          goto LAB_014cb888;
        }
        lVar5 = plVar9[-2];
        lVar6 = *plVar9;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar6,0,0);
        if ((uVar2 & 1) == 0) {
          if (lVar6 == 0) goto LAB_014cb888;
          uVar2 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(lVar6,0);
          if ((int)uVar2 != 0) {
            /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_a8,lVar6,0,0);
            uStack_78 = uStack_a0;
            uStack_80 = uStack_a8;
            uStack_68 = uStack_90;
            uStack_70 = uStack_98;
            uStack_60 = uStack_88;
            iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_80,0);
            if (((*(ushort *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar2 = /*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08;
            if (iVar1 == *(int *)(*(long *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ uRam0000000003d23e08 + 0xb8) + 4)) {
              uVar2 = Atlas_Rendering_PostProcessingEffectBehaviour__EndEffect(param_1,lVar5,1);
            }
          }
        }
        uVar8 = uVar8 + 1;
        uVar4 = (ulong)*(uint *)(lVar7 + 0x18);
        plVar9 = plVar9 + 3;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    return uVar2;
  }
LAB_014cb888:
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar2;
}



// ============================================================
// RVA: 0x14cb88c | Atlas.Rendering.PostProcessingEffectBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Rendering_PostProcessingEffectBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



// ============================================================
// RVA: 0x14cb894 | Atlas.Rendering.PostProcessingEffectBehaviour..cctor
// ============================================================

void Atlas_Rendering_PostProcessingEffectBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb4b5a & 1) == 0) {
    func_0x00f78a20(0x3d23e08);
    func_0x00f78a20(0x3d72cf0);
    func_0x00f78a20(0x3d71e30);
    func_0x00f78a20(0x3d6c1b8);
    bRam0000000003eb4b5a = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Start')*/ uRam0000000003d72cf0,0);
  **(undefined4 **)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ lRam0000000003d23e08 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('End')*/ uRam0000000003d6c1b8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ lRam0000000003d23e08 + 0xb8) + 4) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('RequestEnd')*/ uRam0000000003d71e30,0);
  *(undefined4 *)(*(long *)(/*Atlas.Rendering.PostProcessingEffectBehaviour_TypeInfo*/ lRam0000000003d23e08 + 0xb8) + 8) = uVar1;
  return;
}



