// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Tests.RebootTestContext

// ============================================================
// RVA: 0x14e0468 | Atlas.Tests.RebootTestContext.GetContextName
// ============================================================

undefined8 Atlas_Tests_RebootTestContext__GetContextName(void)

{
  if ((bRam0000000003eb4bd7 & 1) == 0) {
    func_0x00f78a20(0x3d71a58);
    bRam0000000003eb4bd7 = 1;
  }
  return /*STR('RebootTestContext')*/ uRam0000000003d71a58;
}



// ============================================================
// RVA: 0x14e04ac | Atlas.Tests.RebootTestContext.OnInit
// ============================================================

long Atlas_Tests_RebootTestContext__OnInit(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  long lStack_98;
  
  if ((bRam0000000003eb4bd8 & 1) == 0) {
    func_0x00f78a20(0x3d287f0);
    bRam0000000003eb4bd8 = 1;
  }
  lVar5 = func_0x00f78aec(/*Atlas.Tests.RebootTestContext.<OnInit>d__5_TypeInfo*/ uRam0000000003d287f0);
  /*Atlas.Tests.RebootTestContext.<OnInit>d__5$$.ctor*/ func_0x01564984(lVar5,0,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x20) = param_2;
    *(undefined8 *)(lVar5 + 0x28) = param_1;
    *(undefined8 *)(lVar5 + 0x30) = param_3;
    return lVar5;
  }
  auVar16 = func_0x00f78af4();
  lVar5 = auVar16._0_8_;
  if (*(char *)(lVar5 + 0x1c) == '\0') {
    *(undefined1 *)(lVar5 + 0x1c) = 1;
  }
  lVar6 = /*Atlas.Tests.TestContext$$OnUpdate*/ func_0x01508c8c(lVar5,auVar16._8_8_,0);
  if (*(int *)(lVar5 + 0x18) != 2) {
    return lVar6;
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 == 0) {
    uVar8 = func_0x00f78af4();
    if ((bRam0000000003eb4bd9 & 1) == 0) {
      func_0x00f78a20(0x3d287e8);
      bRam0000000003eb4bd9 = 1;
    }
    lVar5 = func_0x00f78aec(/*Atlas.Tests.RebootTestContext.<OnDeInit>d__7_TypeInfo*/ uRam0000000003d287e8);
    /*Atlas.Tests.RebootTestContext.<OnDeInit>d__7$$.ctor*/ func_0x01564878(lVar5,0,0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      return lVar5;
    }
    lVar5 = func_0x00f78af4();
    return lVar5;
  }
  uVar8 = 0;
  lStack_98 = lVar5;
  lVar6 = *(long *)(lVar5 + 0x68);
  if (lVar6 == 0) {
    plVar15 = &lStack_98;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar6 + 0x18);
    if (lVar14 == 0) {
      return lVar5;
    }
    plVar15 = (long *)(lVar6 + 0x20);
  }
  lVar6 = 0;
  do {
    lVar9 = plVar15[lVar6];
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9,uVar8);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          auVar16 = (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          goto code_r0x02924da4;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
        pcVar13 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar4 == 0) {
          uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
          uVar8 = *(undefined8 *)(lVar10 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar8,lVar9);
        pcVar13 = (code *)*puVar7;
      }
      auVar16 = (*pcVar13)(plVar1,puVar7);
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      auVar16 = (*pcVar13)(lVar9);
    }
    else {
code_r0x02924d98:
      auVar16 = (*pcVar13)(plVar1,lVar9);
    }
code_r0x02924da4:
    uVar8 = auVar16._8_8_;
    lVar6 = lVar6 + 1;
    if (lVar6 == lVar14) {
      return auVar16._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x14e0534 | Atlas.Tests.RebootTestContext.OnUpdate
// ============================================================

long Atlas_Tests_RebootTestContext__OnUpdate(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  long lStack_58;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  lVar5 = /*Atlas.Tests.TestContext$$OnUpdate*/ func_0x01508c8c(param_1,param_2,0);
  if (*(int *)(param_1 + 0x18) != 2) {
    return lVar5;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar7 = func_0x00f78af4();
    if ((bRam0000000003eb4bd9 & 1) == 0) {
      func_0x00f78a20(0x3d287e8);
      bRam0000000003eb4bd9 = 1;
    }
    lVar5 = func_0x00f78aec(/*Atlas.Tests.RebootTestContext.<OnDeInit>d__7_TypeInfo*/ uRam0000000003d287e8);
    /*Atlas.Tests.RebootTestContext.<OnDeInit>d__7$$.ctor*/ func_0x01564878(lVar5,0,0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x20) = uVar7;
      return lVar5;
    }
    lVar5 = func_0x00f78af4();
    return lVar5;
  }
  uVar7 = 0;
  lStack_58 = lVar5;
  lVar8 = *(long *)(lVar5 + 0x68);
  if (lVar8 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar8 + 0x18);
    if (lVar14 == 0) {
      return lVar5;
    }
    plVar15 = (long *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = plVar15[lVar8];
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9,uVar7);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          auVar16 = (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          goto code_r0x02924da4;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
        pcVar13 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if (iVar4 == 0) {
          uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
          uVar7 = *(undefined8 *)(lVar10 + 8);
        }
        puVar6 = (undefined8 *)func_0x00f78acc(uVar7,lVar9);
        pcVar13 = (code *)*puVar6;
      }
      auVar16 = (*pcVar13)(plVar1,puVar6);
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      auVar16 = (*pcVar13)(lVar9);
    }
    else {
code_r0x02924d98:
      auVar16 = (*pcVar13)(plVar1,lVar9);
    }
code_r0x02924da4:
    uVar7 = auVar16._8_8_;
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return auVar16._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x14e0594 | Atlas.Tests.RebootTestContext.OnDeInit
// ============================================================

long Atlas_Tests_RebootTestContext__OnDeInit(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb4bd9 & 1) == 0) {
    func_0x00f78a20(0x3d287e8);
    bRam0000000003eb4bd9 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Tests.RebootTestContext.<OnDeInit>d__7_TypeInfo*/ uRam0000000003d287e8);
  /*Atlas.Tests.RebootTestContext.<OnDeInit>d__7$$.ctor*/ func_0x01564878(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  return lVar1;
}



// ============================================================
// RVA: 0x14e0608 | Atlas.Tests.RebootTestContext..ctor
// ============================================================

void Atlas_Tests_RebootTestContext___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x14e0610 | Atlas.Tests.RebootTestContext.<>n__0
// ============================================================

undefined8
Atlas_Tests_RebootTestContext____n__0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4d31 & 1) == 0) {
    func_0x00f78a20(0x3d29210,param_2,param_3,0);
    bRam0000000003eb4d31 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Tests.TestContext.<OnInit>d__2_TypeInfo*/ uRam0000000003d29210);
  /*Atlas.Tests.TestContext.<OnInit>d__2$$.ctor*/ func_0x0156b34c(uVar1,0,0);
  return uVar1;
}



// ============================================================
// RVA: 0x14e0618 | Atlas.Tests.RebootTestContext.<>n__1
// ============================================================

undefined8 Atlas_Tests_RebootTestContext____n__1(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4d33 & 1) == 0) {
    func_0x00f78a20(0x3d29208,0);
    bRam0000000003eb4d33 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Tests.TestContext.<OnDeInit>d__9_TypeInfo*/ uRam0000000003d29208);
  /*Atlas.Tests.TestContext.<OnDeInit>d__9$$.ctor*/ func_0x0156b2b4(uVar1,0,0);
  return uVar1;
}



