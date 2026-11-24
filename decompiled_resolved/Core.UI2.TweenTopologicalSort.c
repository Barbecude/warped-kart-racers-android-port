// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.TweenTopologicalSort

// ============================================================
// RVA: 0x2f8375c | Core.UI2.TweenTopologicalSort.Sort
// ============================================================

/* WARNING: Possible PIC construction at 0x02f83864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f83960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f839dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f83868) */
/* WARNING: Removing unreachable block (ram,0x02f83874) */
/* WARNING: Removing unreachable block (ram,0x02f83964) */
/* WARNING: Removing unreachable block (ram,0x02f8396c) */
/* WARNING: Removing unreachable block (ram,0x02f83970) */
/* WARNING: Removing unreachable block (ram,0x02f83980) */
/* WARNING: Removing unreachable block (ram,0x02f83988) */
/* WARNING: Removing unreachable block (ram,0x02f83998) */
/* WARNING: Removing unreachable block (ram,0x02f839e0) */
/* WARNING: Removing unreachable block (ram,0x02f839e4) */
/* WARNING: Removing unreachable block (ram,0x02f839fc) */
/* WARNING: Removing unreachable block (ram,0x02f83a04) */
/* WARNING: Removing unreachable block (ram,0x02f83a2c) */
/* WARNING: Removing unreachable block (ram,0x02f83a10) */
/* WARNING: Removing unreachable block (ram,0x02f83a1c) */
/* WARNING: Removing unreachable block (ram,0x02f83a38) */
/* WARNING: Removing unreachable block (ram,0x02f83a50) */
/* WARNING: Removing unreachable block (ram,0x02f839a0) */
/* WARNING: Removing unreachable block (ram,0x02f839b0) */
/* WARNING: Removing unreachable block (ram,0x02f839b8) */
/* WARNING: Removing unreachable block (ram,0x02f83a98) */
/* WARNING: Removing unreachable block (ram,0x02f839c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_UI2_TweenTopologicalSort__Sort
                (long *param_1,ulong param_2,ulong param_3,long *param_4,long *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_50 [8];
  long lStack_48;
  
  puVar2 = auStack_50;
  lStack_48 = *(long *)PTR_03a5d648;
  puVar11 = (undefined1 *)0x3ebc000;
  uVar10 = param_3;
  plVar5 = param_4;
  if ((bRam0000000003ebc62b & 1) == 0) {
    func_0x00f78a20(0x3d3b8b8);
    bRam0000000003ebc62b = 1;
  }
  if ((int)param_3 < 2) {
    puVar1 = auStack_50;
    if (param_2 != 0) {
      uVar10 = uRam0000000003d3b8b8;
      /*System.Collections.Generic.List<PlannedTweenData>$$AddRange*/ func_0x02434ce8(param_2,param_1);
      goto LAB_02f83894;
    }
  }
  else {
    unaff_x24 = param_3 & 0xffffffff;
    (*(code *)PTR_03a5d628)();
    puVar2 = auStack_50 + -(unaff_x24 + 0xf & 0x1fffffff0);
    _bzero(puVar2,unaff_x24);
    uVar6 = unaff_x24 + 1 & 0x1fffffffe;
    puVar11 = puVar2;
    uVar13 = _UNK_033f8650;
    uVar14 = _UNK_033f8658;
    do {
      if (uVar13 <= unaff_x24 - 1) {
        *puVar11 = 0;
      }
      if (uVar14 <= unaff_x24 - 1) {
        puVar11[1] = 0;
      }
      uVar13 = uVar13 + 2;
      uVar14 = uVar14 + 2;
      puVar11 = puVar11 + 2;
      uVar6 = uVar6 - 2;
    } while (uVar6 != 0);
    puVar11 = puVar2;
    if (0 < (int)param_3) {
      unaff_x24 = 0;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = puVar2;
      auVar15 = auVar15 << 0x40;
      puVar12 = (undefined *)0x2f83868;
      uVar10 = param_2;
      plVar5 = param_1;
      param_5 = param_4;
      goto code_r0x02f838d0;
    }
LAB_02f83894:
    if (*(long *)PTR_03a5d648 == lStack_48) {
      return 1;
    }
    ___stack_chk_fail();
    puVar1 = puVar2;
  }
  puVar2 = puVar1;
  puVar12 = &Core_UI2_TweenTopologicalSort__Visit;
  auVar15 = func_0x00f78af4();
