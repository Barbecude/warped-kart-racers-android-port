// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.DebugUIDropdownBehaviour

// ============================================================
// RVA: 0x1642144 | Core.DebugMenu.DebugUIDropdownBehaviour.SetIndex
// ============================================================

/* WARNING: Possible PIC construction at 0x03277f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f34) */

long Core_DebugMenu_DebugUIDropdownBehaviour__SetIndex(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar13;
  long *plVar14;
  undefined8 unaff_x24;
  long lVar15;
  undefined8 unaff_x25;
  ulong uVar16;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lVar17;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar18 [16];
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar7 = func_0x00f78af4();
    return lVar7;
  }
  puVar2 = (undefined1 *)register0x00000008;
  lVar7 = *(long *)(param_1 + 0x18);
  uVar13 = 1;
  do {
    uVar9 = uVar13;
    uVar8 = param_2;
    lVar15 = lVar7;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    unaff_x22 = 0x3ec2000;
    if ((bRam0000000003ec2c21 & 1) == 0) {
      func_0x00f78a20(0x3d3d148);
      func_0x00f78a20(0x3d416e8);
      func_0x00f78a20(0x3d6bea8);
      bRam0000000003ec2c21 = 1;
    }
    lVar7 = /*UnityEngine.Application$$get_isPlaying*/ func_0x0321862c(0);
    if ((int)lVar7 == 0) {
      lVar11 = *(long *)(lVar15 + 0x128);
      if (lVar11 != 0) goto code_r0x032b4ce8;
    }
    else {
      if (*(int *)(lVar15 + 0x120) == (int)uVar8) {
        return lVar7;
      }
      lVar11 = *(long *)(lVar15 + 0x128);
      if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
        if (*(int *)(*(long *)(lVar11 + 0x10) + 0x18) == 0) {
          return lVar7;
        }
code_r0x032b4ce8:
        if (*(long *)(lVar11 + 0x10) != 0) {
          uVar3 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d32c(uVar8,0,*(int *)(*(long *)(lVar11 + 0x10) + 0x18) + -1,0);
          *(undefined4 *)(lVar15 + 0x120) = uVar3;
          lVar7 = /*UnityEngine.UI.Dropdown$$RefreshShownValue*/ func_0x032b4154(lVar15);
          if ((int)uVar9 == 0) {
            return lVar7;
          }
          /*UnityEngine.UISystemProfilerApi$$AddMarker*/ func_0x032f6f10(/*STR('Dropdown.value')*/ uRam0000000003d6bea8,lVar15,0);
          lVar7 = lRam0000000003d416e8;
          lVar11 = *(long *)(lVar15 + 0x130);
          if (lVar11 != 0) break;
        }
      }
    }
    unaff_x30 = &UnityEngine_UI_Dropdown__SetValueWithoutNotify;
    auVar18 = func_0x00f78af4();
    puVar2 = puVar2 + -0x30;
    lVar7 = auVar18._0_8_;
    param_2 = auVar18._8_8_;
    uVar13 = 0;
    unaff_x19 = lVar15;
    unaff_x20 = uVar9;
    unaff_x21 = uVar8;
  } while( true );
  uVar1 = *(uint *)(lVar15 + 0x120);
  *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
  *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
  *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
  *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
  *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  if ((bRam0000000003eb6c46 & 1) == 0) {
    func_0x00f78a20(0x3d22a90);
    func_0x00f78a20(0x3d39e50);
    func_0x00f78a20(0x3d39e58);
    func_0x00f78a20(0x3d1f218);
    bRam0000000003eb6c46 = 1;
  }
  lVar15 = 0x3eb6000;
  if ((lVar11 == 0) || (lVar4 = /*UnityEngine.Events.UnityEventBase$$PrepareInvoke*/ func_0x032784dc(lVar11,0), lVar4 == 0)) {
code_r0x01b83be4:
    func_0x00f78af4();
code_r0x01b83be8:
    uVar13 = func_0x00f78b24();
    lVar4 = lVar15;
code_r0x01b83bf4:
    lVar15 = func_0x00f78ac0(uVar13,0);
    *(undefined8 *)(lVar15 + 0x28) = 0;
    *(long *)(puVar2 + -0xa0) = lVar4;
    *(long *)(puVar2 + -0x98) = lVar11;
    *(ulong *)(puVar2 + -0x90) = (ulong)uVar1;
    *(long *)(puVar2 + -0x88) = lVar7;
    *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x78) =
         &UnityEngine_Events_UnityEvent_TouchScreenKeyboard_Status____ctor;
    if ((bRam0000000003ec1a34 & 1) == 0) {
      func_0x00f78a20(0x3d22a98,0);
      func_0x00f78a20(0x3d23bf0);
      bRam0000000003ec1a34 = 1;
    }
    *(undefined1 *)(lVar15 + 0x20) = 1;
    return lVar15;
  }
  uVar10 = (ulong)*(uint *)(lVar4 + 0x18);
  lVar15 = lVar4;
  if (0 < (int)*(uint *)(lVar4 + 0x18)) {
    lVar17 = 4;
    do {
      uVar16 = lVar17 - 4;
      if ((uVar10 & 0xffffffff) <= uVar16) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar17 * 8);
      lVar15 = *(long *)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x18);
      if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar15);
      }
      plVar5 = (long *)func_0x00f78adc(uVar13,lVar15);
      if (plVar5 == (long *)0x0) {
        if (*(uint *)(lVar4 + 0x18) <= uVar16) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar15 = func_0x00f78adc(*(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar17 * 8),
                                 /*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
        if (lVar15 == 0) {
          if (*(uint *)(lVar4 + 0x18) <= uVar16) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar14 = *(long **)(*(long *)(lVar4 + 0x10) + lVar17 * 8);
          plVar5 = *(long **)(lVar11 + 0x28);
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,1);
            *(long **)(lVar11 + 0x28) = plVar5;
          }
          *(uint *)(puVar2 + -100) = uVar1;
          lVar15 = *(long *)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x38);
          if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar15);
          }
          lVar12 = func_0x00f78ae0(lVar15,puVar2 + -100);
          lVar15 = lVar4;
          if (plVar5 == (long *)0x0) goto code_r0x01b83be4;
          if ((lVar12 != 0) &&
             (lVar6 = func_0x00f78adc(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar13 = func_0x00f78b14();
            goto code_r0x01b83bf4;
          }
          if ((int)plVar5[3] == 0) goto code_r0x01b83be8;
          plVar5[4] = lVar12;
          if (plVar14 == (long *)0x0) goto code_r0x01b83be4;
          lVar15 = (**(code **)(*plVar14 + 0x178))
                             (plVar14,*(undefined8 *)(lVar11 + 0x28),
                              *(undefined8 *)(*plVar14 + 0x180));
        }
        else {
          lVar15 = /*UnityEngine.Events.InvokableCall$$Invoke*/ func_0x03231470(lVar15,0);
        }
      }
      else {
        lVar15 = (**(code **)(*plVar5 + 0x198))
                           (plVar5,(ulong)uVar1,*(undefined8 *)(*plVar5 + 0x1a0));
      }
      uVar10 = (ulong)*(int *)(lVar4 + 0x18);
      lVar12 = lVar17 + -3;
      lVar17 = lVar17 + 1;
    } while (lVar12 < (long)uVar10);
  }
  return lVar15;
}



