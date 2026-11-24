// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Actors.ActorManager

// ============================================================
// RVA: 0x1630184 | Core.Actors.ActorManager.get_IsInited
// ============================================================

undefined1 Core_Actors_ActorManager__get_IsInited(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x163018c | Core.Actors.ActorManager.set_IsInited
// ============================================================

void Core_Actors_ActorManager__set_IsInited(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1630194 | Core.Actors.ActorManager.Init
// ============================================================

void Core_Actors_ActorManager__Init(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb564a & 1) == 0) {
    func_0x00f78a20(0x3d39c40);
    func_0x00f78a20(0x3d1d798);
    bRam0000000003eb564a = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<ActorGroup>_TypeInfo*/ uRam0000000003d1d798);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar1,0x14,uRam0000000003d39c40);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// ============================================================
// RVA: 0x1630218 | Core.Actors.ActorManager.DeInit
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016303c0) */

void Core_Actors_ActorManager__DeInit(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000003eb564b & 1) == 0) {
    func_0x00f78a20(0x3d39c50);
    bRam0000000003eb564b = 1;
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    auVar5 = func_0x00f78af4();
    if ((bRam0000000003eb564c & 1) == 0) {
      func_0x00f78a20(0x3d1fab8);
      func_0x00f78a20(0x3d32108);
      func_0x00f78a20(0x3d32110);
      func_0x00f78a20(0x3d32118);
      func_0x00f78a20(0x3d39c58);
      bRam0000000003eb564c = 1;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    lStack_60 = 0;
    if (((*(byte *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = **(undefined8 **)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar4,0);
    lVar2 = *(long *)(auVar5._0_8_ + 0x18);
    if (lVar2 == 0) {
      func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_88,lVar2,uRam0000000003d39c58);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      lStack_60 = lStack_78;
      while( true ) {
        uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_70,uRam0000000003d32110);
        if ((uVar3 & 1) == 0) {
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_70,uRam0000000003d32108);
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar4,0);
          return;
        }
        if (lStack_60 == 0) break;
        Core_Actors_ActorGroup__EarlyUpdate(lStack_60,auVar5._8_8_);
      }
      func_0x00f78af4();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x16303d0);
    (*pcVar1)();
  }
  if (0 < *(int *)(lVar2 + 0x18)) {
    /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar2 + 0x10),0,*(int *)(lVar2 + 0x18),0);
    *(undefined4 *)(lVar2 + 0x18) = 0;
  }
  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
  return;
}



// ============================================================
// RVA: 0x1630270 | Core.Actors.ActorManager.EarlyUpdate
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016303c0) */

void Core_Actors_ActorManager__EarlyUpdate(long param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000003eb564c & 1) == 0) {
    func_0x00f78a20(0x3d1fab8);
    func_0x00f78a20(0x3d32108);
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d39c58);
    bRam0000000003eb564c = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  if (((*(byte *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = **(undefined8 **)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar3,0);
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(param_1 + 0x18),uRam0000000003d39c58);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    lStack_40 = lStack_58;
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_50,uRam0000000003d32110);
      if ((uVar2 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_50,uRam0000000003d32108);
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar3,0);
        return;
      }
      if (lStack_40 == 0) break;
      Core_Actors_ActorGroup__EarlyUpdate(lStack_40,param_2);
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x16303d0);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1630434 | Core.Actors.ActorManager.Update
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01630584) */

void Core_Actors_ActorManager__Update(long param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000003eb564d & 1) == 0) {
    func_0x00f78a20(0x3d1fab8);
    func_0x00f78a20(0x3d32108);
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d39c58);
    bRam0000000003eb564d = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  if (((*(byte *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = *(undefined8 *)(*(long *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xb8) + 0x18);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar3,0);
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(param_1 + 0x18),uRam0000000003d39c58);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    lStack_40 = lStack_58;
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_50,uRam0000000003d32110);
      if ((uVar2 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_50,uRam0000000003d32108);
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar3,0);
        return;
      }
      if (lStack_40 == 0) break;
      Core_Actors_ActorGroup__Update(lStack_40,param_2);
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1630594);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x16305f8 | Core.Actors.ActorManager.LateUpdate
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01630748) */

void Core_Actors_ActorManager__LateUpdate(long param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam0000000003eb564e & 1) == 0) {
    func_0x00f78a20(0x3d1fab8);
    func_0x00f78a20(0x3d32108);
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d39c58);
    bRam0000000003eb564e = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  if (((*(byte *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = *(undefined8 *)(*(long *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xb8) + 0x10);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar3,0);
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(param_1 + 0x18),uRam0000000003d39c58);
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    lStack_40 = lStack_58;
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_50,uRam0000000003d32110);
      if ((uVar2 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_50,uRam0000000003d32108);
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar3,0);
        return;
      }
      if (lStack_40 == 0) break;
      Core_Actors_ActorGroup__LateUpdate(lStack_40,param_2);
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1630758);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x16307bc | Core.Actors.ActorManager.FixedUpdate
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01630ab0) */
/* WARNING: Removing unreachable block (ram,0x01630904) */
/* WARNING: Removing unreachable block (ram,0x01630a98) */
/* WARNING: Removing unreachable block (ram,0x01630a80) */

void Core_Actors_ActorManager__FixedUpdate(long param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  int aiStack_90 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb564f & 1) == 0) {
    func_0x00f78a20(0x3d1fab8);
    func_0x00f78a20(0x3d32108);
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d39c58);
    bRam0000000003eb564f = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  aiStack_90[3] = 0;
  if (((*(ushort *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(undefined8 *)(*(long *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(param_1 + 0x18),uRam0000000003d39c58);
    uStack_78 = uStack_a0;
    uStack_80 = uStack_a8;
    lStack_70 = lStack_98;
    while (uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32110), (uVar4 & 1) != 0) {
      if (lStack_70 == 0) {
        func_0x00f78af4();
        goto code_r0x01630abc;
      }
      Core_Actors_ActorGroup__PreFixedUpdate(lStack_70,param_2);
    }
    aiStack_90[0] = 0x42;
    aiStack_90[3] = 1;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32108);
    bVar3 = aiStack_90[0] == 0x42;
    if (bVar3) {
      aiStack_90[3] = 0;
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x00f78af4();
    }
    else {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(param_1 + 0x18),uRam0000000003d39c58);
      uStack_78 = uStack_a0;
      uStack_80 = uStack_a8;
      lStack_70 = lStack_98;
      while (uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32110), iVar1 = aiStack_90[3],
            (uVar4 & 1) != 0) {
        if (lStack_70 == 0) {
          func_0x00f78af4();
          goto code_r0x01630abc;
        }
        Core_Actors_ActorGroup__FixedUpdate(lStack_70,param_2);
      }
      aiStack_90[(int)(uint)!bVar3] = 0x76;
      iVar6 = aiStack_90[3] + 1;
      aiStack_90[3] = iVar6;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32108);
      if ((iVar6 != 0) && (aiStack_90[iVar1] == 0x76)) {
        iVar6 = iVar1;
        aiStack_90[3] = iVar1;
      }
      if (*(long *)(param_1 + 0x18) == 0) {
        func_0x00f78af4();
      }
      else {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(param_1 + 0x18),uRam0000000003d39c58);
        uStack_78 = uStack_a0;
        uStack_80 = uStack_a8;
        lStack_70 = lStack_98;
        while( true ) {
          uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32110);
          if ((uVar4 & 1) == 0) {
            aiStack_90[iVar6] = 0xb8;
            aiStack_90[3] = aiStack_90[3] + 1;
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32108);
            /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar5,0);
            return;
          }
          if (lStack_70 == 0) break;
          Core_Actors_ActorGroup__PostFixedUpdate(lStack_70,param_2);
        }
        func_0x00f78af4();
      }
    }
  }
code_r0x01630abc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1630ac0);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x1630b8c | Core.Actors.ActorManager..ctor
// ============================================================

void Core_Actors_ActorManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1630b94 | Core.Actors.ActorManager..cctor
// ============================================================

void Core_Actors_ActorManager___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5650 & 1) == 0) {
    func_0x00f78a20(0x3d1fab8);
    func_0x00f78a20(0x3d68b80);
    func_0x00f78a20(0x3d68b98);
    func_0x00f78a20(0x3d68b88);
    func_0x00f78a20(0x3d68b90);
    bRam0000000003eb5650 = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('ActorManager.EarlyUpdate()')*/ uRam0000000003d68b80,1,0,0,0);
  **(undefined8 **)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xb8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('ActorManager.FixedUpdate()')*/ uRam0000000003d68b88,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xb8) + 8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('ActorManager.LateUpdate()')*/ uRam0000000003d68b90,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xb8) + 0x10) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('ActorManager.Update()')*/ uRam0000000003d68b98,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Core.Actors.ActorManager_TypeInfo*/ lRam0000000003d1fab8 + 0xb8) + 0x18) = uVar1;
  return;
}



// ============================================================
// RVA: 0x171e69c | Core.Actors.ActorManager.FindActorGroup<GoldenTurdProjectile>
// ============================================================

long * Core_Actors_ActorManager__FindActorGroup_GoldenTurdProjectile_
                 (long param_1,long param_2,long param_3)

