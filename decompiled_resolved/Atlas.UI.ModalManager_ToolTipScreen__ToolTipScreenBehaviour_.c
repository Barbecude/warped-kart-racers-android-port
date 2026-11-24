// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>

// ============================================================
// RVA: 0x25df580 | Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>.set_Screen
// ============================================================

ulong Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___set_Screen
                (long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb8326 & 1) == 0) {
    func_0x00f78a20(0x3d415c0);
    func_0x00f78a20(0x3d1eb18);
    func_0x00f78a20(0x3d72750);
    func_0x00f78a20(0x3d72758);
    bRam0000000003eb8326 = 1;
  }
  if (param_2 == 0) {
    if (param_1 != (long *)0x0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 8))
                (param_1,/*STR('Set Screen 2')*/ uRam0000000003d72758);
      lVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x10))
                        (param_1);
      if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x68), lVar1 != 0)) {
        uVar5 = *(undefined8 *)(lVar1 + 0x18);
        uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18);
        /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(uVar4,param_1,*(undefined8 *)(*param_1 + 0x1a0),uRam0000000003d415c0);
        param_3 = /*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar4,0);
        param_2 = /*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18;
        uVar2 = 0;
        if ((param_3 == 0) || (uVar2 = func_0x00f78adc(param_3,/*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18), uVar2 != 0)) {
          *(ulong *)(lVar1 + 0x18) = uVar2;
          param_1[4] = 0;
          return uVar2;
        }
        goto code_r0x025df760;
      }
    }
LAB_025df750:
    func_0x00f78af4();
  }
  else {
    if (param_1 == (long *)0x0) goto LAB_025df750;
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 8))
              (param_1,/*STR('Set Screen 1')*/ uRam0000000003d72750);
    param_1[4] = param_2;
    lVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x10))
                      (param_1);
    if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x68), lVar1 == 0)) goto LAB_025df750;
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    param_2 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(param_2,param_1,*(undefined8 *)(*param_1 + 0x1a0),uRam0000000003d415c0);
    param_1 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,param_2,0);
    param_3 = /*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18;
    uVar2 = 0;
    if ((param_1 == (long *)0x0) ||
       (uVar2 = func_0x00f78adc(param_1,/*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18), uVar2 != 0)) {
      *(ulong *)(lVar1 + 0x18) = uVar2;
      return uVar2;
    }
  }
  func_0x00f78e5c(param_1,param_3);
code_r0x025df760:
  auVar6 = func_0x00f78e5c(param_3,param_2);
  lVar1 = auVar6._8_8_;
  if ((auVar6._0_8_ != 0) &&
     (lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x28))(),
     lVar3 != 0)) {
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    lVar3 = *(long *)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x18);
    if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar3);
    }
    lVar3 = func_0x00f78adc(uVar4,lVar3);
    lVar1 = *(long *)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x18);
    if ((*(ushort *)(lVar1 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar1);
    }
    if (lVar3 != 0) {
      uVar2 = func_0x00f78adc(lVar3,lVar1);
      if (uVar2 != 0) {
        return uVar2;
      }
      func_0x00f78e5c(lVar3,lVar1);
    }
    return 0;
  }
  lVar1 = func_0x00f78af4();
  return (ulong)(*(long *)(lVar1 + 0x20) != 0);
}



// ============================================================
// RVA: 0x25df830 | Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>.Init
// ============================================================

void Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// ============================================================
// RVA: 0x25df848 | Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>.DeInit
// ============================================================

void Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DeInit(long param_1)

{
  if ((bRam0000000003eb8327 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb8327 = 1;
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x25df8ac | Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>.ShowScreen
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

dword * Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___ShowScreen
                  (long param_1,dword *param_2,undefined8 *param_3)

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
  dword **ppdVar10;
  dword **ppdVar11;
  bool bVar12;
  int iVar13;
  dword *pdVar16;
  long lVar17;
  uint uVar14;
  int iVar15;
  ulong uVar18;
  dword *pdVar19;
  ulong uVar20;
  long lVar21;
  dword *pdVar22;
  undefined8 uVar23;
  long *plVar24;
  long *extraout_x1;
  long *plVar25;
  undefined8 *puVar26;
  dword *pdVar27;
  undefined8 *puVar28;
  long lVar29;
  int *piVar30;
  dword *unaff_x19;
  dword *unaff_x20;
  dword *unaff_x21;
  uint uVar31;
  uint uVar32;
  dword *unaff_x22;
  long lVar33;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar34;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar35;
  dword **ppdVar36;
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
  dword *pdStack_60;
  dword *pdStack_58;
  undefined8 uStack_50;
  dword *pdStack_48;
  
  puVar34 = &stack0xffffffffffffffd0;
  puVar8 = &stack0xffffffffffffffd0;
  lVar33 = 0x3eb8000;
  puVar26 = param_3;
  if ((bRam0000000003eb8328 & 1) == 0) {
    func_0x00f78a20(0x3d72968);
    bRam0000000003eb8328 = 1;
  }
  if (param_1 != 0) {
    puVar26 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 8);
    (*(code *)*puVar26)(param_1,/*STR('ShowScreen')*/ uRam0000000003d72968);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar17 = *(long *)(*(long *)(param_1 + 0x18) + 0xa8), lVar17 != 0)) {
      puVar26 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      /*Core.Input.InputManager$$SetScreenLayerInputExclusive*/ func_0x0164b04c(lVar17,*(undefined4 *)(param_1 + 0x30),1,0);
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (lVar17 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar17 != 0)) {
        pdVar27 = (dword *)(ulong)*(uint *)(param_1 + 0x30);
        uVar23 = *(undefined8 *)(param_1 + 0x28);
        lVar33 = *(long *)(lVar17 + 0x10);
        if (lVar33 != 0) {
          if ((bRam0000000003ebc64a & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64a = 1;
          }
          lStack_d0 = 0x3ebc000;
          lStack_b8 = 0;
          apdStack_a8[2] = (dword *)&UNK_02f87f9c;
          uStack_c8 = uVar23;
          pdStack_c0 = param_2;
          ppdStack_b0 = (dword **)lVar33;
          apdStack_a8[0] = pdVar27;
          apdStack_a8[1] = (dword *)&stack0xfffffffffffffff0;
          if ((bRam0000000003ebc64e & 1) == 0) {
            func_0x00f78a20(0x3d3ddf0);
            func_0x00f78a20(0x3d3ddf8);
            bRam0000000003ebc64e = 1;
          }
          lVar17 = *(long *)(lVar33 + 0x78);
          if (lVar17 != 0) {
            iVar15 = *(int *)(lVar17 + 0x18);
            if (iVar15 < 1) {
              return (dword *)0x0;
            }
            iVar13 = 1;
            pdVar27 = (dword *)((long)&MACH_HEADER.magic + 1);
            do {
              if (*(uint *)(lVar17 + 0x18) <= iVar13 - 1U) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)(iVar13 - 1U) * 0x20 + 0x20);
              if (lVar17 == 0) break;
              uVar20 = /*System.String$$Equals*/ func_0x029caa48(lVar17,uVar23,5,0);
              if ((uVar20 & 1) != 0) {
                return pdVar27;
              }
              pdVar27 = (dword *)(ulong)(iVar13 < iVar15);
              if (iVar15 == iVar13) {
                return pdVar27;
              }
              lVar17 = *(long *)(lVar33 + 0x78);
              iVar13 = iVar13 + 1;
            } while (lVar17 != 0);
          }
          func_0x00f78af4();
          return (dword *)0x0;
        }
        auVar40 = func_0x00f78af4();
        pdVar16 = auVar40._8_8_;
        puVar35 = &stack0xffffffffffffffe0;
        lVar33 = *(long *)(auVar40._0_8_ + 0x10);
        if (lVar33 != 0) {
          pdVar27 = (dword *)0x0;
          if ((bRam0000000003ebc64b & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            func_0x00f78a20(0x3d3ddd0);
            bRam0000000003ebc64b = 1;
          }
          lVar17 = *(long *)(lVar33 + 0x70);
          if (lVar17 != 0) {
            lVar21 = lVar17;
            if (*(uint *)(lVar17 + 0x18) <= auVar40._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              lVar21 = *(long *)(lVar33 + 0x70);
            }
            if (lVar21 != 0) {
              lVar17 = *(long *)(lVar17 + 0x10) + (long)(int)auVar40._8_4_ * 0x28;
              pcStack_78 = *(code **)(lVar17 + 0x28);
              pdStack_80 = *(dword **)(lVar17 + 0x20);
              pcStack_88 = (code *)CONCAT26(pcStack_88._6_2_,*(undefined6 *)(lVar17 + 0x42));
              pdStack_60 = (dword *)0x0;
              pdStack_58 = (dword *)0x0;
              uStack_50 = (undefined1 *)
                          CONCAT26(*(undefined2 *)(lVar17 + 0x46),
                                   CONCAT42(*(undefined4 *)(lVar17 + 0x42),1));
              pdStack_70 = pdStack_80;
              uStack_68 = pcStack_78;
              /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar21,pdVar16,&pdStack_70,uRam0000000003d3ddd0);
              pdVar27 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar33,pdVar16);
              return pdVar27;
            }
          }
          auVar40 = func_0x00f78af4();
          pdVar22 = auVar40._8_8_;
          ppdVar7 = &pdStack_c0;
          apdStack_a8[2] = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
          ppdVar36 = apdStack_a8 + 1;
          lStack_b8 = lVar17;
          ppdStack_b0 = (dword **)lVar33;
          apdStack_a8[0] = pdVar16;
          apdStack_a8[1] = (dword *)&stack0xffffffffffffffe0;
          if ((bRam0000000003ebc64c & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64c = 1;
          }
          lVar33 = *(long *)(auVar40._0_8_ + 0x70);
          if (lVar33 != 0) {
            if (*(uint *)(lVar33 + 0x18) <= auVar40._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + (long)(int)auVar40._8_4_ * 0x28 + 0x28);
            if (lVar33 == 0) {
              pdVar27 = (dword *)0x0;
            }
            else {
              pdVar27 = *(dword **)(lVar33 + 0x40);
            }
            return pdVar27;
          }
          puVar38 = &Core_UI2_UIScreen__ForceExit;
          unaff_x19 = (dword *)func_0x00f78af4();
          pdVar16 = (dword *)0x0;
          unaff_x21 = (dword *)0x3ebc000;
          goto code_r0x02f882d8;
        }
        auVar40 = func_0x00f78af4();
        pdVar22 = auVar40._8_8_;
        pdVar16 = *(dword **)(auVar40._0_8_ + 0x10);
        if (pdVar16 != (dword *)0x0) {
          pdVar27 = (dword *)0x0;
          puVar6 = &stack0xffffffffffffffe0;
          pcVar39 = Atlas_UI_AtlasUIManager__ClearLayer;
          goto code_r0x02f877a8;
        }
        auVar40 = func_0x00f78af4();
        lVar33 = *(long *)(auVar40._0_8_ + 0x10);
        auVar40._8_8_ = auVar40._8_8_;
        auVar40._0_8_ = lVar33;
        if (lVar33 != 0) {
          pcVar39 = Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
          pdVar22 = pdVar27;
          while( true ) {
            pdVar16 = auVar40._0_8_;
            puVar6 = puVar8 + -0x30;
            *(dword **)(puVar8 + -0x30) = unaff_x22;
            *(dword **)(puVar8 + -0x28) = unaff_x21;
            *(dword **)(puVar8 + -0x20) = unaff_x20;
            *(dword **)(puVar8 + -0x18) = unaff_x19;
            *(undefined1 **)(puVar8 + -0x10) = puVar34;
            *(code **)(puVar8 + -8) = pcVar39;
            puVar35 = puVar8 + -0x10;
            pcVar39 = (code *)&UNK_02f883d8;
            pdVar27 = pdVar22;
            unaff_x19 = param_2;
            unaff_x20 = pdVar22;
            unaff_x21 = auVar40._8_8_;
            unaff_x22 = pdVar16;
code_r0x02f877a8:
            ppdVar7 = (dword **)(puVar6 + -0x60);
            *(dword **)(puVar6 + -0x30) = unaff_x22;
            *(dword **)(puVar6 + -0x28) = unaff_x21;
            *(dword **)(puVar6 + -0x20) = unaff_x20;
            *(dword **)(puVar6 + -0x18) = unaff_x19;
            *(undefined1 **)(puVar6 + -0x10) = puVar35;
            *(code **)(puVar6 + -8) = pcVar39;
            ppdVar36 = (dword **)(puVar6 + -0x10);
            pdVar19 = pdVar16;
            if ((bRam0000000003ebc64d & 1) == 0) {
              func_0x00f78a20(0x3d3ddc8);
              pdVar19 = (dword *)func_0x00f78a20(0x3d3ddd0);
              bRam0000000003ebc64d = 1;
            }
            uVar14 = (uint)pdVar22;
            if (((int)uVar14 < 0) || ((int)pdVar16[0x14] <= (int)uVar14)) {
              return pdVar19;
            }
            lVar33 = *(long *)(pdVar16 + 0x1c);
            if (lVar33 == 0) break;
            if (*(uint *)(lVar33 + 0x18) <= uVar14) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar33 = *(long *)(lVar33 + 0x10) + ((ulong)pdVar22 & 0xffffffff) * 0x28;
            unaff_x22 = *(dword **)(lVar33 + 0x20);
            unaff_x19 = *(dword **)(lVar33 + 0x28);
            *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar33 + 0x42);
            *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar33 + 0x46);
            if (unaff_x19 == (dword *)0x0) {
              lVar33 = *(long *)(pdVar16 + 0x1c);
              if (lVar33 != 0) {
                *(dword **)(puVar6 + -0x58) = unaff_x22;
                *(undefined8 *)(puVar6 + -0x50) = 0;
                *(undefined8 *)(puVar6 + -0x48) = 0;
                *(undefined8 *)(puVar6 + -0x40) = 0;
                *(undefined2 *)(puVar6 + -0x38) = 0;
                *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
                *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
                pdVar27 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar33,pdVar22,puVar6 + -0x58,
                                                   uRam0000000003d3ddd0);
                return pdVar27;
              }
              break;
            }
            puVar38 = &UNK_02f87848;
            unaff_x21 = unaff_x19;
