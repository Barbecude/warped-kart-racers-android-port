// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Input.ControllerRemappingsNative

// ============================================================
// RVA: 0x16472e0 | Core.Input.ControllerRemappingsNative.OnInternalControllerMappingsChanged
// ============================================================

void Core_Input_ControllerRemappingsNative__OnInternalControllerMappingsChanged(void)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  long lStack_58;
  
  if ((bRam0000000003eb576c & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb576c = 1;
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Core.Input.ControllerRemappingsNative$$PollForUpdatedMappings*/ func_0x016476b4();
  lVar14 = **(long **)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8);
  if (lVar14 == 0) {
    return;
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbb330 == '\0') {
    func_0x00f78a20(0x3d20a50);
    cRam0000000003cbb330 = '\x01';
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = *(long **)(*(long *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8) + 8);
  lStack_58 = lVar14;
  lVar9 = *(long *)(lVar14 + 0x68);
  if (lVar9 == 0) {
    plVar17 = &lStack_58;
    lVar16 = 1;
  }
  else {
    lVar16 = *(long *)(lVar9 + 0x18);
    if (lVar16 == 0) {
      return;
    }
    plVar17 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar17[lVar9];
    pcVar15 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01647ce0:
          (*pcVar15)(plVar8,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar14 + 0x18) == 0)) goto code_r0x01647bd8;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,plVar8,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01647cec;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar7 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01647e78;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01647e78:
            pcVar15 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01647e50;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01647e50:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar15 = (code *)*puVar7;
          }
          (*pcVar15)(plVar1,plVar8,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar14 + 0x18) == 0))
        goto code_r0x01647ce0;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(plVar8,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01647cec;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01647e14;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar10,(ulong)uVar2);
code_r0x01647e14:
          pcVar15 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar8;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01647dec;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(plVar8);
code_r0x01647dec:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar15 = (code *)*puVar7;
        }
        (*pcVar15)(plVar8,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01647ce0;
code_r0x01647bd8:
      (*pcVar15)(plVar1,plVar8,lVar10);
    }
code_r0x01647cec:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar16) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x16473c0 | Core.Input.ControllerRemappingsNative.add_ControllerMappingsChanged
// ============================================================

long Core_Input_ControllerRemappingsNative__add_ControllerMappingsChanged(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_e8;
  
  if ((bRam0000000003eb5767 & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d26d78);
    bRam0000000003eb5767 = 1;
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = **(long **)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8);
  while ((plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar8,param_1,0), plVar5 == (long *)0x0 ||
         (*plVar5 == /*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ lRam0000000003d26d78))) {
    if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = func_0x00ff0f44(*(undefined8 *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8),plVar5,lVar8);
    bVar3 = lVar8 == lVar6;
    lVar8 = lVar6;
    if (bVar3) {
      return lVar6;
    }
  }
  uVar7 = func_0x00f78e5c(plVar5);
  if ((bRam0000000003eb5768 & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d26d78);
    bRam0000000003eb5768 = 1;
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = **(long **)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8);
  while ((plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,uVar7,0), plVar5 == (long *)0x0 ||
         (*plVar5 == /*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ lRam0000000003d26d78))) {
    if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = func_0x00ff0f44(*(undefined8 *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8),plVar5,lVar8);
    bVar3 = lVar8 == lVar6;
    lVar8 = lVar6;
    if (bVar3) {
      return lVar6;
    }
  }
  func_0x00f78e5c(plVar5);
  if ((bRam0000000003eb5769 & 1) == 0) {
    func_0x00f78a20(0x3d539f8);
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d26d70);
    bRam0000000003eb5769 = 1;
  }
  iVar4 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0);
  if ((iVar4 == 8) || (iVar4 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0), iVar4 == 0x1f)) {
    if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    func_0x0032bf0c();
    lVar8 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.InternalControllerMappingsChangedFunc_TypeInfo*/ uRam0000000003d26d70);
    puVar2 = puRam0000000003d539f8;
    *(undefined8 *)(lVar8 + 0x10) = *puRam0000000003d539f8;
    *(undefined8 *)(lVar8 + 0x20) = 0;
    *(undefined8 **)(lVar8 + 0x28) = puVar2;
    func_0x00f78f0c();
    func_0x0032c834();
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb576a & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb576a = 1;
  }
  iVar4 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0);
  if ((iVar4 != 8) && (lVar8 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0), (int)lVar8 != 0x1f)) {
    return lVar8;
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = func_0x0032c840();
  lVar8 = func_0x00f78eec();
  func_0x00f78f08(uVar7);
  lVar6 = *(long *)(*(long *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8) + 8);
  if ((bRam0000000003eb576f & 1) == 0) {
    func_0x00f78a20(0x3d1ede0);
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d2e6a8);
    func_0x00f78a20(0x3d2e6b0);
    func_0x00f78a20(0x3d3a218);
    func_0x00f78a20(0x3d3a210);
    func_0x00f78a20(0x3d1d8b0);
    bRam0000000003eb576f = 1;
  }
  uStack_e8 = 0;
  if (lVar6 != 0) {
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Clear*/ func_0x01ea7390(lVar6,uRam0000000003d2e6b0);
    lVar9 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) == 0) goto code_r0x01647ac0;
      *(undefined2 *)(lVar9 + 0x20) = 0x3b;
      if ((lVar8 != 0) && (lVar8 = /*System.String$$Split*/ func_0x029cb2ac(lVar8,lVar9,0), lVar8 != 0)) {
        uVar12 = *(uint *)(lVar8 + 0x18);
        if ((int)uVar12 < 1) {
          return 0;
        }
        uVar16 = 0;
        while (uVar16 < uVar12) {
          lVar9 = *(long *)(lVar8 + (long)(int)uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto code_r0x01647abc;
          if (2 < *(int *)(lVar9 + 0x10)) {
            iVar4 = /*System.String$$get_Chars*/ func_0x029c5420(lVar9,0,0);
            if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = 3;
            if (iVar4 == 0x58) {
              uVar13 = 4;
            }
            uVar1 = 5;
            if (iVar4 != 0x50) {
              uVar1 = uVar13;
            }
            uVar13 = 6;
            if (iVar4 != 0x4a) {
              uVar13 = uVar1;
            }
            lVar9 = /*System.String$$Substring*/ func_0x029cbd54(lVar9,2,0);
            lVar10 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
            if (lVar10 == 0) goto code_r0x01647abc;
            if (*(int *)(lVar10 + 0x18) == 0) break;
            *(undefined2 *)(lVar10 + 0x20) = 0x2c;
            if ((lVar9 == 0) || (lVar9 = /*System.String$$Split*/ func_0x029cb2ac(lVar9,lVar10,0), lVar9 == 0))
            goto code_r0x01647abc;
            lVar10 = func_0x00f78aec(/*System.Collections.Generic.List<ControllerMapping>_TypeInfo*/ uRam0000000003d1d8b0);
            /*System.Collections.Generic.List<ControllerMapping>$$.ctor*/ func_0x02387360(lVar10,*(undefined4 *)(lVar9 + 0x18),uRam0000000003d3a210);
            uVar12 = *(uint *)(lVar9 + 0x18);
            if (0 < (int)uVar12) {
              lVar14 = 0;
              do {
                if (uVar12 <= (uint)lVar14) goto code_r0x01647ac0;
                lVar15 = *(long *)(lVar9 + 0x20 + lVar14 * 8);
                lVar11 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
                if (lVar11 == 0) goto code_r0x01647abc;
                if (*(int *)(lVar11 + 0x18) == 0) goto code_r0x01647ac0;
                *(undefined2 *)(lVar11 + 0x20) = 0x3d;
                if ((lVar15 == 0) || (lVar11 = /*System.String$$Split*/ func_0x029cb2ac(lVar15,lVar11,0), lVar11 == 0))
                goto code_r0x01647abc;
                if ((*(int *)(lVar11 + 0x18) == 2) &&
                   (iVar4 = /*System.Int32$$TryParse*/ func_0x02ae9d70(*(undefined8 *)(lVar11 + 0x20),(long)&uStack_e8 + 4,0),
                   iVar4 != 0)) {
                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) goto code_r0x01647ac0;
                  iVar4 = /*System.Int32$$TryParse*/ func_0x02ae9d70(*(undefined8 *)(lVar11 + 0x28),&uStack_e8,0);
                  if (iVar4 != 0) {
                    if (lVar10 == 0) goto code_r0x01647abc;
                    /*System.Collections.Generic.List<ControllerMapping>$$Add*/ func_0x02387f4c(lVar10,uStack_e8,uRam0000000003d3a218);
                  }
                }
                uVar12 = *(uint *)(lVar9 + 0x18);
                lVar14 = lVar14 + 1;
              } while ((int)lVar14 < (int)uVar12);
            }
            /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar6,uVar13,lVar10,uRam0000000003d2e6a8);
          }
          uVar16 = uVar16 + 1;
          uVar12 = *(uint *)(lVar8 + 0x18);
          if ((int)uVar12 <= (int)uVar16) {
            return 0;
          }
        }
        goto code_r0x01647ac0;
      }
    }
  }
