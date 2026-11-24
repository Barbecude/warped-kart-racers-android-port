// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Arcade.ArcadeEvent

// ============================================================
// RVA: 0x144cec8 | Atlas.Arcade.ArcadeEvent.get_ModeDefinition
// ============================================================

undefined8 Atlas_Arcade_ArcadeEvent__get_ModeDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x144ced0 | Atlas.Arcade.ArcadeEvent.get_EventMetagameData
// ============================================================

undefined8 Atlas_Arcade_ArcadeEvent__get_EventMetagameData(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x144ced8 | Atlas.Arcade.ArcadeEvent.get_EventDefinition
// ============================================================

undefined8 Atlas_Arcade_ArcadeEvent__get_EventDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x144cee0 | Atlas.Arcade.ArcadeEvent.get_DisablePickupBoxes
// ============================================================

uint Atlas_Arcade_ArcadeEvent__get_DisablePickupBoxes(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    return (uint)*(byte *)(*(long *)(param_1 + 0x40) + 0x40);
  }
  lVar1 = func_0x00f78af4();
  return *(uint *)(lVar1 + 0x70);
}



// ============================================================
// RVA: 0x144cf00 | Atlas.Arcade.ArcadeEvent.get_Score
// ============================================================

undefined4 Atlas_Arcade_ArcadeEvent__get_Score(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x144cf08 | Atlas.Arcade.ArcadeEvent.get_EventRunning
// ============================================================

undefined1 Atlas_Arcade_ArcadeEvent__get_EventRunning(long param_1)

{
  return *(undefined1 *)(param_1 + 0x8c);
}



// ============================================================
// RVA: 0x144cf10 | Atlas.Arcade.ArcadeEvent.get_EventEnded
// ============================================================

undefined1 Atlas_Arcade_ArcadeEvent__get_EventEnded(long param_1)

{
  return *(undefined1 *)(param_1 + 0x8d);
}



// ============================================================
// RVA: 0x144cf18 | Atlas.Arcade.ArcadeEvent.get_EventEndedWithTimeOut
// ============================================================

undefined1 Atlas_Arcade_ArcadeEvent__get_EventEndedWithTimeOut(long param_1)

{
  return *(undefined1 *)(param_1 + 0x8e);
}



// ============================================================
// RVA: 0x144cf20 | Atlas.Arcade.ArcadeEvent.Init
// ============================================================

void Atlas_Arcade_ArcadeEvent__Init
               (long *param_1,undefined8 param_2,undefined1 *param_3,long param_4,long param_5,
               long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_64 [4];
  
  puVar4 = param_3;
  if ((bRam0000000003eb4749 & 1) == 0) {
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d24dd8);
    func_0x00f78a20(0x3d78fb0);
    bRam0000000003eb4749 = 1;
  }
  param_1[2] = (long)param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = param_7;
  param_1[7] = param_8;
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if (param_4 != 0) {
    puVar4 = (undefined1 *)0x0;
    lVar2 = Atlas_Definitions_AtlasDefinitions__GetArcadeMode(param_4,uVar1);
    param_1[8] = lVar2;
    lVar2 = param_1[3];
    uVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    if (lVar2 != 0) {
      lVar2 = Atlas_Definitions_AtlasDefinitions__GetArcadeEvent(lVar2,param_2,uVar1,0);
      param_1[9] = lVar2;
      lVar5 = param_1[6];
      lVar3 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
      Atlas_UI_MetagameData___ctor(lVar3,0);
      *(long *)(lVar3 + 0x10) = lVar2;
      *(long *)(lVar3 + 0x18) = lVar5;
      param_1[10] = lVar3;
      puVar4 = auStack_64;
      Atlas_UI_ArcadeEventMetagameData__TryGetCurrentBest(lVar3,param_1 + 0xf);
      if (param_1[2] != 0) {
        *(undefined1 *)(param_1[2] + 0x238) = 1;
        lVar2 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
        /*System.Text.StringBuilder$$.ctor*/ func_0x029d178c(lVar2,0);
        param_1[0x10] = lVar2;
        lVar2 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
        /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(lVar2,/*STR('event:/UI/Front_End/Crossing_Medal_Threshold')*/ uRam0000000003d78fb0,0,0,0);
        param_1[0x12] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x0144d0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
        return;
      }
    }
  }
  auVar6 = func_0x00f78af4();
  lVar2 = auVar6._0_8_;
  Atlas_UI_MetagameData___ctor(lVar2,0);
  *(long *)(lVar2 + 0x10) = auVar6._8_8_;
  *(undefined1 **)(lVar2 + 0x18) = puVar4;
  return;
}



