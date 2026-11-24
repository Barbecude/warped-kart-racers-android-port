// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.RicochetProjectile

// ============================================================
// RVA: 0x14e41ec | Atlas.Gameplay.Usables.RicochetProjectile.get_RicochetProjectileDefinition
// ============================================================

void Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetProjectileDefinition
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4bf8 & 1) == 0) {
    func_0x00f78a20(0x3d244d0);
    bRam0000000003eb4bf8 = 1;
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    lVar4 = **(long **)(param_1 + 0x30);
    if ((*(byte *)(lVar4 + 300) < *(byte *)(/*Atlas.Definitions.RicochetProjectileDefinition_TypeInfo*/ lRam0000000003d244d0 + 300)) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.RicochetProjectileDefinition_TypeInfo*/ lRam0000000003d244d0 + 300) * 8 + -8) !=
        /*Atlas.Definitions.RicochetProjectileDefinition_TypeInfo*/ lRam0000000003d244d0)) {
      lVar4 = func_0x00f78e5c();
      if ((bRam0000000003eb4bf9 & 1) == 0) {
        func_0x00f78a20(0x3d244c8);
        bRam0000000003eb4bf9 = 1;
      }
      if (*(long **)(lVar4 + 0x48) != (long *)0x0) {
        lVar4 = **(long **)(lVar4 + 0x48);
        if ((*(byte *)(lVar4 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.RicochetProjectileBehaviour_TypeInfo*/ lRam0000000003d244c8 + 300)) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.RicochetProjectileBehaviour_TypeInfo*/ lRam0000000003d244c8 + 300) * 8 + -8
                     ) != /*Atlas.Gameplay.Usables.RicochetProjectileBehaviour_TypeInfo*/ lRam0000000003d244c8)) {
          auVar5 = func_0x00f78e5c();
          lVar4 = auVar5._0_8_;
          if ((bRam0000000003eb4bfa & 1) == 0) {
            func_0x00f78a20(0x3d55958);
            func_0x00f78a20(0x3d3c470);
            func_0x00f78a20(0x3d1df08);
            bRam0000000003eb4bfa = 1;
          }
          Atlas_Gameplay_Usables_ProjectileUsable__Init
                    (lVar4,auVar5._8_8_,param_3,param_4,param_5,0);
          lVar1 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar4,0);
          if ((lVar1 != 0) && (*(long *)(lVar1 + 0x40) != 0)) {
            uVar2 = /*System.Linq.Enumerable$$Count<Toggle>*/ func_0x0184aa70(*(undefined8 *)(*(long *)(lVar1 + 0x40) + 0x28),
                                    uRam0000000003d55958);
            uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<Transform>_TypeInfo*/ uRam0000000003d1df08);
            /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar3,uVar2,uRam0000000003d3c470);
            *(undefined8 *)(lVar4 + 0x1c0) = uVar3;
            return;
          }
          lVar4 = func_0x00f78af4();
          if (*(char *)(lVar4 + 0x19) != '\0') {
            /*Atlas.Gameplay.Usables.RicochetProjectile$$OnTearDownParamsInternal*/ func_0x014e4408(lVar4);
          }
          if (*(char *)(lVar4 + 0x19) != '\0') {
            Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(lVar4,0);
          }
          *(undefined8 *)(lVar4 + 0xf8) = 0;
          *(undefined4 *)(lVar4 + 0x150) = 0;
          if (*(char *)(lVar4 + 0x19) != '\0') {
            Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar4,0);
          }
          if (*(char *)(lVar4 + 0x19) != '\0') {
            /*Atlas.Gameplay.Usables.Usable$$OnTearDownParamsInternal*/ func_0x01523890(lVar4,0);
          }
          *(undefined8 *)(lVar4 + 0x10) = 0;
          *(undefined8 *)(lVar4 + 0x20) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          *(undefined8 *)(lVar4 + 0x38) = 0;
          return;
        }
      }
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x14e4268 | Atlas.Gameplay.Usables.RicochetProjectile.get_RicochetBehaviour
// ============================================================

void Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4bf9 & 1) == 0) {
    func_0x00f78a20(0x3d244c8);
    bRam0000000003eb4bf9 = 1;
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    lVar4 = **(long **)(param_1 + 0x48);
    if ((*(byte *)(lVar4 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.RicochetProjectileBehaviour_TypeInfo*/ lRam0000000003d244c8 + 300)) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.RicochetProjectileBehaviour_TypeInfo*/ lRam0000000003d244c8 + 300) * 8 + -8) !=
        /*Atlas.Gameplay.Usables.RicochetProjectileBehaviour_TypeInfo*/ lRam0000000003d244c8)) {
      auVar5 = func_0x00f78e5c();
      lVar4 = auVar5._0_8_;
      if ((bRam0000000003eb4bfa & 1) == 0) {
        func_0x00f78a20(0x3d55958);
        func_0x00f78a20(0x3d3c470);
        func_0x00f78a20(0x3d1df08);
        bRam0000000003eb4bfa = 1;
      }
      Atlas_Gameplay_Usables_ProjectileUsable__Init(lVar4,auVar5._8_8_,param_3,param_4,param_5,0);
      lVar1 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar4,0);
      if ((lVar1 != 0) && (*(long *)(lVar1 + 0x40) != 0)) {
        uVar2 = /*System.Linq.Enumerable$$Count<Toggle>*/ func_0x0184aa70(*(undefined8 *)(*(long *)(lVar1 + 0x40) + 0x28),uRam0000000003d55958
                               );
        uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<Transform>_TypeInfo*/ uRam0000000003d1df08);
        /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar3,uVar2,uRam0000000003d3c470);
        *(undefined8 *)(lVar4 + 0x1c0) = uVar3;
        return;
      }
      lVar4 = func_0x00f78af4();
      if (*(char *)(lVar4 + 0x19) != '\0') {
        /*Atlas.Gameplay.Usables.RicochetProjectile$$OnTearDownParamsInternal*/ func_0x014e4408(lVar4);
      }
      if (*(char *)(lVar4 + 0x19) != '\0') {
        Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(lVar4,0);
      }
      *(undefined8 *)(lVar4 + 0xf8) = 0;
      *(undefined4 *)(lVar4 + 0x150) = 0;
      if (*(char *)(lVar4 + 0x19) != '\0') {
        Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar4,0);
      }
      if (*(char *)(lVar4 + 0x19) != '\0') {
        /*Atlas.Gameplay.Usables.Usable$$OnTearDownParamsInternal*/ func_0x01523890(lVar4,0);
      }
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x58) = 0;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x14e42e4 | Atlas.Gameplay.Usables.RicochetProjectile.Init
// ============================================================

void Atlas_Gameplay_Usables_RicochetProjectile__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4bfa & 1) == 0) {
    func_0x00f78a20(0x3d55958);
    func_0x00f78a20(0x3d3c470);
    func_0x00f78a20(0x3d1df08);
    bRam0000000003eb4bfa = 1;
  }
  Atlas_Gameplay_Usables_ProjectileUsable__Init(param_1,param_2,param_3,param_4,param_5,0);
  lVar1 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x40) != 0)) {
    uVar2 = /*System.Linq.Enumerable$$Count<Toggle>*/ func_0x0184aa70(*(undefined8 *)(*(long *)(lVar1 + 0x40) + 0x28),uRam0000000003d55958);
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<Transform>_TypeInfo*/ uRam0000000003d1df08);
    /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar3,uVar2,uRam0000000003d3c470);
    *(undefined8 *)(param_1 + 0x1c0) = uVar3;
    return;
  }
  lVar1 = func_0x00f78af4();
  if (*(char *)(lVar1 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.RicochetProjectile$$OnTearDownParamsInternal*/ func_0x014e4408(lVar1);
  }
  if (*(char *)(lVar1 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(lVar1,0);
  }
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined4 *)(lVar1 + 0x150) = 0;
  if (*(char *)(lVar1 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar1,0);
  }
  if (*(char *)(lVar1 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.Usable$$OnTearDownParamsInternal*/ func_0x01523890(lVar1,0);
  }
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  return;
}



// ============================================================
// RVA: 0x14e43d4 | Atlas.Gameplay.Usables.RicochetProjectile.DeInit
// ============================================================

void Atlas_Gameplay_Usables_RicochetProjectile__DeInit(long param_1)

{
  if (*(char *)(param_1 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.RicochetProjectile$$OnTearDownParamsInternal*/ func_0x014e4408(param_1);
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(param_1,0);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(char *)(param_1 + 0x19) != '\0') {
    Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(param_1,0);
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.Usable$$OnTearDownParamsInternal*/ func_0x01523890(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// RVA: 0x14e4408 | Atlas.Gameplay.Usables.RicochetProjectile.OnTearDownParamsInternal
// ============================================================

/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */
/* WARNING: Removing unreachable block (ram,0x014e4798) */
/* WARNING: Removing unreachable block (ram,0x014e47a0) */
/* WARNING: Removing unreachable block (ram,0x014e47a8) */
/* WARNING: Removing unreachable block (ram,0x014e47b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_RicochetProjectile__OnTearDownParamsInternal
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  int extraout_w1;
  bool bVar10;
  long lVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4c01 & 1) == 0) {
    func_0x00f78a20(0x3d41598);
    func_0x00f78a20(0x3d1eaf8);
    func_0x00f78a20(0x3d416d0);
    bRam0000000003eb4c01 = 1;
  }
  if (param_5[0x26] != 0) {
    /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(param_5[0x26],0);
  }
  lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(param_5);
  if (((lVar3 != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x28),0), lVar3 != 0)) {
    param_4 = *(undefined4 *)((long)param_5 + 0x1b4);
    param_3 = (undefined4)param_5[0x36];
    param_2 = *(undefined4 *)((long)param_5 + 0x1ac);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0((int)param_5[0x35],lVar3,0);
    if (param_5[0x26] != 0) {
      /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(param_5[0x26],0);
    }
    if (param_5[0x1f] != 0) {
      lVar3 = *(long *)(param_5[0x1f] + 0x20);
      uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
      param_7 = *(undefined8 *)(*param_5 + 0x410);
      /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,param_5,param_7,uRam0000000003d41598);
      if (lVar3 != 0) {
        param_7 = uRam0000000003d416d0;
        /*UnityEngine.Events.UnityEvent<ContactPoint>$$RemoveListener*/ func_0x01b8323c(lVar3,uVar4);
        if (param_5[0x1f] != 0) {
          lVar3 = *(long *)(param_5[0x1f] + 0x28);
          uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
          param_7 = *(undefined8 *)(*param_5 + 0x420);
          /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,param_5,param_7,uRam0000000003d41598);
          if (lVar3 != 0) {
            /*UnityEngine.Events.UnityEvent<ContactPoint>$$RemoveListener*/ func_0x01b8323c(lVar3,uVar4,uRam0000000003d416d0);
            param_5[0x34] = 0;
            return;
          }
        }
      }
    }
  }
  auVar16 = func_0x00f78af4();
  plVar9 = auVar16._0_8_;
  puStack_48 = &Atlas_Gameplay_Usables_RicochetProjectile__OnExitPool;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4bfb & 1) == 0) {
    func_0x00f78a20(0x3d24b58);
    func_0x00f78a20(0x3d41598);
    func_0x00f78a20(0x3d1eaf8);
    func_0x00f78a20(0x3d416c0);
    bRam0000000003eb4bfb = 1;
  }
  Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool(plVar9,auVar16._8_8_,param_7,0,0,0,0);
  lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(plVar9);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x28) == 0)) ||
     (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x28),0), lVar3 == 0)) {
code_r0x014e47dc:
    func_0x00f78af4();
  }
  else {
    uVar13 = /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar3,0);
    *(undefined4 *)(plVar9 + 0x35) = uVar13;
    *(undefined4 *)((long)plVar9 + 0x1ac) = param_2;
    *(undefined4 *)(plVar9 + 0x36) = param_3;
    *(undefined4 *)((long)plVar9 + 0x1b4) = param_4;
    lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(plVar9);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x70) == 0)) goto code_r0x014e47dc;
    param_7 = 0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x70),1);
    lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(plVar9);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x78) == 0)) goto code_r0x014e47dc;
    param_7 = 0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x78),0);
    if (plVar9[0x1f] == 0) goto code_r0x014e47dc;
    lVar3 = *(long *)(plVar9[0x1f] + 0x20);
    uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    param_7 = *(undefined8 *)(*plVar9 + 0x410);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,plVar9,param_7,uRam0000000003d41598);
    if (lVar3 == 0) goto code_r0x014e47dc;
    param_7 = uRam0000000003d416c0;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar3,uVar4);
    if (plVar9[0x1f] == 0) goto code_r0x014e47dc;
    lVar3 = *(long *)(plVar9[0x1f] + 0x28);
    uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    param_7 = *(undefined8 *)(*plVar9 + 0x420);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,plVar9,param_7,uRam0000000003d41598);
    if (lVar3 == 0) goto code_r0x014e47dc;
    param_7 = uRam0000000003d416c0;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar3,uVar4);
    if ((plVar9[0x1f] == 0) || (plVar5 = *(long **)(plVar9[0x1f] + 0x10), plVar5 == (long *)0x0))
    goto code_r0x014e47dc;
    if ((*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) * 8 + -8)
        == /*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58)) {
      uVar13 = /*UnityEngine.SphereCollider$$get_radius*/ func_0x032a4ba4(plVar5,0);
      *(undefined4 *)((long)plVar9 + 0x1a4) = uVar13;
      lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetProjectileDefinition(plVar9);
      if (lVar3 != 0) {
        uVar13 = _cosf(*(float *)(lVar3 + 0xac) * _UNK_033f850c * 0.5);
        *(undefined4 *)(plVar9 + 0x34) = uVar13;
      }
      goto code_r0x014e47dc;
    }
  }
  lVar3 = func_0x00f78e5c();
  uStack_b0 = 0;
  puStack_98 = &Atlas_Gameplay_Usables_RicochetProjectile__OnEnterPool;
  plStack_a8 = plVar9;
  ppuStack_a0 = &puStack_50;
  Atlas_Gameplay_Usables_RicochetProjectile__OnTearDownParamsInternal();
  Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(lVar3,0);
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar3,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar3 + 0x48) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar6 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar3 + 100),*(undefined4 *)(lVar3 + 0x68),
                    *(undefined4 *)(lVar3 + 0x6c),lVar6,0);
    if ((*(long *)(lVar3 + 0x48) != 0) &&
       (lVar6 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar6 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar3 + 0x70),*(undefined4 *)(lVar3 + 0x74),
                      *(undefined4 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x7c),lVar6,0);
      if ((*(long *)(lVar3 + 0x48) != 0) &&
         (lVar6 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar6 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar3 + 0x80),*(undefined4 *)(lVar3 + 0x84),
                        *(undefined4 *)(lVar3 + 0x88),lVar6,0);
        *(undefined1 *)(lVar3 + 0x19) = 0;
        *(undefined8 *)(lVar3 + 0x98) = 0;
        *(undefined8 *)(lVar3 + 0x90) = 0;
        *(undefined8 *)(lVar3 + 0xa8) = 0;
        *(undefined8 *)(lVar3 + 0xa0) = 0;
        *(undefined8 *)(lVar3 + 0xb8) = 0;
        *(undefined8 *)(lVar3 + 0xb0) = 0;
        if (*(long *)(lVar3 + 0x48) != 0) {
          lVar6 = *(long *)(*(long *)(lVar3 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_7 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0);
          if (iVar1 != 0) {
            if (lVar6 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar6 + 0x46) = 0;
            *(undefined4 *)(lVar6 + 0x40) = 0;
            *(undefined1 *)(lVar6 + 0x44) = 0;
          }
          if (*(long *)(lVar3 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar3 + 0x48) + 0x40) = 0;
            *(undefined8 *)(lVar3 + 0x48) = 0;
            *(undefined1 *)(lVar3 + 0x18) = 0;
            *(undefined8 *)(lVar3 + 0x28) = 0;
            *(undefined8 *)(lVar3 + 0x30) = 0;
            *(undefined4 *)(lVar3 + 0x40) = 0xbf800000;
            *(undefined2 *)(lVar3 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar16 = func_0x00f78af4();
  lVar6 = auVar16._8_8_;
  lVar3 = auVar16._0_8_;
  puStack_b8 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  pppuStack_c0 = &ppuStack_a0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar6;
  *(undefined8 *)(lVar3 + 0x48) = param_7;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar6 != 0)) {
    lVar11 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar6 = *(long *)(lVar6 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar6,0);
    if (lVar11 != 0) {
      uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,uVar4,uRam0000000003d572a0);
      *(undefined8 *)(lVar3 + 0x90) = uVar4;
      puVar12 = &UNK_01523aa4;
      lVar11 = lVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar12 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar11 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  lStack_140 = lVar6;
  uStack_138 = param_7;
  lStack_130 = lVar3;
  pppuStack_110 = &pppuStack_c0;
  puStack_108 = puVar12;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  if (*(long *)(lVar11 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar11 + 0x90);
  if (lVar3 != 0) {
    uVar8 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar15 = *(undefined8 *)(lVar3 + 0x38);
    uVar14 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar11 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar11 + 0xb0) = uVar15;
    *(undefined8 *)(lVar11 + 0xa8) = uVar14;
    *(undefined8 *)(lVar11 + 0xa0) = uVar8;
    *(undefined8 *)(lVar11 + 0x98) = uVar4;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar11 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_148 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar11 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar11 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_148,uRam0000000003d57270), lVar3 != 0)) {
        uStack_150 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar11 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar11 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_190,lVar3,uRam0000000003d3d2e8);
          bVar10 = false;
          while (uVar7 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_190,uRam0000000003d334f0), uVar4 = uStack_180,
                (uVar7 & 1) != 0) {
            uStack_1b8 = uStack_170;
            uStack_1c0 = uStack_178;
            uStack_1a8 = uStack_160;
            uStack_1b0 = uStack_168;
            uStack_1a0 = uStack_158;
            uStack_1c8 = uStack_180;
            uVar8 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1c8);
            uVar7 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_148,uVar8,0);
            if ((uVar7 & 1) != 0) {
              *(undefined8 *)(lVar11 + 0xa0) = uStack_1b8;
              *(undefined8 *)(lVar11 + 0x98) = uStack_1c0;
              *(undefined8 *)(lVar11 + 0xb0) = uStack_1a8;
              *(undefined8 *)(lVar11 + 0xa8) = uStack_1b0;
              *(undefined8 *)(lVar11 + 0xb8) = uStack_1a0;
              bVar10 = true;
            }
            uStack_1c8 = uVar4;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_1c8);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_150,uVar4,0);
            if (!bVar10 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar11 + 0xa0) = uStack_1b8;
              *(undefined8 *)(lVar11 + 0x98) = uStack_1c0;
              *(undefined8 *)(lVar11 + 0xb0) = uStack_1a8;
              *(undefined8 *)(lVar11 + 0xa8) = uStack_1b0;
              *(undefined8 *)(lVar11 + 0xb8) = uStack_1a0;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_190,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    lVar3 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_190,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14e4564 | Atlas.Gameplay.Usables.RicochetProjectile.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */
