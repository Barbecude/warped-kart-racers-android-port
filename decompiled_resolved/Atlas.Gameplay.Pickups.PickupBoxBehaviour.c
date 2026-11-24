// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Pickups.PickupBoxBehaviour

// ============================================================
// RVA: 0x14b8154 | Atlas.Gameplay.Pickups.PickupBoxBehaviour.SetColliderEnabled
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

ulong Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetColliderEnabled(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x19;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ****unaff_x29;
  undefined8 ****ppppuVar11;
  undefined8 unaff_x30;
  undefined *puVar12;
  float extraout_s0;
  undefined1 auVar13 [16];
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 ***pppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 ***pppuStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *puVar2;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
code_r0x0329e954:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ec2648 == (code *)0x0) {
      pcRam0000000003ec2648 =
           (code *)func_0x00f789d4("UnityEngine.Collider::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0329e9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*pcRam0000000003ec2648)(lVar4,param_2);
    return uVar9;
  }
  uVar5 = func_0x00f78af4();
  lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar5,0);
  uVar6 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(uVar5,0);
  if (lVar4 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*pcRam0000000003ebf4c0)(lVar4,uVar6);
    return uVar9;
  }
  lVar7 = func_0x00f78af4();
  puVar1 = &uStack_50;
  ppppuVar11 = (undefined8 ****)&stack0xffffffffffffffc0;
  unaff_x20 = 0x3eb4000;
  uStack_50 = uVar5;
  lStack_48 = lVar4;
  if ((bRam0000000003eb4ad7 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad7 = 1;
  }
  lVar4 = *(long *)(lVar7 + 0x20);
  if (lVar4 != 0) {
    uVar5 = 0x3d23c18;
    uVar6 = 1;
    puVar12 = &UNK_014b8208;
    goto code_r0x0321a930;
  }
  unaff_x19 = func_0x00f78af4();
  uStack_70 = 0x3eb4000;
  pcStack_58 = Atlas_Gameplay_Pickups_PickupBox__DeSpawnBox;
  unaff_x29 = &pppuStack_60;
  *(undefined2 *)(unaff_x19 + 0x44) = 1;
  lVar10 = lVar7;
  lStack_68 = lVar7;
  pppuStack_60 = ppppuVar11;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x28), lVar10 = unaff_x19, lVar4 != 0)) {
    param_2 = 0;
    unaff_x30 = 0x14b8288;
    register0x00000008 = (BADSPACEBASE *)&uStack_70;
    goto code_r0x0329e954;
  }
  lVar7 = func_0x00f78af4();
  puVar1 = &uStack_90;
  uStack_90 = 0x3eb4000;
  puStack_78 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__PlayDeSpawnAnimation;
  ppppuVar11 = &pppuStack_80;
  lStack_88 = lVar10;
  pppuStack_80 = unaff_x29;
  if ((bRam0000000003eb4ad8 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad8 = 1;
  }
  lVar4 = *(long *)(lVar7 + 0x20);
  if (lVar4 != 0) {
    uVar5 = 0x3d23c18;
    uVar6 = 1;
    puVar12 = &UNK_014b8300;
    goto code_r0x0321a930;
  }
  uVar9 = func_0x00f78af4();
  ppuStack_b0 = &pppuStack_a0;
  pcStack_98 = Atlas_Gameplay_Pickups_PickupBox__ResetRespawnTimer;
  if (*(long *)(uVar9 + 0x18) != 0) {
    *(undefined4 *)(uVar9 + 0x40) = *(undefined4 *)(*(long *)(uVar9 + 0x18) + 0x18);
    return uVar9;
  }
  pppuStack_a0 = ppppuVar11;
  uVar9 = func_0x00f78af4();
  puVar2 = &uStack_c0;
  uStack_c0 = 0x3eb4000;
  pcStack_a8 = Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox;
  lStack_b8 = lVar7;
  if (*(char *)(uVar9 + 0x44) == '\0') {
    if (*(char *)(uVar9 + 0x45) == '\0') {
      return uVar9;
    }
    lVar7 = *(long *)(uVar9 + 0x10);
    if (lVar7 == 0) goto LAB_014b83f8;
    puVar12 = (undefined *)0x14b83c0;
    uVar8 = uVar9;
    ppppuVar11 = (undefined8 ****)&ppuStack_b0;
    ppuStack_b0 = &pppuStack_a0;
  }
  else {
    uVar8 = *(ulong *)(uVar9 + 0x10);
    if (uVar8 == 0) {
LAB_014b83f8:
      puVar12 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasDeSpawnFinished;
      uVar8 = func_0x00f78af4();
    }
    else {
      puVar12 = (undefined *)0x14b8394;
      ppuStack_b0 = &pppuStack_a0;
    }
    puVar2 = (undefined8 *)auStack_140;
    uStack_e0 = 0x3eb4000;
    ppppuVar11 = &pppuStack_d0;
    uStack_d8 = uVar9;
    pppuStack_d0 = &ppuStack_b0;
    puStack_c8 = puVar12;
    if ((bRam0000000003eb4ada & 1) == 0) {
      func_0x00f78a20(0x3d23c18);
      bRam0000000003eb4ada = 1;
    }
    if (*(long *)(uVar8 + 0x20) != 0) {
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_138,*(long *)(uVar8 + 0x20),0,0);
      uStack_108 = uStack_130;
      uStack_110 = uStack_138;
      uStack_f8 = uStack_120;
      uStack_100 = uStack_128;
      uStack_f0 = uStack_118;
      iVar3 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_110,0);
      if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return (ulong)(iVar3 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 0xc));
    }
    puVar12 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasSpawnFinished;
    lVar7 = func_0x00f78af4();
  }
  puVar1 = (undefined8 *)((long)puVar2 + -0x80);
  *(undefined8 *)((long)puVar2 + -0x20) = 0x3eb4000;
  *(ulong *)((long)puVar2 + -0x18) = uVar8;
  *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar11;
  *(undefined **)((long)puVar2 + -8) = puVar12;
  uVar5 = 0x3eb4000;
  if ((bRam0000000003eb4ad9 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad9 = 1;
  }
  if (*(long *)(lVar7 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar2 + -0x78),*(long *)(lVar7 + 0x20),0,0);
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
  uVar6 = auVar13._8_8_;
  *(undefined1 **)((long)puVar2 + -0x90) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -0x88) =
       &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetAnimatorEnabled;
  lVar4 = *(long *)(auVar13._0_8_ + 0x20);
  if (lVar4 == 0) {
    lVar4 = func_0x00f78af4();
    *(undefined8 *)((long)puVar2 + -0xb0) = 0x3eb4000;
    *(long *)((long)puVar2 + -0xa8) = lVar7;
    *(undefined1 **)((long)puVar2 + -0xa0) = (undefined1 *)((long)puVar2 + -0x90);
    *(code **)((long)puVar2 + -0x98) = Atlas_Gameplay_Pickups_PickupBox__DestroyBox;
    if ((bRam0000000003eb4ad3 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4ad3 = 1;
    }
    if (*(long *)(lVar4 + 0x10) == 0) {
      uVar9 = func_0x00f78af4();
      *(float *)(uVar9 + 0x40) = *(float *)(uVar9 + 0x40) - extraout_s0;
      return uVar9;
    }
    uVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x10),0);
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
           (code *)func_0x00f789d4("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*pcRam0000000003ec0228)(0,uVar5);
    return uVar9;
  }
  ppppuVar11 = *(undefined8 *****)((long)puVar2 + -0x90);
  puVar12 = *(undefined **)((long)puVar2 + -0x88);
