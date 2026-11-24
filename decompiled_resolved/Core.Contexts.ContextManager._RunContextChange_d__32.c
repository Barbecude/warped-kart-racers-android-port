// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Contexts.ContextManager.<RunContextChange>d__32

// ============================================================
// RVA: 0x163d718 | Core.Contexts.ContextManager.<RunContextChange>d__32..ctor
// ============================================================

void Core_Contexts_ContextManager__RunContextChange_d__32___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x163df00 | Core.Contexts.ContextManager.<RunContextChange>d__32.System.IDisposable.Dispose
// ============================================================

void Core_Contexts_ContextManager__RunContextChange_d__32__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x163df04 | Core.Contexts.ContextManager.<RunContextChange>d__32.MoveNext
// ============================================================

undefined8 Core_Contexts_ContextManager__RunContextChange_d__32__MoveNext(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((bRam0000000003eb56fe & 1) == 0) {
    func_0x00f78a20(0x3d22018);
    func_0x00f78a20(0x3d25a58);
    bRam0000000003eb56fe = 1;
  }
  if (6 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) {
code_r0x0163e218:
      lVar7 = func_0x00f78af4();
      return *(undefined8 *)(lVar7 + 0x18);
    }
    if (*(long *)(lVar7 + 0x68) != 0) {
      uVar8 = func_0x00f78aec(/*UnityEngine.WaitForEndOfFrame_TypeInfo*/ uRam0000000003d25a58);
      /*UnityEngine.WaitForEndOfFrame$$.ctor*/ func_0x0327dcb8(uVar8,0);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    *(undefined1 *)(lVar7 + 0x51) = 0;
    goto code_r0x0163e118;
  default:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) goto code_r0x0163e218;
    iVar1 = Core_Contexts_ContextManager__CanProgress(lVar7);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar4 = 2;
    }
    else {
      *(undefined1 *)(lVar7 + 0x51) = 0;
      plVar9 = *(long **)(lVar7 + 0x68);
      if (plVar9 == (long *)0x0) goto code_r0x0163e218;
      lVar7 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == /*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar6 + 7) * 0x10 + 0x138);
            goto code_r0x0163e18c;
          }
          piVar6 = piVar6 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(plVar9,/*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018,7);
code_r0x0163e18c:
      uVar8 = (*(code *)*puVar2)(plVar9,puVar2[1]);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      uVar4 = 3;
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) goto code_r0x0163e218;
code_r0x0163e118:
    *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar7 + 0x40);
    *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(lVar7 + 0x48);
    lVar3 = Core_Contexts_ContextManager__GetContext(lVar7);
    *(long *)(lVar7 + 0x68) = lVar3;
    if (lVar3 == 0) {
code_r0x0163e158:
      *(undefined8 *)(lVar7 + 0x60) = 0;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined1 *)(lVar7 + 0x50) = 0;
      if (*(long *)(lVar7 + 0x10) != 0) {
        /*System.Action$$Invoke*/ func_0x02924c90(*(long *)(lVar7 + 0x10),0);
        return 0;
      }
      return 0;
    }
    uVar8 = func_0x00f78aec(/*UnityEngine.WaitForEndOfFrame_TypeInfo*/ uRam0000000003d25a58);
    /*UnityEngine.WaitForEndOfFrame$$.ctor*/ func_0x0327dcb8(uVar8,0);
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    uVar4 = 4;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar7 == 0) || (plVar9 = *(long **)(lVar7 + 0x68), plVar9 == (long *)0x0))
    goto code_r0x0163e218;
    uVar10 = *(undefined8 *)(lVar7 + 0x38);
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    lVar7 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == /*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto code_r0x0163e1b4;
        }
        piVar6 = piVar6 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar9,/*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018,1);
code_r0x0163e1b4:
    uVar8 = (*(code *)*puVar2)(plVar9,uVar10,uVar8,puVar2[1]);
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    uVar4 = 5;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar7 == 0) || (plVar9 = *(long **)(lVar7 + 0x68), plVar9 == (long *)0x0))
    goto code_r0x0163e218;
    uVar10 = *(undefined8 *)(lVar7 + 0x38);
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    lVar7 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == /*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto code_r0x0163e1e4;
        }
        piVar6 = piVar6 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar9,/*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018,2);
code_r0x0163e1e4:
    uVar8 = (*(code *)*puVar2)(plVar9,uVar10,uVar8,puVar2[1]);
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    uVar4 = 6;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) goto code_r0x0163e218;
    *(undefined1 *)(lVar7 + 0x51) = 1;
    goto code_r0x0163e158;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return 1;
}



// ============================================================
// RVA: 0x163e21c | Core.Contexts.ContextManager.<RunContextChange>d__32.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Contexts_ContextManager__RunContextChange_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x163e224 | Core.Contexts.ContextManager.<RunContextChange>d__32.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_Contexts_ContextManager__RunContextChange_d__32__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62548);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x163e264 | Core.Contexts.ContextManager.<RunContextChange>d__32.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Contexts_ContextManager__RunContextChange_d__32__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



