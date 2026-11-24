// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.HitVolumeVFXAdditionalTriggerBehaviour

// ============================================================
// RVA: 0x15b5074 | Atlas.Gameplay.HitVolumeVFXAdditionalTriggerBehaviour.get_VfxTriggerConditions
// ============================================================

void Atlas_Gameplay_HitVolumeVFXAdditionalTriggerBehaviour__get_VfxTriggerConditions
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[1] = *(undefined8 *)(param_2 + 0x48);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x50);
  return;
}



// ============================================================
// RVA: 0x15b5088 | Atlas.Gameplay.HitVolumeVFXAdditionalTriggerBehaviour.Init
// ============================================================

void Atlas_Gameplay_HitVolumeVFXAdditionalTriggerBehaviour__Init(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
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
  
  if ((bRam0000000003eb527e & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d57e20);
    bRam0000000003eb527e = 1;
  }
  uVar10 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8);
  Atlas_Gameplay_HitVolumeBehaviour_HitVolumeDelegate___ctor(uVar10,param_1,uRam0000000003d57e20,0);
  if ((bRam0000000003eb5276 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5276 = 1;
  }
  lVar16 = *(long *)(param_1 + 0x20);
  while ((plVar7 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,uVar10,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar8 = func_0x00ff0f44((long *)(param_1 + 0x20),plVar7,lVar16);
    bVar3 = lVar16 == lVar8;
    lVar16 = lVar8;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar7);
  if ((bRam0000000003eb5277 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5277 = 1;
  }
  plVar7 = (long *)(auVar19._0_8_ + 0x20);
  lVar16 = *plVar7;
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar8 = func_0x00ff0f44(plVar7,plVar9,lVar16);
    bVar3 = lVar16 == lVar8;
    lVar16 = lVar8;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar9);
  if ((bRam0000000003eb5278 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5278 = 1;
  }
  plVar7 = (long *)(auVar19._0_8_ + 0x28);
  lVar16 = *plVar7;
  while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,auVar19._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar8 = func_0x00ff0f44(plVar7,plVar9,lVar16);
    bVar3 = lVar16 == lVar8;
    lVar16 = lVar8;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar9);
  if ((bRam0000000003eb5279 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5279 = 1;
  }
  plVar7 = (long *)(auVar19._0_8_ + 0x28);
  lVar16 = *plVar7;
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar8 = func_0x00ff0f44(plVar7,plVar9,lVar16);
    bVar3 = lVar16 == lVar8;
    lVar16 = lVar8;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar9);
  if ((bRam0000000003eb527a & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527a = 1;
  }
  plVar7 = (long *)(auVar19._0_8_ + 0x30);
  lVar16 = *plVar7;
  while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,auVar19._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar8 = func_0x00ff0f44(plVar7,plVar9,lVar16);
    bVar3 = lVar16 == lVar8;
    lVar16 = lVar8;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar9);
  if ((bRam0000000003eb527b & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527b = 1;
  }
  plVar7 = (long *)(auVar19._0_8_ + 0x30);
  lVar16 = *plVar7;
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar8 = func_0x00ff0f44(plVar7,plVar9,lVar16);
    bVar3 = lVar16 == lVar8;
    lVar16 = lVar8;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar9);
  plVar7 = auVar19._8_8_;
  lVar16 = auVar19._0_8_;
  lVar8 = *(long *)(lVar16 + 0x20);
  if (lVar8 == 0) {
    return;
  }
  lStack_188 = lVar8;
  lVar11 = *(long *)(lVar8 + 0x68);
  if (lVar11 == 0) {
    plVar9 = &lStack_188;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar9 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar9[lVar11];
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
          (*pcVar17)(plVar7,lVar16,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01554bfc;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar7,lVar16,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01554d18;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar6 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01554eb0;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01554eb0:
            pcVar17 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if (iVar5 == 0) {
              uVar10 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
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
              uVar10 = *(undefined8 *)(lVar13 + 8);
            }
            puVar6 = (undefined8 *)func_0x00f78acc(uVar10,lVar12);
            pcVar17 = (code *)*puVar6;
          }
          (*pcVar17)(plVar1,plVar7,lVar16,puVar6);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01554d08;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar7 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar7,lVar16,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01554d18;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar6 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554e44;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar12,(ulong)uVar2);
code_r0x01554e44:
          pcVar17 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if (iVar5 == 0) {
            uVar10 = *(undefined8 *)(*plVar7 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar7;
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
            lVar13 = func_0x00fac1f0(plVar7);
code_r0x01554e1c:
            uVar10 = *(undefined8 *)(lVar13 + 8);
          }
          puVar6 = (undefined8 *)func_0x00f78acc(uVar10,lVar12);
          pcVar17 = (code *)*puVar6;
        }
        (*pcVar17)(plVar7,lVar16,puVar6);
      }
    }
    else {
      if (bVar3) goto code_r0x01554d08;
code_r0x01554bfc:
      (*pcVar17)(plVar1,plVar7,lVar16,lVar12);
    }
code_r0x01554d18:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b510c | Atlas.Gameplay.HitVolumeVFXAdditionalTriggerBehaviour.DeInit
// ============================================================

