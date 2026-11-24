// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.CollidableUsable

// ============================================================
// RVA: 0x156feb0 | Atlas.Gameplay.Usables.CollidableUsable.get_CollidableDefinition
// ============================================================

void Atlas_Gameplay_Usables_CollidableUsable__get_CollidableDefinition(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb502c & 1) == 0) {
    func_0x00f78a20(0x3d207f8);
    bRam0000000003eb502c = 1;
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    lVar1 = **(long **)(param_1 + 0x30);
    if ((*(byte *)(lVar1 + 300) < *(byte *)(/*Atlas.Definitions.CollidableUsableDefinition_TypeInfo*/ lRam0000000003d207f8 + 300)) ||
       (*(long *)(*(long *)(lVar1 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.CollidableUsableDefinition_TypeInfo*/ lRam0000000003d207f8 + 300) * 8 + -8) !=
        /*Atlas.Definitions.CollidableUsableDefinition_TypeInfo*/ lRam0000000003d207f8)) {
      lVar1 = func_0x00f78e5c();
      if ((bRam0000000003eb502d & 1) == 0) {
        func_0x00f78a20(0x3d207f0);
        bRam0000000003eb502d = 1;
      }
      if (*(long **)(lVar1 + 0x48) != (long *)0x0) {
        lVar1 = **(long **)(lVar1 + 0x48);
        if ((*(byte *)(lVar1 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.CollidableUsableBehaviour_TypeInfo*/ lRam0000000003d207f0 + 300)) ||
           (*(long *)(*(long *)(lVar1 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.CollidableUsableBehaviour_TypeInfo*/ lRam0000000003d207f0 + 300) * 8 + -8
                     ) != /*Atlas.Gameplay.Usables.CollidableUsableBehaviour_TypeInfo*/ lRam0000000003d207f0)) {
          lVar1 = func_0x00f78e5c();
          if (*(char *)(lVar1 + 0x19) != '\0') {
            /*Atlas.Gameplay.Usables.CollidableUsable$$OnTearDownParamsInternal*/ func_0x0156ffdc(lVar1);
          }
          if (*(char *)(lVar1 + 0x19) != '\0') {
            /*Atlas.Gameplay.Usables.Usable$$OnTearDownParamsInternal*/ func_0x01523890(lVar1,0);
          }
          *(undefined8 *)(lVar1 + 0x10) = 0;
          *(undefined8 *)(lVar1 + 0x20) = 0;
          *(undefined8 *)(lVar1 + 0x58) = 0;
          *(undefined8 *)(lVar1 + 0x38) = 0;
          return;
        }
      }
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x156ff2c | Atlas.Gameplay.Usables.CollidableUsable.get_CollidableUsableBehaviour
// ============================================================

void Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb502d & 1) == 0) {
    func_0x00f78a20(0x3d207f0);
    bRam0000000003eb502d = 1;
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    lVar1 = **(long **)(param_1 + 0x48);
    if ((*(byte *)(lVar1 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.CollidableUsableBehaviour_TypeInfo*/ lRam0000000003d207f0 + 300)) ||
       (*(long *)(*(long *)(lVar1 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.CollidableUsableBehaviour_TypeInfo*/ lRam0000000003d207f0 + 300) * 8 + -8) !=
        /*Atlas.Gameplay.Usables.CollidableUsableBehaviour_TypeInfo*/ lRam0000000003d207f0)) {
      lVar1 = func_0x00f78e5c();
      if (*(char *)(lVar1 + 0x19) != '\0') {
        /*Atlas.Gameplay.Usables.CollidableUsable$$OnTearDownParamsInternal*/ func_0x0156ffdc(lVar1);
      }
      if (*(char *)(lVar1 + 0x19) != '\0') {
        /*Atlas.Gameplay.Usables.Usable$$OnTearDownParamsInternal*/ func_0x01523890(lVar1,0);
      }
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x58) = 0;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x156ffa8 | Atlas.Gameplay.Usables.CollidableUsable.DeInit
// ============================================================

void Atlas_Gameplay_Usables_CollidableUsable__DeInit(long param_1)

{
  if (*(char *)(param_1 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.CollidableUsable$$OnTearDownParamsInternal*/ func_0x0156ffdc(param_1);
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
// RVA: 0x156ffdc | Atlas.Gameplay.Usables.CollidableUsable.OnTearDownParamsInternal
// ============================================================

/* WARNING: Possible PIC construction at 0x015700cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015701c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015701c4) */
/* WARNING: Removing unreachable block (ram,0x015701cc) */
/* WARNING: Removing unreachable block (ram,0x015701e0) */
/* WARNING: Removing unreachable block (ram,0x015701f0) */
/* WARNING: Removing unreachable block (ram,0x01570208) */
/* WARNING: Removing unreachable block (ram,0x01570210) */
/* WARNING: Removing unreachable block (ram,0x01570214) */
/* WARNING: Removing unreachable block (ram,0x01570228) */
/* WARNING: Removing unreachable block (ram,0x01570234) */
/* WARNING: Removing unreachable block (ram,0x0157023c) */
/* WARNING: Removing unreachable block (ram,0x01570248) */
/* WARNING: Removing unreachable block (ram,0x01570254) */
/* WARNING: Removing unreachable block (ram,0x0157025c) */
/* WARNING: Removing unreachable block (ram,0x01570274) */
/* WARNING: Removing unreachable block (ram,0x015702a8) */
/* WARNING: Removing unreachable block (ram,0x0157027c) */
/* WARNING: Removing unreachable block (ram,0x015700d0) */
/* WARNING: Removing unreachable block (ram,0x015700dc) */
/* WARNING: Removing unreachable block (ram,0x015700ec) */
/* WARNING: Removing unreachable block (ram,0x015700f4) */
/* WARNING: Removing unreachable block (ram,0x015700f8) */
/* WARNING: Removing unreachable block (ram,0x0157010c) */
/* WARNING: Removing unreachable block (ram,0x01570118) */
/* WARNING: Removing unreachable block (ram,0x01570120) */
/* WARNING: Removing unreachable block (ram,0x0157012c) */
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

void Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int extraout_w1;
  undefined8 uVar8;
  bool bVar9;
  long lVar10;
  undefined1 **ppuVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
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
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5032 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5032 = 1;
  }
  lVar6 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(param_1);
  puStack_40 = &stack0xfffffffffffffff0;
  if (lVar6 == 0) {
LAB_01570140:
    auVar15 = func_0x00f78af4();
    puStack_38 = &Atlas_Gameplay_Usables_CollidableUsable__OnExitPool;
    ppuVar11 = &puStack_40;
    if ((bRam0000000003eb502e & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb502e = 1;
    }
    puVar12 = &UNK_015701c4;
  }
  else {
    *(undefined8 *)(lVar6 + 0x68) = 0;
    lVar6 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(param_1);
    if (lVar6 == 0) goto LAB_01570140;
    uVar8 = *(undefined8 *)(lVar6 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = 0;
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0);
    if (iVar2 != 0) {
      lVar6 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(param_1);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x58) == 0)) goto LAB_01570140;
      param_3 = 0;
      /*UnityEngine.Collider$$set_enabled*/ func_0x0329e954(*(long *)(lVar6 + 0x58),0);
    }
    lVar6 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(param_1);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x60) == 0)) goto LAB_01570140;
    param_3 = 0;
    /*UnityEngine.Collider$$set_enabled*/ func_0x0329e954(*(long *)(lVar6 + 0x60),0);
    lVar6 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(param_1);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x50) == 0)) goto LAB_01570140;
    param_3 = 0;
    /*UnityEngine.Rigidbody$$set_collisionDetectionMode*/ func_0x032a28b4(*(long *)(lVar6 + 0x50),3);
    puStack_38 = (undefined *)0x15700d0;
    if ((bRam0000000003eb5033 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5033 = 1;
    }
    lVar6 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(param_1);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x50) != 0)) {
      /*UnityEngine.Rigidbody$$set_isKinematic*/ func_0x032a2704(*(long *)(lVar6 + 0x50),1,0);
      uVar8 = *(undefined8 *)(param_1 + 200);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = 0;
      uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0);
      if ((uVar7 & 1) != 0) {
        return;
      }
      if (*(long *)(param_1 + 200) != 0) {
        /*Core.Services.Replicator$$Clear*/ func_0x0167ff88(*(long *)(param_1 + 200),0);
        if (*(long *)(param_1 + 200) != 0) {
          iVar2 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(*(long *)(param_1 + 200),0);
          if (iVar2 != 1) {
            return;
          }
          lVar6 = *(long *)(param_1 + 200);
          if (lVar6 != 0) {
            if (pcRam0000000003ebe9d8 == (code *)0x0) {
              pcRam0000000003ebe9d8 =
                   (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
            }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003ebe9d8)(lVar6,0);
            return;
          }
        }
      }
    }
    lVar6 = func_0x00f78af4();
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal();
    ppuVar11 = (undefined1 **)&stack0xffffffffffffff90;
    if ((bRam0000000003eb4e50 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003eb4e50 = 1;
    }
    if ((*(long *)(lVar6 + 0x48) != 0) &&
       (lVar3 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar3 != 0)) {
      /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar6 + 100),*(undefined4 *)(lVar6 + 0x68),
                      *(undefined4 *)(lVar6 + 0x6c),lVar3,0);
      if ((*(long *)(lVar6 + 0x48) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar3 != 0)) {
        /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar6 + 0x70),*(undefined4 *)(lVar6 + 0x74),
                        *(undefined4 *)(lVar6 + 0x78),*(undefined4 *)(lVar6 + 0x7c),lVar3,0);
        if ((*(long *)(lVar6 + 0x48) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar3 != 0)) {
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar6 + 0x80),*(undefined4 *)(lVar6 + 0x84),
                          *(undefined4 *)(lVar6 + 0x88),lVar3,0);
          *(undefined1 *)(lVar6 + 0x19) = 0;
          *(undefined8 *)(lVar6 + 0x98) = 0;
          *(undefined8 *)(lVar6 + 0x90) = 0;
          *(undefined8 *)(lVar6 + 0xa8) = 0;
          *(undefined8 *)(lVar6 + 0xa0) = 0;
          *(undefined8 *)(lVar6 + 0xb8) = 0;
          *(undefined8 *)(lVar6 + 0xb0) = 0;
          if (*(long *)(lVar6 + 0x48) != 0) {
            lVar3 = *(long *)(*(long *)(lVar6 + 0x48) + 0x30);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            param_3 = 0;
            iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0);
            if (iVar2 != 0) {
              if (lVar3 == 0) goto code_r0x015239b0;
              *(undefined2 *)(lVar3 + 0x46) = 0;
              *(undefined4 *)(lVar3 + 0x40) = 0;
              *(undefined1 *)(lVar3 + 0x44) = 0;
            }
            if (*(long *)(lVar6 + 0x48) != 0) {
              *(undefined8 *)(*(long *)(lVar6 + 0x48) + 0x40) = 0;
              *(undefined8 *)(lVar6 + 0x48) = 0;
              *(undefined1 *)(lVar6 + 0x18) = 0;
              *(undefined8 *)(lVar6 + 0x28) = 0;
              *(undefined8 *)(lVar6 + 0x30) = 0;
              *(undefined4 *)(lVar6 + 0x40) = 0xbf800000;
              *(undefined2 *)(lVar6 + 0x60) = 0;
              return;
            }
          }
        }
      }
    }
