// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour

// ============================================================
// RVA: 0x14bc380 | Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour.ResetAnimState
// ============================================================

/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__ResetAnimState
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  int extraout_w1;
  undefined1 *puVar10;
  bool bVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if ((bRam0000000003eb4afd & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4afd = 1;
  }
  puVar10 = *(undefined1 **)(param_1 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (puVar10 != (undefined1 *)0x0) {
    param_3 = 0;
    /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(puVar10,**(undefined4 **)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8),0,0);
    if (*(long *)(param_1 + 0x70) != 0) {
      param_3 = 0;
      /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(param_1 + 0x70),
                      *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc),0,0);
      if (*(long *)(param_1 + 0x70) != 0) {
        param_3 = 0;
        /*UnityEngine.Animator$$SetBool*/ func_0x0320d43c(*(long *)(param_1 + 0x70),
                        *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10),0,0);
        lVar4 = *(long *)(param_1 + 0x70);
        if (lVar4 != 0) {
          uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 8);
          if (pcRam0000000003ebe400 == (code *)0x0) {
            pcRam0000000003ebe400 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.Animator::SetFloatID(System.Int32,System.Single)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003ebe400)(0,lVar4,uVar1);
          return;
        }
      }
    }
  }
  auVar16 = func_0x00f78af4();
  lVar4 = *(long *)(auVar16._0_8_ + 0x78);
  if (lVar4 != 0) {
    puStack_50 = puVar10;
    pcStack_48 = (code *)param_1;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar4,auVar16._8_8_);
    return;
  }
  lVar4 = func_0x00f78af4();
  pcStack_48 = Atlas_Gameplay_Usables_PlacementHomingProjectile__OnEnterPool;
  puStack_50 = &stack0xffffffffffffffc0;
  Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTearDownParamsInternal();
  /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(lVar4,0);
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar4,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar4 + 0x48) != 0) &&
     (lVar5 = *(long *)(*(long *)(lVar4 + 0x48) + 0x28), lVar5 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar4 + 100),*(undefined4 *)(lVar4 + 0x68),
                    *(undefined4 *)(lVar4 + 0x6c),lVar5,0);
    if ((*(long *)(lVar4 + 0x48) != 0) &&
       (lVar5 = *(long *)(*(long *)(lVar4 + 0x48) + 0x28), lVar5 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar4 + 0x70),*(undefined4 *)(lVar4 + 0x74),
                      *(undefined4 *)(lVar4 + 0x78),*(undefined4 *)(lVar4 + 0x7c),lVar5,0);
      if ((*(long *)(lVar4 + 0x48) != 0) &&
         (lVar5 = *(long *)(*(long *)(lVar4 + 0x48) + 0x28), lVar5 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar4 + 0x80),*(undefined4 *)(lVar4 + 0x84),
                        *(undefined4 *)(lVar4 + 0x88),lVar5,0);
        *(undefined1 *)(lVar4 + 0x19) = 0;
        *(undefined8 *)(lVar4 + 0x98) = 0;
        *(undefined8 *)(lVar4 + 0x90) = 0;
        *(undefined8 *)(lVar4 + 0xa8) = 0;
        *(undefined8 *)(lVar4 + 0xa0) = 0;
        *(undefined8 *)(lVar4 + 0xb8) = 0;
        *(undefined8 *)(lVar4 + 0xb0) = 0;
        if (*(long *)(lVar4 + 0x48) != 0) {
          lVar5 = *(long *)(*(long *)(lVar4 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0);
          if (iVar2 != 0) {
            if (lVar5 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar5 + 0x46) = 0;
            *(undefined4 *)(lVar5 + 0x40) = 0;
            *(undefined1 *)(lVar5 + 0x44) = 0;
          }
          if (*(long *)(lVar4 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar4 + 0x48) + 0x40) = 0;
            *(undefined8 *)(lVar4 + 0x48) = 0;
            *(undefined1 *)(lVar4 + 0x18) = 0;
            *(undefined8 *)(lVar4 + 0x28) = 0;
            *(undefined8 *)(lVar4 + 0x30) = 0;
            *(undefined4 *)(lVar4 + 0x40) = 0xbf800000;
            *(undefined2 *)(lVar4 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar16 = func_0x00f78af4();
  lVar5 = auVar16._8_8_;
  lVar4 = auVar16._0_8_;
  puStack_68 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppuStack_70 = &puStack_50;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar4 + 0x19) = 1;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(long *)(lVar4 + 0x30) = lVar5;
  *(undefined8 *)(lVar4 + 0x48) = param_3;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  if ((*(long *)(lVar4 + 0x58) != 0) && (lVar5 != 0)) {
    lVar12 = *(long *)(*(long *)(lVar4 + 0x58) + 0x10);
    lVar5 = *(long *)(lVar5 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar5,0);
    if (lVar12 != 0) {
      uVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,uVar6,uRam0000000003d572a0);
      *(undefined8 *)(lVar4 + 0x90) = uVar6;
      puVar13 = &UNK_01523aa4;
      lVar12 = lVar4;
      goto code_r0x01523ba8;
    }
  }
  puVar13 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar12 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  lStack_f0 = lVar5;
  uStack_e8 = param_3;
  lStack_e0 = lVar4;
  pppuStack_c0 = &ppuStack_70;
  puStack_b8 = puVar13;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (*(long *)(lVar12 + 0x28) == 0) {
    return;
  }
  lVar4 = *(long *)(lVar12 + 0x90);
  if (lVar4 != 0) {
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    uVar15 = *(undefined8 *)(lVar4 + 0x38);
    uVar14 = *(undefined8 *)(lVar4 + 0x30);
    *(undefined8 *)(lVar12 + 0xb8) = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar12 + 0xb0) = uVar15;
    *(undefined8 *)(lVar12 + 0xa8) = uVar14;
    *(undefined8 *)(lVar12 + 0xa0) = uVar8;
    *(undefined8 *)(lVar12 + 0x98) = uVar6;
    if (*(long *)(lVar4 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar4 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar4 = *(long *)(*(long *)(lVar12 + 0x28) + 0x28);
    if (lVar4 != 0) {
      uStack_f8 = *(undefined8 *)(lVar4 + 0xc0);
      if (((*(long *)(lVar12 + 0x58) != 0) &&
          (lVar4 = *(long *)(*(long *)(lVar12 + 0x58) + 0x10), lVar4 != 0)) &&
         (lVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,uStack_f8,uRam0000000003d57270), lVar4 != 0)) {
        uStack_100 = *(undefined8 *)(lVar4 + 0x70);
        if ((*(long *)(lVar12 + 0x90) != 0) &&
           (lVar4 = *(long *)(*(long *)(lVar12 + 0x90) + 0x48), lVar4 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_140,lVar4,uRam0000000003d3d2e8);
          bVar11 = false;
          while (uVar7 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_140,uRam0000000003d334f0), uVar6 = uStack_130,
                (uVar7 & 1) != 0) {
            uStack_168 = uStack_120;
            uStack_170 = uStack_128;
            uStack_158 = uStack_110;
            uStack_160 = uStack_118;
            uStack_150 = uStack_108;
            uStack_178 = uStack_130;
            uVar8 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_178);
            uVar7 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_f8,uVar8,0);
            if ((uVar7 & 1) != 0) {
              *(undefined8 *)(lVar12 + 0xa0) = uStack_168;
              *(undefined8 *)(lVar12 + 0x98) = uStack_170;
              *(undefined8 *)(lVar12 + 0xb0) = uStack_158;
              *(undefined8 *)(lVar12 + 0xa8) = uStack_160;
              *(undefined8 *)(lVar12 + 0xb8) = uStack_150;
              bVar11 = true;
            }
            uStack_178 = uVar6;
            uVar6 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_178);
            uVar3 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_100,uVar6,0);
            if (!bVar11 && ((uVar3 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar12 + 0xa0) = uStack_168;
              *(undefined8 *)(lVar12 + 0x98) = uStack_170;
              *(undefined8 *)(lVar12 + 0xb0) = uStack_158;
              *(undefined8 *)(lVar12 + 0xa8) = uStack_160;
              *(undefined8 *)(lVar12 + 0xb8) = uStack_150;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_140,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    lVar4 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_140,uRam0000000003d334e8);
    if (lVar4 == 0) {
      return;
    }
    func_0x00f78ac0(lVar4,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14bc468 | Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour.SetInFlightVFXActive
// ============================================================

/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__SetInFlightVFXActive
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  int extraout_w1;
  bool bVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar3,param_2);
    return;
  }
  lVar3 = func_0x00f78af4();
  Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTearDownParamsInternal();
  /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(lVar3,0);
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar3,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar3 + 0x48) != 0) &&
     (lVar4 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar4 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar3 + 100),*(undefined4 *)(lVar3 + 0x68),
                    *(undefined4 *)(lVar3 + 0x6c),lVar4,0);
    if ((*(long *)(lVar3 + 0x48) != 0) &&
       (lVar4 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar4 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar3 + 0x70),*(undefined4 *)(lVar3 + 0x74),
                      *(undefined4 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x7c),lVar4,0);
      if ((*(long *)(lVar3 + 0x48) != 0) &&
         (lVar4 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar4 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar3 + 0x80),*(undefined4 *)(lVar3 + 0x84),
                        *(undefined4 *)(lVar3 + 0x88),lVar4,0);
        *(undefined1 *)(lVar3 + 0x19) = 0;
        *(undefined8 *)(lVar3 + 0x98) = 0;
        *(undefined8 *)(lVar3 + 0x90) = 0;
        *(undefined8 *)(lVar3 + 0xa8) = 0;
        *(undefined8 *)(lVar3 + 0xa0) = 0;
        *(undefined8 *)(lVar3 + 0xb8) = 0;
        *(undefined8 *)(lVar3 + 0xb0) = 0;
        if (*(long *)(lVar3 + 0x48) != 0) {
          lVar4 = *(long *)(*(long *)(lVar3 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0);
          if (iVar1 != 0) {
            if (lVar4 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar4 + 0x46) = 0;
            *(undefined4 *)(lVar4 + 0x40) = 0;
            *(undefined1 *)(lVar4 + 0x44) = 0;
          }
          if (*(long *)(lVar3 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar3 + 0x48) + 0x40) = 0;
            *(undefined8 *)(lVar3 + 0x48) = 0;
            *(undefined1 *)(lVar3 + 0x18) = 0;
            *(undefined8 *)(lVar3 + 0x28) = 0;
            *(undefined8 *)(lVar3 + 0x30) = 0;
            *(undefined4 *)(lVar3 + 0x40) = 0xbf800000;
            *(undefined2 *)(lVar3 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar14 = func_0x00f78af4();
  lVar4 = auVar14._8_8_;
  lVar3 = auVar14._0_8_;
  puStack_38 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  puStack_40 = &stack0xffffffffffffffe0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar4;
  *(undefined8 *)(lVar3 + 0x48) = param_3;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar4 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar4 = *(long *)(lVar4 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar4,0);
    if (lVar10 != 0) {
      uVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar5,uRam0000000003d572a0);
      *(undefined8 *)(lVar3 + 0x90) = uVar5;
      puVar11 = &UNK_01523aa4;
      lVar10 = lVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar11 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar10 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_c0 = lVar4;
  uStack_b8 = param_3;
  lStack_b0 = lVar3;
  ppuStack_90 = &puStack_40;
  puStack_88 = puVar11;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar10 + 0x90);
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    uVar13 = *(undefined8 *)(lVar3 + 0x38);
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar13;
    *(undefined8 *)(lVar10 + 0xa8) = uVar12;
    *(undefined8 *)(lVar10 + 0xa0) = uVar7;
    *(undefined8 *)(lVar10 + 0x98) = uVar5;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_c8 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_c8,uRam0000000003d57270), lVar3 != 0)) {
        uStack_d0 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_110,lVar3,uRam0000000003d3d2e8);
          bVar9 = false;
          while (uVar6 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_110,uRam0000000003d334f0), uVar5 = uStack_100,
                (uVar6 & 1) != 0) {
            uStack_138 = uStack_f0;
            uStack_140 = uStack_f8;
            uStack_128 = uStack_e0;
            uStack_130 = uStack_e8;
            uStack_120 = uStack_d8;
            uStack_148 = uStack_100;
            uVar7 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_148);
            uVar6 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_c8,uVar7,0);
            if ((uVar6 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_138;
              *(undefined8 *)(lVar10 + 0x98) = uStack_140;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_128;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_130;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_120;
              bVar9 = true;
            }
            uStack_148 = uVar5;
            uVar5 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_148);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_d0,uVar5,0);
            if (!bVar9 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_138;
              *(undefined8 *)(lVar10 + 0x98) = uStack_140;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_128;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_130;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_120;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_110,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar8 = (long *)___cxa_begin_catch();
    lVar3 = *plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_110,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14bc608 | Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour.StartTransformAnim
// ============================================================

/* WARNING: Possible PIC construction at 0x014bc818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ce59c) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce5b4) */
/* WARNING: Removing unreachable block (ram,0x014ce5bc) */
/* WARNING: Removing unreachable block (ram,0x014ce284) */
/* WARNING: Removing unreachable block (ram,0x014ce2ac) */
/* WARNING: Removing unreachable block (ram,0x014ce2b4) */
/* WARNING: Removing unreachable block (ram,0x014ce2b8) */
/* WARNING: Removing unreachable block (ram,0x014ce2cc) */
/* WARNING: Removing unreachable block (ram,0x014ce2d4) */
/* WARNING: Removing unreachable block (ram,0x014ce2dc) */
/* WARNING: Removing unreachable block (ram,0x014ce368) */
/* WARNING: Removing unreachable block (ram,0x014ce2e8) */
/* WARNING: Removing unreachable block (ram,0x014ce2f0) */
/* WARNING: Removing unreachable block (ram,0x014ce378) */
/* WARNING: Removing unreachable block (ram,0x014ce2f8) */
/* WARNING: Removing unreachable block (ram,0x032a304c) */
/* WARNING: Removing unreachable block (ram,0x032a3074) */
/* WARNING: Removing unreachable block (ram,0x032a3088) */
/* WARNING: Removing unreachable block (ram,0x014bc81c) */
/* WARNING: Removing unreachable block (ram,0x014bc824) */
/* WARNING: Removing unreachable block (ram,0x014bc834) */
/* WARNING: Removing unreachable block (ram,0x014bc83c) */
/* WARNING: Removing unreachable block (ram,0x014bc844) */
/* WARNING: Removing unreachable block (ram,0x014bc854) */
/* WARNING: Removing unreachable block (ram,0x014ce5c4) */
/* WARNING: Removing unreachable block (ram,0x014ce5c8) */
/* WARNING: Removing unreachable block (ram,0x014ce5e4) */
/* WARNING: Removing unreachable block (ram,0x014ce5ec) */
/* WARNING: Removing unreachable block (ram,0x014ce5f4) */
/* WARNING: Removing unreachable block (ram,0x014ce614) */
/* WARNING: Removing unreachable block (ram,0x014ce624) */
/* WARNING: Removing unreachable block (ram,0x014ce6d4) */
/* WARNING: Removing unreachable block (ram,0x014ce62c) */
/* WARNING: Removing unreachable block (ram,0x014ce638) */
/* WARNING: Removing unreachable block (ram,0x014ce678) */
/* WARNING: Removing unreachable block (ram,0x014ce6a0) */
/* WARNING: Removing unreachable block (ram,0x014ce654) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__StartTransformAnim
                 (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  long *plVar6;
  undefined1 uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 ***unaff_x29;
  undefined8 *******pppppppuVar13;
  undefined *unaff_x30;
  undefined *puVar14;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_b0_07;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  float fVar15;
  float fVar16;
  uint uVar17;
  ulong unaff_d8;
  float fVar18;
  ulong unaff_d9;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  long lStack_2f0;
  long *plStack_2e8;
  undefined8 *******pppppppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 *******pppppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  long lStack_290;
  long *plStack_288;
  undefined8 *******pppppppuStack_280;
  undefined *puStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  float fStack_268;
  float fStack_264;
  undefined4 uStack_260;
  float fStack_25c;
  float fStack_258;
  undefined4 uStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  undefined1 *******pppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  undefined1 ******ppppppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined1 *****pppppuStack_110;
  undefined *puStack_108;
  undefined1 ****ppppuStack_e0;
  code *pcStack_d8;
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb4afc & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4afc = 1;
  }
  lVar10 = *(long *)(param_5 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar1 = **(undefined4 **)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8);
    goto UnityEngine_Animator__SetBool;
  }
  unaff_x20 = func_0x00f78af4();
  uStack_50 = 0x3d23c70;
  pcStack_38 = Atlas_Gameplay_Usables_PlacementHomingProjectile__GetTarget;
  lStack_48 = lVar10;
  puStack_40 = &stack0xfffffffffffffff0;
  lVar10 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(unaff_x20,0);
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar10 + 0x40);
    lVar10 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                       (unaff_x20);
    if (((lVar10 != 0) && (lVar11 != 0)) &&
       (lVar10 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetNthPlacedPlayer*/ func_0x015a3554(lVar11,*(undefined4 *)(lVar10 + 0xb8),0), lVar10 != 0)) {
      return *(long **)(lVar10 + 0x10);
    }
  }
  unaff_x19 = func_0x00f78af4();
  pcStack_58 = Atlas_Gameplay_Usables_PlacementHomingProjectile__Use;
  uStack_98 = 0;
  lStack_a0 = 0;
  ppuStack_60 = &puStack_40;
  if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_014bc80c:
    lVar10 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingBehaviour
                       (unaff_x19);
    if (lVar10 == 0) goto LAB_014bc878;
    puVar14 = (undefined *)0x14bc81c;
  }
  else {
    /*Atlas.Gameplay.Usables.ProjectileUsable$$SetStartPosition*/ func_0x014cd7ec(unaff_x19,0);
    if (*(long *)(unaff_x19 + 0x100) != 0) {
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(unaff_x19 + 0x100),0);
      if (((*(long *)(unaff_x19 + 0x28) != 0) &&
          (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x18), lVar10 != 0)) &&
         (*(long *)(unaff_x19 + 0x100) != 0)) {
        param_4 = *(float *)(unaff_x19 + 0x1b8) - *(float *)(lVar10 + 100);
        param_2 = param_2 + param_4;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(*(long *)(unaff_x19 + 0x100),0);
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x10), lVar10 != 0)) {
          fVar16 = *(float *)(unaff_x19 + 0x200);
          fVar18 = *(float *)(unaff_x19 + 0x204);
          fVar19 = *(float *)(unaff_x19 + 0x208);
          lVar10 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar10,0);
          lStack_a0 = (ulong)*(uint *)(lVar10 + 0x104) << 0x20;
          uStack_98 = 0;
          /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&lStack_a0,0);
          /*Atlas.Gameplay.Usables.ProjectileUsable$$Use*/ func_0x014cdc80(SUB41(fVar16,0),fVar18,fVar19,
                          fVar16 * (float)CONCAT13(extraout_var_17,
                                                   CONCAT12(extraout_var_08,
                                                            CONCAT11(extraout_var,extraout_b0))),
                          fVar18 * (float)CONCAT13(extraout_var_17,
                                                   CONCAT12(extraout_var_08,
                                                            CONCAT11(extraout_var,extraout_b0))),
                          fVar19 * (float)CONCAT13(extraout_var_17,
                                                   CONCAT12(extraout_var_08,
                                                            CONCAT11(extraout_var,extraout_b0))),
                          unaff_x19,0);
          unaff_x20 = *(long *)(unaff_x19 + 0x100);
          uVar17 = *(uint *)(unaff_x19 + 0x200);
          unaff_d8 = (ulong)uVar17;
          param_2 = *(float *)(unaff_x19 + 0x204);
          unaff_d9 = (ulong)(uint)param_2;
          param_3 = *(float *)(unaff_x19 + 0x208);
          /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
          param_4 = (float)CONCAT13(extraout_var_18,
                                    CONCAT12(extraout_var_09,
                                             CONCAT11(extraout_var_00,extraout_b0_00)));
          /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec((char)uVar17,0);
          if (unaff_x20 != 0) {
            /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(unaff_x20,0);
            goto LAB_014bc80c;
          }
        }
      }
    }
