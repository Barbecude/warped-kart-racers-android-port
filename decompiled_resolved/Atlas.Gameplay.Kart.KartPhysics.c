// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartPhysics

// ============================================================
// RVA: 0x15c1ce0 | Atlas.Gameplay.Kart.KartPhysics.PostInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c1ee8 | Atlas.Gameplay.Kart.KartPhysics.DeInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c20d0 | Atlas.Gameplay.Kart.KartPhysics.PreFixedUpdate
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__PreFixedUpdate(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000003eb5374 & 1) == 0) {
    func_0x00f78a20(0x3d22cc8);
    bRam0000000003eb5374 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xb8) + 0x10);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar6,0);
  iVar4 = /*Atlas.Gameplay.Kart.KartPhysics$$PreFixedUpdate*/ func_0x015d3278(param_1,param_2,param_1 + 0x78);
  *(char *)(param_1 + 0x5be) = (char)iVar4;
  lVar5 = *(long *)(param_1 + 0x580);
  if (lVar5 != 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x15c21b4);
      (*pcVar3)();
    }
    uVar2 = 1 << (ulong)(*(uint *)(*(long *)(param_1 + 0x68) + 0x9c) & 0x1f);
    uVar1 = uVar2 | *(uint *)(lVar5 + 0x120);
    if (iVar4 == 0) {
      uVar1 = *(uint *)(lVar5 + 0x120) & (uVar2 ^ 0xffffffff);
    }
    *(uint *)(lVar5 + 0x120) = uVar1;
    *(int *)(lVar5 + 0x128) = *(int *)(lVar5 + 0x128) + 1;
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar6);
  return;
}



// ============================================================
// RVA: 0x15c2368 | Atlas.Gameplay.Kart.KartPhysics.FixedUpdate
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__FixedUpdate(undefined8 param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5375 & 1) == 0) {
    func_0x00f78a20(0x3d22cc8);
    bRam0000000003eb5375 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar1,0);
  /*Atlas.Gameplay.Kart.KartPhysics$$FixedUpdate*/ func_0x015d4420(param_1);
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar1);
  return;
}



// ============================================================
// RVA: 0x15c2588 | Atlas.Gameplay.Kart.KartPhysics.PostFixedUpdate
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__PostFixedUpdate(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5376 & 1) == 0) {
    func_0x00f78a20(0x3d22cc8);
    bRam0000000003eb5376 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xb8) + 0x18);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar1,0);
  /*Atlas.Gameplay.Kart.KartPhysics$$PostFixedUpdate*/ func_0x015d4454(param_1,param_2,param_1 + 0x78);
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar1);
  return;
}



// ============================================================
// RVA: 0x15c2700 | Atlas.Gameplay.Kart.KartPhysics.EarlyUpdate
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__EarlyUpdate(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb5372 & 1) == 0) {
    func_0x00f78a20(0x3d22cc8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5372 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar2,0);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    /*Atlas.Gameplay.Kart.KartPhysics$$UpdateReplication*/ func_0x015d2f78(param_1,param_2);
  }
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



// ============================================================
// RVA: 0x15c3028 | Atlas.Gameplay.Kart.KartPhysics.get_Body
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__get_Body(long param_1)

{
  return param_1 + 0x194;
}



// ============================================================
// RVA: 0x15c30c4 | Atlas.Gameplay.Kart.KartPhysics.PrintState
// ============================================================

/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Gameplay_Kart_KartPhysics__PrintState
                  (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
                  long param_9)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  dword *pdVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  dword *pdVar13;
  dword *pdVar14;
  long lVar15;
  long lVar16;
  undefined8 ******ppppppuVar17;
  long *plVar18;
  dword *pdVar19;
  dword *extraout_x1;
  long lVar20;
  ulong extraout_x1_00;
  undefined8 ******extraout_x1_01;
  int iVar21;
  dword dVar22;
  dword *pdVar23;
  dword *pdVar24;
  dword *pdVar25;
  long lVar26;
  dword *pdVar27;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar28;
  undefined8 *******pppppppuVar29;
  undefined *puVar30;
  int iVar31;
  float fVar32;
  undefined4 extraout_s0;
  ulong extraout_d0;
  undefined4 uVar33;
  float fVar34;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 auStack_238 [2];
  ulong uStack_228;
  dword *pdStack_220;
  dword *pdStack_218;
  undefined8 *******pppppppuStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  long lStack_1e8;
  dword *pdStack_1e0;
  dword *pdStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined8 *******pppppppuStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [16];
  undefined8 *******pppppppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  dword *pdStack_f8;
  dword *pdStack_f0;
  dword *pdStack_e8;
  undefined8 *******pppppppuStack_e0;
  dword *pdStack_d8;
  undefined8 ******ppppppuStack_50;
  code *pcStack_48;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_31;
  
  if ((bRam0000000003eb5373 & 1) == 0) {
    func_0x00f78a20(0x3d20260);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d779f0);
    bRam0000000003eb5373 = 1;
  }
  uStack_31 = *(undefined1 *)(param_9 + 0x5be);
  uVar10 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&uStack_31);
  if (*(long *)(param_9 + 0x68) != 0) {
    uStack_38 = *(undefined4 *)(*(long *)(param_9 + 0x68) + 0x9c);
    uVar11 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_38);
    if (*(long *)(param_9 + 0x68) != 0) {
      uStack_3c = *(undefined4 *)(*(long *)(param_9 + 0x68) + 0x54);
      uVar12 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_3c);
      pdVar13 = (dword *)/*System.String$$Format*/ func_0x029bdf30(/*STR('_preparedJob {0}, KartMgrIndex {1}, SyncID: {2} \n')*/ uRam0000000003d779f0,uVar10,uVar11,uVar12,0);
      return pdVar13;
    }
  }
  pdVar14 = (dword *)func_0x00f78af4();
  pcStack_48 = Atlas_Gameplay_Kart_KartComposite__InvokeRespawn;
  pdVar13 = pdVar14;
  ppppppuStack_50 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb52f4 & 1) == 0) {
    func_0x00f78a20(0x3d59b88);
    func_0x00f78a20(0x3d59b90);
    func_0x00f78a20(0x3d59ba8);
    func_0x00f78a20(0x3d59bb0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23a50);
    pdVar13 = (dword *)func_0x00f78a20(0x3d24a28);
    bRam0000000003eb52f4 = 1;
  }
  if (*(long *)(pdVar14 + 4) == 0) {
    return pdVar13;
  }
  lVar15 = *(long *)(*(long *)(pdVar14 + 4) + 0x60);
  if (lVar15 == 0) {
    return (dword *)0x0;
  }
  pdVar13 = (dword *)/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsRespawning*/ func_0x015d97c4(lVar15,0);
  if (((ulong)pdVar13 & 1) != 0) {
    return pdVar13;
  }
  if (*(char *)(pdVar14 + 0x3c) == '\0') {
    return pdVar13;
  }
  lVar15 = *(long *)(pdVar14 + 0x20);
  uVar10 = 0x3d23990;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pdVar13 = (dword *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar15,0,0);
  ppppppuVar17 = extraout_x1_01;
  lVar26 = lVar15;
  uVar11 = 0x3d23990;
  if ((int)pdVar13 != 0) {
    if (*(long *)(pdVar14 + 0x20) == 0) goto LAB_015c3650;
    if (((int)extraout_x1_01 != 6) && (*(char *)(*(long *)(pdVar14 + 0x20) + 0x44) == '\0')) {
      return pdVar13;
    }
  }
  if ((*(long *)(pdVar14 + 0x1e) == 0) ||
     (lVar16 = *(long *)(*(long *)(pdVar14 + 0x1e) + 0x40), uVar11 = uVar10, lVar16 == 0))
  goto LAB_015c3650;
  /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnBeforeRespawn*/ func_0x015a5ee4(lVar16,*(undefined8 *)(pdVar14 + 0x24),0);
  ppppppuVar17 = (undefined8 ******)Atlas_Gameplay_Kart_KartComposite__GetPortal(pdVar14);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(ppppppuVar17,0,0);
  if (iVar6 != 0) {
    if (ppppppuVar17 == (undefined8 ******)0x0) goto LAB_015c3650;
    lVar26 = *(long *)(pdVar14 + 0x1c);
    uVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(ppppppuVar17,0);
    if (lVar26 == 0) goto LAB_015c3650;
    /*Atlas.Audio.KartAudio$$OpenPortal*/ func_0x015b96a8(lVar26,uVar10,0);
    lVar15 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(ppppppuVar17,0);
    if ((*(long *)(pdVar14 + 6) == 0) || (lVar26 = lVar15, lVar15 == 0)) goto LAB_015c3650;
    /*UnityEngine.Transform$$SetParent*/ func_0x03275e8c(lVar15,*(undefined8 *)(*(long *)(pdVar14 + 6) + 0x70),0);
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar15,0);
    /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar15,0);
    /*Atlas.Gameplay.PortalVFXBehaviour$$StartEnteringPortal*/ func_0x014c390c(ppppppuVar17,*(undefined8 *)(pdVar14 + 10),*(undefined8 *)(pdVar14 + 0xe),0);
  }
  Atlas_Gameplay_Kart_KartComposite__RemoveActiveUsables(pdVar14);
  lVar26 = lVar15;
  if ((*(long *)(pdVar14 + 0xe) != 0) &&
     (iVar6 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_HasUsableEquipped*/ func_0x015e1aac(*(long *)(pdVar14 + 0xe),0), iVar6 != 0)) {
    if (*(long *)(pdVar14 + 0xe) == 0) goto LAB_015c3650;
    plVar18 = (long *)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(pdVar14 + 0xe),0);
    if (plVar18 != (long *)0x0) {
      lVar26 = 0x3d24a28;
      if ((*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) <= *(byte *)(*plVar18 + 300)) &&
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28 + 300) * 8 +
                   -8) == /*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28)) {
        if (*(long *)(pdVar14 + 0xe) == 0) goto LAB_015c3650;
        ppppppuVar17 = (undefined8 ******)/*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(*(long *)(pdVar14 + 0xe),0);
        lVar15 = func_0x00022904(ppppppuVar17,/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28);
        lVar26 = 0x3d24a28;
        if (lVar15 == 0) goto LAB_015c3650;
        plVar18 = (long *)func_0x00022904(ppppppuVar17,/*Atlas.Gameplay.Usables.ShieldUsable_TypeInfo*/ lRam0000000003d24a28);
        (**(code **)(*plVar18 + 0x2f8))(plVar18,1,*(undefined8 *)(*plVar18 + 0x300));
      }
    }
  }
  if ((*(long *)(pdVar14 + 0x1e) == 0) ||
     ((((lVar15 = *(long *)(*(long *)(pdVar14 + 0x1e) + 0x1c0), param_8 < 0.0 && (lVar15 == 0)) ||
       (*(long *)(pdVar14 + 4) == 0)) ||
      ((lVar15 == 0 || (lVar16 = *(long *)(*(long *)(pdVar14 + 4) + 0x60), lVar16 == 0)))))) {
LAB_015c3650:
    auVar36 = func_0x00f78af4();
    lVar15 = auVar36._0_8_;
    pdStack_f0 = (dword *)uVar11;
    pdStack_e8 = (dword *)lVar26;
    pppppppuStack_e0 = (undefined8 *******)ppppppuVar17;
    pdStack_d8 = pdVar14;
    if ((bRam0000000003eb52f3 & 1) == 0) {
      func_0x00f78a20(0x3d22c78);
      bRam0000000003eb52f3 = 1;
    }
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 0xb8) + 0x20);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar10,0);
    if (*(long *)(lVar15 + 0x30) != 0) {
      /*Atlas.Gameplay.Kart.KartVisualAnimation$$LateUpdate*/ func_0x015e5eec(*(long *)(lVar15 + 0x30),auVar36._8_8_,0);
    }
    plVar18 = *(long **)(lVar15 + 0x68);
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x1c8))(plVar18,auVar36._8_8_,*(undefined8 *)(*plVar18 + 0x1d0));
    }
    if (*(long *)(lVar15 + 0x10) != 0) {
      /*Atlas.Gameplay.Kart.KartPhysics$$LateUpdate*/ func_0x015c3760();
    }
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar13 = (dword *)(*pcRam0000000003ec05a0)(uVar10);
    return pdVar13;
  }
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetRespawning*/ func_0x015d9f58(extraout_s0,param_2,param_3,param_4,param_5,param_6,param_7,
                  *(undefined4 *)(lVar15 + 0xd4),lVar16,0);
  if (*(long *)(pdVar14 + 4) == 0) goto LAB_015c3650;
  ppppppuVar17 = *(undefined8 *******)(*(long *)(pdVar14 + 4) + 0x60);
  uVar11 = 0x3d23a50;
  lVar26 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar26,pdVar14,uRam0000000003d59bb0,0);
  if (ppppppuVar17 == (undefined8 ******)0x0) goto LAB_015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnKartPortalEntered*/ func_0x015d9aa0(ppppppuVar17,lVar26,0);
  if (*(long *)(pdVar14 + 4) == 0) goto LAB_015c3650;
  ppppppuVar17 = *(undefined8 *******)(*(long *)(pdVar14 + 4) + 0x60);
  lVar26 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar26,pdVar14,uRam0000000003d59b90,0);
  if (ppppppuVar17 == (undefined8 ******)0x0) goto LAB_015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnStartTransitionEnd*/ func_0x015d9960(ppppppuVar17,lVar26,0);
  if (*(long *)(pdVar14 + 4) == 0) goto LAB_015c3650;
  ppppppuVar17 = *(undefined8 *******)(*(long *)(pdVar14 + 4) + 0x60);
  lVar26 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar26,pdVar14,uRam0000000003d59ba8,0);
  if (ppppppuVar17 == (undefined8 ******)0x0) goto LAB_015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnTransitionEnd*/ func_0x015d9be0(ppppppuVar17,lVar26,0);
  if (*(long *)(pdVar14 + 4) == 0) goto LAB_015c3650;
  ppppppuVar17 = *(undefined8 *******)(*(long *)(pdVar14 + 4) + 0x60);
  lVar26 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnKartRespawnDelegate_TypeInfo*/ uRam0000000003d23a50);
  /*Atlas.Gameplay.Kart.OnKartRespawnDelegate$$.ctor*/ func_0x014b33e0(lVar26,pdVar14,uRam0000000003d59b88,0);
  if (ppppppuVar17 == (undefined8 ******)0x0) goto LAB_015c3650;
  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$add_OnKartRespawnEnd*/ func_0x015d9820(ppppppuVar17,lVar26,0);
  pdVar13 = *(dword **)(pdVar14 + 0x1c);
  if ((pdVar13 == (dword *)0x0) || (pdVar19 = *(dword **)(pdVar13 + 0x24), pdVar19 == (dword *)0x0))
  goto LAB_015c3650;
  puVar5 = &stack0xffffffffffffff60;
  if ((bRam0000000003eb47e0 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28,pdVar13,0);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47e0 = 1;
  }
  pdVar14 = (dword *)0x3eb4000;
  if (pdVar13 != (dword *)0x0) {
    pdVar14 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar13,0);
    lVar15 = 0x28;
    if ((int)pdVar14 == 0) {
      lVar15 = 0x30;
    }
    pdVar24 = *(dword **)((long)pdVar19 + lVar15);
    if (pdVar24 == (dword *)0x0) {
      return pdVar14;
    }
    unaff_x24 = 0x3d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    pdVar14 = pdVar24;
    if (*(long *)(pdVar19 + 0x12) != 0) {
      lVar15 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
      pdVar27 = *(dword **)(*(long *)(pdVar19 + 0x12) + 0xb8);
      uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar10,uRam0000000003d3bf00);
      uVar11 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
      uVar10 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      auVar36._8_8_ = uVar11;
      auVar36._0_8_ = uVar10;
      iVar6 = 5;
      puVar30 = &UNK_0145ba68;
      pdVar7 = pdVar13;
      pppppppuVar29 = &ppppppuStack_50;
      goto code_r0x014fe3e8;
    }
  }
  pdVar7 = (dword *)func_0x00f78af4();
  pdVar24 = pdVar7;
  if ((bRam0000000003eb47e1 & 1) == 0) {
    pdVar24 = (dword *)func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47e1 = 1;
  }
  pdVar23 = *(dword **)(pdVar7 + 0x12);
  if (pdVar23 == (dword *)0x0) {
    return pdVar24;
  }
  pdVar25 = *(dword **)(pdVar7 + 10);
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] != 0)) {
    pdVar27 = pdVar23;
    if (pdVar25 != (dword *)0x0) goto code_r0x0145bb48;
code_r0x0145bbac:
    auVar36 = func_0x00f78af4();
    pdVar27 = auVar36._8_8_;
    uStack_100 = 0x3d1ff28;
    pdStack_d8 = (dword *)&Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
    pdStack_f8 = pdVar7;
    pdStack_f0 = pdVar25;
    pdStack_e8 = pdVar23;
    pppppppuStack_e0 = (undefined8 *******)&stack0xffffffffffffff50;
    if ((bRam0000000003eb47e2 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47e2 = 1;
    }
    if (pdVar27 != (dword *)0x0) {
      pdVar13 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar27,0);
      if ((int)pdVar13 == 0) {
        return pdVar13;
      }
      pdVar25 = *(dword **)(auVar36._0_8_ + 0x28);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar16 = *(long *)(auVar36._0_8_ + 0x48);
      if ((lVar16 != 0) && (pdVar25 != (dword *)0x0)) {
        lVar15 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        lVar26 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        pdVar24 = *(dword **)(lVar16 + 0xb8);
        iVar31 = *(int *)(lVar16 + 0x180);
        uVar33 = 0;
        iVar21 = 6;
        pdVar7 = (dword *)((long)&MACH_HEADER.magic + 3);
        puVar4 = &stack0xffffffffffffff30;
        pdVar13 = pdStack_e8;
        pdVar14 = pdStack_f0;
        pdVar19 = pdStack_f8;
        unaff_x22 = uStack_100;
        pppppppuVar28 = pppppppuStack_e0;
        pdVar23 = pdStack_d8;
        goto code_r0x014fe2a8;
      }
    }
    auVar36 = func_0x00f78af4();
    pdVar7 = auVar36._8_8_;
    puVar5 = auStack_160;
    puStack_108 = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
    pppppppuStack_110 = &pppppppuStack_e0;
    if ((bRam0000000003eb47e3 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e3 = 1;
    }
    if (pdVar7 != (dword *)0x0) {
      pdVar13 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar7,0);
      lVar15 = 0x28;
      if ((int)pdVar13 == 0) {
        lVar15 = 0x30;
      }
      pdVar24 = *(dword **)(auVar36._0_8_ + lVar15);
      if (pdVar24 == (dword *)0x0) {
        return pdVar13;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      lVar26 = *(long *)(auVar36._0_8_ + 0x48);
      if (lVar26 != 0) {
        lVar15 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        pdVar27 = *(dword **)(lVar26 + 0xb8);
        uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar10,uRam0000000003d3bf00);
        uVar11 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        uVar10 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar36._8_8_ = uVar11;
        auVar36._0_8_ = uVar10;
        iVar6 = 0xf;
        puVar30 = &UNK_0145bdac;
        pppppppuVar29 = &pppppppuStack_110;
        goto code_r0x014fe3e8;
      }
    }
    auVar35 = func_0x00f78af4();
    pdVar7 = auVar35._8_8_;
    lVar26 = auVar35._0_8_;
    puVar5 = auStack_1c0;
    puStack_168 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
    pppppppuVar29 = &pppppppuStack_170;
    pdVar24 = (dword *)0x3eb4000;
    pppppppuStack_170 = &pppppppuStack_110;
    if ((bRam0000000003eb47e4 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e4 = 1;
    }
    if (pdVar7 != (dword *)0x0) {
      pdVar13 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar7,0);
      lVar15 = 0x28;
      if ((int)pdVar13 == 0) {
        lVar15 = 0x30;
      }
      pdVar24 = *(dword **)(lVar26 + lVar15);
      if (pdVar24 == (dword *)0x0) {
        return pdVar13;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      if (*(long *)(lVar26 + 0x48) != 0) {
        lVar15 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
        pdVar27 = *(dword **)(*(long *)(lVar26 + 0x48) + 0xb8);
        uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar10,uRam0000000003d3bf00);
        uVar11 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
        uVar10 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar36._8_8_ = uVar11;
        auVar36._0_8_ = uVar10;
        iVar6 = 0x11;
        puVar30 = &UNK_0145bf54;
        goto code_r0x014fe3e8;
      }
    }
    pdVar13 = (dword *)func_0x00f78af4();
    puVar4 = auStack_200;
    uStack_1f0 = 0x3d1ff28;
    puStack_1c8 = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
    pppppppuVar28 = &pppppppuStack_1d0;
    unaff_d8 = extraout_d0 & 0xffffffff;
    pdStack_1e0 = pdVar24;
    pppppppuStack_1d0 = pppppppuVar29;
    if ((bRam0000000003eb47e5 & 1) == 0) {
      lStack_1e8 = lVar26;
      pdStack_1d8 = pdVar7;
      func_0x00f78a20(0x3d1ff28);
      auVar35._8_8_ = pdStack_1d8;
      auVar35._0_8_ = lStack_1e8;
      bRam0000000003eb47e5 = 1;
    }
    pdStack_1d8 = auVar35._8_8_;
    lStack_1e8 = auVar35._0_8_;
    if (extraout_x1 == (dword *)0x0) {
code_r0x0145c21c:
      pdStack_1d8 = auVar35._8_8_;
      lStack_1e8 = auVar35._0_8_;
      fVar34 = (float)func_0x00f78af4();
      puStack_208 = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
      uStack_228 = unaff_d8;
      pdStack_220 = extraout_x1;
      pdStack_218 = pdVar13;
      pppppppuStack_210 = pppppppuVar28;
      if ((bRam0000000003eb47e6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d24568);
        bRam0000000003eb47e6 = 1;
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auStack_238[0] = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
      if (((*(byte *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      fVar32 = _UNK_033f8148;
      if (fVar34 != 0.0) {
        fVar32 = fVar34;
      }
      fVar34 = INFINITY;
      if (fVar32 != -INFINITY) {
        fVar34 = ABS(SQRT(fVar32));
      }
      pdVar13 = (dword *)/*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar34,auStack_238,
                                         *(undefined8 *)
                                          (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x388),1,0);
      return pdVar13;
    }
    iVar6 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
    if ((iVar6 != 0) && (pdVar14 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)pdVar14 == 0)) {
      return pdVar14;
    }
    auVar35._8_8_ = pdStack_1d8;
    auVar35._0_8_ = lStack_1e8;
    if (*(long *)(pdVar13 + 0xc) == 0) goto code_r0x0145c21c;
    pdVar14 = (dword *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(pdVar13 + 0xc),0);
    if ((((ulong)pdVar14 & 1) != 0) || (pdVar13[0x14] != 1)) {
      return pdVar14;
    }
    unaff_x22 = 0x3d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    lVar15 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
    if (*(float *)(lVar15 + 0x30) <= (float)extraout_d0) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    if (0.0 <= (float)pdVar13[0x22]) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    if ((char)extraout_x1[0xe] == '\0') {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    }
    fVar34 = (float)pdVar13[0x23];
    unaff_d8 = (ulong)(uint)fVar34;
    pdVar14 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      pdVar14 = (dword *)func_0x00f78ad0();
      lVar15 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
    }
    if (fVar34 <= *(float *)(lVar15 + 800)) {
      return pdVar14;
    }
    iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
    if (iVar6 == 2) {
      pdVar25 = *(dword **)(pdVar13 + 0xc);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      auVar2._8_8_ = pdStack_1d8;
      auVar2._0_8_ = lStack_1e8;
      auVar35._8_8_ = pdStack_1d8;
      auVar35._0_8_ = lStack_1e8;
      lVar16 = *(long *)(pdVar13 + 0x12);
      if ((lVar16 == 0) || (auVar35 = auVar2, pdVar25 == (dword *)0x0)) goto code_r0x0145c21c;
      lVar15 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
      lVar26 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
      pdVar24 = *(dword **)(lVar16 + 0xb8);
      iVar31 = *(int *)(lVar16 + 0x180);
      uVar33 = 0x3f800000;
      iVar21 = 6;
    }
    else if (iVar6 == 1) {
      pdVar25 = *(dword **)(pdVar13 + 0xc);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      auVar35._8_8_ = pdStack_1d8;
      auVar35._0_8_ = lStack_1e8;
      if (pdVar25 == (dword *)0x0) goto code_r0x0145c21c;
      pdVar24 = *(dword **)(extraout_x1 + 0x2e);
      iVar31 = extraout_x1[0x60];
      lVar15 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
      uVar33 = 0;
      iVar21 = 1;
      lVar26 = lVar15;
    }
    else {
      if (iVar6 != 0) {
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        pdVar14 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        pdVar13[0x22] = *(int *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x34);
        return pdVar14;
      }
      pdVar25 = *(dword **)(pdVar13 + 0xc);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      auVar35._8_8_ = pdStack_1d8;
      auVar35._0_8_ = lStack_1e8;
      if (pdVar25 == (dword *)0x0) goto code_r0x0145c21c;
      pdVar24 = *(dword **)(extraout_x1 + 0x2e);
      iVar31 = extraout_x1[0x60];
      lVar15 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
      uVar33 = 0;
      iVar21 = 0;
      lVar26 = lVar15;
    }
    pdVar7 = &MACH_HEADER.cputype;
    pdVar23 = (dword *)&UNK_0145c1e0;
    pdVar27 = extraout_x1;
    pdVar14 = extraout_x1;
    pdVar19 = pdVar25;
  }
  else {
    func_0x00f78ad0();
    pdVar27 = *(dword **)(pdVar7 + 0x12);
    if ((pdVar27 == (dword *)0x0) || (pdVar25 == (dword *)0x0)) goto code_r0x0145bbac;
code_r0x0145bb48:
    lVar15 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
    lVar26 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
    pdVar24 = *(dword **)(pdVar27 + 0x2e);
    iVar31 = pdVar27[0x60];
    iVar21 = 10;
    pdVar7 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar4 = &stack0xffffffffffffff60;
    pdVar27 = pdVar23;
    pppppppuVar28 = &ppppppuStack_50;
    pdVar23 = (dword *)&Atlas_Audio_AtlasAudioManager__SpeakShield;
    uVar33 = _UNK_033f813c;
  }
code_r0x014fe2a8:
  auVar37._8_8_ = pdVar27;
  auVar37._0_8_ = pdVar25;
  puVar5 = puVar4 + -0x70;
  *(undefined8 *)(puVar4 + -0x70) = unaff_d9;
  *(ulong *)(puVar4 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(dword **)(puVar4 + -0x28) = pdVar19;
  *(dword **)(puVar4 + -0x20) = pdVar14;
  *(dword **)(puVar4 + -0x18) = pdVar13;
  *(undefined8 ********)(puVar4 + -0x10) = pppppppuVar28;
  *(dword **)(puVar4 + -8) = pdVar23;
  lVar16 = lVar15;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  iVar6 = (int)lVar16;
  if (lVar26 == 0) {
    pdVar13 = (dword *)0x0;
  }
  else {
    pdVar13 = (dword *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(pdVar13,uRam0000000003d3bf00);
    lVar16 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar16,0);
    *(long *)(lVar16 + 0x10) = lVar26;
    *(float *)(lVar16 + 0x18) = (float)iVar21;
    if (pdVar13 == (dword *)0x0) {
      puVar30 = &Atlas_Audio_SpeechParam___ctor;
      auVar36 = func_0x00f78af4();
      pppppppuVar29 = (undefined8 *******)(puVar4 + -0x10);
code_r0x014fe3e8:
      lVar26 = auVar36._0_8_;
      *(dword **)(puVar5 + -0x30) = pdVar27;
      *(long *)(puVar5 + -0x28) = lVar15;
      *(dword **)(puVar5 + -0x20) = pdVar24;
      *(dword **)(puVar5 + -0x18) = pdVar7;
      *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar29;
      *(undefined **)(puVar5 + -8) = puVar30;
      pdVar13 = (dword *)/*System.Object$$.ctor*/ func_0x0294d018(lVar26,0);
      *(long *)(lVar26 + 0x10) = auVar36._8_8_;
      *(float *)(lVar26 + 0x18) = (float)iVar6;
      return pdVar13;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(pdVar13,lVar16,uRam0000000003d3bf08);
  }
  uVar10 = *(undefined8 *)(puVar4 + -0x50);
  uVar12 = *(undefined8 *)(puVar4 + -0x48);
  uVar11 = *(undefined8 *)(puVar4 + -0x60);
  uVar1 = *(undefined8 *)(puVar4 + -0x58);
  *(undefined8 *)(puVar4 + -0x50) = *(undefined8 *)(puVar4 + -0x70);
  *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(puVar4 + -0x68);
  *(undefined8 *)(puVar4 + -0x40) = *(undefined8 *)(puVar4 + -0x40);
  *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(puVar4 + -0x38);
  *(undefined8 *)(puVar4 + -0x30) = *(undefined8 *)(puVar4 + -0x30);
  *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)(puVar4 + -0x28);
  *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
  *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
  *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
  *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  *(int *)(puVar4 + -0x54) = (int)pdVar7;
  lVar26 = lVar15;
  pdVar19 = pdVar24;
  pdVar14 = pdVar13;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(iVar31,uVar33,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if ((char)pdVar25[0xd] == '\0') {
code_r0x014fe49c:
    pdVar14 = (dword *)(puVar4 + -0x54);
    puVar30 = &UNK_014fe4b4;
    lVar26 = lVar15;
    pdVar19 = pdVar13;
  }
  else {
    if (*(long *)(pdVar25 + 4) != 0) {
      if (*(char *)(*(long *)(pdVar25 + 4) + 0xcb) == '\0') {
        return (dword *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar30 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar37 = func_0x00f78af4();
  }
  lVar20 = auVar37._8_8_;
  lVar16 = auVar37._0_8_;
  *(undefined8 *)(puVar4 + -0xc0) = uVar11;
  *(undefined8 *)(puVar4 + -0xb8) = uVar1;
  *(undefined8 *)(puVar4 + -0xb0) = uVar10;
  *(undefined8 *)(puVar4 + -0xa8) = uVar12;
  *(undefined8 *)(puVar4 + -0xa0) = 0x3eb4000;
  *(dword **)(puVar4 + -0x98) = pdVar27;
  *(long *)(puVar4 + -0x90) = lVar15;
  *(dword **)(puVar4 + -0x88) = pdVar25;
  *(dword **)(puVar4 + -0x80) = pdVar24;
  *(dword **)(puVar4 + -0x78) = pdVar13;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x68) = puVar30;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)(puVar4 + -0xe0) = 0;
  *(undefined8 *)(puVar4 + -0xd8) = 0;
  *(undefined8 *)(puVar4 + -0xd0) = 0;
  *(undefined4 *)(puVar4 + -0xe4) = 0;
  if (*(long *)(lVar16 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar16 + 0x10) + 0x90) != '\0') {
    return (dword *)0x0;
  }
  if (lVar20 == 0) goto code_r0x014fe8f8;
  uVar8 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar20,0);
  if ((uVar8 & 1) != 0) {
    return (dword *)0x0;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar26,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350),0)
  ;
  if (iVar6 != 0) {
    if (pdVar19 == (dword *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar4 + -0x100,pdVar19,uRam0000000003d3bf10);
    *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(puVar4 + -0xf8);
    *(undefined8 *)(puVar4 + -0xe0) = *(undefined8 *)(puVar4 + -0x100);
    *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xf0);
    while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar4 + -0xe0,uRam0000000003d32f58), (uVar8 & 1) != 0) {
      lVar15 = *(long *)(puVar4 + -0xd0);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar10 = *(undefined8 *)(lVar15 + 0x10);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar10,*(undefined8 *)
                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310),0);
      if ((uVar8 & 1) != 0) {
        fVar32 = *(float *)(lVar15 + 0x18);
        fVar34 = -fVar32;
        if (fVar32 != INFINITY) {
          fVar34 = fVar32;
        }
        *(int *)(puVar4 + -0xe4) = (int)fVar34;
        plVar18 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,puVar4 + -0xe4);
        if (plVar18 == (long *)0x0) goto code_r0x014fe8fc;
        uVar10 = (**(code **)(*plVar18 + 0x168))(plVar18,*(undefined8 *)(*plVar18 + 0x170));
        puVar9 = (undefined4 *)func_0x00f78ae4(plVar18);
        *(undefined4 *)(puVar4 + -0xe4) = *puVar9;
        lVar26 = /*System.String$$Concat*/ func_0x029bdb88(lVar26,uVar10,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0xe0,uRam0000000003d32f50);
  }
  if (*(long *)(lVar16 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar6 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar16 + 0x28),lVar26,uRam0000000003d30020);
  if (iVar6 == 0) {
code_r0x014fe888:
    pdVar13 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar16 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar16 + 0x28),lVar26,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*pdVar14 - 1 < 2) {
        dVar22 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      dVar22 = 1;
code_r0x014fe860:
      *pdVar14 = dVar22;
    }
    iVar6 = (int)extraout_x1_00;
    if (iVar6 == 3) {
      if ((*(long *)(lVar20 + 0xa0) == 0) ||
         (lVar15 = *(long *)(*(long *)(lVar20 + 0xa0) + 0x90), lVar15 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar3)();
      }
      iVar6 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar15,0);
      if (1 < iVar6) {
        iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (dword *)(ulong)(iVar6 < 3);
      }
      uVar8 = 2;
    }
    else {
      uVar8 = extraout_x1_00;
      if (iVar6 != 2) {
        if (iVar6 == 0) {
          pdVar13 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar20,0);
          return pdVar13;
        }
        goto code_r0x014fe888;
      }
    }
    iVar6 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar8,0);
    pdVar13 = (dword *)(ulong)(iVar6 == 0);
  }
  return pdVar13;
}



