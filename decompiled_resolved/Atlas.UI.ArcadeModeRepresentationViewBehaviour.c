// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.ArcadeModeRepresentationViewBehaviour

// ============================================================
// RVA: 0x1453808 | Atlas.UI.ArcadeModeRepresentationViewBehaviour.get_NamePanel
// ============================================================

undefined8 Atlas_UI_ArcadeModeRepresentationViewBehaviour__get_NamePanel(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1453810 | Atlas.UI.ArcadeModeRepresentationViewBehaviour.get_Button
// ============================================================

undefined8 Atlas_UI_ArcadeModeRepresentationViewBehaviour__get_Button(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x1453818 | Atlas.UI.ArcadeModeRepresentationViewBehaviour.set_Data
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_ArcadeModeRepresentationViewBehaviour__set_Data
               (undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long alStack_100 [2];
  undefined1 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  *(undefined8 *)(param_3 + 0x18) = param_4;
  if ((bRam0000000003eb478a & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb478a = 1;
  }
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = 0;
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
  if (iVar2 != 0) {
    if ((((*(long *)(param_3 + 0x18) == 0) ||
         (lVar8 = *(long *)(*(long *)(param_3 + 0x18) + 0x10), lVar8 == 0)) ||
        (lVar8 = *(long *)(lVar8 + 0x30), lVar8 == 0)) || (*(long *)(param_3 + 0x20) == 0))
    goto code_r0x014539e8;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_3 + 0x20),*(undefined8 *)(lVar8 + 0x18),0);
  }
  uVar11 = *(undefined8 *)(param_3 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = 0;
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
  if (iVar2 != 0) {
    if (*(long *)(param_3 + 0x18) == 0) goto code_r0x014539e8;
    plVar12 = *(long **)(param_3 + 0x28);
    uVar3 = Atlas_UI_ArcadeModeMetagameData__get_DisplayName();
    uVar11 = 0;
    if (plVar12 == (long *)0x0) goto code_r0x014539e8;
    (**(code **)(*plVar12 + 0x558))(plVar12,uVar3,*(undefined8 *)(*plVar12 + 0x560));
  }
  uVar11 = *(undefined8 *)(param_3 + 0x40);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = 0;
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
  if (iVar2 != 0) {
    if (*(long *)(param_3 + 0x18) == 0) goto code_r0x014539e8;
    plVar12 = *(long **)(param_3 + 0x40);
    uVar3 = Atlas_UI_ArcadeModeMetagameData__get_ModeDescription();
    uVar11 = 0;
    if (plVar12 == (long *)0x0) goto code_r0x014539e8;
    (**(code **)(*plVar12 + 0x558))(plVar12,uVar3,*(undefined8 *)(*plVar12 + 0x560));
  }
  uVar11 = *(undefined8 *)(param_3 + 0x48);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = 0;
  lVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
  if ((int)lVar8 == 0) {
    return lVar8;
  }
  if ((((*(long *)(param_3 + 0x18) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_3 + 0x18) + 0x10), lVar8 == 0)) ||
      (lVar8 = *(long *)(lVar8 + 0x38), lVar8 == 0)) ||
     (plVar12 = *(long **)(param_3 + 0x48), plVar12 == (long *)0x0)) {
code_r0x014539e8:
    lVar8 = func_0x00f78af4();
    if ((bRam0000000003eb478b & 1) == 0) {
      func_0x00f78a20(0x3d400c0);
      bRam0000000003eb478b = 1;
    }
    if (lVar8 == 0) {
      lVar8 = func_0x00f78af4(0,uRam0000000003d400c0);
      puStack_70 = &stack0xffffffffffffffb0;
      if (lVar8 == 0) {
        auVar16 = func_0x00f78af4();
        plVar12 = auVar16._8_8_;
        uStack_88 = 0x3d23990;
        puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe
        ;
        lVar9 = lVar7;
        uStack_80 = uVar11;
        lStack_78 = param_3;
        if ((bRam0000000003eb89d1 & 1) == 0) {
          func_0x00f78a20(0x3d21510);
          bRam0000000003eb89d1 = 1;
        }
        if (plVar12 != (long *)0x0) {
          uVar1 = *(undefined1 *)(auVar16._0_8_ + 0x10);
          lVar8 = **(long **)(*(long *)(lVar7 + 0x18) + 0xc0);
          if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar8);
          }
          lVar9 = *plVar12;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar8) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto code_r0x0284ff28;
              }
              piVar10 = piVar10 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar12,lVar8,0);
