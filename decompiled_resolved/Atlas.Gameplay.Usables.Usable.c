// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.Usable

// ============================================================
// RVA: 0x152373c | Atlas.Gameplay.Usables.Usable.get_GameContextBase
// ============================================================

long * Atlas_Gameplay_Usables_Usable__get_GameContextBase(long param_1)

{
  long *plVar1;
  
  if ((bRam0000000003eb4e4d & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    bRam0000000003eb4e4d = 1;
  }
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    if (*(byte *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 300) <= *(byte *)(*plVar1 + 300)) {
      if (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 300) * 8 + -8
                   ) == /*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08) {
        return plVar1;
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}



// ============================================================
// RVA: 0x15237bc | Atlas.Gameplay.Usables.Usable.get_Behaviour
// ============================================================

undefined8 Atlas_Gameplay_Usables_Usable__get_Behaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15237c4 | Atlas.Gameplay.Usables.Usable.get_UsableDefinition
// ============================================================

undefined8 Atlas_Gameplay_Usables_Usable__get_UsableDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15237cc | Atlas.Gameplay.Usables.Usable.get_IsUsed
// ============================================================

undefined1 Atlas_Gameplay_Usables_Usable__get_IsUsed(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15237d4 | Atlas.Gameplay.Usables.Usable.get_IsAlive
// ============================================================

bool Atlas_Gameplay_Usables_Usable__get_IsAlive(long param_1)

{
  if (0.0 < *(float *)(param_1 + 0x40)) {
    return *(char *)(param_1 + 0x60) == '\0';
  }
  return false;
}



// ============================================================
// RVA: 0x15237f8 | Atlas.Gameplay.Usables.Usable.get_TimeLeftAlive
// ============================================================

undefined4 Atlas_Gameplay_Usables_Usable__get_TimeLeftAlive(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x1523800 | Atlas.Gameplay.Usables.Usable.get_TimeAlive
// ============================================================

long Atlas_Gameplay_Usables_Usable__get_TimeAlive(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    return param_1;
  }
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x28);
}



// ============================================================
// RVA: 0x1523828 | Atlas.Gameplay.Usables.Usable.get_OwnerKart
// ============================================================

undefined8 Atlas_Gameplay_Usables_Usable__get_OwnerKart(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1523830 | Atlas.Gameplay.Usables.Usable.get_MarkedForDestroy
// ============================================================

undefined1 Atlas_Gameplay_Usables_Usable__get_MarkedForDestroy(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x1523838 | Atlas.Gameplay.Usables.Usable.get_DestroyWithVFX
// ============================================================

undefined1 Atlas_Gameplay_Usables_Usable__get_DestroyWithVFX(long param_1)

{
  return *(undefined1 *)(param_1 + 0x61);
}



// ============================================================
// RVA: 0x1523840 | Atlas.Gameplay.Usables.Usable.Init
// ============================================================

void Atlas_Gameplay_Usables_Usable__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x58) = param_4;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  return;
}



// ============================================================
// RVA: 0x1523854 | Atlas.Gameplay.Usables.Usable.DeInit
// ============================================================

void Atlas_Gameplay_Usables_Usable__DeInit(long param_1)

{
  if (*(char *)(param_1 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.Usable$$OnTearDownParamsInternal*/ func_0x01523890(param_1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// RVA: 0x1523890 | Atlas.Gameplay.Usables.Usable.OnTearDownParamsInternal
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

void Atlas_Gameplay_Usables_Usable__OnTearDownParamsInternal
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
  
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
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
            if (lVar3 == 0) goto LAB_015239b0;
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
LAB_015239b0:
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
// RVA: 0x15239b4 | Atlas.Gameplay.Usables.Usable.OnExitPool
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

void Atlas_Gameplay_Usables_Usable__OnExitPool(long param_1,long param_2,undefined8 param_3)

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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
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
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_90 = param_2;
  uStack_88 = param_3;
  lStack_80 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar9;
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
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
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
      uStack_98 = *(undefined8 *)(lVar6 + 0xc0);
      if (((*(long *)(lVar8 + 0x58) != 0) &&
          (lVar6 = *(long *)(*(long *)(lVar8 + 0x58) + 0x10), lVar6 != 0)) &&
         (lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uStack_98,uRam0000000003d57270), lVar6 != 0)) {
        uStack_a0 = *(undefined8 *)(lVar6 + 0x70);
        if ((*(long *)(lVar8 + 0x90) != 0) &&
           (lVar6 = *(long *)(*(long *)(lVar8 + 0x90) + 0x48), lVar6 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_e0,lVar6,uRam0000000003d3d2e8);
          bVar7 = false;
          while (uVar3 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_e0,uRam0000000003d334f0), uVar2 = uStack_d0,
                (uVar3 & 1) != 0) {
            uStack_108 = uStack_c0;
            uStack_110 = uStack_c8;
            uStack_f8 = uStack_b0;
            uStack_100 = uStack_b8;
            uStack_f0 = uStack_a8;
            uStack_118 = uStack_d0;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_118);
            uVar3 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_98,uVar4,0);
            if ((uVar3 & 1) != 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_108;
              *(undefined8 *)(lVar8 + 0x98) = uStack_110;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_f8;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_100;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_f0;
              bVar7 = true;
            }
            uStack_118 = uVar2;
            uVar2 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_118);
            uVar1 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_a0,uVar2,0);
            if (!bVar7 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_108;
              *(undefined8 *)(lVar8 + 0x98) = uStack_110;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_f8;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_100;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_f0;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_e0,uRam0000000003d334e8);
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
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_e0,uRam0000000003d334e8);
    if (lVar8 == 0) {
      return;
    }
    func_0x00f78ac0(lVar8,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x15239c4 | Atlas.Gameplay.Usables.Usable.OnExitPool
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

void Atlas_Gameplay_Usables_Usable__OnExitPool
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
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
      puVar9 = (undefined *)0x1523aa4;
      lVar8 = param_1;
      goto code_r0x01523ba8;
    }
  }
  puVar9 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar8 = func_0x00f78af4();
