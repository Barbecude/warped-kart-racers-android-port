// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Actors.ActorGroup

// ============================================================
// RVA: 0x162eee4 | Core.Actors.ActorGroup.get_ActorType
// ============================================================

undefined8 Core_Actors_ActorGroup__get_ActorType(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x162eeec | Core.Actors.ActorGroup.get_Actors
// ============================================================

undefined8 Core_Actors_ActorGroup__get_Actors(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x162eef4 | Core.Actors.ActorGroup..ctor
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0162f26c) */
/* WARNING: Removing unreachable block (ram,0x0162f2ec) */

void Core_Actors_ActorGroup___ctor(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  int aiStack_d0 [4];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  
  if ((bRam0000000003eb563f & 1) == 0) {
    func_0x00f78a20(0x3d3a7b8);
    func_0x00f78a20(0x3d1d9c0);
    func_0x00f78a20(0x3d67300);
    func_0x00f78a20(0x3d67308);
    func_0x00f78a20(0x3d672f0);
    func_0x00f78a20(0x3d685e8);
    func_0x00f78a20(0x3d672e8);
    func_0x00f78a20(0x3d68b78);
    bRam0000000003eb563f = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<IActor>_TypeInfo*/ uRam0000000003d1d9c0);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar4,param_3,uRam0000000003d3a7b8);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<IActor>_TypeInfo*/ uRam0000000003d1d9c0);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar4,param_3,uRam0000000003d3a7b8);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(long **)(param_1 + 0x20) = param_2;
  if (param_2 != (long *)0x0) {
    uVar4 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    uVar4 = /*System.String$$Concat*/ func_0x029be39c(/*STR('ActorGroup<')*/ uRam0000000003d68b78,uVar4,/*STR('>')*/ uRam0000000003d685e8,0);
    uVar5 = /*System.String$$Concat*/ func_0x029bdb88(uVar4,/*STR('.EarlyUpdate()')*/ uRam0000000003d672e8,0);
    uVar5 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(uVar5,1,0,0,0);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    uVar5 = /*System.String$$Concat*/ func_0x029bdb88(uVar4,/*STR('.Update()')*/ uRam0000000003d67308,0);
    uVar5 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(uVar5,1,0,0,0);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    uVar5 = /*System.String$$Concat*/ func_0x029bdb88(uVar4,/*STR('.LateUpdate()')*/ uRam0000000003d67300,0);
    uVar5 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(uVar5,1,0,0,0);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    uVar4 = /*System.String$$Concat*/ func_0x029bdb88(uVar4,/*STR('.FixedUpdate()')*/ uRam0000000003d672f0,0);
    uVar4 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(uVar4,1,0,0,0);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    return;
  }
  auVar11 = func_0x00f78af4();
  lVar6 = auVar11._0_8_;
  if ((bRam0000000003eb5640 & 1) == 0) {
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d21e98);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb5640 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  aiStack_d0[2] = 0;
  uVar4 = *(undefined8 *)(lVar6 + 0x28);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar4,0);
  if (*(long *)(lVar6 + 0x10) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_e8,*(long *)(lVar6 + 0x10),uRam0000000003d3a7d0);
    uStack_b8 = uStack_e0;
    uStack_c0 = uStack_e8;
    plStack_b0 = plStack_d8;
    while( true ) {
      uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d325c8);
      plVar1 = plStack_b0;
      if ((uVar7 & 1) == 0) {
        aiStack_d0[0] = 0x43;
        aiStack_d0[2] = 1;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d325c0);
        bVar3 = aiStack_d0[0] == 0x43;
        if (bVar3) {
          aiStack_d0[2] = 0;
        }
        /*Core.Actors.ActorGroup$$UpdateMarkForRemove*/ func_0x0162f368(lVar6);
        aiStack_d0[(int)(uint)!bVar3] = 0x59;
        aiStack_d0[2] = aiStack_d0[2] + 1;
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar4,0);
        return;
      }
      if (plStack_b0 == (long *)0x0) break;
      lVar9 = *plStack_b0;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == /*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x0162f22c;
          }
          piVar10 = piVar10 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(plStack_b0,/*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98,0);
code_r0x0162f22c:
      (*(code *)*puVar8)(plVar1,auVar11._8_8_,puVar8[1]);
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x162f2fc);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x162f0f4 | Core.Actors.ActorGroup.EarlyUpdate
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0162f26c) */
/* WARNING: Removing unreachable block (ram,0x0162f2ec) */

