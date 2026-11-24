// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.DebugOverlayScreen

// ============================================================
// RVA: 0x1579abc | Atlas.UI.Screens.DebugOverlayScreen.OnBeforeEnter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1579e04 | Atlas.UI.Screens.DebugOverlayScreen.OnAfterExit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1579fc8 | Atlas.UI.Screens.DebugOverlayScreen.OnUpdate
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x157b290 | Atlas.UI.Screens.DebugOverlayScreen.ExtractInt
// ============================================================

ushort * Atlas_UI_Screens_DebugOverlayScreen__ExtractInt
                   (undefined8 param_1,long param_2,ushort *param_3)

{
  uint uVar1;
  ushort uVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  ushort *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ushort *puVar15;
  ushort *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong unaff_x24;
  ulong uVar20;
  ulong uVar21;
  undefined8 ******ppppppuVar22;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR_03a5d648;
  uVar19 = 0x3d65de0;
  if ((bRam0000000003eb508c & 1) == 0) {
    func_0x00f78a20(0x3d56970);
    func_0x00f78a20(0x3d56978);
    func_0x00f78a20(0x3d65de0);
    bRam0000000003eb508c = 1;
  }
  /*Unity.Collections.FixedString32Bytes$$op_Implicit*/ func_0x02fd6d20(&uStack_90,/*STR('\n')*/ uRam0000000003d65de0,0);
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  puVar10 = (ushort *)(ulong)*param_3;
  uVar17 = uRam0000000003d56970;
  iVar4 = /*Unity.Collections.FixedStringMethods$$IndexOf<FixedString512Bytes>*/ func_0x01859850(param_2,param_3 + 1);
  uVar12 = (uint)uVar17;
  if (iVar4 < 0) {
LAB_0157b3a4:
    puVar16 = (ushort *)0x0;
    lVar5 = 0x3eb5000;
  }
  else {
    uVar2 = *param_3;
    param_3 = (ushort *)(ulong)(iVar4 + (uint)uVar2);
    puVar10 = (ushort *)(uStack_70 & 0xffff);
    puVar6 = param_3;
    lVar5 = /*Unity.Collections.FixedStringMethods$$IndexOf<FixedString512Bytes>*/ func_0x018598c0(param_2,(ulong)&uStack_70 | 2,puVar10,param_3,0x7fffffff,
                            uRam0000000003d56978);
    uVar12 = (uint)puVar6;
    if ((int)lVar5 <= (int)(iVar4 + (uint)uVar2)) goto LAB_0157b3a4;
    puVar16 = (ushort *)0x0;
    uVar19 = 10;
    do {
      puVar10 = (ushort *)0x0;
      iVar4 = /*Unity.Collections.FixedString512Bytes$$get_Item*/ func_0x02fd7a58(param_2,param_3);
      uVar12 = (uint)puVar6;
      puVar16 = (ushort *)(ulong)((iVar4 + (int)puVar16 * 10) - 0x30);
      uVar1 = (int)param_3 + 1;
      param_3 = (ushort *)(ulong)uVar1;
    } while ((int)uVar1 < (int)lVar5);
  }
  if (*(long *)PTR_03a5d648 == lStack_48) {
    return puVar16;
  }
  auVar24 = ___stack_chk_fail();
  lVar9 = auVar24._8_8_;
  puVar15 = auVar24._0_8_;
  puVar3 = (ulong *)&stack0xffffffffffffff10;
  puStack_98 = &Atlas_UI_Screens_DebugOverlayScreen__OnLogMessageRecieved;
  ppppppuVar22 = &pppppuStack_a0;
  puVar6 = puVar15;
  puVar11 = puVar10;
  pppppuStack_a0 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb508d & 1) == 0) {
    func_0x00f78a20(0x3d1ede0);
    func_0x00f78a20(0x3d21128);
    puVar6 = (ushort *)func_0x00f78a20(0x3d65ee8);
    bRam0000000003eb508d = 1;
  }
  if (((char)puVar15[0xb6] == '\0' || 4 < uVar12) || (1 << (ulong)(uVar12 & 0x1f) & 0x13U) == 0) {
    return puVar6;
  }
  uVar17 = 0x3d21128;
  if (((*(ushort *)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar18 = **(long **)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0xb8);
  uVar20 = unaff_x24;
  if (lVar18 == 0) {
code_r0x0157b680:
    func_0x00f78af4();
code_r0x0157b684:
    puVar16 = puVar10;
    uVar19 = func_0x00f78b24();
    puVar23 = &Atlas_UI_Screens_DebugOverlayScreen__AddErrorMessage;
    auVar24 = func_0x00f78ac0(uVar19,0);
  }
  else {
    if (0 < (int)*(ulong *)(lVar18 + 0x18)) {
      uVar20 = 0;
      uVar21 = 0;
      uVar13 = *(ulong *)(lVar18 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar21) goto code_r0x0157b684;
        if (lVar9 == 0) goto code_r0x0157b680;
        puVar11 = (ushort *)((long)&MACH_HEADER.cputype + 1);
        puVar6 = (ushort *)/*System.String$$EndsWith*/ func_0x029cd7e4(lVar9,*(undefined8 *)(lVar18 + 0x20 + uVar21 * 8),5,0);
        uVar12 = (uint)puVar6 | (uint)uVar20;
        uVar20 = (ulong)uVar12;
        uVar21 = uVar21 + 1;
        uVar13 = (ulong)*(uint *)(lVar18 + 0x18);
      } while ((long)uVar21 < (long)(int)*(uint *)(lVar18 + 0x18));
      if ((uVar12 & 1) != 0) {
        return puVar6;
      }
    }
    if (*(long *)(puVar15 + 0xb8) == 0) goto code_r0x0157b680;
    /*System.Text.StringBuilder$$Clear*/ func_0x029d2384(*(long *)(puVar15 + 0xb8),0);
    lVar7 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
    if (lVar7 == 0) goto code_r0x0157b680;
    if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x0157b684;
    *(undefined2 *)(lVar7 + 0x20) = 10;
    if (puVar10 == (ushort *)0x0) goto code_r0x0157b680;
    puVar11 = (ushort *)0x0;
    puVar6 = (ushort *)/*System.String$$Split*/ func_0x029cb2ac(puVar10);
    if (puVar6 == (ushort *)0x0) goto code_r0x0157b680;
    puVar10 = puVar6;
    if (0 < (int)*(ulong *)(puVar6 + 0xc)) {
      uVar20 = 0;
      uVar21 = 0;
      uVar13 = *(ulong *)(puVar6 + 0xc) & 0xffffffff;
      do {
        if (uVar13 <= uVar21) goto code_r0x0157b684;
        lVar18 = *(long *)(puVar6 + uVar21 * 4 + 0x10);
        if (((*(ushort *)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = *(long *)(*(long *)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0xb8) + 8);
        if (lVar7 == 0) goto code_r0x0157b680;
        if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
          uVar13 = 0;
          uVar14 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          do {
            if (uVar14 <= uVar13) goto code_r0x0157b684;
            if (lVar18 == 0) goto code_r0x0157b680;
            puVar11 = (ushort *)((long)&MACH_HEADER.cputype + 1);
            uVar14 = /*System.String$$StartsWith*/ func_0x029ce958(lVar18,*(undefined8 *)(lVar7 + 0x20 + uVar13 * 8),5,0);
            if ((uVar14 & 1) != 0) goto code_r0x0157b62c;
            uVar13 = uVar13 + 1;
            uVar14 = (ulong)*(uint *)(lVar7 + 0x18);
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar7 + 0x18));
        }
        if (*(long *)(puVar15 + 0xb8) == 0) goto code_r0x0157b680;
        puVar11 = (ushort *)0x0;
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(*(long *)(puVar15 + 0xb8),/*STR('   ')*/ uRam0000000003d65ee8);
        if (*(long *)(puVar15 + 0xb8) == 0) goto code_r0x0157b680;
        puVar11 = (ushort *)0x0;
        /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*(long *)(puVar15 + 0xb8),lVar18);
        uVar20 = (ulong)((int)uVar20 + 1);
code_r0x0157b62c:
        if (3 < (int)uVar20) break;
        uVar21 = uVar21 + 1;
        uVar13 = (ulong)*(uint *)(puVar6 + 0xc);
      } while ((long)uVar21 < (long)(int)*(uint *)(puVar6 + 0xc));
    }
    plVar8 = *(long **)(puVar15 + 0xb8);
    if (plVar8 == (long *)0x0) goto code_r0x0157b680;
    puVar11 = (ushort *)(**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    puVar3 = &uStack_90;
    lVar9 = param_2;
    puVar15 = param_3;
    lVar18 = lVar5;
    uVar17 = uVar19;
    uVar20 = unaff_x24;
    ppppppuVar22 = (undefined8 ******)pppppuStack_a0;
    puVar23 = puStack_98;
  }
  lVar7 = auVar24._8_8_;
  lVar5 = auVar24._0_8_;
  *(ulong *)((long)puVar3 + -0x40) = uVar20;
  *(undefined8 *)((long)puVar3 + -0x38) = uVar17;
  *(long *)((long)puVar3 + -0x30) = lVar18;
  *(ushort **)((long)puVar3 + -0x28) = puVar16;
  *(ushort **)((long)puVar3 + -0x20) = puVar15;
  *(long *)((long)puVar3 + -0x18) = lVar9;
  *(undefined8 *******)((long)puVar3 + -0x10) = ppppppuVar22;
  *(undefined **)((long)puVar3 + -8) = puVar23;
  if ((bRam0000000003eb508e & 1) == 0) {
    func_0x00f78a20(0x3d41010);
    bRam0000000003eb508e = 1;
  }
  uVar12 = (*(int *)(lVar5 + 0x168) + 1) % 5;
  *(uint *)(lVar5 + 0x168) = uVar12;
  plVar8 = *(long **)(lVar5 + 0x158);
  if (plVar8 != (long *)0x0) {
    if ((lVar7 != 0) && (lVar9 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)
       ) goto code_r0x0157b888;
    if (*(uint *)(plVar8 + 3) <= uVar12) goto code_r0x0157b87c;
    plVar8[(long)(int)uVar12 + 4] = lVar7;
    plVar8 = *(long **)(lVar5 + 0x160);
    if (plVar8 != (long *)0x0) {
      uVar12 = *(uint *)(lVar5 + 0x168);
      if ((puVar11 != (ushort *)0x0) &&
         (lVar9 = func_0x00f78adc(puVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
      goto code_r0x0157b888;
      if (*(uint *)(plVar8 + 3) <= uVar12) goto code_r0x0157b87c;
      plVar8[(long)(int)uVar12 + 4] = (long)puVar11;
      if (*(long *)(lVar5 + 0x170) != 0) {
        /*System.Text.StringBuilder$$Clear*/ func_0x029d2384(*(long *)(lVar5 + 0x170),0);
        iVar4 = 5;
        do {
          uVar12 = iVar4 + *(int *)(lVar5 + 0x168);
          uVar1 = uVar12 - 5;
          if (-1 < (int)uVar1) {
            uVar12 = uVar1;
          }
          lVar9 = *(long *)(lVar5 + 0x158);
          if (lVar9 == 0) goto code_r0x0157b878;
          if (*(uint *)(lVar9 + 0x18) <= uVar12) goto code_r0x0157b87c;
          lVar18 = *(long *)(lVar5 + 0x160);
          if (lVar18 == 0) goto code_r0x0157b878;
          if (*(uint *)(lVar18 + 0x18) <= uVar12) goto code_r0x0157b87c;
          uVar17 = *(undefined8 *)(lVar9 + (long)(int)uVar12 * 8 + 0x20);
          uVar19 = *(undefined8 *)(lVar18 + (long)(int)uVar12 * 8 + 0x20);
          uVar20 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar17,0);
          if ((uVar20 & 1) == 0) {
            if (*(long *)(lVar5 + 0x170) == 0) goto code_r0x0157b878;
            /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*(long *)(lVar5 + 0x170),uVar17,0);
            if (*(long *)(lVar5 + 0x170) == 0) goto code_r0x0157b878;
            /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*(long *)(lVar5 + 0x170),uVar19,0);
          }
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41010);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x78) != 0)) {
          /*TMPro.TMP_Text$$SetText*/ func_0x031b4400(*(long *)(lVar9 + 0x78),*(undefined8 *)(lVar5 + 0x170),0);
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41010);
          if ((lVar5 != 0) &&
             ((*(long *)(lVar5 + 0x70) != 0 &&
              (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar5 + 0x70),0), lVar5 != 0)))) {
            *(undefined8 *)((long)puVar3 + -0x30) = *(undefined8 *)((long)puVar3 + -0x30);
            *(undefined8 *)((long)puVar3 + -0x28) = *(undefined8 *)((long)puVar3 + -0x28);
            *(undefined8 *)((long)puVar3 + -0x20) = *(undefined8 *)((long)puVar3 + -0x20);
            *(undefined8 *)((long)puVar3 + -0x18) = *(undefined8 *)((long)puVar3 + -0x18);
            *(undefined8 *)((long)puVar3 + -0x10) = *(undefined8 *)((long)puVar3 + -0x10);
            *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
            if (pcRam0000000003ebf4c0 == (code *)0x0) {
              pcRam0000000003ebf4c0 =
                   (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
            }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar10 = (ushort *)(*pcRam0000000003ebf4c0)(lVar5,1);
            return puVar10;
          }
        }
      }
    }
  }
