// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.NetworkIdentifiers

// ============================================================
// RVA: 0x14a7420 | Atlas.Networking.NetworkIdentifiers.Init
// ============================================================

void Atlas_Networking_NetworkIdentifiers__Init(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4a59 & 1) == 0) {
    func_0x00f78a20(0x3d2fc08);
    func_0x00f78a20(0x3d1c498);
    func_0x00f78a20(0x3d3bf98);
    func_0x00f78a20(0x3d1de30);
    bRam0000000003eb4a59 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar1,0x67,uRam0000000003d3bf98);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, short>_TypeInfo*/ uRam0000000003d1c498);
  /*System.Collections.Generic.Dictionary<string, short>$$.ctor*/ func_0x01ecb174(uVar1,0x67,uRam0000000003d2fc08);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



// ============================================================
// RVA: 0x14a74e8 | Atlas.Networking.NetworkIdentifiers.DeInit
// ============================================================

void Atlas_Networking_NetworkIdentifiers__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// ============================================================
// RVA: 0x14a74f4 | Atlas.Networking.NetworkIdentifiers.AddIdentifier
// ============================================================

ulong Atlas_Networking_NetworkIdentifiers__AddIdentifier(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int extraout_w1;
  undefined8 *puVar7;
  uint extraout_w8;
  uint uVar8;
  long lVar9;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 unaff_x20;
  long lVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  if ((bRam0000000003eb4a5a & 1) == 0) {
    func_0x00f78a20(0x3d3bfa0);
    bRam0000000003eb4a5a = 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar2 == 0) {
    lVar9 = func_0x00f78af4();
    lStack_78 = *(long *)PTR_03a5d648;
    if ((bRam0000000003eb4a5b & 1) == 0) {
      func_0x00f78a20(0x3d2cf10);
      func_0x00f78a20(0x3d1b950);
      func_0x00f78a20(0x3d2fc18);
      func_0x00f78a20(0x3d3bff0);
      func_0x00f78a20(0x3d3c000);
      func_0x00f78a20(0x3d3c008);
      func_0x00f78a20(0x3d5da78);
      bRam0000000003eb4a5b = 1;
    }
    lVar10 = *(long *)(lVar9 + 0x10);
    uVar3 = func_0x00f78aec(/*System.Comparison<string>_TypeInfo*/ uRam0000000003d1b950);
    uVar5 = uRam0000000003d5da78;
    /*System.Comparison<TimeZoneInfo.AdjustmentRule>$$.ctor*/ func_0x01db3634(uVar3,0,uRam0000000003d5da78,uRam0000000003d2cf10);
    iVar1 = (int)uVar5;
    if (lVar10 != 0) {
      uVar2 = uRam0000000003d3bff0;
      uVar4 = /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$Sort*/ func_0x02428d14(lVar10,uVar3,uRam0000000003d3bff0);
      iVar1 = (int)uVar2;
      lVar10 = *(long *)(lVar9 + 0x10);
      if (lVar10 != 0) {
        uVar8 = *(uint *)(lVar10 + 0x18);
        if ((int)uVar8 < 1) goto code_r0x014a7704;
        uVar11 = 0;
        do {
          iVar1 = (int)uVar2;
          if (*(uint *)(lVar10 + 0x18) <= uVar11) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(lVar9 + 0x18) == 0) break;
          uVar5 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + uVar11 * 8 + 0x20);
          uVar2 = (ulong)(uint)(int)(short)uVar11;
          /*System.Collections.Generic.Dictionary<string, short>$$set_Item*/ func_0x01ecb64c(*(long *)(lVar9 + 0x18),uVar5,uVar2,uRam0000000003d2fc18);
          /*Unity.Collections.FixedString64Bytes$$op_Implicit*/ func_0x02fd8c8c(&uStack_b8,uVar5,0);
          uStack_f8 = uStack_b0;
          uStack_100 = uStack_b8;
          uStack_e8 = uStack_a0;
          uStack_f0 = uStack_a8;
          uStack_d8 = uStack_90;
          uStack_e0 = uStack_98;
          uStack_c8 = uStack_80;
          uStack_d0 = uStack_88;
          uVar4 = /*Core.Services.Client$$Hash*/ func_0x0166735c(&uStack_100,0);
          iVar1 = (int)uVar2;
          *(int *)(lVar9 + 0x20) = (int)uVar4 + *(int *)(lVar9 + 0x20) * 0x1f + 0x3fd1;
          if ((ulong)uVar8 - 1 == uVar11) goto code_r0x014a7704;
          lVar10 = *(long *)(lVar9 + 0x10);
          uVar11 = uVar11 + 1;
        } while (lVar10 != 0);
      }
    }
    uVar4 = func_0x00f78af4();