// ============================================================
// RVA: 0x15c3760 | Atlas.Gameplay.Kart.KartPhysics.LateUpdate
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__LateUpdate(long param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 extraout_w1;
  undefined8 uVar6;
  float fVar7;
  undefined2 uStack_28;
  undefined2 uStack_26;
  char cStack_24;
  undefined1 uStack_23;
  
  if ((bRam0000000003eb537a & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537a = 1;
  }
  cStack_24 = '\0';
  uStack_23 = 0;
  uStack_28 = 0;
  uStack_26 = 0;
  if (*(char *)(param_1 + 0x429) != '\0') {
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    if (iVar3 != 0) {
      cStack_24 = '\0';
      uStack_23 = 0;
      uStack_28 = 0;
      uStack_26 = 0;
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_015c3a00;
      iVar3 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsHitSpin*/ func_0x015d96c8(*(long *)(param_1 + 0x60),0);
      if (iVar3 != 0) {
        /*Core.Networking.NetworkVisualState$$SetFlag*/ func_0x016618dc(&uStack_28,1,0);
      }
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_015c3a00;
      iVar3 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_SpinoutType*/ func_0x015d96d8(*(long *)(param_1 + 0x60),0);
      if (iVar3 == 1) {
        /*Core.Networking.NetworkVisualState$$SetFlag*/ func_0x016618dc(&uStack_28,4,0);
      }
      if (((0.0 < *(float *)(param_1 + 0x1f0)) && (*(char *)(param_1 + 500) != '\0')) &&
         (uVar4 = /*Atlas.Gameplay.Kart.KartPhysicsEventsState$$StartAnyBoost*/ func_0x015d5404(param_1 + 0x330,0), (uVar4 & 1) == 0)) {
        /*Core.Networking.NetworkVisualState$$SetFlag*/ func_0x016618dc(&uStack_28,8,0);
      }
      if (0.0 < *(float *)(param_1 + 0x1f8)) {
        /*Core.Networking.NetworkVisualState$$SetFlag*/ func_0x016618dc(&uStack_28,0x10,0);
      }
      if (*(char *)(param_1 + 0x1d0) != '\0') {
        /*Core.Networking.NetworkVisualState$$SetFlag*/ func_0x016618dc(&uStack_28,0x20,0);
      }
      iVar3 = /*Atlas.Gameplay.Kart.KartPhysics$$get_IsInvuln*/ func_0x015d21b4(param_1);
      if (iVar3 != 0) {
        /*Core.Networking.NetworkVisualState$$SetFlag*/ func_0x016618dc(&uStack_28,0x800,0);
      }
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_015c3a00;
      iVar3 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsInvuln*/ func_0x015d96f0(*(long *)(param_1 + 0x60),0);
      if (iVar3 != 0) {
        /*Core.Networking.NetworkVisualState$$SetFlag*/ func_0x016618dc(&uStack_28,0x1000,0);
      }
      uVar1 = *(int *)(param_1 + 0x314) - 1;
      if (uVar1 < 3) {
        /*Core.Networking.NetworkVisualState$$SetFlag*/ func_0x016618dc(&uStack_28,*(undefined4 *)(&UNK_033f8b44 + (long)(int)uVar1 * 4),0);
      }
      if (*(float *)(param_1 + 0x200) < 0.0) {
        /*Core.Networking.NetworkVisualState$$SetFlag*/ func_0x016618dc(&uStack_28,0x80,0);
      }
      if (*(char *)(param_1 + 0x330) != '\0') {
        *(char *)(param_1 + 0x5cc) = *(char *)(param_1 + 0x5cc) + '\x01';
      }
      if (*(char *)(param_1 + 0x33e) != '\0') {
        *(char *)(param_1 + 0x5cd) = *(char *)(param_1 + 0x5cd) + '\x01';
      }
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_015c3a00;
      cStack_24 = *(char *)(param_1 + 0x5ce);
      if (*(char *)(*(long *)(param_1 + 0x60) + 0xd4) != '\0') {
        cStack_24 = cStack_24 + '\x01';
        *(char *)(param_1 + 0x5ce) = cStack_24;
      }
      uStack_26 = *(undefined2 *)(param_1 + 0x5cc);
      fVar7 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(*(undefined4 *)(param_1 + 0x348),0xbf800000,0x3f800000,0);
      fVar7 = fVar7 * 127.0;
      fVar2 = -fVar7;
      if (fVar7 != INFINITY) {
        fVar2 = fVar7;
      }
      uStack_23 = (undefined1)(int)fVar2;
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_015c3a00;
      Atlas_Gameplay_Kart_KartComposite__SetNetworkVisuals
                (*(long *)(param_1 + 0x68),
                 (ulong)CONCAT15(uStack_23,CONCAT14(cStack_24,CONCAT22(uStack_26,uStack_28))));
    }
    if (*(long *)(param_1 + 0x60) == 0) {
LAB_015c3a00:
      lVar5 = func_0x00f78af4();
      *(undefined1 *)(lVar5 + 0xf0) = extraout_w1;
      return;
    }
    /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$LateUpdate*/ func_0x015da5b0(*(long *)(param_1 + 0x60),0);
    /*Atlas.Gameplay.Kart.KartPhysicsEventsState$$Reset*/ func_0x015d53f8(param_1 + 0x330,0);
    *(byte *)(param_1 + 0x5bc) = *(byte *)(param_1 + 0x5bc) ^ 1;
    *(undefined1 *)(param_1 + 0x5bd) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x15c3ea8 | Atlas.Gameplay.Kart.KartPhysics.OnUsableHit
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__OnUsableHit(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uStack_18 = param_2;
    /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetKartTriggerEffect*/ func_0x015da644(*(long *)(param_1 + 0x60),&uStack_18,0);
  }
  return;
}



// ============================================================
// RVA: 0x15c3f58 | Atlas.Gameplay.Kart.KartPhysics.OnCollisionEnter
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartPhysics__OnCollisionEnter
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4,
               ulong param_5)

{
  bool bVar1;
  bool bVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  ulong unaff_x22;
  uint uVar18;
  uint uVar19;
  undefined1 **ppuVar20;
  undefined1 *puVar21;
  code *pcVar22;
  undefined *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  ulong unaff_d8;
  float fVar33;
  ulong unaff_d9;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulong auStack_330 [40];
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1e0 [4];
  float fStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  ulong uStack_1d0;
  ulong uStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  int iStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  ulong uStack_190;
  undefined8 uStack_188;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  
  lVar17 = 0x3eb5000;
  if ((bRam0000000003eb537e & 1) == 0) {
    func_0x00f78a20(0x3d534c8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d232c0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d265d8);
    bRam0000000003eb537e = 1;
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (0.0 < *(float *)(param_4 + 0x5b4)) {
    return;
  }
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (param_5 == 0) goto LAB_015c4b60;
  fVar34 = *(float *)(param_4 + 0x2ac);
  fVar35 = *(float *)(param_4 + 0x2b0);
  fStack_164 = *(float *)(param_4 + 0x2b4);
  fStack_168 = *(float *)(param_4 + 0x2b8);
  fStack_16c = *(float *)(param_4 + 700);
  fStack_170 = *(float *)(param_4 + 0x2c0);
  fStack_1ac = *(float *)(param_4 + 0x2c4);
  fStack_1b0 = *(float *)(param_4 + 0x2c8);
  fStack_1b4 = *(float *)(param_4 + 0x2cc);
  fVar32 = fStack_1ac;
  iVar5 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(param_5,0);
  fVar33 = (float)param_3;
  if (iVar5 < 1) {
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1d4 = 0;
    bVar1 = false;
    uVar19 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
  }
  else {
    iVar5 = 0;
    uVar19 = 0;
    iStack_1a8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1d4 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    unaff_d8 = (ulong)(uint)_UNK_033f86cc;
    fStack_174 = _UNK_033f875c;
    fStack_1c0 = _UNK_033f86cc;
    fStack_1bc = fVar35;
    fStack_1b8 = fVar34;
    bVar2 = false;
    do {
      /*UnityEngine.Collision$$GetContact*/ func_0x0329ef14(&uStack_130,param_5,iVar5,0);
      uStack_f8 = uStack_128;
      uStack_100 = uStack_130;
      uStack_e8 = uStack_118;
      uStack_f0 = uStack_120;
      uStack_e0 = (undefined4)uStack_110;
      uVar7 = uStack_120;
      /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(&uStack_100,0);
      fVar32 = (float)uVar7;
      uVar18 = uVar19;
      bVar1 = bVar2;
      if (fVar32 <= (float)unaff_d8) {
        /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(&uStack_100,0);
        fStack_194 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        uStack_190 = CONCAT44(uStack_190._4_4_,(int)param_3);
        fStack_198 = fVar32;
        /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(param_5,0);
        fStack_1a0 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fStack_19c = (float)param_3;
        fStack_1a4 = fVar32;
        /*UnityEngine.ContactPoint$$get_point*/ func_0x0329f028(&uStack_100,0);
        fVar24 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar24 = fVar24 - *(float *)(param_4 + 0x2d0);
        fVar32 = fVar32 - *(float *)(param_4 + 0x2d4);
        fVar38 = (float)param_3 - *(float *)(param_4 + 0x2d8);
        fVar28 = fStack_164 * fVar38;
        fVar36 = fVar28 + fVar34 * fVar24 + fVar35 * fVar32;
        /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(&uStack_100,0);
        fVar25 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar33 = (float)param_3;
        fVar29 = fStack_170 * fVar38;
        fVar37 = fVar29 + fStack_168 * fVar24 + fStack_16c * fVar32;
        /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(&uStack_100,0);
        fVar26 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar38 = fStack_1b4 * fVar38;
        if (fVar38 + fStack_1ac * fVar24 + fStack_1b0 * fVar32 <= 0.5) {
          uVar18 = 0;
        }
        else {
          /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(&uStack_100,0);
          param_3 = param_3 & 0xffffffff;
          uVar18 = (uint)(fVar38 < 0.0);
        }
        fVar34 = fStack_1b8;
        fVar35 = fStack_1bc;
        uVar14 = 100;
        if (fVar36 <= 0.5) {
          uVar14 = 0;
        }
        uVar11 = 10;
        if (-0.5 <= fVar36) {
          uVar11 = 0;
        }
        uVar14 = uVar11 | uVar14 | (uint)(fVar37 < -0.5);
        if (0.5 < fVar37) {
          uVar14 = uVar14 + 1;
        }
        if (iStack_1a8 < (int)(uVar18 + uVar14)) {
          uStack_1c8 = (ulong)CONCAT14(uVar18 != 0,(uint)(0.5 < fVar36));
          uStack_c8 = uStack_f8;
          uStack_d0 = uStack_100;
          uStack_b8 = uStack_e8;
          uStack_c0 = uStack_f0;
          uStack_b0 = uStack_e0;
          uStack_1d0 = (ulong)CONCAT14(0.5 < fVar37,(uint)(fVar37 < -0.5));
          uStack_1d4 = (uint)(fVar36 < -0.5);
          iStack_1a8 = uVar18 + uVar14;
        }
        fVar33 = fStack_164 * fVar33 + fStack_1b8 * fVar25 + fStack_1bc * fVar28;
        if (fVar36 <= 0.5) {
          unaff_x22 = 0;
        }
        else {
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            uStack_1d8 = (uint)param_3;
            fStack_1dc = fVar29;
            func_0x00f78ad0();
            param_3 = (ulong)uStack_1d8;
            fVar29 = fStack_1dc;
          }
          unaff_x22 = (ulong)(fStack_174 < ABS(fVar33));
        }
        fVar32 = (float)uStack_190;
        if (-0.5 <= fVar36) {
          bVar1 = false;
        }
        else {
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            uStack_1d8 = (uint)param_3;
            fStack_1dc = fVar29;
            func_0x00f78ad0();
            param_3 = (ulong)uStack_1d8;
            fVar29 = fStack_1dc;
          }
          bVar1 = fStack_174 < ABS(fVar33);
        }
        fVar33 = fStack_19c;
        fVar29 = fStack_170 * (float)param_3 + fStack_168 * fVar26 + fStack_16c * fVar29;
        if (fVar37 <= 0.5) {
          uVar14 = 0;
        }
        else {
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = (uint)(fStack_174 < ABS(fVar29));
        }
        fVar26 = fStack_194;
        fVar25 = fStack_198;
        fVar24 = fStack_1a0;
        iVar6 = (int)unaff_x22;
        if (-0.5 <= fVar37) {
          uVar11 = 100;
          if (iVar6 == 0) {
            uVar11 = 0;
          }
          uVar15 = 0;
          if (bVar1) {
            uVar15 = 10;
          }
          uVar15 = uVar15 | uVar11;
code_r0x015c4458:
          iVar16 = 0;
        }
        else {
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = 100;
          if (iVar6 == 0) {
            uVar11 = 0;
          }
          uVar15 = 0;
          if (bVar1) {
            uVar15 = 10;
          }
          uVar15 = uVar15 | uVar11;
          if (ABS(fVar29) <= fStack_174) goto code_r0x015c4458;
          iVar16 = 1;
        }
        unaff_d9 = (ulong)(uint)fVar26;
        unaff_d8 = (ulong)(uint)fStack_1c0;
        fVar32 = fVar32 * fVar33;
        uStack_190 = (ulong)(uint)(fVar32 + fVar26 * fVar24 + fVar25 * fStack_1a4);
        uStack_188 = 0;
        uVar18 = iVar16 + uVar15 + uVar14 + uVar18;
        bVar1 = iVar6 != 0;
        if (uVar18 <= uVar19) {
          uVar18 = uVar19;
          bVar1 = bVar2;
        }
      }
      uVar19 = uVar18;
      iVar5 = iVar5 + 1;
      iVar6 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(param_5,0);
      fVar33 = (float)param_3;
      bVar2 = bVar1;
    } while (iVar5 < iVar6);
  }
  uVar7 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(param_5,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
  lVar17 = 0;
  if (iVar5 != 0) {
    lVar8 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(param_5,0);
    if (lVar8 == 0) goto LAB_015c4b60;
    lVar17 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar8,uRam0000000003d534c8);
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  unaff_x22 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar17,0,0);
  uVar27 = 5;
  if ((uStack_1c8 & 0x100000000) == 0) {
    uVar27 = 0;
  }
  uVar30 = 4;
  if ((uStack_1d4 & 1) == 0) {
    uVar30 = uVar27;
  }
  uVar27 = 2;
  if ((uStack_1d0 & 1) == 0) {
    uVar27 = uVar30;
  }
  uVar30 = 3;
  if ((uStack_1d0 & 0x100000000) == 0) {
    uVar30 = uVar27;
  }
  if ((uStack_1c8 & 1) != 0) {
    uVar30 = 1;
  }
  lVar8 = 0x4a4;
  if ((int)unaff_x22 == 0) {
    lVar8 = 0x4a8;
  }
  fVar34 = *(float *)(param_4 + lVar8);
  unaff_d8 = (ulong)(uint)fVar34;
  fVar35 = (float)/*UnityEngine.ContactPoint$$get_separation*/ func_0x0329f0c0(&uStack_d0,0);
  if (fVar35 <= fVar34) {
    lVar8 = *(long *)(param_4 + 0x20);
    if (lVar8 != 0) {
      uStack_110 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      fVar33 = (float)uStack_190;
      /*Atlas.Gameplay.Kart.KartPhysicsCollisionInfo$$.ctor*/ func_0x015d5358(uStack_190,uStack_190 & 0xffffffff,&uStack_130,*(undefined8 *)(param_4 + 0x68)
                      ,param_5,unaff_x22,uVar30,0);
      uStack_158 = uStack_128;
      uStack_160 = uStack_130;
      uStack_148 = uStack_118;
      uStack_150 = uStack_120;
      uStack_140 = uStack_110;
      uVar7 = uStack_120;
      /*Atlas.Gameplay.Kart.OnCollisionDelegate$$Invoke*/ func_0x014b302c(lVar8,&uStack_160,0);
      fVar32 = (float)uVar7;
    }
    if (uVar19 == 0 && (unaff_x22 & 1) == 0) {
      /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(&uStack_d0,0);
      /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      if ((((1.0 <= (float)uStack_190) && (fVar32 <= _UNK_033f86cc)) &&
          (1 < *(int *)(param_4 + 0x1e0))) && (*(char *)(param_4 + 0x1d3) != '\0')) {
        *(undefined4 *)(param_4 + 0x1e0) = 0;
        *(undefined1 *)(param_4 + 0x1d3) = 0;
        *(undefined1 *)(param_4 + 0x339) = 1;
      }
    }
    else {
      if ((int)unaff_x22 == 0) {
        param_5 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(param_5,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_5,0,0);
        if (iVar5 != 0) {
          if (bVar1) {
            uVar27 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
            *(undefined8 *)(param_4 + 0x234) = **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
            *(undefined4 *)(param_4 + 0x23c) = uVar27;
            lVar8 = *(long *)(param_4 + 0x40);
            if (lVar8 == 0) goto LAB_015c4b60;
            if (*(float *)(lVar8 + 0x130) < (float)uStack_190) {
              uVar27 = *(undefined4 *)(lVar8 + 0x138);
              *(undefined4 *)(param_4 + 0x1c4) = uVar27;
              *(undefined4 *)(param_4 + 0x1cc) = uVar27;
              if (*(long *)(param_4 + 0x70) == 0) goto LAB_015c4b60;
              uVar9 = uStack_190;
              lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_4 + 0x70),0);
              fVar35 = (float)uVar9;
              if (lVar8 == 0) goto LAB_015c4b60;
              fVar34 = (float)/*UnityEngine.Transform$$get_up*/ func_0x03275714(lVar8,0);
              unaff_d8 = (ulong)(uint)fVar34;
              unaff_d9 = (ulong)(uint)fVar35;
              fVar32 = (float)/*UnityEngine.Random$$Range*/ func_0x03252854(0x40a00000,0x41200000,0);
              iVar5 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0xffffffff,2,0);
              fVar32 = fVar32 * (float)iVar5;
              fVar35 = fVar35 * fVar32;
              fVar33 = fVar33 * fVar32;
              uVar27 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar34 * fVar32,0);
              *(undefined4 *)(param_4 + 0x234) = uVar27;
              *(float *)(param_4 + 0x238) = fVar35;
              *(float *)(param_4 + 0x23c) = fVar33;
            }
            if ((*(long *)(param_4 + 0x70) == 0) ||
               (lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_4 + 0x70),0), lVar8 == 0))
            goto LAB_015c4b60;
            /*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar8,0);
            fVar34 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            unaff_d8 = (ulong)(uint)fVar34;
            unaff_d9 = (ulong)(uint)fVar33;
            param_5 = 0x3ca3000;
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (*(long *)(param_4 + 0x40) == 0) goto LAB_015c4b60;
            fVar29 = 1.0 / SQRT(fVar33 * fVar33 + fVar34 * fVar34 + 0.0);
            fVar24 = (float)uStack_190;
            fVar35 = fVar24 * fVar29 * -fVar33;
            fVar32 = *(float *)(*(long *)(param_4 + 0x40) + 0x114);
            *(ulong *)(param_4 + 0x228) =
                 CONCAT44(fVar29 * -0.0 * fVar24 * fVar32,-fVar34 * fVar29 * fVar24 * fVar32);
            *(float *)(param_4 + 0x230) = fVar35 * fVar32;
            *(undefined4 *)(param_4 + 0xd0) = 0;
            *(undefined4 *)(param_4 + 0xec) = 0;
            *(undefined4 *)(param_4 + 0xdc) = 0;
            *(undefined4 *)(param_4 + 0x10c) = 0;
            *(undefined1 *)(param_4 + 0x118) = 0;
            *(undefined4 *)(param_4 + 0x1f0) = 0;
          }
          else {
            if ((*(long *)(param_4 + 0x70) == 0) ||
               (lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_4 + 0x70),0), lVar8 == 0))
            goto LAB_015c4b60;
            fVar29 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
            unaff_d8 = (ulong)(uint)fVar29;
            unaff_d9 = (ulong)(uint)fVar32;
            fVar35 = fVar32;
            fVar34 = fVar33;
            fVar24 = (float)/*UnityEngine.ContactPoint$$get_point*/ func_0x0329f028(&uStack_d0,0);
            fVar33 = fVar33 - fVar34;
            fVar35 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar29 - fVar24,fVar32 - fVar35,0);
            if (*(long *)(param_4 + 0x70) == 0) goto LAB_015c4b60;
            unaff_d9 = (ulong)(uint)fVar35;
            unaff_d8 = (ulong)(uint)fVar33;
            fVar34 = *(float *)(param_4 + 0x194);
            param_5 = (ulong)(uint)fVar34;
            fVar25 = *(float *)(param_4 + 0x438);
            fVar26 = *(float *)(param_4 + 0x450);
            fVar24 = *(float *)(param_4 + 0x4b0);
            fVar29 = *(float *)(param_4 + 0x4b4);
            fVar32 = fVar33;
            lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_4 + 0x70),0);
            if (lVar8 == 0) goto LAB_015c4b60;
            fVar29 = fVar29 - fVar24;
            fVar34 = (ABS(fVar34) / (fVar25 + fVar26)) * fVar29;
            /*UnityEngine.Transform$$get_right*/ func_0x03275618(lVar8,0);
            fVar25 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            fVar32 = fVar33 * fVar32 + fVar35 * fVar25 + fVar29 * 0.0;
            fVar35 = 1.0;
            if (fVar32 == 0.0 || 0.0 > fVar32) {
              fVar35 = 0.0;
            }
            fVar33 = 1.0;
            if (0.0 <= fVar32) {
              fVar33 = 0.0;
            }
            *(float *)(param_4 + 0x210) = (fVar24 + fVar34) * (fVar35 - fVar33);
          }
          /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(&uStack_d0,0);
          /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
          if ((((1.0 <= (float)uStack_190) && (fVar35 <= _UNK_033f86cc)) &&
              (1 < *(int *)(param_4 + 0x1e0))) && (*(char *)(param_4 + 0x1d3) != '\0')) {
            *(undefined4 *)(param_4 + 0x1e0) = 0;
            *(undefined1 *)(param_4 + 0x1d3) = 0;
            *(undefined1 *)(param_4 + 0x339) = 1;
          }
        }
      }
      else {
        if (((*(long *)(param_4 + 0x70) == 0) ||
            (lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_4 + 0x70),0), lVar8 == 0)) ||
           (fVar35 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0), lVar17 == 0)) {
LAB_015c4b60:
          auVar39 = func_0x00f78af4();
          ppuVar3 = &puStack_1f0;
          ppuVar20 = &puStack_1f0;
          pcStack_1e8 = Atlas_Gameplay_Kart_KartComposite__OnCollisionStay;
          lVar8 = *(long *)(auVar39._0_8_ + 0x10);
          auVar39._8_8_ = auVar39._8_8_;
          auVar39._0_8_ = lVar8;
          puStack_1f0 = &stack0xfffffffffffffff0;
          if (lVar8 == 0) {
            pcVar22 = (code *)&Atlas_Gameplay_Kart_KartPhysics__OnCollisionStay;
            auVar39 = func_0x00f78af4();
          }
          else {
            pcVar22 = Atlas_Gameplay_Kart_KartComposite__OnCollisionStay;
            ppuVar3 = (undefined1 **)auStack_1e0;
            ppuVar20 = (undefined1 **)&stack0xfffffffffffffff0;
          }
          lVar10 = auVar39._8_8_;
          lVar8 = auVar39._0_8_;
          *(ulong *)((long)ppuVar3 + -0x40) = unaff_d9;
          *(ulong *)((long)ppuVar3 + -0x38) = unaff_d8;
          *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
          *(long *)((long)ppuVar3 + -0x28) = lVar17;
          *(ulong *)((long)ppuVar3 + -0x20) = param_5;
          *(long *)((long)ppuVar3 + -0x18) = param_4;
          *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar20;
          *(code **)((long)ppuVar3 + -8) = pcVar22;
          if ((bRam0000000003eb537f & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb537f = 1;
          }
          *(undefined4 *)((long)ppuVar3 + -0x50) = 0;
          *(undefined8 *)((long)ppuVar3 + -0x68) = 0;
          *(undefined8 *)((long)ppuVar3 + -0x70) = 0;
          *(undefined8 *)((long)ppuVar3 + -0x58) = 0;
          *(undefined8 *)((long)ppuVar3 + -0x60) = 0;
          if (lVar10 == 0) {
            auVar39 = func_0x00f78af4();
            puVar4 = (undefined1 *)((long)ppuVar3 + -0xb0);
            puVar21 = (undefined1 *)((long)ppuVar3 + -0xb0);
            *(undefined1 **)((long)ppuVar3 + -0xb0) = (undefined1 *)((long)ppuVar3 + -0x10);
            *(code **)((long)ppuVar3 + -0xa8) = Atlas_Gameplay_Kart_KartComposite__OnCollisionExit;
            lVar17 = *(long *)(auVar39._0_8_ + 0x10);
            auVar40._8_8_ = auVar39._8_8_;
            auVar40._0_8_ = lVar17;
            if (lVar17 == 0) {
              puVar23 = &Atlas_Gameplay_Kart_KartPhysics__OnCollisionExit;
              auVar40 = func_0x00f78af4();
            }
            else {
              puVar21 = *(undefined1 **)((long)ppuVar3 + -0xb0);
              puVar23 = *(undefined **)((long)ppuVar3 + -0xa8);
              puVar4 = (undefined1 *)((long)ppuVar3 + -0xa0);
            }
            *(ulong *)(puVar4 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar4 + -0x28) = 0x3eb5000;
            *(undefined8 *)(puVar4 + -0x20) = 0;
            *(long *)(puVar4 + -0x18) = lVar8;
            *(undefined1 **)(puVar4 + -0x10) = puVar21;
            *(undefined **)(puVar4 + -8) = puVar23;
            if ((bRam0000000003eb5380 & 1) == 0) {
              func_0x00f78a20(0x3d265d8);
              bRam0000000003eb5380 = 1;
            }
            lVar17 = *(long *)(auVar40._0_8_ + 0x28);
            if (lVar17 != 0) {
              uVar7 = *(undefined8 *)(auVar40._0_8_ + 0x68);
              puVar13 = *(undefined4 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
              uVar27 = *puVar13;
              uVar30 = puVar13[1];
              uVar31 = puVar13[2];
              *(undefined8 *)(puVar4 + -0x40) = 0;
              *(undefined8 *)(puVar4 + -0x58) = 0;
              *(undefined8 *)(puVar4 + -0x60) = 0;
              *(undefined8 *)(puVar4 + -0x48) = 0;
              *(undefined8 *)(puVar4 + -0x50) = 0;
              /*Atlas.Gameplay.Kart.KartPhysicsCollisionInfo$$.ctor*/ func_0x015d5358(uVar27,uVar30,uVar31,puVar4 + -0x60,uVar7,auVar40._8_8_,0,0,0);
              *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0x58);
              *(undefined8 *)(puVar4 + -0x90) = *(undefined8 *)(puVar4 + -0x60);
              *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x48);
              *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0x50);
              *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)(puVar4 + -0x40);
              /*Atlas.Gameplay.Kart.OnCollisionDelegate$$Invoke*/ func_0x014b302c(lVar17,puVar4 + -0x90,0);
            }
            return;
          }
          uVar7 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(lVar10,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
          if ((uVar9 & 1) == 0) {
            fVar34 = *(float *)(lVar8 + 0x4ac);
            iVar5 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(lVar10,0);
            fVar35 = _UNK_033f86cc;
            if (0 < iVar5) {
              iVar5 = 0;
              do {
                /*UnityEngine.Collision$$GetContact*/ func_0x0329ef14((undefined1 *)((long)ppuVar3 + -0x98),lVar10,iVar5,0);
                uVar7 = *(undefined8 *)((long)ppuVar3 + -0x88);
                *(undefined8 *)((long)ppuVar3 + -0x68) = *(undefined8 *)((long)ppuVar3 + -0x90);
                *(undefined8 *)((long)ppuVar3 + -0x70) = *(undefined8 *)((long)ppuVar3 + -0x98);
                *(undefined8 *)((long)ppuVar3 + -0x58) = *(undefined8 *)((long)ppuVar3 + -0x80);
                *(undefined8 *)((long)ppuVar3 + -0x60) = uVar7;
                *(undefined4 *)((long)ppuVar3 + -0x50) = *(undefined4 *)((long)ppuVar3 + -0x78);
                /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034((undefined1 *)((long)ppuVar3 + -0x70),0);
                if ((float)uVar7 <= fVar35) {
                  if (*(char *)(lVar8 + 0x1d3) != '\0') {
                    *(undefined4 *)(lVar8 + 0x1e0) = 0;
                    *(undefined1 *)(lVar8 + 0x1d3) = 0;
                    *(undefined1 *)(lVar8 + 0x339) = 1;
                  }
                  fVar32 = (float)/*UnityEngine.ContactPoint$$get_separation*/ func_0x0329f0c0((undefined1 *)((long)ppuVar3 + -0x70),0);
                  if (fVar32 <= fVar34) {
                    /*UnityEngine.ContactPoint$$get_separation*/ func_0x0329f0c0((undefined1 *)((long)ppuVar3 + -0x70),0);
                    if (*(float *)(lVar8 + 0x4b8) == 0.0) {
                      return;
                    }
                    if (*(float *)(lVar8 + 0x194) <= *(float *)(lVar8 + 0x4bc)) {
                      return;
                    }
                    *(float *)(lVar8 + 0x214) = *(float *)(lVar8 + 0x4b8);
                    return;
                  }
                }
                iVar5 = iVar5 + 1;
                iVar6 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(lVar10,0);
              } while (iVar5 < iVar6);
            }
          }
          return;
        }
        unaff_d8 = (ulong)(uint)fVar35;
        unaff_d9 = (ulong)(uint)fVar32;
        fVar34 = fVar32;
        fVar29 = fVar33;
        lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar17,0);
        if ((lVar8 == 0) || (lVar8 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar8,0), lVar8 == 0)) goto LAB_015c4b60;
        fVar24 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
        uVar9 = (ulong)(uint)(fVar33 - fVar29);
        fVar35 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar35 - fVar24,fVar32 - fVar34,0);
        plVar12 = *(long **)(lVar17 + 0xa0);
        if (plVar12 == (long *)0x0) {
          return;
        }
        if (*(byte *)(*plVar12 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) {
          return;
        }
        if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 +
                     -8) != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78) {
          return;
        }
        if ((plVar12 == (long *)0x0) || (plVar12[2] == 0)) goto LAB_015c4b60;
        unaff_d9 = (ulong)(uint)fVar35;
        unaff_d8 = uVar9 & 0xffffffff;
        fVar34 = *(float *)(plVar12[2] + 0x194);
        fVar33 = *(float *)(param_4 + 0x194) - fVar34;
        fVar32 = *(float *)(param_4 + 0x438) + *(float *)(param_4 + 0x450);
        fVar34 = ABS(*(float *)(param_4 + 0x194) - fVar34) / fVar32;
        if (0.0 <= fVar33) {
          lVar8 = *(long *)(param_4 + 0x70);
          if (lVar8 == 0) goto LAB_015c4b60;
          fVar29 = *(float *)(param_4 + 0x498);
          fVar24 = *(float *)(param_4 + 0x49c);
        }
        else {
          lVar8 = *(long *)(param_4 + 0x70);
          if (lVar8 == 0) goto LAB_015c4b60;
          fVar29 = *(float *)(param_4 + 0x490);
          fVar24 = *(float *)(param_4 + 0x494);
        }
        lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
        if (lVar8 == 0) goto LAB_015c4b60;
        /*UnityEngine.Transform$$get_right*/ func_0x03275618(lVar8,0);
        fVar25 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar32 = (float)uVar9 * fVar33 + fVar35 * fVar25 + fVar32 * 0.0;
        fVar35 = 1.0;
        if (fVar32 == 0.0 || 0.0 > fVar32) {
          fVar35 = 0.0;
        }
        fVar33 = 1.0;
        if (0.0 <= fVar32) {
          fVar33 = 0.0;
        }
        *(float *)(param_4 + 0x210) = (fVar29 + fVar34 * (fVar24 - fVar29)) * (fVar35 - fVar33);
      }
      *(undefined4 *)(param_4 + 0x5b4) = *(undefined4 *)(param_4 + 0x4cc);
    }
  }
  return;
}