code_r0x0157b878:
  func_0x00f78af4();
code_r0x0157b87c:
  uVar19 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar19,0);
code_r0x0157b888:
    uVar19 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x157b3e0 | Atlas.UI.Screens.DebugOverlayScreen.OnLogMessageRecieved
// ============================================================

void Atlas_UI_Screens_DebugOverlayScreen__OnLogMessageRecieved
               (long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long unaff_x21;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  int iVar12;
  undefined8 unaff_x23;
  ulong unaff_x24;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 *unaff_x29;
  undefined1 *puVar16;
  undefined *unaff_x30;
  undefined1 auVar17 [16];
  
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = param_1;
  puVar2 = &stack0xffffffffffffffa0;
  puVar16 = &stack0xfffffffffffffff0;
  lVar6 = param_3;
  if ((bRam0000000003eb508d & 1) == 0) {
    func_0x00f78a20(0x3d1ede0);
    func_0x00f78a20(0x3d21128);
    func_0x00f78a20(0x3d65ee8);
    bRam0000000003eb508d = 1;
  }
  if ((*(char *)(param_1 + 0x16c) == '\0' || 4 < param_4) ||
      (1 << (ulong)(param_4 & 0x1f) & 0x13U) == 0) {
    return;
  }
  uVar9 = 0x3d21128;
  if (((*(ushort *)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar11 = **(long **)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0xb8);
  uVar13 = unaff_x24;
  if (lVar11 == 0) {
LAB_0157b680:
    func_0x00f78af4();
LAB_0157b684:
    unaff_x21 = param_3;
    uVar10 = func_0x00f78b24();
    unaff_x30 = &Atlas_UI_Screens_DebugOverlayScreen__AddErrorMessage;
    auVar17 = func_0x00f78ac0(uVar10,0);
  }
  else {
    if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
      uVar13 = 0;
      uVar14 = 0;
      uVar7 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar14) goto LAB_0157b684;
        if (param_2 == 0) goto LAB_0157b680;
        lVar6 = 5;
        uVar3 = /*System.String$$EndsWith*/ func_0x029cd7e4(param_2,*(undefined8 *)(lVar11 + 0x20 + uVar14 * 8),5,0);
        uVar3 = uVar3 | (uint)uVar13;
        uVar13 = (ulong)uVar3;
        uVar14 = uVar14 + 1;
        uVar7 = (ulong)*(uint *)(lVar11 + 0x18);
      } while ((long)uVar14 < (long)(int)*(uint *)(lVar11 + 0x18));
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    if (*(long *)(param_1 + 0x170) == 0) goto LAB_0157b680;
    /*System.Text.StringBuilder$$Clear*/ func_0x029d2384(*(long *)(param_1 + 0x170),0);
    lVar4 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
    if (lVar4 == 0) goto LAB_0157b680;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0157b684;
    *(undefined2 *)(lVar4 + 0x20) = 10;
    if (param_3 == 0) goto LAB_0157b680;
    lVar6 = 0;
    lVar4 = /*System.String$$Split*/ func_0x029cb2ac(param_3);
    if (lVar4 == 0) goto LAB_0157b680;
    param_3 = lVar4;
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar13 = 0;
      uVar14 = 0;
      uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar14) goto LAB_0157b684;
        lVar11 = *(long *)(lVar4 + uVar14 * 8 + 0x20);
        if (((*(ushort *)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar15 = *(long *)(*(long *)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0xb8) + 8);
        if (lVar15 == 0) goto LAB_0157b680;
        if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
          uVar7 = 0;
          uVar8 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
          do {
            if (uVar8 <= uVar7) goto LAB_0157b684;
            if (lVar11 == 0) goto LAB_0157b680;
            lVar6 = 5;
            uVar8 = /*System.String$$StartsWith*/ func_0x029ce958(lVar11,*(undefined8 *)(lVar15 + 0x20 + uVar7 * 8),5,0);
            if ((uVar8 & 1) != 0) goto code_r0x0157b62c;
            uVar7 = uVar7 + 1;
            uVar8 = (ulong)*(uint *)(lVar15 + 0x18);
          } while ((long)uVar7 < (long)(int)*(uint *)(lVar15 + 0x18));
        }
        if (*(long *)(param_1 + 0x170) == 0) goto LAB_0157b680;
        lVar6 = 0;
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(*(long *)(param_1 + 0x170),/*STR('   ')*/ uRam0000000003d65ee8);
        if (*(long *)(param_1 + 0x170) == 0) goto LAB_0157b680;
        lVar6 = 0;
        /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*(long *)(param_1 + 0x170),lVar11);
        uVar13 = (ulong)((int)uVar13 + 1);
code_r0x0157b62c:
        if (3 < (int)uVar13) break;
        uVar14 = uVar14 + 1;
        uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
      } while ((long)uVar14 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    plVar5 = *(long **)(param_1 + 0x170);
    if (plVar5 == (long *)0x0) goto LAB_0157b680;
    lVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    puVar2 = (undefined1 *)register0x00000008;
    param_2 = unaff_x19;
    param_1 = unaff_x20;
    lVar11 = unaff_x22;
    uVar9 = unaff_x23;
    uVar13 = unaff_x24;
    puVar16 = unaff_x29;
  }
  lVar15 = auVar17._8_8_;
  lVar4 = auVar17._0_8_;
  *(ulong *)(puVar2 + -0x40) = uVar13;
  *(undefined8 *)(puVar2 + -0x38) = uVar9;
  *(long *)(puVar2 + -0x30) = lVar11;
  *(long *)(puVar2 + -0x28) = unaff_x21;
  *(long *)(puVar2 + -0x20) = param_1;
  *(long *)(puVar2 + -0x18) = param_2;
  *(undefined1 **)(puVar2 + -0x10) = puVar16;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if ((bRam0000000003eb508e & 1) == 0) {
    func_0x00f78a20(0x3d41010);
    bRam0000000003eb508e = 1;
  }
  uVar3 = (*(int *)(lVar4 + 0x168) + 1) % 5;
  *(uint *)(lVar4 + 0x168) = uVar3;
  plVar5 = *(long **)(lVar4 + 0x158);
  if (plVar5 != (long *)0x0) {
    if ((lVar15 != 0) &&
       (lVar11 = func_0x00f78adc(lVar15,*(undefined8 *)(*plVar5 + 0x40)), lVar11 == 0))
    goto code_r0x0157b888;
    if (*(uint *)(plVar5 + 3) <= uVar3) goto code_r0x0157b87c;
    plVar5[(long)(int)uVar3 + 4] = lVar15;
    plVar5 = *(long **)(lVar4 + 0x160);
    if (plVar5 != (long *)0x0) {
      uVar3 = *(uint *)(lVar4 + 0x168);
      if ((lVar6 != 0) &&
         (lVar11 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar11 == 0))
      goto code_r0x0157b888;
      if (*(uint *)(plVar5 + 3) <= uVar3) goto code_r0x0157b87c;
      plVar5[(long)(int)uVar3 + 4] = lVar6;
      if (*(long *)(lVar4 + 0x170) != 0) {
        /*System.Text.StringBuilder$$Clear*/ func_0x029d2384(*(long *)(lVar4 + 0x170),0);
        iVar12 = 5;
        do {
          uVar3 = iVar12 + *(int *)(lVar4 + 0x168);
          uVar1 = uVar3 - 5;
          if (-1 < (int)uVar1) {
            uVar3 = uVar1;
          }
          lVar6 = *(long *)(lVar4 + 0x158);
          if (lVar6 == 0) goto code_r0x0157b878;
          if (*(uint *)(lVar6 + 0x18) <= uVar3) goto code_r0x0157b87c;
          lVar11 = *(long *)(lVar4 + 0x160);
          if (lVar11 == 0) goto code_r0x0157b878;
          if (*(uint *)(lVar11 + 0x18) <= uVar3) goto code_r0x0157b87c;
          uVar10 = *(undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
          uVar9 = *(undefined8 *)(lVar11 + (long)(int)uVar3 * 8 + 0x20);
          uVar13 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar10,0);
          if ((uVar13 & 1) == 0) {
            if (*(long *)(lVar4 + 0x170) == 0) goto code_r0x0157b878;
            /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*(long *)(lVar4 + 0x170),uVar10,0);
            if (*(long *)(lVar4 + 0x170) == 0) goto code_r0x0157b878;
            /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*(long *)(lVar4 + 0x170),uVar9,0);
          }
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41010);
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x78) != 0)) {
          /*TMPro.TMP_Text$$SetText*/ func_0x031b4400(*(long *)(lVar6 + 0x78),*(undefined8 *)(lVar4 + 0x170),0);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41010);
          if ((lVar6 != 0) &&
             ((*(long *)(lVar6 + 0x70) != 0 &&
              (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x70),0), lVar6 != 0)))) {
            *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
            *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
            *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
            *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
            *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
            *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
            if (pcRam0000000003ebf4c0 == (code *)0x0) {
              pcRam0000000003ebf4c0 =
                   (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
            }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003ebf4c0)(lVar6,1);
            return;
          }
        }
      }
    }
  }
