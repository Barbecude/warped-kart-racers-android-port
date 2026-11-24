// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UICodePanelBehaviour

// ============================================================
// RVA: 0x151a1b4 | Atlas.UI.UICodePanelBehaviour.get_DigitsButton
// ============================================================

undefined8 Atlas_UI_UICodePanelBehaviour__get_DigitsButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x151a1bc | Atlas.UI.UICodePanelBehaviour.get_DigitCount
// ============================================================

ulong Atlas_UI_UICodePanelBehaviour__get_DigitCount(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb4dd8 & 1) == 0) {
    func_0x00f78a20(0x3d3c610);
    bRam0000000003eb4dd8 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  auVar8 = func_0x00f78af4();
  lVar6 = auVar8._8_8_;
  uVar3 = auVar8._0_8_;
  uVar1 = uVar3;
  if ((bRam0000000003eb4dd9 & 1) == 0) {
    func_0x00f78a20(0x3d3c610);
    uVar1 = func_0x00f78a20(0x3d3c618);
    bRam0000000003eb4dd9 = 1;
  }
  if ((lVar6 != 0) && (lVar7 = *(long *)(uVar3 + 0x20), lVar7 != 0)) {
    if (*(int *)(lVar7 + 0x18) < *(int *)(lVar6 + 0x10) || *(int *)(lVar6 + 0x10) < 1) {
      return uVar1;
    }
    uVar5 = 0;
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar5 * 8 + 0x20);
      uVar2 = /*System.String$$get_Chars*/ func_0x029c5420(lVar6,uVar5,0);
      if (lVar7 == 0) break;
      uVar1 = Atlas_UI_UICodeDigitBehaviour__SetDigit(lVar7,uVar2);
      uVar5 = uVar5 + 1;
      if (*(int *)(lVar6 + 0x10) <= (int)uVar5) {
        return uVar1;
      }
      lVar7 = *(long *)(uVar3 + 0x20);
    } while (lVar7 != 0);
  }
  uVar3 = func_0x00f78af4();
  uVar1 = uVar3;
  if ((bRam0000000003eb4dda & 1) == 0) {
    func_0x00f78a20(0x3d3c610);
    uVar1 = func_0x00f78a20(0x3d3c618);
    bRam0000000003eb4dda = 1;
  }
  lVar6 = *(long *)(uVar3 + 0x20);
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      if ((int)*(uint *)(lVar6 + 0x18) <= (int)(uint)lVar7) {
        return uVar1;
      }
      if (*(uint *)(lVar6 + 0x18) <= (uint)lVar7) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + lVar7 * 8 + 0x20);
      if ((lVar6 == 0) || (plVar4 = *(long **)(lVar6 + 0x18), plVar4 == (long *)0x0)) break;
      uVar1 = (**(code **)(*plVar4 + 0x558))(plVar4,0,*(undefined8 *)(*plVar4 + 0x560));
      lVar6 = *(long *)(uVar3 + 0x20);
      lVar7 = lVar7 + 1;
    } while (lVar6 != 0);
  }
  uVar1 = func_0x00f78af4();
  return uVar1;
}



// ============================================================
// RVA: 0x151a208 | Atlas.UI.UICodePanelBehaviour.SetCode
// ============================================================

