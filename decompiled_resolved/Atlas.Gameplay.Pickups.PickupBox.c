// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Pickups.PickupBox

// ============================================================
// RVA: 0x14b7bbc | Atlas.Gameplay.Pickups.PickupBox.add_OnBoxHit
// ============================================================

long Atlas_Gameplay_Pickups_PickupBox__add_OnBoxHit(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4acf & 1) == 0) {
    func_0x00f78a20(0x3d1b688);
    bRam0000000003eb4acf = 1;
  }
  lVar5 = *(long *)(param_1 + 0x50);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<PickupBox, KartComposite>_TypeInfo*/ lRam0000000003d1b688))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x50),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4ad0 & 1) == 0) {
    func_0x00f78a20(0x3d1b688);
    bRam0000000003eb4ad0 = 1;
  }
  plVar2 = (long *)(auVar6._0_8_ + 0x50);
  lVar5 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,auVar6._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*System.Action<PickupBox, KartComposite>_TypeInfo*/ lRam0000000003d1b688))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar5 = func_0x00f78e5c(plVar4);
  return *(long *)(lVar5 + 0x10);
}



// ============================================================
// RVA: 0x14b7c5c | Atlas.Gameplay.Pickups.PickupBox.remove_OnBoxHit
// ============================================================

long Atlas_Gameplay_Pickups_PickupBox__remove_OnBoxHit(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb4ad0 & 1) == 0) {
    func_0x00f78a20(0x3d1b688);
    bRam0000000003eb4ad0 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x50);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar4,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<PickupBox, KartComposite>_TypeInfo*/ lRam0000000003d1b688))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x50),plVar2,lVar4);
    bVar1 = lVar4 == lVar3;
    lVar4 = lVar3;
    if (bVar1) {
      return lVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return *(long *)(lVar4 + 0x10);
}



// ============================================================
// RVA: 0x14b7cfc | Atlas.Gameplay.Pickups.PickupBox.get_PickupBoxBehaviour
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupBox__get_PickupBoxBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x14b7d04 | Atlas.Gameplay.Pickups.PickupBox.get_PickupSpotBehaviour
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupBox__get_PickupSpotBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14b7d0c | Atlas.Gameplay.Pickups.PickupBox.get_PlayerPickupTableDefinition
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupBox__get_PlayerPickupTableDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x14b7d14 | Atlas.Gameplay.Pickups.PickupBox.get_AiPickupTableDefinition
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupBox__get_AiPickupTableDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x14b7d1c | Atlas.Gameplay.Pickups.PickupBox.get_RespawnTimer
// ============================================================

undefined4 Atlas_Gameplay_Pickups_PickupBox__get_RespawnTimer(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x14b7d24 | Atlas.Gameplay.Pickups.PickupBox.get_IsBoxAvailable
// ============================================================

ulong Atlas_Gameplay_Pickups_PickupBox__get_IsBoxAvailable(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x10),0), lVar1 != 0)) {
    uVar2 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar1,0);
    if ((int)uVar2 != 0) {
      uVar2 = (ulong)(*(char *)(param_1 + 0x44) == '\0');
    }
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  return *(ulong *)(lVar1 + 0x38);
}



// ============================================================
// RVA: 0x14b7d70 | Atlas.Gameplay.Pickups.PickupBox.get_UsableTypes
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupBox__get_UsableTypes(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x14b7d78 | Atlas.Gameplay.Pickups.PickupBox.get_PickupBoxDefinition
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupBox__get_PickupBoxDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x14b7d80 | Atlas.Gameplay.Pickups.PickupBox.get_BattleMapAreaIndex
// ============================================================

undefined4 Atlas_Gameplay_Pickups_PickupBox__get_BattleMapAreaIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x14b7d88 | Atlas.Gameplay.Pickups.PickupBox.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014b80b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b8204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b8284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b82fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b8390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b83bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b8394) */
/* WARNING: Removing unreachable block (ram,0x014b8398) */
/* WARNING: Removing unreachable block (ram,0x014b83a0) */
/* WARNING: Removing unreachable block (ram,0x014b8300) */
/* WARNING: Removing unreachable block (ram,0x014b8310) */
/* WARNING: Removing unreachable block (ram,0x014b8318) */
/* WARNING: Removing unreachable block (ram,0x014b831c) */
/* WARNING: Removing unreachable block (ram,0x014b8320) */
/* WARNING: Removing unreachable block (ram,0x014b8288) */
/* WARNING: Removing unreachable block (ram,0x014b8290) */
/* WARNING: Removing unreachable block (ram,0x014b829c) */
/* WARNING: Removing unreachable block (ram,0x014b8208) */
/* WARNING: Removing unreachable block (ram,0x014b8218) */
/* WARNING: Removing unreachable block (ram,0x014b8220) */
/* WARNING: Removing unreachable block (ram,0x014b8224) */
/* WARNING: Removing unreachable block (ram,0x014b8228) */
/* WARNING: Removing unreachable block (ram,0x03210958) */
/* WARNING: Removing unreachable block (ram,0x03210988) */
/* WARNING: Removing unreachable block (ram,0x0321099c) */
/* WARNING: Removing unreachable block (ram,0x014b80bc) */
/* WARNING: Removing unreachable block (ram,0x014b80c4) */
/* WARNING: Removing unreachable block (ram,0x014b80d4) */
/* WARNING: Removing unreachable block (ram,0x014b83c0) */
/* WARNING: Removing unreachable block (ram,0x014b83c4) */
/* WARNING: Removing unreachable block (ram,0x014b83d0) */
/* WARNING: Removing unreachable block (ram,0x014b83d8) */

ulong Atlas_Gameplay_Pickups_PickupBox__Init
                (undefined1 param_1 [16],undefined8 param_2,float param_3,long param_4,long *param_5
                ,long *param_6,undefined8 *param_7,long param_8,long param_9)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x19;
  long lVar13;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 *unaff_x29;
  undefined1 *puVar17;
  undefined *unaff_x30;
  undefined *puVar18;
  float fVar19;
  float extraout_s0;
  float fVar20;
  undefined1 auVar21 [16];
  
  puVar17 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ad1 & 1) == 0) {
    func_0x00f78a20(0x3d572f0);
    func_0x00f78a20(0x3d57318);
    func_0x00f78a20(0x3d36250);
    func_0x00f78a20(0x3d36248);
    func_0x00f78a20(0x3d1cea0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ad1 = 1;
  }
  fVar20 = (float)param_2;
  lVar11 = *param_5;
  *(long *)(param_4 + 0x10) = lVar11;
  if (lVar11 == 0) {
LAB_014b801c:
    func_0x00f78af4();
code_r0x014b8020:
    unaff_x22 = param_9;
    uVar6 = func_0x00f78b24();
    unaff_x30 = &Atlas_Gameplay_Pickups_PickupBox__SpawnBox;
    lVar11 = func_0x00f78ac0(uVar6,0);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x19 = param_8;
    unaff_x20 = param_4;
    unaff_x21 = param_6;
    unaff_x29 = puVar17;
  }
  else {
    *(long *)(lVar11 + 0x58) = param_4;
    *(undefined8 *)(param_4 + 0x18) = *param_7;
    *(undefined4 *)(param_4 + 0x40) = 0;
    *(long *)(param_4 + 0x20) = *param_6;
    *(int *)(param_4 + 0x48) = (int)param_9;
    if (((param_8 == 0) || (*param_6 == 0)) || (*(long *)(param_8 + 0x10) == 0)) goto LAB_014b801c;
    param_9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(*(long *)(param_8 + 0x10),*(undefined8 *)(*param_6 + 0x28),
                              uRam0000000003d572f0);
    *(long *)(param_4 + 0x28) = param_9;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_9,0,0);
    fVar20 = (float)param_2;
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
    if ((*param_6 == 0) || (*(long *)(param_8 + 0x10) == 0)) goto LAB_014b801c;
    uVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(*(long *)(param_8 + 0x10),*(undefined8 *)(*param_6 + 0x30),
                            uRam0000000003d572f0);
    *(undefined8 *)(param_4 + 0x30) = uVar6;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
    param_6 = (long *)func_0x00f78aec(/*System.Collections.Generic.HashSet<UsableType>_TypeInfo*/ uRam0000000003d1cea0);
    /*System.Collections.Generic.HashSet<UsableType>$$.ctor*/ func_0x021e2748(param_6,uRam0000000003d36248);
    fVar20 = (float)param_2;
    *(long **)(param_4 + 0x38) = param_6;
    if ((*(long *)(param_4 + 0x28) == 0) ||
       (param_9 = *(long *)(*(long *)(param_4 + 0x28) + 0x20), param_9 == 0)) goto LAB_014b801c;
    uVar10 = *(uint *)(param_9 + 0x18);
    lVar11 = param_4;
    if (0 < (int)uVar10) {
      uVar14 = 0;
      do {
        fVar20 = (float)param_2;
        if (uVar10 <= uVar14) goto code_r0x014b8020;
        lVar15 = *(long *)(param_9 + (long)(int)uVar14 * 0x10 + 0x28);
        if (lVar15 == 0) goto LAB_014b801c;
        if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
          uVar5 = 0;
          uVar12 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
          puVar16 = (undefined8 *)(lVar15 + 0x20);
          do {
            fVar20 = (float)param_2;
            if (uVar12 <= uVar5) goto code_r0x014b8020;
            if (*(long *)(param_8 + 0x10) == 0) goto LAB_014b801c;
            plVar7 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(*(long *)(param_8 + 0x10),*puVar16,uRam0000000003d57318
                                            );
            fVar20 = (float)param_2;
            if (plVar7 == (long *)0x0) goto LAB_014b801c;
            param_6 = *(long **)(param_4 + 0x38);
            uVar6 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
            fVar20 = (float)param_2;
            if (param_6 == (long *)0x0) goto LAB_014b801c;
            /*System.Collections.Generic.HashSet<UsableType>$$Add*/ func_0x021e3838(param_6,uVar6,uRam0000000003d36250);
            uVar5 = uVar5 + 1;
            uVar12 = (ulong)*(uint *)(lVar15 + 0x18);
            puVar16 = puVar16 + 2;
          } while ((long)uVar5 < (long)(int)*(uint *)(lVar15 + 0x18));
        }
        fVar20 = (float)param_2;
        uVar14 = uVar14 + 1;
        uVar10 = *(uint *)(param_9 + 0x18);
      } while ((int)uVar14 < (int)uVar10);
    }
  }
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x20);
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar17 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined2 *)(lVar11 + 0x44) = 0x100;
  if (*(long *)(lVar11 + 0x10) != 0) {
    unaff_x20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar11 + 0x10),0);
    if ((*(long *)(lVar11 + 0x18) != 0) &&
       (lVar15 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar11 + 0x18),0), lVar15 != 0)) {
      fVar19 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar15,0);
      if ((*(long *)(lVar11 + 0x18) != 0) && (unaff_x20 != 0)) {
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(fVar19 + 0.0,fVar20 + *(float *)(*(long *)(lVar11 + 0x18) + 0x1c),
                        param_3 + 0.0,unaff_x20,0);
        if ((*(long *)(lVar11 + 0x10) != 0) &&
           (lVar15 = *(long *)(*(long *)(lVar11 + 0x10) + 0x28), lVar15 != 0)) {
          uVar6 = 1;
          puVar18 = &UNK_014b80bc;
          lVar8 = lVar11;
          goto code_r0x0329e954;
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0x40) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x38) = lVar11;
  *(undefined1 **)((long)register0x00000008 + -0x30) = puVar17;
  *(undefined **)((long)register0x00000008 + -0x28) = &Atlas_Gameplay_Pickups_PickupBox__DeInit;
  unaff_x20 = 0x3eb4000;
  if ((bRam0000000003eb4ad2 & 1) == 0) {
    func_0x00f78a20(0x3d36258);
    bRam0000000003eb4ad2 = 1;
  }
  if (*(long *)(lVar8 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x58) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    uVar5 = 0;
    if (*(long *)(lVar8 + 0x38) != 0) {
      uVar5 = /*System.Collections.Generic.HashSet<UsableType>$$Clear*/ func_0x021e2d18(*(long *)(lVar8 + 0x38),uRam0000000003d36258);
    }
    *(undefined8 *)(lVar8 + 0x38) = 0;
    return uVar5;
  }
  auVar21 = func_0x00f78af4();
  uVar6 = auVar21._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)register0x00000008 + -0x48) =
       &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetColliderEnabled;
  lVar15 = *(long *)(auVar21._0_8_ + 0x28);
  if (lVar15 != 0) {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x40);
    puVar17 = *(undefined1 **)((long)register0x00000008 + -0x50);
    puVar18 = *(undefined **)((long)register0x00000008 + -0x48);