LAB_014bc878:
    puVar14 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__TriggerParentToWorld;
    lVar10 = func_0x00f78af4();
  }
  pppuStack_b0 = &ppuStack_60;
  puStack_a8 = puVar14;
  if ((bRam0000000003eb4b01 & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4b01 = 1;
  }
  lVar10 = *(long *)(lVar10 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar10 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10);
    register0x00000008 = (BADSPACEBASE *)&lStack_a0;
    unaff_x21 = 0x3eb4000;
    unaff_x29 = pppuStack_b0;
    unaff_x30 = puStack_a8;
UnityEngine_Animator__SetBool:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 ****)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar6 = (long *)(*pcRam0000000003ebe420)(lVar10,uVar1,1);
    return plVar6;
  }
  auVar20 = func_0x00f78af4();
  uStack_120 = auVar20._8_8_;
  plVar6 = auVar20._0_8_;
  if (*(char *)((long)plVar6 + 0x1d4) != '\0') {
    return plVar6;
  }
  pcStack_d8 = Atlas_Gameplay_Usables_PlacementHomingProjectile__FixedUpdate;
  ppppuStack_e0 = &pppuStack_b0;
  if ((bRam0000000003eb4b6f & 1) == 0) {
    func_0x00f78a20(0x3d23990,uStack_120,0);
    bRam0000000003eb4b6f = 1;
  }
  uStack_130 = 0x3eb4000;
  uStack_128 = 0x3d23990;
  puStack_108 = &UNK_014ce284;
  pppppuStack_110 = &ppppuStack_e0;
  if ((bRam0000000003eb4b72 & 1) == 0) {
    plStack_118 = plVar6;
    func_0x00f78a20(0x3d23990);
    auVar20._8_8_ = uStack_120;
    auVar20._0_8_ = plStack_118;
    bRam0000000003eb4b72 = 1;
  }
  uStack_120 = auVar20._8_8_;
  plStack_118 = auVar20._0_8_;
  lVar10 = plVar6[0x19];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar20._8_8_ = uStack_120;
    auVar20._0_8_ = plStack_118;
  }
  uStack_120 = auVar20._8_8_;
  plStack_118 = auVar20._0_8_;
  plVar3 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar10,0,0);
  if (((ulong)plVar3 & 1) != 0) {
    return plVar3;
  }
  lVar10 = plVar6[0x19];
  if (lVar10 != 0) {
    if (*(char *)(lVar10 + 0x44) == '\0') {
      return plVar3;
    }
    *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar10 + 0x48);
    return plVar3;
  }
  auVar21 = func_0x00f78af4();
  plVar3 = auVar21._8_8_;
  plVar6 = auVar21._0_8_;
  puStack_138 = &Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate;
  uStack_180 = unaff_d9;
  uStack_178 = unaff_d8;
  ppppppuStack_140 = &pppppuStack_110;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  if ((*(char *)((long)plVar6 + 300) == '\0') || ((char)plVar6[0xc] != '\0')) {
code_r0x014ce558:
    lVar10 = plVar6[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar6 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
    if ((int)plVar6 == 0) {
      return plVar6;
    }
    puVar14 = &UNK_014ce59c;
  }
  else {
    if (plVar3 != (long *)0x0) {
      fVar16 = *(float *)(plVar6 + 0x2c);
      lVar10 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto code_r0x014ce520;
          }
          piVar9 = piVar9 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce520:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      fVar16 = fVar16 + (float)CONCAT13(extraout_var_19,
                                        CONCAT12(extraout_var_10,
                                                 CONCAT11(extraout_var_01,extraout_b0_01)));
      *(float *)(plVar6 + 0x2c) = fVar16;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar16) {
        *(undefined4 *)(plVar6 + 0x2c) = 0;
        uVar7 = 0;
        goto code_r0x01523e20;
      }
      goto code_r0x014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar3 = (long *)___cxa_begin_catch();
      lVar10 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_198,uRam0000000003d328c8);
      if (lVar10 == 0) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
        return plVar6;
      }
      func_0x00f78ac0(lVar10,0);
    }
    puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar21 = __Unwind_Resume();
  }
  plVar3 = auVar21._8_8_;
  plVar6 = auVar21._0_8_;
  lVar10 = 0x3eb4000;
  pppppppuStack_1e0 = &ppppppuStack_140;
  puStack_1d8 = puVar14;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar6[0x19] != 0) {
    plVar5 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar6[0x19],0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if (plVar3 != (long *)0x0) {
      lVar10 = plVar6[0x19];
      lVar11 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar9 = piVar9 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((plVar6[0x1f] != 0) && (lVar11 = *(long *)(plVar6[0x1f] + 0x18), lVar11 != 0)) {
        lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0);
        if (lVar11 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar11,0);
          if ((plVar6[0x1f] != 0) && (lVar11 = *(long *)(plVar6[0x1f] + 0x18), lVar11 != 0)) {
            fVar16 = param_2;
            fVar18 = param_3;
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar11,0);
            if ((plVar6[0x1f] != 0) && (lVar11 = *(long *)(plVar6[0x1f] + 0x18), lVar11 != 0)) {
              fVar19 = fVar16;
              fVar15 = fVar18;
              lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0);
              if ((lVar11 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar11,0), lVar10 != 0)) {
                uStack_254 = CONCAT13(extraout_var_23,
                                      CONCAT12(extraout_var_14,
                                               CONCAT11(extraout_var_05,extraout_b0_05)));
                uStack_270 = CONCAT13(extraout_var_20,
                                      CONCAT12(extraout_var_11,
                                               CONCAT11(extraout_var_02,extraout_b0_02)));
                uStack_26c = CONCAT13(extraout_var_21,
                                      CONCAT12(extraout_var_12,
                                               CONCAT11(extraout_var_03,extraout_b0_03)));
                fStack_268 = param_2;
                fStack_264 = param_3;
                uStack_260 = CONCAT13(extraout_var_22,
                                      CONCAT12(extraout_var_13,
                                               CONCAT11(extraout_var_04,extraout_b0_04)));
                fStack_25c = fVar16;
                fStack_258 = fVar18;
                fStack_250 = fVar19;
                fStack_24c = fVar15;
                fStack_248 = param_4;
                /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar10,&uStack_270,0);
                plVar5 = (long *)plVar6[0x19];
                if (plVar5 != (long *)0x0) {
                  if (*(char *)((long)plVar5 + 0x44) != '\0') {
                    return plVar5;
                  }
                  plVar5 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar5,0);
                  if (*(char *)((long)plVar6 + 0x15c) == '\0') {
                    if (((float)CONCAT13(extraout_var_24,
                                         CONCAT12(extraout_var_15,
                                                  CONCAT11(extraout_var_06,extraout_b0_06))) ==
                         _UNK_033f7d80 ||
                         (float)CONCAT13(extraout_var_24,
                                         CONCAT12(extraout_var_15,
                                                  CONCAT11(extraout_var_06,extraout_b0_06))) <
                         _UNK_033f7d80) && (fVar15 <= _UNK_033f7d80)) {
                      return plVar5;
                    }
                    *(undefined1 *)((long)plVar6 + 0x15c) = 1;
                    return plVar5;
                  }
                  if (((((float)CONCAT13(extraout_var_24,
                                         CONCAT12(extraout_var_15,
                                                  CONCAT11(extraout_var_06,extraout_b0_06))) <
                         _UNK_033f7d80) && (fVar19 < _UNK_033f7d80)) && (fVar15 < _UNK_033f7d80)) &&
                     (*(char *)((long)plVar6 + 0x12d) != '\0')) {
                    fVar16 = *(float *)(plVar6 + 0x2b);
                    plVar3 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                    fVar16 = fVar16 + (float)CONCAT13(extraout_var_25,
                                                      CONCAT12(extraout_var_16,
                                                               CONCAT11(extraout_var_07,
                                                                        extraout_b0_07)));
                    *(float *)(plVar6 + 0x2b) = fVar16;
                    if (fVar16 < _UNK_033f83ec) {
                      return plVar3;
                    }
code_r0x014ce940:
                    plVar6 = (long *)(**(code **)(*plVar6 + 0x228))
                                               (plVar6,*(undefined8 *)(*plVar6 + 0x230));
                    return plVar6;
                  }
                  if (plVar6[0x19] != 0) {
                    plVar3 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar6[0x19],0);
                    if ((int)plVar3 == 0) {
                      *(undefined4 *)(plVar6 + 0x2b) = 0;
                      return plVar3;
                    }
                    goto code_r0x014ce940;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar11 = func_0x00f78af4();
  uStack_2a0 = 0x3d23990;
  puStack_278 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  lStack_290 = lVar10;
  pppppppuStack_280 = &pppppppuStack_1e0;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    plStack_298 = plVar3;
    plStack_288 = plVar6;
    func_0x00f78a20(0x3d23990);
    auVar21._8_8_ = plStack_298;
    auVar21._0_8_ = plStack_288;
    bRam0000000003eb4b76 = 1;
  }
  plStack_298 = auVar21._8_8_;
  plStack_288 = auVar21._0_8_;
  uVar12 = *(undefined8 *)(lVar11 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar21._8_8_ = plStack_298;
    auVar21._0_8_ = plStack_288;
  }
  plStack_298 = auVar21._8_8_;
  plStack_288 = auVar21._0_8_;
  uVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if ((uVar8 & 1) == 0) {
    lVar10 = *(long *)(lVar11 + 200);
    if (lVar10 == 0) {
      plVar3 = (long *)func_0x00f78af4();
      uStack_2d0 = 0x3d23990;
      uStack_2c8 = 0x3d23990;
      puStack_2a8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      uStack_2c0 = uVar12;
      lStack_2b8 = lVar11;
      pppppppuStack_2b0 = &pppppppuStack_280;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar10 = plVar3[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar17 = 0;
      uVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar10,0);
      if ((uVar8 & 1) == 0) {
        lVar11 = plVar3[0x19];
        if (lVar11 == 0) {
          plVar6 = (long *)func_0x00f78af4();
          plVar2 = &lStack_2f0;
          puStack_2d8 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar13 = &pppppppuStack_2e0;
          lStack_2f0 = lVar10;
          plStack_2e8 = plVar3;
          pppppppuStack_2e0 = &pppppppuStack_2b0;
          plVar3 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar6,0);
          if (((ulong)plVar3 & 1) == 0) {
            plVar3 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar6,0);
            if ((plVar3 == (long *)0x0) || (plVar3[0x18] == 0)) {
              puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar22 = func_0x00f78af4();
code_r0x014ceb60:
              plVar3 = auVar22._0_8_;
              *(long *)((long)plVar2 + -0x20) = lVar10;
              *(long **)((long)plVar2 + -0x18) = plVar6;
              *(undefined8 ********)((long)plVar2 + -0x10) = pppppppuVar13;
              *(undefined **)((long)plVar2 + -8) = puVar14;
              if ((*(char *)((long)plVar3 + 300) != '\0') == uVar17) {
                return plVar3;
              }
              if (auVar22._8_4_ != 0) {
                (**(code **)(*plVar3 + 0x448))(plVar3,*(undefined8 *)(*plVar3 + 0x450));
              }
              *(char *)((long)plVar3 + 300) = (char)uVar17;
              if (((plVar3[9] != 0) && (lVar10 = *(long *)(plVar3[9] + 0x28), lVar10 != 0)) &&
                 (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0), lVar10 != 0)) {
                *(undefined8 *)((long)plVar2 + -0x30) = 0x3d23990;
                *(undefined8 *)((long)plVar2 + -0x28) = 0x3d23990;
                *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)((long)plVar2 + -0x20);
                *(undefined8 *)((long)plVar2 + -0x18) = *(undefined8 *)((long)plVar2 + -0x18);
                *(undefined8 *)((long)plVar2 + -0x10) = *(undefined8 *)((long)plVar2 + -0x10);
                *(undefined8 *)((long)plVar2 + -8) = *(undefined8 *)((long)plVar2 + -8);
                if (pcRam0000000003ebf4c0 == (code *)0x0) {
                  pcRam0000000003ebf4c0 =
                       (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
                }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar6 = (long *)(*pcRam0000000003ebf4c0)(lVar10,uVar17 ^ 1);
                return plVar6;
              }
              plVar6 = (long *)func_0x00f78af4();
              return plVar6;
            }
            if (*(char *)(plVar3[0x18] + 0x50) == '\0') {
              auVar22._8_4_ = 1;
              auVar22._0_8_ = plVar6;
              uVar17 = 1;
              plVar2 = &uStack_2d0;
              plVar6 = plStack_2e8;
              lVar10 = lStack_2f0;
              pppppppuVar13 = pppppppuStack_2e0;
              puVar14 = puStack_2d8;
              goto code_r0x014ceb60;
            }
          }
          if ((char)plVar6[0xc] != '\0') {
            return plVar3;
          }
          uVar7 = 1;
code_r0x01523e20:
          *(undefined1 *)(plVar6 + 0xc) = 1;
          *(undefined1 *)((long)plVar6 + 0x61) = uVar7;
          return plVar6;
        }
        if (*(char *)(lVar11 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar11 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar3 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar10 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar10 + 0x28) >> ((ulong)*(uint *)(lVar11 + 0x198) & 0x3f)
                             & 0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14bc87c | Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour.TriggerParentToWorld
// ============================================================

/* WARNING: Possible PIC construction at 0x014ce280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ce59c) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce5b4) */
/* WARNING: Removing unreachable block (ram,0x014ce5bc) */
/* WARNING: Removing unreachable block (ram,0x014ce284) */
/* WARNING: Removing unreachable block (ram,0x014ce2ac) */
/* WARNING: Removing unreachable block (ram,0x014ce2b4) */
/* WARNING: Removing unreachable block (ram,0x014ce2b8) */
/* WARNING: Removing unreachable block (ram,0x014ce2cc) */
/* WARNING: Removing unreachable block (ram,0x014ce2d4) */
/* WARNING: Removing unreachable block (ram,0x014ce2dc) */
/* WARNING: Removing unreachable block (ram,0x014ce368) */
/* WARNING: Removing unreachable block (ram,0x014ce2e8) */
/* WARNING: Removing unreachable block (ram,0x014ce2f0) */
/* WARNING: Removing unreachable block (ram,0x014ce378) */
/* WARNING: Removing unreachable block (ram,0x014ce2f8) */
/* WARNING: Removing unreachable block (ram,0x032a304c) */
/* WARNING: Removing unreachable block (ram,0x032a3074) */
/* WARNING: Removing unreachable block (ram,0x032a3088) */
/* WARNING: Removing unreachable block (ram,0x014ce5c4) */
/* WARNING: Removing unreachable block (ram,0x014ce5c8) */
/* WARNING: Removing unreachable block (ram,0x014ce5e4) */
/* WARNING: Removing unreachable block (ram,0x014ce5ec) */
/* WARNING: Removing unreachable block (ram,0x014ce5f4) */
/* WARNING: Removing unreachable block (ram,0x014ce614) */
/* WARNING: Removing unreachable block (ram,0x014ce624) */
/* WARNING: Removing unreachable block (ram,0x014ce6d4) */
/* WARNING: Removing unreachable block (ram,0x014ce62c) */
/* WARNING: Removing unreachable block (ram,0x014ce638) */
/* WARNING: Removing unreachable block (ram,0x014ce678) */
/* WARNING: Removing unreachable block (ram,0x014ce6a0) */
/* WARNING: Removing unreachable block (ram,0x014ce654) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__TriggerParentToWorld
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long param_5)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  long *plVar6;
  undefined1 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *******pppppppuVar14;
  undefined *puVar15;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  long lStack_250;
  long *plStack_248;
  undefined8 *******pppppppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 ******ppppppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  undefined8 *****pppppuStack_1e0;
  undefined *puStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined4 uStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  undefined4 uStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  undefined1 ****ppppuStack_140;
  undefined *puStack_138;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb4b01 & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4b01 = 1;
  }
  lVar12 = *(long *)(param_5 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar12 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10);
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar6 = (long *)(*pcRam0000000003ebe420)(lVar12,uVar1,1);
    return plVar6;
  }
  auVar20 = func_0x00f78af4();
  uStack_80 = auVar20._8_8_;
  plVar6 = auVar20._0_8_;
  if (*(char *)((long)plVar6 + 0x1d4) != '\0') {
    return plVar6;
  }
  pcStack_38 = Atlas_Gameplay_Usables_PlacementHomingProjectile__FixedUpdate;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b6f & 1) == 0) {
    func_0x00f78a20(0x3d23990,uStack_80,0);
    bRam0000000003eb4b6f = 1;
  }
  uStack_90 = 0x3eb4000;
  uStack_88 = 0x3d23990;
  puStack_68 = &UNK_014ce284;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb4b72 & 1) == 0) {
    plStack_78 = plVar6;
    func_0x00f78a20(0x3d23990);
    auVar20._8_8_ = uStack_80;
    auVar20._0_8_ = plStack_78;
    bRam0000000003eb4b72 = 1;
  }
  uStack_80 = auVar20._8_8_;
  plStack_78 = auVar20._0_8_;
  lVar12 = plVar6[0x19];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar20._8_8_ = uStack_80;
    auVar20._0_8_ = plStack_78;
  }
  uStack_80 = auVar20._8_8_;
  plStack_78 = auVar20._0_8_;
  plVar3 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar12,0,0);
  if (((ulong)plVar3 & 1) != 0) {
    return plVar3;
  }
  lVar12 = plVar6[0x19];
  if (lVar12 != 0) {
    if (*(char *)(lVar12 + 0x44) == '\0') {
      return plVar3;
    }
    *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(lVar12 + 0x48);
    return plVar3;
  }
  auVar21 = func_0x00f78af4();
  plVar3 = auVar21._8_8_;
  plVar6 = auVar21._0_8_;
  puStack_98 = &Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  if ((*(char *)((long)plVar6 + 300) == '\0') || ((char)plVar6[0xc] != '\0')) {
code_r0x014ce558:
    lVar12 = plVar6[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar6 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar12,0,0);
    if ((int)plVar6 == 0) {
      return plVar6;
    }
    puVar15 = &UNK_014ce59c;
  }
  else {
    if (plVar3 != (long *)0x0) {
      fVar19 = *(float *)(plVar6 + 0x2c);
      lVar12 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014ce520;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce520:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      fVar19 = fVar19 + (float)CONCAT13(extraout_var_13,
                                        CONCAT12(extraout_var_06,CONCAT11(extraout_var,extraout_b0))
                                       );
      *(float *)(plVar6 + 0x2c) = fVar19;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar19) {
        *(undefined4 *)(plVar6 + 0x2c) = 0;
        uVar7 = 0;
        goto code_r0x01523e20;
      }
      goto code_r0x014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar3 = (long *)___cxa_begin_catch();
      lVar12 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f8,uRam0000000003d328c8);
      if (lVar12 == 0) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
        return plVar6;
      }
      func_0x00f78ac0(lVar12,0);
    }
    puVar15 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar21 = __Unwind_Resume();
  }
  plVar3 = auVar21._8_8_;
  plVar6 = auVar21._0_8_;
  lVar12 = 0x3eb4000;
  ppppuStack_140 = &pppuStack_a0;
  puStack_138 = puVar15;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar6[0x19] != 0) {
    plVar5 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar6[0x19],0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if (plVar3 != (long *)0x0) {
      lVar12 = plVar6[0x19];
      lVar9 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((plVar6[0x1f] != 0) && (lVar9 = *(long *)(plVar6[0x1f] + 0x18), lVar9 != 0)) {
        lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
        if (lVar9 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar9,0);
          if ((plVar6[0x1f] != 0) && (lVar9 = *(long *)(plVar6[0x1f] + 0x18), lVar9 != 0)) {
            fVar19 = param_2;
            fVar17 = param_3;
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar9,0);
            if ((plVar6[0x1f] != 0) && (lVar9 = *(long *)(plVar6[0x1f] + 0x18), lVar9 != 0)) {
              fVar16 = fVar19;
              fVar18 = fVar17;
              lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
              if ((lVar9 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar9,0), lVar12 != 0)) {
                uStack_1b4 = CONCAT13(extraout_var_17,
                                      CONCAT12(extraout_var_10,
                                               CONCAT11(extraout_var_03,extraout_b0_03)));
                uStack_1d0 = CONCAT13(extraout_var_14,
                                      CONCAT12(extraout_var_07,
                                               CONCAT11(extraout_var_00,extraout_b0_00)));
                uStack_1cc = CONCAT13(extraout_var_15,
                                      CONCAT12(extraout_var_08,
                                               CONCAT11(extraout_var_01,extraout_b0_01)));
                fStack_1c8 = param_2;
                fStack_1c4 = param_3;
                uStack_1c0 = CONCAT13(extraout_var_16,
                                      CONCAT12(extraout_var_09,
                                               CONCAT11(extraout_var_02,extraout_b0_02)));
                fStack_1bc = fVar19;
                fStack_1b8 = fVar17;
                fStack_1b0 = fVar16;
                fStack_1ac = fVar18;
                uStack_1a8 = param_4;
                /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar12,&uStack_1d0,0);
                plVar5 = (long *)plVar6[0x19];
                if (plVar5 != (long *)0x0) {
                  if (*(char *)((long)plVar5 + 0x44) != '\0') {
                    return plVar5;
                  }
                  plVar5 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar5,0);
                  if (*(char *)((long)plVar6 + 0x15c) == '\0') {
                    if (((float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) ==
                         _UNK_033f7d80 ||
                         (float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) <
                         _UNK_033f7d80) && (fVar18 <= _UNK_033f7d80)) {
                      return plVar5;
                    }
                    *(undefined1 *)((long)plVar6 + 0x15c) = 1;
                    return plVar5;
                  }
                  if (((((float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) <
                         _UNK_033f7d80) && (fVar16 < _UNK_033f7d80)) && (fVar18 < _UNK_033f7d80)) &&
                     (*(char *)((long)plVar6 + 0x12d) != '\0')) {
                    fVar19 = *(float *)(plVar6 + 0x2b);
                    plVar3 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                    fVar19 = fVar19 + (float)CONCAT13(extraout_var_19,
                                                      CONCAT12(extraout_var_12,
                                                               CONCAT11(extraout_var_05,
                                                                        extraout_b0_05)));
                    *(float *)(plVar6 + 0x2b) = fVar19;
                    if (fVar19 < _UNK_033f83ec) {
                      return plVar3;
                    }
code_r0x014ce940:
                    plVar6 = (long *)(**(code **)(*plVar6 + 0x228))
                                               (plVar6,*(undefined8 *)(*plVar6 + 0x230));
                    return plVar6;
                  }
                  if (plVar6[0x19] != 0) {
                    plVar3 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar6[0x19],0);
                    if ((int)plVar3 == 0) {
                      *(undefined4 *)(plVar6 + 0x2b) = 0;
                      return plVar3;
                    }
                    goto code_r0x014ce940;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar9 = func_0x00f78af4();
  uStack_200 = 0x3d23990;
  puStack_1d8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  lStack_1f0 = lVar12;
  pppppuStack_1e0 = (undefined8 *****)&ppppuStack_140;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    plStack_1f8 = plVar3;
    plStack_1e8 = plVar6;
    func_0x00f78a20(0x3d23990);
    auVar21._8_8_ = plStack_1f8;
    auVar21._0_8_ = plStack_1e8;
    bRam0000000003eb4b76 = 1;
  }
  plStack_1f8 = auVar21._8_8_;
  plStack_1e8 = auVar21._0_8_;
  uVar13 = *(undefined8 *)(lVar9 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar21._8_8_ = plStack_1f8;
    auVar21._0_8_ = plStack_1e8;
  }
  plStack_1f8 = auVar21._8_8_;
  plStack_1e8 = auVar21._0_8_;
  uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0,0);
  if ((uVar10 & 1) == 0) {
    lVar12 = *(long *)(lVar9 + 200);
    if (lVar12 == 0) {
      plVar3 = (long *)func_0x00f78af4();
      uStack_230 = 0x3d23990;
      uStack_228 = 0x3d23990;
      puStack_208 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      uStack_220 = uVar13;
      lStack_218 = lVar9;
      ppppppuStack_210 = &pppppuStack_1e0;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar12 = plVar3[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = 0;
      uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar12,0);
      if ((uVar10 & 1) == 0) {
        lVar9 = plVar3[0x19];
        if (lVar9 == 0) {
          plVar6 = (long *)func_0x00f78af4();
          plVar2 = &lStack_250;
          puStack_238 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar14 = &pppppppuStack_240;
          lStack_250 = lVar12;
          plStack_248 = plVar3;
          pppppppuStack_240 = &ppppppuStack_210;
          plVar3 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar6,0);
          if (((ulong)plVar3 & 1) == 0) {
            plVar3 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar6,0);
            if ((plVar3 == (long *)0x0) || (plVar3[0x18] == 0)) {
              puVar15 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar22 = func_0x00f78af4();
code_r0x014ceb60:
              plVar3 = auVar22._0_8_;
              *(long *)((long)plVar2 + -0x20) = lVar12;
              *(long **)((long)plVar2 + -0x18) = plVar6;
              *(undefined8 ********)((long)plVar2 + -0x10) = pppppppuVar14;
              *(undefined **)((long)plVar2 + -8) = puVar15;
              if ((*(char *)((long)plVar3 + 300) != '\0') == uVar8) {
                return plVar3;
              }
              if (auVar22._8_4_ != 0) {
                (**(code **)(*plVar3 + 0x448))(plVar3,*(undefined8 *)(*plVar3 + 0x450));
              }
              *(char *)((long)plVar3 + 300) = (char)uVar8;
              if (((plVar3[9] != 0) && (lVar12 = *(long *)(plVar3[9] + 0x28), lVar12 != 0)) &&
                 (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0), lVar12 != 0)) {
                *(undefined8 *)((long)plVar2 + -0x30) = 0x3d23990;
                *(undefined8 *)((long)plVar2 + -0x28) = 0x3d23990;
                *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)((long)plVar2 + -0x20);
                *(undefined8 *)((long)plVar2 + -0x18) = *(undefined8 *)((long)plVar2 + -0x18);
                *(undefined8 *)((long)plVar2 + -0x10) = *(undefined8 *)((long)plVar2 + -0x10);
                *(undefined8 *)((long)plVar2 + -8) = *(undefined8 *)((long)plVar2 + -8);
                if (pcRam0000000003ebf4c0 == (code *)0x0) {
                  pcRam0000000003ebf4c0 =
                       (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
                }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                plVar6 = (long *)(*pcRam0000000003ebf4c0)(lVar12,uVar8 ^ 1);
                return plVar6;
              }
              plVar6 = (long *)func_0x00f78af4();
              return plVar6;
            }
            if (*(char *)(plVar3[0x18] + 0x50) == '\0') {
              auVar22._8_4_ = 1;
              auVar22._0_8_ = plVar6;
              uVar8 = 1;
              plVar2 = &uStack_230;
              plVar6 = plStack_248;
              lVar12 = lStack_250;
              pppppppuVar14 = pppppppuStack_240;
              puVar15 = puStack_238;
              goto code_r0x014ceb60;
            }
          }
          if ((char)plVar6[0xc] != '\0') {
            return plVar3;
          }
          uVar7 = 1;
code_r0x01523e20:
          *(undefined1 *)(plVar6 + 0xc) = 1;
          *(undefined1 *)((long)plVar6 + 0x61) = uVar7;
          return plVar6;
        }
        if (*(char *)(lVar9 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar9 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar3 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar12 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar12 + 0x28) >> ((ulong)*(uint *)(lVar9 + 0x198) & 0x3f)
                             & 0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14bd55c | Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour.SetSteerParam
// ============================================================

ulong Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__SetSteerParam
                (undefined4 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 extraout_s0;
  float fVar5;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  float extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  ulong extraout_d0;
  uint uVar6;
  undefined4 uVar7;
  ulong unaff_d9;
  float fVar8;
  ulong unaff_d10;
  float fVar9;
  ulong unaff_d11;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 ***pppuStack_110;
  code *pcStack_108;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4aff & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4aff = 1;
  }
  lVar4 = *(long *)(param_2 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 != 0) {
    uVar7 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 8);
    if (pcRam0000000003ebe400 == (code *)0x0) {
      pcRam0000000003ebe400 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000003ebe400)(param_1,lVar4,uVar7);
    return uVar3;
  }
  lVar2 = func_0x00f78af4();
  uStack_60 = 0x3d23c70;
  puStack_48 = &Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__IsInFlightAnim;
  lStack_58 = lVar4;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4afe & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4afe = 1;
  }
  if (*(long *)(lVar2 + 0x70) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_b8,*(long *)(lVar2 + 0x70),0,0);
    uStack_88 = uStack_b0;
    uStack_90 = uStack_b8;
    uStack_78 = uStack_a0;
    uStack_80 = uStack_a8;
    uStack_70 = uStack_98;
    iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_90,0);
    if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar1 == *(int *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 4));
  }
  lVar4 = func_0x00f78af4();
  pcStack_c8 = Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateToInFlightSpeed;
  ppuStack_d0 = &puStack_50;
  lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar2 != 0) {
    if (*(float *)(lVar2 + 0xc0) <= 0.0) {
      uVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar4);
      if (uVar3 != 0) {
        uVar7 = *(undefined4 *)(uVar3 + 0x88);
LAB_014bd728:
        *(undefined4 *)(lVar4 + 0x128) = uVar7;
        return uVar3;
      }
    }
    else {
      fVar8 = *(float *)(lVar4 + 0x21c);
      unaff_d10 = (ulong)(uint)fVar8;
      lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar4);
      if (lVar2 != 0) {
        fVar9 = *(float *)(lVar2 + 0xc0);
        unaff_d11 = (ulong)(uint)fVar9;
        uVar6 = *(uint *)(lVar4 + 0x128);
        unaff_d9 = (ulong)uVar6;
        lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar4);
        if (lVar2 != 0) {
          uVar3 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar6,*(undefined4 *)(lVar2 + 0x88),
                                  ((float)extraout_d0 - fVar8) / fVar9,0);
          uVar7 = extraout_s0;
          goto LAB_014bd728;
        }
      }
    }
  }
  lVar2 = func_0x00f78af4();
  uStack_120 = 0x3eb4000;
  pcStack_108 = Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateFloorPerimeterGap;
  uStack_140 = unaff_d11;
  uStack_138 = unaff_d10;
  uStack_130 = unaff_d9;
  uStack_128 = extraout_d0 & 0xffffffff;
  lStack_118 = lVar4;
  pppuStack_110 = &ppuStack_d0;
  lVar4 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar4 != 0) {
    uStack_178 = *(undefined8 *)(lVar4 + 0xd8);
    uStack_180 = *(undefined8 *)(lVar4 + 0xd0);
    uStack_168 = *(undefined8 *)(lVar4 + 0xe8);
    uStack_170 = *(undefined8 *)(lVar4 + 0xe0);
    uStack_158 = *(undefined8 *)(lVar4 + 0xf8);
    uStack_160 = *(undefined8 *)(lVar4 + 0xf0);
    uStack_148 = *(undefined8 *)(lVar4 + 0x108);
    uStack_150 = *(undefined8 *)(lVar4 + 0x100);
    uStack_198 = *(undefined8 *)(lVar4 + 0xb8);
    uStack_1a0 = *(undefined8 *)(lVar4 + 0xb0);
    uStack_188 = *(undefined8 *)(lVar4 + 200);
    uStack_190 = *(undefined8 *)(lVar4 + 0xc0);
    fVar8 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&uStack_1a0,0);
    uVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                      (lVar2);
    if (fVar8 <= 0.0) {
      if (uVar3 != 0) {
        uVar7 = *(undefined4 *)(uVar3 + 0x8c);
LAB_014bd840:
        *(undefined4 *)(lVar2 + 0x1b8) = uVar7;
        return uVar3;
      }
    }
    else if (uVar3 != 0) {
      uStack_178 = *(undefined8 *)(uVar3 + 0xd8);
      uStack_180 = *(undefined8 *)(uVar3 + 0xd0);
      uStack_168 = *(undefined8 *)(uVar3 + 0xe8);
      uStack_170 = *(undefined8 *)(uVar3 + 0xe0);
      uStack_158 = *(undefined8 *)(uVar3 + 0xf8);
      uStack_160 = *(undefined8 *)(uVar3 + 0xf0);
      uStack_148 = *(undefined8 *)(uVar3 + 0x108);
      uStack_150 = *(undefined8 *)(uVar3 + 0x100);
      uStack_198 = *(undefined8 *)(uVar3 + 0xb8);
      uStack_1a0 = *(undefined8 *)(uVar3 + 0xb0);
      uStack_188 = *(undefined8 *)(uVar3 + 200);
      uStack_190 = *(undefined8 *)(uVar3 + 0xc0);
      fVar8 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&uStack_1a0,0);
      if (*(long *)(lVar2 + 0x1a0) != 0) {
        fVar9 = *(float *)(*(long *)(lVar2 + 0x1a0) + 0x28);
        lVar4 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar2);
        if (lVar4 != 0) {
          uStack_178 = *(undefined8 *)(lVar4 + 0xd8);
          uStack_180 = *(undefined8 *)(lVar4 + 0xd0);
          uStack_168 = *(undefined8 *)(lVar4 + 0xe8);
          uStack_170 = *(undefined8 *)(lVar4 + 0xe0);
          uStack_158 = *(undefined8 *)(lVar4 + 0xf8);
          uStack_160 = *(undefined8 *)(lVar4 + 0xf0);
          uStack_148 = *(undefined8 *)(lVar4 + 0x108);
          uStack_150 = *(undefined8 *)(lVar4 + 0x100);
          uStack_198 = *(undefined8 *)(lVar4 + 0xb8);
          uStack_1a0 = *(undefined8 *)(lVar4 + 0xb0);
          uStack_188 = *(undefined8 *)(lVar4 + 200);
          uStack_190 = *(undefined8 *)(lVar4 + 0xc0);
          fVar5 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&uStack_1a0,0);
          uVar7 = *(undefined4 *)(lVar2 + 0x1b8);
          lVar4 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                            (lVar2);
          if (lVar4 != 0) {
            uVar3 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar7,*(undefined4 *)(lVar4 + 0x8c),(fVar8 - fVar9) / fVar5,0);
            uVar7 = extraout_s0_00;
            goto LAB_014bd840;
          }
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  if ((*(long *)(lVar4 + 0xf8) != 0) &&
     (lVar2 = *(long *)(*(long *)(lVar4 + 0xf8) + 0x18), lVar2 != 0)) {
    uVar3 = /*UnityEngine.Rigidbody$$set_useGravity*/ func_0x032a25e4(lVar2,0,0);
    *(undefined1 *)(lVar4 + 0xf0) = 0;
    *(undefined2 *)(lVar4 + 0x124) = 0x100;
    *(undefined4 *)(lVar4 + 0x220) = extraout_s0_01;
    return uVar3;
  }
  lVar4 = func_0x00f78af4();
  lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar2 != 0) {
    if (*(float *)(lVar2 + 200) <= 0.0) {
      uVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar4);
      if (uVar3 != 0) {
        uVar7 = *(undefined4 *)(uVar3 + 0x88);
LAB_014bd938:
        *(undefined4 *)(lVar4 + 0x128) = uVar7;
        return uVar3;
      }
    }
    else {
      fVar8 = *(float *)(lVar4 + 0x220);
      lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar4);
      if (lVar2 != 0) {
        fVar9 = *(float *)(lVar2 + 200);
        uVar7 = *(undefined4 *)(lVar4 + 0x128);
        lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar4);
        if (lVar2 != 0) {
          uVar3 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar7,*(undefined4 *)(lVar2 + 0xc4),
                                  (extraout_s0_02 - fVar8) / fVar9,0);
          uVar7 = extraout_s0_03;
          goto LAB_014bd938;
        }
      }
    }
  }
  uVar3 = func_0x00f78af4();
  *(undefined2 *)(uVar3 + 0x124) = 1;
  *(undefined4 *)(uVar3 + 0x21c) = extraout_s0_04;
  return uVar3;
}