code_r0x01647abc:
  func_0x00f78af4();
code_r0x01647ac0:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
  if ((bRam0000000003eb576b & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb576b = 1;
  }
  iVar4 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0);
  if ((iVar4 != 8) && (lVar8 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0), (int)lVar8 != 0x1f)) {
    return lVar8;
  }
  lVar8 = /*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50;
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    lVar8 = func_0x00f78ad0();
  }
  lVar6 = 0;
  do {
    if (*(long *)(lVar6 + 0x3ec3548) != 0) {
      func_0x03306cc0(uRam0000000003c9f670);
      auVar17 = _objc_retainAutoreleasedReturnValue();
      func_0x03308900(auVar17._0_8_,auVar17._8_8_,*(undefined8 *)(lVar6 + 0x3ec3548));
      _objc_release(auVar17._0_8_);
      uVar7 = *(undefined8 *)(lVar6 + 0x3ec3548);
      *(undefined8 *)(lVar6 + 0x3ec3548) = 0;
      lVar8 = _objc_release(uVar7);
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x20);
  uRam0000000003ec3568 = 0;
  return lVar8;
}



// ============================================================
// RVA: 0x16474b4 | Core.Input.ControllerRemappingsNative.remove_ControllerMappingsChanged
// ============================================================

long Core_Input_ControllerRemappingsNative__remove_ControllerMappingsChanged(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_a8;
  
  if ((bRam0000000003eb5768 & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d26d78);
    bRam0000000003eb5768 = 1;
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = **(long **)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8);
  while ((plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,param_1,0), plVar5 == (long *)0x0 ||
         (*plVar5 == /*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ lRam0000000003d26d78))) {
    if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = func_0x00ff0f44(*(undefined8 *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8),plVar5,lVar7);
    bVar3 = lVar7 == lVar6;
    lVar7 = lVar6;
    if (bVar3) {
      return lVar6;
    }
  }
  func_0x00f78e5c(plVar5);
  if ((bRam0000000003eb5769 & 1) == 0) {
    func_0x00f78a20(0x3d539f8);
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d26d70);
    bRam0000000003eb5769 = 1;
  }
  iVar4 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0);
  if ((iVar4 == 8) || (iVar4 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0), iVar4 == 0x1f)) {
    if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    func_0x0032bf0c();
    lVar7 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.InternalControllerMappingsChangedFunc_TypeInfo*/ uRam0000000003d26d70);
    puVar2 = puRam0000000003d539f8;
    *(undefined8 *)(lVar7 + 0x10) = *puRam0000000003d539f8;
    *(undefined8 *)(lVar7 + 0x20) = 0;
    *(undefined8 **)(lVar7 + 0x28) = puVar2;
    func_0x00f78f0c();
    func_0x0032c834();
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb576a & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb576a = 1;
  }
  iVar4 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0);
  if ((iVar4 != 8) && (lVar7 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0), (int)lVar7 != 0x1f)) {
    return lVar7;
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = func_0x0032c840();
  lVar7 = func_0x00f78eec();
  func_0x00f78f08(uVar8);
  lVar6 = *(long *)(*(long *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8) + 8);
  if ((bRam0000000003eb576f & 1) == 0) {
    func_0x00f78a20(0x3d1ede0);
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d2e6a8);
    func_0x00f78a20(0x3d2e6b0);
    func_0x00f78a20(0x3d3a218);
    func_0x00f78a20(0x3d3a210);
    func_0x00f78a20(0x3d1d8b0);
    bRam0000000003eb576f = 1;
  }
  uStack_a8 = 0;
  if (lVar6 != 0) {
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Clear*/ func_0x01ea7390(lVar6,uRam0000000003d2e6b0);
    lVar9 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) == 0) goto code_r0x01647ac0;
      *(undefined2 *)(lVar9 + 0x20) = 0x3b;
      if ((lVar7 != 0) && (lVar7 = /*System.String$$Split*/ func_0x029cb2ac(lVar7,lVar9,0), lVar7 != 0)) {
        uVar12 = *(uint *)(lVar7 + 0x18);
        if ((int)uVar12 < 1) {
          return 0;
        }
        uVar16 = 0;
        while (uVar16 < uVar12) {
          lVar9 = *(long *)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto code_r0x01647abc;
          if (2 < *(int *)(lVar9 + 0x10)) {
            iVar4 = /*System.String$$get_Chars*/ func_0x029c5420(lVar9,0,0);
            if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = 3;
            if (iVar4 == 0x58) {
              uVar13 = 4;
            }
            uVar1 = 5;
            if (iVar4 != 0x50) {
              uVar1 = uVar13;
            }
            uVar13 = 6;
            if (iVar4 != 0x4a) {
              uVar13 = uVar1;
            }
            lVar9 = /*System.String$$Substring*/ func_0x029cbd54(lVar9,2,0);
            lVar10 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
            if (lVar10 == 0) goto code_r0x01647abc;
            if (*(int *)(lVar10 + 0x18) == 0) break;
            *(undefined2 *)(lVar10 + 0x20) = 0x2c;
            if ((lVar9 == 0) || (lVar9 = /*System.String$$Split*/ func_0x029cb2ac(lVar9,lVar10,0), lVar9 == 0))
            goto code_r0x01647abc;
            lVar10 = func_0x00f78aec(/*System.Collections.Generic.List<ControllerMapping>_TypeInfo*/ uRam0000000003d1d8b0);
            /*System.Collections.Generic.List<ControllerMapping>$$.ctor*/ func_0x02387360(lVar10,*(undefined4 *)(lVar9 + 0x18),uRam0000000003d3a210);
            uVar12 = *(uint *)(lVar9 + 0x18);
            if (0 < (int)uVar12) {
              lVar14 = 0;
              do {
                if (uVar12 <= (uint)lVar14) goto code_r0x01647ac0;
                lVar15 = *(long *)(lVar9 + 0x20 + lVar14 * 8);
                lVar11 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
                if (lVar11 == 0) goto code_r0x01647abc;
                if (*(int *)(lVar11 + 0x18) == 0) goto code_r0x01647ac0;
                *(undefined2 *)(lVar11 + 0x20) = 0x3d;
                if ((lVar15 == 0) || (lVar11 = /*System.String$$Split*/ func_0x029cb2ac(lVar15,lVar11,0), lVar11 == 0))
                goto code_r0x01647abc;
                if ((*(int *)(lVar11 + 0x18) == 2) &&
                   (iVar4 = /*System.Int32$$TryParse*/ func_0x02ae9d70(*(undefined8 *)(lVar11 + 0x20),(long)&uStack_a8 + 4,0),
                   iVar4 != 0)) {
                  if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) == 0) goto code_r0x01647ac0;
                  iVar4 = /*System.Int32$$TryParse*/ func_0x02ae9d70(*(undefined8 *)(lVar11 + 0x28),&uStack_a8,0);
                  if (iVar4 != 0) {
                    if (lVar10 == 0) goto code_r0x01647abc;
                    /*System.Collections.Generic.List<ControllerMapping>$$Add*/ func_0x02387f4c(lVar10,uStack_a8,uRam0000000003d3a218);
                  }
                }
                uVar12 = *(uint *)(lVar9 + 0x18);
                lVar14 = lVar14 + 1;
              } while ((int)lVar14 < (int)uVar12);
            }
            /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar6,uVar13,lVar10,uRam0000000003d2e6a8);
          }
          uVar16 = uVar16 + 1;
          uVar12 = *(uint *)(lVar7 + 0x18);
          if ((int)uVar12 <= (int)uVar16) {
            return 0;
          }
        }
        goto code_r0x01647ac0;
      }
    }
  }
