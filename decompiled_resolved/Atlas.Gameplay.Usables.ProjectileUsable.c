// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.ProjectileUsable

// ============================================================
// RVA: 0x14cd290 | Atlas.Gameplay.Usables.ProjectileUsable.get_ProjectileUsableDefinition
// ============================================================

long * Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((bRam0000000003eb4b6c & 1) == 0) {
    func_0x00f78a20(0x3d23e98);
    bRam0000000003eb4b6c = 1;
  }
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 300) < *(byte *)(/*Atlas.Definitions.ProjectileUsableDefinition_TypeInfo*/ lRam0000000003d23e98 + 300)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ProjectileUsableDefinition_TypeInfo*/ lRam0000000003d23e98 + 300) * 8 + -8)
        != /*Atlas.Definitions.ProjectileUsableDefinition_TypeInfo*/ lRam0000000003d23e98)) {
      lVar2 = func_0x00f78e5c();
      return (long *)(ulong)*(byte *)(lVar2 + 300);
    }
  }
  return plVar1;
}



// ============================================================
// RVA: 0x14cd30c | Atlas.Gameplay.Usables.ProjectileUsable.get_IsGhostProjectile
// ============================================================

undefined1 Atlas_Gameplay_Usables_ProjectileUsable__get_IsGhostProjectile(long param_1)

{
  return *(undefined1 *)(param_1 + 300);
}



// ============================================================
// RVA: 0x14cd314 | Atlas.Gameplay.Usables.ProjectileUsable.Init
// ============================================================

void Atlas_Gameplay_Usables_ProjectileUsable__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000003eb4b6d & 1) == 0) {
    func_0x00f78a20(0x3d23e90);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d6ba50);
    func_0x00f78a20(0x3d70a90);
    bRam0000000003eb4b6d = 1;
  }
  /*Atlas.Gameplay.Usables.Usable$$Init*/ func_0x01523840(param_1,param_2,param_3,param_4,param_5,0);
  uVar4 = func_0x00f78aec(/*ProjectilePhysics_TypeInfo*/ uRam0000000003d23e90);
  /*ProjectilePhysics$$.ctor*/ func_0x014cd1ec();
  *(undefined8 *)(param_1 + 0xf8) = uVar4;
  plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
  if (plVar5 == (long *)0x0) {
LAB_014cd490:
    func_0x00f78af4();
  }
  else {
    if ((/*STR('Default')*/ lRam0000000003d6ba50 != 0) &&
       (lVar6 = func_0x00f78adc(/*STR('Default')*/ lRam0000000003d6ba50,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    {
LAB_014cd49c:
      uVar4 = func_0x00f78b14();
      goto code_r0x014cd4a0;
    }
    if ((int)plVar5[3] != 0) {
      plVar5[4] = /*STR('Default')*/ lRam0000000003d6ba50;
      uVar1 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar5,0);
      plVar5 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
      if (plVar5 == (long *)0x0) goto LAB_014cd490;
      if ((/*STR('Obstacle')*/ lRam0000000003d70a90 != 0) &&
         (lVar6 = func_0x00f78adc(/*STR('Obstacle')*/ lRam0000000003d70a90,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)
         ) goto LAB_014cd49c;
      if ((int)plVar5[3] != 0) {
        plVar5[4] = /*STR('Obstacle')*/ lRam0000000003d70a90;
        uVar2 = /*UnityEngine.LayerMask$$GetMask*/ func_0x03232748(plVar5,0);
        uVar3 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326fc(uVar2 | uVar1,0);
        *(undefined4 *)(param_1 + 0x150) = uVar3;
        return;
      }
    }
  }
  uVar4 = func_0x00f78b24();
code_r0x014cd4a0:
  lVar6 = func_0x00f78ac0(uVar4,0);
  if (*(char *)(lVar6 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(lVar6);
  }
  *(undefined8 *)(lVar6 + 0xf8) = 0;
  *(undefined4 *)(lVar6 + 0x150) = 0;
  if (*(char *)(lVar6 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar6,0);
  }
  if (*(char *)(lVar6 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.Usable$$OnTearDownParamsInternal*/ func_0x01523890(lVar6,0);
  }
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x58) = 0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  return;
}



// ============================================================
// RVA: 0x14cd4a8 | Atlas.Gameplay.Usables.ProjectileUsable.DeInit
// ============================================================

void Atlas_Gameplay_Usables_ProjectileUsable__DeInit(long param_1)

{
  if (*(char *)(param_1 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(param_1);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(char *)(param_1 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(param_1,0);
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.Usable$$OnTearDownParamsInternal*/ func_0x01523890(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// RVA: 0x14cd4e4 | Atlas.Gameplay.Usables.ProjectileUsable.OnTearDownParamsInternal
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

void Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined1 ***pppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  *(undefined8 *)(param_5 + 0xd0) = 0;
  uVar14 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_5 + 0xd8) = uVar14;
  uVar13 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0xe0) = uVar13;
  *(undefined4 *)(param_5 + 0xe4) = param_2;
  *(undefined4 *)(param_5 + 0xe8) = param_3;
  *(undefined4 *)(param_5 + 0xec) = 0;
  *(undefined1 *)(param_5 + 0xf0) = 0;
  *(undefined4 *)(param_5 + 0x120) = 0;
  *(undefined8 *)(param_5 + 0x108) = 0;
  *(undefined8 *)(param_5 + 0x110) = 0;
  *(undefined8 *)(param_5 + 0x115) = 0;
  *(undefined2 *)(param_5 + 0x124) = 1;
  *(undefined4 *)(param_5 + 0x128) = 0;
  *(undefined1 *)(param_5 + 0x138) = 0;
  *(undefined4 *)(param_5 + 0x13c) = 0;
  uVar13 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0x140) = uVar13;
  *(undefined4 *)(param_5 + 0x144) = param_2;
  *(undefined4 *)(param_5 + 0x148) = 0;
  *(undefined1 *)(param_5 + 0x14c) = 0;
  *(undefined4 *)(param_5 + 0x158) = 0;
  *(undefined1 *)(param_5 + 0x15c) = 0;
  *(undefined1 *)(param_5 + 0x154) = 0;
  uVar13 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0x164) = uVar13;
  *(undefined4 *)(param_5 + 0x168) = param_2;
  *(undefined4 *)(param_5 + 0x16c) = param_3;
  uVar13 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0x170) = uVar13;
  *(undefined4 *)(param_5 + 0x174) = param_2;
  *(undefined4 *)(param_5 + 0x178) = param_3;
  uVar13 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0x17c) = uVar13;
  *(undefined4 *)(param_5 + 0x180) = param_2;
  *(undefined4 *)(param_5 + 0x184) = param_3;
  uVar13 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
  *(undefined4 *)(param_5 + 0x188) = uVar13;
  *(undefined4 *)(param_5 + 0x18c) = param_2;
  *(undefined4 *)(param_5 + 400) = param_3;
  *(undefined4 *)(param_5 + 0x194) = param_4;
  uVar14 = 0;
  /*Atlas.Gameplay.Usables.ProjectileUsable$$SetToGhostProjectile*/ func_0x014ceb60(param_5,0);
  *(undefined4 *)(param_5 + 0x160) = 0;
  lVar7 = *(long *)(param_5 + 0xf8);
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    return;
  }
  auVar16 = func_0x00f78af4();
  lVar11 = auVar16._8_8_;
  lVar7 = auVar16._0_8_;
  puStack_28 = &Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool;
  puStack_30 = &stack0xfffffffffffffff0;
  Atlas_Gameplay_Usables_CollidableUsable__OnExitPool();
  lVar9 = *(long *)(lVar7 + 0xf8);
  lVar3 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(lVar7,0);
  if (lVar3 != 0) {
    uVar10 = *(undefined8 *)(lVar3 + 0x58);
    lVar3 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(lVar7,0);
    if ((lVar3 != 0) && (lVar9 != 0)) {
      uVar8 = *(undefined8 *)(lVar3 + 0x50);
      *(undefined8 *)(lVar9 + 0x10) = uVar10;
      *(undefined8 *)(lVar9 + 0x18) = uVar8;
      *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(lVar9 + 0x3c);
      if ((*(long *)(lVar7 + 0xf8) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar7 + 0xf8) + 0x18), lVar3 != 0)) {
        uVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
        *(undefined8 *)(lVar7 + 0x100) = uVar10;
        *(undefined2 *)(lVar7 + 0x124) = 1;
        *(undefined1 *)(lVar7 + 0x11c) = 0;
        *(undefined4 *)(lVar7 + 0x120) = 0;
        if (lVar11 != 0) {
          *(float *)(lVar7 + 0x148) = *(float *)(lVar11 + 0x8c) + 1.0;
          lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(lVar7);
          if (lVar3 != 0) {
            bVar6 = false;
            if (*(char *)(lVar3 + 0x97) != '\0') {
              lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(lVar7)
              ;
              if (lVar3 == 0) goto code_r0x014cd6e8;
              bVar6 = 0 < *(int *)(lVar3 + 0x90);
            }
            *(bool *)(lVar7 + 0x14c) = bVar6;
            lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(lVar7);
            if (lVar3 != 0) {
              *(undefined4 *)(lVar7 + 0x128) = *(undefined4 *)(lVar3 + 0x88);
              return;
            }
          }
        }
      }
    }
  }
code_r0x014cd6e8:
  lVar3 = func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_ProjectileUsable__OnEnterPool;
  lStack_70 = lVar11;
  lStack_68 = lVar7;
  ppuStack_60 = &puStack_30;
  Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal();
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar3,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar3 + 0x48) != 0) &&
     (lVar7 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar7 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar3 + 100),*(undefined4 *)(lVar3 + 0x68),
                    *(undefined4 *)(lVar3 + 0x6c),lVar7,0);
    if ((*(long *)(lVar3 + 0x48) != 0) &&
       (lVar7 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar7 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar3 + 0x70),*(undefined4 *)(lVar3 + 0x74),
                      *(undefined4 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x7c),lVar7,0);
      if ((*(long *)(lVar3 + 0x48) != 0) &&
         (lVar7 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar7 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar3 + 0x80),*(undefined4 *)(lVar3 + 0x84),
                        *(undefined4 *)(lVar3 + 0x88),lVar7,0);
        *(undefined1 *)(lVar3 + 0x19) = 0;
        *(undefined8 *)(lVar3 + 0x98) = 0;
        *(undefined8 *)(lVar3 + 0x90) = 0;
        *(undefined8 *)(lVar3 + 0xa8) = 0;
        *(undefined8 *)(lVar3 + 0xa0) = 0;
        *(undefined8 *)(lVar3 + 0xb8) = 0;
        *(undefined8 *)(lVar3 + 0xb0) = 0;
        if (*(long *)(lVar3 + 0x48) != 0) {
          lVar7 = *(long *)(*(long *)(lVar3 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0);
          if (iVar1 != 0) {
            if (lVar7 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar7 + 0x46) = 0;
            *(undefined4 *)(lVar7 + 0x40) = 0;
            *(undefined1 *)(lVar7 + 0x44) = 0;
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
  auVar16 = func_0x00f78af4();
  lVar3 = auVar16._8_8_;
  lVar7 = auVar16._0_8_;
  puStack_78 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  pppuStack_80 = &ppuStack_60;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar7 + 0x19) = 1;
  *(undefined8 *)(lVar7 + 0x28) = 0;
  *(long *)(lVar7 + 0x30) = lVar3;
  *(undefined8 *)(lVar7 + 0x48) = uVar14;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  if ((*(long *)(lVar7 + 0x58) != 0) && (lVar3 != 0)) {
    lVar11 = *(long *)(*(long *)(lVar7 + 0x58) + 0x10);
    lVar3 = *(long *)(lVar3 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar3,0);
    if (lVar11 != 0) {
      uVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,uVar10,uRam0000000003d572a0);
      *(undefined8 *)(lVar7 + 0x90) = uVar10;
      puVar12 = &UNK_01523aa4;
      lVar11 = lVar7;
      goto code_r0x01523ba8;
    }
  }
  puVar12 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar11 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_100 = lVar3;
  uStack_f8 = uVar14;
  lStack_f0 = lVar7;
  pppuStack_d0 = &pppuStack_80;
  puStack_c8 = puVar12;
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
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  if (*(long *)(lVar11 + 0x28) == 0) {
    return;
  }
  lVar7 = *(long *)(lVar11 + 0x90);
  if (lVar7 != 0) {
    uVar10 = *(undefined8 *)(lVar7 + 0x28);
    uVar14 = *(undefined8 *)(lVar7 + 0x20);
    uVar15 = *(undefined8 *)(lVar7 + 0x38);
    uVar8 = *(undefined8 *)(lVar7 + 0x30);
    *(undefined8 *)(lVar11 + 0xb8) = *(undefined8 *)(lVar7 + 0x40);
    *(undefined8 *)(lVar11 + 0xb0) = uVar15;
    *(undefined8 *)(lVar11 + 0xa8) = uVar8;
    *(undefined8 *)(lVar11 + 0xa0) = uVar10;
    *(undefined8 *)(lVar11 + 0x98) = uVar14;
    if (*(long *)(lVar7 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar7 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar7 = *(long *)(*(long *)(lVar11 + 0x28) + 0x28);
    if (lVar7 != 0) {
      uStack_108 = *(undefined8 *)(lVar7 + 0xc0);
      if (((*(long *)(lVar11 + 0x58) != 0) &&
          (lVar7 = *(long *)(*(long *)(lVar11 + 0x58) + 0x10), lVar7 != 0)) &&
         (lVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar7,uStack_108,uRam0000000003d57270), lVar7 != 0)) {
        uStack_110 = *(undefined8 *)(lVar7 + 0x70);
        if ((*(long *)(lVar11 + 0x90) != 0) &&
           (lVar7 = *(long *)(*(long *)(lVar11 + 0x90) + 0x48), lVar7 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_150,lVar7,uRam0000000003d3d2e8);
          bVar6 = false;
          while (uVar4 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_150,uRam0000000003d334f0), uVar14 = uStack_140,
                (uVar4 & 1) != 0) {
            uStack_178 = uStack_130;
            uStack_180 = uStack_138;
            uStack_168 = uStack_120;
            uStack_170 = uStack_128;
            uStack_160 = uStack_118;
            uStack_188 = uStack_140;
            uVar10 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_188);
            uVar4 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_108,uVar10,0);
            if ((uVar4 & 1) != 0) {
              *(undefined8 *)(lVar11 + 0xa0) = uStack_178;
              *(undefined8 *)(lVar11 + 0x98) = uStack_180;
              *(undefined8 *)(lVar11 + 0xb0) = uStack_168;
              *(undefined8 *)(lVar11 + 0xa8) = uStack_170;
              *(undefined8 *)(lVar11 + 0xb8) = uStack_160;
              bVar6 = true;
            }
            uStack_188 = uVar14;
            uVar14 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_188);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_110,uVar14,0);
            if (!bVar6 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar11 + 0xa0) = uStack_178;
              *(undefined8 *)(lVar11 + 0x98) = uStack_180;
              *(undefined8 *)(lVar11 + 0xb0) = uStack_168;
              *(undefined8 *)(lVar11 + 0xa8) = uStack_170;
              *(undefined8 *)(lVar11 + 0xb8) = uStack_160;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_150,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar7 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_150,uRam0000000003d334e8);
    if (lVar7 == 0) {
      return;
    }
    func_0x00f78ac0(lVar7,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14cd5e8 | Atlas.Gameplay.Usables.ProjectileUsable.OnExitPool
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

void Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool
               (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  Atlas_Gameplay_Usables_CollidableUsable__OnExitPool();
  lVar8 = *(long *)(param_1 + 0xf8);
  lVar3 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(param_1,0);
  if (lVar3 != 0) {
    uVar9 = *(undefined8 *)(lVar3 + 0x58);
    lVar3 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(param_1,0);
    if ((lVar3 != 0) && (lVar8 != 0)) {
      uVar7 = *(undefined8 *)(lVar3 + 0x50);
      *(undefined8 *)(lVar8 + 0x10) = uVar9;
      *(undefined8 *)(lVar8 + 0x18) = uVar7;
      *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(lVar8 + 0x3c);
      if ((*(long *)(param_1 + 0xf8) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18), lVar3 != 0)) {
        uVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
        *(undefined8 *)(param_1 + 0x100) = uVar9;
        *(undefined2 *)(param_1 + 0x124) = 1;
        *(undefined1 *)(param_1 + 0x11c) = 0;
        *(undefined4 *)(param_1 + 0x120) = 0;
        if (param_2 != 0) {
          *(float *)(param_1 + 0x148) = *(float *)(param_2 + 0x8c) + 1.0;
          lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_1);
          if (lVar3 != 0) {
            bVar6 = false;
            if (*(char *)(lVar3 + 0x97) != '\0') {
              lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition
                                (param_1);
              if (lVar3 == 0) goto code_r0x014cd6e8;
              bVar6 = 0 < *(int *)(lVar3 + 0x90);
            }
            *(bool *)(param_1 + 0x14c) = bVar6;
            lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_1)
            ;
            if (lVar3 != 0) {
              *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(lVar3 + 0x88);
              return;
            }
          }
        }
      }
    }
  }
code_r0x014cd6e8:
  lVar3 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Usables_ProjectileUsable__OnEnterPool;
  lStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal();
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar3,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar3 + 0x48) != 0) &&
     (lVar8 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar8 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar3 + 100),*(undefined4 *)(lVar3 + 0x68),
                    *(undefined4 *)(lVar3 + 0x6c),lVar8,0);
    if ((*(long *)(lVar3 + 0x48) != 0) &&
       (lVar8 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar8 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar3 + 0x70),*(undefined4 *)(lVar3 + 0x74),
                      *(undefined4 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x7c),lVar8,0);
      if ((*(long *)(lVar3 + 0x48) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar8 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar3 + 0x80),*(undefined4 *)(lVar3 + 0x84),
                        *(undefined4 *)(lVar3 + 0x88),lVar8,0);
        *(undefined1 *)(lVar3 + 0x19) = 0;
        *(undefined8 *)(lVar3 + 0x98) = 0;
        *(undefined8 *)(lVar3 + 0x90) = 0;
        *(undefined8 *)(lVar3 + 0xa8) = 0;
        *(undefined8 *)(lVar3 + 0xa0) = 0;
        *(undefined8 *)(lVar3 + 0xb8) = 0;
        *(undefined8 *)(lVar3 + 0xb0) = 0;
        if (*(long *)(lVar3 + 0x48) != 0) {
          lVar8 = *(long *)(*(long *)(lVar3 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0);
          if (iVar1 != 0) {
            if (lVar8 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar8 + 0x46) = 0;
            *(undefined4 *)(lVar8 + 0x40) = 0;
            *(undefined1 *)(lVar8 + 0x44) = 0;
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
  lVar8 = auVar14._8_8_;
  lVar3 = auVar14._0_8_;
  puStack_58 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppuStack_60 = &puStack_40;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar8;
  *(undefined8 *)(lVar3 + 0x48) = param_3;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar8 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar8 = *(long *)(lVar8 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar8,0);
    if (lVar10 != 0) {
      uVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar9,uRam0000000003d572a0);
      *(undefined8 *)(lVar3 + 0x90) = uVar9;
      puVar11 = &UNK_01523aa4;
      lVar10 = lVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar11 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar10 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_e0 = lVar8;
  uStack_d8 = param_3;
  lStack_d0 = lVar3;
  pppuStack_b0 = &ppuStack_60;
  puStack_a8 = puVar11;
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
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar10 + 0x90);
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    uVar9 = *(undefined8 *)(lVar3 + 0x20);
    uVar13 = *(undefined8 *)(lVar3 + 0x38);
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar13;
    *(undefined8 *)(lVar10 + 0xa8) = uVar12;
    *(undefined8 *)(lVar10 + 0xa0) = uVar7;
    *(undefined8 *)(lVar10 + 0x98) = uVar9;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_e8 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_e8,uRam0000000003d57270), lVar3 != 0)) {
        uStack_f0 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_130,lVar3,uRam0000000003d3d2e8);
          bVar6 = false;
          while (uVar4 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_130,uRam0000000003d334f0), uVar9 = uStack_120,
                (uVar4 & 1) != 0) {
            uStack_158 = uStack_110;
            uStack_160 = uStack_118;
            uStack_148 = uStack_100;
            uStack_150 = uStack_108;
            uStack_140 = uStack_f8;
            uStack_168 = uStack_120;
            uVar7 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar4 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_e8,uVar7,0);
            if ((uVar4 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_158;
              *(undefined8 *)(lVar10 + 0x98) = uStack_160;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_148;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_150;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_140;
              bVar6 = true;
            }
            uStack_168 = uVar9;
            uVar9 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_f0,uVar9,0);
            if (!bVar6 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_158;
              *(undefined8 *)(lVar10 + 0x98) = uStack_160;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_148;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_150;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_140;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_130,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar3 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_130,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14cd5f8 | Atlas.Gameplay.Usables.ProjectileUsable.OnExitPool
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

void Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool
               (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  Atlas_Gameplay_Usables_CollidableUsable__OnExitPool();
  lVar8 = *(long *)(param_1 + 0xf8);
  lVar3 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(param_1,0);
  if (lVar3 != 0) {
    uVar9 = *(undefined8 *)(lVar3 + 0x58);
    lVar3 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(param_1,0);
    if ((lVar3 != 0) && (lVar8 != 0)) {
      uVar7 = *(undefined8 *)(lVar3 + 0x50);
      *(undefined8 *)(lVar8 + 0x10) = uVar9;
      *(undefined8 *)(lVar8 + 0x18) = uVar7;
      *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(lVar8 + 0x3c);
      if ((*(long *)(param_1 + 0xf8) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18), lVar3 != 0)) {
        uVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
        *(undefined8 *)(param_1 + 0x100) = uVar9;
        *(undefined2 *)(param_1 + 0x124) = 1;
        *(undefined1 *)(param_1 + 0x11c) = 0;
        *(undefined4 *)(param_1 + 0x120) = 0;
        if (param_2 != 0) {
          *(float *)(param_1 + 0x148) = *(float *)(param_2 + 0x8c) + 1.0;
          lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_1);
          if (lVar3 != 0) {
            bVar6 = false;
            if (*(char *)(lVar3 + 0x97) != '\0') {
              lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition
                                (param_1);
              if (lVar3 == 0) goto LAB_014cd6e8;
              bVar6 = 0 < *(int *)(lVar3 + 0x90);
            }
            *(bool *)(param_1 + 0x14c) = bVar6;
            lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_1)
            ;
            if (lVar3 != 0) {
              *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(lVar3 + 0x88);
              return;
            }
          }
        }
      }
    }
  }