// ============================================================
// RVA: 0x14bd5f0 | Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour.IsInFlightAnim
// ============================================================

ulong Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__IsInFlightAnim(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 extraout_s0;
  float fVar5;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  float extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  ulong extraout_d0;
  uint uVar6;
  undefined4 uVar7;
  ulong unaff_d9;
  float fVar8;
  ulong unaff_d10;
  float fVar9;
  ulong unaff_d11;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((bRam0000000003eb4afe & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4afe = 1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_78,*(long *)(param_1 + 0x70),0,0);
    uStack_48 = uStack_70;
    uStack_50 = uStack_78;
    uStack_38 = uStack_60;
    uStack_40 = uStack_68;
    uStack_30 = uStack_58;
    iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_50,0);
    if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar1 == *(int *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 4));
  }
  lVar2 = func_0x00f78af4();
  pcStack_88 = Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateToInFlightSpeed;
  puStack_90 = &stack0xfffffffffffffff0;
  lVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar3 != 0) {
    if (*(float *)(lVar3 + 0xc0) <= 0.0) {
      uVar4 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar2);
      if (uVar4 != 0) {
        uVar7 = *(undefined4 *)(uVar4 + 0x88);
LAB_014bd728:
        *(undefined4 *)(lVar2 + 0x128) = uVar7;
        return uVar4;
      }
    }
    else {
      fVar8 = *(float *)(lVar2 + 0x21c);
      unaff_d10 = (ulong)(uint)fVar8;
      lVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar2);
      if (lVar3 != 0) {
        fVar9 = *(float *)(lVar3 + 0xc0);
        unaff_d11 = (ulong)(uint)fVar9;
        uVar6 = *(uint *)(lVar2 + 0x128);
        unaff_d9 = (ulong)uVar6;
        lVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar2);
        if (lVar3 != 0) {
          uVar4 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar6,*(undefined4 *)(lVar3 + 0x88),
                                  ((float)extraout_d0 - fVar8) / fVar9,0);
          uVar7 = extraout_s0;
          goto LAB_014bd728;
        }
      }
    }
  }
  lVar3 = func_0x00f78af4();
  uStack_e0 = 0x3eb4000;
  pcStack_c8 = Atlas_Gameplay_Usables_PlacementHomingProjectile__UpdateFloorPerimeterGap;
  uStack_100 = unaff_d11;
  uStack_f8 = unaff_d10;
  uStack_f0 = unaff_d9;
  uStack_e8 = extraout_d0 & 0xffffffff;
  lStack_d8 = lVar2;
  ppuStack_d0 = &puStack_90;
  lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar2 != 0) {
    uStack_138 = *(undefined8 *)(lVar2 + 0xd8);
    uStack_140 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_128 = *(undefined8 *)(lVar2 + 0xe8);
    uStack_130 = *(undefined8 *)(lVar2 + 0xe0);
    uStack_118 = *(undefined8 *)(lVar2 + 0xf8);
    uStack_120 = *(undefined8 *)(lVar2 + 0xf0);
    uStack_108 = *(undefined8 *)(lVar2 + 0x108);
    uStack_110 = *(undefined8 *)(lVar2 + 0x100);
    uStack_158 = *(undefined8 *)(lVar2 + 0xb8);
    uStack_160 = *(undefined8 *)(lVar2 + 0xb0);
    uStack_148 = *(undefined8 *)(lVar2 + 200);
    uStack_150 = *(undefined8 *)(lVar2 + 0xc0);
    fVar8 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&uStack_160,0);
    uVar4 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                      (lVar3);
    if (fVar8 <= 0.0) {
      if (uVar4 != 0) {
        uVar7 = *(undefined4 *)(uVar4 + 0x8c);
LAB_014bd840:
        *(undefined4 *)(lVar3 + 0x1b8) = uVar7;
        return uVar4;
      }
    }
    else if (uVar4 != 0) {
      uStack_138 = *(undefined8 *)(uVar4 + 0xd8);
      uStack_140 = *(undefined8 *)(uVar4 + 0xd0);
      uStack_128 = *(undefined8 *)(uVar4 + 0xe8);
      uStack_130 = *(undefined8 *)(uVar4 + 0xe0);
      uStack_118 = *(undefined8 *)(uVar4 + 0xf8);
      uStack_120 = *(undefined8 *)(uVar4 + 0xf0);
      uStack_108 = *(undefined8 *)(uVar4 + 0x108);
      uStack_110 = *(undefined8 *)(uVar4 + 0x100);
      uStack_158 = *(undefined8 *)(uVar4 + 0xb8);
      uStack_160 = *(undefined8 *)(uVar4 + 0xb0);
      uStack_148 = *(undefined8 *)(uVar4 + 200);
      uStack_150 = *(undefined8 *)(uVar4 + 0xc0);
      fVar8 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&uStack_160,0);
      if (*(long *)(lVar3 + 0x1a0) != 0) {
        fVar9 = *(float *)(*(long *)(lVar3 + 0x1a0) + 0x28);
        lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar3);
        if (lVar2 != 0) {
          uStack_138 = *(undefined8 *)(lVar2 + 0xd8);
          uStack_140 = *(undefined8 *)(lVar2 + 0xd0);
          uStack_128 = *(undefined8 *)(lVar2 + 0xe8);
          uStack_130 = *(undefined8 *)(lVar2 + 0xe0);
          uStack_118 = *(undefined8 *)(lVar2 + 0xf8);
          uStack_120 = *(undefined8 *)(lVar2 + 0xf0);
          uStack_108 = *(undefined8 *)(lVar2 + 0x108);
          uStack_110 = *(undefined8 *)(lVar2 + 0x100);
          uStack_158 = *(undefined8 *)(lVar2 + 0xb8);
          uStack_160 = *(undefined8 *)(lVar2 + 0xb0);
          uStack_148 = *(undefined8 *)(lVar2 + 200);
          uStack_150 = *(undefined8 *)(lVar2 + 0xc0);
          fVar5 = (float)/*Atlas.Definitions.PlacementHomingProjectileDefinition.PlacementHomingProjectileData$$get_StartTrackingInAirTimer*/ func_0x01561f7c(&uStack_160,0);
          uVar7 = *(undefined4 *)(lVar3 + 0x1b8);
          lVar2 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                            (lVar3);
          if (lVar2 != 0) {
            uVar4 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar7,*(undefined4 *)(lVar2 + 0x8c),(fVar8 - fVar9) / fVar5,0);
            uVar7 = extraout_s0_00;
            goto LAB_014bd840;
          }
        }
      }
    }
  }
  lVar2 = func_0x00f78af4();
  if ((*(long *)(lVar2 + 0xf8) != 0) &&
     (lVar3 = *(long *)(*(long *)(lVar2 + 0xf8) + 0x18), lVar3 != 0)) {
    uVar4 = /*UnityEngine.Rigidbody$$set_useGravity*/ func_0x032a25e4(lVar3,0,0);
    *(undefined1 *)(lVar2 + 0xf0) = 0;
    *(undefined2 *)(lVar2 + 0x124) = 0x100;
    *(undefined4 *)(lVar2 + 0x220) = extraout_s0_01;
    return uVar4;
  }
  lVar2 = func_0x00f78af4();
  lVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    ();
  if (lVar3 != 0) {
    if (*(float *)(lVar3 + 200) <= 0.0) {
      uVar4 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar2);
      if (uVar4 != 0) {
        uVar7 = *(undefined4 *)(uVar4 + 0x88);
LAB_014bd938:
        *(undefined4 *)(lVar2 + 0x128) = uVar7;
        return uVar4;
      }
    }
    else {
      fVar8 = *(float *)(lVar2 + 0x220);
      lVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar2);
      if (lVar3 != 0) {
        fVar9 = *(float *)(lVar3 + 200);
        uVar7 = *(undefined4 *)(lVar2 + 0x128);
        lVar3 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                          (lVar2);
        if (lVar3 != 0) {
          uVar4 = /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(uVar7,*(undefined4 *)(lVar3 + 0xc4),
                                  (extraout_s0_02 - fVar8) / fVar9,0);
          uVar7 = extraout_s0_03;
          goto LAB_014bd938;
        }
      }
    }
  }
  uVar4 = func_0x00f78af4();
  *(undefined2 *)(uVar4 + 0x124) = 1;
  *(undefined4 *)(uVar4 + 0x21c) = extraout_s0_04;
  return uVar4;
}



