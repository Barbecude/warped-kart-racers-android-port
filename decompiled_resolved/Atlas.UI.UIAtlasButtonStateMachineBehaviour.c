// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIAtlasButtonStateMachineBehaviour

// ============================================================
// RVA: 0x151632c | Atlas.UI.UIAtlasButtonStateMachineBehaviour.OnStateEnter
// ============================================================

void Atlas_UI_UIAtlasButtonStateMachineBehaviour__OnStateEnter
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000003eb4db0 & 1) == 0) {
    func_0x00f78a20(0x3d415f0);
    bRam0000000003eb4db0 = 1;
  }
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  uStack_80 = *(undefined4 *)(param_3 + 4);
  /*UnityEngine.StateMachineBehaviour$$OnStateEnter*/ func_0x03214cbc(param_1,param_2,&uStack_a0,param_4,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    uStack_68 = param_3[1];
    uStack_70 = *param_3;
    uStack_58 = param_3[3];
    uStack_60 = param_3[2];
    uStack_50 = *(undefined4 *)(param_3 + 4);
    /*UnityEngine.Events.UnityAction<object, AnimatorStateInfo>$$Invoke*/ func_0x01b80780(*(long *)(param_1 + 0x18),param_2,&uStack_70,uRam0000000003d415f0);
  }
  return;
}



// ============================================================
// RVA: 0x15163e4 | Atlas.UI.UIAtlasButtonStateMachineBehaviour.OnStateExit
// ============================================================

void Atlas_UI_UIAtlasButtonStateMachineBehaviour__OnStateExit
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000003eb4db1 & 1) == 0) {
    func_0x00f78a20(0x3d415f0);
    bRam0000000003eb4db1 = 1;
  }
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  uStack_80 = *(undefined4 *)(param_3 + 4);
  /*UnityEngine.StateMachineBehaviour$$OnStateExit*/ func_0x03214cc4(param_1,param_2,&uStack_a0,param_4,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    uStack_68 = param_3[1];
    uStack_70 = *param_3;
    uStack_58 = param_3[3];
    uStack_60 = param_3[2];
    uStack_50 = *(undefined4 *)(param_3 + 4);
    /*UnityEngine.Events.UnityAction<object, AnimatorStateInfo>$$Invoke*/ func_0x01b80780(*(long *)(param_1 + 0x20),param_2,&uStack_70,uRam0000000003d415f0);
  }
  return;
}



// ============================================================
// RVA: 0x151649c | Atlas.UI.UIAtlasButtonStateMachineBehaviour..ctor
// ============================================================

void Atlas_UI_UIAtlasButtonStateMachineBehaviour___ctor(undefined8 param_1)

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