code_r0x01647abc:
  func_0x00f78af4();
code_r0x01647ac0:
  uVar8 = func_0x00f78b24();
  func_0x00f78ac0(uVar8,0);
  if ((bRam0000000003eb576b & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb576b = 1;
  }
  iVar4 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0);
  if ((iVar4 != 8) && (lVar7 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0), (int)lVar7 != 0x1f)) {
    return lVar7;
  }
  lVar7 = /*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50;
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    lVar7 = func_0x00f78ad0();
  }
  lVar6 = 0;
  do {
    if (*(long *)(lVar6 + 0x3ec3548) != 0) {
      func_0x03306cc0(uRam0000000003c9f670);
      auVar17 = _objc_retainAutoreleasedReturnValue();
      func_0x03308900(auVar17._0_8_,auVar17._8_8_,*(undefined8 *)(lVar6 + 0x3ec3548));
      _objc_release(auVar17._0_8_);
      uVar8 = *(undefined8 *)(lVar6 + 0x3ec3548);
      *(undefined8 *)(lVar6 + 0x3ec3548) = 0;
      lVar7 = _objc_release(uVar8);
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x20);
  uRam0000000003ec3568 = 0;
  return lVar7;
}



// ============================================================
// RVA: 0x16475a8 | Core.Input.ControllerRemappingsNative.Init
// ============================================================

long Core_Input_ControllerRemappingsNative__Init(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_68;
  
  if ((bRam0000000003eb5769 & 1) == 0) {
    func_0x00f78a20(0x3d539f8);
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d26d70);
    bRam0000000003eb5769 = 1;
  }
  iVar3 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0);
  if ((iVar3 == 8) || (iVar3 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0), iVar3 == 0x1f)) {
    if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    func_0x0032bf0c();
    lVar4 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.InternalControllerMappingsChangedFunc_TypeInfo*/ uRam0000000003d26d70);
    puVar2 = puRam0000000003d539f8;
    *(undefined8 *)(lVar4 + 0x10) = *puRam0000000003d539f8;
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 **)(lVar4 + 0x28) = puVar2;
    func_0x00f78f0c();
    func_0x0032c834();
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb576a & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb576a = 1;
  }
  iVar3 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0);
  if ((iVar3 != 8) && (lVar4 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0), (int)lVar4 != 0x1f)) {
    return lVar4;
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = func_0x0032c840();
  lVar4 = func_0x00f78eec();
  func_0x00f78f08(uVar5);
  lVar9 = *(long *)(*(long *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8) + 8);
  if ((bRam0000000003eb576f & 1) == 0) {
    func_0x00f78a20(0x3d1ede0);
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d2e6a8);
    func_0x00f78a20(0x3d2e6b0);
    func_0x00f78a20(0x3d3a218);
    func_0x00f78a20(0x3d3a210);
    func_0x00f78a20(0x3d1d8b0);
    bRam0000000003eb576f = 1;
  }
  uStack_68 = 0;
  if (lVar9 != 0) {
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Clear*/ func_0x01ea7390(lVar9,uRam0000000003d2e6b0);
    lVar6 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
    if (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) == 0) goto code_r0x01647ac0;
      *(undefined2 *)(lVar6 + 0x20) = 0x3b;
      if ((lVar4 != 0) && (lVar4 = /*System.String$$Split*/ func_0x029cb2ac(lVar4,lVar6,0), lVar4 != 0)) {
        uVar10 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar10) {
          uVar14 = 0;
          do {
            if (uVar10 <= uVar14) goto code_r0x01647ac0;
            lVar6 = *(long *)(lVar4 + (long)(int)uVar14 * 8 + 0x20);
            if (lVar6 == 0) goto code_r0x01647abc;
            if (2 < *(int *)(lVar6 + 0x10)) {
              iVar3 = /*System.String$$get_Chars*/ func_0x029c5420(lVar6,0,0);
              if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar11 = 3;
              if (iVar3 == 0x58) {
                uVar11 = 4;
              }
              uVar1 = 5;
              if (iVar3 != 0x50) {
                uVar1 = uVar11;
              }
              uVar11 = 6;
              if (iVar3 != 0x4a) {
                uVar11 = uVar1;
              }
              lVar6 = /*System.String$$Substring*/ func_0x029cbd54(lVar6,2,0);
              lVar7 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
              if (lVar7 == 0) goto code_r0x01647abc;
              if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x01647ac0;
              *(undefined2 *)(lVar7 + 0x20) = 0x2c;
              if ((lVar6 == 0) || (lVar6 = /*System.String$$Split*/ func_0x029cb2ac(lVar6,lVar7,0), lVar6 == 0))
              goto code_r0x01647abc;
              lVar7 = func_0x00f78aec(/*System.Collections.Generic.List<ControllerMapping>_TypeInfo*/ uRam0000000003d1d8b0);
              /*System.Collections.Generic.List<ControllerMapping>$$.ctor*/ func_0x02387360(lVar7,*(undefined4 *)(lVar6 + 0x18),uRam0000000003d3a210);
              uVar10 = *(uint *)(lVar6 + 0x18);
              if (0 < (int)uVar10) {
                lVar12 = 0;
                do {
                  if (uVar10 <= (uint)lVar12) goto code_r0x01647ac0;
                  lVar13 = *(long *)(lVar6 + 0x20 + lVar12 * 8);
                  lVar8 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
                  if (lVar8 == 0) goto code_r0x01647abc;
                  if (*(int *)(lVar8 + 0x18) == 0) goto code_r0x01647ac0;
                  *(undefined2 *)(lVar8 + 0x20) = 0x3d;
                  if ((lVar13 == 0) || (lVar8 = /*System.String$$Split*/ func_0x029cb2ac(lVar13,lVar8,0), lVar8 == 0))
                  goto code_r0x01647abc;
                  if ((*(int *)(lVar8 + 0x18) == 2) &&
                     (iVar3 = /*System.Int32$$TryParse*/ func_0x02ae9d70(*(undefined8 *)(lVar8 + 0x20),(long)&uStack_68 + 4,0),
                     iVar3 != 0)) {
                    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto code_r0x01647ac0;
                    iVar3 = /*System.Int32$$TryParse*/ func_0x02ae9d70(*(undefined8 *)(lVar8 + 0x28),&uStack_68,0);
                    if (iVar3 != 0) {
                      if (lVar7 == 0) goto code_r0x01647abc;
                      /*System.Collections.Generic.List<ControllerMapping>$$Add*/ func_0x02387f4c(lVar7,uStack_68,uRam0000000003d3a218);
                    }
                  }
                  uVar10 = *(uint *)(lVar6 + 0x18);
                  lVar12 = lVar12 + 1;
                } while ((int)lVar12 < (int)uVar10);
              }
              /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar9,uVar11,lVar7,uRam0000000003d2e6a8);
            }
            uVar14 = uVar14 + 1;
            uVar10 = *(uint *)(lVar4 + 0x18);
          } while ((int)uVar14 < (int)uVar10);
        }
        return 0;
      }
    }
  }