code_r0x0321a930:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)((long)puVar1 + -0x20) = uVar5;
  *(long *)((long)puVar1 + -0x18) = lVar7;
  *(undefined8 *****)((long)puVar1 + -0x10) = ppppuVar11;
  *(undefined **)((long)puVar1 + -8) = puVar12;
  if (pcRam0000000003ebe9d8 == (code *)0x0) {
    pcRam0000000003ebe9d8 =
         (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (*pcRam0000000003ebe9d8)(lVar4,uVar6);
  return uVar9;
}



// ============================================================
// RVA: 0x14b8174 | Atlas.Gameplay.Pickups.PickupBoxBehaviour.SetGameObjectActive
// ============================================================

/* WARNING: Possible PIC construction at 0x014b8204: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014b8294) */
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

ulong Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetGameObjectActive(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***pppuVar11;
  undefined *puVar12;
  float extraout_s0;
  undefined1 auVar13 [16];
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  code *pcStack_98;
  undefined8 **ppuStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 **ppuStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 *puVar2;
  
  lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  uVar5 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(param_1,0);
  if (lVar4 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*pcRam0000000003ebf4c0)(lVar4,uVar5);
    return uVar9;
  }
  lVar6 = func_0x00f78af4();
  puVar1 = &uStack_40;
  pppuVar11 = (undefined8 ***)&stack0xffffffffffffffd0;
  uStack_40 = param_1;
  lStack_38 = lVar4;
  if ((bRam0000000003eb4ad7 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad7 = 1;
  }
  lVar4 = *(long *)(lVar6 + 0x20);
  if (lVar4 != 0) {
    uVar5 = 0x3d23c18;
    uVar10 = 1;
    puVar12 = &UNK_014b8208;
    goto code_r0x0321a930;
  }
  lVar7 = func_0x00f78af4();
  uStack_60 = 0x3eb4000;
  pcStack_48 = Atlas_Gameplay_Pickups_PickupBox__DeSpawnBox;
  *(undefined2 *)(lVar7 + 0x44) = 1;
  lVar4 = lVar6;
  lStack_58 = lVar6;
  ppuStack_50 = pppuVar11;
  if ((*(long *)(lVar7 + 0x10) == 0) ||
     (lVar6 = *(long *)(*(long *)(lVar7 + 0x10) + 0x28), lVar4 = lVar7, lVar6 == 0)) {
LAB_014b82b0:
    puVar12 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__PlayDeSpawnAnimation;
    lVar6 = func_0x00f78af4();
  }
  else {
    /*UnityEngine.Collider$$set_enabled*/ func_0x0329e954(lVar6,0,0);
    lVar6 = *(long *)(lVar7 + 0x10);
    if (lVar6 == 0) goto LAB_014b82b0;
    puVar12 = (undefined *)0x14b8294;
  }
  puVar1 = &uStack_80;
  uStack_80 = 0x3eb4000;
  pppuVar11 = &ppuStack_70;
  lStack_78 = lVar4;
  ppuStack_70 = &ppuStack_50;
  puStack_68 = puVar12;
  if ((bRam0000000003eb4ad8 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad8 = 1;
  }
  lVar4 = *(long *)(lVar6 + 0x20);
  if (lVar4 != 0) {
    uVar5 = 0x3d23c18;
    uVar10 = 1;
    puVar12 = &UNK_014b8300;
    goto code_r0x0321a930;
  }
  uVar9 = func_0x00f78af4();
  puStack_a0 = &ppuStack_90;
  pcStack_88 = Atlas_Gameplay_Pickups_PickupBox__ResetRespawnTimer;
  if (*(long *)(uVar9 + 0x18) != 0) {
    *(undefined4 *)(uVar9 + 0x40) = *(undefined4 *)(*(long *)(uVar9 + 0x18) + 0x18);
    return uVar9;
  }
  ppuStack_90 = pppuVar11;
  uVar9 = func_0x00f78af4();
  puVar2 = &uStack_b0;
  uStack_b0 = 0x3eb4000;
  pcStack_98 = Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox;
  lStack_a8 = lVar6;
  if (*(char *)(uVar9 + 0x44) == '\0') {
    if (*(char *)(uVar9 + 0x45) == '\0') {
      return uVar9;
    }
    lVar6 = *(long *)(uVar9 + 0x10);
    if (lVar6 == 0) goto LAB_014b83f8;
    puVar12 = (undefined *)0x14b83c0;
    uVar8 = uVar9;
    pppuVar11 = (undefined8 ***)&puStack_a0;
    puStack_a0 = &ppuStack_90;
  }
  else {
    uVar8 = *(ulong *)(uVar9 + 0x10);
    if (uVar8 == 0) {
LAB_014b83f8:
      puVar12 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasDeSpawnFinished;
      uVar8 = func_0x00f78af4();
    }
    else {
      puVar12 = (undefined *)0x14b8394;
      puStack_a0 = &ppuStack_90;
    }
    puVar2 = (undefined8 *)auStack_130;
    uStack_d0 = 0x3eb4000;
    pppuVar11 = &ppuStack_c0;
    uStack_c8 = uVar9;
    ppuStack_c0 = &puStack_a0;
    puStack_b8 = puVar12;
    if ((bRam0000000003eb4ada & 1) == 0) {
      func_0x00f78a20(0x3d23c18);
      bRam0000000003eb4ada = 1;
    }
    if (*(long *)(uVar8 + 0x20) != 0) {
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_128,*(long *)(uVar8 + 0x20),0,0);
      uStack_f8 = uStack_120;
      uStack_100 = uStack_128;
      uStack_e8 = uStack_110;
      uStack_f0 = uStack_118;
      uStack_e0 = uStack_108;
      iVar3 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_100,0);
      if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return (ulong)(iVar3 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 0xc));
    }
    puVar12 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasSpawnFinished;
    lVar6 = func_0x00f78af4();
  }
  puVar1 = (undefined8 *)((long)puVar2 + -0x80);
  *(undefined8 *)((long)puVar2 + -0x20) = 0x3eb4000;
  *(ulong *)((long)puVar2 + -0x18) = uVar8;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar11;
  *(undefined **)((long)puVar2 + -8) = puVar12;
  uVar5 = 0x3eb4000;
  if ((bRam0000000003eb4ad9 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad9 = 1;
  }
  if (*(long *)(lVar6 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar2 + -0x78),*(long *)(lVar6 + 0x20),0,0);
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
  uVar10 = auVar13._8_8_;
  *(undefined1 **)((long)puVar2 + -0x90) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -0x88) =
       &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetAnimatorEnabled;
  lVar4 = *(long *)(auVar13._0_8_ + 0x20);
  if (lVar4 == 0) {
    lVar4 = func_0x00f78af4();
    *(undefined8 *)((long)puVar2 + -0xb0) = 0x3eb4000;
    *(long *)((long)puVar2 + -0xa8) = lVar6;
    *(undefined1 **)((long)puVar2 + -0xa0) = (undefined1 *)((long)puVar2 + -0x90);
    *(code **)((long)puVar2 + -0x98) = Atlas_Gameplay_Pickups_PickupBox__DestroyBox;
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
      uVar9 = (*pcRam0000000003ec0228)(0,uVar5);
      return uVar9;
    }
    uVar9 = func_0x00f78af4();
    *(float *)(uVar9 + 0x40) = *(float *)(uVar9 + 0x40) - extraout_s0;
    return uVar9;
  }
  pppuVar11 = *(undefined8 ****)((long)puVar2 + -0x90);
  puVar12 = *(undefined **)((long)puVar2 + -0x88);