code_r0x014a7704:
    if (*(long *)PTR_03a5d648 == lStack_78) {
      return uVar4;
    }
    ___stack_chk_fail();
    return (ulong)(extraout_w1 * 0x1f + iVar1 + 0x3fd1);
  }
  lVar9 = *(long *)(uVar2 + 0x10);
  puVar7 = puRam0000000003d3bfa0;
  if (lVar9 == 0) {
code_r0x0242716c:
    param_2 = unaff_x20;
    uVar2 = unaff_x19;
    uVar4 = func_0x00f78af4();
    lVar9 = extraout_x9;
    uVar8 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar2 + 0x18) = uVar8 + 1;
  }
  else {
    uVar8 = *(uint *)(uVar2 + 0x18);
    uVar4 = uVar2;
    if (uVar8 != *(uint *)(lVar9 + 0x18)) goto code_r0x02427170;
    puVar7 = *(undefined8 **)(*(long *)(puRam0000000003d3bfa0[3] + 0xc0) + 0x60);
    uVar4 = (*(code *)*puVar7)(uVar2,uVar8 + 1);
    lVar9 = *(long *)(uVar2 + 0x10);
    uVar8 = *(uint *)(uVar2 + 0x18);
    *(uint *)(uVar2 + 0x18) = uVar8 + 1;
    unaff_x19 = uVar2;
    unaff_x20 = param_2;
    if (lVar9 == 0) goto code_r0x0242716c;
  }
  if (uVar8 < *(uint *)(lVar9 + 0x18)) {
    *(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20) = param_2;
    *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
    return uVar4;
  }
  uVar5 = func_0x00f78b24();
  auVar14 = func_0x00f78ac0(uVar5,0);
  lVar10 = auVar14._8_8_;
  lVar9 = auVar14._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))(lVar10,0x14);
  if (lVar9 != 0) {
    pcVar13 = (code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x28);
    lVar12 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    if (lVar10 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = func_0x00f78adc(lVar10,lVar12);
      if (lVar6 == 0) {
        func_0x00f78e5c(lVar10,lVar12);
        goto code_r0x0242734c;
      }
    }
    (*pcVar13)(lVar9,lVar6,*(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0x28));
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68))(lVar9);
    return (ulong)(iVar1 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*pcVar13)();
}



// ============================================================
// RVA: 0x14a7558 | Atlas.Networking.NetworkIdentifiers.FinishAddingAndGenerateKeys
// ============================================================

ulong Atlas_Networking_NetworkIdentifiers__FinishAddingAndGenerateKeys(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int extraout_w1;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb4a5b & 1) == 0) {
    func_0x00f78a20(0x3d2cf10);
    func_0x00f78a20(0x3d1b950);
    func_0x00f78a20(0x3d2fc18);
    func_0x00f78a20(0x3d3bff0);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d5da78);
    bRam0000000003eb4a5b = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  uVar2 = func_0x00f78aec(/*System.Comparison<string>_TypeInfo*/ uRam0000000003d1b950);
  uVar7 = uRam0000000003d5da78;
  /*System.Comparison<TimeZoneInfo.AdjustmentRule>$$.ctor*/ func_0x01db3634(uVar2,0,uRam0000000003d5da78,uRam0000000003d2cf10);
  iVar4 = (int)uVar7;
  if (lVar6 != 0) {
    uVar5 = uRam0000000003d3bff0;
    uVar3 = /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$Sort*/ func_0x02428d14(lVar6,uVar2,uRam0000000003d3bff0);
    iVar4 = (int)uVar5;
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if ((int)uVar1 < 1) goto LAB_014a7704;
      uVar8 = 0;
      do {
        iVar4 = (int)uVar5;
        if (*(uint *)(lVar6 + 0x18) <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(param_1 + 0x18) == 0) break;
        uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + uVar8 * 8 + 0x20);
        uVar5 = (ulong)(uint)(int)(short)uVar8;
        /*System.Collections.Generic.Dictionary<string, short>$$set_Item*/ func_0x01ecb64c(*(long *)(param_1 + 0x18),uVar7,uVar5,uRam0000000003d2fc18);
        /*Unity.Collections.FixedString64Bytes$$op_Implicit*/ func_0x02fd8c8c(&uStack_88,uVar7,0);
        uStack_c8 = uStack_80;
        uStack_d0 = uStack_88;
        uStack_b8 = uStack_70;
        uStack_c0 = uStack_78;
        uStack_a8 = uStack_60;
        uStack_b0 = uStack_68;
        uStack_98 = uStack_50;
        uStack_a0 = uStack_58;
        uVar3 = /*Core.Services.Client$$Hash*/ func_0x0166735c(&uStack_d0,0);
        iVar4 = (int)uVar5;
        *(int *)(param_1 + 0x20) = (int)uVar3 + *(int *)(param_1 + 0x20) * 0x1f + 0x3fd1;
        if ((ulong)uVar1 - 1 == uVar8) goto LAB_014a7704;
        lVar6 = *(long *)(param_1 + 0x10);
        uVar8 = uVar8 + 1;
      } while (lVar6 != 0);
    }
  }
  uVar3 = func_0x00f78af4();