// ============================================================
// RVA: 0x144d25c | Atlas.Arcade.ArcadeEvent.PostInit
// ============================================================

void Atlas_Arcade_ArcadeEvent__PostInit(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_1 + 0x58) = param_2;
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + 0xf0) = 1;
    return;
  }
  auVar2 = func_0x00f78af4();
  lVar1 = *auVar2._0_8_;
                    /* WARNING: Could not recover jumptable at 0x0144d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x1a8))(auVar2._0_8_,auVar2._8_8_,*(undefined8 *)(lVar1 + 0x1b0));
  return;
}



// ============================================================
// RVA: 0x144d280 | Atlas.Arcade.ArcadeEvent.InitPools
// ============================================================

void Atlas_Arcade_ArcadeEvent__InitPools(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0144d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x1b0));
  return;
}



// ============================================================
// RVA: 0x144d28c | Atlas.Arcade.ArcadeEvent.DeInit
// ============================================================

void Atlas_Arcade_ArcadeEvent__DeInit(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0144d294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  return;
}



// ============================================================
// RVA: 0x144d298 | Atlas.Arcade.ArcadeEvent.Update
// ============================================================

void Atlas_Arcade_ArcadeEvent__Update(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0144d2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  return;
}



// ============================================================
// RVA: 0x144d2a4 | Atlas.Arcade.ArcadeEvent.LateUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x0144d30c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0144d310) */
/* WARNING: Removing unreachable block (ram,0x0144d31c) */
/* WARNING: Removing unreachable block (ram,0x0144d324) */
/* WARNING: Removing unreachable block (ram,0x0144d32c) */
/* WARNING: Removing unreachable block (ram,0x0144d354) */
/* WARNING: Removing unreachable block (ram,0x0144d338) */
/* WARNING: Removing unreachable block (ram,0x0144d35c) */
/* WARNING: Removing unreachable block (ram,0x0144d344) */
/* WARNING: Removing unreachable block (ram,0x0144d360) */
/* WARNING: Removing unreachable block (ram,0x0144d368) */
/* WARNING: Removing unreachable block (ram,0x0144d388) */
/* WARNING: Removing unreachable block (ram,0x0144d370) */
/* WARNING: Removing unreachable block (ram,0x0144d390) */
/* WARNING: Removing unreachable block (ram,0x0144d378) */
/* WARNING: Removing unreachable block (ram,0x0144d398) */
/* WARNING: Removing unreachable block (ram,0x0144d380) */
/* WARNING: Removing unreachable block (ram,0x0144d39c) */
/* WARNING: Removing unreachable block (ram,0x0144d3a4) */
/* WARNING: Removing unreachable block (ram,0x0144d3b4) */
/* WARNING: Removing unreachable block (ram,0x0144d3c8) */
/* WARNING: Removing unreachable block (ram,0x0144d3d0) */
/* WARNING: Removing unreachable block (ram,0x0144d3d8) */
/* WARNING: Removing unreachable block (ram,0x0144d3ec) */
/* WARNING: Removing unreachable block (ram,0x0144d414) */
/* WARNING: Removing unreachable block (ram,0x0144d41c) */
/* WARNING: Removing unreachable block (ram,0x0144d438) */
/* WARNING: Removing unreachable block (ram,0x0144d440) */
/* WARNING: Removing unreachable block (ram,0x0144d448) */
/* WARNING: Removing unreachable block (ram,0x0144d3fc) */
/* WARNING: Removing unreachable block (ram,0x0144d404) */
/* WARNING: Removing unreachable block (ram,0x0144d460) */
/* WARNING: Removing unreachable block (ram,0x0144d468) */
/* WARNING: Removing unreachable block (ram,0x0144d470) */
/* WARNING: Removing unreachable block (ram,0x0144d478) */
/* WARNING: Removing unreachable block (ram,0x0144d48c) */
/* WARNING: Removing unreachable block (ram,0x0144d494) */
/* WARNING: Removing unreachable block (ram,0x0144d4ac) */
/* WARNING: Removing unreachable block (ram,0x0144d4b4) */
/* WARNING: Removing unreachable block (ram,0x0144d4bc) */
/* WARNING: Removing unreachable block (ram,0x0144d4c4) */
/* WARNING: Removing unreachable block (ram,0x0144d4d0) */
/* WARNING: Removing unreachable block (ram,0x0144d4d8) */
/* WARNING: Removing unreachable block (ram,0x0144d4e0) */
/* WARNING: Removing unreachable block (ram,0x0144d4ec) */
/* WARNING: Removing unreachable block (ram,0x0144d4f4) */
/* WARNING: Removing unreachable block (ram,0x0144d4fc) */
/* WARNING: Removing unreachable block (ram,0x0144d504) */
/* WARNING: Removing unreachable block (ram,0x0144d50c) */
/* WARNING: Removing unreachable block (ram,0x0144d518) */
/* WARNING: Removing unreachable block (ram,0x0144d520) */
/* WARNING: Removing unreachable block (ram,0x0144d544) */
/* WARNING: Removing unreachable block (ram,0x0144d55c) */
/* WARNING: Removing unreachable block (ram,0x0144d58c) */
/* WARNING: Removing unreachable block (ram,0x0144d5a4) */
/* WARNING: Removing unreachable block (ram,0x0144d618) */
/* WARNING: Removing unreachable block (ram,0x0144d5ac) */
/* WARNING: Removing unreachable block (ram,0x0144d5b8) */
/* WARNING: Removing unreachable block (ram,0x0144d5dc) */
/* WARNING: Removing unreachable block (ram,0x0144d5e0) */
/* WARNING: Removing unreachable block (ram,0x0144d5e4) */
/* WARNING: Removing unreachable block (ram,0x0144d9fc) */
/* WARNING: Removing unreachable block (ram,0x0144da28) */
/* WARNING: Removing unreachable block (ram,0x0144da6c) */
/* WARNING: Removing unreachable block (ram,0x0144da74) */
/* WARNING: Removing unreachable block (ram,0x0144da7c) */
/* WARNING: Removing unreachable block (ram,0x0144da84) */
/* WARNING: Removing unreachable block (ram,0x0144da8c) */
/* WARNING: Removing unreachable block (ram,0x0144da9c) */
/* WARNING: Removing unreachable block (ram,0x0144daa4) */
/* WARNING: Removing unreachable block (ram,0x0144daac) */
/* WARNING: Removing unreachable block (ram,0x0144dac4) */
/* WARNING: Removing unreachable block (ram,0x0144dacc) */
/* WARNING: Removing unreachable block (ram,0x0144daf4) */
/* WARNING: Removing unreachable block (ram,0x0144dad8) */
/* WARNING: Removing unreachable block (ram,0x0144dae4) */
/* WARNING: Removing unreachable block (ram,0x0144db00) */
/* WARNING: Removing unreachable block (ram,0x0144db14) */
/* WARNING: Removing unreachable block (ram,0x0144db24) */
/* WARNING: Removing unreachable block (ram,0x0144db34) */
/* WARNING: Removing unreachable block (ram,0x0144db3c) */
/* WARNING: Removing unreachable block (ram,0x0144db64) */
/* WARNING: Removing unreachable block (ram,0x0144db48) */
/* WARNING: Removing unreachable block (ram,0x0144db54) */
/* WARNING: Removing unreachable block (ram,0x0144db70) */
/* WARNING: Removing unreachable block (ram,0x0144dc38) */
/* WARNING: Removing unreachable block (ram,0x0144dc40) */
/* WARNING: Removing unreachable block (ram,0x0144dc58) */
/* WARNING: Removing unreachable block (ram,0x0144dc60) */
/* WARNING: Removing unreachable block (ram,0x0144dc88) */
/* WARNING: Removing unreachable block (ram,0x0144dc6c) */
/* WARNING: Removing unreachable block (ram,0x0144dc78) */
/* WARNING: Removing unreachable block (ram,0x0144dc94) */
/* WARNING: Removing unreachable block (ram,0x0144dca0) */
/* WARNING: Removing unreachable block (ram,0x0144dd24) */
/* WARNING: Removing unreachable block (ram,0x0144dd4c) */
/* WARNING: Removing unreachable block (ram,0x0144dd68) */
/* WARNING: Removing unreachable block (ram,0x0144dd88) */
/* WARNING: Removing unreachable block (ram,0x0144dd78) */
/* WARNING: Removing unreachable block (ram,0x0144dd54) */
/* WARNING: Removing unreachable block (ram,0x0144dd64) */
/* WARNING: Removing unreachable block (ram,0x0144dca4) */
/* WARNING: Removing unreachable block (ram,0x0144dccc) */
/* WARNING: Removing unreachable block (ram,0x0144dd18) */
/* WARNING: Removing unreachable block (ram,0x0144dd1c) */
/* WARNING: Removing unreachable block (ram,0x0144dce0) */
/* WARNING: Removing unreachable block (ram,0x0144dce8) */
/* WARNING: Removing unreachable block (ram,0x0144db80) */
/* WARNING: Removing unreachable block (ram,0x0144db90) */
/* WARNING: Removing unreachable block (ram,0x0144db98) */
/* WARNING: Removing unreachable block (ram,0x0144dbc0) */
/* WARNING: Removing unreachable block (ram,0x0144dba4) */
/* WARNING: Removing unreachable block (ram,0x0144dbb0) */
/* WARNING: Removing unreachable block (ram,0x0144dbcc) */
/* WARNING: Removing unreachable block (ram,0x0144dd08) */
/* WARNING: Removing unreachable block (ram,0x0144dbdc) */
/* WARNING: Removing unreachable block (ram,0x0144dd10) */
/* WARNING: Removing unreachable block (ram,0x0144dbe4) */
/* WARNING: Removing unreachable block (ram,0x0144dd00) */
/* WARNING: Removing unreachable block (ram,0x0144dd20) */
/* WARNING: Removing unreachable block (ram,0x0144dc00) */