// ============================================================
// RVA: 0x15c4b80 | Atlas.Gameplay.Kart.KartPhysics.OnCollisionStay
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartPhysics__OnCollisionStay(long param_1,long param_2)

{
  float fVar1;
  undefined1 **ppuVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 unaff_x22;
  undefined1 **ppuVar9;
  code *pcVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000003eb537f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537f = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (param_2 == 0) {
    auVar16 = func_0x00f78af4();
    ppuVar2 = &puStack_b0;
    ppuVar9 = &puStack_b0;
    pcStack_a8 = Atlas_Gameplay_Kart_KartComposite__OnCollisionExit;
    lVar7 = *(long *)(auVar16._0_8_ + 0x10);
    auVar16._8_8_ = auVar16._8_8_;
    auVar16._0_8_ = lVar7;
    puStack_b0 = &stack0xfffffffffffffff0;
    if (lVar7 == 0) {
      pcVar10 = (code *)&Atlas_Gameplay_Kart_KartPhysics__OnCollisionExit;
      auVar16 = func_0x00f78af4();
    }
    else {
      pcVar10 = Atlas_Gameplay_Kart_KartComposite__OnCollisionExit;
      ppuVar2 = (undefined1 **)auStack_a0;
      ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
    }
    *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_x22;
    *(undefined8 *)((long)ppuVar2 + -0x28) = 0x3eb5000;
    *(undefined8 *)((long)ppuVar2 + -0x20) = 0;
    *(long *)((long)ppuVar2 + -0x18) = param_1;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar9;
    *(code **)((long)ppuVar2 + -8) = pcVar10;
    if ((bRam0000000003eb5380 & 1) == 0) {
      func_0x00f78a20(0x3d265d8);
      bRam0000000003eb5380 = 1;
    }
    lVar7 = *(long *)(auVar16._0_8_ + 0x28);
    if (lVar7 != 0) {
      uVar5 = *(undefined8 *)(auVar16._0_8_ + 0x68);
      puVar8 = *(undefined4 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
      uVar12 = *puVar8;
      uVar13 = puVar8[1];
      uVar14 = puVar8[2];
      *(undefined8 *)((long)ppuVar2 + -0x40) = 0;
      *(undefined8 *)((long)ppuVar2 + -0x58) = 0;
      *(undefined8 *)((long)ppuVar2 + -0x60) = 0;
      *(undefined8 *)((long)ppuVar2 + -0x48) = 0;
      *(undefined8 *)((long)ppuVar2 + -0x50) = 0;
      /*Atlas.Gameplay.Kart.KartPhysicsCollisionInfo$$.ctor*/ func_0x015d5358(uVar12,uVar13,uVar14,(undefined1 *)((long)ppuVar2 + -0x60),uVar5,auVar16._8_8_
                      ,0,0,0);
      *(undefined8 *)((long)ppuVar2 + -0x88) = *(undefined8 *)((long)ppuVar2 + -0x58);
      *(undefined8 *)((long)ppuVar2 + -0x90) = *(undefined8 *)((long)ppuVar2 + -0x60);
      *(undefined8 *)((long)ppuVar2 + -0x78) = *(undefined8 *)((long)ppuVar2 + -0x48);
      *(undefined8 *)((long)ppuVar2 + -0x80) = *(undefined8 *)((long)ppuVar2 + -0x50);
      *(undefined8 *)((long)ppuVar2 + -0x70) = *(undefined8 *)((long)ppuVar2 + -0x40);
      /*Atlas.Gameplay.Kart.OnCollisionDelegate$$Invoke*/ func_0x014b302c(lVar7,(undefined1 *)((long)ppuVar2 + -0x90),0);
    }
    return;
  }
  uVar5 = /*UnityEngine.Collision$$get_rigidbody*/ func_0x0329edf0(param_2,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
  if ((uVar6 & 1) == 0) {
    fVar15 = *(float *)(param_1 + 0x4ac);
    iVar3 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(param_2,0);
    fVar1 = _UNK_033f86cc;
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        /*UnityEngine.Collision$$GetContact*/ func_0x0329ef14(&uStack_98,param_2,iVar3,0);
        uStack_68 = uStack_90;
        uStack_70 = uStack_98;
        uStack_58 = uStack_80;
        uStack_60 = uStack_88;
        uStack_50 = uStack_78;
        uVar5 = uStack_88;
        /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(&uStack_70,0);
        if ((float)uVar5 <= fVar1) {
          if (*(char *)(param_1 + 0x1d3) != '\0') {
            *(undefined4 *)(param_1 + 0x1e0) = 0;
            *(undefined1 *)(param_1 + 0x1d3) = 0;
            *(undefined1 *)(param_1 + 0x339) = 1;
          }
          fVar11 = (float)/*UnityEngine.ContactPoint$$get_separation*/ func_0x0329f0c0(&uStack_70,0);
          if (fVar11 <= fVar15) {
            /*UnityEngine.ContactPoint$$get_separation*/ func_0x0329f0c0(&uStack_70,0);
            if (*(float *)(param_1 + 0x4b8) == 0.0) {
              return;
            }
            if (*(float *)(param_1 + 0x194) <= *(float *)(param_1 + 0x4bc)) {
              return;
            }
            *(float *)(param_1 + 0x214) = *(float *)(param_1 + 0x4b8);
            return;
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = /*UnityEngine.Collision$$get_contactCount*/ func_0x0329ef0c(param_2,0);
      } while (iVar3 < iVar4);
    }
  }
  return;
}



// ============================================================
// RVA: 0x15c4d1c | Atlas.Gameplay.Kart.KartPhysics.OnCollisionExit
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__OnCollisionExit(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb5380 & 1) == 0) {
    func_0x00f78a20(0x3d265d8);
    bRam0000000003eb5380 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    puVar1 = *(undefined4 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    /*Atlas.Gameplay.Kart.KartPhysicsCollisionInfo$$.ctor*/ func_0x015d5358(*puVar1,puVar1[1],puVar1[2],&uStack_60,*(undefined8 *)(param_1 + 0x68),param_2,0
                    ,0,0);
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_70 = uStack_40;
    /*Atlas.Gameplay.Kart.OnCollisionDelegate$$Invoke*/ func_0x014b302c(lVar2,&uStack_90,0);
  }
  return;
}



// ============================================================
// RVA: 0x15c4df0 | Atlas.Gameplay.Kart.KartPhysics.OnTriggerEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x015c5004: Changing call to branch */

void Atlas_Gameplay_Kart_KartPhysics__OnTriggerEnter
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  ushort uVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar5;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined4 *extraout_x8;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long unaff_x22;
  long lVar16;
  code *pcVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar19;
  undefined8 uVar20;
  undefined *puVar21;
  float fVar22;
  float fVar23;
  float extraout_s0;
  float fVar24;
  float fVar25;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong auStack_130 [24];
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  puVar3 = auStack_60;
  puVar6 = &stack0xfffffffffffffff0;
  lVar15 = 0x3eb5000;
  if ((bRam0000000003eb537b & 1) == 0) {
    func_0x00f78a20(0x3d534c0);
    func_0x00f78a20(0x3d53510);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537b = 1;
  }
  uStack_58 = 0;
  if (param_5 != 0) {
    lVar10 = 0x3d23990;
    lVar16 = 0x3d23990;
    lVar15 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_5,uRam0000000003d53510);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar15,0,0);
    unaff_x22 = lVar10;
    if (iVar5 == 0) {
LAB_015c4f74:
      lVar15 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_5,uRam0000000003d534c0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar15,0,0);
      unaff_x22 = lVar10;
      if (iVar5 == 0) {
LAB_015c4ff4:
        lVar10 = *(long *)(param_4 + 0x10);
        if (lVar10 == 0) {
          return;
        }
        uVar20 = 0x15c5008;
        lVar16 = param_5;
        goto code_r0x014b45bc;
      }
      unaff_x22 = lVar16;
      if (lVar15 != 0) {
        unaff_x22 = *(long *)(param_4 + 0x60);
        uStack_58 = *(undefined8 *)(lVar15 + 0x18);
        lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar15,0);
        if ((lVar10 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar10,0), unaff_x22 != 0)) {
          /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$SetKartTriggerEffect*/ func_0x015da644(unaff_x22,&uStack_58,0);
          goto LAB_015c4ff4;
        }
      }
    }
    else if (lVar15 != 0) {
      if (*(char *)(lVar15 + 0x22) == '\0') goto LAB_015c4f38;
      lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
      if (lVar9 != 0) {
        /*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar9,0);
        fVar22 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        unaff_x22 = lVar16;
        if (*(long *)(param_4 + 0x70) != 0) {
          unaff_d9 = (ulong)(uint)fVar22;
          unaff_d8 = (ulong)(uint)param_3;
          fVar24 = param_2;
          fVar25 = param_3;
          lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_4 + 0x70),0);
          if (lVar9 != 0) {
            /*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar9,0);
            fVar23 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            if (0.0 < param_3 * fVar25 + fVar22 * fVar23 + param_2 * fVar24) {
              lVar9 = *(long *)(param_4 + 0x40);
              if (lVar9 == 0) goto LAB_015c5024;
              *(undefined4 *)(param_4 + 0xd0) = *(undefined4 *)(lVar9 + 0xac);
              *(undefined8 *)(param_4 + 0xd4) = *(undefined8 *)(lVar9 + 0xa4);
              *(undefined1 *)(param_4 + 0x332) = 1;
            }
LAB_015c4f38:
            if (*(char *)(lVar15 + 0x21) != '\0') {
              *(undefined1 *)(param_4 + 0x1d3) = 1;
              *(undefined1 *)(param_4 + 0x338) = 1;
            }
            if (*(char *)(lVar15 + 0x23) != '\0') {
              *(int *)(param_4 + 0x114) = *(int *)(param_4 + 0x114) + 1;
            }
            if (*(char *)(lVar15 + 0x24) != '\0') {
              *(int *)(param_4 + 0x218) = *(int *)(param_4 + 0x218) + 1;
            }
            goto LAB_015c4f74;
          }
        }
      }
    }
  }
LAB_015c5024:
  auVar26 = func_0x00f78af4();
  ppuVar2 = &puStack_70;
  ppuVar19 = &puStack_70;
  pcStack_68 = Atlas_Gameplay_Kart_KartComposite__OnTriggerStay;
  lVar10 = *(long *)(auVar26._0_8_ + 0x10);
  auVar26._8_8_ = auVar26._8_8_;
  auVar26._0_8_ = lVar10;
  puStack_70 = puVar6;
  if (lVar10 == 0) {
    pcVar17 = (code *)&Atlas_Gameplay_Kart_KartPhysics__OnTriggerStay;
    auVar26 = func_0x00f78af4();
  }
  else {
    pcVar17 = Atlas_Gameplay_Kart_KartComposite__OnTriggerStay;
    ppuVar2 = (undefined1 **)auStack_60;
    ppuVar19 = (undefined1 **)puVar6;
  }
  lVar10 = auVar26._0_8_;
  *(long *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(long *)((long)ppuVar2 + -0x28) = lVar15;
  *(long *)((long)ppuVar2 + -0x20) = param_4;
  *(long *)((long)ppuVar2 + -0x18) = param_5;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar19;
  *(code **)((long)ppuVar2 + -8) = pcVar17;
  if ((bRam0000000003eb537c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537c = 1;
  }
  if (auVar26._8_8_ != 0) {
    uVar20 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(auVar26._8_8_,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar20,0,0);
    if ((iVar5 != 0) && (*(float *)(lVar10 + 0x5b8) < 0.0)) {
      *(undefined4 *)(lVar10 + 0x5b8) = 0x3df5c28f;
    }
    return;
  }
  auVar26 = func_0x00f78af4();
  puVar3 = (undefined1 *)((long)ppuVar2 + -0x40);
  puVar6 = (undefined1 *)((long)ppuVar2 + -0x40);
  *(undefined1 **)((long)ppuVar2 + -0x40) = (undefined1 *)((long)ppuVar2 + -0x10);
  *(code **)((long)ppuVar2 + -0x38) = Atlas_Gameplay_Kart_KartComposite__OnTriggerExit;
  lVar15 = *(long *)(auVar26._0_8_ + 0x10);
  auVar27._8_8_ = auVar26._8_8_;
  auVar27._0_8_ = lVar15;
  if (lVar15 == 0) {
    puVar21 = &Atlas_Gameplay_Kart_KartPhysics__OnTriggerExit;
    auVar27 = func_0x00f78af4();
  }
  else {
    puVar3 = (undefined1 *)((long)ppuVar2 + -0x30);
    puVar6 = *(undefined1 **)((long)ppuVar2 + -0x40);
    puVar21 = *(undefined **)((long)ppuVar2 + -0x38);
  }
  param_5 = auVar27._8_8_;
  lVar15 = auVar27._0_8_;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = 0x3eb5000;
  *(undefined8 *)(puVar3 + -0x20) = 0;
  *(long *)(puVar3 + -0x18) = lVar10;
  *(undefined1 **)(puVar3 + -0x10) = puVar6;
  *(undefined **)(puVar3 + -8) = puVar21;
  if ((bRam0000000003eb537d & 1) == 0) {
    func_0x00f78a20(0x3d53510);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537d = 1;
  }
  if (param_5 != 0) {
    lVar10 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_5,uRam0000000003d53510);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
    if (iVar5 != 0) {
      if (lVar10 == 0) goto code_r0x015c520c;
      if (*(char *)(lVar10 + 0x23) != '\0') {
        iVar5 = *(int *)(lVar15 + 0x114) + -1;
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        *(int *)(lVar15 + 0x114) = iVar5;
      }
      if (*(char *)(lVar10 + 0x24) != '\0') {
        iVar5 = *(int *)(lVar15 + 0x218) + -1;
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        *(int *)(lVar15 + 0x218) = iVar5;
      }
    }
    lVar10 = *(long *)(lVar15 + 0x18);
    if (lVar10 == 0) {
      return;
    }
    puVar6 = *(undefined1 **)(puVar3 + -0x10);
    uVar20 = *(undefined8 *)(puVar3 + -8);
    param_4 = *(long *)(puVar3 + -0x20);
    lVar16 = *(long *)(puVar3 + -0x18);
    unaff_x22 = *(long *)(puVar3 + -0x30);
    lVar15 = *(long *)(puVar3 + -0x28);
code_r0x014b45bc:
    puVar18 = puVar3 + -0x60;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(long *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = lVar15;
    *(long *)(puVar3 + -0x20) = param_4;
    *(long *)(puVar3 + -0x18) = lVar16;
    *(undefined1 **)(puVar3 + -0x10) = puVar6;
    *(undefined8 *)(puVar3 + -8) = uVar20;
    *(long *)(puVar3 + -0x60) = lVar10;
    *(long *)(puVar3 + -0x58) = param_5;
    lVar15 = *(long *)(lVar10 + 0x68);
    if (lVar15 == 0) {
      lVar16 = 1;
    }
    else {
      lVar16 = *(long *)(lVar15 + 0x18);
      if (lVar16 == 0) {
        return;
      }
      puVar18 = (undefined1 *)(lVar15 + 0x20);
    }
    lVar15 = 0;
    do {
      lVar9 = *(long *)(puVar18 + lVar15 * 8);
      pcVar17 = *(code **)(lVar9 + 0x10);
      plVar11 = *(long **)(lVar9 + 0x20);
      lVar9 = *(long *)(lVar9 + 0x28);
      if (*(short *)(lVar9 + 0x48) == -1) {
        func_0x00f78ad8(lVar9);
      }
      iVar5 = func_0x00f78a4c(lVar9);
      if (iVar5 == 0) {
        puVar6 = puVar3 + -0x68;
        if (plVar11 == (long *)0x0) goto code_r0x014b46e8;
        if (((*(short *)(lVar9 + 0x48) == -1) || ((*(byte *)(*plVar11 + 0x115) & 1) != 0)) ||
           (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x014b46d0;
        iVar5 = func_0x00f78a44(lVar9);
        iVar4 = func_0x00f78ec0(lVar9);
        if (iVar5 == 0) {
          uVar1 = *(ushort *)(lVar9 + 0x48);
          if (iVar4 == 0) {
            lVar9 = *plVar11 + (ulong)uVar1 * 0x10;
            (**(code **)(lVar9 + 0x138))
                      (plVar11,*(undefined8 *)(puVar3 + -0x58),*(undefined8 *)(lVar9 + 0x140));
            goto code_r0x014b46f0;
          }
          lVar9 = func_0x00f78a48(lVar9);
          uVar20 = *(undefined8 *)(puVar3 + -0x58);
          lVar12 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar9) {
                puVar8 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar1) * 0x10 + 0x138)
                ;
                goto code_r0x014b47c4;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar11,lVar9,(ulong)uVar1);
code_r0x014b47c4:
          pcVar17 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          uVar20 = *(undefined8 *)(puVar3 + -0x58);
          if (iVar4 == 0) {
            uVar7 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar11;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar9 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x014b4794;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar11);
code_r0x014b4794:
            uVar7 = *(undefined8 *)(lVar12 + 8);
          }
          puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar9);
          pcVar17 = (code *)*puVar8;
        }
        (*pcVar17)(plVar11,uVar20,puVar8);
      }
      else if (*(char *)(lVar9 + 0x4a) == '\x01') {
        puVar6 = *(undefined1 **)(puVar3 + -0x58);
code_r0x014b46e8:
        (*pcVar17)(puVar6,lVar9);
      }
      else {
code_r0x014b46d0:
        (*pcVar17)(plVar11,*(undefined8 *)(puVar3 + -0x58),lVar9);
      }
code_r0x014b46f0:
      lVar15 = lVar15 + 1;
      if (lVar15 == lVar16) {
        return;
      }
    } while( true );
  }
code_r0x015c520c:
  auVar26 = func_0x00f78af4();
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(code **)(puVar3 + -0x38) = Atlas_Gameplay_Kart_KartComposite__OnUseShield;
  lVar15 = *(long *)(auVar26._0_8_ + 0x10);
  if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x60), lVar15 != 0)) {
    *(undefined1 (*) [16])(puVar3 + -0x50) = auVar27;
    *(undefined8 *)(puVar3 + -0x40) = *(undefined8 *)(puVar3 + -0x40);
    *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar3 + -0x38);
    plVar11 = *(long **)(lVar15 + 200);
    if ((plVar11 != (long *)0x0) &&
       (iVar5 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0),0),
       iVar5 != 0)) {
      if (*(long *)(lVar15 + 200) == 0) {
        lVar10 = func_0x00f78af4();
        *(ulong *)(puVar3 + -0x80) = unaff_d9;
        *(ulong *)(puVar3 + -0x78) = unaff_d8;
        *(long *)(puVar3 + -0x70) = lVar15;
        *(long *)(puVar3 + -0x68) = auVar26._8_8_;
        *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x40;
        *(undefined **)(puVar3 + -0x58) =
             &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit;
        plVar11 = *(long **)(lVar10 + 200);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x2d8))(plVar11,1,*(undefined8 *)(*plVar11 + 0x2e0));
          plVar11 = *(long **)(lVar10 + 200);
          if (plVar11 == (long *)0x0) {
            auVar26 = func_0x00f78af4();
            if (*(long *)(auVar26._0_8_ + 200) == auVar26._8_8_) {
              *(undefined8 *)(auVar26._0_8_ + 200) = 0;
              return;
            }
            return;
          }
          uVar13 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
          if ((uVar13 & 1) == 0) {
            *(undefined8 *)(lVar10 + 200) = 0;
          }
        }
        if ((0.0 <= extraout_s0) && (*(float *)(lVar10 + 0x5c) < extraout_s0)) {
          *(float *)(lVar10 + 0x5c) = extraout_s0;
        }
        return;
      }
      /*Atlas.Gameplay.Usables.Usable$$MarkForDestroy*/ func_0x01523e20(*(long *)(lVar15 + 200),0,0);
    }
    *(long *)(lVar15 + 200) = auVar26._8_8_;
    return;
  }
  auVar26 = func_0x00f78af4();
  lVar15 = auVar26._0_8_;
  *(undefined1 (*) [16])(puVar3 + -0x60) = auVar27;
  *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x40;
  *(code **)(puVar3 + -0x48) = Atlas_Gameplay_Kart_KartComposite__OnFinishGameResultUpdated;
  if (*auVar26._8_8_ != *(int *)(lVar15 + 0x54)) {
    return;
  }
  if (*(long *)(lVar15 + 0x78) != 0) {
    lVar10 = *(long *)(*(long *)(lVar15 + 0x78) + 0x230);
    if (lVar10 == 0) {
      uVar13 = (ulong)(uint)auVar26._8_8_[10];
    }
    else {
      lVar16 = *(long *)(lVar10 + 0x50);
      uVar20 = /*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(lVar10,0);
      if (lVar16 == 0) goto LAB_015c52ec;
      uVar20 = /*Atlas.UI.ArcadeEventMetagameData$$GetMedal*/ func_0x0144d6c0(lVar16,uVar20,0);
      uVar13 = /*Atlas.Arcade.ArcadeEvent$$GetFakeFinishPositionForMedal*/ func_0x0144dd6c(uVar20,0);
    }
    *(int *)(lVar15 + 0xa0) = (int)uVar13;
    if (*(long *)(lVar15 + 0x30) != 0) {
      /*Atlas.Gameplay.Kart.KartVisualAnimation$$FinishResultsUpdated*/ func_0x015e69b0(*(long *)(lVar15 + 0x30),uVar13,0);
      lVar10 = *(long *)(lVar15 + 0x10);
      if (lVar10 != 0) {
        *(undefined4 *)(lVar10 + 0xd0) = 0;
        *(undefined4 *)(lVar10 + 0xec) = 0;
        *(undefined4 *)(lVar10 + 0xdc) = 0;
        *(undefined4 *)(lVar10 + 0x10c) = 0;
        *(undefined1 *)(lVar10 + 0x118) = 0;
        *(undefined4 *)(lVar10 + 0x1f0) = 0;
        *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
        *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
        *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x50);
        *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x48);
        if ((*(long *)(lVar15 + 0x10) != 0) &&
           (lVar10 = *(long *)(*(long *)(lVar15 + 0x10) + 0x60), lVar10 != 0)) {
          iVar5 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar10,0);
          if (iVar5 == 0) {
            return;
          }
          if (((*(long *)(lVar15 + 0x10) != 0) &&
              (lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + 0x60), lVar15 != 0)) &&
             (plVar11 = *(long **)(lVar15 + 200), plVar11 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x015c3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
            return;
          }
        }
        lVar15 = func_0x00f78af4();
        *(undefined8 *)((long)extraout_x8 + 0xd) = 0;
        *(undefined8 *)((long)extraout_x8 + 5) = 0;
        extraout_x8[7] = 0;
        *(undefined8 *)((long)extraout_x8 + 0x15) = 0;
        iVar5 = *(int *)(lVar15 + 0x50);
        *extraout_x8 = *(undefined4 *)(lVar15 + 0x54);
        *(bool *)(extraout_x8 + 1) = iVar5 == 0;
        return;
      }
    }
  }