{
  bool bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  int extraout_w1_00;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar10 [16];
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  int aiStack_80 [4];
  long lStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  if ((bRam0000000003eb5f7c & 1) == 0) {
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d1c728);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7c = 1;
  }
  aiStack_80[2] = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
    goto code_r0x0171e8b0;
  }
  unaff_x25 = (long *)0x3d32110;
  unaff_x23 = (long *)0x3d1c728;
  unaff_x22 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_98,*(long *)(param_1 + 0x18),uRam0000000003d39c58);
  uStack_68 = uStack_90;
  lStack_70 = lStack_98;
  plStack_60 = plStack_88;
  do {
    uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_70,uRam0000000003d32110);
    unaff_x24 = plStack_60;
    if ((uVar3 & 1) == 0) {
      unaff_x24 = (long *)0x0;
      aiStack_80[0] = 0x4a;
      goto LAB_0171e7f0;
    }
    if (plStack_60 == (long *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x171e8ac);
      (*pcVar2)();
    }
    lVar7 = plStack_60[4];
    uVar8 = **(undefined8 **)(param_2 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
    param_3 = 0;
    uVar3 = /*System.Type$$op_Equality*/ func_0x02a02980(lVar7,uVar8);
  } while ((uVar3 & 1) == 0);
  aiStack_80[0] = 0x4c;
LAB_0171e7f0:
  bVar1 = false;
  lVar7 = 0;
  param_2 = 0;
  aiStack_80[2] = 1;
  do {
    lStack_98 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lStack_98 + 0x12a);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lStack_98 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lStack_98 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x0171e84c;
        }
        piVar6 = piVar6 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_98);
code_r0x0171e84c:
    (*(code *)*puVar4)(aiStack_80,puVar4[1]);
    if (param_2 == 0) {
      if (bVar1) {
        unaff_x24 = (long *)0x0;
      }
      else if (aiStack_80[lVar7] != 0x4c) {
        unaff_x24 = (long *)0x0;
      }
      return unaff_x24;
    }
code_r0x0171e8b0:
    func_0x00f78ac0(param_2,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_2 = *plVar5;
    ___cxa_end_catch();
    unaff_x24 = (long *)0x0;
    lVar7 = -1;
    bVar1 = true;
  } while( true );
  auVar10 = __Unwind_Resume();
  if ((bRam0000000003eb5f7d & 1) == 0) {
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d1c728);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7d = 1;
  }
  lVar7 = *(long *)(auVar10._0_8_ + 0x18);
  if (lVar7 == 0) {
    func_0x00f78af4();
    goto code_r0x0171eb04;
  }
  unaff_x25 = (long *)0x3d1c728;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_138,lVar7,uRam0000000003d39c58);
  uStack_118 = uStack_130;
  lStack_120 = lStack_138;
  lStack_110 = lStack_128;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_120,uRam0000000003d32110), lVar7 = lStack_110,
        (uVar3 & 1) != 0) {
    if (lStack_110 == 0) {
      func_0x00f78af4();
      goto code_r0x0171eafc;
    }
    plVar5 = *(long **)(lStack_110 + 0x20);
    uVar8 = **(undefined8 **)(param_3 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
    if (plVar5 == (long *)0x0) {
      func_0x00f78af4(uVar8,uVar8);
      goto code_r0x0171eafc;
    }
    uVar3 = (**(code **)(*plVar5 + 0x838))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x840));
    if ((uVar3 & 1) != 0) {
      if (auVar10._8_8_ == 0) {
        func_0x00f78af4();
code_r0x0171eafc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x171eb00);
        (*pcVar2)();
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(auVar10._8_8_,lVar7,uRam0000000003d39c48);
    }
  }
  param_3 = 0;
  do {
    lStack_138 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lStack_138 + 0x12a);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lStack_138 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lStack_138 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x0171eab0;
        }
        piVar6 = piVar6 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_138,*unaff_x24,0);
code_r0x0171eab0:
    plVar5 = (long *)(*(code *)*puVar4)(&uStack_130,puVar4[1]);
    if (param_3 == 0) {
      return plVar5;
    }
code_r0x0171eb04:
    func_0x00f78ac0(param_3,0);
    if (extraout_w1_00 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_3 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar10 = __Unwind_Resume();
  if ((bRam0000000003eb5f7e & 1) == 0) {
    func_0x00f78a20(0x3d39c68);
    func_0x00f78a20(0x3d39c70);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7e = 1;
  }
  lVar7 = *(long *)(auVar10._0_8_ + 0x18);
  if (lVar7 != 0) {
    plVar5 = (long *)0x0;
    do {
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)(uint)plVar5) {
        return (long *)0xffffffff;
      }
      if (*(uint *)(lVar7 + 0x18) <= (uint)plVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)plVar5 * 8 + 0x20);
      if (lVar7 == 0) break;
      uVar8 = *(undefined8 *)(lVar7 + 0x20);
      uVar9 = **(undefined8 **)(auVar10._8_8_ + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
      uVar3 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar8,uVar9,0);
      if ((uVar3 & 1) != 0) {
        return plVar5;
      }
      lVar7 = *(long *)(auVar10._0_8_ + 0x18);
      plVar5 = (long *)((long)plVar5 + 1);
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
  return (long *)0xffffffff;
}



// ============================================================
// RVA: 0x171e69c | Core.Actors.ActorManager.FindActorGroup<KartComposite>
// ============================================================

long * Core_Actors_ActorManager__FindActorGroup_GoldenTurdProjectile_
                 (long param_1,long param_2,long param_3)

{
  bool bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  int extraout_w1_00;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar10 [16];
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  int aiStack_80 [4];
  long lStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  if ((bRam0000000003eb5f7c & 1) == 0) {
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d1c728);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7c = 1;
  }
  aiStack_80[2] = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
    goto code_r0x0171e8b0;
  }
  unaff_x25 = (long *)0x3d32110;
  unaff_x23 = (long *)0x3d1c728;
  unaff_x22 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_98,*(long *)(param_1 + 0x18),uRam0000000003d39c58);
  uStack_68 = uStack_90;
  lStack_70 = lStack_98;
  plStack_60 = plStack_88;
  do {
    uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_70,uRam0000000003d32110);
    unaff_x24 = plStack_60;
    if ((uVar3 & 1) == 0) {
      unaff_x24 = (long *)0x0;
      aiStack_80[0] = 0x4a;
      goto LAB_0171e7f0;
    }
    if (plStack_60 == (long *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x171e8ac);
      (*pcVar2)();
    }
    lVar7 = plStack_60[4];
    uVar8 = **(undefined8 **)(param_2 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
    param_3 = 0;
    uVar3 = /*System.Type$$op_Equality*/ func_0x02a02980(lVar7,uVar8);
  } while ((uVar3 & 1) == 0);
  aiStack_80[0] = 0x4c;
LAB_0171e7f0:
  bVar1 = false;
  lVar7 = 0;
  param_2 = 0;
  aiStack_80[2] = 1;
  do {
    lStack_98 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lStack_98 + 0x12a);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lStack_98 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lStack_98 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x0171e84c;
        }
        piVar6 = piVar6 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_98);
code_r0x0171e84c:
    (*(code *)*puVar4)(aiStack_80,puVar4[1]);
    if (param_2 == 0) {
      if (bVar1) {
        unaff_x24 = (long *)0x0;
      }
      else if (aiStack_80[lVar7] != 0x4c) {
        unaff_x24 = (long *)0x0;
      }
      return unaff_x24;
    }
code_r0x0171e8b0:
    func_0x00f78ac0(param_2,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_2 = *plVar5;
    ___cxa_end_catch();
    unaff_x24 = (long *)0x0;
    lVar7 = -1;
    bVar1 = true;
  } while( true );
  auVar10 = __Unwind_Resume();
  if ((bRam0000000003eb5f7d & 1) == 0) {
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d1c728);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7d = 1;
  }
  lVar7 = *(long *)(auVar10._0_8_ + 0x18);
  if (lVar7 == 0) {
    func_0x00f78af4();
    goto code_r0x0171eb04;
  }
  unaff_x25 = (long *)0x3d1c728;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_138,lVar7,uRam0000000003d39c58);
  uStack_118 = uStack_130;
  lStack_120 = lStack_138;
  lStack_110 = lStack_128;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_120,uRam0000000003d32110), lVar7 = lStack_110,
        (uVar3 & 1) != 0) {
    if (lStack_110 == 0) {
      func_0x00f78af4();
      goto code_r0x0171eafc;
    }
    plVar5 = *(long **)(lStack_110 + 0x20);
    uVar8 = **(undefined8 **)(param_3 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
    if (plVar5 == (long *)0x0) {
      func_0x00f78af4(uVar8,uVar8);
      goto code_r0x0171eafc;
    }
    uVar3 = (**(code **)(*plVar5 + 0x838))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x840));
    if ((uVar3 & 1) != 0) {
      if (auVar10._8_8_ == 0) {
        func_0x00f78af4();
code_r0x0171eafc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x171eb00);
        (*pcVar2)();
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(auVar10._8_8_,lVar7,uRam0000000003d39c48);
    }
  }
  param_3 = 0;
  do {
    lStack_138 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lStack_138 + 0x12a);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lStack_138 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lStack_138 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x0171eab0;
        }
        piVar6 = piVar6 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_138,*unaff_x24,0);
code_r0x0171eab0:
    plVar5 = (long *)(*(code *)*puVar4)(&uStack_130,puVar4[1]);
    if (param_3 == 0) {
      return plVar5;
    }
