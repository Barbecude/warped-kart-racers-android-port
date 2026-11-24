// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.League.LeaguePlacementData

// ============================================================
// RVA: 0x147b6f0 | Atlas.League.LeaguePlacementData..ctor
// ============================================================

undefined1  [16] Atlas_League_LeaguePlacementData___ctor(ulong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb48d7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48d7 = 1;
  }
  lVar4 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,7);
  if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 != 0) {
      lVar6 = *(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar6 + 0x10);
      if (((((uVar1 != 1) &&
            (*(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(lVar6 + 0x10), 2 < uVar1)) &&
           (*(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar6 + 0x10), uVar1 != 3)) &&
          ((*(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(lVar6 + 0x10), 4 < uVar1 &&
           (*(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar6 + 0x10), uVar1 != 5)))) &&
         (*(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(lVar6 + 0x10), 6 < uVar1)) {
        *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar6 + 0x10);
        *(long *)(param_1 + 0x10) = lVar4;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = param_1;
        return auVar7;
      }
    }
    uVar5 = func_0x00f78b24();
    func_0x00f78ac0(uVar5,0);
  }
  uVar5 = func_0x00f78af4();
  uStack_60 = 0x3d1f100;
  uStack_58 = 0x3d22e88;
  pcStack_38 = Atlas_League_LeagueModeTester__TestDecay;
  lStack_50 = lVar4;
  uStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb48bf & 1) == 0) {
    func_0x00f78a20(0x3d22e90);
    bRam0000000003eb48bf = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_68,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_70,0x7e7,1,1,0);
  uVar3 = uStack_68;
  uVar2 = uStack_70;
  if (((*(ushort *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeTester_TypeInfo*/ lRam0000000003d22e90 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  Atlas_League_LeagueModeTester__TestDecayForAllLeagues(uVar5,uVar3,uVar2);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_68,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_70,0x7e6,1,1,0);
  Atlas_League_LeagueModeTester__TestDecayForAllLeagues(uVar5,uStack_68,uStack_70);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_68,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_70,0x7e7,1,0xe,0);
  Atlas_League_LeagueModeTester__TestDecayForAllLeagues(uVar5,uStack_68,uStack_70);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_68,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_70,0x7e7,1,0x13,0);
  Atlas_League_LeagueModeTester__TestDecayForAllLeagues(uVar5,uStack_68,uStack_70);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_68,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_70,0x7e7,1,0x1a,0);
  Atlas_League_LeagueModeTester__TestDecayForAllLeagues(uVar5,uStack_68,uStack_70);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_68,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_70,0x7e7,1,0x1f,0);
  Atlas_League_LeagueModeTester__TestDecayForAllLeagues(uVar5,uStack_68,uStack_70);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_68,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_70,0x7e7,2,1,0);
  Atlas_League_LeagueModeTester__TestDecayForAllLeagues(uVar5,uStack_68,uStack_70);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_68,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_70,0x7e7,3,1,0);
  Atlas_League_LeagueModeTester__TestDecayForAllLeagues(uVar5,uStack_68,uStack_70);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_68,0x7e7,1,1,0);
  /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_70,0x7e7,4,1,0);
  auVar7 = Atlas_League_LeagueModeTester__TestDecayForAllLeagues(uVar5,uStack_68,uStack_70);
  return auVar7;
}



// ============================================================
// RVA: 0x147e724 | Atlas.League.LeaguePlacementData.SetDayPlacement
// ============================================================

void Atlas_League_LeaguePlacementData__SetDayPlacement(long param_1,uint param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar2 + 0x18)) {
    *(undefined4 *)(lVar2 + (long)(int)param_2 * 4 + 0x20) = param_3;
    return;
  }
  uVar1 = func_0x00f78b24();
  auVar3 = func_0x00f78ac0(uVar1,0);
  /*System.Object$$.ctor*/ func_0x0294d018(auVar3._0_8_,0);
  *(long *)(auVar3._0_8_ + 0x10) = auVar3._8_8_;
  return;
}



