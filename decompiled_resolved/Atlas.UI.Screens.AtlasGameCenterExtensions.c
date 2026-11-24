// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.AtlasGameCenterExtensions

// ============================================================
// RVA: 0x1469404 | Atlas.UI.Screens.AtlasGameCenterExtensions.SetGameCenterButtonShownInTopBar
// ============================================================

long * Atlas_UI_Screens_AtlasGameCenterExtensions__SetGameCenterButtonShownInTopBar
                 (long param_1,int param_2,long *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar10;
  uint extraout_w8;
  uint uVar11;
  long extraout_x9;
  long *unaff_x19;
  undefined4 uVar12;
  undefined8 unaff_x20;
  undefined8 uVar13;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar14;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar15 [16];
  
  if ((bRam0000000003eb483b & 1) == 0) {
    func_0x00f78a20(0x3d3dc90);
    func_0x00f78a20(0x3d3dca0);
    bRam0000000003eb483b = 1;
  }
  if (param_2 == 0) {
    if (param_3 == (long *)0x0) goto LAB_014694f4;
    uVar9 = 0;
    plVar4 = param_3;
code_r0x01685504:
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    plVar5 = (long *)plVar4[6];
    if (plVar5 != (long *)0x0) {
      auVar15 = (**(code **)(*plVar5 + 0x518))(plVar5,0,*(undefined8 *)(*plVar5 + 0x520));
      uVar9 = auVar15._8_8_;
      if (auVar15._0_4_ == 0) {
        return auVar15._0_8_;
      }
      plVar5 = (long *)plVar4[6];
      if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01685550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (long *)(**(code **)(*plVar5 + 0x9b8))(plVar5,*(undefined8 *)(*plVar5 + 0x9c0));
        return plVar4;
      }
    }
    func_0x00f78af4(0,uVar9);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x38) = plVar4;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) =
         &Core_Services_ServicesManager__AddMatchDataFunc;
    if ((bRam0000000003eb5a19 & 1) == 0) {
      func_0x00f78a20(0x3d1b710);
      func_0x00f78a20(0x3d24978);
      bRam0000000003eb5a19 = 1;
    }
    if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),extraout_x1,0);
    if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
      **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar4;
      return plVar4;
    }
    func_0x00f78e5c();
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3eb5000;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3d24978;
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x1;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined **)((long)register0x00000008 + -0x58) =
         &Core_Services_ServicesManager__RemoveMatchDataFunc;
    uVar9 = 0x3eb5000;
    if ((bRam0000000003eb5a1a & 1) == 0) {
      func_0x00f78a20(0x3d1b710);
      func_0x00f78a20(0x3d24978);
      bRam0000000003eb5a1a = 1;
    }
    if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),extraout_x1_00,0
                                    );
    if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
      **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar4;
      return plVar4;
    }
    lVar6 = func_0x00f78e5c();
    *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -200) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3eb5000;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d24978;
    *(undefined8 *)((long)register0x00000008 + -0x98) = extraout_x1_00;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined **)((long)register0x00000008 + -0x88) = &Core_Services_ServicesManager__DeInit;
    uVar13 = 0x3eb5000;
    if ((bRam0000000003eb5a1b & 1) == 0) {
      func_0x00f78a20(0x3d2a320);
      func_0x00f78a20(0x3d1b598);
      func_0x00f78a20(0x3d5cd70);
      bRam0000000003eb5a1b = 1;
    }
    lVar14 = *(long *)(lVar6 + 0x30);
    if (lVar14 != 0) {
      uVar13 = *(undefined8 *)(lVar14 + 0x138);
      uVar9 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar9,lVar6,uRam0000000003d5cd70,uRam0000000003d2a320);
      plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar13,uVar9,0);
      if (plVar4 != (long *)0x0) {
        if (*plVar4 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598) goto code_r0x016857bc;
      }
      *(long **)(lVar14 + 0x138) = plVar4;
      plVar4 = *(long **)(lVar6 + 0x30);
      if (plVar4 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
        *(undefined8 *)(lVar6 + 0x30) = 0;
        return plVar4;
      }
    }
    func_0x00f78af4();
