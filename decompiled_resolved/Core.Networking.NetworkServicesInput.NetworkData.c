// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkServicesInput.NetworkData

// ============================================================
// RVA: 0x165acd0 | Core.Networking.NetworkServicesInput.NetworkData.Clear
// ============================================================

/* WARNING: Possible PIC construction at 0x029202dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029202e0) */
/* WARNING: Removing unreachable block (ram,0x029202e4) */
/* WARNING: Removing unreachable block (ram,0x0292030c) */
/* WARNING: Removing unreachable block (ram,0x02920300) */

long * Core_Networking_NetworkServicesInput_NetworkData__Clear(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar22;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar23;
  undefined1 auVar24 [16];
  long lStack_b0;
  long lStack_a8;
  ulong uStack_98;
  ulong uStack_90;
  
  *param_1 = 0;
  lVar13 = param_1[1];
  if (lVar13 != 0) {
    *(undefined4 *)(lVar13 + 0x18) = 0;
    lVar18 = *(long *)(lVar13 + 0x10);
    if (lVar18 == 0) {
      lVar13 = func_0x00f78af4(lVar13,0);
      if ((bRam0000000003eb5cc9 & 1) == 0) {
        func_0x00f78a20(0x3d203b0);
        bRam0000000003eb5cc9 = 1;
      }
      uVar10 = *(undefined8 *)(lVar13 + 0x10);
      uVar3 = *(undefined4 *)(lVar13 + 0x18);
      plVar12 = (long *)func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
      /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbee4(plVar12,uVar10,uVar3);
      return plVar12;
    }
    puVar16 = *(undefined8 **)(lVar18 + 0x10);
    iVar2 = *(int *)(lVar18 + 0x18);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x00f78a24(0x3d1fcf0,0,iVar2,0);
      uVar11 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d77d18);
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar11,uVar10);
    }
    else {
      if (iVar2 < 0) {
        func_0x00f78a24(0x3d22738,0,iVar2,0);
        uVar11 = func_0x00f78aec();
        uVar10 = 0x3d7a288;
      }
      else {
        iVar8 = func_0x00f807d0(puVar16,0);
        if (iVar8 < 1) {
          iVar9 = /*System.Array$$get_Length*/ func_0x0292ae44(puVar16);
          if (-iVar8 <= iVar9 - iVar2) {
            uVar10 = func_0x00f76cf0(*puVar16);
            uVar11 = func_0x00faf4d8(puVar16,uVar10,(long)-iVar8);
            plVar12 = (long *)_bzero(uVar11,(long)((int)uVar10 * iVar2));
            return plVar12;
          }
          func_0x00f78a24(0x3d22738);
          uVar11 = func_0x00f78aec();
          uVar10 = 0x3d79a88;
        }
        else {
          func_0x00f78a24(0x3d22738);
          uVar11 = func_0x00f78aec();
          uVar10 = 0x3d79a90;
        }
      }
      uVar10 = func_0x00f78a24(uVar10);
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar11,uVar10,0);
    }
    uVar10 = func_0x00f78a24(0x3d514d8);
    plVar12 = (long *)func_0x00f78ac0(uVar11,uVar10);
    if ((bRam0000000003eb8e74 & 1) == 0) {
      func_0x00f78a20(0x3d1eda0);
      bRam0000000003eb8e74 = 1;
    }
    plVar17 = (long *)plVar12[4];
    if (plVar17 == (long *)0x0) {
      (**(code **)(*plVar12 + 0x2b8))(plVar12,*(undefined8 *)(*plVar12 + 0x2c0));
      plVar17 = (long *)plVar12[4];
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)func_0x00f78af4();
      }
    }
    lVar13 = *plVar17;
    if (*(char *)(lVar13 + 0x12e) == '\0') {
      iVar2 = *(int *)(lVar13 + 0xf8);
      plVar12 = (long *)func_0x00f6e3b8((long)iVar2,0);
      *plVar12 = lVar13;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(0x3ff71e8,0x10);
        if (bVar5) {
          cVar4 = ExclusiveMonitorsStatus();
          lRam0000000003ff71e8 = lRam0000000003ff71e8 + 1;
        }
      } while (cVar4 != '\0');
      _memcpy(plVar12 + 2,plVar17 + 2,(long)iVar2 + -0x10);
      if ((*(byte *)(*plVar17 + 0x133) >> 1 & 1) != 0) {
        func_0x00f7a274(plVar12);
      }
      if (cRam0000000003ff7438 < '\0') {
        func_0x00fc51b8(plVar12,*plVar17);
      }
      return plVar12;
    }
    lVar13 = *plVar17;
    uVar20 = (ulong)*(uint *)(lVar13 + 0x100);
    if (plVar17[2] == 0) {
      uVar1 = *(uint *)(plVar17 + 3);
      uStack_98 = (ulong)uVar1;
      plVar12 = (long *)func_0x00faf0d0(lVar13,&uStack_98,0);
      _memcpy(plVar12 + 4,plVar17 + 4,uVar1 * uVar20);
    }
    else {
      func_0x00901764(&uStack_98,*(undefined1 *)(lVar13 + 0x12e));
      func_0x00901764(&lStack_b0,*(undefined1 *)(lVar13 + 0x12e));
      if (*(char *)(lVar13 + 0x12e) != '\0') {
        lVar18 = 0;
        uVar19 = 0;
        do {
          *(undefined8 *)(uStack_98 + uVar19 * 8) = *(undefined8 *)(plVar17[2] + lVar18);
          uVar20 = *(long *)(plVar17[2] + lVar18) * uVar20;
          *(long *)(lStack_b0 + uVar19 * 8) = (long)(int)((long *)(plVar17[2] + lVar18))[1];
          uVar19 = uVar19 + 1;
          lVar18 = lVar18 + 0x10;
        } while (uVar19 < *(byte *)(lVar13 + 0x12e));
      }
      plVar12 = (long *)func_0x00faf0d0(lVar13,uStack_98,lStack_b0);
      _memcpy(plVar12 + 4,plVar17 + 4,uVar20);
      if (lStack_b0 != 0) {
        lStack_a8 = lStack_b0;
        func_0x00523aec();
      }
      if (uStack_98 != 0) {
        uStack_90 = uStack_98;
        func_0x00523aec();
      }
    }
    return plVar12;
  }
  auVar24 = func_0x00f78af4();
  lVar18 = auVar24._8_8_;
  lVar13 = auVar24._0_8_;
  puVar7 = &stack0xffffffffffffffb0;
  puVar23 = &stack0xffffffffffffffe0;
  uVar10 = 0x3d1b710;
  uVar11 = 0x3d5ad08;
  uVar22 = 0x3d2a618;
  if ((bRam0000000003eb582a & 1) == 0) {
    func_0x00f78a20(0x3d2a618);
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d5ad08);
    bRam0000000003eb582a = 1;
  }
  uVar14 = func_0x00f78aec(/*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710);
  /*System.Action<string, uint, IntPtr, uint, bool>$$.ctor*/ func_0x01e75bc8(uVar14,lVar13,uRam0000000003d5ad08,uRam0000000003d2a618);
  if (lVar18 == 0) {
    pcVar6 = Core_Networking_NetworkServicesInput__InitList;
    lVar18 = func_0x00f78af4();
    unaff_x20 = 0;
  }
  else {
    /*Core.Services.ServicesManager$$AddMatchDataFunc*/ func_0x01685564(lVar18,uVar14,0);
    *(long *)(lVar13 + 0x20) = lVar18;
    pcVar6 = Core_Networking_NetworkServicesInput__Init;
    puVar7 = &stack0xfffffffffffffff0;
    lVar18 = lVar13;
    lVar13 = unaff_x19;
    uVar14 = unaff_x21;
    uVar11 = unaff_x22;
    uVar22 = unaff_x23;
    uVar10 = unaff_x24;
    puVar23 = &stack0xfffffffffffffff0;
  }
  *(undefined8 *)(puVar7 + -0x30) = uVar11;
  *(undefined8 *)(puVar7 + -0x28) = uVar14;
  *(undefined8 *)(puVar7 + -0x20) = unaff_x20;
  *(long *)(puVar7 + -0x18) = lVar13;
  *(undefined1 **)(puVar7 + -0x10) = puVar23;
  *(code **)(puVar7 + -8) = pcVar6;
  if ((bRam0000000003eb582d & 1) == 0) {
    func_0x00f78a20(0x3d3d540);
    func_0x00f78a20(0x3d3d538);
    func_0x00f78a20(0x3d1e228);
    bRam0000000003eb582d = 1;
  }
  uVar11 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkServicesInput.NetworkData>_TypeInfo*/ uRam0000000003d1e228);
  uVar20 = 0x200;
  /*System.Collections.Generic.List<NetworkServicesInput.NetworkData>$$.ctor*/ func_0x02557064(uVar11,0x200,uRam0000000003d3d538);
  *(undefined8 *)(lVar18 + 0x10) = uVar11;
  while( true ) {
    *(undefined8 *)(puVar7 + -0x40) = 0;
    *(undefined8 *)(puVar7 + -0x38) = 0;
    /*Core.Networking.NetworkServicesInput.NetworkData$$Init*/ func_0x0165b0a0(puVar7 + -0x40);
    if (*(long *)(lVar18 + 0x10) == 0) break;
    plVar12 = (long *)/*System.Collections.Generic.List<NetworkServicesInput.NetworkData>$$Add*/ func_0x02557c60(*(long *)(lVar18 + 0x10),*(undefined8 *)(puVar7 + -0x40),
                                      *(undefined8 *)(puVar7 + -0x38),uRam0000000003d3d540);
    uVar1 = (int)uVar20 - 1;
    uVar20 = (ulong)uVar1;
    if (uVar1 == 0) {
      return plVar12;
    }
  }
  lVar13 = func_0x00f78af4();
  *(undefined8 *)(puVar7 + -0x80) = uVar10;
  *(undefined8 *)(puVar7 + -0x78) = uVar22;
  *(ulong *)(puVar7 + -0x70) = uVar20;
  *(undefined8 *)(puVar7 + -0x68) = 0x3d3d540;
  *(undefined8 *)(puVar7 + -0x60) = uVar11;
  *(long *)(puVar7 + -0x58) = lVar18;
  *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x10;
  *(code **)(puVar7 + -0x48) = Core_Networking_NetworkServicesInput__DeInit;
  if ((bRam0000000003eb582b & 1) == 0) {
    func_0x00f78a20(0x3d2a618);
    func_0x00f78a20(0x3d1b710);
    func_0x00f78a20(0x3d5ad08);
    bRam0000000003eb582b = 1;
  }
  plVar12 = (long *)Core_Networking_NetworkServicesInput__Clear(lVar13);
  if (*(long *)(lVar13 + 0x20) == 0) {
    return plVar12;
  }
  uVar14 = func_0x00f78aec(/*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710);
  /*System.Action<string, uint, IntPtr, uint, bool>$$.ctor*/ func_0x01e75bc8(uVar14,lVar13,uRam0000000003d5ad08,uRam0000000003d2a618);
  uVar10 = *(undefined8 *)(puVar7 + -0x70);
  uVar11 = *(undefined8 *)(puVar7 + -0x80);
  uVar22 = *(undefined8 *)(puVar7 + -0x78);
  *(undefined8 *)(puVar7 + -0x70) = uVar10;
  *(undefined8 *)(puVar7 + -0x68) = *(undefined8 *)(puVar7 + -0x68);
  *(undefined8 *)(puVar7 + -0x60) = *(undefined8 *)(puVar7 + -0x60);
  *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)(puVar7 + -0x58);
  *(undefined8 *)(puVar7 + -0x50) = *(undefined8 *)(puVar7 + -0x50);
  *(undefined8 *)(puVar7 + -0x48) = *(undefined8 *)(puVar7 + -0x48);
  uVar21 = 0x3eb5000;
  if ((bRam0000000003eb5a1a & 1) == 0) {
    func_0x00f78a20(0x3d1b710,uVar14,0);
    func_0x00f78a20(0x3d24978);
    bRam0000000003eb5a1a = 1;
  }
  if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),uVar14,0);
  if ((plVar12 == (long *)0x0) || (*plVar12 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
    **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar12;
    return plVar12;
  }
  lVar13 = func_0x00f78e5c();
  *(undefined8 *)(puVar7 + -0xc0) = unaff_x26;
  *(undefined8 *)(puVar7 + -0xb8) = unaff_x25;
  *(undefined8 *)(puVar7 + -0xb0) = uVar11;
  *(undefined8 *)(puVar7 + -0xa8) = uVar22;
  *(undefined8 *)(puVar7 + -0xa0) = uVar10;
  *(undefined8 *)(puVar7 + -0x98) = 0x3eb5000;
  *(undefined8 *)(puVar7 + -0x90) = 0x3d24978;
  *(undefined8 *)(puVar7 + -0x88) = uVar14;
  *(undefined1 **)(puVar7 + -0x80) = puVar7 + -0x50;
  *(undefined **)(puVar7 + -0x78) = &Core_Services_ServicesManager__DeInit;
  uVar10 = 0x3eb5000;
  if ((bRam0000000003eb5a1b & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5cd70);
    bRam0000000003eb5a1b = 1;
  }
  lVar18 = *(long *)(lVar13 + 0x30);
  if (lVar18 != 0) {
    uVar10 = *(undefined8 *)(lVar18 + 0x138);
    uVar21 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar21,lVar13,uRam0000000003d5cd70,uRam0000000003d2a320);
    plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar21,0);
    if ((plVar12 != (long *)0x0) && (*plVar12 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) goto code_r0x016857bc;
    *(long **)(lVar18 + 0x138) = plVar12;
    plVar12 = *(long **)(lVar13 + 0x30);
    if (plVar12 != (long *)0x0) {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
      *(undefined8 *)(lVar13 + 0x30) = 0;
      return plVar12;
    }
  }
  func_0x00f78af4();