void Core_Actors_ActorGroup__EarlyUpdate(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  int aiStack_80 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  if ((bRam0000000003eb5640 & 1) == 0) {
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d21e98);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb5640 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  aiStack_80[2] = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar8,0);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,*(long *)(param_1 + 0x10),uRam0000000003d3a7d0);
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    plStack_60 = plStack_88;
    while( true ) {
      uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_70,uRam0000000003d325c8);
      plVar1 = plStack_60;
      if ((uVar4 & 1) == 0) {
        aiStack_80[0] = 0x43;
        aiStack_80[2] = 1;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_70,uRam0000000003d325c0);
        bVar3 = aiStack_80[0] == 0x43;
        if (bVar3) {
          aiStack_80[2] = 0;
        }
        /*Core.Actors.ActorGroup$$UpdateMarkForRemove*/ func_0x0162f368(param_1);
        aiStack_80[(int)(uint)!bVar3] = 0x59;
        aiStack_80[2] = aiStack_80[2] + 1;
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar8,0);
        return;
      }
      if (plStack_60 == (long *)0x0) break;
      lVar6 = *plStack_60;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == /*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0162f22c;
          }
          piVar7 = piVar7 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plStack_60,/*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98,0);
LAB_0162f22c:
      (*(code *)*puVar5)(plVar1,param_2,puVar5[1]);
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x162f2fc);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x162f368 | Core.Actors.ActorGroup.UpdateMarkForRemove
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0162f664) */
/* WARNING: Removing unreachable block (ram,0x0162f6e4) */

void Core_Actors_ActorGroup__UpdateMarkForRemove(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int extraout_w1;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 auVar10 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  int aiStack_e0 [4];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb5649 & 1) == 0) {
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d3a7c8);
    func_0x00f78a20(0x3d3a7d0);
    func_0x00f78a20(0x3d3a7d8);
    func_0x00f78a20(0x3d3a7e0);
    bRam0000000003eb5649 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) goto LAB_0162f4a4;
  if (0 < *(int *)(lVar3 + 0x18)) {
    unaff_x22 = (undefined8 *)0x3d325c8;
    unaff_x21 = (undefined8 *)0x3d3a7c8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,lVar3,uRam0000000003d3a7d0);
    while (uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d325c8), (uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x162f4a4);
        (*pcVar1)();
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Remove*/ func_0x024285f0(*(long *)(param_1 + 0x10),uStack_48,uRam0000000003d3a7d8);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d325c0);
    while (*(long *)(param_1 + 0x18) == 0) {
LAB_0162f4a4:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x0162f4e4;
      plVar5 = (long *)___cxa_begin_catch();
      lVar3 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,*unaff_x22);
      if (lVar3 != 0) {
        func_0x00f78ac0(lVar3,0);
code_r0x0162f4e4:
        auVar10 = __Unwind_Resume();
        lVar3 = auVar10._0_8_;
        if ((bRam0000000003eb5641 & 1) == 0) {
          func_0x00f78a20(0x3d325c0);
          func_0x00f78a20(0x3d325c8);
          func_0x00f78a20(0x3d325d0);
          func_0x00f78a20(0x3d21e98);
          func_0x00f78a20(0x3d3a7d0);
          bRam0000000003eb5641 = 1;
        }
        uStack_d0 = 0;
        uStack_c8 = 0;
        plStack_c0 = (long *)0x0;
        aiStack_e0[2] = 0;
        uVar9 = *(undefined8 *)(lVar3 + 0x30);
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar9,0);
        if (*(long *)(lVar3 + 0x10) == 0) {
          func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_f8,*(long *)(lVar3 + 0x10),uRam0000000003d3a7d0);
          uStack_c8 = uStack_f0;
          uStack_d0 = uStack_f8;
          plStack_c0 = plStack_e8;
          while( true ) {
            uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_d0,uRam0000000003d325c8);
            plVar5 = plStack_c0;
            if ((uVar4 & 1) == 0) {
              aiStack_e0[0] = 0x43;
              aiStack_e0[2] = 1;
              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_d0,uRam0000000003d325c0);
              bVar2 = aiStack_e0[0] == 0x43;
              if (bVar2) {
                aiStack_e0[2] = 0;
              }
              Core_Actors_ActorGroup__UpdateMarkForRemove(lVar3);
              aiStack_e0[(int)(uint)!bVar2] = 0x59;
              aiStack_e0[2] = aiStack_e0[2] + 1;
              /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar9,0);
              return;
            }
            if (plStack_c0 == (long *)0x0) break;
            lVar7 = *plStack_c0;
            uVar4 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == /*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98) {
                  puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                  goto code_r0x0162f624;
                }
                piVar8 = piVar8 + 4;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)func_0x00fac1f0(plStack_c0,/*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98,1);
code_r0x0162f624:
            (*(code *)*puVar6)(plVar5,auVar10._8_8_,puVar6[1]);
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x162f6f4);
        (*pcVar1)();
      }
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x18),*unaff_x21);
  }
  return;
}



// ============================================================
// RVA: 0x162f4e8 | Core.Actors.ActorGroup.Update
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0162f664) */
/* WARNING: Removing unreachable block (ram,0x0162f6e4) */

