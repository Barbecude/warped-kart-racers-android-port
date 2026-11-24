// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.BurstCompatiblePhysicsHandling

// ============================================================
// RVA: 0x153f7ac | Atlas.Gameplay.Kart.BurstCompatiblePhysicsHandling.FromKartPhysics
// ============================================================

void Atlas_Gameplay_Kart_BurstCompatiblePhysicsHandling__FromKartPhysics
               (undefined8 *param_1,float param_2,long param_3)

{
  long lVar1;
  undefined1 extraout_w1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined4 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  
  if (param_3 != 0) {
    uVar26 = *(undefined4 *)(param_3 + 0xb4);
    uVar2 = *(undefined4 *)(param_3 + 0xc0);
    uVar39 = *(undefined8 *)(param_3 + 0x1c0);
    uVar16 = *(undefined8 *)(param_3 + 0x30);
    uVar17 = *(undefined8 *)(param_3 + 0xa4);
    uVar28 = NEON_rev64(*(undefined8 *)(param_3 + 0x38),4);
    uVar29 = *(undefined8 *)(param_3 + 0xac);
    uVar18 = *(undefined8 *)(param_3 + 0xb8);
    uVar19 = *(undefined8 *)(param_3 + 0xc4);
    uVar20 = *(undefined8 *)(param_3 + 0x40);
    uVar3 = /*Atlas.Gameplay.Kart.KartPhysicsHandling$$get_SlopeCompensationAngleStart*/ func_0x015d50f8(param_3,0);
    uVar4 = /*Atlas.Gameplay.Kart.KartPhysicsHandling$$get_SlopeCompensationAngleMax*/ func_0x015d510c(param_3,0);
    uVar27 = *(undefined4 *)(param_3 + 0xfc);
    uVar38 = *(undefined4 *)(param_3 + 0x1c8);
    uVar5 = *(undefined4 *)(param_3 + 100);
    uVar6 = *(undefined4 *)(param_3 + 0x60);
    uVar7 = *(undefined4 *)(param_3 + 0x88);
    uVar21 = *(undefined8 *)(param_3 + 0x100);
    uVar30 = *(undefined8 *)(param_3 + 0x108);
    uVar22 = *(undefined8 *)(param_3 + 0x120);
    uVar31 = *(undefined8 *)(param_3 + 0x118);
    uVar40 = NEON_rev64(*(undefined8 *)(param_3 + 0x110),4);
    uVar23 = *(undefined8 *)(param_3 + 0x8c);
    uVar37 = *(undefined8 *)(param_3 + 0x130);
    uVar32 = *(undefined8 *)(param_3 + 0x128);
    uVar33 = *(undefined8 *)(param_3 + 0x138);
    uVar34 = *(undefined8 *)(param_3 + 0x78);
    uVar41 = *(undefined8 *)(param_3 + 0x80);
    uVar35 = *(undefined8 *)(param_3 + 0x68);
    uVar24 = *(undefined8 *)(param_3 + 0x70);
    uVar8 = /*Atlas.Gameplay.Kart.KartPhysicsHandling$$get_DriftVisualYawVelMax*/ func_0x015d8fe0(param_3,0);
    uVar9 = *(undefined4 *)(param_3 + 0x98);
    uVar10 = /*Atlas.Gameplay.Kart.KartPhysicsHandling$$get_DriftVisualAngleSpeedIn*/ func_0x015d8ffc(param_3,0);
    uVar11 = /*Atlas.Gameplay.Kart.KartPhysicsHandling$$get_DriftVisualAngleSpeedOut*/ func_0x015d9010(param_3,0);
    uVar43 = *(undefined4 *)(param_3 + 0x1cc);
    uVar12 = *(undefined4 *)(param_3 + 0x158);
    uVar36 = *(undefined8 *)(param_3 + 0x15c);
    uVar46 = *(undefined8 *)(param_3 + 0x140);
    uVar44 = *(undefined8 *)(param_3 + 0x150);
    uVar25 = *(undefined8 *)(param_3 + 0x178);
    uVar45 = *(undefined8 *)(param_3 + 0x180);
    uVar42 = *(undefined8 *)(param_3 + 0x188);
    uVar13 = /*Atlas.Gameplay.Kart.KartPhysicsHandling$$get_GlidingPitchUpMax*/ func_0x015d8e14(param_3,0);
    uVar14 = /*Atlas.Gameplay.Kart.KartPhysicsHandling$$get_GlidingPitchDownMax*/ func_0x015d909c(param_3,0);
    uVar15 = /*Atlas.Gameplay.Kart.KartPhysicsHandling$$get_GlidingRollMax*/ func_0x015d90b0(param_3,0);
    param_1[1] = uVar16;
    *param_1 = uVar39;
    param_1[3] = uVar17;
    param_1[2] = uVar28;
    param_1[5] = uVar18;
    param_1[4] = uVar29;
    *(undefined4 *)(param_1 + 6) = uVar2;
    *(undefined4 *)((long)param_1 + 0x34) = uVar26;
    param_1[8] = uVar20;
    param_1[7] = uVar19;
    *(undefined4 *)(param_1 + 9) = uVar3;
    *(undefined4 *)((long)param_1 + 0x4c) = uVar4;
    uVar2 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_1 + 10) = uVar5;
    *(undefined4 *)((long)param_1 + 0x54) = uVar27;
    param_1[0xb] = CONCAT44((float)((ulong)uVar21 >> 0x20) * param_2,(float)uVar21 * param_2);
    param_1[0xc] = CONCAT44((float)((ulong)uVar30 >> 0x20) * param_2,(float)uVar30 * param_2);
    param_1[0xd] = uVar40;
    param_1[0xe] = uVar31;
    param_1[0xf] = CONCAT44((float)((ulong)uVar22 >> 0x20) * param_2,(float)uVar22 * param_2);
    param_1[0x11] = uVar37;
    param_1[0x10] = uVar32;
    param_1[0x12] = uVar33;
    *(undefined4 *)(param_1 + 0x13) = uVar38;
    *(undefined4 *)((long)param_1 + 0x9c) = uVar6;
    param_1[0x14] = uVar35;
    param_1[0x15] = uVar24;
    param_1[0x17] = uVar23;
    param_1[0x16] = uVar34;
    param_1[0x18] = uVar41;
    *(undefined4 *)(param_1 + 0x19) = uVar7;
    *(undefined4 *)((long)param_1 + 0xcc) = uVar8;
    *(undefined4 *)(param_1 + 0x1a) = uVar9;
    *(undefined4 *)((long)param_1 + 0xd4) = uVar10;
    *(undefined4 *)(param_1 + 0x1b) = uVar11;
    *(undefined8 *)((long)param_1 + 0xdc) = uVar46;
    *(undefined4 *)((long)param_1 + 0xe4) = uVar43;
    param_1[0x1d] = uVar44;
    *(undefined4 *)(param_1 + 0x1e) = uVar12;
    *(undefined8 *)((long)param_1 + 0xfc) = uVar25;
    *(undefined8 *)((long)param_1 + 0xf4) = uVar36;
    *(undefined8 *)((long)param_1 + 0x104) = uVar45;
    *(undefined8 *)((long)param_1 + 0x10c) = uVar42;
    *(undefined4 *)((long)param_1 + 0x114) = uVar13;
    *(undefined4 *)(param_1 + 0x23) = uVar14;
    uVar16 = *(undefined8 *)(param_3 + 0x170);
    uVar17 = *(undefined8 *)(param_3 + 400);
    uVar18 = *(undefined8 *)(param_3 + 0x198);
    *(undefined4 *)((long)param_1 + 0x11c) = uVar15;
    param_1[0x25] = uVar17;
    param_1[0x24] = uVar16;
    param_1[0x26] = uVar18;
    *(undefined4 *)(param_1 + 0x27) = uVar2;
    *(undefined8 *)((long)param_1 + 0x13c) = *(undefined8 *)(param_3 + 0xd8);
    return;
  }
  lVar1 = func_0x00f78af4();
  *(undefined1 *)(lVar1 + 0x30) = extraout_w1;
  return;
}



