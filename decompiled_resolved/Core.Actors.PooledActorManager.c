// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Actors.PooledActorManager

// ============================================================
// RVA: 0x1630cc4 | Core.Actors.PooledActorManager.Init
// ============================================================

void Core_Actors_PooledActorManager__Init(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// ============================================================
// RVA: 0x1630ccc | Core.Actors.PooledActorManager.DeInit
// ============================================================

void Core_Actors_PooledActorManager__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// ============================================================
// RVA: 0x1630cd4 | Core.Actors.PooledActorManager..ctor
// ============================================================

void Core_Actors_PooledActorManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x18bd53c | Core.Actors.PooledActorManager.DeInitAndRemovePool<AoEHit>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [16];
  undefined8 **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65db & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65db = 1;
  }
  uVar13 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar5);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  uStack_60 = 0x3d25458;
  puStack_38 = &Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  puVar9 = param_3;
  uStack_58 = uVar13;
  lStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar17._0_8_ != 0) {
    puVar9 = *(undefined8 **)param_3[6];
    (*(code *)*puVar9)();
    lVar6 = *(long *)(auVar17._0_8_ + 0x10);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_3[6] + 8))(lVar6,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_68 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar10 = puVar9;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  auVar19._8_8_ = puVar10;
  auVar19._0_8_ = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  puStack_a8 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar11 = puVar10;
  puVar12 = param_4;
  uStack_d0 = uVar13;
  puStack_c8 = puVar9;
  ppuStack_b0 = &ppuStack_70;
  auStack_c0 = auVar17;
  if (*(long *)(lVar6 + 0x18) != 0) {
    puVar11 = *(undefined8 **)(param_4[6] + 8);
    (*(code *)*puVar11)(*(long *)(lVar6 + 0x18),puVar10);
    puVar9 = param_4;
    auVar17 = auVar19;
    if (*(long *)(lVar6 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_4[6] + 0x10))
                         (*(long *)(lVar6 + 0x10),auVar18._8_8_,puVar10);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar14 = auVar18._8_8_;
  lVar16 = auVar18._0_8_;
  puStack_d8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_100 = lVar6;
  puStack_f8 = puVar9;
  ppuStack_e0 = &ppuStack_b0;
  auStack_f0 = auVar17;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar13 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar16,uVar5);
      return uVar13;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_108 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = puVar11;
  lStack_118 = lVar16;
  ppuStack_110 = &ppuStack_e0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    puVar9 = *(undefined8 **)puVar11[6];
    lStack_120 = lVar14;
    uVar5 = (*(code *)*puVar9)();
    auVar18._8_8_ = lStack_120;
    auVar18._0_8_ = puVar11;
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar11[6] + 8))();
      return uVar13;
    }
  }
  lStack_120 = auVar18._8_8_;
  auVar17 = func_0x00f78af4();
  uStack_150 = 0x3d25458;
  puStack_128 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_148 = uVar13;
  lStack_140 = lVar6;
  uStack_138 = auVar18._0_8_;
  ppuStack_130 = &ppuStack_110;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar13 = **(undefined8 **)(auVar17._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(auVar17._8_8_ + 0x30) + 8))
                         (auVar17._0_8_,uVar13);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_158 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_180 = &ppuStack_160;
  uStack_168 = 0;
  ppuStack_160 = &ppuStack_130;
  if (auVar17._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar17._0_8_,auVar17._8_8_,&uStack_168);
    return uStack_168;
  }
  auVar17 = func_0x00f78af4();
  puStack_178 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar10 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar19 = func_0x00f78af4();
  uVar5 = auVar19._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = puVar12;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = puVar12;
  lVar6 = auVar19._0_8_;
  puStack_1b8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_1e0 = uVar13;
  puStack_1d8 = puVar9;
  ppuStack_1c0 = &ppuStack_180;
  auStack_1d0 = auVar17;
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar13 = (*(code *)**(undefined8 **)puVar12[6])();
    if ((int)uVar13 != 0) {
      puVar9 = puVar10;
      auVar17 = auVar2;
      if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar7 = (*(code *)**(undefined8 **)(puVar12[6] + 8))(*(long *)(lVar6 + 0x18),*puVar10);
      if ((uVar7 & 1) == 0) {
        auVar17 = auVar3;
        if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(puVar12[6] + 0x10))(*(long *)(lVar6 + 0x10),uVar5,*puVar10);
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
    }
    return uVar13;
  }
code_r0x018bdaa0:
  auVar20 = func_0x00f78af4();
  lVar16 = auVar20._8_8_;
  puStack_1e8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_218 = 0;
  lVar14 = **(long **)(lVar16 + 0x30);
  uVar1 = *(ushort *)(lVar14 + 0x132);
  lStack_210 = lVar6;
  puStack_208 = puVar9;
  ppuStack_1f0 = &ppuStack_1c0;
  auStack_200 = auVar17;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar14);
    uVar1 = *(ushort *)(lVar14 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar14 = **(long **)(lVar16 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      lVar14 = **(long **)(lVar16 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      func_0x00f78ad0(lVar14);
    }
  }
  lVar14 = **(long **)(lVar16 + 0x30);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  if (**(long **)(lVar14 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
              (**(long **)(lVar14 + 0xb8),auVar20._0_8_,&uStack_218);
    return uStack_218;
  }
  auVar17 = func_0x00f78af4();
  lVar8 = auVar17._8_8_;
  puStack_228 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_258 = 0;
  lVar15 = **(long **)(lVar8 + 0x30);
  uVar1 = *(ushort *)(lVar15 + 0x132);
  lStack_250 = lVar6;
  lStack_248 = lVar14;
  ppuStack_230 = &ppuStack_1f0;
  if ((uVar1 & 1) == 0) {
    lStack_240 = lVar16;
    uStack_238 = auVar20._0_8_;
    func_0x00fac028(lVar15);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
    uVar1 = *(ushort *)(lVar15 + 0x132);
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar6 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
    lStack_240 = auVar20._8_8_;
    uStack_238 = auVar20._0_8_;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = **(long **)(lVar8 + 0x30);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
        auVar20._8_8_ = lStack_240;
        auVar20._0_8_ = uStack_238;
      }
      lStack_240 = auVar20._8_8_;
      uStack_238 = auVar20._0_8_;
      func_0x00f78ad0(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  lVar6 = **(long **)(lVar8 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if (**(long **)(lVar6 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))
              (**(long **)(lVar6 + 0xb8),auVar17._0_8_,&uStack_258);
    return uStack_258;
  }
  auVar17 = func_0x00f78af4();
  lVar6 = auVar17._8_8_;
  if (auVar17._0_8_ == 0) {
    lVar16 = **(long **)(lVar6 + 0x30);
    uVar1 = *(ushort *)(lVar16 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar16);
      uVar1 = *(ushort *)(lVar16 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar16 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        lVar16 = **(long **)(lVar6 + 0x30);
        if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar16);
        }
        func_0x00f78ad0(lVar16);
      }
    }
    lVar6 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar13 = **(undefined8 **)(lVar6 + 0xb8);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar6 + 0x30) + 8);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    uVar13 = func_0x00f78aec(lVar16);
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar13,auVar17._0_8_);
  }
  return uVar13;
}



// ============================================================
// RVA: 0x18bd53c | Core.Actors.PooledActorManager.DeInitAndRemovePool<BoostUsable>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [16];
  undefined8 **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65db & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65db = 1;
  }
  uVar13 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar5);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  uStack_60 = 0x3d25458;
  puStack_38 = &Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  puVar9 = param_3;
  uStack_58 = uVar13;
  lStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar17._0_8_ != 0) {
    puVar9 = *(undefined8 **)param_3[6];
    (*(code *)*puVar9)();
    lVar6 = *(long *)(auVar17._0_8_ + 0x10);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_3[6] + 8))(lVar6,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_68 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar10 = puVar9;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  auVar19._8_8_ = puVar10;
  auVar19._0_8_ = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  puStack_a8 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar11 = puVar10;
  puVar12 = param_4;
  uStack_d0 = uVar13;
  puStack_c8 = puVar9;
  ppuStack_b0 = &ppuStack_70;
  auStack_c0 = auVar17;
  if (*(long *)(lVar6 + 0x18) != 0) {
    puVar11 = *(undefined8 **)(param_4[6] + 8);
    (*(code *)*puVar11)(*(long *)(lVar6 + 0x18),puVar10);
    puVar9 = param_4;
    auVar17 = auVar19;
    if (*(long *)(lVar6 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_4[6] + 0x10))
                         (*(long *)(lVar6 + 0x10),auVar18._8_8_,puVar10);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar14 = auVar18._8_8_;
  lVar16 = auVar18._0_8_;
  puStack_d8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_100 = lVar6;
  puStack_f8 = puVar9;
  ppuStack_e0 = &ppuStack_b0;
  auStack_f0 = auVar17;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar13 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar16,uVar5);
      return uVar13;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_108 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = puVar11;
  lStack_118 = lVar16;
  ppuStack_110 = &ppuStack_e0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    puVar9 = *(undefined8 **)puVar11[6];
    lStack_120 = lVar14;
    uVar5 = (*(code *)*puVar9)();
    auVar18._8_8_ = lStack_120;
    auVar18._0_8_ = puVar11;
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar11[6] + 8))();
      return uVar13;
    }
  }
  lStack_120 = auVar18._8_8_;
  auVar17 = func_0x00f78af4();
  uStack_150 = 0x3d25458;
  puStack_128 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_148 = uVar13;
  lStack_140 = lVar6;
  uStack_138 = auVar18._0_8_;
  ppuStack_130 = &ppuStack_110;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar13 = **(undefined8 **)(auVar17._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(auVar17._8_8_ + 0x30) + 8))
                         (auVar17._0_8_,uVar13);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_158 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_180 = &ppuStack_160;
  uStack_168 = 0;
  ppuStack_160 = &ppuStack_130;
  if (auVar17._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar17._0_8_,auVar17._8_8_,&uStack_168);
    return uStack_168;
  }
  auVar17 = func_0x00f78af4();
  puStack_178 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar10 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar19 = func_0x00f78af4();
  uVar5 = auVar19._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = puVar12;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = puVar12;
  lVar6 = auVar19._0_8_;
  puStack_1b8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_1e0 = uVar13;
  puStack_1d8 = puVar9;
  ppuStack_1c0 = &ppuStack_180;
  auStack_1d0 = auVar17;
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar13 = (*(code *)**(undefined8 **)puVar12[6])();
    if ((int)uVar13 != 0) {
      puVar9 = puVar10;
      auVar17 = auVar2;
      if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar7 = (*(code *)**(undefined8 **)(puVar12[6] + 8))(*(long *)(lVar6 + 0x18),*puVar10);
      if ((uVar7 & 1) == 0) {
        auVar17 = auVar3;
        if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(puVar12[6] + 0x10))(*(long *)(lVar6 + 0x10),uVar5,*puVar10);
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
    }
    return uVar13;
  }
code_r0x018bdaa0:
  auVar20 = func_0x00f78af4();
  lVar16 = auVar20._8_8_;
  puStack_1e8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_218 = 0;
  lVar14 = **(long **)(lVar16 + 0x30);
  uVar1 = *(ushort *)(lVar14 + 0x132);
  lStack_210 = lVar6;
  puStack_208 = puVar9;
  ppuStack_1f0 = &ppuStack_1c0;
  auStack_200 = auVar17;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar14);
    uVar1 = *(ushort *)(lVar14 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar14 = **(long **)(lVar16 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      lVar14 = **(long **)(lVar16 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      func_0x00f78ad0(lVar14);
    }
  }
  lVar14 = **(long **)(lVar16 + 0x30);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  if (**(long **)(lVar14 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
              (**(long **)(lVar14 + 0xb8),auVar20._0_8_,&uStack_218);
    return uStack_218;
  }
  auVar17 = func_0x00f78af4();
  lVar8 = auVar17._8_8_;
  puStack_228 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_258 = 0;
  lVar15 = **(long **)(lVar8 + 0x30);
  uVar1 = *(ushort *)(lVar15 + 0x132);
  lStack_250 = lVar6;
  lStack_248 = lVar14;
  ppuStack_230 = &ppuStack_1f0;
  if ((uVar1 & 1) == 0) {
    lStack_240 = lVar16;
    uStack_238 = auVar20._0_8_;
    func_0x00fac028(lVar15);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
    uVar1 = *(ushort *)(lVar15 + 0x132);
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar6 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
    lStack_240 = auVar20._8_8_;
    uStack_238 = auVar20._0_8_;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = **(long **)(lVar8 + 0x30);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
        auVar20._8_8_ = lStack_240;
        auVar20._0_8_ = uStack_238;
      }
      lStack_240 = auVar20._8_8_;
      uStack_238 = auVar20._0_8_;
      func_0x00f78ad0(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  lVar6 = **(long **)(lVar8 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if (**(long **)(lVar6 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))
              (**(long **)(lVar6 + 0xb8),auVar17._0_8_,&uStack_258);
    return uStack_258;
  }
  auVar17 = func_0x00f78af4();
  lVar6 = auVar17._8_8_;
  if (auVar17._0_8_ == 0) {
    lVar16 = **(long **)(lVar6 + 0x30);
    uVar1 = *(ushort *)(lVar16 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar16);
      uVar1 = *(ushort *)(lVar16 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar16 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        lVar16 = **(long **)(lVar6 + 0x30);
        if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar16);
        }
        func_0x00f78ad0(lVar16);
      }
    }
    lVar6 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar13 = **(undefined8 **)(lVar6 + 0xb8);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar6 + 0x30) + 8);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    uVar13 = func_0x00f78aec(lVar16);
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar13,auVar17._0_8_);
  }
  return uVar13;
}



// ============================================================
// RVA: 0x18bd53c | Core.Actors.PooledActorManager.DeInitAndRemovePool<GoldenTurdProjectile>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [16];
  undefined8 **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65db & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65db = 1;
  }
  uVar13 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar5);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  uStack_60 = 0x3d25458;
  puStack_38 = &Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  puVar9 = param_3;
  uStack_58 = uVar13;
  lStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar17._0_8_ != 0) {
    puVar9 = *(undefined8 **)param_3[6];
    (*(code *)*puVar9)();
    lVar6 = *(long *)(auVar17._0_8_ + 0x10);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_3[6] + 8))(lVar6,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_68 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar10 = puVar9;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  auVar19._8_8_ = puVar10;
  auVar19._0_8_ = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  puStack_a8 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar11 = puVar10;
  puVar12 = param_4;
  uStack_d0 = uVar13;
  puStack_c8 = puVar9;
  ppuStack_b0 = &ppuStack_70;
  auStack_c0 = auVar17;
  if (*(long *)(lVar6 + 0x18) != 0) {
    puVar11 = *(undefined8 **)(param_4[6] + 8);
    (*(code *)*puVar11)(*(long *)(lVar6 + 0x18),puVar10);
    puVar9 = param_4;
    auVar17 = auVar19;
    if (*(long *)(lVar6 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_4[6] + 0x10))
                         (*(long *)(lVar6 + 0x10),auVar18._8_8_,puVar10);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar14 = auVar18._8_8_;
  lVar16 = auVar18._0_8_;
  puStack_d8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_100 = lVar6;
  puStack_f8 = puVar9;
  ppuStack_e0 = &ppuStack_b0;
  auStack_f0 = auVar17;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar13 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar16,uVar5);
      return uVar13;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_108 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = puVar11;
  lStack_118 = lVar16;
  ppuStack_110 = &ppuStack_e0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    puVar9 = *(undefined8 **)puVar11[6];
    lStack_120 = lVar14;
    uVar5 = (*(code *)*puVar9)();
    auVar18._8_8_ = lStack_120;
    auVar18._0_8_ = puVar11;
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar11[6] + 8))();
      return uVar13;
    }
  }
  lStack_120 = auVar18._8_8_;
  auVar17 = func_0x00f78af4();
  uStack_150 = 0x3d25458;
  puStack_128 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_148 = uVar13;
  lStack_140 = lVar6;
  uStack_138 = auVar18._0_8_;
  ppuStack_130 = &ppuStack_110;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar13 = **(undefined8 **)(auVar17._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(auVar17._8_8_ + 0x30) + 8))
                         (auVar17._0_8_,uVar13);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_158 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_180 = &ppuStack_160;
  uStack_168 = 0;
  ppuStack_160 = &ppuStack_130;
  if (auVar17._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar17._0_8_,auVar17._8_8_,&uStack_168);
    return uStack_168;
  }
  auVar17 = func_0x00f78af4();
  puStack_178 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar10 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar19 = func_0x00f78af4();
  uVar5 = auVar19._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = puVar12;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = puVar12;
  lVar6 = auVar19._0_8_;
  puStack_1b8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_1e0 = uVar13;
  puStack_1d8 = puVar9;
  ppuStack_1c0 = &ppuStack_180;
  auStack_1d0 = auVar17;
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar13 = (*(code *)**(undefined8 **)puVar12[6])();
    if ((int)uVar13 != 0) {
      puVar9 = puVar10;
      auVar17 = auVar2;
      if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar7 = (*(code *)**(undefined8 **)(puVar12[6] + 8))(*(long *)(lVar6 + 0x18),*puVar10);
      if ((uVar7 & 1) == 0) {
        auVar17 = auVar3;
        if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(puVar12[6] + 0x10))(*(long *)(lVar6 + 0x10),uVar5,*puVar10);
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
    }
    return uVar13;
  }
code_r0x018bdaa0:
  auVar20 = func_0x00f78af4();
  lVar16 = auVar20._8_8_;
  puStack_1e8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_218 = 0;
  lVar14 = **(long **)(lVar16 + 0x30);
  uVar1 = *(ushort *)(lVar14 + 0x132);
  lStack_210 = lVar6;
  puStack_208 = puVar9;
  ppuStack_1f0 = &ppuStack_1c0;
  auStack_200 = auVar17;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar14);
    uVar1 = *(ushort *)(lVar14 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar14 = **(long **)(lVar16 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      lVar14 = **(long **)(lVar16 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      func_0x00f78ad0(lVar14);
    }
  }
  lVar14 = **(long **)(lVar16 + 0x30);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  if (**(long **)(lVar14 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
              (**(long **)(lVar14 + 0xb8),auVar20._0_8_,&uStack_218);
    return uStack_218;
  }
  auVar17 = func_0x00f78af4();
  lVar8 = auVar17._8_8_;
  puStack_228 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_258 = 0;
  lVar15 = **(long **)(lVar8 + 0x30);
  uVar1 = *(ushort *)(lVar15 + 0x132);
  lStack_250 = lVar6;
  lStack_248 = lVar14;
  ppuStack_230 = &ppuStack_1f0;
  if ((uVar1 & 1) == 0) {
    lStack_240 = lVar16;
    uStack_238 = auVar20._0_8_;
    func_0x00fac028(lVar15);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
    uVar1 = *(ushort *)(lVar15 + 0x132);
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar6 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
    lStack_240 = auVar20._8_8_;
    uStack_238 = auVar20._0_8_;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = **(long **)(lVar8 + 0x30);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
        auVar20._8_8_ = lStack_240;
        auVar20._0_8_ = uStack_238;
      }
      lStack_240 = auVar20._8_8_;
      uStack_238 = auVar20._0_8_;
      func_0x00f78ad0(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  lVar6 = **(long **)(lVar8 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if (**(long **)(lVar6 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))
              (**(long **)(lVar6 + 0xb8),auVar17._0_8_,&uStack_258);
    return uStack_258;
  }
  auVar17 = func_0x00f78af4();
  lVar6 = auVar17._8_8_;
  if (auVar17._0_8_ == 0) {
    lVar16 = **(long **)(lVar6 + 0x30);
    uVar1 = *(ushort *)(lVar16 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar16);
      uVar1 = *(ushort *)(lVar16 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar16 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        lVar16 = **(long **)(lVar6 + 0x30);
        if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar16);
        }
        func_0x00f78ad0(lVar16);
      }
    }
    lVar6 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar13 = **(undefined8 **)(lVar6 + 0xb8);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar6 + 0x30) + 8);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    uVar13 = func_0x00f78aec(lVar16);
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar13,auVar17._0_8_);
  }
  return uVar13;
}



