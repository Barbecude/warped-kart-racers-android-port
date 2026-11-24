// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maths.ConvexHull

// ============================================================
// RVA: 0x1572f0c | Atlas.Maths.ConvexHull.Calculate
// ============================================================

ulong Atlas_Maths_ConvexHull__Calculate
                (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,float param_5,
                float param_6,long param_7)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  int extraout_w1;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  float fVar12;
  float fVar13;
  float fVar15;
  ulong uVar14;
  undefined8 uVar16;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb504d & 1) == 0) {
    func_0x00f78a20(0x3d2cf28);
    func_0x00f78a20(0x3d1b968);
    func_0x00f78a20(0x3d33210);
    func_0x00f78a20(0x3d33218);
    func_0x00f78a20(0x3d33220);
    func_0x00f78a20(0x3d3cae8);
    func_0x00f78a20(0x3d3caf0);
    func_0x00f78a20(0x3d3caf8);
    func_0x00f78a20(0x3d3cb00);
    func_0x00f78a20(0x3d3cae0);
    func_0x00f78a20(0x3d3cb08);
    func_0x00f78a20(0x3d3cb10);
    func_0x00f78a20(0x3d1e028);
    func_0x00f78a20(0x3d62558);
    func_0x00f78a20(0x3d26d90);
    bRam0000000003eb504d = 1;
  }
  if (param_7 == 0) goto LAB_015732f4;
  if (*(int *)(param_7 + 0x18) == 0) {
    uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<float2>_TypeInfo*/ uRam0000000003d1e028);
    /*System.Collections.Generic.List<float2>$$.ctor*/ func_0x02498ef8(uVar8,uRam0000000003d3cae0);
    return uVar8;
  }
  if (((*(ushort *)(/*Atlas.Maths.ConvexHull.<>c_TypeInfo*/ lRam0000000003d26d90 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Maths.ConvexHull.<>c_TypeInfo*/ lRam0000000003d26d90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar6 = *(undefined8 **)(/*Atlas.Maths.ConvexHull.<>c_TypeInfo*/ lRam0000000003d26d90 + 0xb8);
  lVar9 = puVar6[1];
  if (lVar9 == 0) {
    if (((*(ushort *)(/*Atlas.Maths.ConvexHull.<>c_TypeInfo*/ lRam0000000003d26d90 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Maths.ConvexHull.<>c_TypeInfo*/ lRam0000000003d26d90 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar6 = *(undefined8 **)(/*Atlas.Maths.ConvexHull.<>c_TypeInfo*/ lRam0000000003d26d90 + 0xb8);
    }
    uVar11 = *puVar6;
    lVar9 = func_0x00f78aec(/*System.Comparison<float2>_TypeInfo*/ uRam0000000003d1b968);
    /*System.Comparison<float2>$$.ctor*/ func_0x01dbe8c0(lVar9,uVar11,uRam0000000003d62558,uRam0000000003d2cf28);
    *(long *)(*(long *)(/*Atlas.Maths.ConvexHull.<>c_TypeInfo*/ lRam0000000003d26d90 + 0xb8) + 8) = lVar9;
  }
  unaff_x23 = (undefined8 *)0x3d3cae8;
  unaff_x22 = (undefined8 *)0x3d3caf8;
  unaff_x24 = (undefined8 *)0x3d33210;
  /*System.Collections.Generic.List<float2>$$Sort*/ func_0x0249b7f4(param_7,lVar9,uRam0000000003d3cb00);
  uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<float2>_TypeInfo*/ uRam0000000003d1e028);
  /*System.Collections.Generic.List<float2>$$.ctor*/ func_0x02498ef8(uVar8,uRam0000000003d3cae0);
  /*System.Collections.Generic.List<float2>$$GetEnumerator*/ func_0x0249a6c0(&uStack_a8,param_7,uRam0000000003d3caf0);
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  uStack_80 = uStack_98;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<float2>$$MoveNext*/ func_0x01f779c4(&uStack_90,uRam0000000003d33218), uVar14 = uStack_80,
        (uVar3 & 1) != 0) {
    if (uVar8 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x15732f4);
      (*pcVar2)();
    }
    while( true ) {
      iVar7 = *(int *)(uVar8 + 0x18);
      if (iVar7 < 2) break;
      lVar9 = *(long *)(uVar8 + 0x10) + 0x20;
      uVar11 = *(undefined8 *)(lVar9 + (ulong)(iVar7 - 2) * 8);
      uVar16 = *(undefined8 *)(lVar9 + (ulong)(iVar7 - 1) * 8);
      fVar12 = (float)uVar11;
      fVar15 = (float)((ulong)uVar11 >> 0x20);
      uVar11 = NEON_rev64(CONCAT44((float)(uVar14 >> 0x20) - fVar15,(float)uVar14 - fVar12),4);
      param_3 = uVar14;
      if ((float)((ulong)uVar11 >> 0x20) * ((float)((ulong)uVar16 >> 0x20) - fVar15) <
          (float)uVar11 * ((float)uVar16 - fVar12)) break;
      /*System.Collections.Generic.List<float2>$$RemoveAt*/ func_0x0249b410(uVar8,(ulong)(iVar7 - 1),uRam0000000003d3caf8);
    }
    param_2 = uVar14 >> 0x20;
    /*System.Collections.Generic.List<float2>$$Add*/ func_0x02499bb0(uVar8,uRam0000000003d3cae8);
  }
  /*System.Collections.Generic.List.Enumerator<float2>$$Dispose*/ func_0x01f779c0(&uStack_90,uRam0000000003d33210);
  while (uVar8 == 0) {
LAB_015732f4:
    func_0x00f78af4();
    fVar12 = (float)param_2;
    fVar15 = (float)param_3;
    if (extraout_w1 != 1) goto code_r0x01573334;
    plVar4 = (long *)___cxa_begin_catch();
    lVar9 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<float2>$$Dispose*/ func_0x01f779c0(&uStack_90,*unaff_x24);
    fVar12 = (float)param_2;
    fVar15 = (float)param_3;
    if (lVar9 != 0) {
      func_0x00f78ac0(lVar9,0);
code_r0x01573334:
      fVar13 = (float)__Unwind_Resume();
      return (ulong)((param_4 - fVar12) * (param_5 - fVar13) <
                    (fVar15 - fVar13) * (param_6 - fVar12));
    }
  }
  iVar7 = *(int *)(uVar8 + 0x18);
  uVar5 = *(uint *)(param_7 + 0x18);
  uVar10 = uVar5 - 1;
  if (-1 < (int)uVar10) {
    do {
      if (uVar5 <= uVar10) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar14 = *(ulong *)(*(long *)(param_7 + 0x10) + (ulong)uVar10 * 8 + 0x20);
      while (uVar5 = *(uint *)(uVar8 + 0x18), iVar7 + 1 <= (int)uVar5) {
        iVar1 = uVar5 - 2;
        if (uVar5 < 2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar5 = *(uint *)(uVar8 + 0x18);
        }
        lVar9 = *(long *)(uVar8 + 0x10);
        uVar11 = *(undefined8 *)(lVar9 + (long)iVar1 * 8 + 0x20);
        if (uVar5 == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar9 = *(long *)(uVar8 + 0x10);
        }
        fVar12 = (float)uVar11;
        fVar15 = (float)((ulong)uVar11 >> 0x20);
        uVar11 = NEON_rev64(CONCAT44((float)(uVar14 >> 0x20) - fVar15,(float)uVar14 - fVar12),4);
        uVar16 = *(undefined8 *)(lVar9 + (long)(int)(uVar5 - 1) * 8 + 0x20);
        if ((float)((ulong)uVar11 >> 0x20) * ((float)((ulong)uVar16 >> 0x20) - fVar15) <
            (float)uVar11 * ((float)uVar16 - fVar12)) break;
        /*System.Collections.Generic.List<float2>$$RemoveAt*/ func_0x0249b410(uVar8,*(int *)(uVar8 + 0x18) + -1,*unaff_x22);
      }
      /*System.Collections.Generic.List<float2>$$Add*/ func_0x02499bb0(uVar14,uVar14 >> 0x20,uVar8,*unaff_x23);
      uVar10 = uVar10 - 1;
      if ((int)uVar10 < 0) goto code_r0x01573294;
      uVar5 = *(uint *)(param_7 + 0x18);
    } while( true );
  }
code_r0x01573298:
  /*System.Collections.Generic.List<float2>$$RemoveAt*/ func_0x0249b410(uVar8,iVar7 + -1,*unaff_x22);
  return uVar8;
code_r0x01573294:
  iVar7 = *(int *)(uVar8 + 0x18);
  goto code_r0x01573298;
}



// ============================================================
// RVA: 0x1573338 | Atlas.Maths.ConvexHull.Ccw
// ============================================================

bool Atlas_Maths_ConvexHull__Ccw
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  return (param_4 - param_2) * (param_5 - param_1) < (param_3 - param_1) * (param_6 - param_2);
}



// ============================================================
// RVA: 0x157335c | Atlas.Maths.ConvexHull..ctor
// ============================================================

void Atlas_Maths_ConvexHull___ctor(void)

{
  return;
}



