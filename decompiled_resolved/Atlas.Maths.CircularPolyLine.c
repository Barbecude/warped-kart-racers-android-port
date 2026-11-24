// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maths.CircularPolyLine

// ============================================================
// RVA: 0x156f784 | Atlas.Maths.CircularPolyLine.Init
// ============================================================

void Atlas_Maths_CircularPolyLine__Init(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5029 & 1) == 0) {
    func_0x00f78a20(0x3d1f700);
    bRam0000000003eb5029 = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.Maths.CircularPolyLine.Point[]_TypeInfo*/ uRam0000000003d1f700,param_3);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  *(int *)(param_2 + 0x18) = (int)param_3;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}



// ============================================================
// RVA: 0x156f7fc | Atlas.Maths.CircularPolyLine.DeInit
// ============================================================

void Atlas_Maths_CircularPolyLine__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// ============================================================
// RVA: 0x156f808 | Atlas.Maths.CircularPolyLine.AddPosition
// ============================================================

long Atlas_Maths_CircularPolyLine__AddPosition
               (float param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  float extraout_s0;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar13 = (float)param_3;
  fVar15 = (float)param_2;
  if (*(int *)(param_5 + 0x24) == *(int *)(param_5 + 0x1c)) {
    fVar16 = 0.0;
LAB_0156f8dc:
    lVar5 = *(long *)(param_5 + 0x10);
    if (lVar5 == 0) {
code_r0x0156f968:
      func_0x00f78af4();
    }
    else if (*(uint *)(param_5 + 0x24) < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)*(uint *)(param_5 + 0x24) * 0x10;
      *(float *)(lVar5 + 0x20) = param_1;
      *(float *)(lVar5 + 0x24) = fVar15;
      *(float *)(lVar5 + 0x28) = fVar13;
      *(float *)(lVar5 + 0x2c) = fVar16;
      iVar6 = *(int *)(param_5 + 0x24);
      iVar4 = iVar6 + 1;
      *(int *)(param_5 + 0x20) = iVar6;
      *(int *)(param_5 + 0x24) = iVar4;
      if (iVar4 == *(int *)(param_5 + 0x1c)) {
        iVar4 = 0;
        if (iVar6 + 2 != *(int *)(param_5 + 0x18)) {
          iVar4 = iVar6 + 2;
        }
      }
      else {
        if (iVar4 != *(int *)(param_5 + 0x18)) {
          return 1;
        }
        *(undefined4 *)(param_5 + 0x24) = 0;
        iVar4 = *(int *)(param_5 + 0x1c) + 1;
      }
      *(int *)(param_5 + 0x1c) = iVar4;
      return 1;
    }
  }
  else {
    lVar5 = *(long *)(param_5 + 0x10);
    if (lVar5 == 0) goto code_r0x0156f968;
    if (*(uint *)(param_5 + 0x20) < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)*(uint *)(param_5 + 0x20) * 0x10;
      fVar12 = *(float *)(lVar5 + 0x20);
      fVar11 = *(float *)(lVar5 + 0x24);
      fVar16 = *(float *)(lVar5 + 0x28);
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar16 = fVar13 - fVar16;
      fVar11 = fVar15 - fVar11;
      fVar12 = param_1 - fVar12;
      fVar12 = fVar12 * fVar12;
      param_3 = (ulong)(uint)fVar12;
      fVar16 = SQRT(fVar16 * fVar16 + fVar12 + fVar11 * fVar11);
      param_2 = (ulong)(uint)*(float *)(param_5 + 0x28);
      if (fVar16 <= *(float *)(param_5 + 0x28)) {
        return 0;
      }
      goto LAB_0156f8dc;
    }
  }
  uVar2 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar2,0);
  uVar10 = *(uint *)(lVar3 + 0x1c);
  lVar5 = lVar3;
  uVar9 = uVar10;
  if (*(uint *)(lVar3 + 0x24) == uVar10) {
    return lVar3;
  }
  while( true ) {
    fVar13 = (float)param_2;
    fVar16 = (float)param_4;
    fVar15 = (float)param_3;
    iVar4 = *(int *)(lVar3 + 0x20);
    iVar6 = iVar4;
    if (iVar4 <= (int)uVar10) {
      iVar6 = *(int *)(lVar3 + 0x18) + -1;
    }
    if (iVar6 < (int)uVar9) {
      if (iVar4 < 0) {
        return lVar5;
      }
      uVar10 = 0;
      goto code_r0x0156fa14;
    }
    /*UnityEngine.Color$$get_red*/ func_0x0322356c(0);
    /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 == 0) goto code_r0x0156fa74;
    if (*(uint *)(lVar5 + 0x18) <= uVar9) break;
    lVar5 = lVar5 + (long)(int)uVar9 * 0x10;
    param_2 = (ulong)*(uint *)(lVar5 + 0x24);
    param_3 = (ulong)*(uint *)(lVar5 + 0x28);
    /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x20),0);
    param_4 = 0x3e800000;
    lVar5 = /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(0);
    uVar10 = *(uint *)(lVar3 + 0x1c);
    uVar9 = uVar9 + 1;
  }
  goto code_r0x0156fa78;
