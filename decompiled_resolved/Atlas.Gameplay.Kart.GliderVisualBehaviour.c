// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.GliderVisualBehaviour

// ============================================================
// RVA: 0x15b3ad8 | Atlas.Gameplay.Kart.GliderVisualBehaviour.get_ShouldGliderBeVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x015b3bb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b3bb4) */
/* WARNING: Removing unreachable block (ram,0x015b3bbc) */

ulong Atlas_Gameplay_Kart_GliderVisualBehaviour__get_ShouldGliderBeVisible(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((bRam0000000003eb526c & 1) == 0) {
    func_0x00f78a20(0x3d21bb8);
    bRam0000000003eb526c = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_78,*(long *)(param_1 + 0x18),0,0);
    uStack_48 = uStack_70;
    uStack_50 = uStack_78;
    uStack_38 = uStack_60;
    uStack_40 = uStack_68;
    uStack_30 = uStack_58;
    iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_50,0);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.GliderVisualBehaviour_TypeInfo*/ lRam0000000003d21bb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.GliderVisualBehaviour_TypeInfo*/ lRam0000000003d21bb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar1 != **(int **)(/*Atlas.Gameplay.Kart.GliderVisualBehaviour_TypeInfo*/ lRam0000000003d21bb8 + 0xb8));
  }
  auVar4 = func_0x00f78af4();
  lVar2 = *(long *)(auVar4._0_8_ + 0x20);
  if (lVar2 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000003ebf4c0)(lVar2,auVar4._8_8_);
    return uVar3;
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb526d & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb526d = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar3;
}



// ============================================================
// RVA: 0x15b3b90 | Atlas.Gameplay.Kart.GliderVisualBehaviour.SetTrailsEnabled
// ============================================================

/* WARNING: Possible PIC construction at 0x015b3bb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b3bb4) */
/* WARNING: Removing unreachable block (ram,0x015b3bbc) */

undefined1  [16]
Atlas_Gameplay_Kart_GliderVisualBehaviour__SetTrailsEnabled(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (*pcRam0000000003ebf4c0)(lVar1,param_2);
    return auVar2;
  }
  auVar2._0_8_ = func_0x00f78af4();
  if ((bRam0000000003eb526d & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb526d = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  return auVar2;
}



// ============================================================
// RVA: 0x15b3bd4 | Atlas.Gameplay.Kart.GliderVisualBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_GliderVisualBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb526d & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb526d = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
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



// ============================================================
// RVA: 0x15b3c40 | Atlas.Gameplay.Kart.GliderVisualBehaviour..cctor
// ============================================================

void Atlas_Gameplay_Kart_GliderVisualBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb526e & 1) == 0) {
    func_0x00f78a20(0x3d21bb8);
    func_0x00f78a20(0x3d6d460);
    bRam0000000003eb526e = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Glider_Off')*/ uRam0000000003d6d460,0);
  **(undefined4 **)(/*Atlas.Gameplay.Kart.GliderVisualBehaviour_TypeInfo*/ lRam0000000003d21bb8 + 0xb8) = uVar1;
  return;
}



