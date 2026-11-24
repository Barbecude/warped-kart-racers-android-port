// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.BlipBehaviour

// ============================================================
// RVA: 0x153dae4 | Atlas.Gameplay.BlipBehaviour.get_DuplicatMaterials
// ============================================================

undefined8 Atlas_Gameplay_BlipBehaviour__get_DuplicatMaterials(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x153daec | Atlas.Gameplay.BlipBehaviour.Init
// ============================================================

void Atlas_Gameplay_BlipBehaviour__Init(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  do {
    lVar1 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4f18 & 1) == 0) {
      func_0x00f78a20(0x3d20200);
      func_0x00f78a20(0x3d3b188);
      func_0x00f78a20(0x3d1dba8);
      func_0x00f78a20(0x3d232a0);
      bRam0000000003eb4f18 = 1;
    }
    if (*(char *)(lVar1 + 0x50) != '\0') {
      return;
    }
    unaff_x22 = 0x3d20200;
    if (((*(ushort *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)(*(long *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xb8) + 8) == 0) {
      unaff_x20 = func_0x00f78aec(/*Atlas.Rendering.MaterialDuplicator_TypeInfo*/ uRam0000000003d232a0);
      /*Atlas.Rendering.MaterialDuplicator$$.ctor*/ func_0x01492c28(unaff_x20,0);
      if (((*(ushort *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(long *)(*(long *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xb8) + 8) = unaff_x20;
      if (unaff_x20 != 0) {
        /*Atlas.Rendering.MaterialDuplicator$$Init*/ func_0x01491c08(unaff_x20,10,10,10,0);
        goto LAB_0153dbd8;
      }
    }
    else {
LAB_0153dbd8:
      if (*(long *)(lVar1 + 0x18) == 0) goto LAB_0153dc78;
      if (((*(ushort *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar2 = *(long *)(*(long *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xb8) + 8);
      if (lVar2 != 0) {
        /*Atlas.Rendering.MaterialDuplicator$$DuplicateRendererMaterial*/ func_0x01491e64(lVar2,*(undefined8 *)(lVar1 + 0x18),0,0,0,0);
        lVar2 = *(long *)(*(long *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xb8) + 8);
        if (lVar2 != 0) {
          unaff_x20 = *(long *)(lVar2 + 0x18);
          unaff_x21 = func_0x00f78aec(/*System.Collections.Generic.List<Material>_TypeInfo*/ uRam0000000003d1dba8);
          /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(unaff_x21,unaff_x20,uRam0000000003d3b188);
          *(undefined8 *)(lVar1 + 0x48) = unaff_x21;
          lVar2 = *(long *)(*(long *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xb8) + 8);
          if (lVar2 != 0) {
            /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar2,0);
LAB_0153dc78:
            *(undefined1 *)(lVar1 + 0x50) = 1;
            return;
          }
        }
      }
    }
    unaff_x30 = &Atlas_Gameplay_BlipBehaviour__Awake;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = lVar1;
  } while( true );
}



// ============================================================
// RVA: 0x153dc94 | Atlas.Gameplay.BlipBehaviour.Awake
// ============================================================

void Atlas_Gameplay_BlipBehaviour__Awake(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    lVar2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4f18 & 1) == 0) {
      func_0x00f78a20(0x3d20200);
      func_0x00f78a20(0x3d3b188);
      func_0x00f78a20(0x3d1dba8);
      func_0x00f78a20(0x3d232a0);
      bRam0000000003eb4f18 = 1;
    }
    if (*(char *)(lVar2 + 0x50) != '\0') {
      return;
    }
    unaff_x22 = 0x3d20200;
    if (((*(ushort *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)(*(long *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xb8) + 8) == 0) {
      unaff_x20 = func_0x00f78aec(/*Atlas.Rendering.MaterialDuplicator_TypeInfo*/ uRam0000000003d232a0);
      /*Atlas.Rendering.MaterialDuplicator$$.ctor*/ func_0x01492c28(unaff_x20,0);
      if (((*(ushort *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(long *)(*(long *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xb8) + 8) = unaff_x20;
      if (unaff_x20 != 0) {
        /*Atlas.Rendering.MaterialDuplicator$$Init*/ func_0x01491c08(unaff_x20,10,10,10,0);
        goto LAB_0153dbd8;
      }
    }
    else {
LAB_0153dbd8:
      if (*(long *)(lVar2 + 0x18) == 0) goto LAB_0153dc78;
      if (((*(ushort *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar1 = *(long *)(*(long *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xb8) + 8);
      if (lVar1 != 0) {
        /*Atlas.Rendering.MaterialDuplicator$$DuplicateRendererMaterial*/ func_0x01491e64(lVar1,*(undefined8 *)(lVar2 + 0x18),0,0,0,0);
        lVar1 = *(long *)(*(long *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xb8) + 8);
        if (lVar1 != 0) {
          unaff_x20 = *(long *)(lVar1 + 0x18);
          unaff_x21 = func_0x00f78aec(/*System.Collections.Generic.List<Material>_TypeInfo*/ uRam0000000003d1dba8);
          /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(unaff_x21,unaff_x20,uRam0000000003d3b188);
          *(undefined8 *)(lVar2 + 0x48) = unaff_x21;
          lVar1 = *(long *)(*(long *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xb8) + 8);
          if (lVar1 != 0) {
            /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(lVar1,0);
LAB_0153dc78:
            *(undefined1 *)(lVar2 + 0x50) = 1;
            return;
          }
        }
      }
    }
    unaff_x30 = Atlas_Gameplay_BlipBehaviour__Awake;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = lVar2;
  } while( true );
}



// ============================================================
// RVA: 0x153dc98 | Atlas.Gameplay.BlipBehaviour.Start
// ============================================================

/* WARNING: Possible PIC construction at 0x0153dd90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153dea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153dd94) */
/* WARNING: Removing unreachable block (ram,0x0153dea8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_BlipBehaviour__Start
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,int param_7)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  long lVar6;
  undefined4 extraout_s0;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  if (lVar2 != 0) {
    uVar7 = *(undefined4 *)(param_4 + 0x28);
    uVar9 = *(undefined4 *)(param_4 + 0x2c);
    lVar2 = /*UnityEngine.Transform$$TransformPoint*/ func_0x03276d8c(*(undefined4 *)(param_4 + 0x24),lVar2,0);
    *(undefined4 *)(param_4 + 0x38) = extraout_s0;
    *(undefined4 *)(param_4 + 0x3c) = uVar7;
    *(undefined4 *)(param_4 + 0x40) = uVar9;
    return lVar2;
  }
  lVar3 = func_0x00f78af4();
  lVar6 = 0x3eb4000;
  lVar2 = lVar3;
  if ((bRam0000000003eb4f19 & 1) == 0) {
    func_0x00f78a20(0x3d20200);
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d3b1b0);
    lVar2 = func_0x00f78a20(0x3d69548);
    bRam0000000003eb4f19 = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  if (*(float *)(lVar3 + 0x34) == *(float *)(lVar3 + 0x20)) {
    return lVar2;
  }
  fVar8 = _UNK_033f8148;
  if (*(float *)(lVar3 + 0x20) <= _UNK_033f8148) {
code_r0x0153de94:
    if (*(char *)(lVar3 + 0x30) == '\0') {
code_r0x0153deac:
      *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(lVar3 + 0x20);
      return lVar2;
    }
    lVar2 = *(long *)(lVar3 + 0x48);
    param_7 = 0;
  }
  else {
    if (*(char *)(lVar3 + 0x30) == '\0') {
      lVar2 = *(long *)(lVar3 + 0x48);
      param_7 = 1;
      goto code_r0x0153dedc;
    }
    if (*(long *)(lVar3 + 0x48) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,*(long *)(lVar3 + 0x48),uRam0000000003d3b1b0);
      while (uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_78,uRam0000000003d329e8), lVar2 = lStack_68,
            (uVar4 & 1) != 0) {
        if (((*(ushort *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = **(undefined4 **)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xb8);
        uStack_88 = 0;
        uStack_80 = 0;
        /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(*(undefined4 *)(lVar3 + 0x38),*(undefined4 *)(lVar3 + 0x3c),
                        *(undefined4 *)(lVar3 + 0x40),*(undefined4 *)(lVar3 + 0x20),&uStack_88,0);
        if (lVar2 == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x153de58);
          (*pcVar1)();
        }
        /*UnityEngine.Material$$SetVector*/ func_0x0323af88((undefined4)uStack_88,uStack_88._4_4_,(undefined4)uStack_80,uStack_80._4_4_,
                        lVar2,uVar7,0);
      }
      lVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d329e0);
      goto code_r0x0153deac;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar6 = *plVar5;
      ___cxa_end_catch();
      lVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d329e0);
      if (lVar6 == 0) goto code_r0x0153de94;
    }
    else {
      __Unwind_Resume();
    }
    func_0x00f78ac0(lVar6,0);
    lVar2 = extraout_x1;
  }
code_r0x0153dedc:
  if ((bRam0000000003eb4f1a & 1) == 0) {
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d3b1b0);
    func_0x00f78a20(0x3d69548);
    bRam0000000003eb4f1a = 1;
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  lStack_d8 = 0;
  if (lVar2 == 0) {
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar3 = *plVar5;
      ___cxa_end_catch();
      lVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,uRam0000000003eb4000);
      if (lVar3 == 0) {
        return lVar2;
      }
      func_0x00f78ac0(lVar3,0);
    }
    lVar2 = __Unwind_Resume();
    uVar7 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar2 + 0x24) = uVar7;
    *(float *)(lVar2 + 0x28) = fVar8;
    *(undefined4 *)(lVar2 + 0x2c) = param_3;
    *(undefined4 *)(lVar2 + 0x34) = 0xbf800000;
    uVar7 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar2 + 0x38) = uVar7;
    *(float *)(lVar2 + 0x3c) = fVar8;
    *(undefined4 *)(lVar2 + 0x40) = param_3;
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
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_e8,lVar2,uRam0000000003d3b1b0);
  while( true ) {
    while( true ) {
      uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e8,uRam0000000003d329e8);
      if ((uVar4 & 1) == 0) {
        lVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,uRam0000000003d329e0);
        return lVar2;
      }
      if (param_7 != 0) break;
      if (lStack_d8 == 0) {
        func_0x00f78af4();
        goto code_r0x0153dff8;
      }
      /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lStack_d8,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
    }
    if (lStack_d8 == 0) break;
    /*UnityEngine.Material$$EnableKeyword*/ func_0x0323896c(lStack_d8,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
  }
  func_0x00f78af4();
code_r0x0153dff8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x153dffc);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x153dcdc | Atlas.Gameplay.BlipBehaviour.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x0153dd90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0153dea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0153dd94) */
/* WARNING: Removing unreachable block (ram,0x0153dea8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_BlipBehaviour__Update
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,int param_7)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar5 = 0x3eb4000;
  lVar2 = param_4;
  if ((bRam0000000003eb4f19 & 1) == 0) {
    func_0x00f78a20(0x3d20200);
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d3b1b0);
    lVar2 = func_0x00f78a20(0x3d69548);
    bRam0000000003eb4f19 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (*(float *)(param_4 + 0x34) == *(float *)(param_4 + 0x20)) {
    return lVar2;
  }
  fVar7 = _UNK_033f8148;
  if (*(float *)(param_4 + 0x20) <= _UNK_033f8148) {
LAB_0153de94:
    if (*(char *)(param_4 + 0x30) == '\0') {
code_r0x0153deac:
      *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_4 + 0x20);
      return lVar2;
    }
    lVar2 = *(long *)(param_4 + 0x48);
    param_7 = 0;
  }
  else {
    if (*(char *)(param_4 + 0x30) == '\0') {
      lVar2 = *(long *)(param_4 + 0x48);
      param_7 = 1;
      goto code_r0x0153dedc;
    }
    if (*(long *)(param_4 + 0x48) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,*(long *)(param_4 + 0x48),uRam0000000003d3b1b0);
      while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d329e8), lVar2 = lStack_48,
            (uVar3 & 1) != 0) {
        if (((*(ushort *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar6 = **(undefined4 **)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xb8);
        uStack_68 = 0;
        uStack_60 = 0;
        /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(*(undefined4 *)(param_4 + 0x38),*(undefined4 *)(param_4 + 0x3c),
                        *(undefined4 *)(param_4 + 0x40),*(undefined4 *)(param_4 + 0x20),&uStack_68,0
                       );
        if (lVar2 == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x153de58);
          (*pcVar1)();
        }
        /*UnityEngine.Material$$SetVector*/ func_0x0323af88((undefined4)uStack_68,uStack_68._4_4_,(undefined4)uStack_60,uStack_60._4_4_,
                        lVar2,uVar6,0);
      }
      lVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d329e0);
      goto code_r0x0153deac;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar5 = *plVar4;
      ___cxa_end_catch();
      lVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d329e0);
      if (lVar5 == 0) goto LAB_0153de94;
    }
    else {
      __Unwind_Resume();
    }
    func_0x00f78ac0(lVar5,0);
    lVar2 = extraout_x1;
  }
