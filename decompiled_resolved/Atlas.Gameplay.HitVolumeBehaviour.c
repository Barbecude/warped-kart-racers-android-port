// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.HitVolumeBehaviour

// ============================================================
// RVA: 0x15b49d8 | Atlas.Gameplay.HitVolumeBehaviour.get_ID
// ============================================================

undefined8 Atlas_Gameplay_HitVolumeBehaviour__get_ID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15b49e0 | Atlas.Gameplay.HitVolumeBehaviour.add_OnEnter
// ============================================================

void Atlas_Gameplay_HitVolumeBehaviour__add_OnEnter(long param_1,undefined8 param_2)

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
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_188;
  
  if ((bRam0000000003eb5276 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5276 = 1;
  }
  lVar16 = *(long *)(param_1 + 0x20);
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x20),plVar8,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb5277 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5277 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x20);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003eb5278 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5278 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x28);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003eb5279 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5279 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x28);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003eb527a & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527a = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x30);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003eb527b & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527b = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x30);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  lVar16 = auVar19._0_8_;
  lVar9 = *(long *)(lVar16 + 0x20);
  if (lVar9 == 0) {
    return;
  }
  lStack_188 = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    plVar10 = &lStack_188;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar10[lVar11];
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01554d08:
          (*pcVar17)(plVar8,lVar16,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar9 + 0x18) == 0)) goto code_r0x01554bfc;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar8,lVar16,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01554d18;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01554eb0;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01554eb0:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01554e88;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01554e88:
              uVar6 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,lVar16,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x01554d08;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,lVar16,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01554d18;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554e44;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x01554e44:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01554e1c;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x01554e1c:
            uVar6 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,lVar16,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01554d08;
code_r0x01554bfc:
      (*pcVar17)(plVar1,plVar8,lVar16,lVar12);
    }
code_r0x01554d18:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b4a80 | Atlas.Gameplay.HitVolumeBehaviour.remove_OnEnter
// ============================================================

void Atlas_Gameplay_HitVolumeBehaviour__remove_OnEnter(long param_1,undefined8 param_2)

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
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_158;
  
  if ((bRam0000000003eb5277 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5277 = 1;
  }
  lVar16 = *(long *)(param_1 + 0x20);
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x20),plVar8,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb5278 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5278 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x28);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003eb5279 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5279 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x28);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003eb527a & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527a = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x30);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003eb527b & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527b = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x30);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  lVar16 = auVar19._0_8_;
  lVar9 = *(long *)(lVar16 + 0x20);
  if (lVar9 == 0) {
    return;
  }
  lStack_158 = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    plVar10 = &lStack_158;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar10[lVar11];
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01554d08:
          (*pcVar17)(plVar8,lVar16,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar9 + 0x18) == 0)) goto code_r0x01554bfc;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar8,lVar16,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01554d18;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01554eb0;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01554eb0:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01554e88;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01554e88:
              uVar6 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,lVar16,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x01554d08;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,lVar16,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01554d18;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554e44;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x01554e44:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01554e1c;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x01554e1c:
            uVar6 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,lVar16,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01554d08;
code_r0x01554bfc:
      (*pcVar17)(plVar1,plVar8,lVar16,lVar12);
    }
code_r0x01554d18:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b4b20 | Atlas.Gameplay.HitVolumeBehaviour.add_OnStay
// ============================================================

void Atlas_Gameplay_HitVolumeBehaviour__add_OnStay(long param_1,undefined8 param_2)

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
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_128;
  
  if ((bRam0000000003eb5278 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5278 = 1;
  }
  lVar16 = *(long *)(param_1 + 0x28);
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x28),plVar8,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb5279 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5279 = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x28);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003eb527a & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527a = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x30);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003eb527b & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527b = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x30);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  lVar16 = auVar19._0_8_;
  lVar9 = *(long *)(lVar16 + 0x20);
  if (lVar9 == 0) {
    return;
  }
  lStack_128 = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    plVar10 = &lStack_128;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar10[lVar11];
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01554d08:
          (*pcVar17)(plVar8,lVar16,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar9 + 0x18) == 0)) goto code_r0x01554bfc;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar8,lVar16,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01554d18;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01554eb0;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01554eb0:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01554e88;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01554e88:
              uVar6 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,lVar16,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x01554d08;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,lVar16,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01554d18;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554e44;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x01554e44:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01554e1c;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x01554e1c:
            uVar6 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,lVar16,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01554d08;
code_r0x01554bfc:
      (*pcVar17)(plVar1,plVar8,lVar16,lVar12);
    }
code_r0x01554d18:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b4bc0 | Atlas.Gameplay.HitVolumeBehaviour.remove_OnStay
// ============================================================