code_r0x01647abc:
  func_0x00f78af4();
code_r0x01647ac0:
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
  if ((bRam0000000003eb576b & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb576b = 1;
  }
  iVar3 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0);
  if ((iVar3 != 8) && (lVar4 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0), (int)lVar4 != 0x1f)) {
    return lVar4;
  }
  lVar4 = /*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50;
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    lVar4 = func_0x00f78ad0();
  }
  lVar9 = 0;
  do {
    if (*(long *)(lVar9 + 0x3ec3548) != 0) {
      func_0x03306cc0(uRam0000000003c9f670);
      auVar15 = _objc_retainAutoreleasedReturnValue();
      func_0x03308900(auVar15._0_8_,auVar15._8_8_,*(undefined8 *)(lVar9 + 0x3ec3548));
      _objc_release(auVar15._0_8_);
      uVar5 = *(undefined8 *)(lVar9 + 0x3ec3548);
      *(undefined8 *)(lVar9 + 0x3ec3548) = 0;
      lVar4 = _objc_release(uVar5);
    }
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x20);
  uRam0000000003ec3568 = 0;
  return lVar4;
}



// ============================================================
// RVA: 0x164768c | Core.Input.ControllerRemappingsNative.ControllerRemapping_Init
// ============================================================

/* WARNING: Possible PIC construction at 0x0032c178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0032c17c) */
/* WARNING: Removing unreachable block (ram,0x0032c184) */

void Core_Input_ControllerRemappingsNative__ControllerRemapping_Init(void)

