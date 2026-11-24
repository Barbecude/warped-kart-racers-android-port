// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23

// ============================================================
// RVA: 0x1566514 | Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23..ctor
// ============================================================

void Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot_d__23___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1566540 | Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot_d__23__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1566544 | Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23.MoveNext
// ============================================================

/* WARNING: Possible PIC construction at 0x01566690: Changing call to branch */

long Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot_d__23__MoveNext(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  code *pcVar15;
  long *plVar16;
  long lStack_78;
  
  if ((bRam0000000003eb4fe9 & 1) == 0) {
    func_0x00f78a20(0x3d2c908);
    func_0x00f78a20(0x3d412a0);
    bRam0000000003eb4fe9 = 1;
  }
  lVar5 = 0;
  if (4 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar14 = *(long *)(param_1 + 0x20);
  uVar9 = 0xffffffff;
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar5 = /*Core.Input.InputManager$$SuspendAllInput*/ func_0x0164ade0(0);
    if (lVar14 != 0) {
      uVar7 = Atlas_UI_Screens_AtlasScreen_SaveGameScreenBehaviour__SaveGameScreen_TransitionData___ShowFullScreenTransition
                        (lVar14,uRam0000000003d2c908);
      uVar9 = 1;
code_r0x015666a8:
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      lVar5 = 1;
code_r0x015666b0:
      *(undefined4 *)(param_1 + 0x10) = uVar9;
      return lVar5;
    }
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar14 != 0) {
      lVar5 = 0;
      if (*(long *)(lVar14 + 0x70) != 0) {
        lVar6 = *(long *)(lVar14 + 0x80);
        lVar5 = /*Atlas.Save.SaveManager$$Delete*/ func_0x014eb828(*(long *)(lVar14 + 0x70),*(undefined4 *)(param_1 + 0x28),0);
        if (lVar6 != 0) {
          uVar7 = Core_Application_CoroutineRunner__StartCoroutine(lVar6,lVar5,0);
          uVar9 = 2;
          goto code_r0x015666a8;
        }
      }
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar14 != 0) {
      lVar5 = 0;
      if (*(long *)(lVar14 + 0x70) != 0) {
        uVar7 = /*Atlas.Save.SaveManager$$WorkOutCurrentSaveSlotFromLastSaved*/ func_0x014ed16c(*(long *)(lVar14 + 0x70),0);
        lVar5 = 0;
        if (*(long *)(lVar14 + 0x70) != 0) {
          uVar7 = /*Atlas.Save.SaveManager$$ChangeSaveSlot*/ func_0x014eb8a4(*(long *)(lVar14 + 0x70),uVar7,0);
          uVar9 = 3;
          goto code_r0x015666a8;
        }
      }
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar14 != 0) {
      Atlas_UI_Screens_SaveGameScreen__RefreshSlots(lVar14,0);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar14,uRam0000000003d412a0);
      lVar5 = 0;
      if (lVar6 != 0) {
        lVar5 = *(long *)(lVar6 + 0x10);
        if (lVar5 != 0) goto code_r0x015666c4;
        uVar7 = Atlas_UI_Screens_SaveGameScreen__EndTask(lVar14,*(undefined4 *)(param_1 + 0x28),0);
        uVar9 = 4;
        goto code_r0x015666a8;
      }
    }
    break;
  case 4:
    goto code_r0x015666b0;
  }
  lVar5 = func_0x00f78af4(lVar5);
code_r0x015666c4:
  lStack_78 = lVar5;
  lVar14 = *(long *)(lVar5 + 0x68);
  if (lVar14 == 0) {
    plVar16 = &lStack_78;
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(lVar14 + 0x18);
    if (lVar6 == 0) {
      return lVar5;
    }
    plVar16 = (long *)(lVar14 + 0x20);
  }
  lVar14 = 0;
  do {
    lVar10 = plVar16[lVar14];
    pcVar15 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar3 = func_0x00f78a4c(lVar10);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
      goto code_r0x015667cc;
      iVar3 = func_0x00f78a44(lVar10);
      iVar4 = func_0x00f78ec0(lVar10);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar10 + 0x48);
        if (iVar4 == 0) {
          lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
          lVar10 = (**(code **)(lVar10 + 0x138))(plVar1,*(undefined8 *)(lVar10 + 0x140));
          goto code_r0x015667d8;
        }
        lVar10 = func_0x00f78a48(lVar10);
        lVar11 = *plVar1;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar8 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x0156689c;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x0156689c:
        pcVar15 = (code *)*puVar8;
        puVar8 = (undefined8 *)puVar8[1];
      }
      else {
        if (iVar4 == 0) {
          uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar11 = *plVar1;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01566874;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          lVar11 = func_0x00fac1f0(plVar1);
code_r0x01566874:
          uVar7 = *(undefined8 *)(lVar11 + 8);
        }
        puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
        pcVar15 = (code *)*puVar8;
      }
      lVar10 = (*pcVar15)(plVar1,puVar8);
    }
    else if (*(char *)(lVar10 + 0x4a) == '\0') {
      lVar10 = (*pcVar15)(lVar10);
    }
    else {
code_r0x015667cc:
      lVar10 = (*pcVar15)(plVar1,lVar10);
    }
code_r0x015667d8:
    lVar14 = lVar14 + 1;
    if (lVar14 == lVar6) {
      return lVar10;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15668c8 | Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15668d0 | Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot_d__23__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63c48);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1566910 | Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot_d__23__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