code_r0x0157b878:
  func_0x00f78af4();
code_r0x0157b87c:
  uVar9 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar9,0);
code_r0x0157b888:
    uVar9 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x157b690 | Atlas.UI.Screens.DebugOverlayScreen.AddErrorMessage
// ============================================================

void Atlas_UI_Screens_DebugOverlayScreen__AddErrorMessage(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  
  if ((bRam0000000003eb508e & 1) == 0) {
    func_0x00f78a20(0x3d41010);
    bRam0000000003eb508e = 1;
  }
  uVar2 = (*(int *)(param_1 + 0x168) + 1) % 5;
  *(uint *)(param_1 + 0x168) = uVar2;
  plVar9 = *(long **)(param_1 + 0x158);
  if (plVar9 != (long *)0x0) {
    if ((param_2 != 0) &&
       (lVar3 = func_0x00f78adc(param_2,*(undefined8 *)(*plVar9 + 0x40)), lVar3 == 0))
    goto LAB_0157b888;
    if (*(uint *)(plVar9 + 3) <= uVar2) goto LAB_0157b87c;
    plVar9[(long)(int)uVar2 + 4] = param_2;
    plVar9 = *(long **)(param_1 + 0x160);
    if (plVar9 != (long *)0x0) {
      uVar2 = *(uint *)(param_1 + 0x168);
      if ((param_3 != 0) &&
         (lVar3 = func_0x00f78adc(param_3,*(undefined8 *)(*plVar9 + 0x40)), lVar3 == 0))
      goto LAB_0157b888;
      if (*(uint *)(plVar9 + 3) <= uVar2) goto LAB_0157b87c;
      plVar9[(long)(int)uVar2 + 4] = param_3;
      if (*(long *)(param_1 + 0x170) != 0) {
        /*System.Text.StringBuilder$$Clear*/ func_0x029d2384(*(long *)(param_1 + 0x170),0);
        iVar8 = 5;
        do {
          uVar2 = iVar8 + *(int *)(param_1 + 0x168);
          uVar1 = uVar2 - 5;
          if (-1 < (int)uVar1) {
            uVar2 = uVar1;
          }
          lVar3 = *(long *)(param_1 + 0x158);
          if (lVar3 == 0) goto LAB_0157b878;
          if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_0157b87c;
          lVar5 = *(long *)(param_1 + 0x160);
          if (lVar5 == 0) goto LAB_0157b878;
          if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_0157b87c;
          uVar7 = *(undefined8 *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
          uVar6 = *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
          uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar7,0);
          if ((uVar4 & 1) == 0) {
            if (*(long *)(param_1 + 0x170) == 0) goto LAB_0157b878;
            /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*(long *)(param_1 + 0x170),uVar7,0);
            if (*(long *)(param_1 + 0x170) == 0) goto LAB_0157b878;
            /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*(long *)(param_1 + 0x170),uVar6,0);
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41010);
        if ((lVar3 != 0) && (*(long *)(lVar3 + 0x78) != 0)) {
          /*TMPro.TMP_Text$$SetText*/ func_0x031b4400(*(long *)(lVar3 + 0x78),*(undefined8 *)(param_1 + 0x170),0);
          lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41010);
          if ((lVar3 != 0) &&
             ((*(long *)(lVar3 + 0x70) != 0 &&
              (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar3 + 0x70),0), lVar3 != 0)))) {
            if (pcRam0000000003ebf4c0 == (code *)0x0) {
              pcRam0000000003ebf4c0 =
                   (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
            }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003ebf4c0)(lVar3,1);
            return;
          }
        }
      }
    }
  }