// ============================================================
// RVA: 0x18bd53c | Core.Actors.PooledActorManager.DeInitAndRemovePool<NormalShieldUsable>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [16];
  undefined8 **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65db & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65db = 1;
  }
  uVar13 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar5);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  uStack_60 = 0x3d25458;
  puStack_38 = &Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  puVar9 = param_3;
  uStack_58 = uVar13;
  lStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar17._0_8_ != 0) {
    puVar9 = *(undefined8 **)param_3[6];
    (*(code *)*puVar9)();
    lVar6 = *(long *)(auVar17._0_8_ + 0x10);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_3[6] + 8))(lVar6,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_68 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar10 = puVar9;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  auVar19._8_8_ = puVar10;
  auVar19._0_8_ = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  puStack_a8 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar11 = puVar10;
  puVar12 = param_4;
  uStack_d0 = uVar13;
  puStack_c8 = puVar9;
  ppuStack_b0 = &ppuStack_70;
  auStack_c0 = auVar17;
  if (*(long *)(lVar6 + 0x18) != 0) {
    puVar11 = *(undefined8 **)(param_4[6] + 8);
    (*(code *)*puVar11)(*(long *)(lVar6 + 0x18),puVar10);
    puVar9 = param_4;
    auVar17 = auVar19;
    if (*(long *)(lVar6 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_4[6] + 0x10))
                         (*(long *)(lVar6 + 0x10),auVar18._8_8_,puVar10);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar14 = auVar18._8_8_;
  lVar16 = auVar18._0_8_;
  puStack_d8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_100 = lVar6;
  puStack_f8 = puVar9;
  ppuStack_e0 = &ppuStack_b0;
  auStack_f0 = auVar17;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar13 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar16,uVar5);
      return uVar13;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_108 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = puVar11;
  lStack_118 = lVar16;
  ppuStack_110 = &ppuStack_e0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    puVar9 = *(undefined8 **)puVar11[6];
    lStack_120 = lVar14;
    uVar5 = (*(code *)*puVar9)();
    auVar18._8_8_ = lStack_120;
    auVar18._0_8_ = puVar11;
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar11[6] + 8))();
      return uVar13;
    }
  }
  lStack_120 = auVar18._8_8_;
  auVar17 = func_0x00f78af4();
  uStack_150 = 0x3d25458;
  puStack_128 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_148 = uVar13;
  lStack_140 = lVar6;
  uStack_138 = auVar18._0_8_;
  ppuStack_130 = &ppuStack_110;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar13 = **(undefined8 **)(auVar17._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(auVar17._8_8_ + 0x30) + 8))
                         (auVar17._0_8_,uVar13);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_158 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_180 = &ppuStack_160;
  uStack_168 = 0;
  ppuStack_160 = &ppuStack_130;
  if (auVar17._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar17._0_8_,auVar17._8_8_,&uStack_168);
    return uStack_168;
  }
  auVar17 = func_0x00f78af4();
  puStack_178 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar10 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar19 = func_0x00f78af4();
  uVar5 = auVar19._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = puVar12;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = puVar12;
  lVar6 = auVar19._0_8_;
  puStack_1b8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_1e0 = uVar13;
  puStack_1d8 = puVar9;
  ppuStack_1c0 = &ppuStack_180;
  auStack_1d0 = auVar17;
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar13 = (*(code *)**(undefined8 **)puVar12[6])();
    if ((int)uVar13 != 0) {
      puVar9 = puVar10;
      auVar17 = auVar2;
      if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar7 = (*(code *)**(undefined8 **)(puVar12[6] + 8))(*(long *)(lVar6 + 0x18),*puVar10);
      if ((uVar7 & 1) == 0) {
        auVar17 = auVar3;
        if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(puVar12[6] + 0x10))(*(long *)(lVar6 + 0x10),uVar5,*puVar10);
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
    }
    return uVar13;
  }
code_r0x018bdaa0:
  auVar20 = func_0x00f78af4();
  lVar16 = auVar20._8_8_;
  puStack_1e8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_218 = 0;
  lVar14 = **(long **)(lVar16 + 0x30);
  uVar1 = *(ushort *)(lVar14 + 0x132);
  lStack_210 = lVar6;
  puStack_208 = puVar9;
  ppuStack_1f0 = &ppuStack_1c0;
  auStack_200 = auVar17;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar14);
    uVar1 = *(ushort *)(lVar14 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar14 = **(long **)(lVar16 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      lVar14 = **(long **)(lVar16 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      func_0x00f78ad0(lVar14);
    }
  }
  lVar14 = **(long **)(lVar16 + 0x30);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  if (**(long **)(lVar14 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
              (**(long **)(lVar14 + 0xb8),auVar20._0_8_,&uStack_218);
    return uStack_218;
  }
  auVar17 = func_0x00f78af4();
  lVar8 = auVar17._8_8_;
  puStack_228 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_258 = 0;
  lVar15 = **(long **)(lVar8 + 0x30);
  uVar1 = *(ushort *)(lVar15 + 0x132);
  lStack_250 = lVar6;
  lStack_248 = lVar14;
  ppuStack_230 = &ppuStack_1f0;
  if ((uVar1 & 1) == 0) {
    lStack_240 = lVar16;
    uStack_238 = auVar20._0_8_;
    func_0x00fac028(lVar15);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
    uVar1 = *(ushort *)(lVar15 + 0x132);
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar6 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
    lStack_240 = auVar20._8_8_;
    uStack_238 = auVar20._0_8_;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = **(long **)(lVar8 + 0x30);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
        auVar20._8_8_ = lStack_240;
        auVar20._0_8_ = uStack_238;
      }
      lStack_240 = auVar20._8_8_;
      uStack_238 = auVar20._0_8_;
      func_0x00f78ad0(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  lVar6 = **(long **)(lVar8 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if (**(long **)(lVar6 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))
              (**(long **)(lVar6 + 0xb8),auVar17._0_8_,&uStack_258);
    return uStack_258;
  }
  auVar17 = func_0x00f78af4();
  lVar6 = auVar17._8_8_;
  if (auVar17._0_8_ == 0) {
    lVar16 = **(long **)(lVar6 + 0x30);
    uVar1 = *(ushort *)(lVar16 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar16);
      uVar1 = *(ushort *)(lVar16 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar16 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        lVar16 = **(long **)(lVar6 + 0x30);
        if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar16);
        }
        func_0x00f78ad0(lVar16);
      }
    }
    lVar6 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar13 = **(undefined8 **)(lVar6 + 0xb8);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar6 + 0x30) + 8);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    uVar13 = func_0x00f78aec(lVar16);
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar13,auVar17._0_8_);
  }
  return uVar13;
}



// ============================================================
// RVA: 0x18bd53c | Core.Actors.PooledActorManager.DeInitAndRemovePool<PlacementHomingProjectile>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [16];
  undefined8 **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65db & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65db = 1;
  }
  uVar13 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar5);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  uStack_60 = 0x3d25458;
  puStack_38 = &Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  puVar9 = param_3;
  uStack_58 = uVar13;
  lStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar17._0_8_ != 0) {
    puVar9 = *(undefined8 **)param_3[6];
    (*(code *)*puVar9)();
    lVar6 = *(long *)(auVar17._0_8_ + 0x10);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_3[6] + 8))(lVar6,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_68 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar10 = puVar9;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  auVar19._8_8_ = puVar10;
  auVar19._0_8_ = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  puStack_a8 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar11 = puVar10;
  puVar12 = param_4;
  uStack_d0 = uVar13;
  puStack_c8 = puVar9;
  ppuStack_b0 = &ppuStack_70;
  auStack_c0 = auVar17;
  if (*(long *)(lVar6 + 0x18) != 0) {
    puVar11 = *(undefined8 **)(param_4[6] + 8);
    (*(code *)*puVar11)(*(long *)(lVar6 + 0x18),puVar10);
    puVar9 = param_4;
    auVar17 = auVar19;
    if (*(long *)(lVar6 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_4[6] + 0x10))
                         (*(long *)(lVar6 + 0x10),auVar18._8_8_,puVar10);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar14 = auVar18._8_8_;
  lVar16 = auVar18._0_8_;
  puStack_d8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_100 = lVar6;
  puStack_f8 = puVar9;
  ppuStack_e0 = &ppuStack_b0;
  auStack_f0 = auVar17;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar13 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar16,uVar5);
      return uVar13;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_108 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = puVar11;
  lStack_118 = lVar16;
  ppuStack_110 = &ppuStack_e0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    puVar9 = *(undefined8 **)puVar11[6];
    lStack_120 = lVar14;
    uVar5 = (*(code *)*puVar9)();
    auVar18._8_8_ = lStack_120;
    auVar18._0_8_ = puVar11;
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar11[6] + 8))();
      return uVar13;
    }
  }
  lStack_120 = auVar18._8_8_;
  auVar17 = func_0x00f78af4();
  uStack_150 = 0x3d25458;
  puStack_128 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_148 = uVar13;
  lStack_140 = lVar6;
  uStack_138 = auVar18._0_8_;
  ppuStack_130 = &ppuStack_110;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar13 = **(undefined8 **)(auVar17._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(auVar17._8_8_ + 0x30) + 8))
                         (auVar17._0_8_,uVar13);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_158 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_180 = &ppuStack_160;
  uStack_168 = 0;
  ppuStack_160 = &ppuStack_130;
  if (auVar17._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar17._0_8_,auVar17._8_8_,&uStack_168);
    return uStack_168;
  }
  auVar17 = func_0x00f78af4();
  puStack_178 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar10 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar19 = func_0x00f78af4();
  uVar5 = auVar19._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = puVar12;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = puVar12;
  lVar6 = auVar19._0_8_;
  puStack_1b8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_1e0 = uVar13;
  puStack_1d8 = puVar9;
  ppuStack_1c0 = &ppuStack_180;
  auStack_1d0 = auVar17;
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar13 = (*(code *)**(undefined8 **)puVar12[6])();
    if ((int)uVar13 != 0) {
      puVar9 = puVar10;
      auVar17 = auVar2;
      if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar7 = (*(code *)**(undefined8 **)(puVar12[6] + 8))(*(long *)(lVar6 + 0x18),*puVar10);
      if ((uVar7 & 1) == 0) {
        auVar17 = auVar3;
        if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(puVar12[6] + 0x10))(*(long *)(lVar6 + 0x10),uVar5,*puVar10);
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
    }
    return uVar13;
  }
code_r0x018bdaa0:
  auVar20 = func_0x00f78af4();
  lVar16 = auVar20._8_8_;
  puStack_1e8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_218 = 0;
  lVar14 = **(long **)(lVar16 + 0x30);
  uVar1 = *(ushort *)(lVar14 + 0x132);
  lStack_210 = lVar6;
  puStack_208 = puVar9;
  ppuStack_1f0 = &ppuStack_1c0;
  auStack_200 = auVar17;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar14);
    uVar1 = *(ushort *)(lVar14 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar14 = **(long **)(lVar16 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      lVar14 = **(long **)(lVar16 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      func_0x00f78ad0(lVar14);
    }
  }
  lVar14 = **(long **)(lVar16 + 0x30);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  if (**(long **)(lVar14 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
              (**(long **)(lVar14 + 0xb8),auVar20._0_8_,&uStack_218);
    return uStack_218;
  }
  auVar17 = func_0x00f78af4();
  lVar8 = auVar17._8_8_;
  puStack_228 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_258 = 0;
  lVar15 = **(long **)(lVar8 + 0x30);
  uVar1 = *(ushort *)(lVar15 + 0x132);
  lStack_250 = lVar6;
  lStack_248 = lVar14;
  ppuStack_230 = &ppuStack_1f0;
  if ((uVar1 & 1) == 0) {
    lStack_240 = lVar16;
    uStack_238 = auVar20._0_8_;
    func_0x00fac028(lVar15);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
    uVar1 = *(ushort *)(lVar15 + 0x132);
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar6 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
    lStack_240 = auVar20._8_8_;
    uStack_238 = auVar20._0_8_;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = **(long **)(lVar8 + 0x30);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
        auVar20._8_8_ = lStack_240;
        auVar20._0_8_ = uStack_238;
      }
      lStack_240 = auVar20._8_8_;
      uStack_238 = auVar20._0_8_;
      func_0x00f78ad0(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  lVar6 = **(long **)(lVar8 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if (**(long **)(lVar6 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))
              (**(long **)(lVar6 + 0xb8),auVar17._0_8_,&uStack_258);
    return uStack_258;
  }
  auVar17 = func_0x00f78af4();
  lVar6 = auVar17._8_8_;
  if (auVar17._0_8_ == 0) {
    lVar16 = **(long **)(lVar6 + 0x30);
    uVar1 = *(ushort *)(lVar16 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar16);
      uVar1 = *(ushort *)(lVar16 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar16 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        lVar16 = **(long **)(lVar6 + 0x30);
        if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar16);
        }
        func_0x00f78ad0(lVar16);
      }
    }
    lVar6 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar13 = **(undefined8 **)(lVar6 + 0xb8);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar6 + 0x30) + 8);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    uVar13 = func_0x00f78aec(lVar16);
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar13,auVar17._0_8_);
  }
  return uVar13;
}



// ============================================================
// RVA: 0x18bd53c | Core.Actors.PooledActorManager.DeInitAndRemovePool<ProximityHomingProjectile>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [16];
  undefined8 **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65db & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65db = 1;
  }
  uVar13 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar5);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  uStack_60 = 0x3d25458;
  puStack_38 = &Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  puVar9 = param_3;
  uStack_58 = uVar13;
  lStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar17._0_8_ != 0) {
    puVar9 = *(undefined8 **)param_3[6];
    (*(code *)*puVar9)();
    lVar6 = *(long *)(auVar17._0_8_ + 0x10);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_3[6] + 8))(lVar6,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_68 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar10 = puVar9;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  auVar19._8_8_ = puVar10;
  auVar19._0_8_ = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  puStack_a8 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar11 = puVar10;
  puVar12 = param_4;
  uStack_d0 = uVar13;
  puStack_c8 = puVar9;
  ppuStack_b0 = &ppuStack_70;
  auStack_c0 = auVar17;
  if (*(long *)(lVar6 + 0x18) != 0) {
    puVar11 = *(undefined8 **)(param_4[6] + 8);
    (*(code *)*puVar11)(*(long *)(lVar6 + 0x18),puVar10);
    puVar9 = param_4;
    auVar17 = auVar19;
    if (*(long *)(lVar6 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_4[6] + 0x10))
                         (*(long *)(lVar6 + 0x10),auVar18._8_8_,puVar10);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar14 = auVar18._8_8_;
  lVar16 = auVar18._0_8_;
  puStack_d8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_100 = lVar6;
  puStack_f8 = puVar9;
  ppuStack_e0 = &ppuStack_b0;
  auStack_f0 = auVar17;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar13 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar16,uVar5);
      return uVar13;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_108 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = puVar11;
  lStack_118 = lVar16;
  ppuStack_110 = &ppuStack_e0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    puVar9 = *(undefined8 **)puVar11[6];
    lStack_120 = lVar14;
    uVar5 = (*(code *)*puVar9)();
    auVar18._8_8_ = lStack_120;
    auVar18._0_8_ = puVar11;
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar11[6] + 8))();
      return uVar13;
    }
  }
  lStack_120 = auVar18._8_8_;
  auVar17 = func_0x00f78af4();
  uStack_150 = 0x3d25458;
  puStack_128 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_148 = uVar13;
  lStack_140 = lVar6;
  uStack_138 = auVar18._0_8_;
  ppuStack_130 = &ppuStack_110;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar13 = **(undefined8 **)(auVar17._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(auVar17._8_8_ + 0x30) + 8))
                         (auVar17._0_8_,uVar13);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_158 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_180 = &ppuStack_160;
  uStack_168 = 0;
  ppuStack_160 = &ppuStack_130;
  if (auVar17._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar17._0_8_,auVar17._8_8_,&uStack_168);
    return uStack_168;
  }
  auVar17 = func_0x00f78af4();
  puStack_178 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar10 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar19 = func_0x00f78af4();
  uVar5 = auVar19._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = puVar12;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = puVar12;
  lVar6 = auVar19._0_8_;
  puStack_1b8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_1e0 = uVar13;
  puStack_1d8 = puVar9;
  ppuStack_1c0 = &ppuStack_180;
  auStack_1d0 = auVar17;
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar13 = (*(code *)**(undefined8 **)puVar12[6])();
    if ((int)uVar13 != 0) {
      puVar9 = puVar10;
      auVar17 = auVar2;
      if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar7 = (*(code *)**(undefined8 **)(puVar12[6] + 8))(*(long *)(lVar6 + 0x18),*puVar10);
      if ((uVar7 & 1) == 0) {
        auVar17 = auVar3;
        if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(puVar12[6] + 0x10))(*(long *)(lVar6 + 0x10),uVar5,*puVar10);
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
    }
    return uVar13;
  }
code_r0x018bdaa0:
  auVar20 = func_0x00f78af4();
  lVar16 = auVar20._8_8_;
  puStack_1e8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_218 = 0;
  lVar14 = **(long **)(lVar16 + 0x30);
  uVar1 = *(ushort *)(lVar14 + 0x132);
  lStack_210 = lVar6;
  puStack_208 = puVar9;
  ppuStack_1f0 = &ppuStack_1c0;
  auStack_200 = auVar17;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar14);
    uVar1 = *(ushort *)(lVar14 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar14 = **(long **)(lVar16 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      lVar14 = **(long **)(lVar16 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      func_0x00f78ad0(lVar14);
    }
  }
  lVar14 = **(long **)(lVar16 + 0x30);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  if (**(long **)(lVar14 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
              (**(long **)(lVar14 + 0xb8),auVar20._0_8_,&uStack_218);
    return uStack_218;
  }
  auVar17 = func_0x00f78af4();
  lVar8 = auVar17._8_8_;
  puStack_228 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_258 = 0;
  lVar15 = **(long **)(lVar8 + 0x30);
  uVar1 = *(ushort *)(lVar15 + 0x132);
  lStack_250 = lVar6;
  lStack_248 = lVar14;
  ppuStack_230 = &ppuStack_1f0;
  if ((uVar1 & 1) == 0) {
    lStack_240 = lVar16;
    uStack_238 = auVar20._0_8_;
    func_0x00fac028(lVar15);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
    uVar1 = *(ushort *)(lVar15 + 0x132);
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar6 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
    lStack_240 = auVar20._8_8_;
    uStack_238 = auVar20._0_8_;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = **(long **)(lVar8 + 0x30);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
        auVar20._8_8_ = lStack_240;
        auVar20._0_8_ = uStack_238;
      }
      lStack_240 = auVar20._8_8_;
      uStack_238 = auVar20._0_8_;
      func_0x00f78ad0(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  lVar6 = **(long **)(lVar8 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if (**(long **)(lVar6 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))
              (**(long **)(lVar6 + 0xb8),auVar17._0_8_,&uStack_258);
    return uStack_258;
  }
  auVar17 = func_0x00f78af4();
  lVar6 = auVar17._8_8_;
  if (auVar17._0_8_ == 0) {
    lVar16 = **(long **)(lVar6 + 0x30);
    uVar1 = *(ushort *)(lVar16 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar16);
      uVar1 = *(ushort *)(lVar16 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar16 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        lVar16 = **(long **)(lVar6 + 0x30);
        if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar16);
        }
        func_0x00f78ad0(lVar16);
      }
    }
    lVar6 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar13 = **(undefined8 **)(lVar6 + 0xb8);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar6 + 0x30) + 8);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    uVar13 = func_0x00f78aec(lVar16);
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar13,auVar17._0_8_);
  }
  return uVar13;
}