code_r0x0153dedc:
  if ((bRam0000000003eb4f1a & 1) == 0) {
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d3b1b0);
    func_0x00f78a20(0x3d69548);
    bRam0000000003eb4f1a = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  if (lVar2 == 0) {
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar5 = *plVar4;
      ___cxa_end_catch();
      lVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003eb4000);
      if (lVar5 == 0) {
        return lVar2;
      }
      func_0x00f78ac0(lVar5,0);
    }
    lVar2 = __Unwind_Resume();
    uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar2 + 0x24) = uVar6;
    *(float *)(lVar2 + 0x28) = fVar7;
    *(undefined4 *)(lVar2 + 0x2c) = param_3;
    *(undefined4 *)(lVar2 + 0x34) = 0xbf800000;
    uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar2 + 0x38) = uVar6;
    *(float *)(lVar2 + 0x3c) = fVar7;
    *(undefined4 *)(lVar2 + 0x40) = param_3;
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
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,lVar2,uRam0000000003d3b1b0);
  while( true ) {
    while( true ) {
      uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c8,uRam0000000003d329e8);
      if ((uVar3 & 1) == 0) {
        lVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003d329e0);
        return lVar2;
      }
      if (param_7 != 0) break;
      if (lStack_b8 == 0) {
        func_0x00f78af4();
        goto code_r0x0153dff8;
      }
      /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lStack_b8,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
    }
    if (lStack_b8 == 0) break;
    /*UnityEngine.Material$$EnableKeyword*/ func_0x0323896c(lStack_b8,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
  }
  func_0x00f78af4();