LAB_015c52ec:
  lVar15 = func_0x00f78af4();
  *(undefined4 *)(lVar15 + 0xd0) = 0;
  *(undefined4 *)(lVar15 + 0xec) = 0;
  *(undefined4 *)(lVar15 + 0xdc) = 0;
  *(undefined4 *)(lVar15 + 0x10c) = 0;
  *(undefined1 *)(lVar15 + 0x118) = 0;
  *(undefined4 *)(lVar15 + 0x1f0) = 0;
  return;
}



// ============================================================
// RVA: 0x15c5044 | Atlas.Gameplay.Kart.KartPhysics.OnTriggerStay
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__OnTriggerStay(long param_1,long param_2)

{
  ushort uVar1;
  undefined1 **ppuVar2;
  int iVar3;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar4;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 *extraout_x8;
  ulong uVar15;
  int *piVar16;
  undefined8 unaff_x22;
  code *pcVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar19;
  float extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb537c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537c = 1;
  }
  if (param_2 != 0) {
    uVar8 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_2,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
    if ((iVar4 != 0) && (*(float *)(param_1 + 0x5b8) < 0.0)) {
      *(undefined4 *)(param_1 + 0x5b8) = 0x3df5c28f;
    }
    return;
  }
  auVar20 = func_0x00f78af4();
  ppuVar2 = &puStack_40;
  ppuVar19 = &puStack_40;
  pcStack_38 = Atlas_Gameplay_Kart_KartComposite__OnTriggerExit;
  lVar9 = *(long *)(auVar20._0_8_ + 0x10);
  auVar20._8_8_ = auVar20._8_8_;
  auVar20._0_8_ = lVar9;
  puStack_40 = &stack0xfffffffffffffff0;
  if (lVar9 == 0) {
    pcVar17 = (code *)&Atlas_Gameplay_Kart_KartPhysics__OnTriggerExit;
    auVar20 = func_0x00f78af4();
  }
  else {
    ppuVar2 = (undefined1 **)&stack0xffffffffffffffd0;
    pcVar17 = Atlas_Gameplay_Kart_KartComposite__OnTriggerExit;
    ppuVar19 = (undefined1 **)&stack0xfffffffffffffff0;
  }
  lVar12 = auVar20._8_8_;
  lVar9 = auVar20._0_8_;
  *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppuVar2 + -0x28) = 0x3eb5000;
  *(undefined8 *)((long)ppuVar2 + -0x20) = 0;
  *(long *)((long)ppuVar2 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar19;
  *(code **)((long)ppuVar2 + -8) = pcVar17;
  if ((bRam0000000003eb537d & 1) == 0) {
    func_0x00f78a20(0x3d53510);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537d = 1;
  }
  if (lVar12 != 0) {
    lVar10 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar12,uRam0000000003d53510);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
    if (iVar4 == 0) {
code_r0x015c51dc:
      lVar9 = *(long *)(lVar9 + 0x18);
      if (lVar9 == 0) {
        return;
      }
      puVar18 = (undefined1 *)((long)ppuVar2 + -0x60);
      *(undefined8 *)((long)ppuVar2 + -0x50) = unaff_x26;
      *(undefined8 *)((long)ppuVar2 + -0x48) = unaff_x25;
      *(undefined8 *)((long)ppuVar2 + -0x40) = unaff_x24;
      *(undefined8 *)((long)ppuVar2 + -0x38) = unaff_x23;
      *(undefined8 *)((long)ppuVar2 + -0x30) = *(undefined8 *)((long)ppuVar2 + -0x30);
      *(undefined8 *)((long)ppuVar2 + -0x28) = *(undefined8 *)((long)ppuVar2 + -0x28);
      *(undefined8 *)((long)ppuVar2 + -0x20) = *(undefined8 *)((long)ppuVar2 + -0x20);
      *(undefined8 *)((long)ppuVar2 + -0x18) = *(undefined8 *)((long)ppuVar2 + -0x18);
      *(undefined8 *)((long)ppuVar2 + -0x10) = *(undefined8 *)((long)ppuVar2 + -0x10);
      *(undefined8 *)((long)ppuVar2 + -8) = *(undefined8 *)((long)ppuVar2 + -8);
      *(long *)((long)ppuVar2 + -0x60) = lVar9;
      *(long *)((long)ppuVar2 + -0x58) = lVar12;
      lVar12 = *(long *)(lVar9 + 0x68);
      if (lVar12 == 0) {
        lVar10 = 1;
      }
      else {
        lVar10 = *(long *)(lVar12 + 0x18);
        if (lVar10 == 0) {
          return;
        }
        puVar18 = (undefined1 *)(lVar12 + 0x20);
      }
      lVar12 = 0;
      do {
        lVar13 = *(long *)(puVar18 + lVar12 * 8);
        pcVar17 = *(code **)(lVar13 + 0x10);
        plVar11 = *(long **)(lVar13 + 0x20);
        lVar13 = *(long *)(lVar13 + 0x28);
        if (*(short *)(lVar13 + 0x48) == -1) {
          func_0x00f78ad8(lVar13);
        }
        iVar4 = func_0x00f78a4c(lVar13);
        if (iVar4 == 0) {
          puVar5 = (undefined1 *)((long)ppuVar2 + -0x68);
          if (plVar11 == (long *)0x0) goto code_r0x014b46e8;
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar11 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar9 + 0x18) == 0)) goto code_r0x014b46d0;
          iVar4 = func_0x00f78a44(lVar13);
          iVar3 = func_0x00f78ec0(lVar13);
          if (iVar4 == 0) {
            uVar1 = *(ushort *)(lVar13 + 0x48);
            if (iVar3 == 0) {
              lVar13 = *plVar11 + (ulong)uVar1 * 0x10;
              (**(code **)(lVar13 + 0x138))
                        (plVar11,*(undefined8 *)((long)ppuVar2 + -0x58),
                         *(undefined8 *)(lVar13 + 0x140));
              goto code_r0x014b46f0;
            }
            lVar13 = func_0x00f78a48(lVar13);
            uVar8 = *(undefined8 *)((long)ppuVar2 + -0x58);
            lVar14 = *plVar11;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar7 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar16 + (uint)uVar1) * 0x10 + 0x138);
                  goto code_r0x014b47c4;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar11,lVar13,(ulong)uVar1);
code_r0x014b47c4:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            uVar8 = *(undefined8 *)((long)ppuVar2 + -0x58);
            if (iVar3 == 0) {
              uVar6 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar11;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x014b4794;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar11);
code_r0x014b4794:
              uVar6 = *(undefined8 *)(lVar14 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar13);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar11,uVar8,puVar7);
        }
        else if (*(char *)(lVar13 + 0x4a) == '\x01') {
          puVar5 = *(undefined1 **)((long)ppuVar2 + -0x58);
code_r0x014b46e8:
          (*pcVar17)(puVar5,lVar13);
        }
        else {
code_r0x014b46d0:
          (*pcVar17)(plVar11,*(undefined8 *)((long)ppuVar2 + -0x58),lVar13);
        }
code_r0x014b46f0:
        lVar12 = lVar12 + 1;
        if (lVar12 == lVar10) {
          return;
        }
      } while( true );
    }
    if (lVar10 != 0) {
      if (*(char *)(lVar10 + 0x23) != '\0') {
        iVar4 = *(int *)(lVar9 + 0x114) + -1;
        if (iVar4 < 1) {
          iVar4 = 0;
        }
        *(int *)(lVar9 + 0x114) = iVar4;
      }
      if (*(char *)(lVar10 + 0x24) != '\0') {
        iVar4 = *(int *)(lVar9 + 0x218) + -1;
        if (iVar4 < 1) {
          iVar4 = 0;
        }
        *(int *)(lVar9 + 0x218) = iVar4;
      }
      goto code_r0x015c51dc;
    }
  }
  auVar21 = func_0x00f78af4();
  *(undefined1 **)((long)ppuVar2 + -0x40) = (undefined1 *)((long)ppuVar2 + -0x10);
  *(code **)((long)ppuVar2 + -0x38) = Atlas_Gameplay_Kart_KartComposite__OnUseShield;
  lVar9 = *(long *)(auVar21._0_8_ + 0x10);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x60), lVar9 != 0)) {
    *(undefined1 (*) [16])((long)ppuVar2 + -0x50) = auVar20;
    *(undefined8 *)((long)ppuVar2 + -0x40) = *(undefined8 *)((long)ppuVar2 + -0x40);
    *(undefined8 *)((long)ppuVar2 + -0x38) = *(undefined8 *)((long)ppuVar2 + -0x38);
    plVar11 = *(long **)(lVar9 + 200);
    if ((plVar11 != (long *)0x0) &&
       (iVar4 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0),0),
       iVar4 != 0)) {
      if (*(long *)(lVar9 + 200) == 0) {
        lVar12 = func_0x00f78af4();
        *(undefined8 *)((long)ppuVar2 + -0x80) = unaff_d9;
        *(undefined8 *)((long)ppuVar2 + -0x78) = unaff_d8;
        *(long *)((long)ppuVar2 + -0x70) = lVar9;
        *(long *)((long)ppuVar2 + -0x68) = auVar21._8_8_;
        *(undefined1 **)((long)ppuVar2 + -0x60) = (undefined1 *)((long)ppuVar2 + -0x40);
        *(undefined **)((long)ppuVar2 + -0x58) =
             &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit;
        plVar11 = *(long **)(lVar12 + 200);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x2d8))(plVar11,1,*(undefined8 *)(*plVar11 + 0x2e0));
          plVar11 = *(long **)(lVar12 + 200);
          if (plVar11 == (long *)0x0) {
            auVar20 = func_0x00f78af4();
            if (*(long *)(auVar20._0_8_ + 200) == auVar20._8_8_) {
              *(undefined8 *)(auVar20._0_8_ + 200) = 0;
              return;
            }
            return;
          }
          uVar15 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
          if ((uVar15 & 1) == 0) {
            *(undefined8 *)(lVar12 + 200) = 0;
          }
        }
        if ((0.0 <= extraout_s0) && (*(float *)(lVar12 + 0x5c) < extraout_s0)) {
          *(float *)(lVar12 + 0x5c) = extraout_s0;
        }
        return;
      }
      /*Atlas.Gameplay.Usables.Usable$$MarkForDestroy*/ func_0x01523e20(*(long *)(lVar9 + 200),0,0);
    }
    *(long *)(lVar9 + 200) = auVar21._8_8_;
    return;
  }
  auVar21 = func_0x00f78af4();
  lVar9 = auVar21._0_8_;
  *(undefined1 (*) [16])((long)ppuVar2 + -0x60) = auVar20;
  *(undefined1 **)((long)ppuVar2 + -0x50) = (undefined1 *)((long)ppuVar2 + -0x40);
  *(code **)((long)ppuVar2 + -0x48) = Atlas_Gameplay_Kart_KartComposite__OnFinishGameResultUpdated;
  if (*auVar21._8_8_ != *(int *)(lVar9 + 0x54)) {
    return;
  }
  if (*(long *)(lVar9 + 0x78) != 0) {
    lVar12 = *(long *)(*(long *)(lVar9 + 0x78) + 0x230);
    if (lVar12 == 0) {
      uVar15 = (ulong)(uint)auVar21._8_8_[10];
    }
    else {
      lVar10 = *(long *)(lVar12 + 0x50);
      uVar8 = /*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(lVar12,0);
      if (lVar10 == 0) goto LAB_015c52ec;
      uVar8 = /*Atlas.UI.ArcadeEventMetagameData$$GetMedal*/ func_0x0144d6c0(lVar10,uVar8,0);
      uVar15 = /*Atlas.Arcade.ArcadeEvent$$GetFakeFinishPositionForMedal*/ func_0x0144dd6c(uVar8,0);
    }
    *(int *)(lVar9 + 0xa0) = (int)uVar15;
    if (*(long *)(lVar9 + 0x30) != 0) {
      /*Atlas.Gameplay.Kart.KartVisualAnimation$$FinishResultsUpdated*/ func_0x015e69b0(*(long *)(lVar9 + 0x30),uVar15,0);
      lVar12 = *(long *)(lVar9 + 0x10);
      if (lVar12 != 0) {
        *(undefined4 *)(lVar12 + 0xd0) = 0;
        *(undefined4 *)(lVar12 + 0xec) = 0;
        *(undefined4 *)(lVar12 + 0xdc) = 0;
        *(undefined4 *)(lVar12 + 0x10c) = 0;
        *(undefined1 *)(lVar12 + 0x118) = 0;
        *(undefined4 *)(lVar12 + 0x1f0) = 0;
        *(undefined8 *)((long)ppuVar2 + -0x60) = *(undefined8 *)((long)ppuVar2 + -0x60);
        *(undefined8 *)((long)ppuVar2 + -0x58) = *(undefined8 *)((long)ppuVar2 + -0x58);
        *(undefined8 *)((long)ppuVar2 + -0x50) = *(undefined8 *)((long)ppuVar2 + -0x50);
        *(undefined8 *)((long)ppuVar2 + -0x48) = *(undefined8 *)((long)ppuVar2 + -0x48);
        if ((*(long *)(lVar9 + 0x10) != 0) &&
           (lVar12 = *(long *)(*(long *)(lVar9 + 0x10) + 0x60), lVar12 != 0)) {
          iVar4 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar12,0);
          if (iVar4 == 0) {
            return;
          }
          if (((*(long *)(lVar9 + 0x10) != 0) &&
              (lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + 0x60), lVar9 != 0)) &&
             (plVar11 = *(long **)(lVar9 + 200), plVar11 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x015c3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
            return;
          }
        }
        lVar9 = func_0x00f78af4();
        *(undefined8 *)((long)extraout_x8 + 0xd) = 0;
        *(undefined8 *)((long)extraout_x8 + 5) = 0;
        extraout_x8[7] = 0;
        *(undefined8 *)((long)extraout_x8 + 0x15) = 0;
        iVar4 = *(int *)(lVar9 + 0x50);
        *extraout_x8 = *(undefined4 *)(lVar9 + 0x54);
        *(bool *)(extraout_x8 + 1) = iVar4 == 0;
        return;
      }
    }
  }
LAB_015c52ec:
  lVar9 = func_0x00f78af4();
  *(undefined4 *)(lVar9 + 0xd0) = 0;
  *(undefined4 *)(lVar9 + 0xec) = 0;
  *(undefined4 *)(lVar9 + 0xdc) = 0;
  *(undefined4 *)(lVar9 + 0x10c) = 0;
  *(undefined1 *)(lVar9 + 0x118) = 0;
  *(undefined4 *)(lVar9 + 0x1f0) = 0;
  return;
}



// ============================================================
// RVA: 0x15c510c | Atlas.Gameplay.Kart.KartPhysics.OnTriggerExit
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__OnTriggerExit(undefined1 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 *extraout_x8;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  undefined1 **ppuVar16;
  float extraout_s0;
  undefined1 auVar17 [16];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 *puStack_58;
  
  if ((bRam0000000003eb537d & 1) == 0) {
    func_0x00f78a20(0x3d53510);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb537d = 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    lVar7 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_2,uRam0000000003d53510);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
    if (iVar3 == 0) {
LAB_015c51dc:
      puVar8 = *(undefined1 **)(param_1 + 0x18);
      if (puVar8 == (undefined1 *)0x0) {
        return;
      }
      ppuVar16 = &puStack_60;
      puStack_60 = puVar8;
      puStack_58 = param_2;
      lVar7 = *(long *)(puVar8 + 0x68);
      if (lVar7 == 0) {
        lVar15 = 1;
      }
      else {
        lVar15 = *(long *)(lVar7 + 0x18);
        if (lVar15 == 0) {
          return;
        }
        ppuVar16 = (undefined1 **)(lVar7 + 0x20);
      }
      lVar7 = 0;
      do {
        lVar10 = *(long *)((long)ppuVar16 + lVar7 * 8);
        pcVar14 = *(code **)(lVar10 + 0x10);
        plVar9 = *(long **)(lVar10 + 0x20);
        lVar10 = *(long *)(lVar10 + 0x28);
        if (*(short *)(lVar10 + 0x48) == -1) {
          func_0x00f78ad8(lVar10);
        }
        iVar3 = func_0x00f78a4c(lVar10);
        if (iVar3 == 0) {
          puVar4 = &uStack_68;
          if (plVar9 == (long *)0x0) goto code_r0x014b46e8;
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar9 + 0x115) & 1) != 0)) ||
             (*(long *)(puVar8 + 0x18) == 0)) goto code_r0x014b46d0;
          iVar3 = func_0x00f78a44(lVar10);
          iVar2 = func_0x00f78ec0(lVar10);
          puVar4 = puStack_58;
          if (iVar3 == 0) {
            uVar1 = *(ushort *)(lVar10 + 0x48);
            if (iVar2 == 0) {
              lVar10 = *plVar9 + (ulong)uVar1 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar9,puStack_58,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x014b46f0;
            }
            lVar10 = func_0x00f78a48(lVar10);
            puVar4 = puStack_58;
            lVar11 = *plVar9;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar6 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar1) * 0x10 + 0x138);
                  goto code_r0x014b47c4;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar9,lVar10,(ulong)uVar1);
code_r0x014b47c4:
            pcVar14 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if (iVar2 == 0) {
              uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar9;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x014b4794;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar9);
code_r0x014b4794:
              uVar5 = *(undefined8 *)(lVar11 + 8);
            }
            puVar6 = (undefined8 *)func_0x00f78acc(uVar5,lVar10);
            pcVar14 = (code *)*puVar6;
          }
          (*pcVar14)(plVar9,puVar4,puVar6);
        }
        else {
          puVar4 = puStack_58;
          if (*(char *)(lVar10 + 0x4a) == '\x01') {
code_r0x014b46e8:
            (*pcVar14)(puVar4,lVar10);
          }
          else {
code_r0x014b46d0:
            (*pcVar14)(plVar9,puStack_58,lVar10);
          }
        }
code_r0x014b46f0:
        lVar7 = lVar7 + 1;
        if (lVar7 == lVar15) {
          return;
        }
      } while( true );
    }
    if (lVar7 != 0) {
      if (*(char *)(lVar7 + 0x23) != '\0') {
        iVar3 = *(int *)(param_1 + 0x114) + -1;
        if (iVar3 < 1) {
          iVar3 = 0;
        }
        *(int *)(param_1 + 0x114) = iVar3;
      }
      if (*(char *)(lVar7 + 0x24) != '\0') {
        iVar3 = *(int *)(param_1 + 0x218) + -1;
        if (iVar3 < 1) {
          iVar3 = 0;
        }
        *(int *)(param_1 + 0x218) = iVar3;
      }
      goto LAB_015c51dc;
    }
  }
  auVar17 = func_0x00f78af4();
  lVar7 = *(long *)(auVar17._0_8_ + 0x10);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x60), lVar7 != 0)) {
    plVar9 = *(long **)(lVar7 + 200);
    if ((plVar9 != (long *)0x0) &&
       (iVar3 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0),0),
       iVar3 != 0)) {
      if (*(long *)(lVar7 + 200) == 0) {
        lVar7 = func_0x00f78af4();
        puStack_58 = (undefined8 *)
                     &Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit;
        plVar9 = *(long **)(lVar7 + 200);
        if (plVar9 != (long *)0x0) {
          uStack_68 = auVar17._8_8_;
          puStack_60 = &stack0xffffffffffffffc0;
          (**(code **)(*plVar9 + 0x2d8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x2e0));
          plVar9 = *(long **)(lVar7 + 200);
          if (plVar9 == (long *)0x0) {
            auVar17 = func_0x00f78af4();
            if (*(long *)(auVar17._0_8_ + 200) == auVar17._8_8_) {
              *(undefined8 *)(auVar17._0_8_ + 200) = 0;
              return;
            }
            return;
          }
          uVar12 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
          if ((uVar12 & 1) == 0) {
            *(undefined8 *)(lVar7 + 200) = 0;
          }
        }
        if ((0.0 <= extraout_s0) && (*(float *)(lVar7 + 0x5c) < extraout_s0)) {
          *(float *)(lVar7 + 0x5c) = extraout_s0;
        }
        return;
      }
      /*Atlas.Gameplay.Usables.Usable$$MarkForDestroy*/ func_0x01523e20(*(long *)(lVar7 + 200),0,0);
    }
    *(long *)(lVar7 + 200) = auVar17._8_8_;
    return;
  }
  auVar17 = func_0x00f78af4();
  lVar7 = auVar17._0_8_;
  if (*auVar17._8_8_ != *(int *)(lVar7 + 0x54)) {
    return;
  }
  puStack_60 = param_1;
  puStack_58 = param_2;
  if (*(long *)(lVar7 + 0x78) != 0) {
    lVar15 = *(long *)(*(long *)(lVar7 + 0x78) + 0x230);
    if (lVar15 == 0) {
      uVar12 = (ulong)(uint)auVar17._8_8_[10];
    }
    else {
      lVar10 = *(long *)(lVar15 + 0x50);
      uVar5 = /*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(lVar15,0);
      if (lVar10 == 0) goto LAB_015c52ec;
      uVar5 = /*Atlas.UI.ArcadeEventMetagameData$$GetMedal*/ func_0x0144d6c0(lVar10,uVar5,0);
      uVar12 = /*Atlas.Arcade.ArcadeEvent$$GetFakeFinishPositionForMedal*/ func_0x0144dd6c(uVar5,0);
    }
    *(int *)(lVar7 + 0xa0) = (int)uVar12;
    if (*(long *)(lVar7 + 0x30) != 0) {
      /*Atlas.Gameplay.Kart.KartVisualAnimation$$FinishResultsUpdated*/ func_0x015e69b0(*(long *)(lVar7 + 0x30),uVar12,0);
      lVar15 = *(long *)(lVar7 + 0x10);
      if (lVar15 != 0) {
        *(undefined4 *)(lVar15 + 0xd0) = 0;
        *(undefined4 *)(lVar15 + 0xec) = 0;
        *(undefined4 *)(lVar15 + 0xdc) = 0;
        *(undefined4 *)(lVar15 + 0x10c) = 0;
        *(undefined1 *)(lVar15 + 0x118) = 0;
        *(undefined4 *)(lVar15 + 0x1f0) = 0;
        if ((*(long *)(lVar7 + 0x10) != 0) &&
           (lVar15 = *(long *)(*(long *)(lVar7 + 0x10) + 0x60), lVar15 != 0)) {
          iVar3 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_HasValidShield*/ func_0x015d9800(lVar15,0);
          if (iVar3 == 0) {
            return;
          }
          if (((*(long *)(lVar7 + 0x10) != 0) &&
              (lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 0x60), lVar7 != 0)) &&
             (plVar9 = *(long **)(lVar7 + 200), plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x015c3b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar9 + 0x2c8))(plVar9,*(undefined8 *)(*plVar9 + 0x2d0));
            return;
          }
        }
        lVar7 = func_0x00f78af4();
        *(undefined8 *)((long)extraout_x8 + 0xd) = 0;
        *(undefined8 *)((long)extraout_x8 + 5) = 0;
        extraout_x8[7] = 0;
        *(undefined8 *)((long)extraout_x8 + 0x15) = 0;
        iVar3 = *(int *)(lVar7 + 0x50);
        *extraout_x8 = *(undefined4 *)(lVar7 + 0x54);
        *(bool *)(extraout_x8 + 1) = iVar3 == 0;
        return;
      }
    }
  }
LAB_015c52ec:
  lVar7 = func_0x00f78af4();
  *(undefined4 *)(lVar7 + 0xd0) = 0;
  *(undefined4 *)(lVar7 + 0xec) = 0;
  *(undefined4 *)(lVar7 + 0xdc) = 0;
  *(undefined4 *)(lVar7 + 0x10c) = 0;
  *(undefined1 *)(lVar7 + 0x118) = 0;
  *(undefined4 *)(lVar7 + 0x1f0) = 0;
  return;
}



// ============================================================
// RVA: 0x15c52f0 | Atlas.Gameplay.Kart.KartPhysics.ResetBoosts
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__ResetBoosts(long param_1)

{
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  return;
}



// ============================================================
// RVA: 0x15c533c | Atlas.Gameplay.Kart.KartPhysics.OnUsableBoost
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__OnUsableBoost
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined1 param_5)