code_r0x0171eb04:
    func_0x00f78ac0(param_3,0);
    if (extraout_w1_00 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_3 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar10 = __Unwind_Resume();
  if ((bRam0000000003eb5f7e & 1) == 0) {
    func_0x00f78a20(0x3d39c68);
    func_0x00f78a20(0x3d39c70);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7e = 1;
  }
  lVar7 = *(long *)(auVar10._0_8_ + 0x18);
  if (lVar7 != 0) {
    plVar5 = (long *)0x0;
    do {
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)(uint)plVar5) {
        return (long *)0xffffffff;
      }
      if (*(uint *)(lVar7 + 0x18) <= (uint)plVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)plVar5 * 8 + 0x20);
      if (lVar7 == 0) break;
      uVar8 = *(undefined8 *)(lVar7 + 0x20);
      uVar9 = **(undefined8 **)(auVar10._8_8_ + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
      uVar3 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar8,uVar9,0);
      if ((uVar3 & 1) != 0) {
        return plVar5;
      }
      lVar7 = *(long *)(auVar10._0_8_ + 0x18);
      plVar5 = (long *)((long)plVar5 + 1);
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
  return (long *)0xffffffff;
}



// ============================================================
// RVA: 0x171e69c | Core.Actors.ActorManager.FindActorGroup<RicochetProjectile>
// ============================================================

long * Core_Actors_ActorManager__FindActorGroup_GoldenTurdProjectile_
                 (long param_1,long param_2,long param_3)

{
  bool bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  int extraout_w1_00;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar10 [16];
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  int aiStack_80 [4];
  long lStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  if ((bRam0000000003eb5f7c & 1) == 0) {
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d1c728);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7c = 1;
  }
  aiStack_80[2] = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
    goto code_r0x0171e8b0;
  }
  unaff_x25 = (long *)0x3d32110;
  unaff_x23 = (long *)0x3d1c728;
  unaff_x22 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_98,*(long *)(param_1 + 0x18),uRam0000000003d39c58);
  uStack_68 = uStack_90;
  lStack_70 = lStack_98;
  plStack_60 = plStack_88;
  do {
    uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_70,uRam0000000003d32110);
    unaff_x24 = plStack_60;
    if ((uVar3 & 1) == 0) {
      unaff_x24 = (long *)0x0;
      aiStack_80[0] = 0x4a;
      goto LAB_0171e7f0;
    }
    if (plStack_60 == (long *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x171e8ac);
      (*pcVar2)();
    }
    lVar7 = plStack_60[4];
    uVar8 = **(undefined8 **)(param_2 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
    param_3 = 0;
    uVar3 = /*System.Type$$op_Equality*/ func_0x02a02980(lVar7,uVar8);
  } while ((uVar3 & 1) == 0);
  aiStack_80[0] = 0x4c;
LAB_0171e7f0:
  bVar1 = false;
  lVar7 = 0;
  param_2 = 0;
  aiStack_80[2] = 1;
  do {
    lStack_98 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lStack_98 + 0x12a);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lStack_98 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lStack_98 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x0171e84c;
        }
        piVar6 = piVar6 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_98);
code_r0x0171e84c:
    (*(code *)*puVar4)(aiStack_80,puVar4[1]);
    if (param_2 == 0) {
      if (bVar1) {
        unaff_x24 = (long *)0x0;
      }
      else if (aiStack_80[lVar7] != 0x4c) {
        unaff_x24 = (long *)0x0;
      }
      return unaff_x24;
    }
code_r0x0171e8b0:
    func_0x00f78ac0(param_2,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_2 = *plVar5;
    ___cxa_end_catch();
    unaff_x24 = (long *)0x0;
    lVar7 = -1;
    bVar1 = true;
  } while( true );
  auVar10 = __Unwind_Resume();
  if ((bRam0000000003eb5f7d & 1) == 0) {
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d1c728);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7d = 1;
  }
  lVar7 = *(long *)(auVar10._0_8_ + 0x18);
  if (lVar7 == 0) {
    func_0x00f78af4();
    goto code_r0x0171eb04;
  }
  unaff_x25 = (long *)0x3d1c728;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_138,lVar7,uRam0000000003d39c58);
  uStack_118 = uStack_130;
  lStack_120 = lStack_138;
  lStack_110 = lStack_128;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_120,uRam0000000003d32110), lVar7 = lStack_110,
        (uVar3 & 1) != 0) {
    if (lStack_110 == 0) {
      func_0x00f78af4();
      goto code_r0x0171eafc;
    }
    plVar5 = *(long **)(lStack_110 + 0x20);
    uVar8 = **(undefined8 **)(param_3 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
    if (plVar5 == (long *)0x0) {
      func_0x00f78af4(uVar8,uVar8);
      goto code_r0x0171eafc;
    }
    uVar3 = (**(code **)(*plVar5 + 0x838))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x840));
    if ((uVar3 & 1) != 0) {
      if (auVar10._8_8_ == 0) {
        func_0x00f78af4();
code_r0x0171eafc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x171eb00);
        (*pcVar2)();
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(auVar10._8_8_,lVar7,uRam0000000003d39c48);
    }
  }
  param_3 = 0;
  do {
    lStack_138 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lStack_138 + 0x12a);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lStack_138 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lStack_138 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x0171eab0;
        }
        piVar6 = piVar6 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_138,*unaff_x24,0);
code_r0x0171eab0:
    plVar5 = (long *)(*(code *)*puVar4)(&uStack_130,puVar4[1]);
    if (param_3 == 0) {
      return plVar5;
    }
code_r0x0171eb04:
    func_0x00f78ac0(param_3,0);
    if (extraout_w1_00 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_3 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar10 = __Unwind_Resume();
  if ((bRam0000000003eb5f7e & 1) == 0) {
    func_0x00f78a20(0x3d39c68);
    func_0x00f78a20(0x3d39c70);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7e = 1;
  }
  lVar7 = *(long *)(auVar10._0_8_ + 0x18);
  if (lVar7 != 0) {
    plVar5 = (long *)0x0;
    do {
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)(uint)plVar5) {
        return (long *)0xffffffff;
      }
      if (*(uint *)(lVar7 + 0x18) <= (uint)plVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)plVar5 * 8 + 0x20);
      if (lVar7 == 0) break;
      uVar8 = *(undefined8 *)(lVar7 + 0x20);
      uVar9 = **(undefined8 **)(auVar10._8_8_ + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
      uVar3 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar8,uVar9,0);
      if ((uVar3 & 1) != 0) {
        return plVar5;
      }
      lVar7 = *(long *)(auVar10._0_8_ + 0x18);
      plVar5 = (long *)((long)plVar5 + 1);
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
  return (long *)0xffffffff;
}



// ============================================================
// RVA: 0x171e69c | Core.Actors.ActorManager.FindActorGroup<object>
// ============================================================

long * Core_Actors_ActorManager__FindActorGroup_GoldenTurdProjectile_
                 (long param_1,long param_2,long param_3)

{
  bool bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  int extraout_w1_00;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar10 [16];
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  int aiStack_80 [4];
  long lStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  if ((bRam0000000003eb5f7c & 1) == 0) {
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d1c728);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7c = 1;
  }
  aiStack_80[2] = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
    goto code_r0x0171e8b0;
  }
  unaff_x25 = (long *)0x3d32110;
  unaff_x23 = (long *)0x3d1c728;
  unaff_x22 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_98,*(long *)(param_1 + 0x18),uRam0000000003d39c58);
  uStack_68 = uStack_90;
  lStack_70 = lStack_98;
  plStack_60 = plStack_88;
  do {
    uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_70,uRam0000000003d32110);
    unaff_x24 = plStack_60;
    if ((uVar3 & 1) == 0) {
      unaff_x24 = (long *)0x0;
      aiStack_80[0] = 0x4a;
      goto LAB_0171e7f0;
    }
    if (plStack_60 == (long *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x171e8ac);
      (*pcVar2)();
    }
    lVar7 = plStack_60[4];
    uVar8 = **(undefined8 **)(param_2 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
    param_3 = 0;
    uVar3 = /*System.Type$$op_Equality*/ func_0x02a02980(lVar7,uVar8);
  } while ((uVar3 & 1) == 0);
  aiStack_80[0] = 0x4c;
LAB_0171e7f0:
  bVar1 = false;
  lVar7 = 0;
  param_2 = 0;
  aiStack_80[2] = 1;
  do {
    lStack_98 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lStack_98 + 0x12a);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lStack_98 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lStack_98 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x0171e84c;
        }
        piVar6 = piVar6 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_98);
code_r0x0171e84c:
    (*(code *)*puVar4)(aiStack_80,puVar4[1]);
    if (param_2 == 0) {
      if (bVar1) {
        unaff_x24 = (long *)0x0;
      }
      else if (aiStack_80[lVar7] != 0x4c) {
        unaff_x24 = (long *)0x0;
      }
      return unaff_x24;
    }
code_r0x0171e8b0:
    func_0x00f78ac0(param_2,0);
    if (extraout_w1 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_2 = *plVar5;
    ___cxa_end_catch();
    unaff_x24 = (long *)0x0;
    lVar7 = -1;
    bVar1 = true;
  } while( true );
  auVar10 = __Unwind_Resume();
  if ((bRam0000000003eb5f7d & 1) == 0) {
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d1c728);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7d = 1;
  }
  lVar7 = *(long *)(auVar10._0_8_ + 0x18);
  if (lVar7 == 0) {
    func_0x00f78af4();
    goto code_r0x0171eb04;
  }
  unaff_x25 = (long *)0x3d1c728;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_138,lVar7,uRam0000000003d39c58);
  uStack_118 = uStack_130;
  lStack_120 = lStack_138;
  lStack_110 = lStack_128;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_120,uRam0000000003d32110), lVar7 = lStack_110,
        (uVar3 & 1) != 0) {
    if (lStack_110 == 0) {
      func_0x00f78af4();
      goto code_r0x0171eafc;
    }
    plVar5 = *(long **)(lStack_110 + 0x20);
    uVar8 = **(undefined8 **)(param_3 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
    if (plVar5 == (long *)0x0) {
      func_0x00f78af4(uVar8,uVar8);
      goto code_r0x0171eafc;
    }
    uVar3 = (**(code **)(*plVar5 + 0x838))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x840));
    if ((uVar3 & 1) != 0) {
      if (auVar10._8_8_ == 0) {
        func_0x00f78af4();
code_r0x0171eafc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x171eb00);
        (*pcVar2)();
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(auVar10._8_8_,lVar7,uRam0000000003d39c48);
    }
  }
  param_3 = 0;
  do {
    lStack_138 = *unaff_x25;
    uVar3 = (ulong)*(ushort *)(lStack_138 + 0x12a);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lStack_138 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lStack_138 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x0171eab0;
        }
        piVar6 = piVar6 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(&lStack_138,*unaff_x24,0);