code_r0x02f882d8:
            *(dword **)((long)ppdVar7 + -0x20) = pdVar16;
            *(dword **)((long)ppdVar7 + -0x18) = pdVar22;
            *(dword ***)((long)ppdVar7 + -0x10) = ppdVar36;
            *(undefined **)((long)ppdVar7 + -8) = puVar38;
            (**(code **)(*(long *)unaff_x19 + 0x218))
                      (unaff_x19,*(undefined8 *)(*(long *)unaff_x19 + 0x220));
            if (*(long *)(unaff_x19 + 10) != 0) {
              /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(unaff_x19 + 10),0);
              unaff_x19[0x13] = 4;
              /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(unaff_x19,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar27 = (dword *)(**(code **)(*(long *)unaff_x19 + 0x228))
                                           (unaff_x19,*(undefined8 *)(*(long *)unaff_x19 + 0x230));
              return pdVar27;
            }
            func_0x00f78af4();
            puVar8 = (undefined1 *)((long)ppdVar7 + -0x40);
            *(dword **)((long)ppdVar7 + -0x40) = pdVar16;
            *(dword **)((long)ppdVar7 + -0x38) = unaff_x19;
            *(undefined1 **)((long)ppdVar7 + -0x30) = (undefined1 *)((long)ppdVar7 + -0x10);
            *(undefined **)((long)ppdVar7 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
            puVar34 = (undefined1 *)((long)ppdVar7 + -0x30);
            if (extraout_x1 != (long *)0x0) {
              lVar33 = extraout_x1[5];
              /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
              uVar23 = (**(code **)(*extraout_x1 + 0x238))
                                 (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
              extraout_x1[5] = 0;
              extraout_x1[6] = 0;
              extraout_x1[9] = _UNK_037235c0;
              extraout_x1[7] = 0;
              extraout_x1[8] = 0;
              /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar23,lVar33);
              pdVar27 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
              extraout_x1[0xb] = 0;
              return pdVar27;
            }
            pcVar39 = (code *)&Core_UI2_UIManager__ClearLayerAndShowScreen;
            auVar40 = func_0x00f78af4();
            pdVar22 = pdVar27;
            unaff_x20 = pdVar16;
          }
          lVar33 = func_0x00f78af4();
          *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
          *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
          *(dword **)(puVar6 + -0x90) = unaff_x22;
          *(undefined8 *)(puVar6 + -0x88) = 0;
          *(dword **)(puVar6 + -0x80) = pdVar16;
          *(dword **)(puVar6 + -0x78) = pdVar22;
          *(dword ***)(puVar6 + -0x70) = ppdVar36;
          *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
          if ((bRam0000000003ebc647 & 1) == 0) {
            func_0x00f78a20(0x3d255c0);
            bRam0000000003ebc647 = 1;
          }
          if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar23 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar23,0);
          if (0 < *(int *)(lVar33 + 0x50)) {
            iVar15 = 0;
            do {
              /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar33,iVar15);
              /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar33,iVar15);
              iVar15 = iVar15 + 1;
            } while (iVar15 < *(int *)(lVar33 + 0x50));
          }
          /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar33);
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
          pdVar27 = (dword *)(*pcRam0000000003ec05a0)(uVar23);
          return pdVar27;
        }
        auVar40 = func_0x00f78af4();
        pdStack_48 = (dword *)Atlas_UI_AtlasUIManager__IsLayerReady;
        lVar33 = *(long *)(auVar40._0_8_ + 0x10);
        if (lVar33 == 0) {
          uStack_50 = &stack0xffffffffffffffc0;
          auVar40 = func_0x00f78af4();
          ppdVar36 = &pdStack_60;
          pdStack_58 = (dword *)Atlas_UI_AtlasUIManager__GetLayerState;
          lVar33 = *(long *)(auVar40._0_8_ + 0x10);
          auVar42._8_8_ = auVar40._8_8_;
          auVar42._0_8_ = lVar33;
          if (lVar33 != 0) {
            pdVar16 = (dword *)0x0;
            ppdVar9 = (dword **)&uStack_50;
            pcVar39 = Atlas_UI_AtlasUIManager__GetLayerState;
            pdStack_60 = (dword *)&uStack_50;
            goto code_r0x02f884dc;
          }
          pdStack_60 = (dword *)&uStack_50;
          auVar40 = func_0x00f78af4();
          ppdVar37 = &pdStack_70;
          uStack_68 = Atlas_UI_AtlasUIManager__EnableInput;
          lVar33 = *(long *)(auVar40._0_8_ + 0x10);
          auVar43._8_8_ = auVar40._8_8_;
          auVar43._0_8_ = lVar33;
          if (lVar33 == 0) {
            pdStack_70 = (dword *)&pdStack_60;
            auVar40 = func_0x00f78af4();
            apdStack_a8[3] = (dword *)&pdStack_80;
            pcStack_78 = Atlas_UI_AtlasUIManager__SetScreenVisible;
            lVar33 = *(long *)(auVar40._0_8_ + 0x10);
            auVar44._8_8_ = auVar40._8_8_;
            auVar44._0_8_ = lVar33;
            if (lVar33 == 0) {
              pdStack_80 = (dword *)&pdStack_70;
              pdVar27 = (dword *)func_0x00f78af4();
              pcStack_88 = Atlas_UI_AtlasUIManager___ctor;
              ppdVar36 = &pdStack_80;
              if ((bRam0000000003eb4871 & 1) == 0) {
                func_0x00f78a20(0x3d2fb80);
                func_0x00f78a20(0x3d1c478);
                bRam0000000003eb4871 = 1;
                ppdVar36 = (dword **)apdStack_a8[3];
              }
              apdStack_a8[3] = (dword *)ppdVar36;
              uVar23 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
              /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar23,uRam0000000003d2fb80);
              *(undefined8 *)(pdVar27 + 0xc) = uVar23;
              return pdVar27;
            }
            ppdVar11 = &pdStack_70;
            pcVar39 = Atlas_UI_AtlasUIManager__SetScreenVisible;
            pdStack_80 = (dword *)&pdStack_70;
            goto code_r0x02f88674;
          }
          ppdVar10 = &pdStack_60;
          pcVar39 = Atlas_UI_AtlasUIManager__EnableInput;
          pdVar16 = pdVar27;
          pdVar27 = unaff_x21;
          pdStack_70 = (dword *)&pdStack_60;
        }
        else {
          pdVar16 = (dword *)0x0;
          ppdVar9 = &pdStack_70;
          pdStack_48 = (dword *)Atlas_UI_AtlasUIManager__IsLayerReady;
          pdStack_70 = unaff_x22;
          uStack_68 = (code *)unaff_x21;
          pdStack_60 = unaff_x20;
          pdStack_58 = unaff_x19;
          uStack_50 = &stack0xffffffffffffffc0;
          if ((bRam0000000003ebc64f & 1) == 0) {
            uStack_50 = &stack0xffffffffffffffc0;
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc64f = 1;
          }
          uVar14 = auVar40._8_4_;
          if (((int)uVar14 < 0) || (*(int *)(lVar33 + 0x50) <= (int)uVar14)) {
            return (dword *)0x0;
          }
          lVar33 = *(long *)(lVar33 + 0x70);
          if (lVar33 != 0) {
            if (*(uint *)(lVar33 + 0x18) <= uVar14) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar17 = *(long *)(lVar33 + 0x10) + ((ulong)auVar40._8_8_ & 0xffffffff) * 0x28;
            lVar33 = *(long *)(lVar17 + 0x28);
            cVar2 = *(char *)(lVar17 + 0x40);
            iVar15 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar17 + 0x30),0);
            if (iVar15 == 0 || cVar2 != '\0') {
              return (dword *)0x0;
            }
            if ((lVar33 != 0) && (*(int *)(lVar33 + 0x4c) != 2)) {
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
          ppdVar10 = (dword **)((long)ppdVar9 + -0x30);
          *(dword **)((long)ppdVar9 + -0x30) = unaff_x22;
          *(dword **)((long)ppdVar9 + -0x28) = unaff_x21;
          *(dword **)((long)ppdVar9 + -0x20) = unaff_x20;
          *(dword **)((long)ppdVar9 + -0x18) = unaff_x19;
          *(undefined8 **)((long)ppdVar9 + -0x10) = &uStack_50;
          *(code **)((long)ppdVar9 + -8) = pcVar39;
          ppdVar36 = (dword **)((long)ppdVar9 + -0x10);
          if ((bRam0000000003ebc650 & 1) == 0) {
            func_0x00f78a20(0x3d3ddc8);
            bRam0000000003ebc650 = 1;
          }
          lVar33 = *(long *)(auVar42._0_8_ + 0x70);
          if (lVar33 != 0) {
            if (*(uint *)(lVar33 + 0x18) <= auVar42._8_4_) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + (long)(int)auVar42._8_4_ * 0x28 + 0x28);
            if (lVar33 == 0) {
              pdVar27 = &MACH_HEADER.cputype;
            }
            else {
              pdVar27 = (dword *)(ulong)*(uint *)(lVar33 + 0x4c);
            }
            return pdVar27;
          }
          pcVar39 = (code *)&Core_UI2_UIManager__EnableInput;
          auVar43 = func_0x00f78af4();
          unaff_x20 = (dword *)0x0;
          unaff_x19 = auVar42._8_8_;
          pdVar27 = (dword *)0x3ebc000;
        }
        pdVar22 = auVar43._8_8_;
        unaff_x21 = auVar43._0_8_;
        ppdVar11 = (dword **)((long)ppdVar10 + -0x40);
        *(undefined8 *)((long)ppdVar10 + -0x40) = unaff_x24;
        *(undefined8 *)((long)ppdVar10 + -0x38) = unaff_x23;
        *(dword **)((long)ppdVar10 + -0x30) = unaff_x22;
        *(dword **)((long)ppdVar10 + -0x28) = pdVar27;
        *(dword **)((long)ppdVar10 + -0x20) = unaff_x20;
        *(dword **)((long)ppdVar10 + -0x18) = unaff_x19;
        *(dword ***)((long)ppdVar10 + -0x10) = ppdVar36;
        *(code **)((long)ppdVar10 + -8) = pcVar39;
        ppdVar37 = (dword **)((long)ppdVar10 + -0x10);
        unaff_x22 = (dword *)0x3ebc000;
        pdVar27 = pdVar16;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(long *)(unaff_x21 + 0x1a) != 0) {
          pdVar27 = (dword *)(ulong)((uint)pdVar16 ^ 1);
          pdVar19 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(unaff_x21 + 0x1a),pdVar22,pdVar27,0);
          lVar33 = *(long *)(unaff_x21 + 0x1c);
          unaff_x22 = (dword *)0x0;
          if (lVar33 != 0) {
            uVar14 = auVar43._8_4_;
            if (*(uint *)(lVar33 + 0x18) <= uVar14) {
              pdVar19 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(lVar33 + 0x10) + (long)(int)uVar14 * 0x28 + 0x28) == 0) ||
               (unaff_x22 = *(dword **)(unaff_x21 + 0xc), unaff_x22 == (dword *)0x0)) {
              return pdVar19;
            }
            lVar33 = *(long *)(unaff_x21 + 0x1c);
            unaff_x21 = (dword *)0x0;
            if (lVar33 != 0) {
              if (*(uint *)(lVar33 + 0x18) <= uVar14) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar25 = *(long **)(*(long *)(lVar33 + 0x10) + (long)(int)uVar14 * 0x28 + 0x28);
              *(undefined8 *)((long)ppdVar10 + -0x60) = unaff_x28;
              *(undefined8 *)((long)ppdVar10 + -0x58) = unaff_x27;
              *(undefined8 *)((long)ppdVar10 + -0x50) = unaff_x26;
              *(undefined8 *)((long)ppdVar10 + -0x48) = unaff_x25;
              *(undefined8 *)((long)ppdVar10 + -0x40) = *(undefined8 *)((long)ppdVar10 + -0x40);
              *(undefined8 *)((long)ppdVar10 + -0x38) = *(undefined8 *)((long)ppdVar10 + -0x38);
              *(undefined8 *)((long)ppdVar10 + -0x30) = *(undefined8 *)((long)ppdVar10 + -0x30);
              *(undefined8 *)((long)ppdVar10 + -0x28) = *(undefined8 *)((long)ppdVar10 + -0x28);
              *(undefined8 *)((long)ppdVar10 + -0x20) = *(undefined8 *)((long)ppdVar10 + -0x20);
              *(undefined8 *)((long)ppdVar10 + -0x18) = *(undefined8 *)((long)ppdVar10 + -0x18);
              *(undefined8 *)((long)ppdVar10 + -0x10) = *(undefined8 *)((long)ppdVar10 + -0x10);
              *(undefined8 *)((long)ppdVar10 + -8) = *(undefined8 *)((long)ppdVar10 + -8);
              *(dword **)((long)ppdVar10 + -0x68) = unaff_x22;
              lVar33 = *(long *)(unaff_x22 + 0x1a);
              if (lVar33 == 0) {
                puVar34 = (undefined1 *)((long)ppdVar10 + -0x68);
                lVar17 = 1;
              }
              else {
                lVar17 = *(long *)(lVar33 + 0x18);
                if (lVar17 == 0) {
                  return unaff_x22;
                }
                puVar34 = (undefined1 *)(lVar33 + 0x20);
              }
              lVar33 = 0;
              do {
                lVar21 = *(long *)(puVar34 + lVar33 * 8);
                pcVar39 = *(code **)(lVar21 + 0x10);
                plVar24 = *(long **)(lVar21 + 0x20);
                lVar21 = *(long *)(lVar21 + 0x28);
                if (*(short *)(lVar21 + 0x48) == -1) {
                  func_0x00f78ad8(lVar21);
                }
                iVar15 = func_0x00f78a4c(lVar21);
                bVar12 = *(char *)(lVar21 + 0x4a) == '\x03';
                if (iVar15 == 0) {
                  if (bVar12) {
                    if (plVar24 == (long *)0x0) {
code_r0x01e71bbc:
                      pdVar27 = (dword *)(*pcVar39)(plVar25,pdVar22,pdVar16,lVar21);
                    }
                    else {
                      if (((*(short *)(lVar21 + 0x48) == -1) ||
                          ((*(byte *)(*plVar24 + 0x115) & 1) != 0)) ||
                         (*(long *)(unaff_x22 + 6) == 0)) goto code_r0x01e71aac;
                      iVar15 = func_0x00f78a44(lVar21);
                      iVar13 = func_0x00f78ec0(lVar21);
                      if (iVar15 == 0) {
                        uVar3 = *(ushort *)(lVar21 + 0x48);
                        if (iVar13 == 0) {
                          lVar21 = *plVar24 + (ulong)uVar3 * 0x10;
                          pdVar27 = (dword *)(**(code **)(lVar21 + 0x138))
                                                       (plVar24,plVar25,pdVar22,pdVar16,
                                                        *(undefined8 *)(lVar21 + 0x140));
                          goto code_r0x01e71bd0;
                        }
                        lVar21 = func_0x00f78a48(lVar21);
                        lVar29 = *plVar24;
                        uVar20 = (ulong)*(ushort *)(lVar29 + 0x12a);
                        if (uVar20 != 0) {
                          piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar30 + -2) == lVar21) {
                              puVar26 = (undefined8 *)
                                        (lVar29 + (long)(int)(*piVar30 + (uint)uVar3) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71d74;
                            }
                            piVar30 = piVar30 + 4;
                            uVar20 = uVar20 - 1;
                          } while (uVar20 != 0);
                        }
                        puVar26 = (undefined8 *)func_0x00fac1f0(plVar24,lVar21,(ulong)uVar3);
code_r0x01e71d74:
                        pcVar39 = (code *)*puVar26;
                        puVar26 = (undefined8 *)puVar26[1];
                      }
                      else {
                        if (iVar13 == 0) {
                          uVar23 = *(undefined8 *)
                                    (*plVar24 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar29 = *plVar24;
                          uVar20 = (ulong)*(ushort *)(lVar29 + 0x12a);
                          if (uVar20 != 0) {
                            piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar30 + -2) == *(long *)(lVar21 + 0x18)) {
                                lVar29 = lVar29 + (long)(int)(*piVar30 +
                                                             (uint)*(ushort *)(lVar21 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71d4c;
                              }
                              piVar30 = piVar30 + 4;
                              uVar20 = uVar20 - 1;
                            } while (uVar20 != 0);
                          }
                          lVar29 = func_0x00fac1f0(plVar24);
code_r0x01e71d4c:
                          uVar23 = *(undefined8 *)(lVar29 + 8);
                        }
                        puVar26 = (undefined8 *)func_0x00f78acc(uVar23,lVar21);
                        pcVar39 = (code *)*puVar26;
                      }
                      pdVar27 = (dword *)(*pcVar39)(plVar24,plVar25,pdVar22,pdVar16,puVar26);
                    }
                  }
                  else {
                    if ((*(short *)(lVar21 + 0x48) == -1) || (*(long *)(unaff_x22 + 6) == 0))
                    goto code_r0x01e71bbc;
                    iVar15 = func_0x00f78a44(lVar21);
                    iVar13 = func_0x00f78ec0(lVar21);
                    if (iVar15 == 0) {
                      uVar3 = *(ushort *)(lVar21 + 0x48);
                      if (iVar13 == 0) {
                        lVar21 = *plVar25 + (ulong)uVar3 * 0x10;
                        pdVar27 = (dword *)(**(code **)(lVar21 + 0x138))
                                                     (plVar25,pdVar22,pdVar16,
                                                      *(undefined8 *)(lVar21 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar21 = func_0x00f78a48(lVar21);
                      lVar29 = *plVar25;
                      uVar20 = (ulong)*(ushort *)(lVar29 + 0x12a);
                      if (uVar20 != 0) {
                        piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar30 + -2) == lVar21) {
                            puVar26 = (undefined8 *)
                                      (lVar29 + (long)(int)(*piVar30 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar30 = piVar30 + 4;
                          uVar20 = uVar20 - 1;
                        } while (uVar20 != 0);
                      }
                      puVar26 = (undefined8 *)func_0x00fac1f0(plVar25,lVar21,(ulong)uVar3);
code_r0x01e71d00:
                      pcVar39 = (code *)*puVar26;
                      puVar26 = (undefined8 *)puVar26[1];
                    }
                    else {
                      if (iVar13 == 0) {
                        uVar23 = *(undefined8 *)
                                  (*plVar25 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar29 = *plVar25;
                        uVar20 = (ulong)*(ushort *)(lVar29 + 0x12a);
                        if (uVar20 != 0) {
                          piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar30 + -2) == *(long *)(lVar21 + 0x18)) {
                              lVar29 = lVar29 + (long)(int)(*piVar30 +
                                                           (uint)*(ushort *)(lVar21 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar30 = piVar30 + 4;
                            uVar20 = uVar20 - 1;
                          } while (uVar20 != 0);
                        }
                        lVar29 = func_0x00fac1f0(plVar25);
code_r0x01e71cd8:
                        uVar23 = *(undefined8 *)(lVar29 + 8);
                      }
                      puVar26 = (undefined8 *)func_0x00f78acc(uVar23,lVar21);
                      pcVar39 = (code *)*puVar26;
                    }
                    pdVar27 = (dword *)(*pcVar39)(plVar25,pdVar22,pdVar16,puVar26);
                  }
                }
                else {
                  if (bVar12) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  pdVar27 = (dword *)(*pcVar39)(plVar24,plVar25,pdVar22,pdVar16,lVar21);
                }
code_r0x01e71bd0:
                lVar33 = lVar33 + 1;
                if (lVar33 == lVar17) {
                  return pdVar27;
                }
              } while( true );
            }
          }
        }
        pcVar39 = (code *)&Core_UI2_UIManager__SetScreenVisible;
        auVar44 = func_0x00f78af4();
        unaff_x19 = pdVar16;
        unaff_x20 = pdVar22;
