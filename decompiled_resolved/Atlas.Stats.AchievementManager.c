// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Stats.AchievementManager

// ============================================================
// RVA: 0x144681c | Atlas.Stats.AchievementManager.Init
// ============================================================

long Atlas_Stats_AchievementManager__Init(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4714 & 1) == 0) {
    func_0x00f78a20(0x3d26640);
    bRam0000000003eb4714 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Stats.AchievementManager.<Init>d__22_TypeInfo*/ uRam0000000003d26640);
  /*Atlas.Stats.AchievementManager.<Init>d__22$$.ctor*/ func_0x015317b8(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    *(undefined8 *)(lVar1 + 0x30) = param_2;
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  lVar2 = func_0x00f78af4();
  puStack_48 = &Atlas_Stats_AchievementManager__DeInit;
  lStack_70 = lVar1;
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4715 & 1) == 0) {
    func_0x00f78a20(0x3d43428);
    func_0x00f78a20(0x3d1fae0);
    bRam0000000003eb4715 = 1;
  }
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  uVar4 = *(undefined8 *)(lVar2 + 0x28);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  uVar6 = *(undefined8 *)(lVar2 + 0x38);
  uVar5 = *(undefined8 *)(lVar2 + 0x30);
  if (((*(byte *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_90 = uVar3;
  uStack_88 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar6;
  lVar1 = /*UnityEngine.AddressableAssets.Addressables$$Release<VideoClip>*/ func_0x0171fcfc(&uStack_90,uRam0000000003d43428);
  return lVar1;
}



// ============================================================
// RVA: 0x14468a4 | Atlas.Stats.AchievementManager.DeInit
// ============================================================

void Atlas_Stats_AchievementManager__DeInit(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4715 & 1) == 0) {
    func_0x00f78a20(0x3d43428);
    func_0x00f78a20(0x3d1fae0);
    bRam0000000003eb4715 = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  /*UnityEngine.AddressableAssets.Addressables$$Release<VideoClip>*/ func_0x0171fcfc(&uStack_50,uRam0000000003d43428);
  return;
}



// ============================================================
// RVA: 0x144694c | Atlas.Stats.AchievementManager.DeInitEditor
// ============================================================

void Atlas_Stats_AchievementManager__DeInitEditor(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4715 & 1) == 0) {
    func_0x00f78a20(0x3d43428);
    func_0x00f78a20(0x3d1fae0);
    bRam0000000003eb4715 = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  /*UnityEngine.AddressableAssets.Addressables$$Release<VideoClip>*/ func_0x0171fcfc(&uStack_50,uRam0000000003d43428);
  return;
}



// ============================================================
// RVA: 0x1446950 | Atlas.Stats.AchievementManager.OnInitGameContext
// ============================================================

/* WARNING: Possible PIC construction at 0x01446b9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01446ba0) */
/* WARNING: Removing unreachable block (ram,0x01446bac) */
/* WARNING: Removing unreachable block (ram,0x01446bb4) */
/* WARNING: Removing unreachable block (ram,0x01446bb8) */

void Atlas_Stats_AchievementManager__OnInitGameContext
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong uVar8;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined4 *)(param_1 + 0x68) = param_2;
  *(undefined8 *)(param_1 + 0x70) = param_3;
  *(undefined8 *)(param_1 + 0x78) = *param_4;
  *(undefined8 *)(param_1 + 0x80) = param_4[1];
  *(undefined8 *)(param_1 + 0x88) = param_4[3];
  uVar4 = 1;
  puVar1 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
    *(long *)(puVar1 + -0x58) = unaff_x27;
    *(ulong *)(puVar1 + -0x50) = unaff_x26;
    *(long *)(puVar1 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 **)(puVar1 + -0x38) = unaff_x23;
    *(undefined8 **)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    *(undefined8 *)(puVar1 + -0xa0) = 0;
    *(undefined8 *)(puVar1 + -0x98) = 0;
    lVar5 = *(long *)(param_1 + 0x50);
    if (lVar5 == 0) {
code_r0x01446b28:
      func_0x00f78af4();
      return;
    }
    uVar8 = 0;
    unaff_x22 = (undefined8 *)(puVar1 + -0xd0);
    unaff_x23 = (undefined8 *)(puVar1 + -0x118);
    unaff_x24 = 0x48;
    while( true ) {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar8) {
        return;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar8) break;
      lVar5 = lVar5 + uVar8 * 0x48;
      unaff_x26 = *(ulong *)(lVar5 + 0x20);
      unaff_x25 = *(long *)(lVar5 + 0x28);
      unaff_x27 = *(long *)(lVar5 + 0x30);
      uVar3 = *(undefined8 *)(lVar5 + 0x38);
      uVar10 = *(undefined8 *)(lVar5 + 0x50);
      uVar9 = *(undefined8 *)(lVar5 + 0x48);
      *(undefined8 *)(puVar1 + -0x88) = *(undefined8 *)(lVar5 + 0x40);
      *(undefined8 *)(puVar1 + -0x90) = uVar3;
      *(undefined8 *)(puVar1 + -0x78) = uVar10;
      *(undefined8 *)(puVar1 + -0x80) = uVar9;
      uVar3 = *(undefined8 *)(lVar5 + 0x58);
      *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)(lVar5 + 0x60);
      *(undefined8 *)(puVar1 + -0x70) = uVar3;
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto code_r0x01446b28;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) break;
      lVar5 = lVar5 + uVar8 * 0x10;
      lVar7 = *(long *)(lVar5 + 0x28);
      *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(lVar5 + 0x20);
      *(long *)(puVar1 + -0x98) = lVar7;
      if (lVar7 != 0) {
        uVar3 = /*Atlas.Stats.AchievementManager.StatAchievementProgress$$get_IsComplete*/ func_0x01531a0c(puVar1 + -0xa0,0);
        if (((int)uVar3 == 0) || ((int)uVar4 == 0)) {
          *(undefined8 *)(puVar1 + -200) = *(undefined8 *)(puVar1 + -0x88);
          *unaff_x22 = *(undefined8 *)(puVar1 + -0x90);
          *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0x78);
          *(undefined8 *)(puVar1 + -0xc0) = *(undefined8 *)(puVar1 + -0x80);
          *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0x68);
          *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0x70);
          *(ulong *)(puVar1 + -0xe8) = unaff_x26;
          *(long *)(puVar1 + -0xe0) = unaff_x25;
          *(long *)(puVar1 + -0xd8) = unaff_x27;
          iVar2 = /*Atlas.Stats.AchievementManager$$DoesAchievementHaveConditions*/ func_0x014486d4(uVar3,puVar1 + -0xe8);
          if (iVar2 != 0) {
            *(undefined8 *)(puVar1 + -0x110) = *(undefined8 *)(puVar1 + -0x88);
            *unaff_x23 = *(undefined8 *)(puVar1 + -0x90);
            *(undefined8 *)(puVar1 + -0x100) = *(undefined8 *)(puVar1 + -0x78);
            *(undefined8 *)(puVar1 + -0x108) = *(undefined8 *)(puVar1 + -0x80);
            *(undefined8 *)(puVar1 + -0xf0) = *(undefined8 *)(puVar1 + -0x68);
            *(undefined8 *)(puVar1 + -0xf8) = *(undefined8 *)(puVar1 + -0x70);
            *(ulong *)(puVar1 + -0x130) = unaff_x26;
            *(long *)(puVar1 + -0x128) = unaff_x25;
            *(long *)(puVar1 + -0x120) = unaff_x27;
            iVar2 = /*Atlas.Stats.AchievementManager$$DoesAchievementPassConditions*/ func_0x014488e0(param_1,puVar1 + -0x130);
            if (iVar2 != 0) {
              if (unaff_x25 == 0) goto code_r0x01446b28;
              if (0 < (int)*(ulong *)(unaff_x25 + 0x18)) {
                unaff_x26 = 0;
                uVar6 = *(ulong *)(unaff_x25 + 0x18) & 0xffffffff;
                unaff_x27 = unaff_x25 + 0x20;
                do {
                  lVar5 = *(long *)(param_1 + 0x18);
                  if ((int)uVar4 == 0) {
                    if (uVar6 <= unaff_x26) goto code_r0x01446b4c;
                    lVar7 = *(long *)(puVar1 + -0x98);
                    if (lVar7 == 0) goto code_r0x01446b28;
                    if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto code_r0x01446b4c;
                    if (lVar5 == 0) goto code_r0x01446b28;
                    /*Atlas.Stats.StatsManager$$UnRegisterOnStatChange*/ func_0x01504fc8(lVar5,*(undefined4 *)(unaff_x27 + unaff_x26 * 4),
                                    *(undefined8 *)(lVar7 + unaff_x26 * 8 + 0x20),0);
                  }
                  else {
                    if (uVar6 <= unaff_x26) goto code_r0x01446b4c;
                    lVar7 = *(long *)(puVar1 + -0x98);
                    if (lVar7 == 0) goto code_r0x01446b28;
                    if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto code_r0x01446b4c;
                    if (lVar5 == 0) goto code_r0x01446b28;
                    /*Atlas.Stats.StatsManager$$RegisterOnStatChange*/ func_0x01504f0c(lVar5,*(undefined4 *)(unaff_x27 + unaff_x26 * 4),
                                    *(undefined8 *)(lVar7 + unaff_x26 * 8 + 0x20),0);
                  }
                  unaff_x26 = unaff_x26 + 1;
                  uVar6 = (ulong)*(uint *)(unaff_x25 + 0x18);
                } while ((long)unaff_x26 < (long)(int)*(uint *)(unaff_x25 + 0x18));
              }
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
      lVar5 = *(long *)(param_1 + 0x50);
      if (lVar5 == 0) goto code_r0x01446b28;
    }
code_r0x01446b4c:
    uVar3 = func_0x00f78b24();
    unaff_x19 = func_0x00f78ac0(uVar3,0);
    *(undefined8 **)(puVar1 + -0x160) = unaff_x22;
    *(ulong *)(puVar1 + -0x158) = uVar8;
    *(long *)(puVar1 + -0x150) = param_1;
    *(undefined8 *)(puVar1 + -0x148) = uVar4;
    *(undefined1 **)(puVar1 + -0x140) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x138) = &Atlas_Stats_AchievementManager__OnDeInitGameContext;
    unaff_x29 = puVar1 + -0x140;
    unaff_x21 = 0x3eb4000;
    unaff_x20 = 0x3d21270;
    if ((bRam0000000003eb4716 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      bRam0000000003eb4716 = 1;
    }
    uVar4 = 0;
    unaff_x30 = &UNK_01446ba0;
    puVar1 = puVar1 + -0x160;
    param_1 = unaff_x19;
  } while( true );
}



// ============================================================
// RVA: 0x1446978 | Atlas.Stats.AchievementManager.ConditionalModifyListeners
// ============================================================

void Atlas_Stats_AchievementManager__ConditionalModifyListeners(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_a0 = 0;
  lStack_98 = 0;
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 != 0) {
    uVar7 = 0;
    do {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar7) {
        return;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_01446b4c:
        uVar4 = func_0x00f78b24();
        lVar5 = func_0x00f78ac0(uVar4,0);
        if ((bRam0000000003eb4716 & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          bRam0000000003eb4716 = 1;
        }
        Atlas_Stats_AchievementManager__ConditionalModifyListeners(lVar5,0);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
        *(undefined8 *)(lVar5 + 0x80) = uVar4;
        uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
        *(undefined8 *)(lVar5 + 0x78) = uVar4;
        uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
        *(undefined8 *)(lVar5 + 0x70) = uVar4;
        uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
        *(undefined8 *)(lVar5 + 0x88) = uVar4;
        return;
      }
      lVar5 = lVar5 + uVar7 * 0x48;
      uVar4 = *(undefined8 *)(lVar5 + 0x20);
      lVar1 = *(long *)(lVar5 + 0x28);
      uVar9 = *(undefined8 *)(lVar5 + 0x30);
      uStack_88 = *(undefined8 *)(lVar5 + 0x40);
      uStack_90 = *(undefined8 *)(lVar5 + 0x38);
      uStack_78 = *(undefined8 *)(lVar5 + 0x50);
      uStack_80 = *(undefined8 *)(lVar5 + 0x48);
      uStack_68 = *(undefined8 *)(lVar5 + 0x60);
      uStack_70 = *(undefined8 *)(lVar5 + 0x58);
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_01446b4c;
      lVar5 = lVar5 + uVar7 * 0x10;
      uStack_a0 = *(undefined8 *)(lVar5 + 0x20);
      lStack_98 = *(long *)(lVar5 + 0x28);
      if ((lStack_98 != 0) &&
         ((uVar3 = /*Atlas.Stats.AchievementManager.StatAchievementProgress$$get_IsComplete*/ func_0x01531a0c(&uStack_a0,0), (int)uVar3 == 0 || ((param_2 & 1) == 0)))) {
        uStack_c8 = uStack_88;
        uStack_d0 = uStack_90;
        uStack_b8 = uStack_78;
        uStack_c0 = uStack_80;
        uStack_a8 = uStack_68;
        uStack_b0 = uStack_70;
        uStack_e8 = uVar4;
        lStack_e0 = lVar1;
        uStack_d8 = uVar9;
        iVar2 = /*Atlas.Stats.AchievementManager$$DoesAchievementHaveConditions*/ func_0x014486d4(uVar3,&uStack_e8);
        if (iVar2 != 0) {
          uStack_110 = uStack_88;
          uStack_118 = uStack_90;
          uStack_100 = uStack_78;
          uStack_108 = uStack_80;
          uStack_f0 = uStack_68;
          uStack_f8 = uStack_70;
          uStack_130 = uVar4;
          lStack_128 = lVar1;
          uStack_120 = uVar9;
          iVar2 = /*Atlas.Stats.AchievementManager$$DoesAchievementPassConditions*/ func_0x014488e0(param_1,&uStack_130);
          if (iVar2 != 0) {
            if (lVar1 == 0) break;
            if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
              uVar8 = 0;
              uVar6 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
              do {
                lVar5 = *(long *)(param_1 + 0x18);
                if (param_2 == 0) {
                  if (uVar6 <= uVar8) goto LAB_01446b4c;
                  if (lStack_98 == 0) goto LAB_01446b28;
                  if (*(uint *)(lStack_98 + 0x18) <= uVar8) goto LAB_01446b4c;
                  if (lVar5 == 0) goto LAB_01446b28;
                  /*Atlas.Stats.StatsManager$$UnRegisterOnStatChange*/ func_0x01504fc8(lVar5,*(undefined4 *)(lVar1 + 0x20 + uVar8 * 4),
                                  *(undefined8 *)(lStack_98 + uVar8 * 8 + 0x20),0);
                }
                else {
                  if (uVar6 <= uVar8) goto LAB_01446b4c;
                  if (lStack_98 == 0) goto LAB_01446b28;
                  if (*(uint *)(lStack_98 + 0x18) <= uVar8) goto LAB_01446b4c;
                  if (lVar5 == 0) goto LAB_01446b28;
                  /*Atlas.Stats.StatsManager$$RegisterOnStatChange*/ func_0x01504f0c(lVar5,*(undefined4 *)(lVar1 + 0x20 + uVar8 * 4),
                                  *(undefined8 *)(lStack_98 + uVar8 * 8 + 0x20),0);
                }
                uVar8 = uVar8 + 1;
                uVar6 = (ulong)*(uint *)(lVar1 + 0x18);
              } while ((long)uVar8 < (long)(int)*(uint *)(lVar1 + 0x18));
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
      lVar5 = *(long *)(param_1 + 0x50);
    } while (lVar5 != 0);
  }
LAB_01446b28:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1446b58 | Atlas.Stats.AchievementManager.OnDeInitGameContext
// ============================================================

void Atlas_Stats_AchievementManager__OnDeInitGameContext(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4716 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4716 = 1;
  }
  Atlas_Stats_AchievementManager__ConditionalModifyListeners(param_1,0);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1446c08 | Atlas.Stats.AchievementManager.ResetAndPopulate
// ============================================================

/* WARNING: Possible PIC construction at 0x014470e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014471d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01447c00) */

void Atlas_Stats_AchievementManager__ResetAndPopulate
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long extraout_x1;
  long lVar10;
  undefined8 uVar11;
  undefined8 ***pppuVar12;
  undefined *puVar13;
  ulong extraout_d0;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar16 [16];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  
  /*Atlas.Stats.AchievementManager$$Reset*/ func_0x01446c54();
  /*Atlas.Stats.AchievementManager$$PopulateStatAchievementProgress*/ func_0x01446ce0(param_1,param_2);
  uVar11 = 0x3eb4000;
  if ((bRam0000000003eb4726 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3a4c8);
    func_0x00f78a20(0x3d257d8);
    func_0x00f78a20(0x3d69c30);
    func_0x00f78a20(0x3d69c00);
    func_0x00f78a20(0x3d69c10);
    func_0x00f78a20(0x3d68a28);
    func_0x00f78a20(0x3d6cba0);
    func_0x00f78a20(0x3d68a20);
    func_0x00f78a20(0x3d69c28);
    func_0x00f78a20(0x3d68a38);
    func_0x00f78a20(0x3d69c38);
    func_0x00f78a20(0x3d77cb0);
    func_0x00f78a20(0x3d69c20);
    bRam0000000003eb4726 = 1;
  }
  if ((param_3 != 0) && (*(long *)(param_3 + 0x60) != 0)) {
    /*Atlas.Stats.AchievementManager$$OnMapPlayed*/ func_0x014475d4(param_1,*(undefined4 *)(*(long *)(param_3 + 0x60) + 0x18));
    if ((*(long *)(param_3 + 0x70) != 0) &&
       (/*Atlas.Stats.AchievementManager$$OnKartPlayed*/ func_0x01447640(param_1,*(undefined4 *)(*(long *)(param_3 + 0x70) + 0x18)), param_4 != 0)) {
      /*Atlas.Stats.AchievementManager$$OnCharacterPlayed*/ func_0x014476ac(param_1,*(undefined8 *)(param_3 + 0x68),*(undefined8 *)(param_4 + 0x10));
      if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('FTUEStage_2_Items')*/ uRam0000000003d6cba0,param_3,0);
      lVar7 = param_1;
      lVar6 = param_4;
      if (iVar5 == 0) {
        uVar11 = 0x3d69c00;
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,param_3,0);
        if (iVar5 == 0) {
          if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,param_3,0);
          if (iVar5 == 0) {
            if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,param_3,0);
            if (iVar5 == 0) {
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Prologue')*/ uRam0000000003d69c30,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(param_1,uVar11,param_4,param_3);
              uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(param_1,uVar11,param_4,param_3);
              uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(param_1,uVar11,param_4,param_3);
              uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Hard')*/ uRam0000000003d69c10,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(param_1,uVar11,param_4,param_3);
              uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Series')*/ uRam0000000003d69c38,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(param_1,uVar11,param_4,param_3);
              uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Legend')*/ uRam0000000003d69c20,0);
              uVar11 = /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(param_1,uVar11,param_4,param_3);
              lVar6 = /*Atlas.Stats.AchievementManager$$GetNumberOfSkinWins*/ func_0x014479b0(uVar11,*(undefined8 *)(param_3 + 0x78),
                                      *(undefined8 *)(param_4 + 0x10));
              pppuVar12 = (undefined8 ***)&stack0xfffffffffffffff0;
              uVar11 = 0x3d68a78;
              param_3 = 0x3d68a80;
              if ((bRam0000000003eb4725 & 1) == 0) {
                func_0x00f78a20(0x3d68a78);
                func_0x00f78a20(0x3d68a80);
                func_0x00f78a20(0x3d68a70);
                bRam0000000003eb4725 = 1;
              }
              uVar14 = /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(lVar6,1,3,0);
              unaff_d8 = uVar14 & 0xffffffff;
              uVar15 = /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(lVar6,10,3,0);
              unaff_d9 = uVar15 & 0xffffffff;
              /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(lVar6,0x14,3,0);
              uVar14 = uVar14 & 0xffffffff;
              puVar13 = &UNK_01447c00;
              puVar2 = &stack0xffffffffffffffa0;
              lVar1 = /*STR('Achievement_30')*/ lRam0000000003d68a70;
            }
            else {
              uVar14 = 0x42c80000;
              puVar13 = &UNK_014471dc;
              puVar2 = &stack0xffffffffffffffa0;
              lVar1 = /*STR('Achievement_13')*/ lRam0000000003d68a38;
              pppuVar12 = (undefined8 ***)&stack0xfffffffffffffff0;
            }
          }
          else {
            uVar14 = 0x42c80000;
            puVar13 = &UNK_0144718c;
            puVar2 = &stack0xffffffffffffffa0;
            lVar1 = /*STR('Achievement_04')*/ lRam0000000003d68a28;
            pppuVar12 = (undefined8 ***)&stack0xfffffffffffffff0;
          }
        }
        else {
          uVar14 = 0x42c80000;
          puVar13 = &UNK_0144713c;
          puVar2 = &stack0xffffffffffffffa0;
          lVar1 = /*STR('arcadeFTUX')*/ lRam0000000003d77cb0;
          uVar11 = 0x3d69c00;
          pppuVar12 = (undefined8 ***)&stack0xfffffffffffffff0;
        }
      }
      else {
        uVar14 = 0x42c80000;
        puVar13 = &UNK_014470ec;
        puVar2 = &stack0xffffffffffffffa0;
        lVar1 = /*STR('Achievement_01')*/ lRam0000000003d68a20;
        uVar11 = 0x3d6cba0;
        pppuVar12 = (undefined8 ***)&stack0xfffffffffffffff0;
      }
      goto code_r0x014473ec;
    }
  }
  lVar7 = func_0x00f78af4();
  puVar2 = auStack_c0;
  puStack_68 = &Atlas_Stats_AchievementManager__LateUpdate;
  pppuVar12 = &ppuStack_70;
  lVar6 = 0x3eb4000;
  lStack_80 = param_4;
  lStack_78 = param_1;
  ppuStack_70 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4729 & 1) == 0) {
    func_0x00f78a20(0x3d2fdf8);
    func_0x00f78a20(0x3d2fe10);
    func_0x00f78a20(0x3d5fa78);
    bRam0000000003eb4729 = 1;
  }
  if (*(long *)(lVar7 + 0x58) != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<string, float>$$get_Count*/ func_0x01ee059c(*(long *)(lVar7 + 0x58),uRam0000000003d2fe10);
    if (iVar5 == 0) {
      return;
    }
    if ((*(long *)(lVar7 + 0x40) != 0) &&
       (plVar8 = *(long **)(*(long *)(lVar7 + 0x40) + 0x30), plVar8 != (long *)0x0)) {
      lVar6 = 0x3d5f000;
      (**(code **)(*plVar8 + 0x6f8))
                (&uStack_b8,plVar8,*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(*plVar8 + 0x700));
      uStack_98 = uStack_b0;
      uStack_a0 = uStack_b8;
      uStack_90 = uStack_a8;
      /*UniRx.Async.UniTaskExtensions$$Forget<Achievements>*/ func_0x01a3b8d8(&uStack_a0,uRam0000000003d5fa78);
      if (*(long *)(lVar7 + 0x58) != 0) {
        /*System.Collections.Generic.Dictionary<string, float>$$Clear*/ func_0x01ee0a3c(*(long *)(lVar7 + 0x58),uRam0000000003d2fdf8);
        return;
      }
    }
  }
  puVar13 = &Atlas_Stats_AchievementManager__ProgressAchievement;
  param_1 = func_0x00f78af4();
  lVar1 = extraout_x1;
  uVar14 = extraout_d0;