// ============================================================
// RVA: 0x18bd53c | Core.Actors.PooledActorManager.DeInitAndRemovePool<RicochetProjectile>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [16];
  undefined8 **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65db & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65db = 1;
  }
  uVar13 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar5);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  uStack_60 = 0x3d25458;
  puStack_38 = &Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  puVar9 = param_3;
  uStack_58 = uVar13;
  lStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar17._0_8_ != 0) {
    puVar9 = *(undefined8 **)param_3[6];
    (*(code *)*puVar9)();
    lVar6 = *(long *)(auVar17._0_8_ + 0x10);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_3[6] + 8))(lVar6,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_68 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar10 = puVar9;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  auVar19._8_8_ = puVar10;
  auVar19._0_8_ = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  puStack_a8 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar11 = puVar10;
  puVar12 = param_4;
  uStack_d0 = uVar13;
  puStack_c8 = puVar9;
  ppuStack_b0 = &ppuStack_70;
  auStack_c0 = auVar17;
  if (*(long *)(lVar6 + 0x18) != 0) {
    puVar11 = *(undefined8 **)(param_4[6] + 8);
    (*(code *)*puVar11)(*(long *)(lVar6 + 0x18),puVar10);
    puVar9 = param_4;
    auVar17 = auVar19;
    if (*(long *)(lVar6 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_4[6] + 0x10))
                         (*(long *)(lVar6 + 0x10),auVar18._8_8_,puVar10);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar14 = auVar18._8_8_;
  lVar16 = auVar18._0_8_;
  puStack_d8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_100 = lVar6;
  puStack_f8 = puVar9;
  ppuStack_e0 = &ppuStack_b0;
  auStack_f0 = auVar17;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar13 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar16,uVar5);
      return uVar13;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_108 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = puVar11;
  lStack_118 = lVar16;
  ppuStack_110 = &ppuStack_e0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    puVar9 = *(undefined8 **)puVar11[6];
    lStack_120 = lVar14;
    uVar5 = (*(code *)*puVar9)();
    auVar18._8_8_ = lStack_120;
    auVar18._0_8_ = puVar11;
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar11[6] + 8))();
      return uVar13;
    }
  }
  lStack_120 = auVar18._8_8_;
  auVar17 = func_0x00f78af4();
  uStack_150 = 0x3d25458;
  puStack_128 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_148 = uVar13;
  lStack_140 = lVar6;
  uStack_138 = auVar18._0_8_;
  ppuStack_130 = &ppuStack_110;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar13 = **(undefined8 **)(auVar17._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(auVar17._8_8_ + 0x30) + 8))
                         (auVar17._0_8_,uVar13);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_158 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_180 = &ppuStack_160;
  uStack_168 = 0;
  ppuStack_160 = &ppuStack_130;
  if (auVar17._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar17._0_8_,auVar17._8_8_,&uStack_168);
    return uStack_168;
  }
  auVar17 = func_0x00f78af4();
  puStack_178 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar10 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar19 = func_0x00f78af4();
  uVar5 = auVar19._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = puVar12;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = puVar12;
  lVar6 = auVar19._0_8_;
  puStack_1b8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_1e0 = uVar13;
  puStack_1d8 = puVar9;
  ppuStack_1c0 = &ppuStack_180;
  auStack_1d0 = auVar17;
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar13 = (*(code *)**(undefined8 **)puVar12[6])();
    if ((int)uVar13 != 0) {
      puVar9 = puVar10;
      auVar17 = auVar2;
      if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar7 = (*(code *)**(undefined8 **)(puVar12[6] + 8))(*(long *)(lVar6 + 0x18),*puVar10);
      if ((uVar7 & 1) == 0) {
        auVar17 = auVar3;
        if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(puVar12[6] + 0x10))(*(long *)(lVar6 + 0x10),uVar5,*puVar10);
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
    }
    return uVar13;
  }
code_r0x018bdaa0:
  auVar20 = func_0x00f78af4();
  lVar16 = auVar20._8_8_;
  puStack_1e8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_218 = 0;
  lVar14 = **(long **)(lVar16 + 0x30);
  uVar1 = *(ushort *)(lVar14 + 0x132);
  lStack_210 = lVar6;
  puStack_208 = puVar9;
  ppuStack_1f0 = &ppuStack_1c0;
  auStack_200 = auVar17;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar14);
    uVar1 = *(ushort *)(lVar14 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar14 = **(long **)(lVar16 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      lVar14 = **(long **)(lVar16 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      func_0x00f78ad0(lVar14);
    }
  }
  lVar14 = **(long **)(lVar16 + 0x30);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  if (**(long **)(lVar14 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
              (**(long **)(lVar14 + 0xb8),auVar20._0_8_,&uStack_218);
    return uStack_218;
  }
  auVar17 = func_0x00f78af4();
  lVar8 = auVar17._8_8_;
  puStack_228 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_258 = 0;
  lVar15 = **(long **)(lVar8 + 0x30);
  uVar1 = *(ushort *)(lVar15 + 0x132);
  lStack_250 = lVar6;
  lStack_248 = lVar14;
  ppuStack_230 = &ppuStack_1f0;
  if ((uVar1 & 1) == 0) {
    lStack_240 = lVar16;
    uStack_238 = auVar20._0_8_;
    func_0x00fac028(lVar15);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
    uVar1 = *(ushort *)(lVar15 + 0x132);
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar6 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
    lStack_240 = auVar20._8_8_;
    uStack_238 = auVar20._0_8_;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = **(long **)(lVar8 + 0x30);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
        auVar20._8_8_ = lStack_240;
        auVar20._0_8_ = uStack_238;
      }
      lStack_240 = auVar20._8_8_;
      uStack_238 = auVar20._0_8_;
      func_0x00f78ad0(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  lVar6 = **(long **)(lVar8 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if (**(long **)(lVar6 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))
              (**(long **)(lVar6 + 0xb8),auVar17._0_8_,&uStack_258);
    return uStack_258;
  }
  auVar17 = func_0x00f78af4();
  lVar6 = auVar17._8_8_;
  if (auVar17._0_8_ == 0) {
    lVar16 = **(long **)(lVar6 + 0x30);
    uVar1 = *(ushort *)(lVar16 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar16);
      uVar1 = *(ushort *)(lVar16 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar16 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        lVar16 = **(long **)(lVar6 + 0x30);
        if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar16);
        }
        func_0x00f78ad0(lVar16);
      }
    }
    lVar6 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar13 = **(undefined8 **)(lVar6 + 0xb8);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar6 + 0x30) + 8);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    uVar13 = func_0x00f78aec(lVar16);
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar13,auVar17._0_8_);
  }
  return uVar13;
}



// ============================================================
// RVA: 0x18bd53c | Core.Actors.PooledActorManager.DeInitAndRemovePool<SatelliteUsable>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [16];
  undefined8 **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65db & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65db = 1;
  }
  uVar13 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar5);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  uStack_60 = 0x3d25458;
  puStack_38 = &Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  puVar9 = param_3;
  uStack_58 = uVar13;
  lStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar17._0_8_ != 0) {
    puVar9 = *(undefined8 **)param_3[6];
    (*(code *)*puVar9)();
    lVar6 = *(long *)(auVar17._0_8_ + 0x10);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_3[6] + 8))(lVar6,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_68 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar10 = puVar9;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  auVar19._8_8_ = puVar10;
  auVar19._0_8_ = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  puStack_a8 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar11 = puVar10;
  puVar12 = param_4;
  uStack_d0 = uVar13;
  puStack_c8 = puVar9;
  ppuStack_b0 = &ppuStack_70;
  auStack_c0 = auVar17;
  if (*(long *)(lVar6 + 0x18) != 0) {
    puVar11 = *(undefined8 **)(param_4[6] + 8);
    (*(code *)*puVar11)(*(long *)(lVar6 + 0x18),puVar10);
    puVar9 = param_4;
    auVar17 = auVar19;
    if (*(long *)(lVar6 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_4[6] + 0x10))
                         (*(long *)(lVar6 + 0x10),auVar18._8_8_,puVar10);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar14 = auVar18._8_8_;
  lVar16 = auVar18._0_8_;
  puStack_d8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_100 = lVar6;
  puStack_f8 = puVar9;
  ppuStack_e0 = &ppuStack_b0;
  auStack_f0 = auVar17;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar13 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar16,uVar5);
      return uVar13;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_108 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = puVar11;
  lStack_118 = lVar16;
  ppuStack_110 = &ppuStack_e0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    puVar9 = *(undefined8 **)puVar11[6];
    lStack_120 = lVar14;
    uVar5 = (*(code *)*puVar9)();
    auVar18._8_8_ = lStack_120;
    auVar18._0_8_ = puVar11;
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar11[6] + 8))();
      return uVar13;
    }
  }
  lStack_120 = auVar18._8_8_;
  auVar17 = func_0x00f78af4();
  uStack_150 = 0x3d25458;
  puStack_128 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_148 = uVar13;
  lStack_140 = lVar6;
  uStack_138 = auVar18._0_8_;
  ppuStack_130 = &ppuStack_110;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar13 = **(undefined8 **)(auVar17._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(auVar17._8_8_ + 0x30) + 8))
                         (auVar17._0_8_,uVar13);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_158 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_180 = &ppuStack_160;
  uStack_168 = 0;
  ppuStack_160 = &ppuStack_130;
  if (auVar17._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar17._0_8_,auVar17._8_8_,&uStack_168);
    return uStack_168;
  }
  auVar17 = func_0x00f78af4();
  puStack_178 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar10 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar19 = func_0x00f78af4();
  uVar5 = auVar19._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = puVar12;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = puVar12;
  lVar6 = auVar19._0_8_;
  puStack_1b8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_1e0 = uVar13;
  puStack_1d8 = puVar9;
  ppuStack_1c0 = &ppuStack_180;
  auStack_1d0 = auVar17;
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar13 = (*(code *)**(undefined8 **)puVar12[6])();
    if ((int)uVar13 != 0) {
      puVar9 = puVar10;
      auVar17 = auVar2;
      if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar7 = (*(code *)**(undefined8 **)(puVar12[6] + 8))(*(long *)(lVar6 + 0x18),*puVar10);
      if ((uVar7 & 1) == 0) {
        auVar17 = auVar3;
        if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(puVar12[6] + 0x10))(*(long *)(lVar6 + 0x10),uVar5,*puVar10);
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
    }
    return uVar13;
  }
code_r0x018bdaa0:
  auVar20 = func_0x00f78af4();
  lVar16 = auVar20._8_8_;
  puStack_1e8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_218 = 0;
  lVar14 = **(long **)(lVar16 + 0x30);
  uVar1 = *(ushort *)(lVar14 + 0x132);
  lStack_210 = lVar6;
  puStack_208 = puVar9;
  ppuStack_1f0 = &ppuStack_1c0;
  auStack_200 = auVar17;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar14);
    uVar1 = *(ushort *)(lVar14 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar14 = **(long **)(lVar16 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      lVar14 = **(long **)(lVar16 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      func_0x00f78ad0(lVar14);
    }
  }
  lVar14 = **(long **)(lVar16 + 0x30);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  if (**(long **)(lVar14 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
              (**(long **)(lVar14 + 0xb8),auVar20._0_8_,&uStack_218);
    return uStack_218;
  }
  auVar17 = func_0x00f78af4();
  lVar8 = auVar17._8_8_;
  puStack_228 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_258 = 0;
  lVar15 = **(long **)(lVar8 + 0x30);
  uVar1 = *(ushort *)(lVar15 + 0x132);
  lStack_250 = lVar6;
  lStack_248 = lVar14;
  ppuStack_230 = &ppuStack_1f0;
  if ((uVar1 & 1) == 0) {
    lStack_240 = lVar16;
    uStack_238 = auVar20._0_8_;
    func_0x00fac028(lVar15);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
    uVar1 = *(ushort *)(lVar15 + 0x132);
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar6 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
    lStack_240 = auVar20._8_8_;
    uStack_238 = auVar20._0_8_;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = **(long **)(lVar8 + 0x30);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
        auVar20._8_8_ = lStack_240;
        auVar20._0_8_ = uStack_238;
      }
      lStack_240 = auVar20._8_8_;
      uStack_238 = auVar20._0_8_;
      func_0x00f78ad0(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  lVar6 = **(long **)(lVar8 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if (**(long **)(lVar6 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))
              (**(long **)(lVar6 + 0xb8),auVar17._0_8_,&uStack_258);
    return uStack_258;
  }
  auVar17 = func_0x00f78af4();
  lVar6 = auVar17._8_8_;
  if (auVar17._0_8_ == 0) {
    lVar16 = **(long **)(lVar6 + 0x30);
    uVar1 = *(ushort *)(lVar16 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar16);
      uVar1 = *(ushort *)(lVar16 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar16 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        lVar16 = **(long **)(lVar6 + 0x30);
        if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar16);
        }
        func_0x00f78ad0(lVar16);
      }
    }
    lVar6 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar13 = **(undefined8 **)(lVar6 + 0xb8);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar6 + 0x30) + 8);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    uVar13 = func_0x00f78aec(lVar16);
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar13,auVar17._0_8_);
  }
  return uVar13;
}



// ============================================================
// RVA: 0x18bd53c | Core.Actors.PooledActorManager.DeInitAndRemovePool<SuperShieldUsable>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [16];
  undefined8 **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65db & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65db = 1;
  }
  uVar13 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar5);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  uStack_60 = 0x3d25458;
  puStack_38 = &Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  puVar9 = param_3;
  uStack_58 = uVar13;
  lStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar17._0_8_ != 0) {
    puVar9 = *(undefined8 **)param_3[6];
    (*(code *)*puVar9)();
    lVar6 = *(long *)(auVar17._0_8_ + 0x10);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_3[6] + 8))(lVar6,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_68 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar10 = puVar9;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  auVar19._8_8_ = puVar10;
  auVar19._0_8_ = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  puStack_a8 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar11 = puVar10;
  puVar12 = param_4;
  uStack_d0 = uVar13;
  puStack_c8 = puVar9;
  ppuStack_b0 = &ppuStack_70;
  auStack_c0 = auVar17;
  if (*(long *)(lVar6 + 0x18) != 0) {
    puVar11 = *(undefined8 **)(param_4[6] + 8);
    (*(code *)*puVar11)(*(long *)(lVar6 + 0x18),puVar10);
    puVar9 = param_4;
    auVar17 = auVar19;
    if (*(long *)(lVar6 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_4[6] + 0x10))
                         (*(long *)(lVar6 + 0x10),auVar18._8_8_,puVar10);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar14 = auVar18._8_8_;
  lVar16 = auVar18._0_8_;
  puStack_d8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_100 = lVar6;
  puStack_f8 = puVar9;
  ppuStack_e0 = &ppuStack_b0;
  auStack_f0 = auVar17;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar13 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar16,uVar5);
      return uVar13;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_108 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = puVar11;
  lStack_118 = lVar16;
  ppuStack_110 = &ppuStack_e0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    puVar9 = *(undefined8 **)puVar11[6];
    lStack_120 = lVar14;
    uVar5 = (*(code *)*puVar9)();
    auVar18._8_8_ = lStack_120;
    auVar18._0_8_ = puVar11;
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar11[6] + 8))();
      return uVar13;
    }
  }
  lStack_120 = auVar18._8_8_;
  auVar17 = func_0x00f78af4();
  uStack_150 = 0x3d25458;
  puStack_128 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_148 = uVar13;
  lStack_140 = lVar6;
  uStack_138 = auVar18._0_8_;
  ppuStack_130 = &ppuStack_110;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar13 = **(undefined8 **)(auVar17._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(auVar17._8_8_ + 0x30) + 8))
                         (auVar17._0_8_,uVar13);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_158 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_180 = &ppuStack_160;
  uStack_168 = 0;
  ppuStack_160 = &ppuStack_130;
  if (auVar17._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar17._0_8_,auVar17._8_8_,&uStack_168);
    return uStack_168;
  }
  auVar17 = func_0x00f78af4();
  puStack_178 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar10 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar19 = func_0x00f78af4();
  uVar5 = auVar19._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = puVar12;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = puVar12;
  lVar6 = auVar19._0_8_;
  puStack_1b8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_1e0 = uVar13;
  puStack_1d8 = puVar9;
  ppuStack_1c0 = &ppuStack_180;
  auStack_1d0 = auVar17;
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar13 = (*(code *)**(undefined8 **)puVar12[6])();
    if ((int)uVar13 != 0) {
      puVar9 = puVar10;
      auVar17 = auVar2;
      if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar7 = (*(code *)**(undefined8 **)(puVar12[6] + 8))(*(long *)(lVar6 + 0x18),*puVar10);
      if ((uVar7 & 1) == 0) {
        auVar17 = auVar3;
        if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(puVar12[6] + 0x10))(*(long *)(lVar6 + 0x10),uVar5,*puVar10);
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
    }
    return uVar13;
  }
code_r0x018bdaa0:
  auVar20 = func_0x00f78af4();
  lVar16 = auVar20._8_8_;
  puStack_1e8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_218 = 0;
  lVar14 = **(long **)(lVar16 + 0x30);
  uVar1 = *(ushort *)(lVar14 + 0x132);
  lStack_210 = lVar6;
  puStack_208 = puVar9;
  ppuStack_1f0 = &ppuStack_1c0;
  auStack_200 = auVar17;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar14);
    uVar1 = *(ushort *)(lVar14 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar14 = **(long **)(lVar16 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      lVar14 = **(long **)(lVar16 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      func_0x00f78ad0(lVar14);
    }
  }
  lVar14 = **(long **)(lVar16 + 0x30);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  if (**(long **)(lVar14 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
              (**(long **)(lVar14 + 0xb8),auVar20._0_8_,&uStack_218);
    return uStack_218;
  }
  auVar17 = func_0x00f78af4();
  lVar8 = auVar17._8_8_;
  puStack_228 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_258 = 0;
  lVar15 = **(long **)(lVar8 + 0x30);
  uVar1 = *(ushort *)(lVar15 + 0x132);
  lStack_250 = lVar6;
  lStack_248 = lVar14;
  ppuStack_230 = &ppuStack_1f0;
  if ((uVar1 & 1) == 0) {
    lStack_240 = lVar16;
    uStack_238 = auVar20._0_8_;
    func_0x00fac028(lVar15);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
    uVar1 = *(ushort *)(lVar15 + 0x132);
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar6 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
    lStack_240 = auVar20._8_8_;
    uStack_238 = auVar20._0_8_;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = **(long **)(lVar8 + 0x30);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
        auVar20._8_8_ = lStack_240;
        auVar20._0_8_ = uStack_238;
      }
      lStack_240 = auVar20._8_8_;
      uStack_238 = auVar20._0_8_;
      func_0x00f78ad0(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  lVar6 = **(long **)(lVar8 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if (**(long **)(lVar6 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))
              (**(long **)(lVar6 + 0xb8),auVar17._0_8_,&uStack_258);
    return uStack_258;
  }
  auVar17 = func_0x00f78af4();
  lVar6 = auVar17._8_8_;
  if (auVar17._0_8_ == 0) {
    lVar16 = **(long **)(lVar6 + 0x30);
    uVar1 = *(ushort *)(lVar16 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar16);
      uVar1 = *(ushort *)(lVar16 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar16 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        lVar16 = **(long **)(lVar6 + 0x30);
        if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar16);
        }
        func_0x00f78ad0(lVar16);
      }
    }
    lVar6 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar13 = **(undefined8 **)(lVar6 + 0xb8);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar6 + 0x30) + 8);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    uVar13 = func_0x00f78aec(lVar16);
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar13,auVar17._0_8_);
  }
  return uVar13;
}