code_r0x0321a930:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)((long)puVar1 + -0x20) = uVar5;
  *(long *)((long)puVar1 + -0x18) = lVar6;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar11;
  *(undefined **)((long)puVar1 + -8) = puVar12;
  if (pcRam0000000003ebe9d8 == (code *)0x0) {
    pcRam0000000003ebe9d8 =
         (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (*pcRam0000000003ebe9d8)(lVar4,uVar10);
  return uVar9;
}



// ============================================================
// RVA: 0x14b81bc | Atlas.Gameplay.Pickups.PickupBoxBehaviour.PlaySpawnAnimation
// ============================================================

/* WARNING: Possible PIC construction at 0x014b8204: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014b8294) */
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

ulong Atlas_Gameplay_Pickups_PickupBoxBehaviour__PlaySpawnAnimation(long param_1)

{
  undefined8 *puVar1;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***pppuVar11;
  undefined *puVar12;
  float extraout_s0;
  undefined1 auVar13 [16];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  code *pcStack_78;
  undefined8 **ppuStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 **ppuStack_30;
  code *pcStack_28;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffe0;
  pppuVar11 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ad7 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad7 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    uVar10 = 0x3d23c18;
    uVar9 = 1;
    puVar12 = (undefined *)0x14b8208;
    goto code_r0x0321a930;
  }
  lVar5 = func_0x00f78af4();
  uStack_40 = 0x3eb4000;
  pcStack_28 = Atlas_Gameplay_Pickups_PickupBox__DeSpawnBox;
  *(undefined2 *)(lVar5 + 0x44) = 1;
  lVar4 = param_1;
  lStack_38 = param_1;
  ppuStack_30 = pppuVar11;
  if ((*(long *)(lVar5 + 0x10) == 0) ||
     (lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + 0x28), lVar4 = lVar5, lVar6 == 0)) {
LAB_014b82b0:
    puVar12 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__PlayDeSpawnAnimation;
    param_1 = func_0x00f78af4();
  }
  else {
    /*UnityEngine.Collider$$set_enabled*/ func_0x0329e954(lVar6,0,0);
    param_1 = *(long *)(lVar5 + 0x10);
    if (param_1 == 0) goto LAB_014b82b0;
    puVar12 = (undefined *)0x14b8294;
  }
  puVar1 = &uStack_60;
  uStack_60 = 0x3eb4000;
  pppuVar11 = &ppuStack_50;
  lStack_58 = lVar4;
  ppuStack_50 = &ppuStack_30;
  puStack_48 = puVar12;
  if ((bRam0000000003eb4ad8 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad8 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    uVar10 = 0x3d23c18;
    uVar9 = 1;
    puVar12 = &UNK_014b8300;
    goto code_r0x0321a930;
  }
  uVar7 = func_0x00f78af4();
  puStack_80 = &ppuStack_70;
  pcStack_68 = Atlas_Gameplay_Pickups_PickupBox__ResetRespawnTimer;
  if (*(long *)(uVar7 + 0x18) != 0) {
    *(undefined4 *)(uVar7 + 0x40) = *(undefined4 *)(*(long *)(uVar7 + 0x18) + 0x18);
    return uVar7;
  }
  ppuStack_70 = pppuVar11;
  uVar7 = func_0x00f78af4();
  puVar2 = &uStack_90;
  uStack_90 = 0x3eb4000;
  pcStack_78 = Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox;
  lStack_88 = param_1;
  if (*(char *)(uVar7 + 0x44) == '\0') {
    if (*(char *)(uVar7 + 0x45) == '\0') {
      return uVar7;
    }
    param_1 = *(long *)(uVar7 + 0x10);
    if (param_1 == 0) goto LAB_014b83f8;
    puVar12 = (undefined *)0x14b83c0;
    uVar8 = uVar7;
    pppuVar11 = (undefined8 ***)&puStack_80;
    puStack_80 = &ppuStack_70;
  }
  else {
    uVar8 = *(ulong *)(uVar7 + 0x10);
    if (uVar8 == 0) {
LAB_014b83f8:
      puVar12 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasDeSpawnFinished;
      uVar8 = func_0x00f78af4();
    }
    else {
      puVar12 = (undefined *)0x14b8394;
      puStack_80 = &ppuStack_70;
    }
    puVar2 = (undefined8 *)auStack_110;
    uStack_b0 = 0x3eb4000;
    pppuVar11 = &ppuStack_a0;
    uStack_a8 = uVar7;
    ppuStack_a0 = &puStack_80;
    puStack_98 = puVar12;
    if ((bRam0000000003eb4ada & 1) == 0) {
      func_0x00f78a20(0x3d23c18);
      bRam0000000003eb4ada = 1;
    }
    if (*(long *)(uVar8 + 0x20) != 0) {
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_108,*(long *)(uVar8 + 0x20),0,0);
      uStack_d8 = uStack_100;
      uStack_e0 = uStack_108;
      uStack_c8 = uStack_f0;
      uStack_d0 = uStack_f8;
      uStack_c0 = uStack_e8;
      iVar3 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_e0,0);
      if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return (ulong)(iVar3 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 0xc));
    }
    puVar12 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasSpawnFinished;
    param_1 = func_0x00f78af4();
  }
  puVar1 = (undefined8 *)((long)puVar2 + -0x80);
  *(undefined8 *)((long)puVar2 + -0x20) = 0x3eb4000;
  *(ulong *)((long)puVar2 + -0x18) = uVar8;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar11;
  *(undefined **)((long)puVar2 + -8) = puVar12;
  uVar10 = 0x3eb4000;
  if ((bRam0000000003eb4ad9 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad9 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar2 + -0x78),*(long *)(param_1 + 0x20),0,0);
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
  uVar9 = auVar13._8_8_;
  *(undefined1 **)((long)puVar2 + -0x90) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -0x88) =
       &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetAnimatorEnabled;
  lVar4 = *(long *)(auVar13._0_8_ + 0x20);
  if (lVar4 == 0) {
    lVar4 = func_0x00f78af4();
    *(undefined8 *)((long)puVar2 + -0xb0) = 0x3eb4000;
    *(long *)((long)puVar2 + -0xa8) = param_1;
    *(undefined1 **)((long)puVar2 + -0xa0) = (undefined1 *)((long)puVar2 + -0x90);
    *(code **)((long)puVar2 + -0x98) = Atlas_Gameplay_Pickups_PickupBox__DestroyBox;
    if ((bRam0000000003eb4ad3 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4ad3 = 1;
    }
    if (*(long *)(lVar4 + 0x10) != 0) {
      uVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x10),0);
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
      uVar7 = (*pcRam0000000003ec0228)(0,uVar10);
      return uVar7;
    }
    uVar7 = func_0x00f78af4();
    *(float *)(uVar7 + 0x40) = *(float *)(uVar7 + 0x40) - extraout_s0;
    return uVar7;
  }
  pppuVar11 = *(undefined8 ****)((long)puVar2 + -0x90);
  puVar12 = *(undefined **)((long)puVar2 + -0x88);