code_r0x02f838d0:
  lVar7 = auVar15._8_8_;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(ulong *)(puVar2 + -0x40) = unaff_x24;
  *(undefined1 **)(puVar2 + -0x38) = puVar11;
  *(ulong *)(puVar2 + -0x30) = param_3;
  *(long **)(puVar2 + -0x28) = param_4;
  *(ulong *)(puVar2 + -0x20) = param_2;
  *(long **)(puVar2 + -0x18) = param_1;
  *(undefined1 **)(puVar2 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined **)(puVar2 + -8) = puVar12;
  uVar6 = auVar15._0_8_;
  if ((bRam0000000003ebc62c & 1) == 0) {
    func_0x00f78a20(0x3d1d4a8);
    func_0x00f78a20(0x3d3b8b0);
    func_0x00f78a20(0x3d3c530);
    uVar6 = func_0x00f78a20(0x3d40e08);
    bRam0000000003ebc62c = 1;
  }
  iVar9 = auVar15._0_4_;
  if (*(char *)(lVar7 + iVar9) != '\0') {
    return uVar6;
  }
  *(undefined1 *)(lVar7 + iVar9) = 1;
  *(undefined8 *)(puVar2 + -0xf0) = 0x3ebc000;
  *(long *)(puVar2 + -0xe8) = lVar7;
  *(long **)(puVar2 + -0xe0) = param_5;
  *(ulong *)(puVar2 + -0xd8) = auVar15._0_8_;
  *(long **)(puVar2 + -0xd0) = plVar5;
  *(ulong *)(puVar2 + -200) = uVar10;
  *(undefined1 **)(puVar2 + -0xc0) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0xb8) = &UNK_02f83964;
  if ((bRam0000000003ebc62d & 1) == 0) {
    func_0x00f78a20(0x3d1cfe0);
    func_0x00f78a20(0x3d1d4d8);
    func_0x00f78a20(0x3d40e00);
    bRam0000000003ebc62d = 1;
  }
  if (param_5 != (long *)0x0) {
    uVar10 = 0;
    do {
      lVar7 = *param_5;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*System.Collections.Generic.ICollection<TweenDependencyIndexPair>_TypeInfo*/ lRam0000000003d1cfe0) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x02f83b54;
          }
          piVar8 = piVar8 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(param_5,/*System.Collections.Generic.ICollection<TweenDependencyIndexPair>_TypeInfo*/ lRam0000000003d1cfe0,0);
code_r0x02f83b54:
      iVar3 = (*(code *)*puVar4)(param_5,puVar4[1]);
      if (iVar3 <= (int)uVar10) {
        return 0xffffffff;
      }
      lVar7 = *param_5;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*System.Collections.Generic.IList<TweenDependencyIndexPair>_TypeInfo*/ lRam0000000003d1d4d8) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x02f83bb4;
          }
          piVar8 = piVar8 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(param_5,/*System.Collections.Generic.IList<TweenDependencyIndexPair>_TypeInfo*/ lRam0000000003d1d4d8,0);
code_r0x02f83bb4:
      lVar7 = (*(code *)*puVar4)(param_5,uVar10,puVar4[1]);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x10) == iVar9) {
        return uVar10;
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while( true );
  }
  uVar10 = func_0x00f78af4();
  return uVar10;
}



// ============================================================
// RVA: 0x2f838d0 | Core.UI2.TweenTopologicalSort.Visit
// ============================================================

/* WARNING: Possible PIC construction at 0x02f83960: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f83964) */
/* WARNING: Removing unreachable block (ram,0x02f8396c) */
/* WARNING: Removing unreachable block (ram,0x02f83970) */
/* WARNING: Removing unreachable block (ram,0x02f83980) */
/* WARNING: Removing unreachable block (ram,0x02f83988) */
/* WARNING: Removing unreachable block (ram,0x02f83998) */
/* WARNING: Removing unreachable block (ram,0x02f839a0) */
/* WARNING: Removing unreachable block (ram,0x02f839b0) */
/* WARNING: Removing unreachable block (ram,0x02f839b8) */
/* WARNING: Removing unreachable block (ram,0x02f839c8) */
/* WARNING: Removing unreachable block (ram,0x02f839e0) */
/* WARNING: Removing unreachable block (ram,0x02f839e4) */
/* WARNING: Removing unreachable block (ram,0x02f839fc) */
/* WARNING: Removing unreachable block (ram,0x02f83a04) */
/* WARNING: Removing unreachable block (ram,0x02f83a2c) */
/* WARNING: Removing unreachable block (ram,0x02f83a10) */
/* WARNING: Removing unreachable block (ram,0x02f83a1c) */
/* WARNING: Removing unreachable block (ram,0x02f83a38) */
/* WARNING: Removing unreachable block (ram,0x02f83a98) */
/* WARNING: Removing unreachable block (ram,0x02f83a50) */

