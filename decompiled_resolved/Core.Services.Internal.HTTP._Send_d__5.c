// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.HTTP.<Send>d__5

// ============================================================
// RVA: 0x168a518 | Core.Services.Internal.HTTP.<Send>d__5.MoveNext
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168ad88) */

void Core_Services_Internal_HTTP__Send_d__5__MoveNext(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int iStack_b8;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000003eb5a49 & 1) == 0) {
    func_0x00f78a20(0x3d2c5a8);
    func_0x00f78a20(0x3d2c5c8);
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d2fe50);
    func_0x00f78a20(0x3d21438);
    func_0x00f78a20(0x3d34ef8);
    func_0x00f78a20(0x3d34f00);
    func_0x00f78a20(0x3d34f08);
    func_0x00f78a20(0x3d35530);
    func_0x00f78a20(0x3d1c8d0);
    func_0x00f78a20(0x3d22b60);
    func_0x00f78a20(0x3d393c0);
    func_0x00f78a20(0x3d393c8);
    func_0x00f78a20(0x3d29b38);
    func_0x00f78a20(0x3d29b48);
    func_0x00f78a20(0x3d23988);
    func_0x00f78a20(0x3d64c38);
    func_0x00f78a20(0x3d29b30);
    func_0x00f78a20(0x3d25710);
    func_0x00f78a20(0x3d25788);
    func_0x00f78a20(0x3d25828);
    func_0x00f78a20(0x3d77c70);
    func_0x00f78a20(0x3d77c78);
    func_0x00f78a20(0x3d694c8);
    func_0x00f78a20(0x3d69638);
    bRam0000000003eb5a49 = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  iVar2 = *param_1;
  if (iVar2 == 0) {
    uStack_98 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    lVar4 = func_0x00f78aec(/*Core.Services.Internal.HTTP.<>c__DisplayClass5_0_TypeInfo*/ uRam0000000003d29b30);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar4,0);
    Core_Services_Internal_HTTP__LogRequest(*(undefined8 *)(param_1 + 8));
    lVar9 = *(long *)(param_1 + 8);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    if (*(char *)(lVar9 + 0x40) != '\0') {
      /*UnityEngine.Networking.UnityWebRequest$$ClearCookieCache*/ func_0x032f7e6c(0);
      lVar9 = *(long *)(param_1 + 8);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
    }
    uVar10 = *(undefined8 *)(lVar9 + 0x18);
    plVar5 = (long *)func_0x00f78ae0(/*Core.Services.Internal.HTTP.Method_TypeInfo*/ uRam0000000003d29b38,(undefined4 *)(lVar9 + 0x10));
    if (plVar5 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    puVar7 = (undefined4 *)func_0x00f78ae4(plVar5);
    *(undefined4 *)(lVar9 + 0x10) = *puVar7;
    lVar9 = func_0x00f78aec(/*UnityEngine.Networking.UnityWebRequest_TypeInfo*/ uRam0000000003d25788);
    /*UnityEngine.Networking.UnityWebRequest$$.ctor*/ func_0x032f8068(lVar9,uVar10,uVar6,0);
    *(long *)(param_1 + 10) = lVar9;
    uVar10 = func_0x00f78aec(/*UnityEngine.Networking.DownloadHandlerBuffer_TypeInfo*/ uRam0000000003d21438);
    /*UnityEngine.Networking.DownloadHandlerBuffer$$.ctor*/ func_0x032f7cec(uVar10,0);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    /*UnityEngine.Networking.UnityWebRequest$$set_downloadHandler*/ func_0x032f83c8(lVar9,uVar10,0);
    lVar9 = *(long *)(param_1 + 8);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    lVar12 = *(long *)(lVar9 + 0x28);
    if (lVar12 != 0) {
      lVar11 = *(long *)(param_1 + 10);
      lVar9 = func_0x00f78aec(/*UnityEngine.Networking.UploadHandlerRaw_TypeInfo*/ uRam0000000003d25828);
      /*UnityEngine.Networking.UploadHandlerRaw$$.ctor*/ func_0x032fa244(lVar9,lVar12,0);
      if ((lVar9 == 0) || (/*UnityEngine.Networking.UploadHandler$$set_contentType*/ func_0x032fa148(lVar9,/*STR('application/octet-stream')*/ uRam0000000003d77c78,0), lVar11 == 0)) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
      /*UnityEngine.Networking.UnityWebRequest$$set_uploadHandler*/ func_0x032f84d8(lVar11,lVar9,0);
      lVar9 = *(long *)(param_1 + 8);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
    }
    if (*(long *)(lVar9 + 0x20) != 0) {
      lVar9 = *(long *)(param_1 + 10);
      plVar5 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
      if (*(long *)(param_1 + 8) == 0) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x20);
      if (((*(ushort *)(/*Newtonsoft.Json.JsonConvert_TypeInfo*/ lRam0000000003d22b60 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Newtonsoft.Json.JsonConvert_TypeInfo*/ lRam0000000003d22b60 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*Newtonsoft.Json.JsonConvert$$SerializeObject*/ func_0x02b4a81c(uVar10,0);
      if (plVar5 == (long *)0x0) {
        func_0x00f78af4(uVar10,uVar10);
        goto code_r0x0168afec;
      }
      uVar10 = (**(code **)(*plVar5 + 0x238))(plVar5,uVar10,*(undefined8 *)(*plVar5 + 0x240));
      lVar12 = func_0x00f78aec(/*UnityEngine.Networking.UploadHandlerRaw_TypeInfo*/ uRam0000000003d25828);
      /*UnityEngine.Networking.UploadHandlerRaw$$.ctor*/ func_0x032fa244(lVar12,uVar10,0);
      if ((lVar12 == 0) || (/*UnityEngine.Networking.UploadHandler$$set_contentType*/ func_0x032fa148(lVar12,/*STR('application/json')*/ uRam0000000003d77c70,0), lVar9 == 0)) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
      /*UnityEngine.Networking.UnityWebRequest$$set_uploadHandler*/ func_0x032f84d8(lVar9,lVar12,0);
    }
    if (*(long *)(param_1 + 10) == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    lVar9 = /*UnityEngine.Networking.UnityWebRequest$$get_uploadHandler*/ func_0x032f871c(*(long *)(param_1 + 10),0);
    if (lVar9 == 0) {
      if (*(long *)(param_1 + 8) == 0) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
      if (*(int *)(*(long *)(param_1 + 8) + 0x10) != 0) {
        lVar9 = *(long *)(param_1 + 10);
        plVar5 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
        uVar10 = func_0x00f78aec(/*object_TypeInfo*/ uRam0000000003d23988);
        /*System.Object$$.ctor*/ func_0x0294d018(uVar10,0);
        if (((*(ushort *)(/*Newtonsoft.Json.JsonConvert_TypeInfo*/ lRam0000000003d22b60 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Newtonsoft.Json.JsonConvert_TypeInfo*/ lRam0000000003d22b60 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*Newtonsoft.Json.JsonConvert$$SerializeObject*/ func_0x02b4a81c(uVar10,0);
        if (plVar5 == (long *)0x0) {
          func_0x00f78af4(uVar10,uVar10);
          goto code_r0x0168afec;
        }
        uVar10 = (**(code **)(*plVar5 + 0x238))(plVar5,uVar10,*(undefined8 *)(*plVar5 + 0x240));
        lVar12 = func_0x00f78aec(/*UnityEngine.Networking.UploadHandlerRaw_TypeInfo*/ uRam0000000003d25828);
        /*UnityEngine.Networking.UploadHandlerRaw$$.ctor*/ func_0x032fa244(lVar12,uVar10,0);
        if ((lVar12 == 0) || (/*UnityEngine.Networking.UploadHandler$$set_contentType*/ func_0x032fa148(lVar12,/*STR('application/json')*/ uRam0000000003d77c70,0), lVar9 == 0)) {
          func_0x00f78af4();
          goto code_r0x0168afec;
        }
        /*UnityEngine.Networking.UnityWebRequest$$set_uploadHandler*/ func_0x032f84d8(lVar9,lVar12,0);
      }
    }
    uVar8 = Core_Services_Internal_HTTP__HasBasicAuth(*(undefined8 *)(param_1 + 8));
    if ((uVar8 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 10);
      uVar10 = Core_Services_Internal_HTTP__GetBasicAuthBase64(*(undefined8 *)(param_1 + 8));
      uVar10 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('Basic ')*/ uRam0000000003d69638,uVar10,0);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
      /*UnityEngine.Networking.UnityWebRequest$$SetRequestHeader*/ func_0x032f9754(lVar9,/*STR('Authorization')*/ uRam0000000003d694c8,uVar10,0);
    }
    if (*(long *)(param_1 + 8) == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x48);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, SchemaElementDecl>$$GetEnumerator*/ func_0x01ed7d98(&uStack_e0,lVar9,uRam0000000003d2fe50);
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_70 = uStack_c0;
    while (uVar8 = /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$MoveNext*/ func_0x01fd5dd4(&uStack_90,uRam0000000003d34f00), (uVar8 & 1) != 0) {
      if (*(long *)(param_1 + 10) == 0) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
      /*UnityEngine.Networking.UnityWebRequest$$SetRequestHeader*/ func_0x032f9754(*(long *)(param_1 + 10),uStack_80,uStack_78,0);
    }
    iStack_b8 = 0x1af;
    uStack_a8 = 1;
    if (iVar2 < 0) {
      /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_90,uRam0000000003d34ef8);
    }
    if (iStack_b8 == 0x1af) {
      uStack_a8 = 0;
    }
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    *(undefined8 *)(param_1 + 0xc) = uVar10;
    if (*(long *)(param_1 + 10) == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    uVar10 = /*UnityEngine.Networking.UnityWebRequest$$SendWebRequest*/ func_0x032f87e8(*(long *)(param_1 + 10),0);
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    *(undefined8 *)(lVar4 + 0x10) = uVar10;
    uVar10 = func_0x00f78aec(/*System.Func<bool>_TypeInfo*/ uRam0000000003d1c8d0);
    /*System.Func<bool>$$.ctor*/ func_0x02163070(uVar10,lVar4,uRam0000000003d64c38,uRam0000000003d35530);
    if (((*(ushort *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_a0 = /*UniRx.Async.UniTask$$WaitUntil*/ func_0x02fa1ff4(uVar10,4,0,0);
    uStack_98 = /*UniRx.Async.UniTask$$GetAwaiter*/ func_0x02f9e6d4(&uStack_a0,0);
    uVar8 = /*UniRx.Async.UniTask.Awaiter$$get_IsCompleted*/ func_0x02faba24(&uStack_98,0);
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = uStack_98;
      /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Internal.HTTP.Response>$$AwaitUnsafeOnCompleted<UniTask.Awaiter, Internal.HTTP.<Send>d__5>*/ func_0x0170c8f0(param_1 + 2,&uStack_98,param_1,uRam0000000003d2c5a8);
      return;
    }
  }
  /*UniRx.Async.UniTask.Awaiter$$GetResult*/ func_0x02faba7c(&uStack_98,0);
  if (*(long *)(param_1 + 10) == 0) {
    func_0x00f78af4();
  }
  else {
    iVar2 = /*UnityEngine.Networking.UnityWebRequest$$get_result*/ func_0x032f8ea4(*(long *)(param_1 + 10),0);
    if (iVar2 == 2) {
      func_0x00f78a24(0x3d24970);
      uVar10 = func_0x00f78aec();
      /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar10,1);
      Core_Services_Internal_HTTP__LogResponse(uVar10);
      if (*(long *)(param_1 + 10) == 0) {
        func_0x00f78af4();
      }
      else {
        /*UnityEngine.Networking.UnityWebRequest$$Dispose*/ func_0x032f8698(*(long *)(param_1 + 10),0);
        uVar6 = func_0x00f78a24(0x3d64c40);
        func_0x00f78ac0(uVar10,uVar6);
      }
    }
    else {
      lVar4 = func_0x00f78aec(/*Core.Services.Internal.HTTP.Response_TypeInfo*/ uRam0000000003d29b48);
      /*Core.Services.Internal.HTTP.Response$$.ctor*/ func_0x0168b008();
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
      uVar10 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar10,*(undefined8 *)(param_1 + 0xc),0);
      if (lVar4 == 0) {
        func_0x00f78af4();
      }
      else {
        *(undefined8 *)(lVar4 + 0x18) = uVar10;
        if (*(long *)(param_1 + 10) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar3 = /*UnityEngine.Networking.UnityWebRequest$$get_responseCode*/ func_0x032f8ee4(*(long *)(param_1 + 10),0);
          *(undefined4 *)(lVar4 + 0x20) = uVar3;
          if (*(long *)(param_1 + 10) == 0) {
            func_0x00f78af4();
          }
          else {
            uVar10 = /*UnityEngine.Networking.UnityWebRequest$$GetResponseHeaders*/ func_0x032f9960(*(long *)(param_1 + 10),0);
            *(undefined8 *)(lVar4 + 0x28) = uVar10;
            if (*(long *)(param_1 + 10) == 0) {
              func_0x00f78af4();
            }
            else {
              lVar9 = /*UnityEngine.Networking.UnityWebRequest$$get_downloadHandler*/ func_0x032f8714(*(long *)(param_1 + 10),0);
              if (lVar9 != 0) {
                if (*(long *)(param_1 + 10) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0168afec;
                }
                lVar9 = /*UnityEngine.Networking.UnityWebRequest$$get_downloadHandler*/ func_0x032f8714(*(long *)(param_1 + 10),0);
                if (lVar9 == 0) {
                  func_0x00f78af4();
                  goto code_r0x0168afec;
                }
                uVar10 = /*UnityEngine.Networking.DownloadHandler$$get_data*/ func_0x032f787c(lVar9,0);
                *(undefined8 *)(lVar4 + 0x10) = uVar10;
              }
              if (*(long *)(param_1 + 10) != 0) {
                /*UnityEngine.Networking.UnityWebRequest$$Dispose*/ func_0x032f8698(*(long *)(param_1 + 10),0);
                Core_Services_Internal_HTTP__LogResponse(lVar4);
                *param_1 = -2;
                param_1[10] = 0;
                param_1[0xb] = 0;
                /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Internal.HTTP.Response>$$SetResult*/ func_0x01cb1820(param_1 + 2,lVar4,uRam0000000003d2c5c8);
                return;
              }
              func_0x00f78af4();
            }
          }
        }
      }
    }
  }
code_r0x0168afec:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x168aff0);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x168b0b4 | Core.Services.Internal.HTTP.<Send>d__5.SetStateMachine
// ============================================================

undefined1  [16]
Core_Services_Internal_HTTP__Send_d__5__SetStateMachine(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb5a4a & 1) == 0) {
    func_0x00f78a20(0x3d2c5d0);
    bRam0000000003eb5a4a = 1;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1 + 8;
  return auVar1;
}



