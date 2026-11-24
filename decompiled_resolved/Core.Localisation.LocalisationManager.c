// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Localisation.LocalisationManager

// ============================================================
// RVA: 0x164f394 | Core.Localisation.LocalisationManager.get_SupportedLanguageList
// ============================================================

undefined8 Core_Localisation_LocalisationManager__get_SupportedLanguageList(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x164f39c | Core.Localisation.LocalisationManager.get_SetLanguageIETF
// ============================================================

undefined8 Core_Localisation_LocalisationManager__get_SetLanguageIETF(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x164f3a4 | Core.Localisation.LocalisationManager.get_SetLanguageRightToLeft
// ============================================================

undefined1 Core_Localisation_LocalisationManager__get_SetLanguageRightToLeft(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x164f3ac | Core.Localisation.LocalisationManager.get_SetLanguageArabic
// ============================================================

undefined1 Core_Localisation_LocalisationManager__get_SetLanguageArabic(long param_1)

{
  return *(undefined1 *)(param_1 + 0x61);
}



// ============================================================
// RVA: 0x164f3b4 | Core.Localisation.LocalisationManager.get_IsInited
// ============================================================

undefined1 Core_Localisation_LocalisationManager__get_IsInited(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd8);
}



// ============================================================
// RVA: 0x164f3bc | Core.Localisation.LocalisationManager.Init
// ============================================================

void Core_Localisation_LocalisationManager__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
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
  
  if ((bRam0000000003eb57b5 & 1) == 0) {
    func_0x00f78a20(0x3d433a8);
    func_0x00f78a20(0x3d433b8);
    func_0x00f78a20(0x3d433d0);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d21858);
    func_0x00f78a20(0x3d230d0);
    bRam0000000003eb57b5 = 1;
  }
  *(undefined8 *)(param_1 + 0x50) = param_5;
  uVar1 = func_0x00f78aec(/*RTLTMPro.FastStringBuilder_TypeInfo*/ uRam0000000003d21858);
  /*RTLTMPro.FastStringBuilder$$.ctor*/ func_0x0164c2ec(uVar1,100);
  if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  **(undefined8 **)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) = uVar1;
  if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.AddressableAssets.Addressables$$LoadAssetAsync<StatAchievementConfig>*/ func_0x0171f06c(&uStack_80,param_4,uRam0000000003d433b8);
  *(undefined8 *)(param_1 + 0xc0) = uStack_78;
  *(undefined8 *)(param_1 + 0xb8) = uStack_80;
  *(undefined8 *)(param_1 + 0xd0) = uStack_68;
  *(undefined8 *)(param_1 + 200) = uStack_70;
  /*UnityEngine.AddressableAssets.Addressables$$LoadAssetAsync<StatAchievementConfig>*/ func_0x0171f06c(&uStack_a0,param_2,uRam0000000003d433a8);
  *(undefined8 *)(param_1 + 0x80) = uStack_98;
  *(undefined8 *)(param_1 + 0x78) = uStack_a0;
  *(undefined8 *)(param_1 + 0x90) = uStack_88;
  *(undefined8 *)(param_1 + 0x88) = uStack_90;
  /*UnityEngine.AddressableAssets.Addressables$$LoadAssetsAsync<Object>*/ func_0x0171f52c(&uStack_c0,param_3,0,uRam0000000003d433d0);
  *(undefined8 *)(param_1 + 0xa0) = uStack_b8;
  *(undefined8 *)(param_1 + 0x98) = uStack_c0;
  *(undefined8 *)(param_1 + 0xb0) = uStack_a8;
  *(undefined8 *)(param_1 + 0xa8) = uStack_b0;
  return;
}



// ============================================================
// RVA: 0x164f548 | Core.Localisation.LocalisationManager.PostInit
// ============================================================

long Core_Localisation_LocalisationManager__PostInit(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb57b6 & 1) == 0) {
    func_0x00f78a20(0x3d28070);
    bRam0000000003eb57b6 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Localisation.LocalisationManager.<PostInit>d__33_TypeInfo*/ uRam0000000003d28070);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  return lVar1;
}



// ============================================================
// RVA: 0x164f5e0 | Core.Localisation.LocalisationManager.DeInit
// ============================================================

void Core_Localisation_LocalisationManager__DeInit(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb57b7 & 1) == 0) {
    func_0x00f78a20(0x3d433e0);
    func_0x00f78a20(0x3d43400);
    func_0x00f78a20(0x3d43410);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d230d0);
    func_0x00f78a20(0x3d230d8);
    func_0x00f78a20(0x3d230e0);
    bRam0000000003eb57b7 = 1;
  }
  *(undefined1 *)(param_1 + 0xd8) = 0;
  if (((*(ushort *)(/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ lRam0000000003d230d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ lRam0000000003d230d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  **(undefined8 **)(/*Core.Localisation.LocaliseAlignmentBehaviour_TypeInfo*/ lRam0000000003d230d8 + 0xb8) = 0;
  if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  **(undefined8 **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  if (((*(byte *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_60 = uVar1;
  uStack_58 = uVar2;
  uStack_50 = uVar3;
  uStack_48 = uVar4;
  /*UnityEngine.AddressableAssets.Addressables$$Release<VideoClip>*/ func_0x0171fcfc(&uStack_60,uRam0000000003d43400);
  uStack_58 = *(undefined8 *)(param_1 + 0xa0);
  uStack_60 = *(undefined8 *)(param_1 + 0x98);
  uStack_48 = *(undefined8 *)(param_1 + 0xb0);
  uStack_50 = *(undefined8 *)(param_1 + 0xa8);
  /*UnityEngine.AddressableAssets.Addressables$$Release<VideoClip>*/ func_0x0171fcfc(&uStack_60,uRam0000000003d433e0);
  uStack_58 = *(undefined8 *)(param_1 + 0xc0);
  uStack_60 = *(undefined8 *)(param_1 + 0xb8);
  uStack_48 = *(undefined8 *)(param_1 + 0xd0);
  uStack_50 = *(undefined8 *)(param_1 + 200);
  /*UnityEngine.AddressableAssets.Addressables$$Release<VideoClip>*/ func_0x0171fcfc(&uStack_60,uRam0000000003d43410);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  **(undefined8 **)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// ============================================================
// RVA: 0x164f7ac | Core.Localisation.LocalisationManager.SupportsLanguage
// ============================================================

undefined8
Core_Localisation_LocalisationManager__SupportsLanguage
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_2,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = /*Core.Localisation.LocalisationManager$$TryGetLocalisationData*/ func_0x0164f80c(param_1,param_2,param_3,auStack_48);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x164f80c | Core.Localisation.LocalisationManager.TryGetLocalisationData
// ============================================================

long Core_Localisation_LocalisationManager__TryGetLocalisationData
               (long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  uint uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined4 uStack_68;
  
  uVar7 = param_3;
  if ((bRam0000000003eb57c5 & 1) == 0) {
    func_0x00f78a20(0x3d230d0);
    bRam0000000003eb57c5 = 1;
  }
  uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_2,0);
  uVar6 = (undefined1)uVar7;
  if ((uVar5 & 1) == 0) {
    lVar12 = *(long *)(param_1 + 0x20);
    if (lVar12 == 0) goto LAB_0164f9ec;
    uVar1 = *(uint *)(lVar12 + 0x18);
    if (0 < (int)uVar1) {
      uVar14 = 0;
      do {
        uVar6 = (undefined1)uVar7;
        if (uVar1 <= uVar14) goto LAB_0164f9e0;
        lVar9 = lVar12 + (long)(int)uVar14 * 0x18;
        lVar11 = *(long *)(lVar9 + 0x20);
        lVar15 = *(long *)(lVar9 + 0x30);
        lVar9 = *(long *)(lVar9 + 0x28);
        if (lVar11 == 0) goto LAB_0164f9ec;
        uVar7 = 5;
        iVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar11,param_2,5,0);
        if (iVar4 != 0) {
          *param_4 = lVar11;
          param_4[2] = lVar15;
          param_4[1] = lVar9;
          return 1;
        }
        uVar14 = uVar14 + 1;
        uVar1 = *(uint *)(lVar12 + 0x18);
      } while ((int)uVar14 < (int)uVar1);
    }
    if ((int)param_3 != 0) {
      if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*Core.Localisation.LocalisationManager$$GetLanguageCode*/ func_0x01650490(param_2);
      uVar8 = 0;
      uVar5 = Core_Localisation_LocalisationManager__TryGetLocalisationData(param_1,uVar7,0,param_4)
      ;
      uVar6 = (undefined1)uVar8;
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      lVar12 = *(long *)(param_1 + 0x20);
      if (lVar12 == 0) goto LAB_0164f9ec;
      if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
        uVar5 = 0;
        uVar10 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
        puVar13 = (undefined4 *)(lVar12 + 0x31);
        do {
          uVar6 = (undefined1)uVar8;
          if (uVar10 <= uVar5) goto LAB_0164f9e0;
          lVar9 = *(long *)((long)puVar13 + -0x11);
          lVar11 = *(long *)((long)puVar13 + -9);
          cVar3 = *(char *)((long)puVar13 + -1);
          uVar2 = *(undefined4 *)((long)puVar13 + 3);
          uStack_68._0_3_ = (undefined3)*puVar13;
          uStack_68._3_1_ = (undefined1)uVar2;
          if (cVar3 != '\0') {
            if (lVar9 == 0) goto LAB_0164f9ec;
            uVar8 = 5;
            iVar4 = /*System.String$$StartsWith*/ func_0x029ce958(lVar9,uVar7,5,0);
            if (iVar4 != 0) {
              *param_4 = lVar9;
              param_4[1] = lVar11;
              *(char *)(param_4 + 2) = cVar3;
              *(undefined4 *)((long)param_4 + 0x11) = uStack_68;
              *(undefined4 *)((long)param_4 + 0x14) = uVar2;
              return 1;
            }
          }
          uVar5 = uVar5 + 1;
          uVar10 = (ulong)*(uint *)(lVar12 + 0x18);
          puVar13 = puVar13 + 6;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar12 + 0x18));
      }
    }
  }
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return 0;
LAB_0164f9e0:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
LAB_0164f9ec:
  auVar16 = func_0x00f78af4();
  if ((bRam0000000003eb57b8 & 1) == 0) {
    func_0x00f78a20(0x3d28078);
    bRam0000000003eb57b8 = 1;
  }
  lVar12 = func_0x00f78aec(/*Core.Localisation.LocalisationManager.<TrySetLanguage>d__36_TypeInfo*/ uRam0000000003d28078);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar12,0);
  *(undefined4 *)(lVar12 + 0x10) = 0;
  *(long *)(lVar12 + 0x20) = auVar16._8_8_;
  *(long *)(lVar12 + 0x28) = auVar16._0_8_;
  *(undefined1 *)(lVar12 + 0x30) = uVar6;
  return lVar12;
}



// ============================================================
// RVA: 0x164f9f0 | Core.Localisation.LocalisationManager.TrySetLanguage
// ============================================================

long Core_Localisation_LocalisationManager__TrySetLanguage
               (undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  if ((bRam0000000003eb57b8 & 1) == 0) {
    func_0x00f78a20(0x3d28078);
    bRam0000000003eb57b8 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Localisation.LocalisationManager.<TrySetLanguage>d__36_TypeInfo*/ uRam0000000003d28078);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  *(undefined1 *)(lVar1 + 0x30) = param_3;
  return lVar1;
}



// ============================================================
// RVA: 0x164fa9c | Core.Localisation.LocalisationManager.TrySetLanguageOrUseSystemThenDefault
// ============================================================

long Core_Localisation_LocalisationManager__TrySetLanguageOrUseSystemThenDefault
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam0000000003eb57b9 & 1) == 0) {
    func_0x00f78a20(0x3d28080);
    bRam0000000003eb57b9 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Localisation.LocalisationManager.<TrySetLanguageOrUseSystemThenDefault>d__37_TypeInfo*/ uRam0000000003d28080);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return lVar1;
}



// ============================================================
// RVA: 0x164fb38 | Core.Localisation.LocalisationManager.RegisterOnLanguageChanged
// ============================================================

long * Core_Localisation_LocalisationManager__RegisterOnLanguageChanged
                 (long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong unaff_x22;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb57ba & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb57ba = 1;
  }
  plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(*(undefined8 *)(param_1 + 0x10),param_2,0);
  if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
    *(long **)(param_1 + 0x10) = plVar2;
    return plVar2;
  }
  auVar7 = func_0x00f78e5c();
  if ((bRam0000000003eb57bb & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb57bb = 1;
  }
  plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(*(undefined8 *)(auVar7._0_8_ + 0x10),auVar7._8_8_,0);
  if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
    *(long **)(auVar7._0_8_ + 0x10) = plVar2;
    return plVar2;
  }
  auVar7 = func_0x00f78e5c();
  lVar3 = auVar7._0_8_;
  if ((bRam0000000003eb57bc & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bc = 1;
  }
  lVar4 = *(long *)(lVar3 + 0x38);
  if (lVar4 != 0) {
    unaff_x22 = 0;
    lVar6 = 0x20;
    do {
      lVar4 = *(long *)(lVar4 + 0x20);
      if (lVar4 == 0) break;
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)unaff_x22) {
        return auVar7._8_8_;
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto code_r0x0164fd18;
      uVar5 = *(undefined8 *)(lVar4 + lVar6);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,auVar7._8_8_,0);
      if (iVar1 != 0) goto code_r0x0164fce4;
      unaff_x22 = unaff_x22 + 1;
      lVar4 = *(long *)(lVar3 + 0x38);
      lVar6 = lVar6 + 0x10;
    } while (lVar4 != 0);
  }
  do {
    func_0x00f78af4();
code_r0x0164fce4:
    lVar4 = *(long *)(lVar3 + 0x40);
  } while (lVar4 == 0);
  if ((uint)unaff_x22 < *(uint *)(lVar4 + 0x18)) {
    return *(long **)(lVar4 + unaff_x22 * 8 + 0x20);
  }
code_r0x0164fd18:
  uVar5 = func_0x00f78b24();
  auVar7 = func_0x00f78ac0(uVar5,0);
  lVar3 = auVar7._0_8_;
  if ((bRam0000000003eb57bd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bd = 1;
  }
  lVar4 = *(long *)(lVar3 + 0x38);
  if (lVar4 != 0) {
    unaff_x22 = 0;
    lVar6 = 0x20;
    do {
      lVar4 = *(long *)(lVar4 + 0x28);
      if (lVar4 == 0) break;
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)unaff_x22) {
        return auVar7._8_8_;
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto code_r0x0164fe0c;
      uVar5 = *(undefined8 *)(lVar4 + lVar6);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,auVar7._8_8_,0);
      if (iVar1 != 0) goto code_r0x0164fdd8;
      unaff_x22 = unaff_x22 + 1;
      lVar4 = *(long *)(lVar3 + 0x38);
      lVar6 = lVar6 + 0x10;
    } while (lVar4 != 0);
  }
  do {
    func_0x00f78af4();
code_r0x0164fdd8:
    lVar4 = *(long *)(lVar3 + 0x48);
  } while (lVar4 == 0);
  if ((uint)unaff_x22 < *(uint *)(lVar4 + 0x18)) {
    return *(long **)(lVar4 + unaff_x22 * 8 + 0x20);
  }
code_r0x0164fe0c:
  uVar5 = func_0x00f78b24();
  plVar2 = (long *)func_0x00f78ac0(uVar5,0);
  return plVar2;
}



// ============================================================
// RVA: 0x164fbb4 | Core.Localisation.LocalisationManager.UnRegisterOnLanguageChanged
// ============================================================

long * Core_Localisation_LocalisationManager__UnRegisterOnLanguageChanged
                 (long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong unaff_x22;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb57bb & 1) == 0) {
    func_0x00f78a20(0x3d1b598);
    bRam0000000003eb57bb = 1;
  }
  plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(*(undefined8 *)(param_1 + 0x10),param_2,0);
  if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
    *(long **)(param_1 + 0x10) = plVar2;
    return plVar2;
  }
  auVar7 = func_0x00f78e5c();
  lVar3 = auVar7._0_8_;
  if ((bRam0000000003eb57bc & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bc = 1;
  }
  lVar4 = *(long *)(lVar3 + 0x38);
  if (lVar4 != 0) {
    unaff_x22 = 0;
    lVar6 = 0x20;
    do {
      lVar4 = *(long *)(lVar4 + 0x20);
      if (lVar4 == 0) break;
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)unaff_x22) {
        return auVar7._8_8_;
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto code_r0x0164fd18;
      uVar5 = *(undefined8 *)(lVar4 + lVar6);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,auVar7._8_8_,0);
      if (iVar1 != 0) goto code_r0x0164fce4;
      unaff_x22 = unaff_x22 + 1;
      lVar4 = *(long *)(lVar3 + 0x38);
      lVar6 = lVar6 + 0x10;
    } while (lVar4 != 0);
  }
  do {
    func_0x00f78af4();
code_r0x0164fce4:
    lVar4 = *(long *)(lVar3 + 0x40);
  } while (lVar4 == 0);
  if ((uint)unaff_x22 < *(uint *)(lVar4 + 0x18)) {
    return *(long **)(lVar4 + unaff_x22 * 8 + 0x20);
  }
code_r0x0164fd18:
  uVar5 = func_0x00f78b24();
  auVar7 = func_0x00f78ac0(uVar5,0);
  lVar3 = auVar7._0_8_;
  if ((bRam0000000003eb57bd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bd = 1;
  }
  lVar4 = *(long *)(lVar3 + 0x38);
  if (lVar4 != 0) {
    unaff_x22 = 0;
    lVar6 = 0x20;
    do {
      lVar4 = *(long *)(lVar4 + 0x28);
      if (lVar4 == 0) break;
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)unaff_x22) {
        return auVar7._8_8_;
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto code_r0x0164fe0c;
      uVar5 = *(undefined8 *)(lVar4 + lVar6);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,auVar7._8_8_,0);
      if (iVar1 != 0) goto code_r0x0164fdd8;
      unaff_x22 = unaff_x22 + 1;
      lVar4 = *(long *)(lVar3 + 0x38);
      lVar6 = lVar6 + 0x10;
    } while (lVar4 != 0);
  }
  do {
    func_0x00f78af4();
code_r0x0164fdd8:
    lVar4 = *(long *)(lVar3 + 0x48);
  } while (lVar4 == 0);
  if ((uint)unaff_x22 < *(uint *)(lVar4 + 0x18)) {
    return *(long **)(lVar4 + unaff_x22 * 8 + 0x20);
  }
code_r0x0164fe0c:
  uVar5 = func_0x00f78b24();
  plVar2 = (long *)func_0x00f78ac0(uVar5,0);
  return plVar2;
}



// ============================================================
// RVA: 0x164fc30 | Core.Localisation.LocalisationManager.GetFontReplacement
// ============================================================

undefined8
Core_Localisation_LocalisationManager__GetFontReplacement(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong unaff_x22;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb57bc & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bc = 1;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    unaff_x22 = 0;
    lVar4 = 0x20;
    do {
      lVar2 = *(long *)(lVar2 + 0x20);
      if (lVar2 == 0) break;
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)unaff_x22) {
        return param_2;
      }
      if (*(uint *)(lVar2 + 0x18) <= unaff_x22) goto LAB_0164fd18;
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,param_2,0);
      if (iVar1 != 0) goto LAB_0164fce4;
      unaff_x22 = unaff_x22 + 1;
      lVar2 = *(long *)(param_1 + 0x38);
      lVar4 = lVar4 + 0x10;
    } while (lVar2 != 0);
  }
  do {
    func_0x00f78af4();
LAB_0164fce4:
    lVar2 = *(long *)(param_1 + 0x40);
  } while (lVar2 == 0);
  if ((uint)unaff_x22 < *(uint *)(lVar2 + 0x18)) {
    return *(undefined8 *)(lVar2 + unaff_x22 * 8 + 0x20);
  }
LAB_0164fd18:
  uVar3 = func_0x00f78b24();
  auVar6 = func_0x00f78ac0(uVar3,0);
  lVar2 = auVar6._0_8_;
  if ((bRam0000000003eb57bd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bd = 1;
  }
  lVar4 = *(long *)(lVar2 + 0x38);
  if (lVar4 != 0) {
    unaff_x22 = 0;
    lVar5 = 0x20;
    do {
      lVar4 = *(long *)(lVar4 + 0x28);
      if (lVar4 == 0) break;
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)unaff_x22) {
        return auVar6._8_8_;
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x22) goto code_r0x0164fe0c;
      uVar3 = *(undefined8 *)(lVar4 + lVar5);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,auVar6._8_8_,0);
      if (iVar1 != 0) goto code_r0x0164fdd8;
      unaff_x22 = unaff_x22 + 1;
      lVar4 = *(long *)(lVar2 + 0x38);
      lVar5 = lVar5 + 0x10;
    } while (lVar4 != 0);
  }
  do {
    func_0x00f78af4();
code_r0x0164fdd8:
    lVar4 = *(long *)(lVar2 + 0x48);
  } while (lVar4 == 0);
  if ((uint)unaff_x22 < *(uint *)(lVar4 + 0x18)) {
    return *(undefined8 *)(lVar4 + unaff_x22 * 8 + 0x20);
  }
code_r0x0164fe0c:
  uVar3 = func_0x00f78b24();
  uVar3 = func_0x00f78ac0(uVar3,0);
  return uVar3;
}



// ============================================================
// RVA: 0x164fd24 | Core.Localisation.LocalisationManager.GetMaterialReplacement
// ============================================================

undefined8
Core_Localisation_LocalisationManager__GetMaterialReplacement(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong unaff_x22;
  long lVar4;
  
  if ((bRam0000000003eb57bd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57bd = 1;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    unaff_x22 = 0;
    lVar4 = 0x20;
    do {
      lVar2 = *(long *)(lVar2 + 0x28);
      if (lVar2 == 0) break;
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)unaff_x22) {
        return param_2;
      }
      if (*(uint *)(lVar2 + 0x18) <= unaff_x22) goto LAB_0164fe0c;
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,param_2,0);
      if (iVar1 != 0) goto LAB_0164fdd8;
      unaff_x22 = unaff_x22 + 1;
      lVar2 = *(long *)(param_1 + 0x38);
      lVar4 = lVar4 + 0x10;
    } while (lVar2 != 0);
  }
  do {
    func_0x00f78af4();
LAB_0164fdd8:
    lVar2 = *(long *)(param_1 + 0x48);
  } while (lVar2 == 0);
  if ((uint)unaff_x22 < *(uint *)(lVar2 + 0x18)) {
    return *(undefined8 *)(lVar2 + unaff_x22 * 8 + 0x20);
  }
LAB_0164fe0c:
  uVar3 = func_0x00f78b24();
  uVar3 = func_0x00f78ac0(uVar3,0);
  return uVar3;
}



// ============================================================
// RVA: 0x164fe18 | Core.Localisation.LocalisationManager.SetDebugColourIfRequired
// ============================================================

void Core_Localisation_LocalisationManager__SetDebugColourIfRequired(void)

{
  return;
}



// ============================================================
// RVA: 0x164fe1c | Core.Localisation.LocalisationManager.TryGetLocalisedString
// ============================================================

ulong Core_Localisation_LocalisationManager__TryGetLocalisedString
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb57be & 1) == 0) {
    func_0x00f78a20(0x3d2fe60);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb57be = 1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x70),param_2,param_3,uRam0000000003d2fe60);
    if ((uVar1 & 1) == 0) {
      *param_3 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    return uVar1;
  }
  auVar2 = func_0x00f78af4();
  puStack_38 = &Core_Localisation_LocalisationManager__GetLocalisedString;
  uStack_48 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  Core_Localisation_LocalisationManager__TryGetLocalisedString(auVar2._0_8_,auVar2._8_8_,&uStack_48)
  ;
  return uStack_48;
}



// ============================================================
// RVA: 0x164feb4 | Core.Localisation.LocalisationManager.GetLocalisedString
// ============================================================

undefined8
Core_Localisation_LocalisationManager__GetLocalisedString(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  Core_Localisation_LocalisationManager__TryGetLocalisedString(param_1,param_2,&uStack_18);
  return uStack_18;
}



// ============================================================
// RVA: 0x164fedc | Core.Localisation.LocalisationManager.GetDefaultIETFLanguageCode
// ============================================================

undefined8 Core_Localisation_LocalisationManager__GetDefaultIETFLanguageCode(void)

{
  if ((bRam0000000003eb57bf & 1) == 0) {
    func_0x00f78a20(0x3d78e38);
    bRam0000000003eb57bf = 1;
  }
  return /*STR('en-US')*/ uRam0000000003d78e38;
}



// ============================================================
// RVA: 0x164ff20 | Core.Localisation.LocalisationManager.DoesStringContainArabic
// ============================================================

/* WARNING: Possible PIC construction at 0x0165026c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01650270) */
/* WARNING: Removing unreachable block (ram,0x01650280) */

