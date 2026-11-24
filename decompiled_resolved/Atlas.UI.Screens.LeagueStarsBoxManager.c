// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeagueStarsBoxManager

// ============================================================
// RVA: 0x1481cc8 | Atlas.UI.Screens.LeagueStarsBoxManager.Init
// ============================================================

void Atlas_UI_Screens_LeagueStarsBoxManager__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  if ((bRam0000000003eb4913 & 1) == 0) {
    func_0x00f78a20(0x3d3e098);
    bRam0000000003eb4913 = 1;
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// ============================================================
// RVA: 0x1481d3c | Atlas.UI.Screens.LeagueStarsBoxManager.ShowScreenBase
// ============================================================

/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_UI_Screens_LeagueStarsBoxManager__ShowScreenBase(long param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  dword ***pppdVar6;
  undefined1 *puVar7;
  dword **ppdVar8;
  undefined1 *puVar9;
  dword **ppdVar10;
  dword **ppdVar11;
  dword **ppdVar12;
  bool bVar13;
  int iVar14;
  dword *pdVar17;
  dword *pdVar18;
  undefined8 *puVar19;
  long lVar20;
  uint uVar15;
  int iVar16;
  ulong uVar21;
  dword *pdVar22;
  ulong uVar23;
  long lVar24;
  dword *pdVar25;
  undefined8 uVar26;
  long *plVar27;
  long *extraout_x1;
  long *plVar28;
  undefined8 *puVar29;
  dword *pdVar30;
  long lVar31;
  int *piVar32;
  dword *unaff_x19;
  dword *unaff_x20;
  dword *unaff_x21;
  uint uVar33;
  uint uVar34;
  dword *unaff_x22;
  long lVar35;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar36;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar37;
  undefined8 unaff_x28;
  undefined1 *puVar38;
  dword **ppdVar39;
  undefined *puVar40;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  long alStack_108 [5];
  long lStack_d0;
  ulong uStack_c8;
  dword *pdStack_c0;
  long lStack_b8;
  dword ****ppppdStack_b0;
  dword *apdStack_a8 [3];
  dword ***pppdStack_90;
  undefined *puStack_88;
  dword **ppdStack_80;
  undefined *puStack_78;
  dword *pdStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  dword *pdStack_48;
  
  if ((bRam0000000003eb4914 & 1) == 0) {
    func_0x00f78a20(0x3d3e0a8);
    func_0x00f78a20(0x3d27ea0);
    bRam0000000003eb4914 = 1;
  }
  pdVar18 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.LeagueStarsBoxScreen.TransitionData_TypeInfo*/ uRam0000000003d27ea0);
  /*Atlas.UI.Screens.LeagueStarsBoxScreen.TransitionData$$.ctor*/ func_0x0155ccac(pdVar18,0);
  if (pdVar18 == (dword *)0x0) {
    pdVar30 = (dword *)func_0x00f78af4();
    uStack_50 = pdVar18;
    pdStack_48 = (dword *)param_1;
    if ((bRam0000000003eb4915 & 1) == 0) {
      func_0x00f78a20(0x3d3e090);
      bRam0000000003eb4915 = 1;
    }
    if ((bRam0000000003eb8334 & 1) == 0) {
      func_0x00f78a20(0x3d3b328,uRam0000000003d3e090);
      func_0x00f78a20(0x3d1dbe8);
      bRam0000000003eb8334 = 1;
    }
    uVar26 = func_0x00f78aec(/*System.Collections.Generic.List<ModalData>_TypeInfo*/ uRam0000000003d1dbe8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar26,uRam0000000003d3b328);
    *(undefined8 *)(pdVar30 + 0xe) = uVar26;
    return pdVar30;
  }
  *(long *)(pdVar18 + 4) = param_1;
  puVar19 = puRam0000000003d3e0a8;
  puVar37 = &stack0xffffffffffffffd0;
  puVar9 = &stack0xffffffffffffffd0;
  lVar35 = 0x3eb8000;
  puVar29 = puRam0000000003d3e0a8;
  if ((bRam0000000003eb8328 & 1) == 0) {
    func_0x00f78a20(0x3d72968);
    bRam0000000003eb8328 = 1;
  }
  if (param_1 != 0) {
    puVar29 = *(undefined8 **)(*(long *)(puVar19[3] + 0xc0) + 8);
    (*(code *)*puVar29)(param_1,/*STR('ShowScreen')*/ uRam0000000003d72968);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar20 = *(long *)(*(long *)(param_1 + 0x18) + 0xa8), lVar20 != 0)) {
      puVar29 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      /*Core.Input.InputManager$$SetScreenLayerInputExclusive*/ func_0x0164b04c(lVar20,*(undefined4 *)(param_1 + 0x30),1,0);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar20 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar20 != 0)) {
        pdVar30 = (dword *)(ulong)*(uint *)(param_1 + 0x30);
        uVar26 = *(undefined8 *)(param_1 + 0x28);
        lVar35 = *(long *)(lVar20 + 0x10);
        if (lVar35 != 0) {
          if ((bRam0000000003ebc64a & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64a = 1;
          }
          lStack_d0 = 0x3ebc000;
          lStack_b8 = 0;
          apdStack_a8[2] = (dword *)&UNK_02f87f9c;
          uStack_c8 = uVar26;
          pdStack_c0 = pdVar18;
          ppppdStack_b0 = (dword ****)lVar35;
          apdStack_a8[0] = pdVar30;
          apdStack_a8[1] = (dword *)&stack0xfffffffffffffff0;
          if ((bRam0000000003ebc64e & 1) == 0) {
            func_0x00f78a20(0x3d3ddf0);
            func_0x00f78a20(0x3d3ddf8);
            bRam0000000003ebc64e = 1;
          }
          lVar20 = *(long *)(lVar35 + 0x78);
          if (lVar20 != 0) {
            iVar16 = *(int *)(lVar20 + 0x18);
            if (iVar16 < 1) {
              return (dword *)0x0;
            }
            iVar14 = 1;
            pdVar18 = (dword *)((long)&MACH_HEADER.magic + 1);
            do {
              if (*(uint *)(lVar20 + 0x18) <= iVar14 - 1U) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar20 = *(long *)(*(long *)(lVar20 + 0x10) + (long)(int)(iVar14 - 1U) * 0x20 + 0x20);
              if (lVar20 == 0) break;
              uVar23 = /*System.String$$Equals*/ func_0x029caa48(lVar20,uVar26,5,0);
              if ((uVar23 & 1) != 0) {
                return pdVar18;
              }
              pdVar18 = (dword *)(ulong)(iVar14 < iVar16);
              if (iVar16 == iVar14) {
                return pdVar18;
              }
              lVar20 = *(long *)(lVar35 + 0x78);
              iVar14 = iVar14 + 1;
            } while (lVar20 != 0);
          }
          func_0x00f78af4();
          return (dword *)0x0;
        }
        auVar41 = func_0x00f78af4();
        pdVar17 = auVar41._8_8_;
        puVar38 = &stack0xffffffffffffffe0;
        lVar35 = *(long *)(auVar41._0_8_ + 0x10);
        if (lVar35 != 0) {
          pdVar30 = (dword *)0x0;
          if ((bRam0000000003ebc64b & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64b = 1;
          }
          lVar20 = *(long *)(lVar35 + 0x70);
          if (lVar20 != 0) {
            lVar24 = lVar20;
            if (*(uint *)(lVar20 + 0x18) <= auVar41._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              lVar24 = *(long *)(lVar35 + 0x70);
            }
            if (lVar24 != 0) {
              lVar20 = *(long *)(lVar20 + 0x10) + (long)(int)auVar41._8_4_ * 0x28;
              puStack_78 = *(undefined **)(lVar20 + 0x28);
              ppdStack_80 = *(dword ***)(lVar20 + 0x20);
              puStack_88 = (undefined *)CONCAT26(puStack_88._6_2_,*(undefined6 *)(lVar20 + 0x42));
              uStack_50 = (dword *)CONCAT26(*(undefined2 *)(lVar20 + 0x46),
                                            CONCAT42(*(undefined4 *)(lVar20 + 0x42),1));
              pdStack_70 = (dword *)ppdStack_80;
              uStack_68 = (dword *)puStack_78;
              /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar24,pdVar17,&pdStack_70,uRam0000000003d3ddd0);
              pdVar18 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar35,pdVar17);
              return pdVar18;
            }
          }
          auVar41 = func_0x00f78af4();
          pdVar25 = auVar41._8_8_;
          ppdVar8 = &pdStack_c0;
          apdStack_a8[2] = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
          ppdVar10 = apdStack_a8 + 1;
          lStack_b8 = lVar20;
          ppppdStack_b0 = (dword ****)lVar35;
          apdStack_a8[0] = pdVar17;
          apdStack_a8[1] = (dword *)&stack0xffffffffffffffe0;
          if ((bRam0000000003ebc64c & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64c = 1;
          }
          lVar35 = *(long *)(auVar41._0_8_ + 0x70);
          if (lVar35 != 0) {
            if (*(uint *)(lVar35 + 0x18) <= auVar41._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar35 = *(long *)(*(long *)(lVar35 + 0x10) + (long)(int)auVar41._8_4_ * 0x28 + 0x28);
            if (lVar35 == 0) {
              pdVar18 = (dword *)0x0;
            }
            else {
              pdVar18 = *(dword **)(lVar35 + 0x40);
            }
            return pdVar18;
          }
          puVar40 = &Core_UI2_UIScreen__ForceExit;
          unaff_x19 = (dword *)func_0x00f78af4();
          pdVar17 = (dword *)0x0;
          unaff_x21 = (dword *)0x3ebc000;
          goto code_r0x02f882d8;
        }
        auVar41 = func_0x00f78af4();
        pdVar25 = auVar41._8_8_;
        pdVar17 = *(dword **)(auVar41._0_8_ + 0x10);
        if (pdVar17 != (dword *)0x0) {
          pdVar30 = (dword *)0x0;
          puVar7 = &stack0xffffffffffffffe0;
          puVar40 = &Atlas_UI_AtlasUIManager__ClearLayer;
          goto code_r0x02f877a8;
        }
        auVar41 = func_0x00f78af4();
        lVar35 = *(long *)(auVar41._0_8_ + 0x10);
        auVar41._8_8_ = auVar41._8_8_;
        auVar41._0_8_ = lVar35;
        if (lVar35 != 0) {
          puVar40 = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
          pdVar25 = pdVar30;
          while( true ) {
            pdVar17 = auVar41._0_8_;
            puVar7 = puVar9 + -0x30;
            *(dword **)(puVar9 + -0x30) = unaff_x22;
            *(dword **)(puVar9 + -0x28) = unaff_x21;
            *(dword **)(puVar9 + -0x20) = unaff_x20;
            *(dword **)(puVar9 + -0x18) = unaff_x19;
            *(undefined1 **)(puVar9 + -0x10) = puVar37;
            *(undefined **)(puVar9 + -8) = puVar40;
            puVar38 = puVar9 + -0x10;
            puVar40 = &UNK_02f883d8;
            pdVar30 = pdVar25;
            unaff_x19 = pdVar18;
            unaff_x20 = pdVar25;
            unaff_x21 = auVar41._8_8_;
            unaff_x22 = pdVar17;
code_r0x02f877a8:
            ppdVar8 = (dword **)(puVar7 + -0x60);
            *(dword **)(puVar7 + -0x30) = unaff_x22;
            *(dword **)(puVar7 + -0x28) = unaff_x21;
            *(dword **)(puVar7 + -0x20) = unaff_x20;
            *(dword **)(puVar7 + -0x18) = unaff_x19;
            *(undefined1 **)(puVar7 + -0x10) = puVar38;
            *(undefined **)(puVar7 + -8) = puVar40;
            ppdVar10 = (dword **)(puVar7 + -0x10);
            pdVar22 = pdVar17;
            if ((bRam0000000003ebc64d & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              pdVar22 = (dword *)func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64d = 1;
            }
            uVar15 = (uint)pdVar25;
            if (((int)uVar15 < 0) || ((int)pdVar17[0x14] <= (int)uVar15)) {
              return pdVar22;
            }
            lVar35 = *(long *)(pdVar17 + 0x1c);
            if (lVar35 == 0) break;
            if (*(uint *)(lVar35 + 0x18) <= uVar15) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar35 = *(long *)(lVar35 + 0x10) + ((ulong)pdVar25 & 0xffffffff) * 0x28;
            unaff_x22 = *(dword **)(lVar35 + 0x20);
            unaff_x19 = *(dword **)(lVar35 + 0x28);
            *(undefined4 *)(puVar7 + -0x60) = *(undefined4 *)(lVar35 + 0x42);
            *(undefined2 *)(puVar7 + -0x5c) = *(undefined2 *)(lVar35 + 0x46);
            if (unaff_x19 == (dword *)0x0) {
              lVar35 = *(long *)(pdVar17 + 0x1c);
              if (lVar35 != 0) {
                *(dword **)(puVar7 + -0x58) = unaff_x22;
                *(undefined8 *)(puVar7 + -0x50) = 0;
                *(undefined8 *)(puVar7 + -0x48) = 0;
                *(undefined8 *)(puVar7 + -0x40) = 0;
                *(undefined2 *)(puVar7 + -0x38) = 0;
                *(undefined4 *)(puVar7 + -0x36) = *(undefined4 *)(puVar7 + -0x60);
                *(undefined2 *)(puVar7 + -0x32) = *(undefined2 *)(puVar7 + -0x5c);
                pdVar18 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar35,pdVar25,puVar7 + -0x58,
                                                   uRam0000000003d3ddd0);
                return pdVar18;
              }
              break;
            }
            puVar40 = &UNK_02f87848;
            unaff_x21 = unaff_x19;
code_r0x02f882d8:
            *(dword **)((long)ppdVar8 + -0x20) = pdVar17;
            *(dword **)((long)ppdVar8 + -0x18) = pdVar25;
            *(dword ***)((long)ppdVar8 + -0x10) = ppdVar10;
            *(undefined **)((long)ppdVar8 + -8) = puVar40;
            (**(code **)(*(long *)unaff_x19 + 0x218))
                      (unaff_x19,*(undefined8 *)(*(long *)unaff_x19 + 0x220));
            if (*(long *)(unaff_x19 + 10) != 0) {
              /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(unaff_x19 + 10),0);
              unaff_x19[0x13] = 4;
              /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(unaff_x19,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar18 = (dword *)(**(code **)(*(long *)unaff_x19 + 0x228))
                                           (unaff_x19,*(undefined8 *)(*(long *)unaff_x19 + 0x230));
              return pdVar18;
            }
            func_0x00f78af4();
            puVar9 = (undefined1 *)((long)ppdVar8 + -0x40);
            *(dword **)((long)ppdVar8 + -0x40) = pdVar17;
            *(dword **)((long)ppdVar8 + -0x38) = unaff_x19;
            *(undefined1 **)((long)ppdVar8 + -0x30) = (undefined1 *)((long)ppdVar8 + -0x10);
            *(undefined **)((long)ppdVar8 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
            puVar37 = (undefined1 *)((long)ppdVar8 + -0x30);
            if (extraout_x1 != (long *)0x0) {
              lVar35 = extraout_x1[5];
              /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
              uVar26 = (**(code **)(*extraout_x1 + 0x238))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
              extraout_x1[5] = 0;
              extraout_x1[6] = 0;
              extraout_x1[9] = _UNK_037235c0;
              extraout_x1[7] = 0;
              extraout_x1[8] = 0;
              /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar26,lVar35);
              pdVar18 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
              extraout_x1[0xb] = 0;
              return pdVar18;
            }
            puVar40 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
            auVar41 = func_0x00f78af4();
            pdVar25 = pdVar30;
            unaff_x20 = pdVar17;
          }
          lVar35 = func_0x00f78af4();
          *(undefined8 *)(puVar7 + -0xa0) = unaff_d9;
          *(undefined8 *)(puVar7 + -0x98) = unaff_d8;
          *(dword **)(puVar7 + -0x90) = unaff_x22;
          *(undefined8 *)(puVar7 + -0x88) = 0;
          *(dword **)(puVar7 + -0x80) = pdVar17;
          *(dword **)(puVar7 + -0x78) = pdVar25;
          *(dword ***)(puVar7 + -0x70) = ppdVar10;
          *(undefined **)(puVar7 + -0x68) = &Core_UI2_UIManager__Update;
          if ((bRam0000000003ebc647 & 1) == 0) {
            func_0x00f78a20(0x3d255c0);
            bRam0000000003ebc647 = 1;
          }
          if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar26 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar26,0);
          if (0 < *(int *)(lVar35 + 0x50)) {
            iVar16 = 0;
            do {
              /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar35,iVar16);
              /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar35,iVar16);
              iVar16 = iVar16 + 1;
            } while (iVar16 < *(int *)(lVar35 + 0x50));
          }
          /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar35);
          *(undefined8 *)(puVar7 + -0x80) = *(undefined8 *)(puVar7 + -0x80);
          *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0x78);
          *(undefined8 *)(puVar7 + -0x70) = *(undefined8 *)(puVar7 + -0x70);
          *(undefined8 *)(puVar7 + -0x68) = *(undefined8 *)(puVar7 + -0x68);
          if (pcRam0000000003ec05a0 == (code *)0x0) {
            pcRam0000000003ec05a0 =
                 (code *)func_0x00f789d4(
                                        "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar18 = (dword *)(*pcRam0000000003ec05a0)(uVar26);
          return pdVar18;
        }
        auVar41 = func_0x00f78af4();
        pdStack_48 = (dword *)&Atlas_UI_AtlasUIManager__IsLayerReady;
        lVar35 = *(long *)(auVar41._0_8_ + 0x10);
        if (lVar35 == 0) {
          uStack_50 = (dword *)&stack0xffffffffffffffc0;
          auVar41 = func_0x00f78af4();
          ppdVar10 = (dword **)&stack0xffffffffffffffa0;
          lVar35 = *(long *)(auVar41._0_8_ + 0x10);
          auVar43._8_8_ = auVar41._8_8_;
          auVar43._0_8_ = lVar35;
          if (lVar35 != 0) {
            pdVar18 = (dword *)0x0;
            ppdVar10 = (dword **)&uStack_50;
            pdVar30 = (dword *)&Atlas_UI_AtlasUIManager__GetLayerState;
            goto code_r0x02f884dc;
          }
          auVar41 = func_0x00f78af4();
          ppdVar39 = &pdStack_70;
          uStack_68 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
          lVar35 = *(long *)(auVar41._0_8_ + 0x10);
          auVar44._8_8_ = auVar41._8_8_;
          auVar44._0_8_ = lVar35;
          if (lVar35 == 0) {
            pdStack_70 = (dword *)&stack0xffffffffffffffa0;
            auVar41 = func_0x00f78af4();
            pppdStack_90 = &ppdStack_80;
            puStack_78 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
            lVar35 = *(long *)(auVar41._0_8_ + 0x10);
            auVar45._8_8_ = auVar41._8_8_;
            auVar45._0_8_ = lVar35;
            if (lVar35 == 0) {
              ppdStack_80 = &pdStack_70;
              pdVar18 = (dword *)func_0x00f78af4();
              puStack_88 = &Atlas_UI_AtlasUIManager___ctor;
              pppdVar6 = &ppdStack_80;
              if ((bRam0000000003eb4871 & 1) == 0) {
                func_0x00f78a20(0x3d2fb80);
                func_0x00f78a20(0x3d1c478);
                bRam0000000003eb4871 = 1;
                pppdVar6 = pppdStack_90;
              }
              pppdStack_90 = pppdVar6;
              uVar26 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
              /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar26,uRam0000000003d2fb80);
              *(undefined8 *)(pdVar18 + 0xc) = uVar26;
              return pdVar18;
            }
            ppdVar12 = &pdStack_70;
            pdVar17 = (dword *)&Atlas_UI_AtlasUIManager__SetScreenVisible;
            ppdStack_80 = &pdStack_70;
            goto code_r0x02f88674;
          }
          ppdVar11 = (dword **)&stack0xffffffffffffffa0;
          puVar40 = &Atlas_UI_AtlasUIManager__EnableInput;
          pdVar18 = pdVar30;
          pdVar30 = unaff_x21;
          pdStack_70 = (dword *)&stack0xffffffffffffffa0;
        }
        else {
          pdVar18 = (dword *)0x0;
          ppdVar10 = &pdStack_70;
          pdStack_48 = (dword *)&Atlas_UI_AtlasUIManager__IsLayerReady;
          pdStack_70 = unaff_x22;
          uStack_68 = unaff_x21;
          uStack_50 = (dword *)&stack0xffffffffffffffc0;
          if ((bRam0000000003ebc64f & 1) == 0) {
            uStack_50 = (dword *)&stack0xffffffffffffffc0;
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64f = 1;
          }
          uVar15 = auVar41._8_4_;
          if (((int)uVar15 < 0) || (*(int *)(lVar35 + 0x50) <= (int)uVar15)) {
            return (dword *)0x0;
          }
          lVar35 = *(long *)(lVar35 + 0x70);
          if (lVar35 != 0) {
            if (*(uint *)(lVar35 + 0x18) <= uVar15) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar20 = *(long *)(lVar35 + 0x10) + ((ulong)auVar41._8_8_ & 0xffffffff) * 0x28;
            lVar35 = *(long *)(lVar20 + 0x28);
            cVar2 = *(char *)(lVar20 + 0x40);
            iVar16 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar20 + 0x30),0);
            if (iVar16 == 0 || cVar2 != '\0') {
              return (dword *)0x0;
            }
            if ((lVar35 != 0) && (*(int *)(lVar35 + 0x4c) != 2)) {
              return (dword *)0x0;
            }
            return (dword *)((long)&MACH_HEADER.magic + 1);
          }
          pdVar30 = (dword *)&Core_UI2_UIManager__GetLayerState;
          auVar43 = func_0x00f78af4();
          unaff_x20 = (dword *)0x0;
          unaff_x19 = auVar41._8_8_;
          unaff_x21 = (dword *)0x3ebc000;