code_r0x01523ba8:
  lStack_90 = param_2;
  uStack_88 = param_3;
  lStack_80 = param_1;
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = param_6;
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar9;
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
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
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
      uStack_98 = *(undefined8 *)(lVar6 + 0xc0);
      if (((*(long *)(lVar8 + 0x58) != 0) &&
          (lVar6 = *(long *)(*(long *)(lVar8 + 0x58) + 0x10), lVar6 != 0)) &&
         (lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uStack_98,uRam0000000003d57270), lVar6 != 0)) {
        uStack_a0 = *(undefined8 *)(lVar6 + 0x70);
        if ((*(long *)(lVar8 + 0x90) != 0) &&
           (lVar6 = *(long *)(*(long *)(lVar8 + 0x90) + 0x48), lVar6 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_e0,lVar6,uRam0000000003d3d2e8);
          bVar7 = false;
          while (uVar3 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_e0,uRam0000000003d334f0), uVar2 = uStack_d0,
                (uVar3 & 1) != 0) {
            uStack_108 = uStack_c0;
            uStack_110 = uStack_c8;
            uStack_f8 = uStack_b0;
            uStack_100 = uStack_b8;
            uStack_f0 = uStack_a8;
            uStack_118 = uStack_d0;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_118);
            uVar3 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_98,uVar4,0);
            if ((uVar3 & 1) != 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_108;
              *(undefined8 *)(lVar8 + 0x98) = uStack_110;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_f8;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_100;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_f0;
              bVar7 = true;
            }
            uStack_118 = uVar2;
            uVar2 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_118);
            uVar1 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_a0,uVar2,0);
            if (!bVar7 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar8 + 0xa0) = uStack_108;
              *(undefined8 *)(lVar8 + 0x98) = uStack_110;
              *(undefined8 *)(lVar8 + 0xb0) = uStack_f8;
              *(undefined8 *)(lVar8 + 0xa8) = uStack_100;
              *(undefined8 *)(lVar8 + 0xb8) = uStack_f0;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_e0,uRam0000000003d334e8);
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
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_e0,uRam0000000003d334e8);
    if (lVar8 == 0) {
      return;
    }
    func_0x00f78ac0(lVar8,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x1523ba8 | Atlas.Gameplay.Usables.Usable.SetInHandUsableTransformValues
// ============================================================

void Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
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
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x90);
  if (lVar6 != 0) {
    uVar3 = *(undefined8 *)(lVar6 + 0x28);
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    uVar9 = *(undefined8 *)(lVar6 + 0x38);
    uVar8 = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar6 + 0x40);
    *(undefined8 *)(param_1 + 0xb0) = uVar9;
    *(undefined8 *)(param_1 + 0xa8) = uVar8;
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    if (*(long *)(lVar6 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar6 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
    if (lVar6 != 0) {
      uStack_48 = *(undefined8 *)(lVar6 + 0xc0);
      if (((*(long *)(param_1 + 0x58) != 0) &&
          (lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar6 != 0)) &&
         (lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uStack_48,uRam0000000003d57270), lVar6 != 0)) {
        uStack_50 = *(undefined8 *)(lVar6 + 0x70);
        if ((*(long *)(param_1 + 0x90) != 0) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0x48), lVar6 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_90,lVar6,uRam0000000003d3d2e8);
          bVar7 = false;
          while (uVar2 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_90,uRam0000000003d334f0), uVar4 = uStack_80,
                (uVar2 & 1) != 0) {
            uStack_b8 = uStack_70;
            uStack_c0 = uStack_78;
            uStack_a8 = uStack_60;
            uStack_b0 = uStack_68;
            uStack_a0 = uStack_58;
            uStack_c8 = uStack_80;
            uVar3 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ uRam0000000003d21270,&uStack_c8);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_48,uVar3,0);
            if ((uVar2 & 1) != 0) {
              *(undefined8 *)(param_1 + 0xa0) = uStack_b8;
              *(undefined8 *)(param_1 + 0x98) = uStack_c0;
              *(undefined8 *)(param_1 + 0xb0) = uStack_a8;
              *(undefined8 *)(param_1 + 0xa8) = uStack_b0;
              *(undefined8 *)(param_1 + 0xb8) = uStack_a0;
              bVar7 = true;
            }
            uStack_c8 = uVar4;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ uRam0000000003d21270,&uStack_c8);
            uVar1 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_50,uVar4,0);
            if (!bVar7 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(param_1 + 0xa0) = uStack_b8;
              *(undefined8 *)(param_1 + 0x98) = uStack_c0;
              *(undefined8 *)(param_1 + 0xb0) = uStack_a8;
              *(undefined8 *)(param_1 + 0xa8) = uStack_b0;
              *(undefined8 *)(param_1 + 0xb8) = uStack_a0;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_90,uRam0000000003d334e8);
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
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_90,uRam0000000003d334e8);
    if (lVar6 == 0) {
      return;
    }
    func_0x00f78ac0(lVar6,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x1523e00 | Atlas.Gameplay.Usables.Usable.OnCharacterStartUse
// ============================================================

void Atlas_Gameplay_Usables_Usable__OnCharacterStartUse(void)

{
  return;
}



// ============================================================
// RVA: 0x1523e04 | Atlas.Gameplay.Usables.Usable.OnEnterPool
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */

void Atlas_Gameplay_Usables_Usable__OnEnterPool
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  long lVar11;
  uint uVar10;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  int extraout_w1;
  long lVar15;
  bool bVar16;
  undefined8 uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
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
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(param_5 + 0x48) != 0) &&
     (lVar11 = *(long *)(*(long *)(param_5 + 0x48) + 0x28), lVar11 != 0)) {
    param_2 = *(undefined4 *)(param_5 + 0x68);
    param_3 = *(undefined4 *)(param_5 + 0x6c);
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(param_5 + 100),lVar11,0);
    if ((*(long *)(param_5 + 0x48) != 0) &&
       (lVar11 = *(long *)(*(long *)(param_5 + 0x48) + 0x28), lVar11 != 0)) {
      param_3 = *(undefined4 *)(param_5 + 0x78);
      param_4 = *(undefined4 *)(param_5 + 0x7c);
      param_2 = *(undefined4 *)(param_5 + 0x74);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(param_5 + 0x70),lVar11,0);
      if ((*(long *)(param_5 + 0x48) != 0) &&
         (lVar11 = *(long *)(*(long *)(param_5 + 0x48) + 0x28), lVar11 != 0)) {
        param_2 = *(undefined4 *)(param_5 + 0x84);
        param_3 = *(undefined4 *)(param_5 + 0x88);
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(param_5 + 0x80),lVar11,0);
        *(undefined1 *)(param_5 + 0x19) = 0;
        *(undefined8 *)(param_5 + 0x98) = 0;
        *(undefined8 *)(param_5 + 0x90) = 0;
        *(undefined8 *)(param_5 + 0xa8) = 0;
        *(undefined8 *)(param_5 + 0xa0) = 0;
        *(undefined8 *)(param_5 + 0xb8) = 0;
        *(undefined8 *)(param_5 + 0xb0) = 0;
        if (*(long *)(param_5 + 0x48) != 0) {
          lVar11 = *(long *)(*(long *)(param_5 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_7 = 0;
          iVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0);
          if (iVar9 != 0) {
            if (lVar11 == 0) goto LAB_015239b0;
            *(undefined2 *)(lVar11 + 0x46) = 0;
            *(undefined4 *)(lVar11 + 0x40) = 0;
            *(undefined1 *)(lVar11 + 0x44) = 0;
          }
          if (*(long *)(param_5 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(param_5 + 0x48) + 0x40) = 0;
            *(undefined8 *)(param_5 + 0x48) = 0;
            *(undefined1 *)(param_5 + 0x18) = 0;
            *(undefined8 *)(param_5 + 0x28) = 0;
            *(undefined8 *)(param_5 + 0x30) = 0;
            *(undefined4 *)(param_5 + 0x40) = 0xbf800000;
            *(undefined2 *)(param_5 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
LAB_015239b0:
  auVar22 = func_0x00f78af4();
  lVar15 = auVar22._8_8_;
  lVar11 = auVar22._0_8_;
  pcStack_28 = Atlas_Gameplay_Usables_Usable__OnExitPool;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar11 + 0x19) = 1;
  *(undefined8 *)(lVar11 + 0x28) = 0;
  *(long *)(lVar11 + 0x30) = lVar15;
  *(long *)(lVar11 + 0x48) = param_7;
  *(undefined8 *)(lVar11 + 0x50) = 0;
  if ((*(long *)(lVar11 + 0x58) != 0) && (lVar15 != 0)) {
    lVar18 = *(long *)(*(long *)(lVar11 + 0x58) + 0x10);
    uVar17 = *(undefined8 *)(lVar15 + 0x40);
    auVar6._8_8_ = uVar17;
    auVar6._0_8_ = lVar11;
    auVar5._8_8_ = uVar17;
    auVar5._0_8_ = lVar11;
    auVar4._8_8_ = uVar17;
    auVar4._0_8_ = lVar11;
    auVar3._8_8_ = uVar17;
    auVar3._0_8_ = lVar11;
    auVar2._8_8_ = uVar17;
    auVar2._0_8_ = lVar11;
    auVar1._8_8_ = uVar17;
    auVar1._0_8_ = lVar11;
    auVar22._8_8_ = uVar17;
    auVar22._0_8_ = lVar11;
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
    if (lVar18 != 0) {
      uVar12 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar18,uVar12,uRam0000000003d572a0);
      *(undefined8 *)(lVar11 + 0x90) = uVar12;
      Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues(lVar11);
      auVar22 = auVar1;
      if ((param_7 != 0) && (auVar22 = auVar2, *(long *)(param_7 + 0x28) != 0)) {
        uVar19 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(*(long *)(param_7 + 0x28),0);
        *(undefined4 *)(lVar11 + 100) = uVar19;
        *(undefined4 *)(lVar11 + 0x68) = param_2;
        *(undefined4 *)(lVar11 + 0x6c) = param_3;
        auVar22 = auVar3;
        if (*(long *)(param_7 + 0x28) != 0) {
          uVar19 = /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(*(long *)(param_7 + 0x28),0);
          *(undefined4 *)(lVar11 + 0x70) = uVar19;
          *(undefined4 *)(lVar11 + 0x74) = param_2;
          *(undefined4 *)(lVar11 + 0x78) = param_3;
          *(undefined4 *)(lVar11 + 0x7c) = param_4;
          auVar22 = auVar4;
          if (*(long *)(param_7 + 0x28) != 0) {
            uVar19 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(*(long *)(param_7 + 0x28),0);
            *(undefined4 *)(lVar11 + 0x80) = uVar19;
            *(undefined4 *)(lVar11 + 0x84) = param_2;
            *(undefined4 *)(lVar11 + 0x88) = param_3;
            *(undefined1 *)(lVar11 + 0x18) = 0;
            lVar15 = *(long *)(lVar11 + 0x48);
            auVar22 = auVar5;
            if (lVar15 != 0) {
              *(undefined4 *)(lVar15 + 0x40) = 0;
              *(undefined4 *)(lVar15 + 0x44) = 0;
              if (*(long *)(lVar15 + 0x48) != 0) {
                /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x014864a4(*(long *)(lVar15 + 0x48),lVar15,*(undefined8 *)(lVar15 + 0x20),0,0,0
                                ,0);
                lVar15 = *(long *)(lVar11 + 0x48);
                auVar22 = auVar6;
                if (lVar15 == 0) goto LAB_01523ba4;
              }
              uVar12 = *(undefined8 *)(lVar15 + 0x30);
              auVar22._0_8_ = uVar12;
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar13 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
              if ((uVar13 & 1) != 0) {
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_01523ba4:
  lVar11 = func_0x00f78af4();
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  pcStack_78 = Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lStack_a8 = param_7;
  ppuStack_80 = &puStack_30;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    uStack_b0 = auVar22._8_8_;
    uStack_a0 = auVar22._0_8_;
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    auVar22._8_8_ = uStack_b0;
    auVar22._0_8_ = uStack_a0;
    bRam0000000003eb4e51 = 1;
  }
  uStack_b0 = auVar22._8_8_;
  uStack_a0 = auVar22._0_8_;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (*(long *)(lVar11 + 0x28) == 0) {
    return;
  }
  lVar15 = *(long *)(lVar11 + 0x90);
  if (lVar15 != 0) {
    uVar12 = *(undefined8 *)(lVar15 + 0x28);
    uVar17 = *(undefined8 *)(lVar15 + 0x20);
    uVar21 = *(undefined8 *)(lVar15 + 0x38);
    uVar20 = *(undefined8 *)(lVar15 + 0x30);
    *(undefined8 *)(lVar11 + 0xb8) = *(undefined8 *)(lVar15 + 0x40);
    *(undefined8 *)(lVar11 + 0xb0) = uVar21;
    *(undefined8 *)(lVar11 + 0xa8) = uVar20;
    *(undefined8 *)(lVar11 + 0xa0) = uVar12;
    *(undefined8 *)(lVar11 + 0x98) = uVar17;
    if (*(long *)(lVar15 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar15 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar15 = *(long *)(*(long *)(lVar11 + 0x28) + 0x28);
    if (lVar15 != 0) {
      uStack_b8 = *(undefined8 *)(lVar15 + 0xc0);
      if ((*(long *)(lVar11 + 0x58) != 0) &&
         (lVar15 = *(long *)(*(long *)(lVar11 + 0x58) + 0x10), lVar15 != 0)) {
        lVar15 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar15,uStack_b8,uRam0000000003d57270);
        auVar8._8_8_ = uStack_b0;
        auVar8._0_8_ = uStack_a0;
        auVar7._8_8_ = uStack_b0;
        auVar7._0_8_ = uStack_a0;
        auVar22._8_8_ = uStack_b0;
        auVar22._0_8_ = uStack_a0;
        if (lVar15 != 0) {
          uStack_c0 = *(undefined8 *)(lVar15 + 0x70);
          auVar22 = auVar7;
          if ((*(long *)(lVar11 + 0x90) != 0) &&
             (lVar15 = *(long *)(*(long *)(lVar11 + 0x90) + 0x48), auVar22 = auVar8, lVar15 != 0)) {
            /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_100,lVar15,uRam0000000003d3d2e8);
            bVar16 = false;
            while (uVar13 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_100,uRam0000000003d334f0), uVar17 = uStack_f0,
                  (uVar13 & 1) != 0) {
              uStack_128 = uStack_e0;
              uStack_130 = uStack_e8;
              uStack_118 = uStack_d0;
              uStack_120 = uStack_d8;
              uStack_110 = uStack_c8;
              uStack_138 = uStack_f0;
              uVar12 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
              uVar13 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_b8,uVar12,0);
              if ((uVar13 & 1) != 0) {
                *(undefined8 *)(lVar11 + 0xa0) = uStack_128;
                *(undefined8 *)(lVar11 + 0x98) = uStack_130;
                *(undefined8 *)(lVar11 + 0xb0) = uStack_118;
                *(undefined8 *)(lVar11 + 0xa8) = uStack_120;
                *(undefined8 *)(lVar11 + 0xb8) = uStack_110;
                bVar16 = true;
              }
              uStack_138 = uVar17;
              uVar17 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
              uVar10 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_c0,uVar17,0);
              if (!bVar16 && ((uVar10 ^ 0xffffffff) & 1) == 0) {
                *(undefined8 *)(lVar11 + 0xa0) = uStack_128;
                *(undefined8 *)(lVar11 + 0x98) = uStack_130;
                *(undefined8 *)(lVar11 + 0xb0) = uStack_118;
                *(undefined8 *)(lVar11 + 0xa8) = uStack_120;
                *(undefined8 *)(lVar11 + 0xb8) = uStack_110;
              }
            }
            /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_100,uRam0000000003d334e8);
            return;
          }
        }
      }
    }
  }
  uStack_b0 = auVar22._8_8_;
  uStack_a0 = auVar22._0_8_;
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar14 = (long *)___cxa_begin_catch();
    lVar11 = *plVar14;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_100,uRam0000000003d334e8);
    if (lVar11 == 0) {
      return;
    }
    func_0x00f78ac0(lVar11,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x1523e08 | Atlas.Gameplay.Usables.Usable.Destroy
// ============================================================

void Atlas_Gameplay_Usables_Usable__Destroy(long param_1)

{
  if (*(char *)(param_1 + 0x60) != '\0') {
    return;
  }
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  return;
}



// ============================================================
// RVA: 0x1523e20 | Atlas.Gameplay.Usables.Usable.MarkForDestroy
// ============================================================

void Atlas_Gameplay_Usables_Usable__MarkForDestroy(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined1 *)(param_1 + 0x61) = param_2;
  return;
}



// ============================================================
// RVA: 0x1523e30 | Atlas.Gameplay.Usables.Usable.DestroyImmediately
// ============================================================

/* WARNING: Possible PIC construction at 0x01523e78: Changing call to branch */

void Atlas_Gameplay_Usables_Usable__DestroyImmediately(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  long lStack_88;
  
  lVar8 = param_1[9];
  if (lVar8 == 0) {
    auVar18 = func_0x00f78af4();
    plVar9 = auVar18._8_8_;
    lVar8 = *(long *)(auVar18._0_8_ + 0x68);
    if (lVar8 == 0) {
      return;
    }
  }
  else {
    if (*(long *)(lVar8 + 0x48) != 0) {
      /*Atlas.Lighting.LightWorld$$UnRegisterMember*/ func_0x014866f8(*(long *)(lVar8 + 0x48),lVar8,0);
    }
    if ((param_1[2] == 0) || (lVar8 = *(long *)(param_1[2] + 0x68), lVar8 == 0)) {
      (**(code **)(*param_1 + 0x2b8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x2c0));
      *(undefined2 *)(param_1 + 0xc) = 0;
      return;
    }
    plVar9 = (long *)param_1[6];
  }
  lStack_88 = lVar8;
  lVar10 = *(long *)(lVar8 + 0x68);
  if (lVar10 == 0) {
    plVar17 = &lStack_88;
    lVar16 = 1;
  }
  else {
    lVar16 = *(long *)(lVar10 + 0x18);
    if (lVar16 == 0) {
      return;
    }
    plVar17 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar17[lVar10];
    pcVar15 = *(code **)(lVar11 + 0x10);
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11);
    }
    iVar4 = func_0x00f78a4c(lVar11);
    bVar3 = *(char *)(lVar11 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x0156d298:
          (*pcVar15)(plVar9,1,lVar11);
        }
        else {
          if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x0156d18c;
          iVar4 = func_0x00f78a44(lVar11);
          iVar5 = func_0x00f78ec0(lVar11);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar11 + 0x48);
            if (iVar5 == 0) {
              lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar11 + 0x138))(plVar1,plVar9,1,*(undefined8 *)(lVar11 + 0x140));
              goto code_r0x0156d2a8;
            }
            lVar11 = func_0x00f78a48(lVar11);
            lVar12 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar7 = (undefined8 *)
                           (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x0156d440;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x0156d440:
            pcVar15 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar12 = *plVar1;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0156d418;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar1);
code_r0x0156d418:
              uVar6 = *(undefined8 *)(lVar12 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar11);
            pcVar15 = (code *)*puVar7;
          }
          (*pcVar15)(plVar1,plVar9,1,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar11 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x0156d298;
        iVar4 = func_0x00f78a44(lVar11);
        iVar5 = func_0x00f78ec0(lVar11);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar11 + 0x48);
          if (iVar5 == 0) {
            lVar11 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar11 + 0x138))(plVar9,1,*(undefined8 *)(lVar11 + 0x140));
            goto code_r0x0156d2a8;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar12 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x0156d3d4;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar9,lVar11,(ulong)uVar2);