{
  *(undefined4 *)(param_4 + 0xdc) = param_1;
  *(undefined4 *)(param_4 + 0xe0) = param_2;
  *(undefined4 *)(param_4 + 0xe4) = param_3;
  *(undefined1 *)(param_4 + 0xe8) = param_5;
  *(undefined1 *)(param_4 + 0x33c) = 1;
  return;
}



// ============================================================
// RVA: 0x15c9458 | Atlas.Gameplay.Kart.KartPhysics.RayCastRBToGround
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__RayCastRBToGround
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  lVar4 = 0x3eb5000;
  if ((bRam0000000003eb536b & 1) == 0) {
    func_0x00f78a20(0x3d1fea8);
    bRam0000000003eb536b = 1;
  }
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  if (*(long *)(param_5 + 0x70) != 0) {
    uVar5 = /*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(*(long *)(param_5 + 0x70),0);
    uVar6 = 0xbf800000;
    uVar10 = 0x80000000;
    param_4 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(0x8000000080000000,0xbf800000,0x8000000080000000,0);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0xb8) + 0x2c),0);
    iVar1 = /*UnityEngine.Physics$$Raycast*/ func_0x0329fcf8(uVar5,param_2,param_3,param_4,uVar6,uVar10,0x40200000,&uStack_90,uVar2,1
                            ,0);
    if (iVar1 == 0) {
      return;
    }
    lVar4 = *(long *)(param_5 + 0x70);
    /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&uStack_90,0);
    if (lVar4 != 0) {
      /*UnityEngine.Rigidbody$$set_position*/ func_0x032a2ef8(lVar4,0);
      /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&uStack_90,0);
      uVar5 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      uVar10 = 0;
      uVar11 = 0x3f800000;
      uVar6 = /*Unity.Mathematics.quaternion$$LookRotationSafe*/ func_0x030c6560(0,0,0x3f800000,uVar5,param_2,param_3,0);
      param_4 = uVar5;
      param_3 = uVar11;
      if (*(long *)(param_5 + 0x70) != 0) {
        uVar12 = uVar5;
        uVar9 = uVar10;
        lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_5 + 0x70),0);
        param_5 = *(long *)(param_5 + 0x70);
        param_4 = uVar12;
        if (param_5 != 0) {
          uVar7 = /*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(param_5,0);
          uVar8 = /*Unity.Mathematics.quaternion$$op_Implicit*/ func_0x030c6310(uVar6,uVar10,uVar11,uVar5,0);
          uVar6 = param_3;
          uVar5 = /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251e58(uVar7,uVar9,param_3,uVar12,uVar8,uVar10,uVar11,uVar5,0);
          param_4 = uVar12;
          param_3 = uVar6;
          /*UnityEngine.Rigidbody$$set_rotation*/ func_0x032a304c(param_5,0);
          lVar4 = 0;
          if (lVar3 != 0) {
            /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(uVar5,uVar9,uVar6,uVar12,lVar3,0);
            return;
          }
        }
      }
    }
  }
  lVar3 = func_0x00f78af4();
  puStack_98 = &Atlas_Gameplay_Kart_KartPhysics___ctor;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_b0 = lVar4;
  lStack_a8 = param_5;
  puStack_a0 = &stack0xfffffffffffffff0;
  /*Atlas.Gameplay.Kart.KartPhysicsConfig$$.ctor*/ func_0x015d5370(&uStack_160,4,0);
  *(undefined8 *)(lVar3 + 0x3e0) = uStack_d8;
  *(undefined8 *)(lVar3 + 0x3d8) = uStack_e0;
  *(undefined8 *)(lVar3 + 0x3f0) = uStack_c8;
  *(undefined8 *)(lVar3 + 1000) = uStack_d0;
  *(undefined8 *)(lVar3 + 0x3f8) = uStack_c0;
  *(undefined8 *)(lVar3 + 0x3a0) = uStack_118;
  *(undefined8 *)(lVar3 + 0x398) = uStack_120;
  *(undefined8 *)(lVar3 + 0x3b0) = uStack_108;
  *(undefined8 *)(lVar3 + 0x3a8) = uStack_110;
  *(undefined8 *)(lVar3 + 0x3c0) = uStack_f8;
  *(undefined8 *)(lVar3 + 0x3b8) = uStack_100;
  *(undefined8 *)(lVar3 + 0x3d0) = uStack_e8;
  *(undefined8 *)(lVar3 + 0x3c8) = uStack_f0;
  *(undefined8 *)(lVar3 + 0x360) = uStack_158;
  *(undefined8 *)(lVar3 + 0x358) = uStack_160;
  *(undefined8 *)(lVar3 + 0x370) = uStack_148;
  *(undefined8 *)(lVar3 + 0x368) = uStack_150;
  *(undefined8 *)(lVar3 + 0x380) = uStack_138;
  *(undefined8 *)(lVar3 + 0x378) = uStack_140;
  *(undefined8 *)(lVar3 + 0x390) = uStack_128;
  *(undefined8 *)(lVar3 + 0x388) = uStack_130;
  uVar2 = uStack_140;
  uVar5 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar3 + 0x400) = uVar5;
  uVar6 = (undefined4)uVar2;
  *(undefined4 *)(lVar3 + 0x404) = uVar6;
  *(undefined4 *)(lVar3 + 0x408) = param_3;
  uVar5 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
  *(undefined4 *)(lVar3 + 0x40c) = uVar5;
  *(undefined4 *)(lVar3 + 0x410) = uVar6;
  *(undefined4 *)(lVar3 + 0x414) = param_3;
  *(undefined4 *)(lVar3 + 0x418) = param_4;
  uVar5 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar3 + 0x41c) = uVar5;
  *(undefined4 *)(lVar3 + 0x420) = uVar6;
  *(undefined4 *)(lVar3 + 0x424) = param_3;
  *(undefined1 *)(lVar3 + 0x5bc) = 1;
  /*System.Object$$.ctor*/ func_0x0294d018(lVar3,0);
  return;
}



// ============================================================
// RVA: 0x15c9688 | Atlas.Gameplay.Kart.KartPhysics..ctor
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  /*Atlas.Gameplay.Kart.KartPhysicsConfig$$.ctor*/ func_0x015d5370(&uStack_d0,4,0);
  *(undefined8 *)(param_5 + 0x3e0) = uStack_48;
  *(undefined8 *)(param_5 + 0x3d8) = uStack_50;
  *(undefined8 *)(param_5 + 0x3f0) = uStack_38;
  *(undefined8 *)(param_5 + 1000) = uStack_40;
  *(undefined8 *)(param_5 + 0x3f8) = uStack_30;
  *(undefined8 *)(param_5 + 0x3a0) = uStack_88;
  *(undefined8 *)(param_5 + 0x398) = uStack_90;
  *(undefined8 *)(param_5 + 0x3b0) = uStack_78;
  *(undefined8 *)(param_5 + 0x3a8) = uStack_80;
  *(undefined8 *)(param_5 + 0x3c0) = uStack_68;
  *(undefined8 *)(param_5 + 0x3b8) = uStack_70;
  *(undefined8 *)(param_5 + 0x3d0) = uStack_58;
  *(undefined8 *)(param_5 + 0x3c8) = uStack_60;
  *(undefined8 *)(param_5 + 0x360) = uStack_c8;
  *(undefined8 *)(param_5 + 0x358) = uStack_d0;
  *(undefined8 *)(param_5 + 0x370) = uStack_b8;
  *(undefined8 *)(param_5 + 0x368) = uStack_c0;
  *(undefined8 *)(param_5 + 0x380) = uStack_a8;
  *(undefined8 *)(param_5 + 0x378) = uStack_b0;
  *(undefined8 *)(param_5 + 0x390) = uStack_98;
  *(undefined8 *)(param_5 + 0x388) = uStack_a0;
  uVar3 = uStack_b0;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0x400) = uVar1;
  uVar2 = (undefined4)uVar3;
  *(undefined4 *)(param_5 + 0x404) = uVar2;
  *(undefined4 *)(param_5 + 0x408) = param_3;
  uVar1 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
  *(undefined4 *)(param_5 + 0x40c) = uVar1;
  *(undefined4 *)(param_5 + 0x410) = uVar2;
  *(undefined4 *)(param_5 + 0x414) = param_3;
  *(undefined4 *)(param_5 + 0x418) = param_4;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0x41c) = uVar1;
  *(undefined4 *)(param_5 + 0x420) = uVar2;
  *(undefined4 *)(param_5 + 0x424) = param_3;
  *(undefined1 *)(param_5 + 0x5bc) = 1;
  /*System.Object$$.ctor*/ func_0x0294d018(param_5,0);
  return;
}



// ============================================================
// RVA: 0x15c9760 | Atlas.Gameplay.Kart.KartPhysics.Init
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__Init
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
               undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined4 extraout_s0;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_1b0 [336];
  
  if ((bRam0000000003eb536a & 1) == 0) {
    func_0x00f78a20(0x3d1fea8);
    func_0x00f78a20(0x3d22ce0);
    func_0x00f78a20(0x3d1f2e0);
    func_0x00f78a20(0x3d6ef00);
    func_0x00f78a20(0x3d6ef28);
    bRam0000000003eb536a = 1;
  }
  *(undefined8 *)(param_1 + 0x68) = param_2;
  uVar2 = /*UnityEngine.LayerMask$$NameToLayer*/ func_0x03232708(/*STR('KartPhysics')*/ uRam0000000003d6ef00,0);
  *(undefined4 *)(param_1 + 0x5c0) = uVar2;
  uVar2 = /*UnityEngine.LayerMask$$NameToLayer*/ func_0x03232708(/*STR('KartPhysicsGhost')*/ uRam0000000003d6ef28,0);
  *(undefined4 *)(param_1 + 0x5c4) = uVar2;
  *(long *)(param_1 + 0x30) = param_3;
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_3 + 0x28);
    uVar4 = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(param_1 + 0x48) = param_4;
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    *(undefined8 *)(param_1 + 0x430) = param_6;
    *(long *)(param_1 + 0x40) = param_5;
    if (param_5 != 0) {
      /*Atlas.Gameplay.Kart.KartPhysicsHandling$$Init*/ func_0x015d9124(param_5,0);
      lVar3 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ uRam0000000003d22ce0);
      /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$.ctor*/ func_0x015dab4c(lVar3,0);
      *(long *)(param_1 + 0x60) = lVar3;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = param_1;
        if (*(long *)(param_1 + 0x70) != 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x40);
          /*UnityEngine.Rigidbody$$get_mass*/ func_0x032a24c4(*(long *)(param_1 + 0x70),0);
          Atlas_Gameplay_Kart_BurstCompatiblePhysicsHandling__FromKartPhysics(auStack_1b0,uVar4,0);
          _memcpy(param_1 + 0x438,auStack_1b0,0x144);
          lVar3 = func_0x00f78a34(/*UnityEngine.RaycastHit[]_TypeInfo*/ uRam0000000003d1f2e0,4);
          *(long *)(param_1 + 0x5a8) = lVar3;
          if (lVar3 != 0) {
            uVar7 = 0;
            lVar8 = 0x20;
            do {
              uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
              if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar7) goto LAB_015c9954;
              if (((*(ushort *)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0xe0) == 0)) {
                func_0x00f78ad0();
                uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
              }
              if (uVar5 <= uVar7) {
                uVar4 = func_0x00f78b24();
                lVar3 = func_0x00f78ac0(uVar4,0);
                if ((bRam0000000003eb5311 & 1) == 0) {
                  func_0x00f78a20(0x3d3f7f0);
                  func_0x00f78a20(0x3d1e710);
                  bRam0000000003eb5311 = 1;
                }
                uVar4 = func_0x00f78aec(/*System.Collections.Generic.Queue<DefinitionID>_TypeInfo*/ uRam0000000003d1e710);
                /*System.Collections.Generic.Queue<DefinitionID>$$.ctor*/ func_0x0273aadc(uVar4,uRam0000000003d3f7f0);
                *(undefined8 *)(lVar3 + 0x98) = uVar4;
                return lVar3;
              }
              puVar1 = (undefined8 *)(lVar3 + lVar8);
              lVar8 = lVar8 + 0x2c;
              uVar7 = uVar7 + 1;
              puVar6 = *(undefined8 **)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0xb8);
              uVar10 = puVar6[1];
              uVar9 = *puVar6;
              uVar12 = puVar6[3];
              uVar11 = puVar6[2];
              uVar4 = puVar6[4];
              *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(puVar6 + 5);
              puVar1[4] = uVar4;
              puVar1[1] = uVar10;
              *puVar1 = uVar9;
              puVar1[3] = uVar12;
              puVar1[2] = uVar11;
              lVar3 = *(long *)(param_1 + 0x5a8);
            } while (lVar3 != 0);
          }
        }
      }
    }
  }
  do {
    func_0x00f78af4();
LAB_015c9954:
    /*Atlas.Gameplay.Kart.KartPhysics$$InitPhysics*/ func_0x015d2224(param_1);
    /*Atlas.Gameplay.Kart.KartPhysics$$InitCollidersAndRigidbody*/ func_0x015d270c(param_1);
    *(undefined1 *)(param_1 + 0x5bc) = param_7;
    *(undefined1 *)(param_1 + 0x5bd) = 0;
  } while (*(long *)(param_1 + 0x70) == 0);
  lVar3 = /*UnityEngine.Rigidbody$$get_mass*/ func_0x032a24c4(*(long *)(param_1 + 0x70),0);
  *(undefined4 *)(param_1 + 0x5c8) = extraout_s0;
  return lVar3;
}



// ============================================================
// RVA: 0x15cb1dc | Atlas.Gameplay.Kart.KartPhysics.get_GameObject
// ============================================================

/* WARNING: Possible PIC construction at 0x015cb764: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cb768) */
/* WARNING: Removing unreachable block (ram,0x015cb76c) */
/* WARNING: Removing unreachable block (ram,0x015cbae4) */
/* WARNING: Removing unreachable block (ram,0x015cb778) */
/* WARNING: Removing unreachable block (ram,0x015cbaec) */
/* WARNING: Removing unreachable block (ram,0x015cb79c) */
/* WARNING: Removing unreachable block (ram,0x015cb824) */
/* WARNING: Removing unreachable block (ram,0x015cb828) */
/* WARNING: Removing unreachable block (ram,0x015cb82c) */
/* WARNING: Removing unreachable block (ram,0x015cb844) */
/* WARNING: Removing unreachable block (ram,0x015cb968) */
/* WARNING: Removing unreachable block (ram,0x015cb96c) */
/* WARNING: Removing unreachable block (ram,0x015cb970) */
/* WARNING: Removing unreachable block (ram,0x015cb980) */
/* WARNING: Removing unreachable block (ram,0x015cb988) */
/* WARNING: Removing unreachable block (ram,0x015cb9b0) */
/* WARNING: Removing unreachable block (ram,0x015cb994) */
/* WARNING: Removing unreachable block (ram,0x015cb9a0) */
/* WARNING: Removing unreachable block (ram,0x015cb9bc) */
/* WARNING: Removing unreachable block (ram,0x015cb9d0) */
/* WARNING: Removing unreachable block (ram,0x015cb9d4) */
/* WARNING: Removing unreachable block (ram,0x015cb9d8) */
/* WARNING: Removing unreachable block (ram,0x015cb9dc) */

void Atlas_Gameplay_Kart_KartPhysics__get_GameObject(long param_1)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_300 [16];
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 != 0) {
code_r0x032279f4:
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebf190 == (code *)0x0) {
      pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
    }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf190)(lVar3);
    return;
  }
  auVar19 = func_0x00f78af4();
  plVar6 = auVar19._8_8_;
  unaff_x20 = auVar19._0_8_;
  pcStack_18 = Atlas_Gameplay_Kart_KartFollowCamera__LateUpdate;
  unaff_x29 = &puStack_20;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb532c & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c90);
    func_0x00f78a20(0x3d232e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb532c = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (((*(byte *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  unaff_x19 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ lRam0000000003d22c90 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(unaff_x19,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
  if ((uVar4 & 1) != 0) {
    if (plVar6 == (long *)0x0) {
      func_0x00f78af4();
    }
    else {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_015cb348;
          }
          piVar7 = piVar7 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_015cb348:
      fVar9 = (float)(*(code *)*puVar5)(plVar6,puVar5[1]);
      if (fVar9 < **(float **)(/*UnityEngine.Mathf_TypeInfo*/ lRam0000000003d232e0 + 0xb8)) goto LAB_015cb9ec;
      lVar3 = *(long *)(unaff_x20 + 0x28);
      if (lVar3 == 0) {
        func_0x00f78af4();
      }
      else if (*(long *)(lVar3 + 0x40) == 0) {
        func_0x00f78af4();
      }
      else {
        *(float *)(unaff_x20 + 0xdc) =
             *(float *)(lVar3 + 0x194) / *(float *)(*(long *)(lVar3 + 0x40) + 0x30);
        if (*(long *)(unaff_x20 + 0x10) == 0) {
          func_0x00f78af4();
        }
        else {
          fVar17 = *(float *)(lVar3 + 0x1f8);
          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                    (*(long *)(unaff_x20 + 0x10) + 0x88,0);
          fVar9 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
          if (*(long *)(unaff_x20 + 0x10) == 0) {
            func_0x00f78af4();
          }
          else {
            Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                      (*(long *)(unaff_x20 + 0x10) + 0x88,0);
            fVar10 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
            if (*(long *)(unaff_x20 + 0x28) == 0) {
              func_0x00f78af4();
            }
            else if (*(long *)(unaff_x20 + 0x10) == 0) {
              func_0x00f78af4();
            }
            else {
              fVar18 = *(float *)(*(long *)(unaff_x20 + 0x28) + 0x1f0);
              Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                        (*(long *)(unaff_x20 + 0x10) + 0xf0,0);
              fVar11 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
              if (*(long *)(unaff_x20 + 0x10) == 0) {
                func_0x00f78af4();
              }
              else {
                Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                          (*(long *)(unaff_x20 + 0x10) + 0xf0,0);
                fVar12 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                if (*(float *)(unaff_x20 + 0xd0) == 0.0) {
                  uVar2 = Atlas_Gameplay_Kart_KartFollowCamera__get_IsReversing(unaff_x20);
                }
                else {
                  uVar2 = (uint)(*(char *)(unaff_x20 + 0xd4) != '\0');
                }
                fVar15 = 1.0;
                if (uVar2 == 0) {
                  fVar15 = 0.0;
                }
                if (*(long *)(unaff_x20 + 0x10) == 0) {
                  func_0x00f78af4();
                }
                else {
                  Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                            (*(long *)(unaff_x20 + 0x10) + 0x158,0);
                  fVar13 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    func_0x00f78af4();
                  }
                  else {
                    Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                              (*(long *)(unaff_x20 + 0x10) + 0x158,0);
                    fVar14 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                    fStack_2e4 = fVar13;
                    if (*(long *)(unaff_x20 + 0x28) == 0) {
                      func_0x00f78af4();
                    }
                    else {
                      fVar13 = 0.0;
                      if (*(char *)(*(long *)(unaff_x20 + 0x28) + 0x1d3) != '\0') {
                        fVar13 = 1.0;
                      }
                      fStack_2e8 = fVar14;
                      if (*(long *)(unaff_x20 + 0x10) == 0) {
                        func_0x00f78af4();
                      }
                      else {
                        Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom
                                  (*(long *)(unaff_x20 + 0x10) + 0x1c0,0);
                        fStack_2f0 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                        if (*(long *)(unaff_x20 + 0x10) == 0) {
                          func_0x00f78af4();
                        }
                        else {
                          fStack_2ec = fVar15;
                          Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo
                                    (*(long *)(unaff_x20 + 0x10) + 0x1c0,0);
                          fVar15 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(0);
                          lVar3 = *(long *)(unaff_x20 + 0x10);
                          if (lVar3 == 0) {
                            func_0x00f78af4();
                          }
                          else {
                            uVar16 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar17,*(undefined4 *)(lVar3 + 0xec),
                                                     (1.0 - fVar17) * fVar9 + fVar17 * fVar10,0);
                            *(undefined4 *)(lVar3 + 0xec) = uVar16;
                            lVar3 = *(long *)(unaff_x20 + 0x10);
                            if (lVar3 == 0) {
                              func_0x00f78af4();
                            }
                            else {
                              uVar16 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar18,*(undefined4 *)(lVar3 + 0x154),
                                                       (1.0 - fVar18) * fVar11 + fVar18 * fVar12,0);
                              *(undefined4 *)(lVar3 + 0x154) = uVar16;
                              lVar3 = *(long *)(unaff_x20 + 0x10);
                              if (lVar3 == 0) {
                                func_0x00f78af4();
                              }
                              else {
                                uVar16 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fStack_2ec,*(undefined4 *)(lVar3 + 0x1bc),
                                                         (1.0 - fStack_2ec) * fStack_2e4 +
                                                         fStack_2ec * fStack_2e8,0);
                                *(undefined4 *)(lVar3 + 0x1bc) = uVar16;
                                lVar3 = *(long *)(unaff_x20 + 0x10);
                                if (lVar3 == 0) {
                                  func_0x00f78af4();
                                }
                                else {
                                  uVar16 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(fVar13,*(undefined4 *)(lVar3 + 0x224),
                                                           (1.0 - fVar13) * fStack_2f0 +
                                                           fVar13 * fVar15,0);
                                  *(undefined4 *)(lVar3 + 0x224) = uVar16;
                                  lVar3 = *(long *)(unaff_x20 + 0x10);
                                  if (lVar3 == 0) {
                                    func_0x00f78af4();
                                  }
                                  else {
                                    Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                              (&uStack_128,lVar3 + 0x20,lVar3 + 0x88,0);
                                    uStack_148 = uStack_e0;
                                    uStack_150 = uStack_e8;
                                    uStack_138 = uStack_d0;
                                    uStack_140 = uStack_d8;
                                    uStack_130 = uStack_c8;
                                    uStack_188 = uStack_120;
                                    uStack_190 = uStack_128;
                                    uStack_178 = uStack_110;
                                    uStack_180 = uStack_118;
                                    uStack_168 = uStack_100;
                                    uStack_170 = uStack_108;
                                    uStack_158 = uStack_f0;
                                    uStack_160 = uStack_f8;
                                    *(undefined8 *)(unaff_x20 + 0x74) = uStack_f0;
                                    *(undefined8 *)(unaff_x20 + 0x6c) = uStack_f8;
                                    *(undefined8 *)(unaff_x20 + 0x84) = uStack_e0;
                                    *(undefined8 *)(unaff_x20 + 0x7c) = uStack_e8;
                                    *(undefined8 *)(unaff_x20 + 0x94) = uStack_d0;
                                    *(undefined8 *)(unaff_x20 + 0x8c) = uStack_d8;
                                    *(undefined8 *)(unaff_x20 + 0x9c) = uStack_c8;
                                    *(undefined8 *)(unaff_x20 + 0x44) = uStack_120;
                                    *(undefined8 *)(unaff_x20 + 0x3c) = uStack_128;
                                    *(undefined8 *)(unaff_x20 + 0x54) = uStack_110;
                                    *(undefined8 *)(unaff_x20 + 0x4c) = uStack_118;
                                    *(undefined8 *)(unaff_x20 + 100) = uStack_100;
                                    *(undefined8 *)(unaff_x20 + 0x5c) = uStack_108;
                                    if (*(long *)(unaff_x20 + 0x10) == 0) {
                                      func_0x00f78af4();
                                    }
                                    else {
                                      puVar5 = (undefined8 *)(unaff_x20 + 0x3c);
                                      Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                (&uStack_128,puVar5,
                                                 *(long *)(unaff_x20 + 0x10) + 0xf0,0);
                                      uStack_1b8 = uStack_e0;
                                      uStack_1c0 = uStack_e8;
                                      uStack_1a8 = uStack_d0;
                                      uStack_1b0 = uStack_d8;
                                      uStack_1a0 = uStack_c8;
                                      uStack_1f8 = uStack_120;
                                      uStack_200 = uStack_128;
                                      uStack_1e8 = uStack_110;
                                      uStack_1f0 = uStack_118;
                                      uStack_1d8 = uStack_100;
                                      uStack_1e0 = uStack_108;
                                      uStack_1c8 = uStack_f0;
                                      uStack_1d0 = uStack_f8;
                                      *(undefined8 *)(unaff_x20 + 0x84) = uStack_e0;
                                      *(undefined8 *)(unaff_x20 + 0x7c) = uStack_e8;
                                      *(undefined8 *)(unaff_x20 + 0x94) = uStack_d0;
                                      *(undefined8 *)(unaff_x20 + 0x8c) = uStack_d8;
                                      *(undefined8 *)(unaff_x20 + 0x9c) = uStack_c8;
                                      *(undefined8 *)(unaff_x20 + 0x44) = uStack_120;
                                      *puVar5 = uStack_128;
                                      *(undefined8 *)(unaff_x20 + 0x54) = uStack_110;
                                      *(undefined8 *)(unaff_x20 + 0x4c) = uStack_118;
                                      *(undefined8 *)(unaff_x20 + 100) = uStack_100;
                                      *(undefined8 *)(unaff_x20 + 0x5c) = uStack_108;
                                      *(undefined8 *)(unaff_x20 + 0x74) = uStack_f0;
                                      *(undefined8 *)(unaff_x20 + 0x6c) = uStack_f8;
                                      if (*(long *)(unaff_x20 + 0x10) == 0) {
                                        func_0x00f78af4();
                                      }
                                      else {
                                        Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                  (&uStack_128,puVar5,
                                                   *(long *)(unaff_x20 + 0x10) + 0x158,0);
                                        uStack_228 = uStack_e0;
                                        uStack_230 = uStack_e8;
                                        uStack_218 = uStack_d0;
                                        uStack_220 = uStack_d8;
                                        uStack_210 = uStack_c8;
                                        uStack_268 = uStack_120;
                                        uStack_270 = uStack_128;
                                        uStack_258 = uStack_110;
                                        uStack_260 = uStack_118;
                                        uStack_248 = uStack_100;
                                        uStack_250 = uStack_108;
                                        uStack_238 = uStack_f0;
                                        uStack_240 = uStack_f8;
                                        *(undefined8 *)(unaff_x20 + 0x84) = uStack_e0;
                                        *(undefined8 *)(unaff_x20 + 0x7c) = uStack_e8;
                                        *(undefined8 *)(unaff_x20 + 0x94) = uStack_d0;
                                        *(undefined8 *)(unaff_x20 + 0x8c) = uStack_d8;
                                        *(undefined8 *)(unaff_x20 + 0x9c) = uStack_c8;
                                        *(undefined8 *)(unaff_x20 + 0x44) = uStack_120;
                                        *puVar5 = uStack_128;
                                        *(undefined8 *)(unaff_x20 + 0x54) = uStack_110;
                                        *(undefined8 *)(unaff_x20 + 0x4c) = uStack_118;
                                        *(undefined8 *)(unaff_x20 + 100) = uStack_100;
                                        *(undefined8 *)(unaff_x20 + 0x5c) = uStack_108;
                                        *(undefined8 *)(unaff_x20 + 0x74) = uStack_f0;
                                        *(undefined8 *)(unaff_x20 + 0x6c) = uStack_f8;
                                        if (*(long *)(unaff_x20 + 0x10) == 0) {
                                          func_0x00f78af4();
                                        }
                                        else {
                                          Atlas_Gameplay_Kart_FollowCameraParams__Lerp
                                                    (&uStack_128,puVar5,
                                                     *(long *)(unaff_x20 + 0x10) + 0x1c0,0);
                                          uStack_298 = uStack_e0;
                                          uStack_2a0 = uStack_e8;
                                          uStack_288 = uStack_d0;
                                          uStack_290 = uStack_d8;
                                          uStack_280 = uStack_c8;
                                          uStack_2d8 = uStack_120;
                                          uStack_2e0 = uStack_128;
                                          uStack_2c8 = uStack_110;
                                          uStack_2d0 = uStack_118;
                                          uStack_2b8 = uStack_100;
                                          uStack_2c0 = uStack_108;
                                          uStack_2a8 = uStack_f0;
                                          uStack_2b0 = uStack_f8;
                                          *(undefined8 *)(unaff_x20 + 0x84) = uStack_e0;
                                          *(undefined8 *)(unaff_x20 + 0x7c) = uStack_e8;
                                          *(undefined8 *)(unaff_x20 + 0x94) = uStack_d0;
                                          *(undefined8 *)(unaff_x20 + 0x8c) = uStack_d8;
                                          *(undefined8 *)(unaff_x20 + 0x9c) = uStack_c8;
                                          *(undefined8 *)(unaff_x20 + 0x44) = uStack_120;
                                          *puVar5 = uStack_128;
                                          *(undefined8 *)(unaff_x20 + 0x54) = uStack_110;
                                          *(undefined8 *)(unaff_x20 + 0x4c) = uStack_118;
                                          *(undefined8 *)(unaff_x20 + 100) = uStack_100;
                                          *(undefined8 *)(unaff_x20 + 0x5c) = uStack_108;
                                          *(undefined8 *)(unaff_x20 + 0x74) = uStack_f0;
                                          *(undefined8 *)(unaff_x20 + 0x6c) = uStack_f8;
                                          lVar3 = *(long *)(unaff_x20 + 0x28);
                                          if (lVar3 == 0) {
                                            func_0x00f78af4();
                                          }
                                          else if (*(long *)(lVar3 + 0x48) == 0) {
                                            func_0x00f78af4();
                                          }
                                          else {
                                            lVar3 = *(long *)(lVar3 + 0x70);
                                            if (lVar3 != 0) {
                                              unaff_x30 = &UNK_015cb768;
                                              register0x00000008 = (BADSPACEBASE *)auStack_300;
                                              goto code_r0x032279f4;
                                            }
                                            func_0x00f78af4();
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15cbaf4);
    (*pcVar1)();
  }
LAB_015cb9ec:
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(unaff_x19,0);
  return;
}



// ============================================================
// RVA: 0x15d1bd4 | Atlas.Gameplay.Kart.KartPhysics.add_OnTriggerEnterDelegate
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__add_OnTriggerEnterDelegate(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5362 & 1) == 0) {
    func_0x00f78a20(0x3d23a68);
    bRam0000000003eb5362 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ lRam0000000003d23a68))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x10),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5363 & 1) == 0) {
    func_0x00f78a20(0x3d23a68);
    bRam0000000003eb5363 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x10);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ lRam0000000003d23a68))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5364 & 1) == 0) {
    func_0x00f78a20(0x3d23a68);
    bRam0000000003eb5364 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x18);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ lRam0000000003d23a68))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5365 & 1) == 0) {
    func_0x00f78a20(0x3d23a68);
    bRam0000000003eb5365 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x18);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ lRam0000000003d23a68))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5366 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5366 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x20);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5367 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5367 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x20);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5368 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5368 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x28);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5369 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5369 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x28);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar5 = func_0x00f78e5c(plVar4);
  return *(long *)(lVar5 + 0x60);
}



