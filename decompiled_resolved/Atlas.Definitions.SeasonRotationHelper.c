// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.SeasonRotationHelper

// ============================================================
// RVA: 0x14f14b8 | Atlas.Definitions.SeasonRotationHelper.GetCurrentEpisode
// ============================================================

ulong Atlas_Definitions_SeasonRotationHelper__GetCurrentEpisode
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar10;
  uint uVar11;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar12 [16];
  
  auVar12._8_8_ = param_3;
  auVar12._0_8_ = param_1;
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_1;
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c72 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3bdc0);
    func_0x00f78a20(0x3d3bdc8);
    bRam0000000003eb4c72 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = 0;
  iVar4 = /*System.DateTime$$op_LessThan*/ func_0x02a8fb04(param_3,param_4);
  if (iVar4 == 0) {
LAB_014f15ec:
    iVar4 = (int)param_2;
    if (iVar4 == 3) goto code_r0x014f17c0;
    uVar8 = param_4;
    uVar10 = param_6;
    if (iVar4 != 2) {
      if (iVar4 != 1) goto code_r0x014f17c0;
      uVar10 = 1;
      auVar12 = auVar3;
    }
  }
  else {
    if (param_1 != 0) {
      uVar5 = *(uint *)(param_1 + 0x18);
      if (0 < (int)uVar5) {
        uVar11 = 0;
        do {
          if (uVar5 <= uVar11) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar9 = *(long *)(*(long *)(param_1 + 0x10) + (long)(int)uVar11 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_014f16ac;
          uVar10 = *(undefined8 *)(lVar9 + 0x18);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(param_5,0);
          uVar8 = 0;
          iVar4 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar10,uVar6);
          if (iVar4 != 0) {
            if (*(uint *)(param_1 + 0x18) <= uVar11) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            return *(ulong *)(*(long *)(param_1 + 0x10) + (long)(int)uVar11 * 8 + 0x20);
          }
          uVar11 = uVar11 + 1;
          uVar5 = *(uint *)(param_1 + 0x18);
        } while ((int)uVar11 < (int)uVar5);
      }
      goto LAB_014f15ec;
    }
LAB_014f16ac:
    unaff_x30 = &Atlas_Definitions_SeasonRotationHelper__GetEpisodeByWeek;
    auVar12 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    uVar10 = 1;
    unaff_x19 = param_1;
    unaff_x20 = param_4;
    unaff_x21 = param_3;
    unaff_x22 = param_6;
    unaff_x23 = param_2;
    unaff_x24 = param_5;
    unaff_x29 = puVar1;
  }
  uVar6 = auVar12._8_8_;
  lVar9 = auVar12._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  if ((bRam0000000003eb4c74 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d3bdc8);
    bRam0000000003eb4c74 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  param_4 = 0;
  uVar7 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar6,uVar8);
  *(undefined8 *)((long)register0x00000008 + -0x48) = uVar7;
  iVar4 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8((undefined1 *)((long)register0x00000008 + -0x48),0);
  uVar5 = 0;
  if ((int)uVar10 != 0) {
    uVar5 = (iVar4 / 7) / (int)uVar10;
  }
  uVar11 = uVar5;
  if ((int)uVar5 < 4) {
    uVar11 = 0;
  }
  if (lVar9 != 0) {
    uVar5 = uVar5 - (uVar11 & 0x7ffffffc);
    if (*(uint *)(lVar9 + 0x18) <= uVar5) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return *(ulong *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar5 * 8 + 0x20);
  }
  unaff_x30 = &Atlas_Definitions_SeasonRotationHelper__GetEpisodeByMonth;
  auVar12 = func_0x00f78af4();
  unaff_x19 = 0;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  unaff_x20 = uVar10;
  unaff_x21 = uVar8;
  unaff_x22 = uVar6;
