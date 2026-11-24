// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.HTTP.Response

// ============================================================
// RVA: 0x168896c | Core.Services.Internal.HTTP.Response.DataAsString
// ============================================================

undefined1  [16] Core_Services_Internal_HTTP_Response__DataAsString(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  plVar1 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x016889a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (**(code **)(*plVar1 + 0x338))
                       (plVar1,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar1 + 0x340));
    return auVar3;
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb5a3c & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d67d98);
    bRam0000000003eb5a3c = 1;
  }
  uVar2 = /*System.String$$Format*/ func_0x029bc688(/*STR('<= HTTP {0}')*/ uRam0000000003d67d98,uVar2,0);
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = 4;
  return auVar3;
}



// ============================================================
// RVA: 0x168b008 | Core.Services.Internal.HTTP.Response..ctor
// ============================================================

undefined1  [16] Core_Services_Internal_HTTP_Response___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5a4c & 1) == 0) {
    func_0x00f78a20(0x3d1eda0);
    func_0x00f78a20(0x3d2fe20);
    func_0x00f78a20(0x3d1c508);
    bRam0000000003eb5a4c = 1;
  }
  uVar1 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,0);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, string>_TypeInfo*/ uRam0000000003d1c508);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar1,uRam0000000003d2fe20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x1a6490c | Core.Services.Internal.HTTP.Response.DataAsObject<object>
// ============================================================

undefined8
Core_Services_Internal_HTTP_Response__DataAsObject_object_
          (long param_1,long param_2,long param_3,ulong param_4,long param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  
  if ((bRam0000000003eb6ab2 & 1) == 0) {
    func_0x00f78a20(0x3d22b60);
    bRam0000000003eb6ab2 = 1;
  }
  if (param_1 == 0) {
    auVar8 = func_0x00f78af4();
    lVar6 = auVar8._8_8_;
    uVar4 = auVar8._0_8_;
    iVar2 = (**(code **)**(undefined8 **)(param_5 + 0x30))();
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x30) + 8))();
    lVar7 = (long)iVar2;
    if (iVar3 < 0x41) {
      iVar3 = 0x40;
    }
    if ((param_4 & 0xffc0) == 0) {
      if (param_3 < 1) {
        uVar5 = 0;
        if (lVar6 < 1) {
          return 0;
        }
      }
      else {
        uVar5 = /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Malloc*/ func_0x03279b4c(lVar7 * param_3,iVar3,param_4 & 0xffffffff,0,lVar7,iVar3,0);
        if (lVar6 < 1) {
          return uVar5;
        }
        if (param_3 <= lVar6) {
          lVar6 = param_3;
        }
        /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$MemCpy*/ func_0x03279bf4(uVar5,uVar4,lVar6 * lVar7,0);
      }
      /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(uVar4,param_4 & 0xffffffff,0);
      return uVar5;
    }
    if ((bRam0000000003ebcb34 & 1) == 0) {
      func_0x00f78a20(0x3d1fb58);
      bRam0000000003ebcb34 = 1;
    }
    uStack_88 = 0;
    uStack_98 = (undefined4)param_3;
    uStack_94 = (undefined4)param_4;
    uStack_a0 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(uVar4,0);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    cVar1 = '\0';
    if (iVar3 - 1U != 0) {
      cVar1 = (char)(uint)((ulong)((double)((ulong)(iVar3 - 1U) | 0x4330000000000000) +
                                  -4503599627370496.0) >> 0x34) + '\x02';
    }
    uStack_88 = CONCAT71(uStack_88._1_7_,cVar1);
    uStack_8c = auVar8._8_4_;
    iStack_90 = iVar2;
    if (((*(byte *)(/*Unity.Collections.AllocatorManager_TypeInfo*/ lRam0000000003d1fb58 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Unity.Collections.AllocatorManager_TypeInfo*/ lRam0000000003d1fb58 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*Unity.Collections.AllocatorManager$$Try*/ func_0x02fd5938(&uStack_a0);
    uVar4 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb204(uStack_a0,0);
    return uVar4;
  }
  uVar4 = Core_Services_Internal_HTTP_Response__DataAsString(param_1,0);
  if (((*(ushort *)(/*Newtonsoft.Json.JsonConvert_TypeInfo*/ lRam0000000003d22b60 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Newtonsoft.Json.JsonConvert_TypeInfo*/ lRam0000000003d22b60 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
                    /* WARNING: Could not recover jumptable at 0x01a64994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)**(undefined8 **)(param_2 + 0x30))(uVar4);
  return uVar4;
}