code_r0x0284ff28:
          (*(code *)*puVar4)(plVar12,uVar1,puVar4[1]);
          lVar7 = **(long **)(*(long *)(lVar7 + 0x18) + 0xc0);
          if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar7);
          }
          lVar8 = *plVar12;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar7) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto code_r0x0284ffac;
              }
              piVar10 = piVar10 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar12,lVar7,2);
code_r0x0284ffac:
          (*(code *)*puVar4)(plVar12,puVar4[1]);
          if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          return **(long **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        }
        lVar8 = func_0x00f78af4();
        puStack_98 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
        pppuStack_c0 = &ppuStack_a0;
        if (lVar8 == 0) {
          lStack_b0 = lVar7;
          plStack_a8 = plVar12;
          ppuStack_a0 = &puStack_70;
          auVar17 = func_0x00f78af4();
          plVar6 = auVar17._8_8_;
          uStack_e0 = 0x3eb8000;
          puStack_b8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
          lStack_d0 = lVar7;
          if ((bRam0000000003eb89d2 & 1) == 0) {
            lStack_d8 = auVar16._0_8_;
            plStack_c8 = plVar12;
            func_0x00f78a20(0x3d21510);
            auVar16._8_8_ = plStack_c8;
            auVar16._0_8_ = lStack_d8;
            bRam0000000003eb89d2 = 1;
          }
          plStack_c8 = auVar16._8_8_;
          lStack_d8 = auVar16._0_8_;
          if (plVar6 == (long *)0x0) {
            auVar16 = func_0x00f78af4();
            puStack_e8 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
            alStack_100[0] = 0;
            alStack_100[1] = 0;
            ppppuStack_f0 = &pppuStack_c0;
            /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(alStack_100,auVar16._0_8_,
                            *(undefined8 *)(*(long *)(*(long *)(auVar16._8_8_ + 0x18) + 0xc0) + 8));
            return alStack_100[0];
          }
          uVar11 = *(undefined8 *)(auVar17._0_8_ + 0x10);
          lVar7 = **(long **)(*(long *)(lVar9 + 0x18) + 0xc0);
          if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar7);
            auVar16._8_8_ = plStack_c8;
            auVar16._0_8_ = lStack_d8;
          }
          plStack_c8 = auVar16._8_8_;
          lStack_d8 = auVar16._0_8_;
          lVar8 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar7) {
                puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto code_r0x028500d0;
              }
              piVar10 = piVar10 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar6,lVar7,0);
          auVar16._8_8_ = plStack_c8;
          auVar16._0_8_ = lStack_d8;
code_r0x028500d0:
          plStack_c8 = auVar16._8_8_;
          lStack_d8 = auVar16._0_8_;
          (*(code *)*puVar4)(plVar6,uVar11,puVar4[1]);
          lVar7 = **(long **)(*(long *)(lVar9 + 0x18) + 0xc0);
          if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar7);
          }
          lVar8 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar7) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto code_r0x02850154;
              }
              piVar10 = piVar10 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar6,lVar7,2);
code_r0x02850154:
          (*(code *)*puVar4)(plVar6,puVar4[1]);
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
    return lVar8;
  }
  lVar7 = *(long *)(lVar8 + 0x18);
  if ((bRam0000000003ebc62e & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar7,0);
    bRam0000000003ebc62e = 1;
  }
  lVar8 = plVar12[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
  if (iVar2 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
    if ((int)lVar8 == 0) {
      return lVar8;
    }
    if (lVar7 != 0) {
      /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar7,0);
      fVar13 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&stack0xffffffffffffffa0,0);
      fVar15 = param_2;
      fVar14 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar12 + 6) =
           (fVar13 - fVar14) * (fVar13 - fVar14) + (param_2 - fVar15) * (param_2 - fVar15) <
           _UNK_033f8490;
      uVar11 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar7,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = 0;
code_r0x02f84100:
      uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,uVar3,0);
      *(undefined1 *)((long)plVar12 + 0x31) = uVar1;
      plVar12[0x1a] = lVar7;
      lVar7 = (**(code **)(*plVar12 + 0x2d8))(plVar12,*(undefined8 *)(*plVar12 + 0x2e0));
      return lVar7;
    }
  }
  else {
    lVar8 = plVar12[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,lVar7,0);
    if ((int)lVar8 == 0) {
      return lVar8;
    }
    if (plVar12[0x1a] != 0) {
      /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar12[0x1a],0);
      fVar13 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&stack0xffffffffffffffa0,0);
      fVar15 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar7,0);
      if ((uVar5 & 1) == 0) {
        fVar14 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar7 == 0) goto code_r0x02f84140;
        /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar7,0);
        fVar14 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&stack0xffffffffffffffa0,0);
      }
      *(bool *)(plVar12 + 6) = fVar13 == fVar14 && param_2 == fVar15;
      if (plVar12[0x1a] != 0) {
        uVar11 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar12[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar7,0);
        uVar3 = 0;
        if (iVar2 != 0) {
          if (lVar7 == 0) goto code_r0x02f84140;
          uVar3 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar7,0);
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        goto code_r0x02f84100;
      }
    }
  }