code_r0x0153dff8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x153dffc);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x153dedc | Atlas.Gameplay.BlipBehaviour.SetKeywordEnabled
// ============================================================

long Atlas_Gameplay_BlipBehaviour__SetKeywordEnabled
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               long param_5,undefined8 param_6,int param_7)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int extraout_w1;
  long lVar5;
  undefined4 uVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000003eb4f1a & 1) == 0) {
    func_0x00f78a20(0x3d329e0);
    func_0x00f78a20(0x3d329e8);
    func_0x00f78a20(0x3d329f0);
    func_0x00f78a20(0x3d3b1b0);
    func_0x00f78a20(0x3d69548);
    bRam0000000003eb4f1a = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (param_5 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar5 = *plVar4;
      ___cxa_end_catch();
      lVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003eb4000);
      if (lVar5 == 0) {
        return lVar3;
      }
      func_0x00f78ac0(lVar5,0);
    }
    lVar3 = __Unwind_Resume();
    uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar3 + 0x24) = uVar6;
    *(undefined4 *)(lVar3 + 0x28) = param_2;
    *(undefined4 *)(lVar3 + 0x2c) = param_3;
    *(undefined4 *)(lVar3 + 0x34) = 0xbf800000;
    uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)(lVar3 + 0x38) = uVar6;
    *(undefined4 *)(lVar3 + 0x3c) = param_2;
    *(undefined4 *)(lVar3 + 0x40) = param_3;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar3;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,param_5,uRam0000000003d3b1b0);
  while( true ) {
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d329e8);
      if ((uVar2 & 1) == 0) {
        lVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d329e0);
        return lVar3;
      }
      if (param_7 != 0) break;
      if (lStack_48 == 0) {
        func_0x00f78af4();
        goto code_r0x0153dff8;
      }
      /*UnityEngine.Material$$DisableKeyword*/ func_0x032389bc(lStack_48,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
    }
    if (lStack_48 == 0) break;
    /*UnityEngine.Material$$EnableKeyword*/ func_0x0323896c(lStack_48,/*STR('BLACKHOLE')*/ uRam0000000003d69548,0);
  }
  func_0x00f78af4();