code_r0x0156d3d4:
          pcVar15 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0156d3ac;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar9);
code_r0x0156d3ac:
            uVar6 = *(undefined8 *)(lVar12 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar11);
          pcVar15 = (code *)*puVar7;
        }
        (*pcVar15)(plVar9,1,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x0156d298;
code_r0x0156d18c:
      (*pcVar15)(plVar1,plVar9,1,lVar11);
    }
code_r0x0156d2a8:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar16) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1523ec0 | Atlas.Gameplay.Usables.Usable.SetRemoteUseParams
// ============================================================

void Atlas_Gameplay_Usables_Usable__SetRemoteUseParams(void)

{
  return;
}



// ============================================================
// RVA: 0x1523ec4 | Atlas.Gameplay.Usables.Usable.Use
// ============================================================

/* WARNING: Possible PIC construction at 0x01523e78: Changing call to branch */

void Atlas_Gameplay_Usables_Usable__Use(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  long lStack_e8;
  
  lVar10 = *(long *)(param_1 + 0x30);
  if (lVar10 != 0) {
    if (*(char *)(lVar10 + 0x48) != '\0') {
      *(undefined1 *)(param_1 + 0x18) = 1;
LAB_01523f60:
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar10 + 0x24);
      return;
    }
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar10 != 0)) {
      /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                      *(undefined4 *)(param_1 + 0x6c),lVar10,0);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar10 != 0)) {
        /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                        *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar10,0);
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar10 != 0)) {
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                          *(undefined4 *)(param_1 + 0x88),lVar10,0);
          lVar10 = *(long *)(param_1 + 0x30);
          *(undefined1 *)(param_1 + 0x18) = 1;
          if (lVar10 != 0) goto LAB_01523f60;
        }
      }
    }
  }
  auVar21 = func_0x00f78af4();
  plVar18 = auVar21._8_8_;
  plVar8 = auVar21._0_8_;
  if ((bRam0000000003eb4e4f & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4e4f = 1;
  }
  if ((char)plVar8[3] == '\0') {
    return;
  }
  if (plVar18 != (long *)0x0) {
    fVar20 = *(float *)(plVar8 + 8);
    lVar10 = *plVar18;
    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x01524018;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar18,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x01524018:
    fVar19 = (float)(*(code *)*puVar7)(plVar18,puVar7[1]);
    *(float *)(plVar8 + 8) = fVar20 - fVar19;
    if (0.0 < fVar20 - fVar19) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x01524068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
    return;
  }
  plVar8 = (long *)func_0x00f78af4();
  if ((char)plVar8[0xc] == '\0') {
    return;
  }
  uVar2 = *(undefined1 *)((long)plVar8 + 0x61);
  lVar10 = plVar8[9];
  if (lVar10 == 0) {
    auVar21 = func_0x00f78af4();
    plVar8 = auVar21._8_8_;
    lVar10 = *(long *)(auVar21._0_8_ + 0x68);
    if (lVar10 == 0) {
      return;
    }
  }
  else {
    if (*(long *)(lVar10 + 0x48) != 0) {
      /*Atlas.Lighting.LightWorld$$UnRegisterMember*/ func_0x014866f8(*(long *)(lVar10 + 0x48),lVar10,0);
    }
    if ((plVar8[2] == 0) || (lVar10 = *(long *)(plVar8[2] + 0x68), lVar10 == 0)) {
      (**(code **)(*plVar8 + 0x2b8))(plVar8,uVar2,*(undefined8 *)(*plVar8 + 0x2c0));
      *(undefined2 *)(plVar8 + 0xc) = 0;
      return;
    }
    plVar8 = (long *)plVar8[6];
  }
  lStack_e8 = lVar10;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_e8;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar5 = func_0x00f78a4c(lVar12);
    bVar4 = *(char *)(lVar12 + 0x4a) == '\x02';
    if (iVar5 == 0) {
      if (bVar4) {
        if (plVar1 == (long *)0x0) {
code_r0x0156d298:
          (*pcVar16)(plVar8,1,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x0156d18c;
          iVar5 = func_0x00f78a44(lVar12);
          iVar6 = func_0x00f78ec0(lVar12);
          if (iVar5 == 0) {
            uVar3 = *(ushort *)(lVar12 + 0x48);
            if (iVar6 == 0) {
              lVar12 = *plVar1 + (ulong)uVar3 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar8,1,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x0156d2a8;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138);
                  goto code_r0x0156d440;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar3);
code_r0x0156d440:
            pcVar16 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar6 == 0) {
              uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0156d418;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x0156d418:
              uVar9 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar9,lVar12);
            pcVar16 = (code *)*puVar7;
          }
          (*pcVar16)(plVar1,plVar8,1,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0))
        goto code_r0x0156d298;
        iVar5 = func_0x00f78a44(lVar12);
        iVar6 = func_0x00f78ec0(lVar12);
        if (iVar5 == 0) {
          uVar3 = *(ushort *)(lVar12 + 0x48);
          if (iVar6 == 0) {
            lVar12 = *plVar8 + (ulong)uVar3 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,1,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x0156d2a8;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138)
                ;
                goto code_r0x0156d3d4;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar3);
code_r0x0156d3d4:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar6 == 0) {
            uVar9 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0156d3ac;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x0156d3ac:
            uVar9 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar9,lVar12);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar8,1,puVar7);
      }
    }
    else {
      if (bVar4) goto code_r0x0156d298;
code_r0x0156d18c:
      (*pcVar16)(plVar1,plVar8,1,lVar12);
    }
