// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.TrackEditorUpdatableBehaviour

// ============================================================
// RVA: 0x151088c | Atlas.Geometry.TrackEditorUpdatableBehaviour.UpdatedToLatestAllRevision
// ============================================================

void Atlas_Geometry_TrackEditorUpdatableBehaviour__UpdatedToLatestAllRevision(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4d70 & 1) == 0) {
    func_0x00f78a20(0x3d3dd00);
    func_0x00f78a20(0x3d3dd08);
    func_0x00f78a20(0x3d3dd10);
    bRam0000000003eb4d70 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 1) goto LAB_01510950;
    uVar2 = 0;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if ((lVar3 == 0) || (*(long *)(param_1 + 0x28) == 0)) break;
      /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$set_Item*/ func_0x025b57b8(*(long *)(param_1 + 0x28),uVar2,lVar3,*(undefined8 *)(lVar3 + 0x20),
                      uRam0000000003d3dd10);
      if (iVar1 - 1U == uVar2) goto LAB_01510950;
      lVar3 = *(long *)(param_1 + 0x28);
      uVar2 = uVar2 + 1;
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
LAB_01510950:
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  return;
}



// ============================================================
// RVA: 0x1510c90 | Atlas.Geometry.TrackEditorUpdatableBehaviour.get_Revision
// ============================================================

