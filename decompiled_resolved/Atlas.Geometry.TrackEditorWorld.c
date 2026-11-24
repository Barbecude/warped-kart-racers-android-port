// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.TrackEditorWorld

// ============================================================
// RVA: 0x151193c | Atlas.Geometry.TrackEditorWorld.Awake
// ============================================================

void Atlas_Geometry_TrackEditorWorld__Awake(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4d76 & 1) == 0) {
    func_0x00f78a20(0x3d6c080);
    bRam0000000003eb4d76 = 1;
  }
  uVar1 = /*STR('EditorOnly')*/ uRam0000000003d6c080;
  if (pcRam0000000003ebf190 == (code *)0x0) {
    pcRam0000000003ebf190 =
         (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()",/*STR('EditorOnly')*/ uRam0000000003d6c080,0);
  }
  lVar2 = (*pcRam0000000003ebf190)(param_1);
  if (lVar2 != 0) {
    if (pcRam0000000003ebf500 == (code *)0x0) {
      pcRam0000000003ebf500 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::set_tag(System.String)");
    }
                    /* WARNING: Could not recover jumptable at 0x03227e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf500)(lVar2,uVar1);
    return;
  }
  auVar3 = func_0x00f78af4();
  if (pcRam0000000003ebf500 == (code *)0x0) {
    pcRam0000000003ebf500 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::set_tag(System.String)");
  }
                    /* WARNING: Could not recover jumptable at 0x03227ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebf500)(auVar3._0_8_,auVar3._8_8_);
  return;
}



// ============================================================
// RVA: 0x1511994 | Atlas.Geometry.TrackEditorWorld..ctor
// ============================================================

undefined1  [16] Atlas_Geometry_TrackEditorWorld___ctor(ulong param_1)

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



