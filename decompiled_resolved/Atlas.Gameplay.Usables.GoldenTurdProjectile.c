// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.GoldenTurdProjectile

// ============================================================
// RVA: 0x15b3cb4 | Atlas.Gameplay.Usables.GoldenTurdProjectile.get_GoldenTurdProjectileDefinition
// ============================================================

void Atlas_Gameplay_Usables_GoldenTurdProjectile__get_GoldenTurdProjectileDefinition(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb526f & 1) == 0) {
    func_0x00f78a20(0x3d21c18);
    bRam0000000003eb526f = 1;
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    lVar1 = **(long **)(param_1 + 0x30);
    if ((*(byte *)(lVar1 + 300) < *(byte *)(/*Atlas.Definitions.GoldenTurdProjectileDefinition_TypeInfo*/ lRam0000000003d21c18 + 300)) ||
       (*(long *)(*(long *)(lVar1 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.GoldenTurdProjectileDefinition_TypeInfo*/ lRam0000000003d21c18 + 300) * 8 + -8) !=
        /*Atlas.Definitions.GoldenTurdProjectileDefinition_TypeInfo*/ lRam0000000003d21c18)) {
      lVar1 = func_0x00f78e5c();
      if ((bRam0000000003eb5270 & 1) == 0) {
        func_0x00f78a20(0x3d21c10);
        bRam0000000003eb5270 = 1;
      }
      if (*(long **)(lVar1 + 0x48) != (long *)0x0) {
        lVar1 = **(long **)(lVar1 + 0x48);
        if ((*(byte *)(lVar1 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.GoldenTurdProjectileBehaviour_TypeInfo*/ lRam0000000003d21c10 + 300)) ||
           (*(long *)(*(long *)(lVar1 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.GoldenTurdProjectileBehaviour_TypeInfo*/ lRam0000000003d21c10 + 300) * 8 + -8
                     ) != /*Atlas.Gameplay.Usables.GoldenTurdProjectileBehaviour_TypeInfo*/ lRam0000000003d21c10)) {
          lVar1 = func_0x00f78e5c();
          if (*(char *)(lVar1 + 0x19) != '\0') {
            *(undefined1 *)(lVar1 + 0x1b8) = 0;
            *(undefined8 *)(lVar1 + 0x1bc) = 0;
            *(undefined4 *)(lVar1 + 0x1c4) = 0;
            *(undefined4 *)(lVar1 + 0x1a0) = 0;
            *(undefined1 *)(lVar1 + 0x1b0) = 0;
            *(undefined4 *)(lVar1 + 0x1b4) = 0xbf800000;
            *(undefined8 *)(lVar1 + 0x100) = 0;
          }
          if (*(char *)(lVar1 + 0x19) != '\0') {
            /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(lVar1,0);
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
      }
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x15b3d30 | Atlas.Gameplay.Usables.GoldenTurdProjectile.get_GoldenTurdProjectileBehaviour
// ============================================================

void Atlas_Gameplay_Usables_GoldenTurdProjectile__get_GoldenTurdProjectileBehaviour(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb5270 & 1) == 0) {
    func_0x00f78a20(0x3d21c10);
    bRam0000000003eb5270 = 1;
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    lVar1 = **(long **)(param_1 + 0x48);
    if ((*(byte *)(lVar1 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.GoldenTurdProjectileBehaviour_TypeInfo*/ lRam0000000003d21c10 + 300)) ||
       (*(long *)(*(long *)(lVar1 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.GoldenTurdProjectileBehaviour_TypeInfo*/ lRam0000000003d21c10 + 300) * 8 + -8) !=
        /*Atlas.Gameplay.Usables.GoldenTurdProjectileBehaviour_TypeInfo*/ lRam0000000003d21c10)) {
      lVar1 = func_0x00f78e5c();
      if (*(char *)(lVar1 + 0x19) != '\0') {
        *(undefined1 *)(lVar1 + 0x1b8) = 0;
        *(undefined8 *)(lVar1 + 0x1bc) = 0;
        *(undefined4 *)(lVar1 + 0x1c4) = 0;
        *(undefined4 *)(lVar1 + 0x1a0) = 0;
        *(undefined1 *)(lVar1 + 0x1b0) = 0;
        *(undefined4 *)(lVar1 + 0x1b4) = 0xbf800000;
        *(undefined8 *)(lVar1 + 0x100) = 0;
      }
      if (*(char *)(lVar1 + 0x19) != '\0') {
        /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(lVar1,0);
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
  }
  return;
}



// ============================================================
// RVA: 0x15b3dac | Atlas.Gameplay.Usables.GoldenTurdProjectile.DeInit
// ============================================================

void Atlas_Gameplay_Usables_GoldenTurdProjectile__DeInit(long param_1)

{
  if (*(char *)(param_1 + 0x19) != '\0') {
    *(undefined1 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1bc) = 0;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0xbf800000;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(param_1,0);
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
// RVA: 0x15b3de0 | Atlas.Gameplay.Usables.GoldenTurdProjectile.OnTearDownParamsInternal
// ============================================================

void Atlas_Gameplay_Usables_GoldenTurdProjectile__OnTearDownParamsInternal(long param_1)

{
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x100) = 0;
  return;
}



// ============================================================
// RVA: 0x15b3e08 | Atlas.Gameplay.Usables.GoldenTurdProjectile.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x015b4064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b4068) */
/* WARNING: Removing unreachable block (ram,0x014cd6ec) */
/* WARNING: Removing unreachable block (ram,0x01570398) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
/* WARNING: Removing unreachable block (ram,0x01523890) */
/* WARNING: Removing unreachable block (ram,0x015238ac) */
/* WARNING: Removing unreachable block (ram,0x015238c0) */
/* WARNING: Removing unreachable block (ram,0x015238c8) */
/* WARNING: Removing unreachable block (ram,0x015238d0) */
/* WARNING: Removing unreachable block (ram,0x015238e8) */
/* WARNING: Removing unreachable block (ram,0x015238f0) */
/* WARNING: Removing unreachable block (ram,0x01523908) */
/* WARNING: Removing unreachable block (ram,0x01523910) */
/* WARNING: Removing unreachable block (ram,0x01523938) */
/* WARNING: Removing unreachable block (ram,0x01523950) */
/* WARNING: Removing unreachable block (ram,0x01523958) */
/* WARNING: Removing unreachable block (ram,0x0152395c) */
/* WARNING: Removing unreachable block (ram,0x01523970) */
/* WARNING: Removing unreachable block (ram,0x01523974) */
/* WARNING: Removing unreachable block (ram,0x01523980) */
/* WARNING: Removing unreachable block (ram,0x015239b0) */
/* WARNING: Removing unreachable block (ram,0x015239c4) */
/* WARNING: Removing unreachable block (ram,0x01523a00) */
/* WARNING: Removing unreachable block (ram,0x01523a2c) */
/* WARNING: Removing unreachable block (ram,0x01523a44) */
/* WARNING: Removing unreachable block (ram,0x01523a48) */
/* WARNING: Removing unreachable block (ram,0x01523a64) */
/* WARNING: Removing unreachable block (ram,0x01523a6c) */
/* WARNING: Removing unreachable block (ram,0x01523a70) */
/* WARNING: Removing unreachable block (ram,0x01523a80) */
/* WARNING: Removing unreachable block (ram,0x01523988) */
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
/* WARNING: Removing unreachable block (ram,0x01523ba4) */
/* WARNING: Removing unreachable block (ram,0x01523ba8) */
/* WARNING: Removing unreachable block (ram,0x01523bd0) */
/* WARNING: Removing unreachable block (ram,0x01523c2c) */
/* WARNING: Removing unreachable block (ram,0x01523c40) */
/* WARNING: Removing unreachable block (ram,0x01523c48) */
/* WARNING: Removing unreachable block (ram,0x01523c64) */
/* WARNING: Removing unreachable block (ram,0x01523c6c) */
/* WARNING: Removing unreachable block (ram,0x01523c74) */
/* WARNING: Removing unreachable block (ram,0x01523c84) */
/* WARNING: Removing unreachable block (ram,0x01523c8c) */
/* WARNING: Removing unreachable block (ram,0x01523ca0) */
/* WARNING: Removing unreachable block (ram,0x01523cb0) */
/* WARNING: Removing unreachable block (ram,0x01523db0) */
/* WARNING: Removing unreachable block (ram,0x01523dc4) */
/* WARNING: Removing unreachable block (ram,0x01523dcc) */
/* WARNING: Removing unreachable block (ram,0x01523df0) */
/* WARNING: Removing unreachable block (ram,0x01523dfc) */
/* WARNING: Removing unreachable block (ram,0x01523cb8) */
/* WARNING: Removing unreachable block (ram,0x01523cec) */
/* WARNING: Removing unreachable block (ram,0x01523d84) */
/* WARNING: Removing unreachable block (ram,0x01523d98) */
/* WARNING: Removing unreachable block (ram,0x01523cfc) */
/* WARNING: Removing unreachable block (ram,0x01523d34) */
/* WARNING: Removing unreachable block (ram,0x01523d48) */
/* WARNING: Removing unreachable block (ram,0x01523d70) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */
/* WARNING: Removing unreachable block (ram,0x015b3fcc) */
/* WARNING: Removing unreachable block (ram,0x015b3fd4) */
/* WARNING: Removing unreachable block (ram,0x015b3fdc) */
/* WARNING: Removing unreachable block (ram,0x015b3fe8) */
/* WARNING: Removing unreachable block (ram,0x015b3ffc) */
/* WARNING: Removing unreachable block (ram,0x015b400c) */

void Atlas_Gameplay_Usables_GoldenTurdProjectile__OnExitPool
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  int extraout_w1;
  undefined4 uVar4;
  undefined4 extraout_s0;
  
  if ((bRam0000000003eb5271 & 1) == 0) {
    func_0x00f78a20(0x3d24b58);
    func_0x00f78a20(0x3d41598);
    func_0x00f78a20(0x3d1eaf8);
    func_0x00f78a20(0x3d416c0);
    bRam0000000003eb5271 = 1;
  }
  /*Atlas.Gameplay.Usables.ProjectileUsable$$OnExitPool*/ func_0x014cd5f8(param_4,param_5,param_6,0,0,0,0);
  if ((param_4[9] != 0) && (lVar1 = *(long *)(param_4[9] + 0x30), lVar1 != 0)) {
    /*Core.Services.Replicator$$EnableReducedMode*/ func_0x0167f228(lVar1,0);
    if (param_4[0x1f] != 0) {
      lVar1 = *(long *)(param_4[0x1f] + 0x20);
      uVar2 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
      /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar2,param_4,*(undefined8 *)(*param_4 + 0x410),uRam0000000003d41598);
      if (lVar1 != 0) {
        /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar1,uVar2,uRam0000000003d416c0);
        if (param_4[0x1f] != 0) {
          lVar1 = *(long *)(param_4[0x1f] + 0x28);
          uVar2 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
          /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(uVar2,param_4,*(undefined8 *)(*param_4 + 0x420),uRam0000000003d41598);
          if (lVar1 != 0) {
            /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(lVar1,uVar2,uRam0000000003d416c0);
            if ((param_4[0x1f] != 0) &&
               (plVar3 = *(long **)(param_4[0x1f] + 0x10), plVar3 != (long *)0x0)) {
              if ((*(byte *)(*plVar3 + 300) < *(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300)) ||
                 (*(long *)(*(long *)(*plVar3 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) * 8 + -8) !=
                  /*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58)) goto code_r0x015b4030;
              uVar4 = /*UnityEngine.SphereCollider$$get_radius*/ func_0x032a4ba4(plVar3,0);
              *(undefined4 *)(param_4 + 0x34) = uVar4;
              if ((param_4[0x1f] != 0) && (lVar1 = *(long *)(param_4[0x1f] + 0x10), lVar1 != 0)) {
                lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0);
                param_4[0x20] = lVar1;
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x015b4030:
  lVar1 = func_0x00f78e5c();
  if (*(long *)(lVar1 + 200) != 0) {
    /*Core.Services.Replicator$$Clear*/ func_0x0167ff88(*(long *)(lVar1 + 200),0);
    lVar1 = *(long *)(lVar1 + 200);
    if (lVar1 != 0) {
      if (pcRam0000000003ebe9d8 == (code *)0x0) {
        pcRam0000000003ebe9d8 =
             (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ebe9d8)(lVar1,0);
      return;
    }
  }
  lVar1 = func_0x00f78af4();
  *(char *)(lVar1 + 0x1b8) = (char)extraout_w1;
  if (extraout_w1 != 0) {
    *(undefined4 *)(lVar1 + 0x1bc) = extraout_s0;
    *(undefined4 *)(lVar1 + 0x1c0) = param_2;
    *(undefined4 *)(lVar1 + 0x1c4) = param_3;
  }
  return;
}



// ============================================================
// RVA: 0x15b3e18 | Atlas.Gameplay.Usables.GoldenTurdProjectile.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x015b4064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b4068) */
/* WARNING: Removing unreachable block (ram,0x014cd6ec) */
/* WARNING: Removing unreachable block (ram,0x01570398) */
/* WARNING: Removing unreachable block (ram,0x01523e04) */
/* WARNING: Removing unreachable block (ram,0x01523890) */
/* WARNING: Removing unreachable block (ram,0x015238ac) */
/* WARNING: Removing unreachable block (ram,0x015238c0) */
/* WARNING: Removing unreachable block (ram,0x015238c8) */
/* WARNING: Removing unreachable block (ram,0x015238d0) */
/* WARNING: Removing unreachable block (ram,0x015238e8) */
/* WARNING: Removing unreachable block (ram,0x015238f0) */
/* WARNING: Removing unreachable block (ram,0x01523908) */
/* WARNING: Removing unreachable block (ram,0x01523910) */
/* WARNING: Removing unreachable block (ram,0x01523938) */
/* WARNING: Removing unreachable block (ram,0x01523950) */
/* WARNING: Removing unreachable block (ram,0x01523958) */
/* WARNING: Removing unreachable block (ram,0x0152395c) */
/* WARNING: Removing unreachable block (ram,0x01523970) */
/* WARNING: Removing unreachable block (ram,0x01523974) */
/* WARNING: Removing unreachable block (ram,0x01523980) */
/* WARNING: Removing unreachable block (ram,0x015239b0) */
/* WARNING: Removing unreachable block (ram,0x015239c4) */
/* WARNING: Removing unreachable block (ram,0x01523a00) */
/* WARNING: Removing unreachable block (ram,0x01523a2c) */
/* WARNING: Removing unreachable block (ram,0x01523a44) */
/* WARNING: Removing unreachable block (ram,0x01523a48) */
/* WARNING: Removing unreachable block (ram,0x01523a64) */
/* WARNING: Removing unreachable block (ram,0x01523a6c) */
/* WARNING: Removing unreachable block (ram,0x01523a70) */
/* WARNING: Removing unreachable block (ram,0x01523a80) */
/* WARNING: Removing unreachable block (ram,0x01523988) */
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
/* WARNING: Removing unreachable block (ram,0x01523ba4) */
/* WARNING: Removing unreachable block (ram,0x01523ba8) */
/* WARNING: Removing unreachable block (ram,0x01523bd0) */
/* WARNING: Removing unreachable block (ram,0x01523c2c) */
/* WARNING: Removing unreachable block (ram,0x01523c40) */
/* WARNING: Removing unreachable block (ram,0x01523c48) */
/* WARNING: Removing unreachable block (ram,0x01523c64) */
/* WARNING: Removing unreachable block (ram,0x01523c6c) */
/* WARNING: Removing unreachable block (ram,0x01523c74) */
/* WARNING: Removing unreachable block (ram,0x01523c84) */
/* WARNING: Removing unreachable block (ram,0x01523c8c) */
/* WARNING: Removing unreachable block (ram,0x01523ca0) */
/* WARNING: Removing unreachable block (ram,0x01523cb0) */
/* WARNING: Removing unreachable block (ram,0x01523db0) */
/* WARNING: Removing unreachable block (ram,0x01523dc4) */
/* WARNING: Removing unreachable block (ram,0x01523dcc) */
/* WARNING: Removing unreachable block (ram,0x01523df0) */
/* WARNING: Removing unreachable block (ram,0x01523dfc) */
/* WARNING: Removing unreachable block (ram,0x01523cb8) */
/* WARNING: Removing unreachable block (ram,0x01523cec) */
/* WARNING: Removing unreachable block (ram,0x01523d84) */
/* WARNING: Removing unreachable block (ram,0x01523d98) */
/* WARNING: Removing unreachable block (ram,0x01523cfc) */
/* WARNING: Removing unreachable block (ram,0x01523d34) */
/* WARNING: Removing unreachable block (ram,0x01523d48) */
/* WARNING: Removing unreachable block (ram,0x01523d70) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_GoldenTurdProjectile__OnExitPool
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,
               undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  long *plVar2;
  int extraout_w1;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined4 uVar4;
  undefined4 extraout_s0;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb5271 & 1) == 0) {
    func_0x00f78a20(0x3d24b58);
    func_0x00f78a20(0x3d41598);
    func_0x00f78a20(0x3d1eaf8);
    func_0x00f78a20(0x3d416c0);
    bRam0000000003eb5271 = 1;
  }
  /*Atlas.Gameplay.Usables.ProjectileUsable$$OnExitPool*/ func_0x014cd5f8(param_4,param_5,param_6,param_7,param_8,param_9,0);
  if ((param_4[9] == 0) || (lVar1 = *(long *)(param_4[9] + 0x30), lVar1 == 0)) {
LAB_015b402c:
    func_0x00f78af4();
  }
  else {
    /*Core.Services.Replicator$$EnableReducedMode*/ func_0x0167f228(lVar1,0);
    if (param_4[0x1f] == 0) goto LAB_015b402c;
    param_9 = *(long *)(param_4[0x1f] + 0x20);
    param_8 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(param_8,param_4,*(undefined8 *)(*param_4 + 0x410),uRam0000000003d41598);
    if (param_9 == 0) goto LAB_015b402c;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(param_9,param_8,uRam0000000003d416c0);
    if (param_4[0x1f] == 0) goto LAB_015b402c;
    param_9 = *(long *)(param_4[0x1f] + 0x28);
    param_8 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ContactPoint>_TypeInfo*/ uRam0000000003d1eaf8);
    /*UnityEngine.Events.UnityAction<ContactPoint>$$.ctor*/ func_0x01b7e0d4(param_8,param_4,*(undefined8 *)(*param_4 + 0x420),uRam0000000003d41598);
    if (param_9 == 0) goto LAB_015b402c;
    /*UnityEngine.Events.UnityEvent<ContactPoint>$$AddListener*/ func_0x01b831f0(param_9,param_8,uRam0000000003d416c0);
    if ((param_4[0x1f] == 0) || (plVar2 = *(long **)(param_4[0x1f] + 0x10), plVar2 == (long *)0x0))
    goto LAB_015b402c;
    if ((*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(/*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58 + 300) * 8 + -8)
        == /*UnityEngine.SphereCollider_TypeInfo*/ lRam0000000003d24b58)) {
      uVar4 = /*UnityEngine.SphereCollider$$get_radius*/ func_0x032a4ba4(plVar2,0);
      *(undefined4 *)(param_4 + 0x34) = uVar4;
      if ((param_4[0x1f] != 0) && (lVar1 = *(long *)(param_4[0x1f] + 0x10), lVar1 != 0)) {
        lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar1,0);
        param_4[0x20] = lVar1;
        if ((param_7 != 0) &&
           (((*(long *)(param_7 + 0x70) != 0 &&
             (lVar3 = *(long *)(*(long *)(param_7 + 0x70) + 0x90), lVar3 != 0)) &&
            (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)))) {
          lVar1 = /*Atlas.Audio.WeaponAudioManager$$Create*/ func_0x01530894(lVar3,2,lVar1,0);
          param_4[0x35] = lVar1;
          if (lVar1 != 0) {
            /*Atlas.Audio.WeaponAudio$$Pickup*/ func_0x0152fdf0(lVar1,0);
            lVar1 = param_4[0x19];
            if (lVar1 != 0) goto code_r0x0321a930;
          }
        }
      }
      goto LAB_015b402c;
    }
  }
  unaff_x22 = param_8;
  unaff_x21 = param_9;
  unaff_x19 = func_0x00f78e5c();
  puStack_58 = &Atlas_Gameplay_Usables_GoldenTurdProjectile__OnEnterPool;
  unaff_x29 = &puStack_60;
  lStack_70 = param_7;
  plStack_68 = param_4;
  puStack_60 = &stack0xfffffffffffffff0;
  if (*(long *)(unaff_x19 + 200) != 0) {
    /*Core.Services.Replicator$$Clear*/ func_0x0167ff88(*(long *)(unaff_x19 + 200),0);
    lVar1 = *(long *)(unaff_x19 + 200);
    if (lVar1 != 0) {
      unaff_x30 = &UNK_015b4068;
      register0x00000008 = (BADSPACEBASE *)&lStack_70;
      unaff_x20 = param_7;
code_r0x0321a930:
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      if (pcRam0000000003ebe9d8 == (code *)0x0) {
        pcRam0000000003ebe9d8 =
             (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ebe9d8)(lVar1,0);
      return;
    }
  }
  lVar1 = func_0x00f78af4();
  *(char *)(lVar1 + 0x1b8) = (char)extraout_w1;
  if (extraout_w1 != 0) {
    *(undefined4 *)(lVar1 + 0x1bc) = extraout_s0;
    *(undefined4 *)(lVar1 + 0x1c0) = param_2;
    *(undefined4 *)(lVar1 + 0x1c4) = param_3;
  }
  return;
}



// ============================================================
// RVA: 0x15b4034 | Atlas.Gameplay.Usables.GoldenTurdProjectile.OnEnterPool
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

void Atlas_Gameplay_Usables_GoldenTurdProjectile__OnEnterPool
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 extraout_s0;
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
  
  if (*(long *)(param_4 + 200) == 0) {
LAB_015b40a0:
    lVar3 = func_0x00f78af4();
    *(char *)(lVar3 + 0x1b8) = (char)extraout_w1_00;
    if (extraout_w1_00 != 0) {
      *(undefined4 *)(lVar3 + 0x1bc) = extraout_s0;
      *(undefined4 *)(lVar3 + 0x1c0) = param_2;
      *(undefined4 *)(lVar3 + 0x1c4) = param_3;
    }
    return;
  }
  /*Core.Services.Replicator$$Clear*/ func_0x0167ff88(*(long *)(param_4 + 200),0);
  if (*(long *)(param_4 + 200) == 0) goto LAB_015b40a0;
  uVar7 = 0;
  /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_4 + 200),0);
  *(undefined1 *)(param_4 + 0x1b8) = 0;
  *(undefined8 *)(param_4 + 0x1bc) = 0;
  *(undefined4 *)(param_4 + 0x1c4) = 0;
  *(undefined4 *)(param_4 + 0x1a0) = 0;
  *(undefined1 *)(param_4 + 0x1b0) = 0;
  *(undefined4 *)(param_4 + 0x1b4) = 0xbf800000;
  *(undefined8 *)(param_4 + 0x100) = 0;
  /*Atlas.Gameplay.Usables.ProjectileUsable$$OnTearDownParamsInternal*/ func_0x014cd4e4(param_4,0);
  Atlas_Gameplay_Usables_CollidableUsable__OnTearDownParamsInternal(param_4,0);
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(param_4 + 0x48) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_4 + 0x48) + 0x28), lVar3 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(param_4 + 100),*(undefined4 *)(param_4 + 0x68),
                    *(undefined4 *)(param_4 + 0x6c),lVar3,0);
    if ((*(long *)(param_4 + 0x48) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_4 + 0x48) + 0x28), lVar3 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(param_4 + 0x70),*(undefined4 *)(param_4 + 0x74),
                      *(undefined4 *)(param_4 + 0x78),*(undefined4 *)(param_4 + 0x7c),lVar3,0);
      if ((*(long *)(param_4 + 0x48) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_4 + 0x48) + 0x28), lVar3 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(param_4 + 0x80),*(undefined4 *)(param_4 + 0x84),
                        *(undefined4 *)(param_4 + 0x88),lVar3,0);
        *(undefined1 *)(param_4 + 0x19) = 0;
        *(undefined8 *)(param_4 + 0x98) = 0;
        *(undefined8 *)(param_4 + 0x90) = 0;
        *(undefined8 *)(param_4 + 0xa8) = 0;
        *(undefined8 *)(param_4 + 0xa0) = 0;
        *(undefined8 *)(param_4 + 0xb8) = 0;
        *(undefined8 *)(param_4 + 0xb0) = 0;
        if (*(long *)(param_4 + 0x48) != 0) {
          lVar3 = *(long *)(*(long *)(param_4 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0);
          if (iVar1 != 0) {
            if (lVar3 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar3 + 0x46) = 0;
            *(undefined4 *)(lVar3 + 0x40) = 0;
            *(undefined1 *)(lVar3 + 0x44) = 0;
          }
          if (*(long *)(param_4 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(param_4 + 0x48) + 0x40) = 0;
            *(undefined8 *)(param_4 + 0x48) = 0;
            *(undefined1 *)(param_4 + 0x18) = 0;
            *(undefined8 *)(param_4 + 0x28) = 0;
            *(undefined8 *)(param_4 + 0x30) = 0;
            *(undefined4 *)(param_4 + 0x40) = 0xbf800000;
            *(undefined2 *)(param_4 + 0x60) = 0;
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
  *(undefined8 *)(lVar3 + 0x48) = uVar7;
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
  uStack_a8 = uVar7;
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
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    uVar7 = *(undefined8 *)(lVar3 + 0x20);
    uVar13 = *(undefined8 *)(lVar3 + 0x38);
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar13;
    *(undefined8 *)(lVar10 + 0xa8) = uVar12;
    *(undefined8 *)(lVar10 + 0xa0) = uVar4;
    *(undefined8 *)(lVar10 + 0x98) = uVar7;
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
          while (uVar5 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_100,uRam0000000003d334f0), uVar7 = uStack_f0,
                (uVar5 & 1) != 0) {
            uStack_128 = uStack_e0;
            uStack_130 = uStack_e8;
            uStack_118 = uStack_d0;
            uStack_120 = uStack_d8;
            uStack_110 = uStack_c8;
            uStack_138 = uStack_f0;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
            uVar5 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_b8,uVar4,0);
            if ((uVar5 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_128;
              *(undefined8 *)(lVar10 + 0x98) = uStack_130;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_118;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_120;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_110;
              bVar8 = true;
            }
            uStack_138 = uVar7;
            uVar7 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_c0,uVar7,0);
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
    plVar6 = (long *)___cxa_begin_catch();
    lVar3 = *plVar6;
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
// RVA: 0x15b40a4 | Atlas.Gameplay.Usables.GoldenTurdProjectile.SetRemoteUseParams
// ============================================================

void Atlas_Gameplay_Usables_GoldenTurdProjectile__SetRemoteUseParams
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,int param_5)

{
  *(char *)(param_4 + 0x1b8) = (char)param_5;
  if (param_5 != 0) {
    *(undefined4 *)(param_4 + 0x1bc) = param_1;
    *(undefined4 *)(param_4 + 0x1c0) = param_2;
    *(undefined4 *)(param_4 + 0x1c4) = param_3;
  }
  return;
}



// ============================================================
// RVA: 0x15b40bc | Atlas.Gameplay.Usables.GoldenTurdProjectile.Use
// ============================================================

/* WARNING: Possible PIC construction at 0x0145b028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x0145b3ac) */
/* WARNING: Removing unreachable block (ram,0x0145b3b0) */
/* WARNING: Removing unreachable block (ram,0x0145b1dc) */
/* WARNING: Removing unreachable block (ram,0x0145b1e0) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145b02c) */
/* WARNING: Removing unreachable block (ram,0x0145b030) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Usables_GoldenTurdProjectile__Use
                (undefined1 param_1 [16],uint param_2,undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar12;
  long lVar13;
  long *plVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  long extraout_x1;
  long lVar18;
  ulong extraout_x1_00;
  long lVar19;
  int *piVar20;
  int *piVar21;
  long lVar22;
  int *piVar23;
  long unaff_x19;
  long lVar24;
  undefined8 unaff_x20;
  uint uVar25;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar26;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar27;
  undefined1 *unaff_x29;
  undefined *puVar28;
  undefined *unaff_x30;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  ulong extraout_d0;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  ulong uVar11;
  
  puVar27 = &stack0xfffffffffffffff0;
  /*Atlas.Gameplay.Usables.ProjectileUsable$$Use*/ func_0x014cd720(param_4,0);
  if (*(char *)(param_4 + 0x1b8) == '\0') {
LAB_015b4104:
    lVar16 = *(long *)(param_4 + 200);
    if (lVar16 == 0) goto LAB_015b415c;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(lVar16,*(char *)(lVar16 + 0x44) == '\0',0);
    /*Atlas.Gameplay.Usables.ProjectileUsable$$SetFreeFall*/ func_0x014cf408(param_4,1,0);
    if (*(long *)(param_4 + 0x1a8) == 0) goto LAB_015b415c;
    /*Atlas.Audio.WeaponAudio$$Use*/ func_0x0152fe60(*(long *)(param_4 + 0x1a8),0);
    if ((*(long *)(param_4 + 0x28) == 0) ||
       (lVar16 = *(long *)(*(long *)(param_4 + 0x28) + 0x70), lVar16 == 0)) goto LAB_015b415c;
  }
  else {
    lVar16 = Atlas_Gameplay_Usables_GoldenTurdProjectile__get_GoldenTurdProjectileBehaviour(param_4)
    ;
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x28) != 0)) {
      param_3 = *(undefined4 *)(param_4 + 0x1c4);
      param_2 = *(uint *)(param_4 + 0x1c0);
      /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(*(undefined4 *)(param_4 + 0x1bc),param_2,param_3,*(long *)(lVar16 + 0x28),0);
      goto LAB_015b4104;
    }
LAB_015b415c:
    unaff_x30 = &Atlas_Audio_KartAudio__ThrowWeaponSpeech;
    lVar16 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_4;
    unaff_x29 = puVar27;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  lVar17 = *(long *)(lVar16 + 0x90);
  if (lVar17 == 0) {
    uVar8 = func_0x00f78af4();
    if (*(char *)(uVar8 + 0x60) == '\0') {
      *(undefined1 *)(uVar8 + 0x60) = 1;
      *(undefined1 *)(uVar8 + 0x61) = 1;
      return uVar8;
    }
    return uVar8;
  }
  lVar19 = 0;
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x60);
  *(ulong *)((long)register0x00000008 + -0x60) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x58) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  puVar27 = (undefined1 *)((long)register0x00000008 + -0x10);
  if ((bRam0000000003eb47d9 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47d9 = 1;
  }
  if (lVar16 != 0) {
    uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar16,0);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar16,0);
    lVar19 = 0x28;
    if ((int)uVar8 == 0) {
      lVar19 = 0x30;
    }
    auVar35._8_8_ = *(long *)(lVar17 + lVar19);
    auVar35._0_8_ = lVar16;
    if (*(long *)(lVar17 + lVar19) == 0) {
      return uVar8;
    }
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
    lVar16 = *(long *)(lVar16 + 0xb8);
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar26 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar34._8_8_ = uVar26;
    auVar34._0_8_ = uVar9;
    lVar19 = 0xe;
    puVar28 = &UNK_0145b02c;
    goto code_r0x014fe3e8;
  }
  auVar34 = func_0x00f78af4();
  lVar16 = auVar34._8_8_;
  puVar6 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(ulong *)((long)register0x00000008 + -0xc0) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0xb8) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0x80) = lVar17;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar27;
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Atlas_Audio_AtlasAudioManager__SpeakPickupUsable;
  puVar27 = (undefined1 *)((long)register0x00000008 + -0x70);
  if ((bRam0000000003eb47da & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47da = 1;
  }
  if (lVar16 != 0) {
    uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar16,0);
    if ((int)uVar8 != 0) {
      uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar16,0);
      lVar17 = 0x28;
      if ((int)uVar8 == 0) {
        lVar17 = 0x30;
      }
      lVar17 = *(long *)(auVar34._0_8_ + lVar17);
      auVar35._8_8_ = lVar17;
      auVar35._0_8_ = lVar16;
      if (lVar17 != 0) {
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x360);
        lVar16 = *(long *)(lVar16 + 0xb8);
        uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
        uVar26 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x360);
        uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar34._8_8_ = uVar26;
        auVar34._0_8_ = uVar9;
        lVar19 = 0;
        puVar28 = &UNK_0145b1dc;
        goto code_r0x014fe3e8;
      }
    }
    return uVar8;
  }
  auVar35 = func_0x00f78af4();
  lVar17 = auVar35._8_8_;
  uVar10 = auVar35._0_8_;
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x130);
  *(ulong *)((long)register0x00000008 + -0x130) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x128) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x118) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0xe0) = auVar34._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
  *(undefined1 **)((long)register0x00000008 + -0xd0) = puVar27;
  *(undefined **)((long)register0x00000008 + -200) = &Atlas_Audio_AtlasAudioManager__SpeakCollision;
  puVar27 = (undefined1 *)((long)register0x00000008 + -0xd0);
  uVar8 = uVar10;
  lVar16 = lVar19;
  if ((bRam0000000003eb47db & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    uVar8 = func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47db = 1;
  }
  if ((int)lVar19 < 2) {
    return uVar8;
  }
  if (lVar17 != 0) {
    uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar17,0);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (*(float *)(uVar10 + 0x70) <= 3.0) {
      return uVar8;
    }
    uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar17,0);
    lVar16 = 0x28;
    if ((int)uVar8 == 0) {
      lVar16 = 0x30;
    }
    lVar16 = *(long *)(uVar10 + lVar16);
    if (lVar16 == 0) {
      *(undefined4 *)(uVar10 + 0x70) = 0;
      return uVar8;
    }
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar26 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x1d8);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar34._8_8_ = uVar26;
    auVar34._0_8_ = uVar9;
    puVar28 = &UNK_0145b3ac;
    lVar17 = lVar19;
    goto code_r0x014fe3e8;
  }
  auVar35 = func_0x00f78af4();
  lVar13 = auVar35._8_8_;
  lVar17 = auVar35._0_8_;
  *(ulong *)((long)register0x00000008 + -0x170) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x168) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x160) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0x158) = lVar19;
  *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
  *(ulong *)((long)register0x00000008 + -0x148) = uVar10;
  *(undefined1 **)((long)register0x00000008 + -0x140) = puVar27;
  *(undefined **)((long)register0x00000008 + -0x138) =
       &Atlas_Audio_AtlasAudioManager__SpeakWinOrLose;
  lVar19 = lVar16;
  if ((bRam0000000003eb47dd & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47dd = 1;
  }
  if (lVar13 == 0) {
    uVar10 = func_0x00f78af4();
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x1d0);
    *(ulong *)((long)register0x00000008 + -0x1d0) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x1c8) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x1c0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x1b8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x1b0) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x1a8) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0x3eb4000;
    *(long *)((long)register0x00000008 + -0x198) = lVar16;
    *(long *)((long)register0x00000008 + -400) = lVar17;
    *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
    *(undefined1 **)((long)register0x00000008 + -0x180) =
         (undefined1 *)((long)register0x00000008 + -0x140);
    *(undefined **)((long)register0x00000008 + -0x178) = &Atlas_Audio_AtlasAudioManager__SpeakIntro;
    puVar27 = (undefined1 *)((long)register0x00000008 + -0x180);
    uVar8 = uVar10;
    if ((bRam0000000003eb47de & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      uVar8 = func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47de = 1;
    }
    lVar16 = *(long *)(uVar10 + 0x48);
    if (lVar16 == 0) {
      return uVar8;
    }
    lVar17 = *(long *)(uVar10 + 0x28);
    auVar35._8_8_ = lVar17;
    auVar35._0_8_ = lVar16;
    if (lVar17 == 0) {
      return uVar8;
    }
    unaff_x24 = 0x3d1ff28;
    lVar13 = lVar16;
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar13 = *(long *)(uVar10 + 0x48);
      if (lVar13 == 0) {
        auVar36 = func_0x00f78af4();
        lVar18 = auVar36._8_8_;
        uVar11 = auVar36._0_8_;
        puVar5 = (undefined1 *)((long)register0x00000008 + -0x230);
        *(undefined8 *)((long)register0x00000008 + -0x230) = unaff_d11;
        *(undefined8 *)((long)register0x00000008 + -0x228) = unaff_d10;
        *(ulong *)((long)register0x00000008 + -0x220) = unaff_d9;
        *(ulong *)((long)register0x00000008 + -0x218) = unaff_d8;
        *(undefined8 *)((long)register0x00000008 + -0x210) = 0x3d1ff28;
        *(undefined8 *)((long)register0x00000008 + -0x208) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x200) = 0x3eb4000;
        *(ulong *)((long)register0x00000008 + -0x1f8) = uVar10;
        *(long *)((long)register0x00000008 + -0x1f0) = lVar17;
        *(long *)((long)register0x00000008 + -0x1e8) = lVar16;
        *(undefined1 **)((long)register0x00000008 + -0x1e0) = puVar27;
        *(undefined **)((long)register0x00000008 + -0x1d8) =
             &Atlas_Audio_AtlasAudioManager__SpeakOvertake;
        puVar27 = (undefined1 *)((long)register0x00000008 + -0x1e0);
        uVar9 = 0x3eb4000;
        uVar8 = uVar11;
        if ((bRam0000000003eb47df & 1) == 0) {
          uVar8 = func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47df = 1;
        }
        if (*(int *)(uVar11 + 0x50) != 0) {
          return uVar8;
        }
        lVar16 = *(long *)(uVar11 + 0x68);
        if (lVar16 == 0) {
          return uVar8;
        }
        if ((int)(*(uint *)(lVar16 + 0x18) - 1) <= (int)lVar19) {
          return uVar8;
        }
        lVar17 = (long)(int)lVar19 + 1;
        if ((uint)lVar17 < *(uint *)(lVar16 + 0x18)) {
          lVar16 = *(long *)(lVar16 + lVar17 * 8 + 0x20);
          if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x10), lVar16 != 0)) && (lVar18 != 0))
          {
            lVar19 = *(long *)(lVar16 + 0x70);
            uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar18,0);
            if ((uVar8 & 1) == 0) {
              if (lVar19 == 0) goto code_r0x0145b92c;
              uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar19,0);
              if ((int)uVar8 == 0) {
                return uVar8;
              }
            }
            if (((*(long *)(lVar18 + 0xb8) != 0) &&
                (uVar30 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar18 + 0xb8),0), lVar19 != 0)) &&
               (*(long *)(lVar19 + 0xb8) != 0)) {
              unaff_d9 = (ulong)param_2;
              uVar25 = param_2;
              uVar29 = param_3;
              uVar31 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar19 + 0xb8),0);
              fVar32 = (float)/*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(uVar30,param_2,param_3,uVar31,uVar25,uVar29,0);
              unaff_x23 = 0x3d1ff28;
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar16 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
              if (*(float *)(lVar16 + 0x31c) <= fVar32 || lVar19 == lVar18) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
              }
              fVar32 = *(float *)(uVar11 + 0x74);
              unaff_d8 = (ulong)(uint)fVar32;
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
                lVar16 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
              }
              if (fVar32 < *(float *)(lVar16 + 0x318)) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
              }
              lVar24 = *(long *)(uVar11 + 0x28);
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar9 = 0;
              if (lVar24 != 0) {
                piVar20 = *(int **)(lVar18 + 0xb8);
                uVar29 = *(undefined4 *)(lVar18 + 0x180);
                lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
                iVar7 = 0;
                uVar9 = 4;
                puVar28 = &UNK_0145b8cc;
                lVar22 = lVar17;
                lVar13 = lVar24;
                uVar30 = 0;
                goto code_r0x014fe2a8;
              }
            }
          }
code_r0x0145b92c:
          func_0x00f78af4();
        }
        uVar26 = func_0x00f78b24();
        auVar35 = func_0x00f78ac0(uVar26,0);
        lVar17 = auVar35._8_8_;
        lVar16 = auVar35._0_8_;
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x290);
        *(ulong *)((long)register0x00000008 + -0x290) = unaff_d9;
        *(ulong *)((long)register0x00000008 + -0x288) = unaff_d8;
        *(undefined8 *)((long)register0x00000008 + -0x280) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x278) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x270) = 0x3d1ff28;
        *(undefined8 *)((long)register0x00000008 + -0x268) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x260) = uVar9;
        *(long *)((long)register0x00000008 + -600) = lVar19;
        *(long *)((long)register0x00000008 + -0x250) = lVar18;
        *(ulong *)((long)register0x00000008 + -0x248) = uVar11;
        *(undefined1 **)((long)register0x00000008 + -0x240) = puVar27;
        *(undefined **)((long)register0x00000008 + -0x238) =
             &Atlas_Audio_AtlasAudioManager__SpeakRespawning;
        puVar27 = (undefined1 *)((long)register0x00000008 + -0x240);
        lVar19 = 0x3eb4000;
        if ((bRam0000000003eb47e0 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e0 = 1;
        }
        if (lVar17 != 0) {
          uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar17,0);
          lVar19 = 0x28;
          if ((int)uVar8 == 0) {
            lVar19 = 0x30;
          }
          lVar19 = *(long *)(lVar16 + lVar19);
          auVar35._8_8_ = lVar19;
          auVar35._0_8_ = lVar17;
          if (lVar19 == 0) {
            return uVar8;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(lVar16 + 0x48) != 0) {
            lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar16 = *(long *)(*(long *)(lVar16 + 0x48) + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar26 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar34._8_8_ = uVar26;
            auVar34._0_8_ = uVar9;
            lVar19 = 5;
            puVar28 = &UNK_0145ba68;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        uVar10 = func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0x2c0) = uVar9;
        *(long *)((long)register0x00000008 + -0x2b8) = lVar16;
        *(long *)((long)register0x00000008 + -0x2b0) = lVar19;
        *(long *)((long)register0x00000008 + -0x2a8) = lVar17;
        *(undefined1 **)((long)register0x00000008 + -0x2a0) = puVar27;
        *(undefined **)((long)register0x00000008 + -0x298) =
             &Atlas_Audio_AtlasAudioManager__SpeakShield;
        uVar8 = uVar10;
        if ((bRam0000000003eb47e1 & 1) == 0) {
          uVar8 = func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e1 = 1;
        }
        lVar16 = *(long *)(uVar10 + 0x48);
        if (lVar16 == 0) {
          return uVar8;
        }
        lVar24 = *(long *)(uVar10 + 0x28);
        lVar19 = lVar16;
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) != 0)) {
joined_r0x0145bba8:
          if (lVar24 != 0) {
            lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
            piVar20 = *(int **)(lVar19 + 0xb8);
            uVar29 = *(undefined4 *)(lVar19 + 0x180);
            iVar7 = 10;
            uVar9 = 1;
            puVar27 = *(undefined1 **)((long)register0x00000008 + -0x2a0);
            puVar28 = *(undefined **)((long)register0x00000008 + -0x298);
            lVar18 = *(long *)((long)register0x00000008 + -0x2b0);
            auVar36._8_8_ = lVar16;
            auVar36._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x2a8);
            puVar5 = (undefined1 *)((long)register0x00000008 + -0x290);
            lVar13 = *(long *)((long)register0x00000008 + -0x2c0);
            lVar19 = *(long *)((long)register0x00000008 + -0x2b8);
            uVar30 = _UNK_033f813c;
            goto code_r0x014fe2a8;
          }
        }
        else {
          func_0x00f78ad0();
          lVar19 = *(long *)(uVar10 + 0x48);
          if (lVar19 != 0) goto joined_r0x0145bba8;
        }
        auVar35 = func_0x00f78af4();
        lVar19 = auVar35._8_8_;
        *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0x3d1ff28;
        *(ulong *)((long)register0x00000008 + -0x2e8) = uVar10;
        *(long *)((long)register0x00000008 + -0x2e0) = lVar24;
        *(long *)((long)register0x00000008 + -0x2d8) = lVar16;
        *(undefined1 **)((long)register0x00000008 + -0x2d0) =
             (undefined1 *)((long)register0x00000008 + -0x2a0);
        *(undefined **)((long)register0x00000008 + -0x2c8) =
             &Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
        lVar24 = 0x3eb4000;
        if ((bRam0000000003eb47e2 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e2 = 1;
        }
        if (lVar19 != 0) {
          uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar19,0);
          if ((int)uVar8 == 0) {
            return uVar8;
          }
          lVar24 = *(long *)(auVar35._0_8_ + 0x28);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar16 = *(long *)(auVar35._0_8_ + 0x48);
          if ((lVar16 != 0) && (lVar24 != 0)) {
            lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
            piVar20 = *(int **)(lVar16 + 0xb8);
            uVar29 = *(undefined4 *)(lVar16 + 0x180);
            uVar30 = 0;
            iVar7 = 6;
            uVar9 = 3;
            puVar27 = *(undefined1 **)((long)register0x00000008 + -0x2d0);
            puVar28 = *(undefined **)((long)register0x00000008 + -0x2c8);
            lVar18 = *(long *)((long)register0x00000008 + -0x2e0);
            auVar36._8_8_ = lVar19;
            auVar36._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x2d8);
            puVar5 = (undefined1 *)((long)register0x00000008 + -0x2c0);
            lVar13 = *(long *)((long)register0x00000008 + -0x2f0);
            lVar19 = *(long *)((long)register0x00000008 + -0x2e8);
            goto code_r0x014fe2a8;
          }
        }
        auVar34 = func_0x00f78af4();
        lVar17 = auVar34._8_8_;
        lVar16 = auVar34._0_8_;
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x350);
        *(ulong *)((long)register0x00000008 + -0x350) = unaff_d9;
        *(ulong *)((long)register0x00000008 + -0x348) = unaff_d8;
        *(undefined8 *)((long)register0x00000008 + -0x340) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x338) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x330) = 0x3d1ff28;
        *(undefined8 *)((long)register0x00000008 + -0x328) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -800) = 0x3d1ff28;
        *(long *)((long)register0x00000008 + -0x318) = lVar24;
        *(undefined1 (*) [16])((long)register0x00000008 + -0x310) = auVar35;
        *(undefined1 **)((long)register0x00000008 + -0x300) =
             (undefined1 *)((long)register0x00000008 + -0x2d0);
        *(undefined **)((long)register0x00000008 + -0x2f8) =
             &Atlas_Audio_AtlasAudioManager__SpeakSneer;
        puVar27 = (undefined1 *)((long)register0x00000008 + -0x300);
        lVar19 = 0x3eb4000;
        if ((bRam0000000003eb47e3 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e3 = 1;
        }
        if (lVar17 != 0) {
          uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar17,0);
          lVar19 = 0x28;
          if ((int)uVar8 == 0) {
            lVar19 = 0x30;
          }
          lVar19 = *(long *)(lVar16 + lVar19);
          auVar35._8_8_ = lVar19;
          auVar35._0_8_ = lVar17;
          if (lVar19 == 0) {
            return uVar8;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(lVar16 + 0x48) != 0) {
            lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar16 = *(long *)(*(long *)(lVar16 + 0x48) + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar26 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar34._8_8_ = uVar26;
            auVar34._0_8_ = uVar9;
            lVar19 = 0xf;
            puVar28 = &UNK_0145bdac;
            goto code_r0x014fe3e8;
          }
        }
        auVar35 = func_0x00f78af4();
        lVar18 = auVar35._8_8_;
        lVar13 = auVar35._0_8_;
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x3b0);
        *(ulong *)((long)register0x00000008 + -0x3b0) = unaff_d9;
        *(ulong *)((long)register0x00000008 + -0x3a8) = unaff_d8;
        *(undefined8 *)((long)register0x00000008 + -0x3a0) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x398) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x390) = 0x3d1ff28;
        *(undefined8 *)((long)register0x00000008 + -0x388) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x380) = 0x3d1ff28;
        *(long *)((long)register0x00000008 + -0x378) = lVar16;
        *(long *)((long)register0x00000008 + -0x370) = lVar19;
        *(long *)((long)register0x00000008 + -0x368) = lVar17;
        *(undefined1 **)((long)register0x00000008 + -0x360) = puVar27;
        *(undefined **)((long)register0x00000008 + -0x358) =
             &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
        puVar27 = (undefined1 *)((long)register0x00000008 + -0x360);
        lVar16 = 0x3eb4000;
        if ((bRam0000000003eb47e4 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e4 = 1;
        }
        if (lVar18 != 0) {
          uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar18,0);
          lVar16 = 0x28;
          if ((int)uVar8 == 0) {
            lVar16 = 0x30;
          }
          lVar16 = *(long *)(lVar13 + lVar16);
          auVar35._8_8_ = lVar16;
          auVar35._0_8_ = lVar18;
          if (lVar16 == 0) {
            return uVar8;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(lVar13 + 0x48) != 0) {
            lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar16 = *(long *)(*(long *)(lVar13 + 0x48) + 0xb8);
            uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
            uVar26 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
            uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar34._8_8_ = uVar26;
            auVar34._0_8_ = uVar9;
            lVar19 = 0x11;
            puVar28 = &UNK_0145bf54;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        lVar17 = func_0x00f78af4();
        auVar36._8_8_ = extraout_x1;
        auVar36._0_8_ = lVar17;
        puVar5 = (undefined1 *)((long)register0x00000008 + -0x3f0);
        *(ulong *)((long)register0x00000008 + -0x3f0) = unaff_d9;
        *(ulong *)((long)register0x00000008 + -1000) = unaff_d8;
        *(undefined8 *)((long)register0x00000008 + -0x3e0) = 0x3d1ff28;
        *(long *)((long)register0x00000008 + -0x3d8) = lVar13;
        *(long *)((long)register0x00000008 + -0x3d0) = lVar16;
        *(long *)((long)register0x00000008 + -0x3c8) = lVar18;
        *(undefined1 **)((long)register0x00000008 + -0x3c0) = puVar27;
        *(undefined **)((long)register0x00000008 + -0x3b8) =
             &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
        puVar27 = (undefined1 *)((long)register0x00000008 + -0x3c0);
        unaff_d8 = extraout_d0 & 0xffffffff;
        if ((bRam0000000003eb47e5 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e5 = 1;
        }
        if (extraout_x1 == 0) {
code_r0x0145c21c:
          fVar32 = (float)func_0x00f78af4();
          *(ulong *)((long)register0x00000008 + -0x420) = unaff_d9;
          *(ulong *)((long)register0x00000008 + -0x418) = unaff_d8;
          *(long *)((long)register0x00000008 + -0x410) = extraout_x1;
          *(long *)((long)register0x00000008 + -0x408) = lVar17;
          *(undefined1 **)((long)register0x00000008 + -0x400) = puVar27;
          *(undefined **)((long)register0x00000008 + -0x3f8) =
               &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
          if ((bRam0000000003eb47e6 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d24568);
            bRam0000000003eb47e6 = 1;
          }
          if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
          *(undefined8 *)((long)register0x00000008 + -0x428) = uVar9;
          if (((*(byte *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar33 = _UNK_033f8148;
          if (fVar32 != 0.0) {
            fVar33 = fVar32;
          }
          fVar32 = INFINITY;
          if (fVar33 != -INFINITY) {
            fVar32 = ABS(SQRT(fVar33));
          }
          uVar8 = /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar32,(undefined1 *)((long)register0x00000008 + -0x428),
                                  *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x388),1,
                                  0);
          return uVar8;
        }
        iVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
        if ((iVar7 != 0) && (uVar8 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)uVar8 == 0)) {
          return uVar8;
        }
        if (*(long *)(lVar17 + 0x30) == 0) goto code_r0x0145c21c;
        uVar8 = /*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar17 + 0x30),0);
        if (((uVar8 & 1) != 0) || (*(int *)(lVar17 + 0x50) != 1)) {
          return uVar8;
        }
        lVar13 = 0x3d1ff28;
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar16 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
        if (*(float *)(lVar16 + 0x30) <= (float)extraout_d0) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
        }
        if (0.0 <= *(float *)(lVar17 + 0x88)) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
        }
        if (*(char *)(extraout_x1 + 0x38) == '\0') {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
        }
        fVar32 = *(float *)(lVar17 + 0x8c);
        unaff_d8 = (ulong)(uint)fVar32;
        uVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
          uVar8 = func_0x00f78ad0();
          lVar16 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
        }
        if (fVar32 <= *(float *)(lVar16 + 800)) {
          return uVar8;
        }
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
        if (iVar7 == 2) {
          lVar24 = *(long *)(lVar17 + 0x30);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar16 = *(long *)(lVar17 + 0x48);
          if ((lVar16 == 0) || (lVar24 == 0)) goto code_r0x0145c21c;
          lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
          lVar22 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
          piVar20 = *(int **)(lVar16 + 0xb8);
          uVar29 = *(undefined4 *)(lVar16 + 0x180);
          uVar30 = 0x3f800000;
          iVar7 = 6;
        }
        else if (iVar7 == 1) {
          lVar24 = *(long *)(lVar17 + 0x30);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar24 == 0) goto code_r0x0145c21c;
          piVar20 = *(int **)(extraout_x1 + 0xb8);
          uVar29 = *(undefined4 *)(extraout_x1 + 0x180);
          lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
          uVar30 = 0;
          iVar7 = 1;
          lVar22 = lVar17;
        }
        else {
          if (iVar7 != 0) {
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar8 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
            *(undefined4 *)(lVar17 + 0x88) =
                 *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x34);
            return uVar8;
          }
          lVar24 = *(long *)(lVar17 + 0x30);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar24 == 0) goto code_r0x0145c21c;
          piVar20 = *(int **)(extraout_x1 + 0xb8);
          uVar29 = *(undefined4 *)(extraout_x1 + 0x180);
          lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
          uVar30 = 0;
          iVar7 = 0;
          lVar22 = lVar17;
        }
        uVar9 = 4;
        puVar28 = &UNK_0145c1e0;
        lVar18 = extraout_x1;
        lVar19 = lVar24;
        goto code_r0x014fe2a8;
      }
    }
    lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
    lVar16 = *(long *)(lVar13 + 0xb8);
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3bf00);
    uVar26 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
    uVar9 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar34._8_8_ = uVar26;
    auVar34._0_8_ = uVar9;
    lVar19 = 1;
    puVar28 = &UNK_0145b660;
code_r0x014fe3e8:
    lVar13 = auVar34._0_8_;
    *(long *)(puVar6 + -0x30) = lVar16;
    *(long *)(puVar6 + -0x28) = lVar17;
    *(long *)(puVar6 + -0x20) = auVar35._8_8_;
    *(long *)(puVar6 + -0x18) = auVar35._0_8_;
    *(undefined1 **)(puVar6 + -0x10) = puVar27;
    *(undefined **)(puVar6 + -8) = puVar28;
    uVar8 = /*System.Object$$.ctor*/ func_0x0294d018(lVar13,0);
    *(long *)(lVar13 + 0x10) = auVar34._8_8_;
    *(float *)(lVar13 + 0x18) = (float)(int)lVar19;
    return uVar8;
  }
  uVar8 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar13,0);
  if ((int)uVar8 == 0) {
    return uVar8;
  }
  uVar25 = (uint)lVar16;
  uVar30 = 0x40000000;
  if (8 < uVar25) {
    uVar30 = 0x40400000;
  }
  uVar29 = 0x3f800000;
  if (3 < uVar25) {
    uVar29 = uVar30;
  }
  uVar30 = 0;
  if (1 < (int)uVar25) {
    uVar30 = uVar29;
  }
  /*Atlas.Audio.KartAudio$$OnRaceFinished*/ func_0x015c133c(lVar13,0);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60(uVar30,lVar17,
                          *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x370),0,0);
  lVar24 = *(long *)(lVar17 + 0x28);
  if (lVar24 == 0) {
    return uVar8;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  piVar20 = *(int **)(lVar13 + 0xb8);
  uVar29 = *(undefined4 *)(lVar13 + 0x180);
  lVar17 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x370);
  iVar7 = 0;
  uVar9 = 1;
  puVar27 = *(undefined1 **)((long)register0x00000008 + -0x140);
  puVar28 = *(undefined **)((long)register0x00000008 + -0x138);
  lVar18 = *(long *)((long)register0x00000008 + -0x150);
  auVar36._8_8_ = lVar13;
  auVar36._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x148);
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x130);
  unaff_d9 = *(ulong *)((long)register0x00000008 + -0x170);
  unaff_d8 = *(ulong *)((long)register0x00000008 + -0x168);
  lVar22 = 0;
  lVar19 = *(long *)((long)register0x00000008 + -0x158);
  lVar13 = *(long *)((long)register0x00000008 + -0x160);
  uVar30 = 0;