code_r0x015239b0:
    puVar12 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
    auVar15 = func_0x00f78af4();
  }
  lVar3 = auVar15._8_8_;
  lVar6 = auVar15._0_8_;
  ppuStack_90 = ppuVar11;
  puStack_88 = puVar12;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar6 + 0x19) = 1;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(long *)(lVar6 + 0x30) = lVar3;
  *(undefined8 *)(lVar6 + 0x48) = param_3;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  if ((*(long *)(lVar6 + 0x58) != 0) && (lVar3 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar6 + 0x58) + 0x10);
    lVar3 = *(long *)(lVar3 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar3,0);
    if (lVar10 != 0) {
      uVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar8,uRam0000000003d572a0);
      *(undefined8 *)(lVar6 + 0x90) = uVar8;
      puVar12 = &UNK_01523aa4;
      lVar10 = lVar6;
      goto code_r0x01523ba8;
    }
  }
  puVar12 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar10 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_110 = lVar3;
  uStack_108 = param_3;
  lStack_100 = lVar6;
  pppuStack_e0 = &ppuStack_90;
  puStack_d8 = puVar12;
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
  lVar6 = *(long *)(lVar10 + 0x90);
  if (lVar6 != 0) {
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    uVar8 = *(undefined8 *)(lVar6 + 0x20);
    uVar14 = *(undefined8 *)(lVar6 + 0x38);
    uVar13 = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar6 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar14;
    *(undefined8 *)(lVar10 + 0xa8) = uVar13;
    *(undefined8 *)(lVar10 + 0xa0) = uVar4;
    *(undefined8 *)(lVar10 + 0x98) = uVar8;
    if (*(long *)(lVar6 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar6 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar6 != 0) {
      uStack_118 = *(undefined8 *)(lVar6 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar6 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar6 != 0)) &&
         (lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uStack_118,uRam0000000003d57270), lVar6 != 0)) {
        uStack_120 = *(undefined8 *)(lVar6 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar6 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar6 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_160,lVar6,uRam0000000003d3d2e8);
          bVar9 = false;
          while (uVar7 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_160,uRam0000000003d334f0), uVar8 = uStack_150,
                (uVar7 & 1) != 0) {
            uStack_188 = uStack_140;
            uStack_190 = uStack_148;
            uStack_178 = uStack_130;
            uStack_180 = uStack_138;
            uStack_170 = uStack_128;
            uStack_198 = uStack_150;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_198);
            uVar7 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_118,uVar4,0);
            if ((uVar7 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_188;
              *(undefined8 *)(lVar10 + 0x98) = uStack_190;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_178;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_180;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_170;
              bVar9 = true;
            }
            uStack_198 = uVar8;
            uVar8 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_198);
            uVar1 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_120,uVar8,0);
            if (!bVar9 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
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
    lVar6 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_160,uRam0000000003d334e8);
    if (lVar6 == 0) {
      return;
    }
    func_0x00f78ac0(lVar6,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x1570144 | Atlas.Gameplay.Usables.CollidableUsable.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x015701c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015701c4) */
