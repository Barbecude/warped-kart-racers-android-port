// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Assets.AssetManager.Asset

// ============================================================
// RVA: 0x1634a2c | Core.Assets.AssetManager.Asset.IsAddressableDone
// ============================================================

/* WARNING: Possible PIC construction at 0x01b570bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b570c0) */
/* WARNING: Removing unreachable block (ram,0x01b57150) */
/* WARNING: Removing unreachable block (ram,0x01b570c4) */
/* WARNING: Removing unreachable block (ram,0x01b570d0) */
/* WARNING: Removing unreachable block (ram,0x01b570d8) */
/* WARNING: Removing unreachable block (ram,0x01b57168) */
/* WARNING: Removing unreachable block (ram,0x01b570ec) */
/* WARNING: Removing unreachable block (ram,0x01b57100) */
/* WARNING: Removing unreachable block (ram,0x01b57110) */
/* WARNING: Removing unreachable block (ram,0x01b57120) */
/* WARNING: Removing unreachable block (ram,0x01b57130) */

bool Core_Assets_AssetManager_Asset__IsAddressableDone(long param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  if ((bRam0000000003eb569d & 1) == 0) {
    func_0x00f78a20(0x3d2c040);
    func_0x00f78a20(0x3d2be08);
    func_0x00f78a20(0x3d2bf90);
    bRam0000000003eb569d = 1;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(char *)(param_1 + 0x19) == '\0') {
      plVar4 = (long *)(param_1 + 0x20);
      plVar5 = (long *)0x3d2bf90;
    }
    else {
      plVar4 = (long *)(param_1 + 0x40);
      plVar5 = (long *)0x3d2c040;
    }
  }
  else {
    plVar5 = (long *)0x3d2be08;
    plVar4 = (long *)(param_1 + 0x60);
  }
  lVar7 = *(long *)(*plVar5 + 0x18);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x58);
  lVar6 = *plVar4;
  if (lVar6 == 0) {
    bVar2 = false;
  }
  else {
    lVar9 = *(long *)(lVar7 + 0x18);
    uVar1 = *(ushort *)(lVar9 + 0x132);
    lVar8 = lVar9;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar9);
      lVar8 = *(long *)(lVar7 + 0x18);
      uVar1 = *(ushort *)(lVar8 + 0x132);
    }
    pcVar10 = *(code **)**(undefined8 **)(lVar9 + 0xc0);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    iVar3 = (*pcVar10)(lVar6,**(undefined8 **)(lVar8 + 0xc0));
    bVar2 = iVar3 == (int)plVar4[1];
  }
  return bVar2;
}



// ============================================================
// RVA: 0x1634ac0 | Core.Assets.AssetManager.Asset.IsAddressableStatusSuceeded
// ============================================================

bool Core_Assets_AssetManager_Asset__IsAddressableStatusSuceeded(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000003eb569e & 1) == 0) {
    func_0x00f78a20(0x3d2be20);
    func_0x00f78a20(0x3d2c058);
    func_0x00f78a20(0x3d2bfa8);
    bRam0000000003eb569e = 1;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(char *)(param_1 + 0x19) == '\0') {
      param_1 = param_1 + 0x20;
      puVar2 = (undefined8 *)0x3d2bfa8;
    }
    else {
      param_1 = param_1 + 0x40;
      puVar2 = (undefined8 *)0x3d2c058;
    }
  }
  else {
    puVar2 = (undefined8 *)0x3d2be20;
    param_1 = param_1 + 0x60;
  }
  iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_Status*/ func_0x01b5755c(param_1,*puVar2);
  return iVar1 == 1;
}



// ============================================================
// RVA: 0x1634ef4 | Core.Assets.AssetManager.Asset.GetAddressableFailedMessage
// ============================================================