/* WARNING: Removing unreachable block (ram,0x014e4798) */
/* WARNING: Removing unreachable block (ram,0x014e47a0) */
/* WARNING: Removing unreachable block (ram,0x014e47a8) */
/* WARNING: Removing unreachable block (ram,0x014e47b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_RicochetProjectile__OnExitPool
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  int extraout_w1;
  bool bVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb4bfb & 1) == 0) {
    func_0x00f78a20(0x3d24b58);
    func_0x00f78a20(0x3d41598);
    func_0x00f78a20(0x3d1eaf8);
    func_0x00f78a20(0x3d416c0);
    bRam0000000003eb4bfb = 1;
  }
  Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool(param_5,param_6,param_7,0,0,0,0);
  lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(param_5);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x28) == 0)) ||
     (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x28),0), lVar3 == 0)) {
code_r0x014e47dc:
    func_0x00f78af4();
  }
  else {
    uVar12 = /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar3,0);
    *(undefined4 *)(param_5 + 0x35) = uVar12;
    *(undefined4 *)((long)param_5 + 0x1ac) = param_2;
    *(undefined4 *)(param_5 + 0x36) = param_3;
    *(undefined4 *)((long)param_5 + 0x1b4) = param_4;
    lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(param_5);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x70) == 0)) goto code_r0x014e47dc;
    param_7 = 0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x70),1);
    lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(param_5);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x78) == 0)) goto code_r0x014e47dc;
    param_7 = 0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x78),0);
    if (param_5[0x1f] == 0) goto code_r0x014e47dc;
    lVar3 = *(long *)(param_5[0x1f] + 0x20);
    uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    param_7 = *(undefined8 *)(*param_5 + 0x410);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,param_5,param_7,uRam0000000003d41598);
    if (lVar3 == 0) goto code_r0x014e47dc;
    param_7 = uRam0000000003d416c0;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar3,uVar4);
    if (param_5[0x1f] == 0) goto code_r0x014e47dc;
    lVar3 = *(long *)(param_5[0x1f] + 0x28);
    uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    param_7 = *(undefined8 *)(*param_5 + 0x420);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,param_5,param_7,uRam0000000003d41598);
    if (lVar3 == 0) goto code_r0x014e47dc;
    param_7 = uRam0000000003d416c0;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar3,uVar4);
    if ((param_5[0x1f] == 0) || (plVar5 = *(long **)(param_5[0x1f] + 0x10), plVar5 == (long *)0x0))
    goto code_r0x014e47dc;
    if ((*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) * 8 + -8)
        == /*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58)) {
      uVar12 = /*UnityEngine.SphereCollider$$get_radius*/ func_0x032a4ba4(plVar5,0);
      *(undefined4 *)((long)param_5 + 0x1a4) = uVar12;
      lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetProjectileDefinition(param_5);
      if (lVar3 != 0) {
        uVar12 = _cosf(*(float *)(lVar3 + 0xac) * _UNK_033f850c * 0.5);
        *(undefined4 *)(param_5 + 0x34) = uVar12;
      }
      goto code_r0x014e47dc;
    }
  }
  lVar3 = func_0x00f78e5c();
  uStack_70 = 0;
  puStack_58 = &Atlas_Gameplay_Usables_RicochetProjectile__OnEnterPool;
  plStack_68 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  Atlas_Gameplay_Usables_RicochetProjectile__OnTearDownParamsInternal();
  Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(lVar3,0);
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar3,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar3 + 0x48) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar6 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar3 + 100),*(undefined4 *)(lVar3 + 0x68),
                    *(undefined4 *)(lVar3 + 0x6c),lVar6,0);
    if ((*(long *)(lVar3 + 0x48) != 0) &&
       (lVar6 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar6 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar3 + 0x70),*(undefined4 *)(lVar3 + 0x74),
                      *(undefined4 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x7c),lVar6,0);
      if ((*(long *)(lVar3 + 0x48) != 0) &&
         (lVar6 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar6 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar3 + 0x80),*(undefined4 *)(lVar3 + 0x84),
                        *(undefined4 *)(lVar3 + 0x88),lVar6,0);
        *(undefined1 *)(lVar3 + 0x19) = 0;
        *(undefined8 *)(lVar3 + 0x98) = 0;
        *(undefined8 *)(lVar3 + 0x90) = 0;
        *(undefined8 *)(lVar3 + 0xa8) = 0;
        *(undefined8 *)(lVar3 + 0xa0) = 0;
        *(undefined8 *)(lVar3 + 0xb8) = 0;
        *(undefined8 *)(lVar3 + 0xb0) = 0;
        if (*(long *)(lVar3 + 0x48) != 0) {
          lVar6 = *(long *)(*(long *)(lVar3 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_7 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0);
          if (iVar1 != 0) {
            if (lVar6 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar6 + 0x46) = 0;
            *(undefined4 *)(lVar6 + 0x40) = 0;
            *(undefined1 *)(lVar6 + 0x44) = 0;
          }
          if (*(long *)(lVar3 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar3 + 0x48) + 0x40) = 0;
            *(undefined8 *)(lVar3 + 0x48) = 0;
            *(undefined1 *)(lVar3 + 0x18) = 0;
            *(undefined8 *)(lVar3 + 0x28) = 0;
            *(undefined8 *)(lVar3 + 0x30) = 0;
            *(undefined4 *)(lVar3 + 0x40) = 0xbf800000;
            *(undefined2 *)(lVar3 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar15 = func_0x00f78af4();
  lVar6 = auVar15._8_8_;
  lVar3 = auVar15._0_8_;
  puStack_78 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppuStack_80 = &puStack_60;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar6;
  *(undefined8 *)(lVar3 + 0x48) = param_7;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar6 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar6 = *(long *)(lVar6 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar6,0);
    if (lVar10 != 0) {
      uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar4,uRam0000000003d572a0);
      *(undefined8 *)(lVar3 + 0x90) = uVar4;
      puVar11 = &UNK_01523aa4;
      lVar10 = lVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar11 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar10 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_100 = lVar6;
  uStack_f8 = param_7;
  lStack_f0 = lVar3;
  pppuStack_d0 = &ppuStack_80;
  puStack_c8 = puVar11;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar10 + 0x90);
  if (lVar3 != 0) {
    uVar8 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar14 = *(undefined8 *)(lVar3 + 0x38);
    uVar13 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar14;
    *(undefined8 *)(lVar10 + 0xa8) = uVar13;
    *(undefined8 *)(lVar10 + 0xa0) = uVar8;
    *(undefined8 *)(lVar10 + 0x98) = uVar4;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_108 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_108,uRam0000000003d57270), lVar3 != 0)) {
        uStack_110 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_150,lVar3,uRam0000000003d3d2e8);
          bVar9 = false;
          while (uVar7 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_150,uRam0000000003d334f0), uVar4 = uStack_140,
                (uVar7 & 1) != 0) {
            uStack_178 = uStack_130;
            uStack_180 = uStack_138;
            uStack_168 = uStack_120;
            uStack_170 = uStack_128;
            uStack_160 = uStack_118;
            uStack_188 = uStack_140;
            uVar8 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_188);
            uVar7 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_108,uVar8,0);
            if ((uVar7 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_178;
              *(undefined8 *)(lVar10 + 0x98) = uStack_180;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_168;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_170;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_160;
              bVar9 = true;
            }
            uStack_188 = uVar4;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_188);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_110,uVar4,0);
            if (!bVar9 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_178;
              *(undefined8 *)(lVar10 + 0x98) = uStack_180;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_168;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_170;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_160;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_150,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar3 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_150,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14e4574 | Atlas.Gameplay.Usables.RicochetProjectile.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_RicochetProjectile__OnExitPool
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
               undefined8 param_10)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  int extraout_w1;
  bool bVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb4bfb & 1) == 0) {
    func_0x00f78a20(0x3d24b58);
    func_0x00f78a20(0x3d41598);
    func_0x00f78a20(0x3d1eaf8);
    func_0x00f78a20(0x3d416c0);
    bRam0000000003eb4bfb = 1;
  }
  Atlas_Gameplay_Usables_ProjectileUsable__OnExitPool
            (param_5,param_6,param_7,param_8,param_9,param_10,0);
  lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(param_5);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x28) == 0)) ||
     (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x28),0), lVar3 == 0)) {
LAB_014e47dc:
    func_0x00f78af4();
  }
  else {
    uVar12 = /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar3,0);
    *(undefined4 *)(param_5 + 0x35) = uVar12;
    *(undefined4 *)((long)param_5 + 0x1ac) = param_2;
    *(undefined4 *)(param_5 + 0x36) = param_3;
    *(undefined4 *)((long)param_5 + 0x1b4) = param_4;
    lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(param_5);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x70) == 0)) goto LAB_014e47dc;
    param_7 = 0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x70),1);
    lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(param_5);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x78) == 0)) goto LAB_014e47dc;
    param_7 = 0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar3 + 0x78),0);
    if (param_5[0x1f] == 0) goto LAB_014e47dc;
    lVar3 = *(long *)(param_5[0x1f] + 0x20);
    uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    param_7 = *(undefined8 *)(*param_5 + 0x410);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,param_5,param_7,uRam0000000003d41598);
    if (lVar3 == 0) goto LAB_014e47dc;
    param_7 = uRam0000000003d416c0;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar3,uVar4);
    if (param_5[0x1f] == 0) goto LAB_014e47dc;
    lVar3 = *(long *)(param_5[0x1f] + 0x28);
    uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    param_7 = *(undefined8 *)(*param_5 + 0x420);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar4,param_5,param_7,uRam0000000003d41598);
    if (lVar3 == 0) goto LAB_014e47dc;
    param_7 = uRam0000000003d416c0;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar3,uVar4);
    if ((param_5[0x1f] == 0) || (plVar5 = *(long **)(param_5[0x1f] + 0x10), plVar5 == (long *)0x0))
    goto LAB_014e47dc;
    if ((*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) * 8 + -8)
        == /*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58)) {
      uVar12 = /*UnityEngine.SphereCollider$$get_radius*/ func_0x032a4ba4(plVar5,0);
      *(undefined4 *)((long)param_5 + 0x1a4) = uVar12;
      lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetProjectileDefinition(param_5);
      if (lVar3 != 0) {
        uVar12 = _cosf(*(float *)(lVar3 + 0xac) * _UNK_033f850c * 0.5);
        *(undefined4 *)(param_5 + 0x34) = uVar12;
        if ((((param_8 != 0) && (*(long *)(param_8 + 0x70) != 0)) &&
            (lVar3 = *(long *)(*(long *)(param_8 + 0x70) + 0x90), lVar3 != 0)) &&
           (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) {
          lVar3 = /*Atlas.Audio.WeaponAudioManager$$Create*/ func_0x01530894(lVar3,1,param_5[0x20],0);
          param_5[0x37] = lVar3;
          return;
        }
      }
      goto LAB_014e47dc;
    }
  }
  lVar3 = func_0x00f78e5c();
  puStack_58 = &Atlas_Gameplay_Usables_RicochetProjectile__OnEnterPool;
  lStack_70 = param_8;
  plStack_68 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  Atlas_Gameplay_Usables_RicochetProjectile__OnTearDownParamsInternal();
  Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(lVar3,0);
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(lVar3,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(lVar3 + 0x48) != 0) &&
     (lVar6 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar6 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar3 + 100),*(undefined4 *)(lVar3 + 0x68),
                    *(undefined4 *)(lVar3 + 0x6c),lVar6,0);
    if ((*(long *)(lVar3 + 0x48) != 0) &&
       (lVar6 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar6 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar3 + 0x70),*(undefined4 *)(lVar3 + 0x74),
                      *(undefined4 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x7c),lVar6,0);
      if ((*(long *)(lVar3 + 0x48) != 0) &&
         (lVar6 = *(long *)(*(long *)(lVar3 + 0x48) + 0x28), lVar6 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar3 + 0x80),*(undefined4 *)(lVar3 + 0x84),
                        *(undefined4 *)(lVar3 + 0x88),lVar6,0);
        *(undefined1 *)(lVar3 + 0x19) = 0;
        *(undefined8 *)(lVar3 + 0x98) = 0;
        *(undefined8 *)(lVar3 + 0x90) = 0;
        *(undefined8 *)(lVar3 + 0xa8) = 0;
        *(undefined8 *)(lVar3 + 0xa0) = 0;
        *(undefined8 *)(lVar3 + 0xb8) = 0;
        *(undefined8 *)(lVar3 + 0xb0) = 0;
        if (*(long *)(lVar3 + 0x48) != 0) {
          lVar6 = *(long *)(*(long *)(lVar3 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_7 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0);
          if (iVar1 != 0) {
            if (lVar6 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar6 + 0x46) = 0;
            *(undefined4 *)(lVar6 + 0x40) = 0;
            *(undefined1 *)(lVar6 + 0x44) = 0;
          }
          if (*(long *)(lVar3 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar3 + 0x48) + 0x40) = 0;
            *(undefined8 *)(lVar3 + 0x48) = 0;
            *(undefined1 *)(lVar3 + 0x18) = 0;
            *(undefined8 *)(lVar3 + 0x28) = 0;
            *(undefined8 *)(lVar3 + 0x30) = 0;
            *(undefined4 *)(lVar3 + 0x40) = 0xbf800000;
            *(undefined2 *)(lVar3 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar15 = func_0x00f78af4();
  lVar6 = auVar15._8_8_;
  lVar3 = auVar15._0_8_;
  puStack_78 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  ppuStack_80 = &puStack_60;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar6;
  *(undefined8 *)(lVar3 + 0x48) = param_7;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar6 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar6 = *(long *)(lVar6 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar6,0);
    if (lVar10 != 0) {
      uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar4,uRam0000000003d572a0);
      *(undefined8 *)(lVar3 + 0x90) = uVar4;
      puVar11 = &UNK_01523aa4;
      lVar10 = lVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar11 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar10 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_100 = lVar6;
  uStack_f8 = param_7;
  lStack_f0 = lVar3;
  pppuStack_d0 = &ppuStack_80;
  puStack_c8 = puVar11;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar10 + 0x90);
  if (lVar3 != 0) {
    uVar8 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar14 = *(undefined8 *)(lVar3 + 0x38);
    uVar13 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar14;
    *(undefined8 *)(lVar10 + 0xa8) = uVar13;
    *(undefined8 *)(lVar10 + 0xa0) = uVar8;
    *(undefined8 *)(lVar10 + 0x98) = uVar4;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_108 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_108,uRam0000000003d57270), lVar3 != 0)) {
        uStack_110 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_150,lVar3,uRam0000000003d3d2e8);
          bVar9 = false;
          while (uVar7 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_150,uRam0000000003d334f0), uVar4 = uStack_140,
                (uVar7 & 1) != 0) {
            uStack_178 = uStack_130;
            uStack_180 = uStack_138;
            uStack_168 = uStack_120;
            uStack_170 = uStack_128;
            uStack_160 = uStack_118;
            uStack_188 = uStack_140;
            uVar8 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_188);
            uVar7 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_108,uVar8,0);
            if ((uVar7 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_178;
              *(undefined8 *)(lVar10 + 0x98) = uStack_180;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_168;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_170;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_160;
              bVar9 = true;
            }
            uStack_188 = uVar4;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_188);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_110,uVar4,0);
            if (!bVar9 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_178;
              *(undefined8 *)(lVar10 + 0x98) = uStack_180;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_168;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_170;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_160;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_150,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar5 = (long *)___cxa_begin_catch();
    lVar3 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_150,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14e47e4 | Atlas.Gameplay.Usables.RicochetProjectile.OnEnterPool
// ============================================================

/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_RicochetProjectile__OnEnterPool
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  int extraout_w1;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  Atlas_Gameplay_Usables_RicochetProjectile__OnTearDownParamsInternal();
  Atlas_Gameplay_Usables_ProjectileUsable__OnTearDownParamsInternal(param_1,0);
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(param_1,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                    *(undefined4 *)(param_1 + 0x6c),lVar3,0);
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                      *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar3,0);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                        *(undefined4 *)(param_1 + 0x88),lVar3,0);
        *(undefined1 *)(param_1 + 0x19) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0);
          if (iVar1 != 0) {
            if (lVar3 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar3 + 0x46) = 0;
            *(undefined4 *)(lVar3 + 0x40) = 0;
            *(undefined1 *)(lVar3 + 0x44) = 0;
          }
          if (*(long *)(param_1 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40) = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined1 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
            *(undefined2 *)(param_1 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar14 = func_0x00f78af4();
  lVar9 = auVar14._8_8_;
  lVar3 = auVar14._0_8_;
  puStack_28 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar9;
  *(undefined8 *)(lVar3 + 0x48) = param_3;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar9 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar9 = *(long *)(lVar9 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar9,0);
    if (lVar10 != 0) {
      uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar4,uRam0000000003d572a0);
      *(undefined8 *)(lVar3 + 0x90) = uVar4;
      puVar11 = &UNK_01523aa4;
      lVar10 = lVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar11 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar10 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_b0 = lVar9;
  uStack_a8 = param_3;
  lStack_a0 = lVar3;
  ppuStack_80 = &puStack_30;
  puStack_78 = puVar11;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar10 + 0x90);
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar13 = *(undefined8 *)(lVar3 + 0x38);
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar13;
    *(undefined8 *)(lVar10 + 0xa8) = uVar12;
    *(undefined8 *)(lVar10 + 0xa0) = uVar6;
    *(undefined8 *)(lVar10 + 0x98) = uVar4;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_b8 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_b8,uRam0000000003d57270), lVar3 != 0)) {
        uStack_c0 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_100,lVar3,uRam0000000003d3d2e8);
          bVar8 = false;
          while (uVar5 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_100,uRam0000000003d334f0), uVar4 = uStack_f0,
                (uVar5 & 1) != 0) {
            uStack_128 = uStack_e0;
            uStack_130 = uStack_e8;
            uStack_118 = uStack_d0;
            uStack_120 = uStack_d8;
            uStack_110 = uStack_c8;
            uStack_138 = uStack_f0;
            uVar6 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
            uVar5 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_b8,uVar6,0);
            if ((uVar5 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_128;
              *(undefined8 *)(lVar10 + 0x98) = uStack_130;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_118;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_120;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_110;
              bVar8 = true;
            }
            uStack_138 = uVar4;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_c0,uVar4,0);
            if (!bVar8 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_128;
              *(undefined8 *)(lVar10 + 0x98) = uStack_130;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_118;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_120;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_110;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_100,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar3 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_100,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14e480c | Atlas.Gameplay.Usables.RicochetProjectile.DeSpawn
// ============================================================

/* WARNING: Possible PIC construction at 0x014e4b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e4b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01526ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */
/* WARNING: Removing unreachable block (ram,0x014e4b7c) */
/* WARNING: Removing unreachable block (ram,0x014e4b94) */
/* WARNING: Removing unreachable block (ram,0x014e4b84) */
/* WARNING: Removing unreachable block (ram,0x0152fe60) */
/* WARNING: Removing unreachable block (ram,0x0152fe7c) */
/* WARNING: Removing unreachable block (ram,0x0152fe90) */
/* WARNING: Removing unreachable block (ram,0x0152fe98) */
/* WARNING: Removing unreachable block (ram,0x0152fec4) */
/* WARNING: Removing unreachable block (ram,0x0152fea0) */
/* WARNING: Removing unreachable block (ram,0x01638d80) */
/* WARNING: Removing unreachable block (ram,0x014e4b5c) */
/* WARNING: Removing unreachable block (ram,0x014e4b68) */
/* WARNING: Removing unreachable block (ram,0x014e4b70) */
/* WARNING: Removing unreachable block (ram,0x01526ff8) */
/* WARNING: Removing unreachable block (ram,0x032754b4) */
/* WARNING: Removing unreachable block (ram,0x032754dc) */
/* WARNING: Removing unreachable block (ram,0x032754f0) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Gameplay_Usables_RicochetProjectile__DeSpawn
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long *param_5,int param_6,undefined8 param_7,undefined8 ****param_8,
                 undefined8 ******param_9,undefined8 param_10,undefined8 param_11,
                 undefined8 param_12)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 ******ppppppuVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 ******ppppppuVar12;
  long *plVar13;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  ulong uVar14;
  long extraout_x1_00;
  uint uVar15;
  undefined8 ******ppppppuVar16;
  long lVar17;
  undefined8 *****pppppuVar18;
  int *piVar19;
  undefined8 ******ppppppuVar20;
  undefined8 ****ppppuVar21;
  long lVar22;
  undefined8 unaff_x22;
  undefined8 ******ppppppuVar23;
  undefined8 unaff_x23;
  long lVar24;
  undefined8 ****ppppuVar25;
  undefined8 ****unaff_x24;
  undefined8 ****ppppuVar26;
  long *unaff_x25;
  undefined8 *******pppppppuVar27;
  undefined1 *puVar28;
  undefined *puVar29;
  float extraout_s0;
  float fVar30;
  undefined4 uVar31;
  ulong extraout_d0;
  ulong extraout_d0_00;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  undefined8 ******ppppppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 ******ppppppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 ****ppppuStack_160;
  undefined8 ****ppppuStack_158;
  undefined8 ****ppppuStack_150;
  long lStack_148;
  undefined8 ******ppppppuStack_140;
  undefined8 ******ppppppuStack_138;
  undefined1 ***pppuStack_130;
  undefined *puStack_128;
  undefined8 ****ppppuStack_120;
  long lStack_118;
  undefined8 ******ppppppuStack_110;
  undefined8 ******ppppppuStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 ****ppppuStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined8 ******ppppppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb4bfc & 1) == 0) {
    func_0x00f78a20(0x3d5ff18);
    bRam0000000003eb4bfc = 1;
  }
  if (param_6 != 0) {
    (**(code **)(*param_5 + 0x448))(param_5,*(undefined8 *)(*param_5 + 0x450));
  }
  ppppppuVar16 = ppppppuRam0000000003d5ff18;
  lVar4 = param_5[2];
  if (lVar4 == 0) {
    plVar13 = (long *)func_0x00f78af4();
    plVar8 = plVar13;
    if ((bRam0000000003eb4bfd & 1) == 0) {
      func_0x00f78a20(0x3d570c0);
      plVar8 = (long *)func_0x00f78a20(0x3d71fa8);
      bRam0000000003eb4bfd = 1;
    }
    if (*(char *)((long)plVar13 + 300) != '\0') {
      return plVar8;
    }
    lVar4 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar13,0);
    lVar24 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetProjectileDefinition(plVar13);
    if ((lVar24 != 0) && (lVar4 != 0)) {
      lVar4 = /*Atlas.Contexts.GameContextBase$$SpawnTimedObject<VFXBehaviour>*/ func_0x0185c108(*(undefined4 *)(lVar24 + 0x98),lVar4,/*STR('RicochetHitVFX')*/ uRam0000000003d71fa8,
                              uRam0000000003d570c0);
      lVar24 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetProjectileDefinition(plVar13);
      if (lVar24 != 0) {
        plStack_68 = *(long **)(lVar24 + 0xa0);
        ppppppuStack_70 = *(undefined8 *******)(lVar24 + 0x98);
        puStack_60 = (undefined1 *)CONCAT44(puStack_60._4_4_,*(undefined4 *)(lVar24 + 0xa8));
        plVar8 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX
                                   (plVar13,lVar4,&ppppppuStack_70,0);
        return plVar8;
      }
    }
    auVar39 = func_0x00f78af4();
    plVar7 = auVar39._8_8_;
    plVar8 = auVar39._0_8_;
    ppppppuVar3 = (undefined8 ******)&stack0xffffffffffffff60;
    puStack_78 = &Atlas_Gameplay_Usables_RicochetProjectile__Update;
    pppppppuVar27 = &pppppppuStack_80;
    pppppppuStack_80 = (undefined8 *******)&stack0xffffffffffffffc0;
    if ((bRam0000000003eb4bfe & 1) == 0) {
      func_0x00f78a20(0x3d22618);
      bRam0000000003eb4bfe = 1;
    }
    plVar5 = (long *)Atlas_Gameplay_Usables_CollidableUsable__Update(plVar8,plVar7,0);
    if ((char)plVar8[3] == '\0') {
      return plVar5;
    }
    if (plVar7 == (long *)0x0) {
      puVar29 = &Atlas_Gameplay_Usables_RicochetProjectile__InUseVisuals;
      plVar7 = (long *)func_0x00f78af4();
      lVar4 = 0;
      uVar10 = extraout_d0_00;
    }
    else {
      lVar24 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar24 + 0x12a);
      if (uVar10 != 0) {
        piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar11 = (undefined8 *)(lVar24 + (long)*piVar19 * 0x10 + 0x138);
            goto code_r0x014e4a14;
          }
          piVar19 = piVar19 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar11 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014e4a14:
      uVar10 = (*(code *)*puVar11)(plVar7,puVar11[1]);
      ppppppuVar3 = &ppppppuStack_70;
      plVar7 = plVar8;
      plVar8 = plVar13;
      pppppppuVar27 = pppppppuStack_80;
      puVar29 = puStack_78;
    }
    uVar9 = 0x3eb4000;
    *(undefined8 *)((long)ppppppuVar3 + -0x30) = unaff_d9;
    *(undefined8 *)((long)ppppppuVar3 + -0x28) = unaff_d8;
    *(long *)((long)ppppppuVar3 + -0x20) = lVar4;
    *(long **)((long)ppppppuVar3 + -0x18) = plVar8;
    *(undefined8 ********)((long)ppppppuVar3 + -0x10) = pppppppuVar27;
    *(undefined **)((long)ppppppuVar3 + -8) = puVar29;
    lVar24 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour();
    if ((lVar24 != 0) && (*(long *)(lVar24 + 0x28) != 0)) {
      lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar24 + 0x28),0);
      lVar24 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetProjectileDefinition(plVar7);
      if ((lVar24 != 0) && (lVar4 != 0)) {
        fVar34 = *(float *)(lVar24 + 0xb0) * (float)uVar10;
        uVar38 = 0;
        *(undefined8 *)((long)ppppppuVar3 + -0x60) = unaff_d15;
        *(undefined8 *)((long)ppppppuVar3 + -0x58) = unaff_d14;
        *(undefined8 *)((long)ppppppuVar3 + -0x50) = unaff_d13;
        *(undefined8 *)((long)ppppppuVar3 + -0x48) = unaff_d12;
        *(undefined8 *)((long)ppppppuVar3 + -0x40) = unaff_d11;
        *(undefined8 *)((long)ppppppuVar3 + -0x38) = unaff_d10;
        *(undefined8 *)((long)ppppppuVar3 + -0x30) = *(undefined8 *)((long)ppppppuVar3 + -0x30);
        *(undefined8 *)((long)ppppppuVar3 + -0x28) = *(undefined8 *)((long)ppppppuVar3 + -0x28);
        *(undefined8 *)((long)ppppppuVar3 + -0x20) = *(undefined8 *)((long)ppppppuVar3 + -0x20);
        *(undefined8 *)((long)ppppppuVar3 + -0x18) = *(undefined8 *)((long)ppppppuVar3 + -0x18);
        *(undefined8 *)((long)ppppppuVar3 + -0x10) = *(undefined8 *)((long)ppppppuVar3 + -0x10);
        *(undefined8 *)((long)ppppppuVar3 + -8) = *(undefined8 *)((long)ppppppuVar3 + -8);
        /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(0,0,1,0);
        /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c();
        uVar31 = /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251e58(0);
        *(undefined8 *)((long)ppppppuVar3 + -0x20) = *(undefined8 *)((long)ppppppuVar3 + -0x20);
        *(undefined8 *)((long)ppppppuVar3 + -0x18) = *(undefined8 *)((long)ppppppuVar3 + -0x18);
        *(undefined8 *)((long)ppppppuVar3 + -0x10) = *(undefined8 *)((long)ppppppuVar3 + -0x10);
        *(undefined8 *)((long)ppppppuVar3 + -8) = *(undefined8 *)((long)ppppppuVar3 + -8);
        *(undefined4 *)((long)ppppppuVar3 + -0x30) = uVar31;
        *(float *)((long)ppppppuVar3 + -0x2c) = fVar34;
        *(undefined4 *)((long)ppppppuVar3 + -0x28) = uVar38;
        *(undefined4 *)((long)ppppppuVar3 + -0x24) = param_4;
        if (pcRam0000000003ec1998 == (code *)0x0) {
          pcRam0000000003ec1998 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)"
                                      );
        }
        plVar8 = (long *)(*pcRam0000000003ec1998)(lVar4,(undefined1 *)((long)ppppppuVar3 + -0x30));
        return plVar8;
      }
    }
    auVar39 = func_0x00f78af4();
    plVar8 = auVar39._0_8_;
    *(long *)((long)ppppppuVar3 + -0x50) = lVar4;
    *(long **)((long)ppppppuVar3 + -0x48) = plVar7;
    *(undefined1 **)((long)ppppppuVar3 + -0x40) = (undefined1 *)((long)ppppppuVar3 + -0x10);
    *(undefined **)((long)ppppppuVar3 + -0x38) =
         &Atlas_Gameplay_Usables_RicochetProjectile__EarlyUpdate;
    plVar13 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate(plVar8,auVar39._8_8_,0);
    if (plVar8[0x19] != 0) {
      if ((*(char *)(plVar8[0x19] + 0x44) == '\0') &&
         (plVar13 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag
                                      (plVar8,0), (int)plVar13 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x014e4b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar8 = (long *)(**(code **)(*plVar8 + 0x428))
                                   (*(undefined4 *)((long)plVar8 + 0x1a4),plVar8,
                                    *(undefined8 *)(*plVar8 + 0x430));
        return plVar8;
      }
      return plVar13;
    }
    uVar6 = func_0x00f78af4();
    puVar2 = (undefined1 *)((long)ppppppuVar3 + -0x70);
    *(long *)((long)ppppppuVar3 + -0x70) = lVar4;
    *(long **)((long)ppppppuVar3 + -0x68) = plVar8;
    *(undefined1 **)((long)ppppppuVar3 + -0x60) = (undefined1 *)((long)ppppppuVar3 + -0x40);
    *(undefined **)((long)ppppppuVar3 + -0x58) = &Atlas_Gameplay_Usables_RicochetProjectile__Use;
    puVar28 = (undefined1 *)((long)ppppppuVar3 + -0x60);
    Atlas_Gameplay_Usables_ProjectileUsable__Use(uVar6,0);
    Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(uVar6,1,0);
    lVar24 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(uVar6);
    if ((lVar24 != 0) && (lVar24 = *(long *)(lVar24 + 0x70), lVar24 != 0)) {
      uVar15 = 0;
      puVar29 = &UNK_014e4b5c;
code_r0x0322ef1c:
      *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x28) = uVar9;
      *(long *)(puVar2 + -0x20) = lVar4;
      *(undefined8 *)(puVar2 + -0x18) = uVar6;
      *(undefined1 **)(puVar2 + -0x10) = puVar28;
      *(undefined **)(puVar2 + -8) = puVar29;
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar8 = (long *)(*pcRam0000000003ebf4c0)(lVar24,uVar15);
      return plVar8;
    }
    auVar39 = func_0x00f78af4();
    plVar8 = auVar39._8_8_;
    plVar13 = auVar39._0_8_;
    *(undefined8 *)((long)ppppppuVar3 + -0xa0) = unaff_x22;
    *(undefined8 *)((long)ppppppuVar3 + -0x98) = 0x3eb4000;
    *(long *)((long)ppppppuVar3 + -0x90) = lVar4;
    *(undefined8 *)((long)ppppppuVar3 + -0x88) = uVar6;
    *(undefined1 **)((long)ppppppuVar3 + -0x80) = puVar28;
    *(undefined **)((long)ppppppuVar3 + -0x78) =
         &Atlas_Gameplay_Usables_RicochetProjectile__OnTriggerEnter;
    uVar9 = 0x3eb4000;
    if ((bRam0000000003eb4bff & 1) == 0) {
      func_0x00f78a20(0x3d207e8);
      func_0x00f78a20(0x3d534a0);
      func_0x00f78a20(0x3d21fc8);
      func_0x00f78a20(0x3d22c78);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4bff = 1;
    }
    plVar7 = (long *)Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(plVar13,plVar8,0);
    if ((char)plVar13[0xc] != '\0') {
      return plVar7;
    }
    if (*(char *)((long)plVar13 + 300) != '\0') {
      return plVar7;
    }
    plVar7 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar13,0);
    if (((ulong)plVar7 & 1) != 0) {
      return plVar7;
    }
    if (plVar8 != (long *)0x0) {
      uVar9 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar8,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar7 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0,0);
      if ((int)plVar7 == 0) {
        return plVar7;
      }
      lVar4 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar8,0);
      if (lVar4 != 0) {
        lVar4 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar4,uRam0000000003d534a0);
        if ((lVar4 == 0) ||
           (plVar8 = (long *)func_0x0001c7d0(0,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ uRam0000000003d21fc8,lVar4), plVar8 == (long *)0x0))
        {
          return (long *)0x0;
        }
        lVar4 = *plVar8;
        if ((*(byte *)(lVar4 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8
                     ) != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
          if (*(byte *)(lVar4 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300)) {
            return plVar8;
          }
          if (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300) * 8 +
                       -8) == /*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8) {
                    /* WARNING: Could not recover jumptable at 0x014e4d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar8 = (long *)(**(code **)(*plVar13 + 0x228))
                                       (plVar13,*(undefined8 *)(*plVar13 + 0x230));
            return plVar8;
          }
          return plVar8;
        }
        plVar7 = (long *)(**(code **)(*plVar13 + 0x328))
                                   (plVar13,plVar8,1,*(undefined8 *)(*plVar13 + 0x330));
        if ((int)plVar7 == 0) {
          return plVar7;
        }
        if (plVar13[7] != 0) {
          /*Atlas.Stats.AchievementManager$$OnClamHit*/ func_0x01448380(plVar13[7],*(undefined4 *)((long)plVar13 + 0xec),0);
          Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag(plVar13,1,0);
          uVar14 = (ulong)*(uint *)((long)plVar8 + 0x54);
          *(undefined8 *)((long)ppppppuVar3 + -0xa0) = *(undefined8 *)((long)ppppppuVar3 + -0xa0);
          *(undefined8 *)((long)ppppppuVar3 + -0x98) = *(undefined8 *)((long)ppppppuVar3 + -0x98);
          *(undefined8 *)((long)ppppppuVar3 + -0x90) = *(undefined8 *)((long)ppppppuVar3 + -0x90);
          *(undefined8 *)((long)ppppppuVar3 + -0x88) = *(undefined8 *)((long)ppppppuVar3 + -0x88);
          *(undefined8 *)((long)ppppppuVar3 + -0x80) = *(undefined8 *)((long)ppppppuVar3 + -0x80);
          *(undefined8 *)((long)ppppppuVar3 + -0x78) = *(undefined8 *)((long)ppppppuVar3 + -0x78);
          if ((bRam0000000003eb4b74 & 1) == 0) {
            func_0x00f78a20(0x3d23990,uVar14,0);
            bRam0000000003eb4b74 = 1;
          }
          lVar4 = plVar13[0x19];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar4,0,0);
          if (((ulong)plVar8 & 1) != 0) {
            return plVar8;
          }
          lVar24 = plVar13[0x19];
          if (lVar24 != 0) {
            if (*(char *)(lVar24 + 0x44) != '\0') {
              *(ulong *)(lVar24 + 0x48) =
                   uVar14 << ((ulong)*(uint *)((long)plVar13 + 0x19c) & 0x3f) |
                   *(ulong *)(lVar24 + 0x48);
              return plVar8;
            }
            return plVar8;
          }
          lVar24 = func_0x00f78af4();
          *(undefined8 *)((long)ppppppuVar3 + -0xd0) = 0x3d23990;
          *(long *)((long)ppppppuVar3 + -200) = lVar4;
          *(long **)((long)ppppppuVar3 + -0xc0) = plVar13;
          *(ulong *)((long)ppppppuVar3 + -0xb8) = uVar14;
          *(undefined1 **)((long)ppppppuVar3 + -0xb0) = (undefined1 *)((long)ppppppuVar3 + -0x80);
          *(code **)((long)ppppppuVar3 + -0xa8) =
               Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
          if ((bRam0000000003eb4b75 & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb4b75 = 1;
          }
          uVar9 = *(undefined8 *)(lVar24 + 200);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar4 = 0;
          uVar14 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,0);
          if ((uVar14 & 1) != 0) {
            return (long *)0x0;
          }
          lVar17 = *(long *)(lVar24 + 200);
          if (lVar17 != 0) {
            if (*(char *)(lVar17 + 0x44) != '\0') {
              return (long *)0x0;
            }
            return (long *)(ulong)(*(char *)(lVar17 + 0x28) == '\x01');
          }
          plVar13 = (long *)func_0x00f78af4();
          *(undefined8 *)((long)ppppppuVar3 + -0x120) = unaff_d11;
          *(undefined8 *)((long)ppppppuVar3 + -0x118) = unaff_d10;
          *(undefined8 *)((long)ppppppuVar3 + -0x110) = unaff_d9;
          *(ulong *)((long)ppppppuVar3 + -0x108) = uVar10 & 0xffffffff;
          *(undefined8 *)((long)ppppppuVar3 + -0x100) = 0x3d23990;
          *(undefined8 *)((long)ppppppuVar3 + -0xf8) = 0x3d23990;
          *(undefined8 *)((long)ppppppuVar3 + -0xf0) = uVar9;
          *(long *)((long)ppppppuVar3 + -0xe8) = lVar24;
          *(undefined1 **)((long)ppppppuVar3 + -0xe0) = (undefined1 *)((long)ppppppuVar3 + -0xb0);
          *(code **)((long)ppppppuVar3 + -0xd8) =
               Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
          plVar8 = plVar13;
          if ((bRam0000000003eb4b78 & 1) == 0) {
            plVar8 = (long *)func_0x00f78a20(0x3d23990);
            bRam0000000003eb4b78 = 1;
          }
          if (0.0 < *(float *)((long)plVar13 + 0xdc)) {
            return plVar8;
          }
          fVar34 = *(float *)((long)plVar13 + 0xe4);
          fVar35 = *(float *)(plVar13 + 0x1d);
          plVar8 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar13[0x1c],fVar34,fVar35,(float)extraout_d0,
                                           param_2,param_3,0);
          fVar34 = param_3 * fVar35 + (float)extraout_d0 * extraout_s0 + param_2 * fVar34;
          if (fVar34 < 0.0) {
            return plVar8;
          }
          *(float *)(plVar13 + 0x1c) = extraout_s0;
          *(undefined4 *)((long)plVar13 + 0xe4) = 0;
          *(float *)(plVar13 + 0x1d) = fVar35;
          /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar13 + 0x1c,0);
          *(undefined4 *)((long)plVar13 + 0xdc) = 0x3d4ccccd;
          if (0.0 < *(float *)(plVar13 + 0x1b)) {
            lVar4 = plVar13[0x1a];
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar4,0);
            if (((ulong)plVar8 & 1) != 0) {
              return plVar8;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar4 = 0;
            plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
            if (((ulong)plVar8 & 1) != 0) {
              return plVar8;
            }
          }
          *(undefined4 *)(plVar13 + 0x1b) = 0x3e4ccccd;
          uVar15 = *(int *)((long)plVar13 + 0xec) + 1;
          *(uint *)((long)plVar13 + 0xec) = uVar15;
          lVar24 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar13);
          if (lVar24 != 0) {
            if (*(int *)(lVar24 + 0x90) < (int)uVar15) {
              (**(code **)(*plVar13 + 0x228))(plVar13,*(undefined8 *)(*plVar13 + 0x230));
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar4 = 0;
            plVar8 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
            if ((int)plVar8 == 0) {
              return plVar8;
            }
            if (extraout_x1 != 0) {
              plVar8 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
              plVar13[0x1a] = (long)plVar8;
              return plVar8;
            }
          }
          auVar39 = func_0x00f78af4();
          lVar17 = auVar39._8_8_;
          lVar24 = auVar39._0_8_;
          *(undefined8 *)((long)ppppppuVar3 + -400) = unaff_d13;
          *(undefined8 *)((long)ppppppuVar3 + -0x188) = unaff_d12;
          *(undefined8 *)((long)ppppppuVar3 + -0x180) = unaff_d11;
          *(ulong *)((long)ppppppuVar3 + -0x178) = extraout_d0 & 0xffffffff;
          *(ulong *)((long)ppppppuVar3 + -0x170) = (ulong)(uint)param_2;
          *(ulong *)((long)ppppppuVar3 + -0x168) = (ulong)(uint)param_3;
          *(undefined8 *****)((long)ppppppuVar3 + -0x160) = unaff_x24;
          *(undefined8 *)((long)ppppppuVar3 + -0x158) = unaff_x23;
          *(undefined8 *)((long)ppppppuVar3 + -0x150) = 0x3d23990;
          *(ulong *)((long)ppppppuVar3 + -0x148) = (ulong)uVar15;
          *(long *)((long)ppppppuVar3 + -0x140) = extraout_x1;
          *(long **)((long)ppppppuVar3 + -0x138) = plVar13;
          *(undefined1 **)((long)ppppppuVar3 + -0x130) = (undefined1 *)((long)ppppppuVar3 + -0xe0);
          *(code **)((long)ppppppuVar3 + -0x128) =
               Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
          if ((bRam0000000003eb4b79 & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb4b79 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar17,0,0);
          if (((ulong)plVar8 & 1) != 0) {
            return plVar8;
          }
          if (*(long *)(lVar24 + 0x100) == 0) goto code_r0x014cf9bc;
          uVar31 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar24 + 0x100),0);
          fVar32 = *(float *)(lVar4 + 0xc);
          fVar36 = *(float *)(lVar24 + 0xe0);
          fVar30 = *(float *)(lVar24 + 0x128) * fVar32;
          lVar22 = *(long *)(lVar24 + 0x50);
          fVar33 = fVar32;
          fVar37 = fVar36;
          if (lVar22 != 0) {
            if (*(long *)(lVar24 + 0x100) == 0) goto code_r0x014cf9bc;
            /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar30,fVar32,fVar36,*(undefined4 *)(lVar24 + 0xe4),
                            *(undefined4 *)(lVar24 + 0xe8),*(long *)(lVar24 + 0x100),0);
            uVar31 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar24,lVar22,0);
            if ((*(long *)(lVar24 + 0x50) == 0) ||
               (lVar24 = *(long *)(*(long *)(lVar24 + 0x50) + 0x10), lVar24 == 0))
            goto code_r0x014cf9bc;
            lVar24 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar24,0);
            fVar33 = *(float *)(lVar24 + 0x104);
            fVar37 = *(float *)(lVar24 + 0x108);
            fVar30 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar24 + 0x100),fVar33,fVar37,0);
            fVar34 = *(float *)(lVar4 + 8);
            fVar30 = fVar30 * fVar34;
            fVar33 = fVar33 * fVar34;
            fVar37 = fVar37 * fVar34;
            fVar34 = fVar32;
            fVar35 = fVar36;
          }
          if ((lVar17 != 0) &&
             (lVar24 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar30,fVar33,fVar37,lVar17,0), lVar24 != 0)) {
            *(long *)((long)ppppppuVar3 + -0x1b0) = lVar4;
            *(long *)((long)ppppppuVar3 + -0x1a8) = lVar17;
            *(undefined1 **)((long)ppppppuVar3 + -0x1a0) =
                 (undefined1 *)((long)ppppppuVar3 + -0x130);
            *(undefined **)((long)ppppppuVar3 + -0x198) = &UNK_014cf984;
            *(undefined4 *)((long)ppppppuVar3 + -0x1c0) = uVar31;
            *(float *)((long)ppppppuVar3 + -0x1bc) = fVar34;
            *(float *)((long)ppppppuVar3 + -0x1b8) = fVar35;
            if (pcRam0000000003ec1950 == (code *)0x0) {
              pcRam0000000003ec1950 =
                   (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                           ,0);
            }
            plVar8 = (long *)(*pcRam0000000003ec1950)
                                       (lVar24,(undefined1 *)((long)ppppppuVar3 + -0x1c0));
            return plVar8;
          }