code_r0x0171eab0:
    plVar5 = (long *)(*(code *)*puVar4)(&uStack_130,puVar4[1]);
    if (param_3 == 0) {
      return plVar5;
    }
code_r0x0171eb04:
    func_0x00f78ac0(param_3,0);
    if (extraout_w1_00 != 1) break;
    plVar5 = (long *)___cxa_begin_catch();
    param_3 = *plVar5;
    ___cxa_end_catch();
  } while( true );
  auVar10 = __Unwind_Resume();
  if ((bRam0000000003eb5f7e & 1) == 0) {
    func_0x00f78a20(0x3d39c68);
    func_0x00f78a20(0x3d39c70);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7e = 1;
  }
  lVar7 = *(long *)(auVar10._0_8_ + 0x18);
  if (lVar7 != 0) {
    plVar5 = (long *)0x0;
    do {
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)(uint)plVar5) {
        return (long *)0xffffffff;
      }
      if (*(uint *)(lVar7 + 0x18) <= (uint)plVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)plVar5 * 8 + 0x20);
      if (lVar7 == 0) break;
      uVar8 = *(undefined8 *)(lVar7 + 0x20);
      uVar9 = **(undefined8 **)(auVar10._8_8_ + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
      uVar3 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar8,uVar9,0);
      if ((uVar3 & 1) != 0) {
        return plVar5;
      }
      lVar7 = *(long *)(auVar10._0_8_ + 0x18);
      plVar5 = (long *)((long)plVar5 + 1);
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
  return (long *)0xffffffff;
}



// ============================================================
// RVA: 0x171e8f4 | Core.Actors.ActorManager.FindDerivedActorGroups<CollidableUsable>
// ============================================================

long Core_Actors_ActorManager__FindDerivedActorGroups_CollidableUsable_
               (long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w1;
  int *piVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar10 [16];
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb5f7d & 1) == 0) {
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d1c728);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7d = 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
    goto code_r0x0171eb04;
  }
  unaff_x25 = (long *)0x3d1c728;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_98,*(long *)(param_1 + 0x18),uRam0000000003d39c58);
  uStack_78 = uStack_90;
  lStack_80 = lStack_98;
  lStack_70 = lStack_88;
  while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_80,uRam0000000003d32110), lVar4 = lStack_70,
        (uVar2 & 1) != 0) {
    if (lStack_70 == 0) {
      func_0x00f78af4();
      goto code_r0x0171eafc;
    }
    plVar7 = *(long **)(lStack_70 + 0x20);
    uVar8 = **(undefined8 **)(param_3 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
    if (plVar7 == (long *)0x0) {
      func_0x00f78af4(uVar8,uVar8);
      goto code_r0x0171eafc;
    }
    uVar2 = (**(code **)(*plVar7 + 0x838))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x840));
    if ((uVar2 & 1) != 0) {
      if (param_2 == 0) {
        func_0x00f78af4();
code_r0x0171eafc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x171eb00);
        (*pcVar1)();
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(param_2,lVar4,uRam0000000003d39c48);
    }
  }
  param_3 = 0;
  do {
    lStack_98 = *unaff_x25;
    uVar2 = (ulong)*(ushort *)(lStack_98 + 0x12a);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lStack_98 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lStack_98 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x0171eab0;
        }
        piVar5 = piVar5 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(&lStack_98,*unaff_x24,0);
code_r0x0171eab0:
    lVar4 = (*(code *)*puVar3)(&uStack_90,puVar3[1]);
    if (param_3 == 0) {
      return lVar4;
    }
code_r0x0171eb04:
    func_0x00f78ac0(param_3,0);
    if (extraout_w1 != 1) break;
    plVar7 = (long *)___cxa_begin_catch();
    param_3 = *plVar7;
    ___cxa_end_catch();
  } while( true );
  auVar10 = __Unwind_Resume();
  if ((bRam0000000003eb5f7e & 1) == 0) {
    func_0x00f78a20(0x3d39c68);
    func_0x00f78a20(0x3d39c70);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7e = 1;
  }
  lVar4 = *(long *)(auVar10._0_8_ + 0x18);
  if (lVar4 != 0) {
    lVar6 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)(uint)lVar6) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar4 + 0x18) <= (uint)lVar6) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + lVar6 * 8 + 0x20);
      if (lVar4 == 0) break;
      uVar8 = *(undefined8 *)(lVar4 + 0x20);
      uVar9 = **(undefined8 **)(auVar10._8_8_ + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
      uVar2 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar8,uVar9,0);
      if ((uVar2 & 1) != 0) {
        return lVar6;
      }
      lVar4 = *(long *)(auVar10._0_8_ + 0x18);
      lVar6 = lVar6 + 1;
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x171e8f4 | Core.Actors.ActorManager.FindDerivedActorGroups<Usable>
// ============================================================

long Core_Actors_ActorManager__FindDerivedActorGroups_CollidableUsable_
               (long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w1;
  int *piVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar10 [16];
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb5f7d & 1) == 0) {
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d1c728);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7d = 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
    goto code_r0x0171eb04;
  }
  unaff_x25 = (long *)0x3d1c728;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_98,*(long *)(param_1 + 0x18),uRam0000000003d39c58);
  uStack_78 = uStack_90;
  lStack_80 = lStack_98;
  lStack_70 = lStack_88;
  while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_80,uRam0000000003d32110), lVar4 = lStack_70,
        (uVar2 & 1) != 0) {
    if (lStack_70 == 0) {
      func_0x00f78af4();
      goto code_r0x0171eafc;
    }
    plVar7 = *(long **)(lStack_70 + 0x20);
    uVar8 = **(undefined8 **)(param_3 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
    if (plVar7 == (long *)0x0) {
      func_0x00f78af4(uVar8,uVar8);
      goto code_r0x0171eafc;
    }
    uVar2 = (**(code **)(*plVar7 + 0x838))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x840));
    if ((uVar2 & 1) != 0) {
      if (param_2 == 0) {
        func_0x00f78af4();
code_r0x0171eafc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x171eb00);
        (*pcVar1)();
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(param_2,lVar4,uRam0000000003d39c48);
    }
  }
  param_3 = 0;
  do {
    lStack_98 = *unaff_x25;
    uVar2 = (ulong)*(ushort *)(lStack_98 + 0x12a);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lStack_98 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lStack_98 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x0171eab0;
        }
        piVar5 = piVar5 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(&lStack_98,*unaff_x24,0);
code_r0x0171eab0:
    lVar4 = (*(code *)*puVar3)(&uStack_90,puVar3[1]);
    if (param_3 == 0) {
      return lVar4;
    }
code_r0x0171eb04:
    func_0x00f78ac0(param_3,0);
    if (extraout_w1 != 1) break;
    plVar7 = (long *)___cxa_begin_catch();
    param_3 = *plVar7;
    ___cxa_end_catch();
  } while( true );
  auVar10 = __Unwind_Resume();
  if ((bRam0000000003eb5f7e & 1) == 0) {
    func_0x00f78a20(0x3d39c68);
    func_0x00f78a20(0x3d39c70);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7e = 1;
  }
  lVar4 = *(long *)(auVar10._0_8_ + 0x18);
  if (lVar4 != 0) {
    lVar6 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)(uint)lVar6) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar4 + 0x18) <= (uint)lVar6) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + lVar6 * 8 + 0x20);
      if (lVar4 == 0) break;
      uVar8 = *(undefined8 *)(lVar4 + 0x20);
      uVar9 = **(undefined8 **)(auVar10._8_8_ + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
      uVar2 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar8,uVar9,0);
      if ((uVar2 & 1) != 0) {
        return lVar6;
      }
      lVar4 = *(long *)(auVar10._0_8_ + 0x18);
      lVar6 = lVar6 + 1;
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x171e8f4 | Core.Actors.ActorManager.FindDerivedActorGroups<object>
// ============================================================