code_r0x02f88674:
        pdVar22 = auVar44._0_8_;
        *(dword **)((long)ppdVar11 + -0x30) = unaff_x22;
        *(dword **)((long)ppdVar11 + -0x28) = unaff_x21;
        *(dword **)((long)ppdVar11 + -0x20) = unaff_x20;
        *(dword **)((long)ppdVar11 + -0x18) = unaff_x19;
        *(dword ***)((long)ppdVar11 + -0x10) = ppdVar37;
        *(code **)((long)ppdVar11 + -8) = pcVar39;
        pdVar16 = pdVar22;
        if ((bRam0000000003ebc652 & 1) == 0) {
          pdVar16 = (dword *)func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc652 = 1;
        }
        lVar33 = *(long *)(pdVar22 + 0x1c);
        if (lVar33 != 0) {
          uVar14 = auVar44._8_4_;
          if (*(uint *)(lVar33 + 0x18) <= uVar14) {
            pdVar16 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar33 + 0x10) + (long)(int)uVar14 * 0x28 + 0x28) == 0) {
            return pdVar16;
          }
          lVar33 = *(long *)(pdVar22 + 0x1c);
          if (lVar33 != 0) {
            if (*(uint *)(lVar33 + 0x18) <= uVar14) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + (long)(int)uVar14 * 0x28 + 0x28);
            if ((lVar33 != 0) && (plVar25 = *(long **)(lVar33 + 0x28), plVar25 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pdVar27 = (dword *)(**(code **)(*plVar25 + 0x178))
                                           (plVar25,pdVar27,*(undefined8 *)(*plVar25 + 0x180));
              return pdVar27;
            }
          }
        }
        auVar40 = func_0x00f78af4();
        uVar23 = auVar40._0_8_;
        *(long *)((long)ppdVar11 + -0x50) = auVar44._8_8_;
        *(dword **)((long)ppdVar11 + -0x48) = pdVar27;
        *(undefined1 **)((long)ppdVar11 + -0x40) = (undefined1 *)((long)ppdVar11 + -0x10);
        *(undefined **)((long)ppdVar11 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
        *(undefined8 *)((long)ppdVar11 + -0x68) = 0;
        *(undefined8 *)((long)ppdVar11 + -0x70) = 0;
        *(undefined8 *)((long)ppdVar11 + -0x58) = 0;
        *(undefined8 *)((long)ppdVar11 + -0x60) = 0;
        pdVar27 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar23,auVar40._8_8_,
                                           (undefined1 *)((long)ppdVar11 + -0x70));
        if ((int)pdVar27 != 0) {
          /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar23,*(undefined8 *)((long)ppdVar11 + -0x60),
                          *(undefined8 *)((long)ppdVar11 + -0x58));
          *(undefined8 *)((long)ppdVar11 + -0x88) = *(undefined8 *)((long)ppdVar11 + -0x68);
          *(undefined8 *)((long)ppdVar11 + -0x90) = *(undefined8 *)((long)ppdVar11 + -0x70);
          *(undefined8 *)((long)ppdVar11 + -0x78) = *(undefined8 *)((long)ppdVar11 + -0x58);
          *(undefined8 *)((long)ppdVar11 + -0x80) = *(undefined8 *)((long)ppdVar11 + -0x60);
          pdVar27 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar23,(undefined1 *)((long)ppdVar11 + -0x90),1);
        }
        return pdVar27;
      }
    }
  }
  auVar41 = func_0x00f78af4();
  lVar17 = auVar41._8_8_;
  plVar25 = auVar41._0_8_;
  pdStack_60 = (dword *)0x3eb8000;
  uVar20 = 0x3eb8000;
  pdStack_58 = (dword *)param_3;
  uStack_50 = (undefined1 *)param_1;
  pdStack_48 = param_2;
  if ((bRam0000000003eb8329 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb8329 = 1;
  }
  uStack_68 = (code *)(ulong)(uint)uStack_68;
  if (plVar25[7] != 0) {
    uVar14 = *(uint *)(plVar25[7] + 0x18);
    uVar20 = (ulong)uVar14;
    pdVar27 = (dword *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(lVar17 + 0x18) + 0xc0) + 0x30))(plVar25);
    if ((int)uVar14 < 1) {
      if ((int)pdVar27 == 0) {
        return pdVar27;
      }
      lVar21 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar17 + 0x18) + 0xc0) + 0x10))
                         (plVar25);
      if ((lVar21 != 0) && (*(long *)(lVar21 + 0x68) != 0)) {
        pdVar27 = (dword *)/*ModalBehaviour$$get_IsShowing*/ func_0x014969fc(*(long *)(lVar21 + 0x68),0);
        if (((ulong)pdVar27 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar27 = (dword *)(*(code *)**(undefined8 **)
                                         (*(long *)(*(long *)(lVar17 + 0x18) + 0xc0) + 0x50))
                                       (plVar25);
          return pdVar27;
        }
        return pdVar27;
      }
    }
    else {
      if ((int)pdVar27 == 0) {
        return pdVar27;
      }
      pdVar27 = (dword *)(**(code **)(*plVar25 + 0x188))(plVar25,*(undefined8 *)(*plVar25 + 400));
      if ((int)pdVar27 == 0) {
        return pdVar27;
      }
      puVar26 = *(undefined8 **)(*(long *)(*(long *)(lVar17 + 0x18) + 0xc0) + 0x40);
      pdVar27 = (dword *)(*(code *)*puVar26)(plVar25,(long)&uStack_68 + 4);
      if ((int)pdVar27 == 0) {
        return pdVar27;
      }
      uVar20 = plVar25[7];
      if (uVar20 != 0) {
        lVar33 = (long)(int)uStack_68._4_4_;
        uVar18 = uVar20;
        if (uStack_68._4_4_ < *(uint *)(uVar20 + 0x18)) {
LAB_025dfa50:
          uVar23 = *(undefined8 *)(*(long *)(uVar20 + 0x10) + lVar33 * 8 + 0x20);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(uVar18,uStack_68._4_4_,uRam0000000003d3b350);
          pdVar27 = (dword *)(*(code *)**(undefined8 **)
                                         (*(long *)(*(long *)(lVar17 + 0x18) + 0xc0) + 0x48))
                                       (plVar25,uVar23);
          return pdVar27;
        }
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        uVar18 = plVar25[7];
        if (uVar18 != 0) goto LAB_025dfa50;
      }
    }
  }
  auVar40 = func_0x00f78af4();
  pcStack_78 = 
  Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___CanShowModal;
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
    apdStack_a8[1] = (dword *)lVar17;
    apdStack_a8[2] = (dword *)plVar25;
    apdStack_a8[3] = (dword *)&pdStack_80;
    pdVar27 = (dword *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(auVar40._8_8_ + 0x18) + 0xc0) + 0x30))();
    if ((int)pdVar27 == 0) {
      return pdVar27;
    }
    lVar17 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar40._8_8_ + 0x18) + 0xc0) + 0x10))
                       (auVar40._0_8_);
    auVar5._8_8_ = apdStack_a8[1];
    auVar5._0_8_ = apdStack_a8[2];
    auVar4._8_8_ = apdStack_a8[1];
    auVar4._0_8_ = apdStack_a8[2];
    auVar41 = auVar40;
    if ((lVar17 != 0) &&
       (plVar25 = *(long **)(lVar17 + 0x68), auVar4 = auVar5, plVar25 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x025dfb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pdVar27 = (dword *)(**(code **)(*plVar25 + 0x1a8))(plVar25,*(undefined8 *)(*plVar25 + 0x1b0));
      return pdVar27;
    }
  }
  apdStack_a8[1] = auVar4._8_8_;
  apdStack_a8[2] = auVar4._0_8_;
  auVar40 = func_0x00f78af4();
  plVar24 = auVar40._8_8_;
  plVar25 = auVar40._0_8_;
  apdStack_a8[0] =
       (dword *)
       Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___QueueModal;
  puVar28 = puVar26;
  lStack_d0 = lVar33;
  uStack_c8 = uVar20;
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
  if (plVar24 != (long *)0x0) {
    uVar23 = (**(code **)(*plVar24 + 0x178))(plVar24,*(undefined8 *)(*plVar24 + 0x180));
    puVar28 = (undefined8 *)0x0;
    uVar23 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar23);
    auVar41._8_8_ = pdStack_c0;
    auVar41._0_8_ = lStack_b8;
    if (plVar25 != (long *)0x0) {
      puVar28 = *(undefined8 **)(*(long *)(puVar26[3] + 0xc0) + 8);
      (*(code *)*puVar28)(plVar25,uVar23);
      auVar41._8_8_ = pdStack_c0;
      auVar41._0_8_ = lStack_b8;
      if (plVar25[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar25[7],plVar24,uRam0000000003d3b330);
        auVar41._8_8_ = pdStack_c0;
        auVar41._0_8_ = lStack_b8;
        puVar28 = (undefined8 *)plVar25[8];
        if ((puVar28 == (undefined8 *)0x0) || ((int)plVar24[2] <= *(int *)(puVar28 + 2))) {
LAB_025dfcb4:
          pdVar27 = (dword *)(*(code *)**(undefined8 **)(*(long *)(puVar26[3] + 0xc0) + 0x30))
                                       (plVar25);
          if (((ulong)pdVar27 & 1) != 0) {
            return pdVar27;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pdVar27 = (dword *)(**(code **)(*plVar25 + 0x1a8))
                                       (plVar25,*(undefined8 *)(*plVar25 + 0x1b0));
          return pdVar27;
        }
        if (plVar25[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar25[7],0,puVar28,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar26[3] + 0xc0) + 0x60))(plVar25);
          goto LAB_025dfcb4;
        }
      }
    }
  }
  pdStack_c0 = auVar41._8_8_;
  lStack_b8 = auVar41._0_8_;
  auVar40 = func_0x00f78af4();
  plVar25 = auVar40._8_8_;
  lVar33 = auVar40._0_8_;
  if ((plVar25 != (long *)0x0) &&
     (uVar23 = (**(code **)(*plVar25 + 0x178))(plVar25,*(undefined8 *)(*plVar25 + 0x180)),
     lVar33 != 0)) {
    uVar14 = (*(code *)**(undefined8 **)(*(long *)(puVar28[3] + 0xc0) + 0x70))(lVar33,uVar23);
    if ((uVar14 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar28[3] + 0xc0) + 0x78))(lVar33,plVar25);
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
  lVar33 = *(long *)(auVar40._0_8_ + 0x38);
  if (lVar33 != 0) {
    iVar15 = *(int *)(lVar33 + 0x18);
    if (iVar15 < 1) goto code_r0x025dfe48;
    uVar14 = 0;
    iVar13 = -0x80000000;
    uVar31 = 0;
    do {
      if (*(uint *)(lVar33 + 0x18) <= uVar14) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar33 = *(long *)(*(long *)(lVar33 + 0x10) + (long)(int)uVar14 * 8 + 0x20);
      if (lVar33 == 0) break;
      iVar1 = *(int *)(lVar33 + 0x10);
      uVar32 = uVar14;
      if (iVar1 <= iVar13) {
        uVar32 = uVar31;
      }
      if (iVar15 - 1U == uVar14) goto code_r0x025dfe4c;
      if (iVar1 <= iVar13) {
        iVar1 = iVar13;
      }
      lVar33 = *(long *)(auVar40._0_8_ + 0x38);
      uVar14 = uVar14 + 1;
      iVar13 = iVar1;
      uVar31 = uVar32;
    } while (lVar33 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar32 = 0;
code_r0x025dfe4c:
  *auVar40._8_8_ = uVar32;
  return (dword *)(ulong)(0 < iVar15);
}



// ============================================================
// RVA: 0x25df968 | Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>.Update
// ============================================================

ulong Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___Update
                (long *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  undefined1 auVar15 [16];
  uint uStack_34;
  
  if ((bRam0000000003eb8329 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb8329 = 1;
  }
  uStack_34 = 0;
  if (param_1[7] != 0) {
    iVar8 = *(int *)(param_1[7] + 0x18);
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x30))
                      (param_1);
    if (iVar8 < 1) {
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      lVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x10))
                        (param_1);
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
        uVar3 = /*ModalBehaviour$$get_IsShowing*/ func_0x014969fc(*(long *)(lVar9 + 0x68),0);
        if ((uVar3 & 1) != 0) {
          return uVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x025dfafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x50))
                          (param_1);
        return uVar3;
      }
    }
    else {
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar3 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      param_3 = *(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x40);
      uVar3 = (*(code *)*param_3)(param_1,&uStack_34);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      lVar9 = param_1[7];
      if (lVar9 != 0) {
        lVar13 = (long)(int)uStack_34;
        lVar4 = lVar9;
        if (uStack_34 < *(uint *)(lVar9 + 0x18)) {
LAB_025dfa50:
          uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar13 * 8 + 0x20);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar4,uStack_34,uRam0000000003d3b350);
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x48))
                            (param_1,uVar10);
          return uVar3;
        }
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar4 = param_1[7];
        if (lVar4 != 0) goto LAB_025dfa50;
      }
    }
  }
  auVar15 = func_0x00f78af4();
  if (auVar15._0_8_ != 0) {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar15._8_8_ + 0x18) + 0xc0) + 0x58))()
    ;
    return (ulong)(uVar2 ^ 1);
  }
  auVar15 = func_0x00f78af4();
  if (auVar15._0_8_ != 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar15._8_8_ + 0x18) + 0xc0) + 0x30))()
    ;
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    lVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar15._8_8_ + 0x18) + 0xc0) + 0x10))
                      (auVar15._0_8_);
    if ((lVar9 != 0) && (plVar5 = *(long **)(lVar9 + 0x68), plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x025dfb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      return uVar3;
    }
  }
  auVar15 = func_0x00f78af4();
  plVar6 = auVar15._8_8_;
  plVar5 = auVar15._0_8_;
  puVar7 = param_3;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar6 != (long *)0x0) {
    uVar10 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
    puVar7 = (undefined8 *)0x0;
    uVar10 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar10);
    if (plVar5 != (long *)0x0) {
      puVar7 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 8);
      (*(code *)*puVar7)(plVar5,uVar10);
      if (plVar5[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar5[7],plVar6,uRam0000000003d3b330);
        puVar7 = (undefined8 *)plVar5[8];
        if ((puVar7 == (undefined8 *)0x0) || ((int)plVar6[2] <= *(int *)(puVar7 + 2))) {
LAB_025dfcb4:
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x30))(plVar5);
          if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
            return uVar3;
          }
          return uVar3;
        }
        if (plVar5[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar5[7],0,puVar7,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x60))(plVar5);
          goto LAB_025dfcb4;
        }
      }
    }
  }
  auVar15 = func_0x00f78af4();
  plVar5 = auVar15._8_8_;
  lVar9 = auVar15._0_8_;
  if ((plVar5 != (long *)0x0) &&
     (uVar10 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)), lVar9 != 0))
  {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x70))(lVar9,uVar10);
    if ((uVar2 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x78))(lVar9,plVar5);
    }
    return (ulong)(uVar2 ^ 1);
  }
  auVar15 = func_0x00f78af4();
  iVar8 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar9 = *(long *)(auVar15._0_8_ + 0x38);
  if (lVar9 != 0) {
    iVar8 = *(int *)(lVar9 + 0x18);
    if (iVar8 < 1) goto code_r0x025dfe48;
    uVar2 = 0;
    iVar14 = -0x80000000;
    uVar11 = 0;
    do {
      if (*(uint *)(lVar9 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar9 == 0) break;
      iVar1 = *(int *)(lVar9 + 0x10);
      uVar12 = uVar2;
      if (iVar1 <= iVar14) {
        uVar12 = uVar11;
      }
      if (iVar8 - 1U == uVar2) goto code_r0x025dfe4c;
      if (iVar1 <= iVar14) {
        iVar1 = iVar14;
      }
      lVar9 = *(long *)(auVar15._0_8_ + 0x38);
      uVar2 = uVar2 + 1;
      iVar14 = iVar1;
      uVar11 = uVar12;
    } while (lVar9 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar12 = 0;
code_r0x025dfe4c:
  *auVar15._8_8_ = uVar12;
  return (ulong)(0 < iVar8);
}



// ============================================================
// RVA: 0x25dfb04 | Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>.CanShowModal
// ============================================================

ulong Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___CanShowModal
                (long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  
  if (param_1 != 0) {
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x58))();
    return (ulong)(uVar2 ^ 1);
  }
  auVar13 = func_0x00f78af4();
  if (auVar13._0_8_ != 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar13._8_8_ + 0x18) + 0xc0) + 0x30))()
    ;
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    lVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar13._8_8_ + 0x18) + 0xc0) + 0x10))
                      (auVar13._0_8_);
    if ((lVar4 != 0) && (plVar5 = *(long **)(lVar4 + 0x68), plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x025dfb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      return uVar3;
    }
  }
  auVar13 = func_0x00f78af4();
  plVar7 = auVar13._8_8_;
  plVar5 = auVar13._0_8_;
  puVar8 = param_3;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar7 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
    puVar8 = (undefined8 *)0x0;
    uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar6);
    if (plVar5 != (long *)0x0) {
      puVar8 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 8);
      (*(code *)*puVar8)(plVar5,uVar6);
      if (plVar5[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar5[7],plVar7,uRam0000000003d3b330);
        puVar8 = (undefined8 *)plVar5[8];
        if ((puVar8 == (undefined8 *)0x0) || ((int)plVar7[2] <= *(int *)(puVar8 + 2))) {
LAB_025dfcb4:
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x30))(plVar5);
          if ((uVar3 & 1) != 0) {
            return uVar3;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
          return uVar3;
        }
        if (plVar5[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar5[7],0,puVar8,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x60))(plVar5);
          goto LAB_025dfcb4;
        }
      }
    }
  }
  auVar13 = func_0x00f78af4();
  plVar5 = auVar13._8_8_;
  lVar4 = auVar13._0_8_;
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    if (lVar4 != 0) {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x70))(lVar4,uVar6);
      if ((uVar2 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x78))(lVar4,plVar5);
      }
      return (ulong)(uVar2 ^ 1);
    }
  }
  auVar13 = func_0x00f78af4();
  iVar9 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar4 = *(long *)(auVar13._0_8_ + 0x38);
  if (lVar4 != 0) {
    iVar9 = *(int *)(lVar4 + 0x18);
    if (iVar9 < 1) goto code_r0x025dfe48;
    uVar2 = 0;
    iVar12 = -0x80000000;
    uVar10 = 0;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar4 == 0) break;
      iVar1 = *(int *)(lVar4 + 0x10);
      uVar11 = uVar2;
      if (iVar1 <= iVar12) {
        uVar11 = uVar10;
      }
      if (iVar9 - 1U == uVar2) goto code_r0x025dfe4c;
      if (iVar1 <= iVar12) {
        iVar1 = iVar12;
      }
      lVar4 = *(long *)(auVar13._0_8_ + 0x38);
      uVar2 = uVar2 + 1;
      iVar12 = iVar1;
      uVar10 = uVar11;
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar11 = 0;
code_r0x025dfe4c:
  *auVar13._8_8_ = uVar11;
  return (ulong)(0 < iVar9);
}



