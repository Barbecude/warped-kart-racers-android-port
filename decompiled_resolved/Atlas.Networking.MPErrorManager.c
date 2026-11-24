// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.MPErrorManager

// ============================================================
// RVA: 0x148afc8 | Atlas.Networking.MPErrorManager.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x148b0dc | Atlas.Networking.MPErrorManager.DeInit
// ============================================================

long * Atlas_Networking_MPErrorManager__DeInit(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long in_x4;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  
  uVar14 = 0x3d5a180;
  if ((bRam0000000003eb4968 & 1) == 0) {
    func_0x00f78a20(0x3d5a180);
    func_0x00f78a20(0x3d5a188);
    func_0x00f78a20(0x3d282a8);
    bRam0000000003eb4968 = 1;
  }
  plVar8 = param_1 + 2;
  lVar11 = *plVar8;
  uVar3 = func_0x00f78aec(/*Atlas.Networking.Network.SessionChangeDelegate_TypeInfo*/ uRam0000000003d282a8);
  lVar10 = 0;
  uVar7 = uRam0000000003d5a180;
  /*Atlas.Networking.Network.SessionChangeDelegate$$.ctor*/ func_0x01561000(uVar3,param_1);
  if (lVar11 != 0) {
    uVar14 = 0x3d5a000;
    /*Atlas.Networking.Network$$remove_SessionCreated*/ func_0x0149db0c(lVar11,uVar3,0);
    lVar11 = param_1[2];
    uVar3 = func_0x00f78aec(/*Atlas.Networking.Network.SessionChangeDelegate_TypeInfo*/ uRam0000000003d282a8);
    lVar10 = 0;
    uVar7 = uRam0000000003d5a188;
    /*Atlas.Networking.Network.SessionChangeDelegate$$.ctor*/ func_0x01561000(uVar3,param_1);
    if (lVar11 != 0) {
      plVar4 = (long *)/*Atlas.Networking.Network$$remove_SessionDestroyed*/ func_0x0149dc4c(lVar11,uVar3,0);
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[3] = 0;
      *plVar8 = 0;
      return plVar4;
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  puVar2 = &uStack_60;
  puStack_48 = &Atlas_Networking_MPErrorManager__Update;
  plVar4 = plVar5;
  uStack_60 = 0;
  plStack_58 = param_1;
  ppppppuStack_50 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4969 & 1) == 0) {
    plVar4 = (long *)func_0x00f78a20(0x3d6d050);
    bRam0000000003eb4969 = 1;
  }
  if (*(char *)((long)plVar5 + 0x42) == '\0') {
    if (*(char *)((long)plVar5 + 0x41) == '\0') {
      return plVar4;
    }
    if (plVar5[5] == 0) goto code_r0x0148b284;
    if (*(char *)(plVar5[5] + 0x50) != '\0') {
      return plVar4;
    }
    *(undefined1 *)((long)plVar5 + 0x41) = 0;
    auVar17._8_8_ = plVar5[9];
    auVar17._0_8_ = plVar5;
    uVar7 = (ulong)*(uint *)(plVar5 + 10);
    lVar10 = plVar5[0xb];
    in_x4 = plVar5[0xc];
    puVar2 = (undefined8 *)&stack0xffffffffffffffc0;
    plVar5 = plStack_58;
    uVar12 = uStack_60;
    pppppppuVar15 = (undefined8 *******)ppppppuStack_50;
    puVar16 = puStack_48;
  }
  else {
    plVar4 = (long *)plVar5[5];
    if (plVar4 != (long *)0x0) {
      if ((char)plVar4[10] != '\0') {
        return plVar4;
      }
      *(undefined1 *)((long)plVar5 + 0x42) = 0;
      goto Core_Contexts_ContextManager__RequestContextChange;
    }
code_r0x0148b284:
    auVar17 = func_0x00f78af4();
    uVar12 = 0x3eb4000;
    pppppppuVar15 = &ppppppuStack_50;
    puVar16 = &Atlas_Networking_MPErrorManager__ShowErrorMessageBox;
  }
  uVar9 = auVar17._8_8_;
  lVar11 = auVar17._0_8_;
  *(undefined8 *)((long)puVar2 + -0x60) = unaff_x28;
  *(undefined8 *)((long)puVar2 + -0x58) = unaff_x27;
  *(long *)((long)puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)((long)puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)((long)puVar2 + -0x40) = uVar14;
  *(undefined8 *)((long)puVar2 + -0x38) = 0x3d282a8;
  *(long **)((long)puVar2 + -0x30) = plVar8;
  *(undefined8 *)((long)puVar2 + -0x28) = uVar3;
  *(undefined8 *)((long)puVar2 + -0x20) = uVar12;
  *(long **)((long)puVar2 + -0x18) = plVar5;
  *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar15;
  *(undefined **)((long)puVar2 + -8) = puVar16;
  *(int *)((long)puVar2 + -100) = (int)uVar7;
  uVar14 = 0x3eb4000;
  if ((bRam0000000003eb496e & 1) == 0) {
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d6c058);
    func_0x00f78a20(0x3d6d110);
    func_0x00f78a20(0x3d6c060);
    func_0x00f78a20(0x3d6b3d8);
    func_0x00f78a20(0x3d67968);
    func_0x00f78a20(0x3d6f740);
    func_0x00f78a20(0x3d6b3b0);
    bRam0000000003eb496e = 1;
  }
  if (((*(long *)(lVar11 + 0x38) == 0) || (*(long *)(*(long *)(lVar11 + 0x38) + 0x48) == 0)) ||
     (((int)uVar7 == 5 &&
      ((uVar6 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar9,0), (uVar6 & 1) == 0 &&
       (uVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar9,/*STR('DC')*/ lRam0000000003d6b3d8,0), (uVar6 & 1) != 0)))))) {
code_r0x0148b3cc:
    uVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(lVar10,0);
    unaff_x26 = /*STR('ERROR_OOPS')*/ lRam0000000003d6c060;
    unaff_x25 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(in_x4,0);
    lVar13 = /*STR('MESSAGE_BODY_MP_ERROR')*/ lRam0000000003d6f740;
    uVar7 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    Atlas_UI_MessageBoxManager_MessageBoxData___ctor(uVar7,0);
    if (uVar7 != 0) {
      if ((int)unaff_x25 == 0) {
        lVar13 = in_x4;
      }
      lVar1 = unaff_x26;
      if ((int)uVar14 == 0) {
        lVar1 = lVar10;
      }
      *(long *)(uVar7 + 0x28) = lVar1;
      *(long *)(uVar7 + 0x30) = lVar13;
      if (*(long *)(lVar11 + 0x30) != 0) {
        in_x4 = 0x3d6b000;
        uVar14 = 0x3d6d000;
        lVar10 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar11 + 0x30),/*STR('ERROR_ERRORCODE')*/ uRam0000000003d6c058,0);
        uVar3 = /*System.Int32$$ToString*/ func_0x02ae9bc0((undefined1 *)((long)puVar2 + -100),/*STR('D3')*/ uRam0000000003d6b3b0,0);
        uVar3 = /*System.String$$Concat*/ func_0x029bdb88(uVar9,uVar3,0);
        uVar3 = /*System.String$$Format*/ func_0x029bc688(lVar10,uVar3,0);
        *(undefined8 *)(uVar7 + 0x48) = uVar3;
        *(undefined8 *)(uVar7 + 0x38) = /*STR('GENERIC_OK')*/ uRam0000000003d6d110;
        if (*(long *)(lVar11 + 0x20) != 0) {
          plVar8 = (long *)Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___QueueModal
                                     (*(long *)(lVar11 + 0x20),uVar7,uRam0000000003d3e0e8);
          return plVar8;
        }
      }
    }
  }
  else if (*(long *)(lVar11 + 0x38) != 0) {
    lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + 0x48);
    uVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)puVar2 + -100),0);
    uVar3 = /*System.String$$Concat*/ func_0x029be39c(uVar9,/*STR(':')*/ uRam0000000003d67968,uVar3,0);
    uVar7 = 0;
    if (lVar13 != 0) {
      Atlas_Analytics_AtlasAnalyticsEvents__NetworkErrorEvent(lVar13,uVar3,0);
      goto code_r0x0148b3cc;
    }
  }
  lVar13 = func_0x00f78af4();
  *(long *)((long)puVar2 + -0xc0) = unaff_x26;
  *(undefined8 *)((long)puVar2 + -0xb8) = unaff_x25;
  *(undefined8 *)((long)puVar2 + -0xb0) = uVar14;
  *(ulong *)((long)puVar2 + -0xa8) = uVar7;
  *(long *)((long)puVar2 + -0xa0) = in_x4;
  *(long *)((long)puVar2 + -0x98) = lVar10;
  *(undefined8 *)((long)puVar2 + -0x90) = uVar9;
  *(long *)((long)puVar2 + -0x88) = lVar11;
  *(undefined1 **)((long)puVar2 + -0x80) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -0x78) = &Atlas_Networking_MPErrorManager__OnSessionCreated;
  uVar3 = 0x3eb4000;
  if ((bRam0000000003eb496a & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d5a178);
    bRam0000000003eb496a = 1;
  }
  if ((*(long *)(lVar13 + 0x18) == 0) ||
     (in_x4 = *(long *)(*(long *)(lVar13 + 0x18) + 0x30), in_x4 == 0)) {
    func_0x00f78af4();
  }
  else {
    uVar7 = 0x3d1b410;
    uVar14 = 0x3d5a000;
    unaff_x25 = 0x3d2a000;
    uVar3 = *(undefined8 *)(in_x4 + 0x98);
    lVar10 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(lVar10,lVar13,uRam0000000003d5a178,uRam0000000003d2a018);
    plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar3,lVar10,0);
    if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) {
      *(long **)(in_x4 + 0x98) = plVar8;
      return plVar8;
    }
  }
  lVar11 = func_0x00f78e5c();
  *(long *)((long)puVar2 + -0x110) = unaff_x26;
  *(undefined8 *)((long)puVar2 + -0x108) = unaff_x25;
  *(undefined8 *)((long)puVar2 + -0x100) = uVar14;
  *(ulong *)((long)puVar2 + -0xf8) = uVar7;
  *(long *)((long)puVar2 + -0xf0) = in_x4;
  *(long *)((long)puVar2 + -0xe8) = lVar10;
  *(undefined8 *)((long)puVar2 + -0xe0) = uVar3;
  *(long *)((long)puVar2 + -0xd8) = lVar13;
  *(undefined1 **)((long)puVar2 + -0xd0) = (undefined1 *)((long)puVar2 + -0x80);
  *(undefined **)((long)puVar2 + -200) = &Atlas_Networking_MPErrorManager__OnSessionDestroyed;
  uVar3 = 0x3eb4000;
  if ((bRam0000000003eb496b & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d5a178);
    bRam0000000003eb496b = 1;
  }
  if ((*(long *)(lVar11 + 0x18) == 0) ||
     (in_x4 = *(long *)(*(long *)(lVar11 + 0x18) + 0x30), in_x4 == 0)) {
    func_0x00f78af4();
  }
  else {
    uVar7 = 0x3d1b410;
    uVar14 = 0x3d5a000;
    uVar3 = *(undefined8 *)(in_x4 + 0x98);
    lVar10 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(lVar10,lVar11,uRam0000000003d5a178,uRam0000000003d2a018);
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar3,lVar10,0);
    if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) {
      *(long **)(in_x4 + 0x98) = plVar8;
      *(undefined1 *)(lVar11 + 0x40) = 0;
      return plVar8;
    }
  }
  auVar18 = func_0x00f78e5c();
  plVar5 = auVar18._0_8_;
  *(long *)((long)puVar2 + -0x140) = in_x4;
  *(long *)((long)puVar2 + -0x138) = lVar10;
  *(undefined8 *)((long)puVar2 + -0x130) = uVar3;
  *(long *)((long)puVar2 + -0x128) = lVar11;
  *(undefined1 **)((long)puVar2 + -0x120) = (undefined1 *)((long)puVar2 + -0xd0);
  *(undefined **)((long)puVar2 + -0x118) = &Atlas_Networking_MPErrorManager__OnDisconnected;
  plVar8 = plVar5;
  if ((bRam0000000003eb496c & 1) == 0) {
    plVar8 = (long *)func_0x00f78a20(0x3d6b3d8);
    bRam0000000003eb496c = 1;
  }
  lVar10 = /*STR('DC')*/ lRam0000000003d6b3d8;
  if (auVar18._8_4_ == 1) {
    return plVar8;
  }
  *(undefined8 *)((long)puVar2 + -0x150) = uVar14;
  *(ulong *)((long)puVar2 + -0x148) = uVar7;
  *(undefined8 *)((long)puVar2 + -0x140) = *(undefined8 *)((long)puVar2 + -0x140);
  *(undefined8 *)((long)puVar2 + -0x138) = *(undefined8 *)((long)puVar2 + -0x138);
  *(undefined8 *)((long)puVar2 + -0x130) = *(undefined8 *)((long)puVar2 + -0x130);
  *(undefined8 *)((long)puVar2 + -0x128) = *(undefined8 *)((long)puVar2 + -0x128);
  *(undefined8 *)((long)puVar2 + -0x120) = *(undefined8 *)((long)puVar2 + -0x120);
  *(undefined8 *)((long)puVar2 + -0x118) = *(undefined8 *)((long)puVar2 + -0x118);
  plVar8 = plVar5;
  if ((bRam0000000003eb496d & 1) == 0) {
    func_0x00f78a20(0x3d3e0f8);
    plVar8 = (long *)func_0x00f78a20(0x3d6d050);
    bRam0000000003eb496d = 1;
  }
  if ((char)plVar5[8] != '\0') {
    return plVar8;
  }
  *(undefined2 *)(plVar5 + 8) = 0x101;
  plVar5[9] = lVar10;
  *(int *)(plVar5 + 10) = auVar18._8_4_;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  if (plVar5[4] != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___RemoveAllQueuedAndShowing
              (plVar5[4],0,uRam0000000003d3e0f8);
    plVar4 = (long *)plVar5[5];
    if (plVar4 != (long *)0x0) {
      if ((char)plVar4[10] != '\0') {
        *(undefined1 *)((long)plVar5 + 0x42) = 1;
        return plVar4;
      }
Core_Contexts_ContextManager__RequestContextChange:
      lVar11 = /*STR('FrontEndContext')*/ lRam0000000003d6d050;
      lVar10 = plVar4[10];
      if ((char)lVar10 == '\0') {
        *(undefined1 *)(plVar4 + 10) = 1;
        plVar4[8] = lVar11;
        plVar4[9] = 0;
      }
      return (long *)(ulong)((char)lVar10 == '\0');
    }
  }
  plVar8 = (long *)func_0x00f78af4();
  *(undefined1 *)(plVar8 + 8) = 0;
  return plVar8;
}