void Atlas_Gameplay_HitVolumeBehaviour__remove_OnStay(long param_1,undefined8 param_2)

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
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_f8;
  
  if ((bRam0000000003eb5279 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5279 = 1;
  }
  lVar16 = *(long *)(param_1 + 0x28);
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x28),plVar8,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb527a & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527a = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x30);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  if ((bRam0000000003eb527b & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527b = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x30);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  lVar16 = auVar19._0_8_;
  lVar9 = *(long *)(lVar16 + 0x20);
  if (lVar9 == 0) {
    return;
  }
  lStack_f8 = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    plVar10 = &lStack_f8;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar10[lVar11];
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01554d08:
          (*pcVar17)(plVar8,lVar16,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar9 + 0x18) == 0)) goto code_r0x01554bfc;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar8,lVar16,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01554d18;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01554eb0;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01554eb0:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01554e88;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01554e88:
              uVar6 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,lVar16,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x01554d08;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,lVar16,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01554d18;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554e44;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x01554e44:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01554e1c;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x01554e1c:
            uVar6 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,lVar16,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01554d08;
code_r0x01554bfc:
      (*pcVar17)(plVar1,plVar8,lVar16,lVar12);
    }
code_r0x01554d18:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b4c60 | Atlas.Gameplay.HitVolumeBehaviour.add_OnExit
// ============================================================

void Atlas_Gameplay_HitVolumeBehaviour__add_OnExit(long param_1,undefined8 param_2)

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
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long lStack_c8;
  
  if ((bRam0000000003eb527a & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527a = 1;
  }
  lVar16 = *(long *)(param_1 + 0x30);
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x30),plVar8,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  if ((bRam0000000003eb527b & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527b = 1;
  }
  plVar8 = (long *)(auVar19._0_8_ + 0x30);
  lVar16 = *plVar8;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44(plVar8,plVar10,lVar16);
    bVar3 = lVar16 == lVar9;
    lVar16 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar10);
  plVar8 = auVar19._8_8_;
  lVar16 = auVar19._0_8_;
  lVar9 = *(long *)(lVar16 + 0x20);
  if (lVar9 == 0) {
    return;
  }
  lStack_c8 = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    plVar10 = &lStack_c8;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar10 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar10[lVar11];
    pcVar17 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01554d08:
          (*pcVar17)(plVar8,lVar16,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar9 + 0x18) == 0)) goto code_r0x01554bfc;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar8,lVar16,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01554d18;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar7 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01554eb0;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01554eb0:
            pcVar17 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01554e88;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01554e88:
              uVar6 = *(undefined8 *)(lVar13 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
            pcVar17 = (code *)*puVar7;
          }
          (*pcVar17)(plVar1,plVar8,lVar16,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x01554d08;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar8,lVar16,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01554d18;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar8;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar7 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554e44;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar2);
code_r0x01554e44:
          pcVar17 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar8;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01554e1c;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar8);
code_r0x01554e1c:
            uVar6 = *(undefined8 *)(lVar13 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar12);
          pcVar17 = (code *)*puVar7;
        }
        (*pcVar17)(plVar8,lVar16,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01554d08;
code_r0x01554bfc:
      (*pcVar17)(plVar1,plVar8,lVar16,lVar12);
    }
code_r0x01554d18:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b4d00 | Atlas.Gameplay.HitVolumeBehaviour.remove_OnExit
// ============================================================

void Atlas_Gameplay_HitVolumeBehaviour__remove_OnExit(long param_1,undefined8 param_2)

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
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  long lStack_98;
  
  if ((bRam0000000003eb527b & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527b = 1;
  }
  lVar15 = *(long *)(param_1 + 0x30);
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar15,param_2,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar9 = func_0x00ff0f44((long *)(param_1 + 0x30),plVar8,lVar15);
    bVar3 = lVar15 == lVar9;
    lVar15 = lVar9;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar8);
  plVar8 = auVar19._8_8_;
  lVar15 = auVar19._0_8_;
  lVar9 = *(long *)(lVar15 + 0x20);
  if (lVar9 == 0) {
    return;
  }
  lStack_98 = lVar9;
  lVar10 = *(long *)(lVar9 + 0x68);
  if (lVar10 == 0) {
    plVar18 = &lStack_98;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar10 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar18[lVar10];
    pcVar16 = *(code **)(lVar11 + 0x10);
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11);
    }
    iVar4 = func_0x00f78a4c(lVar11);
    bVar3 = *(char *)(lVar11 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01554d08:
          (*pcVar16)(plVar8,lVar15,lVar11);
        }
        else {
          if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar9 + 0x18) == 0)) goto code_r0x01554bfc;
          iVar4 = func_0x00f78a44(lVar11);
          iVar5 = func_0x00f78ec0(lVar11);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar11 + 0x48);
            if (iVar5 == 0) {
              lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar11 + 0x138))(plVar1,plVar8,lVar15,*(undefined8 *)(lVar11 + 0x140));
              goto code_r0x01554d18;
            }
            lVar11 = func_0x00f78a48(lVar11);
            lVar12 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar7 = (undefined8 *)
                           (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01554eb0;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x01554eb0:
            pcVar16 = (code *)*puVar7;
            puVar7 = (undefined8 *)puVar7[1];
          }
          else {
            if (iVar5 == 0) {
              uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
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
                    goto code_r0x01554e88;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar1);
code_r0x01554e88:
              uVar6 = *(undefined8 *)(lVar12 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar11);
            pcVar16 = (code *)*puVar7;
          }
          (*pcVar16)(plVar1,plVar8,lVar15,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar11 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x01554d08;
        iVar4 = func_0x00f78a44(lVar11);
        iVar5 = func_0x00f78ec0(lVar11);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar11 + 0x48);
          if (iVar5 == 0) {
            lVar11 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar11 + 0x138))(plVar8,lVar15,*(undefined8 *)(lVar11 + 0x140));
            goto code_r0x01554d18;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar7 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554e44;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar11,(ulong)uVar2);
