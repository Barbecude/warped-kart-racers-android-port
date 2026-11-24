// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.ApplicationBehaviour.<Start>d__66

// ============================================================
// RVA: 0x15331ac | Atlas.ApplicationBehaviour.<Start>d__66..ctor
// ============================================================

void Atlas_ApplicationBehaviour__Start_d__66___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15331d8 | Atlas.ApplicationBehaviour.<Start>d__66.System.IDisposable.Dispose
// ============================================================

void Atlas_ApplicationBehaviour__Start_d__66__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x15331dc | Atlas.ApplicationBehaviour.<Start>d__66.MoveNext
// ============================================================

undefined8 Atlas_ApplicationBehaviour__Start_d__66__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  
  if ((bRam0000000003eb4eb4 & 1) == 0) {
    func_0x00f78a20(0x3d22300);
    bRam0000000003eb4eb4 = 1;
  }
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    uVar5 = 0xffffffff;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x20);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar9 == 0) goto LAB_01533358;
      uVar2 = Atlas_ApplicationBehaviour__StartGame(lVar9,0);
      uVar5 = 2;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      plVar3 = (long *)/*Debug$$get_unityLogger*/ func_0x0162eca0(0);
      uVar2 = 0;
      if (plVar3 == (long *)0x0) {
LAB_01533358:
        lVar9 = func_0x00f78af4(uVar2);
        return *(undefined8 *)(lVar9 + 0x18);
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_015332c8;
          }
          piVar8 = piVar8 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,3);
LAB_015332c8:
      (*(code *)*puVar4)(plVar3,0,puVar4[1]);
      /*UnityEngine.Application$$SetStackTraceLogType*/ func_0x032188c0(1,0,0);
      /*UnityEngine.Application$$SetStackTraceLogType*/ func_0x032188c0(0,0,0);
      /*UnityEngine.Application$$SetStackTraceLogType*/ func_0x032188c0(4,0,0);
      /*UnityEngine.Application$$SetStackTraceLogType*/ func_0x032188c0(3,0,0);
      uVar2 = /*UnityEngine.Application$$SetStackTraceLogType*/ func_0x032188c0(2,0,0);
      if (lVar9 == 0) goto LAB_01533358;
      uVar2 = Atlas_ApplicationBehaviour__Init(lVar9,0);
      uVar5 = 1;
    }
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  return uVar2;
}



// ============================================================
// RVA: 0x153335c | Atlas.ApplicationBehaviour.<Start>d__66.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__Start_d__66__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1533364 | Atlas.ApplicationBehaviour.<Start>d__66.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_ApplicationBehaviour__Start_d__66__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d61fe8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x15333a4 | Atlas.ApplicationBehaviour.<Start>d__66.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__Start_d__66__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



