// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartManager

// ============================================================
// RVA: 0x15ce0d8 | Atlas.Gameplay.Kart.KartManager.get_LoadedKarts
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartManager__get_LoadedKarts(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x15ce0e0 | Atlas.Gameplay.Kart.KartManager.get_LocalPlayerKartComposite
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartManager__get_LocalPlayerKartComposite(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15ce0e8 | Atlas.Gameplay.Kart.KartManager.get_FixedUpdateAllJob
// ============================================================

long Atlas_Gameplay_Kart_KartManager__get_FixedUpdateAllJob(long param_1)

{
  return param_1 + 0xa8;
}



// ============================================================
// RVA: 0x15ce0f0 | Atlas.Gameplay.Kart.KartManager.Init
// ============================================================

void Atlas_Gameplay_Kart_KartManager__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [12];
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
  
  uVar3 = param_3;
  if ((bRam0000000003eb533d & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d55070);
    func_0x00f78a20(0x3d55088);
    func_0x00f78a20(0x3d550a0);
    func_0x00f78a20(0x3d550c0);
    func_0x00f78a20(0x3d59bb8);
    func_0x00f78a20(0x3d59bc0);
    func_0x00f78a20(0x3d59bc8);
    func_0x00f78a20(0x3d3ae08);
    func_0x00f78a20(0x3d1daf8);
    func_0x00f78a20(0x3d3e270);
    func_0x00f78a20(0x3d3e260);
    func_0x00f78a20(0x3d3e250);
    func_0x00f78a20(0x3d3e290);
    func_0x00f78a20(0x3d3e280);
    func_0x00f78a20(0x3d3e240);
    bRam0000000003eb533d = 1;
  }
  iVar5 = (int)uVar3;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<KartComposite>_TypeInfo*/ uRam0000000003d1daf8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar3,uRam0000000003d3ae08);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  if (param_5 != 0) {
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55070);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550a0);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55088);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550c0);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    lVar6 = *(long *)(param_1 + 0x30);
    if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1c8);
    uVar4 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
    uVar3 = uRam0000000003d59bc8;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,param_1,uRam0000000003d59bc8,uRam0000000003d2a320);
    iVar5 = (int)uVar3;
    if (lVar6 != 0) {
      /*Atlas.Settings.AtlasQualitySettings$$RegisterOnSettingChanged*/ func_0x0145ee3c(lVar6,uVar7,uVar4,0);
      lVar6 = *(long *)(param_1 + 0x30);
      uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138);
      uVar4 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
      uVar3 = uRam0000000003d59bc0;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,param_1,uRam0000000003d59bc0,uRam0000000003d2a320);
      iVar5 = (int)uVar3;
      if (lVar6 != 0) {
        /*Atlas.Settings.AtlasQualitySettings$$RegisterOnSettingChanged*/ func_0x0145ee3c(lVar6,uVar7,uVar4,0);
        lVar6 = *(long *)(param_1 + 0x30);
        uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1e8);
        uVar4 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
        uVar3 = uRam0000000003d59bb8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,param_1,uRam0000000003d59bb8,uRam0000000003d2a320);
        iVar5 = (int)uVar3;
        if (lVar6 != 0) {
          /*Atlas.Settings.AtlasQualitySettings$$RegisterOnSettingChanged*/ func_0x0145ee3c(lVar6,uVar7,uVar4,0);
          uStack_70 = 0;
          uStack_68 = 0;
          /*Unity.Collections.NativeArray<KartPhysicsFixedUpdateJobBurstAllInput>$$.ctor*/ func_0x025f0b04(&uStack_70,0xc,4,1,uRam0000000003d3e240);
          *(undefined8 *)(param_1 + 0xb0) = uStack_68;
          *(undefined8 *)(param_1 + 0xa8) = uStack_70;
          uStack_80 = 0;
          uStack_78 = 0;
          /*Unity.Collections.NativeArray<KartSuspensionState>$$.ctor*/ func_0x025f5d60(&uStack_80,0x30,4,1,uRam0000000003d3e290);
          *(undefined8 *)(param_1 + 0xe0) = uStack_78;
          *(undefined8 *)(param_1 + 0xd8) = uStack_80;
          uStack_90 = 0;
          uStack_88 = 0;
          /*Unity.Collections.NativeArray<KartPhysicsState>$$.ctor*/ func_0x025f3c7c(&uStack_90,0xc,4,1,uRam0000000003d3e270);
          *(undefined8 *)(param_1 + 0xc0) = uStack_88;
          *(undefined8 *)(param_1 + 0xb8) = uStack_90;
          *(undefined4 *)(param_1 + 0x118) = 4;
          uStack_a0 = 0;
          uStack_98 = 0;
          /*Unity.Collections.NativeArray<KartPhysicsFixedUpdateJobBurstOutput>$$.ctor*/ func_0x025f1b7c(&uStack_a0,0xc,4,1,uRam0000000003d3e250);
          *(undefined8 *)(param_1 + 0xd0) = uStack_98;
          *(undefined8 *)(param_1 + 200) = uStack_a0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          /*Unity.Collections.NativeArray<KartSuspensionConfig>$$.ctor*/ func_0x025f4cf4(&uStack_b0,0x3c,4,1,uRam0000000003d3e280);
          *(undefined8 *)(param_1 + 0xf0) = uStack_a8;
          *(undefined8 *)(param_1 + 0xe8) = uStack_b0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          /*Unity.Collections.NativeArray<KartPhysicsRaycastResult>$$.ctor*/ func_0x025f2bf4(&uStack_c0,0x3c,4,1,uRam0000000003d3e260);
          *(undefined8 *)(param_1 + 0x100) = uStack_b8;
          *(undefined8 *)(param_1 + 0xf8) = uStack_c0;
          *(undefined4 *)(param_1 + 0x120) = 0xffff;
          return;
        }
      }
    }
  }
  auVar8 = func_0x00f78af4();
  lVar6 = auVar8._0_8_;
  uVar2 = 1 << (ulong)(auVar8._8_4_ & 0x1f);
  uVar1 = *(uint *)(lVar6 + 0x120) | uVar2;
  if (iVar5 == 0) {
    uVar1 = *(uint *)(lVar6 + 0x120) & (uVar2 ^ 0xffffffff);
  }
  *(uint *)(lVar6 + 0x120) = uVar1;
  *(int *)(lVar6 + 0x128) = *(int *)(lVar6 + 0x128) + 1;
  return;
}



// ============================================================
// RVA: 0x15ce4f8 | Atlas.Gameplay.Kart.KartManager.JobRegistered
// ============================================================

void Atlas_Gameplay_Kart_KartManager__JobRegistered(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  uVar1 = *(uint *)(param_1 + 0x120) | uVar2;
  if (param_3 == 0) {
    uVar1 = *(uint *)(param_1 + 0x120) & (uVar2 ^ 0xffffffff);
  }
  *(uint *)(param_1 + 0x120) = uVar1;
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  return;
}



// ============================================================
// RVA: 0x15ce528 | Atlas.Gameplay.Kart.KartManager.FixedUpdateKartJobRun
// ============================================================

void Atlas_Gameplay_Kart_KartManager__FixedUpdateKartJobRun(long param_1)

{
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000003eb533e & 1) == 0) {
    func_0x00f78a20(0x3d57fa0);
    bRam0000000003eb533e = 1;
  }
  if (*(int *)(param_1 + 0x11c) <= *(int *)(param_1 + 0x128)) {
    uStack_58 = *(undefined8 *)(param_1 + 0xf0);
    uStack_60 = *(undefined8 *)(param_1 + 0xe8);
    uStack_48 = *(undefined8 *)(param_1 + 0x100);
    uStack_50 = *(undefined8 *)(param_1 + 0xf8);
    uStack_38 = *(undefined8 *)(param_1 + 0x110);
    uStack_40 = *(undefined8 *)(param_1 + 0x108);
    uStack_28 = *(undefined8 *)(param_1 + 0x120);
    uStack_30 = *(undefined8 *)(param_1 + 0x118);
    uStack_98 = *(undefined8 *)(param_1 + 0xb0);
    uStack_a0 = *(undefined8 *)(param_1 + 0xa8);
    uStack_88 = *(undefined8 *)(param_1 + 0xc0);
    uStack_90 = *(undefined8 *)(param_1 + 0xb8);
    uStack_78 = *(undefined8 *)(param_1 + 0xd0);
    uStack_80 = *(undefined8 *)(param_1 + 200);
    uStack_68 = *(undefined8 *)(param_1 + 0xe0);
    uStack_70 = *(undefined8 *)(param_1 + 0xd8);
    /*Unity.Jobs.IJobExtensions$$Run<KartPhysicsFixedUpdateAllJob>*/ func_0x0185e6bc(&uStack_a0,uRam0000000003d57fa0);
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x15ce5c4 | Atlas.Gameplay.Kart.KartManager.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x015ce830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ce834) */
/* WARNING: Removing unreachable block (ram,0x015ce83c) */

void Atlas_Gameplay_Kart_KartManager__DeInit(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  int extraout_w1;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar13;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  uVar8 = 0x3d1feb0;
  if ((bRam0000000003eb533f & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d59bb8);
    func_0x00f78a20(0x3d59bc0);
    func_0x00f78a20(0x3d59bc8);
    func_0x00f78a20(0x3d3e288);
    func_0x00f78a20(0x3d3e268);
    func_0x00f78a20(0x3d3e248);
    func_0x00f78a20(0x3d3e298);
    func_0x00f78a20(0x3d3e258);
    func_0x00f78a20(0x3d3e370);
    func_0x00f78a20(0x3d3e278);
    func_0x00f78a20(0x3d3e3e0);
    bRam0000000003eb533f = 1;
  }
  uVar11 = 0x3d1b598;
  uVar12 = 0x3d59bb8;
  uVar9 = 0x3d2a320;
  lVar5 = *(long *)(param_1 + 0x30);
  if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1e8);
  uVar2 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d59bb8,uRam0000000003d2a320);
  lVar6 = 0;
  if (lVar5 != 0) {
    uVar12 = 0x3d59000;
    /*Atlas.Settings.AtlasQualitySettings$$UnRegisterOnSettingChanged*/ func_0x0145ee50(lVar5,uVar7,uVar2,0);
    lVar5 = *(long *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138);
    uVar2 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d59bc0,uRam0000000003d2a320);
    lVar6 = 0;
    if (lVar5 != 0) {
      uVar12 = 0x3d59000;
      /*Atlas.Settings.AtlasQualitySettings$$UnRegisterOnSettingChanged*/ func_0x0145ee50(lVar5,uVar7,uVar2,0);
      lVar6 = *(long *)(param_1 + 0x30);
      uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1c8);
      uVar2 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d59bc8,uRam0000000003d2a320);
      if (lVar6 != 0) {
        uVar8 = 0x3d3e000;
        uVar9 = 0x3d3e000;
        uVar11 = 0x3d3e000;
        uVar12 = 0x3d3e000;
        unaff_x27 = 0x3d3e000;
        unaff_x28 = 0x3d3e000;
        /*Atlas.Settings.AtlasQualitySettings$$UnRegisterOnSettingChanged*/ func_0x0145ee50(lVar6,uVar7,uVar2,0);
        /*Unity.Collections.NativeArray<KartPhysicsFixedUpdateJobBurstAllInput>$$Dispose*/ func_0x025f0f78(param_1 + 0xa8,uRam0000000003d3e248);
        /*Unity.Collections.NativeArray<KartSuspensionState>$$Dispose*/ func_0x025f6200(param_1 + 0xd8,uRam0000000003d3e298);
        /*Unity.Collections.NativeArray<KartPhysicsState>$$Dispose*/ func_0x025f40f0(param_1 + 0xb8,uRam0000000003d3e278);
        /*Unity.Collections.NativeArray<KartPhysicsFixedUpdateJobBurstOutput>$$Dispose*/ func_0x025f1ff0(param_1 + 200,uRam0000000003d3e258);
        /*Unity.Collections.NativeArray<KartSuspensionConfig>$$Dispose*/ func_0x025f515c(param_1 + 0xe8,uRam0000000003d3e288);
        /*Unity.Collections.NativeArray<KartPhysicsRaycastResult>$$Dispose*/ func_0x025f3078(param_1 + 0xf8,uRam0000000003d3e268);
        puVar13 = (undefined *)0x15ce834;
        lVar5 = param_1;
        goto code_r0x015ce8ac;
      }
    }
  }
  puVar13 = &Atlas_Gameplay_Kart_KartManager__UnloadKarts;
  lVar5 = func_0x00f78af4();
code_r0x015ce8ac:
  uStack_c0 = unaff_x28;
  uStack_b8 = unaff_x27;
  uStack_b0 = uVar12;
  uStack_a8 = uVar11;
  uStack_a0 = uVar9;
  uStack_98 = uVar8;
  uStack_90 = uVar2;
  uStack_88 = uVar7;
  lStack_80 = lVar6;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  puStack_68 = puVar13;
  if ((bRam0000000003eb5345 & 1) == 0) {
    func_0x00f78a20(0x3d2a218);
    func_0x00f78a20(0x3d1b508);
    func_0x00f78a20(0x3d43380);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d59b98);
    func_0x00f78a20(0x3d3ae18);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5345 = 1;
  }
  if (*(long *)(lVar5 + 0x10) == 0) goto code_r0x015cea90;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_f8,*(long *)(lVar5 + 0x10),uRam0000000003d3ae20);
  uStack_d8 = uStack_f0;
  uStack_e0 = uStack_f8;
  lStack_d0 = lStack_e8;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e0,uRam0000000003d328d0), lVar6 = lStack_d0,
        (uVar3 & 1) != 0) {
    lVar10 = *(long *)(lVar5 + 0x50);
    if (lVar10 != 0) {
      uVar11 = *(undefined8 *)(lVar10 + 0x68);
      uVar8 = func_0x00f78aec(/*System.Action<NetworkResultsStanding>_TypeInfo*/ lRam0000000003d1b508);
      /*System.Action<NetworkResultsStanding>$$.ctor*/ func_0x01e46260(uVar8,lVar6,uRam0000000003d59b98,uRam0000000003d2a218);
      plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar8,0);
      if (plVar4 != (long *)0x0) {
        if (*plVar4 != /*System.Action<NetworkResultsStanding>_TypeInfo*/ lRam0000000003d1b508) {
          func_0x00f78e5c();
          goto code_r0x015cea8c;
        }
      }
      *(long **)(lVar10 + 0x68) = plVar4;
    }
    if (lVar6 == 0) {
      func_0x00f78af4();
code_r0x015cea8c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15cea90);
      (*pcVar1)();
    }
    Atlas_Gameplay_Kart_KartComposite__DeInit(lVar6);
    if (*(long *)(lVar5 + 0x28) == 0) {
      func_0x00f78af4();
      goto code_r0x015cea8c;
    }
    /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*(long *)(lVar5 + 0x28),lVar6,uRam0000000003d43380);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e0,uRam0000000003d328c8);
  do {
    if (*(long *)(lVar5 + 0x10) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar5 + 0x10),uRam0000000003d3ae18);
      return;
    }
code_r0x015cea90:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x015ceae8;
    plVar4 = (long *)___cxa_begin_catch();
    lVar6 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e0,uRam0000000003d328c8);
  } while (lVar6 == 0);
  func_0x00f78ac0(lVar6,0);
code_r0x015ceae8:
  lVar5 = __Unwind_Resume();
  *(undefined8 *)(lVar5 + 0x70) = 0;
  return;
}



// ============================================================
// RVA: 0x15ce8ac | Atlas.Gameplay.Kart.KartManager.UnloadKarts
// ============================================================

void Atlas_Gameplay_Kart_KartManager__UnloadKarts(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  int extraout_w1;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb5345 & 1) == 0) {
    func_0x00f78a20(0x3d2a218);
    func_0x00f78a20(0x3d1b508);
    func_0x00f78a20(0x3d43380);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d59b98);
    func_0x00f78a20(0x3d3ae18);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5345 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_015cea90;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,*(long *)(param_1 + 0x10),uRam0000000003d3ae20);
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  lStack_70 = lStack_88;
  while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d328d0), lVar5 = lStack_70,
        (uVar2 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x50);
    if (lVar7 != 0) {
      uVar6 = *(undefined8 *)(lVar7 + 0x68);
      uVar3 = func_0x00f78aec(/*System.Action<NetworkResultsStanding>_TypeInfo*/ lRam0000000003d1b508);
      /*System.Action<NetworkResultsStanding>$$.ctor*/ func_0x01e46260(uVar3,lVar5,uRam0000000003d59b98,uRam0000000003d2a218);
      plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar3,0);
      if (plVar4 != (long *)0x0) {
        if (*plVar4 != /*System.Action<NetworkResultsStanding>_TypeInfo*/ lRam0000000003d1b508) {
          func_0x00f78e5c();
          goto code_r0x015cea8c;
        }
      }
      *(long **)(lVar7 + 0x68) = plVar4;
    }
    if (lVar5 == 0) {
      func_0x00f78af4();
code_r0x015cea8c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15cea90);
      (*pcVar1)();
    }
    Atlas_Gameplay_Kart_KartComposite__DeInit(lVar5);
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x00f78af4();
      goto code_r0x015cea8c;
    }
    /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*(long *)(param_1 + 0x28),lVar5,uRam0000000003d43380);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d328c8);
  do {
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x10),uRam0000000003d3ae18);
      return;
    }
LAB_015cea90:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x015ceae8;
    plVar4 = (long *)___cxa_begin_catch();
    lVar5 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d328c8);
  } while (lVar5 == 0);
  func_0x00f78ac0(lVar5,0);
code_r0x015ceae8:
  lVar5 = __Unwind_Resume();
  *(undefined8 *)(lVar5 + 0x70) = 0;
  return;
}



// ============================================================
// RVA: 0x15ceaec | Atlas.Gameplay.Kart.KartManager.DeInitKartSideOnTimeRelationships
// ============================================================

void Atlas_Gameplay_Kart_KartManager__DeInitKartSideOnTimeRelationships(long param_1)

