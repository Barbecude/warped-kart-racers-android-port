// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Application.CoroutineRunner

// ============================================================
// RVA: 0x163344c | Core.Application.CoroutineRunner.Init
// ============================================================

void Core_Application_CoroutineRunner__Init(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb5669 & 1) == 0) {
    func_0x00f78a20(0x3d576c0);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d3a8d0);
    func_0x00f78a20(0x3d3bf98);
    func_0x00f78a20(0x3d1d9f8);
    func_0x00f78a20(0x3d1de30);
    func_0x00f78a20(0x3d6af78);
    bRam0000000003eb5669 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar1,/*STR('CoroutineRunner')*/ uRam0000000003d6af78,0);
  *(long *)(param_1 + 0x10) = lVar1;
  if ((lVar1 != 0) && (lVar1 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar1,0), lVar1 != 0)) {
    /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar1,param_2,0,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = /*UnityEngine.GameObject$$AddComponent<TMP_Dropdown.DropdownItem>*/ func_0x0185d080(*(long *)(param_1 + 0x10),uRam0000000003d576c0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<IEnumerator>_TypeInfo*/ uRam0000000003d1d9f8);
      /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar2,0x40,uRam0000000003d3a8d0);
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
      /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar2,0x40,uRam0000000003d3bf98);
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      return;
    }
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb566a & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb566a = 1;
  }
  Core_Application_CoroutineRunner__StopAllCoroutines(lVar1);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar2,0);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return;
}



// ============================================================
// RVA: 0x16335ac | Core.Application.CoroutineRunner.DeInit
// ============================================================

void Core_Application_CoroutineRunner__DeInit(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb566a & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb566a = 1;
  }
  Core_Application_CoroutineRunner__StopAllCoroutines(param_1);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar1,0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// ============================================================
// RVA: 0x16336d0 | Core.Application.CoroutineRunner.StartCoroutine
// ============================================================

/* WARNING: Possible PIC construction at 0x01633784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01633788) */
/* WARNING: Removing unreachable block (ram,0x0163378c) */
/* WARNING: Removing unreachable block (ram,0x01633798) */
/* WARNING: Removing unreachable block (ram,0x016337b4) */
/* WARNING: Removing unreachable block (ram,0x016337d0) */
/* WARNING: Removing unreachable block (ram,0x01633848) */
/* WARNING: Removing unreachable block (ram,0x01633828) */

void Core_Application_CoroutineRunner__StartCoroutine(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    func_0x00f78af4();
    if ((bRam0000000003eb566b & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d3bfa0);
      func_0x00f78a20(0x3d3a8d8);
      func_0x00f78a20(0x3d3a8e8);
      func_0x00f78a20(0x3d62580);
      func_0x00f78a20(0x3d26db0);
      bRam0000000003eb566b = 1;
    }
    func_0x00f78aec(/*Core.Application.CoroutineRunner.<>c__DisplayClass7_0_TypeInfo*/ uRam0000000003d26db0);
    return;
  }
  if (param_2 == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar3 = func_0x00f78aec();
    uVar4 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar3,uVar4,0);
  }
  else {
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar2 = (*pcRam0000000003ec01d0)(lVar1);
    if ((uVar2 & 1) != 0) {
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec01e0)(lVar1,param_2);
      return;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar3 = func_0x00f78aec();
    uVar4 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar3,uVar4,0);
  }
  uVar4 = func_0x00f78a24(0x3d5a8a8);
  auVar5 = func_0x00f78ac0(uVar3,uVar4);
  if (pcRam0000000003ec01e0 == (code *)0x0) {
    pcRam0000000003ec01e0 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec01e0)(auVar5._0_8_,auVar5._8_8_);
  return;
}



// ============================================================
// RVA: 0x16336f0 | Core.Application.CoroutineRunner.StartTrackedCoroutine
// ============================================================

