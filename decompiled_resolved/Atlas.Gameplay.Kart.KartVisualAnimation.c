// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartVisualAnimation

// ============================================================
// RVA: 0x15e3af0 | Atlas.Gameplay.Kart.KartVisualAnimation.PlayItemPickup
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e3cf4 | Atlas.Gameplay.Kart.KartVisualAnimation.PlayItemUse
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e3e50 | Atlas.Gameplay.Kart.KartVisualAnimation.UnEquipItem
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e41ac | Atlas.Gameplay.Kart.KartVisualAnimation.get_CharacterVisualBehaviour
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartVisualAnimation__get_CharacterVisualBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15e41b4 | Atlas.Gameplay.Kart.KartVisualAnimation.set_DriftEnabled
// ============================================================

void Atlas_Gameplay_Kart_KartVisualAnimation__set_DriftEnabled(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x58) = param_2;
  return;
}



// ============================================================
// RVA: 0x15e41bc | Atlas.Gameplay.Kart.KartVisualAnimation.set_KickupEnabled
// ============================================================

void Atlas_Gameplay_Kart_KartVisualAnimation__set_KickupEnabled(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x59) = param_2;
  return;
}



// ============================================================
// RVA: 0x15e41c4 | Atlas.Gameplay.Kart.KartVisualAnimation.set_TyreSmokeEnabled
// ============================================================

void Atlas_Gameplay_Kart_KartVisualAnimation__set_TyreSmokeEnabled(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5a) = param_2;
  return;
}



// ============================================================
// RVA: 0x15e41cc | Atlas.Gameplay.Kart.KartVisualAnimation.get_HitInvuln
// ============================================================

ulong Atlas_Gameplay_Kart_KartVisualAnimation__get_HitInvuln
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  
  if (*(long *)(param_4 + 0x40) != 0) {
    uVar1 = Atlas_Gameplay_Kart_KartPhysics__get_HitInvuln(*(long *)(param_4 + 0x40),0);
    if ((uVar1 & 1) == 0) {
      uVar1 = (ulong)(*(char *)(param_4 + 0xa8) != '\0');
    }
    else {
      uVar1 = 1;
    }
    return uVar1;
  }
  auVar7 = func_0x00f78af4();
  lVar3 = auVar7._8_8_;
  lVar2 = auVar7._0_8_;
  if ((bRam0000000003eb53cc & 1) == 0) {
    func_0x00f78a20(0x3d59c20);
    func_0x00f78a20(0x3d59c28);
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb53cc = 1;
  }
  *(long *)(lVar2 + 0x10) = lVar3;
  *(undefined8 *)(lVar2 + 0x18) = param_6;
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x28);
    *(long *)(lVar2 + 0x28) = lVar5;
    if (lVar5 != 0) {
      uVar4 = *(undefined8 *)(lVar5 + 0x110);
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar5 + 0x108);
      *(undefined8 *)(lVar2 + 0x38) = uVar4;
      *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar3 + 0x10);
      *(undefined8 *)(lVar2 + 0x48) = param_7;
      if ((*(long *)(lVar5 + 0x18) != 0) &&
         (lVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar5 + 0x18),0), lVar3 != 0)) {
        uVar6 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar3,0);
        *(undefined4 *)(lVar2 + 0x68) = uVar6;
        *(undefined4 *)(lVar2 + 0x6c) = param_2;
        *(undefined4 *)(lVar2 + 0x70) = param_3;
        *(undefined4 *)(lVar2 + 0x74) = 0;
        lVar3 = *(long *)(lVar2 + 0x40);
        uVar4 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ uRam0000000003d23a40);
        /*Atlas.Gameplay.Kart.OnCollisionDelegate$$.ctor*/ func_0x014b301c(uVar4,lVar2,uRam0000000003d59c20,0);
        if (lVar3 != 0) {
          Atlas_Gameplay_Kart_KartPhysics__add_OnCollisionEnterDelegate(lVar3,uVar4,0);
          lVar3 = *(long *)(lVar2 + 0x40);
          uVar4 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ uRam0000000003d23a40);
          /*Atlas.Gameplay.Kart.OnCollisionDelegate$$.ctor*/ func_0x014b301c(uVar4,lVar2,uRam0000000003d59c28,0);
          if (lVar3 != 0) {
            uVar1 = Atlas_Gameplay_Kart_KartPhysics__add_OnCollisionExitDelegate(lVar3,uVar4,0);
            *(undefined1 *)(lVar2 + 0x98) = 0;
            *(undefined1 *)(lVar2 + 0xa0) = 0;
            *(undefined8 *)(lVar2 + 0x78) = 0;
            *(undefined8 *)(lVar2 + 0x80) = 0;
            *(undefined4 *)(lVar2 + 0x88) = 0;
            *(undefined8 *)(lVar2 + 0x20) = param_8;
            return uVar1;
          }
        }
      }
    }
  }
  auVar7 = func_0x00f78af4();
  *(long *)(auVar7._0_8_ + 0x50) = auVar7._8_8_;
  return auVar7._0_8_;
}



// ============================================================
// RVA: 0x15e4214 | Atlas.Gameplay.Kart.KartVisualAnimation.Init
// ============================================================

void Atlas_Gameplay_Kart_KartVisualAnimation__Init
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb53cc & 1) == 0) {
    func_0x00f78a20(0x3d59c20);
    func_0x00f78a20(0x3d59c28);
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb53cc = 1;
  }
  *(long *)(param_4 + 0x10) = param_5;
  *(undefined8 *)(param_4 + 0x18) = param_6;
  if (param_5 != 0) {
    lVar2 = *(long *)(param_5 + 0x28);
    *(long *)(param_4 + 0x28) = lVar2;
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(lVar2 + 0x110);
      *(undefined8 *)(param_4 + 0x30) = *(undefined8 *)(lVar2 + 0x108);
      *(undefined8 *)(param_4 + 0x38) = uVar1;
      *(undefined8 *)(param_4 + 0x40) = *(undefined8 *)(param_5 + 0x10);
      *(undefined8 *)(param_4 + 0x48) = param_7;
      if ((*(long *)(lVar2 + 0x18) != 0) &&
         (lVar2 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar2 + 0x18),0), lVar2 != 0)) {
        uVar3 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar2,0);
        *(undefined4 *)(param_4 + 0x68) = uVar3;
        *(undefined4 *)(param_4 + 0x6c) = param_2;
        *(undefined4 *)(param_4 + 0x70) = param_3;
        *(undefined4 *)(param_4 + 0x74) = 0;
        lVar2 = *(long *)(param_4 + 0x40);
        uVar1 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ uRam0000000003d23a40);
        /*Atlas.Gameplay.Kart.OnCollisionDelegate$$.ctor*/ func_0x014b301c(uVar1,param_4,uRam0000000003d59c20,0);
        if (lVar2 != 0) {
          Atlas_Gameplay_Kart_KartPhysics__add_OnCollisionEnterDelegate(lVar2,uVar1,0);
          lVar2 = *(long *)(param_4 + 0x40);
          uVar1 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ uRam0000000003d23a40);
          /*Atlas.Gameplay.Kart.OnCollisionDelegate$$.ctor*/ func_0x014b301c(uVar1,param_4,uRam0000000003d59c28,0);
          if (lVar2 != 0) {
            Atlas_Gameplay_Kart_KartPhysics__add_OnCollisionExitDelegate(lVar2,uVar1,0);
            *(undefined1 *)(param_4 + 0x98) = 0;
            *(undefined1 *)(param_4 + 0xa0) = 0;
            *(undefined8 *)(param_4 + 0x78) = 0;
            *(undefined8 *)(param_4 + 0x80) = 0;
            *(undefined4 *)(param_4 + 0x88) = 0;
            *(undefined8 *)(param_4 + 0x20) = param_8;
            return;
          }
        }
      }
    }
  }
  auVar4 = func_0x00f78af4();
  *(long *)(auVar4._0_8_ + 0x50) = auVar4._8_8_;
  return;
}



// ============================================================
// RVA: 0x15e436c | Atlas.Gameplay.Kart.KartVisualAnimation.PostInit
// ============================================================

void Atlas_Gameplay_Kart_KartVisualAnimation__PostInit(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}



// ============================================================
// RVA: 0x15e4374 | Atlas.Gameplay.Kart.KartVisualAnimation.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x015e4f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e503c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e509c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e52d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e538c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e57f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e5870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e58ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e7e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e7f50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015e50a0) */
/* WARNING: Removing unreachable block (ram,0x015e50b4) */
/* WARNING: Removing unreachable block (ram,0x015e50ac) */
/* WARNING: Removing unreachable block (ram,0x015e50b8) */
/* WARNING: Removing unreachable block (ram,0x015e50c0) */
/* WARNING: Removing unreachable block (ram,0x015e50d8) */
/* WARNING: Removing unreachable block (ram,0x015e50f8) */
/* WARNING: Removing unreachable block (ram,0x015e512c) */
/* WARNING: Removing unreachable block (ram,0x015e5130) */
/* WARNING: Removing unreachable block (ram,0x015e5134) */
/* WARNING: Removing unreachable block (ram,0x015e5144) */
/* WARNING: Removing unreachable block (ram,0x015e514c) */
/* WARNING: Removing unreachable block (ram,0x015e5174) */
/* WARNING: Removing unreachable block (ram,0x015e5158) */
/* WARNING: Removing unreachable block (ram,0x015e5164) */
/* WARNING: Removing unreachable block (ram,0x015e5180) */
/* WARNING: Removing unreachable block (ram,0x015e5194) */
/* WARNING: Removing unreachable block (ram,0x015e5198) */
/* WARNING: Removing unreachable block (ram,0x015e519c) */
/* WARNING: Removing unreachable block (ram,0x015e51a4) */
/* WARNING: Removing unreachable block (ram,0x015e51b8) */
/* WARNING: Removing unreachable block (ram,0x015e51c4) */
/* WARNING: Removing unreachable block (ram,0x015e51c8) */
/* WARNING: Removing unreachable block (ram,0x015e51cc) */
/* WARNING: Removing unreachable block (ram,0x015e51d0) */
/* WARNING: Removing unreachable block (ram,0x015e51e0) */
/* WARNING: Removing unreachable block (ram,0x015e51e8) */
/* WARNING: Removing unreachable block (ram,0x015e5210) */
/* WARNING: Removing unreachable block (ram,0x015e51f4) */
/* WARNING: Removing unreachable block (ram,0x015e5200) */
/* WARNING: Removing unreachable block (ram,0x015e521c) */
/* WARNING: Removing unreachable block (ram,0x015e5230) */
/* WARNING: Removing unreachable block (ram,0x015e5234) */
/* WARNING: Removing unreachable block (ram,0x015e5238) */
/* WARNING: Removing unreachable block (ram,0x015e5240) */
/* WARNING: Removing unreachable block (ram,0x015e5250) */
/* WARNING: Removing unreachable block (ram,0x015e5258) */
/* WARNING: Removing unreachable block (ram,0x015e525c) */
/* WARNING: Removing unreachable block (ram,0x015e5260) */
/* WARNING: Removing unreachable block (ram,0x015e5264) */
/* WARNING: Removing unreachable block (ram,0x015e5274) */
/* WARNING: Removing unreachable block (ram,0x015e527c) */
/* WARNING: Removing unreachable block (ram,0x015e52a4) */
/* WARNING: Removing unreachable block (ram,0x015e5288) */
/* WARNING: Removing unreachable block (ram,0x015e5294) */
/* WARNING: Removing unreachable block (ram,0x015e52b0) */
/* WARNING: Removing unreachable block (ram,0x015e52c4) */
/* WARNING: Removing unreachable block (ram,0x015e52c8) */
/* WARNING: Removing unreachable block (ram,0x015e52cc) */
/* WARNING: Removing unreachable block (ram,0x015e52d4) */
/* WARNING: Removing unreachable block (ram,0x015e5040) */
/* WARNING: Removing unreachable block (ram,0x015e504c) */
/* WARNING: Removing unreachable block (ram,0x015e4fa0) */
/* WARNING: Removing unreachable block (ram,0x015e4fa8) */
/* WARNING: Removing unreachable block (ram,0x015e58f0) */