// ============================================================
// RVA: 0x25dfb34 | Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>.HideCurrentModal
// ============================================================

ulong Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___HideCurrentModal
                (long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  
  if (param_1 != 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x30))();
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    lVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x10))
                      (param_1);
    if ((lVar4 != 0) && (plVar5 = *(long **)(lVar4 + 0x68), plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x025dfb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      return uVar3;
    }
  }
  auVar13 = func_0x00f78af4();
  plVar7 = auVar13._8_8_;
  plVar5 = auVar13._0_8_;
  puVar8 = param_3;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar7 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
    puVar8 = (undefined8 *)0x0;
    uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar6);
    if (plVar5 != (long *)0x0) {
      puVar8 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 8);
      (*(code *)*puVar8)(plVar5,uVar6);
      if (plVar5[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar5[7],plVar7,uRam0000000003d3b330);
        puVar8 = (undefined8 *)plVar5[8];
        if ((puVar8 == (undefined8 *)0x0) || ((int)plVar7[2] <= *(int *)(puVar8 + 2))) {
LAB_025dfcb4:
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x30))(plVar5);
          if ((uVar3 & 1) != 0) {
            return uVar3;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
          return uVar3;
        }
        if (plVar5[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar5[7],0,puVar8,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x60))(plVar5);
          goto LAB_025dfcb4;
        }
      }
    }
  }
  auVar13 = func_0x00f78af4();
  plVar5 = auVar13._8_8_;
  lVar4 = auVar13._0_8_;
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    if (lVar4 != 0) {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x70))(lVar4,uVar6);
      if ((uVar2 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x78))(lVar4,plVar5);
      }
      return (ulong)(uVar2 ^ 1);
    }
  }
  auVar13 = func_0x00f78af4();
  iVar9 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar4 = *(long *)(auVar13._0_8_ + 0x38);
  if (lVar4 != 0) {
    iVar9 = *(int *)(lVar4 + 0x18);
    if (iVar9 < 1) goto code_r0x025dfe48;
    uVar2 = 0;
    iVar12 = -0x80000000;
    uVar10 = 0;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar4 == 0) break;
      iVar1 = *(int *)(lVar4 + 0x10);
      uVar11 = uVar2;
      if (iVar1 <= iVar12) {
        uVar11 = uVar10;
      }
      if (iVar9 - 1U == uVar2) goto code_r0x025dfe4c;
      if (iVar1 <= iVar12) {
        iVar1 = iVar12;
      }
      lVar4 = *(long *)(auVar13._0_8_ + 0x38);
      uVar2 = uVar2 + 1;
      iVar12 = iVar1;
      uVar10 = uVar11;
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar11 = 0;
code_r0x025dfe4c:
  *auVar13._8_8_ = uVar11;
  return (ulong)(0 < iVar9);
}