code_r0x0321a930:
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)((long)puVar1 + -0x20) = uVar10;
  *(long *)((long)puVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar11;
  *(undefined **)((long)puVar1 + -8) = puVar12;
  if (pcRam0000000003ebe9d8 == (code *)0x0) {
    pcRam0000000003ebe9d8 =
         (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*pcRam0000000003ebe9d8)(lVar4,uVar9);
  return uVar7;
}



// ============================================================
// RVA: 0x14b82b4 | Atlas.Gameplay.Pickups.PickupBoxBehaviour.PlayDeSpawnAnimation
// ============================================================

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
/* WARNING: Removing unreachable block (ram,0x014b83c0) */
/* WARNING: Removing unreachable block (ram,0x014b83c4) */
/* WARNING: Removing unreachable block (ram,0x014b83d0) */
/* WARNING: Removing unreachable block (ram,0x014b83d8) */

ulong Atlas_Gameplay_Pickups_PickupBoxBehaviour__PlayDeSpawnAnimation(long param_1)

{
  undefined1 *puVar1;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ***pppuVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  float extraout_s0;
  undefined1 auVar13 [16];
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined8 *puVar2;
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar10 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ad8 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad8 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    uVar8 = 0x3d23c18;
    uVar7 = 1;
    uVar11 = 0x14b8300;
    goto code_r0x0321a930;
  }
  uVar5 = func_0x00f78af4();
  puStack_40 = &puStack_30;
  pcStack_28 = Atlas_Gameplay_Pickups_PickupBox__ResetRespawnTimer;
  if (*(long *)(uVar5 + 0x18) != 0) {
    *(undefined4 *)(uVar5 + 0x40) = *(undefined4 *)(*(long *)(uVar5 + 0x18) + 0x18);
    return uVar5;
  }
  puStack_30 = puVar10;
  uVar5 = func_0x00f78af4();
  puVar2 = &uStack_50;
  uStack_50 = 0x3eb4000;
  pcStack_38 = Atlas_Gameplay_Pickups_PickupBox__UpdateDeSpawnBox;
  lStack_48 = param_1;
  if (*(char *)(uVar5 + 0x44) == '\0') {
    if (*(char *)(uVar5 + 0x45) == '\0') {
      return uVar5;
    }
    param_1 = *(long *)(uVar5 + 0x10);
    if (param_1 == 0) goto LAB_014b83f8;
    puVar12 = (undefined *)0x14b83c0;
    uVar6 = uVar5;
    pppuVar9 = (undefined8 ***)&puStack_40;
    puStack_40 = &puStack_30;
  }
  else {
    uVar6 = *(ulong *)(uVar5 + 0x10);
    if (uVar6 == 0) {
LAB_014b83f8:
      puVar12 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasDeSpawnFinished;
      uVar6 = func_0x00f78af4();
    }
    else {
      puVar12 = (undefined *)0x14b8394;
      puStack_40 = &puStack_30;
    }
    puVar2 = (undefined8 *)auStack_d0;
    uStack_70 = 0x3eb4000;
    pppuVar9 = &ppuStack_60;
    uStack_68 = uVar5;
    ppuStack_60 = &puStack_40;
    puStack_58 = puVar12;
    if ((bRam0000000003eb4ada & 1) == 0) {
      func_0x00f78a20(0x3d23c18);
      bRam0000000003eb4ada = 1;
    }
    if (*(long *)(uVar6 + 0x20) != 0) {
      /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_c8,*(long *)(uVar6 + 0x20),0,0);
      uStack_98 = uStack_c0;
      uStack_a0 = uStack_c8;
      uStack_88 = uStack_b0;
      uStack_90 = uStack_b8;
      uStack_80 = uStack_a8;
      iVar3 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_a0,0);
      if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return (ulong)(iVar3 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 0xc));
    }
    puVar12 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasSpawnFinished;
    param_1 = func_0x00f78af4();
  }
  puVar1 = (undefined1 *)((long)puVar2 + -0x80);
  *(undefined8 *)((long)puVar2 + -0x20) = 0x3eb4000;
  *(ulong *)((long)puVar2 + -0x18) = uVar6;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar9;
  *(undefined **)((long)puVar2 + -8) = puVar12;
  uVar8 = 0x3eb4000;
  if ((bRam0000000003eb4ad9 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad9 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50((undefined1 *)((long)puVar2 + -0x78),*(long *)(param_1 + 0x20),0,0);
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
  uVar7 = auVar13._8_8_;
  *(undefined1 **)((long)puVar2 + -0x90) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -0x88) =
       &Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetAnimatorEnabled;
  lVar4 = *(long *)(auVar13._0_8_ + 0x20);
  if (lVar4 == 0) {
    lVar4 = func_0x00f78af4();
    *(undefined8 *)((long)puVar2 + -0xb0) = 0x3eb4000;
    *(long *)((long)puVar2 + -0xa8) = param_1;
    *(undefined1 **)((long)puVar2 + -0xa0) = (undefined1 *)((long)puVar2 + -0x90);
    *(code **)((long)puVar2 + -0x98) = Atlas_Gameplay_Pickups_PickupBox__DestroyBox;
    if ((bRam0000000003eb4ad3 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4ad3 = 1;
    }
    if (*(long *)(lVar4 + 0x10) != 0) {
      uVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar4 + 0x10),0);
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
      uVar5 = (*pcRam0000000003ec0228)(0,uVar8);
      return uVar5;
    }
    uVar5 = func_0x00f78af4();
    *(float *)(uVar5 + 0x40) = *(float *)(uVar5 + 0x40) - extraout_s0;
    return uVar5;
  }
  puVar10 = *(undefined1 **)((long)puVar2 + -0x90);
  uVar11 = *(undefined8 *)((long)puVar2 + -0x88);