code_r0x0329e954:
    *(long *)(puVar1 + -0x30) = unaff_x22;
    *(long **)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = lVar8;
    *(undefined1 **)(puVar1 + -0x10) = puVar17;
    *(undefined **)(puVar1 + -8) = puVar18;
    if (pcRam0000000003ec2648 == (code *)0x0) {
      pcRam0000000003ec2648 =
           (code *)func_0x00f789d4("UnityEngine.Collider::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0329e9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*pcRam0000000003ec2648)(lVar15,uVar6);
    return uVar5;
  }
  uVar6 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0x68) = lVar8;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined **)((long)register0x00000008 + -0x58) =
       &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetGameObjectActive;
  lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar6,0);
  uVar9 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(uVar6,0);
  if (lVar11 != 0) {
    *(long *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x78) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    *(undefined8 *)((long)register0x00000008 + -0x60) =
         *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)((long)register0x00000008 + -0x58);
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*pcRam0000000003ebf4c0)(lVar11,uVar9);
    return uVar5;
  }
  lVar11 = func_0x00f78af4();
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar6;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0x78) =
       &Atlas_Gameplay_Pickups_PickupBoxBehaviour__PlaySpawnAnimation;
  puVar17 = (undefined1 *)((long)register0x00000008 + -0x80);
  unaff_x20 = 0x3eb4000;
  if ((bRam0000000003eb4ad7 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad7 = 1;
  }
  lVar15 = *(long *)(lVar11 + 0x20);
  if (lVar15 != 0) {
    uVar6 = 0x3d23c18;
    uVar9 = 1;
    puVar18 = &UNK_014b8208;
    goto code_r0x0321a930;
  }
  lVar8 = func_0x00f78af4();
  puVar1 = (undefined1 *)((long)register0x00000008 + -0xb0);
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0xa8) = lVar11;
  *(undefined1 **)((long)register0x00000008 + -0xa0) = puVar17;
  *(undefined **)((long)register0x00000008 + -0x98) = &Atlas_Gameplay_Pickups_PickupBox__DeSpawnBox;
  puVar17 = (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined2 *)(lVar8 + 0x44) = 1;
  lVar13 = lVar11;
  if ((*(long *)(lVar8 + 0x10) != 0) &&
     (lVar15 = *(long *)(*(long *)(lVar8 + 0x10) + 0x28), lVar13 = lVar8, lVar15 != 0)) {
    uVar6 = 0;
    puVar18 = &UNK_014b8288;
    goto code_r0x0329e954;
  }
  lVar11 = func_0x00f78af4();
  puVar3 = (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -200) = lVar13;
  *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar17;
  *(undefined **)((long)register0x00000008 + -0xb8) =
       &Atlas_Gameplay_Pickups_PickupBoxBehaviour__PlayDeSpawnAnimation;
  puVar17 = (undefined1 *)((long)register0x00000008 + -0xc0);
  if ((bRam0000000003eb4ad8 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad8 = 1;
  }
  lVar15 = *(long *)(lVar11 + 0x20);
  if (lVar15 != 0) {
    uVar6 = 0x3d23c18;
    uVar9 = 1;
    puVar18 = &UNK_014b8300;
    goto code_r0x0321a930;
  }
  uVar5 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0xe0) = puVar17;
  *(undefined **)((long)register0x00000008 + -0xd8) =
       &Atlas_Gameplay_Pickups_PickupBox__ResetRespawnTimer;
  if (*(long *)(uVar5 + 0x18) != 0) {
    *(undefined4 *)(uVar5 + 0x40) = *(undefined4 *)(*(long *)(uVar5 + 0x18) + 0x18);
    return uVar5;
  }
  uVar5 = func_0x00f78af4();
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x100);
  *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0xf8) = lVar11;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0xe0);
  *(undefined **)((long)register0x00000008 + -0xe8) =
       &Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox;
  puVar17 = (undefined1 *)((long)register0x00000008 + -0xf0);
  if (*(char *)(uVar5 + 0x44) == '\0') {
    if (*(char *)(uVar5 + 0x45) == '\0') {
      return uVar5;
    }
    lVar11 = *(long *)(uVar5 + 0x10);
    if (lVar11 == 0) goto code_r0x014b83f8;
    puVar18 = &UNK_014b83c0;
    uVar12 = uVar5;
  }
  else {
    uVar12 = *(ulong *)(uVar5 + 0x10);
    if (uVar12 == 0) {
code_r0x014b83f8:
      puVar18 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasDeSpawnFinished;
      uVar12 = func_0x00f78af4();
    }
    else {
      puVar18 = &UNK_014b8394;
    }
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x180);
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3eb4000;
    *(ulong *)((long)register0x00000008 + -0x118) = uVar5;
    *(undefined1 **)((long)register0x00000008 + -0x110) = puVar17;
    *(undefined **)((long)register0x00000008 + -0x108) = puVar18;
    puVar17 = (undefined1 *)((long)register0x00000008 + -0x110);
    if ((bRam0000000003eb4ada & 1) == 0) {
      func_0x00f78a20(0x3d23c18);
      bRam0000000003eb4ada = 1;
    }
    if (*(long *)(uVar12 + 0x20) != 0) {
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)register0x00000008 + -0x178),*(long *)(uVar12 + 0x20),0,0
                     );
      *(undefined8 *)((long)register0x00000008 + -0x148) =
           *(undefined8 *)((long)register0x00000008 + -0x170);
      *(undefined8 *)((long)register0x00000008 + -0x150) =
           *(undefined8 *)((long)register0x00000008 + -0x178);
      *(undefined8 *)((long)register0x00000008 + -0x138) =
           *(undefined8 *)((long)register0x00000008 + -0x160);
      *(undefined8 *)((long)register0x00000008 + -0x140) =
           *(undefined8 *)((long)register0x00000008 + -0x168);
      *(undefined4 *)((long)register0x00000008 + -0x130) =
           *(undefined4 *)((long)register0x00000008 + -0x158);
      iVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)register0x00000008 + -0x150),0);
      if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return (ulong)(iVar4 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 0xc));
    }
    puVar18 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasSpawnFinished;
    lVar11 = func_0x00f78af4();
  }
  puVar3 = puVar2 + -0x80;
  *(undefined8 *)(puVar2 + -0x20) = 0x3eb4000;
  *(ulong *)(puVar2 + -0x18) = uVar12;
  *(undefined1 **)(puVar2 + -0x10) = puVar17;
  *(undefined **)(puVar2 + -8) = puVar18;
  uVar6 = 0x3eb4000;
  if ((bRam0000000003eb4ad9 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad9 = 1;
  }
  if (*(long *)(lVar11 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(puVar2 + -0x78,*(long *)(lVar11 + 0x20),0,0);
    *(undefined8 *)(puVar2 + -0x48) = *(undefined8 *)(puVar2 + -0x70);
    *(undefined8 *)(puVar2 + -0x50) = *(undefined8 *)(puVar2 + -0x78);
    *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x60);
    *(undefined8 *)(puVar2 + -0x40) = *(undefined8 *)(puVar2 + -0x68);
    *(undefined4 *)(puVar2 + -0x30) = *(undefined4 *)(puVar2 + -0x58);
    iVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(puVar2 + -0x50,0);
    if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar4 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 8));
  }
  auVar21 = func_0x00f78af4();
  uVar9 = auVar21._8_8_;
  *(undefined1 **)(puVar2 + -0x90) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x88) = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetAnimatorEnabled;
  lVar15 = *(long *)(auVar21._0_8_ + 0x20);
  if (lVar15 == 0) {
    lVar15 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0xb0) = 0x3eb4000;
    *(long *)(puVar2 + -0xa8) = lVar11;
    *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x90;
    *(undefined **)(puVar2 + -0x98) = &Atlas_Gameplay_Pickups_PickupBox__DestroyBox;
    if ((bRam0000000003eb4ad3 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4ad3 = 1;
    }
    if (*(long *)(lVar15 + 0x10) != 0) {
      uVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar15 + 0x10),0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(long *)(puVar2 + -0xc0) = unaff_x22;
      *(long **)(puVar2 + -0xb8) = unaff_x21;
      *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xb0);
      *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xa8);
      *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xa0);
      *(undefined8 *)(puVar2 + -0x98) = *(undefined8 *)(puVar2 + -0x98);
      if ((bRam0000000003ec0230 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ec0230 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (pcRam0000000003ec0228 == (code *)0x0) {
        pcRam0000000003ec0228 =
             (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*pcRam0000000003ec0228)(0,uVar6);
      return uVar5;
    }
    uVar5 = func_0x00f78af4();
    *(float *)(uVar5 + 0x40) = *(float *)(uVar5 + 0x40) - extraout_s0;
    return uVar5;
  }
  puVar17 = *(undefined1 **)(puVar2 + -0x90);
  puVar18 = *(undefined **)(puVar2 + -0x88);
code_r0x0321a930:
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar3 + -0x20) = uVar6;
  *(long *)(puVar3 + -0x18) = lVar11;
  *(undefined1 **)(puVar3 + -0x10) = puVar17;
  *(undefined **)(puVar3 + -8) = puVar18;
  if (pcRam0000000003ebe9d8 == (code *)0x0) {
    pcRam0000000003ebe9d8 =
         (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*pcRam0000000003ebe9d8)(lVar15,uVar9);
  return uVar5;
}