ulong Atlas_Gameplay_Kart_KartVisualAnimation__DeInit
                (undefined1 param_1 [16],ulong param_2,undefined1 param_3 [16],undefined4 param_4,
                long param_5)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  long **pplVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined1 uVar22;
  uint uVar23;
  undefined8 uVar25;
  int iVar24;
  undefined8 *puVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  undefined4 *puVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong extraout_x1;
  long extraout_x1_00;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  int *piVar37;
  long lVar38;
  ulong uVar39;
  long *plVar40;
  long *plVar41;
  ulong uVar42;
  ulong unaff_x24;
  char *unaff_x25;
  ulong uVar43;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 *******pppppppuVar44;
  undefined8 *******pppppppuVar45;
  undefined *puVar46;
  float fVar47;
  undefined4 uVar48;
  uint uVar49;
  float fVar50;
  float extraout_s0;
  undefined8 uVar51;
  float fVar52;
  uint uVar53;
  ulong unaff_d8;
  float fVar54;
  ulong unaff_d9;
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [12];
  char acStack_3d0 [432];
  long *plStack_220;
  ulong uStack_218;
  long *plStack_210;
  ulong uStack_208;
  undefined8 ******ppppppuStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  uint uStack_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  float fStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  float *pfStack_1b0;
  uint uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  
  uVar42 = 0x3d59c20;
  if ((bRam0000000003eb53cd & 1) == 0) {
    func_0x00f78a20(0x3d59c20);
    func_0x00f78a20(0x3d59c28);
    func_0x00f78a20(0x3d23a40);
    bRam0000000003eb53cd = 1;
  }
  lVar38 = *(long *)(param_5 + 0x40);
  uVar25 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ uRam0000000003d23a40);
  /*Atlas.Gameplay.Kart.OnCollisionDelegate$$.ctor*/ func_0x014b301c(uVar25,param_5,uRam0000000003d59c20,0);
  if (lVar38 != 0) {
    uVar42 = 0x3d59000;
    Atlas_Gameplay_Kart_KartPhysics__remove_OnCollisionEnterDelegate(lVar38,uVar25,0);
    lVar38 = *(long *)(param_5 + 0x40);
    uVar25 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnCollisionDelegate_TypeInfo*/ uRam0000000003d23a40);
    /*Atlas.Gameplay.Kart.OnCollisionDelegate$$.ctor*/ func_0x014b301c(uVar25,param_5,uRam0000000003d59c28,0);
    if (lVar38 != 0) {
      uVar42 = Atlas_Gameplay_Kart_KartPhysics__remove_OnCollisionExitDelegate(lVar38,uVar25,0);
      *(undefined8 *)(param_5 + 0x28) = 0;
      *(undefined8 *)(param_5 + 0x10) = 0;
      *(undefined8 *)(param_5 + 0x18) = 0;
      return uVar42;
    }
  }
  auVar56 = func_0x00f78af4();
  plVar41 = auVar56._8_8_;
  uVar31 = auVar56._0_8_;
  puVar11 = auStack_1f0;
  pplVar10 = (long **)auStack_1f0;
  puStack_48 = &Atlas_Gameplay_Kart_KartVisualAnimation__Update;
  pppppppuVar45 = (undefined8 *******)&pppppuStack_50;
  uVar39 = 0x3eb5000;
  pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb53ce & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d697f8);
    func_0x00f78a20(0x3d697c0);
    bRam0000000003eb53ce = 1;
  }
  uStack_dc = 0;
  uStack_e0 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  plVar40 = (long *)0x3d23a40;
  if (plVar41 == (long *)0x0) {
code_r0x015e5624:
    func_0x00f78af4();
    plVar27 = plVar40;
code_r0x015e5628:
    uVar25 = func_0x00f78b24();
    puVar46 = &Atlas_Gameplay_Kart_KartVisualBehaviour__SetHopBoostSuccessVFX;
    auVar57 = func_0x00f78ac0(uVar25,0);
  }
  else {
    plVar40 = (long *)0x3d22618;
    fVar52 = *(float *)(uVar31 + 0x74);
    lVar38 = *plVar41;
    uVar35 = (ulong)*(ushort *)(lVar38 + 0x12a);
    if (uVar35 != 0) {
      piVar37 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
      do {
        if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar26 = (undefined8 *)(lVar38 + (long)*piVar37 * 0x10 + 0x138);
          goto code_r0x015e4564;
        }
        piVar37 = piVar37 + 4;
        uVar35 = uVar35 - 1;
      } while (uVar35 != 0);
    }
    puVar26 = (undefined8 *)func_0x00fac1f0(plVar41,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015e4564:
    fVar47 = (float)(*(code *)*puVar26)(plVar41,puVar26[1]);
    *(float *)(uVar31 + 0x74) = fVar52 + fVar47;
    fVar52 = *(float *)(uVar31 + 0x78);
    if (0.0 < fVar52) {
      lVar38 = *plVar41;
      uVar35 = (ulong)*(ushort *)(lVar38 + 0x12a);
      if (uVar35 != 0) {
        piVar37 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
        do {
          if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar26 = (undefined8 *)(lVar38 + (long)*piVar37 * 0x10 + 0x138);
            goto code_r0x015e45d0;
          }
          piVar37 = piVar37 + 4;
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
      }
      puVar26 = (undefined8 *)func_0x00fac1f0(plVar41,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015e45d0:
      fVar47 = (float)(*(code *)*puVar26)(plVar41,puVar26[1]);
      *(float *)(uVar31 + 0x78) = fVar52 - fVar47;
    }
    fVar52 = *(float *)(uVar31 + 0x7c);
    if (0.0 < fVar52) {
      lVar38 = *plVar41;
      uVar35 = (ulong)*(ushort *)(lVar38 + 0x12a);
      if (uVar35 != 0) {
        piVar37 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
        do {
          if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar26 = (undefined8 *)(lVar38 + (long)*piVar37 * 0x10 + 0x138);
            goto code_r0x015e463c;
          }
          piVar37 = piVar37 + 4;
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
      }
      puVar26 = (undefined8 *)func_0x00fac1f0(plVar41,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015e463c:
      fVar47 = (float)(*(code *)*puVar26)(plVar41,puVar26[1]);
      *(float *)(uVar31 + 0x7c) = fVar52 - fVar47;
    }
    fVar52 = *(float *)(uVar31 + 0x80);
    if (0.0 < fVar52) {
      lVar38 = *plVar41;
      uVar35 = (ulong)*(ushort *)(lVar38 + 0x12a);
      if (uVar35 != 0) {
        piVar37 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
        do {
          if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar26 = (undefined8 *)(lVar38 + (long)*piVar37 * 0x10 + 0x138);
            goto code_r0x015e46a8;
          }
          piVar37 = piVar37 + 4;
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
      }
      puVar26 = (undefined8 *)func_0x00fac1f0(plVar41,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015e46a8:
      fVar47 = (float)(*(code *)*puVar26)(plVar41,puVar26[1]);
      *(float *)(uVar31 + 0x80) = fVar52 - fVar47;
    }
    fVar52 = *(float *)(uVar31 + 0x84);
    unaff_d8 = (ulong)(uint)fVar52;
    if (0.0 < fVar52) {
      lVar38 = *plVar41;
      uVar35 = (ulong)*(ushort *)(lVar38 + 0x12a);
      if (uVar35 != 0) {
        piVar37 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
        do {
          if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar26 = (undefined8 *)(lVar38 + (long)*piVar37 * 0x10 + 0x138);
            goto code_r0x015e4714;
          }
          piVar37 = piVar37 + 4;
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
      }
      puVar26 = (undefined8 *)func_0x00fac1f0(plVar41,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015e4714:
      fVar47 = (float)(*(code *)*puVar26)(plVar41,puVar26[1]);
      *(float *)(uVar31 + 0x84) = fVar52 - fVar47;
    }
    if (*(long *)(uVar31 + 0x10) == 0) goto code_r0x015e5624;
    uVar25 = Atlas_Gameplay_Kart_KartComposite__get_NetworkVisualState(*(long *)(uVar31 + 0x10),0);
    uStack_e0 = (undefined4)uVar25;
    uStack_dc = (undefined2)((ulong)uVar25 >> 0x20);
    uStack_1c4 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_e0,4,0);
    uStack_1b4 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_e0,1,0);
    unaff_x26 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_e0,8,0);
    unaff_x27 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_e0,0x10,0);
    uStack_1d0 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_e0,0x20,0);
    uStack_1b8 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_e0,0x40,0);
    /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_e0,0x800,0);
    uVar22 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_e0,0x1000,0);
    *(undefined1 *)(uVar31 + 0xa8) = uVar22;
    uVar53 = *(uint *)(uVar31 + 0xa4);
    unaff_d8 = (ulong)uVar53;
    cVar5 = uStack_dc._1_1_;
    lVar38 = *plVar41;
    uVar42 = (ulong)*(ushort *)(lVar38 + 0x12a);
    if (uVar42 != 0) {
      piVar37 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
      do {
        if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar26 = (undefined8 *)(lVar38 + (long)*piVar37 * 0x10 + 0x138);
          goto code_r0x015e4834;
        }
        piVar37 = piVar37 + 4;
        uVar42 = uVar42 - 1;
      } while (uVar42 != 0);
    }
    puVar26 = (undefined8 *)func_0x00fac1f0(plVar41,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015e4834:
    fVar52 = (float)(*(code *)*puVar26)(plVar41,puVar26[1]);
    param_2 = (ulong)(uint)((float)(int)cVar5 / 127.0);
    fVar52 = fVar52 * 5.0;
    uVar48 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(uVar53,param_2,fVar52,0);
    uVar53 = (uint)param_2;
    *(undefined4 *)(uVar31 + 0xa4) = uVar48;
    bVar3 = *(byte *)(uVar31 + 0xa1);
    uVar39 = (ulong)bVar3;
    bVar8 = uStack_e0._2_1_;
    unaff_x24 = (ulong)uStack_e0._2_1_;
    bVar4 = *(byte *)(uVar31 + 0xa2);
    unaff_x28 = (ulong)bVar4;
    bVar9 = uStack_e0._3_1_;
    uVar42 = (ulong)uStack_e0._3_1_;
    cVar5 = *(char *)(uVar31 + 0xa3);
    *(byte *)(uVar31 + 0xa1) = uStack_e0._2_1_;
    *(byte *)(uVar31 + 0xa2) = uStack_e0._3_1_;
    *(char *)(uVar31 + 0xa3) = (char)uStack_dc;
    if (cVar5 != (char)uStack_dc) {
      plVar40 = *(long **)(uVar31 + 0x10);
      if ((plVar40 != (long *)0x0) && (plVar40[2] != 0)) {
        lVar38 = *(long *)(plVar40[2] + 0x70);
        unaff_x25 = (char *)0x0;
        if (lVar38 != 0) {
          uVar49 = /*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar38,0);
          unaff_d8 = (ulong)uVar49;
          unaff_d9 = (ulong)uVar53;
          fVar47 = fVar52;
          uVar23 = uVar53;
          uVar48 = /*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(lVar38,0);
          param_2 = (ulong)uVar53;
          Atlas_Gameplay_Kart_KartComposite__InvokeRespawn
                    (uVar49,param_2,fVar52,uVar48,uVar23,fVar47,param_4,0xbf800000,plVar40,6,0);
          goto code_r0x015e4914;
        }
      }
      goto code_r0x015e5624;
    }
code_r0x015e4914:
    uVar35 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_e0,0x100,0);
    if ((uVar35 & 1) == 0) {
      uVar35 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_e0,0x200,0);
      if ((uVar35 & 1) == 0) {
        uVar53 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_e0,0x400,0);
        unaff_x25 = (char *)(ulong)(uVar53 ^ 1);
        fStack_1bc = 4.2039e-45;
        if (uVar53 == 0) {
          fStack_1bc = 0.0;
        }
      }
      else {
        unaff_x25 = (char *)0x0;
        fStack_1bc = 2.8026e-45;
      }
    }
    else {
      unaff_x25 = (char *)0x0;
      fStack_1bc = 1.4013e-45;
    }
    plVar27 = (long *)/*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_e0,0x80,0);
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    uStack_1d4 = (uint)unaff_x27;
    lVar38 = *(long *)(*(long *)(uVar31 + 0x40) + 0x60);
    plVar40 = plVar27;
    if (lVar38 == 0) goto code_r0x015e5624;
    uVar35 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_IsHitSpin(lVar38,0);
    if ((*(long *)(uVar31 + 0x40) == 0) ||
       (lVar38 = *(long *)(*(long *)(uVar31 + 0x40) + 0x60), unaff_x27 = uVar35, lVar38 == 0))
    goto code_r0x015e5624;
    uVar28 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_IsInvuln(lVar38,0);
    if ((uVar28 & 1) == 0) {
      uStack_1c0 = (uint)*(byte *)(uVar31 + 0xa8);
    }
    else {
      uStack_1c0 = 1;
    }
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    uStack_1d8 = (uint)plVar27;
    lVar38 = *(long *)(*(long *)(uVar31 + 0x40) + 0x60);
    if (lVar38 == 0) goto code_r0x015e5624;
    plVar40 = (long *)Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_SpinoutType
                                (lVar38,0);
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    uStack_1dc = (uint)unaff_x25;
    pfStack_1b0 = (float *)Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(uVar31 + 0x40),0);
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    unaff_x25 = (char *)Atlas_Gameplay_Kart_KartPhysics__get_Events(*(long *)(uVar31 + 0x40),0);
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    uVar53 = uStack_1b4 | (uint)uVar35;
    unaff_x27 = (ulong)uVar53;
    lVar38 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(uVar31 + 0x40),0);
    fStack_1c8 = fStack_1bc;
    if (*(float *)(lVar38 + 0x70) != 0.0) {
      fStack_1c8 = *(float *)(lVar38 + 0x70);
    }
    if (uVar53 == 0) {
      uStack_1cc = 0;
    }
    else {
      uStack_1cc = *(byte *)(uVar31 + 100) ^ 1;
    }
    bVar15 = (int)plVar40 == 1;
    plVar40 = (long *)(ulong)bVar15;
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    uStack_1e0 = (uint)*(byte *)(uVar31 + 0x65);
    uVar23 = Atlas_Gameplay_Kart_KartPhysics__IsBoosting(*(long *)(uVar31 + 0x40),0);
    if ((((uint)unaff_x26 | uVar23) & 1) == 0) {
      uStack_1a4 = (uint)*(byte *)(uVar31 + 0x5c);
    }
    else {
      uStack_1a4 = 1;
    }
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    unaff_x26 = Atlas_Gameplay_Kart_KartPhysics__IsDrifting(*(long *)(uVar31 + 0x40),0);
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    uStack_1e8 = Atlas_Gameplay_Kart_KartPhysics__IsWheelTouchingGround(*(long *)(uVar31 + 0x40),0);
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    uStack_1e4 = (uint)unaff_x26;
    uVar23 = Atlas_Gameplay_Kart_KartPhysics__IsFlying(*(long *)(uVar31 + 0x40),0);
    if (unaff_x25 == (char *)0x0) goto code_r0x015e5624;
    uVar23 = uStack_1b8 | uVar23;
    bVar16 = bVar3 != bVar8;
    bVar17 = *unaff_x25 != '\0';
    bVar1 = bVar16 || bVar17;
    uVar39 = (ulong)bVar1;
    bVar18 = bVar4 != bVar9;
    bVar3 = unaff_x25[0xe];
    unaff_x24 = (ulong)bVar3;
    bVar19 = bVar3 != 0;
    unaff_x26 = (ulong)(bVar18 || bVar19);
    uVar49 = (uint)(*(char *)(uVar31 + 0x98) == '\0');
    unaff_x25 = (char *)(ulong)(uVar49 | uVar23);
    uStack_1b8 = uVar23;
    if (uVar49 == 0 && (uVar23 & 1) == 0) {
      if (*(long *)(uVar31 + 0x48) == 0) goto code_r0x015e5624;
      param_2 = (ulong)(uint)pfStack_1b0[0x41];
      fVar47 = pfStack_1b0[0x41] / -*(float *)(*(long *)(uVar31 + 0x48) + 0x6c);
      iVar24 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar47,0);
      fVar52 = 1.0;
      if (iVar24 == 0 && fVar47 <= 1.0) {
        fVar52 = fVar47;
      }
      unaff_d8 = (ulong)(uint)fVar52;
      iVar24 = /*System.Single$$IsNaN*/ func_0x029ba610(unaff_d8,0);
      fVar47 = 0.0;
      if (iVar24 == 0 && 0.0 <= fVar52) {
        fVar47 = fVar52;
      }
      *(float *)(uVar31 + 0x9c) = fVar47;
    }
    bVar20 = bVar4 == bVar9;
    bVar21 = bVar3 == 0;
    unaff_x24 = (ulong)(bVar20 && bVar21);
    uVar35 = 0x3d22618;
    uVar28 = 0x3d22618;
    unaff_x28 = uVar35;
    if (*(float *)(uVar31 + 0xa4) == 0.0) {
      if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
      Atlas_Gameplay_Kart_KartPhysics__get_SteerWheelDisplay(*(long *)(uVar31 + 0x40),0);
    }
    if (*(long *)(uVar31 + 0x48) == 0) goto code_r0x015e5624;
    param_2 = (ulong)(uint)-*(float *)(*(long *)(uVar31 + 0x48) + 0x144);
    fVar52 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(0);
    unaff_x28 = uVar28;
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    unaff_d8 = (ulong)(uint)fVar52;
    plVar27 = (long *)Atlas_Gameplay_Kart_KartPhysics__get_Wheels(*(long *)(uVar31 + 0x40),0);
    lVar38 = *plVar27;
    if (lVar38 == 0) goto code_r0x015e5624;
    plVar27 = plVar40;
    unaff_x28 = uVar35;
    if (*(uint *)(lVar38 + 0x18) < 3) goto code_r0x015e5628;
    uStack_118 = *(undefined8 *)(lVar38 + 0xf8);
    uStack_120 = *(undefined8 *)(lVar38 + 0xf0);
    uStack_108 = *(undefined8 *)(lVar38 + 0x108);
    uStack_110 = *(undefined8 *)(lVar38 + 0x100);
    uStack_f8 = *(undefined8 *)(lVar38 + 0x118);
    uStack_100 = *(undefined8 *)(lVar38 + 0x110);
    uStack_f0 = *(ulong *)(lVar38 + 0x120);
    uStack_138 = *(undefined8 *)(lVar38 + 0xd8);
    uStack_140 = *(undefined8 *)(lVar38 + 0xd0);
    uStack_128 = *(undefined8 *)(lVar38 + 0xe8);
    param_2 = *(ulong *)(lVar38 + 0xe0);
    unaff_x28 = uVar28;
    uStack_130 = param_2;
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    plVar29 = (long *)Atlas_Gameplay_Kart_KartPhysics__get_Wheels(*(long *)(uVar31 + 0x40),0);
    lVar38 = *plVar29;
    if (lVar38 == 0) goto code_r0x015e5624;
    unaff_x28 = uVar35;
    if ((*(uint *)(lVar38 + 0x18) & 0xfffffffc) == 0) goto code_r0x015e5628;
    uVar6 = uStack_1c4 | (uint)bVar15 & (uStack_1b4 ^ 0xffffffff);
    uVar42 = (ulong)uVar6;
    uStack_178 = *(undefined8 *)(lVar38 + 0x150);
    uStack_180 = *(undefined8 *)(lVar38 + 0x148);
    uStack_168 = *(undefined8 *)(lVar38 + 0x160);
    uStack_170 = *(undefined8 *)(lVar38 + 0x158);
    uStack_158 = *(undefined8 *)(lVar38 + 0x170);
    uStack_160 = *(undefined8 *)(lVar38 + 0x168);
    uStack_150 = *(ulong *)(lVar38 + 0x178);
    uStack_198 = *(undefined8 *)(lVar38 + 0x130);
    uStack_1a0 = *(undefined8 *)(lVar38 + 0x128);
    uStack_188 = *(undefined8 *)(lVar38 + 0x140);
    param_2 = *(ulong *)(lVar38 + 0x138);
    fVar47 = *pfStack_1b0;
    plVar40 = *(long **)(uVar31 + 0x38);
    uStack_190 = param_2;
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x24 = (ulong)(bVar1 && (bVar20 && bVar21));
    unaff_x26 = (ulong)(bVar1 && (bVar18 || bVar19));
    fVar54 = ABS(fVar52);
    unaff_d9 = (ulong)(uint)fVar54;
    iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar40,0,0);
    if (iVar24 == 0) goto code_r0x015e4e78;
    unaff_x28 = uVar28;
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    plVar40 = *(long **)(uVar31 + 0x38);
    puVar30 = (undefined4 *)Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(uVar31 + 0x40),0);
    if (plVar40 == (long *)0x0) goto code_r0x015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSpeed(*puVar30,plVar40,0);
    if (*(long *)(uVar31 + 0x38) == 0) goto code_r0x015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteer(fVar52,*(long *)(uVar31 + 0x38),0);
    if (*(long *)(uVar31 + 0x38) == 0) goto code_r0x015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteerIntensity(fVar54,*(long *)(uVar31 + 0x38),0);
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    plVar40 = *(long **)(uVar31 + 0x38);
    Atlas_Gameplay_Kart_KartPhysics__get_DriftDisplay(*(long *)(uVar31 + 0x40),0);
    if (plVar40 == (long *)0x0) goto code_r0x015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetDrift(plVar40,0);
    if (uVar49 == 0 && (uVar23 & 1) == 0) {
      if (*(long *)(uVar31 + 0x38) == 0) goto code_r0x015e5624;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__SetLandForce
                (*(undefined4 *)(uVar31 + 0x9c),*(long *)(uVar31 + 0x38),0);
    }
    if (*(long *)(uVar31 + 0x38) == 0) goto code_r0x015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetInAir(*(long *)(uVar31 + 0x38),uStack_1b8,0);
    plVar27 = *(long **)(uVar31 + 0x38);
    if (plVar27 == (long *)0x0) goto code_r0x015e5624;
    (**(code **)(*plVar27 + 0x188))
              (plVar27,uStack_1a4 != 0,fStack_1c8,*(undefined8 *)(*plVar27 + 400));
    if ((bVar16 || bVar17) && (bVar18 || bVar19)) {
      if (*(long *)(uVar31 + 0x38) == 0) goto code_r0x015e5624;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost(*(long *)(uVar31 + 0x38),0);
    }
    if ((bVar16 || bVar17) && (bVar20 && bVar21)) {
      if (*(long *)(uVar31 + 0x38) == 0) goto code_r0x015e5624;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHop(*(long *)(uVar31 + 0x38),0);
    }
    if (uStack_1cc != 0) {
      if (*(long *)(uVar31 + 0x38) == 0) goto code_r0x015e5624;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit(*(long *)(uVar31 + 0x38),uVar42,0);
    }
    if ((uStack_1c0 ^ uStack_1e0) == 1) {
      if (*(long *)(uVar31 + 0x38) == 0) goto code_r0x015e5624;
      Atlas_Gameplay_Kart_CharacterVisualBehaviour__InvulnChanged
                (*(long *)(uVar31 + 0x38),uStack_1c0 != 0,0);
    }
    fVar55 = *(float *)(uVar31 + 0x88);
    if (0.0 < fVar55) {
      lVar38 = *plVar41;
      uVar36 = (ulong)*(ushort *)(lVar38 + 0x12a);
      if (uVar36 != 0) {
        piVar37 = (int *)(*(long *)(lVar38 + 0xb0) + 8);
        do {
          if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar26 = (undefined8 *)(lVar38 + (long)*piVar37 * 0x10 + 0x138);
            goto code_r0x015e4e4c;
          }
          piVar37 = piVar37 + 4;
          uVar36 = uVar36 - 1;
        } while (uVar36 != 0);
      }
      puVar26 = (undefined8 *)func_0x00fac1f0(plVar41,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015e4e4c:
      fVar50 = (float)(*(code *)*puVar26)(plVar41,puVar26[1]);
      fVar55 = fVar55 - fVar50;
      *(float *)(uVar31 + 0x88) = fVar55;
      if (fVar55 <= 0.0) {
        if (*(long *)(uVar31 + 0x38) == 0) goto code_r0x015e5624;
        Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation
                  (*(long *)(uVar31 + 0x38),0);
      }
    }
code_r0x015e4e78:
    plVar40 = *(long **)(uVar31 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar40,0,0);
    if (iVar24 == 0) {
      if (*(long *)(uVar31 + 0x28) == 0) {
        plVar41 = (long *)0x0;
      }
      else {
        plVar41 = *(long **)(*(long *)(uVar31 + 0x28) + 0x118);
      }
      plVar40 = (long *)0x3d23990;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar41,0,0);
      if (iVar24 == 0) goto code_r0x015e5478;
      if (*(char *)((long)pfStack_1b0 + 0x3f) == '\0') {
        uVar39 = (ulong)*(byte *)(uVar31 + 0x5b);
      }
      else {
        uVar39 = 1;
      }
      unaff_x28 = uVar28;
      if ((*(long *)(uVar31 + 0x28) != 0) &&
         (lVar38 = *(long *)(*(long *)(uVar31 + 0x28) + 0x118), lVar38 != 0)) {
        plVar41 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar38,0);
        if ((int)uVar39 == 0) {
          if ((*(long *)(uVar31 + 0x28) != 0) &&
             (lVar38 = *(long *)(*(long *)(uVar31 + 0x28) + 0x118), lVar38 != 0)) {
            uVar35 = Atlas_Gameplay_Kart_GliderVisualBehaviour__get_ShouldGliderBeVisible(lVar38,0);
            if ((uVar35 & 1) == 0) goto code_r0x015e5378;
            if ((*(long *)(uVar31 + 0x28) != 0) &&
               (lVar38 = *(long *)(*(long *)(uVar31 + 0x28) + 0x118), lVar38 != 0)) {
              Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding(lVar38,0,0);
              if ((*(long *)(uVar31 + 0x28) != 0) &&
                 (lVar38 = *(long *)(*(long *)(uVar31 + 0x28) + 0x118), lVar38 != 0)) {
                Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteer(fVar52,lVar38,0);
                if ((*(long *)(uVar31 + 0x28) != 0) &&
                   (lVar38 = *(long *)(*(long *)(uVar31 + 0x28) + 0x118), lVar38 != 0)) {
                  Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteerIntensity(fVar54,lVar38,0);
                  plVar41 = *(long **)(uVar31 + 0x38);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar41,0,0);
                  if (iVar24 != 0) {
                    if (*(long *)(uVar31 + 0x38) == 0) goto code_r0x015e5624;
                    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding
                              (*(long *)(uVar31 + 0x38),0,0);
                  }
                  plVar41 = *(long **)(uVar31 + 0x30);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar41,0,0);
                  if (iVar24 != 0) {
                    if (*(long *)(uVar31 + 0x30) == 0) goto code_r0x015e5624;
                    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding
                              (*(long *)(uVar31 + 0x30),0,0);
                  }
code_r0x015e5478:
                  unaff_x28 = uVar28;
                  if (*(long *)(uVar31 + 0x10) != 0) {
                    lVar38 = *(long *)(*(long *)(uVar31 + 0x10) + 0x90);
                    uVar35 = 0;
                    if ((lVar38 == 0) || (uVar35 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar38,0), (int)uVar35 == 0))
                    goto code_r0x015e55cc;
                    if ((uStack_1a4 & (*(byte *)(uVar31 + 0xa0) ^ 1)) == 0) {
code_r0x015e54c0:
                      if ((*(byte *)(uVar31 + 0xa0) == 0) || (uStack_1a4 != 0))
                      goto code_r0x015e55cc;
                      plVar41 = *(long **)(uVar31 + 0x50);
                      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar41,0,0);
                      if (iVar24 != 0) {
                        if (*(long *)(uVar31 + 0x50) == 0) goto code_r0x015e5624;
                        /*Atlas.Rendering.PostProcessingEffectBehaviour$$EndEffect*/ func_0x014cb544(*(long *)(uVar31 + 0x50),/*STR('Boost')*/ uRam0000000003d697c0,0,0);
                      }
                      if (((*(long *)(uVar31 + 0x10) != 0) &&
                          (lVar38 = *(long *)(*(long *)(uVar31 + 0x10) + 0x78), lVar38 != 0)) &&
                         (lVar38 = *(long *)(lVar38 + 0x40), lVar38 != 0)) {
                        uVar35 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$InvokeStopSplat*/ func_0x015a631c(lVar38,/*STR('BoostSplash')*/ uRam0000000003d697f8,0);
code_r0x015e55cc:
                        *(char *)(uVar31 + 100) = (char)uVar53;
                        *(bool *)(uVar31 + 0x65) = uStack_1c0 != 0;
                        *(char *)(uVar31 + 0x98) = (char)uStack_1b8;
                        *(bool *)(uVar31 + 0xa0) = uStack_1a4 != 0;
                        return uVar35;
                      }
                    }
                    else if ((*(long *)(uVar31 + 0x10) != 0) &&
                            (lVar38 = *(long *)(*(long *)(uVar31 + 0x10) + 0x90), lVar38 != 0)) {
                      if (*(char *)(lVar38 + 0x98) != '\0') goto code_r0x015e54c0;
                      plVar41 = *(long **)(uVar31 + 0x50);
                      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar41,0,0);
                      if (iVar24 != 0) {
                        if (*(long *)(uVar31 + 0x50) == 0) goto code_r0x015e5624;
                        /*Atlas.Rendering.PostProcessingEffectBehaviour$$StartEffect*/ func_0x014cb310(*(long *)(uVar31 + 0x50),/*STR('Boost')*/ uRam0000000003d697c0,1,0);
                      }
                      if (((*(long *)(uVar31 + 0x10) != 0) &&
                          (lVar38 = *(long *)(*(long *)(uVar31 + 0x10) + 0x78), lVar38 != 0)) &&
                         (lVar38 = *(long *)(lVar38 + 0x40), lVar38 != 0)) {
                        uVar35 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$InvokePlaySplat*/ func_0x015a6308(lVar38,/*STR('BoostSplash')*/ uRam0000000003d697f8,1,0);
                        goto code_r0x015e55cc;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
code_r0x015e5378:
          if (plVar41 != (long *)0x0) {
            uVar28 = (ulong)((int)uVar39 != 0);
            puVar13 = auStack_1f0;
            plVar27 = plVar41;
            plVar40 = (long *)0x3d23990;
            puVar46 = &UNK_015e5390;
            goto code_r0x0322ef1c;
          }
        }
      }
      goto code_r0x015e5624;
    }
    unaff_x28 = uVar28;
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    plVar40 = *(long **)(uVar31 + 0x30);
    puVar30 = (undefined4 *)Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(uVar31 + 0x40),0);
    if (plVar40 == (long *)0x0) goto code_r0x015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSpeed(*puVar30,plVar40,0);
    if (*(long *)(uVar31 + 0x30) == 0) goto code_r0x015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteer(fVar52,*(long *)(uVar31 + 0x30),0);
    if (*(long *)(uVar31 + 0x30) == 0) goto code_r0x015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteerIntensity(fVar54,*(long *)(uVar31 + 0x30),0);
    if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
    lVar38 = *(long *)(uVar31 + 0x30);
    Atlas_Gameplay_Kart_KartPhysics__get_DriftDisplay(*(long *)(uVar31 + 0x40),0);
    plVar40 = (long *)0x0;
    if (lVar38 == 0) goto code_r0x015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetDrift(lVar38,0);
    uVar7 = uStack_1d8;
    plVar40 = (long *)(ulong)uStack_1d8;
    if (uVar49 == 0 && (uVar23 & 1) == 0) {
      if (*(long *)(uVar31 + 0x30) == 0) goto code_r0x015e5624;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__SetLandForce
                (*(undefined4 *)(uVar31 + 0x9c),*(long *)(uVar31 + 0x30),0);
    }
    if (*(long *)(uVar31 + 0x30) == 0) goto code_r0x015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetInAir(*(long *)(uVar31 + 0x30),uStack_1b8,0);
    uVar23 = uStack_1dc;
    plVar27 = *(long **)(uVar31 + 0x30);
    uVar39 = (ulong)uStack_1dc;
    if (plVar27 == (long *)0x0) goto code_r0x015e5624;
    (**(code **)(*plVar27 + 0x188))
              (plVar27,uStack_1a4 != 0,fStack_1c8,*(undefined8 *)(*plVar27 + 400));
    uVar49 = uStack_1e4;
    if (!bVar16 && !bVar17 || !bVar18 && !bVar19) {
      unaff_x25 = (char *)(ulong)uStack_1e4;
      if ((bVar16 || bVar17) && (bVar20 && bVar21)) {
        if (*(long *)(uVar31 + 0x30) == 0) goto code_r0x015e5624;
        Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHop(*(long *)(uVar31 + 0x30),0);
      }
      if (uStack_1cc != 0) {
        if (*(long *)(uVar31 + 0x30) == 0) goto code_r0x015e5624;
        Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit(*(long *)(uVar31 + 0x30),uVar42,0);
      }
      if (uVar23 != 0) {
        fStack_1bc = pfStack_1b0[0x60];
      }
      if ((uVar7 & 1) == 0) {
        if (*(long *)(uVar31 + 0x40) == 0) goto code_r0x015e5624;
        uVar36 = Atlas_Gameplay_Kart_KartPhysics__IsDriftStartLeftSide(*(long *)(uVar31 + 0x40),0);
      }
      else {
        uVar36 = 1;
      }
      fVar52 = 0.0;
      if (*(char *)(uVar31 + 0x58) != '\0') {
        fVar52 = fStack_1bc;
      }
      plVar40 = (long *)(ulong)(uint)fVar52;
      if (fVar52 == *(float *)(uVar31 + 0x60)) {
        lVar38 = *(long *)(uVar31 + 0x30);
        if (lVar38 != 0) {
          uVar28 = (ulong)(uStack_1d4 | uVar49);
          plVar41 = (long *)(ulong)(uStack_1d0 | uStack_1e8);
          uVar36 = uStack_150 >> 0x20;
          uVar39 = uStack_f0 >> 0x20;
          fVar52 = 0.0;
          if (*(char *)(uVar31 + 0x59) != '\0' && (uVar53 & uVar6) == 0) {
            fVar52 = fVar47;
          }
          puVar46 = &UNK_015e50a0;
          fVar47 = fVar52;
code_r0x015e58c4:
          *(ulong *)(puVar11 + -0x30) = unaff_d9;
          *(ulong *)(puVar11 + -0x28) = unaff_d8;
          *(long *)(puVar11 + -0x20) = auVar56._8_8_;
          *(long *)(puVar11 + -0x18) = auVar56._0_8_;
          *(undefined8 ********)(puVar11 + -0x10) = pppppppuVar45;
          *(undefined **)(puVar11 + -8) = puVar46;
          lVar33 = *(long *)(lVar38 + 0x98);
          plVar40 = (long *)(lVar38 + 0x138);
          piVar37 = (int *)(lVar38 + 0x130);
          puVar14 = puVar11 + -0x160;
          puVar12 = puVar11 + -0x160;
          *(ulong *)(puVar11 + -0x90) = unaff_d9;
          *(ulong *)(puVar11 + -0x88) = (ulong)(uint)fVar52;
          *(ulong *)(puVar11 + -0x80) = uVar35;
          *(ulong *)(puVar11 + -0x78) = unaff_x27;
          *(ulong *)(puVar11 + -0x70) = unaff_x24;
          *(ulong *)(puVar11 + -0x68) = uVar42;
          *(long **)(puVar11 + -0x60) = plVar41;
          *(ulong *)(puVar11 + -0x58) = uVar28;
          *(long *)(puVar11 + -0x50) = lVar38;
          *(ulong *)(puVar11 + -0x48) = uVar36;
          *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
          *(undefined **)(puVar11 + -0x38) = &UNK_015e58f0;
          puVar13 = puVar11 + -0x40;
          if ((bRam0000000003eb53e6 & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb53e6 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar42 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar33,0,0);
          if ((uVar42 & 1) == 0) {
            iVar24 = 0;
            *(undefined8 *)(puVar11 + -0xa8) = 0;
            *(undefined8 *)(puVar11 + -0xb0) = 0;
            *(undefined8 *)(puVar11 + -0x98) = 0;
            *(undefined8 *)(puVar11 + -0xa0) = 0;
            *(undefined8 *)(puVar11 + -200) = 0;
            *(undefined8 *)(puVar11 + -0xd0) = 0;
            *(undefined8 *)(puVar11 + -0xb8) = 0;
            *(undefined8 *)(puVar11 + -0xc0) = 0;
            *(undefined8 *)(puVar11 + -0xe8) = 0;
            *(undefined8 *)(puVar11 + -0xf0) = 0;
            *(undefined8 *)(puVar11 + -0xd8) = 0;
            *(undefined8 *)(puVar11 + -0xe0) = 0;
            *(undefined8 *)(puVar11 + -0x108) = 0;
            *(undefined8 *)(puVar11 + -0x110) = 0;
            *(undefined8 *)(puVar11 + -0xf8) = 0;
            *(undefined8 *)(puVar11 + -0x100) = 0;
            *(undefined8 *)(puVar11 + -0x128) = 0;
            *(undefined8 *)(puVar11 + -0x130) = 0;
            *(undefined8 *)(puVar11 + -0x118) = 0;
            *(undefined8 *)(puVar11 + -0x120) = 0;
            *(undefined8 *)(puVar11 + -0x148) = 0;
            *(undefined8 *)(puVar11 + -0x150) = 0;
            *(undefined8 *)(puVar11 + -0x138) = 0;
            *(undefined8 *)(puVar11 + -0x140) = 0;
            *(undefined8 *)(puVar11 + -0x158) = 0;
            *(undefined8 *)(puVar11 + -0x160) = 0;
            if (((int)uVar39 != 0) && (10.0 <= fVar47)) {
              if (lVar33 == 0) {
                func_0x00f78af4();
code_r0x015e7ebc:
                uVar25 = func_0x00f78b24();
                auVar56 = func_0x00f78ac0(uVar25,0);
                lVar38 = auVar56._0_8_;
                *(long *)(puVar11 + -400) = lVar33;
                *(ulong *)(puVar11 + -0x188) = uVar39;
                *(int **)(puVar11 + -0x180) = piVar37;
                *(long **)(puVar11 + -0x178) = plVar40;
                *(undefined1 **)(puVar11 + -0x170) = puVar13;
                *(undefined **)(puVar11 + -0x168) =
                     &Atlas_Gameplay_Kart_KartVisualBehaviour__ConfigureEffectsForPlayer;
                puVar13 = puVar11 + -0x170;
                if ((bRam0000000003eb53e2 & 1) == 0) {
                  func_0x00f78a20(0x3d23990);
                  bRam0000000003eb53e2 = 1;
                }
                uVar42 = /*Core.Networking.NetworkPlayer$$IsRemote*/ func_0x0165aba0(auVar56._8_8_,0);
                if ((int)uVar42 == 0) {
                  return uVar42;
                }
                uVar25 = *(undefined8 *)(lVar38 + 0x88);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar24 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar25,0);
                if (iVar24 == 0) {
                  uVar25 = *(undefined8 *)(lVar38 + 0x90);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar42 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar25,0);
                  if ((int)uVar42 == 0) {
                    return uVar42;
                  }
                  lVar33 = *(long *)(lVar38 + 0x90);
                  puVar13 = *(undefined1 **)(puVar11 + -0x170);
                  puVar46 = *(undefined **)(puVar11 + -0x168);
                  uVar25 = *(undefined8 *)(puVar11 + -0x180);
                  lVar38 = *(long *)(puVar11 + -0x178);
                }
                else {
                  lVar33 = *(long *)(lVar38 + 0x88);
                  puVar46 = &UNK_015e7f54;
                  puVar12 = puVar11 + -400;
                }
                iVar24 = 0x28;
                puVar14 = puVar12 + -0xb0;
                *(undefined8 *)(puVar12 + -0x20) = uVar25;
                *(long *)(puVar12 + -0x18) = lVar38;
                *(undefined1 **)(puVar12 + -0x10) = puVar13;
                *(undefined **)(puVar12 + -8) = puVar46;
                if (lVar33 != 0) {
                  uVar25 = /*UnityEngine.ParticleSystem$$get_emission*/ func_0x032965e4(lVar33,0);
                  *(undefined8 *)(puVar12 + -0x28) = uVar25;
                  /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8(puVar12 + -0x48,0x42200000,0);
                  *(undefined8 *)(puVar12 + -0x68) = *(undefined8 *)(puVar12 + -0x40);
                  *(undefined8 *)(puVar12 + -0x70) = *(undefined8 *)(puVar12 + -0x48);
                  *(undefined8 *)(puVar12 + -0x58) = *(undefined8 *)(puVar12 + -0x30);
                  *(undefined8 *)(puVar12 + -0x60) = *(undefined8 *)(puVar12 + -0x38);
                  /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverTime*/ func_0x032967cc(puVar12 + -0x28,puVar12 + -0x70,0);
                  /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8(puVar12 + -0x90,0,0);
                  *(undefined8 *)(puVar12 + -0xa8) = *(undefined8 *)(puVar12 + -0x88);
                  *(undefined8 *)(puVar12 + -0xb0) = *(undefined8 *)(puVar12 + -0x90);
                  *(undefined8 *)(puVar12 + -0x98) = *(undefined8 *)(puVar12 + -0x78);
                  *(undefined8 *)(puVar12 + -0xa0) = *(undefined8 *)(puVar12 + -0x80);
                  uVar42 = /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverDistance*/ func_0x0329b0fc(puVar12 + -0x28,puVar12 + -0xb0,0);
                  return uVar42;
                }
                func_0x00f78af4();
                *(undefined8 *)(puVar12 + -0xd0) = uVar25;
                *(long *)(puVar12 + -200) = lVar38;
                *(undefined1 **)(puVar12 + -0xc0) = puVar12 + -0x10;
                *(undefined **)(puVar12 + -0xb8) =
                     &Atlas_Gameplay_Kart_KartVisualBehaviour__SetParticleSystemEmitting;
                if (iVar24 != 0) {
                  if (extraout_x1_00 != 0) {
                    uVar42 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1_00,0);
                    if ((uVar42 & 1) != 0) {
                      return uVar42;
                    }
                    *(undefined8 *)(puVar12 + -0xd0) = *(undefined8 *)(puVar12 + -0xd0);
                    *(undefined8 *)(puVar12 + -200) = *(undefined8 *)(puVar12 + -200);
                    *(undefined8 *)(puVar12 + -0xc0) = *(undefined8 *)(puVar12 + -0xc0);
                    *(undefined8 *)(puVar12 + -0xb8) = *(undefined8 *)(puVar12 + -0xb8);
                    if (pcRam0000000003ec2148 == (code *)0x0) {
                      pcRam0000000003ec2148 =
                           (code *)func_0x00f789d4(
                                                  "UnityEngine.ParticleSystem::Play(System.Boolean)"
                                                  ,0);
                    }
                    /* WARNING: Could not recover jumptable at 0x03298910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar42 = (*pcRam0000000003ec2148)(extraout_x1_00,1);
                    return uVar42;
                  }
code_r0x015e80b0:
                  auVar58 = func_0x00f78af4();
                  lVar38 = *(long *)(auVar58._0_8_ + 0x18);
                  if ((lVar38 != 0) && (0 < (int)*(uint *)(lVar38 + 0x18))) {
                    uVar42 = 0;
                    do {
                      if (*(int *)(lVar38 + (long)(int)uVar42 * 0xd0 + 0x20) == auVar58._8_4_) {
                        return uVar42;
                      }
                      uVar53 = (int)uVar42 + 1;
                      uVar42 = (ulong)uVar53;
                    } while (*(uint *)(lVar38 + 0x18) != uVar53);
                  }
                  return 0xffffffff;
                }
                if (extraout_x1_00 == 0) goto code_r0x015e80b0;
                uVar42 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1_00,0);
                if ((int)uVar42 == 0) {
                  return uVar42;
                }
                puVar13 = *(undefined1 **)(puVar12 + -0xc0);
                puVar46 = *(undefined **)(puVar12 + -0xb8);
                lVar38 = *(long *)(puVar12 + -0xd0);
                plVar40 = *(long **)(puVar12 + -200);
                lVar33 = extraout_x1_00;
                goto code_r0x03298a54;
              }
              lVar38 = *(long *)(lVar33 + 0x18);
              if ((lVar38 != 0) && (uVar53 = *(uint *)(lVar38 + 0x18), 0 < (int)uVar53)) {
                uVar23 = 0;
                puVar26 = (undefined8 *)(lVar38 + 0x20);
                do {
                  if (*(int *)(lVar38 + (long)(int)uVar23 * 0xd0 + 0x20) == (int)uVar39) {
                    if (-1 < (int)uVar23) {
                      if (uVar53 <= uVar23) goto code_r0x015e7ebc;
                      uVar25 = puVar26[0x14];
                      uVar51 = puVar26[0x17];
                      uVar32 = puVar26[0x16];
                      *(undefined8 *)(puVar11 + -0xb8) = puVar26[0x15];
                      *(undefined8 *)(puVar11 + -0xc0) = uVar25;
                      *(undefined8 *)(puVar11 + -0xa8) = uVar51;
                      *(undefined8 *)(puVar11 + -0xb0) = uVar32;
                      uVar25 = puVar26[0x18];
                      *(undefined8 *)(puVar11 + -0x98) = puVar26[0x19];
                      *(undefined8 *)(puVar11 + -0xa0) = uVar25;
                      uVar25 = puVar26[0xc];
                      uVar51 = puVar26[0xf];
                      uVar32 = puVar26[0xe];
                      *(undefined8 *)(puVar11 + -0xf8) = puVar26[0xd];
                      *(undefined8 *)(puVar11 + -0x100) = uVar25;
                      *(undefined8 *)(puVar11 + -0xe8) = uVar51;
                      *(undefined8 *)(puVar11 + -0xf0) = uVar32;
                      uVar51 = puVar26[0x10];
                      uVar32 = puVar26[0x13];
                      uVar25 = puVar26[0x12];
                      *(undefined8 *)(puVar11 + -0xd8) = puVar26[0x11];
                      *(undefined8 *)(puVar11 + -0xe0) = uVar51;
                      *(undefined8 *)(puVar11 + -200) = uVar32;
                      *(undefined8 *)(puVar11 + -0xd0) = uVar25;
                      uVar25 = puVar26[4];
                      uVar51 = puVar26[7];
                      uVar32 = puVar26[6];
                      *(undefined8 *)(puVar11 + -0x138) = puVar26[5];
                      *(undefined8 *)(puVar11 + -0x140) = uVar25;
                      *(undefined8 *)(puVar11 + -0x128) = uVar51;
                      *(undefined8 *)(puVar11 + -0x130) = uVar32;
                      uVar51 = puVar26[8];
                      uVar32 = puVar26[0xb];
                      uVar25 = puVar26[10];
                      *(undefined8 *)(puVar11 + -0x118) = puVar26[9];
                      *(undefined8 *)(puVar11 + -0x120) = uVar51;
                      *(undefined8 *)(puVar11 + -0x108) = uVar32;
                      *(undefined8 *)(puVar11 + -0x110) = uVar25;
                      uVar51 = *puVar26;
                      uVar32 = puVar26[3];
                      uVar25 = puVar26[2];
                      *(undefined8 *)(puVar11 + -0x158) = puVar26[1];
                      *(undefined8 *)(puVar11 + -0x160) = uVar51;
                      *(undefined8 *)(puVar11 + -0x148) = uVar32;
                      *(undefined8 *)(puVar11 + -0x150) = uVar25;
                      iVar24 = *(int *)(puVar11 + -0x160);
                      goto code_r0x015e7d98;
                    }
                    break;
                  }
                  uVar23 = uVar23 + 1;
                  puVar26 = puVar26 + 0x1a;
                } while (uVar53 != uVar23);
              }
              iVar24 = 0;
            }
code_r0x015e7d98:
            if (iVar24 != *piVar37) {
              if (puVar11[-0x140] != '\0') {
                /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar42,*(undefined8 *)(puVar11 + -0x158),puVar11 + -0x138);
                uVar25 = *(undefined8 *)(puVar11 + -0x150);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar32 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar25,0,0);
                if ((int)uVar32 != 0) {
                  /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar32,uVar25,puVar11 + -0x100);
                }
                uVar25 = *(undefined8 *)(puVar11 + -0x148);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar32 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar25,0,0);
                if ((int)uVar32 != 0) {
                  /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar32,uVar25,puVar11 + -200);
                }
              }
              *piVar37 = iVar24;
            }
            lVar38 = *(long *)(puVar11 + -0x158);
            lVar33 = *plVar40;
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar42 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar38,lVar33,0);
            if ((int)uVar42 != 0) {
              lVar33 = *plVar40;
              if (lVar33 != 0) {
                puVar46 = &UNK_015e7e84;
code_r0x03298a54:
                *(long *)(puVar14 + -0x20) = lVar38;
                *(long **)(puVar14 + -0x18) = plVar40;
                *(undefined1 **)(puVar14 + -0x10) = puVar13;
                *(undefined **)(puVar14 + -8) = puVar46;
                if (pcRam0000000003ec2158 == (code *)0x0) {
                  pcRam0000000003ec2158 =
                       (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)"
                                               ,0);
                }
                    /* WARNING: Could not recover jumptable at 0x03298a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar42 = (*pcRam0000000003ec2158)(lVar33,1,1);
                return uVar42;
              }
              uVar42 = 0;
              if (lVar38 != 0) {
                uVar42 = /*UnityEngine.ParticleSystem$$Play*/ func_0x032988d0(lVar38,0);
              }
              *plVar40 = lVar38;
            }
          }
          return uVar42;
        }
      }
      else {
        auVar58._8_4_ = fVar52;
        auVar58._0_8_ = *(long *)(uVar31 + 0x30);
        if (*(long *)(uVar31 + 0x30) != 0) {
          puVar46 = &UNK_015e5040;
          unaff_x28 = uVar35;
          pppppppuVar44 = pppppppuVar45;
          goto code_r0x015e56d8;
        }
      }
      goto code_r0x015e5624;
    }
    if (*(long *)(uVar31 + 0x30) == 0) goto code_r0x015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost(*(long *)(uVar31 + 0x30),0);
    if (*(long *)(uVar31 + 0x30) == 0) goto code_r0x015e5624;
    auVar57._8_8_ = 1;
    auVar57._0_8_ = *(long *)(uVar31 + 0x30);
    puVar46 = &UNK_015e4fa0;
    plVar27 = plVar40;
    unaff_x28 = uVar35;
  }
  uVar28 = auVar57._8_8_;
  lVar38 = auVar57._0_8_;
  auVar56._8_8_ = lVar38;
  auVar56._0_8_ = uVar28;
  pplVar10 = &plStack_220;
  pppppppuVar44 = &ppppppuStack_200;
  plVar40 = (long *)0x3d23990;
  plStack_220 = plVar27;
  uStack_218 = uVar39;
  plStack_210 = plVar41;
  uStack_208 = uVar31;
  ppppppuStack_200 = pppppppuVar45;
  puStack_1f8 = puVar46;
  if ((bRam0000000003eb53e4 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e4 = 1;
  }
  uVar39 = *(ulong *)(lVar38 + 0xc0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar36 = 0;
  uVar31 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar39,0);
  if ((int)uVar31 == 0) {
    return uVar31;
  }
  plVar41 = *(long **)(lVar38 + 0xc0);
  if (plVar41 == (long *)0x0) {
    puVar46 = &Atlas_Gameplay_Kart_KartVisualBehaviour__SetDriftLevel;
    auVar58 = func_0x00f78af4();
code_r0x015e56d8:
    uVar28 = auVar58._0_8_;
    plVar27 = auVar56._8_8_;
    puVar13 = (undefined1 *)((long)pplVar10 + -0x70);
    puVar11 = (undefined1 *)((long)pplVar10 + -0x70);
    *(ulong *)((long)pplVar10 + -0x60) = unaff_x28;
    *(ulong *)((long)pplVar10 + -0x58) = unaff_x27;
    *(ulong *)((long)pplVar10 + -0x50) = unaff_x26;
    *(char **)((long)pplVar10 + -0x48) = unaff_x25;
    *(ulong *)((long)pplVar10 + -0x40) = unaff_x24;
    *(ulong *)((long)pplVar10 + -0x38) = uVar42;
    *(long **)((long)pplVar10 + -0x30) = plVar40;
    *(ulong *)((long)pplVar10 + -0x28) = uVar39;
    *(long **)((long)pplVar10 + -0x20) = plVar27;
    *(long *)((long)pplVar10 + -0x18) = auVar56._0_8_;
    *(undefined8 ********)((long)pplVar10 + -0x10) = pppppppuVar44;
    *(undefined **)((long)pplVar10 + -8) = puVar46;
    pppppppuVar45 = (undefined8 *******)((long)pplVar10 + -0x10);
    *(int *)((long)pplVar10 + -0x68) = (int)uVar36;
    *(int *)((long)pplVar10 + -100) = auVar58._8_4_;
    uVar31 = 0x3eb5000;
    uVar39 = uVar28;
    if ((bRam0000000003eb53df & 1) == 0) {
      uVar39 = func_0x00f78a20(0x3d23990);
      bRam0000000003eb53df = 1;
    }
    if (*(ulong *)(uVar28 + 0x80) != 0) {
      uVar42 = *(ulong *)(uVar28 + 0x80);
      if (*(ulong *)(uVar28 + 0x1a0) != 0) {
        uVar42 = *(ulong *)(uVar28 + 0x1a0);
      }
      *(ulong *)(uVar28 + 0x1a8) = uVar42;
      uVar53 = *(uint *)(uVar42 + 0x18);
      if (0 < (int)uVar53) {
        unaff_x24 = 0;
        *(uint *)((long)pplVar10 + -0x6c) = *(uint *)((long)pplVar10 + -0x68) ^ 1;
        unaff_x27 = 0x3d23990;
        plVar41 = plVar40;
        uVar35 = unaff_x28;
        do {
          fVar52 = (float)param_2;
          uVar23 = (uint)unaff_x24;
          if (uVar53 <= uVar23) {
code_r0x015e58b4:
            uVar25 = func_0x00f78b24();
            func_0x00f78ac0(uVar25,0);
code_r0x015e58c0:
            auVar56._8_8_ = plVar27;
            auVar56._0_8_ = uVar31;
            puVar46 = &Atlas_Gameplay_Kart_KartVisualBehaviour__UpdateKickUp;
            lVar38 = func_0x00f78af4();
            uVar39 = extraout_x1;
            fVar47 = extraout_s0;
            goto code_r0x015e58c4;
          }
          lVar38 = uVar42 + (long)(int)uVar23 * 0x18;
          iVar24 = *(int *)(lVar38 + 0x20);
          uVar31 = *(ulong *)(lVar38 + 0x28);
          iVar2 = *(int *)((long)pplVar10 + -100);
          if (uVar31 == 0) goto code_r0x015e58c0;
          uVar35 = *(ulong *)(lVar38 + 0x30);
          if (0 < (int)*(ulong *)(uVar31 + 0x18)) {
            uVar43 = 0;
            uVar28 = (ulong)((uint)(iVar24 == iVar2) & *(uint *)((long)pplVar10 + -0x68));
            uVar34 = *(ulong *)(uVar31 + 0x18) & 0xffffffff;
            plVar27 = (long *)(uVar31 + 0x20);
            do {
              fVar52 = (float)param_2;
              if (uVar34 <= uVar43) goto code_r0x015e58b4;
              plVar41 = (long *)plVar27[uVar43];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar36 = 0;
              uVar39 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar41,0);
              fVar52 = (float)param_2;
              if ((int)uVar39 != 0) {
                if (plVar41 == (long *)0x0) goto code_r0x015e58c0;
                puVar46 = &UNK_015e57f4;
                puVar13 = (undefined1 *)((long)pplVar10 + -0x70);
                uVar39 = uVar28;
                plVar40 = plVar41;
                goto code_r0x0322ef1c;
              }
              uVar43 = uVar43 + 1;
              uVar34 = (ulong)*(uint *)(uVar31 + 0x18);
            } while ((long)uVar43 < (long)(int)*(uint *)(uVar31 + 0x18));
          }
          fVar52 = (float)param_2;
          if (uVar35 == 0) goto code_r0x015e58c0;
          if (0 < (int)*(ulong *)(uVar35 + 0x18)) {
            uVar31 = 0;
            uVar28 = (ulong)((uint)(iVar24 == iVar2) & *(uint *)((long)pplVar10 + -0x6c));
            uVar43 = *(ulong *)(uVar35 + 0x18) & 0xffffffff;
            plVar27 = (long *)(uVar35 + 0x20);
            do {
              fVar52 = (float)param_2;
              if (uVar43 <= uVar31) goto code_r0x015e58b4;
              plVar41 = (long *)plVar27[uVar31];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar36 = 0;
              uVar39 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar41,0);
              fVar52 = (float)param_2;
              if ((int)uVar39 != 0) {
                if (plVar41 == (long *)0x0) goto code_r0x015e58c0;
                puVar46 = &UNK_015e5874;
                uVar39 = uVar28;
                plVar40 = plVar41;
                goto code_r0x0322ef1c;
              }
              uVar31 = uVar31 + 1;
              uVar43 = (ulong)*(uint *)(uVar35 + 0x18);
            } while ((long)uVar31 < (long)(int)*(uint *)(uVar35 + 0x18));
          }
          unaff_x24 = (ulong)(uVar23 + 1);
          uVar53 = *(uint *)(uVar42 + 0x18);
        } while ((int)(uVar23 + 1) < (int)uVar53);
      }
    }
    return uVar39;
  }
  puVar13 = auStack_1f0;
  uVar31 = uStack_208;
  plVar27 = plStack_210;
  uVar39 = uStack_218;
  plVar40 = plStack_220;
  pppppppuVar45 = (undefined8 *******)ppppppuStack_200;
  puVar46 = puStack_1f8;
