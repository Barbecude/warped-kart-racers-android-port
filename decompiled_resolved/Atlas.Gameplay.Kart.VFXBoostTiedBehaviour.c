// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.VFXBoostTiedBehaviour

// ============================================================
// RVA: 0x152724c | Atlas.Gameplay.Kart.VFXBoostTiedBehaviour.Init
// ============================================================

void Atlas_Gameplay_Kart_VFXBoostTiedBehaviour__Init(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// ============================================================
// RVA: 0x1527254 | Atlas.Gameplay.Kart.VFXBoostTiedBehaviour.SetBoostLevel
// ============================================================

undefined8 Atlas_Gameplay_Kart_VFXBoostTiedBehaviour__SetBoostLevel(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb4e65 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e65 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
  if (((int)uVar6 != 0) && (*(int *)(param_1 + 0x28) != param_2)) {
    if (param_2 != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 == 0) {
LAB_01527438:
        uVar6 = func_0x00f78af4();
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar6;
      }
      iVar3 = *(int *)(lVar4 + 0x18);
      if (0 < iVar3) {
        iVar5 = 0;
        do {
          if (iVar3 == iVar5) {
            uVar6 = func_0x00f78b24();
            func_0x00f78ac0(uVar6,0);
            goto LAB_01527438;
          }
          lVar1 = lVar4 + (long)iVar5 * 0x40;
          uVar2 = *(undefined4 *)(lVar1 + 0x24);
          uStack_78 = *(undefined8 *)(lVar1 + 0x30);
          uStack_80 = *(undefined8 *)(lVar1 + 0x28);
          uStack_68 = *(undefined8 *)(lVar1 + 0x40);
          uStack_70 = *(undefined8 *)(lVar1 + 0x38);
          uStack_58 = *(undefined8 *)(lVar1 + 0x50);
          uStack_60 = *(undefined8 *)(lVar1 + 0x48);
          uStack_50 = *(undefined8 *)(lVar1 + 0x58);
          if (*(int *)(lVar1 + 0x20) == param_2) {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_01527438;
            uStack_88 = /*UnityEngine.ParticleSystem$$get_colorOverLifetime*/ func_0x03299340(*(long *)(param_1 + 0x18),0);
            uStack_108 = uStack_78;
            uStack_110 = uStack_80;
            uStack_f8 = uStack_68;
            uStack_100 = uStack_70;
            uStack_e8 = uStack_58;
            uStack_f0 = uStack_60;
            uStack_e0 = uStack_50;
            /*UnityEngine.ParticleSystem.ColorOverLifetimeModule$$set_color*/ func_0x0329af3c(&uStack_88,&uStack_110,0);
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_01527438;
            uStack_90 = /*UnityEngine.ParticleSystem$$get_emission*/ func_0x032965e4(*(long *)(param_1 + 0x18),0);
            uVar6 = /*UnityEngine.ParticleSystem.EmissionModule$$get_burstCount*/ func_0x0329b330(&uStack_90,0);
            if (0 < (int)uVar6) {
              /*UnityEngine.ParticleSystem.EmissionModule$$GetBurst*/ func_0x0329b24c(&uStack_148,&uStack_90,0,0);
              uStack_c8 = uStack_140;
              uStack_d0 = uStack_148;
              uStack_b8 = uStack_130;
              uStack_c0 = uStack_138;
              uStack_a8 = uStack_120;
              uStack_b0 = uStack_128;
              uStack_a0 = uStack_118;
              /*UnityEngine.ParticleSystem.Burst$$set_cycleCount*/ func_0x0329ae94(&uStack_d0,uVar2,0);
              uStack_178 = uStack_c8;
              uStack_180 = uStack_d0;
              uStack_168 = uStack_b8;
              uStack_170 = uStack_c0;
              uStack_158 = uStack_a8;
              uStack_160 = uStack_b0;
              uStack_150 = uStack_a0;
              uVar6 = /*UnityEngine.ParticleSystem.EmissionModule$$SetBurst*/ func_0x0329b19c(&uStack_90,0,&uStack_180,0);
            }
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar3 != iVar5);
      }
    }
    *(int *)(param_1 + 0x28) = param_2;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x152743c | Atlas.Gameplay.Kart.VFXBoostTiedBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_VFXBoostTiedBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
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