void Core_Actors_ActorGroup__Update(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  int aiStack_80 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  if ((bRam0000000003eb5641 & 1) == 0) {
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d21e98);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb5641 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  aiStack_80[2] = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar8,0);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,*(long *)(param_1 + 0x10),uRam0000000003d3a7d0);
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    plStack_60 = plStack_88;
    while( true ) {
      uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_70,uRam0000000003d325c8);
      plVar1 = plStack_60;
      if ((uVar4 & 1) == 0) {
        aiStack_80[0] = 0x43;
        aiStack_80[2] = 1;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_70,uRam0000000003d325c0);
        bVar3 = aiStack_80[0] == 0x43;
        if (bVar3) {
          aiStack_80[2] = 0;
        }
        Core_Actors_ActorGroup__UpdateMarkForRemove(param_1);
        aiStack_80[(int)(uint)!bVar3] = 0x59;
        aiStack_80[2] = aiStack_80[2] + 1;
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar8,0);
        return;
      }
      if (plStack_60 == (long *)0x0) break;
      lVar6 = *plStack_60;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == /*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_0162f624;
          }
          piVar7 = piVar7 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plStack_60,/*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98,1);
LAB_0162f624:
      (*(code *)*puVar5)(plVar1,param_2,puVar5[1]);
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x162f6f4);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x162f760 | Core.Actors.ActorGroup.LateUpdate
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0162f8dc) */
/* WARNING: Removing unreachable block (ram,0x0162f95c) */

void Core_Actors_ActorGroup__LateUpdate(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  int aiStack_80 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  if ((bRam0000000003eb5642 & 1) == 0) {
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d21e98);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb5642 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  aiStack_80[2] = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar8,0);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,*(long *)(param_1 + 0x10),uRam0000000003d3a7d0);
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    plStack_60 = plStack_88;
    while( true ) {
      uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_70,uRam0000000003d325c8);
      plVar1 = plStack_60;
      if ((uVar4 & 1) == 0) {
        aiStack_80[0] = 0x43;
        aiStack_80[2] = 1;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_70,uRam0000000003d325c0);
        bVar3 = aiStack_80[0] == 0x43;
        if (bVar3) {
          aiStack_80[2] = 0;
        }
        Core_Actors_ActorGroup__UpdateMarkForRemove(param_1);
        aiStack_80[(int)(uint)!bVar3] = 0x59;
        aiStack_80[2] = aiStack_80[2] + 1;
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar8,0);
        return;
      }
      if (plStack_60 == (long *)0x0) break;
      lVar6 = *plStack_60;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == /*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0162f89c;
          }
          piVar7 = piVar7 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plStack_60,/*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98,2);
LAB_0162f89c:
      (*(code *)*puVar5)(plVar1,param_2,puVar5[1]);
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x162f96c);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x162f9d8 | Core.Actors.ActorGroup.PreFixedUpdate
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0162fb68) */