{
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// ============================================================
// RVA: 0x15ceaf4 | Atlas.Gameplay.Kart.KartManager.RequestLoadKarts
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15ceb1c | Atlas.Gameplay.Kart.KartManager.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x015ceb58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015cf7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ceb5c) */
/* WARNING: Removing unreachable block (ram,0x015cebd4) */
/* WARNING: Removing unreachable block (ram,0x015ceb60) */
/* WARNING: Removing unreachable block (ram,0x015ceb78) */
/* WARNING: Removing unreachable block (ram,0x015ceb80) */
/* WARNING: Removing unreachable block (ram,0x015ceba8) */
/* WARNING: Removing unreachable block (ram,0x015ceb8c) */
/* WARNING: Removing unreachable block (ram,0x015ceb98) */
/* WARNING: Removing unreachable block (ram,0x015cebb4) */
/* WARNING: Removing unreachable block (ram,0x015cecec) */
/* WARNING: Removing unreachable block (ram,0x015ced30) */
/* WARNING: Removing unreachable block (ram,0x015ced50) */
/* WARNING: Removing unreachable block (ram,0x015ced60) */
/* WARNING: Removing unreachable block (ram,0x015ced68) */
/* WARNING: Removing unreachable block (ram,0x015cf42c) */
/* WARNING: Removing unreachable block (ram,0x015ced74) */
/* WARNING: Removing unreachable block (ram,0x015ced7c) */
/* WARNING: Removing unreachable block (ram,0x015ced84) */
/* WARNING: Removing unreachable block (ram,0x015ced94) */
/* WARNING: Removing unreachable block (ram,0x015ceda8) */
/* WARNING: Removing unreachable block (ram,0x015ceddc) */
/* WARNING: Removing unreachable block (ram,0x015cede4) */
/* WARNING: Removing unreachable block (ram,0x015cede8) */
/* WARNING: Removing unreachable block (ram,0x015cee04) */
/* WARNING: Removing unreachable block (ram,0x015cee1c) */
/* WARNING: Removing unreachable block (ram,0x015cee34) */
/* WARNING: Removing unreachable block (ram,0x015cee48) */
/* WARNING: Removing unreachable block (ram,0x015cf41c) */
/* WARNING: Removing unreachable block (ram,0x015cee50) */
/* WARNING: Removing unreachable block (ram,0x015cee54) */
/* WARNING: Removing unreachable block (ram,0x015cee88) */
/* WARNING: Removing unreachable block (ram,0x015cee8c) */
/* WARNING: Removing unreachable block (ram,0x015cee90) */
/* WARNING: Removing unreachable block (ram,0x015cee94) */
/* WARNING: Removing unreachable block (ram,0x015cee98) */
/* WARNING: Removing unreachable block (ram,0x015cee9c) */
/* WARNING: Removing unreachable block (ram,0x015ceea0) */
/* WARNING: Removing unreachable block (ram,0x015ceeb0) */
/* WARNING: Removing unreachable block (ram,0x015ceec8) */
/* WARNING: Removing unreachable block (ram,0x015ceedc) */
/* WARNING: Removing unreachable block (ram,0x015ceee4) */
/* WARNING: Removing unreachable block (ram,0x015ceee8) */
/* WARNING: Removing unreachable block (ram,0x015cef44) */
/* WARNING: Removing unreachable block (ram,0x015cef48) */
/* WARNING: Removing unreachable block (ram,0x015cef4c) */
/* WARNING: Removing unreachable block (ram,0x015cef50) */
/* WARNING: Removing unreachable block (ram,0x015cef54) */
/* WARNING: Removing unreachable block (ram,0x015cef58) */
/* WARNING: Removing unreachable block (ram,0x015cef5c) */
/* WARNING: Removing unreachable block (ram,0x015cef68) */
/* WARNING: Removing unreachable block (ram,0x015cef74) */
/* WARNING: Removing unreachable block (ram,0x015cf294) */
/* WARNING: Removing unreachable block (ram,0x015cef80) */
/* WARNING: Removing unreachable block (ram,0x015cef88) */
/* WARNING: Removing unreachable block (ram,0x015cef94) */
/* WARNING: Removing unreachable block (ram,0x015cefa0) */
/* WARNING: Removing unreachable block (ram,0x015cefac) */
/* WARNING: Removing unreachable block (ram,0x015cefcc) */
/* WARNING: Removing unreachable block (ram,0x015cefd4) */
/* WARNING: Removing unreachable block (ram,0x015cefe8) */
/* WARNING: Removing unreachable block (ram,0x015cefec) */
/* WARNING: Removing unreachable block (ram,0x015ceff4) */
/* WARNING: Removing unreachable block (ram,0x015cf020) */
/* WARNING: Removing unreachable block (ram,0x015cf024) */
/* WARNING: Removing unreachable block (ram,0x015cf030) */
/* WARNING: Removing unreachable block (ram,0x015cf3e8) */
/* WARNING: Removing unreachable block (ram,0x015cf3f0) */
/* WARNING: Removing unreachable block (ram,0x015cf03c) */
/* WARNING: Removing unreachable block (ram,0x015cf048) */
/* WARNING: Removing unreachable block (ram,0x015cf060) */
/* WARNING: Removing unreachable block (ram,0x015cf074) */
/* WARNING: Removing unreachable block (ram,0x015cf07c) */
/* WARNING: Removing unreachable block (ram,0x015cf080) */
/* WARNING: Removing unreachable block (ram,0x015cf0c0) */
/* WARNING: Removing unreachable block (ram,0x015cf0c4) */
/* WARNING: Removing unreachable block (ram,0x015cf0c8) */
/* WARNING: Removing unreachable block (ram,0x015cf0cc) */
/* WARNING: Removing unreachable block (ram,0x015cf0d0) */
/* WARNING: Removing unreachable block (ram,0x015cf0d4) */
/* WARNING: Removing unreachable block (ram,0x015cf120) */
/* WARNING: Removing unreachable block (ram,0x015cf124) */
/* WARNING: Removing unreachable block (ram,0x015cf128) */
/* WARNING: Removing unreachable block (ram,0x015cf12c) */
/* WARNING: Removing unreachable block (ram,0x015cf130) */
/* WARNING: Removing unreachable block (ram,0x015cf1f0) */
/* WARNING: Removing unreachable block (ram,0x015cf134) */
/* WARNING: Removing unreachable block (ram,0x015cf17c) */
/* WARNING: Removing unreachable block (ram,0x015cf180) */
/* WARNING: Removing unreachable block (ram,0x015cf19c) */
/* WARNING: Removing unreachable block (ram,0x015cf1a8) */
/* WARNING: Removing unreachable block (ram,0x015cf1b4) */
/* WARNING: Removing unreachable block (ram,0x015cf1c0) */
/* WARNING: Removing unreachable block (ram,0x015cf1cc) */
/* WARNING: Removing unreachable block (ram,0x015cf1d0) */
/* WARNING: Removing unreachable block (ram,0x015cf1ec) */
/* WARNING: Removing unreachable block (ram,0x015cf29c) */
/* WARNING: Removing unreachable block (ram,0x015cf2a8) */
/* WARNING: Removing unreachable block (ram,0x015cf2b0) */
/* WARNING: Removing unreachable block (ram,0x015cf2bc) */
/* WARNING: Removing unreachable block (ram,0x015cf2c4) */
/* WARNING: Removing unreachable block (ram,0x015cf2d0) */
/* WARNING: Removing unreachable block (ram,0x015cf2dc) */
/* WARNING: Removing unreachable block (ram,0x015cf2e8) */
/* WARNING: Removing unreachable block (ram,0x015cf37c) */
/* WARNING: Removing unreachable block (ram,0x015cf384) */
/* WARNING: Removing unreachable block (ram,0x015cf38c) */
/* WARNING: Removing unreachable block (ram,0x015cf3a0) */
/* WARNING: Removing unreachable block (ram,0x015cf3ac) */
/* WARNING: Removing unreachable block (ram,0x015cf3b8) */
/* WARNING: Removing unreachable block (ram,0x015cf3c4) */
/* WARNING: Removing unreachable block (ram,0x015cf2fc) */
/* WARNING: Removing unreachable block (ram,0x015cf304) */
/* WARNING: Removing unreachable block (ram,0x015cf314) */
/* WARNING: Removing unreachable block (ram,0x015cf320) */
/* WARNING: Removing unreachable block (ram,0x015cf328) */
/* WARNING: Removing unreachable block (ram,0x015cf338) */
/* WARNING: Removing unreachable block (ram,0x015cf340) */
/* WARNING: Removing unreachable block (ram,0x015cf350) */
/* WARNING: Removing unreachable block (ram,0x015cf35c) */
/* WARNING: Removing unreachable block (ram,0x015cf368) */
/* WARNING: Removing unreachable block (ram,0x015cf374) */
/* WARNING: Removing unreachable block (ram,0x015cf3c8) */
/* WARNING: Removing unreachable block (ram,0x015cf3d4) */
/* WARNING: Removing unreachable block (ram,0x015cf3e4) */
/* WARNING: Removing unreachable block (ram,0x015cf028) */
/* WARNING: Removing unreachable block (ram,0x015cf1f8) */
/* WARNING: Removing unreachable block (ram,0x015cf200) */
/* WARNING: Removing unreachable block (ram,0x015cf20c) */
/* WARNING: Removing unreachable block (ram,0x015cf218) */
/* WARNING: Removing unreachable block (ram,0x015cf224) */
/* WARNING: Removing unreachable block (ram,0x015cf248) */
/* WARNING: Removing unreachable block (ram,0x015cf254) */
/* WARNING: Removing unreachable block (ram,0x015cf260) */
/* WARNING: Removing unreachable block (ram,0x015cf26c) */
/* WARNING: Removing unreachable block (ram,0x015cf280) */
/* WARNING: Removing unreachable block (ram,0x015cf290) */
/* WARNING: Removing unreachable block (ram,0x015cedec) */
/* WARNING: Removing unreachable block (ram,0x015cedf4) */
/* WARNING: Removing unreachable block (ram,0x015cf400) */
/* WARNING: Removing unreachable block (ram,0x015cf40c) */
/* WARNING: Removing unreachable block (ram,0x015cf418) */
/* WARNING: Removing unreachable block (ram,0x015cf45c) */
/* WARNING: Removing unreachable block (ram,0x015cee00) */
/* WARNING: Removing unreachable block (ram,0x015cf460) */
/* WARNING: Removing unreachable block (ram,0x015cf470) */
/* WARNING: Removing unreachable block (ram,0x015cf494) */
/* WARNING: Removing unreachable block (ram,0x015cf4cc) */
/* WARNING: Removing unreachable block (ram,0x015cf4d8) */
/* WARNING: Removing unreachable block (ram,0x015cf4e0) */
/* WARNING: Removing unreachable block (ram,0x015cf500) */
/* WARNING: Removing unreachable block (ram,0x015cf508) */
/* WARNING: Removing unreachable block (ram,0x015cf50c) */
/* WARNING: Removing unreachable block (ram,0x015cf534) */
/* WARNING: Removing unreachable block (ram,0x015cf538) */
/* WARNING: Removing unreachable block (ram,0x015cf548) */
/* WARNING: Removing unreachable block (ram,0x015cf590) */
/* WARNING: Removing unreachable block (ram,0x015cf594) */
/* WARNING: Removing unreachable block (ram,0x015cf5a0) */
/* WARNING: Removing unreachable block (ram,0x015cf5a8) */
/* WARNING: Removing unreachable block (ram,0x015cf5b0) */
/* WARNING: Removing unreachable block (ram,0x015cf5c0) */
/* WARNING: Removing unreachable block (ram,0x015cf5d8) */
/* WARNING: Removing unreachable block (ram,0x015cf604) */
/* WARNING: Removing unreachable block (ram,0x015cf618) */
/* WARNING: Removing unreachable block (ram,0x015cf64c) */
/* WARNING: Removing unreachable block (ram,0x015cf680) */
/* WARNING: Removing unreachable block (ram,0x015cf6dc) */
/* WARNING: Removing unreachable block (ram,0x015cf6ec) */
/* WARNING: Removing unreachable block (ram,0x015cf708) */
/* WARNING: Removing unreachable block (ram,0x015cf74c) */
/* WARNING: Removing unreachable block (ram,0x015cf7c8) */
/* WARNING: Removing unreachable block (ram,0x015cf75c) */
/* WARNING: Removing unreachable block (ram,0x015cf844) */
/* WARNING: Removing unreachable block (ram,0x015cf764) */
/* WARNING: Removing unreachable block (ram,0x015cf84c) */
/* WARNING: Removing unreachable block (ram,0x015cf778) */
/* WARNING: Removing unreachable block (ram,0x015cf834) */
/* WARNING: Removing unreachable block (ram,0x015cf780) */
/* WARNING: Removing unreachable block (ram,0x015cf83c) */
/* WARNING: Removing unreachable block (ram,0x015cf78c) */
/* WARNING: Removing unreachable block (ram,0x015cf82c) */
/* WARNING: Removing unreachable block (ram,0x015cf7a0) */
/* WARNING: Removing unreachable block (ram,0x015cf7ac) */
/* WARNING: Removing unreachable block (ram,0x015cf7b0) */
/* WARNING: Removing unreachable block (ram,0x015cf854) */
/* WARNING: Removing unreachable block (ram,0x015cf858) */
/* WARNING: Removing unreachable block (ram,0x015cf7b8) */
/* WARNING: Removing unreachable block (ram,0x015cf634) */
/* WARNING: Removing unreachable block (ram,0x015cf520) */
/* WARNING: Removing unreachable block (ram,0x015cf7dc) */
/* WARNING: Removing unreachable block (ram,0x015cf7e8) */
/* WARNING: Removing unreachable block (ram,0x015cf7f0) */
/* WARNING: Removing unreachable block (ram,0x015cf7f4) */
/* WARNING: Removing unreachable block (ram,0x015cf85c) */
/* WARNING: Removing unreachable block (ram,0x015cf884) */
/* WARNING: Removing unreachable block (ram,0x015cf88c) */
/* WARNING: Removing unreachable block (ram,0x015cf7d4) */
/* WARNING: Removing unreachable block (ram,0x015cf8a8) */
/* WARNING: Removing unreachable block (ram,0x015cf8b4) */
/* WARNING: Removing unreachable block (ram,0x015cf8b8) */
/* WARNING: Removing unreachable block (ram,0x015cf8dc) */
/* WARNING: Removing unreachable block (ram,0x015cf908) */
/* WARNING: Removing unreachable block (ram,0x015cf910) */
/* WARNING: Removing unreachable block (ram,0x015cf930) */
/* WARNING: Removing unreachable block (ram,0x015cf93c) */
/* WARNING: Removing unreachable block (ram,0x015cf94c) */
/* WARNING: Removing unreachable block (ram,0x015cf95c) */
/* WARNING: Removing unreachable block (ram,0x015cf964) */
/* WARNING: Removing unreachable block (ram,0x015cf978) */
/* WARNING: Removing unreachable block (ram,0x015cf984) */
/* WARNING: Removing unreachable block (ram,0x015cf994) */
/* WARNING: Removing unreachable block (ram,0x015cf99c) */
/* WARNING: Removing unreachable block (ram,0x015cf9f4) */
/* WARNING: Removing unreachable block (ram,0x015cfa04) */
/* WARNING: Removing unreachable block (ram,0x015cf9a8) */
/* WARNING: Removing unreachable block (ram,0x015cf9b0) */
/* WARNING: Removing unreachable block (ram,0x015cf9bc) */
/* WARNING: Removing unreachable block (ram,0x015cf9c8) */
/* WARNING: Removing unreachable block (ram,0x015cf9d4) */
/* WARNING: Removing unreachable block (ram,0x015cf9f0) */
/* WARNING: Removing unreachable block (ram,0x015cfa18) */
/* WARNING: Removing unreachable block (ram,0x015cfa1c) */
/* WARNING: Removing unreachable block (ram,0x015cfa20) */
/* WARNING: Removing unreachable block (ram,0x015cfa28) */
/* WARNING: Removing unreachable block (ram,0x015cf80c) */

void Atlas_Gameplay_Kart_KartManager__Update(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000003eb5340 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb5340 = 1;
  }
  if ((bRam0000000003eb534c & 1) == 0) {
    func_0x00f78a20(0x3d57f88);
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d3ae38);
    bRam0000000003eb534c = 1;
  }
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar5 = *(long *)(param_1 + 0x10);
    puVar2 = (undefined8 *)0x3eb5000;
    if (lVar5 != 0) {
      lVar3 = 0;
      lVar4 = 0;
      puVar1 = (undefined8 *)0x3d57f88;
      do {
        puVar2 = puVar1;
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)(uint)lVar4) goto code_r0x015cecb8;
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + lVar4 * 8 + 0x20);
        if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)) break;
        uVar6 = *(undefined4 *)(lVar5 + 0x2d8);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x78) + lVar3);
        *puVar2 = *(undefined8 *)(lVar5 + 0x2d0);
        *(undefined4 *)(puVar2 + 1) = uVar6;
        *(undefined4 *)((long)puVar2 + 0xc) = 0x3f800000;
        lVar5 = *(long *)(param_1 + 0x10);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
        puVar2 = (undefined8 *)0x3d57f88;
      } while (lVar5 != 0);
    }
    func_0x00f78af4();
code_r0x015cecb8:
    uStack_88 = *(undefined8 *)(param_1 + 0x80);
    uStack_90 = *(undefined8 *)(param_1 + 0x78);
    uStack_80 = *(undefined8 *)(param_1 + 0x88);
    uStack_78 = *(undefined8 *)(param_1 + 0x90);
    /*Unity.Jobs.IJobExtensions$$Run<DistanceArrayJob>*/ func_0x0185e578(&uStack_90,*puVar2);
  }
  return;
}



// ============================================================
// RVA: 0x15cebd8 | Atlas.Gameplay.Kart.KartManager.UpdateDistanceMatrix
// ============================================================

void Atlas_Gameplay_Kart_KartManager__UpdateDistanceMatrix(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb534c & 1) == 0) {
    func_0x00f78a20(0x3d57f88);
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d3ae38);
    bRam0000000003eb534c = 1;
  }
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar5 = *(long *)(param_1 + 0x10);
    puVar2 = (undefined8 *)0x3eb5000;
    if (lVar5 != 0) {
      lVar3 = 0;
      lVar4 = 0;
      puVar1 = (undefined8 *)0x3d57f88;
      do {
        puVar2 = puVar1;
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)(uint)lVar4) goto LAB_015cecb8;
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + lVar4 * 8 + 0x20);
        if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)) break;
        uVar6 = *(undefined4 *)(lVar5 + 0x2d8);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x78) + lVar3);
        *puVar2 = *(undefined8 *)(lVar5 + 0x2d0);
        *(undefined4 *)(puVar2 + 1) = uVar6;
        *(undefined4 *)((long)puVar2 + 0xc) = 0x3f800000;
        lVar5 = *(long *)(param_1 + 0x10);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
        puVar2 = (undefined8 *)0x3d57f88;
      } while (lVar5 != 0);
    }
    func_0x00f78af4();
LAB_015cecb8:
    uStack_58 = *(undefined8 *)(param_1 + 0x80);
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    uStack_50 = *(undefined8 *)(param_1 + 0x88);
    uStack_48 = *(undefined8 *)(param_1 + 0x90);
    /*Unity.Jobs.IJobExtensions$$Run<DistanceArrayJob>*/ func_0x0185e578(&uStack_60,*puVar2);
  }
  return;
}



// ============================================================
// RVA: 0x15cecec | Atlas.Gameplay.Kart.KartManager.UpdateContextualEvents
// ============================================================

/* WARNING: Possible PIC construction at 0x015cf7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cf7dc) */
/* WARNING: Removing unreachable block (ram,0x015cf7e8) */
/* WARNING: Removing unreachable block (ram,0x015cf7f0) */
/* WARNING: Removing unreachable block (ram,0x015cf7f4) */
/* WARNING: Removing unreachable block (ram,0x015cf80c) */