LAB_0157b878:
  func_0x00f78af4();
LAB_0157b87c:
  uVar6 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar6,0);
LAB_0157b888:
    uVar6 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x157b890 | Atlas.UI.Screens.DebugOverlayScreen.CaptureErrorMessages
// ============================================================

void Atlas_UI_Screens_DebugOverlayScreen__CaptureErrorMessages(long param_1,byte param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  *(byte *)(param_1 + 0x16c) = param_2;
  if ((param_2 & 1) != 0) {
    return;
  }
  if ((bRam0000000003eb508f & 1) == 0) {
    func_0x00f78a20(0x3d41010);
    bRam0000000003eb508f = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41010);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x70) != 0)) &&
     (lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar1 + 0x70),0), lVar1 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar1,0);
    return;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb5090 & 1) == 0) {
    func_0x00f78a20(0x3d2c6e0);
    bRam0000000003eb5090 = 1;
  }
  *(undefined1 *)(lVar1 + 0x16c) = 1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c6e0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar6 = func_0x00f78af4();
  puVar3 = auVar6._8_8_;
  puVar2 = auVar6._0_8_;
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  puVar2[2] = puVar3[2];
  puVar2[1] = uVar5;
  *puVar2 = uVar4;
  return;
}



// ============================================================
// RVA: 0x157b8a0 | Atlas.UI.Screens.DebugOverlayScreen.HideErrorMessage
// ============================================================