// ============================================================
// RVA: 0x25dfbac | Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>.QueueModal
// ============================================================

ulong Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour___QueueModal
                (long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  puVar6 = param_3;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    puVar6 = (undefined8 *)0x0;
    uVar3 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar3);
    if (param_1 != (long *)0x0) {
      puVar6 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 8);
      (*(code *)*puVar6)(param_1,uVar3);
      if (param_1[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(param_1[7],param_2,uRam0000000003d3b330);
        puVar6 = (undefined8 *)param_1[8];
        if ((puVar6 == (undefined8 *)0x0) || ((int)param_2[2] <= *(int *)(puVar6 + 2))) {
LAB_025dfcb4:
          uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x30))(param_1);
          if ((uVar4 & 1) != 0) {
            return uVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
          return uVar4;
        }
        if (param_1[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(param_1[7],0,puVar6,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x60))(param_1);
          goto LAB_025dfcb4;
        }
      }
    }
  }
  auVar12 = func_0x00f78af4();
  plVar5 = auVar12._8_8_;
  lVar11 = auVar12._0_8_;
  if (plVar5 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    if (lVar11 != 0) {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x70))(lVar11,uVar3);
      if ((uVar2 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(puVar6[3] + 0xc0) + 0x78))(lVar11,plVar5);
      }
      return (ulong)(uVar2 ^ 1);
    }
  }
  auVar12 = func_0x00f78af4();
  iVar7 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar11 = *(long *)(auVar12._0_8_ + 0x38);
  if (lVar11 != 0) {
    iVar7 = *(int *)(lVar11 + 0x18);
    if (iVar7 < 1) goto code_r0x025dfe48;
    uVar2 = 0;
    iVar10 = -0x80000000;
    uVar8 = 0;
    do {
      if (*(uint *)(lVar11 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar11 == 0) break;
      iVar1 = *(int *)(lVar11 + 0x10);
      uVar9 = uVar2;
      if (iVar1 <= iVar10) {
        uVar9 = uVar8;
      }
      if (iVar7 - 1U == uVar2) goto code_r0x025dfe4c;
      if (iVar1 <= iVar10) {
        iVar1 = iVar10;
      }
      lVar11 = *(long *)(auVar12._0_8_ + 0x38);
      uVar2 = uVar2 + 1;
      iVar10 = iVar1;
      uVar8 = uVar9;
    } while (lVar11 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar9 = 0;
code_r0x025dfe4c:
  *auVar12._8_8_ = uVar9;
  return (ulong)(0 < iVar7);
}



// ============================================================
// RVA: 0x25dfe70 | Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>.IsModalQueuedOrShowing
// ============================================================

/* WARNING: Possible PIC construction at 0x025e05e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x025e05e8) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___IsModalQueuedOrShowing
                (long param_1,long param_2,long *param_3)

{
  uint uVar1;
  ushort uVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  int extraout_w1;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  ulong uVar19;
  code *pcVar20;
  long lVar21;
  ulong unaff_x24;
  ulong uVar22;
  undefined1 *puVar23;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 *******pppppppuVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 *******pppppppuStack_130;
  code *pcStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 *******pppppppuStack_f0;
  code *pcStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  long alStack_a8 [2];
  int aiStack_98 [4];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 *****pppppuStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb832c & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    bRam0000000003eb832c = 1;
  }
  if (param_1 != 0) {
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x58))
                      (param_1);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(param_1 + 0x38) + 0x18));
    }
  }
  auVar25 = func_0x00f78af4();
  uVar17 = auVar25._8_8_;
  lVar16 = auVar25._0_8_;
  pcStack_38 = 
  Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___IsModalQueuedOrShowing;
  lVar21 = 0x3eb8000;
  uVar6 = 0x3d6eb10;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb832d & 1) == 0) {
    func_0x00f78a20(0x3d32a88);
    func_0x00f78a20(0x3d32a90);
    func_0x00f78a20(0x3d1c770);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3b340);
    func_0x00f78a20(0x3d6eb10);
    bRam0000000003eb832d = 1;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  aiStack_98[2] = 0;
  puVar13 = (undefined8 *)0x0;
  uVar7 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('IsModalQueuedOrShowing ')*/ uRam0000000003d6eb10,uVar17);
  if (lVar16 != 0) {
    puVar13 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 8);
    (*(code *)*puVar13)(lVar16,uVar7);
    plVar8 = *(long **)(lVar16 + 0x40);
    if (plVar8 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
      puVar13 = (undefined8 *)0x0;
      uVar9 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar7,uVar17);
      if ((uVar9 & 1) != 0) {
        return 1;
      }
    }
    if (*(long *)(lVar16 + 0x38) != 0) {
      param_3 = (long *)0x3d1c770;
      plVar8 = (long *)0x3d220f0;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_88,*(long *)(lVar16 + 0x38),uRam0000000003d3b340);
      while( true ) {
        uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_88,uRam0000000003d32a88);
        if ((uVar6 & 1) == 0) {
          unaff_x24 = 0;
          lVar21 = 0;
          lVar16 = 0;
          uVar6 = 0;
          aiStack_98[0] = 0x6d;
          aiStack_98[2] = 1;
          goto code_r0x025e0090;
        }
        if (plStack_78 == (long *)0x0) break;
        uVar7 = (**(code **)(*plStack_78 + 0x178))(plStack_78,*(undefined8 *)(*plStack_78 + 0x180));
        puVar13 = (undefined8 *)0x0;
        uVar6 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar7,uVar17);
        if ((uVar6 & 1) == 0) {
          unaff_x24 = 0;
          lVar21 = 0;
          lVar16 = 0;
          uVar6 = 1;
          aiStack_98[0] = 0x6f;
          aiStack_98[2] = 1;
          goto code_r0x025e0090;
        }
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x25e013c);
      (*pcVar20)();
    }
  }
  func_0x00f78af4();
  while( true ) {
    plVar8 = auVar25._0_8_;
    func_0x00f78ac0(auVar25._8_8_,0);
    if (extraout_w1 != 1) break;
    plVar11 = (long *)___cxa_begin_catch();
    lVar16 = *plVar11;
    ___cxa_end_catch();
    uVar6 = 0;
    lVar21 = -1;
    unaff_x24 = 1;
code_r0x025e0090:
    auVar25._8_8_ = lVar16;
    auVar25._0_8_ = plVar8;
    alStack_a8[0] = *param_3;
    uVar9 = (ulong)*(ushort *)(alStack_a8[0] + 0x12a);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(alStack_a8[0] + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar8) {
          puVar10 = (undefined8 *)(alStack_a8[0] + (long)*piVar15 * 0x10 + 0x138);
          goto code_r0x025e00e0;
        }
        piVar15 = piVar15 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar13 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)func_0x00fac1f0(alStack_a8);