ulong Atlas_Gameplay_Kart_KartManager__UpdateContextualEvents
                (float param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int extraout_w1;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x21;
  long unaff_x22;
  uint uVar13;
  ulong unaff_x23;
  ulong unaff_x24;
  long lVar14;
  long lVar15;
  float fVar16;
  float extraout_s0;
  float fVar17;
  float fVar18;
  float extraout_s0_00;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  ulong uStack_210;
  ulong uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 ***pppuStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  undefined1 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined4 uStack_1a0;
  float fStack_19c;
  float fStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined4 uStack_b0;
  
  uVar3 = param_4;
  fStack_134 = param_1;
  if ((bRam0000000003eb534e & 1) == 0) {
    func_0x00f78a20(0x3d3ae30);
    uVar3 = func_0x00f78a20(0x3d3ae38);
    bRam0000000003eb534e = 1;
  }
  fVar23 = (float)param_2;
  fVar16 = (float)param_3;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uVar12 = *(ulong *)(param_4 + 0x10);
  if (uVar12 != 0) {
    unaff_x23 = 0;
    do {
      fVar23 = (float)param_2;
      fVar16 = (float)param_3;
      uVar13 = (uint)unaff_x23;
      if ((int)*(uint *)(uVar12 + 0x18) <= (int)uVar13) {
        return uVar3;
      }
      if (*(uint *)(uVar12 + 0x18) <= uVar13) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      unaff_x21 = *(long *)(*(long *)(uVar12 + 0x10) + (long)(int)uVar13 * 8 + 0x20);
      if (unaff_x21 == 0) break;
      unaff_x22 = *(long *)(param_4 + 0x38);
      Atlas_Gameplay_Kart_KartComposite__get_CurrentShadingParams(&uStack_e8,unaff_x21);
      if (unaff_x22 == 0) break;
      uStack_118 = uStack_e0;
      uStack_120 = uStack_e8;
      uStack_108 = uStack_d0;
      uStack_110 = uStack_d8;
      uStack_f8 = uStack_c0;
      uStack_100 = uStack_c8;
      param_2 = uStack_c8;
      param_3 = uStack_d8;
      uVar3 = /*Atlas.Lighting.LightWorld$$OverrideMemberCelShading*/ func_0x01486230(*(undefined4 *)(unaff_x21 + 0xec),unaff_x22,unaff_x21,&uStack_120,0);
      fVar23 = (float)param_2;
      fVar16 = (float)param_3;
      lVar14 = *(long *)(unaff_x21 + 0x10);
      if (lVar14 == 0) break;
      lVar15 = (long)(int)uVar13;
      if (24.0 <= *(float *)(lVar14 + 0x194)) {
        fVar21 = *(float *)(lVar14 + 0x294);
        fVar22 = *(float *)(lVar14 + 0x298);
        fVar23 = *(float *)(lVar14 + 0x29c);
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        if (((*(ushort *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0x132) >> 10 & 1) == 0) ||
           (*(int *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0xe0) != 0)) {
          cVar9 = '\x01';
        }
        else {
          func_0x00f78ad0();
          cVar9 = cRam0000000003ca34fc;
        }
        fVar16 = fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22;
        fVar19 = 1.0 / SQRT(fVar16);
        fVar21 = fVar21 * fVar19;
        fVar22 = fVar22 * fVar19;
        fStack_124 = fVar23 * fVar19;
        if (fVar16 <= 1.1754944e-38) {
          fVar22 = 0.0;
          fVar21 = 0.0;
          fStack_124 = 0.0;
        }
        fVar16 = *(float *)(lVar14 + 0x2c4);
        fVar23 = *(float *)(lVar14 + 0x2c8);
        fVar19 = *(float *)(lVar14 + 0x2cc);
        if (cVar9 == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        uVar3 = /*System.Math_TypeInfo*/ uRam0000000003d232c0;
        if (((*(ushort *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0xe0) == 0)) {
          uVar3 = func_0x00f78ad0();
        }
        fStack_128 = fVar21 * fVar23 - fVar22 * fVar16;
        fVar23 = fVar22 * fVar19 - fStack_124 * fVar23;
        fVar16 = fStack_124 * fVar16 - fVar21 * fVar19;
        fVar19 = fStack_128 * fStack_128 + fVar23 * fVar23 + fVar16 * fVar16;
        fVar20 = 1.0 / SQRT(fVar19);
        fVar23 = fVar23 * fVar20;
        param_2 = (ulong)(uint)fVar23;
        fVar16 = fVar16 * fVar20;
        param_3 = (ulong)(uint)fVar16;
        fStack_128 = fStack_128 * fVar20;
        fStack_130 = fVar23;
        fStack_12c = fVar16;
        if (fVar19 <= 1.1754944e-38) {
          fStack_128 = 0.0;
          fStack_12c = 0.0;
          fStack_130 = 0.0;
        }
        unaff_x22 = *(long *)(param_4 + 0x10);
        if (unaff_x22 == 0) break;
        lVar6 = 0;
        uVar5 = 0;
        unaff_x24 = 0;
        while( true ) {
          fVar23 = (float)param_2;
          fVar16 = (float)param_3;
          if ((long)(int)*(uint *)(unaff_x22 + 0x18) <= (long)uVar5) break;
          lVar11 = *(long *)(param_4 + 0x70);
          if (lVar11 == 0) goto LAB_015cf45c;
          if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_015cf460;
          lVar11 = *(long *)(lVar11 + lVar15 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_015cf45c;
          if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_015cf460;
          uVar12 = *(ulong *)(lVar11 + lVar6 + 0x20);
          uStack_b0 = *(undefined4 *)(lVar11 + lVar6 + 0x28);
          uStack_b8 = uVar12;
          if (*(uint *)(unaff_x22 + 0x18) <= uVar5) {
            uVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          fVar23 = (float)param_2;
          fVar16 = (float)param_3;
          unaff_x22 = *(long *)(*(long *)(unaff_x22 + 0x10) + uVar5 * 8 + 0x20);
          if (unaff_x22 != unaff_x21) {
            if ((unaff_x22 == 0) || (lVar11 = *(long *)(unaff_x22 + 0x10), lVar11 == 0))
            goto LAB_015cf45c;
            fVar16 = *(float *)(lVar11 + 0x2d0);
            fVar19 = *(float *)(lVar11 + 0x2d4);
            fVar23 = *(float *)(lVar11 + 0x2d8);
            fVar20 = *(float *)(lVar14 + 0x2d0);
            fVar24 = *(float *)(lVar14 + 0x2d4);
            fVar25 = *(float *)(lVar14 + 0x2d8);
            uVar3 = /*Atlas.Gameplay.Kart.KartManager$$GetKartToKartDistance*/ func_0x015d01cc(param_4,unaff_x21,unaff_x22);
            param_2 = 0x40a00000;
            if (extraout_s0 <= 5.0) {
              uVar10 = (int)unaff_x24 + 1;
              unaff_x24 = (ulong)uVar10;
              if (2 < (int)uVar10) goto code_r0x015cf3e8;
              if (cRam0000000003ca34fc == '\0') {
                func_0x00f78a20(0x3d232c0);
                cRam0000000003ca34fc = '\x01';
              }
              if (((*(ushort *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Math_TypeInfo*/ uRam0000000003d232c0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              fVar16 = fVar16 - fVar20;
              fVar19 = fVar19 - fVar24;
              fVar23 = fVar23 - fVar25;
              fVar20 = fVar23 * fVar23 + fVar16 * fVar16 + fVar19 * fVar19;
              fVar24 = 1.0 / SQRT(fVar20);
              fVar16 = fVar16 * fVar24;
              fVar19 = fVar19 * fVar24;
              fVar23 = fVar23 * fVar24;
              if (fVar20 <= 1.1754944e-38) {
                fVar23 = 0.0;
                fVar19 = 0.0;
                fVar16 = 0.0;
              }
              fVar20 = fVar19;
              fVar24 = fVar23;
              fVar17 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar16,0);
              param_3 = (ulong)(uint)fStack_124;
              fVar25 = fVar22;
              fVar18 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar21,0);
              fVar20 = fVar24 * (float)param_3 + fVar17 * fVar18 + fVar20 * fVar25;
              fVar24 = *(float *)(param_4 + 0x60);
              if ((fVar20 < fVar24) && (fVar24 = *(float *)(param_4 + 100), fVar24 < fVar20)) {
                fVar24 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar16,0);
                param_3 = (ulong)(uint)fStack_128;
                fVar20 = fStack_12c;
                uVar3 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fStack_130,0);
                fVar16 = (float)param_3;
                fVar23 = fVar23 * fVar16;
                uStack_b8 = (ulong)CONCAT14(fVar23 + fVar24 * extraout_s0_00 + fVar19 * fVar20 <=
                                            0.0,(float)uVar12 + fStack_134);
                lVar11 = *(long *)(param_4 + 0x70);
                if (lVar11 != 0) {
                  if (uVar13 < *(uint *)(lVar11 + 0x18)) {
                    lVar11 = *(long *)(lVar11 + lVar15 * 8 + 0x20);
                    if (lVar11 != 0) {
                      if (uVar5 < *(uint *)(lVar11 + 0x18)) {
                        lVar11 = lVar11 + lVar6;
                        param_2 = 0x40000000;
                        bVar2 = *(float *)(lVar11 + 0x20) < 2.0;
                        uStack_b0 = CONCAT31(uStack_b0._1_3_,!bVar2);
                        *(ulong *)(lVar11 + 0x20) = uStack_b8;
                        *(undefined4 *)(lVar11 + 0x28) = uStack_b0;
                        if (bVar2) goto code_r0x015cf280;
                        goto code_r0x015cf29c;
                      }
                      goto LAB_015cf460;
                    }
                    goto LAB_015cf45c;
                  }
                  goto LAB_015cf460;
                }
                goto LAB_015cf45c;
              }
              param_2 = (ulong)(uint)fVar24;
              uStack_b8 = 0x200000000;
            }
            else {
              uStack_b8 = uStack_b8 & 0xffffffff00000000;
            }
            fVar23 = (float)param_2;
            fVar16 = (float)param_3;
            lVar11 = *(long *)(param_4 + 0x70);
            if (lVar11 == 0) goto LAB_015cf45c;
            if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_015cf460;
            lVar11 = *(long *)(lVar11 + lVar15 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_015cf45c;
            if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_015cf460;
            uVar3 = /*Atlas.Gameplay.Kart.KartManager$$CanPlayOvertakeAnimations*/ func_0x015d092c(*(undefined4 *)(lVar11 + lVar6 + 0x20),param_4,unaff_x21,
                                    unaff_x22);
            fVar23 = (float)param_2;
            fVar16 = (float)param_3;
            uStack_b0._0_2_ = CONCAT11((char)uVar3,(undefined1)uStack_b0);
            lVar11 = *(long *)(param_4 + 0x70);
            if (lVar11 == 0) goto LAB_015cf45c;
            if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_015cf460;
            lVar11 = *(long *)(lVar11 + lVar15 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_015cf45c;
            if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_015cf460;
            *(ulong *)(lVar11 + lVar6 + 0x20) = uStack_b8;
            *(undefined4 *)(lVar11 + lVar6 + 0x28) = uStack_b0;
          }
code_r0x015cf280:
          fVar23 = (float)param_2;
          fVar16 = (float)param_3;
          uVar5 = uVar5 + 1;
          unaff_x22 = *(long *)(param_4 + 0x10);
          lVar6 = lVar6 + 0xc;
          if (unaff_x22 == 0) goto LAB_015cf45c;
        }
        if (2 < (int)unaff_x24) {
code_r0x015cf3e8:
          fVar23 = (float)param_2;
          fVar16 = (float)param_3;
          lVar14 = *(long *)(param_4 + 0x70);
          if (lVar14 != 0) {
            if (uVar13 < *(uint *)(lVar14 + 0x18)) goto LAB_015cf400;
            goto LAB_015cf460;
          }
          break;
        }
code_r0x015cf29c:
        fVar23 = (float)param_2;
        fVar16 = (float)param_3;
        lVar14 = *(long *)(param_4 + 0x10);
        if (lVar14 == 0) break;
        unaff_x22 = 0;
        unaff_x24 = 0;
        while( true ) {
          fVar23 = (float)param_2;
          fVar16 = (float)param_3;
          if ((long)*(int *)(lVar14 + 0x18) <= (long)unaff_x24) break;
          lVar14 = *(long *)(param_4 + 0x70);
          if (lVar14 == 0) goto LAB_015cf45c;
          if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_015cf460;
          lVar14 = *(long *)(lVar14 + lVar15 * 8 + 0x20);
          if (lVar14 == 0) goto LAB_015cf45c;
          if (*(uint *)(lVar14 + 0x18) <= unaff_x24) goto LAB_015cf460;
          uVar12 = *(ulong *)(lVar14 + unaff_x22 + 0x20);
          uVar10 = *(uint *)(lVar14 + unaff_x22 + 0x28);
          if ((uVar10 & 0xff00) == 0) {
            if ((uVar10 & 0xff) != 0) {
              if (*(long *)(unaff_x21 + 0x30) != 0) {
                uVar3 = /*Atlas.Gameplay.Kart.KartVisualAnimation$$PlaySideSneer*/ func_0x015e6aa4(*(long *)(unaff_x21 + 0x30),uVar12 >> 0x20,0);
                fVar23 = (float)param_2;
                fVar16 = (float)param_3;
                lVar14 = *(long *)(param_4 + 0x70);
                if (lVar14 != 0) {
                  if (uVar13 < *(uint *)(lVar14 + 0x18)) {
                    lVar14 = *(long *)(lVar14 + lVar15 * 8 + 0x20);
                    if (lVar14 != 0) {
                      if (unaff_x24 < *(uint *)(lVar14 + 0x18)) {
                        uVar10 = uVar10 & 0xffffff00;
                        goto code_r0x015cf3c8;
                      }
                      goto LAB_015cf460;
                    }
                    goto LAB_015cf45c;
                  }
                  goto LAB_015cf460;
                }
              }
              goto LAB_015cf45c;
            }
          }
          else {
            if (*(long *)(unaff_x21 + 0x30) == 0) goto LAB_015cf45c;
            /*Atlas.Gameplay.Kart.KartVisualAnimation$$PlayOvertaking*/ func_0x015e6b84(*(long *)(unaff_x21 + 0x30),0);
            fVar23 = (float)param_2;
            fVar16 = (float)param_3;
            lVar14 = *(long *)(param_4 + 0x10);
            if (lVar14 == 0) goto LAB_015cf45c;
            if (*(uint *)(lVar14 + 0x18) <= unaff_x24) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            fVar23 = (float)param_2;
            fVar16 = (float)param_3;
            lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + unaff_x24 * 8 + 0x20);
            if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x30), lVar14 == 0))
            goto LAB_015cf45c;
            uVar3 = /*Atlas.Gameplay.Kart.KartVisualAnimation$$PlayOvertaken*/ func_0x015e6b28(lVar14,0);
            fVar23 = (float)param_2;
            fVar16 = (float)param_3;
            lVar14 = *(long *)(param_4 + 0x70);
            if (lVar14 == 0) goto LAB_015cf45c;
            if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_015cf460;
            lVar14 = *(long *)(lVar14 + lVar15 * 8 + 0x20);
            if (lVar14 == 0) goto LAB_015cf45c;
            if (*(uint *)(lVar14 + 0x18) <= unaff_x24) goto LAB_015cf460;
            uVar10 = uVar10 & 0xffff00ff;
code_r0x015cf3c8:
            *(ulong *)(lVar14 + unaff_x22 + 0x20) = uVar12;
            *(uint *)(lVar14 + unaff_x22 + 0x28) = uVar10;
          }
          fVar23 = (float)param_2;
          fVar16 = (float)param_3;
          unaff_x24 = unaff_x24 + 1;
          lVar14 = *(long *)(param_4 + 0x10);
          unaff_x22 = unaff_x22 + 0xc;
          if (lVar14 == 0) goto LAB_015cf45c;
        }
      }
      else {
        lVar14 = *(long *)(param_4 + 0x70);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_015cf460;
LAB_015cf400:
        uVar3 = /*Atlas.Gameplay.Kart.KartManager$$ResetAllKartSideOnTimePairings*/ func_0x015d08c8(uVar3,lVar14 + lVar15 * 8 + 0x20);
      }
      fVar23 = (float)param_2;
      fVar16 = (float)param_3;
      unaff_x23 = (ulong)(uVar13 + 1);
      uVar12 = *(ulong *)(param_4 + 0x10);
    } while (uVar12 != 0);
  }
LAB_015cf45c:
  func_0x00f78af4();
LAB_015cf460:
  uVar4 = func_0x00f78b24();
  uVar5 = func_0x00f78ac0(uVar4,0);
  puStack_148 = &Atlas_Gameplay_Kart_KartManager__PreLateUpdate;
  lVar14 = 0x3eb5000;
  uVar3 = uVar5;
  lStack_170 = unaff_x22;
  lStack_168 = unaff_x21;
  uStack_160 = uVar12;
  uStack_158 = param_4;
  puStack_150 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb534d & 1) == 0) {
    func_0x00f78a20(0x3d57f90);
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d3ae38);
    uVar3 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb534d = 1;
  }
  if (*(int *)(uVar5 + 0xa0) < 1) {
    return uVar3;
  }
  if (*(long *)(uVar5 + 0x40) != 0) {
    unaff_x21 = 0x3d23000;
    lVar14 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(uVar5 + 0x40),0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar14,0,0);
    if ((uVar3 & 1) != 0) {
      return uVar3;
    }
    if ((lVar14 != 0) && (lVar15 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar14,0), lVar15 != 0)) {
      /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar15,0);
      uStack_1a0 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      uStack_188 = *(undefined8 *)(uVar5 + 0x80);
      uStack_190 = *(undefined8 *)(uVar5 + 0x78);
      uStack_180 = *(undefined8 *)(uVar5 + 0x98);
      uStack_178 = *(undefined8 *)(uVar5 + 0xa0);
      uStack_194 = 0;
      fStack_19c = fVar23;
      fStack_198 = fVar16;
      uVar3 = /*Unity.Jobs.IJobExtensions$$Run<DistanceJob>*/ func_0x0185e5e4(&uStack_1a0,uRam0000000003d57f90);
      unaff_x21 = *(long *)(uVar5 + 0x10);
      if (unaff_x21 != 0) {
        lVar14 = 0;
        do {
          if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)(uint)lVar14) {
            return uVar3;
          }
          if (*(uint *)(unaff_x21 + 0x18) <= (uint)lVar14) {
            uVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar15 = *(long *)(*(long *)(unaff_x21 + 0x10) + lVar14 * 8 + 0x20);
          if (lVar15 == 0) break;
          *(undefined4 *)(lVar15 + 0xf4) = *(undefined4 *)(*(long *)(uVar5 + 0x98) + lVar14 * 4);
          unaff_x21 = *(long *)(uVar5 + 0x10);
          lVar14 = lVar14 + 1;
        } while (unaff_x21 != 0);
      }
    }
  }
  uVar4 = func_0x00f78af4();
  puStack_1a8 = &Atlas_Gameplay_Kart_KartManager__WaitOnLoad;
  lStack_1d0 = unaff_x22;
  lStack_1c8 = unaff_x21;
  lStack_1c0 = lVar14;
  uStack_1b8 = uVar5;
  ppuStack_1b0 = &puStack_150;
  if ((bRam0000000003eb5341 & 1) == 0) {
    func_0x00f78a20(0x3d27d08);
    bRam0000000003eb5341 = 1;
  }
  uVar3 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39_TypeInfo*/ uRam0000000003d27d08);
  uVar8 = 0;
  /*Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39$$.ctor*/ func_0x015555b8(uVar3,0);
  if (uVar3 != 0) {
    *(undefined8 *)(uVar3 + 0x20) = uVar4;
    return uVar3;
  }
  auVar26 = func_0x00f78af4();
  lVar14 = auVar26._0_8_;
  uStack_1f8 = 0x3d27d08;
  puStack_1d8 = &Atlas_Gameplay_Kart_KartManager__InitKarts;
  uStack_210 = unaff_x24;
  uStack_208 = unaff_x23;
  lStack_200 = unaff_x22;
  uStack_1f0 = uVar3;
  uStack_1e8 = uVar4;
  pppuStack_1e0 = &ppuStack_1b0;
  if ((bRam0000000003eb5342 & 1) == 0) {
    func_0x00f78a20(0x3d43370);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d3ae30);
    bRam0000000003eb5342 = 1;
  }
  uStack_230 = 0;
  uStack_228 = 0;
  lStack_220 = 0;
  if (*(long *)(lVar14 + 0x18) != 0) {
    Atlas_Gameplay_Kart_KartCompositeFactory__CreateRequestedKartComposites
              (*(long *)(lVar14 + 0x18),*(undefined8 *)(lVar14 + 0x10),auVar26._8_8_,uVar8,
               *(undefined8 *)(lVar14 + 0x20));
    if (*(long *)(lVar14 + 0x10) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_248,*(long *)(lVar14 + 0x10),uRam0000000003d3ae20);
      uStack_228 = uStack_240;
      uStack_230 = uStack_248;
      lStack_220 = lStack_238;
      while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_230,uRam0000000003d328d0), lVar15 = lStack_220,
            (uVar3 & 1) != 0) {
        if (*(long *)(lVar14 + 0x28) == 0) {
          func_0x00f78af4();
code_r0x015cf858:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15cf85c);
          (*pcVar1)();
        }
        /*Core.Actors.ActorManager$$TryAddToGroup<object>*/ func_0x0171edb0(*(long *)(lVar14 + 0x28),lStack_220,uRam0000000003d43370);
        if (lVar15 == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        if (*(long *)(lVar15 + 0x18) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar15 + 0x18),0);
        if (lVar6 == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,1,0);
        if (*(long *)(lVar15 + 0x20) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        if (*(int *)(*(long *)(lVar15 + 0x20) + 0x10) == 2) {
          *(long *)(lVar14 + 0x48) = lVar15;
        }
        if (*(long *)(lVar14 + 0x38) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x01486578(*(long *)(lVar14 + 0x38),lVar15,0);
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_230,uRam0000000003d328c8);
      goto code_r0x015cf8b8;
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar15 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_230,uRam0000000003eb5000);
    if (lVar15 == 0) goto code_r0x015cf8b8;
    func_0x00f78ac0(lVar15,0);
  }
  lVar14 = __Unwind_Resume();
code_r0x015cf8b8:
  if ((bRam0000000003eb534b & 1) == 0) {
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d1ecd8);
    func_0x00f78a20(0x3d1f828);
    bRam0000000003eb534b = 1;
  }
  if (*(long *)(lVar14 + 0x10) != 0) {
    uVar3 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[][]_TypeInfo*/ uRam0000000003d1ecd8,*(undefined4 *)(*(long *)(lVar14 + 0x10) + 0x18));
    *(ulong *)(lVar14 + 0x70) = uVar3;
    if (*(long *)(lVar14 + 0x10) != 0) {
      if (0 < *(int *)(*(long *)(lVar14 + 0x10) + 0x18)) {
        uVar12 = 0;
        do {
          plVar7 = *(long **)(lVar14 + 0x70);
          lVar15 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[]_TypeInfo*/ uRam0000000003d1f828);
          if (plVar7 == (long *)0x0) goto code_r0x015cfa18;
          uVar3 = 0;
          if ((lVar15 != 0) &&
             (uVar3 = func_0x00f78adc(lVar15,*(undefined8 *)(*plVar7 + 0x40)), uVar3 == 0))
          goto code_r0x015cfa28;
          if (*(uint *)(plVar7 + 3) <= uVar12) goto code_r0x015cfa1c;
          plVar7[uVar12 + 4] = lVar15;
          lVar15 = *(long *)(lVar14 + 0x10);
          if (lVar15 == 0) goto code_r0x015cfa18;
          lVar6 = 0;
          uVar5 = 0;
          while ((long)uVar5 < (long)*(int *)(lVar15 + 0x18)) {
            lVar15 = *(long *)(lVar14 + 0x70);
            if (lVar15 == 0) goto code_r0x015cfa18;
            if (*(uint *)(lVar15 + 0x18) <= uVar12) goto code_r0x015cfa1c;
            lVar15 = *(long *)(lVar15 + uVar12 * 8 + 0x20);
            if (lVar15 == 0) goto code_r0x015cfa18;
            if (*(uint *)(lVar15 + 0x18) <= uVar5) goto code_r0x015cfa1c;
            lVar15 = lVar15 + lVar6;
            lVar6 = lVar6 + 0xc;
            uVar5 = uVar5 + 1;
            *(undefined8 *)(lVar15 + 0x20) = 0x200000000;
            *(undefined4 *)(lVar15 + 0x28) = 0;
            lVar15 = *(long *)(lVar14 + 0x10);
            if (lVar15 == 0) goto code_r0x015cfa18;
          }
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)*(int *)(lVar15 + 0x18));
      }
      return uVar3;
    }
  }
code_r0x015cfa18:
  func_0x00f78af4();
code_r0x015cfa1c:
  uVar4 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar4,0);
code_r0x015cfa28:
    uVar4 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x15cf46c | Atlas.Gameplay.Kart.KartManager.PreLateUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x015cf7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cf7dc) */
/* WARNING: Removing unreachable block (ram,0x015cf7e8) */
/* WARNING: Removing unreachable block (ram,0x015cf7f0) */
/* WARNING: Removing unreachable block (ram,0x015cf7f4) */
/* WARNING: Removing unreachable block (ram,0x015cf80c) */

ulong Atlas_Gameplay_Kart_KartManager__PreLateUpdate
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int extraout_w1;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_4;
  if ((bRam0000000003eb534d & 1) == 0) {
    func_0x00f78a20(0x3d57f90);
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d3ae38);
    uVar2 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb534d = 1;
  }
  if (*(int *)(param_4 + 0xa0) < 1) {
    return uVar2;
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    lVar3 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(param_4 + 0x40),0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      return uVar2;
    }
    if ((lVar3 != 0) && (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0), lVar3 != 0)) {
      /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar3,0);
      uStack_60 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      uStack_48 = *(undefined8 *)(param_4 + 0x80);
      uStack_50 = *(undefined8 *)(param_4 + 0x78);
      uStack_40 = *(undefined8 *)(param_4 + 0x98);
      uStack_38 = *(undefined8 *)(param_4 + 0xa0);
      uStack_54 = 0;
      uStack_5c = param_2;
      uStack_58 = param_3;
      uVar2 = /*Unity.Jobs.IJobExtensions$$Run<DistanceJob>*/ func_0x0185e5e4(&uStack_60,uRam0000000003d57f90);
      lVar3 = *(long *)(param_4 + 0x10);
      if (lVar3 != 0) {
        lVar9 = 0;
        do {
          if ((int)*(uint *)(lVar3 + 0x18) <= (int)(uint)lVar9) {
            return uVar2;
          }
          if (*(uint *)(lVar3 + 0x18) <= (uint)lVar9) {
            uVar2 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + lVar9 * 8 + 0x20);
          if (lVar3 == 0) break;
          *(undefined4 *)(lVar3 + 0xf4) = *(undefined4 *)(*(long *)(param_4 + 0x98) + lVar9 * 4);
          lVar3 = *(long *)(param_4 + 0x10);
          lVar9 = lVar9 + 1;
        } while (lVar3 != 0);
      }
    }
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5341 & 1) == 0) {
    func_0x00f78a20(0x3d27d08);
    bRam0000000003eb5341 = 1;
  }
  uVar2 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39_TypeInfo*/ uRam0000000003d27d08);
  uVar7 = 0;
  /*Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39$$.ctor*/ func_0x015555b8(uVar2,0);
  if (uVar2 != 0) {
    *(undefined8 *)(uVar2 + 0x20) = uVar4;
    return uVar2;
  }
  auVar11 = func_0x00f78af4();
  lVar3 = auVar11._0_8_;
  if ((bRam0000000003eb5342 & 1) == 0) {
    func_0x00f78a20(0x3d43370);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d3ae30);
    bRam0000000003eb5342 = 1;
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_e0 = 0;
  if (*(long *)(lVar3 + 0x18) != 0) {
    Atlas_Gameplay_Kart_KartCompositeFactory__CreateRequestedKartComposites
              (*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x10),auVar11._8_8_,uVar7,
               *(undefined8 *)(lVar3 + 0x20));
    if (*(long *)(lVar3 + 0x10) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_108,*(long *)(lVar3 + 0x10),uRam0000000003d3ae20);
      uStack_e8 = uStack_100;
      uStack_f0 = uStack_108;
      lStack_e0 = lStack_f8;
      while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_f0,uRam0000000003d328d0), lVar9 = lStack_e0,
            (uVar2 & 1) != 0) {
        if (*(long *)(lVar3 + 0x28) == 0) {
          func_0x00f78af4();
code_r0x015cf858:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15cf85c);
          (*pcVar1)();
        }
        /*Core.Actors.ActorManager$$TryAddToGroup<object>*/ func_0x0171edb0(*(long *)(lVar3 + 0x28),lStack_e0,uRam0000000003d43370);
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        if (*(long *)(lVar9 + 0x18) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar9 + 0x18),0);
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,1,0);
        if (*(long *)(lVar9 + 0x20) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        if (*(int *)(*(long *)(lVar9 + 0x20) + 0x10) == 2) {
          *(long *)(lVar3 + 0x48) = lVar9;
        }
        if (*(long *)(lVar3 + 0x38) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x01486578(*(long *)(lVar3 + 0x38),lVar9,0);
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f0,uRam0000000003d328c8);
      goto code_r0x015cf8b8;
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar9 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f0,uRam0000000003eb5000);
    if (lVar9 == 0) goto code_r0x015cf8b8;
    func_0x00f78ac0(lVar9,0);
  }
  lVar3 = __Unwind_Resume();