code_r0x014473ec:
  do {
    lVar10 = lVar1;
    lVar9 = param_1;
    *(ulong *)(puVar2 + -0x40) = unaff_d9;
    *(ulong *)(puVar2 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar2 + -0x30) = uVar11;
    *(long *)(puVar2 + -0x28) = param_3;
    *(long *)(puVar2 + -0x20) = lVar6;
    *(long *)(puVar2 + -0x18) = lVar7;
    *(undefined8 ****)(puVar2 + -0x10) = pppuVar12;
    *(undefined **)(puVar2 + -8) = puVar13;
    pppuVar12 = (undefined8 ***)(puVar2 + -0x10);
    unaff_d8 = uVar14 & 0xffffffff;
    param_3 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)(puVar2 + -0x44) = 0;
    if (*(long *)(lVar9 + 0x60) != 0) {
      iVar5 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar9 + 0x60),lVar10,puVar2 + -0x44,uRam0000000003d2fe08);
      bVar3 = true;
      bVar4 = false;
      if (iVar5 != 0) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(*(float *)(puVar2 + -0x44)) && !NAN((float)uVar14)) {
          bVar3 = *(float *)(puVar2 + -0x44) < (float)uVar14;
          bVar4 = false;
        }
      }
      if (bVar3 == bVar4) {
        return;
      }
      if (*(long *)(lVar9 + 0x60) != 0) {
        param_3 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar14 & 0xffffffff,*(long *)(lVar9 + 0x60),lVar10,uRam0000000003d2fe18);
        if (*(long *)(lVar9 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar14 & 0xffffffff,*(long *)(lVar9 + 0x58),lVar10,uRam0000000003d2fe18);
          return;
        }
      }
    }
    puVar13 = &Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar16 = func_0x00f78af4();
    uVar14 = 0x42c80000;
    puVar2 = puVar2 + -0x50;
    param_1 = auVar16._0_8_;
    lVar1 = auVar16._8_8_;
    lVar7 = lVar10;
    lVar6 = lVar9;
  } while( true );
}



// ============================================================
// RVA: 0x1446c54 | Atlas.Stats.AchievementManager.Reset
// ============================================================

/* WARNING: Possible PIC construction at 0x014470e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014471d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01447c00) */

void Atlas_Stats_AchievementManager__Reset(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long extraout_x1;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *******pppppppuVar18;
  undefined *puVar19;
  ulong extraout_d0;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_170;
  long lStack_168;
  undefined8 ******ppppppuStack_160;
  undefined *puStack_158;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 ****ppppuStack_40;
  undefined *puStack_38;
  
  lVar11 = *(long *)(param_1 + 0x50);
  if (lVar11 != 0) {
    uVar14 = 0;
    lVar15 = 0x20;
    do {
      unaff_x19 = param_1;
      if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar14) goto LAB_01446cc0;
      /*Atlas.Stats.AchievementManager$$UnregisterStatListeners*/ func_0x0144873c(param_1,uVar14);
      lVar11 = *(long *)(param_1 + 0x10);
      if (lVar11 == 0) break;
      if (*(uint *)(lVar11 + 0x18) <= uVar14) {
        uVar7 = func_0x00f78b24();
        auVar20 = func_0x00f78ac0(uVar7,0);
        lVar11 = auVar20._0_8_;
        puStack_38 = &Atlas_Stats_AchievementManager__PopulateStatAchievementProgress;
        ppppuStack_40 = (undefined8 ****)&stack0xfffffffffffffff0;
        if ((bRam0000000003eb4724 & 1) == 0) {
          func_0x00f78a20(0x3d1ecf8);
          func_0x00f78a20(0x3d1fa78);
          func_0x00f78a20(0x3d61e80);
          func_0x00f78a20(0x3d26638);
          bRam0000000003eb4724 = 1;
        }
        uStack_a0 = 0;
        plStack_98 = (long *)0x0;
        *(long *)(lVar11 + 0x18) = auVar20._8_8_;
        lVar15 = *(long *)(lVar11 + 0x50);
        if (lVar15 == 0) goto code_r0x01446f38;
        uVar14 = 0;
        goto code_r0x01446d74;
      }
      puVar1 = (undefined8 *)(lVar11 + lVar15);
      lVar15 = lVar15 + 0x10;
      uVar14 = uVar14 + 1;
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar11 = *(long *)(param_1 + 0x50);
    } while (lVar11 != 0);
  }
  func_0x00f78af4();
LAB_01446cc0:
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  return;
code_r0x01446d74:
  if ((long)*(int *)(lVar15 + 0x18) <= (long)uVar14) {
    return;
  }
  lVar15 = func_0x00f78aec(/*Atlas.Stats.AchievementManager.<>c__DisplayClass44_0_TypeInfo*/ uRam0000000003d26638);
  /*Atlas.Stats.AchievementManager.<>c__DisplayClass44_0$$.ctor*/ func_0x01531788(lVar15,0);
  if (lVar15 == 0) goto code_r0x01446f38;
  *(long *)(lVar15 + 0x18) = lVar11;
  lVar10 = 1;
  /*Atlas.Stats.AchievementManager$$UpdateStatAchievementProgress*/ func_0x014485a4(lVar11,uVar14);
  lVar12 = *(long *)(lVar11 + 0x10);
  if (lVar12 == 0) goto code_r0x01446f38;
  if (uVar14 < *(uint *)(lVar12 + 0x18)) {
    lVar12 = lVar12 + uVar14 * 0x10;
    plStack_98 = *(long **)(lVar12 + 0x28);
    uStack_a0 = *(undefined8 *)(lVar12 + 0x20);
    uVar8 = /*Atlas.Stats.AchievementManager.StatAchievementProgress$$get_IsComplete*/ func_0x01531a0c(&uStack_a0,0);
    if ((uVar8 & 1) != 0) {
code_r0x01446f2c:
      uVar14 = uVar14 + 1;
      lVar15 = *(long *)(lVar11 + 0x50);
      if (lVar15 == 0) {
code_r0x01446f38:
        func_0x00f78af4();
        return;
      }
      goto code_r0x01446d74;
    }
    lVar12 = *(long *)(lVar11 + 0x50);
    if (lVar12 == 0) goto code_r0x01446f38;
    if (uVar14 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = *(long *)(lVar12 + uVar14 * 0x48 + 0x28);
      if (lVar12 != 0) {
        plVar9 = (long *)func_0x00f78a34(/*System.Action[]_TypeInfo*/ uRam0000000003d1ecf8,*(undefined4 *)(lVar12 + 0x18));
        *(int *)(lVar15 + 0x10) = (int)uVar14;
        plStack_98 = plVar9;
        if (0 < *(int *)(lVar12 + 0x18)) {
          uVar8 = 0;
          do {
            lVar17 = *(long *)(lVar15 + 0x20);
            if (lVar17 == 0) {
              lVar17 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              lVar10 = lRam0000000003d61e80;
              plVar9 = (long *)/*System.Action$$.ctor*/ func_0x02924c80(lVar17,lVar15,lRam0000000003d61e80,0);
              *(long *)(lVar15 + 0x20) = lVar17;
            }
            plVar2 = plStack_98;
            if (plStack_98 == (long *)0x0) goto code_r0x01446f38;
            if ((lVar17 != 0) &&
               (plVar9 = (long *)func_0x00f78adc(lVar17,*(undefined8 *)(*plStack_98 + 0x40)),
               plVar9 == (long *)0x0)) {
              uVar7 = func_0x00f78b14();
              goto code_r0x01446f68;
            }
            if (*(uint *)(plVar2 + 3) <= uVar8) goto code_r0x01446f5c;
            plVar2[uVar8 + 4] = lVar17;
            lVar13 = *(long *)(lVar11 + 0x50);
            if (lVar13 == 0) goto code_r0x01446f38;
            if (*(uint *)(lVar13 + 0x18) <= uVar14) goto code_r0x01446f5c;
            lVar13 = lVar13 + uVar14 * 0x48;
            uStack_c8 = *(undefined8 *)(lVar13 + 0x48);
            uStack_d0 = *(undefined8 *)(lVar13 + 0x40);
            uStack_b8 = *(undefined8 *)(lVar13 + 0x58);
            uStack_c0 = *(undefined8 *)(lVar13 + 0x50);
            uStack_b0 = *(undefined8 *)(lVar13 + 0x60);
            uStack_e8 = *(undefined8 *)(lVar13 + 0x28);
            uStack_f0 = *(undefined8 *)(lVar13 + 0x20);
            uStack_d8 = *(undefined8 *)(lVar13 + 0x38);
            uStack_e0 = *(undefined8 *)(lVar13 + 0x30);
            plVar9 = (long *)/*Atlas.Stats.AchievementManager$$DoesAchievementHaveConditions*/ func_0x014486d4(plVar9,&uStack_f0);
            if (((ulong)plVar9 & 1) == 0) {
              if (*(uint *)(lVar12 + 0x18) <= uVar8) goto code_r0x01446f5c;
              if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x01446f38;
              plVar9 = (long *)/*Atlas.Stats.StatsManager$$RegisterOnStatChange*/ func_0x01504f0c(*(long *)(lVar11 + 0x18),
                                               *(undefined4 *)(lVar12 + 0x20 + uVar8 * 4),lVar17,0);
              lVar10 = lVar17;
            }
            uVar8 = uVar8 + 1;
          } while ((long)uVar8 < (long)*(int *)(lVar12 + 0x18));
        }
        lVar15 = *(long *)(lVar11 + 0x10);
        if (lVar15 != 0) {
          if (uVar14 < *(uint *)(lVar15 + 0x18)) {
            lVar15 = lVar15 + uVar14 * 0x10;
            *(undefined8 *)(lVar15 + 0x20) = uStack_a0;
            *(long **)(lVar15 + 0x28) = plStack_98;
            goto code_r0x01446f2c;
          }
          goto code_r0x01446f5c;
        }
      }
      goto code_r0x01446f38;
    }
  }
code_r0x01446f5c:
  uVar7 = func_0x00f78b24();
code_r0x01446f68:
  auVar20 = func_0x00f78ac0(uVar7,0);
  lVar15 = auVar20._8_8_;
  lVar11 = auVar20._0_8_;
  puStack_f8 = &Atlas_Stats_AchievementManager__SubmitAllBespokeAchievementProgress;
  uVar7 = 0x3eb4000;
  pppppuStack_100 = &ppppuStack_40;
  if ((bRam0000000003eb4726 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3a4c8);
    func_0x00f78a20(0x3d257d8);
    func_0x00f78a20(0x3d69c30);
    func_0x00f78a20(0x3d69c00);
    func_0x00f78a20(0x3d69c10);
    func_0x00f78a20(0x3d68a28);
    func_0x00f78a20(0x3d6cba0);
    func_0x00f78a20(0x3d68a20);
    func_0x00f78a20(0x3d69c28);
    func_0x00f78a20(0x3d68a38);
    func_0x00f78a20(0x3d69c38);
    func_0x00f78a20(0x3d77cb0);
    func_0x00f78a20(0x3d69c20);
    bRam0000000003eb4726 = 1;
  }
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x60) != 0)) {
    /*Atlas.Stats.AchievementManager$$OnMapPlayed*/ func_0x014475d4(lVar11,*(undefined4 *)(*(long *)(lVar15 + 0x60) + 0x18));
    if ((*(long *)(lVar15 + 0x70) != 0) &&
       (/*Atlas.Stats.AchievementManager$$OnKartPlayed*/ func_0x01447640(lVar11,*(undefined4 *)(*(long *)(lVar15 + 0x70) + 0x18)), lVar10 != 0)) {
      /*Atlas.Stats.AchievementManager$$OnCharacterPlayed*/ func_0x014476ac(lVar11,*(undefined8 *)(lVar15 + 0x68),*(undefined8 *)(lVar10 + 0x10));
      if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('FTUEStage_2_Items')*/ uRam0000000003d6cba0,lVar15,0);
      lVar12 = lVar11;
      lVar17 = lVar10;
      if (iVar6 == 0) {
        uVar7 = 0x3d69c00;
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,lVar15,0);
        if (iVar6 == 0) {
          if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,lVar15,0);
          if (iVar6 == 0) {
            if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,lVar15,0);
            if (iVar6 == 0) {
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Prologue')*/ uRam0000000003d69c30,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(lVar11,uVar7,lVar10,lVar15);
              uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(lVar11,uVar7,lVar10,lVar15);
              uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(lVar11,uVar7,lVar10,lVar15);
              uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Hard')*/ uRam0000000003d69c10,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(lVar11,uVar7,lVar10,lVar15);
              uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Series')*/ uRam0000000003d69c38,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(lVar11,uVar7,lVar10,lVar15);
              uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Legend')*/ uRam0000000003d69c20,0);
              uVar7 = /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(lVar11,uVar7,lVar10,lVar15);
              lVar17 = /*Atlas.Stats.AchievementManager$$GetNumberOfSkinWins*/ func_0x014479b0(uVar7,*(undefined8 *)(lVar15 + 0x78),
                                       *(undefined8 *)(lVar10 + 0x10));
              pppppppuVar18 = (undefined8 *******)&pppppuStack_100;
              uVar7 = 0x3d68a78;
              auVar20._8_8_ = 0x3d68a80;
              auVar20._0_8_ = lVar11;
              if ((bRam0000000003eb4725 & 1) == 0) {
                func_0x00f78a20(0x3d68a78);
                func_0x00f78a20(0x3d68a80);
                func_0x00f78a20(0x3d68a70);
                bRam0000000003eb4725 = 1;
              }
              uVar14 = /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(lVar17,1,3,0);
              unaff_d8 = uVar14 & 0xffffffff;
              uVar8 = /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(lVar17,10,3,0);
              unaff_d9 = uVar8 & 0xffffffff;
              /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(lVar17,0x14,3,0);
              uVar14 = uVar14 & 0xffffffff;
              puVar19 = &UNK_01447c00;
              puVar3 = &stack0xfffffffffffffeb0;
              lVar11 = /*STR('Achievement_30')*/ lRam0000000003d68a70;
            }
            else {
              uVar14 = 0x42c80000;
              puVar19 = &UNK_014471dc;
              puVar3 = &stack0xfffffffffffffeb0;
              lVar11 = /*STR('Achievement_13')*/ lRam0000000003d68a38;
              pppppppuVar18 = (undefined8 *******)&pppppuStack_100;
            }
          }
          else {
            uVar14 = 0x42c80000;
            puVar19 = &UNK_0144718c;
            puVar3 = &stack0xfffffffffffffeb0;
            lVar11 = /*STR('Achievement_04')*/ lRam0000000003d68a28;
            pppppppuVar18 = (undefined8 *******)&pppppuStack_100;
          }
        }
        else {
          uVar14 = 0x42c80000;
          puVar19 = &UNK_0144713c;
          puVar3 = &stack0xfffffffffffffeb0;
          lVar11 = /*STR('arcadeFTUX')*/ lRam0000000003d77cb0;
          uVar7 = 0x3d69c00;
          pppppppuVar18 = (undefined8 *******)&pppppuStack_100;
        }
      }
      else {
        uVar14 = 0x42c80000;
        puVar19 = &UNK_014470ec;
        puVar3 = &stack0xfffffffffffffeb0;
        lVar11 = /*STR('Achievement_01')*/ lRam0000000003d68a20;
        uVar7 = 0x3d6cba0;
        pppppppuVar18 = (undefined8 *******)&pppppuStack_100;
      }
      goto code_r0x014473ec;
    }
  }
  lVar12 = func_0x00f78af4();
  puVar3 = auStack_1b0;
  puStack_158 = &Atlas_Stats_AchievementManager__LateUpdate;
  pppppppuVar18 = &ppppppuStack_160;
  lVar17 = 0x3eb4000;
  lStack_170 = lVar10;
  lStack_168 = lVar11;
  ppppppuStack_160 = &pppppuStack_100;
  if ((bRam0000000003eb4729 & 1) == 0) {
    func_0x00f78a20(0x3d2fdf8);
    func_0x00f78a20(0x3d2fe10);
    func_0x00f78a20(0x3d5fa78);
    bRam0000000003eb4729 = 1;
  }
  if (*(long *)(lVar12 + 0x58) != 0) {
    iVar6 = /*System.Collections.Generic.Dictionary<string, float>$$get_Count*/ func_0x01ee059c(*(long *)(lVar12 + 0x58),uRam0000000003d2fe10);
    if (iVar6 == 0) {
      return;
    }
    if ((*(long *)(lVar12 + 0x40) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar12 + 0x40) + 0x30), plVar9 != (long *)0x0)) {
      lVar17 = 0x3d5f000;
      (**(code **)(*plVar9 + 0x6f8))
                (&uStack_1a8,plVar9,*(undefined8 *)(lVar12 + 0x58),*(undefined8 *)(*plVar9 + 0x700))
      ;
      uStack_188 = uStack_1a0;
      uStack_190 = uStack_1a8;
      uStack_180 = uStack_198;
      /*UniRx.Async.UniTaskExtensions$$Forget<Achievements>*/ func_0x01a3b8d8(&uStack_190,uRam0000000003d5fa78);
      if (*(long *)(lVar12 + 0x58) != 0) {
        /*System.Collections.Generic.Dictionary<string, float>$$Clear*/ func_0x01ee0a3c(*(long *)(lVar12 + 0x58),uRam0000000003d2fdf8);
        return;
      }
    }
  }
  puVar19 = &Atlas_Stats_AchievementManager__ProgressAchievement;
  uVar16 = func_0x00f78af4();
  auVar20._8_8_ = lVar15;
  auVar20._0_8_ = uVar16;
  lVar11 = extraout_x1;
  uVar14 = extraout_d0;
