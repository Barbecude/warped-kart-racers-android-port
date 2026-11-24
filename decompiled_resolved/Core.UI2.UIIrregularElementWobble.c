// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UIIrregularElementWobble

// ============================================================
// RVA: 0x2f86560 | Core.UI2.UIIrregularElementWobble.OnEnable
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8659c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f865cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f865fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8662c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8665c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f866fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8674c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8679c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f867ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8683c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8688c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f868dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8692c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f868e0) */
/* WARNING: Removing unreachable block (ram,0x02f868e4) */
/* WARNING: Removing unreachable block (ram,0x02f86914) */
/* WARNING: Removing unreachable block (ram,0x02f86920) */
/* WARNING: Removing unreachable block (ram,0x02f86890) */
/* WARNING: Removing unreachable block (ram,0x02f86894) */
/* WARNING: Removing unreachable block (ram,0x02f868c4) */
/* WARNING: Removing unreachable block (ram,0x02f868d0) */
/* WARNING: Removing unreachable block (ram,0x02f86840) */
/* WARNING: Removing unreachable block (ram,0x02f86844) */
/* WARNING: Removing unreachable block (ram,0x02f86874) */
/* WARNING: Removing unreachable block (ram,0x02f86880) */
/* WARNING: Removing unreachable block (ram,0x02f867f0) */
/* WARNING: Removing unreachable block (ram,0x02f867f4) */
/* WARNING: Removing unreachable block (ram,0x02f86824) */
/* WARNING: Removing unreachable block (ram,0x02f86830) */
/* WARNING: Removing unreachable block (ram,0x02f867a0) */
/* WARNING: Removing unreachable block (ram,0x02f867a4) */
/* WARNING: Removing unreachable block (ram,0x02f867d4) */
/* WARNING: Removing unreachable block (ram,0x02f867e0) */
/* WARNING: Removing unreachable block (ram,0x02f86750) */
/* WARNING: Removing unreachable block (ram,0x02f86754) */
/* WARNING: Removing unreachable block (ram,0x02f86784) */
/* WARNING: Removing unreachable block (ram,0x02f86790) */
/* WARNING: Removing unreachable block (ram,0x02f86700) */
/* WARNING: Removing unreachable block (ram,0x02f86704) */
/* WARNING: Removing unreachable block (ram,0x02f86734) */
/* WARNING: Removing unreachable block (ram,0x02f86740) */
/* WARNING: Removing unreachable block (ram,0x02f86660) */
/* WARNING: Removing unreachable block (ram,0x02f86630) */
/* WARNING: Removing unreachable block (ram,0x02f86638) */
/* WARNING: Removing unreachable block (ram,0x02f86650) */
/* WARNING: Removing unreachable block (ram,0x02f86600) */
/* WARNING: Removing unreachable block (ram,0x02f86608) */
/* WARNING: Removing unreachable block (ram,0x02f86620) */
/* WARNING: Removing unreachable block (ram,0x02f865d0) */
/* WARNING: Removing unreachable block (ram,0x02f865d8) */
/* WARNING: Removing unreachable block (ram,0x02f865f0) */
/* WARNING: Removing unreachable block (ram,0x02f865a0) */
/* WARNING: Removing unreachable block (ram,0x02f865a8) */
/* WARNING: Removing unreachable block (ram,0x02f865c0) */
/* WARNING: Removing unreachable block (ram,0x02f86930) */
/* WARNING: Removing unreachable block (ram,0x02f86934) */

long Core_UI2_UIIrregularElementWobble__OnEnable(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint extraout_w1;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 extraout_s0;
  undefined1 auVar7 [16];
  
  iVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,100,0);
  *(float *)(param_1 + 0x2c) = (float)iVar1;
  if (*(long *)(param_1 + 0x18) == 0) {
    param_1 = func_0x00f78af4();
    uVar6 = extraout_s0;
    uVar3 = extraout_w1;
  }
  else {
    uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x120);
    uVar3 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
code_r0x02f866b4:
    func_0x00f78af4();
  }
  else if (uVar3 < *(uint *)(lVar4 + 0x18)) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      return param_1;
    }
    lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 8 + 0x20);
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x10) = uVar6;
      return param_1;
    }
    goto code_r0x02f866b4;
  }
  uVar2 = func_0x00f78b24();
  lVar4 = func_0x00f78ac0(uVar2,0);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    return lVar4;
  }
  lVar5 = *(long *)(lVar4 + 0x20);
  if (lVar5 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar5 + 0x18) != 0) {
    auVar7._8_8_ = *(undefined8 *)(lVar5 + 0x20);
    auVar7._0_8_ = lVar4;
    goto code_r0x02f86990;
  }
  uVar2 = func_0x00f78b24();
  auVar7 = func_0x00f78ac0(uVar2,0);