void Atlas_UI_Screens_DebugOverlayScreen__HideErrorMessage(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb508f & 1) == 0) {
    func_0x00f78a20(0x3d41010);
    bRam0000000003eb508f = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41010);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x70) != 0)) &&
     (lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar1 + 0x70),0), lVar1 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar1,0);
    return;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb5090 & 1) == 0) {
    func_0x00f78a20(0x3d2c6e0);
    bRam0000000003eb5090 = 1;
  }
  *(undefined1 *)(lVar1 + 0x16c) = 1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c6e0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar6 = func_0x00f78af4();
  puVar3 = auVar6._8_8_;
  puVar2 = auVar6._0_8_;
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  puVar2[2] = puVar3[2];
  puVar2[1] = uVar5;
  *puVar2 = uVar4;
  return;
}



// ============================================================
// RVA: 0x157b91c | Atlas.UI.Screens.DebugOverlayScreen..ctor
// ============================================================

void Atlas_UI_Screens_DebugOverlayScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb5090 & 1) == 0) {
    func_0x00f78a20(0x3d2c6e0);
    bRam0000000003eb5090 = 1;
  }
  *(undefined1 *)(param_1 + 0x16c) = 1;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c6e0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._8_8_;
  puVar1 = auVar5._0_8_;
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  return;
}



