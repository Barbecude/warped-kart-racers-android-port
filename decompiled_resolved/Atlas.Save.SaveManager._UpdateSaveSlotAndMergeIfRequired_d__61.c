// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Save.SaveManager.<UpdateSaveSlotAndMergeIfRequired>d__61

// ============================================================
// RVA: 0x1568e78 | Atlas.Save.SaveManager.<UpdateSaveSlotAndMergeIfRequired>d__61.MoveNext
// ============================================================

void Atlas_Save_SaveManager__UpdateSaveSlotAndMergeIfRequired_d__61__MoveNext(uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if ((bRam0000000003eb4ff2 & 1) == 0) {
    func_0x00f78a20(0x3d52068);
    func_0x00f78a20(0x3d52040);
    func_0x00f78a20(0x3d21ee8);
    func_0x00f78a20(0x3d246e0);
    bRam0000000003eb4ff2 = 1;
  }
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  uStack_58 = 0;
  uVar1 = *param_1;
  lVar8 = *(long *)(param_1 + 6);
  if (1 < uVar1) {
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x01569464;
    }
    lVar6 = *(long *)(lVar8 + 0xf0);
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x01569464;
    }
    if (*(uint *)(lVar6 + 0x18) <= param_1[8]) {
      uVar9 = func_0x00f78b24();
      func_0x00f78ac0(uVar9,0);
      goto code_r0x01569464;
    }
    Atlas_Save_SaveManager__UpdateSaveDataToLatestVersion
              (lVar8,*(undefined8 *)(lVar6 + (ulong)param_1[8] * 8 + 0x20),0);
    if (*(long *)(param_1 + 10) == 0) goto LAB_015691ac;
  }
  lVar6 = /*UniRx.Async.IAwaiter_TypeInfo*/ lRam0000000003d21ee8;
  if (uVar1 == 0) {
    lVar10 = *(long *)(param_1 + 0xc);
    if (lVar10 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)func_0x00f78adc(lVar10,/*UniRx.Async.IAwaiter_TypeInfo*/ lRam0000000003d21ee8);
      if (plVar4 == (long *)0x0) {
        func_0x00f78e5c(lVar10,lVar6);
        goto code_r0x01569464;
      }
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = 0xffffffff;
    plStack_48 = plVar4;
code_r0x015690ec:
    if (plVar4 == (long *)0x0) {
      func_0x00f78af4();
code_r0x01569464:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1569468);
      (*pcVar2)();
    }
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == /*UniRx.Async.IAwaiter_TypeInfo*/ lRam0000000003d21ee8) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto code_r0x01569148;
        }
        piVar7 = piVar7 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*UniRx.Async.IAwaiter_TypeInfo*/ lRam0000000003d21ee8,2);
code_r0x01569148:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x01569464;
    }