code_r0x014fe2a8:
  lVar16 = auVar36._8_8_;
  auVar37._8_8_ = lVar16;
  auVar37._0_8_ = lVar24;
  auVar35._8_8_ = piVar20;
  auVar35._0_8_ = uVar9;
  puVar6 = puVar5 + -0x70;
  *(ulong *)(puVar5 + -0x70) = unaff_d9;
  *(ulong *)(puVar5 + -0x68) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(long *)(puVar5 + -0x30) = lVar13;
  *(long *)(puVar5 + -0x28) = lVar19;
  *(long *)(puVar5 + -0x20) = lVar18;
  *(long *)(puVar5 + -0x18) = auVar36._0_8_;
  *(undefined1 **)(puVar5 + -0x10) = puVar27;
  *(undefined **)(puVar5 + -8) = puVar28;
  puVar27 = puVar5 + -0x10;
  lVar19 = lVar17;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  if (lVar22 == 0) {
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = (int *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(piVar12,uRam0000000003d3bf00);
    lVar13 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar13,0);
    *(long *)(lVar13 + 0x10) = lVar22;
    *(float *)(lVar13 + 0x18) = (float)iVar7;
    if (piVar12 == (int *)0x0) {
      puVar28 = &Atlas_Audio_SpeechParam___ctor;
      auVar34 = func_0x00f78af4();
      goto code_r0x014fe3e8;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(piVar12,lVar13,uRam0000000003d3bf08);
  }
  uVar26 = *(undefined8 *)(puVar5 + -0x50);
  uVar2 = *(undefined8 *)(puVar5 + -0x48);
  uVar1 = *(undefined8 *)(puVar5 + -0x60);
  uVar3 = *(undefined8 *)(puVar5 + -0x58);
  *(undefined8 *)(puVar5 + -0x50) = *(undefined8 *)(puVar5 + -0x70);
  *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x68);
  *(undefined8 *)(puVar5 + -0x40) = *(undefined8 *)(puVar5 + -0x40);
  *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(puVar5 + -0x38);
  *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
  *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
  *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
  *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
  *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
  *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
  *(int *)(puVar5 + -0x54) = (int)uVar9;
  lVar19 = lVar17;
  piVar21 = piVar20;
  piVar23 = piVar12;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(uVar29,uVar30,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if (*(char *)(lVar24 + 0x34) == '\0') {
code_r0x014fe49c:
    piVar23 = (int *)(puVar5 + -0x54);
    puVar28 = &UNK_014fe4b4;
    lVar19 = lVar17;
    piVar21 = piVar12;
  }
  else {
    if (*(long *)(lVar24 + 0x10) != 0) {
      if (*(char *)(*(long *)(lVar24 + 0x10) + 0xcb) == '\0') {
        return 0;
      }
      goto code_r0x014fe49c;
    }
    puVar28 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar37 = func_0x00f78af4();
  }
  lVar18 = auVar37._8_8_;
  lVar13 = auVar37._0_8_;
  *(undefined8 *)(puVar5 + -0xc0) = uVar1;
  *(undefined8 *)(puVar5 + -0xb8) = uVar3;
  *(undefined8 *)(puVar5 + -0xb0) = uVar26;
  *(undefined8 *)(puVar5 + -0xa8) = uVar2;
  *(undefined8 *)(puVar5 + -0xa0) = 0x3eb4000;
  *(long *)(puVar5 + -0x98) = lVar16;
  *(long *)(puVar5 + -0x90) = lVar17;
  *(long *)(puVar5 + -0x88) = lVar24;
  *(int **)(puVar5 + -0x80) = piVar20;
  *(int **)(puVar5 + -0x78) = piVar12;
  *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x68) = puVar28;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)(puVar5 + -0xe0) = 0;
  *(undefined8 *)(puVar5 + -0xd8) = 0;
  *(undefined8 *)(puVar5 + -0xd0) = 0;
  *(undefined4 *)(puVar5 + -0xe4) = 0;
  if (*(long *)(lVar13 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar13 + 0x10) + 0x90) != '\0') {
    return 0;
  }
  if (lVar18 == 0) goto code_r0x014fe8f8;
  uVar8 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar18,0);
  if ((uVar8 & 1) != 0) {
    return 0;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar19,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350),0);
  if (iVar7 != 0) {
    if (piVar21 == (int *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar5 + -0x100,piVar21,uRam0000000003d3bf10);
    *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(puVar5 + -0xf8);
    *(undefined8 *)(puVar5 + -0xe0) = *(undefined8 *)(puVar5 + -0x100);
    *(undefined8 *)(puVar5 + -0xd0) = *(undefined8 *)(puVar5 + -0xf0);
    while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar5 + -0xe0,uRam0000000003d32f58), (uVar8 & 1) != 0) {
      lVar16 = *(long *)(puVar5 + -0xd0);
      if (lVar16 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar9 = *(undefined8 *)(lVar16 + 0x10);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar9,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310),
                              0);
      if ((uVar8 & 1) != 0) {
        fVar33 = *(float *)(lVar16 + 0x18);
        fVar32 = -fVar33;
        if (fVar33 != INFINITY) {
          fVar32 = fVar33;
        }
        *(int *)(puVar5 + -0xe4) = (int)fVar32;
        plVar14 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,puVar5 + -0xe4);
        if (plVar14 == (long *)0x0) goto code_r0x014fe8fc;
        uVar9 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        puVar15 = (undefined4 *)func_0x00f78ae4(plVar14);
        *(undefined4 *)(puVar5 + -0xe4) = *puVar15;
        lVar19 = /*System.String$$Concat*/ func_0x029bdb88(lVar19,uVar9,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar5 + -0xe0,uRam0000000003d32f50);
  }
  if (*(long *)(lVar13 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar7 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar13 + 0x28),lVar19,uRam0000000003d30020);
  if (iVar7 == 0) {
code_r0x014fe888:
    uVar8 = 1;
  }
  else {
    if (*(long *)(lVar13 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar13 + 0x28),lVar19,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*piVar23 - 1U < 2) {
        iVar7 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      iVar7 = 1;
code_r0x014fe860:
      *piVar23 = iVar7;
    }
    iVar7 = (int)extraout_x1_00;
    if (iVar7 == 3) {
      if ((*(long *)(lVar18 + 0xa0) == 0) ||
         (lVar16 = *(long *)(*(long *)(lVar18 + 0xa0) + 0x90), lVar16 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar4)();
      }
      iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar16,0);
      if (1 < iVar7) {
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (ulong)(iVar7 < 3);
      }
      uVar8 = 2;
    }
    else {
      uVar8 = extraout_x1_00;
      if (iVar7 != 2) {
        if (iVar7 == 0) {
          uVar8 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar18,0);
          return uVar8;
        }
        goto code_r0x014fe888;
      }
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar8,0);
    uVar8 = (ulong)(iVar7 == 0);
  }
  return uVar8;
}