LAB_014cd6e8:
  lVar3 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Usables_ProjectileUsable__OnEnterPool;
  lStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal();
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar3,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar3 + 0x48) != 0) &&
     (lVar8 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar8 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar3 + 100),*(undefined4 *)(lVar3 + 0x68),
                    *(undefined4 *)(lVar3 + 0x6c),lVar8,0);
    if ((*(long *)(lVar3 + 0x48) != 0) &&
       (lVar8 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar8 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar3 + 0x70),*(undefined4 *)(lVar3 + 0x74),
                      *(undefined4 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x7c),lVar8,0);
      if ((*(long *)(lVar3 + 0x48) != 0) &&
         (lVar8 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar8 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar3 + 0x80),*(undefined4 *)(lVar3 + 0x84),
                        *(undefined4 *)(lVar3 + 0x88),lVar8,0);
        *(undefined1 *)(lVar3 + 0x19) = 0;
        *(undefined8 *)(lVar3 + 0x98) = 0;
        *(undefined8 *)(lVar3 + 0x90) = 0;
        *(undefined8 *)(lVar3 + 0xa8) = 0;
        *(undefined8 *)(lVar3 + 0xa0) = 0;
        *(undefined8 *)(lVar3 + 0xb8) = 0;
        *(undefined8 *)(lVar3 + 0xb0) = 0;
        if (*(long *)(lVar3 + 0x48) != 0) {
          lVar8 = *(long *)(*(long *)(lVar3 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0);
          if (iVar1 != 0) {
            if (lVar8 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar8 + 0x46) = 0;
            *(undefined4 *)(lVar8 + 0x40) = 0;
            *(undefined1 *)(lVar8 + 0x44) = 0;
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
  lVar8 = auVar14._8_8_;
  lVar3 = auVar14._0_8_;
  puStack_58 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppuStack_60 = &puStack_40;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar8;
  *(undefined8 *)(lVar3 + 0x48) = param_3;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar8 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar8 = *(long *)(lVar8 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar8,0);
    if (lVar10 != 0) {
      uVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar9,uRam0000000003d572a0);
      *(undefined8 *)(lVar3 + 0x90) = uVar9;
      puVar11 = &UNK_01523aa4;
      lVar10 = lVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar11 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar10 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_e0 = lVar8;
  uStack_d8 = param_3;
  lStack_d0 = lVar3;
  pppuStack_b0 = &ppuStack_60;
  puStack_a8 = puVar11;
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
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar10 + 0x90);
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    uVar9 = *(undefined8 *)(lVar3 + 0x20);
    uVar13 = *(undefined8 *)(lVar3 + 0x38);
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar13;
    *(undefined8 *)(lVar10 + 0xa8) = uVar12;
    *(undefined8 *)(lVar10 + 0xa0) = uVar7;
    *(undefined8 *)(lVar10 + 0x98) = uVar9;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_e8 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_e8,uRam0000000003d57270), lVar3 != 0)) {
        uStack_f0 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_130,lVar3,uRam0000000003d3d2e8);
          bVar6 = false;
          while (uVar4 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_130,uRam0000000003d334f0), uVar9 = uStack_120,
                (uVar4 & 1) != 0) {
            uStack_158 = uStack_110;
            uStack_160 = uStack_118;
            uStack_148 = uStack_100;
            uStack_150 = uStack_108;
            uStack_140 = uStack_f8;
            uStack_168 = uStack_120;
            uVar7 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar4 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_e8,uVar7,0);
            if ((uVar4 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_158;
              *(undefined8 *)(lVar10 + 0x98) = uStack_160;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_148;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_150;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_140;
              bVar6 = true;
            }
            uStack_168 = uVar9;
            uVar9 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_f0,uVar9,0);
            if (!bVar6 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_158;
              *(undefined8 *)(lVar10 + 0x98) = uStack_160;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_148;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_150;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_140;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_130,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar3 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_130,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14cd6ec | Atlas.Gameplay.Usables.ProjectileUsable.OnEnterPool
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

void Atlas_Gameplay_Usables_ProjectileUsable__OnEnterPool
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  int extraout_w1;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal();
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(param_1,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                    *(undefined4 *)(param_1 + 0x6c),lVar3,0);
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                      *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar3,0);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                        *(undefined4 *)(param_1 + 0x88),lVar3,0);
        *(undefined1 *)(param_1 + 0x19) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0);
          if (iVar1 != 0) {
            if (lVar3 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar3 + 0x46) = 0;
            *(undefined4 *)(lVar3 + 0x40) = 0;
            *(undefined1 *)(lVar3 + 0x44) = 0;
          }
          if (*(long *)(param_1 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40) = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined1 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
            *(undefined2 *)(param_1 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar14 = func_0x00f78af4();
  lVar9 = auVar14._8_8_;
  lVar3 = auVar14._0_8_;
  puStack_28 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar9;
  *(undefined8 *)(lVar3 + 0x48) = param_3;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar9 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar9 = *(long *)(lVar9 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar9,0);
    if (lVar10 != 0) {
      uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar4,uRam0000000003d572a0);
      *(undefined8 *)(lVar3 + 0x90) = uVar4;
      puVar11 = &UNK_01523aa4;
      lVar10 = lVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar11 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar10 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_b0 = lVar9;
  uStack_a8 = param_3;
  lStack_a0 = lVar3;
  ppuStack_80 = &puStack_30;
  puStack_78 = puVar11;
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
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar10 + 0x90);
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar13 = *(undefined8 *)(lVar3 + 0x38);
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar13;
    *(undefined8 *)(lVar10 + 0xa8) = uVar12;
    *(undefined8 *)(lVar10 + 0xa0) = uVar6;
    *(undefined8 *)(lVar10 + 0x98) = uVar4;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_b8 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_b8,uRam0000000003d57270), lVar3 != 0)) {
        uStack_c0 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_100,lVar3,uRam0000000003d3d2e8);
          bVar8 = false;
          while (uVar5 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_100,uRam0000000003d334f0), uVar4 = uStack_f0,
                (uVar5 & 1) != 0) {
            uStack_128 = uStack_e0;
            uStack_130 = uStack_e8;
            uStack_118 = uStack_d0;
            uStack_120 = uStack_d8;
            uStack_110 = uStack_c8;
            uStack_138 = uStack_f0;
            uVar6 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
            uVar5 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_b8,uVar6,0);
            if ((uVar5 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_128;
              *(undefined8 *)(lVar10 + 0x98) = uStack_130;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_118;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_120;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_110;
              bVar8 = true;
            }
            uStack_138 = uVar4;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_c0,uVar4,0);
            if (!bVar8 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_128;
              *(undefined8 *)(lVar10 + 0x98) = uStack_130;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_118;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_120;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_110;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_100,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar3 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_100,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14cd714 | Atlas.Gameplay.Usables.ProjectileUsable.SetYMinValue
// ============================================================

void Atlas_Gameplay_Usables_ProjectileUsable__SetYMinValue
               (undefined4 param_1,long param_2,undefined1 param_3)

{
  *(undefined1 *)(param_2 + 0x11c) = param_3;
  *(undefined4 *)(param_2 + 0x120) = param_1;
  return;
}



// ============================================================
// RVA: 0x14cd720 | Atlas.Gameplay.Usables.ProjectileUsable.Use
// ============================================================

/* WARNING: Possible PIC construction at 0x014cd744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cd7cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cd748) */
/* WARNING: Removing unreachable block (ram,0x014cd750) */
/* WARNING: Removing unreachable block (ram,0x014cd758) */
/* WARNING: Removing unreachable block (ram,0x014cd794) */
/* WARNING: Removing unreachable block (ram,0x014cd7e8) */
/* WARNING: Removing unreachable block (ram,0x014cd79c) */

void Atlas_Gameplay_Usables_ProjectileUsable__Use
               (undefined1 param_1 [16],float param_2,float param_3,uint param_4,float param_5,
               float param_6,long param_7)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined1 **ppuVar10;
  undefined *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint extraout_s0;
  ulong extraout_d0;
  float fVar21;
  uint uVar22;
  undefined4 uVar23;
  float fVar24;
  ulong unaff_d8;
  float fVar25;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  float fVar26;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = &stack0xfffffffffffffff0;
  if (*(long *)(param_7 + 0x28) == 0) {
    return;
  }
  uStack_58 = 0x14cd748;
  ppuVar10 = &puStack_60;
  if ((bRam0000000003eb4b71 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b71 = 1;
  }
  uStack_dc = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f0 = 0;
  uStack_10c = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_120 = 0;
  puVar9 = &uStack_130;
  if ((*(long *)(param_7 + 0x48) != 0) &&
     (puVar2 = (undefined8 *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x48),0),
     puVar2 != (undefined8 *)0x0)) {
    /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(puVar2,0,0,0);
    lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_7);
    puVar9 = puVar2;
    if (lVar3 != 0) {
      uStack_148 = *(undefined8 *)(lVar3 + 0x88);
      uStack_150 = *(undefined8 *)(lVar3 + 0x80);
      uStack_140 = *(undefined8 *)(lVar3 + 0x90);
      uVar4 = /*Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData$$IsPrimaryThrowForward*/ func_0x015632bc(&uStack_150,0);
      if ((*(long *)(param_7 + 0x28) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_7 + 0x28) + 0x10), lVar3 != 0)) {
        lVar3 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar3,0);
        fVar21 = *(float *)(lVar3 + 0x11c);
        fVar24 = *(float *)(lVar3 + 0x120);
        fVar12 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x118),0);
        param_2 = fVar21;
        param_3 = fVar24;
        if ((*(long *)(param_7 + 0x28) != 0) &&
           ((lVar3 = *(long *)(*(long *)(param_7 + 0x28) + 0x10), lVar3 != 0 &&
            (lVar3 = *(long *)(lVar3 + 0x70), lVar3 != 0)))) {
          unaff_d11 = (ulong)(uint)fVar24;
          lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
          if ((*(long *)(param_7 + 0x28) != 0) &&
             ((lVar7 = *(long *)(*(long *)(param_7 + 0x28) + 0x18), lVar7 != 0 && (lVar3 != 0)))) {
            param_2 = *(float *)(lVar7 + 0x4c);
            param_3 = *(float *)(lVar7 + 0x50);
            fVar13 = (float)/*UnityEngine.Transform$$TransformPoint*/ func_0x03276d8c(*(undefined4 *)(lVar7 + 0x48),lVar3,0);
            if ((*(long *)(param_7 + 0x28) != 0) &&
               (lVar7 = *(long *)(*(long *)(param_7 + 0x28) + 0x18), lVar7 != 0)) {
              if ((uVar4 & 1) == 0) {
                param_2 = *(float *)(lVar7 + 0x58);
                param_3 = *(float *)(lVar7 + 0x5c);
                fVar13 = (float)/*UnityEngine.Transform$$TransformPoint*/ func_0x03276d8c(*(undefined4 *)(lVar7 + 0x54),lVar3,0);
                if ((*(long *)(param_7 + 0x28) == 0) ||
                   (lVar7 = *(long *)(*(long *)(param_7 + 0x28) + 0x18), lVar7 == 0))
                goto code_r0x014cdc7c;
                fVar12 = -fVar12;
                fVar21 = -fVar21;
                fVar24 = -fVar24;
                pfVar8 = (float *)(lVar7 + 0x58);
              }
              else {
                pfVar8 = (float *)(lVar7 + 0x4c);
              }
              fVar26 = *pfVar8;
              param_5 = param_2 - fVar21;
              param_6 = param_3 - fVar24;
              uStack_168 = 0;
              uStack_160 = 0;
              uStack_158 = 0;
              /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar13 - fVar12,param_5,param_6,fVar12,fVar21,fVar24,&uStack_168,0);
              uVar5 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(param_7 + 0x150),0);
              uStack_178 = uStack_160;
              uStack_180 = uStack_168;
              uStack_170 = uStack_158;
              /*UnityEngine.Physics$$Raycast*/ func_0x032a051c(0x3f800000,&uStack_180,&uStack_100,uVar5,0);
              uVar5 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_100,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
              fVar25 = param_2;
              fVar14 = param_3;
              if (iVar1 != 0) {
                fVar14 = (float)/*UnityEngine.RaycastHit$$get_distance*/ func_0x032a1f20(&uStack_100,0);
                fVar13 = fVar13 - fVar12 * fVar14;
                param_5 = fVar21 * fVar14;
                fVar25 = param_2 - param_5;
                fVar14 = param_3 - fVar24 * fVar14;
              }
              unaff_d10 = (ulong)(uint)fVar14;
              unaff_d9 = (ulong)(uint)fVar25;
              unaff_d8 = (ulong)(uint)fVar13;
              fVar12 = (float)/*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
              param_5 = param_5 + param_5;
              param_6 = param_6 + param_6;
              fVar13 = fVar13 + fVar12 + fVar12;
              unaff_d11 = (ulong)(uint)fVar13;
              param_2 = fVar25 + param_5;
              param_3 = fVar14 + param_6;
              param_4 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
              uStack_168 = 0;
              uStack_160 = 0;
              uStack_158 = 0;
              /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar13,&uStack_168,0);
              uVar5 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(param_7 + 0x150),0);
              uStack_198 = uStack_160;
              uStack_1a0 = uStack_168;
              uStack_190 = uStack_158;
              /*UnityEngine.Physics$$Raycast*/ func_0x032a051c(0x40000000,&uStack_1a0,&uStack_130,uVar5,0);
              uVar5 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_130,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
              if (iVar1 != 0) {
                lVar7 = /*UnityEngine.RaycastHit$$get_transform*/ func_0x032a1f30(&uStack_130,0);
                if (lVar7 == 0) goto code_r0x014cdc7c;
                /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0);
                if (fVar25 < fVar26 + param_2) {
                  unaff_d9 = (ulong)(uint)(fVar26 + param_2);
                }
              }
              plVar6 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition
                                         (param_7);
              if (plVar6 != (long *)0x0) {
                iVar1 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
                if (iVar1 == 2) {
                  if ((*(long *)(param_7 + 0x28) == 0) ||
                     (lVar7 = *(long *)(*(long *)(param_7 + 0x28) + 0x18), lVar7 == 0))
                  goto code_r0x014cdc7c;
                  uVar22 = *(uint *)(lVar7 + 100);
                  fVar14 = *(float *)(lVar7 + 0x68);
                  uVar15 = /*UnityEngine.Transform$$TransformPoint*/ func_0x03276d8c(*(undefined4 *)(lVar7 + 0x60),uVar22,fVar14,lVar3,0);
                  unaff_d8 = (ulong)uVar15;
                  unaff_d9 = (ulong)uVar22;
                }
                uVar23 = (undefined4)unaff_d9;
                /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(unaff_d8,uVar23,fVar14,puVar2,0);
                uVar16 = /*UnityEngine.Transform$$get_up*/ func_0x03275714(puVar2,0);
                uVar20 = uVar23;
                fVar12 = fVar14;
                uVar17 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
                uVar18 = /*UnityEngine.Quaternion$$FromToRotation*/ func_0x032515d8(uVar16,uVar23,fVar14,uVar17,uVar20,fVar12,0);
                uVar20 = uVar23;
                fVar12 = fVar14;
                uVar16 = uVar17;
                uVar19 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(puVar2,0);
                /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251e58(uVar18,uVar23,fVar14,uVar17,uVar19,uVar20,fVar12,uVar16,0);
                /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(puVar2,0);
                /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
                /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(puVar2,0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_r0x014cdc7c:
  puVar11 = &Atlas_Gameplay_Usables_ProjectileUsable__Use;
  lVar3 = func_0x00f78af4();
  puVar2 = &uStack_1a0;
  uVar4 = extraout_d0;
  while( true ) {
    *(ulong *)((long)puVar2 + -0x40) = unaff_d11;
    *(ulong *)((long)puVar2 + -0x38) = unaff_d10;
    *(ulong *)((long)puVar2 + -0x30) = unaff_d9;
    *(ulong *)((long)puVar2 + -0x28) = unaff_d8;
    *(long *)((long)puVar2 + -0x20) = param_7;
    *(undefined8 **)((long)puVar2 + -0x18) = puVar9;
    *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar10;
    *(undefined **)((long)puVar2 + -8) = puVar11;
    *(int *)((long)puVar2 + -0x50) = (int)uVar4;
    *(float *)((long)puVar2 + -0x4c) = param_2;
    *(float *)((long)puVar2 + -0x48) = param_3;
    Atlas_Gameplay_Usables_CollidableUsable__Use(lVar3,0);
    *(undefined4 *)(lVar3 + 0xec) = 0;
    uVar20 = /*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4((undefined1 *)((long)puVar2 + -0x50),0);
    *(undefined4 *)(lVar3 + 0xe0) = uVar20;
    *(float *)(lVar3 + 0xe4) = param_2;
    *(float *)(lVar3 + 0xe8) = param_3;
    *(undefined1 *)(lVar3 + 0x138) = 1;
    if ((*(long *)(lVar3 + 0xf8) != 0) &&
       (lVar7 = *(long *)(*(long *)(lVar3 + 0xf8) + 0x18), lVar7 != 0)) break;
    lVar7 = func_0x00f78af4();
    *(ulong *)((long)puVar2 + -0x90) = unaff_d11;
    *(ulong *)((long)puVar2 + -0x88) = (ulong)param_4;
    *(ulong *)((long)puVar2 + -0x80) = (ulong)(uint)param_5;
    *(ulong *)((long)puVar2 + -0x78) = (ulong)(uint)param_6;
    *(long *)((long)puVar2 + -0x70) = param_7;
    *(long *)((long)puVar2 + -0x68) = lVar3;
    *(undefined1 **)((long)puVar2 + -0x60) = (undefined1 *)((long)puVar2 + -0x10);
    *(undefined **)((long)puVar2 + -0x58) = &Atlas_Gameplay_Usables_ProjectileUsable__Use;
    param_5 = param_2;
    param_6 = param_3;
    param_4 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    uVar4 = (ulong)extraout_s0;
    ppuVar10 = *(undefined1 ***)((long)puVar2 + -0x60);
    puVar11 = *(undefined **)((long)puVar2 + -0x58);
    param_7 = *(long *)((long)puVar2 + -0x70);
    puVar9 = *(undefined8 **)((long)puVar2 + -0x68);
    unaff_d9 = *(ulong *)((long)puVar2 + -0x80);
    unaff_d8 = *(ulong *)((long)puVar2 + -0x78);
    unaff_d11 = *(ulong *)((long)puVar2 + -0x90);
    unaff_d10 = *(ulong *)((long)puVar2 + -0x88);
    puVar2 = (undefined8 *)((long)puVar2 + -0x50);
    lVar3 = lVar7;
  }
  /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(param_4,param_5,param_6,lVar7,0);
  return;
}



// ============================================================
// RVA: 0x14cd7ec | Atlas.Gameplay.Usables.ProjectileUsable.SetStartPosition
// ============================================================

void Atlas_Gameplay_Usables_ProjectileUsable__SetStartPosition
               (undefined1 param_1 [16],float param_2,float param_3,uint param_4,float param_5,
               float param_6,long param_7)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint extraout_s0;
  ulong extraout_d0;
  float fVar21;
  uint uVar22;
  undefined4 uVar23;
  float fVar24;
  ulong unaff_d8;
  float fVar25;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  float fVar26;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  
  puVar10 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b71 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b71 = 1;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_bc = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  puVar9 = &uStack_e0;
  if ((*(long *)(param_7 + 0x48) != 0) &&
     (puVar2 = (undefined8 *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_7 + 0x48),0),
     puVar2 != (undefined8 *)0x0)) {
    /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(puVar2,0,0,0);
    lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_7);
    puVar9 = puVar2;
    if (lVar3 != 0) {
      uStack_f8 = *(undefined8 *)(lVar3 + 0x88);
      uStack_100 = *(undefined8 *)(lVar3 + 0x80);
      uStack_f0 = *(undefined8 *)(lVar3 + 0x90);
      uVar4 = /*Atlas.Definitions.ProjectileUsableDefinition.ProjectileUsableData$$IsPrimaryThrowForward*/ func_0x015632bc(&uStack_100,0);
      if ((*(long *)(param_7 + 0x28) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_7 + 0x28) + 0x10), lVar3 != 0)) {
        lVar3 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar3,0);
        fVar21 = *(float *)(lVar3 + 0x11c);
        fVar24 = *(float *)(lVar3 + 0x120);
        fVar12 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x118),0);
        param_2 = fVar21;
        param_3 = fVar24;
        if ((*(long *)(param_7 + 0x28) != 0) &&
           ((lVar3 = *(long *)(*(long *)(param_7 + 0x28) + 0x10), lVar3 != 0 &&
            (lVar3 = *(long *)(lVar3 + 0x70), lVar3 != 0)))) {
          unaff_d11 = (ulong)(uint)fVar24;
          lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0);
          if ((*(long *)(param_7 + 0x28) != 0) &&
             ((lVar7 = *(long *)(*(long *)(param_7 + 0x28) + 0x18), lVar7 != 0 && (lVar3 != 0)))) {
            param_2 = *(float *)(lVar7 + 0x4c);
            param_3 = *(float *)(lVar7 + 0x50);
            fVar13 = (float)/*UnityEngine.Transform$$TransformPoint*/ func_0x03276d8c(*(undefined4 *)(lVar7 + 0x48),lVar3,0);
            if ((*(long *)(param_7 + 0x28) != 0) &&
               (lVar7 = *(long *)(*(long *)(param_7 + 0x28) + 0x18), lVar7 != 0)) {
              if ((uVar4 & 1) == 0) {
                param_2 = *(float *)(lVar7 + 0x58);
                param_3 = *(float *)(lVar7 + 0x5c);
                fVar13 = (float)/*UnityEngine.Transform$$TransformPoint*/ func_0x03276d8c(*(undefined4 *)(lVar7 + 0x54),lVar3,0);
                if ((*(long *)(param_7 + 0x28) == 0) ||
                   (lVar7 = *(long *)(*(long *)(param_7 + 0x28) + 0x18), lVar7 == 0))
                goto LAB_014cdc7c;
                fVar12 = -fVar12;
                fVar21 = -fVar21;
                fVar24 = -fVar24;
                pfVar8 = (float *)(lVar7 + 0x58);
              }
              else {
                pfVar8 = (float *)(lVar7 + 0x4c);
              }
              fVar26 = *pfVar8;
              param_5 = param_2 - fVar21;
              param_6 = param_3 - fVar24;
              uStack_118 = 0;
              uStack_110 = 0;
              uStack_108 = 0;
              /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar13 - fVar12,param_5,param_6,fVar12,fVar21,fVar24,&uStack_118,0);
              uVar5 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(param_7 + 0x150),0);
              uStack_128 = uStack_110;
              uStack_130 = uStack_118;
              uStack_120 = uStack_108;
              /*UnityEngine.Physics$$Raycast*/ func_0x032a051c(0x3f800000,&uStack_130,&uStack_b0,uVar5,0);
              uVar5 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_b0,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
              fVar25 = param_2;
              fVar14 = param_3;
              if (iVar1 != 0) {
                fVar14 = (float)/*UnityEngine.RaycastHit$$get_distance*/ func_0x032a1f20(&uStack_b0,0);
                fVar13 = fVar13 - fVar12 * fVar14;
                param_5 = fVar21 * fVar14;
                fVar25 = param_2 - param_5;
                fVar14 = param_3 - fVar24 * fVar14;
              }
              unaff_d10 = (ulong)(uint)fVar14;
              unaff_d9 = (ulong)(uint)fVar25;
              unaff_d8 = (ulong)(uint)fVar13;
              fVar12 = (float)/*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
              param_5 = param_5 + param_5;
              param_6 = param_6 + param_6;
              fVar13 = fVar13 + fVar12 + fVar12;
              unaff_d11 = (ulong)(uint)fVar13;
              param_2 = fVar25 + param_5;
              param_3 = fVar14 + param_6;
              param_4 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
              uStack_118 = 0;
              uStack_110 = 0;
              uStack_108 = 0;
              /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar13,&uStack_118,0);
              uVar5 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(param_7 + 0x150),0);
              uStack_148 = uStack_110;
              uStack_150 = uStack_118;
              uStack_140 = uStack_108;
              /*UnityEngine.Physics$$Raycast*/ func_0x032a051c(0x40000000,&uStack_150,&uStack_e0,uVar5,0);
              uVar5 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_e0,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
              if (iVar1 != 0) {
                lVar7 = /*UnityEngine.RaycastHit$$get_transform*/ func_0x032a1f30(&uStack_e0,0);
                if (lVar7 == 0) goto LAB_014cdc7c;
                /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0);
                if (fVar25 < fVar26 + param_2) {
                  unaff_d9 = (ulong)(uint)(fVar26 + param_2);
                }
              }
              plVar6 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition
                                         (param_7);
              if (plVar6 != (long *)0x0) {
                iVar1 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
                if (iVar1 == 2) {
                  if ((*(long *)(param_7 + 0x28) == 0) ||
                     (lVar7 = *(long *)(*(long *)(param_7 + 0x28) + 0x18), lVar7 == 0))
                  goto LAB_014cdc7c;
                  uVar22 = *(uint *)(lVar7 + 100);
                  fVar14 = *(float *)(lVar7 + 0x68);
                  uVar15 = /*UnityEngine.Transform$$TransformPoint*/ func_0x03276d8c(*(undefined4 *)(lVar7 + 0x60),uVar22,fVar14,lVar3,0);
                  unaff_d8 = (ulong)uVar15;
                  unaff_d9 = (ulong)uVar22;
                }
                uVar23 = (undefined4)unaff_d9;
                /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(unaff_d8,uVar23,fVar14,puVar2,0);
                uVar16 = /*UnityEngine.Transform$$get_up*/ func_0x03275714(puVar2,0);
                uVar20 = uVar23;
                fVar12 = fVar14;
                uVar17 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
                uVar18 = /*UnityEngine.Quaternion$$FromToRotation*/ func_0x032515d8(uVar16,uVar23,fVar14,uVar17,uVar20,fVar12,0);
                uVar20 = uVar23;
                fVar12 = fVar14;
                uVar16 = uVar17;
                uVar19 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(puVar2,0);
                /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251e58(uVar18,uVar23,fVar14,uVar17,uVar19,uVar20,fVar12,uVar16,0);
                /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(puVar2,0);
                /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
                /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(puVar2,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_014cdc7c:
  puVar11 = &Atlas_Gameplay_Usables_ProjectileUsable__Use;
  lVar3 = func_0x00f78af4();
  puVar2 = &uStack_150;
  uVar4 = extraout_d0;
  while( true ) {
    *(ulong *)((long)puVar2 + -0x40) = unaff_d11;
    *(ulong *)((long)puVar2 + -0x38) = unaff_d10;
    *(ulong *)((long)puVar2 + -0x30) = unaff_d9;
    *(ulong *)((long)puVar2 + -0x28) = unaff_d8;
    *(long *)((long)puVar2 + -0x20) = param_7;
    *(undefined8 **)((long)puVar2 + -0x18) = puVar9;
    *(undefined1 **)((long)puVar2 + -0x10) = puVar10;
    *(undefined **)((long)puVar2 + -8) = puVar11;
    *(int *)((long)puVar2 + -0x50) = (int)uVar4;
    *(float *)((long)puVar2 + -0x4c) = param_2;
    *(float *)((long)puVar2 + -0x48) = param_3;
    Atlas_Gameplay_Usables_CollidableUsable__Use(lVar3,0);
    *(undefined4 *)(lVar3 + 0xec) = 0;
    uVar20 = /*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4((undefined1 *)((long)puVar2 + -0x50),0);
    *(undefined4 *)(lVar3 + 0xe0) = uVar20;
    *(float *)(lVar3 + 0xe4) = param_2;
    *(float *)(lVar3 + 0xe8) = param_3;
    *(undefined1 *)(lVar3 + 0x138) = 1;
    if ((*(long *)(lVar3 + 0xf8) != 0) &&
       (lVar7 = *(long *)(*(long *)(lVar3 + 0xf8) + 0x18), lVar7 != 0)) break;
    lVar7 = func_0x00f78af4();
    *(ulong *)((long)puVar2 + -0x90) = unaff_d11;
    *(ulong *)((long)puVar2 + -0x88) = (ulong)param_4;
    *(ulong *)((long)puVar2 + -0x80) = (ulong)(uint)param_5;
    *(ulong *)((long)puVar2 + -0x78) = (ulong)(uint)param_6;
    *(long *)((long)puVar2 + -0x70) = param_7;
    *(long *)((long)puVar2 + -0x68) = lVar3;
    *(undefined1 **)((long)puVar2 + -0x60) = (undefined1 *)((long)puVar2 + -0x10);
    *(undefined **)((long)puVar2 + -0x58) = &Atlas_Gameplay_Usables_ProjectileUsable__Use;
    param_5 = param_2;
    param_6 = param_3;
    param_4 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    uVar4 = (ulong)extraout_s0;
    puVar10 = *(undefined1 **)((long)puVar2 + -0x60);
    puVar11 = *(undefined **)((long)puVar2 + -0x58);
    param_7 = *(long *)((long)puVar2 + -0x70);
    puVar9 = *(undefined8 **)((long)puVar2 + -0x68);
    unaff_d9 = *(ulong *)((long)puVar2 + -0x80);
    unaff_d8 = *(ulong *)((long)puVar2 + -0x78);
    unaff_d11 = *(ulong *)((long)puVar2 + -0x90);
    unaff_d10 = *(ulong *)((long)puVar2 + -0x88);
    puVar2 = (undefined8 *)((long)puVar2 + -0x50);
    lVar3 = lVar7;
  }
  /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(param_4,param_5,param_6,lVar7,0);
  return;
}



// ============================================================
// RVA: 0x14cdc80 | Atlas.Gameplay.Usables.ProjectileUsable.Use
// ============================================================

void Atlas_Gameplay_Usables_ProjectileUsable__Use
               (undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               long param_7)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar2;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d10;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined4 *)((long)register0x00000008 + -0x50) = param_1;
    *(uint *)((long)register0x00000008 + -0x4c) = param_2;
    *(uint *)((long)register0x00000008 + -0x48) = param_3;
    Atlas_Gameplay_Usables_CollidableUsable__Use(param_7,0);
    *(undefined4 *)(param_7 + 0xec) = 0;
    uVar2 = /*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4((undefined1 *)((long)register0x00000008 + -0x50),0);
    *(undefined4 *)(param_7 + 0xe0) = uVar2;
    *(uint *)(param_7 + 0xe4) = param_2;
    *(uint *)(param_7 + 0xe8) = param_3;
    *(undefined1 *)(param_7 + 0x138) = 1;
    if ((*(long *)(param_7 + 0xf8) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_7 + 0xf8) + 0x18), lVar1 != 0)) break;
    lVar1 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x88) = (ulong)param_4;
    *(ulong *)((long)register0x00000008 + -0x80) = (ulong)param_5;
    *(ulong *)((long)register0x00000008 + -0x78) = (ulong)param_6;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x68) = param_7;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x58) =
         &Atlas_Gameplay_Usables_ProjectileUsable__Use;
    param_5 = param_2;
    param_6 = param_3;
    param_4 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_d10 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_7 = lVar1;
    param_1 = extraout_s0;
  }
  /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(param_4,param_5,param_6,lVar1,0);
  return;
}



// ============================================================
// RVA: 0x14cdd18 | Atlas.Gameplay.Usables.ProjectileUsable.Use
// ============================================================

void Atlas_Gameplay_Usables_ProjectileUsable__Use
               (undefined4 param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar3;
  undefined4 extraout_s0;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 unaff_d11;
  
  while( true ) {
    lVar2 = param_4;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar5 = param_2;
    uVar6 = param_3;
    uVar4 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_d8 = (ulong)uVar6;
    unaff_d9 = (ulong)uVar5;
    unaff_d10 = (ulong)uVar4;
    *(undefined4 *)((long)register0x00000008 + -0x50) = param_1;
    *(uint *)((long)register0x00000008 + -0x4c) = param_2;
    *(uint *)((long)register0x00000008 + -0x48) = param_3;
    Atlas_Gameplay_Usables_CollidableUsable__Use(lVar2,0);
    *(undefined4 *)(lVar2 + 0xec) = 0;
    uVar3 = /*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4((undefined1 *)((long)register0x00000008 + -0x50),0);
    *(undefined4 *)(lVar2 + 0xe0) = uVar3;
    *(uint *)(lVar2 + 0xe4) = param_2;
    *(uint *)(lVar2 + 0xe8) = param_3;
    *(undefined1 *)(lVar2 + 0x138) = 1;
    if ((*(long *)(lVar2 + 0xf8) != 0) &&
       (lVar1 = *(long *)(*(long *)(lVar2 + 0xf8) + 0x18), lVar1 != 0)) break;
    unaff_x30 = Atlas_Gameplay_Usables_ProjectileUsable__Use;
    param_4 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x19 = lVar2;
    param_1 = extraout_s0;
  }
  /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(uVar4,uVar5,uVar6,lVar1,0);
  return;
}



// ============================================================
// RVA: 0x14cdd74 | Atlas.Gameplay.Usables.ProjectileUsable.FixedUpdateGameplay
// ============================================================

/* WARNING: Possible PIC construction at 0x014ce280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ce59c) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce5b4) */
/* WARNING: Removing unreachable block (ram,0x014ce5bc) */
/* WARNING: Removing unreachable block (ram,0x014ce340) */
/* WARNING: Removing unreachable block (ram,0x032a304c) */
/* WARNING: Removing unreachable block (ram,0x032a3074) */
/* WARNING: Removing unreachable block (ram,0x032a3088) */
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

long * Atlas_Gameplay_Usables_ProjectileUsable__FixedUpdateGameplay
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long *param_5,long *param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  int extraout_w1;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *******pppppppuVar13;
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
  undefined1 extraout_b0_08;
  undefined1 extraout_b0_09;
  undefined1 extraout_b0_10;
  undefined1 extraout_b0_11;
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
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  long lStack_280;
  long *plStack_278;
  undefined8 *******pppppppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined1 *******pppppppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long lStack_220;
  long *plStack_218;
  undefined1 ******ppppppuStack_210;
  undefined *puStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined4 uStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  undefined4 uStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined4 uStack_1d8;
  undefined1 *****pppppuStack_170;
  undefined *puStack_168;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  plVar2 = param_5;
  if ((char)param_5[0x27] != '\0') {
    plVar2 = (long *)/*Atlas.Gameplay.Usables.ProjectileUsable$$StartUsedPhysics*/ func_0x014cddc4(param_5,param_6);
  }
  if ((char)param_5[3] == '\0') {
    return plVar2;
  }
  if ((bRam0000000003eb4b7b & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7b = 1;
  }
  plVar2 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_5,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  if (param_6 != (long *)0x0) {
    lVar8 = *param_6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto code_r0x014ce014;
        }
        piVar10 = piVar10 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(param_6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
code_r0x014ce014:
    (*(code *)*puVar3)(param_6,puVar3[1]);
    if ((0.0 <= *(float *)(param_5 + 0x1b)) &&
       (fVar15 = *(float *)(param_5 + 0x1b) -
                 (float)CONCAT13(extraout_var_25,
                                 CONCAT12(extraout_var_12,CONCAT11(extraout_var,extraout_b0))),
       *(float *)(param_5 + 0x1b) = fVar15, fVar15 < 0.0)) {
      *(undefined4 *)(param_5 + 0x1b) = 0xbf800000;
    }
    fVar15 = *(float *)((long)param_5 + 0xdc);
    if ((0.0 <= fVar15) &&
       (fVar17 = fVar15 - (float)CONCAT13(extraout_var_25,
                                          CONCAT12(extraout_var_12,
                                                   CONCAT11(extraout_var,extraout_b0))),
       *(float *)((long)param_5 + 0xdc) = fVar17, fVar17 < 0.0)) {
      *(undefined4 *)((long)param_5 + 0xdc) = 0xbf800000;
    }
    param_2 = fVar15;
    if (param_5[0x1f] != 0) {
      /*ProjectilePhysics$$FixedUpdate*/ func_0x014ccbd4(param_5[0x1f],param_6);
      /*Atlas.Gameplay.Usables.ProjectileUsable$$UpdateVelocity*/ func_0x014cf9c4(param_5,*(undefined1 *)((long)param_5 + 0x124));
      if (*(char *)((long)param_5 + 0x125) == '\0') {
        (**(code **)(*param_5 + 0x3f8))(param_5,*(undefined8 *)(*param_5 + 0x400));
      }
      if ((char)param_5[0x1e] == '\0') {
        /*Atlas.Gameplay.Usables.ProjectileUsable$$HandleExpectedMovement*/ func_0x014cfa60(param_5);
      }
      param_2 = fVar15;
      if ((param_5[0x1f] != 0) && (lVar8 = *(long *)(param_5[0x1f] + 0x18), lVar8 != 0)) {
        plVar2 = (long *)/*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar8,0);
        *(uint *)(param_5 + 0x28) =
             CONCAT13(extraout_var_26,
                      CONCAT12(extraout_var_13,CONCAT11(extraout_var_00,extraout_b0_00)));
        *(float *)((long)param_5 + 0x144) = param_3;
        if (*(char *)((long)param_5 + 0x11c) == '\0') {
          return plVar2;
        }
        param_2 = fVar15;
        if ((param_5[0x1f] != 0) && (lVar8 = *(long *)(param_5[0x1f] + 0x18), lVar8 != 0)) {
          unaff_d9 = (ulong)CONCAT13(extraout_var_26,
                                     CONCAT12(extraout_var_13,
                                              CONCAT11(extraout_var_00,extraout_b0_00)));
          unaff_d8 = (ulong)(uint)param_3;
          plVar2 = (long *)/*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar8,0);
          param_2 = *(float *)(param_5 + 0x24);
          if (param_2 <= fVar15) {
            return plVar2;
          }
          if ((param_5[0x1f] != 0) && (lVar8 = *(long *)(param_5[0x1f] + 0x18), lVar8 != 0)) {
            if (pcRam0000000003ec2928 == (code *)0x0) {
              pcRam0000000003ec2928 =
                   (code *)func_0x00f789d4("UnityEngine.Rigidbody::set_position_Injected(UnityEngine.Vector3&)"
                                           ,0);
            }
            plVar2 = (long *)(*pcRam0000000003ec2928)(lVar8,&stack0xffffffffffffffd0);
            return plVar2;
          }
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_48 = &Atlas_Gameplay_Usables_ProjectileUsable__PreFixedUpdate;
  plStack_60 = param_6;
  plStack_58 = param_5;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b6e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b6e = 1;
  }
  if (*(long *)(lVar8 + 0xf8) != 0) {
    lVar11 = *(long *)(*(long *)(lVar8 + 0xf8) + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar11,0,0);
    if (((ulong)plVar2 & 1) != 0) {
      return plVar2;
    }
    if (lVar11 != 0) {
      /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar11,0);
      *(uint *)(lVar8 + 0x164) =
           CONCAT13(extraout_var_27,
                    CONCAT12(extraout_var_14,CONCAT11(extraout_var_01,extraout_b0_01)));
      *(float *)(lVar8 + 0x168) = param_2;
      *(float *)(lVar8 + 0x16c) = param_3;
      /*UnityEngine.Rigidbody$$get_angularVelocity*/ func_0x032a224c(lVar11,0);
      *(uint *)(lVar8 + 0x170) =
           CONCAT13(extraout_var_28,
                    CONCAT12(extraout_var_15,CONCAT11(extraout_var_02,extraout_b0_02)));
      *(float *)(lVar8 + 0x174) = param_2;
      *(float *)(lVar8 + 0x178) = param_3;
      /*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar11,0);
      *(uint *)(lVar8 + 0x17c) =
           CONCAT13(extraout_var_29,
                    CONCAT12(extraout_var_16,CONCAT11(extraout_var_03,extraout_b0_03)));
      *(float *)(lVar8 + 0x180) = param_2;
      *(float *)(lVar8 + 0x184) = param_3;
      plVar2 = (long *)/*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(lVar11,0);
      *(uint *)(lVar8 + 0x188) =
           CONCAT13(extraout_var_30,
                    CONCAT12(extraout_var_17,CONCAT11(extraout_var_04,extraout_b0_04)));
      *(float *)(lVar8 + 0x18c) = param_2;
      *(float *)(lVar8 + 400) = param_3;
      *(undefined4 *)(lVar8 + 0x194) = param_4;
      return plVar2;
    }
  }
  auVar19 = func_0x00f78af4();
  uStack_b0 = auVar19._8_8_;
  lVar8 = auVar19._0_8_;
  puStack_68 = &Atlas_Gameplay_Usables_ProjectileUsable__FixedUpdate;
  pppuStack_a0 = &ppuStack_70;
  ppuStack_70 = &puStack_50;
  if ((bRam0000000003eb4b6f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b6f = 1;
  }
  uStack_c0 = 0x3eb4000;
  uStack_b8 = 0x3d23990;
  puStack_98 = &UNK_014ce284;
  if ((bRam0000000003eb4b72 & 1) == 0) {
    lStack_a8 = lVar8;
    func_0x00f78a20(0x3d23990);
    auVar19._8_8_ = uStack_b0;
    auVar19._0_8_ = lStack_a8;
    bRam0000000003eb4b72 = 1;
  }
  uStack_b0 = auVar19._8_8_;
  lStack_a8 = auVar19._0_8_;
  uVar12 = *(undefined8 *)(lVar8 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar19._8_8_ = uStack_b0;
    auVar19._0_8_ = lStack_a8;
  }
  uStack_b0 = auVar19._8_8_;
  lStack_a8 = auVar19._0_8_;
  plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  lVar8 = *(long *)(lVar8 + 200);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x44) == '\0') {
      return plVar2;
    }
    *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(lVar8 + 0x48);
    return plVar2;
  }
  auVar20 = func_0x00f78af4();
  plVar4 = auVar20._8_8_;
  plVar2 = auVar20._0_8_;
  puStack_c8 = &Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate;
  uStack_110 = unaff_d9;
  uStack_108 = unaff_d8;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  if ((*(char *)((long)plVar2 + 300) == '\0') || ((char)plVar2[0xc] != '\0')) {
code_r0x014ce558:
    lVar8 = plVar2[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar2 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
    puVar14 = &UNK_014ce59c;
  }
  else {
    if (plVar4 != (long *)0x0) {
      fVar15 = *(float *)(plVar2 + 0x2c);
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce520;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce520:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      fVar15 = fVar15 + (float)CONCAT13(extraout_var_31,
                                        CONCAT12(extraout_var_18,
                                                 CONCAT11(extraout_var_05,extraout_b0_05)));
      *(float *)(plVar2 + 0x2c) = fVar15;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar15) {
        *(undefined4 *)(plVar2 + 0x2c) = 0;
        uVar6 = 0;
        goto code_r0x01523e20;
      }
      goto code_r0x014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar8 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_128,uRam0000000003d328c8);
      if (lVar8 == 0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
        return plVar2;
      }
      func_0x00f78ac0(lVar8,0);
    }
    puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar20 = __Unwind_Resume();
  }
  plVar4 = auVar20._8_8_;
  plVar2 = auVar20._0_8_;
  lVar8 = 0x3eb4000;
  pppppuStack_170 = &ppppuStack_d0;
  puStack_168 = puVar14;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar2[0x19] != 0) {
    plVar5 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar2[0x19],0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if (plVar4 != (long *)0x0) {
      lVar8 = plVar2[0x19];
      lVar11 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((plVar2[0x1f] != 0) && (lVar11 = *(long *)(plVar2[0x1f] + 0x18), lVar11 != 0)) {
        lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0);
        if (lVar11 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar11,0);
          if ((plVar2[0x1f] != 0) && (lVar11 = *(long *)(plVar2[0x1f] + 0x18), lVar11 != 0)) {
            fVar15 = param_2;
            fVar17 = param_3;
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar11,0);
            if ((plVar2[0x1f] != 0) && (lVar11 = *(long *)(plVar2[0x1f] + 0x18), lVar11 != 0)) {
              fVar16 = fVar15;
              fVar18 = fVar17;
              lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0);
              if ((lVar11 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar11,0), lVar8 != 0)) {
                uStack_1e4 = CONCAT13(extraout_var_35,
                                      CONCAT12(extraout_var_22,
                                               CONCAT11(extraout_var_09,extraout_b0_09)));
                uStack_200 = CONCAT13(extraout_var_32,
                                      CONCAT12(extraout_var_19,
                                               CONCAT11(extraout_var_06,extraout_b0_06)));
                uStack_1fc = CONCAT13(extraout_var_33,
                                      CONCAT12(extraout_var_20,
                                               CONCAT11(extraout_var_07,extraout_b0_07)));
                fStack_1f8 = param_2;
                fStack_1f4 = param_3;
                uStack_1f0 = CONCAT13(extraout_var_34,
                                      CONCAT12(extraout_var_21,
                                               CONCAT11(extraout_var_08,extraout_b0_08)));
                fStack_1ec = fVar15;
                fStack_1e8 = fVar17;
                fStack_1e0 = fVar16;
                fStack_1dc = fVar18;
                uStack_1d8 = param_4;
                /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar8,&uStack_200,0);
                plVar5 = (long *)plVar2[0x19];
                if (plVar5 != (long *)0x0) {
                  if (*(char *)((long)plVar5 + 0x44) != '\0') {
                    return plVar5;
                  }
                  plVar5 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar5,0);
                  if (*(char *)((long)plVar2 + 0x15c) == '\0') {
                    if (((float)CONCAT13(extraout_var_36,
                                         CONCAT12(extraout_var_23,
                                                  CONCAT11(extraout_var_10,extraout_b0_10))) ==
                         _UNK_033f7d80 ||
                         (float)CONCAT13(extraout_var_36,
                                         CONCAT12(extraout_var_23,
                                                  CONCAT11(extraout_var_10,extraout_b0_10))) <
                         _UNK_033f7d80) && (fVar18 <= _UNK_033f7d80)) {
                      return plVar5;
                    }
                    *(undefined1 *)((long)plVar2 + 0x15c) = 1;
                    return plVar5;
                  }
                  if (((((float)CONCAT13(extraout_var_36,
                                         CONCAT12(extraout_var_23,
                                                  CONCAT11(extraout_var_10,extraout_b0_10))) <
                         _UNK_033f7d80) && (fVar16 < _UNK_033f7d80)) && (fVar18 < _UNK_033f7d80)) &&
                     (*(char *)((long)plVar2 + 0x12d) != '\0')) {
                    fVar15 = *(float *)(plVar2 + 0x2b);
                    plVar4 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                    fVar15 = fVar15 + (float)CONCAT13(extraout_var_37,
                                                      CONCAT12(extraout_var_24,
                                                               CONCAT11(extraout_var_11,
                                                                        extraout_b0_11)));
                    *(float *)(plVar2 + 0x2b) = fVar15;
                    if (fVar15 < _UNK_033f83ec) {
                      return plVar4;
                    }
code_r0x014ce940:
                    plVar2 = (long *)(**(code **)(*plVar2 + 0x228))
                                               (plVar2,*(undefined8 *)(*plVar2 + 0x230));
                    return plVar2;
                  }
                  if (plVar2[0x19] != 0) {
                    plVar4 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar2[0x19],0);
                    if ((int)plVar4 == 0) {
                      *(undefined4 *)(plVar2 + 0x2b) = 0;
                      return plVar4;
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
  uStack_230 = 0x3d23990;
  puStack_208 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  lStack_220 = lVar8;
  ppppppuStack_210 = &pppppuStack_170;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    plStack_228 = plVar4;
    plStack_218 = plVar2;
    func_0x00f78a20(0x3d23990);
    auVar20._8_8_ = plStack_228;
    auVar20._0_8_ = plStack_218;
    bRam0000000003eb4b76 = 1;
  }
  plStack_228 = auVar20._8_8_;
  plStack_218 = auVar20._0_8_;
  uVar12 = *(undefined8 *)(lVar11 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar20._8_8_ = plStack_228;
    auVar20._0_8_ = plStack_218;
  }
  plStack_228 = auVar20._8_8_;
  plStack_218 = auVar20._0_8_;
  uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if ((uVar9 & 1) == 0) {
    lVar8 = *(long *)(lVar11 + 200);
    if (lVar8 == 0) {
      plVar4 = (long *)func_0x00f78af4();
      uStack_260 = 0x3d23990;
      uStack_258 = 0x3d23990;
      puStack_238 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      uStack_250 = uVar12;
      lStack_248 = lVar11;
      pppppppuStack_240 = &ppppppuStack_210;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar8 = plVar4[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
      uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0);
      if ((uVar9 & 1) == 0) {
        lVar11 = plVar4[0x19];
        if (lVar11 == 0) {
          plVar2 = (long *)func_0x00f78af4();
          plVar1 = &lStack_280;
          puStack_268 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar13 = &pppppppuStack_270;
          lStack_280 = lVar8;
          plStack_278 = plVar4;
          pppppppuStack_270 = &pppppppuStack_240;
          plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar2,0);
          if (((ulong)plVar4 & 1) == 0) {
            plVar4 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar2,0);
            if ((plVar4 == (long *)0x0) || (plVar4[0x18] == 0)) {
              puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar21 = func_0x00f78af4();
code_r0x014ceb60:
              plVar4 = auVar21._0_8_;
              *(long *)((long)plVar1 + -0x20) = lVar8;
              *(long **)((long)plVar1 + -0x18) = plVar2;
              *(undefined8 ********)((long)plVar1 + -0x10) = pppppppuVar13;
              *(undefined **)((long)plVar1 + -8) = puVar14;
              if ((*(char *)((long)plVar4 + 300) != '\0') == uVar7) {
                return plVar4;
              }
              if (auVar21._8_4_ != 0) {
                (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
              }
              *(char *)((long)plVar4 + 300) = (char)uVar7;
              if (((plVar4[9] != 0) && (lVar8 = *(long *)(plVar4[9] + 0x28), lVar8 != 0)) &&
                 (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar8 != 0)) {
                *(undefined8 *)((long)plVar1 + -0x30) = 0x3d23990;
                *(undefined8 *)((long)plVar1 + -0x28) = 0x3d23990;
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
                plVar2 = (long *)(*pcRam0000000003ebf4c0)(lVar8,uVar7 ^ 1);
                return plVar2;
              }
              plVar2 = (long *)func_0x00f78af4();
              return plVar2;
            }
            if (*(char *)(plVar4[0x18] + 0x50) == '\0') {
              auVar21._8_4_ = 1;
              auVar21._0_8_ = plVar2;
              uVar7 = 1;
              plVar1 = &uStack_260;
              plVar2 = plStack_278;
              lVar8 = lStack_280;
              pppppppuVar13 = pppppppuStack_270;
              puVar14 = puStack_268;
              goto code_r0x014ceb60;
            }
          }
          if ((char)plVar2[0xc] != '\0') {
            return plVar4;
          }
          uVar6 = 1;
code_r0x01523e20:
          *(undefined1 *)(plVar2 + 0xc) = 1;
          *(undefined1 *)((long)plVar2 + 0x61) = uVar6;
          return plVar2;
        }
        if (*(char *)(lVar11 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar11 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar4 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar8 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar8 + 0x28) >> ((ulong)*(uint *)(lVar11 + 0x198) & 0x3f)
                             & 0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14cddc4 | Atlas.Gameplay.Usables.ProjectileUsable.StartUsedPhysics
// ============================================================

/* WARNING: Possible PIC construction at 0x014ce280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ce59c) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce5b4) */
/* WARNING: Removing unreachable block (ram,0x014ce5bc) */
/* WARNING: Removing unreachable block (ram,0x014ce340) */
/* WARNING: Removing unreachable block (ram,0x032a304c) */
/* WARNING: Removing unreachable block (ram,0x032a3074) */
/* WARNING: Removing unreachable block (ram,0x032a3088) */
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

long * Atlas_Gameplay_Usables_ProjectileUsable__StartUsedPhysics
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long param_5,long *param_6)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int extraout_w1;
  undefined1 uVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 *******pppppppuVar12;
  undefined *puVar13;
  float fVar14;
  undefined4 uVar15;
  float extraout_s0;
  uint extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float extraout_s0_02;
  float extraout_s0_03;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  long lStack_2d0;
  long *plStack_2c8;
  undefined8 *******pppppppuStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 *******pppppppuStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  long lStack_270;
  long *plStack_268;
  undefined1 *******pppppppuStack_260;
  undefined *puStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  float fStack_244;
  undefined4 uStack_240;
  float fStack_23c;
  float fStack_238;
  undefined4 uStack_234;
  float fStack_230;
  float fStack_22c;
  undefined4 uStack_228;
  undefined1 ******ppppppuStack_1c0;
  undefined *puStack_1b8;
  undefined4 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 *****pppppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb4b7a & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7a = 1;
  }
  lVar2 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_5);
  if (lVar2 != 0) {
    unaff_d8 = (ulong)*(uint *)(lVar2 + 0x80);
    if (*(long *)(param_5 + 0x28) != 0) {
      lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0x10);
      if (lVar2 == 0) goto LAB_014cdf68;
      lVar2 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar2,0);
      if (*(char *)(lVar2 + 0x3f) != '\0') {
        lVar2 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_5);
        if (lVar2 == 0) goto LAB_014cdf68;
        unaff_d8 = (ulong)*(uint *)(lVar2 + 0x84);
      }
    }
    if ((*(long *)(param_5 + 0xf8) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_5 + 0xf8) + 0x18), lVar2 != 0)) {
      /*UnityEngine.Rigidbody$$set_collisionDetectionMode*/ func_0x032a28b4(lVar2,1,0);
      /*Atlas.Gameplay.Usables.ProjectileUsable$$SetFreeFall*/ func_0x014cf408(param_5,1);
      if (*(long *)(param_5 + 0xf8) != 0) {
        lVar2 = *(long *)(*(long *)(param_5 + 0xf8) + 0x18);
        fVar14 = (float)/*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
        if (lVar2 != 0) {
          fVar20 = (float)unaff_d8;
          param_3 = fVar20 * param_3;
          param_2 = fVar20 * param_2;
          /*UnityEngine.Rigidbody$$AddForce*/ func_0x032a3a78(fVar20 * fVar14,lVar2,1,0);
          *(undefined1 *)(param_5 + 0x138) = 0;
          *(undefined8 *)(param_5 + 0x108) = 0;
          *(undefined8 *)(param_5 + 0x110) = 0;
          *(undefined4 *)(param_5 + 0x118) = 0;
          if (((*(long *)(param_5 + 0xf8) != 0) &&
              (lVar2 = *(long *)(*(long *)(param_5 + 0xf8) + 0x18), lVar2 != 0)) &&
             (uVar15 = /*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar2,0), param_6 != (long *)0x0)) {
            fVar14 = *(float *)(param_5 + 0x128);
            lVar2 = *param_6;
            uVar9 = (ulong)*(ushort *)(lVar2 + 0x12a);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                  puVar3 = (undefined8 *)(lVar2 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                  goto LAB_014cdf2c;
                }
                piVar10 = piVar10 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)func_0x00fac1f0(param_6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
LAB_014cdf2c:
            plVar4 = (long *)(*(code *)*puVar3)(param_6,puVar3[1]);
            *(undefined4 *)(param_5 + 0x140) = uVar15;
            *(float *)(param_5 + 0x144) = param_3 + fVar14 * extraout_s0;
            uVar19 = NEON_fmov(0xbf800000,4);
            *(undefined8 *)(param_5 + 0xd8) = uVar19;
            return plVar4;
          }
        }
      }
    }
  }
LAB_014cdf68:
  auVar23 = func_0x00f78af4();
  plVar6 = auVar23._8_8_;
  plVar4 = auVar23._0_8_;
  puStack_58 = &Atlas_Gameplay_Usables_ProjectileUsable__PhysicsUpdate;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b7b & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7b = 1;
  }
  plVar5 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar4,0);
  if (((ulong)plVar5 & 1) != 0) {
    return plVar5;
  }
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto code_r0x014ce014;
        }
        piVar10 = piVar10 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
code_r0x014ce014:
    fVar14 = (float)(*(code *)*puVar3)(plVar6,puVar3[1]);
    if ((0.0 <= *(float *)(plVar4 + 0x1b)) &&
       (fVar20 = *(float *)(plVar4 + 0x1b) - fVar14, *(float *)(plVar4 + 0x1b) = fVar20,
       fVar20 < 0.0)) {
      *(undefined4 *)(plVar4 + 0x1b) = 0xbf800000;
    }
    fVar20 = *(float *)((long)plVar4 + 0xdc);
    if ((0.0 <= fVar20) &&
       (*(float *)((long)plVar4 + 0xdc) = fVar20 - fVar14, fVar20 - fVar14 < 0.0)) {
      *(undefined4 *)((long)plVar4 + 0xdc) = 0xbf800000;
    }
    param_2 = fVar20;
    if (plVar4[0x1f] != 0) {
      /*ProjectilePhysics$$FixedUpdate*/ func_0x014ccbd4(plVar4[0x1f],plVar6);
      /*Atlas.Gameplay.Usables.ProjectileUsable$$UpdateVelocity*/ func_0x014cf9c4(plVar4,*(undefined1 *)((long)plVar4 + 0x124));
      if (*(char *)((long)plVar4 + 0x125) == '\0') {
        (**(code **)(*plVar4 + 0x3f8))(plVar4,*(undefined8 *)(*plVar4 + 0x400));
      }
      if ((char)plVar4[0x1e] == '\0') {
        /*Atlas.Gameplay.Usables.ProjectileUsable$$HandleExpectedMovement*/ func_0x014cfa60(plVar4);
      }
      param_2 = fVar20;
      if ((plVar4[0x1f] != 0) && (lVar2 = *(long *)(plVar4[0x1f] + 0x18), lVar2 != 0)) {
        plVar5 = (long *)/*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar2,0);
        *(uint *)(plVar4 + 0x28) = extraout_s0_00;
        *(float *)((long)plVar4 + 0x144) = param_3;
        if (*(char *)((long)plVar4 + 0x11c) == '\0') {
          return plVar5;
        }
        param_2 = fVar20;
        if ((plVar4[0x1f] != 0) && (lVar2 = *(long *)(plVar4[0x1f] + 0x18), lVar2 != 0)) {
          unaff_d9 = (ulong)extraout_s0_00;
          unaff_d8 = (ulong)(uint)param_3;
          plVar5 = (long *)/*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar2,0);
          param_2 = *(float *)(plVar4 + 0x24);
          if (param_2 <= fVar20) {
            return plVar5;
          }
          if ((plVar4[0x1f] != 0) && (lVar2 = *(long *)(plVar4[0x1f] + 0x18), lVar2 != 0)) {
            if (pcRam0000000003ec2928 == (code *)0x0) {
              pcRam0000000003ec2928 =
                   (code *)func_0x00f789d4("UnityEngine.Rigidbody::set_position_Injected(UnityEngine.Vector3&)"
                                           ,0);
            }
            plVar4 = (long *)(*pcRam0000000003ec2928)(lVar2,&stack0xffffffffffffff80);
            return plVar4;
          }
        }
      }
    }
  }
  lVar2 = func_0x00f78af4();
  puStack_98 = &Atlas_Gameplay_Usables_ProjectileUsable__PreFixedUpdate;
  ppuStack_a0 = &puStack_60;
  if ((bRam0000000003eb4b6e & 1) == 0) {
    plStack_b0 = plVar6;
    plStack_a8 = plVar4;
    func_0x00f78a20(0x3d23990);
    auVar23._8_8_ = plStack_b0;
    auVar23._0_8_ = plStack_a8;
    bRam0000000003eb4b6e = 1;
  }
  plStack_b0 = auVar23._8_8_;
  plStack_a8 = auVar23._0_8_;
  if (*(long *)(lVar2 + 0xf8) != 0) {
    lVar11 = *(long *)(*(long *)(lVar2 + 0xf8) + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
      auVar23._8_8_ = plStack_b0;
      auVar23._0_8_ = plStack_a8;
    }
    plStack_b0 = auVar23._8_8_;
    plStack_a8 = auVar23._0_8_;
    plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar11,0,0);
    auVar23._8_8_ = plStack_b0;
    auVar23._0_8_ = plStack_a8;
    if (((ulong)plVar4 & 1) != 0) {
      return plVar4;
    }
    if (lVar11 != 0) {
      uVar15 = /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar11,0);
      *(undefined4 *)(lVar2 + 0x164) = uVar15;
      *(float *)(lVar2 + 0x168) = param_2;
      *(float *)(lVar2 + 0x16c) = param_3;
      uVar15 = /*UnityEngine.Rigidbody$$get_angularVelocity*/ func_0x032a224c(lVar11,0);
      *(undefined4 *)(lVar2 + 0x170) = uVar15;
      *(float *)(lVar2 + 0x174) = param_2;
      *(float *)(lVar2 + 0x178) = param_3;
      uVar15 = /*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar11,0);
      *(undefined4 *)(lVar2 + 0x17c) = uVar15;
      *(float *)(lVar2 + 0x180) = param_2;
      *(float *)(lVar2 + 0x184) = param_3;
      plVar4 = (long *)/*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(lVar11,0);
      *(undefined4 *)(lVar2 + 0x188) = extraout_s0_01;
      *(float *)(lVar2 + 0x18c) = param_2;
      *(float *)(lVar2 + 400) = param_3;
      *(undefined4 *)(lVar2 + 0x194) = param_4;
      return plVar4;
    }
  }
  plStack_b0 = auVar23._8_8_;
  plStack_a8 = auVar23._0_8_;
  auVar24 = func_0x00f78af4();
  uStack_100 = auVar24._8_8_;
  lVar2 = auVar24._0_8_;
  puStack_b8 = &Atlas_Gameplay_Usables_ProjectileUsable__FixedUpdate;
  ppppuStack_f0 = &pppuStack_c0;
  pppuStack_c0 = &ppuStack_a0;
  if ((bRam0000000003eb4b6f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b6f = 1;
  }
  uStack_110 = 0x3eb4000;
  uStack_108 = 0x3d23990;
  puStack_e8 = &UNK_014ce284;
  if ((bRam0000000003eb4b72 & 1) == 0) {
    lStack_f8 = lVar2;
    func_0x00f78a20(0x3d23990);
    auVar24._8_8_ = uStack_100;
    auVar24._0_8_ = lStack_f8;
    bRam0000000003eb4b72 = 1;
  }
  uStack_100 = auVar24._8_8_;
  lStack_f8 = auVar24._0_8_;
  uVar19 = *(undefined8 *)(lVar2 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_100;
    auVar24._0_8_ = lStack_f8;
  }
  uStack_100 = auVar24._8_8_;
  lStack_f8 = auVar24._0_8_;
  plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar19,0,0);
  if (((ulong)plVar4 & 1) != 0) {
    return plVar4;
  }
  lVar2 = *(long *)(lVar2 + 200);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x44) == '\0') {
      return plVar4;
    }
    *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
    return plVar4;
  }
  auVar25 = func_0x00f78af4();
  plVar6 = auVar25._8_8_;
  plVar4 = auVar25._0_8_;
  puStack_118 = &Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate;
  uStack_160 = unaff_d9;
  uStack_158 = unaff_d8;
  pppppuStack_120 = &ppppuStack_f0;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  if ((*(char *)((long)plVar4 + 300) == '\0') || ((char)plVar4[0xc] != '\0')) {
code_r0x014ce558:
    lVar2 = plVar4[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar4 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar2,0,0);
    if ((int)plVar4 == 0) {
      return plVar4;
    }
    puVar13 = &UNK_014ce59c;
  }
  else {
    if (plVar6 != (long *)0x0) {
      fVar14 = *(float *)(plVar4 + 0x2c);
      lVar2 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce520;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce520:
      fVar20 = (float)(*(code *)*puVar3)(plVar6,puVar3[1]);
      *(float *)(plVar4 + 0x2c) = fVar14 + fVar20;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar14 + fVar20) {
        *(undefined4 *)(plVar4 + 0x2c) = 0;
        uVar7 = 0;
        goto code_r0x01523e20;
      }
      goto code_r0x014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar6 = (long *)___cxa_begin_catch();
      lVar2 = *plVar6;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_178,uRam0000000003d328c8);
      if (lVar2 == 0) {
        plVar4 = (long *)(**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
        return plVar4;
      }
      func_0x00f78ac0(lVar2,0);
    }
    puVar13 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar25 = __Unwind_Resume();
  }
  plVar6 = auVar25._8_8_;
  plVar4 = auVar25._0_8_;
  lVar2 = 0x3eb4000;
  ppppppuStack_1c0 = &pppppuStack_120;
  puStack_1b8 = puVar13;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar4[0x19] != 0) {
    plVar5 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar4[0x19],0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if (plVar6 != (long *)0x0) {
      lVar2 = plVar4[0x19];
      lVar11 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      uVar15 = (*(code *)*puVar3)(plVar6,puVar3[1]);
      if (((plVar4[0x1f] != 0) && (lVar11 = *(long *)(plVar4[0x1f] + 0x18), lVar11 != 0)) &&
         (lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0), lVar11 != 0)) {
        uVar16 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar11,0);
        if ((plVar4[0x1f] != 0) && (lVar11 = *(long *)(plVar4[0x1f] + 0x18), lVar11 != 0)) {
          fVar14 = param_2;
          fVar20 = param_3;
          uVar17 = /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar11,0);
          if (((plVar4[0x1f] != 0) &&
              ((lVar11 = *(long *)(plVar4[0x1f] + 0x18), lVar11 != 0 &&
               (fVar21 = fVar14, fVar22 = fVar20, lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0), lVar11 != 0)))
              ) && (uVar18 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar11,0), lVar2 != 0)) {
            uStack_250 = uVar15;
            uStack_24c = uVar16;
            fStack_248 = param_2;
            fStack_244 = param_3;
            uStack_240 = uVar17;
            fStack_23c = fVar14;
            fStack_238 = fVar20;
            uStack_234 = uVar18;
            fStack_230 = fVar21;
            fStack_22c = fVar22;
            uStack_228 = param_4;
            /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar2,&uStack_250,0);
            plVar5 = (long *)plVar4[0x19];
            if (plVar5 != (long *)0x0) {
              if (*(char *)((long)plVar5 + 0x44) != '\0') {
                return plVar5;
              }
              plVar5 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar5,0);
              if (*(char *)((long)plVar4 + 0x15c) == '\0') {
                if ((extraout_s0_02 <= _UNK_033f7d80) && (fVar22 <= _UNK_033f7d80)) {
                  return plVar5;
                }
                *(undefined1 *)((long)plVar4 + 0x15c) = 1;
                return plVar5;
              }
              if ((((extraout_s0_02 < _UNK_033f7d80) && (fVar21 < _UNK_033f7d80)) &&
                  (fVar22 < _UNK_033f7d80)) && (*(char *)((long)plVar4 + 0x12d) != '\0')) {
                fVar14 = *(float *)(plVar4 + 0x2b);
                plVar6 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                *(float *)(plVar4 + 0x2b) = fVar14 + extraout_s0_03;
                if (fVar14 + extraout_s0_03 < _UNK_033f83ec) {
                  return plVar6;
                }
code_r0x014ce940:
                plVar4 = (long *)(**(code **)(*plVar4 + 0x228))
                                           (plVar4,*(undefined8 *)(*plVar4 + 0x230));
                return plVar4;
              }
              if (plVar4[0x19] != 0) {
                plVar6 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar4[0x19],0);
                if ((int)plVar6 == 0) {
                  *(undefined4 *)(plVar4 + 0x2b) = 0;
                  return plVar6;
                }
                goto code_r0x014ce940;
              }
            }
          }
        }
      }
    }
  }
  lVar11 = func_0x00f78af4();
  uStack_280 = 0x3d23990;
  puStack_258 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  lStack_270 = lVar2;
  pppppppuStack_260 = &ppppppuStack_1c0;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    plStack_278 = plVar6;
    plStack_268 = plVar4;
    func_0x00f78a20(0x3d23990);
    auVar25._8_8_ = plStack_278;
    auVar25._0_8_ = plStack_268;
    bRam0000000003eb4b76 = 1;
  }
  plStack_278 = auVar25._8_8_;
  plStack_268 = auVar25._0_8_;
  uVar19 = *(undefined8 *)(lVar11 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar25._8_8_ = plStack_278;
    auVar25._0_8_ = plStack_268;
  }
  plStack_278 = auVar25._8_8_;
  plStack_268 = auVar25._0_8_;
  uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar19,0,0);
  if ((uVar9 & 1) == 0) {
    lVar2 = *(long *)(lVar11 + 200);
    if (lVar2 == 0) {
      plVar6 = (long *)func_0x00f78af4();
      uStack_2b0 = 0x3d23990;
      uStack_2a8 = 0x3d23990;
      puStack_288 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      uStack_2a0 = uVar19;
      lStack_298 = lVar11;
      pppppppuStack_290 = &pppppppuStack_260;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar2 = plVar6[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = 0;
      uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar2,0);
      if ((uVar9 & 1) == 0) {
        lVar11 = plVar6[0x19];
        if (lVar11 == 0) {
          plVar4 = (long *)func_0x00f78af4();
          plVar1 = &lStack_2d0;
          puStack_2b8 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar12 = &pppppppuStack_2c0;
          lStack_2d0 = lVar2;
          plStack_2c8 = plVar6;
          pppppppuStack_2c0 = &pppppppuStack_290;
          plVar6 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar4,0);
          if (((ulong)plVar6 & 1) == 0) {
            plVar6 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar4,0);
            if ((plVar6 == (long *)0x0) || (plVar6[0x18] == 0)) {
              puVar13 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar26 = func_0x00f78af4();
code_r0x014ceb60:
              plVar6 = auVar26._0_8_;
              *(long *)((long)plVar1 + -0x20) = lVar2;
              *(long **)((long)plVar1 + -0x18) = plVar4;
              *(undefined8 ********)((long)plVar1 + -0x10) = pppppppuVar12;
              *(undefined **)((long)plVar1 + -8) = puVar13;
              if ((*(char *)((long)plVar6 + 300) != '\0') == uVar8) {
                return plVar6;
              }
              if (auVar26._8_4_ != 0) {
                (**(code **)(*plVar6 + 0x448))(plVar6,*(undefined8 *)(*plVar6 + 0x450));
              }
              *(char *)((long)plVar6 + 300) = (char)uVar8;
              if (((plVar6[9] != 0) && (lVar2 = *(long *)(plVar6[9] + 0x28), lVar2 != 0)) &&
                 (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar2,0), lVar2 != 0)) {
                *(undefined8 *)((long)plVar1 + -0x30) = 0x3d23990;
                *(undefined8 *)((long)plVar1 + -0x28) = 0x3d23990;
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
                plVar4 = (long *)(*pcRam0000000003ebf4c0)(lVar2,uVar8 ^ 1);
                return plVar4;
              }
              plVar4 = (long *)func_0x00f78af4();
              return plVar4;
            }
            if (*(char *)(plVar6[0x18] + 0x50) == '\0') {
              auVar26._8_4_ = 1;
              auVar26._0_8_ = plVar4;
              uVar8 = 1;
              plVar1 = &uStack_2b0;
              plVar4 = plStack_2c8;
              lVar2 = lStack_2d0;
              pppppppuVar12 = pppppppuStack_2c0;
              puVar13 = puStack_2b8;
              goto code_r0x014ceb60;
            }
          }
          if ((char)plVar4[0xc] != '\0') {
            return plVar6;
          }
          uVar7 = 1;
code_r0x01523e20:
          *(undefined1 *)(plVar4 + 0xc) = 1;
          *(undefined1 *)((long)plVar4 + 0x61) = uVar7;
          return plVar4;
        }
        if (*(char *)(lVar11 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar11 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar6 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar2 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar2 + 0x28) >> ((ulong)*(uint *)(lVar11 + 0x198) & 0x3f)
                             & 0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14cdf6c | Atlas.Gameplay.Usables.ProjectileUsable.PhysicsUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014ce280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ce59c) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce5b4) */
/* WARNING: Removing unreachable block (ram,0x014ce5bc) */
/* WARNING: Removing unreachable block (ram,0x014ce340) */
/* WARNING: Removing unreachable block (ram,0x032a304c) */
/* WARNING: Removing unreachable block (ram,0x032a3074) */
/* WARNING: Removing unreachable block (ram,0x032a3088) */
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

long * Atlas_Gameplay_Usables_ProjectileUsable__PhysicsUpdate
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long *param_5,long *param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  int extraout_w1;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *******pppppppuVar13;
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
  undefined1 extraout_b0_08;
  undefined1 extraout_b0_09;
  undefined1 extraout_b0_10;
  undefined1 extraout_b0_11;
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
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  long lStack_280;
  long *plStack_278;
  undefined8 *******pppppppuStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined1 *******pppppppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long lStack_220;
  long *plStack_218;
  undefined1 ******ppppppuStack_210;
  undefined *puStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined4 uStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  undefined4 uStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined4 uStack_1d8;
  undefined1 *****pppppuStack_170;
  undefined *puStack_168;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4b7b & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7b = 1;
  }
  plVar2 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_5,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  if (param_6 != (long *)0x0) {
    lVar8 = *param_6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_014ce014;
        }
        piVar10 = piVar10 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(param_6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,3);
LAB_014ce014:
    (*(code *)*puVar3)(param_6,puVar3[1]);
    if ((0.0 <= *(float *)(param_5 + 0x1b)) &&
       (fVar15 = *(float *)(param_5 + 0x1b) -
                 (float)CONCAT13(extraout_var_25,
                                 CONCAT12(extraout_var_12,CONCAT11(extraout_var,extraout_b0))),
       *(float *)(param_5 + 0x1b) = fVar15, fVar15 < 0.0)) {
      *(undefined4 *)(param_5 + 0x1b) = 0xbf800000;
    }
    fVar15 = *(float *)((long)param_5 + 0xdc);
    if ((0.0 <= fVar15) &&
       (fVar17 = fVar15 - (float)CONCAT13(extraout_var_25,
                                          CONCAT12(extraout_var_12,
                                                   CONCAT11(extraout_var,extraout_b0))),
       *(float *)((long)param_5 + 0xdc) = fVar17, fVar17 < 0.0)) {
      *(undefined4 *)((long)param_5 + 0xdc) = 0xbf800000;
    }
    param_2 = fVar15;
    if (param_5[0x1f] != 0) {
      /*ProjectilePhysics$$FixedUpdate*/ func_0x014ccbd4(param_5[0x1f],param_6);
      /*Atlas.Gameplay.Usables.ProjectileUsable$$UpdateVelocity*/ func_0x014cf9c4(param_5,*(undefined1 *)((long)param_5 + 0x124));
      if (*(char *)((long)param_5 + 0x125) == '\0') {
        (**(code **)(*param_5 + 0x3f8))(param_5,*(undefined8 *)(*param_5 + 0x400));
      }
      if ((char)param_5[0x1e] == '\0') {
        /*Atlas.Gameplay.Usables.ProjectileUsable$$HandleExpectedMovement*/ func_0x014cfa60(param_5);
      }
      param_2 = fVar15;
      if ((param_5[0x1f] != 0) && (lVar8 = *(long *)(param_5[0x1f] + 0x18), lVar8 != 0)) {
        plVar2 = (long *)/*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar8,0);
        *(uint *)(param_5 + 0x28) =
             CONCAT13(extraout_var_26,
                      CONCAT12(extraout_var_13,CONCAT11(extraout_var_00,extraout_b0_00)));
        *(float *)((long)param_5 + 0x144) = param_3;
        if (*(char *)((long)param_5 + 0x11c) == '\0') {
          return plVar2;
        }
        param_2 = fVar15;
        if ((param_5[0x1f] != 0) && (lVar8 = *(long *)(param_5[0x1f] + 0x18), lVar8 != 0)) {
          unaff_d9 = (ulong)CONCAT13(extraout_var_26,
                                     CONCAT12(extraout_var_13,
                                              CONCAT11(extraout_var_00,extraout_b0_00)));
          unaff_d8 = (ulong)(uint)param_3;
          plVar2 = (long *)/*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar8,0);
          param_2 = *(float *)(param_5 + 0x24);
          if (param_2 <= fVar15) {
            return plVar2;
          }
          if ((param_5[0x1f] != 0) && (lVar8 = *(long *)(param_5[0x1f] + 0x18), lVar8 != 0)) {
            if (pcRam0000000003ec2928 == (code *)0x0) {
              pcRam0000000003ec2928 =
                   (code *)func_0x00f789d4("UnityEngine.Rigidbody::set_position_Injected(UnityEngine.Vector3&)"
                                           ,0);
            }
            plVar2 = (long *)(*pcRam0000000003ec2928)(lVar8,&stack0xffffffffffffffd0);
            return plVar2;
          }
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_48 = &Atlas_Gameplay_Usables_ProjectileUsable__PreFixedUpdate;
  plStack_60 = param_6;
  plStack_58 = param_5;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b6e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b6e = 1;
  }
  if (*(long *)(lVar8 + 0xf8) != 0) {
    lVar11 = *(long *)(*(long *)(lVar8 + 0xf8) + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar11,0,0);
    if (((ulong)plVar2 & 1) != 0) {
      return plVar2;
    }
    if (lVar11 != 0) {
      /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar11,0);
      *(uint *)(lVar8 + 0x164) =
           CONCAT13(extraout_var_27,
                    CONCAT12(extraout_var_14,CONCAT11(extraout_var_01,extraout_b0_01)));
      *(float *)(lVar8 + 0x168) = param_2;
      *(float *)(lVar8 + 0x16c) = param_3;
      /*UnityEngine.Rigidbody$$get_angularVelocity*/ func_0x032a224c(lVar11,0);
      *(uint *)(lVar8 + 0x170) =
           CONCAT13(extraout_var_28,
                    CONCAT12(extraout_var_15,CONCAT11(extraout_var_02,extraout_b0_02)));
      *(float *)(lVar8 + 0x174) = param_2;
      *(float *)(lVar8 + 0x178) = param_3;
      /*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar11,0);
      *(uint *)(lVar8 + 0x17c) =
           CONCAT13(extraout_var_29,
                    CONCAT12(extraout_var_16,CONCAT11(extraout_var_03,extraout_b0_03)));
      *(float *)(lVar8 + 0x180) = param_2;
      *(float *)(lVar8 + 0x184) = param_3;
      plVar2 = (long *)/*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(lVar11,0);
      *(uint *)(lVar8 + 0x188) =
           CONCAT13(extraout_var_30,
                    CONCAT12(extraout_var_17,CONCAT11(extraout_var_04,extraout_b0_04)));
      *(float *)(lVar8 + 0x18c) = param_2;
      *(float *)(lVar8 + 400) = param_3;
      *(undefined4 *)(lVar8 + 0x194) = param_4;
      return plVar2;
    }
  }
  auVar19 = func_0x00f78af4();
  uStack_b0 = auVar19._8_8_;
  lVar8 = auVar19._0_8_;
  puStack_68 = &Atlas_Gameplay_Usables_ProjectileUsable__FixedUpdate;
  pppuStack_a0 = &ppuStack_70;
  ppuStack_70 = &puStack_50;
  if ((bRam0000000003eb4b6f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b6f = 1;
  }
  uStack_c0 = 0x3eb4000;
  uStack_b8 = 0x3d23990;
  puStack_98 = &UNK_014ce284;
  if ((bRam0000000003eb4b72 & 1) == 0) {
    lStack_a8 = lVar8;
    func_0x00f78a20(0x3d23990);
    auVar19._8_8_ = uStack_b0;
    auVar19._0_8_ = lStack_a8;
    bRam0000000003eb4b72 = 1;
  }
  uStack_b0 = auVar19._8_8_;
  lStack_a8 = auVar19._0_8_;
  uVar12 = *(undefined8 *)(lVar8 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar19._8_8_ = uStack_b0;
    auVar19._0_8_ = lStack_a8;
  }
  uStack_b0 = auVar19._8_8_;
  lStack_a8 = auVar19._0_8_;
  plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  lVar8 = *(long *)(lVar8 + 200);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x44) == '\0') {
      return plVar2;
    }
    *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(lVar8 + 0x48);
    return plVar2;
  }
  auVar20 = func_0x00f78af4();
  plVar4 = auVar20._8_8_;
  plVar2 = auVar20._0_8_;
  puStack_c8 = &Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate;
  uStack_110 = unaff_d9;
  uStack_108 = unaff_d8;
  ppppuStack_d0 = &pppuStack_a0;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  if ((*(char *)((long)plVar2 + 300) == '\0') || ((char)plVar2[0xc] != '\0')) {
code_r0x014ce558:
    lVar8 = plVar2[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar2 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
    puVar14 = &UNK_014ce59c;
  }
  else {
    if (plVar4 != (long *)0x0) {
      fVar15 = *(float *)(plVar2 + 0x2c);
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce520;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce520:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      fVar15 = fVar15 + (float)CONCAT13(extraout_var_31,
                                        CONCAT12(extraout_var_18,
                                                 CONCAT11(extraout_var_05,extraout_b0_05)));
      *(float *)(plVar2 + 0x2c) = fVar15;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar15) {
        *(undefined4 *)(plVar2 + 0x2c) = 0;
        uVar6 = 0;
        goto code_r0x01523e20;
      }
      goto code_r0x014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar8 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_128,uRam0000000003d328c8);
      if (lVar8 == 0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
        return plVar2;
      }
      func_0x00f78ac0(lVar8,0);
    }
    puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar20 = __Unwind_Resume();
  }
  plVar4 = auVar20._8_8_;
  plVar2 = auVar20._0_8_;
  lVar8 = 0x3eb4000;
  pppppuStack_170 = &ppppuStack_d0;
  puStack_168 = puVar14;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar2[0x19] != 0) {
    plVar5 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar2[0x19],0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if (plVar4 != (long *)0x0) {
      lVar8 = plVar2[0x19];
      lVar11 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((plVar2[0x1f] != 0) && (lVar11 = *(long *)(plVar2[0x1f] + 0x18), lVar11 != 0)) {
        lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0);
        if (lVar11 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar11,0);
          if ((plVar2[0x1f] != 0) && (lVar11 = *(long *)(plVar2[0x1f] + 0x18), lVar11 != 0)) {
            fVar15 = param_2;
            fVar17 = param_3;
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar11,0);
            if ((plVar2[0x1f] != 0) && (lVar11 = *(long *)(plVar2[0x1f] + 0x18), lVar11 != 0)) {
              fVar16 = fVar15;
              fVar18 = fVar17;
              lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar11,0);
              if ((lVar11 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar11,0), lVar8 != 0)) {
                uStack_1e4 = CONCAT13(extraout_var_35,
                                      CONCAT12(extraout_var_22,
                                               CONCAT11(extraout_var_09,extraout_b0_09)));
                uStack_200 = CONCAT13(extraout_var_32,
                                      CONCAT12(extraout_var_19,
                                               CONCAT11(extraout_var_06,extraout_b0_06)));
                uStack_1fc = CONCAT13(extraout_var_33,
                                      CONCAT12(extraout_var_20,
                                               CONCAT11(extraout_var_07,extraout_b0_07)));
                fStack_1f8 = param_2;
                fStack_1f4 = param_3;
                uStack_1f0 = CONCAT13(extraout_var_34,
                                      CONCAT12(extraout_var_21,
                                               CONCAT11(extraout_var_08,extraout_b0_08)));
                fStack_1ec = fVar15;
                fStack_1e8 = fVar17;
                fStack_1e0 = fVar16;
                fStack_1dc = fVar18;
                uStack_1d8 = param_4;
                /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar8,&uStack_200,0);
                plVar5 = (long *)plVar2[0x19];
                if (plVar5 != (long *)0x0) {
                  if (*(char *)((long)plVar5 + 0x44) != '\0') {
                    return plVar5;
                  }
                  plVar5 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar5,0);
                  if (*(char *)((long)plVar2 + 0x15c) == '\0') {
                    if (((float)CONCAT13(extraout_var_36,
                                         CONCAT12(extraout_var_23,
                                                  CONCAT11(extraout_var_10,extraout_b0_10))) ==
                         _UNK_033f7d80 ||
                         (float)CONCAT13(extraout_var_36,
                                         CONCAT12(extraout_var_23,
                                                  CONCAT11(extraout_var_10,extraout_b0_10))) <
                         _UNK_033f7d80) && (fVar18 <= _UNK_033f7d80)) {
                      return plVar5;
                    }
                    *(undefined1 *)((long)plVar2 + 0x15c) = 1;
                    return plVar5;
                  }
                  if (((((float)CONCAT13(extraout_var_36,
                                         CONCAT12(extraout_var_23,
                                                  CONCAT11(extraout_var_10,extraout_b0_10))) <
                         _UNK_033f7d80) && (fVar16 < _UNK_033f7d80)) && (fVar18 < _UNK_033f7d80)) &&
                     (*(char *)((long)plVar2 + 0x12d) != '\0')) {
                    fVar15 = *(float *)(plVar2 + 0x2b);
                    plVar4 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                    fVar15 = fVar15 + (float)CONCAT13(extraout_var_37,
                                                      CONCAT12(extraout_var_24,
                                                               CONCAT11(extraout_var_11,
                                                                        extraout_b0_11)));
                    *(float *)(plVar2 + 0x2b) = fVar15;
                    if (fVar15 < _UNK_033f83ec) {
                      return plVar4;
                    }
code_r0x014ce940:
                    plVar2 = (long *)(**(code **)(*plVar2 + 0x228))
                                               (plVar2,*(undefined8 *)(*plVar2 + 0x230));
                    return plVar2;
                  }
                  if (plVar2[0x19] != 0) {
                    plVar4 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar2[0x19],0);
                    if ((int)plVar4 == 0) {
                      *(undefined4 *)(plVar2 + 0x2b) = 0;
                      return plVar4;
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
  uStack_230 = 0x3d23990;
  puStack_208 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  lStack_220 = lVar8;
  ppppppuStack_210 = &pppppuStack_170;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    plStack_228 = plVar4;
    plStack_218 = plVar2;
    func_0x00f78a20(0x3d23990);
    auVar20._8_8_ = plStack_228;
    auVar20._0_8_ = plStack_218;
    bRam0000000003eb4b76 = 1;
  }
  plStack_228 = auVar20._8_8_;
  plStack_218 = auVar20._0_8_;
  uVar12 = *(undefined8 *)(lVar11 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar20._8_8_ = plStack_228;
    auVar20._0_8_ = plStack_218;
  }
  plStack_228 = auVar20._8_8_;
  plStack_218 = auVar20._0_8_;
  uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if ((uVar9 & 1) == 0) {
    lVar8 = *(long *)(lVar11 + 200);
    if (lVar8 == 0) {
      plVar4 = (long *)func_0x00f78af4();
      uStack_260 = 0x3d23990;
      uStack_258 = 0x3d23990;
      puStack_238 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      uStack_250 = uVar12;
      lStack_248 = lVar11;
      pppppppuStack_240 = &ppppppuStack_210;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar8 = plVar4[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
      uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0);
      if ((uVar9 & 1) == 0) {
        lVar11 = plVar4[0x19];
        if (lVar11 == 0) {
          plVar2 = (long *)func_0x00f78af4();
          plVar1 = &lStack_280;
          puStack_268 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar13 = &pppppppuStack_270;
          lStack_280 = lVar8;
          plStack_278 = plVar4;
          pppppppuStack_270 = &pppppppuStack_240;
          plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar2,0);
          if (((ulong)plVar4 & 1) == 0) {
            plVar4 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar2,0);
            if ((plVar4 == (long *)0x0) || (plVar4[0x18] == 0)) {
              puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar21 = func_0x00f78af4();
code_r0x014ceb60:
              plVar4 = auVar21._0_8_;
              *(long *)((long)plVar1 + -0x20) = lVar8;
              *(long **)((long)plVar1 + -0x18) = plVar2;
              *(undefined8 ********)((long)plVar1 + -0x10) = pppppppuVar13;
              *(undefined **)((long)plVar1 + -8) = puVar14;
              if ((*(char *)((long)plVar4 + 300) != '\0') == uVar7) {
                return plVar4;
              }
              if (auVar21._8_4_ != 0) {
                (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
              }
              *(char *)((long)plVar4 + 300) = (char)uVar7;
              if (((plVar4[9] != 0) && (lVar8 = *(long *)(plVar4[9] + 0x28), lVar8 != 0)) &&
                 (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar8 != 0)) {
                *(undefined8 *)((long)plVar1 + -0x30) = 0x3d23990;
                *(undefined8 *)((long)plVar1 + -0x28) = 0x3d23990;
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
                plVar2 = (long *)(*pcRam0000000003ebf4c0)(lVar8,uVar7 ^ 1);
                return plVar2;
              }
              plVar2 = (long *)func_0x00f78af4();
              return plVar2;
            }
            if (*(char *)(plVar4[0x18] + 0x50) == '\0') {
              auVar21._8_4_ = 1;
              auVar21._0_8_ = plVar2;
              uVar7 = 1;
              plVar1 = &uStack_260;
              plVar2 = plStack_278;
              lVar8 = lStack_280;
              pppppppuVar13 = pppppppuStack_270;
              puVar14 = puStack_268;
              goto code_r0x014ceb60;
            }
          }
          if ((char)plVar2[0xc] != '\0') {
            return plVar4;
          }
          uVar6 = 1;
code_r0x01523e20:
          *(undefined1 *)(plVar2 + 0xc) = 1;
          *(undefined1 *)((long)plVar2 + 0x61) = uVar6;
          return plVar2;
        }
        if (*(char *)(lVar11 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar11 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar4 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar8 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar8 + 0x28) >> ((ulong)*(uint *)(lVar11 + 0x198) & 0x3f)
                             & 0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14ce150 | Atlas.Gameplay.Usables.ProjectileUsable.PreFixedUpdate
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

long * Atlas_Gameplay_Usables_ProjectileUsable__PreFixedUpdate
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  int extraout_w1;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *******pppppppuVar13;
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
  undefined1 extraout_b0_08;
  undefined1 extraout_b0_09;
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
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  long lStack_240;
  long *plStack_238;
  undefined8 *******pppppppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 ******ppppppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  long lStack_1e0;
  long *plStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined *puStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined4 uStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined1 ****ppppuStack_130;
  undefined *puStack_128;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4b6e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b6e = 1;
  }
  if (*(long *)(param_5 + 0xf8) != 0) {
    lVar11 = *(long *)(*(long *)(param_5 + 0xf8) + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar11,0,0);
    if (((ulong)plVar2 & 1) != 0) {
      return plVar2;
    }
    if (lVar11 != 0) {
      /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar11,0);
      *(uint *)(param_5 + 0x164) =
           CONCAT13(extraout_var_21,CONCAT12(extraout_var_10,CONCAT11(extraout_var,extraout_b0)));
      *(float *)(param_5 + 0x168) = param_2;
      *(float *)(param_5 + 0x16c) = param_3;
      /*UnityEngine.Rigidbody$$get_angularVelocity*/ func_0x032a224c(lVar11,0);
      *(uint *)(param_5 + 0x170) =
           CONCAT13(extraout_var_22,
                    CONCAT12(extraout_var_11,CONCAT11(extraout_var_00,extraout_b0_00)));
      *(float *)(param_5 + 0x174) = param_2;
      *(float *)(param_5 + 0x178) = param_3;
      /*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar11,0);
      *(uint *)(param_5 + 0x17c) =
           CONCAT13(extraout_var_23,
                    CONCAT12(extraout_var_12,CONCAT11(extraout_var_01,extraout_b0_01)));
      *(float *)(param_5 + 0x180) = param_2;
      *(float *)(param_5 + 0x184) = param_3;
      plVar2 = (long *)/*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(lVar11,0);
      *(uint *)(param_5 + 0x188) =
           CONCAT13(extraout_var_24,
                    CONCAT12(extraout_var_13,CONCAT11(extraout_var_02,extraout_b0_02)));
      *(float *)(param_5 + 0x18c) = param_2;
      *(float *)(param_5 + 400) = param_3;
      *(undefined4 *)(param_5 + 0x194) = param_4;
      return plVar2;
    }
  }
  auVar19 = func_0x00f78af4();
  uStack_70 = auVar19._8_8_;
  lVar11 = auVar19._0_8_;
  puStack_28 = &Atlas_Gameplay_Usables_ProjectileUsable__FixedUpdate;
  ppuStack_60 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b6f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b6f = 1;
  }
  uStack_80 = 0x3eb4000;
  uStack_78 = 0x3d23990;
  puStack_58 = &UNK_014ce284;
  if ((bRam0000000003eb4b72 & 1) == 0) {
    lStack_68 = lVar11;
    func_0x00f78a20(0x3d23990);
    auVar19._8_8_ = uStack_70;
    auVar19._0_8_ = lStack_68;
    bRam0000000003eb4b72 = 1;
  }
  uStack_70 = auVar19._8_8_;
  lStack_68 = auVar19._0_8_;
  uVar12 = *(undefined8 *)(lVar11 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar19._8_8_ = uStack_70;
    auVar19._0_8_ = lStack_68;
  }
  uStack_70 = auVar19._8_8_;
  lStack_68 = auVar19._0_8_;
  plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  lVar11 = *(long *)(lVar11 + 200);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x44) == '\0') {
      return plVar2;
    }
    *(undefined8 *)(lVar11 + 0x48) = *(undefined8 *)(lVar11 + 0x48);
    return plVar2;
  }
  auVar20 = func_0x00f78af4();
  plVar4 = auVar20._8_8_;
  plVar2 = auVar20._0_8_;
  puStack_88 = &Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate;
  pppuStack_90 = &ppuStack_60;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  if ((*(char *)((long)plVar2 + 300) == '\0') || ((char)plVar2[0xc] != '\0')) {
code_r0x014ce558:
    lVar11 = plVar2[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar2 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
    puVar14 = &UNK_014ce59c;
  }
  else {
    if (plVar4 != (long *)0x0) {
      fVar18 = *(float *)(plVar2 + 0x2c);
      lVar11 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce520;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce520:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      fVar18 = fVar18 + (float)CONCAT13(extraout_var_25,
                                        CONCAT12(extraout_var_14,
                                                 CONCAT11(extraout_var_03,extraout_b0_03)));
      *(float *)(plVar2 + 0x2c) = fVar18;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar18) {
        *(undefined4 *)(plVar2 + 0x2c) = 0;
        uVar6 = 0;
        goto code_r0x01523e20;
      }
      goto code_r0x014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar11 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,uRam0000000003d328c8);
      if (lVar11 == 0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
        return plVar2;
      }
      func_0x00f78ac0(lVar11,0);
    }
    puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar20 = __Unwind_Resume();
  }
  plVar4 = auVar20._8_8_;
  plVar2 = auVar20._0_8_;
  lVar11 = 0x3eb4000;
  ppppuStack_130 = &pppuStack_90;
  puStack_128 = puVar14;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar2[0x19] != 0) {
    plVar5 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar2[0x19],0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if (plVar4 != (long *)0x0) {
      lVar11 = plVar2[0x19];
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((plVar2[0x1f] != 0) && (lVar8 = *(long *)(plVar2[0x1f] + 0x18), lVar8 != 0)) {
        lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
        if (lVar8 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
          if ((plVar2[0x1f] != 0) && (lVar8 = *(long *)(plVar2[0x1f] + 0x18), lVar8 != 0)) {
            fVar18 = param_2;
            fVar16 = param_3;
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar8,0);
            if ((plVar2[0x1f] != 0) && (lVar8 = *(long *)(plVar2[0x1f] + 0x18), lVar8 != 0)) {
              fVar15 = fVar18;
              fVar17 = fVar16;
              lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
              if ((lVar8 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar8,0), lVar11 != 0)) {
                uStack_1a4 = CONCAT13(extraout_var_29,
                                      CONCAT12(extraout_var_18,
                                               CONCAT11(extraout_var_07,extraout_b0_07)));
                uStack_1c0 = CONCAT13(extraout_var_26,
                                      CONCAT12(extraout_var_15,
                                               CONCAT11(extraout_var_04,extraout_b0_04)));
                uStack_1bc = CONCAT13(extraout_var_27,
                                      CONCAT12(extraout_var_16,
                                               CONCAT11(extraout_var_05,extraout_b0_05)));
                fStack_1b8 = param_2;
                fStack_1b4 = param_3;
                uStack_1b0 = CONCAT13(extraout_var_28,
                                      CONCAT12(extraout_var_17,
                                               CONCAT11(extraout_var_06,extraout_b0_06)));
                fStack_1ac = fVar18;
                fStack_1a8 = fVar16;
                fStack_1a0 = fVar15;
                fStack_19c = fVar17;
                uStack_198 = param_4;
                /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar11,&uStack_1c0,0);
                plVar5 = (long *)plVar2[0x19];
                if (plVar5 != (long *)0x0) {
                  if (*(char *)((long)plVar5 + 0x44) != '\0') {
                    return plVar5;
                  }
                  plVar5 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar5,0);
                  if (*(char *)((long)plVar2 + 0x15c) == '\0') {
                    if (((float)CONCAT13(extraout_var_30,
                                         CONCAT12(extraout_var_19,
                                                  CONCAT11(extraout_var_08,extraout_b0_08))) ==
                         _UNK_033f7d80 ||
                         (float)CONCAT13(extraout_var_30,
                                         CONCAT12(extraout_var_19,
                                                  CONCAT11(extraout_var_08,extraout_b0_08))) <
                         _UNK_033f7d80) && (fVar17 <= _UNK_033f7d80)) {
                      return plVar5;
                    }
                    *(undefined1 *)((long)plVar2 + 0x15c) = 1;
                    return plVar5;
                  }
                  if (((((float)CONCAT13(extraout_var_30,
                                         CONCAT12(extraout_var_19,
                                                  CONCAT11(extraout_var_08,extraout_b0_08))) <
                         _UNK_033f7d80) && (fVar15 < _UNK_033f7d80)) && (fVar17 < _UNK_033f7d80)) &&
                     (*(char *)((long)plVar2 + 0x12d) != '\0')) {
                    fVar18 = *(float *)(plVar2 + 0x2b);
                    plVar4 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                    fVar18 = fVar18 + (float)CONCAT13(extraout_var_31,
                                                      CONCAT12(extraout_var_20,
                                                               CONCAT11(extraout_var_09,
                                                                        extraout_b0_09)));
                    *(float *)(plVar2 + 0x2b) = fVar18;
                    if (fVar18 < _UNK_033f83ec) {
                      return plVar4;
                    }
code_r0x014ce940:
                    plVar2 = (long *)(**(code **)(*plVar2 + 0x228))
                                               (plVar2,*(undefined8 *)(*plVar2 + 0x230));
                    return plVar2;
                  }
                  if (plVar2[0x19] != 0) {
                    plVar4 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar2[0x19],0);
                    if ((int)plVar4 == 0) {
                      *(undefined4 *)(plVar2 + 0x2b) = 0;
                      return plVar4;
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
  lVar8 = func_0x00f78af4();
  uStack_1f0 = 0x3d23990;
  puStack_1c8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  lStack_1e0 = lVar11;
  pppppuStack_1d0 = (undefined8 *****)&ppppuStack_130;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    plStack_1e8 = plVar4;
    plStack_1d8 = plVar2;
    func_0x00f78a20(0x3d23990);
    auVar20._8_8_ = plStack_1e8;
    auVar20._0_8_ = plStack_1d8;
    bRam0000000003eb4b76 = 1;
  }
  plStack_1e8 = auVar20._8_8_;
  plStack_1d8 = auVar20._0_8_;
  uVar12 = *(undefined8 *)(lVar8 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar20._8_8_ = plStack_1e8;
    auVar20._0_8_ = plStack_1d8;
  }
  plStack_1e8 = auVar20._8_8_;
  plStack_1d8 = auVar20._0_8_;
  uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if ((uVar9 & 1) == 0) {
    lVar11 = *(long *)(lVar8 + 200);
    if (lVar11 == 0) {
      plVar4 = (long *)func_0x00f78af4();
      uStack_220 = 0x3d23990;
      uStack_218 = 0x3d23990;
      puStack_1f8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      uStack_210 = uVar12;
      lStack_208 = lVar8;
      ppppppuStack_200 = &pppppuStack_1d0;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar11 = plVar4[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
      uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar11,0);
      if ((uVar9 & 1) == 0) {
        lVar8 = plVar4[0x19];
        if (lVar8 == 0) {
          plVar2 = (long *)func_0x00f78af4();
          plVar1 = &lStack_240;
          puStack_228 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar13 = &pppppppuStack_230;
          lStack_240 = lVar11;
          plStack_238 = plVar4;
          pppppppuStack_230 = &ppppppuStack_200;
          plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar2,0);
          if (((ulong)plVar4 & 1) == 0) {
            plVar4 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar2,0);
            if ((plVar4 == (long *)0x0) || (plVar4[0x18] == 0)) {
              puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar21 = func_0x00f78af4();
code_r0x014ceb60:
              plVar4 = auVar21._0_8_;
              *(long *)((long)plVar1 + -0x20) = lVar11;
              *(long **)((long)plVar1 + -0x18) = plVar2;
              *(undefined8 ********)((long)plVar1 + -0x10) = pppppppuVar13;
              *(undefined **)((long)plVar1 + -8) = puVar14;
              if ((*(char *)((long)plVar4 + 300) != '\0') == uVar7) {
                return plVar4;
              }
              if (auVar21._8_4_ != 0) {
                (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
              }
              *(char *)((long)plVar4 + 300) = (char)uVar7;
              if (((plVar4[9] != 0) && (lVar11 = *(long *)(plVar4[9] + 0x28), lVar11 != 0)) &&
                 (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar11,0), lVar11 != 0)) {
                *(undefined8 *)((long)plVar1 + -0x30) = 0x3d23990;
                *(undefined8 *)((long)plVar1 + -0x28) = 0x3d23990;
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
                plVar2 = (long *)(*pcRam0000000003ebf4c0)(lVar11,uVar7 ^ 1);
                return plVar2;
              }
              plVar2 = (long *)func_0x00f78af4();
              return plVar2;
            }
            if (*(char *)(plVar4[0x18] + 0x50) == '\0') {
              auVar21._8_4_ = 1;
              auVar21._0_8_ = plVar2;
              uVar7 = 1;
              plVar1 = &uStack_220;
              plVar2 = plStack_238;
              lVar11 = lStack_240;
              pppppppuVar13 = pppppppuStack_230;
              puVar14 = puStack_228;
              goto code_r0x014ceb60;
            }
          }
          if ((char)plVar2[0xc] != '\0') {
            return plVar4;
          }
          uVar6 = 1;
code_r0x01523e20:
          *(undefined1 *)(plVar2 + 0xc) = 1;
          *(undefined1 *)((long)plVar2 + 0x61) = uVar6;
          return plVar2;
        }
        if (*(char *)(lVar8 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar8 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar4 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar11 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar11 + 0x28) >> ((ulong)*(uint *)(lVar8 + 0x198) & 0x3f)
                             & 0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14ce238 | Atlas.Gameplay.Usables.ProjectileUsable.FixedUpdate
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

long * Atlas_Gameplay_Usables_ProjectileUsable__FixedUpdate
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  int extraout_w1;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  long lStack_220;
  long *plStack_218;
  undefined8 *******pppppppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 ******ppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  long lStack_1c0;
  long *plStack_1b8;
  undefined8 *****pppppuStack_1b0;
  undefined *puStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float fStack_198;
  float fStack_194;
  undefined4 uStack_190;
  float fStack_18c;
  float fStack_188;
  undefined4 uStack_184;
  float fStack_180;
  float fStack_17c;
  undefined4 uStack_178;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4b6f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b6f = 1;
  }
  uStack_60 = 0x3eb4000;
  uStack_58 = 0x3d23990;
  uStack_38 = 0x14ce284;
  uStack_50 = param_6;
  lStack_48 = param_5;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b72 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b72 = 1;
  }
  uVar12 = *(undefined8 *)(param_5 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  lVar8 = *(long *)(param_5 + 200);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x44) == '\0') {
      return plVar2;
    }
    *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(lVar8 + 0x48);
    return plVar2;
  }
  auVar19 = func_0x00f78af4();
  plVar4 = auVar19._8_8_;
  plVar2 = auVar19._0_8_;
  puStack_68 = &Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  if ((*(char *)((long)plVar2 + 300) == '\0') || ((char)plVar2[0xc] != '\0')) {
code_r0x014ce558:
    lVar8 = plVar2[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar2 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
    puVar14 = &UNK_014ce59c;
  }
  else {
    if (plVar4 != (long *)0x0) {
      fVar18 = *(float *)(plVar2 + 0x2c);
      lVar8 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014ce520;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce520:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      fVar18 = fVar18 + (float)CONCAT13(extraout_var_13,
                                        CONCAT12(extraout_var_06,CONCAT11(extraout_var,extraout_b0))
                                       );
      *(float *)(plVar2 + 0x2c) = fVar18;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar18) {
        *(undefined4 *)(plVar2 + 0x2c) = 0;
        uVar6 = 0;
        goto code_r0x01523e20;
      }
      goto code_r0x014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar8 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003d328c8);
      if (lVar8 == 0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
        return plVar2;
      }
      func_0x00f78ac0(lVar8,0);
    }
    puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar19 = __Unwind_Resume();
  }
  plVar4 = auVar19._8_8_;
  plVar2 = auVar19._0_8_;
  lVar8 = 0x3eb4000;
  pppuStack_110 = (undefined8 ***)&ppuStack_70;
  puStack_108 = puVar14;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar2[0x19] != 0) {
    plVar5 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar2[0x19],0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if (plVar4 != (long *)0x0) {
      lVar8 = plVar2[0x19];
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((plVar2[0x1f] != 0) && (lVar9 = *(long *)(plVar2[0x1f] + 0x18), lVar9 != 0)) {
        lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
        if (lVar9 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar9,0);
          if ((plVar2[0x1f] != 0) && (lVar9 = *(long *)(plVar2[0x1f] + 0x18), lVar9 != 0)) {
            fVar18 = param_2;
            fVar16 = param_3;
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar9,0);
            if ((plVar2[0x1f] != 0) && (lVar9 = *(long *)(plVar2[0x1f] + 0x18), lVar9 != 0)) {
              fVar15 = fVar18;
              fVar17 = fVar16;
              lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
              if ((lVar9 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar9,0), lVar8 != 0)) {
                uStack_184 = CONCAT13(extraout_var_17,
                                      CONCAT12(extraout_var_10,
                                               CONCAT11(extraout_var_03,extraout_b0_03)));
                uStack_1a0 = CONCAT13(extraout_var_14,
                                      CONCAT12(extraout_var_07,
                                               CONCAT11(extraout_var_00,extraout_b0_00)));
                uStack_19c = CONCAT13(extraout_var_15,
                                      CONCAT12(extraout_var_08,
                                               CONCAT11(extraout_var_01,extraout_b0_01)));
                fStack_198 = param_2;
                fStack_194 = param_3;
                uStack_190 = CONCAT13(extraout_var_16,
                                      CONCAT12(extraout_var_09,
                                               CONCAT11(extraout_var_02,extraout_b0_02)));
                fStack_18c = fVar18;
                fStack_188 = fVar16;
                fStack_180 = fVar15;
                fStack_17c = fVar17;
                uStack_178 = param_4;
                /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar8,&uStack_1a0,0);
                plVar5 = (long *)plVar2[0x19];
                if (plVar5 != (long *)0x0) {
                  if (*(char *)((long)plVar5 + 0x44) != '\0') {
                    return plVar5;
                  }
                  plVar5 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar5,0);
                  if (*(char *)((long)plVar2 + 0x15c) == '\0') {
                    if (((float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) ==
                         _UNK_033f7d80 ||
                         (float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) <
                         _UNK_033f7d80) && (fVar17 <= _UNK_033f7d80)) {
                      return plVar5;
                    }
                    *(undefined1 *)((long)plVar2 + 0x15c) = 1;
                    return plVar5;
                  }
                  if (((((float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) <
                         _UNK_033f7d80) && (fVar15 < _UNK_033f7d80)) && (fVar17 < _UNK_033f7d80)) &&
                     (*(char *)((long)plVar2 + 0x12d) != '\0')) {
                    fVar18 = *(float *)(plVar2 + 0x2b);
                    plVar4 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                    fVar18 = fVar18 + (float)CONCAT13(extraout_var_19,
                                                      CONCAT12(extraout_var_12,
                                                               CONCAT11(extraout_var_05,
                                                                        extraout_b0_05)));
                    *(float *)(plVar2 + 0x2b) = fVar18;
                    if (fVar18 < _UNK_033f83ec) {
                      return plVar4;
                    }
code_r0x014ce940:
                    plVar2 = (long *)(**(code **)(*plVar2 + 0x228))
                                               (plVar2,*(undefined8 *)(*plVar2 + 0x230));
                    return plVar2;
                  }
                  if (plVar2[0x19] != 0) {
                    plVar4 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar2[0x19],0);
                    if ((int)plVar4 == 0) {
                      *(undefined4 *)(plVar2 + 0x2b) = 0;
                      return plVar4;
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
  uStack_1d0 = 0x3d23990;
  puStack_1a8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  lStack_1c0 = lVar8;
  pppppuStack_1b0 = (undefined8 *****)&pppuStack_110;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    plStack_1c8 = plVar4;
    plStack_1b8 = plVar2;
    func_0x00f78a20(0x3d23990);
    auVar19._8_8_ = plStack_1c8;
    auVar19._0_8_ = plStack_1b8;
    bRam0000000003eb4b76 = 1;
  }
  plStack_1c8 = auVar19._8_8_;
  plStack_1b8 = auVar19._0_8_;
  uVar12 = *(undefined8 *)(lVar9 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar19._8_8_ = plStack_1c8;
    auVar19._0_8_ = plStack_1b8;
  }
  plStack_1c8 = auVar19._8_8_;
  plStack_1b8 = auVar19._0_8_;
  uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if ((uVar10 & 1) == 0) {
    lVar8 = *(long *)(lVar9 + 200);
    if (lVar8 == 0) {
      plVar4 = (long *)func_0x00f78af4();
      uStack_200 = 0x3d23990;
      uStack_1f8 = 0x3d23990;
      puStack_1d8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      uStack_1f0 = uVar12;
      lStack_1e8 = lVar9;
      ppppppuStack_1e0 = &pppppuStack_1b0;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar8 = plVar4[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
      uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0);
      if ((uVar10 & 1) == 0) {
        lVar9 = plVar4[0x19];
        if (lVar9 == 0) {
          plVar2 = (long *)func_0x00f78af4();
          plVar1 = &lStack_220;
          puStack_208 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar13 = &pppppppuStack_210;
          lStack_220 = lVar8;
          plStack_218 = plVar4;
          pppppppuStack_210 = &ppppppuStack_1e0;
          plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar2,0);
          if (((ulong)plVar4 & 1) == 0) {
            plVar4 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar2,0);
            if ((plVar4 == (long *)0x0) || (plVar4[0x18] == 0)) {
              puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar20 = func_0x00f78af4();
code_r0x014ceb60:
              plVar4 = auVar20._0_8_;
              *(long *)((long)plVar1 + -0x20) = lVar8;
              *(long **)((long)plVar1 + -0x18) = plVar2;
              *(undefined8 ********)((long)plVar1 + -0x10) = pppppppuVar13;
              *(undefined **)((long)plVar1 + -8) = puVar14;
              if ((*(char *)((long)plVar4 + 300) != '\0') == uVar7) {
                return plVar4;
              }
              if (auVar20._8_4_ != 0) {
                (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
              }
              *(char *)((long)plVar4 + 300) = (char)uVar7;
              if (((plVar4[9] != 0) && (lVar8 = *(long *)(plVar4[9] + 0x28), lVar8 != 0)) &&
                 (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar8 != 0)) {
                *(undefined8 *)((long)plVar1 + -0x30) = 0x3d23990;
                *(undefined8 *)((long)plVar1 + -0x28) = 0x3d23990;
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
                plVar2 = (long *)(*pcRam0000000003ebf4c0)(lVar8,uVar7 ^ 1);
                return plVar2;
              }
              plVar2 = (long *)func_0x00f78af4();
              return plVar2;
            }
            if (*(char *)(plVar4[0x18] + 0x50) == '\0') {
              auVar20._8_4_ = 1;
              auVar20._0_8_ = plVar2;
              uVar7 = 1;
              plVar1 = &uStack_200;
              plVar2 = plStack_218;
              lVar8 = lStack_220;
              pppppppuVar13 = pppppppuStack_210;
              puVar14 = puStack_208;
              goto code_r0x014ceb60;
            }
          }
          if ((char)plVar2[0xc] != '\0') {
            return plVar4;
          }
          uVar6 = 1;
code_r0x01523e20:
          *(undefined1 *)(plVar2 + 0xc) = 1;
          *(undefined1 *)((long)plVar2 + 0x61) = uVar6;
          return plVar2;
        }
        if (*(char *)(lVar9 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar9 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar4 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar8 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar8 + 0x28) >> ((ulong)*(uint *)(lVar9 + 0x198) & 0x3f) &
                             0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14ce37c | Atlas.Gameplay.Usables.ProjectileUsable.SetForceToFloorNetworkFlag
// ============================================================

/* WARNING: Possible PIC construction at 0x014ce554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ce59c) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce5b4) */
/* WARNING: Removing unreachable block (ram,0x014ce5bc) */
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

long * Atlas_Gameplay_Usables_ProjectileUsable__SetForceToFloorNetworkFlag
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long param_5,ulong param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  int extraout_w1;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  long lStack_1f0;
  long *plStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long lStack_190;
  long *plStack_188;
  undefined8 *****pppppuStack_180;
  undefined *puStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  float fStack_164;
  undefined4 uStack_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  float fStack_150;
  float fStack_14c;
  undefined4 uStack_148;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4b72 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b72 = 1;
  }
  uVar12 = *(undefined8 *)(param_5 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  lVar8 = *(long *)(param_5 + 200);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x44) == '\0') {
      return plVar2;
    }
    *(ulong *)(lVar8 + 0x48) = *(ulong *)(lVar8 + 0x48) | param_6 & 0xffffffff;
    return plVar2;
  }
  auVar19 = func_0x00f78af4();
  plVar4 = auVar19._8_8_;
  plVar2 = auVar19._0_8_;
  puStack_38 = &Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  if ((*(char *)((long)plVar2 + 300) == '\0') || ((char)plVar2[0xc] != '\0')) {
code_r0x014ce558:
    lVar8 = plVar2[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar2 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
    puVar14 = &UNK_014ce59c;
  }
  else {
    if (plVar4 != (long *)0x0) {
      fVar18 = *(float *)(plVar2 + 0x2c);
      lVar8 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014ce520;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce520:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      fVar18 = fVar18 + (float)CONCAT13(extraout_var_13,
                                        CONCAT12(extraout_var_06,CONCAT11(extraout_var,extraout_b0))
                                       );
      *(float *)(plVar2 + 0x2c) = fVar18;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar18) {
        *(undefined4 *)(plVar2 + 0x2c) = 0;
        uVar6 = 0;
        goto code_r0x01523e20;
      }
      goto code_r0x014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar8 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,uRam0000000003d328c8);
      if (lVar8 == 0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
        return plVar2;
      }
      func_0x00f78ac0(lVar8,0);
    }
    puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar19 = __Unwind_Resume();
  }
  plVar4 = auVar19._8_8_;
  plVar2 = auVar19._0_8_;
  lVar8 = 0x3eb4000;
  pppuStack_e0 = (undefined8 ***)&puStack_40;
  puStack_d8 = puVar14;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar2[0x19] != 0) {
    plVar5 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar2[0x19],0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if (plVar4 != (long *)0x0) {
      lVar8 = plVar2[0x19];
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((plVar2[0x1f] != 0) && (lVar9 = *(long *)(plVar2[0x1f] + 0x18), lVar9 != 0)) {
        lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
        if (lVar9 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar9,0);
          if ((plVar2[0x1f] != 0) && (lVar9 = *(long *)(plVar2[0x1f] + 0x18), lVar9 != 0)) {
            fVar18 = param_2;
            fVar16 = param_3;
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar9,0);
            if ((plVar2[0x1f] != 0) && (lVar9 = *(long *)(plVar2[0x1f] + 0x18), lVar9 != 0)) {
              fVar15 = fVar18;
              fVar17 = fVar16;
              lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
              if ((lVar9 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar9,0), lVar8 != 0)) {
                uStack_154 = CONCAT13(extraout_var_17,
                                      CONCAT12(extraout_var_10,
                                               CONCAT11(extraout_var_03,extraout_b0_03)));
                uStack_170 = CONCAT13(extraout_var_14,
                                      CONCAT12(extraout_var_07,
                                               CONCAT11(extraout_var_00,extraout_b0_00)));
                uStack_16c = CONCAT13(extraout_var_15,
                                      CONCAT12(extraout_var_08,
                                               CONCAT11(extraout_var_01,extraout_b0_01)));
                fStack_168 = param_2;
                fStack_164 = param_3;
                uStack_160 = CONCAT13(extraout_var_16,
                                      CONCAT12(extraout_var_09,
                                               CONCAT11(extraout_var_02,extraout_b0_02)));
                fStack_15c = fVar18;
                fStack_158 = fVar16;
                fStack_150 = fVar15;
                fStack_14c = fVar17;
                uStack_148 = param_4;
                /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar8,&uStack_170,0);
                plVar5 = (long *)plVar2[0x19];
                if (plVar5 != (long *)0x0) {
                  if (*(char *)((long)plVar5 + 0x44) != '\0') {
                    return plVar5;
                  }
                  plVar5 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar5,0);
                  if (*(char *)((long)plVar2 + 0x15c) == '\0') {
                    if (((float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) ==
                         _UNK_033f7d80 ||
                         (float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) <
                         _UNK_033f7d80) && (fVar17 <= _UNK_033f7d80)) {
                      return plVar5;
                    }
                    *(undefined1 *)((long)plVar2 + 0x15c) = 1;
                    return plVar5;
                  }
                  if (((((float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) <
                         _UNK_033f7d80) && (fVar15 < _UNK_033f7d80)) && (fVar17 < _UNK_033f7d80)) &&
                     (*(char *)((long)plVar2 + 0x12d) != '\0')) {
                    fVar18 = *(float *)(plVar2 + 0x2b);
                    plVar4 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                    fVar18 = fVar18 + (float)CONCAT13(extraout_var_19,
                                                      CONCAT12(extraout_var_12,
                                                               CONCAT11(extraout_var_05,
                                                                        extraout_b0_05)));
                    *(float *)(plVar2 + 0x2b) = fVar18;
                    if (fVar18 < _UNK_033f83ec) {
                      return plVar4;
                    }
code_r0x014ce940:
                    plVar2 = (long *)(**(code **)(*plVar2 + 0x228))
                                               (plVar2,*(undefined8 *)(*plVar2 + 0x230));
                    return plVar2;
                  }
                  if (plVar2[0x19] != 0) {
                    plVar4 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar2[0x19],0);
                    if ((int)plVar4 == 0) {
                      *(undefined4 *)(plVar2 + 0x2b) = 0;
                      return plVar4;
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
  uStack_1a0 = 0x3d23990;
  puStack_178 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  lStack_190 = lVar8;
  pppppuStack_180 = (undefined8 *****)&pppuStack_e0;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    plStack_198 = plVar4;
    plStack_188 = plVar2;
    func_0x00f78a20(0x3d23990);
    auVar19._8_8_ = plStack_198;
    auVar19._0_8_ = plStack_188;
    bRam0000000003eb4b76 = 1;
  }
  plStack_198 = auVar19._8_8_;
  plStack_188 = auVar19._0_8_;
  uVar12 = *(undefined8 *)(lVar9 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar19._8_8_ = plStack_198;
    auVar19._0_8_ = plStack_188;
  }
  plStack_198 = auVar19._8_8_;
  plStack_188 = auVar19._0_8_;
  uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if ((uVar10 & 1) == 0) {
    lVar8 = *(long *)(lVar9 + 200);
    if (lVar8 == 0) {
      plVar4 = (long *)func_0x00f78af4();
      uStack_1d0 = 0x3d23990;
      uStack_1c8 = 0x3d23990;
      puStack_1a8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      uStack_1c0 = uVar12;
      lStack_1b8 = lVar9;
      ppppppuStack_1b0 = &pppppuStack_180;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar8 = plVar4[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
      uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0);
      if ((uVar10 & 1) == 0) {
        lVar9 = plVar4[0x19];
        if (lVar9 == 0) {
          plVar2 = (long *)func_0x00f78af4();
          plVar1 = &lStack_1f0;
          puStack_1d8 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar13 = &pppppppuStack_1e0;
          lStack_1f0 = lVar8;
          plStack_1e8 = plVar4;
          pppppppuStack_1e0 = &ppppppuStack_1b0;
          plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar2,0);
          if (((ulong)plVar4 & 1) == 0) {
            plVar4 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar2,0);
            if ((plVar4 == (long *)0x0) || (plVar4[0x18] == 0)) {
              puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar20 = func_0x00f78af4();
code_r0x014ceb60:
              plVar4 = auVar20._0_8_;
              *(long *)((long)plVar1 + -0x20) = lVar8;
              *(long **)((long)plVar1 + -0x18) = plVar2;
              *(undefined8 ********)((long)plVar1 + -0x10) = pppppppuVar13;
              *(undefined **)((long)plVar1 + -8) = puVar14;
              if ((*(char *)((long)plVar4 + 300) != '\0') == uVar7) {
                return plVar4;
              }
              if (auVar20._8_4_ != 0) {
                (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
              }
              *(char *)((long)plVar4 + 300) = (char)uVar7;
              if (((plVar4[9] != 0) && (lVar8 = *(long *)(plVar4[9] + 0x28), lVar8 != 0)) &&
                 (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar8 != 0)) {
                *(undefined8 *)((long)plVar1 + -0x30) = 0x3d23990;
                *(undefined8 *)((long)plVar1 + -0x28) = 0x3d23990;
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
                plVar2 = (long *)(*pcRam0000000003ebf4c0)(lVar8,uVar7 ^ 1);
                return plVar2;
              }
              plVar2 = (long *)func_0x00f78af4();
              return plVar2;
            }
            if (*(char *)(plVar4[0x18] + 0x50) == '\0') {
              auVar20._8_4_ = 1;
              auVar20._0_8_ = plVar2;
              uVar7 = 1;
              plVar1 = &uStack_1d0;
              plVar2 = plStack_1e8;
              lVar8 = lStack_1f0;
              pppppppuVar13 = pppppppuStack_1e0;
              puVar14 = puStack_1d8;
              goto code_r0x014ceb60;
            }
          }
          if ((char)plVar2[0xc] != '\0') {
            return plVar4;
          }
          uVar6 = 1;
code_r0x01523e20:
          *(undefined1 *)(plVar2 + 0xc) = 1;
          *(undefined1 *)((long)plVar2 + 0x61) = uVar6;
          return plVar2;
        }
        if (*(char *)(lVar9 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar9 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar4 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar8 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar8 + 0x28) >> ((ulong)*(uint *)(lVar9 + 0x198) & 0x3f) &
                             0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14ce420 | Atlas.Gameplay.Usables.ProjectileUsable.EarlyUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014ce554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ce5c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ce59c) */
/* WARNING: Removing unreachable block (ram,0x014ce5ac) */
/* WARNING: Removing unreachable block (ram,0x014ce5b4) */
/* WARNING: Removing unreachable block (ram,0x014ce5bc) */
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

long * Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long *param_5,long *param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  int extraout_w1;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  long lStack_1c0;
  long *plStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 ******ppppppuStack_180;
  undefined *puStack_178;
  undefined8 *****pppppuStack_150;
  undefined *puStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  undefined4 uStack_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined8 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  auVar19._8_8_ = param_6;
  auVar19._0_8_ = param_5;
  if ((bRam0000000003eb4b70 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b70 = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  if ((*(char *)((long)param_5 + 300) == '\0') || ((char)param_5[0xc] != '\0')) {
LAB_014ce558:
    lVar8 = param_5[0x19];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar3 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
    if ((int)plVar3 == 0) {
      return plVar3;
    }
    puVar14 = &UNK_014ce59c;
  }
  else {
    if (param_6 != (long *)0x0) {
      fVar18 = *(float *)(param_5 + 0x2c);
      lVar8 = *param_6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_014ce520;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(param_6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_014ce520:
      (*(code *)*puVar2)(param_6,puVar2[1]);
      fVar18 = fVar18 + (float)CONCAT13(extraout_var_13,
                                        CONCAT12(extraout_var_06,CONCAT11(extraout_var,extraout_b0))
                                       );
      *(float *)(param_5 + 0x2c) = fVar18;
      param_2 = _UNK_033f8508;
      if (_UNK_033f8508 <= fVar18) {
        *(undefined4 *)(param_5 + 0x2c) = 0;
        uVar6 = 0;
        goto code_r0x01523e20;
      }
      goto LAB_014ce558;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar3 = (long *)___cxa_begin_catch();
      lVar8 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d328c8);
      if (lVar8 == 0) {
        plVar3 = (long *)(**(code **)(*param_5 + 0x228))(param_5,*(undefined8 *)(*param_5 + 0x230));
        return plVar3;
      }
      func_0x00f78ac0(lVar8,0);
    }
    puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator;
    auVar19 = __Unwind_Resume();
  }
  plVar5 = auVar19._8_8_;
  plVar3 = auVar19._0_8_;
  pppuStack_b0 = (undefined8 ***)&stack0xfffffffffffffff0;
  puStack_a8 = puVar14;
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (plVar3[0x19] != 0) {
    plVar4 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(plVar3[0x19],0);
    if ((int)plVar4 == 0) {
      return plVar4;
    }
    if (plVar5 != (long *)0x0) {
      lVar11 = plVar3[0x19];
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x014ce7e4;
          }
          piVar10 = piVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014ce7e4:
      (*(code *)*puVar2)(plVar5,puVar2[1]);
      if ((plVar3[0x1f] != 0) && (lVar8 = *(long *)(plVar3[0x1f] + 0x18), lVar8 != 0)) {
        lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
        if (lVar8 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
          if ((plVar3[0x1f] != 0) && (lVar8 = *(long *)(plVar3[0x1f] + 0x18), lVar8 != 0)) {
            fVar18 = param_2;
            fVar16 = param_3;
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar8,0);
            if ((plVar3[0x1f] != 0) && (lVar8 = *(long *)(plVar3[0x1f] + 0x18), lVar8 != 0)) {
              fVar15 = fVar18;
              fVar17 = fVar16;
              lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
              if ((lVar8 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar8,0), lVar11 != 0)) {
                uStack_124 = CONCAT13(extraout_var_17,
                                      CONCAT12(extraout_var_10,
                                               CONCAT11(extraout_var_03,extraout_b0_03)));
                uStack_140 = CONCAT13(extraout_var_14,
                                      CONCAT12(extraout_var_07,
                                               CONCAT11(extraout_var_00,extraout_b0_00)));
                uStack_13c = CONCAT13(extraout_var_15,
                                      CONCAT12(extraout_var_08,
                                               CONCAT11(extraout_var_01,extraout_b0_01)));
                fStack_138 = param_2;
                fStack_134 = param_3;
                uStack_130 = CONCAT13(extraout_var_16,
                                      CONCAT12(extraout_var_09,
                                               CONCAT11(extraout_var_02,extraout_b0_02)));
                fStack_12c = fVar18;
                fStack_128 = fVar16;
                fStack_120 = fVar15;
                fStack_11c = fVar17;
                uStack_118 = param_4;
                /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar11,&uStack_140,0);
                plVar5 = (long *)plVar3[0x19];
                if (plVar5 != (long *)0x0) {
                  if (*(char *)((long)plVar5 + 0x44) != '\0') {
                    return plVar5;
                  }
                  plVar5 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar5,0);
                  if (*(char *)((long)plVar3 + 0x15c) == '\0') {
                    if (((float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) ==
                         _UNK_033f7d80 ||
                         (float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) <
                         _UNK_033f7d80) && (fVar17 <= _UNK_033f7d80)) {
                      return plVar5;
                    }
                    *(undefined1 *)((long)plVar3 + 0x15c) = 1;
                    return plVar5;
                  }
                  if (((((float)CONCAT13(extraout_var_18,
                                         CONCAT12(extraout_var_11,
                                                  CONCAT11(extraout_var_04,extraout_b0_04))) <
                         _UNK_033f7d80) && (fVar15 < _UNK_033f7d80)) && (fVar17 < _UNK_033f7d80)) &&
                     (*(char *)((long)plVar3 + 0x12d) != '\0')) {
                    fVar18 = *(float *)(plVar3 + 0x2b);
                    plVar5 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                    fVar18 = fVar18 + (float)CONCAT13(extraout_var_19,
                                                      CONCAT12(extraout_var_12,
                                                               CONCAT11(extraout_var_05,
                                                                        extraout_b0_05)));
                    *(float *)(plVar3 + 0x2b) = fVar18;
                    if (fVar18 < _UNK_033f83ec) {
                      return plVar5;
                    }
code_r0x014ce940:
                    plVar3 = (long *)(**(code **)(*plVar3 + 0x228))
                                               (plVar3,*(undefined8 *)(*plVar3 + 0x230));
                    return plVar3;
                  }
                  if (plVar3[0x19] != 0) {
                    plVar5 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(plVar3[0x19],0);
                    if ((int)plVar5 == 0) {
                      *(undefined4 *)(plVar3 + 0x2b) = 0;
                      return plVar5;
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
  lVar8 = func_0x00f78af4();
  puStack_148 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  pppppuStack_150 = (undefined8 *****)&pppuStack_b0;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b76 = 1;
  }
  uVar12 = *(undefined8 *)(lVar8 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if ((uVar9 & 1) == 0) {
    lVar11 = *(long *)(lVar8 + 200);
    if (lVar11 == 0) {
      plVar3 = (long *)func_0x00f78af4();
      puStack_178 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      ppppppuStack_180 = &pppppuStack_150;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar8 = plVar3[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
      uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0);
      if ((uVar9 & 1) == 0) {
        lVar11 = plVar3[0x19];
        if (lVar11 == 0) {
          param_5 = (long *)func_0x00f78af4();
          plVar1 = &lStack_1c0;
          puStack_1a8 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar13 = &pppppppuStack_1b0;
          lStack_1c0 = lVar8;
          plStack_1b8 = plVar3;
          pppppppuStack_1b0 = &ppppppuStack_180;
          plVar3 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_5,0);
          if (((ulong)plVar3 & 1) == 0) {
            plVar3 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_5,0);
            if ((plVar3 == (long *)0x0) || (plVar3[0x18] == 0)) {
              puVar14 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
              auVar20 = func_0x00f78af4();
code_r0x014ceb60:
              plVar3 = auVar20._0_8_;
              *(long *)((long)plVar1 + -0x20) = lVar8;
              *(long **)((long)plVar1 + -0x18) = param_5;
              *(undefined8 ********)((long)plVar1 + -0x10) = pppppppuVar13;
              *(undefined **)((long)plVar1 + -8) = puVar14;
              if ((*(char *)((long)plVar3 + 300) != '\0') == uVar7) {
                return plVar3;
              }
              if (auVar20._8_4_ != 0) {
                (**(code **)(*plVar3 + 0x448))(plVar3,*(undefined8 *)(*plVar3 + 0x450));
              }
              *(char *)((long)plVar3 + 300) = (char)uVar7;
              if (((plVar3[9] != 0) && (lVar8 = *(long *)(plVar3[9] + 0x28), lVar8 != 0)) &&
                 (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar8 != 0)) {
                *(undefined8 *)((long)plVar1 + -0x30) = unaff_x22;
                *(undefined8 *)((long)plVar1 + -0x28) = 0x3d23990;
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
                plVar3 = (long *)(*pcRam0000000003ebf4c0)(lVar8,uVar7 ^ 1);
                return plVar3;
              }
              plVar3 = (long *)func_0x00f78af4();
              return plVar3;
            }
            if (*(char *)(plVar3[0x18] + 0x50) == '\0') {
              auVar20._8_4_ = 1;
              auVar20._0_8_ = param_5;
              uVar7 = 1;
              plVar1 = (long *)&stack0xfffffffffffffe60;
              param_5 = plStack_1b8;
              lVar8 = lStack_1c0;
              pppppppuVar13 = pppppppuStack_1b0;
              puVar14 = puStack_1a8;
              goto code_r0x014ceb60;
            }
          }
          if ((char)param_5[0xc] != '\0') {
            return plVar3;
          }
          uVar6 = 1;
code_r0x01523e20:
          *(undefined1 *)(param_5 + 0xc) = 1;
          *(undefined1 *)((long)param_5 + 0x61) = uVar6;
          return param_5;
        }
        if (*(char *)(lVar11 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar11 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar3 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar11 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar11 + 0x28) >> ((ulong)*(uint *)(lVar8 + 0x198) & 0x3f)
                             & 0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14ce728 | Atlas.Gameplay.Usables.ProjectileUsable.UpdateReplicator
// ============================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_ProjectileUsable__UpdateReplicator
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long *param_5,long *param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float extraout_s0;
  float extraout_s0_00;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [12];
  long lStack_120;
  long *plStack_118;
  undefined8 *******pppppppuStack_110;
  undefined *puStack_108;
  undefined8 ******ppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  
  if ((bRam0000000003eb4b7e & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4b7e = 1;
  }
  if (param_5[0x19] != 0) {
    plVar2 = (long *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(param_5[0x19],0);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
    if (param_6 != (long *)0x0) {
      lVar9 = param_5[0x19];
      lVar6 = *param_6;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_014ce7e4;
          }
          piVar8 = piVar8 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(param_6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_014ce7e4:
      uVar13 = (*(code *)*puVar3)(param_6,puVar3[1]);
      if (((param_5[0x1f] != 0) && (lVar6 = *(long *)(param_5[0x1f] + 0x18), lVar6 != 0)) &&
         (lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0), lVar6 != 0)) {
        uVar14 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar6,0);
        if ((param_5[0x1f] != 0) && (lVar6 = *(long *)(param_5[0x1f] + 0x18), lVar6 != 0)) {
          fVar20 = param_2;
          fVar18 = param_3;
          uVar15 = /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar6,0);
          if (((param_5[0x1f] != 0) &&
              ((lVar6 = *(long *)(param_5[0x1f] + 0x18), lVar6 != 0 &&
               (fVar17 = fVar20, fVar19 = fVar18, lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0), lVar6 != 0))))
             && (uVar16 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar6,0), lVar9 != 0)) {
            uStack_a0 = uVar13;
            uStack_9c = uVar14;
            fStack_98 = param_2;
            fStack_94 = param_3;
            uStack_90 = uVar15;
            fStack_8c = fVar20;
            fStack_88 = fVar18;
            uStack_84 = uVar16;
            fStack_80 = fVar17;
            fStack_7c = fVar19;
            uStack_78 = param_4;
            /*Core.Services.Replicator$$UpdateTransform*/ func_0x0167f264(lVar9,&uStack_a0,0);
            plVar2 = (long *)param_5[0x19];
            if (plVar2 != (long *)0x0) {
              if (*(char *)((long)plVar2 + 0x44) != '\0') {
                return plVar2;
              }
              plVar2 = (long *)/*Core.Services.Replicator$$get_RigidBodyVelocity*/ func_0x0167f248(plVar2,0);
              if (*(char *)((long)param_5 + 0x15c) == '\0') {
                if ((extraout_s0 <= _UNK_033f7d80) && (fVar19 <= _UNK_033f7d80)) {
                  return plVar2;
                }
                *(undefined1 *)((long)param_5 + 0x15c) = 1;
                return plVar2;
              }
              if ((((extraout_s0 < _UNK_033f7d80) && (fVar17 < _UNK_033f7d80)) &&
                  (fVar19 < _UNK_033f7d80)) && (*(char *)((long)param_5 + 0x12d) != '\0')) {
                fVar20 = *(float *)(param_5 + 0x2b);
                plVar2 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
                *(float *)(param_5 + 0x2b) = fVar20 + extraout_s0_00;
                if (fVar20 + extraout_s0_00 < _UNK_033f83ec) {
                  return plVar2;
                }
code_r0x014ce940:
                plVar2 = (long *)(**(code **)(*param_5 + 0x228))
                                           (param_5,*(undefined8 *)(*param_5 + 0x230));
                return plVar2;
              }
              if (param_5[0x19] != 0) {
                plVar2 = (long *)/*Core.Services.Replicator$$get_VelocityOnlyMode*/ func_0x0167f208(param_5[0x19],0);
                if ((int)plVar2 == 0) {
                  *(undefined4 *)(param_5 + 0x2b) = 0;
                  return plVar2;
                }
                goto code_r0x014ce940;
              }
            }
          }
        }
      }
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_a8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag;
  pppppuStack_b0 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b76 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b76 = 1;
  }
  uVar10 = *(undefined8 *)(lVar6 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar10,0,0);
  if ((uVar7 & 1) == 0) {
    lVar9 = *(long *)(lVar6 + 200);
    if (lVar9 == 0) {
      plVar2 = (long *)func_0x00f78af4();
      puStack_d8 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      ppppppuStack_e0 = &pppppuStack_b0;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar6 = plVar2[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = 0;
      uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar6,0);
      if ((uVar7 & 1) == 0) {
        lVar9 = plVar2[0x19];
        if (lVar9 == 0) {
          plVar4 = (long *)func_0x00f78af4();
          plVar1 = &lStack_120;
          puStack_108 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          pppppppuVar11 = &pppppppuStack_110;
          lStack_120 = lVar6;
          plStack_118 = plVar2;
          pppppppuStack_110 = &ppppppuStack_e0;
          plVar2 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar4,0);
          if (((ulong)plVar2 & 1) != 0) {
code_r0x014ceb18:
            if ((char)plVar4[0xc] == '\0') {
              *(undefined1 *)(plVar4 + 0xc) = 1;
              *(undefined1 *)((long)plVar4 + 0x61) = 1;
              return plVar4;
            }
            return plVar2;
          }
          plVar2 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar4,0);
          if ((plVar2 == (long *)0x0) || (plVar2[0x18] == 0)) {
            puVar12 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
            auVar21 = func_0x00f78af4();
          }
          else {
            if (*(char *)(plVar2[0x18] + 0x50) != '\0') goto code_r0x014ceb18;
            auVar21._8_4_ = 1;
            auVar21._0_8_ = plVar4;
            uVar5 = 1;
            plVar1 = (long *)&stack0xffffffffffffff00;
            plVar4 = plStack_118;
            lVar6 = lStack_120;
            pppppppuVar11 = pppppppuStack_110;
            puVar12 = puStack_108;
          }
          plVar2 = auVar21._0_8_;
          *(long *)((long)plVar1 + -0x20) = lVar6;
          *(long **)((long)plVar1 + -0x18) = plVar4;
          *(undefined8 ********)((long)plVar1 + -0x10) = pppppppuVar11;
          *(undefined **)((long)plVar1 + -8) = puVar12;
          if ((*(char *)((long)plVar2 + 300) != '\0') == uVar5) {
            return plVar2;
          }
          if (auVar21._8_4_ != 0) {
            (**(code **)(*plVar2 + 0x448))(plVar2,*(undefined8 *)(*plVar2 + 0x450));
          }
          *(char *)((long)plVar2 + 300) = (char)uVar5;
          if (((plVar2[9] != 0) && (lVar6 = *(long *)(plVar2[9] + 0x28), lVar6 != 0)) &&
             (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar6,0), lVar6 != 0)) {
            *(undefined8 *)((long)plVar1 + -0x30) = unaff_x22;
            *(undefined8 *)((long)plVar1 + -0x28) = 0x3d23990;
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
            plVar2 = (long *)(*pcRam0000000003ebf4c0)(lVar6,uVar5 ^ 1);
            return plVar2;
          }
          plVar2 = (long *)func_0x00f78af4();
          return plVar2;
        }
        if (*(char *)(lVar9 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar9 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar2 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar9 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar9 + 0x28) >> ((ulong)*(uint *)(lVar6 + 0x198) & 0x3f) &
                             0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14ce988 | Atlas.Gameplay.Usables.ProjectileUsable.GetHitNetworkFlag
// ============================================================

long * Atlas_Gameplay_Usables_ProjectileUsable__GetHitNetworkFlag(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined1 auVar11 [12];
  long lStack_80;
  long *plStack_78;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4b76 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b76 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(param_1 + 200);
    if (lVar6 == 0) {
      plVar3 = (long *)func_0x00f78af4();
      puStack_38 = &Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId;
      ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
      if ((bRam0000000003eb4b77 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b77 = 1;
      }
      lVar6 = plVar3[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = 0;
      uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar6,0);
      if ((uVar2 & 1) == 0) {
        lVar7 = plVar3[0x19];
        if (lVar7 == 0) {
          plVar4 = (long *)func_0x00f78af4();
          plVar1 = &lStack_80;
          puStack_68 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
          ppppuVar9 = &pppuStack_70;
          lStack_80 = lVar6;
          plStack_78 = plVar3;
          pppuStack_70 = &ppuStack_40;
          plVar3 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar4,0);
          if (((ulong)plVar3 & 1) != 0) {
code_r0x014ceb18:
            if ((char)plVar4[0xc] == '\0') {
              *(undefined1 *)(plVar4 + 0xc) = 1;
              *(undefined1 *)((long)plVar4 + 0x61) = 1;
              return plVar4;
            }
            return plVar3;
          }
          plVar3 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar4,0);
          if ((plVar3 == (long *)0x0) || (plVar3[0x18] == 0)) {
            puVar10 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
            auVar11 = func_0x00f78af4();
          }
          else {
            if (*(char *)(plVar3[0x18] + 0x50) != '\0') goto code_r0x014ceb18;
            auVar11._8_4_ = 1;
            auVar11._0_8_ = plVar4;
            uVar5 = 1;
            plVar1 = (long *)&stack0xffffffffffffffa0;
            plVar4 = plStack_78;
            lVar6 = lStack_80;
            ppppuVar9 = (undefined8 ****)pppuStack_70;
            puVar10 = puStack_68;
          }
          plVar3 = auVar11._0_8_;
          *(long *)((long)plVar1 + -0x20) = lVar6;
          *(long **)((long)plVar1 + -0x18) = plVar4;
          *(undefined8 *****)((long)plVar1 + -0x10) = ppppuVar9;
          *(undefined **)((long)plVar1 + -8) = puVar10;
          if ((*(char *)((long)plVar3 + 300) != '\0') == uVar5) {
            return plVar3;
          }
          if (auVar11._8_4_ != 0) {
            (**(code **)(*plVar3 + 0x448))(plVar3,*(undefined8 *)(*plVar3 + 0x450));
          }
          *(char *)((long)plVar3 + 300) = (char)uVar5;
          if (((plVar3[9] != 0) && (lVar6 = *(long *)(plVar3[9] + 0x28), lVar6 != 0)) &&
             (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar6,0), lVar6 != 0)) {
            *(undefined8 *)((long)plVar1 + -0x30) = unaff_x22;
            *(undefined8 *)((long)plVar1 + -0x28) = 0x3d23990;
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
            plVar3 = (long *)(*pcRam0000000003ebf4c0)(lVar6,uVar5 ^ 1);
            return plVar3;
          }
          plVar3 = (long *)func_0x00f78af4();
          return plVar3;
        }
        if (*(char *)(lVar7 + 0x44) == '\0') {
          return (long *)(*(ulong *)(lVar7 + 0x28) >>
                         ((ulong)*(uint *)((long)plVar3 + 0x19c) & 0x3f));
        }
      }
      return (long *)0xffffffff;
    }
    if (*(char *)(lVar6 + 0x44) == '\0') {
      return (long *)(ulong)((*(ulong *)(lVar6 + 0x28) >> ((ulong)*(uint *)(param_1 + 0x198) & 0x3f)
                             & 0xff) == 1);
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x14cea38 | Atlas.Gameplay.Usables.ProjectileUsable.GetHitSyncId
// ============================================================

long * Atlas_Gameplay_Usables_ProjectileUsable__GetHitSyncId(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar8;
  undefined *puVar9;
  undefined1 auVar10 [12];
  long lStack_50;
  long *plStack_48;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4b77 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b77 = 1;
  }
  lVar7 = param_1[0x19];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = 0;
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar7,0);
  if ((uVar2 & 1) == 0) {
    lVar6 = param_1[0x19];
    if (lVar6 == 0) {
      plVar3 = (long *)func_0x00f78af4();
      plVar1 = &lStack_50;
      puStack_38 = &Atlas_Gameplay_Usables_ProjectileUsable__Destroy;
      ppppuVar8 = &pppuStack_40;
      lStack_50 = lVar7;
      plStack_48 = param_1;
      pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
      plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar3,0);
      if (((ulong)plVar4 & 1) != 0) {
code_r0x014ceb18:
        if ((char)plVar3[0xc] == '\0') {
          *(undefined1 *)(plVar3 + 0xc) = 1;
          *(undefined1 *)((long)plVar3 + 0x61) = 1;
          return plVar3;
        }
        return plVar4;
      }
      plVar4 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar3,0);
      if ((plVar4 == (long *)0x0) || (plVar4[0x18] == 0)) {
        puVar9 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
        auVar10 = func_0x00f78af4();
      }
      else {
        if (*(char *)(plVar4[0x18] + 0x50) != '\0') goto code_r0x014ceb18;
        auVar10._8_4_ = 1;
        auVar10._0_8_ = plVar3;
        uVar5 = 1;
        plVar1 = (long *)&stack0xffffffffffffffd0;
        plVar3 = plStack_48;
        lVar7 = lStack_50;
        ppppuVar8 = (undefined8 ****)pppuStack_40;
        puVar9 = puStack_38;
      }
      plVar4 = auVar10._0_8_;
      *(long *)((long)plVar1 + -0x20) = lVar7;
      *(long **)((long)plVar1 + -0x18) = plVar3;
      *(undefined8 *****)((long)plVar1 + -0x10) = ppppuVar8;
      *(undefined **)((long)plVar1 + -8) = puVar9;
      if ((*(char *)((long)plVar4 + 300) != '\0') == uVar5) {
        return plVar4;
      }
      if (auVar10._8_4_ != 0) {
        (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
      }
      *(char *)((long)plVar4 + 300) = (char)uVar5;
      if (((plVar4[9] != 0) && (lVar7 = *(long *)(plVar4[9] + 0x28), lVar7 != 0)) &&
         (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0), lVar7 != 0)) {
        *(undefined8 *)((long)plVar1 + -0x30) = unaff_x22;
        *(undefined8 *)((long)plVar1 + -0x28) = 0x3d23990;
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
        plVar3 = (long *)(*pcRam0000000003ebf4c0)(lVar7,uVar5 ^ 1);
        return plVar3;
      }
      plVar3 = (long *)func_0x00f78af4();
      return plVar3;
    }
    if (*(char *)(lVar6 + 0x44) == '\0') {
      return (long *)(*(ulong *)(lVar6 + 0x28) >> ((ulong)*(uint *)((long)param_1 + 0x19c) & 0x3f));
    }
  }
  return (long *)0xffffffff;
}



// ============================================================
// RVA: 0x14ceadc | Atlas.Gameplay.Usables.ProjectileUsable.Destroy
// ============================================================

void Atlas_Gameplay_Usables_ProjectileUsable__Destroy(long *param_1,undefined8 param_2,uint param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined *unaff_x30;
  undefined1 auVar7 [12];
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xfffffffffffffff0;
  uVar2 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_1,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0xc0) == 0)) {
      unaff_x30 = &Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
      auVar7 = func_0x00f78af4();
      iVar5 = auVar7._8_4_;
      plVar4 = auVar7._0_8_;
    }
    else {
      if (*(char *)(*(long *)(lVar3 + 0xc0) + 0x50) != '\0') goto LAB_014ceb18;
      iVar5 = 1;
      param_3 = 1;
      puVar1 = (undefined1 *)register0x00000008;
      plVar4 = param_1;
      param_1 = unaff_x19;
      puVar6 = unaff_x29;
    }
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long **)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar6;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    if ((*(char *)((long)plVar4 + 300) != '\0') == param_3) {
      return;
    }
    if (iVar5 != 0) {
      (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
    }
    *(char *)((long)plVar4 + 300) = (char)param_3;
    if (((plVar4[9] != 0) && (lVar3 = *(long *)(plVar4[9] + 0x28), lVar3 != 0)) &&
       (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0), lVar3 != 0)) {
      *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ebf4c0)(lVar3,param_3 ^ 1);
      return;
    }
    func_0x00f78af4();
    return;
  }
LAB_014ceb18:
  if ((char)param_1[0xc] != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined1 *)((long)param_1 + 0x61) = 1;
  return;
}



// ============================================================
// RVA: 0x14ceb60 | Atlas.Gameplay.Usables.ProjectileUsable.SetToGhostProjectile
// ============================================================

void Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile
               (long *param_1,int param_2,uint param_3)

{
  long lVar1;
  
  if ((*(char *)((long)param_1 + 300) != '\0') == param_3) {
    return;
  }
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
  }
  *(char *)((long)param_1 + 300) = (char)param_3;
  if (((param_1[9] != 0) && (lVar1 = *(long *)(param_1[9] + 0x28), lVar1 != 0)) &&
     (lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar1,0), lVar1 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar1,param_3 ^ 1);
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14cebe4 | Atlas.Gameplay.Usables.ProjectileUsable.PlayUseSound
// ============================================================

void Atlas_Gameplay_Usables_ProjectileUsable__PlayUseSound(void)

{
  return;
}



// ============================================================
// RVA: 0x14cebe8 | Atlas.Gameplay.Usables.ProjectileUsable.PlayRicochetSound
// ============================================================

void Atlas_Gameplay_Usables_ProjectileUsable__PlayRicochetSound(void)

{
  return;
}



// ============================================================
// RVA: 0x14cebec | Atlas.Gameplay.Usables.ProjectileUsable.PlayKillSound
// ============================================================

void Atlas_Gameplay_Usables_ProjectileUsable__PlayKillSound(void)

{
  return;
}



// ============================================================
// RVA: 0x14cebf0 | Atlas.Gameplay.Usables.ProjectileUsable.OnCollisionEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x014ccd04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ccf04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014ccfe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cd078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014ccfe8) */
/* WARNING: Removing unreachable block (ram,0x014ccfec) */
/* WARNING: Removing unreachable block (ram,0x014ccff0) */
/* WARNING: Removing unreachable block (ram,0x014ccff4) */
/* WARNING: Removing unreachable block (ram,0x014ccff8) */
/* WARNING: Removing unreachable block (ram,0x014ccffc) */
/* WARNING: Removing unreachable block (ram,0x014cd010) */
/* WARNING: Removing unreachable block (ram,0x014ccf08) */
/* WARNING: Removing unreachable block (ram,0x014ccf20) */
/* WARNING: Removing unreachable block (ram,0x014ccf30) */
/* WARNING: Removing unreachable block (ram,0x014ccf50) */
/* WARNING: Removing unreachable block (ram,0x014ccf58) */
/* WARNING: Removing unreachable block (ram,0x014ccf5c) */
/* WARNING: Removing unreachable block (ram,0x014ccf0c) */
/* WARNING: Removing unreachable block (ram,0x014ccd08) */
/* WARNING: Removing unreachable block (ram,0x014ccd0c) */
/* WARNING: Removing unreachable block (ram,0x014ccd10) */
/* WARNING: Removing unreachable block (ram,0x014ccd24) */
/* WARNING: Removing unreachable block (ram,0x014ccd38) */
/* WARNING: Removing unreachable block (ram,0x014ccd90) */
/* WARNING: Removing unreachable block (ram,0x014ccd94) */
/* WARNING: Removing unreachable block (ram,0x014ccdb4) */
/* WARNING: Removing unreachable block (ram,0x014ccd98) */
/* WARNING: Removing unreachable block (ram,0x014ccdbc) */
/* WARNING: Removing unreachable block (ram,0x014ccdf0) */
/* WARNING: Removing unreachable block (ram,0x014ccdb0) */
/* WARNING: Removing unreachable block (ram,0x014cce0c) */
/* WARNING: Removing unreachable block (ram,0x014cd07c) */
/* WARNING: Removing unreachable block (ram,0x014cd080) */
/* WARNING: Removing unreachable block (ram,0x014cd0a0) */
/* WARNING: Removing unreachable block (ram,0x014cd0a8) */
/* WARNING: Removing unreachable block (ram,0x014cd0ac) */
/* WARNING: Removing unreachable block (ram,0x014cd100) */
/* WARNING: Removing unreachable block (ram,0x014cd134) */
/* WARNING: Removing unreachable block (ram,0x014cd138) */
/* WARNING: Removing unreachable block (ram,0x014cd158) */
/* WARNING: Removing unreachable block (ram,0x014cd13c) */
/* WARNING: Removing unreachable block (ram,0x014cd160) */
/* WARNING: Removing unreachable block (ram,0x014cd154) */
/* WARNING: Removing unreachable block (ram,0x014cd0c0) */
/* WARNING: Removing unreachable block (ram,0x014cd0f4) */
/* WARNING: Removing unreachable block (ram,0x014cd0f8) */
/* WARNING: Removing unreachable block (ram,0x014cd180) */
/* WARNING: Removing unreachable block (ram,0x014cd02c) */
/* WARNING: Removing unreachable block (ram,0x014cd060) */
/* WARNING: Removing unreachable block (ram,0x014cd068) */
/* WARNING: Removing unreachable block (ram,0x014cd06c) */
/* WARNING: Removing unreachable block (ram,0x014cd198) */
/* WARNING: Removing unreachable block (ram,0x014cd0fc) */
/* WARNING: Removing unreachable block (ram,0x014cd19c) */
/* WARNING: Removing unreachable block (ram,0x014cd1e8) */
/* WARNING: Removing unreachable block (ram,0x014cd21c) */
/* WARNING: Removing unreachable block (ram,0x014cd23c) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x014cd1a4) */
/* WARNING: Removing unreachable block (ram,0x014cd1c4) */

ulong Atlas_Gameplay_Usables_ProjectileUsable__OnCollisionEnter(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  float fVar8;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar9 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_2;
  puVar6 = &stack0xfffffffffffffff0;
  lVar5 = *(long *)(param_1 + 0xf8);
  if (lVar5 == 0) {
    auVar9 = func_0x00f78af4();
    puVar7 = &Atlas_Gameplay_Usables_ProjectileUsable__OnCollisionStay;
    lVar5 = *(long *)(auVar9._0_8_ + 0xf8);
    auVar9._8_8_ = auVar9._8_8_;
    auVar9._0_8_ = lVar5;
    if (lVar5 != 0) {
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      goto code_r0x014ccf7c;
    }
    uVar3 = func_0x00f78af4();
    if ((0.0 <= *(float *)(uVar3 + 0xd8)) &&
       (fVar8 = *(float *)(uVar3 + 0xd8) -
                (float)CONCAT13(extraout_var_01,
                                CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))),
       *(float *)(uVar3 + 0xd8) = fVar8, fVar8 < 0.0)) {
      *(undefined4 *)(uVar3 + 0xd8) = 0xbf800000;
    }
    if ((0.0 <= *(float *)(uVar3 + 0xdc)) &&
       (fVar8 = *(float *)(uVar3 + 0xdc) -
                (float)CONCAT13(extraout_var_01,
                                CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))),
       *(float *)(uVar3 + 0xdc) = fVar8, fVar8 < 0.0)) {
      *(undefined4 *)(uVar3 + 0xdc) = 0xbf800000;
    }
    return uVar3;
  }
  puVar1 = &uStack_b0;
  if ((bRam0000000003eb4b68 & 1) == 0) {
    func_0x00f78a20(0x3d416c8);
    bRam0000000003eb4b68 = 1;
  }
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  puVar7 = &UNK_014ccd08;
  do {
    unaff_x19 = auVar9._8_8_;
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = 0x3eb4000;
    register0x00000008 = (BADSPACEBASE *)((long)puVar1 + -0x30);
    *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)((long)puVar1 + -0x28) = 0x3eb4000;
    *(long *)((long)puVar1 + -0x20) = lVar5;
    *(long *)((long)puVar1 + -0x18) = auVar9._0_8_;
    *(undefined1 **)((long)puVar1 + -0x10) = puVar6;
    *(undefined **)((long)puVar1 + -8) = puVar7;
    puVar6 = (undefined1 *)((long)puVar1 + -0x10);
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4b6a & 1) == 0) {
      func_0x00f78a20(0x3d57880);
      func_0x00f78a20(0x3d57968);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4b6a = 1;
    }
    if ((unaff_x19 != 0) && (lVar5 = /*UnityEngine.Collision$$get_collider*/ func_0x0329ee70(unaff_x19,0), lVar5 != 0)) {
      unaff_x21 = 0x3d23990;
      unaff_x19 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(lVar5,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x19,0,0);
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      if ((unaff_x19 != 0) && (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0), lVar5 != 0)) {
        uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d57880);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)((long)puVar1 + -0x60) = unaff_x22;
        *(undefined8 *)((long)puVar1 + -0x58) = 0x3d23990;
        *(undefined8 *)((long)puVar1 + -0x50) = uVar4;
        *(long *)((long)puVar1 + -0x48) = unaff_x19;
        *(undefined1 **)((long)puVar1 + -0x40) = puVar6;
        *(undefined **)((long)puVar1 + -0x38) = &UNK_014ccf08;
        if ((bRam0000000003ec027c & 1) == 0) {
          func_0x00f78a20(0x3d23990,0,0);
          bRam0000000003ec027c = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar2 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(uVar4,0);
        return (ulong)(uVar2 ^ 1);
      }
    }
    puVar7 = &ProjectilePhysics__OnCollisionStay;
    auVar9 = func_0x00f78af4();