ulong Atlas_Arcade_ArcadeEvent__LateUpdate(undefined4 param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [12];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb474a & 1) == 0) {
    func_0x00f78a20(0x3d684a0);
    func_0x00f78a20(0x3d67120);
    bRam0000000003eb474a = 1;
  }
  uVar3 = (**(code **)(*param_2 + 0x1d8))(param_1,param_2,*(undefined8 *)(*param_2 + 0x1e0));
  if (*(char *)((long)param_2 + 0x8c) == '\0') {
    return uVar3;
  }
  uStack_60 = 0x3eb4000;
  uStack_48 = 0x144d310;
  lVar4 = param_2[0xb];
  plStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0xdc) == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)*(uint *)(lVar4 + 0x7c);
      if ((int)*(uint *)(lVar4 + 0x7c) < 1) {
        if (param_2[4] != 0) {
          /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_98,param_2[4],0);
          lVar4 = param_2[0xb];
          if (lVar4 != 0) {
            uStack_78 = *(undefined8 *)(lVar4 + 0xe0);
            uStack_80 = *(undefined8 *)(lVar4 + 0xd8);
            uStack_70 = *(undefined8 *)(lVar4 + 0xe8);
            uStack_a8 = uStack_90;
            uStack_b0 = uStack_98;
            uStack_a0 = uStack_88;
            iVar2 = /*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(&uStack_80,&uStack_b0,0);
            uVar1 = 0;
            if (iVar2 != 0) {
              uVar1 = iVar2 - 0xfa5;
            }
            return (ulong)uVar1;
          }
        }
        goto code_r0x0144d6bc;
      }
    }
    return uVar3;
  }
code_r0x0144d6bc:
  auVar5 = func_0x00f78af4();
  iVar2 = auVar5._8_4_;
  lVar4 = *(long *)(auVar5._0_8_ + 0x10);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x50) < iVar2) {
      if (*(int *)(lVar4 + 0x4c) < iVar2) {
        uVar3 = (ulong)(iVar2 <= *(int *)(lVar4 + 0x48));
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 3;
    }
    return uVar3;
  }
  auVar5 = func_0x00f78af4();
  iVar2 = auVar5._8_4_;
  lVar4 = auVar5._0_8_;
  if (iVar2 == 3) {
    return (ulong)*(uint *)(lVar4 + 0x50);
  }
  if (iVar2 == 2) {
    return (ulong)*(uint *)(lVar4 + 0x4c);
  }
  if (iVar2 != 1) {
    return 0x7fffffff;
  }
  return (ulong)*(uint *)(lVar4 + 0x48);
}



// ============================================================
// RVA: 0x144d61c | Atlas.Arcade.ArcadeEvent.TimeMsInProgress
// ============================================================

uint Atlas_Arcade_ArcadeEvent__TimeMsInProgress(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [12];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 == 0) {
LAB_0144d6bc:
    auVar4 = func_0x00f78af4();
    iVar1 = auVar4._8_4_;
    lVar3 = *(long *)(auVar4._0_8_ + 0x10);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x50) < iVar1) {
        if (*(int *)(lVar3 + 0x4c) < iVar1) {
          uVar2 = (uint)(iVar1 <= *(int *)(lVar3 + 0x48));
        }
        else {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 3;
      }
      return uVar2;
    }
    auVar4 = func_0x00f78af4();
    iVar1 = auVar4._8_4_;
    lVar3 = auVar4._0_8_;
    if (iVar1 == 3) {
      return *(uint *)(lVar3 + 0x50);
    }
    if (iVar1 == 2) {
      return *(uint *)(lVar3 + 0x4c);
    }
    if (iVar1 == 1) {
      return *(uint *)(lVar3 + 0x48);
    }
    return 0x7fffffff;
  }
  if (*(char *)(lVar3 + 0xdc) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0x7c);
    if ((int)uVar2 < 1) {
      if (*(long *)(param_1 + 0x20) != 0) {
        /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_58,*(long *)(param_1 + 0x20),0);
        lVar3 = *(long *)(param_1 + 0x58);
        if (lVar3 != 0) {
          uStack_38 = *(undefined8 *)(lVar3 + 0xe0);
          uStack_40 = *(undefined8 *)(lVar3 + 0xd8);
          uStack_30 = *(undefined8 *)(lVar3 + 0xe8);
          uStack_68 = uStack_50;
          uStack_70 = uStack_58;
          uStack_60 = uStack_48;
          iVar1 = /*Core.Networking.NetworkSessionTime$$Delta*/ func_0x0165e480(&uStack_40,&uStack_70,0);
          if (iVar1 == 0) {
            return 0;
          }
          return iVar1 - 0xfa5;
        }
      }
      goto LAB_0144d6bc;
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x144d9fc | Atlas.Arcade.ArcadeEvent.EndEvent
// ============================================================