/* WARNING: Removing unreachable block (ram,0x015701cc) */
/* WARNING: Removing unreachable block (ram,0x015701e0) */
/* WARNING: Removing unreachable block (ram,0x015701f0) */
/* WARNING: Removing unreachable block (ram,0x01570208) */
/* WARNING: Removing unreachable block (ram,0x01570210) */
/* WARNING: Removing unreachable block (ram,0x01570214) */
/* WARNING: Removing unreachable block (ram,0x01570228) */
/* WARNING: Removing unreachable block (ram,0x01570234) */
/* WARNING: Removing unreachable block (ram,0x0157023c) */
/* WARNING: Removing unreachable block (ram,0x01570248) */
/* WARNING: Removing unreachable block (ram,0x01570254) */
/* WARNING: Removing unreachable block (ram,0x0157025c) */
/* WARNING: Removing unreachable block (ram,0x01570274) */
/* WARNING: Removing unreachable block (ram,0x015702a8) */
/* WARNING: Removing unreachable block (ram,0x0157027c) */
/* WARNING: Removing unreachable block (ram,0x015702ac) */
/* WARNING: Removing unreachable block (ram,0x015702d0) */
/* WARNING: Removing unreachable block (ram,0x015702e4) */
/* WARNING: Removing unreachable block (ram,0x015702f0) */
/* WARNING: Removing unreachable block (ram,0x015702f8) */
/* WARNING: Removing unreachable block (ram,0x0157031c) */
/* WARNING: Removing unreachable block (ram,0x01570324) */
/* WARNING: Removing unreachable block (ram,0x01570328) */
/* WARNING: Removing unreachable block (ram,0x0157033c) */
/* WARNING: Removing unreachable block (ram,0x01570344) */
/* WARNING: Removing unreachable block (ram,0x01570354) */
/* WARNING: Removing unreachable block (ram,0x01570374) */
/* WARNING: Removing unreachable block (ram,0x01570394) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
/* WARNING: Removing unreachable block (ram,0x01523890) */
/* WARNING: Removing unreachable block (ram,0x015238ac) */
/* WARNING: Removing unreachable block (ram,0x015238c0) */
/* WARNING: Removing unreachable block (ram,0x015238c8) */
/* WARNING: Removing unreachable block (ram,0x015238d0) */
/* WARNING: Removing unreachable block (ram,0x015238e8) */
/* WARNING: Removing unreachable block (ram,0x015238f0) */
/* WARNING: Removing unreachable block (ram,0x01523908) */
/* WARNING: Removing unreachable block (ram,0x01523910) */
/* WARNING: Removing unreachable block (ram,0x01523938) */
/* WARNING: Removing unreachable block (ram,0x01523950) */
/* WARNING: Removing unreachable block (ram,0x01523958) */
/* WARNING: Removing unreachable block (ram,0x0152395c) */
/* WARNING: Removing unreachable block (ram,0x01523970) */
/* WARNING: Removing unreachable block (ram,0x01523974) */
/* WARNING: Removing unreachable block (ram,0x01523980) */
/* WARNING: Removing unreachable block (ram,0x015239b0) */
/* WARNING: Removing unreachable block (ram,0x01523988) */
/* WARNING: Removing unreachable block (ram,0x0157037c) */
/* WARNING: Removing unreachable block (ram,0x0321a930) */
/* WARNING: Removing unreachable block (ram,0x0321a954) */
/* WARNING: Removing unreachable block (ram,0x0321a968) */
/* WARNING: Removing unreachable block (ram,0x01570364) */
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

