// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.HTTP.<>c__DisplayClass5_0

// ============================================================
// RVA: 0x168a4f0 | Core.Services.Internal.HTTP.<>c__DisplayClass5_0..ctor
// ============================================================

void Core_Services_Internal_HTTP___c__DisplayClass5_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x168a4f8 | Core.Services.Internal.HTTP.<>c__DisplayClass5_0.<Send>b__0
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0168ad88) */

void Core_Services_Internal_HTTP___c__DisplayClass5_0___Send_b__0(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  int iStack_c8;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    if (pcRam0000000003ebe998 == (code *)0x0) {
      pcRam0000000003ebe998 = (code *)func_0x00f789d4("UnityEngine.AsyncOperation::get_isDone()");
    }
                    /* WARNING: Could not recover jumptable at 0x03219918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebe998)(lVar4);
    return;
  }
  piVar5 = (int *)func_0x00f78af4();
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
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  iVar2 = *piVar5;
  if (iVar2 == 0) {
    uStack_a8 = *(undefined8 *)(piVar5 + 0xe);
    piVar5[0xe] = 0;
    piVar5[0xf] = 0;
    *piVar5 = -1;
  }
  else {
    lVar4 = func_0x00f78aec(/*Core.Services.Internal.HTTP.<>c__DisplayClass5_0_TypeInfo*/ uRam0000000003d29b30);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar4,0);
    Core_Services_Internal_HTTP__LogRequest(*(undefined8 *)(piVar5 + 8));
    lVar10 = *(long *)(piVar5 + 8);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    if (*(char *)(lVar10 + 0x40) != '\0') {
      /*UnityEngine.Networking.UnityWebRequest$$ClearCookieCache*/ func_0x032f7e6c(0);
      lVar10 = *(long *)(piVar5 + 8);
      if (lVar10 == 0) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
    }
    uVar11 = *(undefined8 *)(lVar10 + 0x18);
    plVar6 = (long *)func_0x00f78ae0(/*Core.Services.Internal.HTTP.Method_TypeInfo*/ uRam0000000003d29b38,(undefined4 *)(lVar10 + 0x10));
    if (plVar6 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    puVar8 = (undefined4 *)func_0x00f78ae4(plVar6);
    *(undefined4 *)(lVar10 + 0x10) = *puVar8;
    lVar10 = func_0x00f78aec(/*UnityEngine.Networking.UnityWebRequest_TypeInfo*/ uRam0000000003d25788);
    /*UnityEngine.Networking.UnityWebRequest$$.ctor*/ func_0x032f8068(lVar10,uVar11,uVar7,0);
    *(long *)(piVar5 + 10) = lVar10;
    uVar11 = func_0x00f78aec(/*UnityEngine.Networking.DownloadHandlerBuffer_TypeInfo*/ uRam0000000003d21438);
    /*UnityEngine.Networking.DownloadHandlerBuffer$$.ctor*/ func_0x032f7cec(uVar11,0);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    /*UnityEngine.Networking.UnityWebRequest$$set_downloadHandler*/ func_0x032f83c8(lVar10,uVar11,0);
    lVar10 = *(long *)(piVar5 + 8);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    lVar13 = *(long *)(lVar10 + 0x28);
    if (lVar13 != 0) {
      lVar12 = *(long *)(piVar5 + 10);
      lVar10 = func_0x00f78aec(/*UnityEngine.Networking.UploadHandlerRaw_TypeInfo*/ uRam0000000003d25828);
      /*UnityEngine.Networking.UploadHandlerRaw$$.ctor*/ func_0x032fa244(lVar10,lVar13,0);
      if ((lVar10 == 0) || (/*UnityEngine.Networking.UploadHandler$$set_contentType*/ func_0x032fa148(lVar10,/*STR('application/octet-stream')*/ uRam0000000003d77c78,0), lVar12 == 0)) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
      /*UnityEngine.Networking.UnityWebRequest$$set_uploadHandler*/ func_0x032f84d8(lVar12,lVar10,0);
      lVar10 = *(long *)(piVar5 + 8);
      if (lVar10 == 0) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
    }
    if (*(long *)(lVar10 + 0x20) != 0) {
      lVar10 = *(long *)(piVar5 + 10);
      plVar6 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
      if (*(long *)(piVar5 + 8) == 0) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
      uVar11 = *(undefined8 *)(*(long *)(piVar5 + 8) + 0x20);
      if (((*(ushort *)(/*Newtonsoft.Json.JsonConvert_TypeInfo*/ lRam0000000003d22b60 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Newtonsoft.Json.JsonConvert_TypeInfo*/ lRam0000000003d22b60 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*Newtonsoft.Json.JsonConvert$$SerializeObject*/ func_0x02b4a81c(uVar11,0);
      if (plVar6 == (long *)0x0) {
        func_0x00f78af4(uVar11,uVar11);
        goto code_r0x0168afec;
      }
      uVar11 = (**(code **)(*plVar6 + 0x238))(plVar6,uVar11,*(undefined8 *)(*plVar6 + 0x240));
      lVar13 = func_0x00f78aec(/*UnityEngine.Networking.UploadHandlerRaw_TypeInfo*/ uRam0000000003d25828);
      /*UnityEngine.Networking.UploadHandlerRaw$$.ctor*/ func_0x032fa244(lVar13,uVar11,0);
      if ((lVar13 == 0) || (/*UnityEngine.Networking.UploadHandler$$set_contentType*/ func_0x032fa148(lVar13,/*STR('application/json')*/ uRam0000000003d77c70,0), lVar10 == 0)) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
      /*UnityEngine.Networking.UnityWebRequest$$set_uploadHandler*/ func_0x032f84d8(lVar10,lVar13,0);
    }
    if (*(long *)(piVar5 + 10) == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    lVar10 = /*UnityEngine.Networking.UnityWebRequest$$get_uploadHandler*/ func_0x032f871c(*(long *)(piVar5 + 10),0);
    if (lVar10 == 0) {
      if (*(long *)(piVar5 + 8) == 0) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
      if (*(int *)(*(long *)(piVar5 + 8) + 0x10) != 0) {
        lVar10 = *(long *)(piVar5 + 10);
        plVar6 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
        uVar11 = func_0x00f78aec(/*object_TypeInfo*/ uRam0000000003d23988);
        /*System.Object$$.ctor*/ func_0x0294d018(uVar11,0);
        if (((*(ushort *)(/*Newtonsoft.Json.JsonConvert_TypeInfo*/ lRam0000000003d22b60 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Newtonsoft.Json.JsonConvert_TypeInfo*/ lRam0000000003d22b60 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*Newtonsoft.Json.JsonConvert$$SerializeObject*/ func_0x02b4a81c(uVar11,0);
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4(uVar11,uVar11);
          goto code_r0x0168afec;
        }
        uVar11 = (**(code **)(*plVar6 + 0x238))(plVar6,uVar11,*(undefined8 *)(*plVar6 + 0x240));
        lVar13 = func_0x00f78aec(/*UnityEngine.Networking.UploadHandlerRaw_TypeInfo*/ uRam0000000003d25828);
        /*UnityEngine.Networking.UploadHandlerRaw$$.ctor*/ func_0x032fa244(lVar13,uVar11,0);
        if ((lVar13 == 0) || (/*UnityEngine.Networking.UploadHandler$$set_contentType*/ func_0x032fa148(lVar13,/*STR('application/json')*/ uRam0000000003d77c70,0), lVar10 == 0)) {
          func_0x00f78af4();
          goto code_r0x0168afec;
        }
        /*UnityEngine.Networking.UnityWebRequest$$set_uploadHandler*/ func_0x032f84d8(lVar10,lVar13,0);
      }
    }
    uVar9 = Core_Services_Internal_HTTP__HasBasicAuth(*(undefined8 *)(piVar5 + 8));
    if ((uVar9 & 1) != 0) {
      lVar10 = *(long *)(piVar5 + 10);
      uVar11 = Core_Services_Internal_HTTP__GetBasicAuthBase64(*(undefined8 *)(piVar5 + 8));
      uVar11 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('Basic ')*/ uRam0000000003d69638,uVar11,0);
      if (lVar10 == 0) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
      /*UnityEngine.Networking.UnityWebRequest$$SetRequestHeader*/ func_0x032f9754(lVar10,/*STR('Authorization')*/ uRam0000000003d694c8,uVar11,0);
    }
    if (*(long *)(piVar5 + 8) == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    lVar10 = *(long *)(*(long *)(piVar5 + 8) + 0x48);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, SchemaElementDecl>$$GetEnumerator*/ func_0x01ed7d98(&uStack_f0,lVar10,uRam0000000003d2fe50);
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_80 = uStack_d0;
    while (uVar9 = /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$MoveNext*/ func_0x01fd5dd4(&uStack_a0,uRam0000000003d34f00), (uVar9 & 1) != 0) {
      if (*(long *)(piVar5 + 10) == 0) {
        func_0x00f78af4();
        goto code_r0x0168afec;
      }
      /*UnityEngine.Networking.UnityWebRequest$$SetRequestHeader*/ func_0x032f9754(*(long *)(piVar5 + 10),uStack_90,uStack_88,0);
    }
    iStack_c8 = 0x1af;
    uStack_b8 = 1;
    if (iVar2 < 0) {
      /*System.Collections.Generic.Dictionary.Enumerator<XmlQualifiedName, SchemaElementDecl>$$Dispose*/ func_0x01fd5f4c(&uStack_a0,uRam0000000003d34ef8);
    }
    if (iStack_c8 == 0x1af) {
      uStack_b8 = 0;
    }
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
    *(undefined8 *)(piVar5 + 0xc) = uVar11;
    if (*(long *)(piVar5 + 10) == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    uVar11 = /*UnityEngine.Networking.UnityWebRequest$$SendWebRequest*/ func_0x032f87e8(*(long *)(piVar5 + 10),0);
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x0168afec;
    }
    *(undefined8 *)(lVar4 + 0x10) = uVar11;
    uVar11 = func_0x00f78aec(/*System.Func<bool>_TypeInfo*/ uRam0000000003d1c8d0);
    /*System.Func<bool>$$.ctor*/ func_0x02163070(uVar11,lVar4,uRam0000000003d64c38,uRam0000000003d35530);
    if (((*(ushort *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_b0 = /*UniRx.Async.UniTask$$WaitUntil*/ func_0x02fa1ff4(uVar11,4,0,0);
    uStack_a8 = /*UniRx.Async.UniTask$$GetAwaiter*/ func_0x02f9e6d4(&uStack_b0,0);
    uVar9 = /*UniRx.Async.UniTask.Awaiter$$get_IsCompleted*/ func_0x02faba24(&uStack_a8,0);
    if ((uVar9 & 1) == 0) {
      *piVar5 = 0;
      *(undefined8 *)(piVar5 + 0xe) = uStack_a8;
      /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Internal.HTTP.Response>$$AwaitUnsafeOnCompleted<UniTask.Awaiter, Internal.HTTP.<Send>d__5>*/ func_0x0170c8f0(piVar5 + 2,&uStack_a8,piVar5,uRam0000000003d2c5a8);
      return;
    }
  }
  /*UniRx.Async.UniTask.Awaiter$$GetResult*/ func_0x02faba7c(&uStack_a8,0);
  if (*(long *)(piVar5 + 10) == 0) {
    func_0x00f78af4();
  }
  else {
    iVar2 = /*UnityEngine.Networking.UnityWebRequest$$get_result*/ func_0x032f8ea4(*(long *)(piVar5 + 10),0);
    if (iVar2 == 2) {
      func_0x00f78a24(0x3d24970);
      uVar11 = func_0x00f78aec();
      /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar11,1);
      Core_Services_Internal_HTTP__LogResponse(uVar11);
      if (*(long *)(piVar5 + 10) == 0) {
        func_0x00f78af4();
      }
      else {
        /*UnityEngine.Networking.UnityWebRequest$$Dispose*/ func_0x032f8698(*(long *)(piVar5 + 10),0);
        uVar7 = func_0x00f78a24(0x3d64c40);
        func_0x00f78ac0(uVar11,uVar7);
      }
    }
    else {
      lVar4 = func_0x00f78aec(/*Core.Services.Internal.HTTP.Response_TypeInfo*/ uRam0000000003d29b48);
      /*Core.Services.Internal.HTTP.Response$$.ctor*/ func_0x0168b008();
      if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*System.DateTime$$get_Now*/ func_0x02a8e404(0);
      uVar11 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar11,*(undefined8 *)(piVar5 + 0xc),0);
      if (lVar4 == 0) {
        func_0x00f78af4();
      }
      else {
        *(undefined8 *)(lVar4 + 0x18) = uVar11;
        if (*(long *)(piVar5 + 10) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar3 = /*UnityEngine.Networking.UnityWebRequest$$get_responseCode*/ func_0x032f8ee4(*(long *)(piVar5 + 10),0);
          *(undefined4 *)(lVar4 + 0x20) = uVar3;
          if (*(long *)(piVar5 + 10) == 0) {
            func_0x00f78af4();
          }
          else {
            uVar11 = /*UnityEngine.Networking.UnityWebRequest$$GetResponseHeaders*/ func_0x032f9960(*(long *)(piVar5 + 10),0);
            *(undefined8 *)(lVar4 + 0x28) = uVar11;
            if (*(long *)(piVar5 + 10) == 0) {
              func_0x00f78af4();
            }
            else {
              lVar10 = /*UnityEngine.Networking.UnityWebRequest$$get_downloadHandler*/ func_0x032f8714(*(long *)(piVar5 + 10),0);
              if (lVar10 != 0) {
                if (*(long *)(piVar5 + 10) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0168afec;
                }
                lVar10 = /*UnityEngine.Networking.UnityWebRequest$$get_downloadHandler*/ func_0x032f8714(*(long *)(piVar5 + 10),0);
                if (lVar10 == 0) {
                  func_0x00f78af4();
                  goto code_r0x0168afec;
                }
                uVar11 = /*UnityEngine.Networking.DownloadHandler$$get_data*/ func_0x032f787c(lVar10,0);
                *(undefined8 *)(lVar4 + 0x10) = uVar11;
              }
              if (*(long *)(piVar5 + 10) != 0) {
                /*UnityEngine.Networking.UnityWebRequest$$Dispose*/ func_0x032f8698(*(long *)(piVar5 + 10),0);
                Core_Services_Internal_HTTP__LogResponse(lVar4);
                *piVar5 = -2;
                piVar5[10] = 0;
                piVar5[0xb] = 0;
                /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Internal.HTTP.Response>$$SetResult*/ func_0x01cb1820(piVar5 + 2,lVar4,uRam0000000003d2c5c8);
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