code_r0x0156d2a8:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1523f78 | Atlas.Gameplay.Usables.Usable.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x01523e78: Changing call to branch */

void Atlas_Gameplay_Usables_Usable__Update(long *param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  long lStack_c8;
  
  if ((bRam0000000003eb4e4f & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4e4f = 1;
  }
  if ((char)param_1[3] == '\0') {
    return;
  }
  if (param_2 != (long *)0x0) {
    fVar20 = *(float *)(param_1 + 8);
    lVar10 = *param_2;
    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01524018;
        }
        piVar15 = piVar15 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_01524018:
    fVar19 = (float)(*(code *)*puVar7)(param_2,puVar7[1]);
    *(float *)(param_1 + 8) = fVar20 - fVar19;
    if (0.0 < fVar20 - fVar19) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x01524068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
    return;
  }
  plVar8 = (long *)func_0x00f78af4();
  if ((char)plVar8[0xc] == '\0') {
    return;
  }
  uVar2 = *(undefined1 *)((long)plVar8 + 0x61);
  lVar10 = plVar8[9];
  if (lVar10 == 0) {
    auVar21 = func_0x00f78af4();
    plVar8 = auVar21._8_8_;
    lVar10 = *(long *)(auVar21._0_8_ + 0x68);
    if (lVar10 == 0) {
      return;
    }
  }
  else {
    if (*(long *)(lVar10 + 0x48) != 0) {
      /*Atlas.Lighting.LightWorld$$UnRegisterMember*/ func_0x014866f8(*(long *)(lVar10 + 0x48),lVar10,0);
    }
    if ((plVar8[2] == 0) || (lVar10 = *(long *)(plVar8[2] + 0x68), lVar10 == 0)) {
      (**(code **)(*plVar8 + 0x2b8))(plVar8,uVar2,*(undefined8 *)(*plVar8 + 0x2c0));
      *(undefined2 *)(plVar8 + 0xc) = 0;
      return;
    }
    plVar8 = (long *)plVar8[6];
  }
  lStack_c8 = lVar10;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_c8;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar5 = func_0x00f78a4c(lVar12);
    bVar4 = *(char *)(lVar12 + 0x4a) == '\x02';
    if (iVar5 == 0) {
      if (bVar4) {
        if (plVar1 == (long *)0x0) {
code_r0x0156d298:
          (*pcVar16)(plVar8,1,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x0156d18c;
          iVar5 = func_0x00f78a44(lVar12);
          iVar6 = func_0x00f78ec0(lVar12);
          if (iVar5 == 0) {
            uVar3 = *(ushort *)(lVar12 + 0x48);
            if (iVar6 == 0) {
              lVar12 = *plVar1 + (ulong)uVar3 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar8,1,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x0156d2a8;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138);
                  goto code_r0x0156d440;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar3);
code_r0x0156d440:
            pcVar16 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar6 == 0) {
              uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0156d418;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x0156d418:
              uVar9 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar9,lVar12);
            pcVar16 = (code *)*puVar7;
          }
          (*pcVar16)(plVar1,plVar8,1,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0))
        goto code_r0x0156d298;
        iVar5 = func_0x00f78a44(lVar12);
        iVar6 = func_0x00f78ec0(lVar12);
        if (iVar5 == 0) {
          uVar3 = *(ushort *)(lVar12 + 0x48);
          if (iVar6 == 0) {
            lVar12 = *plVar8 + (ulong)uVar3 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,1,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x0156d2a8;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138)
                ;
                goto code_r0x0156d3d4;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar3);
code_r0x0156d3d4:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar6 == 0) {
            uVar9 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0156d3ac;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x0156d3ac:
            uVar9 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar9,lVar12);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar8,1,puVar7);
      }
    }
    else {
      if (bVar4) goto code_r0x0156d298;
code_r0x0156d18c:
      (*pcVar16)(plVar1,plVar8,1,lVar12);
    }
