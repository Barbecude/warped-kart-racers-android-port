// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Localisation.LocalisationManager.<TrySetLanguageOrUseSystemThenDefault>d__37

// ============================================================
// RVA: 0x164fb0c | Core.Localisation.LocalisationManager.<TrySetLanguageOrUseSystemThenDefault>d__37..ctor
// ============================================================

void Core_Localisation_LocalisationManager__TrySetLanguageOrUseSystemThenDefault_d__37___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1652f5c | Core.Localisation.LocalisationManager.<TrySetLanguageOrUseSystemThenDefault>d__37.System.IDisposable.Dispose
// ============================================================

void Core_Localisation_LocalisationManager__TrySetLanguageOrUseSystemThenDefault_d__37__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x1652f60 | Core.Localisation.LocalisationManager.<TrySetLanguageOrUseSystemThenDefault>d__37.MoveNext
// ============================================================

undefined8
Core_Localisation_LocalisationManager__TrySetLanguageOrUseSystemThenDefault_d__37__MoveNext
          (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  
  if ((bRam0000000003eb57da & 1) == 0) {
    func_0x00f78a20(0x3d230d0);
    bRam0000000003eb57da = 1;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x10) - 1U < 3) {
    uVar6 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
      lVar4 = func_0x00f78af4(0);
      return *(undefined8 *)(lVar4 + 0x18);
    }
    puVar5 = (undefined8 *)(param_1 + 0x28);
    uVar3 = Core_Localisation_LocalisationManager__SupportsLanguage(lVar4,*puVar5,0);
    if ((uVar3 & 1) == 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x50);
      uVar2 = 1;
      uVar3 = Core_Localisation_LocalisationManager__SupportsLanguage(lVar4,*puVar5,1);
      if ((uVar3 & 1) == 0) {
        if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003eb57bf & 1) == 0) {
          func_0x00f78a20(0x3d78e38);
          bRam0000000003eb57bf = 1;
        }
        iVar1 = Core_Localisation_LocalisationManager__SupportsLanguage
                          (lVar4,/*STR('en-US')*/ uRam0000000003d78e38,0);
        if (iVar1 == 0) {
          return 0;
        }
        if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003eb57bf & 1) == 0) {
          puVar5 = (undefined8 *)0x3d78e38;
          func_0x00f78a20(0x3d78e38);
          uVar2 = 0;
          bRam0000000003eb57bf = 1;
          uVar6 = 3;
        }
        else {
          uVar2 = 0;
          uVar6 = 3;
          puVar5 = (undefined8 *)0x3d78e38;
        }
      }
      else {
        uVar6 = 2;
      }
    }
    else {
      uVar2 = 0;
      uVar6 = 1;
    }
    uVar2 = Core_Localisation_LocalisationManager__TrySetLanguage(lVar4,*puVar5,uVar2);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  return uVar2;
}



// ============================================================
// RVA: 0x16530fc | Core.Localisation.LocalisationManager.<TrySetLanguageOrUseSystemThenDefault>d__37.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Localisation_LocalisationManager__TrySetLanguageOrUseSystemThenDefault_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1653104 | Core.Localisation.LocalisationManager.<TrySetLanguageOrUseSystemThenDefault>d__37.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_Localisation_LocalisationManager__TrySetLanguageOrUseSystemThenDefault_d__37__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63678);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1653144 | Core.Localisation.LocalisationManager.<TrySetLanguageOrUseSystemThenDefault>d__37.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Localisation_LocalisationManager__TrySetLanguageOrUseSystemThenDefault_d__37__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



