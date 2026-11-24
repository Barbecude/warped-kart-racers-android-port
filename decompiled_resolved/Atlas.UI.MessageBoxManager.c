// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.MessageBoxManager

// ============================================================
// RVA: 0x1494228 | Atlas.UI.MessageBoxManager.ShowScreenBase
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

dword * Atlas_UI_MessageBoxManager__ShowScreenBase(long param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  dword **ppdVar7;
  undefined1 *puVar8;
  dword **ppdVar9;
  undefined1 *puVar10;
  dword **ppdVar11;
  bool bVar12;
  int iVar13;
  dword *pdVar16;
  dword *pdVar17;
  undefined8 *puVar18;
  long lVar19;
  uint uVar14;
  int iVar15;
  ulong uVar20;
  dword *pdVar21;
  ulong uVar22;
  long lVar23;
  dword *pdVar24;
  undefined8 uVar25;
  long *plVar26;
  long *extraout_x1;
  long *plVar27;
  undefined8 *puVar28;
  dword *pdVar29;
  long lVar30;
  int *piVar31;
  dword *unaff_x19;
  dword *unaff_x20;
  dword *unaff_x21;
  uint uVar32;
  uint uVar33;
  dword *unaff_x22;
  long lVar34;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar35;
  undefined8 unaff_x28;
  undefined1 *puVar36;
  dword **ppdVar37;
  undefined *puVar38;
  code *pcVar39;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  long alStack_108 [5];
  long lStack_d0;
  ulong uStack_c8;
  dword *pdStack_c0;
  long lStack_b8;
  dword **ppdStack_b0;
  dword *apdStack_a8 [4];
  code *pcStack_88;
  dword *pdStack_80;
  code *pcStack_78;
  dword *pdStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  dword *pdStack_48;
  
  if ((bRam0000000003eb49b4 & 1) == 0) {
    func_0x00f78a20(0x3d3e100);
    func_0x00f78a20(0x3d280d8);
    bRam0000000003eb49b4 = 1;
  }
  pdVar17 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.MessageBoxScreen.TransitionData_TypeInfo*/ uRam0000000003d280d8);
  Atlas_UI_Screens_MessageBoxScreen_TransitionData___ctor(pdVar17,0);
  if (pdVar17 == (dword *)0x0) {
    pdVar29 = (dword *)func_0x00f78af4();
    uStack_50 = pdVar17;
    pdStack_48 = (dword *)param_1;
    if ((bRam0000000003eb49b5 & 1) == 0) {
      func_0x00f78a20(0x3d3e0c0);
      bRam0000000003eb49b5 = 1;
    }
    if ((bRam0000000003eb8334 & 1) == 0) {
      func_0x00f78a20(0x3d3b328,uRam0000000003d3e0c0);
      func_0x00f78a20(0x3d1dbe8);
      bRam0000000003eb8334 = 1;
    }
    uVar25 = func_0x00f78aec(/*System.Collections.Generic.List<ModalData>_TypeInfo*/ uRam0000000003d1dbe8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar25,uRam0000000003d3b328);
    *(undefined8 *)(pdVar29 + 0xe) = uVar25;
    return pdVar29;
  }
  *(long *)(pdVar17 + 4) = param_1;
  puVar18 = puRam0000000003d3e100;
  puVar35 = &stack0xffffffffffffffd0;
  puVar8 = &stack0xffffffffffffffd0;
  lVar34 = 0x3eb8000;
  puVar28 = puRam0000000003d3e100;
  if ((bRam0000000003eb8328 & 1) == 0) {
    func_0x00f78a20(0x3d72968);
    bRam0000000003eb8328 = 1;
  }
  if (param_1 != 0) {
    puVar28 = *(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 8);
    (*(code *)*puVar28)(param_1,/*STR('ShowScreen')*/ uRam0000000003d72968);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar19 = *(long *)(*(long *)(param_1 + 0x18) + 0xa8), lVar19 != 0)) {
      puVar28 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      /*Core.Input.InputManager$$SetScreenLayerInputExclusive*/ func_0x0164b04c(lVar19,*(undefined4 *)(param_1 + 0x30),1,0);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar19 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar19 != 0)) {
        pdVar29 = (dword *)(ulong)*(uint *)(param_1 + 0x30);
        uVar25 = *(undefined8 *)(param_1 + 0x28);
        lVar34 = *(long *)(lVar19 + 0x10);
        if (lVar34 != 0) {
          if ((bRam0000000003ebc64a & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64a = 1;
          }
          lStack_d0 = 0x3ebc000;
          lStack_b8 = 0;
          apdStack_a8[2] = (dword *)&UNK_02f87f9c;
          uStack_c8 = uVar25;
          pdStack_c0 = pdVar17;
          ppdStack_b0 = (dword **)lVar34;
          apdStack_a8[0] = pdVar29;
          apdStack_a8[1] = (dword *)&stack0xfffffffffffffff0;
          if ((bRam0000000003ebc64e & 1) == 0) {
            func_0x00f78a20(0x3d3ddf0);
            func_0x00f78a20(0x3d3ddf8);
            bRam0000000003ebc64e = 1;
          }
          lVar19 = *(long *)(lVar34 + 0x78);
          if (lVar19 != 0) {
            iVar15 = *(int *)(lVar19 + 0x18);
            if (iVar15 < 1) {
              return (dword *)0x0;
            }
            iVar13 = 1;
            pdVar17 = (dword *)((long)&MACH_HEADER.magic + 1);
            do {
              if (*(uint *)(lVar19 + 0x18) <= iVar13 - 1U) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)(iVar13 - 1U) * 0x20 + 0x20);
              if (lVar19 == 0) break;
              uVar22 = /*System.String$$Equals*/ func_0x029caa48(lVar19,uVar25,5,0);
              if ((uVar22 & 1) != 0) {
                return pdVar17;
              }
              pdVar17 = (dword *)(ulong)(iVar13 < iVar15);
              if (iVar15 == iVar13) {
                return pdVar17;
              }
              lVar19 = *(long *)(lVar34 + 0x78);
              iVar13 = iVar13 + 1;
            } while (lVar19 != 0);
          }
          func_0x00f78af4();
          return (dword *)0x0;
        }
        auVar40 = func_0x00f78af4();
        pdVar16 = auVar40._8_8_;
        puVar36 = &stack0xffffffffffffffe0;
        lVar34 = *(long *)(auVar40._0_8_ + 0x10);
        if (lVar34 != 0) {
          pdVar29 = (dword *)0x0;
          if ((bRam0000000003ebc64b & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64b = 1;
          }
          lVar19 = *(long *)(lVar34 + 0x70);
          if (lVar19 != 0) {
            lVar23 = lVar19;
            if (*(uint *)(lVar19 + 0x18) <= auVar40._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              lVar23 = *(long *)(lVar34 + 0x70);
            }
            if (lVar23 != 0) {
              lVar19 = *(long *)(lVar19 + 0x10) + (long)(int)auVar40._8_4_ * 0x28;
              pcStack_78 = *(code **)(lVar19 + 0x28);
              pdStack_80 = *(dword **)(lVar19 + 0x20);
              pcStack_88 = (code *)CONCAT26(pcStack_88._6_2_,*(undefined6 *)(lVar19 + 0x42));
              uStack_50 = (dword *)CONCAT26(*(undefined2 *)(lVar19 + 0x46),
                                            CONCAT42(*(undefined4 *)(lVar19 + 0x42),1));
              pdStack_70 = pdStack_80;
              uStack_68 = pcStack_78;
              /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar23,pdVar16,&pdStack_70,uRam0000000003d3ddd0);
              pdVar17 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar34,pdVar16);
              return pdVar17;
            }
          }
          auVar40 = func_0x00f78af4();
          pdVar24 = auVar40._8_8_;
          ppdVar7 = &pdStack_c0;
          apdStack_a8[2] = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
          ppdVar37 = apdStack_a8 + 1;
          lStack_b8 = lVar19;
          ppdStack_b0 = (dword **)lVar34;
          apdStack_a8[0] = pdVar16;
          apdStack_a8[1] = (dword *)&stack0xffffffffffffffe0;
          if ((bRam0000000003ebc64c & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64c = 1;
          }
          lVar34 = *(long *)(auVar40._0_8_ + 0x70);
          if (lVar34 != 0) {
            if (*(uint *)(lVar34 + 0x18) <= auVar40._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar34 = *(long *)(*(long *)(lVar34 + 0x10) + (long)(int)auVar40._8_4_ * 0x28 + 0x28);
            if (lVar34 == 0) {
              pdVar17 = (dword *)0x0;
            }
            else {
              pdVar17 = *(dword **)(lVar34 + 0x40);
            }
            return pdVar17;
          }
          puVar38 = &Core_UI2_UIScreen__ForceExit;
          unaff_x19 = (dword *)func_0x00f78af4();
          pdVar16 = (dword *)0x0;
          unaff_x21 = (dword *)0x3ebc000;
          goto code_r0x02f882d8;
        }
        auVar40 = func_0x00f78af4();
        pdVar24 = auVar40._8_8_;
        pdVar16 = *(dword **)(auVar40._0_8_ + 0x10);
        if (pdVar16 != (dword *)0x0) {
          pdVar29 = (dword *)0x0;
          puVar6 = &stack0xffffffffffffffe0;
          pcVar39 = Atlas_UI_AtlasUIManager__ClearLayer;
          goto code_r0x02f877a8;
        }
        auVar40 = func_0x00f78af4();
        lVar34 = *(long *)(auVar40._0_8_ + 0x10);
        auVar40._8_8_ = auVar40._8_8_;
        auVar40._0_8_ = lVar34;
        if (lVar34 != 0) {
          pcVar39 = Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
          pdVar24 = pdVar29;
          while( true ) {
            pdVar16 = auVar40._0_8_;
            puVar6 = puVar8 + -0x30;
            *(dword **)(puVar8 + -0x30) = unaff_x22;
            *(dword **)(puVar8 + -0x28) = unaff_x21;
            *(dword **)(puVar8 + -0x20) = unaff_x20;
            *(dword **)(puVar8 + -0x18) = unaff_x19;
            *(undefined1 **)(puVar8 + -0x10) = puVar35;
            *(code **)(puVar8 + -8) = pcVar39;
            puVar36 = puVar8 + -0x10;
            pcVar39 = (code *)&UNK_02f883d8;
            pdVar29 = pdVar24;
            unaff_x19 = pdVar17;
            unaff_x20 = pdVar24;
            unaff_x21 = auVar40._8_8_;
            unaff_x22 = pdVar16;
code_r0x02f877a8:
            ppdVar7 = (dword **)(puVar6 + -0x60);
            *(dword **)(puVar6 + -0x30) = unaff_x22;
            *(dword **)(puVar6 + -0x28) = unaff_x21;
            *(dword **)(puVar6 + -0x20) = unaff_x20;
            *(dword **)(puVar6 + -0x18) = unaff_x19;
            *(undefined1 **)(puVar6 + -0x10) = puVar36;
            *(code **)(puVar6 + -8) = pcVar39;
            ppdVar37 = (dword **)(puVar6 + -0x10);
            pdVar21 = pdVar16;
            if ((bRam0000000003ebc64d & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              pdVar21 = (dword *)func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64d = 1;
            }
            uVar14 = (uint)pdVar24;
            if (((int)uVar14 < 0) || ((int)pdVar16[0x14] <= (int)uVar14)) {
              return pdVar21;
            }
            lVar34 = *(long *)(pdVar16 + 0x1c);
            if (lVar34 == 0) break;
            if (*(uint *)(lVar34 + 0x18) <= uVar14) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar34 = *(long *)(lVar34 + 0x10) + ((ulong)pdVar24 & 0xffffffff) * 0x28;
            unaff_x22 = *(dword **)(lVar34 + 0x20);
            unaff_x19 = *(dword **)(lVar34 + 0x28);
            *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar34 + 0x42);
            *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar34 + 0x46);
            if (unaff_x19 == (dword *)0x0) {
              lVar34 = *(long *)(pdVar16 + 0x1c);
              if (lVar34 != 0) {
                *(dword **)(puVar6 + -0x58) = unaff_x22;
                *(undefined8 *)(puVar6 + -0x50) = 0;
                *(undefined8 *)(puVar6 + -0x48) = 0;
                *(undefined8 *)(puVar6 + -0x40) = 0;
                *(undefined2 *)(puVar6 + -0x38) = 0;
                *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
                *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
                pdVar17 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar34,pdVar24,puVar6 + -0x58,
                                                   uRam0000000003d3ddd0);
                return pdVar17;
              }
              break;
            }
            puVar38 = &UNK_02f87848;
            unaff_x21 = unaff_x19;
code_r0x02f882d8:
            *(dword **)((long)ppdVar7 + -0x20) = pdVar16;
            *(dword **)((long)ppdVar7 + -0x18) = pdVar24;
            *(dword ***)((long)ppdVar7 + -0x10) = ppdVar37;
            *(undefined **)((long)ppdVar7 + -8) = puVar38;
            (**(code **)(*(long *)unaff_x19 + 0x218))
                      (unaff_x19,*(undefined8 *)(*(long *)unaff_x19 + 0x220));
            if (*(long *)(unaff_x19 + 10) != 0) {
              /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(unaff_x19 + 10),0);
              unaff_x19[0x13] = 4;
              /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(unaff_x19,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar17 = (dword *)(**(code **)(*(long *)unaff_x19 + 0x228))
                                           (unaff_x19,*(undefined8 *)(*(long *)unaff_x19 + 0x230));
              return pdVar17;
            }
            func_0x00f78af4();
            puVar8 = (undefined1 *)((long)ppdVar7 + -0x40);
            *(dword **)((long)ppdVar7 + -0x40) = pdVar16;
            *(dword **)((long)ppdVar7 + -0x38) = unaff_x19;
            *(undefined1 **)((long)ppdVar7 + -0x30) = (undefined1 *)((long)ppdVar7 + -0x10);
            *(undefined **)((long)ppdVar7 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
            puVar35 = (undefined1 *)((long)ppdVar7 + -0x30);
            if (extraout_x1 != (long *)0x0) {
              lVar34 = extraout_x1[5];
              /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
              uVar25 = (**(code **)(*extraout_x1 + 0x238))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
              extraout_x1[5] = 0;
              extraout_x1[6] = 0;
              extraout_x1[9] = _UNK_037235c0;
              extraout_x1[7] = 0;
              extraout_x1[8] = 0;
              /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar25,lVar34);
              pdVar17 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
              extraout_x1[0xb] = 0;
              return pdVar17;
            }
            pcVar39 = (code *)&Core_UI2_UIManager__ClearLayerAndShowScreen;
            auVar40 = func_0x00f78af4();
            pdVar24 = pdVar29;
            unaff_x20 = pdVar16;
          }
          lVar34 = func_0x00f78af4();
          *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
          *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
          *(dword **)(puVar6 + -0x90) = unaff_x22;
          *(undefined8 *)(puVar6 + -0x88) = 0;
          *(dword **)(puVar6 + -0x80) = pdVar16;
          *(dword **)(puVar6 + -0x78) = pdVar24;
          *(dword ***)(puVar6 + -0x70) = ppdVar37;
          *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
          if ((bRam0000000003ebc647 & 1) == 0) {
            func_0x00f78a20(0x3d255c0);
            bRam0000000003ebc647 = 1;
          }
          if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar25 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar25,0);
          if (0 < *(int *)(lVar34 + 0x50)) {
            iVar15 = 0;
            do {
              /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar34,iVar15);
              /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar34,iVar15);
              iVar15 = iVar15 + 1;
            } while (iVar15 < *(int *)(lVar34 + 0x50));
          }
          /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar34);
          *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x80);
          *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x78);
          *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
          *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
          if (pcRam0000000003ec05a0 == (code *)0x0) {
            pcRam0000000003ec05a0 =
                 (code *)func_0x00f789d4(
                                        "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar17 = (dword *)(*pcRam0000000003ec05a0)(uVar25);
          return pdVar17;
        }
        auVar40 = func_0x00f78af4();
        pdStack_48 = (dword *)Atlas_UI_AtlasUIManager__IsLayerReady;
        lVar34 = *(long *)(auVar40._0_8_ + 0x10);
        if (lVar34 == 0) {
          uStack_50 = (dword *)&stack0xffffffffffffffc0;
          auVar40 = func_0x00f78af4();
          puVar35 = &stack0xffffffffffffffa0;
          lVar34 = *(long *)(auVar40._0_8_ + 0x10);
          auVar42._8_8_ = auVar40._8_8_;
          auVar42._0_8_ = lVar34;
          if (lVar34 != 0) {
            pdVar17 = (dword *)0x0;
            ppdVar9 = (dword **)&uStack_50;
            pcVar39 = Atlas_UI_AtlasUIManager__GetLayerState;
            goto code_r0x02f884dc;
          }
          auVar40 = func_0x00f78af4();
          ppdVar37 = &pdStack_70;
          uStack_68 = Atlas_UI_AtlasUIManager__EnableInput;
          lVar34 = *(long *)(auVar40._0_8_ + 0x10);
          auVar43._8_8_ = auVar40._8_8_;
          auVar43._0_8_ = lVar34;
          if (lVar34 == 0) {
            pdStack_70 = (dword *)&stack0xffffffffffffffa0;
            auVar40 = func_0x00f78af4();
            apdStack_a8[3] = (dword *)&pdStack_80;
            pcStack_78 = Atlas_UI_AtlasUIManager__SetScreenVisible;
            lVar34 = *(long *)(auVar40._0_8_ + 0x10);
            auVar44._8_8_ = auVar40._8_8_;
            auVar44._0_8_ = lVar34;
            if (lVar34 == 0) {
              pdStack_80 = (dword *)&pdStack_70;
              pdVar17 = (dword *)func_0x00f78af4();
              pcStack_88 = Atlas_UI_AtlasUIManager___ctor;
              ppdVar37 = &pdStack_80;
              if ((bRam0000000003eb4871 & 1) == 0) {
                func_0x00f78a20(0x3d2fb80);
                func_0x00f78a20(0x3d1c478);
                bRam0000000003eb4871 = 1;
                ppdVar37 = (dword **)apdStack_a8[3];
              }
              apdStack_a8[3] = (dword *)ppdVar37;
              uVar25 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
              /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar25,uRam0000000003d2fb80);
              *(undefined8 *)(pdVar17 + 0xc) = uVar25;
              return pdVar17;
            }
            ppdVar11 = &pdStack_70;
            pcVar39 = Atlas_UI_AtlasUIManager__SetScreenVisible;
            pdStack_80 = (dword *)&pdStack_70;
            goto code_r0x02f88674;
          }
          puVar10 = &stack0xffffffffffffffa0;
          pcVar39 = Atlas_UI_AtlasUIManager__EnableInput;
          pdVar17 = pdVar29;
          pdVar29 = unaff_x21;
          pdStack_70 = (dword *)&stack0xffffffffffffffa0;
        }
        else {
          pdVar17 = (dword *)0x0;
          ppdVar9 = &pdStack_70;
          pdStack_48 = (dword *)Atlas_UI_AtlasUIManager__IsLayerReady;
          pdStack_70 = unaff_x22;
          uStack_68 = (code *)unaff_x21;
          uStack_50 = (dword *)&stack0xffffffffffffffc0;
          if ((bRam0000000003ebc64f & 1) == 0) {
            uStack_50 = (dword *)&stack0xffffffffffffffc0;
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64f = 1;
          }
          uVar14 = auVar40._8_4_;
          if (((int)uVar14 < 0) || (*(int *)(lVar34 + 0x50) <= (int)uVar14)) {
            return (dword *)0x0;
          }
          lVar34 = *(long *)(lVar34 + 0x70);
          if (lVar34 != 0) {
            if (*(uint *)(lVar34 + 0x18) <= uVar14) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar19 = *(long *)(lVar34 + 0x10) + ((ulong)auVar40._8_8_ & 0xffffffff) * 0x28;
            lVar34 = *(long *)(lVar19 + 0x28);
            cVar2 = *(char *)(lVar19 + 0x40);
            iVar15 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar19 + 0x30),0);
            if (iVar15 == 0 || cVar2 != '\0') {
              return (dword *)0x0;
            }
            if ((lVar34 != 0) && (*(int *)(lVar34 + 0x4c) != 2)) {
              return (dword *)0x0;
            }
            return (dword *)((long)&MACH_HEADER.magic + 1);
          }
          pcVar39 = (code *)&Core_UI2_UIManager__GetLayerState;
          auVar42 = func_0x00f78af4();
          unaff_x20 = (dword *)0x0;
          unaff_x19 = auVar40._8_8_;
          unaff_x21 = (dword *)0x3ebc000;
