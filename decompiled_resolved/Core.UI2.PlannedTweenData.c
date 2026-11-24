// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.PlannedTweenData

// ============================================================
// RVA: 0x2f82590 | Core.UI2.PlannedTweenData.get_IsValid
// ============================================================

uint Core_UI2_PlannedTweenData__get_IsValid(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003ebc620 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc620 = 1;
  }
  uVar2 = *param_1;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(uVar2,0);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x2f82600 | Core.UI2.PlannedTweenData.Invalidate
// ============================================================

void Core_UI2_PlannedTweenData__Invalidate(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// ============================================================
// RVA: 0x2f82608 | Core.UI2.PlannedTweenData.CalculateAnimDuration
// ============================================================

/* WARNING: Possible PIC construction at 0x02f82630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f82634) */
/* WARNING: Removing unreachable block (ram,0x02f82650) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Core_UI2_PlannedTweenData__CalculateAnimDuration(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 uVar13;
  undefined8 extraout_var_01;
  undefined1 auVar11 [16];
  undefined8 extraout_var_02;
  long alStack_40 [2];
  undefined1 *puVar3;
  
  lVar4 = *(long *)(param_1 + 8);
  puVar9 = &stack0xfffffffffffffff0;
  if (lVar4 == 0) {
    puVar10 = &Core_UI2_UITweenAnimation__GetDuration;
    lVar4 = func_0x00f78af4();
    iVar5 = 0;
    puVar2 = &stack0xffffffffffffffd0;
    uVar6 = extraout_s0;
    uVar12 = extraout_var;
    uVar13 = extraout_var_01;
  }
  else {
    uVar12 = 0;
    uVar13 = 0;
    iVar5 = 0;
    puVar10 = (undefined *)0x2f82634;
    puVar2 = &stack0xffffffffffffffd0;
    uVar6 = _UNK_033f82c4;
  }
  do {
    puVar3 = puVar2 + -0x10;
    *(undefined1 **)(puVar2 + -0x10) = puVar9;
    *(undefined **)(puVar2 + -8) = puVar10;
    lVar4 = *(long *)(lVar4 + 0x38);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      if (iVar1 < 1) {
code_r0x02f8d610:
        auVar11._4_4_ = uVar12;
        auVar11._0_4_ = uVar6;
        auVar11._8_8_ = uVar13;
        return auVar11;
      }
      iVar7 = 0;
      while (iVar1 != iVar7) {
        uVar8 = *(undefined8 *)(lVar4 + (long)iVar7 * 8 + 0x20);
        if ((int)uVar8 == iVar5) {
          uVar6 = (undefined4)((ulong)uVar8 >> 0x20);
          uVar12 = 0;
          uVar13 = 0;
          goto code_r0x02f8d610;
        }
        iVar7 = iVar7 + 1;
        if (iVar1 == iVar7) goto code_r0x02f8d610;
      }
      uVar13 = func_0x00f78b24(uVar6);
      func_0x00f78ac0(uVar13,0);
    }
    puVar10 = &Core_UI2_UITweenAnimation__GetRotationAngle;
    lVar4 = func_0x00f78af4();
    iVar5 = 1;
    puVar2 = puVar2 + -0x10;
    puVar9 = puVar3;
    uVar6 = extraout_s0_00;
    uVar12 = extraout_var_00;
    uVar13 = extraout_var_02;
  } while( true );
}



// ============================================================
// RVA: 0x2f82684 | Core.UI2.PlannedTweenData.CalculateDependencyAnimDuration
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8270c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f82758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f828bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8275c) */
/* WARNING: Removing unreachable block (ram,0x02f828d8) */
/* WARNING: Removing unreachable block (ram,0x02f82760) */
/* WARNING: Removing unreachable block (ram,0x02f8276c) */
/* WARNING: Removing unreachable block (ram,0x02f82774) */
/* WARNING: Removing unreachable block (ram,0x02f82788) */
/* WARNING: Removing unreachable block (ram,0x02f82798) */
/* WARNING: Removing unreachable block (ram,0x02f827b0) */
/* WARNING: Removing unreachable block (ram,0x02f827b4) */
/* WARNING: Removing unreachable block (ram,0x02f827c8) */
/* WARNING: Removing unreachable block (ram,0x02f827d0) */
/* WARNING: Removing unreachable block (ram,0x02f827f8) */
/* WARNING: Removing unreachable block (ram,0x02f827dc) */
/* WARNING: Removing unreachable block (ram,0x02f827e8) */
/* WARNING: Removing unreachable block (ram,0x02f82804) */
/* WARNING: Removing unreachable block (ram,0x02f8282c) */
/* WARNING: Removing unreachable block (ram,0x02f82834) */
/* WARNING: Removing unreachable block (ram,0x02f8285c) */
/* WARNING: Removing unreachable block (ram,0x02f82840) */
/* WARNING: Removing unreachable block (ram,0x02f8284c) */
/* WARNING: Removing unreachable block (ram,0x02f82868) */
/* WARNING: Removing unreachable block (ram,0x02f82884) */
/* WARNING: Removing unreachable block (ram,0x02f82894) */
/* WARNING: Removing unreachable block (ram,0x02f8289c) */
/* WARNING: Removing unreachable block (ram,0x02f828ac) */
/* WARNING: Removing unreachable block (ram,0x02f82710) */
/* WARNING: Removing unreachable block (ram,0x02f828d0) */
/* WARNING: Removing unreachable block (ram,0x02f828dc) */
/* WARNING: Removing unreachable block (ram,0x02f828e0) */
/* WARNING: Removing unreachable block (ram,0x02f828f0) */
/* WARNING: Removing unreachable block (ram,0x02f828f8) */
/* WARNING: Removing unreachable block (ram,0x02f82920) */
/* WARNING: Removing unreachable block (ram,0x02f82904) */
/* WARNING: Removing unreachable block (ram,0x02f82910) */
/* WARNING: Removing unreachable block (ram,0x02f8292c) */
/* WARNING: Removing unreachable block (ram,0x02f82948) */
/* WARNING: Removing unreachable block (ram,0x02f82724) */
/* WARNING: Removing unreachable block (ram,0x02f82728) */
/* WARNING: Removing unreachable block (ram,0x02f828c0) */
/* WARNING: Removing unreachable block (ram,0x02f82734) */
/* WARNING: Removing unreachable block (ram,0x02f82740) */
/* WARNING: Removing unreachable block (ram,0x02f82748) */
/* WARNING: Removing unreachable block (ram,0x02f8297c) */
/* WARNING: Removing unreachable block (ram,0x02f82758) */
/* WARNING: Removing unreachable block (ram,0x02f828cc) */
/* WARNING: Removing unreachable block (ram,0x02f82950) */

uint Core_UI2_PlannedTweenData__CalculateDependencyAnimDuration
               (undefined8 *param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long extraout_x1;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  if ((bRam0000000003ebc621 & 1) == 0) {
    func_0x00f78a20(0x3d1d4a8);
    func_0x00f78a20(0x3d3c530);
    func_0x00f78a20(0x3d40e00);
    func_0x00f78a20(0x3d40e08);
    bRam0000000003ebc621 = 1;
  }
  if ((bRam0000000003ebc622 & 1) == 0) {
    func_0x00f78a20(0x3d1cf90);
    func_0x00f78a20(0x3d1d4a8);
    bRam0000000003ebc622 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar6 = 0;
    do {
      lVar3 = *param_2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == /*System.Collections.Generic.ICollection<PlannedTweenData>_TypeInfo*/ lRam0000000003d1cf90) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x02f82a30;
          }
          piVar5 = piVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(param_2,/*System.Collections.Generic.ICollection<PlannedTweenData>_TypeInfo*/ lRam0000000003d1cf90,0);
code_r0x02f82a30:
      iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
      if (iVar1 <= (int)uVar6) {
        return 0xffffffff;
      }
      lVar3 = *param_2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == /*System.Collections.Generic.IList<PlannedTweenData>_TypeInfo*/ lRam0000000003d1d4a8) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x02f82a90;
          }
          piVar5 = piVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(param_2,/*System.Collections.Generic.IList<PlannedTweenData>_TypeInfo*/ lRam0000000003d1d4a8,0);