code_r0x0322ef1c:
  *(long **)(puVar13 + -0x30) = plVar40;
  *(ulong *)(puVar13 + -0x28) = uVar39;
  *(long **)(puVar13 + -0x20) = plVar27;
  *(ulong *)(puVar13 + -0x18) = uVar31;
  *(undefined8 ********)(puVar13 + -0x10) = pppppppuVar45;
  *(undefined **)(puVar13 + -8) = puVar46;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar42 = (*pcRam0000000003ebf4c0)(plVar41,uVar28);
  return uVar42;
}



// ============================================================
// RVA: 0x15e4464 | Atlas.Gameplay.Kart.KartVisualAnimation.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x015e4f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e503c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e509c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e52d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e538c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e57f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e5870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e58ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e7e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e7f50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015e50a0) */
/* WARNING: Removing unreachable block (ram,0x015e50b4) */
/* WARNING: Removing unreachable block (ram,0x015e50ac) */
/* WARNING: Removing unreachable block (ram,0x015e50b8) */
/* WARNING: Removing unreachable block (ram,0x015e50c0) */
/* WARNING: Removing unreachable block (ram,0x015e50d8) */
/* WARNING: Removing unreachable block (ram,0x015e50f8) */
/* WARNING: Removing unreachable block (ram,0x015e512c) */
/* WARNING: Removing unreachable block (ram,0x015e5130) */
/* WARNING: Removing unreachable block (ram,0x015e5134) */
/* WARNING: Removing unreachable block (ram,0x015e5144) */
/* WARNING: Removing unreachable block (ram,0x015e514c) */
/* WARNING: Removing unreachable block (ram,0x015e5174) */
/* WARNING: Removing unreachable block (ram,0x015e5158) */
/* WARNING: Removing unreachable block (ram,0x015e5164) */
/* WARNING: Removing unreachable block (ram,0x015e5180) */
/* WARNING: Removing unreachable block (ram,0x015e5194) */
/* WARNING: Removing unreachable block (ram,0x015e5198) */
/* WARNING: Removing unreachable block (ram,0x015e519c) */
/* WARNING: Removing unreachable block (ram,0x015e51a4) */
/* WARNING: Removing unreachable block (ram,0x015e51b8) */
/* WARNING: Removing unreachable block (ram,0x015e51c4) */
/* WARNING: Removing unreachable block (ram,0x015e51c8) */
/* WARNING: Removing unreachable block (ram,0x015e51cc) */
/* WARNING: Removing unreachable block (ram,0x015e51d0) */
/* WARNING: Removing unreachable block (ram,0x015e51e0) */
/* WARNING: Removing unreachable block (ram,0x015e51e8) */
/* WARNING: Removing unreachable block (ram,0x015e5210) */
/* WARNING: Removing unreachable block (ram,0x015e51f4) */
/* WARNING: Removing unreachable block (ram,0x015e5200) */
/* WARNING: Removing unreachable block (ram,0x015e521c) */
/* WARNING: Removing unreachable block (ram,0x015e5230) */
/* WARNING: Removing unreachable block (ram,0x015e5234) */
/* WARNING: Removing unreachable block (ram,0x015e5238) */
/* WARNING: Removing unreachable block (ram,0x015e5240) */
/* WARNING: Removing unreachable block (ram,0x015e5250) */
/* WARNING: Removing unreachable block (ram,0x015e5258) */
/* WARNING: Removing unreachable block (ram,0x015e525c) */
/* WARNING: Removing unreachable block (ram,0x015e5260) */
/* WARNING: Removing unreachable block (ram,0x015e5264) */
/* WARNING: Removing unreachable block (ram,0x015e5274) */
/* WARNING: Removing unreachable block (ram,0x015e527c) */
/* WARNING: Removing unreachable block (ram,0x015e52a4) */
/* WARNING: Removing unreachable block (ram,0x015e5288) */
/* WARNING: Removing unreachable block (ram,0x015e5294) */
/* WARNING: Removing unreachable block (ram,0x015e52b0) */
/* WARNING: Removing unreachable block (ram,0x015e52c4) */
/* WARNING: Removing unreachable block (ram,0x015e52c8) */
/* WARNING: Removing unreachable block (ram,0x015e52cc) */
/* WARNING: Removing unreachable block (ram,0x015e52d4) */
/* WARNING: Removing unreachable block (ram,0x015e5040) */
/* WARNING: Removing unreachable block (ram,0x015e504c) */
/* WARNING: Removing unreachable block (ram,0x015e4fa0) */
/* WARNING: Removing unreachable block (ram,0x015e4fa8) */
/* WARNING: Removing unreachable block (ram,0x015e58f0) */

ulong Atlas_Gameplay_Kart_KartVisualAnimation__Update
                (undefined1 param_1 [16],ulong param_2,undefined1 param_3 [16],undefined4 param_4,
                ulong param_5,long *param_6)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  long **pplVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  undefined4 *puVar30;
  undefined8 uVar31;
  ulong extraout_x1;
  long extraout_x1_00;
  long lVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  int *piVar37;
  ulong uVar38;
  long *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  char *unaff_x25;
  ulong uVar39;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined8 *******pppppppuVar40;
  undefined8 *******pppppppuVar41;
  undefined *puVar42;
  float fVar43;
  undefined4 uVar44;
  uint uVar45;
  float fVar46;
  float extraout_s0;
  undefined8 uVar47;
  float fVar48;
  uint uVar49;
  ulong unaff_d8;
  float fVar50;
  ulong unaff_d9;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [12];
  char acStack_390 [432];
  long *plStack_1e0;
  ulong uStack_1d8;
  long *plStack_1d0;
  ulong uStack_1c8;
  undefined8 ******ppppppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  float fStack_188;
  uint uStack_184;
  uint uStack_180;
  float fStack_17c;
  uint uStack_178;
  uint uStack_174;
  float *pfStack_170;
  uint uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  
  auVar52._8_8_ = param_5;
  auVar52._0_8_ = param_6;
  puVar11 = auStack_1b0;
  pplVar10 = (long **)auStack_1b0;
  puVar13 = auStack_1b0;
  pppppppuVar41 = (undefined8 *******)&stack0xfffffffffffffff0;
  uVar38 = 0x3eb5000;
  if ((bRam0000000003eb53ce & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d697f8);
    func_0x00f78a20(0x3d697c0);
    bRam0000000003eb53ce = 1;
  }
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  if (param_6 == (long *)0x0) {
LAB_015e5624:
    func_0x00f78af4();
    plVar27 = unaff_x22;
code_r0x015e5628:
    uVar26 = func_0x00f78b24();
    puVar42 = &Atlas_Gameplay_Kart_KartVisualBehaviour__SetHopBoostSuccessVFX;
    auVar52 = func_0x00f78ac0(uVar26,0);
  }
  else {
    unaff_x22 = (long *)0x3d22618;
    fVar48 = *(float *)(param_5 + 0x74);
    lVar33 = *param_6;
    uVar35 = (ulong)*(ushort *)(lVar33 + 0x12a);
    if (uVar35 != 0) {
      piVar37 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar25 = (undefined8 *)(lVar33 + (long)*piVar37 * 0x10 + 0x138);
          goto LAB_015e4564;
        }
        piVar37 = piVar37 + 4;
        uVar35 = uVar35 - 1;
      } while (uVar35 != 0);
    }
    puVar25 = (undefined8 *)func_0x00fac1f0(param_6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_015e4564:
    fVar43 = (float)(*(code *)*puVar25)(param_6,puVar25[1]);
    *(float *)(param_5 + 0x74) = fVar48 + fVar43;
    fVar48 = *(float *)(param_5 + 0x78);
    if (0.0 < fVar48) {
      lVar33 = *param_6;
      uVar35 = (ulong)*(ushort *)(lVar33 + 0x12a);
      if (uVar35 != 0) {
        piVar37 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar25 = (undefined8 *)(lVar33 + (long)*piVar37 * 0x10 + 0x138);
            goto code_r0x015e45d0;
          }
          piVar37 = piVar37 + 4;
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
      }
      puVar25 = (undefined8 *)func_0x00fac1f0(param_6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015e45d0:
      fVar43 = (float)(*(code *)*puVar25)(param_6,puVar25[1]);
      *(float *)(param_5 + 0x78) = fVar48 - fVar43;
    }
    fVar48 = *(float *)(param_5 + 0x7c);
    if (0.0 < fVar48) {
      lVar33 = *param_6;
      uVar35 = (ulong)*(ushort *)(lVar33 + 0x12a);
      if (uVar35 != 0) {
        piVar37 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar25 = (undefined8 *)(lVar33 + (long)*piVar37 * 0x10 + 0x138);
            goto code_r0x015e463c;
          }
          piVar37 = piVar37 + 4;
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
      }
      puVar25 = (undefined8 *)func_0x00fac1f0(param_6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015e463c:
      fVar43 = (float)(*(code *)*puVar25)(param_6,puVar25[1]);
      *(float *)(param_5 + 0x7c) = fVar48 - fVar43;
    }
    fVar48 = *(float *)(param_5 + 0x80);
    if (0.0 < fVar48) {
      lVar33 = *param_6;
      uVar35 = (ulong)*(ushort *)(lVar33 + 0x12a);
      if (uVar35 != 0) {
        piVar37 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar25 = (undefined8 *)(lVar33 + (long)*piVar37 * 0x10 + 0x138);
            goto code_r0x015e46a8;
          }
          piVar37 = piVar37 + 4;
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
      }
      puVar25 = (undefined8 *)func_0x00fac1f0(param_6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015e46a8:
      fVar43 = (float)(*(code *)*puVar25)(param_6,puVar25[1]);
      *(float *)(param_5 + 0x80) = fVar48 - fVar43;
    }
    fVar48 = *(float *)(param_5 + 0x84);
    unaff_d8 = (ulong)(uint)fVar48;
    if (0.0 < fVar48) {
      lVar33 = *param_6;
      uVar35 = (ulong)*(ushort *)(lVar33 + 0x12a);
      if (uVar35 != 0) {
        piVar37 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar25 = (undefined8 *)(lVar33 + (long)*piVar37 * 0x10 + 0x138);
            goto code_r0x015e4714;
          }
          piVar37 = piVar37 + 4;
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
      }
      puVar25 = (undefined8 *)func_0x00fac1f0(param_6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015e4714:
      fVar43 = (float)(*(code *)*puVar25)(param_6,puVar25[1]);
      *(float *)(param_5 + 0x84) = fVar48 - fVar43;
    }
    if (*(long *)(param_5 + 0x10) == 0) goto LAB_015e5624;
    uVar26 = Atlas_Gameplay_Kart_KartComposite__get_NetworkVisualState(*(long *)(param_5 + 0x10),0);
    uStack_a0 = (undefined4)uVar26;
    uStack_9c = (undefined2)((ulong)uVar26 >> 0x20);
    uStack_184 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_a0,4,0);
    uStack_174 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_a0,1,0);
    unaff_x26 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_a0,8,0);
    unaff_x27 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_a0,0x10,0);
    uStack_190 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_a0,0x20,0);
    uStack_178 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_a0,0x40,0);
    /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_a0,0x800,0);
    uVar22 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_a0,0x1000,0);
    *(undefined1 *)(param_5 + 0xa8) = uVar22;
    uVar49 = *(uint *)(param_5 + 0xa4);
    unaff_d8 = (ulong)uVar49;
    cVar5 = uStack_9c._1_1_;
    lVar33 = *param_6;
    uVar38 = (ulong)*(ushort *)(lVar33 + 0x12a);
    if (uVar38 != 0) {
      piVar37 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar25 = (undefined8 *)(lVar33 + (long)*piVar37 * 0x10 + 0x138);
          goto code_r0x015e4834;
        }
        piVar37 = piVar37 + 4;
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
    }
    puVar25 = (undefined8 *)func_0x00fac1f0(param_6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015e4834:
    fVar48 = (float)(*(code *)*puVar25)(param_6,puVar25[1]);
    param_2 = (ulong)(uint)((float)(int)cVar5 / 127.0);
    fVar48 = fVar48 * 5.0;
    uVar44 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(uVar49,param_2,fVar48,0);
    uVar49 = (uint)param_2;
    *(undefined4 *)(param_5 + 0xa4) = uVar44;
    bVar3 = *(byte *)(param_5 + 0xa1);
    uVar38 = (ulong)bVar3;
    bVar8 = uStack_a0._2_1_;
    unaff_x24 = (ulong)uStack_a0._2_1_;
    bVar4 = *(byte *)(param_5 + 0xa2);
    unaff_x28 = (ulong)bVar4;
    bVar9 = uStack_a0._3_1_;
    unaff_x23 = (ulong)uStack_a0._3_1_;
    cVar5 = *(char *)(param_5 + 0xa3);
    *(byte *)(param_5 + 0xa1) = uStack_a0._2_1_;
    *(byte *)(param_5 + 0xa2) = uStack_a0._3_1_;
    *(char *)(param_5 + 0xa3) = (char)uStack_9c;
    if (cVar5 != (char)uStack_9c) {
      unaff_x22 = *(long **)(param_5 + 0x10);
      if ((unaff_x22 != (long *)0x0) && (unaff_x22[2] != 0)) {
        lVar33 = *(long *)(unaff_x22[2] + 0x70);
        unaff_x25 = (char *)0x0;
        if (lVar33 != 0) {
          uVar45 = /*UnityEngine.Rigidbody$$get_position*/ func_0x032a2e48(lVar33,0);
          unaff_d8 = (ulong)uVar45;
          unaff_d9 = (ulong)uVar49;
          fVar43 = fVar48;
          uVar23 = uVar49;
          uVar44 = /*UnityEngine.Rigidbody$$get_rotation*/ func_0x032a2fa0(lVar33,0);
          param_2 = (ulong)uVar49;
          Atlas_Gameplay_Kart_KartComposite__InvokeRespawn
                    (uVar45,param_2,fVar48,uVar44,uVar23,fVar43,param_4,0xbf800000,unaff_x22,6,0);
          goto code_r0x015e4914;
        }
      }
      goto LAB_015e5624;
    }
code_r0x015e4914:
    uVar35 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_a0,0x100,0);
    if ((uVar35 & 1) == 0) {
      uVar35 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_a0,0x200,0);
      if ((uVar35 & 1) == 0) {
        uVar49 = /*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_a0,0x400,0);
        unaff_x25 = (char *)(ulong)(uVar49 ^ 1);
        fStack_17c = 4.2039e-45;
        if (uVar49 == 0) {
          fStack_17c = 0.0;
        }
      }
      else {
        unaff_x25 = (char *)0x0;
        fStack_17c = 2.8026e-45;
      }
    }
    else {
      unaff_x25 = (char *)0x0;
      fStack_17c = 1.4013e-45;
    }
    plVar27 = (long *)/*Core.Networking.NetworkVisualState$$IsSet*/ func_0x016618cc(&uStack_a0,0x80,0);
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    uStack_194 = (uint)unaff_x27;
    lVar33 = *(long *)(*(long *)(param_5 + 0x40) + 0x60);
    unaff_x22 = plVar27;
    if (lVar33 == 0) goto LAB_015e5624;
    uVar35 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_IsHitSpin(lVar33,0);
    if ((*(long *)(param_5 + 0x40) == 0) ||
       (lVar33 = *(long *)(*(long *)(param_5 + 0x40) + 0x60), unaff_x27 = uVar35, lVar33 == 0))
    goto LAB_015e5624;
    uVar28 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_IsInvuln(lVar33,0);
    if ((uVar28 & 1) == 0) {
      uStack_180 = (uint)*(byte *)(param_5 + 0xa8);
    }
    else {
      uStack_180 = 1;
    }
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    uStack_198 = (uint)plVar27;
    lVar33 = *(long *)(*(long *)(param_5 + 0x40) + 0x60);
    if (lVar33 == 0) goto LAB_015e5624;
    unaff_x22 = (long *)Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_SpinoutType
                                  (lVar33,0);
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    uStack_19c = (uint)unaff_x25;
    pfStack_170 = (float *)Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_5 + 0x40),0);
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    unaff_x25 = (char *)Atlas_Gameplay_Kart_KartPhysics__get_Events(*(long *)(param_5 + 0x40),0);
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    uVar49 = uStack_174 | (uint)uVar35;
    unaff_x27 = (ulong)uVar49;
    lVar33 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_5 + 0x40),0);
    fStack_188 = fStack_17c;
    if (*(float *)(lVar33 + 0x70) != 0.0) {
      fStack_188 = *(float *)(lVar33 + 0x70);
    }
    if (uVar49 == 0) {
      uStack_18c = 0;
    }
    else {
      uStack_18c = *(byte *)(param_5 + 100) ^ 1;
    }
    bVar15 = (int)unaff_x22 == 1;
    unaff_x22 = (long *)(ulong)bVar15;
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    uStack_1a0 = (uint)*(byte *)(param_5 + 0x65);
    uVar23 = Atlas_Gameplay_Kart_KartPhysics__IsBoosting(*(long *)(param_5 + 0x40),0);
    if ((((uint)unaff_x26 | uVar23) & 1) == 0) {
      uStack_164 = (uint)*(byte *)(param_5 + 0x5c);
    }
    else {
      uStack_164 = 1;
    }
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    unaff_x26 = Atlas_Gameplay_Kart_KartPhysics__IsDrifting(*(long *)(param_5 + 0x40),0);
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    uStack_1a8 = Atlas_Gameplay_Kart_KartPhysics__IsWheelTouchingGround(*(long *)(param_5 + 0x40),0)
    ;
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    uStack_1a4 = (uint)unaff_x26;
    uVar23 = Atlas_Gameplay_Kart_KartPhysics__IsFlying(*(long *)(param_5 + 0x40),0);
    if (unaff_x25 == (char *)0x0) goto LAB_015e5624;
    uVar23 = uStack_178 | uVar23;
    bVar16 = bVar3 != bVar8;
    bVar17 = *unaff_x25 != '\0';
    bVar1 = bVar16 || bVar17;
    uVar38 = (ulong)bVar1;
    bVar18 = bVar4 != bVar9;
    bVar3 = unaff_x25[0xe];
    unaff_x24 = (ulong)bVar3;
    bVar19 = bVar3 != 0;
    unaff_x26 = (ulong)(bVar18 || bVar19);
    uVar45 = (uint)(*(char *)(param_5 + 0x98) == '\0');
    unaff_x25 = (char *)(ulong)(uVar45 | uVar23);
    uStack_178 = uVar23;
    if (uVar45 == 0 && (uVar23 & 1) == 0) {
      if (*(long *)(param_5 + 0x48) == 0) goto LAB_015e5624;
      param_2 = (ulong)(uint)pfStack_170[0x41];
      fVar43 = pfStack_170[0x41] / -*(float *)(*(long *)(param_5 + 0x48) + 0x6c);
      iVar24 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar43,0);
      fVar48 = 1.0;
      if (iVar24 == 0 && fVar43 <= 1.0) {
        fVar48 = fVar43;
      }
      unaff_d8 = (ulong)(uint)fVar48;
      iVar24 = /*System.Single$$IsNaN*/ func_0x029ba610(unaff_d8,0);
      fVar43 = 0.0;
      if (iVar24 == 0 && 0.0 <= fVar48) {
        fVar43 = fVar48;
      }
      *(float *)(param_5 + 0x9c) = fVar43;
    }
    bVar20 = bVar4 == bVar9;
    bVar21 = bVar3 == 0;
    unaff_x24 = (ulong)(bVar20 && bVar21);
    uVar35 = 0x3d22618;
    uVar28 = 0x3d22618;
    unaff_x28 = uVar35;
    if (*(float *)(param_5 + 0xa4) == 0.0) {
      if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
      Atlas_Gameplay_Kart_KartPhysics__get_SteerWheelDisplay(*(long *)(param_5 + 0x40),0);
    }
    if (*(long *)(param_5 + 0x48) == 0) goto LAB_015e5624;
    param_2 = (ulong)(uint)-*(float *)(*(long *)(param_5 + 0x48) + 0x144);
    fVar48 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(0);
    unaff_x28 = uVar28;
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    unaff_d8 = (ulong)(uint)fVar48;
    plVar27 = (long *)Atlas_Gameplay_Kart_KartPhysics__get_Wheels(*(long *)(param_5 + 0x40),0);
    lVar33 = *plVar27;
    if (lVar33 == 0) goto LAB_015e5624;
    plVar27 = unaff_x22;
    unaff_x28 = uVar35;
    if (*(uint *)(lVar33 + 0x18) < 3) goto code_r0x015e5628;
    uStack_d8 = *(undefined8 *)(lVar33 + 0xf8);
    uStack_e0 = *(undefined8 *)(lVar33 + 0xf0);
    uStack_c8 = *(undefined8 *)(lVar33 + 0x108);
    uStack_d0 = *(undefined8 *)(lVar33 + 0x100);
    uStack_b8 = *(undefined8 *)(lVar33 + 0x118);
    uStack_c0 = *(undefined8 *)(lVar33 + 0x110);
    uStack_b0 = *(ulong *)(lVar33 + 0x120);
    uStack_f8 = *(undefined8 *)(lVar33 + 0xd8);
    uStack_100 = *(undefined8 *)(lVar33 + 0xd0);
    uStack_e8 = *(undefined8 *)(lVar33 + 0xe8);
    param_2 = *(ulong *)(lVar33 + 0xe0);
    unaff_x28 = uVar28;
    uStack_f0 = param_2;
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    plVar29 = (long *)Atlas_Gameplay_Kart_KartPhysics__get_Wheels(*(long *)(param_5 + 0x40),0);
    lVar33 = *plVar29;
    if (lVar33 == 0) goto LAB_015e5624;
    unaff_x28 = uVar35;
    if ((*(uint *)(lVar33 + 0x18) & 0xfffffffc) == 0) goto code_r0x015e5628;
    uVar6 = uStack_184 | (uint)bVar15 & (uStack_174 ^ 0xffffffff);
    unaff_x23 = (ulong)uVar6;
    uStack_138 = *(undefined8 *)(lVar33 + 0x150);
    uStack_140 = *(undefined8 *)(lVar33 + 0x148);
    uStack_128 = *(undefined8 *)(lVar33 + 0x160);
    uStack_130 = *(undefined8 *)(lVar33 + 0x158);
    uStack_118 = *(undefined8 *)(lVar33 + 0x170);
    uStack_120 = *(undefined8 *)(lVar33 + 0x168);
    uStack_110 = *(ulong *)(lVar33 + 0x178);
    uStack_158 = *(undefined8 *)(lVar33 + 0x130);
    uStack_160 = *(undefined8 *)(lVar33 + 0x128);
    uStack_148 = *(undefined8 *)(lVar33 + 0x140);
    param_2 = *(ulong *)(lVar33 + 0x138);
    fVar43 = *pfStack_170;
    unaff_x22 = *(long **)(param_5 + 0x38);
    uStack_150 = param_2;
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x24 = (ulong)(bVar1 && (bVar20 && bVar21));
    unaff_x26 = (ulong)(bVar1 && (bVar18 || bVar19));
    fVar50 = ABS(fVar48);
    unaff_d9 = (ulong)(uint)fVar50;
    iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x22,0,0);
    if (iVar24 == 0) goto code_r0x015e4e78;
    unaff_x28 = uVar28;
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    unaff_x22 = *(long **)(param_5 + 0x38);
    puVar30 = (undefined4 *)Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_5 + 0x40),0);
    if (unaff_x22 == (long *)0x0) goto LAB_015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSpeed(*puVar30,unaff_x22,0);
    if (*(long *)(param_5 + 0x38) == 0) goto LAB_015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteer(fVar48,*(long *)(param_5 + 0x38),0);
    if (*(long *)(param_5 + 0x38) == 0) goto LAB_015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteerIntensity(fVar50,*(long *)(param_5 + 0x38),0);
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    unaff_x22 = *(long **)(param_5 + 0x38);
    Atlas_Gameplay_Kart_KartPhysics__get_DriftDisplay(*(long *)(param_5 + 0x40),0);
    if (unaff_x22 == (long *)0x0) goto LAB_015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetDrift(unaff_x22,0);
    if (uVar45 == 0 && (uVar23 & 1) == 0) {
      if (*(long *)(param_5 + 0x38) == 0) goto LAB_015e5624;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__SetLandForce
                (*(undefined4 *)(param_5 + 0x9c),*(long *)(param_5 + 0x38),0);
    }
    if (*(long *)(param_5 + 0x38) == 0) goto LAB_015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetInAir(*(long *)(param_5 + 0x38),uStack_178,0);
    plVar27 = *(long **)(param_5 + 0x38);
    if (plVar27 == (long *)0x0) goto LAB_015e5624;
    (**(code **)(*plVar27 + 0x188))
              (plVar27,uStack_164 != 0,fStack_188,*(undefined8 *)(*plVar27 + 400));
    if ((bVar16 || bVar17) && (bVar18 || bVar19)) {
      if (*(long *)(param_5 + 0x38) == 0) goto LAB_015e5624;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost(*(long *)(param_5 + 0x38),0);
    }
    if ((bVar16 || bVar17) && (bVar20 && bVar21)) {
      if (*(long *)(param_5 + 0x38) == 0) goto LAB_015e5624;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHop(*(long *)(param_5 + 0x38),0);
    }
    if (uStack_18c != 0) {
      if (*(long *)(param_5 + 0x38) == 0) goto LAB_015e5624;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit(*(long *)(param_5 + 0x38),unaff_x23,0);
    }
    if ((uStack_180 ^ uStack_1a0) == 1) {
      if (*(long *)(param_5 + 0x38) == 0) goto LAB_015e5624;
      Atlas_Gameplay_Kart_CharacterVisualBehaviour__InvulnChanged
                (*(long *)(param_5 + 0x38),uStack_180 != 0,0);
    }
    fVar51 = *(float *)(param_5 + 0x88);
    if (0.0 < fVar51) {
      lVar33 = *param_6;
      uVar36 = (ulong)*(ushort *)(lVar33 + 0x12a);
      if (uVar36 != 0) {
        piVar37 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar37 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar25 = (undefined8 *)(lVar33 + (long)*piVar37 * 0x10 + 0x138);
            goto code_r0x015e4e4c;
          }
          piVar37 = piVar37 + 4;
          uVar36 = uVar36 - 1;
        } while (uVar36 != 0);
      }
      puVar25 = (undefined8 *)func_0x00fac1f0(param_6,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x015e4e4c:
      fVar46 = (float)(*(code *)*puVar25)(param_6,puVar25[1]);
      fVar51 = fVar51 - fVar46;
      *(float *)(param_5 + 0x88) = fVar51;
      if (fVar51 <= 0.0) {
        if (*(long *)(param_5 + 0x38) == 0) goto LAB_015e5624;
        Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation
                  (*(long *)(param_5 + 0x38),0);
      }
    }