void Atlas_Gameplay_Usables_CollidableUsable__OnExitPool
               (long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb502e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb502e = 1;
  }
  puStack_58 = &UNK_015701c4;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (param_2 != 0)) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 0x10);
    param_2 = *(long *)(param_2 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(param_2,0);
    if (lVar8 != 0) {
      uVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,uVar2,uRam0000000003d572a0);
      *(undefined8 *)(param_1 + 0x90) = uVar2;
      puVar9 = &UNK_01523aa4;
      lVar8 = param_1;
      goto code_r0x01523ba8;
    }
  }
  puVar9 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar8 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_e0 = param_2;
  uStack_d8 = param_3;
  lStack_d0 = param_1;
  ppuStack_b0 = &puStack_60;
  puStack_a8 = puVar9;
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
  if (*(long *)(lVar8 + 0x28) == 0) {
    return;
  }
  lVar6 = *(long *)(lVar8 + 0x90);
  if (lVar6 != 0) {
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    uVar2 = *(undefined8 *)(lVar6 + 0x20);
    uVar11 = *(undefined8 *)(lVar6 + 0x38);
    uVar10 = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(lVar8 + 0xb8) = *(undefined8 *)(lVar6 + 0x40);
    *(undefined8 *)(lVar8 + 0xb0) = uVar11;
    *(undefined8 *)(lVar8 + 0xa8) = uVar10;
    *(undefined8 *)(lVar8 + 0xa0) = uVar4;
    *(undefined8 *)(lVar8 + 0x98) = uVar2;
    if (*(long *)(lVar6 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar6 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(lVar8 + 0x28) + 0x28);
    if (lVar6 != 0) {
      uStack_e8 = *(undefined8 *)(lVar6 + 0xc0);
      if (((*(long *)(lVar8 + 0x58) != 0) &&
          (lVar6 = *(long *)(*(long *)(lVar8 + 0x58) + 0x10), lVar6 != 0)) &&
         (lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uStack_e8,uRam0000000003d57270), lVar6 != 0)) {
        uStack_f0 = *(undefined8 *)(lVar6 + 0x70);
        if ((*(long *)(lVar8 + 0x90) != 0) &&
           (lVar6 = *(long *)(*(long *)(lVar8 + 0x90) + 0x48), lVar6 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_130,lVar6,uRam0000000003d3d2e8);
          bVar7 = false;
          while (uVar3 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_130,uRam0000000003d334f0), uVar2 = uStack_120,
                (uVar3 & 1) != 0) {
            uStack_158 = uStack_110;
            uStack_160 = uStack_118;
            uStack_148 = uStack_100;
            uStack_150 = uStack_108;
            uStack_140 = uStack_f8;
            uStack_168 = uStack_120;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar3 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_e8,uVar4,0);
            if ((uVar3 & 1) != 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_158;
              *(undefined8 *)(lVar8 + 0x98) = uStack_160;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_148;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_150;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_140;
              bVar7 = true;
            }
            uStack_168 = uVar2;
            uVar2 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar1 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_f0,uVar2,0);
            if (!bVar7 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_158;
              *(undefined8 *)(lVar8 + 0x98) = uStack_160;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_148;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_150;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_140;
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
    lVar8 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_130,uRam0000000003d334e8);
    if (lVar8 == 0) {
      return;
    }
    func_0x00f78ac0(lVar8,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x1570154 | Atlas.Gameplay.Usables.CollidableUsable.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x015701c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015701c4) */
/* WARNING: Removing unreachable block (ram,0x015701cc) */
/* WARNING: Removing unreachable block (ram,0x015701e0) */
/* WARNING: Removing unreachable block (ram,0x015701f0) */
/* WARNING: Removing unreachable block (ram,0x01570208) */
/* WARNING: Removing unreachable block (ram,0x01570210) */
/* WARNING: Removing unreachable block (ram,0x01570214) */
/* WARNING: Removing unreachable block (ram,0x01570228) */
/* WARNING: Removing unreachable block (ram,0x01570234) */
/* WARNING: Removing unreachable block (ram,0x0157023c) */
/* WARNING: Removing unreachable block (ram,0x01570248) */
/* WARNING: Removing unreachable block (ram,0x01570254) */
/* WARNING: Removing unreachable block (ram,0x0157025c) */
/* WARNING: Removing unreachable block (ram,0x01570274) */
/* WARNING: Removing unreachable block (ram,0x015702a8) */
/* WARNING: Removing unreachable block (ram,0x0157027c) */
/* WARNING: Removing unreachable block (ram,0x015702ac) */
/* WARNING: Removing unreachable block (ram,0x015702d0) */
/* WARNING: Removing unreachable block (ram,0x015702e4) */
/* WARNING: Removing unreachable block (ram,0x015702f0) */
/* WARNING: Removing unreachable block (ram,0x015702f8) */
/* WARNING: Removing unreachable block (ram,0x0157031c) */
/* WARNING: Removing unreachable block (ram,0x01570324) */
/* WARNING: Removing unreachable block (ram,0x01570328) */
/* WARNING: Removing unreachable block (ram,0x0157033c) */
/* WARNING: Removing unreachable block (ram,0x01570344) */
/* WARNING: Removing unreachable block (ram,0x01570354) */
/* WARNING: Removing unreachable block (ram,0x01570374) */
/* WARNING: Removing unreachable block (ram,0x01570394) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
/* WARNING: Removing unreachable block (ram,0x01523890) */
/* WARNING: Removing unreachable block (ram,0x015238ac) */
/* WARNING: Removing unreachable block (ram,0x015238c0) */
/* WARNING: Removing unreachable block (ram,0x015238c8) */
/* WARNING: Removing unreachable block (ram,0x015238d0) */
/* WARNING: Removing unreachable block (ram,0x015238e8) */
/* WARNING: Removing unreachable block (ram,0x015238f0) */
/* WARNING: Removing unreachable block (ram,0x01523908) */
/* WARNING: Removing unreachable block (ram,0x01523910) */
/* WARNING: Removing unreachable block (ram,0x01523938) */
/* WARNING: Removing unreachable block (ram,0x01523950) */
/* WARNING: Removing unreachable block (ram,0x01523958) */
/* WARNING: Removing unreachable block (ram,0x0152395c) */
/* WARNING: Removing unreachable block (ram,0x01523970) */
/* WARNING: Removing unreachable block (ram,0x01523974) */
/* WARNING: Removing unreachable block (ram,0x01523980) */
/* WARNING: Removing unreachable block (ram,0x015239b0) */
/* WARNING: Removing unreachable block (ram,0x01523988) */
/* WARNING: Removing unreachable block (ram,0x0157037c) */
/* WARNING: Removing unreachable block (ram,0x0321a930) */
/* WARNING: Removing unreachable block (ram,0x0321a954) */
/* WARNING: Removing unreachable block (ram,0x0321a968) */
/* WARNING: Removing unreachable block (ram,0x01570364) */
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

void Atlas_Gameplay_Usables_CollidableUsable__OnExitPool
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb502e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb502e = 1;
  }
  uStack_58 = 0x15701c4;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  *(long *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (param_2 != 0)) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 0x10);
    param_2 = *(long *)(param_2 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(param_2,0);
    if (lVar8 != 0) {
      uVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,uVar2,uRam0000000003d572a0);
      *(undefined8 *)(param_1 + 0x90) = uVar2;
      puVar9 = &UNK_01523aa4;
      lVar8 = param_1;
      goto code_r0x01523ba8;
    }
  }
  puVar9 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar8 = func_0x00f78af4();
