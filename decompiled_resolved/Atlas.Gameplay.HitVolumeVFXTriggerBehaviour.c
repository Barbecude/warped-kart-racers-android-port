// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.HitVolumeVFXTriggerBehaviour

// ============================================================
// RVA: 0x15b5220 | Atlas.Gameplay.HitVolumeVFXTriggerBehaviour.ManualActivate
// ============================================================

void Atlas_Gameplay_HitVolumeVFXTriggerBehaviour__ManualActivate(long param_1)

{
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



// ============================================================
// RVA: 0x15b5338 | Atlas.Gameplay.HitVolumeVFXTriggerBehaviour.get_IsActivated
// ============================================================

undefined1 Atlas_Gameplay_HitVolumeVFXTriggerBehaviour__get_IsActivated(long param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x15b5340 | Atlas.Gameplay.HitVolumeVFXTriggerBehaviour.get_VFXTriggerConditions
// ============================================================

void Atlas_Gameplay_HitVolumeVFXTriggerBehaviour__get_VFXTriggerConditions
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x44);
  param_1[1] = *(undefined8 *)(param_2 + 0x4c);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x54);
  return;
}



// ============================================================
// RVA: 0x15b5354 | Atlas.Gameplay.HitVolumeVFXTriggerBehaviour.Init
// ============================================================

void Atlas_Gameplay_HitVolumeVFXTriggerBehaviour__Init(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000003eb5282 & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d57e28);
    func_0x00f78a20(0x3d3d2c8);
    func_0x00f78a20(0x3d3d2b0);
    func_0x00f78a20(0x3d3d2c0);
    func_0x00f78a20(0x3d3d2a8);
    func_0x00f78a20(0x3d1e180);
    func_0x00f78a20(0x3d1e188);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5282 = 1;
  }
  uStack_98 = 0;
  lVar6 = *(long *)(param_1 + 0x38);
  if (lVar6 != 0) {
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<HitVolumeVFXTriggerBehaviour.HitVolumeVFXObject>_TypeInfo*/ uRam0000000003d1e188);
    /*System.Collections.Generic.List<HitVolumeVFXTriggerBehaviour.HitVolumeVFXObject>$$.ctor*/ func_0x0252f4a8(uVar3,*(undefined4 *)(lVar6 + 0x18),uRam0000000003d3d2c0);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    lVar6 = *(long *)(param_1 + 0x38);
    if (lVar6 == 0) goto LAB_015b563c;
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar7 = 0;
      uVar5 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      puVar8 = (undefined8 *)(lVar6 + 0x28);
      do {
        if (uVar5 <= uVar7) goto LAB_015b5630;
        uVar3 = puVar8[-1];
        uVar1 = *puVar8;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
        if (iVar2 != 0) {
          if (*(long *)(param_1 + 0x60) == 0) goto LAB_015b563c;
          /*System.Collections.Generic.List<HitVolumeVFXTriggerBehaviour.HitVolumeVFXObject>$$Add*/ func_0x025300a4(*(long *)(param_1 + 0x60),uVar3,uVar1,uRam0000000003d3d2c8);
        }
        uVar7 = uVar7 + 1;
        uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
        puVar8 = puVar8 + 2;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
  }
  uVar3 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  Atlas_Gameplay_HitVolumeBehaviour_HitVolumeDelegate___ctor(uVar3,param_1,uRam0000000003d57e28,0);
  Atlas_Gameplay_HitVolumeBehaviour__add_OnEnter(param_1,uVar3);
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 != 0) {
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<HitVolumeVFXTriggerBehaviour.HitVolumeVFXAudioEvent>_TypeInfo*/ uRam0000000003d1e180);
    /*System.Collections.Generic.List<HitVolumeVFXTriggerBehaviour.HitVolumeVFXAudioEvent>$$.ctor*/ func_0x0252c884(uVar3,*(undefined4 *)(lVar6 + 0x18),uRam0000000003d3d2a8);
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    lVar6 = *(long *)(param_1 + 0x58);
    if (lVar6 == 0) goto LAB_015b563c;
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar7 = 0;
      uVar5 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      puVar8 = (undefined8 *)(lVar6 + 0x28);
      do {
        if (uVar5 <= uVar7) goto LAB_015b5630;
        uVar3 = puVar8[-1];
        uStack_88 = puVar8[1];
        uStack_90 = *puVar8;
        uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar3,0);
        if ((uVar5 & 1) == 0) {
          lVar4 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
          /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(lVar4,uVar3,1,0,0);
          if (lVar4 == 0) goto LAB_015b563c;
          uStack_98 = *(undefined8 *)(lVar4 + 0x20);
          iVar2 = /*FMOD.Studio.EventDescription$$isValid*/ func_0x016df5c8(&uStack_98,0);
          if (iVar2 != 0) {
            if (*(long *)(param_1 + 0x68) == 0) goto LAB_015b563c;
            uStack_70 = uStack_88;
            uStack_78 = uStack_90;
            uStack_80 = uVar3;
            lStack_68 = lVar4;
            /*System.Collections.Generic.List<HitVolumeVFXTriggerBehaviour.HitVolumeVFXAudioEvent>$$Add*/ func_0x0252d4b8(*(long *)(param_1 + 0x68),&uStack_80,uRam0000000003d3d2b0);
          }
        }
        uVar7 = uVar7 + 1;
        uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
        puVar8 = puVar8 + 4;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
  }
  return;