// ============================================================
// RVA: 0x14b802c | Atlas.Gameplay.Pickups.PickupBox.SpawnBox
// ============================================================

/* WARNING: Possible PIC construction at 0x014b80b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b8204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b8284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b82fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b8390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b83bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b8394) */
/* WARNING: Removing unreachable block (ram,0x014b8398) */
/* WARNING: Removing unreachable block (ram,0x014b83a0) */
/* WARNING: Removing unreachable block (ram,0x014b8300) */
/* WARNING: Removing unreachable block (ram,0x014b8310) */
/* WARNING: Removing unreachable block (ram,0x014b8318) */
/* WARNING: Removing unreachable block (ram,0x014b831c) */
/* WARNING: Removing unreachable block (ram,0x014b8320) */
/* WARNING: Removing unreachable block (ram,0x014b8288) */
/* WARNING: Removing unreachable block (ram,0x014b8290) */
/* WARNING: Removing unreachable block (ram,0x014b829c) */
/* WARNING: Removing unreachable block (ram,0x014b8208) */
/* WARNING: Removing unreachable block (ram,0x014b8218) */
/* WARNING: Removing unreachable block (ram,0x014b8220) */
/* WARNING: Removing unreachable block (ram,0x014b8224) */
/* WARNING: Removing unreachable block (ram,0x014b8228) */
/* WARNING: Removing unreachable block (ram,0x03210958) */
/* WARNING: Removing unreachable block (ram,0x03210988) */
/* WARNING: Removing unreachable block (ram,0x0321099c) */
/* WARNING: Removing unreachable block (ram,0x014b80bc) */
/* WARNING: Removing unreachable block (ram,0x014b80c4) */
/* WARNING: Removing unreachable block (ram,0x014b80d4) */
/* WARNING: Removing unreachable block (ram,0x014b83c0) */
/* WARNING: Removing unreachable block (ram,0x014b83c4) */
/* WARNING: Removing unreachable block (ram,0x014b83d0) */
/* WARNING: Removing unreachable block (ram,0x014b83d8) */

