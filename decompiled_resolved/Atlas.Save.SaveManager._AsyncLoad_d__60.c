// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Save.SaveManager.<AsyncLoad>d__60

// ============================================================
// RVA: 0x1567608 | Atlas.Save.SaveManager.<AsyncLoad>d__60.MoveNext
// ============================================================

void Atlas_Save_SaveManager__AsyncLoad_d__60__MoveNext(uint *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000003eb4fef & 1) == 0) {
    func_0x00f78a20(0x3d52028);
    func_0x00f78a20(0x3d52060);
    func_0x00f78a20(0x3d2ca28);
    func_0x00f78a20(0x3d2ca30);
    func_0x00f78a20(0x3d3ece8);
    func_0x00f78a20(0x3d3ecf0);
    func_0x00f78a20(0x3d41540);
    bRam0000000003eb4fef = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uVar13 = *param_1;
  lVar11 = *(long *)(param_1 + 6);
  if (uVar13 < 4) {
LAB_015676e0:
    auVar14 = ZEXT816(0);
    auVar2 = ZEXT816(0);
    if (uVar13 - 1 < 2) {
code_r0x01567844:
      if (uVar13 == 1) {
        uStack_78 = *(undefined8 *)(param_1 + 0xe);
        uStack_80 = *(undefined8 *)(param_1 + 0xc);
        uStack_70 = *(ulong *)(param_1 + 0x10);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = 0xffffffff;
code_r0x01567964:
        auStack_60 = auVar14;
        auStack_50 = auVar2;
        /*UniRx.Async.UniTask.Awaiter<Save>$$GetResult*/ func_0x01cf669c(&uStack_80,uRam0000000003d2ca28);
        if (lVar11 == 0) {
          func_0x00f78af4();
          goto code_r0x01568014;
        }
        plVar8 = *(long **)(lVar11 + 0x38);
        uVar4 = /*Core.Services.SaveFile$$get_Size*/ func_0x016846c8(param_1 + 0x12,0);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01568014;
        }
        (**(code **)(*plVar8 + 0x2d8))(plVar8,uVar4,*(undefined8 *)(*plVar8 + 0x2e0));
        uVar9 = Atlas_Save_SaveManager__DeserializeSaveBuffer(lVar11,lVar11 + 0x30,0);
        *(undefined8 *)(param_1 + 10) = uVar9;
      }
      else {
        auStack_60 = auVar14;
        auStack_50 = auVar2;
        if (uVar13 == 2) {
          uStack_c8 = *(undefined8 *)(param_1 + 0x16);
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          *param_1 = 0xffffffff;
code_r0x01567868:
          /*UniRx.Async.UniTask.Awaiter$$GetResult*/ func_0x02faba7c(&uStack_c8,0);
        }
        else {
          if (lVar11 == 0) {
            func_0x00f78af4();
            goto code_r0x01568014;
          }
          if (*(char *)(lVar11 + 0x108) != '\0') goto code_r0x01567a08;
          /*Core.Services.Save$$get_RemoteConflict*/ func_0x01684294(&uStack_e8,auStack_50,0);
          uStack_b8 = uStack_e0;
          uStack_c0 = uStack_e8;
          uStack_b0 = uStack_d8;
          auVar14 = /*System.Nullable<SaveFile>$$get_Value*/ func_0x0266027c(&uStack_c0,uRam0000000003d3ecf0);
          pauVar12 = (undefined1 (*) [16])(param_1 + 0x12);
          *pauVar12 = auVar14;
          uVar10 = /*Core.Services.SaveFile$$get_Deleted*/ func_0x01684534(pauVar12,0);
          if ((uVar10 & 1) == 0) {
            iVar5 = /*Core.Services.SaveFile$$get_Size*/ func_0x016846c8(pauVar12,0);
            if (iVar5 != 0) {
              /*Atlas.Save.SaveManager.SaveBuffer$$ResetMemoryStream*/ func_0x0156802c(lVar11 + 0x30);
              if (*(long *)(lVar11 + 0x70) == 0) {
                func_0x00f78af4();
                goto code_r0x01568014;
              }
              plVar8 = *(long **)(*(long *)(lVar11 + 0x70) + 0x30);
              if (plVar8 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x01568014;
              }
              (**(code **)(*plVar8 + 0x5b8))
                        (&uStack_e8,plVar8,param_1[8],1,*(undefined8 *)(lVar11 + 0x40),&UNK_0000c800
                         ,*(undefined8 *)(*plVar8 + 0x5c0));
              uStack_98 = uStack_e0;
              uStack_a0 = uStack_e8;
              uStack_90 = uStack_d8;
              /*UniRx.Async.UniTask<Save>$$GetAwaiter*/ func_0x01b7aaf4(&uStack_e8,&uStack_a0,uRam0000000003d41540);
              uStack_78 = uStack_e0;
              uStack_80 = uStack_e8;
              uStack_70 = uStack_d8;
              uVar10 = /*UniRx.Async.UniTask.Awaiter<Save>$$get_IsCompleted*/ func_0x01cf65b8(&uStack_80,uRam0000000003d2ca30);
              auVar14 = auStack_60;
              auVar2 = auStack_50;
              if ((uVar10 & 1) == 0) {
                *param_1 = 1;
                *(undefined8 *)(param_1 + 0xe) = uStack_78;
                *(undefined8 *)(param_1 + 0xc) = uStack_80;
                *(ulong *)(param_1 + 0x10) = uStack_70;
                /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Save>, SaveManager.<AsyncLoad>d__60>*/ func_0x0181c4d4(param_1 + 2,&uStack_80,param_1,uRam0000000003d52028);
                return;
              }
              goto code_r0x01567964;
            }
          }
          else {
            lVar6 = /*Core.Services.SaveFile$$get_LastUpdatedAt*/ func_0x01684588(pauVar12,0);
            lVar7 = /*Core.Services.SaveFile$$get_LastUpdatedAt*/ func_0x01684588(auStack_60,0);
            if (lVar7 < lVar6) {
              uStack_d0 = Atlas_Save_SaveManager__AsyncDelete(lVar11,param_1[8],0);
              uStack_c8 = /*UniRx.Async.UniTask$$GetAwaiter*/ func_0x02f9e6d4(&uStack_d0,0);
              uVar10 = /*UniRx.Async.UniTask.Awaiter$$get_IsCompleted*/ func_0x02faba24(&uStack_c8,0);
              if ((uVar10 & 1) == 0) {
                *param_1 = 2;
                *(undefined8 *)(param_1 + 0x16) = uStack_c8;
                /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter, SaveManager.<AsyncLoad>d__60>*/ func_0x0181d234(param_1 + 2,&uStack_c8,param_1,uRam0000000003d52060);
                return;
              }
              goto code_r0x01567868;
            }
          }
        }
      }
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
code_r0x015679c0:
      if (lVar11 == 0) {
        func_0x00f78af4();
code_r0x01568014:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1568018);
        (*pcVar3)();
      }
    }
    else {
      if (uVar13 != 0) {
        if (uVar13 != 3) {
          if (lVar11 == 0) {
            func_0x00f78af4();
            goto code_r0x01568014;
          }
          auVar14 = ZEXT816(0);
          auVar2 = ZEXT816(0);
          if (*(char *)(lVar11 + 0x108) != '\0') goto code_r0x01567a08;
          /*Atlas.Save.SaveManager.SaveBuffer$$ResetMemoryStream*/ func_0x0156802c(lVar11 + 0x10);
          if (*(long *)(lVar11 + 0x70) == 0) {
            func_0x00f78af4();
            goto code_r0x01568014;
          }
          plVar8 = *(long **)(*(long *)(lVar11 + 0x70) + 0x30);
          if (plVar8 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x01568014;
          }
          (**(code **)(*plVar8 + 0x5b8))
                    (&uStack_e8,plVar8,param_1[8],0,*(undefined8 *)(lVar11 + 0x20),&UNK_0000c800,
                     *(undefined8 *)(*plVar8 + 0x5c0));
          uStack_98 = uStack_e0;
          uStack_a0 = uStack_e8;
          uStack_90 = uStack_d8;
          /*UniRx.Async.UniTask<Save>$$GetAwaiter*/ func_0x01b7aaf4(&uStack_e8,&uStack_a0,uRam0000000003d41540);
          uStack_78 = uStack_e0;
          uStack_80 = uStack_e8;
          uStack_70 = uStack_d8;
          uVar10 = /*UniRx.Async.UniTask.Awaiter<Save>$$get_IsCompleted*/ func_0x01cf65b8(&uStack_80,uRam0000000003d2ca30);
          if ((uVar10 & 1) == 0) {
            *param_1 = 0;
            *(undefined8 *)(param_1 + 0xe) = uStack_78;
            *(undefined8 *)(param_1 + 0xc) = uStack_80;
            *(ulong *)(param_1 + 0x10) = uStack_70;
            /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Save>, SaveManager.<AsyncLoad>d__60>*/ func_0x0181c4d4(param_1 + 2,&uStack_80,param_1,uRam0000000003d52028);
            return;
          }
          goto code_r0x01567750;
        }
        uStack_78 = *(undefined8 *)(param_1 + 0xe);
        uStack_80 = *(undefined8 *)(param_1 + 0xc);
        uStack_70 = *(ulong *)(param_1 + 0x10);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = 0xffffffff;
        auStack_60 = ZEXT816(0);
        auStack_50 = ZEXT816(0);
code_r0x01567718:
        /*UniRx.Async.UniTask.Awaiter<Save>$$GetResult*/ func_0x01cf669c(&uStack_80,uRam0000000003d2ca28);
        goto code_r0x015679c0;
      }
      uStack_78 = *(undefined8 *)(param_1 + 0xe);
      uStack_80 = *(undefined8 *)(param_1 + 0xc);
      uStack_70 = *(ulong *)(param_1 + 0x10);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      uVar13 = 0xffffffff;
      *param_1 = 0xffffffff;
code_r0x01567750:
      auStack_50 = /*UniRx.Async.UniTask.Awaiter<Save>$$GetResult*/ func_0x01cf669c(&uStack_80,uRam0000000003d2ca28);
      /*Core.Services.Save$$get_Local*/ func_0x016841d8(&uStack_e8,auStack_50,0);
      uStack_b8 = uStack_e0;
      uStack_c0 = uStack_e8;
      uStack_b0 = uStack_d8;
      auStack_60 = /*System.Nullable<SaveFile>$$get_Value*/ func_0x0266027c(&uStack_c0,uRam0000000003d3ecf0);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x01568014;
      }
      plVar8 = *(long **)(lVar11 + 0x18);
      uVar4 = /*Core.Services.SaveFile$$get_Size*/ func_0x016846c8(auStack_60,0);
      if (plVar8 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x01568014;
      }
      (**(code **)(*plVar8 + 0x2d8))(plVar8,uVar4,*(undefined8 *)(*plVar8 + 0x2e0));
      plVar8 = *(long **)(lVar11 + 0xf0);
      uVar1 = param_1[8];
      lVar6 = Atlas_Save_SaveManager__DeserializeSaveBuffer(lVar11,lVar11 + 0x10,0);
      if (plVar8 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x01568014;
      }
      if (lVar6 != 0) {
        lVar7 = func_0x00f78adc(lVar6,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar7 != 0) goto code_r0x01567808;
        uVar9 = func_0x00f78b14();
code_r0x01567d30:
        func_0x00f78ac0(uVar9,0);
        goto code_r0x01568014;
      }