// ============================================================
// RVA: 0x148b1d4 | Atlas.Networking.MPErrorManager.Update
// ============================================================

long * Atlas_Networking_MPErrorManager__Update
                 (long *param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar8;
  undefined8 unaff_x24;
  undefined8 uVar9;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar3 = param_1;
  if ((bRam0000000003eb4969 & 1) == 0) {
    plVar3 = (long *)func_0x00f78a20(0x3d6d050);
    bRam0000000003eb4969 = 1;
  }
  if (*(char *)((long)param_1 + 0x42) == '\0') {
    if (*(char *)((long)param_1 + 0x41) == '\0') {
      return plVar3;
    }
    if (param_1[5] == 0) goto LAB_0148b284;
    if (*(char *)(param_1[5] + 0x50) != '\0') {
      return plVar3;
    }
    *(undefined1 *)((long)param_1 + 0x41) = 0;
    lVar6 = param_1[9];
    param_3 = (ulong)*(uint *)(param_1 + 10);
    param_4 = param_1[0xb];
    param_5 = param_1[0xc];
    plVar3 = param_1;
  }
  else {
    plVar3 = (long *)param_1[5];
    if (plVar3 != (long *)0x0) {
      if ((char)plVar3[10] != '\0') {
        return plVar3;
      }
      *(undefined1 *)((long)param_1 + 0x42) = 0;
      goto Core_Contexts_ContextManager__RequestContextChange;
    }
LAB_0148b284:
    unaff_x30 = &Atlas_Networking_MPErrorManager__ShowErrorMessageBox;
    auVar10 = func_0x00f78af4();
    lVar6 = auVar10._8_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    plVar3 = auVar10._0_8_;
    unaff_x19 = param_1;
    unaff_x20 = 0x3eb4000;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *(int *)((long)register0x00000008 + -100) = (int)param_3;
  uVar9 = 0x3eb4000;
  if ((bRam0000000003eb496e & 1) == 0) {
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d6c058);
    func_0x00f78a20(0x3d6d110);
    func_0x00f78a20(0x3d6c060);
    func_0x00f78a20(0x3d6b3d8);
    func_0x00f78a20(0x3d67968);
    func_0x00f78a20(0x3d6f740);
    func_0x00f78a20(0x3d6b3b0);
    bRam0000000003eb496e = 1;
  }
  if (((plVar3[7] == 0) || (*(long *)(plVar3[7] + 0x48) == 0)) ||
     (((int)param_3 == 5 &&
      ((uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(lVar6,0), (uVar4 & 1) == 0 &&
       (uVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar6,/*STR('DC')*/ lRam0000000003d6b3d8,0), (uVar4 & 1) != 0)))))) {
code_r0x0148b3cc:
    uVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_4,0);
    unaff_x26 = /*STR('ERROR_OOPS')*/ lRam0000000003d6c060;
    unaff_x25 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_5,0);
    lVar8 = /*STR('MESSAGE_BODY_MP_ERROR')*/ lRam0000000003d6f740;
    param_3 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    Atlas_UI_MessageBoxManager_MessageBoxData___ctor(param_3,0);
    if (param_3 != 0) {
      if ((int)unaff_x25 == 0) {
        lVar8 = param_5;
      }
      lVar2 = unaff_x26;
      if ((int)uVar9 == 0) {
        lVar2 = param_4;
      }
      *(long *)(param_3 + 0x28) = lVar2;
      *(long *)(param_3 + 0x30) = lVar8;
      if (plVar3[6] != 0) {
        param_5 = 0x3d6b000;
        uVar9 = 0x3d6d000;
        param_4 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(plVar3[6],/*STR('ERROR_ERRORCODE')*/ uRam0000000003d6c058,0);
        uVar5 = /*System.Int32$$ToString*/ func_0x02ae9bc0((undefined1 *)((long)register0x00000008 + -100),/*STR('D3')*/ uRam0000000003d6b3b0
                                ,0);
        uVar5 = /*System.String$$Concat*/ func_0x029bdb88(lVar6,uVar5,0);
        uVar5 = /*System.String$$Format*/ func_0x029bc688(param_4,uVar5,0);
        *(undefined8 *)(param_3 + 0x48) = uVar5;
        *(undefined8 *)(param_3 + 0x38) = /*STR('GENERIC_OK')*/ uRam0000000003d6d110;
        if (plVar3[4] != 0) {
          plVar3 = (long *)Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___QueueModal
                                     (plVar3[4],param_3,uRam0000000003d3e0e8);
          return plVar3;
        }
      }
    }
  }
  else if (plVar3[7] != 0) {
    lVar8 = *(long *)(plVar3[7] + 0x48);
    uVar5 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)register0x00000008 + -100),0);
    uVar5 = /*System.String$$Concat*/ func_0x029be39c(lVar6,/*STR(':')*/ uRam0000000003d67968,uVar5,0);
    param_3 = 0;
    if (lVar8 != 0) {
      Atlas_Analytics_AtlasAnalyticsEvents__NetworkErrorEvent(lVar8,uVar5,0);
      goto code_r0x0148b3cc;
    }
  }
  lVar8 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0xc0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar9;
  *(ulong *)((long)register0x00000008 + -0xa8) = param_3;
  *(long *)((long)register0x00000008 + -0xa0) = param_5;
  *(long *)((long)register0x00000008 + -0x98) = param_4;
  *(long *)((long)register0x00000008 + -0x90) = lVar6;
  *(long **)((long)register0x00000008 + -0x88) = plVar3;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x78) =
       &Atlas_Networking_MPErrorManager__OnSessionCreated;
  uVar5 = 0x3eb4000;
  if ((bRam0000000003eb496a & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d5a178);
    bRam0000000003eb496a = 1;
  }
  if ((*(long *)(lVar8 + 0x18) == 0) ||
     (param_5 = *(long *)(*(long *)(lVar8 + 0x18) + 0x30), param_5 == 0)) {
    func_0x00f78af4();
  }
  else {
    param_3 = 0x3d1b410;
    uVar9 = 0x3d5a000;
    unaff_x25 = 0x3d2a000;
    uVar5 = *(undefined8 *)(param_5 + 0x98);
    param_4 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(param_4,lVar8,uRam0000000003d5a178,uRam0000000003d2a018);
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,param_4,0);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) {
      *(long **)(param_5 + 0x98) = plVar3;
      return plVar3;
    }
  }
  lVar6 = func_0x00f78e5c();
  *(long *)((long)register0x00000008 + -0x110) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x100) = uVar9;
  *(ulong *)((long)register0x00000008 + -0xf8) = param_3;
  *(long *)((long)register0x00000008 + -0xf0) = param_5;
  *(long *)((long)register0x00000008 + -0xe8) = param_4;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar5;
  *(long *)((long)register0x00000008 + -0xd8) = lVar8;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -200) =
       &Atlas_Networking_MPErrorManager__OnSessionDestroyed;
  uVar5 = 0x3eb4000;
  if ((bRam0000000003eb496b & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d5a178);
    bRam0000000003eb496b = 1;
  }
  if ((*(long *)(lVar6 + 0x18) == 0) ||
     (param_5 = *(long *)(*(long *)(lVar6 + 0x18) + 0x30), param_5 == 0)) {
    func_0x00f78af4();
  }
  else {
    param_3 = 0x3d1b410;
    uVar9 = 0x3d5a000;
    uVar5 = *(undefined8 *)(param_5 + 0x98);
    param_4 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(param_4,lVar6,uRam0000000003d5a178,uRam0000000003d2a018);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,param_4,0);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) {
      *(long **)(param_5 + 0x98) = plVar3;
      *(undefined1 *)(lVar6 + 0x40) = 0;
      return plVar3;
    }
  }
  auVar11 = func_0x00f78e5c();
  plVar7 = auVar11._0_8_;
  *(long *)((long)register0x00000008 + -0x140) = param_5;
  *(long *)((long)register0x00000008 + -0x138) = param_4;
  *(undefined8 *)((long)register0x00000008 + -0x130) = uVar5;
  *(long *)((long)register0x00000008 + -0x128) = lVar6;
  *(undefined1 **)((long)register0x00000008 + -0x120) =
       (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined **)((long)register0x00000008 + -0x118) =
       &Atlas_Networking_MPErrorManager__OnDisconnected;
  plVar3 = plVar7;
  if ((bRam0000000003eb496c & 1) == 0) {
    plVar3 = (long *)func_0x00f78a20(0x3d6b3d8);
    bRam0000000003eb496c = 1;
  }
  lVar6 = /*STR('DC')*/ lRam0000000003d6b3d8;
  if (auVar11._8_4_ == 1) {
    return plVar3;
  }
  *(undefined8 *)((long)register0x00000008 + -0x150) = uVar9;
  *(ulong *)((long)register0x00000008 + -0x148) = param_3;
  *(undefined8 *)((long)register0x00000008 + -0x140) =
       *(undefined8 *)((long)register0x00000008 + -0x140);
  *(undefined8 *)((long)register0x00000008 + -0x138) =
       *(undefined8 *)((long)register0x00000008 + -0x138);
  *(undefined8 *)((long)register0x00000008 + -0x130) =
       *(undefined8 *)((long)register0x00000008 + -0x130);
  *(undefined8 *)((long)register0x00000008 + -0x128) =
       *(undefined8 *)((long)register0x00000008 + -0x128);
  *(undefined8 *)((long)register0x00000008 + -0x120) =
       *(undefined8 *)((long)register0x00000008 + -0x120);
  *(undefined8 *)((long)register0x00000008 + -0x118) =
       *(undefined8 *)((long)register0x00000008 + -0x118);
  plVar3 = plVar7;
  if ((bRam0000000003eb496d & 1) == 0) {
    func_0x00f78a20(0x3d3e0f8);
    plVar3 = (long *)func_0x00f78a20(0x3d6d050);
    bRam0000000003eb496d = 1;
  }
  if ((char)plVar7[8] != '\0') {
    return plVar3;
  }
  *(undefined2 *)(plVar7 + 8) = 0x101;
  plVar7[9] = lVar6;
  *(int *)(plVar7 + 10) = auVar11._8_4_;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  if (plVar7[4] != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___RemoveAllQueuedAndShowing
              (plVar7[4],0,uRam0000000003d3e0f8);
    plVar3 = (long *)plVar7[5];
    if (plVar3 != (long *)0x0) {
      if ((char)plVar3[10] != '\0') {
        *(undefined1 *)((long)plVar7 + 0x42) = 1;
        return plVar3;
      }
Core_Contexts_ContextManager__RequestContextChange:
      lVar8 = /*STR('FrontEndContext')*/ lRam0000000003d6d050;
      lVar6 = plVar3[10];
      if ((char)lVar6 == '\0') {
        *(undefined1 *)(plVar3 + 10) = 1;
        plVar3[8] = lVar8;
        plVar3[9] = 0;
      }
      return (long *)(ulong)((char)lVar6 == '\0');
    }
  }
  plVar3 = (long *)func_0x00f78af4();
  *(undefined1 *)(plVar3 + 8) = 0;
  return plVar3;
}



