// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkServicesInput

// ============================================================
// RVA: 0x165abe0 | Core.Networking.NetworkServicesInput.Read
// ============================================================

undefined8 Core_Networking_NetworkServicesInput__Read(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x165abe8 | Core.Networking.NetworkServicesInput.Clear
// ============================================================

void Core_Networking_NetworkServicesInput__Clear(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000003eb5829 & 1) == 0) {
    func_0x00f78a20(0x3d3d550);
    func_0x00f78a20(0x3d3d558);
    func_0x00f78a20(0x3d3d560);
    bRam0000000003eb5829 = 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = 0;
    lVar3 = 0x28;
    do {
      if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar1) {
        return;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + lVar3);
      if (lVar2 == 0) break;
      /*FlatBuffers.ByteBuffer$$Reset*/ func_0x016cc1bc(lVar2,0);
      if (*(long *)(param_1 + 0x10) == 0) break;
      /*System.Collections.Generic.List<NetworkServicesInput.NetworkData>$$set_Item*/ func_0x02557904(*(long *)(param_1 + 0x10),uVar1,0,lVar2,uRam0000000003d3d560);
      uVar1 = uVar1 + 1;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x165acf4 | Core.Networking.NetworkServicesInput.Init
// ============================================================

void Core_Networking_NetworkServicesInput__Init(long param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  ulong uVar12;
  undefined8 unaff_x23;
  undefined8 uVar13;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar14;
  undefined *unaff_x30;
  
  puVar3 = &stack0xffffffffffffffc0;
  puVar14 = &stack0xfffffffffffffff0;
  uVar10 = 0x3d1b710;
  uVar5 = 0x3d5ad08;
  uVar13 = 0x3d2a618;
  if ((bRam0000000003eb582a & 1) == 0) {
    func_0x00f78a20(0x3d2a618);
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d5ad08);
    bRam0000000003eb582a = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710);
  /*System.Action<string, uint, IntPtr, uint, bool>$$.ctor*/ func_0x01e75bc8(uVar4,param_1,uRam0000000003d5ad08,uRam0000000003d2a618);
  if (param_2 == 0) {
    unaff_x30 = &Core_Networking_NetworkServicesInput__InitList;
    lVar8 = func_0x00f78af4();
    unaff_x20 = 0;
  }
  else {
    /*Core.Services.ServicesManager$$AddMatchDataFunc*/ func_0x01685564(param_2,uVar4,0);
    *(long *)(param_1 + 0x20) = param_2;
    puVar3 = (undefined1 *)register0x00000008;
    lVar8 = param_1;
    param_1 = unaff_x19;
    uVar4 = unaff_x21;
    uVar5 = unaff_x22;
    uVar13 = unaff_x23;
    uVar10 = unaff_x24;
    puVar14 = unaff_x29;
  }
  *(undefined8 *)(puVar3 + -0x30) = uVar5;
  *(undefined8 *)(puVar3 + -0x28) = uVar4;
  *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
  *(long *)(puVar3 + -0x18) = param_1;
  *(undefined1 **)(puVar3 + -0x10) = puVar14;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  if ((bRam0000000003eb582d & 1) == 0) {
    func_0x00f78a20(0x3d3d540);
    func_0x00f78a20(0x3d3d538);
    func_0x00f78a20(0x3d1e228);
    bRam0000000003eb582d = 1;
  }
  uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkServicesInput.NetworkData>_TypeInfo*/ uRam0000000003d1e228);
  uVar12 = 0x200;
  /*System.Collections.Generic.List<NetworkServicesInput.NetworkData>$$.ctor*/ func_0x02557064(uVar5,0x200,uRam0000000003d3d538);
  *(undefined8 *)(lVar8 + 0x10) = uVar5;
  while( true ) {
    *(undefined8 *)(puVar3 + -0x40) = 0;
    *(undefined8 *)(puVar3 + -0x38) = 0;
    /*Core.Networking.NetworkServicesInput.NetworkData$$Init*/ func_0x0165b0a0(puVar3 + -0x40);
    if (*(long *)(lVar8 + 0x10) == 0) break;
    /*System.Collections.Generic.List<NetworkServicesInput.NetworkData>$$Add*/ func_0x02557c60(*(long *)(lVar8 + 0x10),*(undefined8 *)(puVar3 + -0x40),
                    *(undefined8 *)(puVar3 + -0x38),uRam0000000003d3d540);
    uVar1 = (int)uVar12 - 1;
    uVar12 = (ulong)uVar1;
    if (uVar1 == 0) {
      return;
    }
  }
  lVar6 = func_0x00f78af4();
  *(undefined8 *)(puVar3 + -0x80) = uVar10;
  *(undefined8 *)(puVar3 + -0x78) = uVar13;
  *(ulong *)(puVar3 + -0x70) = uVar12;
  *(undefined8 *)(puVar3 + -0x68) = 0x3d3d540;
  *(undefined8 *)(puVar3 + -0x60) = uVar5;
  *(long *)(puVar3 + -0x58) = lVar8;
  *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x48) = &Core_Networking_NetworkServicesInput__DeInit;
  if ((bRam0000000003eb582b & 1) == 0) {
    func_0x00f78a20(0x3d2a618);
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d5ad08);
    bRam0000000003eb582b = 1;
  }
  Core_Networking_NetworkServicesInput__Clear(lVar6);
  if (*(long *)(lVar6 + 0x20) == 0) {
    return;
  }
  uVar4 = func_0x00f78aec(/*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710);
  /*System.Action<string, uint, IntPtr, uint, bool>$$.ctor*/ func_0x01e75bc8(uVar4,lVar6,uRam0000000003d5ad08,uRam0000000003d2a618);
  uVar10 = *(undefined8 *)(puVar3 + -0x70);
  uVar5 = *(undefined8 *)(puVar3 + -0x80);
  uVar13 = *(undefined8 *)(puVar3 + -0x78);
  *(undefined8 *)(puVar3 + -0x70) = uVar10;
  *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(puVar3 + -0x68);
  *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
  *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
  *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x50);
  *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x48);
  uVar11 = 0x3eb5000;
  if ((bRam0000000003eb5a1a & 1) == 0) {
    func_0x00f78a20(0x3d1b710,uVar4,0);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1a = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),uVar4,0);
  if ((plVar7 == (long *)0x0) || (*plVar7 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
    **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar7;
    return;
  }
  lVar8 = func_0x00f78e5c();
  *(undefined8 *)(puVar3 + -0xc0) = unaff_x26;
  *(undefined8 *)(puVar3 + -0xb8) = unaff_x25;
  *(undefined8 *)(puVar3 + -0xb0) = uVar5;
  *(undefined8 *)(puVar3 + -0xa8) = uVar13;
  *(undefined8 *)(puVar3 + -0xa0) = uVar10;
  *(undefined8 *)(puVar3 + -0x98) = 0x3eb5000;
  *(undefined8 *)(puVar3 + -0x90) = 0x3d24978;
  *(undefined8 *)(puVar3 + -0x88) = uVar4;
  *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x50;
  *(undefined **)(puVar3 + -0x78) = &Core_Services_ServicesManager__DeInit;
  uVar10 = 0x3eb5000;
  if ((bRam0000000003eb5a1b & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5cd70);
    bRam0000000003eb5a1b = 1;
  }
  lVar6 = *(long *)(lVar8 + 0x30);
  if (lVar6 != 0) {
    uVar10 = *(undefined8 *)(lVar6 + 0x138);
    uVar11 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar11,lVar8,uRam0000000003d5cd70,uRam0000000003d2a320);
    plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar11,0);
    if (plVar7 != (long *)0x0) {
      if (*plVar7 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598) goto code_r0x016857bc;
    }
    *(long **)(lVar6 + 0x138) = plVar7;
    plVar7 = *(long **)(lVar8 + 0x30);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      *(undefined8 *)(lVar8 + 0x30) = 0;
      return;
    }
  }
  func_0x00f78af4();