code_r0x0321a930:
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = uVar8;
  *(long *)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar10;
  *(undefined8 *)(puVar1 + -8) = uVar11;
  if (pcRam0000000003ebe9d8 == (code *)0x0) {
    pcRam0000000003ebe9d8 =
         (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*pcRam0000000003ebe9d8)(lVar4,uVar7);
  return uVar5;
}



// ============================================================
// RVA: 0x14b83fc | Atlas.Gameplay.Pickups.PickupBoxBehaviour.HasDeSpawnFinished
// ============================================================

ulong Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasDeSpawnFinished(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  float extraout_s0;
  undefined1 auVar5 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((bRam0000000003eb4ada & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ada = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_78,*(long *)(param_1 + 0x20),0,0);
    uStack_48 = uStack_70;
    uStack_50 = uStack_78;
    uStack_38 = uStack_60;
    uStack_40 = uStack_68;
    uStack_30 = uStack_58;
    iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_50,0);
    if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar1 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 0xc));
  }
  lVar2 = func_0x00f78af4();
  uStack_a0 = 0x3eb4000;
  puStack_88 = &Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasSpawnFinished;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ad9 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad9 = 1;
  }
  if (*(long *)(lVar2 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_f8,*(long *)(lVar2 + 0x20),0,0);
    uStack_c8 = uStack_f0;
    uStack_d0 = uStack_f8;
    uStack_b8 = uStack_e0;
    uStack_c0 = uStack_e8;
    uStack_b0 = uStack_d8;
    iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_d0,0);
    if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar1 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 8));
  }
  auVar5 = func_0x00f78af4();
  lVar2 = *(long *)(auVar5._0_8_ + 0x20);
  if (lVar2 != 0) {
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*pcRam0000000003ebe9d8)(lVar2,auVar5._8_8_);
    return uVar4;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4ad3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ad3 = 1;
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    uVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar2 + 0x10),0);
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
    uVar4 = (*pcRam0000000003ec0228)(0,uVar3);
    return uVar4;
  }
  uVar4 = func_0x00f78af4();
  *(float *)(uVar4 + 0x40) = *(float *)(uVar4 + 0x40) - extraout_s0;
  return uVar4;
}



