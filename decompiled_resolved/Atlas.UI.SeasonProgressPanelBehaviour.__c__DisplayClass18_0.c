// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0

// ============================================================
// RVA: 0x1569620 | Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0..ctor
// ============================================================

void Atlas_UI_SeasonProgressPanelBehaviour___c__DisplayClass18_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1569628 | Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0.<AnimateStars>b__1
// ============================================================

ulong Atlas_UI_SeasonProgressPanelBehaviour___c__DisplayClass18_0___AnimateStars_b__1(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong unaff_x19;
  long *unaff_x20;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar8 [12];
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (uVar4 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x78), puStack_68 = unaff_x30, uVar4 != 0)) {
Core_Audio_AudioEvent__Play:
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = puStack_68;
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar4,0,0);
    return uVar4;
  }
  lVar5 = func_0x00f78af4();
  puStack_30 = (undefined1 *)&puStack_20;
  puStack_18 = &Atlas_UI_SeasonProgressPanelBehaviour___c__DisplayClass18_0___AnimateStars_b__2;
  if (*(long *)(lVar5 + 0x10) != 0) {
    return (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + 0x68);
  }
  puStack_20 = &stack0xfffffffffffffff0;
  auVar8 = func_0x00f78af4();
  puStack_40 = (undefined1 *)&puStack_30;
  puStack_28 = &Atlas_UI_SeasonProgressPanelBehaviour___c__DisplayClass18_0___AnimateStars_b__3;
  lVar5 = *(long *)(auVar8._0_8_ + 0x10);
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x68) = auVar8._8_4_;
    return auVar8._0_8_;
  }
  unaff_x19 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_SeasonProgressPanelBehaviour___c__DisplayClass18_0___AnimateStars_b__4;
  unaff_x29 = &puStack_40;
  unaff_x20 = (long *)0x3eb4000;
  uVar4 = unaff_x19;
  ppuVar3 = &puStack_30;
  if ((bRam0000000003eb4ff5 & 1) == 0) {
    uVar4 = func_0x00f78a20(0x3d25608);
    bRam0000000003eb4ff5 = 1;
    ppuVar3 = (undefined1 **)puStack_40;
  }
  puStack_40 = (undefined1 *)ppuVar3;
  lVar5 = *(long *)(unaff_x19 + 0x10);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x68);
    if (*(int *)(lVar5 + 0x6c) == iVar1) {
      return uVar4;
    }
    unaff_x20 = *(long **)(lVar5 + 0x30);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x18);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,iVar1,uVar2,0);
    if (unaff_x20 != (long *)0x0) {
      uVar4 = (**(code **)(*unaff_x20 + 0x558))(unaff_x20,uVar6,*(undefined8 *)(*unaff_x20 + 0x560))
      ;
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x6c) = *(undefined4 *)(lVar5 + 0x68);
        return uVar4;
      }
    }
  }
  lVar5 = func_0x00f78af4();
  puStack_68 = &Atlas_UI_SeasonProgressPanelBehaviour___c__DisplayClass18_0___AnimateStars_b__5;
  if ((bRam0000000003eb4ff6 & 1) == 0) {
    func_0x00f78a20(0x3d25578);
    bRam0000000003eb4ff6 = 1;
  }
  if ((*(long *)(lVar5 + 0x10) != 0) &&
     (lVar7 = *(long *)(*(long *)(lVar5 + 0x10) + 0x78), lVar7 != 0)) {
    uVar4 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar7,0,0);
    if (*(int *)(lVar5 + 0x1c) < *(int *)(lVar5 + 0x18)) {
      return uVar4;
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      lVar7 = *(long *)(*(long *)(lVar5 + 0x10) + 0x40);
      if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar7 != 0) {
        /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar7,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0x10),0);
        if ((*(long *)(lVar5 + 0x10) != 0) &&
           (uVar4 = *(ulong *)(*(long *)(lVar5 + 0x10) + 0x70), uVar4 != 0)) {
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
          goto Core_Audio_AudioEvent__Play;
        }
      }
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4ff7 & 1) == 0) {
    func_0x00f78a20(0x3d28ba8);
    bRam0000000003eb4ff7 = 1;
  }
  uVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.<>c_TypeInfo*/ lRam0000000003d28ba8);
  uVar4 = /*System.Object$$.ctor*/ func_0x0294d018(uVar6,0);
  **(undefined8 **)(/*Atlas.UI.Screens.SeasonsScreen.<>c_TypeInfo*/ lRam0000000003d28ba8 + 0xb8) = uVar6;
  return uVar4;
}