code_r0x02f884dc:
          ppdVar11 = ppdVar10 + -6;
          ppdVar10[-6] = unaff_x22;
          ppdVar10[-5] = unaff_x21;
          ppdVar10[-4] = unaff_x20;
          ppdVar10[-3] = unaff_x19;
          ppdVar10[-2] = (dword *)&uStack_50;
          ppdVar10[-1] = pdVar30;
          ppdVar10 = ppdVar10 + -2;
          if ((bRam0000000003ebc650 & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc650 = 1;
          }
          lVar35 = *(long *)(auVar43._0_8_ + 0x70);
          if (lVar35 != 0) {
            if (*(uint *)(lVar35 + 0x18) <= auVar43._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar35 = *(long *)(*(long *)(lVar35 + 0x10) + (long)(int)auVar43._8_4_ * 0x28 + 0x28);
            if (lVar35 == 0) {
              pdVar18 = &MACH_HEADER.cputype;
            }
            else {
              pdVar18 = (dword *)(ulong)*(uint *)(lVar35 + 0x4c);
            }
            return pdVar18;
          }
          puVar40 = &Core_UI2_UIManager__EnableInput;
          auVar44 = func_0x00f78af4();
          unaff_x20 = (dword *)0x0;
          unaff_x19 = auVar43._8_8_;
          pdVar30 = (dword *)0x3ebc000;
        }
        pdVar25 = auVar44._8_8_;
        unaff_x21 = auVar44._0_8_;
        ppdVar12 = (dword **)((long)ppdVar11 + -0x40);
        *(undefined8 *)((long)ppdVar11 + -0x40) = unaff_x24;
        *(undefined8 *)((long)ppdVar11 + -0x38) = unaff_x23;
        *(dword **)((long)ppdVar11 + -0x30) = unaff_x22;
        *(dword **)((long)ppdVar11 + -0x28) = pdVar30;
        *(dword **)((long)ppdVar11 + -0x20) = unaff_x20;
        *(dword **)((long)ppdVar11 + -0x18) = unaff_x19;
        *(dword ***)((long)ppdVar11 + -0x10) = ppdVar10;
        *(undefined **)((long)ppdVar11 + -8) = puVar40;
        ppdVar39 = (dword **)((long)ppdVar11 + -0x10);
        unaff_x22 = (dword *)0x3ebc000;
        pdVar30 = pdVar18;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(long *)(unaff_x21 + 0x1a) != 0) {
          pdVar30 = (dword *)(ulong)((uint)pdVar18 ^ 1);
          pdVar17 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(unaff_x21 + 0x1a),pdVar25,pdVar30,0);
          lVar35 = *(long *)(unaff_x21 + 0x1c);
          unaff_x22 = (dword *)0x0;
          if (lVar35 != 0) {
            uVar15 = auVar44._8_4_;
            if (*(uint *)(lVar35 + 0x18) <= uVar15) {
              pdVar17 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(lVar35 + 0x10) + (long)(int)uVar15 * 0x28 + 0x28) == 0) ||
               (unaff_x22 = *(dword **)(unaff_x21 + 0xc), unaff_x22 == (dword *)0x0)) {
              return pdVar17;
            }
            lVar35 = *(long *)(unaff_x21 + 0x1c);
            unaff_x21 = (dword *)0x0;
            if (lVar35 != 0) {
              if (*(uint *)(lVar35 + 0x18) <= uVar15) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar28 = *(long **)(*(long *)(lVar35 + 0x10) + (long)(int)uVar15 * 0x28 + 0x28);
              *(undefined8 *)((long)ppdVar11 + -0x60) = unaff_x28;
              *(undefined8 *)((long)ppdVar11 + -0x58) = unaff_x27;
              *(undefined8 *)((long)ppdVar11 + -0x50) = unaff_x26;
              *(undefined8 *)((long)ppdVar11 + -0x48) = unaff_x25;
              *(undefined8 *)((long)ppdVar11 + -0x40) = *(undefined8 *)((long)ppdVar11 + -0x40);
              *(undefined8 *)((long)ppdVar11 + -0x38) = *(undefined8 *)((long)ppdVar11 + -0x38);
              *(undefined8 *)((long)ppdVar11 + -0x30) = *(undefined8 *)((long)ppdVar11 + -0x30);
              *(undefined8 *)((long)ppdVar11 + -0x28) = *(undefined8 *)((long)ppdVar11 + -0x28);
              *(undefined8 *)((long)ppdVar11 + -0x20) = *(undefined8 *)((long)ppdVar11 + -0x20);
              *(undefined8 *)((long)ppdVar11 + -0x18) = *(undefined8 *)((long)ppdVar11 + -0x18);
              *(undefined8 *)((long)ppdVar11 + -0x10) = *(undefined8 *)((long)ppdVar11 + -0x10);
              *(undefined8 *)((long)ppdVar11 + -8) = *(undefined8 *)((long)ppdVar11 + -8);
              *(dword **)((long)ppdVar11 + -0x68) = unaff_x22;
              lVar35 = *(long *)(unaff_x22 + 0x1a);
              if (lVar35 == 0) {
                puVar37 = (undefined1 *)((long)ppdVar11 + -0x68);
                lVar20 = 1;
              }
              else {
                lVar20 = *(long *)(lVar35 + 0x18);
                if (lVar20 == 0) {
                  return unaff_x22;
                }
                puVar37 = (undefined1 *)(lVar35 + 0x20);
              }
              lVar35 = 0;
              do {
                lVar24 = *(long *)(puVar37 + lVar35 * 8);
                pcVar36 = *(code **)(lVar24 + 0x10);
                plVar27 = *(long **)(lVar24 + 0x20);
                lVar24 = *(long *)(lVar24 + 0x28);
                if (*(short *)(lVar24 + 0x48) == -1) {
                  func_0x00f78ad8(lVar24);
                }
                iVar16 = func_0x00f78a4c(lVar24);
                bVar13 = *(char *)(lVar24 + 0x4a) == '\x03';
                if (iVar16 == 0) {
                  if (bVar13) {
                    if (plVar27 == (long *)0x0) {
code_r0x01e71bbc:
                      pdVar30 = (dword *)(*pcVar36)(plVar28,pdVar25,pdVar18,lVar24);
                    }
                    else {
                      if (((*(short *)(lVar24 + 0x48) == -1) ||
                          ((*(byte *)(*plVar27 + 0x115) & 1) != 0)) ||
                         (*(long *)(unaff_x22 + 6) == 0)) goto code_r0x01e71aac;
                      iVar16 = func_0x00f78a44(lVar24);
                      iVar14 = func_0x00f78ec0(lVar24);
                      if (iVar16 == 0) {
                        uVar3 = *(ushort *)(lVar24 + 0x48);
                        if (iVar14 == 0) {
                          lVar24 = *plVar27 + (ulong)uVar3 * 0x10;
                          pdVar30 = (dword *)(**(code **)(lVar24 + 0x138))
                                                       (plVar27,plVar28,pdVar25,pdVar18,
                                                        *(undefined8 *)(lVar24 + 0x140));
                          goto code_r0x01e71bd0;
                        }
                        lVar24 = func_0x00f78a48(lVar24);
                        lVar31 = *plVar27;
                        uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
                        if (uVar23 != 0) {
                          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar32 + -2) == lVar24) {
                              puVar19 = (undefined8 *)
                                        (lVar31 + (long)(int)(*piVar32 + (uint)uVar3) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71d74;
                            }
                            piVar32 = piVar32 + 4;
                            uVar23 = uVar23 - 1;
                          } while (uVar23 != 0);
                        }
                        puVar19 = (undefined8 *)func_0x00fac1f0(plVar27,lVar24,(ulong)uVar3);
code_r0x01e71d74:
                        pcVar36 = (code *)*puVar19;
                        puVar19 = (undefined8 *)puVar19[1];
                      }
                      else {
                        if (iVar14 == 0) {
                          uVar26 = *(undefined8 *)
                                    (*plVar27 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar31 = *plVar27;
                          uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
                          if (uVar23 != 0) {
                            piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar32 + -2) == *(long *)(lVar24 + 0x18)) {
                                lVar31 = lVar31 + (long)(int)(*piVar32 +
                                                             (uint)*(ushort *)(lVar24 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71d4c;
                              }
                              piVar32 = piVar32 + 4;
                              uVar23 = uVar23 - 1;
                            } while (uVar23 != 0);
                          }
                          lVar31 = func_0x00fac1f0(plVar27);
code_r0x01e71d4c:
                          uVar26 = *(undefined8 *)(lVar31 + 8);
                        }
                        puVar19 = (undefined8 *)func_0x00f78acc(uVar26,lVar24);
                        pcVar36 = (code *)*puVar19;
                      }
                      pdVar30 = (dword *)(*pcVar36)(plVar27,plVar28,pdVar25,pdVar18,puVar19);
                    }
                  }
                  else {
                    if ((*(short *)(lVar24 + 0x48) == -1) || (*(long *)(unaff_x22 + 6) == 0))
                    goto code_r0x01e71bbc;
                    iVar16 = func_0x00f78a44(lVar24);
                    iVar14 = func_0x00f78ec0(lVar24);
                    if (iVar16 == 0) {
                      uVar3 = *(ushort *)(lVar24 + 0x48);
                      if (iVar14 == 0) {
                        lVar24 = *plVar28 + (ulong)uVar3 * 0x10;
                        pdVar30 = (dword *)(**(code **)(lVar24 + 0x138))
                                                     (plVar28,pdVar25,pdVar18,
                                                      *(undefined8 *)(lVar24 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar24 = func_0x00f78a48(lVar24);
                      lVar31 = *plVar28;
                      uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
                      if (uVar23 != 0) {
                        piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar32 + -2) == lVar24) {
                            puVar19 = (undefined8 *)
                                      (lVar31 + (long)(int)(*piVar32 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar32 = piVar32 + 4;
                          uVar23 = uVar23 - 1;
                        } while (uVar23 != 0);
                      }
                      puVar19 = (undefined8 *)func_0x00fac1f0(plVar28,lVar24,(ulong)uVar3);
code_r0x01e71d00:
                      pcVar36 = (code *)*puVar19;
                      puVar19 = (undefined8 *)puVar19[1];
                    }
                    else {
                      if (iVar14 == 0) {
                        uVar26 = *(undefined8 *)
                                  (*plVar28 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar31 = *plVar28;
                        uVar23 = (ulong)*(ushort *)(lVar31 + 0x12a);
                        if (uVar23 != 0) {
                          piVar32 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar32 + -2) == *(long *)(lVar24 + 0x18)) {
                              lVar31 = lVar31 + (long)(int)(*piVar32 +
                                                           (uint)*(ushort *)(lVar24 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar32 = piVar32 + 4;
                            uVar23 = uVar23 - 1;
                          } while (uVar23 != 0);
                        }
                        lVar31 = func_0x00fac1f0(plVar28);
code_r0x01e71cd8:
                        uVar26 = *(undefined8 *)(lVar31 + 8);
                      }
                      puVar19 = (undefined8 *)func_0x00f78acc(uVar26,lVar24);
                      pcVar36 = (code *)*puVar19;
                    }
                    pdVar30 = (dword *)(*pcVar36)(plVar28,pdVar25,pdVar18,puVar19);
                  }
                }
                else {
                  if (bVar13) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  pdVar30 = (dword *)(*pcVar36)(plVar27,plVar28,pdVar25,pdVar18,lVar24);
                }
code_r0x01e71bd0:
                lVar35 = lVar35 + 1;
                if (lVar35 == lVar20) {
                  return pdVar30;
                }
              } while( true );
            }
          }
        }
        pdVar17 = (dword *)&Core_UI2_UIManager__SetScreenVisible;
        auVar45 = func_0x00f78af4();
        unaff_x19 = pdVar18;
        unaff_x20 = pdVar25;
