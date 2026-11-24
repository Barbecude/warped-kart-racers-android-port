// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.DecalInstanceBehaviour

// ============================================================
// RVA: 0x1580320 | Atlas.Geometry.DecalInstanceBehaviour.get_SpriteIndex
// ============================================================

undefined4 Atlas_Geometry_DecalInstanceBehaviour__get_SpriteIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1580328 | Atlas.Geometry.DecalInstanceBehaviour.get_Offset
// ============================================================

undefined4 Atlas_Geometry_DecalInstanceBehaviour__get_Offset(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// ============================================================
// RVA: 0x1580330 | Atlas.Geometry.DecalInstanceBehaviour.Awake
// ============================================================

void Atlas_Geometry_DecalInstanceBehaviour__Awake(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb50a8 & 1) == 0) {
    func_0x00f78a20(0x3d6c080);
    bRam0000000003eb50a8 = 1;
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
// RVA: 0x1580388 | Atlas.Geometry.DecalInstanceBehaviour.OnDrawGizmosSelected
// ============================================================

long Atlas_Geometry_DecalInstanceBehaviour__OnDrawGizmosSelected(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uStack_70 = 0;
  uStack_68 = 0;
  /*UnityEngine.Color$$.ctor*/ func_0x03222f84(0x3f800000,0x3f800000,0,0x3f000000,&uStack_70,0);
  uVar7 = (undefined4)(uStack_70 >> 0x20);
  uVar8 = (undefined4)uStack_68;
  uVar9 = uStack_68._4_4_;
  /*UnityEngine.Gizmos$$set_color*/ func_0x0322fbcc(uStack_70 & 0xffffffff,uStack_70 >> 0x20,(undefined4)uStack_68,uStack_68._4_4_,0);
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if (lVar2 != 0) {
    uVar3 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0);
    uVar5 = uVar8;
    uVar6 = uVar7;
    lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    if (lVar2 != 0) {
      uVar4 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar2,0);
      lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
      if (lVar2 != 0) {
        /*UnityEngine.Transform$$get_lossyScale*/ func_0x032772bc(lVar2,0);
        /*UnityEngine.Matrix4x4$$TRS*/ func_0x0323d950(&uStack_b0,uVar3,uVar7,uVar8,uVar4,uVar6,uVar5,uVar9,0);
        uStack_e8 = uStack_a8;
        uStack_f0 = uStack_b0;
        uStack_d8 = uStack_98;
        uStack_e0 = uStack_a0;
        uStack_c8 = uStack_88;
        uStack_d0 = uStack_90;
        uStack_b8 = uStack_78;
        uStack_c0 = uStack_80;
        /*UnityEngine.Gizmos$$set_matrix*/ func_0x0322fc5c(&uStack_f0,0);
        uVar3 = (undefined4)uStack_80;
        uVar5 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        uVar9 = uVar8;
        uVar7 = uVar3;
        uVar6 = /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
        /*UnityEngine.Gizmos$$DrawCube*/ func_0x0322fa44(uVar5,uVar3,uVar8,uVar6,uVar7,uVar9,0);
        /*UnityEngine.Matrix4x4$$get_identity*/ func_0x0323e808(&uStack_130,0);
        uStack_168 = uStack_128;
        uStack_170 = uStack_130;
        uStack_158 = uStack_118;
        uStack_160 = uStack_120;
        uStack_148 = uStack_108;
        uStack_150 = uStack_110;
        uStack_138 = uStack_f8;
        uStack_140 = uStack_100;
        lVar2 = /*UnityEngine.Gizmos$$set_matrix*/ func_0x0322fc5c(&uStack_170,0);
        return lVar2;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4d72 & 1) == 0) {
    func_0x00f78a20(0x3d3dce0,0);
    func_0x00f78a20(0x3d1e398);
    bRam0000000003eb4d72 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>_TypeInfo*/ uRam0000000003d1e398);
  /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$.ctor*/ func_0x025b4e4c(uVar1,uRam0000000003d3dce0);
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1580514 | Atlas.Geometry.DecalInstanceBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Geometry_DecalInstanceBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4d72 & 1) == 0) {
    func_0x00f78a20(0x3d3dce0,0);
    func_0x00f78a20(0x3d1e398);
    bRam0000000003eb4d72 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>_TypeInfo*/ uRam0000000003d1e398);
  /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$.ctor*/ func_0x025b4e4c(uVar1,uRam0000000003d3dce0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