code_r0x014f17c0:
  lVar9 = auVar12._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x40) = param_4;
  *(long *)((long)register0x00000008 + -0x38) = auVar12._8_8_;
  if ((bRam0000000003eb4c75 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d3bdc0);
    func_0x00f78a20(0x3d3bdc8);
    bRam0000000003eb4c75 = 1;
  }
  uVar8 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4((undefined1 *)((long)register0x00000008 + -0x38),0);
  uVar10 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4((undefined1 *)((long)register0x00000008 + -0x40),0);
  uVar6 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc((undefined1 *)((long)register0x00000008 + -0x38),0);
  iVar4 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc((undefined1 *)((long)register0x00000008 + -0x40),0);
  if (lVar9 == 0) {
    auVar12 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar6;
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar10;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar8;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) =
         &Atlas_Definitions_SeasonRotationHelper__IsRotationActive;
    if ((bRam0000000003eb4c73 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c73 = 1;
    }
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.DateTime$$op_LessThan*/ func_0x02a8fb04(auVar12._0_8_,auVar12._8_8_,0);
    return (ulong)(uVar5 ^ 1);
  }
  iVar2 = *(int *)(lVar9 + 0x18);
  uVar5 = (((int)uVar6 + iVar2 + (int)uVar8 * 0xc) - iVar4) + (int)uVar10 * -0xc;
  do {
    uVar5 = uVar5 - iVar2;
  } while (iVar2 <= (int)uVar5);
  uVar8 = *(undefined8 *)((long)register0x00000008 + -0x40);
  uVar10 = *(undefined8 *)((long)register0x00000008 + -0x38);
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*System.DateTime$$Compare*/ func_0x02a8dc40(uVar8,uVar10,0);
  uVar11 = 0;
  if (iVar4 < 1) {
    uVar11 = uVar5;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar11) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  return *(ulong *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar11 * 8 + 0x20);
}



// ============================================================
// RVA: 0x14f16b0 | Atlas.Definitions.SeasonRotationHelper.GetEpisodeByWeek
// ============================================================