// ============================================================
// RVA: 0x15b4184 | Atlas.Gameplay.Usables.GoldenTurdProjectile.Destroy
// ============================================================

void Atlas_Gameplay_Usables_GoldenTurdProjectile__Destroy(long param_1)

{
  if (*(char *)(param_1 + 0x60) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined1 *)(param_1 + 0x61) = 1;
  return;
}



// ============================================================
// RVA: 0x15b419c | Atlas.Gameplay.Usables.GoldenTurdProjectile.EarlyUpdate
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15b44bc | Atlas.Gameplay.Usables.GoldenTurdProjectile.Update
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15b44c4 | Atlas.Gameplay.Usables.GoldenTurdProjectile.DeSpawn
// ============================================================

/* WARNING: Possible PIC construction at 0x014cecd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cecd8) */
/* WARNING: Removing unreachable block (ram,0x014cece4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_GoldenTurdProjectile__DeSpawn
               (undefined1 param_1 [16],ulong param_2,ulong param_3,uint param_4,long param_5,
               int param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  float extraout_s0;
  undefined4 uVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000003eb5273 & 1) == 0) {
    func_0x00f78a20(0x3d570c0);
    func_0x00f78a20(0x3d5fef8);
    func_0x00f78a20(0x3d6d498);
    bRam0000000003eb5273 = 1;
  }
  if (param_6 != 0) {
    lVar4 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_5,0);
    lVar5 = Atlas_Gameplay_Usables_GoldenTurdProjectile__get_GoldenTurdProjectileDefinition(param_5)
    ;
    if ((lVar5 == 0) || (lVar4 == 0))
    goto Atlas_Gameplay_Usables_ProjectileUsable__ForceToFloorSphere;
    uVar6 = /*Atlas.Contexts.GameContextBase$$SpawnTimedObject<VFXBehaviour>*/ func_0x0185c108(*(undefined4 *)(lVar5 + 0x98),lVar4,/*STR('GoldenTurdHitVFX')*/ uRam0000000003d6d498,
                            uRam0000000003d570c0);
    lVar4 = Atlas_Gameplay_Usables_GoldenTurdProjectile__get_GoldenTurdProjectileDefinition(param_5)
    ;
    if (lVar4 == 0) goto Atlas_Gameplay_Usables_ProjectileUsable__ForceToFloorSphere;
    uStack_48 = *(undefined8 *)(lVar4 + 0xa0);
    uStack_50 = *(undefined8 *)(lVar4 + 0x98);
    uStack_40 = *(undefined4 *)(lVar4 + 0xa8);
    /*Atlas.Gameplay.Usables.ProjectileUsable$$SetupDespawnVFX*/ func_0x014cf800(param_5,uVar6,&uStack_50,0);
  }
  if (*(long *)(param_5 + 0x10) != 0) {
    /*Atlas.Gameplay.Usables.UsableManager$$DeSpawnAndTearDownUsable<SuperShieldUsable, SuperShieldUsableBehaviour>*/ func_0x01a3f3c8(*(long *)(param_5 + 0x10),param_5,uRam0000000003d5fef8);
    return;
  }