code_r0x016857bc:
  lVar15 = func_0x00f78e5c();
  *(long *)(puVar7 + -0xf0) = lVar18;
  *(undefined8 *)(puVar7 + -0xe8) = uVar21;
  *(undefined8 *)(puVar7 + -0xe0) = uVar10;
  *(long *)(puVar7 + -0xd8) = lVar13;
  *(undefined1 **)(puVar7 + -0xd0) = puVar7 + -0x80;
  *(undefined **)(puVar7 + -200) = &Core_Services_ServicesManager__EarlyUpdate;
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
  plVar12 = *(long **)(lVar15 + 0x30);
  if (plVar12 == (long *)0x0) {
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1685864);
    (*pcVar6)();
  }
  (**(code **)(*plVar12 + 0x2a8))(plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
  *(undefined8 *)(puVar7 + -0xe0) = *(undefined8 *)(puVar7 + -0xe0);
  *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar7 + -0xd8);
  *(undefined8 *)(puVar7 + -0xd0) = *(undefined8 *)(puVar7 + -0xd0);
  *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(puVar7 + -200);
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar12 = (long *)(*pcRam0000000003ec05a0)(uVar10);
  return plVar12;
}



// ============================================================
// RVA: 0x165b044 | Core.Networking.NetworkServicesInput.NetworkData.PopulateData
// ============================================================

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