long Core_Actors_ActorManager__FindDerivedActorGroups_CollidableUsable_
               (long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w1;
  int *piVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar10 [16];
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb5f7d & 1) == 0) {
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d1c728);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7d = 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x00f78af4();
    goto code_r0x0171eb04;
  }
  unaff_x25 = (long *)0x3d1c728;
  unaff_x24 = (long *)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_98,*(long *)(param_1 + 0x18),uRam0000000003d39c58);
  uStack_78 = uStack_90;
  lStack_80 = lStack_98;
  lStack_70 = lStack_88;
  while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_80,uRam0000000003d32110), lVar4 = lStack_70,
        (uVar2 & 1) != 0) {
    if (lStack_70 == 0) {
      func_0x00f78af4();
      goto code_r0x0171eafc;
    }
    plVar7 = *(long **)(lStack_70 + 0x20);
    uVar8 = **(undefined8 **)(param_3 + 0x30);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
    if (plVar7 == (long *)0x0) {
      func_0x00f78af4(uVar8,uVar8);
      goto code_r0x0171eafc;
    }
    uVar2 = (**(code **)(*plVar7 + 0x838))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x840));
    if ((uVar2 & 1) != 0) {
      if (param_2 == 0) {
        func_0x00f78af4();
code_r0x0171eafc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x171eb00);
        (*pcVar1)();
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(param_2,lVar4,uRam0000000003d39c48);
    }
  }
  param_3 = 0;
  do {
    lStack_98 = *unaff_x25;
    uVar2 = (ulong)*(ushort *)(lStack_98 + 0x12a);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lStack_98 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lStack_98 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x0171eab0;
        }
        piVar5 = piVar5 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(&lStack_98,*unaff_x24,0);
code_r0x0171eab0:
    lVar4 = (*(code *)*puVar3)(&uStack_90,puVar3[1]);
    if (param_3 == 0) {
      return lVar4;
    }
code_r0x0171eb04:
    func_0x00f78ac0(param_3,0);
    if (extraout_w1 != 1) break;
    plVar7 = (long *)___cxa_begin_catch();
    param_3 = *plVar7;
    ___cxa_end_catch();
  } while( true );
  auVar10 = __Unwind_Resume();
  if ((bRam0000000003eb5f7e & 1) == 0) {
    func_0x00f78a20(0x3d39c68);
    func_0x00f78a20(0x3d39c70);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7e = 1;
  }
  lVar4 = *(long *)(auVar10._0_8_ + 0x18);
  if (lVar4 != 0) {
    lVar6 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)(uint)lVar6) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar4 + 0x18) <= (uint)lVar6) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + lVar6 * 8 + 0x20);
      if (lVar4 == 0) break;
      uVar8 = *(undefined8 *)(lVar4 + 0x20);
      uVar9 = **(undefined8 **)(auVar10._8_8_ + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
      uVar2 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar8,uVar9,0);
      if ((uVar2 & 1) != 0) {
        return lVar6;
      }
      lVar4 = *(long *)(auVar10._0_8_ + 0x18);
      lVar6 = lVar6 + 1;
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x171eb48 | Core.Actors.ActorManager.FindIndexOf<object>
// ============================================================

long Core_Actors_ActorManager__FindIndexOf_object_(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000003eb5f7e & 1) == 0) {
    func_0x00f78a20(0x3d39c68);
    func_0x00f78a20(0x3d39c70);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7e = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      if ((int)*(uint *)(lVar3 + 0x18) <= (int)(uint)lVar2) {
        return 0xffffffff;
      }
      if (*(uint *)(lVar3 + 0x18) <= (uint)lVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + lVar2 * 8 + 0x20);
      if (lVar3 == 0) break;
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      uVar5 = **(undefined8 **)(param_2 + 0x30);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
      uVar1 = /*System.Type$$op_Equality*/ func_0x02a02980(uVar4,uVar5,0);
      if ((uVar1 & 1) != 0) {
        return lVar2;
      }
      lVar3 = *(long *)(param_1 + 0x18);
      lVar2 = lVar2 + 1;
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
  return 0xffffffff;
}



// ============================================================
// RVA: 0x171ec4c | Core.Actors.ActorManager.IsValidGroup<object>
// ============================================================

ulong Core_Actors_ActorManager__IsValidGroup_object_(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_2 + 0x30))();
    return (ulong)(lVar1 != 0);
  }
  auVar8 = func_0x00f78af4();
  if (auVar8._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0171ec98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)**(undefined8 **)(auVar8._8_8_ + 0x30))();
    return uVar2;
  }
  auVar8 = func_0x00f78af4();
  lVar6 = auVar8._8_8_;
  lVar3 = auVar8._0_8_;
  lVar1 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (lVar3 != 0) {
    lVar4 = (**(code **)**(undefined8 **)(param_3 + 0x30))(lVar3);
    if (lVar4 != 0) {
code_r0x0171ed90:
      return (ulong)(lVar4 == 0);
    }
    uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
    uVar5 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar5,uVar7,lVar6,0);
    lVar1 = lVar6;
    if (*(long *)(lVar3 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c48);
      goto code_r0x0171ed90;
    }
  }
  auVar8 = func_0x00f78af4();
  if (auVar8._8_8_ == 0) {
    uVar2 = 0;
  }
  else {
    if (auVar8._0_8_ == 0) {
      auVar8 = func_0x00f78af4();
      if (auVar8._0_8_ != 0) {
        lVar1 = (**(code **)**(undefined8 **)(auVar8._8_8_ + 0x30))();
        if (lVar1 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar1,0);
        }
        return (ulong)(lVar1 != 0);
      }
      auVar8 = func_0x00f78af4();
      if (auVar8._0_8_ != 0) {
        lVar1 = (**(code **)**(undefined8 **)(lVar1 + 0x30))();
        if (lVar1 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar1,auVar8._8_8_,0);
        }
        return (ulong)(lVar1 != 0);
      }
      auVar8 = func_0x00f78af4();
      lVar1 = auVar8._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar1 != 0) {
        uVar7 = (**(code **)**(undefined8 **)(auVar8._8_8_ + 0x30))(lVar1);
        if (-1 < (int)(uint)uVar7) {
          if (*(long *)(lVar1 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar1 + 0x18),uVar7,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar7 >> 0x1f);
      }
code_r0x0171ef30:
      auVar8 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = (**(code **)**(undefined8 **)(auVar8._8_8_ + 0x30))(&uStack_150,auVar8._0_8_);
      extraout_x8[1] = uStack_148;
      *extraout_x8 = uStack_150;
      extraout_x8[3] = uStack_138;
      extraout_x8[2] = uStack_140;
      return uVar2;
    }
    lVar1 = (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 8))();
    uVar2 = 0;
    if (lVar1 != 0) {
      Core_Actors_ActorGroup__Add(lVar1,auVar8._8_8_,0);
      uVar2 = 1;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x171ec7c | Core.Actors.ActorManager.RemoveGroup<object>
// ============================================================

ulong Core_Actors_ActorManager__RemoveGroup_object_(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0171ec98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)**(undefined8 **)(param_2 + 0x30))();
    return uVar1;
  }
  auVar8 = func_0x00f78af4();
  lVar6 = auVar8._8_8_;
  lVar2 = auVar8._0_8_;
  lVar5 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (lVar2 != 0) {
    lVar3 = (**(code **)**(undefined8 **)(param_3 + 0x30))(lVar2);
    if (lVar3 != 0) {
code_r0x0171ed90:
      return (ulong)(lVar3 == 0);
    }
    uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
    uVar4 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar4,uVar7,lVar6,0);
    lVar5 = lVar6;
    if (*(long *)(lVar2 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar2 + 0x18),uVar4,uRam0000000003d39c48);
      goto code_r0x0171ed90;
    }
  }
  auVar8 = func_0x00f78af4();
  if (auVar8._8_8_ == 0) {
    uVar1 = 0;
  }
  else {
    if (auVar8._0_8_ == 0) {
      auVar8 = func_0x00f78af4();
      if (auVar8._0_8_ != 0) {
        lVar5 = (**(code **)**(undefined8 **)(auVar8._8_8_ + 0x30))();
        if (lVar5 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar5,0);
        }
        return (ulong)(lVar5 != 0);
      }
      auVar8 = func_0x00f78af4();
      if (auVar8._0_8_ != 0) {
        lVar5 = (**(code **)**(undefined8 **)(lVar5 + 0x30))();
        if (lVar5 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar5,auVar8._8_8_,0);
        }
        return (ulong)(lVar5 != 0);
      }
      auVar8 = func_0x00f78af4();
      lVar5 = auVar8._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar5 != 0) {
        uVar7 = (**(code **)**(undefined8 **)(auVar8._8_8_ + 0x30))(lVar5);
        if (-1 < (int)(uint)uVar7) {
          if (*(long *)(lVar5 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar5 + 0x18),uVar7,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar7 >> 0x1f);
      }
code_r0x0171ef30:
      auVar8 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = (**(code **)**(undefined8 **)(auVar8._8_8_ + 0x30))(&uStack_140,auVar8._0_8_);
      extraout_x8[1] = uStack_138;
      *extraout_x8 = uStack_140;
      extraout_x8[3] = uStack_128;
      extraout_x8[2] = uStack_130;
      return uVar1;
    }
    lVar5 = (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 8))();
    uVar1 = 0;
    if (lVar5 != 0) {
      Core_Actors_ActorGroup__Add(lVar5,auVar8._8_8_,0);
      uVar1 = 1;
    }
  }
  return uVar1;
}



// ============================================================
// RVA: 0x171eca0 | Core.Actors.ActorManager.TryAddGroup<AoEHit>
// ============================================================

ulong Core_Actors_ActorManager__TryAddGroup_AoEHit_(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar3 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(param_1);
    if (lVar1 != 0) {
LAB_0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar2,uVar5,param_2,0);
    lVar3 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar2,uRam0000000003d39c48);
      goto LAB_0171ed90;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar6._0_8_ == 0) {
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar3,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar3,auVar6._8_8_,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      lVar3 = auVar6._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(lVar3);
        if (-1 < (int)(uint)uVar5) {
          if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar5 >> 0x1f);
      }