code_r0x014473ec:
  do {
    lVar10 = lVar11;
    lVar15 = auVar20._0_8_;
    *(ulong *)(puVar3 + -0x40) = unaff_d9;
    *(ulong *)(puVar3 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x30) = uVar7;
    *(long *)(puVar3 + -0x28) = auVar20._8_8_;
    *(long *)(puVar3 + -0x20) = lVar17;
    *(long *)(puVar3 + -0x18) = lVar12;
    *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar18;
    *(undefined **)(puVar3 + -8) = puVar19;
    pppppppuVar18 = (undefined8 *******)(puVar3 + -0x10);
    unaff_d8 = uVar14 & 0xffffffff;
    uVar16 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)(puVar3 + -0x44) = 0;
    if (*(long *)(lVar15 + 0x60) != 0) {
      iVar6 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar15 + 0x60),lVar10,puVar3 + -0x44,uRam0000000003d2fe08);
      bVar4 = true;
      bVar5 = false;
      if (iVar6 != 0) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(*(float *)(puVar3 + -0x44)) && !NAN((float)uVar14)) {
          bVar4 = *(float *)(puVar3 + -0x44) < (float)uVar14;
          bVar5 = false;
        }
      }
      if (bVar4 == bVar5) {
        return;
      }
      if (*(long *)(lVar15 + 0x60) != 0) {
        uVar16 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar14 & 0xffffffff,*(long *)(lVar15 + 0x60),lVar10,uRam0000000003d2fe18);
        if (*(long *)(lVar15 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar14 & 0xffffffff,*(long *)(lVar15 + 0x58),lVar10,uRam0000000003d2fe18);
          return;
        }
      }
    }
    puVar19 = &Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar21 = func_0x00f78af4();
    auVar20._8_8_ = uVar16;
    auVar20._0_8_ = auVar21._0_8_;
    uVar14 = 0x42c80000;
    puVar3 = puVar3 + -0x50;
    lVar11 = auVar21._8_8_;
    lVar12 = lVar10;
    lVar17 = lVar15;
  } while( true );
}



// ============================================================
// RVA: 0x1446ce0 | Atlas.Stats.AchievementManager.PopulateStatAchievementProgress
// ============================================================

/* WARNING: Possible PIC construction at 0x014470e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014471d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01447c00) */

void Atlas_Stats_AchievementManager__PopulateStatAchievementProgress
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long extraout_x1;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *******pppppppuVar16;
  undefined *puVar17;
  ulong extraout_d0;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_140;
  long lStack_138;
  undefined8 ******ppppppuStack_130;
  undefined *puStack_128;
  undefined8 *****pppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  long *plStack_68;
  
  if ((bRam0000000003eb4724 & 1) == 0) {
    func_0x00f78a20(0x3d1ecf8);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d61e80);
    func_0x00f78a20(0x3d26638);
    bRam0000000003eb4724 = 1;
  }
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  lVar10 = *(long *)(param_1 + 0x50);
  if (lVar10 == 0) {
LAB_01446f38:
    func_0x00f78af4();
    return;
  }
  uVar13 = 0;
LAB_01446d74:
  if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar13) {
    return;
  }
  lVar10 = func_0x00f78aec(/*Atlas.Stats.AchievementManager.<>c__DisplayClass44_0_TypeInfo*/ uRam0000000003d26638);
  /*Atlas.Stats.AchievementManager.<>c__DisplayClass44_0$$.ctor*/ func_0x01531788(lVar10,0);
  if (lVar10 == 0) goto LAB_01446f38;
  *(long *)(lVar10 + 0x18) = param_1;
  lVar9 = 1;
  /*Atlas.Stats.AchievementManager$$UpdateStatAchievementProgress*/ func_0x014485a4(param_1,uVar13);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) goto LAB_01446f38;
  if (uVar13 < *(uint *)(lVar11 + 0x18)) {
    lVar11 = lVar11 + uVar13 * 0x10;
    plStack_68 = *(long **)(lVar11 + 0x28);
    uStack_70 = *(undefined8 *)(lVar11 + 0x20);
    uVar6 = /*Atlas.Stats.AchievementManager.StatAchievementProgress$$get_IsComplete*/ func_0x01531a0c(&uStack_70,0);
    if ((uVar6 & 1) != 0) {
LAB_01446f2c:
      uVar13 = uVar13 + 1;
      lVar10 = *(long *)(param_1 + 0x50);
      if (lVar10 == 0) goto LAB_01446f38;
      goto LAB_01446d74;
    }
    lVar11 = *(long *)(param_1 + 0x50);
    if (lVar11 == 0) goto LAB_01446f38;
    if (uVar13 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = *(long *)(lVar11 + uVar13 * 0x48 + 0x28);
      if (lVar11 != 0) {
        plVar7 = (long *)func_0x00f78a34(/*System.Action[]_TypeInfo*/ uRam0000000003d1ecf8,*(undefined4 *)(lVar11 + 0x18));
        *(int *)(lVar10 + 0x10) = (int)uVar13;
        plStack_68 = plVar7;
        if (0 < *(int *)(lVar11 + 0x18)) {
          uVar6 = 0;
          do {
            lVar15 = *(long *)(lVar10 + 0x20);
            if (lVar15 == 0) {
              lVar15 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              lVar9 = lRam0000000003d61e80;
              plVar7 = (long *)/*System.Action$$.ctor*/ func_0x02924c80(lVar15,lVar10,lRam0000000003d61e80,0);
              *(long *)(lVar10 + 0x20) = lVar15;
            }
            plVar1 = plStack_68;
            if (plStack_68 == (long *)0x0) goto LAB_01446f38;
            if ((lVar15 != 0) &&
               (plVar7 = (long *)func_0x00f78adc(lVar15,*(undefined8 *)(*plStack_68 + 0x40)),
               plVar7 == (long *)0x0)) {
              uVar8 = func_0x00f78b14();
              goto code_r0x01446f68;
            }
            if (*(uint *)(plVar1 + 3) <= uVar6) goto LAB_01446f5c;
            plVar1[uVar6 + 4] = lVar15;
            lVar12 = *(long *)(param_1 + 0x50);
            if (lVar12 == 0) goto LAB_01446f38;
            if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_01446f5c;
            lVar12 = lVar12 + uVar13 * 0x48;
            uStack_98 = *(undefined8 *)(lVar12 + 0x48);
            uStack_a0 = *(undefined8 *)(lVar12 + 0x40);
            uStack_88 = *(undefined8 *)(lVar12 + 0x58);
            uStack_90 = *(undefined8 *)(lVar12 + 0x50);
            uStack_80 = *(undefined8 *)(lVar12 + 0x60);
            uStack_b8 = *(undefined8 *)(lVar12 + 0x28);
            uStack_c0 = *(undefined8 *)(lVar12 + 0x20);
            uStack_a8 = *(undefined8 *)(lVar12 + 0x38);
            uStack_b0 = *(undefined8 *)(lVar12 + 0x30);
            plVar7 = (long *)/*Atlas.Stats.AchievementManager$$DoesAchievementHaveConditions*/ func_0x014486d4(plVar7,&uStack_c0);
            if (((ulong)plVar7 & 1) == 0) {
              if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_01446f5c;
              if (*(long *)(param_1 + 0x18) == 0) goto LAB_01446f38;
              plVar7 = (long *)/*Atlas.Stats.StatsManager$$RegisterOnStatChange*/ func_0x01504f0c(*(long *)(param_1 + 0x18),
                                               *(undefined4 *)(lVar11 + 0x20 + uVar6 * 4),lVar15,0);
              lVar9 = lVar15;
            }
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)*(int *)(lVar11 + 0x18));
        }
        lVar10 = *(long *)(param_1 + 0x10);
        if (lVar10 != 0) {
          if (uVar13 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + uVar13 * 0x10;
            *(undefined8 *)(lVar10 + 0x20) = uStack_70;
            *(long **)(lVar10 + 0x28) = plStack_68;
            goto LAB_01446f2c;
          }
          goto LAB_01446f5c;
        }
      }
      goto LAB_01446f38;
    }
  }
LAB_01446f5c:
  uVar8 = func_0x00f78b24();
code_r0x01446f68:
  auVar18 = func_0x00f78ac0(uVar8,0);
  lVar11 = auVar18._8_8_;
  lVar10 = auVar18._0_8_;
  puStack_c8 = &Atlas_Stats_AchievementManager__SubmitAllBespokeAchievementProgress;
  uVar8 = 0x3eb4000;
  pppppuStack_d0 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4726 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3a4c8);
    func_0x00f78a20(0x3d257d8);
    func_0x00f78a20(0x3d69c30);
    func_0x00f78a20(0x3d69c00);
    func_0x00f78a20(0x3d69c10);
    func_0x00f78a20(0x3d68a28);
    func_0x00f78a20(0x3d6cba0);
    func_0x00f78a20(0x3d68a20);
    func_0x00f78a20(0x3d69c28);
    func_0x00f78a20(0x3d68a38);
    func_0x00f78a20(0x3d69c38);
    func_0x00f78a20(0x3d77cb0);
    func_0x00f78a20(0x3d69c20);
    bRam0000000003eb4726 = 1;
  }
  if ((lVar11 != 0) && (*(long *)(lVar11 + 0x60) != 0)) {
    /*Atlas.Stats.AchievementManager$$OnMapPlayed*/ func_0x014475d4(lVar10,*(undefined4 *)(*(long *)(lVar11 + 0x60) + 0x18));
    if ((*(long *)(lVar11 + 0x70) != 0) &&
       (/*Atlas.Stats.AchievementManager$$OnKartPlayed*/ func_0x01447640(lVar10,*(undefined4 *)(*(long *)(lVar11 + 0x70) + 0x18)), lVar9 != 0)) {
      /*Atlas.Stats.AchievementManager$$OnCharacterPlayed*/ func_0x014476ac(lVar10,*(undefined8 *)(lVar11 + 0x68),*(undefined8 *)(lVar9 + 0x10));
      if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('FTUEStage_2_Items')*/ uRam0000000003d6cba0,lVar11,0);
      lVar15 = lVar10;
      lVar12 = lVar9;
      if (iVar5 == 0) {
        uVar8 = 0x3d69c00;
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,lVar11,0);
        if (iVar5 == 0) {
          if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,lVar11,0);
          if (iVar5 == 0) {
            if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,lVar11,0);
            if (iVar5 == 0) {
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Prologue')*/ uRam0000000003d69c30,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(lVar10,uVar8,lVar9,lVar11);
              uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(lVar10,uVar8,lVar9,lVar11);
              uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(lVar10,uVar8,lVar9,lVar11);
              uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Hard')*/ uRam0000000003d69c10,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(lVar10,uVar8,lVar9,lVar11);
              uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Series')*/ uRam0000000003d69c38,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(lVar10,uVar8,lVar9,lVar11);
              uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Legend')*/ uRam0000000003d69c20,0);
              uVar8 = /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(lVar10,uVar8,lVar9,lVar11);
              lVar12 = /*Atlas.Stats.AchievementManager$$GetNumberOfSkinWins*/ func_0x014479b0(uVar8,*(undefined8 *)(lVar11 + 0x78),
                                       *(undefined8 *)(lVar9 + 0x10));
              pppppppuVar16 = (undefined8 *******)&pppppuStack_d0;
              uVar8 = 0x3d68a78;
              auVar18._8_8_ = 0x3d68a80;
              auVar18._0_8_ = lVar10;
              if ((bRam0000000003eb4725 & 1) == 0) {
                func_0x00f78a20(0x3d68a78);
                func_0x00f78a20(0x3d68a80);
                func_0x00f78a20(0x3d68a70);
                bRam0000000003eb4725 = 1;
              }
              uVar13 = /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(lVar12,1,3,0);
              unaff_d8 = uVar13 & 0xffffffff;
              uVar6 = /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(lVar12,10,3,0);
              unaff_d9 = uVar6 & 0xffffffff;
              /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(lVar12,0x14,3,0);
              uVar13 = uVar13 & 0xffffffff;
              puVar17 = &UNK_01447c00;
              puVar2 = &stack0xfffffffffffffee0;
              lVar10 = /*STR('Achievement_30')*/ lRam0000000003d68a70;
            }
            else {
              uVar13 = 0x42c80000;
              puVar17 = &UNK_014471dc;
              puVar2 = &stack0xfffffffffffffee0;
              lVar10 = /*STR('Achievement_13')*/ lRam0000000003d68a38;
              pppppppuVar16 = (undefined8 *******)&pppppuStack_d0;
            }
          }
          else {
            uVar13 = 0x42c80000;
            puVar17 = &UNK_0144718c;
            puVar2 = &stack0xfffffffffffffee0;
            lVar10 = /*STR('Achievement_04')*/ lRam0000000003d68a28;
            pppppppuVar16 = (undefined8 *******)&pppppuStack_d0;
          }
        }
        else {
          uVar13 = 0x42c80000;
          puVar17 = &UNK_0144713c;
          puVar2 = &stack0xfffffffffffffee0;
          lVar10 = /*STR('arcadeFTUX')*/ lRam0000000003d77cb0;
          uVar8 = 0x3d69c00;
          pppppppuVar16 = (undefined8 *******)&pppppuStack_d0;
        }
      }
      else {
        uVar13 = 0x42c80000;
        puVar17 = &UNK_014470ec;
        puVar2 = &stack0xfffffffffffffee0;
        lVar10 = /*STR('Achievement_01')*/ lRam0000000003d68a20;
        uVar8 = 0x3d6cba0;
        pppppppuVar16 = (undefined8 *******)&pppppuStack_d0;
      }
      goto code_r0x014473ec;
    }
  }
  lVar15 = func_0x00f78af4();
  puVar2 = auStack_180;
  puStack_128 = &Atlas_Stats_AchievementManager__LateUpdate;
  pppppppuVar16 = &ppppppuStack_130;
  lVar12 = 0x3eb4000;
  lStack_140 = lVar9;
  lStack_138 = lVar10;
  ppppppuStack_130 = &pppppuStack_d0;
  if ((bRam0000000003eb4729 & 1) == 0) {
    func_0x00f78a20(0x3d2fdf8);
    func_0x00f78a20(0x3d2fe10);
    func_0x00f78a20(0x3d5fa78);
    bRam0000000003eb4729 = 1;
  }
  if (*(long *)(lVar15 + 0x58) != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<string, float>$$get_Count*/ func_0x01ee059c(*(long *)(lVar15 + 0x58),uRam0000000003d2fe10);
    if (iVar5 == 0) {
      return;
    }
    if ((*(long *)(lVar15 + 0x40) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar15 + 0x40) + 0x30), plVar7 != (long *)0x0)) {
      lVar12 = 0x3d5f000;
      (**(code **)(*plVar7 + 0x6f8))
                (&uStack_178,plVar7,*(undefined8 *)(lVar15 + 0x58),*(undefined8 *)(*plVar7 + 0x700))
      ;
      uStack_158 = uStack_170;
      uStack_160 = uStack_178;
      uStack_150 = uStack_168;
      /*UniRx.Async.UniTaskExtensions$$Forget<Achievements>*/ func_0x01a3b8d8(&uStack_160,uRam0000000003d5fa78);
      if (*(long *)(lVar15 + 0x58) != 0) {
        /*System.Collections.Generic.Dictionary<string, float>$$Clear*/ func_0x01ee0a3c(*(long *)(lVar15 + 0x58),uRam0000000003d2fdf8);
        return;
      }
    }
  }
  puVar17 = &Atlas_Stats_AchievementManager__ProgressAchievement;
  uVar14 = func_0x00f78af4();
  auVar18._8_8_ = lVar11;
  auVar18._0_8_ = uVar14;
  lVar10 = extraout_x1;
  uVar13 = extraout_d0;
code_r0x014473ec:
  do {
    lVar9 = lVar10;
    lVar11 = auVar18._0_8_;
    *(ulong *)(puVar2 + -0x40) = unaff_d9;
    *(ulong *)(puVar2 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar2 + -0x30) = uVar8;
    *(long *)(puVar2 + -0x28) = auVar18._8_8_;
    *(long *)(puVar2 + -0x20) = lVar12;
    *(long *)(puVar2 + -0x18) = lVar15;
    *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar16;
    *(undefined **)(puVar2 + -8) = puVar17;
    pppppppuVar16 = (undefined8 *******)(puVar2 + -0x10);
    unaff_d8 = uVar13 & 0xffffffff;
    uVar14 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)(puVar2 + -0x44) = 0;
    if (*(long *)(lVar11 + 0x60) != 0) {
      iVar5 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar11 + 0x60),lVar9,puVar2 + -0x44,uRam0000000003d2fe08);
      bVar3 = true;
      bVar4 = false;
      if (iVar5 != 0) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(*(float *)(puVar2 + -0x44)) && !NAN((float)uVar13)) {
          bVar3 = *(float *)(puVar2 + -0x44) < (float)uVar13;
          bVar4 = false;
        }
      }
      if (bVar3 == bVar4) {
        return;
      }
      if (*(long *)(lVar11 + 0x60) != 0) {
        uVar14 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar13 & 0xffffffff,*(long *)(lVar11 + 0x60),lVar9,uRam0000000003d2fe18);
        if (*(long *)(lVar11 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar13 & 0xffffffff,*(long *)(lVar11 + 0x58),lVar9,uRam0000000003d2fe18);
          return;
        }
      }
    }
    puVar17 = &Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar19 = func_0x00f78af4();
    auVar18._8_8_ = uVar14;
    auVar18._0_8_ = auVar19._0_8_;
    uVar13 = 0x42c80000;
    puVar2 = puVar2 + -0x50;
    lVar10 = auVar19._8_8_;
    lVar15 = lVar9;
    lVar12 = lVar11;
  } while( true );
}