code_r0x0156fa14:
  fVar13 = (float)param_2;
  fVar16 = (float)param_4;
  fVar15 = (float)param_3;
  /*UnityEngine.Color$$get_red*/ func_0x0322356c(0);
  /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
  lVar5 = *(long *)(lVar3 + 0x10);
  if (lVar5 == 0) goto code_r0x0156fa74;
  if (*(uint *)(lVar5 + 0x18) <= uVar10) goto code_r0x0156fa78;
  lVar5 = lVar5 + (long)(int)uVar10 * 0x10;
  param_2 = (ulong)*(uint *)(lVar5 + 0x24);
  param_3 = (ulong)*(uint *)(lVar5 + 0x28);
  /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x20),0);
  param_4 = 0x3e800000;
  lVar5 = /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(0);
  uVar10 = uVar10 + 1;
  if (*(int *)(lVar3 + 0x20) < (int)uVar10) {
    return lVar5;
  }
  goto code_r0x0156fa14;
code_r0x0156fa74:
  func_0x00f78af4();
code_r0x0156fa78:
  uVar2 = func_0x00f78b24();
  lVar5 = func_0x00f78ac0(uVar2,0);
  if (*(int *)(lVar5 + 0x24) == *(int *)(lVar5 + 0x1c)) {
    return lVar5;
  }
  lVar3 = *(long *)(lVar5 + 0x10);
  if (lVar3 != 0) {
    uVar10 = *(uint *)(lVar5 + 0x20);
    if (uVar10 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar10 * 0x10;
      fVar11 = *(float *)(lVar3 + 0x20);
      fVar12 = *(float *)(lVar3 + 0x24);
      fVar14 = *(float *)(lVar3 + 0x28);
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      fVar11 = extraout_s0 - fVar11;
      fVar13 = fVar13 - fVar12;
      fVar15 = fVar15 - fVar14;
      lVar3 = /*System.Math_TypeInfo*/ lRam0000000003d232c0;
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        lVar3 = func_0x00f78ad0();
      }
      fVar13 = SQRT(fVar15 * fVar15 + fVar11 * fVar11 + fVar13 * fVar13);
      uVar1 = *(uint *)(lVar5 + 0x1c);
      uVar9 = uVar1;
      if (*(int *)(lVar5 + 0x20) <= (int)uVar1) {
        uVar9 = 0;
      }
      if ((int)uVar9 <= (int)uVar10) {
        lVar7 = *(long *)(lVar5 + 0x10);
        if (lVar7 == 0) goto code_r0x0156fcfc;
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto code_r0x0156fcf0;
          if (fVar16 <= fVar13) {
            return lVar3;
          }
          lVar8 = (long)(int)uVar10;
          uVar10 = uVar10 - 1;
          fVar13 = fVar13 + *(float *)(lVar7 + lVar8 * 0x10 + 0x2c);
        } while ((int)uVar9 <= (int)uVar10);
      }
      if ((*(int *)(lVar5 + 0x20) < (int)uVar1) &&
         (uVar10 = *(int *)(lVar5 + 0x18) - 1, (int)uVar1 <= (int)uVar10)) {
        lVar7 = *(long *)(lVar5 + 0x10);
        if (lVar7 == 0) goto code_r0x0156fcfc;
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto code_r0x0156fcf0;
          if (fVar16 <= fVar13) {
            return lVar3;
          }
          lVar8 = (long)(int)uVar10;
          uVar10 = uVar10 - 1;
          fVar13 = fVar13 + *(float *)(lVar7 + lVar8 * 0x10 + 0x2c);
        } while ((int)uVar1 <= (int)uVar10);
      }
      if (*(long *)(lVar5 + 0x10) == 0) goto code_r0x0156fcfc;
      if (uVar1 < *(uint *)(*(long *)(lVar5 + 0x10) + 0x18)) {
        return lVar3;
      }
    }
