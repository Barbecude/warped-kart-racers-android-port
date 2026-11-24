// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Input.InputManagerExtensions

// ============================================================
// RVA: 0x164849c | Core.Input.InputManagerExtensions.IsController
// ============================================================

bool Core_Input_InputManagerExtensions__IsController(int param_1)

{
  return param_1 - 3U < 4;
}



// ============================================================
// RVA: 0x16484ac | Core.Input.InputManagerExtensions.IsKeyboard
// ============================================================

bool Core_Input_InputManagerExtensions__IsKeyboard(int param_1)

{
  return param_1 == 2;
}



// ============================================================
// RVA: 0x164b3a4 | Core.Input.InputManagerExtensions.GetInputFamily
// ============================================================

long Core_Input_InputManagerExtensions__GetInputFamily(long *param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000003eb57a2 & 1) == 0) {
    func_0x00f78a20(0x3d21498);
    func_0x00f78a20(0x3d21b78);
    func_0x00f78a20(0x3d22d90);
    func_0x00f78a20(0x3d25d78);
    bRam0000000003eb57a2 = 1;
  }
  if (param_1 != (long *)0x0) {
    uVar2 = /*Core.Input.InputManagerExtensions$$IsDeviceSiriRemote*/ func_0x0164b9ec(param_1);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    lVar3 = *param_1;
    bVar1 = *(byte *)(lVar3 + 300);
    if ((*(byte *)(/*UnityEngine.InputSystem.DualShock.DualShockGamepad_TypeInfo*/ lRam0000000003d21498 + 300) <= bVar1) &&
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.DualShock.DualShockGamepad_TypeInfo*/ lRam0000000003d21498 + 300) * 8 + -8) ==
        /*UnityEngine.InputSystem.DualShock.DualShockGamepad_TypeInfo*/ lRam0000000003d21498)) {
      return 5;
    }
    if ((*(byte *)(/*UnityEngine.InputSystem.XInput.XInputController_TypeInfo*/ lRam0000000003d25d78 + 300) <= bVar1) &&
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.XInput.XInputController_TypeInfo*/ lRam0000000003d25d78 + 300) * 8 + -8) ==
        /*UnityEngine.InputSystem.XInput.XInputController_TypeInfo*/ lRam0000000003d25d78)) {
      return 4;
    }
    if ((*(byte *)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 300) <= bVar1) &&
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 300) * 8 + -8) ==
        /*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78)) {
      return 3;
    }
    if (*(byte *)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 300) <= bVar1) {
      return (ulong)(*(long *)(*(long *)(lVar3 + 200) +
                               (ulong)*(byte *)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 300) * 8 + -8) ==
                    /*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90) << 1;
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x164b9ec | Core.Input.InputManagerExtensions.IsDeviceSiriRemote
// ============================================================

/* WARNING: Possible PIC construction at 0x0164ba8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164ba90) */
/* WARNING: Removing unreachable block (ram,0x0164ba9c) */
/* WARNING: Removing unreachable block (ram,0x0164ba94) */