ulong Atlas_Gameplay_Pickups_PickupBox__SpawnBox
                (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***pppuVar13;
  undefined8 ***pppuVar14;
  undefined *puVar15;
  float fVar16;
  float extraout_s0;
  undefined1 auVar17 [16];
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_40;
  long lStack_38;
  undefined8 **ppuStack_30;
  undefined *puStack_28;
  undefined8 *puVar2;
  
  plVar3 = (long *)&stack0xffffffffffffffe0;
  *(undefined2 *)(param_4 + 0x44) = 0x100;
  if (*(long *)(param_4 + 0x10) != 0) {
    lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_4 + 0x10),0);
    unaff_x20 = lVar5;
    if ((*(long *)(param_4 + 0x18) != 0) &&
       (lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_4 + 0x18),0), lVar6 != 0)) {
      fVar16 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar6,0);
      if ((*(long *)(param_4 + 0x18) != 0) && (lVar5 != 0)) {
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(fVar16 + 0.0,param_2 + *(float *)(*(long *)(param_4 + 0x18) + 0x1c),
                        param_3 + 0.0,lVar5,0);
        if ((*(long *)(param_4 + 0x10) != 0) &&
           (lVar6 = *(long *)(*(long *)(param_4 + 0x10) + 0x28), lVar6 != 0)) {
          uVar11 = 1;
          puVar15 = (undefined *)0x14b80bc;
          lVar7 = param_4;
          pppuVar13 = (undefined8 ***)&stack0xfffffffffffffff0;
          goto code_r0x0329e954;
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  puStack_28 = &Atlas_Gameplay_Pickups_PickupBox__DeInit;
  pppuVar13 = &ppuStack_30;
  lVar5 = 0x3eb4000;
  lStack_40 = unaff_x20;
  lStack_38 = param_4;
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ad2 & 1) == 0) {
    func_0x00f78a20(0x3d36258);
    bRam0000000003eb4ad2 = 1;
  }
  if (*(long *)(lVar7 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x58) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    uVar9 = 0;
    if (*(long *)(lVar7 + 0x38) != 0) {
      uVar9 = /*System.Collections.Generic.HashSet<UsableType>$$Clear*/ func_0x021e2d18(*(long *)(lVar7 + 0x38),uRam0000000003d36258);
    }
    *(undefined8 *)(lVar7 + 0x38) = 0;
    return uVar9;
  }
  auVar17 = func_0x00f78af4();
  uVar11 = auVar17._8_8_;
  lVar6 = *(long *)(auVar17._0_8_ + 0x28);
  if (lVar6 != 0) {
    plVar3 = &lStack_40;
    puVar15 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetColliderEnabled;
code_r0x0329e954:
    *(undefined8 *)((long)plVar3 + -0x30) = unaff_x22;
    *(undefined8 *)((long)plVar3 + -0x28) = unaff_x21;
    *(long *)((long)plVar3 + -0x20) = lVar5;
    *(long *)((long)plVar3 + -0x18) = lVar7;
    *(undefined8 ****)((long)plVar3 + -0x10) = pppuVar13;
    *(undefined **)((long)plVar3 + -8) = puVar15;
    if (pcRam0000000003ec2648 == (code *)0x0) {
      pcRam0000000003ec2648 =
           (code *)func_0x00f789d4("UnityEngine.Collider::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0329e9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*pcRam0000000003ec2648)(lVar6,uVar11);
    return uVar9;
  }
  uVar11 = func_0x00f78af4();
  lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar11,0);
  uVar12 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(uVar11,0);
  if (lVar6 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*pcRam0000000003ebf4c0)(lVar6,uVar12);
    return uVar9;
  }
  lVar8 = func_0x00f78af4();
  puVar1 = &uStack_90;
  pppuVar14 = (undefined8 ***)&stack0xffffffffffffff80;
  lVar5 = 0x3eb4000;
  uStack_90 = uVar11;
  lStack_88 = lVar6;
  if ((bRam0000000003eb4ad7 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad7 = 1;
  }
  lVar6 = *(long *)(lVar8 + 0x20);
  if (lVar6 != 0) {
    uVar11 = 0x3d23c18;
    uVar12 = 1;
    puVar15 = &UNK_014b8208;
    goto code_r0x0321a930;
  }
  lVar7 = func_0x00f78af4();
  plVar3 = &uStack_b0;
  uStack_b0 = 0x3eb4000;
  puStack_98 = &Atlas_Gameplay_Pickups_PickupBox__DeSpawnBox;
  pppuVar13 = &ppuStack_a0;
  *(undefined2 *)(lVar7 + 0x44) = 1;
  lStack_c8 = lVar8;
  lStack_a8 = lVar8;
  ppuStack_a0 = pppuVar14;
  if ((*(long *)(lVar7 + 0x10) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar7 + 0x10) + 0x28), lStack_c8 = lVar7, lVar6 != 0)) {
    uVar11 = 0;
    puVar15 = &UNK_014b8288;
    goto code_r0x0329e954;
  }
  lVar8 = func_0x00f78af4();
  puVar1 = &uStack_d0;
  uStack_d0 = 0x3eb4000;
  puStack_b8 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__PlayDeSpawnAnimation;
  pppuVar14 = &ppuStack_c0;
  ppuStack_c0 = pppuVar13;
  if ((bRam0000000003eb4ad8 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad8 = 1;
  }
  lVar6 = *(long *)(lVar8 + 0x20);
  if (lVar6 != 0) {
    uVar11 = 0x3d23c18;
    uVar12 = 1;
    puVar15 = &UNK_014b8300;
    goto code_r0x0321a930;
  }
  uVar9 = func_0x00f78af4();
  puStack_f0 = &ppuStack_e0;
  puStack_d8 = &Atlas_Gameplay_Pickups_PickupBox__ResetRespawnTimer;
  if (*(long *)(uVar9 + 0x18) != 0) {
    *(undefined4 *)(uVar9 + 0x40) = *(undefined4 *)(*(long *)(uVar9 + 0x18) + 0x18);
    return uVar9;
  }
  ppuStack_e0 = pppuVar14;
  uVar9 = func_0x00f78af4();
  puVar2 = &uStack_100;
  uStack_100 = 0x3eb4000;
  puStack_e8 = &Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox;
  lStack_f8 = lVar8;
  if (*(char *)(uVar9 + 0x44) == '\0') {
    if (*(char *)(uVar9 + 0x45) == '\0') {
      return uVar9;
    }
    lVar8 = *(long *)(uVar9 + 0x10);
    if (lVar8 == 0) goto code_r0x014b83f8;
    puVar15 = &UNK_014b83c0;
    uVar10 = uVar9;
    pppuVar13 = (undefined8 ***)&puStack_f0;
    puStack_f0 = &ppuStack_e0;
  }
  else {
    uVar10 = *(ulong *)(uVar9 + 0x10);
    if (uVar10 == 0) {
code_r0x014b83f8:
      puVar15 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasDeSpawnFinished;
      uVar10 = func_0x00f78af4();
    }
    else {
      puVar15 = &UNK_014b8394;
      puStack_f0 = &ppuStack_e0;
    }
    puVar2 = (undefined8 *)auStack_180;
    uStack_120 = 0x3eb4000;
    pppuVar13 = &ppuStack_110;
    uStack_118 = uVar9;
    ppuStack_110 = &puStack_f0;
    puStack_108 = puVar15;
    if ((bRam0000000003eb4ada & 1) == 0) {
      func_0x00f78a20(0x3d23c18);
      bRam0000000003eb4ada = 1;
    }
    if (*(long *)(uVar10 + 0x20) != 0) {
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_178,*(long *)(uVar10 + 0x20),0,0);
      uStack_148 = uStack_170;
      uStack_150 = uStack_178;
      uStack_138 = uStack_160;
      uStack_140 = uStack_168;
      uStack_130 = uStack_158;
      iVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_150,0);
      if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return (ulong)(iVar4 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 0xc));
    }
    puVar15 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasSpawnFinished;
    lVar8 = func_0x00f78af4();
  }
  puVar1 = (undefined8 *)((long)puVar2 + -0x80);
  *(undefined8 *)((long)puVar2 + -0x20) = 0x3eb4000;
  *(ulong *)((long)puVar2 + -0x18) = uVar10;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar13;
  *(undefined **)((long)puVar2 + -8) = puVar15;
  uVar11 = 0x3eb4000;
  if ((bRam0000000003eb4ad9 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad9 = 1;
  }
  if (*(long *)(lVar8 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar2 + -0x78),*(long *)(lVar8 + 0x20),0,0);
    *(undefined8 *)((long)puVar2 + -0x48) = *(undefined8 *)((long)puVar2 + -0x70);
    *(undefined8 *)((long)puVar2 + -0x50) = *(undefined8 *)((long)puVar2 + -0x78);
    *(undefined8 *)((long)puVar2 + -0x38) = *(undefined8 *)((long)puVar2 + -0x60);
    *(undefined8 *)((long)puVar2 + -0x40) = *(undefined8 *)((long)puVar2 + -0x68);
    *(undefined4 *)((long)puVar2 + -0x30) = *(undefined4 *)((long)puVar2 + -0x58);
    iVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar2 + -0x50),0);
    if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar4 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 8));
  }
  auVar17 = func_0x00f78af4();
  uVar12 = auVar17._8_8_;
  *(undefined1 **)((long)puVar2 + -0x90) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -0x88) =
       &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetAnimatorEnabled;
  lVar6 = *(long *)(auVar17._0_8_ + 0x20);
  if (lVar6 == 0) {
    lVar5 = func_0x00f78af4();
    *(undefined8 *)((long)puVar2 + -0xb0) = 0x3eb4000;
    *(long *)((long)puVar2 + -0xa8) = lVar8;
    *(undefined1 **)((long)puVar2 + -0xa0) = (undefined1 *)((long)puVar2 + -0x90);
    *(undefined **)((long)puVar2 + -0x98) = &Atlas_Gameplay_Pickups_PickupBox__DestroyBox;
    if ((bRam0000000003eb4ad3 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4ad3 = 1;
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      uVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar5 + 0x10),0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)puVar2 + -0xc0) = unaff_x22;
      *(undefined8 *)((long)puVar2 + -0xb8) = unaff_x21;
      *(undefined8 *)((long)puVar2 + -0xb0) = *(undefined8 *)((long)puVar2 + -0xb0);
      *(undefined8 *)((long)puVar2 + -0xa8) = *(undefined8 *)((long)puVar2 + -0xa8);
      *(undefined8 *)((long)puVar2 + -0xa0) = *(undefined8 *)((long)puVar2 + -0xa0);
      *(undefined8 *)((long)puVar2 + -0x98) = *(undefined8 *)((long)puVar2 + -0x98);
      if ((bRam0000000003ec0230 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ec0230 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (pcRam0000000003ec0228 == (code *)0x0) {
        pcRam0000000003ec0228 =
             (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*pcRam0000000003ec0228)(0,uVar11);
      return uVar9;
    }
    uVar9 = func_0x00f78af4();
    *(float *)(uVar9 + 0x40) = *(float *)(uVar9 + 0x40) - extraout_s0;
    return uVar9;
  }
  pppuVar14 = *(undefined8 ****)((long)puVar2 + -0x90);
  puVar15 = *(undefined **)((long)puVar2 + -0x88);
code_r0x0321a930:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)((long)puVar1 + -0x20) = uVar11;
  *(long *)((long)puVar1 + -0x18) = lVar8;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar14;
  *(undefined **)((long)puVar1 + -8) = puVar15;
  if (pcRam0000000003ebe9d8 == (code *)0x0) {
    pcRam0000000003ebe9d8 =
         (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (*pcRam0000000003ebe9d8)(lVar6,uVar12);
  return uVar9;
}



// ============================================================
// RVA: 0x14b80e4 | Atlas.Gameplay.Pickups.PickupBox.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014b8204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b8284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b82fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b8390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b83bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b8394) */
/* WARNING: Removing unreachable block (ram,0x014b8398) */
/* WARNING: Removing unreachable block (ram,0x014b83a0) */
/* WARNING: Removing unreachable block (ram,0x014b8300) */
/* WARNING: Removing unreachable block (ram,0x014b8310) */
/* WARNING: Removing unreachable block (ram,0x014b8318) */
/* WARNING: Removing unreachable block (ram,0x014b831c) */
/* WARNING: Removing unreachable block (ram,0x014b8320) */
/* WARNING: Removing unreachable block (ram,0x014b8288) */
/* WARNING: Removing unreachable block (ram,0x014b8290) */
/* WARNING: Removing unreachable block (ram,0x014b829c) */
/* WARNING: Removing unreachable block (ram,0x014b8208) */
/* WARNING: Removing unreachable block (ram,0x014b8218) */
/* WARNING: Removing unreachable block (ram,0x014b8220) */
/* WARNING: Removing unreachable block (ram,0x014b8224) */
/* WARNING: Removing unreachable block (ram,0x014b8228) */
/* WARNING: Removing unreachable block (ram,0x03210958) */
/* WARNING: Removing unreachable block (ram,0x03210988) */
/* WARNING: Removing unreachable block (ram,0x0321099c) */
/* WARNING: Removing unreachable block (ram,0x014b83c0) */
/* WARNING: Removing unreachable block (ram,0x014b83c4) */
/* WARNING: Removing unreachable block (ram,0x014b83d0) */
/* WARNING: Removing unreachable block (ram,0x014b83d8) */

ulong Atlas_Gameplay_Pickups_PickupBox__DeInit(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined *puVar13;
  float extraout_s0;
  undefined1 auVar14 [16];
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *puVar2;
  
  pppuVar11 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ad2 & 1) == 0) {
    func_0x00f78a20(0x3d36258);
    bRam0000000003eb4ad2 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    uVar5 = 0;
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar5 = /*System.Collections.Generic.HashSet<UsableType>$$Clear*/ func_0x021e2d18(*(long *)(param_1 + 0x38),uRam0000000003d36258);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    return uVar5;
  }
  auVar14 = func_0x00f78af4();
  uVar7 = auVar14._8_8_;
  lVar6 = *(long *)(auVar14._0_8_ + 0x28);
  if (lVar6 != 0) {
    puVar3 = (undefined8 *)&stack0xffffffffffffffe0;
    puVar13 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetColliderEnabled;
code_r0x0329e954:
    *(undefined8 *)((long)puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)((long)puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)((long)puVar3 + -0x20) = 0x3eb4000;
    *(long *)((long)puVar3 + -0x18) = param_1;
    *(undefined8 ****)((long)puVar3 + -0x10) = pppuVar11;
    *(undefined **)((long)puVar3 + -8) = puVar13;
    if (pcRam0000000003ec2648 == (code *)0x0) {
      pcRam0000000003ec2648 =
           (code *)func_0x00f789d4("UnityEngine.Collider::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0329e9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*pcRam0000000003ec2648)(lVar6,uVar7);
    return uVar5;
  }
  uVar7 = func_0x00f78af4();
  lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar7,0);
  uVar8 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(uVar7,0);
  if (lVar6 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*pcRam0000000003ebf4c0)(lVar6,uVar8);
    return uVar5;
  }
  lVar9 = func_0x00f78af4();
  puVar1 = &uStack_70;
  pppuVar12 = (undefined8 ***)&stack0xffffffffffffffa0;
  uStack_70 = uVar7;
  lStack_68 = lVar6;
  if ((bRam0000000003eb4ad7 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad7 = 1;
  }
  lVar6 = *(long *)(lVar9 + 0x20);
  if (lVar6 != 0) {
    uVar7 = 0x3d23c18;
    uVar8 = 1;
    puVar13 = &UNK_014b8208;
    goto code_r0x0321a930;
  }
  param_1 = func_0x00f78af4();
  puVar3 = &uStack_90;
  uStack_90 = 0x3eb4000;
  puStack_78 = &Atlas_Gameplay_Pickups_PickupBox__DeSpawnBox;
  pppuVar11 = &ppuStack_80;
  *(undefined2 *)(param_1 + 0x44) = 1;
  lStack_a8 = lVar9;
  lStack_88 = lVar9;
  ppuStack_80 = pppuVar12;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x28), lStack_a8 = param_1, lVar6 != 0)) {
    uVar7 = 0;
    puVar13 = &UNK_014b8288;
    goto code_r0x0329e954;
  }
  lVar9 = func_0x00f78af4();
  puVar1 = &uStack_b0;
  uStack_b0 = 0x3eb4000;
  puStack_98 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__PlayDeSpawnAnimation;
  pppuVar12 = &ppuStack_a0;
  ppuStack_a0 = pppuVar11;
  if ((bRam0000000003eb4ad8 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad8 = 1;
  }
  lVar6 = *(long *)(lVar9 + 0x20);
  if (lVar6 != 0) {
    uVar7 = 0x3d23c18;
    uVar8 = 1;
    puVar13 = &UNK_014b8300;
    goto code_r0x0321a930;
  }
  uVar5 = func_0x00f78af4();
  puStack_d0 = &ppuStack_c0;
  puStack_b8 = &Atlas_Gameplay_Pickups_PickupBox__ResetRespawnTimer;
  if (*(long *)(uVar5 + 0x18) != 0) {
    *(undefined4 *)(uVar5 + 0x40) = *(undefined4 *)(*(long *)(uVar5 + 0x18) + 0x18);
    return uVar5;
  }
  ppuStack_c0 = pppuVar12;
  uVar5 = func_0x00f78af4();
  puVar2 = &uStack_e0;
  uStack_e0 = 0x3eb4000;
  puStack_c8 = &Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox;
  lStack_d8 = lVar9;
  if (*(char *)(uVar5 + 0x44) == '\0') {
    if (*(char *)(uVar5 + 0x45) == '\0') {
      return uVar5;
    }
    lVar9 = *(long *)(uVar5 + 0x10);
    if (lVar9 == 0) goto code_r0x014b83f8;
    puVar13 = &UNK_014b83c0;
    uVar10 = uVar5;
    pppuVar11 = (undefined8 ***)&puStack_d0;
    puStack_d0 = &ppuStack_c0;
  }
  else {
    uVar10 = *(ulong *)(uVar5 + 0x10);
    if (uVar10 == 0) {
code_r0x014b83f8:
      puVar13 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasDeSpawnFinished;
      uVar10 = func_0x00f78af4();
    }
    else {
      puVar13 = &UNK_014b8394;
      puStack_d0 = &ppuStack_c0;
    }
    puVar2 = (undefined8 *)auStack_160;
    uStack_100 = 0x3eb4000;
    pppuVar11 = &ppuStack_f0;
    uStack_f8 = uVar5;
    ppuStack_f0 = &puStack_d0;
    puStack_e8 = puVar13;
    if ((bRam0000000003eb4ada & 1) == 0) {
      func_0x00f78a20(0x3d23c18);
      bRam0000000003eb4ada = 1;
    }
    if (*(long *)(uVar10 + 0x20) != 0) {
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_158,*(long *)(uVar10 + 0x20),0,0);
      uStack_128 = uStack_150;
      uStack_130 = uStack_158;
      uStack_118 = uStack_140;
      uStack_120 = uStack_148;
      uStack_110 = uStack_138;
      iVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_130,0);
      if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return (ulong)(iVar4 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 0xc));
    }
    puVar13 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasSpawnFinished;
    lVar9 = func_0x00f78af4();
  }
  puVar1 = (undefined8 *)((long)puVar2 + -0x80);
  *(undefined8 *)((long)puVar2 + -0x20) = 0x3eb4000;
  *(ulong *)((long)puVar2 + -0x18) = uVar10;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar11;
  *(undefined **)((long)puVar2 + -8) = puVar13;
  uVar7 = 0x3eb4000;
  if ((bRam0000000003eb4ad9 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad9 = 1;
  }
  if (*(long *)(lVar9 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar2 + -0x78),*(long *)(lVar9 + 0x20),0,0);
    *(undefined8 *)((long)puVar2 + -0x48) = *(undefined8 *)((long)puVar2 + -0x70);
    *(undefined8 *)((long)puVar2 + -0x50) = *(undefined8 *)((long)puVar2 + -0x78);
    *(undefined8 *)((long)puVar2 + -0x38) = *(undefined8 *)((long)puVar2 + -0x60);
    *(undefined8 *)((long)puVar2 + -0x40) = *(undefined8 *)((long)puVar2 + -0x68);
    *(undefined4 *)((long)puVar2 + -0x30) = *(undefined4 *)((long)puVar2 + -0x58);
    iVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar2 + -0x50),0);
    if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar4 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 8));
  }
  auVar14 = func_0x00f78af4();
  uVar8 = auVar14._8_8_;
  *(undefined1 **)((long)puVar2 + -0x90) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -0x88) =
       &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetAnimatorEnabled;
  lVar6 = *(long *)(auVar14._0_8_ + 0x20);
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    *(undefined8 *)((long)puVar2 + -0xb0) = 0x3eb4000;
    *(long *)((long)puVar2 + -0xa8) = lVar9;
    *(undefined1 **)((long)puVar2 + -0xa0) = (undefined1 *)((long)puVar2 + -0x90);
    *(undefined **)((long)puVar2 + -0x98) = &Atlas_Gameplay_Pickups_PickupBox__DestroyBox;
    if ((bRam0000000003eb4ad3 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4ad3 = 1;
    }
    if (*(long *)(lVar6 + 0x10) != 0) {
      uVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x10),0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)puVar2 + -0xc0) = unaff_x22;
      *(undefined8 *)((long)puVar2 + -0xb8) = unaff_x21;
      *(undefined8 *)((long)puVar2 + -0xb0) = *(undefined8 *)((long)puVar2 + -0xb0);
      *(undefined8 *)((long)puVar2 + -0xa8) = *(undefined8 *)((long)puVar2 + -0xa8);
      *(undefined8 *)((long)puVar2 + -0xa0) = *(undefined8 *)((long)puVar2 + -0xa0);
      *(undefined8 *)((long)puVar2 + -0x98) = *(undefined8 *)((long)puVar2 + -0x98);
      if ((bRam0000000003ec0230 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ec0230 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (pcRam0000000003ec0228 == (code *)0x0) {
        pcRam0000000003ec0228 =
             (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*pcRam0000000003ec0228)(0,uVar7);
      return uVar5;
    }
    uVar5 = func_0x00f78af4();
    *(float *)(uVar5 + 0x40) = *(float *)(uVar5 + 0x40) - extraout_s0;
    return uVar5;
  }
  pppuVar12 = *(undefined8 ****)((long)puVar2 + -0x90);
  puVar13 = *(undefined **)((long)puVar2 + -0x88);
code_r0x0321a930:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)((long)puVar1 + -0x20) = uVar7;
  *(long *)((long)puVar1 + -0x18) = lVar9;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar12;
  *(undefined **)((long)puVar1 + -8) = puVar13;
  if (pcRam0000000003ebe9d8 == (code *)0x0) {
    pcRam0000000003ebe9d8 =
         (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*pcRam0000000003ebe9d8)(lVar6,uVar8);
  return uVar5;
}



