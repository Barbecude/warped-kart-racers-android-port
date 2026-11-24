// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.FTUEStageDefinition

// ============================================================
// RVA: 0x1585928 | Atlas.Definitions.FTUEStageDefinition.get_GameContextDefinition
// ============================================================

long Atlas_Definitions_FTUEStageDefinition__get_GameContextDefinition(long param_1)

{
  return param_1 + 0x20;
}



// ============================================================
// RVA: 0x1585930 | Atlas.Definitions.FTUEStageDefinition.get_EventDefinition
// ============================================================

long Atlas_Definitions_FTUEStageDefinition__get_EventDefinition(long param_1)

{
  return param_1 + 0x30;
}



// ============================================================
// RVA: 0x1585938 | Atlas.Definitions.FTUEStageDefinition.get_StagesToUnlockOnCompletion
// ============================================================

undefined8 Atlas_Definitions_FTUEStageDefinition__get_StagesToUnlockOnCompletion(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x1585940 | Atlas.Definitions.FTUEStageDefinition.get_StagesToSkipOnCompletion
// ============================================================

undefined8 Atlas_Definitions_FTUEStageDefinition__get_StagesToSkipOnCompletion(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x1585948 | Atlas.Definitions.FTUEStageDefinition.get_CampaignsToUnlockOnCompletion
// ============================================================

undefined8 Atlas_Definitions_FTUEStageDefinition__get_CampaignsToUnlockOnCompletion(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x1585950 | Atlas.Definitions.FTUEStageDefinition.get_ToolTips
// ============================================================

undefined8 Atlas_Definitions_FTUEStageDefinition__get_ToolTips(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x1585958 | Atlas.Definitions.FTUEStageDefinition.get_EventsToComplete
// ============================================================

undefined8 Atlas_Definitions_FTUEStageDefinition__get_EventsToComplete(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x1585960 | Atlas.Definitions.FTUEStageDefinition.get_GenerateFtueChallengesOnCompletion
// ============================================================

undefined1
Atlas_Definitions_FTUEStageDefinition__get_GenerateFtueChallengesOnCompletion(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1585968 | Atlas.Definitions.FTUEStageDefinition.get_AdditinalNotes
// ============================================================

undefined8 Atlas_Definitions_FTUEStageDefinition__get_AdditinalNotes(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1585970 | Atlas.Definitions.FTUEStageDefinition.GetStageNumber
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02951bc0) */
/* WARNING: Removing unreachable block (ram,0x02951bd4) */

ulong Atlas_Definitions_FTUEStageDefinition__GetStageNumber(long param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ushort *puVar15;
  ushort *puVar16;
  undefined8 uVar17;
  uint uVar18;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 *puVar19;
  long lVar20;
  undefined4 in_w5;
  undefined4 uVar21;
  undefined8 *puVar22;
  uint uVar23;
  long lVar24;
  undefined8 uVar25;
  uint uVar26;
  undefined1 *puVar27;
  int iVar28;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar29;
  undefined8 unaff_x26;
  ushort *puVar30;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auStack_230 [8];
  double dStack_228;
  long alStack_220 [17];
  uint uStack_194;
  undefined8 auStack_190 [2];
  uint uStack_17c;
  long lStack_178;
  uint auStack_16c [3];
  undefined8 auStack_160 [10];
  long alStack_110 [2];
  undefined1 auStack_100 [8];
  ulong uStack_f8;
  undefined8 auStack_f0 [4];
  ulong auStack_d0 [8];
  long alStack_90 [2];
  undefined1 auStack_80 [12];
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb50d6 & 1) == 0) {
    func_0x00f78a20(0x3d1ede0);
    bRam0000000003eb50d6 = 1;
  }
  lVar24 = *(long *)(param_1 + 0x18);
  lVar9 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
  if (lVar9 == 0) {
LAB_01585a0c:
    func_0x00f78af4();
Atlas_Definitions_Definition___ctor:
    uVar10 = func_0x00f78b24();
    lVar9 = func_0x00f78ac0(uVar10,0);
    if ((bRam0000000003eb50a9 & 1) == 0) {
      func_0x00f78a20(0x3d21270,0);
      bRam0000000003eb50a9 = 1;
    }
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(lVar9 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
    if ((bRam0000000003ec0cc7 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ec0cc7 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar9,0);
    if (pcRam0000000003ec0cc8 == (code *)0x0) {
      pcRam0000000003ec0cc8 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*pcRam0000000003ec0cc8)(lVar9);
    return uVar11;
  }
  if (*(int *)(lVar9 + 0x18) == 0) goto Atlas_Definitions_Definition___ctor;
  *(undefined2 *)(lVar9 + 0x20) = 0x5f;
  if ((lVar24 == 0) || (lVar9 = /*System.String$$Split*/ func_0x029cb2ac(lVar24,lVar9,0), lVar9 == 0)) goto LAB_01585a0c;
  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto Atlas_Definitions_Definition___ctor;
  uVar10 = *(undefined8 *)(lVar9 + 0x28);
  uVar17 = /*System.Globalization.NumberFormatInfo$$get_CurrentInfo*/ func_0x02953c58(0,0);
  uVar25 = 7;
  lVar9 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb9044 & 1) == 0) {
    func_0x00f78a20(0x3d28460,7,uVar17,0);
    bRam0000000003eb9044 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
  lVar24 = -(extraout_x1 + 0xfU & 0xfffffffffffffff0);
  puVar27 = auStack_80 + lVar24;
  _bzero(puVar27);
  /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54(&uStack_70,puVar27,0);
  uStack_74 = 0;
  puVar22 = &uStack_70;
  /*System.Number$$StringToNumber*/ func_0x029516fc(uVar10,7,puVar22,uVar17,0);
  iVar8 = /*System.Number$$NumberToInt32*/ func_0x029512a8(&uStack_70,&uStack_74);
  if (iVar8 == 0) {
    uVar25 = func_0x00f78a24(0x3d76020);
    uVar25 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar25,0);
    func_0x00f78a24(0x3d23b00);
    uVar17 = func_0x00f78aec();
    puVar22 = (undefined8 *)0x0;
    /*System.OverflowException$$.ctor*/ func_0x029653d8(uVar17,uVar25);
    uVar12 = func_0x00f78a24(0x3d5afa0);
    uVar11 = func_0x00f78ac0(uVar17,uVar12);
  }
  else {
    uVar11 = (ulong)uStack_74;
    if (*(long *)PTR_03a5d648 == lVar9) {
      return uVar11;
    }
  }
  auVar31 = ___stack_chk_fail(uVar11);
  uVar13 = auVar31._8_8_;
  uVar12 = auVar31._0_8_;
  *(undefined8 *)((long)auStack_d0 + lVar24 + 0x10) = unaff_x24;
  *(undefined8 *)((long)auStack_d0 + lVar24 + 0x18) = 0x3eb9000;
  *(undefined1 **)((long)auStack_d0 + lVar24 + 0x20) = puVar27;
  *(undefined8 *)((long)auStack_d0 + lVar24 + 0x28) = uVar10;
  *(undefined8 *)((long)auStack_d0 + lVar24 + 0x30) = uVar17;
  *(undefined8 *)((long)auStack_d0 + lVar24 + 0x38) = uVar25;
  *(undefined1 **)((long)alStack_90 + lVar24) = &stack0xfffffffffffffff0;
  *(undefined **)((long)alStack_90 + lVar24 + 8) = &System_Number__ParseInt64;
  *(undefined8 *)((long)auStack_d0 + lVar24 + 8) = *(undefined8 *)PTR_03a5d648;
  if ((bRam0000000003eb9045 & 1) == 0) {
    func_0x00f78a20(0x3d28460);
    bRam0000000003eb9045 = 1;
  }
  *(undefined8 *)((long)auStack_f0 + lVar24 + 8) = 0;
  *(undefined8 *)((long)auStack_f0 + lVar24) = 0;
  *(undefined8 *)((long)auStack_f0 + lVar24 + 0x18) = 0;
  *(undefined8 *)((long)auStack_f0 + lVar24 + 0x10) = 0;
  if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
  puVar27 = auStack_100 + (lVar24 - (extraout_x1_00 + 0xfU & 0xfffffffffffffff0));
  _bzero(puVar27);
  /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54((long)auStack_f0 + lVar24,puVar27,0);
  *(undefined8 *)((long)&uStack_f8 + lVar24) = 0;
  lVar9 = (long)auStack_f0 + lVar24;
  lVar20 = 0;
  puVar19 = puVar22;
  /*System.Number$$StringToNumber*/ func_0x029516fc(uVar12,uVar13);
  if ((auVar31._8_4_ >> 9 & 1) == 0) {
    iVar8 = /*System.Number$$NumberToInt64*/ func_0x02951334((long)auStack_f0 + lVar24,(long)&uStack_f8 + lVar24);
    if (iVar8 != 0) {
      uVar11 = *(ulong *)((long)&uStack_f8 + lVar24);
      goto code_r0x02951d70;
    }
code_r0x02951da0:
    uVar10 = func_0x00f78a24(0x3d76028);
    uVar13 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
    func_0x00f78a24(0x3d23b00);
    puVar22 = (undefined8 *)func_0x00f78aec();
    lVar9 = 0;
    /*System.OverflowException$$.ctor*/ func_0x029653d8(puVar22,uVar13);
    uVar10 = func_0x00f78a24(0x3d5afa8);
    uVar11 = func_0x00f78ac0(puVar22,uVar10);
  }
  else {
    *(undefined8 *)((long)auStack_d0 + lVar24) = 0;
    uVar11 = /*System.Number$$HexNumberToUInt64*/ func_0x029511fc((long)auStack_f0 + lVar24,(long)auStack_d0 + lVar24);
    if ((uVar11 & 1) == 0) goto code_r0x02951da0;
    uVar11 = *(ulong *)((long)auStack_d0 + lVar24);
code_r0x02951d70:
    if (*(long *)PTR_03a5d648 == *(long *)((long)auStack_d0 + lVar24 + 8)) {
      return uVar11;
    }
  }
  auVar31 = ___stack_chk_fail(uVar11);
  *(undefined8 *)(puVar27 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar27 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar27 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar27 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar27 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar27 + -0x38) = 0x3eb9000;
  *(undefined1 **)(puVar27 + -0x30) = puVar27;
  *(undefined8 *)(puVar27 + -0x28) = uVar12;
  *(undefined8 **)(puVar27 + -0x20) = puVar22;
  *(undefined8 *)(puVar27 + -0x18) = uVar13;
  *(long *)(puVar27 + -0x10) = (long)alStack_90 + lVar24;
  *(undefined **)(puVar27 + -8) = &System_Number__ParseNumber;
  *(undefined4 *)(puVar27 + -0x7c) = in_w5;
  *(undefined8 **)(puVar27 + -0x78) = puVar19;
  *(undefined4 *)(lVar9 + 0x14) = 0;
  *(undefined1 *)(lVar9 + 0x18) = 0;
  uVar18 = auVar31._8_4_;
  if ((uVar18 >> 8 & 1) == 0) {
    if (lVar20 == 0) {
code_r0x0295237c:
      lVar24 = lVar9;
      auVar31 = func_0x00f78af4();
      lVar29 = auVar31._0_8_;
      *(undefined8 *)(puVar27 + -0xf0) = unaff_d9;
      *(undefined8 *)(puVar27 + -0xe8) = unaff_d8;
      *(long *)(puVar27 + -0xe0) = lVar20;
      *(undefined8 *)(puVar27 + -0xd8) = uVar12;
      *(long *)(puVar27 + -0xd0) = lVar9;
      *(undefined8 *)(puVar27 + -200) = uVar13;
      *(undefined1 **)(puVar27 + -0xc0) = puVar27 + -0x10;
      *(undefined **)(puVar27 + -0xb8) = &System_Number__ParseSingle;
      *(undefined8 *)(puVar27 + -0xf8) = *(undefined8 *)PTR_03a5d648;
      if ((bRam0000000003eb9046 & 1) == 0) {
        func_0x00f78a20(0x3d28460);
        bRam0000000003eb9046 = 1;
      }
      *(undefined8 *)(puVar27 + -0x118) = 0;
      *(undefined8 *)(puVar27 + -0x120) = 0;
      *(undefined8 *)(puVar27 + -0x108) = 0;
      *(undefined8 *)(puVar27 + -0x110) = 0;
      if (lVar29 == 0) {
        func_0x00f78a24(0x3d1fcf0);
        uVar10 = func_0x00f78aec();
        uVar25 = func_0x00f78a24(0x3d7c5a0);
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar10,uVar25,0);
        uVar25 = func_0x00f78a24(0x3d5afb0);
        func_0x00f78ac0(uVar10,uVar25);
        goto code_r0x029525d4;
      }
      if (((*(ushort *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      (*(code *)PTR_03a5d628)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460,(long)**(int **)(/*System.Number.NumberBuffer_TypeInfo*/ lRam0000000003d28460 + 0xb8));
      _bzero(puVar27 + (-0x130 - (extraout_x1_01 + 0xfU & 0xfffffffffffffff0)));
      /*System.Number.NumberBuffer$$.ctor*/ func_0x02a64c54(puVar27 + -0x120,
                      puVar27 + (-0x130 - (extraout_x1_01 + 0xfU & 0xfffffffffffffff0)),0);
      *(undefined8 *)(puVar27 + -0x128) = 0;
      uVar11 = /*System.Number$$TryStringToNumber*/ func_0x029532ec(lVar29,auVar31._8_8_,puVar27 + -0x120,0,lVar24,0);
      if ((uVar11 & 1) == 0) goto code_r0x029524ec;
      uVar10 = /*System.Number.NumberBuffer$$PackForNative*/ func_0x02a64c68(puVar27 + -0x120,0);
      uVar11 = func_0x00f86804(uVar10,puVar27 + -0x128);
      if (((uVar11 & 1) != 0) &&
         (uVar11 = /*System.Single$$IsInfinity*/ func_0x029ba5d4((float)*(double *)(puVar27 + -0x128),0), (int)uVar11 == 0))
      goto code_r0x02952558;
      uVar10 = func_0x00f78a24(0x3d75fe8);
      lVar24 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
      func_0x00f78a24(0x3d23b00);
      lVar29 = func_0x00f78aec();
      /*System.OverflowException$$.ctor*/ func_0x029653d8(lVar29,lVar24,0);
      do {
        uVar10 = func_0x00f78a24(0x3d5afb0);
        func_0x00f78ac0(lVar29,uVar10);
code_r0x029524ec:
        lVar9 = /*System.String$$Trim*/ func_0x029bab94(lVar29,0);
        if ((lVar24 == 0) || (lVar9 == 0)) {
code_r0x029525d4:
          func_0x00f78af4();
code_r0x029525d8:
          ___stack_chk_fail();
        }
        else {
          uVar11 = /*System.String$$Equals*/ func_0x029bab9c(lVar9,*(undefined8 *)(lVar24 + 0x70),0);
          if ((((uVar11 & 1) != 0) ||
              (uVar11 = /*System.String$$Equals*/ func_0x029bab9c(lVar9,*(undefined8 *)(lVar24 + 0x78),0), (uVar11 & 1) != 0))
             || (uVar11 = /*System.String$$Equals*/ func_0x029bab9c(lVar9,*(undefined8 *)(lVar24 + 0x68),0), (uVar11 & 1) != 0
                )) {
code_r0x02952558:
            if (*(long *)PTR_03a5d648 == *(long *)(puVar27 + -0xf8)) {
              return uVar11;
            }
            goto code_r0x029525d8;
          }
        }
        uVar10 = func_0x00f78a24(0x3d6df88);
        lVar24 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
        func_0x00f78a24(0x3d219b8);
        lVar29 = func_0x00f78aec();
        /*System.FormatException$$.ctor*/ func_0x02ad68a8(lVar29,lVar24,0);
      } while( true );
    }
    *(undefined8 *)(puVar27 + -0xa8) = 0;
    *(undefined8 *)(puVar27 + -0xa0) = 0;
    lVar29 = 0;
    lVar24 = 0;
    puVar22 = (undefined8 *)(lVar20 + 0x38);
    puVar19 = (undefined8 *)(lVar20 + 0x40);
  }
  else {
    if (lVar20 == 0) goto code_r0x0295237c;
    lVar24 = *(long *)(lVar20 + 0x58);
    lVar29 = *(long *)(lVar20 + 0x60);
    puVar22 = (undefined8 *)(lVar20 + 0x50);
    puVar19 = (undefined8 *)(lVar20 + 0x48);
    uVar10 = *(undefined8 *)(lVar20 + 0x40);
    *(undefined8 *)(puVar27 + -0xa8) = *(undefined8 *)(lVar20 + 0x38);
    *(undefined8 *)(puVar27 + -0xa0) = uVar10;
  }
  uVar26 = 0;
  bVar6 = false;
  *(uint *)(puVar27 + -0x94) = uVar18 >> 8 & 1;
  uVar10 = *puVar19;
  *(undefined8 *)(puVar27 + -0x90) = *puVar22;
  *(undefined8 *)(puVar27 + -0x88) = uVar10;
  uVar23 = 0;
  if (*(long *)(puVar27 + -0x78) != 0) {
    uVar23 = uVar18 >> 9 & 1;
  }
  uVar21 = 0x32;
  if (*(long *)(puVar27 + -0x78) != 0) {
    uVar21 = 0x7fffffff;
  }
  *(uint *)(puVar27 + -0x6c) = uVar23;
  *(undefined4 *)(puVar27 + -0x68) = uVar21;
  *(long **)(puVar27 + -0xb0) = auVar31._0_8_;
  puVar30 = (ushort *)*auVar31._0_8_;
  do {
    bVar4 = false;
    bVar7 = false;
    bVar5 = false;
    uVar3 = *puVar30;
    if (((auVar31._8_8_ & 1) == 0) ||
       ((uVar3 != 0x20 && (ushort)(uVar3 - 0xe) < 0xfffc) &&
        (uVar3 == 0x20 || (ushort)(uVar3 - 0xe) != 0xfffb))) {
      uVar23 = uVar26 & 1;
      if (((uVar18 >> 2 & 1) != 0) && (uVar23 == 0)) {
code_r0x02951f04:
        lVar14 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(lVar20 + 0x28));
        if (lVar14 == 0) {
          lVar14 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(lVar20 + 0x30));
          if (lVar14 == 0) {
            uVar23 = 0;
            goto code_r0x02951f40;
          }
          uVar26 = uVar26 | 1;
          *(undefined1 *)(lVar9 + 0x18) = 1;
        }
        else {
          uVar26 = uVar26 | 1;
        }
        goto code_r0x02951f94;
      }
code_r0x02951f40:
      if (((uVar18 >> 4 & 1) == 0) || (uVar3 != 0x28 || uVar23 != 0)) goto code_r0x02951f60;
      uVar26 = uVar26 | 3;
      bVar6 = true;
      *(undefined1 *)(lVar9 + 0x18) = 1;
    }
    else if (((uVar26 & 0x21) == 1) && (*(int *)(lVar20 + 0xbc) != 2)) {
      if (((uVar18 >> 2 & 1) != 0) && ((uVar26 & 1) == 0)) goto code_r0x02951f04;
code_r0x02951f60:
      if (((lVar24 == 0) || (lVar14 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,lVar24), lVar14 == 0)) &&
         ((lVar29 == 0 || (lVar14 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,lVar29), lVar14 == 0)))) break;
      lVar29 = 0;
      lVar24 = 0;
      uVar26 = uVar26 | 0x20;
code_r0x02951f94:
      puVar30 = (ushort *)(lVar14 + -2);
    }
    puVar30 = puVar30 + 1;
  } while( true );
  *(undefined4 *)(puVar27 + -100) = 0;
  iVar8 = 0;
  iVar28 = *(int *)(puVar27 + -0x6c);
  do {
    uVar23 = (uint)uVar3;
    if (((uVar23 - 0x30 & 0xffff) < 10) ||
       ((((uVar18 >> 9 & 1) != 0 && (uVar23 - 0x41 < 0x26)) &&
        ((1L << ((ulong)(uVar23 - 0x41) & 0x3f) & 0x3f0000003fU) != 0)))) {
      bVar7 = bVar4;
      if (uVar23 != 0x30) {
        bVar7 = true;
      }
      if (bVar7 || iVar28 != 0) {
        if (iVar8 < *(int *)(puVar27 + -0x68)) {
          if (*(long *)(puVar27 + -0x78) == 0) {
            *(ushort *)(*(long *)(lVar9 + 8) + (long)iVar8 * 2) = uVar3;
            iVar8 = iVar8 + 1;
          }
          else {
            /*System.Text.StringBuilder$$Append*/ func_0x029d3800(*(long *)(puVar27 + -0x78),uVar23,0);
          }
          iVar2 = iVar8;
          if (uVar23 == 0x30 && *(int *)(puVar27 + -0x7c) == 0) {
            iVar2 = *(int *)(puVar27 + -100);
          }
          *(int *)(puVar27 + -100) = iVar2;
        }
        if (!bVar5) {
          *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
        }
        bVar4 = true;
        bVar7 = true;
      }
      else {
        bVar7 = true;
        if (bVar5) {
          *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + -1;
        }
      }
    }
    else {
      if ((((uVar18 >> 5 & 1) == 0) || (bVar5)) ||
         ((lVar14 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(puVar27 + -0x90)), lVar14 == 0 &&
          (((*(uint *)(puVar27 + -0x94) & (uint)((uVar26 & 0x20) == 0)) != 1 ||
           (lVar14 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(puVar27 + -0xa8)), lVar14 == 0)))))) {
        if (((uVar18 >> 6 & 1) == 0) ||
           (((!bVar7 || (bVar5)) ||
            ((lVar14 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(puVar27 + -0x88)), lVar14 == 0 &&
             (((*(uint *)(puVar27 + -0x94) & (uint)((uVar26 & 0x20) == 0)) != 1 ||
              (lVar14 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(puVar27 + -0xa0)), lVar14 == 0))))))
           )) goto code_r0x02952140;
      }
      else {
        bVar5 = true;
      }
      puVar30 = (ushort *)(lVar14 + -2);
      iVar28 = *(int *)(puVar27 + -0x6c);
    }
    puVar30 = puVar30 + 1;
    uVar3 = *puVar30;
  } while( true );