// ============================================================
// RVA: 0x14bdda4 | Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour.TriggerImpactAnim
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour__TriggerImpactAnim
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 unaff_x22;
  undefined8 uVar16;
  undefined8 *******pppppppuVar17;
  code *pcVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  code *pcStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 *****pppppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 ****ppppuStack_110;
  code *pcStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 **ppuStack_c0;
  code *pcStack_b8;
  float fStack_b0;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb4b00 & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    bRam0000000003eb4b00 = 1;
  }
  lVar14 = *(long *)(param_4 + 0x70);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar14 != 0) {
    uVar20 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc);
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebe420)(lVar14,uVar20,1);
    return;
  }
  auVar26 = func_0x00f78af4();
  plVar7 = auVar26._8_8_;
  lVar14 = auVar26._0_8_;
  pcStack_38 = Atlas_Gameplay_Usables_PlacementHomingProjectile__FixedUpdateGameplay;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4af7 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4af7 = 1;
  }
  if (*(char *)(lVar14 + 0x18) == '\0') {
    return;
  }
  bVar2 = false;
  if (*(char *)(lVar14 + 0x11c) != '\0') {
    bVar2 = *(char *)(lVar14 + 0x1b4) == '\0';
  }
  *(bool *)(lVar14 + 0x11c) = bVar2;
  /*Atlas.Gameplay.Usables.ProjectileUsable$$FixedUpdateGameplay*/ func_0x014cdd74(lVar14,plVar7,0);
  if ((*(char *)(lVar14 + 0x125) == '\0') && (*(char *)(lVar14 + 0xf0) == '\0')) {
    *(undefined4 *)(lVar14 + 0x218) = 0x3e99999a;
    return;
  }
  if (plVar7 != (long *)0x0) {
    fVar22 = *(float *)(lVar14 + 0x218);
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_014bdf18;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
LAB_014bdf18:
    fVar19 = (float)(*(code *)*puVar4)(plVar7,puVar4[1]);
    fVar22 = fVar22 - fVar19;
    *(float *)(lVar14 + 0x218) = fVar22;
    if ((*(long *)(lVar14 + 0xf8) != 0) &&
       (lVar11 = *(long *)(*(long *)(lVar14 + 0xf8) + 0x18), lVar11 != 0)) {
      fVar19 = (_UNK_033f83fc - fVar22) / _UNK_033f83fc;
      fVar22 = _UNK_033f83fc;
      uVar20 = /*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(lVar11,0);
      uVar23 = *(undefined4 *)(lVar14 + 0xe0);
      uVar24 = *(undefined4 *)(lVar14 + 0xe4);
      uVar25 = *(undefined4 *)(lVar14 + 0xe8);
      uVar21 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
      /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec(uVar23,uVar24,uVar25,uVar21,fVar22,param_3,0);
      fStack_b0 = fVar19;
      /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(uVar20,0);
      if (pcRam0000000003ec2948 == (code *)0x0) {
        pcRam0000000003ec2948 =
             (code *)func_0x00f789d4("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)"
                                     ,0);
      }
      (*pcRam0000000003ec2948)(lVar11,&stack0xffffffffffffffa0);
      return;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar14 = auVar26._8_8_;
  plVar7 = auVar26._0_8_;
  pcStack_b8 = Atlas_Gameplay_Usables_PlacementHomingProjectile__OnTriggerEnter;
  uVar15 = 0x3eb4000;
  ppuStack_c0 = (undefined8 **)&puStack_40;
  if ((bRam0000000003eb4af8 & 1) == 0) {
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4af8 = 1;
  }
  lStack_f8 = 0;
  lStack_100 = 0;
  lStack_e8 = 0;
  lStack_f0 = 0;
  uVar8 = 0;
  Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(plVar7,lVar14);
  if ((char)plVar7[0xc] != '\0') {
    return;
  }
  if (*(char *)((long)plVar7 + 300) != '\0') {
    return;
  }
  if (lVar14 != 0) {
    uVar15 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar14,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = 0;
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar15,0);
    if (iVar3 == 0) {
      return;
    }
    lVar14 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar14,0);
    if (lVar14 != 0) {
      plVar5 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar14,uRam0000000003d534a0);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar14 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
            puVar4 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_014be170;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      uVar8 = 0;
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5);
LAB_014be170:
      plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (plVar5 == (long *)0x0) {
        return;
      }
      if (*(byte *)(*plVar5 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) {
        return;
      }
      if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8
                   ) != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78) {
        return;
      }
      if (plVar7[0x34] != 0) {
        if (plVar5 != *(long **)(plVar7[0x34] + 0x20)) {
          if (plVar5 == (long *)0x0) goto LAB_014be248;
          lStack_f8 = plVar5[10];
          lStack_100 = plVar5[9];
          lStack_e8 = plVar5[0xc];
          lVar14 = plVar5[0xb];
          lStack_f0 = lVar14;
          iVar3 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(&lStack_100,0);
          param_2 = (undefined4)lVar14;
          if (iVar3 != 0) {
            lVar14 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                               (plVar7);
            if (lVar14 == 0) goto LAB_014be248;
            uVar9 = *(undefined8 *)(lVar14 + 0xd0);
            (**(code **)(*plVar7 + 0x338))(plVar7,plVar5,uVar9,0,*(undefined8 *)(*plVar7 + 0x340));
            uVar8 = (uint)uVar9;
          }
        }
        if ((plVar5[0xe] != 0) && (plVar7[0x45] != 0)) {
          /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(plVar7[0x45],*(undefined8 *)(plVar5[0xe] + 0xb8),0);
          return;
        }
      }
    }
  }
LAB_014be248:
  lVar14 = func_0x00f78af4();
  pcStack_108 = Atlas_Gameplay_Usables_PlacementHomingProjectile__CreateDeSpawnVfx;
  ppppuStack_110 = (undefined8 ****)&ppuStack_c0;
  if ((bRam0000000003eb4af9 & 1) == 0) {
    func_0x00f78a20(0x3d6b360);
    bRam0000000003eb4af9 = 1;
  }
  lVar11 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar14,0);
  lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                    (lVar14);
  if ((lVar6 != 0) && (*(long *)(lVar14 + 0x100) != 0)) {
    uVar15 = *(undefined8 *)(lVar6 + 0xd8);
    unaff_x22 = *(undefined8 *)(lVar6 + 0xe0);
    uVar20 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar14 + 0x100),0);
    uVar16 = *(undefined8 *)(lVar14 + 0x28);
    uVar9 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                      (lVar14);
    if (lVar11 != 0) {
      uVar10 = uVar15;
      lVar11 = /*Atlas.Contexts.GameContextBase$$SpawnAoE*/ func_0x0159a63c(uVar20,param_2,param_3,lVar11,/*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uVar15,unaff_x22,
                               uVar16,uVar9,*(undefined8 *)(lVar14 + 0x50),0);
      uVar8 = (uint)uVar10;
      lVar6 = Atlas_Gameplay_Usables_PlacementHomingProjectile__get_PlacementHomingProjectileDefinition
                        (lVar14);
      if (lVar6 != 0) {
        uStack_178 = *(undefined8 *)(lVar6 + 0xa0);
        uStack_180 = *(undefined8 *)(lVar6 + 0x98);
        uStack_170 = *(undefined4 *)(lVar6 + 0xa8);
        /*Atlas.Gameplay.Usables.ProjectileUsable$$SetupDespawnVFX*/ func_0x014cf800(lVar14,lVar11,&uStack_180,0);
        return;
      }
    }
  }
  lVar6 = func_0x00f78af4();
  pcStack_188 = Atlas_Gameplay_Usables_PlacementHomingProjectile__LoseTarget;
  lStack_1a0 = lVar11;
  lStack_198 = lVar14;
  pppppuStack_190 = &ppppuStack_110;
  if ((bRam0000000003eb4afa & 1) == 0) {
    func_0x00f78a20(0x3d3b888);
    func_0x00f78a20(0x3d3b890);
    bRam0000000003eb4afa = 1;
  }
  if (*(long *)(lVar6 + 0x1a0) != 0) {
    iVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                      (*(long *)(lVar6 + 0x1a0),0);
    if (iVar3 == 0) {
      return;
    }
    if (((*(long *)(lVar6 + 0x1a0) != 0) &&
        (lVar14 = *(long *)(*(long *)(lVar6 + 0x1a0) + 0x20), lVar14 != 0)) &&
       (lVar14 = *(long *)(lVar14 + 0x90), lVar14 != 0)) {
      iVar3 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar14,0);
      if (iVar3 != 0) {
        if (((*(long *)(lVar6 + 0x1a0) == 0) ||
            (lVar14 = *(long *)(*(long *)(lVar6 + 0x1a0) + 0x20), lVar14 == 0)) ||
           ((lVar14 = *(long *)(lVar14 + 0x90), lVar14 == 0 ||
            (lVar14 = *(long *)(lVar14 + 200), lVar14 == 0)))) goto LAB_014be468;
        uVar9 = uRam0000000003d3b888;
        iVar3 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar14,lVar6);
        uVar8 = (uint)uVar9;
        if (iVar3 != 0) {
          if (((*(long *)(lVar6 + 0x1a0) == 0) ||
              (lVar14 = *(long *)(*(long *)(lVar6 + 0x1a0) + 0x20), lVar14 == 0)) ||
             ((lVar14 = *(long *)(lVar14 + 0x90), lVar14 == 0 ||
              (lVar14 = *(long *)(lVar14 + 200), lVar14 == 0)))) goto LAB_014be468;
          uVar9 = uRam0000000003d3b890;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar14,lVar6);
          uVar8 = (uint)uVar9;
        }
      }
      if (*(long *)(lVar6 + 0x1a0) != 0) {
        *(undefined8 *)(*(long *)(lVar6 + 0x1a0) + 0x20) = 0;
        return;
      }
    }
  }