// ============================================================
// RVA: 0x157b978 | Atlas.UI.Screens.DebugOverlayScreen..cctor
// ============================================================

long Atlas_UI_Screens_DebugOverlayScreen___cctor(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((bRam0000000003eb5091 & 1) == 0) {
    func_0x00f78a20(0x3d21128);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d71330);
    func_0x00f78a20(0x3d759f0);
    func_0x00f78a20(0x3d69368);
    func_0x00f78a20(0x3d759f8);
    bRam0000000003eb5091 = 1;
  }
  plVar1 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,1);
  if (plVar1 == (long *)0x0) goto LAB_0157bb20;
  if ((/*STR('Pointer should have exited all objects before being removed')*/ lRam0000000003d71330 == 0) ||
     (lVar2 = func_0x00f78adc(/*STR('Pointer should have exited all objects before being removed')*/ lRam0000000003d71330,*(undefined8 *)(*plVar1 + 0x40)), lVar2 != 0)) {
    if ((int)plVar1[3] != 0) {
      plVar1[4] = /*STR('Pointer should have exited all objects before being removed')*/ lRam0000000003d71330;
      **(long **)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0xb8) = (long)plVar1;
      plVar1 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,3);
      if (plVar1 == (long *)0x0) goto LAB_0157bb20;
      if ((/*STR('UnityEngine.DebugLogHandler')*/ lRam0000000003d759f8 != 0) &&
         (lVar2 = func_0x00f78adc(/*STR('UnityEngine.DebugLogHandler')*/ lRam0000000003d759f8,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)
         ) goto LAB_0157bb14;
      uVar5 = plVar1[3];
      if ((int)uVar5 != 0) {
        plVar1[4] = /*STR('UnityEngine.DebugLogHandler')*/ lRam0000000003d759f8;
        if (/*STR('Atlas.Debugging.LogHandler')*/ lRam0000000003d69368 != 0) {
          lVar2 = func_0x00f78adc(/*STR('Atlas.Debugging.LogHandler')*/ lRam0000000003d69368,*(undefined8 *)(*plVar1 + 0x40));
          if (lVar2 == 0) goto LAB_0157bb14;
          uVar5 = plVar1[3];
        }
        uVar4 = (uint)uVar5;
        if ((uVar5 & 0xfffffffe) != 0) {
          plVar1[5] = /*STR('Atlas.Debugging.LogHandler')*/ lRam0000000003d69368;
          lVar2 = 0;
          if (/*STR('UnityEngine.Debug')*/ lRam0000000003d759f0 != 0) {
            lVar2 = func_0x00f78adc(/*STR('UnityEngine.Debug')*/ lRam0000000003d759f0,*(undefined8 *)(*plVar1 + 0x40));
            if (lVar2 == 0) goto LAB_0157bb14;
            uVar4 = (uint)plVar1[3];
          }
          if (2 < uVar4) {
            plVar1[6] = /*STR('UnityEngine.Debug')*/ lRam0000000003d759f0;
            *(long **)(*(long *)(/*Atlas.UI.Screens.DebugOverlayScreen_TypeInfo*/ lRam0000000003d21128 + 0xb8) + 8) = plVar1;
            return lVar2;
          }
        }
      }
    }
    uVar3 = func_0x00f78b24();
  }
  else {
LAB_0157bb14:
    uVar3 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar3,0);
LAB_0157bb20:
  lVar2 = func_0x00f78af4();
  return *(long *)(lVar2 + 0x40);
}



