// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Input.InputDependentBehaviour

// ============================================================
// RVA: 0x1648148 | Core.Input.InputDependentBehaviour.get_ShowForKeyboard
// ============================================================

undefined1 Core_Input_InputDependentBehaviour__get_ShowForKeyboard(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1648150 | Core.Input.InputDependentBehaviour.get_ShowForController
// ============================================================

undefined1 Core_Input_InputDependentBehaviour__get_ShowForController(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



// ============================================================
// RVA: 0x1648158 | Core.Input.InputDependentBehaviour.get_ShowForTouchOnly
// ============================================================

undefined1 Core_Input_InputDependentBehaviour__get_ShowForTouchOnly(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



// ============================================================
// RVA: 0x1648160 | Core.Input.InputDependentBehaviour.Awake
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x16482b0 | Core.Input.InputDependentBehaviour.OnDestroy
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x16483c0 | Core.Input.InputDependentBehaviour.OnInputFamilyChanged
// ============================================================

ulong Core_Input_InputDependentBehaviour__OnInputFamilyChanged(long param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if ((bRam0000000003eb5771 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5771 = 1;
  }
  pcVar1 = (char *)(param_1 + 0x1a);
  if (param_2 == 2) {
    pcVar1 = (char *)(param_1 + 0x18);
  }
  if (param_2 - 3U < 4) {
    pcVar1 = (char *)(param_1 + 0x19);
  }
  cVar2 = *pcVar1;
  uVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
  if ((int)uVar5 != 0) {
    lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
    if (lVar6 != 0) {
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*pcRam0000000003ebf4c0)(lVar6,cVar2 != '\0');
      return uVar5;
    }
    iVar3 = func_0x00f78af4();
    return (ulong)(iVar3 - 3U < 4);
  }
  return uVar5;
}



// ============================================================
// RVA: 0x16484b8 | Core.Input.InputDependentBehaviour..ctor
// ============================================================

undefined1  [16] Core_Input_InputDependentBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



