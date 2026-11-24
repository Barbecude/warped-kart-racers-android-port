// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkSessionTime

// ============================================================
// RVA: 0x165e314 | Core.Networking.NetworkSessionTime.op_GreaterThanOrEqual
// ============================================================

ulong Core_Networking_NetworkSessionTime__op_GreaterThanOrEqual(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb5856 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb5856 = 1;
  }
  uStack_58 = *(undefined8 *)(param_1 + 2);
  uStack_60 = *(undefined8 *)param_1;
  uStack_50 = *(undefined8 *)(param_1 + 4);
  uStack_78 = *(undefined8 *)(param_2 + 2);
  uStack_80 = *(undefined8 *)param_2;
  uStack_70 = *(undefined8 *)(param_2 + 4);
  if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_90 = uStack_50;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_b0 = uStack_70;
  uVar5 = /*Core.Networking.NetworkSessionTime$$IsValidComparison*/ func_0x01660670(&uStack_a0,&uStack_c0);
  if ((int)uVar5 != 0) {
    uVar1 = *param_1;
    uVar2 = param_1[2];
    if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = *param_1;
    uVar4 = *param_2;
    if ((int)uVar1 < (int)uVar2) {
      if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = (ulong)(uVar4 <= uVar3);
    }
    else {
      uVar5 = (ulong)((int)uVar4 <= (int)uVar3);
    }
  }
  return uVar5;
}



// ============================================================
// RVA: 0x165e480 | Core.Networking.NetworkSessionTime.Delta
// ============================================================

int Core_Networking_NetworkSessionTime__Delta(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1 - *param_2;
  if ((bRam0000000003ebfdd0 & 1) == 0) {
    func_0x00f78a20(0x3d232c0,0);
    bRam0000000003ebfdd0 = 1;
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = -iVar2;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// ============================================================
// RVA: 0x165e494 | Core.Networking.NetworkSessionTime..ctor
// ============================================================

void Core_Networking_NetworkSessionTime___ctor
               (undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_4;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = param_3;
  *(undefined8 *)(param_1 + 4) = param_2;
  return;
}



// ============================================================
// RVA: 0x165e4ac | Core.Networking.NetworkSessionTime..ctor
// ============================================================

void Core_Networking_NetworkSessionTime___ctor(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 4) = param_2;
  return;
}



// ============================================================
// RVA: 0x165f11c | Core.Networking.NetworkSessionTime.op_Addition
// ============================================================

void Core_Networking_NetworkSessionTime__op_Addition(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb5853 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb5853 = 1;
  }
  if ((char)param_2[1] == '\0') {
    uVar3 = *(undefined8 *)(param_2 + 4);
    if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 4);
    iVar1 = param_2[2];
    iVar2 = *param_2;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = iVar2 + param_3;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[2] = iVar1;
  }
  *(undefined8 *)(param_1 + 4) = uVar3;
  return;
}



// ============================================================
// RVA: 0x165f1c4 | Core.Networking.NetworkSessionTime.op_Subtraction
// ============================================================

void Core_Networking_NetworkSessionTime__op_Subtraction(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb5852 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb5852 = 1;
  }
  if ((char)param_2[1] == '\0') {
    uVar3 = *(undefined8 *)(param_2 + 4);
    if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 4);
    iVar1 = param_2[2];
    iVar2 = *param_2;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = iVar2 - param_3;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[2] = iVar1;
  }
  *(undefined8 *)(param_1 + 4) = uVar3;
  return;
}



// ============================================================
// RVA: 0x1660544 | Core.Networking.NetworkSessionTime.get_ValueUnsigned
// ============================================================

undefined4 Core_Networking_NetworkSessionTime__get_ValueUnsigned(undefined4 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x166054c | Core.Networking.NetworkSessionTime.CreateInvalid
// ============================================================

void Core_Networking_NetworkSessionTime__CreateInvalid(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  return;
}



// ============================================================
// RVA: 0x1660558 | Core.Networking.NetworkSessionTime.op_Subtraction
// ============================================================

void Core_Networking_NetworkSessionTime__op_Subtraction(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb5854 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb5854 = 1;
  }
  uStack_58 = *(undefined8 *)(param_2 + 2);
  uStack_60 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)(param_2 + 4);
  uStack_78 = *(undefined8 *)(param_3 + 2);
  uStack_80 = *(undefined8 *)param_3;
  uStack_70 = *(undefined8 *)(param_3 + 4);
  if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_90 = uStack_50;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_b0 = uStack_70;
  uVar4 = /*Core.Networking.NetworkSessionTime$$IsValidComparison*/ func_0x01660670(&uStack_a0,&uStack_c0);
  uVar5 = *(undefined8 *)(param_2 + 4);
  if ((uVar4 & 1) == 0) {
    if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    iVar1 = param_2[2];
    iVar2 = *param_2;
    iVar3 = *param_3;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = iVar2 - iVar3;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[2] = iVar1;
  }
  *(undefined8 *)(param_1 + 4) = uVar5;
  return;
}