uint Core_Input_InputManagerExtensions__IsDeviceSiriRemote(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  ushort *puVar17;
  uint uVar18;
  uint *puVar19;
  code *pcVar20;
  ushort *puVar21;
  long lVar22;
  long lVar23;
  ushort *puVar24;
  long *plVar25;
  int iVar26;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar27;
  undefined *puVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  puVar4 = &stack0xffffffffffffffe0;
  puVar27 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb57a1 & 1) == 0) {
    func_0x00f78a20(0x3d71c40);
    func_0x00f78a20(0x3d265f8);
    bRam0000000003eb57a1 = 1;
  }
  if (param_1 != (long *)0x0) {
    if ((*(byte *)(/*UnityEngine.InputSystem.iOS.iOSGameController_TypeInfo*/ lRam0000000003d265f8 + 300) <= *(byte *)(*param_1 + 300)) &&
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.iOS.iOSGameController_TypeInfo*/ lRam0000000003d265f8 + 300) * 8 + -8)
        == /*UnityEngine.InputSystem.iOS.iOSGameController_TypeInfo*/ lRam0000000003d265f8)) {
      lVar8 = /*UnityEngine.InputSystem.InputControl$$get_name*/ func_0x0303ce54(param_1,0);
      auVar30._8_8_ = /*STR('Remote')*/ lRam0000000003d71c40;
      auVar30._0_8_ = lVar8;
      uVar10 = 0x3d71c40;
      uVar13 = 0;
      puVar28 = &UNK_0164ba90;
      if (lVar8 == /*STR('Remote')*/ lRam0000000003d71c40) {
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
        if ((lVar8 != 0) && (/*STR('Remote')*/ lRam0000000003d71c40 != 0)) {
          if (*(int *)(lVar8 + 0x10) == *(int *)(/*STR('Remote')*/ lRam0000000003d71c40 + 0x10)) {
System_String__EqualsHelper:
            lVar8 = auVar30._0_8_;
            *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
            *(undefined8 *)(puVar4 + -0x20) = uVar10;
            *(long **)(puVar4 + -0x18) = param_1;
            *(undefined1 **)(puVar4 + -0x10) = puVar27;
            *(undefined **)(puVar4 + -8) = puVar28;
            if ((lVar8 != 0) && (auVar30._8_8_ != 0)) {
              plVar9 = (long *)(lVar8 + 0x14);
              iVar7 = *(int *)(lVar8 + 0x10);
              plVar25 = (long *)(auVar30._8_8_ + 0x14);
              uVar13 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
              if ((uVar13 & 1) == 0) {
                iVar26 = iVar7;
                if (9 < iVar7) {
                  do {
                    if ((int)*plVar9 != (int)*plVar25) {
                      return 0;
                    }
                    if (*(int *)((long)plVar9 + 4) != *(int *)((long)plVar25 + 4)) {
                      return 0;
                    }
                    if ((int)plVar9[1] != (int)plVar25[1]) {
                      return 0;
                    }
                    if (*(int *)((long)plVar9 + 0xc) != *(int *)((long)plVar25 + 0xc)) {
                      return 0;
                    }
                    if ((int)plVar9[2] != (int)plVar25[2]) {
                      return 0;
                    }
                    plVar9 = (long *)((long)plVar9 + 0x14);
                    plVar25 = (long *)((long)plVar25 + 0x14);
                    iVar7 = iVar26 + -10;
                    bVar5 = 0x13 < iVar26;
                    iVar26 = iVar7;
                  } while (bVar5);
                }
              }
              else {
                iVar26 = iVar7;
                if (0xb < iVar7) {
                  do {
                    if (((*plVar9 != *plVar25) || (plVar9[1] != plVar25[1])) ||
                       (plVar9[2] != plVar25[2])) {
                      return 0;
                    }
                    plVar9 = plVar9 + 3;
                    plVar25 = plVar25 + 3;
                    iVar7 = iVar26 + -0xc;
                    bVar5 = 0x17 < iVar26;
                    iVar26 = iVar7;
                  } while (bVar5);
                }
              }
              if (iVar7 < 1) {
                uVar6 = 1;
              }
              else {
                iVar7 = iVar7 + 2;
                do {
                  bVar5 = (int)*plVar9 == (int)*plVar25;
                  uVar6 = (uint)bVar5;
                  if (!bVar5) {
                    return uVar6;
                  }
                  plVar9 = (long *)((long)plVar9 + 4);
                  plVar25 = (long *)((long)plVar25 + 4);
                  iVar7 = iVar7 + -2;
                } while (2 < iVar7);
              }
              return uVar6;
            }
            auVar29 = func_0x00f78af4();
            lVar22 = auVar29._8_8_;
            lVar8 = auVar29._0_8_;
            *(undefined8 *)(puVar4 + -0x60) = unaff_x22;
            *(undefined8 *)(puVar4 + -0x58) = unaff_x21;
            *(undefined8 *)(puVar4 + -0x50) = uVar10;
            *(long **)(puVar4 + -0x48) = param_1;
            *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
            *(undefined **)(puVar4 + -0x38) = &System_String__CompareOrdinalHelper;
            if ((bRam0000000003eb9441 & 1) == 0) {
              func_0x00f78a20(0x3d232c0);
              bRam0000000003eb9441 = 1;
            }
            if ((lVar8 != 0) && (lVar22 != 0)) {
              uVar1 = *(undefined4 *)(lVar8 + 0x10);
              uVar2 = *(undefined4 *)(lVar22 + 0x10);
              if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar7 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
              puVar15 = (uint *)(lVar8 + 0x14);
              puVar19 = (uint *)(lVar22 + 0x14);
              if (iVar7 < 10) goto code_r0x029ca8c8;
              lVar23 = 4;
              iVar26 = iVar7;
              goto code_r0x029ca858;
            }
            auVar30 = func_0x00f78af4();
            plVar25 = auVar30._8_8_;
            plVar9 = auVar30._0_8_;
            *(undefined8 *)(puVar4 + -0x90) = unaff_x22;
            *(undefined8 *)(puVar4 + -0x88) = 0x3eb9000;
            *(undefined1 (*) [16])(puVar4 + -0x80) = auVar29;
            *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
            *(undefined **)(puVar4 + -0x68) = &System_String__Equals;
            if ((bRam0000000003eb9442 & 1) == 0) {
              func_0x00f78a20(0x3d24dd0);
              bRam0000000003eb9442 = 1;
            }
            if (plVar9 != (long *)0x0) {
              if ((plVar25 != (long *)0x0) && (*plVar25 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
                if (plVar9 == plVar25) {
                  return 1;
                }
                uVar14 = uVar13;
                if (plVar25 == (long *)0x0) goto code_r0x029caa44;
                if ((int)plVar9[2] == (int)plVar25[2]) goto code_r0x029ca9f4;
              }
              return 0;
            }
            func_0x00f78a24(0x3d23938);
            plVar9 = (long *)func_0x00f78aec();
            /*System.NullReferenceException$$.ctor*/ func_0x02950520(plVar9,0);
            uVar10 = func_0x00f78a24(0x3d5dad8);
            func_0x00f78ac0(plVar9,uVar10);
            uVar14 = uVar13;
code_r0x029caa44:
            auVar30 = func_0x00f78af4();
            lVar22 = auVar30._8_8_;
            lVar8 = auVar30._0_8_;
            *(undefined8 *)(puVar4 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar4 + -0xb8) = 0x3eb9000;
            *(long **)(puVar4 + -0xb0) = plVar25;
            *(long **)(puVar4 + -0xa8) = plVar9;
            *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
            *(undefined **)(puVar4 + -0x98) = &System_String__Equals;
            uVar13 = uVar14;
            if ((bRam0000000003eb9443 & 1) == 0) {
              func_0x00f78a20(0x3d20b50);
              bRam0000000003eb9443 = 1;
            }
            if (5 < (uint)uVar14) {
code_r0x029caca0:
              uVar10 = func_0x00f78a24(0x3d746f0);
              uVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
              func_0x00f78a24(0x3d1fce8);
              uVar11 = func_0x00f78aec();
              uVar12 = func_0x00f78a24(0x3d784e0);
              /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar11,uVar10,uVar12,0);
              uVar10 = func_0x00f78a24(0x3d5dae8);
              func_0x00f78ac0(uVar11,uVar10);
              goto code_r0x029cad04;
            }
            if (lVar8 == lVar22) {
              return 1;
            }
            if (lVar22 == 0) {
              return 0;
            }
            switch(uVar14 & 0xffffffff) {
            case 0:
              if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar9 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
              break;
            case 1:
              if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar9 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
              goto joined_r0x029caba0;
            case 2:
              if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar9 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
              break;
            case 3:
              if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar9 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
              if ((plVar9 == (long *)0x0) ||
                 (plVar9 = (long *)(**(code **)(*plVar9 + 0x1f8))
                                             (plVar9,*(undefined8 *)(*plVar9 + 0x200)),
                 plVar9 == (long *)0x0)) goto code_r0x029cad04;
              pcVar20 = *(code **)(*plVar9 + 0x1a8);
              uVar10 = *(undefined8 *)(*plVar9 + 0x1b0);
              uVar11 = 1;
              goto code_r0x029cabc8;
            case 4:
              if (*(int *)(lVar8 + 0x10) != *(int *)(lVar22 + 0x10)) {
                return 0;
              }
              puVar27 = *(undefined1 **)(puVar4 + -0xa0);
              puVar28 = *(undefined **)(puVar4 + -0x98);
              uVar10 = *(undefined8 *)(puVar4 + -0xb0);
              param_1 = *(long **)(puVar4 + -0xa8);
              unaff_x22 = *(undefined8 *)(puVar4 + -0xc0);
              unaff_x21 = *(undefined8 *)(puVar4 + -0xb8);
              puVar4 = puVar4 + -0x90;
              goto System_String__EqualsHelper;
            case 5:
              iVar7 = *(int *)(lVar8 + 0x10);
              if (iVar7 != *(int *)(lVar22 + 0x10)) {
                return 0;
              }
              if (iVar7 == 0) goto code_r0x029cac68;
              lVar16 = (long)iVar7 << 1;
              puVar17 = (ushort *)(lVar8 + 0x16);
              puVar24 = (ushort *)(lVar8 + 0x14);
              lVar23 = lVar16;
              goto code_r0x029cac24;
            default:
              goto code_r0x029caca0;
            }
            if ((plVar9 == (long *)0x0) ||
               (plVar9 = (long *)(**(code **)(*plVar9 + 0x1f8))
                                           (plVar9,*(undefined8 *)(*plVar9 + 0x200)),
               plVar9 == (long *)0x0)) {
code_r0x029cad04:
              lVar8 = func_0x00f78af4();
              if (*(int *)(lVar8 + 0x10) == 0) {
                return 1;
              }
              lVar22 = (long)*(int *)(lVar8 + 0x10) * 2;
              puVar17 = (ushort *)(lVar8 + 0x14);
              puVar24 = (ushort *)(lVar8 + 0x16);
              do {
                lVar22 = lVar22 + -2;
                uVar3 = *puVar17;
                puVar17 = puVar24;
                puVar24 = puVar24 + 1;
              } while (uVar3 < 0x80 && lVar22 != 0);
              return (uint)(uVar3 < 0x80);
            }
            pcVar20 = *(code **)(*plVar9 + 0x1a8);
            uVar10 = *(undefined8 *)(*plVar9 + 0x1b0);
            uVar11 = 0;
code_r0x029cabc8:
            iVar7 = (*pcVar20)(plVar9,lVar8,lVar22,uVar11,uVar10);
            goto code_r0x029cabcc;
          }
          uVar6 = 0;
        }
      }
      return uVar6;
    }
  }
  return 0;