code_r0x014cf9bc:
          plVar8 = (long *)func_0x00f78af4();
          return plVar8;
        }
      }
    }
    plVar7 = (long *)func_0x00f78af4();
    puVar2 = (undefined1 *)((long)ppppppuVar3 + -0xc0);
    *(long **)((long)ppppppuVar3 + -0xc0) = plVar8;
    *(long **)((long)ppppppuVar3 + -0xb8) = plVar13;
    *(undefined1 **)((long)ppppppuVar3 + -0xb0) = (undefined1 *)((long)ppppppuVar3 + -0x80);
    *(undefined **)((long)ppppppuVar3 + -0xa8) = &Atlas_Gameplay_Usables_RicochetProjectile__Destroy
    ;
    if (plVar7[9] != 0) {
      lVar4 = plVar7[0x37];
      uVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar7[9],0);
      plVar8 = (long *)0x0;
      if (lVar4 != 0) {
        uVar15 = 0;
        /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(lVar4,uVar6);
        uVar6 = *(undefined8 *)((long)ppppppuVar3 + -0xc0);
        *(undefined8 *)((long)ppppppuVar3 + -0xc0) = uVar6;
        *(undefined8 *)((long)ppppppuVar3 + -0xb8) = *(undefined8 *)((long)ppppppuVar3 + -0xb8);
        *(undefined8 *)((long)ppppppuVar3 + -0xb0) = *(undefined8 *)((long)ppppppuVar3 + -0xb0);
        *(undefined8 *)((long)ppppppuVar3 + -0xa8) = *(undefined8 *)((long)ppppppuVar3 + -0xa8);
        puVar28 = (undefined1 *)((long)ppppppuVar3 + -0xb0);
        plVar8 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar7,0);
        if (((ulong)plVar8 & 1) != 0) {
LAB_014ceb18:
          if ((char)plVar7[0xc] == '\0') {
            *(undefined1 *)(plVar7 + 0xc) = 1;
            *(undefined1 *)((long)plVar7 + 0x61) = 1;
            return plVar7;
          }
          return plVar8;
        }
        plVar8 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar7,0);
        if ((plVar8 == (long *)0x0) || (plVar8[0x18] == 0)) {
          pcVar1 = Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
          auVar40 = func_0x00f78af4();
        }
        else {
          if (*(char *)(plVar8[0x18] + 0x50) != '\0') goto LAB_014ceb18;
          auVar40._8_4_ = 1;
          auVar40._0_8_ = plVar7;
          uVar15 = 1;
          puVar28 = *(undefined1 **)((long)ppppppuVar3 + -0xb0);
          pcVar1 = *(code **)((long)ppppppuVar3 + -0xa8);
          puVar2 = (undefined1 *)((long)ppppppuVar3 + -0xa0);
          uVar6 = *(undefined8 *)((long)ppppppuVar3 + -0xc0);
          plVar7 = *(long **)((long)ppppppuVar3 + -0xb8);
        }
        plVar8 = auVar40._0_8_;
        *(undefined8 *)(puVar2 + -0x20) = uVar6;
        *(long **)(puVar2 + -0x18) = plVar7;
        *(undefined1 **)(puVar2 + -0x10) = puVar28;
        *(code **)(puVar2 + -8) = pcVar1;
        if ((*(char *)((long)plVar8 + 300) != '\0') == uVar15) {
          return plVar8;
        }
        if (auVar40._8_4_ != 0) {
          (**(code **)(*plVar8 + 0x448))(plVar8,*(undefined8 *)(*plVar8 + 0x450));
        }
        *(char *)((long)plVar8 + 300) = (char)uVar15;
        if (((plVar8[9] == 0) || (lVar4 = *(long *)(plVar8[9] + 0x28), lVar4 == 0)) ||
           (lVar24 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0), lVar24 == 0)) {
          plVar8 = (long *)func_0x00f78af4();
          return plVar8;
        }
        uVar15 = uVar15 ^ 1;
        puVar28 = *(undefined1 **)(puVar2 + -0x10);
        puVar29 = *(undefined **)(puVar2 + -8);
        lVar4 = *(long *)(puVar2 + -0x20);
        uVar6 = *(undefined8 *)(puVar2 + -0x18);
        goto code_r0x0322ef1c;
      }
    }
    plVar13 = (long *)func_0x00f78af4();
    *(long **)((long)ppppppuVar3 + -0xe0) = plVar8;
    *(long **)((long)ppppppuVar3 + -0xd8) = plVar7;
    *(undefined1 **)((long)ppppppuVar3 + -0xd0) = (undefined1 *)((long)ppppppuVar3 + -0xb0);
    *(undefined **)((long)ppppppuVar3 + -200) =
         &Atlas_Gameplay_Usables_RicochetProjectile__CollideWithFloor;
    plVar8 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar13,0);
    if (((ulong)plVar8 & 1) == 0) {
      Atlas_Gameplay_Usables_ProjectileUsable__SetForceToFloorNetworkFlag(plVar13,1,0);
      Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(plVar13,0,0);
                    /* WARNING: Could not recover jumptable at 0x014e4e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar8 = (long *)(**(code **)(*plVar13 + 0x3f8))(plVar13,*(undefined8 *)(*plVar13 + 0x400));
      return plVar8;
    }
    return plVar8;
  }
  ppppppuVar23 = (undefined8 ******)0x3eb6000;
  ppppppuVar12 = ppppppuRam0000000003d5ff18;
  if ((bRam0000000003eb6a8c & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb6a8c = 1;
  }
  if (param_5 == (long *)0x0) goto code_r0x01a3f500;
  lVar24 = param_5[9];
  ppppuVar26 = ppppppuVar16[6][1];
  if ((*(ushort *)((long)ppppuVar26 + 0x132) & 1) == 0) {
    func_0x00fac028(ppppuVar26);
  }
  if (lVar24 == 0) {
code_r0x01a3f450:
    ppppppuVar23 = (undefined8 ******)0x0;
  }
  else {
    ppppppuVar23 = (undefined8 ******)func_0x00f78adc(lVar24,ppppuVar26);
    if (ppppppuVar23 == (undefined8 ******)0x0) {
      func_0x00f78e5c(lVar24,ppppuVar26);
      goto code_r0x01a3f450;
    }
  }
  unaff_x25 = (long *)0x3d25000;
  (**(code **)(*param_5 + 0x218))(param_5,*(undefined8 *)(*param_5 + 0x220));
  lVar24 = *(long *)(lVar4 + 0x18);
  unaff_x24 = ppppppuVar16[6][2];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x24,0);
  if ((plVar8 != (long *)0x0) &&
     (uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0)), lVar24 != 0))
  {
    param_8 = ppppppuVar16[6][3];
    ppppppuVar12 = ppppppuVar23;
    (*(code *)*param_8)(lVar24,uVar9);
    if (*(long *)(lVar4 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3f4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar8 = (long *)(*(code *)*ppppppuVar16[6][4])(*(long *)(lVar4 + 0x10),param_5);
      return plVar8;
    }
  }
code_r0x01a3f500:
  func_0x00f78af4();
  ppppppuStack_70 = ppppppuVar16;
  puStack_58 = &Atlas_Gameplay_Usables_UsableManager__GetActiveUsablesBelongingToKart_Usable_;
  ppppuVar25 = (undefined8 ****)0x3eb6000;
  ppppppuVar16 = ppppppuVar12;
  ppppuVar26 = param_8;
  ppppppuVar20 = param_9;
  pppppppuStack_80 = (undefined8 *******)ppppppuVar23;
  puStack_78 = (undefined *)lVar4;
  plStack_68 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb6a8d & 1) == 0) {
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d1c740);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3c750);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb6a8d = 1;
  }
  if (param_8 == (undefined8 ****)0x0) {
    func_0x00f78af4();
    goto code_r0x01a3f6f8;
  }
  unaff_x25 = (long *)0x3d1c740;
  unaff_x24 = (undefined8 ****)0x3d220f0;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&lStack_e8,param_8,uRam0000000003d3a7d0);
  uStack_c8 = uStack_e0;
  lStack_d0 = lStack_e8;
  ppppuStack_c0 = ppppuStack_d8;
  while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&lStack_d0,uRam0000000003d325c8), ppppuVar21 = ppppuStack_c0,
        (uVar10 & 1) != 0) {
    ppppuVar25 = *param_9[6];
    if ((*(ushort *)((long)ppppuVar25 + 0x132) & 1) == 0) {
      func_0x00fac028(ppppuVar25);
    }
    if (ppppuVar21 == (undefined8 ****)0x0) {
      func_0x00f78af4();
      goto code_r0x01a3f6f0;
    }
    lVar4 = func_0x00f78adc(ppppuVar21,ppppuVar25);
    if (lVar4 == 0) {
      func_0x00f78e5c(ppppuVar21,ppppuVar25);
      goto code_r0x01a3f6f0;
    }
    param_8 = ppppuVar21;
    if ((*(long *)(lVar4 + 0x28) == extraout_x1_00) && (*(char *)(lVar4 + 0x18) != '\0')) {
      if (ppppppuVar12 == (undefined8 ******)0x0) {
        func_0x00f78af4();
code_r0x01a3f6f0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f6f4);
        (*pcVar1)();
      }
      ppppppuVar16 = ppppppuRam0000000003d3c750;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(ppppppuVar12);
    }
  }
  param_9 = (undefined8 ******)0x0;
  do {
    lStack_e8 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lStack_e8 + 0x12a);
    if (uVar10 != 0) {
      piVar19 = (int *)(*(long *)(lStack_e8 + 0xb0) + 8);
      do {
        if (*(undefined8 ****)(piVar19 + -2) == *unaff_x24) {
          puVar11 = (undefined8 *)(lStack_e8 + (long)*piVar19 * 0x10 + 0x138);
          goto code_r0x01a3f69c;
        }
        piVar19 = piVar19 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    ppppppuVar16 = (undefined8 ******)0x0;
    puVar11 = (undefined8 *)func_0x00fac1f0(&lStack_e8);
code_r0x01a3f69c:
    plVar8 = (long *)(*(code *)*puVar11)(&uStack_e0,puVar11[1]);
    if (param_9 == (undefined8 ******)0x0) {
      return plVar8;
    }
code_r0x01a3f6f8:
    func_0x00f78ac0(param_9,0);
    if (extraout_w1 != 1) break;
    plVar8 = (long *)___cxa_begin_catch();
    param_9 = (undefined8 ******)*plVar8;
    ___cxa_end_catch();
  } while( true );
  auVar39 = __Unwind_Resume();
  lStack_148 = auVar39._0_8_;
  puStack_f8 = &Atlas_Gameplay_Usables_UsableManager__GetUsedUsablesBelongingToKart_object_;
  ppppppuVar23 = ppppppuVar16;
  ppppuVar21 = ppppuVar26;
  ppppuStack_120 = param_8;
  lStack_118 = extraout_x1_00;
  ppppppuStack_110 = ppppppuVar12;
  ppppppuStack_108 = param_9;
  ppuStack_100 = &puStack_60;
  if ((*(long *)(lStack_148 + 0x20) != 0) &&
     (lVar4 = (*(code *)**ppppuVar26[6])(), param_9 = ppppppuVar16, ppppppuVar12 = auVar39._8_8_,
     param_8 = ppppuVar26, lVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01a3f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar8 = (long *)(*(code *)*ppppuVar26[6][1])
                               (lStack_148,auVar39._8_8_,ppppppuVar16,*(undefined8 *)(lVar4 + 0x10))
    ;
    return plVar8;
  }
  auVar39 = func_0x00f78af4();
  lVar4 = auVar39._8_8_;
  puStack_128 = &Atlas_Gameplay_Usables_UsableManager__InitLightMembers_SuperShieldUsableBehaviour_;
  plVar8 = (long *)0x3eb6000;
  ppppppuVar16 = ppppppuVar23;
  ppppuStack_160 = unaff_x24;
  ppppuStack_158 = ppppuVar25;
  ppppuStack_150 = param_8;
  ppppppuStack_140 = ppppppuVar12;
  ppppppuStack_138 = param_9;
  pppuStack_130 = &ppuStack_100;
  if ((bRam0000000003eb6a8e & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    bRam0000000003eb6a8e = 1;
  }
  if ((((*(long *)(auVar39._0_8_ + 0x18) == 0) ||
       (lVar24 = (*(code *)**ppppppuVar20[6])(), lVar24 == 0)) ||
      (lVar24 = (*(code *)*ppppppuVar20[6][1])(), lVar24 == 0)) ||
     (lVar24 = (*(code *)*ppppppuVar20[6][2])(), lVar24 == 0)) {
    func_0x00f78af4();
    goto code_r0x01a3f96c;
  }
  plVar8 = (long *)0x3d220f0;
  (*(code *)*ppppppuVar20[6][3])(&ppppppuStack_198);
  uStack_178 = uStack_190;
  ppppppuStack_180 = ppppppuStack_198;
  uStack_170 = uStack_188;
  do {
    uVar10 = /*System.Collections.Generic.Stack.Enumerator<object>$$MoveNext*/ func_0x01f6fa5c(&ppppppuStack_180,ppppppuVar20[6][6]);
    if ((uVar10 & 1) == 0) {
      ppppuVar21 = (undefined8 ****)0x0;
      do {
        ppppppuVar20 = (undefined8 ******)ppppppuVar20[6][7];
        if ((*(ushort *)((long)ppppppuVar20 + 0x132) & 1) == 0) {
          func_0x00fac028(ppppppuVar20);
        }
        uVar10 = (ulong)*(ushort *)((long)ppppppuVar20 + 0x12a);
        ppppppuStack_198 = ppppppuVar20;
        if (uVar10 != 0) {
          pppppuVar18 = ppppppuVar20[0x16] + 1;
          do {
            if (pppppuVar18[-1] == (undefined8 ****)*plVar8) {
              ppppppuVar12 = ppppppuVar20 + (long)*(int *)pppppuVar18 * 2 + 0x27;
              goto code_r0x01a3f920;
            }
            pppppuVar18 = pppppuVar18 + 2;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        ppppppuVar16 = (undefined8 ******)0x0;
        ppppppuVar12 = (undefined8 ******)func_0x00fac1f0(&ppppppuStack_198);
code_r0x01a3f920:
        plVar13 = (long *)(*(code *)*ppppppuVar12)(&uStack_190,ppppppuVar12[1]);
        if (ppppuVar21 == (undefined8 ****)0x0) {
          return plVar13;
        }
code_r0x01a3f96c:
        func_0x00f78ac0(ppppuVar21,0);
        if (extraout_w1_00 != 1) {
          auVar39 = __Unwind_Resume();
          lVar24 = auVar39._0_8_;
          plVar8 = (long *)(*(code *)**ppppppuVar16[6])();
          if (plVar8 == (long *)0x0) {
            puVar11 = (undefined8 *)func_0x00f78af4();
            plVar8 = (long *)*puVar11;
            func_0x00f78a30();
            return plVar8;
          }
          (**(code **)(*plVar8 + 0x1e8))
                    (plVar8,lVar24,auVar39._8_8_,*(undefined8 *)(lVar24 + 0x38),
                     *(undefined8 *)(lVar24 + 0x40),*(undefined8 *)(*plVar8 + 0x1f0),param_11,
                     param_12,lVar4,ppppppuVar23,ppppuVar21,ppppppuVar20);
          return plVar8;
        }
        puVar11 = (undefined8 *)___cxa_begin_catch();
        ppppuVar21 = (undefined8 ****)*puVar11;
        ___cxa_end_catch();
      } while( true );
    }
    lVar24 = /*System.Collections.Generic.Stack.Enumerator<object>$$get_Current*/ func_0x01f6fb50(&ppppppuStack_180,ppppppuVar20[6][4]);
    if (ppppppuVar23 == (undefined8 ******)0x0) {
      func_0x00f78af4();
code_r0x01a3f964:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1a3f968);
      (*pcVar1)();
    }
    /*Atlas.Rendering.MaterialDuplicator$$Clear*/ func_0x01491d58(ppppppuVar23,0);
    if (lVar24 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    *(undefined8 *****)(lVar24 + 0x48) = ppppuVar21;
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x01a3f964;
    }
    ppppppuVar16 = *(undefined8 *******)(lVar4 + 0x28);
    /*Atlas.Lighting.LightWorldMemberBehaviour$$CreateDuplicatedMaterials*/ func_0x01486904(lVar24,ppppppuVar23,ppppppuVar16,0);
  } while( true );
}



// ============================================================
// RVA: 0x14e4888 | Atlas.Gameplay.Usables.RicochetProjectile.CreateDeSpawnVfx
// ============================================================

/* WARNING: Possible PIC construction at 0x014e4b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e4b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01526ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */
/* WARNING: Removing unreachable block (ram,0x014e4b7c) */
/* WARNING: Removing unreachable block (ram,0x014e4b94) */
/* WARNING: Removing unreachable block (ram,0x014e4b84) */
/* WARNING: Removing unreachable block (ram,0x0152fe60) */
/* WARNING: Removing unreachable block (ram,0x0152fe7c) */
/* WARNING: Removing unreachable block (ram,0x0152fe90) */
/* WARNING: Removing unreachable block (ram,0x0152fe98) */
/* WARNING: Removing unreachable block (ram,0x0152fec4) */
/* WARNING: Removing unreachable block (ram,0x0152fea0) */
/* WARNING: Removing unreachable block (ram,0x01638d80) */
/* WARNING: Removing unreachable block (ram,0x014e4b5c) */
/* WARNING: Removing unreachable block (ram,0x014e4b68) */
/* WARNING: Removing unreachable block (ram,0x014e4b70) */
/* WARNING: Removing unreachable block (ram,0x01526ff8) */
/* WARNING: Removing unreachable block (ram,0x032754b4) */
/* WARNING: Removing unreachable block (ram,0x032754dc) */
/* WARNING: Removing unreachable block (ram,0x032754f0) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Gameplay_Usables_RicochetProjectile__CreateDeSpawnVfx
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long *param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long extraout_x1;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 unaff_x21;
  undefined8 uVar14;
  long lVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******pppppppuVar16;
  undefined1 *puVar17;
  code *pcVar18;
  undefined *puVar19;
  float extraout_s0;
  float fVar20;
  undefined4 uVar21;
  ulong extraout_d0;
  ulong extraout_d0_00;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  plVar2 = param_5;
  if ((bRam0000000003eb4bfd & 1) == 0) {
    func_0x00f78a20(0x3d570c0);
    plVar2 = (long *)func_0x00f78a20(0x3d71fa8);
    bRam0000000003eb4bfd = 1;
  }
  if (*(char *)((long)param_5 + 300) != '\0') {
    return plVar2;
  }
  lVar3 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_5,0);
  lVar4 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetProjectileDefinition(param_5);
  if ((lVar4 != 0) && (lVar3 != 0)) {
    lVar3 = /*Atlas.Contexts.GameContextBase$$SpawnTimedObject<VFXBehaviour>*/ func_0x0185c108(*(undefined4 *)(lVar4 + 0x98),lVar3,/*STR('RicochetHitVFX')*/ uRam0000000003d71fa8,
                            uRam0000000003d570c0);
    lVar4 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetProjectileDefinition(param_5);
    if (lVar4 != 0) {
      uStack_38 = *(undefined8 *)(lVar4 + 0xa0);
      uStack_40 = *(undefined8 *)(lVar4 + 0x98);
      uStack_30 = *(undefined4 *)(lVar4 + 0xa8);
      plVar2 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX
                                 (param_5,lVar3,&uStack_40,0);
      return plVar2;
    }
  }
  auVar29 = func_0x00f78af4();
  plVar7 = auVar29._8_8_;
  plVar2 = auVar29._0_8_;
  puVar6 = (undefined8 *)&stack0xffffffffffffff90;
  puStack_48 = &Atlas_Gameplay_Usables_RicochetProjectile__Update;
  pppppppuVar16 = &pppppppuStack_50;
  uVar14 = 0x3eb4000;
  pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4bfe & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4bfe = 1;
  }
  plVar5 = (long *)Atlas_Gameplay_Usables_CollidableUsable__Update(plVar2,plVar7,0);
  if ((char)plVar2[3] == '\0') {
    return plVar5;
  }
  if (plVar7 == (long *)0x0) {
    puVar19 = &Atlas_Gameplay_Usables_RicochetProjectile__InUseVisuals;
    plVar7 = (long *)func_0x00f78af4();
    lVar3 = 0;
    uVar12 = extraout_d0_00;
  }
  else {
    lVar4 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x014e4a14;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014e4a14:
    uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    puVar6 = &uStack_40;
    plVar7 = plVar2;
    plVar2 = param_5;
    uVar14 = unaff_x21;
    pppppppuVar16 = pppppppuStack_50;
    puVar19 = puStack_48;
  }
  *(undefined8 *)((long)puVar6 + -0x30) = unaff_d9;
  *(undefined8 *)((long)puVar6 + -0x28) = unaff_d8;
  *(long *)((long)puVar6 + -0x20) = lVar3;
  *(long **)((long)puVar6 + -0x18) = plVar2;
  *(undefined8 ********)((long)puVar6 + -0x10) = pppppppuVar16;
  *(undefined **)((long)puVar6 + -8) = puVar19;
  lVar4 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour();
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x28) != 0)) {
    lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x28),0);
    lVar4 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetProjectileDefinition(plVar7);
    if ((lVar4 != 0) && (lVar3 != 0)) {
      fVar24 = *(float *)(lVar4 + 0xb0) * (float)uVar12;
      uVar28 = 0;
      *(undefined8 *)((long)puVar6 + -0x60) = unaff_d15;
      *(undefined8 *)((long)puVar6 + -0x58) = unaff_d14;
      *(undefined8 *)((long)puVar6 + -0x50) = unaff_d13;
      *(undefined8 *)((long)puVar6 + -0x48) = unaff_d12;
      *(undefined8 *)((long)puVar6 + -0x40) = unaff_d11;
      *(undefined8 *)((long)puVar6 + -0x38) = unaff_d10;
      *(undefined8 *)((long)puVar6 + -0x30) = *(undefined8 *)((long)puVar6 + -0x30);
      *(undefined8 *)((long)puVar6 + -0x28) = *(undefined8 *)((long)puVar6 + -0x28);
      *(undefined8 *)((long)puVar6 + -0x20) = *(undefined8 *)((long)puVar6 + -0x20);
      *(undefined8 *)((long)puVar6 + -0x18) = *(undefined8 *)((long)puVar6 + -0x18);
      *(undefined8 *)((long)puVar6 + -0x10) = *(undefined8 *)((long)puVar6 + -0x10);
      *(undefined8 *)((long)puVar6 + -8) = *(undefined8 *)((long)puVar6 + -8);
      /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(0,0,1,0);
      /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c();
      uVar21 = /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251e58(0);
      *(undefined8 *)((long)puVar6 + -0x20) = *(undefined8 *)((long)puVar6 + -0x20);
      *(undefined8 *)((long)puVar6 + -0x18) = *(undefined8 *)((long)puVar6 + -0x18);
      *(undefined8 *)((long)puVar6 + -0x10) = *(undefined8 *)((long)puVar6 + -0x10);
      *(undefined8 *)((long)puVar6 + -8) = *(undefined8 *)((long)puVar6 + -8);
      *(undefined4 *)((long)puVar6 + -0x30) = uVar21;
      *(float *)((long)puVar6 + -0x2c) = fVar24;
      *(undefined4 *)((long)puVar6 + -0x28) = uVar28;
      *(undefined4 *)((long)puVar6 + -0x24) = param_4;
      if (pcRam0000000003ec1998 == (code *)0x0) {
        pcRam0000000003ec1998 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)"
                                    );
      }
      plVar2 = (long *)(*pcRam0000000003ec1998)(lVar3,(undefined1 *)((long)puVar6 + -0x30));
      return plVar2;
    }
  }
  auVar29 = func_0x00f78af4();
  plVar2 = auVar29._0_8_;
  *(long *)((long)puVar6 + -0x50) = lVar3;
  *(long **)((long)puVar6 + -0x48) = plVar7;
  *(undefined1 **)((long)puVar6 + -0x40) = (undefined1 *)((long)puVar6 + -0x10);
  *(undefined **)((long)puVar6 + -0x38) = &Atlas_Gameplay_Usables_RicochetProjectile__EarlyUpdate;
  plVar7 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate(plVar2,auVar29._8_8_,0);
  if (plVar2[0x19] != 0) {
    if ((*(char *)(plVar2[0x19] + 0x44) == '\0') &&
       (plVar7 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag
                                   (plVar2,0), (int)plVar7 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x014e4b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar2 = (long *)(**(code **)(*plVar2 + 0x428))
                                 (*(undefined4 *)((long)plVar2 + 0x1a4),plVar2,
                                  *(undefined8 *)(*plVar2 + 0x430));
      return plVar2;
    }
    return plVar7;
  }
  uVar8 = func_0x00f78af4();
  puVar1 = (undefined1 *)((long)puVar6 + -0x70);
  *(long *)((long)puVar6 + -0x70) = lVar3;
  *(long **)((long)puVar6 + -0x68) = plVar2;
  *(undefined1 **)((long)puVar6 + -0x60) = (undefined1 *)((long)puVar6 + -0x40);
  *(undefined **)((long)puVar6 + -0x58) = &Atlas_Gameplay_Usables_RicochetProjectile__Use;
  puVar17 = (undefined1 *)((long)puVar6 + -0x60);
  Atlas_Gameplay_Usables_ProjectileUsable__Use(uVar8,0);
  Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(uVar8,1,0);
  lVar4 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(uVar8);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x70), lVar4 != 0)) {
    uVar10 = 0;
    puVar19 = &UNK_014e4b5c;
code_r0x0322ef1c:
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = uVar14;
    *(long *)(puVar1 + -0x20) = lVar3;
    *(undefined8 *)(puVar1 + -0x18) = uVar8;
    *(undefined1 **)(puVar1 + -0x10) = puVar17;
    *(undefined **)(puVar1 + -8) = puVar19;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar2 = (long *)(*pcRam0000000003ebf4c0)(lVar4,uVar10);
    return plVar2;
  }
  auVar29 = func_0x00f78af4();
  plVar2 = auVar29._8_8_;
  plVar7 = auVar29._0_8_;
  *(undefined8 *)((long)puVar6 + -0xa0) = unaff_x22;
  *(undefined8 *)((long)puVar6 + -0x98) = uVar14;
  *(long *)((long)puVar6 + -0x90) = lVar3;
  *(undefined8 *)((long)puVar6 + -0x88) = uVar8;
  *(undefined1 **)((long)puVar6 + -0x80) = puVar17;
  *(undefined **)((long)puVar6 + -0x78) = &Atlas_Gameplay_Usables_RicochetProjectile__OnTriggerEnter
  ;
  uVar14 = 0x3eb4000;
  if ((bRam0000000003eb4bff & 1) == 0) {
    func_0x00f78a20(0x3d207e8);
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bff = 1;
  }
  plVar5 = (long *)Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(plVar7,plVar2,0);
  if ((char)plVar7[0xc] != '\0') {
    return plVar5;
  }
  if (*(char *)((long)plVar7 + 300) != '\0') {
    return plVar5;
  }
  plVar5 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar7,0);
  if (((ulong)plVar5 & 1) != 0) {
    return plVar5;
  }
  if (plVar2 != (long *)0x0) {
    uVar14 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar2,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar5 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
    if ((int)plVar5 == 0) {
      return plVar5;
    }
    lVar3 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar2,0);
    if (lVar3 != 0) {
      lVar3 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar3,uRam0000000003d534a0);
      if ((lVar3 == 0) ||
         (plVar2 = (long *)func_0x0001c7d0(0,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ uRam0000000003d21fc8,lVar3), plVar2 == (long *)0x0)) {
        return (long *)0x0;
      }
      lVar3 = *plVar2;
      if ((*(byte *)(lVar3 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
         (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8)
          != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
        if (*(byte *)(lVar3 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300)) {
          return plVar2;
        }
        if (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300) * 8 + -8
                     ) == /*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8) {
                    /* WARNING: Could not recover jumptable at 0x014e4d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar2 = (long *)(**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
          return plVar2;
        }
        return plVar2;
      }
      plVar5 = (long *)(**(code **)(*plVar7 + 0x328))
                                 (plVar7,plVar2,1,*(undefined8 *)(*plVar7 + 0x330));
      if ((int)plVar5 == 0) {
        return plVar5;
      }
      if (plVar7[7] != 0) {
        /*Atlas.Stats.AchievementManager$$OnClamHit*/ func_0x01448380(plVar7[7],*(undefined4 *)((long)plVar7 + 0xec),0);
        Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag(plVar7,1,0);
        uVar9 = (ulong)*(uint *)((long)plVar2 + 0x54);
        *(undefined8 *)((long)puVar6 + -0xa0) = *(undefined8 *)((long)puVar6 + -0xa0);
        *(undefined8 *)((long)puVar6 + -0x98) = *(undefined8 *)((long)puVar6 + -0x98);
        *(undefined8 *)((long)puVar6 + -0x90) = *(undefined8 *)((long)puVar6 + -0x90);
        *(undefined8 *)((long)puVar6 + -0x88) = *(undefined8 *)((long)puVar6 + -0x88);
        *(undefined8 *)((long)puVar6 + -0x80) = *(undefined8 *)((long)puVar6 + -0x80);
        *(undefined8 *)((long)puVar6 + -0x78) = *(undefined8 *)((long)puVar6 + -0x78);
        if ((bRam0000000003eb4b74 & 1) == 0) {
          func_0x00f78a20(0x3d23990,uVar9,0);
          bRam0000000003eb4b74 = 1;
        }
        lVar3 = plVar7[0x19];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar3,0,0);
        if (((ulong)plVar2 & 1) != 0) {
          return plVar2;
        }
        lVar4 = plVar7[0x19];
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x44) != '\0') {
            *(ulong *)(lVar4 + 0x48) =
                 uVar9 << ((ulong)*(uint *)((long)plVar7 + 0x19c) & 0x3f) | *(ulong *)(lVar4 + 0x48)
            ;
            return plVar2;
          }
          return plVar2;
        }
        lVar4 = func_0x00f78af4();
        *(undefined8 *)((long)puVar6 + -0xd0) = 0x3d23990;
        *(long *)((long)puVar6 + -200) = lVar3;
        *(long **)((long)puVar6 + -0xc0) = plVar7;
        *(ulong *)((long)puVar6 + -0xb8) = uVar9;
        *(undefined1 **)((long)puVar6 + -0xb0) = (undefined1 *)((long)puVar6 + -0x80);
        *(code **)((long)puVar6 + -0xa8) =
             Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
        if ((bRam0000000003eb4b75 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b75 = 1;
        }
        uVar14 = *(undefined8 *)(lVar4 + 200);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar3 = 0;
        uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar14,0);
        if ((uVar9 & 1) != 0) {
          return (long *)0x0;
        }
        lVar11 = *(long *)(lVar4 + 200);
        if (lVar11 != 0) {
          if (*(char *)(lVar11 + 0x44) != '\0') {
            return (long *)0x0;
          }
          return (long *)(ulong)(*(char *)(lVar11 + 0x28) == '\x01');
        }
        plVar7 = (long *)func_0x00f78af4();
        *(undefined8 *)((long)puVar6 + -0x120) = unaff_d11;
        *(undefined8 *)((long)puVar6 + -0x118) = unaff_d10;
        *(undefined8 *)((long)puVar6 + -0x110) = unaff_d9;
        *(ulong *)((long)puVar6 + -0x108) = uVar12 & 0xffffffff;
        *(undefined8 *)((long)puVar6 + -0x100) = 0x3d23990;
        *(undefined8 *)((long)puVar6 + -0xf8) = 0x3d23990;
        *(undefined8 *)((long)puVar6 + -0xf0) = uVar14;
        *(long *)((long)puVar6 + -0xe8) = lVar4;
        *(undefined1 **)((long)puVar6 + -0xe0) = (undefined1 *)((long)puVar6 + -0xb0);
        *(code **)((long)puVar6 + -0xd8) = Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
        plVar2 = plVar7;
        if ((bRam0000000003eb4b78 & 1) == 0) {
          plVar2 = (long *)func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b78 = 1;
        }
        if (0.0 < *(float *)((long)plVar7 + 0xdc)) {
          return plVar2;
        }
        fVar24 = *(float *)((long)plVar7 + 0xe4);
        fVar25 = *(float *)(plVar7 + 0x1d);
        plVar2 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar7[0x1c],fVar24,fVar25,(float)extraout_d0,param_2,
                                         param_3,0);
        fVar24 = param_3 * fVar25 + (float)extraout_d0 * extraout_s0 + param_2 * fVar24;
        if (fVar24 < 0.0) {
          return plVar2;
        }
        *(float *)(plVar7 + 0x1c) = extraout_s0;
        *(undefined4 *)((long)plVar7 + 0xe4) = 0;
        *(float *)(plVar7 + 0x1d) = fVar25;
        /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar7 + 0x1c,0);
        *(undefined4 *)((long)plVar7 + 0xdc) = 0x3d4ccccd;
        if (0.0 < *(float *)(plVar7 + 0x1b)) {
          lVar3 = plVar7[0x1a];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar3,0);
          if (((ulong)plVar2 & 1) != 0) {
            return plVar2;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar3 = 0;
          plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
          if (((ulong)plVar2 & 1) != 0) {
            return plVar2;
          }
        }
        *(undefined4 *)(plVar7 + 0x1b) = 0x3e4ccccd;
        uVar10 = *(int *)((long)plVar7 + 0xec) + 1;
        *(uint *)((long)plVar7 + 0xec) = uVar10;
        lVar4 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar7);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x90) < (int)uVar10) {
            (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar3 = 0;
          plVar2 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
          if ((int)plVar2 == 0) {
            return plVar2;
          }
          if (extraout_x1 != 0) {
            plVar2 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
            plVar7[0x1a] = (long)plVar2;
            return plVar2;
          }
        }
        auVar29 = func_0x00f78af4();
        lVar11 = auVar29._8_8_;
        lVar4 = auVar29._0_8_;
        *(undefined8 *)((long)puVar6 + -400) = unaff_d13;
        *(undefined8 *)((long)puVar6 + -0x188) = unaff_d12;
        *(undefined8 *)((long)puVar6 + -0x180) = unaff_d11;
        *(ulong *)((long)puVar6 + -0x178) = extraout_d0 & 0xffffffff;
        *(ulong *)((long)puVar6 + -0x170) = (ulong)(uint)param_2;
        *(ulong *)((long)puVar6 + -0x168) = (ulong)(uint)param_3;
        *(undefined8 *)((long)puVar6 + -0x160) = unaff_x24;
        *(undefined8 *)((long)puVar6 + -0x158) = unaff_x23;
        *(undefined8 *)((long)puVar6 + -0x150) = 0x3d23990;
        *(ulong *)((long)puVar6 + -0x148) = (ulong)uVar10;
        *(long *)((long)puVar6 + -0x140) = extraout_x1;
        *(long **)((long)puVar6 + -0x138) = plVar7;
        *(undefined1 **)((long)puVar6 + -0x130) = (undefined1 *)((long)puVar6 + -0xe0);
        *(code **)((long)puVar6 + -0x128) = Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX
        ;
        if ((bRam0000000003eb4b79 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b79 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar2 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar11,0,0);
        if (((ulong)plVar2 & 1) != 0) {
          return plVar2;
        }
        if (*(long *)(lVar4 + 0x100) == 0) goto code_r0x014cf9bc;
        uVar21 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar4 + 0x100),0);
        fVar22 = *(float *)(lVar3 + 0xc);
        fVar26 = *(float *)(lVar4 + 0xe0);
        fVar20 = *(float *)(lVar4 + 0x128) * fVar22;
        lVar15 = *(long *)(lVar4 + 0x50);
        fVar23 = fVar22;
        fVar27 = fVar26;
        if (lVar15 != 0) {
          if (*(long *)(lVar4 + 0x100) == 0) goto code_r0x014cf9bc;
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar20,fVar22,fVar26,*(undefined4 *)(lVar4 + 0xe4),
                          *(undefined4 *)(lVar4 + 0xe8),*(long *)(lVar4 + 0x100),0);
          uVar21 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar4,lVar15,0);
          if ((*(long *)(lVar4 + 0x50) == 0) ||
             (lVar4 = *(long *)(*(long *)(lVar4 + 0x50) + 0x10), lVar4 == 0)) goto code_r0x014cf9bc;
          lVar4 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar4,0);
          fVar23 = *(float *)(lVar4 + 0x104);
          fVar27 = *(float *)(lVar4 + 0x108);
          fVar20 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x100),fVar23,fVar27,0);
          fVar24 = *(float *)(lVar3 + 8);
          fVar20 = fVar20 * fVar24;
          fVar23 = fVar23 * fVar24;
          fVar27 = fVar27 * fVar24;
          fVar24 = fVar22;
          fVar25 = fVar26;
        }
        if ((lVar11 != 0) && (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar20,fVar23,fVar27,lVar11,0), lVar4 != 0)) {
          *(long *)((long)puVar6 + -0x1b0) = lVar3;
          *(long *)((long)puVar6 + -0x1a8) = lVar11;
          *(undefined1 **)((long)puVar6 + -0x1a0) = (undefined1 *)((long)puVar6 + -0x130);
          *(undefined **)((long)puVar6 + -0x198) = &UNK_014cf984;
          *(undefined4 *)((long)puVar6 + -0x1c0) = uVar21;
          *(float *)((long)puVar6 + -0x1bc) = fVar24;
          *(float *)((long)puVar6 + -0x1b8) = fVar25;
          if (pcRam0000000003ec1950 == (code *)0x0) {
            pcRam0000000003ec1950 =
                 (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                         ,0);
          }
          plVar2 = (long *)(*pcRam0000000003ec1950)(lVar4,(undefined1 *)((long)puVar6 + -0x1c0));
          return plVar2;
        }