code_r0x015e4e78:
    unaff_x22 = *(long **)(param_5 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x22,0,0);
    if (iVar24 == 0) {
      if (*(long *)(param_5 + 0x28) == 0) {
        param_6 = (long *)0x0;
      }
      else {
        param_6 = *(long **)(*(long *)(param_5 + 0x28) + 0x118);
      }
      unaff_x22 = (long *)0x3d23990;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_6,0,0);
      if (iVar24 == 0) goto code_r0x015e5478;
      if (*(char *)((long)pfStack_170 + 0x3f) == '\0') {
        uVar38 = (ulong)*(byte *)(param_5 + 0x5b);
      }
      else {
        uVar38 = 1;
      }
      unaff_x28 = uVar28;
      if ((*(long *)(param_5 + 0x28) != 0) &&
         (lVar33 = *(long *)(*(long *)(param_5 + 0x28) + 0x118), lVar33 != 0)) {
        param_6 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar33,0);
        if ((int)uVar38 == 0) {
          if ((*(long *)(param_5 + 0x28) != 0) &&
             (lVar33 = *(long *)(*(long *)(param_5 + 0x28) + 0x118), lVar33 != 0)) {
            uVar35 = Atlas_Gameplay_Kart_GliderVisualBehaviour__get_ShouldGliderBeVisible(lVar33,0);
            if ((uVar35 & 1) == 0) goto code_r0x015e5378;
            if ((*(long *)(param_5 + 0x28) != 0) &&
               (lVar33 = *(long *)(*(long *)(param_5 + 0x28) + 0x118), lVar33 != 0)) {
              Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding(lVar33,0,0);
              if ((*(long *)(param_5 + 0x28) != 0) &&
                 (lVar33 = *(long *)(*(long *)(param_5 + 0x28) + 0x118), lVar33 != 0)) {
                Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteer(fVar48,lVar33,0);
                if ((*(long *)(param_5 + 0x28) != 0) &&
                   (lVar33 = *(long *)(*(long *)(param_5 + 0x28) + 0x118), lVar33 != 0)) {
                  Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteerIntensity(fVar50,lVar33,0);
                  param_6 = *(long **)(param_5 + 0x38);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_6,0,0);
                  if (iVar24 != 0) {
                    if (*(long *)(param_5 + 0x38) == 0) goto LAB_015e5624;
                    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding
                              (*(long *)(param_5 + 0x38),0,0);
                  }
                  param_6 = *(long **)(param_5 + 0x30);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_6,0,0);
                  if (iVar24 != 0) {
                    if (*(long *)(param_5 + 0x30) == 0) goto LAB_015e5624;
                    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetGliding
                              (*(long *)(param_5 + 0x30),0,0);
                  }
code_r0x015e5478:
                  unaff_x28 = uVar28;
                  if (*(long *)(param_5 + 0x10) != 0) {
                    lVar33 = *(long *)(*(long *)(param_5 + 0x10) + 0x90);
                    uVar35 = 0;
                    if ((lVar33 == 0) || (uVar35 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_IsLocalPlayer*/ func_0x0159dd28(lVar33,0), (int)uVar35 == 0))
                    goto code_r0x015e55cc;
                    if ((uStack_164 & (*(byte *)(param_5 + 0xa0) ^ 1)) == 0) {
code_r0x015e54c0:
                      if ((*(byte *)(param_5 + 0xa0) == 0) || (uStack_164 != 0))
                      goto code_r0x015e55cc;
                      param_6 = *(long **)(param_5 + 0x50);
                      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_6,0,0);
                      if (iVar24 != 0) {
                        if (*(long *)(param_5 + 0x50) == 0) goto LAB_015e5624;
                        /*Atlas.Rendering.PostProcessingEffectBehaviour$$EndEffect*/ func_0x014cb544(*(long *)(param_5 + 0x50),/*STR('Boost')*/ uRam0000000003d697c0,0,0);
                      }
                      if (((*(long *)(param_5 + 0x10) != 0) &&
                          (lVar33 = *(long *)(*(long *)(param_5 + 0x10) + 0x78), lVar33 != 0)) &&
                         (lVar33 = *(long *)(lVar33 + 0x40), lVar33 != 0)) {
                        uVar35 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$InvokeStopSplat*/ func_0x015a631c(lVar33,/*STR('BoostSplash')*/ uRam0000000003d697f8,0);
code_r0x015e55cc:
                        *(char *)(param_5 + 100) = (char)uVar49;
                        *(bool *)(param_5 + 0x65) = uStack_180 != 0;
                        *(char *)(param_5 + 0x98) = (char)uStack_178;
                        *(bool *)(param_5 + 0xa0) = uStack_164 != 0;
                        return uVar35;
                      }
                    }
                    else if ((*(long *)(param_5 + 0x10) != 0) &&
                            (lVar33 = *(long *)(*(long *)(param_5 + 0x10) + 0x90), lVar33 != 0)) {
                      if (*(char *)(lVar33 + 0x98) != '\0') goto code_r0x015e54c0;
                      param_6 = *(long **)(param_5 + 0x50);
                      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      iVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_6,0,0);
                      if (iVar24 != 0) {
                        if (*(long *)(param_5 + 0x50) == 0) goto LAB_015e5624;
                        /*Atlas.Rendering.PostProcessingEffectBehaviour$$StartEffect*/ func_0x014cb310(*(long *)(param_5 + 0x50),/*STR('Boost')*/ uRam0000000003d697c0,1,0);
                      }
                      if (((*(long *)(param_5 + 0x10) != 0) &&
                          (lVar33 = *(long *)(*(long *)(param_5 + 0x10) + 0x78), lVar33 != 0)) &&
                         (lVar33 = *(long *)(lVar33 + 0x40), lVar33 != 0)) {
                        uVar35 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$InvokePlaySplat*/ func_0x015a6308(lVar33,/*STR('BoostSplash')*/ uRam0000000003d697f8,1,0);
                        goto code_r0x015e55cc;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
code_r0x015e5378:
          if (param_6 != (long *)0x0) {
            uVar28 = (ulong)((int)uVar38 != 0);
            puVar13 = auStack_1b0;
            plVar27 = param_6;
            uVar35 = uVar38;
            plVar29 = (long *)0x3d23990;
            puVar42 = &UNK_015e5390;
            goto code_r0x0322ef1c;
          }
        }
      }
      goto LAB_015e5624;
    }
    unaff_x28 = uVar28;
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    unaff_x22 = *(long **)(param_5 + 0x30);
    puVar30 = (undefined4 *)Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(param_5 + 0x40),0);
    if (unaff_x22 == (long *)0x0) goto LAB_015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSpeed(*puVar30,unaff_x22,0);
    if (*(long *)(param_5 + 0x30) == 0) goto LAB_015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteer(fVar48,*(long *)(param_5 + 0x30),0);
    if (*(long *)(param_5 + 0x30) == 0) goto LAB_015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetSteerIntensity(fVar50,*(long *)(param_5 + 0x30),0);
    if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
    lVar33 = *(long *)(param_5 + 0x30);
    Atlas_Gameplay_Kart_KartPhysics__get_DriftDisplay(*(long *)(param_5 + 0x40),0);
    unaff_x22 = (long *)0x0;
    if (lVar33 == 0) goto LAB_015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetDrift(lVar33,0);
    uVar7 = uStack_198;
    unaff_x22 = (long *)(ulong)uStack_198;
    if (uVar45 == 0 && (uVar23 & 1) == 0) {
      if (*(long *)(param_5 + 0x30) == 0) goto LAB_015e5624;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__SetLandForce
                (*(undefined4 *)(param_5 + 0x9c),*(long *)(param_5 + 0x30),0);
    }
    if (*(long *)(param_5 + 0x30) == 0) goto LAB_015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetInAir(*(long *)(param_5 + 0x30),uStack_178,0);
    uVar23 = uStack_19c;
    plVar27 = *(long **)(param_5 + 0x30);
    uVar38 = (ulong)uStack_19c;
    if (plVar27 == (long *)0x0) goto LAB_015e5624;
    (**(code **)(*plVar27 + 0x188))
              (plVar27,uStack_164 != 0,fStack_188,*(undefined8 *)(*plVar27 + 400));
    uVar45 = uStack_1a4;
    if (!bVar16 && !bVar17 || !bVar18 && !bVar19) {
      unaff_x25 = (char *)(ulong)uStack_1a4;
      if ((bVar16 || bVar17) && (bVar20 && bVar21)) {
        if (*(long *)(param_5 + 0x30) == 0) goto LAB_015e5624;
        Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHop(*(long *)(param_5 + 0x30),0);
      }
      if (uStack_18c != 0) {
        if (*(long *)(param_5 + 0x30) == 0) goto LAB_015e5624;
        Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerGetHit
                  (*(long *)(param_5 + 0x30),unaff_x23,0);
      }
      if (uVar23 != 0) {
        fStack_17c = pfStack_170[0x60];
      }
      if ((uVar7 & 1) == 0) {
        if (*(long *)(param_5 + 0x40) == 0) goto LAB_015e5624;
        uVar36 = Atlas_Gameplay_Kart_KartPhysics__IsDriftStartLeftSide(*(long *)(param_5 + 0x40),0);
      }
      else {
        uVar36 = 1;
      }
      fVar48 = 0.0;
      if (*(char *)(param_5 + 0x58) != '\0') {
        fVar48 = fStack_17c;
      }
      unaff_x22 = (long *)(ulong)(uint)fVar48;
      if (fVar48 == *(float *)(param_5 + 0x60)) {
        lVar33 = *(long *)(param_5 + 0x30);
        if (lVar33 != 0) {
          uVar28 = (ulong)(uStack_194 | uVar45);
          plVar29 = (long *)(ulong)(uStack_190 | uStack_1a8);
          uVar36 = uStack_110 >> 0x20;
          uVar38 = uStack_b0 >> 0x20;
          fVar48 = 0.0;
          if (*(char *)(param_5 + 0x59) != '\0' && (uVar49 & uVar6) == 0) {
            fVar48 = fVar43;
          }
          puVar42 = &UNK_015e50a0;
          plVar27 = param_6;
          fVar43 = fVar48;
code_r0x015e58c4:
          *(ulong *)(puVar11 + -0x30) = unaff_d9;
          *(ulong *)(puVar11 + -0x28) = unaff_d8;
          *(long **)(puVar11 + -0x20) = plVar27;
          *(ulong *)(puVar11 + -0x18) = param_5;
          *(undefined8 ********)(puVar11 + -0x10) = pppppppuVar41;
          *(undefined **)(puVar11 + -8) = puVar42;
          lVar32 = *(long *)(lVar33 + 0x98);
          plVar27 = (long *)(lVar33 + 0x138);
          piVar37 = (int *)(lVar33 + 0x130);
          puVar14 = puVar11 + -0x160;
          puVar12 = puVar11 + -0x160;
          *(ulong *)(puVar11 + -0x90) = unaff_d9;
          *(ulong *)(puVar11 + -0x88) = (ulong)(uint)fVar48;
          *(ulong *)(puVar11 + -0x80) = uVar35;
          *(ulong *)(puVar11 + -0x78) = unaff_x27;
          *(ulong *)(puVar11 + -0x70) = unaff_x24;
          *(ulong *)(puVar11 + -0x68) = unaff_x23;
          *(long **)(puVar11 + -0x60) = plVar29;
          *(ulong *)(puVar11 + -0x58) = uVar28;
          *(long *)(puVar11 + -0x50) = lVar33;
          *(ulong *)(puVar11 + -0x48) = uVar36;
          *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
          *(undefined **)(puVar11 + -0x38) = &UNK_015e58f0;
          puVar13 = puVar11 + -0x40;
          if ((bRam0000000003eb53e6 & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb53e6 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar35 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar32,0,0);
          if ((uVar35 & 1) == 0) {
            iVar24 = 0;
            *(undefined8 *)(puVar11 + -0xa8) = 0;
            *(undefined8 *)(puVar11 + -0xb0) = 0;
            *(undefined8 *)(puVar11 + -0x98) = 0;
            *(undefined8 *)(puVar11 + -0xa0) = 0;
            *(undefined8 *)(puVar11 + -200) = 0;
            *(undefined8 *)(puVar11 + -0xd0) = 0;
            *(undefined8 *)(puVar11 + -0xb8) = 0;
            *(undefined8 *)(puVar11 + -0xc0) = 0;
            *(undefined8 *)(puVar11 + -0xe8) = 0;
            *(undefined8 *)(puVar11 + -0xf0) = 0;
            *(undefined8 *)(puVar11 + -0xd8) = 0;
            *(undefined8 *)(puVar11 + -0xe0) = 0;
            *(undefined8 *)(puVar11 + -0x108) = 0;
            *(undefined8 *)(puVar11 + -0x110) = 0;
            *(undefined8 *)(puVar11 + -0xf8) = 0;
            *(undefined8 *)(puVar11 + -0x100) = 0;
            *(undefined8 *)(puVar11 + -0x128) = 0;
            *(undefined8 *)(puVar11 + -0x130) = 0;
            *(undefined8 *)(puVar11 + -0x118) = 0;
            *(undefined8 *)(puVar11 + -0x120) = 0;
            *(undefined8 *)(puVar11 + -0x148) = 0;
            *(undefined8 *)(puVar11 + -0x150) = 0;
            *(undefined8 *)(puVar11 + -0x138) = 0;
            *(undefined8 *)(puVar11 + -0x140) = 0;
            *(undefined8 *)(puVar11 + -0x158) = 0;
            *(undefined8 *)(puVar11 + -0x160) = 0;
            if (((int)uVar38 != 0) && (10.0 <= fVar43)) {
              if (lVar32 == 0) {
                func_0x00f78af4();
code_r0x015e7ebc:
                uVar26 = func_0x00f78b24();
                auVar52 = func_0x00f78ac0(uVar26,0);
                lVar33 = auVar52._0_8_;
                *(long *)(puVar11 + -400) = lVar32;
                *(ulong *)(puVar11 + -0x188) = uVar38;
                *(int **)(puVar11 + -0x180) = piVar37;
                *(long **)(puVar11 + -0x178) = plVar27;
                *(undefined1 **)(puVar11 + -0x170) = puVar13;
                *(undefined **)(puVar11 + -0x168) =
                     &Atlas_Gameplay_Kart_KartVisualBehaviour__ConfigureEffectsForPlayer;
                puVar13 = puVar11 + -0x170;
                if ((bRam0000000003eb53e2 & 1) == 0) {
                  func_0x00f78a20(0x3d23990);
                  bRam0000000003eb53e2 = 1;
                }
                uVar38 = /*Core.Networking.NetworkPlayer$$IsRemote*/ func_0x0165aba0(auVar52._8_8_,0);
                if ((int)uVar38 == 0) {
                  return uVar38;
                }
                uVar26 = *(undefined8 *)(lVar33 + 0x88);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar24 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar26,0);
                if (iVar24 == 0) {
                  uVar26 = *(undefined8 *)(lVar33 + 0x90);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar38 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar26,0);
                  if ((int)uVar38 == 0) {
                    return uVar38;
                  }
                  lVar32 = *(long *)(lVar33 + 0x90);
                  puVar13 = *(undefined1 **)(puVar11 + -0x170);
                  puVar42 = *(undefined **)(puVar11 + -0x168);
                  uVar26 = *(undefined8 *)(puVar11 + -0x180);
                  lVar33 = *(long *)(puVar11 + -0x178);
                }
                else {
                  lVar32 = *(long *)(lVar33 + 0x88);
                  puVar42 = &UNK_015e7f54;
                  puVar12 = puVar11 + -400;
                }
                iVar24 = 0x28;
                puVar14 = puVar12 + -0xb0;
                *(undefined8 *)(puVar12 + -0x20) = uVar26;
                *(long *)(puVar12 + -0x18) = lVar33;
                *(undefined1 **)(puVar12 + -0x10) = puVar13;
                *(undefined **)(puVar12 + -8) = puVar42;
                if (lVar32 != 0) {
                  uVar26 = /*UnityEngine.ParticleSystem$$get_emission*/ func_0x032965e4(lVar32,0);
                  *(undefined8 *)(puVar12 + -0x28) = uVar26;
                  /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8(puVar12 + -0x48,0x42200000,0);
                  *(undefined8 *)(puVar12 + -0x68) = *(undefined8 *)(puVar12 + -0x40);
                  *(undefined8 *)(puVar12 + -0x70) = *(undefined8 *)(puVar12 + -0x48);
                  *(undefined8 *)(puVar12 + -0x58) = *(undefined8 *)(puVar12 + -0x30);
                  *(undefined8 *)(puVar12 + -0x60) = *(undefined8 *)(puVar12 + -0x38);
                  /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverTime*/ func_0x032967cc(puVar12 + -0x28,puVar12 + -0x70,0);
                  /*UnityEngine.ParticleSystem.MinMaxCurve$$op_Implicit*/ func_0x032967b8(puVar12 + -0x90,0,0);
                  *(undefined8 *)(puVar12 + -0xa8) = *(undefined8 *)(puVar12 + -0x88);
                  *(undefined8 *)(puVar12 + -0xb0) = *(undefined8 *)(puVar12 + -0x90);
                  *(undefined8 *)(puVar12 + -0x98) = *(undefined8 *)(puVar12 + -0x78);
                  *(undefined8 *)(puVar12 + -0xa0) = *(undefined8 *)(puVar12 + -0x80);
                  uVar38 = /*UnityEngine.ParticleSystem.EmissionModule$$set_rateOverDistance*/ func_0x0329b0fc(puVar12 + -0x28,puVar12 + -0xb0,0);
                  return uVar38;
                }
                func_0x00f78af4();
                *(undefined8 *)(puVar12 + -0xd0) = uVar26;
                *(long *)(puVar12 + -200) = lVar33;
                *(undefined1 **)(puVar12 + -0xc0) = puVar12 + -0x10;
                *(undefined **)(puVar12 + -0xb8) =
                     &Atlas_Gameplay_Kart_KartVisualBehaviour__SetParticleSystemEmitting;
                if (iVar24 != 0) {
                  if (extraout_x1_00 != 0) {
                    uVar38 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1_00,0);
                    if ((uVar38 & 1) != 0) {
                      return uVar38;
                    }
                    *(undefined8 *)(puVar12 + -0xd0) = *(undefined8 *)(puVar12 + -0xd0);
                    *(undefined8 *)(puVar12 + -200) = *(undefined8 *)(puVar12 + -200);
                    *(undefined8 *)(puVar12 + -0xc0) = *(undefined8 *)(puVar12 + -0xc0);
                    *(undefined8 *)(puVar12 + -0xb8) = *(undefined8 *)(puVar12 + -0xb8);
                    if (pcRam0000000003ec2148 == (code *)0x0) {
                      pcRam0000000003ec2148 =
                           (code *)func_0x00f789d4(
                                                  "UnityEngine.ParticleSystem::Play(System.Boolean)"
                                                  ,0);
                    }
                    /* WARNING: Could not recover jumptable at 0x03298910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar38 = (*pcRam0000000003ec2148)(extraout_x1_00,1);
                    return uVar38;
                  }
code_r0x015e80b0:
                  auVar53 = func_0x00f78af4();
                  lVar33 = *(long *)(auVar53._0_8_ + 0x18);
                  if ((lVar33 != 0) && (0 < (int)*(uint *)(lVar33 + 0x18))) {
                    uVar38 = 0;
                    do {
                      if (*(int *)(lVar33 + (long)(int)uVar38 * 0xd0 + 0x20) == auVar53._8_4_) {
                        return uVar38;
                      }
                      uVar49 = (int)uVar38 + 1;
                      uVar38 = (ulong)uVar49;
                    } while (*(uint *)(lVar33 + 0x18) != uVar49);
                  }
                  return 0xffffffff;
                }
                if (extraout_x1_00 == 0) goto code_r0x015e80b0;
                uVar38 = /*UnityEngine.ParticleSystem$$get_isEmitting*/ func_0x032977f0(extraout_x1_00,0);
                if ((int)uVar38 == 0) {
                  return uVar38;
                }
                puVar13 = *(undefined1 **)(puVar12 + -0xc0);
                puVar42 = *(undefined **)(puVar12 + -0xb8);
                lVar33 = *(long *)(puVar12 + -0xd0);
                plVar27 = *(long **)(puVar12 + -200);
                lVar32 = extraout_x1_00;
                goto code_r0x03298a54;
              }
              lVar33 = *(long *)(lVar32 + 0x18);
              if ((lVar33 != 0) && (uVar49 = *(uint *)(lVar33 + 0x18), 0 < (int)uVar49)) {
                uVar23 = 0;
                puVar25 = (undefined8 *)(lVar33 + 0x20);
                do {
                  if (*(int *)(lVar33 + (long)(int)uVar23 * 0xd0 + 0x20) == (int)uVar38) {
                    if (-1 < (int)uVar23) {
                      if (uVar49 <= uVar23) goto code_r0x015e7ebc;
                      uVar26 = puVar25[0x14];
                      uVar47 = puVar25[0x17];
                      uVar31 = puVar25[0x16];
                      *(undefined8 *)(puVar11 + -0xb8) = puVar25[0x15];
                      *(undefined8 *)(puVar11 + -0xc0) = uVar26;
                      *(undefined8 *)(puVar11 + -0xa8) = uVar47;
                      *(undefined8 *)(puVar11 + -0xb0) = uVar31;
                      uVar26 = puVar25[0x18];
                      *(undefined8 *)(puVar11 + -0x98) = puVar25[0x19];
                      *(undefined8 *)(puVar11 + -0xa0) = uVar26;
                      uVar26 = puVar25[0xc];
                      uVar47 = puVar25[0xf];
                      uVar31 = puVar25[0xe];
                      *(undefined8 *)(puVar11 + -0xf8) = puVar25[0xd];
                      *(undefined8 *)(puVar11 + -0x100) = uVar26;
                      *(undefined8 *)(puVar11 + -0xe8) = uVar47;
                      *(undefined8 *)(puVar11 + -0xf0) = uVar31;
                      uVar47 = puVar25[0x10];
                      uVar31 = puVar25[0x13];
                      uVar26 = puVar25[0x12];
                      *(undefined8 *)(puVar11 + -0xd8) = puVar25[0x11];
                      *(undefined8 *)(puVar11 + -0xe0) = uVar47;
                      *(undefined8 *)(puVar11 + -200) = uVar31;
                      *(undefined8 *)(puVar11 + -0xd0) = uVar26;
                      uVar26 = puVar25[4];
                      uVar47 = puVar25[7];
                      uVar31 = puVar25[6];
                      *(undefined8 *)(puVar11 + -0x138) = puVar25[5];
                      *(undefined8 *)(puVar11 + -0x140) = uVar26;
                      *(undefined8 *)(puVar11 + -0x128) = uVar47;
                      *(undefined8 *)(puVar11 + -0x130) = uVar31;
                      uVar47 = puVar25[8];
                      uVar31 = puVar25[0xb];
                      uVar26 = puVar25[10];
                      *(undefined8 *)(puVar11 + -0x118) = puVar25[9];
                      *(undefined8 *)(puVar11 + -0x120) = uVar47;
                      *(undefined8 *)(puVar11 + -0x108) = uVar31;
                      *(undefined8 *)(puVar11 + -0x110) = uVar26;
                      uVar47 = *puVar25;
                      uVar31 = puVar25[3];
                      uVar26 = puVar25[2];
                      *(undefined8 *)(puVar11 + -0x158) = puVar25[1];
                      *(undefined8 *)(puVar11 + -0x160) = uVar47;
                      *(undefined8 *)(puVar11 + -0x148) = uVar31;
                      *(undefined8 *)(puVar11 + -0x150) = uVar26;
                      iVar24 = *(int *)(puVar11 + -0x160);
                      goto code_r0x015e7d98;
                    }
                    break;
                  }
                  uVar23 = uVar23 + 1;
                  puVar25 = puVar25 + 0x1a;
                } while (uVar49 != uVar23);
              }
              iVar24 = 0;
            }
code_r0x015e7d98:
            if (iVar24 != *piVar37) {
              if (puVar11[-0x140] != '\0') {
                /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar35,*(undefined8 *)(puVar11 + -0x158),puVar11 + -0x138);
                uVar26 = *(undefined8 *)(puVar11 + -0x150);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar31 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar26,0,0);
                if ((int)uVar31 != 0) {
                  /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar31,uVar26,puVar11 + -0x100);
                }
                uVar26 = *(undefined8 *)(puVar11 + -0x148);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar31 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar26,0,0);
                if ((int)uVar31 != 0) {
                  /*Atlas.Gameplay.Kart.KartVisualBehaviour$$SetStartColour*/ func_0x015e80f4(uVar31,uVar26,puVar11 + -200);
                }
              }
              *piVar37 = iVar24;
            }
            lVar33 = *(long *)(puVar11 + -0x158);
            lVar32 = *plVar27;
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar35 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar33,lVar32,0);
            if ((int)uVar35 != 0) {
              lVar32 = *plVar27;
              if (lVar32 != 0) {
                puVar42 = &UNK_015e7e84;
code_r0x03298a54:
                *(long *)(puVar14 + -0x20) = lVar33;
                *(long **)(puVar14 + -0x18) = plVar27;
                *(undefined1 **)(puVar14 + -0x10) = puVar13;
                *(undefined **)(puVar14 + -8) = puVar42;
                if (pcRam0000000003ec2158 == (code *)0x0) {
                  pcRam0000000003ec2158 =
                       (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)"
                                               ,0);
                }
                    /* WARNING: Could not recover jumptable at 0x03298a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar38 = (*pcRam0000000003ec2158)(lVar32,1,1);
                return uVar38;
              }
              uVar35 = 0;
              if (lVar33 != 0) {
                uVar35 = /*UnityEngine.ParticleSystem$$Play*/ func_0x032988d0(lVar33,0);
              }
              *plVar27 = lVar33;
            }
          }
          return uVar35;
        }
      }
      else {
        auVar53._8_4_ = fVar48;
        auVar53._0_8_ = *(long *)(param_5 + 0x30);
        if (*(long *)(param_5 + 0x30) != 0) {
          puVar42 = &UNK_015e5040;
          unaff_x28 = uVar35;
          pppppppuVar40 = pppppppuVar41;
          goto code_r0x015e56d8;
        }
      }
      goto LAB_015e5624;
    }
    if (*(long *)(param_5 + 0x30) == 0) goto LAB_015e5624;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerHopBoost(*(long *)(param_5 + 0x30),0);
    if (*(long *)(param_5 + 0x30) == 0) goto LAB_015e5624;
    auVar52._8_8_ = 1;
    auVar52._0_8_ = *(long *)(param_5 + 0x30);
    puVar42 = &UNK_015e4fa0;
    plVar27 = unaff_x22;
    unaff_x28 = uVar35;
  }
  uVar28 = auVar52._8_8_;
  pplVar10 = &plStack_1e0;
  pppppppuVar40 = &ppppppuStack_1c0;
  unaff_x22 = (long *)0x3d23990;
  plStack_1e0 = plVar27;
  uStack_1d8 = uVar38;
  plStack_1d0 = param_6;
  uStack_1c8 = param_5;
  ppppppuStack_1c0 = pppppppuVar41;
  puStack_1b8 = puVar42;
  if ((bRam0000000003eb53e4 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53e4 = 1;
  }
  uVar38 = *(ulong *)(auVar52._0_8_ + 0xc0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar36 = 0;
  uVar35 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar38,0);
  if ((int)uVar35 == 0) {
    return uVar35;
  }
  param_6 = *(long **)(auVar52._0_8_ + 0xc0);
  param_5 = uStack_1c8;
  plVar27 = plStack_1d0;
  uVar35 = uStack_1d8;
  plVar29 = plStack_1e0;
  pppppppuVar41 = (undefined8 *******)ppppppuStack_1c0;
  puVar42 = puStack_1b8;
  if (param_6 == (long *)0x0) {
    puVar42 = &Atlas_Gameplay_Kart_KartVisualBehaviour__SetDriftLevel;
    auVar53 = func_0x00f78af4();
code_r0x015e56d8:
    uVar28 = auVar53._0_8_;
    plVar27 = auVar52._0_8_;
    puVar13 = (undefined1 *)((long)pplVar10 + -0x70);
    puVar11 = (undefined1 *)((long)pplVar10 + -0x70);
    *(ulong *)((long)pplVar10 + -0x60) = unaff_x28;
    *(ulong *)((long)pplVar10 + -0x58) = unaff_x27;
    *(ulong *)((long)pplVar10 + -0x50) = unaff_x26;
    *(char **)((long)pplVar10 + -0x48) = unaff_x25;
    *(ulong *)((long)pplVar10 + -0x40) = unaff_x24;
    *(ulong *)((long)pplVar10 + -0x38) = unaff_x23;
    *(long **)((long)pplVar10 + -0x30) = unaff_x22;
    *(ulong *)((long)pplVar10 + -0x28) = uVar38;
    *(undefined1 (*) [16])((long)pplVar10 + -0x20) = auVar52;
    *(undefined8 ********)((long)pplVar10 + -0x10) = pppppppuVar40;
    *(undefined **)((long)pplVar10 + -8) = puVar42;
    pppppppuVar41 = (undefined8 *******)((long)pplVar10 + -0x10);
    *(int *)((long)pplVar10 + -0x68) = (int)uVar36;
    *(int *)((long)pplVar10 + -100) = auVar53._8_4_;
    param_5 = 0x3eb5000;
    uVar38 = uVar28;
    if ((bRam0000000003eb53df & 1) == 0) {
      uVar38 = func_0x00f78a20(0x3d23990);
      bRam0000000003eb53df = 1;
    }
    if (*(ulong *)(uVar28 + 0x80) != 0) {
      unaff_x23 = *(ulong *)(uVar28 + 0x80);
      if (*(ulong *)(uVar28 + 0x1a0) != 0) {
        unaff_x23 = *(ulong *)(uVar28 + 0x1a0);
      }
      *(ulong *)(uVar28 + 0x1a8) = unaff_x23;
      uVar49 = *(uint *)(unaff_x23 + 0x18);
      if (0 < (int)uVar49) {
        unaff_x24 = 0;
        *(uint *)((long)pplVar10 + -0x6c) = *(uint *)((long)pplVar10 + -0x68) ^ 1;
        unaff_x27 = 0x3d23990;
        param_6 = unaff_x22;
        uVar35 = unaff_x28;
        do {
          fVar48 = (float)param_2;
          uVar23 = (uint)unaff_x24;
          plVar29 = param_6;
          if (uVar49 <= uVar23) {
code_r0x015e58b4:
            uVar26 = func_0x00f78b24();
            func_0x00f78ac0(uVar26,0);
code_r0x015e58c0:
            puVar42 = &Atlas_Gameplay_Kart_KartVisualBehaviour__UpdateKickUp;
            lVar33 = func_0x00f78af4();
            uVar38 = extraout_x1;
            fVar43 = extraout_s0;
            goto code_r0x015e58c4;
          }
          lVar33 = unaff_x23 + (long)(int)uVar23 * 0x18;
          iVar24 = *(int *)(lVar33 + 0x20);
          param_5 = *(ulong *)(lVar33 + 0x28);
          iVar2 = *(int *)((long)pplVar10 + -100);
          if (param_5 == 0) goto code_r0x015e58c0;
          uVar35 = *(ulong *)(lVar33 + 0x30);
          if (0 < (int)*(ulong *)(param_5 + 0x18)) {
            uVar39 = 0;
            uVar28 = (ulong)((uint)(iVar24 == iVar2) & *(uint *)((long)pplVar10 + -0x68));
            uVar34 = *(ulong *)(param_5 + 0x18) & 0xffffffff;
            plVar27 = (long *)(param_5 + 0x20);
            do {
              fVar48 = (float)param_2;
              plVar29 = param_6;
              if (uVar34 <= uVar39) goto code_r0x015e58b4;
              param_6 = (long *)plVar27[uVar39];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar36 = 0;
              uVar38 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_6,0);
              fVar48 = (float)param_2;
              if ((int)uVar38 != 0) {
                plVar29 = param_6;
                if (param_6 == (long *)0x0) goto code_r0x015e58c0;
                puVar13 = (undefined1 *)((long)pplVar10 + -0x70);
                uVar35 = uVar28;
                puVar42 = &UNK_015e57f4;
                goto code_r0x0322ef1c;
              }
              uVar39 = uVar39 + 1;
              uVar34 = (ulong)*(uint *)(param_5 + 0x18);
            } while ((long)uVar39 < (long)(int)*(uint *)(param_5 + 0x18));
          }
          fVar48 = (float)param_2;
          plVar29 = param_6;
          if (uVar35 == 0) goto code_r0x015e58c0;
          if (0 < (int)*(ulong *)(uVar35 + 0x18)) {
            param_5 = 0;
            uVar28 = (ulong)((uint)(iVar24 == iVar2) & *(uint *)((long)pplVar10 + -0x6c));
            uVar39 = *(ulong *)(uVar35 + 0x18) & 0xffffffff;
            plVar27 = (long *)(uVar35 + 0x20);
            do {
              fVar48 = (float)param_2;
              plVar29 = param_6;
              if (uVar39 <= param_5) goto code_r0x015e58b4;
              param_6 = (long *)plVar27[param_5];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar36 = 0;
              uVar38 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_6,0);
              fVar48 = (float)param_2;
              if ((int)uVar38 != 0) {
                plVar29 = param_6;
                if (param_6 == (long *)0x0) goto code_r0x015e58c0;
                uVar35 = uVar28;
                puVar42 = &UNK_015e5874;
                goto code_r0x0322ef1c;
              }
              param_5 = param_5 + 1;
              uVar39 = (ulong)*(uint *)(uVar35 + 0x18);
            } while ((long)param_5 < (long)(int)*(uint *)(uVar35 + 0x18));
          }
          unaff_x24 = (ulong)(uVar23 + 1);
          uVar49 = *(uint *)(unaff_x23 + 0x18);
        } while ((int)(uVar23 + 1) < (int)uVar49);
      }
    }
    return uVar38;
  }