code_r0x025e00e0:
    (*(code *)*puVar10)(aiStack_98,puVar10[1]);
    if (lVar16 == 0) {
      if ((int)unaff_x24 == 0) {
        uVar18 = (uint)uVar6;
        if (aiStack_98[lVar21] != 0x6f) {
          uVar18 = 0;
        }
        uVar6 = (ulong)uVar18;
      }
      else {
        uVar6 = 0;
      }
      return uVar6;
    }
  }
  auVar26 = __Unwind_Resume();
  lVar14 = auVar26._8_8_;
  lVar16 = auVar26._0_8_;
  puStack_b8 = &Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___IsModalShowing;
  uVar9 = 0x3eb8000;
  uStack_e0 = uVar6;
  plStack_d8 = param_3;
  ppppppuStack_c0 = &pppppuStack_40;
  auStack_d0 = auVar25;
  if ((bRam0000000003eb832e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb832e = 1;
  }
  if (lVar16 != 0) {
    iVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar14 + 0x18) + 0xc0) + 0x30))(lVar16);
    if (iVar4 == 0) {
      return 0;
    }
    uVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar14 + 0x18) + 0xc0) + 0x10))(lVar16);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar13 = (undefined8 *)0x0;
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0);
    if (iVar4 == 0) {
      return 0;
    }
    lVar12 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar14 + 0x18) + 0xc0) + 0x10))(lVar16)
    ;
    uVar6 = 0x3d23990;
    if (lVar12 != 0) {
      uVar9 = *(ulong *)(lVar12 + 0x68);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar13 = (undefined8 *)0x0;
      iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0);
      if (iVar4 == 0) {
        return 0;
      }
      lVar12 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar14 + 0x18) + 0xc0) + 0x10))
                         (lVar16);
      if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x68), uVar6 = 0x3d23990, lVar12 != 0)) {
        if ((bRam0000000003eb49c9 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003eb49c9 = 1;
        }
        uVar17 = *(undefined8 *)(lVar12 + 0x38);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
        if (iVar4 == 0) {
          return 0;
        }
        if (*(long *)(lVar12 + 0x38) != 0) {
          uVar17 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(lVar12 + 0x38),0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
          if (iVar4 == 0) {
            return 0;
          }
          if (*(long *)(lVar12 + 0x38) != 0) {
            lVar16 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(lVar12 + 0x38),0);
            if (lVar16 != 0) {
              if (pcRam0000000003ebf4d0 == (code *)0x0) {
                pcRam0000000003ebf4d0 =
                     (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeInHierarchy()");
              }
                    /* WARNING: Could not recover jumptable at 0x0322efe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (*pcRam0000000003ebf4d0)(lVar16);
              return uVar6;
            }
          }
        }
        lVar16 = func_0x00f78af4();
        return *(ulong *)(lVar16 + 0x30);
      }
    }
  }
  auVar25 = func_0x00f78af4();
  uVar17 = auVar25._8_8_;
  lVar12 = auVar25._0_8_;
  pcStack_e8 = 
  Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DismissAndRemoveQueued;
  uStack_120 = unaff_x24;
  lStack_118 = lVar21;
  uStack_110 = uVar6;
  uStack_108 = uVar9;
  pppppppuStack_f0 = &ppppppuStack_c0;
  if ((bRam0000000003eb832f & 1) == 0) {
    lStack_100 = lVar14;
    lStack_f8 = lVar16;
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd60);
    auVar26._8_8_ = lStack_100;
    auVar26._0_8_ = lStack_f8;
    bRam0000000003eb832f = 1;
  }
  lStack_100 = auVar26._8_8_;
  lStack_f8 = auVar26._0_8_;
  puVar10 = (undefined8 *)0x0;
  uVar7 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('DismissAndRemoveQueued ')*/ uRam0000000003d6bd60,uVar17);
  if (lVar12 != 0) {
    puVar10 = *(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 8);
    (*(code *)*puVar10)(lVar12,uVar7);
    plVar8 = *(long **)(lVar12 + 0x40);
    uVar6 = 0;
    if (plVar8 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
      puVar10 = (undefined8 *)0x0;
      uVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar7,uVar17);
      if ((int)uVar6 != 0) {
        lVar16 = (*(code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x10))(lVar12);
        if ((lVar16 == 0) || (*(long *)(lVar16 + 0x68) == 0)) goto LAB_025e047c;
        puVar10 = (undefined8 *)0x0;
        uVar6 = /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar16 + 0x68),1);
        *(undefined8 *)(lVar12 + 0x40) = 0;
      }
    }
    lVar16 = *(long *)(lVar12 + 0x38);
    if (lVar16 != 0) {
      iVar4 = *(int *)(lVar16 + 0x18);
      if (iVar4 < 1) {
        return uVar6;
      }
      uVar18 = 0;
      do {
        if (*(uint *)(lVar16 + 0x18) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar8 = *(long **)(*(long *)(lVar16 + 0x10) + (long)(int)uVar18 * 8 + 0x20);
        if (plVar8 == (long *)0x0) break;
        uVar7 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        puVar10 = (undefined8 *)0x0;
        uVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar7,uVar17);
        if ((int)uVar6 != 0) {
          if (*(long *)(lVar12 + 0x38) != 0) {
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar12 + 0x38),uVar18,uRam0000000003d3b350);
            auVar27._8_8_ = lStack_f8;
            auVar27._0_8_ = lStack_100;
            uVar6 = plVar8[3];
            if (uVar6 == 0) {
              return 0;
            }
            puVar3 = &uStack_e0;
            uVar9 = uStack_108;
            uVar19 = uStack_110;
            lVar16 = lStack_118;
            uVar22 = uStack_120;
            pppppppuVar24 = pppppppuStack_f0;
            pcVar20 = pcStack_e8;
            goto code_r0x03277c60;
          }
          break;
        }
        if (iVar4 - 1U == uVar18) {
          return uVar6;
        }
        lVar16 = *(long *)(lVar12 + 0x38);
        uVar18 = uVar18 + 1;
      } while (lVar16 != 0);
    }
  }