void Core_Assets_AssetManager_Asset__GetAddressableFailedMessage
               (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  long lStack_88;
  
  if ((bRam0000000003eb569f & 1) == 0) {
    func_0x00f78a20(0x3d2be10);
    func_0x00f78a20(0x3d2bf98);
    func_0x00f78a20(0x3d2c048);
    bRam0000000003eb569f = 1;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(char *)(param_1 + 0x19) == '\0') {
      param_1 = param_1 + 0x20;
      puVar9 = (undefined8 *)0x3d2bf98;
    }
    else {
      param_1 = param_1 + 0x40;
      puVar9 = (undefined8 *)0x3d2c048;
    }
  }
  else {
    puVar9 = (undefined8 *)0x3d2be10;
    param_1 = param_1 + 0x60;
  }
  plVar6 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_OperationException*/ func_0x01b57200(param_1,*puVar9);
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01634f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    return;
  }
  auVar18 = func_0x00f78af4();
  plVar6 = auVar18._8_8_;
  lVar7 = auVar18._0_8_;
  lStack_88 = lVar7;
  lVar10 = *(long *)(lVar7 + 0x68);
  if (lVar10 == 0) {
    plVar17 = &lStack_88;
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
  param_4 = param_4 & 0xffffffff;
  do {
    lVar11 = plVar17[lVar10];
    pcVar15 = *(code **)(lVar11 + 0x10);
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11);
    }
    iVar4 = func_0x00f78a4c(lVar11);
    bVar3 = *(char *)(lVar11 + 0x4a) == '\x03';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x0163513c:
          (*pcVar15)(plVar6,param_3,param_4,lVar11);
        }
        else {
          if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar7 + 0x18) == 0)) goto code_r0x0163502c;
          iVar4 = func_0x00f78a44(lVar11);
          iVar5 = func_0x00f78ec0(lVar11);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar11 + 0x48);
            if (iVar5 == 0) {
              lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar11 + 0x138))
                        (plVar1,plVar6,param_3,param_4,*(undefined8 *)(lVar11 + 0x140));
              goto code_r0x01635150;
            }
            lVar11 = func_0x00f78a48(lVar11);
            lVar12 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar11) {
                  puVar9 = (undefined8 *)
                           (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x016352f4;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x016352f4:
            pcVar15 = (code *)*puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
          else {
            if (iVar5 == 0) {
              uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
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
                    goto code_r0x016352cc;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar12 = func_0x00fac1f0(plVar1);
code_r0x016352cc:
              uVar8 = *(undefined8 *)(lVar12 + 8);
            }
            puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
            pcVar15 = (code *)*puVar9;
          }
          (*pcVar15)(plVar1,plVar6,param_3,param_4,puVar9);
        }
      }
      else {
        if ((*(short *)(lVar11 + 0x48) == -1) || (*(long *)(lVar7 + 0x18) == 0))
        goto code_r0x0163513c;
        iVar4 = func_0x00f78a44(lVar11);
        iVar5 = func_0x00f78ec0(lVar11);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar11 + 0x48);
          if (iVar5 == 0) {
            lVar11 = *plVar6 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar11 + 0x138))(plVar6,param_3,param_4,*(undefined8 *)(lVar11 + 0x140));
            goto code_r0x01635150;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar12 = *plVar6;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar9 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01635280;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar6,lVar11,(ulong)uVar2);
code_r0x01635280:
          pcVar15 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar5 == 0) {
            uVar8 = *(undefined8 *)(*plVar6 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar6;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01635258;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar6);
code_r0x01635258:
            uVar8 = *(undefined8 *)(lVar12 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
          pcVar15 = (code *)*puVar9;
        }
        (*pcVar15)(plVar6,param_3,param_4,puVar9);
      }
    }
    else {
      if (bVar3) goto code_r0x0163513c;
code_r0x0163502c:
      (*pcVar15)(plVar1,plVar6,param_3,param_4,lVar11);
    }
code_r0x01635150:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar16) {
      return;
    }
  } while( true );
}