code_r0x014cf9bc:
        plVar2 = (long *)func_0x00f78af4();
        return plVar2;
      }
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  puVar1 = (undefined1 *)((long)puVar6 + -0xc0);
  *(long **)((long)puVar6 + -0xc0) = plVar2;
  *(long **)((long)puVar6 + -0xb8) = plVar7;
  *(undefined1 **)((long)puVar6 + -0xb0) = (undefined1 *)((long)puVar6 + -0x80);
  *(undefined **)((long)puVar6 + -0xa8) = &Atlas_Gameplay_Usables_RicochetProjectile__Destroy;
  if (plVar5[9] != 0) {
    lVar3 = plVar5[0x37];
    uVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar5[9],0);
    plVar2 = (long *)0x0;
    if (lVar3 != 0) {
      uVar10 = 0;
      /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(lVar3,uVar8);
      uVar8 = *(undefined8 *)((long)puVar6 + -0xc0);
      *(undefined8 *)((long)puVar6 + -0xc0) = uVar8;
      *(undefined8 *)((long)puVar6 + -0xb8) = *(undefined8 *)((long)puVar6 + -0xb8);
      *(undefined8 *)((long)puVar6 + -0xb0) = *(undefined8 *)((long)puVar6 + -0xb0);
      *(undefined8 *)((long)puVar6 + -0xa8) = *(undefined8 *)((long)puVar6 + -0xa8);
      puVar17 = (undefined1 *)((long)puVar6 + -0xb0);
      plVar2 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar5,0);
      if (((ulong)plVar2 & 1) != 0) {
LAB_014ceb18:
        if ((char)plVar5[0xc] == '\0') {
          *(undefined1 *)(plVar5 + 0xc) = 1;
          *(undefined1 *)((long)plVar5 + 0x61) = 1;
          return plVar5;
        }
        return plVar2;
      }
      plVar2 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar5,0);
      if ((plVar2 == (long *)0x0) || (plVar2[0x18] == 0)) {
        pcVar18 = Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
        auVar30 = func_0x00f78af4();
      }
      else {
        if (*(char *)(plVar2[0x18] + 0x50) != '\0') goto LAB_014ceb18;
        auVar30._8_4_ = 1;
        auVar30._0_8_ = plVar5;
        uVar10 = 1;
        puVar17 = *(undefined1 **)((long)puVar6 + -0xb0);
        pcVar18 = *(code **)((long)puVar6 + -0xa8);
        puVar1 = (undefined1 *)((long)puVar6 + -0xa0);
        uVar8 = *(undefined8 *)((long)puVar6 + -0xc0);
        plVar5 = *(long **)((long)puVar6 + -0xb8);
      }
      plVar2 = auVar30._0_8_;
      *(undefined8 *)(puVar1 + -0x20) = uVar8;
      *(long **)(puVar1 + -0x18) = plVar5;
      *(undefined1 **)(puVar1 + -0x10) = puVar17;
      *(code **)(puVar1 + -8) = pcVar18;
      if ((*(char *)((long)plVar2 + 300) != '\0') == uVar10) {
        return plVar2;
      }
      if (auVar30._8_4_ != 0) {
        (**(code **)(*plVar2 + 0x448))(plVar2,*(undefined8 *)(*plVar2 + 0x450));
      }
      *(char *)((long)plVar2 + 300) = (char)uVar10;
      if (((plVar2[9] == 0) || (lVar3 = *(long *)(plVar2[9] + 0x28), lVar3 == 0)) ||
         (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0), lVar4 == 0)) {
        plVar2 = (long *)func_0x00f78af4();
        return plVar2;
      }
      uVar10 = uVar10 ^ 1;
      puVar17 = *(undefined1 **)(puVar1 + -0x10);
      puVar19 = *(undefined **)(puVar1 + -8);
      lVar3 = *(long *)(puVar1 + -0x20);
      uVar8 = *(undefined8 *)(puVar1 + -0x18);
      goto code_r0x0322ef1c;
    }
  }
  plVar7 = (long *)func_0x00f78af4();
  *(long **)((long)puVar6 + -0xe0) = plVar2;
  *(long **)((long)puVar6 + -0xd8) = plVar5;
  *(undefined1 **)((long)puVar6 + -0xd0) = (undefined1 *)((long)puVar6 + -0xb0);
  *(undefined **)((long)puVar6 + -200) =
       &Atlas_Gameplay_Usables_RicochetProjectile__CollideWithFloor;
  plVar2 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar7,0);
  if (((ulong)plVar2 & 1) == 0) {
    Atlas_Gameplay_Usables_ProjectileUsable__SetForceToFloorNetworkFlag(plVar7,1,0);
    Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(plVar7,0,0);
                    /* WARNING: Could not recover jumptable at 0x014e4e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar2 = (long *)(**(code **)(*plVar7 + 0x3f8))(plVar7,*(undefined8 *)(*plVar7 + 0x400));
    return plVar2;
  }
  return plVar2;
}



// ============================================================
// RVA: 0x14e495c | Atlas.Gameplay.Usables.RicochetProjectile.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x014e4b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e4b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01526ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */
/* WARNING: Removing unreachable block (ram,0x014e4b7c) */
/* WARNING: Removing unreachable block (ram,0x014e4b94) */
/* WARNING: Removing unreachable block (ram,0x014e4b84) */
/* WARNING: Removing unreachable block (ram,0x0152fe60) */
/* WARNING: Removing unreachable block (ram,0x0152fe7c) */
/* WARNING: Removing unreachable block (ram,0x0152fe90) */
/* WARNING: Removing unreachable block (ram,0x0152fe98) */
/* WARNING: Removing unreachable block (ram,0x0152fec4) */
/* WARNING: Removing unreachable block (ram,0x0152fea0) */
/* WARNING: Removing unreachable block (ram,0x01638d80) */
/* WARNING: Removing unreachable block (ram,0x014e4b5c) */
/* WARNING: Removing unreachable block (ram,0x014e4b68) */
/* WARNING: Removing unreachable block (ram,0x014e4b70) */
/* WARNING: Removing unreachable block (ram,0x01526ff8) */
/* WARNING: Removing unreachable block (ram,0x032754b4) */
/* WARNING: Removing unreachable block (ram,0x032754dc) */
/* WARNING: Removing unreachable block (ram,0x032754f0) */

long * Atlas_Gameplay_Usables_RicochetProjectile__Update
                 (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,
                 long param_5,long *param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long extraout_x1;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar14;
  long lVar15;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar16;
  code *pcVar17;
  undefined *unaff_x30;
  undefined *puVar18;
  float extraout_s0;
  float extraout_s0_00;
  float fVar19;
  float fVar20;
  float extraout_s0_01;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  
  puVar2 = &stack0xffffffffffffffd0;
  puVar16 = &stack0xfffffffffffffff0;
  uVar14 = 0x3eb4000;
  if ((bRam0000000003eb4bfe & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4bfe = 1;
  }
  plVar3 = (long *)Atlas_Gameplay_Usables_CollidableUsable__Update(param_5,param_6,0);
  if (*(char *)(param_5 + 0x18) == '\0') {
    return plVar3;
  }
  if (param_6 == (long *)0x0) {
    unaff_x30 = &Atlas_Gameplay_Usables_RicochetProjectile__InUseVisuals;
    lVar11 = func_0x00f78af4();
    unaff_x20 = 0;
    fVar20 = extraout_s0_01;
  }
  else {
    lVar11 = *param_6;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_014e4a14;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(param_6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_014e4a14:
    fVar20 = (float)(*(code *)*puVar4)(param_6,puVar4[1]);
    puVar2 = (undefined1 *)register0x00000008;
    lVar11 = param_5;
    param_5 = unaff_x19;
    uVar14 = unaff_x21;
    puVar16 = unaff_x29;
  }
  *(undefined8 *)(puVar2 + -0x30) = unaff_d9;
  *(undefined8 *)(puVar2 + -0x28) = unaff_d8;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = param_5;
  *(undefined1 **)(puVar2 + -0x10) = puVar16;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  lVar5 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour();
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) {
    unaff_x20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar5 + 0x28),0);
    lVar5 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetProjectileDefinition(lVar11);
    if ((lVar5 != 0) && (unaff_x20 != 0)) {
      fVar20 = *(float *)(lVar5 + 0xb0) * fVar20;
      uVar27 = 0;
      *(undefined8 *)(puVar2 + -0x60) = unaff_d15;
      *(undefined8 *)(puVar2 + -0x58) = unaff_d14;
      *(undefined8 *)(puVar2 + -0x50) = unaff_d13;
      *(undefined8 *)(puVar2 + -0x48) = unaff_d12;
      *(undefined8 *)(puVar2 + -0x40) = unaff_d11;
      *(undefined8 *)(puVar2 + -0x38) = unaff_d10;
      *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
      *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
      *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
      *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
      *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(0,0,1,0);
      /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c();
      uVar21 = /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251e58(0);
      *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
      *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
      *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      *(undefined4 *)(puVar2 + -0x30) = uVar21;
      *(float *)(puVar2 + -0x2c) = fVar20;
      *(undefined4 *)(puVar2 + -0x28) = uVar27;
      *(undefined4 *)(puVar2 + -0x24) = param_4;
      if (pcRam0000000003ec1998 == (code *)0x0) {
        pcRam0000000003ec1998 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)"
                                    );
      }
      plVar3 = (long *)(*pcRam0000000003ec1998)(unaff_x20,puVar2 + -0x30);
      return plVar3;
    }
  }
  auVar28 = func_0x00f78af4();
  plVar3 = auVar28._0_8_;
  *(long *)(puVar2 + -0x50) = unaff_x20;
  *(long *)(puVar2 + -0x48) = lVar11;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x38) = &Atlas_Gameplay_Usables_RicochetProjectile__EarlyUpdate;
  plVar6 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate(plVar3,auVar28._8_8_,0);
  if (plVar3[0x19] != 0) {
    if ((*(char *)(plVar3[0x19] + 0x44) == '\0') &&
       (plVar6 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag
                                   (plVar3,0), (int)plVar6 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x014e4b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar3 = (long *)(**(code **)(*plVar3 + 0x428))
                                 (*(undefined4 *)((long)plVar3 + 0x1a4),plVar3,
                                  *(undefined8 *)(*plVar3 + 0x430));
      return plVar3;
    }
    return plVar6;
  }
  uVar7 = func_0x00f78af4();
  puVar1 = puVar2 + -0x70;
  *(long *)(puVar2 + -0x70) = unaff_x20;
  *(long **)(puVar2 + -0x68) = plVar3;
  *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x40;
  *(undefined **)(puVar2 + -0x58) = &Atlas_Gameplay_Usables_RicochetProjectile__Use;
  puVar16 = puVar2 + -0x60;
  Atlas_Gameplay_Usables_ProjectileUsable__Use(uVar7,0);
  Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(uVar7,1,0);
  lVar11 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(uVar7);
  if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x70), lVar11 != 0)) {
    uVar9 = 0;
    puVar18 = &UNK_014e4b5c;
code_r0x0322ef1c:
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = uVar14;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = uVar7;
    *(undefined1 **)(puVar1 + -0x10) = puVar16;
    *(undefined **)(puVar1 + -8) = puVar18;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(*pcRam0000000003ebf4c0)(lVar11,uVar9);
    return plVar3;
  }
  auVar28 = func_0x00f78af4();
  plVar3 = auVar28._8_8_;
  plVar6 = auVar28._0_8_;
  *(undefined8 *)(puVar2 + -0xa0) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x98) = uVar14;
  *(long *)(puVar2 + -0x90) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x88) = uVar7;
  *(undefined1 **)(puVar2 + -0x80) = puVar16;
  *(undefined **)(puVar2 + -0x78) = &Atlas_Gameplay_Usables_RicochetProjectile__OnTriggerEnter;
  uVar14 = 0x3eb4000;
  if ((bRam0000000003eb4bff & 1) == 0) {
    func_0x00f78a20(0x3d207e8);
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bff = 1;
  }
  plVar8 = (long *)Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(plVar6,plVar3,0);
  if ((char)plVar6[0xc] != '\0') {
    return plVar8;
  }
  if (*(char *)((long)plVar6 + 300) != '\0') {
    return plVar8;
  }
  plVar8 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar6,0);
  if (((ulong)plVar8 & 1) != 0) {
    return plVar8;
  }
  if (plVar3 != (long *)0x0) {
    uVar14 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar3,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar8 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
    if ((int)plVar8 == 0) {
      return plVar8;
    }
    lVar11 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(plVar3,0);
    if (lVar11 != 0) {
      lVar11 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar11,uRam0000000003d534a0);
      if ((lVar11 == 0) ||
         (plVar3 = (long *)func_0x0001c7d0(0,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ uRam0000000003d21fc8,lVar11), plVar3 == (long *)0x0)) {
        return (long *)0x0;
      }
      lVar11 = *plVar3;
      if ((*(byte *)(lVar11 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8)
          != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
        if (*(byte *)(lVar11 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300)) {
          return plVar3;
        }
        if (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300) * 8 +
                     -8) == /*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8) {
                    /* WARNING: Could not recover jumptable at 0x014e4d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar3 = (long *)(**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
          return plVar3;
        }
        return plVar3;
      }
      plVar8 = (long *)(**(code **)(*plVar6 + 0x328))
                                 (plVar6,plVar3,1,*(undefined8 *)(*plVar6 + 0x330));
      if ((int)plVar8 == 0) {
        return plVar8;
      }
      if (plVar6[7] != 0) {
        /*Atlas.Stats.AchievementManager$$OnClamHit*/ func_0x01448380(plVar6[7],*(undefined4 *)((long)plVar6 + 0xec),0);
        Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag(plVar6,1,0);
        uVar12 = (ulong)*(uint *)((long)plVar3 + 0x54);
        *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xa0);
        *(undefined8 *)(puVar2 + -0x98) = *(undefined8 *)(puVar2 + -0x98);
        *(undefined8 *)(puVar2 + -0x90) = *(undefined8 *)(puVar2 + -0x90);
        *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(puVar2 + -0x88);
        *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0x80);
        *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x78);
        if ((bRam0000000003eb4b74 & 1) == 0) {
          func_0x00f78a20(0x3d23990,uVar12,0);
          bRam0000000003eb4b74 = 1;
        }
        lVar11 = plVar6[0x19];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar3 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar11,0,0);
        if (((ulong)plVar3 & 1) != 0) {
          return plVar3;
        }
        lVar5 = plVar6[0x19];
        if (lVar5 != 0) {
          if (*(char *)(lVar5 + 0x44) != '\0') {
            *(ulong *)(lVar5 + 0x48) =
                 uVar12 << ((ulong)*(uint *)((long)plVar6 + 0x19c) & 0x3f) |
                 *(ulong *)(lVar5 + 0x48);
            return plVar3;
          }
          return plVar3;
        }
        lVar5 = func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0xd0) = 0x3d23990;
        *(long *)(puVar2 + -200) = lVar11;
        *(long **)(puVar2 + -0xc0) = plVar6;
        *(ulong *)(puVar2 + -0xb8) = uVar12;
        *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x80;
        *(code **)(puVar2 + -0xa8) =
             Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
        if ((bRam0000000003eb4b75 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b75 = 1;
        }
        uVar14 = *(undefined8 *)(lVar5 + 200);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar11 = 0;
        uVar12 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar14,0);
        if ((uVar12 & 1) != 0) {
          return (long *)0x0;
        }
        lVar10 = *(long *)(lVar5 + 200);
        if (lVar10 != 0) {
          if (*(char *)(lVar10 + 0x44) != '\0') {
            return (long *)0x0;
          }
          return (long *)(ulong)(*(char *)(lVar10 + 0x28) == '\x01');
        }
        plVar6 = (long *)func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x120) = unaff_d11;
        *(undefined8 *)(puVar2 + -0x118) = unaff_d10;
        *(undefined8 *)(puVar2 + -0x110) = unaff_d9;
        *(ulong *)(puVar2 + -0x108) = (ulong)(uint)fVar20;
        *(undefined8 *)(puVar2 + -0x100) = 0x3d23990;
        *(undefined8 *)(puVar2 + -0xf8) = 0x3d23990;
        *(undefined8 *)(puVar2 + -0xf0) = uVar14;
        *(long *)(puVar2 + -0xe8) = lVar5;
        *(undefined1 **)(puVar2 + -0xe0) = puVar2 + -0xb0;
        *(code **)(puVar2 + -0xd8) = Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
        plVar3 = plVar6;
        if ((bRam0000000003eb4b78 & 1) == 0) {
          plVar3 = (long *)func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b78 = 1;
        }
        if (0.0 < *(float *)((long)plVar6 + 0xdc)) {
          return plVar3;
        }
        fVar20 = *(float *)((long)plVar6 + 0xe4);
        fVar24 = *(float *)(plVar6 + 0x1d);
        plVar3 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar6[0x1c],fVar20,fVar24,extraout_s0,param_2,param_3
                                         ,0);
        fVar20 = param_3 * fVar24 + extraout_s0 * extraout_s0_00 + param_2 * fVar20;
        if (fVar20 < 0.0) {
          return plVar3;
        }
        *(float *)(plVar6 + 0x1c) = extraout_s0_00;
        *(undefined4 *)((long)plVar6 + 0xe4) = 0;
        *(float *)(plVar6 + 0x1d) = fVar24;
        /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar6 + 0x1c,0);
        *(undefined4 *)((long)plVar6 + 0xdc) = 0x3d4ccccd;
        if (0.0 < *(float *)(plVar6 + 0x1b)) {
          lVar11 = plVar6[0x1a];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar3 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar11,0);
          if (((ulong)plVar3 & 1) != 0) {
            return plVar3;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar11 = 0;
          plVar3 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
          if (((ulong)plVar3 & 1) != 0) {
            return plVar3;
          }
        }
        *(undefined4 *)(plVar6 + 0x1b) = 0x3e4ccccd;
        uVar9 = *(int *)((long)plVar6 + 0xec) + 1;
        *(uint *)((long)plVar6 + 0xec) = uVar9;
        lVar5 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar6);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x90) < (int)uVar9) {
            (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar11 = 0;
          plVar3 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
          if ((int)plVar3 == 0) {
            return plVar3;
          }
          if (extraout_x1 != 0) {
            plVar3 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
            plVar6[0x1a] = (long)plVar3;
            return plVar3;
          }
        }
        auVar28 = func_0x00f78af4();
        lVar10 = auVar28._8_8_;
        lVar5 = auVar28._0_8_;
        *(undefined8 *)(puVar2 + -400) = unaff_d13;
        *(undefined8 *)(puVar2 + -0x188) = unaff_d12;
        *(undefined8 *)(puVar2 + -0x180) = unaff_d11;
        *(ulong *)(puVar2 + -0x178) = (ulong)(uint)extraout_s0;
        *(ulong *)(puVar2 + -0x170) = (ulong)(uint)param_2;
        *(ulong *)(puVar2 + -0x168) = (ulong)(uint)param_3;
        *(undefined8 *)(puVar2 + -0x160) = unaff_x24;
        *(undefined8 *)(puVar2 + -0x158) = unaff_x23;
        *(undefined8 *)(puVar2 + -0x150) = 0x3d23990;
        *(ulong *)(puVar2 + -0x148) = (ulong)uVar9;
        *(long *)(puVar2 + -0x140) = extraout_x1;
        *(long **)(puVar2 + -0x138) = plVar6;
        *(undefined1 **)(puVar2 + -0x130) = puVar2 + -0xe0;
        *(code **)(puVar2 + -0x128) = Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
        if ((bRam0000000003eb4b79 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b79 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar3 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar10,0,0);
        if (((ulong)plVar3 & 1) != 0) {
          return plVar3;
        }
        if (*(long *)(lVar5 + 0x100) == 0) goto code_r0x014cf9bc;
        uVar21 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar5 + 0x100),0);
        fVar22 = *(float *)(lVar11 + 0xc);
        fVar25 = *(float *)(lVar5 + 0xe0);
        fVar19 = *(float *)(lVar5 + 0x128) * fVar22;
        lVar15 = *(long *)(lVar5 + 0x50);
        fVar23 = fVar22;
        fVar26 = fVar25;
        if (lVar15 != 0) {
          if (*(long *)(lVar5 + 0x100) == 0) goto code_r0x014cf9bc;
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar19,fVar22,fVar25,*(undefined4 *)(lVar5 + 0xe4),
                          *(undefined4 *)(lVar5 + 0xe8),*(long *)(lVar5 + 0x100),0);
          uVar21 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar5,lVar15,0);
          if ((*(long *)(lVar5 + 0x50) == 0) ||
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x50) + 0x10), lVar5 == 0)) goto code_r0x014cf9bc;
          lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar5,0);
          fVar23 = *(float *)(lVar5 + 0x104);
          fVar26 = *(float *)(lVar5 + 0x108);
          fVar19 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x100),fVar23,fVar26,0);
          fVar20 = *(float *)(lVar11 + 8);
          fVar19 = fVar19 * fVar20;
          fVar23 = fVar23 * fVar20;
          fVar26 = fVar26 * fVar20;
          fVar20 = fVar22;
          fVar24 = fVar25;
        }
        if ((lVar10 != 0) && (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar19,fVar23,fVar26,lVar10,0), lVar5 != 0)) {
          *(long *)(puVar2 + -0x1b0) = lVar11;
          *(long *)(puVar2 + -0x1a8) = lVar10;
          *(undefined1 **)(puVar2 + -0x1a0) = puVar2 + -0x130;
          *(undefined **)(puVar2 + -0x198) = &UNK_014cf984;
          *(undefined4 *)(puVar2 + -0x1c0) = uVar21;
          *(float *)(puVar2 + -0x1bc) = fVar20;
          *(float *)(puVar2 + -0x1b8) = fVar24;
          if (pcRam0000000003ec1950 == (code *)0x0) {
            pcRam0000000003ec1950 =
                 (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                         ,0);
          }
          plVar3 = (long *)(*pcRam0000000003ec1950)(lVar5,puVar2 + -0x1c0);
          return plVar3;
        }
