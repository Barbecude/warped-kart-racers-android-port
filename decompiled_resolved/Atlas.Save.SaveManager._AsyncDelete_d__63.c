// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Save.SaveManager.<AsyncDelete>d__63

// ============================================================
// RVA: 0x1567128 | Atlas.Save.SaveManager.<AsyncDelete>d__63.MoveNext
// ============================================================

void Atlas_Save_SaveManager__AsyncDelete_d__63__MoveNext(int *param_1)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  char cStack_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000003eb4fee & 1) == 0) {
    func_0x00f78a20(0x3d52020);
    func_0x00f78a20(0x3d2ca28);
    func_0x00f78a20(0x3d2ca30);
    func_0x00f78a20(0x3d3ece8);
    func_0x00f78a20(0x3d41540);
    bRam0000000003eb4fee = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lVar4 = *(long *)(param_1 + 6);
  if (*param_1 == 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0xc);
    uStack_60 = *(undefined8 *)(param_1 + 10);
    uStack_50 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
code_r0x01567210:
    auStack_40 = /*UniRx.Async.UniTask.Awaiter<Save>$$GetResult*/ func_0x01cf669c(&uStack_60,uRam0000000003d2ca28);
    /*Core.Services.Save$$get_RemoteConflict*/ func_0x01684294(&uStack_98,auStack_40,0);
    *(bool *)(param_1 + 9) = cStack_88 != '\0';
    if (cStack_88 == '\0') goto LAB_0156732c;
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x015675e4;
    }
    if (*(char *)(lVar4 + 0x108) != '\0') goto LAB_0156732c;
    if (*(long *)(lVar4 + 0x70) == 0) {
      func_0x00f78af4();
code_r0x015675e4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15675e8);
      (*pcVar1)();
    }
    plVar2 = *(long **)(*(long *)(lVar4 + 0x70) + 0x30);
    if (plVar2 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x015675e4;
    }
    (**(code **)(*plVar2 + 0x5e8))(&uStack_98,plVar2,param_1[8],1,*(undefined8 *)(*plVar2 + 0x5f0));
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    uStack_70 = CONCAT71(uStack_87,cStack_88);
    /*UniRx.Async.UniTask<Save>$$GetAwaiter*/ func_0x01b7aaf4(&uStack_98,&uStack_80,uRam0000000003d41540);
    uStack_58 = uStack_90;
    uStack_60 = uStack_98;
    uStack_50 = CONCAT71(uStack_87,cStack_88);
    uVar3 = /*UniRx.Async.UniTask.Awaiter<Save>$$get_IsCompleted*/ func_0x01cf65b8(&uStack_60,uRam0000000003d2ca30);
    if ((uVar3 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0xc) = uStack_58;
      *(undefined8 *)(param_1 + 10) = uStack_60;
      *(undefined8 *)(param_1 + 0xe) = uStack_50;
      /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Save>, SaveManager.<AsyncDelete>d__63>*/ func_0x0181c330(param_1 + 2,&uStack_60,param_1,uRam0000000003d52020);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      if (lVar4 == 0) {
        func_0x00f78af4();
        goto code_r0x015675e4;
      }
      Atlas_Save_SaveManager__ResetSave(lVar4,param_1[8],0);
      *(undefined1 *)(param_1 + 9) = 0;
      if (*(char *)(lVar4 + 0x108) != '\0') goto LAB_0156732c;
      if (*(long *)(lVar4 + 0x70) == 0) {
        func_0x00f78af4();
        goto code_r0x015675e4;
      }
      plVar2 = *(long **)(*(long *)(lVar4 + 0x70) + 0x30);
      if (plVar2 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x015675e4;
      }
      (**(code **)(*plVar2 + 0x5f8))(&uStack_98,plVar2,param_1[8],*(undefined8 *)(*plVar2 + 0x600));
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      uStack_70 = CONCAT71(uStack_87,cStack_88);
      /*UniRx.Async.UniTask<Save>$$GetAwaiter*/ func_0x01b7aaf4(&uStack_98,&uStack_80,uRam0000000003d41540);
      uStack_58 = uStack_90;
      uStack_60 = uStack_98;
      uStack_50 = CONCAT71(uStack_87,cStack_88);
      uVar3 = /*UniRx.Async.UniTask.Awaiter<Save>$$get_IsCompleted*/ func_0x01cf65b8(&uStack_60,uRam0000000003d2ca30);
      if ((uVar3 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xc) = uStack_58;
        *(undefined8 *)(param_1 + 10) = uStack_60;
        *(undefined8 *)(param_1 + 0xe) = uStack_50;
        /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Save>, SaveManager.<AsyncDelete>d__63>*/ func_0x0181c330(param_1 + 2,&uStack_60,param_1,uRam0000000003d52020);
        return;
      }
      goto code_r0x01567210;
    }
    uStack_58 = *(undefined8 *)(param_1 + 0xc);
    uStack_60 = *(undefined8 *)(param_1 + 10);
    uStack_50 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
    auStack_40 = ZEXT816(0);
  }
  /*UniRx.Async.UniTask.Awaiter<Save>$$GetResult*/ func_0x01cf669c(&uStack_60,uRam0000000003d2ca28);
LAB_0156732c:
  *param_1 = -2;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$SetResult*/ func_0x02f99854(param_1 + 2,0);
  return;
}



// ============================================================
// RVA: 0x15675fc | Atlas.Save.SaveManager.<AsyncDelete>d__63.SetStateMachine
// ============================================================

long Atlas_Save_SaveManager__AsyncDelete_d__63__SetStateMachine(long param_1)

{
  return param_1 + 8;
}