code_r0x02f84140:
  lVar7 = func_0x00f78af4();
  return lVar7;
}



// ============================================================
// RVA: 0x1453820 | Atlas.UI.ArcadeModeRepresentationViewBehaviour.SetData
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_ArcadeModeRepresentationViewBehaviour__SetData
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long alStack_100 [2];
  undefined1 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  if ((bRam0000000003eb478a & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb478a = 1;
  }
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = 0;
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
  if (iVar2 != 0) {
    if ((((*(long *)(param_3 + 0x18) == 0) ||
         (lVar8 = *(long *)(*(long *)(param_3 + 0x18) + 0x10), lVar8 == 0)) ||
        (lVar8 = *(long *)(lVar8 + 0x30), lVar8 == 0)) || (*(long *)(param_3 + 0x20) == 0))
    goto LAB_014539e8;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_3 + 0x20),*(undefined8 *)(lVar8 + 0x18),0);
  }
  uVar11 = *(undefined8 *)(param_3 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = 0;
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
  if (iVar2 != 0) {
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_014539e8;
    plVar12 = *(long **)(param_3 + 0x28);
    uVar3 = Atlas_UI_ArcadeModeMetagameData__get_DisplayName();
    uVar11 = 0;
    if (plVar12 == (long *)0x0) goto LAB_014539e8;
    (**(code **)(*plVar12 + 0x558))(plVar12,uVar3,*(undefined8 *)(*plVar12 + 0x560));
  }
  uVar11 = *(undefined8 *)(param_3 + 0x40);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = 0;
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
  if (iVar2 != 0) {
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_014539e8;
    plVar12 = *(long **)(param_3 + 0x40);
    uVar3 = Atlas_UI_ArcadeModeMetagameData__get_ModeDescription();
    uVar11 = 0;
    if (plVar12 == (long *)0x0) goto LAB_014539e8;
    (**(code **)(*plVar12 + 0x558))(plVar12,uVar3,*(undefined8 *)(*plVar12 + 0x560));
  }
  uVar11 = *(undefined8 *)(param_3 + 0x48);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = 0;
  lVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
  if ((int)lVar8 == 0) {
    return lVar8;
  }
  if ((((*(long *)(param_3 + 0x18) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_3 + 0x18) + 0x10), lVar8 == 0)) ||
      (lVar8 = *(long *)(lVar8 + 0x38), lVar8 == 0)) ||
     (plVar12 = *(long **)(param_3 + 0x48), plVar12 == (long *)0x0)) {
LAB_014539e8:
    lVar8 = func_0x00f78af4();
    if ((bRam0000000003eb478b & 1) == 0) {
      func_0x00f78a20(0x3d400c0);
      bRam0000000003eb478b = 1;
    }
    if (lVar8 == 0) {
      lVar8 = func_0x00f78af4(0,uRam0000000003d400c0);
      puStack_70 = &stack0xffffffffffffffb0;
      if (lVar8 == 0) {
        auVar16 = func_0x00f78af4();
        plVar12 = auVar16._8_8_;
        uStack_88 = 0x3d23990;
        puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe
        ;
        lVar9 = lVar7;
        uStack_80 = uVar11;
        lStack_78 = param_3;
        if ((bRam0000000003eb89d1 & 1) == 0) {
          func_0x00f78a20(0x3d21510);
          bRam0000000003eb89d1 = 1;
        }
        if (plVar12 != (long *)0x0) {
          uVar1 = *(undefined1 *)(auVar16._0_8_ + 0x10);
          lVar8 = **(long **)(*(long *)(lVar7 + 0x18) + 0xc0);
          if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar8);
          }
          lVar9 = *plVar12;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar8) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto code_r0x0284ff28;
              }
              piVar10 = piVar10 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar12,lVar8,0);
code_r0x0284ff28:
          (*(code *)*puVar4)(plVar12,uVar1,puVar4[1]);
          lVar7 = **(long **)(*(long *)(lVar7 + 0x18) + 0xc0);
          if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar7);
          }
          lVar8 = *plVar12;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar7) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto code_r0x0284ffac;
              }
              piVar10 = piVar10 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar12,lVar7,2);