code_r0x014cf9bc:
        plVar3 = (long *)func_0x00f78af4();
        return plVar3;
      }
    }
  }
  plVar8 = (long *)func_0x00f78af4();
  puVar1 = puVar2 + -0xc0;
  *(long **)(puVar2 + -0xc0) = plVar3;
  *(long **)(puVar2 + -0xb8) = plVar6;
  *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x80;
  *(undefined **)(puVar2 + -0xa8) = &Atlas_Gameplay_Usables_RicochetProjectile__Destroy;
  if (plVar8[9] != 0) {
    lVar11 = plVar8[0x37];
    uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar8[9],0);
    plVar3 = (long *)0x0;
    if (lVar11 != 0) {
      uVar9 = 0;
      /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(lVar11,uVar7);
      uVar7 = *(undefined8 *)(puVar2 + -0xc0);
      *(undefined8 *)(puVar2 + -0xc0) = uVar7;
      *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0xb8);
      *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xb0);
      *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xa8);
      puVar16 = puVar2 + -0xb0;
      plVar3 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar8,0);
      if (((ulong)plVar3 & 1) != 0) {
LAB_014ceb18:
        if ((char)plVar8[0xc] == '\0') {
          *(undefined1 *)(plVar8 + 0xc) = 1;
          *(undefined1 *)((long)plVar8 + 0x61) = 1;
          return plVar8;
        }
        return plVar3;
      }
      plVar3 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar8,0);
      if ((plVar3 == (long *)0x0) || (plVar3[0x18] == 0)) {
        pcVar17 = Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
        auVar29 = func_0x00f78af4();
      }
      else {
        if (*(char *)(plVar3[0x18] + 0x50) != '\0') goto LAB_014ceb18;
        auVar29._8_4_ = 1;
        auVar29._0_8_ = plVar8;
        uVar9 = 1;
        puVar16 = *(undefined1 **)(puVar2 + -0xb0);
        pcVar17 = *(code **)(puVar2 + -0xa8);
        puVar1 = puVar2 + -0xa0;
        uVar7 = *(undefined8 *)(puVar2 + -0xc0);
        plVar8 = *(long **)(puVar2 + -0xb8);
      }
      plVar3 = auVar29._0_8_;
      *(undefined8 *)(puVar1 + -0x20) = uVar7;
      *(long **)(puVar1 + -0x18) = plVar8;
      *(undefined1 **)(puVar1 + -0x10) = puVar16;
      *(code **)(puVar1 + -8) = pcVar17;
      if ((*(char *)((long)plVar3 + 300) != '\0') == uVar9) {
        return plVar3;
      }
      if (auVar29._8_4_ != 0) {
        (**(code **)(*plVar3 + 0x448))(plVar3,*(undefined8 *)(*plVar3 + 0x450));
      }
      *(char *)((long)plVar3 + 300) = (char)uVar9;
      if (((plVar3[9] == 0) || (lVar11 = *(long *)(plVar3[9] + 0x28), lVar11 == 0)) ||
         (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar11,0), lVar11 == 0)) {
        plVar3 = (long *)func_0x00f78af4();
        return plVar3;
      }
      uVar9 = uVar9 ^ 1;
      puVar16 = *(undefined1 **)(puVar1 + -0x10);
      puVar18 = *(undefined **)(puVar1 + -8);
      unaff_x20 = *(long *)(puVar1 + -0x20);
      uVar7 = *(undefined8 *)(puVar1 + -0x18);
      goto code_r0x0322ef1c;
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  *(long **)(puVar2 + -0xe0) = plVar3;
  *(long **)(puVar2 + -0xd8) = plVar8;
  *(undefined1 **)(puVar2 + -0xd0) = puVar2 + -0xb0;
  *(undefined **)(puVar2 + -200) = &Atlas_Gameplay_Usables_RicochetProjectile__CollideWithFloor;
  plVar3 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar6,0);
  if (((ulong)plVar3 & 1) == 0) {
    Atlas_Gameplay_Usables_ProjectileUsable__SetForceToFloorNetworkFlag(plVar6,1,0);
    Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(plVar6,0,0);
                    /* WARNING: Could not recover jumptable at 0x014e4e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar3 = (long *)(**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400));
    return plVar3;
  }
  return plVar3;
}



// ============================================================
// RVA: 0x14e4a38 | Atlas.Gameplay.Usables.RicochetProjectile.InUseVisuals
// ============================================================

/* WARNING: Possible PIC construction at 0x014e4b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e4b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01526ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */
/* WARNING: Removing unreachable block (ram,0x014e4b7c) */
/* WARNING: Removing unreachable block (ram,0x014e4b94) */
/* WARNING: Removing unreachable block (ram,0x014e4b84) */
/* WARNING: Removing unreachable block (ram,0x0152fe60) */
/* WARNING: Removing unreachable block (ram,0x0152fe7c) */
/* WARNING: Removing unreachable block (ram,0x0152fe90) */
/* WARNING: Removing unreachable block (ram,0x0152fe98) */
/* WARNING: Removing unreachable block (ram,0x0152fec4) */
/* WARNING: Removing unreachable block (ram,0x0152fea0) */
/* WARNING: Removing unreachable block (ram,0x01638d80) */
/* WARNING: Removing unreachable block (ram,0x014e4b5c) */
/* WARNING: Removing unreachable block (ram,0x014e4b68) */
/* WARNING: Removing unreachable block (ram,0x014e4b70) */
/* WARNING: Removing unreachable block (ram,0x01526ff8) */
/* WARNING: Removing unreachable block (ram,0x032754b4) */
/* WARNING: Removing unreachable block (ram,0x032754dc) */
/* WARNING: Removing unreachable block (ram,0x032754f0) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Gameplay_Usables_RicochetProjectile__InUseVisuals
                 (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 ******ppppppuVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *****pppppuVar6;
  undefined8 ******ppppppuVar7;
  long *plVar8;
  long extraout_x1;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 ******ppppppuVar15;
  long unaff_x20;
  undefined8 ****ppppuVar16;
  undefined8 unaff_x21;
  long lVar17;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar18;
  code *pcVar19;
  undefined *puVar20;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined4 uStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined *puStack_198;
  undefined8 *******pppppppuStack_130;
  code *pcStack_128;
  undefined8 *******pppppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined8 *****pppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  code *pcStack_a8;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour();
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x28) != 0)) {
    unaff_x20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x28),0);
    lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetProjectileDefinition(param_4);
    if ((lVar3 != 0) && (unaff_x20 != 0)) {
      /*UnityEngine.Quaternion$$Euler*/ func_0x0325213c(0,0,1,0);
      /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c();
      /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251e58(0);
      if (pcRam0000000003ec1998 == (code *)0x0) {
        pcRam0000000003ec1998 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)"
                                    );
      }
      plVar8 = (long *)(*pcRam0000000003ec1998)(unaff_x20,&stack0xffffffffffffffd0);
      return plVar8;
    }
  }
  auVar29 = func_0x00f78af4();
  plVar8 = auVar29._0_8_;
  plVar4 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate(plVar8,auVar29._8_8_,0);
  if (plVar8[0x19] != 0) {
    if ((*(char *)(plVar8[0x19] + 0x44) == '\0') &&
       (plVar4 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag
                                   (plVar8,0), (int)plVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x014e4b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar8 = (long *)(**(code **)(*plVar8 + 0x428))
                                 (*(undefined4 *)((long)plVar8 + 0x1a4),plVar8,
                                  *(undefined8 *)(*plVar8 + 0x430));
      return plVar8;
    }
    return plVar4;
  }
  uVar5 = func_0x00f78af4();
  ppppppuVar2 = (undefined8 ******)&lStack_70;
  ppppppuVar15 = (undefined8 ******)&stack0xffffffffffffffa0;
  lStack_70 = unaff_x20;
  plStack_68 = plVar8;
  Atlas_Gameplay_Usables_ProjectileUsable__Use(uVar5,0);
  Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(uVar5,1,0);
  lVar3 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(uVar5);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x70), lVar3 != 0)) {
    uVar11 = 0;
    puVar20 = &UNK_014e4b5c;
code_r0x0322ef1c:
    *(undefined8 *)((long)ppppppuVar2 + -0x30) = unaff_x22;
    *(undefined8 *)((long)ppppppuVar2 + -0x28) = unaff_x21;
    *(long *)((long)ppppppuVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppppppuVar2 + -0x18) = uVar5;
    *(undefined8 *******)((long)ppppppuVar2 + -0x10) = ppppppuVar15;
    *(undefined **)((long)ppppppuVar2 + -8) = puVar20;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar8 = (long *)(*pcRam0000000003ebf4c0)(lVar3,uVar11);
    return plVar8;
  }
  auVar29 = func_0x00f78af4();
  ppppppuVar7 = auVar29._8_8_;
  pppppuVar6 = auVar29._0_8_;
  puStack_78 = &Atlas_Gameplay_Usables_RicochetProjectile__OnTriggerEnter;
  unaff_x21 = 0x3eb4000;
  ppppppuStack_80 = ppppppuVar15;
  if ((bRam0000000003eb4bff & 1) == 0) {
    func_0x00f78a20(0x3d207e8);
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bff = 1;
  }
  plVar8 = (long *)Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(pppppuVar6,ppppppuVar7,0)
  ;
  if (*(char *)(pppppuVar6 + 0xc) != '\0') {
    return plVar8;
  }
  if (*(char *)((long)pppppuVar6 + 300) != '\0') {
    return plVar8;
  }
  plVar8 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(pppppuVar6,0);
  if (((ulong)plVar8 & 1) != 0) {
    return plVar8;
  }
  if (ppppppuVar7 != (undefined8 ******)0x0) {
    unaff_x21 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(ppppppuVar7,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar8 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
    if ((int)plVar8 == 0) {
      return plVar8;
    }
    lVar3 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(ppppppuVar7,0);
    if (lVar3 != 0) {
      lVar3 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar3,uRam0000000003d534a0);
      if ((lVar3 == 0) ||
         (ppppppuVar7 = (undefined8 ******)func_0x0001c7d0(0,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ uRam0000000003d21fc8,lVar3),
         ppppppuVar7 == (undefined8 ******)0x0)) {
        return (long *)0x0;
      }
      pppppuVar14 = *ppppppuVar7;
      if ((*(byte *)((long)pppppuVar14 + 300) < *(byte *)((long)/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ pppuRam0000000003d22c78 + 300)) ||
         (pppppuVar14[0x19][(ulong)*(byte *)((long)/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ pppuRam0000000003d22c78 + 300) - 1] !=
          /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ pppuRam0000000003d22c78)) {
        if (*(byte *)((long)pppppuVar14 + 300) < *(byte *)((long)/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ pppuRam0000000003d207e8 + 300)) {
          return (long *)ppppppuVar7;
        }
        if (pppppuVar14[0x19][(ulong)*(byte *)((long)/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ pppuRam0000000003d207e8 + 300) - 1] ==
            /*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ pppuRam0000000003d207e8) {
                    /* WARNING: Could not recover jumptable at 0x014e4d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar8 = (long *)(*(code *)(*pppppuVar6)[0x45])(pppppuVar6,(*pppppuVar6)[0x46]);
          return plVar8;
        }
        return (long *)ppppppuVar7;
      }
      plVar8 = (long *)(*(code *)(*pppppuVar6)[0x65])(pppppuVar6,ppppppuVar7,1,(*pppppuVar6)[0x66]);
      if ((int)plVar8 == 0) {
        return plVar8;
      }
      if (pppppuVar6[7] != (undefined8 ****)0x0) {
        /*Atlas.Stats.AchievementManager$$OnClamHit*/ func_0x01448380(pppppuVar6[7],*(undefined4 *)((long)pppppuVar6 + 0xec),0);
        Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag(pppppuVar6,1,0);
        uVar10 = (ulong)*(uint *)((long)ppppppuVar7 + 0x54);
        if ((bRam0000000003eb4b74 & 1) == 0) {
          func_0x00f78a20(0x3d23990,uVar10,0);
          bRam0000000003eb4b74 = 1;
        }
        ppppuVar16 = pppppuVar6[0x19];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(ppppuVar16,0,0);
        if (((ulong)plVar8 & 1) != 0) {
          return plVar8;
        }
        ppppuVar13 = pppppuVar6[0x19];
        if (ppppuVar13 != (undefined8 ****)0x0) {
          if (*(char *)((long)ppppuVar13 + 0x44) != '\0') {
            ppppuVar13[9] =
                 (undefined8 ***)
                 (uVar10 << ((ulong)*(uint *)((long)pppppuVar6 + 0x19c) & 0x3f) |
                 (ulong)ppppuVar13[9]);
            return plVar8;
          }
          return plVar8;
        }
        lVar3 = func_0x00f78af4();
        pppppppuStack_d0 = (undefined8 *******)0x3d23990;
        pcStack_a8 = Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
        ppppuStack_c8 = ppppuVar16;
        ppppppuStack_c0 = (undefined8 ******)pppppuVar6;
        pppppuStack_b8 = (undefined8 *****)uVar10;
        pppppppuStack_b0 = &ppppppuStack_80;
        if ((bRam0000000003eb4b75 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b75 = 1;
        }
        uVar5 = *(undefined8 *)(lVar3 + 200);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar12 = 0;
        uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0);
        if ((uVar10 & 1) != 0) {
          return (long *)0x0;
        }
        lVar3 = *(long *)(lVar3 + 200);
        if (lVar3 != 0) {
          if (*(char *)(lVar3 + 0x44) != '\0') {
            return (long *)0x0;
          }
          return (long *)(ulong)(*(char *)(lVar3 + 0x28) == '\x01');
        }
        plVar4 = (long *)func_0x00f78af4();
        pppppuStack_d8 = (undefined8 *****)Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
        plVar8 = plVar4;
        pppppppuStack_e0 = &pppppppuStack_b0;
        if ((bRam0000000003eb4b78 & 1) == 0) {
          plVar8 = (long *)func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b78 = 1;
        }
        if (0.0 < *(float *)((long)plVar4 + 0xdc)) {
          return plVar8;
        }
        fVar23 = *(float *)((long)plVar4 + 0xe4);
        fVar26 = *(float *)(plVar4 + 0x1d);
        plVar8 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar4[0x1c],fVar23,fVar26,extraout_s0,param_2,param_3
                                         ,0);
        fVar23 = param_3 * fVar26 + extraout_s0 * extraout_s0_00 + param_2 * fVar23;
        if (fVar23 < 0.0) {
          return plVar8;
        }
        *(float *)(plVar4 + 0x1c) = extraout_s0_00;
        *(undefined4 *)((long)plVar4 + 0xe4) = 0;
        *(float *)(plVar4 + 0x1d) = fVar26;
        /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar4 + 0x1c,0);
        *(undefined4 *)((long)plVar4 + 0xdc) = 0x3d4ccccd;
        if (0.0 < *(float *)(plVar4 + 0x1b)) {
          lVar3 = plVar4[0x1a];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar3,0);
          if (((ulong)plVar8 & 1) != 0) {
            return plVar8;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar12 = 0;
          plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
          if (((ulong)plVar8 & 1) != 0) {
            return plVar8;
          }
        }
        *(undefined4 *)(plVar4 + 0x1b) = 0x3e4ccccd;
        iVar1 = *(int *)((long)plVar4 + 0xec) + 1;
        *(int *)((long)plVar4 + 0xec) = iVar1;
        lVar3 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar4);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x90) < iVar1) {
            (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar12 = 0;
          plVar8 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
          if ((int)plVar8 == 0) {
            return plVar8;
          }
          if (extraout_x1 != 0) {
            plVar8 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
            plVar4[0x1a] = (long)plVar8;
            return plVar8;
          }
        }
        auVar29 = func_0x00f78af4();
        lVar9 = auVar29._8_8_;
        lVar3 = auVar29._0_8_;
        pcStack_128 = Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
        pppppppuStack_130 = &pppppppuStack_e0;
        if ((bRam0000000003eb4b79 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b79 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar8 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar9,0,0);
        if (((ulong)plVar8 & 1) != 0) {
          return plVar8;
        }
        if (*(long *)(lVar3 + 0x100) == 0) goto code_r0x014cf9bc;
        uVar21 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar3 + 0x100),0);
        fVar24 = *(float *)(lVar12 + 0xc);
        fVar27 = *(float *)(lVar3 + 0xe0);
        fVar22 = *(float *)(lVar3 + 0x128) * fVar24;
        lVar17 = *(long *)(lVar3 + 0x50);
        fVar25 = fVar24;
        fVar28 = fVar27;
        fStack_1bc = fVar23;
        fStack_1b8 = fVar26;
        if (lVar17 != 0) {
          if (*(long *)(lVar3 + 0x100) == 0) goto code_r0x014cf9bc;
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar22,fVar24,fVar27,*(undefined4 *)(lVar3 + 0xe4),
                          *(undefined4 *)(lVar3 + 0xe8),*(long *)(lVar3 + 0x100),0);
          uVar21 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar3,lVar17,0);
          if ((*(long *)(lVar3 + 0x50) == 0) ||
             (lVar3 = *(long *)(*(long *)(lVar3 + 0x50) + 0x10), lVar3 == 0)) goto code_r0x014cf9bc;
          lVar3 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar3,0);
          fVar25 = *(float *)(lVar3 + 0x104);
          fVar28 = *(float *)(lVar3 + 0x108);
          fVar22 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar3 + 0x100),fVar25,fVar28,0);
          fVar23 = *(float *)(lVar12 + 8);
          fVar22 = fVar22 * fVar23;
          fVar25 = fVar25 * fVar23;
          fVar28 = fVar28 * fVar23;
          fStack_1bc = fVar24;
          fStack_1b8 = fVar27;
        }
        if ((lVar9 != 0) && (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar22,fVar25,fVar28,lVar9,0), lVar3 != 0)) {
          puStack_198 = &UNK_014cf984;
          uStack_1c0 = uVar21;
          lStack_1b0 = lVar12;
          lStack_1a8 = lVar9;
          pppppppuStack_1a0 = &pppppppuStack_130;
          if (pcRam0000000003ec1950 == (code *)0x0) {
            pcRam0000000003ec1950 =
                 (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                         ,0);
          }
          plVar8 = (long *)(*pcRam0000000003ec1950)(lVar3,&uStack_1c0);
          return plVar8;
        }
code_r0x014cf9bc:
        plVar8 = (long *)func_0x00f78af4();
        return plVar8;
      }
    }
  }
  pppppuVar14 = (undefined8 *****)func_0x00f78af4();
  ppppppuVar2 = &ppppppuStack_c0;
  pcStack_a8 = (code *)&Atlas_Gameplay_Usables_RicochetProjectile__Destroy;
  ppppppuStack_c0 = ppppppuVar7;
  pppppuStack_b8 = pppppuVar6;
  pppppppuStack_b0 = &ppppppuStack_80;
  if (pppppuVar14[9] != (undefined8 ****)0x0) {
    ppppuVar16 = pppppuVar14[0x37];
    uVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(pppppuVar14[9],0);
    ppppppuVar7 = (undefined8 ******)0x0;
    if (ppppuVar16 != (undefined8 ****)0x0) {
      uVar11 = 0;
      /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(ppppuVar16,uVar5);
      ppppppuVar15 = ppppppuStack_c0;
      pppppppuVar18 = &pppppppuStack_b0;
      plVar8 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(pppppuVar14,0);
      if (((ulong)plVar8 & 1) != 0) {
LAB_014ceb18:
        if (*(char *)(pppppuVar14 + 0xc) == '\0') {
          *(undefined1 *)(pppppuVar14 + 0xc) = 1;
          *(undefined1 *)((long)pppppuVar14 + 0x61) = 1;
          return (long *)pppppuVar14;
        }
        return plVar8;
      }
      plVar8 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(pppppuVar14,0);
      if ((plVar8 == (long *)0x0) || (plVar8[0x18] == 0)) {
        pcVar19 = Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
        auVar30 = func_0x00f78af4();
      }
      else {
        if (*(char *)(plVar8[0x18] + 0x50) != '\0') goto LAB_014ceb18;
        auVar30._8_4_ = 1;
        auVar30._0_8_ = pppppuVar14;
        uVar11 = 1;
        ppppppuVar2 = (undefined8 ******)&stack0xffffffffffffff60;
        pppppuVar14 = pppppuStack_b8;
        ppppppuVar15 = ppppppuStack_c0;
        pppppppuVar18 = pppppppuStack_b0;
        pcVar19 = pcStack_a8;
      }
      plVar8 = auVar30._0_8_;
      *(undefined8 *******)((long)ppppppuVar2 + -0x20) = ppppppuVar15;
      *(undefined8 ******)((long)ppppppuVar2 + -0x18) = pppppuVar14;
      *(undefined8 ********)((long)ppppppuVar2 + -0x10) = pppppppuVar18;
      *(code **)((long)ppppppuVar2 + -8) = pcVar19;
      if ((*(char *)((long)plVar8 + 300) != '\0') == uVar11) {
        return plVar8;
      }
      if (auVar30._8_4_ != 0) {
        (**(code **)(*plVar8 + 0x448))(plVar8,*(undefined8 *)(*plVar8 + 0x450));
      }
      *(char *)((long)plVar8 + 300) = (char)uVar11;
      if (((plVar8[9] == 0) || (lVar3 = *(long *)(plVar8[9] + 0x28), lVar3 == 0)) ||
         (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0), lVar3 == 0)) {
        plVar8 = (long *)func_0x00f78af4();
        return plVar8;
      }
      uVar11 = uVar11 ^ 1;
      ppppppuVar15 = *(undefined8 *******)((long)ppppppuVar2 + -0x10);
      puVar20 = *(undefined **)((long)ppppppuVar2 + -8);
      unaff_x20 = *(long *)((long)ppppppuVar2 + -0x20);
      uVar5 = *(undefined8 *)((long)ppppppuVar2 + -0x18);
      goto code_r0x0322ef1c;
    }
  }
  plVar8 = (long *)func_0x00f78af4();
  ppppuStack_c8 = (undefined8 ****)&Atlas_Gameplay_Usables_RicochetProjectile__CollideWithFloor;
  pppppppuStack_e0 = (undefined8 *******)ppppppuVar7;
  pppppuStack_d8 = pppppuVar14;
  pppppppuStack_d0 = &pppppppuStack_b0;
  plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar8,0);
  if (((ulong)plVar4 & 1) == 0) {
    Atlas_Gameplay_Usables_ProjectileUsable__SetForceToFloorNetworkFlag(plVar8,1,0);
    Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(plVar8,0,0);
                    /* WARNING: Could not recover jumptable at 0x014e4e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar8 = (long *)(**(code **)(*plVar8 + 0x3f8))(plVar8,*(undefined8 *)(*plVar8 + 0x400));
    return plVar8;
  }
  return plVar4;
}



// ============================================================
// RVA: 0x14e4aac | Atlas.Gameplay.Usables.RicochetProjectile.EarlyUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014e4b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e4b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e4b7c) */
/* WARNING: Removing unreachable block (ram,0x014e4b94) */
/* WARNING: Removing unreachable block (ram,0x014e4b84) */
/* WARNING: Removing unreachable block (ram,0x0152fe60) */
/* WARNING: Removing unreachable block (ram,0x0152fe7c) */
/* WARNING: Removing unreachable block (ram,0x0152fe90) */
/* WARNING: Removing unreachable block (ram,0x0152fe98) */
/* WARNING: Removing unreachable block (ram,0x0152fec4) */
/* WARNING: Removing unreachable block (ram,0x0152fea0) */
/* WARNING: Removing unreachable block (ram,0x01638d80) */
/* WARNING: Removing unreachable block (ram,0x014e4b5c) */
/* WARNING: Removing unreachable block (ram,0x014e4b68) */
/* WARNING: Removing unreachable block (ram,0x014e4b70) */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Gameplay_Usables_RicochetProjectile__EarlyUpdate
                 (undefined1 param_1 [16],float param_2,float param_3,long *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 ******ppppppuVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *****pppppuVar7;
  undefined8 ******ppppppuVar8;
  long extraout_x1;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 ******ppppppuVar15;
  undefined8 unaff_x20;
  undefined8 ****ppppuVar16;
  undefined8 unaff_x21;
  long lVar17;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar18;
  code *pcVar19;
  undefined *puVar20;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined4 uStack_190;
  float fStack_18c;
  float fStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 *******pppppppuStack_170;
  undefined *puStack_168;
  undefined8 *******pppppppuStack_100;
  code *pcStack_f8;
  undefined8 *******pppppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 *****pppppuStack_88;
  undefined8 *******pppppppuStack_80;
  code *pcStack_78;
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  undefined8 *****pppppuStack_30;
  undefined *puStack_28;
  
  plVar4 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__EarlyUpdate(param_4,param_5,0);
  if (param_4[0x19] != 0) {
    if ((*(char *)(param_4[0x19] + 0x44) == '\0') &&
       (plVar4 = (long *)Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag
                                   (param_4,0), (int)plVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x014e4b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar4 = (long *)(**(code **)(*param_4 + 0x428))
                                 (*(undefined4 *)((long)param_4 + 0x1a4),param_4,
                                  *(undefined8 *)(*param_4 + 0x430));
      return plVar4;
    }
    return plVar4;
  }
  uVar5 = func_0x00f78af4();
  ppppppuVar2 = (undefined8 ******)&stack0xffffffffffffffc0;
  puStack_28 = &Atlas_Gameplay_Usables_RicochetProjectile__Use;
  ppppppuVar15 = &pppppuStack_30;
  pppppuStack_30 = (undefined8 *****)&stack0xfffffffffffffff0;
  Atlas_Gameplay_Usables_ProjectileUsable__Use(uVar5,0);
  Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(uVar5,1,0);
  lVar6 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(uVar5);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x70), lVar6 != 0)) {
    uVar11 = 0;
    puVar20 = &UNK_014e4b5c;
code_r0x0322ef1c:
    *(undefined8 *)((long)ppppppuVar2 + -0x30) = unaff_x22;
    *(undefined8 *)((long)ppppppuVar2 + -0x28) = unaff_x21;
    *(undefined8 *)((long)ppppppuVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppppppuVar2 + -0x18) = uVar5;
    *(undefined8 *******)((long)ppppppuVar2 + -0x10) = ppppppuVar15;
    *(undefined **)((long)ppppppuVar2 + -8) = puVar20;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar4 = (long *)(*pcRam0000000003ebf4c0)(lVar6,uVar11);
    return plVar4;
  }
  auVar29 = func_0x00f78af4();
  ppppppuVar8 = auVar29._8_8_;
  pppppuVar7 = auVar29._0_8_;
  puStack_48 = &Atlas_Gameplay_Usables_RicochetProjectile__OnTriggerEnter;
  unaff_x21 = 0x3eb4000;
  ppppppuStack_50 = ppppppuVar15;
  if ((bRam0000000003eb4bff & 1) == 0) {
    func_0x00f78a20(0x3d207e8);
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bff = 1;
  }
  plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(pppppuVar7,ppppppuVar8,0)
  ;
  if (*(char *)(pppppuVar7 + 0xc) != '\0') {
    return plVar4;
  }
  if (*(char *)((long)pppppuVar7 + 300) != '\0') {
    return plVar4;
  }
  plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(pppppuVar7,0);
  if (((ulong)plVar4 & 1) != 0) {
    return plVar4;
  }
  if (ppppppuVar8 != (undefined8 ******)0x0) {
    unaff_x21 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(ppppppuVar8,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar4 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
    if ((int)plVar4 == 0) {
      return plVar4;
    }
    lVar6 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(ppppppuVar8,0);
    if (lVar6 != 0) {
      lVar6 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar6,uRam0000000003d534a0);
      if ((lVar6 == 0) ||
         (ppppppuVar8 = (undefined8 ******)func_0x0001c7d0(0,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ uRam0000000003d21fc8,lVar6),
         ppppppuVar8 == (undefined8 ******)0x0)) {
        return (long *)0x0;
      }
      pppppuVar14 = *ppppppuVar8;
      if ((*(byte *)((long)pppppuVar14 + 300) < *(byte *)((long)/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ pppuRam0000000003d22c78 + 300)) ||
         (pppppuVar14[0x19][(ulong)*(byte *)((long)/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ pppuRam0000000003d22c78 + 300) - 1] !=
          /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ pppuRam0000000003d22c78)) {
        if (*(byte *)((long)pppppuVar14 + 300) < *(byte *)((long)/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ pppuRam0000000003d207e8 + 300)) {
          return (long *)ppppppuVar8;
        }
        if (pppppuVar14[0x19][(ulong)*(byte *)((long)/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ pppuRam0000000003d207e8 + 300) - 1] ==
            /*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ pppuRam0000000003d207e8) {
                    /* WARNING: Could not recover jumptable at 0x014e4d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar4 = (long *)(*(code *)(*pppppuVar7)[0x45])(pppppuVar7,(*pppppuVar7)[0x46]);
          return plVar4;
        }
        return (long *)ppppppuVar8;
      }
      plVar4 = (long *)(*(code *)(*pppppuVar7)[0x65])(pppppuVar7,ppppppuVar8,1,(*pppppuVar7)[0x66]);
      if ((int)plVar4 == 0) {
        return plVar4;
      }
      if (pppppuVar7[7] != (undefined8 ****)0x0) {
        /*Atlas.Stats.AchievementManager$$OnClamHit*/ func_0x01448380(pppppuVar7[7],*(undefined4 *)((long)pppppuVar7 + 0xec),0);
        Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag(pppppuVar7,1,0);
        uVar10 = (ulong)*(uint *)((long)ppppppuVar8 + 0x54);
        if ((bRam0000000003eb4b74 & 1) == 0) {
          func_0x00f78a20(0x3d23990,uVar10,0);
          bRam0000000003eb4b74 = 1;
        }
        ppppuVar16 = pppppuVar7[0x19];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(ppppuVar16,0,0);
        if (((ulong)plVar4 & 1) != 0) {
          return plVar4;
        }
        ppppuVar13 = pppppuVar7[0x19];
        if (ppppuVar13 != (undefined8 ****)0x0) {
          if (*(char *)((long)ppppuVar13 + 0x44) != '\0') {
            ppppuVar13[9] =
                 (undefined8 ***)
                 (uVar10 << ((ulong)*(uint *)((long)pppppuVar7 + 0x19c) & 0x3f) |
                 (ulong)ppppuVar13[9]);
            return plVar4;
          }
          return plVar4;
        }
        lVar6 = func_0x00f78af4();
        pppppppuStack_a0 = (undefined8 *******)0x3d23990;
        pcStack_78 = Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
        ppppuStack_98 = ppppuVar16;
        ppppppuStack_90 = (undefined8 ******)pppppuVar7;
        pppppuStack_88 = (undefined8 *****)uVar10;
        pppppppuStack_80 = &ppppppuStack_50;
        if ((bRam0000000003eb4b75 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b75 = 1;
        }
        uVar5 = *(undefined8 *)(lVar6 + 200);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar12 = 0;
        uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0);
        if ((uVar10 & 1) != 0) {
          return (long *)0x0;
        }
        lVar6 = *(long *)(lVar6 + 200);
        if (lVar6 != 0) {
          if (*(char *)(lVar6 + 0x44) != '\0') {
            return (long *)0x0;
          }
          return (long *)(ulong)(*(char *)(lVar6 + 0x28) == '\x01');
        }
        plVar3 = (long *)func_0x00f78af4();
        pppppuStack_a8 = (undefined8 *****)Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
        plVar4 = plVar3;
        pppppppuStack_b0 = &pppppppuStack_80;
        if ((bRam0000000003eb4b78 & 1) == 0) {
          plVar4 = (long *)func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b78 = 1;
        }
        if (0.0 < *(float *)((long)plVar3 + 0xdc)) {
          return plVar4;
        }
        fVar23 = *(float *)((long)plVar3 + 0xe4);
        fVar26 = *(float *)(plVar3 + 0x1d);
        plVar4 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar3[0x1c],fVar23,fVar26,extraout_s0,param_2,param_3
                                         ,0);
        fVar23 = param_3 * fVar26 + extraout_s0 * extraout_s0_00 + param_2 * fVar23;
        if (fVar23 < 0.0) {
          return plVar4;
        }
        *(float *)(plVar3 + 0x1c) = extraout_s0_00;
        *(undefined4 *)((long)plVar3 + 0xe4) = 0;
        *(float *)(plVar3 + 0x1d) = fVar26;
        /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar3 + 0x1c,0);
        *(undefined4 *)((long)plVar3 + 0xdc) = 0x3d4ccccd;
        if (0.0 < *(float *)(plVar3 + 0x1b)) {
          lVar6 = plVar3[0x1a];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar6,0);
          if (((ulong)plVar4 & 1) != 0) {
            return plVar4;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar12 = 0;
          plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
          if (((ulong)plVar4 & 1) != 0) {
            return plVar4;
          }
        }
        *(undefined4 *)(plVar3 + 0x1b) = 0x3e4ccccd;
        iVar1 = *(int *)((long)plVar3 + 0xec) + 1;
        *(int *)((long)plVar3 + 0xec) = iVar1;
        lVar6 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar3);
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x90) < iVar1) {
            (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar12 = 0;
          plVar4 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
          if ((int)plVar4 == 0) {
            return plVar4;
          }
          if (extraout_x1 != 0) {
            plVar4 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
            plVar3[0x1a] = (long)plVar4;
            return plVar4;
          }
        }
        auVar29 = func_0x00f78af4();
        lVar9 = auVar29._8_8_;
        lVar6 = auVar29._0_8_;
        pcStack_f8 = Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
        pppppppuStack_100 = &pppppppuStack_b0;
        if ((bRam0000000003eb4b79 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b79 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar9,0,0);
        if (((ulong)plVar4 & 1) != 0) {
          return plVar4;
        }
        if (*(long *)(lVar6 + 0x100) == 0) goto code_r0x014cf9bc;
        uVar21 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar6 + 0x100),0);
        fVar24 = *(float *)(lVar12 + 0xc);
        fVar27 = *(float *)(lVar6 + 0xe0);
        fVar22 = *(float *)(lVar6 + 0x128) * fVar24;
        lVar17 = *(long *)(lVar6 + 0x50);
        fVar25 = fVar24;
        fVar28 = fVar27;
        fStack_18c = fVar23;
        fStack_188 = fVar26;
        if (lVar17 != 0) {
          if (*(long *)(lVar6 + 0x100) == 0) goto code_r0x014cf9bc;
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar22,fVar24,fVar27,*(undefined4 *)(lVar6 + 0xe4),
                          *(undefined4 *)(lVar6 + 0xe8),*(long *)(lVar6 + 0x100),0);
          uVar21 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar6,lVar17,0);
          if ((*(long *)(lVar6 + 0x50) == 0) ||
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x50) + 0x10), lVar6 == 0)) goto code_r0x014cf9bc;
          lVar6 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar6,0);
          fVar25 = *(float *)(lVar6 + 0x104);
          fVar28 = *(float *)(lVar6 + 0x108);
          fVar22 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar6 + 0x100),fVar25,fVar28,0);
          fVar23 = *(float *)(lVar12 + 8);
          fVar22 = fVar22 * fVar23;
          fVar25 = fVar25 * fVar23;
          fVar28 = fVar28 * fVar23;
          fStack_18c = fVar24;
          fStack_188 = fVar27;
        }
        if ((lVar9 != 0) && (lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar22,fVar25,fVar28,lVar9,0), lVar6 != 0)) {
          puStack_168 = &UNK_014cf984;
          uStack_190 = uVar21;
          lStack_180 = lVar12;
          lStack_178 = lVar9;
          pppppppuStack_170 = &pppppppuStack_100;
          if (pcRam0000000003ec1950 == (code *)0x0) {
            pcRam0000000003ec1950 =
                 (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                         ,0);
          }
          plVar4 = (long *)(*pcRam0000000003ec1950)(lVar6,&uStack_190);
          return plVar4;
        }