// ============================================================
// RVA: 0x1569650 | Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0.<AnimateStars>b__2
// ============================================================

ulong Atlas_UI_SeasonProgressPanelBehaviour___c__DisplayClass18_0___AnimateStars_b__2(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 auVar9 [12];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x68);
  }
  auVar9 = func_0x00f78af4();
  lVar7 = *(long *)(auVar9._0_8_ + 0x10);
  if (lVar7 == 0) {
    uVar3 = func_0x00f78af4();
    uVar4 = uVar3;
    if ((bRam0000000003eb4ff5 & 1) == 0) {
      uVar4 = func_0x00f78a20(0x3d25608);
      bRam0000000003eb4ff5 = 1;
    }
    lVar7 = *(long *)(uVar3 + 0x10);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x68);
      if (*(int *)(lVar7 + 0x6c) == iVar1) {
        return uVar4;
      }
      plVar8 = *(long **)(lVar7 + 0x30);
      uVar2 = *(undefined4 *)(uVar3 + 0x18);
      if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,iVar1,uVar2,0);
      if (plVar8 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar8 + 0x558))(plVar8,uVar5,*(undefined8 *)(*plVar8 + 0x560));
        lVar7 = *(long *)(uVar3 + 0x10);
        if (lVar7 != 0) {
          *(undefined4 *)(lVar7 + 0x6c) = *(undefined4 *)(lVar7 + 0x68);
          return uVar4;
        }
      }
    }
    lVar7 = func_0x00f78af4();
    if ((bRam0000000003eb4ff6 & 1) == 0) {
      func_0x00f78a20(0x3d25578);
      bRam0000000003eb4ff6 = 1;
    }
    if ((*(long *)(lVar7 + 0x10) != 0) &&
       (lVar6 = *(long *)(*(long *)(lVar7 + 0x10) + 0x78), lVar6 != 0)) {
      uVar4 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar6,0,0);
      if (*(int *)(lVar7 + 0x1c) < *(int *)(lVar7 + 0x18)) {
        return uVar4;
      }
      if (*(long *)(lVar7 + 0x10) != 0) {
        lVar6 = *(long *)(*(long *)(lVar7 + 0x10) + 0x40);
        if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar6 != 0) {
          /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar6,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0x10),0);
          if ((*(long *)(lVar7 + 0x10) != 0) &&
             (uVar4 = *(ulong *)(*(long *)(lVar7 + 0x10) + 0x70), uVar4 != 0)) {
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar4,0,0);
            return uVar4;
          }
        }
      }
    }
    func_0x00f78af4();
    if ((bRam0000000003eb4ff7 & 1) == 0) {
      func_0x00f78a20(0x3d28ba8);
      bRam0000000003eb4ff7 = 1;
    }
    uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.<>c_TypeInfo*/ lRam0000000003d28ba8);
    uVar4 = /*System.Object$$.ctor*/ func_0x0294d018(uVar5,0);
    **(undefined8 **)(/*Atlas.UI.Screens.SeasonsScreen.<>c_TypeInfo*/ lRam0000000003d28ba8 + 0xb8) = uVar5;
    return uVar4;
  }
  *(int *)(lVar7 + 0x68) = auVar9._8_4_;
  return auVar9._0_8_;
}



// ============================================================
// RVA: 0x1569670 | Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0.<AnimateStars>b__3
// ============================================================

long Atlas_UI_SeasonProgressPanelBehaviour___c__DisplayClass18_0___AnimateStars_b__3
               (long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x68) = param_2;
    return param_1;
  }
  lVar3 = func_0x00f78af4();
  lVar4 = lVar3;
  if ((bRam0000000003eb4ff5 & 1) == 0) {
    lVar4 = func_0x00f78a20(0x3d25608);
    bRam0000000003eb4ff5 = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x10);
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x68);
    if (*(int *)(lVar6 + 0x6c) == iVar1) {
      return lVar4;
    }
    plVar7 = *(long **)(lVar6 + 0x30);
    uVar2 = *(undefined4 *)(lVar3 + 0x18);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,iVar1,uVar2,0);
    if (plVar7 != (long *)0x0) {
      lVar4 = (**(code **)(*plVar7 + 0x558))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x560));
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x6c) = *(undefined4 *)(lVar3 + 0x68);
        return lVar4;
      }
    }
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4ff6 & 1) == 0) {
    func_0x00f78a20(0x3d25578);
    bRam0000000003eb4ff6 = 1;
  }
  if ((*(long *)(lVar4 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 0x78), lVar3 != 0)) {
    lVar3 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar3,0,0);
    if (*(int *)(lVar4 + 0x1c) < *(int *)(lVar4 + 0x18)) {
      return lVar3;
    }
    if (*(long *)(lVar4 + 0x10) != 0) {
      lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 0x40);
      if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar3 != 0) {
        /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar3,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0x10),0);
        if ((*(long *)(lVar4 + 0x10) != 0) &&
           (lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x70), lVar4 != 0)) {
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar4,0,0);
          return lVar4;
        }
      }
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4ff7 & 1) == 0) {
    func_0x00f78a20(0x3d28ba8);
    bRam0000000003eb4ff7 = 1;
  }
  uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.<>c_TypeInfo*/ lRam0000000003d28ba8);
  lVar4 = /*System.Object$$.ctor*/ func_0x0294d018(uVar5,0);
  **(undefined8 **)(/*Atlas.UI.Screens.SeasonsScreen.<>c_TypeInfo*/ lRam0000000003d28ba8 + 0xb8) = uVar5;
  return lVar4;
}