code_r0x0156d2a8:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1524070 | Atlas.Gameplay.Usables.Usable.LateUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x01523e78: Changing call to branch */

void Atlas_Gameplay_Usables_Usable__LateUpdate(long *param_1)

{
  long *plVar1;
  undefined1 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  long lStack_88;
  
  if ((char)param_1[0xc] == '\0') {
    return;
  }
  uVar2 = *(undefined1 *)((long)param_1 + 0x61);
  lVar9 = param_1[9];
  if (lVar9 == 0) {
    auVar19 = func_0x00f78af4();
    plVar10 = auVar19._8_8_;
    lVar9 = *(long *)(auVar19._0_8_ + 0x68);
    if (lVar9 == 0) {
      return;
    }
  }
  else {
    if (*(long *)(lVar9 + 0x48) != 0) {
      /*Atlas.Lighting.LightWorld$$UnRegisterMember*/ func_0x014866f8(*(long *)(lVar9 + 0x48),lVar9,0);
    }
    if ((param_1[2] == 0) || (lVar9 = *(long *)(param_1[2] + 0x68), lVar9 == 0)) {
      (**(code **)(*param_1 + 0x2b8))(param_1,uVar2,*(undefined8 *)(*param_1 + 0x2c0));
      *(undefined2 *)(param_1 + 0xc) = 0;
      return;
    }
    plVar10 = (long *)param_1[6];
  }
  lStack_88 = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    plVar18 = &lStack_88;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar18[lVar11];
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar5 = func_0x00f78a4c(lVar12);
    bVar4 = *(char *)(lVar12 + 0x4a) == '\x02';
    if (iVar5 == 0) {
      if (bVar4) {
        if (plVar1 == (long *)0x0) {
code_r0x0156d298:
          (*pcVar16)(plVar10,1,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar9 + 0x18) == 0)) goto code_r0x0156d18c;
          iVar5 = func_0x00f78a44(lVar12);
          iVar6 = func_0x00f78ec0(lVar12);
          if (iVar5 == 0) {
            uVar3 = *(ushort *)(lVar12 + 0x48);
            if (iVar6 == 0) {
              lVar12 = *plVar1 + (ulong)uVar3 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar10,1,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x0156d2a8;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar8 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138);
                  goto code_r0x0156d440;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar3);
code_r0x0156d440:
            pcVar16 = (code *)*puVar8;
            puVar8 = (undefined8 *)puVar8[1];
          }
          else {
            if (iVar6 == 0) {
              uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0156d418;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x0156d418:
              uVar7 = *(undefined8 *)(lVar13 + 8);
            }
            puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar12);
            pcVar16 = (code *)*puVar8;
          }
          (*pcVar16)(plVar1,plVar10,1,puVar8);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x0156d298;
        iVar5 = func_0x00f78a44(lVar12);
        iVar6 = func_0x00f78ec0(lVar12);
        if (iVar5 == 0) {
          uVar3 = *(ushort *)(lVar12 + 0x48);
          if (iVar6 == 0) {
            lVar12 = *plVar10 + (ulong)uVar3 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar10,1,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x0156d2a8;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar8 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138)
                ;
                goto code_r0x0156d3d4;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar10,lVar12,(ulong)uVar3);
