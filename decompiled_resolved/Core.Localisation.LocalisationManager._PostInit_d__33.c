// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Localisation.LocalisationManager.<PostInit>d__33

// ============================================================
// RVA: 0x164f5b4 | Core.Localisation.LocalisationManager.<PostInit>d__33..ctor
// ============================================================

void Core_Localisation_LocalisationManager__PostInit_d__33___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1652950 | Core.Localisation.LocalisationManager.<PostInit>d__33.System.IDisposable.Dispose
// ============================================================

void Core_Localisation_LocalisationManager__PostInit_d__33__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1652954 | Core.Localisation.LocalisationManager.<PostInit>d__33.MoveNext
// ============================================================

undefined8 Core_Localisation_LocalisationManager__PostInit_d__33__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  
  if ((bRam0000000003eb57d9 & 1) == 0) {
    func_0x00f78a20(0x3d2bfb0);
    func_0x00f78a20(0x3d2bf70);
    func_0x00f78a20(0x3d2bdf8);
    func_0x00f78a20(0x3d2bfb8);
    func_0x00f78a20(0x3d2bf78);
    func_0x00f78a20(0x3d2be00);
    func_0x00f78a20(0x3d2fe20);
    func_0x00f78a20(0x3d1c508);
    func_0x00f78a20(0x3d1cf68);
    func_0x00f78a20(0x3d1d488);
    func_0x00f78a20(0x3d1f1b8);
    func_0x00f78a20(0x3d230d8);
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d3feb8);
    func_0x00f78a20(0x3d1e7a8);
    func_0x00f78a20(0x3d1f4b8);
    bRam0000000003eb57d9 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar10 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 == 0) {
code_r0x01652de0:
      func_0x00f78af4();
code_r0x01652de4:
      uVar2 = func_0x00f78b24();
      lVar10 = func_0x00f78ac0(uVar2,0);
      return *(undefined8 *)(lVar10 + 0x18);
    }
    iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_IsDone*/ func_0x01b57080(lVar10 + 0xb8,uRam0000000003d2bfb0);
    if (iVar1 != 0) {
      iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_IsDone*/ func_0x01b57080(lVar10 + 0x78,uRam0000000003d2bf70);
      if (iVar1 != 0) {
        iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_IsDone*/ func_0x01b57080(lVar10 + 0x98,uRam0000000003d2bdf8);
        if (iVar1 != 0) {
          uVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(lVar10 + 0xb8,uRam0000000003d2bfb8);
          *(undefined8 *)(lVar10 + 0x38) = uVar2;
          lVar3 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(lVar10 + 0x78,uRam0000000003d2bf78);
          if (lVar3 != 0) {
            *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
            plVar4 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(lVar10 + 0x98,uRam0000000003d2be00);
            if ((*(long *)(lVar10 + 0x38) != 0) &&
               (lVar3 = *(long *)(*(long *)(lVar10 + 0x38) + 0x20), lVar3 != 0)) {
              uVar2 = func_0x00f78a34(/*TMPro.TMP_FontAsset[]_TypeInfo*/ uRam0000000003d1f4b8,*(undefined4 *)(lVar3 + 0x18));
              *(undefined8 *)(lVar10 + 0x40) = uVar2;
              if ((*(long *)(lVar10 + 0x38) != 0) &&
                 (lVar3 = *(long *)(*(long *)(lVar10 + 0x38) + 0x28), lVar3 != 0)) {
                uVar2 = func_0x00f78a34(/*UnityEngine.Material[]_TypeInfo*/ uRam0000000003d1f1d8,*(undefined4 *)(lVar3 + 0x18));
                *(undefined8 *)(lVar10 + 0x48) = uVar2;
                uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, string>_TypeInfo*/ uRam0000000003d1c508);
                /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar2,uRam0000000003d2fe20);
                *(undefined8 *)(lVar10 + 0x70) = uVar2;
                if (plVar4 != (long *)0x0) {
                  lVar3 = *plVar4;
                  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
                  if (uVar7 != 0) {
                    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.ICollection<LocalisationDataDefinition>_TypeInfo*/ lRam0000000003d1cf68) {
                        puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
                        goto code_r0x01652c14;
                      }
                      piVar9 = piVar9 + 4;
                      uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                  }
                  puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.ICollection<LocalisationDataDefinition>_TypeInfo*/ lRam0000000003d1cf68,0);
code_r0x01652c14:
                  uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                  uVar2 = func_0x00f78a34(/*Core.Localisation.LocalisationData[]_TypeInfo*/ uRam0000000003d1f1b8,uVar2);
                  uVar7 = 0;
                  *(undefined8 *)(lVar10 + 0x20) = uVar2;
                  do {
                    lVar3 = *plVar4;
                    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
                    if (uVar8 != 0) {
                      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.ICollection<LocalisationDataDefinition>_TypeInfo*/ lRam0000000003d1cf68) {
                          puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
                          goto code_r0x01652c94;
                        }
                        piVar9 = piVar9 + 4;
                        uVar8 = uVar8 - 1;
                      } while (uVar8 != 0);
                    }
                    puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.ICollection<LocalisationDataDefinition>_TypeInfo*/ lRam0000000003d1cf68,0);
code_r0x01652c94:
                    iVar1 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                    if ((long)iVar1 <= (long)uVar7) {
                      uVar2 = Core_Localisation_LocalisationManager__GenerateSupportedLanguageList
                                        (lVar10);
                      *(undefined8 *)(lVar10 + 0x28) = uVar2;
                      uVar6 = func_0x00f78aec(/*System.Collections.ObjectModel.ReadOnlyCollection<string>_TypeInfo*/ uRam0000000003d1e7a8);
                      /*System.Collections.ObjectModel.ReadOnlyCollection<TimeZoneInfo>$$.ctor*/ func_0x027bcb1c(uVar6,uVar2,uRam0000000003d3feb8);
                      *(undefined8 *)(lVar10 + 0x30) = uVar6;
                      if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      **(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8) = lVar10;
                      if (((*(ushort *)(/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ lRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ lRam0000000003d230d8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      **(long **)(/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ lRam0000000003d230d8 + 0xb8) = lVar10;
                      *(undefined1 *)(lVar10 + 0xd8) = 1;
                      return 0;
                    }
                    lVar11 = *(long *)(lVar10 + 0x20);
                    lVar3 = *plVar4;
                    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
                    if (uVar8 != 0) {
                      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == /*System.Collections.Generic.IList<LocalisationDataDefinition>_TypeInfo*/ lRam0000000003d1d488) {
                          puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
                          goto code_r0x01652cf8;
                        }
                        piVar9 = piVar9 + 4;
                        uVar8 = uVar8 - 1;
                      } while (uVar8 != 0);
                    }
                    puVar5 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.Generic.IList<LocalisationDataDefinition>_TypeInfo*/ lRam0000000003d1d488,0);
code_r0x01652cf8:
                    lVar3 = (*(code *)*puVar5)(plVar4,uVar7,puVar5[1]);
                    if ((lVar3 == 0) || (lVar11 == 0)) break;
                    if (*(uint *)(lVar11 + 0x18) <= uVar7) goto code_r0x01652de4;
                    uVar6 = *(undefined8 *)(lVar3 + 0x20);
                    uVar2 = *(undefined8 *)(lVar3 + 0x18);
                    lVar11 = lVar11 + uVar7 * 0x18;
                    *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar3 + 0x28);
                    *(undefined8 *)(lVar11 + 0x28) = uVar6;
                    *(undefined8 *)(lVar11 + 0x20) = uVar2;
                    uVar7 = uVar7 + 1;
                  } while( true );
                }
              }
            }
          }
          goto code_r0x01652de0;
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}



// ============================================================
// RVA: 0x1652df0 | Core.Localisation.LocalisationManager.<PostInit>d__33.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Localisation_LocalisationManager__PostInit_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1652df8 | Core.Localisation.LocalisationManager.<PostInit>d__33.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_Localisation_LocalisationManager__PostInit_d__33__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63668);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1652e38 | Core.Localisation.LocalisationManager.<PostInit>d__33.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Localisation_LocalisationManager__PostInit_d__33__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