void Core_Actors_ActorGroup__PreFixedUpdate(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  
  if ((bRam0000000003eb5643 & 1) == 0) {
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d21e98);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb5643 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar7,0);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,*(long *)(param_1 + 0x10),uRam0000000003d3a7d0);
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    plStack_50 = plStack_68;
    while( true ) {
      uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_60,uRam0000000003d325c8);
      plVar1 = plStack_50;
      if ((uVar3 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,uRam0000000003d325c0);
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar7,0);
        return;
      }
      if (plStack_50 == (long *)0x0) break;
      lVar5 = *plStack_50;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == /*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_0162fb0c;
          }
          piVar6 = piVar6 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plStack_50,/*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98,3);
LAB_0162fb0c:
      (*(code *)*puVar4)(plVar1,param_2,puVar4[1]);
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x162fb78);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x162fbdc | Core.Actors.ActorGroup.FixedUpdate
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0162fd58) */
/* WARNING: Removing unreachable block (ram,0x0162fdd8) */

void Core_Actors_ActorGroup__FixedUpdate(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  int aiStack_80 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
  if ((bRam0000000003eb5644 & 1) == 0) {
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d21e98);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb5644 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  aiStack_80[2] = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar8,0);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,*(long *)(param_1 + 0x10),uRam0000000003d3a7d0);
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    plStack_60 = plStack_88;
    while( true ) {
      uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_70,uRam0000000003d325c8);
      plVar1 = plStack_60;
      if ((uVar4 & 1) == 0) {
        aiStack_80[0] = 0x43;
        aiStack_80[2] = 1;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_70,uRam0000000003d325c0);
        bVar3 = aiStack_80[0] == 0x43;
        if (bVar3) {
          aiStack_80[2] = 0;
        }
        Core_Actors_ActorGroup__UpdateMarkForRemove(param_1);
        aiStack_80[(int)(uint)!bVar3] = 0x59;
        aiStack_80[2] = aiStack_80[2] + 1;
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar8,0);
        return;
      }
      if (plStack_60 == (long *)0x0) break;
      lVar6 = *plStack_60;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == /*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_0162fd18;
          }
          piVar7 = piVar7 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plStack_60,/*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98,4);
LAB_0162fd18:
      (*(code *)*puVar5)(plVar1,param_2,puVar5[1]);
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x162fde8);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x162fe54 | Core.Actors.ActorGroup.PostFixedUpdate
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0162ffe4) */

void Core_Actors_ActorGroup__PostFixedUpdate(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  
  if ((bRam0000000003eb5645 & 1) == 0) {
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d21e98);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb5645 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar7,0);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,*(long *)(param_1 + 0x10),uRam0000000003d3a7d0);
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    plStack_50 = plStack_68;
    while( true ) {
      uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_60,uRam0000000003d325c8);
      plVar1 = plStack_50;
      if ((uVar3 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,uRam0000000003d325c0);
        /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar7,0);
        return;
      }
      if (plStack_50 == (long *)0x0) break;
      lVar5 = *plStack_50;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == /*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 5) * 0x10 + 0x138);
            goto LAB_0162ff88;
          }
          piVar6 = piVar6 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plStack_50,/*Core.Actors.IActor_TypeInfo*/ lRam0000000003d21e98,5);
LAB_0162ff88:
      (*(code *)*puVar4)(plVar1,param_2,puVar4[1]);
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x162fff4);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x1630058 | Core.Actors.ActorGroup.Add
// ============================================================

/* WARNING: Possible PIC construction at 0x01630164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01630168) */
/* WARNING: Removing unreachable block (ram,0x01630170) */