code_r0x0171ef30:
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(&uStack_130,auVar6._0_8_);
      extraout_x8[1] = uStack_128;
      *extraout_x8 = uStack_130;
      extraout_x8[3] = uStack_118;
      extraout_x8[2] = uStack_120;
      return uVar4;
    }
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    uVar4 = 0;
    if (lVar3 != 0) {
      Core_Actors_ActorGroup__Add(lVar3,auVar6._8_8_,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x171eca0 | Core.Actors.ActorManager.TryAddGroup<BoostUsable>
// ============================================================

ulong Core_Actors_ActorManager__TryAddGroup_AoEHit_(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar3 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(param_1);
    if (lVar1 != 0) {
LAB_0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar2,uVar5,param_2,0);
    lVar3 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar2,uRam0000000003d39c48);
      goto LAB_0171ed90;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar6._0_8_ == 0) {
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar3,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar3,auVar6._8_8_,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      lVar3 = auVar6._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(lVar3);
        if (-1 < (int)(uint)uVar5) {
          if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar5 >> 0x1f);
      }
code_r0x0171ef30:
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(&uStack_130,auVar6._0_8_);
      extraout_x8[1] = uStack_128;
      *extraout_x8 = uStack_130;
      extraout_x8[3] = uStack_118;
      extraout_x8[2] = uStack_120;
      return uVar4;
    }
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    uVar4 = 0;
    if (lVar3 != 0) {
      Core_Actors_ActorGroup__Add(lVar3,auVar6._8_8_,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x171eca0 | Core.Actors.ActorManager.TryAddGroup<GameContextPlayer>
// ============================================================

ulong Core_Actors_ActorManager__TryAddGroup_AoEHit_(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar3 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(param_1);
    if (lVar1 != 0) {
LAB_0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar2,uVar5,param_2,0);
    lVar3 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar2,uRam0000000003d39c48);
      goto LAB_0171ed90;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar6._0_8_ == 0) {
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar3,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar3,auVar6._8_8_,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      lVar3 = auVar6._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(lVar3);
        if (-1 < (int)(uint)uVar5) {
          if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar5 >> 0x1f);
      }
code_r0x0171ef30:
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(&uStack_130,auVar6._0_8_);
      extraout_x8[1] = uStack_128;
      *extraout_x8 = uStack_130;
      extraout_x8[3] = uStack_118;
      extraout_x8[2] = uStack_120;
      return uVar4;
    }
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    uVar4 = 0;
    if (lVar3 != 0) {
      Core_Actors_ActorGroup__Add(lVar3,auVar6._8_8_,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x171eca0 | Core.Actors.ActorManager.TryAddGroup<GoldenTurdProjectile>
// ============================================================

ulong Core_Actors_ActorManager__TryAddGroup_AoEHit_(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar3 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(param_1);
    if (lVar1 != 0) {
LAB_0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar2,uVar5,param_2,0);
    lVar3 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar2,uRam0000000003d39c48);
      goto LAB_0171ed90;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar6._0_8_ == 0) {
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar3,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar3,auVar6._8_8_,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      lVar3 = auVar6._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(lVar3);
        if (-1 < (int)(uint)uVar5) {
          if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar5 >> 0x1f);
      }
code_r0x0171ef30:
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(&uStack_130,auVar6._0_8_);
      extraout_x8[1] = uStack_128;
      *extraout_x8 = uStack_130;
      extraout_x8[3] = uStack_118;
      extraout_x8[2] = uStack_120;
      return uVar4;
    }
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    uVar4 = 0;
    if (lVar3 != 0) {
      Core_Actors_ActorGroup__Add(lVar3,auVar6._8_8_,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x171eca0 | Core.Actors.ActorManager.TryAddGroup<InteractableController>
// ============================================================

ulong Core_Actors_ActorManager__TryAddGroup_AoEHit_(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar3 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(param_1);
    if (lVar1 != 0) {
LAB_0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar2,uVar5,param_2,0);
    lVar3 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar2,uRam0000000003d39c48);
      goto LAB_0171ed90;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar6._0_8_ == 0) {
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar3,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar3,auVar6._8_8_,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      lVar3 = auVar6._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(lVar3);
        if (-1 < (int)(uint)uVar5) {
          if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar5 >> 0x1f);
      }
code_r0x0171ef30:
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(&uStack_130,auVar6._0_8_);
      extraout_x8[1] = uStack_128;
      *extraout_x8 = uStack_130;
      extraout_x8[3] = uStack_118;
      extraout_x8[2] = uStack_120;
      return uVar4;
    }
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    uVar4 = 0;
    if (lVar3 != 0) {
      Core_Actors_ActorGroup__Add(lVar3,auVar6._8_8_,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x171eca0 | Core.Actors.ActorManager.TryAddGroup<KartComposite>
// ============================================================

ulong Core_Actors_ActorManager__TryAddGroup_AoEHit_(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar3 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(param_1);
    if (lVar1 != 0) {
LAB_0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar2,uVar5,param_2,0);
    lVar3 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar2,uRam0000000003d39c48);
      goto LAB_0171ed90;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar6._0_8_ == 0) {
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar3,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar3,auVar6._8_8_,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      lVar3 = auVar6._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(lVar3);
        if (-1 < (int)(uint)uVar5) {
          if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar5 >> 0x1f);
      }
code_r0x0171ef30:
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(&uStack_130,auVar6._0_8_);
      extraout_x8[1] = uStack_128;
      *extraout_x8 = uStack_130;
      extraout_x8[3] = uStack_118;
      extraout_x8[2] = uStack_120;
      return uVar4;
    }
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    uVar4 = 0;
    if (lVar3 != 0) {
      Core_Actors_ActorGroup__Add(lVar3,auVar6._8_8_,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x171eca0 | Core.Actors.ActorManager.TryAddGroup<NormalShieldUsable>
// ============================================================

ulong Core_Actors_ActorManager__TryAddGroup_AoEHit_(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar3 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(param_1);
    if (lVar1 != 0) {
LAB_0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar2,uVar5,param_2,0);
    lVar3 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar2,uRam0000000003d39c48);
      goto LAB_0171ed90;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar6._0_8_ == 0) {
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar3,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar3,auVar6._8_8_,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      lVar3 = auVar6._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(lVar3);
        if (-1 < (int)(uint)uVar5) {
          if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar5 >> 0x1f);
      }
code_r0x0171ef30:
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(&uStack_130,auVar6._0_8_);
      extraout_x8[1] = uStack_128;
      *extraout_x8 = uStack_130;
      extraout_x8[3] = uStack_118;
      extraout_x8[2] = uStack_120;
      return uVar4;
    }
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    uVar4 = 0;
    if (lVar3 != 0) {
      Core_Actors_ActorGroup__Add(lVar3,auVar6._8_8_,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x171eca0 | Core.Actors.ActorManager.TryAddGroup<PlacementHomingProjectile>
// ============================================================

ulong Core_Actors_ActorManager__TryAddGroup_AoEHit_(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar3 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(param_1);
    if (lVar1 != 0) {
LAB_0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar2,uVar5,param_2,0);
    lVar3 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar2,uRam0000000003d39c48);
      goto LAB_0171ed90;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar6._0_8_ == 0) {
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar3,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar3,auVar6._8_8_,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      lVar3 = auVar6._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(lVar3);
        if (-1 < (int)(uint)uVar5) {
          if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar5 >> 0x1f);
      }
code_r0x0171ef30:
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(&uStack_130,auVar6._0_8_);
      extraout_x8[1] = uStack_128;
      *extraout_x8 = uStack_130;
      extraout_x8[3] = uStack_118;
      extraout_x8[2] = uStack_120;
      return uVar4;
    }
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    uVar4 = 0;
    if (lVar3 != 0) {
      Core_Actors_ActorGroup__Add(lVar3,auVar6._8_8_,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x171eca0 | Core.Actors.ActorManager.TryAddGroup<ProximityHomingProjectile>
// ============================================================

ulong Core_Actors_ActorManager__TryAddGroup_AoEHit_(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar3 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(param_1);
    if (lVar1 != 0) {
LAB_0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar2,uVar5,param_2,0);
    lVar3 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar2,uRam0000000003d39c48);
      goto LAB_0171ed90;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar6._0_8_ == 0) {
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar3,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar3,auVar6._8_8_,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      lVar3 = auVar6._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(lVar3);
        if (-1 < (int)(uint)uVar5) {
          if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar5 >> 0x1f);
      }
code_r0x0171ef30:
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(&uStack_130,auVar6._0_8_);
      extraout_x8[1] = uStack_128;
      *extraout_x8 = uStack_130;
      extraout_x8[3] = uStack_118;
      extraout_x8[2] = uStack_120;
      return uVar4;
    }
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    uVar4 = 0;
    if (lVar3 != 0) {
      Core_Actors_ActorGroup__Add(lVar3,auVar6._8_8_,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x171eca0 | Core.Actors.ActorManager.TryAddGroup<RicochetProjectile>
// ============================================================

ulong Core_Actors_ActorManager__TryAddGroup_AoEHit_(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar3 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(param_1);
    if (lVar1 != 0) {
LAB_0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar2,uVar5,param_2,0);
    lVar3 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar2,uRam0000000003d39c48);
      goto LAB_0171ed90;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar6._0_8_ == 0) {
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar3,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar3,auVar6._8_8_,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      lVar3 = auVar6._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(lVar3);
        if (-1 < (int)(uint)uVar5) {
          if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar5 >> 0x1f);
      }
code_r0x0171ef30:
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(&uStack_130,auVar6._0_8_);
      extraout_x8[1] = uStack_128;
      *extraout_x8 = uStack_130;
      extraout_x8[3] = uStack_118;
      extraout_x8[2] = uStack_120;
      return uVar4;
    }
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    uVar4 = 0;
    if (lVar3 != 0) {
      Core_Actors_ActorGroup__Add(lVar3,auVar6._8_8_,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x171eca0 | Core.Actors.ActorManager.TryAddGroup<SatelliteUsable>
// ============================================================

ulong Core_Actors_ActorManager__TryAddGroup_AoEHit_(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar3 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(param_1);
    if (lVar1 != 0) {
LAB_0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar2,uVar5,param_2,0);
    lVar3 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar2,uRam0000000003d39c48);
      goto LAB_0171ed90;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar6._0_8_ == 0) {
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar3,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar3,auVar6._8_8_,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      lVar3 = auVar6._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(lVar3);
        if (-1 < (int)(uint)uVar5) {
          if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar5 >> 0x1f);
      }
code_r0x0171ef30:
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(&uStack_130,auVar6._0_8_);
      extraout_x8[1] = uStack_128;
      *extraout_x8 = uStack_130;
      extraout_x8[3] = uStack_118;
      extraout_x8[2] = uStack_120;
      return uVar4;
    }
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    uVar4 = 0;
    if (lVar3 != 0) {
      Core_Actors_ActorGroup__Add(lVar3,auVar6._8_8_,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x171eca0 | Core.Actors.ActorManager.TryAddGroup<SuperShieldUsable>
// ============================================================

ulong Core_Actors_ActorManager__TryAddGroup_AoEHit_(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar3 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(param_1);
    if (lVar1 != 0) {
LAB_0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar2,uVar5,param_2,0);
    lVar3 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar2,uRam0000000003d39c48);
      goto LAB_0171ed90;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar6._0_8_ == 0) {
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar3,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar3,auVar6._8_8_,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      lVar3 = auVar6._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(lVar3);
        if (-1 < (int)(uint)uVar5) {
          if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar5 >> 0x1f);
      }
code_r0x0171ef30:
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(&uStack_130,auVar6._0_8_);
      extraout_x8[1] = uStack_128;
      *extraout_x8 = uStack_130;
      extraout_x8[3] = uStack_118;
      extraout_x8[2] = uStack_120;
      return uVar4;
    }
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    uVar4 = 0;
    if (lVar3 != 0) {
      Core_Actors_ActorGroup__Add(lVar3,auVar6._8_8_,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x171eca0 | Core.Actors.ActorManager.TryAddGroup<object>
// ============================================================

ulong Core_Actors_ActorManager__TryAddGroup_AoEHit_(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  
  lVar3 = param_3;
  if ((bRam0000000003eb5f7f & 1) == 0) {
    func_0x00f78a20(0x3d1fab0);
    func_0x00f78a20(0x3d39c48);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb5f7f = 1;
  }
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(param_1);
    if (lVar1 != 0) {
LAB_0171ed90:
      return (ulong)(lVar1 == 0);
    }
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
    uVar2 = func_0x00f78aec(/*Core.Actors.ActorGroup_TypeInfo*/ uRam0000000003d1fab0);
    Core_Actors_ActorGroup___ctor(uVar2,uVar5,param_2,0);
    lVar3 = param_2;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x18),uVar2,uRam0000000003d39c48);
      goto LAB_0171ed90;
    }
  }
  auVar6 = func_0x00f78af4();
  if (auVar6._8_8_ == 0) {
    uVar4 = 0;
  }
  else {
    if (auVar6._0_8_ == 0) {
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar3,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      if (auVar6._0_8_ != 0) {
        lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))();
        if (lVar3 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar3,auVar6._8_8_,0);
        }
        return (ulong)(lVar3 != 0);
      }
      auVar6 = func_0x00f78af4();
      lVar3 = auVar6._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar3 != 0) {
        uVar5 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(lVar3);
        if (-1 < (int)(uint)uVar5) {
          if (*(long *)(lVar3 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar3 + 0x18),uVar5,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar5 >> 0x1f);
      }
code_r0x0171ef30:
      auVar6 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = (**(code **)**(undefined8 **)(auVar6._8_8_ + 0x30))(&uStack_130,auVar6._0_8_);
      extraout_x8[1] = uStack_128;
      *extraout_x8 = uStack_130;
      extraout_x8[3] = uStack_118;
      extraout_x8[2] = uStack_120;
      return uVar4;
    }
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    uVar4 = 0;
    if (lVar3 != 0) {
      Core_Actors_ActorGroup__Add(lVar3,auVar6._8_8_,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ============================================================
// RVA: 0x171edb0 | Core.Actors.ActorManager.TryAddToGroup<GameContextPlayer>
// ============================================================

ulong Core_Actors_ActorManager__TryAddToGroup_GameContextPlayer_
                (long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  undefined1 auVar4 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_1 == 0) {
      auVar4 = func_0x00f78af4();
      if (auVar4._0_8_ != 0) {
        lVar1 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))();
        if (lVar1 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar1,0);
        }
        return (ulong)(lVar1 != 0);
      }
      auVar4 = func_0x00f78af4();
      if (auVar4._0_8_ != 0) {
        lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))();
        if (lVar1 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar1,auVar4._8_8_,0);
        }
        return (ulong)(lVar1 != 0);
      }
      auVar4 = func_0x00f78af4();
      lVar1 = auVar4._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar1 != 0) {
        uVar3 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(lVar1);
        if (-1 < (int)(uint)uVar3) {
          if (*(long *)(lVar1 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar1 + 0x18),uVar3,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar3 >> 0x1f);
      }
code_r0x0171ef30:
      auVar4 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(&uStack_f0,auVar4._0_8_);
      extraout_x8[1] = uStack_e8;
      *extraout_x8 = uStack_f0;
      extraout_x8[3] = uStack_d8;
      extraout_x8[2] = uStack_e0;
      return uVar2;
    }
    lVar1 = (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 8))();
    uVar2 = 0;
    if (lVar1 != 0) {
      Core_Actors_ActorGroup__Add(lVar1,param_2,0);
      uVar2 = 1;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x171edb0 | Core.Actors.ActorManager.TryAddToGroup<InteractableController>
// ============================================================

ulong Core_Actors_ActorManager__TryAddToGroup_GameContextPlayer_
                (long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  undefined1 auVar4 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_1 == 0) {
      auVar4 = func_0x00f78af4();
      if (auVar4._0_8_ != 0) {
        lVar1 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))();
        if (lVar1 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar1,0);
        }
        return (ulong)(lVar1 != 0);
      }
      auVar4 = func_0x00f78af4();
      if (auVar4._0_8_ != 0) {
        lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))();
        if (lVar1 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar1,auVar4._8_8_,0);
        }
        return (ulong)(lVar1 != 0);
      }
      auVar4 = func_0x00f78af4();
      lVar1 = auVar4._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar1 != 0) {
        uVar3 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(lVar1);
        if (-1 < (int)(uint)uVar3) {
          if (*(long *)(lVar1 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar1 + 0x18),uVar3,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar3 >> 0x1f);
      }
code_r0x0171ef30:
      auVar4 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(&uStack_f0,auVar4._0_8_);
      extraout_x8[1] = uStack_e8;
      *extraout_x8 = uStack_f0;
      extraout_x8[3] = uStack_d8;
      extraout_x8[2] = uStack_e0;
      return uVar2;
    }
    lVar1 = (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 8))();
    uVar2 = 0;
    if (lVar1 != 0) {
      Core_Actors_ActorGroup__Add(lVar1,param_2,0);
      uVar2 = 1;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x171edb0 | Core.Actors.ActorManager.TryAddToGroup<KartComposite>
// ============================================================

ulong Core_Actors_ActorManager__TryAddToGroup_GameContextPlayer_
                (long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  undefined1 auVar4 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_1 == 0) {
      auVar4 = func_0x00f78af4();
      if (auVar4._0_8_ != 0) {
        lVar1 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))();
        if (lVar1 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar1,0);
        }
        return (ulong)(lVar1 != 0);
      }
      auVar4 = func_0x00f78af4();
      if (auVar4._0_8_ != 0) {
        lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))();
        if (lVar1 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar1,auVar4._8_8_,0);
        }
        return (ulong)(lVar1 != 0);
      }
      auVar4 = func_0x00f78af4();
      lVar1 = auVar4._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar1 != 0) {
        uVar3 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(lVar1);
        if (-1 < (int)(uint)uVar3) {
          if (*(long *)(lVar1 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar1 + 0x18),uVar3,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar3 >> 0x1f);
      }
code_r0x0171ef30:
      auVar4 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(&uStack_f0,auVar4._0_8_);
      extraout_x8[1] = uStack_e8;
      *extraout_x8 = uStack_f0;
      extraout_x8[3] = uStack_d8;
      extraout_x8[2] = uStack_e0;
      return uVar2;
    }
    lVar1 = (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 8))();
    uVar2 = 0;
    if (lVar1 != 0) {
      Core_Actors_ActorGroup__Add(lVar1,param_2,0);
      uVar2 = 1;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x171edb0 | Core.Actors.ActorManager.TryAddToGroup<object>
// ============================================================

ulong Core_Actors_ActorManager__TryAddToGroup_GameContextPlayer_
                (long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  undefined1 auVar4 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_1 == 0) {
      auVar4 = func_0x00f78af4();
      if (auVar4._0_8_ != 0) {
        lVar1 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))();
        if (lVar1 != 0) {
          Core_Actors_ActorGroup__RemoveAll(lVar1,0);
        }
        return (ulong)(lVar1 != 0);
      }
      auVar4 = func_0x00f78af4();
      if (auVar4._0_8_ != 0) {
        lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))();
        if (lVar1 != 0) {
          Core_Actors_ActorGroup__MarkForRemove(lVar1,auVar4._8_8_,0);
        }
        return (ulong)(lVar1 != 0);
      }
      auVar4 = func_0x00f78af4();
      lVar1 = auVar4._0_8_;
      if ((bRam0000000003eb5f80 & 1) == 0) {
        func_0x00f78a20(0x3d39c60);
        bRam0000000003eb5f80 = 1;
      }
      if (lVar1 != 0) {
        uVar3 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(lVar1);
        if (-1 < (int)(uint)uVar3) {
          if (*(long *)(lVar1 + 0x18) == 0) goto code_r0x0171ef30;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar1 + 0x18),uVar3,uRam0000000003d39c60);
        }
        return (ulong)(~(uint)uVar3 >> 0x1f);
      }