Atlas_Gameplay_Usables_ProjectileUsable__ForceToFloorSphere:
  lVar4 = func_0x00f78af4();
  uVar13 = (uint)param_3;
  uVar19 = (uint)param_2;
  fVar16 = *(float *)(lVar4 + 0x1a0);
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  if (*(long *)(lVar4 + 0x100) == 0) {
    uVar13 = param_4;
    lVar4 = func_0x00f78af4(0,1);
    uVar6 = extraout_x1;
    puVar7 = extraout_x8;
    fVar16 = extraout_s0;
  }
  else {
    uVar11 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar4 + 0x100),0,0);
    puVar7 = &uStack_c8;
    param_2 = (ulong)uVar11;
    param_3 = (ulong)uVar19;
    uVar6 = 1;
  }
  iVar10 = (int)uVar6;
  uVar9 = (ulong)uVar13;
  fVar18 = (float)param_3;
  fVar23 = (float)param_2;
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
  fStack_180 = 0.0;
  fStack_17c = 0.0;
  fStack_178 = 0.0;
  fStack_174 = 0.0;
  uStack_18c = 0;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_1a0 = 0;
  if (-1 < iVar10) {
    lVar5 = func_0x00f78aec(/*System.Collections.Generic.List<ValueTuple<float, Vector3>>_TypeInfo*/ uRam0000000003d1d768);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$.ctor*/ func_0x023669cc(lVar5,uRam0000000003d39b40);
    if (iVar10 != 0x7fffffff) goto code_r0x014cee54;
code_r0x014cee4c:
    if (lVar5 == 0) {
      do {
        iVar10 = (int)uVar6;
        func_0x00f78af4();
code_r0x014cee54:
        iVar10 = iVar10 + 1;
        while( true ) {
          uVar15 = (undefined4)param_3;
          uVar17 = (undefined4)param_2;
          uVar12 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          uStack_1c8 = 0;
          uStack_1c0 = 0;
          uStack_1b8 = 0;
          fVar21 = (float)uVar9;
          fVar22 = fVar21;
          fVar14 = fVar18;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar23,fVar18,uVar9,uVar12,uVar17,uVar15,&uStack_1c8,0);
          fVar24 = *(float *)(lVar4 + 0x148);
          uVar6 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(lVar4 + 0x150),0);
          uStack_1d8 = uStack_1c0;
          uStack_1e0 = uStack_1c8;
          uStack_1d0 = uStack_1b8;
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar24 + fVar16,&uStack_1e0,&uStack_1b0,uVar6,1,0);
          fVar24 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          fVar20 = *(float *)(lVar4 + 0x148) + fVar16;
          param_2 = (ulong)(uint)fVar18;
          param_3 = uVar9;
          /*Debug$$DrawLine*/ func_0x0162ee40(fVar23,param_2,uVar9,fVar23 + fVar24 * fVar20,fVar18 + fVar14 * fVar20,
                          fVar21 + fVar22 * fVar20,0);
          uVar6 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_1b0,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
          uVar12 = (undefined4)param_3;
          if ((uVar2 & 1) != 0) goto code_r0x014cee4c;
          fVar18 = (float)param_2;
          /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&uStack_1b0,0);
          fVar22 = fVar18;
          uVar13 = /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&uStack_1b0,0);
          uStack_1c8 = 0;
          uStack_1c0 = 0;
          param_2 = (ulong)uVar13;
          param_3 = (ulong)(uint)fVar22;
          /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar18,param_2,param_3,uVar12,&uStack_1c8,uRam0000000003d42d70);
          if (lVar5 == 0) break;
          param_2 = uStack_1c8 >> 0x20;
          param_3 = uStack_1c0 & 0xffffffff;
          /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$Add*/ func_0x023676a4(uStack_1c8 & 0xffffffff,param_2,param_3,uStack_1c0._4_4_,lVar5,
                          uRam0000000003d39b48);
          lVar3 = /*Atlas.Gameplay.Usables.ProjectileUsable$$get_ProjectileUsableDefinition*/ func_0x014cd290(lVar4);
          fVar22 = (float)param_3;
          if (((lVar3 == 0) || (*(long *)(lVar4 + 0xf8) == 0)) ||
             (lVar8 = *(long *)(*(long *)(lVar4 + 0xf8) + 0x18), lVar8 == 0)) break;
          fVar18 = fVar18 + fVar16;
          fVar20 = fVar18 + *(float *)(lVar3 + 0x8c);
          fVar14 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar8,0);
          fVar24 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
          param_2 = (ulong)(uint)(fVar14 * fVar24);
          param_3 = (ulong)(uint)(fVar18 * fVar24);
          fVar23 = fVar23 + fVar14 * fVar24;
          fVar18 = fVar20 + fVar18 * fVar24;
          uVar9 = (ulong)(uint)(fVar21 + fVar22 * fVar24);
          iVar10 = iVar10 + -1;
          if (iVar10 == 0) goto code_r0x014cf018;
        }
      } while( true );
    }