undefined4 Atlas_Geometry_TrackEditorUpdatableBehaviour__get_Revision(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1510c98 | Atlas.Geometry.TrackEditorUpdatableBehaviour.get_ChildrenRevision
// ============================================================

undefined4 Atlas_Geometry_TrackEditorUpdatableBehaviour__get_ChildrenRevision(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ============================================================
// RVA: 0x1510ca0 | Atlas.Geometry.TrackEditorUpdatableBehaviour.get_UpdatedToRevision
// ============================================================

undefined4 Atlas_Geometry_TrackEditorUpdatableBehaviour__get_UpdatedToRevision(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1510ca8 | Atlas.Geometry.TrackEditorUpdatableBehaviour.get_UpdatedToChildrenRevision
// ============================================================

undefined4 Atlas_Geometry_TrackEditorUpdatableBehaviour__get_UpdatedToChildrenRevision(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ============================================================
// RVA: 0x1510cb0 | Atlas.Geometry.TrackEditorUpdatableBehaviour.Awake
// ============================================================

void Atlas_Geometry_TrackEditorUpdatableBehaviour__Awake(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4d6b & 1) == 0) {
    func_0x00f78a20(0x3d1a048);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d6c080);
    bRam0000000003eb4d6b = 1;
  }
  uVar2 = /*System.Object$$GetType*/ func_0x02959198(param_1,0);
  uVar3 = /*Atlas.Geometry.TrackEditorUpdatableBehaviour_var*/ uRam0000000003d1a048;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar3,0);
  iVar1 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar2,uVar3,0);
  uVar3 = /*STR('EditorOnly')*/ uRam0000000003d6c080;
  if (iVar1 == 0) {
    return;
  }
  if (pcRam0000000003ebf190 == (code *)0x0) {
    pcRam0000000003ebf190 =
         (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()",/*STR('EditorOnly')*/ uRam0000000003d6c080,0);
  }
  lVar4 = (*pcRam0000000003ebf190)(param_1);
  if (lVar4 != 0) {
    if (pcRam0000000003ebf500 == (code *)0x0) {
      pcRam0000000003ebf500 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::set_tag(System.String)");
    }
                    /* WARNING: Could not recover jumptable at 0x03227e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf500)(lVar4,uVar3);
    return;
  }
  auVar5 = func_0x00f78af4();
  if (pcRam0000000003ebf500 == (code *)0x0) {
    pcRam0000000003ebf500 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::set_tag(System.String)");
  }
                    /* WARNING: Could not recover jumptable at 0x03227ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebf500)(auVar5._0_8_,auVar5._8_8_);
  return;
}



// ============================================================
// RVA: 0x1510d8c | Atlas.Geometry.TrackEditorUpdatableBehaviour.GetPriority
// ============================================================

undefined8 Atlas_Geometry_TrackEditorUpdatableBehaviour__GetPriority(void)

{
  return 0;
}



// ============================================================
// RVA: 0x1510d94 | Atlas.Geometry.TrackEditorUpdatableBehaviour.Calculate
// ============================================================

void Atlas_Geometry_TrackEditorUpdatableBehaviour__Calculate(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4d6c & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb4d6c = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
  (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  uVar2 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
  uStack_38 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar2,uVar1,0);
  /*System.TimeSpan$$get_TotalMilliseconds*/ func_0x029edf00(&uStack_38,0);
  return;
}



// ============================================================
// RVA: 0x1510e40 | Atlas.Geometry.TrackEditorUpdatableBehaviour.NeedsUpdate
// ============================================================

ulong Atlas_Geometry_TrackEditorUpdatableBehaviour__NeedsUpdate
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                long param_5)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int extraout_w1;
  undefined8 *puVar9;
  uint extraout_w8;
  long extraout_x9;
  uint uVar10;
  long lVar11;
  undefined8 *unaff_x21;
  long lVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar11 = 0x3eb4000;
  if ((bRam0000000003eb4d6d & 1) == 0) {
    func_0x00f78a20(0x3d33810);
    func_0x00f78a20(0x3d33818);
    func_0x00f78a20(0x3d33820);
    func_0x00f78a20(0x3d3dcf8);
    bRam0000000003eb4d6d = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  lStack_40 = 0;
  if (*(long *)(param_5 + 0x28) != 0) {
    /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$GetEnumerator*/ func_0x025b6618(&uStack_50,*(long *)(param_5 + 0x28),uRam0000000003d3dcf8);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<TrackEditorUpdatableBehaviour.Dependency>$$MoveNext*/ func_0x01f86418(&uStack_50,uRam0000000003d33818);
      if ((uVar3 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<TrackEditorUpdatableBehaviour.Dependency>$$Dispose*/ func_0x01f86414(&uStack_50,uRam0000000003d33810);
        goto LAB_01510f2c;
      }
      if (lStack_40 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1510f70);
        (*pcVar1)();
      }
    } while ((*(int *)(lStack_40 + 0x20) == (int)uStack_38) &&
            (*(int *)(lStack_40 + 0x24) == (int)((ulong)uStack_38 >> 0x20)));
    /*System.Collections.Generic.List.Enumerator<TrackEditorUpdatableBehaviour.Dependency>$$Dispose*/ func_0x01f86414(&uStack_50,uRam0000000003d33810);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
LAB_01510f2c:
    if (*(int *)(param_5 + 0x18) != *(int *)(param_5 + 0x20)) {
      return 1;
    }
    return (ulong)(*(int *)(param_5 + 0x1c) != *(int *)(param_5 + 0x24));
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar11 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<TrackEditorUpdatableBehaviour.Dependency>$$Dispose*/ func_0x01f86414(&uStack_50,*unaff_x21);
    if (lVar11 == 0) goto LAB_01510f2c;
    func_0x00f78ac0(lVar11,0);
  }
  uVar5 = __Unwind_Resume();
  puStack_58 = &Atlas_Geometry_TrackEditorUpdatableBehaviour__ResetTransform;
  lStack_70 = lVar11;
  lStack_68 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar5,0);
  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  if (lVar11 != 0) {
    /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar11,0);
    lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar5,0);
    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    if (lVar11 != 0) {
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar11,0);
      lVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar5,0);
      uVar13 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
      if (lVar11 != 0) {
        uStack_80 = (undefined1 **)CONCAT44(param_2,uVar13);
        uStack_78 = (undefined *)CONCAT44(param_4,param_3);
        if (pcRam0000000003ec1988 == (code *)0x0) {
          pcRam0000000003ec1988 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)"
                                       ,0);
        }
        uVar3 = (*pcRam0000000003ec1988)(lVar11,&uStack_80);
        return uVar3;
      }
    }
  }
  uVar3 = func_0x00f78af4();
  uStack_78 = &Atlas_Geometry_TrackEditorUpdatableBehaviour__ClearDependencies;
  uStack_80 = &puStack_60;
  if ((bRam0000000003eb4d6e & 1) == 0) {
    func_0x00f78a20(0x3d3dcf0);
    bRam0000000003eb4d6e = 1;
  }
  uVar6 = *(ulong *)(uVar3 + 0x28);
  if (uVar6 != 0) {
    uVar3 = uVar6;
    if (0 < *(int *)(uVar6 + 0x18)) {
      uVar3 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar6 + 0x10),0,*(int *)(uVar6 + 0x18),0);
      *(undefined4 *)(uVar6 + 0x18) = 0;
    }
    *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
    return uVar3;
  }
  auVar14 = func_0x00f78af4();
  puVar8 = auVar14._8_8_;
  if ((bRam0000000003eb4d6f & 1) == 0) {
    func_0x00f78a20(0x3d3dce8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d6f = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(puVar8,0,0);
  if ((uVar6 & 1) != 0) {
    return uVar6;
  }
  uVar6 = *(ulong *)(auVar14._0_8_ + 0x28);
  if (uVar6 == 0) {
    uVar6 = func_0x00f78af4();
    uVar3 = uVar6;
    if ((bRam0000000003eb4d70 & 1) == 0) {
      func_0x00f78a20(0x3d3dd00);
      func_0x00f78a20(0x3d3dd08);
      uVar3 = func_0x00f78a20(0x3d3dd10);
      bRam0000000003eb4d70 = 1;
    }
    lVar11 = *(long *)(uVar6 + 0x28);
    if (lVar11 != 0) {
      iVar2 = *(int *)(lVar11 + 0x18);
      if (iVar2 < 1) goto LAB_01510950;
      uVar10 = 0;
      do {
        if (*(uint *)(lVar11 + 0x18) <= uVar10) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar10 * 0x10 + 0x20);
        if ((lVar11 == 0) || (*(long *)(uVar6 + 0x28) == 0)) break;
        uVar3 = /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$set_Item*/ func_0x025b57b8(*(long *)(uVar6 + 0x28),uVar10,lVar11,*(undefined8 *)(lVar11 + 0x20)
                                ,uRam0000000003d3dd10);
        if (iVar2 - 1U == uVar10) goto LAB_01510950;
        lVar11 = *(long *)(uVar6 + 0x28);
        uVar10 = uVar10 + 1;
      } while (lVar11 != 0);
    }
    uVar3 = func_0x00f78af4();
LAB_01510950:
    *(undefined8 *)(uVar6 + 0x20) = *(undefined8 *)(uVar6 + 0x18);
    return uVar3;
  }
  puVar9 = (undefined8 *)0xffffffffffffffff;
  uVar5 = 0x3eb4000;
  lVar11 = *(long *)(uVar6 + 0x10);
  if (lVar11 == 0) {
code_r0x025b5b78:
    puVar8 = unaff_x21;
    uVar6 = uVar3;
    uVar7 = func_0x00f78af4();
    lVar11 = extraout_x9;
    uVar10 = extraout_w8;
code_r0x025b5b7c:
    *(uint *)(uVar6 + 0x18) = uVar10 + 1;
  }
  else {
    uVar5 = 0xffffffffffffffff;
    uVar10 = *(uint *)(uVar6 + 0x18);
    uVar7 = uVar6;
    if (uVar10 != *(uint *)(lVar11 + 0x18)) goto code_r0x025b5b7c;
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3dce8 + 0x18) + 0xc0) + 0x60);
    uVar7 = (*(code *)*puVar9)(uVar6,uVar10 + 1);
    lVar11 = *(long *)(uVar6 + 0x10);
    uVar10 = *(uint *)(uVar6 + 0x18);
    *(uint *)(uVar6 + 0x18) = uVar10 + 1;
    uVar3 = uVar6;
    unaff_x21 = puVar8;
    if (lVar11 == 0) goto code_r0x025b5b78;
  }
  if (uVar10 < *(uint *)(lVar11 + 0x18)) {
    lVar11 = lVar11 + (long)(int)uVar10 * 0x10;
    *(undefined8 **)(lVar11 + 0x20) = puVar8;
    *(undefined8 *)(lVar11 + 0x28) = uVar5;
    *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
    return uVar7;
  }
  uVar5 = func_0x00f78b24();
  auVar14 = func_0x00f78ac0(uVar5,0);
  plVar4 = auVar14._8_8_;
  lVar11 = auVar14._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))(plVar4,0x14);
  if (lVar11 != 0) {
    pcVar1 = (code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x28);
    lVar12 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    if (plVar4 != (long *)0x0) {
      if (*(long *)(*plVar4 + 0x40) == *(long *)(lVar12 + 0x40)) {
        puVar8 = (undefined8 *)func_0x00f78ae4(plVar4);
        (*pcVar1)(lVar11,*puVar8,puVar8[1],*(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0x28));
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x68))(lVar11);
        return (ulong)(iVar2 - 1);
      }
      func_0x00f78e5c(plVar4,lVar12);
      goto code_r0x025b5d64;
    }
  }
  func_0x00f78af4();