code_r0x0156fcf0:
    uVar2 = func_0x00f78b24();
    func_0x00f78ac0(uVar2,0);
  }
code_r0x0156fcfc:
  lVar5 = func_0x00f78af4();
  return lVar5;
}



// ============================================================
// RVA: 0x156f978 | Atlas.Maths.CircularPolyLine.DrawGizmos
// ============================================================

void Atlas_Maths_CircularPolyLine__DrawGizmos
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  float extraout_s0;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar9 = *(uint *)(param_5 + 0x1c);
  uVar8 = uVar9;
  if (*(uint *)(param_5 + 0x24) == uVar9) {
    return;
  }
  while( true ) {
    fVar13 = (float)param_2;
    fVar10 = (float)param_4;
    fVar15 = (float)param_3;
    iVar2 = *(int *)(param_5 + 0x20);
    iVar6 = iVar2;
    if (iVar2 <= (int)uVar9) {
      iVar6 = *(int *)(param_5 + 0x18) + -1;
    }
    if (iVar6 < (int)uVar8) {
      if (iVar2 < 0) {
        return;
      }
      uVar9 = 0;
      goto code_r0x0156fa14;
    }
    /*UnityEngine.Color$$get_red*/ func_0x0322356c(0);
    /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
    lVar4 = *(long *)(param_5 + 0x10);
    if (lVar4 == 0) goto LAB_0156fa74;
    if (*(uint *)(lVar4 + 0x18) <= uVar8) break;
    lVar4 = lVar4 + (long)(int)uVar8 * 0x10;
    param_2 = (ulong)*(uint *)(lVar4 + 0x24);
    param_3 = (ulong)*(uint *)(lVar4 + 0x28);
    /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x20),0);
    param_4 = 0x3e800000;
    /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(0);
    uVar9 = *(uint *)(param_5 + 0x1c);
    uVar8 = uVar8 + 1;
  }
LAB_0156fa78:
  uVar3 = func_0x00f78b24();
  lVar4 = func_0x00f78ac0(uVar3,0);
  if (*(int *)(lVar4 + 0x24) == *(int *)(lVar4 + 0x1c)) {
    return;
  }
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 != 0) {
    uVar9 = *(uint *)(lVar4 + 0x20);
    if (uVar9 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)uVar9 * 0x10;
      fVar11 = *(float *)(lVar5 + 0x20);
      fVar12 = *(float *)(lVar5 + 0x24);
      fVar14 = *(float *)(lVar5 + 0x28);
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      fVar11 = extraout_s0 - fVar11;
      fVar13 = fVar13 - fVar12;
      fVar15 = fVar15 - fVar14;
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar13 = SQRT(fVar15 * fVar15 + fVar11 * fVar11 + fVar13 * fVar13);
      uVar1 = *(uint *)(lVar4 + 0x1c);
      uVar8 = uVar1;
      if (*(int *)(lVar4 + 0x20) <= (int)uVar1) {
        uVar8 = 0;
      }
      if ((int)uVar8 <= (int)uVar9) {
        lVar5 = *(long *)(lVar4 + 0x10);
        if (lVar5 == 0) goto code_r0x0156fcfc;
        do {
          if (*(uint *)(lVar5 + 0x18) <= uVar9) goto code_r0x0156fcf0;
          if (fVar10 <= fVar13) {
            return;
          }
          lVar7 = (long)(int)uVar9;
          uVar9 = uVar9 - 1;
          fVar13 = fVar13 + *(float *)(lVar5 + lVar7 * 0x10 + 0x2c);
        } while ((int)uVar8 <= (int)uVar9);
      }
      if ((*(int *)(lVar4 + 0x20) < (int)uVar1) &&
         (uVar9 = *(int *)(lVar4 + 0x18) - 1, (int)uVar1 <= (int)uVar9)) {
        lVar5 = *(long *)(lVar4 + 0x10);
        if (lVar5 == 0) goto code_r0x0156fcfc;
        do {
          if (*(uint *)(lVar5 + 0x18) <= uVar9) goto code_r0x0156fcf0;
          if (fVar10 <= fVar13) {
            return;
          }
          lVar7 = (long)(int)uVar9;
          uVar9 = uVar9 - 1;
          fVar13 = fVar13 + *(float *)(lVar5 + lVar7 * 0x10 + 0x2c);
        } while ((int)uVar1 <= (int)uVar9);
      }
      if (*(long *)(lVar4 + 0x10) == 0) goto code_r0x0156fcfc;
      if (uVar1 < *(uint *)(*(long *)(lVar4 + 0x10) + 0x18)) {
        return;
      }
    }