// ============================================================
// RVA: 0x1660670 | Core.Networking.NetworkSessionTime.IsValidComparison
// ============================================================

ulong Core_Networking_NetworkSessionTime__IsValidComparison(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  int *extraout_x8;
  long lVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  if ((bRam0000000003eb585b & 1) == 0) {
    func_0x00f78a20(0x3d20260);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d237b8);
    func_0x00f78a20(0x3d1f218);
    func_0x00f78a20(0x3d6ac78);
    func_0x00f78a20(0x3d6ac70);
    bRam0000000003eb585b = 1;
  }
  if ((*(char *)(param_1 + 4) == '\0') || (*(char *)(param_2 + 4) == '\0')) {
    uStack_41 = *(char *)(param_1 + 4) != '\0';
    uVar7 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&uStack_41);
    uStack_42 = *(char *)(param_2 + 4) != '\0';
    uVar4 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&uStack_42);
    /*System.String$$Format*/ func_0x029bcac4(/*STR('Comparing invalid time is not allowed. A_Valid: {0} B_Valid: {1}')*/ uRam0000000003d6ac70,uVar7,uVar4,0);
    goto code_r0x0166089c;
  }
  iVar3 = Core_Networking_NetworkSessionId__op_Equality
                    (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
  if ((iVar3 != 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) {
    return 1;
  }
  plVar5 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,4);
  if (plVar5 == (long *)0x0) goto code_r0x016608e8;
  lVar11 = *(long *)(param_1 + 0x10);
  if ((lVar11 != 0) && (lVar6 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)
     ) goto code_r0x016608dc;
  uVar10 = plVar5[3];
  if ((int)uVar10 == 0) {
code_r0x016608d4:
    uVar7 = func_0x00f78b24();
  }
  else {
    plVar5[4] = lVar11;
    lVar11 = *(long *)(param_2 + 0x10);
    if (lVar11 != 0) {
      lVar6 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto code_r0x016608dc;
      uVar10 = plVar5[3];
    }
    if ((uVar10 & 0xfffffffe) == 0) goto code_r0x016608d4;
    plVar5[5] = lVar11;
    uStack_48 = *(undefined4 *)(param_1 + 8);
    lVar11 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_48);
    if ((lVar11 == 0) ||
       (lVar6 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar6 != 0)) {
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar11;
        uStack_4c = *(undefined4 *)(param_2 + 8);
        lVar11 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_4c);
        if ((lVar11 != 0) &&
           (lVar6 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto code_r0x016608dc;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
          plVar5[7] = lVar11;
          /*System.String$$Format*/ func_0x029cf564(/*STR('Comparing time from 2 different sessions is not allowed. Sessions: {0} {1} Epoch: {2} {3}')*/ uRam0000000003d6ac78,plVar5,0);
code_r0x0166089c:
          if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ uRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ uRam0000000003d237b8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*Core.Networking.NetworkSessionTime$$LogError*/ func_0x01660ed0();
          return 0;
        }
      }
      goto code_r0x016608d4;
    }
code_r0x016608dc:
    uVar7 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar7,0);