code_r0x025b5d64:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x25b5d68);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1510fac | Atlas.Geometry.TrackEditorUpdatableBehaviour.ResetTransform
// ============================================================

ulong Atlas_Geometry_TrackEditorUpdatableBehaviour__ResetTransform
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint extraout_w8;
  long extraout_x9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 unaff_x21;
  long lVar12;
  code *pcVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  if (lVar2 != 0) {
    /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar2,0);
    lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    if (lVar2 != 0) {
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar2,0);
      lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
      uVar14 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
      if (lVar2 != 0) {
        uStack_30 = (undefined1 *)CONCAT44(param_2,uVar14);
        uStack_28 = (undefined *)CONCAT44(param_4,param_3);
        if (pcRam0000000003ec1988 == (code *)0x0) {
          pcRam0000000003ec1988 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)"
                                       ,0);
        }
        uVar7 = (*pcRam0000000003ec1988)(lVar2,&uStack_30);
        return uVar7;
      }
    }
  }
  uVar7 = func_0x00f78af4();
  uStack_28 = &Atlas_Geometry_TrackEditorUpdatableBehaviour__ClearDependencies;
  uStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d6e & 1) == 0) {
    func_0x00f78a20(0x3d3dcf0);
    bRam0000000003eb4d6e = 1;
  }
  uVar3 = *(ulong *)(uVar7 + 0x28);
  if (uVar3 != 0) {
    uVar7 = uVar3;
    if (0 < *(int *)(uVar3 + 0x18)) {
      uVar7 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar3 + 0x10),0,*(int *)(uVar3 + 0x18),0);
      *(undefined4 *)(uVar3 + 0x18) = 0;
    }
    *(int *)(uVar3 + 0x1c) = *(int *)(uVar3 + 0x1c) + 1;
    return uVar7;
  }
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._8_8_;
  if ((bRam0000000003eb4d6f & 1) == 0) {
    func_0x00f78a20(0x3d3dce8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d6f = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  uVar3 = *(ulong *)(auVar15._0_8_ + 0x28);
  if (uVar3 == 0) {
    uVar3 = func_0x00f78af4();
    uVar7 = uVar3;
    if ((bRam0000000003eb4d70 & 1) == 0) {
      func_0x00f78a20(0x3d3dd00);
      func_0x00f78a20(0x3d3dd08);
      uVar7 = func_0x00f78a20(0x3d3dd10);
      bRam0000000003eb4d70 = 1;
    }
    lVar2 = *(long *)(uVar3 + 0x28);
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x18);
      if (iVar1 < 1) goto LAB_01510950;
      uVar10 = 0;
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar10) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar10 * 0x10 + 0x20);
        if ((lVar2 == 0) || (*(long *)(uVar3 + 0x28) == 0)) break;
        uVar7 = /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$set_Item*/ func_0x025b57b8(*(long *)(uVar3 + 0x28),uVar10,lVar2,*(undefined8 *)(lVar2 + 0x20),
                                uRam0000000003d3dd10);
        if (iVar1 - 1U == uVar10) goto LAB_01510950;
        lVar2 = *(long *)(uVar3 + 0x28);
        uVar10 = uVar10 + 1;
      } while (lVar2 != 0);
    }
    uVar7 = func_0x00f78af4();