{
  undefined1 uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar7;
  undefined8 extraout_x1_05;
  undefined8 uVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  undefined1 auStack_1b0 [128];
  long alStack_130 [6];
  undefined8 auStack_88 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR_03a5d648;
  iVar4 = func_0x01443194(2,0xf,0,0);
  uVar5 = uRam0000000003ec34b8;
  if (iVar4 == 0) {
    if (*(long *)PTR_03a5d648 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    uVar5 = extraout_x1;
  }
  else {
    uRam0000000003ec34b8 = 0x3c87290;
    _objc_release(uVar5);
    _objc_storeStrong(0x3ec34c0,*(undefined8 *)PTR_03a5c120);
    _objc_storeStrong(0x3ec34c8,*(undefined8 *)PTR_03a5c128);
    _objc_storeStrong(0x3ec34d0,*(undefined8 *)PTR_03a5c130);
    _objc_storeStrong(0x3ec34d8,*(undefined8 *)PTR_03a5c138);
    _objc_storeStrong(0x3ec34e0,*(undefined8 *)PTR_03a5c158);
    _objc_storeStrong(0x3ec34e8,*(undefined8 *)PTR_03a5c170);
    _objc_storeStrong(0x3ec34f0,*(undefined8 *)PTR_03a5c168);
    _objc_storeStrong(0x3ec34f8,*(undefined8 *)PTR_03a5c180);
    _objc_storeStrong(0x3ec3500,*(undefined8 *)PTR_03a5c160);
    _objc_storeStrong(0x3ec3508,*(undefined8 *)PTR_03a5c178);
    _objc_storeStrong(0x3ec3510,*(undefined8 *)PTR_03a5c140);
    _objc_storeStrong(0x3ec3518,*(undefined8 *)PTR_03a5c148);
    _objc_storeStrong(0x3ec3520,*(undefined8 *)PTR_03a5c150);
    uRam0000000003ec3530 = 0;
    uRam0000000003ec3528 = 0;
    uRam0000000003ec3540 = 0;
    uRam0000000003ec3538 = 0;
    auStack_88[0] = _objc_retain(*(undefined8 *)PTR_03a5c108);
    auStack_88[1] = _objc_retain(*(undefined8 *)PTR_03a5c110);
    auStack_88[2] = _objc_retain(*(undefined8 *)PTR_03a5c100);
    auStack_88[3] = _objc_retain(*(undefined8 *)PTR_03a5c118);
    lVar12 = 0;
    do {
      func_0x03306cc0(uRam0000000003c9f670);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)((long)auStack_88 + lVar12);
      func_0x03306bc0(uRam0000000003c9f5d8);
      auVar20 = _objc_retainAutoreleasedReturnValue();
      func_0x03305f60(uVar5,auVar20._8_8_,uVar11,0,auVar20._0_8_,&UNK_03c2bee0);
      uVar11 = _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(lVar12 + 0x3ec3548);
      *(undefined8 *)(lVar12 + 0x3ec3548) = uVar11;
      _objc_release(uVar8);
      _objc_release(auVar20._0_8_);
      _objc_release(uVar5);
      lVar12 = lVar12 + 8;
    } while (lVar12 != 0x20);
    uVar5 = 0;
  }
  alStack_130[4] = *(long *)PTR_03a5d648;
  uVar5 = _objc_retain(uVar5);
  iVar4 = func_0x01443194(2,0xf,0,0);
  if (iVar4 != 0) {
    lVar12 = 0;
    uRam0000000003ec3570 = 0;
    alStack_130[1] = 0;
    alStack_130[0] = 0;
    alStack_130[3] = 0;
    alStack_130[2] = 0;
    do {
      uVar11 = *(undefined8 *)((long)alStack_130 + lVar12);
      *(undefined8 *)((long)alStack_130 + lVar12) = 0;
      _objc_release(uVar11);
      lVar12 = lVar12 + 8;
    } while (lVar12 != 0x20);
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    func_0x033067e0(uRam0000000003c9f838);
    auVar20 = _objc_retainAutoreleasedReturnValue();
    uVar11 = auVar20._0_8_;
    lVar12 = func_0x03306900(uVar11,auVar20._8_8_,&uStack_270,auStack_1b0,0x10);
    if (lVar12 != 0) {
      lVar14 = *plStack_260;
      do {
        lVar13 = 0;
        do {
          if (*plStack_260 != lVar14) {
            _objc_enumerationMutation(uVar11);
          }
          uVar17 = *(undefined8 *)(lStack_268 + lVar13 * 8);
          func_0x033070a0(uVar17);
          lVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_release();
          uVar8 = extraout_x1_00;
          if (lVar6 != 0) {
            func_0x0330a4e0(uVar17);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            func_0x03307c20();
            auVar20 = _objc_retainAutoreleasedReturnValue();
            uVar7 = auVar20._0_8_;
            auVar20 = func_0x03306760(uVar7,auVar20._8_8_,0x3c872d0);
            if ((auVar20._0_8_ & 1) == 0) {
              auVar20 = func_0x03306760(uVar7,auVar20._8_8_,0x3c872f0);
              if ((auVar20._0_8_ & 1) != 0) goto code_r0x0032c350;
              auVar20 = func_0x03306760(uVar7,auVar20._8_8_,0x3c87310);
              if ((auVar20._0_8_ & 1) != 0) goto code_r0x0032c350;
              auVar20 = func_0x03306760(uVar7,auVar20._8_8_,0x3c87330);
              if ((auVar20._0_8_ & 1) == 0) {
                iVar4 = func_0x03306760(uVar7,auVar20._8_8_,0x3c87350);
                lVar6 = 3;
                if (iVar4 == 0) {
                  lVar6 = 0;
                }
              }
              else {
                lVar6 = 1;
              }
            }
            else {
code_r0x0032c350:
              lVar6 = 2;
            }
            _objc_release(uVar7);
            _objc_release(uVar8);
            func_0x033070a0(uVar17);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            dVar19 = (double)func_0x03307a20();
            _objc_release(uVar8);
            if ((dVar19 <= *(double *)(lVar6 * 8 + 0x3ec3528)) ||
               (uVar8 = extraout_x1_01, alStack_130[lVar6] == 0)) {
              *(double *)(lVar6 * 8 + 0x3ec3528) = dVar19;
              _objc_storeStrong(alStack_130 + lVar6,uVar17);
              uVar8 = extraout_x1_02;
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar12 != lVar13);
        lVar12 = func_0x03306900(uVar11,uVar8,&uStack_270,auStack_1b0,0x10);
      } while (lVar12 != 0);
    }
    _objc_release(uVar11);
    lVar12 = 0;
    do {
      if (*(long *)((long)alStack_130 + lVar12) == 0) {
        *(undefined8 *)(lVar12 + 0x3ec3528) = 0;
      }
      lVar12 = lVar12 + 8;
    } while (lVar12 != 0x20);
    lVar12 = 0;
    bVar9 = true;
    puVar16 = (undefined1 *)0x3ec3570;
    do {
      if (alStack_130[lVar12] != 0) {
        uVar11 = _objc_retain();
        func_0x03308360();
        lVar14 = _objc_retainAutoreleasedReturnValue();
        if (lVar14 != 0) {
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          lStack_2a8 = 0;
          uStack_2b0 = 0;
          uStack_298 = 0;
          plStack_2a0 = (long *)0x0;
          func_0x033064a0();
          uVar8 = _objc_retainAutoreleasedReturnValue();
          func_0x03306040();
          uVar17 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          auVar20 = func_0x03306900(uVar17,extraout_x1_03,&uStack_2b0,auStack_230,0x10);
          if (auVar20._0_8_ != 0) {
            lVar13 = *plStack_2a0;
            uVar2 = (int)lVar12 - 1;
            uVar1 = (undefined1)(0x4a5058 >> (ulong)((uVar2 & 3) << 3));
            if (2 < uVar2) {
              uVar1 = 0x47;
            }
            bVar3 = true;
            do {
              uVar8 = auVar20._8_8_;
              lVar6 = 0;
              do {
                if (*plStack_2a0 != lVar13) {
                  _objc_enumerationMutation(uVar17);
                  uVar8 = extraout_x1_04;
                }
                uVar18 = *(undefined8 *)(lStack_2a8 + lVar6 * 8);
                func_0x03307d00(lVar14,uVar8,uVar18);
                auVar21 = _objc_retainAutoreleasedReturnValue();
                uVar8 = auVar21._0_8_;
                auVar21 = func_0x03307840(uVar18,auVar21._8_8_,uVar8);
                uVar7 = auVar21._8_8_;
                if ((auVar21._0_8_ & 1) == 0) {
                  if ((undefined1 *)0x3ec366f < puVar16 + 5) {
                    _fwrite("iOS-ControllerRemapping: Not enough room in g_CurrentState to hold this many mappings. Bump!\n"
                            ,0x5d,1,*(undefined8 *)PTR_03a5d650);
                    _objc_release(uVar8);
                    _objc_release(uVar17);
                    _objc_release(lVar14);
                    _objc_release(uVar11);
                    goto code_r0x0032c750;
                  }
                  puVar15 = puVar16;
                  if (!bVar9 && bVar3) {
                    puVar15 = puVar16 + 1;
                    *puVar16 = 0x3b;
                  }
                  if (bVar3) {
                    lVar10 = 0;
                    *puVar15 = uVar1;
                    puVar15[1] = 0x3a;
                    do {
                      auVar21 = func_0x03307840(*(undefined8 *)(lVar10 * 8 + 0x3ec34b8),uVar7,uVar18
                                               );
                      uVar7 = auVar21._8_8_;
                      if ((auVar21._0_8_ & 1) != 0) break;
                      lVar10 = lVar10 + 1;
                    } while (lVar10 != 0xe);
                    lVar10 = 0;
                    do {
                      auVar21 = func_0x03307840(*(undefined8 *)(lVar10 * 8 + 0x3ec34b8),uVar7,uVar8)
                      ;
                      uVar7 = auVar21._8_8_;
                      if ((auVar21._0_8_ & 1) != 0) break;
                      lVar10 = lVar10 + 1;
                    } while (lVar10 != 0xe);
                    iVar4 = _sprintf(puVar15 + 2,"%d=%d");
                    puVar16 = puVar15 + 2 + iVar4;
                  }
                  else {
                    lVar10 = 0;
                    do {
                      auVar21 = func_0x03307840(*(undefined8 *)(lVar10 * 8 + 0x3ec34b8),uVar7,uVar18
                                               );
                      uVar7 = auVar21._8_8_;
                      if ((auVar21._0_8_ & 1) != 0) break;
                      lVar10 = lVar10 + 1;
                    } while (lVar10 != 0xe);
                    lVar10 = 0;
                    do {
                      auVar21 = func_0x03307840(*(undefined8 *)(lVar10 * 8 + 0x3ec34b8),uVar7,uVar8)
                      ;
                      uVar7 = auVar21._8_8_;
                      if ((auVar21._0_8_ & 1) != 0) break;
                      lVar10 = lVar10 + 1;
                    } while (lVar10 != 0xe);
                    iVar4 = _sprintf(puVar15,",%d=%d");
                    puVar16 = puVar15 + iVar4;
                  }
                  bVar3 = false;
                  bVar9 = false;
                }
                _objc_release(uVar8);
                lVar6 = lVar6 + 1;
                uVar8 = extraout_x1_05;
              } while (lVar6 != auVar20._0_8_);
              auVar20 = func_0x03306900(uVar17,extraout_x1_05,&uStack_2b0,auStack_230,0x10);
            } while (auVar20._0_8_ != 0);
          }
          _objc_release(uVar17);
          _objc_release(lVar14);
        }
        _objc_release(uVar11);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 4);
    _NSLog(0x3c872b0);
    if (pcRam0000000003ec3568 != (code *)0x0) {
      (*pcRam0000000003ec3568)();
    }
code_r0x0032c750:
    lVar12 = 0x18;
    do {
      _objc_release(*(undefined8 *)((long)alStack_130 + lVar12));
      lVar12 = lVar12 + -8;
    } while (lVar12 != -8);
  }
  _objc_release(uVar5);
  if (*(long *)PTR_03a5d648 == alStack_130[4]) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = 0;
  do {
    if (*(long *)(lVar12 + 0x3ec3548) != 0) {
      func_0x03306cc0(uRam0000000003c9f670);
      auVar20 = _objc_retainAutoreleasedReturnValue();
      func_0x03308900(auVar20._0_8_,auVar20._8_8_,*(undefined8 *)(lVar12 + 0x3ec3548));
      _objc_release(auVar20._0_8_);
      uVar5 = *(undefined8 *)(lVar12 + 0x3ec3548);
      *(undefined8 *)(lVar12 + 0x3ec3548) = 0;
      _objc_release(uVar5);
    }
    lVar12 = lVar12 + 8;
  } while (lVar12 != 0x20);
  pcRam0000000003ec3568 = (code *)0x0;
  return;
}



// ============================================================
// RVA: 0x16476a0 | Core.Input.ControllerRemappingsNative.ControllerRemapping_SetCallback
// ============================================================

void Core_Input_ControllerRemappingsNative__ControllerRemapping_SetCallback(void)

{
  uRam0000000003ec3568 = func_0x00f78f0c();
  return;
}



// ============================================================
// RVA: 0x16476b4 | Core.Input.ControllerRemappingsNative.PollForUpdatedMappings
// ============================================================

long Core_Input_ControllerRemappingsNative__PollForUpdatedMappings(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_68;
  
  if ((bRam0000000003eb576a & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb576a = 1;
  }
  iVar2 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0);
  if ((iVar2 != 8) && (lVar3 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0), (int)lVar3 != 0x1f)) {
    return lVar3;
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = func_0x0032c840();
  lVar3 = func_0x00f78eec();
  func_0x00f78f08(uVar4);
  lVar8 = *(long *)(*(long *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8) + 8);
  if ((bRam0000000003eb576f & 1) == 0) {
    func_0x00f78a20(0x3d1ede0);
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d2e6a8);
    func_0x00f78a20(0x3d2e6b0);
    func_0x00f78a20(0x3d3a218);
    func_0x00f78a20(0x3d3a210);
    func_0x00f78a20(0x3d1d8b0);
    bRam0000000003eb576f = 1;
  }
  uStack_68 = 0;
  if (lVar8 != 0) {
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Clear*/ func_0x01ea7390(lVar8,uRam0000000003d2e6b0);
    lVar5 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) goto code_r0x01647ac0;
      *(undefined2 *)(lVar5 + 0x20) = 0x3b;
      if ((lVar3 != 0) && (lVar3 = /*System.String$$Split*/ func_0x029cb2ac(lVar3,lVar5,0), lVar3 != 0)) {
        uVar9 = *(uint *)(lVar3 + 0x18);
        if (0 < (int)uVar9) {
          uVar13 = 0;
          do {
            if (uVar9 <= uVar13) goto code_r0x01647ac0;
            lVar5 = *(long *)(lVar3 + (long)(int)uVar13 * 8 + 0x20);
            if (lVar5 == 0) goto code_r0x01647abc;
            if (2 < *(int *)(lVar5 + 0x10)) {
              iVar2 = /*System.String$$get_Chars*/ func_0x029c5420(lVar5,0,0);
              if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar10 = 3;
              if (iVar2 == 0x58) {
                uVar10 = 4;
              }
              uVar1 = 5;
              if (iVar2 != 0x50) {
                uVar1 = uVar10;
              }
              uVar10 = 6;
              if (iVar2 != 0x4a) {
                uVar10 = uVar1;
              }
              lVar5 = /*System.String$$Substring*/ func_0x029cbd54(lVar5,2,0);
              lVar6 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
              if (lVar6 == 0) goto code_r0x01647abc;
              if (*(int *)(lVar6 + 0x18) == 0) goto code_r0x01647ac0;
              *(undefined2 *)(lVar6 + 0x20) = 0x2c;
              if ((lVar5 == 0) || (lVar5 = /*System.String$$Split*/ func_0x029cb2ac(lVar5,lVar6,0), lVar5 == 0))
              goto code_r0x01647abc;
              lVar6 = func_0x00f78aec(/*System.Collections.Generic.List<ControllerMapping>_TypeInfo*/ uRam0000000003d1d8b0);
              /*System.Collections.Generic.List<ControllerMapping>$$.ctor*/ func_0x02387360(lVar6,*(undefined4 *)(lVar5 + 0x18),uRam0000000003d3a210);
              uVar9 = *(uint *)(lVar5 + 0x18);
              if (0 < (int)uVar9) {
                lVar11 = 0;
                do {
                  if (uVar9 <= (uint)lVar11) goto code_r0x01647ac0;
                  lVar12 = *(long *)(lVar5 + 0x20 + lVar11 * 8);
                  lVar7 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
                  if (lVar7 == 0) goto code_r0x01647abc;
                  if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x01647ac0;
                  *(undefined2 *)(lVar7 + 0x20) = 0x3d;
                  if ((lVar12 == 0) || (lVar7 = /*System.String$$Split*/ func_0x029cb2ac(lVar12,lVar7,0), lVar7 == 0))
                  goto code_r0x01647abc;
                  if ((*(int *)(lVar7 + 0x18) == 2) &&
                     (iVar2 = /*System.Int32$$TryParse*/ func_0x02ae9d70(*(undefined8 *)(lVar7 + 0x20),(long)&uStack_68 + 4,0),
                     iVar2 != 0)) {
                    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto code_r0x01647ac0;
                    iVar2 = /*System.Int32$$TryParse*/ func_0x02ae9d70(*(undefined8 *)(lVar7 + 0x28),&uStack_68,0);
                    if (iVar2 != 0) {
                      if (lVar6 == 0) goto code_r0x01647abc;
                      /*System.Collections.Generic.List<ControllerMapping>$$Add*/ func_0x02387f4c(lVar6,uStack_68,uRam0000000003d3a218);
                    }
                  }
                  uVar9 = *(uint *)(lVar5 + 0x18);
                  lVar11 = lVar11 + 1;
                } while ((int)lVar11 < (int)uVar9);
              }
              /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar8,uVar10,lVar6,uRam0000000003d2e6a8);
            }
            uVar13 = uVar13 + 1;
            uVar9 = *(uint *)(lVar3 + 0x18);
          } while ((int)uVar13 < (int)uVar9);
        }
        return 0;
      }
    }
  }