code_r0x014ccf7c:
    lVar5 = auVar9._8_8_;
    puVar1 = (undefined8 *)((long)register0x00000008 + -0xd0);
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d10;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar6;
    *(undefined **)((long)register0x00000008 + -8) = puVar7;
    if ((bRam0000000003eb4b69 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d416c8);
      bRam0000000003eb4b69 = 1;
    }
    *(undefined4 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    puVar7 = &UNK_014ccfe8;
  } while( true );
}



// ============================================================
// RVA: 0x14cec0c | Atlas.Gameplay.Usables.ProjectileUsable.OnCollisionStay
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Usables_ProjectileUsable__OnCollisionStay
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
                long param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float extraout_s0;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  lVar5 = *(long *)(param_4 + 0xf8);
  if (lVar5 == 0) {
    uVar3 = func_0x00f78af4();
    if ((0.0 <= *(float *)(uVar3 + 0xd8)) &&
       (fVar12 = *(float *)(uVar3 + 0xd8) - extraout_s0, *(float *)(uVar3 + 0xd8) = fVar12,
       fVar12 < 0.0)) {
      *(undefined4 *)(uVar3 + 0xd8) = 0xbf800000;
    }
    if ((0.0 <= *(float *)(uVar3 + 0xdc)) &&
       (fVar12 = *(float *)(uVar3 + 0xdc) - extraout_s0, *(float *)(uVar3 + 0xdc) = fVar12,
       fVar12 < 0.0)) {
      *(undefined4 *)(uVar3 + 0xdc) = 0xbf800000;
    }
    return uVar3;
  }
  lVar2 = lVar5;
  if ((bRam0000000003eb4b69 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    lVar2 = func_0x00f78a20(0x3d416c8);
    bRam0000000003eb4b69 = 1;
  }
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uVar3 = /*ProjectilePhysics$$IsUsableOrKartCollision*/ func_0x014cce10(lVar2,param_5);
  if (((uVar3 & 1) == 0) && (*(float *)(lVar5 + 0x3c) <= *(float *)(lVar5 + 0x38))) {
    if (param_5 == 0) {
code_r0x014cd1e8:
      uVar3 = func_0x00f78af4();
      if ((bRam0000000003eb4b6b & 1) == 0) {
        func_0x00f78a20(0x3d416b8);
        func_0x00f78a20(0x3d1eb70);
        bRam0000000003eb4b6b = 1;
      }
      uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent<ContactPoint>_TypeInfo*/ uRam0000000003d1eb70);
      /*UnityEngine.Events.UnityEvent<ContactPoint>$$.ctor*/ func_0x01b831e4(uVar4,uRam0000000003d416b8);
      *(undefined8 *)(uVar3 + 0x20) = uVar4;
      uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent<ContactPoint>_TypeInfo*/ uRam0000000003d1eb70);
      /*UnityEngine.Events.UnityEvent<ContactPoint>$$.ctor*/ func_0x01b831e4(uVar4,uRam0000000003d416b8);
      *(undefined8 *)(uVar3 + 0x28) = uVar4;
      *(undefined4 *)(uVar3 + 0x3c) = 0x3dcccccd;
      return uVar3;
    }
    uVar3 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(param_5,0);
    fVar12 = _UNK_033f8504;
    if (0 < (int)uVar3) {
      iVar6 = 0;
      do {
        /*UnityEngine.Collision$$GetContact*/ func_0x0329ef14(&uStack_a0,param_5,iVar6,0);
        uStack_c8 = uStack_98;
        uStack_d0 = uStack_a0;
        uStack_b8 = uStack_88;
        uStack_c0 = uStack_90;
        uStack_b0 = uStack_80;
        uVar7 = *(undefined8 *)(lVar5 + 0x30);
        uVar4 = uStack_90;
        fVar13 = param_3;
        if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
          fVar13 = param_3;
        }
        fVar10 = (float)uVar4;
        iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
        if (iVar1 == 0) {
code_r0x014cd100:
          fVar8 = (float)/*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(&uStack_d0,0);
          param_3 = fVar13;
          fVar11 = fVar10;
          fVar9 = (float)/*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
          if (fVar13 * param_3 + fVar8 * fVar9 + fVar10 * fVar11 <= fVar12) {
            lVar2 = *(long *)(lVar5 + 0x20);
          }
          else {
            uVar4 = /*UnityEngine.ContactPoint$$get_otherCollider*/ func_0x0329f040(&uStack_d0,0);
            *(undefined8 *)(lVar5 + 0x30) = uVar4;
            lVar2 = *(long *)(lVar5 + 0x28);
          }
          if (lVar2 == 0) goto code_r0x014cd1e8;
          uStack_a0 = uStack_d0;
          uStack_98 = uStack_c8;
          uStack_90 = uStack_c0;
          uStack_88 = uStack_b8;
          uStack_80 = uStack_b0;
          /*UnityEngine.Events.UnityEvent<ContactPoint>$$Invoke*/ func_0x01b834b4(lVar2,&uStack_a0,uRam0000000003d416c8);
          *(undefined4 *)(lVar5 + 0x38) = 0;
        }
        else {
          uVar4 = /*UnityEngine.ContactPoint$$get_otherCollider*/ func_0x0329f040(&uStack_d0,0);
          uVar7 = *(undefined8 *)(lVar5 + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,uVar7,0);
          if (iVar1 == 0) goto code_r0x014cd100;
          fVar8 = (float)/*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(&uStack_d0,0);
          param_3 = fVar13;
          fVar11 = fVar10;
          fVar9 = (float)/*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
          if (fVar13 * param_3 + fVar8 * fVar9 + fVar10 * fVar11 < fVar12) {
            if (*(long *)(lVar5 + 0x20) != 0) {
              uStack_98 = uStack_c8;
              uStack_a0 = uStack_d0;
              uStack_88 = uStack_b8;
              uStack_90 = uStack_c0;
              uStack_80 = uStack_b0;
              uVar3 = /*UnityEngine.Events.UnityEvent<ContactPoint>$$Invoke*/ func_0x01b834b4(*(long *)(lVar5 + 0x20),&uStack_a0,uRam0000000003d416c8);
              *(undefined4 *)(lVar5 + 0x38) = 0;
              return uVar3;
            }
            goto code_r0x014cd1e8;
          }
        }
        iVar6 = iVar6 + 1;
        uVar3 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(param_5,0);
      } while (iVar6 < (int)uVar3);
    }
  }
  return uVar3;
}