/* WARNING: Possible PIC construction at 0x01633784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01633788) */
/* WARNING: Removing unreachable block (ram,0x0163378c) */
/* WARNING: Removing unreachable block (ram,0x01633798) */
/* WARNING: Removing unreachable block (ram,0x016337b4) */
/* WARNING: Removing unreachable block (ram,0x016337d0) */
/* WARNING: Removing unreachable block (ram,0x01633848) */
/* WARNING: Removing unreachable block (ram,0x01633828) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */

void Core_Application_CoroutineRunner__StartTrackedCoroutine(void)

{
  if ((bRam0000000003eb566b & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3a8d8);
    func_0x00f78a20(0x3d3a8e8);
    func_0x00f78a20(0x3d62580);
    func_0x00f78a20(0x3d26db0);
    bRam0000000003eb566b = 1;
  }
  func_0x00f78aec(/*Core.Application.CoroutineRunner.<>c__DisplayClass7_0_TypeInfo*/ uRam0000000003d26db0);
  return;
}



// ============================================================
// RVA: 0x16338c4 | Core.Application.CoroutineRunner.LogRunningRoutines
// ============================================================

ulong Core_Application_CoroutineRunner__LogRunningRoutines(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  int extraout_w1;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  if ((bRam0000000003eb566c & 1) == 0) {
    func_0x00f78a20(0x3d32f80);
    func_0x00f78a20(0x3d32f88);
    func_0x00f78a20(0x3d32f90);
    func_0x00f78a20(0x3d3bfd0);
    uVar2 = func_0x00f78a20(0x3d3a908);
    bRam0000000003eb566c = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) < 1) {
      return uVar2;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_38,*(long *)(param_1 + 0x28),uRam0000000003d3bfd0);
      do {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_38,uRam0000000003d32f88);
      } while ((uVar2 & 1) != 0);
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_38,uRam0000000003d32f80);
      return uVar2;
    }
  }
  auVar8 = func_0x00f78af4();
  if (auVar8._8_4_ == 1) {
    uVar2 = func_0x032ff47c(auVar8._0_8_,auVar8._8_8_,&uStack_38);
    return uVar2;
  }
  lVar3 = __Unwind_Resume();
  if ((bRam0000000003eb566d & 1) == 0) {
    func_0x00f78a20(0x3d3a908);
    bRam0000000003eb566d = 1;
  }
  if (*(long *)(lVar3 + 0x20) != 0) {
    return (ulong)(0 < *(int *)(*(long *)(lVar3 + 0x20) + 0x18));
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb566e & 1) == 0) {
    func_0x00f78a20(0x3d32650);
    func_0x00f78a20(0x3d32658);
    func_0x00f78a20(0x3d32660);
    func_0x00f78a20(0x3d3bfb8);
    func_0x00f78a20(0x3d3a8e0);
    func_0x00f78a20(0x3d3a8f0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb566e = 1;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uVar6 = *(undefined8 *)(lVar3 + 0x18);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  Core_Application_CoroutineRunner__LogRunningRoutines(lVar3);
  if (*(long *)(lVar3 + 0x20) == 0) goto LAB_01633b80;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(lVar3 + 0x20),uRam0000000003d3a8f0);
  while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a8,uRam0000000003d32658), (uVar2 & 1) != 0) {
    if (*(long *)(lVar3 + 0x18) == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1633b80);
      (*pcVar1)();
    }
    /*UnityEngine.MonoBehaviour$$StopCoroutine*/ func_0x03247fc0(*(long *)(lVar3 + 0x18),uStack_98,0);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,uRam0000000003d32650);
  do {
    if (*(long *)(lVar3 + 0x20) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar3 + 0x20),uRam0000000003d3a8e0);
      if (*(long *)(lVar3 + 0x28) != 0) {
        uVar2 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar3 + 0x28),uRam0000000003d3bfb8);
        return uVar2;
      }
    }
LAB_01633b80:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto LAB_01633bc4;
    plVar4 = (long *)___cxa_begin_catch();
    lVar7 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,uRam0000000003d32650);
  } while (lVar7 == 0);
  func_0x00f78ac0(lVar7,0);