// ============================================================
// RVA: 0x1446f70 | Atlas.Stats.AchievementManager.SubmitAllBespokeAchievementProgress
// ============================================================

/* WARNING: Possible PIC construction at 0x014470e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014471d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01447bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01447c00) */

void Atlas_Stats_AchievementManager__SubmitAllBespokeAchievementProgress
               (long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long extraout_x1;
  long lVar10;
  undefined8 uVar11;
  undefined8 ***pppuVar12;
  undefined *puVar13;
  ulong extraout_d0;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar16 [16];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  
  uVar11 = 0x3eb4000;
  if ((bRam0000000003eb4726 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d3a4c8);
    func_0x00f78a20(0x3d257d8);
    func_0x00f78a20(0x3d69c30);
    func_0x00f78a20(0x3d69c00);
    func_0x00f78a20(0x3d69c10);
    func_0x00f78a20(0x3d68a28);
    func_0x00f78a20(0x3d6cba0);
    func_0x00f78a20(0x3d68a20);
    func_0x00f78a20(0x3d69c28);
    func_0x00f78a20(0x3d68a38);
    func_0x00f78a20(0x3d69c38);
    func_0x00f78a20(0x3d77cb0);
    func_0x00f78a20(0x3d69c20);
    bRam0000000003eb4726 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x60) != 0)) {
    /*Atlas.Stats.AchievementManager$$OnMapPlayed*/ func_0x014475d4(param_1,*(undefined4 *)(*(long *)(param_2 + 0x60) + 0x18));
    if ((*(long *)(param_2 + 0x70) != 0) &&
       (/*Atlas.Stats.AchievementManager$$OnKartPlayed*/ func_0x01447640(param_1,*(undefined4 *)(*(long *)(param_2 + 0x70) + 0x18)), param_3 != 0)) {
      /*Atlas.Stats.AchievementManager$$OnCharacterPlayed*/ func_0x014476ac(param_1,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_3 + 0x10));
      if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('FTUEStage_2_Items')*/ uRam0000000003d6cba0,param_2,0);
      lVar7 = param_1;
      lVar6 = param_3;
      if (iVar5 == 0) {
        uVar11 = 0x3d69c00;
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,param_2,0);
        if (iVar5 == 0) {
          if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,param_2,0);
          if (iVar5 == 0) {
            if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,param_2,0);
            if (iVar5 == 0) {
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Prologue')*/ uRam0000000003d69c30,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(param_1,uVar11,param_3,param_2);
              uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(param_1,uVar11,param_3,param_2);
              uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(param_1,uVar11,param_3,param_2);
              uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Hard')*/ uRam0000000003d69c10,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(param_1,uVar11,param_3,param_2);
              uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Series')*/ uRam0000000003d69c38,0);
              /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(param_1,uVar11,param_3,param_2);
              uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Legend')*/ uRam0000000003d69c20,0);
              uVar11 = /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(param_1,uVar11,param_3,param_2);
              lVar6 = /*Atlas.Stats.AchievementManager$$GetNumberOfSkinWins*/ func_0x014479b0(uVar11,*(undefined8 *)(param_2 + 0x78),
                                      *(undefined8 *)(param_3 + 0x10));
              pppuVar12 = (undefined8 ***)&stack0xfffffffffffffff0;
              uVar11 = 0x3d68a78;
              param_2 = 0x3d68a80;
              if ((bRam0000000003eb4725 & 1) == 0) {
                func_0x00f78a20(0x3d68a78);
                func_0x00f78a20(0x3d68a80);
                func_0x00f78a20(0x3d68a70);
                bRam0000000003eb4725 = 1;
              }
              uVar14 = /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(lVar6,1,3,0);
              unaff_d8 = uVar14 & 0xffffffff;
              uVar15 = /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(lVar6,10,3,0);
              unaff_d9 = uVar15 & 0xffffffff;
              /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(lVar6,0x14,3,0);
              uVar14 = uVar14 & 0xffffffff;
              puVar13 = &UNK_01447c00;
              puVar2 = &stack0xffffffffffffffa0;
              lVar1 = /*STR('Achievement_30')*/ lRam0000000003d68a70;
            }
            else {
              uVar14 = 0x42c80000;
              puVar13 = (undefined *)0x14471dc;
              puVar2 = &stack0xffffffffffffffa0;
              lVar1 = /*STR('Achievement_13')*/ lRam0000000003d68a38;
              pppuVar12 = (undefined8 ***)&stack0xfffffffffffffff0;
            }
          }
          else {
            uVar14 = 0x42c80000;
            puVar13 = (undefined *)0x144718c;
            puVar2 = &stack0xffffffffffffffa0;
            lVar1 = /*STR('Achievement_04')*/ lRam0000000003d68a28;
            pppuVar12 = (undefined8 ***)&stack0xfffffffffffffff0;
          }
        }
        else {
          uVar14 = 0x42c80000;
          puVar13 = (undefined *)0x144713c;
          puVar2 = &stack0xffffffffffffffa0;
          lVar1 = /*STR('arcadeFTUX')*/ lRam0000000003d77cb0;
          uVar11 = 0x3d69c00;
          pppuVar12 = (undefined8 ***)&stack0xfffffffffffffff0;
        }
      }
      else {
        uVar14 = 0x42c80000;
        puVar13 = (undefined *)0x14470ec;
        puVar2 = &stack0xffffffffffffffa0;
        lVar1 = /*STR('Achievement_01')*/ lRam0000000003d68a20;
        uVar11 = 0x3d6cba0;
        pppuVar12 = (undefined8 ***)&stack0xfffffffffffffff0;
      }
      goto code_r0x014473ec;
    }
  }
  lVar7 = func_0x00f78af4();
  puVar2 = auStack_c0;
  puStack_68 = &Atlas_Stats_AchievementManager__LateUpdate;
  pppuVar12 = &ppuStack_70;
  lVar6 = 0x3eb4000;
  lStack_80 = param_3;
  lStack_78 = param_1;
  ppuStack_70 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4729 & 1) == 0) {
    func_0x00f78a20(0x3d2fdf8);
    func_0x00f78a20(0x3d2fe10);
    func_0x00f78a20(0x3d5fa78);
    bRam0000000003eb4729 = 1;
  }
  if (*(long *)(lVar7 + 0x58) != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<string, float>$$get_Count*/ func_0x01ee059c(*(long *)(lVar7 + 0x58),uRam0000000003d2fe10);
    if (iVar5 == 0) {
      return;
    }
    if ((*(long *)(lVar7 + 0x40) != 0) &&
       (plVar8 = *(long **)(*(long *)(lVar7 + 0x40) + 0x30), plVar8 != (long *)0x0)) {
      lVar6 = 0x3d5f000;
      (**(code **)(*plVar8 + 0x6f8))
                (&uStack_b8,plVar8,*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(*plVar8 + 0x700));
      uStack_98 = uStack_b0;
      uStack_a0 = uStack_b8;
      uStack_90 = uStack_a8;
      /*UniRx.Async.UniTaskExtensions$$Forget<Achievements>*/ func_0x01a3b8d8(&uStack_a0,uRam0000000003d5fa78);
      if (*(long *)(lVar7 + 0x58) != 0) {
        /*System.Collections.Generic.Dictionary<string, float>$$Clear*/ func_0x01ee0a3c(*(long *)(lVar7 + 0x58),uRam0000000003d2fdf8);
        return;
      }
    }
  }
  puVar13 = &Atlas_Stats_AchievementManager__ProgressAchievement;
  param_1 = func_0x00f78af4();
  lVar1 = extraout_x1;
  uVar14 = extraout_d0;
code_r0x014473ec:
  do {
    lVar10 = lVar1;
    lVar9 = param_1;
    *(ulong *)(puVar2 + -0x40) = unaff_d9;
    *(ulong *)(puVar2 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar2 + -0x30) = uVar11;
    *(long *)(puVar2 + -0x28) = param_2;
    *(long *)(puVar2 + -0x20) = lVar6;
    *(long *)(puVar2 + -0x18) = lVar7;
    *(undefined8 ****)(puVar2 + -0x10) = pppuVar12;
    *(undefined **)(puVar2 + -8) = puVar13;
    pppuVar12 = (undefined8 ***)(puVar2 + -0x10);
    unaff_d8 = uVar14 & 0xffffffff;
    param_2 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)(puVar2 + -0x44) = 0;
    if (*(long *)(lVar9 + 0x60) != 0) {
      iVar5 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar9 + 0x60),lVar10,puVar2 + -0x44,uRam0000000003d2fe08);
      bVar3 = true;
      bVar4 = false;
      if (iVar5 != 0) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(*(float *)(puVar2 + -0x44)) && !NAN((float)uVar14)) {
          bVar3 = *(float *)(puVar2 + -0x44) < (float)uVar14;
          bVar4 = false;
        }
      }
      if (bVar3 == bVar4) {
        return;
      }
      if (*(long *)(lVar9 + 0x60) != 0) {
        param_2 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar14 & 0xffffffff,*(long *)(lVar9 + 0x60),lVar10,uRam0000000003d2fe18);
        if (*(long *)(lVar9 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar14 & 0xffffffff,*(long *)(lVar9 + 0x58),lVar10,uRam0000000003d2fe18);
          return;
        }
      }
    }
    puVar13 = &Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar16 = func_0x00f78af4();
    uVar14 = 0x42c80000;
    puVar2 = puVar2 + -0x50;
    param_1 = auVar16._0_8_;
    lVar1 = auVar16._8_8_;
    lVar7 = lVar10;
    lVar6 = lVar9;
  } while( true );
}



// ============================================================
// RVA: 0x1447308 | Atlas.Stats.AchievementManager.LateUpdate
// ============================================================

void Atlas_Stats_AchievementManager__LateUpdate(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 extraout_x1;
  long lVar10;
  long lVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined *puVar12;
  ulong extraout_d0;
  ulong uVar13;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar14 [16];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puVar3;
  
  lVar11 = 0x3eb4000;
  if ((bRam0000000003eb4729 & 1) == 0) {
    func_0x00f78a20(0x3d2fdf8);
    func_0x00f78a20(0x3d2fe10);
    func_0x00f78a20(0x3d5fa78);
    bRam0000000003eb4729 = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar6 = /*System.Collections.Generic.Dictionary<string, float>$$get_Count*/ func_0x01ee059c(*(long *)(param_1 + 0x58),uRam0000000003d2fe10);
    if (iVar6 == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (plVar7 = *(long **)(*(long *)(param_1 + 0x40) + 0x30), plVar7 != (long *)0x0)) {
      lVar11 = 0x3d5f000;
      (**(code **)(*plVar7 + 0x6f8))
                (&uStack_58,plVar7,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(*plVar7 + 0x700))
      ;
      uStack_38 = uStack_50;
      uStack_40 = uStack_58;
      uStack_30 = uStack_48;
      /*UniRx.Async.UniTaskExtensions$$Forget<Achievements>*/ func_0x01a3b8d8(&uStack_40,uRam0000000003d5fa78);
      if (*(long *)(param_1 + 0x58) != 0) {
        /*System.Collections.Generic.Dictionary<string, float>$$Clear*/ func_0x01ee0a3c(*(long *)(param_1 + 0x58),uRam0000000003d2fdf8);
        return;
      }
    }
  }
  puVar12 = &Atlas_Stats_AchievementManager__ProgressAchievement;
  uVar8 = func_0x00f78af4();
  auVar14._8_8_ = extraout_x1;
  auVar14._0_8_ = uVar8;
  puVar1 = auStack_60;
  uVar13 = extraout_d0;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    puVar3 = puVar1;
    lVar10 = auVar14._8_8_;
    lVar9 = auVar14._0_8_;
    *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
    *(ulong *)(puVar3 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = lVar11;
    *(long *)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
    *(undefined **)(puVar3 + -8) = puVar12;
    unaff_d8 = uVar13 & 0xffffffff;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)(puVar3 + -0x44) = 0;
    if (*(long *)(lVar9 + 0x60) != 0) {
      iVar6 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar9 + 0x60),lVar10,puVar3 + -0x44,uRam0000000003d2fe08);
      bVar4 = true;
      bVar5 = false;
      if (iVar6 != 0) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(*(float *)(puVar3 + -0x44)) && !NAN((float)uVar13)) {
          bVar4 = *(float *)(puVar3 + -0x44) < (float)uVar13;
          bVar5 = false;
        }
      }
      if (bVar4 == bVar5) {
        return;
      }
      if (*(long *)(lVar9 + 0x60) != 0) {
        unaff_x21 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar13 & 0xffffffff,*(long *)(lVar9 + 0x60),lVar10,uRam0000000003d2fe18);
        if (*(long *)(lVar9 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar13 & 0xffffffff,*(long *)(lVar9 + 0x58),lVar10,uRam0000000003d2fe18);
          return;
        }
      }
    }
    puVar12 = &Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar14 = func_0x00f78af4();
    uVar13 = 0x42c80000;
    puVar1 = puVar3 + -0x50;
    param_1 = lVar10;
    lVar11 = lVar9;
    puVar2 = puVar3;
  } while( true );
}



// ============================================================
// RVA: 0x144730c | Atlas.Stats.AchievementManager.SubmitAchievementProgress
// ============================================================

void Atlas_Stats_AchievementManager__SubmitAchievementProgress(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 extraout_x1;
  long lVar10;
  long lVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined *puVar12;
  ulong extraout_d0;
  ulong uVar13;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar14 [16];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puVar3;
  
  lVar11 = 0x3eb4000;
  if ((bRam0000000003eb4729 & 1) == 0) {
    func_0x00f78a20(0x3d2fdf8);
    func_0x00f78a20(0x3d2fe10);
    func_0x00f78a20(0x3d5fa78);
    bRam0000000003eb4729 = 1;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar6 = /*System.Collections.Generic.Dictionary<string, float>$$get_Count*/ func_0x01ee059c(*(long *)(param_1 + 0x58),uRam0000000003d2fe10);
    if (iVar6 == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (plVar7 = *(long **)(*(long *)(param_1 + 0x40) + 0x30), plVar7 != (long *)0x0)) {
      lVar11 = 0x3d5f000;
      (**(code **)(*plVar7 + 0x6f8))
                (&uStack_58,plVar7,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(*plVar7 + 0x700))
      ;
      uStack_38 = uStack_50;
      uStack_40 = uStack_58;
      uStack_30 = uStack_48;
      /*UniRx.Async.UniTaskExtensions$$Forget<Achievements>*/ func_0x01a3b8d8(&uStack_40,uRam0000000003d5fa78);
      if (*(long *)(param_1 + 0x58) != 0) {
        /*System.Collections.Generic.Dictionary<string, float>$$Clear*/ func_0x01ee0a3c(*(long *)(param_1 + 0x58),uRam0000000003d2fdf8);
        return;
      }
    }
  }
  puVar12 = &Atlas_Stats_AchievementManager__ProgressAchievement;
  uVar8 = func_0x00f78af4();
  auVar14._8_8_ = extraout_x1;
  auVar14._0_8_ = uVar8;
  puVar1 = auStack_60;
  uVar13 = extraout_d0;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    puVar3 = puVar1;
    lVar10 = auVar14._8_8_;
    lVar9 = auVar14._0_8_;
    *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
    *(ulong *)(puVar3 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = lVar11;
    *(long *)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
    *(undefined **)(puVar3 + -8) = puVar12;
    unaff_d8 = uVar13 & 0xffffffff;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)(puVar3 + -0x44) = 0;
    if (*(long *)(lVar9 + 0x60) != 0) {
      iVar6 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar9 + 0x60),lVar10,puVar3 + -0x44,uRam0000000003d2fe08);
      bVar4 = true;
      bVar5 = false;
      if (iVar6 != 0) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(*(float *)(puVar3 + -0x44)) && !NAN((float)uVar13)) {
          bVar4 = *(float *)(puVar3 + -0x44) < (float)uVar13;
          bVar5 = false;
        }
      }
      if (bVar4 == bVar5) {
        return;
      }
      if (*(long *)(lVar9 + 0x60) != 0) {
        unaff_x21 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar13 & 0xffffffff,*(long *)(lVar9 + 0x60),lVar10,uRam0000000003d2fe18);
        if (*(long *)(lVar9 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar13 & 0xffffffff,*(long *)(lVar9 + 0x58),lVar10,uRam0000000003d2fe18);
          return;
        }
      }
    }
    puVar12 = &Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar14 = func_0x00f78af4();
    uVar13 = 0x42c80000;
    puVar1 = puVar3 + -0x50;
    param_1 = lVar10;
    lVar11 = lVar9;
    puVar2 = puVar3;
  } while( true );
}



// ============================================================
// RVA: 0x14473ec | Atlas.Stats.AchievementManager.ProgressAchievement
// ============================================================

void Atlas_Stats_AchievementManager__ProgressAchievement
               (float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar8 [16];
  
  auVar2._8_8_ = unaff_x19;
  auVar2._0_8_ = unaff_x20;
  auVar8._8_8_ = param_3;
  auVar8._0_8_ = param_2;
  do {
    auVar1 = auVar8;
    uVar7 = auVar1._8_8_;
    lVar6 = auVar1._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar2;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_d8 = (ulong)(uint)param_1;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)((long)register0x00000008 + -0x44) = 0;
    if (*(long *)(lVar6 + 0x60) != 0) {
      iVar5 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar6 + 0x60),uVar7,
                              (undefined1 *)((long)register0x00000008 + -0x44),uRam0000000003d2fe08)
      ;
      bVar3 = true;
      bVar4 = false;
      if (iVar5 != 0) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(*(float *)((long)register0x00000008 + -0x44)) && !NAN(param_1)) {
          bVar3 = *(float *)((long)register0x00000008 + -0x44) < param_1;
          bVar4 = false;
        }
      }
      if (bVar3 == bVar4) {
        return;
      }
      if (*(long *)(lVar6 + 0x60) != 0) {
        unaff_x21 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(param_1,*(long *)(lVar6 + 0x60),uVar7,uRam0000000003d2fe18);
        if (*(long *)(lVar6 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(param_1,*(long *)(lVar6 + 0x58),uVar7,uRam0000000003d2fe18);
          return;
        }
      }
    }
    unaff_x30 = &Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar8 = func_0x00f78af4();
    param_1 = 100.0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    auVar2 = auVar1;
  } while( true );
}