ulong Atlas_Definitions_SeasonRotationHelper__GetEpisodeByWeek
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4c74 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d3bdc8);
    bRam0000000003eb4c74 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = 0;
  uStack_48 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(param_2,param_3);
  iVar4 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_48,0);
  uVar2 = iVar4 / 7;
  uVar8 = uVar2;
  if ((int)uVar2 < 4) {
    uVar8 = 0;
  }
  if (param_1 != 0) {
    uVar2 = uVar2 - (uVar8 & 0x7ffffffc);
    if (*(uint *)(param_1 + 0x18) <= uVar2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return *(ulong *)(*(long *)(param_1 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
  }
  auVar11 = func_0x00f78af4();
  uStack_88 = auVar11._8_8_;
  lVar9 = auVar11._0_8_;
  uStack_70 = 1;
  puStack_58 = &Atlas_Definitions_SeasonRotationHelper__GetEpisodeByMonth;
  uStack_90 = uVar10;
  uStack_80 = param_2;
  uStack_78 = param_3;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c75 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d3bdc0);
    func_0x00f78a20(0x3d3bdc8);
    bRam0000000003eb4c75 = 1;
  }
  iVar4 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_88,0);
  iVar5 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_90,0);
  iVar6 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_88,0);
  iVar7 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_90,0);
  uVar3 = uStack_88;
  uVar10 = uStack_90;
  if (lVar9 == 0) {
    auVar11 = func_0x00f78af4();
    if ((bRam0000000003eb4c73 & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      bRam0000000003eb4c73 = 1;
    }
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.DateTime$$op_LessThan*/ func_0x02a8fb04(auVar11._0_8_,auVar11._8_8_,0);
    return (ulong)(uVar8 ^ 1);
  }
  iVar1 = *(int *)(lVar9 + 0x18);
  uVar8 = ((iVar6 + iVar1 + iVar4 * 0xc) - iVar7) + iVar5 * -0xc;
  do {
    uVar8 = uVar8 - iVar1;
  } while (iVar1 <= (int)uVar8);
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*System.DateTime$$Compare*/ func_0x02a8dc40(uVar10,uVar3,0);
  uVar2 = 0;
  if (iVar4 < 1) {
    uVar2 = uVar8;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar2) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  return *(ulong *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
}



// ============================================================
// RVA: 0x14f16b8 | Atlas.Definitions.SeasonRotationHelper.GetEpisodeByNumberOfWeeks
// ============================================================

ulong Atlas_Definitions_SeasonRotationHelper__GetEpisodeByNumberOfWeeks
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4c74 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d3bdc8);
    bRam0000000003eb4c74 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = 0;
  uStack_48 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(param_2,param_3);
  iVar4 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_48,0);
  uVar8 = 0;
  if ((int)param_4 != 0) {
    uVar8 = (iVar4 / 7) / (int)param_4;
  }
  uVar1 = uVar8;
  if ((int)uVar8 < 4) {
    uVar1 = 0;
  }
  if (param_1 != 0) {
    uVar8 = uVar8 - (uVar1 & 0x7ffffffc);
    if (*(uint *)(param_1 + 0x18) <= uVar8) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return *(ulong *)(*(long *)(param_1 + 0x10) + (long)(int)uVar8 * 8 + 0x20);
  }
  auVar11 = func_0x00f78af4();
  uStack_88 = auVar11._8_8_;
  lVar9 = auVar11._0_8_;
  puStack_58 = &Atlas_Definitions_SeasonRotationHelper__GetEpisodeByMonth;
  uStack_90 = uVar10;
  uStack_80 = param_2;
  uStack_78 = param_3;
  uStack_70 = param_4;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c75 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d3bdc0);
    func_0x00f78a20(0x3d3bdc8);
    bRam0000000003eb4c75 = 1;
  }
  iVar4 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_88,0);
  iVar5 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_90,0);
  iVar6 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_88,0);
  iVar7 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_90,0);
  uVar3 = uStack_88;
  uVar10 = uStack_90;
  if (lVar9 != 0) {
    iVar2 = *(int *)(lVar9 + 0x18);
    uVar8 = ((iVar6 + iVar2 + iVar4 * 0xc) - iVar7) + iVar5 * -0xc;
    do {
      uVar8 = uVar8 - iVar2;
    } while (iVar2 <= (int)uVar8);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*System.DateTime$$Compare*/ func_0x02a8dc40(uVar10,uVar3,0);
    uVar1 = 0;
    if (iVar4 < 1) {
      uVar1 = uVar8;
    }
    if (*(uint *)(lVar9 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return *(ulong *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
  }
  auVar11 = func_0x00f78af4();
  if ((bRam0000000003eb4c73 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb4c73 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*System.DateTime$$op_LessThan*/ func_0x02a8fb04(auVar11._0_8_,auVar11._8_8_,0);
  return (ulong)(uVar8 ^ 1);
}



// ============================================================
// RVA: 0x14f17c0 | Atlas.Definitions.SeasonRotationHelper.GetEpisodeByMonth
// ============================================================

ulong Atlas_Definitions_SeasonRotationHelper__GetEpisodeByMonth
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  uStack_38 = param_2;
  if ((bRam0000000003eb4c75 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d3bdc0);
    func_0x00f78a20(0x3d3bdc8);
    bRam0000000003eb4c75 = 1;
  }
  iVar5 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_38,0);
  iVar6 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_40,0);
  iVar7 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_38,0);
  iVar8 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_40,0);
  uVar4 = uStack_38;
  uVar3 = uStack_40;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    uVar9 = ((iVar7 + iVar2 + iVar5 * 0xc) - iVar8) + iVar6 * -0xc;
    do {
      uVar9 = uVar9 - iVar2;
    } while (iVar2 <= (int)uVar9);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*System.DateTime$$Compare*/ func_0x02a8dc40(uVar3,uVar4,0);
    uVar1 = 0;
    if (iVar5 < 1) {
      uVar1 = uVar9;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    return *(ulong *)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
  }
  auVar10 = func_0x00f78af4();
  if ((bRam0000000003eb4c73 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb4c73 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = /*System.DateTime$$op_LessThan*/ func_0x02a8fb04(auVar10._0_8_,auVar10._8_8_,0);
  return (ulong)(uVar9 ^ 1);
}



// ============================================================
// RVA: 0x14f18ec | Atlas.Definitions.SeasonRotationHelper.IsRotationActive
// ============================================================

uint Atlas_Definitions_SeasonRotationHelper__IsRotationActive(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  if ((bRam0000000003eb4c73 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb4c73 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*System.DateTime$$op_LessThan*/ func_0x02a8fb04(param_1,param_2,0);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x14f1968 | Atlas.Definitions.SeasonRotationHelper.GetEpisodeDateRange
// ============================================================

undefined1  [16]
Atlas_Definitions_SeasonRotationHelper__GetEpisodeDateRange
          (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_2 == 3) {
Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange:
    if ((bRam0000000003eb4c76 & 1) == 0) {
      func_0x00f78a20(0x3d21060);
      bRam0000000003eb4c76 = 1;
    }
    iVar1 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&stack0xffffffffffffffb8,0);
    iVar1 = iVar1 + 1;
    uVar6 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&stack0xffffffffffffffb8,0);
    if (0xc < iVar1) {
      iVar1 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&stack0xffffffffffffffb8,0);
      uVar6 = (ulong)(iVar1 + 1);
      iVar1 = 1;
    }
    uVar2 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&stack0xffffffffffffffb8,0);
    uVar3 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&stack0xffffffffffffffb8,0);
    auVar9._0_8_ = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
    Atlas_Definitions_Date___ctor(auVar9._0_8_,1,uVar2,uVar3,0);
    uVar2 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
    Atlas_Definitions_Date___ctor(uVar2,1,iVar1,uVar6,0);
    auVar9._8_8_ = uVar2;
    return auVar9;
  }
  if (param_2 != 2) {
    if (param_2 != 1) goto Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange;
    param_5 = 1;
  }
  uStack_58 = param_4;
  if ((bRam0000000003eb4c77 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d21060);
    bRam0000000003eb4c77 = 1;
  }
  uStack_60 = 0;
  uVar2 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_58,0);
  uVar3 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_58,0);
  uVar4 = /*System.DateTime$$get_Day*/ func_0x02a8e298(&uStack_58,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_60,uVar2,uVar3,uVar4,0);
  uVar2 = uStack_60;
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_68 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(param_3,uVar2,0);
  iVar1 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_68,0);
  dVar7 = (double)(param_5 * 7);
  while (param_5 * 7 < iVar1) {
    uVar2 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar7,&uStack_60,0);
    uStack_60 = uVar2;
    if (((*(byte *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_68 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(param_3,uVar2,0);
    iVar1 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_68,0);
  }
  uVar2 = /*System.DateTime$$get_Day*/ func_0x02a8e298(&uStack_60,0);
  uVar3 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_60,0);
  uVar4 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_60,0);
  auVar8._0_8_ = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
  Atlas_Definitions_Date___ctor(auVar8._0_8_,uVar2,uVar3,uVar4,0);
  uStack_60 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar7,&uStack_60,0);
  uVar2 = /*System.DateTime$$get_Day*/ func_0x02a8e298(&uStack_60,0);
  uVar3 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_60,0);
  uVar4 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_60,0);
  uVar5 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
  Atlas_Definitions_Date___ctor(uVar5,uVar2,uVar3,uVar4,0);
  auVar8._8_8_ = uVar5;
  return auVar8;
}



