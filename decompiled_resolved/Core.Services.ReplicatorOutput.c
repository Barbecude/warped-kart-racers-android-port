// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ReplicatorOutput

// ============================================================
// RVA: 0x1680d00 | Core.Services.ReplicatorOutput.Add
// ============================================================

/* WARNING: Possible PIC construction at 0x01680ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x01680ea8) */
/* WARNING: Removing unreachable block (ram,0x01680eac) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc878) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */

ulong Core_Services_ReplicatorOutput__Add
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 ****ppppuVar15;
  undefined *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 extraout_d0;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined *puStack_198;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined1 uStack_171;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined2 uStack_72;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined4 uStack_6a;
  undefined4 uStack_66;
  undefined2 uStack_62;
  
  uVar6 = param_7;
  uVar14 = param_8;
  uVar20 = param_9;
  if ((bRam0000000003eb59fe & 1) == 0) {
    func_0x00f78a20(0x3d3d7a8);
    func_0x00f78a20(0x3d3d7c0);
    bRam0000000003eb59fe = 1;
  }
  lVar3 = *(long *)(param_5 + 0x30);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) < *(int *)(param_5 + 0x28)) {
LAB_01680d94:
      uStack_78 = (undefined4)param_7;
      uStack_74 = (undefined1)param_8;
      uStack_73 = 0;
      uStack_72 = (undefined2)param_9;
      uStack_6c = (undefined2)((ulong)param_10 >> 0x20);
      uStack_70 = (undefined4)param_10;
      uStack_6a = (undefined4)param_11;
      uStack_62 = (undefined2)((ulong)param_12 >> 0x20);
      uStack_66 = (undefined4)param_12;
      uStack_80 = param_6;
      uVar4 = /*System.Collections.Generic.List<ReplicatorOutput.StreamInternal>$$Add*/ func_0x0257bfa8(lVar3,&uStack_80,uRam0000000003d3d7a8);
      return uVar4;
    }
    /*Core.Services.ReplicatorOutput$$SendEnvelope*/ func_0x01682894(param_5);
    lVar3 = *(long *)(param_5 + 0x30);
    if (lVar3 != 0) goto LAB_01680d94;
  }
  auVar25 = func_0x00f78af4();
  lVar3 = auVar25._0_8_;
  pcStack_88 = Core_Services_Replicator__ShouldReceive;
  if ((((long)CONCAT24(*(undefined2 *)(lVar3 + 0x46),*(undefined4 *)(lVar3 + 0x40)) |
       (long)*(char *)(lVar3 + 0x45) << 0x30) != auVar25._8_8_) ||
     (uStack_a0 = param_11, uStack_98 = param_12, puStack_90 = &stack0xfffffffffffffff0,
     iVar2 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(lVar3,0), iVar2 == 0)) {
    return 0;
  }
  lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0);
  if (lVar5 != 0) {
    if (pcRam0000000003ebf4c8 == (code *)0x0) {
      pcRam0000000003ebf4c8 = (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeSelf()");
    }
                    /* WARNING: Could not recover jumptable at 0x0322efa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*pcRam0000000003ebf4c8)(lVar5);
    return uVar4;
  }
  lVar5 = func_0x00f78af4();
  pcStack_a8 = Core_Services_Replicator__OnReplicatorStream;
  uVar9 = uVar6;
  uVar11 = uVar14;
  uStack_d0 = param_9;
  uStack_c8 = param_10;
  uStack_c0 = param_11;
  lStack_b8 = lVar3;
  ppuStack_b0 = &puStack_90;
  uVar4 = Core_Services_Replicator__ShouldReceive();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  auVar25._8_8_ = uVar6;
  auVar25._0_8_ = *(long *)(lVar5 + 0x20);
  if (*(long *)(lVar5 + 0x20) == 0) {
    puVar16 = &Core_Services_ReplicatorProviderEsq__OnReplicatorStream;
    auVar25 = func_0x00f78af4();
  }
  else {
    puVar16 = (undefined *)0x1680ea8;
    uVar9 = uVar14;
    uVar11 = uVar20;
  }
  uVar6 = auVar25._8_8_;
  uVar8 = auVar25._0_8_;
  uVar14 = 0x3eb5000;
  uVar4 = uVar8;
  pppuStack_e0 = &ppuStack_b0;
  puStack_d8 = puVar16;
  if ((bRam0000000003eb5a04 & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23f70);
    func_0x00f78a20(0x3d24ee8);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d25978);
    func_0x00f78a20(0x3d6dc78);
    func_0x00f78a20(0x3d73038);
    func_0x00f78a20(0x3d6dc68);
    func_0x00f78a20(0x3d71de0);
    func_0x00f78a20(0x3d73020);
    uVar4 = func_0x00f78a20(0x3d6dc70);
    bRam0000000003eb5a04 = 1;
  }
  if (*(long *)(uVar8 + 0x28) == 0) goto code_r0x01681324;
  if (*(char *)(*(long *)(uVar8 + 0x28) + 0x44) != '\0') {
    return uVar4;
  }
  uVar14 = *(undefined8 *)(uVar8 + 0x10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar14,0,0);
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  iVar13 = (int)uVar9;
  uVar17 = /*Core.Services.ReplicatorProviderEsq$$ToVector3*/ func_0x01683104(0x42c80000,iVar13 + 0x16,uVar11);
  uVar19 = param_3;
  uVar22 = param_2;
  iVar2 = /*Core.Services.ReplicatorProviderEsq$$IsNaN*/ func_0x01683180();
  if (iVar2 == 0) {
    uVar18 = /*Core.Services.ReplicatorProviderEsq$$ToVector3*/ func_0x01683104(0x44fa0000,iVar13 + 0xc,uVar11);
    uVar24 = uVar19;
    uVar23 = uVar22;
    iVar2 = /*Core.Services.ReplicatorProviderEsq$$IsNaN*/ func_0x01683180();
    if (iVar2 == 0) {
      uStack_17c = uVar22;
      uStack_178 = uVar19;
      uStack_160 = /*Core.Services.ReplicatorProviderEsq$$ToQuaternion*/ func_0x016831f4(0x3f800000,iVar13 + 0x12,uVar11);
      uStack_15c = uVar23;
      uStack_158 = uVar24;
      uStack_154 = param_4;
      uVar19 = /*UnityEngine.Quaternion$$get_normalized*/ func_0x03252288(&uStack_160,0);
      iVar2 = /*Core.Services.ReplicatorProviderEsq$$IsNaN*/ func_0x01683290();
      if (iVar2 == 0) {
        uStack_188 = uVar23;
        uStack_184 = uVar24;
        uStack_180 = param_4;
        uVar20 = /*Core.Services.ReplicatorProviderEsq$$NowPacketTime*/ func_0x01682f94(uVar8);
        uVar21 = /*Core.Services.ReplicatorProviderEsq$$ToPacketTime*/ func_0x01683304(uVar6);
        uVar24 = uStack_178;
        uVar22 = uStack_17c;
        if (*(char *)(uVar8 + 0x30) == '\0') {
          if (*(long *)(uVar8 + 0xf8) != 0) {
            /*Core.Services.ReplicatorProviderEsq.Extrapolator3$$Reset*/ func_0x016834b0(uVar21,uVar20,uVar18,uStack_17c,uStack_178,uVar17,param_2,param_3);
            *(undefined1 *)(uVar8 + 0x30) = 1;
code_r0x016812cc:
            uVar4 = /*UnityEngine.Time$$get_realtimeSinceStartupAsDouble*/ func_0x03272dbc(0);
            *(undefined8 *)(uVar8 + 0xc0) = extraout_d0;
            *(undefined8 *)(uVar8 + 0x68) = *(undefined8 *)(uVar8 + 0x38);
            *(undefined8 *)(uVar8 + 0x78) = *(undefined8 *)(uVar8 + 0x54);
            *(undefined8 *)(uVar8 + 0x70) = *(undefined8 *)(uVar8 + 0x4c);
            *(undefined8 *)(uVar8 + 0x38) = uVar21;
            *(undefined4 *)(uVar8 + 0x60) = param_2;
            *(undefined4 *)(uVar8 + 100) = param_3;
            *(undefined4 *)(uVar8 + 0x40) = uVar18;
            *(undefined4 *)(uVar8 + 0x44) = uVar22;
            *(undefined4 *)(uVar8 + 0x48) = uVar24;
            *(undefined4 *)(uVar8 + 0x4c) = uVar19;
            *(undefined4 *)(uVar8 + 0x50) = uStack_188;
            *(undefined4 *)(uVar8 + 0x54) = uStack_184;
            *(undefined4 *)(uVar8 + 0x58) = uStack_180;
            *(undefined4 *)(uVar8 + 0x5c) = uVar17;
            *(undefined4 *)(uVar8 + 0x80) = uVar18;
            *(undefined4 *)(uVar8 + 0x84) = uVar22;
            *(undefined4 *)(uVar8 + 0x88) = uVar24;
            *(undefined4 *)(uVar8 + 0x8c) = uVar19;
            *(undefined4 *)(uVar8 + 0x90) = uStack_188;
            *(undefined4 *)(uVar8 + 0x94) = uStack_184;
            *(undefined4 *)(uVar8 + 0x98) = uStack_180;
            return uVar4;
          }
code_r0x01681324:
          puVar7 = (uint *)func_0x00f78af4();
          puStack_1b0 = (undefined1 *)&pppuStack_1a0;
          puStack_198 = &Core_Services_ReplicatorStream__get_Cookie;
          pppuStack_1a0 = &pppuStack_e0;
          if (*(long *)(puVar7 + 2) == 0) {
            uVar4 = func_0x00f78af4();
            pcStack_1a8 = Core_Services_Replicator___ctor;
            uStack_1d0 = uVar9;
            uStack_1c8 = uVar11;
            ppppuVar15 = &pppuStack_1a0;
            if ((bRam0000000003ebf1b8 & 1) == 0) {
              uStack_1c0 = uVar6;
              uStack_1b8 = uVar8;
              func_0x00f78a20(0x3d23990,0);
              auVar25._8_8_ = uStack_1c0;
              auVar25._0_8_ = uStack_1b8;
              bRam0000000003ebf1b8 = 1;
              ppppuVar15 = (undefined8 ****)puStack_1b0;
            }
            puStack_1b0 = (undefined1 *)ppppuVar15;
            uStack_1c0 = auVar25._8_8_;
            uStack_1b8 = auVar25._0_8_;
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            return uVar4;
          }
          uVar1 = *puVar7;
          auVar26._8_4_ = uVar1;
          auVar26._0_8_ = *(long *)(puVar7 + 2);
          auVar26._12_4_ = 0;
          puStack_198 = &Core_Services_ReplicatorStream__get_Cookie;
          ppppuVar15 = &pppuStack_1a0;
          uStack_1d0 = param_7;
          uStack_1c8 = uVar14;
          uStack_1c0 = uVar9;
          uStack_1b8 = uVar11;
          if ((bRam0000000003eb5cd0 & 1) == 0) {
            puStack_1b0 = (undefined1 *)uVar6;
            pcStack_1a8 = (code *)uVar8;
            func_0x00f78a20(0x3d201a0);
            auVar25._8_8_ = puStack_1b0;
            auVar25._0_8_ = pcStack_1a8;
            bRam0000000003eb5cd0 = 1;
          }
          puVar16 = &UNK_016cc68c;
          puVar12 = &uStack_1d0;
          uVar4 = 8;
          uVar8 = (ulong)uVar1;
          uVar6 = 8;
          do {
            uVar10 = uVar4;
            uVar4 = auVar26._0_8_;
            puStack_1b0 = auVar25._8_8_;
            pcStack_1a8 = auVar25._0_8_;
            *(undefined8 *)((long)puVar12 + -0x20) = uVar6;
            *(ulong *)((long)puVar12 + -0x18) = uVar8;
            *(undefined8 *****)((long)puVar12 + -0x10) = ppppuVar15;
            *(undefined **)((long)puVar12 + -8) = puVar16;
            if (auVar26._8_4_ < 0) {
code_r0x016cc7d8:
              func_0x00f78a24(0x3d1fcf8);
              uVar8 = func_0x00f78aec();
              /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar8,0);
              uVar14 = func_0x00f78a24(0x3d52ce8);
              func_0x00f78ac0(uVar8,uVar14);
              auVar25._8_8_ = puStack_1b0;
              auVar25._0_8_ = pcStack_1a8;
            }
            else if (*(long *)(uVar4 + 0x10) != 0) {
              if (auVar26._8_4_ <= *(int *)(*(long *)(uVar4 + 0x10) + 0x18) - (int)uVar10) {
                return uVar4;
              }
              goto code_r0x016cc7d8;
            }
            puStack_1b0 = auVar25._8_8_;
            pcStack_1a8 = auVar25._0_8_;
            auVar26 = func_0x00f78af4();
            auVar25._8_8_ = puStack_1b0;
            auVar25._0_8_ = pcStack_1a8;
            *(undefined8 *)((long)puVar12 + -0x50) = 0x3d201a0;
            *(ulong *)((long)puVar12 + -0x48) = uVar4;
            *(undefined8 *)((long)puVar12 + -0x40) = uVar6;
            *(ulong *)((long)puVar12 + -0x38) = uVar8;
            *(undefined1 **)((long)puVar12 + -0x30) = (undefined1 *)((long)puVar12 + -0x10);
            *(undefined **)((long)puVar12 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
            ppppuVar15 = (undefined8 ****)((long)puVar12 + -0x30);
            puVar16 = &UNK_016cc834;
            puVar12 = (undefined8 *)((long)puVar12 + -0x50);
            uVar4 = 1;
            uVar8 = uVar10;
            uVar6 = auVar26._8_8_;
          } while( true );
        }
        if (*(long *)(uVar8 + 0xf8) == 0) goto code_r0x01681324;
        uVar4 = /*Core.Services.ReplicatorProviderEsq.Extrapolator3$$AddSample*/ func_0x0168338c(uVar21,uVar20,uVar18,uStack_17c,uStack_178,uVar17,param_2,param_3);
        if ((uVar4 & 1) != 0) goto code_r0x016812cc;
        if (*(long *)(uVar8 + 0x28) == 0) goto code_r0x01681324;
        uStack_170 = *(undefined4 *)(*(long *)(uVar8 + 0x28) + 0x40);
        uVar20 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_170);
        uVar20 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncId={0} ')*/ uRam0000000003d73038,uVar20,0);
        if (*(long *)(uVar8 + 0x28) == 0) goto code_r0x01681324;
        uStack_171 = *(undefined1 *)(*(long *)(uVar8 + 0x28) + 0x45);
        uVar6 = func_0x00f78ae0(/*Core.Services.SyncCategory_TypeInfo*/ uRam0000000003d24ee8,&uStack_171);
        uVar6 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncCategory={0}')*/ uRam0000000003d73020,uVar6,0);
        uVar6 = /*System.String$$Concat*/ func_0x029be39c(/*STR('Replicator ignored old stream: ')*/ uRam0000000003d71de0,uVar20,uVar6,0);
        if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar14 = 3;
        goto code_r0x01681148;
      }
      uStack_170 = uVar19;
      uStack_16c = uVar23;
      uStack_168 = uVar24;
      uStack_164 = param_4;
      uVar6 = func_0x00f78ae0(/*UnityEngine.Quaternion_TypeInfo*/ uRam0000000003d23f70,&uStack_170);
      uVar14 = *(undefined8 *)(uVar8 + 0x28);
      puVar12 = (undefined8 *)0x3d6dc70;
    }
    else {
      uStack_160 = uVar18;
      uStack_15c = uVar22;
      uStack_158 = uVar19;
      uVar6 = func_0x00f78ae0(/*UnityEngine.Vector3_TypeInfo*/ uRam0000000003d25978,&uStack_160);
      uVar14 = *(undefined8 *)(uVar8 + 0x28);
      puVar12 = (undefined8 *)0x3d6dc68;
    }
  }
  else {
    uStack_160 = uVar17;
    uStack_15c = param_2;
    uStack_158 = param_3;
    uVar6 = func_0x00f78ae0(/*UnityEngine.Vector3_TypeInfo*/ uRam0000000003d25978,&uStack_160);
    uVar14 = *(undefined8 *)(uVar8 + 0x28);
    puVar12 = (undefined8 *)0x3d6dc78;
  }
  uVar6 = /*System.String$$Format*/ func_0x029bcac4(*puVar12,uVar6,uVar14,0);
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = 4;
code_r0x01681148:
  uVar4 = Core_Services_Internal__LogManaged(uVar14,uVar6,0);
  return uVar4;
}