// ============================================================
// RVA: 0x14474c4 | Atlas.Stats.AchievementManager.UnlockAchievement
// ============================================================

void Atlas_Stats_AchievementManager__UnlockAchievement(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar8 [16];
  
  auVar2._8_8_ = unaff_x19;
  auVar2._0_8_ = unaff_x20;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  do {
    auVar1 = auVar8;
    uVar7 = auVar1._8_8_;
    lVar6 = auVar1._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar2;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_d8 = 0x42c80000;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)((long)register0x00000008 + -0x44) = 0;
    if (*(long *)(lVar6 + 0x60) != 0) {
      iVar5 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar6 + 0x60),uVar7,
                              (undefined1 *)((long)register0x00000008 + -0x44),uRam0000000003d2fe08)
      ;
      bVar3 = true;
      bVar4 = false;
      if (iVar5 != 0) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(*(float *)((long)register0x00000008 + -0x44))) {
          bVar3 = *(float *)((long)register0x00000008 + -0x44) < 100.0;
          bVar4 = false;
        }
      }
      if (bVar3 == bVar4) {
        return;
      }
      if (*(long *)(lVar6 + 0x60) != 0) {
        unaff_x21 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar6 + 0x60),uVar7,uRam0000000003d2fe18);
        if (*(long *)(lVar6 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar6 + 0x58),uVar7,uRam0000000003d2fe18);
          return;
        }
      }
    }
    unaff_x30 = Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar8 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    auVar2 = auVar1;
  } while( true );
}



// ============================================================
// RVA: 0x14474d0 | Atlas.Stats.AchievementManager.SubmitAllRequiredAchievementsProgress
// ============================================================

void Atlas_Stats_AchievementManager__SubmitAllRequiredAchievementsProgress(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong unaff_x21;
  ulong uVar9;
  undefined8 unaff_x22;
  long lVar10;
  undefined1 *puVar11;
  code *pcVar12;
  ulong extraout_d0;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  lVar8 = 0x3eb4000;
  if ((bRam0000000003eb4718 & 1) == 0) {
    func_0x00f78a20(0x3d2fe18);
    bRam0000000003eb4718 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  uVar9 = unaff_x21;
  uVar5 = unaff_x22;
  if (lVar6 == 0) {
LAB_014475d0:
    unaff_x22 = uVar5;
    auVar14 = func_0x00f78af4();
    pcStack_48 = (code *)&Atlas_Stats_AchievementManager__OnMapPlayed;
    lStack_60 = lVar8;
    lStack_58 = param_1;
    puStack_50 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4719 & 1) == 0) {
      func_0x00f78a20(0x3d68a88);
      bRam0000000003eb4719 = 1;
    }
    uVar7 = /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(auVar14._8_8_,0xc,3,0);
    auVar13._8_8_ = /*STR('Achievement_38')*/ uRam0000000003d68a88;
    auVar13._0_8_ = auVar14._0_8_;
    plVar4 = (long *)&stack0xffffffffffffffc0;
    param_1 = lStack_58;
    lVar8 = lStack_60;
    puVar11 = puStack_50;
    pcVar12 = pcStack_48;
  }
  else {
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      lVar8 = 0;
      uVar9 = 0;
      uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      lVar10 = 0x20;
LAB_01447534:
      if (uVar9 < uVar7) {
        uVar7 = *(ulong *)(lVar6 + lVar8 + 0x20);
        if ((uVar7 & 0xff00000000) == 0) {
LAB_01447594:
          uVar9 = uVar9 + 1;
          uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
          lVar8 = lVar8 + 0x10;
          lVar10 = lVar10 + 0x48;
          if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar9)
          goto Atlas_Stats_AchievementManager__SubmitAchievementProgress;
          goto LAB_01447534;
        }
        lVar6 = *(long *)(param_1 + 0x50);
        uVar5 = 0x3d2fe18;
        if (lVar6 == 0) goto LAB_014475d0;
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_014475c4;
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_014475d0;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar7 & 0xffffffff,*(long *)(param_1 + 0x58),*(undefined8 *)(lVar6 + lVar10)
                        ,uRam0000000003d2fe18);
        lVar6 = *(long *)(param_1 + 0x10);
        uVar5 = 0x3d2fe18;
        if (lVar6 == 0) goto LAB_014475d0;
        if (uVar9 < *(uint *)(lVar6 + 0x18)) {
          *(undefined1 *)(lVar6 + lVar8 + 0x24) = 0;
          goto LAB_01447594;
        }
      }
LAB_014475c4:
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
      uVar5 = 0x3d2fe18;
      goto LAB_014475d0;
    }
Atlas_Stats_AchievementManager__SubmitAchievementProgress:
    lVar8 = 0x3eb4000;
    if ((bRam0000000003eb4729 & 1) == 0) {
      func_0x00f78a20(0x3d2fdf8);
      func_0x00f78a20(0x3d2fe10);
      func_0x00f78a20(0x3d5fa78);
      bRam0000000003eb4729 = 1;
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      iVar3 = /*System.Collections.Generic.Dictionary<string, float>$$get_Count*/ func_0x01ee059c(*(long *)(param_1 + 0x58),uRam0000000003d2fe10);
      if (iVar3 == 0) {
        return;
      }
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (plVar4 = *(long **)(*(long *)(param_1 + 0x40) + 0x30), plVar4 != (long *)0x0)) {
        lVar8 = 0x3d5f000;
        (**(code **)(*plVar4 + 0x6f8))
                  (&lStack_58,plVar4,*(undefined8 *)(param_1 + 0x58),
                   *(undefined8 *)(*plVar4 + 0x700));
        /*UniRx.Async.UniTaskExtensions$$Forget<Achievements>*/ func_0x01a3b8d8(&stack0xffffffffffffffc0,uRam0000000003d5fa78);
        if (*(long *)(param_1 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$Clear*/ func_0x01ee0a3c(*(long *)(param_1 + 0x58),uRam0000000003d2fdf8);
          return;
        }
      }
    }
    uVar5 = func_0x00f78af4();
    auVar13._8_8_ = extraout_x1;
    auVar13._0_8_ = uVar5;
    plVar4 = &lStack_60;
    uVar9 = unaff_x21;
    puVar11 = &stack0xfffffffffffffff0;
    pcVar12 = Atlas_Stats_AchievementManager__ProgressAchievement;
    uVar7 = extraout_d0;
  }
  do {
    lVar10 = auVar13._8_8_;
    lVar6 = auVar13._0_8_;
    *(undefined8 *)((long)plVar4 + -0x40) = unaff_d9;
    *(ulong *)((long)plVar4 + -0x38) = unaff_d8;
    *(undefined8 *)((long)plVar4 + -0x30) = unaff_x22;
    *(ulong *)((long)plVar4 + -0x28) = uVar9;
    *(long *)((long)plVar4 + -0x20) = lVar8;
    *(long *)((long)plVar4 + -0x18) = param_1;
    *(undefined1 **)((long)plVar4 + -0x10) = puVar11;
    *(code **)((long)plVar4 + -8) = pcVar12;
    puVar11 = (undefined1 *)((long)plVar4 + -0x10);
    unaff_d8 = uVar7 & 0xffffffff;
    uVar9 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)((long)plVar4 + -0x44) = 0;
    if (*(long *)(lVar6 + 0x60) != 0) {
      iVar3 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar6 + 0x60),lVar10,(undefined1 *)((long)plVar4 + -0x44),
                              uRam0000000003d2fe08);
      bVar1 = true;
      bVar2 = false;
      if (iVar3 != 0) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(*(float *)((long)plVar4 + -0x44)) && !NAN((float)uVar7)) {
          bVar1 = *(float *)((long)plVar4 + -0x44) < (float)uVar7;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        return;
      }
      if (*(long *)(lVar6 + 0x60) != 0) {
        uVar9 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar7 & 0xffffffff,*(long *)(lVar6 + 0x60),lVar10,uRam0000000003d2fe18);
        if (*(long *)(lVar6 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(uVar7 & 0xffffffff,*(long *)(lVar6 + 0x58),lVar10,uRam0000000003d2fe18);
          return;
        }
      }
    }
    auVar13 = func_0x00f78af4();
    uVar7 = 0x42c80000;
    plVar4 = (long *)((long)plVar4 + -0x50);
    param_1 = lVar10;
    lVar8 = lVar6;
    pcVar12 = Atlas_Stats_AchievementManager__UnlockAchievement;
  } while( true );
}



// ============================================================
// RVA: 0x14475d4 | Atlas.Stats.AchievementManager.OnMapPlayed
// ============================================================

void Atlas_Stats_AchievementManager__OnMapPlayed(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar8;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar9 [16];
  
  if ((bRam0000000003eb4719 & 1) == 0) {
    func_0x00f78a20(0x3d68a88);
    bRam0000000003eb4719 = 1;
  }
  fVar8 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(param_2,0xc,3,0);
  puVar2 = (undefined1 *)register0x00000008;
  uVar1 = /*STR('Achievement_38')*/ uRam0000000003d68a88;
  do {
    uVar7 = uVar1;
    lVar6 = param_1;
    *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
    *(ulong *)(puVar2 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    unaff_d8 = (ulong)(uint)fVar8;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)(puVar2 + -0x44) = 0;
    if (*(long *)(lVar6 + 0x60) != 0) {
      iVar5 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar6 + 0x60),uVar7,puVar2 + -0x44,uRam0000000003d2fe08);
      bVar3 = true;
      bVar4 = false;
      if (iVar5 != 0) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(*(float *)(puVar2 + -0x44)) && !NAN(fVar8)) {
          bVar3 = *(float *)(puVar2 + -0x44) < fVar8;
          bVar4 = false;
        }
      }
      if (bVar3 == bVar4) {
        return;
      }
      if (*(long *)(lVar6 + 0x60) != 0) {
        unaff_x21 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar8,*(long *)(lVar6 + 0x60),uVar7,uRam0000000003d2fe18);
        if (*(long *)(lVar6 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar8,*(long *)(lVar6 + 0x58),uVar7,uRam0000000003d2fe18);
          return;
        }
      }
    }
    unaff_x30 = Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar9 = func_0x00f78af4();
    fVar8 = 100.0;
    puVar2 = puVar2 + -0x50;
    param_1 = auVar9._0_8_;
    uVar1 = auVar9._8_8_;
    unaff_x19 = uVar7;
    unaff_x20 = lVar6;
  } while( true );
}



// ============================================================
// RVA: 0x1447640 | Atlas.Stats.AchievementManager.OnKartPlayed
// ============================================================

void Atlas_Stats_AchievementManager__OnKartPlayed(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar8;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar9 [16];
  
  if ((bRam0000000003eb471a & 1) == 0) {
    func_0x00f78a20(0x3d68a98);
    bRam0000000003eb471a = 1;
  }
  fVar8 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(param_2,0xc,3,0);
  puVar2 = (undefined1 *)register0x00000008;
  uVar1 = /*STR('Achievement_42')*/ uRam0000000003d68a98;
  do {
    uVar7 = uVar1;
    lVar6 = param_1;
    *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
    *(ulong *)(puVar2 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    unaff_d8 = (ulong)(uint)fVar8;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)(puVar2 + -0x44) = 0;
    if (*(long *)(lVar6 + 0x60) != 0) {
      iVar5 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar6 + 0x60),uVar7,puVar2 + -0x44,uRam0000000003d2fe08);
      bVar3 = true;
      bVar4 = false;
      if (iVar5 != 0) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(*(float *)(puVar2 + -0x44)) && !NAN(fVar8)) {
          bVar3 = *(float *)(puVar2 + -0x44) < fVar8;
          bVar4 = false;
        }
      }
      if (bVar3 == bVar4) {
        return;
      }
      if (*(long *)(lVar6 + 0x60) != 0) {
        unaff_x21 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar8,*(long *)(lVar6 + 0x60),uVar7,uRam0000000003d2fe18);
        if (*(long *)(lVar6 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar8,*(long *)(lVar6 + 0x58),uVar7,uRam0000000003d2fe18);
          return;
        }
      }
    }
    unaff_x30 = Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar9 = func_0x00f78af4();
    fVar8 = 100.0;
    puVar2 = puVar2 + -0x50;
    param_1 = auVar9._0_8_;
    uVar1 = auVar9._8_8_;
    unaff_x19 = uVar7;
    unaff_x20 = lVar6;
  } while( true );
}



// ============================================================
// RVA: 0x14476ac | Atlas.Stats.AchievementManager.OnCharacterPlayed
// ============================================================

/* WARNING: Possible PIC construction at 0x01447978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0144797c) */
/* WARNING: Removing unreachable block (ram,0x01447b34) */
/* WARNING: Removing unreachable block (ram,0x01447b7c) */
/* WARNING: Removing unreachable block (ram,0x01447ba8) */
/* WARNING: Removing unreachable block (ram,0x014473ec) */
/* WARNING: Removing unreachable block (ram,0x0144741c) */
/* WARNING: Removing unreachable block (ram,0x0144743c) */
/* WARNING: Removing unreachable block (ram,0x01447448) */
/* WARNING: Removing unreachable block (ram,0x01447468) */
/* WARNING: Removing unreachable block (ram,0x0144746c) */
/* WARNING: Removing unreachable block (ram,0x01447470) */
/* WARNING: Removing unreachable block (ram,0x01447478) */
/* WARNING: Removing unreachable block (ram,0x014474c0) */
/* WARNING: Removing unreachable block (ram,0x01447498) */
/* WARNING: Removing unreachable block (ram,0x014474a8) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Stats_AchievementManager__OnCharacterPlayed
                (undefined8 param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int extraout_w1;
  long extraout_x1;
  long extraout_x1_00;
  int iVar7;
  long lVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long alStack_140 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  iVar7 = 0x3eb4000;
  lVar5 = param_3;
  if ((bRam0000000003eb471b & 1) == 0) {
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4b0);
    func_0x00f78a20(0x3d3a4b8);
    func_0x00f78a20(0x3d68a90);
    bRam0000000003eb471b = 1;
  }
  lStack_88 = 0;
  if (param_2 != 0) {
    unaff_x23 = (undefined8 *)0x3d68a90;
    /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(&uStack_a0,param_2,uRam0000000003d3a4b8);
    iVar7 = 0;
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    uStack_70 = uStack_90;
LAB_0144779c:
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(&uStack_80,uRam0000000003d32418);
      if ((uVar3 & 1) == 0) goto LAB_01447800;
      if (param_3 == 0) {
        func_0x00f78af4();
        goto code_r0x01447860;
      }
      uVar3 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(param_3,uStack_70,&lStack_88,uRam0000000003d574f0);
      if ((uVar3 & 1) != 0) {
        if (lStack_88 == 0) {
          func_0x00f78af4();
code_r0x01447860:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1447864);
          (*pcVar1)();
        }
        uVar3 = Atlas_Definitions_CharacterDefinition__IsSkin(lStack_88,0);
        if ((uVar3 & 1) != 0) {
          if (lStack_88 == 0) {
            func_0x00f78af4();
            goto code_r0x01447860;
          }
          uVar3 = /*System.Collections.Generic.List<DefinitionID>$$Contains*/ func_0x023c6130(param_2,*(undefined8 *)(lStack_88 + 0x70),uRam0000000003d3a4b0);
          if ((uVar3 & 1) != 0) goto LAB_0144779c;
        }
        iVar7 = iVar7 + 1;
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar8 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_80,*unaff_x24);
    if (lVar8 == 0) goto code_r0x0144780c;
    func_0x00f78ac0(lVar8,0);
  }
  __Unwind_Resume();
  lVar8 = lVar5;
  if ((bRam0000000003eb471c & 1) == 0) {
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb471c = 1;
  }
  if (param_4 != 0) {
    lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(param_4,lVar5,uRam0000000003d57270);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = 0;
    uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (lVar5 != 0) {
      uVar3 = Atlas_Definitions_CharacterDefinition__IsSkin(lVar5,0);
      lVar5 = extraout_x1;
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      goto code_r0x014479b0;
    }
  }
  param_4 = lVar8;
  func_0x00f78af4();
  lVar5 = extraout_x1_00;
code_r0x014479b0:
  if ((bRam0000000003eb4727 & 1) == 0) {
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4b8);
    bRam0000000003eb4727 = 1;
  }
  alStack_140[1] = 0;
  alStack_140[2] = 0;
  alStack_140[3] = 0;
  alStack_140[0] = 0;
  if (lVar5 == 0) {
    func_0x00f78af4();
code_r0x01447ae4:
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(alStack_140 + 1,lVar5,uRam0000000003d3a4b8);
    uVar3 = 0;
    while( true ) {
      uVar6 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(alStack_140 + 1,uRam0000000003d32418);
      if ((uVar6 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(alStack_140 + 1,uRam0000000003d32410);
        return uVar3;
      }
      if (param_4 == 0) break;
      uVar6 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(param_4,alStack_140[3],alStack_140,uRam0000000003d574f0);
      if ((uVar6 & 1) != 0) {
        if (alStack_140[0] == 0) goto code_r0x01447ae4;
        uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(alStack_140[0] + 0x70),0);
        uVar3 = (ulong)((int)uVar3 + (uVar2 ^ 1));
      }
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1447aec);
  (*pcVar1)();
LAB_01447800:
  /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(&uStack_80,uRam0000000003d32410);
code_r0x0144780c:
  /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(iVar7,0x14,3,0);
  uVar3 = Atlas_Stats_AchievementManager__ProgressAchievement(param_1,*unaff_x23);
  return uVar3;
}



// ============================================================
// RVA: 0x14478b8 | Atlas.Stats.AchievementManager.OnPlayerCharacterWinRegistered
// ============================================================

/* WARNING: Possible PIC construction at 0x01447978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0144797c) */
/* WARNING: Removing unreachable block (ram,0x01447b34) */
/* WARNING: Removing unreachable block (ram,0x01447b7c) */
/* WARNING: Removing unreachable block (ram,0x01447ba8) */
/* WARNING: Removing unreachable block (ram,0x014473ec) */
/* WARNING: Removing unreachable block (ram,0x0144741c) */
/* WARNING: Removing unreachable block (ram,0x0144743c) */
/* WARNING: Removing unreachable block (ram,0x01447448) */
/* WARNING: Removing unreachable block (ram,0x01447468) */
/* WARNING: Removing unreachable block (ram,0x0144746c) */
/* WARNING: Removing unreachable block (ram,0x01447470) */
/* WARNING: Removing unreachable block (ram,0x01447478) */
/* WARNING: Removing unreachable block (ram,0x014474c0) */
/* WARNING: Removing unreachable block (ram,0x01447498) */
/* WARNING: Removing unreachable block (ram,0x014474a8) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_Stats_AchievementManager__OnPlayerCharacterWinRegistered
                (undefined8 param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x1;
  long lVar6;
  long alStack_a0 [4];
  
  lVar6 = param_3;
  if ((bRam0000000003eb471c & 1) == 0) {
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb471c = 1;
  }
  if (param_4 != 0) {
    lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(param_4,param_3,uRam0000000003d57270);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = 0;
    uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (lVar3 != 0) {
      uVar4 = Atlas_Definitions_CharacterDefinition__IsSkin(lVar3,0);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      goto code_r0x014479b0;
    }
  }
  param_4 = lVar6;
  func_0x00f78af4();
  param_2 = extraout_x1;
code_r0x014479b0:
  if ((bRam0000000003eb4727 & 1) == 0) {
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4b8);
    bRam0000000003eb4727 = 1;
  }
  alStack_a0[1] = 0;
  alStack_a0[2] = 0;
  alStack_a0[3] = 0;
  alStack_a0[0] = 0;
  if (param_2 == 0) {
    func_0x00f78af4();
code_r0x01447ae4:
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(alStack_a0 + 1,param_2,uRam0000000003d3a4b8);
    uVar4 = 0;
    while( true ) {
      uVar5 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(alStack_a0 + 1,uRam0000000003d32418);
      if ((uVar5 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(alStack_a0 + 1,uRam0000000003d32410);
        return uVar4;
      }
      if (param_4 == 0) break;
      uVar5 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(param_4,alStack_a0[3],alStack_a0,uRam0000000003d574f0);
      if ((uVar5 & 1) != 0) {
        if (alStack_a0[0] == 0) goto code_r0x01447ae4;
        uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(alStack_a0[0] + 0x70),0);
        uVar4 = (ulong)((int)uVar4 + (uVar2 ^ 1));
      }
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1447aec);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14479b0 | Atlas.Stats.AchievementManager.GetNumberOfSkinWins
// ============================================================

/* WARNING: Type propagation algorithm not settling */

