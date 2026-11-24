// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.ApplicationBehaviour.<InitSystems>d__70

// ============================================================
// RVA: 0x1532308 | Atlas.ApplicationBehaviour.<InitSystems>d__70..ctor
// ============================================================

void Atlas_ApplicationBehaviour__InitSystems_d__70___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1532334 | Atlas.ApplicationBehaviour.<InitSystems>d__70.System.IDisposable.Dispose
// ============================================================

void Atlas_ApplicationBehaviour__InitSystems_d__70__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1532338 | Atlas.ApplicationBehaviour.<InitSystems>d__70.MoveNext
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Atlas_ApplicationBehaviour__InitSystems_d__70__MoveNext(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb4eb2 & 1) == 0) {
    func_0x00f78a20(0x3d51bb8);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d27b60);
    func_0x00f78a20(0x3d220a0);
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d5f7e0);
    func_0x00f78a20(0x3d72d48);
    func_0x00f78a20(0x3d6d480);
    func_0x00f78a20(0x3d6f0c0);
    func_0x00f78a20(0x3d6f630);
    func_0x00f78a20(0x3d6ba50);
    func_0x00f78a20(0x3d6b560);
    func_0x00f78a20(0x3d69370);
    func_0x00f78a20(0x3d78dd0);
    func_0x00f78a20(0x3d70f70);
    bRam0000000003eb4eb2 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(uint *)(param_1 + 0x10) < 0xe) {
    lVar10 = *(long *)(param_1 + 0x20);
    switch(*(uint *)(param_1 + 0x10)) {
    case 0:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar3 = /*UnityEngine.Application$$get_version*/ func_0x03218798(0);
      uVar3 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('AtlasRelease')*/ uRam0000000003d69370,uVar3,0);
      if (lVar10 != 0) {
        *(undefined8 *)(lVar10 + 0x20) = uVar3;
        if (*(long *)(lVar10 + 0x48) != 0) {
          /*Core.Services.ServicesManager$$Init*/ func_0x01684e6c(*(long *)(lVar10 + 0x48),uVar3,0);
          lVar4 = *(long *)(lVar10 + 0x70);
          uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0);
          if (lVar4 != 0) {
            Core_Application_CoroutineRunner__Init(lVar4,uVar3,0);
            if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*Atlas.Settings.AtlasQualitySettings$$BeginBoostLoadingBeforeSettingsLoaded*/ func_0x0145ec08(0);
            if (*(long *)(lVar10 + 0x88) != 0) {
              uVar3 = /*Core.Assets.AssetManager$$Init*/ func_0x016340c4(*(long *)(lVar10 + 0x88),0);
              *(undefined8 *)(param_1 + 0x18) = uVar3;
              uVar3 = 1;
              *(undefined4 *)(param_1 + 0x10) = 1;
              goto code_r0x01532e84;
            }
          }
        }
      }
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar10 != 0) {
        /*Atlas.Assets.AtlasAssetBucketUtils$$CreateBuckets*/ func_0x01458320(*(undefined8 *)(lVar10 + 0x88),0);
        uVar3 = *(undefined8 *)(lVar10 + 0x18);
        if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Atlas_UI_LoadingBehaviour__RequestLoad(uVar3,0);
        if (*(long *)(lVar10 + 0x78) != 0) {
          uVar3 = /*Atlas.Settings.AtlasQualitySettings$$Init*/ func_0x0145e7e8(*(long *)(lVar10 + 0x78),0xffffffff,0);
          *(undefined8 *)(param_1 + 0x18) = uVar3;
          uVar1 = 2;
          goto code_r0x01532e7c;
        }
      }
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Atlas_UI_LoadingBehaviour__Show(0);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x60) != 0)) {
        uVar3 = Atlas_Stats_AchievementManager__Init
                          (*(long *)(lVar10 + 0x60),*(undefined8 *)(lVar10 + 0x48),
                           /*STR('StatAchievementConfig')*/ uRam0000000003d72d48,0);
        uVar3 = /*UnityEngine.MonoBehaviour$$StartCoroutine*/ func_0x03247e70(lVar10,uVar3,0);
        *(undefined8 *)(param_1 + 0x28) = uVar3;
        if (*(long *)(lVar10 + 0x160) != 0) {
          uVar3 = Atlas_Rendering_AtlasShaders__Init
                            (*(long *)(lVar10 + 0x160),*(undefined8 *)(lVar10 + 0x88),
                             *(undefined8 *)(lVar10 + 0x78),0);
          uVar3 = /*UnityEngine.MonoBehaviour$$StartCoroutine*/ func_0x03247e70(lVar10,uVar3,0);
          *(undefined8 *)(param_1 + 0x30) = uVar3;
          if ((*(long *)(lVar10 + 0x48) != 0) &&
             (plVar5 = *(long **)(*(long *)(lVar10 + 0x48) + 0x30), plVar5 != (long *)0x0)) {
            lVar4 = *(long *)(lVar10 + 0x150);
            (**(code **)(*plVar5 + 1000))(&uStack_d0,plVar5,*(undefined8 *)(*plVar5 + 0x3f0));
            uStack_88 = uStack_c8;
            uStack_90 = uStack_d0;
            uStack_78 = uStack_b8;
            uStack_80 = uStack_c0;
            uStack_68 = uStack_a8;
            uStack_70 = uStack_b0;
            uStack_58 = uStack_98;
            uStack_60 = uStack_a0;
            uVar3 = /*Unity.Collections.FixedString64Bytes$$ToString*/ func_0x02fd8584(&uStack_90,0);
            if (lVar4 != 0) {
              /*Core.Localisation.LocalisationManager$$Init*/ func_0x0164f3bc(lVar4,/*STR('LC_Keys')*/ uRam0000000003d6f0c0,/*STR('LocalisationData')*/ uRam0000000003d6f630,/*STR('efigs/FM_PrimaryFontMappings.asset')*/ uRam0000000003d78dd0,
                              uVar3,0);
              if (*(long *)(lVar10 + 0x88) != 0) {
                uVar1 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635cb0(*(long *)(lVar10 + 0x88),/*STR('P_UIManager')*/ uRam0000000003d70f70,
                                        /*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
                *(undefined4 *)(param_1 + 0x38) = uVar1;
                lVar4 = *(long *)(lVar10 + 0x80);
                if (lVar4 != 0) {
                  Atlas_Definitions_AtlasDefinitions__Init
                            (lVar4,*(undefined8 *)(lVar10 + 0x88),*(undefined8 *)(lVar10 + 0x198),
                             *(undefined8 *)(lVar10 + 0x58),*(undefined8 *)(lVar10 + 0x158),lVar4,
                             *(undefined8 *)(lVar10 + 0x1a0),0);
                  if (*(long *)(lVar10 + 0x80) != 0) {
                    uVar3 = Atlas_Definitions_AtlasDefinitions__RequestLoad
                                      (*(long *)(lVar10 + 0x80),0);
                    uVar3 = /*UnityEngine.MonoBehaviour$$StartCoroutine*/ func_0x03247e70(lVar10,uVar3,0);
                    *(undefined8 *)(param_1 + 0x40) = uVar3;
                    goto code_r0x01532724;
                  }
                }
              }
            }
          }
        }
      }
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
code_r0x01532724:
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = Atlas_UI_LoadingBehaviour__IsFullyVisible(0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      if (iVar2 == 0) {
        uVar1 = 3;
      }
      else {
        uVar1 = 4;
      }
code_r0x01532e7c:
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      uVar3 = 1;
      goto code_r0x01532e84;
    case 4:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Atlas_UI_LoadingBehaviour__SetProgress(_UNK_033f8140,0,0);
      if (lVar10 != 0) {
        Atlas_ApplicationBehaviour__InitCameraManager(lVar10,*(undefined8 *)(lVar10 + 0x88),0);
        if (*(long *)(lVar10 + 0x98) != 0) {
          Atlas_Rendering_PostProcessingManager__Init
                    (*(long *)(lVar10 + 0x98),*(undefined8 *)(lVar10 + 0x78),0);
          lVar4 = *(long *)(lVar10 + 0xa8);
          uVar3 = /*Atlas.AtlasContextCreator$$CreateContexts*/ func_0x01461750(*(undefined8 *)(lVar10 + 0x28),0);
          if (lVar4 != 0) {
            /*Core.Contexts.ContextManager$$Init*/ func_0x0163cdd4(lVar4,uVar3,*(undefined8 *)(lVar10 + 0x28),0);
            if (*(long *)(lVar10 + 0xb0) != 0) {
              /*Core.Containers.PoolManager$$Init*/ func_0x0163c828(*(long *)(lVar10 + 0xb0),0);
              if (*(long *)(lVar10 + 0xb8) != 0) {
                Atlas_Gameplay_AtlasPoolCreator__Init
                          (*(long *)(lVar10 + 0xb8),*(undefined8 *)(lVar10 + 0xb0),
                           *(undefined8 *)(lVar10 + 0x88),0);
                if (*(long *)(lVar10 + 0xc0) != 0) {
                  /*Core.Actors.ActorManager$$Init*/ func_0x01630194(*(long *)(lVar10 + 0xc0),0);
                  /*Atlas.AtlasActorGroupCreator$$CreateGroups*/ func_0x01455390(*(undefined8 *)(lVar10 + 0xc0),0);
                  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x40);
                  uVar1 = 5;
                  goto code_r0x01532e7c;
                }
              }
            }
          }
        }
      }
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Atlas_UI_LoadingBehaviour__SetProgress(_UNK_033f83fc,0,0);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x130) != 0)) {
        Atlas_Audio_AtlasAudioManager__Init
                  (*(long *)(lVar10 + 0x130),*(undefined8 *)(lVar10 + 0x78),
                   *(undefined8 *)(lVar10 + 0x80),0);
        if (*(long *)(lVar10 + 0x138) != 0) {
          Atlas_Audio_MusicManager__Init
                    (*(long *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x130),0);
          if (*(long *)(lVar10 + 0x130) != 0) {
            *(undefined8 *)(*(long *)(lVar10 + 0x130) + 0x20) = *(undefined8 *)(lVar10 + 0x138);
            if (*(long *)(lVar10 + 0x140) != 0) {
              Atlas_Audio_UIAudio__Init(*(long *)(lVar10 + 0x140),*(undefined8 *)(lVar10 + 0x80),0);
              lVar4 = *(long *)(lVar10 + 0x180);
              uVar11 = *(undefined8 *)(lVar10 + 0x88);
              uVar3 = func_0x00f78aec(/*Core.Input.InputManager.GetLayerFromGameObjectFunc_TypeInfo*/ uRam0000000003d27b60);
              /*Core.Input.InputManager.GetLayerFromGameObjectFunc$$.ctor*/ func_0x0164bed4(uVar3,0,uRam0000000003d5f7e0,0);
              if (lVar4 != 0) {
                /*Core.Input.InputManager$$Init*/ func_0x016497d0(lVar4,uVar11,/*STR('Glyph')*/ uRam0000000003d6d480,0,0xd,uVar3,0);
                if (*(long *)(lVar10 + 0x80) != 0) {
                  /*Atlas.Input.AtlasInputManagerExtensions$$AddGlyphMappingsFromDefinitions*/ func_0x014699f4(*(undefined8 *)(lVar10 + 0x180),
                                  *(undefined8 *)(*(long *)(lVar10 + 0x80) + 0x10),0);
                  if (*(long *)(lVar10 + 0x128) != 0) {
                    /*Atlas.Input.KartInputManager$$Init*/ func_0x015ccf88(*(long *)(lVar10 + 0x128),0);
                    if (*(long *)(lVar10 + 0x50) != 0) {
                      Atlas_Stats_AtlasStats__Init(*(long *)(lVar10 + 0x50),0);
                      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
                      uVar1 = 6;
                      goto code_r0x01532e7c;
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 200) != 0)) {
        /*Core.Actors.PooledActorManager$$Init*/ func_0x01630cc4(*(long *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xc0),
                        *(undefined8 *)(lVar10 + 0xb0),0);
        if (*(long *)(lVar10 + 0xd0) != 0) {
          Atlas_Gameplay_Usables_UsableManager__Init
                    (*(long *)(lVar10 + 0xd0),*(undefined8 *)(lVar10 + 0xb0),
                     *(undefined8 *)(lVar10 + 200),*(undefined8 *)(lVar10 + 0xc0),
                     *(undefined8 *)(lVar10 + 0xb8),*(undefined8 *)(lVar10 + 0x80),
                     *(undefined8 *)(lVar10 + 0x60));
          if (*(long *)(lVar10 + 0x1a0) != 0) {
            Atlas_Analytics_AtlasAnalyticsManager__Init
                      (*(long *)(lVar10 + 0x1a0),*(undefined8 *)(lVar10 + 0x48),
                       *(undefined8 *)(lVar10 + 0x58),*(undefined8 *)(lVar10 + 0x50),
                       *(undefined8 *)(lVar10 + 0x80),0);
            if (*(long *)(lVar10 + 0x150) != 0) {
              uVar3 = /*Core.Localisation.LocalisationManager$$PostInit*/ func_0x0164f548(*(long *)(lVar10 + 0x150),0);
              *(undefined8 *)(param_1 + 0x18) = uVar3;
              uVar1 = 7;
              goto code_r0x01532e7c;
            }
          }
        }
      }
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x58) != 0)) {
        Atlas_Save_SaveManager__Init
                  (*(long *)(lVar10 + 0x58),*(undefined8 *)(lVar10 + 0x50),
                   *(undefined8 *)(lVar10 + 0x48),*(undefined8 *)(lVar10 + 0x80),
                   *(undefined8 *)(lVar10 + 0x158),*(undefined8 *)(lVar10 + 0x188),
                   *(undefined8 *)(lVar10 + 0x60),*(undefined8 *)(lVar10 + 0x150),
                   *(undefined8 *)(lVar10 + 0x1a0),*(undefined8 *)(lVar10 + 0x170),0);
        if (*(long *)(lVar10 + 0x58) != 0) {
          uVar3 = Atlas_Save_SaveManager__LoadAll(*(long *)(lVar10 + 0x58),0);
          uVar3 = /*UnityEngine.MonoBehaviour$$StartCoroutine*/ func_0x03247e70(lVar10,uVar3,0);
          *(undefined8 *)(param_1 + 0x48) = uVar3;
          if (*(long *)(lVar10 + 0x120) != 0) {
            uVar3 = Atlas_Gameplay_Kart_KartCompositeFactory__Init
                              (*(long *)(lVar10 + 0x120),*(undefined8 *)(lVar10 + 0x28),0);
            *(undefined8 *)(param_1 + 0x18) = uVar3;
            uVar1 = 8;
            goto code_r0x01532e7c;
          }
        }
      }
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Atlas_UI_LoadingBehaviour__SetProgress(_UNK_033f82c4,0,0);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x88) != 0)) {
        uVar3 = /*Core.Assets.AssetManager$$WaitForAsset*/ func_0x01636f40(*(long *)(lVar10 + 0x88),*(undefined4 *)(param_1 + 0x38),0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        uVar1 = 9;
        goto code_r0x01532e7c;
      }
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x88) != 0)) {
        uVar3 = /*Core.Assets.AssetManager$$GetLoadedAsset<Sprite>*/ func_0x01818628(*(long *)(lVar10 + 0x88),*(undefined4 *)(param_1 + 0x38),
                                uRam0000000003d51bb8);
        Atlas_ApplicationBehaviour__InitUI(lVar10,uVar3,0);
        if (*(long *)(lVar10 + 0xe0) != 0) {
          Atlas_Gameplay_PauseManager__Init
                    (*(long *)(lVar10 + 0xe0),*(undefined8 *)(lVar10 + 0xd8),
                     *(undefined8 *)(lVar10 + 0x108),*(undefined8 *)(lVar10 + 0x138),
                     *(undefined8 *)(lVar10 + 0xa8),lVar10,0);
          Atlas_ApplicationBehaviour__InitNetwork(lVar10,*(undefined8 *)(lVar10 + 0x80),0);
          if (*(long *)(lVar10 + 0x118) != 0) {
            /*Atlas.Networking.MPErrorManager$$Init*/ func_0x0148afc8(*(long *)(lVar10 + 0x118),*(undefined8 *)(lVar10 + 0x108),
                            *(undefined8 *)(lVar10 + 0x48),*(undefined8 *)(lVar10 + 0x170),
                            *(undefined8 *)(lVar10 + 0xa8),*(undefined8 *)(lVar10 + 0x150),
                            *(undefined8 *)(lVar10 + 0x1a0),0);
            if (*(long *)(lVar10 + 0x148) != 0) {
              Atlas_UI_VotingManager__Init(*(long *)(lVar10 + 0x148),*(undefined8 *)(lVar10 + 0x28))
              ;
              if (*(long *)(lVar10 + 400) != 0) {
                /*Atlas.Networking.MatchMakingManager$$Init*/ func_0x0148eda8(*(long *)(lVar10 + 400),*(undefined8 *)(lVar10 + 0x28),0);
                *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x30);
                uVar1 = 10;
                goto code_r0x01532e7c;
              }
            }
          }
        }
      }
      break;
    case 10:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Atlas_UI_LoadingBehaviour__SetProgress(0x3f000000,0,0);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0xa0) != 0)) {
        uVar3 = /*Atlas.AtlasCameras$$WaitOnLoad*/ func_0x014612ec(*(long *)(lVar10 + 0xa0),0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        uVar1 = 0xb;
        goto code_r0x01532e7c;
      }
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x78) != 0)) {
        /*Atlas.Settings.AtlasQualitySettings$$SetCameraManager*/ func_0x0145ff1c(*(long *)(lVar10 + 0x78),*(undefined8 *)(lVar10 + 0x90),0);
        if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Atlas_UI_LoadingBehaviour__SetProgress(_UNK_033f83ec,0,0);
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x48);
        uVar1 = 0xc;
        goto code_r0x01532e7c;
      }
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x68) != 0)) {
        uVar3 = Atlas_Stats_DailyChallengeManager__Init
                          (*(long *)(lVar10 + 0x68),/*STR('DailyChallengesConfig')*/ uRam0000000003d6b560,
                           *(undefined8 *)(lVar10 + 0x50),*(undefined8 *)(lVar10 + 0x58),
                           *(undefined8 *)(lVar10 + 0x80),*(undefined8 *)(lVar10 + 0x150),
                           *(undefined8 *)(lVar10 + 0x60),*(undefined8 *)(lVar10 + 0x198),
                           *(undefined8 *)(lVar10 + 0x1a0),*(undefined8 *)(lVar10 + 0x158),0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        uVar1 = 0xd;
        goto code_r0x01532e7c;
      }
      break;
    case 0xd:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Atlas_UI_LoadingBehaviour__SetProgress(_UNK_033f83c8,0,0);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x58) != 0)) {
        lVar9 = *(long *)(lVar10 + 0x130);
        lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar10 + 0x58),0);
        if ((lVar4 != 0) && (lVar9 != 0)) {
          Atlas_Audio_AtlasAudioManager__SetMusicVolume(*(undefined4 *)(lVar4 + 0xc0),lVar9,0);
          if (*(long *)(lVar10 + 0x58) != 0) {
            lVar9 = *(long *)(lVar10 + 0x130);
            lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar10 + 0x58),0);
            if ((lVar4 != 0) && (lVar9 != 0)) {
              Atlas_Audio_AtlasAudioManager__SetSfxVolume(*(undefined4 *)(lVar4 + 0xc4),lVar9,0);
              if (*(long *)(lVar10 + 0x58) != 0) {
                lVar9 = *(long *)(lVar10 + 0x130);
                lVar4 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar10 + 0x58),0);
                if ((lVar4 != 0) && (lVar9 != 0)) {
                  Atlas_Audio_AtlasAudioManager__SetVOVolume(*(undefined4 *)(lVar4 + 200),lVar9,0);
                  Atlas_UI_LoadingBehaviour__SetProgress(_UNK_033f875c,0,0);
                  if ((*(long *)(lVar10 + 0x50) != 0) && (*(long *)(lVar10 + 0x158) != 0)) {
                    Atlas_Stats_UnlockManager__Init
                              (*(long *)(lVar10 + 0x158),*(undefined8 *)(lVar10 + 0x80),
                               *(undefined8 *)(*(long *)(lVar10 + 0x50) + 0x10),
                               *(undefined8 *)(lVar10 + 0x58),*(undefined8 *)(lVar10 + 0x60),
                               *(undefined8 *)(lVar10 + 0x198),*(undefined8 *)(lVar10 + 0x1a0),0);
                    if (*(long *)(lVar10 + 0x198) != 0) {
                      Atlas_Stats_SeasonsManager__Init
                                (*(long *)(lVar10 + 0x198),*(undefined8 *)(lVar10 + 0x28),0);
                      if (*(long *)(lVar10 + 0x188) != 0) {
                        Atlas_FrontEnd_FTUEManager__Init
                                  (*(long *)(lVar10 + 0x188),*(undefined8 *)(lVar10 + 0x48),
                                   *(undefined8 *)(lVar10 + 0x158),*(undefined8 *)(lVar10 + 0x80),
                                   *(undefined8 *)(lVar10 + 0x60),*(undefined8 *)(lVar10 + 0x68),
                                   *(undefined8 *)(lVar10 + 0x1a0),0);
                        if (*(long *)(lVar10 + 0x1b0) != 0) {
                          Atlas_League_LeagueManager__Init
                                    (*(long *)(lVar10 + 0x1b0),*(undefined8 *)(lVar10 + 0x28),0);
                          Atlas_ApplicationBehaviour__StartMusic(lVar10,0);
                          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          plVar5 = (long *)/*DG.Tweening.DOTween$$Init*/ func_0x01692cc4(0,0,0,0);
                          if (plVar5 != (long *)0x0) {
                            lVar4 = *plVar5;
                            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == /*DG.Tweening.IDOTweenInit_TypeInfo*/ lRam0000000003d220a0) {
                                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                                  goto code_r0x01532ec0;
                                }
                                piVar8 = piVar8 + 4;
                                uVar7 = uVar7 - 1;
                              } while (uVar7 != 0);
                            }
                            puVar6 = (undefined8 *)func_0x00fac1f0(plVar5,/*DG.Tweening.IDOTweenInit_TypeInfo*/ lRam0000000003d220a0,0);
code_r0x01532ec0:
                            (*(code *)*puVar6)(plVar5,1000,200,puVar6[1]);
                            uVar3 = 0;
                            *(undefined1 *)(lVar10 + 0x30) = 1;
                            goto code_r0x01532e84;
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
      }
    }
    uVar3 = func_0x00f78af4();
  }
  else {
    uVar3 = 0;
code_r0x01532e84:
    if (*(long *)PTR_03a5d648 == lStack_48) {
      return uVar3;
    }
  }
  lVar10 = ___stack_chk_fail(uVar3);
  return *(undefined8 *)(lVar10 + 0x18);
}



// ============================================================
// RVA: 0x1532eec | Atlas.ApplicationBehaviour.<InitSystems>d__70.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__InitSystems_d__70__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1532ef4 | Atlas.ApplicationBehaviour.<InitSystems>d__70.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_ApplicationBehaviour__InitSystems_d__70__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d61fd0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1532f34 | Atlas.ApplicationBehaviour.<InitSystems>d__70.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__InitSystems_d__70__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