code_r0x016608e8:
  auVar12 = func_0x00f78af4();
  piVar9 = auVar12._8_8_;
  piVar8 = auVar12._0_8_;
  if ((bRam0000000003eb5855 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb5855 = 1;
  }
  uStack_a8 = *(undefined8 *)(piVar8 + 2);
  uStack_b0 = *(undefined8 *)piVar8;
  uStack_a0 = *(undefined8 *)(piVar8 + 4);
  uStack_c8 = *(undefined8 *)(piVar9 + 2);
  uStack_d0 = *(undefined8 *)piVar9;
  uStack_c0 = *(undefined8 *)(piVar9 + 4);
  if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ uRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ uRam0000000003d237b8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_e8 = uStack_a8;
  uStack_f0 = uStack_b0;
  uStack_e0 = uStack_a0;
  uStack_108 = uStack_c8;
  uStack_110 = uStack_d0;
  uStack_100 = uStack_c0;
  uVar10 = Core_Networking_NetworkSessionTime__IsValidComparison(&uStack_f0,&uStack_110);
  uVar7 = *(undefined8 *)(piVar8 + 4);
  if ((uVar10 & 1) == 0) {
    uVar10 = /*Core.Networking.NetworkSessionTime_TypeInfo*/ uRam0000000003d237b8;
    if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ uRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ uRam0000000003d237b8 + 0xe0) == 0)) {
      uVar10 = func_0x00f78ad0();
    }
    extraout_x8[0] = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    extraout_x8[3] = 0;
  }
  else {
    iVar3 = piVar8[2];
    iVar1 = *piVar8;
    iVar2 = *piVar9;
    extraout_x8[0] = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    extraout_x8[3] = 0;
    *extraout_x8 = iVar2 + iVar1;
    *(undefined1 *)(extraout_x8 + 1) = 1;
    extraout_x8[2] = iVar3;
  }
  *(undefined8 *)(extraout_x8 + 4) = uVar7;
  return uVar10;
}



// ============================================================
// RVA: 0x16608ec | Core.Networking.NetworkSessionTime.op_Addition
// ============================================================

void Core_Networking_NetworkSessionTime__op_Addition(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb5855 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb5855 = 1;
  }
  uStack_58 = *(undefined8 *)(param_2 + 2);
  uStack_60 = *(undefined8 *)param_2;
  uStack_50 = *(undefined8 *)(param_2 + 4);
  uStack_78 = *(undefined8 *)(param_3 + 2);
  uStack_80 = *(undefined8 *)param_3;
  uStack_70 = *(undefined8 *)(param_3 + 4);
  if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_90 = uStack_50;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_b0 = uStack_70;
  uVar4 = Core_Networking_NetworkSessionTime__IsValidComparison(&uStack_a0,&uStack_c0);
  uVar5 = *(undefined8 *)(param_2 + 4);
  if ((uVar4 & 1) == 0) {
    if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    iVar1 = param_2[2];
    iVar2 = *param_2;
    iVar3 = *param_3;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = iVar3 + iVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[2] = iVar1;
  }
  *(undefined8 *)(param_1 + 4) = uVar5;
  return;
}



// ============================================================
// RVA: 0x1660a04 | Core.Networking.NetworkSessionTime.HasTimeWrapped
// ============================================================

bool Core_Networking_NetworkSessionTime__HasTimeWrapped(int *param_1)

{
  return *param_1 < param_1[2];
}



// ============================================================
// RVA: 0x1660a18 | Core.Networking.NetworkSessionTime.ToUnsigned
// ============================================================

void Core_Networking_NetworkSessionTime__ToUnsigned
               (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_3 = *param_1;
  *param_4 = *param_2;
  return;
}



// ============================================================
// RVA: 0x1660a2c | Core.Networking.NetworkSessionTime.op_LessThanOrEqual
// ============================================================

ulong Core_Networking_NetworkSessionTime__op_LessThanOrEqual(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb5857 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb5857 = 1;
  }
  uStack_58 = *(undefined8 *)(param_1 + 2);
  uStack_60 = *(undefined8 *)param_1;
  uStack_50 = *(undefined8 *)(param_1 + 4);
  uStack_78 = *(undefined8 *)(param_2 + 2);
  uStack_80 = *(undefined8 *)param_2;
  uStack_70 = *(undefined8 *)(param_2 + 4);
  if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_90 = uStack_50;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_b0 = uStack_70;
  uVar5 = Core_Networking_NetworkSessionTime__IsValidComparison(&uStack_a0,&uStack_c0);
  if ((int)uVar5 != 0) {
    uVar1 = *param_1;
    uVar2 = param_1[2];
    if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = *param_1;
    uVar4 = *param_2;
    if ((int)uVar1 < (int)uVar2) {
      if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = (ulong)(uVar3 <= uVar4);
    }
    else {
      uVar5 = (ulong)((int)uVar3 <= (int)uVar4);
    }
  }
  return uVar5;
}



// ============================================================
// RVA: 0x1660b50 | Core.Networking.NetworkSessionTime.op_GreaterThan
// ============================================================