code_r0x0322ef1c:
  *(long **)(puVar13 + -0x30) = plVar29;
  *(ulong *)(puVar13 + -0x28) = uVar35;
  *(long **)(puVar13 + -0x20) = plVar27;
  *(ulong *)(puVar13 + -0x18) = param_5;
  *(undefined8 ********)(puVar13 + -0x10) = pppppppuVar41;
  *(undefined **)(puVar13 + -8) = puVar42;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar38 = (*pcRam0000000003ebf4c0)(param_6,uVar28);
  return uVar38;
}



// ============================================================
// RVA: 0x15e5e58 | Atlas.Gameplay.Kart.KartVisualAnimation.SetCharacterVisualBehaviour
// ============================================================

void Atlas_Gameplay_Kart_KartVisualAnimation__SetCharacterVisualBehaviour
               (long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



// ============================================================
// RVA: 0x15e5e60 | Atlas.Gameplay.Kart.KartVisualAnimation.SetKartVisualBehaviour
// ============================================================

void Atlas_Gameplay_Kart_KartVisualAnimation__SetKartVisualBehaviour
               (long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



// ============================================================
// RVA: 0x15e5e68 | Atlas.Gameplay.Kart.KartVisualAnimation.TriggerSatelliteHitVFX
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e5eb0 | Atlas.Gameplay.Kart.KartVisualAnimation.TriggerLaserWheelSpark
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e5eec | Atlas.Gameplay.Kart.KartVisualAnimation.LateUpdate
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e683c | Atlas.Gameplay.Kart.KartVisualAnimation.OnHitOtherKartWithUsable
// ============================================================

/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ac54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ace4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ae70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e69c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e6a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145aa54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015e6a08) */
/* WARNING: Removing unreachable block (ram,0x015e6a14) */
/* WARNING: Removing unreachable block (ram,0x015e6a3c) */
/* WARNING: Removing unreachable block (ram,0x015e6a28) */
/* WARNING: Removing unreachable block (ram,0x015e69c4) */
/* WARNING: Removing unreachable block (ram,0x015e69cc) */
/* WARNING: Removing unreachable block (ram,0x015e69ec) */
/* WARNING: Removing unreachable block (ram,0x015e69dc) */
/* WARNING: Removing unreachable block (ram,0x01538780) */
/* WARNING: Removing unreachable block (ram,0x015387a8) */
/* WARNING: Removing unreachable block (ram,0x015387bc) */
/* WARNING: Removing unreachable block (ram,0x015387cc) */
/* WARNING: Removing unreachable block (ram,0x015387d4) */
/* WARNING: Removing unreachable block (ram,0x015387d8) */
/* WARNING: Removing unreachable block (ram,0x01538800) */
/* WARNING: Removing unreachable block (ram,0x01538804) */
/* WARNING: Removing unreachable block (ram,0x01538830) */
/* WARNING: Removing unreachable block (ram,0x01538844) */
/* WARNING: Removing unreachable block (ram,0x01538854) */
/* WARNING: Removing unreachable block (ram,0x0153885c) */
/* WARNING: Removing unreachable block (ram,0x01538860) */
/* WARNING: Removing unreachable block (ram,0x0153888c) */
/* WARNING: Removing unreachable block (ram,0x015388b8) */
/* WARNING: Removing unreachable block (ram,0x015388cc) */
/* WARNING: Removing unreachable block (ram,0x015388dc) */
/* WARNING: Removing unreachable block (ram,0x015388e4) */
/* WARNING: Removing unreachable block (ram,0x015388e8) */
/* WARNING: Removing unreachable block (ram,0x01538910) */
/* WARNING: Removing unreachable block (ram,0x0153893c) */
/* WARNING: Removing unreachable block (ram,0x01538950) */
/* WARNING: Removing unreachable block (ram,0x0153895c) */
/* WARNING: Removing unreachable block (ram,0x01538964) */
/* WARNING: Removing unreachable block (ram,0x0153896c) */
/* WARNING: Removing unreachable block (ram,0x01538978) */
/* WARNING: Removing unreachable block (ram,0x01538994) */
/* WARNING: Removing unreachable block (ram,0x015389bc) */
/* WARNING: Removing unreachable block (ram,0x015389c0) */
/* WARNING: Removing unreachable block (ram,0x015389f4) */
/* WARNING: Removing unreachable block (ram,0x01538a08) */
/* WARNING: Removing unreachable block (ram,0x01538a18) */
/* WARNING: Removing unreachable block (ram,0x01538a20) */
/* WARNING: Removing unreachable block (ram,0x01538a24) */
/* WARNING: Removing unreachable block (ram,0x01538a4c) */
/* WARNING: Removing unreachable block (ram,0x01538a80) */
/* WARNING: Removing unreachable block (ram,0x01538a94) */
/* WARNING: Removing unreachable block (ram,0x01538aa4) */
/* WARNING: Removing unreachable block (ram,0x01538aac) */
/* WARNING: Removing unreachable block (ram,0x01538ab0) */
/* WARNING: Removing unreachable block (ram,0x01538ae0) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x01538ab4) */
/* WARNING: Removing unreachable block (ram,0x0320d09c) */
/* WARNING: Removing unreachable block (ram,0x0320d0c8) */
/* WARNING: Removing unreachable block (ram,0x0320d0dc) */
/* WARNING: Removing unreachable block (ram,0x01538a28) */
/* WARNING: Removing unreachable block (ram,0x0153899c) */
/* WARNING: Removing unreachable block (ram,0x015388ec) */
/* WARNING: Removing unreachable block (ram,0x01538864) */
/* WARNING: Removing unreachable block (ram,0x0320d6dc) */
/* WARNING: Removing unreachable block (ram,0x0320d704) */
/* WARNING: Removing unreachable block (ram,0x0320d718) */
/* WARNING: Removing unreachable block (ram,0x015387dc) */
/* WARNING: Removing unreachable block (ram,0x0320d82c) */
/* WARNING: Removing unreachable block (ram,0x0320d850) */
/* WARNING: Removing unreachable block (ram,0x0320d864) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
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
/* WARNING: Removing unreachable block (ram,0x014fe40c) */
/* WARNING: Removing unreachable block (ram,0x014fe374) */
/* WARNING: Removing unreachable block (ram,0x014fe3e4) */
/* WARNING: Removing unreachable block (ram,0x014fe384) */
/* WARNING: Removing unreachable block (ram,0x0145b3ac) */
/* WARNING: Removing unreachable block (ram,0x0145b3b0) */
/* WARNING: Removing unreachable block (ram,0x0145b1dc) */
/* WARNING: Removing unreachable block (ram,0x0145b1e0) */
/* WARNING: Removing unreachable block (ram,0x0145b02c) */
/* WARNING: Removing unreachable block (ram,0x0145b030) */
/* WARNING: Removing unreachable block (ram,0x0145ae74) */
/* WARNING: Removing unreachable block (ram,0x0145ae78) */
/* WARNING: Removing unreachable block (ram,0x0145ace8) */
/* WARNING: Removing unreachable block (ram,0x0145acec) */
/* WARNING: Removing unreachable block (ram,0x0145ac58) */
/* WARNING: Removing unreachable block (ram,0x0145ac60) */
/* WARNING: Removing unreachable block (ram,0x0145ac74) */
/* WARNING: Removing unreachable block (ram,0x0145ac7c) */
/* WARNING: Removing unreachable block (ram,0x0145ac84) */
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
/* WARNING: Removing unreachable block (ram,0x0145aa58) */
/* WARNING: Removing unreachable block (ram,0x0145aa5c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
Atlas_Gameplay_Kart_KartVisualAnimation__OnHitOtherKartWithUsable
          (undefined1 param_1 [16],uint param_2,undefined4 param_3,long param_4,undefined8 param_5,
          long *param_6)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  uint extraout_w1;
  undefined1 *extraout_x1;
  long lVar14;
  ulong extraout_x1_00;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined8 unaff_x19;
  undefined1 *puVar22;
  long unaff_x20;
  uint uVar23;
  undefined8 uVar24;
  undefined8 unaff_x21;
  long lVar25;
  undefined1 *puVar26;
  undefined8 uVar27;
  undefined8 unaff_x22;
  undefined8 uVar28;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 uVar29;
  undefined *puVar30;
  undefined *unaff_x30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  ulong extraout_d0;
  undefined4 uVar35;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  puVar5 = &stack0xfffffffffffffff0;
  lVar25 = 0x3eb5000;
  uVar28 = 0x3d23990;
  if ((bRam0000000003eb53d0 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53d0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar13 = (undefined1 *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_6,0,0);
  if (((ulong)puVar13 & 1) != 0) {
    return puVar13;
  }
  if (*(long *)(param_4 + 0x38) == 0) {
code_r0x015e6938:
    puVar13 = (undefined1 *)func_0x00f78af4();
    puVar30 = &Atlas_Gameplay_Kart_KartVisualAnimation__OnHomingProjectileIncoming;
    if (0.0 < *(float *)(puVar13 + 0x78)) {
      return puVar13;
    }
    if (*(long *)(puVar13 + 0x38) == 0) {
code_r0x015e69ac:
      func_0x00f78af4();
      if (extraout_w1 < 0xd) {
        return (undefined1 *)(ulong)*(uint *)(&UNK_033f8dc0 + (long)(int)extraout_w1 * 4);
      }
      return (undefined1 *)((long)&MACH_HEADER.magic + 3);
    }
    Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming(*(long *)(puVar13 + 0x38),0);
    if (*(long *)(puVar13 + 0x30) == 0) goto code_r0x015e69ac;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming(*(long *)(puVar13 + 0x30),0);
    *(undefined4 *)(puVar13 + 0x78) = 0x40800000;
    lVar15 = *(long *)(puVar13 + 0x20);
    if ((lVar15 == 0) ||
       (auVar36._8_8_ = lVar15, auVar36._0_8_ = *(long *)(lVar15 + 0x90),
       *(long *)(lVar15 + 0x90) == 0)) goto code_r0x015e69ac;
    puVar2 = &stack0xffffffffffffffd0;
code_r0x0145be28:
    lVar16 = auVar36._8_8_;
    lVar15 = auVar36._0_8_;
    puVar3 = puVar2 + -0x60;
    *(ulong *)(puVar2 + -0x60) = unaff_d9;
    *(ulong *)(puVar2 + -0x58) = unaff_d8;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = uVar28;
    *(long *)(puVar2 + -0x28) = lVar25;
    *(long **)(puVar2 + -0x20) = param_6;
    *(long *)(puVar2 + -0x18) = param_4;
    *(undefined1 **)(puVar2 + -0x10) = puVar5;
    *(undefined **)(puVar2 + -8) = puVar30;
    puVar5 = puVar2 + -0x10;
    lVar25 = 0x3eb4000;
    if ((bRam0000000003eb47e4 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47e4 = 1;
    }
    if (lVar16 != 0) {
      puVar13 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar16,0);
      lVar25 = 0x28;
      if ((int)puVar13 == 0) {
        lVar25 = 0x30;
      }
      lVar25 = *(long *)(lVar15 + lVar25);
      auVar38._8_8_ = lVar25;
      auVar38._0_8_ = lVar16;
      if (lVar25 == 0) {
        return puVar13;
      }
      unaff_x24 = 0x3d1ff28;
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (*(long *)(lVar15 + 0x48) != 0) {
        puVar17 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
        lVar25 = *(long *)(*(long *)(lVar15 + 0x48) + 0xb8);
        uVar28 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar28,uRam0000000003d3bf00);
        puVar13 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        puVar30 = &UNK_0145bf54;
code_r0x014fe3e8:
        *(long *)(puVar3 + -0x30) = lVar25;
        *(undefined1 **)(puVar3 + -0x28) = puVar17;
        *(long *)(puVar3 + -0x20) = auVar38._8_8_;
        *(long *)(puVar3 + -0x18) = auVar38._0_8_;
        *(undefined1 **)(puVar3 + -0x10) = puVar5;
        *(undefined **)(puVar3 + -8) = puVar30;
        return puVar13;
      }
    }
    lVar18 = func_0x00f78af4();
    auVar40._8_8_ = extraout_x1;
    auVar40._0_8_ = lVar18;
    puVar6 = puVar2 + -0xa0;
    *(ulong *)(puVar2 + -0xa0) = unaff_d9;
    *(ulong *)(puVar2 + -0x98) = unaff_d8;
    *(undefined8 *)(puVar2 + -0x90) = uVar28;
    *(long *)(puVar2 + -0x88) = lVar15;
    *(long *)(puVar2 + -0x80) = lVar25;
    *(long *)(puVar2 + -0x78) = lVar16;
    *(undefined1 **)(puVar2 + -0x70) = puVar5;
    *(undefined **)(puVar2 + -0x68) = &Atlas_Audio_AtlasAudioManager__RandomAISpeech;
    puVar5 = puVar2 + -0x70;
    unaff_d8 = extraout_d0 & 0xffffffff;
    if ((bRam0000000003eb47e5 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47e5 = 1;
    }
    if (extraout_x1 == (undefined1 *)0x0) {
code_r0x0145c21c:
      fVar33 = (float)func_0x00f78af4();
      *(ulong *)(puVar2 + -0xd0) = unaff_d9;
      *(ulong *)(puVar2 + -200) = unaff_d8;
      *(undefined1 **)(puVar2 + -0xc0) = extraout_x1;
      *(long *)(puVar2 + -0xb8) = lVar18;
      *(undefined1 **)(puVar2 + -0xb0) = puVar5;
      *(undefined **)(puVar2 + -0xa8) = &Atlas_Audio_AtlasAudioManager__SetMusicVolume;
      if ((bRam0000000003eb47e6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d24568);
        bRam0000000003eb47e6 = 1;
      }
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar28 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
      *(undefined8 *)(puVar2 + -0xd8) = uVar28;
      if ((((byte)/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28[0x133] >> 2 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar34 = _UNK_033f8148;
      if (fVar33 != 0.0) {
        fVar34 = fVar33;
      }
      fVar33 = INFINITY;
      if (fVar34 != -INFINITY) {
        fVar33 = ABS(SQRT(fVar34));
      }
      puVar5 = (undefined1 *)
               /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar33,puVar2 + -0xd8,
                               *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x388),1,0)
      ;
      return puVar5;
    }
    iVar4 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
    if ((iVar4 != 0) && (puVar13 = (undefined1 *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)puVar13 == 0))
    {
      return puVar13;
    }
    if (*(long *)(lVar18 + 0x30) == 0) goto code_r0x0145c21c;
    puVar13 = (undefined1 *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar18 + 0x30),0);
    if ((((ulong)puVar13 & 1) != 0) || (*(int *)(lVar18 + 0x50) != 1)) {
      return puVar13;
    }
    puVar26 = (undefined1 *)0x3d1ff28;
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar25 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8);
    if (*(float *)(lVar25 + 0x30) <= (float)extraout_d0) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
    }
    if (0.0 <= *(float *)(lVar18 + 0x88)) {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
    }
    if (extraout_x1[0x38] == '\0') {
      return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
    }
    fVar33 = *(float *)(lVar18 + 0x8c);
    unaff_d8 = (ulong)(uint)fVar33;
    puVar13 = /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
      puVar13 = (undefined1 *)func_0x00f78ad0();
      lVar25 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8);
    }
    if (fVar33 <= *(float *)(lVar25 + 800)) {
      return puVar13;
    }
    iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
    if (iVar4 == 2) {
      puVar22 = *(undefined1 **)(lVar18 + 0x30);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar25 = *(long *)(lVar18 + 0x48);
      if ((lVar25 == 0) || (puVar22 == (undefined1 *)0x0)) goto code_r0x0145c21c;
      lVar16 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
      lVar15 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
      lVar18 = *(long *)(lVar25 + 0xb8);
      uVar31 = *(undefined4 *)(lVar25 + 0x180);
      uVar32 = 0x3f800000;
    }
    else if (iVar4 == 1) {
      puVar22 = *(undefined1 **)(lVar18 + 0x30);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (puVar22 == (undefined1 *)0x0) goto code_r0x0145c21c;
      lVar18 = *(long *)(extraout_x1 + 0xb8);
      uVar31 = *(undefined4 *)(extraout_x1 + 0x180);
      lVar16 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x378);
      uVar32 = 0;
      lVar15 = lVar16;
    }
    else {
      if (iVar4 != 0) {
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar5 = /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
        *(undefined4 *)(lVar18 + 0x88) =
             *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x34);
        return puVar5;
      }
      puVar22 = *(undefined1 **)(lVar18 + 0x30);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (puVar22 == (undefined1 *)0x0) goto code_r0x0145c21c;
      lVar18 = *(long *)(extraout_x1 + 0xb8);
      uVar31 = *(undefined4 *)(extraout_x1 + 0x180);
      lVar16 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x378);
      uVar32 = 0;
      lVar15 = lVar16;
    }
    uVar35 = 4;
    puVar30 = &UNK_0145c1e0;
    puVar7 = extraout_x1;
    puVar17 = puVar22;
code_r0x014fe2a8:
    lVar25 = auVar40._8_8_;
    *(ulong *)(puVar6 + -0x70) = unaff_d9;
    *(ulong *)(puVar6 + -0x68) = unaff_d8;
    *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar6 + -0x38) = unaff_x23;
    *(undefined1 **)(puVar6 + -0x30) = puVar26;
    *(undefined1 **)(puVar6 + -0x28) = puVar17;
    *(undefined1 **)(puVar6 + -0x20) = puVar7;
    *(long *)(puVar6 + -0x18) = auVar40._0_8_;
    *(undefined1 **)(puVar6 + -0x10) = puVar5;
    *(undefined **)(puVar6 + -8) = puVar30;
    if ((bRam0000000003eb4cd9 & 1) == 0) {
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      func_0x00f78a20(0x3d24b48);
      bRam0000000003eb4cd9 = 1;
    }
    if (lVar15 != 0) {
      uVar28 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar28,uRam0000000003d3bf00);
      puVar5 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      return puVar5;
    }
    uVar28 = *(undefined8 *)(puVar6 + -0x10);
    uVar29 = *(undefined8 *)(puVar6 + -8);
    uVar8 = *(undefined8 *)(puVar6 + -0x20);
    uVar21 = *(undefined8 *)(puVar6 + -0x18);
    uVar27 = *(undefined8 *)(puVar6 + -0x30);
    uVar24 = *(undefined8 *)(puVar6 + -0x28);
    unaff_x24 = *(undefined8 *)(puVar6 + -0x40);
    unaff_x23 = *(undefined8 *)(puVar6 + -0x38);
    unaff_x26 = *(undefined8 *)(puVar6 + -0x50);
    unaff_x25 = *(undefined8 *)(puVar6 + -0x48);
    unaff_x28 = *(undefined8 *)(puVar6 + -0x60);
    unaff_x27 = *(undefined8 *)(puVar6 + -0x58);
    unaff_d9 = *(ulong *)(puVar6 + -0x70);
    unaff_d8 = *(ulong *)(puVar6 + -0x68);
  }
  else {
    Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall(*(long *)(param_4 + 0x38),0);
    if ((*(long *)(param_4 + 0x30) == 0) ||
       (Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerCelebrateSmall(*(long *)(param_4 + 0x30),0),
       param_6 == (long *)0x0)) goto code_r0x015e6938;
    iVar4 = (**(code **)(*param_6 + 0x188))(param_6,*(undefined8 *)(*param_6 + 400));
    lVar15 = *(long *)(param_4 + 0x20);
    if (iVar4 == 5) {
      if ((lVar15 == 0) ||
         (auVar39._8_8_ = lVar15, auVar39._0_8_ = *(long *)(lVar15 + 0x90),
         *(long *)(lVar15 + 0x90) == 0)) goto code_r0x015e6938;
      puVar17 = (undefined1 *)0x0;
      puVar13 = (undefined1 *)register0x00000008;
      puVar5 = unaff_x29;
    }
    else {
      if ((lVar15 == 0) || (unaff_x20 = *(long *)(lVar15 + 0x90), unaff_x20 == 0))
      goto code_r0x015e6938;
      puVar17 = (undefined1 *)0x0;
      puVar13 = &stack0xffffffffffffffa0;
      puVar3 = &stack0xffffffffffffffa0;
      puVar5 = &stack0xfffffffffffffff0;
      unaff_x21 = 0x3eb4000;
      if ((bRam0000000003eb47d6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        func_0x00f78a20(0x3d24b48);
        bRam0000000003eb47d6 = 1;
      }
      if (lVar15 != 0) {
        puVar13 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar15,0);
        lVar25 = 0x28;
        if ((int)puVar13 == 0) {
          lVar25 = 0x30;
        }
        auVar38._8_8_ = *(long *)(unaff_x20 + lVar25);
        auVar38._0_8_ = lVar15;
        if (*(long *)(unaff_x20 + lVar25) == 0) {
          return puVar13;
        }
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar17 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
        lVar25 = *(long *)(lVar15 + 0xb8);
        uVar28 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar28,uRam0000000003d3bf00);
        puVar13 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        puVar30 = &UNK_0145aa58;
        goto code_r0x014fe3e8;
      }
      unaff_x30 = &Atlas_Audio_AtlasAudioManager__SpeakHitOtherKartTurd;
      auVar39 = func_0x00f78af4();
      unaff_x19 = 0;
    }
    lVar25 = auVar39._8_8_;
    *(undefined8 *)(puVar13 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar13 + -0x28) = unaff_x21;
    *(long *)(puVar13 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar13 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar13 + -0x10) = puVar5;
    *(undefined **)(puVar13 + -8) = unaff_x30;
    if ((bRam0000000003eb47d7 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      bRam0000000003eb47d7 = 1;
    }
    if (lVar25 == 0) {
      auVar36 = func_0x00f78af4();
      auVar37._8_8_ = puVar17;
      auVar37._0_8_ = auVar36._0_8_;
      *(ulong *)(puVar13 + -0x90) = unaff_d9;
      *(ulong *)(puVar13 + -0x88) = unaff_d8;
      *(undefined8 *)(puVar13 + -0x80) = unaff_x26;
      *(undefined8 *)(puVar13 + -0x78) = unaff_x25;
      *(undefined8 *)(puVar13 + -0x70) = unaff_x24;
      *(undefined8 *)(puVar13 + -0x68) = unaff_x23;
      *(undefined8 *)(puVar13 + -0x60) = unaff_x22;
      *(undefined8 *)(puVar13 + -0x58) = 0x3eb4000;
      *(long *)(puVar13 + -0x50) = auVar39._0_8_;
      *(undefined8 *)(puVar13 + -0x48) = 0;
      *(undefined1 **)(puVar13 + -0x40) = puVar13 + -0x10;
      *(undefined **)(puVar13 + -0x38) = &Atlas_Audio_AtlasAudioManager__SpeakHitOtherKart;
      puVar7 = puVar17;
      if ((bRam0000000003eb47d8 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        func_0x00f78a20(0x3d24b48);
        bRam0000000003eb47d8 = 1;
      }
      if (auVar36._8_8_ == 0) {
code_r0x0145ad60:
        puVar30 = &Atlas_Audio_AtlasAudioManager__SpeakCollisionAI;
        auVar37 = func_0x00f78af4();
      }
      else {
        uVar10 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(auVar36._8_8_,0);
        if ((uVar10 & 1) == 0) {
          if (puVar17 == (undefined1 *)0x0) goto code_r0x0145ad60;
          puVar5 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(puVar17,0);
          if ((int)puVar5 == 0) {
            return puVar5;
          }
        }
        puVar7 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
        puVar30 = &UNK_0145ac58;
      }
      auVar38._8_8_ = puVar7;
      auVar38._0_8_ = auVar37._8_8_;
      puVar3 = puVar13 + -0x100;
      *(ulong *)(puVar13 + -0x100) = unaff_d9;
      *(ulong *)(puVar13 + -0xf8) = unaff_d8;
      *(undefined8 *)(puVar13 + -0xf0) = unaff_x28;
      *(undefined8 *)(puVar13 + -0xe8) = unaff_x27;
      *(undefined8 *)(puVar13 + -0xe0) = unaff_x26;
      *(undefined8 *)(puVar13 + -0xd8) = unaff_x25;
      *(undefined8 *)(puVar13 + -0xd0) = unaff_x24;
      *(undefined8 *)(puVar13 + -200) = unaff_x23;
      *(undefined8 *)(puVar13 + -0xc0) = 0x3eb4000;
      *(undefined1 **)(puVar13 + -0xb8) = puVar17;
      *(undefined1 (*) [16])(puVar13 + -0xb0) = auVar36;
      *(undefined1 **)(puVar13 + -0xa0) = puVar13 + -0x40;
      *(undefined **)(puVar13 + -0x98) = puVar30;
      puVar5 = puVar13 + -0xa0;
      puVar6 = auVar37._0_8_;
      puVar17 = puVar7;
      if ((bRam0000000003eb47dc & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        puVar6 = (undefined1 *)func_0x00f78a20(0x3d24b48);
        bRam0000000003eb47dc = 1;
      }
      puVar22 = *(undefined1 **)(auVar37._0_8_ + 0x30);
      if (puVar22 == (undefined1 *)0x0) {
        return puVar6;
      }
      unaff_x25 = 0x3d1ff28;
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (auVar37._8_8_ != 0) {
        lVar25 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x368);
        uVar28 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar28,uRam0000000003d3bf00);
        puVar13 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        puVar30 = &UNK_0145ae74;
        puVar17 = puVar22;
        goto code_r0x014fe3e8;
      }
      auVar38 = func_0x00f78af4();
      lVar25 = auVar38._8_8_;
      puVar3 = puVar13 + -0x160;
      *(ulong *)(puVar13 + -0x160) = unaff_d9;
      *(ulong *)(puVar13 + -0x158) = unaff_d8;
      *(undefined8 *)(puVar13 + -0x150) = unaff_x26;
      *(undefined8 *)(puVar13 + -0x148) = 0x3d1ff28;
      *(undefined8 *)(puVar13 + -0x140) = unaff_x24;
      *(undefined8 *)(puVar13 + -0x138) = unaff_x23;
      *(undefined8 *)(puVar13 + -0x130) = 0x3eb4000;
      *(undefined1 **)(puVar13 + -0x128) = puVar22;
      *(undefined1 **)(puVar13 + -0x120) = puVar7;
      *(undefined8 *)(puVar13 + -0x118) = 0;
      *(undefined1 **)(puVar13 + -0x110) = puVar5;
      *(undefined **)(puVar13 + -0x108) = &Atlas_Audio_AtlasAudioManager__SpeakThrowProjectile;
      puVar5 = puVar13 + -0x110;
      if ((bRam0000000003eb47d9 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        func_0x00f78a20(0x3d24b48);
        bRam0000000003eb47d9 = 1;
      }
      if (lVar25 != 0) {
        puVar13 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar25,0);
        if ((int)puVar13 == 0) {
          return puVar13;
        }
        puVar13 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar25,0);
        lVar15 = 0x28;
        if ((int)puVar13 == 0) {
          lVar15 = 0x30;
        }
        lVar15 = *(long *)(auVar38._0_8_ + lVar15);
        auVar38._8_8_ = lVar15;
        auVar38._0_8_ = lVar25;
        if (lVar15 == 0) {
          return puVar13;
        }
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar17 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
        lVar25 = *(long *)(lVar25 + 0xb8);
        uVar28 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar28,uRam0000000003d3bf00);
        puVar13 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        puVar30 = &UNK_0145b02c;
        goto code_r0x014fe3e8;
      }
      auVar39 = func_0x00f78af4();
      lVar25 = auVar39._8_8_;
      puVar3 = puVar13 + -0x1c0;
      *(ulong *)(puVar13 + -0x1c0) = unaff_d9;
      *(ulong *)(puVar13 + -0x1b8) = unaff_d8;
      *(undefined8 *)(puVar13 + -0x1b0) = unaff_x26;
      *(undefined8 *)(puVar13 + -0x1a8) = 0x3d1ff28;
      *(undefined8 *)(puVar13 + -0x1a0) = unaff_x24;
      *(undefined8 *)(puVar13 + -0x198) = unaff_x23;
      *(undefined8 *)(puVar13 + -400) = 0x3eb4000;
      *(undefined8 *)(puVar13 + -0x188) = 0x3eb4000;
      *(long *)(puVar13 + -0x180) = auVar38._0_8_;
      *(undefined8 *)(puVar13 + -0x178) = 0;
      *(undefined1 **)(puVar13 + -0x170) = puVar5;
      *(undefined **)(puVar13 + -0x168) = &Atlas_Audio_AtlasAudioManager__SpeakPickupUsable;
      puVar5 = puVar13 + -0x170;
      if ((bRam0000000003eb47da & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        func_0x00f78a20(0x3d24b48);
        bRam0000000003eb47da = 1;
      }
      if (lVar25 != 0) {
        puVar13 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar25,0);
        if ((int)puVar13 == 0) {
          return puVar13;
        }
        puVar13 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar25,0);
        lVar15 = 0x28;
        if ((int)puVar13 == 0) {
          lVar15 = 0x30;
        }
        lVar15 = *(long *)(auVar39._0_8_ + lVar15);
        auVar38._8_8_ = lVar15;
        auVar38._0_8_ = lVar25;
        if (lVar15 == 0) {
          return puVar13;
        }
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar17 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x360);
        lVar25 = *(long *)(lVar25 + 0xb8);
        uVar28 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar28,uRam0000000003d3bf00);
        puVar13 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        puVar30 = &UNK_0145b1dc;
        goto code_r0x014fe3e8;
      }
      auVar38 = func_0x00f78af4();
      lVar25 = auVar38._8_8_;
      puVar22 = auVar38._0_8_;
      puVar3 = puVar13 + -0x230;
      *(ulong *)(puVar13 + -0x230) = unaff_d9;
      *(ulong *)(puVar13 + -0x228) = unaff_d8;
      *(undefined8 *)(puVar13 + -0x220) = unaff_x28;
      *(undefined8 *)(puVar13 + -0x218) = unaff_x27;
      *(undefined8 *)(puVar13 + -0x210) = unaff_x26;
      *(undefined8 *)(puVar13 + -0x208) = 0x3d1ff28;
      *(undefined8 *)(puVar13 + -0x200) = unaff_x24;
      *(undefined8 *)(puVar13 + -0x1f8) = unaff_x23;
      *(undefined8 *)(puVar13 + -0x1f0) = 0x3eb4000;
      *(undefined8 *)(puVar13 + -0x1e8) = 0x3eb4000;
      *(long *)(puVar13 + -0x1e0) = auVar39._0_8_;
      *(undefined8 *)(puVar13 + -0x1d8) = 0;
      *(undefined1 **)(puVar13 + -0x1d0) = puVar5;
      *(undefined **)(puVar13 + -0x1c8) = &Atlas_Audio_AtlasAudioManager__SpeakCollision;
      puVar5 = puVar13 + -0x1d0;
      puVar7 = puVar22;
      puVar6 = puVar17;
      if ((bRam0000000003eb47db & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d3bf08);
        func_0x00f78a20(0x3d3bf00);
        func_0x00f78a20(0x3d1de10);
        puVar7 = (undefined1 *)func_0x00f78a20(0x3d24b48);
        bRam0000000003eb47db = 1;
      }
      if ((int)puVar17 < 2) {
        return puVar7;
      }
      if (lVar25 != 0) {
        puVar13 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar25,0);
        if (((int)puVar13 == 0) || (*(float *)(puVar22 + 0x70) <= 3.0)) {
          return puVar13;
        }
        puVar13 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar25,0);
        lVar25 = 0x28;
        if ((int)puVar13 == 0) {
          lVar25 = 0x30;
        }
        lVar25 = *(long *)(puVar22 + lVar25);
        if (lVar25 == 0) {
          *(undefined4 *)(puVar22 + 0x70) = 0;
          return puVar13;
        }
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar28 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar28,uRam0000000003d3bf00);
        puVar13 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        puVar30 = &UNK_0145b3ac;
        goto code_r0x014fe3e8;
      }
      auVar38 = func_0x00f78af4();
      lVar15 = auVar38._8_8_;
      lVar25 = auVar38._0_8_;
      *(ulong *)(puVar13 + -0x270) = unaff_d9;
      *(ulong *)(puVar13 + -0x268) = unaff_d8;
      *(undefined8 *)(puVar13 + -0x260) = 0x3eb4000;
      *(undefined1 **)(puVar13 + -600) = puVar17;
      *(undefined8 *)(puVar13 + -0x250) = 0;
      *(undefined1 **)(puVar13 + -0x248) = puVar22;
      *(undefined1 **)(puVar13 + -0x240) = puVar5;
      *(undefined **)(puVar13 + -0x238) = &Atlas_Audio_AtlasAudioManager__SpeakWinOrLose;
      puVar17 = puVar6;
      if ((bRam0000000003eb47dd & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        bRam0000000003eb47dd = 1;
      }
      if (lVar15 == 0) {
        puVar22 = (undefined1 *)func_0x00f78af4();
        puVar3 = puVar13 + -0x2d0;
        *(ulong *)(puVar13 + -0x2d0) = unaff_d9;
        *(ulong *)(puVar13 + -0x2c8) = unaff_d8;
        *(undefined8 *)(puVar13 + -0x2c0) = unaff_x26;
        *(undefined8 *)(puVar13 + -0x2b8) = 0x3d1ff28;
        *(undefined8 *)(puVar13 + -0x2b0) = unaff_x24;
        *(undefined8 *)(puVar13 + -0x2a8) = unaff_x23;
        *(undefined8 *)(puVar13 + -0x2a0) = 0x3eb4000;
        *(undefined1 **)(puVar13 + -0x298) = puVar6;
        *(long *)(puVar13 + -0x290) = lVar25;
        *(undefined8 *)(puVar13 + -0x288) = 0;
        *(undefined1 **)(puVar13 + -0x280) = puVar13 + -0x240;
        *(undefined **)(puVar13 + -0x278) = &Atlas_Audio_AtlasAudioManager__SpeakIntro;
        puVar5 = puVar13 + -0x280;
        puVar7 = puVar22;
        if ((bRam0000000003eb47de & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          puVar7 = (undefined1 *)func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47de = 1;
        }
        lVar25 = *(long *)(puVar22 + 0x48);
        if (lVar25 == 0) {
          return puVar7;
        }
        lVar15 = *(long *)(puVar22 + 0x28);
        auVar38._8_8_ = lVar15;
        auVar38._0_8_ = lVar25;
        if (lVar15 == 0) {
          return puVar7;
        }
        unaff_x24 = 0x3d1ff28;
        lVar16 = lVar25;
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) != 0)) {
code_r0x0145b5fc:
          puVar17 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
          lVar25 = *(long *)(lVar16 + 0xb8);
          uVar28 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar28,uRam0000000003d3bf00);
          puVar13 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
          puVar30 = &UNK_0145b660;
          goto code_r0x014fe3e8;
        }
        func_0x00f78ad0();
        lVar16 = *(long *)(puVar22 + 0x48);
        if (lVar16 != 0) goto code_r0x0145b5fc;
        auVar40 = func_0x00f78af4();
        puVar7 = auVar40._8_8_;
        puVar26 = auVar40._0_8_;
        puVar6 = puVar13 + -0x330;
        *(undefined8 *)(puVar13 + -0x330) = unaff_d11;
        *(undefined8 *)(puVar13 + -0x328) = unaff_d10;
        *(ulong *)(puVar13 + -800) = unaff_d9;
        *(ulong *)(puVar13 + -0x318) = unaff_d8;
        *(undefined8 *)(puVar13 + -0x310) = 0x3d1ff28;
        *(undefined8 *)(puVar13 + -0x308) = unaff_x23;
        *(undefined8 *)(puVar13 + -0x300) = 0x3eb4000;
        *(undefined1 **)(puVar13 + -0x2f8) = puVar22;
        *(long *)(puVar13 + -0x2f0) = lVar15;
        *(long *)(puVar13 + -0x2e8) = lVar25;
        *(undefined1 **)(puVar13 + -0x2e0) = puVar5;
        *(undefined **)(puVar13 + -0x2d8) = &Atlas_Audio_AtlasAudioManager__SpeakOvertake;
        puVar5 = puVar13 + -0x2e0;
        uVar28 = 0x3eb4000;
        puVar22 = puVar26;
        if ((bRam0000000003eb47df & 1) == 0) {
          puVar22 = (undefined1 *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47df = 1;
        }
        if (*(int *)(puVar26 + 0x50) != 0) {
          return puVar22;
        }
        lVar25 = *(long *)(puVar26 + 0x68);
        if (lVar25 == 0) {
          return puVar22;
        }
        if ((int)(*(uint *)(lVar25 + 0x18) - 1) <= (int)puVar17) {
          return puVar22;
        }
        lVar15 = (long)(int)puVar17 + 1;
        if ((uint)lVar15 < *(uint *)(lVar25 + 0x18)) {
          lVar25 = *(long *)(lVar25 + lVar15 * 8 + 0x20);
          if (((lVar25 != 0) && (lVar25 = *(long *)(lVar25 + 0x10), lVar25 != 0)) &&
             (puVar7 != (undefined1 *)0x0)) {
            puVar17 = *(undefined1 **)(lVar25 + 0x70);
            uVar10 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(puVar7,0);
            if ((uVar10 & 1) == 0) {
              if (puVar17 == (undefined1 *)0x0) goto code_r0x0145b92c;
              puVar22 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(puVar17,0);
              if ((int)puVar22 == 0) {
                return puVar22;
              }
            }
            if (((*(long *)(puVar7 + 0xb8) != 0) &&
                (uVar32 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(puVar7 + 0xb8),0), puVar17 != (undefined1 *)0x0)
                ) && (*(long *)(puVar17 + 0xb8) != 0)) {
              unaff_d9 = (ulong)param_2;
              uVar23 = param_2;
              uVar35 = param_3;
              uVar31 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(puVar17 + 0xb8),0);
              fVar33 = (float)/*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(uVar32,param_2,param_3,uVar31,uVar23,uVar35,0);
              unaff_x23 = 0x3d1ff28;
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar25 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8);
              if (*(float *)(lVar25 + 0x31c) <= fVar33 || puVar17 == puVar7) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
              }
              fVar33 = *(float *)(puVar26 + 0x74);
              unaff_d8 = (ulong)(uint)fVar33;
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
                lVar25 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8);
              }
              if (fVar33 < *(float *)(lVar25 + 0x318)) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28;
              }
              puVar22 = *(undefined1 **)(puVar26 + 0x28);
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar28 = 0;
              if (puVar22 != (undefined1 *)0x0) {
                lVar18 = *(long *)(puVar7 + 0xb8);
                uVar31 = *(undefined4 *)(puVar7 + 0x180);
                lVar16 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x378);
                uVar35 = 4;
                puVar30 = &UNK_0145b8cc;
                lVar15 = lVar16;
                puVar26 = puVar22;
                uVar32 = 0;
                goto code_r0x014fe2a8;
              }
            }
          }
code_r0x0145b92c:
          func_0x00f78af4();
        }
        uVar8 = func_0x00f78b24();
        auVar38 = func_0x00f78ac0(uVar8,0);
        lVar15 = auVar38._8_8_;
        lVar25 = auVar38._0_8_;
        puVar3 = puVar13 + -0x390;
        *(ulong *)(puVar13 + -0x390) = unaff_d9;
        *(ulong *)(puVar13 + -0x388) = unaff_d8;
        *(undefined8 *)(puVar13 + -0x380) = unaff_x26;
        *(undefined8 *)(puVar13 + -0x378) = 0x3d1ff28;
        *(undefined8 *)(puVar13 + -0x370) = 0x3d1ff28;
        *(undefined8 *)(puVar13 + -0x368) = unaff_x23;
        *(undefined8 *)(puVar13 + -0x360) = uVar28;
        *(undefined1 **)(puVar13 + -0x358) = puVar17;
        *(undefined1 **)(puVar13 + -0x350) = puVar7;
        *(undefined1 **)(puVar13 + -0x348) = puVar26;
        *(undefined1 **)(puVar13 + -0x340) = puVar5;
        *(undefined **)(puVar13 + -0x338) = &Atlas_Audio_AtlasAudioManager__SpeakRespawning;
        puVar5 = puVar13 + -0x340;
        lVar16 = 0x3eb4000;
        if ((bRam0000000003eb47e0 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e0 = 1;
        }
        if (lVar15 != 0) {
          puVar17 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar15,0);
          lVar16 = 0x28;
          if ((int)puVar17 == 0) {
            lVar16 = 0x30;
          }
          lVar16 = *(long *)(lVar25 + lVar16);
          auVar38._8_8_ = lVar16;
          auVar38._0_8_ = lVar15;
          if (lVar16 == 0) {
            return puVar17;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(lVar25 + 0x48) != 0) {
            puVar17 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar25 = *(long *)(*(long *)(lVar25 + 0x48) + 0xb8);
            uVar28 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar28,uRam0000000003d3bf00);
            puVar13 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            puVar30 = &UNK_0145ba68;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        puVar17 = (undefined1 *)func_0x00f78af4();
        *(undefined8 *)(puVar13 + -0x3c0) = uVar28;
        *(long *)(puVar13 + -0x3b8) = lVar25;
        *(long *)(puVar13 + -0x3b0) = lVar16;
        *(long *)(puVar13 + -0x3a8) = lVar15;
        *(undefined1 **)(puVar13 + -0x3a0) = puVar5;
        *(undefined **)(puVar13 + -0x398) = &Atlas_Audio_AtlasAudioManager__SpeakShield;
        puVar5 = puVar17;
        if ((bRam0000000003eb47e1 & 1) == 0) {
          puVar5 = (undefined1 *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e1 = 1;
        }
        lVar25 = *(long *)(puVar17 + 0x48);
        if (lVar25 == 0) {
          return puVar5;
        }
        puVar22 = *(undefined1 **)(puVar17 + 0x28);
        lVar19 = lVar25;
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) != 0)) {
joined_r0x0145bb44:
          if (puVar22 != (undefined1 *)0x0) {
            lVar16 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar15 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
            lVar18 = *(long *)(lVar19 + 0xb8);
            uVar31 = *(undefined4 *)(lVar19 + 0x180);
            uVar35 = 1;
            puVar5 = *(undefined1 **)(puVar13 + -0x3a0);
            puVar30 = *(undefined **)(puVar13 + -0x398);
            puVar7 = *(undefined1 **)(puVar13 + -0x3b0);
            auVar40._8_8_ = lVar25;
            auVar40._0_8_ = *(undefined8 *)(puVar13 + -0x3a8);
            puVar6 = puVar13 + -0x390;
            puVar26 = *(undefined1 **)(puVar13 + -0x3c0);
            puVar17 = *(undefined1 **)(puVar13 + -0x3b8);
            unaff_x25 = 0x3d1ff28;
            uVar32 = _UNK_033f813c;
            goto code_r0x014fe2a8;
          }
        }
        else {
          func_0x00f78ad0();
          lVar19 = *(long *)(puVar17 + 0x48);
          if (lVar19 != 0) goto joined_r0x0145bb44;
        }
        auVar38 = func_0x00f78af4();
        lVar19 = auVar38._8_8_;
        *(undefined8 *)(puVar13 + -0x3f0) = 0x3d1ff28;
        *(undefined1 **)(puVar13 + -1000) = puVar17;
        *(undefined1 **)(puVar13 + -0x3e0) = puVar22;
        *(long *)(puVar13 + -0x3d8) = lVar25;
        *(undefined1 **)(puVar13 + -0x3d0) = puVar13 + -0x3a0;
        *(undefined **)(puVar13 + -0x3c8) = &Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
        puVar22 = (undefined1 *)0x3eb4000;
        if ((bRam0000000003eb47e2 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e2 = 1;
        }
        if (lVar19 != 0) {
          puVar5 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar19,0);
          if ((int)puVar5 == 0) {
            return puVar5;
          }
          puVar22 = *(undefined1 **)(auVar38._0_8_ + 0x28);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar25 = *(long *)(auVar38._0_8_ + 0x48);
          if ((lVar25 != 0) && (puVar22 != (undefined1 *)0x0)) {
            lVar16 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar15 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310);
            lVar18 = *(long *)(lVar25 + 0xb8);
            uVar31 = *(undefined4 *)(lVar25 + 0x180);
            uVar32 = 0;
            uVar35 = 3;
            puVar5 = *(undefined1 **)(puVar13 + -0x3d0);
            puVar30 = *(undefined **)(puVar13 + -0x3c8);
            puVar7 = *(undefined1 **)(puVar13 + -0x3e0);
            auVar40._8_8_ = lVar19;
            auVar40._0_8_ = *(undefined8 *)(puVar13 + -0x3d8);
            puVar6 = puVar13 + -0x3c0;
            puVar26 = *(undefined1 **)(puVar13 + -0x3f0);
            puVar17 = *(undefined1 **)(puVar13 + -1000);
            unaff_x25 = 0x3d1ff28;
            goto code_r0x014fe2a8;
          }
        }
        uVar28 = 0x3d1ff28;
        auVar39 = func_0x00f78af4();
        param_4 = auVar39._8_8_;
        lVar25 = auVar39._0_8_;
        puVar3 = puVar13 + -0x450;
        puVar2 = puVar13 + -0x450;
        *(ulong *)(puVar13 + -0x450) = unaff_d9;
        *(ulong *)(puVar13 + -0x448) = unaff_d8;
        *(undefined8 *)(puVar13 + -0x440) = unaff_x26;
        *(undefined8 *)(puVar13 + -0x438) = 0x3d1ff28;
        *(undefined8 *)(puVar13 + -0x430) = 0x3d1ff28;
        *(undefined8 *)(puVar13 + -0x428) = unaff_x23;
        *(undefined8 *)(puVar13 + -0x420) = 0x3d1ff28;
        *(undefined1 **)(puVar13 + -0x418) = puVar22;
        *(undefined1 (*) [16])(puVar13 + -0x410) = auVar38;
        *(undefined1 **)(puVar13 + -0x400) = puVar13 + -0x3d0;
        *(undefined **)(puVar13 + -0x3f8) = &Atlas_Audio_AtlasAudioManager__SpeakSneer;
        puVar5 = puVar13 + -0x400;
        param_6 = (long *)0x3eb4000;
        if ((bRam0000000003eb47e3 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e3 = 1;
        }
        if (param_4 != 0) {
          puVar13 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_4,0);
          lVar15 = 0x28;
          if ((int)puVar13 == 0) {
            lVar15 = 0x30;
          }
          param_6 = *(long **)(lVar25 + lVar15);
          auVar38._8_8_ = param_6;
          auVar38._0_8_ = param_4;
          if (param_6 == (long *)0x0) {
            return puVar13;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(lVar25 + 0x48) != 0) {
            puVar17 = *(undefined1 **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350);
            lVar25 = *(long *)(*(long *)(lVar25 + 0x48) + 0xb8);
            uVar28 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar28,uRam0000000003d3bf00);
            puVar13 = (undefined1 *)func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            puVar30 = &UNK_0145bdac;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        puVar30 = &Atlas_Audio_AtlasAudioManager__SpeakIncoming;
        auVar36 = func_0x00f78af4();
        goto code_r0x0145be28;
      }
      puVar5 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar15,0);
      if ((int)puVar5 == 0) {
        return puVar5;
      }
      uVar23 = (uint)puVar6;
      uVar32 = 0x40000000;
      if (8 < uVar23) {
        uVar32 = 0x40400000;
      }
      uVar35 = 0x3f800000;
      if (3 < uVar23) {
        uVar35 = uVar32;
      }
      uVar32 = 0;
      if (1 < (int)uVar23) {
        uVar32 = uVar35;
      }
      /*Atlas.Audio.KartAudio$$OnRaceFinished*/ func_0x015c133c(lVar15,0);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar5 = (undefined1 *)
               /*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60(uVar32,lVar25,
                               *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x370),0,0)
      ;
      puVar22 = *(undefined1 **)(lVar25 + 0x28);
      if (puVar22 == (undefined1 *)0x0) {
        return puVar5;
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar18 = *(long *)(lVar15 + 0xb8);
      uVar31 = *(undefined4 *)(lVar15 + 0x180);
      lVar16 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x370);
      uVar35 = 1;
      puVar5 = *(undefined1 **)(puVar13 + -0x240);
      puVar30 = *(undefined **)(puVar13 + -0x238);
      puVar7 = *(undefined1 **)(puVar13 + -0x250);
      auVar40._8_8_ = lVar15;
      auVar40._0_8_ = *(undefined8 *)(puVar13 + -0x248);
      puVar6 = puVar13 + -0x230;
      unaff_d9 = *(ulong *)(puVar13 + -0x270);
      unaff_d8 = *(ulong *)(puVar13 + -0x268);
      lVar15 = 0;
      puVar17 = *(undefined1 **)(puVar13 + -600);
      puVar26 = *(undefined1 **)(puVar13 + -0x260);
      uVar32 = 0;
      goto code_r0x014fe2a8;
    }
    puVar5 = (undefined1 *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar25,0);
    lVar15 = 0x28;
    if ((int)puVar5 == 0) {
      lVar15 = 0x30;
    }
    puVar22 = *(undefined1 **)(auVar39._0_8_ + lVar15);
    if (puVar22 == (undefined1 *)0x0) {
      return puVar5;
    }
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar18 = *(long *)(lVar25 + 0xb8);
    uVar31 = *(undefined4 *)(lVar25 + 0x180);
    lVar16 = *(long *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x358);
    uVar32 = 0;
    uVar35 = 1;
    uVar28 = *(undefined8 *)(puVar13 + -0x10);
    uVar29 = *(undefined8 *)(puVar13 + -8);
    uVar8 = *(undefined8 *)(puVar13 + -0x20);
    uVar21 = *(undefined8 *)(puVar13 + -0x18);
    uVar27 = *(undefined8 *)(puVar13 + -0x30);
    uVar24 = *(undefined8 *)(puVar13 + -0x28);
    puVar6 = puVar13;
  }
  auVar41._8_8_ = lVar25;
  auVar41._0_8_ = puVar22;
  piVar20 = (int *)0x0;
  *(ulong *)(puVar6 + -0x50) = unaff_d9;
  *(ulong *)(puVar6 + -0x48) = unaff_d8;
  *(undefined8 *)(puVar6 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar6 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar6 + -0x30) = uVar27;
  *(undefined8 *)(puVar6 + -0x28) = uVar24;
  *(undefined8 *)(puVar6 + -0x20) = uVar8;
  *(undefined8 *)(puVar6 + -0x18) = uVar21;
  *(undefined8 *)(puVar6 + -0x10) = uVar28;
  *(undefined8 *)(puVar6 + -8) = uVar29;
  *(undefined4 *)(puVar6 + -0x54) = uVar35;
  lVar15 = lVar16;
  lVar19 = lVar18;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(uVar31,uVar32,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if (puVar22[0x34] == '\0') {
code_r0x014fe49c:
    piVar20 = (int *)(puVar6 + -0x54);
    lVar19 = 0;
    puVar30 = &UNK_014fe4b4;
    lVar15 = lVar16;
  }
  else {
    if (*(long *)(puVar22 + 0x10) != 0) {
      if (*(char *)(*(long *)(puVar22 + 0x10) + 0xcb) == '\0') {
        return (undefined1 *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar30 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar41 = func_0x00f78af4();
  }
  lVar14 = auVar41._8_8_;
  lVar9 = auVar41._0_8_;
  *(undefined8 *)(puVar6 + -0xc0) = unaff_x28;
  *(undefined8 *)(puVar6 + -0xb8) = unaff_x27;
  *(undefined8 *)(puVar6 + -0xb0) = unaff_x26;
  *(undefined8 *)(puVar6 + -0xa8) = unaff_x25;
  *(undefined8 *)(puVar6 + -0xa0) = 0x3eb4000;
  *(long *)(puVar6 + -0x98) = lVar25;
  *(long *)(puVar6 + -0x90) = lVar16;
  *(undefined1 **)(puVar6 + -0x88) = puVar22;
  *(long *)(puVar6 + -0x80) = lVar18;
  *(undefined8 *)(puVar6 + -0x78) = 0;
  *(undefined1 **)(puVar6 + -0x70) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x68) = puVar30;
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
  *(undefined8 *)(puVar6 + -0xe0) = 0;
  *(undefined8 *)(puVar6 + -0xd8) = 0;
  *(undefined8 *)(puVar6 + -0xd0) = 0;
  *(undefined4 *)(puVar6 + -0xe4) = 0;
  if (*(long *)(lVar9 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar9 + 0x10) + 0x90) != '\0') {
    return (undefined1 *)0x0;
  }
  if (lVar14 == 0) goto code_r0x014fe8f8;
  uVar10 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar14,0);
  if ((uVar10 & 1) != 0) {
    return (undefined1 *)0x0;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(lVar15,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x350),0)
  ;
  if (iVar4 != 0) {
    if (lVar19 == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar6 + -0x100,lVar19,uRam0000000003d3bf10);
    *(undefined8 *)(puVar6 + -0xd8) = *(undefined8 *)(puVar6 + -0xf8);
    *(undefined8 *)(puVar6 + -0xe0) = *(undefined8 *)(puVar6 + -0x100);
    *(undefined8 *)(puVar6 + -0xd0) = *(undefined8 *)(puVar6 + -0xf0);
    while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar6 + -0xe0,uRam0000000003d32f58), (uVar10 & 1) != 0) {
      lVar25 = *(long *)(puVar6 + -0xd0);
      if (lVar25 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar28 = *(undefined8 *)(lVar25 + 0x10);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar28,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ puRam0000000003d1ff28 + 0xb8) + 0x310),0);
      if ((uVar10 & 1) != 0) {
        fVar34 = *(float *)(lVar25 + 0x18);
        fVar33 = -fVar34;
        if (fVar34 != INFINITY) {
          fVar33 = fVar34;
        }
        *(int *)(puVar6 + -0xe4) = (int)fVar33;
        plVar11 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,puVar6 + -0xe4);
        if (plVar11 == (long *)0x0) goto code_r0x014fe8fc;
        uVar28 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        puVar12 = (undefined4 *)func_0x00f78ae4(plVar11);
        *(undefined4 *)(puVar6 + -0xe4) = *puVar12;
        lVar15 = /*System.String$$Concat*/ func_0x029bdb88(lVar15,uVar28,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar6 + -0xe0,uRam0000000003d32f50);
  }
  if (*(long *)(lVar9 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar4 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar9 + 0x28),lVar15,uRam0000000003d30020);
  if (iVar4 == 0) {
code_r0x014fe888:
    puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar9 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar9 + 0x28),lVar15,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*piVar20 - 1U < 2) {
        iVar4 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      iVar4 = 1;
code_r0x014fe860:
      *piVar20 = iVar4;
    }
    iVar4 = (int)extraout_x1_00;
    if (iVar4 == 3) {
      if ((*(long *)(lVar14 + 0xa0) == 0) ||
         (lVar25 = *(long *)(*(long *)(lVar14 + 0xa0) + 0x90), lVar25 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar1)();
      }
      iVar4 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar25,0);
      if (1 < iVar4) {
        iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (undefined1 *)(ulong)(iVar4 < 3);
      }
      uVar10 = 2;
    }
    else {
      uVar10 = extraout_x1_00;
      if (iVar4 != 2) {
        if (iVar4 == 0) {
          puVar5 = (undefined1 *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar14,0);
          return puVar5;
        }
        goto code_r0x014fe888;
      }
    }
    iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar10,0);
    puVar5 = (undefined1 *)(ulong)(iVar4 == 0);
  }
  return puVar5;
}