ulong Core_UI2_TweenTopologicalSort__Visit
                (ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  
  uVar2 = param_1;
  if ((bRam0000000003ebc62c & 1) == 0) {
    func_0x00f78a20(0x3d1d4a8);
    func_0x00f78a20(0x3d3b8b0);
    func_0x00f78a20(0x3d3c530);
    uVar2 = func_0x00f78a20(0x3d40e08);
    bRam0000000003ebc62c = 1;
  }
  iVar7 = (int)param_1;
  if (*(char *)(param_2 + iVar7) != '\0') {
    return uVar2;
  }
  *(undefined1 *)(param_2 + iVar7) = 1;
  if ((bRam0000000003ebc62d & 1) == 0) {
    func_0x00f78a20(0x3d1cfe0);
    func_0x00f78a20(0x3d1d4d8);
    func_0x00f78a20(0x3d40e00);
    bRam0000000003ebc62d = 1;
  }
  if (param_5 != (long *)0x0) {
    uVar2 = 0;
    do {
      lVar4 = *param_5;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == /*System.Collections.Generic.ICollection<TweenDependencyIndexPair>_TypeInfo*/ lRam0000000003d1cfe0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto code_r0x02f83b54;
          }
          piVar6 = piVar6 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(param_5,/*System.Collections.Generic.ICollection<TweenDependencyIndexPair>_TypeInfo*/ lRam0000000003d1cfe0,0);
code_r0x02f83b54:
      iVar1 = (*(code *)*puVar3)(param_5,puVar3[1]);
      if (iVar1 <= (int)uVar2) {
        return 0xffffffff;
      }
      lVar4 = *param_5;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == /*System.Collections.Generic.IList<TweenDependencyIndexPair>_TypeInfo*/ lRam0000000003d1d4d8) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto code_r0x02f83bb4;
          }
          piVar6 = piVar6 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)func_0x00fac1f0(param_5,/*System.Collections.Generic.IList<TweenDependencyIndexPair>_TypeInfo*/ lRam0000000003d1d4d8,0);
code_r0x02f83bb4:
      lVar4 = (*(code *)*puVar3)(param_5,uVar2,puVar3[1]);
      if (lVar4 == 0) break;
      if (*(int *)(lVar4 + 0x10) == iVar7) {
        return uVar2;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while( true );
  }
  uVar2 = func_0x00f78af4();
  return uVar2;
}



// ============================================================
// RVA: 0x2f83a9c | Core.UI2.TweenTopologicalSort.TryFindTweenDepIndex
// ============================================================

ulong Core_UI2_TweenTopologicalSort__TryFindTweenDepIndex(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  
  if ((bRam0000000003ebc62d & 1) == 0) {
    func_0x00f78a20(0x3d1cfe0);
    func_0x00f78a20(0x3d1d4d8);
    func_0x00f78a20(0x3d40e00);
    bRam0000000003ebc62d = 1;
  }
  if (param_1 != (long *)0x0) {
    uVar6 = 0;
    do {
      lVar3 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == /*System.Collections.Generic.ICollection<TweenDependencyIndexPair>_TypeInfo*/ lRam0000000003d1cfe0) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02f83b54;
          }
          piVar5 = piVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(param_1,/*System.Collections.Generic.ICollection<TweenDependencyIndexPair>_TypeInfo*/ lRam0000000003d1cfe0,0);
LAB_02f83b54:
      iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
      if (iVar1 <= (int)uVar6) {
        return 0xffffffff;
      }
      lVar3 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == /*System.Collections.Generic.IList<TweenDependencyIndexPair>_TypeInfo*/ lRam0000000003d1d4d8) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x02f83bb4;
          }
          piVar5 = piVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(param_1,/*System.Collections.Generic.IList<TweenDependencyIndexPair>_TypeInfo*/ lRam0000000003d1d4d8,0);
code_r0x02f83bb4:
      lVar3 = (*(code *)*puVar2)(param_1,uVar6,puVar2[1]);
      if (lVar3 == 0) break;
      if (*(int *)(lVar3 + 0x10) == param_2) {
        return uVar6;
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while( true );
  }
  uVar6 = func_0x00f78af4();
  return uVar6;
}



// ============================================================
// RVA: 0x2f83bfc | Core.UI2.TweenTopologicalSort..ctor
// ============================================================

void Core_UI2_TweenTopologicalSort___ctor(void)

{
  return;
}