code_r0x01523ba8:
  lStack_e0 = param_2;
  uStack_d8 = param_3;
  lStack_d0 = param_1;
  uStack_c8 = param_4;
  uStack_c0 = param_5;
  uStack_b8 = param_6;
  ppuStack_b0 = &puStack_60;
  puStack_a8 = puVar9;
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
  if (*(long *)(lVar8 + 0x28) == 0) {
    return;
  }
  lVar6 = *(long *)(lVar8 + 0x90);
  if (lVar6 != 0) {
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    uVar2 = *(undefined8 *)(lVar6 + 0x20);
    uVar11 = *(undefined8 *)(lVar6 + 0x38);
    uVar10 = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(lVar8 + 0xb8) = *(undefined8 *)(lVar6 + 0x40);
    *(undefined8 *)(lVar8 + 0xb0) = uVar11;
    *(undefined8 *)(lVar8 + 0xa8) = uVar10;
    *(undefined8 *)(lVar8 + 0xa0) = uVar4;
    *(undefined8 *)(lVar8 + 0x98) = uVar2;
    if (*(long *)(lVar6 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar6 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(lVar8 + 0x28) + 0x28);
    if (lVar6 != 0) {
      uStack_e8 = *(undefined8 *)(lVar6 + 0xc0);
      if (((*(long *)(lVar8 + 0x58) != 0) &&
          (lVar6 = *(long *)(*(long *)(lVar8 + 0x58) + 0x10), lVar6 != 0)) &&
         (lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uStack_e8,uRam0000000003d57270), lVar6 != 0)) {
        uStack_f0 = *(undefined8 *)(lVar6 + 0x70);
        if ((*(long *)(lVar8 + 0x90) != 0) &&
           (lVar6 = *(long *)(*(long *)(lVar8 + 0x90) + 0x48), lVar6 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_130,lVar6,uRam0000000003d3d2e8);
          bVar7 = false;
          while (uVar3 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_130,uRam0000000003d334f0), uVar2 = uStack_120,
                (uVar3 & 1) != 0) {
            uStack_158 = uStack_110;
            uStack_160 = uStack_118;
            uStack_148 = uStack_100;
            uStack_150 = uStack_108;
            uStack_140 = uStack_f8;
            uStack_168 = uStack_120;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar3 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_e8,uVar4,0);
            if ((uVar3 & 1) != 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_158;
              *(undefined8 *)(lVar8 + 0x98) = uStack_160;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_148;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_150;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_140;
              bVar7 = true;
            }
            uStack_168 = uVar2;
            uVar2 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar1 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_f0,uVar2,0);
            if (!bVar7 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_158;
              *(undefined8 *)(lVar8 + 0x98) = uStack_160;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_148;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_150;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_140;
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
    lVar8 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_130,uRam0000000003d334e8);
    if (lVar8 == 0) {
      return;
    }
    func_0x00f78ac0(lVar8,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x15702ac | Atlas.Gameplay.Usables.CollidableUsable.SetKinematic
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

void Atlas_Gameplay_Usables_CollidableUsable__SetKinematic
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int extraout_w1;
  undefined8 uVar8;
  bool bVar9;
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
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5033 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5033 = 1;
  }
  lVar6 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour(param_1);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x50) != 0)) {
    /*UnityEngine.Rigidbody$$set_isKinematic*/ func_0x032a2704(*(long *)(lVar6 + 0x50),param_2,0);
    uVar8 = *(undefined8 *)(param_1 + 200);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = 0;
    uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 200) != 0) {
      /*Core.Services.Replicator$$Clear*/ func_0x0167ff88(*(long *)(param_1 + 200),0);
      if (*(long *)(param_1 + 200) != 0) {
        uVar2 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(*(long *)(param_1 + 200),0);
        if (uVar2 != (uint)param_2) {
          return;
        }
        lVar6 = *(long *)(param_1 + 200);
        if (lVar6 != 0) {
          if (pcRam0000000003ebe9d8 == (code *)0x0) {
            pcRam0000000003ebe9d8 =
                 (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003ebe9d8)(lVar6,(uint)param_2 ^ 1);
          return;
        }
      }
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Usables_CollidableUsable__OnEnterPool;
  lStack_50 = param_1;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal();
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar6 + 0x48) != 0) &&
     (lVar3 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar3 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar6 + 100),*(undefined4 *)(lVar6 + 0x68),
                    *(undefined4 *)(lVar6 + 0x6c),lVar3,0);
    if ((*(long *)(lVar6 + 0x48) != 0) &&
       (lVar3 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar3 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar6 + 0x70),*(undefined4 *)(lVar6 + 0x74),
                      *(undefined4 *)(lVar6 + 0x78),*(undefined4 *)(lVar6 + 0x7c),lVar3,0);
      if ((*(long *)(lVar6 + 0x48) != 0) &&
         (lVar3 = *(long *)(*(long *)(lVar6 + 0x48) + 0x28), lVar3 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar6 + 0x80),*(undefined4 *)(lVar6 + 0x84),
                        *(undefined4 *)(lVar6 + 0x88),lVar3,0);
        *(undefined1 *)(lVar6 + 0x19) = 0;
        *(undefined8 *)(lVar6 + 0x98) = 0;
        *(undefined8 *)(lVar6 + 0x90) = 0;
        *(undefined8 *)(lVar6 + 0xa8) = 0;
        *(undefined8 *)(lVar6 + 0xa0) = 0;
        *(undefined8 *)(lVar6 + 0xb8) = 0;
        *(undefined8 *)(lVar6 + 0xb0) = 0;
        if (*(long *)(lVar6 + 0x48) != 0) {
          lVar3 = *(long *)(*(long *)(lVar6 + 0x48) + 0x30);
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
          if (*(long *)(lVar6 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar6 + 0x48) + 0x40) = 0;
            *(undefined8 *)(lVar6 + 0x48) = 0;
            *(undefined1 *)(lVar6 + 0x18) = 0;
            *(undefined8 *)(lVar6 + 0x28) = 0;
            *(undefined8 *)(lVar6 + 0x30) = 0;
            *(undefined4 *)(lVar6 + 0x40) = 0xbf800000;
            *(undefined2 *)(lVar6 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar14 = func_0x00f78af4();
  lVar3 = auVar14._8_8_;
  lVar6 = auVar14._0_8_;
  puStack_58 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppuStack_60 = &puStack_40;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar6 + 0x19) = 1;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(long *)(lVar6 + 0x30) = lVar3;
  *(undefined8 *)(lVar6 + 0x48) = param_3;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  if ((*(long *)(lVar6 + 0x58) != 0) && (lVar3 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar6 + 0x58) + 0x10);
    lVar3 = *(long *)(lVar3 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar3,0);
    if (lVar10 != 0) {
      uVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar8,uRam0000000003d572a0);
      *(undefined8 *)(lVar6 + 0x90) = uVar8;
      puVar11 = &UNK_01523aa4;
      lVar10 = lVar6;
      goto code_r0x01523ba8;
    }
  }
  puVar11 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar10 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_e0 = lVar3;
  uStack_d8 = param_3;
  lStack_d0 = lVar6;
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
  lVar6 = *(long *)(lVar10 + 0x90);
  if (lVar6 != 0) {
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    uVar8 = *(undefined8 *)(lVar6 + 0x20);
    uVar13 = *(undefined8 *)(lVar6 + 0x38);
    uVar12 = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar6 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar13;
    *(undefined8 *)(lVar10 + 0xa8) = uVar12;
    *(undefined8 *)(lVar10 + 0xa0) = uVar4;
    *(undefined8 *)(lVar10 + 0x98) = uVar8;
    if (*(long *)(lVar6 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar6 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar6 != 0) {
      uStack_e8 = *(undefined8 *)(lVar6 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar6 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar6 != 0)) &&
         (lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uStack_e8,uRam0000000003d57270), lVar6 != 0)) {
        uStack_f0 = *(undefined8 *)(lVar6 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar6 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar6 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_130,lVar6,uRam0000000003d3d2e8);
          bVar9 = false;
          while (uVar7 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_130,uRam0000000003d334f0), uVar8 = uStack_120,
                (uVar7 & 1) != 0) {
            uStack_158 = uStack_110;
            uStack_160 = uStack_118;
            uStack_148 = uStack_100;
            uStack_150 = uStack_108;
            uStack_140 = uStack_f8;
            uStack_168 = uStack_120;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar7 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_e8,uVar4,0);
            if ((uVar7 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_158;
              *(undefined8 *)(lVar10 + 0x98) = uStack_160;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_148;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_150;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_140;
              bVar9 = true;
            }
            uStack_168 = uVar8;
            uVar8 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_168);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_f0,uVar8,0);
            if (!bVar9 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
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
    lVar6 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_130,uRam0000000003d334e8);
    if (lVar6 == 0) {
      return;
    }
    func_0x00f78ac0(lVar6,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x1570398 | Atlas.Gameplay.Usables.CollidableUsable.OnEnterPool
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

void Atlas_Gameplay_Usables_CollidableUsable__OnEnterPool
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
  
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal();
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
// RVA: 0x15703c0 | Atlas.Gameplay.Usables.CollidableUsable.IsRemote
// ============================================================

ulong Atlas_Gameplay_Usables_CollidableUsable__IsRemote(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb502f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb502f = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if ((int)uVar1 != 0) {
    if (*(long *)(param_1 + 200) == 0) {
      lVar2 = func_0x00f78af4();
      return (ulong)(0.0 < *(float *)(lVar2 + 0xc0));
    }
    uVar1 = (ulong)(*(char *)(*(long *)(param_1 + 200) + 0x44) == '\0');
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1570454 | Atlas.Gameplay.Usables.CollidableUsable.IsSelfInvulnerable
// ============================================================

bool Atlas_Gameplay_Usables_CollidableUsable__IsSelfInvulnerable(long param_1)

{
  return 0.0 < *(float *)(param_1 + 0xc0);
}



// ============================================================
// RVA: 0x1570464 | Atlas.Gameplay.Usables.CollidableUsable.Use
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1570574 | Atlas.Gameplay.Usables.CollidableUsable.Update
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15706c8 | Atlas.Gameplay.Usables.CollidableUsable.KartCollision
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x157071c | Atlas.Gameplay.Usables.CollidableUsable.KartCollision
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1570894 | Atlas.Gameplay.Usables.CollidableUsable.OnHitSuccess
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15708f0 | Atlas.Gameplay.Usables.CollidableUsable.OnAoEHit
// ============================================================

void Atlas_Gameplay_Usables_CollidableUsable__OnAoEHit(long *param_1)

{
  if ((char)param_1[3] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x01570904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
    return;
  }
  return;
}



// ============================================================
// RVA: 0x157090c | Atlas.Gameplay.Usables.CollidableUsable.OnCollisionEnter
// ============================================================

void Atlas_Gameplay_Usables_CollidableUsable__OnCollisionEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x1570910 | Atlas.Gameplay.Usables.CollidableUsable.OnCollisionStay
// ============================================================

void Atlas_Gameplay_Usables_CollidableUsable__OnCollisionStay(void)

{
  return;
}



// ============================================================
// RVA: 0x1570914 | Atlas.Gameplay.Usables.CollidableUsable.OnCollisionExit
// ============================================================

void Atlas_Gameplay_Usables_CollidableUsable__OnCollisionExit(void)

{
  return;
}



// ============================================================
// RVA: 0x1570918 | Atlas.Gameplay.Usables.CollidableUsable.OnTriggerEnter
// ============================================================

void Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x157091c | Atlas.Gameplay.Usables.CollidableUsable.OnTriggerStay
// ============================================================

void Atlas_Gameplay_Usables_CollidableUsable__OnTriggerStay(void)

{
  return;
}



// ============================================================
// RVA: 0x1570920 | Atlas.Gameplay.Usables.CollidableUsable.OnTriggerExit
// ============================================================

void Atlas_Gameplay_Usables_CollidableUsable__OnTriggerExit(void)

{
  return;
}



// ============================================================
// RVA: 0x1570924 | Atlas.Gameplay.Usables.CollidableUsable..ctor
// ============================================================

void Atlas_Gameplay_Usables_CollidableUsable___ctor(void)

{
  return;
}