// ============================================================
// RVA: 0x14b8254 | Atlas.Gameplay.Pickups.PickupBox.DeSpawnBox
// ============================================================

/* WARNING: Possible PIC construction at 0x014b8290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b82fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b8390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b83bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b8394) */
/* WARNING: Removing unreachable block (ram,0x014b8398) */
/* WARNING: Removing unreachable block (ram,0x014b83a0) */
/* WARNING: Removing unreachable block (ram,0x014b8300) */
/* WARNING: Removing unreachable block (ram,0x014b8310) */
/* WARNING: Removing unreachable block (ram,0x014b8318) */
/* WARNING: Removing unreachable block (ram,0x014b831c) */
/* WARNING: Removing unreachable block (ram,0x014b8320) */
/* WARNING: Removing unreachable block (ram,0x03210958) */
/* WARNING: Removing unreachable block (ram,0x03210988) */
/* WARNING: Removing unreachable block (ram,0x0321099c) */
/* WARNING: Removing unreachable block (ram,0x014b8294) */
/* WARNING: Removing unreachable block (ram,0x014b829c) */
/* WARNING: Removing unreachable block (ram,0x014b83c0) */
/* WARNING: Removing unreachable block (ram,0x014b83c4) */
/* WARNING: Removing unreachable block (ram,0x014b83d0) */
/* WARNING: Removing unreachable block (ram,0x014b83d8) */