// ============================================================
// RVA: 0x15e693c | Atlas.Gameplay.Kart.KartVisualAnimation.OnHomingProjectileIncoming
// ============================================================

/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e69c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e6a04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015e69c4) */
/* WARNING: Removing unreachable block (ram,0x015e69cc) */
/* WARNING: Removing unreachable block (ram,0x015e69ec) */
/* WARNING: Removing unreachable block (ram,0x015e69dc) */
/* WARNING: Removing unreachable block (ram,0x01538780) */
/* WARNING: Removing unreachable block (ram,0x015387a8) */
/* WARNING: Removing unreachable block (ram,0x015387bc) */
/* WARNING: Removing unreachable block (ram,0x015387cc) */
/* WARNING: Removing unreachable block (ram,0x015387d4) */
/* WARNING: Removing unreachable block (ram,0x015387d8) */
/* WARNING: Removing unreachable block (ram,0x01538800) */
/* WARNING: Removing unreachable block (ram,0x015387dc) */
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
/* WARNING: Removing unreachable block (ram,0x015e6a08) */
/* WARNING: Removing unreachable block (ram,0x015e6a14) */
/* WARNING: Removing unreachable block (ram,0x015e6a3c) */
/* WARNING: Removing unreachable block (ram,0x015e6a28) */
/* WARNING: Removing unreachable block (ram,0x01538804) */
/* WARNING: Removing unreachable block (ram,0x01538830) */
/* WARNING: Removing unreachable block (ram,0x01538844) */
/* WARNING: Removing unreachable block (ram,0x01538854) */
/* WARNING: Removing unreachable block (ram,0x0153885c) */
/* WARNING: Removing unreachable block (ram,0x01538860) */
/* WARNING: Removing unreachable block (ram,0x0153888c) */
/* WARNING: Removing unreachable block (ram,0x015388b8) */
/* WARNING: Removing unreachable block (ram,0x015388cc) */
/* WARNING: Removing unreachable block (ram,0x015388dc) */
/* WARNING: Removing unreachable block (ram,0x015388e4) */
/* WARNING: Removing unreachable block (ram,0x015388e8) */
/* WARNING: Removing unreachable block (ram,0x01538910) */
/* WARNING: Removing unreachable block (ram,0x0153893c) */
/* WARNING: Removing unreachable block (ram,0x01538950) */
/* WARNING: Removing unreachable block (ram,0x0153895c) */
/* WARNING: Removing unreachable block (ram,0x01538964) */
/* WARNING: Removing unreachable block (ram,0x0153896c) */
/* WARNING: Removing unreachable block (ram,0x01538978) */
/* WARNING: Removing unreachable block (ram,0x01538994) */
/* WARNING: Removing unreachable block (ram,0x015389bc) */
/* WARNING: Removing unreachable block (ram,0x015389c0) */
/* WARNING: Removing unreachable block (ram,0x015389f4) */
/* WARNING: Removing unreachable block (ram,0x01538a08) */
/* WARNING: Removing unreachable block (ram,0x01538a18) */
/* WARNING: Removing unreachable block (ram,0x01538a20) */
/* WARNING: Removing unreachable block (ram,0x01538a24) */
/* WARNING: Removing unreachable block (ram,0x01538a4c) */
/* WARNING: Removing unreachable block (ram,0x01538a80) */
/* WARNING: Removing unreachable block (ram,0x01538a94) */
/* WARNING: Removing unreachable block (ram,0x01538aa4) */
/* WARNING: Removing unreachable block (ram,0x01538aac) */
/* WARNING: Removing unreachable block (ram,0x01538ab0) */
/* WARNING: Removing unreachable block (ram,0x01538ae0) */
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
/* WARNING: Removing unreachable block (ram,0x01538ab4) */
/* WARNING: Removing unreachable block (ram,0x0320d09c) */
/* WARNING: Removing unreachable block (ram,0x0320d0c8) */
/* WARNING: Removing unreachable block (ram,0x0320d0dc) */
/* WARNING: Removing unreachable block (ram,0x01538a28) */
/* WARNING: Removing unreachable block (ram,0x0153899c) */
/* WARNING: Removing unreachable block (ram,0x015388ec) */
/* WARNING: Removing unreachable block (ram,0x0320d82c) */
/* WARNING: Removing unreachable block (ram,0x0320d850) */
/* WARNING: Removing unreachable block (ram,0x0320d864) */
/* WARNING: Removing unreachable block (ram,0x01538864) */
/* WARNING: Removing unreachable block (ram,0x0320d6dc) */
/* WARNING: Removing unreachable block (ram,0x0320d704) */
/* WARNING: Removing unreachable block (ram,0x0320d718) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_KartVisualAnimation__OnHomingProjectileIncoming(ulong param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  uint extraout_w1;
  long extraout_x1;
  ulong extraout_x1_00;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined8 uVar14;
  float extraout_s0;
  float fVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  
  if (0.0 < *(float *)(param_1 + 0x78)) {
    return param_1;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
code_r0x015e69ac:
    func_0x00f78af4();
    if (extraout_w1 < 0xd) {
      return (ulong)*(uint *)(&UNK_033f8dc0 + (long)(int)extraout_w1 * 4);
    }
    return 3;
  }
  Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming(*(long *)(param_1 + 0x38),0);
  if (*(long *)(param_1 + 0x30) == 0) goto code_r0x015e69ac;
  Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIncoming(*(long *)(param_1 + 0x30),0);
  *(undefined4 *)(param_1 + 0x78) = 0x40800000;
  lVar8 = *(long *)(param_1 + 0x20);
  if ((lVar8 == 0) || (lVar7 = *(long *)(lVar8 + 0x90), lVar7 == 0)) goto code_r0x015e69ac;
  if ((bRam0000000003eb47e4 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28,lVar8,0);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47e4 = 1;
  }
  if (lVar8 != 0) {
    uVar3 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar8,0);
    lVar11 = 0x28;
    if ((int)uVar3 == 0) {
      lVar11 = 0x30;
    }
    lVar11 = *(long *)(lVar7 + lVar11);
    auVar19._8_8_ = lVar8;
    auVar19._0_8_ = lVar11;
    if (lVar11 == 0) {
      return uVar3;
    }
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = *(long *)(lVar7 + 0x48);
    if (lVar8 != 0) {
      uVar12 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
      uVar17 = *(undefined4 *)(lVar8 + 0x180);
      piVar13 = *(int **)(lVar8 + 0xb8);
      piVar4 = (int *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(piVar4,uRam0000000003d3bf00);
      uVar14 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
      uVar5 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
      /*Atlas.Audio.SpeechParam$$.ctor*/ func_0x014fe3e8(uVar5,uVar14,0x11,0);
      if (piVar4 != (int *)0x0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(piVar4,uVar5,uRam0000000003d3bf08);
        uVar5 = uVar12;
        piVar9 = piVar4;
        if ((bRam0000000003eb4cda & 1) == 0) {
          func_0x00f78a20(uVar17,0,0x3d3da38);
          bRam0000000003eb4cda = 1;
        }
        if (*(char *)(lVar11 + 0x34) == '\0') {
code_r0x014fe49c:
          piVar9 = (int *)&stack0xffffffffffffffac;
          uVar5 = uVar12;
          piVar13 = piVar4;
        }
        else {
          if (*(long *)(lVar11 + 0x10) != 0) {
            if (*(char *)(*(long *)(lVar11 + 0x10) + 0xcb) == '\0') {
              return 0;
            }
            goto code_r0x014fe49c;
          }
          auVar19 = func_0x00f78af4();
        }
        lVar7 = auVar19._8_8_;
        lVar8 = auVar19._0_8_;
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
        uStack_e0 = 0;
        uStack_d8 = 0;
        iStack_e4 = 0;
        if (*(long *)(lVar8 + 0x10) == 0) goto code_r0x014fe8f8;
        if (*(char *)(*(long *)(lVar8 + 0x10) + 0x90) != '\0') {
          return 0;
        }
        if (lVar7 == 0) goto code_r0x014fe8f8;
        uVar3 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar7,0);
        if ((uVar3 & 1) != 0) {
          return 0;
        }
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar5,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350),0);
        if (iVar2 != 0) {
          if (piVar13 == (int *)0x0) goto code_r0x014fe8f8;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_100,piVar13,uRam0000000003d3bf10);
          uStack_d8 = uStack_f8;
          uStack_e0 = uStack_100;
          while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e0,uRam0000000003d32f58), (uVar3 & 1) != 0) {
            if (lStack_f0 == 0) {
              func_0x00f78af4();
              goto code_r0x014fe900;
            }
            uVar12 = *(undefined8 *)(lStack_f0 + 0x10);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar12,*(undefined8 *)
                                            (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310),0);
            if ((uVar3 & 1) != 0) {
              fVar15 = *(float *)(lStack_f0 + 0x18);
              fVar18 = -fVar15;
              if (fVar15 != INFINITY) {
                fVar18 = fVar15;
              }
              iStack_e4 = (int)fVar18;
              plVar6 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,&iStack_e4);
              if (plVar6 == (long *)0x0) goto code_r0x014fe8fc;
              uVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
              piVar13 = (int *)func_0x00f78ae4(plVar6);
              iStack_e4 = *piVar13;
              uVar5 = /*System.String$$Concat*/ func_0x029bdb88(uVar5,uVar12,0);
            }
          }
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e0,uRam0000000003d32f50);
        }
        if (*(long *)(lVar8 + 0x28) == 0) goto code_r0x014fe8f8;
        iVar2 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar8 + 0x28),uVar5,uRam0000000003d30020);
        if (iVar2 == 0) {
code_r0x014fe888:
          uVar3 = 1;
        }
        else {
          if (*(long *)(lVar8 + 0x28) == 0) goto code_r0x014fe8f8;
          /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar8 + 0x28),uVar5,uRam0000000003d30028);
          if ((extraout_x1_00 & 0xff00000000) == 0) {
            if (*piVar9 - 1U < 2) {
              iVar2 = 4;
              goto code_r0x014fe860;
            }
          }
          else {
            iVar2 = 1;
code_r0x014fe860:
            *piVar9 = iVar2;
          }
          iVar2 = (int)extraout_x1_00;
          if (iVar2 == 3) {
            if ((*(long *)(lVar7 + 0xa0) == 0) ||
               (lVar8 = *(long *)(*(long *)(lVar7 + 0xa0) + 0x90), lVar8 == 0)) {
code_r0x014fe8f8:
              func_0x00f78af4();
code_r0x014fe8fc:
              func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x14fe904);
              (*pcVar1)();
            }
            iVar2 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar8,0);
            if (1 < iVar2) {
              iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
              return (ulong)(iVar2 < 3);
            }
            uVar3 = 2;
          }
          else {
            uVar3 = extraout_x1_00;
            if (iVar2 != 2) {
              if (iVar2 == 0) {
                uVar3 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar7,0);
                return uVar3;
              }
              goto code_r0x014fe888;
            }
          }
          iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar3,0);
          uVar3 = (ulong)(iVar2 == 0);
        }
        return uVar3;
      }
    }
  }
  lVar8 = func_0x00f78af4();
  if ((bRam0000000003eb47e5 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47e5 = 1;
  }
  if (extraout_x1 == 0) {
code_r0x0145c21c:
    fVar18 = (float)func_0x00f78af4();
    if ((bRam0000000003eb47e6 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d24568);
      bRam0000000003eb47e6 = 1;
    }
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_d8 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
    if (((*(byte *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar15 = _UNK_033f8148;
    if (fVar18 != 0.0) {
      fVar15 = fVar18;
    }
    fVar18 = INFINITY;
    if (fVar15 != -INFINITY) {
      fVar18 = ABS(SQRT(fVar15));
    }
    uVar3 = /*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar18,&uStack_d8,
                            *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x388),1,0);
    return uVar3;
  }
  iVar2 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
  if ((iVar2 != 0) && (uVar3 = /*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)uVar3 == 0)) {
    return uVar3;
  }
  if (*(long *)(lVar8 + 0x30) == 0) goto code_r0x0145c21c;
  uVar3 = /*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar8 + 0x30),0);
  if ((uVar3 & 1) != 0) {
    return uVar3;
  }
  if (*(int *)(lVar8 + 0x50) != 1) {
    return uVar3;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
  if (*(float *)(lVar7 + 0x30) <= extraout_s0) {
    return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
  }
  if (0.0 <= *(float *)(lVar8 + 0x88)) {
    return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
  }
  if (*(char *)(extraout_x1 + 0x38) == '\0') {
    return /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
  }
  fVar18 = *(float *)(lVar8 + 0x8c);
  uVar3 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    uVar3 = func_0x00f78ad0();
    lVar7 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8);
  }
  if (fVar18 <= *(float *)(lVar7 + 800)) {
    return uVar3;
  }
  iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
  if (iVar2 == 2) {
    lVar7 = *(long *)(lVar8 + 0x30);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar11 = *(long *)(lVar8 + 0x48);
    if ((lVar11 == 0) || (lVar7 == 0)) goto code_r0x0145c21c;
    uVar12 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x350);
    uVar5 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x310);
    uVar14 = *(undefined8 *)(lVar11 + 0xb8);
    uVar17 = *(undefined4 *)(lVar11 + 0x180);
    uVar16 = 0x3f800000;
    uVar10 = 6;
  }
  else if (iVar2 == 1) {
    lVar7 = *(long *)(lVar8 + 0x30);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) goto code_r0x0145c21c;
    uVar14 = *(undefined8 *)(extraout_x1 + 0xb8);
    uVar17 = *(undefined4 *)(extraout_x1 + 0x180);
    uVar12 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
    uVar16 = 0;
    uVar10 = 1;
    uVar5 = uVar12;
  }
  else {
    if (iVar2 != 0) goto code_r0x0145c1e0;
    lVar7 = *(long *)(lVar8 + 0x30);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) goto code_r0x0145c21c;
    uVar14 = *(undefined8 *)(extraout_x1 + 0xb8);
    uVar17 = *(undefined4 *)(extraout_x1 + 0x180);
    uVar12 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x378);
    uVar16 = 0;
    uVar10 = 0;
    uVar5 = uVar12;
  }
  /*Atlas.Audio.SpeechManager$$TryPlay*/ func_0x014fe2a8(uVar17,uVar16,lVar7,extraout_x1,uVar12,uVar14,uVar5,uVar10,4,0);
code_r0x0145c1e0:
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28;
  *(undefined4 *)(lVar8 + 0x88) = *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ uRam0000000003d1ff28 + 0xb8) + 0x34);
  return uVar3;
}



// ============================================================
// RVA: 0x15e69b0 | Atlas.Gameplay.Kart.KartVisualAnimation.FinishResultsUpdated
// ============================================================

/* WARNING: Possible PIC construction at 0x015e69c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015e6a04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015e69c4) */
/* WARNING: Removing unreachable block (ram,0x015e69cc) */
/* WARNING: Removing unreachable block (ram,0x015e69ec) */
/* WARNING: Removing unreachable block (ram,0x015e69dc) */
/* WARNING: Removing unreachable block (ram,0x01538780) */
/* WARNING: Removing unreachable block (ram,0x015387a8) */
/* WARNING: Removing unreachable block (ram,0x015387bc) */
/* WARNING: Removing unreachable block (ram,0x015387cc) */
/* WARNING: Removing unreachable block (ram,0x015387d4) */
/* WARNING: Removing unreachable block (ram,0x015387d8) */
/* WARNING: Removing unreachable block (ram,0x01538800) */
/* WARNING: Removing unreachable block (ram,0x015387dc) */
/* WARNING: Removing unreachable block (ram,0x015e6a08) */
/* WARNING: Removing unreachable block (ram,0x015e6a14) */
/* WARNING: Removing unreachable block (ram,0x015e6a3c) */
/* WARNING: Removing unreachable block (ram,0x015e6a28) */
/* WARNING: Removing unreachable block (ram,0x01538804) */
/* WARNING: Removing unreachable block (ram,0x01538830) */
/* WARNING: Removing unreachable block (ram,0x01538844) */
/* WARNING: Removing unreachable block (ram,0x01538854) */
/* WARNING: Removing unreachable block (ram,0x0153885c) */
/* WARNING: Removing unreachable block (ram,0x01538860) */
/* WARNING: Removing unreachable block (ram,0x0153888c) */
/* WARNING: Removing unreachable block (ram,0x015388b8) */
/* WARNING: Removing unreachable block (ram,0x015388cc) */
/* WARNING: Removing unreachable block (ram,0x015388dc) */
/* WARNING: Removing unreachable block (ram,0x015388e4) */
/* WARNING: Removing unreachable block (ram,0x015388e8) */
/* WARNING: Removing unreachable block (ram,0x01538910) */
/* WARNING: Removing unreachable block (ram,0x0153893c) */
/* WARNING: Removing unreachable block (ram,0x01538950) */
/* WARNING: Removing unreachable block (ram,0x0153895c) */
/* WARNING: Removing unreachable block (ram,0x01538964) */
/* WARNING: Removing unreachable block (ram,0x0153896c) */
/* WARNING: Removing unreachable block (ram,0x01538978) */
/* WARNING: Removing unreachable block (ram,0x01538994) */
/* WARNING: Removing unreachable block (ram,0x015389bc) */
/* WARNING: Removing unreachable block (ram,0x015389c0) */
/* WARNING: Removing unreachable block (ram,0x015389f4) */
/* WARNING: Removing unreachable block (ram,0x01538a08) */
/* WARNING: Removing unreachable block (ram,0x01538a18) */
/* WARNING: Removing unreachable block (ram,0x01538a20) */
/* WARNING: Removing unreachable block (ram,0x01538a24) */
/* WARNING: Removing unreachable block (ram,0x01538a4c) */
/* WARNING: Removing unreachable block (ram,0x01538a80) */
/* WARNING: Removing unreachable block (ram,0x01538a94) */
/* WARNING: Removing unreachable block (ram,0x01538aa4) */
/* WARNING: Removing unreachable block (ram,0x01538aac) */
/* WARNING: Removing unreachable block (ram,0x01538ab0) */
/* WARNING: Removing unreachable block (ram,0x01538ae0) */
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
/* WARNING: Removing unreachable block (ram,0x01538ab4) */
/* WARNING: Removing unreachable block (ram,0x0320d09c) */
/* WARNING: Removing unreachable block (ram,0x0320d0c8) */
/* WARNING: Removing unreachable block (ram,0x0320d0dc) */
/* WARNING: Removing unreachable block (ram,0x01538a28) */
/* WARNING: Removing unreachable block (ram,0x0153899c) */
/* WARNING: Removing unreachable block (ram,0x015388ec) */
/* WARNING: Removing unreachable block (ram,0x0320d82c) */
/* WARNING: Removing unreachable block (ram,0x0320d850) */
/* WARNING: Removing unreachable block (ram,0x0320d864) */
/* WARNING: Removing unreachable block (ram,0x01538864) */
/* WARNING: Removing unreachable block (ram,0x0320d6dc) */
/* WARNING: Removing unreachable block (ram,0x0320d704) */
/* WARNING: Removing unreachable block (ram,0x0320d718) */

undefined4
Atlas_Gameplay_Kart_KartVisualAnimation__FinishResultsUpdated(undefined8 param_1,uint param_2)

{
  if (param_2 < 0xd) {
    return *(undefined4 *)(&UNK_033f8dc0 + (long)(int)param_2 * 4);
  }
  return 3;
}



// ============================================================
// RVA: 0x15e69f0 | Atlas.Gameplay.Kart.KartVisualAnimation.SetFinishLineIndexParam
// ============================================================

/* WARNING: Possible PIC construction at 0x015e6a04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015e6a08) */
/* WARNING: Removing unreachable block (ram,0x015e6a14) */
/* WARNING: Removing unreachable block (ram,0x015e6a3c) */
/* WARNING: Removing unreachable block (ram,0x015e6a28) */
/* WARNING: Removing unreachable block (ram,0x01538804) */
/* WARNING: Removing unreachable block (ram,0x01538830) */
/* WARNING: Removing unreachable block (ram,0x01538844) */
/* WARNING: Removing unreachable block (ram,0x01538854) */
/* WARNING: Removing unreachable block (ram,0x0153885c) */
/* WARNING: Removing unreachable block (ram,0x01538860) */
/* WARNING: Removing unreachable block (ram,0x0153888c) */
/* WARNING: Removing unreachable block (ram,0x015388b8) */
/* WARNING: Removing unreachable block (ram,0x015388cc) */
/* WARNING: Removing unreachable block (ram,0x015388dc) */
/* WARNING: Removing unreachable block (ram,0x015388e4) */
/* WARNING: Removing unreachable block (ram,0x015388e8) */
/* WARNING: Removing unreachable block (ram,0x01538910) */
/* WARNING: Removing unreachable block (ram,0x0153893c) */
/* WARNING: Removing unreachable block (ram,0x01538950) */
/* WARNING: Removing unreachable block (ram,0x0153895c) */
/* WARNING: Removing unreachable block (ram,0x01538964) */
/* WARNING: Removing unreachable block (ram,0x0153896c) */
/* WARNING: Removing unreachable block (ram,0x01538978) */
/* WARNING: Removing unreachable block (ram,0x01538994) */
/* WARNING: Removing unreachable block (ram,0x015389bc) */
/* WARNING: Removing unreachable block (ram,0x015389c0) */
/* WARNING: Removing unreachable block (ram,0x015389f4) */
/* WARNING: Removing unreachable block (ram,0x01538a08) */
/* WARNING: Removing unreachable block (ram,0x01538a18) */
/* WARNING: Removing unreachable block (ram,0x01538a20) */
/* WARNING: Removing unreachable block (ram,0x01538a24) */
/* WARNING: Removing unreachable block (ram,0x01538a4c) */
/* WARNING: Removing unreachable block (ram,0x01538a80) */
/* WARNING: Removing unreachable block (ram,0x01538a94) */
/* WARNING: Removing unreachable block (ram,0x01538aa4) */
/* WARNING: Removing unreachable block (ram,0x01538aac) */
/* WARNING: Removing unreachable block (ram,0x01538ab0) */
/* WARNING: Removing unreachable block (ram,0x01538ae0) */
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
/* WARNING: Removing unreachable block (ram,0x01538ab4) */
/* WARNING: Removing unreachable block (ram,0x0320d09c) */
/* WARNING: Removing unreachable block (ram,0x0320d0c8) */
/* WARNING: Removing unreachable block (ram,0x0320d0dc) */
/* WARNING: Removing unreachable block (ram,0x01538a28) */
/* WARNING: Removing unreachable block (ram,0x0153899c) */
/* WARNING: Removing unreachable block (ram,0x015388ec) */
/* WARNING: Removing unreachable block (ram,0x0320d82c) */
/* WARNING: Removing unreachable block (ram,0x0320d850) */
/* WARNING: Removing unreachable block (ram,0x0320d864) */
/* WARNING: Removing unreachable block (ram,0x01538864) */
/* WARNING: Removing unreachable block (ram,0x0320d6dc) */
/* WARNING: Removing unreachable block (ram,0x0320d704) */
/* WARNING: Removing unreachable block (ram,0x0320d718) */

undefined4
Atlas_Gameplay_Kart_KartVisualAnimation__SetFinishLineIndexParam(undefined8 param_1,uint param_2)

{
  if (param_2 < 0xd) {
    return *(undefined4 *)(&UNK_033f8dc0 + (long)(int)param_2 * 4);
  }
  return 3;
}



// ============================================================
// RVA: 0x15e6a40 | Atlas.Gameplay.Kart.KartVisualAnimation.GetFinishLineIndexParamIdFromFinishingPosition
// ============================================================

undefined4
Atlas_Gameplay_Kart_KartVisualAnimation__GetFinishLineIndexParamIdFromFinishingPosition
          (uint param_1)

{
  if (param_1 < 0xd) {
    return *(undefined4 *)(&UNK_033f8dc0 + (long)(int)param_1 * 4);
  }
  return 3;
}



// ============================================================
// RVA: 0x15e6a60 | Atlas.Gameplay.Kart.KartVisualAnimation.TriggerRandomStartLineAnimation
// ============================================================

void Atlas_Gameplay_Kart_KartVisualAnimation__TriggerRandomStartLineAnimation
               (undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x88) = param_1;
  return;
}



// ============================================================
// RVA: 0x15e6a68 | Atlas.Gameplay.Kart.KartVisualAnimation.TriggerAutoDriveReaction
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e6aa4 | Atlas.Gameplay.Kart.KartVisualAnimation.PlaySideSneer
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e6b28 | Atlas.Gameplay.Kart.KartVisualAnimation.PlayOvertaken
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e6b84 | Atlas.Gameplay.Kart.KartVisualAnimation.PlayOvertaking
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e6be0 | Atlas.Gameplay.Kart.KartVisualAnimation.PlayItemThrowForward
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e6cd8 | Atlas.Gameplay.Kart.KartVisualAnimation.PlayItemThrowBackward
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e6dd0 | Atlas.Gameplay.Kart.KartVisualAnimation.PlayItemActivate
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e6ec4 | Atlas.Gameplay.Kart.KartVisualAnimation.PlayItemPropane
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15e6fac | Atlas.Gameplay.Kart.KartVisualAnimation.PlayItemTimeCheater
// ============================================================

/* WARNING: Possible PIC construction at 0x0153874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01538750) */
/* WARNING: Removing unreachable block (ram,0x01538758) */
/* WARNING: Removing unreachable block (ram,0x0320d43c) */
/* WARNING: Removing unreachable block (ram,0x0320d464) */
/* WARNING: Removing unreachable block (ram,0x0320d478) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *******
Atlas_Gameplay_Kart_KartVisualAnimation__PlayItemTimeCheater
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
          undefined8 param_5,undefined8 param_6,undefined8 ******param_7)

{
  undefined8 ******ppppppuVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *******pppppppuVar5;
  long lVar6;
  undefined8 *******pppppppuVar7;
  undefined8 extraout_x1;
  undefined8 *******pppppppuVar8;
  code *pcVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 ******ppppppuVar12;
  undefined *puVar13;
  undefined8 *******unaff_x22;
  undefined8 uVar14;
  code *pcVar15;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar16;
  float extraout_s0_01;
  float fVar17;
  undefined4 uVar18;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  undefined8 ******ppppppuStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  long lStack_108;
  undefined8 *******pppppppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *******pppppppuStack_d0;
  code *pcStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined *puStack_b8;
  undefined8 *******pppppppuStack_a0;
  code *pcStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 uStack_88;
  undefined8 *******pppppppuStack_80;
  code *pcStack_78;
  undefined8 *******pppppppuStack_40;
  code *pcStack_38;
  
  pppppppuVar7 = (undefined8 *******)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb53d3 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53d3 = 1;
  }
  uVar11 = *(undefined8 *)(param_4 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pppppppuVar8 = (undefined8 *******)0x0;
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
  if (iVar3 == 0) {
LAB_015e7028:
    uVar11 = *(undefined8 *)(param_4 + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    pppppppuVar8 = (undefined8 *******)0x0;
    pppppppuVar5 = (undefined8 *******)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0);
    if ((int)pppppppuVar5 == 0) {
      return pppppppuVar5;
    }
    lVar6 = *(long *)(param_4 + 0x38);
    if (lVar6 != 0) {
      if ((bRam0000000003eb4eee & 1) == 0) {
        func_0x00f78a20(0x3d20028,0);
        bRam0000000003eb4eee = 1;
      }
      pcVar10 = *(code **)(lVar6 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (pcVar10 != (code *)0x0) {
        uVar18 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x3c);
        pppppppuVar7 = (undefined8 *******)&stack0xffffffffffffffd0;
        pcVar9 = pcVar10;
        puVar13 = (undefined *)0x3d20028;
        pppppppuVar8 = (undefined8 *******)&stack0xfffffffffffffff0;
        pcVar15 = (code *)0x1538750;
        goto code_r0x0320d82c;
      }
      lVar4 = func_0x00f78af4();
      pcStack_38 = Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerFinishLineReaction;
      pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
      if ((bRam0000000003eb4eef & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4eef = 1;
      }
      pcVar9 = *(code **)(lVar4 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (pcVar9 != (code *)0x0) {
        uVar18 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x74);
        puVar13 = (undefined *)0x3d20028;
        pppppppuVar8 = pppppppuStack_40;
        pcVar15 = pcStack_38;
        goto code_r0x0320d82c;
      }
      auVar19 = func_0x00f78af4();
      uStack_88 = 0x3eb4000;
      pppppppuStack_80 = (undefined8 *******)0x3d20028;
      ppppppuStack_90 = unaff_x22;
      pcStack_78 = pcVar9;
      if ((bRam0000000003eb4ef0 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ef0 = 1;
      }
      lVar6 = *(long *)(auVar19._0_8_ + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar6 != 0) {
        uVar18 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x70);
        if (pcRam0000000003ebe440 == (code *)0x0) {
          pcRam0000000003ebe440 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x0320d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pppppppuVar7 = (undefined8 *******)(*pcRam0000000003ebe440)(lVar6,uVar18,auVar19._8_8_);
        return pppppppuVar7;
      }
      lVar6 = func_0x00f78af4();
      pppppppuStack_c0 = (undefined8 *******)0x3eb4000;
      puStack_b8 = (undefined *)0x3d20028;
      pcStack_98 = Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerAutoDriveReaction;
      pppppppuStack_a0 = (undefined8 *******)&stack0xffffffffffffff90;
      if ((bRam0000000003eb4ef1 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ef1 = 1;
      }
      pcVar9 = *(code **)(lVar6 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (pcVar9 != (code *)0x0) {
        uVar18 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x78);
        pppppppuVar7 = &ppppppuStack_90;
        lVar6 = auVar19._8_8_;
        pcVar10 = (code *)0x0;
        puVar13 = puStack_b8;
        unaff_x22 = pppppppuStack_c0;
        pppppppuVar8 = pppppppuStack_a0;
        pcVar15 = pcStack_98;
        goto code_r0x0320d82c;
      }
      lVar6 = func_0x00f78af4();
      uStack_f0 = (undefined8 ******)0x3eb4000;
      uStack_e8 = 0x3eb4000;
      pcStack_c8 = Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerStartLineRandomAnimation;
      pppppppuStack_d0 = &pppppppuStack_a0;
      if ((bRam0000000003eb4ef2 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ef2 = 1;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pcVar10 = *(code **)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x88);
      if (pcVar10 == (code *)0x0) {
LAB_015389bc:
        func_0x00f78af4();
      }
      else {
        uVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,*(undefined4 *)(pcVar10 + 0x18),0);
        if (uVar2 < *(uint *)(pcVar10 + 0x18)) {
          pcVar9 = *(code **)(lVar6 + 0x18);
          if (pcVar9 != (code *)0x0) {
            uVar18 = *(undefined4 *)(pcVar10 + (long)(int)uVar2 * 4 + 0x20);
            pppppppuVar7 = &pppppppuStack_c0;
            lVar6 = 0;
            pcVar10 = (code *)0x3d20028;
            puVar13 = (undefined *)uStack_e8;
            unaff_x22 = (undefined8 *******)uStack_f0;
            pppppppuVar8 = pppppppuStack_d0;
            pcVar15 = pcStack_c8;
            goto code_r0x0320d82c;
          }
          goto LAB_015389bc;
        }
      }
      uVar11 = func_0x00f78b24();
      lVar4 = func_0x00f78ac0(uVar11,0);
      ppppppuVar1 = &ppppppuStack_120;
      ppppppuStack_120 = (undefined8 ******)0x3eb4000;
      uStack_118 = 0x3eb4000;
      pcStack_f8 = Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerIdleBreaker;
      pcStack_110 = pcVar10;
      lStack_108 = lVar6;
      pppppppuStack_100 = &pppppppuStack_d0;
      if ((bRam0000000003eb4ef3 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb4ef3 = 1;
      }
      pcVar9 = *(code **)(lVar4 + 0x18);
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (pcVar9 != (code *)0x0) {
        uVar18 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x7c);
        pppppppuVar7 = (undefined8 *******)&uStack_f0;
        lVar6 = lStack_108;
        pcVar10 = pcStack_110;
        puVar13 = (undefined *)uStack_118;
        unaff_x22 = (undefined8 *******)ppppppuStack_120;
        pppppppuVar8 = pppppppuStack_100;
        pcVar15 = pcStack_f8;
code_r0x0320d82c:
        *(undefined8 ********)((long)pppppppuVar7 + -0x30) = unaff_x22;
        *(undefined **)((long)pppppppuVar7 + -0x28) = puVar13;
        *(code **)((long)pppppppuVar7 + -0x20) = pcVar10;
        *(long *)((long)pppppppuVar7 + -0x18) = lVar6;
        *(undefined8 ********)((long)pppppppuVar7 + -0x10) = pppppppuVar8;
        *(code **)((long)pppppppuVar7 + -8) = pcVar15;
        if (pcRam0000000003ebe460 == (code *)0x0) {
          pcRam0000000003ebe460 =
               (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
        }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pppppppuVar7 = (undefined8 *******)(*pcRam0000000003ebe460)(pcVar9,uVar18);
        return pppppppuVar7;
      }
      lVar6 = func_0x00f78af4();
      uVar11 = extraout_x1;
      uVar14 = 0;
      ppppppuVar12 = (undefined8 ******)0x3d20028;
      pcVar10 = (code *)0x3eb4000;
      pppppppuVar7 = (undefined8 *******)0x3eb4000;
      pppppppuVar8 = &pppppppuStack_100;
      pcVar9 = Atlas_Gameplay_Kart_BaseVisualBehaviour__SetBoostIntensity;
      uVar18 = extraout_s0;
      goto code_r0x01538a50;
    }
  }
  else if (*(long *)(param_4 + 0x30) != 0) {
    Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayItemTimeCheater(*(long *)(param_4 + 0x30),0);
    goto LAB_015e7028;
  }
  auVar19 = func_0x00f78af4();
  uVar11 = auVar19._8_8_;
  lVar6 = auVar19._0_8_;
  pcStack_38 = (code *)&Atlas_Gameplay_Kart_KartVisualAnimation__TryPlayAnimatorStateOverride;
  pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb53d8 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53d8 = 1;
  }
  if (*(long *)(lVar6 + 0x28) != 0) {
    uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0x28) + 0x108);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar14,0);
    if (iVar3 == 0) {
      pppppppuVar8 = (undefined8 *******)(ulong)((uint)pppppppuVar8 ^ 1);
    }
    else {
      if ((*(long *)(lVar6 + 0x28) == 0) ||
         (lVar4 = *(long *)(*(long *)(lVar6 + 0x28) + 0x108), lVar4 == 0)) goto code_r0x015e71ac;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride(0,lVar4,uVar11,0);
      pppppppuVar8 = (undefined8 *******)((long)&MACH_HEADER.magic + 1);
    }
    if (*(long *)(lVar6 + 0x28) != 0) {
      uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0x28) + 0x110);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar14,0);
      if (iVar3 == 0) {
        return (undefined8 *******)(ulong)((uint)pppppppuVar8 & ((uint)param_7 ^ 1));
      }
      if ((*(long *)(lVar6 + 0x28) != 0) &&
         (lVar4 = *(long *)(*(long *)(lVar6 + 0x28) + 0x110), lVar4 != 0)) {
        Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride(0,lVar4,uVar11,0);
        return pppppppuVar8;
      }
    }
  }
code_r0x015e71ac:
  lVar4 = func_0x00f78af4();
  pcStack_78 = (code *)&Atlas_Gameplay_Kart_KartVisualAnimation__SetBoostIntensityParameter;
  pppppppuStack_a0 = pppppppuVar8;
  ppppppuStack_90 = param_7;
  pppppppuStack_80 = &pppppppuStack_40;
  if ((bRam0000000003eb53d9 & 1) == 0) {
    pcStack_98 = (code *)lVar6;
    uStack_88 = uVar11;
    func_0x00f78a20(0x3d23990);
    auVar19._8_8_ = uStack_88;
    auVar19._0_8_ = pcStack_98;
    bRam0000000003eb53d9 = 1;
  }
  uStack_88 = auVar19._8_8_;
  pcStack_98 = auVar19._0_8_;
  ppppppuVar12 = *(undefined8 *******)(lVar4 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar19._8_8_ = uStack_88;
    auVar19._0_8_ = pcStack_98;
  }
  uStack_88 = auVar19._8_8_;
  pcStack_98 = auVar19._0_8_;
  iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(ppppppuVar12,0);
  if (iVar3 != 0) {
    if (*(long *)(lVar4 + 0x30) == 0) goto code_r0x015e7298;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetBoostIntensity
              (extraout_s0_00,*(long *)(lVar4 + 0x30),0);
  }
  ppppppuVar12 = *(undefined8 *******)(lVar4 + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pppppppuVar7 = (undefined8 *******)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(ppppppuVar12,0);
  if ((int)pppppppuVar7 == 0) {
    return pppppppuVar7;
  }
  lVar6 = *(long *)(lVar4 + 0x38);
  if (lVar6 != 0) {
    uVar11 = 0;
    ppppppuVar1 = (undefined8 ******)&stack0xffffffffffffff90;
    uVar14 = uStack_88;
    ppppppuVar12 = ppppppuStack_90;
    pcVar10 = pcStack_98;
    pppppppuVar7 = pppppppuStack_a0;
    pppppppuVar8 = pppppppuStack_80;
    pcVar9 = pcStack_78;
    uVar18 = extraout_s0_00;
code_r0x01538a50:
    *(undefined8 *)((long)ppppppuVar1 + -0x40) = unaff_d9;
    *(undefined8 *)((long)ppppppuVar1 + -0x38) = unaff_d8;
    *(undefined8 ********)((long)ppppppuVar1 + -0x30) = pppppppuVar7;
    *(code **)((long)ppppppuVar1 + -0x28) = pcVar10;
    *(undefined8 *******)((long)ppppppuVar1 + -0x20) = ppppppuVar12;
    *(undefined8 *)((long)ppppppuVar1 + -0x18) = uVar14;
    *(undefined8 ********)((long)ppppppuVar1 + -0x10) = pppppppuVar8;
    *(code **)((long)ppppppuVar1 + -8) = pcVar9;
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028,uVar11);
      bRam0000000003eb4ef4 = 1;
    }
    lVar6 = *(long *)(lVar6 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 == 0) {
      pppppppuVar8 = (undefined8 *******)func_0x00f78af4();
      *(undefined8 ********)((long)ppppppuVar1 + -0x70) = pppppppuVar7;
      *(undefined8 *)((long)ppppppuVar1 + -0x68) = 0x3eb4000;
      *(undefined8 *)((long)ppppppuVar1 + -0x60) = 0x3d20028;
      *(undefined8 *)((long)ppppppuVar1 + -0x58) = 0;
      *(undefined1 **)((long)ppppppuVar1 + -0x50) = (undefined1 *)((long)ppppppuVar1 + -0x10);
      *(code **)((long)ppppppuVar1 + -0x48) = Atlas_Gameplay_Kart_BaseVisualBehaviour___ctor;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return pppppppuVar8;
    }
    uVar16 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
    *(undefined8 *)((long)ppppppuVar1 + -0x40) = *(undefined8 *)((long)ppppppuVar1 + -0x40);
    *(undefined8 *)((long)ppppppuVar1 + -0x38) = *(undefined8 *)((long)ppppppuVar1 + -0x38);
    *(undefined8 *)((long)ppppppuVar1 + -0x30) = *(undefined8 *)((long)ppppppuVar1 + -0x30);
    *(undefined8 *)((long)ppppppuVar1 + -0x28) = *(undefined8 *)((long)ppppppuVar1 + -0x28);
    *(undefined8 *)((long)ppppppuVar1 + -0x20) = *(undefined8 *)((long)ppppppuVar1 + -0x20);
    *(undefined8 *)((long)ppppppuVar1 + -0x18) = *(undefined8 *)((long)ppppppuVar1 + -0x18);
    *(undefined8 *)((long)ppppppuVar1 + -0x10) = *(undefined8 *)((long)ppppppuVar1 + -0x10);
    *(undefined8 *)((long)ppppppuVar1 + -8) = *(undefined8 *)((long)ppppppuVar1 + -8);
    if (pcRam0000000003ebe400 == (code *)0x0) {
      pcRam0000000003ebe400 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar7 = (undefined8 *******)(*pcRam0000000003ebe400)(uVar18,lVar6,uVar16);
    return pppppppuVar7;
  }
code_r0x015e7298:
  auVar19 = func_0x00f78af4();
  lVar6 = auVar19._8_8_;
  pppppppuVar7 = auVar19._0_8_;
  puStack_b8 = &Atlas_Gameplay_Kart_KartVisualAnimation__OnCollisionEnter;
  uVar18 = 0x3f400000;
  if ((0.75 <= *(float *)((long)pppppppuVar7 + 0x74)) && (*(int *)(lVar6 + 0x20) != 0)) {
    pppppppuStack_d0 = (undefined8 *******)ppppppuVar12;
    pcStack_c8 = (code *)lVar4;
    pppppppuStack_c0 = &pppppppuStack_80;
    if (*(long *)(lVar6 + 8) != 0) {
      uVar16 = /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(*(long *)(lVar6 + 8),0);
      uStack_f0 = (undefined8 ******)CONCAT44(uVar18,uVar16);
      uStack_e8 = CONCAT44(uStack_e8._4_4_,param_3);
      pppppppuVar8 = (undefined8 *******)/*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&uStack_f0,0);
      if (extraout_s0_01 < 15.0) {
        return pppppppuVar8;
      }
      fVar17 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((extraout_s0_01 + -15.0) / 10.0,0);
      uVar2 = *(int *)(lVar6 + 0x20) - 2;
      uVar18 = 0;
      if (uVar2 < 3) {
        uVar18 = *(undefined4 *)(&UNK_033f8df4 + (long)(int)uVar2 * 4);
      }
      if (pppppppuVar7[6] != (undefined8 ******)0x0) {
        fVar17 = fVar17 * _UNK_033f83c8 + _UNK_033f83fc;
        Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact(uVar18,fVar17,pppppppuVar7[6],0);
        if (pppppppuVar7[7] != (undefined8 ******)0x0) {
          pppppppuVar8 = (undefined8 *******)
                         Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact
                                   (uVar18,fVar17,pppppppuVar7[7],0);
          *(undefined4 *)((long)pppppppuVar7 + 0x74) = 0;
          return pppppppuVar8;
        }
      }
    }
    pppppppuVar7 = (undefined8 *******)func_0x00f78af4();
    return pppppppuVar7;
  }
  return pppppppuVar7;
}



// ============================================================
// RVA: 0x15e7088 | Atlas.Gameplay.Kart.KartVisualAnimation.TryPlayAnimatorStateOverride
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_KartVisualAnimation__TryPlayAnimatorStateOverride
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
                undefined8 param_5,uint param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float fVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  
  if ((bRam0000000003eb53d8 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53d8 = 1;
  }
  if (*(long *)(param_4 + 0x28) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x108);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
    if (iVar2 == 0) {
      uVar5 = (ulong)(param_6 ^ 1);
    }
    else {
      if ((*(long *)(param_4 + 0x28) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_4 + 0x28) + 0x108), lVar3 == 0)) goto LAB_015e71ac;
      Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride(0,lVar3,param_5,0);
      uVar5 = 1;
    }
    if (*(long *)(param_4 + 0x28) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x110);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
      if (iVar2 == 0) {
        return (ulong)((uint)uVar5 & (param_7 ^ 1));
      }
      if ((*(long *)(param_4 + 0x28) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_4 + 0x28) + 0x110), lVar3 != 0)) {
        Atlas_Gameplay_Kart_BaseVisualBehaviour__PlayAnimatorStateOverride(0,lVar3,param_5,0);
        return uVar5;
      }
    }
  }
LAB_015e71ac:
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb53d9 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53d9 = 1;
  }
  uVar6 = *(undefined8 *)(lVar3 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
  if (iVar2 != 0) {
    if (*(long *)(lVar3 + 0x30) == 0) goto code_r0x015e7298;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetBoostIntensity
              (extraout_s0,*(long *)(lVar3 + 0x30),0);
  }
  uVar6 = *(undefined8 *)(lVar3 + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  lVar3 = *(long *)(lVar3 + 0x38);
  if (lVar3 != 0) {
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028,0);
      bRam0000000003eb4ef4 = 1;
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar3 == 0) {
      uVar5 = func_0x00f78af4();
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar5;
    }
    uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
    if (pcRam0000000003ebe400 == (code *)0x0) {
      pcRam0000000003ebe400 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*pcRam0000000003ebe400)(extraout_s0,lVar3,uVar8);
    return uVar5;
  }
code_r0x015e7298:
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  uVar5 = auVar9._0_8_;
  uVar8 = 0x3f400000;
  if ((0.75 <= *(float *)(uVar5 + 0x74)) && (*(int *)(lVar3 + 0x20) != 0)) {
    if (*(long *)(lVar3 + 8) != 0) {
      uStack_c0 = /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(*(long *)(lVar3 + 8),0);
      uStack_bc = uVar8;
      uStack_b8 = param_3;
      uVar4 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&uStack_c0,0);
      if (extraout_s0_00 < 15.0) {
        return uVar4;
      }
      fVar7 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((extraout_s0_00 + -15.0) / 10.0,0);
      uVar1 = *(int *)(lVar3 + 0x20) - 2;
      uVar8 = 0;
      if (uVar1 < 3) {
        uVar8 = *(undefined4 *)(&UNK_033f8df4 + (long)(int)uVar1 * 4);
      }
      if (*(long *)(uVar5 + 0x30) != 0) {
        fVar7 = fVar7 * _UNK_033f83c8 + _UNK_033f83fc;
        Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact
                  (uVar8,fVar7,*(long *)(uVar5 + 0x30),0);
        if (*(long *)(uVar5 + 0x38) != 0) {
          uVar4 = Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact
                            (uVar8,fVar7,*(long *)(uVar5 + 0x38),0);
          *(undefined4 *)(uVar5 + 0x74) = 0;
          return uVar4;
        }
      }
    }
    uVar5 = func_0x00f78af4();
    return uVar5;
  }
  return uVar5;
}



// ============================================================
// RVA: 0x15e71b0 | Atlas.Gameplay.Kart.KartVisualAnimation.SetBoostIntensityParameter
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_Kart_KartVisualAnimation__SetBoostIntensityParameter
               (undefined4 param_1,undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float extraout_s0;
  float fVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  if ((bRam0000000003eb53d9 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb53d9 = 1;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
  if (iVar2 != 0) {
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_015e7298;
    Atlas_Gameplay_Kart_BaseVisualBehaviour__SetBoostIntensity(param_1,*(long *)(param_4 + 0x30),0);
  }
  uVar6 = *(undefined8 *)(param_4 + 0x38);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
  if ((int)lVar3 == 0) {
    return lVar3;
  }
  lVar3 = *(long *)(param_4 + 0x38);
  if (lVar3 != 0) {
    if ((bRam0000000003eb4ef4 & 1) == 0) {
      func_0x00f78a20(0x3d20028,0);
      bRam0000000003eb4ef4 = 1;
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar3 == 0) {
      lVar3 = func_0x00f78af4();
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return lVar3;
    }
    uVar8 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xb8) + 0x84);
    if (pcRam0000000003ebe400 == (code *)0x0) {
      pcRam0000000003ebe400 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ebe400)(param_1,lVar3,uVar8);
    return lVar3;
  }
LAB_015e7298:
  auVar9 = func_0x00f78af4();
  lVar5 = auVar9._8_8_;
  lVar3 = auVar9._0_8_;
  uVar8 = 0x3f400000;
  if ((0.75 <= *(float *)(lVar3 + 0x74)) && (*(int *)(lVar5 + 0x20) != 0)) {
    if (*(long *)(lVar5 + 8) != 0) {
      uStack_80 = /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(*(long *)(lVar5 + 8),0);
      uStack_7c = uVar8;
      uStack_78 = param_3;
      lVar4 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&uStack_80,0);
      if (extraout_s0 < 15.0) {
        return lVar4;
      }
      fVar7 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((extraout_s0 + -15.0) / 10.0,0);
      uVar1 = *(int *)(lVar5 + 0x20) - 2;
      uVar8 = 0;
      if (uVar1 < 3) {
        uVar8 = *(undefined4 *)(&UNK_033f8df4 + (long)(int)uVar1 * 4);
      }
      if (*(long *)(lVar3 + 0x30) != 0) {
        fVar7 = fVar7 * _UNK_033f83c8 + _UNK_033f83fc;
        Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact
                  (uVar8,fVar7,*(long *)(lVar3 + 0x30),0);
        if (*(long *)(lVar3 + 0x38) != 0) {
          lVar5 = Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact
                            (uVar8,fVar7,*(long *)(lVar3 + 0x38),0);
          *(undefined4 *)(lVar3 + 0x74) = 0;
          return lVar5;
        }
      }
    }
    lVar3 = func_0x00f78af4();
    return lVar3;
  }
  return lVar3;
}



// ============================================================
// RVA: 0x15e729c | Atlas.Gameplay.Kart.KartVisualAnimation.OnCollisionEnter
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartVisualAnimation__OnCollisionEnter
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               long param_5)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uVar3 = 0x3f400000;
  if ((0.75 <= *(float *)(param_4 + 0x74)) && (*(int *)(param_5 + 0x20) != 0)) {
    if (*(long *)(param_5 + 8) != 0) {
      uStack_40 = /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(*(long *)(param_5 + 8),0);
      uStack_3c = uVar3;
      uStack_38 = param_3;
      fVar2 = (float)/*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(&uStack_40,0);
      if (fVar2 < 15.0) {
        return;
      }
      fVar2 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar2 + -15.0) / 10.0,0);
      uVar1 = *(int *)(param_5 + 0x20) - 2;
      uVar3 = 0;
      if (uVar1 < 3) {
        uVar3 = *(undefined4 *)(&UNK_033f8df4 + (long)(int)uVar1 * 4);
      }
      if (*(long *)(param_4 + 0x30) != 0) {
        fVar2 = fVar2 * _UNK_033f83c8 + _UNK_033f83fc;
        Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact
                  (uVar3,fVar2,*(long *)(param_4 + 0x30),0);
        if (*(long *)(param_4 + 0x38) != 0) {
          Atlas_Gameplay_Kart_BaseVisualBehaviour__TriggerImpact
                    (uVar3,fVar2,*(long *)(param_4 + 0x38),0);
          *(undefined4 *)(param_4 + 0x74) = 0;
          return;
        }
      }
    }
    func_0x00f78af4();
    return;
  }
  return;
}



// ============================================================
// RVA: 0x15e739c | Atlas.Gameplay.Kart.KartVisualAnimation.OnCollisionExit
// ============================================================

void Atlas_Gameplay_Kart_KartVisualAnimation__OnCollisionExit(void)

{
  return;
}



// ============================================================
// RVA: 0x15e73a0 | Atlas.Gameplay.Kart.KartVisualAnimation.SetGlidingOverride
// ============================================================

void Atlas_Gameplay_Kart_KartVisualAnimation__SetGlidingOverride(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5b) = param_2;
  return;
}



// ============================================================
// RVA: 0x15e73a8 | Atlas.Gameplay.Kart.KartVisualAnimation.SetBoosterOverride
// ============================================================

void Atlas_Gameplay_Kart_KartVisualAnimation__SetBoosterOverride(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5c) = param_2;
  return;
}



// ============================================================
// RVA: 0x15e73b0 | Atlas.Gameplay.Kart.KartVisualAnimation..ctor
// ============================================================

void Atlas_Gameplay_Kart_KartVisualAnimation___ctor(long param_1)

{
  undefined8 uVar1;
  
  *(undefined2 *)(param_1 + 0x58) = 0x101;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x94) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f000000;
  return;
}