code_r0x0284ffac:
          (*(code *)*puVar4)(plVar12,puVar4[1]);
          if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          return **(long **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        }
        lVar8 = func_0x00f78af4();
        puStack_98 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
        pppuStack_c0 = &ppuStack_a0;
        if (lVar8 == 0) {
          lStack_b0 = lVar7;
          plStack_a8 = plVar12;
          ppuStack_a0 = &puStack_70;
          auVar17 = func_0x00f78af4();
          plVar6 = auVar17._8_8_;
          uStack_e0 = 0x3eb8000;
          puStack_b8 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
          lStack_d0 = lVar7;
          if ((bRam0000000003eb89d2 & 1) == 0) {
            lStack_d8 = auVar16._0_8_;
            plStack_c8 = plVar12;
            func_0x00f78a20(0x3d21510);
            auVar16._8_8_ = plStack_c8;
            auVar16._0_8_ = lStack_d8;
            bRam0000000003eb89d2 = 1;
          }
          plStack_c8 = auVar16._8_8_;
          lStack_d8 = auVar16._0_8_;
          if (plVar6 == (long *)0x0) {
            auVar16 = func_0x00f78af4();
            puStack_e8 = &UniRx_Async_Internal_ReusablePromise_AsyncUnit___get_Task;
            alStack_100[0] = 0;
            alStack_100[1] = 0;
            ppppuStack_f0 = &pppuStack_c0;
            /*UniRx.Async.UniTask<AsyncUnit>$$.ctor*/ func_0x01b757fc(alStack_100,auVar16._0_8_,
                            *(undefined8 *)(*(long *)(*(long *)(auVar16._8_8_ + 0x18) + 0xc0) + 8));
            return alStack_100[0];
          }
          uVar11 = *(undefined8 *)(auVar17._0_8_ + 0x10);
          lVar7 = **(long **)(*(long *)(lVar9 + 0x18) + 0xc0);
          if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar7);
            auVar16._8_8_ = plStack_c8;
            auVar16._0_8_ = lStack_d8;
          }
          plStack_c8 = auVar16._8_8_;
          lStack_d8 = auVar16._0_8_;
          lVar8 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar7) {
                puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto code_r0x028500d0;
              }
              piVar10 = piVar10 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar6,lVar7,0);
          auVar16._8_8_ = plStack_c8;
          auVar16._0_8_ = lStack_d8;
code_r0x028500d0:
          plStack_c8 = auVar16._8_8_;
          lStack_d8 = auVar16._0_8_;
          (*(code *)*puVar4)(plVar6,uVar11,puVar4[1]);
          lVar7 = **(long **)(*(long *)(lVar9 + 0x18) + 0xc0);
          if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar7);
          }
          lVar8 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar7) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto code_r0x02850154;
              }
              piVar10 = piVar10 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar6,lVar7,2);
code_r0x02850154:
          (*(code *)*puVar4)(plVar6,puVar4[1]);
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
    return lVar8;
  }
  lVar7 = *(long *)(lVar8 + 0x18);
  if ((bRam0000000003ebc62e & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar7,0);
    bRam0000000003ebc62e = 1;
  }
  lVar8 = plVar12[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
  if (iVar2 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
    if ((int)lVar8 == 0) {
      return lVar8;
    }
    if (lVar7 != 0) {
      /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar7,0);
      fVar13 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&stack0xffffffffffffffa0,0);
      fVar15 = param_2;
      fVar14 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar12 + 6) =
           (fVar13 - fVar14) * (fVar13 - fVar14) + (param_2 - fVar15) * (param_2 - fVar15) <
           _UNK_033f8490;
      uVar11 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar7,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = 0;
code_r0x02f84100:
      uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,uVar3,0);
      *(undefined1 *)((long)plVar12 + 0x31) = uVar1;
      plVar12[0x1a] = lVar7;
      lVar7 = (**(code **)(*plVar12 + 0x2d8))(plVar12,*(undefined8 *)(*plVar12 + 0x2e0));
      return lVar7;
    }
  }
  else {
    lVar8 = plVar12[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,lVar7,0);
    if ((int)lVar8 == 0) {
      return lVar8;
    }
    if (plVar12[0x1a] != 0) {
      /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar12[0x1a],0);
      fVar13 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&stack0xffffffffffffffa0,0);
      fVar15 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar7,0);
      if ((uVar5 & 1) == 0) {
        fVar14 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar7 == 0) goto code_r0x02f84140;
        /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar7,0);
        fVar14 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&stack0xffffffffffffffa0,0);
      }
      *(bool *)(plVar12 + 6) = fVar13 == fVar14 && param_2 == fVar15;
      if (plVar12[0x1a] != 0) {
        uVar11 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar12[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar7,0);
        uVar3 = 0;
        if (iVar2 != 0) {
          if (lVar7 == 0) goto code_r0x02f84140;
          uVar3 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar7,0);
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        goto code_r0x02f84100;
      }
    }
  }