code_r0x015cf8b8:
  if ((bRam0000000003eb534b & 1) == 0) {
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d1ecd8);
    func_0x00f78a20(0x3d1f828);
    bRam0000000003eb534b = 1;
  }
  if (*(long *)(lVar3 + 0x10) != 0) {
    uVar2 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[][]_TypeInfo*/ uRam0000000003d1ecd8,*(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x18));
    *(ulong *)(lVar3 + 0x70) = uVar2;
    if (*(long *)(lVar3 + 0x10) != 0) {
      if (0 < *(int *)(*(long *)(lVar3 + 0x10) + 0x18)) {
        uVar10 = 0;
        do {
          plVar6 = *(long **)(lVar3 + 0x70);
          lVar9 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[]_TypeInfo*/ uRam0000000003d1f828);
          if (plVar6 == (long *)0x0) goto code_r0x015cfa18;
          uVar2 = 0;
          if ((lVar9 != 0) &&
             (uVar2 = func_0x00f78adc(lVar9,*(undefined8 *)(*plVar6 + 0x40)), uVar2 == 0))
          goto code_r0x015cfa28;
          if (*(uint *)(plVar6 + 3) <= uVar10) goto code_r0x015cfa1c;
          plVar6[uVar10 + 4] = lVar9;
          lVar9 = *(long *)(lVar3 + 0x10);
          if (lVar9 == 0) goto code_r0x015cfa18;
          lVar5 = 0;
          uVar8 = 0;
          while ((long)uVar8 < (long)*(int *)(lVar9 + 0x18)) {
            lVar9 = *(long *)(lVar3 + 0x70);
            if (lVar9 == 0) goto code_r0x015cfa18;
            if (*(uint *)(lVar9 + 0x18) <= uVar10) goto code_r0x015cfa1c;
            lVar9 = *(long *)(lVar9 + uVar10 * 8 + 0x20);
            if (lVar9 == 0) goto code_r0x015cfa18;
            if (*(uint *)(lVar9 + 0x18) <= uVar8) goto code_r0x015cfa1c;
            lVar9 = lVar9 + lVar5;
            lVar5 = lVar5 + 0xc;
            uVar8 = uVar8 + 1;
            *(undefined8 *)(lVar9 + 0x20) = 0x200000000;
            *(undefined4 *)(lVar9 + 0x28) = 0;
            lVar9 = *(long *)(lVar3 + 0x10);
            if (lVar9 == 0) goto code_r0x015cfa18;
          }
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)*(int *)(lVar9 + 0x18));
      }
      return uVar2;
    }
  }
code_r0x015cfa18:
  func_0x00f78af4();
code_r0x015cfa1c:
  uVar4 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar4,0);
code_r0x015cfa28:
    uVar4 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x15cf470 | Atlas.Gameplay.Kart.KartManager.UpdateKartCameraDistance
// ============================================================

/* WARNING: Possible PIC construction at 0x015cf7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cf7dc) */
/* WARNING: Removing unreachable block (ram,0x015cf7e8) */
/* WARNING: Removing unreachable block (ram,0x015cf7f0) */
/* WARNING: Removing unreachable block (ram,0x015cf7f4) */
/* WARNING: Removing unreachable block (ram,0x015cf80c) */

ulong Atlas_Gameplay_Kart_KartManager__UpdateKartCameraDistance
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int extraout_w1;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_4;
  if ((bRam0000000003eb534d & 1) == 0) {
    func_0x00f78a20(0x3d57f90);
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d3ae38);
    uVar2 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb534d = 1;
  }
  if (*(int *)(param_4 + 0xa0) < 1) {
    return uVar2;
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    lVar3 = /*Core.Cameras.CameraManager$$GetActiveCamera*/ func_0x0163a160(*(long *)(param_4 + 0x40),0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      return uVar2;
    }
    if ((lVar3 != 0) && (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0), lVar3 != 0)) {
      /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar3,0);
      uStack_60 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      uStack_48 = *(undefined8 *)(param_4 + 0x80);
      uStack_50 = *(undefined8 *)(param_4 + 0x78);
      uStack_40 = *(undefined8 *)(param_4 + 0x98);
      uStack_38 = *(undefined8 *)(param_4 + 0xa0);
      uStack_54 = 0;
      uStack_5c = param_2;
      uStack_58 = param_3;
      uVar2 = /*Unity.Jobs.IJobExtensions$$Run<DistanceJob>*/ func_0x0185e5e4(&uStack_60,uRam0000000003d57f90);
      lVar3 = *(long *)(param_4 + 0x10);
      if (lVar3 != 0) {
        lVar9 = 0;
        do {
          if ((int)*(uint *)(lVar3 + 0x18) <= (int)(uint)lVar9) {
            return uVar2;
          }
          if (*(uint *)(lVar3 + 0x18) <= (uint)lVar9) {
            uVar2 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + lVar9 * 8 + 0x20);
          if (lVar3 == 0) break;
          *(undefined4 *)(lVar3 + 0xf4) = *(undefined4 *)(*(long *)(param_4 + 0x98) + lVar9 * 4);
          lVar3 = *(long *)(param_4 + 0x10);
          lVar9 = lVar9 + 1;
        } while (lVar3 != 0);
      }
    }
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5341 & 1) == 0) {
    func_0x00f78a20(0x3d27d08);
    bRam0000000003eb5341 = 1;
  }
  uVar2 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39_TypeInfo*/ uRam0000000003d27d08);
  uVar7 = 0;
  /*Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39$$.ctor*/ func_0x015555b8(uVar2,0);
  if (uVar2 != 0) {
    *(undefined8 *)(uVar2 + 0x20) = uVar4;
    return uVar2;
  }
  auVar11 = func_0x00f78af4();
  lVar3 = auVar11._0_8_;
  if ((bRam0000000003eb5342 & 1) == 0) {
    func_0x00f78a20(0x3d43370);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d3ae30);
    bRam0000000003eb5342 = 1;
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_e0 = 0;
  if (*(long *)(lVar3 + 0x18) != 0) {
    Atlas_Gameplay_Kart_KartCompositeFactory__CreateRequestedKartComposites
              (*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x10),auVar11._8_8_,uVar7,
               *(undefined8 *)(lVar3 + 0x20));
    if (*(long *)(lVar3 + 0x10) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_108,*(long *)(lVar3 + 0x10),uRam0000000003d3ae20);
      uStack_e8 = uStack_100;
      uStack_f0 = uStack_108;
      lStack_e0 = lStack_f8;
      while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_f0,uRam0000000003d328d0), lVar9 = lStack_e0,
            (uVar2 & 1) != 0) {
        if (*(long *)(lVar3 + 0x28) == 0) {
          func_0x00f78af4();
code_r0x015cf858:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15cf85c);
          (*pcVar1)();
        }
        /*Core.Actors.ActorManager$$TryAddToGroup<object>*/ func_0x0171edb0(*(long *)(lVar3 + 0x28),lStack_e0,uRam0000000003d43370);
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        if (*(long *)(lVar9 + 0x18) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar9 + 0x18),0);
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,1,0);
        if (*(long *)(lVar9 + 0x20) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        if (*(int *)(*(long *)(lVar9 + 0x20) + 0x10) == 2) {
          *(long *)(lVar3 + 0x48) = lVar9;
        }
        if (*(long *)(lVar3 + 0x38) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x01486578(*(long *)(lVar3 + 0x38),lVar9,0);
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f0,uRam0000000003d328c8);
      goto code_r0x015cf8b8;
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar9 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f0,uRam0000000003eb5000);
    if (lVar9 == 0) goto code_r0x015cf8b8;
    func_0x00f78ac0(lVar9,0);
  }
  lVar3 = __Unwind_Resume();
code_r0x015cf8b8:
  if ((bRam0000000003eb534b & 1) == 0) {
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d1ecd8);
    func_0x00f78a20(0x3d1f828);
    bRam0000000003eb534b = 1;
  }
  if (*(long *)(lVar3 + 0x10) != 0) {
    uVar2 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[][]_TypeInfo*/ uRam0000000003d1ecd8,*(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x18));
    *(ulong *)(lVar3 + 0x70) = uVar2;
    if (*(long *)(lVar3 + 0x10) != 0) {
      if (0 < *(int *)(*(long *)(lVar3 + 0x10) + 0x18)) {
        uVar10 = 0;
        do {
          plVar6 = *(long **)(lVar3 + 0x70);
          lVar9 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[]_TypeInfo*/ uRam0000000003d1f828);
          if (plVar6 == (long *)0x0) goto code_r0x015cfa18;
          uVar2 = 0;
          if ((lVar9 != 0) &&
             (uVar2 = func_0x00f78adc(lVar9,*(undefined8 *)(*plVar6 + 0x40)), uVar2 == 0))
          goto code_r0x015cfa28;
          if (*(uint *)(plVar6 + 3) <= uVar10) goto code_r0x015cfa1c;
          plVar6[uVar10 + 4] = lVar9;
          lVar9 = *(long *)(lVar3 + 0x10);
          if (lVar9 == 0) goto code_r0x015cfa18;
          lVar5 = 0;
          uVar8 = 0;
          while ((long)uVar8 < (long)*(int *)(lVar9 + 0x18)) {
            lVar9 = *(long *)(lVar3 + 0x70);
            if (lVar9 == 0) goto code_r0x015cfa18;
            if (*(uint *)(lVar9 + 0x18) <= uVar10) goto code_r0x015cfa1c;
            lVar9 = *(long *)(lVar9 + uVar10 * 8 + 0x20);
            if (lVar9 == 0) goto code_r0x015cfa18;
            if (*(uint *)(lVar9 + 0x18) <= uVar8) goto code_r0x015cfa1c;
            lVar9 = lVar9 + lVar5;
            lVar5 = lVar5 + 0xc;
            uVar8 = uVar8 + 1;
            *(undefined8 *)(lVar9 + 0x20) = 0x200000000;
            *(undefined4 *)(lVar9 + 0x28) = 0;
            lVar9 = *(long *)(lVar3 + 0x10);
            if (lVar9 == 0) goto code_r0x015cfa18;
          }
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)*(int *)(lVar9 + 0x18));
      }
      return uVar2;
    }
  }
code_r0x015cfa18:
  func_0x00f78af4();
code_r0x015cfa1c:
  uVar4 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar4,0);
code_r0x015cfa28:
    uVar4 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x15cf5dc | Atlas.Gameplay.Kart.KartManager.WaitOnLoad
// ============================================================

/* WARNING: Possible PIC construction at 0x015cf7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cf7dc) */
/* WARNING: Removing unreachable block (ram,0x015cf7e8) */
/* WARNING: Removing unreachable block (ram,0x015cf7f0) */
/* WARNING: Removing unreachable block (ram,0x015cf7f4) */
/* WARNING: Removing unreachable block (ram,0x015cf80c) */

long Atlas_Gameplay_Kart_KartManager__WaitOnLoad(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int extraout_w1;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  if ((bRam0000000003eb5341 & 1) == 0) {
    func_0x00f78a20(0x3d27d08);
    bRam0000000003eb5341 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39_TypeInfo*/ uRam0000000003d27d08);
  uVar6 = 0;
  /*Atlas.Gameplay.Kart.KartManager.<WaitOnLoad>d__39$$.ctor*/ func_0x015555b8(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    return lVar2;
  }
  auVar10 = func_0x00f78af4();
  lVar2 = auVar10._0_8_;
  if ((bRam0000000003eb5342 & 1) == 0) {
    func_0x00f78a20(0x3d43370);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d3ae30);
    bRam0000000003eb5342 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_80 = 0;
  if (*(long *)(lVar2 + 0x18) != 0) {
    Atlas_Gameplay_Kart_KartCompositeFactory__CreateRequestedKartComposites
              (*(long *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x10),auVar10._8_8_,uVar6,
               *(undefined8 *)(lVar2 + 0x20));
    if (*(long *)(lVar2 + 0x10) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(lVar2 + 0x10),uRam0000000003d3ae20);
      uStack_88 = uStack_a0;
      uStack_90 = uStack_a8;
      lStack_80 = lStack_98;
      while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_90,uRam0000000003d328d0), lVar9 = lStack_80,
            (uVar3 & 1) != 0) {
        if (*(long *)(lVar2 + 0x28) == 0) {
          func_0x00f78af4();
code_r0x015cf858:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15cf85c);
          (*pcVar1)();
        }
        /*Core.Actors.ActorManager$$TryAddToGroup<object>*/ func_0x0171edb0(*(long *)(lVar2 + 0x28),lStack_80,uRam0000000003d43370);
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        if (*(long *)(lVar9 + 0x18) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar9 + 0x18),0);
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,1,0);
        if (*(long *)(lVar9 + 0x20) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        if (*(int *)(*(long *)(lVar9 + 0x20) + 0x10) == 2) {
          *(long *)(lVar2 + 0x48) = lVar9;
        }
        if (*(long *)(lVar2 + 0x38) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x01486578(*(long *)(lVar2 + 0x38),lVar9,0);
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,uRam0000000003d328c8);
      goto code_r0x015cf8b8;
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar9 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,uRam0000000003eb5000);
    if (lVar9 == 0) goto code_r0x015cf8b8;
    func_0x00f78ac0(lVar9,0);
  }
  lVar2 = __Unwind_Resume();
code_r0x015cf8b8:
  if ((bRam0000000003eb534b & 1) == 0) {
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d1ecd8);
    func_0x00f78a20(0x3d1f828);
    bRam0000000003eb534b = 1;
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    lVar9 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[][]_TypeInfo*/ uRam0000000003d1ecd8,*(undefined4 *)(*(long *)(lVar2 + 0x10) + 0x18));
    *(long *)(lVar2 + 0x70) = lVar9;
    if (*(long *)(lVar2 + 0x10) != 0) {
      if (0 < *(int *)(*(long *)(lVar2 + 0x10) + 0x18)) {
        uVar3 = 0;
        do {
          plVar5 = *(long **)(lVar2 + 0x70);
          lVar4 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[]_TypeInfo*/ uRam0000000003d1f828);
          if (plVar5 == (long *)0x0) goto code_r0x015cfa18;
          lVar9 = 0;
          if ((lVar4 != 0) &&
             (lVar9 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
          goto code_r0x015cfa28;
          if (*(uint *)(plVar5 + 3) <= uVar3) goto code_r0x015cfa1c;
          plVar5[uVar3 + 4] = lVar4;
          lVar4 = *(long *)(lVar2 + 0x10);
          if (lVar4 == 0) goto code_r0x015cfa18;
          lVar8 = 0;
          uVar7 = 0;
          while ((long)uVar7 < (long)*(int *)(lVar4 + 0x18)) {
            lVar4 = *(long *)(lVar2 + 0x70);
            if (lVar4 == 0) goto code_r0x015cfa18;
            if (*(uint *)(lVar4 + 0x18) <= uVar3) goto code_r0x015cfa1c;
            lVar4 = *(long *)(lVar4 + uVar3 * 8 + 0x20);
            if (lVar4 == 0) goto code_r0x015cfa18;
            if (*(uint *)(lVar4 + 0x18) <= uVar7) goto code_r0x015cfa1c;
            lVar4 = lVar4 + lVar8;
            lVar8 = lVar8 + 0xc;
            uVar7 = uVar7 + 1;
            *(undefined8 *)(lVar4 + 0x20) = 0x200000000;
            *(undefined4 *)(lVar4 + 0x28) = 0;
            lVar4 = *(long *)(lVar2 + 0x10);
            if (lVar4 == 0) goto code_r0x015cfa18;
          }
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)*(int *)(lVar4 + 0x18));
      }
      return lVar9;
    }
  }
code_r0x015cfa18:
  func_0x00f78af4();
code_r0x015cfa1c:
  uVar6 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar6,0);
code_r0x015cfa28:
    uVar6 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x15cf650 | Atlas.Gameplay.Kart.KartManager.InitKarts
// ============================================================

/* WARNING: Possible PIC construction at 0x015cf7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015cf7dc) */
/* WARNING: Removing unreachable block (ram,0x015cf7e8) */
/* WARNING: Removing unreachable block (ram,0x015cf7f0) */
/* WARNING: Removing unreachable block (ram,0x015cf7f4) */
/* WARNING: Removing unreachable block (ram,0x015cf80c) */

void Atlas_Gameplay_Kart_KartManager__InitKarts(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  int extraout_w1;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000003eb5342 & 1) == 0) {
    func_0x00f78a20(0x3d43370);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d3ae30);
    bRam0000000003eb5342 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    Atlas_Gameplay_Kart_KartCompositeFactory__CreateRequestedKartComposites
              (*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),param_2,param_3,
               *(undefined8 *)(param_1 + 0x20));
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,*(long *)(param_1 + 0x10),uRam0000000003d3ae20);
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      lStack_50 = lStack_68;
      while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_60,uRam0000000003d328d0), lVar7 = lStack_50,
            (uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) {
          func_0x00f78af4();
code_r0x015cf858:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15cf85c);
          (*pcVar1)();
        }
        /*Core.Actors.ActorManager$$TryAddToGroup<object>*/ func_0x0171edb0(*(long *)(param_1 + 0x28),lStack_50,uRam0000000003d43370);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        if (*(long *)(lVar7 + 0x18) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x18),0);
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,1,0);
        if (*(long *)(lVar7 + 0x20) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        if (*(int *)(*(long *)(lVar7 + 0x20) + 0x10) == 2) {
          *(long *)(param_1 + 0x48) = lVar7;
        }
        if (*(long *)(param_1 + 0x38) == 0) {
          func_0x00f78af4();
          goto code_r0x015cf858;
        }
        /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x01486578(*(long *)(param_1 + 0x38),lVar7,0);
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,uRam0000000003d328c8);
      goto code_r0x015cf8b8;
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar7 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,uRam0000000003eb5000);
    if (lVar7 == 0) goto code_r0x015cf8b8;
    func_0x00f78ac0(lVar7,0);
  }
  param_1 = __Unwind_Resume();
code_r0x015cf8b8:
  if ((bRam0000000003eb534b & 1) == 0) {
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d1ecd8);
    func_0x00f78a20(0x3d1f828);
    bRam0000000003eb534b = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar5 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[][]_TypeInfo*/ uRam0000000003d1ecd8,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18));
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    if (*(long *)(param_1 + 0x10) != 0) {
      if (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x18)) {
        uVar2 = 0;
        do {
          plVar4 = *(long **)(param_1 + 0x70);
          lVar7 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[]_TypeInfo*/ uRam0000000003d1f828);
          if (plVar4 == (long *)0x0) goto code_r0x015cfa18;
          if ((lVar7 != 0) &&
             (lVar3 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
          goto code_r0x015cfa28;
          if (*(uint *)(plVar4 + 3) <= uVar2) goto code_r0x015cfa1c;
          plVar4[uVar2 + 4] = lVar7;
          lVar7 = *(long *)(param_1 + 0x10);
          if (lVar7 == 0) goto code_r0x015cfa18;
          lVar3 = 0;
          uVar6 = 0;
          while ((long)uVar6 < (long)*(int *)(lVar7 + 0x18)) {
            lVar7 = *(long *)(param_1 + 0x70);
            if (lVar7 == 0) goto code_r0x015cfa18;
            if (*(uint *)(lVar7 + 0x18) <= uVar2) goto code_r0x015cfa1c;
            lVar7 = *(long *)(lVar7 + uVar2 * 8 + 0x20);
            if (lVar7 == 0) goto code_r0x015cfa18;
            if (*(uint *)(lVar7 + 0x18) <= uVar6) goto code_r0x015cfa1c;
            lVar7 = lVar7 + lVar3;
            lVar3 = lVar3 + 0xc;
            uVar6 = uVar6 + 1;
            *(undefined8 *)(lVar7 + 0x20) = 0x200000000;
            *(undefined4 *)(lVar7 + 0x28) = 0;
            lVar7 = *(long *)(param_1 + 0x10);
            if (lVar7 == 0) goto code_r0x015cfa18;
          }
          uVar2 = uVar2 + 1;
        } while ((long)uVar2 < (long)*(int *)(lVar7 + 0x18));
      }
      return;
    }
  }
code_r0x015cfa18:
  func_0x00f78af4();