code_r0x01647abc:
  func_0x00f78af4();
code_r0x01647ac0:
  uVar4 = func_0x00f78b24();
  func_0x00f78ac0(uVar4,0);
  if ((bRam0000000003eb576b & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb576b = 1;
  }
  iVar2 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0);
  if ((iVar2 != 8) && (lVar3 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0), (int)lVar3 != 0x1f)) {
    return lVar3;
  }
  lVar3 = /*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50;
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    lVar3 = func_0x00f78ad0();
  }
  lVar8 = 0;
  do {
    if (*(long *)(lVar8 + 0x3ec3548) != 0) {
      func_0x03306cc0(uRam0000000003c9f670);
      auVar14 = _objc_retainAutoreleasedReturnValue();
      func_0x03308900(auVar14._0_8_,auVar14._8_8_,*(undefined8 *)(lVar8 + 0x3ec3548));
      _objc_release(auVar14._0_8_);
      uVar4 = *(undefined8 *)(lVar8 + 0x3ec3548);
      *(undefined8 *)(lVar8 + 0x3ec3548) = 0;
      lVar3 = _objc_release(uVar4);
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x20);
  uRam0000000003ec3568 = 0;
  return lVar3;
}



// ============================================================
// RVA: 0x164776c | Core.Input.ControllerRemappingsNative.ControllerRemapping_GetDataCopy
// ============================================================

undefined8 Core_Input_ControllerRemappingsNative__ControllerRemapping_GetDataCopy(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = func_0x0032c840();
  uVar2 = func_0x00f78eec();
  func_0x00f78f08(uVar1);
  return uVar2;
}



// ============================================================
// RVA: 0x16477a0 | Core.Input.ControllerRemappingsNative.TryParseMappingsIntoDictionary
// ============================================================

long Core_Input_ControllerRemappingsNative__TryParseMappingsIntoDictionary
               (long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_68;
  
  if ((bRam0000000003eb576f & 1) == 0) {
    func_0x00f78a20(0x3d1ede0);
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d2e6a8);
    func_0x00f78a20(0x3d2e6b0);
    func_0x00f78a20(0x3d3a218);
    func_0x00f78a20(0x3d3a210);
    func_0x00f78a20(0x3d1d8b0);
    bRam0000000003eb576f = 1;
  }
  uStack_68 = 0;
  if (param_2 != 0) {
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Clear*/ func_0x01ea7390(param_2,uRam0000000003d2e6b0);
    lVar3 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_01647ac0;
      *(undefined2 *)(lVar3 + 0x20) = 0x3b;
      if ((param_1 != 0) && (lVar3 = /*System.String$$Split*/ func_0x029cb2ac(param_1,lVar3,0), lVar3 != 0)) {
        uVar7 = *(uint *)(lVar3 + 0x18);
        if (0 < (int)uVar7) {
          uVar12 = 0;
          do {
            if (uVar7 <= uVar12) goto LAB_01647ac0;
            lVar10 = *(long *)(lVar3 + (long)(int)uVar12 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_01647abc;
            if (2 < *(int *)(lVar10 + 0x10)) {
              iVar2 = /*System.String$$get_Chars*/ func_0x029c5420(lVar10,0,0);
              if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar8 = 3;
              if (iVar2 == 0x58) {
                uVar8 = 4;
              }
              uVar1 = 5;
              if (iVar2 != 0x50) {
                uVar1 = uVar8;
              }
              uVar8 = 6;
              if (iVar2 != 0x4a) {
                uVar8 = uVar1;
              }
              lVar10 = /*System.String$$Substring*/ func_0x029cbd54(lVar10,2,0);
              lVar4 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
              if (lVar4 == 0) goto LAB_01647abc;
              if (*(int *)(lVar4 + 0x18) == 0) goto LAB_01647ac0;
              *(undefined2 *)(lVar4 + 0x20) = 0x2c;
              if ((lVar10 == 0) || (lVar10 = /*System.String$$Split*/ func_0x029cb2ac(lVar10,lVar4,0), lVar10 == 0))
              goto LAB_01647abc;
              lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<ControllerMapping>_TypeInfo*/ uRam0000000003d1d8b0);
              /*System.Collections.Generic.List<ControllerMapping>$$.ctor*/ func_0x02387360(lVar4,*(undefined4 *)(lVar10 + 0x18),uRam0000000003d3a210);
              uVar7 = *(uint *)(lVar10 + 0x18);
              if (0 < (int)uVar7) {
                lVar9 = 0;
                do {
                  if (uVar7 <= (uint)lVar9) goto LAB_01647ac0;
                  lVar11 = *(long *)(lVar10 + 0x20 + lVar9 * 8);
                  lVar5 = func_0x00f78a34(/*char[]_TypeInfo*/ uRam0000000003d1ede0,1);
                  if (lVar5 == 0) goto LAB_01647abc;
                  if (*(int *)(lVar5 + 0x18) == 0) goto LAB_01647ac0;
                  *(undefined2 *)(lVar5 + 0x20) = 0x3d;
                  if ((lVar11 == 0) || (lVar5 = /*System.String$$Split*/ func_0x029cb2ac(lVar11,lVar5,0), lVar5 == 0))
                  goto LAB_01647abc;
                  if ((*(int *)(lVar5 + 0x18) == 2) &&
                     (iVar2 = /*System.Int32$$TryParse*/ func_0x02ae9d70(*(undefined8 *)(lVar5 + 0x20),(long)&uStack_68 + 4,0),
                     iVar2 != 0)) {
                    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_01647ac0;
                    iVar2 = /*System.Int32$$TryParse*/ func_0x02ae9d70(*(undefined8 *)(lVar5 + 0x28),&uStack_68,0);
                    if (iVar2 != 0) {
                      if (lVar4 == 0) goto LAB_01647abc;
                      /*System.Collections.Generic.List<ControllerMapping>$$Add*/ func_0x02387f4c(lVar4,uStack_68,uRam0000000003d3a218);
                    }
                  }
                  uVar7 = *(uint *)(lVar10 + 0x18);
                  lVar9 = lVar9 + 1;
                } while ((int)lVar9 < (int)uVar7);
              }
              /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(param_2,uVar8,lVar4,uRam0000000003d2e6a8);
            }
            uVar12 = uVar12 + 1;
            uVar7 = *(uint *)(lVar3 + 0x18);
          } while ((int)uVar12 < (int)uVar7);
        }
        return 0;
      }
    }
  }