// ============================================================
// RVA: 0x15d1c74 | Atlas.Gameplay.Kart.KartPhysics.remove_OnTriggerEnterDelegate
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__remove_OnTriggerEnterDelegate(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5363 & 1) == 0) {
    func_0x00f78a20(0x3d23a68);
    bRam0000000003eb5363 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ lRam0000000003d23a68))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x10),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5364 & 1) == 0) {
    func_0x00f78a20(0x3d23a68);
    bRam0000000003eb5364 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x18);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ lRam0000000003d23a68))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5365 & 1) == 0) {
    func_0x00f78a20(0x3d23a68);
    bRam0000000003eb5365 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x18);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ lRam0000000003d23a68))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5366 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5366 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x20);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5367 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5367 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x20);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5368 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5368 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x28);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5369 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5369 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x28);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar5 = func_0x00f78e5c(plVar4);
  return *(long *)(lVar5 + 0x60);
}



// ============================================================
// RVA: 0x15d1d14 | Atlas.Gameplay.Kart.KartPhysics.add_OnTriggerExitDelegate
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__add_OnTriggerExitDelegate(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5364 & 1) == 0) {
    func_0x00f78a20(0x3d23a68);
    bRam0000000003eb5364 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ lRam0000000003d23a68))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x18),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5365 & 1) == 0) {
    func_0x00f78a20(0x3d23a68);
    bRam0000000003eb5365 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x18);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ lRam0000000003d23a68))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5366 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5366 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x20);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5367 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5367 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x20);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5368 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5368 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x28);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5369 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5369 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x28);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar5 = func_0x00f78e5c(plVar4);
  return *(long *)(lVar5 + 0x60);
}



// ============================================================
// RVA: 0x15d1db4 | Atlas.Gameplay.Kart.KartPhysics.remove_OnTriggerExitDelegate
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__remove_OnTriggerExitDelegate(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5365 & 1) == 0) {
    func_0x00f78a20(0x3d23a68);
    bRam0000000003eb5365 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ lRam0000000003d23a68))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x18),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5366 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5366 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x20);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5367 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5367 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x20);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5368 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5368 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x28);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5369 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5369 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x28);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar5 = func_0x00f78e5c(plVar4);
  return *(long *)(lVar5 + 0x60);
}



// ============================================================
// RVA: 0x15d1e54 | Atlas.Gameplay.Kart.KartPhysics.add_OnCollisionEnterDelegate
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__add_OnCollisionEnterDelegate(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5366 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5366 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x20),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5367 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5367 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x20);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5368 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5368 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x28);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5369 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5369 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x28);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar5 = func_0x00f78e5c(plVar4);
  return *(long *)(lVar5 + 0x60);
}



// ============================================================
// RVA: 0x15d1ef4 | Atlas.Gameplay.Kart.KartPhysics.remove_OnCollisionEnterDelegate
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__remove_OnCollisionEnterDelegate
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5367 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5367 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x20),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5368 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5368 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x28);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5369 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5369 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x28);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar5 = func_0x00f78e5c(plVar4);
  return *(long *)(lVar5 + 0x60);
}



// ============================================================
// RVA: 0x15d1f94 | Atlas.Gameplay.Kart.KartPhysics.add_OnCollisionExitDelegate
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__add_OnCollisionExitDelegate(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5368 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5368 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x28),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5369 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5369 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x28);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar5 = func_0x00f78e5c(plVar4);
  return *(long *)(lVar5 + 0x60);
}



// ============================================================
// RVA: 0x15d2034 | Atlas.Gameplay.Kart.KartPhysics.remove_OnCollisionExitDelegate
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__remove_OnCollisionExitDelegate
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb5369 & 1) == 0) {
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb5369 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ lRam0000000003d23a40))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x28),plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return *(long *)(lVar4 + 0x60);
}



// ============================================================
// RVA: 0x15d20d4 | Atlas.Gameplay.Kart.KartPhysics.get_HandlingModifiersManager
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartPhysics__get_HandlingModifiersManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x15d20dc | Atlas.Gameplay.Kart.KartPhysics.get_KartPhysicsConfig
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__get_KartPhysicsConfig(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x3d8);
  uVar3 = *(undefined8 *)(param_2 + 0x3f0);
  uVar2 = *(undefined8 *)(param_2 + 1000);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x3e0);
  param_1[0x10] = uVar1;
  param_1[0x13] = uVar3;
  param_1[0x12] = uVar2;
  param_1[0x14] = *(undefined8 *)(param_2 + 0x3f8);
  uVar1 = *(undefined8 *)(param_2 + 0x398);
  uVar3 = *(undefined8 *)(param_2 + 0x3b0);
  uVar2 = *(undefined8 *)(param_2 + 0x3a8);
  param_1[9] = *(undefined8 *)(param_2 + 0x3a0);
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x3b8);
  uVar2 = *(undefined8 *)(param_2 + 0x3d0);
  uVar1 = *(undefined8 *)(param_2 + 0x3c8);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x3c0);
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x358);
  uVar3 = *(undefined8 *)(param_2 + 0x370);
  uVar2 = *(undefined8 *)(param_2 + 0x368);
  param_1[1] = *(undefined8 *)(param_2 + 0x360);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x378);
  uVar2 = *(undefined8 *)(param_2 + 0x390);
  uVar1 = *(undefined8 *)(param_2 + 0x388);
  param_1[5] = *(undefined8 *)(param_2 + 0x380);
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



// ============================================================
// RVA: 0x15d2114 | Atlas.Gameplay.Kart.KartPhysics.get_RigidBody
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartPhysics__get_RigidBody(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x15d211c | Atlas.Gameplay.Kart.KartPhysics.get_Replicator
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartPhysics__get_Replicator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x15d2124 | Atlas.Gameplay.Kart.KartPhysics.get_PhysicsInput
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartPhysics__get_PhysicsInput(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15d212c | Atlas.Gameplay.Kart.KartPhysics.get_PhysicsHandling
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartPhysics__get_PhysicsHandling(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x15d2134 | Atlas.Gameplay.Kart.KartPhysics.get_PhysicsState
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__get_PhysicsState(long param_1)

{
  return param_1 + 0x78;
}



// ============================================================
// RVA: 0x15d213c | Atlas.Gameplay.Kart.KartPhysics.get_Wheels
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__get_Wheels(long param_1)

{
  return param_1 + 0x598;
}



// ============================================================
// RVA: 0x15d2144 | Atlas.Gameplay.Kart.KartPhysics.get_Suspension
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__get_Suspension(long param_1)

{
  return param_1 + 0x78;
}



// ============================================================
// RVA: 0x15d214c | Atlas.Gameplay.Kart.KartPhysics.get_LngForce
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__get_LngForce(long param_1)

{
  return param_1 + 0xd0;
}



// ============================================================
// RVA: 0x15d2154 | Atlas.Gameplay.Kart.KartPhysics.get_LatForce
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__get_LatForce(long param_1)

{
  return param_1 + 0x11c;
}



// ============================================================
// RVA: 0x15d215c | Atlas.Gameplay.Kart.KartPhysics.get_VertForce
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__get_VertForce(long param_1)

{
  return param_1 + 0x120;
}



// ============================================================
// RVA: 0x15d2164 | Atlas.Gameplay.Kart.KartPhysics.get_GlidingForce
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__get_GlidingForce(long param_1)

{
  return param_1 + 0x124;
}



// ============================================================
// RVA: 0x15d216c | Atlas.Gameplay.Kart.KartPhysics.get_RotForce
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__get_RotForce(long param_1)

{
  return param_1 + 0x128;
}



// ============================================================
// RVA: 0x15d2174 | Atlas.Gameplay.Kart.KartPhysics.get_Aero
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__get_Aero(long param_1)

{
  return param_1 + 400;
}



// ============================================================
// RVA: 0x15d217c | Atlas.Gameplay.Kart.KartPhysics.get_Events
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__get_Events(long param_1)

{
  return param_1 + 0x330;
}



// ============================================================
// RVA: 0x15d2184 | Atlas.Gameplay.Kart.KartPhysics.get_VisualState
// ============================================================

long Atlas_Gameplay_Kart_KartPhysics__get_VisualState(long param_1)

{
  return param_1 + 0x340;
}



// ============================================================
// RVA: 0x15d218c | Atlas.Gameplay.Kart.KartPhysics.get_HitInvuln
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysics__get_HitInvuln(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    return 0.0 < *(float *)(*(long *)(param_1 + 0x60) + 0x5c);
  }
  lVar1 = func_0x00f78af4();
  return (bool)*(undefined1 *)(lVar1 + 0x1ea);
}



// ============================================================
// RVA: 0x15d21ac | Atlas.Gameplay.Kart.KartPhysics.get_HopInvuln
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartPhysics__get_HopInvuln(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1ea);
}



// ============================================================
// RVA: 0x15d21b4 | Atlas.Gameplay.Kart.KartPhysics.get_IsInvuln
// ============================================================

ulong Atlas_Gameplay_Kart_KartPhysics__get_IsInvuln(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsInvuln*/ func_0x015d96f0(*(long *)(param_1 + 0x60),0);
    if ((uVar1 & 1) == 0) {
      uVar1 = (ulong)(*(char *)(param_1 + 0x1ea) != '\0');
    }
    else {
      uVar1 = 1;
    }
    return uVar1;
  }
  uVar1 = func_0x00f78af4();
  return uVar1;
}



// ============================================================
// RVA: 0x15d21fc | Atlas.Gameplay.Kart.KartPhysics.get_WheelRotation
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysics__get_WheelRotation(long param_1)

{
  return *(undefined4 *)(param_1 + 0x340);
}



// ============================================================
// RVA: 0x15d2204 | Atlas.Gameplay.Kart.KartPhysics.get_SteerAngle
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysics__get_SteerAngle(long param_1)

{
  return *(undefined4 *)(param_1 + 0x344);
}



// ============================================================
// RVA: 0x15d220c | Atlas.Gameplay.Kart.KartPhysics.get_SteerWheelDisplay
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysics__get_SteerWheelDisplay(long param_1)

{
  return *(undefined4 *)(param_1 + 0x348);
}



// ============================================================
// RVA: 0x15d2214 | Atlas.Gameplay.Kart.KartPhysics.get_DriftDisplay
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartPhysics__get_DriftDisplay(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34c);
}



// ============================================================
// RVA: 0x15d221c | Atlas.Gameplay.Kart.KartPhysics.get_KartSetup
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartPhysics__get_KartSetup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15d2224 | Atlas.Gameplay.Kart.KartPhysics.InitPhysics
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__InitPhysics(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined4 auStack_1f8 [2];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 auStack_1c8 [2];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
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
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  if ((bRam0000000003eb5371 & 1) == 0) {
    func_0x00f78a20(0x3d1fea8);
    func_0x00f78a20(0x3d1f150);
    func_0x00f78a20(0x3d1f160);
    bRam0000000003eb5371 = 1;
  }
  uVar3 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartSuspensionState[]_TypeInfo*/ uRam0000000003d1f160,4);
  *(undefined8 *)(param_1 + 0x598) = uVar3;
  lVar4 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartPhysicsRaycastResult[]_TypeInfo*/ uRam0000000003d1f150,5);
  *(long *)(param_1 + 0x5a0) = lVar4;
  if (lVar4 != 0) {
    lVar10 = 0;
    uVar8 = 0;
    do {
      uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar8) {
        plVar7 = (long *)(param_1 + 0x70);
        plVar9 = (long *)(param_1 + 0x38);
        lVar4 = *plVar9;
        if ((lVar4 != 0) && (*plVar7 != 0)) {
          /*UnityEngine.Rigidbody$$set_inertiaTensor*/ func_0x032a2d10(*(undefined4 *)(lVar4 + 0x1c),*(undefined4 *)(lVar4 + 0x20),
                          *(undefined4 *)(lVar4 + 0x24),*plVar7,0);
          lVar4 = *plVar9;
          if (lVar4 != 0) {
            fVar19 = *(float *)(lVar4 + 0x30);
            fVar15 = *(float *)(lVar4 + 0x14);
            fVar18 = *(float *)(lVar4 + 0x18);
            fStack_90 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(*(undefined4 *)(lVar4 + 0x10),0);
            fStack_90 = fStack_90 + 0.0;
            fStack_88 = fVar18 + 0.0;
            if (*plVar9 != 0) {
              fStack_8c = fVar19 + fVar15 + *(float *)(*plVar9 + 0x30) * -0.5;
              lVar4 = param_1 + 0x40;
              uStack_148 = 0;
              uStack_140 = 0;
              uStack_138 = 0;
              /*Atlas.Gameplay.Kart.KartPhysicsBodyConfig$$.ctor*/ func_0x015d5098(&uStack_148,lVar4,0);
              *(undefined8 *)(param_1 + 0x3f4) = uStack_140;
              *(undefined8 *)(param_1 + 0x3ec) = uStack_148;
              *(undefined4 *)(param_1 + 0x3fc) = uStack_138;
              /*Atlas.Gameplay.Kart.KartPhysicsBodyState$$Initialize*/ func_0x015d5120(param_1 + 0x194,0);
              if (*(long *)(param_1 + 0x598) != 0) {
                uVar8 = *(ulong *)(*(long *)(param_1 + 0x598) + 0x18);
                iVar2 = (int)uVar8;
                if (iVar2 < 1) goto code_r0x015d2500;
                uVar5 = 0;
                lVar13 = 0x20;
                lVar10 = 0x20;
                goto code_r0x015d2420;
              }
            }
          }
        }
        break;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
      }
      if (uVar5 <= uVar8) goto LAB_015d2700;
      lVar4 = lVar4 + lVar10;
      lVar10 = lVar10 + 0x34;
      uVar8 = uVar8 + 1;
      puVar6 = *(undefined8 **)(/*Atlas.Gameplay.Kart.AtlasKartPhysicsConsts_TypeInfo*/ lRam0000000003d1fea8 + 0xb8);
      uVar14 = puVar6[1];
      uVar3 = *puVar6;
      uVar17 = puVar6[3];
      uVar16 = puVar6[2];
      uVar1 = *(undefined4 *)(puVar6 + 5);
      *(undefined8 *)(lVar4 + 0x40) = puVar6[4];
      *(undefined8 *)(lVar4 + 0x28) = uVar14;
      *(undefined8 *)(lVar4 + 0x20) = uVar3;
      *(undefined8 *)(lVar4 + 0x38) = uVar17;
      *(undefined8 *)(lVar4 + 0x30) = uVar16;
      *(undefined4 *)(lVar4 + 0x4c) = 0;
      *(undefined4 *)(lVar4 + 0x50) = 0;
      *(undefined4 *)(lVar4 + 0x48) = uVar1;
      lVar4 = *(long *)(param_1 + 0x5a0);
    } while (lVar4 != 0);
  }
LAB_015d26fc:
  func_0x00f78af4();
  goto LAB_015d2700;
  while( true ) {
    lVar11 = *(long *)(param_1 + 0x358);
    fVar15 = (float)/*UnityEngine.Rigidbody$$get_mass*/ func_0x032a24c4(*(long *)(param_1 + 0x70),0);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    /*Atlas.Gameplay.Kart.KartSuspensionConfig$$.ctor*/ func_0x015e11b8(fVar15 / (float)iVar2,&uStack_c0,uVar5,plVar9,&fStack_90,0);
    if (lVar11 == 0) goto LAB_015d26fc;
    if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_015d2700;
    puVar6 = (undefined8 *)(lVar11 + lVar10);
    puVar6[3] = uStack_a8;
    puVar6[2] = uStack_b0;
    puVar6[5] = uStack_98;
    puVar6[4] = uStack_a0;
    puVar6[1] = uStack_b8;
    *puVar6 = uStack_c0;
    lVar11 = *(long *)(param_1 + 0x358);
    if (lVar11 == 0) goto LAB_015d26fc;
    if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_015d2700;
    lVar12 = *(long *)(param_1 + 0x598);
    puVar6 = (undefined8 *)(lVar11 + lVar10);
    uStack_178 = puVar6[1];
    uStack_180 = *puVar6;
    uStack_168 = puVar6[3];
    uStack_170 = puVar6[2];
    uStack_158 = puVar6[5];
    uStack_160 = puVar6[4];
    uStack_f0 = uStack_180;
    uStack_e8 = uStack_178;
    uStack_e0 = uStack_170;
    uStack_d8 = uStack_168;
    uStack_d0 = uStack_160;
    uStack_c8 = uStack_158;
    /*Atlas.Gameplay.Kart.KartSuspensionState$$Init*/ func_0x015e1464(&uStack_148,&uStack_180,0);
    if (lVar12 == 0) goto LAB_015d26fc;
    if (*(uint *)(lVar12 + 0x18) <= uVar5) goto LAB_015d2700;
    _memmove(lVar12 + lVar13,&uStack_148,0x58);
    uVar5 = uVar5 + 1;
    lVar10 = lVar10 + 0x30;
    lVar13 = lVar13 + 0x58;
    if ((uVar8 & 0xffffffff) == uVar5) break;
code_r0x015d2420:
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_015d26fc;
  }
code_r0x015d2500:
  if (*plVar7 == 0) goto LAB_015d26fc;
  /*UnityEngine.Rigidbody$$get_mass*/ func_0x032a24c4(*plVar7,0);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  /*Atlas.Gameplay.Kart.KartSuspensionConfig$$.ctor*/ func_0x015e133c(&uStack_c0,plVar9,&fStack_90,0);
  *(undefined8 *)(param_1 + 0x368) = uStack_b8;
  *(undefined8 *)(param_1 + 0x360) = uStack_c0;
  *(undefined8 *)(param_1 + 0x378) = uStack_a8;
  *(undefined8 *)(param_1 + 0x370) = uStack_b0;
  *(undefined8 *)(param_1 + 0x388) = uStack_98;
  *(undefined8 *)(param_1 + 0x380) = uStack_a0;
  uStack_1a8 = uStack_b8;
  uStack_1b0 = uStack_c0;
  uStack_198 = uStack_a8;
  uStack_1a0 = uStack_b0;
  uStack_188 = uStack_98;
  uStack_190 = uStack_a0;
  /*Atlas.Gameplay.Kart.KartSuspensionState$$Init*/ func_0x015e1464(&uStack_148,&uStack_1b0,0);
  *(undefined8 *)(param_1 + 0xa0) = uStack_120;
  *(undefined8 *)(param_1 + 0x98) = uStack_128;
  *(undefined8 *)(param_1 + 0xb0) = uStack_110;
  *(undefined8 *)(param_1 + 0xa8) = uStack_118;
  *(undefined8 *)(param_1 + 0xc0) = uStack_100;
  *(undefined8 *)(param_1 + 0xb8) = uStack_108;
  *(undefined8 *)(param_1 + 200) = uStack_f8;
  *(undefined8 *)(param_1 + 0x80) = uStack_140;
  *(undefined8 *)(param_1 + 0x78) = uStack_148;
  *(undefined8 *)(param_1 + 0x90) = uStack_130;
  *(ulong *)(param_1 + 0x88) = CONCAT44(uStack_134,uStack_138);
  lVar10 = *(long *)(param_1 + 0x358);
  if (lVar10 == 0) goto LAB_015d26fc;
  if ((*(uint *)(lVar10 + 0x18) != 0) && (2 < *(uint *)(lVar10 + 0x18))) {
    fStack_88 = (*(float *)(lVar10 + 0x34) + *(float *)(lVar10 + 0x94)) * 0.5;
    lVar10 = *plVar7;
    /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
    if (lVar10 != 0) {
      /*UnityEngine.Rigidbody$$set_inertiaTensorRotation*/ func_0x032a2bb8(lVar10,0);
      lVar10 = *plVar7;
      /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fStack_90,fStack_8c,fStack_88,0);
      if (lVar10 != 0) {
        /*UnityEngine.Rigidbody$$set_centerOfMass*/ func_0x032a29b4(lVar10,0);
        uStack_d0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        /*Atlas.Gameplay.Kart.KartPhysicsLngForceConfig$$.ctor*/ func_0x015db9fc(&uStack_f0,lVar4,plVar7,0);
        *(undefined8 *)(param_1 + 0x398) = uStack_e8;
        *(undefined8 *)(param_1 + 0x390) = uStack_f0;
        *(undefined8 *)(param_1 + 0x3a8) = uStack_d8;
        *(undefined8 *)(param_1 + 0x3a0) = uStack_e0;
        *(undefined8 *)(param_1 + 0x3b0) = uStack_d0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        /*Atlas.Gameplay.Kart.KartPhysicsLatForceConfig$$.ctor*/ func_0x015db99c(&uStack_1c0,lVar4,plVar7,0);
        *(undefined8 *)(param_1 + 0x3c0) = uStack_1b8;
        *(undefined8 *)(param_1 + 0x3b8) = uStack_1c0;
        auStack_1c8[0] = 0;
        /*Atlas.Gameplay.Kart.KartPhysicsVertForceConfig$$.ctor*/ func_0x015ddd74(auStack_1c8,lVar4,plVar7,0);
        *(undefined4 *)(param_1 + 0x3c8) = auStack_1c8[0];
        uStack_1d0 = 0;
        uStack_1d8 = 0;
        /*Atlas.Gameplay.Kart.KartPhysicsGlidingForceConfig$$.ctor*/ func_0x015d8d28(&uStack_1d8,lVar4,plVar7,0);
        *(undefined8 *)(param_1 + 0x3cc) = uStack_1d8;
        *(undefined4 *)(param_1 + 0x3d4) = uStack_1d0;
        uStack_1f0 = 0;
        uStack_1e8 = 0;
        /*Atlas.Gameplay.Kart.KartPhysicsRotForceConfig$$.ctor*/ func_0x015dbd20(&uStack_1f0,lVar4,plVar7,0);
        *(undefined8 *)(param_1 + 0x3e0) = uStack_1e8;
        *(undefined8 *)(param_1 + 0x3d8) = uStack_1f0;
        auStack_1f8[0] = 0;
        /*Atlas.Gameplay.Kart.KartPhysicsAeroConfig$$.ctor*/ func_0x015d5060(auStack_1f8,param_1 + 0x390,lVar4,0);
        *(undefined4 *)(param_1 + 1000) = auStack_1f8[0];
        return;
      }
    }
    goto LAB_015d26fc;
  }
LAB_015d2700:
  uVar3 = func_0x00f78b24();
  lVar4 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb536e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb536e = 1;
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x50);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar2 != 0) {
    if (*(long *)(lVar4 + 0x50) == 0) goto code_r0x015d2800;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x50),0,0);
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x70);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar2 == 0) {
    return;
  }
  if (*(long *)(lVar4 + 0x70) != 0) {
    /*UnityEngine.Rigidbody$$set_constraints*/ func_0x032a2824(*(long *)(lVar4 + 0x70),0x50,0);
    lVar4 = *(long *)(lVar4 + 0x70);
    if (lVar4 != 0) {
      if (pcRam0000000003ec27e0 == (code *)0x0) {
        pcRam0000000003ec27e0 =
             (code *)func_0x00f789d4("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x032a2750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec27e0)(lVar4,1);
      return;
    }
  }
code_r0x015d2800:
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb536c & 1) == 0) {
    func_0x00f78a20(0x3d3e1f8);
    bRam0000000003eb536c = 1;
  }
  if (*(char *)(lVar4 + 0x5b0) != '\0') {
    /*Unity.Collections.NativeArray<DriftBoostLevel>$$Dispose*/ func_0x025ebd90(lVar4 + 0x588,uRam0000000003d3e1f8);
  }
  *(undefined1 *)(lVar4 + 0x5b0) = 0;
  return;
}



// ============================================================
// RVA: 0x15d270c | Atlas.Gameplay.Kart.KartPhysics.InitCollidersAndRigidbody
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__InitCollidersAndRigidbody(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb536e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb536e = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar1 != 0) {
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_015d2800;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x50),0,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    /*UnityEngine.Rigidbody$$set_constraints*/ func_0x032a2824(*(long *)(param_1 + 0x70),0x50,0);
    lVar2 = *(long *)(param_1 + 0x70);
    if (lVar2 != 0) {
      if (pcRam0000000003ec27e0 == (code *)0x0) {
        pcRam0000000003ec27e0 =
             (code *)func_0x00f789d4("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x032a2750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec27e0)(lVar2,1);
      return;
    }
  }
LAB_015d2800:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb536c & 1) == 0) {
    func_0x00f78a20(0x3d3e1f8);
    bRam0000000003eb536c = 1;
  }
  if (*(char *)(lVar2 + 0x5b0) != '\0') {
    /*Unity.Collections.NativeArray<DriftBoostLevel>$$Dispose*/ func_0x025ebd90(lVar2 + 0x588,uRam0000000003d3e1f8);
  }
  *(undefined1 *)(lVar2 + 0x5b0) = 0;
  return;
}



// ============================================================
// RVA: 0x15d2804 | Atlas.Gameplay.Kart.KartPhysics.KartPhysicsJobDispose
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__KartPhysicsJobDispose(long param_1)

{
  if ((bRam0000000003eb536c & 1) == 0) {
    func_0x00f78a20(0x3d3e1f8);
    bRam0000000003eb536c = 1;
  }
  if (*(char *)(param_1 + 0x5b0) != '\0') {
    /*Unity.Collections.NativeArray<DriftBoostLevel>$$Dispose*/ func_0x025ebd90(param_1 + 0x588,uRam0000000003d3e1f8);
  }
  *(undefined1 *)(param_1 + 0x5b0) = 0;
  return;
}