code_r0x015cfa1c:
  uVar5 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar5,0);
code_r0x015cfa28:
    uVar5 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x15cf8b8 | Atlas.Gameplay.Kart.KartManager.InitKartSideOnTimeRelationships
// ============================================================

void Atlas_Gameplay_Kart_KartManager__InitKartSideOnTimeRelationships(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((bRam0000000003eb534b & 1) == 0) {
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d1ecd8);
    func_0x00f78a20(0x3d1f828);
    bRam0000000003eb534b = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[][]_TypeInfo*/ uRam0000000003d1ecd8,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18));
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    if (*(long *)(param_1 + 0x10) != 0) {
      if (0 < *(int *)(*(long *)(param_1 + 0x10) + 0x18)) {
        uVar5 = 0;
        do {
          plVar6 = *(long **)(param_1 + 0x70);
          lVar2 = func_0x00f78a34(/*Atlas.Gameplay.Kart.KartManager.SideOnKartData[]_TypeInfo*/ uRam0000000003d1f828);
          if (plVar6 == (long *)0x0) goto LAB_015cfa18;
          if ((lVar2 != 0) &&
             (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
          goto LAB_015cfa28;
          if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_015cfa1c;
          plVar6[uVar5 + 4] = lVar2;
          lVar2 = *(long *)(param_1 + 0x10);
          if (lVar2 == 0) goto LAB_015cfa18;
          lVar3 = 0;
          uVar4 = 0;
          while ((long)uVar4 < (long)*(int *)(lVar2 + 0x18)) {
            lVar2 = *(long *)(param_1 + 0x70);
            if (lVar2 == 0) goto LAB_015cfa18;
            if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_015cfa1c;
            lVar2 = *(long *)(lVar2 + uVar5 * 8 + 0x20);
            if (lVar2 == 0) goto LAB_015cfa18;
            if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_015cfa1c;
            lVar2 = lVar2 + lVar3;
            lVar3 = lVar3 + 0xc;
            uVar4 = uVar4 + 1;
            *(undefined8 *)(lVar2 + 0x20) = 0x200000000;
            *(undefined4 *)(lVar2 + 0x28) = 0;
            lVar2 = *(long *)(param_1 + 0x10);
            if (lVar2 == 0) goto LAB_015cfa18;
          }
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)*(int *)(lVar2 + 0x18));
      }
      return;
    }
  }
LAB_015cfa18:
  func_0x00f78af4();
LAB_015cfa1c:
  uVar1 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar1,0);
LAB_015cfa28:
    uVar1 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x15cfa30 | Atlas.Gameplay.Kart.KartManager.ApplyVFXSettings
// ============================================================

void Atlas_Gameplay_Kart_KartManager__ApplyVFXSettings(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  int extraout_w1;
  int extraout_w1_00;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined4 uStack_84;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if ((bRam0000000003eb534f & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb534f = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_31 = 1;
  uStack_32 = 1;
  uStack_33 = 1;
  puVar5 = *(undefined8 **)(param_1 + 0x30);
  if (((*(byte *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (puVar5 != (undefined8 *)0x0) {
    /*Atlas.Settings.AtlasQualitySettings$$TryGetBoolParameter*/ func_0x0145f6d0(puVar5,*(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1c8),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1d0),&uStack_31,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      /*Atlas.Settings.AtlasQualitySettings$$TryGetBoolParameter*/ func_0x0145f6d0(*(long *)(param_1 + 0x30),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1c8),
                      *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1d8),&uStack_32,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        /*Atlas.Settings.AtlasQualitySettings$$TryGetBoolParameter*/ func_0x0145f6d0(*(long *)(param_1 + 0x30),
                        *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1c8),
                        *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x1e0),&uStack_33,0
                       );
        if (*(long *)(param_1 + 0x10) != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_50,*(long *)(param_1 + 0x10),uRam0000000003d3ae20);
          while( true ) {
            uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_50,uRam0000000003d328d0);
            if ((uVar2 & 1) == 0) {
              /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_50,uRam0000000003d328c8);
              return;
            }
            if (lStack_40 == 0) break;
            lVar4 = *(long *)(lStack_40 + 0x30);
            if (lVar4 == 0) {
              func_0x00f78af4();
              goto code_r0x015cfbd0;
            }
            *(undefined1 *)(lVar4 + 0x58) = uStack_31;
            *(undefined1 *)(lVar4 + 0x59) = uStack_32;
            *(undefined1 *)(lVar4 + 0x5a) = uStack_33;
          }
          func_0x00f78af4();
code_r0x015cfbd0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15cfbd4);
          (*pcVar1)();
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    lVar4 = *plVar3;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_50,*puVar5);
    if (lVar4 == 0) {
      return;
    }
    func_0x00f78ac0(lVar4,0);
  }
  lVar4 = __Unwind_Resume();
  if ((bRam0000000003eb5350 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5350 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_84 = 0;
  puVar5 = *(undefined8 **)(lVar4 + 0x30);
  if (((*(byte *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (puVar5 != (undefined8 *)0x0) {
    /*Atlas.Settings.AtlasQualitySettings$$TryGetFloatParameter*/ func_0x0145f6e4(puVar5,*(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x140),&uStack_84,0);
    if (*(long *)(lVar4 + 0x10) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a0,*(long *)(lVar4 + 0x10),uRam0000000003d3ae20);
      while( true ) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a0,uRam0000000003d328d0);
        if ((uVar2 & 1) == 0) {
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a0,uRam0000000003d328c8);
          return;
        }
        if (lStack_90 == 0) break;
        if (*(long *)(lStack_90 + 0x28) == 0) {
          func_0x00f78af4();
          goto code_r0x015cfd54;
        }
        /*Atlas.Gameplay.Kart.KartVisualComposite$$SetOutlineTextureBias*/ func_0x015eafc0(uStack_84,*(long *)(lStack_90 + 0x28),0);
      }
      func_0x00f78af4();
code_r0x015cfd54:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15cfd58);
      (*pcVar1)();
    }
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    lVar4 = *plVar3;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a0,*puVar5);
    if (lVar4 == 0) {
      return;
    }
    func_0x00f78ac0(lVar4,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x15cfc14 | Atlas.Gameplay.Kart.KartManager.ApplyOutlineSettings
// ============================================================

void Atlas_Gameplay_Kart_KartManager__ApplyOutlineSettings(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  int extraout_w1;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  if ((bRam0000000003eb5350 & 1) == 0) {
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5350 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_34 = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x30);
  if (((*(byte *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (puVar5 != (undefined8 *)0x0) {
    /*Atlas.Settings.AtlasQualitySettings$$TryGetFloatParameter*/ func_0x0145f6e4(puVar5,*(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x138),
                    *(undefined8 *)(*(long *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xb8) + 0x140),&uStack_34,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_50,*(long *)(param_1 + 0x10),uRam0000000003d3ae20);
      while( true ) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_50,uRam0000000003d328d0);
        if ((uVar2 & 1) == 0) {
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_50,uRam0000000003d328c8);
          return;
        }
        if (lStack_40 == 0) break;
        if (*(long *)(lStack_40 + 0x28) == 0) {
          func_0x00f78af4();
          goto code_r0x015cfd54;
        }
        /*Atlas.Gameplay.Kart.KartVisualComposite$$SetOutlineTextureBias*/ func_0x015eafc0(uStack_34,*(long *)(lStack_40 + 0x28),0);
      }
      func_0x00f78af4();
code_r0x015cfd54:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15cfd58);
      (*pcVar1)();
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    lVar4 = *plVar3;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_50,*puVar5);
    if (lVar4 == 0) {
      return;
    }
    func_0x00f78ac0(lVar4,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x15cfd9c | Atlas.Gameplay.Kart.KartManager.ApplyDebugSettings
// ============================================================

void Atlas_Gameplay_Kart_KartManager__ApplyDebugSettings(void)

{
  return;
}



// ============================================================
// RVA: 0x15cfda0 | Atlas.Gameplay.Kart.KartManager.PostInitKarts
// ============================================================

void Atlas_Gameplay_Kart_KartManager__PostInitKarts(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb5343 & 1) == 0) {
    func_0x00f78a20(0x3d2a218);
    func_0x00f78a20(0x3d1b508);
    func_0x00f78a20(0x3d2ced0);
    func_0x00f78a20(0x3d1b910);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d59b98);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d3ae28);
    func_0x00f78a20(0x3d3ae30);
    func_0x00f78a20(0x3d3ae38);
    func_0x00f78a20(0x3d3e3d8);
    func_0x00f78a20(0x3d3e368);
    func_0x00f78a20(0x3d633e0);
    func_0x00f78a20(0x3d27d00);
    bRam0000000003eb5343 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartManager.<>c_TypeInfo*/ lRam0000000003d27d00 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartManager.<>c_TypeInfo*/ lRam0000000003d27d00 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar4 = *(undefined8 **)(/*Atlas.Gameplay.Kart.KartManager.<>c_TypeInfo*/ lRam0000000003d27d00 + 0xb8);
  lVar8 = puVar4[1];
  if (lVar8 == 0) {
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartManager.<>c_TypeInfo*/ lRam0000000003d27d00 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.KartManager.<>c_TypeInfo*/ lRam0000000003d27d00 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar4 = *(undefined8 **)(/*Atlas.Gameplay.Kart.KartManager.<>c_TypeInfo*/ lRam0000000003d27d00 + 0xb8);
    }
    uVar9 = *puVar4;
    lVar8 = func_0x00f78aec(/*System.Comparison<KartComposite>_TypeInfo*/ uRam0000000003d1b910);
    /*System.Comparison<TimeZoneInfo.AdjustmentRule>$$.ctor*/ func_0x01db3634(lVar8,uVar9,uRam0000000003d633e0,uRam0000000003d2ced0);
    *(long *)(*(long *)(/*Atlas.Gameplay.Kart.KartManager.<>c_TypeInfo*/ lRam0000000003d27d00 + 0xb8) + 8) = lVar8;
  }
  if (lVar7 != 0) {
    /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$Sort*/ func_0x02428d14(lVar7,lVar8,uRam0000000003d3ae28);
    if (*(long *)(param_1 + 0x10) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a0,*(long *)(param_1 + 0x10),uRam0000000003d3ae20);
      iVar6 = 0;
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_70 = lStack_90;
      while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d328d0), lVar7 = lStack_70,
            (uVar2 & 1) != 0) {
        if (lStack_70 == 0) {
          func_0x00f78af4();
code_r0x015d0178:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15d017c);
          (*pcVar1)();
        }
        uVar9 = param_3;
        if (*(int *)(lStack_70 + 0x50) != 0) {
          uVar9 = 0;
        }
        Atlas_Gameplay_Kart_KartComposite__PostInit(lStack_70,iVar6,uVar9);
        *(long *)(param_1 + 0x50) = param_2;
        if (param_2 != 0) {
          uVar10 = *(undefined8 *)(param_2 + 0x68);
          uVar9 = func_0x00f78aec(/*System.Action<NetworkResultsStanding>_TypeInfo*/ lRam0000000003d1b508);
          /*System.Action<NetworkResultsStanding>$$.ctor*/ func_0x01e46260(uVar9,lVar7,uRam0000000003d59b98,uRam0000000003d2a218);
          plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar10,uVar9,0);
          if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkResultsStanding>_TypeInfo*/ lRam0000000003d1b508)) {
            func_0x00f78e5c();
            goto code_r0x015d0178;
          }
          *(long **)(param_2 + 0x68) = plVar3;
        }
        iVar6 = iVar6 + 1;
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d328c8);
      if (*(long *)(param_1 + 0x10) != 0) {
        uStack_a0 = 0;
        uStack_98 = 0;
        /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(&uStack_a0,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18),4,1,
                        uRam0000000003d3e3d8);
        *(undefined8 *)(param_1 + 0x80) = uStack_98;
        *(undefined8 *)(param_1 + 0x78) = uStack_a0;
        if (*(long *)(param_1 + 0x10) != 0) {
          iVar6 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
          uStack_b0 = 0;
          uStack_a8 = 0;
          /*Unity.Collections.NativeArray<float>$$.ctor*/ func_0x02603484(&uStack_b0,iVar6 * iVar6,4,1,uRam0000000003d3e368);
          *(undefined8 *)(param_1 + 0x90) = uStack_a8;
          *(undefined8 *)(param_1 + 0x88) = uStack_b0;
          if (*(long *)(param_1 + 0x10) != 0) {
            uStack_c0 = 0;
            uStack_b8 = 0;
            /*Unity.Collections.NativeArray<float>$$.ctor*/ func_0x02603484(&uStack_c0,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18),4,1,
                            uRam0000000003d3e368);
            *(undefined8 *)(param_1 + 0xa0) = uStack_b8;
            *(undefined8 *)(param_1 + 0x98) = uStack_c0;
            lVar7 = *(long *)(param_1 + 0x10);
            if (lVar7 != 0) {
              lVar5 = 0;
              lVar8 = 0;
              do {
                if ((int)*(uint *)(lVar7 + 0x18) <= (int)(uint)lVar8) {
                  return;
                }
                if (*(uint *)(lVar7 + 0x18) <= (uint)lVar8) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + lVar8 * 8 + 0x20);
                if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)) break;
                uVar11 = *(undefined4 *)(lVar7 + 0x2d8);
                puVar4 = (undefined8 *)(*(long *)(param_1 + 0x78) + lVar5);
                *puVar4 = *(undefined8 *)(lVar7 + 0x2d0);
                *(undefined4 *)(puVar4 + 1) = uVar11;
                *(undefined4 *)((long)puVar4 + 0xc) = 0x3f800000;
                lVar7 = *(long *)(param_1 + 0x10);
                lVar8 = lVar8 + 1;
                lVar5 = lVar5 + 0x10;
              } while (lVar7 != 0);
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15d01cc | Atlas.Gameplay.Kart.KartManager.GetKartToKartDistance
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_KartManager__GetKartToKartDistance
                (ulong param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  ulong uVar10;
  long extraout_x1;
  long lVar11;
  uint uVar12;
  undefined8 unaff_x19;
  long lVar13;
  ulong uVar14;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar15;
  undefined *unaff_x30;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 extraout_d0;
  float fVar18;
  undefined8 unaff_d8;
  float fVar19;
  undefined8 unaff_d9;
  float fVar20;
  undefined8 unaff_d10;
  float fVar21;
  undefined8 unaff_d11;
  float fVar22;
  undefined8 unaff_d12;
  float fVar23;
  undefined8 unaff_d13;
  float fVar24;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  puVar2 = &stack0xfffffffffffffff0;
  puVar15 = &stack0xfffffffffffffff0;
  if ((param_2 == 0) || (param_3 == 0)) {
    unaff_x30 = &Atlas_Gameplay_Kart_KartManager__GetKartToKartDistance;
    auVar25 = func_0x00f78af4();
    uVar10 = auVar25._8_8_;
    param_1 = auVar25._0_8_;
  }
  else {
    uVar10 = (ulong)*(uint *)(param_2 + 0x9c);
    param_3 = (ulong)*(uint *)(param_3 + 0x9c);
    puVar2 = (undefined1 *)register0x00000008;
    puVar15 = unaff_x29;
  }
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar15;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  uVar3 = param_1;
  uVar14 = param_3;
  if ((bRam0000000003eb5344 & 1) == 0) {
    uVar3 = func_0x00f78a20(0x3d3ae30);
    bRam0000000003eb5344 = 1;
  }
  if ((((int)((uint)param_3 | (uint)uVar10) < 0) ||
      (*(int *)(param_1 + 0x90) <= (int)(uint)uVar10 ||
       *(int *)(param_1 + 0x90) <= (int)(uint)param_3)) || (*(long *)(param_1 + 0x10) != 0)) {
    return uVar3;
  }
  auVar25 = func_0x00f78af4(0);
  lVar13 = auVar25._8_8_;
  puVar4 = auVar25._0_8_;
  *(undefined8 *)(puVar2 + -0x60) = 0x3eb5000;
  *(ulong *)(puVar2 + -0x58) = param_1;
  *(ulong *)(puVar2 + -0x50) = uVar10;
  *(ulong *)(puVar2 + -0x48) = param_3;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x38) = &Atlas_Gameplay_Kart_KartManager__FreezeAllKarts;
  if ((bRam0000000003eb5346 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5346 = 1;
  }
  *(undefined8 *)(puVar2 + -0x78) = 0;
  *(undefined8 *)(puVar2 + -0x70) = 0;
  *(undefined8 *)(puVar2 + -0x68) = 0;
  if (puVar4[2] != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar2 + -0x78,puVar4[2],uRam0000000003d3ae20);
    while( true ) {
      uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar2 + -0x78,uRam0000000003d328d0);
      if ((uVar10 & 1) == 0) {
        uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x78,uRam0000000003d328c8);
        return uVar10;
      }
      if (*(long *)(puVar2 + -0x68) == 0) break;
      lVar5 = *(long *)(*(long *)(puVar2 + -0x68) + 0x20);
      if (lVar5 == 0) {
        func_0x00f78af4();
        goto code_r0x015d0364;
      }
      /*Atlas.Gameplay.Kart.KartPhysicsInput$$SetLogicFreeze*/ func_0x015dad98(lVar5,lVar13,0);
    }
    func_0x00f78af4();
code_r0x015d0364:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0368);
    (*pcVar1)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar13 = *plVar6;
    ___cxa_end_catch();
    uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x78,*puVar4);
    if (lVar13 == 0) {
      return uVar10;
    }
    func_0x00f78ac0(lVar13,0);
  }
  auVar25 = __Unwind_Resume();
  *(undefined8 *)(puVar2 + -0xb0) = 0x3eb5000;
  *(undefined8 *)(puVar2 + -0xa8) = 0x3eb5000;
  *(undefined8 **)(puVar2 + -0xa0) = puVar4;
  *(long *)(puVar2 + -0x98) = lVar13;
  *(undefined1 **)(puVar2 + -0x90) = puVar2 + -0x40;
  *(undefined **)(puVar2 + -0x88) = &Atlas_Gameplay_Kart_KartManager__FreezeKartByNetworkPlayer;
  uVar10 = uVar14;
  if ((bRam0000000003eb5347 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5347 = 1;
  }
  *(undefined8 *)(puVar2 + -200) = 0;
  *(undefined8 *)(puVar2 + -0xc0) = 0;
  *(undefined8 *)(puVar2 + -0xb8) = 0;
  lVar13 = auVar25._0_8_[2];
  if (lVar13 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar2 + -200,lVar13,uRam0000000003d3ae20);
    while( true ) {
      uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar2 + -200,uRam0000000003d328d0);
      if ((uVar10 & 1) == 0) {
        uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -200,uRam0000000003d328c8);
        return uVar10;
      }
      lVar13 = *(long *)(puVar2 + -0xb8);
      if (lVar13 == 0) break;
      if (*(int *)(lVar13 + 0x54) == *(int *)(uVar14 + 0xc)) {
        if (*(long *)(lVar13 + 0x20) == 0) {
          func_0x00f78af4();
code_r0x015d04b0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15d04b4);
          (*pcVar1)();
        }
        /*Atlas.Gameplay.Kart.KartPhysicsInput$$SetLogicFreeze*/ func_0x015dad98(*(long *)(lVar13 + 0x20),auVar25._8_8_,0);
      }
    }
    func_0x00f78af4();
    goto code_r0x015d04b0;
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    puVar7 = (ulong *)___cxa_begin_catch();
    uVar14 = *puVar7;
    ___cxa_end_catch();
    uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -200,*auVar25._0_8_);
    if (uVar14 == 0) {
      return uVar3;
    }
    func_0x00f78ac0(uVar14,0);
  }
  auVar26 = __Unwind_Resume();
  lVar13 = auVar26._8_8_;
  puVar4 = auVar26._0_8_;
  *(undefined8 *)(puVar2 + -0x100) = 0x3eb5000;
  *(undefined1 (*) [16])(puVar2 + -0xf8) = auVar25;
  *(ulong *)(puVar2 + -0xe8) = uVar14;
  *(undefined1 **)(puVar2 + -0xe0) = puVar2 + -0x90;
  *(undefined **)(puVar2 + -0xd8) = &Atlas_Gameplay_Kart_KartManager__SetActiveKartVisuals;
  if ((bRam0000000003eb5348 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5348 = 1;
  }
  *(undefined8 *)(puVar2 + -0x118) = 0;
  *(undefined8 *)(puVar2 + -0x110) = 0;
  *(undefined8 *)(puVar2 + -0x108) = 0;
  if (puVar4[2] != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar2 + -0x118,puVar4[2],uRam0000000003d3ae20);
    while( true ) {
      uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar2 + -0x118,uRam0000000003d328d0);
      if ((uVar10 & 1) == 0) {
        uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x118,uRam0000000003d328c8);
        return uVar10;
      }
      if (*(long *)(puVar2 + -0x108) == 0) break;
      lVar5 = *(long *)(*(long *)(puVar2 + -0x108) + 0x28);
      if (lVar5 == 0) {
        func_0x00f78af4();
        goto code_r0x015d05e8;
      }
      /*Atlas.Gameplay.Kart.KartVisualComposite$$SetVisualRootActive*/ func_0x015eaca0(lVar5,lVar13,0);
    }
    func_0x00f78af4();