ulong Core_Localisation_LocalisationManager__DoesStringContainArabic(long param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar8;
  int iVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined1 *in_x4;
  long lVar21;
  long lVar22;
  int *piVar23;
  undefined8 uVar24;
  int iVar25;
  ulong uVar26;
  long *plVar27;
  undefined8 uVar28;
  uint uVar29;
  long *plVar30;
  undefined8 uVar31;
  uint uVar32;
  long lVar33;
  undefined8 *puVar34;
  code *pcVar35;
  undefined8 **ppuVar36;
  undefined8 unaff_x26;
  undefined1 ****ppppuVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  undefined8 ******ppppppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  long *plStack_188;
  undefined1 ******ppppppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  long *plStack_160;
  undefined1 *puStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined1 *****pppppuStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined1 ****ppppuStack_120;
  undefined *puStack_118;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (param_1 != 0) {
    uVar26 = (ulong)(0 < *(int *)(param_1 + 0x10));
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar7 = 0;
      do {
        iVar6 = /*System.String$$get_Chars*/ func_0x029c5420(param_1,iVar7,0);
        if (0xfffffeff < iVar6 - 0x700U) {
          return uVar26;
        }
        iVar7 = iVar7 + 1;
        uVar26 = (ulong)(iVar7 < *(int *)(param_1 + 0x10));
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
    return uVar26;
  }
  auVar40 = func_0x00f78af4();
  plVar30 = auVar40._8_8_;
  puStack_38 = &Core_Localisation_LocalisationManager__FixForMultilineIfArabic;
  plVar27 = (long *)0x3eb5000;
  uVar26 = auVar40._0_8_;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb57c0 & 1) == 0) {
    uVar26 = func_0x00f78a20(0x3d230d0);
    bRam0000000003eb57c0 = 1;
  }
  if (*(char *)(auVar40._0_8_ + 0x61) != '\0') {
    if (plVar30 != (long *)0x0) {
      uVar20 = *(ulong *)(*plVar30 + 0x7e0);
      plVar18 = (long *)0x0;
      uVar26 = (**(code **)(*plVar30 + 0x7d8))(plVar30,0);
      if (plVar30[0x6c] == 0) {
        return uVar26;
      }
      if (*(int *)(plVar30[0x6c] + 0x2c) < 2) {
        return uVar26;
      }
      uVar9 = (**(code **)(*plVar30 + 0x548))(plVar30,*(undefined8 *)(*plVar30 + 0x550));
      lVar21 = plVar30[0x6c];
      if (lVar21 != 0) {
        uVar29 = *(int *)(lVar21 + 0x2c) - 1;
        uVar26 = (ulong)uVar29;
        if ((int)uVar29 < 0) {
code_r0x01650114:
          if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar27 = *(long **)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
          if (plVar27 != (long *)0x0) {
            uVar9 = (**(code **)(*plVar27 + 0x168))(plVar27,*(undefined8 *)(*plVar27 + 0x170));
            (**(code **)(*plVar30 + 0x558))(plVar30,uVar9,*(undefined8 *)(*plVar30 + 0x560));
            uVar26 = *(ulong *)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
            if (uVar26 != 0) {
              /*System.Text.StringBuilder$$set_Length*/ func_0x029d23ac(uVar26,0);
              return uVar26;
            }
          }
        }
        else {
          lVar33 = uVar26 * 0x5c;
          do {
            lVar21 = *(long *)(lVar21 + 0x50);
            if (lVar21 == 0) break;
            uVar29 = (uint)uVar26;
            if (*(uint *)(lVar21 + 0x18) <= uVar29) {
              uVar10 = func_0x00f78b24();
              uVar11 = func_0x00f78ac0(uVar10,0);
              puStack_88 = &Core_Localisation_LocalisationManager__FixStringIfArabic;
              uStack_b0 = uVar26;
              plStack_a8 = plVar27;
              uStack_a0 = uVar9;
              plStack_98 = plVar30;
              ppuStack_90 = &puStack_40;
              if ((bRam0000000003eb57c1 & 1) == 0) {
                func_0x00f78a20(0x3d230d0);
                func_0x00f78a20(0x3d24040);
                bRam0000000003eb57c1 = 1;
              }
              if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar7 = Core_Localisation_LocalisationManager__DoesStringContainArabic(uVar11);
              if (iVar7 == 0) {
                return uVar11;
              }
              if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar21 = **(long **)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8);
              auVar40._8_8_ = lVar21;
              auVar40._0_8_ = uVar11;
              if (lVar21 == 0) {
                puVar38 = &RTLTMPro_RTLSupport__FixRTL;
                auVar40 = func_0x00f78af4();
              }
              else {
                *(undefined4 *)(lVar21 + 0x10) = 0;
                if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                plVar18 = (long *)((long)&MACH_HEADER.magic + 1);
                uVar20 = 1;
                in_x4 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
                puVar38 = &UNK_01650270;
              }
              uVar10 = auVar40._8_8_;
              puVar34 = auVar40._0_8_;
              uVar9 = 0x3eb5000;
              plVar30 = plVar18;
              pppuStack_c0 = &ppuStack_90;
              puStack_b8 = puVar38;
              if ((bRam0000000003eb57d3 & 1) == 0) {
                func_0x00f78a20(0x3d21be0);
                func_0x00f78a20(0x3d22f20);
                func_0x00f78a20(0x3d24040);
                func_0x00f78a20(0x3d25070);
                bRam0000000003eb57d3 = 1;
              }
              if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (**(long **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8) != 0) {
                /*RTLTMPro.FastStringBuilder$$SetValue*/ func_0x0164c410(**(long **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8),puVar34);
                uVar9 = **(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8);
                if (((*(ushort *)(/*RTLTMPro.TashkeelFixer_TypeInfo*/ lRam0000000003d25070 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*RTLTMPro.TashkeelFixer_TypeInfo*/ lRam0000000003d25070 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                unaff_x26 = 0x3d22f20;
                /*RTLTMPro.TashkeelFixer$$RemoveTashkeel*/ func_0x01651a44(uVar9);
                uVar14 = **(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8);
                uVar9 = (*(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8))[1];
                if (((*(ushort *)(/*RTLTMPro.GlyphFixer_TypeInfo*/ lRam0000000003d21be0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*RTLTMPro.GlyphFixer_TypeInfo*/ lRam0000000003d21be0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*RTLTMPro.GlyphFixer$$Fix*/ func_0x0164d17c(uVar14,uVar9,in_x4,plVar18,uVar20);
                /*RTLTMPro.TashkeelFixer$$RestoreTashkeel*/ func_0x01651c28(*(undefined8 *)(*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8) + 8));
                /*RTLTMPro.TashkeelFixer$$FixShaddaCombinations*/ func_0x01651d7c(*(undefined8 *)(*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8) + 8));
                puVar34 = *(undefined8 **)(*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8) + 8);
                if (((*(ushort *)(/*RTLTMPro.LigatureFixer_TypeInfo*/ lRam0000000003d22f20 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*RTLTMPro.LigatureFixer_TypeInfo*/ lRam0000000003d22f20 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                plVar30 = plVar18;
                /*RTLTMPro.LigatureFixer$$Fix*/ func_0x0164e8bc(puVar34,uVar10,plVar18,uVar20,in_x4);
                if ((int)uVar20 != 0) {
                  /*RTLTMPro.RichTextFixer$$Fix*/ func_0x01651f48(uVar10);
                }
                uVar26 = /*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040;
                if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                  uVar26 = /*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040;
                }
                /*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 = uVar26;
                if (**(long **)(uVar26 + 0xb8) != 0) {
                  *(undefined4 *)(**(long **)(uVar26 + 0xb8) + 0x10) = 0;
                  return uVar26;
                }
              }
              uVar26 = func_0x00f78af4();
              puStack_118 = &Core_Localisation_LocalisationManager__GetLanguageCode;
              uStack_130 = uVar20;
              uStack_128 = uVar10;
              ppppuStack_120 = &pppuStack_c0;
              if (uVar26 != 0) {
                uVar20 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(uVar26,0x2d,0);
                if ((int)uVar20 < 1) {
                  return uVar26;
                }
                auVar41._8_8_ = 0;
                auVar41._0_8_ = uVar26;
                puVar3 = &stack0xfffffffffffffef0;
                uVar10 = uStack_128;
                uVar26 = uStack_130;
                ppppuVar37 = ppppuStack_120;
                puVar38 = puStack_118;
                goto System_String__Substring;
              }
              auVar40 = func_0x00f78af4();
              lVar21 = auVar40._0_8_;
              puStack_138 = &Core_Localisation_LocalisationManager__TryGetTimeFormatOverrideString;
              uVar14 = 0x3eb5000;
              plVar27 = plVar30;
              uStack_170 = uVar9;
              puStack_168 = puVar34;
              plStack_160 = plVar18;
              puStack_158 = in_x4;
              uStack_150 = uVar20;
              uStack_148 = uVar10;
              pppppuStack_140 = &ppppuStack_120;
              if ((bRam0000000003eb57c2 & 1) == 0) {
                func_0x00f78a20(0x3d6d5c0);
                func_0x00f78a20(0x3d7a030);
                func_0x00f78a20(0x3d77c80);
                bRam0000000003eb57c2 = 1;
              }
              plVar18 = *(long **)(lVar21 + 0x68);
              if ((plVar18 != (long *)0x0) &&
                 (lVar33 = (**(code **)(*plVar18 + 0x238))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x240)), lVar33 != 0)) {
                uVar14 = /*System.Globalization.DateTimeFormatInfo$$get_ShortTimePattern*/ func_0x02a93380(lVar33,0);
                plVar18 = *(long **)(lVar21 + 0x68);
                if ((plVar18 != (long *)0x0) &&
                   (lVar33 = (**(code **)(*plVar18 + 0x238))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x240)), lVar33 != 0)) {
                  puVar34 = (undefined8 *)/*System.Globalization.DateTimeFormatInfo$$get_ShortDatePattern*/ func_0x02a932e0(lVar33,0);
                  if (*(long *)(lVar21 + 0x58) != 0) {
                    plVar27 = (long *)((long)&MACH_HEADER.cputype + 1);
                    uVar26 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar21 + 0x58),/*STR('ar')*/ uRam0000000003d77c80,5,0);
                    uVar10 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
                    if ((int)uVar26 != 0) {
code_r0x016505f8:
                      *auVar40._8_8_ = uVar10;
                      *plVar30 = (long)puVar34;
                      return uVar26;
                    }
                    if (*(long *)(lVar21 + 0x58) != 0) {
                      uVar26 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar21 + 0x58),/*STR('ko')*/ uRam0000000003d7a030,5,0);
                      uVar10 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
                      if ((int)uVar26 == 0) {
                        uVar10 = uVar14;
                      }
                      goto code_r0x016505f8;
                    }
                  }
                }
              }
              lVar21 = func_0x00f78af4();
              puStack_178 = &Core_Localisation_LocalisationManager__GenerateSupportedLanguageList;
              uVar26 = 0x3d3bf88;
              uStack_1b0 = uVar9;
              puStack_1a8 = puVar34;
              uStack_1a0 = uVar14;
              plStack_188 = plVar30;
              ppppppuStack_180 = &pppppuStack_140;
              auStack_198 = auVar40;
              if ((bRam0000000003eb57c3 & 1) == 0) {
                func_0x00f78a20(0x3d3bfa0);
                func_0x00f78a20(0x3d3bf88);
                func_0x00f78a20(0x3d1de30);
                bRam0000000003eb57c3 = 1;
              }
              uVar20 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar20,uRam0000000003d3bf88);
              lVar21 = *(long *)(lVar21 + 0x20);
              uStack_1e0 = 0x3d1de30;
              if (lVar21 == 0) goto code_r0x01650704;
              if ((int)*(ulong *)(lVar21 + 0x18) < 1) {
                return uVar20;
              }
              uVar26 = 0;
              uVar11 = *(ulong *)(lVar21 + 0x18) & 0xffffffff;
              puVar34 = (undefined8 *)(lVar21 + 0x20);
              goto code_r0x016506b4;
            }
            uVar8 = *(uint *)(lVar21 + lVar33 + 0x34);
            plVar27 = (long *)(ulong)uVar8;
            iVar7 = *(int *)(lVar21 + lVar33 + 0x3c);
            if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar21 = *(long *)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
            if (lVar21 == 0) break;
            uVar20 = (ulong)((iVar7 - uVar8) + 1);
            in_x4 = (undefined1 *)0x0;
            plVar18 = plVar27;
            /*System.Text.StringBuilder$$Append*/ func_0x029d2dbc(lVar21,uVar9);
            if (uVar29 == 0) goto code_r0x01650114;
            if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar21 = *(long *)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
            if (lVar21 == 0) break;
            /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar21,0);
            uVar26 = (ulong)(uVar29 - 1);
            if ((int)(uVar29 - 1) < 0) goto code_r0x01650114;
            lVar33 = lVar33 + -0x5c;
            lVar21 = plVar30[0x6c];
          } while (lVar21 != 0);
        }
      }
    }
    uVar26 = func_0x00f78af4();
  }
  return uVar26;
System_String__Substring:
  puVar17 = auVar41._8_8_;
  uVar11 = auVar41._0_8_;
  *(long **)(puVar3 + -0x30) = plVar18;
  *(undefined1 **)(puVar3 + -0x28) = in_x4;
  *(ulong *)(puVar3 + -0x20) = uVar26;
  *(undefined8 *)(puVar3 + -0x18) = uVar10;
  *(undefined1 *****)(puVar3 + -0x10) = ppppuVar37;
  *(undefined **)(puVar3 + -8) = puVar38;
  ppppuVar37 = (undefined1 ****)(puVar3 + -0x10);
  plVar18 = (long *)0x3eb9000;
  if ((bRam0000000003eb944b & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb944b = 1;
  }
  iVar7 = auVar41._8_4_;
  if (iVar7 < 0) {
    uVar10 = 0x3d72d20;
code_r0x029cbcb4:
    uVar10 = func_0x00f78a24(uVar10);
    uVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar26 = func_0x00f78aec();
    uVar14 = 0x3d7b9d0;
  }
  else {
    iVar6 = *(int *)(uVar11 + 0x10);
    if (iVar6 < iVar7) {
      uVar10 = 0x3d7b9e8;
      goto code_r0x029cbcb4;
    }
    iVar25 = (int)uVar20;
    if (iVar25 < 0) {
      uVar10 = 0x3d6f480;
    }
    else {
      if (iVar7 <= iVar6 - iVar25) goto code_r0x029cbc4c;
      uVar10 = 0x3d6ddc8;
    }
    uVar10 = func_0x00f78a24(uVar10);
    uVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar26 = func_0x00f78aec();
    uVar14 = 0x3d7a280;
  }
  uVar14 = func_0x00f78a24(uVar14);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar26,uVar14,uVar10,0);
  uVar14 = func_0x00f78a24(0x3d5dbb0);
  puVar38 = &System_String__Substring;
  auVar41 = func_0x00f78ac0(uVar26,uVar14);
  uVar20 = (ulong)(uint)(*(int *)(auVar41._0_8_ + 0x10) - auVar41._8_4_);
  puVar3 = puVar3 + -0x30;
  in_x4 = puVar17;
  goto System_String__Substring;
code_r0x029cc070:
  uVar10 = func_0x00f78b24();
  func_0x00f78ac0(uVar10,0);
  puVar34 = puVar19;
code_r0x029cc07c:
  auVar41._8_8_ = lVar21;
  auVar41._0_8_ = uVar11;
  puVar38 = &System_String__TrimStart;
  auVar40 = func_0x00f78af4();
  uVar15 = auVar40._0_8_;
  if ((auVar40._8_8_ == 0) || (*(long *)(auVar40._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  puVar19 = (undefined8 *)0x0;
  puVar3 = puVar3 + -0x40;
  uVar26 = uVar16;
  auVar2 = auVar40;
  goto System_String__TrimHelper;
code_r0x01650b80:
  uVar9 = func_0x00f78b14();
  goto code_r0x01650b84;
code_r0x029cbc4c:
  if (iVar25 == 0) {
    uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar7 != 0) || (iVar6 != iVar25)) {
    uVar10 = *(undefined8 *)(puVar3 + -0x10);
    uVar39 = *(undefined8 *)(puVar3 + -8);
    uVar14 = *(undefined8 *)(puVar3 + -0x20);
    uVar26 = *(ulong *)(puVar3 + -0x18);
    uVar31 = *(undefined8 *)(puVar3 + -0x30);
    uVar24 = *(undefined8 *)(puVar3 + -0x28);
System_String__InternalSubString:
    uVar11 = auVar41._0_8_;
    auVar2._8_8_ = auVar41._8_8_;
    auVar2._0_8_ = uVar26;
    *(undefined8 *)(puVar3 + -0x30) = uVar31;
    *(undefined8 *)(puVar3 + -0x28) = uVar24;
    *(undefined8 *)(puVar3 + -0x20) = uVar14;
    *(ulong *)(puVar3 + -0x18) = uVar26;
    *(undefined8 *)(puVar3 + -0x10) = uVar10;
    *(undefined8 *)(puVar3 + -8) = uVar39;
    puVar17 = puVar3 + -0x10;
    uVar15 = func_0x00f834ac(uVar20);
    if (uVar15 != 0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar15 + 0x14,uVar11 + (long)auVar41._8_4_ * 2 + 0x14,(int)uVar20 << 1,0);
      return uVar15;
    }
    puVar38 = &System_String__Trim;
    auVar40 = func_0x00f78af4();
    uVar15 = auVar40._0_8_;
    if ((auVar40._8_8_ != 0) && (*(long *)(auVar40._8_8_ + 0x18) != 0)) {
      puVar19 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
      puVar3 = puVar3 + -0x30;
      auVar2 = auVar40;
System_String__TrimHelper:
      lVar21 = auVar2._8_8_;
      uVar16 = auVar2._0_8_;
      *(undefined8 *)(puVar3 + -0x40) = uVar9;
      *(undefined8 **)(puVar3 + -0x38) = puVar34;
      *(undefined1 (*) [16])(puVar3 + -0x30) = auVar41;
      *(ulong *)(puVar3 + -0x20) = uVar20;
      *(ulong *)(puVar3 + -0x18) = uVar26;
      *(undefined1 **)(puVar3 + -0x10) = puVar17;
      *(undefined **)(puVar3 + -8) = puVar38;
      puVar17 = puVar3 + -0x10;
      uVar29 = *(uint *)(uVar16 + 0x10);
      uVar20 = (ulong)uVar29;
      if ((int)puVar19 == 1) {
        uVar11 = 0;
        puVar19 = puVar34;
code_r0x029cbfd8:
        do {
          uVar29 = (int)uVar20 - 1;
          uVar20 = (ulong)uVar29;
          if ((int)uVar29 < (int)uVar11) break;
          uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar20);
          puVar34 = puVar19;
          if (lVar21 == 0) goto code_r0x029cc07c;
          iVar7 = *(int *)(lVar21 + 0x18);
          if (iVar7 < 1) {
            iVar6 = 0;
          }
          else {
            iVar25 = 0;
            do {
              if (iVar7 == iVar25) goto code_r0x029cc070;
              iVar6 = iVar25;
            } while ((*(ushort *)(lVar21 + (long)iVar25 * 2 + 0x20) != uVar8) &&
                    (iVar25 = iVar25 + 1, iVar6 = iVar7, iVar7 != iVar25));
          }
        } while (iVar6 != iVar7);
      }
      else {
        if ((int)uVar29 < 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar11);
            puVar34 = puVar19;
            if (lVar21 == 0) goto code_r0x029cc07c;
            iVar7 = *(int *)(lVar21 + 0x18);
            if (iVar7 < 1) {
              iVar6 = 0;
            }
            else {
              iVar25 = 0;
              do {
                if (iVar7 == iVar25) goto code_r0x029cc070;
                iVar6 = iVar25;
              } while ((*(ushort *)(lVar21 + (long)iVar25 * 2 + 0x20) != uVar8) &&
                      (iVar25 = iVar25 + 1, iVar6 = iVar7, iVar7 != iVar25));
            }
          } while ((iVar6 != iVar7) &&
                  (uVar8 = (int)uVar11 + 1, uVar11 = (ulong)uVar8,
                  (int)uVar8 < *(int *)(uVar16 + 0x10)));
        }
        if ((int)puVar19 != 0) {
          uVar20 = (ulong)*(uint *)(uVar16 + 0x10);
          goto code_r0x029cbfd8;
        }
        uVar29 = uVar29 - 1;
      }
      uVar10 = *(undefined8 *)(puVar3 + -0x10);
      uVar39 = *(undefined8 *)(puVar3 + -8);
      uVar14 = *(undefined8 *)(puVar3 + -0x20);
      uVar24 = *(undefined8 *)(puVar3 + -0x18);
      uVar31 = *(undefined8 *)(puVar3 + -0x30);
      uVar28 = *(undefined8 *)(puVar3 + -0x28);
      uVar9 = *(undefined8 *)(puVar3 + -0x40);
      puVar34 = *(undefined8 **)(puVar3 + -0x38);
      uVar15 = uVar16;
      goto System_String__CreateTrimmedString;
    }
    iVar7 = 2;
    puVar3 = puVar3 + -0x30;
    goto System_String__TrimHelper;
  }
  return uVar11;
code_r0x029cc094:
  iVar7 = 0;
  puVar3 = puVar3 + -0x40;
System_String__TrimHelper:
  *(undefined8 *)(puVar3 + -0x40) = uVar9;
  *(undefined8 **)(puVar3 + -0x38) = puVar34;
  *(ulong *)(puVar3 + -0x30) = uVar11;
  *(long *)(puVar3 + -0x28) = auVar2._8_8_;
  *(ulong *)(puVar3 + -0x20) = uVar20;
  *(long *)(puVar3 + -0x18) = auVar2._0_8_;
  *(undefined1 **)(puVar3 + -0x10) = puVar17;
  *(undefined **)(puVar3 + -8) = puVar38;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar29 = *(uint *)(uVar15 + 0x10);
  if (iVar7 == 1) {
    uVar11 = 0;
  }
  else {
    if ((int)uVar29 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        uVar9 = /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar11);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar26 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar9,0);
        if ((uVar26 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar11);
          break;
        }
        uVar8 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar8;
      } while ((int)uVar8 < *(int *)(uVar15 + 0x10));
    }
    if (iVar7 == 0) {
      uVar29 = uVar29 - 1;
      goto code_r0x029cbf04;
    }
    uVar29 = *(uint *)(uVar15 + 0x10);
  }
  do {
    uVar29 = uVar29 - 1;
    if ((int)uVar29 < (int)uVar11) goto code_r0x029cbf04;
    uVar9 = /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar29);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar26 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar9,0);
  } while ((uVar26 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar11);
code_r0x029cbf04:
  uVar10 = *(undefined8 *)(puVar3 + -0x10);
  uVar39 = *(undefined8 *)(puVar3 + -8);
  uVar14 = *(undefined8 *)(puVar3 + -0x20);
  uVar24 = *(undefined8 *)(puVar3 + -0x18);
  uVar31 = *(undefined8 *)(puVar3 + -0x30);
  uVar28 = *(undefined8 *)(puVar3 + -0x28);
  uVar9 = *(undefined8 *)(puVar3 + -0x40);
  puVar34 = *(undefined8 **)(puVar3 + -0x38);
System_String__CreateTrimmedString:
  auVar41._8_8_ = uVar11;
  auVar41._0_8_ = uVar15;
  *(undefined8 *)(puVar3 + -0x30) = uVar31;
  *(undefined8 *)(puVar3 + -0x28) = uVar28;
  *(undefined8 *)(puVar3 + -0x20) = uVar14;
  *(undefined8 *)(puVar3 + -0x18) = uVar24;
  *(undefined8 *)(puVar3 + -0x10) = uVar10;
  *(undefined8 *)(puVar3 + -8) = uVar39;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar29 = (uVar29 - (int)uVar11) + 1;
  uVar20 = (ulong)uVar29;
  if (uVar29 != *(uint *)(uVar15 + 0x10)) {
    if (uVar29 != 0) {
      uVar10 = *(undefined8 *)(puVar3 + -0x10);
      uVar39 = *(undefined8 *)(puVar3 + -8);
      uVar14 = *(undefined8 *)(puVar3 + -0x20);
      uVar26 = *(ulong *)(puVar3 + -0x18);
      uVar31 = *(undefined8 *)(puVar3 + -0x30);
      uVar24 = *(undefined8 *)(puVar3 + -0x28);
      goto System_String__InternalSubString;
    }
    uVar15 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return uVar15;
code_r0x016506b4:
  if (uVar26 < uVar11) {
    uStack_1e0 = 0x3d3bfa0;
    if (uVar20 == 0) goto code_r0x01650704;
    plVar27 = plRam0000000003d3bfa0;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(uVar20,*puVar34);
    uVar26 = uVar26 + 1;
    uVar11 = (ulong)*(uint *)(lVar21 + 0x18);
    puVar34 = puVar34 + 3;
    if ((long)(int)*(uint *)(lVar21 + 0x18) <= (long)uVar26) {
      return uVar20;
    }
    goto code_r0x016506b4;
  }
  uVar10 = func_0x00f78b24();
  func_0x00f78ac0(uVar10,0);
  uStack_1e0 = 0x3d3bfa0;
code_r0x01650704:
  auVar40 = func_0x00f78af4();
  lVar13 = auVar40._8_8_;
  lVar33 = auVar40._0_8_;
  uStack_1f8 = 0x3d24040;
  puStack_1b8 = &Core_Localisation_LocalisationManager__Set;
  uStack_200 = unaff_x26;
  uStack_1f0 = uVar9;
  puStack_1e8 = puVar34;
  uStack_1d8 = uVar26;
  lStack_1d0 = lVar21;
  uStack_1c8 = uVar20;
  ppppppuStack_1c0 = &ppppppuStack_180;
  if ((bRam0000000003eb57c4 & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d20b50);
    func_0x00f78a20(0x3d2fe40);
    func_0x00f78a20(0x3d2fe80);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c4 = 1;
  }
  if (*(long *)(lVar33 + 0x70) != 0) {
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$Clear*/ func_0x01ed79a4(*(long *)(lVar33 + 0x70),uRam0000000003d2fe40);
    if (lVar13 != 0) {
      uVar26 = (ulong)*(uint *)(lVar13 + 0x18);
      if (0 < (int)*(uint *)(lVar13 + 0x18)) {
        uVar20 = 0;
        uVar11 = uVar26 - 1;
        while( true ) {
          if (uVar26 <= uVar20) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar21 = plVar27[1];
          if (lVar21 == 0) goto code_r0x016508d8;
          uVar9 = *(undefined8 *)(*(long *)(lVar13 + 0x10) + uVar20 * 8 + 0x20);
          if (*(uint *)(lVar21 + 0x18) <= uVar20) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(lVar33 + 0x70) == 0) goto code_r0x016508d8;
          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(*(long *)(lVar33 + 0x70),uVar9,
                          *(undefined8 *)(*(long *)(lVar21 + 0x10) + uVar20 * 8 + 0x20),
                          uRam0000000003d2fe80);
          if (uVar11 == uVar20) break;
          uVar26 = (ulong)*(uint *)(lVar13 + 0x18);
          uVar20 = uVar20 + 1;
        }
      }
      *(long *)(lVar33 + 0x58) = *plVar27;
      if (*plVar27 != 0) {
        uVar5 = /*System.String$$Equals*/ func_0x029caa48(*plVar27,/*STR('ar')*/ uRam0000000003d77c80,5,0);
        *(undefined1 *)(lVar33 + 0x61) = uVar5;
        *(undefined1 *)(lVar33 + 0x60) = uVar5;
        uVar10 = *(undefined8 *)(lVar33 + 0x58);
        uVar9 = func_0x00f78aec(/*System.Globalization.CultureInfo_TypeInfo*/ uRam0000000003d20b50);
        /*System.Globalization.CultureInfo$$.ctor*/ func_0x02a811d4(uVar9,uVar10,0);
        *(undefined8 *)(lVar33 + 0x68) = uVar9;
        puVar34 = *(undefined8 **)(lVar33 + 0x10);
        if (puVar34 == (undefined8 *)0x0) {
          return 0;
        }
        plVar27 = (long *)*plVar27;
        puStack_208 = puVar34;
        lVar21 = puVar34[0xd];
        if (lVar21 == 0) {
          ppuVar36 = &puStack_208;
          lVar33 = 1;
        }
        else {
          lVar33 = *(long *)(lVar21 + 0x18);
          if (lVar33 == 0) {
            return (ulong)puVar34;
          }
          ppuVar36 = (undefined8 **)(lVar21 + 0x20);
        }
        lVar21 = 0;
        do {
          puVar19 = ppuVar36[lVar21];
          pcVar35 = (code *)puVar19[2];
          plVar30 = (long *)puVar19[4];
          lVar13 = puVar19[5];
          if (*(short *)(lVar13 + 0x48) == -1) {
            func_0x00f78ad8(lVar13);
          }
          iVar7 = func_0x00f78a4c(lVar13);
          bVar4 = *(char *)(lVar13 + 0x4a) == '\x01';
          if (iVar7 == 0) {
            if (bVar4) {
              if (plVar30 == (long *)0x0) {
code_r0x01e480c8:
                uVar26 = (*pcVar35)(plVar27,lVar13);
              }
              else {
                if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar30 + 0x115) & 1) != 0))
                   || (puVar34[3] == 0)) goto code_r0x01e47fc0;
                iVar7 = func_0x00f78a44(lVar13);
                iVar6 = func_0x00f78ec0(lVar13);
                if (iVar7 == 0) {
                  uVar1 = *(ushort *)(lVar13 + 0x48);
                  if (iVar6 == 0) {
                    lVar13 = *plVar30 + (ulong)uVar1 * 0x10;
                    uVar26 = (**(code **)(lVar13 + 0x138))
                                       (plVar30,plVar27,*(undefined8 *)(lVar13 + 0x140));
                    goto code_r0x01e480d4;
                  }
                  lVar13 = func_0x00f78a48(lVar13);
                  lVar22 = *plVar30;
                  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12a);
                  if (uVar26 != 0) {
                    piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) == lVar13) {
                        puVar19 = (undefined8 *)
                                  (lVar22 + (long)(int)(*piVar23 + (uint)uVar1) * 0x10 + 0x138);
                        goto code_r0x01e48260;
                      }
                      piVar23 = piVar23 + 4;
                      uVar26 = uVar26 - 1;
                    } while (uVar26 != 0);
                  }
                  puVar19 = (undefined8 *)func_0x00fac1f0(plVar30,lVar13,(ulong)uVar1);
