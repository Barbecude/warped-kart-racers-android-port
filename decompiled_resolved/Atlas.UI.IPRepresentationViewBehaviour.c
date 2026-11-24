// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.IPRepresentationViewBehaviour

// ============================================================
// RVA: 0x15b725c | Atlas.UI.IPRepresentationViewBehaviour.get_Logo
// ============================================================

undefined8 Atlas_UI_IPRepresentationViewBehaviour__get_Logo(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15b7264 | Atlas.UI.IPRepresentationViewBehaviour.get_FrontEndLogo
// ============================================================

undefined8 Atlas_UI_IPRepresentationViewBehaviour__get_FrontEndLogo(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15b726c | Atlas.UI.IPRepresentationViewBehaviour.get_NameLocText
// ============================================================

undefined8 Atlas_UI_IPRepresentationViewBehaviour__get_NameLocText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15b7274 | Atlas.UI.IPRepresentationViewBehaviour.set_Data
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

long Atlas_UI_IPRepresentationViewBehaviour__set_Data(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  int extraout_w1;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long alStack_170 [2];
  undefined1 ***pppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long *plStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long *plStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((bRam0000000003eb5292 & 1) == 0) {
    func_0x00f78a20(0x3d32548);
    func_0x00f78a20(0x3d32550);
    func_0x00f78a20(0x3d32558);
    func_0x00f78a20(0x3d3a760);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5292 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  puVar12 = *(undefined8 **)(param_1 + 0x20);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = 0;
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(puVar12,0);
  if (iVar3 != 0) {
    if ((((*(long *)(param_1 + 0x18) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar9 == 0)) ||
        (lVar9 = *(long *)(lVar9 + 0x30), lVar9 == 0)) || (*(long *)(param_1 + 0x20) == 0))
    goto LAB_015b7588;
    lVar8 = 0;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_1 + 0x20),*(undefined8 *)(lVar9 + 0x18));
  }
  puVar12 = *(undefined8 **)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(puVar12,0);
  if (iVar3 != 0) {
    if (((*(long *)(param_1 + 0x18) == 0) ||
        (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar9 == 0)) ||
       ((lVar9 = *(long *)(lVar9 + 0x38), lVar9 == 0 || (*(long *)(param_1 + 0x28) == 0))))
    goto LAB_015b7588;
    lVar8 = 0;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_1 + 0x28),*(undefined8 *)(lVar9 + 0x18));
  }
  puVar12 = *(undefined8 **)(param_1 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(puVar12,0);
  if (iVar3 != 0) {
    if ((((*(long *)(param_1 + 0x18) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar9 == 0)) ||
        (lVar9 = *(long *)(lVar9 + 0x50), lVar9 == 0)) || (*(long *)(param_1 + 0x30) == 0))
    goto LAB_015b7588;
    lVar8 = 0;
    /*Core.UI2.UIIrregularElement$$set_sprite*/ func_0x02f83e84(*(long *)(param_1 + 0x30),*(undefined8 *)(lVar9 + 0x18));
  }
  puVar12 = *(undefined8 **)(param_1 + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(puVar12,0);
  if (iVar3 != 0) {
    if (((*(long *)(param_1 + 0x18) == 0) ||
        (lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar9 == 0)) ||
       (*(long *)(param_1 + 0x38) == 0)) goto LAB_015b7588;
    lVar8 = 0;
    /*Core.Localisation.LocaliseTextBehaviour$$SetLocalisationKey*/ func_0x016516cc(*(long *)(param_1 + 0x38),*(undefined8 *)(lVar9 + 0x20));
  }
  puVar12 = *(undefined8 **)(param_1 + 0x40);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(puVar12,0);
  if (iVar3 != 0) {
    lVar9 = *(long *)(param_1 + 0x40);
    if (((lVar9 == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
       (lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar10 == 0)) goto LAB_015b7588;
    uStack_90 = *(undefined4 *)(lVar10 + 0x80);
    uStack_8c = *(undefined4 *)(lVar10 + 0x84);
    uStack_88 = *(undefined4 *)(lVar10 + 0x88);
    uStack_84 = *(undefined4 *)(lVar10 + 0x8c);
    uStack_98 = *(undefined8 *)(lVar9 + 0x54);
    uStack_a0 = *(undefined8 *)(lVar9 + 0x4c);
    uStack_50 = *(undefined8 *)(lVar9 + 0x9c);
    uStack_58 = *(undefined8 *)(lVar9 + 0x94);
    uStack_60 = *(undefined8 *)(lVar9 + 0x8c);
    lVar8 = 0;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    uStack_78 = uStack_88;
    uStack_74 = uStack_84;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    uStack_68 = uStack_88;
    uStack_64 = uStack_84;
    /*UnityEngine.UI.Selectable$$set_colors*/ func_0x032e39c0(lVar9,&uStack_a0);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*(long *)(param_1 + 0x48),uRam0000000003d3a760);
    while( true ) {
      uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d32550);
      if ((uVar4 & 1) == 0) {
        lVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32548);
        return lVar8;
      }
      if (*(long *)(param_1 + 0x18) == 0) break;
      lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
      if (lVar8 == 0) {
        func_0x00f78af4();
        goto code_r0x015b7584;
      }
      if (plStack_38 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x015b7584;
      }
      (**(code **)(*plStack_38 + 0x2a8))
                (*(undefined4 *)(lVar8 + 0x80),*(undefined4 *)(lVar8 + 0x84),
                 *(undefined4 *)(lVar8 + 0x88),*(undefined4 *)(lVar8 + 0x8c),plStack_38,
                 *(undefined8 *)(*plStack_38 + 0x2b0));
    }
    func_0x00f78af4();
code_r0x015b7584:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x15b7588);
    (*pcVar2)();
  }