code_r0x02952324:
  if (9 < (uVar23 - 0x30 & 0xffff)) goto code_r0x02952354;
  goto code_r0x02952308;
code_r0x02952250:
  if (!bVar6) {
    puVar22 = *(undefined8 **)(puVar27 + -0xb0);
    if (!bVar4) {
      if ((*(uint *)(puVar27 + -0x7c) & 1) == 0) {
        *(undefined4 *)(lVar9 + 0x14) = 0;
      }
      if (!bVar5) {
        *(undefined1 *)(lVar9 + 0x18) = 0;
      }
    }
    uVar11 = 1;
    goto code_r0x02952280;
  }
  goto code_r0x02952278;
code_r0x02952140:
  iVar8 = *(int *)(puVar27 + -100);
  *(int *)(lVar9 + 0x10) = iVar8;
  if (*(long *)(puVar27 + -0x78) == 0) {
    *(undefined2 *)(*(long *)(lVar9 + 8) + (long)iVar8 * 2) = 0;
  }
  else {
    /*System.Text.StringBuilder$$Append*/ func_0x029d3800(*(long *)(puVar27 + -0x78),0,0);
  }
  if (bVar7) {
    if (((uVar23 | 0x20) == 0x65) && ((uVar18 >> 7 & 1) != 0)) {
      puVar16 = puVar30 + 1;
      uVar3 = *puVar16;
      puVar15 = (ushort *)/*System.Number$$MatchChars*/ func_0x029514c4(puVar16,*(undefined8 *)(lVar20 + 0x28));
      bVar7 = puVar15 == (ushort *)0x0;
      if ((puVar15 == (ushort *)0x0) &&
         (puVar15 = (ushort *)/*System.Number$$MatchChars*/ func_0x029514c4(puVar16,*(undefined8 *)(lVar20 + 0x30)),
         puVar15 == (ushort *)0x0)) {
        bVar7 = false;
      }
      else {
        puVar16 = puVar15;
        uVar3 = *puVar16;
      }
      uVar23 = (uint)uVar3;
      if (0xfff5 < (uVar23 - 0x3a & 0xffff)) {
        iVar8 = 0;
code_r0x02952308:
        iVar8 = iVar8 * 10 + uVar23 + -0x30;
        puVar16 = puVar16 + 1;
        uVar23 = (uint)*puVar16;
        if (iVar8 < 0x3e9) goto code_r0x02952324;
        uVar1 = uVar23 - 0x30 & 0xffff;
        while (uVar1 < 10) {
          puVar16 = puVar16 + 1;
          uVar23 = (uint)*puVar16;
          uVar1 = uVar23 - 0x30;
        }
        iVar8 = 9999;
code_r0x02952354:
        iVar28 = -iVar8;
        if (!bVar7) {
          iVar28 = iVar8;
        }
        *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + iVar28;
        puVar30 = puVar16;
        goto code_r0x029521a0;
      }
      uVar23 = (uint)*puVar30;
    }
code_r0x029521a0:
    do {
      if (((uVar18 >> 1 & 1) == 0) || (uVar23 != 0x20 && (uVar23 - 0xe & 0xffff) < 0xfffb)) {
        if (((uVar18 >> 3 & 1) == 0) || ((uVar26 & 1) != 0)) {
code_r0x029521fc:
          if ((uVar23 == 0x29) && (bVar6)) {
            uVar26 = uVar26 & 0xfffffffd;
            bVar6 = false;
            goto code_r0x02952248;
          }
          if (((lVar24 == 0) || (lVar14 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,lVar24), lVar14 == 0)) &&
             ((lVar29 == 0 || (lVar14 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,lVar29), lVar14 == 0))))
          goto code_r0x02952250;
          lVar29 = 0;
          lVar24 = 0;
        }
        else {
          lVar14 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(lVar20 + 0x28));
          if (lVar14 == 0) {
            lVar14 = /*System.Number$$MatchChars*/ func_0x029514c4(puVar30,*(undefined8 *)(lVar20 + 0x30));
            if (lVar14 == 0) goto code_r0x029521fc;
            uVar26 = uVar26 | 1;
            *(undefined1 *)(lVar9 + 0x18) = 1;
          }
          else {
            uVar26 = uVar26 | 1;
          }
        }
        puVar30 = (ushort *)(lVar14 + -2);
      }
code_r0x02952248:
      uVar23 = (uint)puVar30[1];
      puVar30 = puVar30 + 1;
    } while( true );
  }
code_r0x02952278:
  uVar11 = 0;
  puVar22 = *(undefined8 **)(puVar27 + -0xb0);
code_r0x02952280:
  *puVar22 = puVar30;
  return uVar11;
}



// ============================================================
// RVA: 0x1585a1c | Atlas.Definitions.FTUEStageDefinition..ctor
// ============================================================

void Atlas_Definitions_FTUEStageDefinition___ctor(long param_1)

{
  if ((bRam0000000003eb50a9 & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb50a9 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(param_1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(param_1);
  return;
}



