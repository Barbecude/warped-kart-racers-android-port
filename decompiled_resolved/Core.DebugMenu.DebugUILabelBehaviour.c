// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.DebugUILabelBehaviour

// ============================================================
// RVA: 0x1642038 | Core.DebugMenu.DebugUILabelBehaviour.set_Text
// ============================================================

/* WARNING: Possible PIC construction at 0x03277f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f34) */

long Core_DebugMenu_DebugUILabelBehaviour__set_Text(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *****pppppuVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long *plVar15;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar16;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lVar17;
  undefined8 ******ppppppuVar18;
  code *pcVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *****pppppuStack_30;
  code *pcStack_28;
  undefined8 ****ppppuStack_20;
  undefined *puStack_18;
  
  auVar21._8_8_ = unaff_x20;
  auVar21._0_8_ = unaff_x21;
  plVar6 = *(long **)(param_1 + 0x18);
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01642058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar7 = (**(code **)(*plVar6 + 0x5e8))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x5f0));
    return lVar7;
  }
  auVar20 = func_0x00f78af4();
  pppppuVar3 = &ppppuStack_20;
  puStack_18 = &Core_DebugMenu_DebugUILabelBehaviour__set_RaycastTarget;
  plVar6 = *(long **)(auVar20._0_8_ + 0x18);
  if (plVar6 != (long *)0x0) {
    ppppuStack_20 = (undefined8 ****)&stack0xfffffffffffffff0;
                    /* WARNING: Could not recover jumptable at 0x01642080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6,auVar20._8_8_,*(undefined8 *)(*plVar6 + 0x2d0));
    return lVar7;
  }
  ppppuStack_20 = (undefined8 ****)&stack0xfffffffffffffff0;
  auVar20 = func_0x00f78af4();
  pcStack_28 = Core_DebugMenu_DebugMenu__SetDropdownIndex;
  pppppuStack_30 = &ppppuStack_20;
  if ((bRam0000000003eb571a & 1) == 0) {
    pppppuStack_30 = &ppppuStack_20;
    func_0x00f78a20(0x3d535b8);
    bRam0000000003eb571a = 1;
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  lStack_70 = 0;
  lVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar20._0_8_,auVar20._8_8_,6,&uStack_80);
  if ((int)lVar7 == 0) {
    return lVar7;
  }
  if (((lStack_70 == 0) || (lVar7 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_70,uRam0000000003d535b8), lVar7 == 0)) ||
     (lVar8 = *(long *)(lVar7 + 0x18), lVar7 = param_3,
     ppppppuVar18 = (undefined8 ******)pppppuStack_30, pcVar19 = pcStack_28, lVar8 == 0)) {
    auVar21 = func_0x00f78af4();
    lVar8 = *(long *)(auVar21._0_8_ + 0x18);
    if (lVar8 == 0) {
      lVar7 = func_0x00f78af4();
      return lVar7;
    }
    pppppuVar3 = (undefined8 *****)&uStack_80;
    lVar7 = auVar21._8_8_;
    unaff_x19 = param_3;
    unaff_x22 = 0x3eb5000;
    ppppppuVar18 = &pppppuStack_30;
    pcVar19 = Core_DebugMenu_DebugUIDropdownBehaviour__SetIndex;
    auVar21 = auVar20;
  }
  auVar20._8_8_ = lVar7;
  auVar20._0_8_ = lVar8;
  uVar11 = 1;
  puVar4 = (undefined1 *)pppppuVar3;
  do {
    lVar7 = auVar20._0_8_;
    auVar2._8_8_ = uVar11;
    auVar2._0_8_ = auVar20._8_8_;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined1 (*) [16])(puVar4 + -0x28) = auVar21;
    *(long *)(puVar4 + -0x18) = unaff_x19;
    *(undefined8 *******)(puVar4 + -0x10) = ppppppuVar18;
    *(code **)(puVar4 + -8) = pcVar19;
    ppppppuVar18 = (undefined8 ******)(puVar4 + -0x10);
    unaff_x22 = 0x3ec2000;
    if ((bRam0000000003ec2c21 & 1) == 0) {
      func_0x00f78a20(0x3d3d148);
      func_0x00f78a20(0x3d416e8);
      func_0x00f78a20(0x3d6bea8);
      bRam0000000003ec2c21 = 1;
    }
    lVar8 = /*UnityEngine.Application$$get_isPlaying*/ func_0x0321862c(0);
    if ((int)lVar8 == 0) {
      lVar13 = *(long *)(lVar7 + 0x128);
      if (lVar13 != 0) goto code_r0x032b4ce8;
    }
    else {
      if (*(int *)(lVar7 + 0x120) == auVar20._8_4_) {
        return lVar8;
      }
      lVar13 = *(long *)(lVar7 + 0x128);
      if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
        if (*(int *)(*(long *)(lVar13 + 0x10) + 0x18) == 0) {
          return lVar8;
        }
code_r0x032b4ce8:
        if (*(long *)(lVar13 + 0x10) != 0) {
          uVar5 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d32c(auVar20._8_8_,0,*(int *)(*(long *)(lVar13 + 0x10) + 0x18) + -1,0);
          *(undefined4 *)(lVar7 + 0x120) = uVar5;
          lVar8 = /*UnityEngine.UI.Dropdown$$RefreshShownValue*/ func_0x032b4154(lVar7);
          if ((int)uVar11 == 0) {
            return lVar8;
          }
          /*UnityEngine.UISystemProfilerApi$$AddMarker*/ func_0x032f6f10(/*STR('Dropdown.value')*/ uRam0000000003d6bea8,lVar7,0);
          lVar8 = lRam0000000003d416e8;
          lVar13 = *(long *)(lVar7 + 0x130);
          if (lVar13 != 0) break;
        }
      }
    }
    pcVar19 = (code *)&UnityEngine_UI_Dropdown__SetValueWithoutNotify;
    auVar20 = func_0x00f78af4();
    uVar11 = 0;
    puVar4 = puVar4 + -0x30;
    unaff_x19 = lVar7;
    auVar21 = auVar2;
  } while( true );
  uVar1 = *(uint *)(lVar7 + 0x120);
  *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x30) = *(undefined8 *)(puVar4 + -0x30);
  *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)(puVar4 + -0x28);
  *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
  *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
  *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
  *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  if ((bRam0000000003eb6c46 & 1) == 0) {
    func_0x00f78a20(0x3d22a90);
    func_0x00f78a20(0x3d39e50);
    func_0x00f78a20(0x3d39e58);
    func_0x00f78a20(0x3d1f218);
    bRam0000000003eb6c46 = 1;
  }
  lVar7 = 0x3eb6000;
  if ((lVar13 == 0) || (lVar9 = /*UnityEngine.Events.UnityEventBase$$PrepareInvoke*/ func_0x032784dc(lVar13,0), lVar9 == 0)) {
code_r0x01b83be4:
    func_0x00f78af4();
code_r0x01b83be8:
    uVar11 = func_0x00f78b24();
    lVar9 = lVar7;
code_r0x01b83bf4:
    lVar7 = func_0x00f78ac0(uVar11,0);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(long *)(puVar4 + -0xa0) = lVar9;
    *(long *)(puVar4 + -0x98) = lVar13;
    *(ulong *)(puVar4 + -0x90) = (ulong)uVar1;
    *(long *)(puVar4 + -0x88) = lVar8;
    *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x78) =
         &UnityEngine_Events_UnityEvent_TouchScreenKeyboard_Status____ctor;
    if ((bRam0000000003ec1a34 & 1) == 0) {
      func_0x00f78a20(0x3d22a98,0);
      func_0x00f78a20(0x3d23bf0);
      bRam0000000003ec1a34 = 1;
    }
    *(undefined1 *)(lVar7 + 0x20) = 1;
    return lVar7;
  }
  uVar12 = (ulong)*(uint *)(lVar9 + 0x18);
  lVar7 = lVar9;
  if (0 < (int)*(uint *)(lVar9 + 0x18)) {
    lVar17 = 4;
    do {
      uVar16 = lVar17 - 4;
      if ((uVar12 & 0xffffffff) <= uVar16) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar17 * 8);
      lVar7 = *(long *)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x18);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      plVar6 = (long *)func_0x00f78adc(uVar11,lVar7);
      if (plVar6 == (long *)0x0) {
        if (*(uint *)(lVar9 + 0x18) <= uVar16) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar7 = func_0x00f78adc(*(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar17 * 8),
                                /*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
        if (lVar7 == 0) {
          if (*(uint *)(lVar9 + 0x18) <= uVar16) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar15 = *(long **)(*(long *)(lVar9 + 0x10) + lVar17 * 8);
          plVar6 = *(long **)(lVar13 + 0x28);
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,1);
            *(long **)(lVar13 + 0x28) = plVar6;
          }
          *(uint *)(puVar4 + -100) = uVar1;
          lVar7 = *(long *)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x38);
          if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar7);
          }
          lVar14 = func_0x00f78ae0(lVar7,puVar4 + -100);
          lVar7 = lVar9;
          if (plVar6 == (long *)0x0) goto code_r0x01b83be4;
          if ((lVar14 != 0) &&
             (lVar10 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0)) {
            uVar11 = func_0x00f78b14();
            goto code_r0x01b83bf4;
          }
          if ((int)plVar6[3] == 0) goto code_r0x01b83be8;
          plVar6[4] = lVar14;
          if (plVar15 == (long *)0x0) goto code_r0x01b83be4;
          lVar7 = (**(code **)(*plVar15 + 0x178))
                            (plVar15,*(undefined8 *)(lVar13 + 0x28),
                             *(undefined8 *)(*plVar15 + 0x180));
        }
        else {
          lVar7 = /*UnityEngine.Events.InvokableCall$$Invoke*/ func_0x03231470(lVar7,0);
        }
      }
      else {
        lVar7 = (**(code **)(*plVar6 + 0x198))(plVar6,(ulong)uVar1,*(undefined8 *)(*plVar6 + 0x1a0))
        ;
      }
      uVar12 = (ulong)*(int *)(lVar9 + 0x18);
      lVar14 = lVar17 + -3;
      lVar17 = lVar17 + 1;
    } while (lVar14 < (long)uVar12);
  }
  return lVar7;
}