// ============================================================
// RVA: 0x18bd53c | Core.Actors.PooledActorManager.DeInitAndRemovePool<object>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined1 auStack_200 [16];
  undefined8 **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [16];
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65db & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65db = 1;
  }
  uVar13 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar5);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  uStack_60 = 0x3d25458;
  puStack_38 = &Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  puVar9 = param_3;
  uStack_58 = uVar13;
  lStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar17._0_8_ != 0) {
    puVar9 = *(undefined8 **)param_3[6];
    (*(code *)*puVar9)();
    lVar6 = *(long *)(auVar17._0_8_ + 0x10);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_3[6] + 8))(lVar6,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_68 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar10 = puVar9;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  auVar19._8_8_ = puVar10;
  auVar19._0_8_ = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  puStack_a8 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar11 = puVar10;
  puVar12 = param_4;
  uStack_d0 = uVar13;
  puStack_c8 = puVar9;
  ppuStack_b0 = &ppuStack_70;
  auStack_c0 = auVar17;
  if (*(long *)(lVar6 + 0x18) != 0) {
    puVar11 = *(undefined8 **)(param_4[6] + 8);
    (*(code *)*puVar11)(*(long *)(lVar6 + 0x18),puVar10);
    puVar9 = param_4;
    auVar17 = auVar19;
    if (*(long *)(lVar6 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_4[6] + 0x10))
                         (*(long *)(lVar6 + 0x10),auVar18._8_8_,puVar10);
      return uVar13;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar14 = auVar18._8_8_;
  lVar16 = auVar18._0_8_;
  puStack_d8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_100 = lVar6;
  puStack_f8 = puVar9;
  ppuStack_e0 = &ppuStack_b0;
  auStack_f0 = auVar17;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar13 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar16,uVar5);
      return uVar13;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_108 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = puVar11;
  lStack_118 = lVar16;
  ppuStack_110 = &ppuStack_e0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    puVar9 = *(undefined8 **)puVar11[6];
    lStack_120 = lVar14;
    uVar5 = (*(code *)*puVar9)();
    auVar18._8_8_ = lStack_120;
    auVar18._0_8_ = puVar11;
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar11[6] + 8))();
      return uVar13;
    }
  }
  lStack_120 = auVar18._8_8_;
  auVar17 = func_0x00f78af4();
  uStack_150 = 0x3d25458;
  puStack_128 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_148 = uVar13;
  lStack_140 = lVar6;
  uStack_138 = auVar18._0_8_;
  ppuStack_130 = &ppuStack_110;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar13 = **(undefined8 **)(auVar17._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(auVar17._8_8_ + 0x30) + 8))
                         (auVar17._0_8_,uVar13);
      return uVar13;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_158 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_180 = &ppuStack_160;
  uStack_168 = 0;
  ppuStack_160 = &ppuStack_130;
  if (auVar17._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar17._0_8_,auVar17._8_8_,&uStack_168);
    return uStack_168;
  }
  auVar17 = func_0x00f78af4();
  puStack_178 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar10 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar13 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar17._0_8_,uVar5,auVar17._8_8_);
      return uVar13;
    }
  }
  auVar19 = func_0x00f78af4();
  uVar5 = auVar19._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = puVar12;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = puVar12;
  lVar6 = auVar19._0_8_;
  puStack_1b8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_1e0 = uVar13;
  puStack_1d8 = puVar9;
  ppuStack_1c0 = &ppuStack_180;
  auStack_1d0 = auVar17;
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar13 = (*(code *)**(undefined8 **)puVar12[6])();
    if ((int)uVar13 != 0) {
      puVar9 = puVar10;
      auVar17 = auVar2;
      if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar7 = (*(code *)**(undefined8 **)(puVar12[6] + 8))(*(long *)(lVar6 + 0x18),*puVar10);
      if ((uVar7 & 1) == 0) {
        auVar17 = auVar3;
        if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(puVar12[6] + 0x10))(*(long *)(lVar6 + 0x10),uVar5,*puVar10);
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
    }
    return uVar13;
  }
code_r0x018bdaa0:
  auVar20 = func_0x00f78af4();
  lVar16 = auVar20._8_8_;
  puStack_1e8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_218 = 0;
  lVar14 = **(long **)(lVar16 + 0x30);
  uVar1 = *(ushort *)(lVar14 + 0x132);
  lStack_210 = lVar6;
  puStack_208 = puVar9;
  ppuStack_1f0 = &ppuStack_1c0;
  auStack_200 = auVar17;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar14);
    uVar1 = *(ushort *)(lVar14 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar14 = **(long **)(lVar16 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      lVar14 = **(long **)(lVar16 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      func_0x00f78ad0(lVar14);
    }
  }
  lVar14 = **(long **)(lVar16 + 0x30);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  if (**(long **)(lVar14 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
              (**(long **)(lVar14 + 0xb8),auVar20._0_8_,&uStack_218);
    return uStack_218;
  }
  auVar17 = func_0x00f78af4();
  lVar8 = auVar17._8_8_;
  puStack_228 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_258 = 0;
  lVar15 = **(long **)(lVar8 + 0x30);
  uVar1 = *(ushort *)(lVar15 + 0x132);
  lStack_250 = lVar6;
  lStack_248 = lVar14;
  ppuStack_230 = &ppuStack_1f0;
  if ((uVar1 & 1) == 0) {
    lStack_240 = lVar16;
    uStack_238 = auVar20._0_8_;
    func_0x00fac028(lVar15);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
    uVar1 = *(ushort *)(lVar15 + 0x132);
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar6 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
    lStack_240 = auVar20._8_8_;
    uStack_238 = auVar20._0_8_;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = **(long **)(lVar8 + 0x30);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
        auVar20._8_8_ = lStack_240;
        auVar20._0_8_ = uStack_238;
      }
      lStack_240 = auVar20._8_8_;
      uStack_238 = auVar20._0_8_;
      func_0x00f78ad0(lVar6);
      auVar20._8_8_ = lStack_240;
      auVar20._0_8_ = uStack_238;
    }
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  lVar6 = **(long **)(lVar8 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
    auVar20._8_8_ = lStack_240;
    auVar20._0_8_ = uStack_238;
  }
  lStack_240 = auVar20._8_8_;
  uStack_238 = auVar20._0_8_;
  if (**(long **)(lVar6 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))
              (**(long **)(lVar6 + 0xb8),auVar17._0_8_,&uStack_258);
    return uStack_258;
  }
  auVar17 = func_0x00f78af4();
  lVar6 = auVar17._8_8_;
  if (auVar17._0_8_ == 0) {
    lVar16 = **(long **)(lVar6 + 0x30);
    uVar1 = *(ushort *)(lVar16 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar16);
      uVar1 = *(ushort *)(lVar16 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar16 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        lVar16 = **(long **)(lVar6 + 0x30);
        if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar16);
        }
        func_0x00f78ad0(lVar16);
      }
    }
    lVar6 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar13 = **(undefined8 **)(lVar6 + 0xb8);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar6 + 0x30) + 8);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    uVar13 = func_0x00f78aec(lVar16);
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar13,auVar17._0_8_);
  }
  return uVar13;
}



// ============================================================
// RVA: 0x18bd5e4 | Core.Actors.PooledActorManager.DeInitAndRemovePool<object>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeInitAndRemovePool_object_
          (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 **ppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  puVar10 = param_3;
  if (param_1 != 0) {
    puVar10 = *(undefined8 **)param_3[6];
    (*(code *)*puVar10)();
    if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))(*(long *)(param_1 + 0x10),param_2);
      return uVar4;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_38 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar11 = puVar10;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  uVar4 = *(undefined8 *)puVar10[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)**(undefined8 **)(puVar10[6] + 8))(auVar17._0_8_,uVar6,auVar17._8_8_);
      return uVar4;
    }
  }
  auVar18 = func_0x00f78af4();
  auVar19._8_8_ = puVar11;
  auVar19._0_8_ = auVar18._8_8_;
  lVar7 = auVar18._0_8_;
  puStack_78 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar12 = puVar11;
  puVar13 = param_4;
  uStack_a0 = uVar4;
  puStack_98 = puVar10;
  ppuStack_80 = &puStack_40;
  auStack_90 = auVar17;
  if (*(long *)(lVar7 + 0x18) != 0) {
    puVar12 = *(undefined8 **)(param_4[6] + 8);
    (*(code *)*puVar12)(*(long *)(lVar7 + 0x18),puVar11);
    puVar10 = param_4;
    auVar17 = auVar19;
    if (*(long *)(lVar7 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)**(undefined8 **)(param_4[6] + 0x10))
                        (*(long *)(lVar7 + 0x10),auVar18._8_8_,puVar11);
      return uVar4;
    }
  }
  auVar18 = func_0x00f78af4();
  lVar14 = auVar18._8_8_;
  lVar16 = auVar18._0_8_;
  puStack_a8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_d0 = lVar7;
  puStack_c8 = puVar10;
  ppuStack_b0 = &ppuStack_80;
  auStack_c0 = auVar17;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar4 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (lVar16 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar16,uVar6);
      return uVar4;
    }
  }
  lVar7 = func_0x00f78af4();
  puStack_d8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar10 = puVar12;
  lStack_e8 = lVar16;
  ppuStack_e0 = &ppuStack_b0;
  if (*(long *)(lVar7 + 0x10) != 0) {
    puVar10 = *(undefined8 **)puVar12[6];
    lStack_f0 = lVar14;
    uVar6 = (*(code *)*puVar10)();
    auVar18._8_8_ = lStack_f0;
    auVar18._0_8_ = puVar12;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (*(long *)(lVar7 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)**(undefined8 **)(puVar12[6] + 8))();
      return uVar4;
    }
  }
  lStack_f0 = auVar18._8_8_;
  auVar17 = func_0x00f78af4();
  uStack_120 = 0x3d25458;
  puStack_f8 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_118 = uVar4;
  lStack_110 = lVar7;
  uStack_108 = auVar18._0_8_;
  ppuStack_100 = &ppuStack_e0;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar4 = **(undefined8 **)(auVar17._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
  if (plVar5 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(auVar17._8_8_ + 0x30) + 8))(auVar17._0_8_,uVar4)
      ;
      return uVar4;
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_128 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_150 = &ppuStack_130;
  uStack_138 = 0;
  ppuStack_130 = &ppuStack_100;
  if (auVar17._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar10[6])(auVar17._0_8_,auVar17._8_8_,&uStack_138);
    return uStack_138;
  }
  auVar17 = func_0x00f78af4();
  puStack_148 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar11 = puVar10;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar4 = *(undefined8 *)puVar10[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (auVar17._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)**(undefined8 **)(puVar10[6] + 8))(auVar17._0_8_,uVar6,auVar17._8_8_);
      return uVar4;
    }
  }
  auVar19 = func_0x00f78af4();
  uVar6 = auVar19._8_8_;
  auVar3._8_8_ = uVar6;
  auVar3._0_8_ = puVar13;
  auVar2._8_8_ = uVar6;
  auVar2._0_8_ = puVar13;
  lVar7 = auVar19._0_8_;
  puStack_188 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_1b0 = uVar4;
  puStack_1a8 = puVar10;
  ppuStack_190 = &ppuStack_150;
  auStack_1a0 = auVar17;
  if (*(long *)(lVar7 + 0x10) != 0) {
    uVar4 = (*(code *)**(undefined8 **)puVar13[6])();
    if ((int)uVar4 != 0) {
      puVar10 = puVar11;
      auVar17 = auVar2;
      if (*(long *)(lVar7 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar8 = (*(code *)**(undefined8 **)(puVar13[6] + 8))(*(long *)(lVar7 + 0x18),*puVar11);
      if ((uVar8 & 1) == 0) {
        auVar17 = auVar3;
        if (*(long *)(lVar7 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(puVar13[6] + 0x10))(*(long *)(lVar7 + 0x10),uVar6,*puVar11);
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    return uVar4;
  }
code_r0x018bdaa0:
  auVar20 = func_0x00f78af4();
  lVar16 = auVar20._8_8_;
  puStack_1b8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_1e8 = 0;
  lVar14 = **(long **)(lVar16 + 0x30);
  uVar1 = *(ushort *)(lVar14 + 0x132);
  lStack_1e0 = lVar7;
  puStack_1d8 = puVar10;
  ppuStack_1c0 = &ppuStack_190;
  auStack_1d0 = auVar17;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar14);
    uVar1 = *(ushort *)(lVar14 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar14 = **(long **)(lVar16 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    if (*(int *)(lVar14 + 0xe0) == 0) {
      lVar14 = **(long **)(lVar16 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      func_0x00f78ad0(lVar14);
    }
  }
  lVar14 = **(long **)(lVar16 + 0x30);
  if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar14);
  }
  if (**(long **)(lVar14 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar16 + 0x30) + 8))
              (**(long **)(lVar14 + 0xb8),auVar20._0_8_,&uStack_1e8);
    return uStack_1e8;
  }
  auVar17 = func_0x00f78af4();
  lVar9 = auVar17._8_8_;
  puStack_1f8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_228 = 0;
  lVar15 = **(long **)(lVar9 + 0x30);
  uVar1 = *(ushort *)(lVar15 + 0x132);
  lStack_220 = lVar7;
  lStack_218 = lVar14;
  ppuStack_200 = &ppuStack_1c0;
  if ((uVar1 & 1) == 0) {
    lStack_210 = lVar16;
    uStack_208 = auVar20._0_8_;
    func_0x00fac028(lVar15);
    auVar20._8_8_ = lStack_210;
    auVar20._0_8_ = uStack_208;
    uVar1 = *(ushort *)(lVar15 + 0x132);
  }
  lStack_210 = auVar20._8_8_;
  uStack_208 = auVar20._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar7 = **(long **)(lVar9 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
      auVar20._8_8_ = lStack_210;
      auVar20._0_8_ = uStack_208;
    }
    lStack_210 = auVar20._8_8_;
    uStack_208 = auVar20._0_8_;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      lVar7 = **(long **)(lVar9 + 0x30);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
        auVar20._8_8_ = lStack_210;
        auVar20._0_8_ = uStack_208;
      }
      lStack_210 = auVar20._8_8_;
      uStack_208 = auVar20._0_8_;
      func_0x00f78ad0(lVar7);
      auVar20._8_8_ = lStack_210;
      auVar20._0_8_ = uStack_208;
    }
  }
  lStack_210 = auVar20._8_8_;
  uStack_208 = auVar20._0_8_;
  lVar7 = **(long **)(lVar9 + 0x30);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
    auVar20._8_8_ = lStack_210;
    auVar20._0_8_ = uStack_208;
  }
  lStack_210 = auVar20._8_8_;
  uStack_208 = auVar20._0_8_;
  if (**(long **)(lVar7 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))
              (**(long **)(lVar7 + 0xb8),auVar17._0_8_,&uStack_228);
    return uStack_228;
  }
  auVar17 = func_0x00f78af4();
  lVar7 = auVar17._8_8_;
  if (auVar17._0_8_ == 0) {
    lVar16 = **(long **)(lVar7 + 0x30);
    uVar1 = *(ushort *)(lVar16 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar16);
      uVar1 = *(ushort *)(lVar16 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar16 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        lVar16 = **(long **)(lVar7 + 0x30);
        if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar16);
        }
        func_0x00f78ad0(lVar16);
      }
    }
    lVar7 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    uVar4 = **(undefined8 **)(lVar7 + 0xb8);
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    uVar4 = func_0x00f78aec(lVar16);
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10))(uVar4,auVar17._0_8_);
  }
  return uVar4;
}