code_r0x02f82a90:
      (*(code *)*puVar2)(&uStack_148,param_2,uVar6,puVar2[1]);
      uStack_118 = uStack_140;
      uStack_120 = uStack_148;
      uStack_108 = uStack_130;
      uStack_110 = uStack_138;
      uStack_100 = uStack_128;
      iVar1 = Core_UI2_PlannedTweenData__get_IsValid(&uStack_120);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      lVar3 = *param_2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == /*System.Collections.Generic.IList<PlannedTweenData>_TypeInfo*/ lRam0000000003d1d4a8) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x02f82b10;
          }
          piVar5 = piVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(param_2,/*System.Collections.Generic.IList<PlannedTweenData>_TypeInfo*/ lRam0000000003d1d4a8,0);
code_r0x02f82b10:
      (*(code *)*puVar2)(&uStack_148,param_2,uVar6,puVar2[1]);
      uStack_198 = param_1[1];
      uStack_1a0 = *param_1;
      uStack_188 = param_1[3];
      uStack_190 = param_1[2];
      uStack_180 = param_1[4];
      uStack_168 = uStack_140;
      uStack_170 = uStack_148;
      uStack_158 = uStack_130;
      uStack_160 = uStack_138;
      uStack_150 = uStack_128;
      uVar4 = /*Core.UI2.PlannedTweenData$$op_Equality*/ func_0x02f82c94(&uStack_170,&uStack_1a0);
      if ((uVar4 & 1) != 0) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
    } while( true );
  }
  func_0x00f78af4();
  if ((bRam0000000003ebc623 & 1) == 0) {
    func_0x00f78a20(0x3d3c528);
    func_0x00f78a20(0x3d3c530);
    func_0x00f78a20(0x3d40e00);
    bRam0000000003ebc623 = 1;
  }
  if (extraout_x1 != 0) {
    uVar6 = *(uint *)(extraout_x1 + 0x18);
    if (0 < (int)uVar6) {
      uVar7 = 0;
      do {
        if (uVar6 <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar3 = *(long *)(*(long *)(extraout_x1 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
        if (lVar3 == 0) goto code_r0x02f82c3c;
        if (*(int *)(lVar3 + 0x10) == param_3) {
          return uVar7;
        }
        uVar7 = uVar7 + 1;
        uVar6 = *(uint *)(extraout_x1 + 0x18);
      } while ((int)uVar7 < (int)uVar6);
    }
    return 0xffffffff;
  }
code_r0x02f82c3c:
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003ebc629 & 1) == 0) {
    func_0x00f78a20(0x3d40e00);
    func_0x00f78a20(0x3d40e08);
    bRam0000000003ebc629 = 1;
  }
  return (uint)(*(int *)(lVar3 + 0x10) == *(int *)(lVar3 + 0x14));
}



