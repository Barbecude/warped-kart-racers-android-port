// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FrontEndContext.<OnDeInit>d__45

// ============================================================
// RVA: 0x154d8bc | Atlas.FrontEnd.FrontEndContext.<OnDeInit>d__45..ctor
// ============================================================

void Atlas_FrontEnd_FrontEndContext__OnDeInit_d__45___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154d8e8 | Atlas.FrontEnd.FrontEndContext.<OnDeInit>d__45.System.IDisposable.Dispose
// ============================================================

void Atlas_FrontEnd_FrontEndContext__OnDeInit_d__45__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x154d8ec | Atlas.FrontEnd.FrontEndContext.<OnDeInit>d__45.MoveNext
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndContext__OnDeInit_d__45__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long *extraout_x8;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000003eb4f7e & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d56b70);
    func_0x00f78a20(0x3d3e0f8);
    func_0x00f78a20(0x3d3e190);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb4f7e = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
      /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar4 + 0x18),0,0);
      if (*(long *)(lVar4 + 0x18) != 0) {
        /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar4 + 0x18),4,0);
        if (*(long *)(lVar4 + 0x70) != 0) {
          /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$RemoveAllQueuedAndShowing*/ func_0x025e0480(*(long *)(lVar4 + 0x70),0,uRam0000000003d3e190);
          if (*(long *)(lVar4 + 0x68) != 0) {
            /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$RemoveAllQueuedAndShowing*/ func_0x025e0480(*(long *)(lVar4 + 0x68),0,uRam0000000003d3e0f8);
            if (*(long *)(lVar4 + 0xa8) != 0) {
              /*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(*(long *)(lVar4 + 0xa8),0);
              if (*(long *)(lVar4 + 0x40) != 0) {
                /*Core.Assets.AssetManager$$PurgeAllAssets*/ func_0x016357f8(*(long *)(lVar4 + 0x40),/*STR('FrontEndContext')*/ uRam0000000003d6d050,0);
                lVar6 = *(long *)(lVar4 + 0x60);
                if (lVar6 != 0) {
                  uVar5 = *(undefined8 *)(lVar6 + 0x48);
                  uVar2 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
                  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,lVar4,uRam0000000003d56b70,uRam0000000003d2a320);
                  plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar2,0);
                  if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
                    *(long **)(lVar6 + 0x48) = plVar3;
                    return 0;
                  }
                  goto code_r0x0154db0c;
                }
              }
            }
          }
        }
      }
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 != 0) {
      Atlas_FrontEnd_FrontEndContext__DeInitStates(lVar4,0);
      if (*(long *)(lVar4 + 0x118) != 0) {
        uVar2 = /*Atlas.FrontEnd.FrontEndScene$$DeInit*/ func_0x01593e6c(*(long *)(lVar4 + 0x118),0);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        *(undefined4 *)(param_1 + 0x10) = 2;
        return 1;
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x80) != 0)) {
      uVar2 = /*Atlas.Save.SaveManager$$FlushScheduledSaveIfAnyAndWait*/ func_0x014eb6b8(*(long *)(lVar4 + 0x80),0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  func_0x00f78af4();
  plVar3 = extraout_x8;
code_r0x0154db0c:
  lVar4 = func_0x00f78e5c(plVar3);
  return *(undefined8 *)(lVar4 + 0x18);
}



// ============================================================
// RVA: 0x154db14 | Atlas.FrontEnd.FrontEndContext.<OnDeInit>d__45.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndContext__OnDeInit_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x154db1c | Atlas.FrontEnd.FrontEndContext.<OnDeInit>d__45.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndContext__OnDeInit_d__45__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62e30);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x154db5c | Atlas.FrontEnd.FrontEndContext.<OnDeInit>d__45.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndContext__OnDeInit_d__45__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