LAB_014be468:
  lVar14 = func_0x00f78af4();
  uStack_1c0 = 0x3eb4000;
  pcStack_1a8 = Atlas_Gameplay_Usables_PlacementHomingProjectile__Destroy;
  lStack_1b8 = lVar6;
  ppppppuStack_1b0 = &pppppuStack_190;
  uVar12 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(lVar14,0);
  if ((uVar12 & 1) == 0) {
    Atlas_Gameplay_Usables_PlacementHomingProjectile__LoseTarget(lVar14);
  }
  uVar9 = uStack_1c0;
  plVar1 = &uStack_1c0;
  pppppppuVar17 = &ppppppuStack_1b0;
  uVar12 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(lVar14,0);
  if ((uVar12 & 1) != 0) {
code_r0x014ceb18:
    if (*(char *)(lVar14 + 0x60) == '\0') {
      *(undefined1 *)(lVar14 + 0x60) = 1;
      *(undefined1 *)(lVar14 + 0x61) = 1;
      return;
    }
    return;
  }
  lVar11 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar14,0);
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0xc0) == 0)) {
    pcVar18 = (code *)&Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
    auVar27 = func_0x00f78af4();
  }
  else {
    if (*(char *)(*(long *)(lVar11 + 0xc0) + 0x50) != '\0') goto code_r0x014ceb18;
    auVar27._8_4_ = 1;
    auVar27._0_8_ = lVar14;
    uVar8 = 1;
    plVar1 = &lStack_1a0;
    lVar14 = lStack_1b8;
    uVar9 = uStack_1c0;
    pppppppuVar17 = (undefined8 *******)ppppppuStack_1b0;
    pcVar18 = pcStack_1a8;
  }
  plVar7 = auVar27._0_8_;
  *(undefined8 *)((long)plVar1 + -0x20) = uVar9;
  *(long *)((long)plVar1 + -0x18) = lVar14;
  *(undefined8 ********)((long)plVar1 + -0x10) = pppppppuVar17;
  *(code **)((long)plVar1 + -8) = pcVar18;
  if ((*(char *)((long)plVar7 + 300) != '\0') == uVar8) {
    return;
  }
  if (auVar27._8_4_ != 0) {
    (**(code **)(*plVar7 + 0x448))(plVar7,*(undefined8 *)(*plVar7 + 0x450));
  }
  *(char *)((long)plVar7 + 300) = (char)uVar8;
  if (((plVar7[9] != 0) && (lVar14 = *(long *)(plVar7[9] + 0x28), lVar14 != 0)) &&
     (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar14,0), lVar14 != 0)) {
    *(undefined8 *)((long)plVar1 + -0x30) = unaff_x22;
    *(undefined8 *)((long)plVar1 + -0x28) = uVar15;
    *(undefined8 *)((long)plVar1 + -0x20) = *(undefined8 *)((long)plVar1 + -0x20);
    *(undefined8 *)((long)plVar1 + -0x18) = *(undefined8 *)((long)plVar1 + -0x18);
    *(undefined8 *)((long)plVar1 + -0x10) = *(undefined8 *)((long)plVar1 + -0x10);
    *(undefined8 *)((long)plVar1 + -8) = *(undefined8 *)((long)plVar1 + -8);
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar14,uVar8 ^ 1);
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14bea08 | Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4e52 & 1) == 0) {
    func_0x00f78a20(0x3d25750,0);
    bRam0000000003eb4e52 = 1;
  }
  uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
  /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
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



// ============================================================
// RVA: 0x14bea10 | Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour..cctor
// ============================================================

void Atlas_Gameplay_Usables_PlacementHomingProjectileBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb4b02 & 1) == 0) {
    func_0x00f78a20(0x3d23c70);
    func_0x00f78a20(0x3d75140);
    func_0x00f78a20(0x3d6dcc8);
    func_0x00f78a20(0x3d68f48);
    func_0x00f78a20(0x3d72dc0);
    func_0x00f78a20(0x3d710e0);
    bRam0000000003eb4b02 = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Transform')*/ uRam0000000003d75140,0);
  **(undefined4 **)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_CPodsInFlight')*/ uRam0000000003d68f48,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 4) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Steer')*/ uRam0000000003d72dc0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Impact')*/ uRam0000000003d6dcc8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0xc) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ParentToWorld')*/ uRam0000000003d710e0,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.PlacementHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23c70 + 0xb8) + 0x10) = uVar1;
  return;
}