code_r0x016857bc:
  lVar9 = func_0x00f78e5c();
  *(long *)(puVar3 + -0xf0) = lVar6;
  *(undefined8 *)(puVar3 + -0xe8) = uVar11;
  *(undefined8 *)(puVar3 + -0xe0) = uVar10;
  *(long *)(puVar3 + -0xd8) = lVar8;
  *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x80;
  *(undefined **)(puVar3 + -200) = &Core_Services_ServicesManager__EarlyUpdate;
  if ((bRam0000000003eb5a1c & 1) == 0) {
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1c = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar10,0);
  plVar7 = *(long **)(lVar9 + 0x30);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x2a8))(plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
    *(undefined8 *)(puVar3 + -0xe0) = *(undefined8 *)(puVar3 + -0xe0);
    *(undefined8 *)(puVar3 + -0xd8) = *(undefined8 *)(puVar3 + -0xd8);
    *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
    *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar10);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1685864);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x165adb0 | Core.Networking.NetworkServicesInput.InitList
// ============================================================

void Core_Networking_NetworkServicesInput__InitList(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb582d & 1) == 0) {
    func_0x00f78a20(0x3d3d540);
    func_0x00f78a20(0x3d3d538);
    func_0x00f78a20(0x3d1e228);
    bRam0000000003eb582d = 1;
  }
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkServicesInput.NetworkData>_TypeInfo*/ uRam0000000003d1e228);
  iVar6 = 0x200;
  /*System.Collections.Generic.List<NetworkServicesInput.NetworkData>$$.ctor*/ func_0x02557064(uVar2,0x200,uRam0000000003d3d538);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  while( true ) {
    uStack_40 = 0;
    uStack_38 = 0;
    /*Core.Networking.NetworkServicesInput.NetworkData$$Init*/ func_0x0165b0a0(&uStack_40);
    if (*(long *)(param_1 + 0x10) == 0) break;
    /*System.Collections.Generic.List<NetworkServicesInput.NetworkData>$$Add*/ func_0x02557c60(*(long *)(param_1 + 0x10),uStack_40,uStack_38,uRam0000000003d3d540);
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      return;
    }
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb582b & 1) == 0) {
    func_0x00f78a20(0x3d2a618);
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d5ad08);
    bRam0000000003eb582b = 1;
  }
  Core_Networking_NetworkServicesInput__Clear(lVar3);
  if (*(long *)(lVar3 + 0x20) == 0) {
    return;
  }
  uVar2 = func_0x00f78aec(/*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710);
  /*System.Action<string, uint, IntPtr, uint, bool>$$.ctor*/ func_0x01e75bc8(uVar2,lVar3,uRam0000000003d5ad08,uRam0000000003d2a618);
  if ((bRam0000000003eb5a1a & 1) == 0) {
    func_0x00f78a20(0x3d1b710,uVar2,0);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1a = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),uVar2,0);
  if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
    **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar4;
    return;
  }
  lVar3 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1b & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5cd70);
    bRam0000000003eb5a1b = 1;
  }
  lVar7 = *(long *)(lVar3 + 0x30);
  if (lVar7 != 0) {
    uVar5 = *(undefined8 *)(lVar7 + 0x138);
    uVar2 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,lVar3,uRam0000000003d5cd70,uRam0000000003d2a320);
    plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar2,0);
    if (plVar4 != (long *)0x0) {
      if (*plVar4 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598) goto code_r0x016857bc;
    }
    *(long **)(lVar7 + 0x138) = plVar4;
    plVar4 = *(long **)(lVar3 + 0x30);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      *(undefined8 *)(lVar3 + 0x30) = 0;
      return;
    }
  }
  func_0x00f78af4();