code_r0x01e48260:
                  pcVar35 = (code *)*puVar19;
                  puVar19 = (undefined8 *)puVar19[1];
                }
                else {
                  if (iVar6 == 0) {
                    uVar9 = *(undefined8 *)
                             (*plVar30 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar22 = *plVar30;
                    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12a);
                    if (uVar26 != 0) {
                      piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar23 + -2) == *(long *)(lVar13 + 0x18)) {
                          lVar22 = lVar22 + (long)(int)(*piVar23 + (uint)*(ushort *)(lVar13 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e48238;
                        }
                        piVar23 = piVar23 + 4;
                        uVar26 = uVar26 - 1;
                      } while (uVar26 != 0);
                    }
                    lVar22 = func_0x00fac1f0(plVar30);
code_r0x01e48238:
                    uVar9 = *(undefined8 *)(lVar22 + 8);
                  }
                  puVar19 = (undefined8 *)func_0x00f78acc(uVar9,lVar13);
                  pcVar35 = (code *)*puVar19;
                }
                uVar26 = (*pcVar35)(plVar30,plVar27,puVar19);
              }
            }
            else {
              if ((*(short *)(lVar13 + 0x48) == -1) || (puVar34[3] == 0)) goto code_r0x01e480c8;
              iVar7 = func_0x00f78a44(lVar13);
              iVar6 = func_0x00f78ec0(lVar13);
              if (iVar7 == 0) {
                uVar1 = *(ushort *)(lVar13 + 0x48);
                if (iVar6 == 0) {
                  lVar13 = *plVar27 + (ulong)uVar1 * 0x10;
                  uVar26 = (**(code **)(lVar13 + 0x138))(plVar27,*(undefined8 *)(lVar13 + 0x140));
                  goto code_r0x01e480d4;
                }
                lVar13 = func_0x00f78a48(lVar13);
                lVar22 = *plVar27;
                uVar26 = (ulong)*(ushort *)(lVar22 + 0x12a);
                if (uVar26 != 0) {
                  piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar23 + -2) == lVar13) {
                      puVar19 = (undefined8 *)
                                (lVar22 + (long)(int)(*piVar23 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01e481fc;
                    }
                    piVar23 = piVar23 + 4;
                    uVar26 = uVar26 - 1;
                  } while (uVar26 != 0);
                }
                puVar19 = (undefined8 *)func_0x00fac1f0(plVar27,lVar13,(ulong)uVar1);
code_r0x01e481fc:
                pcVar35 = (code *)*puVar19;
                puVar19 = (undefined8 *)puVar19[1];
              }
              else {
                if (iVar6 == 0) {
                  uVar9 = *(undefined8 *)
                           (*plVar27 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar22 = *plVar27;
                  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12a);
                  if (uVar26 != 0) {
                    piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar23 + -2) == *(long *)(lVar13 + 0x18)) {
                        lVar22 = lVar22 + (long)(int)(*piVar23 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e481d4;
                      }
                      piVar23 = piVar23 + 4;
                      uVar26 = uVar26 - 1;
                    } while (uVar26 != 0);
                  }
                  lVar22 = func_0x00fac1f0(plVar27);
code_r0x01e481d4:
                  uVar9 = *(undefined8 *)(lVar22 + 8);
                }
                puVar19 = (undefined8 *)func_0x00f78acc(uVar9,lVar13);
                pcVar35 = (code *)*puVar19;
              }
              uVar26 = (*pcVar35)(plVar27,puVar19);
            }
          }
          else {
            if (bVar4) goto code_r0x01e480c8;
code_r0x01e47fc0:
            uVar26 = (*pcVar35)(plVar30,plVar27,lVar13);
          }
code_r0x01e480d4:
          lVar21 = lVar21 + 1;
          if (lVar21 == lVar33) {
            return uVar26;
          }
        } while( true );
      }
    }
  }
code_r0x016508d8:
  auVar40 = func_0x00f78af4();
  uVar20 = auVar40._0_8_;
  puStack_208 = (undefined8 *)
                &Core_Localisation_LocalisationManager__SetFontAndMaterialAssetMappings;
  uVar26 = uVar20;
  if ((bRam0000000003eb57c6 & 1) == 0) {
    func_0x00f78a20(0x3d3c138);
    uVar26 = func_0x00f78a20(0x3d3c140);
    bRam0000000003eb57c6 = 1;
  }
  if ((*(long *)(uVar20 + 0x38) != 0) &&
     (lVar21 = *(long *)(*(long *)(uVar20 + 0x38) + 0x20), lVar21 != 0)) {
    uVar29 = *(uint *)(lVar21 + 0x18);
    if (0 < (int)uVar29) {
      uVar8 = 0;
      do {
        if (uVar29 <= uVar8) goto code_r0x01650b78;
        plVar30 = *(long **)(uVar20 + 0x40);
        if (plVar30 == (long *)0x0) goto code_r0x01650b74;
        lVar33 = lVar21 + (long)(int)uVar8 * 0x10;
        lVar13 = *(long *)(lVar33 + 0x20);
        lVar33 = *(long *)(lVar33 + 0x28);
        if (lVar13 != 0) {
          uVar26 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar30 + 0x40));
          if (uVar26 == 0) goto code_r0x01650b80;
        }
        if (*(uint *)(plVar30 + 3) <= uVar8) goto code_r0x01650b78;
        plVar30[(long)(int)uVar8 + 4] = lVar13;
        if (lVar33 == 0) goto code_r0x01650b74;
        uVar29 = *(uint *)(lVar33 + 0x18);
        if (0 < (int)uVar29) {
          uVar32 = 0;
          do {
            if (uVar29 <= uVar32) goto code_r0x01650b78;
            lVar22 = lVar33 + (long)(int)uVar32 * 0x10;
            lVar12 = *(long *)(lVar22 + 0x20);
            if (lVar12 == 0) goto code_r0x01650b74;
            lVar22 = *(long *)(lVar22 + 0x28);
            uVar26 = /*System.String$$Equals*/ func_0x029caa48(lVar12,auVar40._8_8_,5,0);
            if ((int)uVar26 != 0) {
              if ((lVar22 == 0) || (*(long *)(lVar22 + 0x138) == 0)) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar22 + 0x138),uRam0000000003d3c140);
              if (*(long *)(lVar22 + 0x138) == 0) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar22 + 0x138),lVar13,uRam0000000003d3c138);
              plVar30 = *(long **)(uVar20 + 0x40);
              if (plVar30 == (long *)0x0) goto code_r0x01650b74;
              uVar26 = func_0x00f78adc(lVar22,*(undefined8 *)(*plVar30 + 0x40));
              if (uVar26 == 0) goto code_r0x01650b80;
              if (*(uint *)(plVar30 + 3) <= uVar8) goto code_r0x01650b78;
              plVar30[(long)(int)uVar8 + 4] = lVar22;
            }
            uVar32 = uVar32 + 1;
            uVar29 = *(uint *)(lVar33 + 0x18);
          } while ((int)uVar32 < (int)uVar29);
        }
        uVar8 = uVar8 + 1;
        uVar29 = *(uint *)(lVar21 + 0x18);
      } while ((int)uVar8 < (int)uVar29);
    }
    if ((*(long *)(uVar20 + 0x38) != 0) &&
       (lVar21 = *(long *)(*(long *)(uVar20 + 0x38) + 0x28), lVar21 != 0)) {
      uVar29 = *(uint *)(lVar21 + 0x18);
      if (0 < (int)uVar29) {
        uVar8 = 0;
        do {
          if (uVar29 <= uVar8) goto code_r0x01650b78;
          plVar30 = *(long **)(uVar20 + 0x48);
          if (plVar30 == (long *)0x0) goto code_r0x01650b74;
          lVar33 = lVar21 + (long)(int)uVar8 * 0x10;
          lVar13 = *(long *)(lVar33 + 0x20);
          lVar33 = *(long *)(lVar33 + 0x28);
          if (lVar13 != 0) {
            uVar26 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar30 + 0x40));
            if (uVar26 == 0) goto code_r0x01650b80;
          }
          if (*(uint *)(plVar30 + 3) <= uVar8) goto code_r0x01650b78;
          plVar30[(long)(int)uVar8 + 4] = lVar13;
          if (lVar33 == 0) goto code_r0x01650b74;
          uVar29 = *(uint *)(lVar33 + 0x18);
          if (0 < (int)uVar29) {
            uVar32 = 0;
            do {
              if (uVar29 <= uVar32) goto code_r0x01650b78;
              lVar13 = lVar33 + (long)(int)uVar32 * 0x10;
              lVar22 = *(long *)(lVar13 + 0x20);
              if (lVar22 == 0) goto code_r0x01650b74;
              lVar13 = *(long *)(lVar13 + 0x28);
              uVar26 = /*System.String$$Equals*/ func_0x029caa48(lVar22,auVar40._8_8_,5,0);
              if ((int)uVar26 != 0) {
                plVar30 = *(long **)(uVar20 + 0x48);
                if (plVar30 == (long *)0x0) goto code_r0x01650b74;
                if (lVar13 != 0) {
                  uVar26 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar30 + 0x40));
                  if (uVar26 == 0) goto code_r0x01650b80;
                }
                if (*(uint *)(plVar30 + 3) <= uVar8) goto code_r0x01650b78;
                plVar30[(long)(int)uVar8 + 4] = lVar13;
              }
              uVar32 = uVar32 + 1;
              uVar29 = *(uint *)(lVar33 + 0x18);
            } while ((int)uVar32 < (int)uVar29);
          }
          uVar8 = uVar8 + 1;
          uVar29 = *(uint *)(lVar21 + 0x18);
        } while ((int)uVar8 < (int)uVar29);
      }
      return uVar26;
    }
  }
code_r0x01650b74:
  func_0x00f78af4();
code_r0x01650b78:
  uVar9 = func_0x00f78b24();
code_r0x01650b84:
  uVar26 = func_0x00f78ac0(uVar9,0);
  return uVar26;
}



// ============================================================
// RVA: 0x164ff98 | Core.Localisation.LocalisationManager.FixForMultilineIfArabic
// ============================================================

/* WARNING: Possible PIC construction at 0x0165026c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01650270) */
/* WARNING: Removing unreachable block (ram,0x01650280) */

