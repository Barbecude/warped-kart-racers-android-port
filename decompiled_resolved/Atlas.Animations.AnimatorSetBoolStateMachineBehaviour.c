// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Animations.AnimatorSetBoolStateMachineBehaviour

// ============================================================
// RVA: 0x14492bc | Atlas.Animations.AnimatorSetBoolStateMachineBehaviour.Awake
// ============================================================

void Atlas_Animations_AnimatorSetBoolStateMachineBehaviour__Awake(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(*(undefined8 *)(param_1 + 0x20),0);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(*(undefined8 *)(param_1 + 0x30),0);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}



// ============================================================
// RVA: 0x14492f8 | Atlas.Animations.AnimatorSetBoolStateMachineBehaviour.OnStateEnter
// ============================================================

void Atlas_Animations_AnimatorSetBoolStateMachineBehaviour__OnStateEnter(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar5;
  undefined *unaff_x30;
  undefined1 auVar6 [16];
  
  puVar5 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x18) == '\0') {
    return;
  }
  if (param_2 == 0) {
    auVar6 = func_0x00f78af4();
    param_2 = auVar6._8_8_;
    lVar3 = auVar6._0_8_;
    if (*(char *)(lVar3 + 0x29) == '\0') {
      return;
    }
    if (param_2 == 0) {
      uVar4 = func_0x00f78af4();
      if ((bRam0000000003ec0cc7 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ec0cc7 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.Object$$.ctor*/ func_0x032343d4(uVar4,0);
      if (pcRam0000000003ec0cc8 == (code *)0x0) {
        pcRam0000000003ec0cc8 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec0cc8)(uVar4);
      return;
    }
    uVar2 = *(undefined1 *)(lVar3 + 0x38);
    uVar1 = *(undefined4 *)(lVar3 + 0x40);
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x30 = &Atlas_Animations_AnimatorSetBoolStateMachineBehaviour__OnStateExit;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x28);
    uVar1 = *(undefined4 *)(param_1 + 0x3c);
    puVar5 = unaff_x29;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar5;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebe420 == (code *)0x0) {
    pcRam0000000003ebe420 =
         (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebe420)(param_2,uVar1,uVar2);
  return;
}



// ============================================================
// RVA: 0x1449334 | Atlas.Animations.AnimatorSetBoolStateMachineBehaviour.OnStateExit
// ============================================================

void Atlas_Animations_AnimatorSetBoolStateMachineBehaviour__OnStateExit(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x29) == '\0') {
    return;
  }
  if (param_2 != 0) {
    uVar2 = *(undefined1 *)(param_1 + 0x38);
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    if (pcRam0000000003ebe420 == (code *)0x0) {
      pcRam0000000003ebe420 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebe420)(param_2,uVar1,uVar2);
    return;
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(uVar3,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(uVar3);
  return;
}



// ============================================================
// RVA: 0x1449370 | Atlas.Animations.AnimatorSetBoolStateMachineBehaviour..ctor
// ============================================================

void Atlas_Animations_AnimatorSetBoolStateMachineBehaviour___ctor(undefined8 param_1)

{
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(param_1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(param_1);
  return;
}