int Atlas_Stats_AchievementManager__GetNumberOfSkinWins
              (undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long alStack_60 [4];
  
  if ((bRam0000000003eb4727 & 1) == 0) {
    func_0x00f78a20(0x3d32410);
    func_0x00f78a20(0x3d32418);
    func_0x00f78a20(0x3d32420);
    func_0x00f78a20(0x3d574f0);
    func_0x00f78a20(0x3d3a4b8);
    bRam0000000003eb4727 = 1;
  }
  alStack_60[1] = 0;
  alStack_60[2] = 0;
  alStack_60[3] = 0;
  alStack_60[0] = 0;
  if (param_2 == 0) {
    func_0x00f78af4();
LAB_01447ae4:
    func_0x00f78af4();
  }
  else {
    /*System.Collections.Generic.List<DefinitionID>$$GetEnumerator*/ func_0x023c68bc(alStack_60 + 1,param_2,uRam0000000003d3a4b8);
    iVar4 = 0;
    while( true ) {
      uVar3 = /*System.Collections.Generic.List.Enumerator<DefinitionID>$$MoveNext*/ func_0x01f66780(alStack_60 + 1,uRam0000000003d32418);
      if ((uVar3 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<DefinitionID>$$Dispose*/ func_0x01f6677c(alStack_60 + 1,uRam0000000003d32410);
        return iVar4;
      }
      if (param_3 == 0) break;
      uVar3 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(param_3,alStack_60[3],alStack_60,uRam0000000003d574f0);
      if ((uVar3 & 1) != 0) {
        if (alStack_60[0] == 0) goto LAB_01447ae4;
        uVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(alStack_60[0] + 0x70),0);
        iVar4 = iVar4 + (uVar2 ^ 1);
      }
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1447aec);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1447b34 | Atlas.Stats.AchievementManager.UpdateSkinWinsProgress
// ============================================================

void Atlas_Stats_AchievementManager__UpdateSkinWinsProgress(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar11 [16];
  
  if ((bRam0000000003eb4725 & 1) == 0) {
    func_0x00f78a20(0x3d68a78);
    func_0x00f78a20(0x3d68a80);
    func_0x00f78a20(0x3d68a70);
    bRam0000000003eb4725 = 1;
  }
  uVar8 = /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(param_2,1,3,0);
  uVar9 = /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(param_2,10,3,0);
  fVar10 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(param_2,0x14,3,0);
  Atlas_Stats_AchievementManager__ProgressAchievement(uVar8,param_1,/*STR('Achievement_30')*/ uRam0000000003d68a70);
  Atlas_Stats_AchievementManager__ProgressAchievement(uVar9,param_1,/*STR('Achievement_31')*/ uRam0000000003d68a78);
  puVar2 = (undefined1 *)register0x00000008;
  uVar1 = /*STR('Achievement_32')*/ uRam0000000003d68a80;
  do {
    uVar7 = uVar1;
    lVar6 = param_1;
    *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
    *(ulong *)(puVar2 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    unaff_d8 = (ulong)(uint)fVar10;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)(puVar2 + -0x44) = 0;
    if (*(long *)(lVar6 + 0x60) != 0) {
      iVar5 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar6 + 0x60),uVar7,puVar2 + -0x44,uRam0000000003d2fe08);
      bVar3 = true;
      bVar4 = false;
      if (iVar5 != 0) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(*(float *)(puVar2 + -0x44)) && !NAN(fVar10)) {
          bVar3 = *(float *)(puVar2 + -0x44) < fVar10;
          bVar4 = false;
        }
      }
      if (bVar3 == bVar4) {
        return;
      }
      if (*(long *)(lVar6 + 0x60) != 0) {
        unaff_x21 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar10,*(long *)(lVar6 + 0x60),uVar7,uRam0000000003d2fe18);
        if (*(long *)(lVar6 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar10,*(long *)(lVar6 + 0x58),uVar7,uRam0000000003d2fe18);
          return;
        }
      }
    }
    unaff_x30 = Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar11 = func_0x00f78af4();
    fVar10 = 100.0;
    puVar2 = puVar2 + -0x50;
    param_1 = auVar11._0_8_;
    uVar1 = auVar11._8_8_;
    unaff_x19 = uVar7;
    unaff_x20 = lVar6;
  } while( true );
}



// ============================================================
// RVA: 0x1447c38 | Atlas.Stats.AchievementManager.OnArcadeEventEnded
// ============================================================

long Atlas_Stats_AchievementManager__OnArcadeEventEnded
               (long param_1,int param_2,ulong param_3,long param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  int extraout_w1;
  int iVar6;
  undefined1 auStack_5c [4];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  lVar2 = param_1;
  if ((bRam0000000003eb471d & 1) == 0) {
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d2dc70);
    func_0x00f78a20(0x3d32138);
    func_0x00f78a20(0x3d32140);
    func_0x00f78a20(0x3d32148);
    func_0x00f78a20(0x3d57328);
    func_0x00f78a20(0x3d39cf8);
    func_0x00f78a20(0x3d68ab0);
    lVar2 = func_0x00f78a20(0x3d68ab8);
    bRam0000000003eb471d = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  if ((param_3 & 1) == 0) {
    if (param_2 == 0) {
      Atlas_Stats_AchievementManager__ProgressAchievement(0x42c80000,param_1,/*STR('Achievement_73')*/ uRam0000000003d68ab8);
    }
    if (((param_4 == 0) || (*(long *)(param_4 + 0x10) == 0)) ||
       (lVar2 = /*Core.Definitions.GameDefinitions$$GetDefinitionList<UsableDefinition>*/ func_0x0185c554(*(long *)(param_4 + 0x10),uRam0000000003d57328), lVar2 == 0)) {
      func_0x00f78af4();
      if (extraout_w1 != 1) {
code_r0x01447e6c:
        lVar2 = __Unwind_Resume();
        return lVar2 + 0x20;
      }
      plVar5 = (long *)___cxa_begin_catch();
      lVar2 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d32138);
      if (lVar2 != 0) {
        func_0x00f78ac0(lVar2,0);
        goto code_r0x01447e6c;
      }
    }
    else {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,lVar2,uRam0000000003d39cf8);
      do {
        uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d32140);
        plVar5 = plStack_48;
        if ((uVar3 & 1) == 0) {
          iVar6 = 100;
          goto LAB_01447dc0;
        }
        if (plStack_48 == (long *)0x0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1447e20);
          (*pcVar1)();
        }
        uVar4 = (**(code **)(*plStack_48 + 0x188))(plStack_48,*(undefined8 *)(*plStack_48 + 400));
        lVar2 = plVar5[4];
        if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = /*Atlas.Arcade.ArcadeSave$$TryGetResult*/ func_0x01447e78(uVar4,lVar2,param_5,auStack_5c);
      } while ((uVar3 & 1) != 0);
      iVar6 = 0x6f;
LAB_01447dc0:
      lVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d32138);
      if (iVar6 == 0x6f) {
        return lVar2;
      }
    }
    lVar2 = Atlas_Stats_AchievementManager__ProgressAchievement
                      (0x42c80000,param_1,/*STR('Achievement_72')*/ uRam0000000003d68ab0);
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1447f18 | Atlas.Stats.AchievementManager.UpdateUnlockedCampaigns
// ============================================================

void Atlas_Stats_AchievementManager__UpdateUnlockedCampaigns(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000003eb471e & 1) == 0) {
    func_0x00f78a20(0x3d69c10);
    func_0x00f78a20(0x3d68a28);
    func_0x00f78a20(0x3d69c28);
    func_0x00f78a20(0x3d68a38);
    bRam0000000003eb471e = 1;
  }
  if (param_2 == 0) {
    return;
  }
  uVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_2,/*STR('Campaign_Medium')*/ uRam0000000003d69c28,0);
  if ((uVar7 & 1) == 0) {
    iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_2,/*STR('Campaign_Hard')*/ uRam0000000003d69c10,0);
    if (iVar5 == 0) {
      return;
    }
    puVar9 = (undefined8 *)0x3d68a38;
  }
  else {
    puVar9 = (undefined8 *)0x3d68a28;
  }
  puVar2 = (undefined1 *)register0x00000008;
  uVar1 = *puVar9;
  do {
    uVar8 = uVar1;
    lVar6 = param_1;
    *(undefined8 *)(puVar2 + -0x40) = unaff_d9;
    *(undefined8 *)(puVar2 + -0x38) = unaff_d8;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    unaff_d8 = 0x42c80000;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)(puVar2 + -0x44) = 0;
    if (*(long *)(lVar6 + 0x60) != 0) {
      iVar5 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar6 + 0x60),uVar8,puVar2 + -0x44,uRam0000000003d2fe08);
      bVar3 = true;
      bVar4 = false;
      if (iVar5 != 0) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(*(float *)(puVar2 + -0x44))) {
          bVar3 = *(float *)(puVar2 + -0x44) < 100.0;
          bVar4 = false;
        }
      }
      if (bVar3 == bVar4) {
        return;
      }
      if (*(long *)(lVar6 + 0x60) != 0) {
        unaff_x21 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar6 + 0x60),uVar8,uRam0000000003d2fe18);
        if (*(long *)(lVar6 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar6 + 0x58),uVar8,uRam0000000003d2fe18);
          return;
        }
      }
    }
    unaff_x30 = Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar10 = func_0x00f78af4();
    puVar2 = puVar2 + -0x50;
    param_1 = auVar10._0_8_;
    uVar1 = auVar10._8_8_;
    unaff_x19 = uVar8;
    unaff_x20 = lVar6;
  } while( true );
}



// ============================================================
// RVA: 0x1447ff4 | Atlas.Stats.AchievementManager.UpdateCampaignChallengesCompleted
// ============================================================

void Atlas_Stats_AchievementManager__UpdateCampaignChallengesCompleted
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar12;
  undefined8 *puVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***unaff_x29;
  code *unaff_x30;
  float fVar14;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 **ppuStack_60;
  code *pcStack_58;
  long lVar11;
  
  auVar15._8_8_ = unaff_x20;
  auVar15._0_8_ = unaff_x19;
  lVar12 = param_3;
  if ((bRam0000000003eb471f & 1) == 0) {
    func_0x00f78a20(0x3d57260);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d257d8);
    func_0x00f78a20(0x3d69c30);
    func_0x00f78a20(0x3d68aa0);
    func_0x00f78a20(0x3d68a48);
    func_0x00f78a20(0x3d69c00);
    func_0x00f78a20(0x3d69c10);
    func_0x00f78a20(0x3d68aa8);
    func_0x00f78a20(0x3d69c28);
    func_0x00f78a20(0x3d68a40);
    func_0x00f78a20(0x3d69c38);
    func_0x00f78a20(0x3d69c20);
    func_0x00f78a20(0x3d68a58);
    func_0x00f78a20(0x3d68a50);
    bRam0000000003eb471f = 1;
  }
  if ((param_3 == 0) || (*(long *)(param_3 + 0x10) == 0)) {
    auVar16 = func_0x00f78af4();
    lVar11 = auVar16._0_8_;
    pcStack_58 = (code *)&Atlas_Stats_AchievementManager__CheckDailyChallengeBespokeAchievements;
    uStack_80 = param_4;
    lStack_78 = param_3;
    lStack_70 = param_2;
    lStack_68 = param_1;
    ppuStack_60 = (undefined8 **)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4720 & 1) == 0) {
      func_0x00f78a20(0x3d68a68);
      func_0x00f78a20(0x3d68a60);
      bRam0000000003eb4720 = 1;
    }
    if (auVar16._8_4_ != 0) {
      Atlas_Stats_AchievementManager__ProgressAchievement(0x42c80000,lVar11,/*STR('Achievement_18')*/ uRam0000000003d68a60);
    }
    auVar17._8_8_ = lStack_a8;
    auVar17._0_8_ = lStack_98;
    auVar15._8_8_ = lStack_70;
    auVar15._0_8_ = lStack_68;
    if (*(long *)(lVar11 + 0x48) == 0) {
      auVar15 = func_0x00f78af4();
      param_1 = auVar15._0_8_;
      uStack_b0 = 0x3eb4000;
      pcStack_88 = (code *)&Atlas_Stats_AchievementManager__OnClamHit;
      unaff_x29 = &ppuStack_90;
      lStack_a0 = lVar12;
      ppuStack_90 = &ppuStack_60;
      if ((bRam0000000003eb4721 & 1) == 0) {
        lStack_a8 = auVar16._8_8_;
        lStack_98 = lVar11;
        func_0x00f78a20(0x3d68a30);
        auVar16._8_8_ = lStack_a8;
        auVar16._0_8_ = lStack_98;
        bRam0000000003eb4721 = 1;
      }
      lStack_a8 = auVar16._8_8_;
      lStack_98 = auVar16._0_8_;
      auVar2._8_8_ = lStack_a0;
      auVar2._0_8_ = lStack_98;
      if (*(long *)(param_1 + 0x48) == 0) {
        auVar17 = func_0x00f78af4();
        param_1 = auVar17._0_8_;
        if ((bRam0000000003eb4722 & 1) == 0) {
          func_0x00f78a20(0x3d22e88);
          func_0x00f78a20(0x3d68ac0);
          bRam0000000003eb4722 = 1;
        }
        iVar6 = 0;
        while( true ) {
          if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar16._8_8_ = lStack_a8;
          auVar16._0_8_ = lStack_98;
          if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar6) break;
          if (auVar17._8_8_ == 0) {
            func_0x00f78af4();
            return;
          }
          iVar7 = Atlas_League_LeaguePlayerSave__GetPlayerDayPlacement(auVar17._8_8_,iVar6,0);
          iVar6 = iVar6 + 1;
          if (0xb < iVar7) {
            return;
          }
        }
        fVar14 = 100.0;
        unaff_x30 = (code *)&Atlas_Stats_AchievementManager__OnLeagueEventPlacementUpdate;
        unaff_x22 = 0x3eb4000;
        unaff_x21 = 0x3eb4000;
        puVar3 = &uStack_b0;
        uVar8 = /*STR('Achievement_74')*/ uRam0000000003d68ac0;
      }
      else {
        if (auVar15._8_4_ < *(int *)(*(long *)(param_1 + 0x48) + 0x20)) {
          return;
        }
        fVar14 = 100.0;
        puVar3 = &uStack_80;
        uVar8 = /*STR('Achievement_12')*/ uRam0000000003d68a30;
        unaff_x21 = lStack_a8;
        unaff_x22 = uStack_b0;
        unaff_x29 = (undefined8 ***)ppuStack_90;
        unaff_x30 = pcStack_88;
        auVar15 = auVar2;
      }
    }
    else {
      if ((int)lVar12 < *(int *)(*(long *)(lVar11 + 0x48) + 0x24)) {
        return;
      }
      fVar14 = 100.0;
      puVar3 = (undefined8 *)&stack0xffffffffffffffb0;
      param_1 = lVar11;
      uVar8 = /*STR('Achievement_20')*/ uRam0000000003d68a68;
      unaff_x21 = lStack_78;
      unaff_x22 = uStack_80;
      unaff_x29 = (undefined8 ***)ppuStack_60;
      unaff_x30 = pcStack_58;
      auVar16 = auVar17;
    }
code_r0x014473ec:
    do {
      lStack_a8 = auVar16._8_8_;
      lStack_98 = auVar16._0_8_;
      auVar1._8_8_ = param_1;
      auVar1._0_8_ = uVar8;
      *(undefined8 *)((long)puVar3 + -0x40) = unaff_d9;
      *(ulong *)((long)puVar3 + -0x38) = unaff_d8;
      *(undefined8 *)((long)puVar3 + -0x30) = unaff_x22;
      *(long *)((long)puVar3 + -0x28) = unaff_x21;
      *(long *)((long)puVar3 + -0x20) = auVar15._8_8_;
      *(long *)((long)puVar3 + -0x18) = auVar15._0_8_;
      *(undefined8 ****)((long)puVar3 + -0x10) = unaff_x29;
      *(code **)((long)puVar3 + -8) = unaff_x30;
      unaff_x29 = (undefined8 ***)((long)puVar3 + -0x10);
      unaff_d8 = (ulong)(uint)fVar14;
      unaff_x21 = 0x3eb4000;
      if ((bRam0000000003eb4717 & 1) == 0) {
        func_0x00f78a20(0x3d2fe08);
        func_0x00f78a20(0x3d2fe18);
        auVar16._8_8_ = lStack_a8;
        auVar16._0_8_ = lStack_98;
        bRam0000000003eb4717 = 1;
      }
      lStack_a8 = auVar16._8_8_;
      lStack_98 = auVar16._0_8_;
      *(undefined4 *)((long)puVar3 + -0x44) = 0;
      if (*(long *)(param_1 + 0x60) != 0) {
        iVar6 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(param_1 + 0x60),uVar8,(undefined1 *)((long)puVar3 + -0x44)
                                ,uRam0000000003d2fe08);
        auVar16._8_8_ = lStack_a8;
        auVar16._0_8_ = lStack_98;
        bVar4 = true;
        bVar5 = false;
        if (iVar6 != 0) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(*(float *)((long)puVar3 + -0x44)) && !NAN(fVar14)) {
            bVar4 = *(float *)((long)puVar3 + -0x44) < fVar14;
            bVar5 = false;
          }
        }
        if (bVar4 == bVar5) {
          return;
        }
        if (*(long *)(param_1 + 0x60) != 0) {
          unaff_x21 = 0x3d2fe18;
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar14,*(long *)(param_1 + 0x60),uVar8,uRam0000000003d2fe18);
          auVar16._8_8_ = lStack_a8;
          auVar16._0_8_ = lStack_98;
          if (*(long *)(param_1 + 0x58) != 0) {
            /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(fVar14,*(long *)(param_1 + 0x58),uVar8,uRam0000000003d2fe18);
            return;
          }
        }
      }
      lStack_a8 = auVar16._8_8_;
      lStack_98 = auVar16._0_8_;
      unaff_x30 = Atlas_Stats_AchievementManager__UnlockAchievement;
      auVar15 = func_0x00f78af4();
      auVar16._8_8_ = lStack_a8;
      auVar16._0_8_ = lStack_98;
      fVar14 = 100.0;
      puVar3 = (undefined8 *)((long)puVar3 + -0x50);
      param_1 = auVar15._0_8_;
      uVar8 = auVar15._8_8_;
      auVar15 = auVar1;
    } while( true );
  }
  uVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(*(long *)(param_3 + 0x10),param_2,uRam0000000003d57260);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
  if (iVar6 != 0) {
    if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCountForCampaign*/ func_0x015210cc(uVar8,param_4,0);
    uVar9 = Atlas_Definitions_AtlasDefinitions__GetChallengeCountForCampaign(param_3,param_2,0);
    fVar14 = (float)/*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(uVar8,uVar9,3,0);
    if (param_2 != 0) {
      uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_2,/*STR('Campaign_Prologue')*/ uRam0000000003d69c30,0);
      if ((uVar10 & 1) == 0) {
        uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_2,/*STR('Campaign_Easy')*/ uRam0000000003d69c00,0);
        if ((uVar10 & 1) == 0) {
          uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_2,/*STR('Campaign_Medium')*/ uRam0000000003d69c28,0);
          if ((uVar10 & 1) == 0) {
            uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_2,/*STR('Campaign_Hard')*/ uRam0000000003d69c10,0);
            if ((uVar10 & 1) == 0) {
              uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_2,/*STR('Campaign_Series')*/ uRam0000000003d69c38,0);
              if ((uVar10 & 1) == 0) {
                iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_2,/*STR('Campaign_Legend')*/ uRam0000000003d69c20,0);
                if (iVar6 == 0) {
                  return;
                }
                puVar13 = (undefined8 *)0x3d68aa0;
              }
              else {
                puVar13 = (undefined8 *)0x3d68aa8;
              }
            }
            else {
              puVar13 = (undefined8 *)0x3d68a58;
            }
          }
          else {
            puVar13 = (undefined8 *)0x3d68a50;
          }
        }
        else {
          puVar13 = (undefined8 *)0x3d68a48;
        }
      }
      else {
        puVar13 = (undefined8 *)0x3d68a40;
      }
      auVar16._8_8_ = lStack_a8;
      auVar16._0_8_ = lStack_98;
      puVar3 = (undefined8 *)register0x00000008;
      uVar8 = *puVar13;
      goto code_r0x014473ec;
    }
  }
  return;
}