dword * Atlas_Arcade_ArcadeEvent__EndEvent(dword *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  dword *pdVar3;
  long lVar4;
  undefined8 *puVar5;
  int extraout_w1;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pdVar3 = param_1;
  if ((bRam0000000003eb474d & 1) == 0) {
    func_0x00f78a20(0x3d57080);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    pdVar3 = (dword *)func_0x00f78a20(0x3d22180);
    bRam0000000003eb474d = 1;
  }
  if ((*(char *)((long)param_1 + 0x8d) != '\0') || (*(char *)((long)param_1 + 0x8f) != '\0')) {
    return pdVar3;
  }
  if ((*(long *)(param_1 + 0x1a) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x1a) + 0x288), lVar4 == 0)) {
LAB_0144dd18:
    func_0x00f78af4();
  }
  else {
    Atlas_UI_UIArcadeInProgressBehaviour__StopAnimations(lVar4,0);
    if ((*(long *)(param_1 + 4) == 0) ||
       ((lVar4 = *(long *)(*(long *)(param_1 + 4) + 0x40), lVar4 == 0 ||
        (plVar9 = *(long **)(lVar4 + 0x28), plVar9 == (long *)0x0)))) goto LAB_0144dd18;
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0144db00;
        }
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
LAB_0144db00:
    plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
    if (plVar9 != (long *)0x0) {
      do {
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto code_r0x0144db70;
            }
            piVar8 = piVar8 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0144db70:
        uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        if ((uVar7 & 1) == 0) {
          lVar4 = 0;
          goto joined_r0x0144dc3c;
        }
        lVar4 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto code_r0x0144dbcc;
            }
            piVar8 = piVar8 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x0144dbcc:
        lVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x0144dd20;
        }
        lVar6 = *(long *)(lVar4 + 0x10);
        if (lVar6 == 0) {
          func_0x00f78af4();
          goto code_r0x0144dd20;
        }
        plVar10 = *(long **)(param_1 + 8);
        uVar12 = *(undefined8 *)(lVar6 + 0x50);
        uVar11 = *(undefined8 *)(lVar6 + 0x48);
        uVar14 = *(undefined8 *)(lVar6 + 0x60);
        uVar13 = *(undefined8 *)(lVar6 + 0x58);
        Atlas_Gameplay_Player_GameContextPlayer__GetRaceProgress(lVar4,0);
        if (plVar10 == (long *)0x0) goto code_r0x0144dd00;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_78 = 0;
        uStack_60 = uVar11;
        uStack_58 = uVar12;
        uStack_50 = uVar13;
        uStack_48 = uVar14;
        (**(code **)(*plVar10 + 0x248))
                  (plVar10,&uStack_60,0,param_2,&uStack_78,*(undefined8 *)(*plVar10 + 0x250));
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x0144dd20:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x144dd24);
  (*pcVar1)();