// ============================================================
// RVA: 0x15d2860 | Atlas.Gameplay.Kart.KartPhysics.DisablePhysics
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d2900 | Atlas.Gameplay.Kart.KartPhysics.KartPhysicsJobInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d2d20 | Atlas.Gameplay.Kart.KartPhysics.PostInitCollidersAndRigidbody
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d2e04 | Atlas.Gameplay.Kart.KartPhysics.CacheRigidBodyValues
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d2f78 | Atlas.Gameplay.Kart.KartPhysics.UpdateReplication
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d3278 | Atlas.Gameplay.Kart.KartPhysics.PreFixedUpdate
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15d4420 | Atlas.Gameplay.Kart.KartPhysics.FixedUpdate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartPhysics__FixedUpdate
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               undefined8 param_5,long param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auVar34 [16];
  ulong uVar27;
  
  if (*(long *)(param_4 + 0x68) != 0) {
    if ((-1 < *(int *)(*(long *)(param_4 + 0x68) + 0x9c)) &&
       (lVar9 = *(long *)(param_4 + 0x580), lVar9 != 0)) {
      if ((bRam0000000003eb533e & 1) == 0) {
        func_0x00f78a20(0x3d57fa0);
        bRam0000000003eb533e = 1;
      }
      if (*(int *)(lVar9 + 0x11c) <= *(int *)(lVar9 + 0x128)) {
        /*Unity.Jobs.IJobExtensions$$Run<KartPhysicsFixedUpdateAllJob>*/ func_0x0185e6bc(&stack0xffffffffffffff60,uRam0000000003d57fa0);
        *(undefined4 *)(lVar9 + 0x128) = 0;
      }
      return;
    }
    return;
  }
  auVar34 = func_0x00f78af4();
  lVar11 = auVar34._8_8_;
  lVar9 = auVar34._0_8_;
  if ((bRam0000000003eb5378 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d265d8);
    bRam0000000003eb5378 = 1;
  }
  if (*(char *)(lVar9 + 0x429) == '\0') {
    return;
  }
  if (*(long *)(lVar9 + 0x68) != 0) {
    if (*(long *)(*(long *)(lVar9 + 0x68) + 0x90) == 0) {
      return;
    }
    if (*(long *)(lVar9 + 0x60) != 0) {
      uVar10 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsRespawning*/ func_0x015d97c4(*(long *)(lVar9 + 0x60),0);
      if ((uVar10 & 1) != 0) {
        return;
      }
      if (*(char *)(lVar9 + 0x5be) == '\0') {
        return;
      }
      if (*(long *)(lVar9 + 0x68) != 0) {
        uVar24 = *(uint *)(*(long *)(lVar9 + 0x68) + 0x9c);
        if ((int)uVar24 < 0) {
          return;
        }
        if (*(long *)(lVar9 + 0x580) != 0) {
          lVar12 = *(long *)(*(long *)(lVar9 + 0x580) + 200) + (ulong)uVar24 * 0x31c;
          cVar1 = *(char *)(lVar12 + 0x2dc);
          cVar2 = *(char *)(lVar12 + 0x2dd);
          cVar3 = *(char *)(lVar12 + 0x2de);
          cVar4 = *(char *)(lVar12 + 0x2df);
          uVar32 = *(undefined4 *)(lVar12 + 0x2e0);
          uVar33 = *(undefined4 *)(lVar12 + 0x2e4);
          uVar22 = *(undefined4 *)(lVar12 + 0x2e8);
          cVar5 = *(char *)(lVar12 + 0x2ec);
          uVar29 = *(undefined4 *)(lVar12 + 0x2f0);
          fVar30 = *(float *)(lVar12 + 0x2f4);
          fVar31 = *(float *)(lVar12 + 0x2f8);
          cVar6 = *(char *)(lVar12 + 0x2fc);
          uVar16 = *(undefined4 *)(lVar12 + 0x300);
          uVar23 = *(undefined4 *)(lVar12 + 0x304);
          uVar17 = *(undefined4 *)(lVar12 + 0x308);
          cVar7 = *(char *)(lVar12 + 0x30c);
          uVar24 = *(uint *)(lVar12 + 0x310);
          uVar27 = (ulong)uVar24;
          uVar18 = *(undefined4 *)(lVar12 + 0x314);
          uVar19 = *(undefined4 *)(lVar12 + 0x318);
          _memmove(param_6,lVar12,0x2dc);
          uVar10 = 0;
          lVar12 = 0x20;
          do {
            if (((*(long *)(lVar9 + 0x68) == 0) || (*(long *)(lVar9 + 0x580) == 0)) ||
               (lVar13 = *(long *)(lVar9 + 0x598), lVar13 == 0)) goto code_r0x015d4b24;
            if (*(uint *)(lVar13 + 0x18) <= uVar10) goto code_r0x015d4b28;
            _memmove(lVar13 + lVar12,
                     *(long *)(*(long *)(lVar9 + 0x580) + 0xd8) +
                     (long)((int)uVar10 + *(int *)(*(long *)(lVar9 + 0x68) + 0x9c) * 4) * 0x58,0x58)
            ;
            fVar25 = (float)uVar27;
            uVar10 = uVar10 + 1;
            lVar12 = lVar12 + 0x58;
          } while (uVar10 != 4);
          if (cVar5 != '\0') {
            lVar12 = *(long *)(lVar9 + 0x70);
            if (lVar12 == 0) goto code_r0x015d4b24;
            fVar20 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar12,0);
            fVar21 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar29,fVar30,fVar31,0);
            fVar25 = fVar25 + fVar30;
            param_3 = param_3 + fVar31;
            /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(fVar20 + fVar21,fVar25,param_3,lVar12,0);
          }
          if (*(long *)(lVar9 + 0x70) != 0) {
            fVar30 = (float)/*UnityEngine.Rigidbody$$get_angularVelocity*/ func_0x032a224c(*(long *)(lVar9 + 0x70),0);
            lVar12 = *(long *)(lVar9 + 0x70);
            if ((lVar12 != 0) &&
               (fVar31 = param_3, fVar20 = (float)/*UnityEngine.Rigidbody$$get_angularVelocity*/ func_0x032a224c(lVar12,0), lVar11 != 0)) {
              fVar21 = (float)func_0x0001bd10(3,/*Core.Application.IUpdateParams_TypeInfo*/ uRam0000000003d22618,lVar11);
              /*UnityEngine.Rigidbody$$set_angularVelocity*/ func_0x032a22fc(fVar20 - fVar30 * fVar21,fVar25 + fVar21 * -0.0,
                              fVar31 - param_3 * fVar21,lVar12,0);
              lVar12 = *(long *)(lVar9 + 0x70);
              /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(param_6 + 0x284),*(undefined4 *)(param_6 + 0x288),
                              *(undefined4 *)(param_6 + 0x28c),0);
              if (lVar12 != 0) {
                /*UnityEngine.Rigidbody$$AddForce*/ func_0x032a3b38(lVar12,0);
                lVar12 = *(long *)(lVar9 + 0x70);
                /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(param_6 + 0xf0),*(undefined4 *)(param_6 + 0xf4),
                                *(undefined4 *)(param_6 + 0xf8),0);
                if (lVar12 != 0) {
                  /*UnityEngine.Rigidbody$$AddRelativeTorque*/ func_0x032a40d8(lVar12,0);
                  lVar12 = *(long *)(lVar9 + 0x70);
                  fVar30 = *(float *)(param_6 + 0x100);
                  fVar31 = *(float *)(param_6 + 0x104);
                  /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(param_6 + 0xfc),0);
                  if (lVar12 != 0) {
                    /*UnityEngine.Rigidbody$$AddTorque*/ func_0x032a3ef8(lVar12,0);
                    if (cVar1 != '\0') {
                      lVar12 = *(long *)(lVar9 + 0x70);
                      fVar30 = *(float *)(param_6 + 0x10c);
                      fVar31 = *(float *)(param_6 + 0x110);
                      /*Unity.Mathematics.quaternion$$op_Implicit*/ func_0x030c6310(*(undefined4 *)(param_6 + 0x108),fVar30,fVar31,
                                      *(undefined4 *)(param_6 + 0x114),0);
                      if (lVar12 == 0) goto code_r0x015d4b24;
                      /*UnityEngine.Rigidbody$$MoveRotation*/ func_0x032a33dc(lVar12,0);
                    }
                    if (*(float *)(param_6 + 0x19c) != 0.0) {
                      lVar12 = *(long *)(lVar9 + 0x70);
                      if (lVar12 == 0) goto code_r0x015d4b24;
                      fVar25 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar12,0);
                      fVar21 = *(float *)(lVar9 + 0x214);
                      fVar20 = (float)func_0x0001bd10(3,/*Core.Application.IUpdateParams_TypeInfo*/ uRam0000000003d22618,lVar11);
                      fVar20 = 1.0 - fVar21 * fVar20;
                      fVar30 = fVar30 * fVar20;
                      fVar31 = fVar31 * fVar20;
                      /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(fVar25 * fVar20,lVar12,0);
                      *(undefined4 *)(param_6 + 0x19c) = 0;
                    }
                    lVar12 = *(long *)(lVar9 + 0x60);
                    if (lVar12 != 0) {
                      if (*(char *)(lVar12 + 0x70) == '\0') {
                        if (cVar2 != '\0') {
                          lVar12 = *(long *)(lVar9 + 0x70);
                          uVar26 = *(undefined4 *)(param_6 + 0x1b4);
                          uVar28 = *(undefined4 *)(param_6 + 0x1b8);
                          uVar29 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(param_6 + 0x1b0),0);
                          if (lVar12 == 0) goto code_r0x015d4b24;
                          /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(lVar12,0);
                          uVar29 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(uVar29,0);
                          *(undefined4 *)(param_6 + 0x21c) = uVar29;
                          *(undefined4 *)(param_6 + 0x220) = uVar26;
                          *(undefined4 *)(param_6 + 0x224) = uVar28;
                          uVar29 = *(undefined4 *)
                                    (*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
                          *(undefined8 *)(param_6 + 0x1b0) =
                               **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
                          *(undefined4 *)(param_6 + 0x1b8) = uVar29;
                        }
                      }
                      else {
                        lVar13 = *(long *)(lVar9 + 0x70);
                        /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$ConsumePendingPushVel*/ func_0x015da5b8(lVar12,0);
                        uVar29 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(0);
                        if (lVar13 == 0) goto code_r0x015d4b24;
                        /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(lVar13,0);
                        uVar29 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(uVar29,0);
                        *(undefined4 *)(param_6 + 0x21c) = uVar29;
                        *(float *)(param_6 + 0x220) = fVar30;
                        *(float *)(param_6 + 0x224) = fVar31;
                        uVar29 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
                        *(undefined8 *)(param_6 + 0x1b0) =
                             **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
                        *(undefined4 *)(param_6 + 0x1b8) = uVar29;
                        *(undefined4 *)(lVar9 + 0x5b4) = 0x3f000000;
                      }
                      if (cVar3 != '\0') {
                        lVar12 = *(long *)(lVar9 + 0x70);
                        /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(param_6 + 0x1bc),
                                        *(undefined4 *)(param_6 + 0x1c0),
                                        *(undefined4 *)(param_6 + 0x1c4),0);
                        if (lVar12 == 0) goto code_r0x015d4b24;
                        /*UnityEngine.Rigidbody$$set_angularVelocity*/ func_0x032a22fc(lVar12,0);
                        uVar29 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
                        *(undefined8 *)(param_6 + 0x1bc) =
                             **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
                        *(undefined4 *)(param_6 + 0x1c4) = uVar29;
                      }
                      if (cVar4 != '\0') {
                        lVar12 = *(long *)(lVar9 + 0x70);
                        /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar32,uVar33,uVar22,0);
                        if (lVar12 == 0) goto code_r0x015d4b24;
                        /*UnityEngine.Rigidbody$$AddForce*/ func_0x032a3a78(lVar12,1,0);
                        *(undefined4 *)(param_6 + 0x198) = 0;
                      }
                      if (cVar6 != '\0') {
                        lVar12 = *(long *)(lVar9 + 0x70);
                        /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar16,uVar23,uVar17,0);
                        if (lVar12 == 0) goto code_r0x015d4b24;
                        /*UnityEngine.Rigidbody$$AddForce*/ func_0x032a3b38(lVar12,0);
                      }
                      if (cVar7 != '\0') {
                        lVar12 = *(long *)(lVar9 + 0x70);
                        uVar16 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar24,0);
                        if (lVar12 == 0) goto code_r0x015d4b24;
                        /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(lVar12,0);
                        uVar16 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(uVar16,0);
                        *(undefined4 *)(param_6 + 0x21c) = uVar16;
                        *(undefined4 *)(param_6 + 0x220) = uVar18;
                        *(undefined4 *)(param_6 + 0x224) = uVar19;
                      }
                      lVar12 = *(long *)(lVar9 + 0x48);
                      if (lVar12 != 0) {
                        if (((((*(char *)(lVar12 + 0x84) == '\0') &&
                              (*(float *)(lVar12 + 0x5c) <= 0.0)) ||
                             (_UNK_033f8144 <= *(float *)(lVar9 + 0x194))) &&
                            ((*(char *)(lVar12 + 0x85) == '\0' || (1.0 <= *(float *)(lVar9 + 0x194))
                             ))) || (cVar4 != '\0')) {
                          lVar12 = *(long *)(lVar9 + 0x70);
                          if (lVar12 == 0) goto code_r0x015d4b24;
                          uVar24 = /*UnityEngine.Rigidbody$$get_constraints*/ func_0x032a27e4(lVar12,0);
                          uVar24 = uVar24 & 0xfffffff5;
                        }
                        else {
                          lVar12 = *(long *)(lVar9 + 0x70);
                          if (lVar12 == 0) goto code_r0x015d4b24;
                          uVar24 = /*UnityEngine.Rigidbody$$get_constraints*/ func_0x032a27e4(lVar12,0);
                          uVar24 = uVar24 | 10;
                        }
                        /*UnityEngine.Rigidbody$$set_constraints*/ func_0x032a2824(lVar12,uVar24,0);
                        fVar30 = *(float *)(lVar9 + 0x5b4);
                        if (0.0 <= fVar30) {
                          fVar31 = (float)func_0x0001bd10(3,/*Core.Application.IUpdateParams_TypeInfo*/ uRam0000000003d22618,lVar11);
                          *(float *)(lVar9 + 0x5b4) = fVar30 - fVar31;
                        }
                        fVar30 = *(float *)(lVar9 + 0x5b8);
                        if (0.0 <= fVar30) {
                          fVar31 = (float)func_0x0001bd10(3,/*Core.Application.IUpdateParams_TypeInfo*/ uRam0000000003d22618,lVar11);
                          *(float *)(lVar9 + 0x5b8) = fVar30 - fVar31;
                        }
                        lVar9 = *(long *)(lVar9 + 0x60);
                        fVar30 = (float)func_0x0001bd10(3,/*Core.Application.IUpdateParams_TypeInfo*/ uRam0000000003d22618,lVar11);
                        if (lVar9 != 0) {
                          if ((bRam0000000003eb5397 & 1) == 0) {
                            func_0x00f78a20(0x3d22ce0,0);
                            func_0x00f78a20(0x3d23990);
                            bRam0000000003eb5397 = 1;
                          }
                          if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar14 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0xb8);
                          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar14,0);
                          *(float *)(lVar9 + 0x100) = fVar30;
                          if (*(long *)(lVar9 + 0x10) != 0) {
                            uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x40);
                            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar15,0,0);
                            if ((uVar10 & 1) == 0) {
                              lVar11 = *(long *)(lVar9 + 0x10);
                              if (lVar11 == 0) {
                                func_0x00f78af4();
                              }
                              else {
                                lVar12 = *(long *)(lVar11 + 0x40);
                                lVar11 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar11,0);
                                if (lVar12 == 0) {
                                  func_0x00f78af4();
                                }
                                else {
                                  uVar15 = /*Atlas.Gameplay.Kart.KartPhysicsHandling$$GetHandlingModifierFromSurfaceType*/ func_0x015d933c(lVar12,*(undefined4 *)(lVar11 + 0x178));
                                  *(undefined8 *)(lVar9 + 0x20) = uVar15;
                                  if ((0.0 < *(float *)(lVar9 + 0x58)) &&
                                     (fVar31 = *(float *)(lVar9 + 0x58) - fVar30,
                                     *(float *)(lVar9 + 0x58) = fVar31, fVar31 <= 0.0)) {
                                    if (*(long *)(lVar9 + 0x10) == 0) {
                                      func_0x00f78af4();
                                      goto code_r0x015da518;
                                    }
                                    lVar11 = *(long *)(*(long *)(lVar9 + 0x10) + 0x48);
                                    if (lVar11 == 0) {
                                      func_0x00f78af4();
                                      goto code_r0x015da518;
                                    }
                                    *(undefined1 *)(lVar11 + 0x84) = 0;
                                    *(undefined1 *)(lVar11 + 0x86) = *(undefined1 *)(lVar11 + 0x85);
                                    *(undefined8 *)(lVar9 + 0x28) = 0;
                                  }
                                  if (0.0 < *(float *)(lVar9 + 0x5c)) {
                                    *(float *)(lVar9 + 0x5c) = *(float *)(lVar9 + 0x5c) - fVar30;
                                  }
                                  if ((0.0 < *(float *)(lVar9 + 0x60)) &&
                                     (fVar31 = *(float *)(lVar9 + 0x60) - fVar30,
                                     *(float *)(lVar9 + 0x60) = fVar31, fVar31 <= 0.0)) {
                                    *(undefined8 *)(lVar9 + 0x30) = 0;
                                  }
                                  if ((0.0 < *(float *)(lVar9 + 0x68)) &&
                                     (fVar31 = *(float *)(lVar9 + 0x68) - fVar30,
                                     *(float *)(lVar9 + 0x68) = fVar31, fVar31 <= 0.0)) {
                                    *(undefined8 *)(lVar9 + 0x38) = 0;
                                  }
                                  if (0.0 < *(float *)(lVar9 + 0x6c)) {
                                    *(float *)(lVar9 + 0x6c) = *(float *)(lVar9 + 0x6c) - fVar30;
                                  }
                                  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$UpdateRespawning*/ func_0x015da0fc(fVar30,lVar9);
                                  if ((0.0 <= *(float *)(lVar9 + 0x80)) &&
                                     (fVar31 = *(float *)(lVar9 + 0x80) - fVar30,
                                     *(float *)(lVar9 + 0x80) = fVar31, fVar31 < 0.0)) {
                                    Atlas_Gameplay_Kart_KartHandlingTurningModifiers__Reset
                                              (lVar9 + 0x48,0);
                                  }
                                  if ((*(float *)(lVar9 + 0x84) < 0.0) ||
                                     (fVar30 = *(float *)(lVar9 + 0x84) - fVar30,
                                     *(float *)(lVar9 + 0x84) = fVar30, 0.0 <= fVar30))
                                  goto code_r0x015da4d0;
                                  if (*(long *)(lVar9 + 0x10) == 0) {
                                    func_0x00f78af4();
                                  }
                                  else {
                                    lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + 0x48);
                                    if (lVar9 != 0) {
                                      *(undefined1 *)(lVar9 + 0x23) = 0;
                                      goto code_r0x015da4d0;
                                    }
                                    func_0x00f78af4();
                                  }
                                }
                              }
code_r0x015da518:
                    /* WARNING: Does not return */
                              pcVar8 = (code *)SoftwareBreakpoint(1,0x15da51c);
                              (*pcVar8)();
                            }
                          }
code_r0x015da4d0:
                          if (pcRam0000000003ec05a0 == (code *)0x0) {
                            pcRam0000000003ec05a0 =
                                 (code *)func_0x00f789d4(
                                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                                  );
                          }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*pcRam0000000003ec05a0)(uVar14);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x015d4b24:
  func_0x00f78af4();
code_r0x015d4b28:
  uVar14 = func_0x00f78b24();
  lVar9 = func_0x00f78ac0(uVar14,0);
  /*Atlas.Gameplay.Kart.KartPhysicsBodyState$$ResetStates*/ func_0x015d52b4(lVar9 + 0x194,0);
  *(undefined4 *)(lVar9 + 0xd0) = 0;
  *(undefined4 *)(lVar9 + 0xec) = 0;
  *(undefined4 *)(lVar9 + 0xdc) = 0;
  *(undefined4 *)(lVar9 + 0x10c) = 0;
  *(undefined1 *)(lVar9 + 0x118) = 0;
  *(undefined4 *)(lVar9 + 0x1f0) = 0;
  return;
}