code_r0x016857bc:
  lVar3 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1c & 1) == 0) {
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1c = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar2,0);
  plVar4 = *(long **)(lVar3 + 0x30);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x2a8))(plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar2);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1685864);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x165ae78 | Core.Networking.NetworkServicesInput.DeInit
// ============================================================

void Core_Networking_NetworkServicesInput__DeInit(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000003eb582b & 1) == 0) {
    func_0x00f78a20(0x3d2a618);
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d5ad08);
    bRam0000000003eb582b = 1;
  }
  Core_Networking_NetworkServicesInput__Clear(param_1);
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  uVar2 = func_0x00f78aec(/*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710);
  /*System.Action<string, uint, IntPtr, uint, bool>$$.ctor*/ func_0x01e75bc8(uVar2,param_1,uRam0000000003d5ad08,uRam0000000003d2a618);
  if ((bRam0000000003eb5a1a & 1) == 0) {
    func_0x00f78a20(0x3d1b710,uVar2,0);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1a = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),uVar2,0);
  if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
    **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar3;
    return;
  }
  lVar4 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1b & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5cd70);
    bRam0000000003eb5a1b = 1;
  }
  lVar6 = *(long *)(lVar4 + 0x30);
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(lVar6 + 0x138);
    uVar2 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,lVar4,uRam0000000003d5cd70,uRam0000000003d2a320);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar2,0);
    if (plVar3 != (long *)0x0) {
      if (*plVar3 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598) goto code_r0x016857bc;
    }
    *(long **)(lVar6 + 0x138) = plVar3;
    plVar3 = *(long **)(lVar4 + 0x30);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
      *(undefined8 *)(lVar4 + 0x30) = 0;
      return;
    }
  }
  func_0x00f78af4();
code_r0x016857bc:
  lVar4 = func_0x00f78e5c();
  if ((bRam0000000003eb5a1c & 1) == 0) {
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1c = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar2,0);
  plVar3 = *(long **)(lVar4 + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar2);
    return;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1685864);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x165af40 | Core.Networking.NetworkServicesInput.OnReceive
// ============================================================

