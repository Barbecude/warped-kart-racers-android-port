// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.CharacterSelectScreen.<OnBeforeEnterCoroutine>d__27

// ============================================================
// RVA: 0x1547af8 | Atlas.UI.Screens.CharacterSelectScreen.<OnBeforeEnterCoroutine>d__27..ctor
// ============================================================

void Atlas_UI_Screens_CharacterSelectScreen__OnBeforeEnterCoroutine_d__27___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1547b24 | Atlas.UI.Screens.CharacterSelectScreen.<OnBeforeEnterCoroutine>d__27.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_CharacterSelectScreen__OnBeforeEnterCoroutine_d__27__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x1547b28 | Atlas.UI.Screens.CharacterSelectScreen.<OnBeforeEnterCoroutine>d__27.MoveNext
// ============================================================

ulong Atlas_UI_Screens_CharacterSelectScreen__OnBeforeEnterCoroutine_d__27__MoveNext
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000003eb4f6c & 1) == 0) {
    func_0x00f78a20(0x3d53040);
    func_0x00f78a20(0x3d27d10);
    bRam0000000003eb4f6c = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0xf8) == 0)) {
code_r0x01547c14:
      auVar9 = func_0x00f78af4();
      uVar6 = auVar9._0_8_;
      *(undefined8 *)(uVar6 + 0x10) = *param_3;
      *(long *)(uVar6 + 0x20) = auVar9._8_8_;
      *(undefined8 **)(uVar6 + 0x28) = param_3;
      return uVar6;
    }
    param_3 = (undefined8 *)0x0;
    lVar3 = Atlas_FrontEnd_FrontEndScene__GetKartPartLoader(*(long *)(lVar8 + 0xf8),0);
    lVar4 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartPartLoader.OnPartLoadedDelegate_TypeInfo*/ uRam0000000003d27d10);
    puVar2 = puRam0000000003d53040;
    *(undefined8 *)(lVar4 + 0x10) = *puRam0000000003d53040;
    *(long *)(lVar4 + 0x20) = lVar8;
    *(undefined8 **)(lVar4 + 0x28) = puVar2;
    if (lVar3 == 0) goto code_r0x01547c14;
    Atlas_Gameplay_Kart_KartPartLoader__add_PartLoaded(lVar3,lVar4,0);
    uVar5 = Atlas_UI_Screens_CharacterSelectScreen__SetupData(lVar8,0);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    uVar7 = 1;
  }
  else {
    if (iVar1 != 1) goto LAB_01547bfc;
    uVar7 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar7;
LAB_01547bfc:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x1547c28 | Atlas.UI.Screens.CharacterSelectScreen.<OnBeforeEnterCoroutine>d__27.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_CharacterSelectScreen__OnBeforeEnterCoroutine_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1547c30 | Atlas.UI.Screens.CharacterSelectScreen.<OnBeforeEnterCoroutine>d__27.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_CharacterSelectScreen__OnBeforeEnterCoroutine_d__27__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62398);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1547c70 | Atlas.UI.Screens.CharacterSelectScreen.<OnBeforeEnterCoroutine>d__27.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_CharacterSelectScreen__OnBeforeEnterCoroutine_d__27__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



