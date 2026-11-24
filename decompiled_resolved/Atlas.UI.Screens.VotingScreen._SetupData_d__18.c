// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.VotingScreen.<SetupData>d__18

// ============================================================
// RVA: 0x156e0f4 | Atlas.UI.Screens.VotingScreen.<SetupData>d__18..ctor
// ============================================================

void Atlas_UI_Screens_VotingScreen__SetupData_d__18___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x156e120 | Atlas.UI.Screens.VotingScreen.<SetupData>d__18.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_VotingScreen__SetupData_d__18__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x156e124 | Atlas.UI.Screens.VotingScreen.<SetupData>d__18.MoveNext
// ============================================================

/* WARNING: Possible PIC construction at 0x0156e2b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0156e2b4) */
/* WARNING: Removing unreachable block (ram,0x0156e2b8) */
/* WARNING: Removing unreachable block (ram,0x0156e2bc) */
/* WARNING: Removing unreachable block (ram,0x0156e498) */
/* WARNING: Removing unreachable block (ram,0x0156e2d0) */
/* WARNING: Removing unreachable block (ram,0x0156e2e0) */
/* WARNING: Removing unreachable block (ram,0x0156e2ec) */
/* WARNING: Removing unreachable block (ram,0x0156e2f8) */
/* WARNING: Removing unreachable block (ram,0x0156e30c) */
/* WARNING: Removing unreachable block (ram,0x0156e31c) */
/* WARNING: Removing unreachable block (ram,0x0156e334) */
/* WARNING: Removing unreachable block (ram,0x0156e340) */
/* WARNING: Removing unreachable block (ram,0x0156e348) */
/* WARNING: Removing unreachable block (ram,0x0156e35c) */
/* WARNING: Removing unreachable block (ram,0x0156e364) */
/* WARNING: Removing unreachable block (ram,0x0156e36c) */
/* WARNING: Removing unreachable block (ram,0x0156e394) */
/* WARNING: Removing unreachable block (ram,0x0156e39c) */
/* WARNING: Removing unreachable block (ram,0x0156e3a8) */
/* WARNING: Removing unreachable block (ram,0x0156e3bc) */
/* WARNING: Removing unreachable block (ram,0x0156e3c4) */
/* WARNING: Removing unreachable block (ram,0x0156e3d0) */

ulong Atlas_UI_Screens_VotingScreen__SetupData_d__18__MoveNext(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam0000000003eb501e & 1) == 0) {
    func_0x00f78a20(0x3d51bd0);
    func_0x00f78a20(0x3d57808);
    func_0x00f78a20(0x3d5b0d0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41350);
    func_0x00f78a20(0x3d41358);
    func_0x00f78a20(0x3d29798);
    func_0x00f78a20(0x3d6ba50);
    bRam0000000003eb501e = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 != 0) {
      lVar8 = *(long *)(lVar6 + 0x70);
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41350);
      if ((lVar5 != 0) && (lVar8 != 0)) {
        uVar2 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(lVar8,*(undefined8 *)(lVar5 + 0x98),/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
        *(undefined4 *)(lVar6 + 0xa8) = uVar2;
        if (*(long *)(lVar6 + 0x70) != 0) {
          uVar7 = /*Core.Assets.AssetManager$$WaitForAsset*/ func_0x01636f40(*(long *)(lVar6 + 0x70),uVar2,0);
          *(undefined8 *)(param_1 + 0x18) = uVar7;
          *(undefined4 *)(param_1 + 0x10) = 1;
          goto LAB_0156e464;
        }
      }
    }
  }
  else {
    if (iVar1 != 1) {
LAB_0156e464:
      return (ulong)(iVar1 == 0);
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x70) != 0) {
        /*Core.Assets.AssetManager$$TryGetLoadedAsset<object>*/ func_0x01818904(*(long *)(lVar6 + 0x70),*(undefined4 *)(lVar6 + 0xa8),lVar6 + 0xb0,
                        uRam0000000003d51bd0);
        uVar7 = *(undefined8 *)(lVar6 + 0xb0);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41350);
        if (((lVar6 != 0) && (lVar6 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar6,0,0), lVar6 != 0)) &&
           (*(long *)(lVar6 + 0x30) != 0)) {
          uVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar6 + 0x30),0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar6 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(uVar7,uVar3,uRam0000000003d5b0d0);
          if (lVar6 != 0) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,0,0);
            uVar4 = func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.VotingPlayerInfo_TypeInfo*/ uRam0000000003d29798);
            goto code_r0x0156e4a4;
          }
        }
      }
    }
  }
  func_0x00f78af4();
  uVar7 = func_0x00f78b24();
  uVar4 = func_0x00f78ac0(uVar7,0);
code_r0x0156e4a4:
  if ((bRam0000000003eb5021 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25a40);
    bRam0000000003eb5021 = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(uVar4 + 0x10) = **(undefined4 **)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xb8);
  *(undefined8 *)(uVar4 + 0x18) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  return uVar4;
}



// ============================================================
// RVA: 0x156e544 | Atlas.UI.Screens.VotingScreen.<SetupData>d__18.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_VotingScreen__SetupData_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156e54c | Atlas.UI.Screens.VotingScreen.<SetupData>d__18.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_VotingScreen__SetupData_d__18__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d64958);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156e58c | Atlas.UI.Screens.VotingScreen.<SetupData>d__18.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_VotingScreen__SetupData_d__18__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