// ============================================================
// RVA: 0x148b288 | Atlas.Networking.MPErrorManager.ShowErrorMessageBox
// ============================================================

long * Atlas_Networking_MPErrorManager__ShowErrorMessageBox
                 (long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [12];
  int iStack_64;
  
  iStack_64 = param_3;
  if ((bRam0000000003eb496e & 1) == 0) {
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d6c058);
    func_0x00f78a20(0x3d6d110);
    func_0x00f78a20(0x3d6c060);
    func_0x00f78a20(0x3d6b3d8);
    func_0x00f78a20(0x3d67968);
    func_0x00f78a20(0x3d6f740);
    func_0x00f78a20(0x3d6b3b0);
    bRam0000000003eb496e = 1;
  }
  if (((*(long *)(param_1 + 0x38) != 0) && (*(long *)(*(long *)(param_1 + 0x38) + 0x48) != 0)) &&
     ((param_3 != 5 ||
      ((uVar3 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_2,0), (uVar3 & 1) != 0 ||
       (uVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_2,/*STR('DC')*/ lRam0000000003d6b3d8,0), (uVar3 & 1) == 0)))))) {
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_0148b4e0;
    lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x48);
    uVar4 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_64,0);
    uVar4 = /*System.String$$Concat*/ func_0x029be39c(param_2,/*STR(':')*/ uRam0000000003d67968,uVar4,0);
    if (lVar9 == 0) goto LAB_0148b4e0;
    Atlas_Analytics_AtlasAnalyticsEvents__NetworkErrorEvent(lVar9,uVar4,0);
  }
  iVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_4,0);
  uVar5 = /*STR('ERROR_OOPS')*/ uRam0000000003d6c060;
  iVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_5,0);
  uVar4 = /*STR('MESSAGE_BODY_MP_ERROR')*/ uRam0000000003d6f740;
  lVar9 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
  Atlas_UI_MessageBoxManager_MessageBoxData___ctor(lVar9,0);
  if (lVar9 != 0) {
    if (iVar2 == 0) {
      uVar4 = param_5;
    }
    if (iVar1 == 0) {
      uVar5 = param_4;
    }
    *(undefined8 *)(lVar9 + 0x28) = uVar5;
    *(undefined8 *)(lVar9 + 0x30) = uVar4;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar4 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_1 + 0x30),/*STR('ERROR_ERRORCODE')*/ uRam0000000003d6c058,0);
      uVar5 = /*System.Int32$$ToString*/ func_0x02ae9bc0(&iStack_64,/*STR('D3')*/ uRam0000000003d6b3b0,0);
      uVar5 = /*System.String$$Concat*/ func_0x029bdb88(param_2,uVar5,0);
      uVar4 = /*System.String$$Format*/ func_0x029bc688(uVar4,uVar5,0);
      *(undefined8 *)(lVar9 + 0x48) = uVar4;
      *(undefined8 *)(lVar9 + 0x38) = /*STR('GENERIC_OK')*/ uRam0000000003d6d110;
      if (*(long *)(param_1 + 0x20) != 0) {
        plVar6 = (long *)Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___QueueModal
                                   (*(long *)(param_1 + 0x20),lVar9,uRam0000000003d3e0e8);
        return plVar6;
      }
    }
  }