// ============================================================
// RVA: 0x14cec28 | Atlas.Gameplay.Usables.ProjectileUsable.UpdatePhysicsTimers
// ============================================================

void Atlas_Gameplay_Usables_ProjectileUsable__UpdatePhysicsTimers(float param_1,long param_2)

{
  float fVar1;
  
  if ((0.0 <= *(float *)(param_2 + 0xd8)) &&
     (fVar1 = *(float *)(param_2 + 0xd8) - param_1, *(float *)(param_2 + 0xd8) = fVar1, fVar1 < 0.0)
     ) {
    *(undefined4 *)(param_2 + 0xd8) = 0xbf800000;
  }
  if ((0.0 <= *(float *)(param_2 + 0xdc)) &&
     (param_1 = *(float *)(param_2 + 0xdc) - param_1, *(float *)(param_2 + 0xdc) = param_1,
     param_1 < 0.0)) {
    *(undefined4 *)(param_2 + 0xdc) = 0xbf800000;
  }
  return;
}



// ============================================================
// RVA: 0x14cec74 | Atlas.Gameplay.Usables.ProjectileUsable.ForceToFloorSphere
// ============================================================

/* WARNING: Possible PIC construction at 0x014cecd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cecd8) */
/* WARNING: Removing unreachable block (ram,0x014cece4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_ProjectileUsable__ForceToFloorSphere
               (float param_1,ulong param_2,ulong param_3,uint param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  float extraout_s0;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (*(long *)(param_5 + 0x100) == 0) {
    param_5 = func_0x00f78af4();
    uVar6 = extraout_x1;
    puVar7 = extraout_x8;
    param_1 = extraout_s0;
  }
  else {
    param_4 = (uint)param_3;
    uVar12 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_5 + 0x100),0);
    puVar7 = &uStack_78;
    param_3 = param_2 & 0xffffffff;
    uVar6 = 1;
    param_2 = (ulong)uVar12;
  }
  iVar11 = (int)uVar6;
  uVar10 = (ulong)param_4;
  fVar17 = (float)param_3;
  fVar21 = (float)param_2;
  if ((bRam0000000003eb4b7d & 1) == 0) {
    func_0x00f78a20(0x3d39b48);
    func_0x00f78a20(0x3d39b50);
    func_0x00f78a20(0x3d39b40);
    func_0x00f78a20(0x3d39b58);
    func_0x00f78a20(0x3d39b60);
    func_0x00f78a20(0x3d1d768);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d42d70);
    bRam0000000003eb4b7d = 1;
  }
  fStack_130 = 0.0;
  fStack_12c = 0.0;
  fStack_128 = 0.0;
  fStack_124 = 0.0;
  uStack_13c = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  if (-1 < iVar11) {
    lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<ValueTuple<float, Vector3>>_TypeInfo*/ uRam0000000003d1d768);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$.ctor*/ func_0x023669cc(lVar3,uRam0000000003d39b40);
    if (iVar11 != 0x7fffffff) goto code_r0x014cee54;