LAB_014a7704:
  if (*(long *)PTR_03a5d648 == lStack_48) {
    return uVar3;
  }
  ___stack_chk_fail();
  return (ulong)(extraout_w1 * 0x1f + iVar4 + 0x3fd1);
}



// ============================================================
// RVA: 0x14a7738 | Atlas.Networking.NetworkIdentifiers.CombineHashes
// ============================================================

int Atlas_Networking_NetworkIdentifiers__CombineHashes(undefined8 param_1,int param_2,int param_3)

{
  return param_2 * 0x1f + param_3 + 0x3fd1;
}



// ============================================================
// RVA: 0x14a7750 | Atlas.Networking.NetworkIdentifiers.TryGetIdentifierFromKey
// ============================================================

ulong Atlas_Networking_NetworkIdentifiers__TryGetIdentifierFromKey
                (long param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  puVar2 = param_3;
  if ((bRam0000000003eb4a5c & 1) == 0) {
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    bRam0000000003eb4a5c = 1;
  }
  uVar4 = (uint)param_2;
  if (-1 < (int)uVar4) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb4a5d & 1) == 0) {
        func_0x00f78a20(0x3d2fc10);
        bRam0000000003eb4a5d = 1;
      }
      lVar5 = *(long *)(auVar6._0_8_ + 0x18);
      if (lVar5 != 0) {
        uVar1 = /*System.Collections.Generic.Dictionary<string, short>$$TryGetValue*/ func_0x01ecd290(lVar5,auVar6._8_8_,puVar2,uRam0000000003d2fc10);
        if ((uVar1 & 1) == 0) {
          *(undefined2 *)puVar2 = 0;
        }
        return uVar1;
      }
      uVar1 = func_0x00f78af4();
      return uVar1;
    }
    if ((int)uVar4 < (int)*(uint *)(lVar5 + 0x18)) {
      if (*(uint *)(lVar5 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + (param_2 & 0xffff) * 8 + 0x20);
      uVar1 = 1;
      goto LAB_014a77d8;
    }
  }
  uVar3 = 0;
  uVar1 = 0;
LAB_014a77d8:
  *param_3 = uVar3;
  return uVar1;
}



// ============================================================
// RVA: 0x14a77f0 | Atlas.Networking.NetworkIdentifiers.TryGetKeyFromIdentifier
// ============================================================

void Atlas_Networking_NetworkIdentifiers__TryGetKeyFromIdentifier
               (long param_1,undefined8 param_2,undefined2 *param_3)

{
  ulong uVar1;
  
  if ((bRam0000000003eb4a5d & 1) == 0) {
    func_0x00f78a20(0x3d2fc10);
    bRam0000000003eb4a5d = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = /*System.Collections.Generic.Dictionary<string, short>$$TryGetValue*/ func_0x01ecd290(*(long *)(param_1 + 0x18),param_2,param_3,uRam0000000003d2fc10);
    if ((uVar1 & 1) == 0) {
      *param_3 = 0;
    }
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14a7868 | Atlas.Networking.NetworkIdentifiers..ctor
// ============================================================

void Atlas_Networking_NetworkIdentifiers___ctor(void)

{
  return;
}