// ============================================================
// RVA: 0x15d4454 | Atlas.Gameplay.Kart.KartPhysics.PostFixedUpdate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartPhysics__PostFixedUpdate
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5,long param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  ulong uVar26;
  
  if ((bRam0000000003eb5378 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d265d8);
    bRam0000000003eb5378 = 1;
  }
  if (*(char *)(param_4 + 0x429) == '\0') {
    return;
  }
  if (*(long *)(param_4 + 0x68) != 0) {
    if (*(long *)(*(long *)(param_4 + 0x68) + 0x90) == 0) {
      return;
    }
    if (*(long *)(param_4 + 0x60) != 0) {
      uVar9 = /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$get_IsRespawning*/ func_0x015d97c4(*(long *)(param_4 + 0x60),0);
      if ((uVar9 & 1) != 0) {
        return;
      }
      if (*(char *)(param_4 + 0x5be) == '\0') {
        return;
      }
      if (*(long *)(param_4 + 0x68) != 0) {
        uVar23 = *(uint *)(*(long *)(param_4 + 0x68) + 0x9c);
        if ((int)uVar23 < 0) {
          return;
        }
        if (*(long *)(param_4 + 0x580) != 0) {
          lVar10 = *(long *)(*(long *)(param_4 + 0x580) + 200) + (ulong)uVar23 * 0x31c;
          cVar1 = *(char *)(lVar10 + 0x2dc);
          cVar2 = *(char *)(lVar10 + 0x2dd);
          cVar3 = *(char *)(lVar10 + 0x2de);
          cVar4 = *(char *)(lVar10 + 0x2df);
          uVar31 = *(undefined4 *)(lVar10 + 0x2e0);
          uVar32 = *(undefined4 *)(lVar10 + 0x2e4);
          uVar21 = *(undefined4 *)(lVar10 + 0x2e8);
          cVar5 = *(char *)(lVar10 + 0x2ec);
          uVar28 = *(undefined4 *)(lVar10 + 0x2f0);
          fVar29 = *(float *)(lVar10 + 0x2f4);
          fVar30 = *(float *)(lVar10 + 0x2f8);
          cVar6 = *(char *)(lVar10 + 0x2fc);
          uVar15 = *(undefined4 *)(lVar10 + 0x300);
          uVar22 = *(undefined4 *)(lVar10 + 0x304);
          uVar16 = *(undefined4 *)(lVar10 + 0x308);
          cVar7 = *(char *)(lVar10 + 0x30c);
          uVar23 = *(uint *)(lVar10 + 0x310);
          uVar26 = (ulong)uVar23;
          uVar17 = *(undefined4 *)(lVar10 + 0x314);
          uVar18 = *(undefined4 *)(lVar10 + 0x318);
          _memmove(param_6,lVar10,0x2dc);
          uVar9 = 0;
          lVar10 = 0x20;
          do {
            if (((*(long *)(param_4 + 0x68) == 0) || (*(long *)(param_4 + 0x580) == 0)) ||
               (lVar11 = *(long *)(param_4 + 0x598), lVar11 == 0)) goto LAB_015d4b24;
            if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_015d4b28;
            _memmove(lVar11 + lVar10,
                     *(long *)(*(long *)(param_4 + 0x580) + 0xd8) +
                     (long)((int)uVar9 + *(int *)(*(long *)(param_4 + 0x68) + 0x9c) * 4) * 0x58,0x58
                    );
            fVar24 = (float)uVar26;
            uVar9 = uVar9 + 1;
            lVar10 = lVar10 + 0x58;
          } while (uVar9 != 4);
          if (cVar5 != '\0') {
            lVar10 = *(long *)(param_4 + 0x70);
            if (lVar10 == 0) goto LAB_015d4b24;
            fVar19 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar10,0);
            fVar20 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar28,fVar29,fVar30,0);
            fVar24 = fVar24 + fVar29;
            param_3 = param_3 + fVar30;
            /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(fVar19 + fVar20,fVar24,param_3,lVar10,0);
          }
          if (*(long *)(param_4 + 0x70) != 0) {
            fVar29 = (float)/*UnityEngine.Rigidbody$$get_angularVelocity*/ func_0x032a224c(*(long *)(param_4 + 0x70),0);
            lVar10 = *(long *)(param_4 + 0x70);
            if ((lVar10 != 0) &&
               (fVar30 = param_3, fVar19 = (float)/*UnityEngine.Rigidbody$$get_angularVelocity*/ func_0x032a224c(lVar10,0), param_5 != 0)) {
              fVar20 = (float)func_0x0001bd10(3,/*Core.Application.IUpdateParams_TypeInfo*/ uRam0000000003d22618,param_5);
              /*UnityEngine.Rigidbody$$set_angularVelocity*/ func_0x032a22fc(fVar19 - fVar29 * fVar20,fVar24 + fVar20 * -0.0,
                              fVar30 - param_3 * fVar20,lVar10,0);
              lVar10 = *(long *)(param_4 + 0x70);
              /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(param_6 + 0x284),*(undefined4 *)(param_6 + 0x288),
                              *(undefined4 *)(param_6 + 0x28c),0);
              if (lVar10 != 0) {
                /*UnityEngine.Rigidbody$$AddForce*/ func_0x032a3b38(lVar10,0);
                lVar10 = *(long *)(param_4 + 0x70);
                /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(param_6 + 0xf0),*(undefined4 *)(param_6 + 0xf4),
                                *(undefined4 *)(param_6 + 0xf8),0);
                if (lVar10 != 0) {
                  /*UnityEngine.Rigidbody$$AddRelativeTorque*/ func_0x032a40d8(lVar10,0);
                  lVar10 = *(long *)(param_4 + 0x70);
                  fVar29 = *(float *)(param_6 + 0x100);
                  fVar30 = *(float *)(param_6 + 0x104);
                  /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(param_6 + 0xfc),0);
                  if (lVar10 != 0) {
                    /*UnityEngine.Rigidbody$$AddTorque*/ func_0x032a3ef8(lVar10,0);
                    if (cVar1 != '\0') {
                      lVar10 = *(long *)(param_4 + 0x70);
                      fVar29 = *(float *)(param_6 + 0x10c);
                      fVar30 = *(float *)(param_6 + 0x110);
                      /*Unity.Mathematics.quaternion$$op_Implicit*/ func_0x030c6310(*(undefined4 *)(param_6 + 0x108),fVar29,fVar30,
                                      *(undefined4 *)(param_6 + 0x114),0);
                      if (lVar10 == 0) goto LAB_015d4b24;
                      /*UnityEngine.Rigidbody$$MoveRotation*/ func_0x032a33dc(lVar10,0);
                    }
                    if (*(float *)(param_6 + 0x19c) != 0.0) {
                      lVar10 = *(long *)(param_4 + 0x70);
                      if (lVar10 == 0) goto LAB_015d4b24;
                      fVar24 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar10,0);
                      fVar20 = *(float *)(param_4 + 0x214);
                      fVar19 = (float)func_0x0001bd10(3,/*Core.Application.IUpdateParams_TypeInfo*/ uRam0000000003d22618,param_5);
                      fVar19 = 1.0 - fVar20 * fVar19;
                      fVar29 = fVar29 * fVar19;
                      fVar30 = fVar30 * fVar19;
                      /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(fVar24 * fVar19,lVar10,0);
                      *(undefined4 *)(param_6 + 0x19c) = 0;
                    }
                    lVar10 = *(long *)(param_4 + 0x60);
                    if (lVar10 != 0) {
                      if (*(char *)(lVar10 + 0x70) == '\0') {
                        if (cVar2 != '\0') {
                          lVar10 = *(long *)(param_4 + 0x70);
                          uVar25 = *(undefined4 *)(param_6 + 0x1b4);
                          uVar27 = *(undefined4 *)(param_6 + 0x1b8);
                          uVar28 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(param_6 + 0x1b0),0);
                          if (lVar10 == 0) goto LAB_015d4b24;
                          /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(lVar10,0);
                          uVar28 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(uVar28,0);
                          *(undefined4 *)(param_6 + 0x21c) = uVar28;
                          *(undefined4 *)(param_6 + 0x220) = uVar25;
                          *(undefined4 *)(param_6 + 0x224) = uVar27;
                          uVar28 = *(undefined4 *)
                                    (*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
                          *(undefined8 *)(param_6 + 0x1b0) =
                               **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
                          *(undefined4 *)(param_6 + 0x1b8) = uVar28;
                        }
                      }
                      else {
                        lVar11 = *(long *)(param_4 + 0x70);
                        /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$ConsumePendingPushVel*/ func_0x015da5b8(lVar10,0);
                        uVar28 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(0);
                        if (lVar11 == 0) goto LAB_015d4b24;
                        /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(lVar11,0);
                        uVar28 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(uVar28,0);
                        *(undefined4 *)(param_6 + 0x21c) = uVar28;
                        *(float *)(param_6 + 0x220) = fVar29;
                        *(float *)(param_6 + 0x224) = fVar30;
                        uVar28 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
                        *(undefined8 *)(param_6 + 0x1b0) =
                             **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
                        *(undefined4 *)(param_6 + 0x1b8) = uVar28;
                        *(undefined4 *)(param_4 + 0x5b4) = 0x3f000000;
                      }
                      if (cVar3 != '\0') {
                        lVar10 = *(long *)(param_4 + 0x70);
                        /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(param_6 + 0x1bc),
                                        *(undefined4 *)(param_6 + 0x1c0),
                                        *(undefined4 *)(param_6 + 0x1c4),0);
                        if (lVar10 == 0) goto LAB_015d4b24;
                        /*UnityEngine.Rigidbody$$set_angularVelocity*/ func_0x032a22fc(lVar10,0);
                        uVar28 = *(undefined4 *)(*(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8) + 1);
                        *(undefined8 *)(param_6 + 0x1bc) =
                             **(undefined8 **)(/*Unity.Mathematics.float3_TypeInfo*/ lRam0000000003d265d8 + 0xb8);
                        *(undefined4 *)(param_6 + 0x1c4) = uVar28;
                      }
                      if (cVar4 != '\0') {
                        lVar10 = *(long *)(param_4 + 0x70);
                        /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar31,uVar32,uVar21,0);
                        if (lVar10 == 0) goto LAB_015d4b24;
                        /*UnityEngine.Rigidbody$$AddForce*/ func_0x032a3a78(lVar10,1,0);
                        *(undefined4 *)(param_6 + 0x198) = 0;
                      }
                      if (cVar6 != '\0') {
                        lVar10 = *(long *)(param_4 + 0x70);
                        /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar15,uVar22,uVar16,0);
                        if (lVar10 == 0) goto LAB_015d4b24;
                        /*UnityEngine.Rigidbody$$AddForce*/ func_0x032a3b38(lVar10,0);
                      }
                      if (cVar7 != '\0') {
                        lVar10 = *(long *)(param_4 + 0x70);
                        uVar15 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar23,0);
                        if (lVar10 == 0) goto LAB_015d4b24;
                        /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(lVar10,0);
                        uVar15 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(uVar15,0);
                        *(undefined4 *)(param_6 + 0x21c) = uVar15;
                        *(undefined4 *)(param_6 + 0x220) = uVar17;
                        *(undefined4 *)(param_6 + 0x224) = uVar18;
                      }
                      lVar10 = *(long *)(param_4 + 0x48);
                      if (lVar10 != 0) {
                        if (((((*(char *)(lVar10 + 0x84) == '\0') &&
                              (*(float *)(lVar10 + 0x5c) <= 0.0)) ||
                             (_UNK_033f8144 <= *(float *)(param_4 + 0x194))) &&
                            ((*(char *)(lVar10 + 0x85) == '\0' ||
                             (1.0 <= *(float *)(param_4 + 0x194))))) || (cVar4 != '\0')) {
                          lVar10 = *(long *)(param_4 + 0x70);
                          if (lVar10 == 0) goto LAB_015d4b24;
                          uVar23 = /*UnityEngine.Rigidbody$$get_constraints*/ func_0x032a27e4(lVar10,0);
                          uVar23 = uVar23 & 0xfffffff5;
                        }
                        else {
                          lVar10 = *(long *)(param_4 + 0x70);
                          if (lVar10 == 0) goto LAB_015d4b24;
                          uVar23 = /*UnityEngine.Rigidbody$$get_constraints*/ func_0x032a27e4(lVar10,0);
                          uVar23 = uVar23 | 10;
                        }
                        /*UnityEngine.Rigidbody$$set_constraints*/ func_0x032a2824(lVar10,uVar23,0);
                        fVar29 = *(float *)(param_4 + 0x5b4);
                        if (0.0 <= fVar29) {
                          fVar30 = (float)func_0x0001bd10(3,/*Core.Application.IUpdateParams_TypeInfo*/ uRam0000000003d22618,param_5);
                          *(float *)(param_4 + 0x5b4) = fVar29 - fVar30;
                        }
                        fVar29 = *(float *)(param_4 + 0x5b8);
                        if (0.0 <= fVar29) {
                          fVar30 = (float)func_0x0001bd10(3,/*Core.Application.IUpdateParams_TypeInfo*/ uRam0000000003d22618,param_5);
                          *(float *)(param_4 + 0x5b8) = fVar29 - fVar30;
                        }
                        lVar10 = *(long *)(param_4 + 0x60);
                        fVar29 = (float)func_0x0001bd10(3,/*Core.Application.IUpdateParams_TypeInfo*/ uRam0000000003d22618,param_5);
                        if (lVar10 != 0) {
                          if ((bRam0000000003eb5397 & 1) == 0) {
                            func_0x00f78a20(0x3d22ce0,0);
                            func_0x00f78a20(0x3d23990);
                            bRam0000000003eb5397 = 1;
                          }
                          if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar12 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager_TypeInfo*/ lRam0000000003d22ce0 + 0xb8);
                          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar12,0);
                          *(float *)(lVar10 + 0x100) = fVar29;
                          if (*(long *)(lVar10 + 0x10) != 0) {
                            uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x40);
                            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0,0);
                            if ((uVar9 & 1) == 0) {
                              lVar11 = *(long *)(lVar10 + 0x10);
                              if (lVar11 == 0) {
                                func_0x00f78af4();
                              }
                              else {
                                lVar14 = *(long *)(lVar11 + 0x40);
                                lVar11 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar11,0);
                                if (lVar14 == 0) {
                                  func_0x00f78af4();
                                }
                                else {
                                  uVar13 = /*Atlas.Gameplay.Kart.KartPhysicsHandling$$GetHandlingModifierFromSurfaceType*/ func_0x015d933c(lVar14,*(undefined4 *)(lVar11 + 0x178));
                                  *(undefined8 *)(lVar10 + 0x20) = uVar13;
                                  if ((0.0 < *(float *)(lVar10 + 0x58)) &&
                                     (fVar30 = *(float *)(lVar10 + 0x58) - fVar29,
                                     *(float *)(lVar10 + 0x58) = fVar30, fVar30 <= 0.0)) {
                                    if (*(long *)(lVar10 + 0x10) == 0) {
                                      func_0x00f78af4();
                                      goto code_r0x015da518;
                                    }
                                    lVar11 = *(long *)(*(long *)(lVar10 + 0x10) + 0x48);
                                    if (lVar11 == 0) {
                                      func_0x00f78af4();
                                      goto code_r0x015da518;
                                    }
                                    *(undefined1 *)(lVar11 + 0x84) = 0;
                                    *(undefined1 *)(lVar11 + 0x86) = *(undefined1 *)(lVar11 + 0x85);
                                    *(undefined8 *)(lVar10 + 0x28) = 0;
                                  }
                                  if (0.0 < *(float *)(lVar10 + 0x5c)) {
                                    *(float *)(lVar10 + 0x5c) = *(float *)(lVar10 + 0x5c) - fVar29;
                                  }
                                  if ((0.0 < *(float *)(lVar10 + 0x60)) &&
                                     (fVar30 = *(float *)(lVar10 + 0x60) - fVar29,
                                     *(float *)(lVar10 + 0x60) = fVar30, fVar30 <= 0.0)) {
                                    *(undefined8 *)(lVar10 + 0x30) = 0;
                                  }
                                  if ((0.0 < *(float *)(lVar10 + 0x68)) &&
                                     (fVar30 = *(float *)(lVar10 + 0x68) - fVar29,
                                     *(float *)(lVar10 + 0x68) = fVar30, fVar30 <= 0.0)) {
                                    *(undefined8 *)(lVar10 + 0x38) = 0;
                                  }
                                  if (0.0 < *(float *)(lVar10 + 0x6c)) {
                                    *(float *)(lVar10 + 0x6c) = *(float *)(lVar10 + 0x6c) - fVar29;
                                  }
                                  /*Atlas.Gameplay.Kart.KartPhysicsHandlingModifiersManager$$UpdateRespawning*/ func_0x015da0fc(fVar29,lVar10);
                                  if ((0.0 <= *(float *)(lVar10 + 0x80)) &&
                                     (fVar30 = *(float *)(lVar10 + 0x80) - fVar29,
                                     *(float *)(lVar10 + 0x80) = fVar30, fVar30 < 0.0)) {
                                    Atlas_Gameplay_Kart_KartHandlingTurningModifiers__Reset
                                              (lVar10 + 0x48,0);
                                  }
                                  if ((*(float *)(lVar10 + 0x84) < 0.0) ||
                                     (fVar29 = *(float *)(lVar10 + 0x84) - fVar29,
                                     *(float *)(lVar10 + 0x84) = fVar29, 0.0 <= fVar29))
                                  goto code_r0x015da4d0;
                                  if (*(long *)(lVar10 + 0x10) == 0) {
                                    func_0x00f78af4();
                                  }
                                  else {
                                    lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + 0x48);
                                    if (lVar10 != 0) {
                                      *(undefined1 *)(lVar10 + 0x23) = 0;
                                      goto code_r0x015da4d0;
                                    }
                                    func_0x00f78af4();
                                  }
                                }
                              }
code_r0x015da518:
                    /* WARNING: Does not return */
                              pcVar8 = (code *)SoftwareBreakpoint(1,0x15da51c);
                              (*pcVar8)();
                            }
                          }
code_r0x015da4d0:
                          if (pcRam0000000003ec05a0 == (code *)0x0) {
                            pcRam0000000003ec05a0 =
                                 (code *)func_0x00f789d4(
                                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                                  );
                          }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*pcRam0000000003ec05a0)(uVar12);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_015d4b24:
  func_0x00f78af4();
LAB_015d4b28:
  uVar12 = func_0x00f78b24();
  lVar10 = func_0x00f78ac0(uVar12,0);
  /*Atlas.Gameplay.Kart.KartPhysicsBodyState$$ResetStates*/ func_0x015d52b4(lVar10 + 0x194,0);
  *(undefined4 *)(lVar10 + 0xd0) = 0;
  *(undefined4 *)(lVar10 + 0xec) = 0;
  *(undefined4 *)(lVar10 + 0xdc) = 0;
  *(undefined4 *)(lVar10 + 0x10c) = 0;
  *(undefined1 *)(lVar10 + 0x118) = 0;
  *(undefined4 *)(lVar10 + 0x1f0) = 0;
  return;
}



// ============================================================
// RVA: 0x15d4b34 | Atlas.Gameplay.Kart.KartPhysics.ResetStates
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__ResetStates(long param_1)

{
  /*Atlas.Gameplay.Kart.KartPhysicsBodyState$$ResetStates*/ func_0x015d52b4(param_1 + 0x194,0);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  return;
}



// ============================================================
// RVA: 0x15d4b74 | Atlas.Gameplay.Kart.KartPhysics.IsBoosting
// ============================================================

uint Atlas_Gameplay_Kart_KartPhysics__IsBoosting(long param_1)

{
  uint uVar1;
  
  if ((*(float *)(param_1 + 0x1f0) <= 0.0) || (*(char *)(param_1 + 500) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = /*Atlas.Gameplay.Kart.KartPhysicsEventsState$$StartAnyBoost*/ func_0x015d5404(param_1 + 0x330,0);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x15d4bb0 | Atlas.Gameplay.Kart.KartPhysics.IsDrifting
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysics__IsDrifting(long param_1)

{
  return 0.0 < *(float *)(param_1 + 0x1f8);
}



// ============================================================
// RVA: 0x15d4bc0 | Atlas.Gameplay.Kart.KartPhysics.IsWheelTouchingGround
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartPhysics__IsWheelTouchingGround(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1d0);
}



// ============================================================
// RVA: 0x15d4bc8 | Atlas.Gameplay.Kart.KartPhysics.IsDriftStartLeftSide
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysics__IsDriftStartLeftSide(long param_1)

{
  return *(float *)(param_1 + 0x200) < 0.0;
}



// ============================================================
// RVA: 0x15d4bd8 | Atlas.Gameplay.Kart.KartPhysics.IsGliding
// ============================================================

undefined1 Atlas_Gameplay_Kart_KartPhysics__IsGliding(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1d3);
}



// ============================================================
// RVA: 0x15d4be0 | Atlas.Gameplay.Kart.KartPhysics.IsFlying
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysics__IsFlying(long param_1)

{
  if (*(char *)(param_1 + 0x1d1) != '\0') {
    return *(char *)(param_1 + 0x33e) == '\0';
  }
  return false;
}



// ============================================================
// RVA: 0x15d4c00 | Atlas.Gameplay.Kart.KartPhysics.OnBoostEnter
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__OnBoostEnter(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(lVar1 + 0xac);
    *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)(lVar1 + 0xa4);
    *(undefined1 *)(param_1 + 0x332) = 1;
    return;
  }
  lVar1 = func_0x00f78af4();
  *(undefined1 *)(lVar1 + 0x1d3) = 1;
  *(undefined1 *)(lVar1 + 0x338) = 1;
  return;
}



// ============================================================
// RVA: 0x15d4c34 | Atlas.Gameplay.Kart.KartPhysics.OnGlideEnter
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__OnGlideEnter(long param_1)

{
  *(undefined1 *)(param_1 + 0x1d3) = 1;
  *(undefined1 *)(param_1 + 0x338) = 1;
  return;
}



// ============================================================
// RVA: 0x15d4c44 | Atlas.Gameplay.Kart.KartPhysics.OnHopBoostTriggerEnter
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__OnHopBoostTriggerEnter(long param_1)

{
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  return;
}



// ============================================================
// RVA: 0x15d4c54 | Atlas.Gameplay.Kart.KartPhysics.OnHopGravityTriggerEnter
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__OnHopGravityTriggerEnter(long param_1)

{
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
  return;
}



// ============================================================
// RVA: 0x15d4c64 | Atlas.Gameplay.Kart.KartPhysics.OnHopBoostTriggerExit
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__OnHopBoostTriggerExit(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x114) + -1;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x114) = iVar1;
  return;
}



// ============================================================
// RVA: 0x15d4c7c | Atlas.Gameplay.Kart.KartPhysics.OnHopGravityTriggerExit
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__OnHopGravityTriggerExit(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x218) + -1;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x218) = iVar1;
  return;
}



// ============================================================
// RVA: 0x15d4c94 | Atlas.Gameplay.Kart.KartPhysics.CollisionStopGliding
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartPhysics__CollisionStopGliding
               (float param_1,undefined1 param_2 [16],float param_3,long param_4)

{
  if ((((1.0 <= param_1) && (param_3 <= _UNK_033f86cc)) && (1 < *(int *)(param_4 + 0x1e0))) &&
     (*(char *)(param_4 + 0x1d3) != '\0')) {
    *(undefined4 *)(param_4 + 0x1e0) = 0;
    *(undefined1 *)(param_4 + 0x1d3) = 0;
    *(undefined1 *)(param_4 + 0x339) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x15d4cd8 | Atlas.Gameplay.Kart.KartPhysics.StopGliding
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics__StopGliding(long param_1)

{
  if (*(char *)(param_1 + 0x1d3) != '\0') {
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    *(undefined1 *)(param_1 + 0x1d3) = 0;
    *(undefined1 *)(param_1 + 0x339) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x15d4cf4 | Atlas.Gameplay.Kart.KartPhysics.Reset
// ============================================================

ulong Atlas_Gameplay_Kart_KartPhysics__Reset
                (undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,ulong param_8)

{
  undefined4 uVar1;
  undefined1 **ppuVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x1;
  long extraout_x1_00;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar6;
  undefined *puVar7;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uStack0000000000000000;
  float fStack0000000000000004;
  undefined4 in_stack_00000008;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_8 + 0x58) != 0) {
    if (*(char *)(*(long *)(param_8 + 0x58) + 0x44) == '\0') {
      return param_8;
    }
    *(undefined1 *)(param_8 + 0x428) = 1;
    *(undefined4 *)(param_8 + 0x400) = param_1;
    *(float *)(param_8 + 0x404) = param_2;
    *(undefined4 *)(param_8 + 0x408) = param_3;
    *(undefined4 *)(param_8 + 0x40c) = param_4;
    *(undefined4 *)(param_8 + 0x410) = param_5;
    *(undefined4 *)(param_8 + 0x414) = param_6;
    *(undefined4 *)(param_8 + 0x418) = param_7;
    *(undefined4 *)(param_8 + 0x41c) = uStack0000000000000000;
    *(float *)(param_8 + 0x420) = fStack0000000000000004;
    *(undefined4 *)(param_8 + 0x424) = in_stack_00000008;
    unaff_x19 = param_8;
    param_2 = fStack0000000000000004;
    if (*(long *)(param_8 + 0x70) != 0) {
      /*UnityEngine.Rigidbody$$set_velocity*/ func_0x032a21a4(*(long *)(param_8 + 0x70),0);
      unaff_x20 = *(long *)(param_8 + 0x70);
      /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      param_2 = fStack0000000000000004;
      if (unaff_x20 != 0) {
        /*UnityEngine.Rigidbody$$set_angularVelocity*/ func_0x032a22fc(unaff_x20,0);
        param_2 = fStack0000000000000004;
        if (*(long *)(param_8 + 0x70) != 0) {
          param_2 = *(float *)(param_8 + 0x404);
          /*UnityEngine.Rigidbody$$set_position*/ func_0x032a2ef8(*(undefined4 *)(param_8 + 0x400),param_2,*(undefined4 *)(param_8 + 0x408),
                          *(long *)(param_8 + 0x70),0);
          if (*(long *)(param_8 + 0x70) != 0) {
            param_2 = *(float *)(param_8 + 0x410);
            /*UnityEngine.Rigidbody$$set_rotation*/ func_0x032a304c(*(undefined4 *)(param_8 + 0x40c),param_2,
                            *(undefined4 *)(param_8 + 0x414),*(undefined4 *)(param_8 + 0x418),
                            *(long *)(param_8 + 0x70),0);
            if ((*(long *)(param_8 + 0x70) != 0) &&
               (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_8 + 0x70),0), lVar3 != 0)) {
              param_2 = *(float *)(param_8 + 0x404);
              /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(*(undefined4 *)(param_8 + 0x400),param_2,
                              *(undefined4 *)(param_8 + 0x408),lVar3,0);
              if ((*(long *)(param_8 + 0x70) != 0) &&
                 (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_8 + 0x70),0), lVar3 != 0)) {
                /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(*(undefined4 *)(param_8 + 0x40c),*(undefined4 *)(param_8 + 0x410),
                                *(undefined4 *)(param_8 + 0x414),*(undefined4 *)(param_8 + 0x418),
                                lVar3,0);
                uVar4 = /*Atlas.Gameplay.Kart.KartPhysicsBodyState$$ResetStates*/ func_0x015d52b4(param_8 + 0x194,0);
                *(undefined4 *)(param_8 + 0xd0) = 0;
                *(undefined4 *)(param_8 + 0xec) = 0;
                *(undefined4 *)(param_8 + 0xdc) = 0;
                *(undefined4 *)(param_8 + 0x10c) = 0;
                *(undefined1 *)(param_8 + 0x118) = 0;
                *(undefined4 *)(param_8 + 0x1f0) = 0;
                return uVar4;
              }
            }
          }
        }
      }
    }
  }
  lVar3 = func_0x00f78af4();
  ppuVar6 = &puStack_30;
  puStack_28 = &Atlas_Gameplay_Kart_KartPhysics__SetPhysicsLayerNormal;
  lVar5 = *(long *)(lVar3 + 0x50);
  puStack_30 = &stack0xfffffffffffffff0;
  if (lVar5 == 0) {
    lVar3 = func_0x00f78af4();
    lVar5 = *(long *)(lVar3 + 0x50);
    if (lVar5 == 0) {
      lVar3 = func_0x00f78af4();
      lVar3 = *(long *)(lVar3 + 0x50);
      if (lVar3 != 0) {
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*pcRam0000000003ebf4c0)(lVar3,0);
        return uVar4;
      }
      lVar3 = func_0x00f78af4();
      if (lVar3 == 0) {
        lVar3 = func_0x00f78af4();
        if (ABS(extraout_s0_00) <= *(float *)(lVar3 + 0xa8)) {
          return 0;
        }
        return (ulong)(*(float *)(lVar3 + 0x10) * param_2 < *(float *)(extraout_x1_00 + 4));
      }
      if (ABS(extraout_s0) <= *(float *)(lVar3 + 0x70)) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)(*(float *)(lVar3 + 0x3c) * param_2 < *(float *)(extraout_x1 + 4));
      }
      return uVar4;
    }
    uVar1 = *(undefined4 *)(lVar3 + 0x5c4);
    ppuVar2 = &puStack_30;
    puVar7 = &Atlas_Gameplay_Kart_KartPhysics__SetPhysicsLayerGhost;
  }
  else {
    uVar1 = *(undefined4 *)(lVar3 + 0x5c0);
    ppuVar2 = (undefined1 **)&stack0xffffffffffffffe0;
    puVar7 = &Atlas_Gameplay_Kart_KartPhysics__SetPhysicsLayerNormal;
    ppuVar6 = (undefined1 **)&stack0xfffffffffffffff0;
  }
  *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(ulong *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar6;
  *(undefined **)((long)ppuVar2 + -8) = puVar7;
  if (pcRam0000000003ebf4a8 == (code *)0x0) {
    pcRam0000000003ebf4a8 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::set_layer(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ee88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*pcRam0000000003ebf4a8)(lVar5,uVar1);
  return uVar4;
}



// ============================================================
// RVA: 0x15d4e48 | Atlas.Gameplay.Kart.KartPhysics.SetPhysicsLayerNormal
// ============================================================

ulong Atlas_Gameplay_Kart_KartPhysics__SetPhysicsLayerNormal
                (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar5;
  undefined *unaff_x30;
  float extraout_s0;
  float extraout_s0_00;
  
  puVar5 = &stack0xfffffffffffffff0;
  lVar2 = *(long *)(param_3 + 0x50);
  if (lVar2 == 0) {
    lVar3 = func_0x00f78af4();
    lVar2 = *(long *)(lVar3 + 0x50);
    if (lVar2 == 0) {
      lVar2 = func_0x00f78af4();
      lVar2 = *(long *)(lVar2 + 0x50);
      if (lVar2 != 0) {
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*pcRam0000000003ebf4c0)(lVar2,0);
        return uVar4;
      }
      lVar2 = func_0x00f78af4();
      if (lVar2 != 0) {
        if (ABS(extraout_s0) <= *(float *)(lVar2 + 0x70)) {
          uVar4 = 0;
        }
        else {
          uVar4 = (ulong)(*(float *)(lVar2 + 0x3c) * param_2 < *(float *)(extraout_x1 + 4));
        }
        return uVar4;
      }
      lVar2 = func_0x00f78af4();
      if (*(float *)(lVar2 + 0xa8) < ABS(extraout_s0_00)) {
        return (ulong)(*(float *)(lVar2 + 0x10) * param_2 < *(float *)(extraout_x1_00 + 4));
      }
      return 0;
    }
    uVar1 = *(undefined4 *)(lVar3 + 0x5c4);
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x30 = &Atlas_Gameplay_Kart_KartPhysics__SetPhysicsLayerGhost;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 0x5c0);
    puVar5 = unaff_x29;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar5;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebf4a8 == (code *)0x0) {
    pcRam0000000003ebf4a8 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::set_layer(System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ee88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*pcRam0000000003ebf4a8)(lVar2,uVar1);
  return uVar4;
}



// ============================================================
// RVA: 0x15d4e70 | Atlas.Gameplay.Kart.KartPhysics.SetPhysicsLayerGhost
// ============================================================

ulong Atlas_Gameplay_Kart_KartPhysics__SetPhysicsLayerGhost
                (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x1;
  long extraout_x1_00;
  float extraout_s0;
  float extraout_s0_00;
  
  lVar2 = *(long *)(param_3 + 0x50);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_3 + 0x5c4);
    if (pcRam0000000003ebf4a8 == (code *)0x0) {
      pcRam0000000003ebf4a8 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::set_layer(System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ee88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000003ebf4a8)(lVar2,uVar1);
    return uVar3;
  }
  lVar2 = func_0x00f78af4();
  lVar2 = *(long *)(lVar2 + 0x50);
  if (lVar2 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000003ebf4c0)(lVar2,0);
    return uVar3;
  }
  lVar2 = func_0x00f78af4();
  if (lVar2 != 0) {
    if (ABS(extraout_s0) <= *(float *)(lVar2 + 0x70)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)(*(float *)(lVar2 + 0x3c) * param_2 < *(float *)(extraout_x1 + 4));
    }
    return uVar3;
  }
  lVar2 = func_0x00f78af4();
  if (*(float *)(lVar2 + 0xa8) < ABS(extraout_s0_00)) {
    return (ulong)(*(float *)(lVar2 + 0x10) * param_2 < *(float *)(extraout_x1_00 + 4));
  }
  return 0;
}



// ============================================================
// RVA: 0x15d4e98 | Atlas.Gameplay.Kart.KartPhysics.DisableCollisions
// ============================================================

ulong Atlas_Gameplay_Kart_KartPhysics__DisableCollisions
                (undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long extraout_x1;
  long extraout_x1_00;
  float extraout_s0;
  float extraout_s0_00;
  
  lVar1 = *(long *)(param_3 + 0x50);
  if (lVar1 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ebf4c0)(lVar1,0);
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  if (lVar1 != 0) {
    if (ABS(extraout_s0) <= *(float *)(lVar1 + 0x70)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)(*(float *)(lVar1 + 0x3c) * param_2 < *(float *)(extraout_x1 + 4));
    }
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  if (*(float *)(lVar1 + 0xa8) < ABS(extraout_s0_00)) {
    return (ulong)(*(float *)(lVar1 + 0x10) * param_2 < *(float *)(extraout_x1_00 + 4));
  }
  return 0;
}



// ============================================================
// RVA: 0x15d4ebc | Atlas.Gameplay.Kart.KartPhysics.IsDriftingStateRequirementsMet
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysics__IsDriftingStateRequirementsMet
               (float param_1,float param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long extraout_x1;
  float extraout_s0;
  
  if (param_3 != 0) {
    if (ABS(param_1) <= *(float *)(param_3 + 0x70)) {
      bVar1 = false;
    }
    else {
      bVar1 = *(float *)(param_3 + 0x3c) * param_2 < *(float *)(param_4 + 4);
    }
    return bVar1;
  }
  lVar2 = func_0x00f78af4();
  if (*(float *)(lVar2 + 0xa8) < ABS(extraout_s0)) {
    return *(float *)(lVar2 + 0x10) * param_2 < *(float *)(extraout_x1 + 4);
  }
  return false;
}



// ============================================================
// RVA: 0x15d4f00 | Atlas.Gameplay.Kart.KartPhysics.IsDriftingStateRequirementsMet
// ============================================================

bool Atlas_Gameplay_Kart_KartPhysics__IsDriftingStateRequirementsMet
               (float param_1,float param_2,long param_3,long param_4)

{
  if (*(float *)(param_3 + 0xa8) < ABS(param_1)) {
    return *(float *)(param_3 + 0x10) * param_2 < *(float *)(param_4 + 4);
  }
  return false;
}



// ============================================================
// RVA: 0x15d4f30 | Atlas.Gameplay.Kart.KartPhysics..cctor
// ============================================================

void Atlas_Gameplay_Kart_KartPhysics___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5381 & 1) == 0) {
    func_0x00f78a20(0x3d22cc8);
    func_0x00f78a20(0x3d6ef10);
    func_0x00f78a20(0x3d6ef18);
    func_0x00f78a20(0x3d6ef20);
    func_0x00f78a20(0x3d6ef08);
    bRam0000000003eb5381 = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartPhysics.EarlyUpdate()')*/ uRam0000000003d6ef08,1,0,0,0);
  **(undefined8 **)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xb8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartPhysics.FixedUpdate()')*/ uRam0000000003d6ef10,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xb8) + 8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartPhysics.PreFixedUpdate()')*/ uRam0000000003d6ef20,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xb8) + 0x10) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartPhysics.PostFixedUpdate()')*/ uRam0000000003d6ef18,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartPhysics_TypeInfo*/ lRam0000000003d22cc8 + 0xb8) + 0x18) = uVar1;
  return;
}