// ============================================================
// RVA: 0x18bd640 | Core.Actors.PooledActorManager.DeSpawn<AoEHit>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeSpawn_AoEHit_
          (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined1 auStack_170 [16];
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  puVar9 = param_3;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  uVar14 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)**(undefined8 **)(param_3[6] + 8))(param_1,uVar4,param_2);
      return uVar14;
    }
  }
  auVar15 = func_0x00f78af4();
  lVar5 = auVar15._0_8_;
  puStack_48 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar8 = puVar9;
  puVar10 = param_4;
  uStack_70 = uVar14;
  puStack_68 = param_3;
  lStack_60 = param_1;
  puStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar5 + 0x18) != 0) {
    puVar8 = *(undefined8 **)(param_4[6] + 8);
    (*(code *)*puVar8)(*(long *)(lVar5 + 0x18),puVar9);
    param_2 = puVar9;
    param_1 = auVar15._8_8_;
    param_3 = param_4;
    if (*(long *)(lVar5 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)**(undefined8 **)(param_4[6] + 0x10))
                         (*(long *)(lVar5 + 0x10),auVar15._8_8_,puVar9);
      return uVar14;
    }
  }
  auVar15 = func_0x00f78af4();
  lVar11 = auVar15._8_8_;
  lVar13 = auVar15._0_8_;
  puStack_78 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_a0 = lVar5;
  puStack_98 = param_3;
  lStack_90 = param_1;
  puStack_88 = param_2;
  ppuStack_80 = &puStack_50;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar14 = **(undefined8 **)(lVar11 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (lVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))(lVar13,uVar4);
      return uVar14;
    }
  }
  lVar5 = func_0x00f78af4();
  puStack_a8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = puVar8;
  lStack_b8 = lVar13;
  ppuStack_b0 = &ppuStack_80;
  if (*(long *)(lVar5 + 0x10) != 0) {
    puVar9 = *(undefined8 **)puVar8[6];
    lStack_c0 = lVar11;
    uVar4 = (*(code *)*puVar9)();
    auVar15._8_8_ = lStack_c0;
    auVar15._0_8_ = puVar8;
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(long *)(lVar5 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)**(undefined8 **)(puVar8[6] + 8))();
      return uVar14;
    }
  }
  lStack_c0 = auVar15._8_8_;
  auVar16 = func_0x00f78af4();
  uStack_f0 = 0x3d25458;
  puStack_c8 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_e8 = uVar14;
  lStack_e0 = lVar5;
  uStack_d8 = auVar15._0_8_;
  ppuStack_d0 = &ppuStack_b0;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar14 = **(undefined8 **)(auVar16._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
  if (plVar3 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (auVar16._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)**(undefined8 **)(*(long *)(auVar16._8_8_ + 0x30) + 8))
                         (auVar16._0_8_,uVar14);
      return uVar14;
    }
  }
  auVar15 = func_0x00f78af4();
  puStack_f8 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_120 = &ppuStack_100;
  uStack_108 = 0;
  ppuStack_100 = &ppuStack_d0;
  if (auVar15._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar15._0_8_,auVar15._8_8_,&uStack_108);
    return uStack_108;
  }
  auVar15 = func_0x00f78af4();
  puStack_118 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar14 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (auVar15._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar15._0_8_,uVar4,auVar15._8_8_);
      return uVar14;
    }
  }
  auVar17 = func_0x00f78af4();
  uVar4 = auVar17._8_8_;
  auVar2._8_8_ = uVar4;
  auVar2._0_8_ = puVar10;
  auVar16._8_8_ = uVar4;
  auVar16._0_8_ = puVar10;
  lVar5 = auVar17._0_8_;
  puStack_158 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_180 = uVar14;
  puStack_178 = puVar9;
  ppuStack_160 = &ppuStack_120;
  auStack_170 = auVar15;
  if (*(long *)(lVar5 + 0x10) != 0) {
    uVar14 = (*(code *)**(undefined8 **)puVar10[6])();
    if ((int)uVar14 != 0) {
      puVar9 = puVar8;
      auVar15 = auVar16;
      if (*(long *)(lVar5 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar6 = (*(code *)**(undefined8 **)(puVar10[6] + 8))(*(long *)(lVar5 + 0x18),*puVar8);
      if ((uVar6 & 1) == 0) {
        auVar15 = auVar2;
        if (*(long *)(lVar5 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(puVar10[6] + 0x10))(*(long *)(lVar5 + 0x10),uVar4,*puVar8);
        uVar14 = 0;
      }
      else {
        uVar14 = 1;
      }
    }
    return uVar14;
  }
code_r0x018bdaa0:
  auVar17 = func_0x00f78af4();
  lVar13 = auVar17._8_8_;
  puStack_188 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_1b8 = 0;
  lVar11 = **(long **)(lVar13 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_1b0 = lVar5;
  puStack_1a8 = puVar9;
  ppuStack_190 = &ppuStack_160;
  auStack_1a0 = auVar15;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar11);
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar11 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      lVar11 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      func_0x00f78ad0(lVar11);
    }
  }
  lVar11 = **(long **)(lVar13 + 0x30);
  if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar11);
  }
  if (**(long **)(lVar11 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
              (**(long **)(lVar11 + 0xb8),auVar17._0_8_,&uStack_1b8);
    return uStack_1b8;
  }
  auVar15 = func_0x00f78af4();
  lVar7 = auVar15._8_8_;
  puStack_1c8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_1f8 = 0;
  lVar12 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lStack_1f0 = lVar5;
  lStack_1e8 = lVar11;
  ppuStack_1d0 = &ppuStack_190;
  if ((uVar1 & 1) == 0) {
    lStack_1e0 = lVar13;
    uStack_1d8 = auVar17._0_8_;
    func_0x00fac028(lVar12);
    auVar17._8_8_ = lStack_1e0;
    auVar17._0_8_ = uStack_1d8;
    uVar1 = *(ushort *)(lVar12 + 0x132);
  }
  lStack_1e0 = auVar17._8_8_;
  uStack_1d8 = auVar17._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar5 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
      auVar17._8_8_ = lStack_1e0;
      auVar17._0_8_ = uStack_1d8;
    }
    lStack_1e0 = auVar17._8_8_;
    uStack_1d8 = auVar17._0_8_;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      lVar5 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
        auVar17._8_8_ = lStack_1e0;
        auVar17._0_8_ = uStack_1d8;
      }
      lStack_1e0 = auVar17._8_8_;
      uStack_1d8 = auVar17._0_8_;
      func_0x00f78ad0(lVar5);
      auVar17._8_8_ = lStack_1e0;
      auVar17._0_8_ = uStack_1d8;
    }
  }
  lStack_1e0 = auVar17._8_8_;
  uStack_1d8 = auVar17._0_8_;
  lVar5 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
    auVar17._8_8_ = lStack_1e0;
    auVar17._0_8_ = uStack_1d8;
  }
  lStack_1e0 = auVar17._8_8_;
  uStack_1d8 = auVar17._0_8_;
  if (**(long **)(lVar5 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar5 + 0xb8),auVar15._0_8_,&uStack_1f8);
    return uStack_1f8;
  }
  auVar15 = func_0x00f78af4();
  lVar5 = auVar15._8_8_;
  if (auVar15._0_8_ == 0) {
    lVar13 = **(long **)(lVar5 + 0x30);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar1 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar13 = **(long **)(lVar5 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = **(long **)(lVar5 + 0x30);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar5 = **(long **)(lVar5 + 0x30);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    uVar14 = **(undefined8 **)(lVar5 + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar5 + 0x30) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar14 = func_0x00f78aec(lVar13);
    (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10))(uVar14,auVar15._0_8_);
  }
  return uVar14;
}



// ============================================================
// RVA: 0x18bd640 | Core.Actors.PooledActorManager.DeSpawn<object>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeSpawn_AoEHit_
          (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined1 auStack_170 [16];
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  puVar9 = param_3;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  uVar14 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)**(undefined8 **)(param_3[6] + 8))(param_1,uVar4,param_2);
      return uVar14;
    }
  }
  auVar15 = func_0x00f78af4();
  lVar5 = auVar15._0_8_;
  puStack_48 = &Core_Actors_PooledActorManager__DeSpawn_object_;
  puVar8 = puVar9;
  puVar10 = param_4;
  uStack_70 = uVar14;
  puStack_68 = param_3;
  lStack_60 = param_1;
  puStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar5 + 0x18) != 0) {
    puVar8 = *(undefined8 **)(param_4[6] + 8);
    (*(code *)*puVar8)(*(long *)(lVar5 + 0x18),puVar9);
    param_2 = puVar9;
    param_1 = auVar15._8_8_;
    param_3 = param_4;
    if (*(long *)(lVar5 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)**(undefined8 **)(param_4[6] + 0x10))
                         (*(long *)(lVar5 + 0x10),auVar15._8_8_,puVar9);
      return uVar14;
    }
  }
  auVar15 = func_0x00f78af4();
  lVar11 = auVar15._8_8_;
  lVar13 = auVar15._0_8_;
  puStack_78 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_a0 = lVar5;
  puStack_98 = param_3;
  lStack_90 = param_1;
  puStack_88 = param_2;
  ppuStack_80 = &puStack_50;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar14 = **(undefined8 **)(lVar11 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (lVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))(lVar13,uVar4);
      return uVar14;
    }
  }
  lVar5 = func_0x00f78af4();
  puStack_a8 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = puVar8;
  lStack_b8 = lVar13;
  ppuStack_b0 = &ppuStack_80;
  if (*(long *)(lVar5 + 0x10) != 0) {
    puVar9 = *(undefined8 **)puVar8[6];
    lStack_c0 = lVar11;
    uVar4 = (*(code *)*puVar9)();
    auVar15._8_8_ = lStack_c0;
    auVar15._0_8_ = puVar8;
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(long *)(lVar5 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)**(undefined8 **)(puVar8[6] + 8))();
      return uVar14;
    }
  }
  lStack_c0 = auVar15._8_8_;
  auVar16 = func_0x00f78af4();
  uStack_f0 = 0x3d25458;
  puStack_c8 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_e8 = uVar14;
  lStack_e0 = lVar5;
  uStack_d8 = auVar15._0_8_;
  ppuStack_d0 = &ppuStack_b0;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar14 = **(undefined8 **)(auVar16._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
  if (plVar3 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (auVar16._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)**(undefined8 **)(*(long *)(auVar16._8_8_ + 0x30) + 8))
                         (auVar16._0_8_,uVar14);
      return uVar14;
    }
  }
  auVar15 = func_0x00f78af4();
  puStack_f8 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_120 = &ppuStack_100;
  uStack_108 = 0;
  ppuStack_100 = &ppuStack_d0;
  if (auVar15._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar15._0_8_,auVar15._8_8_,&uStack_108);
    return uStack_108;
  }
  auVar15 = func_0x00f78af4();
  puStack_118 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar14 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (auVar15._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar15._0_8_,uVar4,auVar15._8_8_);
      return uVar14;
    }
  }
  auVar17 = func_0x00f78af4();
  uVar4 = auVar17._8_8_;
  auVar2._8_8_ = uVar4;
  auVar2._0_8_ = puVar10;
  auVar16._8_8_ = uVar4;
  auVar16._0_8_ = puVar10;
  lVar5 = auVar17._0_8_;
  puStack_158 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_180 = uVar14;
  puStack_178 = puVar9;
  ppuStack_160 = &ppuStack_120;
  auStack_170 = auVar15;
  if (*(long *)(lVar5 + 0x10) != 0) {
    uVar14 = (*(code *)**(undefined8 **)puVar10[6])();
    if ((int)uVar14 != 0) {
      puVar9 = puVar8;
      auVar15 = auVar16;
      if (*(long *)(lVar5 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar6 = (*(code *)**(undefined8 **)(puVar10[6] + 8))(*(long *)(lVar5 + 0x18),*puVar8);
      if ((uVar6 & 1) == 0) {
        auVar15 = auVar2;
        if (*(long *)(lVar5 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(puVar10[6] + 0x10))(*(long *)(lVar5 + 0x10),uVar4,*puVar8);
        uVar14 = 0;
      }
      else {
        uVar14 = 1;
      }
    }
    return uVar14;
  }
code_r0x018bdaa0:
  auVar17 = func_0x00f78af4();
  lVar13 = auVar17._8_8_;
  puStack_188 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_1b8 = 0;
  lVar11 = **(long **)(lVar13 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_1b0 = lVar5;
  puStack_1a8 = puVar9;
  ppuStack_190 = &ppuStack_160;
  auStack_1a0 = auVar15;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar11);
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar11 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      lVar11 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      func_0x00f78ad0(lVar11);
    }
  }
  lVar11 = **(long **)(lVar13 + 0x30);
  if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar11);
  }
  if (**(long **)(lVar11 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
              (**(long **)(lVar11 + 0xb8),auVar17._0_8_,&uStack_1b8);
    return uStack_1b8;
  }
  auVar15 = func_0x00f78af4();
  lVar7 = auVar15._8_8_;
  puStack_1c8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_1f8 = 0;
  lVar12 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lStack_1f0 = lVar5;
  lStack_1e8 = lVar11;
  ppuStack_1d0 = &ppuStack_190;
  if ((uVar1 & 1) == 0) {
    lStack_1e0 = lVar13;
    uStack_1d8 = auVar17._0_8_;
    func_0x00fac028(lVar12);
    auVar17._8_8_ = lStack_1e0;
    auVar17._0_8_ = uStack_1d8;
    uVar1 = *(ushort *)(lVar12 + 0x132);
  }
  lStack_1e0 = auVar17._8_8_;
  uStack_1d8 = auVar17._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar5 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
      auVar17._8_8_ = lStack_1e0;
      auVar17._0_8_ = uStack_1d8;
    }
    lStack_1e0 = auVar17._8_8_;
    uStack_1d8 = auVar17._0_8_;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      lVar5 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
        auVar17._8_8_ = lStack_1e0;
        auVar17._0_8_ = uStack_1d8;
      }
      lStack_1e0 = auVar17._8_8_;
      uStack_1d8 = auVar17._0_8_;
      func_0x00f78ad0(lVar5);
      auVar17._8_8_ = lStack_1e0;
      auVar17._0_8_ = uStack_1d8;
    }
  }
  lStack_1e0 = auVar17._8_8_;
  uStack_1d8 = auVar17._0_8_;
  lVar5 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
    auVar17._8_8_ = lStack_1e0;
    auVar17._0_8_ = uStack_1d8;
  }
  lStack_1e0 = auVar17._8_8_;
  uStack_1d8 = auVar17._0_8_;
  if (**(long **)(lVar5 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar5 + 0xb8),auVar15._0_8_,&uStack_1f8);
    return uStack_1f8;
  }
  auVar15 = func_0x00f78af4();
  lVar5 = auVar15._8_8_;
  if (auVar15._0_8_ == 0) {
    lVar13 = **(long **)(lVar5 + 0x30);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar1 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar13 = **(long **)(lVar5 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = **(long **)(lVar5 + 0x30);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar5 = **(long **)(lVar5 + 0x30);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    uVar14 = **(undefined8 **)(lVar5 + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar5 + 0x30) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar14 = func_0x00f78aec(lVar13);
    (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x10))(uVar14,auVar15._0_8_);
  }
  return uVar14;
}



// ============================================================
// RVA: 0x18bd6f8 | Core.Actors.PooledActorManager.DeSpawn<object>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeSpawn_object_
          (long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined1 auStack_160 [16];
  undefined8 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined1 auStack_130 [16];
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  puVar8 = param_3;
  lVar12 = param_4;
  puStack_48 = unaff_x19;
  uStack_50 = unaff_x20;
  lStack_58 = unaff_x21;
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar8 = *(undefined8 **)(*(long *)(param_4 + 0x30) + 8);
    (*(code *)*puVar8)(*(long *)(param_1 + 0x18),param_3);
    puStack_48 = param_3;
    uStack_50 = param_2;
    lStack_58 = param_4;
    if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                        (*(long *)(param_1 + 0x10),param_2,param_3);
      return uVar3;
    }
  }
  auVar14 = func_0x00f78af4();
  lVar10 = auVar14._8_8_;
  lVar13 = auVar14._0_8_;
  puStack_38 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  lStack_60 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar3 = **(undefined8 **)(lVar10 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar3,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (lVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 8))(lVar13,uVar5);
      return uVar3;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_68 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = puVar8;
  lStack_78 = lVar13;
  ppuStack_70 = &puStack_40;
  if (*(long *)(lVar6 + 0x10) != 0) {
    puVar9 = *(undefined8 **)puVar8[6];
    lStack_80 = lVar10;
    uVar5 = (*(code *)*puVar9)();
    auVar14._8_8_ = lStack_80;
    auVar14._0_8_ = puVar8;
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (*(long *)(lVar6 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)**(undefined8 **)(puVar8[6] + 8))();
      return uVar3;
    }
  }
  lStack_80 = auVar14._8_8_;
  auVar15 = func_0x00f78af4();
  uStack_b0 = 0x3d25458;
  puStack_88 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_a8 = uVar3;
  lStack_a0 = lVar6;
  uStack_98 = auVar14._0_8_;
  ppuStack_90 = &ppuStack_70;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar3 = **(undefined8 **)(auVar15._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar3,0);
  if (plVar4 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar15._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(auVar15._8_8_ + 0x30) + 8))(auVar15._0_8_,uVar3)
      ;
      return uVar3;
    }
  }
  auVar14 = func_0x00f78af4();
  puStack_b8 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_e0 = &ppuStack_c0;
  uStack_c8 = 0;
  ppuStack_c0 = &ppuStack_90;
  if (auVar14._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar14._0_8_,auVar14._8_8_,&uStack_c8);
    return uStack_c8;
  }
  auVar14 = func_0x00f78af4();
  puStack_d8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar3 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar3,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar14._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar14._0_8_,uVar5,auVar14._8_8_);
      return uVar3;
    }
  }
  auVar16 = func_0x00f78af4();
  uVar5 = auVar16._8_8_;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = lVar12;
  auVar15._8_8_ = uVar5;
  auVar15._0_8_ = lVar12;
  lVar13 = auVar16._0_8_;
  puStack_118 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_140 = uVar3;
  puStack_138 = puVar9;
  ppuStack_120 = &ppuStack_e0;
  auStack_130 = auVar14;
  if (*(long *)(lVar13 + 0x10) != 0) {
    uVar3 = (**(code **)**(undefined8 **)(lVar12 + 0x30))();
    if ((int)uVar3 != 0) {
      puVar9 = puVar8;
      auVar14 = auVar15;
      if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
                        (*(long *)(lVar13 + 0x18),*puVar8);
      if ((uVar7 & 1) == 0) {
        auVar14 = auVar2;
        if (*(long *)(lVar13 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))
                  (*(long *)(lVar13 + 0x10),uVar5,*puVar8);
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    return uVar3;
  }
code_r0x018bdaa0:
  auVar16 = func_0x00f78af4();
  lVar12 = auVar16._8_8_;
  puStack_148 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_178 = 0;
  lVar10 = **(long **)(lVar12 + 0x30);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lStack_170 = lVar13;
  puStack_168 = puVar9;
  ppuStack_150 = &ppuStack_120;
  auStack_160 = auVar14;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar10);
    uVar1 = *(ushort *)(lVar10 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar10 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      lVar10 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      func_0x00f78ad0(lVar10);
    }
  }
  lVar10 = **(long **)(lVar12 + 0x30);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar16._0_8_,&uStack_178);
    return uStack_178;
  }
  auVar14 = func_0x00f78af4();
  lVar6 = auVar14._8_8_;
  puStack_188 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_1b8 = 0;
  lVar11 = **(long **)(lVar6 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_1b0 = lVar13;
  lStack_1a8 = lVar10;
  ppuStack_190 = &ppuStack_150;
  if ((uVar1 & 1) == 0) {
    lStack_1a0 = lVar12;
    uStack_198 = auVar16._0_8_;
    func_0x00fac028(lVar11);
    auVar16._8_8_ = lStack_1a0;
    auVar16._0_8_ = uStack_198;
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  lStack_1a0 = auVar16._8_8_;
  uStack_198 = auVar16._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar12 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
      auVar16._8_8_ = lStack_1a0;
      auVar16._0_8_ = uStack_198;
    }
    lStack_1a0 = auVar16._8_8_;
    uStack_198 = auVar16._0_8_;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
        auVar16._8_8_ = lStack_1a0;
        auVar16._0_8_ = uStack_198;
      }
      lStack_1a0 = auVar16._8_8_;
      uStack_198 = auVar16._0_8_;
      func_0x00f78ad0(lVar12);
      auVar16._8_8_ = lStack_1a0;
      auVar16._0_8_ = uStack_198;
    }
  }
  lStack_1a0 = auVar16._8_8_;
  uStack_198 = auVar16._0_8_;
  lVar12 = **(long **)(lVar6 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
    auVar16._8_8_ = lStack_1a0;
    auVar16._0_8_ = uStack_198;
  }
  lStack_1a0 = auVar16._8_8_;
  uStack_198 = auVar16._0_8_;
  if (**(long **)(lVar12 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 8))
              (**(long **)(lVar12 + 0xb8),auVar14._0_8_,&uStack_1b8);
    return uStack_1b8;
  }
  auVar14 = func_0x00f78af4();
  lVar12 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    lVar13 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar1 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar13 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar12 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    uVar3 = **(undefined8 **)(lVar12 + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar3 = func_0x00f78aec(lVar13);
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))(uVar3,auVar14._0_8_);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x18bd764 | Core.Actors.PooledActorManager.DeSpawnAllInGroup<object>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_
          (undefined8 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 *puStack_138;
  undefined1 auStack_130 [16];
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined1 auStack_100 [16];
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar11 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar5);
      return uVar11;
    }
  }
  lVar6 = func_0x00f78af4();
  puStack_38 = &Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  puVar9 = param_3;
  lStack_50 = param_2;
  puStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    puVar9 = *(undefined8 **)param_3[6];
    uVar5 = (*(code *)*puVar9)();
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    param_1 = param_3;
    if (*(long *)(lVar6 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
      return uVar11;
    }
  }
  auVar15 = func_0x00f78af4();
  uStack_80 = 0x3d25458;
  puStack_58 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  uStack_78 = uVar11;
  lStack_70 = lVar6;
  puStack_68 = param_1;
  ppuStack_60 = &puStack_40;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar11 = **(undefined8 **)(auVar15._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
  if (plVar4 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar15._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*(code *)**(undefined8 **)(*(long *)(auVar15._8_8_ + 0x30) + 8))
                         (auVar15._0_8_,uVar11);
      return uVar11;
    }
  }
  auVar15 = func_0x00f78af4();
  puStack_88 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_b0 = &ppuStack_90;
  uStack_98 = 0;
  ppuStack_90 = &ppuStack_60;
  if (auVar15._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar15._0_8_,auVar15._8_8_,&uStack_98);
    return uStack_98;
  }
  auVar15 = func_0x00f78af4();
  puStack_a8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar10 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar11 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar15._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar15._0_8_,uVar5,auVar15._8_8_);
      return uVar11;
    }
  }
  auVar16 = func_0x00f78af4();
  uVar5 = auVar16._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = param_4;
  lVar6 = auVar16._0_8_;
  puStack_e8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_110 = uVar11;
  puStack_108 = puVar9;
  ppuStack_f0 = &ppuStack_b0;
  auStack_100 = auVar15;
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar11 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar11 != 0) {
      puVar9 = puVar10;
      auVar15 = auVar2;
      if (*(long *)(lVar6 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar6 + 0x18),*puVar10);
      if ((uVar7 & 1) == 0) {
        auVar15 = auVar3;
        if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar6 + 0x10),uVar5,*puVar10);
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
    }
    return uVar11;
  }