code_r0x014cee4c:
    if (lVar3 == 0) {
      do {
        iVar11 = (int)uVar6;
        func_0x00f78af4();
code_r0x014cee54:
        iVar11 = iVar11 + 1;
        while( true ) {
          uVar15 = (undefined4)param_3;
          uVar16 = (undefined4)param_2;
          uVar13 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          uStack_178 = 0;
          uStack_170 = 0;
          uStack_168 = 0;
          fVar20 = (float)uVar10;
          fVar18 = fVar20;
          fVar14 = fVar17;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar21,fVar17,uVar10,uVar13,uVar16,uVar15,&uStack_178,0);
          fVar22 = *(float *)(param_5 + 0x148);
          uVar6 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(param_5 + 0x150),0);
          uStack_188 = uStack_170;
          uStack_190 = uStack_178;
          uStack_180 = uStack_168;
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar22 + param_1,&uStack_190,&uStack_160,uVar6,1,0);
          fVar22 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          fVar19 = *(float *)(param_5 + 0x148) + param_1;
          param_2 = (ulong)(uint)fVar17;
          param_3 = uVar10;
          /*Debug$$DrawLine*/ func_0x0162ee40(fVar21,param_2,uVar10,fVar21 + fVar22 * fVar19,fVar17 + fVar14 * fVar19,
                          fVar20 + fVar18 * fVar19,0);
          uVar6 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_160,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
          uVar13 = (undefined4)param_3;
          if ((uVar4 & 1) != 0) goto code_r0x014cee4c;
          fVar17 = (float)param_2;
          /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&uStack_160,0);
          fVar18 = fVar17;
          uVar12 = /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&uStack_160,0);
          uStack_178 = 0;
          uStack_170 = 0;
          param_2 = (ulong)uVar12;
          param_3 = (ulong)(uint)fVar18;
          /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar17,param_2,param_3,uVar13,&uStack_178,uRam0000000003d42d70);
          if (lVar3 == 0) break;
          param_2 = uStack_178 >> 0x20;
          param_3 = uStack_170 & 0xffffffff;
          /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$Add*/ func_0x023676a4(uStack_178 & 0xffffffff,param_2,param_3,uStack_170._4_4_,lVar3,
                          uRam0000000003d39b48);
          lVar5 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_5);
          fVar18 = (float)param_3;
          if (((lVar5 == 0) || (*(long *)(param_5 + 0xf8) == 0)) ||
             (lVar8 = *(long *)(*(long *)(param_5 + 0xf8) + 0x18), lVar8 == 0)) break;
          fVar17 = fVar17 + param_1;
          fVar19 = fVar17 + *(float *)(lVar5 + 0x8c);
          fVar14 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar8,0);
          fVar22 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
          param_2 = (ulong)(uint)(fVar14 * fVar22);
          param_3 = (ulong)(uint)(fVar17 * fVar22);
          fVar21 = fVar21 + fVar14 * fVar22;
          fVar17 = fVar19 + fVar17 * fVar22;
          uVar10 = (ulong)(uint)(fVar20 + fVar18 * fVar22);
          iVar11 = iVar11 + -1;
          if (iVar11 == 0) goto code_r0x014cf018;
        }
      } while( true );
    }