// ============================================================
// RVA: 0x2f82980 | Core.UI2.PlannedTweenData.TryFindTweenDataIndex
// ============================================================

uint Core_UI2_PlannedTweenData__TryFindTweenDataIndex(undefined8 *param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long extraout_x1;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003ebc622 & 1) == 0) {
    func_0x00f78a20(0x3d1cf90);
    func_0x00f78a20(0x3d1d4a8);
    bRam0000000003ebc622 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar6 = 0;
    do {
      lVar3 = *param_2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == /*System.Collections.Generic.ICollection<PlannedTweenData>_TypeInfo*/ lRam0000000003d1cf90) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02f82a30;
          }
          piVar5 = piVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(param_2,/*System.Collections.Generic.ICollection<PlannedTweenData>_TypeInfo*/ lRam0000000003d1cf90,0);
LAB_02f82a30:
      iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
      if (iVar1 <= (int)uVar6) {
        return 0xffffffff;
      }
      lVar3 = *param_2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == /*System.Collections.Generic.IList<PlannedTweenData>_TypeInfo*/ lRam0000000003d1d4a8) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x02f82a90;
          }
          piVar5 = piVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(param_2,/*System.Collections.Generic.IList<PlannedTweenData>_TypeInfo*/ lRam0000000003d1d4a8,0);