ulong Core_Localisation_LocalisationManager__FixForMultilineIfArabic
                (ulong param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                undefined1 *param_5)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar7;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  undefined8 uVar26;
  int iVar27;
  long *plVar28;
  undefined8 uVar29;
  uint uVar30;
  undefined8 uVar31;
  uint uVar32;
  long lVar33;
  undefined8 *puVar34;
  code *pcVar35;
  undefined8 **ppuVar36;
  undefined8 unaff_x26;
  undefined1 ***pppuVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined1 ******ppppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  long *plStack_158;
  undefined1 *****pppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long *plStack_130;
  undefined1 *puStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined1 ****ppppuStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  plVar28 = (long *)0x3eb5000;
  uVar9 = param_1;
  if ((bRam0000000003eb57c0 & 1) == 0) {
    uVar9 = func_0x00f78a20(0x3d230d0);
    bRam0000000003eb57c0 = 1;
  }
  if (*(char *)(param_1 + 0x61) != '\0') {
    if (param_2 != (long *)0x0) {
      uVar22 = *(ulong *)(*param_2 + 0x7e0);
      plVar20 = (long *)0x0;
      uVar9 = (**(code **)(*param_2 + 0x7d8))(param_2,0);
      if (param_2[0x6c] == 0) {
        return uVar9;
      }
      if (*(int *)(param_2[0x6c] + 0x2c) < 2) {
        return uVar9;
      }
      uVar10 = (**(code **)(*param_2 + 0x548))(param_2,*(undefined8 *)(*param_2 + 0x550));
      lVar23 = param_2[0x6c];
      if (lVar23 != 0) {
        uVar30 = *(int *)(lVar23 + 0x2c) - 1;
        uVar9 = (ulong)uVar30;
        if ((int)uVar30 < 0) {
LAB_01650114:
          if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar28 = *(long **)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
          if (plVar28 != (long *)0x0) {
            uVar10 = (**(code **)(*plVar28 + 0x168))(plVar28,*(undefined8 *)(*plVar28 + 0x170));
            (**(code **)(*param_2 + 0x558))(param_2,uVar10,*(undefined8 *)(*param_2 + 0x560));
            uVar9 = *(ulong *)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
            if (uVar9 != 0) {
              /*System.Text.StringBuilder$$set_Length*/ func_0x029d23ac(uVar9,0);
              return uVar9;
            }
          }
        }
        else {
          lVar33 = uVar9 * 0x5c;
          do {
            lVar23 = *(long *)(lVar23 + 0x50);
            if (lVar23 == 0) break;
            uVar30 = (uint)uVar9;
            if (*(uint *)(lVar23 + 0x18) <= uVar30) {
              uVar11 = func_0x00f78b24();
              uVar12 = func_0x00f78ac0(uVar11,0);
              puStack_58 = &Core_Localisation_LocalisationManager__FixStringIfArabic;
              uStack_80 = uVar9;
              plStack_78 = plVar28;
              uStack_70 = uVar10;
              plStack_68 = param_2;
              puStack_60 = &stack0xfffffffffffffff0;
              if ((bRam0000000003eb57c1 & 1) == 0) {
                func_0x00f78a20(0x3d230d0);
                func_0x00f78a20(0x3d24040);
                bRam0000000003eb57c1 = 1;
              }
              if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar6 = Core_Localisation_LocalisationManager__DoesStringContainArabic(uVar12);
              if (iVar6 == 0) {
                return uVar12;
              }
              if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar23 = **(long **)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8);
              auVar40._8_8_ = lVar23;
              auVar40._0_8_ = uVar12;
              if (lVar23 == 0) {
                puVar38 = &RTLTMPro_RTLSupport__FixRTL;
                auVar40 = func_0x00f78af4();
              }
              else {
                *(undefined4 *)(lVar23 + 0x10) = 0;
                if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                plVar20 = (long *)((long)&MACH_HEADER.magic + 1);
                uVar22 = 1;
                param_5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
                puVar38 = &UNK_01650270;
              }
              uVar11 = auVar40._8_8_;
              puVar34 = auVar40._0_8_;
              uVar10 = 0x3eb5000;
              plVar28 = plVar20;
              ppuStack_90 = &puStack_60;
              puStack_88 = puVar38;
              if ((bRam0000000003eb57d3 & 1) == 0) {
                func_0x00f78a20(0x3d21be0);
                func_0x00f78a20(0x3d22f20);
                func_0x00f78a20(0x3d24040);
                func_0x00f78a20(0x3d25070);
                bRam0000000003eb57d3 = 1;
              }
              if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (**(long **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8) != 0) {
                /*RTLTMPro.FastStringBuilder$$SetValue*/ func_0x0164c410(**(long **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8),puVar34);
                uVar10 = **(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8);
                if (((*(ushort *)(/*RTLTMPro.TashkeelFixer_TypeInfo*/ lRam0000000003d25070 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*RTLTMPro.TashkeelFixer_TypeInfo*/ lRam0000000003d25070 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                unaff_x26 = 0x3d22f20;
                /*RTLTMPro.TashkeelFixer$$RemoveTashkeel*/ func_0x01651a44(uVar10);
                uVar15 = **(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8);
                uVar10 = (*(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8))[1];
                if (((*(ushort *)(/*RTLTMPro.GlyphFixer_TypeInfo*/ lRam0000000003d21be0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*RTLTMPro.GlyphFixer_TypeInfo*/ lRam0000000003d21be0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*RTLTMPro.GlyphFixer$$Fix*/ func_0x0164d17c(uVar15,uVar10,param_5,plVar20,uVar22);
                /*RTLTMPro.TashkeelFixer$$RestoreTashkeel*/ func_0x01651c28(*(undefined8 *)(*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8) + 8));
                /*RTLTMPro.TashkeelFixer$$FixShaddaCombinations*/ func_0x01651d7c(*(undefined8 *)(*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8) + 8));
                puVar34 = *(undefined8 **)(*(long *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xb8) + 8);
                if (((*(ushort *)(/*RTLTMPro.LigatureFixer_TypeInfo*/ lRam0000000003d22f20 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*RTLTMPro.LigatureFixer_TypeInfo*/ lRam0000000003d22f20 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                plVar28 = plVar20;
                /*RTLTMPro.LigatureFixer$$Fix*/ func_0x0164e8bc(puVar34,uVar11,plVar20,uVar22,param_5);
                if ((int)uVar22 != 0) {
                  /*RTLTMPro.RichTextFixer$$Fix*/ func_0x01651f48(uVar11);
                }
                uVar9 = /*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040;
                if (((*(ushort *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                  uVar9 = /*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040;
                }
                /*RTLTMPro.RTLSupport_TypeInfo*/ uRam0000000003d24040 = uVar9;
                if (**(long **)(uVar9 + 0xb8) != 0) {
                  *(undefined4 *)(**(long **)(uVar9 + 0xb8) + 0x10) = 0;
                  return uVar9;
                }
              }
              uVar9 = func_0x00f78af4();
              puStack_e8 = &Core_Localisation_LocalisationManager__GetLanguageCode;
              uStack_100 = uVar22;
              uStack_f8 = uVar11;
              pppuStack_f0 = &ppuStack_90;
              if (uVar9 != 0) {
                uVar22 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(uVar9,0x2d,0);
                if ((int)uVar22 < 1) {
                  return uVar9;
                }
                auVar41._8_8_ = 0;
                auVar41._0_8_ = uVar9;
                puVar3 = &stack0xffffffffffffff20;
                uVar11 = uStack_f8;
                uVar9 = uStack_100;
                pppuVar37 = pppuStack_f0;
                puVar38 = puStack_e8;
                goto System_String__Substring;
              }
              auVar40 = func_0x00f78af4();
              lVar23 = auVar40._0_8_;
              puStack_108 = &Core_Localisation_LocalisationManager__TryGetTimeFormatOverrideString;
              uVar15 = 0x3eb5000;
              plVar18 = plVar28;
              uStack_140 = uVar10;
              puStack_138 = puVar34;
              plStack_130 = plVar20;
              puStack_128 = param_5;
              uStack_120 = uVar22;
              uStack_118 = uVar11;
              ppppuStack_110 = &pppuStack_f0;
              if ((bRam0000000003eb57c2 & 1) == 0) {
                func_0x00f78a20(0x3d6d5c0);
                func_0x00f78a20(0x3d7a030);
                func_0x00f78a20(0x3d77c80);
                bRam0000000003eb57c2 = 1;
              }
              plVar20 = *(long **)(lVar23 + 0x68);
              if ((plVar20 != (long *)0x0) &&
                 (lVar33 = (**(code **)(*plVar20 + 0x238))
                                     (plVar20,*(undefined8 *)(*plVar20 + 0x240)), lVar33 != 0)) {
                uVar15 = /*System.Globalization.DateTimeFormatInfo$$get_ShortTimePattern*/ func_0x02a93380(lVar33,0);
                plVar20 = *(long **)(lVar23 + 0x68);
                if ((plVar20 != (long *)0x0) &&
                   (lVar33 = (**(code **)(*plVar20 + 0x238))
                                       (plVar20,*(undefined8 *)(*plVar20 + 0x240)), lVar33 != 0)) {
                  puVar34 = (undefined8 *)/*System.Globalization.DateTimeFormatInfo$$get_ShortDatePattern*/ func_0x02a932e0(lVar33,0);
                  if (*(long *)(lVar23 + 0x58) != 0) {
                    plVar18 = (long *)((long)&MACH_HEADER.cputype + 1);
                    uVar9 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar23 + 0x58),/*STR('ar')*/ uRam0000000003d77c80,5,0);
                    uVar11 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
                    if ((int)uVar9 != 0) {
code_r0x016505f8:
                      *auVar40._8_8_ = uVar11;
                      *plVar28 = (long)puVar34;
                      return uVar9;
                    }
                    if (*(long *)(lVar23 + 0x58) != 0) {
                      uVar9 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar23 + 0x58),/*STR('ko')*/ uRam0000000003d7a030,5,0);
                      uVar11 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
                      if ((int)uVar9 == 0) {
                        uVar11 = uVar15;
                      }
                      goto code_r0x016505f8;
                    }
                  }
                }
              }
              lVar23 = func_0x00f78af4();
              puStack_148 = &Core_Localisation_LocalisationManager__GenerateSupportedLanguageList;
              uVar9 = 0x3d3bf88;
              uStack_180 = uVar10;
              puStack_178 = puVar34;
              uStack_170 = uVar15;
              plStack_158 = plVar28;
              pppppuStack_150 = &ppppuStack_110;
              auStack_168 = auVar40;
              if ((bRam0000000003eb57c3 & 1) == 0) {
                func_0x00f78a20(0x3d3bfa0);
                func_0x00f78a20(0x3d3bf88);
                func_0x00f78a20(0x3d1de30);
                bRam0000000003eb57c3 = 1;
              }
              uVar22 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar22,uRam0000000003d3bf88);
              lVar23 = *(long *)(lVar23 + 0x20);
              uStack_1b0 = 0x3d1de30;
              if (lVar23 == 0) goto code_r0x01650704;
              if ((int)*(ulong *)(lVar23 + 0x18) < 1) {
                return uVar22;
              }
              uVar9 = 0;
              uVar12 = *(ulong *)(lVar23 + 0x18) & 0xffffffff;
              puVar34 = (undefined8 *)(lVar23 + 0x20);
              goto code_r0x016506b4;
            }
            uVar8 = *(uint *)(lVar23 + lVar33 + 0x34);
            plVar28 = (long *)(ulong)uVar8;
            iVar6 = *(int *)(lVar23 + lVar33 + 0x3c);
            if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar23 = *(long *)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
            if (lVar23 == 0) break;
            uVar22 = (ulong)((iVar6 - uVar8) + 1);
            param_5 = (undefined1 *)0x0;
            plVar20 = plVar28;
            /*System.Text.StringBuilder$$Append*/ func_0x029d2dbc(lVar23,uVar10);
            if (uVar30 == 0) goto LAB_01650114;
            if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar23 = *(long *)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8);
            if (lVar23 == 0) break;
            /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f60(lVar23,0);
            uVar9 = (ulong)(uVar30 - 1);
            if ((int)(uVar30 - 1) < 0) goto LAB_01650114;
            lVar33 = lVar33 + -0x5c;
            lVar23 = param_2[0x6c];
          } while (lVar23 != 0);
        }
      }
    }
    uVar9 = func_0x00f78af4();
  }
  return uVar9;
System_String__Substring:
  puVar19 = auVar41._8_8_;
  uVar12 = auVar41._0_8_;
  *(long **)(puVar3 + -0x30) = plVar20;
  *(undefined1 **)(puVar3 + -0x28) = param_5;
  *(ulong *)(puVar3 + -0x20) = uVar9;
  *(undefined8 *)(puVar3 + -0x18) = uVar11;
  *(undefined1 ****)(puVar3 + -0x10) = pppuVar37;
  *(undefined **)(puVar3 + -8) = puVar38;
  pppuVar37 = (undefined1 ***)(puVar3 + -0x10);
  plVar20 = (long *)0x3eb9000;
  if ((bRam0000000003eb944b & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb944b = 1;
  }
  iVar6 = auVar41._8_4_;
  if (iVar6 < 0) {
    uVar11 = 0x3d72d20;
code_r0x029cbcb4:
    uVar11 = func_0x00f78a24(uVar11);
    uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar9 = func_0x00f78aec();
    uVar15 = 0x3d7b9d0;
  }
  else {
    iVar7 = *(int *)(uVar12 + 0x10);
    if (iVar7 < iVar6) {
      uVar11 = 0x3d7b9e8;
      goto code_r0x029cbcb4;
    }
    iVar27 = (int)uVar22;
    if (iVar27 < 0) {
      uVar11 = 0x3d6f480;
    }
    else {
      if (iVar6 <= iVar7 - iVar27) goto code_r0x029cbc4c;
      uVar11 = 0x3d6ddc8;
    }
    uVar11 = func_0x00f78a24(uVar11);
    uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
    func_0x00f78a24(0x3d1fcf8);
    uVar9 = func_0x00f78aec();
    uVar15 = 0x3d7a280;
  }
  uVar15 = func_0x00f78a24(uVar15);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar9,uVar15,uVar11,0);
  uVar15 = func_0x00f78a24(0x3d5dbb0);
  puVar38 = &System_String__Substring;
  auVar41 = func_0x00f78ac0(uVar9,uVar15);
  uVar22 = (ulong)(uint)(*(int *)(auVar41._0_8_ + 0x10) - auVar41._8_4_);
  puVar3 = puVar3 + -0x30;
  param_5 = puVar19;
  goto System_String__Substring;
code_r0x029cc070:
  uVar11 = func_0x00f78b24();
  func_0x00f78ac0(uVar11,0);
  puVar34 = puVar21;
code_r0x029cc07c:
  auVar41._8_8_ = lVar23;
  auVar41._0_8_ = uVar12;
  puVar38 = &System_String__TrimStart;
  auVar40 = func_0x00f78af4();
  uVar16 = auVar40._0_8_;
  if ((auVar40._8_8_ == 0) || (*(long *)(auVar40._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  puVar21 = (undefined8 *)0x0;
  puVar3 = puVar3 + -0x40;
  uVar9 = uVar17;
  auVar2 = auVar40;
  goto System_String__TrimHelper;
code_r0x01650b80:
  uVar10 = func_0x00f78b14();
  goto code_r0x01650b84;
code_r0x029cbc4c:
  if (iVar27 == 0) {
    uVar12 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar6 != 0) || (iVar7 != iVar27)) {
    uVar11 = *(undefined8 *)(puVar3 + -0x10);
    uVar39 = *(undefined8 *)(puVar3 + -8);
    uVar15 = *(undefined8 *)(puVar3 + -0x20);
    uVar9 = *(ulong *)(puVar3 + -0x18);
    uVar31 = *(undefined8 *)(puVar3 + -0x30);
    uVar26 = *(undefined8 *)(puVar3 + -0x28);
System_String__InternalSubString:
    uVar12 = auVar41._0_8_;
    auVar2._8_8_ = auVar41._8_8_;
    auVar2._0_8_ = uVar9;
    *(undefined8 *)(puVar3 + -0x30) = uVar31;
    *(undefined8 *)(puVar3 + -0x28) = uVar26;
    *(undefined8 *)(puVar3 + -0x20) = uVar15;
    *(ulong *)(puVar3 + -0x18) = uVar9;
    *(undefined8 *)(puVar3 + -0x10) = uVar11;
    *(undefined8 *)(puVar3 + -8) = uVar39;
    puVar19 = puVar3 + -0x10;
    uVar16 = func_0x00f834ac(uVar22);
    if (uVar16 != 0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar16 + 0x14,uVar12 + (long)auVar41._8_4_ * 2 + 0x14,(int)uVar22 << 1,0);
      return uVar16;
    }
    puVar38 = &System_String__Trim;
    auVar40 = func_0x00f78af4();
    uVar16 = auVar40._0_8_;
    if ((auVar40._8_8_ != 0) && (*(long *)(auVar40._8_8_ + 0x18) != 0)) {
      puVar21 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
      puVar3 = puVar3 + -0x30;
      auVar2 = auVar40;
System_String__TrimHelper:
      lVar23 = auVar2._8_8_;
      uVar17 = auVar2._0_8_;
      *(undefined8 *)(puVar3 + -0x40) = uVar10;
      *(undefined8 **)(puVar3 + -0x38) = puVar34;
      *(undefined1 (*) [16])(puVar3 + -0x30) = auVar41;
      *(ulong *)(puVar3 + -0x20) = uVar22;
      *(ulong *)(puVar3 + -0x18) = uVar9;
      *(undefined1 **)(puVar3 + -0x10) = puVar19;
      *(undefined **)(puVar3 + -8) = puVar38;
      puVar19 = puVar3 + -0x10;
      uVar30 = *(uint *)(uVar17 + 0x10);
      uVar22 = (ulong)uVar30;
      if ((int)puVar21 == 1) {
        uVar12 = 0;
        puVar21 = puVar34;
code_r0x029cbfd8:
        do {
          uVar30 = (int)uVar22 - 1;
          uVar22 = (ulong)uVar30;
          if ((int)uVar30 < (int)uVar12) break;
          uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar17,uVar22);
          puVar34 = puVar21;
          if (lVar23 == 0) goto code_r0x029cc07c;
          iVar6 = *(int *)(lVar23 + 0x18);
          if (iVar6 < 1) {
            iVar7 = 0;
          }
          else {
            iVar27 = 0;
            do {
              if (iVar6 == iVar27) goto code_r0x029cc070;
              iVar7 = iVar27;
            } while ((*(ushort *)(lVar23 + (long)iVar27 * 2 + 0x20) != uVar8) &&
                    (iVar27 = iVar27 + 1, iVar7 = iVar6, iVar6 != iVar27));
          }
        } while (iVar7 != iVar6);
      }
      else {
        if ((int)uVar30 < 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          do {
            uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar17,uVar12);
            puVar34 = puVar21;
            if (lVar23 == 0) goto code_r0x029cc07c;
            iVar6 = *(int *)(lVar23 + 0x18);
            if (iVar6 < 1) {
              iVar7 = 0;
            }
            else {
              iVar27 = 0;
              do {
                if (iVar6 == iVar27) goto code_r0x029cc070;
                iVar7 = iVar27;
              } while ((*(ushort *)(lVar23 + (long)iVar27 * 2 + 0x20) != uVar8) &&
                      (iVar27 = iVar27 + 1, iVar7 = iVar6, iVar6 != iVar27));
            }
          } while ((iVar7 != iVar6) &&
                  (uVar8 = (int)uVar12 + 1, uVar12 = (ulong)uVar8,
                  (int)uVar8 < *(int *)(uVar17 + 0x10)));
        }
        if ((int)puVar21 != 0) {
          uVar22 = (ulong)*(uint *)(uVar17 + 0x10);
          goto code_r0x029cbfd8;
        }
        uVar30 = uVar30 - 1;
      }
      uVar11 = *(undefined8 *)(puVar3 + -0x10);
      uVar39 = *(undefined8 *)(puVar3 + -8);
      uVar15 = *(undefined8 *)(puVar3 + -0x20);
      uVar26 = *(undefined8 *)(puVar3 + -0x18);
      uVar31 = *(undefined8 *)(puVar3 + -0x30);
      uVar29 = *(undefined8 *)(puVar3 + -0x28);
      uVar10 = *(undefined8 *)(puVar3 + -0x40);
      puVar34 = *(undefined8 **)(puVar3 + -0x38);
      uVar16 = uVar17;
      goto System_String__CreateTrimmedString;
    }
    iVar6 = 2;
    puVar3 = puVar3 + -0x30;
    goto System_String__TrimHelper;
  }
  return uVar12;
code_r0x029cc094:
  iVar6 = 0;
  puVar3 = puVar3 + -0x40;
System_String__TrimHelper:
  *(undefined8 *)(puVar3 + -0x40) = uVar10;
  *(undefined8 **)(puVar3 + -0x38) = puVar34;
  *(ulong *)(puVar3 + -0x30) = uVar12;
  *(long *)(puVar3 + -0x28) = auVar2._8_8_;
  *(ulong *)(puVar3 + -0x20) = uVar22;
  *(long *)(puVar3 + -0x18) = auVar2._0_8_;
  *(undefined1 **)(puVar3 + -0x10) = puVar19;
  *(undefined **)(puVar3 + -8) = puVar38;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar30 = *(uint *)(uVar16 + 0x10);
  if (iVar6 == 1) {
    uVar12 = 0;
  }
  else {
    if ((int)uVar30 < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      do {
        uVar10 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar12);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar10,0);
        if ((uVar9 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar12);
          break;
        }
        uVar8 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar8;
      } while ((int)uVar8 < *(int *)(uVar16 + 0x10));
    }
    if (iVar6 == 0) {
      uVar30 = uVar30 - 1;
      goto code_r0x029cbf04;
    }
    uVar30 = *(uint *)(uVar16 + 0x10);
  }
  do {
    uVar30 = uVar30 - 1;
    if ((int)uVar30 < (int)uVar12) goto code_r0x029cbf04;
    uVar10 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar30);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar10,0);
  } while ((uVar9 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar12);
code_r0x029cbf04:
  uVar11 = *(undefined8 *)(puVar3 + -0x10);
  uVar39 = *(undefined8 *)(puVar3 + -8);
  uVar15 = *(undefined8 *)(puVar3 + -0x20);
  uVar26 = *(undefined8 *)(puVar3 + -0x18);
  uVar31 = *(undefined8 *)(puVar3 + -0x30);
  uVar29 = *(undefined8 *)(puVar3 + -0x28);
  uVar10 = *(undefined8 *)(puVar3 + -0x40);
  puVar34 = *(undefined8 **)(puVar3 + -0x38);
System_String__CreateTrimmedString:
  auVar41._8_8_ = uVar12;
  auVar41._0_8_ = uVar16;
  *(undefined8 *)(puVar3 + -0x30) = uVar31;
  *(undefined8 *)(puVar3 + -0x28) = uVar29;
  *(undefined8 *)(puVar3 + -0x20) = uVar15;
  *(undefined8 *)(puVar3 + -0x18) = uVar26;
  *(undefined8 *)(puVar3 + -0x10) = uVar11;
  *(undefined8 *)(puVar3 + -8) = uVar39;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar30 = (uVar30 - (int)uVar12) + 1;
  uVar22 = (ulong)uVar30;
  if (uVar30 != *(uint *)(uVar16 + 0x10)) {
    if (uVar30 != 0) {
      uVar11 = *(undefined8 *)(puVar3 + -0x10);
      uVar39 = *(undefined8 *)(puVar3 + -8);
      uVar15 = *(undefined8 *)(puVar3 + -0x20);
      uVar9 = *(ulong *)(puVar3 + -0x18);
      uVar31 = *(undefined8 *)(puVar3 + -0x30);
      uVar26 = *(undefined8 *)(puVar3 + -0x28);
      goto System_String__InternalSubString;
    }
    uVar16 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return uVar16;
code_r0x016506b4:
  if (uVar9 < uVar12) {
    uStack_1b0 = 0x3d3bfa0;
    if (uVar22 == 0) goto code_r0x01650704;
    plVar18 = plRam0000000003d3bfa0;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(uVar22,*puVar34);
    uVar9 = uVar9 + 1;
    uVar12 = (ulong)*(uint *)(lVar23 + 0x18);
    puVar34 = puVar34 + 3;
    if ((long)(int)*(uint *)(lVar23 + 0x18) <= (long)uVar9) {
      return uVar22;
    }
    goto code_r0x016506b4;
  }
  uVar11 = func_0x00f78b24();
  func_0x00f78ac0(uVar11,0);
  uStack_1b0 = 0x3d3bfa0;
code_r0x01650704:
  auVar40 = func_0x00f78af4();
  lVar14 = auVar40._8_8_;
  lVar33 = auVar40._0_8_;
  uStack_1c8 = 0x3d24040;
  puStack_188 = &Core_Localisation_LocalisationManager__Set;
  uStack_1d0 = unaff_x26;
  uStack_1c0 = uVar10;
  puStack_1b8 = puVar34;
  uStack_1a8 = uVar9;
  lStack_1a0 = lVar23;
  uStack_198 = uVar22;
  ppppppuStack_190 = &pppppuStack_150;
  if ((bRam0000000003eb57c4 & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d20b50);
    func_0x00f78a20(0x3d2fe40);
    func_0x00f78a20(0x3d2fe80);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c4 = 1;
  }
  if (*(long *)(lVar33 + 0x70) != 0) {
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$Clear*/ func_0x01ed79a4(*(long *)(lVar33 + 0x70),uRam0000000003d2fe40);
    if (lVar14 != 0) {
      uVar9 = (ulong)*(uint *)(lVar14 + 0x18);
      if (0 < (int)*(uint *)(lVar14 + 0x18)) {
        uVar22 = 0;
        uVar12 = uVar9 - 1;
        while( true ) {
          if (uVar9 <= uVar22) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar23 = plVar18[1];
          if (lVar23 == 0) goto code_r0x016508d8;
          uVar10 = *(undefined8 *)(*(long *)(lVar14 + 0x10) + uVar22 * 8 + 0x20);
          if (*(uint *)(lVar23 + 0x18) <= uVar22) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(lVar33 + 0x70) == 0) goto code_r0x016508d8;
          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(*(long *)(lVar33 + 0x70),uVar10,
                          *(undefined8 *)(*(long *)(lVar23 + 0x10) + uVar22 * 8 + 0x20),
                          uRam0000000003d2fe80);
          if (uVar12 == uVar22) break;
          uVar9 = (ulong)*(uint *)(lVar14 + 0x18);
          uVar22 = uVar22 + 1;
        }
      }
      *(long *)(lVar33 + 0x58) = *plVar18;
      if (*plVar18 != 0) {
        uVar5 = /*System.String$$Equals*/ func_0x029caa48(*plVar18,/*STR('ar')*/ uRam0000000003d77c80,5,0);
        *(undefined1 *)(lVar33 + 0x61) = uVar5;
        *(undefined1 *)(lVar33 + 0x60) = uVar5;
        uVar11 = *(undefined8 *)(lVar33 + 0x58);
        uVar10 = func_0x00f78aec(/*System.Globalization.CultureInfo_TypeInfo*/ uRam0000000003d20b50);
        /*System.Globalization.CultureInfo$$.ctor*/ func_0x02a811d4(uVar10,uVar11,0);
        *(undefined8 *)(lVar33 + 0x68) = uVar10;
        puVar34 = *(undefined8 **)(lVar33 + 0x10);
        if (puVar34 == (undefined8 *)0x0) {
          return 0;
        }
        plVar18 = (long *)*plVar18;
        puStack_1d8 = puVar34;
        lVar23 = puVar34[0xd];
        if (lVar23 == 0) {
          ppuVar36 = &puStack_1d8;
          lVar33 = 1;
        }
        else {
          lVar33 = *(long *)(lVar23 + 0x18);
          if (lVar33 == 0) {
            return (ulong)puVar34;
          }
          ppuVar36 = (undefined8 **)(lVar23 + 0x20);
        }
        lVar23 = 0;
        do {
          puVar21 = ppuVar36[lVar23];
          pcVar35 = (code *)puVar21[2];
          plVar28 = (long *)puVar21[4];
          lVar14 = puVar21[5];
          if (*(short *)(lVar14 + 0x48) == -1) {
            func_0x00f78ad8(lVar14);
          }
          iVar6 = func_0x00f78a4c(lVar14);
          bVar4 = *(char *)(lVar14 + 0x4a) == '\x01';
          if (iVar6 == 0) {
            if (bVar4) {
              if (plVar28 == (long *)0x0) {
code_r0x01e480c8:
                uVar9 = (*pcVar35)(plVar18,lVar14);
              }
              else {
                if (((*(short *)(lVar14 + 0x48) == -1) || ((*(byte *)(*plVar28 + 0x115) & 1) != 0))
                   || (puVar34[3] == 0)) goto code_r0x01e47fc0;
                iVar6 = func_0x00f78a44(lVar14);
                iVar7 = func_0x00f78ec0(lVar14);
                if (iVar6 == 0) {
                  uVar1 = *(ushort *)(lVar14 + 0x48);
                  if (iVar7 == 0) {
                    lVar14 = *plVar28 + (ulong)uVar1 * 0x10;
                    uVar9 = (**(code **)(lVar14 + 0x138))
                                      (plVar28,plVar18,*(undefined8 *)(lVar14 + 0x140));
                    goto code_r0x01e480d4;
                  }
                  lVar14 = func_0x00f78a48(lVar14);
                  lVar24 = *plVar28;
                  uVar9 = (ulong)*(ushort *)(lVar24 + 0x12a);
                  if (uVar9 != 0) {
                    piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == lVar14) {
                        puVar21 = (undefined8 *)
                                  (lVar24 + (long)(int)(*piVar25 + (uint)uVar1) * 0x10 + 0x138);
                        goto code_r0x01e48260;
                      }
                      piVar25 = piVar25 + 4;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                  puVar21 = (undefined8 *)func_0x00fac1f0(plVar28,lVar14,(ulong)uVar1);
code_r0x01e48260:
                  pcVar35 = (code *)*puVar21;
                  puVar21 = (undefined8 *)puVar21[1];
                }
                else {
                  if (iVar7 == 0) {
                    uVar10 = *(undefined8 *)
                              (*plVar28 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar24 = *plVar28;
                    uVar9 = (ulong)*(ushort *)(lVar24 + 0x12a);
                    if (uVar9 != 0) {
                      piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar25 + -2) == *(long *)(lVar14 + 0x18)) {
                          lVar24 = lVar24 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar14 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e48238;
                        }
                        piVar25 = piVar25 + 4;
                        uVar9 = uVar9 - 1;
                      } while (uVar9 != 0);
                    }
                    lVar24 = func_0x00fac1f0(plVar28);
code_r0x01e48238:
                    uVar10 = *(undefined8 *)(lVar24 + 8);
                  }
                  puVar21 = (undefined8 *)func_0x00f78acc(uVar10,lVar14);
                  pcVar35 = (code *)*puVar21;
                }
                uVar9 = (*pcVar35)(plVar28,plVar18,puVar21);
              }
            }
            else {
              if ((*(short *)(lVar14 + 0x48) == -1) || (puVar34[3] == 0)) goto code_r0x01e480c8;
              iVar6 = func_0x00f78a44(lVar14);
              iVar7 = func_0x00f78ec0(lVar14);
              if (iVar6 == 0) {
                uVar1 = *(ushort *)(lVar14 + 0x48);
                if (iVar7 == 0) {
                  lVar14 = *plVar18 + (ulong)uVar1 * 0x10;
                  uVar9 = (**(code **)(lVar14 + 0x138))(plVar18,*(undefined8 *)(lVar14 + 0x140));
                  goto code_r0x01e480d4;
                }
                lVar14 = func_0x00f78a48(lVar14);
                lVar24 = *plVar18;
                uVar9 = (ulong)*(ushort *)(lVar24 + 0x12a);
                if (uVar9 != 0) {
                  piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == lVar14) {
                      puVar21 = (undefined8 *)
                                (lVar24 + (long)(int)(*piVar25 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01e481fc;
                    }
                    piVar25 = piVar25 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                puVar21 = (undefined8 *)func_0x00fac1f0(plVar18,lVar14,(ulong)uVar1);
code_r0x01e481fc:
                pcVar35 = (code *)*puVar21;
                puVar21 = (undefined8 *)puVar21[1];
              }
              else {
                if (iVar7 == 0) {
                  uVar10 = *(undefined8 *)
                            (*plVar18 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar24 = *plVar18;
                  uVar9 = (ulong)*(ushort *)(lVar24 + 0x12a);
                  if (uVar9 != 0) {
                    piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == *(long *)(lVar14 + 0x18)) {
                        lVar24 = lVar24 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e481d4;
                      }
                      piVar25 = piVar25 + 4;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                  lVar24 = func_0x00fac1f0(plVar18);
code_r0x01e481d4:
                  uVar10 = *(undefined8 *)(lVar24 + 8);
                }
                puVar21 = (undefined8 *)func_0x00f78acc(uVar10,lVar14);
                pcVar35 = (code *)*puVar21;
              }
              uVar9 = (*pcVar35)(plVar18,puVar21);
            }
          }
          else {
            if (bVar4) goto code_r0x01e480c8;
code_r0x01e47fc0:
            uVar9 = (*pcVar35)(plVar28,plVar18,lVar14);
          }
code_r0x01e480d4:
          lVar23 = lVar23 + 1;
          if (lVar23 == lVar33) {
            return uVar9;
          }
        } while( true );
      }
    }
  }
code_r0x016508d8:
  auVar40 = func_0x00f78af4();
  uVar22 = auVar40._0_8_;
  puStack_1d8 = (undefined8 *)
                &Core_Localisation_LocalisationManager__SetFontAndMaterialAssetMappings;
  uVar9 = uVar22;
  if ((bRam0000000003eb57c6 & 1) == 0) {
    func_0x00f78a20(0x3d3c138);
    uVar9 = func_0x00f78a20(0x3d3c140);
    bRam0000000003eb57c6 = 1;
  }
  if ((*(long *)(uVar22 + 0x38) != 0) &&
     (lVar23 = *(long *)(*(long *)(uVar22 + 0x38) + 0x20), lVar23 != 0)) {
    uVar30 = *(uint *)(lVar23 + 0x18);
    if (0 < (int)uVar30) {
      uVar8 = 0;
      do {
        if (uVar30 <= uVar8) goto code_r0x01650b78;
        plVar28 = *(long **)(uVar22 + 0x40);
        if (plVar28 == (long *)0x0) goto code_r0x01650b74;
        lVar33 = lVar23 + (long)(int)uVar8 * 0x10;
        lVar14 = *(long *)(lVar33 + 0x20);
        lVar33 = *(long *)(lVar33 + 0x28);
        if (lVar14 != 0) {
          uVar9 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar28 + 0x40));
          if (uVar9 == 0) goto code_r0x01650b80;
        }
        if (*(uint *)(plVar28 + 3) <= uVar8) goto code_r0x01650b78;
        plVar28[(long)(int)uVar8 + 4] = lVar14;
        if (lVar33 == 0) goto code_r0x01650b74;
        uVar30 = *(uint *)(lVar33 + 0x18);
        if (0 < (int)uVar30) {
          uVar32 = 0;
          do {
            if (uVar30 <= uVar32) goto code_r0x01650b78;
            lVar24 = lVar33 + (long)(int)uVar32 * 0x10;
            lVar13 = *(long *)(lVar24 + 0x20);
            if (lVar13 == 0) goto code_r0x01650b74;
            lVar24 = *(long *)(lVar24 + 0x28);
            uVar9 = /*System.String$$Equals*/ func_0x029caa48(lVar13,auVar40._8_8_,5,0);
            if ((int)uVar9 != 0) {
              if ((lVar24 == 0) || (*(long *)(lVar24 + 0x138) == 0)) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar24 + 0x138),uRam0000000003d3c140);
              if (*(long *)(lVar24 + 0x138) == 0) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar24 + 0x138),lVar14,uRam0000000003d3c138);
              plVar28 = *(long **)(uVar22 + 0x40);
              if (plVar28 == (long *)0x0) goto code_r0x01650b74;
              uVar9 = func_0x00f78adc(lVar24,*(undefined8 *)(*plVar28 + 0x40));
              if (uVar9 == 0) goto code_r0x01650b80;
              if (*(uint *)(plVar28 + 3) <= uVar8) goto code_r0x01650b78;
              plVar28[(long)(int)uVar8 + 4] = lVar24;
            }
            uVar32 = uVar32 + 1;
            uVar30 = *(uint *)(lVar33 + 0x18);
          } while ((int)uVar32 < (int)uVar30);
        }
        uVar8 = uVar8 + 1;
        uVar30 = *(uint *)(lVar23 + 0x18);
      } while ((int)uVar8 < (int)uVar30);
    }
    if ((*(long *)(uVar22 + 0x38) != 0) &&
       (lVar23 = *(long *)(*(long *)(uVar22 + 0x38) + 0x28), lVar23 != 0)) {
      uVar30 = *(uint *)(lVar23 + 0x18);
      if (0 < (int)uVar30) {
        uVar8 = 0;
        do {
          if (uVar30 <= uVar8) goto code_r0x01650b78;
          plVar28 = *(long **)(uVar22 + 0x48);
          if (plVar28 == (long *)0x0) goto code_r0x01650b74;
          lVar33 = lVar23 + (long)(int)uVar8 * 0x10;
          lVar14 = *(long *)(lVar33 + 0x20);
          lVar33 = *(long *)(lVar33 + 0x28);
          if (lVar14 != 0) {
            uVar9 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar28 + 0x40));
            if (uVar9 == 0) goto code_r0x01650b80;
          }
          if (*(uint *)(plVar28 + 3) <= uVar8) goto code_r0x01650b78;
          plVar28[(long)(int)uVar8 + 4] = lVar14;
          if (lVar33 == 0) goto code_r0x01650b74;
          uVar30 = *(uint *)(lVar33 + 0x18);
          if (0 < (int)uVar30) {
            uVar32 = 0;
            do {
              if (uVar30 <= uVar32) goto code_r0x01650b78;
              lVar14 = lVar33 + (long)(int)uVar32 * 0x10;
              lVar24 = *(long *)(lVar14 + 0x20);
              if (lVar24 == 0) goto code_r0x01650b74;
              lVar14 = *(long *)(lVar14 + 0x28);
              uVar9 = /*System.String$$Equals*/ func_0x029caa48(lVar24,auVar40._8_8_,5,0);
              if ((int)uVar9 != 0) {
                plVar28 = *(long **)(uVar22 + 0x48);
                if (plVar28 == (long *)0x0) goto code_r0x01650b74;
                if (lVar14 != 0) {
                  uVar9 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar28 + 0x40));
                  if (uVar9 == 0) goto code_r0x01650b80;
                }
                if (*(uint *)(plVar28 + 3) <= uVar8) goto code_r0x01650b78;
                plVar28[(long)(int)uVar8 + 4] = lVar14;
              }
              uVar32 = uVar32 + 1;
              uVar30 = *(uint *)(lVar33 + 0x18);
            } while ((int)uVar32 < (int)uVar30);
          }
          uVar8 = uVar8 + 1;
          uVar30 = *(uint *)(lVar23 + 0x18);
        } while ((int)uVar8 < (int)uVar30);
      }
      return uVar9;
    }
  }
code_r0x01650b74:
  func_0x00f78af4();
code_r0x01650b78:
  uVar10 = func_0x00f78b24();
code_r0x01650b84:
  uVar9 = func_0x00f78ac0(uVar10,0);
  return uVar9;
}



// ============================================================
// RVA: 0x16501a0 | Core.Localisation.LocalisationManager.FixStringIfArabic
// ============================================================

/* WARNING: Possible PIC construction at 0x0165026c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01650270) */
/* WARNING: Removing unreachable block (ram,0x01650280) */