code_r0x014cf9bc:
        plVar4 = (long *)func_0x00f78af4();
        return plVar4;
      }
    }
  }
  pppppuVar14 = (undefined8 *****)func_0x00f78af4();
  ppppppuVar2 = &ppppppuStack_90;
  pcStack_78 = (code *)&Atlas_Gameplay_Usables_RicochetProjectile__Destroy;
  ppppppuStack_90 = ppppppuVar8;
  pppppuStack_88 = pppppuVar7;
  pppppppuStack_80 = &ppppppuStack_50;
  if (pppppuVar14[9] != (undefined8 ****)0x0) {
    ppppuVar16 = pppppuVar14[0x37];
    uVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(pppppuVar14[9],0);
    ppppppuVar8 = (undefined8 ******)0x0;
    if (ppppuVar16 != (undefined8 ****)0x0) {
      uVar11 = 0;
      /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(ppppuVar16,uVar5);
      ppppppuVar15 = ppppppuStack_90;
      pppppppuVar18 = &pppppppuStack_80;
      plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(pppppuVar14,0);
      if (((ulong)plVar4 & 1) != 0) {
LAB_014ceb18:
        if (*(char *)(pppppuVar14 + 0xc) != '\0') {
          return plVar4;
        }
        *(undefined1 *)(pppppuVar14 + 0xc) = 1;
        *(undefined1 *)((long)pppppuVar14 + 0x61) = 1;
        return (long *)pppppuVar14;
      }
      plVar4 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(pppppuVar14,0);
      if ((plVar4 == (long *)0x0) || (plVar4[0x18] == 0)) {
        pcVar19 = Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
        auVar30 = func_0x00f78af4();
      }
      else {
        if (*(char *)(plVar4[0x18] + 0x50) != '\0') goto LAB_014ceb18;
        auVar30._8_4_ = 1;
        auVar30._0_8_ = pppppuVar14;
        uVar11 = 1;
        ppppppuVar2 = (undefined8 ******)&stack0xffffffffffffff90;
        pppppuVar14 = pppppuStack_88;
        ppppppuVar15 = ppppppuStack_90;
        pppppppuVar18 = pppppppuStack_80;
        pcVar19 = pcStack_78;
      }
      plVar4 = auVar30._0_8_;
      *(undefined8 *******)((long)ppppppuVar2 + -0x20) = ppppppuVar15;
      *(undefined8 ******)((long)ppppppuVar2 + -0x18) = pppppuVar14;
      *(undefined8 ********)((long)ppppppuVar2 + -0x10) = pppppppuVar18;
      *(code **)((long)ppppppuVar2 + -8) = pcVar19;
      if ((*(char *)((long)plVar4 + 300) != '\0') == uVar11) {
        return plVar4;
      }
      if (auVar30._8_4_ != 0) {
        (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
      }
      *(char *)((long)plVar4 + 300) = (char)uVar11;
      if (((plVar4[9] == 0) || (lVar6 = *(long *)(plVar4[9] + 0x28), lVar6 == 0)) ||
         (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar6,0), lVar6 == 0)) {
        plVar4 = (long *)func_0x00f78af4();
        return plVar4;
      }
      uVar11 = uVar11 ^ 1;
      ppppppuVar15 = *(undefined8 *******)((long)ppppppuVar2 + -0x10);
      puVar20 = *(undefined **)((long)ppppppuVar2 + -8);
      unaff_x20 = *(undefined8 *)((long)ppppppuVar2 + -0x20);
      uVar5 = *(undefined8 *)((long)ppppppuVar2 + -0x18);
      goto code_r0x0322ef1c;
    }
  }
  plVar4 = (long *)func_0x00f78af4();
  ppppuStack_98 = (undefined8 ****)&Atlas_Gameplay_Usables_RicochetProjectile__CollideWithFloor;
  pppppppuStack_b0 = (undefined8 *******)ppppppuVar8;
  pppppuStack_a8 = pppppuVar14;
  pppppppuStack_a0 = &pppppppuStack_80;
  plVar3 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar4,0);
  if (((ulong)plVar3 & 1) != 0) {
    return plVar3;
  }
  Atlas_Gameplay_Usables_ProjectileUsable__SetForceToFloorNetworkFlag(plVar4,1,0);
  Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(plVar4,0,0);
                    /* WARNING: Could not recover jumptable at 0x014e4e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar4 = (long *)(**(code **)(*plVar4 + 0x3f8))(plVar4,*(undefined8 *)(*plVar4 + 0x400));
  return plVar4;
}



// ============================================================
// RVA: 0x14e4b14 | Atlas.Gameplay.Usables.RicochetProjectile.Use
// ============================================================

/* WARNING: Possible PIC construction at 0x014e4b58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e4b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e4b7c) */
/* WARNING: Removing unreachable block (ram,0x014e4b94) */
/* WARNING: Removing unreachable block (ram,0x014e4b84) */
/* WARNING: Removing unreachable block (ram,0x0152fe60) */
/* WARNING: Removing unreachable block (ram,0x0152fe7c) */
/* WARNING: Removing unreachable block (ram,0x0152fe90) */
/* WARNING: Removing unreachable block (ram,0x0152fe98) */
/* WARNING: Removing unreachable block (ram,0x0152fec4) */
/* WARNING: Removing unreachable block (ram,0x0152fea0) */
/* WARNING: Removing unreachable block (ram,0x01638d80) */
/* WARNING: Removing unreachable block (ram,0x014e4b5c) */
/* WARNING: Removing unreachable block (ram,0x014e4b68) */
/* WARNING: Removing unreachable block (ram,0x014e4b70) */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Gameplay_Usables_RicochetProjectile__Use
                 (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 ******ppppppuVar2;
  long *plVar3;
  long lVar4;
  undefined8 *****pppppuVar5;
  long *plVar6;
  undefined8 ******ppppppuVar7;
  long extraout_x1;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 unaff_x20;
  undefined8 ****ppppuVar15;
  undefined8 unaff_x21;
  long lVar16;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar17;
  code *pcVar18;
  undefined8 uVar19;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined4 uStack_170;
  float fStack_16c;
  float fStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined8 *******pppppppuStack_e0;
  code *pcStack_d8;
  undefined8 *******pppppppuStack_90;
  undefined8 *****pppppuStack_88;
  undefined8 *******pppppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 *****pppppuStack_68;
  undefined8 *******pppppppuStack_60;
  code *pcStack_58;
  undefined8 ******ppppppuStack_30;
  undefined *puStack_28;
  
  ppppppuVar2 = (undefined8 ******)&stack0xffffffffffffffe0;
  ppppppuVar14 = (undefined8 ******)&stack0xfffffffffffffff0;
  Atlas_Gameplay_Usables_ProjectileUsable__Use(param_4,0);
  Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(param_4,1,0);
  lVar4 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(param_4);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x70), lVar4 != 0)) {
    uVar10 = 0;
    uVar19 = 0x14e4b5c;
code_r0x0322ef1c:
    *(undefined8 *)((long)ppppppuVar2 + -0x30) = unaff_x22;
    *(undefined8 *)((long)ppppppuVar2 + -0x28) = unaff_x21;
    *(undefined8 *)((long)ppppppuVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppppppuVar2 + -0x18) = param_4;
    *(undefined8 *******)((long)ppppppuVar2 + -0x10) = ppppppuVar14;
    *(undefined8 *)((long)ppppppuVar2 + -8) = uVar19;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar6 = (long *)(*pcRam0000000003ebf4c0)(lVar4,uVar10);
    return plVar6;
  }
  auVar28 = func_0x00f78af4();
  ppppppuVar7 = auVar28._8_8_;
  pppppuVar5 = auVar28._0_8_;
  puStack_28 = &Atlas_Gameplay_Usables_RicochetProjectile__OnTriggerEnter;
  unaff_x21 = 0x3eb4000;
  ppppppuStack_30 = ppppppuVar14;
  if ((bRam0000000003eb4bff & 1) == 0) {
    func_0x00f78a20(0x3d207e8);
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bff = 1;
  }
  plVar6 = (long *)Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(pppppuVar5,ppppppuVar7,0)
  ;
  if (*(char *)(pppppuVar5 + 0xc) != '\0') {
    return plVar6;
  }
  if (*(char *)((long)pppppuVar5 + 300) != '\0') {
    return plVar6;
  }
  plVar6 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(pppppuVar5,0);
  if (((ulong)plVar6 & 1) != 0) {
    return plVar6;
  }
  if (ppppppuVar7 != (undefined8 ******)0x0) {
    unaff_x21 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(ppppppuVar7,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar6 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
    if ((int)plVar6 == 0) {
      return plVar6;
    }
    lVar4 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(ppppppuVar7,0);
    if (lVar4 != 0) {
      lVar4 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar4,uRam0000000003d534a0);
      if ((lVar4 == 0) ||
         (ppppppuVar7 = (undefined8 ******)func_0x0001c7d0(0,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ uRam0000000003d21fc8,lVar4),
         ppppppuVar7 == (undefined8 ******)0x0)) {
        return (long *)0x0;
      }
      pppppuVar13 = *ppppppuVar7;
      if ((*(byte *)((long)pppppuVar13 + 300) < *(byte *)((long)/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ pppuRam0000000003d22c78 + 300)) ||
         (pppppuVar13[0x19][(ulong)*(byte *)((long)/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ pppuRam0000000003d22c78 + 300) - 1] !=
          /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ pppuRam0000000003d22c78)) {
        if (*(byte *)((long)pppppuVar13 + 300) < *(byte *)((long)/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ pppuRam0000000003d207e8 + 300)) {
          return (long *)ppppppuVar7;
        }
        if (pppppuVar13[0x19][(ulong)*(byte *)((long)/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ pppuRam0000000003d207e8 + 300) - 1] ==
            /*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ pppuRam0000000003d207e8) {
                    /* WARNING: Could not recover jumptable at 0x014e4d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar6 = (long *)(*(code *)(*pppppuVar5)[0x45])(pppppuVar5,(*pppppuVar5)[0x46]);
          return plVar6;
        }
        return (long *)ppppppuVar7;
      }
      plVar6 = (long *)(*(code *)(*pppppuVar5)[0x65])(pppppuVar5,ppppppuVar7,1,(*pppppuVar5)[0x66]);
      if ((int)plVar6 == 0) {
        return plVar6;
      }
      if (pppppuVar5[7] != (undefined8 ****)0x0) {
        /*Atlas.Stats.AchievementManager$$OnClamHit*/ func_0x01448380(pppppuVar5[7],*(undefined4 *)((long)pppppuVar5 + 0xec),0);
        Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag(pppppuVar5,1,0);
        uVar9 = (ulong)*(uint *)((long)ppppppuVar7 + 0x54);
        if ((bRam0000000003eb4b74 & 1) == 0) {
          func_0x00f78a20(0x3d23990,uVar9,0);
          bRam0000000003eb4b74 = 1;
        }
        ppppuVar15 = pppppuVar5[0x19];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar6 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(ppppuVar15,0,0);
        if (((ulong)plVar6 & 1) != 0) {
          return plVar6;
        }
        ppppuVar12 = pppppuVar5[0x19];
        if (ppppuVar12 != (undefined8 ****)0x0) {
          if (*(char *)((long)ppppuVar12 + 0x44) != '\0') {
            ppppuVar12[9] =
                 (undefined8 ***)
                 (uVar9 << ((ulong)*(uint *)((long)pppppuVar5 + 0x19c) & 0x3f) |
                 (ulong)ppppuVar12[9]);
            return plVar6;
          }
          return plVar6;
        }
        lVar4 = func_0x00f78af4();
        pppppppuStack_80 = (undefined8 *******)0x3d23990;
        pcStack_58 = Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
        ppppuStack_78 = ppppuVar15;
        ppppppuStack_70 = (undefined8 ******)pppppuVar5;
        pppppuStack_68 = (undefined8 *****)uVar9;
        pppppppuStack_60 = &ppppppuStack_30;
        if ((bRam0000000003eb4b75 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b75 = 1;
        }
        uVar19 = *(undefined8 *)(lVar4 + 200);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar11 = 0;
        uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar19,0);
        if ((uVar9 & 1) != 0) {
          return (long *)0x0;
        }
        lVar4 = *(long *)(lVar4 + 200);
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x44) != '\0') {
            return (long *)0x0;
          }
          return (long *)(ulong)(*(char *)(lVar4 + 0x28) == '\x01');
        }
        plVar3 = (long *)func_0x00f78af4();
        pppppuStack_88 = (undefined8 *****)Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
        plVar6 = plVar3;
        pppppppuStack_90 = &pppppppuStack_60;
        if ((bRam0000000003eb4b78 & 1) == 0) {
          plVar6 = (long *)func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b78 = 1;
        }
        if (0.0 < *(float *)((long)plVar3 + 0xdc)) {
          return plVar6;
        }
        fVar22 = *(float *)((long)plVar3 + 0xe4);
        fVar25 = *(float *)(plVar3 + 0x1d);
        plVar6 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar3[0x1c],fVar22,fVar25,extraout_s0,param_2,param_3
                                         ,0);
        fVar22 = param_3 * fVar25 + extraout_s0 * extraout_s0_00 + param_2 * fVar22;
        if (fVar22 < 0.0) {
          return plVar6;
        }
        *(float *)(plVar3 + 0x1c) = extraout_s0_00;
        *(undefined4 *)((long)plVar3 + 0xe4) = 0;
        *(float *)(plVar3 + 0x1d) = fVar25;
        /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar3 + 0x1c,0);
        *(undefined4 *)((long)plVar3 + 0xdc) = 0x3d4ccccd;
        if (0.0 < *(float *)(plVar3 + 0x1b)) {
          lVar4 = plVar3[0x1a];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar6 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar4,0);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar6;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar11 = 0;
          plVar6 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar6;
          }
        }
        *(undefined4 *)(plVar3 + 0x1b) = 0x3e4ccccd;
        iVar1 = *(int *)((long)plVar3 + 0xec) + 1;
        *(int *)((long)plVar3 + 0xec) = iVar1;
        lVar4 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar3);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x90) < iVar1) {
            (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar11 = 0;
          plVar6 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
          if ((int)plVar6 == 0) {
            return plVar6;
          }
          if (extraout_x1 != 0) {
            plVar6 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
            plVar3[0x1a] = (long)plVar6;
            return plVar6;
          }
        }
        auVar28 = func_0x00f78af4();
        lVar8 = auVar28._8_8_;
        lVar4 = auVar28._0_8_;
        pcStack_d8 = Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
        pppppppuStack_e0 = &pppppppuStack_90;
        if ((bRam0000000003eb4b79 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b79 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar6 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0,0);
        if (((ulong)plVar6 & 1) != 0) {
          return plVar6;
        }
        if (*(long *)(lVar4 + 0x100) == 0) goto code_r0x014cf9bc;
        uVar20 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar4 + 0x100),0);
        fVar23 = *(float *)(lVar11 + 0xc);
        fVar26 = *(float *)(lVar4 + 0xe0);
        fVar21 = *(float *)(lVar4 + 0x128) * fVar23;
        lVar16 = *(long *)(lVar4 + 0x50);
        fVar24 = fVar23;
        fVar27 = fVar26;
        fStack_16c = fVar22;
        fStack_168 = fVar25;
        if (lVar16 != 0) {
          if (*(long *)(lVar4 + 0x100) == 0) goto code_r0x014cf9bc;
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar21,fVar23,fVar26,*(undefined4 *)(lVar4 + 0xe4),
                          *(undefined4 *)(lVar4 + 0xe8),*(long *)(lVar4 + 0x100),0);
          uVar20 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar4,lVar16,0);
          if ((*(long *)(lVar4 + 0x50) == 0) ||
             (lVar4 = *(long *)(*(long *)(lVar4 + 0x50) + 0x10), lVar4 == 0)) goto code_r0x014cf9bc;
          lVar4 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar4,0);
          fVar24 = *(float *)(lVar4 + 0x104);
          fVar27 = *(float *)(lVar4 + 0x108);
          fVar21 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x100),fVar24,fVar27,0);
          fVar22 = *(float *)(lVar11 + 8);
          fVar21 = fVar21 * fVar22;
          fVar24 = fVar24 * fVar22;
          fVar27 = fVar27 * fVar22;
          fStack_16c = fVar23;
          fStack_168 = fVar26;
        }
        if ((lVar8 != 0) && (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar21,fVar24,fVar27,lVar8,0), lVar4 != 0)) {
          puStack_148 = &UNK_014cf984;
          uStack_170 = uVar20;
          lStack_160 = lVar11;
          lStack_158 = lVar8;
          pppppppuStack_150 = &pppppppuStack_e0;
          if (pcRam0000000003ec1950 == (code *)0x0) {
            pcRam0000000003ec1950 =
                 (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                         ,0);
          }
          plVar6 = (long *)(*pcRam0000000003ec1950)(lVar4,&uStack_170);
          return plVar6;
        }
code_r0x014cf9bc:
        plVar6 = (long *)func_0x00f78af4();
        return plVar6;
      }
    }
  }
  pppppuVar13 = (undefined8 *****)func_0x00f78af4();
  ppppppuVar2 = &ppppppuStack_70;
  pcStack_58 = (code *)&Atlas_Gameplay_Usables_RicochetProjectile__Destroy;
  ppppppuStack_70 = ppppppuVar7;
  pppppuStack_68 = pppppuVar5;
  pppppppuStack_60 = &ppppppuStack_30;
  if (pppppuVar13[9] != (undefined8 ****)0x0) {
    ppppuVar15 = pppppuVar13[0x37];
    uVar19 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(pppppuVar13[9],0);
    ppppppuVar7 = (undefined8 ******)0x0;
    if (ppppuVar15 != (undefined8 ****)0x0) {
      uVar10 = 0;
      /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(ppppuVar15,uVar19);
      ppppppuVar14 = ppppppuStack_70;
      pppppppuVar17 = &pppppppuStack_60;
      plVar6 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(pppppuVar13,0);
      if (((ulong)plVar6 & 1) != 0) {
LAB_014ceb18:
        if (*(char *)(pppppuVar13 + 0xc) != '\0') {
          return plVar6;
        }
        *(undefined1 *)(pppppuVar13 + 0xc) = 1;
        *(undefined1 *)((long)pppppuVar13 + 0x61) = 1;
        return (long *)pppppuVar13;
      }
      plVar6 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(pppppuVar13,0);
      if ((plVar6 == (long *)0x0) || (plVar6[0x18] == 0)) {
        pcVar18 = Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
        auVar29 = func_0x00f78af4();
      }
      else {
        if (*(char *)(plVar6[0x18] + 0x50) != '\0') goto LAB_014ceb18;
        auVar29._8_4_ = 1;
        auVar29._0_8_ = pppppuVar13;
        uVar10 = 1;
        ppppppuVar2 = (undefined8 ******)&stack0xffffffffffffffb0;
        pppppuVar13 = pppppuStack_68;
        ppppppuVar14 = ppppppuStack_70;
        pppppppuVar17 = pppppppuStack_60;
        pcVar18 = pcStack_58;
      }
      plVar6 = auVar29._0_8_;
      *(undefined8 *******)((long)ppppppuVar2 + -0x20) = ppppppuVar14;
      *(undefined8 ******)((long)ppppppuVar2 + -0x18) = pppppuVar13;
      *(undefined8 ********)((long)ppppppuVar2 + -0x10) = pppppppuVar17;
      *(code **)((long)ppppppuVar2 + -8) = pcVar18;
      if ((*(char *)((long)plVar6 + 300) != '\0') == uVar10) {
        return plVar6;
      }
      if (auVar29._8_4_ != 0) {
        (**(code **)(*plVar6 + 0x448))(plVar6,*(undefined8 *)(*plVar6 + 0x450));
      }
      *(char *)((long)plVar6 + 300) = (char)uVar10;
      if (((plVar6[9] == 0) || (lVar4 = *(long *)(plVar6[9] + 0x28), lVar4 == 0)) ||
         (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0), lVar4 == 0)) {
        plVar6 = (long *)func_0x00f78af4();
        return plVar6;
      }
      uVar10 = uVar10 ^ 1;
      ppppppuVar14 = *(undefined8 *******)((long)ppppppuVar2 + -0x10);
      uVar19 = *(undefined8 *)((long)ppppppuVar2 + -8);
      unaff_x20 = *(undefined8 *)((long)ppppppuVar2 + -0x20);
      param_4 = *(undefined8 *)((long)ppppppuVar2 + -0x18);
      goto code_r0x0322ef1c;
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  ppppuStack_78 = (undefined8 ****)&Atlas_Gameplay_Usables_RicochetProjectile__CollideWithFloor;
  pppppppuStack_90 = (undefined8 *******)ppppppuVar7;
  pppppuStack_88 = pppppuVar13;
  pppppppuStack_80 = &pppppppuStack_60;
  plVar3 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar6,0);
  if (((ulong)plVar3 & 1) != 0) {
    return plVar3;
  }
  Atlas_Gameplay_Usables_ProjectileUsable__SetForceToFloorNetworkFlag(plVar6,1,0);
  Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(plVar6,0,0);
                    /* WARNING: Could not recover jumptable at 0x014e4e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar6 = (long *)(**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400));
  return plVar6;
}



// ============================================================
// RVA: 0x14e4ba4 | Atlas.Gameplay.Usables.RicochetProjectile.OnTriggerEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x014cf980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cf984) */
/* WARNING: Removing unreachable block (ram,0x01526f98) */
/* WARNING: Removing unreachable block (ram,0x01527010) */
/* WARNING: Removing unreachable block (ram,0x01527048) */
/* WARNING: Removing unreachable block (ram,0x0152705c) */
/* WARNING: Removing unreachable block (ram,0x01527068) */
/* WARNING: Removing unreachable block (ram,0x0152706c) */
/* WARNING: Removing unreachable block (ram,0x01527070) */
/* WARNING: Removing unreachable block (ram,0x01527074) */
/* WARNING: Removing unreachable block (ram,0x01527084) */
/* WARNING: Removing unreachable block (ram,0x0152708c) */
/* WARNING: Removing unreachable block (ram,0x015270b4) */
/* WARNING: Removing unreachable block (ram,0x01527098) */
/* WARNING: Removing unreachable block (ram,0x015270a4) */
/* WARNING: Removing unreachable block (ram,0x015270c0) */
/* WARNING: Removing unreachable block (ram,0x015270e0) */
/* WARNING: Removing unreachable block (ram,0x015270e4) */
/* WARNING: Removing unreachable block (ram,0x01527138) */
/* WARNING: Removing unreachable block (ram,0x015270e8) */
/* WARNING: Removing unreachable block (ram,0x01527140) */
/* WARNING: Removing unreachable block (ram,0x01527150) */
/* WARNING: Removing unreachable block (ram,0x0152720c) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x01527160) */
/* WARNING: Removing unreachable block (ram,0x01527184) */
/* WARNING: Removing unreachable block (ram,0x0152718c) */
/* WARNING: Removing unreachable block (ram,0x015271b4) */
/* WARNING: Removing unreachable block (ram,0x01527198) */
/* WARNING: Removing unreachable block (ram,0x015271a4) */
/* WARNING: Removing unreachable block (ram,0x015271c0) */
/* WARNING: Removing unreachable block (ram,0x01526fec) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Gameplay_Usables_RicochetProjectile__OnTriggerEnter
                 (undefined1 param_1 [16],float param_2,float param_3,undefined8 *****param_4,
                 undefined8 ******param_5)

{
  int iVar1;
  undefined8 ******ppppppuVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x1;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 ****ppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar17;
  code *pcVar18;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined4 uStack_150;
  float fStack_14c;
  float fStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined8 *******pppppppuStack_c0;
  code *pcStack_b8;
  undefined8 *******pppppppuStack_70;
  undefined8 *****pppppuStack_68;
  undefined8 *******pppppppuStack_60;
  undefined8 ****ppppuStack_58;
  undefined8 ******ppppppuStack_50;
  undefined8 *****pppppuStack_48;
  undefined8 *******pppppppuStack_40;
  code *pcStack_38;
  
  uVar15 = 0x3eb4000;
  if ((bRam0000000003eb4bff & 1) == 0) {
    func_0x00f78a20(0x3d207e8);
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4bff = 1;
  }
  plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(param_4,param_5,0);
  if (*(char *)(param_4 + 0xc) != '\0') {
    return plVar4;
  }
  if (*(char *)((long)param_4 + 300) != '\0') {
    return plVar4;
  }
  plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_4,0);
  if (((ulong)plVar4 & 1) != 0) {
    return plVar4;
  }
  if (param_5 != (undefined8 ******)0x0) {
    uVar15 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_5,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar4 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar15,0,0);
    if ((int)plVar4 == 0) {
      return plVar4;
    }
    lVar5 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_5,0);
    if (lVar5 != 0) {
      lVar5 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar5,uRam0000000003d534a0);
      if ((lVar5 == 0) ||
         (param_5 = (undefined8 ******)func_0x0001c7d0(0,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ uRam0000000003d21fc8,lVar5),
         param_5 == (undefined8 ******)0x0)) {
        return (long *)0x0;
      }
      pppppuVar12 = *param_5;
      if ((*(byte *)((long)pppppuVar12 + 300) < *(byte *)((long)/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ pppuRam0000000003d22c78 + 300)) ||
         (pppppuVar12[0x19][(ulong)*(byte *)((long)/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ pppuRam0000000003d22c78 + 300) - 1] !=
          /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ pppuRam0000000003d22c78)) {
        if (*(byte *)((long)pppppuVar12 + 300) < *(byte *)((long)/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ pppuRam0000000003d207e8 + 300)) {
          return (long *)param_5;
        }
        if (pppppuVar12[0x19][(ulong)*(byte *)((long)/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ pppuRam0000000003d207e8 + 300) - 1] ==
            /*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ pppuRam0000000003d207e8) {
                    /* WARNING: Could not recover jumptable at 0x014e4d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar4 = (long *)(*(code *)(*param_4)[0x45])(param_4,(*param_4)[0x46]);
          return plVar4;
        }
        return (long *)param_5;
      }
      plVar4 = (long *)(*(code *)(*param_4)[0x65])(param_4,param_5,1,(*param_4)[0x66]);
      if ((int)plVar4 == 0) {
        return plVar4;
      }
      if (param_4[7] != (undefined8 ****)0x0) {
        /*Atlas.Stats.AchievementManager$$OnClamHit*/ func_0x01448380(param_4[7],*(undefined4 *)((long)param_4 + 0xec),0);
        Atlas_Gameplay_Usables_ProjectileUsable__SetHitNetworkFlag(param_4,1,0);
        uVar8 = (ulong)*(uint *)((long)param_5 + 0x54);
        if ((bRam0000000003eb4b74 & 1) == 0) {
          func_0x00f78a20(0x3d23990,uVar8,0);
          bRam0000000003eb4b74 = 1;
        }
        ppppuVar14 = param_4[0x19];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(ppppuVar14,0,0);
        if (((ulong)plVar4 & 1) != 0) {
          return plVar4;
        }
        ppppuVar11 = param_4[0x19];
        if (ppppuVar11 != (undefined8 ****)0x0) {
          if (*(char *)((long)ppppuVar11 + 0x44) != '\0') {
            ppppuVar11[9] =
                 (undefined8 ***)
                 (uVar8 << ((ulong)*(uint *)((long)param_4 + 0x19c) & 0x3f) | (ulong)ppppuVar11[9]);
            return plVar4;
          }
          return plVar4;
        }
        lVar5 = func_0x00f78af4();
        pppppppuStack_60 = (undefined8 *******)0x3d23990;
        pcStack_38 = Atlas_Gameplay_Usables_ProjectileUsable__GetForceToFloorNetworkFlag;
        ppppuStack_58 = ppppuVar14;
        ppppppuStack_50 = (undefined8 ******)param_4;
        pppppuStack_48 = (undefined8 *****)uVar8;
        pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
        if ((bRam0000000003eb4b75 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b75 = 1;
        }
        uVar15 = *(undefined8 *)(lVar5 + 200);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar10 = 0;
        uVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar15,0);
        if ((uVar8 & 1) != 0) {
          return (long *)0x0;
        }
        lVar5 = *(long *)(lVar5 + 200);
        if (lVar5 != 0) {
          if (*(char *)(lVar5 + 0x44) != '\0') {
            return (long *)0x0;
          }
          return (long *)(ulong)(*(char *)(lVar5 + 0x28) == '\x01');
        }
        plVar3 = (long *)func_0x00f78af4();
        pppppuStack_68 = (undefined8 *****)Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce;
        plVar4 = plVar3;
        pppppppuStack_70 = &pppppppuStack_40;
        if ((bRam0000000003eb4b78 & 1) == 0) {
          plVar4 = (long *)func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b78 = 1;
        }
        if (0.0 < *(float *)((long)plVar3 + 0xdc)) {
          return plVar4;
        }
        fVar21 = *(float *)((long)plVar3 + 0xe4);
        fVar24 = *(float *)(plVar3 + 0x1d);
        plVar4 = (long *)/*UnityEngine.Vector3$$Reflect*/ func_0x0327b6e0((int)plVar3[0x1c],fVar21,fVar24,extraout_s0,param_2,param_3
                                         ,0);
        fVar21 = param_3 * fVar24 + extraout_s0 * extraout_s0_00 + param_2 * fVar21;
        if (fVar21 < 0.0) {
          return plVar4;
        }
        *(float *)(plVar3 + 0x1c) = extraout_s0_00;
        *(undefined4 *)((long)plVar3 + 0xe4) = 0;
        *(float *)(plVar3 + 0x1d) = fVar24;
        /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824(plVar3 + 0x1c,0);
        *(undefined4 *)((long)plVar3 + 0xdc) = 0x3d4ccccd;
        if (0.0 < *(float *)(plVar3 + 0x1b)) {
          lVar5 = plVar3[0x1a];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,lVar5,0);
          if (((ulong)plVar4 & 1) != 0) {
            return plVar4;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar10 = 0;
          plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,0);
          if (((ulong)plVar4 & 1) != 0) {
            return plVar4;
          }
        }
        *(undefined4 *)(plVar3 + 0x1b) = 0x3e4ccccd;
        iVar1 = *(int *)((long)plVar3 + 0xec) + 1;
        *(int *)((long)plVar3 + 0xec) = iVar1;
        lVar5 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar3);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x90) < iVar1) {
            (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar10 = 0;
          plVar4 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0);
          if ((int)plVar4 == 0) {
            return plVar4;
          }
          if (extraout_x1 != 0) {
            plVar4 = (long *)/*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(extraout_x1,0);
            plVar3[0x1a] = (long)plVar4;
            return plVar4;
          }
        }
        auVar27 = func_0x00f78af4();
        lVar7 = auVar27._8_8_;
        lVar5 = auVar27._0_8_;
        pcStack_b8 = Atlas_Gameplay_Usables_ProjectileUsable__SetupDespawnVFX;
        pppppppuStack_c0 = &pppppppuStack_70;
        if ((bRam0000000003eb4b79 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4b79 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar4 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar7,0,0);
        if (((ulong)plVar4 & 1) != 0) {
          return plVar4;
        }
        if (*(long *)(lVar5 + 0x100) == 0) goto code_r0x014cf9bc;
        uVar19 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar5 + 0x100),0);
        fVar22 = *(float *)(lVar10 + 0xc);
        fVar25 = *(float *)(lVar5 + 0xe0);
        fVar20 = *(float *)(lVar5 + 0x128) * fVar22;
        lVar16 = *(long *)(lVar5 + 0x50);
        fVar23 = fVar22;
        fVar26 = fVar25;
        fStack_14c = fVar21;
        fStack_148 = fVar24;
        if (lVar16 != 0) {
          if (*(long *)(lVar5 + 0x100) == 0) goto code_r0x014cf9bc;
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(fVar20,fVar22,fVar25,*(undefined4 *)(lVar5 + 0xe4),
                          *(undefined4 *)(lVar5 + 0xe8),*(long *)(lVar5 + 0x100),0);
          uVar19 = /*Atlas.Gameplay.Usables.Usable$$InterpolateDespawnVFXPosition*/ func_0x0152418c(lVar5,lVar16,0);
          if ((*(long *)(lVar5 + 0x50) == 0) ||
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x50) + 0x10), lVar5 == 0)) goto code_r0x014cf9bc;
          lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar5,0);
          fVar23 = *(float *)(lVar5 + 0x104);
          fVar26 = *(float *)(lVar5 + 0x108);
          fVar20 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x100),fVar23,fVar26,0);
          fVar21 = *(float *)(lVar10 + 8);
          fVar20 = fVar20 * fVar21;
          fVar23 = fVar23 * fVar21;
          fVar26 = fVar26 * fVar21;
          fStack_14c = fVar22;
          fStack_148 = fVar25;
        }
        if ((lVar7 != 0) && (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(fVar20,fVar23,fVar26,lVar7,0), lVar5 != 0)) {
          puStack_128 = &UNK_014cf984;
          uStack_150 = uVar19;
          lStack_140 = lVar10;
          lStack_138 = lVar7;
          pppppppuStack_130 = &pppppppuStack_c0;
          if (pcRam0000000003ec1950 == (code *)0x0) {
            pcRam0000000003ec1950 =
                 (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                         ,0);
          }
          plVar4 = (long *)(*pcRam0000000003ec1950)(lVar5,&uStack_150);
          return plVar4;
        }