code_r0x014cf018:
    fVar16 = _UNK_033f83ec;
    uVar9 = 0;
    lVar4 = 0x20;
    lVar3 = 0x100000000;
    do {
      uVar17 = (undefined4)param_3;
      uVar12 = (undefined4)param_2;
      uVar2 = (ulong)*(uint *)(lVar5 + 0x18);
      if ((long)(int)(*(uint *)(lVar5 + 0x18) - 1) <= (long)uVar9) goto code_r0x014cf0b0;
      if (uVar2 <= uVar9) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        uVar2 = (ulong)*(uint *)(lVar5 + 0x18);
      }
      lVar8 = *(long *)(lVar5 + 0x10);
      fVar18 = *(float *)(lVar8 + lVar4);
      uVar9 = uVar9 + 1;
      if (uVar2 <= uVar9) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar8 = *(long *)(lVar5 + 0x10);
      }
      uVar17 = (undefined4)param_3;
      uVar12 = (undefined4)param_2;
      lVar1 = lVar3 >> 0x1c;
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + 0x100000000;
    } while (ABS(fVar18 - *(float *)(lVar8 + lVar1 + 0x20)) <= fVar16);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$RemoveRange*/ func_0x02369000(lVar5,uVar9,*(int *)(lVar5 + 0x18) - (int)uVar9,uRam0000000003d39b50);