undefined8 *
Core_Localisation_LocalisationManager__FixStringIfArabic
          (undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
          undefined1 *param_5)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined1 *puVar19;
  uint uVar20;
  long lVar21;
  int *piVar22;
  undefined8 uVar23;
  int iVar24;
  long lVar25;
  undefined8 uVar26;
  long *plVar27;
  undefined8 uVar28;
  ulong uVar29;
  uint uVar30;
  code *pcVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  undefined8 **ppuVar35;
  undefined8 unaff_x26;
  undefined1 **ppuVar36;
  undefined *puVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined1 *****pppppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  long *plStack_108;
  undefined1 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  long *plStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb57c1 & 1) == 0) {
    func_0x00f78a20(0x3d230d0);
    func_0x00f78a20(0x3d24040);
    bRam0000000003eb57c1 = 1;
  }
  if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = Core_Localisation_LocalisationManager__DoesStringContainArabic(param_1);
  if (iVar6 == 0) {
    return param_1;
  }
  if (((*(ushort *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar25 = **(long **)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8);
  if (lVar25 == 0) {
    puVar37 = &RTLTMPro_RTLSupport__FixRTL;
    auVar39 = func_0x00f78af4();
    lVar25 = auVar39._8_8_;
    param_1 = auVar39._0_8_;
  }
  else {
    *(undefined4 *)(lVar25 + 0x10) = 0;
    if (((*(ushort *)((long)/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0x1c) == 0)) {
      func_0x00f78ad0();
    }
    param_3 = (long *)((long)&MACH_HEADER.magic + 1);
    param_4 = 1;
    param_5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    puVar37 = (undefined *)0x1650270;
  }
  uVar32 = 0x3eb5000;
  plVar27 = param_3;
  puStack_40 = &stack0xfffffffffffffff0;
  puStack_38 = puVar37;
  if ((bRam0000000003eb57d3 & 1) == 0) {
    func_0x00f78a20(0x3d21be0);
    func_0x00f78a20(0x3d22f20);
    func_0x00f78a20(0x3d24040);
    func_0x00f78a20(0x3d25070);
    bRam0000000003eb57d3 = 1;
  }
  if (((*(ushort *)((long)/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0x1c) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040[0x17] != 0) {
    /*RTLTMPro.FastStringBuilder$$SetValue*/ func_0x0164c410(*(long *)/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040[0x17],param_1);
    uVar32 = *(undefined8 *)/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040[0x17];
    if (((*(ushort *)(/*RTLTMPro.TashkeelFixer_TypeInfo*/ lRam0000000003d25070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*RTLTMPro.TashkeelFixer_TypeInfo*/ lRam0000000003d25070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x26 = 0x3d22f20;
    /*RTLTMPro.TashkeelFixer$$RemoveTashkeel*/ func_0x01651a44(uVar32);
    uVar17 = *(undefined8 *)/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040[0x17];
    uVar32 = ((undefined8 *)/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040[0x17])[1];
    if (((*(ushort *)(/*RTLTMPro.GlyphFixer_TypeInfo*/ lRam0000000003d21be0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*RTLTMPro.GlyphFixer_TypeInfo*/ lRam0000000003d21be0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*RTLTMPro.GlyphFixer$$Fix*/ func_0x0164d17c(uVar17,uVar32,param_5,param_3,param_4);
    /*RTLTMPro.TashkeelFixer$$RestoreTashkeel*/ func_0x01651c28(*(undefined8 *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040[0x17] + 8));
    /*RTLTMPro.TashkeelFixer$$FixShaddaCombinations*/ func_0x01651d7c(*(undefined8 *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040[0x17] + 8));
    param_1 = *(undefined8 **)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040[0x17] + 8);
    if (((*(ushort *)(/*RTLTMPro.LigatureFixer_TypeInfo*/ lRam0000000003d22f20 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*RTLTMPro.LigatureFixer_TypeInfo*/ lRam0000000003d22f20 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar27 = param_3;
    /*RTLTMPro.LigatureFixer$$Fix*/ func_0x0164e8bc(param_1,lVar25,param_3,param_4,param_5);
    if ((int)param_4 != 0) {
      /*RTLTMPro.RichTextFixer$$Fix*/ func_0x01651f48(lVar25);
    }
    puVar9 = /*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040;
    if (((*(ushort *)((long)/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 + 0x1c) == 0)) {
      func_0x00f78ad0();
      puVar9 = /*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040;
    }
    /*RTLTMPro.RTLSupport_TypeInfo*/ puRam0000000003d24040 = puVar9;
    if (*(long *)puVar9[0x17] != 0) {
      *(undefined4 *)(*(long *)puVar9[0x17] + 0x10) = 0;
      return puVar9;
    }
  }
  puVar9 = (undefined8 *)func_0x00f78af4();
  puStack_98 = &Core_Localisation_LocalisationManager__GetLanguageCode;
  uStack_b0 = param_4;
  lStack_a8 = lVar25;
  ppuStack_a0 = &puStack_40;
  if (puVar9 != (undefined8 *)0x0) {
    uVar10 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(puVar9,0x2d,0);
    if ((int)uVar10 < 1) {
      return puVar9;
    }
    auVar39._8_8_ = 0;
    auVar39._0_8_ = puVar9;
    puVar3 = &stack0xffffffffffffff70;
    lVar25 = lStack_a8;
    uVar17 = uStack_b0;
    ppuVar36 = ppuStack_a0;
    puVar37 = puStack_98;
    do {
      puVar19 = auVar39._8_8_;
      puVar9 = auVar39._0_8_;
      *(long **)(puVar3 + -0x30) = param_3;
      *(undefined1 **)(puVar3 + -0x28) = param_5;
      *(undefined8 *)(puVar3 + -0x20) = uVar17;
      *(long *)(puVar3 + -0x18) = lVar25;
      *(undefined1 ***)(puVar3 + -0x10) = ppuVar36;
      *(undefined **)(puVar3 + -8) = puVar37;
      ppuVar36 = (undefined1 **)(puVar3 + -0x10);
      param_3 = (long *)0x3eb9000;
      if ((bRam0000000003eb944b & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb944b = 1;
      }
      iVar6 = auVar39._8_4_;
      if (iVar6 < 0) {
        uVar17 = 0x3d72d20;
code_r0x029cbcb4:
        uVar17 = func_0x00f78a24(uVar17);
        lVar25 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar17,0);
        func_0x00f78a24(0x3d1fcf8);
        uVar17 = func_0x00f78aec();
        uVar14 = 0x3d7b9d0;
      }
      else {
        iVar7 = *(int *)(puVar9 + 2);
        if (iVar7 < iVar6) {
          uVar17 = 0x3d7b9e8;
          goto code_r0x029cbcb4;
        }
        iVar24 = (int)uVar10;
        if (iVar24 < 0) {
          uVar17 = 0x3d6f480;
        }
        else {
          if (iVar6 <= iVar7 - iVar24) goto code_r0x029cbc4c;
          uVar17 = 0x3d6ddc8;
        }
        uVar17 = func_0x00f78a24(uVar17);
        lVar25 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar17,0);
        func_0x00f78a24(0x3d1fcf8);
        uVar17 = func_0x00f78aec();
        uVar14 = 0x3d7a280;
      }
      uVar14 = func_0x00f78a24(uVar14);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar17,uVar14,lVar25,0);
      uVar14 = func_0x00f78a24(0x3d5dbb0);
      puVar37 = &System_String__Substring;
      auVar39 = func_0x00f78ac0(uVar17,uVar14);
      uVar10 = (ulong)(uint)(*(int *)(auVar39._0_8_ + 0x10) - auVar39._8_4_);
      puVar3 = puVar3 + -0x30;
      param_5 = puVar19;
    } while( true );
  }
  auVar39 = func_0x00f78af4();
  lVar33 = auVar39._0_8_;
  puStack_b8 = &Core_Localisation_LocalisationManager__TryGetTimeFormatOverrideString;
  uVar17 = 0x3eb5000;
  plVar18 = plVar27;
  uStack_f0 = uVar32;
  puStack_e8 = param_1;
  plStack_e0 = param_3;
  puStack_d8 = param_5;
  uStack_d0 = param_4;
  lStack_c8 = lVar25;
  pppuStack_c0 = &ppuStack_a0;
  if ((bRam0000000003eb57c2 & 1) == 0) {
    func_0x00f78a20(0x3d6d5c0);
    func_0x00f78a20(0x3d7a030);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c2 = 1;
  }
  plVar11 = *(long **)(lVar33 + 0x68);
  if ((plVar11 != (long *)0x0) &&
     (lVar25 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240)),
     lVar25 != 0)) {
    uVar17 = /*System.Globalization.DateTimeFormatInfo$$get_ShortTimePattern*/ func_0x02a93380(lVar25,0);
    plVar11 = *(long **)(lVar33 + 0x68);
    if ((plVar11 != (long *)0x0) &&
       (lVar25 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240)),
       lVar25 != 0)) {
      param_1 = (undefined8 *)/*System.Globalization.DateTimeFormatInfo$$get_ShortDatePattern*/ func_0x02a932e0(lVar25,0);
      if (*(long *)(lVar33 + 0x58) != 0) {
        plVar18 = (long *)((long)&MACH_HEADER.cputype + 1);
        puVar9 = (undefined8 *)/*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar33 + 0x58),/*STR('ar')*/ uRam0000000003d77c80,5,0);
        uVar14 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
        if ((int)puVar9 != 0) {
code_r0x016505f8:
          *auVar39._8_8_ = uVar14;
          *plVar27 = (long)param_1;
          return puVar9;
        }
        if (*(long *)(lVar33 + 0x58) != 0) {
          puVar9 = (undefined8 *)/*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar33 + 0x58),/*STR('ko')*/ uRam0000000003d7a030,5,0);
          uVar14 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
          if ((int)puVar9 == 0) {
            uVar14 = uVar17;
          }
          goto code_r0x016505f8;
        }
      }
    }
  }
  lVar25 = func_0x00f78af4();
  puStack_f8 = &Core_Localisation_LocalisationManager__GenerateSupportedLanguageList;
  uVar10 = 0x3d3bf88;
  uStack_130 = uVar32;
  puStack_128 = param_1;
  uStack_120 = uVar17;
  plStack_108 = plVar27;
  ppppuStack_100 = &pppuStack_c0;
  auStack_118 = auVar39;
  if ((bRam0000000003eb57c3 & 1) == 0) {
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    bRam0000000003eb57c3 = 1;
  }
  puVar9 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(puVar9,uRam0000000003d3bf88);
  lVar25 = *(long *)(lVar25 + 0x20);
  uVar17 = 0x3d1de30;
  if (lVar25 != 0) {
    if (0 < (int)*(ulong *)(lVar25 + 0x18)) {
      uVar10 = 0;
      uVar29 = *(ulong *)(lVar25 + 0x18) & 0xffffffff;
      param_1 = (undefined8 *)(lVar25 + 0x20);
      do {
        if (uVar29 <= uVar10) {
          uVar17 = func_0x00f78b24();
          func_0x00f78ac0(uVar17,0);
          uVar17 = 0x3d3bfa0;
          goto code_r0x01650704;
        }
        uVar17 = 0x3d3bfa0;
        if (puVar9 == (undefined8 *)0x0) goto code_r0x01650704;
        plVar18 = plRam0000000003d3bfa0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(puVar9,*param_1);
        uVar10 = uVar10 + 1;
        uVar29 = (ulong)*(uint *)(lVar25 + 0x18);
        param_1 = param_1 + 3;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar25 + 0x18));
    }
    return puVar9;
  }
code_r0x01650704:
  auVar39 = func_0x00f78af4();
  lVar13 = auVar39._8_8_;
  lVar33 = auVar39._0_8_;
  uStack_178 = 0x3d24040;
  puStack_138 = &Core_Localisation_LocalisationManager__Set;
  uStack_180 = unaff_x26;
  uStack_170 = uVar32;
  puStack_168 = param_1;
  uStack_160 = uVar17;
  uStack_158 = uVar10;
  lStack_150 = lVar25;
  puStack_148 = puVar9;
  pppppuStack_140 = &ppppuStack_100;
  if ((bRam0000000003eb57c4 & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d20b50);
    func_0x00f78a20(0x3d2fe40);
    func_0x00f78a20(0x3d2fe80);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c4 = 1;
  }
  if (*(long *)(lVar33 + 0x70) != 0) {
    /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$Clear*/ func_0x01ed79a4(*(long *)(lVar33 + 0x70),uRam0000000003d2fe40);
    if (lVar13 != 0) {
      uVar10 = (ulong)*(uint *)(lVar13 + 0x18);
      if (0 < (int)*(uint *)(lVar13 + 0x18)) {
        uVar29 = 0;
        uVar34 = uVar10 - 1;
        while( true ) {
          if (uVar10 <= uVar29) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar25 = plVar18[1];
          if (lVar25 == 0) goto code_r0x016508d8;
          uVar32 = *(undefined8 *)(*(long *)(lVar13 + 0x10) + uVar29 * 8 + 0x20);
          if (*(uint *)(lVar25 + 0x18) <= uVar29) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(lVar33 + 0x70) == 0) goto code_r0x016508d8;
          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(*(long *)(lVar33 + 0x70),uVar32,
                          *(undefined8 *)(*(long *)(lVar25 + 0x10) + uVar29 * 8 + 0x20),
                          uRam0000000003d2fe80);
          if (uVar34 == uVar29) break;
          uVar10 = (ulong)*(uint *)(lVar13 + 0x18);
          uVar29 = uVar29 + 1;
        }
      }
      *(long *)(lVar33 + 0x58) = *plVar18;
      if (*plVar18 != 0) {
        uVar5 = /*System.String$$Equals*/ func_0x029caa48(*plVar18,/*STR('ar')*/ uRam0000000003d77c80,5,0);
        *(undefined1 *)(lVar33 + 0x61) = uVar5;
        *(undefined1 *)(lVar33 + 0x60) = uVar5;
        uVar17 = *(undefined8 *)(lVar33 + 0x58);
        uVar32 = func_0x00f78aec(/*System.Globalization.CultureInfo_TypeInfo*/ uRam0000000003d20b50);
        /*System.Globalization.CultureInfo$$.ctor*/ func_0x02a811d4(uVar32,uVar17,0);
        *(undefined8 *)(lVar33 + 0x68) = uVar32;
        puVar9 = *(undefined8 **)(lVar33 + 0x10);
        if (puVar9 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        plVar18 = (long *)*plVar18;
        puStack_188 = puVar9;
        lVar25 = puVar9[0xd];
        if (lVar25 == 0) {
          ppuVar35 = &puStack_188;
          lVar33 = 1;
        }
        else {
          lVar33 = *(long *)(lVar25 + 0x18);
          if (lVar33 == 0) {
            return puVar9;
          }
          ppuVar35 = (undefined8 **)(lVar25 + 0x20);
        }
        lVar25 = 0;
        do {
          puVar15 = ppuVar35[lVar25];
          pcVar31 = (code *)puVar15[2];
          plVar27 = (long *)puVar15[4];
          lVar13 = puVar15[5];
          if (*(short *)(lVar13 + 0x48) == -1) {
            func_0x00f78ad8(lVar13);
          }
          iVar6 = func_0x00f78a4c(lVar13);
          bVar4 = *(char *)(lVar13 + 0x4a) == '\x01';
          if (iVar6 == 0) {
            if (bVar4) {
              if (plVar27 == (long *)0x0) {
code_r0x01e480c8:
                puVar15 = (undefined8 *)(*pcVar31)(plVar18,lVar13);
              }
              else {
                if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar27 + 0x115) & 1) != 0))
                   || (puVar9[3] == 0)) goto code_r0x01e47fc0;
                iVar6 = func_0x00f78a44(lVar13);
                iVar7 = func_0x00f78ec0(lVar13);
                if (iVar6 == 0) {
                  uVar1 = *(ushort *)(lVar13 + 0x48);
                  if (iVar7 == 0) {
                    lVar13 = *plVar27 + (ulong)uVar1 * 0x10;
                    puVar15 = (undefined8 *)
                              (**(code **)(lVar13 + 0x138))
                                        (plVar27,plVar18,*(undefined8 *)(lVar13 + 0x140));
                    goto code_r0x01e480d4;
                  }
                  lVar13 = func_0x00f78a48(lVar13);
                  lVar21 = *plVar27;
                  uVar10 = (ulong)*(ushort *)(lVar21 + 0x12a);
                  if (uVar10 != 0) {
                    piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == lVar13) {
                        puVar15 = (undefined8 *)
                                  (lVar21 + (long)(int)(*piVar22 + (uint)uVar1) * 0x10 + 0x138);
                        goto code_r0x01e48260;
                      }
                      piVar22 = piVar22 + 4;
                      uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x00fac1f0(plVar27,lVar13,(ulong)uVar1);
code_r0x01e48260:
                  pcVar31 = (code *)*puVar15;
                  puVar15 = (undefined8 *)puVar15[1];
                }
                else {
                  if (iVar7 == 0) {
                    uVar32 = *(undefined8 *)
                              (*plVar27 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar21 = *plVar27;
                    uVar10 = (ulong)*(ushort *)(lVar21 + 0x12a);
                    if (uVar10 != 0) {
                      piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar22 + -2) == *(long *)(lVar13 + 0x18)) {
                          lVar21 = lVar21 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar13 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e48238;
                        }
                        piVar22 = piVar22 + 4;
                        uVar10 = uVar10 - 1;
                      } while (uVar10 != 0);
                    }
                    lVar21 = func_0x00fac1f0(plVar27);
code_r0x01e48238:
                    uVar32 = *(undefined8 *)(lVar21 + 8);
                  }
                  puVar15 = (undefined8 *)func_0x00f78acc(uVar32,lVar13);
                  pcVar31 = (code *)*puVar15;
                }
                puVar15 = (undefined8 *)(*pcVar31)(plVar27,plVar18,puVar15);
              }
            }
            else {
              if ((*(short *)(lVar13 + 0x48) == -1) || (puVar9[3] == 0)) goto code_r0x01e480c8;
              iVar6 = func_0x00f78a44(lVar13);
              iVar7 = func_0x00f78ec0(lVar13);
              if (iVar6 == 0) {
                uVar1 = *(ushort *)(lVar13 + 0x48);
                if (iVar7 == 0) {
                  lVar13 = *plVar18 + (ulong)uVar1 * 0x10;
                  puVar15 = (undefined8 *)
                            (**(code **)(lVar13 + 0x138))(plVar18,*(undefined8 *)(lVar13 + 0x140));
                  goto code_r0x01e480d4;
                }
                lVar13 = func_0x00f78a48(lVar13);
                lVar21 = *plVar18;
                uVar10 = (ulong)*(ushort *)(lVar21 + 0x12a);
                if (uVar10 != 0) {
                  piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == lVar13) {
                      puVar15 = (undefined8 *)
                                (lVar21 + (long)(int)(*piVar22 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01e481fc;
                    }
                    piVar22 = piVar22 + 4;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                puVar15 = (undefined8 *)func_0x00fac1f0(plVar18,lVar13,(ulong)uVar1);
code_r0x01e481fc:
                pcVar31 = (code *)*puVar15;
                puVar15 = (undefined8 *)puVar15[1];
              }
              else {
                if (iVar7 == 0) {
                  uVar32 = *(undefined8 *)
                            (*plVar18 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar21 = *plVar18;
                  uVar10 = (ulong)*(ushort *)(lVar21 + 0x12a);
                  if (uVar10 != 0) {
                    piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == *(long *)(lVar13 + 0x18)) {
                        lVar21 = lVar21 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e481d4;
                      }
                      piVar22 = piVar22 + 4;
                      uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                  }
                  lVar21 = func_0x00fac1f0(plVar18);
code_r0x01e481d4:
                  uVar32 = *(undefined8 *)(lVar21 + 8);
                }
                puVar15 = (undefined8 *)func_0x00f78acc(uVar32,lVar13);
                pcVar31 = (code *)*puVar15;
              }
              puVar15 = (undefined8 *)(*pcVar31)(plVar18,puVar15);
            }
          }
          else {
            if (bVar4) goto code_r0x01e480c8;
code_r0x01e47fc0:
            puVar15 = (undefined8 *)(*pcVar31)(plVar27,plVar18,lVar13);
          }
code_r0x01e480d4:
          lVar25 = lVar25 + 1;
          if (lVar25 == lVar33) {
            return puVar15;
          }
        } while( true );
      }
    }
  }
code_r0x016508d8:
  auVar39 = func_0x00f78af4();
  puVar15 = auVar39._0_8_;
  puStack_188 = (undefined8 *)
                &Core_Localisation_LocalisationManager__SetFontAndMaterialAssetMappings;
  puVar9 = puVar15;
  if ((bRam0000000003eb57c6 & 1) == 0) {
    func_0x00f78a20(0x3d3c138);
    puVar9 = (undefined8 *)func_0x00f78a20(0x3d3c140);
    bRam0000000003eb57c6 = 1;
  }
  if ((puVar15[7] != 0) && (lVar25 = *(long *)(puVar15[7] + 0x20), lVar25 != 0)) {
    uVar20 = *(uint *)(lVar25 + 0x18);
    if (0 < (int)uVar20) {
      uVar8 = 0;
      do {
        if (uVar20 <= uVar8) goto code_r0x01650b78;
        plVar27 = (long *)puVar15[8];
        if (plVar27 == (long *)0x0) goto code_r0x01650b74;
        lVar33 = lVar25 + (long)(int)uVar8 * 0x10;
        lVar13 = *(long *)(lVar33 + 0x20);
        lVar33 = *(long *)(lVar33 + 0x28);
        if (lVar13 != 0) {
          puVar9 = (undefined8 *)func_0x00f78adc(lVar13,*(undefined8 *)(*plVar27 + 0x40));
          if (puVar9 == (undefined8 *)0x0) goto code_r0x01650b80;
        }
        if (*(uint *)(plVar27 + 3) <= uVar8) goto code_r0x01650b78;
        plVar27[(long)(int)uVar8 + 4] = lVar13;
        if (lVar33 == 0) goto code_r0x01650b74;
        uVar20 = *(uint *)(lVar33 + 0x18);
        if (0 < (int)uVar20) {
          uVar30 = 0;
          do {
            if (uVar20 <= uVar30) goto code_r0x01650b78;
            lVar21 = lVar33 + (long)(int)uVar30 * 0x10;
            lVar12 = *(long *)(lVar21 + 0x20);
            if (lVar12 == 0) goto code_r0x01650b74;
            lVar21 = *(long *)(lVar21 + 0x28);
            puVar9 = (undefined8 *)/*System.String$$Equals*/ func_0x029caa48(lVar12,auVar39._8_8_,5,0);
            if ((int)puVar9 != 0) {
              if ((lVar21 == 0) || (*(long *)(lVar21 + 0x138) == 0)) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar21 + 0x138),uRam0000000003d3c140);
              if (*(long *)(lVar21 + 0x138) == 0) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar21 + 0x138),lVar13,uRam0000000003d3c138);
              plVar27 = (long *)puVar15[8];
              if (plVar27 == (long *)0x0) goto code_r0x01650b74;
              puVar9 = (undefined8 *)func_0x00f78adc(lVar21,*(undefined8 *)(*plVar27 + 0x40));
              if (puVar9 == (undefined8 *)0x0) goto code_r0x01650b80;
              if (*(uint *)(plVar27 + 3) <= uVar8) goto code_r0x01650b78;
              plVar27[(long)(int)uVar8 + 4] = lVar21;
            }
            uVar30 = uVar30 + 1;
            uVar20 = *(uint *)(lVar33 + 0x18);
          } while ((int)uVar30 < (int)uVar20);
        }
        uVar8 = uVar8 + 1;
        uVar20 = *(uint *)(lVar25 + 0x18);
      } while ((int)uVar8 < (int)uVar20);
    }
    if ((puVar15[7] != 0) && (lVar25 = *(long *)(puVar15[7] + 0x28), lVar25 != 0)) {
      uVar20 = *(uint *)(lVar25 + 0x18);
      if (0 < (int)uVar20) {
        uVar8 = 0;
        do {
          if (uVar20 <= uVar8) goto code_r0x01650b78;
          plVar27 = (long *)puVar15[9];
          if (plVar27 == (long *)0x0) goto code_r0x01650b74;
          lVar33 = lVar25 + (long)(int)uVar8 * 0x10;
          lVar13 = *(long *)(lVar33 + 0x20);
          lVar33 = *(long *)(lVar33 + 0x28);
          if (lVar13 != 0) {
            puVar9 = (undefined8 *)func_0x00f78adc(lVar13,*(undefined8 *)(*plVar27 + 0x40));
            if (puVar9 == (undefined8 *)0x0) goto code_r0x01650b80;
          }
          if (*(uint *)(plVar27 + 3) <= uVar8) goto code_r0x01650b78;
          plVar27[(long)(int)uVar8 + 4] = lVar13;
          if (lVar33 == 0) goto code_r0x01650b74;
          uVar20 = *(uint *)(lVar33 + 0x18);
          if (0 < (int)uVar20) {
            uVar30 = 0;
            do {
              if (uVar20 <= uVar30) goto code_r0x01650b78;
              lVar13 = lVar33 + (long)(int)uVar30 * 0x10;
              lVar21 = *(long *)(lVar13 + 0x20);
              if (lVar21 == 0) goto code_r0x01650b74;
              lVar13 = *(long *)(lVar13 + 0x28);
              puVar9 = (undefined8 *)/*System.String$$Equals*/ func_0x029caa48(lVar21,auVar39._8_8_,5,0);
              if ((int)puVar9 != 0) {
                plVar27 = (long *)puVar15[9];
                if (plVar27 == (long *)0x0) goto code_r0x01650b74;
                if (lVar13 != 0) {
                  puVar9 = (undefined8 *)func_0x00f78adc(lVar13,*(undefined8 *)(*plVar27 + 0x40));
                  if (puVar9 == (undefined8 *)0x0) goto code_r0x01650b80;
                }
                if (*(uint *)(plVar27 + 3) <= uVar8) goto code_r0x01650b78;
                plVar27[(long)(int)uVar8 + 4] = lVar13;
              }
              uVar30 = uVar30 + 1;
              uVar20 = *(uint *)(lVar33 + 0x18);
            } while ((int)uVar30 < (int)uVar20);
          }
          uVar8 = uVar8 + 1;
          uVar20 = *(uint *)(lVar25 + 0x18);
        } while ((int)uVar8 < (int)uVar20);
      }
      return puVar9;
    }
  }
code_r0x01650b74:
  func_0x00f78af4();
code_r0x01650b78:
  uVar32 = func_0x00f78b24();
code_r0x01650b84:
  puVar9 = (undefined8 *)func_0x00f78ac0(uVar32,0);
  return puVar9;
code_r0x029cc070:
  uVar17 = func_0x00f78b24();
  func_0x00f78ac0(uVar17,0);
  param_1 = puVar15;