ulong Atlas_Gameplay_Pickups_PickupBox__DeSpawnBox(long param_1)

{
  undefined1 *puVar1;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***pppuVar10;
  undefined1 **ppuVar11;
  undefined *puVar12;
  float extraout_s0;
  undefined1 auVar13 [16];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined8 *puVar2;
  
  *(undefined2 *)(param_1 + 0x44) = 1;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x28), lVar4 == 0)) {
LAB_014b82b0:
    puVar12 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__PlayDeSpawnAnimation;
    lVar4 = func_0x00f78af4();
  }
  else {
    /*UnityEngine.Collider$$set_enabled*/ func_0x0329e954(lVar4,0,0);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) goto LAB_014b82b0;
    puVar12 = (undefined *)0x14b8294;
  }
  puVar1 = &stack0xffffffffffffffc0;
  ppuVar11 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  puStack_28 = puVar12;
  if ((bRam0000000003eb4ad8 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad8 = 1;
  }
  lVar5 = *(long *)(lVar4 + 0x20);
  if (lVar5 != 0) {
    uVar9 = 0x3d23c18;
    uVar8 = 1;
    puVar12 = &UNK_014b8300;
    goto code_r0x0321a930;
  }
  uVar6 = func_0x00f78af4();
  puStack_60 = &ppuStack_50;
  puStack_48 = &Atlas_Gameplay_Pickups_PickupBox__ResetRespawnTimer;
  if (*(long *)(uVar6 + 0x18) != 0) {
    *(undefined4 *)(uVar6 + 0x40) = *(undefined4 *)(*(long *)(uVar6 + 0x18) + 0x18);
    return uVar6;
  }
  ppuStack_50 = ppuVar11;
  uVar6 = func_0x00f78af4();
  puVar2 = &uStack_70;
  uStack_70 = 0x3eb4000;
  puStack_58 = &Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox;
  lStack_68 = lVar4;
  if (*(char *)(uVar6 + 0x44) == '\0') {
    if (*(char *)(uVar6 + 0x45) == '\0') {
      return uVar6;
    }
    lVar4 = *(long *)(uVar6 + 0x10);
    if (lVar4 == 0) goto code_r0x014b83f8;
    puVar12 = &UNK_014b83c0;
    uVar7 = uVar6;
    pppuVar10 = (undefined8 ***)&puStack_60;
    puStack_60 = &ppuStack_50;
  }
  else {
    uVar7 = *(ulong *)(uVar6 + 0x10);
    if (uVar7 == 0) {
code_r0x014b83f8:
      puVar12 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasDeSpawnFinished;
      uVar7 = func_0x00f78af4();
    }
    else {
      puVar12 = &UNK_014b8394;
      puStack_60 = &ppuStack_50;
    }
    puVar2 = (undefined8 *)auStack_f0;
    uStack_90 = 0x3eb4000;
    pppuVar10 = &ppuStack_80;
    uStack_88 = uVar6;
    ppuStack_80 = &puStack_60;
    puStack_78 = puVar12;
    if ((bRam0000000003eb4ada & 1) == 0) {
      func_0x00f78a20(0x3d23c18);
      bRam0000000003eb4ada = 1;
    }
    if (*(long *)(uVar7 + 0x20) != 0) {
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_e8,*(long *)(uVar7 + 0x20),0,0);
      uStack_b8 = uStack_e0;
      uStack_c0 = uStack_e8;
      uStack_a8 = uStack_d0;
      uStack_b0 = uStack_d8;
      uStack_a0 = uStack_c8;
      iVar3 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_c0,0);
      if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return (ulong)(iVar3 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 0xc));
    }
    puVar12 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasSpawnFinished;
    lVar4 = func_0x00f78af4();
  }
  puVar1 = (undefined1 *)((long)puVar2 + -0x80);
  *(undefined8 *)((long)puVar2 + -0x20) = 0x3eb4000;
  *(ulong *)((long)puVar2 + -0x18) = uVar7;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar10;
  *(undefined **)((long)puVar2 + -8) = puVar12;
  uVar9 = 0x3eb4000;
  if ((bRam0000000003eb4ad9 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad9 = 1;
  }
  if (*(long *)(lVar4 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar2 + -0x78),*(long *)(lVar4 + 0x20),0,0);
    *(undefined8 *)((long)puVar2 + -0x48) = *(undefined8 *)((long)puVar2 + -0x70);
    *(undefined8 *)((long)puVar2 + -0x50) = *(undefined8 *)((long)puVar2 + -0x78);
    *(undefined8 *)((long)puVar2 + -0x38) = *(undefined8 *)((long)puVar2 + -0x60);
    *(undefined8 *)((long)puVar2 + -0x40) = *(undefined8 *)((long)puVar2 + -0x68);
    *(undefined4 *)((long)puVar2 + -0x30) = *(undefined4 *)((long)puVar2 + -0x58);
    iVar3 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4((undefined1 *)((long)puVar2 + -0x50),0);
    if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar3 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 8));
  }
  auVar13 = func_0x00f78af4();
  uVar8 = auVar13._8_8_;
  *(undefined1 **)((long)puVar2 + -0x90) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -0x88) =
       &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetAnimatorEnabled;
  lVar5 = *(long *)(auVar13._0_8_ + 0x20);
  if (lVar5 == 0) {
    lVar5 = func_0x00f78af4();
    *(undefined8 *)((long)puVar2 + -0xb0) = 0x3eb4000;
    *(long *)((long)puVar2 + -0xa8) = lVar4;
    *(undefined1 **)((long)puVar2 + -0xa0) = (undefined1 *)((long)puVar2 + -0x90);
    *(undefined **)((long)puVar2 + -0x98) = &Atlas_Gameplay_Pickups_PickupBox__DestroyBox;
    if ((bRam0000000003eb4ad3 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4ad3 = 1;
    }
    if (*(long *)(lVar5 + 0x10) != 0) {
      uVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar5 + 0x10),0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)puVar2 + -0xc0) = unaff_x22;
      *(undefined8 *)((long)puVar2 + -0xb8) = unaff_x21;
      *(undefined8 *)((long)puVar2 + -0xb0) = *(undefined8 *)((long)puVar2 + -0xb0);
      *(undefined8 *)((long)puVar2 + -0xa8) = *(undefined8 *)((long)puVar2 + -0xa8);
      *(undefined8 *)((long)puVar2 + -0xa0) = *(undefined8 *)((long)puVar2 + -0xa0);
      *(undefined8 *)((long)puVar2 + -0x98) = *(undefined8 *)((long)puVar2 + -0x98);
      if ((bRam0000000003ec0230 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ec0230 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (pcRam0000000003ec0228 == (code *)0x0) {
        pcRam0000000003ec0228 =
             (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*pcRam0000000003ec0228)(0,uVar9);
      return uVar6;
    }
    uVar6 = func_0x00f78af4();
    *(float *)(uVar6 + 0x40) = *(float *)(uVar6 + 0x40) - extraout_s0;
    return uVar6;
  }
  ppuVar11 = *(undefined1 ***)((long)puVar2 + -0x90);
  puVar12 = *(undefined **)((long)puVar2 + -0x88);
code_r0x0321a930:
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = uVar9;
  *(long *)(puVar1 + -0x18) = lVar4;
  *(undefined1 ***)(puVar1 + -0x10) = ppuVar11;
  *(undefined **)(puVar1 + -8) = puVar12;
  if (pcRam0000000003ebe9d8 == (code *)0x0) {
    pcRam0000000003ebe9d8 =
         (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*pcRam0000000003ebe9d8)(lVar5,uVar8);
  return uVar6;
}



// ============================================================
// RVA: 0x14b834c | Atlas.Gameplay.Pickups.PickupBox.ResetRespawnTimer
// ============================================================

/* WARNING: Possible PIC construction at 0x014b8390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b83bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b8394) */
/* WARNING: Removing unreachable block (ram,0x014b8398) */
/* WARNING: Removing unreachable block (ram,0x014b83a0) */
/* WARNING: Removing unreachable block (ram,0x014b83c0) */
/* WARNING: Removing unreachable block (ram,0x014b83c4) */
/* WARNING: Removing unreachable block (ram,0x014b83d0) */
/* WARNING: Removing unreachable block (ram,0x014b83d8) */

ulong Atlas_Gameplay_Pickups_PickupBox__ResetRespawnTimer(ulong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***pppuVar7;
  undefined *puVar8;
  float extraout_s0;
  undefined1 auVar9 [16];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  undefined8 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18);
    return param_1;
  }
  uVar3 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffd0;
  puStack_18 = &Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox;
  if (*(char *)(uVar3 + 0x44) == '\0') {
    if (*(char *)(uVar3 + 0x45) == '\0') {
      return uVar3;
    }
    lVar4 = *(long *)(uVar3 + 0x10);
    if (lVar4 != 0) {
      puVar8 = &UNK_014b83c0;
      pppuVar7 = (undefined8 ***)&puStack_20;
      puStack_20 = (undefined8 *)&stack0xfffffffffffffff0;
      goto code_r0x014b84b4;
    }
code_r0x014b83f8:
    puVar8 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasDeSpawnFinished;
    puStack_20 = (undefined8 *)&stack0xfffffffffffffff0;
    uVar3 = func_0x00f78af4();
  }
  else {
    uVar3 = *(ulong *)(uVar3 + 0x10);
    if (uVar3 == 0) goto code_r0x014b83f8;
    puVar8 = &UNK_014b8394;
    puStack_20 = (undefined8 *)&stack0xfffffffffffffff0;
  }
  puVar1 = auStack_b0;
  pppuVar7 = &ppuStack_40;
  unaff_x20 = 0x3eb4000;
  ppuStack_40 = &puStack_20;
  puStack_38 = puVar8;
  if ((bRam0000000003eb4ada & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ada = 1;
  }
  if (*(long *)(uVar3 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_a8,*(long *)(uVar3 + 0x20),0,0);
    uStack_78 = uStack_a0;
    uStack_80 = uStack_a8;
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    uStack_60 = uStack_88;
    iVar2 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_80,0);
    if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar2 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 0xc));
  }
  puVar8 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasSpawnFinished;
  lVar4 = func_0x00f78af4();