code_r0x0156fcf0:
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
  }
code_r0x0156fcfc:
  func_0x00f78af4();
  return;
code_r0x0156fa14:
  fVar13 = (float)param_2;
  fVar10 = (float)param_4;
  fVar15 = (float)param_3;
  /*UnityEngine.Color$$get_red*/ func_0x0322356c(0);
  /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(0);
  lVar4 = *(long *)(param_5 + 0x10);
  if (lVar4 == 0) goto LAB_0156fa74;
  if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_0156fa78;
  lVar4 = lVar4 + (long)(int)uVar9 * 0x10;
  param_2 = (ulong)*(uint *)(lVar4 + 0x24);
  param_3 = (ulong)*(uint *)(lVar4 + 0x28);
  /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x20),0);
  param_4 = 0x3e800000;
  /*UnityEngine.Gizmos$$DrawSphere*/ func_0x0322f8e8(0);
  uVar9 = uVar9 + 1;
  if (*(int *)(param_5 + 0x20) < (int)uVar9) {
    return;
  }
  goto code_r0x0156fa14;
LAB_0156fa74:
  func_0x00f78af4();
  goto LAB_0156fa78;
}



// ============================================================
// RVA: 0x156fa84 | Atlas.Maths.CircularPolyLine.CalculatePointAtDistance
// ============================================================

void Atlas_Maths_CircularPolyLine__CalculatePointAtDistance
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(param_5 + 0x24) == *(int *)(param_5 + 0x1c)) {
    return;
  }
  lVar4 = *(long *)(param_5 + 0x10);
  if (lVar4 != 0) {
    uVar6 = *(uint *)(param_5 + 0x20);
    if (uVar6 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)uVar6 * 0x10;
      fVar7 = *(float *)(lVar4 + 0x20);
      fVar8 = *(float *)(lVar4 + 0x24);
      fVar9 = *(float *)(lVar4 + 0x28);
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      param_1 = param_1 - fVar7;
      param_2 = param_2 - fVar8;
      param_3 = param_3 - fVar9;
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar7 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
      uVar2 = *(uint *)(param_5 + 0x1c);
      uVar1 = uVar2;
      if (*(int *)(param_5 + 0x20) <= (int)uVar2) {
        uVar1 = 0;
      }
      if ((int)uVar1 <= (int)uVar6) {
        lVar4 = *(long *)(param_5 + 0x10);
        if (lVar4 == 0) goto LAB_0156fcfc;
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_0156fcf0;
          if (param_4 <= fVar7) {
            return;
          }
          lVar5 = (long)(int)uVar6;
          uVar6 = uVar6 - 1;
          fVar7 = fVar7 + *(float *)(lVar4 + lVar5 * 0x10 + 0x2c);
        } while ((int)uVar1 <= (int)uVar6);
      }
      if ((*(int *)(param_5 + 0x20) < (int)uVar2) &&
         (uVar6 = *(int *)(param_5 + 0x18) - 1, (int)uVar2 <= (int)uVar6)) {
        lVar4 = *(long *)(param_5 + 0x10);
        if (lVar4 == 0) goto LAB_0156fcfc;
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_0156fcf0;
          if (param_4 <= fVar7) {
            return;
          }
          lVar5 = (long)(int)uVar6;
          uVar6 = uVar6 - 1;
          fVar7 = fVar7 + *(float *)(lVar4 + lVar5 * 0x10 + 0x2c);
        } while ((int)uVar2 <= (int)uVar6);
      }
      if (*(long *)(param_5 + 0x10) == 0) goto LAB_0156fcfc;
      if (uVar2 < *(uint *)(*(long *)(param_5 + 0x10) + 0x18)) {
        return;
      }
    }
LAB_0156fcf0:
    uVar3 = func_0x00f78b24();
    func_0x00f78ac0(uVar3,0);
  }
LAB_0156fcfc:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x156fd00 | Atlas.Maths.CircularPolyLine..ctor
// ============================================================

void Atlas_Maths_CircularPolyLine___ctor(void)

{
  return;
}