void Atlas_Gameplay_HitVolumeVFXAdditionalTriggerBehaviour__DeInit(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
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
  
  if ((bRam0000000003eb527f & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d57e20);
    bRam0000000003eb527f = 1;
  }
  uVar10 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8);
  Atlas_Gameplay_HitVolumeBehaviour_HitVolumeDelegate___ctor(uVar10,param_1,uRam0000000003d57e20,0);
  if ((bRam0000000003eb5277 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5277 = 1;
  }
  lVar16 = *(long *)(param_1 + 0x20);
  while ((plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,uVar10,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar8 = func_0x00ff0f44((long *)(param_1 + 0x20),plVar7,lVar16);
    bVar3 = lVar16 == lVar8;
    lVar16 = lVar8;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar7);
  if ((bRam0000000003eb5278 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5278 = 1;
  }
  plVar7 = (long *)(auVar19._0_8_ + 0x28);
  lVar16 = *plVar7;
  while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,auVar19._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar8 = func_0x00ff0f44(plVar7,plVar9,lVar16);
    bVar3 = lVar16 == lVar8;
    lVar16 = lVar8;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar9);
  if ((bRam0000000003eb5279 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb5279 = 1;
  }
  plVar7 = (long *)(auVar19._0_8_ + 0x28);
  lVar16 = *plVar7;
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar8 = func_0x00ff0f44(plVar7,plVar9,lVar16);
    bVar3 = lVar16 == lVar8;
    lVar16 = lVar8;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar9);
  if ((bRam0000000003eb527a & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527a = 1;
  }
  plVar7 = (long *)(auVar19._0_8_ + 0x30);
  lVar16 = *plVar7;
  while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar16,auVar19._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar8 = func_0x00ff0f44(plVar7,plVar9,lVar16);
    bVar3 = lVar16 == lVar8;
    lVar16 = lVar8;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar9);
  if ((bRam0000000003eb527b & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb527b = 1;
  }
  plVar7 = (long *)(auVar19._0_8_ + 0x30);
  lVar16 = *plVar7;
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar16,auVar19._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ lRam0000000003d278d8))) {
    lVar8 = func_0x00ff0f44(plVar7,plVar9,lVar16);
    bVar3 = lVar16 == lVar8;
    lVar16 = lVar8;
    if (bVar3) {
      return;
    }
  }
  auVar19 = func_0x00f78e5c(plVar9);
  plVar7 = auVar19._8_8_;
  lVar16 = auVar19._0_8_;
  lVar8 = *(long *)(lVar16 + 0x20);
  if (lVar8 == 0) {
    return;
  }
  lStack_158 = lVar8;
  lVar11 = *(long *)(lVar8 + 0x68);
  if (lVar11 == 0) {
    plVar9 = &lStack_158;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar11 + 0x18);
    if (lVar18 == 0) {
      return;
    }
    plVar9 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar9[lVar11];
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
          (*pcVar17)(plVar7,lVar16,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar8 + 0x18) == 0)) goto code_r0x01554bfc;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar7,lVar16,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01554d18;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar6 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01554eb0;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01554eb0:
            pcVar17 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if (iVar5 == 0) {
              uVar10 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
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
              uVar10 = *(undefined8 *)(lVar13 + 8);
            }
            puVar6 = (undefined8 *)func_0x00f78acc(uVar10,lVar12);
            pcVar17 = (code *)*puVar6;
          }
          (*pcVar17)(plVar1,plVar7,lVar16,puVar6);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
        goto code_r0x01554d08;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar7 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar7,lVar16,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01554d18;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar12) {
                puVar6 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01554e44;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar12,(ulong)uVar2);
code_r0x01554e44:
          pcVar17 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if (iVar5 == 0) {
            uVar10 = *(undefined8 *)(*plVar7 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar7;
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
            lVar13 = func_0x00fac1f0(plVar7);
code_r0x01554e1c:
            uVar10 = *(undefined8 *)(lVar13 + 8);
          }
          puVar6 = (undefined8 *)func_0x00f78acc(uVar10,lVar12);
          pcVar17 = (code *)*puVar6;
        }
        (*pcVar17)(plVar7,lVar16,puVar6);
      }
    }
    else {
      if (bVar3) goto code_r0x01554d08;
code_r0x01554bfc:
      (*pcVar17)(plVar1,plVar7,lVar16,lVar12);
    }
code_r0x01554d18:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar18) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15b5190 | Atlas.Gameplay.HitVolumeVFXAdditionalTriggerBehaviour.ManualActivate
// ============================================================

void Atlas_Gameplay_HitVolumeVFXAdditionalTriggerBehaviour__ManualActivate(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb5280 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5280 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      lVar2 = func_0x00f78af4();
      *(undefined1 *)(lVar2 + 0x78) = 1;
      return;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x78) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x15b522c | Atlas.Gameplay.HitVolumeVFXAdditionalTriggerBehaviour.OnEnterTrigger
// ============================================================

ulong Atlas_Gameplay_HitVolumeVFXAdditionalTriggerBehaviour__OnEnterTrigger
                (long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5281 & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5281 = 1;
  }
  uStack_38 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = Atlas_Contexts_GameContextBase__TryGetKartCompositeFromCollider(param_2,&uStack_38,0);
    if ((int)uVar1 != 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x48);
      uStack_50 = *(undefined8 *)(param_1 + 0x40);
      uStack_40 = *(undefined4 *)(param_1 + 0x50);
      uVar1 = /*Atlas.Gameplay.VFXTriggerConditionHelper$$ResolveConditions*/ func_0x01527444(&uStack_50,uStack_38,0);
      if ((int)uVar1 != 0) {
        if (*(long *)(param_1 + 0x38) == 0) {
          uVar1 = func_0x00f78af4();
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
        *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x78) = 1;
      }
    }
  }
  return uVar1;
}



// ============================================================
// RVA: 0x15b5330 | Atlas.Gameplay.HitVolumeVFXAdditionalTriggerBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_HitVolumeVFXAdditionalTriggerBehaviour___ctor(ulong param_1)

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