void Atlas_UI_UICodePanelBehaviour__SetCode(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000003eb4dd9 & 1) == 0) {
    func_0x00f78a20(0x3d3c610);
    func_0x00f78a20(0x3d3c618);
    bRam0000000003eb4dd9 = 1;
  }
  if ((param_2 != 0) && (lVar6 = *(long *)(param_1 + 0x20), lVar6 != 0)) {
    if (*(int *)(lVar6 + 0x18) < *(int *)(param_2 + 0x10) || *(int *)(param_2 + 0x10) < 1) {
      return;
    }
    uVar4 = 0;
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
      uVar1 = /*System.String$$get_Chars*/ func_0x029c5420(param_2,uVar4,0);
      if (lVar6 == 0) break;
      Atlas_UI_UICodeDigitBehaviour__SetDigit(lVar6,uVar1);
      uVar4 = uVar4 + 1;
      if (*(int *)(param_2 + 0x10) <= (int)uVar4) {
        return;
      }
      lVar6 = *(long *)(param_1 + 0x20);
    } while (lVar6 != 0);
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb4dda & 1) == 0) {
    func_0x00f78a20(0x3d3c610);
    func_0x00f78a20(0x3d3c618);
    bRam0000000003eb4dda = 1;
  }
  lVar5 = *(long *)(lVar6 + 0x20);
  if (lVar5 != 0) {
    lVar3 = 0;
    do {
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)(uint)lVar3) {
        return;
      }
      if (*(uint *)(lVar5 + 0x18) <= (uint)lVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + lVar3 * 8 + 0x20);
      if ((lVar5 == 0) || (plVar2 = *(long **)(lVar5 + 0x18), plVar2 == (long *)0x0)) break;
      (**(code **)(*plVar2 + 0x558))(plVar2,0,*(undefined8 *)(*plVar2 + 0x560));
      lVar5 = *(long *)(lVar6 + 0x20);
      lVar3 = lVar3 + 1;
    } while (lVar5 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x151a2dc | Atlas.UI.UICodePanelBehaviour.HideAllDigits
// ============================================================

void Atlas_UI_UICodePanelBehaviour__HideAllDigits(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000003eb4dda & 1) == 0) {
    func_0x00f78a20(0x3d3c610);
    func_0x00f78a20(0x3d3c618);
    bRam0000000003eb4dda = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      if ((int)*(uint *)(lVar3 + 0x18) <= (int)(uint)lVar2) {
        return;
      }
      if (*(uint *)(lVar3 + 0x18) <= (uint)lVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + lVar2 * 8 + 0x20);
      if ((lVar3 == 0) || (plVar1 = *(long **)(lVar3 + 0x18), plVar1 == (long *)0x0)) break;
      (**(code **)(*plVar1 + 0x558))(plVar1,0,*(undefined8 *)(*plVar1 + 0x560));
      lVar3 = *(long *)(param_1 + 0x20);
      lVar2 = lVar2 + 1;
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x151a390 | Atlas.UI.UICodePanelBehaviour.SetDigit
// ============================================================

/* WARNING: Possible PIC construction at 0x0151a3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151a4dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151a590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151a4e0) */
/* WARNING: Removing unreachable block (ram,0x0151a538) */
/* WARNING: Removing unreachable block (ram,0x0151a4e4) */
/* WARNING: Removing unreachable block (ram,0x0151a4ec) */
/* WARNING: Removing unreachable block (ram,0x0151a4f8) */
/* WARNING: Removing unreachable block (ram,0x0151a500) */
/* WARNING: Removing unreachable block (ram,0x0151a510) */
/* WARNING: Removing unreachable block (ram,0x0151a548) */
/* WARNING: Removing unreachable block (ram,0x0151a574) */
/* WARNING: Removing unreachable block (ram,0x0151a588) */
/* WARNING: Removing unreachable block (ram,0x0151a518) */
/* WARNING: Removing unreachable block (ram,0x0151a3d8) */
/* WARNING: Removing unreachable block (ram,0x0151a41c) */
/* WARNING: Removing unreachable block (ram,0x0151a3dc) */
/* WARNING: Removing unreachable block (ram,0x0151a3e4) */
/* WARNING: Removing unreachable block (ram,0x0151a3f0) */
/* WARNING: Removing unreachable block (ram,0x0151a3f8) */
/* WARNING: Removing unreachable block (ram,0x0151a42c) */
/* WARNING: Removing unreachable block (ram,0x0151a408) */
/* WARNING: Removing unreachable block (ram,0x0151a104) */
/* WARNING: Removing unreachable block (ram,0x0151a154) */
/* WARNING: Removing unreachable block (ram,0x0151a1a8) */
/* WARNING: Removing unreachable block (ram,0x0151a180) */
/* WARNING: Removing unreachable block (ram,0x0151a12c) */
/* WARNING: Removing unreachable block (ram,0x0151a594) */
/* WARNING: Removing unreachable block (ram,0x0151a5e4) */
/* WARNING: Removing unreachable block (ram,0x0151a598) */
/* WARNING: Removing unreachable block (ram,0x0151a5a0) */
/* WARNING: Removing unreachable block (ram,0x0151a5ac) */
/* WARNING: Removing unreachable block (ram,0x0151a5b4) */
/* WARNING: Removing unreachable block (ram,0x0151a5c4) */
/* WARNING: Removing unreachable block (ram,0x0151a5f4) */
/* WARNING: Removing unreachable block (ram,0x0151a628) */
/* WARNING: Removing unreachable block (ram,0x0151a648) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x0151a5cc) */
/* WARNING: Removing unreachable block (ram,0x0321a930) */
/* WARNING: Removing unreachable block (ram,0x0321a954) */
/* WARNING: Removing unreachable block (ram,0x0321a968) */

bool Atlas_UI_UICodePanelBehaviour__SetDigit
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = param_3;
  auVar6._0_8_ = param_2;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  puVar4 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ddb & 1) == 0) {
    func_0x00f78a20(0x3d3c618);
    bRam0000000003eb4ddb = 1;
  }
  puVar5 = (undefined *)0x151a3d8;
  puVar2 = &stack0xffffffffffffffd0;
  while( true ) {
    *(undefined8 *)(puVar2 + -0x30) = 0x3eb4000;
    *(undefined8 *)(puVar2 + -0x28) = param_1;
    *(undefined1 (*) [16])(puVar2 + -0x20) = auVar6;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined **)(puVar2 + -8) = puVar5;
    if ((bRam0000000003eb4dde & 1) == 0) {
      func_0x00f78a20(0x3d3c610);
      bRam0000000003eb4dde = 1;
    }
    if (auVar1._8_4_ < 0) break;
    lVar3 = *(long *)(auVar1._0_8_ + 0x20);
    if (lVar3 != 0) {
      return auVar1._8_4_ < *(int *)(lVar3 + 0x18);
    }
    auVar6 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0x60) = 0x3eb4000;
    *(undefined8 *)(puVar2 + -0x58) = 0x3eb4000;
    *(undefined1 (*) [16])(puVar2 + -0x50) = auVar1;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x38) = &Atlas_UI_UICodePanelBehaviour__HideDigit;
    puVar4 = puVar2 + -0x40;
    param_1 = 0x3eb4000;
    if ((bRam0000000003eb4ddc & 1) == 0) {
      func_0x00f78a20(0x3d3c618);
      bRam0000000003eb4ddc = 1;
    }
    puVar5 = &UNK_0151a4e0;
    puVar2 = puVar2 + -0x60;
    auVar1 = auVar6;
  }
  return false;
}