code_r0x01569158:
    Atlas_Save_SaveManager__SerializeSaveDataToSaveBuffer(lVar8,param_1[8],0);
    uStack_58 = Atlas_Save_SaveManager__AsyncSave(lVar8,param_1[8],1,0);
    uStack_50 = /*UniRx.Async.UniTask$$GetAwaiter*/ func_0x02f9e6d4(&uStack_58,0);
    uVar3 = /*UniRx.Async.UniTask.Awaiter$$get_IsCompleted*/ func_0x02faba24(&uStack_50,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0xe) = uStack_50;
      /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter, SaveManager.<UpdateSaveSlotAndMergeIfRequired>d__61>*/ func_0x0181d34c(param_1 + 2,&uStack_50,param_1,uRam0000000003d52068);
      return;
    }
  }
  else {
    if (uVar1 != 1) {
      if (lVar8 == 0) {
        func_0x00f78af4();
        goto code_r0x01569464;
      }
      lVar6 = *(long *)(lVar8 + 0xf0);
      if (lVar6 == 0) {
        func_0x00f78af4();
        goto code_r0x01569464;
      }
      if (*(uint *)(lVar6 + 0x18) <= param_1[8]) {
        uVar9 = func_0x00f78b24();
        func_0x00f78ac0(uVar9,0);
        goto code_r0x01569464;
      }
      lVar6 = *(long *)(lVar6 + (ulong)param_1[8] * 8 + 0x20);
      if (lVar6 == 0) {
        func_0x00f78af4();
        goto code_r0x01569464;
      }
      uVar3 = Atlas_Save_SaveData__get_IsValidSaveData(lVar6,0);
      if ((uVar3 & 1) == 0) {
        lVar6 = *(long *)(lVar8 + 0xf0);
        if (lVar6 == 0) {
          func_0x00f78af4();
          goto code_r0x01569464;
        }
        if (*(uint *)(lVar6 + 0x18) <= param_1[8]) {
          uVar9 = func_0x00f78b24();
          func_0x00f78ac0(uVar9,0);
          goto code_r0x01569464;
        }
        if (*(long *)(param_1 + 10) == 0) {
          func_0x00f78af4();
          goto code_r0x01569464;
        }
        lVar6 = *(long *)(lVar6 + (ulong)param_1[8] * 8 + 0x20);
        if (lVar6 == 0) {
          func_0x00f78af4();
          goto code_r0x01569464;
        }
        *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(*(long *)(param_1 + 10) + 0x18);
      }
      Atlas_Save_SaveManager__UpdateSaveDataToLatestVersion(lVar8,*(undefined8 *)(param_1 + 10),0);
      lVar6 = *(long *)(lVar8 + 0xf0);
      if (lVar6 == 0) {
        func_0x00f78af4();
        goto code_r0x01569464;
      }
      if (*(uint *)(lVar6 + 0x18) <= param_1[8]) {
        uVar9 = func_0x00f78b24();
        func_0x00f78ac0(uVar9,0);
        goto code_r0x01569464;
      }
      if (*(long *)(lVar8 + 0x78) == 0) {
        func_0x00f78af4();
        goto code_r0x01569464;
      }
      uVar9 = *(undefined8 *)(lVar6 + (ulong)param_1[8] * 8 + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 10);
      uVar12 = *(undefined8 *)(*(long *)(lVar8 + 0x78) + 0x10);
      if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Atlas_Save_SaveManager__MergeSaveData(uVar9,uVar11,uVar12,0);
      if (param_1[8] == *(uint *)(lVar8 + 0xf8)) {
        uVar9 = Atlas_Save_SaveManager__ResetDependantSystems(lVar8,0);
        plVar4 = (long *)/*UniRx.Async.EnumeratorAsyncExtensions$$GetAwaiter*/ func_0x02f9dd84(uVar9,0);
        plStack_48 = plVar4;
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01569464;
        }
        lVar6 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == /*UniRx.Async.IAwaiter_TypeInfo*/ lRam0000000003d21ee8) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto code_r0x01569204;
            }
            piVar7 = piVar7 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*UniRx.Async.IAwaiter_TypeInfo*/ lRam0000000003d21ee8,1);
code_r0x01569204:
        uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar3 & 1) == 0) {
          *param_1 = 0;
          *(long **)(param_1 + 0xc) = plVar4;
          /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$AwaitUnsafeOnCompleted<object, SaveManager.<UpdateSaveSlotAndMergeIfRequired>d__61>*/ func_0x0181cb38(param_1 + 2,&plStack_48,param_1,uRam0000000003d52040);
          return;
        }
        goto code_r0x015690ec;
      }
      goto code_r0x01569158;
    }
    uStack_50 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0xffffffff;
  }
  /*UniRx.Async.UniTask.Awaiter$$GetResult*/ func_0x02faba7c(&uStack_50,0);
LAB_015691ac:
  *param_1 = 0xfffffffe;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$SetResult*/ func_0x02f99854(param_1 + 2,0);
  return;
}



// ============================================================
// RVA: 0x156947c | Atlas.Save.SaveManager.<UpdateSaveSlotAndMergeIfRequired>d__61.SetStateMachine
// ============================================================

long Atlas_Save_SaveManager__UpdateSaveSlotAndMergeIfRequired_d__61__SetStateMachine(long param_1)

{
  return param_1 + 8;
}