ulong Core_Actors_ActorGroup__Add(ulong param_1,ulong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  uint extraout_w8;
  uint uVar10;
  long lVar11;
  long extraout_x9;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar12;
  undefined8 unaff_x23;
  code *pcVar13;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar14 [16];
  undefined *puStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5646 & 1) == 0) {
    func_0x00f78a20(0x3d3a7c0);
    bRam0000000003eb5646 = 1;
  }
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar4 = param_2;
  puStack_38 = unaff_x30;
  if (uVar3 == 0) {
    auVar14 = func_0x00f78af4();
    puStack_38 = &Core_Actors_ActorGroup__MarkForRemove;
    if ((bRam0000000003eb5647 & 1) == 0) {
      func_0x00f78a20(0x3d3a7c0);
      bRam0000000003eb5647 = 1;
    }
    uVar3 = *(ulong *)(auVar14._0_8_ + 0x18);
    if (uVar3 == 0) {
      lVar11 = func_0x00f78af4();
      if ((bRam0000000003eb5648 & 1) == 0) {
        func_0x00f78a20(0x3d3a7c8);
        bRam0000000003eb5648 = 1;
      }
      uVar4 = *(ulong *)(lVar11 + 0x18);
      if (uVar4 == 0) {
        lVar11 = func_0x00f78af4();
        return (ulong)*(byte *)(lVar11 + 0x10);
      }
      uVar3 = uVar4;
      if (0 < *(int *)(uVar4 + 0x18)) {
        uVar3 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar4 + 0x10),0,*(int *)(uVar4 + 0x18),0);
        *(undefined4 *)(uVar4 + 0x18) = 0;
      }
      *(int *)(uVar4 + 0x1c) = *(int *)(uVar4 + 0x1c) + 1;
      return uVar3;
    }
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x21 = 0x3eb5000;
    uVar4 = auVar14._8_8_;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x29 = puVar1;
  }
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_38;
  lVar11 = *(long *)(uVar3 + 0x10);
  puVar9 = puRam0000000003d3a7c0;
  if (lVar11 == 0) {
code_r0x0242716c:
    uVar4 = unaff_x20;
    uVar3 = unaff_x19;
    uVar5 = func_0x00f78af4();
    lVar11 = extraout_x9;
    uVar10 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar3 + 0x18) = uVar10 + 1;
  }
  else {
    uVar10 = *(uint *)(uVar3 + 0x18);
    uVar5 = uVar3;
    if (uVar10 != *(uint *)(lVar11 + 0x18)) goto code_r0x02427170;
    puVar9 = *(undefined8 **)(*(long *)(puRam0000000003d3a7c0[3] + 0xc0) + 0x60);
    uVar5 = (*(code *)*puVar9)(uVar3,uVar10 + 1);
    lVar11 = *(long *)(uVar3 + 0x10);
    uVar10 = *(uint *)(uVar3 + 0x18);
    *(uint *)(uVar3 + 0x18) = uVar10 + 1;
    unaff_x19 = uVar3;
    unaff_x20 = uVar4;
    if (lVar11 == 0) goto code_r0x0242716c;
  }
  if (uVar10 < *(uint *)(lVar11 + 0x18)) {
    *(ulong *)(lVar11 + (long)(int)uVar10 * 8 + 0x20) = uVar4;
    *(int *)(uVar3 + 0x1c) = *(int *)(uVar3 + 0x1c) + 1;
    return uVar5;
  }
  uVar6 = func_0x00f78b24();
  auVar14 = func_0x00f78ac0(uVar6,0);
  lVar8 = auVar14._8_8_;
  lVar11 = auVar14._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x40) = uVar4;
  *(ulong *)((long)register0x00000008 + -0x38) = uVar3;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))(lVar8,0x14);
  if (lVar11 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar13)();
  }
  pcVar13 = (code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x28);
  lVar12 = *(long *)(*(long *)(puVar9[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  if (lVar8 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = func_0x00f78adc(lVar8,lVar12);
    if (lVar7 == 0) {
      func_0x00f78e5c(lVar8,lVar12);
      goto code_r0x0242734c;
    }
  }
  (*pcVar13)(lVar11,lVar7,*(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0x28));
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x68))(lVar11);
  return (ulong)(iVar2 - 1);
}



// ============================================================
// RVA: 0x16300bc | Core.Actors.ActorGroup.MarkForRemove
// ============================================================

