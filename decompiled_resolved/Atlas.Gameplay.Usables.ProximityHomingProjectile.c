// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.ProximityHomingProjectile

// ============================================================
// RVA: 0x14cffa0 | Atlas.Gameplay.Usables.ProximityHomingProjectile.get_ProximityHomingProjectileDefinition
// ============================================================

/* WARNING: Possible PIC construction at 0x014d01cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d0314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d0334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d0534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d0538) */
/* WARNING: Removing unreachable block (ram,0x01570398) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
/* WARNING: Removing unreachable block (ram,0x014d0338) */
/* WARNING: Removing unreachable block (ram,0x014d033c) */
/* WARNING: Removing unreachable block (ram,0x014d0344) */
/* WARNING: Removing unreachable block (ram,0x014d035c) */
/* WARNING: Removing unreachable block (ram,0x014d0394) */
/* WARNING: Removing unreachable block (ram,0x014d03b4) */
/* WARNING: Removing unreachable block (ram,0x014d03dc) */
/* WARNING: Removing unreachable block (ram,0x014d03f4) */
/* WARNING: Removing unreachable block (ram,0x014d03fc) */
/* WARNING: Removing unreachable block (ram,0x014d041c) */
/* WARNING: Removing unreachable block (ram,0x014d0430) */
/* WARNING: Removing unreachable block (ram,0x014d0448) */
/* WARNING: Removing unreachable block (ram,0x014d0484) */
/* WARNING: Removing unreachable block (ram,0x014d04a8) */
/* WARNING: Removing unreachable block (ram,0x014d04c8) */
/* WARNING: Removing unreachable block (ram,0x014d04d0) */
/* WARNING: Removing unreachable block (ram,0x014d04d8) */
/* WARNING: Removing unreachable block (ram,0x014d04e0) */
/* WARNING: Removing unreachable block (ram,0x014d04f8) */
/* WARNING: Removing unreachable block (ram,0x014d0318) */
/* WARNING: Removing unreachable block (ram,0x014d031c) */
/* WARNING: Removing unreachable block (ram,0x014d0324) */
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

long * Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                 (long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  int extraout_w1;
  long lVar10;
  long lVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  bool bVar12;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar13;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined1 auVar17 [16];
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar14 = &stack0xfffffffffffffff0;
  lVar11 = 0x3eb4000;
  if ((bRam0000000003eb4b7f & 1) == 0) {
    func_0x00f78a20(0x3d23f28);
    bRam0000000003eb4b7f = 1;
  }
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 300) < *(byte *)(/*Atlas.Definitions.ProximityHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23f28 + 300)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ProximityHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23f28 + 300) * 8 + -8)
        != /*Atlas.Definitions.ProximityHomingProjectileDefinition_TypeInfo*/ lRam0000000003d23f28)) {
      puVar15 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour;
      lVar5 = func_0x00f78e5c();
      do {
        *(long *)(puVar1 + -0x20) = lVar11;
        *(long *)(puVar1 + -0x18) = param_1;
        *(undefined1 **)(puVar1 + -0x10) = puVar14;
        *(undefined **)(puVar1 + -8) = puVar15;
        if ((bRam0000000003eb4b80 & 1) == 0) {
          func_0x00f78a20(0x3d23f20);
          bRam0000000003eb4b80 = 1;
        }
        plVar4 = *(long **)(lVar5 + 0x48);
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        if ((*(byte *)(/*Atlas.Gameplay.Usables.ProximityHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23f20 + 300) <= *(byte *)(*plVar4 + 300)) &&
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ProximityHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23f20 + 300) * 8 +
                     -8) == /*Atlas.Gameplay.Usables.ProximityHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23f20)) {
          return plVar4;
        }
        lVar11 = func_0x00f78e5c();
        *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
        *(undefined **)(puVar1 + -0x28) =
             &Atlas_Gameplay_Usables_ProximityHomingProjectile__get_CanTrack;
        if (*(long *)(lVar11 + 0x1a0) != 0) {
          return (long *)(ulong)(*(float *)(*(long *)(lVar11 + 0x1a0) + 0x28) <= 0.0);
        }
        lVar11 = func_0x00f78af4();
        *(undefined8 *)(puVar1 + -0x50) = 0x3eb4000;
        *(long *)(puVar1 + -0x48) = lVar5;
        *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x30;
        *(undefined **)(puVar1 + -0x38) =
             &Atlas_Gameplay_Usables_ProximityHomingProjectile__get_AttemptingReLockOn;
        if (*(long *)(lVar11 + 0x1a0) != 0) {
          plVar4 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                                     (*(long *)(lVar11 + 0x1a0),0);
          if ((int)plVar4 != 0) {
            plVar4 = (long *)(ulong)(0.0 < *(float *)(lVar11 + 0x1cc));
          }
          return plVar4;
        }
        auVar17 = func_0x00f78af4();
        lVar7 = auVar17._8_8_;
        lVar5 = auVar17._0_8_;
        *(undefined8 *)(puVar1 + -0xa0) = unaff_x26;
        *(undefined8 *)(puVar1 + -0x98) = unaff_x25;
        *(undefined8 *)(puVar1 + -0x90) = unaff_x24;
        *(long *)(puVar1 + -0x88) = unaff_x23;
        *(undefined8 *)(puVar1 + -0x80) = unaff_x22;
        *(undefined8 *)(puVar1 + -0x78) = unaff_x21;
        *(undefined8 *)(puVar1 + -0x70) = 0x3eb4000;
        *(long *)(puVar1 + -0x68) = lVar11;
        *(undefined1 **)(puVar1 + -0x60) = puVar1 + -0x40;
        *(undefined **)(puVar1 + -0x58) = &Atlas_Gameplay_Usables_ProximityHomingProjectile__Init;
        if ((bRam0000000003eb4b81 & 1) == 0) {
          func_0x00f78a20(0x3d21db0);
          bRam0000000003eb4b81 = 1;
        }
        lVar10 = param_3;
        Atlas_Gameplay_Usables_ProjectileUsable__Init(lVar5,lVar7,param_3,param_4,param_5);
        lVar11 = func_0x00f78aec(/*Atlas.Gameplay.Usables.HomingProjectileLogic_TypeInfo*/ uRam0000000003d21db0);
        Atlas_Gameplay_Usables_HomingProjectileLogic___ctor(lVar11,0);
        *(long *)(lVar5 + 0x1a0) = lVar11;
        if (lVar11 != 0) {
          plVar4 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__Init(lVar11,param_3,0);
          *(undefined1 *)(lVar5 + 0x1c8) = 0;
          return plVar4;
        }
        plVar4 = (long *)func_0x00f78af4();
        *(long *)(puVar1 + -0xc0) = param_3;
        *(long *)(puVar1 + -0xb8) = lVar5;
        *(undefined1 **)(puVar1 + -0xb0) = puVar1 + -0x60;
        *(undefined **)(puVar1 + -0xa8) = &Atlas_Gameplay_Usables_ProximityHomingProjectile__DeInit;
        puVar14 = puVar1 + -0xb0;
        lVar11 = param_3;
        uVar8 = 0x3d21db0;
        if (*(char *)((long)plVar4 + 0x19) == '\0') {
          if (plVar4[0x34] != 0) {
            Atlas_Gameplay_Usables_HomingProjectileLogic__DeInit(plVar4[0x34],0);
            plVar4[0x34] = 0;
            *(undefined8 *)(puVar1 + -0xc0) = *(undefined8 *)(puVar1 + -0xc0);
            *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0xb8);
            *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xb0);
            *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xa8);
            if (*(char *)((long)plVar4 + 0x19) != '\0') {
              Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(plVar4);
            }
            plVar4[0x1f] = 0;
            *(undefined4 *)(plVar4 + 0x2a) = 0;
            *(undefined8 *)(puVar1 + -0xc0) = *(undefined8 *)(puVar1 + -0xc0);
            *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0xb8);
            *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xb0);
            *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xa8);
            if (*(char *)((long)plVar4 + 0x19) != '\0') {
              Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(plVar4,0);
            }
            uVar8 = *(undefined8 *)(puVar1 + -0xc0);
            *(undefined8 *)(puVar1 + -0xc0) = uVar8;
            *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0xb8);
            *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xb0);
            *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xa8);
            if (*(char *)((long)plVar4 + 0x19) == '\0') {
              plVar4[2] = 0;
              plVar4[4] = 0;
              plVar4[0xb] = 0;
              plVar4[7] = 0;
              return plVar4;
            }
            *(undefined8 *)(puVar1 + -0xe0) = uVar8;
            *(long **)(puVar1 + -0xd8) = plVar4;
            *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0xb0;
            *(undefined **)(puVar1 + -200) = &UNK_01523874;
            lVar11 = 0x3eb4000;
            if ((bRam0000000003eb4e50 & 1) == 0) {
              func_0x00f78a20(0x3d23990,0);
              bRam0000000003eb4e50 = 1;
            }
            if ((plVar4[9] != 0) && (lVar5 = *(long *)(plVar4[9] + 0x28), lVar5 != 0)) {
              /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)((long)plVar4 + 100),(int)plVar4[0xd],
                              *(undefined4 *)((long)plVar4 + 0x6c),lVar5,0);
              if ((plVar4[9] != 0) && (lVar5 = *(long *)(plVar4[9] + 0x28), lVar5 != 0)) {
                /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0((int)plVar4[0xe],*(undefined4 *)((long)plVar4 + 0x74),
                                (int)plVar4[0xf],*(undefined4 *)((long)plVar4 + 0x7c),lVar5,0);
                if ((plVar4[9] != 0) && (lVar5 = *(long *)(plVar4[9] + 0x28), lVar5 != 0)) {
                  /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0((int)plVar4[0x10],*(undefined4 *)((long)plVar4 + 0x84),
                                  (int)plVar4[0x11],lVar5,0);
                  *(undefined1 *)((long)plVar4 + 0x19) = 0;
                  plVar4[0x13] = 0;
                  plVar4[0x12] = 0;
                  plVar4[0x15] = 0;
                  plVar4[0x14] = 0;
                  plVar4[0x17] = 0;
                  plVar4[0x16] = 0;
                  if (plVar4[9] != 0) {
                    lVar11 = *(long *)(plVar4[9] + 0x30);
                    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    lVar10 = 0;
                    plVar6 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0);
                    if ((int)plVar6 != 0) {
                      if (lVar11 == 0) goto code_r0x015239b0;
                      *(undefined2 *)(lVar11 + 0x46) = 0;
                      *(undefined4 *)(lVar11 + 0x40) = 0;
                      *(undefined1 *)(lVar11 + 0x44) = 0;
                    }
                    if (plVar4[9] != 0) {
                      *(undefined8 *)(plVar4[9] + 0x40) = 0;
                      plVar4[9] = 0;
                      *(undefined1 *)(plVar4 + 3) = 0;
                      plVar4[5] = 0;
                      plVar4[6] = 0;
                      *(undefined4 *)(plVar4 + 8) = 0xbf800000;
                      *(undefined2 *)(plVar4 + 0xc) = 0;
                      return plVar6;
                    }
                  }
                }
              }
            }
code_r0x015239b0:
            auVar17 = func_0x00f78af4();
            lVar5 = auVar17._8_8_;
            plVar6 = auVar17._0_8_;
            *(undefined8 *)(puVar1 + -0x130) = unaff_x26;
            *(undefined8 *)(puVar1 + -0x128) = 0x3eb4000;
            *(undefined8 *)(puVar1 + -0x120) = 0x3d21db0;
            *(long *)(puVar1 + -0x118) = lVar7;
            *(long *)(puVar1 + -0x110) = param_4;
            *(undefined8 *)(puVar1 + -0x108) = 0;
            *(long *)(puVar1 + -0x100) = lVar11;
            *(long **)(puVar1 + -0xf8) = plVar4;
            *(undefined1 **)(puVar1 + -0xf0) = puVar1 + -0xd0;
            *(undefined **)(puVar1 + -0xe8) = &Atlas_Gameplay_Usables_Usable__OnExitPool;
            if ((bRam0000000003eb4e4e & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d572a0);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb4e4e = 1;
            }
            *(undefined1 *)((long)plVar6 + 0x19) = 1;
            plVar6[5] = 0;
            plVar6[6] = lVar5;
            plVar6[9] = lVar10;
            plVar6[10] = 0;
            if ((plVar6[0xb] != 0) && (lVar5 != 0)) {
              lVar11 = *(long *)(plVar6[0xb] + 0x10);
              lVar5 = *(long *)(lVar5 + 0x40);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar5,0);
              if (lVar11 != 0) {
                lVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,uVar8,uRam0000000003d572a0);
                plVar6[0x12] = lVar11;
                puVar15 = &UNK_01523aa4;
                plVar4 = plVar6;
                goto code_r0x01523ba8;
              }
            }
            puVar15 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
            plVar4 = (long *)func_0x00f78af4();
code_r0x01523ba8:
            *(long *)(puVar1 + -0x170) = lVar5;
            *(long *)(puVar1 + -0x168) = lVar10;
            *(long **)(puVar1 + -0x160) = plVar6;
            *(undefined8 *)(puVar1 + -0x158) = 0;
            *(undefined8 *)(puVar1 + -0x150) = 0;
            *(undefined8 *)(puVar1 + -0x148) = 0;
            *(undefined1 **)(puVar1 + -0x140) = puVar1 + -0xf0;
            *(undefined **)(puVar1 + -0x138) = puVar15;
            plVar6 = plVar4;
            if ((bRam0000000003eb4e51 & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d334e8);
              func_0x00f78a20(0x3d334f0);
              func_0x00f78a20(0x3d334f8);
              func_0x00f78a20(0x3d57270);
              func_0x00f78a20(0x3d3d2e8);
              plVar6 = (long *)func_0x00f78a20(0x3d3d2f0);
              bRam0000000003eb4e51 = 1;
            }
            *(undefined8 *)(puVar1 + -0x198) = 0;
            *(undefined8 *)(puVar1 + -0x1a0) = 0;
            *(undefined8 *)(puVar1 + -0x188) = 0;
            *(undefined8 *)(puVar1 + -400) = 0;
            *(undefined8 *)(puVar1 + -0x1b8) = 0;
            *(undefined8 *)(puVar1 + -0x1c0) = 0;
            *(undefined8 *)(puVar1 + -0x1a8) = 0;
            *(undefined8 *)(puVar1 + -0x1b0) = 0;
            if (plVar4[5] == 0) {
              return plVar6;
            }
            lVar11 = plVar4[0x12];
            if (lVar11 != 0) {
              lVar7 = *(long *)(lVar11 + 0x28);
              lVar5 = *(long *)(lVar11 + 0x20);
              lVar16 = *(long *)(lVar11 + 0x38);
              lVar10 = *(long *)(lVar11 + 0x30);
              plVar4[0x17] = *(long *)(lVar11 + 0x40);
              plVar4[0x16] = lVar16;
              plVar4[0x15] = lVar10;
              plVar4[0x14] = lVar7;
              plVar4[0x13] = lVar5;
              if (*(long *)(lVar11 + 0x48) == 0) {
                return plVar6;
              }
              if (*(int *)(*(long *)(lVar11 + 0x48) + 0x18) == 0) {
                return plVar6;
              }
              lVar11 = *(long *)(plVar4[5] + 0x28);
              if (lVar11 != 0) {
                uVar8 = *(undefined8 *)(lVar11 + 0xc0);
                *(undefined8 *)(puVar1 + -0x178) = uVar8;
                if (((plVar4[0xb] != 0) && (lVar11 = *(long *)(plVar4[0xb] + 0x10), lVar11 != 0)) &&
                   (lVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,uVar8,uRam0000000003d57270), lVar11 != 0)) {
                  *(undefined8 *)(puVar1 + -0x180) = *(undefined8 *)(lVar11 + 0x70);
                  if ((plVar4[0x12] != 0) && (lVar11 = *(long *)(plVar4[0x12] + 0x48), lVar11 != 0))
                  {
                    /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(puVar1 + -0x1c0,lVar11,uRam0000000003d3d2e8);
                    bVar12 = false;
                    while (uVar9 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(puVar1 + -0x1c0,uRam0000000003d334f0),
                          (uVar9 & 1) != 0) {
                      uVar13 = *(undefined8 *)(puVar1 + -0x1b0);
                      *(undefined8 *)(puVar1 + -0x1e8) = *(undefined8 *)(puVar1 + -0x1a0);
                      *(undefined8 *)(puVar1 + -0x1f0) = *(undefined8 *)(puVar1 + -0x1a8);
                      *(undefined8 *)(puVar1 + -0x1d8) = *(undefined8 *)(puVar1 + -400);
                      *(undefined8 *)(puVar1 + -0x1e0) = *(undefined8 *)(puVar1 + -0x198);
                      *(undefined8 *)(puVar1 + -0x1d0) = *(undefined8 *)(puVar1 + -0x188);
                      *(undefined8 *)(puVar1 + -0x1f8) = uVar13;
                      uVar8 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,puVar1 + -0x1f8);
                      uVar9 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(puVar1 + -0x178,uVar8,0);
                      if ((uVar9 & 1) != 0) {
                        lVar11 = *(long *)(puVar1 + -0x1f0);
                        lVar7 = *(long *)(puVar1 + -0x1d8);
                        lVar5 = *(long *)(puVar1 + -0x1e0);
                        plVar4[0x14] = *(long *)(puVar1 + -0x1e8);
                        plVar4[0x13] = lVar11;
                        plVar4[0x16] = lVar7;
                        plVar4[0x15] = lVar5;
                        plVar4[0x17] = *(long *)(puVar1 + -0x1d0);
                        bVar12 = true;
                      }
                      *(undefined8 *)(puVar1 + -0x1f8) = uVar13;
                      uVar8 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,puVar1 + -0x1f8);
                      uVar3 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(puVar1 + -0x180,uVar8,0);
                      if (!bVar12 && ((uVar3 ^ 0xffffffff) & 1) == 0) {
                        lVar11 = *(long *)(puVar1 + -0x1f0);
                        lVar7 = *(long *)(puVar1 + -0x1d8);
                        lVar5 = *(long *)(puVar1 + -0x1e0);
                        plVar4[0x14] = *(long *)(puVar1 + -0x1e8);
                        plVar4[0x13] = lVar11;
                        plVar4[0x16] = lVar7;
                        plVar4[0x15] = lVar5;
                        plVar4[0x17] = *(long *)(puVar1 + -0x1d0);
                      }
                    }
                    plVar4 = (long *)/*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(puVar1 + -0x1c0,uRam0000000003d334e8);
                    return plVar4;
                  }
                }
              }
            }
            func_0x00f78af4();
            if (extraout_w1 == 1) {
              plVar4 = (long *)___cxa_begin_catch();
              lVar11 = *plVar4;
              ___cxa_end_catch();
              plVar4 = (long *)/*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(puVar1 + -0x1c0,uRam0000000003d334e8);
              if (lVar11 == 0) {
                return plVar4;
              }
              func_0x00f78ac0(lVar11,0);
            }
            plVar4 = (long *)__Unwind_Resume();
            return plVar4;
          }
          puVar15 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTearDownParamsInternal;
          plVar6 = (long *)func_0x00f78af4();
          puVar2 = puVar1 + -0xc0;
        }
        else {
          puVar15 = &UNK_014d01d0;
          puVar2 = puVar1 + -0xc0;
          plVar6 = plVar4;
        }
        while( true ) {
          unaff_x23 = lVar10;
          *(long *)(puVar2 + -0x20) = lVar11;
          *(long **)(puVar2 + -0x18) = plVar4;
          *(undefined1 **)(puVar2 + -0x10) = puVar14;
          *(undefined **)(puVar2 + -8) = puVar15;
          *(undefined1 *)((long)plVar6 + 0x1c9) = 0;
          *(undefined4 *)((long)plVar6 + 0x1cc) = 0;
          plVar6[0x37] = 0;
          plVar6[0x38] = 0;
          plVar6[0x36] = 0;
          if (plVar6[0x34] != 0) {
            plVar4 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__TearDownParams
                                       (plVar6[0x34],0);
            *(undefined1 *)(plVar6 + 0x39) = 0;
            return plVar4;
          }
          auVar17 = func_0x00f78af4();
          unaff_x24 = auVar17._8_8_;
          lVar5 = auVar17._0_8_;
          unaff_x22 = 0;
          unaff_x21 = 0;
          puVar1 = puVar2 + -0x80;
          *(undefined8 *)(puVar2 + -0x70) = unaff_x26;
          *(undefined8 *)(puVar2 + -0x68) = 0x3eb4000;
          *(undefined8 *)(puVar2 + -0x60) = uVar8;
          *(long *)(puVar2 + -0x58) = lVar7;
          *(long *)(puVar2 + -0x50) = param_4;
          *(undefined8 *)(puVar2 + -0x48) = 0;
          *(long *)(puVar2 + -0x40) = lVar11;
          *(long **)(puVar2 + -0x38) = plVar6;
          *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x28) =
               &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnExitPool;
          puVar14 = puVar2 + -0x30;
          param_4 = 0;
          unaff_x25 = 0x3eb4000;
          if ((bRam0000000003eb4b82 & 1) == 0) {
            func_0x00f78a20(0x3d24b58);
            func_0x00f78a20(0x3d41598);
            func_0x00f78a20(0x3d1eaf8);
            func_0x00f78a20(0x3d416c0);
            bRam0000000003eb4b82 = 1;
          }
          *(undefined8 *)(puVar2 + -0x80) = 0;
          *(undefined8 *)(puVar2 + -0x78) = 0;
          lVar10 = unaff_x23;
          Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool(lVar5,unaff_x24,unaff_x23,0,0,0);
          lVar11 = *(long *)(lVar5 + 0x1a0);
          lVar7 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                            (lVar5);
          if ((lVar7 != 0) && (lVar11 != 0)) break;
          func_0x00f78af4();
          plVar6 = (long *)func_0x00f78e5c();
          *(long *)(puVar2 + -0xa0) = lVar11;
          *(long *)(puVar2 + -0x98) = lVar5;
          *(undefined1 **)(puVar2 + -0x90) = puVar14;
          *(undefined **)(puVar2 + -0x88) =
               &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnEnterPool;
          puVar14 = puVar2 + -0x90;
          puVar15 = &UNK_014d0538;
          puVar2 = puVar2 + -0xa0;
          plVar4 = plVar6;
          lVar7 = unaff_x23;
          uVar8 = unaff_x24;
        }
        param_3 = *(long *)(lVar5 + 0x100);
        param_5 = 0;
        param_4 = lVar5;
        Atlas_Gameplay_Usables_HomingProjectileLogic__SetUpParams
                  (lVar11,*(undefined8 *)(lVar7 + 0xb0));
        puVar15 = &UNK_014d0318;
        param_1 = lVar5;
      } while( true );
    }
  }
  return plVar4;
}



// ============================================================
// RVA: 0x14d001c | Atlas.Gameplay.Usables.ProximityHomingProjectile.get_ProximityHomingBehaviour
// ============================================================

/* WARNING: Possible PIC construction at 0x014d01cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d0534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d0538) */
/* WARNING: Removing unreachable block (ram,0x01570398) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour
                 (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 )

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  int extraout_w1;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 unaff_x26;
  undefined1 ****ppppuVar15;
  undefined *puVar16;
  undefined4 uVar17;
  float fVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 ******ppppppuStack_140;
  undefined *puStack_138;
  undefined1 *****pppppuStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4b80 & 1) == 0) {
    func_0x00f78a20(0x3d23f20);
    bRam0000000003eb4b80 = 1;
  }
  plVar3 = *(long **)(param_1 + 0x48);
  if (plVar3 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((*(byte *)(/*Atlas.Gameplay.Usables.ProximityHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23f20 + 300) <= *(byte *)(*plVar3 + 300)) &&
     (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ProximityHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23f20 + 300) * 8 + -8) ==
      /*Atlas.Gameplay.Usables.ProximityHomingProjectileBehaviour_TypeInfo*/ lRam0000000003d23f20)) {
    return plVar3;
  }
  lVar4 = func_0x00f78e5c();
  puStack_40 = (undefined1 *)&puStack_30;
  puStack_28 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__get_CanTrack;
  if (*(long *)(lVar4 + 0x1a0) != 0) {
    return (long *)(ulong)(*(float *)(*(long *)(lVar4 + 0x1a0) + 0x28) <= 0.0);
  }
  puStack_30 = &stack0xfffffffffffffff0;
  lVar4 = func_0x00f78af4();
  uStack_50 = 0x3eb4000;
  puStack_38 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__get_AttemptingReLockOn;
  lStack_48 = param_1;
  if (*(long *)(lVar4 + 0x1a0) != 0) {
    puStack_40 = (undefined1 *)&puStack_30;
    plVar3 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                               (*(long *)(lVar4 + 0x1a0),0);
    if ((int)plVar3 != 0) {
      plVar3 = (long *)(ulong)(0.0 < *(float *)(lVar4 + 0x1cc));
    }
    return plVar3;
  }
  auVar21 = func_0x00f78af4();
  lVar4 = auVar21._0_8_;
  puStack_58 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__Init;
  uVar8 = 0x3d21db0;
  ppuStack_60 = &puStack_40;
  if ((bRam0000000003eb4b81 & 1) == 0) {
    func_0x00f78a20(0x3d21db0);
    bRam0000000003eb4b81 = 1;
  }
  lVar13 = param_3;
  Atlas_Gameplay_Usables_ProjectileUsable__Init(lVar4,auVar21._8_8_,param_3,param_4,param_5);
  lVar5 = func_0x00f78aec(/*Atlas.Gameplay.Usables.HomingProjectileLogic_TypeInfo*/ uRam0000000003d21db0);
  Atlas_Gameplay_Usables_HomingProjectileLogic___ctor(lVar5,0);
  *(long *)(lVar4 + 0x1a0) = lVar5;
  if (lVar5 != 0) {
    plVar3 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__Init(lVar5,param_3,0);
    *(undefined1 *)(lVar4 + 0x1c8) = 0;
    return plVar3;
  }
  plVar3 = (long *)func_0x00f78af4();
  puStack_a8 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__DeInit;
  ppppuVar15 = &pppuStack_b0;
  uVar10 = 0;
  lStack_c0 = param_3;
  pppuStack_b0 = &ppuStack_60;
  if (*(char *)((long)plVar3 + 0x19) != '\0') {
    puVar16 = &UNK_014d01d0;
    plVar7 = &lStack_c0;
    plVar6 = plVar3;
code_r0x014d01f8:
    do {
      lStack_b8 = auVar21._0_8_;
      *(long *)((long)plVar7 + -0x20) = param_3;
      *(long **)((long)plVar7 + -0x18) = plVar3;
      *(undefined1 *****)((long)plVar7 + -0x10) = ppppuVar15;
      *(undefined **)((long)plVar7 + -8) = puVar16;
      *(undefined1 *)((long)plVar6 + 0x1c9) = 0;
      *(undefined4 *)((long)plVar6 + 0x1cc) = 0;
      plVar6[0x37] = 0;
      plVar6[0x38] = 0;
      plVar6[0x36] = 0;
      if (plVar6[0x34] != 0) {
        plVar3 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__TearDownParams
                                   (plVar6[0x34],0);
        *(undefined1 *)(plVar6 + 0x39) = 0;
        return plVar3;
      }
      auVar22 = func_0x00f78af4();
      uVar14 = auVar22._8_8_;
      plVar3 = auVar22._0_8_;
      *(undefined8 *)((long)plVar7 + -0x70) = unaff_x26;
      *(undefined8 *)((long)plVar7 + -0x68) = 0x3eb4000;
      *(undefined8 *)((long)plVar7 + -0x60) = uVar8;
      *(long *)((long)plVar7 + -0x58) = auVar21._8_8_;
      *(undefined8 *)((long)plVar7 + -0x50) = param_4;
      *(undefined8 *)((long)plVar7 + -0x48) = uVar10;
      *(long *)((long)plVar7 + -0x40) = param_3;
      *(long **)((long)plVar7 + -0x38) = plVar6;
      *(undefined1 **)((long)plVar7 + -0x30) = (undefined1 *)((long)plVar7 + -0x10);
      *(undefined **)((long)plVar7 + -0x28) =
           &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnExitPool;
      uVar10 = 0;
      param_4 = 0;
      if ((bRam0000000003eb4b82 & 1) == 0) {
        func_0x00f78a20(0x3d24b58);
        func_0x00f78a20(0x3d41598);
        func_0x00f78a20(0x3d1eaf8);
        func_0x00f78a20(0x3d416c0);
        bRam0000000003eb4b82 = 1;
      }
      *(undefined8 *)((long)plVar7 + -0x80) = 0;
      *(undefined8 *)((long)plVar7 + -0x78) = 0;
      lVar4 = lVar13;
      Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool(plVar3,uVar14,lVar13,0,0,0);
      param_3 = plVar3[0x34];
      lVar5 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                        (plVar3);
      if ((lVar5 == 0) || (param_3 == 0)) {
code_r0x014d051c:
        func_0x00f78af4();
        lVar5 = lVar13;
        uVar8 = uVar14;
      }
      else {
        lVar4 = plVar3[0x20];
        Atlas_Gameplay_Usables_HomingProjectileLogic__SetUpParams
                  (param_3,*(undefined8 *)(lVar5 + 0xb0),lVar4,plVar3,0);
        lVar5 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour
                          (plVar3);
        if ((lVar5 == 0) || (*(long *)(lVar5 + 0x70) == 0)) goto code_r0x014d051c;
        lVar4 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar5 + 0x70),1);
        lVar5 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour
                          (plVar3);
        if ((lVar5 == 0) || (*(long *)(lVar5 + 0x78) == 0)) goto code_r0x014d051c;
        lVar4 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar5 + 0x78),0);
        *(undefined1 *)(plVar3 + 0x39) = 0;
        if (plVar3[0x1f] == 0) goto code_r0x014d051c;
        lVar13 = 0x3d1eaf8;
        uVar1 = 0x3d41598;
        uVar11 = 0x3d41598;
        param_3 = *(long *)(plVar3[0x1f] + 0x20);
        uVar10 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
        lVar4 = *(long *)(*plVar3 + 0x410);
        /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar10,plVar3,lVar4,uRam0000000003d41598);
        param_4 = uVar1;
        if (param_3 == 0) goto code_r0x014d051c;
        uVar14 = 0x3d416c0;
        lVar4 = lRam0000000003d416c0;
        /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(param_3,uVar10);
        if (plVar3[0x1f] == 0) goto code_r0x014d051c;
        param_3 = *(long *)(plVar3[0x1f] + 0x28);
        uVar10 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
        lVar4 = *(long *)(*plVar3 + 0x420);
        /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar10,plVar3,lVar4,uRam0000000003d41598);
        param_4 = uVar11;
        if (param_3 == 0) goto code_r0x014d051c;
        lVar4 = lRam0000000003d416c0;
        /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(param_3,uVar10);
        if ((plVar3[0x1f] == 0) || (plVar6 = *(long **)(plVar3[0x1f] + 0x10), plVar6 == (long *)0x0)
           ) goto code_r0x014d051c;
        param_4 = uVar1;
        lVar5 = 0x3d1eaf8;
        uVar8 = 0x3d416c0;
        if ((*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) <= *(byte *)(*plVar6 + 300)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) * 8 +
                     -8) == /*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58)) {
          uVar17 = /*UnityEngine.SphereCollider$$get_radius*/ func_0x032a4ba4(plVar6,0);
          *(undefined4 *)(plVar3 + 0x36) = uVar17;
          lVar5 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                            (plVar3);
          param_4 = uVar11;
          if (lVar5 != 0) {
            uVar8 = *(undefined8 *)(lVar5 + 0xb0);
            *(undefined8 *)((long)plVar7 + -0x78) = *(undefined8 *)(lVar5 + 0xb8);
            *(undefined8 *)((long)plVar7 + -0x80) = uVar8;
            fVar18 = (float)/*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_FOV*/ func_0x01563318((undefined1 *)((long)plVar7 + -0x80),0);
            uVar17 = _cosf(fVar18 * _UNK_033f850c * 0.5);
            *(undefined4 *)((long)plVar3 + 0x1b4) = uVar17;
            lVar5 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                              (plVar3);
            if (lVar5 != 0) {
              uVar8 = *(undefined8 *)(lVar5 + 0xb0);
              *(undefined8 *)((long)plVar7 + -0x78) = *(undefined8 *)(lVar5 + 0xb8);
              *(undefined8 *)((long)plVar7 + -0x80) = uVar8;
              uVar17 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMin*/ func_0x015633f8((undefined1 *)((long)plVar7 + -0x80),0);
              *(undefined4 *)(plVar3 + 0x37) = uVar17;
              lVar5 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                                (plVar3);
              if (lVar5 != 0) {
                uVar8 = *(undefined8 *)(lVar5 + 0xb0);
                *(undefined8 *)((long)plVar7 + -0x78) = *(undefined8 *)(lVar5 + 0xb8);
                *(undefined8 *)((long)plVar7 + -0x80) = uVar8;
                uVar17 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMax*/ func_0x01563418((undefined1 *)((long)plVar7 + -0x80),0);
                *(undefined4 *)((long)plVar3 + 0x1bc) = uVar17;
                if ((((plVar3[5] != 0) && (lVar5 = *(long *)(plVar3[5] + 0x70), lVar5 != 0)) &&
                    (lVar5 = *(long *)(lVar5 + 0x90), lVar5 != 0)) &&
                   (lVar5 = *(long *)(lVar5 + 0x38), lVar5 != 0)) {
                  lVar4 = plVar3[0x20];
                  lVar5 = /*Atlas.Audio.WeaponAudioManager$$Create*/ func_0x01530894(lVar5,0,lVar4,0);
                  plVar3[0x35] = lVar5;
                  if (lVar5 != 0) {
                    plVar3 = (long *)/*Atlas.Audio.WeaponAudio$$Pickup*/ func_0x0152fdf0(lVar5,0);
                    return plVar3;
                  }
                }
              }
            }
          }
          goto code_r0x014d051c;
        }
      }
      plVar6 = (long *)func_0x00f78e5c();
      auVar21._8_8_ = lVar5;
      auVar21._0_8_ = lStack_b8;
      *(long *)((long)plVar7 + -0xa0) = param_3;
      *(long **)((long)plVar7 + -0x98) = plVar3;
      *(undefined1 **)((long)plVar7 + -0x90) = (undefined1 *)((long)plVar7 + -0x30);
      *(undefined **)((long)plVar7 + -0x88) =
           &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnEnterPool;
      ppppuVar15 = (undefined1 ****)((long)plVar7 + -0x90);
      puVar16 = &UNK_014d0538;
      plVar7 = (long *)((long)plVar7 + -0xa0);
      lVar13 = lVar4;
      plVar3 = plVar6;
    } while( true );
  }
  lStack_b8 = lVar4;
  if (plVar3[0x34] == 0) {
    puVar16 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTearDownParamsInternal;
    plVar6 = (long *)func_0x00f78af4();
    auVar21._8_8_ = auVar21._8_8_;
    auVar21._0_8_ = lStack_b8;
    plVar7 = &lStack_c0;
    goto code_r0x014d01f8;
  }
  Atlas_Gameplay_Usables_HomingProjectileLogic__DeInit(plVar3[0x34],0);
  plVar3[0x34] = 0;
  if (*(char *)((long)plVar3 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(plVar3);
  }
  plVar3[0x1f] = 0;
  *(undefined4 *)(plVar3 + 0x2a) = 0;
  if (*(char *)((long)plVar3 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(plVar3,0);
  }
  ppppuStack_d0 = &pppuStack_b0;
  if (*(char *)((long)plVar3 + 0x19) == '\0') {
    plVar3[2] = 0;
    plVar3[4] = 0;
    plVar3[0xb] = 0;
    plVar3[7] = 0;
    return plVar3;
  }
  lStack_e0 = lStack_c0;
  puStack_c8 = &UNK_01523874;
  plStack_d8 = plVar3;
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((plVar3[9] != 0) && (lVar4 = *(long *)(plVar3[9] + 0x28), lVar4 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)((long)plVar3 + 100),(int)plVar3[0xd],
                    *(undefined4 *)((long)plVar3 + 0x6c),lVar4,0);
    if ((plVar3[9] != 0) && (lVar4 = *(long *)(plVar3[9] + 0x28), lVar4 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0((int)plVar3[0xe],*(undefined4 *)((long)plVar3 + 0x74),(int)plVar3[0xf],
                      *(undefined4 *)((long)plVar3 + 0x7c),lVar4,0);
      if ((plVar3[9] != 0) && (lVar4 = *(long *)(plVar3[9] + 0x28), lVar4 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0((int)plVar3[0x10],*(undefined4 *)((long)plVar3 + 0x84),(int)plVar3[0x11],
                        lVar4,0);
        *(undefined1 *)((long)plVar3 + 0x19) = 0;
        plVar3[0x13] = 0;
        plVar3[0x12] = 0;
        plVar3[0x15] = 0;
        plVar3[0x14] = 0;
        plVar3[0x17] = 0;
        plVar3[0x16] = 0;
        if (plVar3[9] != 0) {
          lVar4 = *(long *)(plVar3[9] + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar13 = 0;
          plVar7 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0);
          if ((int)plVar7 != 0) {
            if (lVar4 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar4 + 0x46) = 0;
            *(undefined4 *)(lVar4 + 0x40) = 0;
            *(undefined1 *)(lVar4 + 0x44) = 0;
          }
          if (plVar3[9] != 0) {
            *(undefined8 *)(plVar3[9] + 0x40) = 0;
            plVar3[9] = 0;
            *(undefined1 *)(plVar3 + 3) = 0;
            plVar3[5] = 0;
            plVar3[6] = 0;
            *(undefined4 *)(plVar3 + 8) = 0xbf800000;
            *(undefined2 *)(plVar3 + 0xc) = 0;
            return plVar7;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar21 = func_0x00f78af4();
  lVar4 = auVar21._8_8_;
  plVar3 = auVar21._0_8_;
  puStack_e8 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  pppppuStack_f0 = &ppppuStack_d0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)((long)plVar3 + 0x19) = 1;
  plVar3[5] = 0;
  plVar3[6] = lVar4;
  plVar3[9] = lVar13;
  plVar3[10] = 0;
  if ((plVar3[0xb] != 0) && (lVar4 != 0)) {
    lVar5 = *(long *)(plVar3[0xb] + 0x10);
    lVar4 = *(long *)(lVar4 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar4,0);
    if (lVar5 != 0) {
      lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,uVar8,uRam0000000003d572a0);
      plVar3[0x12] = lVar5;
      puVar16 = &UNK_01523aa4;
      plVar7 = plVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar16 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  plVar7 = (long *)func_0x00f78af4();
code_r0x01523ba8:
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  plVar6 = plVar7;
  lStack_170 = lVar4;
  lStack_168 = lVar13;
  plStack_160 = plVar3;
  ppppppuStack_140 = &pppppuStack_f0;
  puStack_138 = puVar16;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    plVar6 = (long *)func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  lStack_198 = 0;
  lStack_1a0 = 0;
  lStack_188 = 0;
  lStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  if (plVar7[5] == 0) {
    return plVar6;
  }
  lVar4 = plVar7[0x12];
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x28);
    lVar13 = *(long *)(lVar4 + 0x20);
    lVar20 = *(long *)(lVar4 + 0x38);
    lVar19 = *(long *)(lVar4 + 0x30);
    plVar7[0x17] = *(long *)(lVar4 + 0x40);
    plVar7[0x16] = lVar20;
    plVar7[0x15] = lVar19;
    plVar7[0x14] = lVar5;
    plVar7[0x13] = lVar13;
    if (*(long *)(lVar4 + 0x48) == 0) {
      return plVar6;
    }
    if (*(int *)(*(long *)(lVar4 + 0x48) + 0x18) == 0) {
      return plVar6;
    }
    lVar4 = *(long *)(plVar7[5] + 0x28);
    if (lVar4 != 0) {
      uStack_178 = *(undefined8 *)(lVar4 + 0xc0);
      if (((plVar7[0xb] != 0) && (lVar4 = *(long *)(plVar7[0xb] + 0x10), lVar4 != 0)) &&
         (lVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,uStack_178,uRam0000000003d57270), lVar4 != 0)) {
        uStack_180 = *(undefined8 *)(lVar4 + 0x70);
        if ((plVar7[0x12] != 0) && (lVar4 = *(long *)(plVar7[0x12] + 0x48), lVar4 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_1c0,lVar4,uRam0000000003d3d2e8);
          bVar12 = false;
          while (uVar9 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_1c0,uRam0000000003d334f0), uVar8 = uStack_1b0,
                (uVar9 & 1) != 0) {
            lStack_1e8 = lStack_1a0;
            lStack_1f0 = lStack_1a8;
            lStack_1d8 = lStack_190;
            lStack_1e0 = lStack_198;
            lStack_1d0 = lStack_188;
            uStack_1f8 = uStack_1b0;
            uVar10 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1f8);
            uVar9 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_178,uVar10,0);
            if ((uVar9 & 1) != 0) {
              plVar7[0x14] = lStack_1e8;
              plVar7[0x13] = lStack_1f0;
              plVar7[0x16] = lStack_1d8;
              plVar7[0x15] = lStack_1e0;
              plVar7[0x17] = lStack_1d0;
              bVar12 = true;
            }
            uStack_1f8 = uVar8;
            uVar8 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1f8);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_180,uVar8,0);
            if (!bVar12 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              plVar7[0x14] = lStack_1e8;
              plVar7[0x13] = lStack_1f0;
              plVar7[0x16] = lStack_1d8;
              plVar7[0x15] = lStack_1e0;
              plVar7[0x17] = lStack_1d0;
            }
          }
          plVar3 = (long *)/*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_1c0,uRam0000000003d334e8);
          return plVar3;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    lVar4 = *plVar3;
    ___cxa_end_catch();
    plVar3 = (long *)/*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_1c0,uRam0000000003d334e8);
    if (lVar4 == 0) {
      return plVar3;
    }
    func_0x00f78ac0(lVar4,0);
  }
  plVar3 = (long *)__Unwind_Resume();
  return plVar3;
}



// ============================================================
// RVA: 0x14d0098 | Atlas.Gameplay.Usables.ProximityHomingProjectile.get_CanTrack
// ============================================================

/* WARNING: Possible PIC construction at 0x014d01cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d0534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d0538) */
/* WARNING: Removing unreachable block (ram,0x01570398) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Usables_ProximityHomingProjectile__get_CanTrack
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  int extraout_w1;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 unaff_x26;
  undefined1 ****ppppuVar16;
  undefined *puVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
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
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 ******ppppppuStack_120;
  undefined *puStack_118;
  undefined1 *****pppppuStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined1 ****ppppuStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 ***pppuStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_40;
  undefined *puStack_38;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    return (ulong)(*(float *)(*(long *)(param_1 + 0x1a0) + 0x28) <= 0.0);
  }
  lVar2 = func_0x00f78af4();
  puStack_18 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__get_AttemptingReLockOn;
  if (*(long *)(lVar2 + 0x1a0) != 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    uVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                      (*(long *)(lVar2 + 0x1a0),0);
    if ((int)uVar3 != 0) {
      uVar3 = (ulong)(0.0 < *(float *)(lVar2 + 0x1cc));
    }
    return uVar3;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  auVar21 = func_0x00f78af4();
  lVar2 = auVar21._0_8_;
  puStack_38 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__Init;
  uVar8 = 0x3d21db0;
  ppuStack_40 = &puStack_20;
  if ((bRam0000000003eb4b81 & 1) == 0) {
    func_0x00f78a20(0x3d21db0);
    bRam0000000003eb4b81 = 1;
  }
  lVar14 = param_3;
  Atlas_Gameplay_Usables_ProjectileUsable__Init(lVar2,auVar21._8_8_,param_3,param_4,param_5);
  lVar4 = func_0x00f78aec(/*Atlas.Gameplay.Usables.HomingProjectileLogic_TypeInfo*/ uRam0000000003d21db0);
  Atlas_Gameplay_Usables_HomingProjectileLogic___ctor(lVar4,0);
  *(long *)(lVar2 + 0x1a0) = lVar4;
  if (lVar4 != 0) {
    uVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__Init(lVar4,param_3,0);
    *(undefined1 *)(lVar2 + 0x1c8) = 0;
    return uVar3;
  }
  uVar3 = func_0x00f78af4();
  puStack_88 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__DeInit;
  ppppuVar16 = &pppuStack_90;
  uVar11 = 0;
  lStack_a0 = param_3;
  pppuStack_90 = &ppuStack_40;
  if (*(char *)(uVar3 + 0x19) != '\0') {
    puVar17 = &UNK_014d01d0;
    plVar10 = &lStack_a0;
    uVar5 = uVar3;
code_r0x014d01f8:
    do {
      lStack_98 = auVar21._0_8_;
      *(long *)((long)plVar10 + -0x20) = param_3;
      *(ulong *)((long)plVar10 + -0x18) = uVar3;
      *(undefined1 *****)((long)plVar10 + -0x10) = ppppuVar16;
      *(undefined **)((long)plVar10 + -8) = puVar17;
      *(undefined1 *)(uVar5 + 0x1c9) = 0;
      *(undefined4 *)(uVar5 + 0x1cc) = 0;
      *(undefined8 *)(uVar5 + 0x1b8) = 0;
      *(undefined8 *)(uVar5 + 0x1c0) = 0;
      *(undefined8 *)(uVar5 + 0x1b0) = 0;
      if (*(long *)(uVar5 + 0x1a0) != 0) {
        uVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__TearDownParams
                          (*(long *)(uVar5 + 0x1a0),0);
        *(undefined1 *)(uVar5 + 0x1c8) = 0;
        return uVar3;
      }
      auVar22 = func_0x00f78af4();
      uVar15 = auVar22._8_8_;
      plVar6 = auVar22._0_8_;
      *(undefined8 *)((long)plVar10 + -0x70) = unaff_x26;
      *(undefined8 *)((long)plVar10 + -0x68) = 0x3eb4000;
      *(undefined8 *)((long)plVar10 + -0x60) = uVar8;
      *(long *)((long)plVar10 + -0x58) = auVar21._8_8_;
      *(undefined8 *)((long)plVar10 + -0x50) = param_4;
      *(undefined8 *)((long)plVar10 + -0x48) = uVar11;
      *(long *)((long)plVar10 + -0x40) = param_3;
      *(ulong *)((long)plVar10 + -0x38) = uVar5;
      *(undefined1 **)((long)plVar10 + -0x30) = (undefined1 *)((long)plVar10 + -0x10);
      *(undefined **)((long)plVar10 + -0x28) =
           &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnExitPool;
      uVar11 = 0;
      param_4 = 0;
      if ((bRam0000000003eb4b82 & 1) == 0) {
        func_0x00f78a20(0x3d24b58);
        func_0x00f78a20(0x3d41598);
        func_0x00f78a20(0x3d1eaf8);
        func_0x00f78a20(0x3d416c0);
        bRam0000000003eb4b82 = 1;
      }
      *(undefined8 *)((long)plVar10 + -0x80) = 0;
      *(undefined8 *)((long)plVar10 + -0x78) = 0;
      lVar2 = lVar14;
      Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool(plVar6,uVar15,lVar14,0,0,0);
      param_3 = plVar6[0x34];
      lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                        (plVar6);
      if ((lVar4 == 0) || (param_3 == 0)) {
code_r0x014d051c:
        func_0x00f78af4();
        lVar4 = lVar14;
        uVar8 = uVar15;
      }
      else {
        lVar2 = plVar6[0x20];
        Atlas_Gameplay_Usables_HomingProjectileLogic__SetUpParams
                  (param_3,*(undefined8 *)(lVar4 + 0xb0),lVar2,plVar6,0);
        lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour
                          (plVar6);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x70) == 0)) goto code_r0x014d051c;
        lVar2 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x70),1);
        lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour
                          (plVar6);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x78) == 0)) goto code_r0x014d051c;
        lVar2 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x78),0);
        *(undefined1 *)(plVar6 + 0x39) = 0;
        if (plVar6[0x1f] == 0) goto code_r0x014d051c;
        lVar14 = 0x3d1eaf8;
        uVar20 = 0x3d41598;
        uVar12 = 0x3d41598;
        param_3 = *(long *)(plVar6[0x1f] + 0x20);
        uVar11 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
        lVar2 = *(long *)(*plVar6 + 0x410);
        /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar11,plVar6,lVar2,uRam0000000003d41598);
        param_4 = uVar20;
        if (param_3 == 0) goto code_r0x014d051c;
        uVar15 = 0x3d416c0;
        lVar2 = lRam0000000003d416c0;
        /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(param_3,uVar11);
        if (plVar6[0x1f] == 0) goto code_r0x014d051c;
        param_3 = *(long *)(plVar6[0x1f] + 0x28);
        uVar11 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
        lVar2 = *(long *)(*plVar6 + 0x420);
        /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar11,plVar6,lVar2,uRam0000000003d41598);
        param_4 = uVar12;
        if (param_3 == 0) goto code_r0x014d051c;
        lVar2 = lRam0000000003d416c0;
        /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(param_3,uVar11);
        if ((plVar6[0x1f] == 0) || (plVar7 = *(long **)(plVar6[0x1f] + 0x10), plVar7 == (long *)0x0)
           ) goto code_r0x014d051c;
        param_4 = uVar20;
        lVar4 = 0x3d1eaf8;
        uVar8 = 0x3d416c0;
        if ((*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) <= *(byte *)(*plVar7 + 300)) &&
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) * 8 +
                     -8) == /*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58)) {
          uVar18 = /*UnityEngine.SphereCollider$$get_radius*/ func_0x032a4ba4(plVar7,0);
          *(undefined4 *)(plVar6 + 0x36) = uVar18;
          lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                            (plVar6);
          param_4 = uVar12;
          if (lVar4 != 0) {
            uVar8 = *(undefined8 *)(lVar4 + 0xb0);
            *(undefined8 *)((long)plVar10 + -0x78) = *(undefined8 *)(lVar4 + 0xb8);
            *(undefined8 *)((long)plVar10 + -0x80) = uVar8;
            fVar19 = (float)/*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_FOV*/ func_0x01563318((undefined1 *)((long)plVar10 + -0x80),0);
            uVar18 = _cosf(fVar19 * _UNK_033f850c * 0.5);
            *(undefined4 *)((long)plVar6 + 0x1b4) = uVar18;
            lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                              (plVar6);
            if (lVar4 != 0) {
              uVar8 = *(undefined8 *)(lVar4 + 0xb0);
              *(undefined8 *)((long)plVar10 + -0x78) = *(undefined8 *)(lVar4 + 0xb8);
              *(undefined8 *)((long)plVar10 + -0x80) = uVar8;
              uVar18 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMin*/ func_0x015633f8((undefined1 *)((long)plVar10 + -0x80),0);
              *(undefined4 *)(plVar6 + 0x37) = uVar18;
              lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                                (plVar6);
              if (lVar4 != 0) {
                uVar8 = *(undefined8 *)(lVar4 + 0xb0);
                *(undefined8 *)((long)plVar10 + -0x78) = *(undefined8 *)(lVar4 + 0xb8);
                *(undefined8 *)((long)plVar10 + -0x80) = uVar8;
                uVar18 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMax*/ func_0x01563418((undefined1 *)((long)plVar10 + -0x80),0);
                *(undefined4 *)((long)plVar6 + 0x1bc) = uVar18;
                if ((((plVar6[5] != 0) && (lVar4 = *(long *)(plVar6[5] + 0x70), lVar4 != 0)) &&
                    (lVar4 = *(long *)(lVar4 + 0x90), lVar4 != 0)) &&
                   (lVar4 = *(long *)(lVar4 + 0x38), lVar4 != 0)) {
                  lVar2 = plVar6[0x20];
                  lVar4 = /*Atlas.Audio.WeaponAudioManager$$Create*/ func_0x01530894(lVar4,0,lVar2,0);
                  plVar6[0x35] = lVar4;
                  if (lVar4 != 0) {
                    uVar3 = /*Atlas.Audio.WeaponAudio$$Pickup*/ func_0x0152fdf0(lVar4,0);
                    return uVar3;
                  }
                }
              }
            }
          }
          goto code_r0x014d051c;
        }
      }
      uVar5 = func_0x00f78e5c();
      auVar21._8_8_ = lVar4;
      auVar21._0_8_ = lStack_98;
      *(long *)((long)plVar10 + -0xa0) = param_3;
      *(long **)((long)plVar10 + -0x98) = plVar6;
      *(undefined1 **)((long)plVar10 + -0x90) = (undefined1 *)((long)plVar10 + -0x30);
      *(undefined **)((long)plVar10 + -0x88) =
           &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnEnterPool;
      ppppuVar16 = (undefined1 ****)((long)plVar10 + -0x90);
      puVar17 = &UNK_014d0538;
      plVar10 = (long *)((long)plVar10 + -0xa0);
      lVar14 = lVar2;
      uVar3 = uVar5;
    } while( true );
  }
  lStack_98 = lVar2;
  if (*(long *)(uVar3 + 0x1a0) == 0) {
    puVar17 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTearDownParamsInternal;
    uVar5 = func_0x00f78af4();
    auVar21._8_8_ = auVar21._8_8_;
    auVar21._0_8_ = lStack_98;
    plVar10 = &lStack_a0;
    goto code_r0x014d01f8;
  }
  Atlas_Gameplay_Usables_HomingProjectileLogic__DeInit(*(long *)(uVar3 + 0x1a0),0);
  *(undefined8 *)(uVar3 + 0x1a0) = 0;
  if (*(char *)(uVar3 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(uVar3);
  }
  *(undefined8 *)(uVar3 + 0xf8) = 0;
  *(undefined4 *)(uVar3 + 0x150) = 0;
  if (*(char *)(uVar3 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(uVar3,0);
  }
  ppppuStack_b0 = &pppuStack_90;
  if (*(char *)(uVar3 + 0x19) == '\0') {
    *(undefined8 *)(uVar3 + 0x10) = 0;
    *(undefined8 *)(uVar3 + 0x20) = 0;
    *(undefined8 *)(uVar3 + 0x58) = 0;
    *(undefined8 *)(uVar3 + 0x38) = 0;
    return uVar3;
  }
  lStack_c0 = lStack_a0;
  puStack_a8 = &UNK_01523874;
  uStack_b8 = uVar3;
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(uVar3 + 0x48) != 0) &&
     (lVar2 = *(long *)(*(long *)(uVar3 + 0x48) + 0x28), lVar2 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(uVar3 + 100),*(undefined4 *)(uVar3 + 0x68),
                    *(undefined4 *)(uVar3 + 0x6c),lVar2,0);
    if ((*(long *)(uVar3 + 0x48) != 0) &&
       (lVar2 = *(long *)(*(long *)(uVar3 + 0x48) + 0x28), lVar2 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(uVar3 + 0x70),*(undefined4 *)(uVar3 + 0x74),
                      *(undefined4 *)(uVar3 + 0x78),*(undefined4 *)(uVar3 + 0x7c),lVar2,0);
      if ((*(long *)(uVar3 + 0x48) != 0) &&
         (lVar2 = *(long *)(*(long *)(uVar3 + 0x48) + 0x28), lVar2 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(uVar3 + 0x80),*(undefined4 *)(uVar3 + 0x84),
                        *(undefined4 *)(uVar3 + 0x88),lVar2,0);
        *(undefined1 *)(uVar3 + 0x19) = 0;
        *(undefined8 *)(uVar3 + 0x98) = 0;
        *(undefined8 *)(uVar3 + 0x90) = 0;
        *(undefined8 *)(uVar3 + 0xa8) = 0;
        *(undefined8 *)(uVar3 + 0xa0) = 0;
        *(undefined8 *)(uVar3 + 0xb8) = 0;
        *(undefined8 *)(uVar3 + 0xb0) = 0;
        if (*(long *)(uVar3 + 0x48) != 0) {
          lVar2 = *(long *)(*(long *)(uVar3 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar14 = 0;
          uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar2,0);
          if ((int)uVar5 != 0) {
            if (lVar2 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar2 + 0x46) = 0;
            *(undefined4 *)(lVar2 + 0x40) = 0;
            *(undefined1 *)(lVar2 + 0x44) = 0;
          }
          if (*(long *)(uVar3 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(uVar3 + 0x48) + 0x40) = 0;
            *(undefined8 *)(uVar3 + 0x48) = 0;
            *(undefined1 *)(uVar3 + 0x18) = 0;
            *(undefined8 *)(uVar3 + 0x28) = 0;
            *(undefined8 *)(uVar3 + 0x30) = 0;
            *(undefined4 *)(uVar3 + 0x40) = 0xbf800000;
            *(undefined2 *)(uVar3 + 0x60) = 0;
            return uVar5;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar21 = func_0x00f78af4();
  lVar2 = auVar21._8_8_;
  uVar3 = auVar21._0_8_;
  puStack_c8 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  pppppuStack_d0 = &ppppuStack_b0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(uVar3 + 0x19) = 1;
  *(undefined8 *)(uVar3 + 0x28) = 0;
  *(long *)(uVar3 + 0x30) = lVar2;
  *(long *)(uVar3 + 0x48) = lVar14;
  *(undefined8 *)(uVar3 + 0x50) = 0;
  if ((*(long *)(uVar3 + 0x58) != 0) && (lVar2 != 0)) {
    lVar4 = *(long *)(*(long *)(uVar3 + 0x58) + 0x10);
    lVar2 = *(long *)(lVar2 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar2,0);
    if (lVar4 != 0) {
      uVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,uVar8,uRam0000000003d572a0);
      *(undefined8 *)(uVar3 + 0x90) = uVar8;
      puVar17 = &UNK_01523aa4;
      uVar5 = uVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar17 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  uVar5 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uVar9 = uVar5;
  lStack_150 = lVar2;
  lStack_148 = lVar14;
  uStack_140 = uVar3;
  ppppppuStack_120 = &pppppuStack_d0;
  puStack_118 = puVar17;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    uVar9 = func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  if (*(long *)(uVar5 + 0x28) == 0) {
    return uVar9;
  }
  lVar2 = *(long *)(uVar5 + 0x90);
  if (lVar2 != 0) {
    uVar11 = *(undefined8 *)(lVar2 + 0x28);
    uVar8 = *(undefined8 *)(lVar2 + 0x20);
    uVar20 = *(undefined8 *)(lVar2 + 0x38);
    uVar15 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(uVar5 + 0xb8) = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(uVar5 + 0xb0) = uVar20;
    *(undefined8 *)(uVar5 + 0xa8) = uVar15;
    *(undefined8 *)(uVar5 + 0xa0) = uVar11;
    *(undefined8 *)(uVar5 + 0x98) = uVar8;
    if (*(long *)(lVar2 + 0x48) == 0) {
      return uVar9;
    }
    if (*(int *)(*(long *)(lVar2 + 0x48) + 0x18) == 0) {
      return uVar9;
    }
    lVar2 = *(long *)(*(long *)(uVar5 + 0x28) + 0x28);
    if (lVar2 != 0) {
      uStack_158 = *(undefined8 *)(lVar2 + 0xc0);
      if (((*(long *)(uVar5 + 0x58) != 0) &&
          (lVar2 = *(long *)(*(long *)(uVar5 + 0x58) + 0x10), lVar2 != 0)) &&
         (lVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,uStack_158,uRam0000000003d57270), lVar2 != 0)) {
        uStack_160 = *(undefined8 *)(lVar2 + 0x70);
        if ((*(long *)(uVar5 + 0x90) != 0) &&
           (lVar2 = *(long *)(*(long *)(uVar5 + 0x90) + 0x48), lVar2 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_1a0,lVar2,uRam0000000003d3d2e8);
          bVar13 = false;
          while (uVar3 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_1a0,uRam0000000003d334f0), uVar8 = uStack_190,
                (uVar3 & 1) != 0) {
            uStack_1c8 = uStack_180;
            uStack_1d0 = uStack_188;
            uStack_1b8 = uStack_170;
            uStack_1c0 = uStack_178;
            uStack_1b0 = uStack_168;
            uStack_1d8 = uStack_190;
            uVar11 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1d8);
            uVar3 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_158,uVar11,0);
            if ((uVar3 & 1) != 0) {
              *(undefined8 *)(uVar5 + 0xa0) = uStack_1c8;
              *(undefined8 *)(uVar5 + 0x98) = uStack_1d0;
              *(undefined8 *)(uVar5 + 0xb0) = uStack_1b8;
              *(undefined8 *)(uVar5 + 0xa8) = uStack_1c0;
              *(undefined8 *)(uVar5 + 0xb8) = uStack_1b0;
              bVar13 = true;
            }
            uStack_1d8 = uVar8;
            uVar8 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1d8);
            uVar1 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_160,uVar8,0);
            if (!bVar13 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(uVar5 + 0xa0) = uStack_1c8;
              *(undefined8 *)(uVar5 + 0x98) = uStack_1d0;
              *(undefined8 *)(uVar5 + 0xb0) = uStack_1b8;
              *(undefined8 *)(uVar5 + 0xa8) = uStack_1c0;
              *(undefined8 *)(uVar5 + 0xb8) = uStack_1b0;
            }
          }
          uVar3 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_1a0,uRam0000000003d334e8);
          return uVar3;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    lVar2 = *plVar10;
    ___cxa_end_catch();
    uVar3 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_1a0,uRam0000000003d334e8);
    if (lVar2 == 0) {
      return uVar3;
    }
    func_0x00f78ac0(lVar2,0);
  }
  uVar3 = __Unwind_Resume();
  return uVar3;
}



// ============================================================
// RVA: 0x14d00b8 | Atlas.Gameplay.Usables.ProximityHomingProjectile.get_AttemptingReLockOn
// ============================================================

/* WARNING: Possible PIC construction at 0x014d01cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d0534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d0538) */
/* WARNING: Removing unreachable block (ram,0x01570398) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Usables_ProximityHomingProjectile__get_AttemptingReLockOn
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  int extraout_w1;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 unaff_x26;
  undefined1 ***pppuVar16;
  undefined *puVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
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
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 *****pppppuStack_110;
  undefined *puStack_108;
  undefined1 ****ppppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    uVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                      (*(long *)(param_1 + 0x1a0),0);
    if ((int)uVar2 != 0) {
      uVar2 = (ulong)(0.0 < *(float *)(param_1 + 0x1cc));
    }
    return uVar2;
  }
  auVar21 = func_0x00f78af4();
  lVar10 = auVar21._0_8_;
  puStack_28 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__Init;
  uVar7 = 0x3d21db0;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b81 & 1) == 0) {
    func_0x00f78a20(0x3d21db0);
    bRam0000000003eb4b81 = 1;
  }
  lVar14 = param_3;
  Atlas_Gameplay_Usables_ProjectileUsable__Init(lVar10,auVar21._8_8_,param_3,param_4,param_5);
  lVar3 = func_0x00f78aec(/*Atlas.Gameplay.Usables.HomingProjectileLogic_TypeInfo*/ uRam0000000003d21db0);
  Atlas_Gameplay_Usables_HomingProjectileLogic___ctor(lVar3,0);
  *(long *)(lVar10 + 0x1a0) = lVar3;
  if (lVar3 != 0) {
    uVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__Init(lVar3,param_3,0);
    *(undefined1 *)(lVar10 + 0x1c8) = 0;
    return uVar2;
  }
  uVar2 = func_0x00f78af4();
  puStack_78 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__DeInit;
  pppuVar16 = &ppuStack_80;
  uVar11 = 0;
  lStack_90 = param_3;
  ppuStack_80 = &puStack_30;
  if (*(char *)(uVar2 + 0x19) != '\0') {
    puVar17 = &UNK_014d01d0;
    plVar9 = &lStack_90;
    uVar4 = uVar2;
code_r0x014d01f8:
    do {
      lStack_88 = auVar21._0_8_;
      *(long *)((long)plVar9 + -0x20) = param_3;
      *(ulong *)((long)plVar9 + -0x18) = uVar2;
      *(undefined1 ****)((long)plVar9 + -0x10) = pppuVar16;
      *(undefined **)((long)plVar9 + -8) = puVar17;
      *(undefined1 *)(uVar4 + 0x1c9) = 0;
      *(undefined4 *)(uVar4 + 0x1cc) = 0;
      *(undefined8 *)(uVar4 + 0x1b8) = 0;
      *(undefined8 *)(uVar4 + 0x1c0) = 0;
      *(undefined8 *)(uVar4 + 0x1b0) = 0;
      if (*(long *)(uVar4 + 0x1a0) != 0) {
        uVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__TearDownParams
                          (*(long *)(uVar4 + 0x1a0),0);
        *(undefined1 *)(uVar4 + 0x1c8) = 0;
        return uVar2;
      }
      auVar22 = func_0x00f78af4();
      uVar15 = auVar22._8_8_;
      plVar5 = auVar22._0_8_;
      *(undefined8 *)((long)plVar9 + -0x70) = unaff_x26;
      *(undefined8 *)((long)plVar9 + -0x68) = 0x3eb4000;
      *(undefined8 *)((long)plVar9 + -0x60) = uVar7;
      *(long *)((long)plVar9 + -0x58) = auVar21._8_8_;
      *(undefined8 *)((long)plVar9 + -0x50) = param_4;
      *(undefined8 *)((long)plVar9 + -0x48) = uVar11;
      *(long *)((long)plVar9 + -0x40) = param_3;
      *(ulong *)((long)plVar9 + -0x38) = uVar4;
      *(undefined1 **)((long)plVar9 + -0x30) = (undefined1 *)((long)plVar9 + -0x10);
      *(undefined **)((long)plVar9 + -0x28) =
           &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnExitPool;
      uVar11 = 0;
      param_4 = 0;
      if ((bRam0000000003eb4b82 & 1) == 0) {
        func_0x00f78a20(0x3d24b58);
        func_0x00f78a20(0x3d41598);
        func_0x00f78a20(0x3d1eaf8);
        func_0x00f78a20(0x3d416c0);
        bRam0000000003eb4b82 = 1;
      }
      *(undefined8 *)((long)plVar9 + -0x80) = 0;
      *(undefined8 *)((long)plVar9 + -0x78) = 0;
      lVar10 = lVar14;
      Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool(plVar5,uVar15,lVar14,0,0,0);
      param_3 = plVar5[0x34];
      lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                        (plVar5);
      if ((lVar3 == 0) || (param_3 == 0)) {
code_r0x014d051c:
        func_0x00f78af4();
        lVar3 = lVar14;
        uVar7 = uVar15;
      }
      else {
        lVar10 = plVar5[0x20];
        Atlas_Gameplay_Usables_HomingProjectileLogic__SetUpParams
                  (param_3,*(undefined8 *)(lVar3 + 0xb0),lVar10,plVar5,0);
        lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour
                          (plVar5);
        if ((lVar3 == 0) || (*(long *)(lVar3 + 0x70) == 0)) goto code_r0x014d051c;
        lVar10 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x70),1);
        lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour
                          (plVar5);
        if ((lVar3 == 0) || (*(long *)(lVar3 + 0x78) == 0)) goto code_r0x014d051c;
        lVar10 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x78),0);
        *(undefined1 *)(plVar5 + 0x39) = 0;
        if (plVar5[0x1f] == 0) goto code_r0x014d051c;
        lVar14 = 0x3d1eaf8;
        uVar20 = 0x3d41598;
        uVar12 = 0x3d41598;
        param_3 = *(long *)(plVar5[0x1f] + 0x20);
        uVar11 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
        lVar10 = *(long *)(*plVar5 + 0x410);
        /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar11,plVar5,lVar10,uRam0000000003d41598);
        param_4 = uVar20;
        if (param_3 == 0) goto code_r0x014d051c;
        uVar15 = 0x3d416c0;
        lVar10 = lRam0000000003d416c0;
        /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(param_3,uVar11);
        if (plVar5[0x1f] == 0) goto code_r0x014d051c;
        param_3 = *(long *)(plVar5[0x1f] + 0x28);
        uVar11 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
        lVar10 = *(long *)(*plVar5 + 0x420);
        /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar11,plVar5,lVar10,uRam0000000003d41598);
        param_4 = uVar12;
        if (param_3 == 0) goto code_r0x014d051c;
        lVar10 = lRam0000000003d416c0;
        /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(param_3,uVar11);
        if ((plVar5[0x1f] == 0) || (plVar6 = *(long **)(plVar5[0x1f] + 0x10), plVar6 == (long *)0x0)
           ) goto code_r0x014d051c;
        param_4 = uVar20;
        lVar3 = 0x3d1eaf8;
        uVar7 = 0x3d416c0;
        if ((*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) <= *(byte *)(*plVar6 + 300)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) * 8 +
                     -8) == /*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58)) {
          uVar18 = /*UnityEngine.SphereCollider$$get_radius*/ func_0x032a4ba4(plVar6,0);
          *(undefined4 *)(plVar5 + 0x36) = uVar18;
          lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                            (plVar5);
          param_4 = uVar12;
          if (lVar3 != 0) {
            uVar7 = *(undefined8 *)(lVar3 + 0xb0);
            *(undefined8 *)((long)plVar9 + -0x78) = *(undefined8 *)(lVar3 + 0xb8);
            *(undefined8 *)((long)plVar9 + -0x80) = uVar7;
            fVar19 = (float)/*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_FOV*/ func_0x01563318((undefined1 *)((long)plVar9 + -0x80),0);
            uVar18 = _cosf(fVar19 * _UNK_033f850c * 0.5);
            *(undefined4 *)((long)plVar5 + 0x1b4) = uVar18;
            lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                              (plVar5);
            if (lVar3 != 0) {
              uVar7 = *(undefined8 *)(lVar3 + 0xb0);
              *(undefined8 *)((long)plVar9 + -0x78) = *(undefined8 *)(lVar3 + 0xb8);
              *(undefined8 *)((long)plVar9 + -0x80) = uVar7;
              uVar18 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMin*/ func_0x015633f8((undefined1 *)((long)plVar9 + -0x80),0);
              *(undefined4 *)(plVar5 + 0x37) = uVar18;
              lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                                (plVar5);
              if (lVar3 != 0) {
                uVar7 = *(undefined8 *)(lVar3 + 0xb0);
                *(undefined8 *)((long)plVar9 + -0x78) = *(undefined8 *)(lVar3 + 0xb8);
                *(undefined8 *)((long)plVar9 + -0x80) = uVar7;
                uVar18 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMax*/ func_0x01563418((undefined1 *)((long)plVar9 + -0x80),0);
                *(undefined4 *)((long)plVar5 + 0x1bc) = uVar18;
                if ((((plVar5[5] != 0) && (lVar3 = *(long *)(plVar5[5] + 0x70), lVar3 != 0)) &&
                    (lVar3 = *(long *)(lVar3 + 0x90), lVar3 != 0)) &&
                   (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) {
                  lVar10 = plVar5[0x20];
                  lVar3 = /*Atlas.Audio.WeaponAudioManager$$Create*/ func_0x01530894(lVar3,0,lVar10,0);
                  plVar5[0x35] = lVar3;
                  if (lVar3 != 0) {
                    uVar2 = /*Atlas.Audio.WeaponAudio$$Pickup*/ func_0x0152fdf0(lVar3,0);
                    return uVar2;
                  }
                }
              }
            }
          }
          goto code_r0x014d051c;
        }
      }
      uVar4 = func_0x00f78e5c();
      auVar21._8_8_ = lVar3;
      auVar21._0_8_ = lStack_88;
      *(long *)((long)plVar9 + -0xa0) = param_3;
      *(long **)((long)plVar9 + -0x98) = plVar5;
      *(undefined1 **)((long)plVar9 + -0x90) = (undefined1 *)((long)plVar9 + -0x30);
      *(undefined **)((long)plVar9 + -0x88) =
           &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnEnterPool;
      pppuVar16 = (undefined1 ***)((long)plVar9 + -0x90);
      puVar17 = &UNK_014d0538;
      plVar9 = (long *)((long)plVar9 + -0xa0);
      lVar14 = lVar10;
      uVar2 = uVar4;
    } while( true );
  }
  lStack_88 = lVar10;
  if (*(long *)(uVar2 + 0x1a0) == 0) {
    puVar17 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTearDownParamsInternal;
    uVar4 = func_0x00f78af4();
    auVar21._8_8_ = auVar21._8_8_;
    auVar21._0_8_ = lStack_88;
    plVar9 = &lStack_90;
    goto code_r0x014d01f8;
  }
  Atlas_Gameplay_Usables_HomingProjectileLogic__DeInit(*(long *)(uVar2 + 0x1a0),0);
  *(undefined8 *)(uVar2 + 0x1a0) = 0;
  if (*(char *)(uVar2 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(uVar2);
  }
  *(undefined8 *)(uVar2 + 0xf8) = 0;
  *(undefined4 *)(uVar2 + 0x150) = 0;
  if (*(char *)(uVar2 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(uVar2,0);
  }
  pppuStack_a0 = &ppuStack_80;
  if (*(char *)(uVar2 + 0x19) == '\0') {
    *(undefined8 *)(uVar2 + 0x10) = 0;
    *(undefined8 *)(uVar2 + 0x20) = 0;
    *(undefined8 *)(uVar2 + 0x58) = 0;
    *(undefined8 *)(uVar2 + 0x38) = 0;
    return uVar2;
  }
  lStack_b0 = lStack_90;
  puStack_98 = &UNK_01523874;
  uStack_a8 = uVar2;
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(uVar2 + 0x48) != 0) &&
     (lVar10 = *(long *)(*(long *)(uVar2 + 0x48) + 0x28), lVar10 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(uVar2 + 100),*(undefined4 *)(uVar2 + 0x68),
                    *(undefined4 *)(uVar2 + 0x6c),lVar10,0);
    if ((*(long *)(uVar2 + 0x48) != 0) &&
       (lVar10 = *(long *)(*(long *)(uVar2 + 0x48) + 0x28), lVar10 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(uVar2 + 0x70),*(undefined4 *)(uVar2 + 0x74),
                      *(undefined4 *)(uVar2 + 0x78),*(undefined4 *)(uVar2 + 0x7c),lVar10,0);
      if ((*(long *)(uVar2 + 0x48) != 0) &&
         (lVar10 = *(long *)(*(long *)(uVar2 + 0x48) + 0x28), lVar10 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(uVar2 + 0x80),*(undefined4 *)(uVar2 + 0x84),
                        *(undefined4 *)(uVar2 + 0x88),lVar10,0);
        *(undefined1 *)(uVar2 + 0x19) = 0;
        *(undefined8 *)(uVar2 + 0x98) = 0;
        *(undefined8 *)(uVar2 + 0x90) = 0;
        *(undefined8 *)(uVar2 + 0xa8) = 0;
        *(undefined8 *)(uVar2 + 0xa0) = 0;
        *(undefined8 *)(uVar2 + 0xb8) = 0;
        *(undefined8 *)(uVar2 + 0xb0) = 0;
        if (*(long *)(uVar2 + 0x48) != 0) {
          lVar10 = *(long *)(*(long *)(uVar2 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar14 = 0;
          uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0);
          if ((int)uVar4 != 0) {
            if (lVar10 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar10 + 0x46) = 0;
            *(undefined4 *)(lVar10 + 0x40) = 0;
            *(undefined1 *)(lVar10 + 0x44) = 0;
          }
          if (*(long *)(uVar2 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(uVar2 + 0x48) + 0x40) = 0;
            *(undefined8 *)(uVar2 + 0x48) = 0;
            *(undefined1 *)(uVar2 + 0x18) = 0;
            *(undefined8 *)(uVar2 + 0x28) = 0;
            *(undefined8 *)(uVar2 + 0x30) = 0;
            *(undefined4 *)(uVar2 + 0x40) = 0xbf800000;
            *(undefined2 *)(uVar2 + 0x60) = 0;
            return uVar4;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar21 = func_0x00f78af4();
  lVar10 = auVar21._8_8_;
  uVar2 = auVar21._0_8_;
  puStack_b8 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppppuStack_c0 = &pppuStack_a0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(uVar2 + 0x19) = 1;
  *(undefined8 *)(uVar2 + 0x28) = 0;
  *(long *)(uVar2 + 0x30) = lVar10;
  *(long *)(uVar2 + 0x48) = lVar14;
  *(undefined8 *)(uVar2 + 0x50) = 0;
  if ((*(long *)(uVar2 + 0x58) != 0) && (lVar10 != 0)) {
    lVar3 = *(long *)(*(long *)(uVar2 + 0x58) + 0x10);
    lVar10 = *(long *)(lVar10 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar10,0);
    if (lVar3 != 0) {
      uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uVar7,uRam0000000003d572a0);
      *(undefined8 *)(uVar2 + 0x90) = uVar7;
      puVar17 = &UNK_01523aa4;
      uVar4 = uVar2;
      goto code_r0x01523ba8;
    }
  }
  puVar17 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  uVar4 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uVar8 = uVar4;
  lStack_140 = lVar10;
  lStack_138 = lVar14;
  uStack_130 = uVar2;
  pppppuStack_110 = &ppppuStack_c0;
  puStack_108 = puVar17;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    uVar8 = func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  if (*(long *)(uVar4 + 0x28) == 0) {
    return uVar8;
  }
  lVar10 = *(long *)(uVar4 + 0x90);
  if (lVar10 != 0) {
    uVar11 = *(undefined8 *)(lVar10 + 0x28);
    uVar7 = *(undefined8 *)(lVar10 + 0x20);
    uVar20 = *(undefined8 *)(lVar10 + 0x38);
    uVar15 = *(undefined8 *)(lVar10 + 0x30);
    *(undefined8 *)(uVar4 + 0xb8) = *(undefined8 *)(lVar10 + 0x40);
    *(undefined8 *)(uVar4 + 0xb0) = uVar20;
    *(undefined8 *)(uVar4 + 0xa8) = uVar15;
    *(undefined8 *)(uVar4 + 0xa0) = uVar11;
    *(undefined8 *)(uVar4 + 0x98) = uVar7;
    if (*(long *)(lVar10 + 0x48) == 0) {
      return uVar8;
    }
    if (*(int *)(*(long *)(lVar10 + 0x48) + 0x18) == 0) {
      return uVar8;
    }
    lVar10 = *(long *)(*(long *)(uVar4 + 0x28) + 0x28);
    if (lVar10 != 0) {
      uStack_148 = *(undefined8 *)(lVar10 + 0xc0);
      if (((*(long *)(uVar4 + 0x58) != 0) &&
          (lVar10 = *(long *)(*(long *)(uVar4 + 0x58) + 0x10), lVar10 != 0)) &&
         (lVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uStack_148,uRam0000000003d57270), lVar10 != 0)) {
        uStack_150 = *(undefined8 *)(lVar10 + 0x70);
        if ((*(long *)(uVar4 + 0x90) != 0) &&
           (lVar10 = *(long *)(*(long *)(uVar4 + 0x90) + 0x48), lVar10 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_190,lVar10,uRam0000000003d3d2e8);
          bVar13 = false;
          while (uVar2 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_190,uRam0000000003d334f0), uVar7 = uStack_180,
                (uVar2 & 1) != 0) {
            uStack_1b8 = uStack_170;
            uStack_1c0 = uStack_178;
            uStack_1a8 = uStack_160;
            uStack_1b0 = uStack_168;
            uStack_1a0 = uStack_158;
            uStack_1c8 = uStack_180;
            uVar11 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1c8);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_148,uVar11,0);
            if ((uVar2 & 1) != 0) {
              *(undefined8 *)(uVar4 + 0xa0) = uStack_1b8;
              *(undefined8 *)(uVar4 + 0x98) = uStack_1c0;
              *(undefined8 *)(uVar4 + 0xb0) = uStack_1a8;
              *(undefined8 *)(uVar4 + 0xa8) = uStack_1b0;
              *(undefined8 *)(uVar4 + 0xb8) = uStack_1a0;
              bVar13 = true;
            }
            uStack_1c8 = uVar7;
            uVar7 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1c8);
            uVar1 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_150,uVar7,0);
            if (!bVar13 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(uVar4 + 0xa0) = uStack_1b8;
              *(undefined8 *)(uVar4 + 0x98) = uStack_1c0;
              *(undefined8 *)(uVar4 + 0xb0) = uStack_1a8;
              *(undefined8 *)(uVar4 + 0xa8) = uStack_1b0;
              *(undefined8 *)(uVar4 + 0xb8) = uStack_1a0;
            }
          }
          uVar2 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_190,uRam0000000003d334e8);
          return uVar2;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    lVar10 = *plVar9;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_190,uRam0000000003d334e8);
    if (lVar10 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(lVar10,0);
  }
  uVar2 = __Unwind_Resume();
  return uVar2;
}



// ============================================================
// RVA: 0x14d00f8 | Atlas.Gameplay.Usables.ProximityHomingProjectile.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014d01cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d0534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d0538) */
/* WARNING: Removing unreachable block (ram,0x01570398) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_ProximityHomingProjectile__Init
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  int extraout_w1;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 unaff_x26;
  undefined1 **ppuVar16;
  undefined *puVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar7 = 0x3d21db0;
  if ((bRam0000000003eb4b81 & 1) == 0) {
    func_0x00f78a20(0x3d21db0);
    bRam0000000003eb4b81 = 1;
  }
  lVar13 = param_3;
  Atlas_Gameplay_Usables_ProjectileUsable__Init(param_1,param_2,param_3,param_4,param_5);
  lVar3 = func_0x00f78aec(/*Atlas.Gameplay.Usables.HomingProjectileLogic_TypeInfo*/ uRam0000000003d21db0);
  Atlas_Gameplay_Usables_HomingProjectileLogic___ctor(lVar3,0);
  *(long *)(param_1 + 0x1a0) = lVar3;
  if (lVar3 != 0) {
    Atlas_Gameplay_Usables_HomingProjectileLogic__Init(lVar3,param_3,0);
    *(undefined1 *)(param_1 + 0x1c8) = 0;
    return;
  }
  lVar3 = func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__DeInit;
  ppuVar16 = &puStack_60;
  uVar10 = 0;
  lStack_70 = param_3;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if (*(char *)(lVar3 + 0x19) != '\0') {
    puVar17 = &UNK_014d01d0;
    plVar9 = &lStack_70;
    lVar4 = lVar3;
code_r0x014d01f8:
    do {
      *(long *)((long)plVar9 + -0x20) = param_3;
      *(long *)((long)plVar9 + -0x18) = lVar3;
      *(undefined1 ***)((long)plVar9 + -0x10) = ppuVar16;
      *(undefined **)((long)plVar9 + -8) = puVar17;
      *(undefined1 *)(lVar4 + 0x1c9) = 0;
      *(undefined4 *)(lVar4 + 0x1cc) = 0;
      *(undefined8 *)(lVar4 + 0x1b8) = 0;
      *(undefined8 *)(lVar4 + 0x1c0) = 0;
      *(undefined8 *)(lVar4 + 0x1b0) = 0;
      if (*(long *)(lVar4 + 0x1a0) != 0) {
        Atlas_Gameplay_Usables_HomingProjectileLogic__TearDownParams(*(long *)(lVar4 + 0x1a0),0);
        *(undefined1 *)(lVar4 + 0x1c8) = 0;
        return;
      }
      auVar21 = func_0x00f78af4();
      uVar14 = auVar21._8_8_;
      plVar5 = auVar21._0_8_;
      *(undefined8 *)((long)plVar9 + -0x70) = unaff_x26;
      *(undefined8 *)((long)plVar9 + -0x68) = 0x3eb4000;
      *(undefined8 *)((long)plVar9 + -0x60) = uVar7;
      *(long *)((long)plVar9 + -0x58) = param_2;
      *(undefined8 *)((long)plVar9 + -0x50) = param_4;
      *(undefined8 *)((long)plVar9 + -0x48) = uVar10;
      *(long *)((long)plVar9 + -0x40) = param_3;
      *(long *)((long)plVar9 + -0x38) = lVar4;
      *(undefined1 **)((long)plVar9 + -0x30) = (undefined1 *)((long)plVar9 + -0x10);
      *(undefined **)((long)plVar9 + -0x28) =
           &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnExitPool;
      uVar10 = 0;
      param_4 = 0;
      if ((bRam0000000003eb4b82 & 1) == 0) {
        func_0x00f78a20(0x3d24b58);
        func_0x00f78a20(0x3d41598);
        func_0x00f78a20(0x3d1eaf8);
        func_0x00f78a20(0x3d416c0);
        bRam0000000003eb4b82 = 1;
      }
      *(undefined8 *)((long)plVar9 + -0x80) = 0;
      *(undefined8 *)((long)plVar9 + -0x78) = 0;
      lVar3 = lVar13;
      Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool(plVar5,uVar14,lVar13,0,0,0);
      param_3 = plVar5[0x34];
      lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                        (plVar5);
      if ((lVar4 == 0) || (param_3 == 0)) {
code_r0x014d051c:
        func_0x00f78af4();
        param_2 = lVar13;
        uVar7 = uVar14;
      }
      else {
        lVar3 = plVar5[0x20];
        Atlas_Gameplay_Usables_HomingProjectileLogic__SetUpParams
                  (param_3,*(undefined8 *)(lVar4 + 0xb0),lVar3,plVar5,0);
        lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour
                          (plVar5);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x70) == 0)) goto code_r0x014d051c;
        lVar3 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x70),1);
        lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour
                          (plVar5);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x78) == 0)) goto code_r0x014d051c;
        lVar3 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x78),0);
        *(undefined1 *)(plVar5 + 0x39) = 0;
        if (plVar5[0x1f] == 0) goto code_r0x014d051c;
        lVar13 = 0x3d1eaf8;
        uVar20 = 0x3d41598;
        uVar11 = 0x3d41598;
        param_3 = *(long *)(plVar5[0x1f] + 0x20);
        uVar10 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
        lVar3 = *(long *)(*plVar5 + 0x410);
        /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar10,plVar5,lVar3,uRam0000000003d41598);
        param_4 = uVar20;
        if (param_3 == 0) goto code_r0x014d051c;
        uVar14 = 0x3d416c0;
        lVar3 = lRam0000000003d416c0;
        /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(param_3,uVar10);
        if (plVar5[0x1f] == 0) goto code_r0x014d051c;
        param_3 = *(long *)(plVar5[0x1f] + 0x28);
        uVar10 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
        lVar3 = *(long *)(*plVar5 + 0x420);
        /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar10,plVar5,lVar3,uRam0000000003d41598);
        param_4 = uVar11;
        if (param_3 == 0) goto code_r0x014d051c;
        lVar3 = lRam0000000003d416c0;
        /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(param_3,uVar10);
        if ((plVar5[0x1f] == 0) || (plVar6 = *(long **)(plVar5[0x1f] + 0x10), plVar6 == (long *)0x0)
           ) goto code_r0x014d051c;
        param_4 = uVar20;
        param_2 = 0x3d1eaf8;
        uVar7 = 0x3d416c0;
        if ((*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) <= *(byte *)(*plVar6 + 300)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) * 8 +
                     -8) == /*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58)) {
          uVar18 = /*UnityEngine.SphereCollider$$get_radius*/ func_0x032a4ba4(plVar6,0);
          *(undefined4 *)(plVar5 + 0x36) = uVar18;
          lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                            (plVar5);
          param_4 = uVar11;
          if (lVar4 != 0) {
            uVar7 = *(undefined8 *)(lVar4 + 0xb0);
            *(undefined8 *)((long)plVar9 + -0x78) = *(undefined8 *)(lVar4 + 0xb8);
            *(undefined8 *)((long)plVar9 + -0x80) = uVar7;
            fVar19 = (float)/*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_FOV*/ func_0x01563318((undefined1 *)((long)plVar9 + -0x80),0);
            uVar18 = _cosf(fVar19 * _UNK_033f850c * 0.5);
            *(undefined4 *)((long)plVar5 + 0x1b4) = uVar18;
            lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                              (plVar5);
            if (lVar4 != 0) {
              uVar7 = *(undefined8 *)(lVar4 + 0xb0);
              *(undefined8 *)((long)plVar9 + -0x78) = *(undefined8 *)(lVar4 + 0xb8);
              *(undefined8 *)((long)plVar9 + -0x80) = uVar7;
              uVar18 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMin*/ func_0x015633f8((undefined1 *)((long)plVar9 + -0x80),0);
              *(undefined4 *)(plVar5 + 0x37) = uVar18;
              lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                                (plVar5);
              if (lVar4 != 0) {
                uVar7 = *(undefined8 *)(lVar4 + 0xb0);
                *(undefined8 *)((long)plVar9 + -0x78) = *(undefined8 *)(lVar4 + 0xb8);
                *(undefined8 *)((long)plVar9 + -0x80) = uVar7;
                uVar18 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMax*/ func_0x01563418((undefined1 *)((long)plVar9 + -0x80),0);
                *(undefined4 *)((long)plVar5 + 0x1bc) = uVar18;
                if ((((plVar5[5] != 0) && (lVar4 = *(long *)(plVar5[5] + 0x70), lVar4 != 0)) &&
                    (lVar4 = *(long *)(lVar4 + 0x90), lVar4 != 0)) &&
                   (lVar4 = *(long *)(lVar4 + 0x38), lVar4 != 0)) {
                  lVar3 = plVar5[0x20];
                  lVar4 = /*Atlas.Audio.WeaponAudioManager$$Create*/ func_0x01530894(lVar4,0,lVar3,0);
                  plVar5[0x35] = lVar4;
                  if (lVar4 != 0) {
                    /*Atlas.Audio.WeaponAudio$$Pickup*/ func_0x0152fdf0(lVar4,0);
                    return;
                  }
                }
              }
            }
          }
          goto code_r0x014d051c;
        }
      }
      lVar4 = func_0x00f78e5c();
      *(long *)((long)plVar9 + -0xa0) = param_3;
      *(long **)((long)plVar9 + -0x98) = plVar5;
      *(undefined1 **)((long)plVar9 + -0x90) = (undefined1 *)((long)plVar9 + -0x30);
      *(undefined **)((long)plVar9 + -0x88) =
           &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnEnterPool;
      ppuVar16 = (undefined1 **)((long)plVar9 + -0x90);
      puVar17 = &UNK_014d0538;
      plVar9 = (long *)((long)plVar9 + -0xa0);
      lVar13 = lVar3;
      lVar3 = lVar4;
    } while( true );
  }
  if (*(long *)(lVar3 + 0x1a0) == 0) {
    puVar17 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTearDownParamsInternal;
    lVar4 = func_0x00f78af4();
    plVar9 = &lStack_70;
    goto code_r0x014d01f8;
  }
  Atlas_Gameplay_Usables_HomingProjectileLogic__DeInit(*(long *)(lVar3 + 0x1a0),0);
  *(undefined8 *)(lVar3 + 0x1a0) = 0;
  if (*(char *)(lVar3 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(lVar3);
  }
  *(undefined8 *)(lVar3 + 0xf8) = 0;
  *(undefined4 *)(lVar3 + 0x150) = 0;
  if (*(char *)(lVar3 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar3,0);
  }
  ppuStack_80 = &puStack_60;
  if (*(char *)(lVar3 + 0x19) == '\0') {
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    return;
  }
  lStack_90 = lStack_70;
  puStack_78 = &UNK_01523874;
  lStack_88 = lVar3;
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
          lVar13 = 0;
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
  auVar21 = func_0x00f78af4();
  lVar4 = auVar21._8_8_;
  lVar3 = auVar21._0_8_;
  puStack_98 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  pppuStack_a0 = &ppuStack_80;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar4;
  *(long *)(lVar3 + 0x48) = lVar13;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar4 != 0)) {
    lVar15 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar4 = *(long *)(lVar4 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar4,0);
    if (lVar15 != 0) {
      uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar15,uVar7,uRam0000000003d572a0);
      *(undefined8 *)(lVar3 + 0x90) = uVar7;
      puVar17 = &UNK_01523aa4;
      lVar15 = lVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar17 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar15 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_120 = lVar4;
  lStack_118 = lVar13;
  lStack_110 = lVar3;
  pppuStack_f0 = &pppuStack_a0;
  puStack_e8 = puVar17;
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
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  if (*(long *)(lVar15 + 0x28) == 0) {
    return;
  }
  lVar13 = *(long *)(lVar15 + 0x90);
  if (lVar13 != 0) {
    uVar10 = *(undefined8 *)(lVar13 + 0x28);
    uVar7 = *(undefined8 *)(lVar13 + 0x20);
    uVar20 = *(undefined8 *)(lVar13 + 0x38);
    uVar14 = *(undefined8 *)(lVar13 + 0x30);
    *(undefined8 *)(lVar15 + 0xb8) = *(undefined8 *)(lVar13 + 0x40);
    *(undefined8 *)(lVar15 + 0xb0) = uVar20;
    *(undefined8 *)(lVar15 + 0xa8) = uVar14;
    *(undefined8 *)(lVar15 + 0xa0) = uVar10;
    *(undefined8 *)(lVar15 + 0x98) = uVar7;
    if (*(long *)(lVar13 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar13 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar13 = *(long *)(*(long *)(lVar15 + 0x28) + 0x28);
    if (lVar13 != 0) {
      uStack_128 = *(undefined8 *)(lVar13 + 0xc0);
      if (((*(long *)(lVar15 + 0x58) != 0) &&
          (lVar13 = *(long *)(*(long *)(lVar15 + 0x58) + 0x10), lVar13 != 0)) &&
         (lVar13 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,uStack_128,uRam0000000003d57270), lVar13 != 0)) {
        uStack_130 = *(undefined8 *)(lVar13 + 0x70);
        if ((*(long *)(lVar15 + 0x90) != 0) &&
           (lVar13 = *(long *)(*(long *)(lVar15 + 0x90) + 0x48), lVar13 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_170,lVar13,uRam0000000003d3d2e8);
          bVar12 = false;
          while (uVar8 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_170,uRam0000000003d334f0), uVar7 = uStack_160,
                (uVar8 & 1) != 0) {
            uStack_198 = uStack_150;
            uStack_1a0 = uStack_158;
            uStack_188 = uStack_140;
            uStack_190 = uStack_148;
            uStack_180 = uStack_138;
            uStack_1a8 = uStack_160;
            uVar10 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1a8);
            uVar8 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_128,uVar10,0);
            if ((uVar8 & 1) != 0) {
              *(undefined8 *)(lVar15 + 0xa0) = uStack_198;
              *(undefined8 *)(lVar15 + 0x98) = uStack_1a0;
              *(undefined8 *)(lVar15 + 0xb0) = uStack_188;
              *(undefined8 *)(lVar15 + 0xa8) = uStack_190;
              *(undefined8 *)(lVar15 + 0xb8) = uStack_180;
              bVar12 = true;
            }
            uStack_1a8 = uVar7;
            uVar7 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1a8);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_130,uVar7,0);
            if (!bVar12 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar15 + 0xa0) = uStack_198;
              *(undefined8 *)(lVar15 + 0x98) = uStack_1a0;
              *(undefined8 *)(lVar15 + 0xb0) = uStack_188;
              *(undefined8 *)(lVar15 + 0xa8) = uStack_190;
              *(undefined8 *)(lVar15 + 0xb8) = uStack_180;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_170,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    lVar13 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_170,uRam0000000003d334e8);
    if (lVar13 == 0) {
      return;
    }
    func_0x00f78ac0(lVar13,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14d01b0 | Atlas.Gameplay.Usables.ProximityHomingProjectile.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014d01cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d0534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d0538) */
/* WARNING: Removing unreachable block (ram,0x01570398) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_ProximityHomingProjectile__DeInit
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  int extraout_w1;
  long lVar9;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar10;
  bool bVar11;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar12;
  undefined8 unaff_x25;
  long lVar13;
  undefined8 unaff_x26;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  long lStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  puVar14 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x19) != '\0') {
    puVar15 = (undefined *)0x14d01d0;
    puVar1 = &stack0xffffffffffffffe0;
    lVar4 = param_1;
code_r0x014d01f8:
    do {
      *(long *)(puVar1 + -0x20) = unaff_x20;
      *(long *)(puVar1 + -0x18) = param_1;
      *(undefined1 **)(puVar1 + -0x10) = puVar14;
      *(undefined **)(puVar1 + -8) = puVar15;
      *(undefined1 *)(lVar4 + 0x1c9) = 0;
      *(undefined4 *)(lVar4 + 0x1cc) = 0;
      *(undefined8 *)(lVar4 + 0x1b8) = 0;
      *(undefined8 *)(lVar4 + 0x1c0) = 0;
      *(undefined8 *)(lVar4 + 0x1b0) = 0;
      if (*(long *)(lVar4 + 0x1a0) != 0) {
        Atlas_Gameplay_Usables_HomingProjectileLogic__TearDownParams(*(long *)(lVar4 + 0x1a0),0);
        *(undefined1 *)(lVar4 + 0x1c8) = 0;
        return;
      }
      auVar19 = func_0x00f78af4();
      uVar12 = auVar19._8_8_;
      plVar8 = auVar19._0_8_;
      *(undefined8 *)(puVar1 + -0x70) = unaff_x26;
      *(undefined8 *)(puVar1 + -0x68) = unaff_x25;
      *(undefined8 *)(puVar1 + -0x60) = unaff_x24;
      *(long *)(puVar1 + -0x58) = unaff_x23;
      *(undefined8 *)(puVar1 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar1 + -0x48) = unaff_x21;
      *(long *)(puVar1 + -0x40) = unaff_x20;
      *(long *)(puVar1 + -0x38) = lVar4;
      *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
      *(undefined **)(puVar1 + -0x28) =
           &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnExitPool;
      unaff_x21 = 0;
      unaff_x22 = 0;
      unaff_x25 = 0x3eb4000;
      if ((bRam0000000003eb4b82 & 1) == 0) {
        func_0x00f78a20(0x3d24b58);
        func_0x00f78a20(0x3d41598);
        func_0x00f78a20(0x3d1eaf8);
        func_0x00f78a20(0x3d416c0);
        bRam0000000003eb4b82 = 1;
      }
      *(undefined8 *)(puVar1 + -0x80) = 0;
      *(undefined8 *)(puVar1 + -0x78) = 0;
      lVar9 = param_3;
      Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool(plVar8,uVar12,param_3,0,0,0);
      unaff_x20 = plVar8[0x34];
      lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                        (plVar8);
      if ((lVar4 == 0) || (unaff_x20 == 0)) {
code_r0x014d051c:
        func_0x00f78af4();
        unaff_x23 = param_3;
        unaff_x24 = uVar12;
      }
      else {
        lVar9 = plVar8[0x20];
        Atlas_Gameplay_Usables_HomingProjectileLogic__SetUpParams
                  (unaff_x20,*(undefined8 *)(lVar4 + 0xb0),lVar9,plVar8,0);
        lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour
                          (plVar8);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x70) == 0)) goto code_r0x014d051c;
        lVar9 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x70),1);
        lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour
                          (plVar8);
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x78) == 0)) goto code_r0x014d051c;
        lVar9 = 0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x78),0);
        *(undefined1 *)(plVar8 + 0x39) = 0;
        if (plVar8[0x1f] == 0) goto code_r0x014d051c;
        param_3 = 0x3d1eaf8;
        uVar7 = 0x3d41598;
        uVar10 = 0x3d41598;
        unaff_x20 = *(long *)(plVar8[0x1f] + 0x20);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
        lVar9 = *(long *)(*plVar8 + 0x410);
        /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(unaff_x21,plVar8,lVar9,uRam0000000003d41598);
        unaff_x22 = uVar7;
        if (unaff_x20 == 0) goto code_r0x014d051c;
        uVar12 = 0x3d416c0;
        lVar9 = lRam0000000003d416c0;
        /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(unaff_x20,unaff_x21);
        if (plVar8[0x1f] == 0) goto code_r0x014d051c;
        unaff_x20 = *(long *)(plVar8[0x1f] + 0x28);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
        lVar9 = *(long *)(*plVar8 + 0x420);
        /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(unaff_x21,plVar8,lVar9,uRam0000000003d41598);
        unaff_x22 = uVar10;
        if (unaff_x20 == 0) goto code_r0x014d051c;
        lVar9 = lRam0000000003d416c0;
        /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(unaff_x20,unaff_x21);
        if ((plVar8[0x1f] == 0) || (plVar5 = *(long **)(plVar8[0x1f] + 0x10), plVar5 == (long *)0x0)
           ) goto code_r0x014d051c;
        unaff_x22 = uVar7;
        unaff_x23 = 0x3d1eaf8;
        unaff_x24 = 0x3d416c0;
        if ((*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) <= *(byte *)(*plVar5 + 300)) &&
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) * 8 +
                     -8) == /*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58)) {
          uVar16 = /*UnityEngine.SphereCollider$$get_radius*/ func_0x032a4ba4(plVar5,0);
          *(undefined4 *)(plVar8 + 0x36) = uVar16;
          lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                            (plVar8);
          unaff_x22 = uVar10;
          if (lVar4 != 0) {
            uVar7 = *(undefined8 *)(lVar4 + 0xb0);
            *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(lVar4 + 0xb8);
            *(undefined8 *)(puVar1 + -0x80) = uVar7;
            fVar17 = (float)/*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_FOV*/ func_0x01563318(puVar1 + -0x80,0);
            uVar16 = _cosf(fVar17 * _UNK_033f850c * 0.5);
            *(undefined4 *)((long)plVar8 + 0x1b4) = uVar16;
            lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                              (plVar8);
            if (lVar4 != 0) {
              uVar7 = *(undefined8 *)(lVar4 + 0xb0);
              *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(lVar4 + 0xb8);
              *(undefined8 *)(puVar1 + -0x80) = uVar7;
              uVar16 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMin*/ func_0x015633f8(puVar1 + -0x80,0);
              *(undefined4 *)(plVar8 + 0x37) = uVar16;
              lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                                (plVar8);
              if (lVar4 != 0) {
                uVar7 = *(undefined8 *)(lVar4 + 0xb0);
                *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(lVar4 + 0xb8);
                *(undefined8 *)(puVar1 + -0x80) = uVar7;
                uVar16 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMax*/ func_0x01563418(puVar1 + -0x80,0);
                *(undefined4 *)((long)plVar8 + 0x1bc) = uVar16;
                if ((((plVar8[5] != 0) && (lVar4 = *(long *)(plVar8[5] + 0x70), lVar4 != 0)) &&
                    (lVar4 = *(long *)(lVar4 + 0x90), lVar4 != 0)) &&
                   (lVar4 = *(long *)(lVar4 + 0x38), lVar4 != 0)) {
                  lVar9 = plVar8[0x20];
                  lVar4 = /*Atlas.Audio.WeaponAudioManager$$Create*/ func_0x01530894(lVar4,0,lVar9,0);
                  plVar8[0x35] = lVar4;
                  if (lVar4 != 0) {
                    /*Atlas.Audio.WeaponAudio$$Pickup*/ func_0x0152fdf0(lVar4,0);
                    return;
                  }
                }
              }
            }
          }
          goto code_r0x014d051c;
        }
      }
      lVar4 = func_0x00f78e5c();
      *(long *)(puVar1 + -0xa0) = unaff_x20;
      *(long **)(puVar1 + -0x98) = plVar8;
      *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x30;
      *(undefined **)(puVar1 + -0x88) =
           &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnEnterPool;
      puVar14 = puVar1 + -0x90;
      puVar15 = &UNK_014d0538;
      puVar1 = puVar1 + -0xa0;
      param_3 = lVar9;
      param_1 = lVar4;
    } while( true );
  }
  if (*(long *)(param_1 + 0x1a0) == 0) {
    puVar15 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTearDownParamsInternal;
    lVar4 = func_0x00f78af4();
    puVar1 = &stack0xffffffffffffffe0;
    goto code_r0x014d01f8;
  }
  Atlas_Gameplay_Usables_HomingProjectileLogic__DeInit(*(long *)(param_1 + 0x1a0),0);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (*(char *)(param_1 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(param_1);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(char *)(param_1 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(param_1,0);
  }
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  puStack_28 = &UNK_01523874;
  lStack_38 = param_1;
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar4 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                    *(undefined4 *)(param_1 + 0x6c),lVar4,0);
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar4 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                      *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar4,0);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar4 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                        *(undefined4 *)(param_1 + 0x88),lVar4,0);
        *(undefined1 *)(param_1 + 0x19) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0);
          if (iVar2 != 0) {
            if (lVar4 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar4 + 0x46) = 0;
            *(undefined4 *)(lVar4 + 0x40) = 0;
            *(undefined1 *)(lVar4 + 0x44) = 0;
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
  auVar19 = func_0x00f78af4();
  lVar9 = auVar19._8_8_;
  lVar4 = auVar19._0_8_;
  puStack_48 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppuStack_50 = &puStack_30;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar4 + 0x19) = 1;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(long *)(lVar4 + 0x30) = lVar9;
  *(long *)(lVar4 + 0x48) = param_3;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  if ((*(long *)(lVar4 + 0x58) != 0) && (lVar9 != 0)) {
    lVar13 = *(long *)(*(long *)(lVar4 + 0x58) + 0x10);
    lVar9 = *(long *)(lVar9 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar9,0);
    if (lVar13 != 0) {
      uVar12 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,uVar12,uRam0000000003d572a0);
      *(undefined8 *)(lVar4 + 0x90) = uVar12;
      puVar15 = &UNK_01523aa4;
      lVar13 = lVar4;
      goto code_r0x01523ba8;
    }
  }
  puVar15 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar13 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_d0 = lVar9;
  lStack_c8 = param_3;
  lStack_c0 = lVar4;
  pppuStack_a0 = &ppuStack_50;
  puStack_98 = puVar15;
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
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (*(long *)(lVar13 + 0x28) == 0) {
    return;
  }
  lVar4 = *(long *)(lVar13 + 0x90);
  if (lVar4 != 0) {
    uVar7 = *(undefined8 *)(lVar4 + 0x28);
    uVar12 = *(undefined8 *)(lVar4 + 0x20);
    uVar18 = *(undefined8 *)(lVar4 + 0x38);
    uVar10 = *(undefined8 *)(lVar4 + 0x30);
    *(undefined8 *)(lVar13 + 0xb8) = *(undefined8 *)(lVar4 + 0x40);
    *(undefined8 *)(lVar13 + 0xb0) = uVar18;
    *(undefined8 *)(lVar13 + 0xa8) = uVar10;
    *(undefined8 *)(lVar13 + 0xa0) = uVar7;
    *(undefined8 *)(lVar13 + 0x98) = uVar12;
    if (*(long *)(lVar4 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar4 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar4 = *(long *)(*(long *)(lVar13 + 0x28) + 0x28);
    if (lVar4 != 0) {
      uStack_d8 = *(undefined8 *)(lVar4 + 0xc0);
      if (((*(long *)(lVar13 + 0x58) != 0) &&
          (lVar4 = *(long *)(*(long *)(lVar13 + 0x58) + 0x10), lVar4 != 0)) &&
         (lVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,uStack_d8,uRam0000000003d57270), lVar4 != 0)) {
        uStack_e0 = *(undefined8 *)(lVar4 + 0x70);
        if ((*(long *)(lVar13 + 0x90) != 0) &&
           (lVar4 = *(long *)(*(long *)(lVar13 + 0x90) + 0x48), lVar4 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_120,lVar4,uRam0000000003d3d2e8);
          bVar11 = false;
          while (uVar6 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_120,uRam0000000003d334f0), uVar12 = uStack_110,
                (uVar6 & 1) != 0) {
            uStack_148 = uStack_100;
            uStack_150 = uStack_108;
            uStack_138 = uStack_f0;
            uStack_140 = uStack_f8;
            uStack_130 = uStack_e8;
            uStack_158 = uStack_110;
            uVar7 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_158);
            uVar6 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_d8,uVar7,0);
            if ((uVar6 & 1) != 0) {
              *(undefined8 *)(lVar13 + 0xa0) = uStack_148;
              *(undefined8 *)(lVar13 + 0x98) = uStack_150;
              *(undefined8 *)(lVar13 + 0xb0) = uStack_138;
              *(undefined8 *)(lVar13 + 0xa8) = uStack_140;
              *(undefined8 *)(lVar13 + 0xb8) = uStack_130;
              bVar11 = true;
            }
            uStack_158 = uVar12;
            uVar12 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_158);
            uVar3 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_e0,uVar12,0);
            if (!bVar11 && ((uVar3 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar13 + 0xa0) = uStack_148;
              *(undefined8 *)(lVar13 + 0x98) = uStack_150;
              *(undefined8 *)(lVar13 + 0xb0) = uStack_138;
              *(undefined8 *)(lVar13 + 0xa8) = uStack_140;
              *(undefined8 *)(lVar13 + 0xb8) = uStack_130;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_120,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar8 = (long *)___cxa_begin_catch();
    lVar4 = *plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_120,uRam0000000003d334e8);
    if (lVar4 == 0) {
      return;
    }
    func_0x00f78ac0(lVar4,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14d01f8 | Atlas.Gameplay.Usables.ProximityHomingProjectile.OnTearDownParamsInternal
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTearDownParamsInternal
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  int extraout_w1;
  long lVar9;
  bool bVar10;
  long lVar11;
  undefined *puVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined *puStack_f8;
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  *(undefined1 *)(param_1 + 0x1c9) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (*(long *)(param_1 + 0x1a0) != 0) {
    Atlas_Gameplay_Usables_HomingProjectileLogic__TearDownParams(*(long *)(param_1 + 0x1a0),0);
    *(undefined1 *)(param_1 + 0x1c8) = 0;
    return;
  }
  auVar17 = func_0x00f78af4();
  plVar8 = auVar17._0_8_;
  puStack_28 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnExitPool;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b82 & 1) == 0) {
    func_0x00f78a20(0x3d24b58);
    func_0x00f78a20(0x3d41598);
    func_0x00f78a20(0x3d1eaf8);
    func_0x00f78a20(0x3d416c0);
    bRam0000000003eb4b82 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool(plVar8,auVar17._8_8_,param_3,0,0,0);
  lVar9 = plVar8[0x34];
  lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                    (plVar8);
  if ((lVar3 == 0) || (lVar9 == 0)) {
code_r0x014d051c:
    func_0x00f78af4();
  }
  else {
    param_3 = plVar8[0x20];
    Atlas_Gameplay_Usables_HomingProjectileLogic__SetUpParams
              (lVar9,*(undefined8 *)(lVar3 + 0xb0),param_3,plVar8,0);
    lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour(plVar8);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x70) == 0)) goto code_r0x014d051c;
    param_3 = 0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x70),1);
    lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour(plVar8);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x78) == 0)) goto code_r0x014d051c;
    param_3 = 0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x78),0);
    *(undefined1 *)(plVar8 + 0x39) = 0;
    if (plVar8[0x1f] == 0) goto code_r0x014d051c;
    lVar9 = *(long *)(plVar8[0x1f] + 0x20);
    uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    param_3 = *(long *)(*plVar8 + 0x410);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,plVar8,param_3,uRam0000000003d41598);
    if (lVar9 == 0) goto code_r0x014d051c;
    param_3 = lRam0000000003d416c0;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar9,uVar4);
    if (plVar8[0x1f] == 0) goto code_r0x014d051c;
    lVar9 = *(long *)(plVar8[0x1f] + 0x28);
    uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    param_3 = *(long *)(*plVar8 + 0x420);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,plVar8,param_3,uRam0000000003d41598);
    if (lVar9 == 0) goto code_r0x014d051c;
    param_3 = lRam0000000003d416c0;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar9,uVar4);
    if ((plVar8[0x1f] == 0) || (plVar5 = *(long **)(plVar8[0x1f] + 0x10), plVar5 == (long *)0x0))
    goto code_r0x014d051c;
    if ((*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) * 8 + -8)
        == /*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58)) {
      uVar13 = /*UnityEngine.SphereCollider$$get_radius*/ func_0x032a4ba4(plVar5,0);
      *(undefined4 *)(plVar8 + 0x36) = uVar13;
      lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                        (plVar8);
      if (lVar3 != 0) {
        uStack_78 = *(undefined8 *)(lVar3 + 0xb8);
        uStack_80 = *(undefined8 *)(lVar3 + 0xb0);
        fVar14 = (float)/*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_FOV*/ func_0x01563318(&uStack_80,0);
        uVar13 = _cosf(fVar14 * _UNK_033f850c * 0.5);
        *(undefined4 *)((long)plVar8 + 0x1b4) = uVar13;
        lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                          (plVar8);
        if (lVar3 != 0) {
          uStack_78 = *(undefined8 *)(lVar3 + 0xb8);
          uStack_80 = *(undefined8 *)(lVar3 + 0xb0);
          uVar13 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMin*/ func_0x015633f8(&uStack_80,0);
          *(undefined4 *)(plVar8 + 0x37) = uVar13;
          lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                            (plVar8);
          if (lVar3 != 0) {
            uStack_78 = *(undefined8 *)(lVar3 + 0xb8);
            uStack_80 = *(undefined8 *)(lVar3 + 0xb0);
            uVar13 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMax*/ func_0x01563418(&uStack_80,0);
            *(undefined4 *)((long)plVar8 + 0x1bc) = uVar13;
            if ((((plVar8[5] != 0) && (lVar3 = *(long *)(plVar8[5] + 0x70), lVar3 != 0)) &&
                (lVar3 = *(long *)(lVar3 + 0x90), lVar3 != 0)) &&
               (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) {
              param_3 = plVar8[0x20];
              lVar3 = /*Atlas.Audio.WeaponAudioManager$$Create*/ func_0x01530894(lVar3,0,param_3,0);
              plVar8[0x35] = lVar3;
              if (lVar3 != 0) {
                /*Atlas.Audio.WeaponAudio$$Pickup*/ func_0x0152fdf0(lVar3,0);
                return;
              }
            }
          }
        }
      }
      goto code_r0x014d051c;
    }
  }
  lVar3 = func_0x00f78e5c();
  puStack_88 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnEnterPool;
  lStack_a0 = lVar9;
  plStack_98 = plVar8;
  ppuStack_90 = &puStack_30;
  Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTearDownParamsInternal();
  Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(lVar3);
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar3,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar3 + 0x48) != 0) &&
     (lVar9 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar9 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar3 + 100),*(undefined4 *)(lVar3 + 0x68),
                    *(undefined4 *)(lVar3 + 0x6c),lVar9,0);
    if ((*(long *)(lVar3 + 0x48) != 0) &&
       (lVar9 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar9 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar3 + 0x70),*(undefined4 *)(lVar3 + 0x74),
                      *(undefined4 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x7c),lVar9,0);
      if ((*(long *)(lVar3 + 0x48) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar9 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar3 + 0x80),*(undefined4 *)(lVar3 + 0x84),
                        *(undefined4 *)(lVar3 + 0x88),lVar9,0);
        *(undefined1 *)(lVar3 + 0x19) = 0;
        *(undefined8 *)(lVar3 + 0x98) = 0;
        *(undefined8 *)(lVar3 + 0x90) = 0;
        *(undefined8 *)(lVar3 + 0xa8) = 0;
        *(undefined8 *)(lVar3 + 0xa0) = 0;
        *(undefined8 *)(lVar3 + 0xb8) = 0;
        *(undefined8 *)(lVar3 + 0xb0) = 0;
        if (*(long *)(lVar3 + 0x48) != 0) {
          lVar9 = *(long *)(*(long *)(lVar3 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0);
          if (iVar1 != 0) {
            if (lVar9 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar9 + 0x46) = 0;
            *(undefined4 *)(lVar9 + 0x40) = 0;
            *(undefined1 *)(lVar9 + 0x44) = 0;
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
  auVar17 = func_0x00f78af4();
  lVar9 = auVar17._8_8_;
  lVar3 = auVar17._0_8_;
  puStack_a8 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  pppuStack_b0 = &ppuStack_90;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar9;
  *(long *)(lVar3 + 0x48) = param_3;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar9 != 0)) {
    lVar11 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar9 = *(long *)(lVar9 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar9,0);
    if (lVar11 != 0) {
      uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,uVar4,uRam0000000003d572a0);
      *(undefined8 *)(lVar3 + 0x90) = uVar4;
      puVar12 = &UNK_01523aa4;
      lVar11 = lVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar12 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar11 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  lStack_130 = lVar9;
  lStack_128 = param_3;
  lStack_120 = lVar3;
  pppuStack_100 = &pppuStack_b0;
  puStack_f8 = puVar12;
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
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  if (*(long *)(lVar11 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar11 + 0x90);
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar16 = *(undefined8 *)(lVar3 + 0x38);
    uVar15 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar11 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar11 + 0xb0) = uVar16;
    *(undefined8 *)(lVar11 + 0xa8) = uVar15;
    *(undefined8 *)(lVar11 + 0xa0) = uVar7;
    *(undefined8 *)(lVar11 + 0x98) = uVar4;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar11 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_138 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar11 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar11 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_138,uRam0000000003d57270), lVar3 != 0)) {
        uStack_140 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar11 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar11 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_180,lVar3,uRam0000000003d3d2e8);
          bVar10 = false;
          while (uVar6 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_180,uRam0000000003d334f0), uVar4 = uStack_170,
                (uVar6 & 1) != 0) {
            uStack_1a8 = uStack_160;
            uStack_1b0 = uStack_168;
            uStack_198 = uStack_150;
            uStack_1a0 = uStack_158;
            uStack_190 = uStack_148;
            uStack_1b8 = uStack_170;
            uVar7 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1b8);
            uVar6 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_138,uVar7,0);
            if ((uVar6 & 1) != 0) {
              *(undefined8 *)(lVar11 + 0xa0) = uStack_1a8;
              *(undefined8 *)(lVar11 + 0x98) = uStack_1b0;
              *(undefined8 *)(lVar11 + 0xb0) = uStack_198;
              *(undefined8 *)(lVar11 + 0xa8) = uStack_1a0;
              *(undefined8 *)(lVar11 + 0xb8) = uStack_190;
              bVar10 = true;
            }
            uStack_1b8 = uVar4;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1b8);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_140,uVar4,0);
            if (!bVar10 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar11 + 0xa0) = uStack_1a8;
              *(undefined8 *)(lVar11 + 0x98) = uStack_1b0;
              *(undefined8 *)(lVar11 + 0xb0) = uStack_198;
              *(undefined8 *)(lVar11 + 0xa8) = uStack_1a0;
              *(undefined8 *)(lVar11 + 0xb8) = uStack_190;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_180,uRam0000000003d334e8);
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
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_180,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14d023c | Atlas.Gameplay.Usables.ProximityHomingProjectile.OnExitPool
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_ProximityHomingProjectile__OnExitPool
               (long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  int extraout_w1;
  long lVar8;
  bool bVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
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
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4b82 & 1) == 0) {
    func_0x00f78a20(0x3d24b58);
    func_0x00f78a20(0x3d41598);
    func_0x00f78a20(0x3d1eaf8);
    func_0x00f78a20(0x3d416c0);
    bRam0000000003eb4b82 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool(param_1,param_2,param_3,0,0,0);
  lVar8 = param_1[0x34];
  lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                    (param_1);
  if ((lVar3 == 0) || (lVar8 == 0)) {
code_r0x014d051c:
    func_0x00f78af4();
  }
  else {
    param_3 = param_1[0x20];
    Atlas_Gameplay_Usables_HomingProjectileLogic__SetUpParams
              (lVar8,*(undefined8 *)(lVar3 + 0xb0),param_3,param_1,0);
    lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour(param_1);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x70) == 0)) goto code_r0x014d051c;
    param_3 = 0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x70),1);
    lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour(param_1);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x78) == 0)) goto code_r0x014d051c;
    param_3 = 0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x78),0);
    *(undefined1 *)(param_1 + 0x39) = 0;
    if (param_1[0x1f] == 0) goto code_r0x014d051c;
    lVar8 = *(long *)(param_1[0x1f] + 0x20);
    uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    param_3 = *(long *)(*param_1 + 0x410);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,param_1,param_3,uRam0000000003d41598);
    if (lVar8 == 0) goto code_r0x014d051c;
    param_3 = lRam0000000003d416c0;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar8,uVar4);
    if (param_1[0x1f] == 0) goto code_r0x014d051c;
    lVar8 = *(long *)(param_1[0x1f] + 0x28);
    uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    param_3 = *(long *)(*param_1 + 0x420);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,param_1,param_3,uRam0000000003d41598);
    if (lVar8 == 0) goto code_r0x014d051c;
    param_3 = lRam0000000003d416c0;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar8,uVar4);
    if ((param_1[0x1f] == 0) || (plVar5 = *(long **)(param_1[0x1f] + 0x10), plVar5 == (long *)0x0))
    goto code_r0x014d051c;
    if ((*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) * 8 + -8)
        == /*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58)) {
      uVar12 = /*UnityEngine.SphereCollider$$get_radius*/ func_0x032a4ba4(plVar5,0);
      *(undefined4 *)(param_1 + 0x36) = uVar12;
      lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                        (param_1);
      if (lVar3 != 0) {
        uStack_58 = *(undefined8 *)(lVar3 + 0xb8);
        uStack_60 = *(undefined8 *)(lVar3 + 0xb0);
        fVar13 = (float)/*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_FOV*/ func_0x01563318(&uStack_60,0);
        uVar12 = _cosf(fVar13 * _UNK_033f850c * 0.5);
        *(undefined4 *)((long)param_1 + 0x1b4) = uVar12;
        lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                          (param_1);
        if (lVar3 != 0) {
          uStack_58 = *(undefined8 *)(lVar3 + 0xb8);
          uStack_60 = *(undefined8 *)(lVar3 + 0xb0);
          uVar12 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMin*/ func_0x015633f8(&uStack_60,0);
          *(undefined4 *)(param_1 + 0x37) = uVar12;
          lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                            (param_1);
          if (lVar3 != 0) {
            uStack_58 = *(undefined8 *)(lVar3 + 0xb8);
            uStack_60 = *(undefined8 *)(lVar3 + 0xb0);
            uVar12 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMax*/ func_0x01563418(&uStack_60,0);
            *(undefined4 *)((long)param_1 + 0x1bc) = uVar12;
            if ((((param_1[5] != 0) && (lVar3 = *(long *)(param_1[5] + 0x70), lVar3 != 0)) &&
                (lVar3 = *(long *)(lVar3 + 0x90), lVar3 != 0)) &&
               (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) {
              param_3 = param_1[0x20];
              lVar3 = /*Atlas.Audio.WeaponAudioManager$$Create*/ func_0x01530894(lVar3,0,param_3,0);
              param_1[0x35] = lVar3;
              if (lVar3 != 0) {
                /*Atlas.Audio.WeaponAudio$$Pickup*/ func_0x0152fdf0(lVar3,0);
                return;
              }
            }
          }
        }
      }
      goto code_r0x014d051c;
    }
  }
  lVar3 = func_0x00f78e5c();
  puStack_68 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnEnterPool;
  lStack_80 = lVar8;
  plStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTearDownParamsInternal();
  Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(lVar3);
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
  auVar16 = func_0x00f78af4();
  lVar8 = auVar16._8_8_;
  lVar3 = auVar16._0_8_;
  puStack_88 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppuStack_90 = &puStack_70;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar8;
  *(long *)(lVar3 + 0x48) = param_3;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar8 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar8 = *(long *)(lVar8 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar8,0);
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
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_110 = lVar8;
  lStack_108 = param_3;
  lStack_100 = lVar3;
  pppuStack_e0 = &ppuStack_90;
  puStack_d8 = puVar11;
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
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar10 + 0x90);
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar15 = *(undefined8 *)(lVar3 + 0x38);
    uVar14 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar15;
    *(undefined8 *)(lVar10 + 0xa8) = uVar14;
    *(undefined8 *)(lVar10 + 0xa0) = uVar7;
    *(undefined8 *)(lVar10 + 0x98) = uVar4;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_118 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_118,uRam0000000003d57270), lVar3 != 0)) {
        uStack_120 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_160,lVar3,uRam0000000003d3d2e8);
          bVar9 = false;
          while (uVar6 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_160,uRam0000000003d334f0), uVar4 = uStack_150,
                (uVar6 & 1) != 0) {
            uStack_188 = uStack_140;
            uStack_190 = uStack_148;
            uStack_178 = uStack_130;
            uStack_180 = uStack_138;
            uStack_170 = uStack_128;
            uStack_198 = uStack_150;
            uVar7 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_198);
            uVar6 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_118,uVar7,0);
            if ((uVar6 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_188;
              *(undefined8 *)(lVar10 + 0x98) = uStack_190;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_178;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_180;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_170;
              bVar9 = true;
            }
            uStack_198 = uVar4;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_198);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_120,uVar4,0);
            if (!bVar9 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_188;
              *(undefined8 *)(lVar10 + 0x98) = uStack_190;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_178;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_180;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_170;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_160,uRam0000000003d334e8);
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
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_160,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14d024c | Atlas.Gameplay.Usables.ProximityHomingProjectile.OnExitPool
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_ProximityHomingProjectile__OnExitPool
               (long *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  int extraout_w1;
  long lVar8;
  bool bVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
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
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4b82 & 1) == 0) {
    func_0x00f78a20(0x3d24b58);
    func_0x00f78a20(0x3d41598);
    func_0x00f78a20(0x3d1eaf8);
    func_0x00f78a20(0x3d416c0);
    bRam0000000003eb4b82 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool
            (param_1,param_2,param_3,param_4,param_5,param_6);
  lVar8 = param_1[0x34];
  lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                    (param_1);
  if ((lVar3 == 0) || (lVar8 == 0)) {
LAB_014d051c:
    func_0x00f78af4();
  }
  else {
    param_3 = param_1[0x20];
    Atlas_Gameplay_Usables_HomingProjectileLogic__SetUpParams
              (lVar8,*(undefined8 *)(lVar3 + 0xb0),param_3,param_1,0);
    lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour(param_1);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x70) == 0)) goto LAB_014d051c;
    param_3 = 0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x70),1);
    lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour(param_1);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x78) == 0)) goto LAB_014d051c;
    param_3 = 0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x78),0);
    *(undefined1 *)(param_1 + 0x39) = 0;
    if (param_1[0x1f] == 0) goto LAB_014d051c;
    lVar8 = *(long *)(param_1[0x1f] + 0x20);
    uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    param_3 = *(long *)(*param_1 + 0x410);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,param_1,param_3,uRam0000000003d41598);
    if (lVar8 == 0) goto LAB_014d051c;
    param_3 = lRam0000000003d416c0;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar8,uVar4);
    if (param_1[0x1f] == 0) goto LAB_014d051c;
    lVar8 = *(long *)(param_1[0x1f] + 0x28);
    uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    param_3 = *(long *)(*param_1 + 0x420);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,param_1,param_3,uRam0000000003d41598);
    if (lVar8 == 0) goto LAB_014d051c;
    param_3 = lRam0000000003d416c0;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar8,uVar4);
    if ((param_1[0x1f] == 0) || (plVar5 = *(long **)(param_1[0x1f] + 0x10), plVar5 == (long *)0x0))
    goto LAB_014d051c;
    if ((*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) * 8 + -8)
        == /*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58)) {
      uVar12 = /*UnityEngine.SphereCollider$$get_radius*/ func_0x032a4ba4(plVar5,0);
      *(undefined4 *)(param_1 + 0x36) = uVar12;
      lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                        (param_1);
      if (lVar3 != 0) {
        uStack_58 = *(undefined8 *)(lVar3 + 0xb8);
        uStack_60 = *(undefined8 *)(lVar3 + 0xb0);
        fVar13 = (float)/*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_FOV*/ func_0x01563318(&uStack_60,0);
        uVar12 = _cosf(fVar13 * _UNK_033f850c * 0.5);
        *(undefined4 *)((long)param_1 + 0x1b4) = uVar12;
        lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                          (param_1);
        if (lVar3 != 0) {
          uStack_58 = *(undefined8 *)(lVar3 + 0xb8);
          uStack_60 = *(undefined8 *)(lVar3 + 0xb0);
          uVar12 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMin*/ func_0x015633f8(&uStack_60,0);
          *(undefined4 *)(param_1 + 0x37) = uVar12;
          lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                            (param_1);
          if (lVar3 != 0) {
            uStack_58 = *(undefined8 *)(lVar3 + 0xb8);
            uStack_60 = *(undefined8 *)(lVar3 + 0xb0);
            uVar12 = /*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TargetWarningRangeMax*/ func_0x01563418(&uStack_60,0);
            *(undefined4 *)((long)param_1 + 0x1bc) = uVar12;
            if ((((param_1[5] != 0) && (lVar3 = *(long *)(param_1[5] + 0x70), lVar3 != 0)) &&
                (lVar3 = *(long *)(lVar3 + 0x90), lVar3 != 0)) &&
               (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) {
              param_3 = param_1[0x20];
              lVar3 = /*Atlas.Audio.WeaponAudioManager$$Create*/ func_0x01530894(lVar3,0,param_3,0);
              param_1[0x35] = lVar3;
              if (lVar3 != 0) {
                /*Atlas.Audio.WeaponAudio$$Pickup*/ func_0x0152fdf0(lVar3,0);
                return;
              }
            }
          }
        }
      }
      goto LAB_014d051c;
    }
  }
  lVar3 = func_0x00f78e5c();
  puStack_68 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnEnterPool;
  lStack_80 = lVar8;
  plStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTearDownParamsInternal();
  Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(lVar3);
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
  auVar16 = func_0x00f78af4();
  lVar8 = auVar16._8_8_;
  lVar3 = auVar16._0_8_;
  puStack_88 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppuStack_90 = &puStack_70;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar8;
  *(long *)(lVar3 + 0x48) = param_3;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar8 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar8 = *(long *)(lVar8 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar8,0);
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
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_110 = lVar8;
  lStack_108 = param_3;
  lStack_100 = lVar3;
  pppuStack_e0 = &ppuStack_90;
  puStack_d8 = puVar11;
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
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar10 + 0x90);
  if (lVar3 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar15 = *(undefined8 *)(lVar3 + 0x38);
    uVar14 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar15;
    *(undefined8 *)(lVar10 + 0xa8) = uVar14;
    *(undefined8 *)(lVar10 + 0xa0) = uVar7;
    *(undefined8 *)(lVar10 + 0x98) = uVar4;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_118 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_118,uRam0000000003d57270), lVar3 != 0)) {
        uStack_120 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_160,lVar3,uRam0000000003d3d2e8);
          bVar9 = false;
          while (uVar6 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_160,uRam0000000003d334f0), uVar4 = uStack_150,
                (uVar6 & 1) != 0) {
            uStack_188 = uStack_140;
            uStack_190 = uStack_148;
            uStack_178 = uStack_130;
            uStack_180 = uStack_138;
            uStack_170 = uStack_128;
            uStack_198 = uStack_150;
            uVar7 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_198);
            uVar6 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_118,uVar7,0);
            if ((uVar6 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_188;
              *(undefined8 *)(lVar10 + 0x98) = uStack_190;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_178;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_180;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_170;
              bVar9 = true;
            }
            uStack_198 = uVar4;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_198);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_120,uVar4,0);
            if (!bVar9 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_188;
              *(undefined8 *)(lVar10 + 0x98) = uStack_190;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_178;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_180;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_170;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_160,uRam0000000003d334e8);
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
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_160,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14d0524 | Atlas.Gameplay.Usables.ProximityHomingProjectile.OnEnterPool
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

void Atlas_Gameplay_Usables_ProximityHomingProjectile__OnEnterPool
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
  
  Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTearDownParamsInternal();
  Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(param_1);
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
// RVA: 0x14d0554 | Atlas.Gameplay.Usables.ProximityHomingProjectile.Use
// ============================================================

ulong Atlas_Gameplay_Usables_ProximityHomingProjectile__Use
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint extraout_w8;
  uint uVar11;
  long lVar12;
  long extraout_x9;
  int *piVar13;
  long unaff_x20;
  undefined1 uVar14;
  code *pcVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float extraout_s0;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  
  Atlas_Gameplay_Usables_ProjectileUsable__Use();
  lVar2 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour(param_4);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x70) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x70),0,0);
    lVar2 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingBehaviour(param_4);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x78) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x78),1,0);
      Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(param_4,1);
      uVar3 = *(ulong *)(param_4 + 0x1a8);
      if (uVar3 != 0) {
        uVar6 = uVar3;
        if ((bRam0000000003eb4e9a & 1) == 0) {
          uVar6 = func_0x00f78a20(0x3d76368,0);
          bRam0000000003eb4e9a = 1;
        }
        if (*(char *)(uVar3 + 0x2c) != '\0') {
          uVar7 = *(ulong *)(uVar3 + 0x10);
          uVar6 = 0;
          if (uVar7 != 0) {
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0x40000000,uVar7,*(undefined8 *)(uVar3 + 0x18),/*STR('WeaponActions')*/ uRam0000000003d76368,0);
            return uVar7;
          }
        }
        return uVar6;
      }
    }
  }
  auVar22 = func_0x00f78af4();
  plVar10 = auVar22._8_8_;
  lVar2 = auVar22._0_8_;
  if ((bRam0000000003eb4b83 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3b9b0);
    func_0x00f78a20(0x3d3b9c0);
    bRam0000000003eb4b83 = 1;
  }
  uVar3 = Atlas_Gameplay_Usables_CollidableUsable__Update(lVar2,plVar10,0);
  if (*(char *)(lVar2 + 0x18) == '\0') {
    return uVar3;
  }
  if ((*(long *)(lVar2 + 0x1a0) == 0) ||
     (Atlas_Gameplay_Usables_HomingProjectileLogic__Update(*(long *)(lVar2 + 0x1a0),plVar10,0),
     plVar10 == (long *)0x0)) goto code_r0x014d0b7c;
  lVar12 = *plVar10;
  uVar3 = (ulong)*(ushort *)(lVar12 + 0x12a);
  if (uVar3 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
        puVar4 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
        goto code_r0x014d06b0;
      }
      piVar13 = piVar13 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)func_0x00fac1f0(plVar10,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014d06b0:
  fVar16 = (float)(*(code *)*puVar4)(plVar10,puVar4[1]);
  fVar19 = *(float *)(lVar2 + 0x1cc);
  if ((0.0 <= fVar19) && (*(float *)(lVar2 + 0x1cc) = fVar19 - fVar16, fVar19 - fVar16 < 0.0)) {
    /*Atlas.Gameplay.Usables.ProximityHomingProjectile$$LoseTarget*/ func_0x014d12ec(lVar2);
    *(undefined4 *)(lVar2 + 0x1cc) = 0xbf800000;
  }
  if (*(long *)(lVar2 + 0x1a0) == 0) goto code_r0x014d0b7c;
  uVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_CanTrack(*(long *)(lVar2 + 0x1a0),0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if (*(long *)(lVar2 + 0x1a0) == 0) goto code_r0x014d0b7c;
  iVar1 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                    (*(long *)(lVar2 + 0x1a0),0);
  if (iVar1 == 0) {
    if (*(long *)(lVar2 + 0x1c0) == 0) {
code_r0x014d07f8:
      if (*(char *)(lVar2 + 0x1c9) == '\0') {
code_r0x014d0820:
        lVar12 = *(long *)(lVar2 + 0x1a0);
        uVar8 = /*Atlas.Gameplay.Usables.ProximityHomingProjectile$$FindKartTarget*/ func_0x014d0bf8(lVar2);
        if (lVar12 == 0) goto code_r0x014d0b7c;
        goto code_r0x014d08b4;
      }
      lVar12 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                         (lVar2);
      if (lVar12 == 0) goto code_r0x014d0b7c;
      if ((*(char *)(lVar12 + 0xb9) == '\0') || (0.0 < *(float *)(lVar2 + 0x1cc)))
      goto code_r0x014d0820;
    }
    else {
      lVar12 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                         (lVar2);
      if (lVar12 == 0) goto code_r0x014d0b7c;
      if (*(char *)(lVar12 + 0xb8) == '\0') goto code_r0x014d07f8;
      lVar12 = *(long *)(lVar2 + 0x1a0);
      if (lVar12 == 0) goto code_r0x014d0b7c;
      fVar19 = *(float *)(lVar2 + 0xe4);
      param_3 = *(undefined4 *)(lVar2 + 0xe8);
      iVar1 = Atlas_Gameplay_Usables_HomingProjectileLogic__CanSeeKart
                        (*(undefined4 *)(lVar2 + 0xe0),fVar19,param_3,lVar12,
                         *(undefined8 *)(lVar2 + 0x1c0),0);
      if (iVar1 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(lVar2 + 0x1c0);
      }
code_r0x014d08b4:
      *(undefined8 *)(lVar12 + 0x20) = uVar8;
    }
    if (*(long *)(lVar2 + 0x1a0) == 0) goto code_r0x014d0b7c;
    iVar1 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                      (*(long *)(lVar2 + 0x1a0),0);
    lVar12 = *(long *)(lVar2 + 0x1a0);
    if (iVar1 != 0) {
      if (((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) ||
         (lVar5 = *(long *)(*(long *)(lVar12 + 0x20) + 0x10), lVar5 == 0)) goto code_r0x014d0b7c;
      lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar5,0);
      uVar20 = *(undefined4 *)(lVar5 + 0x140);
      uVar21 = *(undefined4 *)(lVar5 + 0x144);
      uVar17 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x13c),uVar20,uVar21,0);
      lVar5 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) goto code_r0x014d09c0;
          piVar13 = piVar13 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      goto code_r0x014d093c;
    }
    if (lVar12 == 0) goto code_r0x014d0b7c;
    uVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasSplineRoot(lVar12,0);
    if ((int)uVar3 != 0) {
      lVar12 = *(long *)(lVar2 + 0x1a0);
      if (lVar12 == 0) goto code_r0x014d0b7c;
      uVar17 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_TrackWaypointPos(lVar12,0);
      lVar5 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) goto code_r0x014d0a10;
          piVar13 = piVar13 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      goto code_r0x014d09b0;
    }
  }
  else {
    lVar12 = *(long *)(lVar2 + 0x1a0);
    if (lVar12 == 0) goto code_r0x014d0b7c;
    fVar19 = *(float *)(lVar2 + 0xe4);
    param_3 = *(undefined4 *)(lVar2 + 0xe8);
    iVar1 = Atlas_Gameplay_Usables_HomingProjectileLogic__CanSeeKart
                      (*(undefined4 *)(lVar2 + 0xe0),fVar19,param_3,lVar12,
                       *(undefined8 *)(lVar12 + 0x20),0);
    if (iVar1 != 0) {
      *(undefined4 *)(lVar2 + 0x1cc) = 0xbf800000;
      lVar12 = *(long *)(lVar2 + 0x1a0);
      if (((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) ||
         (lVar5 = *(long *)(*(long *)(lVar12 + 0x20) + 0x10), lVar5 == 0)) goto code_r0x014d0b7c;
      lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar5,0);
      uVar20 = *(undefined4 *)(lVar5 + 0x140);
      uVar21 = *(undefined4 *)(lVar5 + 0x144);
      uVar17 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x13c),uVar20,uVar21,0);
      lVar5 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) goto code_r0x014d09c0;
          piVar13 = piVar13 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
code_r0x014d093c:
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar10,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,4);
      goto code_r0x014d09d0;
    }
    if (*(float *)(lVar2 + 0x1cc) <= 0.0) {
      /*Atlas.Gameplay.Usables.ProximityHomingProjectile$$StartTargetLostTimer*/ func_0x014d0bc8(lVar2);
    }
    if (*(long *)(lVar2 + 0x1a0) == 0) goto code_r0x014d0b7c;
    uVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasSplineRoot
                      (*(long *)(lVar2 + 0x1a0),0);
    if ((int)uVar3 != 0) {
      lVar12 = *(long *)(lVar2 + 0x1a0);
      if (lVar12 == 0) goto code_r0x014d0b7c;
      uVar17 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_TrackWaypointPos(lVar12,0);
      lVar5 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) goto code_r0x014d0a10;
          piVar13 = piVar13 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
code_r0x014d09b0:
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar10,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,4);
      goto code_r0x014d0a20;
    }
  }
code_r0x014d0a58:
  uVar14 = 0;
code_r0x014d0a5c:
  *(undefined1 *)(lVar2 + 0x1c8) = uVar14;
  if (*(char *)(lVar2 + 300) != '\0') {
    return uVar3;
  }
  uVar3 = *(ulong *)(lVar2 + 0x1a0);
  if (uVar3 == 0) {
code_r0x014d0b7c:
    uVar6 = func_0x00f78af4();
    uVar3 = uVar6;
    if ((0.0 <= *(float *)(uVar6 + 0x1cc)) &&
       (fVar16 = *(float *)(uVar6 + 0x1cc) - extraout_s0, *(float *)(uVar6 + 0x1cc) = fVar16,
       fVar16 < 0.0)) {
      uVar3 = /*Atlas.Gameplay.Usables.ProximityHomingProjectile$$LoseTarget*/ func_0x014d12ec(uVar6);
      *(undefined4 *)(uVar6 + 0x1cc) = 0xbf800000;
    }
    return uVar3;
  }
  lVar12 = *(long *)(uVar3 + 0x20);
  if (lVar12 == 0) {
    return uVar3;
  }
  uVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__IsBehindKart(uVar3,lVar12,0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar5 = *(long *)(lVar2 + 0x1a0);
  if (lVar5 == 0) goto code_r0x014d0b7c;
  fVar16 = (float)Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                            (lVar5,*(undefined8 *)(lVar5 + 0x20),0);
  if (*(long *)(lVar12 + 0x30) == 0) goto code_r0x014d0b7c;
  Atlas_Gameplay_Kart_KartVisualAnimation__OnHomingProjectileIncoming(*(long *)(lVar12 + 0x30),0);
  lVar5 = *(long *)(lVar12 + 0x70);
  if (lVar5 != 0) {
    uVar20 = *(undefined4 *)(lVar2 + 0x1bc);
    uVar17 = func_0x0001bd10(0,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,plVar10);
    /*Atlas.Audio.KartAudio$$WeaponTargetted*/ func_0x015c11c8(SQRT(fVar16),uVar20,uVar17,lVar5,0);
  }
  if (*(long *)(lVar12 + 0x90) == 0) goto code_r0x014d0b7c;
  uVar3 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(*(long *)(lVar12 + 0x90),0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if ((*(long *)(lVar12 + 0x90) == 0) ||
     (lVar5 = *(long *)(*(long *)(lVar12 + 0x90) + 0xd0), lVar5 == 0)) goto code_r0x014d0b7c;
  uVar3 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar5,lVar2,uRam0000000003d3b9c0);
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  if ((*(long *)(lVar12 + 0x90) == 0) ||
     (uVar3 = *(ulong *)(*(long *)(lVar12 + 0x90) + 0xd0), uVar3 == 0)) goto code_r0x014d0b7c;
  lVar12 = *(long *)(uVar3 + 0x10);
  puVar4 = puRam0000000003d3b9b0;
  if (lVar12 == 0) {
code_r0x0242716c:
    lVar2 = unaff_x20;
    uVar3 = param_4;
    uVar6 = func_0x00f78af4();
    lVar12 = extraout_x9;
    uVar11 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar3 + 0x18) = uVar11 + 1;
  }
  else {
    uVar11 = *(uint *)(uVar3 + 0x18);
    uVar6 = uVar3;
    if (uVar11 != *(uint *)(lVar12 + 0x18)) goto code_r0x02427170;
    puVar4 = *(undefined8 **)(*(long *)(puRam0000000003d3b9b0[3] + 0xc0) + 0x60);
    uVar6 = (*(code *)*puVar4)(uVar3,uVar11 + 1);
    lVar12 = *(long *)(uVar3 + 0x10);
    uVar11 = *(uint *)(uVar3 + 0x18);
    *(uint *)(uVar3 + 0x18) = uVar11 + 1;
    param_4 = uVar3;
    unaff_x20 = lVar2;
    if (lVar12 == 0) goto code_r0x0242716c;
  }
  if (uVar11 < *(uint *)(lVar12 + 0x18)) {
    *(long *)(lVar12 + (long)(int)uVar11 * 8 + 0x20) = lVar2;
    *(int *)(uVar3 + 0x1c) = *(int *)(uVar3 + 0x1c) + 1;
    return uVar6;
  }
  uVar8 = func_0x00f78b24();
  auVar22 = func_0x00f78ac0(uVar8,0);
  lVar12 = auVar22._8_8_;
  lVar2 = auVar22._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar4[3] + 0xc0) + 0x48))(lVar12,0x14);
  if (lVar2 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar15)();
  }
  pcVar15 = (code *)**(undefined8 **)(*(long *)(puVar4[3] + 0xc0) + 0x28);
  lVar5 = *(long *)(*(long *)(puVar4[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  if (lVar12 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = func_0x00f78adc(lVar12,lVar5);
    if (lVar9 == 0) {
      func_0x00f78e5c(lVar12,lVar5);
      goto code_r0x0242734c;
    }
  }
  (*pcVar15)(lVar2,lVar9,*(undefined8 *)(*(long *)(puVar4[3] + 0xc0) + 0x28));
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar4[3] + 0xc0) + 0x68))(lVar2);
  return (ulong)(iVar1 - 1);
code_r0x014d09c0:
  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar13 + 4) * 0x10 + 0x138);
code_r0x014d09d0:
  uVar18 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  uVar14 = 1;
  uVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__TrackTarget
                    (uVar17,uVar20,uVar21,uVar18,lVar12,*(undefined1 *)(lVar2 + 0xf0),lVar2 + 0xe0,1
                     ,1,0);
  goto code_r0x014d0a5c;
code_r0x014d0a10:
  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar13 + 4) * 0x10 + 0x138);
code_r0x014d0a20:
  uVar20 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  uVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__TrackTarget
                    (uVar17,fVar19,param_3,uVar20,lVar12,*(undefined1 *)(lVar2 + 0xf0),lVar2 + 0xe0,
                     0,1,0);
  goto code_r0x014d0a58;
}



// ============================================================
// RVA: 0x14d05d0 | Atlas.Gameplay.Usables.ProximityHomingProjectile.Update
// ============================================================

ulong Atlas_Gameplay_Usables_ProximityHomingProjectile__Update
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
                long *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint extraout_w8;
  uint uVar8;
  long lVar9;
  long extraout_x9;
  int *piVar10;
  ulong unaff_x19;
  long unaff_x20;
  undefined1 uVar11;
  long lVar12;
  code *pcVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float extraout_s0;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  
  if ((bRam0000000003eb4b83 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3b9b0);
    func_0x00f78a20(0x3d3b9c0);
    bRam0000000003eb4b83 = 1;
  }
  uVar2 = Atlas_Gameplay_Usables_CollidableUsable__Update(param_4,param_5,0);
  if (*(char *)(param_4 + 0x18) == '\0') {
    return uVar2;
  }
  if ((*(long *)(param_4 + 0x1a0) == 0) ||
     (Atlas_Gameplay_Usables_HomingProjectileLogic__Update(*(long *)(param_4 + 0x1a0),param_5,0),
     param_5 == (long *)0x0)) goto LAB_014d0b7c;
  lVar9 = *param_5;
  uVar2 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar2 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
        puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_014d06b0;
      }
      piVar10 = piVar10 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_014d06b0:
  fVar14 = (float)(*(code *)*puVar3)(param_5,puVar3[1]);
  fVar17 = *(float *)(param_4 + 0x1cc);
  if ((0.0 <= fVar17) && (*(float *)(param_4 + 0x1cc) = fVar17 - fVar14, fVar17 - fVar14 < 0.0)) {
    /*Atlas.Gameplay.Usables.ProximityHomingProjectile$$LoseTarget*/ func_0x014d12ec(param_4);
    *(undefined4 *)(param_4 + 0x1cc) = 0xbf800000;
  }
  if (*(long *)(param_4 + 0x1a0) == 0) goto LAB_014d0b7c;
  uVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_CanTrack(*(long *)(param_4 + 0x1a0),0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (*(long *)(param_4 + 0x1a0) == 0) goto LAB_014d0b7c;
  iVar1 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                    (*(long *)(param_4 + 0x1a0),0);
  if (iVar1 == 0) {
    if (*(long *)(param_4 + 0x1c0) == 0) {
code_r0x014d07f8:
      if (*(char *)(param_4 + 0x1c9) == '\0') {
code_r0x014d0820:
        lVar9 = *(long *)(param_4 + 0x1a0);
        uVar6 = /*Atlas.Gameplay.Usables.ProximityHomingProjectile$$FindKartTarget*/ func_0x014d0bf8(param_4);
        if (lVar9 == 0) goto LAB_014d0b7c;
        goto code_r0x014d08b4;
      }
      lVar9 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                        (param_4);
      if (lVar9 == 0) goto LAB_014d0b7c;
      if ((*(char *)(lVar9 + 0xb9) == '\0') || (0.0 < *(float *)(param_4 + 0x1cc)))
      goto code_r0x014d0820;
    }
    else {
      lVar9 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                        (param_4);
      if (lVar9 == 0) goto LAB_014d0b7c;
      if (*(char *)(lVar9 + 0xb8) == '\0') goto code_r0x014d07f8;
      lVar9 = *(long *)(param_4 + 0x1a0);
      if (lVar9 == 0) goto LAB_014d0b7c;
      fVar17 = *(float *)(param_4 + 0xe4);
      param_3 = *(undefined4 *)(param_4 + 0xe8);
      iVar1 = Atlas_Gameplay_Usables_HomingProjectileLogic__CanSeeKart
                        (*(undefined4 *)(param_4 + 0xe0),fVar17,param_3,lVar9,
                         *(undefined8 *)(param_4 + 0x1c0),0);
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(param_4 + 0x1c0);
      }
code_r0x014d08b4:
      *(undefined8 *)(lVar9 + 0x20) = uVar6;
    }
    if (*(long *)(param_4 + 0x1a0) == 0) goto LAB_014d0b7c;
    iVar1 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                      (*(long *)(param_4 + 0x1a0),0);
    lVar9 = *(long *)(param_4 + 0x1a0);
    if (iVar1 != 0) {
      if (((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) ||
         (lVar4 = *(long *)(*(long *)(lVar9 + 0x20) + 0x10), lVar4 == 0)) goto LAB_014d0b7c;
      lVar4 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar4,0);
      uVar18 = *(undefined4 *)(lVar4 + 0x140);
      uVar19 = *(undefined4 *)(lVar4 + 0x144);
      uVar15 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x13c),uVar18,uVar19,0);
      lVar4 = *param_5;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) goto code_r0x014d09c0;
          piVar10 = piVar10 + 4;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      goto code_r0x014d093c;
    }
    if (lVar9 == 0) goto LAB_014d0b7c;
    uVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasSplineRoot(lVar9,0);
    if ((int)uVar2 != 0) {
      lVar9 = *(long *)(param_4 + 0x1a0);
      if (lVar9 == 0) goto LAB_014d0b7c;
      uVar15 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_TrackWaypointPos(lVar9,0);
      lVar4 = *param_5;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) goto code_r0x014d0a10;
          piVar10 = piVar10 + 4;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      goto code_r0x014d09b0;
    }
  }
  else {
    lVar9 = *(long *)(param_4 + 0x1a0);
    if (lVar9 == 0) goto LAB_014d0b7c;
    fVar17 = *(float *)(param_4 + 0xe4);
    param_3 = *(undefined4 *)(param_4 + 0xe8);
    iVar1 = Atlas_Gameplay_Usables_HomingProjectileLogic__CanSeeKart
                      (*(undefined4 *)(param_4 + 0xe0),fVar17,param_3,lVar9,
                       *(undefined8 *)(lVar9 + 0x20),0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_4 + 0x1cc) = 0xbf800000;
      lVar9 = *(long *)(param_4 + 0x1a0);
      if (((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) ||
         (lVar4 = *(long *)(*(long *)(lVar9 + 0x20) + 0x10), lVar4 == 0)) goto LAB_014d0b7c;
      lVar4 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar4,0);
      uVar18 = *(undefined4 *)(lVar4 + 0x140);
      uVar19 = *(undefined4 *)(lVar4 + 0x144);
      uVar15 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x13c),uVar18,uVar19,0);
      lVar4 = *param_5;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) goto code_r0x014d09c0;
          piVar10 = piVar10 + 4;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
code_r0x014d093c:
      puVar3 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,4);
      goto code_r0x014d09d0;
    }
    if (*(float *)(param_4 + 0x1cc) <= 0.0) {
      /*Atlas.Gameplay.Usables.ProximityHomingProjectile$$StartTargetLostTimer*/ func_0x014d0bc8(param_4);
    }
    if (*(long *)(param_4 + 0x1a0) == 0) goto LAB_014d0b7c;
    uVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasSplineRoot
                      (*(long *)(param_4 + 0x1a0),0);
    if ((int)uVar2 != 0) {
      lVar9 = *(long *)(param_4 + 0x1a0);
      if (lVar9 == 0) goto LAB_014d0b7c;
      uVar15 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_TrackWaypointPos(lVar9,0);
      lVar4 = *param_5;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) goto code_r0x014d0a10;
          piVar10 = piVar10 + 4;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
code_r0x014d09b0:
      puVar3 = (undefined8 *)func_0x00fac1f0(param_5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,4);
      goto code_r0x014d0a20;
    }
  }
code_r0x014d0a58:
  uVar11 = 0;
code_r0x014d0a5c:
  *(undefined1 *)(param_4 + 0x1c8) = uVar11;
  if (*(char *)(param_4 + 300) != '\0') {
    return uVar2;
  }
  uVar2 = *(ulong *)(param_4 + 0x1a0);
  if (uVar2 == 0) {
LAB_014d0b7c:
    uVar5 = func_0x00f78af4();
    uVar2 = uVar5;
    if ((0.0 <= *(float *)(uVar5 + 0x1cc)) &&
       (fVar14 = *(float *)(uVar5 + 0x1cc) - extraout_s0, *(float *)(uVar5 + 0x1cc) = fVar14,
       fVar14 < 0.0)) {
      uVar2 = /*Atlas.Gameplay.Usables.ProximityHomingProjectile$$LoseTarget*/ func_0x014d12ec(uVar5);
      *(undefined4 *)(uVar5 + 0x1cc) = 0xbf800000;
    }
    return uVar2;
  }
  lVar9 = *(long *)(uVar2 + 0x20);
  if (lVar9 == 0) {
    return uVar2;
  }
  uVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__IsBehindKart(uVar2,lVar9,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar4 = *(long *)(param_4 + 0x1a0);
  if (lVar4 == 0) goto LAB_014d0b7c;
  fVar14 = (float)Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                            (lVar4,*(undefined8 *)(lVar4 + 0x20),0);
  if (*(long *)(lVar9 + 0x30) == 0) goto LAB_014d0b7c;
  Atlas_Gameplay_Kart_KartVisualAnimation__OnHomingProjectileIncoming(*(long *)(lVar9 + 0x30),0);
  lVar4 = *(long *)(lVar9 + 0x70);
  if (lVar4 != 0) {
    uVar18 = *(undefined4 *)(param_4 + 0x1bc);
    uVar15 = func_0x0001bd10(0,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,param_5);
    /*Atlas.Audio.KartAudio$$WeaponTargetted*/ func_0x015c11c8(SQRT(fVar14),uVar18,uVar15,lVar4,0);
  }
  if (*(long *)(lVar9 + 0x90) == 0) goto LAB_014d0b7c;
  uVar2 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(*(long *)(lVar9 + 0x90),0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((*(long *)(lVar9 + 0x90) == 0) ||
     (lVar4 = *(long *)(*(long *)(lVar9 + 0x90) + 0xd0), lVar4 == 0)) goto LAB_014d0b7c;
  uVar2 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar4,param_4,uRam0000000003d3b9c0);
  if ((uVar2 & 1) != 0) {
    return uVar2;
  }
  if ((*(long *)(lVar9 + 0x90) == 0) ||
     (uVar2 = *(ulong *)(*(long *)(lVar9 + 0x90) + 0xd0), uVar2 == 0)) goto LAB_014d0b7c;
  lVar9 = *(long *)(uVar2 + 0x10);
  puVar3 = puRam0000000003d3b9b0;
  if (lVar9 == 0) {
code_r0x0242716c:
    param_4 = unaff_x20;
    uVar2 = unaff_x19;
    uVar5 = func_0x00f78af4();
    lVar9 = extraout_x9;
    uVar8 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar2 + 0x18) = uVar8 + 1;
  }
  else {
    uVar8 = *(uint *)(uVar2 + 0x18);
    uVar5 = uVar2;
    if (uVar8 != *(uint *)(lVar9 + 0x18)) goto code_r0x02427170;
    puVar3 = *(undefined8 **)(*(long *)(puRam0000000003d3b9b0[3] + 0xc0) + 0x60);
    uVar5 = (*(code *)*puVar3)(uVar2,uVar8 + 1);
    lVar9 = *(long *)(uVar2 + 0x10);
    uVar8 = *(uint *)(uVar2 + 0x18);
    *(uint *)(uVar2 + 0x18) = uVar8 + 1;
    unaff_x19 = uVar2;
    unaff_x20 = param_4;
    if (lVar9 == 0) goto code_r0x0242716c;
  }
  if (uVar8 < *(uint *)(lVar9 + 0x18)) {
    *(long *)(lVar9 + (long)(int)uVar8 * 8 + 0x20) = param_4;
    *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
    return uVar5;
  }
  uVar6 = func_0x00f78b24();
  auVar20 = func_0x00f78ac0(uVar6,0);
  lVar4 = auVar20._8_8_;
  lVar9 = auVar20._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar3[3] + 0xc0) + 0x48))(lVar4,0x14);
  if (lVar9 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar13)();
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(puVar3[3] + 0xc0) + 0x28);
  lVar12 = *(long *)(*(long *)(puVar3[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = func_0x00f78adc(lVar4,lVar12);
    if (lVar7 == 0) {
      func_0x00f78e5c(lVar4,lVar12);
      goto code_r0x0242734c;
    }
  }
  (*pcVar13)(lVar9,lVar7,*(undefined8 *)(*(long *)(puVar3[3] + 0xc0) + 0x28));
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar3[3] + 0xc0) + 0x68))(lVar9);
  return (ulong)(iVar1 - 1);
code_r0x014d09c0:
  puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 4) * 0x10 + 0x138);
code_r0x014d09d0:
  uVar16 = (*(code *)*puVar3)(param_5,puVar3[1]);
  uVar11 = 1;
  uVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__TrackTarget
                    (uVar15,uVar18,uVar19,uVar16,lVar9,*(undefined1 *)(param_4 + 0xf0),
                     param_4 + 0xe0,1,1,0);
  goto code_r0x014d0a5c;
code_r0x014d0a10:
  puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 4) * 0x10 + 0x138);
code_r0x014d0a20:
  uVar18 = (*(code *)*puVar3)(param_5,puVar3[1]);
  uVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__TrackTarget
                    (uVar15,fVar17,param_3,uVar18,lVar9,*(undefined1 *)(param_4 + 0xf0),
                     param_4 + 0xe0,0,1,0);
  goto code_r0x014d0a58;
}



// ============================================================
// RVA: 0x14d0b80 | Atlas.Gameplay.Usables.ProximityHomingProjectile.UpdateReLockOnTimer
// ============================================================

void Atlas_Gameplay_Usables_ProximityHomingProjectile__UpdateReLockOnTimer
               (float param_1,long param_2)

{
  if ((0.0 <= *(float *)(param_2 + 0x1cc)) &&
     (param_1 = *(float *)(param_2 + 0x1cc) - param_1, *(float *)(param_2 + 0x1cc) = param_1,
     param_1 < 0.0)) {
    /*Atlas.Gameplay.Usables.ProximityHomingProjectile$$LoseTarget*/ func_0x014d12ec(param_2);
    *(undefined4 *)(param_2 + 0x1cc) = 0xbf800000;
  }
  return;
}



// ============================================================
// RVA: 0x14d0bc8 | Atlas.Gameplay.Usables.ProximityHomingProjectile.StartTargetLostTimer
// ============================================================

/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d12d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d1504: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014d1508) */
/* WARNING: Removing unreachable block (ram,0x014d1530) */
/* WARNING: Removing unreachable block (ram,0x014d1554) */
/* WARNING: Removing unreachable block (ram,0x014d1574) */
/* WARNING: Removing unreachable block (ram,0x014d157c) */
/* WARNING: Removing unreachable block (ram,0x014d1598) */
/* WARNING: Removing unreachable block (ram,0x014d159c) */
/* WARNING: Removing unreachable block (ram,0x014d1600) */
/* WARNING: Removing unreachable block (ram,0x014cec74) */
/* WARNING: Removing unreachable block (ram,0x014ceca0) */
/* WARNING: Removing unreachable block (ram,0x014ced3c) */
/* WARNING: Removing unreachable block (ram,0x014ced98) */
/* WARNING: Removing unreachable block (ram,0x014cee00) */
/* WARNING: Removing unreachable block (ram,0x014cee14) */
/* WARNING: Removing unreachable block (ram,0x014cee4c) */
/* WARNING: Removing unreachable block (ram,0x014cee50) */
/* WARNING: Removing unreachable block (ram,0x014cee54) */
/* WARNING: Removing unreachable block (ram,0x014cee68) */
/* WARNING: Removing unreachable block (ram,0x014cef30) */
/* WARNING: Removing unreachable block (ram,0x014cef38) */
/* WARNING: Removing unreachable block (ram,0x014cef3c) */
/* WARNING: Removing unreachable block (ram,0x014cef50) */
/* WARNING: Removing unreachable block (ram,0x014cef9c) */
/* WARNING: Removing unreachable block (ram,0x014cefbc) */
/* WARNING: Removing unreachable block (ram,0x014cefc4) */
/* WARNING: Removing unreachable block (ram,0x014cefcc) */
/* WARNING: Removing unreachable block (ram,0x014cf018) */
/* WARNING: Removing unreachable block (ram,0x014cf030) */
/* WARNING: Removing unreachable block (ram,0x014cf040) */
/* WARNING: Removing unreachable block (ram,0x014cf048) */
/* WARNING: Removing unreachable block (ram,0x014cf054) */
/* WARNING: Removing unreachable block (ram,0x014cf068) */
/* WARNING: Removing unreachable block (ram,0x014cf074) */
/* WARNING: Removing unreachable block (ram,0x014cf088) */
/* WARNING: Removing unreachable block (ram,0x014cf08c) */
/* WARNING: Removing unreachable block (ram,0x014cf090) */
/* WARNING: Removing unreachable block (ram,0x014cf0b0) */
/* WARNING: Removing unreachable block (ram,0x014cf0ec) */
/* WARNING: Removing unreachable block (ram,0x014cf0fc) */
/* WARNING: Removing unreachable block (ram,0x014cf108) */
/* WARNING: Removing unreachable block (ram,0x014cf10c) */
/* WARNING: Removing unreachable block (ram,0x014cf118) */
/* WARNING: Removing unreachable block (ram,0x014cf124) */
/* WARNING: Removing unreachable block (ram,0x014cf13c) */
/* WARNING: Removing unreachable block (ram,0x014cf148) */
/* WARNING: Removing unreachable block (ram,0x014cf1b0) */
/* WARNING: Removing unreachable block (ram,0x014cf1b4) */
/* WARNING: Removing unreachable block (ram,0x014cf1f0) */
/* WARNING: Removing unreachable block (ram,0x014cf1b8) */
/* WARNING: Removing unreachable block (ram,0x014cf1c0) */
/* WARNING: Removing unreachable block (ram,0x014cf1a0) */
/* WARNING: Removing unreachable block (ram,0x014cece4) */
/* WARNING: Removing unreachable block (ram,0x014d15d0) */
/* WARNING: Removing unreachable block (ram,0x014d15f0) */
/* WARNING: Removing unreachable block (ram,0x014d1510) */
/* WARNING: Removing unreachable block (ram,0x01a3f3c8) */
/* WARNING: Removing unreachable block (ram,0x01a3f3f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f40c) */
/* WARNING: Removing unreachable block (ram,0x01a3f410) */
/* WARNING: Removing unreachable block (ram,0x01a3f424) */
/* WARNING: Removing unreachable block (ram,0x01a3f42c) */
/* WARNING: Removing unreachable block (ram,0x01a3f430) */
/* WARNING: Removing unreachable block (ram,0x01a3f444) */
/* WARNING: Removing unreachable block (ram,0x01a3f450) */
/* WARNING: Removing unreachable block (ram,0x01a3f454) */
/* WARNING: Removing unreachable block (ram,0x01a3f488) */
/* WARNING: Removing unreachable block (ram,0x01a3f490) */
/* WARNING: Removing unreachable block (ram,0x01a3f494) */
/* WARNING: Removing unreachable block (ram,0x01a3f4a4) */
/* WARNING: Removing unreachable block (ram,0x01a3f4b4) */
/* WARNING: Removing unreachable block (ram,0x01a3f500) */
/* WARNING: Removing unreachable block (ram,0x01a3f540) */
/* WARNING: Removing unreachable block (ram,0x01a3f590) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f4) */
/* WARNING: Removing unreachable block (ram,0x01a3f594) */
/* WARNING: Removing unreachable block (ram,0x01a3f5dc) */
/* WARNING: Removing unreachable block (ram,0x01a3f648) */
/* WARNING: Removing unreachable block (ram,0x01a3f64c) */
/* WARNING: Removing unreachable block (ram,0x01a3f660) */
/* WARNING: Removing unreachable block (ram,0x01a3f668) */
/* WARNING: Removing unreachable block (ram,0x01a3f690) */
/* WARNING: Removing unreachable block (ram,0x01a3f674) */
/* WARNING: Removing unreachable block (ram,0x01a3f680) */
/* WARNING: Removing unreachable block (ram,0x01a3f69c) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f718) */
/* WARNING: Removing unreachable block (ram,0x01a3f730) */
/* WARNING: Removing unreachable block (ram,0x01a3f750) */
/* WARNING: Removing unreachable block (ram,0x01a3f79c) */
/* WARNING: Removing unreachable block (ram,0x01a3f7d8) */
/* WARNING: Removing unreachable block (ram,0x01a3f7ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f7f4) */
/* WARNING: Removing unreachable block (ram,0x01a3f808) */
/* WARNING: Removing unreachable block (ram,0x01a3f81c) */
/* WARNING: Removing unreachable block (ram,0x01a3f968) */
/* WARNING: Removing unreachable block (ram,0x01a3f830) */
/* WARNING: Removing unreachable block (ram,0x01a3f85c) */
/* WARNING: Removing unreachable block (ram,0x01a3f8b8) */
/* WARNING: Removing unreachable block (ram,0x01a3f8bc) */
/* WARNING: Removing unreachable block (ram,0x01a3f8cc) */
/* WARNING: Removing unreachable block (ram,0x01a3f8d4) */
/* WARNING: Removing unreachable block (ram,0x01a3f8e4) */
/* WARNING: Removing unreachable block (ram,0x01a3f8ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f914) */
/* WARNING: Removing unreachable block (ram,0x01a3f8f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f904) */
/* WARNING: Removing unreachable block (ram,0x01a3f920) */
/* WARNING: Removing unreachable block (ram,0x01a3f96c) */
/* WARNING: Removing unreachable block (ram,0x01a3f990) */
/* WARNING: Removing unreachable block (ram,0x01a3f9a8) */
/* WARNING: Removing unreachable block (ram,0x01a3fa08) */
/* WARNING: Removing unreachable block (ram,0x01a3f9d8) */
/* WARNING: Removing unreachable block (ram,0x01a3f998) */
/* WARNING: Removing unreachable block (ram,0x01a3f938) */
/* WARNING: Removing unreachable block (ram,0x01a3f870) */
/* WARNING: Removing unreachable block (ram,0x01a3f958) */
/* WARNING: Removing unreachable block (ram,0x01a3f884) */
/* WARNING: Removing unreachable block (ram,0x01a3f960) */
/* WARNING: Removing unreachable block (ram,0x01a3f898) */
/* WARNING: Removing unreachable block (ram,0x01a3f950) */
/* WARNING: Removing unreachable block (ram,0x01a3f964) */
/* WARNING: Removing unreachable block (ram,0x01a3f8a0) */
/* WARNING: Removing unreachable block (ram,0x01a3f770) */
/* WARNING: Removing unreachable block (ram,0x01a3f720) */
/* WARNING: Removing unreachable block (ram,0x01a3f6b4) */
/* WARNING: Removing unreachable block (ram,0x01a3f5ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f600) */
/* WARNING: Removing unreachable block (ram,0x01a3f608) */
/* WARNING: Removing unreachable block (ram,0x01a3f6d4) */
/* WARNING: Removing unreachable block (ram,0x01a3f60c) */
/* WARNING: Removing unreachable block (ram,0x01a3f6dc) */
/* WARNING: Removing unreachable block (ram,0x01a3f620) */
/* WARNING: Removing unreachable block (ram,0x01a3f62c) */
/* WARNING: Removing unreachable block (ram,0x01a3f634) */
/* WARNING: Removing unreachable block (ram,0x01a3f6ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f0) */
/* WARNING: Removing unreachable block (ram,0x01a3f638) */
/* WARNING: Removing unreachable block (ram,0x01a3f4d8) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Gameplay_Usables_ProximityHomingProjectile__StartTargetLostTimer
                 (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  long **pplVar3;
  long **pplVar4;
  bool bVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  int extraout_w1;
  long extraout_x1;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *******pppppppuVar20;
  undefined *puVar21;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  ulong unaff_d8;
  uint uVar32;
  ulong unaff_d9;
  uint uVar33;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined4 uStack_220;
  float fStack_21c;
  float fStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 *******pppppppuStack_200;
  undefined *puStack_1f8;
  undefined8 *******pppppppuStack_190;
  code *pcStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 *******pppppppuStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 *******pppppppuStack_110;
  code *pcStack_108;
  long alStack_100 [2];
  long *plStack_f0;
  long *plStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined *puStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  long *plVar14;
  
  plVar7 = (long *)Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                             ();
  if (plVar7 != (long *)0x0) {
    *(undefined4 *)(param_4 + 0x1cc) = *(undefined4 *)((long)plVar7 + 0xbc);
    return plVar7;
  }
  lVar8 = func_0x00f78af4();
  puStack_28 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__FindKartTarget;
  pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b89 & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b89 = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  lVar9 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar8,0);
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x40) == 0)) ||
     (plVar7 = *(long **)(*(long *)(lVar9 + 0x40) + 0x28), plVar7 == (long *)0x0)) {
    func_0x00f78af4();
  }
  else {
    lVar9 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto code_r0x014d0ce0;
        }
        piVar16 = piVar16 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
code_r0x014d0ce0:
    plVar7 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
    if (plVar7 != (long *)0x0) {
      plVar17 = (long *)0x0;
      fVar28 = 3.4028235e+38;
code_r0x014d0d10:
      lVar9 = *plVar7;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
            goto code_r0x014d0d5c;
          }
          piVar16 = piVar16 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014d0d5c:
      uVar15 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      if ((uVar15 & 1) == 0) {
        lVar9 = 0;
        goto joined_r0x014d0ec0;
      }
      lVar9 = *plVar7;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
            goto code_r0x014d0db8;
          }
          piVar16 = piVar16 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014d0db8:
      lVar9 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      if (lVar9 != 0) {
        if (*(long *)(lVar9 + 0x10) != *(long *)(lVar8 + 0x28)) {
          if (*(long *)(lVar8 + 0x1a0) == 0) {
            func_0x00f78af4();
            goto code_r0x014d0fb0;
          }
          fVar24 = (float)Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                                    (*(long *)(lVar8 + 0x1a0),*(long *)(lVar9 + 0x10),0);
          unaff_d8 = (ulong)(uint)fVar24;
          lVar11 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                             (lVar8);
          if (lVar11 == 0) {
            func_0x00f78af4();
            goto code_r0x014d0fb0;
          }
          uStack_a8 = *(undefined8 *)(lVar11 + 0xb8);
          uStack_b0 = *(undefined8 *)(lVar11 + 0xb0);
          fVar25 = (float)/*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TrackingRange*/ func_0x01563398(&uStack_b0,0);
          if (fVar24 <= fVar25 * fVar25) {
            if (*(long *)(lVar9 + 0x10) == 0) {
              func_0x00f78af4();
              goto code_r0x014d0fb0;
            }
            lVar11 = *(long *)(*(long *)(lVar9 + 0x10) + 0x18);
            if (lVar11 == 0) {
              func_0x00f78af4();
              goto code_r0x014d0fb0;
            }
            fVar25 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                      (lVar11,0);
            if (*(long *)(lVar8 + 0x100) == 0) {
              func_0x00f78af4();
              goto code_r0x014d0fb0;
            }
            unaff_d9 = (ulong)(uint)fVar25;
            unaff_d10 = (ulong)(uint)param_2;
            unaff_d11 = (ulong)(uint)param_3;
            fVar30 = param_2;
            fVar23 = param_3;
            fVar26 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar8 + 0x100),0);
            param_2 = param_2 - fVar30;
            param_3 = param_3 - fVar23;
            uVar15 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(fVar25 - fVar26,param_2,param_3,*(undefined4 *)(lVar8 + 0xe0),
                                     *(undefined4 *)(lVar8 + 0xe4),*(undefined4 *)(lVar8 + 0xe8),
                                     *(undefined4 *)(lVar8 + 0x1b4),0);
            if ((uVar15 & 1) != 0) {
              if (*(long *)(lVar8 + 0x100) == 0) {
                func_0x00f78af4();
                goto code_r0x014d0fb0;
              }
              lVar11 = *(long *)(lVar8 + 0x1a0);
              /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar8 + 0x100),0);
              if (lVar11 == 0) {
                func_0x00f78af4();
                goto code_r0x014d0fb0;
              }
              bVar6 = Atlas_Gameplay_Usables_HomingProjectileLogic__HasLoSToKart(lVar11,lVar9,0);
              if ((bVar6 & (fVar24 < fVar28 || plVar17 == (long *)0x0)) != 0) {
                plVar17 = *(long **)(lVar9 + 0x10);
                fVar28 = fVar24;
              }
            }
          }
        }
        goto code_r0x014d0d10;
      }
      func_0x00f78af4();
      goto code_r0x014d0fb0;
    }
  }
  func_0x00f78af4();
code_r0x014d0fb0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14d0fb4);
  (*pcVar2)();
joined_r0x014d0ec0:
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto code_r0x014d0f18;
        }
        piVar16 = piVar16 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014d0f18:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  if (lVar9 == 0) {
    if (*(long *)(lVar8 + 0x1c0) == 0) {
      *(long **)(lVar8 + 0x1c0) = plVar17;
    }
    *(undefined1 *)(lVar8 + 0x1c9) = 1;
    return plVar17;
  }
  func_0x00f78ac0(lVar9,0);
  plVar17 = (long *)0x0;
  if (extraout_w1 != 1) goto code_r0x014d1028;
  plVar12 = (long *)___cxa_begin_catch();
  lVar9 = *plVar12;
  ___cxa_end_catch();
  goto joined_r0x014d0ec0;
code_r0x014d1028:
  plVar17 = (long *)__Unwind_Resume();
  puStack_b8 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__EarlyUpdate;
  plStack_d0 = plVar7;
  lStack_c8 = lVar8;
  pppppuStack_c0 = (undefined8 *****)&pppuStack_30;
  plVar12 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate();
  if (plVar17[0x19] != 0) {
    if ((*(char *)(plVar17[0x19] + 0x44) == '\0') &&
       (plVar12 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag
                                    (plVar17), (int)plVar12 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x014d1078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar7 = (long *)(**(code **)(*plVar17 + 0x428))
                                 ((int)plVar17[0x36],plVar17,*(undefined8 *)(*plVar17 + 0x430));
      return plVar7;
    }
    return plVar12;
  }
  auVar34 = func_0x00f78af4();
  plVar14 = auVar34._8_8_;
  plVar12 = auVar34._0_8_;
  alStack_100[1] = 0;
  puStack_d8 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTriggerEnter;
  uVar18 = 0x3eb4000;
  alStack_100[0] = lVar9;
  plStack_f0 = plVar7;
  plStack_e8 = plVar17;
  ppppppuStack_e0 = &pppppuStack_c0;
  if ((bRam0000000003eb4b84 & 1) == 0) {
    func_0x00f78a20(0x3d207e8);
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b84 = 1;
  }
  plVar7 = (long *)Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(plVar12,plVar14,0);
  if ((char)plVar12[0xc] != '\0') {
    return plVar7;
  }
  if (*(char *)((long)plVar12 + 300) != '\0') {
    return plVar7;
  }
  plVar7 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar12,0);
  if (((ulong)plVar7 & 1) != 0) {
    return plVar7;
  }
  if (plVar14 != (long *)0x0) {
    uVar18 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar14,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar18,0,0);
    if ((int)plVar7 == 0) {
      return plVar7;
    }
    lVar8 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar14,0);
    if (lVar8 != 0) {
      lVar8 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar8,uRam0000000003d534a0);
      if ((lVar8 == 0) ||
         (plVar7 = (long *)func_0x0001c7d0(0,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ uRam0000000003d21fc8,lVar8), plVar7 == (long *)0x0)) {
        return (long *)0x0;
      }
      lVar8 = *plVar7;
      if ((*(byte *)(lVar8 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8)
          != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
        if (*(byte *)(lVar8 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300)) {
          return plVar7;
        }
        if (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300) * 8 + -8
                     ) == /*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8) {
                    /* WARNING: Could not recover jumptable at 0x014d122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar7 = (long *)(**(code **)(*plVar12 + 0x228))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x230));
          return plVar7;
        }
        return plVar7;
      }
      plVar17 = (long *)(**(code **)(*plVar12 + 0x328))
                                  (plVar12,plVar7,1,*(undefined8 *)(*plVar12 + 0x330));
      if ((int)plVar17 == 0) {
        return plVar17;
      }
      Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag(plVar12,1);
      uVar15 = (ulong)*(uint *)((long)plVar7 + 0x54);
      if ((bRam0000000003eb4b74 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b74 = 1;
      }
      lVar8 = plVar12[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0,0);
      if (((ulong)plVar7 & 1) != 0) {
        return plVar7;
      }
      lVar9 = plVar12[0x19];
      if (lVar9 != 0) {
        if (*(char *)(lVar9 + 0x44) != '\0') {
          *(ulong *)(lVar9 + 0x48) =
               uVar15 << ((ulong)*(uint *)((long)plVar12 + 0x19c) & 0x3f) | *(ulong *)(lVar9 + 0x48)
          ;
          return plVar7;
        }
        return plVar7;
      }
      lVar9 = func_0x00f78af4();
      uStack_130 = 0x3d23990;
      pcStack_108 = Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
      lStack_128 = lVar8;
      plStack_120 = plVar12;
      plStack_118 = (long *)uVar15;
      pppppppuStack_110 = &ppppppuStack_e0;
      if ((bRam0000000003eb4b75 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b75 = 1;
      }
      uVar18 = *(undefined8 *)(lVar9 + 200);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar8 = 0;
      uVar15 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar18,0);
      if ((uVar15 & 1) != 0) {
        return (long *)0x0;
      }
      lVar11 = *(long *)(lVar9 + 200);
      if (lVar11 != 0) {
        if (*(char *)(lVar11 + 0x44) != '\0') {
          return (long *)0x0;
        }
        return (long *)(ulong)(*(char *)(lVar11 + 0x28) == '\x01');
      }
      plVar17 = (long *)func_0x00f78af4();
      uStack_160 = 0x3d23990;
      uStack_158 = 0x3d23990;
      pcStack_138 = Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
      plVar7 = plVar17;
      uStack_180 = unaff_d11;
      uStack_178 = unaff_d10;
      uStack_170 = unaff_d9;
      uStack_168 = unaff_d8;
      uStack_150 = uVar18;
      lStack_148 = lVar9;
      pppppppuStack_140 = &pppppppuStack_110;
      if ((bRam0000000003eb4b78 & 1) == 0) {
        plVar7 = (long *)func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b78 = 1;
      }
      if (0.0 < *(float *)((long)plVar17 + 0xdc)) {
        return plVar7;
      }
      fVar28 = *(float *)((long)plVar17 + 0xe4);
      fVar24 = *(float *)(plVar17 + 0x1d);
      plVar7 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar17[0x1c],fVar28,fVar24,extraout_s0,param_2,param_3,
                                       0);
      fVar28 = param_3 * fVar24 + extraout_s0 * extraout_s0_00 + param_2 * fVar28;
      if (fVar28 < 0.0) {
        return plVar7;
      }
      *(float *)(plVar17 + 0x1c) = extraout_s0_00;
      *(undefined4 *)((long)plVar17 + 0xe4) = 0;
      *(float *)(plVar17 + 0x1d) = fVar24;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar17 + 0x1c,0);
      *(undefined4 *)((long)plVar17 + 0xdc) = 0x3d4ccccd;
      if (0.0 < *(float *)(plVar17 + 0x1b)) {
        lVar8 = plVar17[0x1a];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar8,0);
        if (((ulong)plVar7 & 1) != 0) {
          return plVar7;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = 0;
        plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
        if (((ulong)plVar7 & 1) != 0) {
          return plVar7;
        }
      }
      *(undefined4 *)(plVar17 + 0x1b) = 0x3e4ccccd;
      iVar1 = *(int *)((long)plVar17 + 0xec) + 1;
      *(int *)((long)plVar17 + 0xec) = iVar1;
      lVar9 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar17);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x90) < iVar1) {
          (**(code **)(*plVar17 + 0x228))(plVar17,*(undefined8 *)(*plVar17 + 0x230));
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = 0;
        plVar7 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
        if ((int)plVar7 == 0) {
          return plVar7;
        }
        if (extraout_x1 != 0) {
          plVar7 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
          plVar17[0x1a] = (long)plVar7;
          return plVar7;
        }
      }
      auVar34 = func_0x00f78af4();
      lVar11 = auVar34._8_8_;
      lVar9 = auVar34._0_8_;
      pcStack_188 = Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
      pppppppuStack_190 = &pppppppuStack_140;
      if ((bRam0000000003eb4b79 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b79 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar7 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar11,0,0);
      if (((ulong)plVar7 & 1) != 0) {
        return plVar7;
      }
      if (*(long *)(lVar9 + 0x100) == 0) goto code_r0x014cf9bc;
      uVar22 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar9 + 0x100),0);
      fVar26 = *(float *)(lVar8 + 0xc);
      fVar29 = *(float *)(lVar9 + 0xe0);
      fVar23 = *(float *)(lVar9 + 0x128) * fVar26;
      lVar19 = *(long *)(lVar9 + 0x50);
      fVar25 = fVar26;
      fVar30 = fVar29;
      fStack_21c = fVar28;
      fStack_218 = fVar24;
      if (lVar19 != 0) {
        if (*(long *)(lVar9 + 0x100) == 0) goto code_r0x014cf9bc;
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar23,fVar26,fVar29,*(undefined4 *)(lVar9 + 0xe4),
                        *(undefined4 *)(lVar9 + 0xe8),*(long *)(lVar9 + 0x100),0);
        uVar22 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar9,lVar19,0);
        if ((*(long *)(lVar9 + 0x50) == 0) ||
           (lVar9 = *(long *)(*(long *)(lVar9 + 0x50) + 0x10), lVar9 == 0)) goto code_r0x014cf9bc;
        lVar9 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar9,0);
        fVar25 = *(float *)(lVar9 + 0x104);
        fVar30 = *(float *)(lVar9 + 0x108);
        fVar23 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar9 + 0x100),fVar25,fVar30,0);
        fVar28 = *(float *)(lVar8 + 8);
        fVar23 = fVar23 * fVar28;
        fVar25 = fVar25 * fVar28;
        fVar30 = fVar30 * fVar28;
        fStack_21c = fVar26;
        fStack_218 = fVar29;
      }
      if ((lVar11 != 0) && (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar23,fVar25,fVar30,lVar11,0), lVar9 != 0)) {
        puStack_1f8 = &UNK_014cf984;
        uStack_220 = uVar22;
        lStack_210 = lVar8;
        lStack_208 = lVar11;
        pppppppuStack_200 = &pppppppuStack_190;
        if (pcRam0000000003ec1950 == (code *)0x0) {
          pcRam0000000003ec1950 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        plVar7 = (long *)(*pcRam0000000003ec1950)(lVar9,&uStack_220);
        return plVar7;
      }
code_r0x014cf9bc:
      plVar7 = (long *)func_0x00f78af4();
      return plVar7;
    }
  }
  plVar7 = (long *)func_0x00f78af4();
  pplVar3 = &plStack_120;
  pcStack_108 = (code *)&Atlas_Gameplay_Usables_ProximityHomingProjectile__Destroy;
  pppppppuVar20 = &pppppppuStack_110;
  plStack_120 = plVar14;
  pppppppuStack_110 = &ppppppuStack_e0;
  if (plVar7[9] != 0) {
    lVar8 = plVar7[0x35];
    auVar35._8_8_ = lVar8;
    auVar35._0_8_ = plVar7;
    plStack_118 = plVar12;
    uVar13 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar7[9],0);
    auVar34._8_8_ = lVar8;
    auVar34._0_8_ = plStack_118;
    if (lVar8 != 0) {
      uVar32 = 0;
      /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(lVar8,uVar13);
      uVar15 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar7,0);
      plVar17 = plStack_120;
      if ((uVar15 & 1) != 0) {
        pppppppuVar20 = &pppppppuStack_110;
        plVar12 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar7,0);
        if (((ulong)plVar12 & 1) != 0) {
LAB_014ceb18:
          if ((char)plVar7[0xc] == '\0') {
            *(undefined1 *)(plVar7 + 0xc) = 1;
            *(undefined1 *)((long)plVar7 + 0x61) = 1;
            return plVar7;
          }
          return plVar12;
        }
        plVar12 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar7,0);
        if ((plVar12 == (long *)0x0) || (plVar12[0x18] == 0)) {
          pcVar2 = Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
          auVar36 = func_0x00f78af4();
        }
        else {
          if (*(char *)(plVar12[0x18] + 0x50) != '\0') goto LAB_014ceb18;
          auVar36._8_4_ = 1;
          auVar36._0_8_ = plVar7;
          uVar32 = 1;
          pplVar3 = (long **)alStack_100;
          plVar7 = plStack_118;
          plVar17 = plStack_120;
          pppppppuVar20 = pppppppuStack_110;
          pcVar2 = pcStack_108;
        }
        plVar12 = auVar36._0_8_;
        *(long **)((long)pplVar3 + -0x20) = plVar17;
        *(long **)((long)pplVar3 + -0x18) = plVar7;
        *(undefined8 ********)((long)pplVar3 + -0x10) = pppppppuVar20;
        *(code **)((long)pplVar3 + -8) = pcVar2;
        if ((*(char *)((long)plVar12 + 300) != '\0') == uVar32) {
          return plVar12;
        }
        if (auVar36._8_4_ != 0) {
          (**(code **)(*plVar12 + 0x448))(plVar12,*(undefined8 *)(*plVar12 + 0x450));
        }
        *(char *)((long)plVar12 + 300) = (char)uVar32;
        if (((plVar12[9] != 0) && (lVar8 = *(long *)(plVar12[9] + 0x28), lVar8 != 0)) &&
           (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar8 != 0)) {
          *(long *)((long)pplVar3 + -0x30) = lVar9;
          *(undefined8 *)((long)pplVar3 + -0x28) = uVar18;
          *(undefined8 *)((long)pplVar3 + -0x20) = *(undefined8 *)((long)pplVar3 + -0x20);
          *(undefined8 *)((long)pplVar3 + -0x18) = *(undefined8 *)((long)pplVar3 + -0x18);
          *(undefined8 *)((long)pplVar3 + -0x10) = *(undefined8 *)((long)pplVar3 + -0x10);
          *(undefined8 *)((long)pplVar3 + -8) = *(undefined8 *)((long)pplVar3 + -8);
          if (pcRam0000000003ebf4c0 == (code *)0x0) {
            pcRam0000000003ebf4c0 =
                 (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar7 = (long *)(*pcRam0000000003ebf4c0)(lVar8,uVar32 ^ 1);
          return plVar7;
        }
        plVar7 = (long *)func_0x00f78af4();
        return plVar7;
      }
      puVar21 = &UNK_014d12d8;
      pplVar4 = &plStack_120;
      goto code_r0x014d12ec;
    }
  }
  plStack_118 = auVar34._0_8_;
  puVar21 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__LoseTarget;
  uVar13 = func_0x00f78af4();
  auVar35._8_8_ = auVar34._8_8_;
  auVar35._0_8_ = uVar13;
  pplVar4 = &plStack_120;
code_r0x014d12ec:
  do {
    lVar8 = auVar35._0_8_;
    *(long *)((long)pplVar4 + -0x20) = auVar35._8_8_;
    *(long **)((long)pplVar4 + -0x18) = plVar7;
    *(undefined8 ********)((long)pplVar4 + -0x10) = pppppppuVar20;
    *(undefined **)((long)pplVar4 + -8) = puVar21;
    if ((bRam0000000003eb4b8a & 1) == 0) {
      func_0x00f78a20(0x3d3b9c0);
      func_0x00f78a20(0x3d3b9c8);
      bRam0000000003eb4b8a = 1;
    }
    if (*(long *)(lVar8 + 0x1a0) != 0) {
      plVar7 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                                 (*(long *)(lVar8 + 0x1a0),0);
      if ((int)plVar7 == 0) {
        return plVar7;
      }
      if (((*(long *)(lVar8 + 0x1a0) != 0) &&
          (lVar11 = *(long *)(*(long *)(lVar8 + 0x1a0) + 0x20), lVar11 != 0)) &&
         (lVar11 = *(long *)(lVar11 + 0x90), lVar11 != 0)) {
        plVar7 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar11,0);
        if ((int)plVar7 != 0) {
          if (((*(long *)(lVar8 + 0x1a0) == 0) ||
              (lVar11 = *(long *)(*(long *)(lVar8 + 0x1a0) + 0x20), lVar11 == 0)) ||
             ((lVar11 = *(long *)(lVar11 + 0x90), lVar11 == 0 ||
              (lVar11 = *(long *)(lVar11 + 0xd0), lVar11 == 0)))) goto code_r0x014d13e4;
          plVar7 = (long *)/*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar11,lVar8,uRam0000000003d3b9c0);
          if ((int)plVar7 != 0) {
            if ((((*(long *)(lVar8 + 0x1a0) == 0) ||
                 (lVar11 = *(long *)(*(long *)(lVar8 + 0x1a0) + 0x20), lVar11 == 0)) ||
                (lVar11 = *(long *)(lVar11 + 0x90), lVar11 == 0)) ||
               (lVar11 = *(long *)(lVar11 + 0xd0), lVar11 == 0)) goto code_r0x014d13e4;
            plVar7 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar11,lVar8,uRam0000000003d3b9c8);
          }
        }
        if (*(long *)(lVar8 + 0x1a0) != 0) {
          *(undefined8 *)(*(long *)(lVar8 + 0x1a0) + 0x20) = 0;
          return plVar7;
        }
      }
    }
code_r0x014d13e4:
    auVar34 = func_0x00f78af4();
    uVar13 = auVar34._8_8_;
    plVar17 = auVar34._0_8_;
    *(ulong *)((long)pplVar4 + -0x60) = unaff_d11;
    *(ulong *)((long)pplVar4 + -0x58) = unaff_d10;
    *(ulong *)((long)pplVar4 + -0x50) = unaff_d9;
    *(ulong *)((long)pplVar4 + -0x48) = unaff_d8;
    *(undefined8 *)((long)pplVar4 + -0x40) = 0x3eb4000;
    *(long *)((long)pplVar4 + -0x38) = lVar8;
    *(undefined1 **)((long)pplVar4 + -0x30) = (undefined1 *)((long)pplVar4 + -0x10);
    *(undefined **)((long)pplVar4 + -0x28) =
         &Atlas_Gameplay_Usables_ProximityHomingProjectile__FixedUpdateGameplay;
    plVar7 = plVar17;
    if (((char)plVar17[3] == '\0') ||
       (plVar7 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar17,0),
       ((ulong)plVar7 & 1) != 0)) {
      return plVar7;
    }
    bVar5 = false;
    if (*(char *)((long)plVar17 + 0x11c) != '\0') {
      bVar5 = (char)plVar17[0x39] == '\0';
    }
    *(bool *)((long)plVar17 + 0x11c) = bVar5;
    Atlas_Gameplay_Usables_ProjectileUsable__FixedUpdateGameplay(plVar17,uVar13);
    if (plVar17[0x1f] != 0) {
      lVar8 = *(long *)(plVar17[0x1f] + 0x18);
      uVar31 = *(uint *)(plVar17 + 0x1c);
      unaff_d8 = (ulong)uVar31;
      uVar32 = *(uint *)((long)plVar17 + 0xe4);
      unaff_d9 = (ulong)uVar32;
      uVar33 = *(uint *)(plVar17 + 0x1d);
      unaff_d10 = (ulong)uVar33;
      uVar22 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
      uVar27 = /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec(uVar31,0);
      uVar13 = 0;
      if (lVar8 != 0) {
        *(undefined8 *)((long)pplVar4 + -0x40) = *(undefined8 *)((long)pplVar4 + -0x40);
        *(undefined8 *)((long)pplVar4 + -0x38) = *(undefined8 *)((long)pplVar4 + -0x38);
        *(undefined8 *)((long)pplVar4 + -0x30) = *(undefined8 *)((long)pplVar4 + -0x30);
        *(undefined8 *)((long)pplVar4 + -0x28) = *(undefined8 *)((long)pplVar4 + -0x28);
        *(undefined4 *)((long)pplVar4 + -0x50) = uVar27;
        *(uint *)((long)pplVar4 + -0x4c) = uVar32;
        *(uint *)((long)pplVar4 + -0x48) = uVar33;
        *(undefined4 *)((long)pplVar4 + -0x44) = uVar22;
        if (pcRam0000000003ec2948 == (code *)0x0) {
          pcRam0000000003ec2948 =
               (code *)func_0x00f789d4("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)"
                                       ,0);
        }
        plVar7 = (long *)(*pcRam0000000003ec2948)(lVar8,(undefined1 *)((long)pplVar4 + -0x50));
        return plVar7;
      }
    }
    auVar35 = func_0x00f78af4();
    plVar7 = auVar35._0_8_;
    *(long *)((long)pplVar4 + -0x90) = lVar9;
    *(undefined8 *)((long)pplVar4 + -0x88) = uVar18;
    *(undefined8 *)((long)pplVar4 + -0x80) = uVar13;
    *(long **)((long)pplVar4 + -0x78) = plVar17;
    *(undefined1 **)((long)pplVar4 + -0x70) = (undefined1 *)((long)pplVar4 + -0x30);
    *(undefined **)((long)pplVar4 + -0x68) =
         &Atlas_Gameplay_Usables_ProximityHomingProjectile__DeSpawn;
    pppppppuVar20 = (undefined8 *******)((long)pplVar4 + -0x70);
    uVar18 = 0x3eb4000;
    if ((bRam0000000003eb4b85 & 1) == 0) {
      func_0x00f78a20(0x3d5ff10);
      bRam0000000003eb4b85 = 1;
    }
    if (auVar35._8_4_ != 0) {
      (**(code **)(*plVar7 + 0x448))(plVar7,*(undefined8 *)(*plVar7 + 0x450));
    }
    puVar21 = &UNK_014d1508;
    pplVar4 = (long **)((long)pplVar4 + -0x90);
  } while( true );
}



// ============================================================
// RVA: 0x14d0bf8 | Atlas.Gameplay.Usables.ProximityHomingProjectile.FindKartTarget
// ============================================================

/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d12d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d1504: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014d1508) */
/* WARNING: Removing unreachable block (ram,0x014d1530) */
/* WARNING: Removing unreachable block (ram,0x014d1554) */
/* WARNING: Removing unreachable block (ram,0x014d1574) */
/* WARNING: Removing unreachable block (ram,0x014d157c) */
/* WARNING: Removing unreachable block (ram,0x014d1598) */
/* WARNING: Removing unreachable block (ram,0x014d159c) */
/* WARNING: Removing unreachable block (ram,0x014d1600) */
/* WARNING: Removing unreachable block (ram,0x014cec74) */
/* WARNING: Removing unreachable block (ram,0x014ceca0) */
/* WARNING: Removing unreachable block (ram,0x014ced3c) */
/* WARNING: Removing unreachable block (ram,0x014ced98) */
/* WARNING: Removing unreachable block (ram,0x014cee00) */
/* WARNING: Removing unreachable block (ram,0x014cee14) */
/* WARNING: Removing unreachable block (ram,0x014cee4c) */
/* WARNING: Removing unreachable block (ram,0x014cee50) */
/* WARNING: Removing unreachable block (ram,0x014cee54) */
/* WARNING: Removing unreachable block (ram,0x014cee68) */
/* WARNING: Removing unreachable block (ram,0x014cef30) */
/* WARNING: Removing unreachable block (ram,0x014cef38) */
/* WARNING: Removing unreachable block (ram,0x014cef3c) */
/* WARNING: Removing unreachable block (ram,0x014cef50) */
/* WARNING: Removing unreachable block (ram,0x014cef9c) */
/* WARNING: Removing unreachable block (ram,0x014cefbc) */
/* WARNING: Removing unreachable block (ram,0x014cefc4) */
/* WARNING: Removing unreachable block (ram,0x014cefcc) */
/* WARNING: Removing unreachable block (ram,0x014cf018) */
/* WARNING: Removing unreachable block (ram,0x014cf030) */
/* WARNING: Removing unreachable block (ram,0x014cf040) */
/* WARNING: Removing unreachable block (ram,0x014cf048) */
/* WARNING: Removing unreachable block (ram,0x014cf054) */
/* WARNING: Removing unreachable block (ram,0x014cf068) */
/* WARNING: Removing unreachable block (ram,0x014cf074) */
/* WARNING: Removing unreachable block (ram,0x014cf088) */
/* WARNING: Removing unreachable block (ram,0x014cf08c) */
/* WARNING: Removing unreachable block (ram,0x014cf090) */
/* WARNING: Removing unreachable block (ram,0x014cf0b0) */
/* WARNING: Removing unreachable block (ram,0x014cf0ec) */
/* WARNING: Removing unreachable block (ram,0x014cf0fc) */
/* WARNING: Removing unreachable block (ram,0x014cf108) */
/* WARNING: Removing unreachable block (ram,0x014cf10c) */
/* WARNING: Removing unreachable block (ram,0x014cf118) */
/* WARNING: Removing unreachable block (ram,0x014cf124) */
/* WARNING: Removing unreachable block (ram,0x014cf13c) */
/* WARNING: Removing unreachable block (ram,0x014cf148) */
/* WARNING: Removing unreachable block (ram,0x014cf1b0) */
/* WARNING: Removing unreachable block (ram,0x014cf1b4) */
/* WARNING: Removing unreachable block (ram,0x014cf1f0) */
/* WARNING: Removing unreachable block (ram,0x014cf1b8) */
/* WARNING: Removing unreachable block (ram,0x014cf1c0) */
/* WARNING: Removing unreachable block (ram,0x014cf1a0) */
/* WARNING: Removing unreachable block (ram,0x014cece4) */
/* WARNING: Removing unreachable block (ram,0x014d15d0) */
/* WARNING: Removing unreachable block (ram,0x014d15f0) */
/* WARNING: Removing unreachable block (ram,0x014d1510) */
/* WARNING: Removing unreachable block (ram,0x01a3f3c8) */
/* WARNING: Removing unreachable block (ram,0x01a3f3f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f40c) */
/* WARNING: Removing unreachable block (ram,0x01a3f410) */
/* WARNING: Removing unreachable block (ram,0x01a3f424) */
/* WARNING: Removing unreachable block (ram,0x01a3f42c) */
/* WARNING: Removing unreachable block (ram,0x01a3f430) */
/* WARNING: Removing unreachable block (ram,0x01a3f444) */
/* WARNING: Removing unreachable block (ram,0x01a3f450) */
/* WARNING: Removing unreachable block (ram,0x01a3f454) */
/* WARNING: Removing unreachable block (ram,0x01a3f488) */
/* WARNING: Removing unreachable block (ram,0x01a3f490) */
/* WARNING: Removing unreachable block (ram,0x01a3f494) */
/* WARNING: Removing unreachable block (ram,0x01a3f4a4) */
/* WARNING: Removing unreachable block (ram,0x01a3f4b4) */
/* WARNING: Removing unreachable block (ram,0x01a3f500) */
/* WARNING: Removing unreachable block (ram,0x01a3f540) */
/* WARNING: Removing unreachable block (ram,0x01a3f590) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f4) */
/* WARNING: Removing unreachable block (ram,0x01a3f594) */
/* WARNING: Removing unreachable block (ram,0x01a3f5dc) */
/* WARNING: Removing unreachable block (ram,0x01a3f648) */
/* WARNING: Removing unreachable block (ram,0x01a3f64c) */
/* WARNING: Removing unreachable block (ram,0x01a3f660) */
/* WARNING: Removing unreachable block (ram,0x01a3f668) */
/* WARNING: Removing unreachable block (ram,0x01a3f690) */
/* WARNING: Removing unreachable block (ram,0x01a3f674) */
/* WARNING: Removing unreachable block (ram,0x01a3f680) */
/* WARNING: Removing unreachable block (ram,0x01a3f69c) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f718) */
/* WARNING: Removing unreachable block (ram,0x01a3f730) */
/* WARNING: Removing unreachable block (ram,0x01a3f750) */
/* WARNING: Removing unreachable block (ram,0x01a3f79c) */
/* WARNING: Removing unreachable block (ram,0x01a3f7d8) */
/* WARNING: Removing unreachable block (ram,0x01a3f7ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f7f4) */
/* WARNING: Removing unreachable block (ram,0x01a3f808) */
/* WARNING: Removing unreachable block (ram,0x01a3f81c) */
/* WARNING: Removing unreachable block (ram,0x01a3f968) */
/* WARNING: Removing unreachable block (ram,0x01a3f830) */
/* WARNING: Removing unreachable block (ram,0x01a3f85c) */
/* WARNING: Removing unreachable block (ram,0x01a3f8b8) */
/* WARNING: Removing unreachable block (ram,0x01a3f8bc) */
/* WARNING: Removing unreachable block (ram,0x01a3f8cc) */
/* WARNING: Removing unreachable block (ram,0x01a3f8d4) */
/* WARNING: Removing unreachable block (ram,0x01a3f8e4) */
/* WARNING: Removing unreachable block (ram,0x01a3f8ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f914) */
/* WARNING: Removing unreachable block (ram,0x01a3f8f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f904) */
/* WARNING: Removing unreachable block (ram,0x01a3f920) */
/* WARNING: Removing unreachable block (ram,0x01a3f96c) */
/* WARNING: Removing unreachable block (ram,0x01a3f990) */
/* WARNING: Removing unreachable block (ram,0x01a3f9a8) */
/* WARNING: Removing unreachable block (ram,0x01a3fa08) */
/* WARNING: Removing unreachable block (ram,0x01a3f9d8) */
/* WARNING: Removing unreachable block (ram,0x01a3f998) */
/* WARNING: Removing unreachable block (ram,0x01a3f938) */
/* WARNING: Removing unreachable block (ram,0x01a3f870) */
/* WARNING: Removing unreachable block (ram,0x01a3f958) */
/* WARNING: Removing unreachable block (ram,0x01a3f884) */
/* WARNING: Removing unreachable block (ram,0x01a3f960) */
/* WARNING: Removing unreachable block (ram,0x01a3f898) */
/* WARNING: Removing unreachable block (ram,0x01a3f950) */
/* WARNING: Removing unreachable block (ram,0x01a3f964) */
/* WARNING: Removing unreachable block (ram,0x01a3f8a0) */
/* WARNING: Removing unreachable block (ram,0x01a3f770) */
/* WARNING: Removing unreachable block (ram,0x01a3f720) */
/* WARNING: Removing unreachable block (ram,0x01a3f6b4) */
/* WARNING: Removing unreachable block (ram,0x01a3f5ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f600) */
/* WARNING: Removing unreachable block (ram,0x01a3f608) */
/* WARNING: Removing unreachable block (ram,0x01a3f6d4) */
/* WARNING: Removing unreachable block (ram,0x01a3f60c) */
/* WARNING: Removing unreachable block (ram,0x01a3f6dc) */
/* WARNING: Removing unreachable block (ram,0x01a3f620) */
/* WARNING: Removing unreachable block (ram,0x01a3f62c) */
/* WARNING: Removing unreachable block (ram,0x01a3f634) */
/* WARNING: Removing unreachable block (ram,0x01a3f6ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f0) */
/* WARNING: Removing unreachable block (ram,0x01a3f638) */
/* WARNING: Removing unreachable block (ram,0x01a3f4d8) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Gameplay_Usables_ProximityHomingProjectile__FindKartTarget
                 (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  long **pplVar3;
  long **pplVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  int extraout_w1;
  long extraout_x1;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *******pppppppuVar20;
  undefined *puVar21;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  ulong unaff_d8;
  uint uVar32;
  ulong unaff_d9;
  uint uVar33;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined4 uStack_200;
  float fStack_1fc;
  float fStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 *******pppppppuStack_170;
  code *pcStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *******pppppppuStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined8 *******pppppppuStack_f0;
  code *pcStack_e8;
  long alStack_e0 [2];
  long *plStack_d0;
  long *plStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plVar12;
  
  if ((bRam0000000003eb4b89 & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b89 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  lVar7 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_4,0);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x40) == 0)) ||
     (plVar16 = *(long **)(*(long *)(lVar7 + 0x40) + 0x28), plVar16 == (long *)0x0)) {
    func_0x00f78af4();
  }
  else {
    lVar7 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_014d0ce0;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)func_0x00fac1f0(plVar16,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
LAB_014d0ce0:
    plVar16 = (long *)(*(code *)*puVar8)(plVar16,puVar8[1]);
    if (plVar16 != (long *)0x0) {
      plVar17 = (long *)0x0;
      fVar28 = 3.4028235e+38;
code_r0x014d0d10:
      lVar7 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
            goto code_r0x014d0d5c;
          }
          piVar15 = piVar15 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar16,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014d0d5c:
      uVar14 = (*(code *)*puVar8)(plVar16,puVar8[1]);
      if ((uVar14 & 1) == 0) {
        lVar7 = 0;
        goto joined_r0x014d0ec0;
      }
      lVar7 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
            goto code_r0x014d0db8;
          }
          piVar15 = piVar15 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar16,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014d0db8:
      lVar7 = (*(code *)*puVar8)(plVar16,puVar8[1]);
      if (lVar7 != 0) {
        if (*(long *)(lVar7 + 0x10) != *(long *)(param_4 + 0x28)) {
          if (*(long *)(param_4 + 0x1a0) == 0) {
            func_0x00f78af4();
            goto code_r0x014d0fb0;
          }
          fVar24 = (float)Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                                    (*(long *)(param_4 + 0x1a0),*(long *)(lVar7 + 0x10),0);
          unaff_d8 = (ulong)(uint)fVar24;
          lVar9 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                            (param_4);
          if (lVar9 == 0) {
            func_0x00f78af4();
            goto code_r0x014d0fb0;
          }
          uStack_88 = *(undefined8 *)(lVar9 + 0xb8);
          uStack_90 = *(undefined8 *)(lVar9 + 0xb0);
          fVar25 = (float)/*Atlas.Definitions.ProximityHomingProjectileDefinition.ProximityHomingProjectileData$$get_TrackingRange*/ func_0x01563398(&uStack_90,0);
          if (fVar24 <= fVar25 * fVar25) {
            if (*(long *)(lVar7 + 0x10) == 0) {
              func_0x00f78af4();
              goto code_r0x014d0fb0;
            }
            lVar9 = *(long *)(*(long *)(lVar7 + 0x10) + 0x18);
            if (lVar9 == 0) {
              func_0x00f78af4();
              goto code_r0x014d0fb0;
            }
            fVar25 = (float)Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre
                                      (lVar9,0);
            if (*(long *)(param_4 + 0x100) == 0) {
              func_0x00f78af4();
              goto code_r0x014d0fb0;
            }
            unaff_d9 = (ulong)(uint)fVar25;
            unaff_d10 = (ulong)(uint)param_2;
            unaff_d11 = (ulong)(uint)param_3;
            fVar30 = param_2;
            fVar23 = param_3;
            fVar26 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_4 + 0x100),0);
            param_2 = param_2 - fVar30;
            param_3 = param_3 - fVar23;
            uVar14 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(fVar25 - fVar26,param_2,param_3,*(undefined4 *)(param_4 + 0xe0)
                                     ,*(undefined4 *)(param_4 + 0xe4),
                                     *(undefined4 *)(param_4 + 0xe8),
                                     *(undefined4 *)(param_4 + 0x1b4),0);
            if ((uVar14 & 1) != 0) {
              if (*(long *)(param_4 + 0x100) == 0) {
                func_0x00f78af4();
                goto code_r0x014d0fb0;
              }
              lVar9 = *(long *)(param_4 + 0x1a0);
              /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_4 + 0x100),0);
              if (lVar9 == 0) {
                func_0x00f78af4();
                goto code_r0x014d0fb0;
              }
              bVar6 = Atlas_Gameplay_Usables_HomingProjectileLogic__HasLoSToKart(lVar9,lVar7,0);
              if ((bVar6 & (fVar24 < fVar28 || plVar17 == (long *)0x0)) != 0) {
                plVar17 = *(long **)(lVar7 + 0x10);
                fVar28 = fVar24;
              }
            }
          }
        }
        goto code_r0x014d0d10;
      }
      func_0x00f78af4();
      goto code_r0x014d0fb0;
    }
  }
  func_0x00f78af4();
code_r0x014d0fb0:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14d0fb4);
  (*pcVar2)();
joined_r0x014d0ec0:
  if (plVar16 != (long *)0x0) {
    lVar9 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x014d0f18;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)func_0x00fac1f0(plVar16,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014d0f18:
    (*(code *)*puVar8)(plVar16,puVar8[1]);
  }
  if (lVar7 == 0) {
    if (*(long *)(param_4 + 0x1c0) == 0) {
      *(long **)(param_4 + 0x1c0) = plVar17;
    }
    *(undefined1 *)(param_4 + 0x1c9) = 1;
    return plVar17;
  }
  func_0x00f78ac0(lVar7,0);
  plVar17 = (long *)0x0;
  if (extraout_w1 != 1) goto code_r0x014d1028;
  plVar10 = (long *)___cxa_begin_catch();
  lVar7 = *plVar10;
  ___cxa_end_catch();
  goto joined_r0x014d0ec0;
code_r0x014d1028:
  plVar17 = (long *)__Unwind_Resume();
  puStack_98 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__EarlyUpdate;
  plStack_b0 = plVar16;
  lStack_a8 = param_4;
  pppppuStack_a0 = (undefined8 *****)&stack0xfffffffffffffff0;
  plVar10 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate();
  if (plVar17[0x19] != 0) {
    if ((*(char *)(plVar17[0x19] + 0x44) == '\0') &&
       (plVar10 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag
                                    (plVar17), (int)plVar10 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x014d1078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar16 = (long *)(**(code **)(*plVar17 + 0x428))
                                  ((int)plVar17[0x36],plVar17,*(undefined8 *)(*plVar17 + 0x430));
      return plVar16;
    }
    return plVar10;
  }
  auVar34 = func_0x00f78af4();
  plVar12 = auVar34._8_8_;
  plVar10 = auVar34._0_8_;
  alStack_e0[1] = 0;
  puStack_b8 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTriggerEnter;
  uVar18 = 0x3eb4000;
  alStack_e0[0] = lVar7;
  plStack_d0 = plVar16;
  plStack_c8 = plVar17;
  ppppppuStack_c0 = &pppppuStack_a0;
  if ((bRam0000000003eb4b84 & 1) == 0) {
    func_0x00f78a20(0x3d207e8);
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b84 = 1;
  }
  plVar16 = (long *)Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(plVar10,plVar12,0);
  if ((char)plVar10[0xc] != '\0') {
    return plVar16;
  }
  if (*(char *)((long)plVar10 + 300) != '\0') {
    return plVar16;
  }
  plVar16 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar10,0);
  if (((ulong)plVar16 & 1) != 0) {
    return plVar16;
  }
  if (plVar12 != (long *)0x0) {
    uVar18 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar12,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar16 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar18,0,0);
    if ((int)plVar16 == 0) {
      return plVar16;
    }
    lVar9 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar12,0);
    if (lVar9 != 0) {
      lVar7 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar9,uRam0000000003d534a0);
      if ((lVar7 == 0) ||
         (plVar16 = (long *)func_0x0001c7d0(0,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ uRam0000000003d21fc8,lVar7), plVar16 == (long *)0x0))
      {
        return (long *)0x0;
      }
      lVar7 = *plVar16;
      if ((*(byte *)(lVar7 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8)
          != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
        if (*(byte *)(lVar7 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300)) {
          return plVar16;
        }
        if (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300) * 8 + -8
                     ) == /*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8) {
                    /* WARNING: Could not recover jumptable at 0x014d122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar16 = (long *)(**(code **)(*plVar10 + 0x228))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x230));
          return plVar16;
        }
        return plVar16;
      }
      plVar17 = (long *)(**(code **)(*plVar10 + 0x328))
                                  (plVar10,plVar16,1,*(undefined8 *)(*plVar10 + 0x330));
      if ((int)plVar17 == 0) {
        return plVar17;
      }
      Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag(plVar10,1);
      uVar14 = (ulong)*(uint *)((long)plVar16 + 0x54);
      if ((bRam0000000003eb4b74 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b74 = 1;
      }
      lVar7 = plVar10[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar16 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar7,0,0);
      if (((ulong)plVar16 & 1) != 0) {
        return plVar16;
      }
      lVar9 = plVar10[0x19];
      if (lVar9 != 0) {
        if (*(char *)(lVar9 + 0x44) != '\0') {
          *(ulong *)(lVar9 + 0x48) =
               uVar14 << ((ulong)*(uint *)((long)plVar10 + 0x19c) & 0x3f) | *(ulong *)(lVar9 + 0x48)
          ;
          return plVar16;
        }
        return plVar16;
      }
      lVar9 = func_0x00f78af4();
      uStack_110 = 0x3d23990;
      pcStack_e8 = Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
      lStack_108 = lVar7;
      plStack_100 = plVar10;
      plStack_f8 = (long *)uVar14;
      pppppppuStack_f0 = &ppppppuStack_c0;
      if ((bRam0000000003eb4b75 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b75 = 1;
      }
      uVar18 = *(undefined8 *)(lVar9 + 200);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = 0;
      uVar14 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar18,0);
      if ((uVar14 & 1) != 0) {
        return (long *)0x0;
      }
      lVar13 = *(long *)(lVar9 + 200);
      if (lVar13 != 0) {
        if (*(char *)(lVar13 + 0x44) != '\0') {
          return (long *)0x0;
        }
        return (long *)(ulong)(*(char *)(lVar13 + 0x28) == '\x01');
      }
      plVar17 = (long *)func_0x00f78af4();
      uStack_140 = 0x3d23990;
      uStack_138 = 0x3d23990;
      pcStack_118 = Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
      plVar16 = plVar17;
      uStack_160 = unaff_d11;
      uStack_158 = unaff_d10;
      uStack_150 = unaff_d9;
      uStack_148 = unaff_d8;
      uStack_130 = uVar18;
      lStack_128 = lVar9;
      pppppppuStack_120 = &pppppppuStack_f0;
      if ((bRam0000000003eb4b78 & 1) == 0) {
        plVar16 = (long *)func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b78 = 1;
      }
      if (0.0 < *(float *)((long)plVar17 + 0xdc)) {
        return plVar16;
      }
      fVar28 = *(float *)((long)plVar17 + 0xe4);
      fVar24 = *(float *)(plVar17 + 0x1d);
      plVar16 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar17[0x1c],fVar28,fVar24,extraout_s0,param_2,param_3
                                        ,0);
      fVar28 = param_3 * fVar24 + extraout_s0 * extraout_s0_00 + param_2 * fVar28;
      if (fVar28 < 0.0) {
        return plVar16;
      }
      *(float *)(plVar17 + 0x1c) = extraout_s0_00;
      *(undefined4 *)((long)plVar17 + 0xe4) = 0;
      *(float *)(plVar17 + 0x1d) = fVar24;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar17 + 0x1c,0);
      *(undefined4 *)((long)plVar17 + 0xdc) = 0x3d4ccccd;
      if (0.0 < *(float *)(plVar17 + 0x1b)) {
        lVar7 = plVar17[0x1a];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar16 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar7,0);
        if (((ulong)plVar16 & 1) != 0) {
          return plVar16;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = 0;
        plVar16 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
        if (((ulong)plVar16 & 1) != 0) {
          return plVar16;
        }
      }
      *(undefined4 *)(plVar17 + 0x1b) = 0x3e4ccccd;
      iVar1 = *(int *)((long)plVar17 + 0xec) + 1;
      *(int *)((long)plVar17 + 0xec) = iVar1;
      lVar9 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar17);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x90) < iVar1) {
          (**(code **)(*plVar17 + 0x228))(plVar17,*(undefined8 *)(*plVar17 + 0x230));
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = 0;
        plVar16 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
        if ((int)plVar16 == 0) {
          return plVar16;
        }
        if (extraout_x1 != 0) {
          plVar16 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
          plVar17[0x1a] = (long)plVar16;
          return plVar16;
        }
      }
      auVar34 = func_0x00f78af4();
      lVar13 = auVar34._8_8_;
      lVar9 = auVar34._0_8_;
      pcStack_168 = Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
      pppppppuStack_170 = &pppppppuStack_120;
      if ((bRam0000000003eb4b79 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b79 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar16 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar13,0,0);
      if (((ulong)plVar16 & 1) != 0) {
        return plVar16;
      }
      if (*(long *)(lVar9 + 0x100) == 0) goto code_r0x014cf9bc;
      uVar22 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar9 + 0x100),0);
      fVar26 = *(float *)(lVar7 + 0xc);
      fVar29 = *(float *)(lVar9 + 0xe0);
      fVar23 = *(float *)(lVar9 + 0x128) * fVar26;
      lVar19 = *(long *)(lVar9 + 0x50);
      fVar25 = fVar26;
      fVar30 = fVar29;
      fStack_1fc = fVar28;
      fStack_1f8 = fVar24;
      if (lVar19 != 0) {
        if (*(long *)(lVar9 + 0x100) == 0) goto code_r0x014cf9bc;
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar23,fVar26,fVar29,*(undefined4 *)(lVar9 + 0xe4),
                        *(undefined4 *)(lVar9 + 0xe8),*(long *)(lVar9 + 0x100),0);
        uVar22 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar9,lVar19,0);
        if ((*(long *)(lVar9 + 0x50) == 0) ||
           (lVar9 = *(long *)(*(long *)(lVar9 + 0x50) + 0x10), lVar9 == 0)) goto code_r0x014cf9bc;
        lVar9 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar9,0);
        fVar25 = *(float *)(lVar9 + 0x104);
        fVar30 = *(float *)(lVar9 + 0x108);
        fVar23 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar9 + 0x100),fVar25,fVar30,0);
        fVar28 = *(float *)(lVar7 + 8);
        fVar23 = fVar23 * fVar28;
        fVar25 = fVar25 * fVar28;
        fVar30 = fVar30 * fVar28;
        fStack_1fc = fVar26;
        fStack_1f8 = fVar29;
      }
      if ((lVar13 != 0) && (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar23,fVar25,fVar30,lVar13,0), lVar9 != 0)) {
        puStack_1d8 = &UNK_014cf984;
        uStack_200 = uVar22;
        lStack_1f0 = lVar7;
        lStack_1e8 = lVar13;
        pppppppuStack_1e0 = &pppppppuStack_170;
        if (pcRam0000000003ec1950 == (code *)0x0) {
          pcRam0000000003ec1950 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        plVar16 = (long *)(*pcRam0000000003ec1950)(lVar9,&uStack_200);
        return plVar16;
      }
code_r0x014cf9bc:
      plVar16 = (long *)func_0x00f78af4();
      return plVar16;
    }
  }
  plVar16 = (long *)func_0x00f78af4();
  pplVar3 = &plStack_100;
  pcStack_e8 = (code *)&Atlas_Gameplay_Usables_ProximityHomingProjectile__Destroy;
  pppppppuVar20 = &pppppppuStack_f0;
  plStack_100 = plVar12;
  pppppppuStack_f0 = &ppppppuStack_c0;
  if (plVar16[9] != 0) {
    lVar9 = plVar16[0x35];
    auVar35._8_8_ = lVar9;
    auVar35._0_8_ = plVar16;
    plStack_f8 = plVar10;
    uVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar16[9],0);
    auVar34._8_8_ = lVar9;
    auVar34._0_8_ = plStack_f8;
    if (lVar9 != 0) {
      uVar32 = 0;
      /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(lVar9,uVar11);
      uVar14 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar16,0);
      plVar17 = plStack_100;
      if ((uVar14 & 1) != 0) {
        pppppppuVar20 = &pppppppuStack_f0;
        plVar10 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar16,0);
        if (((ulong)plVar10 & 1) != 0) {
LAB_014ceb18:
          if ((char)plVar16[0xc] == '\0') {
            *(undefined1 *)(plVar16 + 0xc) = 1;
            *(undefined1 *)((long)plVar16 + 0x61) = 1;
            return plVar16;
          }
          return plVar10;
        }
        plVar10 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar16,0);
        if ((plVar10 == (long *)0x0) || (plVar10[0x18] == 0)) {
          pcVar2 = Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
          auVar36 = func_0x00f78af4();
        }
        else {
          if (*(char *)(plVar10[0x18] + 0x50) != '\0') goto LAB_014ceb18;
          auVar36._8_4_ = 1;
          auVar36._0_8_ = plVar16;
          uVar32 = 1;
          pplVar3 = (long **)alStack_e0;
          plVar16 = plStack_f8;
          plVar17 = plStack_100;
          pppppppuVar20 = pppppppuStack_f0;
          pcVar2 = pcStack_e8;
        }
        plVar10 = auVar36._0_8_;
        *(long **)((long)pplVar3 + -0x20) = plVar17;
        *(long **)((long)pplVar3 + -0x18) = plVar16;
        *(undefined8 ********)((long)pplVar3 + -0x10) = pppppppuVar20;
        *(code **)((long)pplVar3 + -8) = pcVar2;
        if ((*(char *)((long)plVar10 + 300) != '\0') == uVar32) {
          return plVar10;
        }
        if (auVar36._8_4_ != 0) {
          (**(code **)(*plVar10 + 0x448))(plVar10,*(undefined8 *)(*plVar10 + 0x450));
        }
        *(char *)((long)plVar10 + 300) = (char)uVar32;
        if (((plVar10[9] != 0) && (lVar9 = *(long *)(plVar10[9] + 0x28), lVar9 != 0)) &&
           (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0), lVar9 != 0)) {
          *(long *)((long)pplVar3 + -0x30) = lVar7;
          *(undefined8 *)((long)pplVar3 + -0x28) = uVar18;
          *(undefined8 *)((long)pplVar3 + -0x20) = *(undefined8 *)((long)pplVar3 + -0x20);
          *(undefined8 *)((long)pplVar3 + -0x18) = *(undefined8 *)((long)pplVar3 + -0x18);
          *(undefined8 *)((long)pplVar3 + -0x10) = *(undefined8 *)((long)pplVar3 + -0x10);
          *(undefined8 *)((long)pplVar3 + -8) = *(undefined8 *)((long)pplVar3 + -8);
          if (pcRam0000000003ebf4c0 == (code *)0x0) {
            pcRam0000000003ebf4c0 =
                 (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar16 = (long *)(*pcRam0000000003ebf4c0)(lVar9,uVar32 ^ 1);
          return plVar16;
        }
        plVar16 = (long *)func_0x00f78af4();
        return plVar16;
      }
      puVar21 = &UNK_014d12d8;
      pplVar4 = &plStack_100;
      goto code_r0x014d12ec;
    }
  }
  plStack_f8 = auVar34._0_8_;
  puVar21 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__LoseTarget;
  uVar11 = func_0x00f78af4();
  auVar35._8_8_ = auVar34._8_8_;
  auVar35._0_8_ = uVar11;
  pplVar4 = &plStack_100;
code_r0x014d12ec:
  do {
    lVar9 = auVar35._0_8_;
    *(long *)((long)pplVar4 + -0x20) = auVar35._8_8_;
    *(long **)((long)pplVar4 + -0x18) = plVar16;
    *(undefined8 ********)((long)pplVar4 + -0x10) = pppppppuVar20;
    *(undefined **)((long)pplVar4 + -8) = puVar21;
    if ((bRam0000000003eb4b8a & 1) == 0) {
      func_0x00f78a20(0x3d3b9c0);
      func_0x00f78a20(0x3d3b9c8);
      bRam0000000003eb4b8a = 1;
    }
    if (*(long *)(lVar9 + 0x1a0) != 0) {
      plVar16 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                                  (*(long *)(lVar9 + 0x1a0),0);
      if ((int)plVar16 == 0) {
        return plVar16;
      }
      if (((*(long *)(lVar9 + 0x1a0) != 0) &&
          (lVar13 = *(long *)(*(long *)(lVar9 + 0x1a0) + 0x20), lVar13 != 0)) &&
         (lVar13 = *(long *)(lVar13 + 0x90), lVar13 != 0)) {
        plVar16 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar13,0);
        if ((int)plVar16 != 0) {
          if (((*(long *)(lVar9 + 0x1a0) == 0) ||
              (lVar13 = *(long *)(*(long *)(lVar9 + 0x1a0) + 0x20), lVar13 == 0)) ||
             ((lVar13 = *(long *)(lVar13 + 0x90), lVar13 == 0 ||
              (lVar13 = *(long *)(lVar13 + 0xd0), lVar13 == 0)))) goto code_r0x014d13e4;
          plVar16 = (long *)/*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar13,lVar9,uRam0000000003d3b9c0);
          if ((int)plVar16 != 0) {
            if ((((*(long *)(lVar9 + 0x1a0) == 0) ||
                 (lVar13 = *(long *)(*(long *)(lVar9 + 0x1a0) + 0x20), lVar13 == 0)) ||
                (lVar13 = *(long *)(lVar13 + 0x90), lVar13 == 0)) ||
               (lVar13 = *(long *)(lVar13 + 0xd0), lVar13 == 0)) goto code_r0x014d13e4;
            plVar16 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar13,lVar9,uRam0000000003d3b9c8);
          }
        }
        if (*(long *)(lVar9 + 0x1a0) != 0) {
          *(undefined8 *)(*(long *)(lVar9 + 0x1a0) + 0x20) = 0;
          return plVar16;
        }
      }
    }
code_r0x014d13e4:
    auVar34 = func_0x00f78af4();
    uVar11 = auVar34._8_8_;
    plVar17 = auVar34._0_8_;
    *(ulong *)((long)pplVar4 + -0x60) = unaff_d11;
    *(ulong *)((long)pplVar4 + -0x58) = unaff_d10;
    *(ulong *)((long)pplVar4 + -0x50) = unaff_d9;
    *(ulong *)((long)pplVar4 + -0x48) = unaff_d8;
    *(undefined8 *)((long)pplVar4 + -0x40) = 0x3eb4000;
    *(long *)((long)pplVar4 + -0x38) = lVar9;
    *(undefined1 **)((long)pplVar4 + -0x30) = (undefined1 *)((long)pplVar4 + -0x10);
    *(undefined **)((long)pplVar4 + -0x28) =
         &Atlas_Gameplay_Usables_ProximityHomingProjectile__FixedUpdateGameplay;
    plVar16 = plVar17;
    if (((char)plVar17[3] == '\0') ||
       (plVar16 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar17,0),
       ((ulong)plVar16 & 1) != 0)) {
      return plVar16;
    }
    bVar5 = false;
    if (*(char *)((long)plVar17 + 0x11c) != '\0') {
      bVar5 = (char)plVar17[0x39] == '\0';
    }
    *(bool *)((long)plVar17 + 0x11c) = bVar5;
    Atlas_Gameplay_Usables_ProjectileUsable__FixedUpdateGameplay(plVar17,uVar11);
    if (plVar17[0x1f] != 0) {
      lVar9 = *(long *)(plVar17[0x1f] + 0x18);
      uVar31 = *(uint *)(plVar17 + 0x1c);
      unaff_d8 = (ulong)uVar31;
      uVar32 = *(uint *)((long)plVar17 + 0xe4);
      unaff_d9 = (ulong)uVar32;
      uVar33 = *(uint *)(plVar17 + 0x1d);
      unaff_d10 = (ulong)uVar33;
      uVar22 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
      uVar27 = /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec(uVar31,0);
      uVar11 = 0;
      if (lVar9 != 0) {
        *(undefined8 *)((long)pplVar4 + -0x40) = *(undefined8 *)((long)pplVar4 + -0x40);
        *(undefined8 *)((long)pplVar4 + -0x38) = *(undefined8 *)((long)pplVar4 + -0x38);
        *(undefined8 *)((long)pplVar4 + -0x30) = *(undefined8 *)((long)pplVar4 + -0x30);
        *(undefined8 *)((long)pplVar4 + -0x28) = *(undefined8 *)((long)pplVar4 + -0x28);
        *(undefined4 *)((long)pplVar4 + -0x50) = uVar27;
        *(uint *)((long)pplVar4 + -0x4c) = uVar32;
        *(uint *)((long)pplVar4 + -0x48) = uVar33;
        *(undefined4 *)((long)pplVar4 + -0x44) = uVar22;
        if (pcRam0000000003ec2948 == (code *)0x0) {
          pcRam0000000003ec2948 =
               (code *)func_0x00f789d4("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)"
                                       ,0);
        }
        plVar16 = (long *)(*pcRam0000000003ec2948)(lVar9,(undefined1 *)((long)pplVar4 + -0x50));
        return plVar16;
      }
    }
    auVar35 = func_0x00f78af4();
    plVar16 = auVar35._0_8_;
    *(long *)((long)pplVar4 + -0x90) = lVar7;
    *(undefined8 *)((long)pplVar4 + -0x88) = uVar18;
    *(undefined8 *)((long)pplVar4 + -0x80) = uVar11;
    *(long **)((long)pplVar4 + -0x78) = plVar17;
    *(undefined1 **)((long)pplVar4 + -0x70) = (undefined1 *)((long)pplVar4 + -0x30);
    *(undefined **)((long)pplVar4 + -0x68) =
         &Atlas_Gameplay_Usables_ProximityHomingProjectile__DeSpawn;
    pppppppuVar20 = (undefined8 *******)((long)pplVar4 + -0x70);
    uVar18 = 0x3eb4000;
    if ((bRam0000000003eb4b85 & 1) == 0) {
      func_0x00f78a20(0x3d5ff10);
      bRam0000000003eb4b85 = 1;
    }
    if (auVar35._8_4_ != 0) {
      (**(code **)(*plVar16 + 0x448))(plVar16,*(undefined8 *)(*plVar16 + 0x450));
    }
    puVar21 = &UNK_014d1508;
    pplVar4 = (long **)((long)pplVar4 + -0x90);
  } while( true );
}



// ============================================================
// RVA: 0x14d102c | Atlas.Gameplay.Usables.ProximityHomingProjectile.EarlyUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d12d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d1504: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014d1508) */
/* WARNING: Removing unreachable block (ram,0x014d1530) */
/* WARNING: Removing unreachable block (ram,0x014d1554) */
/* WARNING: Removing unreachable block (ram,0x014d1574) */
/* WARNING: Removing unreachable block (ram,0x014d157c) */
/* WARNING: Removing unreachable block (ram,0x014d1598) */
/* WARNING: Removing unreachable block (ram,0x014d159c) */
/* WARNING: Removing unreachable block (ram,0x014d1600) */
/* WARNING: Removing unreachable block (ram,0x014cec74) */
/* WARNING: Removing unreachable block (ram,0x014ceca0) */
/* WARNING: Removing unreachable block (ram,0x014ced3c) */
/* WARNING: Removing unreachable block (ram,0x014ced98) */
/* WARNING: Removing unreachable block (ram,0x014cee00) */
/* WARNING: Removing unreachable block (ram,0x014cee14) */
/* WARNING: Removing unreachable block (ram,0x014cee4c) */
/* WARNING: Removing unreachable block (ram,0x014cee50) */
/* WARNING: Removing unreachable block (ram,0x014cee54) */
/* WARNING: Removing unreachable block (ram,0x014cee68) */
/* WARNING: Removing unreachable block (ram,0x014cef30) */
/* WARNING: Removing unreachable block (ram,0x014cef38) */
/* WARNING: Removing unreachable block (ram,0x014cef3c) */
/* WARNING: Removing unreachable block (ram,0x014cef50) */
/* WARNING: Removing unreachable block (ram,0x014cef9c) */
/* WARNING: Removing unreachable block (ram,0x014cefbc) */
/* WARNING: Removing unreachable block (ram,0x014cefc4) */
/* WARNING: Removing unreachable block (ram,0x014cefcc) */
/* WARNING: Removing unreachable block (ram,0x014cf018) */
/* WARNING: Removing unreachable block (ram,0x014cf030) */
/* WARNING: Removing unreachable block (ram,0x014cf040) */
/* WARNING: Removing unreachable block (ram,0x014cf048) */
/* WARNING: Removing unreachable block (ram,0x014cf054) */
/* WARNING: Removing unreachable block (ram,0x014cf068) */
/* WARNING: Removing unreachable block (ram,0x014cf074) */
/* WARNING: Removing unreachable block (ram,0x014cf088) */
/* WARNING: Removing unreachable block (ram,0x014cf08c) */
/* WARNING: Removing unreachable block (ram,0x014cf090) */
/* WARNING: Removing unreachable block (ram,0x014cf0b0) */
/* WARNING: Removing unreachable block (ram,0x014cf0ec) */
/* WARNING: Removing unreachable block (ram,0x014cf0fc) */
/* WARNING: Removing unreachable block (ram,0x014cf108) */
/* WARNING: Removing unreachable block (ram,0x014cf10c) */
/* WARNING: Removing unreachable block (ram,0x014cf118) */
/* WARNING: Removing unreachable block (ram,0x014cf124) */
/* WARNING: Removing unreachable block (ram,0x014cf13c) */
/* WARNING: Removing unreachable block (ram,0x014cf148) */
/* WARNING: Removing unreachable block (ram,0x014cf1b0) */
/* WARNING: Removing unreachable block (ram,0x014cf1b4) */
/* WARNING: Removing unreachable block (ram,0x014cf1f0) */
/* WARNING: Removing unreachable block (ram,0x014cf1b8) */
/* WARNING: Removing unreachable block (ram,0x014cf1c0) */
/* WARNING: Removing unreachable block (ram,0x014cf1a0) */
/* WARNING: Removing unreachable block (ram,0x014cece4) */
/* WARNING: Removing unreachable block (ram,0x014d15d0) */
/* WARNING: Removing unreachable block (ram,0x014d15f0) */
/* WARNING: Removing unreachable block (ram,0x014d1510) */
/* WARNING: Removing unreachable block (ram,0x01a3f3c8) */
/* WARNING: Removing unreachable block (ram,0x01a3f3f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f40c) */
/* WARNING: Removing unreachable block (ram,0x01a3f410) */
/* WARNING: Removing unreachable block (ram,0x01a3f424) */
/* WARNING: Removing unreachable block (ram,0x01a3f42c) */
/* WARNING: Removing unreachable block (ram,0x01a3f430) */
/* WARNING: Removing unreachable block (ram,0x01a3f444) */
/* WARNING: Removing unreachable block (ram,0x01a3f450) */
/* WARNING: Removing unreachable block (ram,0x01a3f454) */
/* WARNING: Removing unreachable block (ram,0x01a3f488) */
/* WARNING: Removing unreachable block (ram,0x01a3f490) */
/* WARNING: Removing unreachable block (ram,0x01a3f494) */
/* WARNING: Removing unreachable block (ram,0x01a3f4a4) */
/* WARNING: Removing unreachable block (ram,0x01a3f4b4) */
/* WARNING: Removing unreachable block (ram,0x01a3f500) */
/* WARNING: Removing unreachable block (ram,0x01a3f540) */
/* WARNING: Removing unreachable block (ram,0x01a3f590) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f4) */
/* WARNING: Removing unreachable block (ram,0x01a3f594) */
/* WARNING: Removing unreachable block (ram,0x01a3f5dc) */
/* WARNING: Removing unreachable block (ram,0x01a3f648) */
/* WARNING: Removing unreachable block (ram,0x01a3f64c) */
/* WARNING: Removing unreachable block (ram,0x01a3f660) */
/* WARNING: Removing unreachable block (ram,0x01a3f668) */
/* WARNING: Removing unreachable block (ram,0x01a3f690) */
/* WARNING: Removing unreachable block (ram,0x01a3f674) */
/* WARNING: Removing unreachable block (ram,0x01a3f680) */
/* WARNING: Removing unreachable block (ram,0x01a3f69c) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f718) */
/* WARNING: Removing unreachable block (ram,0x01a3f730) */
/* WARNING: Removing unreachable block (ram,0x01a3f750) */
/* WARNING: Removing unreachable block (ram,0x01a3f79c) */
/* WARNING: Removing unreachable block (ram,0x01a3f7d8) */
/* WARNING: Removing unreachable block (ram,0x01a3f7ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f7f4) */
/* WARNING: Removing unreachable block (ram,0x01a3f808) */
/* WARNING: Removing unreachable block (ram,0x01a3f81c) */
/* WARNING: Removing unreachable block (ram,0x01a3f968) */
/* WARNING: Removing unreachable block (ram,0x01a3f830) */
/* WARNING: Removing unreachable block (ram,0x01a3f85c) */
/* WARNING: Removing unreachable block (ram,0x01a3f8b8) */
/* WARNING: Removing unreachable block (ram,0x01a3f8bc) */
/* WARNING: Removing unreachable block (ram,0x01a3f8cc) */
/* WARNING: Removing unreachable block (ram,0x01a3f8d4) */
/* WARNING: Removing unreachable block (ram,0x01a3f8e4) */
/* WARNING: Removing unreachable block (ram,0x01a3f8ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f914) */
/* WARNING: Removing unreachable block (ram,0x01a3f8f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f904) */
/* WARNING: Removing unreachable block (ram,0x01a3f920) */
/* WARNING: Removing unreachable block (ram,0x01a3f96c) */
/* WARNING: Removing unreachable block (ram,0x01a3f990) */
/* WARNING: Removing unreachable block (ram,0x01a3f9a8) */
/* WARNING: Removing unreachable block (ram,0x01a3fa08) */
/* WARNING: Removing unreachable block (ram,0x01a3f9d8) */
/* WARNING: Removing unreachable block (ram,0x01a3f998) */
/* WARNING: Removing unreachable block (ram,0x01a3f938) */
/* WARNING: Removing unreachable block (ram,0x01a3f870) */
/* WARNING: Removing unreachable block (ram,0x01a3f958) */
/* WARNING: Removing unreachable block (ram,0x01a3f884) */
/* WARNING: Removing unreachable block (ram,0x01a3f960) */
/* WARNING: Removing unreachable block (ram,0x01a3f898) */
/* WARNING: Removing unreachable block (ram,0x01a3f950) */
/* WARNING: Removing unreachable block (ram,0x01a3f964) */
/* WARNING: Removing unreachable block (ram,0x01a3f8a0) */
/* WARNING: Removing unreachable block (ram,0x01a3f770) */
/* WARNING: Removing unreachable block (ram,0x01a3f720) */
/* WARNING: Removing unreachable block (ram,0x01a3f6b4) */
/* WARNING: Removing unreachable block (ram,0x01a3f5ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f600) */
/* WARNING: Removing unreachable block (ram,0x01a3f608) */
/* WARNING: Removing unreachable block (ram,0x01a3f6d4) */
/* WARNING: Removing unreachable block (ram,0x01a3f60c) */
/* WARNING: Removing unreachable block (ram,0x01a3f6dc) */
/* WARNING: Removing unreachable block (ram,0x01a3f620) */
/* WARNING: Removing unreachable block (ram,0x01a3f62c) */
/* WARNING: Removing unreachable block (ram,0x01a3f634) */
/* WARNING: Removing unreachable block (ram,0x01a3f6ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f0) */
/* WARNING: Removing unreachable block (ram,0x01a3f638) */
/* WARNING: Removing unreachable block (ram,0x01a3f4d8) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Gameplay_Usables_ProximityHomingProjectile__EarlyUpdate
                 (undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  int iVar1;
  long **pplVar2;
  long **pplVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long extraout_x1;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar15;
  code *pcVar16;
  undefined *puVar17;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  ulong unaff_d8;
  uint uVar28;
  ulong unaff_d9;
  uint uVar29;
  ulong unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  undefined4 uStack_170;
  float fStack_16c;
  float fStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined8 *******pppppppuStack_e0;
  code *pcStack_d8;
  undefined8 *******pppppppuStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 *******pppppppuStack_60;
  code *pcStack_58;
  undefined8 ******ppppppuStack_30;
  undefined *puStack_28;
  
  plVar5 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate();
  if (param_4[0x19] != 0) {
    if ((*(char *)(param_4[0x19] + 0x44) == '\0') &&
       (plVar5 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag
                                   (param_4), (int)plVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x014d1078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar5 = (long *)(**(code **)(*param_4 + 0x428))
                                 ((int)param_4[0x36],param_4,*(undefined8 *)(*param_4 + 0x430));
      return plVar5;
    }
    return plVar5;
  }
  auVar30 = func_0x00f78af4();
  plVar8 = auVar30._8_8_;
  plVar5 = auVar30._0_8_;
  puStack_28 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTriggerEnter;
  uVar13 = 0x3eb4000;
  ppppppuStack_30 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b84 & 1) == 0) {
    func_0x00f78a20(0x3d207e8);
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b84 = 1;
  }
  plVar6 = (long *)Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(plVar5,plVar8,0);
  if ((char)plVar5[0xc] != '\0') {
    return plVar6;
  }
  if (*(char *)((long)plVar5 + 300) != '\0') {
    return plVar6;
  }
  plVar6 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar5,0);
  if (((ulong)plVar6 & 1) != 0) {
    return plVar6;
  }
  if (plVar8 != (long *)0x0) {
    uVar13 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar8,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar6 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
    if ((int)plVar6 == 0) {
      return plVar6;
    }
    lVar7 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar8,0);
    if (lVar7 != 0) {
      lVar7 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar7,uRam0000000003d534a0);
      if ((lVar7 == 0) ||
         (plVar8 = (long *)func_0x0001c7d0(0,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ uRam0000000003d21fc8,lVar7), plVar8 == (long *)0x0)) {
        return (long *)0x0;
      }
      lVar7 = *plVar8;
      if ((*(byte *)(lVar7 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8)
          != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
        if (*(byte *)(lVar7 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300)) {
          return plVar8;
        }
        if (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300) * 8 + -8
                     ) == /*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8) {
                    /* WARNING: Could not recover jumptable at 0x014d122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar5 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          return plVar5;
        }
        return plVar8;
      }
      plVar6 = (long *)(**(code **)(*plVar5 + 0x328))
                                 (plVar5,plVar8,1,*(undefined8 *)(*plVar5 + 0x330));
      if ((int)plVar6 == 0) {
        return plVar6;
      }
      Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag(plVar5,1);
      uVar11 = (ulong)*(uint *)((long)plVar8 + 0x54);
      if ((bRam0000000003eb4b74 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b74 = 1;
      }
      lVar7 = plVar5[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar7,0,0);
      if (((ulong)plVar8 & 1) != 0) {
        return plVar8;
      }
      lVar12 = plVar5[0x19];
      if (lVar12 != 0) {
        if (*(char *)(lVar12 + 0x44) != '\0') {
          *(ulong *)(lVar12 + 0x48) =
               uVar11 << ((ulong)*(uint *)((long)plVar5 + 0x19c) & 0x3f) | *(ulong *)(lVar12 + 0x48)
          ;
          return plVar8;
        }
        return plVar8;
      }
      lVar12 = func_0x00f78af4();
      uStack_80 = 0x3d23990;
      pcStack_58 = Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
      lStack_78 = lVar7;
      plStack_70 = plVar5;
      plStack_68 = (long *)uVar11;
      pppppppuStack_60 = &ppppppuStack_30;
      if ((bRam0000000003eb4b75 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b75 = 1;
      }
      uVar13 = *(undefined8 *)(lVar12 + 200);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = 0;
      uVar11 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0);
      if ((uVar11 & 1) != 0) {
        return (long *)0x0;
      }
      lVar12 = *(long *)(lVar12 + 200);
      if (lVar12 != 0) {
        if (*(char *)(lVar12 + 0x44) != '\0') {
          return (long *)0x0;
        }
        return (long *)(ulong)(*(char *)(lVar12 + 0x28) == '\x01');
      }
      plVar8 = (long *)func_0x00f78af4();
      pcStack_88 = Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
      plVar5 = plVar8;
      pppppppuStack_90 = &pppppppuStack_60;
      if ((bRam0000000003eb4b78 & 1) == 0) {
        plVar5 = (long *)func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b78 = 1;
      }
      if (0.0 < *(float *)((long)plVar8 + 0xdc)) {
        return plVar5;
      }
      fVar21 = *(float *)((long)plVar8 + 0xe4);
      fVar24 = *(float *)(plVar8 + 0x1d);
      plVar5 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar8[0x1c],fVar21,fVar24,extraout_s0,param_2,param_3,0
                                      );
      fVar21 = param_3 * fVar24 + extraout_s0 * extraout_s0_00 + param_2 * fVar21;
      if (fVar21 < 0.0) {
        return plVar5;
      }
      *(float *)(plVar8 + 0x1c) = extraout_s0_00;
      *(undefined4 *)((long)plVar8 + 0xe4) = 0;
      *(float *)(plVar8 + 0x1d) = fVar24;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar8 + 0x1c,0);
      *(undefined4 *)((long)plVar8 + 0xdc) = 0x3d4ccccd;
      if (0.0 < *(float *)(plVar8 + 0x1b)) {
        lVar7 = plVar8[0x1a];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar7,0);
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
      *(undefined4 *)(plVar8 + 0x1b) = 0x3e4ccccd;
      iVar1 = *(int *)((long)plVar8 + 0xec) + 1;
      *(int *)((long)plVar8 + 0xec) = iVar1;
      lVar12 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar8);
      if (lVar12 != 0) {
        if (*(int *)(lVar12 + 0x90) < iVar1) {
          (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
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
          plVar8[0x1a] = (long)plVar5;
          return plVar5;
        }
      }
      auVar30 = func_0x00f78af4();
      lVar10 = auVar30._8_8_;
      lVar12 = auVar30._0_8_;
      pcStack_d8 = Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
      pppppppuStack_e0 = &pppppppuStack_90;
      if ((bRam0000000003eb4b79 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b79 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar5 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar10,0,0);
      if (((ulong)plVar5 & 1) != 0) {
        return plVar5;
      }
      if (*(long *)(lVar12 + 0x100) == 0) goto code_r0x014cf9bc;
      uVar18 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar12 + 0x100),0);
      fVar22 = *(float *)(lVar7 + 0xc);
      fVar25 = *(float *)(lVar12 + 0xe0);
      fVar19 = *(float *)(lVar12 + 0x128) * fVar22;
      lVar14 = *(long *)(lVar12 + 0x50);
      fVar23 = fVar22;
      fVar26 = fVar25;
      fStack_16c = fVar21;
      fStack_168 = fVar24;
      if (lVar14 != 0) {
        if (*(long *)(lVar12 + 0x100) == 0) goto code_r0x014cf9bc;
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar19,fVar22,fVar25,*(undefined4 *)(lVar12 + 0xe4),
                        *(undefined4 *)(lVar12 + 0xe8),*(long *)(lVar12 + 0x100),0);
        uVar18 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar12,lVar14,0);
        if ((*(long *)(lVar12 + 0x50) == 0) ||
           (lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + 0x10), lVar12 == 0))
        goto code_r0x014cf9bc;
        lVar12 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar12,0);
        fVar23 = *(float *)(lVar12 + 0x104);
        fVar26 = *(float *)(lVar12 + 0x108);
        fVar19 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar12 + 0x100),fVar23,fVar26,0);
        fVar21 = *(float *)(lVar7 + 8);
        fVar19 = fVar19 * fVar21;
        fVar23 = fVar23 * fVar21;
        fVar26 = fVar26 * fVar21;
        fStack_16c = fVar22;
        fStack_168 = fVar25;
      }
      if ((lVar10 != 0) && (lVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar19,fVar23,fVar26,lVar10,0), lVar12 != 0)) {
        puStack_148 = &UNK_014cf984;
        uStack_170 = uVar18;
        lStack_160 = lVar7;
        lStack_158 = lVar10;
        pppppppuStack_150 = &pppppppuStack_e0;
        if (pcRam0000000003ec1950 == (code *)0x0) {
          pcRam0000000003ec1950 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        plVar5 = (long *)(*pcRam0000000003ec1950)(lVar12,&uStack_170);
        return plVar5;
      }
code_r0x014cf9bc:
      plVar5 = (long *)func_0x00f78af4();
      return plVar5;
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  pplVar2 = &plStack_70;
  pcStack_58 = (code *)&Atlas_Gameplay_Usables_ProximityHomingProjectile__Destroy;
  pppppppuVar15 = &pppppppuStack_60;
  plStack_70 = plVar8;
  pppppppuStack_60 = &ppppppuStack_30;
  if (plVar6[9] != 0) {
    lVar7 = plVar6[0x35];
    auVar31._8_8_ = lVar7;
    auVar31._0_8_ = plVar6;
    plStack_68 = plVar5;
    uVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar6[9],0);
    auVar30._8_8_ = lVar7;
    auVar30._0_8_ = plStack_68;
    if (lVar7 != 0) {
      uVar28 = 0;
      /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(lVar7,uVar9);
      uVar11 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar6,0);
      plVar5 = plStack_70;
      if ((uVar11 & 1) != 0) {
        pppppppuVar15 = &pppppppuStack_60;
        plVar8 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar6,0);
        if (((ulong)plVar8 & 1) == 0) {
          plVar8 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar6,0);
          if ((plVar8 == (long *)0x0) || (plVar8[0x18] == 0)) {
            pcVar16 = Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
            auVar32 = func_0x00f78af4();
          }
          else {
            if (*(char *)(plVar8[0x18] + 0x50) != '\0') goto LAB_014ceb18;
            auVar32._8_4_ = 1;
            auVar32._0_8_ = plVar6;
            uVar28 = 1;
            pplVar2 = (long **)&stack0xffffffffffffffb0;
            plVar6 = plStack_68;
            plVar5 = plStack_70;
            pppppppuVar15 = pppppppuStack_60;
            pcVar16 = pcStack_58;
          }
          plVar8 = auVar32._0_8_;
          *(long **)((long)pplVar2 + -0x20) = plVar5;
          *(long **)((long)pplVar2 + -0x18) = plVar6;
          *(undefined8 ********)((long)pplVar2 + -0x10) = pppppppuVar15;
          *(code **)((long)pplVar2 + -8) = pcVar16;
          if ((*(char *)((long)plVar8 + 300) != '\0') == uVar28) {
            return plVar8;
          }
          if (auVar32._8_4_ != 0) {
            (**(code **)(*plVar8 + 0x448))(plVar8,*(undefined8 *)(*plVar8 + 0x450));
          }
          *(char *)((long)plVar8 + 300) = (char)uVar28;
          if (((plVar8[9] != 0) && (lVar7 = *(long *)(plVar8[9] + 0x28), lVar7 != 0)) &&
             (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0), lVar7 != 0)) {
            *(undefined8 *)((long)pplVar2 + -0x30) = unaff_x22;
            *(undefined8 *)((long)pplVar2 + -0x28) = uVar13;
            *(undefined8 *)((long)pplVar2 + -0x20) = *(undefined8 *)((long)pplVar2 + -0x20);
            *(undefined8 *)((long)pplVar2 + -0x18) = *(undefined8 *)((long)pplVar2 + -0x18);
            *(undefined8 *)((long)pplVar2 + -0x10) = *(undefined8 *)((long)pplVar2 + -0x10);
            *(undefined8 *)((long)pplVar2 + -8) = *(undefined8 *)((long)pplVar2 + -8);
            if (pcRam0000000003ebf4c0 == (code *)0x0) {
              pcRam0000000003ebf4c0 =
                   (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
            }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar5 = (long *)(*pcRam0000000003ebf4c0)(lVar7,uVar28 ^ 1);
            return plVar5;
          }
          plVar5 = (long *)func_0x00f78af4();
          return plVar5;
        }
LAB_014ceb18:
        if ((char)plVar6[0xc] != '\0') {
          return plVar8;
        }
        *(undefined1 *)(plVar6 + 0xc) = 1;
        *(undefined1 *)((long)plVar6 + 0x61) = 1;
        return plVar6;
      }
      puVar17 = &UNK_014d12d8;
      pplVar3 = &plStack_70;
      goto code_r0x014d12ec;
    }
  }
  plStack_68 = auVar30._0_8_;
  puVar17 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__LoseTarget;
  uVar9 = func_0x00f78af4();
  auVar31._8_8_ = auVar30._8_8_;
  auVar31._0_8_ = uVar9;
  pplVar3 = &plStack_70;
code_r0x014d12ec:
  do {
    lVar7 = auVar31._0_8_;
    *(long *)((long)pplVar3 + -0x20) = auVar31._8_8_;
    *(long **)((long)pplVar3 + -0x18) = plVar6;
    *(undefined8 ********)((long)pplVar3 + -0x10) = pppppppuVar15;
    *(undefined **)((long)pplVar3 + -8) = puVar17;
    if ((bRam0000000003eb4b8a & 1) == 0) {
      func_0x00f78a20(0x3d3b9c0);
      func_0x00f78a20(0x3d3b9c8);
      bRam0000000003eb4b8a = 1;
    }
    if (*(long *)(lVar7 + 0x1a0) != 0) {
      plVar5 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                                 (*(long *)(lVar7 + 0x1a0),0);
      if ((int)plVar5 == 0) {
        return plVar5;
      }
      if (((*(long *)(lVar7 + 0x1a0) != 0) &&
          (lVar12 = *(long *)(*(long *)(lVar7 + 0x1a0) + 0x20), lVar12 != 0)) &&
         (lVar12 = *(long *)(lVar12 + 0x90), lVar12 != 0)) {
        plVar5 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar12,0);
        if ((int)plVar5 != 0) {
          if (((*(long *)(lVar7 + 0x1a0) == 0) ||
              (lVar12 = *(long *)(*(long *)(lVar7 + 0x1a0) + 0x20), lVar12 == 0)) ||
             ((lVar12 = *(long *)(lVar12 + 0x90), lVar12 == 0 ||
              (lVar12 = *(long *)(lVar12 + 0xd0), lVar12 == 0)))) goto code_r0x014d13e4;
          plVar5 = (long *)/*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar12,lVar7,uRam0000000003d3b9c0);
          if ((int)plVar5 != 0) {
            if ((((*(long *)(lVar7 + 0x1a0) == 0) ||
                 (lVar12 = *(long *)(*(long *)(lVar7 + 0x1a0) + 0x20), lVar12 == 0)) ||
                (lVar12 = *(long *)(lVar12 + 0x90), lVar12 == 0)) ||
               (lVar12 = *(long *)(lVar12 + 0xd0), lVar12 == 0)) goto code_r0x014d13e4;
            plVar5 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar12,lVar7,uRam0000000003d3b9c8);
          }
        }
        if (*(long *)(lVar7 + 0x1a0) != 0) {
          *(undefined8 *)(*(long *)(lVar7 + 0x1a0) + 0x20) = 0;
          return plVar5;
        }
      }
    }
code_r0x014d13e4:
    auVar30 = func_0x00f78af4();
    uVar9 = auVar30._8_8_;
    plVar8 = auVar30._0_8_;
    *(undefined8 *)((long)pplVar3 + -0x60) = unaff_d11;
    *(ulong *)((long)pplVar3 + -0x58) = unaff_d10;
    *(ulong *)((long)pplVar3 + -0x50) = unaff_d9;
    *(ulong *)((long)pplVar3 + -0x48) = unaff_d8;
    *(undefined8 *)((long)pplVar3 + -0x40) = 0x3eb4000;
    *(long *)((long)pplVar3 + -0x38) = lVar7;
    *(undefined1 **)((long)pplVar3 + -0x30) = (undefined1 *)((long)pplVar3 + -0x10);
    *(undefined **)((long)pplVar3 + -0x28) =
         &Atlas_Gameplay_Usables_ProximityHomingProjectile__FixedUpdateGameplay;
    plVar5 = plVar8;
    if (((char)plVar8[3] == '\0') ||
       (plVar5 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar8,0),
       ((ulong)plVar5 & 1) != 0)) {
      return plVar5;
    }
    bVar4 = false;
    if (*(char *)((long)plVar8 + 0x11c) != '\0') {
      bVar4 = (char)plVar8[0x39] == '\0';
    }
    *(bool *)((long)plVar8 + 0x11c) = bVar4;
    Atlas_Gameplay_Usables_ProjectileUsable__FixedUpdateGameplay(plVar8,uVar9);
    if (plVar8[0x1f] != 0) {
      lVar7 = *(long *)(plVar8[0x1f] + 0x18);
      uVar27 = *(uint *)(plVar8 + 0x1c);
      unaff_d8 = (ulong)uVar27;
      uVar28 = *(uint *)((long)plVar8 + 0xe4);
      unaff_d9 = (ulong)uVar28;
      uVar29 = *(uint *)(plVar8 + 0x1d);
      unaff_d10 = (ulong)uVar29;
      uVar18 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
      uVar20 = /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec(uVar27,0);
      uVar9 = 0;
      if (lVar7 != 0) {
        *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
        *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
        *(undefined8 *)((long)pplVar3 + -0x30) = *(undefined8 *)((long)pplVar3 + -0x30);
        *(undefined8 *)((long)pplVar3 + -0x28) = *(undefined8 *)((long)pplVar3 + -0x28);
        *(undefined4 *)((long)pplVar3 + -0x50) = uVar20;
        *(uint *)((long)pplVar3 + -0x4c) = uVar28;
        *(uint *)((long)pplVar3 + -0x48) = uVar29;
        *(undefined4 *)((long)pplVar3 + -0x44) = uVar18;
        if (pcRam0000000003ec2948 == (code *)0x0) {
          pcRam0000000003ec2948 =
               (code *)func_0x00f789d4("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)"
                                       ,0);
        }
        plVar5 = (long *)(*pcRam0000000003ec2948)(lVar7,(undefined1 *)((long)pplVar3 + -0x50));
        return plVar5;
      }
    }
    auVar31 = func_0x00f78af4();
    plVar6 = auVar31._0_8_;
    *(undefined8 *)((long)pplVar3 + -0x90) = unaff_x22;
    *(undefined8 *)((long)pplVar3 + -0x88) = uVar13;
    *(undefined8 *)((long)pplVar3 + -0x80) = uVar9;
    *(long **)((long)pplVar3 + -0x78) = plVar8;
    *(undefined1 **)((long)pplVar3 + -0x70) = (undefined1 *)((long)pplVar3 + -0x30);
    *(undefined **)((long)pplVar3 + -0x68) =
         &Atlas_Gameplay_Usables_ProximityHomingProjectile__DeSpawn;
    pppppppuVar15 = (undefined8 *******)((long)pplVar3 + -0x70);
    uVar13 = 0x3eb4000;
    if ((bRam0000000003eb4b85 & 1) == 0) {
      func_0x00f78a20(0x3d5ff10);
      bRam0000000003eb4b85 = 1;
    }
    if (auVar31._8_4_ != 0) {
      (**(code **)(*plVar6 + 0x448))(plVar6,*(undefined8 *)(*plVar6 + 0x450));
    }
    puVar17 = &UNK_014d1508;
    pplVar3 = (long **)((long)pplVar3 + -0x90);
  } while( true );
}



// ============================================================
// RVA: 0x14d108c | Atlas.Gameplay.Usables.ProximityHomingProjectile.OnTriggerEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d12d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d1504: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014d1508) */
/* WARNING: Removing unreachable block (ram,0x014d1530) */
/* WARNING: Removing unreachable block (ram,0x014d1554) */
/* WARNING: Removing unreachable block (ram,0x014d1574) */
/* WARNING: Removing unreachable block (ram,0x014d157c) */
/* WARNING: Removing unreachable block (ram,0x014d1598) */
/* WARNING: Removing unreachable block (ram,0x014d159c) */
/* WARNING: Removing unreachable block (ram,0x014d1600) */
/* WARNING: Removing unreachable block (ram,0x014cec74) */
/* WARNING: Removing unreachable block (ram,0x014ceca0) */
/* WARNING: Removing unreachable block (ram,0x014ced3c) */
/* WARNING: Removing unreachable block (ram,0x014ced98) */
/* WARNING: Removing unreachable block (ram,0x014cee00) */
/* WARNING: Removing unreachable block (ram,0x014cee14) */
/* WARNING: Removing unreachable block (ram,0x014cee4c) */
/* WARNING: Removing unreachable block (ram,0x014cee50) */
/* WARNING: Removing unreachable block (ram,0x014cee54) */
/* WARNING: Removing unreachable block (ram,0x014cee68) */
/* WARNING: Removing unreachable block (ram,0x014cef30) */
/* WARNING: Removing unreachable block (ram,0x014cef38) */
/* WARNING: Removing unreachable block (ram,0x014cef3c) */
/* WARNING: Removing unreachable block (ram,0x014cef50) */
/* WARNING: Removing unreachable block (ram,0x014cef9c) */
/* WARNING: Removing unreachable block (ram,0x014cefbc) */
/* WARNING: Removing unreachable block (ram,0x014cefc4) */
/* WARNING: Removing unreachable block (ram,0x014cefcc) */
/* WARNING: Removing unreachable block (ram,0x014cf018) */
/* WARNING: Removing unreachable block (ram,0x014cf030) */
/* WARNING: Removing unreachable block (ram,0x014cf040) */
/* WARNING: Removing unreachable block (ram,0x014cf048) */
/* WARNING: Removing unreachable block (ram,0x014cf054) */
/* WARNING: Removing unreachable block (ram,0x014cf068) */
/* WARNING: Removing unreachable block (ram,0x014cf074) */
/* WARNING: Removing unreachable block (ram,0x014cf088) */
/* WARNING: Removing unreachable block (ram,0x014cf08c) */
/* WARNING: Removing unreachable block (ram,0x014cf090) */
/* WARNING: Removing unreachable block (ram,0x014cf0b0) */
/* WARNING: Removing unreachable block (ram,0x014cf0ec) */
/* WARNING: Removing unreachable block (ram,0x014cf0fc) */
/* WARNING: Removing unreachable block (ram,0x014cf108) */
/* WARNING: Removing unreachable block (ram,0x014cf10c) */
/* WARNING: Removing unreachable block (ram,0x014cf118) */
/* WARNING: Removing unreachable block (ram,0x014cf124) */
/* WARNING: Removing unreachable block (ram,0x014cf13c) */
/* WARNING: Removing unreachable block (ram,0x014cf148) */
/* WARNING: Removing unreachable block (ram,0x014cf1b0) */
/* WARNING: Removing unreachable block (ram,0x014cf1b4) */
/* WARNING: Removing unreachable block (ram,0x014cf1f0) */
/* WARNING: Removing unreachable block (ram,0x014cf1b8) */
/* WARNING: Removing unreachable block (ram,0x014cf1c0) */
/* WARNING: Removing unreachable block (ram,0x014cf1a0) */
/* WARNING: Removing unreachable block (ram,0x014cece4) */
/* WARNING: Removing unreachable block (ram,0x014d15d0) */
/* WARNING: Removing unreachable block (ram,0x014d15f0) */
/* WARNING: Removing unreachable block (ram,0x014d1510) */
/* WARNING: Removing unreachable block (ram,0x01a3f3c8) */
/* WARNING: Removing unreachable block (ram,0x01a3f3f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f40c) */
/* WARNING: Removing unreachable block (ram,0x01a3f410) */
/* WARNING: Removing unreachable block (ram,0x01a3f424) */
/* WARNING: Removing unreachable block (ram,0x01a3f42c) */
/* WARNING: Removing unreachable block (ram,0x01a3f430) */
/* WARNING: Removing unreachable block (ram,0x01a3f444) */
/* WARNING: Removing unreachable block (ram,0x01a3f450) */
/* WARNING: Removing unreachable block (ram,0x01a3f454) */
/* WARNING: Removing unreachable block (ram,0x01a3f488) */
/* WARNING: Removing unreachable block (ram,0x01a3f490) */
/* WARNING: Removing unreachable block (ram,0x01a3f494) */
/* WARNING: Removing unreachable block (ram,0x01a3f4a4) */
/* WARNING: Removing unreachable block (ram,0x01a3f4b4) */
/* WARNING: Removing unreachable block (ram,0x01a3f500) */
/* WARNING: Removing unreachable block (ram,0x01a3f540) */
/* WARNING: Removing unreachable block (ram,0x01a3f590) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f4) */
/* WARNING: Removing unreachable block (ram,0x01a3f594) */
/* WARNING: Removing unreachable block (ram,0x01a3f5dc) */
/* WARNING: Removing unreachable block (ram,0x01a3f648) */
/* WARNING: Removing unreachable block (ram,0x01a3f64c) */
/* WARNING: Removing unreachable block (ram,0x01a3f660) */
/* WARNING: Removing unreachable block (ram,0x01a3f668) */
/* WARNING: Removing unreachable block (ram,0x01a3f690) */
/* WARNING: Removing unreachable block (ram,0x01a3f674) */
/* WARNING: Removing unreachable block (ram,0x01a3f680) */
/* WARNING: Removing unreachable block (ram,0x01a3f69c) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f718) */
/* WARNING: Removing unreachable block (ram,0x01a3f730) */
/* WARNING: Removing unreachable block (ram,0x01a3f750) */
/* WARNING: Removing unreachable block (ram,0x01a3f79c) */
/* WARNING: Removing unreachable block (ram,0x01a3f7d8) */
/* WARNING: Removing unreachable block (ram,0x01a3f7ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f7f4) */
/* WARNING: Removing unreachable block (ram,0x01a3f808) */
/* WARNING: Removing unreachable block (ram,0x01a3f81c) */
/* WARNING: Removing unreachable block (ram,0x01a3f968) */
/* WARNING: Removing unreachable block (ram,0x01a3f830) */
/* WARNING: Removing unreachable block (ram,0x01a3f85c) */
/* WARNING: Removing unreachable block (ram,0x01a3f8b8) */
/* WARNING: Removing unreachable block (ram,0x01a3f8bc) */
/* WARNING: Removing unreachable block (ram,0x01a3f8cc) */
/* WARNING: Removing unreachable block (ram,0x01a3f8d4) */
/* WARNING: Removing unreachable block (ram,0x01a3f8e4) */
/* WARNING: Removing unreachable block (ram,0x01a3f8ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f914) */
/* WARNING: Removing unreachable block (ram,0x01a3f8f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f904) */
/* WARNING: Removing unreachable block (ram,0x01a3f920) */
/* WARNING: Removing unreachable block (ram,0x01a3f96c) */
/* WARNING: Removing unreachable block (ram,0x01a3f990) */
/* WARNING: Removing unreachable block (ram,0x01a3f9a8) */
/* WARNING: Removing unreachable block (ram,0x01a3fa08) */
/* WARNING: Removing unreachable block (ram,0x01a3f9d8) */
/* WARNING: Removing unreachable block (ram,0x01a3f998) */
/* WARNING: Removing unreachable block (ram,0x01a3f938) */
/* WARNING: Removing unreachable block (ram,0x01a3f870) */
/* WARNING: Removing unreachable block (ram,0x01a3f958) */
/* WARNING: Removing unreachable block (ram,0x01a3f884) */
/* WARNING: Removing unreachable block (ram,0x01a3f960) */
/* WARNING: Removing unreachable block (ram,0x01a3f898) */
/* WARNING: Removing unreachable block (ram,0x01a3f950) */
/* WARNING: Removing unreachable block (ram,0x01a3f964) */
/* WARNING: Removing unreachable block (ram,0x01a3f8a0) */
/* WARNING: Removing unreachable block (ram,0x01a3f770) */
/* WARNING: Removing unreachable block (ram,0x01a3f720) */
/* WARNING: Removing unreachable block (ram,0x01a3f6b4) */
/* WARNING: Removing unreachable block (ram,0x01a3f5ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f600) */
/* WARNING: Removing unreachable block (ram,0x01a3f608) */
/* WARNING: Removing unreachable block (ram,0x01a3f6d4) */
/* WARNING: Removing unreachable block (ram,0x01a3f60c) */
/* WARNING: Removing unreachable block (ram,0x01a3f6dc) */
/* WARNING: Removing unreachable block (ram,0x01a3f620) */
/* WARNING: Removing unreachable block (ram,0x01a3f62c) */
/* WARNING: Removing unreachable block (ram,0x01a3f634) */
/* WARNING: Removing unreachable block (ram,0x01a3f6ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f0) */
/* WARNING: Removing unreachable block (ram,0x01a3f638) */
/* WARNING: Removing unreachable block (ram,0x01a3f4d8) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Gameplay_Usables_ProximityHomingProjectile__OnTriggerEnter
                 (undefined1 param_1 [16],float param_2,float param_3,long *param_4,long *param_5)

{
  int iVar1;
  long **pplVar2;
  long **pplVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long extraout_x1;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar15;
  code *pcVar16;
  undefined *puVar17;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  ulong unaff_d8;
  uint uVar28;
  ulong unaff_d9;
  uint uVar29;
  ulong unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined4 uStack_150;
  float fStack_14c;
  float fStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined8 *******pppppppuStack_c0;
  code *pcStack_b8;
  undefined8 *******pppppppuStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 *******pppppppuStack_40;
  code *pcStack_38;
  long lVar10;
  
  uVar13 = 0x3eb4000;
  if ((bRam0000000003eb4b84 & 1) == 0) {
    func_0x00f78a20(0x3d207e8);
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b84 = 1;
  }
  plVar6 = (long *)Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(param_4,param_5,0);
  if ((char)param_4[0xc] != '\0') {
    return plVar6;
  }
  if (*(char *)((long)param_4 + 300) != '\0') {
    return plVar6;
  }
  plVar6 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_4,0);
  if (((ulong)plVar6 & 1) != 0) {
    return plVar6;
  }
  if (param_5 != (long *)0x0) {
    uVar13 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_5,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar6 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
    if ((int)plVar6 == 0) {
      return plVar6;
    }
    lVar7 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_5,0);
    if (lVar7 != 0) {
      lVar7 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar7,uRam0000000003d534a0);
      if ((lVar7 == 0) ||
         (plVar6 = (long *)func_0x0001c7d0(0,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ uRam0000000003d21fc8,lVar7), plVar6 == (long *)0x0)) {
        return (long *)0x0;
      }
      lVar7 = *plVar6;
      if ((*(byte *)(lVar7 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8)
          != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
        if (*(byte *)(lVar7 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300)) {
          return plVar6;
        }
        if (*(long *)(*(long *)(lVar7 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300) * 8 + -8
                     ) == /*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8) {
                    /* WARNING: Could not recover jumptable at 0x014d122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar6 = (long *)(**(code **)(*param_4 + 0x228))
                                     (param_4,*(undefined8 *)(*param_4 + 0x230));
          return plVar6;
        }
        return plVar6;
      }
      plVar8 = (long *)(**(code **)(*param_4 + 0x328))
                                 (param_4,plVar6,1,*(undefined8 *)(*param_4 + 0x330));
      if ((int)plVar8 == 0) {
        return plVar8;
      }
      Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag(param_4,1);
      uVar11 = (ulong)*(uint *)((long)plVar6 + 0x54);
      if ((bRam0000000003eb4b74 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b74 = 1;
      }
      lVar7 = param_4[0x19];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar6 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar7,0,0);
      if (((ulong)plVar6 & 1) != 0) {
        return plVar6;
      }
      lVar12 = param_4[0x19];
      if (lVar12 != 0) {
        if (*(char *)(lVar12 + 0x44) != '\0') {
          *(ulong *)(lVar12 + 0x48) =
               uVar11 << ((ulong)*(uint *)((long)param_4 + 0x19c) & 0x3f) |
               *(ulong *)(lVar12 + 0x48);
          return plVar6;
        }
        return plVar6;
      }
      lVar12 = func_0x00f78af4();
      uStack_60 = 0x3d23990;
      pcStack_38 = Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
      lStack_58 = lVar7;
      plStack_50 = param_4;
      plStack_48 = (long *)uVar11;
      pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
      if ((bRam0000000003eb4b75 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b75 = 1;
      }
      uVar13 = *(undefined8 *)(lVar12 + 200);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = 0;
      uVar11 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0);
      if ((uVar11 & 1) != 0) {
        return (long *)0x0;
      }
      lVar12 = *(long *)(lVar12 + 200);
      if (lVar12 != 0) {
        if (*(char *)(lVar12 + 0x44) != '\0') {
          return (long *)0x0;
        }
        return (long *)(ulong)(*(char *)(lVar12 + 0x28) == '\x01');
      }
      plVar8 = (long *)func_0x00f78af4();
      pcStack_68 = Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
      plVar6 = plVar8;
      pppppppuStack_70 = &pppppppuStack_40;
      if ((bRam0000000003eb4b78 & 1) == 0) {
        plVar6 = (long *)func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b78 = 1;
      }
      if (0.0 < *(float *)((long)plVar8 + 0xdc)) {
        return plVar6;
      }
      fVar21 = *(float *)((long)plVar8 + 0xe4);
      fVar24 = *(float *)(plVar8 + 0x1d);
      plVar6 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar8[0x1c],fVar21,fVar24,extraout_s0,param_2,param_3,0
                                      );
      fVar21 = param_3 * fVar24 + extraout_s0 * extraout_s0_00 + param_2 * fVar21;
      if (fVar21 < 0.0) {
        return plVar6;
      }
      *(float *)(plVar8 + 0x1c) = extraout_s0_00;
      *(undefined4 *)((long)plVar8 + 0xe4) = 0;
      *(float *)(plVar8 + 0x1d) = fVar24;
      /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar8 + 0x1c,0);
      *(undefined4 *)((long)plVar8 + 0xdc) = 0x3d4ccccd;
      if (0.0 < *(float *)(plVar8 + 0x1b)) {
        lVar7 = plVar8[0x1a];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar6 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar7,0);
        if (((ulong)plVar6 & 1) != 0) {
          return plVar6;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = 0;
        plVar6 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
        if (((ulong)plVar6 & 1) != 0) {
          return plVar6;
        }
      }
      *(undefined4 *)(plVar8 + 0x1b) = 0x3e4ccccd;
      iVar1 = *(int *)((long)plVar8 + 0xec) + 1;
      *(int *)((long)plVar8 + 0xec) = iVar1;
      lVar12 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar8);
      if (lVar12 != 0) {
        if (*(int *)(lVar12 + 0x90) < iVar1) {
          (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = 0;
        plVar6 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
        if ((int)plVar6 == 0) {
          return plVar6;
        }
        if (extraout_x1 != 0) {
          plVar6 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
          plVar8[0x1a] = (long)plVar6;
          return plVar6;
        }
      }
      auVar30 = func_0x00f78af4();
      lVar10 = auVar30._8_8_;
      lVar12 = auVar30._0_8_;
      pcStack_b8 = Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
      pppppppuStack_c0 = &pppppppuStack_70;
      if ((bRam0000000003eb4b79 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b79 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar6 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar10,0,0);
      if (((ulong)plVar6 & 1) != 0) {
        return plVar6;
      }
      if (*(long *)(lVar12 + 0x100) == 0) goto code_r0x014cf9bc;
      uVar18 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar12 + 0x100),0);
      fVar22 = *(float *)(lVar7 + 0xc);
      fVar25 = *(float *)(lVar12 + 0xe0);
      fVar19 = *(float *)(lVar12 + 0x128) * fVar22;
      lVar14 = *(long *)(lVar12 + 0x50);
      fVar23 = fVar22;
      fVar26 = fVar25;
      fStack_14c = fVar21;
      fStack_148 = fVar24;
      if (lVar14 != 0) {
        if (*(long *)(lVar12 + 0x100) == 0) goto code_r0x014cf9bc;
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar19,fVar22,fVar25,*(undefined4 *)(lVar12 + 0xe4),
                        *(undefined4 *)(lVar12 + 0xe8),*(long *)(lVar12 + 0x100),0);
        uVar18 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar12,lVar14,0);
        if ((*(long *)(lVar12 + 0x50) == 0) ||
           (lVar12 = *(long *)(*(long *)(lVar12 + 0x50) + 0x10), lVar12 == 0))
        goto code_r0x014cf9bc;
        lVar12 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar12,0);
        fVar23 = *(float *)(lVar12 + 0x104);
        fVar26 = *(float *)(lVar12 + 0x108);
        fVar19 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar12 + 0x100),fVar23,fVar26,0);
        fVar21 = *(float *)(lVar7 + 8);
        fVar19 = fVar19 * fVar21;
        fVar23 = fVar23 * fVar21;
        fVar26 = fVar26 * fVar21;
        fStack_14c = fVar22;
        fStack_148 = fVar25;
      }
      if ((lVar10 != 0) && (lVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar19,fVar23,fVar26,lVar10,0), lVar12 != 0)) {
        puStack_128 = &UNK_014cf984;
        uStack_150 = uVar18;
        lStack_140 = lVar7;
        lStack_138 = lVar10;
        pppppppuStack_130 = &pppppppuStack_c0;
        if (pcRam0000000003ec1950 == (code *)0x0) {
          pcRam0000000003ec1950 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        plVar6 = (long *)(*pcRam0000000003ec1950)(lVar12,&uStack_150);
        return plVar6;
      }
code_r0x014cf9bc:
      plVar6 = (long *)func_0x00f78af4();
      return plVar6;
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  pplVar2 = &plStack_50;
  pcStack_38 = (code *)&Atlas_Gameplay_Usables_ProximityHomingProjectile__Destroy;
  pppppppuVar15 = &pppppppuStack_40;
  plStack_50 = param_5;
  plStack_48 = param_4;
  pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (plVar6[9] != 0) {
    lVar7 = plVar6[0x35];
    auVar30._8_8_ = lVar7;
    auVar30._0_8_ = plVar6;
    uVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar6[9],0);
    param_5 = (long *)0x0;
    if (lVar7 != 0) {
      uVar28 = 0;
      /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(lVar7,uVar9);
      uVar11 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar6,0);
      plVar8 = plStack_50;
      if ((uVar11 & 1) != 0) {
        pppppppuVar15 = &pppppppuStack_40;
        plVar5 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar6,0);
        if (((ulong)plVar5 & 1) == 0) {
          plVar5 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar6,0);
          if ((plVar5 == (long *)0x0) || (plVar5[0x18] == 0)) {
            pcVar16 = Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
            auVar31 = func_0x00f78af4();
          }
          else {
            if (*(char *)(plVar5[0x18] + 0x50) != '\0') goto LAB_014ceb18;
            auVar31._8_4_ = 1;
            auVar31._0_8_ = plVar6;
            uVar28 = 1;
            pplVar2 = (long **)&stack0xffffffffffffffd0;
            plVar6 = plStack_48;
            plVar8 = plStack_50;
            pppppppuVar15 = pppppppuStack_40;
            pcVar16 = pcStack_38;
          }
          plVar5 = auVar31._0_8_;
          *(long **)((long)pplVar2 + -0x20) = plVar8;
          *(long **)((long)pplVar2 + -0x18) = plVar6;
          *(undefined8 ********)((long)pplVar2 + -0x10) = pppppppuVar15;
          *(code **)((long)pplVar2 + -8) = pcVar16;
          if ((*(char *)((long)plVar5 + 300) != '\0') == uVar28) {
            return plVar5;
          }
          if (auVar31._8_4_ != 0) {
            (**(code **)(*plVar5 + 0x448))(plVar5,*(undefined8 *)(*plVar5 + 0x450));
          }
          *(char *)((long)plVar5 + 300) = (char)uVar28;
          if (((plVar5[9] != 0) && (lVar7 = *(long *)(plVar5[9] + 0x28), lVar7 != 0)) &&
             (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0), lVar7 != 0)) {
            *(undefined8 *)((long)pplVar2 + -0x30) = unaff_x22;
            *(undefined8 *)((long)pplVar2 + -0x28) = uVar13;
            *(undefined8 *)((long)pplVar2 + -0x20) = *(undefined8 *)((long)pplVar2 + -0x20);
            *(undefined8 *)((long)pplVar2 + -0x18) = *(undefined8 *)((long)pplVar2 + -0x18);
            *(undefined8 *)((long)pplVar2 + -0x10) = *(undefined8 *)((long)pplVar2 + -0x10);
            *(undefined8 *)((long)pplVar2 + -8) = *(undefined8 *)((long)pplVar2 + -8);
            if (pcRam0000000003ebf4c0 == (code *)0x0) {
              pcRam0000000003ebf4c0 =
                   (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
            }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar6 = (long *)(*pcRam0000000003ebf4c0)(lVar7,uVar28 ^ 1);
            return plVar6;
          }
          plVar6 = (long *)func_0x00f78af4();
          return plVar6;
        }
LAB_014ceb18:
        if ((char)plVar6[0xc] != '\0') {
          return plVar5;
        }
        *(undefined1 *)(plVar6 + 0xc) = 1;
        *(undefined1 *)((long)plVar6 + 0x61) = 1;
        return plVar6;
      }
      puVar17 = &UNK_014d12d8;
      pplVar3 = &plStack_50;
      goto code_r0x014d12ec;
    }
  }
  puVar17 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__LoseTarget;
  uVar9 = func_0x00f78af4();
  auVar30._8_8_ = param_5;
  auVar30._0_8_ = uVar9;
  pplVar3 = &plStack_50;
code_r0x014d12ec:
  do {
    lVar7 = auVar30._0_8_;
    *(long *)((long)pplVar3 + -0x20) = auVar30._8_8_;
    *(long **)((long)pplVar3 + -0x18) = plVar6;
    *(undefined8 ********)((long)pplVar3 + -0x10) = pppppppuVar15;
    *(undefined **)((long)pplVar3 + -8) = puVar17;
    if ((bRam0000000003eb4b8a & 1) == 0) {
      func_0x00f78a20(0x3d3b9c0);
      func_0x00f78a20(0x3d3b9c8);
      bRam0000000003eb4b8a = 1;
    }
    if (*(long *)(lVar7 + 0x1a0) != 0) {
      plVar6 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                                 (*(long *)(lVar7 + 0x1a0),0);
      if ((int)plVar6 == 0) {
        return plVar6;
      }
      if (((*(long *)(lVar7 + 0x1a0) != 0) &&
          (lVar12 = *(long *)(*(long *)(lVar7 + 0x1a0) + 0x20), lVar12 != 0)) &&
         (lVar12 = *(long *)(lVar12 + 0x90), lVar12 != 0)) {
        plVar6 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar12,0);
        if ((int)plVar6 != 0) {
          if (((*(long *)(lVar7 + 0x1a0) == 0) ||
              (lVar12 = *(long *)(*(long *)(lVar7 + 0x1a0) + 0x20), lVar12 == 0)) ||
             ((lVar12 = *(long *)(lVar12 + 0x90), lVar12 == 0 ||
              (lVar12 = *(long *)(lVar12 + 0xd0), lVar12 == 0)))) goto code_r0x014d13e4;
          plVar6 = (long *)/*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar12,lVar7,uRam0000000003d3b9c0);
          if ((int)plVar6 != 0) {
            if ((((*(long *)(lVar7 + 0x1a0) == 0) ||
                 (lVar12 = *(long *)(*(long *)(lVar7 + 0x1a0) + 0x20), lVar12 == 0)) ||
                (lVar12 = *(long *)(lVar12 + 0x90), lVar12 == 0)) ||
               (lVar12 = *(long *)(lVar12 + 0xd0), lVar12 == 0)) goto code_r0x014d13e4;
            plVar6 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar12,lVar7,uRam0000000003d3b9c8);
          }
        }
        if (*(long *)(lVar7 + 0x1a0) != 0) {
          *(undefined8 *)(*(long *)(lVar7 + 0x1a0) + 0x20) = 0;
          return plVar6;
        }
      }
    }
code_r0x014d13e4:
    auVar30 = func_0x00f78af4();
    uVar9 = auVar30._8_8_;
    plVar8 = auVar30._0_8_;
    *(undefined8 *)((long)pplVar3 + -0x60) = unaff_d11;
    *(ulong *)((long)pplVar3 + -0x58) = unaff_d10;
    *(ulong *)((long)pplVar3 + -0x50) = unaff_d9;
    *(ulong *)((long)pplVar3 + -0x48) = unaff_d8;
    *(undefined8 *)((long)pplVar3 + -0x40) = 0x3eb4000;
    *(long *)((long)pplVar3 + -0x38) = lVar7;
    *(undefined1 **)((long)pplVar3 + -0x30) = (undefined1 *)((long)pplVar3 + -0x10);
    *(undefined **)((long)pplVar3 + -0x28) =
         &Atlas_Gameplay_Usables_ProximityHomingProjectile__FixedUpdateGameplay;
    plVar6 = plVar8;
    if (((char)plVar8[3] == '\0') ||
       (plVar6 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar8,0),
       ((ulong)plVar6 & 1) != 0)) {
      return plVar6;
    }
    bVar4 = false;
    if (*(char *)((long)plVar8 + 0x11c) != '\0') {
      bVar4 = (char)plVar8[0x39] == '\0';
    }
    *(bool *)((long)plVar8 + 0x11c) = bVar4;
    Atlas_Gameplay_Usables_ProjectileUsable__FixedUpdateGameplay(plVar8,uVar9);
    if (plVar8[0x1f] != 0) {
      lVar7 = *(long *)(plVar8[0x1f] + 0x18);
      uVar27 = *(uint *)(plVar8 + 0x1c);
      unaff_d8 = (ulong)uVar27;
      uVar28 = *(uint *)((long)plVar8 + 0xe4);
      unaff_d9 = (ulong)uVar28;
      uVar29 = *(uint *)(plVar8 + 0x1d);
      unaff_d10 = (ulong)uVar29;
      uVar18 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
      uVar20 = /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec(uVar27,0);
      uVar9 = 0;
      if (lVar7 != 0) {
        *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
        *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
        *(undefined8 *)((long)pplVar3 + -0x30) = *(undefined8 *)((long)pplVar3 + -0x30);
        *(undefined8 *)((long)pplVar3 + -0x28) = *(undefined8 *)((long)pplVar3 + -0x28);
        *(undefined4 *)((long)pplVar3 + -0x50) = uVar20;
        *(uint *)((long)pplVar3 + -0x4c) = uVar28;
        *(uint *)((long)pplVar3 + -0x48) = uVar29;
        *(undefined4 *)((long)pplVar3 + -0x44) = uVar18;
        if (pcRam0000000003ec2948 == (code *)0x0) {
          pcRam0000000003ec2948 =
               (code *)func_0x00f789d4("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)"
                                       ,0);
        }
        plVar6 = (long *)(*pcRam0000000003ec2948)(lVar7,(undefined1 *)((long)pplVar3 + -0x50));
        return plVar6;
      }
    }
    auVar30 = func_0x00f78af4();
    plVar6 = auVar30._0_8_;
    *(undefined8 *)((long)pplVar3 + -0x90) = unaff_x22;
    *(undefined8 *)((long)pplVar3 + -0x88) = uVar13;
    *(undefined8 *)((long)pplVar3 + -0x80) = uVar9;
    *(long **)((long)pplVar3 + -0x78) = plVar8;
    *(undefined1 **)((long)pplVar3 + -0x70) = (undefined1 *)((long)pplVar3 + -0x30);
    *(undefined **)((long)pplVar3 + -0x68) =
         &Atlas_Gameplay_Usables_ProximityHomingProjectile__DeSpawn;
    pppppppuVar15 = (undefined8 *******)((long)pplVar3 + -0x70);
    uVar13 = 0x3eb4000;
    if ((bRam0000000003eb4b85 & 1) == 0) {
      func_0x00f78a20(0x3d5ff10);
      bRam0000000003eb4b85 = 1;
    }
    if (auVar30._8_4_ != 0) {
      (**(code **)(*plVar6 + 0x448))(plVar6,*(undefined8 *)(*plVar6 + 0x450));
    }
    puVar17 = &UNK_014d1508;
    pplVar3 = (long **)((long)pplVar3 + -0x90);
  } while( true );
}



// ============================================================
// RVA: 0x14d1288 | Atlas.Gameplay.Usables.ProximityHomingProjectile.Destroy
// ============================================================

/* WARNING: Possible PIC construction at 0x014d12d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d1504: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d1508) */
/* WARNING: Removing unreachable block (ram,0x014d1530) */
/* WARNING: Removing unreachable block (ram,0x014d1554) */
/* WARNING: Removing unreachable block (ram,0x014d1574) */
/* WARNING: Removing unreachable block (ram,0x014d157c) */
/* WARNING: Removing unreachable block (ram,0x014d1598) */
/* WARNING: Removing unreachable block (ram,0x014d159c) */
/* WARNING: Removing unreachable block (ram,0x014d1600) */
/* WARNING: Removing unreachable block (ram,0x014cec74) */
/* WARNING: Removing unreachable block (ram,0x014ceca0) */
/* WARNING: Removing unreachable block (ram,0x014ced3c) */
/* WARNING: Removing unreachable block (ram,0x014ced98) */
/* WARNING: Removing unreachable block (ram,0x014cee00) */
/* WARNING: Removing unreachable block (ram,0x014cee14) */
/* WARNING: Removing unreachable block (ram,0x014cee4c) */
/* WARNING: Removing unreachable block (ram,0x014cee50) */
/* WARNING: Removing unreachable block (ram,0x014cee54) */
/* WARNING: Removing unreachable block (ram,0x014cee68) */
/* WARNING: Removing unreachable block (ram,0x014cef30) */
/* WARNING: Removing unreachable block (ram,0x014cef38) */
/* WARNING: Removing unreachable block (ram,0x014cef3c) */
/* WARNING: Removing unreachable block (ram,0x014cef50) */
/* WARNING: Removing unreachable block (ram,0x014cef9c) */
/* WARNING: Removing unreachable block (ram,0x014cefbc) */
/* WARNING: Removing unreachable block (ram,0x014cefc4) */
/* WARNING: Removing unreachable block (ram,0x014cefcc) */
/* WARNING: Removing unreachable block (ram,0x014cf018) */
/* WARNING: Removing unreachable block (ram,0x014cf030) */
/* WARNING: Removing unreachable block (ram,0x014cf040) */
/* WARNING: Removing unreachable block (ram,0x014cf048) */
/* WARNING: Removing unreachable block (ram,0x014cf054) */
/* WARNING: Removing unreachable block (ram,0x014cf068) */
/* WARNING: Removing unreachable block (ram,0x014cf074) */
/* WARNING: Removing unreachable block (ram,0x014cf088) */
/* WARNING: Removing unreachable block (ram,0x014cf08c) */
/* WARNING: Removing unreachable block (ram,0x014cf090) */
/* WARNING: Removing unreachable block (ram,0x014cf0b0) */
/* WARNING: Removing unreachable block (ram,0x014cf0ec) */
/* WARNING: Removing unreachable block (ram,0x014cf0fc) */
/* WARNING: Removing unreachable block (ram,0x014cf108) */
/* WARNING: Removing unreachable block (ram,0x014cf10c) */
/* WARNING: Removing unreachable block (ram,0x014cf118) */
/* WARNING: Removing unreachable block (ram,0x014cf124) */
/* WARNING: Removing unreachable block (ram,0x014cf13c) */
/* WARNING: Removing unreachable block (ram,0x014cf148) */
/* WARNING: Removing unreachable block (ram,0x014cf1b0) */
/* WARNING: Removing unreachable block (ram,0x014cf1b4) */
/* WARNING: Removing unreachable block (ram,0x014cf1f0) */
/* WARNING: Removing unreachable block (ram,0x014cf1b8) */
/* WARNING: Removing unreachable block (ram,0x014cf1c0) */
/* WARNING: Removing unreachable block (ram,0x014cf1a0) */
/* WARNING: Removing unreachable block (ram,0x014cece4) */
/* WARNING: Removing unreachable block (ram,0x014d15d0) */
/* WARNING: Removing unreachable block (ram,0x014d15f0) */
/* WARNING: Removing unreachable block (ram,0x014d1510) */
/* WARNING: Removing unreachable block (ram,0x01a3f3c8) */
/* WARNING: Removing unreachable block (ram,0x01a3f3f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f40c) */
/* WARNING: Removing unreachable block (ram,0x01a3f410) */
/* WARNING: Removing unreachable block (ram,0x01a3f424) */
/* WARNING: Removing unreachable block (ram,0x01a3f42c) */
/* WARNING: Removing unreachable block (ram,0x01a3f430) */
/* WARNING: Removing unreachable block (ram,0x01a3f444) */
/* WARNING: Removing unreachable block (ram,0x01a3f450) */
/* WARNING: Removing unreachable block (ram,0x01a3f454) */
/* WARNING: Removing unreachable block (ram,0x01a3f488) */
/* WARNING: Removing unreachable block (ram,0x01a3f490) */
/* WARNING: Removing unreachable block (ram,0x01a3f494) */
/* WARNING: Removing unreachable block (ram,0x01a3f4a4) */
/* WARNING: Removing unreachable block (ram,0x01a3f4b4) */
/* WARNING: Removing unreachable block (ram,0x01a3f500) */
/* WARNING: Removing unreachable block (ram,0x01a3f540) */
/* WARNING: Removing unreachable block (ram,0x01a3f590) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f4) */
/* WARNING: Removing unreachable block (ram,0x01a3f594) */
/* WARNING: Removing unreachable block (ram,0x01a3f5dc) */
/* WARNING: Removing unreachable block (ram,0x01a3f648) */
/* WARNING: Removing unreachable block (ram,0x01a3f64c) */
/* WARNING: Removing unreachable block (ram,0x01a3f660) */
/* WARNING: Removing unreachable block (ram,0x01a3f668) */
/* WARNING: Removing unreachable block (ram,0x01a3f690) */
/* WARNING: Removing unreachable block (ram,0x01a3f674) */
/* WARNING: Removing unreachable block (ram,0x01a3f680) */
/* WARNING: Removing unreachable block (ram,0x01a3f69c) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f718) */
/* WARNING: Removing unreachable block (ram,0x01a3f730) */
/* WARNING: Removing unreachable block (ram,0x01a3f750) */
/* WARNING: Removing unreachable block (ram,0x01a3f79c) */
/* WARNING: Removing unreachable block (ram,0x01a3f7d8) */
/* WARNING: Removing unreachable block (ram,0x01a3f7ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f7f4) */
/* WARNING: Removing unreachable block (ram,0x01a3f808) */
/* WARNING: Removing unreachable block (ram,0x01a3f81c) */
/* WARNING: Removing unreachable block (ram,0x01a3f968) */
/* WARNING: Removing unreachable block (ram,0x01a3f830) */
/* WARNING: Removing unreachable block (ram,0x01a3f85c) */
/* WARNING: Removing unreachable block (ram,0x01a3f8b8) */
/* WARNING: Removing unreachable block (ram,0x01a3f8bc) */
/* WARNING: Removing unreachable block (ram,0x01a3f8cc) */
/* WARNING: Removing unreachable block (ram,0x01a3f8d4) */
/* WARNING: Removing unreachable block (ram,0x01a3f8e4) */
/* WARNING: Removing unreachable block (ram,0x01a3f8ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f914) */
/* WARNING: Removing unreachable block (ram,0x01a3f8f8) */
/* WARNING: Removing unreachable block (ram,0x01a3f904) */
/* WARNING: Removing unreachable block (ram,0x01a3f920) */
/* WARNING: Removing unreachable block (ram,0x01a3f96c) */
/* WARNING: Removing unreachable block (ram,0x01a3f990) */
/* WARNING: Removing unreachable block (ram,0x01a3f9a8) */
/* WARNING: Removing unreachable block (ram,0x01a3fa08) */
/* WARNING: Removing unreachable block (ram,0x01a3f9d8) */
/* WARNING: Removing unreachable block (ram,0x01a3f998) */
/* WARNING: Removing unreachable block (ram,0x01a3f938) */
/* WARNING: Removing unreachable block (ram,0x01a3f870) */
/* WARNING: Removing unreachable block (ram,0x01a3f958) */
/* WARNING: Removing unreachable block (ram,0x01a3f884) */
/* WARNING: Removing unreachable block (ram,0x01a3f960) */
/* WARNING: Removing unreachable block (ram,0x01a3f898) */
/* WARNING: Removing unreachable block (ram,0x01a3f950) */
/* WARNING: Removing unreachable block (ram,0x01a3f964) */
/* WARNING: Removing unreachable block (ram,0x01a3f8a0) */
/* WARNING: Removing unreachable block (ram,0x01a3f770) */
/* WARNING: Removing unreachable block (ram,0x01a3f720) */
/* WARNING: Removing unreachable block (ram,0x01a3f6b4) */
/* WARNING: Removing unreachable block (ram,0x01a3f5ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f600) */
/* WARNING: Removing unreachable block (ram,0x01a3f608) */
/* WARNING: Removing unreachable block (ram,0x01a3f6d4) */
/* WARNING: Removing unreachable block (ram,0x01a3f60c) */
/* WARNING: Removing unreachable block (ram,0x01a3f6dc) */
/* WARNING: Removing unreachable block (ram,0x01a3f620) */
/* WARNING: Removing unreachable block (ram,0x01a3f62c) */
/* WARNING: Removing unreachable block (ram,0x01a3f634) */
/* WARNING: Removing unreachable block (ram,0x01a3f6ec) */
/* WARNING: Removing unreachable block (ram,0x01a3f6f0) */
/* WARNING: Removing unreachable block (ram,0x01a3f638) */
/* WARNING: Removing unreachable block (ram,0x01a3f4d8) */

void Atlas_Gameplay_Usables_ProximityHomingProjectile__Destroy(long *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar9;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  ulong unaff_d8;
  uint uVar14;
  ulong unaff_d9;
  uint uVar15;
  ulong unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar9 = &stack0xfffffffffffffff0;
  lVar8 = unaff_x20;
  if (param_1[9] != 0) {
    lVar8 = param_1[0x35];
    uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1[9],0);
    if (lVar8 != 0) {
      uVar14 = 0;
      /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(lVar8,uVar4);
      uVar5 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_1,0);
      if ((uVar5 & 1) != 0) {
        puVar9 = &stack0xfffffffffffffff0;
        uVar5 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_1,0);
        if ((uVar5 & 1) != 0) {
LAB_014ceb18:
          if ((char)param_1[0xc] == '\0') {
            *(undefined1 *)(param_1 + 0xc) = 1;
            *(undefined1 *)((long)param_1 + 0x61) = 1;
            return;
          }
          return;
        }
        lVar8 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
        if ((lVar8 == 0) || (*(long *)(lVar8 + 0xc0) == 0)) {
          unaff_x30 = Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
          auVar17 = func_0x00f78af4();
          iVar3 = auVar17._8_4_;
          plVar6 = auVar17._0_8_;
        }
        else {
          if (*(char *)(*(long *)(lVar8 + 0xc0) + 0x50) != '\0') goto LAB_014ceb18;
          iVar3 = 1;
          uVar14 = 1;
          puVar1 = (undefined1 *)register0x00000008;
          plVar6 = param_1;
          param_1 = unaff_x19;
          puVar9 = unaff_x29;
        }
        *(long *)(puVar1 + -0x20) = unaff_x20;
        *(long **)(puVar1 + -0x18) = param_1;
        *(undefined1 **)(puVar1 + -0x10) = puVar9;
        *(code **)(puVar1 + -8) = unaff_x30;
        if ((*(char *)((long)plVar6 + 300) != '\0') == uVar14) {
          return;
        }
        if (iVar3 != 0) {
          (**(code **)(*plVar6 + 0x448))(plVar6,*(undefined8 *)(*plVar6 + 0x450));
        }
        *(char *)((long)plVar6 + 300) = (char)uVar14;
        if (((plVar6[9] != 0) && (lVar8 = *(long *)(plVar6[9] + 0x28), lVar8 != 0)) &&
           (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar8 != 0)) {
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
          (*pcRam0000000003ebf4c0)(lVar8,uVar14 ^ 1);
          return;
        }
        func_0x00f78af4();
        return;
      }
      puVar10 = (undefined *)0x14d12d8;
      puVar1 = &stack0xffffffffffffffe0;
      plVar6 = param_1;
      goto code_r0x014d12ec;
    }
  }
  puVar10 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__LoseTarget;
  plVar6 = (long *)func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffe0;
code_r0x014d12ec:
  do {
    *(long *)(puVar1 + -0x20) = lVar8;
    *(long **)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar9;
    *(undefined **)(puVar1 + -8) = puVar10;
    if ((bRam0000000003eb4b8a & 1) == 0) {
      func_0x00f78a20(0x3d3b9c0);
      func_0x00f78a20(0x3d3b9c8);
      bRam0000000003eb4b8a = 1;
    }
    if (plVar6[0x34] != 0) {
      iVar3 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget(plVar6[0x34],0);
      if (iVar3 == 0) {
        return;
      }
      if (((plVar6[0x34] != 0) && (lVar8 = *(long *)(plVar6[0x34] + 0x20), lVar8 != 0)) &&
         (lVar8 = *(long *)(lVar8 + 0x90), lVar8 != 0)) {
        iVar3 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar8,0);
        if (iVar3 != 0) {
          if (((plVar6[0x34] == 0) || (lVar8 = *(long *)(plVar6[0x34] + 0x20), lVar8 == 0)) ||
             ((lVar8 = *(long *)(lVar8 + 0x90), lVar8 == 0 ||
              (lVar8 = *(long *)(lVar8 + 0xd0), lVar8 == 0)))) goto code_r0x014d13e4;
          iVar3 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar8,plVar6,uRam0000000003d3b9c0);
          if (iVar3 != 0) {
            if ((((plVar6[0x34] == 0) || (lVar8 = *(long *)(plVar6[0x34] + 0x20), lVar8 == 0)) ||
                (lVar8 = *(long *)(lVar8 + 0x90), lVar8 == 0)) ||
               (lVar8 = *(long *)(lVar8 + 0xd0), lVar8 == 0)) goto code_r0x014d13e4;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar8,plVar6,uRam0000000003d3b9c8);
          }
        }
        if (plVar6[0x34] != 0) {
          *(undefined8 *)(plVar6[0x34] + 0x20) = 0;
          return;
        }
      }
    }
code_r0x014d13e4:
    auVar16 = func_0x00f78af4();
    uVar4 = auVar16._8_8_;
    lVar7 = auVar16._0_8_;
    *(undefined8 *)(puVar1 + -0x60) = unaff_d11;
    *(ulong *)(puVar1 + -0x58) = unaff_d10;
    *(ulong *)(puVar1 + -0x50) = unaff_d9;
    *(ulong *)(puVar1 + -0x48) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x40) = 0x3eb4000;
    *(long **)(puVar1 + -0x38) = plVar6;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) =
         &Atlas_Gameplay_Usables_ProximityHomingProjectile__FixedUpdateGameplay;
    if ((*(char *)(lVar7 + 0x18) == '\0') ||
       (uVar5 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(lVar7,0), (uVar5 & 1) != 0)) {
      return;
    }
    bVar2 = false;
    if (*(char *)(lVar7 + 0x11c) != '\0') {
      bVar2 = *(char *)(lVar7 + 0x1c8) == '\0';
    }
    *(bool *)(lVar7 + 0x11c) = bVar2;
    Atlas_Gameplay_Usables_ProjectileUsable__FixedUpdateGameplay(lVar7,uVar4);
    if (*(long *)(lVar7 + 0xf8) != 0) {
      lVar8 = *(long *)(*(long *)(lVar7 + 0xf8) + 0x18);
      uVar13 = *(uint *)(lVar7 + 0xe0);
      unaff_d8 = (ulong)uVar13;
      uVar14 = *(uint *)(lVar7 + 0xe4);
      unaff_d9 = (ulong)uVar14;
      uVar15 = *(uint *)(lVar7 + 0xe8);
      unaff_d10 = (ulong)uVar15;
      uVar11 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
      uVar12 = /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec(uVar13,0);
      uVar4 = 0;
      if (lVar8 != 0) {
        *(undefined8 *)(puVar1 + -0x40) = *(undefined8 *)(puVar1 + -0x40);
        *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)(puVar1 + -0x38);
        *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
        *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
        *(undefined4 *)(puVar1 + -0x50) = uVar12;
        *(uint *)(puVar1 + -0x4c) = uVar14;
        *(uint *)(puVar1 + -0x48) = uVar15;
        *(undefined4 *)(puVar1 + -0x44) = uVar11;
        if (pcRam0000000003ec2948 == (code *)0x0) {
          pcRam0000000003ec2948 =
               (code *)func_0x00f789d4("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)"
                                       ,0);
        }
        (*pcRam0000000003ec2948)(lVar8,puVar1 + -0x50);
        return;
      }
    }
    auVar16 = func_0x00f78af4();
    lVar8 = auVar16._8_8_;
    plVar6 = auVar16._0_8_;
    *(undefined8 *)(puVar1 + -0x90) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x88) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x80) = uVar4;
    *(long *)(puVar1 + -0x78) = lVar7;
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x30;
    *(undefined **)(puVar1 + -0x68) = &Atlas_Gameplay_Usables_ProximityHomingProjectile__DeSpawn;
    puVar9 = puVar1 + -0x70;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4b85 & 1) == 0) {
      func_0x00f78a20(0x3d5ff10);
      bRam0000000003eb4b85 = 1;
    }
    if (auVar16._8_4_ != 0) {
      (**(code **)(*plVar6 + 0x448))(plVar6,*(undefined8 *)(*plVar6 + 0x450));
    }
    puVar10 = &UNK_014d1508;
    puVar1 = puVar1 + -0x90;
    param_1 = plVar6;
  } while( true );
}



// ============================================================
// RVA: 0x14d12ec | Atlas.Gameplay.Usables.ProximityHomingProjectile.LoseTarget
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_ProximityHomingProjectile__LoseTarget
                 (undefined1 param_1 [16],ulong param_2,ulong param_3,uint param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 *param_8,long param_9)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 extraout_x1;
  long extraout_x1_00;
  undefined8 *extraout_x8;
  long lVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long *unaff_x24;
  long lVar17;
  long *unaff_x25;
  uint uVar18;
  float extraout_s0;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  ulong uStack_260;
  ulong uStack_258;
  undefined1 auStack_250 [16];
  undefined8 uStack_240;
  undefined *puStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  long lStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_d0;
  long *plStack_c8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4b8a & 1) == 0) {
    func_0x00f78a20(0x3d3b9c0);
    func_0x00f78a20(0x3d3b9c8);
    bRam0000000003eb4b8a = 1;
  }
  if (*(long *)(param_5 + 0x1a0) != 0) {
    plVar4 = (long *)Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                               (*(long *)(param_5 + 0x1a0),0);
    if ((int)plVar4 == 0) {
      return plVar4;
    }
    if (((*(long *)(param_5 + 0x1a0) != 0) &&
        (lVar12 = *(long *)(*(long *)(param_5 + 0x1a0) + 0x20), lVar12 != 0)) &&
       (lVar12 = *(long *)(lVar12 + 0x90), lVar12 != 0)) {
      plVar4 = (long *)/*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar12,0);
      if ((int)plVar4 != 0) {
        if (((*(long *)(param_5 + 0x1a0) == 0) ||
            (lVar12 = *(long *)(*(long *)(param_5 + 0x1a0) + 0x20), lVar12 == 0)) ||
           ((lVar12 = *(long *)(lVar12 + 0x90), lVar12 == 0 ||
            (lVar12 = *(long *)(lVar12 + 0xd0), lVar12 == 0)))) goto LAB_014d13e4;
        plVar4 = (long *)/*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar12,param_5,uRam0000000003d3b9c0);
        if ((int)plVar4 != 0) {
          if (((*(long *)(param_5 + 0x1a0) == 0) ||
              (lVar12 = *(long *)(*(long *)(param_5 + 0x1a0) + 0x20), lVar12 == 0)) ||
             ((lVar12 = *(long *)(lVar12 + 0x90), lVar12 == 0 ||
              (lVar12 = *(long *)(lVar12 + 0xd0), lVar12 == 0)))) goto LAB_014d13e4;
          plVar4 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(lVar12,param_5,uRam0000000003d3b9c8);
        }
      }
      if (*(long *)(param_5 + 0x1a0) != 0) {
        *(undefined8 *)(*(long *)(param_5 + 0x1a0) + 0x20) = 0;
        return plVar4;
      }
    }
  }
LAB_014d13e4:
  auVar31 = func_0x00f78af4();
  plVar6 = auVar31._0_8_;
  puStack_28 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__FixedUpdateGameplay;
  plVar4 = plVar6;
  if (((char)plVar6[3] == '\0') ||
     (puStack_30 = &stack0xfffffffffffffff0,
     plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar6,0),
     ((ulong)plVar4 & 1) != 0)) {
    return plVar4;
  }
  bVar2 = false;
  if (*(char *)((long)plVar6 + 0x11c) != '\0') {
    bVar2 = (char)plVar6[0x39] == '\0';
  }
  *(bool *)((long)plVar6 + 0x11c) = bVar2;
  Atlas_Gameplay_Usables_ProjectileUsable__FixedUpdateGameplay(plVar6,auVar31._8_8_);
  if (plVar6[0x1f] != 0) {
    lVar14 = *(long *)(plVar6[0x1f] + 0x18);
    lVar12 = plVar6[0x1c];
    uVar28 = *(uint *)((long)plVar6 + 0xe4);
    uVar29 = *(uint *)(plVar6 + 0x1d);
    param_4 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
    param_2 = (ulong)uVar28;
    param_3 = (ulong)uVar29;
    /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec((int)lVar12,0);
    if (lVar14 != 0) {
      if (pcRam0000000003ec2948 == (code *)0x0) {
        pcRam0000000003ec2948 =
             (code *)func_0x00f789d4("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)"
                                     ,0);
      }
      plVar4 = (long *)(*pcRam0000000003ec2948)(lVar14,&stack0xffffffffffffffb0);
      return plVar4;
    }
  }
  auVar32 = func_0x00f78af4();
  plVar4 = auVar32._0_8_;
  puStack_68 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__DeSpawn;
  ppuStack_70 = &puStack_30;
  if ((bRam0000000003eb4b85 & 1) == 0) {
    func_0x00f78a20(0x3d5ff10);
    bRam0000000003eb4b85 = 1;
  }
  if (auVar32._8_4_ != 0) {
    (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
  }
  Atlas_Gameplay_Usables_ProximityHomingProjectile__LoseTarget(plVar4);
  lVar12 = lRam0000000003d5ff10;
  lVar14 = plVar4[2];
  if (lVar14 == 0) {
    plVar6 = (long *)func_0x00f78af4();
    plVar4 = plVar6;
    if ((bRam0000000003eb4b86 & 1) == 0) {
      func_0x00f78a20(0x3d570c0);
      plVar4 = (long *)func_0x00f78a20(0x3d72880);
      bRam0000000003eb4b86 = 1;
    }
    if (*(char *)((long)plVar6 + 300) != '\0') {
      return plVar4;
    }
    lVar12 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar6,0);
    lVar14 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                       (plVar6);
    if ((lVar14 != 0) && (lVar12 != 0)) {
      uVar7 = /*Atlas.Contexts.GameContextBase$$SpawnTimedObject<VFXBehaviour>*/ func_0x0185c108(*(undefined4 *)(lVar14 + 0x98),lVar12,/*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                              uRam0000000003d570c0);
      lVar12 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                         (plVar6);
      if (lVar12 != 0) {
        plStack_c8 = *(long **)(lVar12 + 0xa0);
        lStack_d0 = *(long *)(lVar12 + 0x98);
        pppuStack_c0 = (undefined1 ***)CONCAT44(pppuStack_c0._4_4_,*(undefined4 *)(lVar12 + 0xa8));
        plVar4 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX
                                   (plVar6,uVar7,&lStack_d0);
        return plVar4;
      }
    }
    plVar4 = (long *)func_0x00f78af4();
    uVar29 = (uint)param_3;
    uVar28 = (uint)param_2;
    lVar12 = plVar4[0x36];
    uVar7 = 0;
    lStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    if (plVar4[0x20] != 0) {
      uVar18 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar4[0x20],0);
      param_2 = (ulong)uVar18;
      param_3 = (ulong)uVar28;
      param_4 = uVar29;
      Atlas_Gameplay_Usables_ProjectileUsable__RaycastProjectedNTimes
                (&lStack_148,(int)lVar12,param_2,param_3,uVar29,plVar4,1);
      auVar31 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar4);
      uVar7 = auVar31._8_8_;
      if (auVar31._0_8_ != 0) {
        uStack_128 = uStack_140;
        lStack_130 = lStack_148;
        lStack_120 = CONCAT44(lStack_120._4_4_,uStack_138);
        plVar4 = (long *)(**(code **)(*plVar4 + 0x438))
                                   ((int)lVar12,uVar18,uVar28,uVar29,
                                    *(undefined4 *)(auVar31._0_8_ + 0x8c),plVar4,&lStack_130,0,
                                    *(undefined8 *)(*plVar4 + 0x440));
        return plVar4;
      }
    }
    plVar6 = (long *)func_0x00f78af4(0,uVar7);
    iVar16 = (int)extraout_x1;
    uVar8 = (ulong)param_4;
    fVar23 = (float)param_3;
    fVar27 = (float)param_2;
    plVar4 = plVar6;
    if ((bRam0000000003eb4b7d & 1) == 0) {
      func_0x00f78a20(0x3d39b48);
      func_0x00f78a20(0x3d39b50);
      func_0x00f78a20(0x3d39b40);
      func_0x00f78a20(0x3d39b58);
      func_0x00f78a20(0x3d39b60);
      func_0x00f78a20(0x3d1d768);
      func_0x00f78a20(0x3d23990);
      plVar4 = (long *)func_0x00f78a20(0x3d42d70);
      bRam0000000003eb4b7d = 1;
    }
    fStack_200 = 0.0;
    fStack_1fc = 0.0;
    fStack_1f8 = 0.0;
    fStack_1f4 = 0.0;
    uStack_210._4_4_ = 0;
    uStack_208 = 0;
    uStack_210._0_4_ = 0;
    lStack_228 = 0;
    lStack_230 = 0;
    uStack_218 = 0;
    uStack_214 = 0;
    puStack_220 = (undefined8 *)0x0;
    if (-1 < iVar16) {
      lVar12 = func_0x00f78aec(/*System.Collections.Generic.List<ValueTuple<float, Vector3>>_TypeInfo*/ uRam0000000003d1d768);
      /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$.ctor*/ func_0x023669cc(lVar12,uRam0000000003d39b40);
      uVar7 = extraout_x1;
      if (iVar16 != 0x7fffffff) goto LAB_014cee54;
LAB_014cee4c:
      if (lVar12 == 0) {
        do {
          iVar16 = (int)uVar7;
          func_0x00f78af4();
LAB_014cee54:
          iVar16 = iVar16 + 1;
          while( true ) {
            uVar21 = (undefined4)param_3;
            uVar22 = (undefined4)param_2;
            uVar19 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
            auStack_250._8_8_ = 0;
            uStack_240 = (undefined8 *)0x0;
            puStack_238 = (undefined *)0x0;
            fVar26 = (float)uVar8;
            fVar24 = fVar26;
            fVar20 = fVar23;
            /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar27,fVar23,uVar8,uVar19,uVar22,uVar21,auStack_250 + 8,0);
            fVar30 = *(float *)(plVar6 + 0x29);
            uVar7 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8((int)plVar6[0x2a],0);
            uStack_258 = (ulong)uStack_240;
            uStack_260 = auStack_250._8_8_;
            auStack_250._0_8_ = puStack_238;
            /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar30 + extraout_s0,&uStack_260,&lStack_230,uVar7,1,0);
            fVar30 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
            fVar25 = *(float *)(plVar6 + 0x29) + extraout_s0;
            param_2 = (ulong)(uint)fVar23;
            param_3 = uVar8;
            /*Debug$$DrawLine*/ func_0x0162ee40(fVar27,param_2,uVar8,fVar27 + fVar30 * fVar25,fVar23 + fVar20 * fVar25,
                            fVar26 + fVar24 * fVar25,0);
            uVar7 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&lStack_230,0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
            uVar19 = (undefined4)param_3;
            if ((uVar3 & 1) != 0) goto LAB_014cee4c;
            fVar23 = (float)param_2;
            /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&lStack_230,0);
            fVar24 = fVar23;
            uVar28 = /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&lStack_230,0);
            auStack_250._8_8_ = 0;
            uStack_240 = (undefined8 *)0x0;
            param_2 = (ulong)uVar28;
            param_3 = (ulong)(uint)fVar24;
            /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar23,param_2,param_3,uVar19,auStack_250 + 8,uRam0000000003d42d70);
            if (lVar12 == 0) break;
            param_2 = (ulong)auStack_250._8_8_ >> 0x20;
            param_3 = (ulong)uStack_240 & 0xffffffff;
            /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$Add*/ func_0x023676a4(auStack_250._8_8_ & 0xffffffff,param_2,param_3,uStack_240._4_4_,lVar12,
                            uRam0000000003d39b48);
            lVar14 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar6)
            ;
            fVar24 = (float)param_3;
            if (((lVar14 == 0) || (plVar6[0x1f] == 0)) ||
               (lVar11 = *(long *)(plVar6[0x1f] + 0x18), lVar11 == 0)) break;
            fVar23 = fVar23 + extraout_s0;
            fVar25 = fVar23 + *(float *)(lVar14 + 0x8c);
            fVar20 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar11,0);
            fVar30 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
            param_2 = (ulong)(uint)(fVar20 * fVar30);
            param_3 = (ulong)(uint)(fVar23 * fVar30);
            fVar27 = fVar27 + fVar20 * fVar30;
            fVar23 = fVar25 + fVar23 * fVar30;
            uVar8 = (ulong)(uint)(fVar26 + fVar24 * fVar30);
            iVar16 = iVar16 + -1;
            if (iVar16 == 0) goto LAB_014cf018;
          }
        } while( true );
      }
LAB_014cf018:
      fVar23 = _UNK_033f83ec;
      uVar8 = 0;
      lVar14 = 0x20;
      lVar11 = 0x100000000;
      do {
        uVar22 = (undefined4)param_3;
        uVar19 = (undefined4)param_2;
        uVar3 = (ulong)*(uint *)(lVar12 + 0x18);
        if ((long)(int)(*(uint *)(lVar12 + 0x18) - 1) <= (long)uVar8) goto LAB_014cf0b0;
        if (uVar3 <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar3 = (ulong)*(uint *)(lVar12 + 0x18);
        }
        lVar15 = *(long *)(lVar12 + 0x10);
        fVar27 = *(float *)(lVar15 + lVar14);
        uVar8 = uVar8 + 1;
        if (uVar3 <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar15 = *(long *)(lVar12 + 0x10);
        }
        uVar22 = (undefined4)param_3;
        uVar19 = (undefined4)param_2;
        lVar17 = lVar11 >> 0x1c;
        lVar14 = lVar14 + 0x10;
        lVar11 = lVar11 + 0x100000000;
      } while (ABS(fVar27 - *(float *)(lVar15 + lVar17 + 0x20)) <= fVar23);
      /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$RemoveRange*/ func_0x02369000(lVar12,uVar8,*(int *)(lVar12 + 0x18) - (int)uVar8,uRam0000000003d39b50);
LAB_014cf0b0:
      uVar21 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      plVar4 = (long *)/*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(0,uVar21,uVar19,uVar22,&fStack_200,uRam0000000003d42d70);
      uVar28 = *(uint *)(lVar12 + 0x18);
      if (-1 < (int)(uVar28 - 1)) {
        fVar27 = 0.0;
        iVar16 = uVar28 - 2;
        fVar23 = 1.0;
        while( true ) {
          uVar29 = iVar16 + 1;
          if (1 < uVar29) {
            fVar23 = fVar23 + fVar23;
          }
          if (uVar28 <= uVar29) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            uVar28 = *(uint *)(lVar12 + 0x18);
          }
          fVar24 = fStack_200;
          lVar14 = *(long *)(lVar12 + 0x10);
          fVar20 = *(float *)(lVar14 + (ulong)uVar29 * 0x10 + 0x20);
          if (uVar28 <= uVar29) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar14 = *(long *)(lVar12 + 0x10);
          }
          lVar14 = lVar14 + (ulong)uVar29 * 0x10;
          uVar7 = *(undefined8 *)(lVar14 + 0x24);
          fVar30 = (float)((ulong)uVar7 >> 0x20) * fVar23 + fStack_1f8;
          auStack_250._8_8_ = 0;
          uStack_240 = (undefined8 *)0x0;
          plVar4 = (long *)/*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar23 * fVar20 + fVar24,
                                           CONCAT44(fVar30,(float)uVar7 * fVar23 + fStack_1fc),
                                           fVar30,fVar23 * *(float *)(lVar14 + 0x2c) + fStack_1f4,
                                           auStack_250 + 8,uRam0000000003d42d70);
          fStack_1f8 = SUB84(uStack_240,0);
          fStack_1f4 = (float)((ulong)uStack_240 >> 0x20);
          fStack_200 = (float)auStack_250._8_8_;
          fStack_1fc = SUB84(auStack_250._8_8_,4);
          fVar27 = fVar27 + fVar23;
          if (iVar16 < 0) break;
          uVar28 = *(uint *)(lVar12 + 0x18);
          iVar16 = iVar16 + -1;
        }
        if (fVar27 != 0.0) {
          *(undefined1 *)extraout_x8 = 1;
          *(undefined2 *)((long)extraout_x8 + 1) = 0;
          *(undefined1 *)((long)extraout_x8 + 3) = 0;
          *(ulong *)((long)extraout_x8 + 0xc) = CONCAT44(fStack_1f4 / fVar27,fStack_1f8 / fVar27);
          *(ulong *)((long)extraout_x8 + 4) = CONCAT44(fStack_1fc / fVar27,fStack_200 / fVar27);
          return plVar4;
        }
      }
    }
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    *(undefined4 *)(extraout_x8 + 2) = 0;
    return plVar4;
  }
  lVar11 = lRam0000000003d5ff10;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (plVar4 == (long *)0x0) goto code_r0x01a3f500;
  lVar15 = plVar4[9];
  lVar17 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
  if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar17);
  }
  if (lVar15 == 0) {
code_r0x01a3f450:
    lVar5 = 0;
  }
  else {
    lVar5 = func_0x00f78adc(lVar15,lVar17);
    if (lVar5 == 0) {
      func_0x00f78e5c(lVar15,lVar17);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*plVar4 + 0x218))(plVar4,*(undefined8 *)(*plVar4 + 0x220));
  lVar15 = *(long *)(lVar14 + 0x18);
  unaff_x24 = *(long **)(*(long *)(lVar12 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), lVar15 != 0))
  {
    param_8 = *(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x18);
    (*(code *)*param_8)(lVar15,uVar7);
    lVar11 = lVar5;
    if (*(long *)(lVar14 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar4 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x20))
                                 (*(long *)(lVar14 + 0x10),plVar4);
      return plVar4;
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  lStack_d0 = lVar12;
  puStack_b8 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar12 = lVar11;
  puVar10 = param_8;
  lVar14 = param_9;
  plStack_c8 = plVar4;
  pppuStack_c0 = &ppuStack_70;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_8 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_148,param_8,uRam0000000003d3a7d0);
  uStack_128 = uStack_140;
  lStack_130 = lStack_148;
  lStack_120 = CONCAT44(uStack_134,uStack_138);
  while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_130,uRam0000000003d325c8), lVar15 = lStack_120,
        (uVar8 & 1) != 0) {
    lVar17 = **(long **)(param_9 + 0x30);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    if (lVar15 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar5 = func_0x00f78adc(lVar15,lVar17);
    if (lVar5 == 0) {
      func_0x00f78e5c(lVar15,lVar17);
      goto code_r0x01a3f6f0;
    }
    if ((*(long *)(lVar5 + 0x28) == extraout_x1_00) && (*(char *)(lVar5 + 0x18) != '\0')) {
      if (lVar11 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar12 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar11);
    }
  }
  param_9 = 0;
  do {
    lStack_148 = *unaff_x25;
    uVar8 = (ulong)*(ushort *)(lStack_148 + 0x12a);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lStack_148 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lStack_148 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar13 = piVar13 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar12 = 0;
    puVar9 = (undefined8 *)func_0x00fac1f0(&lStack_148);
code_r0x01a3f69c:
    plVar4 = (long *)(*(code *)*puVar9)(&uStack_140,puVar9[1]);
    if (param_9 == 0) {
      return plVar4;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_9,0);
    if (extraout_w1 != 1) break;
    plVar4 = (long *)___cxa_begin_catch();
    param_9 = *plVar4;
    ___cxa_end_catch();
  } while( true );
  auVar31 = __Unwind_Resume();
  lVar11 = lVar12;
  puVar9 = puVar10;
  if ((*(long *)(auVar31._0_8_ + 0x20) != 0) &&
     (lVar15 = (*(code *)**(undefined8 **)puVar10[6])(), lVar15 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar4 = (long *)(*(code *)**(undefined8 **)(puVar10[6] + 8))
                               (auVar31._0_8_,auVar31._8_8_,lVar12,*(undefined8 *)(lVar15 + 0x10));
    return plVar4;
  }
  auVar31 = func_0x00f78af4();
  lVar15 = auVar31._8_8_;
  plVar4 = (long *)0x3eb6000;
  lVar12 = lVar11;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar31._0_8_ + 0x18) == 0) ||
       (lVar17 = (**(code **)**(undefined8 **)(lVar14 + 0x30))(), lVar17 == 0)) ||
      (lVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(), lVar17 == 0)) ||
     (lVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))(), lVar17 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar4 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))(&fStack_1f8);
  do {
    uVar8 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&stack0xfffffffffffffe20,
                            *(undefined8 *)(*(long *)(lVar14 + 0x30) + 0x30));
    if ((uVar8 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
      do {
        lVar14 = *(long *)(*(long *)(lVar14 + 0x30) + 0x38);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        fStack_1f8 = (float)lVar14;
        fStack_1f4 = (float)((ulong)lVar14 >> 0x20);
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar4) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar13 = piVar13 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        lVar12 = 0;
        puVar10 = (undefined8 *)func_0x00fac1f0(&fStack_1f8);
code_r0x01a3f920:
        plVar6 = (long *)(*(code *)*puVar10)(&stack0xfffffffffffffe10,puVar10[1]);
        if (puVar9 == (undefined8 *)0x0) {
          return plVar6;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar9,0);
        if (extraout_w1_00 != 1) {
          auVar31 = __Unwind_Resume();
          lVar17 = auVar31._0_8_;
          uStack_218 = (undefined4)lVar14;
          uStack_214 = (undefined4)((ulong)lVar14 >> 0x20);
          uStack_208 = 0x1a3f9ac;
          uStack_204 = 0;
          lStack_230 = lVar15;
          lStack_228 = lVar11;
          puStack_220 = puVar9;
          uStack_210 = &stack0xfffffffffffffe70;
          plVar4 = (long *)(**(code **)**(undefined8 **)(lVar12 + 0x30))();
          if (plVar4 == (long *)0x0) {
            puVar10 = (undefined8 *)func_0x00f78af4();
            puStack_238 = &System_Threading_Volatile__Read_object_;
            plVar4 = (long *)*puVar10;
            uStack_240 = &uStack_210;
            auStack_250 = auVar31;
            func_0x00f78a30();
            return plVar4;
          }
          (**(code **)(*plVar4 + 0x1e8))
                    (plVar4,lVar17,auVar31._8_8_,*(undefined8 *)(lVar17 + 0x38),
                     *(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(*plVar4 + 0x1f0));
          return plVar4;
        }
        puVar9 = (undefined8 *)___cxa_begin_catch();
        puVar9 = (undefined8 *)*puVar9;
        ___cxa_end_catch();
      } while( true );
    }
    lVar17 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&stack0xfffffffffffffe20,
                             *(undefined8 *)(*(long *)(lVar14 + 0x30) + 0x20));
    if (lVar11 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar11,0);
    if (lVar17 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar17 + 0x48) = puVar9;
    if (lVar15 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar12 = *(long *)(lVar15 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar17,lVar11,lVar12,0);
  } while( true );
}



// ============================================================
// RVA: 0x14d13e8 | Atlas.Gameplay.Usables.ProximityHomingProjectile.FixedUpdateGameplay
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_ProximityHomingProjectile__FixedUpdateGameplay
                 (undefined1 param_1 [16],ulong param_2,ulong param_3,uint param_4,long *param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 *param_8,long param_9)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long lVar11;
  undefined8 *extraout_x8;
  long lVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long *unaff_x24;
  long lVar17;
  long *unaff_x25;
  uint uVar18;
  float extraout_s0;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  ulong uStack_240;
  ulong uStack_238;
  undefined1 auStack_230 [16];
  undefined8 uStack_220;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 *puStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  long lStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_b0;
  long *plStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  plVar4 = param_5;
  if (((char)param_5[3] == '\0') ||
     (plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_5,0),
     ((ulong)plVar4 & 1) != 0)) {
    return plVar4;
  }
  bVar2 = false;
  if (*(char *)((long)param_5 + 0x11c) != '\0') {
    bVar2 = (char)param_5[0x39] == '\0';
  }
  *(bool *)((long)param_5 + 0x11c) = bVar2;
  Atlas_Gameplay_Usables_ProjectileUsable__FixedUpdateGameplay(param_5,param_6);
  if (param_5[0x1f] != 0) {
    lVar14 = *(long *)(param_5[0x1f] + 0x18);
    lVar11 = param_5[0x1c];
    uVar28 = *(uint *)((long)param_5 + 0xe4);
    uVar29 = *(uint *)(param_5 + 0x1d);
    param_4 = /*UnityEngine.Vector3$$get_up*/ func_0x0327576c(0);
    param_2 = (ulong)uVar28;
    param_3 = (ulong)uVar29;
    /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec((int)lVar11,0);
    if (lVar14 != 0) {
      if (pcRam0000000003ec2948 == (code *)0x0) {
        pcRam0000000003ec2948 =
             (code *)func_0x00f789d4("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)"
                                     ,0);
      }
      plVar4 = (long *)(*pcRam0000000003ec2948)(lVar14,&stack0xffffffffffffffd0);
      return plVar4;
    }
  }
  auVar32 = func_0x00f78af4();
  plVar4 = auVar32._0_8_;
  puStack_48 = &Atlas_Gameplay_Usables_ProximityHomingProjectile__DeSpawn;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b85 & 1) == 0) {
    func_0x00f78a20(0x3d5ff10);
    bRam0000000003eb4b85 = 1;
  }
  if (auVar32._8_4_ != 0) {
    (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
  }
  Atlas_Gameplay_Usables_ProximityHomingProjectile__LoseTarget(plVar4);
  lVar11 = lRam0000000003d5ff10;
  lVar14 = plVar4[2];
  if (lVar14 == 0) {
    plVar6 = (long *)func_0x00f78af4();
    plVar4 = plVar6;
    if ((bRam0000000003eb4b86 & 1) == 0) {
      func_0x00f78a20(0x3d570c0);
      plVar4 = (long *)func_0x00f78a20(0x3d72880);
      bRam0000000003eb4b86 = 1;
    }
    if (*(char *)((long)plVar6 + 300) != '\0') {
      return plVar4;
    }
    lVar11 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar6,0);
    lVar14 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                       (plVar6);
    if ((lVar14 != 0) && (lVar11 != 0)) {
      uVar7 = /*Atlas.Contexts.GameContextBase$$SpawnTimedObject<VFXBehaviour>*/ func_0x0185c108(*(undefined4 *)(lVar14 + 0x98),lVar11,/*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                              uRam0000000003d570c0);
      lVar11 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                         (plVar6);
      if (lVar11 != 0) {
        plStack_a8 = *(long **)(lVar11 + 0xa0);
        lStack_b0 = *(long *)(lVar11 + 0x98);
        ppuStack_a0 = (undefined1 **)CONCAT44(ppuStack_a0._4_4_,*(undefined4 *)(lVar11 + 0xa8));
        plVar4 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX
                                   (plVar6,uVar7,&lStack_b0);
        return plVar4;
      }
    }
    plVar4 = (long *)func_0x00f78af4();
    uVar29 = (uint)param_3;
    uVar28 = (uint)param_2;
    lVar11 = plVar4[0x36];
    uVar7 = 0;
    lStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    if (plVar4[0x20] != 0) {
      uVar18 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar4[0x20],0);
      param_2 = (ulong)uVar18;
      param_3 = (ulong)uVar28;
      param_4 = uVar29;
      Atlas_Gameplay_Usables_ProjectileUsable__RaycastProjectedNTimes
                (&lStack_128,(int)lVar11,param_2,param_3,uVar29,plVar4,1);
      auVar31 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar4);
      uVar7 = auVar31._8_8_;
      if (auVar31._0_8_ != 0) {
        uStack_108 = uStack_120;
        lStack_110 = lStack_128;
        lStack_100 = CONCAT44(lStack_100._4_4_,uStack_118);
        plVar4 = (long *)(**(code **)(*plVar4 + 0x438))
                                   ((int)lVar11,uVar18,uVar28,uVar29,
                                    *(undefined4 *)(auVar31._0_8_ + 0x8c),plVar4,&lStack_110,0,
                                    *(undefined8 *)(*plVar4 + 0x440));
        return plVar4;
      }
    }
    plVar6 = (long *)func_0x00f78af4(0,uVar7);
    iVar16 = (int)extraout_x1;
    uVar8 = (ulong)param_4;
    fVar23 = (float)param_3;
    fVar27 = (float)param_2;
    plVar4 = plVar6;
    if ((bRam0000000003eb4b7d & 1) == 0) {
      func_0x00f78a20(0x3d39b48);
      func_0x00f78a20(0x3d39b50);
      func_0x00f78a20(0x3d39b40);
      func_0x00f78a20(0x3d39b58);
      func_0x00f78a20(0x3d39b60);
      func_0x00f78a20(0x3d1d768);
      func_0x00f78a20(0x3d23990);
      plVar4 = (long *)func_0x00f78a20(0x3d42d70);
      bRam0000000003eb4b7d = 1;
    }
    fStack_1e0 = 0.0;
    fStack_1dc = 0.0;
    fStack_1d8 = 0.0;
    fStack_1d4 = 0.0;
    uStack_1f0._4_4_ = 0;
    uStack_1e8 = 0;
    uStack_1f0._0_4_ = 0;
    lStack_208 = 0;
    lStack_210 = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    puStack_200 = (undefined8 *)0x0;
    if (-1 < iVar16) {
      lVar11 = func_0x00f78aec(/*System.Collections.Generic.List<ValueTuple<float, Vector3>>_TypeInfo*/ uRam0000000003d1d768);
      /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$.ctor*/ func_0x023669cc(lVar11,uRam0000000003d39b40);
      uVar7 = extraout_x1;
      if (iVar16 != 0x7fffffff) goto LAB_014cee54;
LAB_014cee4c:
      if (lVar11 == 0) {
        do {
          iVar16 = (int)uVar7;
          func_0x00f78af4();
LAB_014cee54:
          iVar16 = iVar16 + 1;
          while( true ) {
            uVar21 = (undefined4)param_3;
            uVar22 = (undefined4)param_2;
            uVar19 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
            auStack_230._8_8_ = 0;
            uStack_220 = (undefined8 *)0x0;
            puStack_218 = (undefined *)0x0;
            fVar26 = (float)uVar8;
            fVar24 = fVar26;
            fVar20 = fVar23;
            /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar27,fVar23,uVar8,uVar19,uVar22,uVar21,auStack_230 + 8,0);
            fVar30 = *(float *)(plVar6 + 0x29);
            uVar7 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8((int)plVar6[0x2a],0);
            uStack_238 = (ulong)uStack_220;
            uStack_240 = auStack_230._8_8_;
            auStack_230._0_8_ = puStack_218;
            /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar30 + extraout_s0,&uStack_240,&lStack_210,uVar7,1,0);
            fVar30 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
            fVar25 = *(float *)(plVar6 + 0x29) + extraout_s0;
            param_2 = (ulong)(uint)fVar23;
            param_3 = uVar8;
            /*Debug$$DrawLine*/ func_0x0162ee40(fVar27,param_2,uVar8,fVar27 + fVar30 * fVar25,fVar23 + fVar20 * fVar25,
                            fVar26 + fVar24 * fVar25,0);
            uVar7 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&lStack_210,0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
            uVar19 = (undefined4)param_3;
            if ((uVar3 & 1) != 0) goto LAB_014cee4c;
            fVar23 = (float)param_2;
            /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&lStack_210,0);
            fVar24 = fVar23;
            uVar28 = /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&lStack_210,0);
            auStack_230._8_8_ = 0;
            uStack_220 = (undefined8 *)0x0;
            param_2 = (ulong)uVar28;
            param_3 = (ulong)(uint)fVar24;
            /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar23,param_2,param_3,uVar19,auStack_230 + 8,uRam0000000003d42d70);
            if (lVar11 == 0) break;
            param_2 = (ulong)auStack_230._8_8_ >> 0x20;
            param_3 = (ulong)uStack_220 & 0xffffffff;
            /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$Add*/ func_0x023676a4(auStack_230._8_8_ & 0xffffffff,param_2,param_3,uStack_220._4_4_,lVar11,
                            uRam0000000003d39b48);
            lVar14 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar6)
            ;
            fVar24 = (float)param_3;
            if (((lVar14 == 0) || (plVar6[0x1f] == 0)) ||
               (lVar12 = *(long *)(plVar6[0x1f] + 0x18), lVar12 == 0)) break;
            fVar23 = fVar23 + extraout_s0;
            fVar25 = fVar23 + *(float *)(lVar14 + 0x8c);
            fVar20 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar12,0);
            fVar30 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
            param_2 = (ulong)(uint)(fVar20 * fVar30);
            param_3 = (ulong)(uint)(fVar23 * fVar30);
            fVar27 = fVar27 + fVar20 * fVar30;
            fVar23 = fVar25 + fVar23 * fVar30;
            uVar8 = (ulong)(uint)(fVar26 + fVar24 * fVar30);
            iVar16 = iVar16 + -1;
            if (iVar16 == 0) goto LAB_014cf018;
          }
        } while( true );
      }
LAB_014cf018:
      fVar23 = _UNK_033f83ec;
      uVar8 = 0;
      lVar14 = 0x20;
      lVar12 = 0x100000000;
      do {
        uVar22 = (undefined4)param_3;
        uVar19 = (undefined4)param_2;
        uVar3 = (ulong)*(uint *)(lVar11 + 0x18);
        if ((long)(int)(*(uint *)(lVar11 + 0x18) - 1) <= (long)uVar8) goto LAB_014cf0b0;
        if (uVar3 <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar3 = (ulong)*(uint *)(lVar11 + 0x18);
        }
        lVar15 = *(long *)(lVar11 + 0x10);
        fVar27 = *(float *)(lVar15 + lVar14);
        uVar8 = uVar8 + 1;
        if (uVar3 <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar15 = *(long *)(lVar11 + 0x10);
        }
        uVar22 = (undefined4)param_3;
        uVar19 = (undefined4)param_2;
        lVar17 = lVar12 >> 0x1c;
        lVar14 = lVar14 + 0x10;
        lVar12 = lVar12 + 0x100000000;
      } while (ABS(fVar27 - *(float *)(lVar15 + lVar17 + 0x20)) <= fVar23);
      /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$RemoveRange*/ func_0x02369000(lVar11,uVar8,*(int *)(lVar11 + 0x18) - (int)uVar8,uRam0000000003d39b50);
LAB_014cf0b0:
      uVar21 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      plVar4 = (long *)/*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(0,uVar21,uVar19,uVar22,&fStack_1e0,uRam0000000003d42d70);
      uVar28 = *(uint *)(lVar11 + 0x18);
      if (-1 < (int)(uVar28 - 1)) {
        fVar27 = 0.0;
        iVar16 = uVar28 - 2;
        fVar23 = 1.0;
        while( true ) {
          uVar29 = iVar16 + 1;
          if (1 < uVar29) {
            fVar23 = fVar23 + fVar23;
          }
          if (uVar28 <= uVar29) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            uVar28 = *(uint *)(lVar11 + 0x18);
          }
          fVar24 = fStack_1e0;
          lVar14 = *(long *)(lVar11 + 0x10);
          fVar20 = *(float *)(lVar14 + (ulong)uVar29 * 0x10 + 0x20);
          if (uVar28 <= uVar29) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar14 = *(long *)(lVar11 + 0x10);
          }
          lVar14 = lVar14 + (ulong)uVar29 * 0x10;
          uVar7 = *(undefined8 *)(lVar14 + 0x24);
          fVar30 = (float)((ulong)uVar7 >> 0x20) * fVar23 + fStack_1d8;
          auStack_230._8_8_ = 0;
          uStack_220 = (undefined8 *)0x0;
          plVar4 = (long *)/*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar23 * fVar20 + fVar24,
                                           CONCAT44(fVar30,(float)uVar7 * fVar23 + fStack_1dc),
                                           fVar30,fVar23 * *(float *)(lVar14 + 0x2c) + fStack_1d4,
                                           auStack_230 + 8,uRam0000000003d42d70);
          fStack_1d8 = SUB84(uStack_220,0);
          fStack_1d4 = (float)((ulong)uStack_220 >> 0x20);
          fStack_1e0 = (float)auStack_230._8_8_;
          fStack_1dc = SUB84(auStack_230._8_8_,4);
          fVar27 = fVar27 + fVar23;
          if (iVar16 < 0) break;
          uVar28 = *(uint *)(lVar11 + 0x18);
          iVar16 = iVar16 + -1;
        }
        if (fVar27 != 0.0) {
          *(undefined1 *)extraout_x8 = 1;
          *(undefined2 *)((long)extraout_x8 + 1) = 0;
          *(undefined1 *)((long)extraout_x8 + 3) = 0;
          *(ulong *)((long)extraout_x8 + 0xc) = CONCAT44(fStack_1d4 / fVar27,fStack_1d8 / fVar27);
          *(ulong *)((long)extraout_x8 + 4) = CONCAT44(fStack_1dc / fVar27,fStack_1e0 / fVar27);
          return plVar4;
        }
      }
    }
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    *(undefined4 *)(extraout_x8 + 2) = 0;
    return plVar4;
  }
  lVar12 = lRam0000000003d5ff10;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (plVar4 == (long *)0x0) goto code_r0x01a3f500;
  lVar15 = plVar4[9];
  lVar17 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
  if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar17);
  }
  if (lVar15 == 0) {
code_r0x01a3f450:
    lVar5 = 0;
  }
  else {
    lVar5 = func_0x00f78adc(lVar15,lVar17);
    if (lVar5 == 0) {
      func_0x00f78e5c(lVar15,lVar17);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*plVar4 + 0x218))(plVar4,*(undefined8 *)(*plVar4 + 0x220));
  lVar15 = *(long *)(lVar14 + 0x18);
  unaff_x24 = *(long **)(*(long *)(lVar11 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), lVar15 != 0))
  {
    param_8 = *(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x18);
    (*(code *)*param_8)(lVar15,uVar7);
    lVar12 = lVar5;
    if (*(long *)(lVar14 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar4 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x20))
                                 (*(long *)(lVar14 + 0x10),plVar4);
      return plVar4;
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  lStack_b0 = lVar11;
  puStack_98 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar11 = lVar12;
  puVar10 = param_8;
  lVar14 = param_9;
  plStack_a8 = plVar4;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_8 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_128,param_8,uRam0000000003d3a7d0);
  uStack_108 = uStack_120;
  lStack_110 = lStack_128;
  lStack_100 = CONCAT44(uStack_114,uStack_118);
  while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_110,uRam0000000003d325c8), lVar15 = lStack_100,
        (uVar8 & 1) != 0) {
    lVar17 = **(long **)(param_9 + 0x30);
    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar17);
    }
    if (lVar15 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar5 = func_0x00f78adc(lVar15,lVar17);
    if (lVar5 == 0) {
      func_0x00f78e5c(lVar15,lVar17);
      goto code_r0x01a3f6f0;
    }
    if ((*(long *)(lVar5 + 0x28) == extraout_x1_00) && (*(char *)(lVar5 + 0x18) != '\0')) {
      if (lVar12 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar11 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar12);
    }
  }
  param_9 = 0;
  do {
    lStack_128 = *unaff_x25;
    uVar8 = (ulong)*(ushort *)(lStack_128 + 0x12a);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lStack_128 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lStack_128 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar13 = piVar13 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar11 = 0;
    puVar9 = (undefined8 *)func_0x00fac1f0(&lStack_128);
code_r0x01a3f69c:
    plVar4 = (long *)(*(code *)*puVar9)(&uStack_120,puVar9[1]);
    if (param_9 == 0) {
      return plVar4;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_9,0);
    if (extraout_w1 != 1) break;
    plVar4 = (long *)___cxa_begin_catch();
    param_9 = *plVar4;
    ___cxa_end_catch();
  } while( true );
  auVar31 = __Unwind_Resume();
  lVar12 = lVar11;
  puVar9 = puVar10;
  if ((*(long *)(auVar31._0_8_ + 0x20) != 0) &&
     (lVar15 = (*(code *)**(undefined8 **)puVar10[6])(), lVar15 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar4 = (long *)(*(code *)**(undefined8 **)(puVar10[6] + 8))
                               (auVar31._0_8_,auVar31._8_8_,lVar11,*(undefined8 *)(lVar15 + 0x10));
    return plVar4;
  }
  auVar31 = func_0x00f78af4();
  lVar15 = auVar31._8_8_;
  plVar4 = (long *)0x3eb6000;
  lVar11 = lVar12;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar31._0_8_ + 0x18) == 0) ||
       (lVar17 = (**(code **)**(undefined8 **)(lVar14 + 0x30))(), lVar17 == 0)) ||
      (lVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(), lVar17 == 0)) ||
     (lVar17 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x10))(), lVar17 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar4 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 0x18))(&fStack_1d8);
  do {
    uVar8 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&stack0xfffffffffffffe40,
                            *(undefined8 *)(*(long *)(lVar14 + 0x30) + 0x30));
    if ((uVar8 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
      do {
        lVar14 = *(long *)(*(long *)(lVar14 + 0x30) + 0x38);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        fStack_1d8 = (float)lVar14;
        fStack_1d4 = (float)((ulong)lVar14 >> 0x20);
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar4) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar13 = piVar13 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        lVar11 = 0;
        puVar10 = (undefined8 *)func_0x00fac1f0(&fStack_1d8);
code_r0x01a3f920:
        plVar6 = (long *)(*(code *)*puVar10)(&stack0xfffffffffffffe30,puVar10[1]);
        if (puVar9 == (undefined8 *)0x0) {
          return plVar6;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar9,0);
        if (extraout_w1_00 != 1) {
          auVar31 = __Unwind_Resume();
          lVar17 = auVar31._0_8_;
          uStack_1f8 = (undefined4)lVar14;
          uStack_1f4 = (undefined4)((ulong)lVar14 >> 0x20);
          uStack_1e8 = 0x1a3f9ac;
          uStack_1e4 = 0;
          lStack_210 = lVar15;
          lStack_208 = lVar12;
          puStack_200 = puVar9;
          uStack_1f0 = &stack0xfffffffffffffe90;
          plVar4 = (long *)(**(code **)**(undefined8 **)(lVar11 + 0x30))();
          if (plVar4 == (long *)0x0) {
            puVar10 = (undefined8 *)func_0x00f78af4();
            puStack_218 = &System_Threading_Volatile__Read_object_;
            plVar4 = (long *)*puVar10;
            uStack_220 = &uStack_1f0;
            auStack_230 = auVar31;
            func_0x00f78a30();
            return plVar4;
          }
          (**(code **)(*plVar4 + 0x1e8))
                    (plVar4,lVar17,auVar31._8_8_,*(undefined8 *)(lVar17 + 0x38),
                     *(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(*plVar4 + 0x1f0));
          return plVar4;
        }
        puVar9 = (undefined8 *)___cxa_begin_catch();
        puVar9 = (undefined8 *)*puVar9;
        ___cxa_end_catch();
      } while( true );
    }
    lVar17 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&stack0xfffffffffffffe40,
                             *(undefined8 *)(*(long *)(lVar14 + 0x30) + 0x20));
    if (lVar12 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar12,0);
    if (lVar17 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar17 + 0x48) = puVar9;
    if (lVar15 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar11 = *(long *)(lVar15 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar17,lVar12,lVar11,0);
  } while( true );
}



// ============================================================
// RVA: 0x14d14b0 | Atlas.Gameplay.Usables.ProximityHomingProjectile.DeSpawn
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_ProximityHomingProjectile__DeSpawn
                 (undefined1 param_1 [16],ulong param_2,ulong param_3,uint param_4,long *param_5,
                 int param_6,undefined8 param_7,undefined8 *param_8,long param_9)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long lVar11;
  undefined8 *extraout_x8;
  long lVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  long *unaff_x24;
  long lVar16;
  long *unaff_x25;
  uint uVar17;
  float extraout_s0;
  undefined4 uVar18;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  ulong uStack_200;
  ulong uStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb4b85 & 1) == 0) {
    func_0x00f78a20(0x3d5ff10);
    bRam0000000003eb4b85 = 1;
  }
  if (param_6 != 0) {
    (**(code **)(*param_5 + 0x448))(param_5,*(undefined8 *)(*param_5 + 0x450));
  }
  Atlas_Gameplay_Usables_ProximityHomingProjectile__LoseTarget(param_5);
  lVar11 = lRam0000000003d5ff10;
  lVar3 = param_5[2];
  if (lVar3 == 0) {
    plVar10 = (long *)func_0x00f78af4();
    plVar5 = plVar10;
    if ((bRam0000000003eb4b86 & 1) == 0) {
      func_0x00f78a20(0x3d570c0);
      plVar5 = (long *)func_0x00f78a20(0x3d72880);
      bRam0000000003eb4b86 = 1;
    }
    if (*(char *)((long)plVar10 + 300) != '\0') {
      return plVar5;
    }
    lVar11 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar10,0);
    lVar3 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                      (plVar10);
    if ((lVar3 != 0) && (lVar11 != 0)) {
      uVar6 = /*Atlas.Contexts.GameContextBase$$SpawnTimedObject<VFXBehaviour>*/ func_0x0185c108(*(undefined4 *)(lVar3 + 0x98),lVar11,/*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                              uRam0000000003d570c0);
      lVar11 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                         (plVar10);
      if (lVar11 != 0) {
        plStack_68 = *(long **)(lVar11 + 0xa0);
        lStack_70 = *(long *)(lVar11 + 0x98);
        puStack_60 = (undefined1 *)CONCAT44(puStack_60._4_4_,*(undefined4 *)(lVar11 + 0xa8));
        plVar5 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX
                                   (plVar10,uVar6,&lStack_70);
        return plVar5;
      }
    }
    plVar5 = (long *)func_0x00f78af4();
    uVar25 = (uint)param_3;
    uVar19 = (uint)param_2;
    lVar11 = plVar5[0x36];
    uVar6 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    if (plVar5[0x20] != 0) {
      uVar17 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar5[0x20],0);
      param_2 = (ulong)uVar17;
      param_3 = (ulong)uVar19;
      param_4 = uVar25;
      Atlas_Gameplay_Usables_ProjectileUsable__RaycastProjectedNTimes
                (&lStack_e8,(int)lVar11,param_2,param_3,uVar25,plVar5,1);
      auVar30 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar5);
      uVar6 = auVar30._8_8_;
      if (auVar30._0_8_ != 0) {
        uStack_c8 = uStack_e0;
        lStack_d0 = lStack_e8;
        lStack_c0 = CONCAT44(lStack_c0._4_4_,uStack_d8);
        plVar5 = (long *)(**(code **)(*plVar5 + 0x438))
                                   ((int)lVar11,uVar17,uVar19,uVar25,
                                    *(undefined4 *)(auVar30._0_8_ + 0x8c),plVar5,&lStack_d0,0,
                                    *(undefined8 *)(*plVar5 + 0x440));
        return plVar5;
      }
    }
    plVar10 = (long *)func_0x00f78af4(0,uVar6);
    iVar15 = (int)extraout_x1;
    uVar7 = (ulong)param_4;
    fVar23 = (float)param_3;
    fVar28 = (float)param_2;
    plVar5 = plVar10;
    if ((bRam0000000003eb4b7d & 1) == 0) {
      func_0x00f78a20(0x3d39b48);
      func_0x00f78a20(0x3d39b50);
      func_0x00f78a20(0x3d39b40);
      func_0x00f78a20(0x3d39b58);
      func_0x00f78a20(0x3d39b60);
      func_0x00f78a20(0x3d1d768);
      func_0x00f78a20(0x3d23990);
      plVar5 = (long *)func_0x00f78a20(0x3d42d70);
      bRam0000000003eb4b7d = 1;
    }
    fStack_1a0 = 0.0;
    fStack_19c = 0.0;
    fStack_198 = 0.0;
    fStack_194 = 0.0;
    uStack_1b0._4_4_ = 0;
    uStack_1a8 = 0;
    uStack_1b0._0_4_ = 0;
    lStack_1c8 = 0;
    lStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    puStack_1c0 = (undefined8 *)0x0;
    if (-1 < iVar15) {
      lVar11 = func_0x00f78aec(/*System.Collections.Generic.List<ValueTuple<float, Vector3>>_TypeInfo*/ uRam0000000003d1d768);
      /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$.ctor*/ func_0x023669cc(lVar11,uRam0000000003d39b40);
      uVar6 = extraout_x1;
      if (iVar15 != 0x7fffffff) goto LAB_014cee54;
LAB_014cee4c:
      if (lVar11 == 0) {
        do {
          iVar15 = (int)uVar6;
          func_0x00f78af4();
LAB_014cee54:
          iVar15 = iVar15 + 1;
          while( true ) {
            uVar21 = (undefined4)param_3;
            uVar22 = (undefined4)param_2;
            uVar18 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
            auStack_1f0._8_8_ = 0;
            uStack_1e0 = (undefined8 *)0x0;
            puStack_1d8 = (undefined *)0x0;
            fVar27 = (float)uVar7;
            fVar24 = fVar27;
            fVar20 = fVar23;
            /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar28,fVar23,uVar7,uVar18,uVar22,uVar21,auStack_1f0 + 8,0);
            fVar29 = *(float *)(plVar10 + 0x29);
            uVar6 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8((int)plVar10[0x2a],0);
            uStack_1f8 = (ulong)uStack_1e0;
            uStack_200 = auStack_1f0._8_8_;
            auStack_1f0._0_8_ = puStack_1d8;
            /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar29 + extraout_s0,&uStack_200,&lStack_1d0,uVar6,1,0);
            fVar29 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
            fVar26 = *(float *)(plVar10 + 0x29) + extraout_s0;
            param_2 = (ulong)(uint)fVar23;
            param_3 = uVar7;
            /*Debug$$DrawLine*/ func_0x0162ee40(fVar28,param_2,uVar7,fVar28 + fVar29 * fVar26,fVar23 + fVar20 * fVar26,
                            fVar27 + fVar24 * fVar26,0);
            uVar6 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&lStack_1d0,0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
            uVar18 = (undefined4)param_3;
            if ((uVar2 & 1) != 0) goto LAB_014cee4c;
            fVar23 = (float)param_2;
            /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&lStack_1d0,0);
            fVar24 = fVar23;
            uVar19 = /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&lStack_1d0,0);
            auStack_1f0._8_8_ = 0;
            uStack_1e0 = (undefined8 *)0x0;
            param_2 = (ulong)uVar19;
            param_3 = (ulong)(uint)fVar24;
            /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar23,param_2,param_3,uVar18,auStack_1f0 + 8,uRam0000000003d42d70);
            if (lVar11 == 0) break;
            param_2 = (ulong)auStack_1f0._8_8_ >> 0x20;
            param_3 = (ulong)uStack_1e0 & 0xffffffff;
            /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$Add*/ func_0x023676a4(auStack_1f0._8_8_ & 0xffffffff,param_2,param_3,uStack_1e0._4_4_,lVar11,
                            uRam0000000003d39b48);
            lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar10)
            ;
            fVar24 = (float)param_3;
            if (((lVar3 == 0) || (plVar10[0x1f] == 0)) ||
               (lVar12 = *(long *)(plVar10[0x1f] + 0x18), lVar12 == 0)) break;
            fVar23 = fVar23 + extraout_s0;
            fVar26 = fVar23 + *(float *)(lVar3 + 0x8c);
            fVar20 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar12,0);
            fVar29 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
            param_2 = (ulong)(uint)(fVar20 * fVar29);
            param_3 = (ulong)(uint)(fVar23 * fVar29);
            fVar28 = fVar28 + fVar20 * fVar29;
            fVar23 = fVar26 + fVar23 * fVar29;
            uVar7 = (ulong)(uint)(fVar27 + fVar24 * fVar29);
            iVar15 = iVar15 + -1;
            if (iVar15 == 0) goto LAB_014cf018;
          }
        } while( true );
      }
LAB_014cf018:
      fVar23 = _UNK_033f83ec;
      uVar7 = 0;
      lVar3 = 0x20;
      lVar12 = 0x100000000;
      do {
        uVar22 = (undefined4)param_3;
        uVar18 = (undefined4)param_2;
        uVar2 = (ulong)*(uint *)(lVar11 + 0x18);
        if ((long)(int)(*(uint *)(lVar11 + 0x18) - 1) <= (long)uVar7) goto LAB_014cf0b0;
        if (uVar2 <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar2 = (ulong)*(uint *)(lVar11 + 0x18);
        }
        lVar14 = *(long *)(lVar11 + 0x10);
        fVar28 = *(float *)(lVar14 + lVar3);
        uVar7 = uVar7 + 1;
        if (uVar2 <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar14 = *(long *)(lVar11 + 0x10);
        }
        uVar22 = (undefined4)param_3;
        uVar18 = (undefined4)param_2;
        lVar16 = lVar12 >> 0x1c;
        lVar3 = lVar3 + 0x10;
        lVar12 = lVar12 + 0x100000000;
      } while (ABS(fVar28 - *(float *)(lVar14 + lVar16 + 0x20)) <= fVar23);
      /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$RemoveRange*/ func_0x02369000(lVar11,uVar7,*(int *)(lVar11 + 0x18) - (int)uVar7,uRam0000000003d39b50);
LAB_014cf0b0:
      uVar21 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      plVar5 = (long *)/*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(0,uVar21,uVar18,uVar22,&fStack_1a0,uRam0000000003d42d70);
      uVar19 = *(uint *)(lVar11 + 0x18);
      if (-1 < (int)(uVar19 - 1)) {
        fVar28 = 0.0;
        iVar15 = uVar19 - 2;
        fVar23 = 1.0;
        while( true ) {
          uVar25 = iVar15 + 1;
          if (1 < uVar25) {
            fVar23 = fVar23 + fVar23;
          }
          if (uVar19 <= uVar25) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            uVar19 = *(uint *)(lVar11 + 0x18);
          }
          fVar24 = fStack_1a0;
          lVar3 = *(long *)(lVar11 + 0x10);
          fVar20 = *(float *)(lVar3 + (ulong)uVar25 * 0x10 + 0x20);
          if (uVar19 <= uVar25) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar3 = *(long *)(lVar11 + 0x10);
          }
          lVar3 = lVar3 + (ulong)uVar25 * 0x10;
          uVar6 = *(undefined8 *)(lVar3 + 0x24);
          fVar29 = (float)((ulong)uVar6 >> 0x20) * fVar23 + fStack_198;
          auStack_1f0._8_8_ = 0;
          uStack_1e0 = (undefined8 *)0x0;
          plVar5 = (long *)/*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar23 * fVar20 + fVar24,
                                           CONCAT44(fVar29,(float)uVar6 * fVar23 + fStack_19c),
                                           fVar29,fVar23 * *(float *)(lVar3 + 0x2c) + fStack_194,
                                           auStack_1f0 + 8,uRam0000000003d42d70);
          fStack_198 = SUB84(uStack_1e0,0);
          fStack_194 = (float)((ulong)uStack_1e0 >> 0x20);
          fStack_1a0 = (float)auStack_1f0._8_8_;
          fStack_19c = SUB84(auStack_1f0._8_8_,4);
          fVar28 = fVar28 + fVar23;
          if (iVar15 < 0) break;
          uVar19 = *(uint *)(lVar11 + 0x18);
          iVar15 = iVar15 + -1;
        }
        if (fVar28 != 0.0) {
          *(undefined1 *)extraout_x8 = 1;
          *(undefined2 *)((long)extraout_x8 + 1) = 0;
          *(undefined1 *)((long)extraout_x8 + 3) = 0;
          *(ulong *)((long)extraout_x8 + 0xc) = CONCAT44(fStack_194 / fVar28,fStack_198 / fVar28);
          *(ulong *)((long)extraout_x8 + 4) = CONCAT44(fStack_19c / fVar28,fStack_1a0 / fVar28);
          return plVar5;
        }
      }
    }
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    *(undefined4 *)(extraout_x8 + 2) = 0;
    return plVar5;
  }
  lVar12 = lRam0000000003d5ff10;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_5 == (long *)0x0) goto code_r0x01a3f500;
  lVar14 = param_5[9];
  lVar16 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  if (lVar14 == 0) {
code_r0x01a3f450:
    lVar4 = 0;
  }
  else {
    lVar4 = func_0x00f78adc(lVar14,lVar16);
    if (lVar4 == 0) {
      func_0x00f78e5c(lVar14,lVar16);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_5 + 0x218))(param_5,*(undefined8 *)(*param_5 + 0x220));
  lVar14 = *(long *)(lVar3 + 0x18);
  unaff_x24 = *(long **)(*(long *)(lVar11 + 0x30) + 0x10);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if ((plVar5 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0)), lVar14 != 0))
  {
    param_8 = *(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x18);
    (*(code *)*param_8)(lVar14,uVar6);
    lVar12 = lVar4;
    if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x20))
                                 (*(long *)(lVar3 + 0x10),param_5);
      return plVar5;
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  lStack_70 = lVar11;
  puStack_58 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  lVar11 = lVar12;
  puVar9 = param_8;
  lVar3 = param_9;
  plStack_68 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_8 == (undefined8 *)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e8,param_8,uRam0000000003d3a7d0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  lStack_c0 = CONCAT44(uStack_d4,uStack_d8);
  while (uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_d0,uRam0000000003d325c8), lVar14 = lStack_c0,
        (uVar7 & 1) != 0) {
    lVar16 = **(long **)(param_9 + 0x30);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    if (lVar14 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar4 = func_0x00f78adc(lVar14,lVar16);
    if (lVar4 == 0) {
      func_0x00f78e5c(lVar14,lVar16);
      goto code_r0x01a3f6f0;
    }
    if ((*(long *)(lVar4 + 0x28) == extraout_x1_00) && (*(char *)(lVar4 + 0x18) != '\0')) {
      if (lVar12 == 0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      lVar11 = lRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar12);
    }
  }
  param_9 = 0;
  do {
    lStack_e8 = *unaff_x25;
    uVar7 = (ulong)*(ushort *)(lStack_e8 + 0x12a);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lStack_e8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar8 = (undefined8 *)(lStack_e8 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar13 = piVar13 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    lVar11 = 0;
    puVar8 = (undefined8 *)func_0x00fac1f0(&lStack_e8);
code_r0x01a3f69c:
    plVar5 = (long *)(*(code *)*puVar8)(&uStack_e0,puVar8[1]);
    if (param_9 == 0) {
      return plVar5;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_9,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_9 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar30 = __Unwind_Resume();
  lVar12 = lVar11;
  puVar8 = puVar9;
  if ((*(long *)(auVar30._0_8_ + 0x20) != 0) &&
     (lVar14 = (*(code *)**(undefined8 **)puVar9[6])(), lVar14 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (long *)(*(code *)**(undefined8 **)(puVar9[6] + 8))
                               (auVar30._0_8_,auVar30._8_8_,lVar11,*(undefined8 *)(lVar14 + 0x10));
    return plVar5;
  }
  auVar30 = func_0x00f78af4();
  lVar14 = auVar30._8_8_;
  plVar5 = (long *)0x3eb6000;
  lVar11 = lVar12;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar30._0_8_ + 0x18) == 0) ||
       (lVar16 = (**(code **)**(undefined8 **)(lVar3 + 0x30))(), lVar16 == 0)) ||
      (lVar16 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))(), lVar16 == 0)) ||
     (lVar16 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x10))(), lVar16 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar5 = (long *)0x3d220f0;
  (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x18))(&fStack_198);
  do {
    uVar7 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&stack0xfffffffffffffe80,*(undefined8 *)(*(long *)(lVar3 + 0x30) + 0x30)
                           );
    if ((uVar7 & 1) == 0) {
      puVar8 = (undefined8 *)0x0;
      do {
        lVar3 = *(long *)(*(long *)(lVar3 + 0x30) + 0x38);
        if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar3);
        }
        fStack_198 = (float)lVar3;
        fStack_194 = (float)((ulong)lVar3 >> 0x20);
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *plVar5) {
              puVar9 = (undefined8 *)(lVar3 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01a3f920;
            }
            piVar13 = piVar13 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        lVar11 = 0;
        puVar9 = (undefined8 *)func_0x00fac1f0(&fStack_198);
code_r0x01a3f920:
        plVar10 = (long *)(*(code *)*puVar9)(&stack0xfffffffffffffe70,puVar9[1]);
        if (puVar8 == (undefined8 *)0x0) {
          return plVar10;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(puVar8,0);
        if (extraout_w1_00 != 1) {
          auVar30 = __Unwind_Resume();
          lVar16 = auVar30._0_8_;
          uStack_1b8 = (undefined4)lVar3;
          uStack_1b4 = (undefined4)((ulong)lVar3 >> 0x20);
          uStack_1a8 = 0x1a3f9ac;
          uStack_1a4 = 0;
          lStack_1d0 = lVar14;
          lStack_1c8 = lVar12;
          puStack_1c0 = puVar8;
          uStack_1b0 = &stack0xfffffffffffffed0;
          plVar5 = (long *)(**(code **)**(undefined8 **)(lVar11 + 0x30))();
          if (plVar5 == (long *)0x0) {
            puVar9 = (undefined8 *)func_0x00f78af4();
            puStack_1d8 = &System_Threading_Volatile__Read_object_;
            plVar5 = (long *)*puVar9;
            uStack_1e0 = &uStack_1b0;
            auStack_1f0 = auVar30;
            func_0x00f78a30();
            return plVar5;
          }
          (**(code **)(*plVar5 + 0x1e8))
                    (plVar5,lVar16,auVar30._8_8_,*(undefined8 *)(lVar16 + 0x38),
                     *(undefined8 *)(lVar16 + 0x40),*(undefined8 *)(*plVar5 + 0x1f0));
          return plVar5;
        }
        puVar8 = (undefined8 *)___cxa_begin_catch();
        puVar8 = (undefined8 *)*puVar8;
        ___cxa_end_catch();
      } while( true );
    }
    lVar16 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&stack0xfffffffffffffe80,
                             *(undefined8 *)(*(long *)(lVar3 + 0x30) + 0x20));
    if (lVar12 == 0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar12,0);
    if (lVar16 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 **)(lVar16 + 0x48) = puVar8;
    if (lVar14 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    lVar11 = *(long *)(lVar14 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar16,lVar12,lVar11,0);
  } while( true );
}



// ============================================================
// RVA: 0x14d1534 | Atlas.Gameplay.Usables.ProximityHomingProjectile.CreateDeSpawnVfx
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_ProximityHomingProjectile__CreateDeSpawnVfx
               (undefined1 param_1 [16],ulong param_2,ulong param_3,uint param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 extraout_x1;
  undefined8 *extraout_x8;
  long lVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  float extraout_s0;
  undefined4 uVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined8 uStack_17c;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((bRam0000000003eb4b86 & 1) == 0) {
    func_0x00f78a20(0x3d570c0);
    func_0x00f78a20(0x3d72880);
    bRam0000000003eb4b86 = 1;
  }
  if (*(char *)(param_5 + 300) != '\0') {
    return;
  }
  lVar4 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_5,0);
  lVar5 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                    (param_5);
  if ((lVar5 != 0) && (lVar4 != 0)) {
    uVar6 = /*Atlas.Contexts.GameContextBase$$SpawnTimedObject<VFXBehaviour>*/ func_0x0185c108(*(undefined4 *)(lVar5 + 0x98),lVar4,/*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                            uRam0000000003d570c0);
    lVar4 = Atlas_Gameplay_Usables_ProximityHomingProjectile__get_ProximityHomingProjectileDefinition
                      (param_5);
    if (lVar4 != 0) {
      uStack_38 = *(undefined8 *)(lVar4 + 0xa0);
      uStack_40 = *(undefined8 *)(lVar4 + 0x98);
      uStack_30 = *(undefined4 *)(lVar4 + 0xa8);
      Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX(param_5,uVar6,&uStack_40);
      return;
    }
  }
  plVar7 = (long *)func_0x00f78af4();
  uVar19 = (uint)param_3;
  uVar13 = (uint)param_2;
  lVar4 = plVar7[0x36];
  uVar6 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  if (plVar7[0x20] != 0) {
    uVar11 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar7[0x20],0);
    param_2 = (ulong)uVar11;
    param_3 = (ulong)uVar13;
    param_4 = uVar19;
    Atlas_Gameplay_Usables_ProjectileUsable__RaycastProjectedNTimes
              (&uStack_b8,(int)lVar4,param_2,param_3,uVar19,plVar7,1);
    auVar24 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar7);
    uVar6 = auVar24._8_8_;
    if (auVar24._0_8_ != 0) {
      uStack_98 = uStack_b0;
      uStack_a0 = uStack_b8;
      uStack_90 = uStack_a8;
      (**(code **)(*plVar7 + 0x438))
                ((int)lVar4,uVar11,uVar13,uVar19,*(undefined4 *)(auVar24._0_8_ + 0x8c),plVar7,
                 &uStack_a0,0,*(undefined8 *)(*plVar7 + 0x440));
      return;
    }
  }
  lVar4 = func_0x00f78af4(0,uVar6);
  iVar10 = (int)extraout_x1;
  uVar9 = (ulong)param_4;
  fVar17 = (float)param_3;
  fVar22 = (float)param_2;
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
  fStack_170 = 0.0;
  fStack_16c = 0.0;
  fStack_168 = 0.0;
  fStack_164 = 0.0;
  uStack_17c = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_190 = 0;
  if (-1 < iVar10) {
    lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<ValueTuple<float, Vector3>>_TypeInfo*/ uRam0000000003d1d768);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$.ctor*/ func_0x023669cc(lVar5,uRam0000000003d39b40);
    uVar6 = extraout_x1;
    if (iVar10 != 0x7fffffff) goto LAB_014cee54;
LAB_014cee4c:
    if (lVar5 == 0) {
      do {
        iVar10 = (int)uVar6;
        func_0x00f78af4();
LAB_014cee54:
        iVar10 = iVar10 + 1;
        while( true ) {
          uVar15 = (undefined4)param_3;
          uVar16 = (undefined4)param_2;
          uVar12 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          uStack_1a8 = 0;
          fVar21 = (float)uVar9;
          fVar18 = fVar21;
          fVar14 = fVar17;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar22,fVar17,uVar9,uVar12,uVar16,uVar15,&uStack_1b8,0);
          fVar23 = *(float *)(lVar4 + 0x148);
          uVar6 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(lVar4 + 0x150),0);
          uStack_1c8 = uStack_1b0;
          uStack_1d0 = uStack_1b8;
          uStack_1c0 = uStack_1a8;
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar23 + extraout_s0,&uStack_1d0,&uStack_1a0,uVar6,1,0);
          fVar23 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          fVar20 = *(float *)(lVar4 + 0x148) + extraout_s0;
          param_2 = (ulong)(uint)fVar17;
          param_3 = uVar9;
          /*Debug$$DrawLine*/ func_0x0162ee40(fVar22,param_2,uVar9,fVar22 + fVar23 * fVar20,fVar17 + fVar14 * fVar20,
                          fVar21 + fVar18 * fVar20,0);
          uVar6 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_1a0,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
          uVar12 = (undefined4)param_3;
          if ((uVar2 & 1) != 0) goto LAB_014cee4c;
          fVar17 = (float)param_2;
          /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&uStack_1a0,0);
          fVar18 = fVar17;
          uVar13 = /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&uStack_1a0,0);
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          param_2 = (ulong)uVar13;
          param_3 = (ulong)(uint)fVar18;
          /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar17,param_2,param_3,uVar12,&uStack_1b8,uRam0000000003d42d70);
          if (lVar5 == 0) break;
          param_2 = uStack_1b8 >> 0x20;
          param_3 = uStack_1b0 & 0xffffffff;
          /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$Add*/ func_0x023676a4(uStack_1b8 & 0xffffffff,param_2,param_3,uStack_1b0._4_4_,lVar5,
                          uRam0000000003d39b48);
          lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(lVar4);
          fVar18 = (float)param_3;
          if (((lVar3 == 0) || (*(long *)(lVar4 + 0xf8) == 0)) ||
             (lVar8 = *(long *)(*(long *)(lVar4 + 0xf8) + 0x18), lVar8 == 0)) break;
          fVar17 = fVar17 + extraout_s0;
          fVar20 = fVar17 + *(float *)(lVar3 + 0x8c);
          fVar14 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar8,0);
          fVar23 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
          param_2 = (ulong)(uint)(fVar14 * fVar23);
          param_3 = (ulong)(uint)(fVar17 * fVar23);
          fVar22 = fVar22 + fVar14 * fVar23;
          fVar17 = fVar20 + fVar17 * fVar23;
          uVar9 = (ulong)(uint)(fVar21 + fVar18 * fVar23);
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) goto LAB_014cf018;
        }
      } while( true );
    }
LAB_014cf018:
    fVar17 = _UNK_033f83ec;
    uVar9 = 0;
    lVar4 = 0x20;
    lVar3 = 0x100000000;
    do {
      uVar16 = (undefined4)param_3;
      uVar12 = (undefined4)param_2;
      uVar2 = (ulong)*(uint *)(lVar5 + 0x18);
      if ((long)(int)(*(uint *)(lVar5 + 0x18) - 1) <= (long)uVar9) goto LAB_014cf0b0;
      if (uVar2 <= uVar9) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        uVar2 = (ulong)*(uint *)(lVar5 + 0x18);
      }
      lVar8 = *(long *)(lVar5 + 0x10);
      fVar22 = *(float *)(lVar8 + lVar4);
      uVar9 = uVar9 + 1;
      if (uVar2 <= uVar9) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar8 = *(long *)(lVar5 + 0x10);
      }
      uVar16 = (undefined4)param_3;
      uVar12 = (undefined4)param_2;
      lVar1 = lVar3 >> 0x1c;
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + 0x100000000;
    } while (ABS(fVar22 - *(float *)(lVar8 + lVar1 + 0x20)) <= fVar17);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$RemoveRange*/ func_0x02369000(lVar5,uVar9,*(int *)(lVar5 + 0x18) - (int)uVar9,uRam0000000003d39b50);
LAB_014cf0b0:
    uVar15 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(0,uVar15,uVar12,uVar16,&fStack_170,uRam0000000003d42d70);
    uVar13 = *(uint *)(lVar5 + 0x18);
    if (-1 < (int)(uVar13 - 1)) {
      fVar22 = 0.0;
      iVar10 = uVar13 - 2;
      fVar17 = 1.0;
      while( true ) {
        uVar19 = iVar10 + 1;
        if (1 < uVar19) {
          fVar17 = fVar17 + fVar17;
        }
        if (uVar13 <= uVar19) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar13 = *(uint *)(lVar5 + 0x18);
        }
        fVar18 = fStack_170;
        lVar4 = *(long *)(lVar5 + 0x10);
        fVar14 = *(float *)(lVar4 + (ulong)uVar19 * 0x10 + 0x20);
        if (uVar13 <= uVar19) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar4 = *(long *)(lVar5 + 0x10);
        }
        lVar4 = lVar4 + (ulong)uVar19 * 0x10;
        uVar6 = *(undefined8 *)(lVar4 + 0x24);
        fVar23 = (float)((ulong)uVar6 >> 0x20) * fVar17 + fStack_168;
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar17 * fVar14 + fVar18,CONCAT44(fVar23,(float)uVar6 * fVar17 + fStack_16c)
                        ,fVar23,fVar17 * *(float *)(lVar4 + 0x2c) + fStack_164,&uStack_1b8,
                        uRam0000000003d42d70);
        fStack_168 = (float)uStack_1b0;
        fStack_164 = (float)(uStack_1b0 >> 0x20);
        fStack_170 = (float)uStack_1b8;
        fStack_16c = (float)(uStack_1b8 >> 0x20);
        fVar22 = fVar22 + fVar17;
        if (iVar10 < 0) break;
        uVar13 = *(uint *)(lVar5 + 0x18);
        iVar10 = iVar10 + -1;
      }
      if (fVar22 != 0.0) {
        *(undefined1 *)extraout_x8 = 1;
        *(undefined2 *)((long)extraout_x8 + 1) = 0;
        *(undefined1 *)((long)extraout_x8 + 3) = 0;
        *(ulong *)((long)extraout_x8 + 0xc) = CONCAT44(fStack_164 / fVar22,fStack_168 / fVar22);
        *(ulong *)((long)extraout_x8 + 4) = CONCAT44(fStack_16c / fVar22,fStack_170 / fVar22);
        return;
      }
    }
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  *(undefined4 *)(extraout_x8 + 2) = 0;
  return;
}



// ============================================================
// RVA: 0x14d1604 | Atlas.Gameplay.Usables.ProximityHomingProjectile.ForceToFloor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_ProximityHomingProjectile__ForceToFloor
               (undefined1 param_1 [16],ulong param_2,ulong param_3,uint param_4,long *param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  float extraout_s0;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  lVar3 = param_5[0x36];
  uVar7 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uVar17 = param_2;
  uVar19 = param_3;
  if (param_5[0x20] != 0) {
    uVar11 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(param_5[0x20],0);
    uVar17 = (ulong)uVar11;
    uVar19 = param_2 & 0xffffffff;
    param_4 = (uint)param_3;
    Atlas_Gameplay_Usables_ProjectileUsable__RaycastProjectedNTimes
              (&uStack_78,(int)lVar3,uVar17,uVar19,param_3 & 0xffffffff,param_5,1);
    auVar24 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_5);
    uVar7 = auVar24._8_8_;
    if (auVar24._0_8_ != 0) {
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      uStack_50 = uStack_68;
      (**(code **)(*param_5 + 0x438))
                ((int)lVar3,uVar11,param_2 & 0xffffffff,param_3 & 0xffffffff,
                 *(undefined4 *)(auVar24._0_8_ + 0x8c),param_5,&uStack_60,0,
                 *(undefined8 *)(*param_5 + 0x440));
      return;
    }
  }
  lVar3 = func_0x00f78af4(0,uVar7);
  iVar10 = (int)extraout_x1;
  uVar9 = (ulong)param_4;
  fVar16 = (float)uVar19;
  fVar22 = (float)uVar17;
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
  if (-1 < iVar10) {
    lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<ValueTuple<float, Vector3>>_TypeInfo*/ uRam0000000003d1d768);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$.ctor*/ func_0x023669cc(lVar4,uRam0000000003d39b40);
    uVar7 = extraout_x1;
    if (iVar10 != 0x7fffffff) goto LAB_014cee54;
LAB_014cee4c:
    if (lVar4 == 0) {
      do {
        iVar10 = (int)uVar7;
        func_0x00f78af4();
LAB_014cee54:
        iVar10 = iVar10 + 1;
        while( true ) {
          uVar14 = (undefined4)uVar19;
          uVar15 = (undefined4)uVar17;
          uVar12 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          uStack_178 = 0;
          uStack_170 = 0;
          uStack_168 = 0;
          fVar21 = (float)uVar9;
          fVar18 = fVar21;
          fVar13 = fVar16;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar22,fVar16,uVar9,uVar12,uVar15,uVar14,&uStack_178,0);
          fVar23 = *(float *)(lVar3 + 0x148);
          uVar7 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(lVar3 + 0x150),0);
          uStack_188 = uStack_170;
          uStack_190 = uStack_178;
          uStack_180 = uStack_168;
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar23 + extraout_s0,&uStack_190,&uStack_160,uVar7,1,0);
          fVar23 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          fVar20 = *(float *)(lVar3 + 0x148) + extraout_s0;
          uVar17 = (ulong)(uint)fVar16;
          uVar19 = uVar9;
          /*Debug$$DrawLine*/ func_0x0162ee40(fVar22,uVar17,uVar9,fVar22 + fVar23 * fVar20,fVar16 + fVar13 * fVar20,
                          fVar21 + fVar18 * fVar20,0);
          uVar7 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_160,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
          uVar12 = (undefined4)uVar19;
          if ((uVar5 & 1) != 0) goto LAB_014cee4c;
          fVar16 = (float)uVar17;
          /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&uStack_160,0);
          fVar18 = fVar16;
          uVar11 = /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&uStack_160,0);
          uStack_178 = 0;
          uStack_170 = 0;
          uVar17 = (ulong)uVar11;
          uVar19 = (ulong)(uint)fVar18;
          /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar16,uVar17,uVar19,uVar12,&uStack_178,uRam0000000003d42d70);
          if (lVar4 == 0) break;
          uVar17 = uStack_178 >> 0x20;
          uVar19 = uStack_170 & 0xffffffff;
          /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$Add*/ func_0x023676a4(uStack_178 & 0xffffffff,uVar17,uVar19,uStack_170._4_4_,lVar4,
                          uRam0000000003d39b48);
          lVar6 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(lVar3);
          fVar18 = (float)uVar19;
          if (((lVar6 == 0) || (*(long *)(lVar3 + 0xf8) == 0)) ||
             (lVar8 = *(long *)(*(long *)(lVar3 + 0xf8) + 0x18), lVar8 == 0)) break;
          fVar16 = fVar16 + extraout_s0;
          fVar20 = fVar16 + *(float *)(lVar6 + 0x8c);
          fVar13 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar8,0);
          fVar23 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
          uVar17 = (ulong)(uint)(fVar13 * fVar23);
          uVar19 = (ulong)(uint)(fVar16 * fVar23);
          fVar22 = fVar22 + fVar13 * fVar23;
          fVar16 = fVar20 + fVar16 * fVar23;
          uVar9 = (ulong)(uint)(fVar21 + fVar18 * fVar23);
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) goto LAB_014cf018;
        }
      } while( true );
    }
LAB_014cf018:
    fVar16 = _UNK_033f83ec;
    uVar9 = 0;
    lVar3 = 0x20;
    lVar6 = 0x100000000;
    do {
      uVar15 = (undefined4)uVar19;
      uVar12 = (undefined4)uVar17;
      uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
      if ((long)(int)(*(uint *)(lVar4 + 0x18) - 1) <= (long)uVar9) goto LAB_014cf0b0;
      if (uVar5 <= uVar9) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
      }
      lVar8 = *(long *)(lVar4 + 0x10);
      fVar22 = *(float *)(lVar8 + lVar3);
      uVar9 = uVar9 + 1;
      if (uVar5 <= uVar9) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar8 = *(long *)(lVar4 + 0x10);
      }
      uVar15 = (undefined4)uVar19;
      uVar12 = (undefined4)uVar17;
      lVar1 = lVar6 >> 0x1c;
      lVar3 = lVar3 + 0x10;
      lVar6 = lVar6 + 0x100000000;
    } while (ABS(fVar22 - *(float *)(lVar8 + lVar1 + 0x20)) <= fVar16);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$RemoveRange*/ func_0x02369000(lVar4,uVar9,*(int *)(lVar4 + 0x18) - (int)uVar9,uRam0000000003d39b50);
LAB_014cf0b0:
    uVar14 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(0,uVar14,uVar12,uVar15,&fStack_130,uRam0000000003d42d70);
    uVar11 = *(uint *)(lVar4 + 0x18);
    if (-1 < (int)(uVar11 - 1)) {
      fVar22 = 0.0;
      iVar10 = uVar11 - 2;
      fVar16 = 1.0;
      while( true ) {
        uVar2 = iVar10 + 1;
        if (1 < uVar2) {
          fVar16 = fVar16 + fVar16;
        }
        if (uVar11 <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar11 = *(uint *)(lVar4 + 0x18);
        }
        fVar18 = fStack_130;
        lVar3 = *(long *)(lVar4 + 0x10);
        fVar13 = *(float *)(lVar3 + (ulong)uVar2 * 0x10 + 0x20);
        if (uVar11 <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar3 = *(long *)(lVar4 + 0x10);
        }
        lVar3 = lVar3 + (ulong)uVar2 * 0x10;
        uVar7 = *(undefined8 *)(lVar3 + 0x24);
        fVar23 = (float)((ulong)uVar7 >> 0x20) * fVar16 + fStack_128;
        uStack_178 = 0;
        uStack_170 = 0;
        /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar16 * fVar13 + fVar18,CONCAT44(fVar23,(float)uVar7 * fVar16 + fStack_12c)
                        ,fVar23,fVar16 * *(float *)(lVar3 + 0x2c) + fStack_124,&uStack_178,
                        uRam0000000003d42d70);
        fStack_128 = (float)uStack_170;
        fStack_124 = (float)(uStack_170 >> 0x20);
        fStack_130 = (float)uStack_178;
        fStack_12c = (float)(uStack_178 >> 0x20);
        fVar22 = fVar22 + fVar16;
        if (iVar10 < 0) break;
        uVar11 = *(uint *)(lVar4 + 0x18);
        iVar10 = iVar10 + -1;
      }
      if (fVar22 != 0.0) {
        *(undefined1 *)extraout_x8 = 1;
        *(undefined2 *)((long)extraout_x8 + 1) = 0;
        *(undefined1 *)((long)extraout_x8 + 3) = 0;
        *(ulong *)((long)extraout_x8 + 0xc) = CONCAT44(fStack_124 / fVar22,fStack_128 / fVar22);
        *(ulong *)((long)extraout_x8 + 4) = CONCAT44(fStack_12c / fVar22,fStack_130 / fVar22);
        return;
      }
    }
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  *(undefined4 *)(extraout_x8 + 2) = 0;
  return;
}



// ============================================================
// RVA: 0x14d1610 | Atlas.Gameplay.Usables.ProximityHomingProjectile.CollideWithFloor
// ============================================================

void Atlas_Gameplay_Usables_ProximityHomingProjectile__CollideWithFloor(long *param_1)

{
  ulong uVar1;
  
  uVar1 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_1,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  Atlas_Gameplay_Usables_ProjectileUsable__SetForceToFloorNetworkFlag(param_1,1);
  Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x014d1668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
  return;
}



// ============================================================
// RVA: 0x14d166c | Atlas.Gameplay.Usables.ProximityHomingProjectile.CollideWithEnvironment
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_Usables_ProximityHomingProjectile__CollideWithEnvironment
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int extraout_w1;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  
  if ((bRam0000000003eb4b87 & 1) == 0) {
    func_0x00f78a20(0x3d53510);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b87 = 1;
  }
  lVar2 = /*UnityEngine.ContactPoint$$get_otherCollider*/ func_0x0329f040(param_5,0);
  if (lVar2 != 0) {
    lVar2 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar2,uRam0000000003d53510);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar2,0,0);
    if ((int)lVar3 != 0) {
      if (lVar2 == 0) goto LAB_014d17a8;
      if (*(int *)(lVar2 + 0x18) != 0) {
        return lVar3;
      }
    }
    uVar11 = /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(param_5,0);
    lVar2 = /*UnityEngine.ContactPoint$$get_otherCollider*/ func_0x0329f040(param_5,0);
    if (lVar2 != 0) {
      uVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar2,0);
      lVar2 = Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce
                        (uVar11,param_2,param_3,param_4,uVar4);
      if (*(char *)(param_4 + 300) != '\0') {
        return lVar2;
      }
      lVar2 = *(long *)(param_4 + 0x1a8);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        if ((bRam0000000003eb4e9c & 1) == 0) {
          lVar3 = func_0x00f78a20(0x3d76368,0);
          bRam0000000003eb4e9c = 1;
        }
        if (*(char *)(lVar2 + 0x2c) != '\0') {
          lVar7 = *(long *)(lVar2 + 0x10);
          lVar3 = 0;
          if (lVar7 != 0) {
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0x40800000,lVar7,*(undefined8 *)(lVar2 + 0x18),/*STR('WeaponActions')*/ uRam0000000003d76368,0);
            return lVar7;
          }
        }
        return lVar3;
      }
    }
  }
LAB_014d17a8:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4b88 & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b88 = 1;
  }
  lVar3 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar2,0);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x40) == 0)) ||
     (plVar10 = *(long **)(*(long *)(lVar3 + 0x40) + 0x28), plVar10 == (long *)0x0)) {
    func_0x00f78af4();
  }
  else {
    lVar3 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto code_r0x014d1880;
        }
        piVar9 = piVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
code_r0x014d1880:
    plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
    if (plVar10 != (long *)0x0) {
      lVar3 = 0;
      fVar13 = 3.4028235e+38;
code_r0x014d18b0:
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto code_r0x014d18fc;
          }
          piVar9 = piVar9 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014d18fc:
      uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      if ((uVar8 & 1) == 0) {
        lVar2 = 0;
        do {
          if (plVar10 != (long *)0x0) {
            lVar7 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto code_r0x014d1a00;
                }
                piVar9 = piVar9 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014d1a00:
            (*(code *)*puVar5)(plVar10,puVar5[1]);
          }
          if (lVar2 == 0) {
            return lVar3;
          }
          func_0x00f78ac0(lVar2,0);
          lVar3 = 0;
          if (extraout_w1 != 1) {
            lVar3 = __Unwind_Resume();
            lVar2 = lVar3;
            if ((*(char *)(lVar3 + 0x60) == '\0') && (0.0 < *(float *)(lVar3 + 0x1bc))) {
              lVar2 = 0;
              if ((*(long *)(lVar3 + 0x1a0) != 0) &&
                 (lVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                                    (*(long *)(lVar3 + 0x1a0),0), (int)lVar2 != 0)) {
                lVar2 = *(long *)(lVar3 + 0x1a0);
                if (lVar2 == 0) {
                  lVar2 = func_0x00f78af4();
                  uVar4 = NEON_fmov(0xbf800000,4);
                  *(undefined8 *)(lVar2 + 0xd8) = uVar4;
                  *(undefined1 *)(lVar2 + 0x12d) = 1;
                  *(undefined8 *)(lVar2 + 0x198) = _UNK_033f8520;
                  return lVar2;
                }
                lVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                                  (lVar2,*(undefined8 *)(lVar2 + 0x20),0);
              }
            }
            return lVar2;
          }
          plVar6 = (long *)___cxa_begin_catch();
          lVar2 = *plVar6;
          ___cxa_end_catch();
        } while( true );
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto code_r0x014d1958;
          }
          piVar9 = piVar9 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014d1958:
      lVar7 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      if (lVar7 != 0) {
        if (*(long *)(lVar7 + 0x10) != *(long *)(lVar2 + 0x28)) {
          if (*(long *)(lVar2 + 0x1a0) == 0) {
            func_0x00f78af4();
            goto code_r0x014d1a44;
          }
          fVar12 = (float)Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                                    (*(long *)(lVar2 + 0x1a0),*(long *)(lVar7 + 0x10),0);
          if ((lVar3 == 0) || (fVar12 < fVar13)) {
            lVar3 = *(long *)(lVar7 + 0x10);
            fVar13 = fVar12;
          }
        }
        goto code_r0x014d18b0;
      }
      func_0x00f78af4();
      goto code_r0x014d1a44;
    }
  }
  func_0x00f78af4();
code_r0x014d1a44:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14d1a48);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14d17ac | Atlas.Gameplay.Usables.ProximityHomingProjectile.GetClosestKart
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_Usables_ProximityHomingProjectile__GetClosestKart(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  int extraout_w1;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  
  if ((bRam0000000003eb4b88 & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb4b88 = 1;
  }
  lVar2 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x40) == 0)) ||
     (plVar9 = *(long **)(*(long *)(lVar2 + 0x40) + 0x28), plVar9 == (long *)0x0)) {
    func_0x00f78af4();
  }
  else {
    lVar2 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_014d1880;
        }
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
LAB_014d1880:
    plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    if (plVar9 != (long *)0x0) {
      lVar2 = 0;
      fVar12 = 3.4028235e+38;
code_r0x014d18b0:
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x014d18fc;
          }
          piVar8 = piVar8 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014d18fc:
      uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        lVar5 = 0;
        do {
          if (plVar9 != (long *)0x0) {
            lVar6 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto code_r0x014d1a00;
                }
                piVar8 = piVar8 + 4;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014d1a00:
            (*(code *)*puVar3)(plVar9,puVar3[1]);
          }
          if (lVar5 == 0) {
            return lVar2;
          }
          func_0x00f78ac0(lVar5,0);
          lVar2 = 0;
          if (extraout_w1 != 1) {
            lVar5 = __Unwind_Resume();
            lVar2 = lVar5;
            if ((*(char *)(lVar5 + 0x60) == '\0') && (0.0 < *(float *)(lVar5 + 0x1bc))) {
              lVar2 = 0;
              if ((*(long *)(lVar5 + 0x1a0) != 0) &&
                 (lVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                                    (*(long *)(lVar5 + 0x1a0),0), (int)lVar2 != 0)) {
                lVar2 = *(long *)(lVar5 + 0x1a0);
                if (lVar2 == 0) {
                  lVar2 = func_0x00f78af4();
                  uVar11 = NEON_fmov(0xbf800000,4);
                  *(undefined8 *)(lVar2 + 0xd8) = uVar11;
                  *(undefined1 *)(lVar2 + 0x12d) = 1;
                  *(undefined8 *)(lVar2 + 0x198) = _UNK_033f8520;
                  return lVar2;
                }
                lVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                                  (lVar2,*(undefined8 *)(lVar2 + 0x20),0);
              }
            }
            return lVar2;
          }
          plVar4 = (long *)___cxa_begin_catch();
          lVar5 = *plVar4;
          ___cxa_end_catch();
        } while( true );
      }
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x014d1958;
          }
          piVar8 = piVar8 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014d1958:
      lVar5 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      if (lVar5 != 0) {
        if (*(long *)(lVar5 + 0x10) != *(long *)(param_1 + 0x28)) {
          if (*(long *)(param_1 + 0x1a0) == 0) {
            func_0x00f78af4();
            goto code_r0x014d1a44;
          }
          fVar10 = (float)Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                                    (*(long *)(param_1 + 0x1a0),*(long *)(lVar5 + 0x10),0);
          if ((lVar2 == 0) || (fVar10 < fVar12)) {
            lVar2 = *(long *)(lVar5 + 0x10);
            fVar12 = fVar10;
          }
        }
        goto code_r0x014d18b0;
      }
      func_0x00f78af4();
      goto code_r0x014d1a44;
    }
  }
  func_0x00f78af4();
code_r0x014d1a44:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14d1a48);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14d1a8c | Atlas.Gameplay.Usables.ProximityHomingProjectile.GetDistanceRatioToTarget
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Gameplay_Usables_ProximityHomingProjectile__GetDistanceRatioToTarget(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = 0.0;
  fVar9 = 0.0;
  if ((((*(char *)(param_1 + 0x60) == '\0') && (fVar9 = fVar4, 0.0 < *(float *)(param_1 + 0x1bc)))
      && (*(long *)(param_1 + 0x1a0) != 0)) &&
     (iVar2 = Atlas_Gameplay_Usables_HomingProjectileLogic__get_HasKartTarget
                        (*(long *)(param_1 + 0x1a0),0), iVar2 != 0)) {
    lVar3 = *(long *)(param_1 + 0x1a0);
    if (lVar3 == 0) {
      lVar3 = func_0x00f78af4();
      uVar5 = NEON_fmov(0xbf800000,4);
      *(undefined8 *)(lVar3 + 0xd8) = uVar5;
      *(undefined1 *)(lVar3 + 0x12d) = 1;
      uVar1 = _UNK_033f8520;
      *(ulong *)(lVar3 + 0x198) = _UNK_033f8520;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar1;
      return auVar6;
    }
    fVar4 = (float)Atlas_Gameplay_Usables_HomingProjectileLogic__DistToTargetSquared
                             (lVar3,*(undefined8 *)(lVar3 + 0x20),0);
    fVar7 = *(float *)(param_1 + 0x1bc);
    fVar9 = 1.0;
    if (fVar4 < fVar7 * fVar7) {
      fVar8 = *(float *)(param_1 + 0x1b8);
      fVar9 = 0.0;
      if (fVar8 * fVar8 < fVar4) {
        fVar9 = (SQRT(fVar4) - fVar8) / (fVar7 - fVar8);
      }
    }
  }
  return ZEXT416((uint)fVar9);
}



// ============================================================
// RVA: 0x14d1b30 | Atlas.Gameplay.Usables.ProximityHomingProjectile..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_ProximityHomingProjectile___ctor(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined1 *)(param_1 + 0x12d) = 1;
  *(undefined8 *)(param_1 + 0x198) = _UNK_033f8520;
  return;
}