ulong Core_Networking_NetworkSessionTime__op_GreaterThan(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb5858 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb5858 = 1;
  }
  uStack_58 = *(undefined8 *)(param_1 + 2);
  uStack_60 = *(undefined8 *)param_1;
  uStack_50 = *(undefined8 *)(param_1 + 4);
  uStack_78 = *(undefined8 *)(param_2 + 2);
  uStack_80 = *(undefined8 *)param_2;
  uStack_70 = *(undefined8 *)(param_2 + 4);
  if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_90 = uStack_50;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_b0 = uStack_70;
  uVar5 = Core_Networking_NetworkSessionTime__IsValidComparison(&uStack_a0,&uStack_c0);
  if ((int)uVar5 != 0) {
    uVar1 = *param_1;
    uVar2 = param_1[2];
    if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = *param_1;
    uVar4 = *param_2;
    if ((int)uVar1 < (int)uVar2) {
      if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = (ulong)(uVar4 < uVar3);
    }
    else {
      uVar5 = (ulong)((int)uVar4 < (int)uVar3);
    }
  }
  return uVar5;
}



// ============================================================
// RVA: 0x1660c74 | Core.Networking.NetworkSessionTime.op_LessThan
// ============================================================

ulong Core_Networking_NetworkSessionTime__op_LessThan(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb5859 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb5859 = 1;
  }
  uStack_58 = *(undefined8 *)(param_1 + 2);
  uStack_60 = *(undefined8 *)param_1;
  uStack_50 = *(undefined8 *)(param_1 + 4);
  uStack_78 = *(undefined8 *)(param_2 + 2);
  uStack_80 = *(undefined8 *)param_2;
  uStack_70 = *(undefined8 *)(param_2 + 4);
  if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_90 = uStack_50;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  uStack_b0 = uStack_70;
  uVar5 = Core_Networking_NetworkSessionTime__IsValidComparison(&uStack_a0,&uStack_c0);
  if ((int)uVar5 != 0) {
    uVar1 = *param_1;
    uVar2 = param_1[2];
    if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = *param_1;
    uVar4 = *param_2;
    if ((int)uVar1 < (int)uVar2) {
      if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = (ulong)(uVar3 < uVar4);
    }
    else {
      uVar5 = (ulong)((int)uVar3 < (int)uVar4);
    }
  }
  return uVar5;
}



// ============================================================
// RVA: 0x1660d98 | Core.Networking.NetworkSessionTime.ToString
// ============================================================

void Core_Networking_NetworkSessionTime__ToString(undefined4 *param_1)

{
  undefined4 uStack_14;
  
  uStack_14 = *param_1;
  /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_14,0);
  return;
}



// ============================================================
// RVA: 0x1660dc4 | Core.Networking.NetworkSessionTime.ToFormattedTimeString
// ============================================================

void Core_Networking_NetworkSessionTime__ToFormattedTimeString(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  if ((bRam0000000003eb585a & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d7ccb8);
    bRam0000000003eb585a = 1;
  }
  iStack_44 = (*param_1 - param_1[2]) / 60000;
  iVar1 = (*param_1 - param_1[2]) % 60000;
  uVar2 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_44);
  iStack_48 = iVar1 / 1000;
  uVar3 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_48);
  iStack_4c = iVar1 % 1000;
  uVar4 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_4c);
  /*System.String$$Format*/ func_0x029bdf30(/*STR('{0:D2}:{1:D2}.{2:D3}')*/ uRam0000000003d7ccb8,uVar2,uVar3,uVar4,0);
  return;
}



// ============================================================
// RVA: 0x1660ed0 | Core.Networking.NetworkSessionTime.LogError
// ============================================================

/* WARNING: Possible PIC construction at 0x00fdcff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00fdcfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00fdcff8) */
/* WARNING: Removing unreachable block (ram,0x00fdcfdc) */