code_r0x014cf0b0:
    uVar15 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(0,uVar15,uVar12,uVar17,&fStack_180,uRam0000000003d42d70);
    uVar13 = *(uint *)(lVar5 + 0x18);
    if (-1 < (int)(uVar13 - 1)) {
      fVar18 = 0.0;
      iVar10 = uVar13 - 2;
      fVar16 = 1.0;
      while( true ) {
        uVar19 = iVar10 + 1;
        if (1 < uVar19) {
          fVar16 = fVar16 + fVar16;
        }
        if (uVar13 <= uVar19) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar13 = *(uint *)(lVar5 + 0x18);
        }
        fVar23 = fStack_180;
        lVar4 = *(long *)(lVar5 + 0x10);
        fVar22 = *(float *)(lVar4 + (ulong)uVar19 * 0x10 + 0x20);
        if (uVar13 <= uVar19) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar4 = *(long *)(lVar5 + 0x10);
        }
        lVar4 = lVar4 + (ulong)uVar19 * 0x10;
        uVar6 = *(undefined8 *)(lVar4 + 0x24);
        fVar14 = (float)((ulong)uVar6 >> 0x20) * fVar16 + fStack_178;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar16 * fVar22 + fVar23,CONCAT44(fVar14,(float)uVar6 * fVar16 + fStack_17c)
                        ,fVar14,fVar16 * *(float *)(lVar4 + 0x2c) + fStack_174,&uStack_1c8,
                        uRam0000000003d42d70);
        fStack_178 = (float)uStack_1c0;
        fStack_174 = (float)(uStack_1c0 >> 0x20);
        fStack_180 = (float)uStack_1c8;
        fStack_17c = (float)(uStack_1c8 >> 0x20);
        fVar18 = fVar18 + fVar16;
        if (iVar10 < 0) break;
        uVar13 = *(uint *)(lVar5 + 0x18);
        iVar10 = iVar10 + -1;
      }
      if (fVar18 != 0.0) {
        *(undefined1 *)puVar7 = 1;
        *(undefined2 *)((long)puVar7 + 1) = 0;
        *(undefined1 *)((long)puVar7 + 3) = 0;
        *(ulong *)((long)puVar7 + 0xc) = CONCAT44(fStack_174 / fVar18,fStack_178 / fVar18);
        *(ulong *)((long)puVar7 + 4) = CONCAT44(fStack_17c / fVar18,fStack_180 / fVar18);
        return;
      }
    }
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 2) = 0;
  return;
}



// ============================================================
// RVA: 0x15b45c8 | Atlas.Gameplay.Usables.GoldenTurdProjectile.ForceToFloor
// ============================================================

/* WARNING: Possible PIC construction at 0x014cecd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014cecd8) */
/* WARNING: Removing unreachable block (ram,0x014cece4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_GoldenTurdProjectile__ForceToFloor
               (undefined1 param_1 [16],ulong param_2,ulong param_3,uint param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  float extraout_s0;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
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
  
  fVar16 = *(float *)(param_5 + 0x1a0);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (*(long *)(param_5 + 0x100) == 0) {
    param_5 = func_0x00f78af4(0,1);
    uVar6 = extraout_x1;
    puVar7 = extraout_x8;
    fVar16 = extraout_s0;
  }
  else {
    param_4 = (uint)param_3;
    uVar12 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_5 + 0x100),0,0);
    puVar7 = &uStack_78;
    param_3 = param_2 & 0xffffffff;
    uVar6 = 1;
    param_2 = (ulong)uVar12;
  }
  iVar11 = (int)uVar6;
  uVar10 = (ulong)param_4;
  fVar18 = (float)param_3;
  fVar22 = (float)param_2;
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
  if (-1 < iVar11) {
    lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<ValueTuple<float, Vector3>>_TypeInfo*/ uRam0000000003d1d768);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$.ctor*/ func_0x023669cc(lVar3,uRam0000000003d39b40);
    if (iVar11 != 0x7fffffff) goto code_r0x014cee54;
code_r0x014cee4c:
    if (lVar3 == 0) {
      do {
        iVar11 = (int)uVar6;
        func_0x00f78af4();
code_r0x014cee54:
        iVar11 = iVar11 + 1;
        while( true ) {
          uVar15 = (undefined4)param_3;
          uVar17 = (undefined4)param_2;
          uVar13 = /*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          uStack_178 = 0;
          uStack_170 = 0;
          uStack_168 = 0;
          fVar20 = (float)uVar10;
          fVar21 = fVar20;
          fVar14 = fVar18;
          /*UnityEngine.Ray$$.ctor*/ func_0x03252c50(fVar22,fVar18,uVar10,uVar13,uVar17,uVar15,&uStack_178,0);
          fVar23 = *(float *)(param_5 + 0x148);
          uVar6 = /*UnityEngine.LayerMask$$op_Implicit*/ func_0x032326f8(*(undefined4 *)(param_5 + 0x150),0);
          uStack_188 = uStack_170;
          uStack_190 = uStack_178;
          uStack_180 = uStack_168;
          /*UnityEngine.Physics$$Raycast*/ func_0x032a0440(fVar23 + fVar16,&uStack_190,&uStack_160,uVar6,1,0);
          fVar23 = (float)/*UnityEngine.Vector3$$get_down*/ func_0x0327c0f8(0);
          fVar19 = *(float *)(param_5 + 0x148) + fVar16;
          param_2 = (ulong)(uint)fVar18;
          param_3 = uVar10;
          /*Debug$$DrawLine*/ func_0x0162ee40(fVar22,param_2,uVar10,fVar22 + fVar23 * fVar19,fVar18 + fVar14 * fVar19,
                          fVar20 + fVar21 * fVar19,0);
          uVar6 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_160,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
          uVar13 = (undefined4)param_3;
          if ((uVar4 & 1) != 0) goto code_r0x014cee4c;
          fVar18 = (float)param_2;
          /*UnityEngine.RaycastHit$$get_point*/ func_0x032a1ef0(&uStack_160,0);
          fVar21 = fVar18;
          uVar12 = /*UnityEngine.RaycastHit$$get_normal*/ func_0x032a1f08(&uStack_160,0);
          uStack_178 = 0;
          uStack_170 = 0;
          param_2 = (ulong)uVar12;
          param_3 = (ulong)(uint)fVar21;
          /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar18,param_2,param_3,uVar13,&uStack_178,uRam0000000003d42d70);
          if (lVar3 == 0) break;
          param_2 = uStack_178 >> 0x20;
          param_3 = uStack_170 & 0xffffffff;
          /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$Add*/ func_0x023676a4(uStack_178 & 0xffffffff,param_2,param_3,uStack_170._4_4_,lVar3,
                          uRam0000000003d39b48);
          lVar5 = /*Atlas.Gameplay.Usables.ProjectileUsable$$get_ProjectileUsableDefinition*/ func_0x014cd290(param_5);
          fVar21 = (float)param_3;
          if (((lVar5 == 0) || (*(long *)(param_5 + 0xf8) == 0)) ||
             (lVar8 = *(long *)(*(long *)(param_5 + 0xf8) + 0x18), lVar8 == 0)) break;
          fVar18 = fVar18 + fVar16;
          fVar19 = fVar18 + *(float *)(lVar5 + 0x8c);
          fVar14 = (float)/*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(lVar8,0);
          fVar23 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
          param_2 = (ulong)(uint)(fVar14 * fVar23);
          param_3 = (ulong)(uint)(fVar18 * fVar23);
          fVar22 = fVar22 + fVar14 * fVar23;
          fVar18 = fVar19 + fVar18 * fVar23;
          uVar10 = (ulong)(uint)(fVar20 + fVar21 * fVar23);
          iVar11 = iVar11 + -1;
          if (iVar11 == 0) goto code_r0x014cf018;
        }
      } while( true );
    }
code_r0x014cf018:
    fVar16 = _UNK_033f83ec;
    uVar10 = 0;
    lVar5 = 0x20;
    lVar8 = 0x100000000;
    do {
      uVar17 = (undefined4)param_3;
      uVar13 = (undefined4)param_2;
      uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
      if ((long)(int)(*(uint *)(lVar3 + 0x18) - 1) <= (long)uVar10) goto code_r0x014cf0b0;
      if (uVar4 <= uVar10) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
      }
      lVar9 = *(long *)(lVar3 + 0x10);
      fVar18 = *(float *)(lVar9 + lVar5);
      uVar10 = uVar10 + 1;
      if (uVar4 <= uVar10) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar9 = *(long *)(lVar3 + 0x10);
      }
      uVar17 = (undefined4)param_3;
      uVar13 = (undefined4)param_2;
      lVar1 = lVar8 >> 0x1c;
      lVar5 = lVar5 + 0x10;
      lVar8 = lVar8 + 0x100000000;
    } while (ABS(fVar18 - *(float *)(lVar9 + lVar1 + 0x20)) <= fVar16);
    /*System.Collections.Generic.List<ValueTuple<float, Vector3>>$$RemoveRange*/ func_0x02369000(lVar3,uVar10,*(int *)(lVar3 + 0x18) - (int)uVar10,uRam0000000003d39b50);
code_r0x014cf0b0:
    uVar15 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(0,uVar15,uVar13,uVar17,&fStack_130,uRam0000000003d42d70);
    uVar12 = *(uint *)(lVar3 + 0x18);
    if (-1 < (int)(uVar12 - 1)) {
      fVar18 = 0.0;
      iVar11 = uVar12 - 2;
      fVar16 = 1.0;
      while( true ) {
        uVar2 = iVar11 + 1;
        if (1 < uVar2) {
          fVar16 = fVar16 + fVar16;
        }
        if (uVar12 <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar12 = *(uint *)(lVar3 + 0x18);
        }
        fVar22 = fStack_130;
        lVar5 = *(long *)(lVar3 + 0x10);
        fVar21 = *(float *)(lVar5 + (ulong)uVar2 * 0x10 + 0x20);
        if (uVar12 <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar5 = *(long *)(lVar3 + 0x10);
        }
        lVar5 = lVar5 + (ulong)uVar2 * 0x10;
        uVar6 = *(undefined8 *)(lVar5 + 0x24);
        fVar14 = (float)((ulong)uVar6 >> 0x20) * fVar16 + fStack_128;
        uStack_178 = 0;
        uStack_170 = 0;
        /*System.ValueTuple<float, Vector3>$$.ctor*/ func_0x01c6a370(fVar16 * fVar21 + fVar22,CONCAT44(fVar14,(float)uVar6 * fVar16 + fStack_12c)
                        ,fVar14,fVar16 * *(float *)(lVar5 + 0x2c) + fStack_124,&uStack_178,
                        uRam0000000003d42d70);
        fStack_128 = (float)uStack_170;
        fStack_124 = (float)(uStack_170 >> 0x20);
        fStack_130 = (float)uStack_178;
        fStack_12c = (float)(uStack_178 >> 0x20);
        fVar18 = fVar18 + fVar16;
        if (iVar11 < 0) break;
        uVar12 = *(uint *)(lVar3 + 0x18);
        iVar11 = iVar11 + -1;
      }
      if (fVar18 != 0.0) {
        *(undefined1 *)puVar7 = 1;
        *(undefined2 *)((long)puVar7 + 1) = 0;
        *(undefined1 *)((long)puVar7 + 3) = 0;
        *(ulong *)((long)puVar7 + 0xc) = CONCAT44(fStack_124 / fVar18,fStack_128 / fVar18);
        *(ulong *)((long)puVar7 + 4) = CONCAT44(fStack_12c / fVar18,fStack_130 / fVar18);
        return;
      }
    }
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 2) = 0;
  return;
}