LAB_0148b4e0:
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb496a & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d5a178);
    bRam0000000003eb496a = 1;
  }
  if ((*(long *)(lVar9 + 0x18) == 0) ||
     (lVar8 = *(long *)(*(long *)(lVar9 + 0x18) + 0x30), lVar8 == 0)) {
    func_0x00f78af4();
  }
  else {
    uVar5 = *(undefined8 *)(lVar8 + 0x98);
    uVar4 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar4,lVar9,uRam0000000003d5a178,uRam0000000003d2a018);
    plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar4,0);
    if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) {
      *(long **)(lVar8 + 0x98) = plVar6;
      return plVar6;
    }
  }
  lVar9 = func_0x00f78e5c();
  if ((bRam0000000003eb496b & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d5a178);
    bRam0000000003eb496b = 1;
  }
  if ((*(long *)(lVar9 + 0x18) == 0) ||
     (lVar8 = *(long *)(*(long *)(lVar9 + 0x18) + 0x30), lVar8 == 0)) {
    func_0x00f78af4();
  }
  else {
    uVar5 = *(undefined8 *)(lVar8 + 0x98);
    uVar4 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar4,lVar9,uRam0000000003d5a178,uRam0000000003d2a018);
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar4,0);
    if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) {
      *(long **)(lVar8 + 0x98) = plVar6;
      *(undefined1 *)(lVar9 + 0x40) = 0;
      return plVar6;
    }
  }
  auVar10 = func_0x00f78e5c();
  plVar7 = auVar10._0_8_;
  plVar6 = plVar7;
  if ((bRam0000000003eb496c & 1) == 0) {
    plVar6 = (long *)func_0x00f78a20(0x3d6b3d8);
    bRam0000000003eb496c = 1;
  }
  lVar9 = /*STR('DC')*/ lRam0000000003d6b3d8;
  if (auVar10._8_4_ != 1) {
    plVar6 = plVar7;
    if ((bRam0000000003eb496d & 1) == 0) {
      func_0x00f78a20(0x3d3e0f8);
      plVar6 = (long *)func_0x00f78a20(0x3d6d050);
      bRam0000000003eb496d = 1;
    }
    if ((char)plVar7[8] != '\0') {
      return plVar6;
    }
    *(undefined2 *)(plVar7 + 8) = 0x101;
    plVar7[9] = lVar9;
    *(int *)(plVar7 + 10) = auVar10._8_4_;
    plVar7[0xb] = 0;
    plVar7[0xc] = 0;
    if (plVar7[4] != 0) {
      Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___RemoveAllQueuedAndShowing
                (plVar7[4],0,uRam0000000003d3e0f8);
      lVar9 = /*STR('FrontEndContext')*/ lRam0000000003d6d050;
      plVar6 = (long *)plVar7[5];
      if (plVar6 != (long *)0x0) {
        if ((char)plVar6[10] != '\0') {
          *(undefined1 *)((long)plVar7 + 0x42) = 1;
          return plVar6;
        }
        lVar8 = plVar6[10];
        if ((char)lVar8 == '\0') {
          *(undefined1 *)(plVar6 + 10) = 1;
          plVar6[8] = lVar9;
          plVar6[9] = 0;
        }
        return (long *)(ulong)((char)lVar8 == '\0');
      }
    }
    plVar6 = (long *)func_0x00f78af4();
    *(undefined1 *)(plVar6 + 8) = 0;
    return plVar6;
  }
  return plVar6;
}