LAB_01510950:
    *(undefined8 *)(uVar3 + 0x20) = *(undefined8 *)(uVar3 + 0x18);
    return uVar7;
  }
  puVar9 = (undefined8 *)0xffffffffffffffff;
  uVar11 = 0x3eb4000;
  lVar2 = *(long *)(uVar3 + 0x10);
  if (lVar2 == 0) {
code_r0x025b5b78:
    uVar5 = unaff_x21;
    uVar3 = uVar7;
    uVar4 = func_0x00f78af4();
    lVar2 = extraout_x9;
    uVar10 = extraout_w8;
code_r0x025b5b7c:
    *(uint *)(uVar3 + 0x18) = uVar10 + 1;
  }
  else {
    uVar11 = 0xffffffffffffffff;
    uVar10 = *(uint *)(uVar3 + 0x18);
    uVar4 = uVar3;
    if (uVar10 != *(uint *)(lVar2 + 0x18)) goto code_r0x025b5b7c;
    puVar9 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3dce8 + 0x18) + 0xc0) + 0x60);
    uVar4 = (*(code *)*puVar9)(uVar3,uVar10 + 1);
    lVar2 = *(long *)(uVar3 + 0x10);
    uVar10 = *(uint *)(uVar3 + 0x18);
    *(uint *)(uVar3 + 0x18) = uVar10 + 1;
    uVar7 = uVar3;
    unaff_x21 = uVar5;
    if (lVar2 == 0) goto code_r0x025b5b78;
  }
  if (uVar10 < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + (long)(int)uVar10 * 0x10;
    *(undefined8 *)(lVar2 + 0x20) = uVar5;
    *(undefined8 *)(lVar2 + 0x28) = uVar11;
    *(int *)(uVar3 + 0x1c) = *(int *)(uVar3 + 0x1c) + 1;
    return uVar4;
  }
  uVar5 = func_0x00f78b24();
  auVar15 = func_0x00f78ac0(uVar5,0);
  plVar8 = auVar15._8_8_;
  lVar2 = auVar15._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))(plVar8,0x14);
  if (lVar2 != 0) {
    pcVar13 = (code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x28);
    lVar12 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    if (plVar8 != (long *)0x0) {
      if (*(long *)(*plVar8 + 0x40) == *(long *)(lVar12 + 0x40)) {
        puVar6 = (undefined8 *)func_0x00f78ae4(plVar8);
        (*pcVar13)(lVar2,*puVar6,puVar6[1],*(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0x28));
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x68))(lVar2);
        return (ulong)(iVar1 - 1);
      }
      func_0x00f78e5c(plVar8,lVar12);
      goto code_r0x025b5d64;
    }
  }
  func_0x00f78af4();
