// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.FreeplayScreen.<BuildFreeplayOptions>d__13

// ============================================================
// RVA: 0x154c6e4 | Atlas.UI.Screens.FreeplayScreen.<BuildFreeplayOptions>d__13..ctor
// ============================================================

void Atlas_UI_Screens_FreeplayScreen__BuildFreeplayOptions_d__13___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154c710 | Atlas.UI.Screens.FreeplayScreen.<BuildFreeplayOptions>d__13.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_FreeplayScreen__BuildFreeplayOptions_d__13__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x154c714 | Atlas.UI.Screens.FreeplayScreen.<BuildFreeplayOptions>d__13.MoveNext
// ============================================================

undefined8 Atlas_UI_Screens_FreeplayScreen__BuildFreeplayOptions_d__13__MoveNext(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb4f7c & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d51bd0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d55b18);
    func_0x00f78a20(0x3d55e70);
    func_0x00f78a20(0x3d32980);
    func_0x00f78a20(0x3d32988);
    func_0x00f78a20(0x3d32990);
    func_0x00f78a20(0x3d35898);
    func_0x00f78a20(0x3d1cb68);
    func_0x00f78a20(0x3d57350);
    func_0x00f78a20(0x3d57980);
    func_0x00f78a20(0x3d3b120);
    func_0x00f78a20(0x3d3b0f0);
    func_0x00f78a20(0x3d1db90);
    func_0x00f78a20(0x3d231f8);
    func_0x00f78a20(0x3d5b0d0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d62e10);
    func_0x00f78a20(0x3d62e18);
    func_0x00f78a20(0x3d275b0);
    func_0x00f78a20(0x3d275a8);
    func_0x00f78a20(0x3d41050);
    func_0x00f78a20(0x3d41058);
    func_0x00f78a20(0x3d25608);
    func_0x00f78a20(0x3d6ba50);
    bRam0000000003eb4f7c = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar9 != 0) && (lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41050), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x80);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41050);
      if ((lVar9 != 0) && ((*(long *)(lVar9 + 0x80) != 0 && (*(long *)(param_1 + 0x28) != 0)))) {
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x80) + 0x18);
        lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x28),0);
        if (lVar9 != 0) {
          plVar7 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar9,0);
          if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (plVar7 == (long *)0x0) {
            plVar7 = (long *)0x0;
          }
          else if (*plVar7 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
            plVar7 = (long *)0x0;
          }
          /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(uVar5,plVar7,0,0);
          if (lVar4 != 0) {
            /*Atlas.UI.PaginationDotController$$SnapToTarget*/ func_0x014b6090(lVar4,0);
            return 0;
          }
        }
      }
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x78) != 0)) {
      /*Core.Assets.AssetManager$$TryGetLoadedAsset<object>*/ func_0x01818904(*(long *)(lVar9 + 0x78),*(undefined4 *)(lVar9 + 0x98),lVar9 + 0x90,
                      uRam0000000003d51bd0);
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar5,uRam0000000003d3b0f0);
      if ((*(long *)(lVar9 + 0x70) != 0) &&
         (lVar4 = *(long *)(*(long *)(lVar9 + 0x70) + 0x10), lVar4 != 0)) {
        /*Core.Definitions.GameDefinitions$$GetDefinitionList<object>*/ func_0x0185c5d4(lVar4,uVar5,uRam0000000003d57350);
        if (((*(ushort *)(/*Atlas.UI.Screens.FreeplayScreen.<>c_TypeInfo*/ lRam0000000003d275a8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.FreeplayScreen.<>c_TypeInfo*/ lRam0000000003d275a8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar8 = *(undefined8 **)(/*Atlas.UI.Screens.FreeplayScreen.<>c_TypeInfo*/ lRam0000000003d275a8 + 0xb8);
        lVar4 = puVar8[1];
        if (lVar4 == 0) {
          if (((*(ushort *)(/*Atlas.UI.Screens.FreeplayScreen.<>c_TypeInfo*/ lRam0000000003d275a8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.FreeplayScreen.<>c_TypeInfo*/ lRam0000000003d275a8 + 0xe0) == 0)) {
            func_0x00f78ad0();
            puVar8 = *(undefined8 **)(/*Atlas.UI.Screens.FreeplayScreen.<>c_TypeInfo*/ lRam0000000003d275a8 + 0xb8);
          }
          uVar12 = *puVar8;
          lVar4 = func_0x00f78aec(/*System.Func<MapDefinition, int>_TypeInfo*/ uRam0000000003d1cb68);
          /*System.Func<object, int>$$.ctor*/ func_0x0217832c(lVar4,uVar12,uRam0000000003d62e10,uRam0000000003d35898);
          *(long *)(*(long *)(/*Atlas.UI.Screens.FreeplayScreen.<>c_TypeInfo*/ lRam0000000003d275a8 + 0xb8) + 8) = lVar4;
        }
        uVar5 = /*System.Linq.Enumerable$$OrderBy<object, int>*/ func_0x0184f188(uVar5,lVar4,uRam0000000003d55b18);
        lVar4 = /*System.Linq.Enumerable$$ToList<VolumeParameter>*/ func_0x01854f28(uVar5,uRam0000000003d55e70);
        if (lVar4 != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,lVar4,uRam0000000003d3b120);
          uStack_78 = uStack_90;
          uStack_80 = uStack_98;
          lStack_70 = lStack_88;
code_r0x0154caa0:
          uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32988);
          if ((uVar6 & 1) != 0) {
            lVar4 = func_0x00f78aec(/*Atlas.UI.Screens.FreeplayScreen.<>c__DisplayClass13_0_TypeInfo*/ uRam0000000003d275b0);
            /*System.Object$$.ctor*/ func_0x0294d018(lVar4,0);
            if (lVar4 == 0) {
              func_0x00f78af4();
              goto code_r0x0154cedc;
            }
            *(long *)(lVar4 + 0x28) = lVar9;
            *(long *)(lVar4 + 0x10) = lStack_70;
            if (lStack_70 == 0) {
              func_0x00f78af4();
              goto code_r0x0154cedc;
            }
            if (*(char *)(lStack_70 + 0x5c) != '\0') {
              if (*(long *)(lVar9 + 0x88) == 0) goto code_r0x0154ce88;
              uVar6 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(lVar9 + 0x88),lStack_70,0);
              if ((uVar6 & 1) != 0) {
                uVar5 = *(undefined8 *)(lVar9 + 0x90);
                lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41050);
                if (lVar10 == 0) {
                  func_0x00f78af4();
                  goto code_r0x0154cedc;
                }
                if (*(long *)(lVar10 + 0x70) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0154cedc;
                }
                uVar12 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar10 + 0x70),0);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar10 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(uVar5,uVar12,uRam0000000003d5b0d0);
                if (lVar10 == 0) {
                  func_0x00f78af4();
                  goto code_r0x0154cedc;
                }
                plVar7 = (long *)/*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar10,uRam0000000003d57980);
                *(long **)(lVar4 + 0x20) = plVar7;
                uVar12 = *(undefined8 *)(lVar4 + 0x10);
                uVar13 = *(undefined8 *)(lVar9 + 0x80);
                uVar5 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
                /*Atlas.UI.MapMetagameData$$.ctor*/ func_0x0148d608(uVar5,uVar12,uVar13,0,0);
                if (plVar7 == (long *)0x0) {
                  func_0x00f78af4();
                  goto code_r0x0154cedc;
                }
                (**(code **)(*plVar7 + 0x188))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 400));
                if (*(long *)(lVar4 + 0x20) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0154cedc;
                }
                uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x20) + 0x50);
                *(undefined8 *)(lVar4 + 0x18) = uVar5;
                uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
                if ((uVar6 & 1) != 0) {
                  lVar11 = *(long *)(lVar4 + 0x18);
                  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41050);
                  if (lVar10 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0154cedc;
                  }
                  if (lVar11 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0154cedc;
                  }
                  /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar11,*(undefined8 *)(lVar10 + 0x88),0);
                  lVar10 = *(long *)(lVar4 + 0x18);
                  uVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                  /*System.Action$$.ctor*/ func_0x02924c80(uVar5,lVar4,uRam0000000003d62e18,0);
                  if (lVar10 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0154cedc;
                  }
                  /*Atlas.UI.UIAtlasButton$$add_SelectedOrPressed*/ func_0x01514578(lVar10,uVar5,0);
                  if (*(long *)(lVar4 + 0x10) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0154cedc;
                  }
                  uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18);
                  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar9,uRam0000000003d41058);
                  if (lVar10 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0154cedc;
                  }
                  uVar12 = *(undefined8 *)(lVar10 + 0x18);
                  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar6 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar5,uVar12,0);
                  if ((uVar6 & 1) == 0) {
                    uVar5 = *(undefined8 *)(param_1 + 0x28);
                    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0,0);
                    if ((uVar6 & 1) == 0) goto code_r0x0154caa0;
                  }
                  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar4 + 0x18);
                }
              }
            }
            goto code_r0x0154caa0;
          }
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32980);
          lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41050);
          if ((lVar4 != 0) && (*(long *)(lVar4 + 0x78) != 0)) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x78),1,0);
            lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41050);
            if (lVar4 != 0) {
              lVar10 = *(long *)(lVar4 + 0x80);
              lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41050);
              if ((lVar4 != 0) && (lVar10 != 0)) {
                /*Atlas.UI.PaginationDotController$$SetDotAmount*/ func_0x014b5d08(lVar10,*(undefined4 *)(lVar4 + 0x90),0);
                if (*(long *)(param_1 + 0x28) != 0) {
                  uVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x28),0);
                  *(undefined8 *)(lVar9 + 0xa0) = uVar5;
                  *(undefined8 *)(param_1 + 0x18) = 0;
                  *(undefined4 *)(param_1 + 0x10) = 2;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar9 + 0x78);
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41050);
      if ((lVar4 != 0) && (lVar10 != 0)) {
        uVar3 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(lVar10,*(undefined8 *)(lVar4 + 0x68),/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
        *(undefined4 *)(lVar9 + 0x98) = uVar3;
        if (*(long *)(lVar9 + 0x78) != 0) {
          uVar5 = /*Core.Assets.AssetManager$$WaitForAsset*/ func_0x01636f40(*(long *)(lVar9 + 0x78),uVar3,0);
          *(undefined8 *)(param_1 + 0x18) = uVar5;
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0154ce88:
  func_0x00f78af4();
code_r0x0154cedc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x154cee0);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x154cf90 | Atlas.UI.Screens.FreeplayScreen.<BuildFreeplayOptions>d__13.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_FreeplayScreen__BuildFreeplayOptions_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x154cf98 | Atlas.UI.Screens.FreeplayScreen.<BuildFreeplayOptions>d__13.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_FreeplayScreen__BuildFreeplayOptions_d__13__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62e20);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x154cfd8 | Atlas.UI.Screens.FreeplayScreen.<BuildFreeplayOptions>d__13.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_FreeplayScreen__BuildFreeplayOptions_d__13__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