// ============================================================
// RVA: 0x15b45d8 | Atlas.Gameplay.Usables.GoldenTurdProjectile.OnTriggerEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x0153005c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01530060) */
/* WARNING: Removing unreachable block (ram,0x01530068) */
/* WARNING: Removing unreachable block (ram,0x0153006c) */
/* WARNING: Removing unreachable block (ram,0x01530070) */
/* WARNING: Removing unreachable block (ram,0x01530084) */
/* WARNING: Removing unreachable block (ram,0x0153008c) */
/* WARNING: Removing unreachable block (ram,0x01530090) */
/* WARNING: Removing unreachable block (ram,0x015300a4) */
/* WARNING: Removing unreachable block (ram,0x015300a8) */
/* WARNING: Removing unreachable block (ram,0x015300b0) */
/* WARNING: Removing unreachable block (ram,0x01638aa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_Usables_GoldenTurdProjectile__OnTriggerEnter(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long extraout_x1;
  undefined8 in_x6;
  undefined8 in_x7;
  uint extraout_w8;
  uint uVar15;
  ulong uVar16;
  long extraout_x9;
  int *piVar17;
  long unaff_x19;
  int iVar18;
  undefined8 unaff_x20;
  undefined8 uVar19;
  undefined8 unaff_x21;
  long *plVar20;
  undefined8 unaff_x22;
  long lVar21;
  undefined8 unaff_x23;
  code *pcVar22;
  undefined8 unaff_x24;
  undefined1 **unaff_x29;
  undefined *puVar23;
  undefined *unaff_x30;
  undefined4 uVar24;
  undefined4 extraout_s0;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  plVar20 = (long *)0x3eb5000;
  if ((bRam0000000003eb5274 & 1) == 0) {
    func_0x00f78a20(0x3d207e8);
    func_0x00f78a20(0x3d534a0);
    func_0x00f78a20(0x3d21fc8);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5274 = 1;
  }
  plVar8 = (long *)Atlas_Gameplay_Usables_CollidableUsable__OnTriggerEnter(param_1,param_2,0);
  if ((char)param_1[0xc] != '\0') {
    return plVar8;
  }
  if (param_2 != 0) {
    plVar20 = (long *)/*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_2,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar8 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar20,0,0);
    if ((int)plVar8 == 0) {
      return plVar8;
    }
    lVar9 = /*UnityEngine.Collider$$get_attachedRigidbody*/ func_0x0329e9a4(param_2,0);
    if (lVar9 != 0) {
      plVar20 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar9,uRam0000000003d534a0);
      if (plVar20 == (long *)0x0) {
        return (long *)0x0;
      }
      lVar9 = *plVar20;
      uVar16 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == /*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_015b471c;
          }
          piVar17 = piVar17 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar20,/*Atlas.Gameplay.ICollidableBehaviour_TypeInfo*/ lRam0000000003d21fc8,0);
LAB_015b471c:
      plVar20 = (long *)(*(code *)*puVar10)(plVar20,puVar10[1]);
      if (plVar20 == (long *)0x0) {
        return (long *)0x0;
      }
      lVar9 = *plVar20;
      if ((*(byte *)(lVar9 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8)
          != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
        if (*(byte *)(lVar9 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300)) {
          return plVar20;
        }
        if (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300) * 8 + -8
                     ) != /*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8) {
          return plVar20;
        }
        (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
        lVar9 = param_1[0x35];
        uVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0);
        if (lVar9 == 0) goto LAB_015b481c;
      }
      else {
        plVar8 = (long *)(**(code **)(*param_1 + 0x328))
                                   (param_1,plVar20,1,*(undefined8 *)(*param_1 + 0x330));
        if ((int)plVar8 == 0) {
          return plVar8;
        }
        if ((plVar20[0xe] == 0) || (lVar9 = param_1[0x35], lVar9 == 0)) goto LAB_015b481c;
        uVar11 = *(undefined8 *)(plVar20[0xe] + 0xb8);
      }
      uVar19 = 0x3eb4000;
      if ((bRam0000000003eb4e9d & 1) == 0) {
        func_0x00f78a20(0x3d23990,uVar11,0);
        func_0x00f78a20(0x3d76368);
        bRam0000000003eb4e9d = 1;
      }
      if (*(char *)(lVar9 + 0x2c) == '\0') {
        lVar7 = *(long *)(lVar9 + 0x20);
        if (lVar7 == 0) goto code_r0x015300ec;
        uVar24 = *(undefined4 *)(lVar9 + 0x28);
        puVar4 = (undefined1 *)register0x00000008;
        uVar11 = unaff_x20;
        uVar19 = unaff_x21;
      }
      else {
        if (*(long *)(lVar9 + 0x20) == 0) {
code_r0x015300ec:
          puVar23 = &Atlas_Audio_WeaponAudioManager__DistanceFromPlayer;
          auVar25 = func_0x00f78af4();
        }
        else {
          auVar25._8_8_ = *(undefined8 *)(lVar9 + 0x18);
          auVar25._0_8_ = *(long *)(lVar9 + 0x20);
          puVar23 = &UNK_01530060;
        }
        puVar4 = &stack0xffffffffffffff90;
        unaff_x29 = &puStack_40;
        lVar7 = auVar25._0_8_[3];
        unaff_x19 = lVar9;
        puStack_40 = &stack0xfffffffffffffff0;
        puStack_38 = puVar23;
        if (lVar7 != 0) {
          lVar9 = *(long *)(lVar7 + 0x48);
          if (lVar9 == 0) {
            return auVar25._0_8_;
          }
          lVar9 = *(long *)(lVar9 + 0xb8);
          if (lVar9 != 0) {
            /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar9,0);
            unaff_x19 = 0;
            if (auVar25._8_8_ != 0) {
              /*UnityEngine.Transform$$get_position*/ func_0x03274f20(auVar25._8_8_,0);
              if ((bRam0000000003ec1ac1 & 1) == 0) {
                func_0x00f78a20(0x3d232c0);
                bRam0000000003ec1ac1 = 1;
              }
              plVar20 = /*System.Math_TypeInfo*/ plRam0000000003d232c0;
              if (((*(ushort *)((long)/*System.Math_TypeInfo*/ plRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                 ((int)/*System.Math_TypeInfo*/ plRam0000000003d232c0[0x1c] == 0)) {
                plVar20 = (long *)func_0x00f78ad0();
              }
              return plVar20;
            }
          }
        }
        unaff_x30 = &Atlas_Audio_WeaponAudioManager__MarkForDestroy;
        lVar7 = func_0x00f78af4();
        lVar9 = extraout_x1;
        uVar24 = extraout_s0;
      }
      *(undefined8 *)(puVar4 + -0x40) = unaff_d9;
      *(undefined8 *)(puVar4 + -0x38) = unaff_d8;
      *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar4 + -0x28) = uVar19;
      *(undefined8 *)(puVar4 + -0x20) = uVar11;
      *(long *)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 ***)(puVar4 + -0x10) = unaff_x29;
      *(undefined **)(puVar4 + -8) = unaff_x30;
      if ((bRam0000000003eb4ea2 & 1) == 0) {
        func_0x00f78a20(0x3d297b0);
        func_0x00f78a20(0x3d3dea0);
        bRam0000000003eb4ea2 = 1;
      }
      plVar20 = *(long **)(lVar7 + 0x28);
      uVar11 = func_0x00f78aec(/*Atlas.Audio.WeaponAudioManager.GraveyardInfo_TypeInfo*/ uRam0000000003d297b0);
      /*Atlas.Audio.WeaponAudioManager.GraveyardInfo$$.ctor*/ func_0x0156ec04(uVar24,uVar11,lVar9,0);
      if (plVar20 == (long *)0x0) {
        plVar20 = (long *)func_0x00f78af4();
        if (*(char *)((long)plVar20 + 0x2c) != '\0') {
          plVar8 = (long *)plVar20[2];
          plVar20 = (long *)0x0;
          if (plVar8 != (long *)0x0) {
            *(undefined8 *)(puVar4 + -0x70) = 0x3eb4000;
            *(undefined8 *)(puVar4 + -0x68) = uVar11;
            *(undefined8 *)(puVar4 + -0x60) = 0;
            *(long *)(puVar4 + -0x58) = lVar9;
            *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
            *(undefined **)(puVar4 + -0x48) = &Atlas_Audio_WeaponAudio__Stop;
            if ((bRam0000000003eb56ac & 1) == 0) {
              func_0x00f78a20(0x3d24568,0,0);
              bRam0000000003eb56ac = 1;
            }
            plVar20 = plVar8 + 5;
            iVar6 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(plVar20,0);
            if (iVar6 != 0) {
              lVar9 = plVar8[5];
              if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(lVar9,0);
              /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(plVar20,*(byte *)((long)plVar8 + 0x31) ^ 1,0);
              /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(plVar20,0);
              /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(plVar20,0);
            }
            return plVar8;
          }
        }
        return plVar20;
      }
      uVar19 = *(undefined8 *)(puVar4 + -0x20);
      plVar8 = *(long **)(puVar4 + -0x18);
      uVar1 = *(undefined8 *)(puVar4 + -0x30);
      uVar2 = *(undefined8 *)(puVar4 + -0x28);
      *(undefined8 *)(puVar4 + -0x20) = uVar19;
      *(long **)(puVar4 + -0x18) = plVar8;
      *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
      lVar9 = plVar20[2];
      puVar10 = puRam0000000003d3dea0;
      if (lVar9 == 0) {
code_r0x0242716c:
        uVar11 = uVar19;
        plVar20 = plVar8;
        plVar12 = (long *)func_0x00f78af4();
        lVar9 = extraout_x9;
        uVar5 = extraout_w8;
code_r0x02427170:
        *(uint *)(plVar20 + 3) = uVar5 + 1;
      }
      else {
        uVar5 = *(uint *)(plVar20 + 3);
        plVar12 = plVar20;
        if (uVar5 != *(uint *)(lVar9 + 0x18)) goto code_r0x02427170;
        puVar10 = *(undefined8 **)(*(long *)(puRam0000000003d3dea0[3] + 0xc0) + 0x60);
        plVar12 = (long *)(*(code *)*puVar10)(plVar20,uVar5 + 1);
        lVar9 = plVar20[2];
        uVar5 = *(uint *)(plVar20 + 3);
        *(uint *)(plVar20 + 3) = uVar5 + 1;
        plVar8 = plVar20;
        uVar19 = uVar11;
        if (lVar9 == 0) goto code_r0x0242716c;
      }
      if (uVar5 < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + (long)(int)uVar5 * 8 + 0x20) = uVar11;
        *(int *)((long)plVar20 + 0x1c) = *(int *)((long)plVar20 + 0x1c) + 1;
        return plVar12;
      }
      uVar19 = func_0x00f78b24();
      auVar25 = func_0x00f78ac0(uVar19,0);
      lVar7 = auVar25._8_8_;
      lVar9 = auVar25._0_8_;
      *(undefined8 *)(puVar4 + -0x60) = unaff_x24;
      *(undefined8 *)(puVar4 + -0x58) = unaff_x23;
      *(undefined8 *)(puVar4 + -0x50) = uVar1;
      *(undefined8 *)(puVar4 + -0x48) = uVar2;
      *(undefined8 *)(puVar4 + -0x40) = uVar11;
      *(long **)(puVar4 + -0x38) = plVar20;
      *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x28) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x48))(lVar7,0x14);
      if (lVar9 != 0) {
        pcVar22 = (code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x28);
        lVar21 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
        }
        if (lVar7 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = func_0x00f78adc(lVar7,lVar21);
          if (lVar13 == 0) {
            func_0x00f78e5c(lVar7,lVar21);
            goto code_r0x0242734c;
          }
        }
        (*pcVar22)(lVar9,lVar13,*(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0x28));
        iVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x68))(lVar9);
        return (long *)(ulong)(iVar6 - 1);
      }
      func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x2427350);
      (*pcVar22)();
    }
  }