// ============================================================
// RVA: 0x14b84b4 | Atlas.Gameplay.Pickups.PickupBoxBehaviour.HasSpawnFinished
// ============================================================

ulong Atlas_Gameplay_Pickups_PickupBoxBehaviour__HasSpawnFinished(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  float extraout_s0;
  undefined1 auVar5 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((bRam0000000003eb4ad9 & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    bRam0000000003eb4ad9 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_78,*(long *)(param_1 + 0x20),0,0);
    uStack_48 = uStack_70;
    uStack_50 = uStack_78;
    uStack_38 = uStack_60;
    uStack_40 = uStack_68;
    uStack_30 = uStack_58;
    iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_50,0);
    if (((*(ushort *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return (ulong)(iVar1 == *(int *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 8));
  }
  auVar5 = func_0x00f78af4();
  lVar2 = *(long *)(auVar5._0_8_ + 0x20);
  if (lVar2 != 0) {
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*pcRam0000000003ebe9d8)(lVar2,auVar5._8_8_);
    return uVar4;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4ad3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ad3 = 1;
  }
  if (*(long *)(lVar2 + 0x10) != 0) {
    uVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar2 + 0x10),0);
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
    uVar4 = (*pcRam0000000003ec0228)(0,uVar3);
    return uVar4;
  }
  uVar4 = func_0x00f78af4();
  *(float *)(uVar4 + 0x40) = *(float *)(uVar4 + 0x40) - extraout_s0;
  return uVar4;
}