code_r0x015d05e8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15d05ec);
    (*pcVar1)();
  }
  func_0x00f78af4();
  if (extraout_w1_01 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar13 = *plVar6;
    ___cxa_end_catch();
    uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x118,*puVar4);
    if (lVar13 == 0) {
      return uVar3;
    }
    func_0x00f78ac0(lVar13,0);
  }
  auVar25 = __Unwind_Resume();
  puVar8 = auVar25._0_8_;
  *(undefined8 *)(puVar2 + -0x150) = 0x3eb5000;
  *(undefined8 *)(puVar2 + -0x148) = 0x3eb5000;
  *(undefined8 **)(puVar2 + -0x140) = puVar4;
  *(long *)(puVar2 + -0x138) = lVar13;
  *(undefined1 **)(puVar2 + -0x130) = puVar2 + -0xe0;
  *(undefined **)(puVar2 + -0x128) = &Atlas_Gameplay_Kart_KartManager__SetInputTypeByNetworkPlayer;
  uVar3 = uVar10;
  if ((bRam0000000003eb5349 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5349 = 1;
  }
  *(undefined8 *)(puVar2 + -0x168) = 0;
  *(undefined8 *)(puVar2 + -0x160) = 0;
  *(undefined8 *)(puVar2 + -0x158) = 0;
  if (puVar8[2] != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar2 + -0x168,puVar8[2],uRam0000000003d3ae20);
    while( true ) {
      uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar2 + -0x168,uRam0000000003d328d0);
      if ((uVar3 & 1) == 0) {
        uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x168,uRam0000000003d328c8);
        return uVar10;
      }
      lVar13 = *(long *)(puVar2 + -0x158);
      if (lVar13 == 0) break;
      if (*(int *)(lVar13 + 0x54) == *(int *)(uVar10 + 0xc)) {
        if (*(long *)(lVar13 + 0x20) == 0) {
          func_0x00f78af4();
code_r0x015d072c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0730);
          (*pcVar1)();
        }
        *(int *)(*(long *)(lVar13 + 0x20) + 0x10) = auVar25._8_4_;
      }
    }
    func_0x00f78af4();
    goto code_r0x015d072c;
  }
  func_0x00f78af4();
  if (extraout_w1_02 == 1) {
    puVar7 = (ulong *)___cxa_begin_catch();
    uVar10 = *puVar7;
    ___cxa_end_catch();
    uVar14 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x168,*puVar8);
    if (uVar10 == 0) {
      return uVar14;
    }
    func_0x00f78ac0(uVar10,0);
  }
  lVar13 = __Unwind_Resume();
  *(undefined8 *)(puVar2 + -0x1a0) = 0x3eb5000;
  *(undefined1 (*) [16])(puVar2 + -0x198) = auVar25;
  *(ulong *)(puVar2 + -0x188) = uVar10;
  *(undefined1 **)(puVar2 + -0x180) = puVar2 + -0x130;
  *(undefined **)(puVar2 + -0x178) = &Atlas_Gameplay_Kart_KartManager__GetLocalPlayerIndex;
  if ((bRam0000000003eb534a & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb534a = 1;
  }
  *(undefined8 *)(puVar2 + -0x1b8) = 0;
  *(undefined8 *)(puVar2 + -0x1b0) = 0;
  *(undefined8 *)(puVar2 + -0x1a8) = 0;
  if (lVar13 == 0) {
    func_0x00f78af4();
    if (extraout_w1_03 == 1) {
      plVar6 = (long *)___cxa_begin_catch();
      lVar13 = *plVar6;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x1b8,uRam0000000003eb5000);
      if (lVar13 == 0) {
        return 0xffffffff;
      }
    }
    else {
      __Unwind_Resume();
      lVar13 = 0;
    }
    auVar25 = func_0x00f78ac0(lVar13,0);
    *(undefined1 **)(puVar2 + -0x1e0) = puVar2 + -0x180;
    *(undefined **)(puVar2 + -0x1d8) =
         &Atlas_Gameplay_Kart_KartManager__ResetAllKartSideOnTimePairings;
    lVar5 = *auVar25._8_8_;
    if (lVar5 != 0) {
      lVar11 = 0;
      uVar10 = 0;
      do {
        if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar10) {
          return auVar25._0_8_;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar10) {
          uVar9 = func_0x00f78b24();
          lVar5 = func_0x00f78ac0(uVar9,0);
          *(undefined8 *)(puVar2 + -0x260) = unaff_d15;
          *(undefined8 *)(puVar2 + -600) = unaff_d14;
          *(undefined8 *)(puVar2 + -0x250) = unaff_d13;
          *(undefined8 *)(puVar2 + -0x248) = unaff_d12;
          *(undefined8 *)(puVar2 + -0x240) = unaff_d11;
          *(undefined8 *)(puVar2 + -0x238) = unaff_d10;
          *(undefined8 *)(puVar2 + -0x230) = unaff_d9;
          *(undefined8 *)(puVar2 + -0x228) = unaff_d8;
          *(undefined8 *)(puVar2 + -0x220) = unaff_x24;
          *(undefined8 *)(puVar2 + -0x218) = unaff_x23;
          *(undefined8 *)(puVar2 + -0x210) = 0x3eb5000;
          *(undefined8 **)(puVar2 + -0x208) = puVar8;
          *(undefined8 *)(puVar2 + -0x200) = 0x3eb5000;
          *(long *)(puVar2 + -0x1f8) = lVar13;
          *(undefined1 **)(puVar2 + -0x1f0) = puVar2 + -0x1e0;
          *(undefined **)(puVar2 + -0x1e8) =
               &Atlas_Gameplay_Kart_KartManager__CanPlayOvertakeAnimations;
          uVar10 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(extraout_d0,0,0);
          if ((uVar10 & 1) == 0) {
            if (((extraout_x1 == 0) || (lVar13 = *(long *)(extraout_x1 + 0x10), lVar13 == 0)) ||
               ((uVar3 == 0 || (lVar11 = *(long *)(uVar3 + 0x10), lVar11 == 0)))) {
              uVar10 = func_0x00f78af4();
              uVar9 = _UNK_033f8b20;
              *(undefined8 *)(uVar10 + 0x68) = _UNK_033f8b28;
              *(undefined8 *)(uVar10 + 0x60) = uVar9;
              return uVar10;
            }
            fVar19 = *(float *)(lVar11 + 0x2d0);
            fVar20 = *(float *)(lVar11 + 0x2d4);
            fVar21 = *(float *)(lVar11 + 0x2d8);
            fVar22 = *(float *)(lVar13 + 0x2d0);
            fVar23 = *(float *)(lVar13 + 0x2d4);
            fVar24 = *(float *)(lVar13 + 0x2d8);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            fVar19 = fVar19 - fVar22;
            fVar20 = fVar20 - fVar23;
            fVar21 = fVar21 - fVar24;
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar22 = fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20;
            fVar23 = 1.0 / SQRT(fVar22);
            fVar19 = fVar19 * fVar23;
            fVar20 = fVar20 * fVar23;
            fVar21 = fVar21 * fVar23;
            if (fVar22 <= 1.1754944e-38) {
              fVar19 = 0.0;
              fVar20 = 0.0;
              fVar21 = 0.0;
            }
            uVar16 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar19,fVar20,fVar21,0);
            fVar23 = *(float *)(lVar13 + 0x294);
            fVar22 = *(float *)(lVar13 + 0x298);
            fVar19 = *(float *)(lVar13 + 0x29c);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar24 = fVar19 * fVar19 + fVar23 * fVar23 + fVar22 * fVar22;
            fVar18 = 1.0 / SQRT(fVar24);
            fVar23 = fVar23 * fVar18;
            fVar22 = fVar22 * fVar18;
            fVar19 = fVar19 * fVar18;
            if (fVar24 <= 1.1754944e-38) {
              fVar23 = 0.0;
              fVar22 = 0.0;
              fVar19 = 0.0;
            }
            uVar17 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar23,fVar22,fVar19,0);
            uVar10 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(uVar16,fVar20,fVar21,uVar17,fVar22,fVar19,
                                     *(undefined4 *)(lVar5 + 0x68),0);
            if ((uVar10 & 1) != 0) {
              return 0;
            }
            if (1.0 < (float)extraout_d0) {
              return 0;
            }
            if (10.0 <= *(float *)(lVar13 + 0x194) - *(float *)(lVar11 + 0x194)) {
              return (ulong)(*(float *)(lVar5 + 0x6c) <=
                            (float)((ulong)*(undefined8 *)(lVar13 + 0x298) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(lVar11 + 0x298) >> 0x20) +
                            *(float *)(lVar13 + 0x294) * *(float *)(lVar11 + 0x294) +
                            (float)*(undefined8 *)(lVar13 + 0x298) *
                            (float)*(undefined8 *)(lVar11 + 0x298));
            }
          }
          return 0;
        }
        lVar5 = lVar5 + lVar11;
        lVar11 = lVar11 + 0xc;
        uVar10 = uVar10 + 1;
        *(undefined8 *)(lVar5 + 0x20) = 0x200000000;
        *(undefined4 *)(lVar5 + 0x28) = 0;
        lVar5 = *auVar25._8_8_;
      } while (lVar5 != 0);
    }
    uVar10 = func_0x00f78af4();
    return uVar10;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar2 + -0x1b8,lVar13,uRam0000000003d3ae20);
  uVar12 = 0;
  do {
    uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar2 + -0x1b8,uRam0000000003d328d0);
    if ((uVar10 & 1) == 0) {
      uVar12 = 0;
      uVar16 = 0x3f;
code_r0x015d083c:
      *(undefined4 *)(puVar2 + -0x1c8) = uVar16;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar2 + -0x1b8,uRam0000000003d328c8);
      if (*(int *)(puVar2 + -0x1c8) != 0x41) {
        uVar12 = 0xffffffff;
      }
      return (ulong)uVar12;
    }
    if (*(long *)(puVar2 + -0x1a8) == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0884);
      (*pcVar1)();
    }
    if (*(int *)(*(long *)(puVar2 + -0x1a8) + 0x50) == 0) {
      uVar16 = 0x41;
      goto code_r0x015d083c;
    }
    uVar12 = uVar12 + 1;
  } while( true );
}



// ============================================================
// RVA: 0x15d01f0 | Atlas.Gameplay.Kart.KartManager.GetKartToKartDistance
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_KartManager__GetKartToKartDistance
                (ulong param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  long extraout_x1;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 extraout_d0;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  long lStack_188;
  undefined1 *****pppppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  undefined1 ****ppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  long lStack_e8;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  uVar2 = param_1;
  lVar9 = param_3;
  if ((bRam0000000003eb5344 & 1) == 0) {
    uVar2 = func_0x00f78a20(0x3d3ae30);
    bRam0000000003eb5344 = 1;
  }
  if ((((int)((uint)param_3 | (uint)param_2) < 0) ||
      (*(int *)(param_1 + 0x90) <= (int)(uint)param_2 ||
       *(int *)(param_1 + 0x90) <= (int)(uint)param_3)) || (*(long *)(param_1 + 0x10) != 0)) {
    return uVar2;
  }
  auVar20 = func_0x00f78af4(0);
  lVar8 = auVar20._8_8_;
  puVar3 = auVar20._0_8_;
  uStack_60 = 0x3eb5000;
  puStack_38 = &Atlas_Gameplay_Kart_KartManager__FreezeAllKarts;
  uStack_58 = param_1;
  uStack_50 = param_2;
  lStack_48 = param_3;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5346 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5346 = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  if (puVar3[2] != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,puVar3[2],uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_78,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_68 == 0) break;
      if (*(long *)(lStack_68 + 0x20) == 0) {
        func_0x00f78af4();
        goto code_r0x015d0364;
      }
      /*Atlas.Gameplay.Kart.KartPhysicsInput$$SetLogicFreeze*/ func_0x015dad98(*(long *)(lStack_68 + 0x20),lVar8,0);
    }
    func_0x00f78af4();
code_r0x015d0364:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0368);
    (*pcVar1)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar8 = *plVar4;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,*puVar3);
    if (lVar8 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(lVar8,0);
  }
  auVar20 = __Unwind_Resume();
  uStack_b0 = 0x3eb5000;
  uStack_a8 = 0x3eb5000;
  puStack_88 = &Atlas_Gameplay_Kart_KartManager__FreezeKartByNetworkPlayer;
  lVar10 = lVar9;
  puStack_a0 = puVar3;
  lStack_98 = lVar8;
  ppuStack_90 = &puStack_40;
  if ((bRam0000000003eb5347 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5347 = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  lStack_b8 = 0;
  lVar8 = auVar20._0_8_[2];
  if (lVar8 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,lVar8,uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c8,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_b8 == 0) break;
      if (*(int *)(lStack_b8 + 0x54) == *(int *)(lVar9 + 0xc)) {
        if (*(long *)(lStack_b8 + 0x20) == 0) {
          func_0x00f78af4();
code_r0x015d04b0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15d04b4);
          (*pcVar1)();
        }
        /*Atlas.Gameplay.Kart.KartPhysicsInput$$SetLogicFreeze*/ func_0x015dad98(*(long *)(lStack_b8 + 0x20),auVar20._8_8_,0);
      }
    }
    func_0x00f78af4();
    goto code_r0x015d04b0;
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar9 = *plVar4;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c8,*auVar20._0_8_);
    if (lVar9 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(lVar9,0);
  }
  auVar21 = __Unwind_Resume();
  lVar8 = auVar21._8_8_;
  puVar3 = auVar21._0_8_;
  uStack_100 = 0x3eb5000;
  puStack_d8 = &Atlas_Gameplay_Kart_KartManager__SetActiveKartVisuals;
  lStack_e8 = lVar9;
  pppuStack_e0 = &ppuStack_90;
  auStack_f8 = auVar20;
  if ((bRam0000000003eb5348 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5348 = 1;
  }
  uStack_118 = 0;
  uStack_110 = 0;
  lStack_108 = 0;
  if (puVar3[2] != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_118,puVar3[2],uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_118,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_118,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_108 == 0) break;
      if (*(long *)(lStack_108 + 0x28) == 0) {
        func_0x00f78af4();
        goto code_r0x015d05e8;
      }
      /*Atlas.Gameplay.Kart.KartVisualComposite$$SetVisualRootActive*/ func_0x015eaca0(*(long *)(lStack_108 + 0x28),lVar8,0);
    }
    func_0x00f78af4();
code_r0x015d05e8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15d05ec);
    (*pcVar1)();
  }
  func_0x00f78af4();
  if (extraout_w1_01 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar8 = *plVar4;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_118,*puVar3);
    if (lVar8 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(lVar8,0);
  }
  auVar20 = __Unwind_Resume();
  uStack_150 = 0x3eb5000;
  uStack_148 = 0x3eb5000;
  puStack_128 = &Atlas_Gameplay_Kart_KartManager__SetInputTypeByNetworkPlayer;
  lVar9 = lVar10;
  puStack_140 = puVar3;
  lStack_138 = lVar8;
  ppppuStack_130 = &pppuStack_e0;
  if ((bRam0000000003eb5349 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5349 = 1;
  }
  uStack_168 = 0;
  uStack_160 = 0;
  lStack_158 = 0;
  lVar8 = auVar20._0_8_[2];
  if (lVar8 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_168,lVar8,uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_168,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_168,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_158 == 0) break;
      if (*(int *)(lStack_158 + 0x54) == *(int *)(lVar10 + 0xc)) {
        if (*(long *)(lStack_158 + 0x20) == 0) {
          func_0x00f78af4();
code_r0x015d072c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0730);
          (*pcVar1)();
        }
        *(int *)(*(long *)(lStack_158 + 0x20) + 0x10) = auVar20._8_4_;
      }
    }
    func_0x00f78af4();
    goto code_r0x015d072c;
  }
  func_0x00f78af4();
  if (extraout_w1_02 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar10 = *plVar4;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_168,*auVar20._0_8_);
    if (lVar10 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(lVar10,0);
  }
  lVar8 = __Unwind_Resume();
  uStack_1a0 = 0x3eb5000;
  puStack_178 = &Atlas_Gameplay_Kart_KartManager__GetLocalPlayerIndex;
  lStack_188 = lVar10;
  pppppuStack_180 = &ppppuStack_130;
  auStack_198 = auVar20;
  if ((bRam0000000003eb534a & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb534a = 1;
  }
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  lStack_1a8 = 0;
  if (lVar8 == 0) {
    func_0x00f78af4();
    if (extraout_w1_03 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar8 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1b8,uRam0000000003eb5000);
      if (lVar8 == 0) {
        return 0xffffffff;
      }
    }
    else {
      __Unwind_Resume();
      lVar8 = 0;
    }
    auVar20 = func_0x00f78ac0(lVar8,0);
    lVar8 = *auVar20._8_8_;
    if (lVar8 != 0) {
      lVar10 = 0;
      uVar2 = 0;
      do {
        if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar2) {
          return auVar20._0_8_;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar2) {
          uVar5 = func_0x00f78b24();
          lVar8 = func_0x00f78ac0(uVar5,0);
          uVar2 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(extraout_d0,0,0);
          if ((uVar2 & 1) == 0) {
            if (((extraout_x1 == 0) || (lVar10 = *(long *)(extraout_x1 + 0x10), lVar10 == 0)) ||
               ((lVar9 == 0 || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)))) {
              uVar2 = func_0x00f78af4();
              uVar5 = _UNK_033f8b20;
              *(undefined8 *)(uVar2 + 0x68) = _UNK_033f8b28;
              *(undefined8 *)(uVar2 + 0x60) = uVar5;
              return uVar2;
            }
            fVar14 = *(float *)(lVar9 + 0x2d0);
            fVar15 = *(float *)(lVar9 + 0x2d4);
            fVar16 = *(float *)(lVar9 + 0x2d8);
            fVar17 = *(float *)(lVar10 + 0x2d0);
            fVar18 = *(float *)(lVar10 + 0x2d4);
            fVar19 = *(float *)(lVar10 + 0x2d8);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            fVar14 = fVar14 - fVar17;
            fVar15 = fVar15 - fVar18;
            fVar16 = fVar16 - fVar19;
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar17 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
            fVar18 = 1.0 / SQRT(fVar17);
            fVar14 = fVar14 * fVar18;
            fVar15 = fVar15 * fVar18;
            fVar16 = fVar16 * fVar18;
            if (fVar17 <= 1.1754944e-38) {
              fVar14 = 0.0;
              fVar15 = 0.0;
              fVar16 = 0.0;
            }
            uVar11 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar14,fVar15,fVar16,0);
            fVar18 = *(float *)(lVar10 + 0x294);
            fVar17 = *(float *)(lVar10 + 0x298);
            fVar14 = *(float *)(lVar10 + 0x29c);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar19 = fVar14 * fVar14 + fVar18 * fVar18 + fVar17 * fVar17;
            fVar13 = 1.0 / SQRT(fVar19);
            fVar18 = fVar18 * fVar13;
            fVar17 = fVar17 * fVar13;
            fVar14 = fVar14 * fVar13;
            if (fVar19 <= 1.1754944e-38) {
              fVar18 = 0.0;
              fVar17 = 0.0;
              fVar14 = 0.0;
            }
            uVar12 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar18,fVar17,fVar14,0);
            uVar2 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(uVar11,fVar15,fVar16,uVar12,fVar17,fVar14,
                                    *(undefined4 *)(lVar8 + 0x68),0);
            if ((uVar2 & 1) != 0) {
              return 0;
            }
            if (1.0 < (float)extraout_d0) {
              return 0;
            }
            if (10.0 <= *(float *)(lVar10 + 0x194) - *(float *)(lVar9 + 0x194)) {
              return (ulong)(*(float *)(lVar8 + 0x6c) <=
                            (float)((ulong)*(undefined8 *)(lVar10 + 0x298) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(lVar9 + 0x298) >> 0x20) +
                            *(float *)(lVar10 + 0x294) * *(float *)(lVar9 + 0x294) +
                            (float)*(undefined8 *)(lVar10 + 0x298) *
                            (float)*(undefined8 *)(lVar9 + 0x298));
            }
          }
          return 0;
        }
        lVar8 = lVar8 + lVar10;
        lVar10 = lVar10 + 0xc;
        uVar2 = uVar2 + 1;
        *(undefined8 *)(lVar8 + 0x20) = 0x200000000;
        *(undefined4 *)(lVar8 + 0x28) = 0;
        lVar8 = *auVar20._8_8_;
      } while (lVar8 != 0);
    }
    uVar2 = func_0x00f78af4();
    return uVar2;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1b8,lVar8,uRam0000000003d3ae20);
  uVar7 = 0;
  do {
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1b8,uRam0000000003d328d0);
    if ((uVar2 & 1) == 0) {
      uVar7 = 0;
      iVar6 = 0x3f;
code_r0x015d083c:
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1b8,uRam0000000003d328c8);
      if (iVar6 != 0x41) {
        uVar7 = 0xffffffff;
      }
      return (ulong)uVar7;
    }
    if (lStack_1a8 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0884);
      (*pcVar1)();
    }
    if (*(int *)(lStack_1a8 + 0x50) == 0) {
      iVar6 = 0x41;
      goto code_r0x015d083c;
    }
    uVar7 = uVar7 + 1;
  } while( true );
}



// ============================================================
// RVA: 0x15d0274 | Atlas.Gameplay.Kart.KartManager.FreezeAllKarts
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_KartManager__FreezeAllKarts
                (undefined8 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  long extraout_x1;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 extraout_d0;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  long lStack_158;
  undefined1 ****ppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  undefined1 ***pppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb5346 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5346 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_1[2] != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,param_1[2],uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_38 == 0) break;
      if (*(long *)(lStack_38 + 0x20) == 0) {
        func_0x00f78af4();
        goto code_r0x015d0364;
      }
      /*Atlas.Gameplay.Kart.KartPhysicsInput$$SetLogicFreeze*/ func_0x015dad98(*(long *)(lStack_38 + 0x20),param_2,0);
    }
    func_0x00f78af4();
