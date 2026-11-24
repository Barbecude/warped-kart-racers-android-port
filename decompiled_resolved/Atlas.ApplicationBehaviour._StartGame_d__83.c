// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.ApplicationBehaviour.<StartGame>d__83

// ============================================================
// RVA: 0x15333ac | Atlas.ApplicationBehaviour.<StartGame>d__83..ctor
// ============================================================

void Atlas_ApplicationBehaviour__StartGame_d__83___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15333d8 | Atlas.ApplicationBehaviour.<StartGame>d__83.System.IDisposable.Dispose
// ============================================================

void Atlas_ApplicationBehaviour__StartGame_d__83__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x15333dc | Atlas.ApplicationBehaviour.<StartGame>d__83.MoveNext
// ============================================================

undefined8 Atlas_ApplicationBehaviour__StartGame_d__83__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam0000000003eb4eb5 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dbf8);
    func_0x00f78a20(0x3d2dc20);
    func_0x00f78a20(0x3d21a08);
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb4eb5 = 1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x48) == 0)) || (*(long *)(lVar7 + 0x188) == 0))
  goto LAB_015336c4;
  uVar4 = *(undefined8 *)(*(long *)(lVar7 + 0x48) + 0x20);
  lVar2 = Atlas_FrontEnd_FTUEManager__GetCurrentStage(*(long *)(lVar7 + 0x188),0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar2,0,0);
  lVar5 = 0;
  if (iVar1 != 0) {
    if (lVar2 == 0) goto LAB_015336c4;
    lVar5 = Atlas_Definitions_FTUEStageDefinition__get_GameContextDefinition(lVar2,0);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    lVar5 = 0;
    if (iVar1 != 0) {
      lVar5 = Atlas_Definitions_FTUEStageDefinition__get_GameContextDefinition(lVar2,0);
      uVar6 = *(undefined8 *)(lVar5 + 8);
      lVar5 = Atlas_Definitions_FTUEStageDefinition__get_EventDefinition(lVar2,0);
      lVar5 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase
                        (uVar6,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar7 + 0x80),
                         *(undefined8 *)(lVar7 + 0x198),*(undefined8 *)(lVar7 + 0x158),0);
    }
  }
  uVar3 = /*System.String$$IsNullOrWhiteSpace*/ func_0x029cb114(0,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(lVar7 + 0x80) == 0) goto LAB_015336c4;
    lVar2 = *(long *)(*(long *)(lVar7 + 0x80) + 0x10);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
    if (lVar2 == 0) goto LAB_015336c4;
    lVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,uVar4,uRam0000000003d57288);
    if (*(long *)(lVar7 + 0x80) == 0) goto LAB_015336c4;
    lVar5 = *(long *)(*(long *)(lVar7 + 0x80) + 0x10);
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
    if ((lVar5 == 0) || (uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,uVar4,uRam0000000003d572d8), lVar2 == 0))
    goto LAB_015336c4;
    lVar7 = *(long *)(lVar7 + 0xa8);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    lVar5 = Atlas_Contexts_ContextManagerExtensions__ContextToInfoBase(lVar2,uVar4,0);
  }
  else {
    if ((lVar5 != 0) && (iVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar4,0), iVar1 != 0)) {
      if (lVar2 == 0) goto LAB_015336c4;
      lVar7 = *(long *)(lVar7 + 0xa8);
      lVar2 = Atlas_Definitions_FTUEStageDefinition__get_GameContextDefinition(lVar2,0);
      if ((*(long *)(lVar2 + 8) == 0) || (lVar7 == 0)) goto LAB_015336c4;
      uVar6 = *(undefined8 *)(*(long *)(lVar2 + 8) + 0x30);
      goto LAB_015336a4;
    }
    lVar5 = func_0x00f78aec(/*Atlas.FrontEnd.FrontEndContextInfo_TypeInfo*/ uRam0000000003d21a08);
    Atlas_FrontEnd_FrontEndContextInfo___ctor(lVar5,0);
    if (lVar5 == 0) goto LAB_015336c4;
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    lVar7 = *(long *)(lVar7 + 0xa8);
    uVar6 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
  }
  if (lVar7 == 0) {
LAB_015336c4:
    lVar7 = func_0x00f78af4();
    return *(undefined8 *)(lVar7 + 0x18);
  }
LAB_015336a4:
  /*Core.Contexts.ContextManager$$RequestContextChange*/ func_0x0163d6f8(lVar7,uVar6,lVar5,0);
  return 0;
}



// ============================================================
// RVA: 0x15336c8 | Atlas.ApplicationBehaviour.<StartGame>d__83.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__StartGame_d__83__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15336d0 | Atlas.ApplicationBehaviour.<StartGame>d__83.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_ApplicationBehaviour__StartGame_d__83__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d61ff0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1533710 | Atlas.ApplicationBehaviour.<StartGame>d__83.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__StartGame_d__83__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