code_r0x018bdaa0:
  auVar16 = func_0x00f78af4();
  lVar14 = auVar16._8_8_;
  puStack_118 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_148 = 0;
  lVar12 = **(long **)(lVar14 + 0x30);
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lStack_140 = lVar6;
  puStack_138 = puVar9;
  ppuStack_120 = &ppuStack_f0;
  auStack_130 = auVar15;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar12);
    uVar1 = *(ushort *)(lVar12 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar12 = **(long **)(lVar14 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = **(long **)(lVar14 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      func_0x00f78ad0(lVar12);
    }
  }
  lVar12 = **(long **)(lVar14 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
  }
  if (**(long **)(lVar12 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))
              (**(long **)(lVar12 + 0xb8),auVar16._0_8_,&uStack_148);
    return uStack_148;
  }
  auVar15 = func_0x00f78af4();
  lVar8 = auVar15._8_8_;
  puStack_158 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_188 = 0;
  lVar13 = **(long **)(lVar8 + 0x30);
  uVar1 = *(ushort *)(lVar13 + 0x132);
  lStack_180 = lVar6;
  lStack_178 = lVar12;
  ppuStack_160 = &ppuStack_120;
  if ((uVar1 & 1) == 0) {
    lStack_170 = lVar14;
    uStack_168 = auVar16._0_8_;
    func_0x00fac028(lVar13);
    auVar16._8_8_ = lStack_170;
    auVar16._0_8_ = uStack_168;
    uVar1 = *(ushort *)(lVar13 + 0x132);
  }
  lStack_170 = auVar16._8_8_;
  uStack_168 = auVar16._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar6 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
      auVar16._8_8_ = lStack_170;
      auVar16._0_8_ = uStack_168;
    }
    lStack_170 = auVar16._8_8_;
    uStack_168 = auVar16._0_8_;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = **(long **)(lVar8 + 0x30);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
        auVar16._8_8_ = lStack_170;
        auVar16._0_8_ = uStack_168;
      }
      lStack_170 = auVar16._8_8_;
      uStack_168 = auVar16._0_8_;
      func_0x00f78ad0(lVar6);
      auVar16._8_8_ = lStack_170;
      auVar16._0_8_ = uStack_168;
    }
  }
  lStack_170 = auVar16._8_8_;
  uStack_168 = auVar16._0_8_;
  lVar6 = **(long **)(lVar8 + 0x30);
  if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
    auVar16._8_8_ = lStack_170;
    auVar16._0_8_ = uStack_168;
  }
  lStack_170 = auVar16._8_8_;
  uStack_168 = auVar16._0_8_;
  if (**(long **)(lVar6 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))
              (**(long **)(lVar6 + 0xb8),auVar15._0_8_,&uStack_188);
    return uStack_188;
  }
  auVar15 = func_0x00f78af4();
  lVar6 = auVar15._8_8_;
  if (auVar15._0_8_ == 0) {
    lVar14 = **(long **)(lVar6 + 0x30);
    uVar1 = *(ushort *)(lVar14 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar14);
      uVar1 = *(ushort *)(lVar14 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar14 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      if (*(int *)(lVar14 + 0xe0) == 0) {
        lVar14 = **(long **)(lVar6 + 0x30);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        func_0x00f78ad0(lVar14);
      }
    }
    lVar6 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    uVar11 = **(undefined8 **)(lVar6 + 0xb8);
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar6 + 0x30) + 8);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    uVar11 = func_0x00f78aec(lVar14);
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(uVar11,auVar15._0_8_);
  }
  return uVar11;
}



// ============================================================
// RVA: 0x18bd80c | Core.Actors.PooledActorManager.DeSpawnAllInGroup<object>
// ============================================================

undefined8
Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_
          (long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined1 auStack_100 [16];
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  puVar9 = param_3;
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar9 = *(undefined8 **)param_3[6];
    uVar4 = (*(code *)*puVar9)();
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)**(undefined8 **)(param_3[6] + 8))();
      return uVar4;
    }
  }
  auVar15 = func_0x00f78af4();
  puStack_28 = &Core_Actors_PooledActorManager__Spawn_SuperShieldUsable_;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar4 = **(undefined8 **)(auVar15._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
  if (plVar5 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (auVar15._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(auVar15._8_8_ + 0x30) + 8))(auVar15._0_8_,uVar4)
      ;
      return uVar4;
    }
  }
  auVar15 = func_0x00f78af4();
  puStack_58 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_80 = &ppuStack_60;
  uStack_68 = 0;
  ppuStack_60 = &puStack_30;
  if (auVar15._0_8_ != 0) {
    (*(code *)**(undefined8 **)puVar9[6])(auVar15._0_8_,auVar15._8_8_,&uStack_68);
    return uStack_68;
  }
  auVar15 = func_0x00f78af4();
  puStack_78 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar10 = puVar9;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar4 = *(undefined8 *)puVar9[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (auVar15._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)**(undefined8 **)(puVar9[6] + 8))(auVar15._0_8_,uVar6,auVar15._8_8_);
      return uVar4;
    }
  }
  auVar16 = func_0x00f78af4();
  uVar6 = auVar16._8_8_;
  auVar3._8_8_ = uVar6;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = uVar6;
  auVar2._0_8_ = param_4;
  lVar13 = auVar16._0_8_;
  puStack_b8 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_e0 = uVar4;
  puStack_d8 = puVar9;
  ppuStack_c0 = &ppuStack_80;
  auStack_d0 = auVar15;
  if (*(long *)(lVar13 + 0x10) != 0) {
    uVar4 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar4 != 0) {
      puVar9 = puVar10;
      auVar15 = auVar2;
      if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar13 + 0x18),*puVar10);
      if ((uVar7 & 1) == 0) {
        auVar15 = auVar3;
        if (*(long *)(lVar13 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar13 + 0x10),uVar6,*puVar10);
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    return uVar4;
  }
code_r0x018bdaa0:
  auVar16 = func_0x00f78af4();
  lVar14 = auVar16._8_8_;
  puStack_e8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_118 = 0;
  lVar11 = **(long **)(lVar14 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_110 = lVar13;
  puStack_108 = puVar9;
  ppuStack_f0 = &ppuStack_c0;
  auStack_100 = auVar15;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar11);
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar11 = **(long **)(lVar14 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      lVar11 = **(long **)(lVar14 + 0x30);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      func_0x00f78ad0(lVar11);
    }
  }
  lVar11 = **(long **)(lVar14 + 0x30);
  if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar11);
  }
  if (**(long **)(lVar11 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))
              (**(long **)(lVar11 + 0xb8),auVar16._0_8_,&uStack_118);
    return uStack_118;
  }
  auVar15 = func_0x00f78af4();
  lVar8 = auVar15._8_8_;
  puStack_128 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_158 = 0;
  lVar12 = **(long **)(lVar8 + 0x30);
  uVar1 = *(ushort *)(lVar12 + 0x132);
  lStack_150 = lVar13;
  lStack_148 = lVar11;
  ppuStack_130 = &ppuStack_f0;
  if ((uVar1 & 1) == 0) {
    lStack_140 = lVar14;
    uStack_138 = auVar16._0_8_;
    func_0x00fac028(lVar12);
    auVar16._8_8_ = lStack_140;
    auVar16._0_8_ = uStack_138;
    uVar1 = *(ushort *)(lVar12 + 0x132);
  }
  lStack_140 = auVar16._8_8_;
  uStack_138 = auVar16._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar13 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
      auVar16._8_8_ = lStack_140;
      auVar16._0_8_ = uStack_138;
    }
    lStack_140 = auVar16._8_8_;
    uStack_138 = auVar16._0_8_;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      lVar13 = **(long **)(lVar8 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
        auVar16._8_8_ = lStack_140;
        auVar16._0_8_ = uStack_138;
      }
      lStack_140 = auVar16._8_8_;
      uStack_138 = auVar16._0_8_;
      func_0x00f78ad0(lVar13);
      auVar16._8_8_ = lStack_140;
      auVar16._0_8_ = uStack_138;
    }
  }
  lStack_140 = auVar16._8_8_;
  uStack_138 = auVar16._0_8_;
  lVar13 = **(long **)(lVar8 + 0x30);
  if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar13);
    auVar16._8_8_ = lStack_140;
    auVar16._0_8_ = uStack_138;
  }
  lStack_140 = auVar16._8_8_;
  uStack_138 = auVar16._0_8_;
  if (**(long **)(lVar13 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))
              (**(long **)(lVar13 + 0xb8),auVar15._0_8_,&uStack_158);
    return uStack_158;
  }
  auVar15 = func_0x00f78af4();
  lVar13 = auVar15._8_8_;
  if (auVar15._0_8_ == 0) {
    lVar14 = **(long **)(lVar13 + 0x30);
    uVar1 = *(ushort *)(lVar14 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar14);
      uVar1 = *(ushort *)(lVar14 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar14 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      if (*(int *)(lVar14 + 0xe0) == 0) {
        lVar14 = **(long **)(lVar13 + 0x30);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        func_0x00f78ad0(lVar14);
      }
    }
    lVar13 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar4 = **(undefined8 **)(lVar13 + 0xb8);
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar13 + 0x30) + 8);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    uVar4 = func_0x00f78aec(lVar14);
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 0x10))(uVar4,auVar15._0_8_);
  }
  return uVar4;
}



// ============================================================
// RVA: 0x18bd86c | Core.Actors.PooledActorManager.Spawn<AoEHit>
// ============================================================

undefined8
Core_Actors_PooledActorManager__Spawn_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar9 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar9);
      return uVar9;
    }
  }
  auVar14 = func_0x00f78af4();
  puStack_38 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_60 = &puStack_40;
  uStack_48 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar14._0_8_ != 0) {
    (*(code *)**(undefined8 **)param_3[6])(auVar14._0_8_,auVar14._8_8_,&uStack_48);
    return uStack_48;
  }
  auVar14 = func_0x00f78af4();
  puStack_58 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = param_3;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar9 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar14._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(param_3[6] + 8))(auVar14._0_8_,uVar5,auVar14._8_8_);
      return uVar9;
    }
  }
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = param_4;
  lVar12 = auVar15._0_8_;
  puStack_98 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_c0 = uVar9;
  puStack_b8 = param_3;
  ppuStack_a0 = &ppuStack_60;
  auStack_b0 = auVar14;
  if (*(long *)(lVar12 + 0x10) != 0) {
    uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar9 != 0) {
      param_3 = puVar8;
      auVar14 = auVar2;
      if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar12 + 0x18),*puVar8);
      if ((uVar6 & 1) == 0) {
        auVar14 = auVar3;
        if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar12 + 0x10),uVar5,*puVar8);
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    return uVar9;
  }
code_r0x018bdaa0:
  auVar15 = func_0x00f78af4();
  lVar13 = auVar15._8_8_;
  puStack_c8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_f8 = 0;
  lVar10 = **(long **)(lVar13 + 0x30);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lStack_f0 = lVar12;
  puStack_e8 = param_3;
  ppuStack_d0 = &ppuStack_a0;
  auStack_e0 = auVar14;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar10);
    uVar1 = *(ushort *)(lVar10 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar10 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      lVar10 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      func_0x00f78ad0(lVar10);
    }
  }
  lVar10 = **(long **)(lVar13 + 0x30);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar15._0_8_,&uStack_f8);
    return uStack_f8;
  }
  auVar14 = func_0x00f78af4();
  lVar7 = auVar14._8_8_;
  puStack_108 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_138 = 0;
  lVar11 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_130 = lVar12;
  lStack_128 = lVar10;
  ppuStack_110 = &ppuStack_d0;
  if ((uVar1 & 1) == 0) {
    lStack_120 = lVar13;
    uStack_118 = auVar15._0_8_;
    func_0x00fac028(lVar11);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar12 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
    lStack_120 = auVar15._8_8_;
    uStack_118 = auVar15._0_8_;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
        auVar15._8_8_ = lStack_120;
        auVar15._0_8_ = uStack_118;
      }
      lStack_120 = auVar15._8_8_;
      uStack_118 = auVar15._0_8_;
      func_0x00f78ad0(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  lVar12 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if (**(long **)(lVar12 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar12 + 0xb8),auVar14._0_8_,&uStack_138);
    return uStack_138;
  }
  auVar14 = func_0x00f78af4();
  lVar12 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    lVar13 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar1 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar13 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar12 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    uVar9 = **(undefined8 **)(lVar12 + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar9 = func_0x00f78aec(lVar13);
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))(uVar9,auVar14._0_8_);
  }
  return uVar9;
}



// ============================================================
// RVA: 0x18bd86c | Core.Actors.PooledActorManager.Spawn<BoostUsable>
// ============================================================

undefined8
Core_Actors_PooledActorManager__Spawn_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar9 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar9);
      return uVar9;
    }
  }
  auVar14 = func_0x00f78af4();
  puStack_38 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_60 = &puStack_40;
  uStack_48 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar14._0_8_ != 0) {
    (*(code *)**(undefined8 **)param_3[6])(auVar14._0_8_,auVar14._8_8_,&uStack_48);
    return uStack_48;
  }
  auVar14 = func_0x00f78af4();
  puStack_58 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = param_3;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar9 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar14._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(param_3[6] + 8))(auVar14._0_8_,uVar5,auVar14._8_8_);
      return uVar9;
    }
  }
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = param_4;
  lVar12 = auVar15._0_8_;
  puStack_98 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_c0 = uVar9;
  puStack_b8 = param_3;
  ppuStack_a0 = &ppuStack_60;
  auStack_b0 = auVar14;
  if (*(long *)(lVar12 + 0x10) != 0) {
    uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar9 != 0) {
      param_3 = puVar8;
      auVar14 = auVar2;
      if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar12 + 0x18),*puVar8);
      if ((uVar6 & 1) == 0) {
        auVar14 = auVar3;
        if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar12 + 0x10),uVar5,*puVar8);
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    return uVar9;
  }
code_r0x018bdaa0:
  auVar15 = func_0x00f78af4();
  lVar13 = auVar15._8_8_;
  puStack_c8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_f8 = 0;
  lVar10 = **(long **)(lVar13 + 0x30);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lStack_f0 = lVar12;
  puStack_e8 = param_3;
  ppuStack_d0 = &ppuStack_a0;
  auStack_e0 = auVar14;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar10);
    uVar1 = *(ushort *)(lVar10 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar10 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      lVar10 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      func_0x00f78ad0(lVar10);
    }
  }
  lVar10 = **(long **)(lVar13 + 0x30);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar15._0_8_,&uStack_f8);
    return uStack_f8;
  }
  auVar14 = func_0x00f78af4();
  lVar7 = auVar14._8_8_;
  puStack_108 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_138 = 0;
  lVar11 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_130 = lVar12;
  lStack_128 = lVar10;
  ppuStack_110 = &ppuStack_d0;
  if ((uVar1 & 1) == 0) {
    lStack_120 = lVar13;
    uStack_118 = auVar15._0_8_;
    func_0x00fac028(lVar11);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar12 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
    lStack_120 = auVar15._8_8_;
    uStack_118 = auVar15._0_8_;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
        auVar15._8_8_ = lStack_120;
        auVar15._0_8_ = uStack_118;
      }
      lStack_120 = auVar15._8_8_;
      uStack_118 = auVar15._0_8_;
      func_0x00f78ad0(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  lVar12 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if (**(long **)(lVar12 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar12 + 0xb8),auVar14._0_8_,&uStack_138);
    return uStack_138;
  }
  auVar14 = func_0x00f78af4();
  lVar12 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    lVar13 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar1 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar13 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar12 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    uVar9 = **(undefined8 **)(lVar12 + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar9 = func_0x00f78aec(lVar13);
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))(uVar9,auVar14._0_8_);
  }
  return uVar9;
}



// ============================================================
// RVA: 0x18bd86c | Core.Actors.PooledActorManager.Spawn<GoldenTurdProjectile>
// ============================================================

undefined8
Core_Actors_PooledActorManager__Spawn_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar9 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar9);
      return uVar9;
    }
  }
  auVar14 = func_0x00f78af4();
  puStack_38 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_60 = &puStack_40;
  uStack_48 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar14._0_8_ != 0) {
    (*(code *)**(undefined8 **)param_3[6])(auVar14._0_8_,auVar14._8_8_,&uStack_48);
    return uStack_48;
  }
  auVar14 = func_0x00f78af4();
  puStack_58 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = param_3;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar9 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar14._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(param_3[6] + 8))(auVar14._0_8_,uVar5,auVar14._8_8_);
      return uVar9;
    }
  }
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = param_4;
  lVar12 = auVar15._0_8_;
  puStack_98 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_c0 = uVar9;
  puStack_b8 = param_3;
  ppuStack_a0 = &ppuStack_60;
  auStack_b0 = auVar14;
  if (*(long *)(lVar12 + 0x10) != 0) {
    uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar9 != 0) {
      param_3 = puVar8;
      auVar14 = auVar2;
      if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar12 + 0x18),*puVar8);
      if ((uVar6 & 1) == 0) {
        auVar14 = auVar3;
        if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar12 + 0x10),uVar5,*puVar8);
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    return uVar9;
  }