code_r0x014cf9bc:
        plVar4 = (long *)func_0x00f78af4();
        return plVar4;
      }
    }
  }
  pppppuVar12 = (undefined8 *****)func_0x00f78af4();
  ppppppuVar2 = &ppppppuStack_50;
  pcStack_38 = (code *)&Atlas_Gameplay_Usables_RicochetProjectile__Destroy;
  ppppppuStack_50 = param_5;
  pppppuStack_48 = param_4;
  pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (pppppuVar12[9] != (undefined8 ****)0x0) {
    ppppuVar14 = pppppuVar12[0x37];
    uVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(pppppuVar12[9],0);
    param_5 = (undefined8 ******)0x0;
    if (ppppuVar14 != (undefined8 ****)0x0) {
      uVar9 = 0;
      /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(ppppuVar14,uVar6);
      ppppppuVar13 = ppppppuStack_50;
      pppppppuVar17 = &pppppppuStack_40;
      plVar4 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(pppppuVar12,0);
      if (((ulong)plVar4 & 1) == 0) {
        plVar4 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(pppppuVar12,0);
        if ((plVar4 == (long *)0x0) || (plVar4[0x18] == 0)) {
          pcVar18 = Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
          auVar28 = func_0x00f78af4();
        }
        else {
          if (*(char *)(plVar4[0x18] + 0x50) != '\0') goto LAB_014ceb18;
          auVar28._8_4_ = 1;
          auVar28._0_8_ = pppppuVar12;
          uVar9 = 1;
          ppppppuVar2 = (undefined8 ******)&stack0xffffffffffffffd0;
          pppppuVar12 = pppppuStack_48;
          ppppppuVar13 = ppppppuStack_50;
          pppppppuVar17 = pppppppuStack_40;
          pcVar18 = pcStack_38;
        }
        plVar4 = auVar28._0_8_;
        *(undefined8 *******)((long)ppppppuVar2 + -0x20) = ppppppuVar13;
        *(undefined8 ******)((long)ppppppuVar2 + -0x18) = pppppuVar12;
        *(undefined8 ********)((long)ppppppuVar2 + -0x10) = pppppppuVar17;
        *(code **)((long)ppppppuVar2 + -8) = pcVar18;
        if ((*(char *)((long)plVar4 + 300) != '\0') == uVar9) {
          return plVar4;
        }
        if (auVar28._8_4_ != 0) {
          (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
        }
        *(char *)((long)plVar4 + 300) = (char)uVar9;
        if (((plVar4[9] != 0) && (lVar5 = *(long *)(plVar4[9] + 0x28), lVar5 != 0)) &&
           (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar5 != 0)) {
          *(undefined8 *)((long)ppppppuVar2 + -0x30) = unaff_x22;
          *(undefined8 *)((long)ppppppuVar2 + -0x28) = uVar15;
          *(undefined8 *)((long)ppppppuVar2 + -0x20) = *(undefined8 *)((long)ppppppuVar2 + -0x20);
          *(undefined8 *)((long)ppppppuVar2 + -0x18) = *(undefined8 *)((long)ppppppuVar2 + -0x18);
          *(undefined8 *)((long)ppppppuVar2 + -0x10) = *(undefined8 *)((long)ppppppuVar2 + -0x10);
          *(undefined8 *)((long)ppppppuVar2 + -8) = *(undefined8 *)((long)ppppppuVar2 + -8);
          if (pcRam0000000003ebf4c0 == (code *)0x0) {
            pcRam0000000003ebf4c0 =
                 (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar4 = (long *)(*pcRam0000000003ebf4c0)(lVar5,uVar9 ^ 1);
          return plVar4;
        }
        plVar4 = (long *)func_0x00f78af4();
        return plVar4;
      }
LAB_014ceb18:
      if (*(char *)(pppppuVar12 + 0xc) != '\0') {
        return plVar4;
      }
      *(undefined1 *)(pppppuVar12 + 0xc) = 1;
      *(undefined1 *)((long)pppppuVar12 + 0x61) = 1;
      return (long *)pppppuVar12;
    }
  }
  plVar4 = (long *)func_0x00f78af4();
  ppppuStack_58 = (undefined8 ****)&Atlas_Gameplay_Usables_RicochetProjectile__CollideWithFloor;
  pppppppuStack_70 = (undefined8 *******)param_5;
  pppppuStack_68 = pppppuVar12;
  pppppppuStack_60 = &pppppppuStack_40;
  plVar3 = (long *)Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar4,0);
  if (((ulong)plVar3 & 1) != 0) {
    return plVar3;
  }
  Atlas_Gameplay_Usables_ProjectileUsable__SetForceToFloorNetworkFlag(plVar4,1,0);
  Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(plVar4,0,0);
                    /* WARNING: Could not recover jumptable at 0x014e4e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar4 = (long *)(**(code **)(*plVar4 + 0x3f8))(plVar4,*(undefined8 *)(*plVar4 + 0x400));
  return plVar4;
}



// ============================================================
// RVA: 0x14e4dbc | Atlas.Gameplay.Usables.RicochetProjectile.Destroy
// ============================================================

void Atlas_Gameplay_Usables_RicochetProjectile__Destroy(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar8;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar9 [12];
  
  puVar1 = &stack0xffffffffffffffe0;
  if (param_1[9] != 0) {
    lVar7 = param_1[0x37];
    uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1[9],0);
    if (lVar7 != 0) {
      uVar6 = 0;
      /*Atlas.Audio.WeaponAudio$$Explode*/ func_0x01530004(lVar7,uVar3);
      puVar8 = &stack0xfffffffffffffff0;
      uVar2 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_1,0);
      if ((uVar2 & 1) == 0) {
        lVar7 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0xc0) == 0)) {
          unaff_x30 = Atlas_Gameplay_Usables_ProjectileUsable__SetToGhostProjectile;
          auVar9 = func_0x00f78af4();
          iVar5 = auVar9._8_4_;
          plVar4 = auVar9._0_8_;
        }
        else {
          if (*(char *)(*(long *)(lVar7 + 0xc0) + 0x50) != '\0') goto LAB_014ceb18;
          iVar5 = 1;
          uVar6 = 1;
          puVar1 = (undefined1 *)register0x00000008;
          plVar4 = param_1;
          param_1 = unaff_x19;
          puVar8 = unaff_x29;
        }
        *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
        *(long **)(puVar1 + -0x18) = param_1;
        *(undefined1 **)(puVar1 + -0x10) = puVar8;
        *(code **)(puVar1 + -8) = unaff_x30;
        if ((*(char *)((long)plVar4 + 300) != '\0') == uVar6) {
          return;
        }
        if (iVar5 != 0) {
          (**(code **)(*plVar4 + 0x448))(plVar4,*(undefined8 *)(*plVar4 + 0x450));
        }
        *(char *)((long)plVar4 + 300) = (char)uVar6;
        if (((plVar4[9] != 0) && (lVar7 = *(long *)(plVar4[9] + 0x28), lVar7 != 0)) &&
           (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0), lVar7 != 0)) {
          *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
          *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
          *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
          *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
          *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
          if (pcRam0000000003ebf4c0 == (code *)0x0) {
            pcRam0000000003ebf4c0 =
                 (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003ebf4c0)(lVar7,uVar6 ^ 1);
          return;
        }
        func_0x00f78af4();
        return;
      }
LAB_014ceb18:
      if ((char)param_1[0xc] != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0xc) = 1;
      *(undefined1 *)((long)param_1 + 0x61) = 1;
      return;
    }
  }
  plVar4 = (long *)func_0x00f78af4();
  uVar2 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(plVar4,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  Atlas_Gameplay_Usables_ProjectileUsable__SetForceToFloorNetworkFlag(plVar4,1,0);
  Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(plVar4,0,0);
                    /* WARNING: Could not recover jumptable at 0x014e4e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x3f8))(plVar4,*(undefined8 *)(*plVar4 + 0x400));
  return;
}



// ============================================================
// RVA: 0x14e4e0c | Atlas.Gameplay.Usables.RicochetProjectile.CollideWithFloor
// ============================================================

void Atlas_Gameplay_Usables_RicochetProjectile__CollideWithFloor(long *param_1)

{
  ulong uVar1;
  
  uVar1 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_1,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  Atlas_Gameplay_Usables_ProjectileUsable__SetForceToFloorNetworkFlag(param_1,1,0);
  Atlas_Gameplay_Usables_ProjectileUsable__SetFreeFall(param_1,0,0);
                    /* WARNING: Could not recover jumptable at 0x014e4e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
  return;
}



// ============================================================
// RVA: 0x14e4e70 | Atlas.Gameplay.Usables.RicochetProjectile.CollideWithEnvironment
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_RicochetProjectile__CollideWithEnvironment
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4,long param_5,
               undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 uVar12;
  undefined8 *extraout_x8;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  float *pfVar15;
  undefined8 unaff_x20;
  long *plVar16;
  undefined8 unaff_x21;
  long lVar17;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar18;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  uint uVar19;
  float extraout_s0;
  undefined4 uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  ulong uVar27;
  float fVar28;
  uint uVar29;
  ulong uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  ulong unaff_d8;
  float fVar34;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  float fVar35;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar36 [16];
  
  puVar2 = &stack0xfffffffffffffff0;
  uVar21 = /*UnityEngine.ContactPoint$$get_normal*/ func_0x0329f034(param_6,0);
  uVar27 = param_2;
  uVar30 = param_3;
  lVar6 = /*UnityEngine.ContactPoint$$get_otherCollider*/ func_0x0329f040(param_6,0);
  if (lVar6 == 0) {
LAB_014e4f3c:
    unaff_x30 = &Atlas_Gameplay_Usables_RicochetProjectile__AdjustDir;
    lVar6 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_5;
    unaff_x20 = param_6;
    unaff_x29 = puVar2;
    unaff_d8 = (ulong)uVar21;
    unaff_d9 = param_2 & 0xffffffff;
    unaff_d10 = param_3 & 0xffffffff;
  }
  else {
    uVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar6,0);
    uVar27 = param_2 & 0xffffffff;
    uVar30 = param_3 & 0xffffffff;
    Atlas_Gameplay_Usables_ProjectileUsable__ReflectBounce(uVar21,param_5,uVar7,0);
    if (*(char *)(param_5 + 300) == '\0') {
      if (*(long *)(param_5 + 0x1b8) == 0) goto LAB_014e4f3c;
      /*Atlas.Audio.WeaponAudio$$Ricochet*/ func_0x0152ff94(*(long *)(param_5 + 0x1b8),0);
    }
    uVar8 = Atlas_Gameplay_Usables_CollidableUsable__IsRemote(param_5,0);
    if (((uVar8 & 1) != 0) || (lVar9 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_5,0), lVar6 = param_5, lVar9 == 0)) {
      return;
    }
  }
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4c00 & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3c478);
    func_0x00f78a20(0x3d3c480);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c00 = 1;
  }
  *(undefined4 *)((long)register0x00000008 + -0x54) = 0;
  lVar9 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(lVar6,0);
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x40) == 0)) ||
     (plVar16 = *(long **)(*(long *)(lVar9 + 0x40) + 0x28), plVar16 == (long *)0x0)) {
code_r0x014e5324:
    func_0x00f78af4();
  }
  else {
    lVar9 = *plVar16;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto code_r0x014e5040;
        }
        piVar14 = piVar14 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)func_0x00fac1f0(plVar16,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
code_r0x014e5040:
    plVar16 = (long *)(*(code *)*puVar10)(plVar16,puVar10[1]);
    if (plVar16 != (long *)0x0) {
code_r0x014e506c:
      lVar9 = *plVar16;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x014e50b8;
          }
          piVar14 = piVar14 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar16,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014e50b8:
      uVar8 = (*(code *)*puVar10)(plVar16,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        lVar9 = *plVar16;
        uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar8 != 0) {
          piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar10 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x014e5114;
            }
            piVar14 = piVar14 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar16,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014e5114:
        lVar9 = (*(code *)*puVar10)(plVar16,puVar10[1]);
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x014e532c;
        }
        if (*(long *)(lVar9 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x014e532c;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + 0x18);
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x014e532c;
        }
        lVar17 = *(long *)(lVar6 + 0x1c0);
        uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
        if (lVar17 == 0) goto code_r0x014e530c;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar17,uVar7,uRam0000000003d3c478);
        goto code_r0x014e506c;
      }
      uVar18 = 0;
      uVar7 = 0;
      lVar9 = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = _UNK_033f8598;
      if (plVar16 == (long *)0x0) goto code_r0x014e51d4;
code_r0x014e5174:
      lVar17 = *plVar16;
      uVar8 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar10 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x014e51c8;
          }
          piVar14 = piVar14 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar16,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014e51c8:
      (*(code *)*puVar10)(plVar16,puVar10[1]);
code_r0x014e51d4:
      while( true ) {
        if (lVar9 == 0) {
          if (((int)uVar18 == 0) &&
             (*(int *)((long)register0x00000008 + (long)(int)uVar7 * 4 + -0x58) == 0x4e)) {
            *(int *)((long)register0x00000008 + -0x54) = (int)uVar7;
          }
          lVar9 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(lVar6);
          if (lVar9 != 0) {
            uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
            fVar28 = *(float *)(lVar6 + 0xe8);
            lVar9 = /*Atlas.Gameplay.SpatialUtils$$GetClosestToTransform*/ func_0x014fd934(*(undefined4 *)(lVar6 + 0xe0),*(undefined4 *)(lVar6 + 0xe4),
                                    fVar28,*(undefined4 *)(lVar6 + 0x1a0),uVar7,
                                    *(undefined8 *)(lVar6 + 0x1c0),1,0,0,0);
            if (*(long *)(lVar6 + 0x1c0) != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar6 + 0x1c0),uRam0000000003d3c480);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
              if (iVar4 == 0) {
                return;
              }
              if (lVar9 != 0) {
                fVar22 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar9,0);
                fVar34 = fVar28;
                lVar9 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(lVar6);
                if ((lVar9 != 0) && (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0), lVar9 != 0)) {
                  fVar23 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar9,0);
                  pfVar15 = (float *)(lVar6 + 0xe0);
                  *pfVar15 = fVar22 - fVar23;
                  *(float *)(lVar6 + 0xe8) = fVar28 - fVar34;
                  *(undefined4 *)(lVar6 + 0xe4) = 0;
                  *(ulong *)((long)register0x00000008 + -0x40) = unaff_d11;
                  *(ulong *)((long)register0x00000008 + -0x38) = unaff_d10;
                  *(undefined8 *)((long)register0x00000008 + -0x30) =
                       *(undefined8 *)((long)register0x00000008 + -0x50);
                  *(undefined8 *)((long)register0x00000008 + -0x28) =
                       *(undefined8 *)((long)register0x00000008 + -0x48);
                  *(undefined8 *)((long)register0x00000008 + -0x20) =
                       *(undefined8 *)((long)register0x00000008 + -0x20);
                  *(undefined8 *)((long)register0x00000008 + -0x18) =
                       *(undefined8 *)((long)register0x00000008 + -0x18);
                  *(undefined8 *)((long)register0x00000008 + -0x10) =
                       *(undefined8 *)((long)register0x00000008 + -0x10);
                  *(undefined8 *)((long)register0x00000008 + -8) =
                       *(undefined8 *)((long)register0x00000008 + -8);
                  fVar34 = *pfVar15;
                  fVar22 = *(float *)(lVar6 + 0xe4);
                  fVar28 = *(float *)(lVar6 + 0xe8);
                  if (cRam0000000003ca3505 == '\0') {
                    func_0x00f78a20(0x3d232c0,0);
                    cRam0000000003ca3505 = '\x01';
                  }
                  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  fVar28 = fVar28 * fVar28;
                  fVar34 = SQRT(fVar28 + fVar34 * fVar34 + fVar22 * fVar22);
                  if (fVar34 <= _UNK_033f8758) {
                    fVar22 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4();
                  }
                  else {
                    fVar22 = *pfVar15 / fVar34;
                    fVar28 = *(float *)(lVar6 + 0xe4) / fVar34;
                    fVar34 = *(float *)(lVar6 + 0xe8) / fVar34;
                  }
                  *pfVar15 = fVar22;
                  *(float *)(lVar6 + 0xe4) = fVar28;
                  *(float *)(lVar6 + 0xe8) = fVar34;
                  return;
                }
              }
            }
          }
          goto code_r0x014e5324;
        }
        func_0x00f78ac0(lVar9,0);
        uVar21 = (uint)param_4;
        if (extraout_w1 != 1) break;
        plVar11 = (long *)___cxa_begin_catch();
        lVar9 = *plVar11;
        ___cxa_end_catch();
        uVar7 = 0xffffffff;
        uVar18 = 1;
        if (plVar16 != (long *)0x0) goto code_r0x014e5174;
      }
      plVar11 = (long *)__Unwind_Resume();
      uVar29 = (uint)uVar30;
      uVar26 = (uint)uVar27;
      uVar24 = *(uint *)((long)plVar11 + 0x1a4);
      uVar12 = 1;
      *(ulong *)((long)register0x00000008 + -0xa0) = unaff_d11;
      *(ulong *)((long)register0x00000008 + -0x98) = unaff_d10;
      *(ulong *)((long)register0x00000008 + -0x90) = unaff_d9;
      *(ulong *)((long)register0x00000008 + -0x88) = unaff_d8;
      *(long **)((long)register0x00000008 + -0x80) = plVar16;
      *(long *)((long)register0x00000008 + -0x78) = lVar6;
      *(undefined1 **)((long)register0x00000008 + -0x70) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x68) =
           &Atlas_Gameplay_Usables_RicochetProjectile__ForceToFloor;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
      *(undefined4 *)((long)register0x00000008 + -200) = 0;
      if (plVar11[0x20] != 0) {
        unaff_d8 = (ulong)uVar24;
        uVar19 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar11[0x20],0,0);
        unaff_d10 = (ulong)uVar19;
        unaff_d11 = (ulong)uVar26;
        unaff_d9 = (ulong)uVar29;
        uVar27 = (ulong)uVar19;
        uVar30 = (ulong)uVar26;
        uVar21 = uVar29;
        Atlas_Gameplay_Usables_ProjectileUsable__RaycastProjectedNTimes
                  ((undefined1 *)((long)register0x00000008 + -0xd8),uVar24,uVar27,uVar30,uVar29,
                   plVar11,1);
        auVar36 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar11);
        uVar12 = auVar36._8_8_;
        if (auVar36._0_8_ != 0) {
          uVar32 = *(undefined4 *)(auVar36._0_8_ + 0x8c);
          lVar6 = *plVar11;
          pcVar3 = *(code **)(lVar6 + 0x438);
          *(undefined8 *)((long)register0x00000008 + -0xb8) =
               *(undefined8 *)((long)register0x00000008 + -0xd0);
          *(undefined8 *)((long)register0x00000008 + -0xc0) =
               *(undefined8 *)((long)register0x00000008 + -0xd8);
          *(undefined4 *)((long)register0x00000008 + -0xb0) =
               *(undefined4 *)((long)register0x00000008 + -200);
          (*pcVar3)(uVar24,uVar19,uVar26,uVar29,uVar32,plVar11,
                    (undefined1 *)((long)register0x00000008 + -0xc0),0,
                    *(undefined8 *)(lVar6 + 0x440));
          return;
        }
      }
      lVar6 = func_0x00f78af4(0,uVar12);
      *(undefined8 *)((long)register0x00000008 + -0x180) = unaff_d15;
      *(undefined8 *)((long)register0x00000008 + -0x178) = unaff_d14;
      *(undefined8 *)((long)register0x00000008 + -0x170) = unaff_d13;
      *(undefined8 *)((long)register0x00000008 + -0x168) = unaff_d12;
      *(ulong *)((long)register0x00000008 + -0x160) = unaff_d11;
      *(ulong *)((long)register0x00000008 + -0x158) = unaff_d10;
      *(ulong *)((long)register0x00000008 + -0x150) = unaff_d9;
      *(ulong *)((long)register0x00000008 + -0x148) = unaff_d8;
      *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3d3c478;
      *(undefined8 *)((long)register0x00000008 + -0x118) = uVar18;
      *(undefined8 *)((long)register0x00000008 + -0x110) = uVar7;
      *(long *)((long)register0x00000008 + -0x108) = lVar9;
      *(long **)((long)register0x00000008 + -0x100) = plVar16;
      *(long **)((long)register0x00000008 + -0xf8) = plVar11;
      *(undefined1 **)((long)register0x00000008 + -0xf0) =
           (undefined1 *)((long)register0x00000008 + -0x70);
      *(code **)((long)register0x00000008 + -0xe8) =
           Atlas_Gameplay_Usables_ProjectileUsable__RaycastProjectedNTimes;
      iVar4 = (int)extraout_x1;
      uVar8 = (ulong)uVar21;
      fVar28 = (float)uVar30;
      fVar34 = (float)uVar27;
      if ((bRam0000000003eb4b7d & 1) == 0) {
        func_0x00f78a20(0x3d39b48);
        func_0x00f78a20(0x3d39b50);
        func_0x00f78a20(0x3d39b40);
        func_0x00f78a20(0x3d39b58);
        func_0x00f78a20(0x3d39b60);
        func_0x00f78a20(0x3d1d768);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d42d70);
        bRam0000000003eb4b7d = 1;
      }
      *(undefined8 *)((long)register0x00000008 + -400) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x19c) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1a4) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
      if (iVar4 < 0) goto LAB_014cf1b8;
      lVar9 = func_0x00f78aec(/*System.Collections.Generic.List<ValueTuple<float, Vector3>>_TypeInfo*/ uRam0000000003d1d768);
      /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$.ctor*/ func_0x023669cc(lVar9,uRam0000000003d39b40);
      uVar7 = extraout_x1;
      if (iVar4 != 0x7fffffff) goto LAB_014cee54;
LAB_014cee4c:
      if (lVar9 == 0) {
        do {
          iVar4 = (int)uVar7;
          func_0x00f78af4();
LAB_014cee54:
          iVar4 = iVar4 + 1;
          while( true ) {
            uVar20 = (undefined4)uVar30;
            uVar25 = (undefined4)uVar27;
            uVar32 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
            *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
            fVar33 = (float)uVar8;
            fVar22 = fVar33;
            fVar23 = fVar28;
            /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar34,fVar28,uVar8,uVar32,uVar25,uVar20,
                            (undefined1 *)((long)register0x00000008 + -0x1d8),0);
            fVar35 = *(float *)(lVar6 + 0x148);
            uVar7 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(lVar6 + 0x150),0);
            *(undefined8 *)((long)register0x00000008 + -0x1e8) =
                 *(undefined8 *)((long)register0x00000008 + -0x1d0);
            *(undefined8 *)((long)register0x00000008 + -0x1f0) =
                 *(undefined8 *)((long)register0x00000008 + -0x1d8);
            *(undefined8 *)((long)register0x00000008 + -0x1e0) =
                 *(undefined8 *)((long)register0x00000008 + -0x1c8);
            /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar35 + extraout_s0,(undefined1 *)((long)register0x00000008 + -0x1f0),
                            (undefined1 *)((long)register0x00000008 + -0x1c0),uVar7,1,0);
            fVar35 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
            fVar31 = *(float *)(lVar6 + 0x148) + extraout_s0;
            uVar27 = (ulong)(uint)fVar28;
            uVar30 = uVar8;
            /*Debug$$DrawLine*/ func_0x0162ee40(fVar34,uVar27,uVar8,fVar34 + fVar35 * fVar31,fVar28 + fVar23 * fVar31,
                            fVar33 + fVar22 * fVar31,0);
            uVar7 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30((undefined1 *)((long)register0x00000008 + -0x1c0),0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
            uVar32 = (undefined4)uVar30;
            if ((uVar5 & 1) != 0) goto LAB_014cee4c;
            fVar28 = (float)uVar27;
            /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0((undefined1 *)((long)register0x00000008 + -0x1c0),0);
            fVar22 = fVar28;
            uVar21 = /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08((undefined1 *)((long)register0x00000008 + -0x1c0),0);
            *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
            uVar27 = (ulong)uVar21;
            uVar30 = (ulong)(uint)fVar22;
            /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar28,uVar27,uVar30,uVar32,
                            (undefined1 *)((long)register0x00000008 + -0x1d8),uRam0000000003d42d70);
            if (lVar9 == 0) break;
            uVar27 = (ulong)*(uint *)((long)register0x00000008 + -0x1d4);
            uVar30 = (ulong)*(uint *)((long)register0x00000008 + -0x1d0);
            /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$Add*/ func_0x023676a4(*(undefined4 *)((long)register0x00000008 + -0x1d8),uVar27,uVar30,
                            *(undefined4 *)((long)register0x00000008 + -0x1cc),lVar9,
                            uRam0000000003d39b48);
            lVar17 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(lVar6);
            fVar22 = (float)uVar30;
            if (((lVar17 == 0) || (*(long *)(lVar6 + 0xf8) == 0)) ||
               (lVar13 = *(long *)(*(long *)(lVar6 + 0xf8) + 0x18), lVar13 == 0)) break;
            fVar28 = fVar28 + extraout_s0;
            fVar31 = fVar28 + *(float *)(lVar17 + 0x8c);
            fVar23 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar13,0);
            fVar35 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
            uVar27 = (ulong)(uint)(fVar23 * fVar35);
            uVar30 = (ulong)(uint)(fVar28 * fVar35);
            fVar34 = fVar34 + fVar23 * fVar35;
            fVar28 = fVar31 + fVar28 * fVar35;
            uVar8 = (ulong)(uint)(fVar33 + fVar22 * fVar35);
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_014cf018;
          }
        } while( true );
      }