code_r0x0156d3d4:
          pcVar16 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          if (iVar6 == 0) {
            uVar7 = *(undefined8 *)(*plVar10 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar10;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0156d3ac;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar10);
code_r0x0156d3ac:
            uVar7 = *(undefined8 *)(lVar13 + 8);
          }
          puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar12);
          pcVar16 = (code *)*puVar8;
        }
        (*pcVar16)(plVar10,1,puVar8);
      }
    }
    else {
      if (bVar4) goto code_r0x0156d298;
code_r0x0156d18c:
      (*pcVar16)(plVar1,plVar10,1,lVar12);
    }
code_r0x0156d2a8:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1524084 | Atlas.Gameplay.Usables.Usable.FixedUpdate
// ============================================================

void Atlas_Gameplay_Usables_Usable__FixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x1524088 | Atlas.Gameplay.Usables.Usable.PreFixedUpdate
// ============================================================

void Atlas_Gameplay_Usables_Usable__PreFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x152408c | Atlas.Gameplay.Usables.Usable.PostFixedUpdate
// ============================================================

void Atlas_Gameplay_Usables_Usable__PostFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x1524090 | Atlas.Gameplay.Usables.Usable.EarlyUpdate
// ============================================================

void Atlas_Gameplay_Usables_Usable__EarlyUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x1524094 | Atlas.Gameplay.Usables.Usable.AttachToTransform
// ============================================================