code_r0x018bdaa0:
  auVar15 = func_0x00f78af4();
  lVar13 = auVar15._8_8_;
  puStack_c8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_f8 = 0;
  lVar10 = **(long **)(lVar13 + 0x30);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lStack_f0 = lVar12;
  puStack_e8 = param_3;
  ppuStack_d0 = &ppuStack_a0;
  auStack_e0 = auVar14;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar10);
    uVar1 = *(ushort *)(lVar10 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar10 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      lVar10 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      func_0x00f78ad0(lVar10);
    }
  }
  lVar10 = **(long **)(lVar13 + 0x30);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar15._0_8_,&uStack_f8);
    return uStack_f8;
  }
  auVar14 = func_0x00f78af4();
  lVar7 = auVar14._8_8_;
  puStack_108 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_138 = 0;
  lVar11 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_130 = lVar12;
  lStack_128 = lVar10;
  ppuStack_110 = &ppuStack_d0;
  if ((uVar1 & 1) == 0) {
    lStack_120 = lVar13;
    uStack_118 = auVar15._0_8_;
    func_0x00fac028(lVar11);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar12 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
    lStack_120 = auVar15._8_8_;
    uStack_118 = auVar15._0_8_;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
        auVar15._8_8_ = lStack_120;
        auVar15._0_8_ = uStack_118;
      }
      lStack_120 = auVar15._8_8_;
      uStack_118 = auVar15._0_8_;
      func_0x00f78ad0(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  lVar12 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if (**(long **)(lVar12 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar12 + 0xb8),auVar14._0_8_,&uStack_138);
    return uStack_138;
  }
  auVar14 = func_0x00f78af4();
  lVar12 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    lVar13 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar1 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar13 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar12 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    uVar9 = **(undefined8 **)(lVar12 + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar9 = func_0x00f78aec(lVar13);
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))(uVar9,auVar14._0_8_);
  }
  return uVar9;
}



// ============================================================
// RVA: 0x18bd86c | Core.Actors.PooledActorManager.Spawn<NormalShieldUsable>
// ============================================================

undefined8
Core_Actors_PooledActorManager__Spawn_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar9 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar9);
      return uVar9;
    }
  }
  auVar14 = func_0x00f78af4();
  puStack_38 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_60 = &puStack_40;
  uStack_48 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar14._0_8_ != 0) {
    (*(code *)**(undefined8 **)param_3[6])(auVar14._0_8_,auVar14._8_8_,&uStack_48);
    return uStack_48;
  }
  auVar14 = func_0x00f78af4();
  puStack_58 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = param_3;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar9 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar14._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(param_3[6] + 8))(auVar14._0_8_,uVar5,auVar14._8_8_);
      return uVar9;
    }
  }
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = param_4;
  lVar12 = auVar15._0_8_;
  puStack_98 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_c0 = uVar9;
  puStack_b8 = param_3;
  ppuStack_a0 = &ppuStack_60;
  auStack_b0 = auVar14;
  if (*(long *)(lVar12 + 0x10) != 0) {
    uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar9 != 0) {
      param_3 = puVar8;
      auVar14 = auVar2;
      if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar12 + 0x18),*puVar8);
      if ((uVar6 & 1) == 0) {
        auVar14 = auVar3;
        if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar12 + 0x10),uVar5,*puVar8);
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    return uVar9;
  }
code_r0x018bdaa0:
  auVar15 = func_0x00f78af4();
  lVar13 = auVar15._8_8_;
  puStack_c8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_f8 = 0;
  lVar10 = **(long **)(lVar13 + 0x30);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lStack_f0 = lVar12;
  puStack_e8 = param_3;
  ppuStack_d0 = &ppuStack_a0;
  auStack_e0 = auVar14;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar10);
    uVar1 = *(ushort *)(lVar10 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar10 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      lVar10 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      func_0x00f78ad0(lVar10);
    }
  }
  lVar10 = **(long **)(lVar13 + 0x30);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar15._0_8_,&uStack_f8);
    return uStack_f8;
  }
  auVar14 = func_0x00f78af4();
  lVar7 = auVar14._8_8_;
  puStack_108 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_138 = 0;
  lVar11 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_130 = lVar12;
  lStack_128 = lVar10;
  ppuStack_110 = &ppuStack_d0;
  if ((uVar1 & 1) == 0) {
    lStack_120 = lVar13;
    uStack_118 = auVar15._0_8_;
    func_0x00fac028(lVar11);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar12 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
    lStack_120 = auVar15._8_8_;
    uStack_118 = auVar15._0_8_;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
        auVar15._8_8_ = lStack_120;
        auVar15._0_8_ = uStack_118;
      }
      lStack_120 = auVar15._8_8_;
      uStack_118 = auVar15._0_8_;
      func_0x00f78ad0(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  lVar12 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if (**(long **)(lVar12 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar12 + 0xb8),auVar14._0_8_,&uStack_138);
    return uStack_138;
  }
  auVar14 = func_0x00f78af4();
  lVar12 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    lVar13 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar1 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar13 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar12 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    uVar9 = **(undefined8 **)(lVar12 + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar9 = func_0x00f78aec(lVar13);
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))(uVar9,auVar14._0_8_);
  }
  return uVar9;
}



// ============================================================
// RVA: 0x18bd86c | Core.Actors.PooledActorManager.Spawn<PlacementHomingProjectile>
// ============================================================

undefined8
Core_Actors_PooledActorManager__Spawn_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar9 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar9);
      return uVar9;
    }
  }
  auVar14 = func_0x00f78af4();
  puStack_38 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_60 = &puStack_40;
  uStack_48 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar14._0_8_ != 0) {
    (*(code *)**(undefined8 **)param_3[6])(auVar14._0_8_,auVar14._8_8_,&uStack_48);
    return uStack_48;
  }
  auVar14 = func_0x00f78af4();
  puStack_58 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = param_3;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar9 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar14._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(param_3[6] + 8))(auVar14._0_8_,uVar5,auVar14._8_8_);
      return uVar9;
    }
  }
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = param_4;
  lVar12 = auVar15._0_8_;
  puStack_98 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_c0 = uVar9;
  puStack_b8 = param_3;
  ppuStack_a0 = &ppuStack_60;
  auStack_b0 = auVar14;
  if (*(long *)(lVar12 + 0x10) != 0) {
    uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar9 != 0) {
      param_3 = puVar8;
      auVar14 = auVar2;
      if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar12 + 0x18),*puVar8);
      if ((uVar6 & 1) == 0) {
        auVar14 = auVar3;
        if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar12 + 0x10),uVar5,*puVar8);
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    return uVar9;
  }
code_r0x018bdaa0:
  auVar15 = func_0x00f78af4();
  lVar13 = auVar15._8_8_;
  puStack_c8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_f8 = 0;
  lVar10 = **(long **)(lVar13 + 0x30);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lStack_f0 = lVar12;
  puStack_e8 = param_3;
  ppuStack_d0 = &ppuStack_a0;
  auStack_e0 = auVar14;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar10);
    uVar1 = *(ushort *)(lVar10 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar10 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      lVar10 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      func_0x00f78ad0(lVar10);
    }
  }
  lVar10 = **(long **)(lVar13 + 0x30);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar15._0_8_,&uStack_f8);
    return uStack_f8;
  }
  auVar14 = func_0x00f78af4();
  lVar7 = auVar14._8_8_;
  puStack_108 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_138 = 0;
  lVar11 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_130 = lVar12;
  lStack_128 = lVar10;
  ppuStack_110 = &ppuStack_d0;
  if ((uVar1 & 1) == 0) {
    lStack_120 = lVar13;
    uStack_118 = auVar15._0_8_;
    func_0x00fac028(lVar11);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar12 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
    lStack_120 = auVar15._8_8_;
    uStack_118 = auVar15._0_8_;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
        auVar15._8_8_ = lStack_120;
        auVar15._0_8_ = uStack_118;
      }
      lStack_120 = auVar15._8_8_;
      uStack_118 = auVar15._0_8_;
      func_0x00f78ad0(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  lVar12 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if (**(long **)(lVar12 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar12 + 0xb8),auVar14._0_8_,&uStack_138);
    return uStack_138;
  }
  auVar14 = func_0x00f78af4();
  lVar12 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    lVar13 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar1 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar13 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar12 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    uVar9 = **(undefined8 **)(lVar12 + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar9 = func_0x00f78aec(lVar13);
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))(uVar9,auVar14._0_8_);
  }
  return uVar9;
}



// ============================================================
// RVA: 0x18bd86c | Core.Actors.PooledActorManager.Spawn<ProximityHomingProjectile>
// ============================================================

undefined8
Core_Actors_PooledActorManager__Spawn_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar9 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar9);
      return uVar9;
    }
  }
  auVar14 = func_0x00f78af4();
  puStack_38 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_60 = &puStack_40;
  uStack_48 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar14._0_8_ != 0) {
    (*(code *)**(undefined8 **)param_3[6])(auVar14._0_8_,auVar14._8_8_,&uStack_48);
    return uStack_48;
  }
  auVar14 = func_0x00f78af4();
  puStack_58 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = param_3;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar9 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar14._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(param_3[6] + 8))(auVar14._0_8_,uVar5,auVar14._8_8_);
      return uVar9;
    }
  }
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = param_4;
  lVar12 = auVar15._0_8_;
  puStack_98 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_c0 = uVar9;
  puStack_b8 = param_3;
  ppuStack_a0 = &ppuStack_60;
  auStack_b0 = auVar14;
  if (*(long *)(lVar12 + 0x10) != 0) {
    uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar9 != 0) {
      param_3 = puVar8;
      auVar14 = auVar2;
      if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar12 + 0x18),*puVar8);
      if ((uVar6 & 1) == 0) {
        auVar14 = auVar3;
        if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar12 + 0x10),uVar5,*puVar8);
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    return uVar9;
  }
code_r0x018bdaa0:
  auVar15 = func_0x00f78af4();
  lVar13 = auVar15._8_8_;
  puStack_c8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_f8 = 0;
  lVar10 = **(long **)(lVar13 + 0x30);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lStack_f0 = lVar12;
  puStack_e8 = param_3;
  ppuStack_d0 = &ppuStack_a0;
  auStack_e0 = auVar14;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar10);
    uVar1 = *(ushort *)(lVar10 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar10 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      lVar10 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      func_0x00f78ad0(lVar10);
    }
  }
  lVar10 = **(long **)(lVar13 + 0x30);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar15._0_8_,&uStack_f8);
    return uStack_f8;
  }
  auVar14 = func_0x00f78af4();
  lVar7 = auVar14._8_8_;
  puStack_108 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_138 = 0;
  lVar11 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_130 = lVar12;
  lStack_128 = lVar10;
  ppuStack_110 = &ppuStack_d0;
  if ((uVar1 & 1) == 0) {
    lStack_120 = lVar13;
    uStack_118 = auVar15._0_8_;
    func_0x00fac028(lVar11);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar12 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
    lStack_120 = auVar15._8_8_;
    uStack_118 = auVar15._0_8_;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
        auVar15._8_8_ = lStack_120;
        auVar15._0_8_ = uStack_118;
      }
      lStack_120 = auVar15._8_8_;
      uStack_118 = auVar15._0_8_;
      func_0x00f78ad0(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  lVar12 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if (**(long **)(lVar12 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar12 + 0xb8),auVar14._0_8_,&uStack_138);
    return uStack_138;
  }
  auVar14 = func_0x00f78af4();
  lVar12 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    lVar13 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar1 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar13 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar12 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    uVar9 = **(undefined8 **)(lVar12 + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar9 = func_0x00f78aec(lVar13);
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))(uVar9,auVar14._0_8_);
  }
  return uVar9;
}



// ============================================================
// RVA: 0x18bd86c | Core.Actors.PooledActorManager.Spawn<RicochetProjectile>
// ============================================================

undefined8
Core_Actors_PooledActorManager__Spawn_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar9 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar9);
      return uVar9;
    }
  }
  auVar14 = func_0x00f78af4();
  puStack_38 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_60 = &puStack_40;
  uStack_48 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar14._0_8_ != 0) {
    (*(code *)**(undefined8 **)param_3[6])(auVar14._0_8_,auVar14._8_8_,&uStack_48);
    return uStack_48;
  }
  auVar14 = func_0x00f78af4();
  puStack_58 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = param_3;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar9 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar14._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(param_3[6] + 8))(auVar14._0_8_,uVar5,auVar14._8_8_);
      return uVar9;
    }
  }
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = param_4;
  lVar12 = auVar15._0_8_;
  puStack_98 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_c0 = uVar9;
  puStack_b8 = param_3;
  ppuStack_a0 = &ppuStack_60;
  auStack_b0 = auVar14;
  if (*(long *)(lVar12 + 0x10) != 0) {
    uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar9 != 0) {
      param_3 = puVar8;
      auVar14 = auVar2;
      if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar12 + 0x18),*puVar8);
      if ((uVar6 & 1) == 0) {
        auVar14 = auVar3;
        if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar12 + 0x10),uVar5,*puVar8);
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    return uVar9;
  }
code_r0x018bdaa0:
  auVar15 = func_0x00f78af4();
  lVar13 = auVar15._8_8_;
  puStack_c8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_f8 = 0;
  lVar10 = **(long **)(lVar13 + 0x30);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lStack_f0 = lVar12;
  puStack_e8 = param_3;
  ppuStack_d0 = &ppuStack_a0;
  auStack_e0 = auVar14;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar10);
    uVar1 = *(ushort *)(lVar10 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar10 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      lVar10 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      func_0x00f78ad0(lVar10);
    }
  }
  lVar10 = **(long **)(lVar13 + 0x30);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar15._0_8_,&uStack_f8);
    return uStack_f8;
  }
  auVar14 = func_0x00f78af4();
  lVar7 = auVar14._8_8_;
  puStack_108 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_138 = 0;
  lVar11 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_130 = lVar12;
  lStack_128 = lVar10;
  ppuStack_110 = &ppuStack_d0;
  if ((uVar1 & 1) == 0) {
    lStack_120 = lVar13;
    uStack_118 = auVar15._0_8_;
    func_0x00fac028(lVar11);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar12 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
    lStack_120 = auVar15._8_8_;
    uStack_118 = auVar15._0_8_;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
        auVar15._8_8_ = lStack_120;
        auVar15._0_8_ = uStack_118;
      }
      lStack_120 = auVar15._8_8_;
      uStack_118 = auVar15._0_8_;
      func_0x00f78ad0(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  lVar12 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if (**(long **)(lVar12 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar12 + 0xb8),auVar14._0_8_,&uStack_138);
    return uStack_138;
  }
  auVar14 = func_0x00f78af4();
  lVar12 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    lVar13 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar1 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar13 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar12 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    uVar9 = **(undefined8 **)(lVar12 + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar9 = func_0x00f78aec(lVar13);
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))(uVar9,auVar14._0_8_);
  }
  return uVar9;
}



// ============================================================
// RVA: 0x18bd86c | Core.Actors.PooledActorManager.Spawn<SatelliteUsable>
// ============================================================

undefined8
Core_Actors_PooledActorManager__Spawn_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar9 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar9);
      return uVar9;
    }
  }
  auVar14 = func_0x00f78af4();
  puStack_38 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_60 = &puStack_40;
  uStack_48 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar14._0_8_ != 0) {
    (*(code *)**(undefined8 **)param_3[6])(auVar14._0_8_,auVar14._8_8_,&uStack_48);
    return uStack_48;
  }
  auVar14 = func_0x00f78af4();
  puStack_58 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = param_3;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar9 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar14._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(param_3[6] + 8))(auVar14._0_8_,uVar5,auVar14._8_8_);
      return uVar9;
    }
  }
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = param_4;
  lVar12 = auVar15._0_8_;
  puStack_98 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_c0 = uVar9;
  puStack_b8 = param_3;
  ppuStack_a0 = &ppuStack_60;
  auStack_b0 = auVar14;
  if (*(long *)(lVar12 + 0x10) != 0) {
    uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar9 != 0) {
      param_3 = puVar8;
      auVar14 = auVar2;
      if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar12 + 0x18),*puVar8);
      if ((uVar6 & 1) == 0) {
        auVar14 = auVar3;
        if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar12 + 0x10),uVar5,*puVar8);
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    return uVar9;
  }
code_r0x018bdaa0:
  auVar15 = func_0x00f78af4();
  lVar13 = auVar15._8_8_;
  puStack_c8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_f8 = 0;
  lVar10 = **(long **)(lVar13 + 0x30);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lStack_f0 = lVar12;
  puStack_e8 = param_3;
  ppuStack_d0 = &ppuStack_a0;
  auStack_e0 = auVar14;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar10);
    uVar1 = *(ushort *)(lVar10 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar10 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      lVar10 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      func_0x00f78ad0(lVar10);
    }
  }
  lVar10 = **(long **)(lVar13 + 0x30);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar15._0_8_,&uStack_f8);
    return uStack_f8;
  }
  auVar14 = func_0x00f78af4();
  lVar7 = auVar14._8_8_;
  puStack_108 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_138 = 0;
  lVar11 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_130 = lVar12;
  lStack_128 = lVar10;
  ppuStack_110 = &ppuStack_d0;
  if ((uVar1 & 1) == 0) {
    lStack_120 = lVar13;
    uStack_118 = auVar15._0_8_;
    func_0x00fac028(lVar11);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar12 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
    lStack_120 = auVar15._8_8_;
    uStack_118 = auVar15._0_8_;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
        auVar15._8_8_ = lStack_120;
        auVar15._0_8_ = uStack_118;
      }
      lStack_120 = auVar15._8_8_;
      uStack_118 = auVar15._0_8_;
      func_0x00f78ad0(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  lVar12 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if (**(long **)(lVar12 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar12 + 0xb8),auVar14._0_8_,&uStack_138);
    return uStack_138;
  }
  auVar14 = func_0x00f78af4();
  lVar12 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    lVar13 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar1 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar13 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar12 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    uVar9 = **(undefined8 **)(lVar12 + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar9 = func_0x00f78aec(lVar13);
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))(uVar9,auVar14._0_8_);
  }
  return uVar9;
}



// ============================================================
// RVA: 0x18bd86c | Core.Actors.PooledActorManager.Spawn<SuperShieldUsable>
// ============================================================

undefined8
Core_Actors_PooledActorManager__Spawn_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar9 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar9);
      return uVar9;
    }
  }
  auVar14 = func_0x00f78af4();
  puStack_38 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_60 = &puStack_40;
  uStack_48 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar14._0_8_ != 0) {
    (*(code *)**(undefined8 **)param_3[6])(auVar14._0_8_,auVar14._8_8_,&uStack_48);
    return uStack_48;
  }
  auVar14 = func_0x00f78af4();
  puStack_58 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = param_3;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar9 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar14._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(param_3[6] + 8))(auVar14._0_8_,uVar5,auVar14._8_8_);
      return uVar9;
    }
  }
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = param_4;
  lVar12 = auVar15._0_8_;
  puStack_98 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_c0 = uVar9;
  puStack_b8 = param_3;
  ppuStack_a0 = &ppuStack_60;
  auStack_b0 = auVar14;
  if (*(long *)(lVar12 + 0x10) != 0) {
    uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar9 != 0) {
      param_3 = puVar8;
      auVar14 = auVar2;
      if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar12 + 0x18),*puVar8);
      if ((uVar6 & 1) == 0) {
        auVar14 = auVar3;
        if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar12 + 0x10),uVar5,*puVar8);
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    return uVar9;
  }