LAB_01633bc4:
  auVar8 = __Unwind_Resume();
  if ((bRam0000000003eb5670 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5670 = 1;
  }
  uVar6 = *(undefined8 *)(auVar8._0_8_ + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = *(long *)(auVar8._0_8_ + 0x18);
  if (lVar3 == 0) {
    auVar9 = func_0x00f78af4();
    uVar2 = /*System.Object$$.ctor*/ func_0x0294d018(auVar9._0_8_,0);
    *(int *)(auVar9._0_8_ + 0x10) = auVar9._8_4_;
    return uVar2;
  }
  if (auVar8._8_8_ == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar5 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar5,uVar6,0);
  }
  else {
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar2 = (*pcRam0000000003ec01d0)(lVar3);
    if ((uVar2 & 1) != 0) {
      if (pcRam0000000003ec01e8 == (code *)0x0) {
        pcRam0000000003ec01e8 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam0000000003ec01e8)(lVar3,auVar8._8_8_);
      return uVar2;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar5 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar5,uVar6,0);
  }
  uVar6 = func_0x00f78a24(0x3d5a8b8);
  auVar8 = func_0x00f78ac0(uVar5,uVar6);
  if (pcRam0000000003ec01e8 == (code *)0x0) {
    pcRam0000000003ec01e8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pcRam0000000003ec01e8)(auVar8._0_8_,auVar8._8_8_);
  return uVar2;
}



// ============================================================
// RVA: 0x16339b8 | Core.Application.CoroutineRunner.TrackedRoutinesStillRunning
// ============================================================

ulong Core_Application_CoroutineRunner__TrackedRoutinesStillRunning(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  int extraout_w1;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb566d & 1) == 0) {
    func_0x00f78a20(0x3d3a908);
    bRam0000000003eb566d = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    return (ulong)(0 < *(int *)(*(long *)(param_1 + 0x20) + 0x18));
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb566e & 1) == 0) {
    func_0x00f78a20(0x3d32650);
    func_0x00f78a20(0x3d32658);
    func_0x00f78a20(0x3d32660);
    func_0x00f78a20(0x3d3bfb8);
    func_0x00f78a20(0x3d3a8e0);
    func_0x00f78a20(0x3d3a8f0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb566e = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uVar6 = *(undefined8 *)(lVar2 + 0x18);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  Core_Application_CoroutineRunner__LogRunningRoutines(lVar2);
  if (*(long *)(lVar2 + 0x20) == 0) goto LAB_01633b80;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(lVar2 + 0x20),uRam0000000003d3a8f0);
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d32658), (uVar3 & 1) != 0) {
    if (*(long *)(lVar2 + 0x18) == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1633b80);
      (*pcVar1)();
    }
    /*UnityEngine.MonoBehaviour$$StopCoroutine*/ func_0x03247fc0(*(long *)(lVar2 + 0x18),uStack_58,0);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32650);
  do {
    if (*(long *)(lVar2 + 0x20) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar2 + 0x20),uRam0000000003d3a8e0);
      if (*(long *)(lVar2 + 0x28) != 0) {
        uVar3 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar2 + 0x28),uRam0000000003d3bfb8);
        return uVar3;
      }
    }
LAB_01633b80:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto LAB_01633bc4;
    plVar4 = (long *)___cxa_begin_catch();
    lVar7 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32650);
  } while (lVar7 == 0);
  func_0x00f78ac0(lVar7,0);