code_r0x014cf018:
    fVar17 = _UNK_033f83ec;
    uVar10 = 0;
    lVar5 = 0x20;
    lVar8 = 0x100000000;
    do {
      uVar16 = (undefined4)param_3;
      uVar13 = (undefined4)param_2;
      uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
      if ((long)(int)(*(uint *)(lVar3 + 0x18) - 1) <= (long)uVar10) goto code_r0x014cf0b0;
      if (uVar4 <= uVar10) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
      }
      lVar9 = *(long *)(lVar3 + 0x10);
      fVar21 = *(float *)(lVar9 + lVar5);
      uVar10 = uVar10 + 1;
      if (uVar4 <= uVar10) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar9 = *(long *)(lVar3 + 0x10);
      }
      uVar16 = (undefined4)param_3;
      uVar13 = (undefined4)param_2;
      lVar1 = lVar8 >> 0x1c;
      lVar5 = lVar5 + 0x10;
      lVar8 = lVar8 + 0x100000000;
    } while (ABS(fVar21 - *(float *)(lVar9 + lVar1 + 0x20)) <= fVar17);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$RemoveRange*/ func_0x02369000(lVar3,uVar10,*(int *)(lVar3 + 0x18) - (int)uVar10,uRam0000000003d39b50);
code_r0x014cf0b0:
    uVar15 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(0,uVar15,uVar13,uVar16,&fStack_130,uRam0000000003d42d70);
    uVar12 = *(uint *)(lVar3 + 0x18);
    if (-1 < (int)(uVar12 - 1)) {
      fVar21 = 0.0;
      iVar11 = uVar12 - 2;
      fVar17 = 1.0;
      while( true ) {
        uVar2 = iVar11 + 1;
        if (1 < uVar2) {
          fVar17 = fVar17 + fVar17;
        }
        if (uVar12 <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar12 = *(uint *)(lVar3 + 0x18);
        }
        fVar18 = fStack_130;
        lVar5 = *(long *)(lVar3 + 0x10);
        fVar14 = *(float *)(lVar5 + (ulong)uVar2 * 0x10 + 0x20);
        if (uVar12 <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar5 = *(long *)(lVar3 + 0x10);
        }
        lVar5 = lVar5 + (ulong)uVar2 * 0x10;
        uVar6 = *(undefined8 *)(lVar5 + 0x24);
        fVar22 = (float)((ulong)uVar6 >> 0x20) * fVar17 + fStack_128;
        uStack_178 = 0;
        uStack_170 = 0;
        /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar17 * fVar14 + fVar18,CONCAT44(fVar22,(float)uVar6 * fVar17 + fStack_12c)
                        ,fVar22,fVar17 * *(float *)(lVar5 + 0x2c) + fStack_124,&uStack_178,
                        uRam0000000003d42d70);
        fStack_128 = (float)uStack_170;
        fStack_124 = (float)(uStack_170 >> 0x20);
        fStack_130 = (float)uStack_178;
        fStack_12c = (float)(uStack_178 >> 0x20);
        fVar21 = fVar21 + fVar17;
        if (iVar11 < 0) break;
        uVar12 = *(uint *)(lVar3 + 0x18);
        iVar11 = iVar11 + -1;
      }
      if (fVar21 != 0.0) {
        *(undefined1 *)puVar7 = 1;
        *(undefined2 *)((long)puVar7 + 1) = 0;
        *(undefined1 *)((long)puVar7 + 3) = 0;
        *(ulong *)((long)puVar7 + 0xc) = CONCAT44(fStack_124 / fVar21,fStack_128 / fVar21);
        *(ulong *)((long)puVar7 + 4) = CONCAT44(fStack_12c / fVar21,fStack_130 / fVar21);
        return;
      }
    }
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 2) = 0;
  return;
}



// ============================================================
// RVA: 0x14ced40 | Atlas.Gameplay.Usables.ProjectileUsable.RaycastProjectedNTimes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_ProjectileUsable__RaycastProjectedNTimes
               (undefined8 *param_1,float param_2,ulong param_3,ulong param_4,float param_5,
               long param_6,undefined8 param_7)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  iVar10 = (int)param_7;
  fVar17 = (float)param_4;
  fVar19 = (float)param_3;
  if ((bRam0000000003eb4b7d & 1) == 0) {
    func_0x00f78a20(0x3d39b48);
    func_0x00f78a20(0x3d39b50);
    func_0x00f78a20(0x3d39b40);
    func_0x00f78a20(0x3d39b58);
    func_0x00f78a20(0x3d39b60);
    func_0x00f78a20(0x3d1d768);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d42d70);
    bRam0000000003eb4b7d = 1;
  }
  fStack_b0 = 0.0;
  fStack_ac = 0.0;
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  uStack_bc = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  if (-1 < iVar10) {
    lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<ValueTuple<float, Vector3>>_TypeInfo*/ uRam0000000003d1d768);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$.ctor*/ func_0x023669cc(lVar3,uRam0000000003d39b40);
    if (iVar10 != 0x7fffffff) goto LAB_014cee54;
LAB_014cee4c:
    if (lVar3 == 0) {
      do {
        iVar10 = (int)param_7;
        func_0x00f78af4();
LAB_014cee54:
        iVar10 = iVar10 + 1;
        while( true ) {
          uVar14 = (undefined4)param_4;
          uVar15 = (undefined4)param_3;
          uVar11 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          fVar16 = fVar17;
          fVar13 = param_5;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar19,fVar17,param_5,uVar11,uVar15,uVar14,&uStack_f8,0);
          fVar20 = *(float *)(param_6 + 0x148);
          uVar4 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(param_6 + 0x150),0);
          uStack_108 = uStack_f0;
          uStack_110 = uStack_f8;
          uStack_100 = uStack_e8;
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar20 + param_2,&uStack_110,&uStack_e0,uVar4,1,0);
          fVar20 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          fVar18 = *(float *)(param_6 + 0x148) + param_2;
          param_3 = (ulong)(uint)fVar17;
          param_4 = (ulong)(uint)param_5;
          /*Debug$$DrawLine*/ func_0x0162ee40(fVar19,param_3,param_4,fVar19 + fVar20 * fVar18,fVar17 + fVar16 * fVar18,
                          param_5 + fVar13 * fVar18,0);
          param_7 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_e0,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_7,0,0);
          uVar11 = (undefined4)param_4;
          if ((uVar5 & 1) != 0) goto LAB_014cee4c;
          fVar17 = (float)param_3;
          /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&uStack_e0,0);
          fVar16 = fVar17;
          uVar12 = /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&uStack_e0,0);
          uStack_f8 = 0;
          uStack_f0 = 0;
          param_3 = (ulong)uVar12;
          param_4 = (ulong)(uint)fVar16;
          /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar17,param_3,param_4,uVar11,&uStack_f8,uRam0000000003d42d70);
          if (lVar3 == 0) break;
          param_3 = uStack_f8 >> 0x20;
          param_4 = uStack_f0 & 0xffffffff;
          /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$Add*/ func_0x023676a4(uStack_f8 & 0xffffffff,param_3,param_4,uStack_f0._4_4_,lVar3,
                          uRam0000000003d39b48);
          lVar6 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_6);
          fVar16 = (float)param_4;
          if (((lVar6 == 0) || (*(long *)(param_6 + 0xf8) == 0)) ||
             (lVar7 = *(long *)(*(long *)(param_6 + 0xf8) + 0x18), lVar7 == 0)) break;
          fVar17 = fVar17 + param_2;
          fVar18 = fVar17 + *(float *)(lVar6 + 0x8c);
          fVar13 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar7,0);
          fVar20 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
          param_3 = (ulong)(uint)(fVar13 * fVar20);
          param_4 = (ulong)(uint)(fVar17 * fVar20);
          fVar19 = fVar19 + fVar13 * fVar20;
          fVar17 = fVar18 + fVar17 * fVar20;
          param_5 = param_5 + fVar16 * fVar20;
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) goto LAB_014cf018;
        }
      } while( true );
    }
LAB_014cf018:
    fVar17 = _UNK_033f83ec;
    uVar5 = 0;
    lVar6 = 0x20;
    lVar7 = 0x100000000;
    do {
      uVar15 = (undefined4)param_4;
      uVar11 = (undefined4)param_3;
      uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
      if ((long)(int)(*(uint *)(lVar3 + 0x18) - 1) <= (long)uVar5) goto LAB_014cf0b0;
      if (uVar8 <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
      }
      lVar9 = *(long *)(lVar3 + 0x10);
      fVar19 = *(float *)(lVar9 + lVar6);
      uVar5 = uVar5 + 1;
      if (uVar8 <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar9 = *(long *)(lVar3 + 0x10);
      }
      uVar15 = (undefined4)param_4;
      uVar11 = (undefined4)param_3;
      lVar1 = lVar7 >> 0x1c;
      lVar6 = lVar6 + 0x10;
      lVar7 = lVar7 + 0x100000000;
    } while (ABS(fVar19 - *(float *)(lVar9 + lVar1 + 0x20)) <= fVar17);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$RemoveRange*/ func_0x02369000(lVar3,uVar5,*(int *)(lVar3 + 0x18) - (int)uVar5,uRam0000000003d39b50);