code_r0x0153dff8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x153dffc);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x153e044 | Atlas.Gameplay.BlipBehaviour..ctor
// ============================================================

undefined1  [16]
Atlas_Gameplay_BlipBehaviour___ctor
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x24) = uVar1;
  *(undefined4 *)(param_4 + 0x28) = param_2;
  *(undefined4 *)(param_4 + 0x2c) = param_3;
  *(undefined4 *)(param_4 + 0x34) = 0xbf800000;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x38) = uVar1;
  *(undefined4 *)(param_4 + 0x3c) = param_2;
  *(undefined4 *)(param_4 + 0x40) = param_3;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  return auVar2;
}



// ============================================================
// RVA: 0x153e090 | Atlas.Gameplay.BlipBehaviour..cctor
// ============================================================

void Atlas_Gameplay_BlipBehaviour___cctor(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((bRam0000000003eb4f1b & 1) == 0) {
    func_0x00f78a20(0x3d20200);
    func_0x00f78a20(0x3d76d30);
    bRam0000000003eb4f1b = 1;
  }
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_BlackHoleParams')*/ uRam0000000003d76d30,0);
  puVar2 = *(undefined4 **)(/*Atlas.Gameplay.BlipBehaviour_TypeInfo*/ lRam0000000003d20200 + 0xb8);
  *puVar2 = uVar1;
  *(undefined8 *)(puVar2 + 2) = 0;
  return;
}