joined_r0x0144dc3c:
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto code_r0x0144dc94;
        }
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0144dc94:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  if (lVar4 == 0) {
    *(undefined2 *)(param_1 + 0x23) = 0x100;
    *(char *)((long)param_1 + 0x8e) = (char)param_2;
    (**(code **)(*(long *)param_1 + 0x228))(param_1,*(undefined8 *)(*(long *)param_1 + 0x230));
    if ((*(long *)(param_1 + 4) != 0) &&
       (lVar4 = Atlas_Contexts_GameContextBase__GetGameModeState_GameContextBaseInProgressState_
                          (*(long *)(param_1 + 4),uRam0000000003d57080), lVar4 != 0)) {
      pdVar3 = (dword *)Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished
                                  (lVar4,0);
      return pdVar3;
    }
    goto LAB_0144dd18;
  }
  func_0x00f78ac0(lVar4,0);
  if (extraout_w1 != 1) {
    iVar2 = __Unwind_Resume();
    if (2 < iVar2 - 1U) {
      return &MACH_HEADER.filetype;
    }
    return (dword *)(ulong)*(uint *)(&UNK_033f8118 + (long)(int)(iVar2 - 1U) * 4);
  }
  plVar10 = (long *)___cxa_begin_catch();
  lVar4 = *plVar10;
  ___cxa_end_catch();
  goto joined_r0x0144dc3c;