LAB_025e047c:
  auVar27 = func_0x00f78af4();
  lVar16 = auVar27._0_8_;
  puVar3 = (ulong *)&stack0xfffffffffffffe90;
  pcStack_128 = 
  Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___RemoveAllQueuedAndShowing;
  pppppppuStack_130 = &pppppppuStack_f0;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar16 != 0) {
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 8))
                      (lVar16,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar16 + 0x40) != 0) {
      lVar21 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x10))(lVar16);
      if ((lVar21 == 0) || (*(long *)(lVar21 + 0x68) == 0)) goto LAB_025e05fc;
      uVar6 = /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar21 + 0x68),auVar27._8_8_,0);
      *(undefined8 *)(lVar16 + 0x40) = 0;
    }
    lVar21 = *(long *)(lVar16 + 0x38);
    if (lVar21 != 0) {
      if (*(int *)(lVar21 + 0x18) + -1 < 0) {
        return uVar6;
      }
      unaff_x25 = 0;
      uVar18 = *(int *)(lVar21 + 0x18) - 2;
      do {
        uVar1 = uVar18 + 1;
        if (uVar1 < *(uint *)(lVar21 + 0x18)) {
          lVar12 = *(long *)(lVar21 + 0x10) + (ulong)uVar1 * 8;
          lVar14 = lVar21;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar14 = *(long *)(lVar16 + 0x38);
          if (lVar14 == 0) break;
          lVar12 = *(long *)(lVar21 + 0x10) + (ulong)uVar1 * 8;
        }
        unaff_x26 = *(long *)(lVar12 + 0x20);
        uVar9 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar14,(ulong)uVar1,uRam0000000003d3b350);
        if (auVar27._8_4_ != 0) {
          if (unaff_x26 == 0) break;
          uVar6 = *(ulong *)(unaff_x26 + 0x18);
          uVar9 = 0;
          if (uVar6 != 0) {
            if (uVar6 != 0) {
              uVar9 = uVar6;
              uVar19 = (ulong)uVar1;
              lVar16 = 0x3d3b350;
              uVar22 = (ulong)uVar18;
              pppppppuVar24 = &pppppppuStack_130;
              pcVar20 = (code *)&UNK_025e05e8;
code_r0x03277c60:
              uVar17 = 0;
              *(long *)((long)puVar3 + -0x50) = unaff_x26;
              *(undefined8 *)((long)puVar3 + -0x48) = unaff_x25;
              *(ulong *)((long)puVar3 + -0x40) = uVar22;
              *(long *)((long)puVar3 + -0x38) = lVar16;
              *(ulong *)((long)puVar3 + -0x30) = uVar19;
              *(ulong *)((long)puVar3 + -0x28) = uVar9;
              *(undefined1 (*) [16])((long)puVar3 + -0x20) = auVar27;
              *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar24;
              *(code **)((long)puVar3 + -8) = pcVar20;
              *(ulong *)((long)puVar3 + -0x58) = uVar6;
              lVar16 = *(long *)(uVar6 + 0x68);
              if (lVar16 == 0) {
                puVar23 = (undefined1 *)((long)puVar3 + -0x58);
                lVar21 = 1;
              }
              else {
                lVar21 = *(long *)(lVar16 + 0x18);
                if (lVar21 == 0) {
                  return uVar6;
                }
                puVar23 = (undefined1 *)(lVar16 + 0x20);
              }
              lVar16 = 0;
              do {
                lVar14 = *(long *)(puVar23 + lVar16 * 8);
                pcVar20 = *(code **)(lVar14 + 0x10);
                plVar8 = *(long **)(lVar14 + 0x20);
                lVar14 = *(long *)(lVar14 + 0x28);
                if (*(short *)(lVar14 + 0x48) == -1) {
                  func_0x00f78ad8(lVar14,uVar17);
                }
                iVar4 = func_0x00f78a4c(lVar14);
                if (iVar4 == 0) {
                  if ((((plVar8 == (long *)0x0) || (*(short *)(lVar14 + 0x48) == -1)) ||
                      ((*(byte *)(*plVar8 + 0x115) & 1) != 0)) || (*(long *)(uVar6 + 0x18) == 0))
                  goto code_r0x03277d68;
                  iVar4 = func_0x00f78a44(lVar14);
                  iVar5 = func_0x00f78ec0(lVar14);
                  if (iVar4 == 0) {
                    uVar2 = *(ushort *)(lVar14 + 0x48);
                    if (iVar5 == 0) {
                      lVar14 = *plVar8 + (ulong)uVar2 * 0x10;
                      auVar25 = (**(code **)(lVar14 + 0x138))
                                          (plVar8,*(undefined8 *)(lVar14 + 0x140));
                      goto code_r0x03277d74;
                    }
                    lVar14 = func_0x00f78a48(lVar14);
                    lVar12 = *plVar8;
                    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
                    if (uVar9 != 0) {
                      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == lVar14) {
                          puVar13 = (undefined8 *)
                                    (lVar12 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                          goto code_r0x03277e38;
                        }
                        piVar15 = piVar15 + 4;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                    puVar13 = (undefined8 *)func_0x00fac1f0(plVar8,lVar14,(ulong)uVar2);
code_r0x03277e38:
                    pcVar20 = (code *)*puVar13;
                    puVar13 = (undefined8 *)puVar13[1];
                  }
                  else {
                    if (iVar5 == 0) {
                      uVar17 = *(undefined8 *)
                                (*plVar8 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar12 = *plVar8;
                      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
                      if (uVar9 != 0) {
                        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == *(long *)(lVar14 + 0x18)) {
                            lVar12 = lVar12 + (long)(int)(*piVar15 +
                                                         (uint)*(ushort *)(lVar14 + 0x48)) * 0x10 +
                                     0x138;
                            goto code_r0x03277e10;
                          }
                          piVar15 = piVar15 + 4;
                          uVar9 = uVar9 - 1;
                        } while (uVar9 != 0);
                      }
                      lVar12 = func_0x00fac1f0(plVar8);
code_r0x03277e10:
                      uVar17 = *(undefined8 *)(lVar12 + 8);
                    }
                    puVar13 = (undefined8 *)func_0x00f78acc(uVar17,lVar14);
                    pcVar20 = (code *)*puVar13;
                  }
                  auVar25 = (*pcVar20)(plVar8,puVar13);
                }
                else if (*(char *)(lVar14 + 0x4a) == '\0') {
                  auVar25 = (*pcVar20)(lVar14);
                }
                else {
code_r0x03277d68:
                  auVar25 = (*pcVar20)(plVar8,lVar14);
                }
code_r0x03277d74:
                uVar17 = auVar25._8_8_;
                lVar16 = lVar16 + 1;
                if (lVar16 == lVar21) {
                  return auVar25._0_8_;
                }
              } while( true );
            }
            break;
          }
        }
        if ((int)uVar18 < 0) {
          return uVar9;
        }
        lVar21 = *(long *)(lVar16 + 0x38);
        uVar18 = uVar18 - 1;
      } while (lVar21 != 0);
    }
  }
LAB_025e05fc:
  uVar6 = func_0x00f78af4();
  return uVar6;
}



// ============================================================
// RVA: 0x25e0180 | Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>.IsModalShowing
// ============================================================

/* WARNING: Possible PIC construction at 0x025e05e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x025e05e8) */

long Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___IsModalShowing
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  ulong unaff_x22;
  long lVar17;
  code *pcVar18;
  undefined8 unaff_x23;
  ulong unaff_x24;
  undefined1 *puVar19;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 *******pppppppuVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 ******ppppppuStack_80;
  code *pcStack_78;
  undefined8 ******ppppppuStack_40;
  code *pcStack_38;
  
  auVar22._8_8_ = param_1;
  auVar22._0_8_ = param_2;
  lVar16 = 0x3eb8000;
  if ((bRam0000000003eb832e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb832e = 1;
  }
  if (param_1 != 0) {
    iVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x30))
                      (param_1);
    if (iVar4 == 0) {
      return 0;
    }
    lVar16 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x10))
                       (param_1);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = 0;
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar16,0);
    if (iVar4 == 0) {
      return 0;
    }
    lVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x10))
                      (param_1);
    unaff_x22 = 0x3d23990;
    if (lVar6 != 0) {
      lVar16 = *(long *)(lVar6 + 0x68);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = 0;
      iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar16,0);
      if (iVar4 == 0) {
        return 0;
      }
      lVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x10))
                        (param_1);
      if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x68), unaff_x22 = 0x3d23990, lVar6 != 0)) {
        if ((bRam0000000003eb49c9 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003eb49c9 = 1;
        }
        uVar14 = *(undefined8 *)(lVar6 + 0x38);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
        if (iVar4 == 0) {
          return 0;
        }
        if (*(long *)(lVar6 + 0x38) != 0) {
          uVar14 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(lVar6 + 0x38),0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
          if (iVar4 == 0) {
            return 0;
          }
          if ((*(long *)(lVar6 + 0x38) != 0) &&
             (lVar16 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(lVar6 + 0x38),0), lVar16 != 0)) {
            if (pcRam0000000003ebf4d0 == (code *)0x0) {
              pcRam0000000003ebf4d0 =
                   (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeInHierarchy()");
            }
                    /* WARNING: Could not recover jumptable at 0x0322efe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar16 = (*pcRam0000000003ebf4d0)(lVar16);
            return lVar16;
          }
        }
        lVar16 = func_0x00f78af4();
        return *(long *)(lVar16 + 0x30);
      }
    }
  }
  auVar21 = func_0x00f78af4();
  uVar14 = auVar21._8_8_;
  lVar6 = auVar21._0_8_;
  pcStack_38 = 
  Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___DismissAndRemoveQueued;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb832f & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd60);
    bRam0000000003eb832f = 1;
  }
  puVar10 = (undefined8 *)0x0;
  uVar7 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('DismissAndRemoveQueued ')*/ uRam0000000003d6bd60,uVar14);
  if (lVar6 != 0) {
    puVar10 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 8);
    (*(code *)*puVar10)(lVar6,uVar7);
    plVar8 = *(long **)(lVar6 + 0x40);
    lVar9 = 0;
    if (plVar8 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
      puVar10 = (undefined8 *)0x0;
      lVar9 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar7,uVar14);
      if ((int)lVar9 != 0) {
        lVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x10))
                          (lVar6);
        if ((lVar9 == 0) || (*(long *)(lVar9 + 0x68) == 0)) goto LAB_025e047c;
        puVar10 = (undefined8 *)0x0;
        lVar9 = /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar9 + 0x68),1);
        *(undefined8 *)(lVar6 + 0x40) = 0;
      }
    }
    lVar17 = *(long *)(lVar6 + 0x38);
    if (lVar17 != 0) {
      iVar4 = *(int *)(lVar17 + 0x18);
      if (iVar4 < 1) {
        return lVar9;
      }
      uVar15 = 0;
      do {
        if (*(uint *)(lVar17 + 0x18) <= uVar15) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar8 = *(long **)(*(long *)(lVar17 + 0x10) + (long)(int)uVar15 * 8 + 0x20);
        if (plVar8 == (long *)0x0) break;
        uVar7 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        puVar10 = (undefined8 *)0x0;
        lVar9 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar7,uVar14);
        if ((int)lVar9 != 0) {
          if (*(long *)(lVar6 + 0x38) != 0) {
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar6 + 0x38),uVar15,uRam0000000003d3b350);
            lVar6 = plVar8[3];
            if (lVar6 == 0) {
              return 0;
            }
            puVar3 = &stack0xffffffffffffffd0;
            pppppppuVar20 = (undefined8 *******)ppppppuStack_40;
            pcVar18 = pcStack_38;
            goto code_r0x03277c60;
          }
          break;
        }
        if (iVar4 - 1U == uVar15) {
          return lVar9;
        }
        lVar17 = *(long *)(lVar6 + 0x38);
        uVar15 = uVar15 + 1;
      } while (lVar17 != 0);
    }
  }