code_r0x02f86990:
  if (auVar7._8_8_ == 0) {
    lVar4 = func_0x00f78af4();
    if ((bRam0000000003ebc63a & 1) == 0) {
      func_0x00f78a20(0x3d1f8f0);
      bRam0000000003ebc63a = 1;
    }
    uVar2 = func_0x00f78a34(/*Core.UI2.UIIrregularElementWobble.UVDeltaInfo[]_TypeInfo*/ uRam0000000003d1f8f0,8);
    *(undefined8 *)(lVar4 + 0x20) = uVar2;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar4;
  }
  lVar4 = _sinf(*(float *)(auVar7._8_8_ + 0x18) * *(float *)(auVar7._0_8_ + 0x2c));
  return lVar4;
}



// ============================================================
// RVA: 0x2f86678 | Core.UI2.UIIrregularElementWobble.SetUVInfo
// ============================================================

/* WARNING: Possible PIC construction at 0x02f866fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8674c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8679c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f867ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8683c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8688c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f868dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8692c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f868e0) */
/* WARNING: Removing unreachable block (ram,0x02f868e4) */
/* WARNING: Removing unreachable block (ram,0x02f86914) */
/* WARNING: Removing unreachable block (ram,0x02f86920) */
/* WARNING: Removing unreachable block (ram,0x02f86890) */
/* WARNING: Removing unreachable block (ram,0x02f86894) */
/* WARNING: Removing unreachable block (ram,0x02f868c4) */
/* WARNING: Removing unreachable block (ram,0x02f868d0) */
/* WARNING: Removing unreachable block (ram,0x02f86840) */
/* WARNING: Removing unreachable block (ram,0x02f86844) */
/* WARNING: Removing unreachable block (ram,0x02f86874) */
/* WARNING: Removing unreachable block (ram,0x02f86880) */
/* WARNING: Removing unreachable block (ram,0x02f867f0) */
/* WARNING: Removing unreachable block (ram,0x02f867f4) */
/* WARNING: Removing unreachable block (ram,0x02f86824) */
/* WARNING: Removing unreachable block (ram,0x02f86830) */
/* WARNING: Removing unreachable block (ram,0x02f867a0) */
/* WARNING: Removing unreachable block (ram,0x02f867a4) */
/* WARNING: Removing unreachable block (ram,0x02f867d4) */
/* WARNING: Removing unreachable block (ram,0x02f867e0) */
/* WARNING: Removing unreachable block (ram,0x02f86750) */
/* WARNING: Removing unreachable block (ram,0x02f86754) */
/* WARNING: Removing unreachable block (ram,0x02f86784) */
/* WARNING: Removing unreachable block (ram,0x02f86790) */
/* WARNING: Removing unreachable block (ram,0x02f86700) */
/* WARNING: Removing unreachable block (ram,0x02f86704) */
/* WARNING: Removing unreachable block (ram,0x02f86734) */
/* WARNING: Removing unreachable block (ram,0x02f86740) */
/* WARNING: Removing unreachable block (ram,0x02f86930) */
/* WARNING: Removing unreachable block (ram,0x02f86934) */

long Core_UI2_UIIrregularElementWobble__SetUVInfo(undefined4 param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar2 == 0) {
LAB_02f866b4:
    func_0x00f78af4();
  }
  else if (param_3 < *(uint *)(lVar2 + 0x18)) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      return param_2;
    }
    lVar2 = *(long *)(lVar2 + (long)(int)param_3 * 8 + 0x20);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x10) = param_1;
      return param_2;
    }
    goto LAB_02f866b4;
  }
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    return lVar2;
  }
  lVar3 = *(long *)(lVar2 + 0x20);
  if (lVar3 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar3 + 0x18) != 0) {
    auVar4._8_8_ = *(undefined8 *)(lVar3 + 0x20);
    auVar4._0_8_ = lVar2;
    goto code_r0x02f86990;
  }
  uVar1 = func_0x00f78b24();
  auVar4 = func_0x00f78ac0(uVar1,0);
code_r0x02f86990:
  if (auVar4._8_8_ == 0) {
    lVar2 = func_0x00f78af4();
    if ((bRam0000000003ebc63a & 1) == 0) {
      func_0x00f78a20(0x3d1f8f0);
      bRam0000000003ebc63a = 1;
    }
    uVar1 = func_0x00f78a34(/*Core.UI2.UIIrregularElementWobble.UVDeltaInfo[]_TypeInfo*/ uRam0000000003d1f8f0,8);
    *(undefined8 *)(lVar2 + 0x20) = uVar1;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar2;
  }
  lVar2 = _sinf(*(float *)(auVar4._8_8_ + 0x18) * *(float *)(auVar4._0_8_ + 0x2c));
  return lVar2;
}