code_r0x029ca9f4:
  puVar27 = *(undefined1 **)(puVar4 + -0x70);
  puVar28 = *(undefined **)(puVar4 + -0x68);
  uVar10 = *(undefined8 *)(puVar4 + -0x80);
  param_1 = *(long **)(puVar4 + -0x78);
  unaff_x22 = *(undefined8 *)(puVar4 + -0x90);
  unaff_x21 = *(undefined8 *)(puVar4 + -0x88);
  puVar4 = puVar4 + -0x60;
  goto System_String__EqualsHelper;
code_r0x029cac8c:
  iVar7 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar8,lVar22,0);
  goto code_r0x029cabcc;
  while( true ) {
    if (puVar15[1] != puVar19[1]) goto code_r0x029ca930;
    if (puVar15[2] != puVar19[2]) {
      lVar23 = 8;
      goto code_r0x029ca930;
    }
    if (puVar15[3] != puVar19[3]) {
      lVar23 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar15[4] != puVar19[4]) {
      lVar23 = 0x10;
      goto code_r0x029ca930;
    }
    puVar15 = puVar15 + 5;
    puVar19 = puVar19 + 5;
    iVar7 = iVar26 + -10;
    bVar5 = iVar26 < 0x14;
    iVar26 = iVar7;
    if (bVar5) break;
code_r0x029ca858:
    if (*puVar15 != *puVar19) {
      lVar23 = 0;
code_r0x029ca930:
      puVar15 = (uint *)(lVar23 + (long)puVar15);
      puVar19 = (uint *)(lVar23 + (long)puVar19);
      uVar6 = (uint)(ushort)*puVar15 - (uint)(ushort)*puVar19;
      if (uVar6 != 0) {
        return uVar6;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar7) {
    iVar7 = iVar7 + 2;
    do {
      if (*puVar15 != *puVar19) {
        uVar6 = (*puVar15 & 0xffff) - (*puVar19 & 0xffff);
        if (uVar6 != 0) {
          return uVar6;
        }
code_r0x029ca948:
        uVar6 = (uint)*(ushort *)((long)puVar15 + 2);
        uVar18 = (uint)*(ushort *)((long)puVar19 + 2);
        goto code_r0x029ca950;
      }
      puVar15 = puVar15 + 1;
      puVar19 = puVar19 + 1;
      iVar7 = iVar7 + -2;
    } while (2 < iVar7);
  }
  uVar6 = *(uint *)(lVar8 + 0x10);
  uVar18 = *(uint *)(lVar22 + 0x10);
code_r0x029ca950:
  return uVar6 - uVar18;
  while( true ) {
    lVar23 = lVar23 + -2;
    puVar17 = puVar21 + 1;
    puVar24 = puVar21;
    if (lVar23 == 0) break;
code_r0x029cac24:
    puVar21 = puVar17;
    if (0x7f < *puVar24) goto code_r0x029cac8c;
  }
  if (iVar7 != 0) {
    puVar17 = (ushort *)(lVar22 + 0x16);
    puVar24 = (ushort *)(lVar22 + 0x14);
    do {
      puVar21 = puVar17;
      if (0x7f < *puVar24) goto code_r0x029cac8c;
      lVar16 = lVar16 + -2;
      puVar17 = puVar21 + 1;
      puVar24 = puVar21;
    } while (lVar16 != 0);
  }
code_r0x029cac68:
  iVar7 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar8,lVar22);
code_r0x029cabcc:
  return (uint)(iVar7 == 0);
}



// ============================================================
// RVA: 0x164bbc8 | Core.Input.InputManagerExtensions.IsDeviceJoyCon
// ============================================================

undefined8 Core_Input_InputManagerExtensions__IsDeviceJoyCon(void)

{
  return 0;
}



// ============================================================
// RVA: 0x164bbd0 | Core.Input.InputManagerExtensions.IsControllerOrKeyboard
// ============================================================

bool Core_Input_InputManagerExtensions__IsControllerOrKeyboard(int param_1)

{
  return param_1 - 2U < 5;
}