long * Core_Networking_NetworkServicesInput_NetworkData__PopulateData
                 (long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x19;
  undefined8 uVar17;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  
  puVar7 = &stack0xffffffffffffffd0;
  puVar18 = &stack0xfffffffffffffff0;
  lVar11 = *(long *)(param_1 + 8);
  if (lVar11 == 0) {
    puVar21 = &Core_Networking_NetworkServicesInput_NetworkData__Init;
    puVar12 = (undefined8 *)func_0x00f78af4();
    while( true ) {
      *(long *)(puVar7 + -0x30) = param_1;
      *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar7 + -0x20) = unaff_x20;
      *(long *)(puVar7 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar7 + -0x10) = puVar18;
      *(undefined **)(puVar7 + -8) = puVar21;
      if ((bRam0000000003eb5876 & 1) == 0) {
        func_0x00f78a20(0x3d203b0);
        bRam0000000003eb5876 = 1;
      }
      uVar20 = func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
      /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbfd8(uVar20,0x400,0);
      puVar12[1] = uVar20;
      param_3 = *(undefined8 **)(puVar7 + -0x20);
      param_2 = *(undefined8 *)(puVar7 + -0x18);
      param_1 = *(long *)(puVar7 + -0x30);
      param_4 = *(ulong *)(puVar7 + -0x28);
      *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      *puVar12 = 0;
      lVar11 = puVar12[1];
      if (lVar11 != 0) break;
      auVar22 = func_0x00f78af4();
      lVar14 = auVar22._8_8_;
      lVar11 = auVar22._0_8_;
      puVar6 = puVar7 + -0x50;
      *(undefined8 *)(puVar7 + -0x50) = unaff_x24;
      *(undefined8 *)(puVar7 + -0x48) = unaff_x23;
      *(long *)(puVar7 + -0x40) = param_1;
      *(ulong *)(puVar7 + -0x38) = param_4;
      *(undefined8 **)(puVar7 + -0x30) = param_3;
      *(undefined8 *)(puVar7 + -0x28) = param_2;
      *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
      *(code **)(puVar7 + -0x18) = Core_Networking_NetworkServicesInput__Init;
      puVar18 = puVar7 + -0x20;
      unaff_x24 = 0x3d1b710;
      uVar20 = 0x3d5ad08;
      unaff_x23 = 0x3d2a618;
      if ((bRam0000000003eb582a & 1) == 0) {
        func_0x00f78a20(0x3d2a618);
        func_0x00f78a20(0x3d1b710);
        func_0x00f78a20(0x3d5ad08);
        bRam0000000003eb582a = 1;
      }
      uVar9 = func_0x00f78aec(/*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ uRam0000000003d1b710);
      /*System.Action<string, uint, IntPtr, uint, bool>$$.ctor*/ func_0x01e75bc8(uVar9,lVar11,uRam0000000003d5ad08,uRam0000000003d2a618);
      if (lVar14 == 0) {
        pcVar19 = Core_Networking_NetworkServicesInput__InitList;
        unaff_x19 = func_0x00f78af4();
        uVar17 = 0;
      }
      else {
        /*Core.Services.ServicesManager$$AddMatchDataFunc*/ func_0x01685564(lVar14,uVar9,0);
        *(long *)(lVar11 + 0x20) = lVar14;
        puVar18 = *(undefined1 **)(puVar7 + -0x20);
        pcVar19 = *(code **)(puVar7 + -0x18);
        uVar17 = *(undefined8 *)(puVar7 + -0x30);
        uVar20 = *(undefined8 *)(puVar7 + -0x40);
        uVar9 = *(undefined8 *)(puVar7 + -0x38);
        puVar6 = puVar7 + -0x10;
        unaff_x24 = *(undefined8 *)(puVar7 + -0x50);
        unaff_x23 = *(undefined8 *)(puVar7 + -0x48);
        unaff_x19 = lVar11;
        lVar11 = *(long *)(puVar7 + -0x28);
      }
      puVar7 = puVar6 + -0x40;
      puVar12 = (undefined8 *)(puVar6 + -0x40);
      *(undefined8 *)(puVar6 + -0x30) = uVar20;
      *(undefined8 *)(puVar6 + -0x28) = uVar9;
      *(undefined8 *)(puVar6 + -0x20) = uVar17;
      *(long *)(puVar6 + -0x18) = lVar11;
      *(undefined1 **)(puVar6 + -0x10) = puVar18;
      *(code **)(puVar6 + -8) = pcVar19;
      puVar18 = puVar6 + -0x10;
      if ((bRam0000000003eb582d & 1) == 0) {
        func_0x00f78a20(0x3d3d540);
        func_0x00f78a20(0x3d3d538);
        func_0x00f78a20(0x3d1e228);
        bRam0000000003eb582d = 1;
      }
      unaff_x21 = 0x3d3d540;
      unaff_x20 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkServicesInput.NetworkData>_TypeInfo*/ uRam0000000003d1e228);
      param_1 = 0x200;
      /*System.Collections.Generic.List<NetworkServicesInput.NetworkData>$$.ctor*/ func_0x02557064(unaff_x20,0x200,uRam0000000003d3d538);
      *(undefined8 *)(unaff_x19 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar6 + -0x40) = 0;
      *(undefined8 *)(puVar6 + -0x38) = 0;
      puVar21 = (undefined *)0x165ae44;
    }
    puVar18 = *(undefined1 **)(puVar7 + -0x10);
    uVar20 = *(undefined8 *)(puVar7 + -8);
  }
  else {
    uVar20 = 0x165b074;
    puVar7 = &stack0xffffffffffffffd0;
  }
  *(undefined1 **)(puVar7 + -0x10) = puVar18;
  *(undefined8 *)(puVar7 + -8) = uVar20;
  *(undefined4 *)(lVar11 + 0x18) = 0;
  lVar14 = *(long *)(lVar11 + 0x10);
  if (lVar14 == 0) {
    lVar11 = func_0x00f78af4(lVar11,0);
    *(long *)(puVar7 + -0x40) = param_1;
    *(ulong *)(puVar7 + -0x38) = param_4;
    *(undefined8 **)(puVar7 + -0x30) = param_3;
    *(undefined8 *)(puVar7 + -0x28) = param_2;
    *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x18) = &FlatBuffers_ByteBuffer__Duplicate;
    if ((bRam0000000003eb5cc9 & 1) == 0) {
      func_0x00f78a20(0x3d203b0);
      bRam0000000003eb5cc9 = 1;
    }
    uVar20 = *(undefined8 *)(lVar11 + 0x10);
    uVar3 = *(undefined4 *)(lVar11 + 0x18);
    plVar10 = (long *)func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
    /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbee4(plVar10,uVar20,uVar3);
    return plVar10;
  }
  puVar12 = *(undefined8 **)(lVar14 + 0x10);
  iVar2 = *(int *)(lVar14 + 0x18);
  *(long *)(puVar7 + -0x30) = param_1;
  *(ulong *)(puVar7 + -0x28) = param_4;
  *(undefined8 **)(puVar7 + -0x20) = param_3;
  *(undefined8 *)(puVar7 + -0x18) = param_2;
  *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
  *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x00f78a24(0x3d1fcf0,0,iVar2,0);
    uVar9 = func_0x00f78aec();
    uVar20 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar9,uVar20);
  }
  else {
    if (iVar2 < 0) {
      func_0x00f78a24(0x3d22738,0,iVar2,0);
      uVar9 = func_0x00f78aec();
      uVar20 = 0x3d7a288;
    }
    else {
      param_4 = 0;
      iVar8 = func_0x00f807d0(puVar12,0);
      param_3 = puVar12;
      if (iVar8 < 1) {
        uVar1 = -iVar8;
        param_4 = (ulong)uVar1;
        iVar8 = /*System.Array$$get_Length*/ func_0x0292ae44(puVar12);
        if ((int)uVar1 <= iVar8 - iVar2) {
          *(undefined8 *)(puVar7 + -0x30) = *(undefined8 *)(puVar7 + -0x30);
          *(undefined8 *)(puVar7 + -0x28) = *(undefined8 *)(puVar7 + -0x28);
          *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
          *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
          *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
          *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
          uVar20 = func_0x00f76cf0(*puVar12);
          uVar9 = func_0x00faf4d8(puVar12,uVar20,(long)(int)uVar1);
          plVar10 = (long *)_bzero(uVar9,(long)((int)uVar20 * iVar2));
          return plVar10;
        }
        func_0x00f78a24(0x3d22738);
        uVar9 = func_0x00f78aec();
        uVar20 = 0x3d79a88;
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar9 = func_0x00f78aec();
        uVar20 = 0x3d79a90;
      }
    }
    uVar20 = func_0x00f78a24(uVar20);
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar9,uVar20,0);
  }
  uVar20 = func_0x00f78a24(0x3d514d8);
  plVar10 = (long *)func_0x00f78ac0(uVar9,uVar20);
  *(undefined8 **)(puVar7 + -0x50) = param_3;
  *(undefined8 *)(puVar7 + -0x48) = uVar9;
  *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x38) = &Mono_Security_Cryptography_ARC4Managed__get_Key;
  if ((bRam0000000003eb8e74 & 1) == 0) {
    func_0x00f78a20(0x3d1eda0);
    bRam0000000003eb8e74 = 1;
  }
  plVar13 = (long *)plVar10[4];
  if (plVar13 == (long *)0x0) {
    (**(code **)(*plVar10 + 0x2b8))(plVar10,*(undefined8 *)(*plVar10 + 0x2c0));
    plVar13 = (long *)plVar10[4];
    if (plVar13 == (long *)0x0) {
      puVar21 = &System_Array__Clone;
      plVar13 = (long *)func_0x00f78af4();
      goto DAT_00f7ffc4;
    }
  }
  puVar21 = &UNK_029202e0;