code_r0x01554e44:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar8;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01554e1c;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar8);
code_r0x01554e1c:
            uVar6 = *(undefined8 *)(lVar12 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar11);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar8,lVar15,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01554d08;
code_r0x01554bfc:
      (*pcVar16)(plVar1,plVar8,lVar15,lVar11);
    }
code_r0x01554d18:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar17) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b4da0 | Atlas.Gameplay.HitVolumeBehaviour.OnTriggerEnter
// ============================================================

void Atlas_Gameplay_HitVolumeBehaviour__OnTriggerEnter(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01554d08:
          (*pcVar14)(param_2,param_1,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01554bfc;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,param_1,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01554d18;
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
                  goto code_r0x01554eb0;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01554eb0:
            pcVar14 = (code *)*puVar7;
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
                    goto code_r0x01554e88;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01554e88:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_1,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01554d08;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,param_1,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01554d18;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554e44;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01554e44:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01554e1c;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01554e1c:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_1,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01554d08;
code_r0x01554bfc:
      (*pcVar14)(plVar1,param_2,param_1,lVar10);
    }
code_r0x01554d18:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b4db8 | Atlas.Gameplay.HitVolumeBehaviour.OnTriggerStay
// ============================================================

void Atlas_Gameplay_HitVolumeBehaviour__OnTriggerStay(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01554d08:
          (*pcVar14)(param_2,param_1,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01554bfc;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,param_1,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01554d18;
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
                  goto code_r0x01554eb0;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01554eb0:
            pcVar14 = (code *)*puVar7;
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
                    goto code_r0x01554e88;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01554e88:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_1,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01554d08;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,param_1,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01554d18;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554e44;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01554e44:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01554e1c;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01554e1c:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_1,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01554d08;
code_r0x01554bfc:
      (*pcVar14)(plVar1,param_2,param_1,lVar10);
    }
code_r0x01554d18:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b4dd0 | Atlas.Gameplay.HitVolumeBehaviour.OnTriggerExit
// ============================================================

void Atlas_Gameplay_HitVolumeBehaviour__OnTriggerExit(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar8 = *(long *)(param_1 + 0x30);
  if (lVar8 == 0) {
    return;
  }
  lStack_68 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x02';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01554d08:
          (*pcVar14)(param_2,param_1,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01554bfc;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,param_1,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01554d18;
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
                  goto code_r0x01554eb0;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01554eb0:
            pcVar14 = (code *)*puVar7;
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
                    goto code_r0x01554e88;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01554e88:
              uVar6 = *(undefined8 *)(lVar11 + 8);
            }
            puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
            pcVar14 = (code *)*puVar7;
          }
          (*pcVar14)(plVar1,param_2,param_1,puVar7);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01554d08;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,param_1,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01554d18;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar7 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554e44;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01554e44:
          pcVar14 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if (iVar5 == 0) {
            uVar6 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01554e1c;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01554e1c:
            uVar6 = *(undefined8 *)(lVar11 + 8);
          }
          puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
          pcVar14 = (code *)*puVar7;
        }
        (*pcVar14)(param_2,param_1,puVar7);
      }
    }
    else {
      if (bVar3) goto code_r0x01554d08;
code_r0x01554bfc:
      (*pcVar14)(plVar1,param_2,param_1,lVar10);
    }
code_r0x01554d18:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b4de8 | Atlas.Gameplay.HitVolumeBehaviour.ClearDelegates
// ============================================================

void Atlas_Gameplay_HitVolumeBehaviour__ClearDelegates(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// ============================================================
// RVA: 0x15b4df4 | Atlas.Gameplay.HitVolumeBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_HitVolumeBehaviour___ctor(ulong param_1)

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