// ============================================================
// RVA: 0x1569690 | Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0.<AnimateStars>b__4
// ============================================================

long Atlas_UI_SeasonProgressPanelBehaviour___c__DisplayClass18_0___AnimateStars_b__4(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  lVar3 = param_1;
  if ((bRam0000000003eb4ff5 & 1) == 0) {
    lVar3 = func_0x00f78a20(0x3d25608);
    bRam0000000003eb4ff5 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x68);
    if (*(int *)(lVar5 + 0x6c) == iVar1) {
      return lVar3;
    }
    plVar6 = *(long **)(lVar5 + 0x30);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,iVar1,uVar2,0);
    if (plVar6 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar6 + 0x558))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x560));
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x6c) = *(undefined4 *)(lVar5 + 0x68);
        return lVar3;
      }
    }
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4ff6 & 1) == 0) {
    func_0x00f78a20(0x3d25578);
    bRam0000000003eb4ff6 = 1;
  }
  if ((*(long *)(lVar3 + 0x10) != 0) &&
     (lVar5 = *(long *)(*(long *)(lVar3 + 0x10) + 0x78), lVar5 != 0)) {
    lVar5 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar5,0,0);
    if (*(int *)(lVar3 + 0x1c) < *(int *)(lVar3 + 0x18)) {
      return lVar5;
    }
    if (*(long *)(lVar3 + 0x10) != 0) {
      lVar5 = *(long *)(*(long *)(lVar3 + 0x10) + 0x40);
      if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar5 != 0) {
        /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar5,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0x10),0);
        if ((*(long *)(lVar3 + 0x10) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x70), lVar3 != 0)) {
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar3,0,0);
          return lVar3;
        }
      }
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4ff7 & 1) == 0) {
    func_0x00f78a20(0x3d28ba8);
    bRam0000000003eb4ff7 = 1;
  }
  uVar4 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.<>c_TypeInfo*/ lRam0000000003d28ba8);
  lVar3 = /*System.Object$$.ctor*/ func_0x0294d018(uVar4,0);
  **(undefined8 **)(/*Atlas.UI.Screens.SeasonsScreen.<>c_TypeInfo*/ lRam0000000003d28ba8 + 0xb8) = uVar4;
  return lVar3;
}



// ============================================================
// RVA: 0x1569758 | Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0.<AnimateStars>b__5
// ============================================================

long Atlas_UI_SeasonProgressPanelBehaviour___c__DisplayClass18_0___AnimateStars_b__5(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb4ff6 & 1) == 0) {
    func_0x00f78a20(0x3d25578);
    bRam0000000003eb4ff6 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x78), lVar1 != 0)) {
    lVar1 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar1,0,0);
    if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18)) {
      return lVar1;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
      if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar1 != 0) {
        /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar1,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0x10),0);
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x70), lVar1 != 0)) {
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar1,0,0);
          return lVar1;
        }
      }
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4ff7 & 1) == 0) {
    func_0x00f78a20(0x3d28ba8);
    bRam0000000003eb4ff7 = 1;
  }
  uVar2 = func_0x00f78aec(/*Atlas.UI.Screens.SeasonsScreen.<>c_TypeInfo*/ lRam0000000003d28ba8);
  lVar1 = /*System.Object$$.ctor*/ func_0x0294d018(uVar2,0);
  **(undefined8 **)(/*Atlas.UI.Screens.SeasonsScreen.<>c_TypeInfo*/ lRam0000000003d28ba8 + 0xb8) = uVar2;
  return lVar1;
}