void Core_Networking_NetworkSessionTime__LogError(void)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  long unaff_x19;
  int *unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 ******ppppppuStack_80;
  undefined8 ******appppppuStack_78 [2];
  char cStack_61;
  undefined8 ******appppppuStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  if ((bRam0000000003eb585c & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb585c = 1;
  }
  lVar16 = /*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8;
  if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) == 0) ||
     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) != 0)) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  if ((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) == 0) {
    return;
  }
  piVar2 = (int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0);
  while (*piVar2 == 1) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar10) {
      *piVar2 = 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') {
      DataMemoryBarrier(2,3);
      return;
    }
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(2,3);
  lVar13 = func_0x00ffda68();
  if (lVar13 == lRam0000000003f95130) {
    iRam0000000003f95138 = iRam0000000003f95138 + 1;
  }
  else {
    do {
      iVar18 = iRam0000000003f950e8;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(0x3f950e8,0x10);
      if (bVar10) {
        cVar9 = ExclusiveMonitorsStatus();
        iRam0000000003f950e8 = iRam0000000003f950e8 + -1;
      }
    } while (cVar9 != '\0');
    if (iVar18 < 1) {
      func_0x00ffd990(puRam0000000003f950f0);
    }
    iRam0000000003f95138 = 1;
    lRam0000000003f95130 = lVar13;
  }
  do {
    if (*piVar2 != 1) {
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      piVar3 = (int *)(lVar16 + 0xdc);
      goto code_r0x00fdcca0;
    }
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar10) {
      *piVar2 = 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  DataMemoryBarrier(2,3);
  iVar18 = iRam0000000003f95138 + -1;
  if ((0 < iRam0000000003f95138) && (iRam0000000003f95138 = iVar18, iVar18 == 0)) {
    lRam0000000003f95130 = 0;
    iRam0000000003f95138 = 0;
    if (iRam0000000003f950f8 != iRam0000000003f950e8) {
      iVar18 = iRam0000000003f950e8;
      iVar17 = 1;
      do {
        iVar11 = iRam0000000003f950e8;
        iVar15 = iRam0000000003f950f8 - iVar18;
        if (iVar18 + iVar17 <= iRam0000000003f950f8) {
          iVar15 = iVar17;
        }
        if (iRam0000000003f950e8 == iVar18) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(0x3f950e8,0x10);
          if (bVar10) {
            cVar9 = ExclusiveMonitorsStatus();
            iRam0000000003f950e8 = iVar15 + iVar18;
          }
          if (cVar9 == '\0') {
            if (-1 < iVar18) {
              lRam0000000003f95130 = 0;
              iRam0000000003f95138 = 0;
              return;
            }
            if (-iVar18 <= iVar15) {
              iVar15 = -iVar18;
            }
code_r0x00ffd9d0:
            puVar4 = puRam0000000003f950f0;
            iRam0000000003f95138 = 0;
            lRam0000000003f95130 = 0;
            *(int **)((long)register0x00000008 + -0x20) = unaff_x20;
            *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
            puVar6 = (uint *)(puRam0000000003f950f0 + 1);
            uVar19 = *(uint *)(puRam0000000003f950f0 + 1);
            do {
              while( true ) {
                uVar7 = uVar19 + iVar15;
                if (0x7ffffffe < uVar7) {
                  uVar7 = 0x7fffffff;
                }
                uVar8 = *puVar6;
                if (uVar8 == uVar19) break;
                ClearExclusiveLocal();
                uVar19 = uVar8;
              }
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(puVar6,0x10);
              if (bVar10) {
                *puVar6 = uVar7;
                cVar9 = ExclusiveMonitorsStatus();
              }
              uVar19 = uVar8;
            } while (cVar9 != '\0');
            iVar18 = uVar7 - uVar8;
            if (0 < iVar18) {
              do {
                _dispatch_semaphore_signal(*puVar4);
                iVar18 = iVar18 + -1;
              } while (iVar18 != 0);
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar18 = iVar11;
        iVar17 = iVar15;
      } while (iRam0000000003f950f8 != iVar11);
    }
  }
  return;
  while( true ) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar10) {
      *piVar3 = 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') break;
code_r0x00fdcca0:
    unaff_x19 = lVar16;
    unaff_x20 = piVar2;
    unaff_x29 = puVar1;
    if (*piVar3 != 1) {
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      puVar4 = (undefined8 *)(lVar16 + 0xe8);
      uVar14 = func_0x00f9eba4();
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar10) {
          *puVar4 = uVar14;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      iVar18 = iRam0000000003f95138 + -1;
      if ((0 < iRam0000000003f95138) && (iRam0000000003f95138 = iVar18, iVar18 == 0)) {
        lRam0000000003f95130 = 0;
        iRam0000000003f95138 = 0;
        if (iRam0000000003f950f8 == iRam0000000003f950e8) goto code_r0x00fdce18;
        iVar18 = iRam0000000003f950e8;
        iVar17 = 1;
        do {
          iVar11 = iRam0000000003f950e8;
          iVar15 = iRam0000000003f950f8 - iVar18;
          if (iVar18 + iVar17 <= iRam0000000003f950f8) {
            iVar15 = iVar17;
          }
          if (iRam0000000003f950e8 == iVar18) {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(0x3f950e8,0x10);
            if (bVar10) {
              cVar9 = ExclusiveMonitorsStatus();
              iRam0000000003f950e8 = iVar15 + iVar18;
            }
            if (cVar9 == '\0') {
              if (-1 < iVar18) break;
              if (-iVar18 <= iVar15) {
                iVar15 = -iVar18;
              }
              unaff_x30 = &UNK_00fdcfdc;
              register0x00000008 = (BADSPACEBASE *)&ppppppuStack_80;
              goto code_r0x00ffd9d0;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar18 = iVar11;
          iVar17 = iVar15;
        } while (iRam0000000003f950f8 != iVar11);
      }
code_r0x00fdce18:
      lStack_48 = 0;
      lVar13 = func_0x00fe34c8(lVar16);
      if (lVar13 != 0) {
        func_0x00fde898(lVar13,0,0,&lStack_48);
      }
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar10) {
          *puVar4 = 0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      if (lStack_48 == 0) {
        return;
      }
      uVar14 = func_0x00fe2fdc(lVar16);
      func_0x00fd8ee4(appppppuStack_78,uVar14,0);
      ppppppuStack_80 = appppppuStack_78[0];
      if (-1 < cStack_61) {
        ppppppuStack_80 = appppppuStack_78;
      }
      func_0x00fa87a0(appppppuStack_60,"The type initializer for \'%s\' threw an exception.");
      if (cStack_61 < '\0') {
        func_0x00523aec(appppppuStack_78[0]);
      }
      if (-1 < cStack_49) {
        appppppuStack_60[0] = appppppuStack_60;
      }
      uVar14 = func_0x00fc3770(appppppuStack_60[0],lStack_48);
      func_0x00fc2b20(uVar14,0);
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0xfdced8);
      (*pcVar12)();
    }
  }
  DataMemoryBarrier(2,3);
  iVar18 = iRam0000000003f95138 + -1;
  if ((0 < iRam0000000003f95138) && (iRam0000000003f95138 = iVar18, iVar18 == 0)) {
    lRam0000000003f95130 = 0;
    iRam0000000003f95138 = 0;
    if (iRam0000000003f950f8 != iRam0000000003f950e8) {
      iVar18 = iRam0000000003f950e8;
      iVar17 = 1;
      do {
        iVar11 = iRam0000000003f950e8;
        iVar15 = iRam0000000003f950f8 - iVar18;
        if (iVar18 + iVar17 <= iRam0000000003f950f8) {
          iVar15 = iVar17;
        }
        if (iRam0000000003f950e8 == iVar18) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(0x3f950e8,0x10);
          if (bVar10) {
            cVar9 = ExclusiveMonitorsStatus();
            iRam0000000003f950e8 = iVar15 + iVar18;
          }
          if (cVar9 == '\0') {
            if (iVar18 < 0) {
              if (-iVar18 <= iVar15) {
                iVar15 = -iVar18;
              }
              unaff_x30 = &UNK_00fdcff8;
              register0x00000008 = (BADSPACEBASE *)&ppppppuStack_80;
              goto code_r0x00ffd9d0;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar18 = iVar11;
        iVar17 = iVar15;
      } while (iRam0000000003f950f8 != iVar11);
    }
  }
  lVar13 = func_0x00f9eba4();
  plVar5 = (long *)(lVar16 + 0xe8);
  do {
    lVar16 = *plVar5;
    if (lVar16 != lVar13) {
      ClearExclusiveLocal();
      break;
    }
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar10) {
      *plVar5 = lVar13;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  DataMemoryBarrier(2,3);
  if (lVar16 == lVar13) {
    return;
  }
  do {
    iVar18 = *piVar2;
    if (iVar18 != 1) {
      ClearExclusiveLocal();
      break;
    }
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar10) {
      *piVar2 = 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (iVar18 != 0) {
      return;
    }
    func_0x00f9eba0(1,0);
    do {
      iVar18 = *piVar2;
      if (iVar18 != 1) {
        ClearExclusiveLocal();
        break;
      }
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar10) {
        *piVar2 = 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    DataMemoryBarrier(2,3);
  } while( true );
}



// ============================================================
// RVA: 0x1660f30 | Core.Networking.NetworkSessionTime..cctor
// ============================================================

void Core_Networking_NetworkSessionTime___cctor(void)

{
  return;
}