code_r0x015d0364:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0368);
    (*pcVar1)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    lVar9 = *plVar3;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,*param_1);
    if (lVar9 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(lVar9,0);
  }
  auVar20 = __Unwind_Resume();
  puStack_58 = &Atlas_Gameplay_Kart_KartManager__FreezeKartByNetworkPlayer;
  lVar9 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5347 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5347 = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  lVar4 = auVar20._0_8_[2];
  if (lVar4 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,lVar4,uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_98,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_88 == 0) break;
      if (*(int *)(lStack_88 + 0x54) == *(int *)(param_3 + 0xc)) {
        if (*(long *)(lStack_88 + 0x20) == 0) {
          func_0x00f78af4();
code_r0x015d04b0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15d04b4);
          (*pcVar1)();
        }
        /*Atlas.Gameplay.Kart.KartPhysicsInput$$SetLogicFreeze*/ func_0x015dad98(*(long *)(lStack_88 + 0x20),auVar20._8_8_,0);
      }
    }
    func_0x00f78af4();
    goto code_r0x015d04b0;
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    param_3 = *plVar3;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,*auVar20._0_8_);
    if (param_3 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(param_3,0);
  }
  auVar21 = __Unwind_Resume();
  lVar4 = auVar21._8_8_;
  puVar5 = auVar21._0_8_;
  uStack_d0 = 0x3eb5000;
  puStack_a8 = &Atlas_Gameplay_Kart_KartManager__SetActiveKartVisuals;
  lStack_b8 = param_3;
  ppuStack_b0 = &puStack_60;
  auStack_c8 = auVar20;
  if ((bRam0000000003eb5348 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5348 = 1;
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  lStack_d8 = 0;
  if (puVar5[2] != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_e8,puVar5[2],uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e8,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_d8 == 0) break;
      if (*(long *)(lStack_d8 + 0x28) == 0) {
        func_0x00f78af4();
        goto code_r0x015d05e8;
      }
      /*Atlas.Gameplay.Kart.KartVisualComposite$$SetVisualRootActive*/ func_0x015eaca0(*(long *)(lStack_d8 + 0x28),lVar4,0);
    }
    func_0x00f78af4();
code_r0x015d05e8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15d05ec);
    (*pcVar1)();
  }
  func_0x00f78af4();
  if (extraout_w1_01 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    lVar4 = *plVar3;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,*puVar5);
    if (lVar4 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(lVar4,0);
  }
  auVar20 = __Unwind_Resume();
  uStack_120 = 0x3eb5000;
  uStack_118 = 0x3eb5000;
  puStack_f8 = &Atlas_Gameplay_Kart_KartManager__SetInputTypeByNetworkPlayer;
  lVar10 = lVar9;
  puStack_110 = puVar5;
  lStack_108 = lVar4;
  pppuStack_100 = &ppuStack_b0;
  if ((bRam0000000003eb5349 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5349 = 1;
  }
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_128 = 0;
  lVar4 = auVar20._0_8_[2];
  if (lVar4 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_138,lVar4,uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_138,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_138,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_128 == 0) break;
      if (*(int *)(lStack_128 + 0x54) == *(int *)(lVar9 + 0xc)) {
        if (*(long *)(lStack_128 + 0x20) == 0) {
          func_0x00f78af4();
code_r0x015d072c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0730);
          (*pcVar1)();
        }
        *(int *)(*(long *)(lStack_128 + 0x20) + 0x10) = auVar20._8_4_;
      }
    }
    func_0x00f78af4();
    goto code_r0x015d072c;
  }
  func_0x00f78af4();
  if (extraout_w1_02 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    lVar9 = *plVar3;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_138,*auVar20._0_8_);
    if (lVar9 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(lVar9,0);
  }
  lVar4 = __Unwind_Resume();
  uStack_170 = 0x3eb5000;
  puStack_148 = &Atlas_Gameplay_Kart_KartManager__GetLocalPlayerIndex;
  lStack_158 = lVar9;
  ppppuStack_150 = &pppuStack_100;
  auStack_168 = auVar20;
  if ((bRam0000000003eb534a & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb534a = 1;
  }
  uStack_188 = 0;
  uStack_180 = 0;
  lStack_178 = 0;
  if (lVar4 == 0) {
    func_0x00f78af4();
    if (extraout_w1_03 == 1) {
      plVar3 = (long *)___cxa_begin_catch();
      lVar9 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_188,uRam0000000003eb5000);
      if (lVar9 == 0) {
        return 0xffffffff;
      }
    }
    else {
      __Unwind_Resume();
      lVar9 = 0;
    }
    auVar20 = func_0x00f78ac0(lVar9,0);
    lVar9 = *auVar20._8_8_;
    if (lVar9 != 0) {
      lVar4 = 0;
      uVar2 = 0;
      do {
        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar2) {
          return auVar20._0_8_;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar2) {
          uVar6 = func_0x00f78b24();
          lVar9 = func_0x00f78ac0(uVar6,0);
          uVar2 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(extraout_d0,0,0);
          if ((uVar2 & 1) == 0) {
            if ((((extraout_x1 == 0) || (lVar4 = *(long *)(extraout_x1 + 0x10), lVar4 == 0)) ||
                (lVar10 == 0)) || (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)) {
              uVar2 = func_0x00f78af4();
              uVar6 = _UNK_033f8b20;
              *(undefined8 *)(uVar2 + 0x68) = _UNK_033f8b28;
              *(undefined8 *)(uVar2 + 0x60) = uVar6;
              return uVar2;
            }
            fVar14 = *(float *)(lVar10 + 0x2d0);
            fVar15 = *(float *)(lVar10 + 0x2d4);
            fVar16 = *(float *)(lVar10 + 0x2d8);
            fVar17 = *(float *)(lVar4 + 0x2d0);
            fVar18 = *(float *)(lVar4 + 0x2d4);
            fVar19 = *(float *)(lVar4 + 0x2d8);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            fVar14 = fVar14 - fVar17;
            fVar15 = fVar15 - fVar18;
            fVar16 = fVar16 - fVar19;
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar17 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
            fVar18 = 1.0 / SQRT(fVar17);
            fVar14 = fVar14 * fVar18;
            fVar15 = fVar15 * fVar18;
            fVar16 = fVar16 * fVar18;
            if (fVar17 <= 1.1754944e-38) {
              fVar14 = 0.0;
              fVar15 = 0.0;
              fVar16 = 0.0;
            }
            uVar11 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar14,fVar15,fVar16,0);
            fVar18 = *(float *)(lVar4 + 0x294);
            fVar17 = *(float *)(lVar4 + 0x298);
            fVar14 = *(float *)(lVar4 + 0x29c);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar19 = fVar14 * fVar14 + fVar18 * fVar18 + fVar17 * fVar17;
            fVar13 = 1.0 / SQRT(fVar19);
            fVar18 = fVar18 * fVar13;
            fVar17 = fVar17 * fVar13;
            fVar14 = fVar14 * fVar13;
            if (fVar19 <= 1.1754944e-38) {
              fVar18 = 0.0;
              fVar17 = 0.0;
              fVar14 = 0.0;
            }
            uVar12 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar18,fVar17,fVar14,0);
            uVar2 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(uVar11,fVar15,fVar16,uVar12,fVar17,fVar14,
                                    *(undefined4 *)(lVar9 + 0x68),0);
            if ((uVar2 & 1) != 0) {
              return 0;
            }
            if (1.0 < (float)extraout_d0) {
              return 0;
            }
            if (10.0 <= *(float *)(lVar4 + 0x194) - *(float *)(lVar10 + 0x194)) {
              return (ulong)(*(float *)(lVar9 + 0x6c) <=
                            (float)((ulong)*(undefined8 *)(lVar4 + 0x298) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(lVar10 + 0x298) >> 0x20) +
                            *(float *)(lVar4 + 0x294) * *(float *)(lVar10 + 0x294) +
                            (float)*(undefined8 *)(lVar4 + 0x298) *
                            (float)*(undefined8 *)(lVar10 + 0x298));
            }
          }
          return 0;
        }
        lVar9 = lVar9 + lVar4;
        lVar4 = lVar4 + 0xc;
        uVar2 = uVar2 + 1;
        *(undefined8 *)(lVar9 + 0x20) = 0x200000000;
        *(undefined4 *)(lVar9 + 0x28) = 0;
        lVar9 = *auVar20._8_8_;
      } while (lVar9 != 0);
    }
    uVar2 = func_0x00f78af4();
    return uVar2;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_188,lVar4,uRam0000000003d3ae20);
  uVar8 = 0;
  do {
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_188,uRam0000000003d328d0);
    if ((uVar2 & 1) == 0) {
      uVar8 = 0;
      iVar7 = 0x3f;
code_r0x015d083c:
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_188,uRam0000000003d328c8);
      if (iVar7 != 0x41) {
        uVar8 = 0xffffffff;
      }
      return (ulong)uVar8;
    }
    if (lStack_178 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0884);
      (*pcVar1)();
    }
    if (*(int *)(lStack_178 + 0x50) == 0) {
      iVar7 = 0x41;
      goto code_r0x015d083c;
    }
    uVar8 = uVar8 + 1;
  } while( true );
}



// ============================================================
// RVA: 0x15d03ac | Atlas.Gameplay.Kart.KartManager.FreezeKartByNetworkPlayer
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_KartManager__FreezeKartByNetworkPlayer
                (undefined8 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  long extraout_x1;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 extraout_d0;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  long lStack_108;
  undefined1 ***pppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar9 = param_3;
  if ((bRam0000000003eb5347 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5347 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_1[2] != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,param_1[2],uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_38 == 0) break;
      if (*(int *)(lStack_38 + 0x54) == *(int *)(param_3 + 0xc)) {
        if (*(long *)(lStack_38 + 0x20) == 0) {
          func_0x00f78af4();
code_r0x015d04b0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15d04b4);
          (*pcVar1)();
        }
        /*Atlas.Gameplay.Kart.KartPhysicsInput$$SetLogicFreeze*/ func_0x015dad98(*(long *)(lStack_38 + 0x20),param_2,0);
      }
    }
    func_0x00f78af4();
    goto code_r0x015d04b0;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    param_3 = *plVar3;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,*param_1);
    if (param_3 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(param_3,0);
  }
  auVar20 = __Unwind_Resume();
  lVar8 = auVar20._8_8_;
  puVar4 = auVar20._0_8_;
  uStack_80 = 0x3eb5000;
  puStack_58 = &Atlas_Gameplay_Kart_KartManager__SetActiveKartVisuals;
  puStack_78 = param_1;
  uStack_70 = param_2;
  lStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5348 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5348 = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  if (puVar4[2] != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,puVar4[2],uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_98,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_88 == 0) break;
      if (*(long *)(lStack_88 + 0x28) == 0) {
        func_0x00f78af4();
        goto code_r0x015d05e8;
      }
      /*Atlas.Gameplay.Kart.KartVisualComposite$$SetVisualRootActive*/ func_0x015eaca0(*(long *)(lStack_88 + 0x28),lVar8,0);
    }
    func_0x00f78af4();
code_r0x015d05e8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15d05ec);
    (*pcVar1)();
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    lVar8 = *plVar3;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,*puVar4);
    if (lVar8 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(lVar8,0);
  }
  auVar20 = __Unwind_Resume();
  uStack_d0 = 0x3eb5000;
  uStack_c8 = 0x3eb5000;
  puStack_a8 = &Atlas_Gameplay_Kart_KartManager__SetInputTypeByNetworkPlayer;
  lVar10 = lVar9;
  puStack_c0 = puVar4;
  lStack_b8 = lVar8;
  ppuStack_b0 = &puStack_60;
  if ((bRam0000000003eb5349 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5349 = 1;
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  lStack_d8 = 0;
  lVar8 = auVar20._0_8_[2];
  if (lVar8 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_e8,lVar8,uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e8,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_d8 == 0) break;
      if (*(int *)(lStack_d8 + 0x54) == *(int *)(lVar9 + 0xc)) {
        if (*(long *)(lStack_d8 + 0x20) == 0) {
          func_0x00f78af4();
code_r0x015d072c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0730);
          (*pcVar1)();
        }
        *(int *)(*(long *)(lStack_d8 + 0x20) + 0x10) = auVar20._8_4_;
      }
    }
    func_0x00f78af4();
    goto code_r0x015d072c;
  }
  func_0x00f78af4();
  if (extraout_w1_01 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    lVar9 = *plVar3;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,*auVar20._0_8_);
    if (lVar9 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(lVar9,0);
  }
  lVar8 = __Unwind_Resume();
  uStack_120 = 0x3eb5000;
  puStack_f8 = &Atlas_Gameplay_Kart_KartManager__GetLocalPlayerIndex;
  lStack_108 = lVar9;
  pppuStack_100 = &ppuStack_b0;
  auStack_118 = auVar20;
  if ((bRam0000000003eb534a & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb534a = 1;
  }
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_128 = 0;
  if (lVar8 == 0) {
    func_0x00f78af4();
    if (extraout_w1_02 == 1) {
      plVar3 = (long *)___cxa_begin_catch();
      lVar9 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_138,uRam0000000003eb5000);
      if (lVar9 == 0) {
        return 0xffffffff;
      }
    }
    else {
      __Unwind_Resume();
      lVar9 = 0;
    }
    auVar20 = func_0x00f78ac0(lVar9,0);
    lVar9 = *auVar20._8_8_;
    if (lVar9 != 0) {
      lVar8 = 0;
      uVar2 = 0;
      do {
        if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar2) {
          return auVar20._0_8_;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar2) {
          uVar5 = func_0x00f78b24();
          lVar9 = func_0x00f78ac0(uVar5,0);
          uVar2 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(extraout_d0,0,0);
          if ((uVar2 & 1) == 0) {
            if ((((extraout_x1 == 0) || (lVar8 = *(long *)(extraout_x1 + 0x10), lVar8 == 0)) ||
                (lVar10 == 0)) || (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)) {
              uVar2 = func_0x00f78af4();
              uVar5 = _UNK_033f8b20;
              *(undefined8 *)(uVar2 + 0x68) = _UNK_033f8b28;
              *(undefined8 *)(uVar2 + 0x60) = uVar5;
              return uVar2;
            }
            fVar14 = *(float *)(lVar10 + 0x2d0);
            fVar15 = *(float *)(lVar10 + 0x2d4);
            fVar16 = *(float *)(lVar10 + 0x2d8);
            fVar17 = *(float *)(lVar8 + 0x2d0);
            fVar18 = *(float *)(lVar8 + 0x2d4);
            fVar19 = *(float *)(lVar8 + 0x2d8);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            fVar14 = fVar14 - fVar17;
            fVar15 = fVar15 - fVar18;
            fVar16 = fVar16 - fVar19;
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar17 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
            fVar18 = 1.0 / SQRT(fVar17);
            fVar14 = fVar14 * fVar18;
            fVar15 = fVar15 * fVar18;
            fVar16 = fVar16 * fVar18;
            if (fVar17 <= 1.1754944e-38) {
              fVar14 = 0.0;
              fVar15 = 0.0;
              fVar16 = 0.0;
            }
            uVar11 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar14,fVar15,fVar16,0);
            fVar18 = *(float *)(lVar8 + 0x294);
            fVar17 = *(float *)(lVar8 + 0x298);
            fVar14 = *(float *)(lVar8 + 0x29c);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar19 = fVar14 * fVar14 + fVar18 * fVar18 + fVar17 * fVar17;
            fVar13 = 1.0 / SQRT(fVar19);
            fVar18 = fVar18 * fVar13;
            fVar17 = fVar17 * fVar13;
            fVar14 = fVar14 * fVar13;
            if (fVar19 <= 1.1754944e-38) {
              fVar18 = 0.0;
              fVar17 = 0.0;
              fVar14 = 0.0;
            }
            uVar12 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar18,fVar17,fVar14,0);
            uVar2 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(uVar11,fVar15,fVar16,uVar12,fVar17,fVar14,
                                    *(undefined4 *)(lVar9 + 0x68),0);
            if ((uVar2 & 1) != 0) {
              return 0;
            }
            if (1.0 < (float)extraout_d0) {
              return 0;
            }
            if (10.0 <= *(float *)(lVar8 + 0x194) - *(float *)(lVar10 + 0x194)) {
              return (ulong)(*(float *)(lVar9 + 0x6c) <=
                            (float)((ulong)*(undefined8 *)(lVar8 + 0x298) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(lVar10 + 0x298) >> 0x20) +
                            *(float *)(lVar8 + 0x294) * *(float *)(lVar10 + 0x294) +
                            (float)*(undefined8 *)(lVar8 + 0x298) *
                            (float)*(undefined8 *)(lVar10 + 0x298));
            }
          }
          return 0;
        }
        lVar9 = lVar9 + lVar8;
        lVar8 = lVar8 + 0xc;
        uVar2 = uVar2 + 1;
        *(undefined8 *)(lVar9 + 0x20) = 0x200000000;
        *(undefined4 *)(lVar9 + 0x28) = 0;
        lVar9 = *auVar20._8_8_;
      } while (lVar9 != 0);
    }
    uVar2 = func_0x00f78af4();
    return uVar2;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_138,lVar8,uRam0000000003d3ae20);
  uVar7 = 0;
  do {
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_138,uRam0000000003d328d0);
    if ((uVar2 & 1) == 0) {
      uVar7 = 0;
      iVar6 = 0x3f;
code_r0x015d083c:
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_138,uRam0000000003d328c8);
      if (iVar6 != 0x41) {
        uVar7 = 0xffffffff;
      }
      return (ulong)uVar7;
    }
    if (lStack_128 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0884);
      (*pcVar1)();
    }
    if (*(int *)(lStack_128 + 0x50) == 0) {
      iVar6 = 0x41;
      goto code_r0x015d083c;
    }
    uVar7 = uVar7 + 1;
  } while( true );
}



// ============================================================
// RVA: 0x15d04f8 | Atlas.Gameplay.Kart.KartManager.SetActiveKartVisuals
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_KartManager__SetActiveKartVisuals
                (undefined8 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  long extraout_x1;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 extraout_d0;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb5348 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5348 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_1[2] != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,param_1[2],uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_38 == 0) break;
      if (*(long *)(lStack_38 + 0x28) == 0) {
        func_0x00f78af4();
        goto code_r0x015d05e8;
      }
      /*Atlas.Gameplay.Kart.KartVisualComposite$$SetVisualRootActive*/ func_0x015eaca0(*(long *)(lStack_38 + 0x28),param_2,0);
    }
    func_0x00f78af4();
code_r0x015d05e8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15d05ec);
    (*pcVar1)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    lVar9 = *plVar3;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,*param_1);
    if (lVar9 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(lVar9,0);
  }
  auVar19 = __Unwind_Resume();
  puStack_58 = &Atlas_Gameplay_Kart_KartManager__SetInputTypeByNetworkPlayer;
  lVar9 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5349 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5349 = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  lVar4 = auVar19._0_8_[2];
  if (lVar4 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,lVar4,uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_98,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_88 == 0) break;
      if (*(int *)(lStack_88 + 0x54) == *(int *)(param_3 + 0xc)) {
        if (*(long *)(lStack_88 + 0x20) == 0) {
          func_0x00f78af4();
code_r0x015d072c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0730);
          (*pcVar1)();
        }
        *(int *)(*(long *)(lStack_88 + 0x20) + 0x10) = auVar19._8_4_;
      }
    }
    func_0x00f78af4();
    goto code_r0x015d072c;
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    param_3 = *plVar3;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,*auVar19._0_8_);
    if (param_3 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(param_3,0);
  }
  lVar4 = __Unwind_Resume();
  uStack_d0 = 0x3eb5000;
  puStack_a8 = &Atlas_Gameplay_Kart_KartManager__GetLocalPlayerIndex;
  lStack_b8 = param_3;
  ppuStack_b0 = &puStack_60;
  auStack_c8 = auVar19;
  if ((bRam0000000003eb534a & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb534a = 1;
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  lStack_d8 = 0;
  if (lVar4 == 0) {
    func_0x00f78af4();
    if (extraout_w1_01 == 1) {
      plVar3 = (long *)___cxa_begin_catch();
      lVar4 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,uRam0000000003eb5000);
      if (lVar4 == 0) {
        return 0xffffffff;
      }
    }
    else {
      __Unwind_Resume();
      lVar4 = 0;
    }
    auVar19 = func_0x00f78ac0(lVar4,0);
    lVar4 = *auVar19._8_8_;
    if (lVar4 != 0) {
      lVar7 = 0;
      uVar2 = 0;
      do {
        if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar2) {
          return auVar19._0_8_;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar2) {
          uVar5 = func_0x00f78b24();
          lVar4 = func_0x00f78ac0(uVar5,0);
          uVar2 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(extraout_d0,0,0);
          if ((uVar2 & 1) == 0) {
            if ((((extraout_x1 == 0) || (lVar7 = *(long *)(extraout_x1 + 0x10), lVar7 == 0)) ||
                (lVar9 == 0)) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) {
              uVar2 = func_0x00f78af4();
              uVar5 = _UNK_033f8b20;
              *(undefined8 *)(uVar2 + 0x68) = _UNK_033f8b28;
              *(undefined8 *)(uVar2 + 0x60) = uVar5;
              return uVar2;
            }
            fVar13 = *(float *)(lVar9 + 0x2d0);
            fVar14 = *(float *)(lVar9 + 0x2d4);
            fVar15 = *(float *)(lVar9 + 0x2d8);
            fVar16 = *(float *)(lVar7 + 0x2d0);
            fVar17 = *(float *)(lVar7 + 0x2d4);
            fVar18 = *(float *)(lVar7 + 0x2d8);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            fVar13 = fVar13 - fVar16;
            fVar14 = fVar14 - fVar17;
            fVar15 = fVar15 - fVar18;
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar16 = fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14;
            fVar17 = 1.0 / SQRT(fVar16);
            fVar13 = fVar13 * fVar17;
            fVar14 = fVar14 * fVar17;
            fVar15 = fVar15 * fVar17;
            if (fVar16 <= 1.1754944e-38) {
              fVar13 = 0.0;
              fVar14 = 0.0;
              fVar15 = 0.0;
            }
            uVar10 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar13,fVar14,fVar15,0);
            fVar17 = *(float *)(lVar7 + 0x294);
            fVar16 = *(float *)(lVar7 + 0x298);
            fVar13 = *(float *)(lVar7 + 0x29c);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar18 = fVar13 * fVar13 + fVar17 * fVar17 + fVar16 * fVar16;
            fVar12 = 1.0 / SQRT(fVar18);
            fVar17 = fVar17 * fVar12;
            fVar16 = fVar16 * fVar12;
            fVar13 = fVar13 * fVar12;
            if (fVar18 <= 1.1754944e-38) {
              fVar17 = 0.0;
              fVar16 = 0.0;
              fVar13 = 0.0;
            }
            uVar11 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar17,fVar16,fVar13,0);
            uVar2 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(uVar10,fVar14,fVar15,uVar11,fVar16,fVar13,
                                    *(undefined4 *)(lVar4 + 0x68),0);
            if ((uVar2 & 1) != 0) {
              return 0;
            }
            if (1.0 < (float)extraout_d0) {
              return 0;
            }
            if (10.0 <= *(float *)(lVar7 + 0x194) - *(float *)(lVar9 + 0x194)) {
              return (ulong)(*(float *)(lVar4 + 0x6c) <=
                            (float)((ulong)*(undefined8 *)(lVar7 + 0x298) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(lVar9 + 0x298) >> 0x20) +
                            *(float *)(lVar7 + 0x294) * *(float *)(lVar9 + 0x294) +
                            (float)*(undefined8 *)(lVar7 + 0x298) *
                            (float)*(undefined8 *)(lVar9 + 0x298));
            }
          }
          return 0;
        }
        lVar4 = lVar4 + lVar7;
        lVar7 = lVar7 + 0xc;
        uVar2 = uVar2 + 1;
        *(undefined8 *)(lVar4 + 0x20) = 0x200000000;
        *(undefined4 *)(lVar4 + 0x28) = 0;
        lVar4 = *auVar19._8_8_;
      } while (lVar4 != 0);
    }
    uVar2 = func_0x00f78af4();
    return uVar2;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_e8,lVar4,uRam0000000003d3ae20);
  uVar8 = 0;
  do {
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e8,uRam0000000003d328d0);
    if ((uVar2 & 1) == 0) {
      uVar8 = 0;
      iVar6 = 0x3f;
code_r0x015d083c:
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,uRam0000000003d328c8);
      if (iVar6 != 0x41) {
        uVar8 = 0xffffffff;
      }
      return (ulong)uVar8;
    }
    if (lStack_d8 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0884);
      (*pcVar1)();
    }
    if (*(int *)(lStack_d8 + 0x50) == 0) {
      iVar6 = 0x41;
      goto code_r0x015d083c;
    }
    uVar8 = uVar8 + 1;
  } while( true );
}



