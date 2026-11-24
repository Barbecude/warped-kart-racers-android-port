// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Contexts.ContextManager.<DeInit>d__25

// ============================================================
// RVA: 0x163d08c | Core.Contexts.ContextManager.<DeInit>d__25..ctor
// ============================================================

void Core_Contexts_ContextManager__DeInit_d__25___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x163dda8 | Core.Contexts.ContextManager.<DeInit>d__25.System.IDisposable.Dispose
// ============================================================

void Core_Contexts_ContextManager__DeInit_d__25__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x163ddac | Core.Contexts.ContextManager.<DeInit>d__25.MoveNext
// ============================================================

undefined8 Core_Contexts_ContextManager__DeInit_d__25__MoveNext(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam0000000003eb56fd & 1) == 0) {
    func_0x00f78a20(0x3d22018);
    bRam0000000003eb56fd = 1;
  }
  uVar3 = 0xffffffff;
  if (*(uint *)(param_1 + 0x10) < 2) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
LAB_0163deac:
      lVar4 = func_0x00f78af4();
      return *(undefined8 *)(lVar4 + 0x18);
    }
    uVar3 = 1;
    if (*(char *)(lVar4 + 0x50) == '\0') {
      *(undefined2 *)(lVar4 + 0x50) = 1;
      plVar7 = *(long **)(lVar4 + 0x68);
      if (plVar7 == (long *)0x0) goto LAB_0163deac;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == /*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
            goto code_r0x0163de80;
          }
          piVar6 = piVar6 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018,7);
code_r0x0163de80:
      uVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      uVar3 = 2;
    }
    else {
      uVar1 = 0;
    }
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0x10) != 2) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return uVar1;
}



// ============================================================
// RVA: 0x163deb0 | Core.Contexts.ContextManager.<DeInit>d__25.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Contexts_ContextManager__DeInit_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x163deb8 | Core.Contexts.ContextManager.<DeInit>d__25.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Core_Contexts_ContextManager__DeInit_d__25__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62540);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x163def8 | Core.Contexts.ContextManager.<DeInit>d__25.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Contexts_ContextManager__DeInit_d__25__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