LAB_01633bc4:
  auVar8 = __Unwind_Resume();
  if ((bRam0000000003eb5670 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5670 = 1;
  }
  uVar6 = *(undefined8 *)(auVar8._0_8_ + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar2 = *(long *)(auVar8._0_8_ + 0x18);
  if (lVar2 == 0) {
    auVar9 = func_0x00f78af4();
    uVar3 = /*System.Object$$.ctor*/ func_0x0294d018(auVar9._0_8_,0);
    *(int *)(auVar9._0_8_ + 0x10) = auVar9._8_4_;
    return uVar3;
  }
  if (auVar8._8_8_ == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar5 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar5,uVar6,0);
  }
  else {
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar3 = (*pcRam0000000003ec01d0)(lVar2);
    if ((uVar3 & 1) != 0) {
      if (pcRam0000000003ec01e8 == (code *)0x0) {
        pcRam0000000003ec01e8 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000003ec01e8)(lVar2,auVar8._8_8_);
      return uVar3;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar5 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar5,uVar6,0);
  }
  uVar6 = func_0x00f78a24(0x3d5a8b8);
  auVar8 = func_0x00f78ac0(uVar5,uVar6);
  if (pcRam0000000003ec01e8 == (code *)0x0) {
    pcRam0000000003ec01e8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*pcRam0000000003ec01e8)(auVar8._0_8_,auVar8._8_8_);
  return uVar3;
}



// ============================================================
// RVA: 0x1633a0c | Core.Application.CoroutineRunner.StopTrackedCoroutines
// ============================================================

void Core_Application_CoroutineRunner__StopTrackedCoroutines(long param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  int extraout_w1;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb566e & 1) == 0) {
    func_0x00f78a20(0x3d32650);
    func_0x00f78a20(0x3d32658);
    func_0x00f78a20(0x3d32660);
    func_0x00f78a20(0x3d3bfb8);
    func_0x00f78a20(0x3d3a8e0);
    func_0x00f78a20(0x3d3a8f0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb566e = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if (iVar2 == 0) {
    return;
  }
  Core_Application_CoroutineRunner__LogRunningRoutines(param_1);
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_01633b80;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*(long *)(param_1 + 0x20),uRam0000000003d3a8f0);
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d32658), (uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1633b80);
      (*pcVar1)();
    }
    /*UnityEngine.MonoBehaviour$$StopCoroutine*/ func_0x03247fc0(*(long *)(param_1 + 0x18),uStack_38,0);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32650);
  do {
    if (*(long *)(param_1 + 0x20) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x20),uRam0000000003d3a8e0);
      if (*(long *)(param_1 + 0x28) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x28),uRam0000000003d3bfb8);
        return;
      }
    }
LAB_01633b80:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto LAB_01633bc4;
    plVar4 = (long *)___cxa_begin_catch();
    lVar7 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d32650);
  } while (lVar7 == 0);
  func_0x00f78ac0(lVar7,0);
LAB_01633bc4:
  auVar8 = __Unwind_Resume();
  if ((bRam0000000003eb5670 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5670 = 1;
  }
  uVar6 = *(undefined8 *)(auVar8._0_8_ + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if (iVar2 == 0) {
    return;
  }
  lVar7 = *(long *)(auVar8._0_8_ + 0x18);
  if (lVar7 == 0) {
    auVar9 = func_0x00f78af4();
    /*System.Object$$.ctor*/ func_0x0294d018(auVar9._0_8_,0);
    *(int *)(auVar9._0_8_ + 0x10) = auVar9._8_4_;
    return;
  }
  if (auVar8._8_8_ == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar5 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar5,uVar6,0);
  }
  else {
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar3 = (*pcRam0000000003ec01d0)(lVar7);
    if ((uVar3 & 1) != 0) {
      if (pcRam0000000003ec01e8 == (code *)0x0) {
        pcRam0000000003ec01e8 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec01e8)(lVar7,auVar8._8_8_);
      return;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar5 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar5,uVar6,0);
  }
  uVar6 = func_0x00f78a24(0x3d5a8b8);
  auVar8 = func_0x00f78ac0(uVar5,uVar6);
  if (pcRam0000000003ec01e8 == (code *)0x0) {
    pcRam0000000003ec01e8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec01e8)(auVar8._0_8_,auVar8._8_8_);
  return;
}



// ============================================================
// RVA: 0x1633634 | Core.Application.CoroutineRunner.StopAllCoroutines
// ============================================================

/* WARNING: Possible PIC construction at 0x01633784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01633788) */
/* WARNING: Removing unreachable block (ram,0x0163378c) */
/* WARNING: Removing unreachable block (ram,0x01633798) */
/* WARNING: Removing unreachable block (ram,0x016337b4) */
/* WARNING: Removing unreachable block (ram,0x016337d0) */
/* WARNING: Removing unreachable block (ram,0x01633848) */
/* WARNING: Removing unreachable block (ram,0x01633828) */