/* WARNING: Possible PIC construction at 0x0165aff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029202dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165ae40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029202e0) */
/* WARNING: Removing unreachable block (ram,0x029202e4) */
/* WARNING: Removing unreachable block (ram,0x0292030c) */
/* WARNING: Removing unreachable block (ram,0x02920300) */
/* WARNING: Removing unreachable block (ram,0x02938710) */
/* WARNING: Removing unreachable block (ram,0x0293875c) */
/* WARNING: Removing unreachable block (ram,0x02938764) */
/* WARNING: Removing unreachable block (ram,0x02938778) */
/* WARNING: Removing unreachable block (ram,0x02938714) */
/* WARNING: Removing unreachable block (ram,0x0293871c) */
/* WARNING: Removing unreachable block (ram,0x02938730) */
/* WARNING: Removing unreachable block (ram,0x02938784) */
/* WARNING: Removing unreachable block (ram,0x0165b074) */
/* WARNING: Removing unreachable block (ram,0x0165b080) */
/* WARNING: Removing unreachable block (ram,0x016cd07c) */
/* WARNING: Removing unreachable block (ram,0x016cd0a4) */
/* WARNING: Removing unreachable block (ram,0x016cd0c4) */
/* WARNING: Removing unreachable block (ram,0x016cd158) */
/* WARNING: Removing unreachable block (ram,0x016cd0c8) */
/* WARNING: Removing unreachable block (ram,0x016cd0dc) */
/* WARNING: Removing unreachable block (ram,0x016cd0e4) */
/* WARNING: Removing unreachable block (ram,0x016cd0ec) */
/* WARNING: Removing unreachable block (ram,0x016cd18c) */
/* WARNING: Removing unreachable block (ram,0x016cd1bc) */
/* WARNING: Removing unreachable block (ram,0x016cd0f8) */
/* WARNING: Removing unreachable block (ram,0x016cd1d4) */
/* WARNING: Removing unreachable block (ram,0x016cd204) */
/* WARNING: Removing unreachable block (ram,0x016cd218) */
/* WARNING: Removing unreachable block (ram,0x016cd21c) */
/* WARNING: Removing unreachable block (ram,0x016cd228) */
/* WARNING: Removing unreachable block (ram,0x016cd23c) */
/* WARNING: Removing unreachable block (ram,0x016cd244) */
/* WARNING: Removing unreachable block (ram,0x016cd24c) */
/* WARNING: Removing unreachable block (ram,0x016cd258) */
/* WARNING: Removing unreachable block (ram,0x016cd29c) */
/* WARNING: Removing unreachable block (ram,0x016cd2a0) */
/* WARNING: Removing unreachable block (ram,0x016cd33c) */
/* WARNING: Removing unreachable block (ram,0x016cd3cc) */
/* WARNING: Removing unreachable block (ram,0x016cd494) */
/* WARNING: Removing unreachable block (ram,0x016cd4b8) */
/* WARNING: Removing unreachable block (ram,0x016cd4c0) */
/* WARNING: Removing unreachable block (ram,0x016cd4c4) */
/* WARNING: Removing unreachable block (ram,0x016cd6b0) */
/* WARNING: Removing unreachable block (ram,0x016cd4d4) */
/* WARNING: Removing unreachable block (ram,0x016cd270) */
/* WARNING: Removing unreachable block (ram,0x029387b8) */
/* WARNING: Removing unreachable block (ram,0x02938848) */
/* WARNING: Removing unreachable block (ram,0x029387d0) */
/* WARNING: Removing unreachable block (ram,0x02938868) */
/* WARNING: Removing unreachable block (ram,0x02938884) */
/* WARNING: Removing unreachable block (ram,0x029387d8) */
/* WARNING: Removing unreachable block (ram,0x029388b0) */
/* WARNING: Removing unreachable block (ram,0x029387e0) */
/* WARNING: Removing unreachable block (ram,0x029388e8) */
/* WARNING: Removing unreachable block (ram,0x029387e8) */
/* WARNING: Removing unreachable block (ram,0x02938920) */
/* WARNING: Removing unreachable block (ram,0x02938954) */
/* WARNING: Removing unreachable block (ram,0x029387f0) */
/* WARNING: Removing unreachable block (ram,0x0293880c) */
/* WARNING: Removing unreachable block (ram,0x02938820) */
/* WARNING: Removing unreachable block (ram,0x02938970) */
/* WARNING: Removing unreachable block (ram,0x029389a8) */
/* WARNING: Removing unreachable block (ram,0x029389e8) */
/* WARNING: Removing unreachable block (ram,0x029389fc) */
/* WARNING: Removing unreachable block (ram,0x02938a08) */
/* WARNING: Removing unreachable block (ram,0x02938a10) */
/* WARNING: Removing unreachable block (ram,0x02938a14) */
/* WARNING: Removing unreachable block (ram,0x02938650) */
/* WARNING: Removing unreachable block (ram,0x02938688) */
/* WARNING: Removing unreachable block (ram,0x029386a8) */
/* WARNING: Removing unreachable block (ram,0x029386b0) */
/* WARNING: Removing unreachable block (ram,0x029386dc) */
/* WARNING: Removing unreachable block (ram,0x029387a8) */
/* WARNING: Removing unreachable block (ram,0x029387ac) */
/* WARNING: Removing unreachable block (ram,0x029386f8) */
/* WARNING: Removing unreachable block (ram,0x02938834) */
/* WARNING: Removing unreachable block (ram,0x016cd110) */
/* WARNING: Removing unreachable block (ram,0x016cd128) */
/* WARNING: Removing unreachable block (ram,0x016cd130) */
/* WARNING: Removing unreachable block (ram,0x016cd134) */
/* WARNING: Removing unreachable block (ram,0x02b00b6c) */
/* WARNING: Removing unreachable block (ram,0x02b00ba4) */
/* WARNING: Removing unreachable block (ram,0x02b00bb8) */
/* WARNING: Removing unreachable block (ram,0x02b00bc4) */
/* WARNING: Removing unreachable block (ram,0x02b00bcc) */
/* WARNING: Removing unreachable block (ram,0x02b00bd0) */
/* WARNING: Removing unreachable block (ram,0x00f8f85c) */
/* WARNING: Removing unreachable block (ram,0x0330349c) */
/* WARNING: Removing unreachable block (ram,0x0165aff4) */
/* WARNING: Removing unreachable block (ram,0x0165affc) */
/* WARNING: Removing unreachable block (ram,0x02557904) */
/* WARNING: Removing unreachable block (ram,0x02557930) */
/* WARNING: Removing unreachable block (ram,0x02557938) */
/* WARNING: Removing unreachable block (ram,0x02557970) */
/* WARNING: Removing unreachable block (ram,0x02557940) */
/* WARNING: Removing unreachable block (ram,0x02557974) */
/* WARNING: Removing unreachable block (ram,0x025579a8) */
/* WARNING: Removing unreachable block (ram,0x025579b0) */
/* WARNING: Removing unreachable block (ram,0x025579c0) */
/* WARNING: Removing unreachable block (ram,0x025579c8) */
/* WARNING: Removing unreachable block (ram,0x025579e0) */
/* WARNING: Removing unreachable block (ram,0x025579ec) */
/* WARNING: Removing unreachable block (ram,0x025579fc) */
/* WARNING: Removing unreachable block (ram,0x02557a04) */
/* WARNING: Removing unreachable block (ram,0x02557a14) */
/* WARNING: Removing unreachable block (ram,0x02557a1c) */
/* WARNING: Removing unreachable block (ram,0x025579e4) */
/* WARNING: Removing unreachable block (ram,0x025579d8) */
/* WARNING: Removing unreachable block (ram,0x02557a30) */
/* WARNING: Removing unreachable block (ram,0x0255794c) */
/* WARNING: Removing unreachable block (ram,0x0165ae44) */
/* WARNING: Removing unreachable block (ram,0x0165ae74) */
/* WARNING: Removing unreachable block (ram,0x0165ae9c) */
/* WARNING: Removing unreachable block (ram,0x0165aec8) */
/* WARNING: Removing unreachable block (ram,0x0165af2c) */
/* WARNING: Removing unreachable block (ram,0x0165aed8) */
/* WARNING: Removing unreachable block (ram,0x01685618) */
/* WARNING: Removing unreachable block (ram,0x01685640) */
/* WARNING: Removing unreachable block (ram,0x01685660) */
/* WARNING: Removing unreachable block (ram,0x0168566c) */
/* WARNING: Removing unreachable block (ram,0x01685674) */
/* WARNING: Removing unreachable block (ram,0x0168567c) */
/* WARNING: Removing unreachable block (ram,0x0168569c) */
/* WARNING: Removing unreachable block (ram,0x016856c8) */
/* WARNING: Removing unreachable block (ram,0x016856f4) */
/* WARNING: Removing unreachable block (ram,0x01685720) */
/* WARNING: Removing unreachable block (ram,0x01685728) */
/* WARNING: Removing unreachable block (ram,0x01685774) */
/* WARNING: Removing unreachable block (ram,0x01685784) */
/* WARNING: Removing unreachable block (ram,0x016857b8) */
/* WARNING: Removing unreachable block (ram,0x016857bc) */
/* WARNING: Removing unreachable block (ram,0x016857e8) */
/* WARNING: Removing unreachable block (ram,0x016857fc) */
/* WARNING: Removing unreachable block (ram,0x01685808) */
/* WARNING: Removing unreachable block (ram,0x01685810) */
/* WARNING: Removing unreachable block (ram,0x01685818) */
/* WARNING: Removing unreachable block (ram,0x0168585c) */
/* WARNING: Removing unreachable block (ram,0x01685834) */
/* WARNING: Removing unreachable block (ram,0x03250f64) */
/* WARNING: Removing unreachable block (ram,0x03250f80) */
/* WARNING: Removing unreachable block (ram,0x03250f94) */
/* WARNING: Removing unreachable block (ram,0x01685790) */
/* WARNING: Removing unreachable block (ram,0x016856b4) */
/* WARNING: Removing unreachable block (ram,0x0165ae4c) */
/* WARNING: Removing unreachable block (ram,0x0165ae60) */