code_r0x01567808:
      if (*(uint *)(plVar8 + 3) <= uVar1) {
        uVar9 = func_0x00f78b24();
        goto code_r0x01567d30;
      }
      plVar8[(ulong)uVar1 + 4] = lVar6;
      /*Core.Services.Save$$get_RemoteConflict*/ func_0x01684294(&uStack_e8,auStack_50,0);
      uStack_b8 = uStack_e0;
      uStack_c0 = uStack_e8;
      uStack_b0 = uStack_d8;
      auVar14 = auStack_60;
      auVar2 = auStack_50;
      if ((uStack_d8 & 0xff) != 0) goto code_r0x01567844;
      uVar10 = /*Core.Services.SaveFile$$get_Dirty*/ func_0x016844e0(auStack_60,0);
      if ((uVar10 & 1) != 0) {
        auVar14 = auStack_60;
        auVar2 = auStack_50;
        if (*(char *)(lVar11 + 0x108) != '\0') goto code_r0x01567a08;
        if (*(long *)(lVar11 + 0x70) == 0) {
          func_0x00f78af4();
          goto code_r0x01568014;
        }
        plVar8 = *(long **)(*(long *)(lVar11 + 0x70) + 0x30);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01568014;
        }
        (**(code **)(*plVar8 + 0x608))
                  (&uStack_e8,plVar8,param_1[8],*(undefined8 *)(*plVar8 + 0x610));
        uStack_98 = uStack_e0;
        uStack_a0 = uStack_e8;
        uStack_90 = uStack_d8;
        /*UniRx.Async.UniTask<Save>$$GetAwaiter*/ func_0x01b7aaf4(&uStack_e8,&uStack_a0,uRam0000000003d41540);
        uStack_78 = uStack_e0;
        uStack_80 = uStack_e8;
        uStack_70 = uStack_d8;
        uVar10 = /*UniRx.Async.UniTask.Awaiter<Save>$$get_IsCompleted*/ func_0x01cf65b8(&uStack_80,uRam0000000003d2ca30);
        if ((uVar10 & 1) == 0) {
          *param_1 = 3;
          *(undefined8 *)(param_1 + 0xe) = uStack_78;
          *(undefined8 *)(param_1 + 0xc) = uStack_80;
          *(ulong *)(param_1 + 0x10) = uStack_70;
          /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Save>, SaveManager.<AsyncLoad>d__60>*/ func_0x0181c4d4(param_1 + 2,&uStack_80,param_1,uRam0000000003d52028);
          return;
        }
        goto code_r0x01567718;
      }
    }
    uStack_d0 = Atlas_Save_SaveManager__UpdateSaveSlotAndMergeIfRequired
                          (lVar11,param_1[8],*(undefined8 *)(param_1 + 10),0);
    uStack_c8 = /*UniRx.Async.UniTask$$GetAwaiter*/ func_0x02f9e6d4(&uStack_d0,0);
    uVar10 = /*UniRx.Async.UniTask.Awaiter$$get_IsCompleted*/ func_0x02faba24(&uStack_c8,0);
    if ((uVar10 & 1) == 0) {
      *param_1 = 4;
      *(undefined8 *)(param_1 + 0x16) = uStack_c8;
      /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter, SaveManager.<AsyncLoad>d__60>*/ func_0x0181d234(param_1 + 2,&uStack_c8,param_1,uRam0000000003d52060);
      return;
    }
  }
  else {
    if (uVar13 != 4) {
      param_1[10] = 0;
      param_1[0xb] = 0;
      goto LAB_015676e0;
    }
    uStack_c8 = *(undefined8 *)(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = 0xffffffff;
    auStack_60 = ZEXT816(0);
    auStack_50 = ZEXT816(0);
  }
  /*UniRx.Async.UniTask.Awaiter$$GetResult*/ func_0x02faba7c(&uStack_c8,0);
  auVar14 = auStack_60;
  auVar2 = auStack_50;
code_r0x01567a08:
  *param_1 = 0xfffffffe;
  param_1[10] = 0;
  param_1[0xb] = 0;
  auStack_60 = auVar14;
  auStack_50 = auVar2;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$SetResult*/ func_0x02f99854(param_1 + 2,0);
  return;
}



// ============================================================
// RVA: 0x1568098 | Atlas.Save.SaveManager.<AsyncLoad>d__60.SetStateMachine
// ============================================================

long Atlas_Save_SaveManager__AsyncLoad_d__60__SetStateMachine(long param_1)

{
  return param_1 + 8;
}