code_r0x014b84b4:
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(ulong *)(puVar1 + -0x18) = uVar3;
  *(undefined8 ****)(puVar1 + -0x10) = pppuVar7;
  *(undefined **)(puVar1 + -8) = puVar8;
  if ((bRam0000000003eb4ad9 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad9 = 1;
  }
  if (*(long *)(lVar4 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(puVar1 + -0x78,*(long *)(lVar4 + 0x20),0,0);
    *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)(puVar1 + -0x70);
    *(undefined8 *)(puVar1 + -0x50) = *(undefined8 *)(puVar1 + -0x78);
    *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)(puVar1 + -0x60);
    *(undefined8 *)(puVar1 + -0x40) = *(undefined8 *)(puVar1 + -0x68);
    *(undefined4 *)(puVar1 + -0x30) = *(undefined4 *)(puVar1 + -0x58);
    iVar2 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(puVar1 + -0x50,0);
    if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar2 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 8));
  }
  auVar9 = func_0x00f78af4();
  *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x88) = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetAnimatorEnabled;
  lVar5 = *(long *)(auVar9._0_8_ + 0x20);
  if (lVar5 != 0) {
    *(undefined8 *)(puVar1 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar1 + -0xa8) = unaff_x21;
    *(undefined8 *)(puVar1 + -0xa0) = 0x3eb4000;
    *(long *)(puVar1 + -0x98) = lVar4;
    *(undefined8 *)(puVar1 + -0x90) = *(undefined8 *)(puVar1 + -0x90);
    *(undefined8 *)(puVar1 + -0x88) = *(undefined8 *)(puVar1 + -0x88);
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000003ebe9d8)(lVar5,auVar9._8_8_);
    return uVar3;
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0xb0) = 0x3eb4000;
  *(long *)(puVar1 + -0xa8) = lVar4;
  *(undefined1 **)(puVar1 + -0xa0) = puVar1 + -0x90;
  *(undefined **)(puVar1 + -0x98) = &Atlas_Gameplay_Pickups_PickupBox__DestroyBox;
  if ((bRam0000000003eb4ad3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ad3 = 1;
  }
  if (*(long *)(lVar5 + 0x10) != 0) {
    uVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar5 + 0x10),0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(puVar1 + -0xc0) = unaff_x22;
    *(undefined8 *)(puVar1 + -0xb8) = unaff_x21;
    *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xb0);
    *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xa8);
    *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0xa0);
    *(undefined8 *)(puVar1 + -0x98) = *(undefined8 *)(puVar1 + -0x98);
    if ((bRam0000000003ec0230 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ec0230 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pcRam0000000003ec0228 == (code *)0x0) {
      pcRam0000000003ec0228 =
           (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000003ec0228)(0,uVar6);
    return uVar3;
  }
  uVar3 = func_0x00f78af4();
  *(float *)(uVar3 + 0x40) = *(float *)(uVar3 + 0x40) - extraout_s0;
  return uVar3;
}



// ============================================================
// RVA: 0x14b8370 | Atlas.Gameplay.Pickups.PickupBox.UpdateDeSpawnBox
// ============================================================

/* WARNING: Possible PIC construction at 0x014b8390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b83bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b8394) */
/* WARNING: Removing unreachable block (ram,0x014b8398) */
/* WARNING: Removing unreachable block (ram,0x014b83a0) */
/* WARNING: Removing unreachable block (ram,0x014b83c0) */
/* WARNING: Removing unreachable block (ram,0x014b83c4) */
/* WARNING: Removing unreachable block (ram,0x014b83d0) */
/* WARNING: Removing unreachable block (ram,0x014b83d8) */

ulong Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox(ulong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***pppuVar7;
  undefined *puVar8;
  float extraout_s0;
  undefined1 auVar9 [16];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 **ppuStack_30;
  undefined *puStack_28;
  
  puVar1 = &stack0xffffffffffffffe0;
  if (*(char *)(param_1 + 0x44) == '\0') {
    if (*(char *)(param_1 + 0x45) == '\0') {
      return param_1;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
      puVar8 = (undefined *)0x14b83c0;
      pppuVar7 = (undefined8 ***)&stack0xfffffffffffffff0;
      goto code_r0x014b84b4;
    }
LAB_014b83f8:
    puVar8 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasDeSpawnFinished;
    param_1 = func_0x00f78af4();
  }
  else {
    param_1 = *(ulong *)(param_1 + 0x10);
    if (param_1 == 0) goto LAB_014b83f8;
    puVar8 = (undefined *)0x14b8394;
  }
  puVar1 = auStack_a0;
  pppuVar7 = &ppuStack_30;
  unaff_x20 = 0x3eb4000;
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  puStack_28 = puVar8;
  if ((bRam0000000003eb4ada & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ada = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_98,*(long *)(param_1 + 0x20),0,0);
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    uStack_58 = uStack_80;
    uStack_60 = uStack_88;
    uStack_50 = uStack_78;
    iVar2 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_70,0);
    if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar2 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 0xc));
  }
  puVar8 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasSpawnFinished;
  lVar3 = func_0x00f78af4();
code_r0x014b84b4:
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(ulong *)(puVar1 + -0x18) = param_1;
  *(undefined8 ****)(puVar1 + -0x10) = pppuVar7;
  *(undefined **)(puVar1 + -8) = puVar8;
  if ((bRam0000000003eb4ad9 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad9 = 1;
  }
  if (*(long *)(lVar3 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(puVar1 + -0x78,*(long *)(lVar3 + 0x20),0,0);
    *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)(puVar1 + -0x70);
    *(undefined8 *)(puVar1 + -0x50) = *(undefined8 *)(puVar1 + -0x78);
    *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)(puVar1 + -0x60);
    *(undefined8 *)(puVar1 + -0x40) = *(undefined8 *)(puVar1 + -0x68);
    *(undefined4 *)(puVar1 + -0x30) = *(undefined4 *)(puVar1 + -0x58);
    iVar2 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(puVar1 + -0x50,0);
    if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar2 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 8));
  }
  auVar9 = func_0x00f78af4();
  *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x88) = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetAnimatorEnabled;
  lVar4 = *(long *)(auVar9._0_8_ + 0x20);
  if (lVar4 != 0) {
    *(undefined8 *)(puVar1 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar1 + -0xa8) = unaff_x21;
    *(undefined8 *)(puVar1 + -0xa0) = 0x3eb4000;
    *(long *)(puVar1 + -0x98) = lVar3;
    *(undefined8 *)(puVar1 + -0x90) = *(undefined8 *)(puVar1 + -0x90);
    *(undefined8 *)(puVar1 + -0x88) = *(undefined8 *)(puVar1 + -0x88);
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*pcRam0000000003ebe9d8)(lVar4,auVar9._8_8_);
    return uVar6;
  }
  lVar4 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0xb0) = 0x3eb4000;
  *(long *)(puVar1 + -0xa8) = lVar3;
  *(undefined1 **)(puVar1 + -0xa0) = puVar1 + -0x90;
  *(undefined **)(puVar1 + -0x98) = &Atlas_Gameplay_Pickups_PickupBox__DestroyBox;
  if ((bRam0000000003eb4ad3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ad3 = 1;
  }
  if (*(long *)(lVar4 + 0x10) != 0) {
    uVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x10),0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(puVar1 + -0xc0) = unaff_x22;
    *(undefined8 *)(puVar1 + -0xb8) = unaff_x21;
    *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xb0);
    *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xa8);
    *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0xa0);
    *(undefined8 *)(puVar1 + -0x98) = *(undefined8 *)(puVar1 + -0x98);
    if ((bRam0000000003ec0230 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ec0230 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pcRam0000000003ec0228 == (code *)0x0) {
      pcRam0000000003ec0228 =
           (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*pcRam0000000003ec0228)(0,uVar5);
    return uVar6;
  }
  uVar6 = func_0x00f78af4();
  *(float *)(uVar6 + 0x40) = *(float *)(uVar6 + 0x40) - extraout_s0;
  return uVar6;
}