code_r0x029cc07c:
  auVar39._8_8_ = lVar25;
  auVar39._0_8_ = uVar29;
  puVar37 = &System_String__TrimStart;
  auVar40 = func_0x00f78af4();
  puVar15 = auVar40._0_8_;
  if ((auVar40._8_8_ == 0) || (*(long *)(auVar40._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  puVar15 = (undefined8 *)0x0;
  puVar3 = puVar3 + -0x40;
  puVar9 = puVar16;
  auVar2 = auVar40;
  goto System_String__TrimHelper;
code_r0x01650b80:
  uVar32 = func_0x00f78b14();
  goto code_r0x01650b84;
code_r0x029cbc4c:
  if (iVar24 == 0) {
    puVar9 = (undefined8 *)**(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar6 != 0) || (iVar7 != iVar24)) {
    uVar17 = *(undefined8 *)(puVar3 + -0x10);
    uVar38 = *(undefined8 *)(puVar3 + -8);
    uVar14 = *(undefined8 *)(puVar3 + -0x20);
    puVar9 = *(undefined8 **)(puVar3 + -0x18);
    uVar28 = *(undefined8 *)(puVar3 + -0x30);
    uVar23 = *(undefined8 *)(puVar3 + -0x28);
System_String__InternalSubString:
    uVar29 = auVar39._0_8_;
    auVar2._8_8_ = auVar39._8_8_;
    auVar2._0_8_ = puVar9;
    *(undefined8 *)(puVar3 + -0x30) = uVar28;
    *(undefined8 *)(puVar3 + -0x28) = uVar23;
    *(undefined8 *)(puVar3 + -0x20) = uVar14;
    *(undefined8 **)(puVar3 + -0x18) = puVar9;
    *(undefined8 *)(puVar3 + -0x10) = uVar17;
    *(undefined8 *)(puVar3 + -8) = uVar38;
    puVar19 = puVar3 + -0x10;
    puVar15 = (undefined8 *)func_0x00f834ac(uVar10);
    if (puVar15 != (undefined8 *)0x0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc((long)puVar15 + 0x14,uVar29 + (long)auVar39._8_4_ * 2 + 0x14,(int)uVar10 << 1,
                      0);
      return puVar15;
    }
    puVar37 = &System_String__Trim;
    auVar40 = func_0x00f78af4();
    puVar15 = auVar40._0_8_;
    if ((auVar40._8_8_ != 0) && (*(long *)(auVar40._8_8_ + 0x18) != 0)) {
      puVar15 = (undefined8 *)((long)&MACH_HEADER.magic + 2);
      puVar3 = puVar3 + -0x30;
      auVar2 = auVar40;
System_String__TrimHelper:
      lVar25 = auVar2._8_8_;
      puVar16 = auVar2._0_8_;
      *(undefined8 *)(puVar3 + -0x40) = uVar32;
      *(undefined8 **)(puVar3 + -0x38) = param_1;
      *(undefined1 (*) [16])(puVar3 + -0x30) = auVar39;
      *(ulong *)(puVar3 + -0x20) = uVar10;
      *(undefined8 **)(puVar3 + -0x18) = puVar9;
      *(undefined1 **)(puVar3 + -0x10) = puVar19;
      *(undefined **)(puVar3 + -8) = puVar37;
      puVar19 = puVar3 + -0x10;
      uVar20 = *(uint *)(puVar16 + 2);
      uVar10 = (ulong)uVar20;
      if ((int)puVar15 == 1) {
        uVar29 = 0;
        puVar15 = param_1;
code_r0x029cbfd8:
        do {
          uVar20 = (int)uVar10 - 1;
          uVar10 = (ulong)uVar20;
          if ((int)uVar20 < (int)uVar29) break;
          uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(puVar16,uVar10);
          param_1 = puVar15;
          if (lVar25 == 0) goto code_r0x029cc07c;
          iVar6 = *(int *)(lVar25 + 0x18);
          if (iVar6 < 1) {
            iVar7 = 0;
          }
          else {
            iVar24 = 0;
            do {
              if (iVar6 == iVar24) goto code_r0x029cc070;
              iVar7 = iVar24;
            } while ((*(ushort *)(lVar25 + (long)iVar24 * 2 + 0x20) != uVar8) &&
                    (iVar24 = iVar24 + 1, iVar7 = iVar6, iVar6 != iVar24));
          }
        } while (iVar7 != iVar6);
      }
      else {
        if ((int)uVar20 < 1) {
          uVar29 = 0;
        }
        else {
          uVar29 = 0;
          do {
            uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(puVar16,uVar29);
            param_1 = puVar15;
            if (lVar25 == 0) goto code_r0x029cc07c;
            iVar6 = *(int *)(lVar25 + 0x18);
            if (iVar6 < 1) {
              iVar7 = 0;
            }
            else {
              iVar24 = 0;
              do {
                if (iVar6 == iVar24) goto code_r0x029cc070;
                iVar7 = iVar24;
              } while ((*(ushort *)(lVar25 + (long)iVar24 * 2 + 0x20) != uVar8) &&
                      (iVar24 = iVar24 + 1, iVar7 = iVar6, iVar6 != iVar24));
            }
          } while ((iVar7 != iVar6) &&
                  (uVar8 = (int)uVar29 + 1, uVar29 = (ulong)uVar8,
                  (int)uVar8 < *(int *)(puVar16 + 2)));
        }
        if ((int)puVar15 != 0) {
          uVar10 = (ulong)*(uint *)(puVar16 + 2);
          goto code_r0x029cbfd8;
        }
        uVar20 = uVar20 - 1;
      }
      uVar17 = *(undefined8 *)(puVar3 + -0x10);
      uVar38 = *(undefined8 *)(puVar3 + -8);
      uVar14 = *(undefined8 *)(puVar3 + -0x20);
      uVar23 = *(undefined8 *)(puVar3 + -0x18);
      uVar28 = *(undefined8 *)(puVar3 + -0x30);
      uVar26 = *(undefined8 *)(puVar3 + -0x28);
      uVar32 = *(undefined8 *)(puVar3 + -0x40);
      param_1 = *(undefined8 **)(puVar3 + -0x38);
      puVar15 = puVar16;
      goto System_String__CreateTrimmedString;
    }
    iVar6 = 2;
    puVar3 = puVar3 + -0x30;
    goto System_String__TrimHelper;
  }
  return puVar9;
code_r0x029cc094:
  iVar6 = 0;
  puVar3 = puVar3 + -0x40;
System_String__TrimHelper:
  *(undefined8 *)(puVar3 + -0x40) = uVar32;
  *(undefined8 **)(puVar3 + -0x38) = param_1;
  *(ulong *)(puVar3 + -0x30) = uVar29;
  *(long *)(puVar3 + -0x28) = auVar2._8_8_;
  *(ulong *)(puVar3 + -0x20) = uVar10;
  *(long *)(puVar3 + -0x18) = auVar2._0_8_;
  *(undefined1 **)(puVar3 + -0x10) = puVar19;
  *(undefined **)(puVar3 + -8) = puVar37;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar20 = *(uint *)(puVar15 + 2);
  if (iVar6 == 1) {
    uVar29 = 0;
  }
  else {
    if ((int)uVar20 < 1) {
      uVar29 = 0;
    }
    else {
      uVar29 = 0;
      do {
        uVar32 = /*System.String$$get_Chars*/ func_0x029c5420(puVar15,uVar29);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar32,0);
        if ((uVar10 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(puVar15,uVar29);
          break;
        }
        uVar8 = (int)uVar29 + 1;
        uVar29 = (ulong)uVar8;
      } while ((int)uVar8 < *(int *)(puVar15 + 2));
    }
    if (iVar6 == 0) {
      uVar20 = uVar20 - 1;
      goto code_r0x029cbf04;
    }
    uVar20 = *(uint *)(puVar15 + 2);
  }
  do {
    uVar20 = uVar20 - 1;
    if ((int)uVar20 < (int)uVar29) goto code_r0x029cbf04;
    uVar32 = /*System.String$$get_Chars*/ func_0x029c5420(puVar15,uVar20);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar32,0);
  } while ((uVar10 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(puVar15,uVar29);
code_r0x029cbf04:
  uVar17 = *(undefined8 *)(puVar3 + -0x10);
  uVar38 = *(undefined8 *)(puVar3 + -8);
  uVar14 = *(undefined8 *)(puVar3 + -0x20);
  uVar23 = *(undefined8 *)(puVar3 + -0x18);
  uVar28 = *(undefined8 *)(puVar3 + -0x30);
  uVar26 = *(undefined8 *)(puVar3 + -0x28);
  uVar32 = *(undefined8 *)(puVar3 + -0x40);
  param_1 = *(undefined8 **)(puVar3 + -0x38);
System_String__CreateTrimmedString:
  auVar39._8_8_ = uVar29;
  auVar39._0_8_ = puVar15;
  *(undefined8 *)(puVar3 + -0x30) = uVar28;
  *(undefined8 *)(puVar3 + -0x28) = uVar26;
  *(undefined8 *)(puVar3 + -0x20) = uVar14;
  *(undefined8 *)(puVar3 + -0x18) = uVar23;
  *(undefined8 *)(puVar3 + -0x10) = uVar17;
  *(undefined8 *)(puVar3 + -8) = uVar38;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar20 = (uVar20 - (int)uVar29) + 1;
  uVar10 = (ulong)uVar20;
  if (uVar20 != *(uint *)(puVar15 + 2)) {
    if (uVar20 != 0) {
      uVar17 = *(undefined8 *)(puVar3 + -0x10);
      uVar38 = *(undefined8 *)(puVar3 + -8);
      uVar14 = *(undefined8 *)(puVar3 + -0x20);
      puVar9 = *(undefined8 **)(puVar3 + -0x18);
      uVar28 = *(undefined8 *)(puVar3 + -0x30);
      uVar23 = *(undefined8 *)(puVar3 + -0x28);
      goto System_String__InternalSubString;
    }
    puVar15 = (undefined8 *)**(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return puVar15;
}



// ============================================================
// RVA: 0x1650490 | Core.Localisation.LocalisationManager.GetLanguageCode
// ============================================================

ulong Core_Localisation_LocalisationManager__GetLanguageCode
                (ulong param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar8;
  int iVar7;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined *puVar20;
  long lVar21;
  int *piVar22;
  undefined8 unaff_x19;
  undefined8 uVar23;
  int iVar24;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 uVar25;
  undefined8 unaff_x22;
  undefined8 uVar26;
  ulong uVar27;
  uint uVar28;
  undefined8 unaff_x23;
  code *pcVar29;
  undefined8 unaff_x24;
  undefined **ppuVar30;
  long lVar31;
  undefined1 *unaff_x29;
  undefined1 *puVar32;
  undefined *unaff_x30;
  undefined8 uVar33;
  undefined *puVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined *puStack_f8;
  
  if (param_1 != 0) {
    uVar9 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(param_1,0x2d,0);
    if ((int)uVar9 < 1) {
      return param_1;
    }
    puVar3 = (undefined1 *)register0x00000008;
    uVar15 = 0;
    do {
      uVar27 = uVar15;
      *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
      *(ulong *)(puVar3 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
      *(undefined **)(puVar3 + -8) = unaff_x30;
      unaff_x29 = puVar3 + -0x10;
      unaff_x22 = 0x3eb9000;
      if ((bRam0000000003eb944b & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb944b = 1;
      }
      iVar6 = (int)uVar27;
      if (iVar6 < 0) {
        uVar18 = 0x3d72d20;
code_r0x029cbcb4:
        uVar18 = func_0x00f78a24(uVar18);
        unaff_x19 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar18,0);
        func_0x00f78a24(0x3d1fcf8);
        unaff_x20 = func_0x00f78aec();
        uVar18 = 0x3d7b9d0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x10);
        if (iVar7 < iVar6) {
          uVar18 = 0x3d7b9e8;
          goto code_r0x029cbcb4;
        }
        iVar24 = (int)uVar9;
        if (iVar24 < 0) {
          uVar18 = 0x3d6f480;
        }
        else {
          if (iVar6 <= iVar7 - iVar24) goto code_r0x029cbc4c;
          uVar18 = 0x3d6ddc8;
        }
        uVar18 = func_0x00f78a24(uVar18);
        unaff_x19 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar18,0);
        func_0x00f78a24(0x3d1fcf8);
        unaff_x20 = func_0x00f78aec();
        uVar18 = 0x3d7a280;
      }
      uVar18 = func_0x00f78a24(uVar18);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(unaff_x20,uVar18,unaff_x19,0);
      uVar18 = func_0x00f78a24(0x3d5dbb0);
      unaff_x30 = &System_String__Substring;
      auVar35 = func_0x00f78ac0(unaff_x20,uVar18);
      param_1 = auVar35._0_8_;
      uVar9 = (ulong)(uint)(*(int *)(param_1 + 0x10) - auVar35._8_4_);
      puVar3 = puVar3 + -0x30;
      uVar15 = auVar35._8_8_;
      unaff_x21 = uVar27;
    } while( true );
  }
  auVar35 = func_0x00f78af4();
  lVar12 = auVar35._0_8_;
  plVar17 = param_3;
  if ((bRam0000000003eb57c2 & 1) == 0) {
    func_0x00f78a20(0x3d6d5c0);
    func_0x00f78a20(0x3d7a030);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c2 = 1;
  }
  plVar10 = *(long **)(lVar12 + 0x68);
  if ((plVar10 != (long *)0x0) &&
     (lVar11 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240)),
     lVar11 != 0)) {
    uVar18 = /*System.Globalization.DateTimeFormatInfo$$get_ShortTimePattern*/ func_0x02a93380(lVar11,0);
    plVar10 = *(long **)(lVar12 + 0x68);
    if ((plVar10 != (long *)0x0) &&
       (lVar11 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240)),
       lVar11 != 0)) {
      lVar11 = /*System.Globalization.DateTimeFormatInfo$$get_ShortDatePattern*/ func_0x02a932e0(lVar11,0);
      if (*(long *)(lVar12 + 0x58) != 0) {
        plVar17 = (long *)((long)&MACH_HEADER.cputype + 1);
        uVar9 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar12 + 0x58),/*STR('ar')*/ uRam0000000003d77c80,5,0);
        uVar16 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
        if ((int)uVar9 != 0) {
code_r0x016505f8:
          *auVar35._8_8_ = uVar16;
          *param_3 = lVar11;
          return uVar9;
        }
        if (*(long *)(lVar12 + 0x58) != 0) {
          uVar9 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar12 + 0x58),/*STR('ko')*/ uRam0000000003d7a030,5,0);
          uVar16 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
          if ((int)uVar9 == 0) {
            uVar16 = uVar18;
          }
          goto code_r0x016505f8;
        }
      }
    }
  }
  lVar12 = func_0x00f78af4();
  if ((bRam0000000003eb57c3 & 1) == 0) {
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    bRam0000000003eb57c3 = 1;
  }
  uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf88);
  lVar12 = *(long *)(lVar12 + 0x20);
  if (lVar12 != 0) {
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar15 = 0;
      uVar27 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      puVar14 = (undefined8 *)(lVar12 + 0x20);
      do {
        if (uVar27 <= uVar15) {
          uVar18 = func_0x00f78b24();
          func_0x00f78ac0(uVar18,0);
          goto code_r0x01650704;
        }
        if (uVar9 == 0) goto code_r0x01650704;
        plVar17 = plRam0000000003d3bfa0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(uVar9,*puVar14);
        uVar15 = uVar15 + 1;
        uVar27 = (ulong)*(uint *)(lVar12 + 0x18);
        puVar14 = puVar14 + 3;
      } while ((long)uVar15 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
    return uVar9;
  }
code_r0x01650704:
  auVar35 = func_0x00f78af4();
  lVar11 = auVar35._8_8_;
  lVar12 = auVar35._0_8_;
  if ((bRam0000000003eb57c4 & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d20b50);
    func_0x00f78a20(0x3d2fe40);
    func_0x00f78a20(0x3d2fe80);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c4 = 1;
  }
  if ((*(long *)(lVar12 + 0x70) != 0) &&
     (/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$Clear*/ func_0x01ed79a4(*(long *)(lVar12 + 0x70),uRam0000000003d2fe40), lVar11 != 0)) {
    uVar9 = (ulong)*(uint *)(lVar11 + 0x18);
    if (0 < (int)*(uint *)(lVar11 + 0x18)) {
      uVar15 = 0;
      uVar27 = uVar9 - 1;
      while( true ) {
        if (uVar9 <= uVar15) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar31 = plVar17[1];
        if (lVar31 == 0) goto code_r0x016508d8;
        uVar18 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + uVar15 * 8 + 0x20);
        if (*(uint *)(lVar31 + 0x18) <= uVar15) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(lVar12 + 0x70) == 0) goto code_r0x016508d8;
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(*(long *)(lVar12 + 0x70),uVar18,
                        *(undefined8 *)(*(long *)(lVar31 + 0x10) + uVar15 * 8 + 0x20),
                        uRam0000000003d2fe80);
        if (uVar27 == uVar15) break;
        uVar9 = (ulong)*(uint *)(lVar11 + 0x18);
        uVar15 = uVar15 + 1;
      }
    }
    *(long *)(lVar12 + 0x58) = *plVar17;
    if (*plVar17 != 0) {
      uVar5 = /*System.String$$Equals*/ func_0x029caa48(*plVar17,/*STR('ar')*/ uRam0000000003d77c80,5,0);
      *(undefined1 *)(lVar12 + 0x61) = uVar5;
      *(undefined1 *)(lVar12 + 0x60) = uVar5;
      uVar16 = *(undefined8 *)(lVar12 + 0x58);
      uVar18 = func_0x00f78aec(/*System.Globalization.CultureInfo_TypeInfo*/ uRam0000000003d20b50);
      /*System.Globalization.CultureInfo$$.ctor*/ func_0x02a811d4(uVar18,uVar16,0);
      *(undefined8 *)(lVar12 + 0x68) = uVar18;
      puVar34 = *(undefined **)(lVar12 + 0x10);
      if (puVar34 == (undefined *)0x0) {
        return 0;
      }
      plVar17 = (long *)*plVar17;
      puStack_f8 = puVar34;
      lVar12 = *(long *)(puVar34 + 0x68);
      if (lVar12 == 0) {
        ppuVar30 = &puStack_f8;
        lVar11 = 1;
      }
      else {
        lVar11 = *(long *)(lVar12 + 0x18);
        if (lVar11 == 0) {
          return (ulong)puVar34;
        }
        ppuVar30 = (undefined **)(lVar12 + 0x20);
      }
      lVar12 = 0;
      do {
        puVar20 = ppuVar30[lVar12];
        pcVar29 = *(code **)(puVar20 + 0x10);
        plVar10 = *(long **)(puVar20 + 0x20);
        lVar31 = *(long *)(puVar20 + 0x28);
        if (*(short *)(lVar31 + 0x48) == -1) {
          func_0x00f78ad8(lVar31);
        }
        iVar6 = func_0x00f78a4c(lVar31);
        bVar4 = *(char *)(lVar31 + 0x4a) == '\x01';
        if (iVar6 == 0) {
          if (bVar4) {
            if (plVar10 == (long *)0x0) {
code_r0x01e480c8:
              uVar9 = (*pcVar29)(plVar17,lVar31);
            }
            else {
              if (((*(short *)(lVar31 + 0x48) == -1) || ((*(byte *)(*plVar10 + 0x115) & 1) != 0)) ||
                 (*(long *)(puVar34 + 0x18) == 0)) goto code_r0x01e47fc0;
              iVar6 = func_0x00f78a44(lVar31);
              iVar7 = func_0x00f78ec0(lVar31);
              if (iVar6 == 0) {
                uVar1 = *(ushort *)(lVar31 + 0x48);
                if (iVar7 == 0) {
                  lVar31 = *plVar10 + (ulong)uVar1 * 0x10;
                  uVar9 = (**(code **)(lVar31 + 0x138))
                                    (plVar10,plVar17,*(undefined8 *)(lVar31 + 0x140));
                  goto code_r0x01e480d4;
                }
                lVar31 = func_0x00f78a48(lVar31);
                lVar21 = *plVar10;
                uVar9 = (ulong)*(ushort *)(lVar21 + 0x12a);
                if (uVar9 != 0) {
                  piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == lVar31) {
                      puVar14 = (undefined8 *)
                                (lVar21 + (long)(int)(*piVar22 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01e48260;
                    }
                    piVar22 = piVar22 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                puVar14 = (undefined8 *)func_0x00fac1f0(plVar10,lVar31,(ulong)uVar1);
code_r0x01e48260:
                pcVar29 = (code *)*puVar14;
                puVar14 = (undefined8 *)puVar14[1];
              }
              else {
                if (iVar7 == 0) {
                  uVar18 = *(undefined8 *)
                            (*plVar10 + (ulong)*(ushort *)(lVar31 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar21 = *plVar10;
                  uVar9 = (ulong)*(ushort *)(lVar21 + 0x12a);
                  if (uVar9 != 0) {
                    piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == *(long *)(lVar31 + 0x18)) {
                        lVar21 = lVar21 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar31 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e48238;
                      }
                      piVar22 = piVar22 + 4;
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                  lVar21 = func_0x00fac1f0(plVar10);
code_r0x01e48238:
                  uVar18 = *(undefined8 *)(lVar21 + 8);
                }
                puVar14 = (undefined8 *)func_0x00f78acc(uVar18,lVar31);
                pcVar29 = (code *)*puVar14;
              }
              uVar9 = (*pcVar29)(plVar10,plVar17,puVar14);
            }
          }
          else {
            if ((*(short *)(lVar31 + 0x48) == -1) || (*(long *)(puVar34 + 0x18) == 0))
            goto code_r0x01e480c8;
            iVar6 = func_0x00f78a44(lVar31);
            iVar7 = func_0x00f78ec0(lVar31);
            if (iVar6 == 0) {
              uVar1 = *(ushort *)(lVar31 + 0x48);
              if (iVar7 == 0) {
                lVar31 = *plVar17 + (ulong)uVar1 * 0x10;
                uVar9 = (**(code **)(lVar31 + 0x138))(plVar17,*(undefined8 *)(lVar31 + 0x140));
                goto code_r0x01e480d4;
              }
              lVar31 = func_0x00f78a48(lVar31);
              lVar21 = *plVar17;
              uVar9 = (ulong)*(ushort *)(lVar21 + 0x12a);
              if (uVar9 != 0) {
                piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == lVar31) {
                    puVar14 = (undefined8 *)
                              (lVar21 + (long)(int)(*piVar22 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x01e481fc;
                  }
                  piVar22 = piVar22 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar14 = (undefined8 *)func_0x00fac1f0(plVar17,lVar31,(ulong)uVar1);
code_r0x01e481fc:
              pcVar29 = (code *)*puVar14;
              puVar14 = (undefined8 *)puVar14[1];
            }
            else {
              if (iVar7 == 0) {
                uVar18 = *(undefined8 *)
                          (*plVar17 + (ulong)*(ushort *)(lVar31 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar21 = *plVar17;
                uVar9 = (ulong)*(ushort *)(lVar21 + 0x12a);
                if (uVar9 != 0) {
                  piVar22 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)(lVar31 + 0x18)) {
                      lVar21 = lVar21 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar31 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01e481d4;
                    }
                    piVar22 = piVar22 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                lVar21 = func_0x00fac1f0(plVar17);
code_r0x01e481d4:
                uVar18 = *(undefined8 *)(lVar21 + 8);
              }
              puVar14 = (undefined8 *)func_0x00f78acc(uVar18,lVar31);
              pcVar29 = (code *)*puVar14;
            }
            uVar9 = (*pcVar29)(plVar17,puVar14);
          }
        }
        else {
          if (bVar4) goto code_r0x01e480c8;
code_r0x01e47fc0:
          uVar9 = (*pcVar29)(plVar10,plVar17,lVar31);
        }
code_r0x01e480d4:
        lVar12 = lVar12 + 1;
        if (lVar12 == lVar11) {
          return uVar9;
        }
      } while( true );
    }
  }
code_r0x016508d8:
  auVar35 = func_0x00f78af4();
  uVar15 = auVar35._0_8_;
  puStack_f8 = &Core_Localisation_LocalisationManager__SetFontAndMaterialAssetMappings;
  uVar9 = uVar15;
  if ((bRam0000000003eb57c6 & 1) == 0) {
    func_0x00f78a20(0x3d3c138);
    uVar9 = func_0x00f78a20(0x3d3c140);
    bRam0000000003eb57c6 = 1;
  }
  if ((*(long *)(uVar15 + 0x38) != 0) &&
     (lVar12 = *(long *)(*(long *)(uVar15 + 0x38) + 0x20), lVar12 != 0)) {
    uVar19 = *(uint *)(lVar12 + 0x18);
    if (0 < (int)uVar19) {
      uVar8 = 0;
      do {
        if (uVar19 <= uVar8) goto code_r0x01650b78;
        plVar17 = *(long **)(uVar15 + 0x40);
        if (plVar17 == (long *)0x0) goto code_r0x01650b74;
        lVar11 = lVar12 + (long)(int)uVar8 * 0x10;
        lVar31 = *(long *)(lVar11 + 0x20);
        lVar11 = *(long *)(lVar11 + 0x28);
        if ((lVar31 != 0) &&
           (uVar9 = func_0x00f78adc(lVar31,*(undefined8 *)(*plVar17 + 0x40)), uVar9 == 0))
        goto code_r0x01650b80;
        if (*(uint *)(plVar17 + 3) <= uVar8) goto code_r0x01650b78;
        plVar17[(long)(int)uVar8 + 4] = lVar31;
        if (lVar11 == 0) goto code_r0x01650b74;
        uVar19 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar19) {
          uVar28 = 0;
          do {
            if (uVar19 <= uVar28) goto code_r0x01650b78;
            lVar21 = lVar11 + (long)(int)uVar28 * 0x10;
            lVar13 = *(long *)(lVar21 + 0x20);
            if (lVar13 == 0) goto code_r0x01650b74;
            lVar21 = *(long *)(lVar21 + 0x28);
            uVar9 = /*System.String$$Equals*/ func_0x029caa48(lVar13,auVar35._8_8_,5,0);
            if ((int)uVar9 != 0) {
              if ((lVar21 == 0) || (*(long *)(lVar21 + 0x138) == 0)) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar21 + 0x138),uRam0000000003d3c140);
              if (*(long *)(lVar21 + 0x138) == 0) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar21 + 0x138),lVar31,uRam0000000003d3c138);
              plVar17 = *(long **)(uVar15 + 0x40);
              if (plVar17 == (long *)0x0) goto code_r0x01650b74;
              uVar9 = func_0x00f78adc(lVar21,*(undefined8 *)(*plVar17 + 0x40));
              if (uVar9 == 0) goto code_r0x01650b80;
              if (*(uint *)(plVar17 + 3) <= uVar8) goto code_r0x01650b78;
              plVar17[(long)(int)uVar8 + 4] = lVar21;
            }
            uVar28 = uVar28 + 1;
            uVar19 = *(uint *)(lVar11 + 0x18);
          } while ((int)uVar28 < (int)uVar19);
        }
        uVar8 = uVar8 + 1;
        uVar19 = *(uint *)(lVar12 + 0x18);
      } while ((int)uVar8 < (int)uVar19);
    }
    if ((*(long *)(uVar15 + 0x38) != 0) &&
       (lVar12 = *(long *)(*(long *)(uVar15 + 0x38) + 0x28), lVar12 != 0)) {
      uVar19 = *(uint *)(lVar12 + 0x18);
      if (0 < (int)uVar19) {
        uVar8 = 0;
        do {
          if (uVar19 <= uVar8) goto code_r0x01650b78;
          plVar17 = *(long **)(uVar15 + 0x48);
          if (plVar17 == (long *)0x0) goto code_r0x01650b74;
          lVar11 = lVar12 + (long)(int)uVar8 * 0x10;
          lVar31 = *(long *)(lVar11 + 0x20);
          lVar11 = *(long *)(lVar11 + 0x28);
          if ((lVar31 != 0) &&
             (uVar9 = func_0x00f78adc(lVar31,*(undefined8 *)(*plVar17 + 0x40)), uVar9 == 0))
          goto code_r0x01650b80;
          if (*(uint *)(plVar17 + 3) <= uVar8) goto code_r0x01650b78;
          plVar17[(long)(int)uVar8 + 4] = lVar31;
          if (lVar11 == 0) goto code_r0x01650b74;
          uVar19 = *(uint *)(lVar11 + 0x18);
          if (0 < (int)uVar19) {
            uVar28 = 0;
            do {
              if (uVar19 <= uVar28) goto code_r0x01650b78;
              lVar31 = lVar11 + (long)(int)uVar28 * 0x10;
              lVar21 = *(long *)(lVar31 + 0x20);
              if (lVar21 == 0) goto code_r0x01650b74;
              lVar31 = *(long *)(lVar31 + 0x28);
              uVar9 = /*System.String$$Equals*/ func_0x029caa48(lVar21,auVar35._8_8_,5,0);
              if ((int)uVar9 != 0) {
                plVar17 = *(long **)(uVar15 + 0x48);
                if (plVar17 == (long *)0x0) goto code_r0x01650b74;
                if ((lVar31 != 0) &&
                   (uVar9 = func_0x00f78adc(lVar31,*(undefined8 *)(*plVar17 + 0x40)), uVar9 == 0))
                goto code_r0x01650b80;
                if (*(uint *)(plVar17 + 3) <= uVar8) goto code_r0x01650b78;
                plVar17[(long)(int)uVar8 + 4] = lVar31;
              }
              uVar28 = uVar28 + 1;
              uVar19 = *(uint *)(lVar11 + 0x18);
            } while ((int)uVar28 < (int)uVar19);
          }
          uVar8 = uVar8 + 1;
          uVar19 = *(uint *)(lVar12 + 0x18);
        } while ((int)uVar8 < (int)uVar19);
      }
      return uVar9;
    }
  }
code_r0x01650b74:
  func_0x00f78af4();
code_r0x01650b78:
  uVar18 = func_0x00f78b24();
code_r0x01650b84:
  uVar9 = func_0x00f78ac0(uVar18,0);
  return uVar9;
code_r0x029cc070:
  uVar16 = func_0x00f78b24();
  func_0x00f78ac0(uVar16,0);
  unaff_x23 = uVar18;
code_r0x029cc07c:
  puVar34 = &System_String__TrimStart;
  auVar36 = func_0x00f78af4();
  uVar15 = auVar36._0_8_;
  if ((auVar36._8_8_ == 0) || (*(long *)(auVar36._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  uVar18 = 0;
  puVar3 = puVar3 + -0x40;
  auVar2 = auVar35;
  goto System_String__TrimHelper;
code_r0x01650b80:
  uVar18 = func_0x00f78b14();
  goto code_r0x01650b84;
code_r0x029cbc4c:
  if (iVar24 == 0) {
    param_1 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar6 != 0) || (iVar7 != iVar24)) {
    uVar18 = *(undefined8 *)(puVar3 + -0x10);
    uVar33 = *(undefined8 *)(puVar3 + -8);
    uVar16 = *(undefined8 *)(puVar3 + -0x20);
    uVar23 = *(undefined8 *)(puVar3 + -0x18);
    uVar26 = *(undefined8 *)(puVar3 + -0x30);
    uVar25 = *(undefined8 *)(puVar3 + -0x28);
System_String__InternalSubString:
    auVar35._8_8_ = uVar27;
    auVar35._0_8_ = uVar23;
    *(undefined8 *)(puVar3 + -0x30) = uVar26;
    *(undefined8 *)(puVar3 + -0x28) = uVar25;
    *(undefined8 *)(puVar3 + -0x20) = uVar16;
    *(undefined8 *)(puVar3 + -0x18) = uVar23;
    *(undefined8 *)(puVar3 + -0x10) = uVar18;
    *(undefined8 *)(puVar3 + -8) = uVar33;
    puVar32 = puVar3 + -0x10;
    uVar15 = func_0x00f834ac(uVar9);
    if (uVar15 != 0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar15 + 0x14,param_1 + (long)(int)uVar27 * 2 + 0x14,(int)uVar9 << 1,0);
      return uVar15;
    }
    puVar34 = &System_String__Trim;
    auVar36 = func_0x00f78af4();
    uVar15 = auVar36._0_8_;
    if ((auVar36._8_8_ != 0) && (*(long *)(auVar36._8_8_ + 0x18) != 0)) {
      uVar18 = 2;
      puVar3 = puVar3 + -0x30;
      uVar27 = param_1;
      auVar2 = auVar35;
System_String__TrimHelper:
      auVar35 = auVar36;
      lVar12 = auVar35._8_8_;
      param_1 = auVar35._0_8_;
      *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
      *(ulong *)(puVar3 + -0x30) = uVar27;
      *(long *)(puVar3 + -0x28) = auVar2._8_8_;
      *(ulong *)(puVar3 + -0x20) = uVar9;
      *(long *)(puVar3 + -0x18) = auVar2._0_8_;
      *(undefined1 **)(puVar3 + -0x10) = puVar32;
      *(undefined **)(puVar3 + -8) = puVar34;
      puVar32 = puVar3 + -0x10;
      uVar19 = *(uint *)(param_1 + 0x10);
      uVar9 = (ulong)uVar19;
      if ((int)uVar18 == 1) {
        uVar27 = 0;
        uVar18 = unaff_x23;
code_r0x029cbfd8:
        do {
          uVar19 = (int)uVar9 - 1;
          uVar9 = (ulong)uVar19;
          if ((int)uVar19 < (int)uVar27) break;
          uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(param_1,uVar9);
          unaff_x23 = uVar18;
          if (lVar12 == 0) goto code_r0x029cc07c;
          iVar6 = *(int *)(lVar12 + 0x18);
          if (iVar6 < 1) {
            iVar7 = 0;
          }
          else {
            iVar24 = 0;
            do {
              if (iVar6 == iVar24) goto code_r0x029cc070;
              iVar7 = iVar24;
            } while ((*(ushort *)(lVar12 + (long)iVar24 * 2 + 0x20) != uVar8) &&
                    (iVar24 = iVar24 + 1, iVar7 = iVar6, iVar6 != iVar24));
          }
        } while (iVar7 != iVar6);
      }
      else {
        if ((int)uVar19 < 1) {
          uVar27 = 0;
        }
        else {
          uVar27 = 0;
          do {
            uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(param_1,uVar27);
            unaff_x23 = uVar18;
            if (lVar12 == 0) goto code_r0x029cc07c;
            iVar6 = *(int *)(lVar12 + 0x18);
            if (iVar6 < 1) {
              iVar7 = 0;
            }
            else {
              iVar24 = 0;
              do {
                if (iVar6 == iVar24) goto code_r0x029cc070;
                iVar7 = iVar24;
              } while ((*(ushort *)(lVar12 + (long)iVar24 * 2 + 0x20) != uVar8) &&
                      (iVar24 = iVar24 + 1, iVar7 = iVar6, iVar6 != iVar24));
            }
          } while ((iVar7 != iVar6) &&
                  (uVar8 = (int)uVar27 + 1, uVar27 = (ulong)uVar8,
                  (int)uVar8 < *(int *)(param_1 + 0x10)));
        }
        if ((int)uVar18 != 0) {
          uVar9 = (ulong)*(uint *)(param_1 + 0x10);
          goto code_r0x029cbfd8;
        }
        uVar19 = uVar19 - 1;
      }
      uVar18 = *(undefined8 *)(puVar3 + -0x10);
      uVar33 = *(undefined8 *)(puVar3 + -8);
      uVar16 = *(undefined8 *)(puVar3 + -0x20);
      uVar23 = *(undefined8 *)(puVar3 + -0x18);
      uVar26 = *(undefined8 *)(puVar3 + -0x30);
      uVar25 = *(undefined8 *)(puVar3 + -0x28);
      unaff_x24 = *(undefined8 *)(puVar3 + -0x40);
      unaff_x23 = *(undefined8 *)(puVar3 + -0x38);
      goto System_String__CreateTrimmedString;
    }
    iVar6 = 2;
    puVar3 = puVar3 + -0x30;
    goto System_String__TrimHelper;
  }
  return param_1;
code_r0x029cc094:
  iVar6 = 0;
  puVar3 = puVar3 + -0x40;
  param_1 = uVar27;
System_String__TrimHelper:
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(ulong *)(puVar3 + -0x30) = param_1;
  *(long *)(puVar3 + -0x28) = auVar35._8_8_;
  *(ulong *)(puVar3 + -0x20) = uVar9;
  *(long *)(puVar3 + -0x18) = auVar35._0_8_;
  *(undefined1 **)(puVar3 + -0x10) = puVar32;
  *(undefined **)(puVar3 + -8) = puVar34;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar19 = *(uint *)(uVar15 + 0x10);
  if (iVar6 == 1) {
    uVar27 = 0;
  }
  else {
    if ((int)uVar19 < 1) {
      uVar27 = 0;
    }
    else {
      uVar27 = 0;
      do {
        uVar18 = /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar27);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar18,0);
        if ((uVar9 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar27);
          break;
        }
        uVar8 = (int)uVar27 + 1;
        uVar27 = (ulong)uVar8;
      } while ((int)uVar8 < *(int *)(uVar15 + 0x10));
    }
    if (iVar6 == 0) {
      uVar19 = uVar19 - 1;
      goto code_r0x029cbf04;
    }
    uVar19 = *(uint *)(uVar15 + 0x10);
  }
  do {
    uVar19 = uVar19 - 1;
    if ((int)uVar19 < (int)uVar27) goto code_r0x029cbf04;
    uVar18 = /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar19);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar18,0);
  } while ((uVar9 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar27);
code_r0x029cbf04:
  uVar18 = *(undefined8 *)(puVar3 + -0x10);
  uVar33 = *(undefined8 *)(puVar3 + -8);
  uVar16 = *(undefined8 *)(puVar3 + -0x20);
  uVar23 = *(undefined8 *)(puVar3 + -0x18);
  uVar26 = *(undefined8 *)(puVar3 + -0x30);
  uVar25 = *(undefined8 *)(puVar3 + -0x28);
  unaff_x24 = *(undefined8 *)(puVar3 + -0x40);
  unaff_x23 = *(undefined8 *)(puVar3 + -0x38);
  param_1 = uVar15;
System_String__CreateTrimmedString:
  *(undefined8 *)(puVar3 + -0x30) = uVar26;
  *(undefined8 *)(puVar3 + -0x28) = uVar25;
  *(undefined8 *)(puVar3 + -0x20) = uVar16;
  *(undefined8 *)(puVar3 + -0x18) = uVar23;
  *(undefined8 *)(puVar3 + -0x10) = uVar18;
  *(undefined8 *)(puVar3 + -8) = uVar33;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar19 = (uVar19 - (int)uVar27) + 1;
  uVar9 = (ulong)uVar19;
  if (uVar19 != *(uint *)(param_1 + 0x10)) {
    if (uVar19 != 0) {
      uVar18 = *(undefined8 *)(puVar3 + -0x10);
      uVar33 = *(undefined8 *)(puVar3 + -8);
      uVar16 = *(undefined8 *)(puVar3 + -0x20);
      uVar23 = *(undefined8 *)(puVar3 + -0x18);
      uVar26 = *(undefined8 *)(puVar3 + -0x30);
      uVar25 = *(undefined8 *)(puVar3 + -0x28);
      goto System_String__InternalSubString;
    }
    param_1 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return param_1;
}



// ============================================================
// RVA: 0x16504e8 | Core.Localisation.LocalisationManager.TryGetTimeFormatOverrideString
// ============================================================

long Core_Localisation_LocalisationManager__TryGetTimeFormatOverrideString
               (long param_1,undefined8 *param_2,long *param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  int *piVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  uint uVar23;
  code *pcVar24;
  uint uVar25;
  ulong uVar26;
  undefined **ppuVar27;
  long lVar28;
  undefined1 auVar29 [16];
  undefined *puStack_d8;
  
  plVar14 = param_3;
  if ((bRam0000000003eb57c2 & 1) == 0) {
    func_0x00f78a20(0x3d6d5c0);
    func_0x00f78a20(0x3d7a030);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c2 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x68);
  if ((plVar6 != (long *)0x0) &&
     (lVar7 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240)), lVar7 != 0))
  {
    uVar8 = /*System.Globalization.DateTimeFormatInfo$$get_ShortTimePattern*/ func_0x02a93380(lVar7,0);
    plVar6 = *(long **)(param_1 + 0x68);
    if ((plVar6 != (long *)0x0) &&
       (lVar7 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240)), lVar7 != 0)
       ) {
      lVar7 = /*System.Globalization.DateTimeFormatInfo$$get_ShortDatePattern*/ func_0x02a932e0(lVar7,0);
      if (*(long *)(param_1 + 0x58) != 0) {
        plVar14 = (long *)((long)&MACH_HEADER.cputype + 1);
        lVar9 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(param_1 + 0x58),/*STR('ar')*/ uRam0000000003d77c80,5,0);
        uVar21 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
        if ((int)lVar9 != 0) {
LAB_016505f8:
          *param_2 = uVar21;
          *param_3 = lVar7;
          return lVar9;
        }
        if (*(long *)(param_1 + 0x58) != 0) {
          lVar9 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(param_1 + 0x58),/*STR('ko')*/ uRam0000000003d7a030,5,0);
          uVar21 = /*STR('HH:mm')*/ uRam0000000003d6d5c0;
          if ((int)lVar9 == 0) {
            uVar21 = uVar8;
          }
          goto LAB_016505f8;
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb57c3 & 1) == 0) {
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    bRam0000000003eb57c3 = 1;
  }
  lVar9 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar9,uRam0000000003d3bf88);
  lVar7 = *(long *)(lVar7 + 0x20);
  if (lVar7 != 0) {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar20 = 0;
      uVar16 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      puVar13 = (undefined8 *)(lVar7 + 0x20);
      do {
        if (uVar16 <= uVar20) {
          uVar8 = func_0x00f78b24();
          func_0x00f78ac0(uVar8,0);
          goto code_r0x01650704;
        }
        if (lVar9 == 0) goto code_r0x01650704;
        plVar14 = plRam0000000003d3bfa0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar9,*puVar13);
        uVar20 = uVar20 + 1;
        uVar16 = (ulong)*(uint *)(lVar7 + 0x18);
        puVar13 = puVar13 + 3;
      } while ((long)uVar20 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    return lVar9;
  }