/* WARNING: Possible PIC construction at 0x01524120: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01524124) */
/* WARNING: Removing unreachable block (ram,0x0152412c) */
/* WARNING: Removing unreachable block (ram,0x01524134) */
/* WARNING: Removing unreachable block (ram,0x01524140) */

undefined1  [16]
Atlas_Gameplay_Usables_Usable__AttachToTransform
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
          undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long extraout_x1;
  uint uVar3;
  float fVar4;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined8 extraout_var_01;
  undefined1 auVar5 [16];
  undefined4 extraout_var_00;
  undefined8 extraout_var_02;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(long *)(param_5 + 0x48) != 0) {
    lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_5 + 0x48),0);
    if ((*(long *)(param_5 + 0x48) != 0) &&
       (lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_5 + 0x48),0), lVar2 != 0)) {
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar2,param_6,0,0);
      /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      if (lVar1 != 0) {
        /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar1,0);
        /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
        /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar1,0);
        /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
        if (pcRam0000000003ec19a8 == (code *)0x0) {
          pcRam0000000003ec19a8 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        (*pcRam0000000003ec19a8)(lVar1,&stack0xffffffffffffffa0);
        auVar6._4_4_ = extraout_var_00;
        auVar6._0_4_ = extraout_s0_00;
        auVar6._8_8_ = extraout_var_02;
        return auVar6;
      }
    }
  }
  uVar3 = func_0x00f78af4();
  if (extraout_x1 != 0) {
    if (*(long *)(extraout_x1 + 0x10) == 0) {
      func_0x00f78af4();
      auVar5._4_4_ = extraout_var;
      auVar5._0_4_ = extraout_s0;
      auVar5._8_8_ = extraout_var_01;
      return auVar5;
    }
    lVar1 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(extraout_x1 + 0x10),0);
    fVar7 = *(float *)(lVar1 + 0x13c);
    fVar8 = *(float *)(lVar1 + 0x140);
    fVar9 = *(float *)(lVar1 + 0x144);
    fVar4 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(uVar3,param_2,param_3,0);
    uVar3 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar7 + (fVar4 - fVar7) * param_4,fVar8 + (param_2 - fVar8) * param_4,
                            fVar9 + (param_3 - fVar9) * param_4,0);
  }
  return ZEXT416(uVar3);
}