// ============================================================
// RVA: 0x14f19a8 | Atlas.Definitions.SeasonRotationHelper.GetNumberOfWeekDateRange
// ============================================================

undefined1  [16]
Atlas_Definitions_SeasonRotationHelper__GetNumberOfWeekDateRange
          (undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = param_1;
  if ((bRam0000000003eb4c77 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d21060);
    bRam0000000003eb4c77 = 1;
  }
  uStack_60 = 0;
  uVar2 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_58,0);
  uVar3 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_58,0);
  uVar4 = /*System.DateTime$$get_Day*/ func_0x02a8e298(&uStack_58,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_60,uVar2,uVar3,uVar4,0);
  uVar2 = uStack_60;
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_68 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(param_2,uVar2,0);
  iVar1 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_68,0);
  dVar6 = (double)(param_3 * 7);
  while (param_3 * 7 < iVar1) {
    uVar2 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar6,&uStack_60,0);
    uStack_60 = uVar2;
    if (((*(byte *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_68 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(param_2,uVar2,0);
    iVar1 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_68,0);
  }
  uVar2 = /*System.DateTime$$get_Day*/ func_0x02a8e298(&uStack_60,0);
  uVar3 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_60,0);
  uVar4 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_60,0);
  auVar7._0_8_ = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
  Atlas_Definitions_Date___ctor(auVar7._0_8_,uVar2,uVar3,uVar4,0);
  uStack_60 = /*System.DateTime$$AddDays*/ func_0x02a8d5f0(dVar6,&uStack_60,0);
  uVar2 = /*System.DateTime$$get_Day*/ func_0x02a8e298(&uStack_60,0);
  uVar3 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_60,0);
  uVar4 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_60,0);
  uVar5 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
  Atlas_Definitions_Date___ctor(uVar5,uVar2,uVar3,uVar4,0);
  auVar7._8_8_ = uVar5;
  return auVar7;
}



// ============================================================
// RVA: 0x14f1bd0 | Atlas.Definitions.SeasonRotationHelper.GetMonthlyDateRange
// ============================================================

undefined1  [16] Atlas_Definitions_SeasonRotationHelper__GetMonthlyDateRange(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_48;
  
  uStack_48 = param_1;
  if ((bRam0000000003eb4c76 & 1) == 0) {
    func_0x00f78a20(0x3d21060);
    bRam0000000003eb4c76 = 1;
  }
  iVar1 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_48,0);
  iVar1 = iVar1 + 1;
  uVar2 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_48,0);
  if (0xc < iVar1) {
    iVar1 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_48,0);
    uVar2 = (ulong)(iVar1 + 1);
    iVar1 = 1;
  }
  uVar3 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_48,0);
  uVar4 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_48,0);
  auVar5._0_8_ = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
  Atlas_Definitions_Date___ctor(auVar5._0_8_,1,uVar3,uVar4,0);
  uVar3 = func_0x00f78aec(/*Atlas.Definitions.Date_TypeInfo*/ uRam0000000003d21060);
  Atlas_Definitions_Date___ctor(uVar3,1,iVar1,uVar2,0);
  auVar5._8_8_ = uVar3;
  return auVar5;
}