code_r0x02f84140:
  lVar7 = func_0x00f78af4();
  return lVar7;
}



// ============================================================
// RVA: 0x14539ec | Atlas.UI.ArcadeModeRepresentationViewBehaviour..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x0284fe64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0285000c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0284fe68) */
/* WARNING: Removing unreachable block (ram,0x02850010) */

undefined1  [16]
Atlas_UI_ArcadeModeRepresentationViewBehaviour___ctor(ulong param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
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
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  long *plVar4;
  long *plVar5;
  
  if ((bRam0000000003eb478b & 1) == 0) {
    func_0x00f78a20(0x3d400c0);
    bRam0000000003eb478b = 1;
  }
  if (param_1 == 0) {
    param_1 = func_0x00f78af4(0,uRam0000000003d400c0);
    puStack_40 = &stack0xffffffffffffffe0;
    if (param_1 == 0) {
      auVar12 = func_0x00f78af4();
      plVar4 = auVar12._8_8_;
      puStack_38 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_AsyncUnit___Subscribe;
      lVar11 = param_3;
      if ((bRam0000000003eb89d1 & 1) == 0) {
        func_0x00f78a20(0x3d21510);
        bRam0000000003eb89d1 = 1;
      }
      if (plVar4 != (long *)0x0) {
        uVar1 = *(undefined1 *)(auVar12._0_8_ + 0x10);
        lVar11 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar11) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x0284ff28;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,lVar11,0);
code_r0x0284ff28:
        (*(code *)*puVar3)(plVar4,uVar1,puVar3[1]);
        lVar11 = **(long **)(*(long *)(param_3 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar11) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto code_r0x0284ffac;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar4,lVar11,2);
code_r0x0284ffac:
        (*(code *)*puVar3)(plVar4,puVar3[1]);
        uVar10 = extraout_x1;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar10 = extraout_x1_00;
        }
        auVar13._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar13._8_8_ = uVar10;
        return auVar13;
      }
      param_1 = func_0x00f78af4();
      puStack_68 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object____ctor;
      ppuStack_90 = &ppuStack_70;
      if (param_1 == 0) {
        lStack_80 = param_3;
        plStack_78 = plVar4;
        ppuStack_70 = &puStack_40;
        auVar13 = func_0x00f78af4();
        plVar5 = auVar13._8_8_;
        uStack_b0 = 0x3eb8000;
        puStack_88 = &UniRx_Async_UniTaskObservableExtensions_ReturnObservable_object___Subscribe;
        lStack_a0 = param_3;
        if ((bRam0000000003eb89d2 & 1) == 0) {
          lStack_a8 = auVar12._0_8_;
          plStack_98 = plVar4;
          func_0x00f78a20(0x3d21510);
          auVar12._8_8_ = plStack_98;
          auVar12._0_8_ = lStack_a8;
          bRam0000000003eb89d2 = 1;
        }
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        if (plVar5 == (long *)0x0) {
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
        uVar10 = *(undefined8 *)(auVar13._0_8_ + 0x10);
        lVar6 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
          auVar12._8_8_ = plStack_98;
          auVar12._0_8_ = lStack_a8;
        }
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        lVar7 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto code_r0x028500d0;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar5,lVar6,0);
        auVar12._8_8_ = plStack_98;
        auVar12._0_8_ = lStack_a8;
code_r0x028500d0:
        plStack_98 = auVar12._8_8_;
        lStack_a8 = auVar12._0_8_;
        (*(code *)*puVar3)(plVar5,uVar10,puVar3[1]);
        lVar11 = **(long **)(*(long *)(lVar11 + 0x18) + 0xc0);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar6 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar11) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto code_r0x02850154;
            }
            piVar9 = piVar9 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x00fac1f0(plVar5,lVar11,2);
code_r0x02850154:
        (*(code *)*puVar3)(plVar5,puVar3[1]);
        uVar10 = extraout_x1_01;
        if (((*(ushort *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xe0) == 0)) {
          func_0x00f78ad0();
          uVar10 = extraout_x1_02;
        }
        auVar14._0_8_ = **(undefined8 **)(/*UniRx.Async.Internal.EmptyDisposable_TypeInfo*/ lRam0000000003d21510 + 0xb8);
        auVar14._8_8_ = uVar10;
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