// ============================================================
// RVA: 0x14b856c | Atlas.Gameplay.Pickups.PickupBoxBehaviour.SetAnimatorEnabled
// ============================================================

void Atlas_Gameplay_Pickups_PickupBoxBehaviour__SetAnimatorEnabled(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  float extraout_s0;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebe9d8)(lVar1,param_2);
    return;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4ad3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ad3 = 1;
  }
  if (*(long *)(lVar1 + 0x10) != 0) {
    uVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar1 + 0x10),0);
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
    (*pcRam0000000003ec0228)(0,uVar2);
    return;
  }
  lVar1 = func_0x00f78af4();
  *(float *)(lVar1 + 0x40) = *(float *)(lVar1 + 0x40) - extraout_s0;
  return;
}



// ============================================================
// RVA: 0x14b87e4 | Atlas.Gameplay.Pickups.PickupBoxBehaviour.get_BlipBehaviour
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupBoxBehaviour__get_BlipBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x14b87ec | Atlas.Gameplay.Pickups.PickupBoxBehaviour.get_DropShadowMaterial
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupBoxBehaviour__get_DropShadowMaterial(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x14b87f4 | Atlas.Gameplay.Pickups.PickupBoxBehaviour.Awake
// ============================================================

long Atlas_Gameplay_Pickups_PickupBoxBehaviour__Awake(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb4ad5 & 1) == 0) {
    func_0x00f78a20(0x3d23298);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ad5 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  if ((int)lVar1 == 0) {
    return lVar1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar4 = /*UnityEngine.Renderer$$get_sharedMaterial*/ func_0x0325bea4(*(long *)(param_1 + 0x38),0);
    uVar2 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
    /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar2,uVar4,0);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 != 0) {
      if (pcRam0000000003ec0ae0 == (code *)0x0) {
        pcRam0000000003ec0ae0 =
             (code *)func_0x00f789d4("UnityEngine.Renderer::SetMaterial(UnityEngine.Material)");
      }
                    /* WARNING: Could not recover jumptable at 0x0325bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (*pcRam0000000003ec0ae0)(lVar1,uVar2);
      return lVar1;
    }
  }
  lVar3 = func_0x00f78af4();
  lVar1 = lVar3;
  if ((bRam0000000003eb4ad6 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    lVar1 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ad6 = 1;
  }
  if (*(float *)(lVar3 + 0x50) != *(float *)(lVar3 + 0x40)) {
    uVar4 = *(undefined8 *)(lVar3 + 0x48);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
    if ((int)lVar1 != 0) {
      lVar1 = *(long *)(lVar3 + 0x48);
      if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar1 == 0) {
        uVar4 = func_0x00f78af4();
        lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar4,0);
        if (lVar1 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0);
          lVar1 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
          return lVar1;
        }
        lVar1 = func_0x00f78af4();
        return *(long *)(lVar1 + 0x58);
      }
      lVar1 = /*UnityEngine.Material$$SetFloat*/ func_0x0323ae00(*(undefined4 *)(lVar3 + 0x40),lVar1,
                              *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x10),0);
      *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(lVar3 + 0x40);
    }
  }
  return lVar1;
}



// ============================================================
// RVA: 0x14b88d8 | Atlas.Gameplay.Pickups.PickupBoxBehaviour.LateUpdate
// ============================================================