code_r0x0171ef30:
      auVar4 = func_0x00f78af4();
      if ((bRam0000000003eb5f81 & 1) == 0) {
        func_0x00f78a20(0x3d1fae0);
        bRam0000000003eb5f81 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(&uStack_f0,auVar4._0_8_);
      extraout_x8[1] = uStack_e8;
      *extraout_x8 = uStack_f0;
      extraout_x8[3] = uStack_d8;
      extraout_x8[2] = uStack_e0;
      return uVar2;
    }
    lVar1 = (*(code *)**(undefined8 **)(*(long *)(param_3 + 0x30) + 8))();
    uVar2 = 0;
    if (lVar1 != 0) {
      Core_Actors_ActorGroup__Add(lVar1,param_2,0);
      uVar2 = 1;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x171ee04 | Core.Actors.ActorManager.TryRemoveAllFromGroup<object>
// ============================================================

ulong Core_Actors_ActorManager__TryRemoveAllFromGroup_object_
                (long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  undefined1 auVar4 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_2 + 0x30))();
    if (lVar1 != 0) {
      Core_Actors_ActorGroup__RemoveAll(lVar1,0);
    }
    return (ulong)(lVar1 != 0);
  }
  auVar4 = func_0x00f78af4();
  if (auVar4._0_8_ != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))();
    if (lVar1 != 0) {
      Core_Actors_ActorGroup__MarkForRemove(lVar1,auVar4._8_8_,0);
    }
    return (ulong)(lVar1 != 0);
  }
  auVar4 = func_0x00f78af4();
  lVar1 = auVar4._0_8_;
  if ((bRam0000000003eb5f80 & 1) == 0) {
    func_0x00f78a20(0x3d39c60);
    bRam0000000003eb5f80 = 1;
  }
  if (lVar1 != 0) {
    uVar2 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(lVar1);
    if (-1 < (int)(uint)uVar2) {
      if (*(long *)(lVar1 + 0x18) == 0) goto code_r0x0171ef30;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar1 + 0x18),uVar2,uRam0000000003d39c60);
    }
    return (ulong)(~(uint)uVar2 >> 0x1f);
  }
