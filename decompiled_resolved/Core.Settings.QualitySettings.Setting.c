// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Settings.QualitySettings.Setting

// ============================================================
// RVA: 0x168cde4 | Core.Settings.QualitySettings.Setting.OnChange
// ============================================================

void Core_Settings_QualitySettings_Setting__OnChange(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  long lStack_58;
  
  if ((bRam0000000003eb5aab & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    bRam0000000003eb5aab = 1;
  }
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 == 0) {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x10);
  lStack_58 = lVar6;
  lVar10 = *(long *)(lVar6 + 0x68);
  if (lVar10 == 0) {
    plVar17 = &lStack_58;
    lVar16 = 1;
  }
  else {
    lVar16 = *(long *)(lVar10 + 0x18);
    if (lVar16 == 0) {
      return;
    }
    plVar17 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar17[lVar10];
    pcVar15 = *(code **)(lVar11 + 0x10);
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11);
    }
    iVar4 = func_0x00f78a4c(lVar11);
    bVar3 = *(char *)(lVar11 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
          (*pcVar15)(plVar9,lVar11);
        }
        else {
          if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar6 + 0x18) == 0)) goto code_r0x01e47fc0;
          iVar4 = func_0x00f78a44(lVar11);
          iVar5 = func_0x00f78ec0(lVar11);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar11 + 0x48);
            if (iVar5 == 0) {
              lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar11 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar11 + 0x140));
              goto code_r0x01e480d4;
            }
            lVar11 = func_0x00f78a48(lVar11);
            lVar12 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar8 = (undefined8 *)
                           (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e48260;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x01e48260:
            pcVar15 = (code *)*puVar8;
            puVar8 = (undefined8 *)puVar8[1];
          }
          else {
            if (iVar5 == 0) {
              uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar12 = *plVar1;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e48238;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
              uVar7 = *(undefined8 *)(lVar12 + 8);
            }
            puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar11);
            pcVar15 = (code *)*puVar8;
          }
          (*pcVar15)(plVar1,plVar9,puVar8);
        }
      }
      else {
        if ((*(short *)(lVar11 + 0x48) == -1) || (*(long *)(lVar6 + 0x18) == 0))
        goto code_r0x01e480c8;
        iVar4 = func_0x00f78a44(lVar11);
        iVar5 = func_0x00f78ec0(lVar11);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar11 + 0x48);
          if (iVar5 == 0) {
            lVar11 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar11 + 0x138))(plVar9,*(undefined8 *)(lVar11 + 0x140));
            goto code_r0x01e480d4;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar12 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar8 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e481fc;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,lVar11,(ulong)uVar2);
code_r0x01e481fc:
          pcVar15 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          if (iVar5 == 0) {
            uVar7 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e481d4;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar9);
code_r0x01e481d4:
            uVar7 = *(undefined8 *)(lVar12 + 8);
          }
          puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar11);
          pcVar15 = (code *)*puVar8;
        }
        (*pcVar15)(plVar9,puVar8);
      }
    }
    else {
      if (bVar3) goto code_r0x01e480c8;
code_r0x01e47fc0:
      (*pcVar15)(plVar1,plVar9,lVar11);
    }
code_r0x01e480d4:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar16) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x168ded0 | Core.Settings.QualitySettings.Setting.add_onChangedEvent
// ============================================================

/* WARNING: Possible PIC construction at 0x0168dfe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168e0d4) */

long Core_Settings_QualitySettings_Setting__add_onChangedEvent
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  long alStack_68 [3];
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb5aa9 & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aa9 = 1;
  }
  plVar6 = (long *)(param_1 + 0x30);
  lVar4 = *plVar6;
  while( true ) {
    uVar5 = 0;
    plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar4,param_2);
    if ((plVar2 != (long *)0x0) && (*plVar2 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) break;
    lVar3 = func_0x00ff0f44(plVar6,plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  alStack_68[1] = 0x3d1b598;
  pcStack_38 = Core_Settings_QualitySettings__UnRegisterOnSettingChanged;
  alStack_68[2] = lVar4;
  plStack_50 = plVar6;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5a91 & 1) == 0) {
    func_0x00f78a20(0x3d2ff68);
    bRam0000000003eb5a91 = 1;
  }
  alStack_68[0] = 0;
  lVar4 = *(long *)(auVar7._0_8_ + 0x10);
  if (lVar4 != 0) {
    param_4 = puRam0000000003d2ff68;
    lVar4 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar4,auVar7._8_8_,alStack_68);
    auVar7._8_8_ = uVar5;
    auVar7._0_8_ = alStack_68[0];
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    if (alStack_68[0] != 0) goto code_r0x0168e000;
  }
  auVar7 = func_0x00f78af4();
code_r0x0168e000:
  if ((bRam0000000003eb5aaa & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aaa = 1;
  }
  plVar6 = (long *)(auVar7._0_8_ + 0x30);
  lVar4 = *plVar6;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598))) {
    lVar3 = func_0x00ff0f44(plVar6,plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  func_0x00f78e5c(plVar2);
  lVar4 = Core_Settings_QualitySettings__TryGetParameterAndSetValue();
  if ((int)lVar4 != 0) {
    *param_4 = 0;
    lVar4 = 1;
  }
  return lVar4;
}



// ============================================================
// RVA: 0x168e000 | Core.Settings.QualitySettings.Setting.remove_onChangedEvent
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168e0d4) */

long Core_Settings_QualitySettings_Setting__remove_onChangedEvent
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb5aaa & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb5aaa = 1;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x30),plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  func_0x00f78e5c(plVar2);
  lVar4 = Core_Settings_QualitySettings__TryGetParameterAndSetValue();
  if ((int)lVar4 != 0) {
    *param_4 = 0;
    lVar4 = 1;
  }
  return lVar4;
}



// ============================================================
// RVA: 0x168f4b8 | Core.Settings.QualitySettings.Setting..ctor
// ============================================================

void Core_Settings_QualitySettings_Setting___ctor(void)

{
  return;
}