// ============================================================
// RVA: 0x14b858c | Atlas.Gameplay.Pickups.PickupBox.DestroyBox
// ============================================================

void Atlas_Gameplay_Pickups_PickupBox__DestroyBox(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  float extraout_s0;
  
  if ((bRam0000000003eb4ad3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ad3 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x10),0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec0230 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ec0230 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pcRam0000000003ec0228 == (code *)0x0) {
      pcRam0000000003ec0228 =
           (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec0228)(0,uVar1);
    return;
  }
  lVar2 = func_0x00f78af4();
  *(float *)(lVar2 + 0x40) = *(float *)(lVar2 + 0x40) - extraout_s0;
  return;
}



// ============================================================
// RVA: 0x14b8608 | Atlas.Gameplay.Pickups.PickupBox.CountDownRespawnTimer
// ============================================================

void Atlas_Gameplay_Pickups_PickupBox__CountDownRespawnTimer(float param_1,long param_2)

{
  *(float *)(param_2 + 0x40) = *(float *)(param_2 + 0x40) - param_1;
  return;
}



// ============================================================
// RVA: 0x14b8618 | Atlas.Gameplay.Pickups.PickupBox.OnTriggerEnter
// ============================================================

void Atlas_Gameplay_Pickups_PickupBox__OnTriggerEnter(long *param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  long lStack_68;
  
  if ((bRam0000000003eb4ad4 & 1) == 0) {
    func_0x00f78a20(0x3d2a4e8);
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ad4 = 1;
  }
  if (param_2 != 0) {
    uVar6 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_2,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    if (iVar4 == 0) {
      return;
    }
    lVar7 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_2,0);
    if (lVar7 != 0) {
      plVar8 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar7,uRam0000000003d534a0);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_014b8744;
          }
          piVar14 = piVar14 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8,0);
LAB_014b8744:
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar8 == (long *)0x0) {
        return;
      }
      if (*(byte *)(*plVar8 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) {
        return;
      }
      if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8
                   ) != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78) {
        return;
      }
      lVar7 = param_1[10];
      if (lVar7 == 0) {
        return;
      }
      lStack_68 = lVar7;
      lVar10 = *(long *)(lVar7 + 0x68);
      if (lVar10 == 0) {
        plVar17 = &lStack_68;
        lVar16 = 1;
      }
      else {
        lVar16 = *(long *)(lVar10 + 0x18);
        if (lVar16 == 0) {
          return;
        }
        plVar17 = (long *)(lVar10 + 0x20);
      }
      lVar10 = 0;
      do {
        lVar11 = plVar17[lVar10];
        pcVar15 = *(code **)(lVar11 + 0x10);
        plVar1 = *(long **)(lVar11 + 0x20);
        lVar11 = *(long *)(lVar11 + 0x28);
        if (*(short *)(lVar11 + 0x48) == -1) {
          func_0x00f78ad8(lVar11);
        }
        iVar4 = func_0x00f78a4c(lVar11);
        bVar3 = *(char *)(lVar11 + 0x4a) == '\x02';
        if (iVar4 == 0) {
          if (bVar3) {
            if (plVar1 == (long *)0x0) {
code_r0x01e6ecc8:
              (*pcVar15)(param_1,plVar8,lVar11);
            }
            else {
              if (((*(short *)(lVar11 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
                 (*(long *)(lVar7 + 0x18) == 0)) goto code_r0x01e6ebbc;
              iVar4 = func_0x00f78a44(lVar11);
              iVar5 = func_0x00f78ec0(lVar11);
              if (iVar4 == 0) {
                uVar2 = *(ushort *)(lVar11 + 0x48);
                if (iVar5 == 0) {
                  lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
                  (**(code **)(lVar11 + 0x138))
                            (plVar1,param_1,plVar8,*(undefined8 *)(lVar11 + 0x140));
                  goto code_r0x01e6ecd8;
                }
                lVar11 = func_0x00f78a48(lVar11);
                lVar12 = *plVar1;
                uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == lVar11) {
                      puVar9 = (undefined8 *)
                               (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                      goto code_r0x01e6ee70;
                    }
                    piVar14 = piVar14 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x01e6ee70:
                pcVar15 = (code *)*puVar9;
                puVar9 = (undefined8 *)puVar9[1];
              }
              else {
                if (iVar5 == 0) {
                  uVar6 = *(undefined8 *)
                           (*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar12 = *plVar1;
                  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                  if (uVar13 != 0) {
                    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                        lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e6ee48;
                      }
                      piVar14 = piVar14 + 4;
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                  lVar12 = func_0x00fac1f0(plVar1);
code_r0x01e6ee48:
                  uVar6 = *(undefined8 *)(lVar12 + 8);
                }
                puVar9 = (undefined8 *)func_0x00f78acc(uVar6,lVar11);
                pcVar15 = (code *)*puVar9;
              }
              (*pcVar15)(plVar1,param_1,plVar8,puVar9);
            }
          }
          else {
            if ((*(short *)(lVar11 + 0x48) == -1) || (*(long *)(lVar7 + 0x18) == 0))
            goto code_r0x01e6ecc8;
            iVar4 = func_0x00f78a44(lVar11);
            iVar5 = func_0x00f78ec0(lVar11);
            if (iVar4 == 0) {
              uVar2 = *(ushort *)(lVar11 + 0x48);
              if (iVar5 == 0) {
                lVar11 = *param_1 + (ulong)uVar2 * 0x10;
                (**(code **)(lVar11 + 0x138))(param_1,plVar8,*(undefined8 *)(lVar11 + 0x140));
                goto code_r0x01e6ecd8;
              }
              lVar11 = func_0x00f78a48(lVar11);
              lVar12 = *param_1;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar11) {
                    puVar9 = (undefined8 *)
                             (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x01e6ee04;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)func_0x00fac1f0(param_1,lVar11,(ulong)uVar2);
code_r0x01e6ee04:
              pcVar15 = (code *)*puVar9;
              puVar9 = (undefined8 *)puVar9[1];
            }
            else {
              if (iVar5 == 0) {
                uVar6 = *(undefined8 *)(*param_1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar12 = *param_1;
                uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                      lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01e6eddc;
                    }
                    piVar14 = piVar14 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                lVar12 = func_0x00fac1f0(param_1);
code_r0x01e6eddc:
                uVar6 = *(undefined8 *)(lVar12 + 8);
              }
              puVar9 = (undefined8 *)func_0x00f78acc(uVar6,lVar11);
              pcVar15 = (code *)*puVar9;
            }
            (*pcVar15)(param_1,plVar8,puVar9);
          }
        }
        else {
          if (bVar3) goto code_r0x01e6ecc8;
code_r0x01e6ebbc:
          (*pcVar15)(plVar1,param_1,plVar8,lVar11);
        }
code_r0x01e6ecd8:
        lVar10 = lVar10 + 1;
        if (lVar10 == lVar16) {
          return;
        }
      } while( true );
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14b87c8 | Atlas.Gameplay.Pickups.PickupBox.OnCollisionEnter
// ============================================================

void Atlas_Gameplay_Pickups_PickupBox__OnCollisionEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x14b87cc | Atlas.Gameplay.Pickups.PickupBox.OnCollisionStay
// ============================================================

void Atlas_Gameplay_Pickups_PickupBox__OnCollisionStay(void)

{
  return;
}



// ============================================================
// RVA: 0x14b87d0 | Atlas.Gameplay.Pickups.PickupBox.OnCollisionExit
// ============================================================

void Atlas_Gameplay_Pickups_PickupBox__OnCollisionExit(void)

{
  return;
}



// ============================================================
// RVA: 0x14b87d4 | Atlas.Gameplay.Pickups.PickupBox.OnTriggerStay
// ============================================================

void Atlas_Gameplay_Pickups_PickupBox__OnTriggerStay(void)

{
  return;
}



// ============================================================
// RVA: 0x14b87d8 | Atlas.Gameplay.Pickups.PickupBox.OnTriggerExit
// ============================================================

void Atlas_Gameplay_Pickups_PickupBox__OnTriggerExit(void)

{
  return;
}



// ============================================================
// RVA: 0x14b87dc | Atlas.Gameplay.Pickups.PickupBox..ctor
// ============================================================

void Atlas_Gameplay_Pickups_PickupBox___ctor(void)

{
  return;
}