code_r0x02f88674:
        pdVar25 = auVar45._0_8_;
        ppdVar12[-6] = unaff_x22;
        ppdVar12[-5] = unaff_x21;
        ppdVar12[-4] = unaff_x20;
        ppdVar12[-3] = unaff_x19;
        ppdVar12[-2] = (dword *)ppdVar39;
        ppdVar12[-1] = pdVar17;
        pdVar18 = pdVar25;
        if ((bRam0000000003ebc652 & 1) == 0) {
          pdVar18 = (dword *)func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc652 = 1;
        }
        lVar35 = *(long *)(pdVar25 + 0x1c);
        if (lVar35 != 0) {
          uVar15 = auVar45._8_4_;
          if (*(uint *)(lVar35 + 0x18) <= uVar15) {
            pdVar18 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar35 + 0x10) + (long)(int)uVar15 * 0x28 + 0x28) == 0) {
            return pdVar18;
          }
          lVar35 = *(long *)(pdVar25 + 0x1c);
          if (lVar35 != 0) {
            if (*(uint *)(lVar35 + 0x18) <= uVar15) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar35 = *(long *)(*(long *)(lVar35 + 0x10) + (long)(int)uVar15 * 0x28 + 0x28);
            if ((lVar35 != 0) && (plVar28 = *(long **)(lVar35 + 0x28), plVar28 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar18 = (dword *)(**(code **)(*plVar28 + 0x178))
                                           (plVar28,pdVar30,*(undefined8 *)(*plVar28 + 0x180));
              return pdVar18;
            }
          }
        }
        auVar41 = func_0x00f78af4();
        uVar26 = auVar41._0_8_;
        ppdVar12[-10] = auVar45._8_8_;
        ppdVar12[-9] = pdVar30;
        ppdVar12[-8] = (dword *)(ppdVar12 + -2);
        ppdVar12[-7] = (dword *)&Core_UI2_UIManager__RequestScreenAssetsAndPin;
        ppdVar12[-0xd] = (dword *)0x0;
        ppdVar12[-0xe] = (dword *)0x0;
        ppdVar12[-0xb] = (dword *)0x0;
        ppdVar12[-0xc] = (dword *)0x0;
        pdVar18 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar26,auVar41._8_8_,ppdVar12 + -0xe);
        if ((int)pdVar18 != 0) {
          /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar26,ppdVar12[-0xc],ppdVar12[-0xb]);
          ppdVar12[-0x11] = ppdVar12[-0xd];
          ppdVar12[-0x12] = ppdVar12[-0xe];
          ppdVar12[-0xf] = ppdVar12[-0xb];
          ppdVar12[-0x10] = ppdVar12[-0xc];
          pdVar18 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar26,ppdVar12 + -0x12,1);
        }
        return pdVar18;
      }
    }
  }
  auVar42 = func_0x00f78af4();
  lVar20 = auVar42._8_8_;
  plVar28 = auVar42._0_8_;
  uVar23 = 0x3eb8000;
  uStack_50 = (dword *)param_1;
  pdStack_48 = pdVar18;
  if ((bRam0000000003eb8329 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb8329 = 1;
  }
  uStack_68 = (dword *)(ulong)(uint)uStack_68;
  if (plVar28[7] != 0) {
    uVar15 = *(uint *)(plVar28[7] + 0x18);
    uVar23 = (ulong)uVar15;
    pdVar18 = (dword *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(lVar20 + 0x18) + 0xc0) + 0x30))(plVar28);
    if ((int)uVar15 < 1) {
      if ((int)pdVar18 == 0) {
        return pdVar18;
      }
      lVar24 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar20 + 0x18) + 0xc0) + 0x10))
                         (plVar28);
      if ((lVar24 != 0) && (*(long *)(lVar24 + 0x68) != 0)) {
        pdVar18 = (dword *)/*ModalBehaviour$$get_IsShowing*/ func_0x014969fc(*(long *)(lVar24 + 0x68),0);
        if (((ulong)pdVar18 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar18 = (dword *)(*(code *)**(undefined8 **)
                                         (*(long *)(*(long *)(lVar20 + 0x18) + 0xc0) + 0x50))
                                       (plVar28);
          return pdVar18;
        }
        return pdVar18;
      }
    }
    else {
      if ((int)pdVar18 == 0) {
        return pdVar18;
      }
      pdVar18 = (dword *)(**(code **)(*plVar28 + 0x188))(plVar28,*(undefined8 *)(*plVar28 + 400));
      if ((int)pdVar18 == 0) {
        return pdVar18;
      }
      puVar29 = *(undefined8 **)(*(long *)(*(long *)(lVar20 + 0x18) + 0xc0) + 0x40);
      pdVar18 = (dword *)(*(code *)*puVar29)(plVar28,(long)&uStack_68 + 4);
      if ((int)pdVar18 == 0) {
        return pdVar18;
      }
      uVar23 = plVar28[7];
      if (uVar23 != 0) {
        lVar35 = (long)(int)uStack_68._4_4_;
        uVar21 = uVar23;
        if (uStack_68._4_4_ < *(uint *)(uVar23 + 0x18)) {
code_r0x025dfa50:
          uVar26 = *(undefined8 *)(*(long *)(uVar23 + 0x10) + lVar35 * 8 + 0x20);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(uVar21,uStack_68._4_4_,uRam0000000003d3b350);
          pdVar18 = (dword *)(*(code *)**(undefined8 **)
                                         (*(long *)(*(long *)(lVar20 + 0x18) + 0xc0) + 0x48))
                                       (plVar28,uVar26);
          return pdVar18;
        }
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        uVar21 = plVar28[7];
        if (uVar21 != 0) goto code_r0x025dfa50;
      }
    }
  }
  auVar41 = func_0x00f78af4();
  puStack_78 = &Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___CanShowModal;
  ppdStack_80 = (dword **)&stack0xffffffffffffffc0;
  if (auVar41._0_8_ != 0) {
    uVar15 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar41._8_8_ + 0x18) + 0xc0) + 0x58))
                       ();
    return (dword *)(ulong)(uVar15 ^ 1);
  }
  auVar41 = func_0x00f78af4();
  puStack_88 = &Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___HideCurrentModal;
  pppdStack_90 = &ppdStack_80;
  auVar4 = auVar42;
  if (auVar41._0_8_ != 0) {
    apdStack_a8[1] = (dword *)lVar20;
    apdStack_a8[2] = (dword *)plVar28;
    pppdStack_90 = &ppdStack_80;
    pdVar18 = (dword *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(auVar41._8_8_ + 0x18) + 0xc0) + 0x30))();
    if ((int)pdVar18 == 0) {
      return pdVar18;
    }
    lVar20 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar41._8_8_ + 0x18) + 0xc0) + 0x10))
                       (auVar41._0_8_);
    auVar5._8_8_ = apdStack_a8[1];
    auVar5._0_8_ = apdStack_a8[2];
    auVar4._8_8_ = apdStack_a8[1];
    auVar4._0_8_ = apdStack_a8[2];
    auVar42 = auVar41;
    if ((lVar20 != 0) &&
       (plVar28 = *(long **)(lVar20 + 0x68), auVar4 = auVar5, plVar28 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x025dfb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pdVar18 = (dword *)(**(code **)(*plVar28 + 0x1a8))(plVar28,*(undefined8 *)(*plVar28 + 0x1b0));
      return pdVar18;
    }
  }
  apdStack_a8[1] = auVar4._8_8_;
  apdStack_a8[2] = auVar4._0_8_;
  auVar41 = func_0x00f78af4();
  plVar27 = auVar41._8_8_;
  plVar28 = auVar41._0_8_;
  apdStack_a8[0] =
       (dword *)&Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
  puVar19 = puVar29;
  lStack_d0 = lVar35;
  uStack_c8 = uVar23;
  ppppdStack_b0 = &pppdStack_90;
  if ((bRam0000000003eb832a & 1) == 0) {
    pdStack_c0 = auVar42._8_8_;
    lStack_b8 = auVar42._0_8_;
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    auVar42._8_8_ = pdStack_c0;
    auVar42._0_8_ = lStack_b8;
    bRam0000000003eb832a = 1;
  }
  pdStack_c0 = auVar42._8_8_;
  lStack_b8 = auVar42._0_8_;
  if (plVar27 != (long *)0x0) {
    uVar26 = (**(code **)(*plVar27 + 0x178))(plVar27,*(undefined8 *)(*plVar27 + 0x180));
    puVar19 = (undefined8 *)0x0;
    uVar26 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar26);
    auVar42._8_8_ = pdStack_c0;
    auVar42._0_8_ = lStack_b8;
    if (plVar28 != (long *)0x0) {
      puVar19 = *(undefined8 **)(*(long *)(puVar29[3] + 0xc0) + 8);
      (*(code *)*puVar19)(plVar28,uVar26);
      auVar42._8_8_ = pdStack_c0;
      auVar42._0_8_ = lStack_b8;
      if (plVar28[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar28[7],plVar27,uRam0000000003d3b330);
        auVar42._8_8_ = pdStack_c0;
        auVar42._0_8_ = lStack_b8;
        puVar19 = (undefined8 *)plVar28[8];
        if ((puVar19 == (undefined8 *)0x0) || ((int)plVar27[2] <= *(int *)(puVar19 + 2))) {
code_r0x025dfcb4:
          pdVar18 = (dword *)(*(code *)**(undefined8 **)(*(long *)(puVar29[3] + 0xc0) + 0x30))
                                       (plVar28);
          if (((ulong)pdVar18 & 1) != 0) {
            return pdVar18;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar18 = (dword *)(**(code **)(*plVar28 + 0x1a8))
                                       (plVar28,*(undefined8 *)(*plVar28 + 0x1b0));
          return pdVar18;
        }
        if (plVar28[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar28[7],0,puVar19,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar29[3] + 0xc0) + 0x60))(plVar28);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  pdStack_c0 = auVar42._8_8_;
  lStack_b8 = auVar42._0_8_;
  auVar41 = func_0x00f78af4();
  plVar28 = auVar41._8_8_;
  lVar35 = auVar41._0_8_;
  if ((plVar28 != (long *)0x0) &&
     (uVar26 = (**(code **)(*plVar28 + 0x178))(plVar28,*(undefined8 *)(*plVar28 + 0x180)),
     lVar35 != 0)) {
    uVar15 = (*(code *)**(undefined8 **)(*(long *)(puVar19[3] + 0xc0) + 0x70))(lVar35,uVar26);
    if ((uVar15 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar19[3] + 0xc0) + 0x78))(lVar35,plVar28);
    }
    return (dword *)(ulong)(uVar15 ^ 1);
  }
  auVar41 = func_0x00f78af4();
  iVar16 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar35 = *(long *)(auVar41._0_8_ + 0x38);
  if (lVar35 != 0) {
    iVar16 = *(int *)(lVar35 + 0x18);
    if (iVar16 < 1) goto code_r0x025dfe48;
    uVar15 = 0;
    iVar14 = -0x80000000;
    uVar33 = 0;
    do {
      if (*(uint *)(lVar35 + 0x18) <= uVar15) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar35 = *(long *)(*(long *)(lVar35 + 0x10) + (long)(int)uVar15 * 8 + 0x20);
      if (lVar35 == 0) break;
      iVar1 = *(int *)(lVar35 + 0x10);
      uVar34 = uVar15;
      if (iVar1 <= iVar14) {
        uVar34 = uVar33;
      }
      if (iVar16 - 1U == uVar15) goto code_r0x025dfe4c;
      if (iVar1 <= iVar14) {
        iVar1 = iVar14;
      }
      lVar35 = *(long *)(auVar41._0_8_ + 0x38);
      uVar15 = uVar15 + 1;
      iVar14 = iVar1;
      uVar33 = uVar34;
    } while (lVar35 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar34 = 0;
code_r0x025dfe4c:
  *auVar41._8_8_ = uVar34;
  return (dword *)(ulong)(0 < iVar16);
}



// ============================================================
// RVA: 0x1481dc8 | Atlas.UI.Screens.LeagueStarsBoxManager..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_LeagueStarsBoxManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4915 & 1) == 0) {
    func_0x00f78a20(0x3d3e090);
    bRam0000000003eb4915 = 1;
  }
  if ((bRam0000000003eb8334 & 1) == 0) {
    func_0x00f78a20(0x3d3b328,uRam0000000003d3e090);
    func_0x00f78a20(0x3d1dbe8);
    bRam0000000003eb8334 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<ModalData>_TypeInfo*/ uRam0000000003d1dbe8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3b328);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