// ============================================================
// RVA: 0x148b4e4 | Atlas.Networking.MPErrorManager.OnSessionCreated
// ============================================================

long * Atlas_Networking_MPErrorManager__OnSessionCreated(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [12];
  
  if ((bRam0000000003eb496a & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d5a178);
    bRam0000000003eb496a = 1;
  }
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x30), lVar5 == 0)) {
    func_0x00f78af4();
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x98);
    uVar1 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar1,param_1,uRam0000000003d5a178,uRam0000000003d2a018);
    plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar1,0);
    if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) {
      *(long **)(lVar5 + 0x98) = plVar2;
      return plVar2;
    }
  }
  lVar5 = func_0x00f78e5c();
  if ((bRam0000000003eb496b & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d5a178);
    bRam0000000003eb496b = 1;
  }
  if ((*(long *)(lVar5 + 0x18) == 0) ||
     (lVar6 = *(long *)(*(long *)(lVar5 + 0x18) + 0x30), lVar6 == 0)) {
    func_0x00f78af4();
  }
  else {
    uVar4 = *(undefined8 *)(lVar6 + 0x98);
    uVar1 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar1,lVar5,uRam0000000003d5a178,uRam0000000003d2a018);
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar1,0);
    if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) {
      *(long **)(lVar6 + 0x98) = plVar2;
      *(undefined1 *)(lVar5 + 0x40) = 0;
      return plVar2;
    }
  }
  auVar7 = func_0x00f78e5c();
  plVar3 = auVar7._0_8_;
  plVar2 = plVar3;
  if ((bRam0000000003eb496c & 1) == 0) {
    plVar2 = (long *)func_0x00f78a20(0x3d6b3d8);
    bRam0000000003eb496c = 1;
  }
  lVar5 = /*STR('DC')*/ lRam0000000003d6b3d8;
  if (auVar7._8_4_ != 1) {
    plVar2 = plVar3;
    if ((bRam0000000003eb496d & 1) == 0) {
      func_0x00f78a20(0x3d3e0f8);
      plVar2 = (long *)func_0x00f78a20(0x3d6d050);
      bRam0000000003eb496d = 1;
    }
    if ((char)plVar3[8] != '\0') {
      return plVar2;
    }
    *(undefined2 *)(plVar3 + 8) = 0x101;
    plVar3[9] = lVar5;
    *(int *)(plVar3 + 10) = auVar7._8_4_;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    if (plVar3[4] != 0) {
      Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___RemoveAllQueuedAndShowing
                (plVar3[4],0,uRam0000000003d3e0f8);
      lVar5 = /*STR('FrontEndContext')*/ lRam0000000003d6d050;
      plVar2 = (long *)plVar3[5];
      if (plVar2 != (long *)0x0) {
        if ((char)plVar2[10] != '\0') {
          *(undefined1 *)((long)plVar3 + 0x42) = 1;
          return plVar2;
        }
        lVar6 = plVar2[10];
        if ((char)lVar6 == '\0') {
          *(undefined1 *)(plVar2 + 10) = 1;
          plVar2[8] = lVar5;
          plVar2[9] = 0;
        }
        return (long *)(ulong)((char)lVar6 == '\0');
      }
    }
    plVar2 = (long *)func_0x00f78af4();
    *(undefined1 *)(plVar2 + 8) = 0;
    return plVar2;
  }
  return plVar2;
}