LAB_015b481c:
  plVar8 = (long *)func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_Usables_GoldenTurdProjectile__CollideWithFloor;
  puStack_40 = &stack0xfffffffffffffff0;
  if (plVar8[0x19] != 0) {
    if (*(char *)(plVar8[0x19] + 0x44) == '\0') {
      if ((char)plVar8[0x36] != '\0') {
        return plVar8;
      }
    }
    else {
      *(undefined4 *)((long)plVar8 + 0x1b4) = 0x3f800000;
    }
    /*Atlas.Gameplay.Usables.ProjectileUsable$$SetFreeFall*/ func_0x014cf408(plVar8,0,0);
    (**(code **)(*plVar8 + 0x3f8))(plVar8,*(undefined8 *)(*plVar8 + 0x400));
    lVar9 = plVar8[9];
    if (lVar9 != 0) {
      lVar7 = *(long *)(lVar9 + 0x48);
      if (lVar7 == 0) {
        return (long *)0x0;
      }
      if ((bRam0000000003eb4939 & 1) == 0) {
        func_0x00f78a20(0x3d3d480,lVar9,0);
        bRam0000000003eb4939 = 1;
      }
      plVar8 = (long *)/*Atlas.Lighting.LightWorld$$GetMemberIndex*/ func_0x014863b4(lVar7,lVar9);
      uVar5 = (uint)plVar8;
      if (uVar5 != 0xffffffff) {
        plVar12 = *(long **)(lVar7 + 0x18);
        if (plVar12 == (long *)0x0) {
          plVar20 = (long *)func_0x00f78af4();
          return plVar20;
        }
        uVar15 = *(uint *)(plVar12 + 3);
        plVar14 = plVar12;
        lVar9 = lRam0000000003d3d480;
        if (uVar15 <= uVar5) {
          plVar14 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar15 = *(uint *)(plVar12 + 3);
        }
        uVar15 = uVar15 - 1;
        *(uint *)(plVar12 + 3) = uVar15;
        if (uVar15 - uVar5 != 0 && (int)uVar5 <= (int)uVar15) {
          lVar9 = plVar12[2];
          plVar14 = (long *)/*System.Array$$Copy*/ func_0x0292b4cc(lVar9,uVar5 + 1,lVar9,plVar8,uVar15 - uVar5,0);
          uVar15 = *(uint *)(plVar12 + 3);
        }
        lVar7 = plVar12[2];
        if (lVar7 == 0) {
          func_0x00f78af4();
        }
        else if (uVar15 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar15 * 200;
          *(undefined8 *)(lVar7 + 0xe0) = 0;
          *(undefined8 *)(lVar7 + 200) = 0;
          *(undefined8 *)(lVar7 + 0xc0) = 0;
          *(undefined8 *)(lVar7 + 0xd8) = 0;
          *(undefined8 *)(lVar7 + 0xd0) = 0;
          *(undefined8 *)(lVar7 + 0xa8) = 0;
          *(undefined8 *)(lVar7 + 0xa0) = 0;
          *(undefined8 *)(lVar7 + 0xb8) = 0;
          *(undefined8 *)(lVar7 + 0xb0) = 0;
          *(undefined8 *)(lVar7 + 0x88) = 0;
          *(undefined8 *)(lVar7 + 0x80) = 0;
          *(undefined8 *)(lVar7 + 0x98) = 0;
          *(undefined8 *)(lVar7 + 0x90) = 0;
          *(undefined8 *)(lVar7 + 0x68) = 0;
          *(undefined8 *)(lVar7 + 0x60) = 0;
          *(undefined8 *)(lVar7 + 0x78) = 0;
          *(undefined8 *)(lVar7 + 0x70) = 0;
          *(undefined8 *)(lVar7 + 0x48) = 0;
          *(undefined8 *)(lVar7 + 0x40) = 0;
          *(undefined8 *)(lVar7 + 0x58) = 0;
          *(undefined8 *)(lVar7 + 0x50) = 0;
          *(undefined8 *)(lVar7 + 0x28) = 0;
          *(undefined8 *)(lVar7 + 0x20) = 0;
          *(undefined8 *)(lVar7 + 0x38) = 0;
          *(undefined8 *)(lVar7 + 0x30) = 0;
          *(int *)((long)plVar12 + 0x1c) = *(int *)((long)plVar12 + 0x1c) + 1;
          return plVar14;
        }
        uVar11 = func_0x00f78b24();
        auVar25 = func_0x00f78ac0(uVar11,0);
        plVar12 = auVar25._0_8_;
        iVar6 = auVar25._8_4_;
        iVar18 = (int)lVar9;
        plVar8 = plVar12;
        if (iVar6 < 0) {
          plVar8 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
        }
        if (iVar18 < 0) {
          plVar8 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
        }
        if ((int)plVar12[3] - iVar6 < iVar18) {
          plVar8 = (long *)/*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
        }
        if (0 < iVar18) {
          iVar3 = (int)plVar12[3] - iVar18;
          *(int *)(plVar12 + 3) = iVar3;
          if (iVar3 - iVar6 != 0 && iVar6 <= iVar3) {
            /*System.Array$$Copy*/ func_0x0292b4cc(plVar12[2],iVar18 + iVar6,plVar12[2],auVar25._8_8_,iVar3 - iVar6,0,in_x6
                            ,in_x7,unaff_x22,plVar20);
            iVar3 = (int)plVar12[3];
          }
          plVar8 = (long *)/*System.Array$$Clear*/ func_0x02920164(plVar12[2],iVar3,lVar9,0);
          *(int *)((long)plVar12 + 0x1c) = *(int *)((long)plVar12 + 0x1c) + 1;
        }
        return plVar8;
      }
      return plVar8;
    }
  }
  auVar25 = func_0x00f78af4();
  if ((bRam0000000003eb5275 & 1) == 0) {
    func_0x00f78a20(0x3d53510);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5275 = 1;
  }
  lVar9 = /*UnityEngine.ContactPoint$$get_otherCollider*/ func_0x0329f040(auVar25._8_8_,0);
  if (lVar9 != 0) {
    lVar9 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar9,uRam0000000003d53510);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar20 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar9,0,0);
    if (((ulong)plVar20 & 1) == 0) {
      if (lVar9 == 0) goto Atlas_Gameplay_Usables_ProjectileUsable___ctor;
      if (*(int *)(lVar9 + 0x18) != 0) {
        return plVar20;
      }
    }
    lVar9 = *auVar25._0_8_;
                    /* WARNING: Could not recover jumptable at 0x015b4978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar20 = (long *)(**(code **)(lVar9 + 0x228))(auVar25._0_8_,*(undefined8 *)(lVar9 + 0x230));
    return plVar20;
  }
Atlas_Gameplay_Usables_ProjectileUsable___ctor:
  plVar20 = (long *)func_0x00f78af4();
  *(undefined4 *)((long)plVar20 + 0x1b4) = 0xbf800000;
  lVar9 = NEON_fmov(0xbf800000,4);
  plVar20[0x1b] = lVar9;
  *(undefined1 *)((long)plVar20 + 0x12d) = 1;
  plVar20[0x33] = _UNK_033f8520;
  return plVar20;
}



// ============================================================
// RVA: 0x15b4820 | Atlas.Gameplay.Usables.GoldenTurdProjectile.CollideWithFloor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_GoldenTurdProjectile__CollideWithFloor(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar10;
  undefined8 unaff_x19;
  int iVar11;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 auVar12 [16];
  undefined1 *puVar13;
  undefined *puVar14;
  
  if (param_1[0x19] != 0) {
    if (*(char *)(param_1[0x19] + 0x44) == '\0') {
      if ((char)param_1[0x36] != '\0') {
        return;
      }
    }
    else {
      *(undefined4 *)((long)param_1 + 0x1b4) = 0x3f800000;
    }
    /*Atlas.Gameplay.Usables.ProjectileUsable$$SetFreeFall*/ func_0x014cf408(param_1,0,0);
    (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
    lVar9 = param_1[9];
    if (lVar9 != 0) {
      lVar4 = *(long *)(lVar9 + 0x48);
      if (lVar4 == 0) {
        return;
      }
      if ((bRam0000000003eb4939 & 1) == 0) {
        func_0x00f78a20(0x3d3d480,lVar9,0);
        bRam0000000003eb4939 = 1;
      }
      uVar3 = /*Atlas.Lighting.LightWorld$$GetMemberIndex*/ func_0x014863b4(lVar4,lVar9);
      uVar2 = (uint)uVar3;
      if (uVar2 != 0xffffffff) {
        lVar9 = *(long *)(lVar4 + 0x18);
        if (lVar9 == 0) {
          func_0x00f78af4();
          return;
        }
        puVar13 = &stack0xfffffffffffffff0;
        uVar10 = *(uint *)(lVar9 + 0x18);
        uVar6 = uRam0000000003d3d480;
        if (uVar10 <= uVar2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar10 = *(uint *)(lVar9 + 0x18);
        }
        uVar10 = uVar10 - 1;
        *(uint *)(lVar9 + 0x18) = uVar10;
        if (uVar10 - uVar2 != 0 && (int)uVar2 <= (int)uVar10) {
          uVar6 = *(undefined8 *)(lVar9 + 0x10);
          /*System.Array$$Copy*/ func_0x0292b4cc(uVar6,uVar2 + 1,uVar6,uVar3,uVar10 - uVar2,0,in_x6,in_x7,unaff_x20,
                          unaff_x19);
          uVar10 = *(uint *)(lVar9 + 0x18);
        }
        lVar4 = *(long *)(lVar9 + 0x10);
        if (lVar4 == 0) {
          func_0x00f78af4();
        }
        else if (uVar10 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar10 * 200;
          *(undefined8 *)(lVar4 + 0xe0) = 0;
          *(undefined8 *)(lVar4 + 200) = 0;
          *(undefined8 *)(lVar4 + 0xc0) = 0;
          *(undefined8 *)(lVar4 + 0xd8) = 0;
          *(undefined8 *)(lVar4 + 0xd0) = 0;
          *(undefined8 *)(lVar4 + 0xa8) = 0;
          *(undefined8 *)(lVar4 + 0xa0) = 0;
          *(undefined8 *)(lVar4 + 0xb8) = 0;
          *(undefined8 *)(lVar4 + 0xb0) = 0;
          *(undefined8 *)(lVar4 + 0x88) = 0;
          *(undefined8 *)(lVar4 + 0x80) = 0;
          *(undefined8 *)(lVar4 + 0x98) = 0;
          *(undefined8 *)(lVar4 + 0x90) = 0;
          *(undefined8 *)(lVar4 + 0x68) = 0;
          *(undefined8 *)(lVar4 + 0x60) = 0;
          *(undefined8 *)(lVar4 + 0x78) = 0;
          *(undefined8 *)(lVar4 + 0x70) = 0;
          *(undefined8 *)(lVar4 + 0x48) = 0;
          *(undefined8 *)(lVar4 + 0x40) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          *(undefined8 *)(lVar4 + 0x50) = 0;
          *(undefined8 *)(lVar4 + 0x28) = 0;
          *(undefined8 *)(lVar4 + 0x20) = 0;
          *(undefined8 *)(lVar4 + 0x38) = 0;
          *(undefined8 *)(lVar4 + 0x30) = 0;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          return;
        }
        uVar7 = func_0x00f78b24();
        auVar12 = func_0x00f78ac0(uVar7,0);
        lVar4 = auVar12._0_8_;
        puVar14 = &System_Collections_Generic_List_LightWorld_Member___RemoveRange;
        iVar8 = auVar12._8_4_;
        iVar11 = (int)uVar6;
        if (iVar8 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
        }
        if (iVar11 < 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
        }
        if (*(int *)(lVar4 + 0x18) - iVar8 < iVar11) {
          /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
        }
        if (0 < iVar11) {
          iVar1 = *(int *)(lVar4 + 0x18) - iVar11;
          *(int *)(lVar4 + 0x18) = iVar1;
          if (iVar1 - iVar8 != 0 && iVar8 <= iVar1) {
            /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(lVar4 + 0x10),iVar11 + iVar8,
                            *(undefined8 *)(lVar4 + 0x10),auVar12._8_8_,iVar1 - iVar8,0,in_x6,in_x7,
                            unaff_x22,unaff_x21,uVar3,lVar9,puVar13,puVar14);
            iVar1 = *(int *)(lVar4 + 0x18);
          }
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar4 + 0x10),iVar1,uVar6,0);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        }
        return;
      }
      return;
    }
  }
  auVar12 = func_0x00f78af4();
  if ((bRam0000000003eb5275 & 1) == 0) {
    func_0x00f78a20(0x3d53510);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5275 = 1;
  }
  lVar9 = /*UnityEngine.ContactPoint$$get_otherCollider*/ func_0x0329f040(auVar12._8_8_,0);
  if (lVar9 == 0) {
Atlas_Gameplay_Usables_ProjectileUsable___ctor:
    lVar9 = func_0x00f78af4();
    *(undefined4 *)(lVar9 + 0x1b4) = 0xbf800000;
    uVar3 = NEON_fmov(0xbf800000,4);
    *(undefined8 *)(lVar9 + 0xd8) = uVar3;
    *(undefined1 *)(lVar9 + 0x12d) = 1;
    *(undefined8 *)(lVar9 + 0x198) = _UNK_033f8520;
    return;
  }
  lVar9 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar9,uRam0000000003d53510);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar9,0,0);
  if ((uVar5 & 1) == 0) {
    if (lVar9 == 0) goto Atlas_Gameplay_Usables_ProjectileUsable___ctor;
    if (*(int *)(lVar9 + 0x18) != 0) {
      return;
    }
  }
  lVar9 = *auVar12._0_8_;
                    /* WARNING: Could not recover jumptable at 0x015b4978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 0x228))(auVar12._0_8_,*(undefined8 *)(lVar9 + 0x230));
  return;
}



// ============================================================
// RVA: 0x15b48a4 | Atlas.Gameplay.Usables.GoldenTurdProjectile.CollideWithEnvironment
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_GoldenTurdProjectile__CollideWithEnvironment
               (long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb5275 & 1) == 0) {
    func_0x00f78a20(0x3d53510);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5275 = 1;
  }
  lVar1 = /*UnityEngine.ContactPoint$$get_otherCollider*/ func_0x0329f040(param_2,0);
  if (lVar1 != 0) {
    lVar1 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar1,uRam0000000003d53510);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      if (lVar1 == 0) goto Atlas_Gameplay_Usables_ProjectileUsable___ctor;
      if (*(int *)(lVar1 + 0x18) != 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x015b4978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
    return;
  }
Atlas_Gameplay_Usables_ProjectileUsable___ctor:
  lVar1 = func_0x00f78af4();
  *(undefined4 *)(lVar1 + 0x1b4) = 0xbf800000;
  uVar3 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar1 + 0xd8) = uVar3;
  *(undefined1 *)(lVar1 + 0x12d) = 1;
  *(undefined8 *)(lVar1 + 0x198) = _UNK_033f8520;
  return;
}



// ============================================================
// RVA: 0x15b4980 | Atlas.Gameplay.Usables.GoldenTurdProjectile..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Usables_GoldenTurdProjectile___ctor(long param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x1b4) = 0xbf800000;
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  *(undefined1 *)(param_1 + 0x12d) = 1;
  *(undefined8 *)(param_1 + 0x198) = _UNK_033f8520;
  return;
}