LAB_014cf0b0:
    uVar14 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(0,uVar14,uVar11,uVar15,&fStack_b0,uRam0000000003d42d70);
    uVar12 = *(uint *)(lVar3 + 0x18);
    if (-1 < (int)(uVar12 - 1)) {
      fVar19 = 0.0;
      iVar10 = uVar12 - 2;
      fVar17 = 1.0;
      while( true ) {
        uVar2 = iVar10 + 1;
        if (1 < uVar2) {
          fVar17 = fVar17 + fVar17;
        }
        if (uVar12 <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar12 = *(uint *)(lVar3 + 0x18);
        }
        fVar16 = fStack_b0;
        lVar6 = *(long *)(lVar3 + 0x10);
        fVar13 = *(float *)(lVar6 + (ulong)uVar2 * 0x10 + 0x20);
        if (uVar12 <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar6 = *(long *)(lVar3 + 0x10);
        }
        lVar6 = lVar6 + (ulong)uVar2 * 0x10;
        uVar4 = *(undefined8 *)(lVar6 + 0x24);
        fVar20 = (float)((ulong)uVar4 >> 0x20) * fVar17 + fStack_a8;
        uStack_f8 = 0;
        uStack_f0 = 0;
        /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar17 * fVar13 + fVar16,CONCAT44(fVar20,(float)uVar4 * fVar17 + fStack_ac),
                        fVar20,fVar17 * *(float *)(lVar6 + 0x2c) + fStack_a4,&uStack_f8,
                        uRam0000000003d42d70);
        fStack_a8 = (float)uStack_f0;
        fStack_a4 = (float)(uStack_f0 >> 0x20);
        fStack_b0 = (float)uStack_f8;
        fStack_ac = (float)(uStack_f8 >> 0x20);
        fVar19 = fVar19 + fVar17;
        if (iVar10 < 0) break;
        uVar12 = *(uint *)(lVar3 + 0x18);
        iVar10 = iVar10 + -1;
      }
      if (fVar19 != 0.0) {
        *(undefined1 *)param_1 = 1;
        *(undefined2 *)((long)param_1 + 1) = 0;
        *(undefined1 *)((long)param_1 + 3) = 0;
        *(ulong *)((long)param_1 + 0xc) = CONCAT44(fStack_a4 / fVar19,fStack_a8 / fVar19);
        *(ulong *)((long)param_1 + 4) = CONCAT44(fStack_ac / fVar19,fStack_b0 / fVar19);
        return;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// ============================================================
// RVA: 0x14cf214 | Atlas.Gameplay.Usables.ProjectileUsable.ForceToFloorRemote
// ============================================================

/* WARNING: Possible PIC construction at 0x014cf33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cf3b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
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
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */
/* WARNING: Removing unreachable block (ram,0x014cf3b4) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Gameplay_Usables_ProjectileUsable__ForceToFloorRemote
                 (uint param_1,float param_2,float param_3,float param_4,float param_5,long *param_6
                 ,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *extraout_x1;
  long extraout_x1_00;
  long *plVar8;
  long lVar9;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar10;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******pppppppuVar11;
  undefined *puVar12;
  float fVar13;
  float extraout_s0;
  float extraout_s0_00;
  float fVar14;
  ulong extraout_d0;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong unaff_d8;
  ulong uVar20;
  ulong unaff_d9;
  ulong uVar21;
  ulong unaff_d10;
  ulong uVar22;
  ulong unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  fVar15 = param_2;
  fVar17 = param_3;
  if (param_6[0x20] != 0) {
    unaff_d8 = (ulong)param_1;
    fVar13 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(param_6[0x20],0);
    unaff_d9 = (ulong)(uint)fVar13;
    unaff_d10 = (ulong)(uint)param_2;
    unaff_d11 = (ulong)(uint)param_3;
    fVar15 = fVar13;
    fVar17 = param_2;
    param_4 = param_3;
    Atlas_Gameplay_Usables_ProjectileUsable__RaycastProjectedNTimes(&uStack_78,param_1,param_6,1);
    lVar4 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_6);
    if (lVar4 != 0) {
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      uStack_50 = uStack_68;
      plVar5 = (long *)(**(code **)(*param_6 + 0x438))
                                 (param_1,fVar13,param_2,param_3,*(undefined4 *)(lVar4 + 0x8c),
                                  param_6,&uStack_60,1,*(undefined8 *)(*param_6 + 0x440));
      return plVar5;
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  puVar3 = &uStack_d0;
  puVar2 = &uStack_d0;
  uStack_d0 = unaff_d11;
  uStack_c8 = unaff_d10;
  uStack_c0 = unaff_d9;
  uStack_b8 = unaff_d8;
  pppppppuStack_90 = (undefined8 *******)&stack0xfffffffffffffff0;
  puStack_88 = &Atlas_Gameplay_Usables_ProjectileUsable__ForceToFloor;
  pppppppuVar11 = &pppppppuStack_90;
  fVar13 = fVar15;
  if ((char)*extraout_x1 == '\0') {
code_r0x014cf360:
    auVar23._8_8_ = 1;
    auVar23._0_8_ = plVar5;
    puVar12 = &Atlas_Gameplay_Usables_ProjectileUsable__ForceToFloor;
    puVar2 = (ulong *)auStack_80;
    plVar5 = param_6;
    param_8 = unaff_x21;
    pppppppuVar11 = (undefined8 *******)&stack0xfffffffffffffff0;
    uVar20 = unaff_d8;
    uVar21 = unaff_d9;
    uVar22 = unaff_d10;
  }
  else {
    uVar20 = (ulong)(uint)param_4;
    uVar21 = (ulong)(uint)fVar15;
    fVar13 = *(float *)((long)extraout_x1 + 4);
    param_5 = fVar13 + extraout_s0 + param_5;
    uVar22 = (ulong)(uint)param_5;
    if ((char)plVar5[0x1e] == '\0') {
      if (((char)plVar5[0x21] != '\0') &&
         (fVar13 = 1.0, 1.0 < *(float *)((long)extraout_x1 + 4) - *(float *)((long)plVar5 + 0x10c)))
      goto code_r0x014cf360;
      lVar4 = plVar5[0x1f];
      if ((int)param_8 == 0) {
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
          plVar8 = (long *)/*UnityEngine.Rigidbody$$MovePosition*/ func_0x032a3334(fVar15,param_5,param_4,*(long *)(lVar4 + 0x18),0);
          lVar9 = extraout_x1[1];
          lVar4 = *extraout_x1;
          *(int *)(plVar5 + 0x23) = (int)extraout_x1[2];
          plVar5[0x22] = lVar9;
          plVar5[0x21] = lVar4;
          return plVar8;
        }
      }
      else if (((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) &&
              (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x18),0), lVar4 != 0)) {
        puVar12 = &UNK_014cf3b4;
        plVar8 = extraout_x1;
        goto code_r0x03274fd0;
      }
      puVar12 = &Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall;
      auVar23 = func_0x00f78af4();
      unaff_x20 = extraout_x1;
    }
    else {
      if (0.0 < fVar17 - param_5) {
        return plVar5;
      }
      auVar23._8_8_ = 0;
      auVar23._0_8_ = plVar5;
      puVar12 = &UNK_014cf340;
      puVar2 = &uStack_d0;
      unaff_x20 = extraout_x1;
    }
  }
  *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar11;
  *(undefined **)((long)puVar2 + -8) = puVar12;
  *(char *)(auVar23._0_8_ + 0xf0) = auVar23[8];
  lVar4 = *(long *)(auVar23._0_8_ + 0xf8);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
    *(undefined8 *)((long)puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)((long)puVar2 + -0x28) = param_8;
    *(long **)((long)puVar2 + -0x20) = unaff_x20;
    *(long **)((long)puVar2 + -0x18) = plVar5;
    *(undefined8 *)((long)puVar2 + -0x10) = *(undefined8 *)((long)puVar2 + -0x10);
    *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
    if (pcRam0000000003ec27c0 == (code *)0x0) {
      pcRam0000000003ec27c0 =
           (code *)func_0x00f789d4("UnityEngine.Rigidbody::set_useGravity(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x032a2630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (long *)(*pcRam0000000003ec27c0)(lVar4,auVar23._8_8_);
    return plVar5;
  }
  auVar23 = func_0x00f78af4();
  lVar4 = auVar23._0_8_;
  *(undefined8 *)((long)puVar2 + -0x40) = unaff_x22;
  *(undefined8 *)((long)puVar2 + -0x38) = param_8;
  *(long **)((long)puVar2 + -0x30) = unaff_x20;
  *(long **)((long)puVar2 + -0x28) = plVar5;
  *(undefined1 **)((long)puVar2 + -0x20) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -0x18) =
       &Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag;
  if ((bRam0000000003eb4b73 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b73 = 1;
  }
  uVar10 = *(undefined8 *)(lVar4 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar10,0,0);
  if (((ulong)plVar5 & 1) != 0) {
    return plVar5;
  }
  lVar9 = *(long *)(lVar4 + 200);
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x44) != '\0') {
      *(ulong *)(lVar9 + 0x48) =
           (auVar23._8_8_ & 0xffffffff) << ((ulong)*(uint *)(lVar4 + 0x198) & 0x3f) |
           *(ulong *)(lVar9 + 0x48);
      return plVar5;
    }
    return plVar5;
  }
  auVar24 = func_0x00f78af4();
  lVar9 = auVar24._0_8_;
  *(undefined8 *)((long)puVar2 + -0x70) = 0x3d23990;
  *(undefined8 *)((long)puVar2 + -0x68) = uVar10;
  *(ulong *)((long)puVar2 + -0x60) = auVar23._8_8_;
  *(long *)((long)puVar2 + -0x58) = lVar4;
  *(undefined1 **)((long)puVar2 + -0x50) = (undefined1 *)((long)puVar2 + -0x20);
  *(undefined **)((long)puVar2 + -0x48) =
       &Atlas_Gameplay_Usables_ProjectileUsable__SetHitSyncIdNetwork;
  if ((bRam0000000003eb4b74 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b74 = 1;
  }
  uVar10 = *(undefined8 *)(lVar9 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar10,0,0);
  if (((ulong)plVar5 & 1) != 0) {
    return plVar5;
  }
  lVar4 = *(long *)(lVar9 + 200);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x44) != '\0') {
      *(ulong *)(lVar4 + 0x48) =
           (auVar24._8_8_ & 0xffffffff) << ((ulong)*(uint *)(lVar9 + 0x19c) & 0x3f) |
           *(ulong *)(lVar4 + 0x48);
      return plVar5;
    }
    return plVar5;
  }
  lVar4 = func_0x00f78af4();
  *(undefined8 *)((long)puVar2 + -0xa0) = 0x3d23990;
  *(undefined8 *)((long)puVar2 + -0x98) = uVar10;
  *(undefined1 (*) [16])((long)puVar2 + -0x90) = auVar24;
  *(undefined1 **)((long)puVar2 + -0x80) = (undefined1 *)((long)puVar2 + -0x50);
  *(undefined **)((long)puVar2 + -0x78) =
       &Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
  if ((bRam0000000003eb4b75 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b75 = 1;
  }
  uVar10 = *(undefined8 *)(lVar4 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)0x0;
  uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar10,0);
  if ((uVar6 & 1) != 0) {
    return (long *)0x0;
  }
  lVar9 = *(long *)(lVar4 + 200);
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x44) != '\0') {
      return (long *)0x0;
    }
    return (long *)(ulong)(*(char *)(lVar9 + 0x28) == '\x01');
  }
  plVar7 = (long *)func_0x00f78af4();
  *(ulong *)((long)puVar2 + -0xf0) = unaff_d11;
  *(ulong *)((long)puVar2 + -0xe8) = uVar22;
  *(ulong *)((long)puVar2 + -0xe0) = uVar21;
  *(ulong *)((long)puVar2 + -0xd8) = uVar20;
  *(undefined8 *)((long)puVar2 + -0xd0) = 0x3d23990;
  *(undefined8 *)((long)puVar2 + -200) = 0x3d23990;
  *(undefined8 *)((long)puVar2 + -0xc0) = uVar10;
  *(long *)((long)puVar2 + -0xb8) = lVar4;
  *(undefined1 **)((long)puVar2 + -0xb0) = (undefined1 *)((long)puVar2 + -0x80);
  *(undefined **)((long)puVar2 + -0xa8) = &Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
  plVar5 = plVar7;
  if ((bRam0000000003eb4b78 & 1) == 0) {
    plVar5 = (long *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b78 = 1;
  }
  if (0.0 < *(float *)((long)plVar7 + 0xdc)) {
    return plVar5;
  }
  fVar15 = *(float *)((long)plVar7 + 0xe4);
  param_4 = *(float *)(plVar7 + 0x1d);
  plVar5 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar7[0x1c],fVar15,param_4,(float)extraout_d0,fVar13,fVar17
                                   ,0);
  param_5 = fVar17 * param_4 + (float)extraout_d0 * extraout_s0_00 + fVar13 * fVar15;
  if (param_5 < 0.0) {
    return plVar5;
  }
  *(float *)(plVar7 + 0x1c) = extraout_s0_00;
  *(undefined4 *)((long)plVar7 + 0xe4) = 0;
  *(float *)(plVar7 + 0x1d) = param_4;
  /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar7 + 0x1c,0);
  *(undefined4 *)((long)plVar7 + 0xdc) = 0x3d4ccccd;
  if (0.0 < *(float *)(plVar7 + 0x1b)) {
    lVar4 = plVar7[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1_00,lVar4,0);
    if (((ulong)plVar5 & 1) != 0) {
      return plVar5;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar8 = (long *)0x0;
    plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1_00,0);
    if (((ulong)plVar5 & 1) != 0) {
      return plVar5;
    }
  }
  *(undefined4 *)(plVar7 + 0x1b) = 0x3e4ccccd;
  uVar1 = *(int *)((long)plVar7 + 0xec) + 1;
  *(uint *)((long)plVar7 + 0xec) = uVar1;
  lVar4 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar7);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x90) < (int)uVar1) {
      (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar8 = (long *)0x0;
    plVar5 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1_00,0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if (extraout_x1_00 != 0) {
      plVar5 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1_00,0);
      plVar7[0x1a] = (long)plVar5;
      return plVar5;
    }
  }
  auVar23 = func_0x00f78af4();
  plVar5 = auVar23._8_8_;
  lVar4 = auVar23._0_8_;
  puVar3 = (ulong *)((long)puVar2 + -0x160);
  *(undefined8 *)((long)puVar2 + -0x160) = unaff_d13;
  *(undefined8 *)((long)puVar2 + -0x158) = unaff_d12;
  *(ulong *)((long)puVar2 + -0x150) = unaff_d11;
  *(ulong *)((long)puVar2 + -0x148) = extraout_d0 & 0xffffffff;
  *(ulong *)((long)puVar2 + -0x140) = (ulong)(uint)fVar13;
  *(ulong *)((long)puVar2 + -0x138) = (ulong)(uint)fVar17;
  *(undefined8 *)((long)puVar2 + -0x130) = unaff_x24;
  *(undefined8 *)((long)puVar2 + -0x128) = unaff_x23;
  *(undefined8 *)((long)puVar2 + -0x120) = 0x3d23990;
  *(ulong *)((long)puVar2 + -0x118) = (ulong)uVar1;
  *(long *)((long)puVar2 + -0x110) = extraout_x1_00;
  *(long **)((long)puVar2 + -0x108) = plVar7;
  *(undefined1 **)((long)puVar2 + -0x100) = (undefined1 *)((long)puVar2 + -0xb0);
  *(undefined **)((long)puVar2 + -0xf8) = &Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
  pppppppuVar11 = (undefined8 *******)((long)puVar2 + -0x100);
  if ((bRam0000000003eb4b79 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b79 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar5,0,0);
  if (((ulong)plVar7 & 1) != 0) {
    return plVar7;
  }
  if (*(long *)(lVar4 + 0x100) == 0) goto code_r0x014cf9bc;
  fVar15 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar4 + 0x100),0);
  fVar16 = *(float *)((long)plVar8 + 0xc);
  fVar18 = *(float *)(lVar4 + 0xe0);
  fVar14 = *(float *)(lVar4 + 0x128) * fVar16;
  lVar9 = *(long *)(lVar4 + 0x50);
  fVar17 = fVar16;
  fVar13 = fVar18;
  if (lVar9 != 0) {
    if (*(long *)(lVar4 + 0x100) == 0) goto code_r0x014cf9bc;
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar14,fVar16,fVar18,*(undefined4 *)(lVar4 + 0xe4),*(undefined4 *)(lVar4 + 0xe8)
                    ,*(long *)(lVar4 + 0x100),0);
    fVar15 = (float)/*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar4,lVar9,0);
    if ((*(long *)(lVar4 + 0x50) == 0) ||
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x50) + 0x10), lVar4 == 0)) goto code_r0x014cf9bc;
    lVar4 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar4,0);
    fVar17 = *(float *)(lVar4 + 0x104);
    fVar13 = *(float *)(lVar4 + 0x108);
    fVar14 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x100),fVar17,fVar13,0);
    fVar19 = *(float *)(plVar8 + 1);
    fVar14 = fVar14 * fVar19;
    fVar17 = fVar17 * fVar19;
    fVar13 = fVar13 * fVar19;
    param_5 = fVar16;
    param_4 = fVar18;
  }
  if ((plVar5 != (long *)0x0) &&
     (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar14,fVar17,fVar13,plVar5,0), lVar4 != 0)) {
    puVar12 = &UNK_014cf984;
code_r0x03274fd0:
    *(long **)((long)puVar3 + -0x20) = plVar8;
    *(long **)((long)puVar3 + -0x18) = plVar5;
    *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar11;
    *(undefined **)((long)puVar3 + -8) = puVar12;
    *(float *)((long)puVar3 + -0x30) = fVar15;
    *(float *)((long)puVar3 + -0x2c) = param_5;
    *(float *)((long)puVar3 + -0x28) = param_4;
    if (pcRam0000000003ec1950 == (code *)0x0) {
      pcRam0000000003ec1950 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    plVar5 = (long *)(*pcRam0000000003ec1950)(lVar4,(undefined1 *)((long)puVar3 + -0x30));
    return plVar5;
  }
code_r0x014cf9bc:
  plVar5 = (long *)func_0x00f78af4();
  return plVar5;
}



// ============================================================
// RVA: 0x14cf2e0 | Atlas.Gameplay.Usables.ProjectileUsable.ForceToFloor
// ============================================================

/* WARNING: Possible PIC construction at 0x014cf33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cf3b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
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
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */
/* WARNING: Removing unreachable block (ram,0x014cf3b4) */

long * Atlas_Gameplay_Usables_ProjectileUsable__ForceToFloor
                 (float param_1,float param_2,float param_3,float param_4,float param_5,
                 long *param_6,long *param_7,undefined8 param_8)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long extraout_x1;
  long lVar9;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  undefined *unaff_x30;
  undefined *puVar11;
  float extraout_s0;
  float fVar12;
  ulong extraout_d0;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong unaff_d8;
  ulong uVar18;
  ulong unaff_d9;
  ulong uVar19;
  ulong unaff_d10;
  ulong uVar20;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  puVar3 = &stack0xffffffffffffffb0;
  puVar2 = &stack0xffffffffffffffb0;
  puVar10 = &stack0xfffffffffffffff0;
  fVar13 = param_2;
  plVar7 = param_6;
  if ((char)*param_7 == '\0') {
LAB_014cf360:
    uVar8 = 1;
    puVar2 = (undefined1 *)register0x00000008;
    param_6 = unaff_x19;
    param_7 = unaff_x20;
    param_8 = unaff_x21;
    puVar10 = unaff_x29;
    uVar18 = unaff_d8;
    uVar19 = unaff_d9;
    uVar20 = unaff_d10;
  }
  else {
    uVar18 = (ulong)(uint)param_4;
    uVar19 = (ulong)(uint)param_2;
    fVar13 = *(float *)((long)param_7 + 4);
    param_5 = fVar13 + param_1 + param_5;
    uVar20 = (ulong)(uint)param_5;
    if ((char)param_6[0x1e] == '\0') {
      if (((char)param_6[0x21] != '\0') &&
         (fVar13 = 1.0, 1.0 < *(float *)((long)param_7 + 4) - *(float *)((long)param_6 + 0x10c)))
      goto LAB_014cf360;
      lVar4 = param_6[0x1f];
      if ((int)param_8 == 0) {
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
          plVar7 = (long *)/*UnityEngine.Rigidbody$$MovePosition*/ func_0x032a3334(param_2,param_5,param_4,*(long *)(lVar4 + 0x18),0);
          lVar9 = param_7[1];
          lVar4 = *param_7;
          *(int *)(param_6 + 0x23) = (int)param_7[2];
          param_6[0x22] = lVar9;
          param_6[0x21] = lVar4;
          return plVar7;
        }
      }
      else if (((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) &&
              (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x18),0), lVar4 != 0)) {
        puVar11 = &UNK_014cf3b4;
        goto code_r0x03274fd0;
      }
      unaff_x30 = &Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall;
      auVar21 = func_0x00f78af4();
      uVar8 = auVar21._8_8_;
      plVar7 = auVar21._0_8_;
    }
    else {
      if (0.0 < param_3 - param_5) {
        return param_6;
      }
      uVar8 = 0;
      unaff_x30 = (undefined *)0x14cf340;
      puVar2 = &stack0xffffffffffffffb0;
    }
  }
  *(undefined1 **)(puVar2 + -0x10) = puVar10;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  *(char *)(plVar7 + 0x1e) = (char)uVar8;
  if ((plVar7[0x1f] != 0) && (lVar4 = *(long *)(plVar7[0x1f] + 0x18), lVar4 != 0)) {
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = param_8;
    *(long **)(puVar2 + -0x20) = param_7;
    *(long **)(puVar2 + -0x18) = param_6;
    *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    if (pcRam0000000003ec27c0 == (code *)0x0) {
      pcRam0000000003ec27c0 =
           (code *)func_0x00f789d4("UnityEngine.Rigidbody::set_useGravity(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x032a2630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar7 = (long *)(*pcRam0000000003ec27c0)(lVar4,uVar8);
    return plVar7;
  }
  auVar21 = func_0x00f78af4();
  lVar4 = auVar21._0_8_;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x38) = param_8;
  *(long **)(puVar2 + -0x30) = param_7;
  *(long **)(puVar2 + -0x28) = param_6;
  *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x18) = &Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag;
  if ((bRam0000000003eb4b73 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b73 = 1;
  }
  uVar8 = *(undefined8 *)(lVar4 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
  if (((ulong)plVar7 & 1) != 0) {
    return plVar7;
  }
  lVar9 = *(long *)(lVar4 + 200);
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x44) != '\0') {
      *(ulong *)(lVar9 + 0x48) =
           (auVar21._8_8_ & 0xffffffff) << ((ulong)*(uint *)(lVar4 + 0x198) & 0x3f) |
           *(ulong *)(lVar9 + 0x48);
      return plVar7;
    }
    return plVar7;
  }
  auVar22 = func_0x00f78af4();
  lVar9 = auVar22._0_8_;
  *(undefined8 *)(puVar2 + -0x70) = 0x3d23990;
  *(undefined8 *)(puVar2 + -0x68) = uVar8;
  *(ulong *)(puVar2 + -0x60) = auVar21._8_8_;
  *(long *)(puVar2 + -0x58) = lVar4;
  *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x20;
  *(undefined **)(puVar2 + -0x48) = &Atlas_Gameplay_Usables_ProjectileUsable__SetHitSyncIdNetwork;
  if ((bRam0000000003eb4b74 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b74 = 1;
  }
  uVar8 = *(undefined8 *)(lVar9 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
  if (((ulong)plVar7 & 1) != 0) {
    return plVar7;
  }
  lVar4 = *(long *)(lVar9 + 200);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x44) != '\0') {
      *(ulong *)(lVar4 + 0x48) =
           (auVar22._8_8_ & 0xffffffff) << ((ulong)*(uint *)(lVar9 + 0x19c) & 0x3f) |
           *(ulong *)(lVar4 + 0x48);
      return plVar7;
    }
    return plVar7;
  }
  lVar4 = func_0x00f78af4();
  *(undefined8 *)(puVar2 + -0xa0) = 0x3d23990;
  *(undefined8 *)(puVar2 + -0x98) = uVar8;
  *(undefined1 (*) [16])(puVar2 + -0x90) = auVar22;
  *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x50;
  *(undefined **)(puVar2 + -0x78) =
       &Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
  if ((bRam0000000003eb4b75 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b75 = 1;
  }
  uVar8 = *(undefined8 *)(lVar4 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  param_7 = (long *)0x0;
  uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0);
  if ((uVar5 & 1) != 0) {
    return (long *)0x0;
  }
  lVar9 = *(long *)(lVar4 + 200);
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x44) != '\0') {
      return (long *)0x0;
    }
    return (long *)(ulong)(*(char *)(lVar9 + 0x28) == '\x01');
  }
  plVar6 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar2 + -0xf0) = unaff_d11;
  *(ulong *)(puVar2 + -0xe8) = uVar20;
  *(ulong *)(puVar2 + -0xe0) = uVar19;
  *(ulong *)(puVar2 + -0xd8) = uVar18;
  *(undefined8 *)(puVar2 + -0xd0) = 0x3d23990;
  *(undefined8 *)(puVar2 + -200) = 0x3d23990;
  *(undefined8 *)(puVar2 + -0xc0) = uVar8;
  *(long *)(puVar2 + -0xb8) = lVar4;
  *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x80;
  *(undefined **)(puVar2 + -0xa8) = &Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
  plVar7 = plVar6;
  if ((bRam0000000003eb4b78 & 1) == 0) {
    plVar7 = (long *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b78 = 1;
  }
  if (0.0 < *(float *)((long)plVar6 + 0xdc)) {
    return plVar7;
  }
  fVar14 = *(float *)((long)plVar6 + 0xe4);
  param_4 = *(float *)(plVar6 + 0x1d);
  plVar7 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar6[0x1c],fVar14,param_4,(float)extraout_d0,fVar13,
                                   param_3,0);
  param_5 = param_3 * param_4 + (float)extraout_d0 * extraout_s0 + fVar13 * fVar14;
  if (param_5 < 0.0) {
    return plVar7;
  }
  *(float *)(plVar6 + 0x1c) = extraout_s0;
  *(undefined4 *)((long)plVar6 + 0xe4) = 0;
  *(float *)(plVar6 + 0x1d) = param_4;
  /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar6 + 0x1c,0);
  *(undefined4 *)((long)plVar6 + 0xdc) = 0x3d4ccccd;
  if (0.0 < *(float *)(plVar6 + 0x1b)) {
    lVar4 = plVar6[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar4,0);
    if (((ulong)plVar7 & 1) != 0) {
      return plVar7;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_7 = (long *)0x0;
    plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
    if (((ulong)plVar7 & 1) != 0) {
      return plVar7;
    }
  }
  *(undefined4 *)(plVar6 + 0x1b) = 0x3e4ccccd;
  uVar1 = *(int *)((long)plVar6 + 0xec) + 1;
  *(uint *)((long)plVar6 + 0xec) = uVar1;
  lVar4 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar6);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x90) < (int)uVar1) {
      (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_7 = (long *)0x0;
    plVar7 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
    if ((int)plVar7 == 0) {
      return plVar7;
    }
    if (extraout_x1 != 0) {
      plVar7 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
      plVar6[0x1a] = (long)plVar7;
      return plVar7;
    }
  }
  auVar21 = func_0x00f78af4();
  param_6 = auVar21._8_8_;
  lVar4 = auVar21._0_8_;
  puVar3 = puVar2 + -0x160;
  *(undefined8 *)(puVar2 + -0x160) = unaff_d13;
  *(undefined8 *)(puVar2 + -0x158) = unaff_d12;
  *(undefined8 *)(puVar2 + -0x150) = unaff_d11;
  *(ulong *)(puVar2 + -0x148) = extraout_d0 & 0xffffffff;
  *(ulong *)(puVar2 + -0x140) = (ulong)(uint)fVar13;
  *(ulong *)(puVar2 + -0x138) = (ulong)(uint)param_3;
  *(undefined8 *)(puVar2 + -0x130) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x128) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x120) = 0x3d23990;
  *(ulong *)(puVar2 + -0x118) = (ulong)uVar1;
  *(long *)(puVar2 + -0x110) = extraout_x1;
  *(long **)(puVar2 + -0x108) = plVar6;
  *(undefined1 **)(puVar2 + -0x100) = puVar2 + -0xb0;
  *(undefined **)(puVar2 + -0xf8) = &Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
  puVar10 = puVar2 + -0x100;
  if ((bRam0000000003eb4b79 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b79 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_6,0,0);
  if (((ulong)plVar7 & 1) != 0) {
    return plVar7;
  }
  if (*(long *)(lVar4 + 0x100) == 0) goto code_r0x014cf9bc;
  param_2 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar4 + 0x100),0);
  fVar15 = *(float *)((long)param_7 + 0xc);
  fVar16 = *(float *)(lVar4 + 0xe0);
  fVar12 = *(float *)(lVar4 + 0x128) * fVar15;
  lVar9 = *(long *)(lVar4 + 0x50);
  fVar13 = fVar15;
  fVar14 = fVar16;
  if (lVar9 != 0) {
    if (*(long *)(lVar4 + 0x100) == 0) goto code_r0x014cf9bc;
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar12,fVar15,fVar16,*(undefined4 *)(lVar4 + 0xe4),*(undefined4 *)(lVar4 + 0xe8)
                    ,*(long *)(lVar4 + 0x100),0);
    param_2 = (float)/*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar4,lVar9,0);
    if ((*(long *)(lVar4 + 0x50) == 0) ||
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x50) + 0x10), lVar4 == 0)) goto code_r0x014cf9bc;
    lVar4 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar4,0);
    fVar13 = *(float *)(lVar4 + 0x104);
    fVar14 = *(float *)(lVar4 + 0x108);
    fVar12 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x100),fVar13,fVar14,0);
    fVar17 = *(float *)(param_7 + 1);
    fVar12 = fVar12 * fVar17;
    fVar13 = fVar13 * fVar17;
    fVar14 = fVar14 * fVar17;
    param_5 = fVar15;
    param_4 = fVar16;
  }
  if ((param_6 != (long *)0x0) &&
     (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar12,fVar13,fVar14,param_6,0), lVar4 != 0)) {
    puVar11 = &UNK_014cf984;
code_r0x03274fd0:
    *(long **)(puVar3 + -0x20) = param_7;
    *(long **)(puVar3 + -0x18) = param_6;
    *(undefined1 **)(puVar3 + -0x10) = puVar10;
    *(undefined **)(puVar3 + -8) = puVar11;
    *(float *)(puVar3 + -0x30) = param_2;
    *(float *)(puVar3 + -0x2c) = param_5;
    *(float *)(puVar3 + -0x28) = param_4;
    if (pcRam0000000003ec1950 == (code *)0x0) {
      pcRam0000000003ec1950 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    plVar7 = (long *)(*pcRam0000000003ec1950)(lVar4,puVar3 + -0x30);
    return plVar7;
  }
code_r0x014cf9bc:
  plVar7 = (long *)func_0x00f78af4();
  return plVar7;
}



// ============================================================
// RVA: 0x14cf408 | Atlas.Gameplay.Usables.ProjectileUsable.SetFreeFall
// ============================================================

/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
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
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */

long * Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall
                 (undefined1 param_1 [16],float param_2,float param_3,long param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long extraout_x1;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uStack_190;
  float fStack_18c;
  float fStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *****pppppuStack_170;
  undefined *puStack_168;
  undefined1 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  *(char *)(param_4 + 0xf0) = (char)param_5;
  if ((*(long *)(param_4 + 0xf8) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_4 + 0xf8) + 0x18), lVar2 != 0)) {
    if (pcRam0000000003ec27c0 == (code *)0x0) {
      pcRam0000000003ec27c0 =
           (code *)func_0x00f789d4("UnityEngine.Rigidbody::set_useGravity(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x032a2630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (long *)(*pcRam0000000003ec27c0)(lVar2,param_5);
    return plVar5;
  }
  auVar18 = func_0x00f78af4();
  lVar2 = auVar18._0_8_;
  if ((bRam0000000003eb4b73 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b73 = 1;
  }
  uVar8 = *(undefined8 *)(lVar2 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
  if (((ulong)plVar5 & 1) != 0) {
    return plVar5;
  }
  lVar7 = *(long *)(lVar2 + 200);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x44) != '\0') {
      *(ulong *)(lVar7 + 0x48) =
           (auVar18._8_8_ & 0xffffffff) << ((ulong)*(uint *)(lVar2 + 0x198) & 0x3f) |
           *(ulong *)(lVar7 + 0x48);
      return plVar5;
    }
    return plVar5;
  }
  auVar19 = func_0x00f78af4();
  lVar7 = auVar19._0_8_;
  uStack_70 = 0x3d23990;
  puStack_48 = &Atlas_Gameplay_Usables_ProjectileUsable__SetHitSyncIdNetwork;
  uStack_68 = uVar8;
  puStack_50 = &stack0xffffffffffffffe0;
  if ((bRam0000000003eb4b74 & 1) == 0) {
    uStack_60 = auVar18._8_8_;
    lStack_58 = lVar2;
    func_0x00f78a20(0x3d23990);
    auVar18._8_8_ = uStack_60;
    auVar18._0_8_ = lStack_58;
    bRam0000000003eb4b74 = 1;
  }
  uStack_60 = auVar18._8_8_;
  lStack_58 = auVar18._0_8_;
  uVar8 = *(undefined8 *)(lVar7 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar18._8_8_ = uStack_60;
    auVar18._0_8_ = lStack_58;
  }
  uStack_60 = auVar18._8_8_;
  lStack_58 = auVar18._0_8_;
  plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
  if (((ulong)plVar5 & 1) != 0) {
    return plVar5;
  }
  lVar2 = *(long *)(lVar7 + 200);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x44) != '\0') {
      *(ulong *)(lVar2 + 0x48) =
           (auVar19._8_8_ & 0xffffffff) << ((ulong)*(uint *)(lVar7 + 0x19c) & 0x3f) |
           *(ulong *)(lVar2 + 0x48);
      return plVar5;
    }
    return plVar5;
  }
  lVar2 = func_0x00f78af4();
  uStack_a0 = 0x3d23990;
  puStack_78 = &Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
  uStack_98 = uVar8;
  ppuStack_80 = &puStack_50;
  auStack_90 = auVar19;
  if ((bRam0000000003eb4b75 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b75 = 1;
  }
  uVar8 = *(undefined8 *)(lVar2 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = 0;
  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0);
  if ((uVar3 & 1) != 0) {
    return (long *)0x0;
  }
  lVar2 = *(long *)(lVar2 + 200);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x44) != '\0') {
      return (long *)0x0;
    }
    return (long *)(ulong)(*(char *)(lVar2 + 0x28) == '\x01');
  }
  plVar4 = (long *)func_0x00f78af4();
  puStack_a8 = &Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
  plVar5 = plVar4;
  pppuStack_b0 = &ppuStack_80;
  if ((bRam0000000003eb4b78 & 1) == 0) {
    plVar5 = (long *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b78 = 1;
  }
  if (0.0 < *(float *)((long)plVar4 + 0xdc)) {
    return plVar5;
  }
  fVar12 = *(float *)((long)plVar4 + 0xe4);
  fVar15 = *(float *)(plVar4 + 0x1d);
  plVar5 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar4[0x1c],fVar12,fVar15,extraout_s0,param_2,param_3,0);
  fVar12 = param_3 * fVar15 + extraout_s0 * extraout_s0_00 + param_2 * fVar12;
  if (fVar12 < 0.0) {
    return plVar5;
  }
  *(float *)(plVar4 + 0x1c) = extraout_s0_00;
  *(undefined4 *)((long)plVar4 + 0xe4) = 0;
  *(float *)(plVar4 + 0x1d) = fVar15;
  /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar4 + 0x1c,0);
  *(undefined4 *)((long)plVar4 + 0xdc) = 0x3d4ccccd;
  if (0.0 < *(float *)(plVar4 + 0x1b)) {
    lVar2 = plVar4[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar2,0);
    if (((ulong)plVar5 & 1) != 0) {
      return plVar5;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = 0;
    plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
    if (((ulong)plVar5 & 1) != 0) {
      return plVar5;
    }
  }
  *(undefined4 *)(plVar4 + 0x1b) = 0x3e4ccccd;
  iVar1 = *(int *)((long)plVar4 + 0xec) + 1;
  *(int *)((long)plVar4 + 0xec) = iVar1;
  lVar2 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar4);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x90) < iVar1) {
      (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = 0;
    plVar5 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    if (extraout_x1 != 0) {
      plVar5 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
      plVar4[0x1a] = (long)plVar5;
      return plVar5;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar6 = auVar18._8_8_;
  lVar2 = auVar18._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
  ppppuStack_100 = &pppuStack_b0;
  if ((bRam0000000003eb4b79 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b79 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar6,0,0);
  if (((ulong)plVar5 & 1) != 0) {
    return plVar5;
  }
  if (*(long *)(lVar2 + 0x100) == 0) goto code_r0x014cf9bc;
  uVar10 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar2 + 0x100),0);
  fVar13 = *(float *)(lVar7 + 0xc);
  fVar16 = *(float *)(lVar2 + 0xe0);
  fVar11 = *(float *)(lVar2 + 0x128) * fVar13;
  lVar9 = *(long *)(lVar2 + 0x50);
  fVar14 = fVar13;
  fVar17 = fVar16;
  fStack_18c = fVar12;
  fStack_188 = fVar15;
  if (lVar9 != 0) {
    if (*(long *)(lVar2 + 0x100) == 0) goto code_r0x014cf9bc;
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar11,fVar13,fVar16,*(undefined4 *)(lVar2 + 0xe4),*(undefined4 *)(lVar2 + 0xe8)
                    ,*(long *)(lVar2 + 0x100),0);
    uVar10 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar2,lVar9,0);
    if ((*(long *)(lVar2 + 0x50) == 0) ||
       (lVar2 = *(long *)(*(long *)(lVar2 + 0x50) + 0x10), lVar2 == 0)) goto code_r0x014cf9bc;
    lVar2 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar2,0);
    fVar14 = *(float *)(lVar2 + 0x104);
    fVar17 = *(float *)(lVar2 + 0x108);
    fVar11 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar2 + 0x100),fVar14,fVar17,0);
    fVar12 = *(float *)(lVar7 + 8);
    fVar11 = fVar11 * fVar12;
    fVar14 = fVar14 * fVar12;
    fVar17 = fVar17 * fVar12;
    fStack_18c = fVar13;
    fStack_188 = fVar16;
  }
  if (lVar6 != 0) {
    lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar11,fVar14,fVar17,lVar6,0);
    if (lVar2 != 0) {
      puStack_168 = &UNK_014cf984;
      uStack_190 = uVar10;
      lStack_180 = lVar7;
      lStack_178 = lVar6;
      pppppuStack_170 = &ppppuStack_100;
      if (pcRam0000000003ec1950 == (code *)0x0) {
        pcRam0000000003ec1950 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      plVar5 = (long *)(*pcRam0000000003ec1950)(lVar2,&uStack_190);
      return plVar5;
    }
  }