// ============================================================
// RVA: 0x14482c8 | Atlas.Stats.AchievementManager.CheckDailyChallengeBespokeAchievements
// ============================================================

void Atlas_Stats_AchievementManager__CheckDailyChallengeBespokeAchievements
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *****unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 ****ppppuStack_40;
  code *pcStack_38;
  
  auVar8._8_8_ = unaff_x20;
  auVar8._0_8_ = unaff_x19;
  if ((bRam0000000003eb4720 & 1) == 0) {
    func_0x00f78a20(0x3d68a68);
    func_0x00f78a20(0x3d68a60);
    bRam0000000003eb4720 = 1;
  }
  if ((int)param_2 != 0) {
    Atlas_Stats_AchievementManager__ProgressAchievement(0x42c80000,param_1,/*STR('Achievement_18')*/ uRam0000000003d68a60);
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    auVar8 = func_0x00f78af4();
    uStack_60 = 0x3eb4000;
    pcStack_38 = (code *)&Atlas_Stats_AchievementManager__OnClamHit;
    unaff_x29 = &ppppuStack_40;
    uStack_58 = param_2;
    uStack_50 = param_3;
    lStack_48 = param_1;
    ppppuStack_40 = (undefined8 ****)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4721 & 1) == 0) {
      func_0x00f78a20(0x3d68a30);
      bRam0000000003eb4721 = 1;
    }
    auVar9._8_8_ = uStack_50;
    auVar9._0_8_ = lStack_48;
    lVar7 = *(long *)(auVar8._0_8_ + 0x48);
    if (lVar7 == 0) {
      auVar9 = func_0x00f78af4();
      param_1 = auVar9._0_8_;
      if ((bRam0000000003eb4722 & 1) == 0) {
        func_0x00f78a20(0x3d22e88);
        func_0x00f78a20(0x3d68ac0);
        bRam0000000003eb4722 = 1;
      }
      iVar4 = 0;
      while( true ) {
        if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar4) break;
        if (auVar9._8_8_ == 0) {
          func_0x00f78af4();
          return;
        }
        iVar5 = Atlas_League_LeaguePlayerSave__GetPlayerDayPlacement(auVar9._8_8_,iVar4,0);
        iVar4 = iVar4 + 1;
        if (0xb < iVar5) {
          return;
        }
      }
      unaff_x30 = (code *)&Atlas_Stats_AchievementManager__OnLeagueEventPlacementUpdate;
      unaff_x22 = 0x3eb4000;
      unaff_x21 = 0x3eb4000;
      register0x00000008 = (BADSPACEBASE *)&uStack_60;
      uVar6 = /*STR('Achievement_74')*/ uRam0000000003d68ac0;
    }
    else {
      if (auVar8._8_4_ < *(int *)(lVar7 + 0x20)) {
        return;
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      param_1 = auVar8._0_8_;
      uVar6 = /*STR('Achievement_12')*/ uRam0000000003d68a30;
      unaff_x21 = uStack_58;
      unaff_x22 = uStack_60;
      unaff_x29 = (undefined8 *****)ppppuStack_40;
      unaff_x30 = pcStack_38;
      auVar8 = auVar9;
    }
  }
  else {
    uVar6 = /*STR('Achievement_20')*/ uRam0000000003d68a68;
    if ((int)param_3 < *(int *)(*(long *)(param_1 + 0x48) + 0x24)) {
      return;
    }
  }
  do {
    auVar1._8_8_ = param_1;
    auVar1._0_8_ = uVar6;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar8._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar8._0_8_;
    *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined8 *****)((long)register0x00000008 + -0x10);
    unaff_d8 = 0x42c80000;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)((long)register0x00000008 + -0x44) = 0;
    if (*(long *)(param_1 + 0x60) != 0) {
      iVar4 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(param_1 + 0x60),uVar6,
                              (undefined1 *)((long)register0x00000008 + -0x44),uRam0000000003d2fe08)
      ;
      bVar2 = true;
      bVar3 = false;
      if (iVar4 != 0) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(*(float *)((long)register0x00000008 + -0x44))) {
          bVar2 = *(float *)((long)register0x00000008 + -0x44) < 100.0;
          bVar3 = false;
        }
      }
      if (bVar2 == bVar3) {
        return;
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        unaff_x21 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(param_1 + 0x60),uVar6,uRam0000000003d2fe18);
        if (*(long *)(param_1 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(param_1 + 0x58),uVar6,uRam0000000003d2fe18);
          return;
        }
      }
    }
    auVar8 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_1 = auVar8._0_8_;
    uVar6 = auVar8._8_8_;
    unaff_x30 = Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar8 = auVar1;
  } while( true );
}



// ============================================================
// RVA: 0x1448380 | Atlas.Stats.AchievementManager.OnClamHit
// ============================================================

void Atlas_Stats_AchievementManager__OnClamHit(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar10 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4721 & 1) == 0) {
    func_0x00f78a20(0x3d68a30);
    bRam0000000003eb4721 = 1;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    auVar10 = func_0x00f78af4();
    if ((bRam0000000003eb4722 & 1) == 0) {
      func_0x00f78a20(0x3d22e88);
      func_0x00f78a20(0x3d68ac0);
      bRam0000000003eb4722 = 1;
    }
    iVar6 = 0;
    while( true ) {
      if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar6) break;
      if (auVar10._8_8_ == 0) {
        func_0x00f78af4();
        return;
      }
      iVar7 = Atlas_League_LeaguePlayerSave__GetPlayerDayPlacement(auVar10._8_8_,iVar6,0);
      iVar6 = iVar6 + 1;
      if (0xb < iVar7) {
        return;
      }
    }
    unaff_x30 = (code *)&Atlas_Stats_AchievementManager__OnLeagueEventPlacementUpdate;
    unaff_x21 = 0x3eb4000;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    lVar2 = auVar10._0_8_;
    lVar3 = /*STR('Achievement_74')*/ lRam0000000003d68ac0;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
  }
  else {
    lVar2 = param_1;
    lVar3 = /*STR('Achievement_12')*/ lRam0000000003d68a30;
    if ((int)param_2 < *(int *)(*(long *)(param_1 + 0x48) + 0x20)) {
      return;
    }
  }
  do {
    lVar9 = lVar3;
    lVar8 = lVar2;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_d8 = 0x42c80000;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4717 & 1) == 0) {
      func_0x00f78a20(0x3d2fe08);
      func_0x00f78a20(0x3d2fe18);
      bRam0000000003eb4717 = 1;
    }
    *(undefined4 *)((long)register0x00000008 + -0x44) = 0;
    if (*(long *)(lVar8 + 0x60) != 0) {
      iVar6 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar8 + 0x60),lVar9,
                              (undefined1 *)((long)register0x00000008 + -0x44),uRam0000000003d2fe08)
      ;
      bVar4 = true;
      bVar5 = false;
      if (iVar6 != 0) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(*(float *)((long)register0x00000008 + -0x44))) {
          bVar4 = *(float *)((long)register0x00000008 + -0x44) < 100.0;
          bVar5 = false;
        }
      }
      if (bVar4 == bVar5) {
        return;
      }
      if (*(long *)(lVar8 + 0x60) != 0) {
        unaff_x21 = 0x3d2fe18;
        /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar8 + 0x60),lVar9,uRam0000000003d2fe18);
        if (*(long *)(lVar8 + 0x58) != 0) {
          /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar8 + 0x58),lVar9,uRam0000000003d2fe18);
          return;
        }
      }
    }
    unaff_x30 = Atlas_Stats_AchievementManager__UnlockAchievement;
    auVar10 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    lVar2 = auVar10._0_8_;
    lVar3 = auVar10._8_8_;
    unaff_x19 = lVar9;
    unaff_x20 = lVar8;
  } while( true );
}



// ============================================================
// RVA: 0x1448408 | Atlas.Stats.AchievementManager.OnLeagueEventPlacementUpdate
// ============================================================

void Atlas_Stats_AchievementManager__OnLeagueEventPlacementUpdate(long param_1,long param_2)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb4722 & 1) == 0) {
    func_0x00f78a20(0x3d22e88);
    func_0x00f78a20(0x3d68ac0);
    bRam0000000003eb4722 = 1;
  }
  iVar4 = 0;
  do {
    if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*STR('Achievement_74')*/ uRam0000000003d68ac0;
    if (*(int *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 8) <= iVar4) {
      do {
        uVar7 = uVar1;
        lVar6 = param_1;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        unaff_d8 = 0x42c80000;
        unaff_x21 = 0x3eb4000;
        if ((bRam0000000003eb4717 & 1) == 0) {
          func_0x00f78a20(0x3d2fe08);
          func_0x00f78a20(0x3d2fe18);
          bRam0000000003eb4717 = 1;
        }
        *(undefined4 *)((long)register0x00000008 + -0x44) = 0;
        if (*(long *)(lVar6 + 0x60) != 0) {
          iVar4 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(lVar6 + 0x60),uVar7,
                                  (undefined1 *)((long)register0x00000008 + -0x44),
                                  uRam0000000003d2fe08);
          bVar2 = true;
          bVar3 = false;
          if (iVar4 != 0) {
            bVar2 = false;
            bVar3 = true;
            if (!NAN(*(float *)((long)register0x00000008 + -0x44))) {
              bVar2 = *(float *)((long)register0x00000008 + -0x44) < 100.0;
              bVar3 = false;
            }
          }
          if (bVar2 == bVar3) {
            return;
          }
          if (*(long *)(lVar6 + 0x60) != 0) {
            unaff_x21 = 0x3d2fe18;
            /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar6 + 0x60),uVar7,uRam0000000003d2fe18);
            if (*(long *)(lVar6 + 0x58) != 0) {
              /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(lVar6 + 0x58),uVar7,uRam0000000003d2fe18);
              return;
            }
          }
        }
        unaff_x30 = Atlas_Stats_AchievementManager__UnlockAchievement;
        auVar8 = func_0x00f78af4();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
        param_1 = auVar8._0_8_;
        uVar1 = auVar8._8_8_;
        unaff_x19 = uVar7;
        unaff_x20 = lVar6;
      } while( true );
    }
    if (param_2 == 0) {
      func_0x00f78af4();
      return;
    }
    iVar5 = Atlas_League_LeaguePlayerSave__GetPlayerDayPlacement(param_2,iVar4,0);
    iVar4 = iVar4 + 1;
  } while (iVar5 < 0xc);
  return;
}



// ============================================================
// RVA: 0x14484ec | Atlas.Stats.AchievementManager.OnBootLeagueUpdate
// ============================================================

void Atlas_Stats_AchievementManager__OnBootLeagueUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x14484f0 | Atlas.Stats.AchievementManager.OnPodiumSequence
// ============================================================

ulong Atlas_Stats_AchievementManager__OnPodiumSequence(ulong param_1,long param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x1;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar11;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar12;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  ulong uStack_90;
  undefined8 uStack_88;
  
  uVar5 = param_1;
  uVar8 = param_3;
  if ((bRam0000000003eb4723 & 1) == 0) {
    func_0x00f78a20(0x3d3afb8);
    uVar5 = func_0x00f78a20(0x3d68ad8);
    bRam0000000003eb4723 = 1;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x18) == 0) {
      uVar5 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(*(long *)(param_2 + 0x10) + 0x20);
    if (lVar9 != 0) {
      if ((param_3 != 5) || (uVar7 = /*STR('Achievement_77')*/ uRam0000000003d68ad8, *(char *)(lVar9 + 0x18) == '\0')) {
        return uVar5;
      }
      do {
        uVar6 = uVar7;
        uVar5 = param_1;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        unaff_x21 = 0x3eb4000;
        if ((bRam0000000003eb4717 & 1) == 0) {
          func_0x00f78a20(0x3d2fe08);
          func_0x00f78a20(0x3d2fe18);
          bRam0000000003eb4717 = 1;
        }
        *(undefined4 *)((long)register0x00000008 + -0x44) = 0;
        if (*(long *)(uVar5 + 0x60) != 0) {
          uVar4 = /*System.Collections.Generic.Dictionary<string, float>$$TryGetValue*/ func_0x01ee246c(*(long *)(uVar5 + 0x60),uVar6,
                                  (undefined1 *)((long)register0x00000008 + -0x44),
                                  uRam0000000003d2fe08);
          bVar1 = true;
          bVar2 = false;
          if ((int)uVar4 != 0) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(*(float *)((long)register0x00000008 + -0x44))) {
              bVar1 = *(float *)((long)register0x00000008 + -0x44) < 100.0;
              bVar2 = false;
            }
          }
          if (bVar1 == bVar2) {
            return uVar4;
          }
          if (*(long *)(uVar5 + 0x60) != 0) {
            unaff_x21 = 0x3d2fe18;
            /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(uVar5 + 0x60),uVar6,uRam0000000003d2fe18);
            if (*(long *)(uVar5 + 0x58) != 0) {
              uVar5 = /*System.Collections.Generic.Dictionary<string, float>$$set_Item*/ func_0x01ee0828(0x42c80000,*(long *)(uVar5 + 0x58),uVar6,uRam0000000003d2fe18)
              ;
              return uVar5;
            }
          }
        }
        unaff_x30 = Atlas_Stats_AchievementManager__UnlockAchievement;
        auVar13 = func_0x00f78af4();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
        param_1 = auVar13._0_8_;
        uVar7 = auVar13._8_8_;
        unaff_x19 = uVar6;
        unaff_x20 = uVar5;
        unaff_d8 = 0x42c80000;
      } while( true );
    }
  }
  auVar14 = func_0x00f78af4();
  uVar3 = auVar14._8_4_;
  lVar9 = auVar14._0_8_;
  lVar10 = *(long *)(lVar9 + 0x50);
  if (lVar10 != 0) {
    if (*(uint *)(lVar10 + 0x18) <= uVar3) goto code_r0x014486c8;
    lVar11 = (long)(int)uVar3;
    lVar10 = lVar10 + lVar11 * 0x48;
    uVar7 = *(undefined8 *)(lVar10 + 0x20);
    uVar5 = *(ulong *)(lVar10 + 0x30);
    if (*(int *)(lVar10 + 0x38) == 1) {
      if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x014486c4;
      uVar6 = /*Atlas.Stats.StatsManager$$GetSummedGlobalStats*/ func_0x01505418(*(long *)(lVar9 + 0x18),*(undefined8 *)(lVar10 + 0x28),0);
    }
    else if (*(int *)(lVar10 + 0x38) == 0) {
      if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x014486c4;
      uVar6 = /*Atlas.Stats.StatsManager$$GetSummedTransactionStats*/ func_0x01505380(*(long *)(lVar9 + 0x18),*(undefined8 *)(lVar10 + 0x28),0);
    }
    else {
      uVar6 = 0;
    }
    lVar10 = *(long *)(lVar9 + 0x10);
    if (lVar10 != 0) {
      uVar12 = /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(uVar6,uVar5 >> 0x20,uVar5,0);
      if (*(uint *)(lVar10 + 0x18) <= uVar3) goto code_r0x014486c8;
      *(undefined4 *)(lVar10 + lVar11 * 0x10 + 0x20) = uVar12;
      lVar10 = *(long *)(lVar9 + 0x10);
      if (lVar10 != 0) {
        if (uVar3 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + lVar11 * 0x10;
          uStack_88 = *(undefined8 *)(lVar10 + 0x28);
          uStack_90 = *(ulong *)(lVar10 + 0x20);
          uVar3 = /*Atlas.Stats.AchievementManager.StatAchievementProgress$$get_IsComplete*/ func_0x01531a0c(&uStack_90,0);
          if ((uVar3 | uVar8) == 1) {
            Atlas_Stats_AchievementManager__ProgressAchievement(uStack_90 & 0xffffffff,lVar9,uVar7);
          }
          return (ulong)(uVar3 | uVar8);
        }
        goto code_r0x014486c8;
      }
    }
  }
code_r0x014486c4:
  func_0x00f78af4();
code_r0x014486c8:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
  if (((((*(long *)(extraout_x1 + 0x20) == 0) ||
        (*(long *)(*(long *)(extraout_x1 + 0x20) + 0x18) == 0)) &&
       ((*(long *)(extraout_x1 + 0x28) == 0 ||
        (*(long *)(*(long *)(extraout_x1 + 0x28) + 0x18) == 0)))) &&
      ((*(long *)(extraout_x1 + 0x30) == 0 || (*(long *)(*(long *)(extraout_x1 + 0x30) + 0x18) == 0)
       ))) && ((*(long *)(extraout_x1 + 0x38) == 0 ||
               (*(long *)(*(long *)(extraout_x1 + 0x38) + 0x18) == 0)))) {
    if (*(long *)(extraout_x1 + 0x40) != 0) {
      return (ulong)(*(int *)(*(long *)(extraout_x1 + 0x40) + 0x18) != 0);
    }
    return 0;
  }
  return 1;
}



// ============================================================
// RVA: 0x14485a4 | Atlas.Stats.AchievementManager.UpdateStatAchievementProgress
// ============================================================