code_r0x02f884dc:
          puVar10 = (undefined1 *)((long)ppdVar9 + -0x30);
          *(dword **)((long)ppdVar9 + -0x30) = unaff_x22;
          *(dword **)((long)ppdVar9 + -0x28) = unaff_x21;
          *(dword **)((long)ppdVar9 + -0x20) = unaff_x20;
          *(dword **)((long)ppdVar9 + -0x18) = unaff_x19;
          *(undefined8 **)((long)ppdVar9 + -0x10) = &uStack_50;
          *(code **)((long)ppdVar9 + -8) = pcVar39;
          puVar35 = (undefined1 *)((long)ppdVar9 + -0x10);
          if ((bRam0000000003ebc650 & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc650 = 1;
          }
          lVar34 = *(long *)(auVar42._0_8_ + 0x70);
          if (lVar34 != 0) {
            if (*(uint *)(lVar34 + 0x18) <= auVar42._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar34 = *(long *)(*(long *)(lVar34 + 0x10) + (long)(int)auVar42._8_4_ * 0x28 + 0x28);
            if (lVar34 == 0) {
              pdVar17 = &MACH_HEADER.cputype;
            }
            else {
              pdVar17 = (dword *)(ulong)*(uint *)(lVar34 + 0x4c);
            }
            return pdVar17;
          }
          pcVar39 = (code *)&Core_UI2_UIManager__EnableInput;
          auVar43 = func_0x00f78af4();
          unaff_x20 = (dword *)0x0;
          unaff_x19 = auVar42._8_8_;
          pdVar29 = (dword *)0x3ebc000;
        }
        pdVar16 = auVar43._8_8_;
        unaff_x21 = auVar43._0_8_;
        ppdVar11 = (dword **)(puVar10 + -0x40);
        *(undefined8 *)(puVar10 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar10 + -0x38) = unaff_x23;
        *(dword **)(puVar10 + -0x30) = unaff_x22;
        *(dword **)(puVar10 + -0x28) = pdVar29;
        *(dword **)(puVar10 + -0x20) = unaff_x20;
        *(dword **)(puVar10 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar10 + -0x10) = puVar35;
        *(code **)(puVar10 + -8) = pcVar39;
        ppdVar37 = (dword **)(puVar10 + -0x10);
        unaff_x22 = (dword *)0x3ebc000;
        pdVar29 = pdVar17;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(long *)(unaff_x21 + 0x1a) != 0) {
          pdVar29 = (dword *)(ulong)((uint)pdVar17 ^ 1);
          pdVar24 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(unaff_x21 + 0x1a),pdVar16,pdVar29,0);
          lVar34 = *(long *)(unaff_x21 + 0x1c);
          unaff_x22 = (dword *)0x0;
          if (lVar34 != 0) {
            uVar14 = auVar43._8_4_;
            if (*(uint *)(lVar34 + 0x18) <= uVar14) {
              pdVar24 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(lVar34 + 0x10) + (long)(int)uVar14 * 0x28 + 0x28) == 0) ||
               (unaff_x22 = *(dword **)(unaff_x21 + 0xc), unaff_x22 == (dword *)0x0)) {
              return pdVar24;
            }
            lVar34 = *(long *)(unaff_x21 + 0x1c);
            unaff_x21 = (dword *)0x0;
            if (lVar34 != 0) {
              if (*(uint *)(lVar34 + 0x18) <= uVar14) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar27 = *(long **)(*(long *)(lVar34 + 0x10) + (long)(int)uVar14 * 0x28 + 0x28);
              *(undefined8 *)(puVar10 + -0x60) = unaff_x28;
              *(undefined8 *)(puVar10 + -0x58) = unaff_x27;
              *(undefined8 *)(puVar10 + -0x50) = unaff_x26;
              *(undefined8 *)(puVar10 + -0x48) = unaff_x25;
              *(undefined8 *)(puVar10 + -0x40) = *(undefined8 *)(puVar10 + -0x40);
              *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)(puVar10 + -0x38);
              *(undefined8 *)(puVar10 + -0x30) = *(undefined8 *)(puVar10 + -0x30);
              *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)(puVar10 + -0x28);
              *(undefined8 *)(puVar10 + -0x20) = *(undefined8 *)(puVar10 + -0x20);
              *(undefined8 *)(puVar10 + -0x18) = *(undefined8 *)(puVar10 + -0x18);
              *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
              *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
              *(dword **)(puVar10 + -0x68) = unaff_x22;
              lVar34 = *(long *)(unaff_x22 + 0x1a);
              if (lVar34 == 0) {
                puVar35 = puVar10 + -0x68;
                lVar19 = 1;
              }
              else {
                lVar19 = *(long *)(lVar34 + 0x18);
                if (lVar19 == 0) {
                  return unaff_x22;
                }
                puVar35 = (undefined1 *)(lVar34 + 0x20);
              }
              lVar34 = 0;
              do {
                lVar23 = *(long *)(puVar35 + lVar34 * 8);
                pcVar39 = *(code **)(lVar23 + 0x10);
                plVar26 = *(long **)(lVar23 + 0x20);
                lVar23 = *(long *)(lVar23 + 0x28);
                if (*(short *)(lVar23 + 0x48) == -1) {
                  func_0x00f78ad8(lVar23);
                }
                iVar15 = func_0x00f78a4c(lVar23);
                bVar12 = *(char *)(lVar23 + 0x4a) == '\x03';
                if (iVar15 == 0) {
                  if (bVar12) {
                    if (plVar26 == (long *)0x0) {
code_r0x01e71bbc:
                      pdVar29 = (dword *)(*pcVar39)(plVar27,pdVar16,pdVar17,lVar23);
                    }
                    else {
                      if (((*(short *)(lVar23 + 0x48) == -1) ||
                          ((*(byte *)(*plVar26 + 0x115) & 1) != 0)) ||
                         (*(long *)(unaff_x22 + 6) == 0)) goto code_r0x01e71aac;
                      iVar15 = func_0x00f78a44(lVar23);
                      iVar13 = func_0x00f78ec0(lVar23);
                      if (iVar15 == 0) {
                        uVar3 = *(ushort *)(lVar23 + 0x48);
                        if (iVar13 == 0) {
                          lVar23 = *plVar26 + (ulong)uVar3 * 0x10;
                          pdVar29 = (dword *)(**(code **)(lVar23 + 0x138))
                                                       (plVar26,plVar27,pdVar16,pdVar17,
                                                        *(undefined8 *)(lVar23 + 0x140));
                          goto code_r0x01e71bd0;
                        }
                        lVar23 = func_0x00f78a48(lVar23);
                        lVar30 = *plVar26;
                        uVar22 = (ulong)*(ushort *)(lVar30 + 0x12a);
                        if (uVar22 != 0) {
                          piVar31 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar31 + -2) == lVar23) {
                              puVar18 = (undefined8 *)
                                        (lVar30 + (long)(int)(*piVar31 + (uint)uVar3) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71d74;
                            }
                            piVar31 = piVar31 + 4;
                            uVar22 = uVar22 - 1;
                          } while (uVar22 != 0);
                        }
                        puVar18 = (undefined8 *)func_0x00fac1f0(plVar26,lVar23,(ulong)uVar3);
code_r0x01e71d74:
                        pcVar39 = (code *)*puVar18;
                        puVar18 = (undefined8 *)puVar18[1];
                      }
                      else {
                        if (iVar13 == 0) {
                          uVar25 = *(undefined8 *)
                                    (*plVar26 + (ulong)*(ushort *)(lVar23 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar30 = *plVar26;
                          uVar22 = (ulong)*(ushort *)(lVar30 + 0x12a);
                          if (uVar22 != 0) {
                            piVar31 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar31 + -2) == *(long *)(lVar23 + 0x18)) {
                                lVar30 = lVar30 + (long)(int)(*piVar31 +
                                                             (uint)*(ushort *)(lVar23 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71d4c;
                              }
                              piVar31 = piVar31 + 4;
                              uVar22 = uVar22 - 1;
                            } while (uVar22 != 0);
                          }
                          lVar30 = func_0x00fac1f0(plVar26);
code_r0x01e71d4c:
                          uVar25 = *(undefined8 *)(lVar30 + 8);
                        }
                        puVar18 = (undefined8 *)func_0x00f78acc(uVar25,lVar23);
                        pcVar39 = (code *)*puVar18;
                      }
                      pdVar29 = (dword *)(*pcVar39)(plVar26,plVar27,pdVar16,pdVar17,puVar18);
                    }
                  }
                  else {
                    if ((*(short *)(lVar23 + 0x48) == -1) || (*(long *)(unaff_x22 + 6) == 0))
                    goto code_r0x01e71bbc;
                    iVar15 = func_0x00f78a44(lVar23);
                    iVar13 = func_0x00f78ec0(lVar23);
                    if (iVar15 == 0) {
                      uVar3 = *(ushort *)(lVar23 + 0x48);
                      if (iVar13 == 0) {
                        lVar23 = *plVar27 + (ulong)uVar3 * 0x10;
                        pdVar29 = (dword *)(**(code **)(lVar23 + 0x138))
                                                     (plVar27,pdVar16,pdVar17,
                                                      *(undefined8 *)(lVar23 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar23 = func_0x00f78a48(lVar23);
                      lVar30 = *plVar27;
                      uVar22 = (ulong)*(ushort *)(lVar30 + 0x12a);
                      if (uVar22 != 0) {
                        piVar31 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar31 + -2) == lVar23) {
                            puVar18 = (undefined8 *)
                                      (lVar30 + (long)(int)(*piVar31 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar31 = piVar31 + 4;
                          uVar22 = uVar22 - 1;
                        } while (uVar22 != 0);
                      }
                      puVar18 = (undefined8 *)func_0x00fac1f0(plVar27,lVar23,(ulong)uVar3);
code_r0x01e71d00:
                      pcVar39 = (code *)*puVar18;
                      puVar18 = (undefined8 *)puVar18[1];
                    }
                    else {
                      if (iVar13 == 0) {
                        uVar25 = *(undefined8 *)
                                  (*plVar27 + (ulong)*(ushort *)(lVar23 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar30 = *plVar27;
                        uVar22 = (ulong)*(ushort *)(lVar30 + 0x12a);
                        if (uVar22 != 0) {
                          piVar31 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar31 + -2) == *(long *)(lVar23 + 0x18)) {
                              lVar30 = lVar30 + (long)(int)(*piVar31 +
                                                           (uint)*(ushort *)(lVar23 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar31 = piVar31 + 4;
                            uVar22 = uVar22 - 1;
                          } while (uVar22 != 0);
                        }
                        lVar30 = func_0x00fac1f0(plVar27);
code_r0x01e71cd8:
                        uVar25 = *(undefined8 *)(lVar30 + 8);
                      }
                      puVar18 = (undefined8 *)func_0x00f78acc(uVar25,lVar23);
                      pcVar39 = (code *)*puVar18;
                    }
                    pdVar29 = (dword *)(*pcVar39)(plVar27,pdVar16,pdVar17,puVar18);
                  }
                }
                else {
                  if (bVar12) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  pdVar29 = (dword *)(*pcVar39)(plVar26,plVar27,pdVar16,pdVar17,lVar23);
                }
code_r0x01e71bd0:
                lVar34 = lVar34 + 1;
                if (lVar34 == lVar19) {
                  return pdVar29;
                }
              } while( true );
            }
          }
        }
        pcVar39 = (code *)&Core_UI2_UIManager__SetScreenVisible;
        auVar44 = func_0x00f78af4();
        unaff_x19 = pdVar17;
        unaff_x20 = pdVar16;
code_r0x02f88674:
        pdVar16 = auVar44._0_8_;
        *(dword **)((long)ppdVar11 + -0x30) = unaff_x22;
        *(dword **)((long)ppdVar11 + -0x28) = unaff_x21;
        *(dword **)((long)ppdVar11 + -0x20) = unaff_x20;
        *(dword **)((long)ppdVar11 + -0x18) = unaff_x19;
        *(dword ***)((long)ppdVar11 + -0x10) = ppdVar37;
        *(code **)((long)ppdVar11 + -8) = pcVar39;
        pdVar17 = pdVar16;
        if ((bRam0000000003ebc652 & 1) == 0) {
          pdVar17 = (dword *)func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc652 = 1;
        }
        lVar34 = *(long *)(pdVar16 + 0x1c);
        if (lVar34 != 0) {
          uVar14 = auVar44._8_4_;
          if (*(uint *)(lVar34 + 0x18) <= uVar14) {
            pdVar17 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar34 + 0x10) + (long)(int)uVar14 * 0x28 + 0x28) == 0) {
            return pdVar17;
          }
          lVar34 = *(long *)(pdVar16 + 0x1c);
          if (lVar34 != 0) {
            if (*(uint *)(lVar34 + 0x18) <= uVar14) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar34 = *(long *)(*(long *)(lVar34 + 0x10) + (long)(int)uVar14 * 0x28 + 0x28);
            if ((lVar34 != 0) && (plVar27 = *(long **)(lVar34 + 0x28), plVar27 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar17 = (dword *)(**(code **)(*plVar27 + 0x178))
                                           (plVar27,pdVar29,*(undefined8 *)(*plVar27 + 0x180));
              return pdVar17;
            }
          }
        }
        auVar40 = func_0x00f78af4();
        uVar25 = auVar40._0_8_;
        *(long *)((long)ppdVar11 + -0x50) = auVar44._8_8_;
        *(dword **)((long)ppdVar11 + -0x48) = pdVar29;
        *(undefined1 **)((long)ppdVar11 + -0x40) = (undefined1 *)((long)ppdVar11 + -0x10);
        *(undefined **)((long)ppdVar11 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
        *(undefined8 *)((long)ppdVar11 + -0x68) = 0;
        *(undefined8 *)((long)ppdVar11 + -0x70) = 0;
        *(undefined8 *)((long)ppdVar11 + -0x58) = 0;
        *(undefined8 *)((long)ppdVar11 + -0x60) = 0;
        pdVar17 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar25,auVar40._8_8_,
                                           (undefined1 *)((long)ppdVar11 + -0x70));
        if ((int)pdVar17 != 0) {
          /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar25,*(undefined8 *)((long)ppdVar11 + -0x60),
                          *(undefined8 *)((long)ppdVar11 + -0x58));
          *(undefined8 *)((long)ppdVar11 + -0x88) = *(undefined8 *)((long)ppdVar11 + -0x68);
          *(undefined8 *)((long)ppdVar11 + -0x90) = *(undefined8 *)((long)ppdVar11 + -0x70);
          *(undefined8 *)((long)ppdVar11 + -0x78) = *(undefined8 *)((long)ppdVar11 + -0x58);
          *(undefined8 *)((long)ppdVar11 + -0x80) = *(undefined8 *)((long)ppdVar11 + -0x60);
          pdVar17 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar25,(undefined1 *)((long)ppdVar11 + -0x90),1);
        }
        return pdVar17;
      }
    }
  }
  auVar41 = func_0x00f78af4();
  lVar19 = auVar41._8_8_;
  plVar27 = auVar41._0_8_;
  uVar22 = 0x3eb8000;
  uStack_50 = (dword *)param_1;
  pdStack_48 = pdVar17;
  if ((bRam0000000003eb8329 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb8329 = 1;
  }
  uStack_68 = (code *)(ulong)(uint)uStack_68;
  if (plVar27[7] != 0) {
    uVar14 = *(uint *)(plVar27[7] + 0x18);
    uVar22 = (ulong)uVar14;
    pdVar17 = (dword *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(lVar19 + 0x18) + 0xc0) + 0x30))(plVar27);
    if ((int)uVar14 < 1) {
      if ((int)pdVar17 == 0) {
        return pdVar17;
      }
      lVar23 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar19 + 0x18) + 0xc0) + 0x10))
                         (plVar27);
      if ((lVar23 != 0) && (*(long *)(lVar23 + 0x68) != 0)) {
        pdVar17 = (dword *)/*ModalBehaviour$$get_IsShowing*/ func_0x014969fc(*(long *)(lVar23 + 0x68),0);
        if (((ulong)pdVar17 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar17 = (dword *)(*(code *)**(undefined8 **)
                                         (*(long *)(*(long *)(lVar19 + 0x18) + 0xc0) + 0x50))
                                       (plVar27);
          return pdVar17;
        }
        return pdVar17;
      }
    }
    else {
      if ((int)pdVar17 == 0) {
        return pdVar17;
      }
      pdVar17 = (dword *)(**(code **)(*plVar27 + 0x188))(plVar27,*(undefined8 *)(*plVar27 + 400));
      if ((int)pdVar17 == 0) {
        return pdVar17;
      }
      puVar28 = *(undefined8 **)(*(long *)(*(long *)(lVar19 + 0x18) + 0xc0) + 0x40);
      pdVar17 = (dword *)(*(code *)*puVar28)(plVar27,(long)&uStack_68 + 4);
      if ((int)pdVar17 == 0) {
        return pdVar17;
      }
      uVar22 = plVar27[7];
      if (uVar22 != 0) {
        lVar34 = (long)(int)uStack_68._4_4_;
        uVar20 = uVar22;
        if (uStack_68._4_4_ < *(uint *)(uVar22 + 0x18)) {
code_r0x025dfa50:
          uVar25 = *(undefined8 *)(*(long *)(uVar22 + 0x10) + lVar34 * 8 + 0x20);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(uVar20,uStack_68._4_4_,uRam0000000003d3b350);
          pdVar17 = (dword *)(*(code *)**(undefined8 **)
                                         (*(long *)(*(long *)(lVar19 + 0x18) + 0xc0) + 0x48))
                                       (plVar27,uVar25);
          return pdVar17;
        }
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        uVar20 = plVar27[7];
        if (uVar20 != 0) goto code_r0x025dfa50;
      }
    }
  }
  auVar40 = func_0x00f78af4();
  pcStack_78 = (code *)&Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___CanShowModal;
  pdStack_80 = (dword *)&stack0xffffffffffffffc0;
  if (auVar40._0_8_ != 0) {
    uVar14 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar40._8_8_ + 0x18) + 0xc0) + 0x58))
                       ();
    return (dword *)(ulong)(uVar14 ^ 1);
  }
  auVar40 = func_0x00f78af4();
  pcStack_88 = (code *)&
                       Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___HideCurrentModal
  ;
  apdStack_a8[3] = (dword *)&pdStack_80;
  auVar4 = auVar41;
  if (auVar40._0_8_ != 0) {
    apdStack_a8[1] = (dword *)lVar19;
    apdStack_a8[2] = (dword *)plVar27;
    apdStack_a8[3] = (dword *)&pdStack_80;
    pdVar17 = (dword *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(auVar40._8_8_ + 0x18) + 0xc0) + 0x30))();
    if ((int)pdVar17 == 0) {
      return pdVar17;
    }
    lVar19 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar40._8_8_ + 0x18) + 0xc0) + 0x10))
                       (auVar40._0_8_);
    auVar5._8_8_ = apdStack_a8[1];
    auVar5._0_8_ = apdStack_a8[2];
    auVar4._8_8_ = apdStack_a8[1];
    auVar4._0_8_ = apdStack_a8[2];
    auVar41 = auVar40;
    if ((lVar19 != 0) &&
       (plVar27 = *(long **)(lVar19 + 0x68), auVar4 = auVar5, plVar27 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x025dfb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pdVar17 = (dword *)(**(code **)(*plVar27 + 0x1a8))(plVar27,*(undefined8 *)(*plVar27 + 0x1b0));
      return pdVar17;
    }
  }
  apdStack_a8[1] = auVar4._8_8_;
  apdStack_a8[2] = auVar4._0_8_;
  auVar40 = func_0x00f78af4();
  plVar26 = auVar40._8_8_;
  plVar27 = auVar40._0_8_;
  apdStack_a8[0] =
       (dword *)&Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
  puVar18 = puVar28;
  lStack_d0 = lVar34;
  uStack_c8 = uVar22;
  ppdStack_b0 = apdStack_a8 + 3;
  if ((bRam0000000003eb832a & 1) == 0) {
    pdStack_c0 = auVar41._8_8_;
    lStack_b8 = auVar41._0_8_;
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    auVar41._8_8_ = pdStack_c0;
    auVar41._0_8_ = lStack_b8;
    bRam0000000003eb832a = 1;
  }
  pdStack_c0 = auVar41._8_8_;
  lStack_b8 = auVar41._0_8_;
  if (plVar26 != (long *)0x0) {
    uVar25 = (**(code **)(*plVar26 + 0x178))(plVar26,*(undefined8 *)(*plVar26 + 0x180));
    puVar18 = (undefined8 *)0x0;
    uVar25 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar25);
    auVar41._8_8_ = pdStack_c0;
    auVar41._0_8_ = lStack_b8;
    if (plVar27 != (long *)0x0) {
      puVar18 = *(undefined8 **)(*(long *)(puVar28[3] + 0xc0) + 8);
      (*(code *)*puVar18)(plVar27,uVar25);
      auVar41._8_8_ = pdStack_c0;
      auVar41._0_8_ = lStack_b8;
      if (plVar27[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar27[7],plVar26,uRam0000000003d3b330);
        auVar41._8_8_ = pdStack_c0;
        auVar41._0_8_ = lStack_b8;
        puVar18 = (undefined8 *)plVar27[8];
        if ((puVar18 == (undefined8 *)0x0) || ((int)plVar26[2] <= *(int *)(puVar18 + 2))) {
code_r0x025dfcb4:
          pdVar17 = (dword *)(*(code *)**(undefined8 **)(*(long *)(puVar28[3] + 0xc0) + 0x30))
                                       (plVar27);
          if (((ulong)pdVar17 & 1) != 0) {
            return pdVar17;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar17 = (dword *)(**(code **)(*plVar27 + 0x1a8))
                                       (plVar27,*(undefined8 *)(*plVar27 + 0x1b0));
          return pdVar17;
        }
        if (plVar27[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar27[7],0,puVar18,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar28[3] + 0xc0) + 0x60))(plVar27);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  pdStack_c0 = auVar41._8_8_;
  lStack_b8 = auVar41._0_8_;
  auVar40 = func_0x00f78af4();
  plVar27 = auVar40._8_8_;
  lVar34 = auVar40._0_8_;
  if ((plVar27 != (long *)0x0) &&
     (uVar25 = (**(code **)(*plVar27 + 0x178))(plVar27,*(undefined8 *)(*plVar27 + 0x180)),
     lVar34 != 0)) {
    uVar14 = (*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x70))(lVar34,uVar25);
    if ((uVar14 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x78))(lVar34,plVar27);
    }
    return (dword *)(ulong)(uVar14 ^ 1);
  }
  auVar40 = func_0x00f78af4();
  iVar15 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar34 = *(long *)(auVar40._0_8_ + 0x38);
  if (lVar34 != 0) {
    iVar15 = *(int *)(lVar34 + 0x18);
    if (iVar15 < 1) goto code_r0x025dfe48;
    uVar14 = 0;
    iVar13 = -0x80000000;
    uVar32 = 0;
    do {
      if (*(uint *)(lVar34 + 0x18) <= uVar14) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar34 = *(long *)(*(long *)(lVar34 + 0x10) + (long)(int)uVar14 * 8 + 0x20);
      if (lVar34 == 0) break;
      iVar1 = *(int *)(lVar34 + 0x10);
      uVar33 = uVar14;
      if (iVar1 <= iVar13) {
        uVar33 = uVar32;
      }
      if (iVar15 - 1U == uVar14) goto code_r0x025dfe4c;
      if (iVar1 <= iVar13) {
        iVar1 = iVar13;
      }
      lVar34 = *(long *)(auVar40._0_8_ + 0x38);
      uVar14 = uVar14 + 1;
      iVar13 = iVar1;
      uVar32 = uVar33;
    } while (lVar34 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar33 = 0;
code_r0x025dfe4c:
  *auVar40._8_8_ = uVar33;
  return (dword *)(ulong)(0 < iVar15);
}



// ============================================================
// RVA: 0x14942b4 | Atlas.UI.MessageBoxManager..ctor
// ============================================================

undefined1  [16] Atlas_UI_MessageBoxManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb49b5 & 1) == 0) {
    func_0x00f78a20(0x3d3e0c0);
    bRam0000000003eb49b5 = 1;
  }
  if ((bRam0000000003eb8334 & 1) == 0) {
    func_0x00f78a20(0x3d3b328,uRam0000000003d3e0c0);
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