DAT_00f7ffc4:
  *(long *)(puVar7 + -0x80) = param_1;
  *(ulong *)(puVar7 + -0x78) = param_4;
  *(undefined8 *)(puVar7 + -0x70) = 0x3eb8000;
  *(long **)(puVar7 + -0x68) = plVar10;
  *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x40;
  *(undefined **)(puVar7 + -0x58) = puVar21;
  lVar11 = *plVar13;
  if (*(char *)(lVar11 + 0x12e) != '\0') {
    *(undefined8 *)(puVar7 + -0x80) = *(undefined8 *)(puVar7 + -0x80);
    *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0x78);
    *(undefined8 *)(puVar7 + -0x70) = *(undefined8 *)(puVar7 + -0x70);
    *(undefined8 *)(puVar7 + -0x68) = *(undefined8 *)(puVar7 + -0x68);
    *(undefined8 *)(puVar7 + -0x60) = *(undefined8 *)(puVar7 + -0x60);
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)(puVar7 + -0x58);
    lVar11 = *plVar13;
    uVar16 = (ulong)*(uint *)(lVar11 + 0x100);
    if (plVar13[2] == 0) {
      uVar1 = *(uint *)(plVar13 + 3);
      *(ulong *)(puVar7 + -0x98) = (ulong)uVar1;
      plVar10 = (long *)func_0x00faf0d0(lVar11,puVar7 + -0x98,0);
      _memcpy(plVar10 + 4,plVar13 + 4,uVar1 * uVar16);
    }
    else {
      func_0x00901764(puVar7 + -0x98,*(undefined1 *)(lVar11 + 0x12e));
      func_0x00901764(puVar7 + -0xb0,*(undefined1 *)(lVar11 + 0x12e));
      if (*(char *)(lVar11 + 0x12e) != '\0') {
        lVar14 = 0;
        uVar15 = 0;
        do {
          *(undefined8 *)(*(long *)(puVar7 + -0x98) + uVar15 * 8) =
               *(undefined8 *)(plVar13[2] + lVar14);
          uVar16 = *(long *)(plVar13[2] + lVar14) * uVar16;
          *(long *)(*(long *)(puVar7 + -0xb0) + uVar15 * 8) =
               (long)(int)((long *)(plVar13[2] + lVar14))[1];
          uVar15 = uVar15 + 1;
          lVar14 = lVar14 + 0x10;
        } while (uVar15 < *(byte *)(lVar11 + 0x12e));
      }
      plVar10 = (long *)func_0x00faf0d0(lVar11,*(undefined8 *)(puVar7 + -0x98),
                                        *(undefined8 *)(puVar7 + -0xb0));
      _memcpy(plVar10 + 4,plVar13 + 4,uVar16);
      if (*(long *)(puVar7 + -0xb0) != 0) {
        *(long *)(puVar7 + -0xa8) = *(long *)(puVar7 + -0xb0);
        func_0x00523aec();
      }
      if (*(long *)(puVar7 + -0x98) != 0) {
        *(long *)(puVar7 + -0x90) = *(long *)(puVar7 + -0x98);
        func_0x00523aec();
      }
    }
    return plVar10;
  }
  iVar2 = *(int *)(lVar11 + 0xf8);
  plVar10 = (long *)func_0x00f6e3b8((long)iVar2,0);
  *plVar10 = lVar11;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x3ff71e8,0x10);
    if (bVar5) {
      cVar4 = ExclusiveMonitorsStatus();
      lRam0000000003ff71e8 = lRam0000000003ff71e8 + 1;
    }
  } while (cVar4 != '\0');
  _memcpy(plVar10 + 2,plVar13 + 2,(long)iVar2 + -0x10);
  if ((*(byte *)(*plVar13 + 0x133) >> 1 & 1) != 0) {
    func_0x00f7a274(plVar10);
  }
  if (cRam0000000003ff7438 < '\0') {
    func_0x00fc51b8(plVar10,*plVar13);
  }
  return plVar10;
}



// ============================================================
// RVA: 0x165b0a0 | Core.Networking.NetworkServicesInput.NetworkData.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x029202dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029202e0) */
/* WARNING: Removing unreachable block (ram,0x029202e4) */
/* WARNING: Removing unreachable block (ram,0x0292030c) */
/* WARNING: Removing unreachable block (ram,0x02920300) */