code_r0x0171ef30:
  auVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5f81 & 1) == 0) {
    func_0x00f78a20(0x3d1fae0);
    bRam0000000003eb5f81 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(&uStack_d0,auVar4._0_8_);
  extraout_x8[1] = uStack_c8;
  *extraout_x8 = uStack_d0;
  extraout_x8[3] = uStack_b8;
  extraout_x8[2] = uStack_c0;
  return uVar3;
}



// ============================================================
// RVA: 0x171ee50 | Core.Actors.ActorManager.TryRemoveFromGroup<GameContextPlayer>
// ============================================================

ulong Core_Actors_ActorManager__TryRemoveFromGroup_GameContextPlayer_
                (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  undefined1 auVar4 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))();
    if (lVar1 != 0) {
      Core_Actors_ActorGroup__MarkForRemove(lVar1,param_2,0);
    }
    return (ulong)(lVar1 != 0);
  }
  auVar4 = func_0x00f78af4();
  lVar1 = auVar4._0_8_;
  if ((bRam0000000003eb5f80 & 1) == 0) {
    func_0x00f78a20(0x3d39c60);
    bRam0000000003eb5f80 = 1;
  }
  if (lVar1 != 0) {
    uVar2 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(lVar1);
    if (-1 < (int)(uint)uVar2) {
      if (*(long *)(lVar1 + 0x18) == 0) goto code_r0x0171ef30;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar1 + 0x18),uVar2,uRam0000000003d39c60);
    }
    return (ulong)(~(uint)uVar2 >> 0x1f);
  }
code_r0x0171ef30:
  auVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5f81 & 1) == 0) {
    func_0x00f78a20(0x3d1fae0);
    bRam0000000003eb5f81 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(&uStack_b0,auVar4._0_8_);
  extraout_x8[1] = uStack_a8;
  *extraout_x8 = uStack_b0;
  extraout_x8[3] = uStack_98;
  extraout_x8[2] = uStack_a0;
  return uVar3;
}



// ============================================================
// RVA: 0x171ee50 | Core.Actors.ActorManager.TryRemoveFromGroup<KartComposite>
// ============================================================

ulong Core_Actors_ActorManager__TryRemoveFromGroup_GameContextPlayer_
                (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  undefined1 auVar4 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))();
    if (lVar1 != 0) {
      Core_Actors_ActorGroup__MarkForRemove(lVar1,param_2,0);
    }
    return (ulong)(lVar1 != 0);
  }
  auVar4 = func_0x00f78af4();
  lVar1 = auVar4._0_8_;
  if ((bRam0000000003eb5f80 & 1) == 0) {
    func_0x00f78a20(0x3d39c60);
    bRam0000000003eb5f80 = 1;
  }
  if (lVar1 != 0) {
    uVar2 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(lVar1);
    if (-1 < (int)(uint)uVar2) {
      if (*(long *)(lVar1 + 0x18) == 0) goto code_r0x0171ef30;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar1 + 0x18),uVar2,uRam0000000003d39c60);
    }
    return (ulong)(~(uint)uVar2 >> 0x1f);
  }
code_r0x0171ef30:
  auVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5f81 & 1) == 0) {
    func_0x00f78a20(0x3d1fae0);
    bRam0000000003eb5f81 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(&uStack_b0,auVar4._0_8_);
  extraout_x8[1] = uStack_a8;
  *extraout_x8 = uStack_b0;
  extraout_x8[3] = uStack_98;
  extraout_x8[2] = uStack_a0;
  return uVar3;
}



// ============================================================
// RVA: 0x171ee50 | Core.Actors.ActorManager.TryRemoveFromGroup<object>
// ============================================================

ulong Core_Actors_ActorManager__TryRemoveFromGroup_GameContextPlayer_
                (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  undefined1 auVar4 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (param_1 != 0) {
    lVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))();
    if (lVar1 != 0) {
      Core_Actors_ActorGroup__MarkForRemove(lVar1,param_2,0);
    }
    return (ulong)(lVar1 != 0);
  }
  auVar4 = func_0x00f78af4();
  lVar1 = auVar4._0_8_;
  if ((bRam0000000003eb5f80 & 1) == 0) {
    func_0x00f78a20(0x3d39c60);
    bRam0000000003eb5f80 = 1;
  }
  if (lVar1 != 0) {
    uVar2 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(lVar1);
    if (-1 < (int)(uint)uVar2) {
      if (*(long *)(lVar1 + 0x18) == 0) goto code_r0x0171ef30;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(lVar1 + 0x18),uVar2,uRam0000000003d39c60);
    }
    return (ulong)(~(uint)uVar2 >> 0x1f);
  }
code_r0x0171ef30:
  auVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5f81 & 1) == 0) {
    func_0x00f78a20(0x3d1fae0);
    bRam0000000003eb5f81 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = (**(code **)**(undefined8 **)(auVar4._8_8_ + 0x30))(&uStack_b0,auVar4._0_8_);
  extraout_x8[1] = uStack_a8;
  *extraout_x8 = uStack_b0;
  extraout_x8[3] = uStack_98;
  extraout_x8[2] = uStack_a0;
  return uVar3;
}



// ============================================================
// RVA: 0x171eea4 | Core.Actors.ActorManager.TryRemoveGroup<object>
// ============================================================

ulong Core_Actors_ActorManager__TryRemoveGroup_object_(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *extraout_x8;
  undefined1 auVar3 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000003eb5f80 & 1) == 0) {
    func_0x00f78a20(0x3d39c60);
    bRam0000000003eb5f80 = 1;
  }
  if (param_1 != 0) {
    uVar1 = (**(code **)**(undefined8 **)(param_2 + 0x30))(param_1);
    if (-1 < (int)(uint)uVar1) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_0171ef30;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(*(long *)(param_1 + 0x18),uVar1,uRam0000000003d39c60);
    }
    return (ulong)(~(uint)uVar1 >> 0x1f);
  }
LAB_0171ef30:
  auVar3 = func_0x00f78af4();
  if ((bRam0000000003eb5f81 & 1) == 0) {
    func_0x00f78a20(0x3d1fae0);
    bRam0000000003eb5f81 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = (**(code **)**(undefined8 **)(auVar3._8_8_ + 0x30))(&uStack_90,auVar3._0_8_);
  extraout_x8[1] = uStack_88;
  *extraout_x8 = uStack_90;
  extraout_x8[3] = uStack_78;
  extraout_x8[2] = uStack_80;
  return uVar2;
}



