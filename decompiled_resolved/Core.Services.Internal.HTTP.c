// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Internal.HTTP

// ============================================================
// RVA: 0x168863c | Core.Services.Internal.HTTP.Send
// ============================================================

void Core_Services_Internal_HTTP__Send(undefined8 param_1)

{
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb5a39 & 1) == 0) {
    func_0x00f78a20(0x3d2c5b8);
    func_0x00f78a20(0x3d2c5b0);
    func_0x00f78a20(0x3d2c5d8);
    bRam0000000003eb5a39 = 1;
  }
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_1;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Internal.HTTP.Response>$$Create*/ func_0x01cb1524(&uStack_b8,uRam0000000003d2c5b8);
  uStack_68 = uStack_a8;
  uStack_70 = uStack_b0;
  uStack_78 = uStack_b8;
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  uStack_90 = uStack_a8;
  uStack_98 = uStack_b0;
  uStack_a0 = uStack_b8;
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Internal.HTTP.Response>$$Start<Internal.HTTP.<Send>d__5>*/ func_0x0170db48(&uStack_a0,&uStack_80,uRam0000000003d2c5b0);
  /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder<Internal.HTTP.Response>$$get_Task*/ func_0x01cb1530((ulong)&uStack_80 | 8,uRam0000000003d2c5d8);
  return;
}



// ============================================================
// RVA: 0x1688738 | Core.Services.Internal.HTTP.LogRequest
// ============================================================

/* WARNING: Possible PIC construction at 0x01688910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01688914) */
/* WARNING: Removing unreachable block (ram,0x01688938) */
/* WARNING: Removing unreachable block (ram,0x01688940) */
/* WARNING: Removing unreachable block (ram,0x01688944) */

undefined8 Core_Services_Internal_HTTP__LogRequest(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uStack_84;
  undefined4 uStack_44;
  
  if ((bRam0000000003eb5a3a & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d22b60);
    func_0x00f78a20(0x3d29b38);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d685e0);
    bRam0000000003eb5a3a = 1;
  }
  if (param_1 != 0) {
    uStack_44 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = func_0x00f78ae0(/*Core.Services.Internal.HTTP.Method_TypeInfo*/ uRam0000000003d29b38,&uStack_44);
    uVar1 = /*STR('=> HTTP {0} {1} {2}')*/ uRam0000000003d685e0;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 == 0) {
      uVar3 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    else {
      if (((*(ushort *)(/*Newtonsoft.Json.JsonConvert_TypeInfo*/ lRam0000000003d22b60 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Newtonsoft.Json.JsonConvert_TypeInfo*/ lRam0000000003d22b60 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*Newtonsoft.Json.JsonConvert$$SerializeObject*/ func_0x02b4a81c(lVar5,0);
    }
    uVar4 = /*System.String$$Format*/ func_0x029bdf30(uVar1,uVar2,uVar4,uVar3,0);
    if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = Core_Services_Internal__LogManaged(1,uVar4,0);
    return uVar4;
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb5a3b & 1) == 0) {
    func_0x00f78a20(0x3d21e58);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d67da0);
    bRam0000000003eb5a3b = 1;
  }
  if (lVar5 == 0) {
    lVar5 = func_0x00f78af4();
  }
  else {
    uStack_84 = *(undefined4 *)(lVar5 + 0x20);
    func_0x00f78ae0(/*System.Net.HttpStatusCode_TypeInfo*/ uRam0000000003d21e58,&uStack_84);
  }
  plVar6 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x016889a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar6 + 0x338))
                      (plVar6,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(*plVar6 + 0x340));
    return uVar4;
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5a3c & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d67d98);
    bRam0000000003eb5a3c = 1;
  }
  /*System.String$$Format*/ func_0x029bc688(/*STR('<= HTTP {0}')*/ uRam0000000003d67d98,uVar4,0);
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return 4;
}



// ============================================================
// RVA: 0x1688888 | Core.Services.Internal.HTTP.LogResponse
// ============================================================

/* WARNING: Possible PIC construction at 0x01688910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01688914) */
/* WARNING: Removing unreachable block (ram,0x01688938) */
/* WARNING: Removing unreachable block (ram,0x01688940) */
/* WARNING: Removing unreachable block (ram,0x01688944) */