/* WARNING: Possible PIC construction at 0x01630164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01630168) */
/* WARNING: Removing unreachable block (ram,0x01630170) */

ulong Core_Actors_ActorGroup__MarkForRemove(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint extraout_w8;
  uint uVar8;
  long lVar9;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 unaff_x20;
  long lVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  
  if ((bRam0000000003eb5647 & 1) == 0) {
    func_0x00f78a20(0x3d3a7c0);
    bRam0000000003eb5647 = 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 == 0) {
    lVar9 = func_0x00f78af4();
    if ((bRam0000000003eb5648 & 1) == 0) {
      func_0x00f78a20(0x3d3a7c8);
      bRam0000000003eb5648 = 1;
    }
    uVar2 = *(ulong *)(lVar9 + 0x18);
    if (uVar2 != 0) {
      uVar3 = uVar2;
      if (0 < *(int *)(uVar2 + 0x18)) {
        uVar3 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar2 + 0x10),0,*(int *)(uVar2 + 0x18),0);
        *(undefined4 *)(uVar2 + 0x18) = 0;
      }
      *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
      return uVar3;
    }
    lVar9 = func_0x00f78af4();
    return (ulong)*(byte *)(lVar9 + 0x10);
  }
  lVar9 = *(long *)(uVar2 + 0x10);
  puVar7 = puRam0000000003d3a7c0;
  if (lVar9 == 0) {
code_r0x0242716c:
    param_2 = unaff_x20;
    uVar2 = unaff_x19;
    uVar3 = func_0x00f78af4();
    lVar9 = extraout_x9;
    uVar8 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar2 + 0x18) = uVar8 + 1;
  }
  else {
    uVar8 = *(uint *)(uVar2 + 0x18);
    uVar3 = uVar2;
    if (uVar8 != *(uint *)(lVar9 + 0x18)) goto code_r0x02427170;
    puVar7 = *(undefined8 **)(*(long *)(puRam0000000003d3a7c0[3] + 0xc0) + 0x60);
    uVar3 = (*(code *)*puVar7)(uVar2,uVar8 + 1);
    lVar9 = *(long *)(uVar2 + 0x10);
    uVar8 = *(uint *)(uVar2 + 0x18);
    *(uint *)(uVar2 + 0x18) = uVar8 + 1;
    unaff_x19 = uVar2;
    unaff_x20 = param_2;
    if (lVar9 == 0) goto code_r0x0242716c;
  }
  if (uVar8 < *(uint *)(lVar9 + 0x18)) {
    *(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20) = param_2;
    *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
    return uVar3;
  }
  uVar4 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar4,0);
  lVar6 = auVar12._8_8_;
  lVar9 = auVar12._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))(lVar6,0x14);
  if (lVar9 != 0) {
    pcVar11 = (code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x28);
    lVar10 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (lVar6 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = func_0x00f78adc(lVar6,lVar10);
      if (lVar5 == 0) {
        func_0x00f78e5c(lVar6,lVar10);
        goto code_r0x0242734c;
      }
    }
    (*pcVar11)(lVar9,lVar5,*(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0x28));
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68))(lVar9);
    return (ulong)(iVar1 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*pcVar11)();
}



// ============================================================
// RVA: 0x1630120 | Core.Actors.ActorGroup.RemoveAll
// ============================================================

/* WARNING: Possible PIC construction at 0x01630164: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01630168) */
/* WARNING: Removing unreachable block (ram,0x01630170) */

ulong Core_Actors_ActorGroup__RemoveAll(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((bRam0000000003eb5648 & 1) == 0) {
    func_0x00f78a20(0x3d3a7c8);
    bRam0000000003eb5648 = 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (uVar1 != 0) {
    uVar3 = uVar1;
    if (0 < *(int *)(uVar1 + 0x18)) {
      uVar3 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar1 + 0x10),0,*(int *)(uVar1 + 0x18),0);
      *(undefined4 *)(uVar1 + 0x18) = 0;
    }
    *(int *)(uVar1 + 0x1c) = *(int *)(uVar1 + 0x1c) + 1;
    return uVar3;
  }
  lVar2 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar2 + 0x10);
}