code_r0x025b5d64:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x25b5d68);
  (*pcVar13)();
}



// ============================================================
// RVA: 0x151103c | Atlas.Geometry.TrackEditorUpdatableBehaviour.ClearDependencies
// ============================================================

ulong Atlas_Geometry_TrackEditorUpdatableBehaviour__ClearDependencies(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint extraout_w8;
  long lVar8;
  long extraout_x9;
  uint uVar9;
  undefined8 uVar10;
  undefined8 unaff_x21;
  long lVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  
  if ((bRam0000000003eb4d6e & 1) == 0) {
    func_0x00f78a20(0x3d3dcf0);
    bRam0000000003eb4d6e = 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x28);
  if (uVar2 != 0) {
    uVar5 = uVar2;
    if (0 < *(int *)(uVar2 + 0x18)) {
      uVar5 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar2 + 0x10),0,*(int *)(uVar2 + 0x18),0);
      *(undefined4 *)(uVar2 + 0x18) = 0;
    }
    *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
    return uVar5;
  }
  auVar13 = func_0x00f78af4();
  uVar3 = auVar13._8_8_;
  if ((bRam0000000003eb4d6f & 1) == 0) {
    func_0x00f78a20(0x3d3dce8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d6f = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return uVar2;
  }
  uVar2 = *(ulong *)(auVar13._0_8_ + 0x28);
  if (uVar2 == 0) {
    uVar5 = func_0x00f78af4();
    uVar2 = uVar5;
    if ((bRam0000000003eb4d70 & 1) == 0) {
      func_0x00f78a20(0x3d3dd00);
      func_0x00f78a20(0x3d3dd08);
      uVar2 = func_0x00f78a20(0x3d3dd10);
      bRam0000000003eb4d70 = 1;
    }
    lVar8 = *(long *)(uVar5 + 0x28);
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      if (iVar1 < 1) goto LAB_01510950;
      uVar9 = 0;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar9) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar9 * 0x10 + 0x20);
        if ((lVar8 == 0) || (*(long *)(uVar5 + 0x28) == 0)) break;
        uVar2 = /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$set_Item*/ func_0x025b57b8(*(long *)(uVar5 + 0x28),uVar9,lVar8,*(undefined8 *)(lVar8 + 0x20),
                                uRam0000000003d3dd10);
        if (iVar1 - 1U == uVar9) goto LAB_01510950;
        lVar8 = *(long *)(uVar5 + 0x28);
        uVar9 = uVar9 + 1;
      } while (lVar8 != 0);
    }
    uVar2 = func_0x00f78af4();