void Core_Application_CoroutineRunner__StopAllCoroutines(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb566f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb566f = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
  if (iVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if (pcRam0000000003ec0188 == (code *)0x0) {
      pcRam0000000003ec0188 =
           (code *)func_0x00f789d4("UnityEngine.MonoBehaviour::StopAllCoroutines()");
    }
                    /* WARNING: Could not recover jumptable at 0x032482e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec0188)(lVar2);
    return;
  }
  auVar6 = func_0x00f78af4();
  lVar2 = *(long *)(auVar6._0_8_ + 0x18);
  if (lVar2 != 0) {
    if (auVar6._8_8_ == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar4 = func_0x00f78aec();
      uVar5 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar4,uVar5,0);
    }
    else {
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar3 = (*pcRam0000000003ec01d0)(lVar2);
      if ((uVar3 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003ec01e0)(lVar2,auVar6._8_8_);
        return;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar4 = func_0x00f78aec();
      uVar5 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar4,uVar5,0);
    }
    uVar5 = func_0x00f78a24(0x3d5a8a8);
    auVar6 = func_0x00f78ac0(uVar4,uVar5);
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec01e0)(auVar6._0_8_,auVar6._8_8_);
    return;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb566b & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3a8d8);
    func_0x00f78a20(0x3d3a8e8);
    func_0x00f78a20(0x3d62580);
    func_0x00f78a20(0x3d26db0);
    bRam0000000003eb566b = 1;
  }
  func_0x00f78aec(/*Core.Application.CoroutineRunner.<>c__DisplayClass7_0_TypeInfo*/ uRam0000000003d26db0);
  return;
}



// ============================================================
// RVA: 0x1633bc8 | Core.Application.CoroutineRunner.StopCoroutine
// ============================================================

void Core_Application_CoroutineRunner__StopCoroutine(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  
  if ((bRam0000000003eb5670 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5670 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
  if (iVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    auVar7 = func_0x00f78af4();
    /*System.Object$$.ctor*/ func_0x0294d018(auVar7._0_8_,0);
    *(int *)(auVar7._0_8_ + 0x10) = auVar7._8_4_;
    return;
  }
  if (param_2 == 0) {
    func_0x00f78a24(0x3d23938,0,0);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d7b500);
    /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar4,uVar5,0);
  }
  else {
    if (pcRam0000000003ec01d0 == (code *)0x0) {
      pcRam0000000003ec01d0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                  );
    }
    uVar3 = (*pcRam0000000003ec01d0)(lVar2);
    if ((uVar3 & 1) != 0) {
      if (pcRam0000000003ec01e8 == (code *)0x0) {
        pcRam0000000003ec01e8 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec01e8)(lVar2,param_2);
      return;
    }
    func_0x00f78a24(0x3d1fce8);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d6af80);
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar4,uVar5,0);
  }
  uVar5 = func_0x00f78a24(0x3d5a8b8);
  auVar6 = func_0x00f78ac0(uVar4,uVar5);
  if (pcRam0000000003ec01e8 == (code *)0x0) {
    pcRam0000000003ec01e8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec01e8)(auVar6._0_8_,auVar6._8_8_);
  return;
}



// ============================================================
// RVA: 0x1633854 | Core.Application.CoroutineRunner.Runner
// ============================================================

long Core_Application_CoroutineRunner__Runner
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((bRam0000000003eb5671 & 1) == 0) {
    func_0x00f78a20(0x3d26db8);
    bRam0000000003eb5671 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Application.CoroutineRunner.<Runner>d__13_TypeInfo*/ uRam0000000003d26db8);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  return lVar1;
}



// ============================================================
// RVA: 0x1633c98 | Core.Application.CoroutineRunner..ctor
// ============================================================

void Core_Application_CoroutineRunner___ctor(void)

{
  return;
}