code_r0x02f82a90:
      (*(code *)*puVar2)(&uStack_98,param_2,uVar6,puVar2[1]);
      uStack_68 = uStack_90;
      uStack_70 = uStack_98;
      uStack_58 = uStack_80;
      uStack_60 = uStack_88;
      uStack_50 = uStack_78;
      iVar1 = Core_UI2_PlannedTweenData__get_IsValid(&uStack_70);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      lVar3 = *param_2;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == /*System.Collections.Generic.IList<PlannedTweenData>_TypeInfo*/ lRam0000000003d1d4a8) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto code_r0x02f82b10;
          }
          piVar5 = piVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(param_2,/*System.Collections.Generic.IList<PlannedTweenData>_TypeInfo*/ lRam0000000003d1d4a8,0);
code_r0x02f82b10:
      (*(code *)*puVar2)(&uStack_98,param_2,uVar6,puVar2[1]);
      uStack_e8 = param_1[1];
      uStack_f0 = *param_1;
      uStack_d8 = param_1[3];
      uStack_e0 = param_1[2];
      uStack_d0 = param_1[4];
      uStack_b8 = uStack_90;
      uStack_c0 = uStack_98;
      uStack_a8 = uStack_80;
      uStack_b0 = uStack_88;
      uStack_a0 = uStack_78;
      uVar4 = /*Core.UI2.PlannedTweenData$$op_Equality*/ func_0x02f82c94(&uStack_c0,&uStack_f0);
      if ((uVar4 & 1) != 0) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
    } while( true );
  }
  func_0x00f78af4();
  if ((bRam0000000003ebc623 & 1) == 0) {
    func_0x00f78a20(0x3d3c528);
    func_0x00f78a20(0x3d3c530);
    func_0x00f78a20(0x3d40e00);
    bRam0000000003ebc623 = 1;
  }
  if (extraout_x1 != 0) {
    uVar6 = *(uint *)(extraout_x1 + 0x18);
    if (0 < (int)uVar6) {
      uVar7 = 0;
      do {
        if (uVar6 <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar3 = *(long *)(*(long *)(extraout_x1 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
        if (lVar3 == 0) goto code_r0x02f82c3c;
        if (*(int *)(lVar3 + 0x10) == param_3) {
          return uVar7;
        }
        uVar7 = uVar7 + 1;
        uVar6 = *(uint *)(extraout_x1 + 0x18);
      } while ((int)uVar7 < (int)uVar6);
    }
    return 0xffffffff;
  }
code_r0x02f82c3c:
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003ebc629 & 1) == 0) {
    func_0x00f78a20(0x3d40e00);
    func_0x00f78a20(0x3d40e08);
    bRam0000000003ebc629 = 1;
  }
  return (uint)(*(int *)(lVar3 + 0x10) == *(int *)(lVar3 + 0x14));
}



// ============================================================
// RVA: 0x2f82b84 | Core.UI2.PlannedTweenData.TryFindTweenDepData
// ============================================================

uint Core_UI2_PlannedTweenData__TryFindTweenDepData(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  if ((bRam0000000003ebc623 & 1) == 0) {
    func_0x00f78a20(0x3d3c528);
    func_0x00f78a20(0x3d3c530);
    func_0x00f78a20(0x3d40e00);
    bRam0000000003ebc623 = 1;
  }
  if (param_2 == 0) {
LAB_02f82c3c:
    lVar2 = func_0x00f78af4();
    if ((bRam0000000003ebc629 & 1) == 0) {
      func_0x00f78a20(0x3d40e00);
      func_0x00f78a20(0x3d40e08);
      bRam0000000003ebc629 = 1;
    }
    return (uint)(*(int *)(lVar2 + 0x10) == *(int *)(lVar2 + 0x14));
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      if (uVar1 <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar2 = *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_02f82c3c;
      if (*(int *)(lVar2 + 0x10) == param_3) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      uVar1 = *(uint *)(param_2 + 0x18);
    } while ((int)uVar3 < (int)uVar1);
  }
  return 0xffffffff;
}