code_r0x0144dd00:
  func_0x00f78af4();
  goto code_r0x0144dd20;
}



// ============================================================
// RVA: 0x144dd6c | Atlas.Arcade.ArcadeEvent.GetFakeFinishPositionForMedal
// ============================================================

undefined4 Atlas_Arcade_ArcadeEvent__GetFakeFinishPositionForMedal(int param_1)

{
  if (param_1 - 1U < 3) {
    return *(undefined4 *)(&UNK_033f8118 + (long)(int)(param_1 - 1U) * 4);
  }
  return 0xc;
}



// ============================================================
// RVA: 0x144dd90 | Atlas.Arcade.ArcadeEvent.LogVerbose
// ============================================================

void Atlas_Arcade_ArcadeEvent__LogVerbose(void)

{
  return;
}



// ============================================================
// RVA: 0x144dd94 | Atlas.Arcade.ArcadeEvent.IncrementScore
// ============================================================

void Atlas_Arcade_ArcadeEvent__IncrementScore(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (int)param_1[0xe] + 1;
  if (*(char *)((long)param_1 + 0x8d) == '\0') {
    *(int *)(param_1 + 0xe) = iVar1;
    iVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    if (iVar2 < iVar1) {
      uVar3 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      *(undefined4 *)(param_1 + 0xe) = uVar3;
    }
  }
  return;
}



// ============================================================
// RVA: 0x144dda0 | Atlas.Arcade.ArcadeEvent.SetScore
// ============================================================

void Atlas_Arcade_ArcadeEvent__SetScore(long *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)((long)param_1 + 0x8d) == '\0') {
    *(int *)(param_1 + 0xe) = param_2;
    iVar1 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    if (iVar1 < param_2) {
      uVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      *(undefined4 *)(param_1 + 0xe) = uVar2;
    }
  }
  return;
}



// ============================================================
// RVA: 0x144ddfc | Atlas.Arcade.ArcadeEvent.InProgressStateStartFirstUpdate
// ============================================================