code_r0x01650704:
  auVar29 = func_0x00f78af4();
  lVar9 = auVar29._8_8_;
  lVar7 = auVar29._0_8_;
  if ((bRam0000000003eb57c4 & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d20b50);
    func_0x00f78a20(0x3d2fe40);
    func_0x00f78a20(0x3d2fe80);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c4 = 1;
  }
  if ((*(long *)(lVar7 + 0x70) != 0) &&
     (/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$Clear*/ func_0x01ed79a4(*(long *)(lVar7 + 0x70),uRam0000000003d2fe40), lVar9 != 0)) {
    uVar20 = (ulong)*(uint *)(lVar9 + 0x18);
    if (0 < (int)*(uint *)(lVar9 + 0x18)) {
      uVar16 = 0;
      uVar26 = uVar20 - 1;
      while( true ) {
        if (uVar20 <= uVar16) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar28 = plVar14[1];
        if (lVar28 == 0) goto code_r0x016508d8;
        uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + uVar16 * 8 + 0x20);
        if (*(uint *)(lVar28 + 0x18) <= uVar16) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(lVar7 + 0x70) == 0) goto code_r0x016508d8;
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(*(long *)(lVar7 + 0x70),uVar8,
                        *(undefined8 *)(*(long *)(lVar28 + 0x10) + uVar16 * 8 + 0x20),
                        uRam0000000003d2fe80);
        if (uVar26 == uVar16) break;
        uVar20 = (ulong)*(uint *)(lVar9 + 0x18);
        uVar16 = uVar16 + 1;
      }
    }
    *(long *)(lVar7 + 0x58) = *plVar14;
    if (*plVar14 != 0) {
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(*plVar14,/*STR('ar')*/ uRam0000000003d77c80,5,0);
      *(undefined1 *)(lVar7 + 0x61) = uVar3;
      *(undefined1 *)(lVar7 + 0x60) = uVar3;
      uVar21 = *(undefined8 *)(lVar7 + 0x58);
      uVar8 = func_0x00f78aec(/*System.Globalization.CultureInfo_TypeInfo*/ uRam0000000003d20b50);
      /*System.Globalization.CultureInfo$$.ctor*/ func_0x02a811d4(uVar8,uVar21,0);
      *(undefined8 *)(lVar7 + 0x68) = uVar8;
      puVar10 = *(undefined **)(lVar7 + 0x10);
      if (puVar10 == (undefined *)0x0) {
        return 0;
      }
      plVar14 = (long *)*plVar14;
      puStack_d8 = puVar10;
      lVar7 = *(long *)(puVar10 + 0x68);
      if (lVar7 == 0) {
        ppuVar27 = &puStack_d8;
        lVar9 = 1;
      }
      else {
        lVar9 = *(long *)(lVar7 + 0x18);
        if (lVar9 == 0) {
          return (long)puVar10;
        }
        ppuVar27 = (undefined **)(lVar7 + 0x20);
      }
      lVar7 = 0;
      do {
        puVar17 = ppuVar27[lVar7];
        pcVar24 = *(code **)(puVar17 + 0x10);
        plVar6 = *(long **)(puVar17 + 0x20);
        lVar28 = *(long *)(puVar17 + 0x28);
        if (*(short *)(lVar28 + 0x48) == -1) {
          func_0x00f78ad8(lVar28);
        }
        iVar4 = func_0x00f78a4c(lVar28);
        bVar2 = *(char *)(lVar28 + 0x4a) == '\x01';
        if (iVar4 == 0) {
          if (bVar2) {
            if (plVar6 == (long *)0x0) {
code_r0x01e480c8:
              lVar28 = (*pcVar24)(plVar14,lVar28);
            }
            else {
              if (((*(short *)(lVar28 + 0x48) == -1) || ((*(byte *)(*plVar6 + 0x115) & 1) != 0)) ||
                 (*(long *)(puVar10 + 0x18) == 0)) goto code_r0x01e47fc0;
              iVar4 = func_0x00f78a44(lVar28);
              iVar5 = func_0x00f78ec0(lVar28);
              if (iVar4 == 0) {
                uVar1 = *(ushort *)(lVar28 + 0x48);
                if (iVar5 == 0) {
                  lVar28 = *plVar6 + (ulong)uVar1 * 0x10;
                  lVar28 = (**(code **)(lVar28 + 0x138))
                                     (plVar6,plVar14,*(undefined8 *)(lVar28 + 0x140));
                  goto code_r0x01e480d4;
                }
                lVar28 = func_0x00f78a48(lVar28);
                lVar18 = *plVar6;
                uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar20 != 0) {
                  piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == lVar28) {
                      puVar13 = (undefined8 *)
                                (lVar18 + (long)(int)(*piVar19 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01e48260;
                    }
                    piVar19 = piVar19 + 4;
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
                puVar13 = (undefined8 *)func_0x00fac1f0(plVar6,lVar28,(ulong)uVar1);
code_r0x01e48260:
                pcVar24 = (code *)*puVar13;
                puVar13 = (undefined8 *)puVar13[1];
              }
              else {
                if (iVar5 == 0) {
                  uVar8 = *(undefined8 *)
                           (*plVar6 + (ulong)*(ushort *)(lVar28 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar18 = *plVar6;
                  uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
                  if (uVar20 != 0) {
                    piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == *(long *)(lVar28 + 0x18)) {
                        lVar18 = lVar18 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar28 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e48238;
                      }
                      piVar19 = piVar19 + 4;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                  lVar18 = func_0x00fac1f0(plVar6);
code_r0x01e48238:
                  uVar8 = *(undefined8 *)(lVar18 + 8);
                }
                puVar13 = (undefined8 *)func_0x00f78acc(uVar8,lVar28);
                pcVar24 = (code *)*puVar13;
              }
              lVar28 = (*pcVar24)(plVar6,plVar14,puVar13);
            }
          }
          else {
            if ((*(short *)(lVar28 + 0x48) == -1) || (*(long *)(puVar10 + 0x18) == 0))
            goto code_r0x01e480c8;
            iVar4 = func_0x00f78a44(lVar28);
            iVar5 = func_0x00f78ec0(lVar28);
            if (iVar4 == 0) {
              uVar1 = *(ushort *)(lVar28 + 0x48);
              if (iVar5 == 0) {
                lVar28 = *plVar14 + (ulong)uVar1 * 0x10;
                lVar28 = (**(code **)(lVar28 + 0x138))(plVar14,*(undefined8 *)(lVar28 + 0x140));
                goto code_r0x01e480d4;
              }
              lVar28 = func_0x00f78a48(lVar28);
              lVar18 = *plVar14;
              uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
              if (uVar20 != 0) {
                piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == lVar28) {
                    puVar13 = (undefined8 *)
                              (lVar18 + (long)(int)(*piVar19 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x01e481fc;
                  }
                  piVar19 = piVar19 + 4;
                  uVar20 = uVar20 - 1;
                } while (uVar20 != 0);
              }
              puVar13 = (undefined8 *)func_0x00fac1f0(plVar14,lVar28,(ulong)uVar1);
code_r0x01e481fc:
              pcVar24 = (code *)*puVar13;
              puVar13 = (undefined8 *)puVar13[1];
            }
            else {
              if (iVar5 == 0) {
                uVar8 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar28 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar18 = *plVar14;
                uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar20 != 0) {
                  piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == *(long *)(lVar28 + 0x18)) {
                      lVar18 = lVar18 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar28 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01e481d4;
                    }
                    piVar19 = piVar19 + 4;
                    uVar20 = uVar20 - 1;
                  } while (uVar20 != 0);
                }
                lVar18 = func_0x00fac1f0(plVar14);
code_r0x01e481d4:
                uVar8 = *(undefined8 *)(lVar18 + 8);
              }
              puVar13 = (undefined8 *)func_0x00f78acc(uVar8,lVar28);
              pcVar24 = (code *)*puVar13;
            }
            lVar28 = (*pcVar24)(plVar14,puVar13);
          }
        }
        else {
          if (bVar2) goto code_r0x01e480c8;
code_r0x01e47fc0:
          lVar28 = (*pcVar24)(plVar6,plVar14,lVar28);
        }
code_r0x01e480d4:
        lVar7 = lVar7 + 1;
        if (lVar7 == lVar9) {
          return lVar28;
        }
      } while( true );
    }
  }
code_r0x016508d8:
  auVar29 = func_0x00f78af4();
  lVar9 = auVar29._0_8_;
  puStack_d8 = &Core_Localisation_LocalisationManager__SetFontAndMaterialAssetMappings;
  lVar7 = lVar9;
  if ((bRam0000000003eb57c6 & 1) == 0) {
    func_0x00f78a20(0x3d3c138);
    lVar7 = func_0x00f78a20(0x3d3c140);
    bRam0000000003eb57c6 = 1;
  }
  if ((*(long *)(lVar9 + 0x38) != 0) &&
     (lVar28 = *(long *)(*(long *)(lVar9 + 0x38) + 0x20), lVar28 != 0)) {
    uVar15 = *(uint *)(lVar28 + 0x18);
    if (0 < (int)uVar15) {
      uVar25 = 0;
      do {
        if (uVar15 <= uVar25) goto code_r0x01650b78;
        plVar14 = *(long **)(lVar9 + 0x40);
        if (plVar14 == (long *)0x0) goto code_r0x01650b74;
        lVar18 = lVar28 + (long)(int)uVar25 * 0x10;
        lVar12 = *(long *)(lVar18 + 0x20);
        lVar18 = *(long *)(lVar18 + 0x28);
        if ((lVar12 != 0) &&
           (lVar7 = func_0x00f78adc(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0))
        goto code_r0x01650b80;
        if (*(uint *)(plVar14 + 3) <= uVar25) goto code_r0x01650b78;
        plVar14[(long)(int)uVar25 + 4] = lVar12;
        if (lVar18 == 0) goto code_r0x01650b74;
        uVar15 = *(uint *)(lVar18 + 0x18);
        if (0 < (int)uVar15) {
          uVar23 = 0;
          do {
            if (uVar15 <= uVar23) goto code_r0x01650b78;
            lVar7 = lVar18 + (long)(int)uVar23 * 0x10;
            lVar11 = *(long *)(lVar7 + 0x20);
            if (lVar11 == 0) goto code_r0x01650b74;
            lVar22 = *(long *)(lVar7 + 0x28);
            lVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar11,auVar29._8_8_,5,0);
            if ((int)lVar7 != 0) {
              if ((lVar22 == 0) || (*(long *)(lVar22 + 0x138) == 0)) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar22 + 0x138),uRam0000000003d3c140);
              if (*(long *)(lVar22 + 0x138) == 0) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar22 + 0x138),lVar12,uRam0000000003d3c138);
              plVar14 = *(long **)(lVar9 + 0x40);
              if (plVar14 == (long *)0x0) goto code_r0x01650b74;
              lVar7 = func_0x00f78adc(lVar22,*(undefined8 *)(*plVar14 + 0x40));
              if (lVar7 == 0) goto code_r0x01650b80;
              if (*(uint *)(plVar14 + 3) <= uVar25) goto code_r0x01650b78;
              plVar14[(long)(int)uVar25 + 4] = lVar22;
            }
            uVar23 = uVar23 + 1;
            uVar15 = *(uint *)(lVar18 + 0x18);
          } while ((int)uVar23 < (int)uVar15);
        }
        uVar25 = uVar25 + 1;
        uVar15 = *(uint *)(lVar28 + 0x18);
      } while ((int)uVar25 < (int)uVar15);
    }
    if ((*(long *)(lVar9 + 0x38) != 0) &&
       (lVar28 = *(long *)(*(long *)(lVar9 + 0x38) + 0x28), lVar28 != 0)) {
      uVar15 = *(uint *)(lVar28 + 0x18);
      if (0 < (int)uVar15) {
        uVar25 = 0;
        do {
          if (uVar15 <= uVar25) goto code_r0x01650b78;
          plVar14 = *(long **)(lVar9 + 0x48);
          if (plVar14 == (long *)0x0) goto code_r0x01650b74;
          lVar18 = lVar28 + (long)(int)uVar25 * 0x10;
          lVar12 = *(long *)(lVar18 + 0x20);
          lVar18 = *(long *)(lVar18 + 0x28);
          if ((lVar12 != 0) &&
             (lVar7 = func_0x00f78adc(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0))
          goto code_r0x01650b80;
          if (*(uint *)(plVar14 + 3) <= uVar25) goto code_r0x01650b78;
          plVar14[(long)(int)uVar25 + 4] = lVar12;
          if (lVar18 == 0) goto code_r0x01650b74;
          uVar15 = *(uint *)(lVar18 + 0x18);
          if (0 < (int)uVar15) {
            uVar23 = 0;
            do {
              if (uVar15 <= uVar23) goto code_r0x01650b78;
              lVar7 = lVar18 + (long)(int)uVar23 * 0x10;
              lVar12 = *(long *)(lVar7 + 0x20);
              if (lVar12 == 0) goto code_r0x01650b74;
              lVar11 = *(long *)(lVar7 + 0x28);
              lVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar12,auVar29._8_8_,5,0);
              if ((int)lVar7 != 0) {
                plVar14 = *(long **)(lVar9 + 0x48);
                if (plVar14 == (long *)0x0) goto code_r0x01650b74;
                if ((lVar11 != 0) &&
                   (lVar7 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0))
                goto code_r0x01650b80;
                if (*(uint *)(plVar14 + 3) <= uVar25) goto code_r0x01650b78;
                plVar14[(long)(int)uVar25 + 4] = lVar11;
              }
              uVar23 = uVar23 + 1;
              uVar15 = *(uint *)(lVar18 + 0x18);
            } while ((int)uVar23 < (int)uVar15);
          }
          uVar25 = uVar25 + 1;
          uVar15 = *(uint *)(lVar28 + 0x18);
        } while ((int)uVar25 < (int)uVar15);
      }
      return lVar7;
    }
  }
code_r0x01650b74:
  func_0x00f78af4();
code_r0x01650b78:
  uVar8 = func_0x00f78b24();
code_r0x01650b84:
  lVar7 = func_0x00f78ac0(uVar8,0);
  return lVar7;
code_r0x01650b80:
  uVar8 = func_0x00f78b14();
  goto code_r0x01650b84;
}



// ============================================================
// RVA: 0x1650618 | Core.Localisation.LocalisationManager.GenerateSupportedLanguageList
// ============================================================

long Core_Localisation_LocalisationManager__GenerateSupportedLanguageList
               (long param_1,undefined8 param_2,long *param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  uint uVar22;
  code *pcVar23;
  uint uVar24;
  ulong uVar25;
  undefined **ppuVar26;
  long lVar27;
  undefined1 auVar28 [16];
  undefined *puStack_98;
  
  if ((bRam0000000003eb57c3 & 1) == 0) {
    func_0x00f78a20(0x3d3bfa0);
    func_0x00f78a20(0x3d3bf88);
    func_0x00f78a20(0x3d1de30);
    bRam0000000003eb57c3 = 1;
  }
  lVar6 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar6,uRam0000000003d3bf88);
  lVar16 = *(long *)(param_1 + 0x20);
  if (lVar16 != 0) {
    if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
      uVar17 = 0;
      uVar12 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
      puVar10 = (undefined8 *)(lVar16 + 0x20);
      do {
        if (uVar12 <= uVar17) {
          uVar19 = func_0x00f78b24();
          func_0x00f78ac0(uVar19,0);
          goto LAB_01650704;
        }
        if (lVar6 == 0) goto LAB_01650704;
        param_3 = plRam0000000003d3bfa0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar6,*puVar10);
        uVar17 = uVar17 + 1;
        uVar12 = (ulong)*(uint *)(lVar16 + 0x18);
        puVar10 = puVar10 + 3;
      } while ((long)uVar17 < (long)(int)*(uint *)(lVar16 + 0x18));
    }
    return lVar6;
  }
LAB_01650704:
  auVar28 = func_0x00f78af4();
  lVar16 = auVar28._8_8_;
  lVar6 = auVar28._0_8_;
  if ((bRam0000000003eb57c4 & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d20b50);
    func_0x00f78a20(0x3d2fe40);
    func_0x00f78a20(0x3d2fe80);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c4 = 1;
  }
  if ((*(long *)(lVar6 + 0x70) != 0) &&
     (/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$Clear*/ func_0x01ed79a4(*(long *)(lVar6 + 0x70),uRam0000000003d2fe40), lVar16 != 0)) {
    uVar17 = (ulong)*(uint *)(lVar16 + 0x18);
    if (0 < (int)*(uint *)(lVar16 + 0x18)) {
      uVar12 = 0;
      uVar25 = uVar17 - 1;
      while( true ) {
        if (uVar17 <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar27 = param_3[1];
        if (lVar27 == 0) goto code_r0x016508d8;
        uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0x10) + uVar12 * 8 + 0x20);
        if (*(uint *)(lVar27 + 0x18) <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(lVar6 + 0x70) == 0) goto code_r0x016508d8;
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(*(long *)(lVar6 + 0x70),uVar19,
                        *(undefined8 *)(*(long *)(lVar27 + 0x10) + uVar12 * 8 + 0x20),
                        uRam0000000003d2fe80);
        if (uVar25 == uVar12) break;
        uVar17 = (ulong)*(uint *)(lVar16 + 0x18);
        uVar12 = uVar12 + 1;
      }
    }
    *(long *)(lVar6 + 0x58) = *param_3;
    if (*param_3 != 0) {
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(*param_3,/*STR('ar')*/ uRam0000000003d77c80,5,0);
      *(undefined1 *)(lVar6 + 0x61) = uVar3;
      *(undefined1 *)(lVar6 + 0x60) = uVar3;
      uVar18 = *(undefined8 *)(lVar6 + 0x58);
      uVar19 = func_0x00f78aec(/*System.Globalization.CultureInfo_TypeInfo*/ uRam0000000003d20b50);
      /*System.Globalization.CultureInfo$$.ctor*/ func_0x02a811d4(uVar19,uVar18,0);
      *(undefined8 *)(lVar6 + 0x68) = uVar19;
      puVar7 = *(undefined **)(lVar6 + 0x10);
      if (puVar7 == (undefined *)0x0) {
        return 0;
      }
      param_3 = (long *)*param_3;
      puStack_98 = puVar7;
      lVar6 = *(long *)(puVar7 + 0x68);
      if (lVar6 == 0) {
        ppuVar26 = &puStack_98;
        lVar16 = 1;
      }
      else {
        lVar16 = *(long *)(lVar6 + 0x18);
        if (lVar16 == 0) {
          return (long)puVar7;
        }
        ppuVar26 = (undefined **)(lVar6 + 0x20);
      }
      lVar6 = 0;
      do {
        puVar13 = ppuVar26[lVar6];
        pcVar23 = *(code **)(puVar13 + 0x10);
        plVar20 = *(long **)(puVar13 + 0x20);
        lVar27 = *(long *)(puVar13 + 0x28);
        if (*(short *)(lVar27 + 0x48) == -1) {
          func_0x00f78ad8(lVar27);
        }
        iVar4 = func_0x00f78a4c(lVar27);
        bVar2 = *(char *)(lVar27 + 0x4a) == '\x01';
        if (iVar4 == 0) {
          if (bVar2) {
            if (plVar20 == (long *)0x0) {
code_r0x01e480c8:
              lVar27 = (*pcVar23)(param_3,lVar27);
            }
            else {
              if (((*(short *)(lVar27 + 0x48) == -1) || ((*(byte *)(*plVar20 + 0x115) & 1) != 0)) ||
                 (*(long *)(puVar7 + 0x18) == 0)) goto code_r0x01e47fc0;
              iVar4 = func_0x00f78a44(lVar27);
              iVar5 = func_0x00f78ec0(lVar27);
              if (iVar4 == 0) {
                uVar1 = *(ushort *)(lVar27 + 0x48);
                if (iVar5 == 0) {
                  lVar27 = *plVar20 + (ulong)uVar1 * 0x10;
                  lVar27 = (**(code **)(lVar27 + 0x138))
                                     (plVar20,param_3,*(undefined8 *)(lVar27 + 0x140));
                  goto code_r0x01e480d4;
                }
                lVar27 = func_0x00f78a48(lVar27);
                lVar14 = *plVar20;
                uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar17 != 0) {
                  piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar27) {
                      puVar10 = (undefined8 *)
                                (lVar14 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01e48260;
                    }
                    piVar15 = piVar15 + 4;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
                puVar10 = (undefined8 *)func_0x00fac1f0(plVar20,lVar27,(ulong)uVar1);
code_r0x01e48260:
                pcVar23 = (code *)*puVar10;
                puVar10 = (undefined8 *)puVar10[1];
              }
              else {
                if (iVar5 == 0) {
                  uVar19 = *(undefined8 *)
                            (*plVar20 + (ulong)*(ushort *)(lVar27 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar14 = *plVar20;
                  uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
                  if (uVar17 != 0) {
                    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)(lVar27 + 0x18)) {
                        lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar27 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e48238;
                      }
                      piVar15 = piVar15 + 4;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  lVar14 = func_0x00fac1f0(plVar20);
code_r0x01e48238:
                  uVar19 = *(undefined8 *)(lVar14 + 8);
                }
                puVar10 = (undefined8 *)func_0x00f78acc(uVar19,lVar27);
                pcVar23 = (code *)*puVar10;
              }
              lVar27 = (*pcVar23)(plVar20,param_3,puVar10);
            }
          }
          else {
            if ((*(short *)(lVar27 + 0x48) == -1) || (*(long *)(puVar7 + 0x18) == 0))
            goto code_r0x01e480c8;
            iVar4 = func_0x00f78a44(lVar27);
            iVar5 = func_0x00f78ec0(lVar27);
            if (iVar4 == 0) {
              uVar1 = *(ushort *)(lVar27 + 0x48);
              if (iVar5 == 0) {
                lVar27 = *param_3 + (ulong)uVar1 * 0x10;
                lVar27 = (**(code **)(lVar27 + 0x138))(param_3,*(undefined8 *)(lVar27 + 0x140));
                goto code_r0x01e480d4;
              }
              lVar27 = func_0x00f78a48(lVar27);
              lVar14 = *param_3;
              uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar17 != 0) {
                piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar27) {
                    puVar10 = (undefined8 *)
                              (lVar14 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x01e481fc;
                  }
                  piVar15 = piVar15 + 4;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              puVar10 = (undefined8 *)func_0x00fac1f0(param_3,lVar27,(ulong)uVar1);
code_r0x01e481fc:
              pcVar23 = (code *)*puVar10;
              puVar10 = (undefined8 *)puVar10[1];
            }
            else {
              if (iVar5 == 0) {
                uVar19 = *(undefined8 *)
                          (*param_3 + (ulong)*(ushort *)(lVar27 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar14 = *param_3;
                uVar17 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar17 != 0) {
                  piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)(lVar27 + 0x18)) {
                      lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar27 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01e481d4;
                    }
                    piVar15 = piVar15 + 4;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
                lVar14 = func_0x00fac1f0(param_3);
code_r0x01e481d4:
                uVar19 = *(undefined8 *)(lVar14 + 8);
              }
              puVar10 = (undefined8 *)func_0x00f78acc(uVar19,lVar27);
              pcVar23 = (code *)*puVar10;
            }
            lVar27 = (*pcVar23)(param_3,puVar10);
          }
        }
        else {
          if (bVar2) goto code_r0x01e480c8;
code_r0x01e47fc0:
          lVar27 = (*pcVar23)(plVar20,param_3,lVar27);
        }
code_r0x01e480d4:
        lVar6 = lVar6 + 1;
        if (lVar6 == lVar16) {
          return lVar27;
        }
      } while( true );
    }
  }
