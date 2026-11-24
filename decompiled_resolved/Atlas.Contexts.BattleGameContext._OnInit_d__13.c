// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.BattleGameContext.<OnInit>d__13

// ============================================================
// RVA: 0x15471f0 | Atlas.Contexts.BattleGameContext.<OnInit>d__13..ctor
// ============================================================

void Atlas_Contexts_BattleGameContext__OnInit_d__13___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154721c | Atlas.Contexts.BattleGameContext.<OnInit>d__13.System.IDisposable.Dispose
// ============================================================

void Atlas_Contexts_BattleGameContext__OnInit_d__13__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1547220 | Atlas.Contexts.BattleGameContext.<OnInit>d__13.MoveNext
// ============================================================

ulong Atlas_Contexts_BattleGameContext__OnInit_d__13__MoveNext(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4f66 & 1) == 0) {
    func_0x00f78a20(0x3d2a4a8);
    func_0x00f78a20(0x3d1b668);
    func_0x00f78a20(0x3d52848);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d55088);
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d57288);
    bRam0000000003eb4f66 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + 0x260) = 1;
      uVar4 = Atlas_Contexts_BattleGameContext____n__0
                        (lVar6,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      *(undefined4 *)(param_1 + 0x10) = 1;
      goto LAB_015474bc;
    }
  }
  else {
    if (iVar1 != 1) {
LAB_015474bc:
      return (ulong)(iVar1 == 0);
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((((*(long *)(param_1 + 0x30) != 0) &&
         (lVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x30),uRam0000000003d55150), lVar6 != 0)) &&
        (*(long *)(lVar6 + 600) = lVar3, lVar3 != 0)) && (*(long *)(lVar3 + 0x20) != 0)) {
      /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_68,*(long *)(lVar3 + 0x20),0);
      *(undefined8 *)(lVar6 + 0x278) = uStack_60;
      *(undefined8 *)(lVar6 + 0x270) = uStack_68;
      *(undefined8 *)(lVar6 + 0x280) = uStack_58;
      if (*(long *)(lVar6 + 0x38) != 0) {
        *(undefined2 *)(*(long *)(lVar6 + 0x38) + 0x80) = 1;
        if (*(long *)(param_1 + 0x30) != 0) {
          lVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x30),uRam0000000003d55088);
          *(long *)(lVar6 + 0x250) = lVar3;
          if (lVar3 != 0) {
            /*Atlas.Audio.AtlasAudioManager$$ResetTimeRemaining*/ func_0x01459830(lVar3,0);
            if (((*(long *)(lVar6 + 600) != 0) &&
                (lVar3 = *(long *)(*(long *)(lVar6 + 600) + 0x20), lVar3 != 0)) &&
               (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
              uVar7 = *(undefined8 *)(lVar3 + 0xa0);
              uVar4 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
              /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar4,lVar6,uRam0000000003d52848,uRam0000000003d2a4a8);
              plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar7,uVar4,0);
              if (plVar5 != (long *)0x0) {
                if (*plVar5 != /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668) goto LAB_015474e4;
              }
              *(long **)(lVar3 + 0xa0) = plVar5;
              if (((*(long *)(param_1 + 0x30) != 0) &&
                  (lVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x30),uRam0000000003d55090),
                  lVar3 != 0)) && (*(long *)(lVar6 + 0x1c0) != 0)) {
                lVar8 = *(long *)(lVar3 + 0x10);
                uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0x1c0) + 0x10);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar4,0);
                if ((lVar8 != 0) &&
                   (lVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,uVar4,uRam0000000003d57288), lVar8 != 0)) {
                  *(undefined4 *)(lVar6 + 0x264) = *(undefined4 *)(lVar8 + 0x74);
                  if (*(long *)(lVar6 + 0x1c0) != 0) {
                    lVar3 = *(long *)(lVar3 + 0x10);
                    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(*(undefined8 *)(*(long *)(lVar6 + 0x1c0) + 0x10),0);
                    if ((lVar3 != 0) &&
                       (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uVar4,uRam0000000003d57288), lVar3 != 0)) {
                      uVar2 = /*Atlas.Definitions.GameContextDefinition$$get_FrenzyDuration*/ func_0x015a4c9c(lVar3,0);
                      *(undefined4 *)(lVar6 + 0x268) = uVar2;
                      *(undefined1 *)(lVar6 + 0x26c) = 0;
                      goto LAB_015474bc;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_015474e4:
  lVar6 = func_0x00f78e5c();
  return *(ulong *)(lVar6 + 0x18);
}



// ============================================================
// RVA: 0x15474e8 | Atlas.Contexts.BattleGameContext.<OnInit>d__13.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Contexts_BattleGameContext__OnInit_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15474f0 | Atlas.Contexts.BattleGameContext.<OnInit>d__13.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Contexts_BattleGameContext__OnInit_d__13__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62278);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1547530 | Atlas.Contexts.BattleGameContext.<OnInit>d__13.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Contexts_BattleGameContext__OnInit_d__13__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