// ============================================================
// RVA: 0x14f1cd4 | Atlas.Definitions.SeasonRotationHelper.GetNumberOfReruns
// ============================================================

int Atlas_Definitions_SeasonRotationHelper__GetNumberOfReruns
              (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((bRam0000000003eb4c78 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb4c78 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*System.DateTime$$Compare*/ func_0x02a8dc40(param_1,param_2,0);
  if ((0 < iVar1) && (1 < param_3 - 1U)) {
    iVar2 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&stack0xffffffffffffffc8,0);
    iVar3 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&stack0xffffffffffffffc0,0);
    iVar4 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&stack0xffffffffffffffc8,0);
    iVar5 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&stack0xffffffffffffffc0,0);
    iVar1 = 0;
    if (param_4 != 0) {
      iVar1 = ((iVar4 + (iVar2 - iVar3) * 0xc) - iVar5) / param_4;
    }
    return (int)(float)iVar1;
  }
  return 0;
}



// ============================================================
// RVA: 0x14f1d94 | Atlas.Definitions.SeasonRotationHelper.GetMonthlyReruns
// ============================================================

int Atlas_Definitions_SeasonRotationHelper__GetMonthlyReruns
              (undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_1;
  iVar2 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_38,0);
  iVar3 = /*System.DateTime$$get_Year*/ func_0x02a8e5c4(&uStack_40,0);
  iVar4 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_38,0);
  iVar5 = /*System.DateTime$$get_Month*/ func_0x02a8e3fc(&uStack_40,0);
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = ((iVar4 + (iVar2 - iVar3) * 0xc) - iVar5) / param_3;
  }
  return (int)(float)iVar1;
}



// ============================================================
// RVA: 0x14f1e1c | Atlas.Definitions.SeasonRotationHelper.GetNumberOfWeeksReruns
// ============================================================

undefined8 Atlas_Definitions_SeasonRotationHelper__GetNumberOfWeeksReruns(void)

{
  return 0;
}



// ============================================================
// RVA: 0x14f1e24 | Atlas.Definitions.SeasonRotationHelper.GetWeeklyReruns
// ============================================================

undefined8 Atlas_Definitions_SeasonRotationHelper__GetWeeklyReruns(void)

{
  return 0;
}



// ============================================================
// RVA: 0x14f1e2c | Atlas.Definitions.SeasonRotationHelper.GetSeasonDefinitions
// ============================================================

long Atlas_Definitions_SeasonRotationHelper__GetSeasonDefinitions(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4c79 & 1) == 0) {
    func_0x00f78a20(0x3d2dc88);
    func_0x00f78a20(0x3d2dc90);
    func_0x00f78a20(0x3d3bdb8);
    func_0x00f78a20(0x3d3bdb0);
    func_0x00f78a20(0x3d3bc38);
    func_0x00f78a20(0x3d3bc40);
    func_0x00f78a20(0x3d1ddb8);
    bRam0000000003eb4c79 = 1;
  }
  uStack_38 = 0;
  lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<SeasonDefinition>_TypeInfo*/ uRam0000000003d1ddb8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar3,uRam0000000003d3bdb0);
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar4 = *(long *)(*(long *)(param_1 + 0x10) + (long)(int)uVar5 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_014f1f8c;
        uStack_38 = *(undefined8 *)(lVar4 + 0x10);
        iVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_38,0);
        if (iVar2 != 0) {
          if (*(uint *)(param_1 + 0x18) <= uVar5) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar4 = *(long *)(*(long *)(param_1 + 0x10) + (long)(int)uVar5 * 8 + 0x20);
          if ((lVar4 == 0) || (lVar3 == 0)) goto LAB_014f1f8c;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar3,*(undefined8 *)(lVar4 + 0x18),uRam0000000003d3bdb8);
        }
        uVar5 = uVar5 + 1;
        uVar1 = *(uint *)(param_1 + 0x18);
      } while ((int)uVar5 < (int)uVar1);
    }
    return lVar3;
  }
LAB_014f1f8c:
  lVar3 = func_0x00f78af4();
  return lVar3;
}



// ============================================================
// RVA: 0x14f1f90 | Atlas.Definitions.SeasonRotationHelper..ctor
// ============================================================

void Atlas_Definitions_SeasonRotationHelper___ctor(void)

{
  return;
}