code_r0x016508d8:
  auVar28 = func_0x00f78af4();
  lVar16 = auVar28._0_8_;
  puStack_98 = &Core_Localisation_LocalisationManager__SetFontAndMaterialAssetMappings;
  lVar6 = lVar16;
  if ((bRam0000000003eb57c6 & 1) == 0) {
    func_0x00f78a20(0x3d3c138);
    lVar6 = func_0x00f78a20(0x3d3c140);
    bRam0000000003eb57c6 = 1;
  }
  if ((*(long *)(lVar16 + 0x38) != 0) &&
     (lVar27 = *(long *)(*(long *)(lVar16 + 0x38) + 0x20), lVar27 != 0)) {
    uVar11 = *(uint *)(lVar27 + 0x18);
    if (0 < (int)uVar11) {
      uVar24 = 0;
      do {
        if (uVar11 <= uVar24) goto code_r0x01650b78;
        plVar20 = *(long **)(lVar16 + 0x40);
        if (plVar20 == (long *)0x0) goto code_r0x01650b74;
        lVar14 = lVar27 + (long)(int)uVar24 * 0x10;
        lVar9 = *(long *)(lVar14 + 0x20);
        lVar14 = *(long *)(lVar14 + 0x28);
        if ((lVar9 != 0) &&
           (lVar6 = func_0x00f78adc(lVar9,*(undefined8 *)(*plVar20 + 0x40)), lVar6 == 0))
        goto code_r0x01650b80;
        if (*(uint *)(plVar20 + 3) <= uVar24) goto code_r0x01650b78;
        plVar20[(long)(int)uVar24 + 4] = lVar9;
        if (lVar14 == 0) goto code_r0x01650b74;
        uVar11 = *(uint *)(lVar14 + 0x18);
        if (0 < (int)uVar11) {
          uVar22 = 0;
          do {
            if (uVar11 <= uVar22) goto code_r0x01650b78;
            lVar6 = lVar14 + (long)(int)uVar22 * 0x10;
            lVar8 = *(long *)(lVar6 + 0x20);
            if (lVar8 == 0) goto code_r0x01650b74;
            lVar21 = *(long *)(lVar6 + 0x28);
            lVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar28._8_8_,5,0);
            if ((int)lVar6 != 0) {
              if ((lVar21 == 0) || (*(long *)(lVar21 + 0x138) == 0)) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar21 + 0x138),uRam0000000003d3c140);
              if (*(long *)(lVar21 + 0x138) == 0) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar21 + 0x138),lVar9,uRam0000000003d3c138);
              plVar20 = *(long **)(lVar16 + 0x40);
              if (plVar20 == (long *)0x0) goto code_r0x01650b74;
              lVar6 = func_0x00f78adc(lVar21,*(undefined8 *)(*plVar20 + 0x40));
              if (lVar6 == 0) goto code_r0x01650b80;
              if (*(uint *)(plVar20 + 3) <= uVar24) goto code_r0x01650b78;
              plVar20[(long)(int)uVar24 + 4] = lVar21;
            }
            uVar22 = uVar22 + 1;
            uVar11 = *(uint *)(lVar14 + 0x18);
          } while ((int)uVar22 < (int)uVar11);
        }
        uVar24 = uVar24 + 1;
        uVar11 = *(uint *)(lVar27 + 0x18);
      } while ((int)uVar24 < (int)uVar11);
    }
    if ((*(long *)(lVar16 + 0x38) != 0) &&
       (lVar27 = *(long *)(*(long *)(lVar16 + 0x38) + 0x28), lVar27 != 0)) {
      uVar11 = *(uint *)(lVar27 + 0x18);
      if (0 < (int)uVar11) {
        uVar24 = 0;
        do {
          if (uVar11 <= uVar24) goto code_r0x01650b78;
          plVar20 = *(long **)(lVar16 + 0x48);
          if (plVar20 == (long *)0x0) goto code_r0x01650b74;
          lVar14 = lVar27 + (long)(int)uVar24 * 0x10;
          lVar9 = *(long *)(lVar14 + 0x20);
          lVar14 = *(long *)(lVar14 + 0x28);
          if ((lVar9 != 0) &&
             (lVar6 = func_0x00f78adc(lVar9,*(undefined8 *)(*plVar20 + 0x40)), lVar6 == 0))
          goto code_r0x01650b80;
          if (*(uint *)(plVar20 + 3) <= uVar24) goto code_r0x01650b78;
          plVar20[(long)(int)uVar24 + 4] = lVar9;
          if (lVar14 == 0) goto code_r0x01650b74;
          uVar11 = *(uint *)(lVar14 + 0x18);
          if (0 < (int)uVar11) {
            uVar22 = 0;
            do {
              if (uVar11 <= uVar22) goto code_r0x01650b78;
              lVar6 = lVar14 + (long)(int)uVar22 * 0x10;
              lVar9 = *(long *)(lVar6 + 0x20);
              if (lVar9 == 0) goto code_r0x01650b74;
              lVar8 = *(long *)(lVar6 + 0x28);
              lVar6 = /*System.String$$Equals*/ func_0x029caa48(lVar9,auVar28._8_8_,5,0);
              if ((int)lVar6 != 0) {
                plVar20 = *(long **)(lVar16 + 0x48);
                if (plVar20 == (long *)0x0) goto code_r0x01650b74;
                if ((lVar8 != 0) &&
                   (lVar6 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar20 + 0x40)), lVar6 == 0))
                goto code_r0x01650b80;
                if (*(uint *)(plVar20 + 3) <= uVar24) goto code_r0x01650b78;
                plVar20[(long)(int)uVar24 + 4] = lVar8;
              }
              uVar22 = uVar22 + 1;
              uVar11 = *(uint *)(lVar14 + 0x18);
            } while ((int)uVar22 < (int)uVar11);
          }
          uVar24 = uVar24 + 1;
          uVar11 = *(uint *)(lVar27 + 0x18);
        } while ((int)uVar24 < (int)uVar11);
      }
      return lVar6;
    }
  }
code_r0x01650b74:
  func_0x00f78af4();
code_r0x01650b78:
  uVar19 = func_0x00f78b24();
code_r0x01650b84:
  lVar6 = func_0x00f78ac0(uVar19,0);
  return lVar6;
code_r0x01650b80:
  uVar19 = func_0x00f78b14();
  goto code_r0x01650b84;
}



// ============================================================
// RVA: 0x1650708 | Core.Localisation.LocalisationManager.Set
// ============================================================

void Core_Localisation_LocalisationManager__Set(long param_1,long param_2,long *param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  uint uVar19;
  ulong uVar20;
  code *pcVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  undefined **ppuVar25;
  long lVar26;
  undefined1 auVar27 [16];
  undefined *puStack_58;
  
  if ((bRam0000000003eb57c4 & 1) == 0) {
    func_0x00f78a20(0x3d2a328);
    func_0x00f78a20(0x3d20b50);
    func_0x00f78a20(0x3d2fe40);
    func_0x00f78a20(0x3d2fe80);
    func_0x00f78a20(0x3d3c000);
    func_0x00f78a20(0x3d3c008);
    func_0x00f78a20(0x3d77c80);
    bRam0000000003eb57c4 = 1;
  }
  if ((*(long *)(param_1 + 0x70) != 0) &&
     (/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$Clear*/ func_0x01ed79a4(*(long *)(param_1 + 0x70),uRam0000000003d2fe40), param_2 != 0)) {
    uVar12 = (ulong)*(uint *)(param_2 + 0x18);
    if (0 < (int)*(uint *)(param_2 + 0x18)) {
      uVar20 = 0;
      uVar24 = uVar12 - 1;
      while( true ) {
        if (uVar12 <= uVar20) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar26 = param_3[1];
        if (lVar26 == 0) goto LAB_016508d8;
        uVar17 = *(undefined8 *)(*(long *)(param_2 + 0x10) + uVar20 * 8 + 0x20);
        if (*(uint *)(lVar26 + 0x18) <= uVar20) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_016508d8;
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$set_Item*/ func_0x01ed7794(*(long *)(param_1 + 0x70),uVar17,
                        *(undefined8 *)(*(long *)(lVar26 + 0x10) + uVar20 * 8 + 0x20),
                        uRam0000000003d2fe80);
        if (uVar24 == uVar20) break;
        uVar12 = (ulong)*(uint *)(param_2 + 0x18);
        uVar20 = uVar20 + 1;
      }
    }
    *(long *)(param_1 + 0x58) = *param_3;
    if (*param_3 != 0) {
      uVar3 = /*System.String$$Equals*/ func_0x029caa48(*param_3,/*STR('ar')*/ uRam0000000003d77c80,5,0);
      *(undefined1 *)(param_1 + 0x61) = uVar3;
      *(undefined1 *)(param_1 + 0x60) = uVar3;
      uVar16 = *(undefined8 *)(param_1 + 0x58);
      uVar17 = func_0x00f78aec(/*System.Globalization.CultureInfo_TypeInfo*/ uRam0000000003d20b50);
      /*System.Globalization.CultureInfo$$.ctor*/ func_0x02a811d4(uVar17,uVar16,0);
      *(undefined8 *)(param_1 + 0x68) = uVar17;
      puVar6 = *(undefined **)(param_1 + 0x10);
      if (puVar6 == (undefined *)0x0) {
        return;
      }
      param_3 = (long *)*param_3;
      puStack_58 = puVar6;
      lVar26 = *(long *)(puVar6 + 0x68);
      if (lVar26 == 0) {
        ppuVar25 = &puStack_58;
        lVar23 = 1;
      }
      else {
        lVar23 = *(long *)(lVar26 + 0x18);
        if (lVar23 == 0) {
          return;
        }
        ppuVar25 = (undefined **)(lVar26 + 0x20);
      }
      lVar26 = 0;
      do {
        puVar13 = ppuVar25[lVar26];
        pcVar21 = *(code **)(puVar13 + 0x10);
        plVar18 = *(long **)(puVar13 + 0x20);
        lVar9 = *(long *)(puVar13 + 0x28);
        if (*(short *)(lVar9 + 0x48) == -1) {
          func_0x00f78ad8(lVar9);
        }
        iVar4 = func_0x00f78a4c(lVar9);
        bVar2 = *(char *)(lVar9 + 0x4a) == '\x01';
        if (iVar4 == 0) {
          if (bVar2) {
            if (plVar18 == (long *)0x0) {
code_r0x01e480c8:
              (*pcVar21)(param_3,lVar9);
            }
            else {
              if (((*(short *)(lVar9 + 0x48) == -1) || ((*(byte *)(*plVar18 + 0x115) & 1) != 0)) ||
                 (*(long *)(puVar6 + 0x18) == 0)) goto code_r0x01e47fc0;
              iVar4 = func_0x00f78a44(lVar9);
              iVar5 = func_0x00f78ec0(lVar9);
              if (iVar4 == 0) {
                uVar1 = *(ushort *)(lVar9 + 0x48);
                if (iVar5 == 0) {
                  lVar9 = *plVar18 + (ulong)uVar1 * 0x10;
                  (**(code **)(lVar9 + 0x138))(plVar18,param_3,*(undefined8 *)(lVar9 + 0x140));
                  goto code_r0x01e480d4;
                }
                lVar9 = func_0x00f78a48(lVar9);
                lVar14 = *plVar18;
                uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar12 != 0) {
                  piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar9) {
                      puVar10 = (undefined8 *)
                                (lVar14 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01e48260;
                    }
                    piVar15 = piVar15 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                puVar10 = (undefined8 *)func_0x00fac1f0(plVar18,lVar9,(ulong)uVar1);
code_r0x01e48260:
                pcVar21 = (code *)*puVar10;
                puVar10 = (undefined8 *)puVar10[1];
              }
              else {
                if (iVar5 == 0) {
                  uVar17 = *(undefined8 *)
                            (*plVar18 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar14 = *plVar18;
                  uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
                  if (uVar12 != 0) {
                    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)(lVar9 + 0x18)) {
                        lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar9 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e48238;
                      }
                      piVar15 = piVar15 + 4;
                      uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                  }
                  lVar14 = func_0x00fac1f0(plVar18);
code_r0x01e48238:
                  uVar17 = *(undefined8 *)(lVar14 + 8);
                }
                puVar10 = (undefined8 *)func_0x00f78acc(uVar17,lVar9);
                pcVar21 = (code *)*puVar10;
              }
              (*pcVar21)(plVar18,param_3,puVar10);
            }
          }
          else {
            if ((*(short *)(lVar9 + 0x48) == -1) || (*(long *)(puVar6 + 0x18) == 0))
            goto code_r0x01e480c8;
            iVar4 = func_0x00f78a44(lVar9);
            iVar5 = func_0x00f78ec0(lVar9);
            if (iVar4 == 0) {
              uVar1 = *(ushort *)(lVar9 + 0x48);
              if (iVar5 == 0) {
                lVar9 = *param_3 + (ulong)uVar1 * 0x10;
                (**(code **)(lVar9 + 0x138))(param_3,*(undefined8 *)(lVar9 + 0x140));
                goto code_r0x01e480d4;
              }
              lVar9 = func_0x00f78a48(lVar9);
              lVar14 = *param_3;
              uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar12 != 0) {
                piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar9) {
                    puVar10 = (undefined8 *)
                              (lVar14 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x01e481fc;
                  }
                  piVar15 = piVar15 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar10 = (undefined8 *)func_0x00fac1f0(param_3,lVar9,(ulong)uVar1);
code_r0x01e481fc:
              pcVar21 = (code *)*puVar10;
              puVar10 = (undefined8 *)puVar10[1];
            }
            else {
              if (iVar5 == 0) {
                uVar17 = *(undefined8 *)(*param_3 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar14 = *param_3;
                uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
                if (uVar12 != 0) {
                  piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)(lVar9 + 0x18)) {
                      lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar9 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01e481d4;
                    }
                    piVar15 = piVar15 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                lVar14 = func_0x00fac1f0(param_3);
code_r0x01e481d4:
                uVar17 = *(undefined8 *)(lVar14 + 8);
              }
              puVar10 = (undefined8 *)func_0x00f78acc(uVar17,lVar9);
              pcVar21 = (code *)*puVar10;
            }
            (*pcVar21)(param_3,puVar10);
          }
        }
        else {
          if (bVar2) goto code_r0x01e480c8;
code_r0x01e47fc0:
          (*pcVar21)(plVar18,param_3,lVar9);
        }
code_r0x01e480d4:
        lVar26 = lVar26 + 1;
        if (lVar26 == lVar23) {
          return;
        }
      } while( true );
    }
  }
LAB_016508d8:
  auVar27 = func_0x00f78af4();
  lVar26 = auVar27._0_8_;
  puStack_58 = &Core_Localisation_LocalisationManager__SetFontAndMaterialAssetMappings;
  if ((bRam0000000003eb57c6 & 1) == 0) {
    func_0x00f78a20(0x3d3c138);
    func_0x00f78a20(0x3d3c140);
    bRam0000000003eb57c6 = 1;
  }
  if ((*(long *)(lVar26 + 0x38) != 0) &&
     (lVar23 = *(long *)(*(long *)(lVar26 + 0x38) + 0x20), lVar23 != 0)) {
    uVar11 = *(uint *)(lVar23 + 0x18);
    if (0 < (int)uVar11) {
      uVar22 = 0;
      do {
        if (uVar11 <= uVar22) goto code_r0x01650b78;
        plVar18 = *(long **)(lVar26 + 0x40);
        if (plVar18 == (long *)0x0) goto code_r0x01650b74;
        lVar9 = lVar23 + (long)(int)uVar22 * 0x10;
        lVar14 = *(long *)(lVar9 + 0x20);
        lVar9 = *(long *)(lVar9 + 0x28);
        if ((lVar14 != 0) &&
           (lVar7 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar18 + 0x40)), lVar7 == 0))
        goto code_r0x01650b80;
        if (*(uint *)(plVar18 + 3) <= uVar22) goto code_r0x01650b78;
        plVar18[(long)(int)uVar22 + 4] = lVar14;
        if (lVar9 == 0) goto code_r0x01650b74;
        uVar11 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar11) {
          uVar19 = 0;
          do {
            if (uVar11 <= uVar19) goto code_r0x01650b78;
            lVar7 = lVar9 + (long)(int)uVar19 * 0x10;
            lVar8 = *(long *)(lVar7 + 0x20);
            if (lVar8 == 0) goto code_r0x01650b74;
            lVar7 = *(long *)(lVar7 + 0x28);
            iVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar8,auVar27._8_8_,5,0);
            if (iVar4 != 0) {
              if ((lVar7 == 0) || (*(long *)(lVar7 + 0x138) == 0)) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar7 + 0x138),uRam0000000003d3c140);
              if (*(long *)(lVar7 + 0x138) == 0) goto code_r0x01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar7 + 0x138),lVar14,uRam0000000003d3c138);
              plVar18 = *(long **)(lVar26 + 0x40);
              if (plVar18 == (long *)0x0) goto code_r0x01650b74;
              lVar8 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar18 + 0x40));
              if (lVar8 == 0) goto code_r0x01650b80;
              if (*(uint *)(plVar18 + 3) <= uVar22) goto code_r0x01650b78;
              plVar18[(long)(int)uVar22 + 4] = lVar7;
            }
            uVar19 = uVar19 + 1;
            uVar11 = *(uint *)(lVar9 + 0x18);
          } while ((int)uVar19 < (int)uVar11);
        }
        uVar22 = uVar22 + 1;
        uVar11 = *(uint *)(lVar23 + 0x18);
      } while ((int)uVar22 < (int)uVar11);
    }
    if ((*(long *)(lVar26 + 0x38) != 0) &&
       (lVar23 = *(long *)(*(long *)(lVar26 + 0x38) + 0x28), lVar23 != 0)) {
      uVar11 = *(uint *)(lVar23 + 0x18);
      if (0 < (int)uVar11) {
        uVar22 = 0;
        do {
          if (uVar11 <= uVar22) goto code_r0x01650b78;
          plVar18 = *(long **)(lVar26 + 0x48);
          if (plVar18 == (long *)0x0) goto code_r0x01650b74;
          lVar9 = lVar23 + (long)(int)uVar22 * 0x10;
          lVar14 = *(long *)(lVar9 + 0x20);
          lVar9 = *(long *)(lVar9 + 0x28);
          if ((lVar14 != 0) &&
             (lVar7 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar18 + 0x40)), lVar7 == 0))
          goto code_r0x01650b80;
          if (*(uint *)(plVar18 + 3) <= uVar22) goto code_r0x01650b78;
          plVar18[(long)(int)uVar22 + 4] = lVar14;
          if (lVar9 == 0) goto code_r0x01650b74;
          uVar11 = *(uint *)(lVar9 + 0x18);
          if (0 < (int)uVar11) {
            uVar19 = 0;
            do {
              if (uVar11 <= uVar19) goto code_r0x01650b78;
              lVar14 = lVar9 + (long)(int)uVar19 * 0x10;
              lVar7 = *(long *)(lVar14 + 0x20);
              if (lVar7 == 0) goto code_r0x01650b74;
              lVar14 = *(long *)(lVar14 + 0x28);
              iVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar7,auVar27._8_8_,5,0);
              if (iVar4 != 0) {
                plVar18 = *(long **)(lVar26 + 0x48);
                if (plVar18 == (long *)0x0) goto code_r0x01650b74;
                if ((lVar14 != 0) &&
                   (lVar7 = func_0x00f78adc(lVar14,*(undefined8 *)(*plVar18 + 0x40)), lVar7 == 0))
                goto code_r0x01650b80;
                if (*(uint *)(plVar18 + 3) <= uVar22) goto code_r0x01650b78;
                plVar18[(long)(int)uVar22 + 4] = lVar14;
              }
              uVar19 = uVar19 + 1;
              uVar11 = *(uint *)(lVar9 + 0x18);
            } while ((int)uVar19 < (int)uVar11);
          }
          uVar22 = uVar22 + 1;
          uVar11 = *(uint *)(lVar23 + 0x18);
        } while ((int)uVar22 < (int)uVar11);
      }
      return;
    }
  }
code_r0x01650b74:
  func_0x00f78af4();
code_r0x01650b78:
  uVar17 = func_0x00f78b24();
code_r0x01650b84:
  func_0x00f78ac0(uVar17,0);
  return;
code_r0x01650b80:
  uVar17 = func_0x00f78b14();
  goto code_r0x01650b84;
}



// ============================================================
// RVA: 0x16508dc | Core.Localisation.LocalisationManager.SetFontAndMaterialAssetMappings
// ============================================================

void Core_Localisation_LocalisationManager__SetFontAndMaterialAssetMappings
               (long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  if ((bRam0000000003eb57c6 & 1) == 0) {
    func_0x00f78a20(0x3d3c138);
    func_0x00f78a20(0x3d3c140);
    bRam0000000003eb57c6 = 1;
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x20), lVar11 != 0)) {
    uVar6 = *(uint *)(lVar11 + 0x18);
    if (0 < (int)uVar6) {
      uVar10 = 0;
      do {
        if (uVar6 <= uVar10) goto LAB_01650b78;
        plVar8 = *(long **)(param_1 + 0x40);
        if (plVar8 == (long *)0x0) goto LAB_01650b74;
        lVar1 = lVar11 + (long)(int)uVar10 * 0x10;
        lVar7 = *(long *)(lVar1 + 0x20);
        lVar1 = *(long *)(lVar1 + 0x28);
        if ((lVar7 != 0) &&
           (lVar3 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar3 == 0))
        goto LAB_01650b80;
        if (*(uint *)(plVar8 + 3) <= uVar10) goto LAB_01650b78;
        plVar8[(long)(int)uVar10 + 4] = lVar7;
        if (lVar1 == 0) goto LAB_01650b74;
        uVar6 = *(uint *)(lVar1 + 0x18);
        if (0 < (int)uVar6) {
          uVar9 = 0;
          do {
            if (uVar6 <= uVar9) goto LAB_01650b78;
            lVar3 = lVar1 + (long)(int)uVar9 * 0x10;
            lVar4 = *(long *)(lVar3 + 0x20);
            if (lVar4 == 0) goto LAB_01650b74;
            lVar3 = *(long *)(lVar3 + 0x28);
            iVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar4,param_2,5,0);
            if (iVar2 != 0) {
              if ((lVar3 == 0) || (*(long *)(lVar3 + 0x138) == 0)) goto LAB_01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar3 + 0x138),uRam0000000003d3c140);
              if (*(long *)(lVar3 + 0x138) == 0) goto LAB_01650b74;
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar3 + 0x138),lVar7,uRam0000000003d3c138);
              plVar8 = *(long **)(param_1 + 0x40);
              if (plVar8 == (long *)0x0) goto LAB_01650b74;
              lVar4 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar8 + 0x40));
              if (lVar4 == 0) goto LAB_01650b80;
              if (*(uint *)(plVar8 + 3) <= uVar10) goto LAB_01650b78;
              plVar8[(long)(int)uVar10 + 4] = lVar3;
            }
            uVar9 = uVar9 + 1;
            uVar6 = *(uint *)(lVar1 + 0x18);
          } while ((int)uVar9 < (int)uVar6);
        }
        uVar10 = uVar10 + 1;
        uVar6 = *(uint *)(lVar11 + 0x18);
      } while ((int)uVar10 < (int)uVar6);
    }
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x28), lVar11 != 0)) {
      uVar6 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar6) {
        uVar10 = 0;
        do {
          if (uVar6 <= uVar10) goto LAB_01650b78;
          plVar8 = *(long **)(param_1 + 0x48);
          if (plVar8 == (long *)0x0) goto LAB_01650b74;
          lVar1 = lVar11 + (long)(int)uVar10 * 0x10;
          lVar7 = *(long *)(lVar1 + 0x20);
          lVar1 = *(long *)(lVar1 + 0x28);
          if ((lVar7 != 0) &&
             (lVar3 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar3 == 0))
          goto LAB_01650b80;
          if (*(uint *)(plVar8 + 3) <= uVar10) goto LAB_01650b78;
          plVar8[(long)(int)uVar10 + 4] = lVar7;
          if (lVar1 == 0) goto LAB_01650b74;
          uVar6 = *(uint *)(lVar1 + 0x18);
          if (0 < (int)uVar6) {
            uVar9 = 0;
            do {
              if (uVar6 <= uVar9) goto LAB_01650b78;
              lVar7 = lVar1 + (long)(int)uVar9 * 0x10;
              lVar3 = *(long *)(lVar7 + 0x20);
              if (lVar3 == 0) goto LAB_01650b74;
              lVar7 = *(long *)(lVar7 + 0x28);
              iVar2 = /*System.String$$Equals*/ func_0x029caa48(lVar3,param_2,5,0);
              if (iVar2 != 0) {
                plVar8 = *(long **)(param_1 + 0x48);
                if (plVar8 == (long *)0x0) goto LAB_01650b74;
                if ((lVar7 != 0) &&
                   (lVar3 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar3 == 0))
                goto LAB_01650b80;
                if (*(uint *)(plVar8 + 3) <= uVar10) goto LAB_01650b78;
                plVar8[(long)(int)uVar10 + 4] = lVar7;
              }
              uVar9 = uVar9 + 1;
              uVar6 = *(uint *)(lVar1 + 0x18);
            } while ((int)uVar9 < (int)uVar6);
          }
          uVar10 = uVar10 + 1;
          uVar6 = *(uint *)(lVar11 + 0x18);
        } while ((int)uVar10 < (int)uVar6);
      }
      return;
    }
  }
LAB_01650b74:
  func_0x00f78af4();
LAB_01650b78:
  uVar5 = func_0x00f78b24();
code_r0x01650b84:
  func_0x00f78ac0(uVar5,0);
  return;
LAB_01650b80:
  uVar5 = func_0x00f78b14();
  goto code_r0x01650b84;
}



// ============================================================
// RVA: 0x1650b8c | Core.Localisation.LocalisationManager..ctor
// ============================================================

void Core_Localisation_LocalisationManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1650b94 | Core.Localisation.LocalisationManager..cctor
// ============================================================

void Core_Localisation_LocalisationManager___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb57c7 & 1) == 0) {
    func_0x00f78a20(0x3d230d0);
    func_0x00f78a20(0x3d24dd8);
    bRam0000000003eb57c7 = 1;
  }
  **(undefined8 **)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) = 0;
  uVar1 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
  /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(uVar1,0x400,0);
  *(undefined8 *)(*(long *)(/*Core.Localisation.LocalisationManager_TypeInfo*/ lRam0000000003d230d0 + 0xb8) + 8) = uVar1;
  return;
}