// ============================================================
// RVA: 0x151a430 | Atlas.UI.UICodePanelBehaviour.IsDigitIndexValid
// ============================================================

ulong Atlas_UI_UICodePanelBehaviour__IsDigitIndexValid(long param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4dde & 1) == 0) {
    func_0x00f78a20(0x3d3c610);
    bRam0000000003eb4dde = 1;
  }
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      auVar5 = func_0x00f78af4();
      if ((bRam0000000003eb4ddc & 1) == 0) {
        func_0x00f78a20(0x3d3c618);
        bRam0000000003eb4ddc = 1;
      }
      uVar1 = Atlas_UI_UICodePanelBehaviour__IsDigitIndexValid(auVar5._0_8_,auVar5._8_8_);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      lVar4 = *(long *)(auVar5._0_8_ + 0x20);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= auVar5._8_4_) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)auVar5._8_4_ * 8 + 0x20);
        if ((lVar4 != 0) && (plVar2 = *(long **)(lVar4 + 0x18), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0151a534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(*plVar2 + 0x558))(plVar2,0,*(undefined8 *)(*plVar2 + 0x560));
          return uVar1;
        }
      }
      auVar5 = func_0x00f78af4();
      if ((bRam0000000003eb4ddd & 1) == 0) {
        func_0x00f78a20(0x3d3c618);
        bRam0000000003eb4ddd = 1;
      }
      uVar1 = Atlas_UI_UICodePanelBehaviour__IsDigitIndexValid(auVar5._0_8_,auVar5._8_8_);
      if ((int)uVar1 != 0) {
        lVar4 = *(long *)(auVar5._0_8_ + 0x20);
        if (lVar4 != 0) {
          if (*(uint *)(lVar4 + 0x18) <= auVar5._8_4_) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)auVar5._8_4_ * 8 + 0x20);
          if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
            if (pcRam0000000003ebe9d8 == (code *)0x0) {
              pcRam0000000003ebe9d8 =
                   (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
            }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar1 = (*pcRam0000000003ebe9d8)(lVar4,param_3);
            return uVar1;
          }
        }
        uVar1 = func_0x00f78af4();
        if ((bRam0000000003eb4ddf & 1) == 0) {
          func_0x00f78a20(0x3d3c608);
          func_0x00f78a20(0x3d1df58);
          bRam0000000003eb4ddf = 1;
        }
        uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<UICodeDigitBehaviour>_TypeInfo*/ uRam0000000003d1df58);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar3,uRam0000000003d3c608);
        *(undefined8 *)(uVar1 + 0x20) = uVar3;
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar1;
      }
      return uVar1;
    }
    uVar1 = (ulong)(param_2 < *(int *)(*(long *)(param_1 + 0x20) + 0x18));
  }
  return uVar1;
}