// ============================================================
// RVA: 0x15d0630 | Atlas.Gameplay.Kart.KartManager.SetInputTypeByNetworkPlayer
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_KartManager__SetInputTypeByNetworkPlayer
                (undefined8 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 extraout_d0;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar9 = param_3;
  if ((bRam0000000003eb5349 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb5349 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_1[2] != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,param_1[2],uRam0000000003d3ae20);
    while( true ) {
      uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d328d0);
      if ((uVar2 & 1) == 0) {
        uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d328c8);
        return uVar2;
      }
      if (lStack_38 == 0) break;
      if (*(int *)(lStack_38 + 0x54) == *(int *)(param_3 + 0xc)) {
        if (*(long *)(lStack_38 + 0x20) == 0) {
          func_0x00f78af4();
code_r0x015d072c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0730);
          (*pcVar1)();
        }
        *(int *)(*(long *)(lStack_38 + 0x20) + 0x10) = (int)param_2;
      }
    }
    func_0x00f78af4();
    goto code_r0x015d072c;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    param_3 = *plVar3;
    ___cxa_end_catch();
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,*param_1);
    if (param_3 == 0) {
      return uVar2;
    }
    func_0x00f78ac0(param_3,0);
  }
  lVar4 = __Unwind_Resume();
  uStack_80 = 0x3eb5000;
  puStack_58 = &Atlas_Gameplay_Kart_KartManager__GetLocalPlayerIndex;
  puStack_78 = param_1;
  uStack_70 = param_2;
  lStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb534a & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb534a = 1;
  }
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  if (lVar4 == 0) {
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar3 = (long *)___cxa_begin_catch();
      lVar4 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,uRam0000000003eb5000);
      if (lVar4 == 0) {
        return 0xffffffff;
      }
    }
    else {
      __Unwind_Resume();
      lVar4 = 0;
    }
    auVar19 = func_0x00f78ac0(lVar4,0);
    lVar4 = *auVar19._8_8_;
    if (lVar4 != 0) {
      lVar7 = 0;
      uVar2 = 0;
      do {
        if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar2) {
          return auVar19._0_8_;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar2) {
          uVar5 = func_0x00f78b24();
          lVar4 = func_0x00f78ac0(uVar5,0);
          uVar2 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(extraout_d0,0,0);
          if ((uVar2 & 1) == 0) {
            if ((((extraout_x1 == 0) || (lVar7 = *(long *)(extraout_x1 + 0x10), lVar7 == 0)) ||
                (lVar9 == 0)) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) {
              uVar2 = func_0x00f78af4();
              uVar5 = _UNK_033f8b20;
              *(undefined8 *)(uVar2 + 0x68) = _UNK_033f8b28;
              *(undefined8 *)(uVar2 + 0x60) = uVar5;
              return uVar2;
            }
            fVar13 = *(float *)(lVar9 + 0x2d0);
            fVar14 = *(float *)(lVar9 + 0x2d4);
            fVar15 = *(float *)(lVar9 + 0x2d8);
            fVar16 = *(float *)(lVar7 + 0x2d0);
            fVar17 = *(float *)(lVar7 + 0x2d4);
            fVar18 = *(float *)(lVar7 + 0x2d8);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            fVar13 = fVar13 - fVar16;
            fVar14 = fVar14 - fVar17;
            fVar15 = fVar15 - fVar18;
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar16 = fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14;
            fVar17 = 1.0 / SQRT(fVar16);
            fVar13 = fVar13 * fVar17;
            fVar14 = fVar14 * fVar17;
            fVar15 = fVar15 * fVar17;
            if (fVar16 <= 1.1754944e-38) {
              fVar13 = 0.0;
              fVar14 = 0.0;
              fVar15 = 0.0;
            }
            uVar10 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar13,fVar14,fVar15,0);
            fVar17 = *(float *)(lVar7 + 0x294);
            fVar16 = *(float *)(lVar7 + 0x298);
            fVar13 = *(float *)(lVar7 + 0x29c);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar18 = fVar13 * fVar13 + fVar17 * fVar17 + fVar16 * fVar16;
            fVar12 = 1.0 / SQRT(fVar18);
            fVar17 = fVar17 * fVar12;
            fVar16 = fVar16 * fVar12;
            fVar13 = fVar13 * fVar12;
            if (fVar18 <= 1.1754944e-38) {
              fVar17 = 0.0;
              fVar16 = 0.0;
              fVar13 = 0.0;
            }
            uVar11 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar17,fVar16,fVar13,0);
            uVar2 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(uVar10,fVar14,fVar15,uVar11,fVar16,fVar13,
                                    *(undefined4 *)(lVar4 + 0x68),0);
            if ((uVar2 & 1) != 0) {
              return 0;
            }
            if (1.0 < (float)extraout_d0) {
              return 0;
            }
            if (10.0 <= *(float *)(lVar7 + 0x194) - *(float *)(lVar9 + 0x194)) {
              return (ulong)(*(float *)(lVar4 + 0x6c) <=
                            (float)((ulong)*(undefined8 *)(lVar7 + 0x298) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(lVar9 + 0x298) >> 0x20) +
                            *(float *)(lVar7 + 0x294) * *(float *)(lVar9 + 0x294) +
                            (float)*(undefined8 *)(lVar7 + 0x298) *
                            (float)*(undefined8 *)(lVar9 + 0x298));
            }
          }
          return 0;
        }
        lVar4 = lVar4 + lVar7;
        lVar7 = lVar7 + 0xc;
        uVar2 = uVar2 + 1;
        *(undefined8 *)(lVar4 + 0x20) = 0x200000000;
        *(undefined4 *)(lVar4 + 0x28) = 0;
        lVar4 = *auVar19._8_8_;
      } while (lVar4 != 0);
    }
    uVar2 = func_0x00f78af4();
    return uVar2;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,lVar4,uRam0000000003d3ae20);
  uVar8 = 0;
  do {
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_98,uRam0000000003d328d0);
    if ((uVar2 & 1) == 0) {
      uVar8 = 0;
      iVar6 = 0x3f;
code_r0x015d083c:
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,uRam0000000003d328c8);
      if (iVar6 != 0x41) {
        uVar8 = 0xffffffff;
      }
      return (ulong)uVar8;
    }
    if (lStack_88 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0884);
      (*pcVar1)();
    }
    if (*(int *)(lStack_88 + 0x50) == 0) {
      iVar6 = 0x41;
      goto code_r0x015d083c;
    }
    uVar8 = uVar8 + 1;
  } while( true );
}



// ============================================================
// RVA: 0x15d0770 | Atlas.Gameplay.Kart.KartManager.GetLocalPlayerIndex
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_KartManager__GetLocalPlayerIndex
                (long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  int extraout_w1;
  long extraout_x1;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 extraout_d0;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb534a & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb534a = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (param_1 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar3 = (long *)___cxa_begin_catch();
      lVar8 = *plVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003eb5000);
      if (lVar8 == 0) {
        return 0xffffffff;
      }
    }
    else {
      __Unwind_Resume();
      lVar8 = 0;
    }
    auVar19 = func_0x00f78ac0(lVar8,0);
    lVar8 = *auVar19._8_8_;
    if (lVar8 != 0) {
      lVar6 = 0;
      uVar2 = 0;
      do {
        if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar2) {
          return auVar19._0_8_;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar2) {
          uVar4 = func_0x00f78b24();
          lVar8 = func_0x00f78ac0(uVar4,0);
          uVar2 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(extraout_d0,0,0);
          if ((uVar2 & 1) == 0) {
            if ((((extraout_x1 == 0) || (lVar6 = *(long *)(extraout_x1 + 0x10), lVar6 == 0)) ||
                (param_3 == 0)) || (lVar9 = *(long *)(param_3 + 0x10), lVar9 == 0)) {
              uVar2 = func_0x00f78af4();
              uVar4 = _UNK_033f8b20;
              *(undefined8 *)(uVar2 + 0x68) = _UNK_033f8b28;
              *(undefined8 *)(uVar2 + 0x60) = uVar4;
              return uVar2;
            }
            fVar13 = *(float *)(lVar9 + 0x2d0);
            fVar14 = *(float *)(lVar9 + 0x2d4);
            fVar15 = *(float *)(lVar9 + 0x2d8);
            fVar16 = *(float *)(lVar6 + 0x2d0);
            fVar17 = *(float *)(lVar6 + 0x2d4);
            fVar18 = *(float *)(lVar6 + 0x2d8);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            fVar13 = fVar13 - fVar16;
            fVar14 = fVar14 - fVar17;
            fVar15 = fVar15 - fVar18;
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar16 = fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14;
            fVar17 = 1.0 / SQRT(fVar16);
            fVar13 = fVar13 * fVar17;
            fVar14 = fVar14 * fVar17;
            fVar15 = fVar15 * fVar17;
            if (fVar16 <= 1.1754944e-38) {
              fVar13 = 0.0;
              fVar14 = 0.0;
              fVar15 = 0.0;
            }
            uVar10 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar13,fVar14,fVar15,0);
            fVar17 = *(float *)(lVar6 + 0x294);
            fVar16 = *(float *)(lVar6 + 0x298);
            fVar13 = *(float *)(lVar6 + 0x29c);
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar18 = fVar13 * fVar13 + fVar17 * fVar17 + fVar16 * fVar16;
            fVar12 = 1.0 / SQRT(fVar18);
            fVar17 = fVar17 * fVar12;
            fVar16 = fVar16 * fVar12;
            fVar13 = fVar13 * fVar12;
            if (fVar18 <= 1.1754944e-38) {
              fVar17 = 0.0;
              fVar16 = 0.0;
              fVar13 = 0.0;
            }
            uVar11 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar17,fVar16,fVar13,0);
            uVar2 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(uVar10,fVar14,fVar15,uVar11,fVar16,fVar13,
                                    *(undefined4 *)(lVar8 + 0x68),0);
            if ((uVar2 & 1) != 0) {
              return 0;
            }
            if (1.0 < (float)extraout_d0) {
              return 0;
            }
            if (10.0 <= *(float *)(lVar6 + 0x194) - *(float *)(lVar9 + 0x194)) {
              return (ulong)(*(float *)(lVar8 + 0x6c) <=
                            (float)((ulong)*(undefined8 *)(lVar6 + 0x298) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(lVar9 + 0x298) >> 0x20) +
                            *(float *)(lVar6 + 0x294) * *(float *)(lVar9 + 0x294) +
                            (float)*(undefined8 *)(lVar6 + 0x298) *
                            (float)*(undefined8 *)(lVar9 + 0x298));
            }
          }
          return 0;
        }
        lVar8 = lVar8 + lVar6;
        lVar6 = lVar6 + 0xc;
        uVar2 = uVar2 + 1;
        *(undefined8 *)(lVar8 + 0x20) = 0x200000000;
        *(undefined4 *)(lVar8 + 0x28) = 0;
        lVar8 = *auVar19._8_8_;
      } while (lVar8 != 0);
    }
    uVar2 = func_0x00f78af4();
    return uVar2;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,param_1,uRam0000000003d3ae20);
  uVar7 = 0;
  do {
    uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d328d0);
    if ((uVar2 & 1) == 0) {
      uVar7 = 0;
      iVar5 = 0x3f;
code_r0x015d083c:
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d328c8);
      if (iVar5 != 0x41) {
        uVar7 = 0xffffffff;
      }
      return (ulong)uVar7;
    }
    if (lStack_38 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0884);
      (*pcVar1)();
    }
    if (*(int *)(lStack_38 + 0x50) == 0) {
      iVar5 = 0x41;
      goto code_r0x015d083c;
    }
    uVar7 = uVar7 + 1;
  } while( true );
}



// ============================================================
// RVA: 0x15d08c8 | Atlas.Gameplay.Kart.KartManager.ResetAllKartSideOnTimePairings
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_KartManager__ResetAllKartSideOnTimePairings
                (ulong param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  long extraout_x1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 extraout_d0;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar4 = 0;
    uVar2 = 0;
    do {
      if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar2) {
        return param_1;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        uVar1 = func_0x00f78b24();
        lVar3 = func_0x00f78ac0(uVar1,0);
        uVar2 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(extraout_d0,0,0);
        if ((uVar2 & 1) == 0) {
          if ((((extraout_x1 == 0) || (lVar4 = *(long *)(extraout_x1 + 0x10), lVar4 == 0)) ||
              (param_3 == 0)) || (lVar5 = *(long *)(param_3 + 0x10), lVar5 == 0)) {
            uVar2 = func_0x00f78af4();
            uVar1 = _UNK_033f8b20;
            *(undefined8 *)(uVar2 + 0x68) = _UNK_033f8b28;
            *(undefined8 *)(uVar2 + 0x60) = uVar1;
            return uVar2;
          }
          fVar9 = *(float *)(lVar5 + 0x2d0);
          fVar10 = *(float *)(lVar5 + 0x2d4);
          fVar11 = *(float *)(lVar5 + 0x2d8);
          fVar12 = *(float *)(lVar4 + 0x2d0);
          fVar13 = *(float *)(lVar4 + 0x2d4);
          fVar14 = *(float *)(lVar4 + 0x2d8);
          if (cRam0000000003ca34fc == '\0') {
            func_0x00f78a20(0x3d232c0);
            cRam0000000003ca34fc = '\x01';
          }
          fVar9 = fVar9 - fVar12;
          fVar10 = fVar10 - fVar13;
          fVar11 = fVar11 - fVar14;
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar12 = fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10;
          fVar13 = 1.0 / SQRT(fVar12);
          fVar9 = fVar9 * fVar13;
          fVar10 = fVar10 * fVar13;
          fVar11 = fVar11 * fVar13;
          if (fVar12 <= 1.1754944e-38) {
            fVar9 = 0.0;
            fVar10 = 0.0;
            fVar11 = 0.0;
          }
          uVar6 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar9,fVar10,fVar11,0);
          fVar13 = *(float *)(lVar4 + 0x294);
          fVar12 = *(float *)(lVar4 + 0x298);
          fVar9 = *(float *)(lVar4 + 0x29c);
          if (cRam0000000003ca34fc == '\0') {
            func_0x00f78a20(0x3d232c0);
            cRam0000000003ca34fc = '\x01';
          }
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar14 = fVar9 * fVar9 + fVar13 * fVar13 + fVar12 * fVar12;
          fVar8 = 1.0 / SQRT(fVar14);
          fVar13 = fVar13 * fVar8;
          fVar12 = fVar12 * fVar8;
          fVar9 = fVar9 * fVar8;
          if (fVar14 <= 1.1754944e-38) {
            fVar13 = 0.0;
            fVar12 = 0.0;
            fVar9 = 0.0;
          }
          uVar7 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar13,fVar12,fVar9,0);
          uVar2 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(uVar6,fVar10,fVar11,uVar7,fVar12,fVar9,
                                  *(undefined4 *)(lVar3 + 0x68),0);
          if ((uVar2 & 1) != 0) {
            return 0;
          }
          if (1.0 < (float)extraout_d0) {
            return 0;
          }
          if (10.0 <= *(float *)(lVar4 + 0x194) - *(float *)(lVar5 + 0x194)) {
            return (ulong)(*(float *)(lVar3 + 0x6c) <=
                          (float)((ulong)*(undefined8 *)(lVar4 + 0x298) >> 0x20) *
                          (float)((ulong)*(undefined8 *)(lVar5 + 0x298) >> 0x20) +
                          *(float *)(lVar4 + 0x294) * *(float *)(lVar5 + 0x294) +
                          (float)*(undefined8 *)(lVar4 + 0x298) *
                          (float)*(undefined8 *)(lVar5 + 0x298));
          }
        }
        return 0;
      }
      lVar3 = lVar3 + lVar4;
      lVar4 = lVar4 + 0xc;
      uVar2 = uVar2 + 1;
      *(undefined8 *)(lVar3 + 0x20) = 0x200000000;
      *(undefined4 *)(lVar3 + 0x28) = 0;
      lVar3 = *param_2;
    } while (lVar3 != 0);
  }
  uVar2 = func_0x00f78af4();
  return uVar2;
}



// ============================================================
// RVA: 0x15d092c | Atlas.Gameplay.Kart.KartManager.CanPlayOvertakeAnimations
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_KartManager__CanPlayOvertakeAnimations
                (undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar2 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if ((((param_3 == 0) || (lVar4 = *(long *)(param_3 + 0x10), lVar4 == 0)) || (param_4 == 0)) ||
       (lVar3 = *(long *)(param_4 + 0x10), lVar3 == 0)) {
      uVar2 = func_0x00f78af4();
      uVar1 = _UNK_033f8b20;
      *(undefined8 *)(uVar2 + 0x68) = _UNK_033f8b28;
      *(undefined8 *)(uVar2 + 0x60) = uVar1;
      return uVar2;
    }
    fVar8 = *(float *)(lVar3 + 0x2d0);
    fVar9 = *(float *)(lVar3 + 0x2d4);
    fVar10 = *(float *)(lVar3 + 0x2d8);
    fVar11 = *(float *)(lVar4 + 0x2d0);
    fVar12 = *(float *)(lVar4 + 0x2d4);
    fVar13 = *(float *)(lVar4 + 0x2d8);
    if (cRam0000000003ca34fc == '\0') {
      func_0x00f78a20(0x3d232c0);
      cRam0000000003ca34fc = '\x01';
    }
    fVar8 = fVar8 - fVar11;
    fVar9 = fVar9 - fVar12;
    fVar10 = fVar10 - fVar13;
    if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar11 = fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9;
    fVar12 = 1.0 / SQRT(fVar11);
    fVar8 = fVar8 * fVar12;
    fVar9 = fVar9 * fVar12;
    fVar10 = fVar10 * fVar12;
    if (fVar11 <= 1.1754944e-38) {
      fVar8 = 0.0;
      fVar9 = 0.0;
      fVar10 = 0.0;
    }
    uVar5 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar8,fVar9,fVar10,0);
    fVar12 = *(float *)(lVar4 + 0x294);
    fVar11 = *(float *)(lVar4 + 0x298);
    fVar8 = *(float *)(lVar4 + 0x29c);
    if (cRam0000000003ca34fc == '\0') {
      func_0x00f78a20(0x3d232c0);
      cRam0000000003ca34fc = '\x01';
    }
    if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar13 = fVar8 * fVar8 + fVar12 * fVar12 + fVar11 * fVar11;
    fVar7 = 1.0 / SQRT(fVar13);
    fVar12 = fVar12 * fVar7;
    fVar11 = fVar11 * fVar7;
    fVar8 = fVar8 * fVar7;
    if (fVar13 <= 1.1754944e-38) {
      fVar12 = 0.0;
      fVar11 = 0.0;
      fVar8 = 0.0;
    }
    uVar6 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar12,fVar11,fVar8,0);
    uVar2 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(uVar5,fVar9,fVar10,uVar6,fVar11,fVar8,*(undefined4 *)(param_2 + 0x68),0)
    ;
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    if (1.0 < (float)param_1) {
      return 0;
    }
    if (10.0 <= *(float *)(lVar4 + 0x194) - *(float *)(lVar3 + 0x194)) {
      return (ulong)(*(float *)(param_2 + 0x6c) <=
                    (float)((ulong)*(undefined8 *)(lVar4 + 0x298) >> 0x20) *
                    (float)((ulong)*(undefined8 *)(lVar3 + 0x298) >> 0x20) +
                    *(float *)(lVar4 + 0x294) * *(float *)(lVar3 + 0x294) +
                    (float)*(undefined8 *)(lVar4 + 0x298) * (float)*(undefined8 *)(lVar3 + 0x298));
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x15d0b88 | Atlas.Gameplay.Kart.KartManager..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartManager___ctor(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_033f8b20;
  *(undefined8 *)(param_1 + 0x68) = _UNK_033f8b28;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return;
}