long * Core_Networking_NetworkServicesInput__OnReceive
                 (long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined8 **ppuVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  undefined1 *puVar23;
  undefined1 **ppuVar24;
  code *pcVar25;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  char acStack_50 [8];
  undefined8 uStack_48;
  
  pcVar11 = acStack_50;
  plVar10 = param_1;
  puVar17 = param_3;
  puVar20 = param_4;
  if ((bRam0000000003eb582c & 1) == 0) {
    func_0x00f78a20(0x3d3d550);
    func_0x00f78a20(0x3d3d558);
    plVar10 = (long *)func_0x00f78a20(0x3d3d560);
    bRam0000000003eb582c = 1;
  }
  uVar1 = (int)param_1[3] + 1;
  uVar21 = (ulong)uVar1;
  *(uint *)(param_1 + 3) = uVar1;
  lVar22 = param_1[2];
  if (lVar22 == 0) {
    puVar26 = &Core_Networking_NetworkServicesInput_NetworkData__PopulateData;
    auVar27 = func_0x00f78af4();
    puVar16 = auVar27._8_8_;
    pcVar11 = auVar27._0_8_;
  }
  else {
    if ((int)*(uint *)(lVar22 + 0x18) <= (int)uVar1) {
      return plVar10;
    }
    if (*(uint *)(lVar22 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    acStack_50[0] = '\0';
    acStack_50[1] = '\0';
    acStack_50[2] = '\0';
    acStack_50[3] = '\0';
    acStack_50[4] = '\0';
    acStack_50[5] = '\0';
    acStack_50[6] = '\0';
    acStack_50[7] = '\0';
    uStack_48 = *(undefined8 *)(*(long *)(lVar22 + 0x10) + (long)(int)uVar1 * 0x10 + 0x28);
    puVar26 = (undefined *)0x165aff4;
    puVar16 = param_4;
    puVar17 = param_5;
    puVar20 = param_3;
  }
  ppuVar7 = &puStack_80;
  puStack_80 = param_4;
  puStack_78 = param_3;
  puStack_70 = param_5;
  plStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar26;
  ppuVar24 = &puStack_60;
  lVar12 = *(long *)(pcVar11 + 8);
  if (lVar12 == 0) {
    puVar26 = &Core_Networking_NetworkServicesInput_NetworkData__Init;
    puVar13 = (undefined8 *)func_0x00f78af4();
    while( true ) {
      *(char **)((long)ppuVar7 + -0x30) = pcVar11;
      *(undefined8 **)((long)ppuVar7 + -0x28) = param_3;
      *(undefined8 **)((long)ppuVar7 + -0x20) = param_5;
      *(long **)((long)ppuVar7 + -0x18) = param_1;
      *(undefined1 ***)((long)ppuVar7 + -0x10) = ppuVar24;
      *(undefined **)((long)ppuVar7 + -8) = puVar26;
      if ((bRam0000000003eb5876 & 1) == 0) {
        func_0x00f78a20(0x3d203b0);
        bRam0000000003eb5876 = 1;
      }
      uVar14 = func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
      /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbfd8(uVar14,0x400,0);
      puVar13[1] = uVar14;
      puVar17 = *(undefined8 **)((long)ppuVar7 + -0x20);
      puVar16 = *(undefined8 **)((long)ppuVar7 + -0x18);
      pcVar11 = *(char **)((long)ppuVar7 + -0x30);
      puVar20 = *(undefined8 **)((long)ppuVar7 + -0x28);
      *(undefined8 *)((long)ppuVar7 + -0x10) = *(undefined8 *)((long)ppuVar7 + -0x10);
      *(undefined8 *)((long)ppuVar7 + -8) = *(undefined8 *)((long)ppuVar7 + -8);
      *puVar13 = 0;
      lVar12 = puVar13[1];
      if (lVar12 != 0) break;
      auVar27 = func_0x00f78af4();
      lVar12 = auVar27._8_8_;
      plVar10 = auVar27._0_8_;
      puVar6 = (undefined1 *)((long)ppuVar7 + -0x50);
      *(long *)((long)ppuVar7 + -0x50) = lVar22;
      *(ulong *)((long)ppuVar7 + -0x48) = uVar21;
      *(char **)((long)ppuVar7 + -0x40) = pcVar11;
      *(undefined8 **)((long)ppuVar7 + -0x38) = puVar20;
      *(undefined8 **)((long)ppuVar7 + -0x30) = puVar17;
      *(undefined8 **)((long)ppuVar7 + -0x28) = puVar16;
      *(undefined1 **)((long)ppuVar7 + -0x20) = (undefined1 *)((long)ppuVar7 + -0x10);
      *(code **)((long)ppuVar7 + -0x18) = Core_Networking_NetworkServicesInput__Init;
      puVar23 = (undefined1 *)((long)ppuVar7 + -0x20);
      lVar22 = 0x3d1b710;
      uVar14 = 0x3d5ad08;
      uVar21 = 0x3d2a618;
      if ((bRam0000000003eb582a & 1) == 0) {
        func_0x00f78a20(0x3d2a618);
        func_0x00f78a20(0x3d1b710);
        func_0x00f78a20(0x3d5ad08);
        bRam0000000003eb582a = 1;
      }
      uVar9 = func_0x00f78aec(/*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ uRam0000000003d1b710);
      /*System.Action<string, uint, IntPtr, uint, bool>$$.ctor*/ func_0x01e75bc8(uVar9,plVar10,uRam0000000003d5ad08,uRam0000000003d2a618);
      if (lVar12 == 0) {
        pcVar25 = Core_Networking_NetworkServicesInput__InitList;
        param_1 = (long *)func_0x00f78af4();
        uVar19 = 0;
      }
      else {
        /*Core.Services.ServicesManager$$AddMatchDataFunc*/ func_0x01685564(lVar12,uVar9,0);
        plVar10[4] = lVar12;
        puVar23 = *(undefined1 **)((long)ppuVar7 + -0x20);
        pcVar25 = *(code **)((long)ppuVar7 + -0x18);
        uVar19 = *(undefined8 *)((long)ppuVar7 + -0x30);
        uVar14 = *(undefined8 *)((long)ppuVar7 + -0x40);
        uVar9 = *(undefined8 *)((long)ppuVar7 + -0x38);
        puVar6 = (undefined1 *)((long)ppuVar7 + -0x10);
        lVar22 = *(long *)((long)ppuVar7 + -0x50);
        uVar21 = *(ulong *)((long)ppuVar7 + -0x48);
        param_1 = plVar10;
        plVar10 = *(long **)((long)ppuVar7 + -0x28);
      }
      ppuVar7 = (undefined8 **)(puVar6 + -0x40);
      puVar13 = (undefined8 *)(puVar6 + -0x40);
      *(undefined8 *)(puVar6 + -0x30) = uVar14;
      *(undefined8 *)(puVar6 + -0x28) = uVar9;
      *(undefined8 *)(puVar6 + -0x20) = uVar19;
      *(long **)(puVar6 + -0x18) = plVar10;
      *(undefined1 **)(puVar6 + -0x10) = puVar23;
      *(code **)(puVar6 + -8) = pcVar25;
      ppuVar24 = (undefined1 **)(puVar6 + -0x10);
      if ((bRam0000000003eb582d & 1) == 0) {
        func_0x00f78a20(0x3d3d540);
        func_0x00f78a20(0x3d3d538);
        func_0x00f78a20(0x3d1e228);
        bRam0000000003eb582d = 1;
      }
      param_3 = (undefined8 *)0x3d3d540;
      param_5 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<NetworkServicesInput.NetworkData>_TypeInfo*/ uRam0000000003d1e228);
      pcVar11 = section_000001f8.sectname + 8;
      /*System.Collections.Generic.List<NetworkServicesInput.NetworkData>$$.ctor*/ func_0x02557064(param_5,0x200,uRam0000000003d3d538);
      param_1[2] = (long)param_5;
      *(undefined8 *)(puVar6 + -0x40) = 0;
      *(undefined8 *)(puVar6 + -0x38) = 0;
      puVar26 = (undefined *)0x165ae44;
    }
    ppuVar24 = *(undefined1 ***)((long)ppuVar7 + -0x10);
    puVar26 = *(undefined **)((long)ppuVar7 + -8);
  }
  else {
    puVar26 = &UNK_0165b074;
    ppuVar7 = &puStack_80;
  }
  *(undefined1 ***)((long)ppuVar7 + -0x10) = ppuVar24;
  *(undefined **)((long)ppuVar7 + -8) = puVar26;
  *(undefined4 *)(lVar12 + 0x18) = 0;
  lVar22 = *(long *)(lVar12 + 0x10);
  if (lVar22 == 0) {
    lVar22 = func_0x00f78af4(lVar12,0);
    *(char **)((long)ppuVar7 + -0x40) = pcVar11;
    *(undefined8 **)((long)ppuVar7 + -0x38) = puVar20;
    *(undefined8 **)((long)ppuVar7 + -0x30) = puVar17;
    *(undefined8 **)((long)ppuVar7 + -0x28) = puVar16;
    *(undefined1 **)((long)ppuVar7 + -0x20) = (undefined1 *)((long)ppuVar7 + -0x10);
    *(undefined **)((long)ppuVar7 + -0x18) = &FlatBuffers_ByteBuffer__Duplicate;
    if ((bRam0000000003eb5cc9 & 1) == 0) {
      func_0x00f78a20(0x3d203b0);
      bRam0000000003eb5cc9 = 1;
    }
    uVar14 = *(undefined8 *)(lVar22 + 0x10);
    uVar3 = *(undefined4 *)(lVar22 + 0x18);
    plVar10 = (long *)func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
    /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbee4(plVar10,uVar14,uVar3);
    return plVar10;
  }
  puVar13 = *(undefined8 **)(lVar22 + 0x10);
  iVar2 = *(int *)(lVar22 + 0x18);
  *(char **)((long)ppuVar7 + -0x30) = pcVar11;
  *(undefined8 **)((long)ppuVar7 + -0x28) = puVar20;
  *(undefined8 **)((long)ppuVar7 + -0x20) = puVar17;
  *(undefined8 **)((long)ppuVar7 + -0x18) = puVar16;
  *(undefined8 *)((long)ppuVar7 + -0x10) = *(undefined8 *)((long)ppuVar7 + -0x10);
  *(undefined8 *)((long)ppuVar7 + -8) = *(undefined8 *)((long)ppuVar7 + -8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x00f78a24(0x3d1fcf0,0,iVar2,0);
    uVar9 = func_0x00f78aec();
    uVar14 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar9,uVar14);
  }
  else {
    if (iVar2 < 0) {
      func_0x00f78a24(0x3d22738,0,iVar2,0);
      uVar9 = func_0x00f78aec();
      uVar14 = 0x3d7a288;
    }
    else {
      puVar20 = (undefined8 *)0x0;
      iVar8 = func_0x00f807d0(puVar13,0);
      puVar17 = puVar13;
      if (iVar8 < 1) {
        uVar1 = -iVar8;
        puVar20 = (undefined8 *)(ulong)uVar1;
        iVar8 = /*System.Array$$get_Length*/ func_0x0292ae44(puVar13);
        if ((int)uVar1 <= iVar8 - iVar2) {
          *(undefined8 *)((long)ppuVar7 + -0x30) = *(undefined8 *)((long)ppuVar7 + -0x30);
          *(undefined8 *)((long)ppuVar7 + -0x28) = *(undefined8 *)((long)ppuVar7 + -0x28);
          *(undefined8 *)((long)ppuVar7 + -0x20) = *(undefined8 *)((long)ppuVar7 + -0x20);
          *(undefined8 *)((long)ppuVar7 + -0x18) = *(undefined8 *)((long)ppuVar7 + -0x18);
          *(undefined8 *)((long)ppuVar7 + -0x10) = *(undefined8 *)((long)ppuVar7 + -0x10);
          *(undefined8 *)((long)ppuVar7 + -8) = *(undefined8 *)((long)ppuVar7 + -8);
          uVar14 = func_0x00f76cf0(*puVar13);
          uVar9 = func_0x00faf4d8(puVar13,uVar14,(long)(int)uVar1);
          plVar10 = (long *)_bzero(uVar9,(long)((int)uVar14 * iVar2));
          return plVar10;
        }
        func_0x00f78a24(0x3d22738);
        uVar9 = func_0x00f78aec();
        uVar14 = 0x3d79a88;
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar9 = func_0x00f78aec();
        uVar14 = 0x3d79a90;
      }
    }
    uVar14 = func_0x00f78a24(uVar14);
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar9,uVar14,0);
  }
  uVar14 = func_0x00f78a24(0x3d514d8);
  plVar10 = (long *)func_0x00f78ac0(uVar9,uVar14);
  *(undefined8 **)((long)ppuVar7 + -0x50) = puVar17;
  *(undefined8 *)((long)ppuVar7 + -0x48) = uVar9;
  *(undefined1 **)((long)ppuVar7 + -0x40) = (undefined1 *)((long)ppuVar7 + -0x10);
  *(undefined **)((long)ppuVar7 + -0x38) = &Mono_Security_Cryptography_ARC4Managed__get_Key;
  if ((bRam0000000003eb8e74 & 1) == 0) {
    func_0x00f78a20(0x3d1eda0);
    bRam0000000003eb8e74 = 1;
  }
  plVar15 = (long *)plVar10[4];
  if (plVar15 == (long *)0x0) {
    (**(code **)(*plVar10 + 0x2b8))(plVar10,*(undefined8 *)(*plVar10 + 0x2c0));
    plVar15 = (long *)plVar10[4];
    if (plVar15 == (long *)0x0) {
      puVar26 = &System_Array__Clone;
      plVar15 = (long *)func_0x00f78af4();
      goto DAT_00f7ffc4;
    }
  }
  puVar26 = &UNK_029202e0;
DAT_00f7ffc4:
  *(char **)((long)ppuVar7 + -0x80) = pcVar11;
  *(undefined8 **)((long)ppuVar7 + -0x78) = puVar20;
  *(undefined8 *)((long)ppuVar7 + -0x70) = 0x3eb8000;
  *(long **)((long)ppuVar7 + -0x68) = plVar10;
  *(undefined1 **)((long)ppuVar7 + -0x60) = (undefined1 *)((long)ppuVar7 + -0x40);
  *(undefined **)((long)ppuVar7 + -0x58) = puVar26;
  lVar22 = *plVar15;
  if (*(char *)(lVar22 + 0x12e) != '\0') {
    *(undefined8 *)((long)ppuVar7 + -0x80) = *(undefined8 *)((long)ppuVar7 + -0x80);
    *(undefined8 *)((long)ppuVar7 + -0x78) = *(undefined8 *)((long)ppuVar7 + -0x78);
    *(undefined8 *)((long)ppuVar7 + -0x70) = *(undefined8 *)((long)ppuVar7 + -0x70);
    *(undefined8 *)((long)ppuVar7 + -0x68) = *(undefined8 *)((long)ppuVar7 + -0x68);
    *(undefined8 *)((long)ppuVar7 + -0x60) = *(undefined8 *)((long)ppuVar7 + -0x60);
    *(undefined8 *)((long)ppuVar7 + -0x58) = *(undefined8 *)((long)ppuVar7 + -0x58);
    lVar22 = *plVar15;
    uVar21 = (ulong)*(uint *)(lVar22 + 0x100);
    if (plVar15[2] == 0) {
      uVar1 = *(uint *)(plVar15 + 3);
      *(ulong *)((long)ppuVar7 + -0x98) = (ulong)uVar1;
      plVar10 = (long *)func_0x00faf0d0(lVar22,(undefined1 *)((long)ppuVar7 + -0x98),0);
      _memcpy(plVar10 + 4,plVar15 + 4,uVar1 * uVar21);
    }
    else {
      func_0x00901764((undefined1 *)((long)ppuVar7 + -0x98),*(undefined1 *)(lVar22 + 0x12e));
      func_0x00901764((undefined1 *)((long)ppuVar7 + -0xb0),*(undefined1 *)(lVar22 + 0x12e));
      if (*(char *)(lVar22 + 0x12e) != '\0') {
        lVar12 = 0;
        uVar18 = 0;
        do {
          *(undefined8 *)(*(long *)((long)ppuVar7 + -0x98) + uVar18 * 8) =
               *(undefined8 *)(plVar15[2] + lVar12);
          uVar21 = *(long *)(plVar15[2] + lVar12) * uVar21;
          *(long *)(*(long *)((long)ppuVar7 + -0xb0) + uVar18 * 8) =
               (long)(int)((long *)(plVar15[2] + lVar12))[1];
          uVar18 = uVar18 + 1;
          lVar12 = lVar12 + 0x10;
        } while (uVar18 < *(byte *)(lVar22 + 0x12e));
      }
      plVar10 = (long *)func_0x00faf0d0(lVar22,*(undefined8 *)((long)ppuVar7 + -0x98),
                                        *(undefined8 *)((long)ppuVar7 + -0xb0));
      _memcpy(plVar10 + 4,plVar15 + 4,uVar21);
      if (*(long *)((long)ppuVar7 + -0xb0) != 0) {
        *(long *)((long)ppuVar7 + -0xa8) = *(long *)((long)ppuVar7 + -0xb0);
        func_0x00523aec();
      }
      if (*(long *)((long)ppuVar7 + -0x98) != 0) {
        *(long *)((long)ppuVar7 + -0x90) = *(long *)((long)ppuVar7 + -0x98);
        func_0x00523aec();
      }
    }
    return plVar10;
  }
  iVar2 = *(int *)(lVar22 + 0xf8);
  plVar10 = (long *)func_0x00f6e3b8((long)iVar2,0);
  *plVar10 = lVar22;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x3ff71e8,0x10);
    if (bVar5) {
      cVar4 = ExclusiveMonitorsStatus();
      lRam0000000003ff71e8 = lRam0000000003ff71e8 + 1;
    }
  } while (cVar4 != '\0');
  _memcpy(plVar10 + 2,plVar15 + 2,(long)iVar2 + -0x10);
  if ((*(byte *)(*plVar15 + 0x133) >> 1 & 1) != 0) {
    func_0x00f7a274(plVar10);
  }
  if (cRam0000000003ff7438 < '\0') {
    func_0x00fc51b8(plVar10,*plVar15);
  }
  return plVar10;
}



// ============================================================
// RVA: 0x165b10c | Core.Networking.NetworkServicesInput..ctor
// ============================================================

void Core_Networking_NetworkServicesInput___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