// ============================================================
// RVA: 0x2f866c4 | Core.UI2.UIIrregularElementWobble.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x02f866fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8674c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8679c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f867ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8683c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8688c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f868dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8692c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f868e0) */
/* WARNING: Removing unreachable block (ram,0x02f868e4) */
/* WARNING: Removing unreachable block (ram,0x02f86914) */
/* WARNING: Removing unreachable block (ram,0x02f86920) */
/* WARNING: Removing unreachable block (ram,0x02f86890) */
/* WARNING: Removing unreachable block (ram,0x02f86894) */
/* WARNING: Removing unreachable block (ram,0x02f868c4) */
/* WARNING: Removing unreachable block (ram,0x02f868d0) */
/* WARNING: Removing unreachable block (ram,0x02f86840) */
/* WARNING: Removing unreachable block (ram,0x02f86844) */
/* WARNING: Removing unreachable block (ram,0x02f86874) */
/* WARNING: Removing unreachable block (ram,0x02f86880) */
/* WARNING: Removing unreachable block (ram,0x02f867f0) */
/* WARNING: Removing unreachable block (ram,0x02f867f4) */
/* WARNING: Removing unreachable block (ram,0x02f86824) */
/* WARNING: Removing unreachable block (ram,0x02f86830) */
/* WARNING: Removing unreachable block (ram,0x02f867a0) */
/* WARNING: Removing unreachable block (ram,0x02f867a4) */
/* WARNING: Removing unreachable block (ram,0x02f867d4) */
/* WARNING: Removing unreachable block (ram,0x02f867e0) */
/* WARNING: Removing unreachable block (ram,0x02f86750) */
/* WARNING: Removing unreachable block (ram,0x02f86754) */
/* WARNING: Removing unreachable block (ram,0x02f86784) */
/* WARNING: Removing unreachable block (ram,0x02f86790) */
/* WARNING: Removing unreachable block (ram,0x02f86700) */
/* WARNING: Removing unreachable block (ram,0x02f86704) */
/* WARNING: Removing unreachable block (ram,0x02f86734) */
/* WARNING: Removing unreachable block (ram,0x02f86740) */
/* WARNING: Removing unreachable block (ram,0x02f86930) */
/* WARNING: Removing unreachable block (ram,0x02f86934) */

long Core_UI2_UIIrregularElementWobble__Update(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    return param_1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar2 + 0x18) != 0) {
    lVar2 = *(long *)(lVar2 + 0x20);
    goto code_r0x02f86990;
  }
  uVar1 = func_0x00f78b24();
  auVar3 = func_0x00f78ac0(uVar1,0);
  lVar2 = auVar3._8_8_;
  param_1 = auVar3._0_8_;
code_r0x02f86990:
  if (lVar2 != 0) {
    lVar2 = _sinf(*(float *)(lVar2 + 0x18) * *(float *)(param_1 + 0x2c));
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003ebc63a & 1) == 0) {
    func_0x00f78a20(0x3d1f8f0);
    bRam0000000003ebc63a = 1;
  }
  uVar1 = func_0x00f78a34(/*Core.UI2.UIIrregularElementWobble.UVDeltaInfo[]_TypeInfo*/ uRam0000000003d1f8f0,8);
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar2;
}



// ============================================================
// RVA: 0x2f86990 | Core.UI2.UIIrregularElementWobble.WobbleDelta
// ============================================================

long Core_UI2_UIIrregularElementWobble__WobbleDelta(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    lVar1 = _sinf(*(float *)(param_2 + 0x18) * *(float *)(param_1 + 0x2c));
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003ebc63a & 1) == 0) {
    func_0x00f78a20(0x3d1f8f0);
    bRam0000000003ebc63a = 1;
  }
  uVar2 = func_0x00f78a34(/*Core.UI2.UIIrregularElementWobble.UVDeltaInfo[]_TypeInfo*/ uRam0000000003d1f8f0,8);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar1;
}



// ============================================================
// RVA: 0x2f869e8 | Core.UI2.UIIrregularElementWobble..ctor
// ============================================================

undefined1  [16] Core_UI2_UIIrregularElementWobble___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003ebc63a & 1) == 0) {
    func_0x00f78a20(0x3d1f8f0);
    bRam0000000003ebc63a = 1;
  }
  uVar1 = func_0x00f78a34(/*Core.UI2.UIIrregularElementWobble.UVDeltaInfo[]_TypeInfo*/ uRam0000000003d1f8f0,8);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