code_r0x014cf9bc:
  plVar5 = (long *)func_0x00f78af4();
  return plVar5;
}



// ============================================================
// RVA: 0x14cf434 | Atlas.Gameplay.Usables.ProjectileUsable.SetHitNetworkFlag
// ============================================================

/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
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
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */

long * Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag
                 (undefined1 param_1 [16],float param_2,float param_3,long param_4,ulong param_5)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long extraout_x1;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined4 uStack_180;
  float fStack_17c;
  float fStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *****pppppuStack_160;
  undefined *puStack_158;
  undefined1 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4b73 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b73 = 1;
  }
  uVar8 = *(undefined8 *)(param_4 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  lVar6 = *(long *)(param_4 + 200);
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x44) != '\0') {
      *(ulong *)(lVar6 + 0x48) =
           (param_5 & 0xffffffff) << ((ulong)*(uint *)(param_4 + 0x198) & 0x3f) |
           *(ulong *)(lVar6 + 0x48);
      return plVar2;
    }
    return plVar2;
  }
  auVar18 = func_0x00f78af4();
  lVar6 = auVar18._0_8_;
  uStack_60 = 0x3d23990;
  puStack_38 = &Atlas_Gameplay_Usables_ProjectileUsable__SetHitSyncIdNetwork;
  uStack_58 = uVar8;
  uStack_50 = param_5;
  lStack_48 = param_4;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b74 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b74 = 1;
  }
  uVar8 = *(undefined8 *)(lVar6 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  lVar7 = *(long *)(lVar6 + 200);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x44) != '\0') {
      *(ulong *)(lVar7 + 0x48) =
           (auVar18._8_8_ & 0xffffffff) << ((ulong)*(uint *)(lVar6 + 0x19c) & 0x3f) |
           *(ulong *)(lVar7 + 0x48);
      return plVar2;
    }
    return plVar2;
  }
  lVar6 = func_0x00f78af4();
  uStack_90 = 0x3d23990;
  puStack_68 = &Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
  uStack_88 = uVar8;
  ppuStack_70 = &puStack_40;
  auStack_80 = auVar18;
  if ((bRam0000000003eb4b75 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b75 = 1;
  }
  uVar8 = *(undefined8 *)(lVar6 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = 0;
  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0);
  if ((uVar3 & 1) != 0) {
    return (long *)0x0;
  }
  lVar6 = *(long *)(lVar6 + 200);
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x44) != '\0') {
      return (long *)0x0;
    }
    return (long *)(ulong)(*(char *)(lVar6 + 0x28) == '\x01');
  }
  plVar4 = (long *)func_0x00f78af4();
  puStack_98 = &Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
  plVar2 = plVar4;
  pppuStack_a0 = &ppuStack_70;
  if ((bRam0000000003eb4b78 & 1) == 0) {
    plVar2 = (long *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b78 = 1;
  }
  if (0.0 < *(float *)((long)plVar4 + 0xdc)) {
    return plVar2;
  }
  fVar12 = *(float *)((long)plVar4 + 0xe4);
  fVar15 = *(float *)(plVar4 + 0x1d);
  plVar2 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar4[0x1c],fVar12,fVar15,extraout_s0,param_2,param_3,0);
  fVar12 = param_3 * fVar15 + extraout_s0 * extraout_s0_00 + param_2 * fVar12;
  if (fVar12 < 0.0) {
    return plVar2;
  }
  *(float *)(plVar4 + 0x1c) = extraout_s0_00;
  *(undefined4 *)((long)plVar4 + 0xe4) = 0;
  *(float *)(plVar4 + 0x1d) = fVar15;
  /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar4 + 0x1c,0);
  *(undefined4 *)((long)plVar4 + 0xdc) = 0x3d4ccccd;
  if (0.0 < *(float *)(plVar4 + 0x1b)) {
    lVar6 = plVar4[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar6,0);
    if (((ulong)plVar2 & 1) != 0) {
      return plVar2;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = 0;
    plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
    if (((ulong)plVar2 & 1) != 0) {
      return plVar2;
    }
  }
  *(undefined4 *)(plVar4 + 0x1b) = 0x3e4ccccd;
  iVar1 = *(int *)((long)plVar4 + 0xec) + 1;
  *(int *)((long)plVar4 + 0xec) = iVar1;
  lVar6 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar4);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x90) < iVar1) {
      (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = 0;
    plVar2 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
    if (extraout_x1 != 0) {
      plVar2 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
      plVar4[0x1a] = (long)plVar2;
      return plVar2;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar5 = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  puStack_e8 = &Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
  ppppuStack_f0 = &pppuStack_a0;
  if ((bRam0000000003eb4b79 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b79 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar5,0,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  if (*(long *)(lVar6 + 0x100) == 0) goto code_r0x014cf9bc;
  uVar10 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar6 + 0x100),0);
  fVar13 = *(float *)(lVar7 + 0xc);
  fVar16 = *(float *)(lVar6 + 0xe0);
  fVar11 = *(float *)(lVar6 + 0x128) * fVar13;
  lVar9 = *(long *)(lVar6 + 0x50);
  fVar14 = fVar13;
  fVar17 = fVar16;
  fStack_17c = fVar12;
  fStack_178 = fVar15;
  if (lVar9 != 0) {
    if (*(long *)(lVar6 + 0x100) == 0) goto code_r0x014cf9bc;
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar11,fVar13,fVar16,*(undefined4 *)(lVar6 + 0xe4),*(undefined4 *)(lVar6 + 0xe8)
                    ,*(long *)(lVar6 + 0x100),0);
    uVar10 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar6,lVar9,0);
    if ((*(long *)(lVar6 + 0x50) == 0) ||
       (lVar6 = *(long *)(*(long *)(lVar6 + 0x50) + 0x10), lVar6 == 0)) goto code_r0x014cf9bc;
    lVar6 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar6,0);
    fVar14 = *(float *)(lVar6 + 0x104);
    fVar17 = *(float *)(lVar6 + 0x108);
    fVar11 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar6 + 0x100),fVar14,fVar17,0);
    fVar12 = *(float *)(lVar7 + 8);
    fVar11 = fVar11 * fVar12;
    fVar14 = fVar14 * fVar12;
    fVar17 = fVar17 * fVar12;
    fStack_17c = fVar13;
    fStack_178 = fVar16;
  }
  if (lVar5 != 0) {
    lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar11,fVar14,fVar17,lVar5,0);
    if (lVar6 != 0) {
      puStack_158 = &UNK_014cf984;
      uStack_180 = uVar10;
      lStack_170 = lVar7;
      lStack_168 = lVar5;
      pppppuStack_160 = &ppppuStack_f0;
      if (pcRam0000000003ec1950 == (code *)0x0) {
        pcRam0000000003ec1950 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      plVar2 = (long *)(*pcRam0000000003ec1950)(lVar6,&uStack_180);
      return plVar2;
    }
  }
code_r0x014cf9bc:
  plVar2 = (long *)func_0x00f78af4();
  return plVar2;
}



// ============================================================
// RVA: 0x14cf4e0 | Atlas.Gameplay.Usables.ProjectileUsable.SetHitSyncIdNetwork
// ============================================================

/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
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
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */

long * Atlas_Gameplay_Usables_ProjectileUsable__SetHitSyncIdNetwork
                 (undefined1 param_1 [16],float param_2,float param_3,long param_4,ulong param_5)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long extraout_x1;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined4 uStack_150;
  float fStack_14c;
  float fStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 ****ppppuStack_130;
  undefined *puStack_128;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4b74 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b74 = 1;
  }
  uVar8 = *(undefined8 *)(param_4 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  lVar7 = *(long *)(param_4 + 200);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x44) != '\0') {
      *(ulong *)(lVar7 + 0x48) =
           (param_5 & 0xffffffff) << ((ulong)*(uint *)(param_4 + 0x19c) & 0x3f) |
           *(ulong *)(lVar7 + 0x48);
      return plVar2;
    }
    return plVar2;
  }
  lVar7 = func_0x00f78af4();
  uStack_60 = 0x3d23990;
  puStack_38 = &Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
  uStack_58 = uVar8;
  lStack_50 = param_4;
  uStack_48 = param_5;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b75 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b75 = 1;
  }
  uVar8 = *(undefined8 *)(lVar7 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = 0;
  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0);
  if ((uVar3 & 1) != 0) {
    return (long *)0x0;
  }
  lVar7 = *(long *)(lVar7 + 200);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x44) != '\0') {
      return (long *)0x0;
    }
    return (long *)(ulong)(*(char *)(lVar7 + 0x28) == '\x01');
  }
  plVar4 = (long *)func_0x00f78af4();
  puStack_68 = &Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
  plVar2 = plVar4;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb4b78 & 1) == 0) {
    plVar2 = (long *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b78 = 1;
  }
  if (0.0 < *(float *)((long)plVar4 + 0xdc)) {
    return plVar2;
  }
  fVar12 = *(float *)((long)plVar4 + 0xe4);
  fVar15 = *(float *)(plVar4 + 0x1d);
  plVar2 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar4[0x1c],fVar12,fVar15,extraout_s0,param_2,param_3,0);
  fVar12 = param_3 * fVar15 + extraout_s0 * extraout_s0_00 + param_2 * fVar12;
  if (fVar12 < 0.0) {
    return plVar2;
  }
  *(float *)(plVar4 + 0x1c) = extraout_s0_00;
  *(undefined4 *)((long)plVar4 + 0xe4) = 0;
  *(float *)(plVar4 + 0x1d) = fVar15;
  /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar4 + 0x1c,0);
  *(undefined4 *)((long)plVar4 + 0xdc) = 0x3d4ccccd;
  if (0.0 < *(float *)(plVar4 + 0x1b)) {
    lVar7 = plVar4[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar7,0);
    if (((ulong)plVar2 & 1) != 0) {
      return plVar2;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = 0;
    plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
    if (((ulong)plVar2 & 1) != 0) {
      return plVar2;
    }
  }
  *(undefined4 *)(plVar4 + 0x1b) = 0x3e4ccccd;
  iVar1 = *(int *)((long)plVar4 + 0xec) + 1;
  *(int *)((long)plVar4 + 0xec) = iVar1;
  lVar7 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar4);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x90) < iVar1) {
      (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = 0;
    plVar2 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
    if ((int)plVar2 == 0) {
      return plVar2;
    }
    if (extraout_x1 != 0) {
      plVar2 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
      plVar4[0x1a] = (long)plVar2;
      return plVar2;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar5 = auVar18._8_8_;
  lVar7 = auVar18._0_8_;
  puStack_b8 = &Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
  pppuStack_c0 = &ppuStack_70;
  if ((bRam0000000003eb4b79 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b79 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar5,0,0);
  if (((ulong)plVar2 & 1) != 0) {
    return plVar2;
  }
  if (*(long *)(lVar7 + 0x100) == 0) goto code_r0x014cf9bc;
  uVar10 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar7 + 0x100),0);
  fVar13 = *(float *)(lVar6 + 0xc);
  fVar16 = *(float *)(lVar7 + 0xe0);
  fVar11 = *(float *)(lVar7 + 0x128) * fVar13;
  lVar9 = *(long *)(lVar7 + 0x50);
  fVar14 = fVar13;
  fVar17 = fVar16;
  fStack_14c = fVar12;
  fStack_148 = fVar15;
  if (lVar9 != 0) {
    if (*(long *)(lVar7 + 0x100) == 0) goto code_r0x014cf9bc;
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar11,fVar13,fVar16,*(undefined4 *)(lVar7 + 0xe4),*(undefined4 *)(lVar7 + 0xe8)
                    ,*(long *)(lVar7 + 0x100),0);
    uVar10 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar7,lVar9,0);
    if ((*(long *)(lVar7 + 0x50) == 0) ||
       (lVar7 = *(long *)(*(long *)(lVar7 + 0x50) + 0x10), lVar7 == 0)) goto code_r0x014cf9bc;
    lVar7 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar7,0);
    fVar14 = *(float *)(lVar7 + 0x104);
    fVar17 = *(float *)(lVar7 + 0x108);
    fVar11 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar7 + 0x100),fVar14,fVar17,0);
    fVar12 = *(float *)(lVar6 + 8);
    fVar11 = fVar11 * fVar12;
    fVar14 = fVar14 * fVar12;
    fVar17 = fVar17 * fVar12;
    fStack_14c = fVar13;
    fStack_148 = fVar16;
  }
  if ((lVar5 != 0) && (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar11,fVar14,fVar17,lVar5,0), lVar7 != 0)) {
    puStack_128 = &UNK_014cf984;
    uStack_150 = uVar10;
    lStack_140 = lVar6;
    lStack_138 = lVar5;
    ppppuStack_130 = &pppuStack_c0;
    if (pcRam0000000003ec1950 == (code *)0x0) {
      pcRam0000000003ec1950 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    plVar2 = (long *)(*pcRam0000000003ec1950)(lVar7,&uStack_150);
    return plVar2;
  }
code_r0x014cf9bc:
  plVar2 = (long *)func_0x00f78af4();
  return plVar2;
}



// ============================================================
// RVA: 0x14cf58c | Atlas.Gameplay.Usables.ProjectileUsable.GetForceToFloorNetworkFlag
// ============================================================

/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
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
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */

long * Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag
                 (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x1;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined4 uStack_120;
  float fStack_11c;
  float fStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 ***pppuStack_100;
  undefined *puStack_f8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4b75 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b75 = 1;
  }
  uVar8 = *(undefined8 *)(param_4 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = 0;
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0);
  if ((uVar2 & 1) != 0) {
    return (long *)0x0;
  }
  lVar7 = *(long *)(param_4 + 200);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x44) != '\0') {
      return (long *)0x0;
    }
    return (long *)(ulong)(*(char *)(lVar7 + 0x28) == '\x01');
  }
  plVar3 = (long *)func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
  plVar4 = plVar3;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b78 & 1) == 0) {
    plVar4 = (long *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b78 = 1;
  }
  if (0.0 < *(float *)((long)plVar3 + 0xdc)) {
    return plVar4;
  }
  fVar12 = *(float *)((long)plVar3 + 0xe4);
  fVar15 = *(float *)(plVar3 + 0x1d);
  plVar4 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar3[0x1c],fVar12,fVar15,extraout_s0,param_2,param_3,0);
  fVar12 = param_3 * fVar15 + extraout_s0 * extraout_s0_00 + param_2 * fVar12;
  if (fVar12 < 0.0) {
    return plVar4;
  }
  *(float *)(plVar3 + 0x1c) = extraout_s0_00;
  *(undefined4 *)((long)plVar3 + 0xe4) = 0;
  *(float *)(plVar3 + 0x1d) = fVar15;
  /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar3 + 0x1c,0);
  *(undefined4 *)((long)plVar3 + 0xdc) = 0x3d4ccccd;
  if (0.0 < *(float *)(plVar3 + 0x1b)) {
    lVar6 = plVar3[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar6,0);
    if (((ulong)plVar4 & 1) != 0) {
      return plVar4;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = 0;
    plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
    if (((ulong)plVar4 & 1) != 0) {
      return plVar4;
    }
  }
  *(undefined4 *)(plVar3 + 0x1b) = 0x3e4ccccd;
  iVar1 = *(int *)((long)plVar3 + 0xec) + 1;
  *(int *)((long)plVar3 + 0xec) = iVar1;
  lVar7 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar3);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x90) < iVar1) {
      (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = 0;
    plVar4 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
    if ((int)plVar4 == 0) {
      return plVar4;
    }
    if (extraout_x1 != 0) {
      plVar4 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
      plVar3[0x1a] = (long)plVar4;
      return plVar4;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar5 = auVar18._8_8_;
  lVar7 = auVar18._0_8_;
  puStack_88 = &Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
  ppuStack_90 = &puStack_40;
  if ((bRam0000000003eb4b79 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b79 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar5,0,0);
  if (((ulong)plVar4 & 1) != 0) {
    return plVar4;
  }
  if (*(long *)(lVar7 + 0x100) == 0) goto code_r0x014cf9bc;
  uVar10 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar7 + 0x100),0);
  fVar13 = *(float *)(lVar6 + 0xc);
  fVar16 = *(float *)(lVar7 + 0xe0);
  fVar11 = *(float *)(lVar7 + 0x128) * fVar13;
  lVar9 = *(long *)(lVar7 + 0x50);
  fVar14 = fVar13;
  fVar17 = fVar16;
  fStack_11c = fVar12;
  fStack_118 = fVar15;
  if (lVar9 != 0) {
    if (*(long *)(lVar7 + 0x100) == 0) goto code_r0x014cf9bc;
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar11,fVar13,fVar16,*(undefined4 *)(lVar7 + 0xe4),*(undefined4 *)(lVar7 + 0xe8)
                    ,*(long *)(lVar7 + 0x100),0);
    uVar10 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar7,lVar9,0);
    if ((*(long *)(lVar7 + 0x50) == 0) ||
       (lVar7 = *(long *)(*(long *)(lVar7 + 0x50) + 0x10), lVar7 == 0)) goto code_r0x014cf9bc;
    lVar7 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar7,0);
    fVar14 = *(float *)(lVar7 + 0x104);
    fVar17 = *(float *)(lVar7 + 0x108);
    fVar11 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar7 + 0x100),fVar14,fVar17,0);
    fVar12 = *(float *)(lVar6 + 8);
    fVar11 = fVar11 * fVar12;
    fVar14 = fVar14 * fVar12;
    fVar17 = fVar17 * fVar12;
    fStack_11c = fVar13;
    fStack_118 = fVar16;
  }
  if ((lVar5 != 0) && (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar11,fVar14,fVar17,lVar5,0), lVar7 != 0)) {
    puStack_f8 = &UNK_014cf984;
    uStack_120 = uVar10;
    lStack_110 = lVar6;
    lStack_108 = lVar5;
    pppuStack_100 = &ppuStack_90;
    if (pcRam0000000003ec1950 == (code *)0x0) {
      pcRam0000000003ec1950 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    plVar4 = (long *)(*pcRam0000000003ec1950)(lVar7,&uStack_120);
    return plVar4;
  }
code_r0x014cf9bc:
  plVar4 = (long *)func_0x00f78af4();
  return plVar4;
}



// ============================================================
// RVA: 0x14cf630 | Atlas.Gameplay.Usables.ProjectileUsable.ReflectBounce
// ============================================================

/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
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
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */

void Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce
               (float param_1,float param_2,float param_3,long *param_4,long param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined4 uStack_f0;
  float fStack_ec;
  float fStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb4b78 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b78 = 1;
  }
  if (0.0 < *(float *)((long)param_4 + 0xdc)) {
    return;
  }
  fVar9 = *(float *)((long)param_4 + 0xe4);
  fVar11 = *(float *)(param_4 + 0x1d);
  fVar6 = (float)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)param_4[0x1c],fVar9,fVar11,param_1,param_2,param_3,0);
  fVar9 = param_3 * fVar11 + param_1 * fVar6 + param_2 * fVar9;
  if (fVar9 < 0.0) {
    return;
  }
  *(float *)(param_4 + 0x1c) = fVar6;
  *(undefined4 *)((long)param_4 + 0xe4) = 0;
  *(float *)(param_4 + 0x1d) = fVar11;
  /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(param_4 + 0x1c,0);
  *(undefined4 *)((long)param_4 + 0xdc) = 0x3d4ccccd;
  if (0.0 < *(float *)(param_4 + 0x1b)) {
    lVar4 = param_4[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_5,lVar4,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_6 = 0;
    uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_5,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  *(undefined4 *)(param_4 + 0x1b) = 0x3e4ccccd;
  iVar1 = *(int *)((long)param_4 + 0xec) + 1;
  *(int *)((long)param_4 + 0xec) = iVar1;
  lVar4 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_4);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x90) < iVar1) {
      (**(code **)(*param_4 + 0x228))(param_4,*(undefined8 *)(*param_4 + 0x230));
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_6 = 0;
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_5,0);
    if (iVar1 == 0) {
      return;
    }
    if (param_5 != 0) {
      lVar4 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(param_5,0);
      param_4[0x1a] = lVar4;
      return;
    }
  }
  auVar14 = func_0x00f78af4();
  lVar3 = auVar14._8_8_;
  lVar4 = auVar14._0_8_;
  puStack_58 = &Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b79 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b79 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(long *)(lVar4 + 0x100) == 0) goto code_r0x014cf9bc;
  uVar7 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar4 + 0x100),0);
  fVar10 = *(float *)(param_6 + 0xc);
  fVar12 = *(float *)(lVar4 + 0xe0);
  fVar8 = *(float *)(lVar4 + 0x128) * fVar10;
  lVar5 = *(long *)(lVar4 + 0x50);
  fVar6 = fVar10;
  fVar13 = fVar12;
  fStack_ec = fVar9;
  fStack_e8 = fVar11;
  if (lVar5 != 0) {
    if (*(long *)(lVar4 + 0x100) == 0) goto code_r0x014cf9bc;
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar8,fVar10,fVar12,*(undefined4 *)(lVar4 + 0xe4),*(undefined4 *)(lVar4 + 0xe8),
                    *(long *)(lVar4 + 0x100),0);
    uVar7 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar4,lVar5,0);
    if ((*(long *)(lVar4 + 0x50) == 0) ||
       (lVar4 = *(long *)(*(long *)(lVar4 + 0x50) + 0x10), lVar4 == 0)) goto code_r0x014cf9bc;
    lVar4 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar4,0);
    fVar6 = *(float *)(lVar4 + 0x104);
    fVar13 = *(float *)(lVar4 + 0x108);
    fVar8 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x100),fVar6,fVar13,0);
    fVar9 = *(float *)(param_6 + 8);
    fVar8 = fVar8 * fVar9;
    fVar6 = fVar6 * fVar9;
    fVar13 = fVar13 * fVar9;
    fStack_ec = fVar10;
    fStack_e8 = fVar12;
  }
  if ((lVar3 != 0) && (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar8,fVar6,fVar13,lVar3,0), lVar4 != 0)) {
    puStack_c8 = &UNK_014cf984;
    uStack_f0 = uVar7;
    lStack_e0 = param_6;
    lStack_d8 = lVar3;
    ppuStack_d0 = &puStack_60;
    if (pcRam0000000003ec1950 == (code *)0x0) {
      pcRam0000000003ec1950 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    (*pcRam0000000003ec1950)(lVar4,&uStack_f0);
    return;
  }
code_r0x014cf9bc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14cf800 | Atlas.Gameplay.Usables.ProjectileUsable.SetupDespawnVFX
// ============================================================

/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
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
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */

void Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               long param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_a0;
  float fStack_9c;
  float fStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  if ((bRam0000000003eb4b79 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b79 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_5,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (*(long *)(param_4 + 0x100) == 0) goto code_r0x014cf9bc;
  uVar3 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_4 + 0x100),0);
  fVar5 = *(float *)(param_6 + 0xc);
  fVar7 = *(float *)(param_4 + 0xe0);
  fVar4 = *(float *)(param_4 + 0x128) * fVar5;
  lVar2 = *(long *)(param_4 + 0x50);
  fVar6 = fVar5;
  fVar8 = fVar7;
  fStack_9c = param_2;
  fStack_98 = param_3;
  if (lVar2 != 0) {
    if (*(long *)(param_4 + 0x100) == 0) goto code_r0x014cf9bc;
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar4,fVar5,fVar7,*(undefined4 *)(param_4 + 0xe4),
                    *(undefined4 *)(param_4 + 0xe8),*(long *)(param_4 + 0x100),0);
    uVar3 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(param_4,lVar2,0);
    if ((*(long *)(param_4 + 0x50) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_4 + 0x50) + 0x10), lVar2 == 0)) goto code_r0x014cf9bc;
    lVar2 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar2,0);
    fVar6 = *(float *)(lVar2 + 0x104);
    fVar8 = *(float *)(lVar2 + 0x108);
    fVar4 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar2 + 0x100),fVar6,fVar8,0);
    fVar9 = *(float *)(param_6 + 8);
    fVar4 = fVar4 * fVar9;
    fVar6 = fVar6 * fVar9;
    fVar8 = fVar8 * fVar9;
    fStack_9c = fVar5;
    fStack_98 = fVar7;
  }
  if ((param_5 != 0) && (lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar4,fVar6,fVar8,param_5,0), lVar2 != 0)) {
    puStack_78 = &UNK_014cf984;
    uStack_a0 = uVar3;
    lStack_90 = param_6;
    lStack_88 = param_5;
    puStack_80 = &stack0xfffffffffffffff0;
    if (pcRam0000000003ec1950 == (code *)0x0) {
      pcRam0000000003ec1950 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    (*pcRam0000000003ec1950)(lVar2,&uStack_a0);
    return;
  }
code_r0x014cf9bc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14cf9c0 | Atlas.Gameplay.Usables.ProjectileUsable.CreateDeSpawnVfx
// ============================================================

void Atlas_Gameplay_Usables_ProjectileUsable__CreateDeSpawnVfx(void)

{
  return;
}



// ============================================================
// RVA: 0x14cf9c4 | Atlas.Gameplay.Usables.ProjectileUsable.UpdateVelocity
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_ProjectileUsable__UpdateVelocity
               (undefined1 param_1 [16],float param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_98;
  
  if (param_5 == 0) {
LAB_014cfa24:
    if ((*(long *)(param_4 + 0xf8) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_4 + 0xf8) + 0x18), lVar2 != 0)) {
      if (pcRam0000000003ec28d0 == (code *)0x0) {
        pcRam0000000003ec28d0 =
             (code *)func_0x00f789d4("UnityEngine.Rigidbody::set_velocity_Injected(UnityEngine.Vector3&)"
                                     ,0);
      }
      (*pcRam0000000003ec28d0)(lVar2,&stack0xffffffffffffffd0);
      return;
    }
  }
  else {
    if (*(char *)(param_4 + 0xf0) == '\0') {
      param_2 = 0.0;
      goto LAB_014cfa24;
    }
    if ((*(long *)(param_4 + 0xf8) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_4 + 0xf8) + 0x18), lVar2 != 0)) {
      /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar2,0);
      goto LAB_014cfa24;
    }
  }
  plVar3 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4b7c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b7c = 1;
  }
  uStack_ac = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  if ((plVar3[0x1f] != 0) && (lVar2 = *(long *)(plVar3[0x1f] + 0x18), lVar2 != 0)) {
    uVar6 = /*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar2,0);
    fVar7 = *(float *)(plVar3 + 0x25);
    fVar4 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
    uStack_98 = CONCAT44((float)((ulong)plVar3[0x28] >> 0x20) - (float)param_3,
                         (float)plVar3[0x28] - (float)uVar6);
    fVar5 = (float)/*UnityEngine.Vector2$$get_magnitude*/ func_0x0327a2b8(&uStack_98,0);
    if (fVar7 * fVar4 - fVar5 <= fVar7 * fVar4 * _UNK_033f813c) {
      *(undefined4 *)((long)plVar3 + 0x13c) = 0;
    }
    else {
      iVar1 = *(int *)((long)plVar3 + 0x13c) + 1;
      *(int *)((long)plVar3 + 0x13c) = iVar1;
      if (0x14 < iVar1) {
        (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
        iVar1 = *(int *)((long)plVar3 + 0x13c);
      }
      if ((1 < iVar1) && (*(float *)((long)plVar3 + 0xdc) < 0.0)) {
        if (*(char *)((long)plVar3 + 0x14c) == '\0') {
          (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
        }
        else {
          uStack_e8 = 0;
          uStack_e0 = 0;
          uStack_d8 = 0;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(uVar6,param_2,param_3,(int)plVar3[0x1c],
                          *(undefined4 *)((long)plVar3 + 0xe4),(int)plVar3[0x1d],&uStack_e8,0);
          fVar4 = (float)param_3;
          uVar6 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8((int)plVar3[0x2a],0);
          uStack_f8 = uStack_e0;
          uStack_100 = uStack_e8;
          uStack_f0 = uStack_d8;
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(0x3f800000,&uStack_100,&uStack_d0,uVar6,1,0);
          uVar6 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_d0,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
          if (iVar1 == 0) {
            fVar5 = -*(float *)(plVar3 + 0x1c);
            param_2 = -*(float *)((long)plVar3 + 0xe4);
            fVar4 = -*(float *)(plVar3 + 0x1d);
            uVar6 = 0;
          }
          else {
            fVar5 = (float)/*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&uStack_d0,0);
            lVar2 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_d0,0);
            if (lVar2 == 0) goto code_r0x014cfc9c;
            uVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar2,0);
          }
          Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce(fVar5,param_2,fVar4,plVar3,uVar6);
        }
      }
    }
    return;
  }
code_r0x014cfc9c:
  lVar2 = func_0x00f78af4();
  uVar6 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar2 + 0xd8) = uVar6;
  *(undefined1 *)(lVar2 + 0x12d) = 1;
  *(undefined8 *)(lVar2 + 0x198) = _UNK_033f8520;
  return;
}



// ============================================================
// RVA: 0x14cfa60 | Atlas.Gameplay.Usables.ProjectileUsable.HandleExpectedMovement
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_ProjectileUsable__HandleExpectedMovement
               (undefined1 param_1 [16],float param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4b7c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b7c = 1;
  }
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  if ((param_4[0x1f] != 0) && (lVar2 = *(long *)(param_4[0x1f] + 0x18), lVar2 != 0)) {
    uVar5 = /*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar2,0);
    fVar6 = *(float *)(param_4 + 0x25);
    fVar3 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
    uStack_48 = CONCAT44((float)((ulong)param_4[0x28] >> 0x20) - (float)param_3,
                         (float)param_4[0x28] - (float)uVar5);
    fVar4 = (float)/*UnityEngine.Vector2$$get_magnitude*/ func_0x0327a2b8(&uStack_48,0);
    if (fVar6 * fVar3 - fVar4 <= fVar6 * fVar3 * _UNK_033f813c) {
      *(undefined4 *)((long)param_4 + 0x13c) = 0;
    }
    else {
      iVar1 = *(int *)((long)param_4 + 0x13c) + 1;
      *(int *)((long)param_4 + 0x13c) = iVar1;
      if (0x14 < iVar1) {
        (**(code **)(*param_4 + 0x228))(param_4,*(undefined8 *)(*param_4 + 0x230));
        iVar1 = *(int *)((long)param_4 + 0x13c);
      }
      if ((1 < iVar1) && (*(float *)((long)param_4 + 0xdc) < 0.0)) {
        if (*(char *)((long)param_4 + 0x14c) == '\0') {
          (**(code **)(*param_4 + 0x228))(param_4,*(undefined8 *)(*param_4 + 0x230));
        }
        else {
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(uVar5,param_2,param_3,(int)param_4[0x1c],
                          *(undefined4 *)((long)param_4 + 0xe4),(int)param_4[0x1d],&uStack_98,0);
          fVar3 = (float)param_3;
          uVar5 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8((int)param_4[0x2a],0);
          uStack_a8 = uStack_90;
          uStack_b0 = uStack_98;
          uStack_a0 = uStack_88;
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(0x3f800000,&uStack_b0,&uStack_80,uVar5,1,0);
          uVar5 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_80,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
          if (iVar1 == 0) {
            fVar4 = -*(float *)(param_4 + 0x1c);
            param_2 = -*(float *)((long)param_4 + 0xe4);
            fVar3 = -*(float *)(param_4 + 0x1d);
            uVar5 = 0;
          }
          else {
            fVar4 = (float)/*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&uStack_80,0);
            lVar2 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_80,0);
            if (lVar2 == 0) goto LAB_014cfc9c;
            uVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar2,0);
          }
          Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce(fVar4,param_2,fVar3,param_4,uVar5);
        }
      }
    }
    return;
  }
LAB_014cfc9c:
  lVar2 = func_0x00f78af4();
  uVar5 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar2 + 0xd8) = uVar5;
  *(undefined1 *)(lVar2 + 0x12d) = 1;
  *(undefined8 *)(lVar2 + 0x198) = _UNK_033f8520;
  return;
}



// ============================================================
// RVA: 0x14cfca0 | Atlas.Gameplay.Usables.ProjectileUsable..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_ProjectileUsable___ctor(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined1 *)(param_1 + 0x12d) = 1;
  *(undefined8 *)(param_1 + 0x198) = _UNK_033f8520;
  return;
}