LAB_015b5630:
  uVar3 = func_0x00f78b24();
  func_0x00f78ac0(uVar3,0);
LAB_015b563c:
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb5283 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d57e28);
    bRam0000000003eb5283 = 1;
  }
  uVar3 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  Atlas_Gameplay_HitVolumeBehaviour_HitVolumeDelegate___ctor(uVar3,lVar6,uRam0000000003d57e28,0);
  Atlas_Gameplay_HitVolumeBehaviour__remove_OnEnter(lVar6,uVar3);
  *(undefined1 *)(lVar6 + 0x78) = 0;
  *(undefined4 *)(lVar6 + 0x70) = 0;
  return;
}



// ============================================================
// RVA: 0x15b5640 | Atlas.Gameplay.HitVolumeVFXTriggerBehaviour.DeInit
// ============================================================

void Atlas_Gameplay_HitVolumeVFXTriggerBehaviour__DeInit(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5283 & 1) == 0) {
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d57e28);
    bRam0000000003eb5283 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  Atlas_Gameplay_HitVolumeBehaviour_HitVolumeDelegate___ctor(uVar1,param_1,uRam0000000003d57e28,0);
  Atlas_Gameplay_HitVolumeBehaviour__remove_OnEnter(param_1,uVar1);
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



// ============================================================
// RVA: 0x15b56d0 | Atlas.Gameplay.HitVolumeVFXTriggerBehaviour.OnUpdate
// ============================================================

void Atlas_Gameplay_HitVolumeVFXTriggerBehaviour__OnUpdate(float param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  int iStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb5284 & 1) == 0) {
    func_0x00f78a20(0x3d334b8);
    func_0x00f78a20(0x3d334d0);
    func_0x00f78a20(0x3d334d8);
    func_0x00f78a20(0x3d334c0);
    func_0x00f78a20(0x3d334c8);
    func_0x00f78a20(0x3d334e0);
    func_0x00f78a20(0x3d3d2d0);
    func_0x00f78a20(0x3d3d2b8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5284 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  iStack_a8 = 0;
  if (*(char *)(param_2 + 0x78) != '\0') {
    fVar5 = *(float *)(param_2 + 0x70);
    *(float *)(param_2 + 0x70) = fVar5 + param_1;
    *(float *)(param_2 + 0x74) = fVar5;
    if (*(long *)(param_2 + 0x60) != 0) {
      /*System.Collections.Generic.List<HitVolumeVFXTriggerBehaviour.HitVolumeVFXObject>$$GetEnumerator*/ func_0x02530ba8(&uStack_d0,*(long *)(param_2 + 0x60),uRam0000000003d3d2d0);
      uStack_68 = uStack_c8;
      uStack_70 = uStack_d0;
      uStack_58 = uStack_b8;
      lStack_60 = lStack_c0;
      while (uVar3 = /*System.Collections.Generic.List.Enumerator<HitVolumeVFXTriggerBehaviour.HitVolumeVFXObject>$$MoveNext*/ func_0x01f7dc20(&uStack_70,uRam0000000003d334d8), uVar4 = uStack_58,
            lVar1 = lStack_60, (uVar3 & 1) != 0) {
        if (lStack_60 == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x15b5964);
          (*pcVar2)();
        }
        uVar3 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lStack_60,0);
        if ((((uVar3 & 1) == 0) && ((float)uVar4 <= *(float *)(param_2 + 0x70))) &&
           (uVar3 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar1,0), (uVar3 & 1) == 0)) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar1,1,0);
        }
      }
      uStack_b0 = 0x8e;
      /*System.Collections.Generic.List.Enumerator<HitVolumeVFXTriggerBehaviour.HitVolumeVFXObject>$$Dispose*/ func_0x01f7dc1c(&uStack_70,uRam0000000003d334d0);
    }
    iStack_a8 = 0;
    if (*(long *)(param_2 + 0x68) != 0) {
      /*System.Collections.Generic.List<HitVolumeVFXTriggerBehaviour.HitVolumeVFXAudioEvent>$$GetEnumerator*/ func_0x0252e024(&uStack_a0,*(long *)(param_2 + 0x68),uRam0000000003d3d2b8);
      while (uVar3 = /*System.Collections.Generic.List.Enumerator<HitVolumeVFXTriggerBehaviour.HitVolumeVFXAudioEvent>$$MoveNext*/ func_0x01f7d9dc(&uStack_a0,uRam0000000003d334c0), lVar1 = lStack_78,
            uVar4 = uStack_88, (uVar3 & 1) != 0) {
        if ((*(float *)(param_2 + 0x74) <= (float)uStack_80) &&
           ((float)uStack_80 < *(float *)(param_2 + 0x70) && lStack_78 != 0)) {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
          if ((uVar3 & 1) == 0) {
            uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0);
          }
          /*Core.Audio.AudioEvent$$Play*/ func_0x01638d28(lVar1,uVar4,0);
        }
      }
      iStack_a8 = iStack_a8 + 1;
      uStack_b0 = 0x110;
      /*System.Collections.Generic.List.Enumerator<HitVolumeVFXTriggerBehaviour.HitVolumeVFXAudioEvent>$$Dispose*/ func_0x01f7d9d8(&uStack_a0,uRam0000000003d334b8);
    }
    if (*(float *)(param_2 + 0x40) <= *(float *)(param_2 + 0x70)) {
      /*Atlas.Gameplay.HitVolumeVFXTriggerBehaviour$$ResetAllVFX*/ func_0x015b59f0(param_2);
      *(undefined8 *)(param_2 + 0x70) = 0;
    }
  }
  return;
}