LAB_014cf018:
      fVar28 = _UNK_033f83ec;
      uVar8 = 0;
      lVar6 = 0x20;
      lVar17 = 0x100000000;
      do {
        uVar25 = (undefined4)uVar30;
        uVar32 = (undefined4)uVar27;
        uVar5 = (ulong)*(uint *)(lVar9 + 0x18);
        if ((long)(int)(*(uint *)(lVar9 + 0x18) - 1) <= (long)uVar8) goto LAB_014cf0b0;
        if (uVar5 <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar5 = (ulong)*(uint *)(lVar9 + 0x18);
        }
        lVar13 = *(long *)(lVar9 + 0x10);
        fVar34 = *(float *)(lVar13 + lVar6);
        uVar8 = uVar8 + 1;
        if (uVar5 <= uVar8) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar13 = *(long *)(lVar9 + 0x10);
        }
        uVar25 = (undefined4)uVar30;
        uVar32 = (undefined4)uVar27;
        lVar1 = lVar17 >> 0x1c;
        lVar6 = lVar6 + 0x10;
        lVar17 = lVar17 + 0x100000000;
      } while (ABS(fVar34 - *(float *)(lVar13 + lVar1 + 0x20)) <= fVar28);
      /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$RemoveRange*/ func_0x02369000(lVar9,uVar8,*(int *)(lVar9 + 0x18) - (int)uVar8,uRam0000000003d39b50);
LAB_014cf0b0:
      uVar20 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(0,uVar20,uVar32,uVar25,(undefined1 *)((long)register0x00000008 + -400),
                      uRam0000000003d42d70);
      uVar21 = *(uint *)(lVar9 + 0x18);
      if (-1 < (int)(uVar21 - 1)) {
        *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
        iVar4 = uVar21 - 2;
        uVar7 = 0x3f800000;
        while( true ) {
          uVar24 = iVar4 + 1;
          fVar28 = (float)uVar7;
          if (1 < uVar24) {
            fVar28 = fVar28 + fVar28;
          }
          *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
          *(ulong *)((long)register0x00000008 + -0x200) = (ulong)(uint)fVar28;
          if (uVar21 <= uVar24) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            uVar21 = *(uint *)(lVar9 + 0x18);
          }
          lVar6 = *(long *)(lVar9 + 0x10);
          fVar28 = *(float *)(lVar6 + (ulong)uVar24 * 0x10 + 0x20);
          fVar34 = *(float *)((long)register0x00000008 + -400);
          if (uVar21 <= uVar24) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar6 = *(long *)(lVar9 + 0x10);
          }
          lVar6 = lVar6 + (ulong)uVar24 * 0x10;
          fVar22 = *(float *)(lVar6 + 0x2c);
          fVar35 = (float)*(undefined8 *)((long)register0x00000008 + -0x200);
          uVar7 = *(undefined8 *)(lVar6 + 0x24);
          fVar23 = (float)((ulong)uVar7 >> 0x20) * fVar35 +
                   (float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x18c) >> 0x20);
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
          /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar35 * fVar28 + fVar34,
                          CONCAT44(fVar23,(float)uVar7 * fVar35 +
                                          (float)*(undefined8 *)((long)register0x00000008 + -0x18c))
                          ,fVar23,fVar35 * fVar22 + *(float *)((long)register0x00000008 + -0x184),
                          (undefined1 *)((long)register0x00000008 + -0x1d8),uRam0000000003d42d70);
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x200);
          *(undefined8 *)((long)register0x00000008 + -0x188) =
               *(undefined8 *)((long)register0x00000008 + -0x1d0);
          *(undefined8 *)((long)register0x00000008 + -400) =
               *(undefined8 *)((long)register0x00000008 + -0x1d8);
          fVar28 = (float)*(undefined8 *)((long)register0x00000008 + -0x210) + (float)uVar7;
          if (iVar4 < 0) break;
          *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
          *(ulong *)((long)register0x00000008 + -0x210) = (ulong)(uint)fVar28;
          uVar21 = *(uint *)(lVar9 + 0x18);
          iVar4 = iVar4 + -1;
        }
        if (fVar28 != 0.0) {
          *(undefined1 *)extraout_x8 = 1;
          *(undefined2 *)((long)extraout_x8 + 1) = 0;
          *(undefined1 *)((long)extraout_x8 + 3) = 0;
          uVar7 = *(undefined8 *)((long)register0x00000008 + -400);
          *(ulong *)((long)extraout_x8 + 0xc) =
               CONCAT44((float)((ulong)*(undefined8 *)((long)register0x00000008 + -0x188) >> 0x20) /
                        fVar28,(float)*(undefined8 *)((long)register0x00000008 + -0x188) / fVar28);
          *(ulong *)((long)extraout_x8 + 4) =
               CONCAT44((float)((ulong)uVar7 >> 0x20) / fVar28,(float)uVar7 / fVar28);
          return;
        }
      }
LAB_014cf1b8:
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      *(undefined4 *)(extraout_x8 + 2) = 0;
      return;
    }
  }
  func_0x00f78af4();
code_r0x014e532c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x14e5330);
  (*pcVar3)();
code_r0x014e530c:
  func_0x00f78af4(uVar7,uVar7);
  goto code_r0x014e532c;
}



// ============================================================
// RVA: 0x14e4f40 | Atlas.Gameplay.Usables.RicochetProjectile.AdjustDir
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_RicochetProjectile__AdjustDir
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 *extraout_x8;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  float *pfVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  float extraout_s0;
  uint uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  ulong uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4c00 & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3c478);
    func_0x00f78a20(0x3d3c480);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c00 = 1;
  }
  uStack_58 = (ulong)(uint)uStack_58;
  lVar7 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_5,0);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x40) == 0)) ||
     (plVar15 = *(long **)(*(long *)(lVar7 + 0x40) + 0x28), plVar15 == (long *)0x0)) {
LAB_014e5324:
    func_0x00f78af4();
  }
  else {
    lVar7 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_014e5040;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
LAB_014e5040:
    plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
    if (plVar15 != (long *)0x0) {
code_r0x014e506c:
      lVar7 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x014e50b8;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014e50b8:
      uVar12 = (*(code *)*puVar8)(plVar15,puVar8[1]);
      if ((uVar12 & 1) != 0) {
        lVar7 = *plVar15;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x014e5114;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x014e5114:
        lVar7 = (*(code *)*puVar8)(plVar15,puVar8[1]);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014e532c;
        }
        if (*(long *)(lVar7 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x014e532c;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 0x18);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014e532c;
        }
        lVar16 = *(long *)(param_5 + 0x1c0);
        uVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
        if (lVar16 == 0) goto code_r0x014e530c;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar16,uVar9,uRam0000000003d3c478);
        goto code_r0x014e506c;
      }
      bVar2 = false;
      iVar4 = 0;
      lVar7 = 0;
      uStack_58 = _UNK_033f8598;
      if (plVar15 == (long *)0x0) goto code_r0x014e51d4;
code_r0x014e5174:
      lVar16 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar8 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x014e51c8;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014e51c8:
      (*(code *)*puVar8)(plVar15,puVar8[1]);
code_r0x014e51d4:
      while( true ) {
        if (lVar7 == 0) {
          if ((!bVar2) && (*(int *)((long)&uStack_58 + (long)iVar4 * 4) == 0x4e)) {
            uStack_58 = CONCAT44(iVar4,(uint)uStack_58);
          }
          lVar7 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(param_5);
          if (lVar7 != 0) {
            uVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
            fVar25 = *(float *)(param_5 + 0xe8);
            lVar7 = /*Atlas.Gameplay.SpatialUtils$$GetClosestToTransform*/ func_0x014fd934(*(undefined4 *)(param_5 + 0xe0),*(undefined4 *)(param_5 + 0xe4),
                                    fVar25,*(undefined4 *)(param_5 + 0x1a0),uVar9,
                                    *(undefined8 *)(param_5 + 0x1c0),1,0,0,0);
            if (*(long *)(param_5 + 0x1c0) != 0) {
              /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_5 + 0x1c0),uRam0000000003d3c480);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
              if (iVar4 == 0) {
                return;
              }
              if (lVar7 != 0) {
                fVar20 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0);
                fVar29 = fVar25;
                lVar7 = Atlas_Gameplay_Usables_RicochetProjectile__get_RicochetBehaviour(param_5);
                if ((lVar7 != 0) && (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0), lVar7 != 0)) {
                  fVar21 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0);
                  pfVar14 = (float *)(param_5 + 0xe0);
                  *pfVar14 = fVar20 - fVar21;
                  *(float *)(param_5 + 0xe8) = fVar25 - fVar29;
                  *(undefined4 *)(param_5 + 0xe4) = 0;
                  fVar29 = *pfVar14;
                  fVar20 = *(float *)(param_5 + 0xe4);
                  fVar25 = *(float *)(param_5 + 0xe8);
                  if (cRam0000000003ca3505 == '\0') {
                    func_0x00f78a20(0x3d232c0,0);
                    cRam0000000003ca3505 = '\x01';
                  }
                  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  fVar25 = fVar25 * fVar25;
                  fVar29 = SQRT(fVar25 + fVar29 * fVar29 + fVar20 * fVar20);
                  if (fVar29 <= _UNK_033f8758) {
                    fVar20 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4();
                  }
                  else {
                    fVar20 = *pfVar14 / fVar29;
                    fVar25 = *(float *)(param_5 + 0xe4) / fVar29;
                    fVar29 = *(float *)(param_5 + 0xe8) / fVar29;
                  }
                  *pfVar14 = fVar20;
                  *(float *)(param_5 + 0xe4) = fVar25;
                  *(float *)(param_5 + 0xe8) = fVar29;
                  return;
                }
              }
            }
          }
          goto LAB_014e5324;
        }
        func_0x00f78ac0(lVar7,0);
        uVar18 = (uint)param_4;
        if (extraout_w1 != 1) break;
        plVar10 = (long *)___cxa_begin_catch();
        lVar7 = *plVar10;
        ___cxa_end_catch();
        iVar4 = -1;
        bVar2 = true;
        if (plVar15 != (long *)0x0) goto code_r0x014e5174;
      }
      plVar15 = (long *)__Unwind_Resume();
      uVar26 = (uint)param_3;
      uVar24 = (uint)param_2;
      uVar22 = *(undefined4 *)((long)plVar15 + 0x1a4);
      uVar9 = 1;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      if (plVar15[0x20] != 0) {
        uVar17 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar15[0x20],0,0);
        param_2 = (ulong)uVar17;
        param_3 = (ulong)uVar24;
        uVar18 = uVar26;
        Atlas_Gameplay_Usables_ProjectileUsable__RaycastProjectedNTimes
                  (&uStack_d8,uVar22,param_2,param_3,uVar26,plVar15,1);
        auVar31 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(plVar15);
        uVar9 = auVar31._8_8_;
        if (auVar31._0_8_ != 0) {
          uStack_b8 = uStack_d0;
          uStack_c0 = uStack_d8;
          uStack_b0 = uStack_c8;
          (**(code **)(*plVar15 + 0x438))
                    (uVar22,uVar17,uVar24,uVar26,*(undefined4 *)(auVar31._0_8_ + 0x8c),plVar15,
                     &uStack_c0,0,*(undefined8 *)(*plVar15 + 0x440));
          return;
        }
      }
      lVar7 = func_0x00f78af4(0,uVar9);
      iVar4 = (int)extraout_x1;
      uVar12 = (ulong)uVar18;
      fVar25 = (float)param_3;
      fVar29 = (float)param_2;
      if ((bRam0000000003eb4b7d & 1) == 0) {
        func_0x00f78a20(0x3d39b48);
        func_0x00f78a20(0x3d39b50);
        func_0x00f78a20(0x3d39b40);
        func_0x00f78a20(0x3d39b58);
        func_0x00f78a20(0x3d39b60);
        func_0x00f78a20(0x3d1d768);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d42d70);
        bRam0000000003eb4b7d = 1;
      }
      fStack_190 = 0.0;
      fStack_18c = 0.0;
      fStack_188 = 0.0;
      fStack_184 = 0.0;
      uStack_19c = 0;
      uStack_1a0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1a4 = 0;
      uStack_1b0 = 0;
      if (iVar4 < 0) goto LAB_014cf1b8;
      lVar16 = func_0x00f78aec(/*System.Collections.Generic.List<ValueTuple<float, Vector3>>_TypeInfo*/ uRam0000000003d1d768);
      /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$.ctor*/ func_0x023669cc(lVar16,uRam0000000003d39b40);
      uVar9 = extraout_x1;
      if (iVar4 != 0x7fffffff) goto LAB_014cee54;
LAB_014cee4c:
      if (lVar16 == 0) {
        do {
          iVar4 = (int)uVar9;
          func_0x00f78af4();
LAB_014cee54:
          iVar4 = iVar4 + 1;
          while( true ) {
            uVar19 = (undefined4)param_3;
            uVar23 = (undefined4)param_2;
            uVar22 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
            uStack_1d8 = 0;
            uStack_1d0 = 0;
            uStack_1c8 = 0;
            fVar28 = (float)uVar12;
            fVar20 = fVar28;
            fVar21 = fVar25;
            /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar29,fVar25,uVar12,uVar22,uVar23,uVar19,&uStack_1d8,0);
            fVar30 = *(float *)(lVar7 + 0x148);
            uVar9 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(lVar7 + 0x150),0);
            uStack_1e8 = uStack_1d0;
            uStack_1f0 = uStack_1d8;
            uStack_1e0 = uStack_1c8;
            /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar30 + extraout_s0,&uStack_1f0,&uStack_1c0,uVar9,1,0);
            fVar30 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
            fVar27 = *(float *)(lVar7 + 0x148) + extraout_s0;
            param_2 = (ulong)(uint)fVar25;
            param_3 = uVar12;
            /*Debug$$DrawLine*/ func_0x0162ee40(fVar29,param_2,uVar12,fVar29 + fVar30 * fVar27,fVar25 + fVar21 * fVar27,
                            fVar28 + fVar20 * fVar27,0);
            uVar9 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_1c0,0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,0,0);
            uVar22 = (undefined4)param_3;
            if ((uVar5 & 1) != 0) goto LAB_014cee4c;
            fVar25 = (float)param_2;
            /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&uStack_1c0,0);
            fVar20 = fVar25;
            uVar18 = /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&uStack_1c0,0);
            uStack_1d8 = 0;
            uStack_1d0 = 0;
            param_2 = (ulong)uVar18;
            param_3 = (ulong)(uint)fVar20;
            /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar25,param_2,param_3,uVar22,&uStack_1d8,uRam0000000003d42d70);
            if (lVar16 == 0) break;
            param_2 = uStack_1d8 >> 0x20;
            param_3 = uStack_1d0 & 0xffffffff;
            /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$Add*/ func_0x023676a4(uStack_1d8 & 0xffffffff,param_2,param_3,uStack_1d0._4_4_,lVar16,
                            uRam0000000003d39b48);
            lVar6 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(lVar7);
            fVar20 = (float)param_3;
            if (((lVar6 == 0) || (*(long *)(lVar7 + 0xf8) == 0)) ||
               (lVar11 = *(long *)(*(long *)(lVar7 + 0xf8) + 0x18), lVar11 == 0)) break;
            fVar25 = fVar25 + extraout_s0;
            fVar27 = fVar25 + *(float *)(lVar6 + 0x8c);
            fVar21 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar11,0);
            fVar30 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
            param_2 = (ulong)(uint)(fVar21 * fVar30);
            param_3 = (ulong)(uint)(fVar25 * fVar30);
            fVar29 = fVar29 + fVar21 * fVar30;
            fVar25 = fVar27 + fVar25 * fVar30;
            uVar12 = (ulong)(uint)(fVar28 + fVar20 * fVar30);
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) goto LAB_014cf018;
          }
        } while( true );
      }
LAB_014cf018:
      fVar25 = _UNK_033f83ec;
      uVar12 = 0;
      lVar7 = 0x20;
      lVar6 = 0x100000000;
      do {
        uVar23 = (undefined4)param_3;
        uVar22 = (undefined4)param_2;
        uVar5 = (ulong)*(uint *)(lVar16 + 0x18);
        if ((long)(int)(*(uint *)(lVar16 + 0x18) - 1) <= (long)uVar12) goto LAB_014cf0b0;
        if (uVar5 <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar5 = (ulong)*(uint *)(lVar16 + 0x18);
        }
        lVar11 = *(long *)(lVar16 + 0x10);
        fVar29 = *(float *)(lVar11 + lVar7);
        uVar12 = uVar12 + 1;
        if (uVar5 <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar11 = *(long *)(lVar16 + 0x10);
        }
        uVar23 = (undefined4)param_3;
        uVar22 = (undefined4)param_2;
        lVar1 = lVar6 >> 0x1c;
        lVar7 = lVar7 + 0x10;
        lVar6 = lVar6 + 0x100000000;
      } while (ABS(fVar29 - *(float *)(lVar11 + lVar1 + 0x20)) <= fVar25);
      /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$RemoveRange*/ func_0x02369000(lVar16,uVar12,*(int *)(lVar16 + 0x18) - (int)uVar12,uRam0000000003d39b50);
LAB_014cf0b0:
      uVar19 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
      /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(0,uVar19,uVar22,uVar23,&fStack_190,uRam0000000003d42d70);
      uVar18 = *(uint *)(lVar16 + 0x18);
      if (-1 < (int)(uVar18 - 1)) {
        fVar29 = 0.0;
        iVar4 = uVar18 - 2;
        fVar25 = 1.0;
        while( true ) {
          uVar24 = iVar4 + 1;
          if (1 < uVar24) {
            fVar25 = fVar25 + fVar25;
          }
          if (uVar18 <= uVar24) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            uVar18 = *(uint *)(lVar16 + 0x18);
          }
          fVar20 = fStack_190;
          lVar7 = *(long *)(lVar16 + 0x10);
          fVar21 = *(float *)(lVar7 + (ulong)uVar24 * 0x10 + 0x20);
          if (uVar18 <= uVar24) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar7 = *(long *)(lVar16 + 0x10);
          }
          lVar7 = lVar7 + (ulong)uVar24 * 0x10;
          uVar9 = *(undefined8 *)(lVar7 + 0x24);
          fVar30 = (float)((ulong)uVar9 >> 0x20) * fVar25 + fStack_188;
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar25 * fVar21 + fVar20,
                          CONCAT44(fVar30,(float)uVar9 * fVar25 + fStack_18c),fVar30,
                          fVar25 * *(float *)(lVar7 + 0x2c) + fStack_184,&uStack_1d8,
                          uRam0000000003d42d70);
          fStack_188 = (float)uStack_1d0;
          fStack_184 = (float)(uStack_1d0 >> 0x20);
          fStack_190 = (float)uStack_1d8;
          fStack_18c = (float)(uStack_1d8 >> 0x20);
          fVar29 = fVar29 + fVar25;
          if (iVar4 < 0) break;
          uVar18 = *(uint *)(lVar16 + 0x18);
          iVar4 = iVar4 + -1;
        }
        if (fVar29 != 0.0) {
          *(undefined1 *)extraout_x8 = 1;
          *(undefined2 *)((long)extraout_x8 + 1) = 0;
          *(undefined1 *)((long)extraout_x8 + 3) = 0;
          *(ulong *)((long)extraout_x8 + 0xc) = CONCAT44(fStack_184 / fVar29,fStack_188 / fVar29);
          *(ulong *)((long)extraout_x8 + 4) = CONCAT44(fStack_18c / fVar29,fStack_190 / fVar29);
          return;
        }
      }
LAB_014cf1b8:
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      *(undefined4 *)(extraout_x8 + 2) = 0;
      return;
    }
  }
  func_0x00f78af4();
code_r0x014e532c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x14e5330);
  (*pcVar3)();
code_r0x014e530c:
  func_0x00f78af4(uVar9,uVar9);
  goto code_r0x014e532c;
}



// ============================================================
// RVA: 0x14e5380 | Atlas.Gameplay.Usables.RicochetProjectile.ForceToFloor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_RicochetProjectile__ForceToFloor
               (undefined1 param_1 [16],ulong param_2,ulong param_3,uint param_4,long *param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  float extraout_s0;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uVar14 = *(undefined4 *)((long)param_5 + 0x1a4);
  uVar7 = 1;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uVar17 = param_2;
  uVar19 = param_3;
  if (param_5[0x20] != 0) {
    uVar11 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(param_5[0x20],0,0);
    uVar17 = (ulong)uVar11;
    uVar19 = param_2 & 0xffffffff;
    param_4 = (uint)param_3;
    Atlas_Gameplay_Usables_ProjectileUsable__RaycastProjectedNTimes
              (&uStack_78,uVar14,uVar17,uVar19,param_3 & 0xffffffff,param_5,1);
    auVar24 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(param_5);
    uVar7 = auVar24._8_8_;
    if (auVar24._0_8_ != 0) {
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      uStack_50 = uStack_68;
      (**(code **)(*param_5 + 0x438))
                (uVar14,uVar11,param_2 & 0xffffffff,param_3 & 0xffffffff,
                 *(undefined4 *)(auVar24._0_8_ + 0x8c),param_5,&uStack_60,0,
                 *(undefined8 *)(*param_5 + 0x440));
      return;
    }
  }
  lVar3 = func_0x00f78af4(0,uVar7);
  iVar10 = (int)extraout_x1;
  uVar9 = (ulong)param_4;
  fVar16 = (float)uVar19;
  fVar22 = (float)uVar17;
  if ((bRam0000000003eb4b7d & 1) == 0) {
    func_0x00f78a20(0x3d39b48);
    func_0x00f78a20(0x3d39b50);
    func_0x00f78a20(0x3d39b40);
    func_0x00f78a20(0x3d39b58);
    func_0x00f78a20(0x3d39b60);
    func_0x00f78a20(0x3d1d768);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d42d70);
    bRam0000000003eb4b7d = 1;
  }
  fStack_130 = 0.0;
  fStack_12c = 0.0;
  fStack_128 = 0.0;
  fStack_124 = 0.0;
  uStack_13c = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  if (-1 < iVar10) {
    lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<ValueTuple<float, Vector3>>_TypeInfo*/ uRam0000000003d1d768);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$.ctor*/ func_0x023669cc(lVar4,uRam0000000003d39b40);
    uVar7 = extraout_x1;
    if (iVar10 != 0x7fffffff) goto LAB_014cee54;
LAB_014cee4c:
    if (lVar4 == 0) {
      do {
        iVar10 = (int)uVar7;
        func_0x00f78af4();
LAB_014cee54:
        iVar10 = iVar10 + 1;
        while( true ) {
          uVar13 = (undefined4)uVar19;
          uVar15 = (undefined4)uVar17;
          uVar14 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          uStack_178 = 0;
          uStack_170 = 0;
          uStack_168 = 0;
          fVar21 = (float)uVar9;
          fVar18 = fVar21;
          fVar12 = fVar16;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar22,fVar16,uVar9,uVar14,uVar15,uVar13,&uStack_178,0);
          fVar23 = *(float *)(lVar3 + 0x148);
          uVar7 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(lVar3 + 0x150),0);
          uStack_188 = uStack_170;
          uStack_190 = uStack_178;
          uStack_180 = uStack_168;
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar23 + extraout_s0,&uStack_190,&uStack_160,uVar7,1,0);
          fVar23 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          fVar20 = *(float *)(lVar3 + 0x148) + extraout_s0;
          uVar17 = (ulong)(uint)fVar16;
          uVar19 = uVar9;
          /*Debug$$DrawLine*/ func_0x0162ee40(fVar22,uVar17,uVar9,fVar22 + fVar23 * fVar20,fVar16 + fVar12 * fVar20,
                          fVar21 + fVar18 * fVar20,0);
          uVar7 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_160,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
          uVar14 = (undefined4)uVar19;
          if ((uVar5 & 1) != 0) goto LAB_014cee4c;
          fVar16 = (float)uVar17;
          /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&uStack_160,0);
          fVar18 = fVar16;
          uVar11 = /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&uStack_160,0);
          uStack_178 = 0;
          uStack_170 = 0;
          uVar17 = (ulong)uVar11;
          uVar19 = (ulong)(uint)fVar18;
          /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar16,uVar17,uVar19,uVar14,&uStack_178,uRam0000000003d42d70);
          if (lVar4 == 0) break;
          uVar17 = uStack_178 >> 0x20;
          uVar19 = uStack_170 & 0xffffffff;
          /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$Add*/ func_0x023676a4(uStack_178 & 0xffffffff,uVar17,uVar19,uStack_170._4_4_,lVar4,
                          uRam0000000003d39b48);
          lVar6 = Atlas_Gameplay_Usables_ProjectileUsable__get_ProjectileUsableDefinition(lVar3);
          fVar18 = (float)uVar19;
          if (((lVar6 == 0) || (*(long *)(lVar3 + 0xf8) == 0)) ||
             (lVar8 = *(long *)(*(long *)(lVar3 + 0xf8) + 0x18), lVar8 == 0)) break;
          fVar16 = fVar16 + extraout_s0;
          fVar20 = fVar16 + *(float *)(lVar6 + 0x8c);
          fVar12 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar8,0);
          fVar23 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
          uVar17 = (ulong)(uint)(fVar12 * fVar23);
          uVar19 = (ulong)(uint)(fVar16 * fVar23);
          fVar22 = fVar22 + fVar12 * fVar23;
          fVar16 = fVar20 + fVar16 * fVar23;
          uVar9 = (ulong)(uint)(fVar21 + fVar18 * fVar23);
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) goto LAB_014cf018;
        }
      } while( true );
    }
LAB_014cf018:
    fVar16 = _UNK_033f83ec;
    uVar9 = 0;
    lVar3 = 0x20;
    lVar6 = 0x100000000;
    do {
      uVar15 = (undefined4)uVar19;
      uVar14 = (undefined4)uVar17;
      uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
      if ((long)(int)(*(uint *)(lVar4 + 0x18) - 1) <= (long)uVar9) goto LAB_014cf0b0;
      if (uVar5 <= uVar9) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
      }
      lVar8 = *(long *)(lVar4 + 0x10);
      fVar22 = *(float *)(lVar8 + lVar3);
      uVar9 = uVar9 + 1;
      if (uVar5 <= uVar9) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar8 = *(long *)(lVar4 + 0x10);
      }
      uVar15 = (undefined4)uVar19;
      uVar14 = (undefined4)uVar17;
      lVar1 = lVar6 >> 0x1c;
      lVar3 = lVar3 + 0x10;
      lVar6 = lVar6 + 0x100000000;
    } while (ABS(fVar22 - *(float *)(lVar8 + lVar1 + 0x20)) <= fVar16);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$RemoveRange*/ func_0x02369000(lVar4,uVar9,*(int *)(lVar4 + 0x18) - (int)uVar9,uRam0000000003d39b50);
LAB_014cf0b0:
    uVar13 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(0,uVar13,uVar14,uVar15,&fStack_130,uRam0000000003d42d70);
    uVar11 = *(uint *)(lVar4 + 0x18);
    if (-1 < (int)(uVar11 - 1)) {
      fVar22 = 0.0;
      iVar10 = uVar11 - 2;
      fVar16 = 1.0;
      while( true ) {
        uVar2 = iVar10 + 1;
        if (1 < uVar2) {
          fVar16 = fVar16 + fVar16;
        }
        if (uVar11 <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar11 = *(uint *)(lVar4 + 0x18);
        }
        fVar18 = fStack_130;
        lVar3 = *(long *)(lVar4 + 0x10);
        fVar12 = *(float *)(lVar3 + (ulong)uVar2 * 0x10 + 0x20);
        if (uVar11 <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar3 = *(long *)(lVar4 + 0x10);
        }
        lVar3 = lVar3 + (ulong)uVar2 * 0x10;
        uVar7 = *(undefined8 *)(lVar3 + 0x24);
        fVar23 = (float)((ulong)uVar7 >> 0x20) * fVar16 + fStack_128;
        uStack_178 = 0;
        uStack_170 = 0;
        /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar16 * fVar12 + fVar18,CONCAT44(fVar23,(float)uVar7 * fVar16 + fStack_12c)
                        ,fVar23,fVar16 * *(float *)(lVar3 + 0x2c) + fStack_124,&uStack_178,
                        uRam0000000003d42d70);
        fStack_128 = (float)uStack_170;
        fStack_124 = (float)(uStack_170 >> 0x20);
        fStack_130 = (float)uStack_178;
        fStack_12c = (float)(uStack_178 >> 0x20);
        fVar22 = fVar22 + fVar16;
        if (iVar10 < 0) break;
        uVar11 = *(uint *)(lVar4 + 0x18);
        iVar10 = iVar10 + -1;
      }
      if (fVar22 != 0.0) {
        *(undefined1 *)extraout_x8 = 1;
        *(undefined2 *)((long)extraout_x8 + 1) = 0;
        *(undefined1 *)((long)extraout_x8 + 3) = 0;
        *(ulong *)((long)extraout_x8 + 0xc) = CONCAT44(fStack_124 / fVar22,fStack_128 / fVar22);
        *(ulong *)((long)extraout_x8 + 4) = CONCAT44(fStack_12c / fVar22,fStack_130 / fVar22);
        return;
      }
    }
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  *(undefined4 *)(extraout_x8 + 2) = 0;
  return;
}



// ============================================================
// RVA: 0x14e5390 | Atlas.Gameplay.Usables.RicochetProjectile..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_RicochetProjectile___ctor(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined1 *)(param_1 + 0x12d) = 1;
  *(undefined8 *)(param_1 + 0x198) = _UNK_033f8520;
  return;
}