undefined1  [16] Core_Services_Internal_HTTP__LogResponse(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined4 uStack_34;
  
  if ((bRam0000000003eb5a3b & 1) == 0) {
    func_0x00f78a20(0x3d21e58);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d67da0);
    bRam0000000003eb5a3b = 1;
  }
  if (param_1 == 0) {
    param_1 = func_0x00f78af4();
  }
  else {
    uStack_34 = *(undefined4 *)(param_1 + 0x20);
    func_0x00f78ae0(/*System.Net.HttpStatusCode_TypeInfo*/ uRam0000000003d21e58,&uStack_34);
  }
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
// RVA: 0x16889a8 | Core.Services.Internal.HTTP.LogResponse
// ============================================================

undefined1  [16] Core_Services_Internal_HTTP__LogResponse(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5a3c & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d67d98);
    bRam0000000003eb5a3c = 1;
  }
  uVar1 = /*System.String$$Format*/ func_0x029bc688(/*STR('<= HTTP {0}')*/ uRam0000000003d67d98,param_1,0);
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = 4;
  return auVar2;
}



// ============================================================
// RVA: 0x1688a40 | Core.Services.Internal.HTTP.HasBasicAuth
// ============================================================

/* WARNING: Possible PIC construction at 0x02a49284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02a49304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02a49288) */
/* WARNING: Removing unreachable block (ram,0x02a492c0) */
/* WARNING: Removing unreachable block (ram,0x02a49298) */
/* WARNING: Removing unreachable block (ram,0x02a492c4) */
/* WARNING: Removing unreachable block (ram,0x02a492d0) */
/* WARNING: Removing unreachable block (ram,0x02a492e0) */
/* WARNING: Removing unreachable block (ram,0x02a492e8) */
/* WARNING: Removing unreachable block (ram,0x02a492ec) */