// ============================================================
// RVA: 0x2f82c94 | Core.UI2.PlannedTweenData.op_Equality
// ============================================================

ulong Core_UI2_PlannedTweenData__op_Equality(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000003ebc624 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc624 = 1;
  }
  uVar3 = Core_UI2_PlannedTweenData__get_IsValid(param_1);
  if (((uVar3 & 1) == 0) && (iVar1 = Core_UI2_PlannedTweenData__get_IsValid(param_2), iVar1 == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = Core_UI2_PlannedTweenData__get_IsValid(param_1);
    if (((int)uVar3 != 0) &&
       (uVar3 = Core_UI2_PlannedTweenData__get_IsValid(param_2), (int)uVar3 != 0)) {
      lVar5 = *param_1;
      lVar4 = *param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec027b & 1) == 0) {
        func_0x00f78a20(0x3d23990,lVar4,0);
        bRam0000000003ec027b = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ec021b & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003ec021b = 1;
      }
      if (lVar5 == 0 && lVar4 == 0) {
        uVar3 = 1;
      }
      else {
        if (lVar4 == 0) {
          lVar4 = lVar5;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
        }
        else {
          if (lVar5 != 0) {
            return (ulong)(lVar5 == lVar4);
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
        }
        uVar2 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar4);
        uVar3 = (ulong)(uVar2 ^ 1);
      }
      return uVar3;
    }
  }
  return uVar3;
}



// ============================================================
// RVA: 0x2f82d54 | Core.UI2.PlannedTweenData.op_Inequality
// ============================================================

uint Core_UI2_PlannedTweenData__op_Inequality(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  uStack_50 = param_2[4];
  uVar1 = Core_UI2_PlannedTweenData__op_Equality(&uStack_40,&uStack_70);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x2f82d9c | Core.UI2.PlannedTweenData.Equals
// ============================================================

void Core_UI2_PlannedTweenData__Equals(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  uStack_50 = param_2[4];
  Core_UI2_PlannedTweenData__op_Equality(&uStack_40,&uStack_70);
  return;
}



// ============================================================
// RVA: 0x2f82de0 | Core.UI2.PlannedTweenData.Equals
// ============================================================

undefined8 Core_UI2_PlannedTweenData__Equals(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003ebc625 & 1) == 0) {
    func_0x00f78a20(0x3d23c88);
    bRam0000000003ebc625 = 1;
  }
  if ((param_2 == (long *)0x0) || (*param_2 != /*Core.UI2.PlannedTweenData_TypeInfo*/ lRam0000000003d23c88)) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined8 *)func_0x00f78ae4(param_2);
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    uStack_48 = param_1[3];
    uStack_50 = param_1[2];
    uStack_40 = param_1[4];
    uStack_88 = puVar2[1];
    uStack_90 = *puVar2;
    uStack_78 = puVar2[3];
    uStack_80 = puVar2[2];
    uStack_70 = puVar2[4];
    uVar1 = Core_UI2_PlannedTweenData__op_Equality(&uStack_60,&uStack_90);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x2f82e88 | Core.UI2.PlannedTweenData.GetHashCode
// ============================================================

void Core_UI2_PlannedTweenData__GetHashCode(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  iVar1 = Core_UI2_PlannedTweenData__get_IsValid();
  if (iVar1 == 0) {
    return;
  }
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02f82eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160));
    return;
  }
  auVar3 = func_0x00f78af4();
  lVar2 = auVar3._0_8_;
  *(undefined8 *)(lVar2 + 0x10) = *param_3;
  *(long *)(lVar2 + 0x20) = auVar3._8_8_;
  *(undefined8 **)(lVar2 + 0x28) = param_3;
  return;
}