LAB_01510950:
    *(undefined8 *)(uVar5 + 0x20) = *(undefined8 *)(uVar5 + 0x18);
    return uVar2;
  }
  puVar7 = (undefined8 *)0xffffffffffffffff;
  uVar10 = 0x3eb4000;
  lVar8 = *(long *)(uVar2 + 0x10);
  if (lVar8 == 0) {
code_r0x025b5b78:
    uVar3 = unaff_x21;
    uVar2 = param_1;
    uVar5 = func_0x00f78af4();
    lVar8 = extraout_x9;
    uVar9 = extraout_w8;
code_r0x025b5b7c:
    *(uint *)(uVar2 + 0x18) = uVar9 + 1;
  }
  else {
    uVar10 = 0xffffffffffffffff;
    uVar9 = *(uint *)(uVar2 + 0x18);
    uVar5 = uVar2;
    if (uVar9 != *(uint *)(lVar8 + 0x18)) goto code_r0x025b5b7c;
    puVar7 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3dce8 + 0x18) + 0xc0) + 0x60);
    uVar5 = (*(code *)*puVar7)(uVar2,uVar9 + 1);
    lVar8 = *(long *)(uVar2 + 0x10);
    uVar9 = *(uint *)(uVar2 + 0x18);
    *(uint *)(uVar2 + 0x18) = uVar9 + 1;
    param_1 = uVar2;
    unaff_x21 = uVar3;
    if (lVar8 == 0) goto code_r0x025b5b78;
  }
  if (uVar9 < *(uint *)(lVar8 + 0x18)) {
    lVar8 = lVar8 + (long)(int)uVar9 * 0x10;
    *(undefined8 *)(lVar8 + 0x20) = uVar3;
    *(undefined8 *)(lVar8 + 0x28) = uVar10;
    *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
    return uVar5;
  }
  uVar3 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar3,0);
  plVar6 = auVar13._8_8_;
  lVar8 = auVar13._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))(plVar6,0x14);
  if (lVar8 != 0) {
    pcVar12 = (code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x28);
    lVar11 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (plVar6 != (long *)0x0) {
      if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar11 + 0x40)) {
        puVar4 = (undefined8 *)func_0x00f78ae4(plVar6);
        (*pcVar12)(lVar8,*puVar4,puVar4[1],*(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0x28));
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68))(lVar8);
        return (ulong)(iVar1 - 1);
      }
      func_0x00f78e5c(plVar6,lVar11);
      goto code_r0x025b5d64;
    }
  }
  func_0x00f78af4();
code_r0x025b5d64:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x25b5d68);
  (*pcVar12)();
}



// ============================================================
// RVA: 0x1511090 | Atlas.Geometry.TrackEditorUpdatableBehaviour.AddDependency
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1511148 | Atlas.Geometry.TrackEditorUpdatableBehaviour.OnCalculate
// ============================================================