LAB_025e047c:
  auVar22 = func_0x00f78af4();
  lVar16 = auVar22._0_8_;
  puVar3 = &stack0xffffffffffffff40;
  pcStack_78 = 
  Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___RemoveAllQueuedAndShowing;
  ppppppuStack_80 = &ppppppuStack_40;
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (lVar16 != 0) {
    lVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 8))
                      (lVar16,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(lVar16 + 0x40) != 0) {
      lVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x10))(lVar16);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) goto LAB_025e05fc;
      lVar6 = /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar6 + 0x68),auVar22._8_8_,0);
      *(undefined8 *)(lVar16 + 0x40) = 0;
    }
    lVar9 = *(long *)(lVar16 + 0x38);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) + -1 < 0) {
        return lVar6;
      }
      unaff_x25 = 0;
      unaff_x23 = 0x3d3b350;
      uVar15 = *(int *)(lVar9 + 0x18) - 2;
      do {
        unaff_x24 = (ulong)uVar15;
        uVar1 = uVar15 + 1;
        unaff_x22 = (ulong)uVar1;
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          lVar17 = *(long *)(lVar9 + 0x10) + (ulong)uVar1 * 8;
          lVar6 = lVar9;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar6 = *(long *)(lVar16 + 0x38);
          if (lVar6 == 0) break;
          lVar17 = *(long *)(lVar9 + 0x10) + (ulong)uVar1 * 8;
        }
        unaff_x26 = *(long *)(lVar17 + 0x20);
        lVar9 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar6,unaff_x22,uRam0000000003d3b350);
        if (auVar22._8_4_ != 0) {
          if (unaff_x26 == 0) break;
          lVar6 = *(long *)(unaff_x26 + 0x18);
          lVar9 = 0;
          if (lVar6 != 0) {
            if (lVar6 != 0) {
              lVar16 = lVar6;
              pppppppuVar20 = &ppppppuStack_80;
              pcVar18 = (code *)&UNK_025e05e8;
code_r0x03277c60:
              uVar14 = 0;
              *(long *)(puVar3 + -0x50) = unaff_x26;
              *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
              *(ulong *)(puVar3 + -0x40) = unaff_x24;
              *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
              *(ulong *)(puVar3 + -0x30) = unaff_x22;
              *(long *)(puVar3 + -0x28) = lVar16;
              *(undefined1 (*) [16])(puVar3 + -0x20) = auVar22;
              *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar20;
              *(code **)(puVar3 + -8) = pcVar18;
              *(long *)(puVar3 + -0x58) = lVar6;
              lVar16 = *(long *)(lVar6 + 0x68);
              if (lVar16 == 0) {
                puVar19 = puVar3 + -0x58;
                lVar9 = 1;
              }
              else {
                lVar9 = *(long *)(lVar16 + 0x18);
                if (lVar9 == 0) {
                  return lVar6;
                }
                puVar19 = (undefined1 *)(lVar16 + 0x20);
              }
              lVar16 = 0;
              do {
                lVar17 = *(long *)(puVar19 + lVar16 * 8);
                pcVar18 = *(code **)(lVar17 + 0x10);
                plVar8 = *(long **)(lVar17 + 0x20);
                lVar17 = *(long *)(lVar17 + 0x28);
                if (*(short *)(lVar17 + 0x48) == -1) {
                  func_0x00f78ad8(lVar17,uVar14);
                }
                iVar4 = func_0x00f78a4c(lVar17);
                if (iVar4 == 0) {
                  if ((((plVar8 == (long *)0x0) || (*(short *)(lVar17 + 0x48) == -1)) ||
                      ((*(byte *)(*plVar8 + 0x115) & 1) != 0)) || (*(long *)(lVar6 + 0x18) == 0))
                  goto code_r0x03277d68;
                  iVar4 = func_0x00f78a44(lVar17);
                  iVar5 = func_0x00f78ec0(lVar17);
                  if (iVar4 == 0) {
                    uVar2 = *(ushort *)(lVar17 + 0x48);
                    if (iVar5 == 0) {
                      lVar17 = *plVar8 + (ulong)uVar2 * 0x10;
                      auVar22 = (**(code **)(lVar17 + 0x138))
                                          (plVar8,*(undefined8 *)(lVar17 + 0x140));
                      goto code_r0x03277d74;
                    }
                    lVar17 = func_0x00f78a48(lVar17);
                    lVar11 = *plVar8;
                    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                    if (uVar12 != 0) {
                      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) == lVar17) {
                          puVar10 = (undefined8 *)
                                    (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                          goto code_r0x03277e38;
                        }
                        piVar13 = piVar13 + 4;
                        uVar12 = uVar12 - 1;
                      } while (uVar12 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x00fac1f0(plVar8,lVar17,(ulong)uVar2);
code_r0x03277e38:
                    pcVar18 = (code *)*puVar10;
                    puVar10 = (undefined8 *)puVar10[1];
                  }
                  else {
                    if (iVar5 == 0) {
                      uVar14 = *(undefined8 *)
                                (*plVar8 + (ulong)*(ushort *)(lVar17 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar11 = *plVar8;
                      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                      if (uVar12 != 0) {
                        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar13 + -2) == *(long *)(lVar17 + 0x18)) {
                            lVar11 = lVar11 + (long)(int)(*piVar13 +
                                                         (uint)*(ushort *)(lVar17 + 0x48)) * 0x10 +
                                     0x138;
                            goto code_r0x03277e10;
                          }
                          piVar13 = piVar13 + 4;
                          uVar12 = uVar12 - 1;
                        } while (uVar12 != 0);
                      }
                      lVar11 = func_0x00fac1f0(plVar8);
code_r0x03277e10:
                      uVar14 = *(undefined8 *)(lVar11 + 8);
                    }
                    puVar10 = (undefined8 *)func_0x00f78acc(uVar14,lVar17);
                    pcVar18 = (code *)*puVar10;
                  }
                  auVar22 = (*pcVar18)(plVar8,puVar10);
                }
                else if (*(char *)(lVar17 + 0x4a) == '\0') {
                  auVar22 = (*pcVar18)(lVar17);
                }
                else {
code_r0x03277d68:
                  auVar22 = (*pcVar18)(plVar8,lVar17);
                }
code_r0x03277d74:
                uVar14 = auVar22._8_8_;
                lVar16 = lVar16 + 1;
                if (lVar16 == lVar9) {
                  return auVar22._0_8_;
                }
              } while( true );
            }
            break;
          }
        }
        if ((int)uVar15 < 0) {
          return lVar9;
        }
        lVar9 = *(long *)(lVar16 + 0x38);
        uVar15 = uVar15 - 1;
      } while (lVar9 != 0);
    }
  }
LAB_025e05fc:
  lVar16 = func_0x00f78af4();
  return lVar16;
}



// ============================================================
// RVA: 0x25e0480 | Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>.RemoveAllQueuedAndShowing
// ============================================================

void Atlas_UI_ModalManager_MessageBoxScreen__MessageBoxScreenViewBehaviour___RemoveAllQueuedAndShowing
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  if ((bRam0000000003eb8330 & 1) == 0) {
    func_0x00f78a20(0x3d3b350);
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    func_0x00f78a20(0x3d6bd58);
    bRam0000000003eb8330 = 1;
  }
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 8))
              (param_1,/*STR('DismissAllQueuedAndShowing')*/ uRam0000000003d6bd58);
    if (*(long *)(param_1 + 0x40) != 0) {
      lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x10))
                        (param_1);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x68) == 0)) goto LAB_025e05fc;
      /*ModalBehaviour$$Dismiss*/ func_0x01496e90(*(long *)(lVar3 + 0x68),param_2,0);
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) + -1 < 0) {
        return;
      }
      iVar5 = *(int *)(lVar3 + 0x18) + -2;
      do {
        uVar2 = iVar5 + 1;
        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
          lVar1 = *(long *)(lVar3 + 0x10) + (ulong)uVar2 * 8;
          lVar4 = lVar3;
        }
        else {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar4 = *(long *)(param_1 + 0x38);
          if (lVar4 == 0) break;
          lVar1 = *(long *)(lVar3 + 0x10) + (ulong)uVar2 * 8;
        }
        lVar3 = *(long *)(lVar1 + 0x20);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(lVar4,uVar2,uRam0000000003d3b350);
        if ((int)param_2 != 0) {
          if (lVar3 == 0) break;
          lVar3 = *(long *)(lVar3 + 0x18);
          if (lVar3 != 0) {
            if (lVar3 == 0) break;
            /*UnityEngine.Events.UnityAction$$Invoke*/ func_0x03277c60(lVar3,0);
          }
        }
        if (iVar5 < 0) {
          return;
        }
        lVar3 = *(long *)(param_1 + 0x38);
        iVar5 = iVar5 + -1;
      } while (lVar3 != 0);
    }
  }
LAB_025e05fc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x25e07f0 | Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>..ctor
// ============================================================

undefined1  [16]
Atlas_UI_ModalManager_LeagueStarsBoxScreen__LeagueStarsBoxScreenViewBehaviour____ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb8334 & 1) == 0) {
    func_0x00f78a20(0x3d3b328);
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