long * Core_Networking_NetworkServicesInput_NetworkData__Init(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 uVar21;
  undefined1 *puVar22;
  undefined1 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  long lStack_b0;
  long lStack_a8;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5876 & 1) == 0) {
    func_0x00f78a20(0x3d203b0);
    bRam0000000003eb5876 = 1;
  }
  uVar14 = func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
  /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbfd8(uVar14,0x400,0);
  param_1[1] = uVar14;
  *param_1 = 0;
  lVar11 = param_1[1];
  if (lVar11 == 0) {
    auVar25 = func_0x00f78af4();
    lVar18 = auVar25._8_8_;
    lVar11 = auVar25._0_8_;
    puVar7 = &stack0xffffffffffffffb0;
    puVar23 = &stack0xffffffffffffffe0;
    uVar14 = 0x3d1b710;
    puVar22 = (undefined1 *)0x3d5ad08;
    uVar9 = 0x3d2a618;
    puStack_40 = unaff_x22;
    puStack_38 = (undefined *)unaff_x21;
    if ((bRam0000000003eb582a & 1) == 0) {
      func_0x00f78a20(0x3d2a618);
      func_0x00f78a20(0x3d1b710);
      func_0x00f78a20(0x3d5ad08);
      bRam0000000003eb582a = 1;
    }
    puVar24 = (undefined *)func_0x00f78aec(/*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710);
    /*System.Action<string, uint, IntPtr, uint, bool>$$.ctor*/ func_0x01e75bc8(puVar24,lVar11,uRam0000000003d5ad08,uRam0000000003d2a618);
    if (lVar18 == 0) {
      pcVar6 = Core_Networking_NetworkServicesInput__InitList;
      lVar18 = func_0x00f78af4();
      unaff_x20 = 0;
    }
    else {
      /*Core.Services.ServicesManager$$AddMatchDataFunc*/ func_0x01685564(lVar18,puVar24,0);
      *(long *)(lVar11 + 0x20) = lVar18;
      pcVar6 = Core_Networking_NetworkServicesInput__Init;
      puVar7 = &stack0xfffffffffffffff0;
      lVar18 = lVar11;
      lVar11 = unaff_x19;
      puVar24 = puStack_38;
      puVar22 = puStack_40;
      uVar9 = unaff_x23;
      uVar14 = unaff_x24;
      puVar23 = &stack0xfffffffffffffff0;
    }
    *(undefined1 **)(puVar7 + -0x30) = puVar22;
    *(undefined **)(puVar7 + -0x28) = puVar24;
    *(undefined8 *)(puVar7 + -0x20) = unaff_x20;
    *(long *)(puVar7 + -0x18) = lVar11;
    *(undefined1 **)(puVar7 + -0x10) = puVar23;
    *(code **)(puVar7 + -8) = pcVar6;
    if ((bRam0000000003eb582d & 1) == 0) {
      func_0x00f78a20(0x3d3d540);
      func_0x00f78a20(0x3d3d538);
      func_0x00f78a20(0x3d1e228);
      bRam0000000003eb582d = 1;
    }
    uVar12 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkServicesInput.NetworkData>_TypeInfo*/ uRam0000000003d1e228);
    uVar20 = 0x200;
    /*System.Collections.Generic.List<NetworkServicesInput.NetworkData>$$.ctor*/ func_0x02557064(uVar12,0x200,uRam0000000003d3d538);
    *(undefined8 *)(lVar18 + 0x10) = uVar12;
    while( true ) {
      *(undefined8 *)(puVar7 + -0x40) = 0;
      *(undefined8 *)(puVar7 + -0x38) = 0;
      Core_Networking_NetworkServicesInput_NetworkData__Init(puVar7 + -0x40);
      if (*(long *)(lVar18 + 0x10) == 0) break;
      plVar10 = (long *)/*System.Collections.Generic.List<NetworkServicesInput.NetworkData>$$Add*/ func_0x02557c60(*(long *)(lVar18 + 0x10),*(undefined8 *)(puVar7 + -0x40),
                                        *(undefined8 *)(puVar7 + -0x38),uRam0000000003d3d540);
      uVar1 = (int)uVar20 - 1;
      uVar20 = (ulong)uVar1;
      if (uVar1 == 0) {
        return plVar10;
      }
    }
    lVar11 = func_0x00f78af4();
    *(undefined8 *)(puVar7 + -0x80) = uVar14;
    *(undefined8 *)(puVar7 + -0x78) = uVar9;
    *(ulong *)(puVar7 + -0x70) = uVar20;
    *(undefined8 *)(puVar7 + -0x68) = 0x3d3d540;
    *(undefined8 *)(puVar7 + -0x60) = uVar12;
    *(long *)(puVar7 + -0x58) = lVar18;
    *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x10;
    *(code **)(puVar7 + -0x48) = Core_Networking_NetworkServicesInput__DeInit;
    if ((bRam0000000003eb582b & 1) == 0) {
      func_0x00f78a20(0x3d2a618);
      func_0x00f78a20(0x3d1b710);
      func_0x00f78a20(0x3d5ad08);
      bRam0000000003eb582b = 1;
    }
    plVar10 = (long *)Core_Networking_NetworkServicesInput__Clear(lVar11);
    if (*(long *)(lVar11 + 0x20) == 0) {
      return plVar10;
    }
    uVar13 = func_0x00f78aec(/*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710);
    /*System.Action<string, uint, IntPtr, uint, bool>$$.ctor*/ func_0x01e75bc8(uVar13,lVar11,uRam0000000003d5ad08,uRam0000000003d2a618);
    uVar14 = *(undefined8 *)(puVar7 + -0x70);
    uVar9 = *(undefined8 *)(puVar7 + -0x80);
    uVar12 = *(undefined8 *)(puVar7 + -0x78);
    *(undefined8 *)(puVar7 + -0x70) = uVar14;
    *(undefined8 *)(puVar7 + -0x68) = *(undefined8 *)(puVar7 + -0x68);
    *(undefined8 *)(puVar7 + -0x60) = *(undefined8 *)(puVar7 + -0x60);
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)(puVar7 + -0x58);
    *(undefined8 *)(puVar7 + -0x50) = *(undefined8 *)(puVar7 + -0x50);
    *(undefined8 *)(puVar7 + -0x48) = *(undefined8 *)(puVar7 + -0x48);
    uVar21 = 0x3eb5000;
    if ((bRam0000000003eb5a1a & 1) == 0) {
      func_0x00f78a20(0x3d1b710,uVar13,0);
      func_0x00f78a20(0x3d24978);
      bRam0000000003eb5a1a = 1;
    }
    if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(**(undefined8 **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8),uVar13,0);
    if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<string, uint, IntPtr, uint, bool>_TypeInfo*/ lRam0000000003d1b710)) {
      **(long **)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) = (long)plVar10;
      return plVar10;
    }
    lVar11 = func_0x00f78e5c();
    *(undefined8 *)(puVar7 + -0xc0) = unaff_x26;
    *(undefined8 *)(puVar7 + -0xb8) = unaff_x25;
    *(undefined8 *)(puVar7 + -0xb0) = uVar9;
    *(undefined8 *)(puVar7 + -0xa8) = uVar12;
    *(undefined8 *)(puVar7 + -0xa0) = uVar14;
    *(undefined8 *)(puVar7 + -0x98) = 0x3eb5000;
    *(undefined8 *)(puVar7 + -0x90) = 0x3d24978;
    *(undefined8 *)(puVar7 + -0x88) = uVar13;
    *(undefined1 **)(puVar7 + -0x80) = puVar7 + -0x50;
    *(undefined **)(puVar7 + -0x78) = &Core_Services_ServicesManager__DeInit;
    uVar14 = 0x3eb5000;
    if ((bRam0000000003eb5a1b & 1) == 0) {
      func_0x00f78a20(0x3d2a320);
      func_0x00f78a20(0x3d1b598);
      func_0x00f78a20(0x3d5cd70);
      bRam0000000003eb5a1b = 1;
    }
    lVar18 = *(long *)(lVar11 + 0x30);
    if (lVar18 != 0) {
      uVar14 = *(undefined8 *)(lVar18 + 0x138);
      uVar21 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar21,lVar11,uRam0000000003d5cd70,uRam0000000003d2a320);
      plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar14,uVar21,0);
      if (plVar10 != (long *)0x0) {
        if (*plVar10 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598) goto code_r0x016857bc;
      }
      *(long **)(lVar18 + 0x138) = plVar10;
      plVar10 = *(long **)(lVar11 + 0x30);
      if (plVar10 != (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
        *(undefined8 *)(lVar11 + 0x30) = 0;
        return plVar10;
      }
    }
    func_0x00f78af4();