void Atlas_Geometry_TrackEditorUpdatableBehaviour__OnCalculate(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4d70 & 1) == 0) {
    func_0x00f78a20(0x3d3dd00);
    func_0x00f78a20(0x3d3dd08);
    func_0x00f78a20(0x3d3dd10);
    bRam0000000003eb4d70 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 1) goto LAB_01510950;
    uVar2 = 0;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 0x10 + 0x20);
      if ((lVar3 == 0) || (*(long *)(param_1 + 0x28) == 0)) break;
      /*System.Collections.Generic.List<TrackEditorUpdatableBehaviour.Dependency>$$set_Item*/ func_0x025b57b8(*(long *)(param_1 + 0x28),uVar2,lVar3,*(undefined8 *)(lVar3 + 0x20),
                      uRam0000000003d3dd10);
      if (iVar1 - 1U == uVar2) goto LAB_01510950;
      lVar3 = *(long *)(param_1 + 0x28);
      uVar2 = uVar2 + 1;
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
LAB_01510950:
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  return;
}



// ============================================================
// RVA: 0x151114c | Atlas.Geometry.TrackEditorUpdatableBehaviour.OnTransformedChanged
// ============================================================

void Atlas_Geometry_TrackEditorUpdatableBehaviour__OnTransformedChanged(void)

{
  return;
}



// ============================================================
// RVA: 0x1511150 | Atlas.Geometry.TrackEditorUpdatableBehaviour.OnInspectorValuesChanged
// ============================================================

void Atlas_Geometry_TrackEditorUpdatableBehaviour__OnInspectorValuesChanged(void)

{
  return;
}



// ============================================================
// RVA: 0x1511154 | Atlas.Geometry.TrackEditorUpdatableBehaviour.OnChildChanged
// ============================================================

void Atlas_Geometry_TrackEditorUpdatableBehaviour__OnChildChanged(void)

{
  return;
}



// ============================================================
// RVA: 0x1511158 | Atlas.Geometry.TrackEditorUpdatableBehaviour.ChildChanged
// ============================================================

void Atlas_Geometry_TrackEditorUpdatableBehaviour__ChildChanged(long *param_1)

