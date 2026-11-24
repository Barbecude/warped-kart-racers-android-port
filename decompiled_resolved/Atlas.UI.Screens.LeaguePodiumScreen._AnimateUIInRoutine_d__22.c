// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22

// ============================================================
// RVA: 0x155bcf4 | Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22..ctor
// ============================================================

void Atlas_UI_Screens_LeaguePodiumScreen__AnimateUIInRoutine_d__22___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x155bd20 | Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_LeaguePodiumScreen__AnimateUIInRoutine_d__22__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x155bd24 | Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22.MoveNext
// ============================================================

long Atlas_UI_Screens_LeaguePodiumScreen__AnimateUIInRoutine_d__22__MoveNext(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int iStack_34;
  
  if ((bRam0000000003eb4faf & 1) == 0) {
    func_0x00f78a20(0x3d410f8);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d790c0);
    func_0x00f78a20(0x3d788d0);
    bRam0000000003eb4faf = 1;
  }
  lVar1 = 0;
  if (3 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  uVar3 = 0xffffffff;
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) goto code_r0x0155bf74;
    puVar6 = (undefined8 *)(lVar7 + 0x88);
    uVar3 = 1;
    goto code_r0x0155bf50;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((lVar7 == 0) || (lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d410f8), lVar1 == 0)) ||
       (*(long *)(lVar1 + 0x68) == 0)) goto code_r0x0155bf74;
    iVar4 = *(int *)(*(long *)(lVar1 + 0x68) + 0x18);
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar4 = *(int *)(param_1 + 0x28);
    break;
  case 3:
    goto code_r0x0155bf5c;
  }
  *(int *)(param_1 + 0x28) = iVar4 + -1;
  if (iVar4 + -1 < 0) {
    if (lVar7 != 0) {
      puVar6 = (undefined8 *)(lVar7 + 0x90);
      uVar3 = 3;
code_r0x0155bf50:
      *(undefined8 *)(param_1 + 0x18) = *puVar6;
      lVar1 = 1;
code_r0x0155bf5c:
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      return lVar1;
    }
  }
  else if (((lVar7 != 0) && (lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d410f8), lVar1 != 0)) &&
          (*(long *)(lVar1 + 0x68) != 0)) {
    iStack_34 = *(int *)(*(long *)(lVar1 + 0x68) + 0x18) - *(int *)(param_1 + 0x28);
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d410f8);
    if ((lVar1 != 0) && (lVar5 = *(long *)(lVar1 + 0x68), lVar5 != 0)) {
      if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 0x28)) goto code_r0x0155bf78;
      lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(param_1 + 0x28) * 8 + 0x20);
      lVar1 = 0;
      if (lVar5 != 0) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,1,0);
        uVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_34,0);
        uVar2 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('event:/UI/Front_End/Tournament')*/ uRam0000000003d790c0,uVar2,0);
        /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(uVar2,0);
        lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d410f8);
        if ((lVar1 != 0) && (lVar5 = *(long *)(lVar1 + 0x68), lVar5 != 0)) {
          if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 0x28)) goto code_r0x0155bf78;
          lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(param_1 + 0x28) * 8 + 0x20);
          lVar1 = 0;
          if (lVar5 != 0) {
            uVar2 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar5,0);
            if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('custom_enter')*/ uRam0000000003d788d0,uVar2,0,0,0,0);
            puVar6 = (undefined8 *)(lVar7 + 0x88);
            uVar3 = 2;
            goto code_r0x0155bf50;
          }
        }
      }
    }
  }
code_r0x0155bf74:
  func_0x00f78af4(lVar1);
code_r0x0155bf78:
  uVar2 = func_0x00f78b24();
  lVar1 = func_0x00f78ac0(uVar2,0);
  return *(long *)(lVar1 + 0x18);
}



// ============================================================
// RVA: 0x155bf84 | Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeaguePodiumScreen__AnimateUIInRoutine_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x155bf8c | Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_LeaguePodiumScreen__AnimateUIInRoutine_d__22__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63590);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x155bfcc | Atlas.UI.Screens.LeaguePodiumScreen.<AnimateUIInRoutine>d__22.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeaguePodiumScreen__AnimateUIInRoutine_d__22__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