// ============================================================
// RVA: 0x164216c | Core.DebugMenu.DebugUIDropdownBehaviour.set_Text
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1642194 | Core.DebugMenu.DebugUIDropdownBehaviour.set_Options
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x16421dc | Core.DebugMenu.DebugUIDropdownBehaviour.set_TemplateItemHeight
// ============================================================

/* WARNING: Possible PIC construction at 0x01642214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01642218) */
/* WARNING: Removing unreachable block (ram,0x01642220) */
/* WARNING: Removing unreachable block (ram,0x01642230) */

undefined8
Core_DebugMenu_DebugUIDropdownBehaviour__set_TemplateItemHeight
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(*(long *)(param_1 + 0x30),0);
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 != 0) {
      if (pcRam0000000003ec07f0 == (code *)0x0) {
        pcRam0000000003ec07f0 =
             (code *)func_0x00f789d4("UnityEngine.RectTransform::set_sizeDelta_Injected(UnityEngine.Vector2&)"
                                     ,0);
      }
      uVar3 = (*pcRam0000000003ec07f0)(lVar1,&stack0xffffffffffffffa8);
      return uVar3;
    }
  }
  auVar5 = func_0x00f78af4();
  if ((bRam0000000003eb571c & 1) == 0) {
    func_0x00f78a20(0x3d535b8);
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb571c = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  uVar3 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar5._0_8_,auVar5._8_8_,6,&uStack_90);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if (((lStack_80 != 0) && (lVar1 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_80,uRam0000000003d535b8), lVar1 != 0)) &&
     (lVar4 = *(long *)(lVar1 + 0x38), lVar4 != 0)) {
    if (*(uint *)(lVar4 + 0x18) <= (uint)param_3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    plVar2 = *(long **)(lVar1 + 0x20);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x5e8))
                (plVar2,*(undefined8 *)
                         (*(long *)(lVar4 + 0x10) + (long)(int)(uint)param_3 * 8 + 0x20),
                 *(undefined8 *)(*plVar2 + 0x5f0));
      if (*(long *)(lVar1 + 0x18) != 0) {
        /*UnityEngine.UI.Dropdown$$set_value*/ func_0x032b4c50(*(long *)(lVar1 + 0x18),param_3,0);
        return uVar3;
      }
    }
  }
  uVar3 = func_0x00f78af4();
  return uVar3;
}



// ============================================================
// RVA: 0x1643acc | Core.DebugMenu.DebugUIDropdownBehaviour.get_Dropdown
// ============================================================

undefined8 Core_DebugMenu_DebugUIDropdownBehaviour__get_Dropdown(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1643ad4 | Core.DebugMenu.DebugUIDropdownBehaviour.get_Options
// ============================================================

undefined8 Core_DebugMenu_DebugUIDropdownBehaviour__get_Options(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x1643adc | Core.DebugMenu.DebugUIDropdownBehaviour..ctor
// ============================================================

undefined1  [16] Core_DebugMenu_DebugUIDropdownBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