// ============================================================
// RVA: 0x148b5c8 | Atlas.Networking.MPErrorManager.OnSessionDestroyed
// ============================================================

long * Atlas_Networking_MPErrorManager__OnSessionDestroyed(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [12];
  
  if ((bRam0000000003eb496b & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d5a178);
    bRam0000000003eb496b = 1;
  }
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x30), lVar6 == 0)) {
    func_0x00f78af4();
  }
  else {
    uVar5 = *(undefined8 *)(lVar6 + 0x98);
    uVar2 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar2,param_1,uRam0000000003d5a178,uRam0000000003d2a018);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar2,0);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) {
      *(long **)(lVar6 + 0x98) = plVar3;
      *(undefined1 *)(param_1 + 0x40) = 0;
      return plVar3;
    }
  }
  auVar7 = func_0x00f78e5c();
  plVar4 = auVar7._0_8_;
  plVar3 = plVar4;
  if ((bRam0000000003eb496c & 1) == 0) {
    plVar3 = (long *)func_0x00f78a20(0x3d6b3d8);
    bRam0000000003eb496c = 1;
  }
  lVar6 = /*STR('DC')*/ lRam0000000003d6b3d8;
  if (auVar7._8_4_ != 1) {
    plVar3 = plVar4;
    if ((bRam0000000003eb496d & 1) == 0) {
      func_0x00f78a20(0x3d3e0f8);
      plVar3 = (long *)func_0x00f78a20(0x3d6d050);
      bRam0000000003eb496d = 1;
    }
    if ((char)plVar4[8] != '\0') {
      return plVar3;
    }
    *(undefined2 *)(plVar4 + 8) = 0x101;
    plVar4[9] = lVar6;
    *(int *)(plVar4 + 10) = auVar7._8_4_;
    plVar4[0xb] = 0;
    plVar4[0xc] = 0;
    if (plVar4[4] != 0) {
      Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___RemoveAllQueuedAndShowing
                (plVar4[4],0,uRam0000000003d3e0f8);
      lVar6 = /*STR('FrontEndContext')*/ lRam0000000003d6d050;
      plVar3 = (long *)plVar4[5];
      if (plVar3 != (long *)0x0) {
        if ((char)plVar3[10] != '\0') {
          *(undefined1 *)((long)plVar4 + 0x42) = 1;
          return plVar3;
        }
        lVar1 = plVar3[10];
        if ((char)lVar1 == '\0') {
          *(undefined1 *)(plVar3 + 10) = 1;
          plVar3[8] = lVar6;
          plVar3[9] = 0;
        }
        return (long *)(ulong)((char)lVar1 == '\0');
      }
    }
    plVar3 = (long *)func_0x00f78af4();
    *(undefined1 *)(plVar3 + 8) = 0;
    return plVar3;
  }
  return plVar3;
}