code_r0x016857bc:
    lVar15 = func_0x00f78e5c();
    *(long *)(puVar7 + -0xf0) = lVar18;
    *(undefined8 *)(puVar7 + -0xe8) = uVar21;
    *(undefined8 *)(puVar7 + -0xe0) = uVar14;
    *(long *)(puVar7 + -0xd8) = lVar11;
    *(undefined1 **)(puVar7 + -0xd0) = puVar7 + -0x80;
    *(undefined **)(puVar7 + -200) = &Core_Services_ServicesManager__EarlyUpdate;
    if ((bRam0000000003eb5a1c & 1) == 0) {
      func_0x00f78a20(0x3d24978);
      bRam0000000003eb5a1c = 1;
    }
    if (((*(ushort *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = *(undefined8 *)(*(long *)(/*Core.Services.ServicesManager_TypeInfo*/ lRam0000000003d24978 + 0xb8) + 8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar14,0);
    plVar10 = *(long **)(lVar15 + 0x30);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x2a8))(plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
      *(undefined8 *)(puVar7 + -0xe0) = *(undefined8 *)(puVar7 + -0xe0);
      *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(puVar7 + -0xd8);
      *(undefined8 *)(puVar7 + -0xd0) = *(undefined8 *)(puVar7 + -0xd0);
      *(undefined8 *)(puVar7 + -200) = *(undefined8 *)(puVar7 + -200);
      if (pcRam0000000003ec05a0 == (code *)0x0) {
        pcRam0000000003ec05a0 =
             (code *)func_0x00f789d4(
                                    "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar10 = (long *)(*pcRam0000000003ec05a0)(uVar14);
      return plVar10;
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1685864);
    (*pcVar6)();
  }
  *(undefined4 *)(lVar11 + 0x18) = 0;
  lVar18 = *(long *)(lVar11 + 0x10);
  if (lVar18 == 0) {
    lVar11 = func_0x00f78af4(lVar11,0);
    if ((bRam0000000003eb5cc9 & 1) == 0) {
      func_0x00f78a20(0x3d203b0);
      bRam0000000003eb5cc9 = 1;
    }
    uVar14 = *(undefined8 *)(lVar11 + 0x10);
    uVar3 = *(undefined4 *)(lVar11 + 0x18);
    plVar10 = (long *)func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
    /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbee4(plVar10,uVar14,uVar3);
    return plVar10;
  }
  puVar16 = *(undefined8 **)(lVar18 + 0x10);
  iVar2 = *(int *)(lVar18 + 0x18);
  if (puVar16 == (undefined8 *)0x0) {
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
      unaff_x21 = 0;
      iVar8 = func_0x00f807d0(puVar16,0);
      if (iVar8 < 1) {
        uVar1 = -iVar8;
        unaff_x21 = (ulong)uVar1;
        iVar8 = /*System.Array$$get_Length*/ func_0x0292ae44(puVar16);
        if ((int)uVar1 <= iVar8 - iVar2) {
          uVar14 = func_0x00f76cf0(*puVar16);
          uVar9 = func_0x00faf4d8(puVar16,uVar14,(long)(int)uVar1);
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
  puStack_38 = &Mono_Security_Cryptography_ARC4Managed__get_Key;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb8e74 & 1) == 0) {
    func_0x00f78a20(0x3d1eda0);
    bRam0000000003eb8e74 = 1;
  }
  plVar17 = (long *)plVar10[4];
  if (plVar17 == (long *)0x0) {
    (**(code **)(*plVar10 + 0x2b8))(plVar10,*(undefined8 *)(*plVar10 + 0x2c0));
    plVar17 = (long *)plVar10[4];
    if (plVar17 == (long *)0x0) {
      puVar24 = &System_Array__Clone;
      plVar17 = (long *)func_0x00f78af4();
      goto DAT_00f7ffc4;
    }
  }
  puVar24 = &UNK_029202e0;
DAT_00f7ffc4:
  uStack_70 = 0x3eb8000;
  lVar11 = *plVar17;
  uStack_78 = unaff_x21;
  plStack_68 = plVar10;
  ppuStack_60 = &puStack_40;
  puStack_58 = puVar24;
  if (*(char *)(lVar11 + 0x12e) != '\0') {
    lVar11 = *plVar17;
    uVar20 = (ulong)*(uint *)(lVar11 + 0x100);
    if (plVar17[2] == 0) {
      uVar1 = *(uint *)(plVar17 + 3);
      uStack_98 = (ulong)uVar1;
      plVar10 = (long *)func_0x00faf0d0(lVar11,&uStack_98,0);
      _memcpy(plVar10 + 4,plVar17 + 4,uVar1 * uVar20);
    }
    else {
      func_0x00901764(&uStack_98,*(undefined1 *)(lVar11 + 0x12e));
      func_0x00901764(&lStack_b0,*(undefined1 *)(lVar11 + 0x12e));
      if (*(char *)(lVar11 + 0x12e) != '\0') {
        lVar18 = 0;
        uVar19 = 0;
        do {
          *(undefined8 *)(uStack_98 + uVar19 * 8) = *(undefined8 *)(plVar17[2] + lVar18);
          uVar20 = *(long *)(plVar17[2] + lVar18) * uVar20;
          *(long *)(lStack_b0 + uVar19 * 8) = (long)(int)((long *)(plVar17[2] + lVar18))[1];
          uVar19 = uVar19 + 1;
          lVar18 = lVar18 + 0x10;
        } while (uVar19 < *(byte *)(lVar11 + 0x12e));
      }
      plVar10 = (long *)func_0x00faf0d0(lVar11,uStack_98,lStack_b0);
      _memcpy(plVar10 + 4,plVar17 + 4,uVar20);
      if (lStack_b0 != 0) {
        lStack_a8 = lStack_b0;
        func_0x00523aec();
      }
      if (uStack_98 != 0) {
        uStack_90 = uStack_98;
        func_0x00523aec();
      }
    }
    return plVar10;
  }
  iVar2 = *(int *)(lVar11 + 0xf8);
  plVar10 = (long *)func_0x00f6e3b8((long)iVar2,0);
  *plVar10 = lVar11;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x3ff71e8,0x10);
    if (bVar5) {
      cVar4 = ExclusiveMonitorsStatus();
      lRam0000000003ff71e8 = lRam0000000003ff71e8 + 1;
    }
  } while (cVar4 != '\0');
  _memcpy(plVar10 + 2,plVar17 + 2,(long)iVar2 + -0x10);
  if ((*(byte *)(*plVar17 + 0x133) >> 1 & 1) != 0) {
    func_0x00f7a274(plVar10);
  }
  if (cRam0000000003ff7438 < '\0') {
    func_0x00fc51b8(plVar10,*plVar17);
  }
  return plVar10;
}



// ============================================================
// RVA: 0x1662f38 | Core.Networking.NetworkServicesInput.NetworkData.PopulateData
// ============================================================

/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02938710) */
/* WARNING: Removing unreachable block (ram,0x0293875c) */
/* WARNING: Removing unreachable block (ram,0x02938764) */
/* WARNING: Removing unreachable block (ram,0x02938778) */
/* WARNING: Removing unreachable block (ram,0x02938714) */
/* WARNING: Removing unreachable block (ram,0x0293871c) */
/* WARNING: Removing unreachable block (ram,0x02938730) */
/* WARNING: Removing unreachable block (ram,0x02938784) */

