// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Localisation.LocalisationManager.<TrySetLanguage>d__36

// ============================================================
// RVA: 0x164fa70 | Core.Localisation.LocalisationManager.<TrySetLanguage>d__36..ctor
// ============================================================

void Core_Localisation_LocalisationManager__TrySetLanguage_d__36___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1652e40 | Core.Localisation.LocalisationManager.<TrySetLanguage>d__36.System.IDisposable.Dispose
// ============================================================

void Core_Localisation_LocalisationManager__TrySetLanguage_d__36__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1652e44 | Core.Localisation.LocalisationManager.<TrySetLanguage>d__36.MoveNext
// ============================================================

undefined8 Core_Localisation_LocalisationManager__TrySetLanguage_d__36__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar3 = *(long *)(param_1 + 0x28);
    uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x20),0);
    if ((uVar2 & 1) == 0) {
      if (lVar3 == 0) {
LAB_01652f08:
        lVar3 = func_0x00f78af4();
        return *(undefined8 *)(lVar3 + 0x18);
      }
      uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar3 + 0x58),0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(lVar3 + 0x58) == 0) goto LAB_01652f08;
        uVar2 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar3 + 0x58),*(undefined8 *)(param_1 + 0x20),5,0);
        if ((uVar2 & 1) != 0) {
          return 0;
        }
      }
      iVar1 = Core_Localisation_LocalisationManager__TryGetLocalisationData
                        (lVar3,*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x30),
                         &uStack_38);
      if (iVar1 != 0) {
        Core_Localisation_LocalisationManager__SetFontAndMaterialAssetMappings(lVar3,uStack_38);
        uStack_48 = uStack_30;
        uStack_50 = uStack_38;
        uStack_40 = uStack_28;
        Core_Localisation_LocalisationManager__Set(lVar3,*(undefined8 *)(lVar3 + 0x18),&uStack_50);
      }
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x1652f0c | Core.Localisation.LocalisationManager.<TrySetLanguage>d__36.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Localisation_LocalisationManager__TrySetLanguage_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1652f14 | Core.Localisation.LocalisationManager.<TrySetLanguage>d__36.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_Localisation_LocalisationManager__TrySetLanguage_d__36__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63670);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1652f54 | Core.Localisation.LocalisationManager.<TrySetLanguage>d__36.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Localisation_LocalisationManager__TrySetLanguage_d__36__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