{
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
                    /* WARNING: Could not recover jumptable at 0x0151116c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b8))();
  return;
}



// ============================================================
// RVA: 0x1511170 | Atlas.Geometry.TrackEditorUpdatableBehaviour.TransformChanged
// ============================================================

void Atlas_Geometry_TrackEditorUpdatableBehaviour__TransformChanged(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  iVar2 = (int)param_1[3] + 1;
  *(int *)(param_1 + 3) = iVar2;
  (**(code **)(*param_1 + 0x198))(param_1,iVar2,*(undefined8 *)(*param_1 + 0x1a0));
  puVar1 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar1 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
    uVar5 = 0x3eb4000;
    if ((bRam0000000003eb4d71 & 1) == 0) {
      func_0x00f78a20(0x3d53578);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4d71 = 1;
    }
    lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    if (lVar3 != 0) {
      unaff_x21 = 0x3d23990;
      lVar3 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar3,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
      if (iVar2 == 0) {
        return;
      }
      uVar5 = 0;
      if (lVar3 != 0) {
        plVar4 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar3,uRam0000000003d53578);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar4,0,0);
        if (iVar2 == 0) {
          return;
        }
        uVar5 = 0;
        if (plVar4 != (long *)0x0) {
          lVar3 = param_1[3];
          *(int *)((long)plVar4 + 0x1c) = *(int *)((long)plVar4 + 0x1c) + 1;
                    /* WARNING: Could not recover jumptable at 0x015112b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x1b8))(plVar4,param_1,(int)lVar3,*(undefined8 *)(*plVar4 + 0x1c0))
          ;
          return;
        }
      }
    }
    plVar4 = (long *)func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x50) = uVar5;
    *(long **)(puVar1 + -0x48) = param_1;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) =
         &Atlas_Geometry_TrackEditorUpdatableBehaviour__InspectorValuesChanged;
    iVar2 = (int)plVar4[3] + 1;
    *(int *)(plVar4 + 3) = iVar2;
    (**(code **)(*plVar4 + 0x1a8))(plVar4,iVar2,*(undefined8 *)(*plVar4 + 0x1b0));
    unaff_x29 = *(undefined8 *)(puVar1 + -0x40);
    unaff_x30 = *(undefined8 *)(puVar1 + -0x38);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x50);
    unaff_x19 = *(undefined8 *)(puVar1 + -0x48);
    puVar1 = puVar1 + -0x30;
    param_1 = plVar4;
  } while( true );
}



// ============================================================
// RVA: 0x15111a8 | Atlas.Geometry.TrackEditorUpdatableBehaviour.NotifyParentOfChange
// ============================================================

void Atlas_Geometry_TrackEditorUpdatableBehaviour__NotifyParentOfChange(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar4;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar4 = 0x3eb4000;
    if ((bRam0000000003eb4d71 & 1) == 0) {
      func_0x00f78a20(0x3d53578);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4d71 = 1;
    }
    lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    if (lVar2 != 0) {
      unaff_x21 = 0x3d23990;
      lVar2 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar2,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar2,0,0);
      if (iVar1 == 0) {
        return;
      }
      uVar4 = 0;
      if (lVar2 != 0) {
        plVar3 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar2,uRam0000000003d53578);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar3,0,0);
        if (iVar1 == 0) {
          return;
        }
        uVar4 = 0;
        if (plVar3 != (long *)0x0) {
          lVar2 = param_1[3];
          *(int *)((long)plVar3 + 0x1c) = *(int *)((long)plVar3 + 0x1c) + 1;
                    /* WARNING: Could not recover jumptable at 0x015112b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x1b8))(plVar3,param_1,(int)lVar2,*(undefined8 *)(*plVar3 + 0x1c0))
          ;
          return;
        }
      }
    }
    plVar3 = (long *)func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar4;
    *(long **)((long)register0x00000008 + -0x48) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_Geometry_TrackEditorUpdatableBehaviour__InspectorValuesChanged;
    iVar1 = (int)plVar3[3] + 1;
    *(int *)(plVar3 + 3) = iVar1;
    (**(code **)(*plVar3 + 0x1a8))(plVar3,iVar1,*(undefined8 *)(*plVar3 + 0x1b0));
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_1 = plVar3;
  } while( true );
}



// ============================================================
// RVA: 0x15112c8 | Atlas.Geometry.TrackEditorUpdatableBehaviour.InspectorValuesChanged
// ============================================================

void Atlas_Geometry_TrackEditorUpdatableBehaviour__InspectorValuesChanged(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    plVar4 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    iVar1 = (int)plVar4[3] + 1;
    *(int *)(plVar4 + 3) = iVar1;
    (**(code **)(*plVar4 + 0x1a8))(plVar4,iVar1,*(undefined8 *)(*plVar4 + 0x1b0));
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4d71 & 1) == 0) {
      func_0x00f78a20(0x3d53578);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4d71 = 1;
    }
    lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar4,0);
    if (lVar2 != 0) {
      unaff_x21 = 0x3d23990;
      lVar2 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar2,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar2,0,0);
      if (iVar1 == 0) {
        return;
      }
      unaff_x20 = 0;
      if (lVar2 != 0) {
        plVar3 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar2,uRam0000000003d53578);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar3,0,0);
        if (iVar1 == 0) {
          return;
        }
        unaff_x20 = 0;
        if (plVar3 != (long *)0x0) {
          lVar2 = plVar4[3];
          *(int *)((long)plVar3 + 0x1c) = *(int *)((long)plVar3 + 0x1c) + 1;
                    /* WARNING: Could not recover jumptable at 0x015112b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x1b8))(plVar3,plVar4,(int)lVar2,*(undefined8 *)(*plVar3 + 0x1c0));
          return;
        }
      }
    }
    unaff_x30 = Atlas_Geometry_TrackEditorUpdatableBehaviour__InspectorValuesChanged;
    param_1 = (long *)func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = plVar4;
  } while( true );
}



// ============================================================
// RVA: 0x1511300 | Atlas.Geometry.TrackEditorUpdatableBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Geometry_TrackEditorUpdatableBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4d72 & 1) == 0) {
    func_0x00f78a20(0x3d3dce0);
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