ulong Core_Networking_NetworkServicesInput_NetworkData__PopulateData
                (int *param_1,long *param_2,long *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *puVar15;
  long *unaff_x22;
  undefined8 uVar16;
  long *plVar17;
  long *unaff_x23;
  ulong unaff_x24;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar18 [16];
  undefined4 uStack_98;
  int iStack_94;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  plVar12 = unaff_x19;
  plVar11 = unaff_x20;
  if (*(long *)(param_1 + 2) == 0) {
LAB_01662f90:
    func_0x00f78af4();
    puStack_38 = &Core_Networking_NetworkSession___c___cctor;
    plStack_50 = plVar11;
    plStack_48 = plVar12;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5877 & 1) == 0) {
      func_0x00f78a20(0x3d282e8);
      bRam0000000003eb5877 = 1;
    }
    uVar16 = func_0x00f78aec(/*Core.Networking.NetworkSession.<>c_TypeInfo*/ lRam0000000003d282e8);
    uVar7 = /*System.Object$$.ctor*/ func_0x0294d018(uVar16,0);
    **(undefined8 **)(/*Core.Networking.NetworkSession.<>c_TypeInfo*/ lRam0000000003d282e8 + 0xb8) = uVar16;
    return uVar7;
  }
  /*FlatBuffers.ByteBuffer$$Reset*/ func_0x016cc1bc(*(long *)(param_1 + 2),0);
  *param_1 = (int)param_3;
  param_1[1] = param_4;
  lVar4 = *(long *)(param_1 + 2);
  plVar12 = param_2;
  plVar11 = param_3;
  if (lVar4 == 0) goto LAB_01662f90;
  uVar16 = 0x3eb5000;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0,param_3,param_2,0);
    bRam0000000003eb5cd1 = 1;
  }
  if (param_2 == (long *)0x0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar9 = func_0x00f78aec();
    uVar8 = 0x3d6a458;
code_r0x016cd01c:
    uVar8 = func_0x00f78a24(uVar8);
    plVar11 = (long *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar8);
  }
  else {
    if (param_2[3] == 0) goto code_r0x016ccfe0;
    if ((int)param_2[3] < (int)param_3) {
      func_0x00f78a24(0x3d1fce8);
      uVar9 = func_0x00f78aec();
      uVar8 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    uVar16 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar4,0,param_3);
      if (*(long *)(lVar4 + 0x10) != 0) {
        plVar12 = *(long **)(*(long *)(lVar4 + 0x10) + 0x10);
        plVar11 = (long *)0x0;
        uVar16 = 0;
        puVar15 = (undefined8 *)register0x00000008;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar9 = func_0x00f78aec();
    uVar8 = func_0x00f78a24(0x3d69698);
    plVar11 = (long *)0x0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar9,uVar8);
  }
  uVar8 = func_0x00f78a24(0x3d52cf8);
  auVar18 = func_0x00f78ac0(uVar9,uVar8);
  plVar6 = auVar18._8_8_;
  plVar5 = auVar18._0_8_;
  puVar15 = &uStack_60;
  puStack_38 = &FlatBuffers_ByteBuffer__PutIntPtr;
  unaff_x29 = &puStack_40;
  plVar17 = (long *)0x3eb5000;
  uStack_60 = uVar16;
  lStack_58 = lVar4;
  plStack_50 = param_2;
  plStack_48 = (long *)uVar9;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar18._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    plVar6 = (long *)func_0x00f78aec();
    uVar16 = func_0x00f78a24(0x3d6a458);
    param_3 = (long *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(plVar6,uVar16);
code_r0x016cd1bc:
    uVar16 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(plVar6,uVar16);
  }
  else {
    plVar17 = (long *)0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      plVar6 = (long *)func_0x00f78aec();
      uVar16 = func_0x00f78a24(0x3d69698);
      param_3 = (long *)0x0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(plVar6,uVar16);
      goto code_r0x016cd1bc;
    }
    param_3 = plVar6;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(plVar5,0);
    if (plVar5[2] != 0) {
      puVar15 = *(undefined8 **)(plVar5[2] + 0x10);
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003eb9f54 & 1) == 0) {
        func_0x00f78a20(0x3d23210);
        bRam0000000003eb9f54 = 1;
      }
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar16 = func_0x00f76cf0(*puVar15);
      uVar8 = func_0x00faf4d8(puVar15,uVar16,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)PTR_DAT_03c8cea0)(uVar8,plVar11,(int)uVar16 * auVar18._8_4_);
      return uVar7;
    }
  }
  auVar18 = func_0x00f78af4();
  plVar12 = auVar18._8_8_;
  lVar4 = auVar18._0_8_;
  plStack_90 = plVar17;
  plStack_88 = plVar5;
  plStack_80 = plVar11;
  plStack_78 = plVar6;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (plVar12 == (long *)0x0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)param_3 <= (int)plVar12[3]) {
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar4,0,param_3);
    if (*(long *)(lVar4 + 0x10) != 0) {
      param_2 = *(long **)(*(long *)(lVar4 + 0x10) + 0x10);
      plVar11 = (long *)(ulong)*(uint *)(lVar4 + 0x18);
      uVar16 = 0;
      unaff_x30 = &FlatBuffers_ByteBuffer__CopyByteArray;
      unaff_x19 = plStack_78;
      unaff_x20 = plStack_80;
      unaff_x21 = plStack_88;
      unaff_x22 = plStack_90;
code_r0x029387b8:
      do {
        *(ulong *)((long)puVar15 + -0x40) = unaff_x24;
        *(long **)((long)puVar15 + -0x38) = unaff_x23;
        *(long **)((long)puVar15 + -0x30) = unaff_x22;
        *(long **)((long)puVar15 + -0x28) = unaff_x21;
        *(long **)((long)puVar15 + -0x20) = unaff_x20;
        *(long **)((long)puVar15 + -0x18) = unaff_x19;
        *(undefined1 ***)((long)puVar15 + -0x10) = unaff_x29;
        *(undefined **)((long)puVar15 + -8) = unaff_x30;
        if (param_2 == (long *)0x0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar8 = func_0x00f78aec();
          uVar16 = 0x3d7b990;
code_r0x02938884:
          uVar16 = func_0x00f78a24(uVar16);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar8,uVar16,0);
          uVar16 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar8,uVar16);
code_r0x029388b0:
          uVar16 = func_0x00f78a24(0x3d70548);
          uVar8 = /*Locale$$GetText*/ func_0x02af42b4(uVar16,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar9 = func_0x00f78aec();
          uVar16 = 0x3d7b998;
code_r0x02938954:
          uVar10 = func_0x00f78a24(uVar16);
          uVar16 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar9,uVar10,uVar8);
        }
        else {
          unaff_x21 = plVar12;
          if (plVar12 == (long *)0x0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar8 = func_0x00f78aec();
            uVar16 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = plVar11;
          if ((int)plVar11 < 0) goto code_r0x029388b0;
          iVar13 = (int)uVar16;
          if (iVar13 < 0) {
            uVar16 = func_0x00f78a24(0x3d70548);
            uVar8 = /*Locale$$GetText*/ func_0x02af42b4(uVar16,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar9 = func_0x00f78aec();
            uVar16 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar14 = (int)param_3;
          if (iVar14 < 0) {
            uVar16 = func_0x00f78a24(0x3d70548);
            uVar8 = /*Locale$$GetText*/ func_0x02af42b4(uVar16,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar9 = func_0x00f78aec();
            uVar16 = 0x3d78638;
            goto code_r0x02938954;
          }
          uVar7 = func_0x00f836d8(param_2,plVar11,plVar12);
          if ((uVar7 & 1) != 0) {
            return uVar7;
          }
          iVar2 = /*System.Buffer$$ByteLength*/ func_0x0294274c(param_2);
          if (((int)plVar11 <= iVar2 - iVar14) &&
             (uVar7 = /*System.Buffer$$ByteLength*/ func_0x0294274c(plVar12), iVar13 <= (int)uVar7 - iVar14)) {
            return uVar7;
          }
          uVar8 = func_0x00f78a24(0x3d70ad8);
          uVar8 = /*Locale$$GetText*/ func_0x02af42b4(uVar8,0);
          func_0x00f78a24(0x3d1fce8);
          uVar9 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar8,0);
          unaff_x23 = param_2;
        }
        uVar10 = func_0x00f78a24(0x3d52be0);
        uVar3 = func_0x00f78ac0(uVar9,uVar10);
        *(long **)((long)puVar15 + -0x70) = unaff_x22;
        *(long **)((long)puVar15 + -0x68) = unaff_x21;
        *(undefined8 *)((long)puVar15 + -0x60) = uVar9;
        *(undefined8 *)((long)puVar15 + -0x58) = uVar8;
        *(undefined1 **)((long)puVar15 + -0x50) = (undefined1 *)((long)puVar15 + -0x10);
        *(undefined **)((long)puVar15 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)((long)puVar15 + -0x80) = unaff_x24;
        *(long **)((long)puVar15 + -0x78) = unaff_x23;
        *(undefined8 *)((long)puVar15 + -0x70) = *(undefined8 *)((long)puVar15 + -0x70);
        *(undefined8 *)((long)puVar15 + -0x68) = *(undefined8 *)((long)puVar15 + -0x68);
        *(undefined8 *)((long)puVar15 + -0x60) = *(undefined8 *)((long)puVar15 + -0x60);
        *(undefined8 *)((long)puVar15 + -0x58) = *(undefined8 *)((long)puVar15 + -0x58);
        *(undefined8 *)((long)puVar15 + -0x50) = *(undefined8 *)((long)puVar15 + -0x50);
        *(undefined8 *)((long)puVar15 + -0x48) = *(undefined8 *)((long)puVar15 + -0x48);
        unaff_x29 = (undefined1 **)((long)puVar15 + -0x50);
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar3 >> 5;
        unaff_x23 = (long *)(ulong)(uVar3 & 0x1f);
        if ((uVar3 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        unaff_x19 = (long *)func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        plVar12 = (long *)(ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (long *)(ulong)(uVar1 << 2);
        param_2 = (long *)func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        unaff_x22 = (long *)0x3d20078;
        if (unaff_x20 == (long *)0x0) {
code_r0x029387a8:
          func_0x00f78af4();
          uVar8 = func_0x00f78b24();
          unaff_x30 = &System_Buffer__BlockCopy;
          auVar18 = func_0x00f78ac0(uVar8,0);
          plVar11 = auVar18._8_8_;
          param_2 = auVar18._0_8_;
          puVar15 = (undefined8 *)((long)puVar15 + -0x80);
          goto code_r0x029387b8;
        }
        plVar12 = *(long **)(*unaff_x20 + 0x1a0);
        (**(code **)(*unaff_x20 + 0x198))(unaff_x20,param_2);
        unaff_x22 = param_2;
        if (unaff_x19 == (long *)0x0) goto code_r0x029387a8;
        plVar12 = (long *)unaff_x19[3];
        plVar11 = (long *)0x0;
        uVar16 = 0;
        unaff_x30 = &UNK_02938710;
        puVar15 = (undefined8 *)((long)puVar15 + -0x80);
        param_3 = unaff_x21;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  iStack_94 = (int)param_3;
  uVar16 = func_0x00f78a24(0x3d22910);
  uVar16 = func_0x00f78ae0(uVar16,&iStack_94);
  func_0x00055e5c(plVar12);
  uStack_98 = (undefined4)plVar12[3];
  uVar8 = func_0x00f78a24(0x3d22910);
  uVar8 = func_0x00f78ae0(uVar8,&uStack_98);
  uVar9 = func_0x00f78a24(0x3d72a68);
  uVar16 = /*System.String$$Format*/ func_0x029bcac4(uVar9,uVar16,uVar8,0);
  func_0x00f78a24(0x3d1fce8);
  uVar8 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar16,0);
  uVar16 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar8,uVar16);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar16 = func_0x00f78aec();
  uVar8 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar16,uVar8,0);
  uVar8 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar16,uVar8);
  if ((bRam0000000003eb5cd4 & 1) == 0) {
    func_0x00f78a20(0x3d19080);
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d190e0);
    func_0x00f78a20(0x3d30168);
    func_0x00f78a20(0x3d30160);
    func_0x00f78a20(0x3d1c590);
    func_0x00f78a20(0x3d19388);
    func_0x00f78a20(0x3d198b0);
    func_0x00f78a20(0x3d198c0);
    func_0x00f78a20(0x3d198d0);
    func_0x00f78a20(0x3d19d88);
    func_0x00f78a20(0x3d19e28);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d1a0a8);
    func_0x00f78a20(0x3d1a0b8);
    func_0x00f78a20(0x3d1a0c8);
    bRam0000000003eb5cd4 = 1;
  }
  lVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar4,uRam0000000003d30160);
  uVar16 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
  if (lVar4 == 0) {
    lVar4 = func_0x00f78af4();
    return *(ulong *)(lVar4 + 0x10);
  }
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar4,uVar16,1,uRam0000000003d30168);
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar4,uVar16,4,uRam0000000003d30168);
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar4,uVar16,8,uRam0000000003d30168);
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar4,uVar16,1,uRam0000000003d30168);
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar4,uVar16,1,uRam0000000003d30168);
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar4,uVar16,2,uRam0000000003d30168);
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar4,uVar16,2,uRam0000000003d30168);
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar4,uVar16,4,uRam0000000003d30168);
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar4,uVar16,4,uRam0000000003d30168);
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar4,uVar16,8,uRam0000000003d30168);
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
  uVar7 = /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar4,uVar16,8,uRam0000000003d30168);
  **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar4;
  return uVar7;
}