// ============================================================
// RVA: 0x151a49c | Atlas.UI.UICodePanelBehaviour.HideDigit
// ============================================================

undefined1  [16]
Atlas_UI_UICodePanelBehaviour__HideDigit(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4ddc & 1) == 0) {
    func_0x00f78a20(0x3d3c618);
    bRam0000000003eb4ddc = 1;
  }
  auVar4 = Atlas_UI_UICodePanelBehaviour__IsDigitIndexValid(param_1,param_2);
  if (auVar4._0_4_ == 0) {
    return auVar4;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= (uint)param_2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)(uint)param_2 * 8 + 0x20);
    if ((lVar3 != 0) && (plVar1 = *(long **)(lVar3 + 0x18), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0151a534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar4 = (**(code **)(*plVar1 + 0x558))(plVar1,0,*(undefined8 *)(*plVar1 + 0x560));
      return auVar4;
    }
  }
  auVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4ddd & 1) == 0) {
    func_0x00f78a20(0x3d3c618);
    bRam0000000003eb4ddd = 1;
  }
  auVar5 = Atlas_UI_UICodePanelBehaviour__IsDigitIndexValid(auVar4._0_8_,auVar4._8_8_);
  if (auVar5._0_4_ != 0) {
    lVar3 = *(long *)(auVar4._0_8_ + 0x20);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= auVar4._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)auVar4._8_4_ * 8 + 0x20);
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
        if (pcRam0000000003ebe9d8 == (code *)0x0) {
          pcRam0000000003ebe9d8 =
               (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar4 = (*pcRam0000000003ebe9d8)(lVar3,param_3);
        return auVar4;
      }
    }
    auVar4._0_8_ = func_0x00f78af4();
    if ((bRam0000000003eb4ddf & 1) == 0) {
      func_0x00f78a20(0x3d3c608);
      func_0x00f78a20(0x3d1df58);
      bRam0000000003eb4ddf = 1;
    }
    uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<UICodeDigitBehaviour>_TypeInfo*/ uRam0000000003d1df58);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar2,uRam0000000003d3c608);
    *(undefined8 *)(auVar4._0_8_ + 0x20) = uVar2;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar4._8_8_ = 0;
    return auVar4;
  }
  return auVar5;
}



// ============================================================
// RVA: 0x151a54c | Atlas.UI.UICodePanelBehaviour.SetCursorVisible
// ============================================================

undefined1  [16]
Atlas_UI_UICodePanelBehaviour__SetCursorVisible(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4ddd & 1) == 0) {
    func_0x00f78a20(0x3d3c618);
    bRam0000000003eb4ddd = 1;
  }
  auVar3 = Atlas_UI_UICodePanelBehaviour__IsDigitIndexValid(param_1,param_2);
  if (auVar3._0_4_ == 0) {
    return auVar3;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= (uint)param_2) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + (long)(int)(uint)param_2 * 8 + 0x20);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
      if (pcRam0000000003ebe9d8 == (code *)0x0) {
        pcRam0000000003ebe9d8 =
             (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar3 = (*pcRam0000000003ebe9d8)(lVar2,param_3);
      return auVar3;
    }
  }
  auVar3._0_8_ = func_0x00f78af4();
  if ((bRam0000000003eb4ddf & 1) == 0) {
    func_0x00f78a20(0x3d3c608);
    func_0x00f78a20(0x3d1df58);
    bRam0000000003eb4ddf = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<UICodeDigitBehaviour>_TypeInfo*/ uRam0000000003d1df58);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3c608);
  *(undefined8 *)(auVar3._0_8_ + 0x20) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x151a5f8 | Atlas.UI.UICodePanelBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UICodePanelBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4ddf & 1) == 0) {
    func_0x00f78a20(0x3d3c608);
    func_0x00f78a20(0x3d1df58);
    bRam0000000003eb4ddf = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<UICodeDigitBehaviour>_TypeInfo*/ uRam0000000003d1df58);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3c608);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



