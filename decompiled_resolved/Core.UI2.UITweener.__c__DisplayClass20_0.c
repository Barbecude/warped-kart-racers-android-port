// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UITweener.<>c__DisplayClass20_0

// ============================================================
// RVA: 0x2f90790 | Core.UI2.UITweener.<>c__DisplayClass20_0..ctor
// ============================================================

void Core_UI2_UITweener___c__DisplayClass20_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x2f91904 | Core.UI2.UITweener.<>c__DisplayClass20_0.<TryCreateOnCompleteVirtualTween>b__1
// ============================================================

/* WARNING: Possible PIC construction at 0x02f90808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f9080c) */

void Core_UI2_UITweener___c__DisplayClass20_0___TryCreateOnCompleteVirtualTween_b__1(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long lVar12;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  code *pcVar13;
  undefined8 unaff_x22;
  long lVar14;
  undefined8 unaff_x23;
  undefined1 *puVar15;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((bRam0000000003ebc6b0 & 1) == 0) {
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc6b0 = 1;
  }
  lVar12 = *(long *)(param_1 + 0x10);
  if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar15 = &stack0xfffffffffffffff0;
  if ((bRam0000000003ebc6a1 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    bRam0000000003ebc6a1 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 8) == '\0') {
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    if (lVar12 == 0) {
      return;
    }
    unaff_x30 = 0x2f9080c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = lVar12;
    unaff_x20 = 0x3d20bc0;
    unaff_x21 = 0x3ebc000;
    unaff_x29 = puVar15;
  }
  uVar5 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x58) = lVar12;
  lVar7 = *(long *)(lVar12 + 0x68);
  if (lVar7 == 0) {
    puVar15 = (undefined1 *)((long)register0x00000008 + -0x58);
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar7 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    puVar15 = (undefined1 *)(lVar7 + 0x20);
  }
  lVar7 = 0;
  do {
    lVar8 = *(long *)(puVar15 + lVar7 * 8);
    pcVar13 = *(code **)(lVar8 + 0x10);
    plVar1 = *(long **)(lVar8 + 0x20);
    lVar8 = *(long *)(lVar8 + 0x28);
    if (*(short *)(lVar8 + 0x48) == -1) {
      func_0x00f78ad8(lVar8,uVar5);
    }
    iVar3 = func_0x00f78a4c(lVar8);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar8 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar12 + 0x18) == 0))
      goto code_r0x016bb980;
      iVar3 = func_0x00f78a44(lVar8);
      iVar4 = func_0x00f78ec0(lVar8);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar8 + 0x48);
        if (iVar4 == 0) {
          lVar8 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar8 + 0x138))(plVar1,*(undefined8 *)(lVar8 + 0x140));
          uVar5 = extraout_x1_01;
          goto code_r0x016bb98c;
        }
        lVar8 = func_0x00f78a48(lVar8);
        lVar9 = *plVar1;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar6 = (undefined8 *)(lVar9 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x016bba50;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar8,(ulong)uVar2);
code_r0x016bba50:
        pcVar13 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if (iVar4 == 0) {
          uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar8 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar9 = *plVar1;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)(lVar8 + 0x18)) {
                lVar9 = lVar9 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar8 + 0x48)) * 0x10 +
                        0x138;
                goto code_r0x016bba28;
              }
              piVar11 = piVar11 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar9 = func_0x00fac1f0(plVar1);
code_r0x016bba28:
          uVar5 = *(undefined8 *)(lVar9 + 8);
        }
        puVar6 = (undefined8 *)func_0x00f78acc(uVar5,lVar8);
        pcVar13 = (code *)*puVar6;
      }
      (*pcVar13)(plVar1,puVar6);
      uVar5 = extraout_x1_02;
    }
    else if (*(char *)(lVar8 + 0x4a) == '\0') {
      (*pcVar13)(lVar8);
      uVar5 = extraout_x1;
    }
    else {
code_r0x016bb980:
      (*pcVar13)(plVar1,lVar8);
      uVar5 = extraout_x1_00;
    }
code_r0x016bb98c:
    lVar7 = lVar7 + 1;
    if (lVar7 == lVar14) {
      return;
    }
  } while( true );
}



