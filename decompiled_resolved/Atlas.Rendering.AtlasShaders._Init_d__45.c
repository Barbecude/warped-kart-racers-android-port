// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.AtlasShaders.<Init>d__45

// ============================================================
// RVA: 0x1546c94 | Atlas.Rendering.AtlasShaders.<Init>d__45..ctor
// ============================================================

void Atlas_Rendering_AtlasShaders__Init_d__45___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1546cc0 | Atlas.Rendering.AtlasShaders.<Init>d__45.System.IDisposable.Dispose
// ============================================================

void Atlas_Rendering_AtlasShaders__Init_d__45__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1546cc4 | Atlas.Rendering.AtlasShaders.<Init>d__45.MoveNext
// ============================================================

ulong Atlas_Rendering_AtlasShaders__Init_d__45__MoveNext(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000003eb4f65 & 1) == 0) {
    func_0x00f78a20(0x3d51bc8);
    func_0x00f78a20(0x3d52480);
    func_0x00f78a20(0x3d55e88);
    func_0x00f78a20(0x3d55ef8);
    func_0x00f78a20(0x3d35940);
    func_0x00f78a20(0x3d1cc00);
    func_0x00f78a20(0x3d3be28);
    func_0x00f78a20(0x3d3be20);
    func_0x00f78a20(0x3d1dde0);
    func_0x00f78a20(0x3d3f490);
    func_0x00f78a20(0x3d1e5f8);
    func_0x00f78a20(0x3d62220);
    func_0x00f78a20(0x3d26a38);
    func_0x00f78a20(0x3d6ba50);
    func_0x00f78a20(0x3d72828);
    bRam0000000003eb4f65 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 != 0) {
      lVar4 = *(long *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(lVar6 + 0x10) = lVar4;
      *(undefined8 *)(lVar6 + 0x18) = uVar3;
      if (lVar4 != 0) {
        uVar2 = /*Core.Assets.AssetManager$$RequestMultipleAssets*/ func_0x016360bc(lVar4,/*STR('Shader')*/ uRam0000000003d72828,/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
        *(undefined4 *)(lVar6 + 0x20) = uVar2;
        if (*(long *)(lVar6 + 0x10) != 0) {
          uVar3 = /*Core.Assets.AssetManager$$WaitForAsset*/ func_0x01636f40(*(long *)(lVar6 + 0x10),uVar2,0);
          *(undefined8 *)(param_1 + 0x18) = uVar3;
          *(undefined4 *)(param_1 + 0x10) = 1;
          goto LAB_01546f98;
        }
      }
    }
  }
  else {
    if (iVar1 != 1) {
LAB_01546f98:
      return (ulong)(iVar1 == 0);
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
      uVar3 = /*Core.Assets.AssetManager$$GetLoadedMultipleAssets<Shader>*/ func_0x018186e4(*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x20),
                              uRam0000000003d51bc8);
      lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<Shader>_TypeInfo*/ uRam0000000003d1dde0);
      /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(lVar4,uVar3,uRam0000000003d3be20);
      *(long *)(lVar6 + 0x28) = lVar4;
      uVar3 = func_0x00f78aec(/*System.Func<Shader, bool>_TypeInfo*/ uRam0000000003d1cc00);
      /*System.Func<PlayerEditorConnectionEvents.MessageTypeSubscribers, bool>$$.ctor*/ func_0x02177f48(uVar3,lVar6,uRam0000000003d52480,uRam0000000003d35940);
      uVar3 = /*System.Linq.Enumerable$$Where<PlayerEditorConnectionEvents.MessageTypeSubscribers>*/ func_0x01855240(lVar4,uVar3,uRam0000000003d55ef8);
      uVar3 = /*System.Linq.Enumerable$$ToList<VolumeParameter>*/ func_0x01854f28(uVar3,uRam0000000003d55e88);
      *(undefined8 *)(lVar6 + 0x30) = uVar3;
      if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders.<>c_TypeInfo*/ lRam0000000003d26a38 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Rendering.AtlasShaders.<>c_TypeInfo*/ lRam0000000003d26a38 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar5 = *(undefined8 **)(/*Atlas.Rendering.AtlasShaders.<>c_TypeInfo*/ lRam0000000003d26a38 + 0xb8);
      lVar7 = puVar5[1];
      if (lVar7 == 0) {
        if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders.<>c_TypeInfo*/ lRam0000000003d26a38 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Rendering.AtlasShaders.<>c_TypeInfo*/ lRam0000000003d26a38 + 0xe0) == 0)) {
          func_0x00f78ad0();
          puVar5 = *(undefined8 **)(/*Atlas.Rendering.AtlasShaders.<>c_TypeInfo*/ lRam0000000003d26a38 + 0xb8);
        }
        uVar3 = *puVar5;
        lVar7 = func_0x00f78aec(/*System.Predicate<Shader>_TypeInfo*/ uRam0000000003d1e5f8);
        /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(lVar7,uVar3,uRam0000000003d62220,uRam0000000003d3f490);
        *(long *)(*(long *)(/*Atlas.Rendering.AtlasShaders.<>c_TypeInfo*/ lRam0000000003d26a38 + 0xb8) + 8) = lVar7;
      }
      if (lVar4 != 0) {
        uVar3 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar4,lVar7,uRam0000000003d3be28);
        *(undefined8 *)(lVar6 + 0x38) = uVar3;
        Atlas_Rendering_AtlasShaders__WarmupForCommon(lVar6,0);
        goto LAB_01546f98;
      }
    }
  }
  lVar6 = func_0x00f78af4();
  return *(ulong *)(lVar6 + 0x18);
}



// ============================================================
// RVA: 0x1546fb8 | Atlas.Rendering.AtlasShaders.<Init>d__45.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Rendering_AtlasShaders__Init_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1546fc0 | Atlas.Rendering.AtlasShaders.<Init>d__45.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_Rendering_AtlasShaders__Init_d__45__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62228);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1547000 | Atlas.Rendering.AtlasShaders.<Init>d__45.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Rendering_AtlasShaders__Init_d__45__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