// ============================================================
// RVA: 0x152418c | Atlas.Gameplay.Usables.Usable.InterpolateDespawnVFXPosition
// ============================================================

undefined1  [16]
Atlas_Gameplay_Usables_Usable__InterpolateDespawnVFXPosition
          (uint param_1,float param_2,float param_3,float param_4,undefined8 param_5,long param_6)

{
  long lVar1;
  float fVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_6 != 0) {
    if (*(long *)(param_6 + 0x10) == 0) {
      func_0x00f78af4();
      auVar3._4_4_ = extraout_var;
      auVar3._0_4_ = extraout_s0;
      auVar3._8_8_ = extraout_var_00;
      return auVar3;
    }
    lVar1 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_6 + 0x10),0);
    fVar4 = *(float *)(lVar1 + 0x13c);
    fVar5 = *(float *)(lVar1 + 0x140);
    fVar6 = *(float *)(lVar1 + 0x144);
    fVar2 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(param_1,param_2,param_3,0);
    param_1 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar4 + (fVar2 - fVar4) * param_4,fVar5 + (param_2 - fVar5) * param_4,
                              fVar6 + (param_3 - fVar6) * param_4,0);
  }
  return ZEXT416(param_1);
}



// ============================================================
// RVA: 0x1524248 | Atlas.Gameplay.Usables.Usable..ctor
// ============================================================

void Atlas_Gameplay_Usables_Usable___ctor(void)

{
  return;
}