// ============================================================
// RVA: 0x148b6b0 | Atlas.Networking.MPErrorManager.OnDisconnected
// ============================================================

ulong Atlas_Networking_MPErrorManager__OnDisconnected(ulong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if ((bRam0000000003eb496c & 1) == 0) {
    uVar3 = func_0x00f78a20(0x3d6b3d8);
    bRam0000000003eb496c = 1;
  }
  uVar2 = /*STR('DC')*/ uRam0000000003d6b3d8;
  if (param_2 == 1) {
    return uVar3;
  }
  uVar3 = param_1;
  if ((bRam0000000003eb496d & 1) == 0) {
    func_0x00f78a20(0x3d3e0f8);
    uVar3 = func_0x00f78a20(0x3d6d050);
    bRam0000000003eb496d = 1;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return uVar3;
  }
  *(undefined2 *)(param_1 + 0x40) = 0x101;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(int *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___RemoveAllQueuedAndShowing
              (*(long *)(param_1 + 0x20),0,uRam0000000003d3e0f8);
    uVar2 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
    uVar3 = *(ulong *)(param_1 + 0x28);
    if (uVar3 != 0) {
      if (*(char *)(uVar3 + 0x50) != '\0') {
        *(undefined1 *)(param_1 + 0x42) = 1;
        return uVar3;
      }
      cVar1 = *(char *)(uVar3 + 0x50);
      if (cVar1 == '\0') {
        *(undefined1 *)(uVar3 + 0x50) = 1;
        *(undefined8 *)(uVar3 + 0x40) = uVar2;
        *(undefined8 *)(uVar3 + 0x48) = 0;
      }
      return (ulong)(cVar1 == '\0');
    }
  }
  uVar3 = func_0x00f78af4();
  *(undefined1 *)(uVar3 + 0x40) = 0;
  return uVar3;
}



// ============================================================
// RVA: 0x148b72c | Atlas.Networking.MPErrorManager.ReturnToModeSelectAndShowFatalErrorMessage
// ============================================================

ulong Atlas_Networking_MPErrorManager__ReturnToModeSelectAndShowFatalErrorMessage
                (ulong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if ((bRam0000000003eb496d & 1) == 0) {
    func_0x00f78a20(0x3d3e0f8);
    uVar3 = func_0x00f78a20(0x3d6d050);
    bRam0000000003eb496d = 1;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return uVar3;
  }
  *(undefined2 *)(param_1 + 0x40) = 0x101;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___RemoveAllQueuedAndShowing
              (*(long *)(param_1 + 0x20),0,uRam0000000003d3e0f8);
    uVar2 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
    uVar3 = *(ulong *)(param_1 + 0x28);
    if (uVar3 != 0) {
      if (*(char *)(uVar3 + 0x50) != '\0') {
        *(undefined1 *)(param_1 + 0x42) = 1;
        return uVar3;
      }
      cVar1 = *(char *)(uVar3 + 0x50);
      if (cVar1 == '\0') {
        *(undefined1 *)(uVar3 + 0x50) = 1;
        *(undefined8 *)(uVar3 + 0x40) = uVar2;
        *(undefined8 *)(uVar3 + 0x48) = 0;
      }
      return (ulong)(cVar1 == '\0');
    }
  }
  uVar3 = func_0x00f78af4();
  *(undefined1 *)(uVar3 + 0x40) = 0;
  return uVar3;
}



// ============================================================
// RVA: 0x148b738 | Atlas.Networking.MPErrorManager.ShowErrorMessage
// ============================================================

long * Atlas_Networking_MPErrorManager__ShowErrorMessage
                 (long *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                 )

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [12];
  int iStack_64;
  
  if ((char)param_1[8] != '\0') {
    return param_1;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  iStack_64 = param_3;
  if ((bRam0000000003eb496e & 1) == 0) {
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d6c058);
    func_0x00f78a20(0x3d6d110);
    func_0x00f78a20(0x3d6c060);
    func_0x00f78a20(0x3d6b3d8);
    func_0x00f78a20(0x3d67968);
    func_0x00f78a20(0x3d6f740);
    func_0x00f78a20(0x3d6b3b0);
    bRam0000000003eb496e = 1;
  }
  if (((param_1[7] != 0) && (*(long *)(param_1[7] + 0x48) != 0)) &&
     ((param_3 != 5 ||
      ((uVar3 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_2,0), (uVar3 & 1) != 0 ||
       (uVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_2,/*STR('DC')*/ lRam0000000003d6b3d8,0), (uVar3 & 1) == 0)))))) {
    if (param_1[7] == 0) goto LAB_0148b4e0;
    lVar9 = *(long *)(param_1[7] + 0x48);
    uVar4 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_64,0);
    uVar4 = /*System.String$$Concat*/ func_0x029be39c(param_2,/*STR(':')*/ uRam0000000003d67968,uVar4,0);
    if (lVar9 == 0) goto LAB_0148b4e0;
    Atlas_Analytics_AtlasAnalyticsEvents__NetworkErrorEvent(lVar9,uVar4,0);
  }
  iVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_4,0);
  uVar5 = /*STR('ERROR_OOPS')*/ uRam0000000003d6c060;
  iVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_5,0);
  uVar4 = /*STR('MESSAGE_BODY_MP_ERROR')*/ uRam0000000003d6f740;
  lVar9 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
  Atlas_UI_MessageBoxManager_MessageBoxData___ctor(lVar9,0);
  if (lVar9 != 0) {
    if (iVar2 == 0) {
      uVar4 = param_5;
    }
    if (iVar1 == 0) {
      uVar5 = param_4;
    }
    *(undefined8 *)(lVar9 + 0x28) = uVar5;
    *(undefined8 *)(lVar9 + 0x30) = uVar4;
    if (param_1[6] != 0) {
      uVar4 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(param_1[6],/*STR('ERROR_ERRORCODE')*/ uRam0000000003d6c058,0);
      uVar5 = /*System.Int32$$ToString*/ func_0x02ae9bc0(&iStack_64,/*STR('D3')*/ uRam0000000003d6b3b0,0);
      uVar5 = /*System.String$$Concat*/ func_0x029bdb88(param_2,uVar5,0);
      uVar4 = /*System.String$$Format*/ func_0x029bc688(uVar4,uVar5,0);
      *(undefined8 *)(lVar9 + 0x48) = uVar4;
      *(undefined8 *)(lVar9 + 0x38) = /*STR('GENERIC_OK')*/ uRam0000000003d6d110;
      if (param_1[4] != 0) {
        plVar6 = (long *)Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___QueueModal
                                   (param_1[4],lVar9,uRam0000000003d3e0e8);
        return plVar6;
      }
    }
  }