// ============================================================
// RVA: 0x1642060 | Core.DebugMenu.DebugUILabelBehaviour.set_RaycastTarget
// ============================================================

/* WARNING: Possible PIC construction at 0x03277f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f34) */

long Core_DebugMenu_DebugUILabelBehaviour__set_RaycastTarget
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long *plVar15;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar16;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long lVar17;
  undefined8 ******ppppppuVar18;
  code *pcVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *****pppppuStack_20;
  code *pcStack_18;
  
  auVar21._8_8_ = unaff_x20;
  auVar21._0_8_ = unaff_x21;
  puVar3 = (undefined8 *)&stack0xfffffffffffffff0;
  plVar6 = *(long **)(param_1 + 0x18);
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01642080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x2d0));
    return lVar7;
  }
  auVar20 = func_0x00f78af4();
  pcStack_18 = Core_DebugMenu_DebugMenu__SetDropdownIndex;
  pppppuStack_20 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb571a & 1) == 0) {
    pppppuStack_20 = (undefined8 *****)&stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d535b8);
    bRam0000000003eb571a = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  lVar7 = Core_DebugMenu_DebugMenu__TryGetElementCopy(auVar20._0_8_,auVar20._8_8_,6,&uStack_70);
  if ((int)lVar7 == 0) {
    return lVar7;
  }
  if (((lStack_60 == 0) || (lVar7 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(lStack_60,uRam0000000003d535b8), lVar7 == 0)) ||
     (lVar8 = *(long *)(lVar7 + 0x18), lVar7 = param_3,
     ppppppuVar18 = (undefined8 ******)pppppuStack_20, pcVar19 = pcStack_18, lVar8 == 0)) {
    auVar21 = func_0x00f78af4();
    lVar8 = *(long *)(auVar21._0_8_ + 0x18);
    if (lVar8 == 0) {
      lVar7 = func_0x00f78af4();
      return lVar7;
    }
    puVar3 = &uStack_70;
    lVar7 = auVar21._8_8_;
    unaff_x19 = param_3;
    unaff_x22 = 0x3eb5000;
    ppppppuVar18 = &pppppuStack_20;
    pcVar19 = Core_DebugMenu_DebugUIDropdownBehaviour__SetIndex;
    auVar21 = auVar20;
  }
  auVar20._8_8_ = lVar7;
  auVar20._0_8_ = lVar8;
  uVar11 = 1;
  puVar4 = (undefined1 *)puVar3;
  do {
    lVar7 = auVar20._0_8_;
    auVar2._8_8_ = uVar11;
    auVar2._0_8_ = auVar20._8_8_;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined1 (*) [16])(puVar4 + -0x28) = auVar21;
    *(long *)(puVar4 + -0x18) = unaff_x19;
    *(undefined8 *******)(puVar4 + -0x10) = ppppppuVar18;
    *(code **)(puVar4 + -8) = pcVar19;
    ppppppuVar18 = (undefined8 ******)(puVar4 + -0x10);
    unaff_x22 = 0x3ec2000;
    if ((bRam0000000003ec2c21 & 1) == 0) {
      func_0x00f78a20(0x3d3d148);
      func_0x00f78a20(0x3d416e8);
      func_0x00f78a20(0x3d6bea8);
      bRam0000000003ec2c21 = 1;
    }
    lVar8 = /*UnityEngine.Application$$get_isPlaying*/ func_0x0321862c(0);
    if ((int)lVar8 == 0) {
      lVar13 = *(long *)(lVar7 + 0x128);
      if (lVar13 != 0) goto code_r0x032b4ce8;
    }
    else {
      if (*(int *)(lVar7 + 0x120) == auVar20._8_4_) {
        return lVar8;
      }
      lVar13 = *(long *)(lVar7 + 0x128);
      if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
        if (*(int *)(*(long *)(lVar13 + 0x10) + 0x18) == 0) {
          return lVar8;
        }
code_r0x032b4ce8:
        if (*(long *)(lVar13 + 0x10) != 0) {
          uVar5 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d32c(auVar20._8_8_,0,*(int *)(*(long *)(lVar13 + 0x10) + 0x18) + -1,0);
          *(undefined4 *)(lVar7 + 0x120) = uVar5;
          lVar8 = /*UnityEngine.UI.Dropdown$$RefreshShownValue*/ func_0x032b4154(lVar7);
          if ((int)uVar11 == 0) {
            return lVar8;
          }
          /*UnityEngine.UISystemProfilerApi$$AddMarker*/ func_0x032f6f10(/*STR('Dropdown.value')*/ uRam0000000003d6bea8,lVar7,0);
          lVar8 = lRam0000000003d416e8;
          lVar13 = *(long *)(lVar7 + 0x130);
          if (lVar13 != 0) break;
        }
      }
    }
    pcVar19 = (code *)&UnityEngine_UI_Dropdown__SetValueWithoutNotify;
    auVar20 = func_0x00f78af4();
    uVar11 = 0;
    puVar4 = puVar4 + -0x30;
    unaff_x19 = lVar7;
    auVar21 = auVar2;
  } while( true );
  uVar1 = *(uint *)(lVar7 + 0x120);
  *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x30) = *(undefined8 *)(puVar4 + -0x30);
  *(undefined8 *)(puVar4 + -0x28) = *(undefined8 *)(puVar4 + -0x28);
  *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
  *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
  *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
  *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
  if ((bRam0000000003eb6c46 & 1) == 0) {
    func_0x00f78a20(0x3d22a90);
    func_0x00f78a20(0x3d39e50);
    func_0x00f78a20(0x3d39e58);
    func_0x00f78a20(0x3d1f218);
    bRam0000000003eb6c46 = 1;
  }
  lVar7 = 0x3eb6000;
  if ((lVar13 == 0) || (lVar9 = /*UnityEngine.Events.UnityEventBase$$PrepareInvoke*/ func_0x032784dc(lVar13,0), lVar9 == 0)) {
code_r0x01b83be4:
    func_0x00f78af4();
code_r0x01b83be8:
    uVar11 = func_0x00f78b24();
    lVar9 = lVar7;
code_r0x01b83bf4:
    lVar7 = func_0x00f78ac0(uVar11,0);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(long *)(puVar4 + -0xa0) = lVar9;
    *(long *)(puVar4 + -0x98) = lVar13;
    *(ulong *)(puVar4 + -0x90) = (ulong)uVar1;
    *(long *)(puVar4 + -0x88) = lVar8;
    *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x78) =
         &UnityEngine_Events_UnityEvent_TouchScreenKeyboard_Status____ctor;
    if ((bRam0000000003ec1a34 & 1) == 0) {
      func_0x00f78a20(0x3d22a98,0);
      func_0x00f78a20(0x3d23bf0);
      bRam0000000003ec1a34 = 1;
    }
    *(undefined1 *)(lVar7 + 0x20) = 1;
    return lVar7;
  }
  uVar12 = (ulong)*(uint *)(lVar9 + 0x18);
  lVar7 = lVar9;
  if (0 < (int)*(uint *)(lVar9 + 0x18)) {
    lVar17 = 4;
    do {
      uVar16 = lVar17 - 4;
      if ((uVar12 & 0xffffffff) <= uVar16) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar11 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar17 * 8);
      lVar7 = *(long *)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x18);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      plVar6 = (long *)func_0x00f78adc(uVar11,lVar7);
      if (plVar6 == (long *)0x0) {
        if (*(uint *)(lVar9 + 0x18) <= uVar16) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar7 = func_0x00f78adc(*(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar17 * 8),
                                /*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
        if (lVar7 == 0) {
          if (*(uint *)(lVar9 + 0x18) <= uVar16) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar15 = *(long **)(*(long *)(lVar9 + 0x10) + lVar17 * 8);
          plVar6 = *(long **)(lVar13 + 0x28);
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,1);
            *(long **)(lVar13 + 0x28) = plVar6;
          }
          *(uint *)(puVar4 + -100) = uVar1;
          lVar7 = *(long *)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x38);
          if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar7);
          }
          lVar14 = func_0x00f78ae0(lVar7,puVar4 + -100);
          lVar7 = lVar9;
          if (plVar6 == (long *)0x0) goto code_r0x01b83be4;
          if ((lVar14 != 0) &&
             (lVar10 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0)) {
            uVar11 = func_0x00f78b14();
            goto code_r0x01b83bf4;
          }
          if ((int)plVar6[3] == 0) goto code_r0x01b83be8;
          plVar6[4] = lVar14;
          if (plVar15 == (long *)0x0) goto code_r0x01b83be4;
          lVar7 = (**(code **)(*plVar15 + 0x178))
                            (plVar15,*(undefined8 *)(lVar13 + 0x28),
                             *(undefined8 *)(*plVar15 + 0x180));
        }
        else {
          lVar7 = /*UnityEngine.Events.InvokableCall$$Invoke*/ func_0x03231470(lVar7,0);
        }
      }
      else {
        lVar7 = (**(code **)(*plVar6 + 0x198))(plVar6,(ulong)uVar1,*(undefined8 *)(*plVar6 + 0x1a0))
        ;
      }
      uVar12 = (ulong)*(int *)(lVar9 + 0x18);
      lVar14 = lVar17 + -3;
      lVar17 = lVar17 + 1;
    } while (lVar14 < (long)uVar12);
  }
  return lVar7;
}



// ============================================================
// RVA: 0x1643ae4 | Core.DebugMenu.DebugUILabelBehaviour..ctor
// ============================================================

undefined1  [16] Core_DebugMenu_DebugUILabelBehaviour___ctor(ulong param_1)

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



