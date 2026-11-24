// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.CarBase

// ============================================================
// RVA: 0x16531b8 | Core.Networking.CarBase.__assign
// ============================================================

undefined1  [16]
Core_Networking_CarBase____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x165329c | Core.Networking.CarBase.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_CarBase__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x16532a4 | Core.Networking.CarBase.__init
// ============================================================

void Core_Networking_CarBase____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x16532b0 | Core.Networking.CarBase.get_BattleScore
// ============================================================

ulong Core_Networking_CarBase__get_BattleScore(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 == 0) {
    piVar4 = (int *)func_0x00f78af4();
    if (*(long *)(piVar4 + 2) != 0) {
      uVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar4 + 2),*piVar4 + 4,4);
      return uVar8;
    }
    auVar10 = func_0x00f78af4();
    lVar3 = auVar10._0_8_;
    if ((bRam0000000003eb57df & 1) == 0) {
      func_0x00f78a20(0x3d3eff0);
      bRam0000000003eb57df = 1;
    }
    if (lVar3 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar3,4,8,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar3,param_3,0);
      /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar3,3,0);
      /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(lVar3,auVar10._8_8_,0);
      if ((*(long *)(lVar3 + 0x18) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar3 + 0x18) + 0x10), lVar9 != 0)) {
        return (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar3 + 0x10));
      }
      lVar3 = func_0x00f78af4(lVar3,0);
      return (ulong)*(byte *)(lVar3 + 0x48);
    }
    lVar3 = func_0x00f78af4();
    return *(ulong *)(lVar3 + 8);
  }
  uVar1 = *param_1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar3,uVar1,1);
  if ((*(long *)(lVar3 + 0x10) == 0) ||
     (lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10), lVar3 == 0)) {
    func_0x00f78af4();
  }
  else if (uVar1 < *(uint *)(lVar3 + 0x18)) {
    return (long)*(char *)(lVar3 + (int)uVar1 + 0x20);
  }
  uVar5 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar5,0);
  uVar5 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar10._0_8_,auVar10._8_8_,1);
  lVar3 = *(long *)(auVar10._0_8_ + 0x10);
  if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) {
    func_0x00f78af4();
  }
  else if (auVar10._8_4_ < *(uint *)(lVar3 + 0x18)) {
    return (ulong)*(byte *)(lVar3 + (int)auVar10._8_4_ + 0x20);
  }
  uVar6 = func_0x00f78b24();
  auVar10 = func_0x00f78ac0(uVar6,0);
  plVar7 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar3 = *(long *)(auVar10._0_8_ + 0x10);
  if ((lVar3 != 0) && (plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)(*plVar7 + 0x348))
                      (plVar7,*(undefined8 *)(lVar3 + 0x10),auVar10._8_8_,uVar5,
                       *(undefined8 *)(*plVar7 + 0x350));
    return uVar8;
  }
  auVar10 = func_0x00f78af4();
  sVar2 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar10._0_8_,auVar10._8_8_,2);
  return (ulong)(uint)(int)sVar2;
}



// ============================================================
// RVA: 0x16532d8 | Core.Networking.CarBase.get_LastHitTime
// ============================================================

ulong Core_Networking_CarBase__get_LastHitTime(int *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (*(long *)(param_1 + 2) != 0) {
    uVar1 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + 4,4);
    return uVar1;
  }
  auVar4 = func_0x00f78af4();
  lVar2 = auVar4._0_8_;
  if ((bRam0000000003eb57df & 1) == 0) {
    func_0x00f78a20(0x3d3eff0);
    bRam0000000003eb57df = 1;
  }
  if (lVar2 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar2,4,8,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar2,param_3,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(lVar2,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(lVar2,auVar4._8_8_,0);
    if ((*(long *)(lVar2 + 0x18) != 0) &&
       (lVar3 = *(long *)(*(long *)(lVar2 + 0x18) + 0x10), lVar3 != 0)) {
      return (ulong)(uint)(*(int *)(lVar3 + 0x18) - *(int *)(lVar2 + 0x10));
    }
    lVar2 = func_0x00f78af4(lVar2,0);
    return (ulong)*(byte *)(lVar2 + 0x48);
  }
  lVar2 = func_0x00f78af4();
  return *(ulong *)(lVar2 + 8);
}



// ============================================================
// RVA: 0x1653304 | Core.Networking.CarBase.CreateCarBase
// ============================================================

ulong Core_Networking_CarBase__CreateCarBase(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((bRam0000000003eb57df & 1) == 0) {
    func_0x00f78a20(0x3d3eff0);
    bRam0000000003eb57df = 1;
  }
  if (param_1 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,8,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,param_3,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_1,3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,param_2,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar1 != 0)) {
      return (ulong)(uint)(*(int *)(lVar1 + 0x18) - *(int *)(param_1 + 0x10));
    }
    lVar1 = func_0x00f78af4(param_1,0);
    return (ulong)*(byte *)(lVar1 + 0x48);
  }
  lVar1 = func_0x00f78af4();
  return *(ulong *)(lVar1 + 8);
}