LAB_0148b4e0:
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb496a & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d5a178);
    bRam0000000003eb496a = 1;
  }
  if ((*(long *)(lVar9 + 0x18) == 0) ||
     (lVar8 = *(long *)(*(long *)(lVar9 + 0x18) + 0x30), lVar8 == 0)) {
    func_0x00f78af4();
  }
  else {
    uVar5 = *(undefined8 *)(lVar8 + 0x98);
    uVar4 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar4,lVar9,uRam0000000003d5a178,uRam0000000003d2a018);
    plVar6 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar4,0);
    if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) {
      *(long **)(lVar8 + 0x98) = plVar6;
      return plVar6;
    }
  }
  lVar9 = func_0x00f78e5c();
  if ((bRam0000000003eb496b & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d5a178);
    bRam0000000003eb496b = 1;
  }
  if ((*(long *)(lVar9 + 0x18) == 0) ||
     (lVar8 = *(long *)(*(long *)(lVar9 + 0x18) + 0x30), lVar8 == 0)) {
    func_0x00f78af4();
  }
  else {
    uVar5 = *(undefined8 *)(lVar8 + 0x98);
    uVar4 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar4,lVar9,uRam0000000003d5a178,uRam0000000003d2a018);
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar4,0);
    if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) {
      *(long **)(lVar8 + 0x98) = plVar6;
      *(undefined1 *)(lVar9 + 0x40) = 0;
      return plVar6;
    }
  }
  auVar10 = func_0x00f78e5c();
  plVar7 = auVar10._0_8_;
  plVar6 = plVar7;
  if ((bRam0000000003eb496c & 1) == 0) {
    plVar6 = (long *)func_0x00f78a20(0x3d6b3d8);
    bRam0000000003eb496c = 1;
  }
  lVar9 = /*STR('DC')*/ lRam0000000003d6b3d8;
  if (auVar10._8_4_ != 1) {
    plVar6 = plVar7;
    if ((bRam0000000003eb496d & 1) == 0) {
      func_0x00f78a20(0x3d3e0f8);
      plVar6 = (long *)func_0x00f78a20(0x3d6d050);
      bRam0000000003eb496d = 1;
    }
    if ((char)plVar7[8] != '\0') {
      return plVar6;
    }
    *(undefined2 *)(plVar7 + 8) = 0x101;
    plVar7[9] = lVar9;
    *(int *)(plVar7 + 10) = auVar10._8_4_;
    plVar7[0xb] = 0;
    plVar7[0xc] = 0;
    if (plVar7[4] != 0) {
      Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___RemoveAllQueuedAndShowing
                (plVar7[4],0,uRam0000000003d3e0f8);
      lVar9 = /*STR('FrontEndContext')*/ lRam0000000003d6d050;
      plVar6 = (long *)plVar7[5];
      if (plVar6 != (long *)0x0) {
        if ((char)plVar6[10] != '\0') {
          *(undefined1 *)((long)plVar7 + 0x42) = 1;
          return plVar6;
        }
        lVar8 = plVar6[10];
        if ((char)lVar8 == '\0') {
          *(undefined1 *)(plVar6 + 10) = 1;
          plVar6[8] = lVar9;
          plVar6[9] = 0;
        }
        return (long *)(ulong)((char)lVar8 == '\0');
      }
    }
    plVar6 = (long *)func_0x00f78af4();
    *(undefined1 *)(plVar6 + 8) = 0;
    return plVar6;
  }
  return plVar6;
}



// ============================================================
// RVA: 0x148b750 | Atlas.Networking.MPErrorManager.ReturnToModeSelectAndShowFatalErrorMessage
// ============================================================

ulong Atlas_Networking_MPErrorManager__ReturnToModeSelectAndShowFatalErrorMessage
                (ulong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if ((bRam0000000003eb496d & 1) == 0) {
    func_0x00f78a20(0x3d3e0f8);
    uVar3 = func_0x00f78a20(0x3d6d050);
    bRam0000000003eb496d = 1;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    return uVar3;
  }
  *(undefined2 *)(param_1 + 0x40) = 0x101;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(undefined8 *)(param_1 + 0x58) = param_4;
  *(undefined8 *)(param_1 + 0x60) = param_5;
  if (*(long *)(param_1 + 0x20) != 0) {
    Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___RemoveAllQueuedAndShowing
              (*(long *)(param_1 + 0x20),0,uRam0000000003d3e0f8);
    uVar2 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
    uVar3 = *(ulong *)(param_1 + 0x28);
    if (uVar3 != 0) {
      if (*(char *)(uVar3 + 0x50) != '\0') {
        *(undefined1 *)(param_1 + 0x42) = 1;
        return uVar3;
      }
      cVar1 = *(char *)(uVar3 + 0x50);
      if (cVar1 == '\0') {
        *(undefined1 *)(uVar3 + 0x50) = 1;
        *(undefined8 *)(uVar3 + 0x40) = uVar2;
        *(undefined8 *)(uVar3 + 0x48) = 0;
      }
      return (ulong)(cVar1 == '\0');
    }
  }
  uVar3 = func_0x00f78af4();
  *(undefined1 *)(uVar3 + 0x40) = 0;
  return uVar3;
}



// ============================================================
// RVA: 0x148b834 | Atlas.Networking.MPErrorManager.ResetErroredState
// ============================================================

void Atlas_Networking_MPErrorManager__ResetErroredState(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



// ============================================================
// RVA: 0x148b83c | Atlas.Networking.MPErrorManager..ctor
// ============================================================

void Atlas_Networking_MPErrorManager___ctor(void)

{
  return;
}