uint Atlas_Stats_AchievementManager__UpdateStatAchievementProgress
               (long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x1;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uStack_60;
  undefined8 uStack_58;
  
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_2) goto LAB_014486c8;
    lVar6 = (long)(int)param_2;
    lVar4 = lVar4 + lVar6 * 0x48;
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    uVar5 = *(ulong *)(lVar4 + 0x30);
    if (*(int *)(lVar4 + 0x38) == 1) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_014486c4;
      uVar2 = /*Atlas.Stats.StatsManager$$GetSummedGlobalStats*/ func_0x01505418(*(long *)(param_1 + 0x18),*(undefined8 *)(lVar4 + 0x28),0);
    }
    else if (*(int *)(lVar4 + 0x38) == 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_014486c4;
      uVar2 = /*Atlas.Stats.StatsManager$$GetSummedTransactionStats*/ func_0x01505380(*(long *)(param_1 + 0x18),*(undefined8 *)(lVar4 + 0x28),0);
    }
    else {
      uVar2 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      uVar7 = /*Atlas.Stats.StatCondition$$GetPercentageComplete*/ func_0x0150471c(uVar2,uVar5 >> 0x20,uVar5,0);
      if (*(uint *)(lVar4 + 0x18) <= param_2) goto LAB_014486c8;
      *(undefined4 *)(lVar4 + lVar6 * 0x10 + 0x20) = uVar7;
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 != 0) {
        if (param_2 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + lVar6 * 0x10;
          uStack_58 = *(undefined8 *)(lVar4 + 0x28);
          uStack_60 = *(ulong *)(lVar4 + 0x20);
          uVar1 = /*Atlas.Stats.AchievementManager.StatAchievementProgress$$get_IsComplete*/ func_0x01531a0c(&uStack_60,0);
          if ((uVar1 | param_3) == 1) {
            Atlas_Stats_AchievementManager__ProgressAchievement
                      (uStack_60 & 0xffffffff,param_1,uVar3);
          }
          return uVar1 | param_3;
        }
        goto LAB_014486c8;
      }
    }
  }
LAB_014486c4:
  func_0x00f78af4();
LAB_014486c8:
  uVar3 = func_0x00f78b24();
  func_0x00f78ac0(uVar3,0);
  if (((((*(long *)(extraout_x1 + 0x20) == 0) ||
        (*(long *)(*(long *)(extraout_x1 + 0x20) + 0x18) == 0)) &&
       ((*(long *)(extraout_x1 + 0x28) == 0 ||
        (*(long *)(*(long *)(extraout_x1 + 0x28) + 0x18) == 0)))) &&
      ((*(long *)(extraout_x1 + 0x30) == 0 || (*(long *)(*(long *)(extraout_x1 + 0x30) + 0x18) == 0)
       ))) && ((*(long *)(extraout_x1 + 0x38) == 0 ||
               (*(long *)(*(long *)(extraout_x1 + 0x38) + 0x18) == 0)))) {
    if (*(long *)(extraout_x1 + 0x40) != 0) {
      return (uint)(*(int *)(*(long *)(extraout_x1 + 0x40) + 0x18) != 0);
    }
    return 0;
  }
  return 1;
}



// ============================================================
// RVA: 0x14486d4 | Atlas.Stats.AchievementManager.DoesAchievementHaveConditions
// ============================================================

bool Atlas_Stats_AchievementManager__DoesAchievementHaveConditions(undefined8 param_1,long param_2)

{
  if (((((*(long *)(param_2 + 0x20) == 0) || (*(long *)(*(long *)(param_2 + 0x20) + 0x18) == 0)) &&
       ((*(long *)(param_2 + 0x28) == 0 || (*(long *)(*(long *)(param_2 + 0x28) + 0x18) == 0)))) &&
      ((*(long *)(param_2 + 0x30) == 0 || (*(long *)(*(long *)(param_2 + 0x30) + 0x18) == 0)))) &&
     ((*(long *)(param_2 + 0x38) == 0 || (*(long *)(*(long *)(param_2 + 0x38) + 0x18) == 0)))) {
    if (*(long *)(param_2 + 0x40) != 0) {
      return *(int *)(*(long *)(param_2 + 0x40) + 0x18) != 0;
    }
    return false;
  }
  return true;
}



// ============================================================
// RVA: 0x144873c | Atlas.Stats.AchievementManager.UnregisterStatListeners
// ============================================================

/* WARNING: Possible PIC construction at 0x0144895c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0144898c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01448960) */
/* WARNING: Removing unreachable block (ram,0x01448964) */
/* WARNING: Removing unreachable block (ram,0x0144897c) */
/* WARNING: Removing unreachable block (ram,0x01448990) */
/* WARNING: Removing unreachable block (ram,0x01448994) */

long Atlas_Stats_AchievementManager__UnregisterStatListeners
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_78 = unaff_x19;
  if (lVar4 == 0) goto LAB_01448858;
  uVar3 = (uint)param_2;
  uStack_78 = param_2;
  if (uVar3 < *(uint *)(lVar4 + 0x18)) {
    unaff_x22 = (long)(int)uVar3;
    lVar4 = lVar4 + unaff_x22 * 0x10;
    unaff_x21 = *(long *)(lVar4 + 0x28);
    if (unaff_x21 == 0) {
      return param_1;
    }
    lVar6 = *(long *)(param_1 + 0x50);
    unaff_x20 = param_1;
    if (lVar6 == 0) goto LAB_01448858;
    if (uVar3 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = *(long *)(lVar6 + unaff_x22 * 0x48 + 0x28);
      if (lVar6 == 0) goto LAB_01448858;
      uVar8 = *(undefined8 *)(lVar4 + 0x20);
      lVar4 = param_1;
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar9 = 0;
        uVar5 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if ((uVar5 <= uVar9) || (*(uint *)(unaff_x21 + 0x18) <= uVar9)) goto LAB_0144884c;
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_01448858;
          param_3 = *(undefined8 *)(unaff_x21 + 0x20 + uVar9 * 8);
          lVar4 = /*Atlas.Stats.StatsManager$$UnRegisterOnStatChange*/ func_0x01504fc8(*(long *)(param_1 + 0x18),
                                  *(undefined4 *)(lVar6 + 0x20 + uVar9 * 4),param_3,0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar9) goto LAB_0144884c;
          *(undefined8 *)(unaff_x21 + 0x20 + uVar9 * 8) = 0;
          uVar9 = uVar9 + 1;
          uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_01448858;
      if (uVar3 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + unaff_x22 * 0x10;
        *(undefined8 *)(lVar6 + 0x20) = uVar8;
        *(long *)(lVar6 + 0x28) = unaff_x21;
        return lVar4;
      }
    }
  }
LAB_0144884c:
  uVar8 = func_0x00f78b24();
  func_0x00f78ac0(uVar8,0);
LAB_01448858:
  auVar10 = func_0x00f78af4();
  lVar4 = auVar10._0_8_;
  puStack_68 = &Atlas_Stats_AchievementManager__ResetAllAchievements;
  lStack_90 = unaff_x22;
  lStack_88 = unaff_x21;
  lStack_80 = unaff_x20;
  puStack_70 = &stack0xfffffffffffffff0;
  if (((*(long *)(lVar4 + 0x40) != 0) &&
      (plVar2 = *(long **)(*(long *)(lVar4 + 0x40) + 0x30), plVar2 != (long *)0x0)) &&
     ((**(code **)(*plVar2 + 0x6d8))(auStack_a8,plVar2,*(undefined8 *)(*plVar2 + 0x6e0)),
     auVar10._8_8_ != 0)) {
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    uVar8 = Atlas_Save_SaveManager__get_SaveData(auVar10._8_8_,0);
    lVar4 = Atlas_Stats_AchievementManager__ResetAndPopulate(lVar4,uVar7,uVar8,param_3);
    return lVar4;
  }
  auVar10 = func_0x00f78af4();
  lVar4 = auVar10._0_8_;
  if ((bRam0000000003eb4728 & 1) == 0) {
    func_0x00f78a20(0x3d431b0);
    func_0x00f78a20(0x3d431b8);
    bRam0000000003eb4728 = 1;
  }
  iVar1 = /*Atlas.Stats.AchievementManager$$DoesAchievementPassCondition<EventDefinition.EventDuration>*/ func_0x0171c084(lVar4,*(undefined8 *)(auVar10._8_8_ + 0x20),*(undefined4 *)(lVar4 + 0x68),
                          uRam0000000003d431b8);
  if (iVar1 == 0) {
    return 0;
  }
  lVar6 = *(long *)(auVar10._8_8_ + 0x28);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0171c078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (**(code **)**(undefined8 **)(lRam0000000003d431b0 + 0x30))
                      (lVar6,*(undefined8 *)(lVar4 + 0x70),
                       (undefined8 *)**(undefined8 **)(lRam0000000003d431b0 + 0x30));
    return lVar4;
  }
  return 1;
}



// ============================================================
// RVA: 0x144885c | Atlas.Stats.AchievementManager.ResetAllAchievements
// ============================================================

/* WARNING: Possible PIC construction at 0x0144895c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0144898c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01448960) */
/* WARNING: Removing unreachable block (ram,0x01448964) */
/* WARNING: Removing unreachable block (ram,0x0144897c) */
/* WARNING: Removing unreachable block (ram,0x01448990) */
/* WARNING: Removing unreachable block (ram,0x01448994) */

undefined8
Atlas_Stats_AchievementManager__ResetAllAchievements(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_48 [24];
  
  if (((*(long *)(param_1 + 0x40) != 0) &&
      (plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x30), plVar2 != (long *)0x0)) &&
     ((**(code **)(*plVar2 + 0x6d8))(auStack_48,plVar2,*(undefined8 *)(*plVar2 + 0x6e0)),
     param_2 != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = Atlas_Save_SaveManager__get_SaveData(param_2,0);
    uVar3 = Atlas_Stats_AchievementManager__ResetAndPopulate(param_1,uVar6,uVar3,param_3);
    return uVar3;
  }
  auVar7 = func_0x00f78af4();
  lVar4 = auVar7._0_8_;
  if ((bRam0000000003eb4728 & 1) == 0) {
    func_0x00f78a20(0x3d431b0);
    func_0x00f78a20(0x3d431b8);
    bRam0000000003eb4728 = 1;
  }
  iVar1 = /*Atlas.Stats.AchievementManager$$DoesAchievementPassCondition<EventDefinition.EventDuration>*/ func_0x0171c084(lVar4,*(undefined8 *)(auVar7._8_8_ + 0x20),*(undefined4 *)(lVar4 + 0x68),
                          uRam0000000003d431b8);
  if (iVar1 != 0) {
    lVar5 = *(long *)(auVar7._8_8_ + 0x28);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0171c078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)**(undefined8 **)(lRam0000000003d431b0 + 0x30))
                        (lVar5,*(undefined8 *)(lVar4 + 0x70),
                         (undefined8 *)**(undefined8 **)(lRam0000000003d431b0 + 0x30));
      return uVar3;
    }
    return 1;
  }
  return 0;
}



// ============================================================
// RVA: 0x14488e0 | Atlas.Stats.AchievementManager.DoesAchievementPassConditions
// ============================================================

/* WARNING: Possible PIC construction at 0x0144895c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0144898c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01448960) */
/* WARNING: Removing unreachable block (ram,0x01448964) */
/* WARNING: Removing unreachable block (ram,0x0144897c) */
/* WARNING: Removing unreachable block (ram,0x01448990) */
/* WARNING: Removing unreachable block (ram,0x01448994) */

undefined8 Atlas_Stats_AchievementManager__DoesAchievementPassConditions(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4728 & 1) == 0) {
    func_0x00f78a20(0x3d431b0);
    func_0x00f78a20(0x3d431b8);
    bRam0000000003eb4728 = 1;
  }
  iVar1 = /*Atlas.Stats.AchievementManager$$DoesAchievementPassCondition<EventDefinition.EventDuration>*/ func_0x0171c084(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x68),
                          uRam0000000003d431b8);
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_2 + 0x28);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0171c078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)**(undefined8 **)(lRam0000000003d431b0 + 0x30))
                        (lVar3,*(undefined8 *)(param_1 + 0x70),
                         (undefined8 *)**(undefined8 **)(lRam0000000003d431b0 + 0x30));
      return uVar2;
    }
    return 1;
  }
  return 0;
}



// ============================================================
// RVA: 0x14489c8 | Atlas.Stats.AchievementManager.OnAchievementProgressChanged
// ============================================================

/* WARNING: Possible PIC construction at 0x0144895c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0144898c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01448960) */
/* WARNING: Removing unreachable block (ram,0x01448964) */
/* WARNING: Removing unreachable block (ram,0x0144897c) */
/* WARNING: Removing unreachable block (ram,0x01448990) */
/* WARNING: Removing unreachable block (ram,0x01448994) */

long Atlas_Stats_AchievementManager__OnAchievementProgressChanged(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  uVar4 = 0;
  lVar3 = Atlas_Stats_AchievementManager__UpdateStatAchievementProgress();
  uVar7 = (uint)param_2;
  if ((int)lVar3 == 0) {
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
      func_0x00f78af4();
    }
    else if (uVar7 < *(uint *)(lVar6 + 0x18)) {
      *(undefined1 *)(lVar6 + (long)(int)uVar7 * 0x10 + 0x24) = 1;
      return lVar3;
    }
    uVar4 = func_0x00f78b24();
    lVar3 = func_0x00f78ac0(uVar4,0);
    return lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  uStack_78 = unaff_x19;
  if (lVar3 == 0) goto LAB_01448858;
  uStack_78 = param_2;
  if (uVar7 < *(uint *)(lVar3 + 0x18)) {
    unaff_x22 = (long)(int)uVar7;
    lVar3 = lVar3 + unaff_x22 * 0x10;
    unaff_x21 = *(long *)(lVar3 + 0x28);
    if (unaff_x21 == 0) {
      return param_1;
    }
    lVar6 = *(long *)(param_1 + 0x50);
    unaff_x20 = param_1;
    if (lVar6 == 0) goto LAB_01448858;
    if (uVar7 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = *(long *)(lVar6 + unaff_x22 * 0x48 + 0x28);
      if (lVar6 == 0) goto LAB_01448858;
      uVar9 = *(undefined8 *)(lVar3 + 0x20);
      lVar3 = param_1;
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar10 = 0;
        uVar5 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if ((uVar5 <= uVar10) || (*(uint *)(unaff_x21 + 0x18) <= uVar10)) goto LAB_0144884c;
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_01448858;
          uVar4 = *(undefined8 *)(unaff_x21 + 0x20 + uVar10 * 8);
          lVar3 = /*Atlas.Stats.StatsManager$$UnRegisterOnStatChange*/ func_0x01504fc8(*(long *)(param_1 + 0x18),
                                  *(undefined4 *)(lVar6 + 0x20 + uVar10 * 4),uVar4,0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar10) goto LAB_0144884c;
          *(undefined8 *)(unaff_x21 + 0x20 + uVar10 * 8) = 0;
          uVar10 = uVar10 + 1;
          uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
        } while ((long)uVar10 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) goto LAB_01448858;
      if (uVar7 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + unaff_x22 * 0x10;
        *(undefined8 *)(lVar6 + 0x20) = uVar9;
        *(long *)(lVar6 + 0x28) = unaff_x21;
        return lVar3;
      }
    }
  }
LAB_0144884c:
  uVar9 = func_0x00f78b24();
  func_0x00f78ac0(uVar9,0);
LAB_01448858:
  auVar11 = func_0x00f78af4();
  lVar3 = auVar11._0_8_;
  pcStack_68 = Atlas_Stats_AchievementManager__ResetAllAchievements;
  lStack_90 = unaff_x22;
  lStack_88 = unaff_x21;
  lStack_80 = unaff_x20;
  puStack_70 = &stack0xfffffffffffffff0;
  if (((*(long *)(lVar3 + 0x40) != 0) &&
      (plVar2 = *(long **)(*(long *)(lVar3 + 0x40) + 0x30), plVar2 != (long *)0x0)) &&
     ((**(code **)(*plVar2 + 0x6d8))(auStack_a8,plVar2,*(undefined8 *)(*plVar2 + 0x6e0)),
     auVar11._8_8_ != 0)) {
    uVar8 = *(undefined8 *)(lVar3 + 0x18);
    uVar9 = Atlas_Save_SaveManager__get_SaveData(auVar11._8_8_,0);
    lVar3 = Atlas_Stats_AchievementManager__ResetAndPopulate(lVar3,uVar8,uVar9,uVar4);
    return lVar3;
  }
  auVar11 = func_0x00f78af4();
  lVar3 = auVar11._0_8_;
  if ((bRam0000000003eb4728 & 1) == 0) {
    func_0x00f78a20(0x3d431b0);
    func_0x00f78a20(0x3d431b8);
    bRam0000000003eb4728 = 1;
  }
  iVar1 = /*Atlas.Stats.AchievementManager$$DoesAchievementPassCondition<EventDefinition.EventDuration>*/ func_0x0171c084(lVar3,*(undefined8 *)(auVar11._8_8_ + 0x20),*(undefined4 *)(lVar3 + 0x68),
                          uRam0000000003d431b8);
  if (iVar1 == 0) {
    return 0;
  }
  lVar6 = *(long *)(auVar11._8_8_ + 0x28);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0171c078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (**(code **)**(undefined8 **)(lRam0000000003d431b0 + 0x30))
                      (lVar6,*(undefined8 *)(lVar3 + 0x70),
                       (undefined8 *)**(undefined8 **)(lRam0000000003d431b0 + 0x30));
    return lVar3;
  }
  return 1;
}



// ============================================================
// RVA: 0x1448a38 | Atlas.Stats.AchievementManager..ctor
// ============================================================

void Atlas_Stats_AchievementManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x171c054 | Atlas.Stats.AchievementManager.DoesAchievementPassCondition<DefinitionID>
// ============================================================

undefined8
Atlas_Stats_AchievementManager__DoesAchievementPassCondition_DefinitionID_
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0171c078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                      (param_2,param_3,(undefined8 *)**(undefined8 **)(param_4 + 0x30));
    return uVar1;
  }
  return 1;
}



// ============================================================
// RVA: 0x171c084 | Atlas.Stats.AchievementManager.DoesAchievementPassCondition<EventDefinition.EventDuration>
// ============================================================

undefined8
Atlas_Stats_AchievementManager__DoesAchievementPassCondition_EventDefinition_EventDuration_
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0171c0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                      (param_2,param_3,(undefined8 *)**(undefined8 **)(param_4 + 0x30));
    return uVar1;
  }
  return 1;
}



// ============================================================
// RVA: 0x171c084 | Atlas.Stats.AchievementManager.DoesAchievementPassCondition<Int32Enum>
// ============================================================

undefined8
Atlas_Stats_AchievementManager__DoesAchievementPassCondition_EventDefinition_EventDuration_
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0171c0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                      (param_2,param_3,(undefined8 *)**(undefined8 **)(param_4 + 0x30));
    return uVar1;
  }
  return 1;
}



// ============================================================
// RVA: 0x171c0b4 | Atlas.Stats.AchievementManager.DoesAchievementPassCondition<object>
// ============================================================

undefined8
Atlas_Stats_AchievementManager__DoesAchievementPassCondition_object_
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0171c0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)**(undefined8 **)(param_4 + 0x30))
                      (param_2,param_3,(undefined8 *)**(undefined8 **)(param_4 + 0x30));
    return uVar1;
  }
  return 1;
}