void Atlas_Arcade_ArcadeEvent__InProgressStateStartFirstUpdate(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb474b & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb474b = 1;
  }
  *(undefined1 *)((long)param_1 + 0x8c) = 1;
  if (param_1[8] != 0) {
    uVar3 = *(undefined8 *)(param_1[8] + 0x48);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar3,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
    if (iVar1 == 0) {
LAB_0144dec0:
                    /* WARNING: Could not recover jumptable at 0x0144ded8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
      return;
    }
    if ((param_1[2] != 0) && (lVar2 = *(long *)(param_1[2] + 0x1e8), lVar2 != 0)) {
      *(undefined1 *)(lVar2 + 0xa8) = 0;
      if ((param_1[0xb] != 0) &&
         (((lVar2 = *(long *)(param_1[0xb] + 0x10), lVar2 != 0 && (param_1[8] != 0)) &&
          (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)))) {
        Atlas_Gameplay_Kart_KartUsableManager__ForceEquipLocal
                  (lVar2,*(undefined8 *)(param_1[8] + 0x48),0);
        goto LAB_0144dec0;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  *(undefined1 *)(lVar2 + 0x8f) = 1;
  return;
}



// ============================================================
// RVA: 0x144dee0 | Atlas.Arcade.ArcadeEvent.UserExitRequested
// ============================================================

void Atlas_Arcade_ArcadeEvent__UserExitRequested(long param_1)

{
  *(undefined1 *)(param_1 + 0x8f) = 1;
  return;
}



// ============================================================
// RVA: 0x144deec | Atlas.Arcade.ArcadeEvent.UsableUsed
// ============================================================

void Atlas_Arcade_ArcadeEvent__UsableUsed(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0144def4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1f8))();
  return;
}



// ============================================================
// RVA: 0x144def8 | Atlas.Arcade.ArcadeEvent.UsableHitPlayer
// ============================================================

void Atlas_Arcade_ArcadeEvent__UsableHitPlayer(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0144df04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x208))();
  return;
}



// ============================================================
// RVA: 0x144df08 | Atlas.Arcade.ArcadeEvent.FindAndInitBehaviours
// ============================================================

void Atlas_Arcade_ArcadeEvent__FindAndInitBehaviours(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0144df14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x218))();
  return;
}



// ============================================================
// RVA: 0x144df18 | Atlas.Arcade.ArcadeEvent.PostSetupGameContextScreen
// ============================================================

undefined8
Atlas_Arcade_ArcadeEvent__PostSetupGameContextScreen
          (undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((bRam0000000003eb474c & 1) == 0) {
    func_0x00f78a20(0x3d578e0);
    bRam0000000003eb474c = 1;
  }
  param_3[0xc] = param_4;
  param_3[0xd] = param_5;
  if (param_4 != 0) {
    Atlas_UI_Screens_GameInProgressScreen__SetEnabledHUDElement(param_4,9,1,0);
    Atlas_UI_Screens_GameInProgressScreen__SetEnabledHUDElement(param_4,7,0,0);
    Atlas_UI_Screens_GameInProgressScreen__SetEnabledHUDElement(param_4,8,0,0);
    Atlas_UI_Screens_GameInProgressScreen__SetEnabledHUDElement(param_4,2,1,0);
    *(undefined1 *)(param_4 + 0x108) = 0;
    if (((param_5 != 0) && (*(long *)(param_5 + 0x88) != 0)) &&
       (lVar2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(param_5 + 0x88),uRam0000000003d578e0), lVar2 != 0)) {
      uVar5 = /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar2,0);
      iVar1 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
      if (iVar1 == 7) {
        if ((*(long *)(param_5 + 0x288) == 0) || (*(long *)(param_5 + 0x80) == 0))
        goto LAB_0144e0b4;
        /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_5 + 0x80),*(undefined8 *)(*(long *)(param_5 + 0x288) + 0x90)
                        ,0);
        if (*(long *)(param_5 + 0x288) == 0) goto LAB_0144e0b4;
        uVar5 = *(undefined4 *)(*(long *)(param_5 + 0x288) + 0xb4);
      }
      else {
        iVar1 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
        if (iVar1 == 8) {
          if ((*(long *)(param_5 + 0x288) == 0) || (*(long *)(param_5 + 0x80) == 0))
          goto LAB_0144e0b4;
          /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_5 + 0x80),
                          *(undefined8 *)(*(long *)(param_5 + 0x288) + 0x98),0);
          if (*(long *)(param_5 + 0x288) == 0) goto LAB_0144e0b4;
          uVar5 = *(undefined4 *)(*(long *)(param_5 + 0x288) + 0xb0);
        }
      }
      /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(uVar5,param_2,lVar2,0);
      if ((*(long *)(param_5 + 0x288) != 0) &&
         (plVar3 = *(long **)(*(long *)(param_5 + 0x288) + 0x18), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0144e0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar3 + 0x558))(plVar3,param_3[0xf],*(undefined8 *)(*plVar3 + 0x560))
        ;
        return uVar4;
      }
    }
  }
LAB_0144e0b4:
  func_0x00f78af4();
  return 0;
}



// ============================================================
// RVA: 0x144e0b8 | Atlas.Arcade.ArcadeEvent.GetAdditionalScenesToLoad
// ============================================================

undefined8 Atlas_Arcade_ArcadeEvent__GetAdditionalScenesToLoad(void)

{
  return 0;
}



// ============================================================
// RVA: 0x144e0c0 | Atlas.Arcade.ArcadeEvent.OnInit
// ============================================================

void Atlas_Arcade_ArcadeEvent__OnInit(void)

{
  return;
}



// ============================================================
// RVA: 0x144e0c4 | Atlas.Arcade.ArcadeEvent.OnInitPools
// ============================================================

void Atlas_Arcade_ArcadeEvent__OnInitPools(void)

{
  return;
}



// ============================================================
// RVA: 0x144e0c8 | Atlas.Arcade.ArcadeEvent.OnDeInit
// ============================================================

void Atlas_Arcade_ArcadeEvent__OnDeInit(void)

{
  return;
}



// ============================================================
// RVA: 0x144e0cc | Atlas.Arcade.ArcadeEvent.OnUpdate
// ============================================================

void Atlas_Arcade_ArcadeEvent__OnUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x144e0d0 | Atlas.Arcade.ArcadeEvent.OnLateUpdate
// ============================================================

void Atlas_Arcade_ArcadeEvent__OnLateUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x144e0d4 | Atlas.Arcade.ArcadeEvent.OnInProgressStateStartFirstUpdate
// ============================================================

void Atlas_Arcade_ArcadeEvent__OnInProgressStateStartFirstUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x144e0d8 | Atlas.Arcade.ArcadeEvent.OnUsableUsed
// ============================================================

void Atlas_Arcade_ArcadeEvent__OnUsableUsed(void)

{
  return;
}



// ============================================================
// RVA: 0x144e0dc | Atlas.Arcade.ArcadeEvent.OnUsableHitPlayer
// ============================================================

void Atlas_Arcade_ArcadeEvent__OnUsableHitPlayer(void)

{
  return;
}



// ============================================================
// RVA: 0x144e0e0 | Atlas.Arcade.ArcadeEvent.OnFindAndInitBehaviours
// ============================================================

void Atlas_Arcade_ArcadeEvent__OnFindAndInitBehaviours(void)

{
  return;
}



// ============================================================
// RVA: 0x144e0e4 | Atlas.Arcade.ArcadeEvent.GetVisualScore
// ============================================================

undefined4 Atlas_Arcade_ArcadeEvent__GetVisualScore(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x144e0ec | Atlas.Arcade.ArcadeEvent.InstantiateEvent
// ============================================================

undefined8 Atlas_Arcade_ArcadeEvent__InstantiateEvent(int param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb474e & 1) == 0) {
    func_0x00f78a20(0x3d1fc70);
    func_0x00f78a20(0x3d1fc88);
    func_0x00f78a20(0x3d1fc90);
    bRam0000000003eb474e = 1;
  }
  if (param_1 == 6) {
    uVar1 = func_0x00f78aec(/*Atlas.Arcade.ArcadeEventTimeTrial_TypeInfo*/ uRam0000000003d1fc90);
    /*Atlas.Arcade.ArcadeEventTimeTrial$$.ctor*/ func_0x0144e25c();
  }
  else if (param_1 == 8) {
    uVar1 = func_0x00f78aec(/*Atlas.Arcade.ArcadeEventShooter_TypeInfo*/ uRam0000000003d1fc88);
    /*Atlas.Arcade.ArcadeEventShooter$$.ctor*/ func_0x0144e208();
  }
  else if (param_1 == 7) {
    uVar1 = func_0x00f78aec(/*Atlas.Arcade.ArcadeEventCollector_TypeInfo*/ uRam0000000003d1fc70);
    /*Atlas.Arcade.ArcadeEventCollector$$.ctor*/ func_0x0144e1b4();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x144e2b0 | Atlas.Arcade.ArcadeEvent.IsArcadeGameType
// ============================================================

bool Atlas_Arcade_ArcadeEvent__IsArcadeGameType(int param_1)

{
  return param_1 - 6U < 3;
}



// ============================================================
// RVA: 0x144e2c0 | Atlas.Arcade.ArcadeEvent..ctor
// ============================================================

undefined1  [16] Atlas_Arcade_ArcadeEvent___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb474f & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb474f = 1;
  }
  *(undefined8 *)(param_1 + 0x78) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined4 *)(param_1 + 0x88) = 3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