long Atlas_Gameplay_Pickups_PickupBoxBehaviour__LateUpdate(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  if ((bRam0000000003eb4ad6 & 1) == 0) {
    func_0x00f78a20(0x3d1fec0);
    lVar1 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ad6 = 1;
  }
  if (*(float *)(param_1 + 0x50) != *(float *)(param_1 + 0x40)) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
    if ((int)lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 0x48);
      if (((*(ushort *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar1 == 0) {
        uVar2 = func_0x00f78af4();
        lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar2,0);
        if (lVar1 != 0) {
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0);
          lVar1 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
          return lVar1;
        }
        lVar1 = func_0x00f78af4();
        return *(long *)(lVar1 + 0x58);
      }
      lVar1 = /*UnityEngine.Material$$SetFloat*/ func_0x0323ae00(*(undefined4 *)(param_1 + 0x40),lVar1,
                              *(undefined4 *)(*(long *)(/*Atlas.Rendering.AtlasShaders_TypeInfo*/ lRam0000000003d1fec0 + 0xb8) + 0x10),0);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
    }
  }
  return lVar1;
}



// ============================================================
// RVA: 0x14b89c0 | Atlas.Gameplay.Pickups.PickupBoxBehaviour.GetLightWorldPosition
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupBoxBehaviour__GetLightWorldPosition(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if (lVar1 != 0) {
    /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0);
    uVar2 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  return *(undefined8 *)(lVar1 + 0x58);
}



// ============================================================
// RVA: 0x14b89f4 | Atlas.Gameplay.Pickups.PickupBoxBehaviour.get_Owner
// ============================================================

undefined8 Atlas_Gameplay_Pickups_PickupBoxBehaviour__get_Owner(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x14b89fc | Atlas.Gameplay.Pickups.PickupBoxBehaviour.set_Owner
// ============================================================

void Atlas_Gameplay_Pickups_PickupBoxBehaviour__set_Owner(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}



// ============================================================
// RVA: 0x14b8a04 | Atlas.Gameplay.Pickups.PickupBoxBehaviour.OnCollisionEnter
// ============================================================

void Atlas_Gameplay_Pickups_PickupBoxBehaviour__OnCollisionEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x14b8a08 | Atlas.Gameplay.Pickups.PickupBoxBehaviour.OnCollisionStay
// ============================================================

void Atlas_Gameplay_Pickups_PickupBoxBehaviour__OnCollisionStay(void)

{
  return;
}



// ============================================================
// RVA: 0x14b8a0c | Atlas.Gameplay.Pickups.PickupBoxBehaviour.OnCollisionExit
// ============================================================

void Atlas_Gameplay_Pickups_PickupBoxBehaviour__OnCollisionExit(void)

{
  return;
}



// ============================================================
// RVA: 0x14b8a10 | Atlas.Gameplay.Pickups.PickupBoxBehaviour.OnTriggerEnter
// ============================================================

void Atlas_Gameplay_Pickups_PickupBoxBehaviour__OnTriggerEnter(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb4adb & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb4adb = 1;
  }
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 == (long *)0x0) {
    func_0x00f78af4();
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
        goto LAB_014b8aa8;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,3);
LAB_014b8aa8:
                    /* WARNING: Could not recover jumptable at 0x014b8ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x14b8ac8 | Atlas.Gameplay.Pickups.PickupBoxBehaviour.OnTriggerStay
// ============================================================

void Atlas_Gameplay_Pickups_PickupBoxBehaviour__OnTriggerStay(void)

{
  return;
}



// ============================================================
// RVA: 0x14b8acc | Atlas.Gameplay.Pickups.PickupBoxBehaviour.OnTriggerExit
// ============================================================

void Atlas_Gameplay_Pickups_PickupBoxBehaviour__OnTriggerExit(void)

{
  return;
}



// ============================================================
// RVA: 0x14b8ad0 | Atlas.Gameplay.Pickups.PickupBoxBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Pickups_PickupBoxBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0xbf800000;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



// ============================================================
// RVA: 0x14b8ae8 | Atlas.Gameplay.Pickups.PickupBoxBehaviour..cctor
// ============================================================

void Atlas_Gameplay_Pickups_PickupBoxBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb4adc & 1) == 0) {
    func_0x00f78a20(0x3d23c18);
    func_0x00f78a20(0x3d68f50);
    func_0x00f78a20(0x3d68f60);
    func_0x00f78a20(0x3d68f58);
    func_0x00f78a20(0x3d68f68);
    bRam0000000003eb4adc = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PickUpBoxSpawn')*/ uRam0000000003d68f60,0);
  **(undefined4 **)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PickUpBoxDeSpawn')*/ uRam0000000003d68f50,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 4) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PickUpBoxSpawnFinished')*/ uRam0000000003d68f68,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Anim_PickUpBoxDeSpawnFinished')*/ uRam0000000003d68f58,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Pickups.PickupBoxBehaviour_TypeInfo*/ lRam0000000003d23c18 + 0xb8) + 0xc) = uVar1;
  return;
}