LAB_01647abc:
  func_0x00f78af4();
LAB_01647ac0:
  uVar6 = func_0x00f78b24();
  func_0x00f78ac0(uVar6,0);
  if ((bRam0000000003eb576b & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb576b = 1;
  }
  iVar2 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0);
  if ((iVar2 != 8) && (lVar3 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0), (int)lVar3 != 0x1f)) {
    return lVar3;
  }
  lVar3 = /*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50;
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    lVar3 = func_0x00f78ad0();
  }
  lVar10 = 0;
  do {
    if (*(long *)(lVar10 + 0x3ec3548) != 0) {
      func_0x03306cc0(uRam0000000003c9f670);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      func_0x03308900(auVar13._0_8_,auVar13._8_8_,*(undefined8 *)(lVar10 + 0x3ec3548));
      _objc_release(auVar13._0_8_);
      uVar6 = *(undefined8 *)(lVar10 + 0x3ec3548);
      *(undefined8 *)(lVar10 + 0x3ec3548) = 0;
      lVar3 = _objc_release(uVar6);
    }
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0x20);
  uRam0000000003ec3568 = 0;
  return lVar3;
}



// ============================================================
// RVA: 0x1647acc | Core.Input.ControllerRemappingsNative.DeInit
// ============================================================

void Core_Input_ControllerRemappingsNative__DeInit(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb576b & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb576b = 1;
  }
  iVar1 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0);
  if ((iVar1 != 8) && (iVar1 = /*UnityEngine.Application$$get_platform*/ func_0x03218950(0), iVar1 != 0x1f)) {
    return;
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = 0;
  do {
    if (*(long *)(lVar3 + 0x3ec3548) != 0) {
      func_0x03306cc0(uRam0000000003c9f670);
      auVar4 = _objc_retainAutoreleasedReturnValue();
      func_0x03308900(auVar4._0_8_,auVar4._8_8_,*(undefined8 *)(lVar3 + 0x3ec3548));
      _objc_release(auVar4._0_8_);
      uVar2 = *(undefined8 *)(lVar3 + 0x3ec3548);
      *(undefined8 *)(lVar3 + 0x3ec3548) = 0;
      _objc_release(uVar2);
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x20);
  uRam0000000003ec3568 = 0;
  return;
}



// ============================================================
// RVA: 0x1647b50 | Core.Input.ControllerRemappingsNative.ControllerRemapping_DeInit
// ============================================================

void Core_Input_ControllerRemappingsNative__ControllerRemapping_DeInit(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = 0;
  do {
    if (*(long *)(lVar2 + 0x3ec3548) != 0) {
      func_0x03306cc0(uRam0000000003c9f670);
      auVar3 = _objc_retainAutoreleasedReturnValue();
      func_0x03308900(auVar3._0_8_,auVar3._8_8_,*(undefined8 *)(lVar2 + 0x3ec3548));
      _objc_release(auVar3._0_8_);
      uVar1 = *(undefined8 *)(lVar2 + 0x3ec3548);
      *(undefined8 *)(lVar2 + 0x3ec3548) = 0;
      _objc_release(uVar1);
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x20);
  uRam0000000003ec3568 = 0;
  return;
}



// ============================================================
// RVA: 0x1647ea8 | Core.Input.ControllerRemappingsNative.GetCurrentMappings
// ============================================================

undefined8 Core_Input_ControllerRemappingsNative__GetCurrentMappings(void)

{
  if ((bRam0000000003eb576d & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb576d = 1;
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return *(undefined8 *)(*(long *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8) + 8);
}



// ============================================================
// RVA: 0x1647f0c | Core.Input.ControllerRemappingsNative.GetRemappedButton
// ============================================================

ulong Core_Input_ControllerRemappingsNative__GetRemappedButton(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb576e & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d2e6b8);
    func_0x00f78a20(0x3d32308);
    func_0x00f78a20(0x3d32310);
    func_0x00f78a20(0x3d32318);
    func_0x00f78a20(0x3d3a220);
    bRam0000000003eb576e = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar4 = (uint)param_2;
  if (uVar4 == 0) {
    return param_2;
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar2 = *(long *)(*(long *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8) + 8);
  if (lVar2 != 0) {
    iVar1 = /*System.Collections.Generic.Dictionary<RuntimePlatform, List<Platform>>$$TryGetValue*/ func_0x01ea8d2c(lVar2,param_1,&lStack_38,uRam0000000003d2e6b8);
    if (iVar1 == 0) {
      return param_2;
    }
    if (lStack_38 != 0) {
      /*System.Collections.Generic.List<ControllerMapping>$$GetEnumerator*/ func_0x02388a08(&uStack_50,lStack_38,uRam0000000003d3a220);
      do {
        uVar3 = /*System.Collections.Generic.List.Enumerator<ControllerMapping>$$MoveNext*/ func_0x01f65730(&uStack_50,uRam0000000003d32310);
        if ((uVar3 & 1) == 0) {
          uVar5 = 0;
          iVar1 = 0x52;
          goto LAB_01648030;
        }
      } while ((uint)uStack_40 != uVar4);
      uVar5 = (uint)((ulong)uStack_40 >> 0x20);
      iVar1 = 0x54;
LAB_01648030:
      /*System.Collections.Generic.List.Enumerator<ControllerMapping>$$Dispose*/ func_0x01f6572c(&uStack_50,uRam0000000003d32308);
      if (iVar1 != 0x54) {
        uVar5 = uVar4;
      }
      return (ulong)uVar5;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_4_ == 1) {
    func_0x032ff594(auVar6._0_8_,auVar6._8_8_,&uStack_50);
    return param_2;
  }
  iVar1 = __Unwind_Resume();
  uVar4 = 3;
  if (iVar1 == 0x58) {
    uVar4 = 4;
  }
  uVar5 = 5;
  if (iVar1 != 0x50) {
    uVar5 = uVar4;
  }
  uVar4 = 6;
  if (iVar1 != 0x4a) {
    uVar4 = uVar5;
  }
  return (ulong)uVar4;
}



// ============================================================
// RVA: 0x1648088 | Core.Input.ControllerRemappingsNative.GetInputFamilyFromCode
// ============================================================

undefined4 Core_Input_ControllerRemappingsNative__GetInputFamilyFromCode(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 3;
  if (param_1 == 0x58) {
    uVar2 = 4;
  }
  uVar1 = 5;
  if (param_1 != 0x50) {
    uVar1 = uVar2;
  }
  uVar2 = 6;
  if (param_1 != 0x4a) {
    uVar2 = uVar1;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x16480b0 | Core.Input.ControllerRemappingsNative..cctor
// ============================================================

void Core_Input_ControllerRemappingsNative___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5770 & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d2e6a0);
    func_0x00f78a20(0x3d1c298);
    bRam0000000003eb5770 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<InputFamily, List<ControllerMapping>>_TypeInfo*/ uRam0000000003d1c298);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar1,uRam0000000003d2e6a0);
  *(undefined8 *)(*(long *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xb8) + 8) = uVar1;
  return;
}