// ============================================================
// RVA: 0x168263c | Core.Services.ReplicatorOutput.get_MaxOutputStreamCount
// ============================================================

undefined4 Core_Services_ReplicatorOutput__get_MaxOutputStreamCount(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x1682644 | Core.Services.ReplicatorOutput.set_MaxOutputStreamCount
// ============================================================

void Core_Services_ReplicatorOutput__set_MaxOutputStreamCount(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x168264c | Core.Services.ReplicatorOutput..ctor
// ============================================================

void Core_Services_ReplicatorOutput___ctor(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb59fd & 1) == 0) {
    func_0x00f78a20(0x3d21960);
    func_0x00f78a20(0x3d3d7a0);
    func_0x00f78a20(0x3d1e2a0);
    bRam0000000003eb59fd = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  uVar1 = func_0x00f78aec(/*FlatBuffers.FlatBufferBuilder_TypeInfo*/ uRam0000000003d21960);
  /*FlatBuffers.FlatBufferBuilder$$.ctor*/ func_0x016cd72c(uVar1,param_3,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = /*Core.Services.ReplicatorOutput$$CalculateMaxStreamCount*/ func_0x01682730(param_3);
  *(int *)(param_1 + 0x28) = (int)uVar1;
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<ReplicatorOutput.StreamInternal>_TypeInfo*/ uRam0000000003d1e2a0);
  /*System.Collections.Generic.List<ReplicatorOutput.StreamInternal>$$.ctor*/ func_0x0257b374(uVar2,uVar1,uRam0000000003d3d7a0);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  return;
}



// ============================================================
// RVA: 0x1682730 | Core.Services.ReplicatorOutput.CalculateMaxStreamCount
// ============================================================

/* WARNING: Possible PIC construction at 0x01682c4c: Changing call to branch */

ulong Core_Services_ReplicatorOutput__CalculateMaxStreamCount(long param_1)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  uint6 uVar6;
  uint6 uVar7;
  code *pcVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  int extraout_w1;
  uint extraout_w1_00;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 *puVar25;
  undefined *puVar26;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  short sStack_4c;
  short sStack_4a;
  short sStack_48;
  
  puVar25 = &stack0xfffffffffffffff0;
  lVar24 = 0x3d21960;
  if ((bRam0000000003eb5a01 & 1) == 0) {
    func_0x00f78a20(0x3d21960);
    bRam0000000003eb5a01 = 1;
  }
  lVar15 = func_0x00f78aec(/*FlatBuffers.FlatBufferBuilder_TypeInfo*/ uRam0000000003d21960);
  uVar22 = 0;
  /*FlatBuffers.FlatBufferBuilder$$.ctor*/ func_0x016cd72c(lVar15,1,0);
  if (lVar15 != 0) {
    uVar22 = 1;
    do {
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar15,0);
      Core_Services_ReplicatorEnvelope__StartStreamsVector(lVar15,uVar22);
      iVar12 = (int)uVar22;
      if (0 < iVar12) {
        uVar23 = 0;
        do {
          iVar10 = (int)uVar23;
          sVar5 = (short)uVar23;
          cStack_4e = (char)uVar23;
          cStack_50 = cStack_4e + '\t';
          cStack_4f = cStack_4e + '\n';
          cStack_4e = cStack_4e + '\v';
          sStack_4c = sVar5 + 0xc;
          sStack_4a = sVar5 + 0xd;
          sStack_48 = sVar5 + 0xe;
          /*Core.Services.ReplicatorStream$$CreateReplicatorStream*/ func_0x01682c7c(lVar15,uVar23 + 2,iVar10 + 3U & 0xff,(int)(short)(sVar5 + 4),
                          iVar10 + 5U & 0xffff,iVar10 + 6U & 0xffff,iVar10 + 7U & 0xffff,
                          iVar10 + 8U & 0xff);
          uVar23 = uVar23 + 1;
        } while (uVar22 != uVar23);
      }
      /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(lVar15,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,999,0);
      iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15,0);
      uVar22 = (ulong)(iVar12 + 1);
    } while (iVar10 < (int)param_1);
    iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15,0);
    return (ulong)(iVar12 - (uint)(iVar10 != (int)param_1));
  }
  puVar26 = &Core_Services_ReplicatorOutput__SendEnvelope;
  lVar15 = func_0x00f78af4();
  uVar23 = 0;
  pcVar9 = &cStack_50;
  do {
    *(ulong *)(pcVar9 + -0x60) = unaff_x28;
    *(ulong *)(pcVar9 + -0x58) = unaff_x27;
    *(ulong *)(pcVar9 + -0x50) = unaff_x26;
    *(ulong *)(pcVar9 + -0x48) = unaff_x25;
    *(ulong *)(pcVar9 + -0x40) = unaff_x24;
    *(ulong *)(pcVar9 + -0x38) = unaff_x23;
    *(ulong *)(pcVar9 + -0x30) = unaff_x22;
    *(long *)(pcVar9 + -0x28) = lVar24;
    *(ulong *)(pcVar9 + -0x20) = uVar23;
    *(long *)(pcVar9 + -0x18) = param_1;
    *(undefined1 **)(pcVar9 + -0x10) = puVar25;
    *(undefined **)(pcVar9 + -8) = puVar26;
    uVar23 = 0x3eb5000;
    if ((bRam0000000003eb5a00 & 1) == 0) {
      func_0x00f78a20(0x3d33690);
      func_0x00f78a20(0x3d33698);
      func_0x00f78a20(0x3d336a0);
      func_0x00f78a20(0x3d3d7b0);
      func_0x00f78a20(0x3d3d7b8);
      func_0x00f78a20(0x3d3d7c0);
      bRam0000000003eb5a00 = 1;
    }
    *(undefined8 *)(pcVar9 + -0x78) = 0;
    *(undefined8 *)(pcVar9 + -0x80) = 0;
    *(undefined8 *)(pcVar9 + -0x68) = 0;
    *(undefined8 *)(pcVar9 + -0x70) = 0;
    *(undefined8 *)(pcVar9 + -0x88) = 0;
    *(undefined8 *)(pcVar9 + -0x90) = 0;
    lVar16 = *(long *)(lVar15 + 0x30);
    if (lVar16 == 0) goto code_r0x01682b80;
    uVar21 = *(uint *)(lVar16 + 0x18);
    uVar23 = (ulong)uVar21;
    if (1 < (int)uVar21) {
      Core_Services_ReplicatorEnvelope__StartStreamsVector(*(undefined8 *)(lVar15 + 0x20),uVar23);
      lVar16 = *(long *)(lVar15 + 0x30);
      if (lVar16 == 0) goto code_r0x01682b80;
    }
    *(uint *)(pcVar9 + -0xc4) = uVar21;
    /*System.Collections.Generic.List<ReplicatorOutput.StreamInternal>$$GetEnumerator*/ func_0x0257cb14(pcVar9 + -0xc0,lVar16,uRam0000000003d3d7b8);
    *(undefined8 *)(pcVar9 + -0x88) = *(undefined8 *)(pcVar9 + -0xb8);
    *(undefined8 *)(pcVar9 + -0x90) = *(undefined8 *)(pcVar9 + -0xc0);
    *(undefined8 *)(pcVar9 + -0x78) = *(undefined8 *)(pcVar9 + -0xa8);
    *(undefined8 *)(pcVar9 + -0x80) = *(undefined8 *)(pcVar9 + -0xb0);
    *(undefined8 *)(pcVar9 + -0x68) = *(undefined8 *)(pcVar9 + -0x98);
    *(undefined8 *)(pcVar9 + -0x70) = *(undefined8 *)(pcVar9 + -0xa0);
    while (uVar17 = /*System.Collections.Generic.List.Enumerator<ReplicatorOutput.StreamInternal>$$MoveNext*/ func_0x01f82ac0(pcVar9 + -0x90,uRam0000000003d33698), (uVar17 & 1) != 0) {
      plVar18 = *(long **)(lVar15 + 0x18);
      if (plVar18 == (long *)0x0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1682b80);
        (*pcVar8)();
      }
      lVar24 = *(long *)(pcVar9 + -0x80);
      uVar1 = *(uint *)(pcVar9 + -0x78);
      unaff_x23 = (ulong)uVar1;
      bVar2 = pcVar9[-0x74];
      unaff_x22 = (ulong)bVar2;
      uVar3 = *(ushort *)(pcVar9 + -0x72);
      unaff_x26 = (ulong)uVar3;
      unaff_x24 = (ulong)*(ushort *)(pcVar9 + -0x6c);
      uVar6 = *(uint6 *)(pcVar9 + -0x70);
      uVar14 = *(uint *)(pcVar9 + -0x6a);
      unaff_x28 = (ulong)uVar14;
      uVar4 = *(ushort *)(pcVar9 + -0x62);
      uVar23 = (ulong)uVar4;
      uVar7 = *(uint6 *)(pcVar9 + -0x66);
      uVar11 = (**(code **)(*plVar18 + 0x748))(plVar18,*(undefined8 *)(*plVar18 + 0x750));
      unaff_x25 = (ulong)uVar6;
      unaff_x27 = (ulong)uVar7;
      uVar21 = 0;
      if (uVar1 != uVar11) {
        uVar21 = uVar1 & 0xf;
      }
      uVar19 = *(undefined8 *)(lVar15 + 0x20);
      *(ushort *)(pcVar9 + -0xd8) = uVar4;
      *(short *)(pcVar9 + -0xda) = (short)(uVar7 >> 0x10);
      uVar22 = (ulong)(uVar21 | (bVar2 & 0xf) << 4);
      *(short *)(pcVar9 + -0xdc) = (short)uVar7;
      pcVar9[-0xde] = (char)(uVar14 >> 0x18);
      pcVar9[-0xdf] = (char)(uVar14 >> 0x10);
      pcVar9[-0xe0] = (char)(uVar14 >> 8);
      /*Core.Services.ReplicatorStream$$CreateReplicatorStream*/ func_0x01682c7c(uVar19,lVar24,uVar22,(int)(short)uVar3,(uint)uVar6 & 0xffff,
                      (ulong)(uVar6 >> 0x10) & 0xffff,unaff_x24,uVar14 & 0xff);
    }
    /*System.Collections.Generic.List.Enumerator<ReplicatorOutput.StreamInternal>$$Dispose*/ func_0x01f82abc(pcVar9 + -0x90,uRam0000000003d33690);
    do {
      if (*(int *)(pcVar9 + -0xc4) < 2) {
code_r0x01682a60:
        if (*(long *)(lVar15 + 0x20) != 0) {
          uVar22 = 0;
          /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(*(long *)(lVar15 + 0x20),*(undefined4 *)(lVar15 + 0x38),0);
          if ((*(long *)(lVar15 + 0x20) != 0) &&
             (lVar16 = *(long *)(*(long *)(lVar15 + 0x20) + 0x18), lVar16 != 0)) {
            lVar16 = /*FlatBuffers.ByteBuffer$$get_Data*/ func_0x016cc19c(lVar16,0);
            if (lVar16 == 0) {
              lVar24 = 0;
            }
            else {
              lVar24 = 0;
              if (*(int *)(lVar16 + 0x18) != 0) {
                lVar24 = lVar16 + 0x20;
              }
            }
            if (*(long *)(lVar15 + 0x20) != 0) {
              uVar23 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(*(long *)(lVar15 + 0x20),0);
              lVar16 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar24,0);
              if ((*(long *)(lVar15 + 0x20) != 0) &&
                 (lVar20 = *(long *)(*(long *)(lVar15 + 0x20) + 0x18), lVar24 = lVar16, lVar20 != 0)
                 ) {
                iVar12 = /*FlatBuffers.ByteBuffer$$get_Length*/ func_0x016cc17c(lVar20,0);
                uVar22 = 0;
                uVar19 = /*System.IntPtr$$op_Addition*/ func_0x02aeb208(lVar16,iVar12 - (int)uVar23,0);
                if (*(long *)(lVar15 + 0x18) != 0) {
                  uVar22 = uVar23;
                  Core_Services_Internal__SendReplicatorDataToTarget
                            (*(long *)(lVar15 + 0x18),uVar19,uVar23,0,0,0);
                  if (*(long *)(lVar15 + 0x30) != 0) {
                    uVar22 = 0;
                    uVar13 = /*UnityEngine.Mathf$$Max*/ func_0x0323cd04(*(undefined4 *)(lVar15 + 0x10),
                                             *(undefined4 *)(*(long *)(lVar15 + 0x30) + 0x18),0);
                    *(undefined4 *)(lVar15 + 0x10) = uVar13;
                    if (*(long *)(lVar15 + 0x30) != 0) {
                      /*System.Collections.Generic.List<ReplicatorOutput.StreamInternal>$$Clear*/ func_0x0257c2c0(*(long *)(lVar15 + 0x30),uRam0000000003d3d7b0);
                      if (*(long *)(lVar15 + 0x20) != 0) {
                        uVar22 = /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(*(long *)(lVar15 + 0x20),0);
                        return uVar22;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (*(long *)(lVar15 + 0x20) != 0) {
        /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(*(long *)(lVar15 + 0x20),0);
        goto code_r0x01682a60;
      }
code_r0x01682b80:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x01682bc8;
      plVar18 = (long *)___cxa_begin_catch();
      lVar24 = *plVar18;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<ReplicatorOutput.StreamInternal>$$Dispose*/ func_0x01f82abc(pcVar9 + -0x90,uRam0000000003d33690);
    } while (lVar24 == 0);
    func_0x00f78ac0(lVar24,0);
code_r0x01682bc8:
    lVar16 = __Unwind_Resume();
    *(ulong *)(pcVar9 + -0x100) = uVar23;
    *(long *)(pcVar9 + -0xf8) = lVar15;
    *(char **)(pcVar9 + -0xf0) = pcVar9 + -0x10;
    *(undefined **)(pcVar9 + -0xe8) = &Core_Services_ReplicatorOutput__Start;
    plVar18 = *(long **)(lVar16 + 0x18);
    if (plVar18 != (long *)0x0) {
      uVar22 = (**(code **)(*plVar18 + 0x898))(plVar18,*(undefined8 *)(*plVar18 + 0x8a0));
      *(int *)(lVar16 + 0x38) = (int)uVar22;
      return uVar22;
    }
    lVar15 = func_0x00f78af4();
    *(ulong *)(pcVar9 + -0x120) = uVar23;
    *(long *)(pcVar9 + -0x118) = lVar16;
    *(char **)(pcVar9 + -0x110) = pcVar9 + -0xf0;
    *(undefined **)(pcVar9 + -0x108) = &Core_Services_ReplicatorOutput__Finish;
    puVar25 = pcVar9 + -0x110;
    if ((bRam0000000003eb59ff & 1) == 0) {
      func_0x00f78a20(0x3d3d7c0);
      bRam0000000003eb59ff = 1;
    }
    uVar21 = (uint)uVar22;
    if (*(long *)(lVar15 + 0x30) == 0) {
      uVar14 = func_0x00f78af4();
      uVar1 = 0;
      if (extraout_w1_00 != uVar14) {
        uVar1 = extraout_w1_00 & 0xf;
      }
      return (ulong)(uVar1 | (uVar21 & 0xf) << 4);
    }
    uVar21 = *(uint *)(*(long *)(lVar15 + 0x30) + 0x18);
    uVar23 = (ulong)uVar21;
    if (uVar21 == 0) {
      return 0;
    }
    puVar26 = &UNK_01682c50;
    pcVar9 = pcVar9 + -0x120;
    param_1 = lVar15;
  } while( true );
}



// ============================================================
// RVA: 0x1682894 | Core.Services.ReplicatorOutput.SendEnvelope
// ============================================================

ulong Core_Services_ReplicatorOutput__SendEnvelope(long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint6 uVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  ushort uVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  int extraout_w1;
  uint extraout_w1_00;
  uint uVar16;
  long lVar17;
  int iStack_c4;
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
  uint uStack_70;
  undefined2 uStack_6c;
  ushort uStack_6a;
  undefined2 uStack_68;
  undefined4 uStack_66;
  undefined2 uStack_62;
  
  if ((bRam0000000003eb5a00 & 1) == 0) {
    func_0x00f78a20(0x3d33690);
    func_0x00f78a20(0x3d33698);
    func_0x00f78a20(0x3d336a0);
    func_0x00f78a20(0x3d3d7b0);
    func_0x00f78a20(0x3d3d7b8);
    func_0x00f78a20(0x3d3d7c0);
    bRam0000000003eb5a00 = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_66 = 0;
  uStack_62 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar12 = *(long *)(param_1 + 0x30);
  if (lVar12 == 0) goto LAB_01682b80;
  iVar9 = *(int *)(lVar12 + 0x18);
  if (1 < iVar9) {
    Core_Services_ReplicatorEnvelope__StartStreamsVector(*(undefined8 *)(param_1 + 0x20),iVar9);
    lVar12 = *(long *)(param_1 + 0x30);
    if (lVar12 == 0) goto LAB_01682b80;
  }
  /*System.Collections.Generic.List<ReplicatorOutput.StreamInternal>$$GetEnumerator*/ func_0x0257cb14(&uStack_c0,lVar12,uRam0000000003d3d7b8);
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = (undefined2)uStack_98;
  uStack_66 = (undefined4)((ulong)uStack_98 >> 0x10);
  uStack_62 = (undefined2)((ulong)uStack_98 >> 0x30);
  uStack_70 = (uint)uStack_a0;
  uStack_6c = (undefined2)((ulong)uStack_a0 >> 0x20);
  uStack_6a = (ushort)((ulong)uStack_a0 >> 0x30);
  while (uVar13 = /*System.Collections.Generic.List.Enumerator<ReplicatorOutput.StreamInternal>$$MoveNext*/ func_0x01f82ac0(&uStack_90,uRam0000000003d33698), uVar6 = uStack_6a,
        uVar5 = uStack_6c, uVar16 = uStack_70, uVar15 = uStack_80, (uVar13 & 1) != 0) {
    plVar14 = *(long **)(param_1 + 0x18);
    if (plVar14 == (long *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1682b80);
      (*pcVar7)();
    }
    uVar11 = (uint)uStack_78;
    bVar3 = uStack_78._4_1_;
    sVar4 = uStack_78._6_2_;
    uVar2 = CONCAT24(uStack_6c,uStack_70);
    uVar8 = (**(code **)(*plVar14 + 0x748))(plVar14,*(undefined8 *)(*plVar14 + 0x750));
    uVar1 = 0;
    if (uVar11 != uVar8) {
      uVar1 = uVar11 & 0xf;
    }
    param_3 = (ulong)(uVar1 | (bVar3 & 0xf) << 4);
    /*Core.Services.ReplicatorStream$$CreateReplicatorStream*/ func_0x01682c7c(*(undefined8 *)(param_1 + 0x20),uVar15,param_3,(int)sVar4,uVar16 & 0xffff,
                    (ulong)(uVar2 >> 0x10) & 0xffff,uVar5,uVar6 & 0xff);
  }
  /*System.Collections.Generic.List.Enumerator<ReplicatorOutput.StreamInternal>$$Dispose*/ func_0x01f82abc(&uStack_90,uRam0000000003d33690);
  iStack_c4 = iVar9;
  do {
    if (iStack_c4 < 2) {
code_r0x01682a60:
      if (*(long *)(param_1 + 0x20) != 0) {
        param_3 = 0;
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x38),0);
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar12 != 0)) {
          lVar12 = /*FlatBuffers.ByteBuffer$$get_Data*/ func_0x016cc19c(lVar12,0);
          if (lVar12 == 0) {
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            if (*(int *)(lVar12 + 0x18) != 0) {
              lVar17 = lVar12 + 0x20;
            }
          }
          if (*(long *)(param_1 + 0x20) != 0) {
            uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(*(long *)(param_1 + 0x20),0);
            uVar15 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar17,0);
            if ((*(long *)(param_1 + 0x20) != 0) &&
               (lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar12 != 0)) {
              iVar9 = /*FlatBuffers.ByteBuffer$$get_Length*/ func_0x016cc17c(lVar12,0);
              param_3 = 0;
              uVar15 = /*System.IntPtr$$op_Addition*/ func_0x02aeb208(uVar15,iVar9 - (int)uVar13,0);
              if (*(long *)(param_1 + 0x18) != 0) {
                Core_Services_Internal__SendReplicatorDataToTarget
                          (*(long *)(param_1 + 0x18),uVar15,uVar13,0,0,0);
                param_3 = uVar13;
                if (*(long *)(param_1 + 0x30) != 0) {
                  param_3 = 0;
                  uVar10 = /*UnityEngine.Mathf$$Max*/ func_0x0323cd04(*(undefined4 *)(param_1 + 0x10),
                                           *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18),0);
                  *(undefined4 *)(param_1 + 0x10) = uVar10;
                  if (*(long *)(param_1 + 0x30) != 0) {
                    /*System.Collections.Generic.List<ReplicatorOutput.StreamInternal>$$Clear*/ func_0x0257c2c0(*(long *)(param_1 + 0x30),uRam0000000003d3d7b0);
                    if (*(long *)(param_1 + 0x20) != 0) {
                      uVar13 = /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(*(long *)(param_1 + 0x20),0);
                      return uVar13;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (*(long *)(param_1 + 0x20) != 0) {
      /*FlatBuffers.FlatBufferBuilder$$EndVector*/ func_0x016ce20c(*(long *)(param_1 + 0x20),0);
      goto code_r0x01682a60;
    }
LAB_01682b80:
    func_0x00f78af4();
    uVar16 = (uint)param_3;
    if (extraout_w1 != 1) goto code_r0x01682bc8;
    plVar14 = (long *)___cxa_begin_catch();
    lVar12 = *plVar14;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<ReplicatorOutput.StreamInternal>$$Dispose*/ func_0x01f82abc(&uStack_90,uRam0000000003d33690);
    uVar16 = (uint)param_3;
  } while (lVar12 == 0);
  func_0x00f78ac0(lVar12,0);
code_r0x01682bc8:
  lVar12 = __Unwind_Resume();
  plVar14 = *(long **)(lVar12 + 0x18);
  if (plVar14 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar14 + 0x898))(plVar14,*(undefined8 *)(*plVar14 + 0x8a0));
    *(int *)(lVar12 + 0x38) = (int)uVar13;
    return uVar13;
  }
  lVar12 = func_0x00f78af4();
  if ((bRam0000000003eb59ff & 1) == 0) {
    func_0x00f78a20(0x3d3d7c0);
    bRam0000000003eb59ff = 1;
  }
  if (*(long *)(lVar12 + 0x30) == 0) {
    uVar11 = func_0x00f78af4();
    uVar1 = 0;
    if (extraout_w1_00 != uVar11) {
      uVar1 = extraout_w1_00 & 0xf;
    }
    return (ulong)(uVar1 | (uVar16 & 0xf) << 4);
  }
  uVar16 = *(uint *)(*(long *)(lVar12 + 0x30) + 0x18);
  if (uVar16 != 0) {
    Core_Services_ReplicatorOutput__SendEnvelope(lVar12);
  }
  return (ulong)uVar16;
}



// ============================================================
// RVA: 0x1682bcc | Core.Services.ReplicatorOutput.Start
// ============================================================

ulong Core_Services_ReplicatorOutput__Start(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint extraout_w1;
  
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x898))(plVar3,*(undefined8 *)(*plVar3 + 0x8a0));
    *(int *)(param_1 + 0x38) = (int)uVar4;
    return uVar4;
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb59ff & 1) == 0) {
    func_0x00f78a20(0x3d3d7c0);
    bRam0000000003eb59ff = 1;
  }
  if (*(long *)(lVar5 + 0x30) != 0) {
    uVar1 = *(uint *)(*(long *)(lVar5 + 0x30) + 0x18);
    if (uVar1 != 0) {
      Core_Services_ReplicatorOutput__SendEnvelope(lVar5);
    }
    return (ulong)uVar1;
  }
  uVar2 = func_0x00f78af4();
  uVar1 = 0;
  if (extraout_w1 != uVar2) {
    uVar1 = extraout_w1 & 0xf;
  }
  return (ulong)(uVar1 | (param_3 & 0xf) << 4);
}



// ============================================================
// RVA: 0x1682c08 | Core.Services.ReplicatorOutput.Finish
// ============================================================

uint Core_Services_ReplicatorOutput__Finish(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint extraout_w1;
  
  if ((bRam0000000003eb59ff & 1) == 0) {
    func_0x00f78a20(0x3d3d7c0);
    bRam0000000003eb59ff = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x18);
    if (uVar1 != 0) {
      Core_Services_ReplicatorOutput__SendEnvelope(param_1);
    }
    return uVar1;
  }
  uVar2 = func_0x00f78af4();
  uVar1 = 0;
  if (extraout_w1 != uVar2) {
    uVar1 = extraout_w1 & 0xf;
  }
  return uVar1 | (param_3 & 0xf) << 4;
}