ulong Core_Services_Internal_HTTP__HasBasicAuth
                (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  int iVar18;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ****ppppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  
  if (param_1 != 0) {
    uVar6 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x30),0);
    if ((uVar6 & 1) == 0) {
      uVar3 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x38),0);
      uVar6 = (ulong)(uVar3 ^ 1);
    }
    else {
      uVar6 = 0;
    }
    return uVar6;
  }
  lVar7 = func_0x00f78af4();
  puStack_28 = &Core_Services_Internal_HTTP__GetBasicAuthBase64;
  pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5a3d & 1) == 0) {
    func_0x00f78a20(0x3d20a60);
    func_0x00f78a20(0x3d67968);
    bRam0000000003eb5a3d = 1;
  }
  plVar8 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  if (lVar7 == 0) {
code_r0x01688b4c:
    auVar21 = func_0x00f78af4();
    uVar6 = auVar21._0_8_;
    *(undefined8 *)(uVar6 + 0x10) = *param_3;
    *(long *)(uVar6 + 0x20) = auVar21._8_8_;
    *(undefined8 **)(uVar6 + 0x28) = param_3;
    return uVar6;
  }
  param_3 = *(undefined8 **)(lVar7 + 0x38);
  uVar6 = 0;
  uVar9 = /*System.String$$Concat*/ func_0x029be39c(*(undefined8 *)(lVar7 + 0x30),/*STR(':')*/ uRam0000000003d67968);
  if (plVar8 == (long *)0x0) goto code_r0x01688b4c;
  uVar10 = (**(code **)(*plVar8 + 0x238))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x240));
  if (((*(ushort *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar2 = &stack0xffffffffffffffc0;
  ppppuVar19 = &pppuStack_30;
  uVar9 = 0x3eb9000;
  if ((bRam0000000003eb9928 & 1) == 0) {
    func_0x00f78a20(0x3d20a60,0);
    bRam0000000003eb9928 = 1;
  }
  if (uVar10 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    unaff_x19 = func_0x00f78aec();
    uVar12 = func_0x00f78a24(0x3d79a38);
    uVar14 = 0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(unaff_x19,uVar12);
    uVar12 = func_0x00f78a24(0x3d53a40);
    puVar20 = &System_Convert__ToBase64String;
    auVar21 = func_0x00f78ac0(unaff_x19,uVar12);
  }
  else {
    if (((*(ushort *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar14 = (ulong)*(uint *)(uVar10 + 0x18);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar10;
    uVar6 = 0;
    puVar2 = &stack0xffffffffffffffe0;
    uVar9 = unaff_x20;
    ppppuVar19 = (undefined8 ****)pppuStack_30;
    puVar20 = puStack_28;
  }
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = uVar9;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined8 *****)(puVar2 + -0x10) = ppppuVar19;
  *(undefined **)(puVar2 + -8) = puVar20;
  uVar10 = uVar14;
  uVar11 = uVar6;
  if ((bRam0000000003eb992a & 1) == 0) {
    func_0x00f78a20(0x3d20a60);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb992a = 1;
  }
  iVar15 = (int)uVar11;
  if (auVar21._0_8_ == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar9 = func_0x00f78aec();
    uVar12 = func_0x00f78a24(0x3d79a38);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar9,uVar12,0);
    uVar12 = func_0x00f78a24(0x3d53a48);
    func_0x00f78ac0(uVar9,uVar12);
code_r0x02a49370:
    uVar9 = func_0x00f78a24(0x3d6de28);
    uVar6 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar14 = func_0x00f78aec();
    uVar9 = 0x3d7a280;
code_r0x02a49480:
    uVar9 = func_0x00f78a24(uVar9);
    iVar15 = 0;
    uVar10 = uVar6;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar14,uVar9);
  }
  else {
    if ((int)uVar14 < 0) goto code_r0x02a49370;
    if (auVar21._8_4_ < 0) {
      uVar9 = 0x3d75fa8;
code_r0x02a49454:
      uVar9 = func_0x00f78a24(uVar9);
      uVar6 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar14 = func_0x00f78aec();
      uVar9 = 0x3d7ac18;
      goto code_r0x02a49480;
    }
    uVar3 = (uint)uVar6;
    if (uVar3 < 2) {
      iVar5 = *(int *)(auVar21._0_8_ + 0x18);
      if (auVar21._8_4_ <= iVar5 - (int)uVar14) {
        if (iVar5 == 0) {
          return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        unaff_x25 = 0x3d20a60;
        if (((*(ushort *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar23[8] = uVar3 == 1;
        auVar23._0_8_ = uVar14;
        auVar23._9_3_ = 0;
        puVar20 = &UNK_02a49288;
        goto code_r0x02a494b0;
      }
      uVar9 = 0x3d70ad0;
      goto code_r0x02a49454;
    }
    uVar9 = func_0x00f78a24(0x3d1f218);
    uVar9 = func_0x00f78a34(uVar9,1);
    *(uint *)(puVar2 + -0x54) = uVar3;
    uVar12 = func_0x00f78a24(0x3d22910);
    uVar12 = func_0x00f78ae0(uVar12,puVar2 + -0x54);
    func_0x00055e5c(uVar9);
    func_0x0003dd20(uVar9,uVar12);
    func_0x0005b9c0(uVar9,0,uVar12);
    uVar12 = func_0x00f78a24(0x3d6dca0);
    uVar6 = /*System.Environment$$GetResourceString*/ func_0x02ac7ffc(uVar12,uVar9,0);
    func_0x00f78a24(0x3d1fce8);
    uVar14 = func_0x00f78aec();
    uVar10 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar14,uVar6);
  }
  uVar9 = func_0x00f78a24(0x3d53a48);
  puVar20 = &System_Convert__ToBase64_CalculateAndValidateOutputLength;
  auVar23 = func_0x00f78ac0(uVar14,uVar9);
code_r0x02a494b0:
  iVar5 = auVar23._0_4_ / 3;
  uVar11 = (ulong)(auVar23._0_4_ != iVar5 * 3) * 4 + (long)iVar5 * 4;
  if (uVar11 == 0) {
    return 0;
  }
  if (auVar23._8_4_ != 0) {
    uVar11 = uVar11 + ((long)uVar11 / 0x4c - (ulong)((long)uVar11 % 0x4c == 0)) * 2;
  }
  if (0x7fffffff < (long)uVar11) {
    *(ulong *)(puVar2 + -0x80) = uVar14;
    *(ulong *)(puVar2 + -0x78) = uVar6;
    *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x68) = puVar20;
    func_0x00f78a24(0x3d23ae8);
    uVar9 = func_0x00f78aec();
    /*System.OutOfMemoryException$$.ctor*/ func_0x02965294(uVar9,0);
    uVar12 = func_0x00f78a24(0x3d53a50);
    auVar22 = func_0x00f78ac0(uVar9,uVar12);
    lVar13 = auVar22._8_8_;
    lVar7 = auVar22._0_8_;
    *(undefined8 *)(puVar2 + -0xd0) = unaff_x26;
    *(undefined8 *)(puVar2 + -200) = unaff_x25;
    *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
    *(undefined8 *)(puVar2 + -0xb8) = 0x3eb9000;
    *(undefined1 (*) [16])(puVar2 + -0xb0) = auVar21;
    *(ulong *)(puVar2 + -0xa0) = uVar14;
    *(undefined8 *)(puVar2 + -0x98) = uVar9;
    *(undefined1 **)(puVar2 + -0x90) = puVar2 + -0x70;
    *(undefined **)(puVar2 + -0x88) = &System_Convert__ConvertToBase64Array;
    if ((bRam0000000003eb992d & 1) == 0) {
      func_0x00f78a20(0x3d20a60);
      bRam0000000003eb992d = 1;
    }
    iVar5 = (iVar15 / 3) * 3;
    if (((*(byte *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = iVar5 + (int)uVar10;
    lVar16 = *(long *)(*(long *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0xb8) + 0x10);
    if (lVar16 != 0) {
      if (*(int *)(lVar16 + 0x18) == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = lVar16 + 0x20;
      }
    }
    if ((int)uVar10 < iVar1) {
      uVar6 = 0;
      iVar17 = 0;
      do {
        iVar4 = (int)uVar6;
        if (param_5 != 0) {
          if (iVar17 == 0x4c) {
            iVar17 = 0;
            iVar18 = iVar4 + 1;
            *(undefined2 *)(lVar7 + (long)iVar4 * 2) = 0xd;
            iVar4 = iVar4 + 2;
            *(undefined2 *)(lVar7 + (long)iVar18 * 2) = 10;
          }
          iVar17 = iVar17 + 4;
        }
        iVar18 = (int)uVar10;
        *(undefined2 *)(lVar7 + (long)iVar4 * 2) =
             *(undefined2 *)(lVar16 + ((ulong)(*(byte *)(lVar13 + iVar18) >> 1) & 0x7e));
        *(undefined2 *)(lVar7 + (long)(iVar4 + 1) * 2) =
             *(undefined2 *)
              (lVar16 + (ulong)((uint)(*(byte *)(lVar13 + (iVar18 + 1)) >> 4) |
                               (*(byte *)(lVar13 + iVar18) & 3) << 4) * 2);
        *(undefined2 *)(lVar7 + (long)(iVar4 + 2) * 2) =
             *(undefined2 *)
              (lVar16 + (ulong)((uint)(*(byte *)(lVar13 + (iVar18 + 2)) >> 6) |
                               (*(byte *)(lVar13 + (iVar18 + 1)) & 0xf) << 2) * 2);
        *(undefined2 *)(lVar7 + (long)(iVar4 + 3) * 2) =
             *(undefined2 *)(lVar16 + ((ulong)*(byte *)(lVar13 + (iVar18 + 2)) & 0x3f) * 2);
        uVar6 = (ulong)(iVar4 + 4U);
        uVar10 = (ulong)(iVar18 + 3U);
      } while ((int)(iVar18 + 3U) < iVar1);
      if (((iVar15 != iVar5) && (param_5 != 0)) && (iVar17 == 0x4c)) {
        *(undefined2 *)(lVar7 + (long)(int)(iVar4 + 4U) * 2) = 0xd;
        uVar6 = (ulong)(iVar4 + 6);
        *(undefined2 *)(lVar7 + (long)(iVar4 + 5) * 2) = 10;
      }
    }
    else {
      uVar6 = 0;
    }
    iVar5 = (int)uVar6;
    if (iVar15 % 3 == 1) {
      *(undefined2 *)(lVar7 + (long)iVar5 * 2) =
           *(undefined2 *)(lVar16 + ((ulong)(*(byte *)(lVar13 + iVar1) >> 1) & 0x7e));
      *(undefined2 *)(lVar7 + (long)(iVar5 + 1) * 2) =
           *(undefined2 *)(lVar16 + ((ulong)*(byte *)(lVar13 + iVar1) & 3) * 0x20);
      *(undefined2 *)(lVar7 + (long)(iVar5 + 2) * 2) = *(undefined2 *)(lVar16 + 0x80);
    }
    else {
      if (iVar15 % 3 != 2) {
        return uVar6;
      }
      *(undefined2 *)(lVar7 + (long)iVar5 * 2) =
           *(undefined2 *)(lVar16 + ((ulong)(*(byte *)(lVar13 + iVar1) >> 1) & 0x7e));
      *(undefined2 *)(lVar7 + (long)(iVar5 + 1) * 2) =
           *(undefined2 *)
            (lVar16 + (ulong)((uint)(*(byte *)(lVar13 + (iVar1 + 1)) >> 4) |
                             (*(byte *)(lVar13 + iVar1) & 3) << 4) * 2);
      *(undefined2 *)(lVar7 + (long)(iVar5 + 2) * 2) =
           *(undefined2 *)(lVar16 + ((ulong)*(byte *)(lVar13 + (iVar1 + 1)) & 0xf) * 8);
    }
    *(undefined2 *)(lVar7 + (long)(iVar5 + 3) * 2) = *(undefined2 *)(lVar16 + 0x80);
    return (ulong)(iVar5 + 4);
  }
  return uVar11;
}



// ============================================================
// RVA: 0x1688a8c | Core.Services.Internal.HTTP.GetBasicAuthBase64
// ============================================================

/* WARNING: Possible PIC construction at 0x02a49284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02a49304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02a49288) */
/* WARNING: Removing unreachable block (ram,0x02a492c0) */
/* WARNING: Removing unreachable block (ram,0x02a49298) */
/* WARNING: Removing unreachable block (ram,0x02a492c4) */
/* WARNING: Removing unreachable block (ram,0x02a492d0) */
/* WARNING: Removing unreachable block (ram,0x02a492e0) */
/* WARNING: Removing unreachable block (ram,0x02a492e8) */
/* WARNING: Removing unreachable block (ram,0x02a492ec) */

ulong Core_Services_Internal_HTTP__GetBasicAuthBase64
                (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  int iVar18;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  
  if ((bRam0000000003eb5a3d & 1) == 0) {
    func_0x00f78a20(0x3d20a60);
    func_0x00f78a20(0x3d67968);
    bRam0000000003eb5a3d = 1;
  }
  plVar5 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  if (param_1 == 0) {
LAB_01688b4c:
    auVar21 = func_0x00f78af4();
    uVar14 = auVar21._0_8_;
    *(undefined8 *)(uVar14 + 0x10) = *param_3;
    *(long *)(uVar14 + 0x20) = auVar21._8_8_;
    *(undefined8 **)(uVar14 + 0x28) = param_3;
    return uVar14;
  }
  param_3 = *(undefined8 **)(param_1 + 0x38);
  uVar14 = 0;
  uVar6 = /*System.String$$Concat*/ func_0x029be39c(*(undefined8 *)(param_1 + 0x30),/*STR(':')*/ uRam0000000003d67968);
  if (plVar5 == (long *)0x0) goto LAB_01688b4c;
  uVar7 = (**(code **)(*plVar5 + 0x238))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x240));
  if (((*(ushort *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar2 = &stack0xffffffffffffffe0;
  puVar19 = &stack0xfffffffffffffff0;
  uVar6 = 0x3eb9000;
  if ((bRam0000000003eb9928 & 1) == 0) {
    func_0x00f78a20(0x3d20a60,0);
    bRam0000000003eb9928 = 1;
  }
  if (uVar7 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    unaff_x19 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d79a38);
    uVar12 = 0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(unaff_x19,uVar9);
    uVar9 = func_0x00f78a24(0x3d53a40);
    unaff_x30 = &System_Convert__ToBase64String;
    auVar21 = func_0x00f78ac0(unaff_x19,uVar9);
  }
  else {
    if (((*(ushort *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = (ulong)*(uint *)(uVar7 + 0x18);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar7;
    uVar14 = 0;
    puVar2 = (undefined1 *)register0x00000008;
    uVar6 = unaff_x20;
    puVar19 = unaff_x29;
  }
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = uVar6;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar19;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  uVar7 = uVar12;
  uVar8 = uVar14;
  if ((bRam0000000003eb992a & 1) == 0) {
    func_0x00f78a20(0x3d20a60);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb992a = 1;
  }
  iVar13 = (int)uVar8;
  if (auVar21._0_8_ == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar6 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d79a38);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar6,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d53a48);
    func_0x00f78ac0(uVar6,uVar9);
code_r0x02a49370:
    uVar6 = func_0x00f78a24(0x3d6de28);
    uVar14 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar6,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar12 = func_0x00f78aec();
    uVar6 = 0x3d7a280;
code_r0x02a49480:
    uVar6 = func_0x00f78a24(uVar6);
    iVar13 = 0;
    uVar7 = uVar14;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar12,uVar6);
  }
  else {
    if ((int)uVar12 < 0) goto code_r0x02a49370;
    if (auVar21._8_4_ < 0) {
      uVar6 = 0x3d75fa8;
code_r0x02a49454:
      uVar6 = func_0x00f78a24(uVar6);
      uVar14 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar6,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar12 = func_0x00f78aec();
      uVar6 = 0x3d7ac18;
      goto code_r0x02a49480;
    }
    uVar17 = (uint)uVar14;
    if (uVar17 < 2) {
      iVar4 = *(int *)(auVar21._0_8_ + 0x18);
      if (auVar21._8_4_ <= iVar4 - (int)uVar12) {
        if (iVar4 == 0) {
          return **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        }
        unaff_x25 = 0x3d20a60;
        if (((*(ushort *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar23[8] = uVar17 == 1;
        auVar23._0_8_ = uVar12;
        auVar23._9_3_ = 0;
        puVar20 = &UNK_02a49288;
        goto code_r0x02a494b0;
      }
      uVar6 = 0x3d70ad0;
      goto code_r0x02a49454;
    }
    uVar6 = func_0x00f78a24(0x3d1f218);
    uVar6 = func_0x00f78a34(uVar6,1);
    *(uint *)(puVar2 + -0x54) = uVar17;
    uVar9 = func_0x00f78a24(0x3d22910);
    uVar9 = func_0x00f78ae0(uVar9,puVar2 + -0x54);
    func_0x00055e5c(uVar6);
    func_0x0003dd20(uVar6,uVar9);
    func_0x0005b9c0(uVar6,0,uVar9);
    uVar9 = func_0x00f78a24(0x3d6dca0);
    uVar14 = /*System.Environment$$GetResourceString*/ func_0x02ac7ffc(uVar9,uVar6,0);
    func_0x00f78a24(0x3d1fce8);
    uVar12 = func_0x00f78aec();
    uVar7 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar12,uVar14);
  }
  uVar6 = func_0x00f78a24(0x3d53a48);
  puVar20 = &System_Convert__ToBase64_CalculateAndValidateOutputLength;
  auVar23 = func_0x00f78ac0(uVar12,uVar6);
code_r0x02a494b0:
  iVar4 = auVar23._0_4_ / 3;
  uVar8 = (ulong)(auVar23._0_4_ != iVar4 * 3) * 4 + (long)iVar4 * 4;
  if (uVar8 == 0) {
    return 0;
  }
  if (auVar23._8_4_ != 0) {
    uVar8 = uVar8 + ((long)uVar8 / 0x4c - (ulong)((long)uVar8 % 0x4c == 0)) * 2;
  }
  if (0x7fffffff < (long)uVar8) {
    *(ulong *)(puVar2 + -0x80) = uVar12;
    *(ulong *)(puVar2 + -0x78) = uVar14;
    *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x68) = puVar20;
    func_0x00f78a24(0x3d23ae8);
    uVar6 = func_0x00f78aec();
    /*System.OutOfMemoryException$$.ctor*/ func_0x02965294(uVar6,0);
    uVar9 = func_0x00f78a24(0x3d53a50);
    auVar22 = func_0x00f78ac0(uVar6,uVar9);
    lVar11 = auVar22._8_8_;
    lVar10 = auVar22._0_8_;
    *(undefined8 *)(puVar2 + -0xd0) = unaff_x26;
    *(undefined8 *)(puVar2 + -200) = unaff_x25;
    *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
    *(undefined8 *)(puVar2 + -0xb8) = 0x3eb9000;
    *(undefined1 (*) [16])(puVar2 + -0xb0) = auVar21;
    *(ulong *)(puVar2 + -0xa0) = uVar12;
    *(undefined8 *)(puVar2 + -0x98) = uVar6;
    *(undefined1 **)(puVar2 + -0x90) = puVar2 + -0x70;
    *(undefined **)(puVar2 + -0x88) = &System_Convert__ConvertToBase64Array;
    if ((bRam0000000003eb992d & 1) == 0) {
      func_0x00f78a20(0x3d20a60);
      bRam0000000003eb992d = 1;
    }
    iVar4 = (iVar13 / 3) * 3;
    if (((*(byte *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = iVar4 + (int)uVar7;
    lVar15 = *(long *)(*(long *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0xb8) + 0x10);
    if (lVar15 != 0) {
      if (*(int *)(lVar15 + 0x18) == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = lVar15 + 0x20;
      }
    }
    if ((int)uVar7 < iVar1) {
      uVar14 = 0;
      iVar16 = 0;
      do {
        iVar3 = (int)uVar14;
        if (param_5 != 0) {
          if (iVar16 == 0x4c) {
            iVar16 = 0;
            iVar18 = iVar3 + 1;
            *(undefined2 *)(lVar10 + (long)iVar3 * 2) = 0xd;
            iVar3 = iVar3 + 2;
            *(undefined2 *)(lVar10 + (long)iVar18 * 2) = 10;
          }
          iVar16 = iVar16 + 4;
        }
        iVar18 = (int)uVar7;
        *(undefined2 *)(lVar10 + (long)iVar3 * 2) =
             *(undefined2 *)(lVar15 + ((ulong)(*(byte *)(lVar11 + iVar18) >> 1) & 0x7e));
        *(undefined2 *)(lVar10 + (long)(iVar3 + 1) * 2) =
             *(undefined2 *)
              (lVar15 + (ulong)((uint)(*(byte *)(lVar11 + (iVar18 + 1)) >> 4) |
                               (*(byte *)(lVar11 + iVar18) & 3) << 4) * 2);
        *(undefined2 *)(lVar10 + (long)(iVar3 + 2) * 2) =
             *(undefined2 *)
              (lVar15 + (ulong)((uint)(*(byte *)(lVar11 + (iVar18 + 2)) >> 6) |
                               (*(byte *)(lVar11 + (iVar18 + 1)) & 0xf) << 2) * 2);
        *(undefined2 *)(lVar10 + (long)(iVar3 + 3) * 2) =
             *(undefined2 *)(lVar15 + ((ulong)*(byte *)(lVar11 + (iVar18 + 2)) & 0x3f) * 2);
        uVar14 = (ulong)(iVar3 + 4U);
        uVar7 = (ulong)(iVar18 + 3U);
      } while ((int)(iVar18 + 3U) < iVar1);
      if (((iVar13 != iVar4) && (param_5 != 0)) && (iVar16 == 0x4c)) {
        *(undefined2 *)(lVar10 + (long)(int)(iVar3 + 4U) * 2) = 0xd;
        uVar14 = (ulong)(iVar3 + 6);
        *(undefined2 *)(lVar10 + (long)(iVar3 + 5) * 2) = 10;
      }
    }
    else {
      uVar14 = 0;
    }
    iVar4 = (int)uVar14;
    if (iVar13 % 3 == 1) {
      *(undefined2 *)(lVar10 + (long)iVar4 * 2) =
           *(undefined2 *)(lVar15 + ((ulong)(*(byte *)(lVar11 + iVar1) >> 1) & 0x7e));
      *(undefined2 *)(lVar10 + (long)(iVar4 + 1) * 2) =
           *(undefined2 *)(lVar15 + ((ulong)*(byte *)(lVar11 + iVar1) & 3) * 0x20);
      *(undefined2 *)(lVar10 + (long)(iVar4 + 2) * 2) = *(undefined2 *)(lVar15 + 0x80);
    }
    else {
      if (iVar13 % 3 != 2) {
        return uVar14;
      }
      *(undefined2 *)(lVar10 + (long)iVar4 * 2) =
           *(undefined2 *)(lVar15 + ((ulong)(*(byte *)(lVar11 + iVar1) >> 1) & 0x7e));
      *(undefined2 *)(lVar10 + (long)(iVar4 + 1) * 2) =
           *(undefined2 *)
            (lVar15 + (ulong)((uint)(*(byte *)(lVar11 + (iVar1 + 1)) >> 4) |
                             (*(byte *)(lVar11 + iVar1) & 3) << 4) * 2);
      *(undefined2 *)(lVar10 + (long)(iVar4 + 2) * 2) =
           *(undefined2 *)(lVar15 + ((ulong)*(byte *)(lVar11 + (iVar1 + 1)) & 0xf) * 8);
    }
    *(undefined2 *)(lVar10 + (long)(iVar4 + 3) * 2) = *(undefined2 *)(lVar15 + 0x80);
    return (ulong)(iVar4 + 4);
  }
  return uVar8;
}