code_r0x018bdaa0:
  auVar15 = func_0x00f78af4();
  lVar13 = auVar15._8_8_;
  puStack_c8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_f8 = 0;
  lVar10 = **(long **)(lVar13 + 0x30);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lStack_f0 = lVar12;
  puStack_e8 = param_3;
  ppuStack_d0 = &ppuStack_a0;
  auStack_e0 = auVar14;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar10);
    uVar1 = *(ushort *)(lVar10 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar10 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      lVar10 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      func_0x00f78ad0(lVar10);
    }
  }
  lVar10 = **(long **)(lVar13 + 0x30);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar15._0_8_,&uStack_f8);
    return uStack_f8;
  }
  auVar14 = func_0x00f78af4();
  lVar7 = auVar14._8_8_;
  puStack_108 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_138 = 0;
  lVar11 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_130 = lVar12;
  lStack_128 = lVar10;
  ppuStack_110 = &ppuStack_d0;
  if ((uVar1 & 1) == 0) {
    lStack_120 = lVar13;
    uStack_118 = auVar15._0_8_;
    func_0x00fac028(lVar11);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar12 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
    lStack_120 = auVar15._8_8_;
    uStack_118 = auVar15._0_8_;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
        auVar15._8_8_ = lStack_120;
        auVar15._0_8_ = uStack_118;
      }
      lStack_120 = auVar15._8_8_;
      uStack_118 = auVar15._0_8_;
      func_0x00f78ad0(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  lVar12 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if (**(long **)(lVar12 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar12 + 0xb8),auVar14._0_8_,&uStack_138);
    return uStack_138;
  }
  auVar14 = func_0x00f78af4();
  lVar12 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    lVar13 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar1 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar13 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar12 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    uVar9 = **(undefined8 **)(lVar12 + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar9 = func_0x00f78aec(lVar13);
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))(uVar9,auVar14._0_8_);
  }
  return uVar9;
}



// ============================================================
// RVA: 0x18bd86c | Core.Actors.PooledActorManager.Spawn<object>
// ============================================================

undefined8
Core_Actors_PooledActorManager__Spawn_AoEHit_
          (long param_1,long param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar9 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar9);
      return uVar9;
    }
  }
  auVar14 = func_0x00f78af4();
  puStack_38 = &Core_Actors_PooledActorManager__Spawn_object_;
  ppuStack_60 = &puStack_40;
  uStack_48 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (auVar14._0_8_ != 0) {
    (*(code *)**(undefined8 **)param_3[6])(auVar14._0_8_,auVar14._8_8_,&uStack_48);
    return uStack_48;
  }
  auVar14 = func_0x00f78af4();
  puStack_58 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = param_3;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar9 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar14._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)**(undefined8 **)(param_3[6] + 8))(auVar14._0_8_,uVar5,auVar14._8_8_);
      return uVar9;
    }
  }
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = param_4;
  lVar12 = auVar15._0_8_;
  puStack_98 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_c0 = uVar9;
  puStack_b8 = param_3;
  ppuStack_a0 = &ppuStack_60;
  auStack_b0 = auVar14;
  if (*(long *)(lVar12 + 0x10) != 0) {
    uVar9 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar9 != 0) {
      param_3 = puVar8;
      auVar14 = auVar2;
      if (*(long *)(lVar12 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar12 + 0x18),*puVar8);
      if ((uVar6 & 1) == 0) {
        auVar14 = auVar3;
        if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar12 + 0x10),uVar5,*puVar8);
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    return uVar9;
  }
code_r0x018bdaa0:
  auVar15 = func_0x00f78af4();
  lVar13 = auVar15._8_8_;
  puStack_c8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_f8 = 0;
  lVar10 = **(long **)(lVar13 + 0x30);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lStack_f0 = lVar12;
  puStack_e8 = param_3;
  ppuStack_d0 = &ppuStack_a0;
  auStack_e0 = auVar14;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar10);
    uVar1 = *(ushort *)(lVar10 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar10 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      lVar10 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      func_0x00f78ad0(lVar10);
    }
  }
  lVar10 = **(long **)(lVar13 + 0x30);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
  }
  if (**(long **)(lVar10 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar15._0_8_,&uStack_f8);
    return uStack_f8;
  }
  auVar14 = func_0x00f78af4();
  lVar7 = auVar14._8_8_;
  puStack_108 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_138 = 0;
  lVar11 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar11 + 0x132);
  lStack_130 = lVar12;
  lStack_128 = lVar10;
  ppuStack_110 = &ppuStack_d0;
  if ((uVar1 & 1) == 0) {
    lStack_120 = lVar13;
    uStack_118 = auVar15._0_8_;
    func_0x00fac028(lVar11);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
    uVar1 = *(ushort *)(lVar11 + 0x132);
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar12 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
    lStack_120 = auVar15._8_8_;
    uStack_118 = auVar15._0_8_;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      lVar12 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
        auVar15._8_8_ = lStack_120;
        auVar15._0_8_ = uStack_118;
      }
      lStack_120 = auVar15._8_8_;
      uStack_118 = auVar15._0_8_;
      func_0x00f78ad0(lVar12);
      auVar15._8_8_ = lStack_120;
      auVar15._0_8_ = uStack_118;
    }
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  lVar12 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar12);
    auVar15._8_8_ = lStack_120;
    auVar15._0_8_ = uStack_118;
  }
  lStack_120 = auVar15._8_8_;
  uStack_118 = auVar15._0_8_;
  if (**(long **)(lVar12 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar12 + 0xb8),auVar14._0_8_,&uStack_138);
    return uStack_138;
  }
  auVar14 = func_0x00f78af4();
  lVar12 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    lVar13 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar13);
      uVar1 = *(ushort *)(lVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar13 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar13);
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        lVar13 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar13);
        }
        func_0x00f78ad0(lVar13);
      }
    }
    lVar12 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    uVar9 = **(undefined8 **)(lVar12 + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar12 + 0x30) + 8);
    if ((*(ushort *)(lVar13 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar13);
    }
    uVar9 = func_0x00f78aec(lVar13);
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 0x10))(uVar9,auVar14._0_8_);
  }
  return uVar9;
}



// ============================================================
// RVA: 0x18bd914 | Core.Actors.PooledActorManager.Spawn<object>
// ============================================================

undefined8
Core_Actors_PooledActorManager__Spawn_object_
          (long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined1 auStack_80 [16];
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)param_3[6])(param_1,param_2,&uStack_18);
    return uStack_18;
  }
  auVar14 = func_0x00f78af4();
  puStack_28 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  puVar8 = param_3;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar13 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar14._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(param_3[6] + 8))(auVar14._0_8_,uVar5,auVar14._8_8_);
      return uVar13;
    }
  }
  auVar15 = func_0x00f78af4();
  uVar5 = auVar15._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = param_4;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = param_4;
  lVar11 = auVar15._0_8_;
  puStack_68 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_90 = uVar13;
  puStack_88 = param_3;
  ppuStack_70 = &puStack_30;
  auStack_80 = auVar14;
  if (*(long *)(lVar11 + 0x10) != 0) {
    uVar13 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar13 != 0) {
      param_3 = puVar8;
      auVar14 = auVar2;
      if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar11 + 0x18),*puVar8);
      if ((uVar6 & 1) == 0) {
        auVar14 = auVar3;
        if (*(long *)(lVar11 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar11 + 0x10),uVar5,*puVar8);
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
    }
    return uVar13;
  }
code_r0x018bdaa0:
  auVar15 = func_0x00f78af4();
  lVar12 = auVar15._8_8_;
  puStack_98 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_c8 = 0;
  lVar9 = **(long **)(lVar12 + 0x30);
  uVar1 = *(ushort *)(lVar9 + 0x132);
  lStack_c0 = lVar11;
  puStack_b8 = param_3;
  ppuStack_a0 = &ppuStack_70;
  auStack_b0 = auVar14;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar9);
    uVar1 = *(ushort *)(lVar9 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar9 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      lVar9 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      func_0x00f78ad0(lVar9);
    }
  }
  lVar9 = **(long **)(lVar12 + 0x30);
  if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar9);
  }
  if (**(long **)(lVar9 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
              (**(long **)(lVar9 + 0xb8),auVar15._0_8_,&uStack_c8);
    return uStack_c8;
  }
  auVar14 = func_0x00f78af4();
  lVar7 = auVar14._8_8_;
  puStack_d8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_108 = 0;
  lVar10 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  lStack_100 = lVar11;
  lStack_f8 = lVar9;
  ppuStack_e0 = &ppuStack_a0;
  if ((uVar1 & 1) == 0) {
    lStack_f0 = lVar12;
    uStack_e8 = auVar15._0_8_;
    func_0x00fac028(lVar10);
    auVar15._8_8_ = lStack_f0;
    auVar15._0_8_ = uStack_e8;
    uVar1 = *(ushort *)(lVar10 + 0x132);
  }
  lStack_f0 = auVar15._8_8_;
  uStack_e8 = auVar15._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar11 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
      auVar15._8_8_ = lStack_f0;
      auVar15._0_8_ = uStack_e8;
    }
    lStack_f0 = auVar15._8_8_;
    uStack_e8 = auVar15._0_8_;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      lVar11 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
        auVar15._8_8_ = lStack_f0;
        auVar15._0_8_ = uStack_e8;
      }
      lStack_f0 = auVar15._8_8_;
      uStack_e8 = auVar15._0_8_;
      func_0x00f78ad0(lVar11);
      auVar15._8_8_ = lStack_f0;
      auVar15._0_8_ = uStack_e8;
    }
  }
  lStack_f0 = auVar15._8_8_;
  uStack_e8 = auVar15._0_8_;
  lVar11 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar11);
    auVar15._8_8_ = lStack_f0;
    auVar15._0_8_ = uStack_e8;
  }
  lStack_f0 = auVar15._8_8_;
  uStack_e8 = auVar15._0_8_;
  if (**(long **)(lVar11 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar11 + 0xb8),auVar14._0_8_,&uStack_108);
    return uStack_108;
  }
  auVar14 = func_0x00f78af4();
  lVar11 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    lVar12 = **(long **)(lVar11 + 0x30);
    uVar1 = *(ushort *)(lVar12 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar12);
      uVar1 = *(ushort *)(lVar12 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar12 = **(long **)(lVar11 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        lVar12 = **(long **)(lVar11 + 0x30);
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
        }
        func_0x00f78ad0(lVar12);
      }
    }
    lVar11 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    uVar13 = **(undefined8 **)(lVar11 + 0xb8);
  }
  else {
    lVar12 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
    }
    uVar13 = func_0x00f78aec(lVar12);
    (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 0x10))(uVar13,auVar14._0_8_);
  }
  return uVar13;
}



// ============================================================
// RVA: 0x18bd950 | Core.Actors.PooledActorManager.TrySpawn<object>
// ============================================================

undefined8
Core_Actors_PooledActorManager__TrySpawn_object_
          (long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  puVar6 = param_3;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  uVar11 = *(undefined8 *)param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar2 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*(code *)**(undefined8 **)(param_3[6] + 8))(param_1,uVar3,param_2);
      return uVar11;
    }
  }
  auVar12 = func_0x00f78af4();
  uVar3 = auVar12._8_8_;
  lVar9 = auVar12._0_8_;
  puStack_48 = &Core_Actors_PooledActorManager__TrySpawn_object_;
  uStack_70 = uVar11;
  puStack_68 = param_3;
  lStack_60 = param_1;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar9 + 0x10) != 0) {
    uVar11 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar11 != 0) {
      param_2 = uVar3;
      param_1 = param_4;
      param_3 = puVar6;
      if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x018bdaa0;
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(lVar9 + 0x18),*puVar6);
      if ((uVar4 & 1) == 0) {
        if (*(long *)(lVar9 + 0x10) == 0) goto code_r0x018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(lVar9 + 0x10),uVar3,*puVar6);
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
    }
    return uVar11;
  }
code_r0x018bdaa0:
  auVar12 = func_0x00f78af4();
  lVar10 = auVar12._8_8_;
  puStack_78 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_a8 = 0;
  lVar7 = **(long **)(lVar10 + 0x30);
  uVar1 = *(ushort *)(lVar7 + 0x132);
  lStack_a0 = lVar9;
  puStack_98 = param_3;
  lStack_90 = param_1;
  uStack_88 = param_2;
  ppuStack_80 = &puStack_50;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar7);
    uVar1 = *(ushort *)(lVar7 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar7 = **(long **)(lVar10 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      lVar7 = **(long **)(lVar10 + 0x30);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      func_0x00f78ad0(lVar7);
    }
  }
  lVar7 = **(long **)(lVar10 + 0x30);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
  }
  if (**(long **)(lVar7 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 8))
              (**(long **)(lVar7 + 0xb8),auVar12._0_8_,&uStack_a8);
    return uStack_a8;
  }
  auVar13 = func_0x00f78af4();
  lVar5 = auVar13._8_8_;
  puStack_b8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_e8 = 0;
  lVar8 = **(long **)(lVar5 + 0x30);
  uVar1 = *(ushort *)(lVar8 + 0x132);
  lStack_e0 = lVar9;
  lStack_d8 = lVar7;
  ppuStack_c0 = &ppuStack_80;
  if ((uVar1 & 1) == 0) {
    lStack_d0 = lVar10;
    uStack_c8 = auVar12._0_8_;
    func_0x00fac028(lVar8);
    auVar12._8_8_ = lStack_d0;
    auVar12._0_8_ = uStack_c8;
    uVar1 = *(ushort *)(lVar8 + 0x132);
  }
  lStack_d0 = auVar12._8_8_;
  uStack_c8 = auVar12._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar9 = **(long **)(lVar5 + 0x30);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
      auVar12._8_8_ = lStack_d0;
      auVar12._0_8_ = uStack_c8;
    }
    lStack_d0 = auVar12._8_8_;
    uStack_c8 = auVar12._0_8_;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      lVar9 = **(long **)(lVar5 + 0x30);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
        auVar12._8_8_ = lStack_d0;
        auVar12._0_8_ = uStack_c8;
      }
      lStack_d0 = auVar12._8_8_;
      uStack_c8 = auVar12._0_8_;
      func_0x00f78ad0(lVar9);
      auVar12._8_8_ = lStack_d0;
      auVar12._0_8_ = uStack_c8;
    }
  }
  lStack_d0 = auVar12._8_8_;
  uStack_c8 = auVar12._0_8_;
  lVar9 = **(long **)(lVar5 + 0x30);
  if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar9);
    auVar12._8_8_ = lStack_d0;
    auVar12._0_8_ = uStack_c8;
  }
  lStack_d0 = auVar12._8_8_;
  uStack_c8 = auVar12._0_8_;
  if (**(long **)(lVar9 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar5 + 0x30) + 8))
              (**(long **)(lVar9 + 0xb8),auVar13._0_8_,&uStack_e8);
    return uStack_e8;
  }
  auVar12 = func_0x00f78af4();
  lVar9 = auVar12._8_8_;
  if (auVar12._0_8_ == 0) {
    lVar10 = **(long **)(lVar9 + 0x30);
    uVar1 = *(ushort *)(lVar10 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar10);
      uVar1 = *(ushort *)(lVar10 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar10 = **(long **)(lVar9 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        lVar10 = **(long **)(lVar9 + 0x30);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        func_0x00f78ad0(lVar10);
      }
    }
    lVar9 = **(long **)(lVar9 + 0x30);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    uVar11 = **(undefined8 **)(lVar9 + 0xb8);
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar9 + 0x30) + 8);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    uVar11 = func_0x00f78aec(lVar10);
    (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 0x10))(uVar11,auVar12._0_8_);
  }
  return uVar11;
}



// ============================================================
// RVA: 0x18bda08 | Core.Actors.PooledActorManager.TrySpawn<object>
// ============================================================

undefined8
Core_Actors_PooledActorManager__TrySpawn_object_
          (long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = (**(code **)**(undefined8 **)(param_4 + 0x30))();
    if ((int)uVar2 != 0) {
      unaff_x19 = param_2;
      unaff_x20 = param_4;
      unaff_x21 = param_3;
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_018bdaa0;
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 8))
                        (*(long *)(param_1 + 0x18),*param_3);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_018bdaa0;
        (*(code *)**(undefined8 **)(*(long *)(param_4 + 0x30) + 0x10))
                  (*(long *)(param_1 + 0x10),param_2,*param_3);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    return uVar2;
  }
LAB_018bdaa0:
  auVar8 = func_0x00f78af4();
  lVar7 = auVar8._8_8_;
  puStack_38 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
  uStack_68 = 0;
  lVar5 = **(long **)(lVar7 + 0x30);
  uVar1 = *(ushort *)(lVar5 + 0x132);
  lStack_60 = param_1;
  puStack_58 = unaff_x21;
  lStack_50 = unaff_x20;
  uStack_48 = unaff_x19;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar5);
    uVar1 = *(ushort *)(lVar5 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar5 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      lVar5 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      func_0x00f78ad0(lVar5);
    }
  }
  lVar5 = **(long **)(lVar7 + 0x30);
  if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar5);
  }
  if (**(long **)(lVar5 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar5 + 0xb8),auVar8._0_8_,&uStack_68);
    return uStack_68;
  }
  auVar9 = func_0x00f78af4();
  lVar4 = auVar9._8_8_;
  puStack_78 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
  uStack_a8 = 0;
  lVar6 = **(long **)(lVar4 + 0x30);
  uVar1 = *(ushort *)(lVar6 + 0x132);
  lStack_a0 = param_1;
  lStack_98 = lVar5;
  ppuStack_80 = &puStack_40;
  if ((uVar1 & 1) == 0) {
    lStack_90 = lVar7;
    uStack_88 = auVar8._0_8_;
    func_0x00fac028(lVar6);
    auVar8._8_8_ = lStack_90;
    auVar8._0_8_ = uStack_88;
    uVar1 = *(ushort *)(lVar6 + 0x132);
  }
  lStack_90 = auVar8._8_8_;
  uStack_88 = auVar8._0_8_;
  if ((uVar1 >> 10 & 1) != 0) {
    lVar7 = **(long **)(lVar4 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
      auVar8._8_8_ = lStack_90;
      auVar8._0_8_ = uStack_88;
    }
    lStack_90 = auVar8._8_8_;
    uStack_88 = auVar8._0_8_;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      lVar7 = **(long **)(lVar4 + 0x30);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
        auVar8._8_8_ = lStack_90;
        auVar8._0_8_ = uStack_88;
      }
      lStack_90 = auVar8._8_8_;
      uStack_88 = auVar8._0_8_;
      func_0x00f78ad0(lVar7);
      auVar8._8_8_ = lStack_90;
      auVar8._0_8_ = uStack_88;
    }
  }
  lStack_90 = auVar8._8_8_;
  uStack_88 = auVar8._0_8_;
  lVar7 = **(long **)(lVar4 + 0x30);
  if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar7);
    auVar8._8_8_ = lStack_90;
    auVar8._0_8_ = uStack_88;
  }
  lStack_90 = auVar8._8_8_;
  uStack_88 = auVar8._0_8_;
  if (**(long **)(lVar7 + 0xb8) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(lVar4 + 0x30) + 8))
              (**(long **)(lVar7 + 0xb8),auVar9._0_8_,&uStack_a8);
    return uStack_a8;
  }
  auVar8 = func_0x00f78af4();
  lVar7 = auVar8._8_8_;
  if (auVar8._0_8_ == 0) {
    lVar5 = **(long **)(lVar7 + 0x30);
    uVar1 = *(ushort *)(lVar5 + 0x132);
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar5);
      uVar1 = *(ushort *)(lVar5 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar5 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar5);
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        lVar5 = **(long **)(lVar7 + 0x30);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        func_0x00f78ad0(lVar5);
      }
    }
    lVar7 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    uVar2 = **(undefined8 **)(lVar7 + 0xb8);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    uVar2 = func_0x00f78aec(lVar5);
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10))(uVar2,auVar8._0_8_);
  }
  return uVar2;
}