LAB_015b7588:
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    param_1 = *plVar5;
    ___cxa_end_catch();
    lVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,*puVar12);
    if (param_1 == 0) {
      return lVar9;
    }
    func_0x00f78ac0(param_1,0);
  }
  lVar9 = __Unwind_Resume();
  if ((bRam0000000003eb5293 & 1) == 0) {
    func_0x00f78a20(0x3d3a748);
    func_0x00f78a20(0x3d1d9b0);
    func_0x00f78a20(0x3d400d8);
    bRam0000000003eb5293 = 1;
  }
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<Graphic>_TypeInfo*/ uRam0000000003d1d9b0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar6,uRam0000000003d3a748);
  *(undefined8 *)(lVar9 + 0x48) = uVar6;
  if (lVar9 == 0) {
    lVar9 = func_0x00f78af4(0,uRam0000000003d400d8);
    if (lVar9 == 0) {
      auVar13 = func_0x00f78af4();
      plVar5 = auVar13._8_8_;
      uStack_100 = 0x3eb5000;
      uStack_f8 = 0x3d23990;
      lVar10 = lVar8;
      puStack_f0 = puVar12;
      lStack_e8 = param_1;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar5 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar13._0_8_ + 0x10);
        lVar9 = **(long **)(*(long *)(lVar8 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar10 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar9) {
              puVar12 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar11 = piVar11 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar5,lVar9,0);
code_r0x0284ff28:
        (*(code *)*puVar12)(plVar5,uVar1,puVar12[1]);
        lVar8 = **(long **)(*(long *)(lVar8 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar8);
        }
        lVar9 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar12 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar11 = piVar11 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar5,lVar8,2);
code_r0x0284ffac:
        (*(code *)*puVar12)(plVar5,puVar12[1]);
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return **(long **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
      }
      lVar9 = func_0x00f78af4();
      puStack_108 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      ppuStack_130 = &puStack_110;
      if (lVar9 == 0) {
        lStack_120 = lVar8;
        plStack_118 = plVar5;
        puStack_110 = &stack0xffffffffffffff20;
        auVar14 = func_0x00f78af4();
        plVar7 = auVar14._8_8_;
        uStack_150 = 0x3eb8000;
        puStack_128 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_140 = lVar8;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_148 = auVar13._0_8_;
          plStack_138 = plVar5;
          func_0x00f78a20(0x3d21510);
          auVar13._8_8_ = plStack_138;
          auVar13._0_8_ = lStack_148;
          bRam0000000003eb89d2 = 1;
        }
        plStack_138 = auVar13._8_8_;
        lStack_148 = auVar13._0_8_;
        if (plVar7 == (long *)0x0) {
          auVar13 = func_0x00f78af4();
          puStack_158 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
          alStack_170[0] = 0;
          alStack_170[1] = 0;
          pppuStack_160 = &ppuStack_130;
          /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(alStack_170,auVar13._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(auVar13._8_8_ + 0x18) + 0xc0) + 8));
          return alStack_170[0];
        }
        uVar6 = *(undefined8 *)(auVar14._0_8_ + 0x10);
        lVar8 = **(long **)(*(long *)(lVar10 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar8);
          auVar13._8_8_ = plStack_138;
          auVar13._0_8_ = lStack_148;
        }
        plStack_138 = auVar13._8_8_;
        lStack_148 = auVar13._0_8_;
        lVar9 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar11 = piVar11 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar7,lVar8,0);
        auVar13._8_8_ = plStack_138;
        auVar13._0_8_ = lStack_148;