// ============================================================
// RVA: 0x15b59f0 | Atlas.Gameplay.HitVolumeVFXTriggerBehaviour.ResetAllVFX
// ============================================================

void Atlas_Gameplay_HitVolumeVFXTriggerBehaviour__ResetAllVFX(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5285 & 1) == 0) {
    func_0x00f78a20(0x3d334b8);
    func_0x00f78a20(0x3d334d0);
    func_0x00f78a20(0x3d334d8);
    func_0x00f78a20(0x3d334c0);
    func_0x00f78a20(0x3d334c8);
    func_0x00f78a20(0x3d334e0);
    func_0x00f78a20(0x3d3d2d0);
    func_0x00f78a20(0x3d3d2b8);
    bRam0000000003eb5285 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  lStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    /*System.Collections.Generic.List<HitVolumeVFXTriggerBehaviour.HitVolumeVFXObject>$$GetEnumerator*/ func_0x02530ba8(&uStack_50,*(long *)(param_1 + 0x60),uRam0000000003d3d2d0);
    while (uVar2 = /*System.Collections.Generic.List.Enumerator<HitVolumeVFXTriggerBehaviour.HitVolumeVFXObject>$$MoveNext*/ func_0x01f7dc20(&uStack_50,uRam0000000003d334d8), (uVar2 & 1) != 0) {
      if (lStack_40 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x15b5b94);
        (*pcVar1)();
      }
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lStack_40,0,0);
    }
    /*System.Collections.Generic.List.Enumerator<HitVolumeVFXTriggerBehaviour.HitVolumeVFXObject>$$Dispose*/ func_0x01f7dc1c(&uStack_50,uRam0000000003d334d0);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    /*System.Collections.Generic.List<HitVolumeVFXTriggerBehaviour.HitVolumeVFXAudioEvent>$$GetEnumerator*/ func_0x0252e024(&uStack_80,*(long *)(param_1 + 0x68),uRam0000000003d3d2b8);
    while (uVar2 = /*System.Collections.Generic.List.Enumerator<HitVolumeVFXTriggerBehaviour.HitVolumeVFXAudioEvent>$$MoveNext*/ func_0x01f7d9dc(&uStack_80,uRam0000000003d334c0), (uVar2 & 1) != 0) {
      if (lStack_58 != 0) {
        /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lStack_58,0,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<HitVolumeVFXTriggerBehaviour.HitVolumeVFXAudioEvent>$$Dispose*/ func_0x01f7d9d8(&uStack_80,uRam0000000003d334b8);
  }
  return;
}



// ============================================================
// RVA: 0x15b5c04 | Atlas.Gameplay.HitVolumeVFXTriggerBehaviour.OnEnterTrigger
// ============================================================

void Atlas_Gameplay_HitVolumeVFXTriggerBehaviour__OnEnterTrigger(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5286 & 1) == 0) {
    func_0x00f78a20(0x3d21b08);
    bRam0000000003eb5286 = 1;
  }
  uStack_38 = 0;
  if (*(char *)(param_1 + 0x78) == '\0') {
    if (((*(ushort *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Contexts.GameContextBase_TypeInfo*/ lRam0000000003d21b08 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = Atlas_Contexts_GameContextBase__TryGetKartCompositeFromCollider(param_2,&uStack_38,0);
    if (iVar1 != 0) {
      uStack_48 = *(undefined8 *)(param_1 + 0x4c);
      uStack_50 = *(undefined8 *)(param_1 + 0x44);
      uStack_40 = *(undefined4 *)(param_1 + 0x54);
      iVar1 = /*Atlas.Gameplay.VFXTriggerConditionHelper$$ResolveConditions*/ func_0x01527444(&uStack_50,uStack_38,0);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x78) = 1;
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x15b5cc0 | Atlas.Gameplay.HitVolumeVFXTriggerBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_HitVolumeVFXTriggerBehaviour___ctor(ulong param_1)

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