code_r0x016857bc:
    lVar7 = func_0x00f78e5c();
    *(long *)((long)register0x00000008 + -0x100) = lVar14;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar9;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar13;
    *(long *)((long)register0x00000008 + -0xe8) = lVar6;
    *(undefined1 **)((long)register0x00000008 + -0xe0) =
         (undefined1 *)((long)register0x00000008 + -0x90);
    *(undefined **)((long)register0x00000008 + -0xd8) = &Core_Services_ServicesManager__EarlyUpdate;
    if ((bRam0000000003eb5a1c & 1) == 0) {
      func_0x00f78a20(0x3d24978);
      bRam0000000003eb5a1c = 1;
    }
    if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar9,0);
    plVar4 = *(long **)(lVar7 + 0x30);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x2a8))(plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
      *(undefined8 *)((long)register0x00000008 + -0xf0) =
           *(undefined8 *)((long)register0x00000008 + -0xf0);
      *(undefined8 *)((long)register0x00000008 + -0xe8) =
           *(undefined8 *)((long)register0x00000008 + -0xe8);
      *(undefined8 *)((long)register0x00000008 + -0xe0) =
           *(undefined8 *)((long)register0x00000008 + -0xe0);
      *(undefined8 *)((long)register0x00000008 + -0xd8) =
           *(undefined8 *)((long)register0x00000008 + -0xd8);
      if (pcRam0000000003ec05a0 == (code *)0x0) {
        pcRam0000000003ec05a0 =
             (code *)func_0x00f789d4(
                                    "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar4 = (long *)(*pcRam0000000003ec05a0)(uVar9);
      return plVar4;
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1685864);
    (*pcVar2)();
  }
  if (param_3 == (long *)0x0) goto LAB_014694f4;
  iVar3 = /*Core.Services.ServicesManager$$HasAccessPointSupport*/ func_0x0168546c(param_3,0);
  if (iVar3 != 0) {
    uVar9 = 0;
    unaff_x29 = &stack0xfffffffffffffff0;
    plVar4 = (long *)param_3[6];
    if (plVar4 != (long *)0x0) {
      auVar15 = (**(code **)(*plVar4 + 0x518))(plVar4,0,*(undefined8 *)(*plVar4 + 0x520));
      uVar9 = auVar15._8_8_;
      if (auVar15._0_4_ == 0) {
        return auVar15._0_8_;
      }
      plVar4 = (long *)param_3[6];
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x016854f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (long *)(**(code **)(*plVar4 + 0x9a8))
                                   (plVar4,1,1,1,*(undefined8 *)(*plVar4 + 0x9b0));
        return plVar4;
      }
    }
    unaff_x30 = &Core_Services_ServicesManager__HideAccessPoint;
    auVar15 = func_0x00f78af4(0,uVar9);
    uVar9 = auVar15._8_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    plVar4 = auVar15._0_8_;
    unaff_x19 = param_3;
    goto code_r0x01685504;
  }
  if ((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) {
LAB_014694f4:
    lVar6 = func_0x00f78af4();
    return *(long **)(lVar6 + 0x10);
  }
  plVar4 = (long *)/*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(*(long *)(param_1 + 0x40),2,uRam0000000003d3dca0);
  if (((ulong)plVar4 & 1) != 0) {
    return plVar4;
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if (plVar4 == (long *)0x0) goto LAB_014694f4;
  lVar6 = plVar4[2];
  puVar10 = puRam0000000003d3dc90;
  if (lVar6 == 0) {
code_r0x023de798:
    plVar4 = unaff_x19;
    plVar5 = (long *)func_0x00f78af4();
    lVar6 = extraout_x9;
    uVar11 = extraout_w8;
    uVar1 = (int)unaff_x20;
code_r0x023de79c:
    uVar12 = uVar1;
    *(uint *)(plVar4 + 3) = uVar11 + 1;
  }
  else {
    unaff_x20 = 2;
    uVar12 = 2;
    uVar11 = *(uint *)(plVar4 + 3);
    plVar5 = plVar4;
    uVar1 = 2;
    if (uVar11 != *(uint *)(lVar6 + 0x18)) goto code_r0x023de79c;
    puVar10 = *(undefined8 **)(*(long *)(puRam0000000003d3dc90[3] + 0xc0) + 0x60);
    plVar5 = (long *)(*(code *)*puVar10)(plVar4,uVar11 + 1);
    lVar6 = plVar4[2];
    uVar11 = *(uint *)(plVar4 + 3);
    *(uint *)(plVar4 + 3) = uVar11 + 1;
    unaff_x19 = plVar4;
    if (lVar6 == 0) goto code_r0x023de798;
  }
  if (uVar11 < *(uint *)(lVar6 + 0x18)) {
    *(undefined4 *)(lVar6 + (long)(int)uVar11 * 4 + 0x20) = uVar12;
    *(int *)((long)plVar4 + 0x1c) = *(int *)((long)plVar4 + 0x1c) + 1;
    return plVar5;
  }
  uVar9 = func_0x00f78b24();
  auVar15 = func_0x00f78ac0(uVar9,0);
  plVar4 = auVar15._8_8_;
  lVar6 = auVar15._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x48))(plVar4,0x14);
  if (lVar6 != 0) {
    pcVar2 = (code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x28);
    lVar14 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (plVar4 != (long *)0x0) {
      if (*(long *)(*plVar4 + 0x40) == *(long *)(lVar14 + 0x40)) {
        puVar8 = (undefined4 *)func_0x00f78ae4(plVar4);
        (*pcVar2)(lVar6,*puVar8,*(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0x28));
        iVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x68))(lVar6);
        return (long *)(ulong)(iVar3 - 1);
      }
      func_0x00f78e5c(plVar4,lVar14);
      goto code_r0x023de980;
    }
  }
  func_0x00f78af4();
code_r0x023de980:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x23de984);
  (*pcVar2)();
}