code_r0x028500d0:
        plStack_138 = auVar13._8_8_;
        lStack_148 = auVar13._0_8_;
        (*(code *)*puVar12)(plVar7,uVar6,puVar12[1]);
        lVar8 = **(long **)(*(long *)(lVar10 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar8);
        }
        lVar9 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar12 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar11 = piVar11 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar7,lVar8,2);
code_r0x02850154:
        (*(code *)*puVar12)(plVar7,puVar12[1]);
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return **(long **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
      }
    }
  }
  else {
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  return lVar9;
}



// ============================================================
// RVA: 0x15b75d0 | Atlas.UI.IPRepresentationViewBehaviour..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_IPRepresentationViewBehaviour___ctor(ulong param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  long *plVar5;
  long *plVar6;
  
  if ((bRam0000000003eb5293 & 1) == 0) {
    func_0x00f78a20(0x3d3a748);
    func_0x00f78a20(0x3d1d9b0);
    func_0x00f78a20(0x3d400d8);
    bRam0000000003eb5293 = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<Graphic>_TypeInfo*/ uRam0000000003d1d9b0);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar3,uRam0000000003d3a748);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  if (param_1 == 0) {
    param_1 = func_0x00f78af4(0,uRam0000000003d400d8);
    if (param_1 == 0) {
      auVar12 = func_0x00f78af4();
      plVar5 = auVar12._8_8_;
      lVar11 = param_3;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar5 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar12._0_8_ + 0x10);
        lVar11 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar11) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar11,0);
code_r0x0284ff28:
        (*(code *)*puVar4)(plVar5,uVar1,puVar4[1]);
        lVar11 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar11) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar11,2);
code_r0x0284ffac:
        (*(code *)*puVar4)(plVar5,puVar4[1]);
        uVar3 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar3 = extraout_x1_00;
        }
        auVar13._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar13._8_8_ = uVar3;
        return auVar13;
      }
      param_1 = func_0x00f78af4();
      puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      ppuStack_90 = &puStack_70;
      if (param_1 == 0) {
        lStack_80 = param_3;
        plStack_78 = plVar5;
        puStack_70 = &stack0xffffffffffffffc0;
        auVar13 = func_0x00f78af4();
        plVar6 = auVar13._8_8_;
        uStack_b0 = 0x3eb8000;
        puStack_88 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_a0 = param_3;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_a8 = auVar12._0_8_;
          plStack_98 = plVar5;
          func_0x00f78a20(0x3d21510);
          auVar12._8_8_ = plStack_98;
          auVar12._0_8_ = lStack_a8;
          bRam0000000003eb89d2 = 1;
        }
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        if (plVar6 == (long *)0x0) {
          auVar12 = func_0x00f78af4();
          puStack_b8 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
          uStack_d0 = 0;
          uStack_c8 = 0;
          ppuStack_c0 = &ppuStack_90;
          /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(&uStack_d0,auVar12._0_8_,
                          *(undefined8 *)(*(long *)(*(long *)(auVar12._8_8_ + 0x18) + 0xc0) + 8));
          auVar2._8_8_ = uStack_c8;
          auVar2._0_8_ = uStack_d0;
          return auVar2;
        }
        uVar3 = *(undefined8 *)(auVar13._0_8_ + 0x10);
        lVar7 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
          auVar12._8_8_ = plStack_98;
          auVar12._0_8_ = lStack_a8;
        }
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar6,lVar7,0);
        auVar12._8_8_ = plStack_98;
        auVar12._0_8_ = lStack_a8;
code_r0x028500d0:
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        (*(code *)*puVar4)(plVar6,uVar3,puVar4[1]);
        lVar11 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar11) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar6,lVar11,2);
code_r0x02850154:
        (*(code *)*puVar4)(plVar6,puVar4[1]);
        uVar3 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar3 = extraout_x1_02;
        }
        auVar14._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar14._8_8_ = uVar3;
        return auVar14;
      }
    }
  }
  else {
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_1;
  return auVar15;
}



