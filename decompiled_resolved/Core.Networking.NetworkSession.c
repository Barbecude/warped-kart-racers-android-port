// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkSession

// ============================================================
// RVA: 0x1658210 | Core.Networking.NetworkSession.CreateTime
// ============================================================

void Core_Networking_NetworkSession__CreateTime(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x1b0);
  uVar1 = *(undefined4 *)(param_2 + 0x1a0);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)param_1 = param_3;
  *(undefined1 *)((long)param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 1) = uVar1;
  param_1[2] = uVar2;
  return;
}



// ============================================================
// RVA: 0x165ccf4 | Core.Networking.NetworkSession.get_PauseTime
// ============================================================

undefined1 Core_Networking_NetworkSession__get_PauseTime(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b8);
}



// ============================================================
// RVA: 0x165ccfc | Core.Networking.NetworkSession.set_PauseTime
// ============================================================

void Core_Networking_NetworkSession__set_PauseTime(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1b8) = param_2;
  return;
}



// ============================================================
// RVA: 0x165cd04 | Core.Networking.NetworkSession.get_PauseTimeOverride
// ============================================================

undefined1 Core_Networking_NetworkSession__get_PauseTimeOverride(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1b9);
}



// ============================================================
// RVA: 0x165cd0c | Core.Networking.NetworkSession.set_PauseTimeOverride
// ============================================================

void Core_Networking_NetworkSession__set_PauseTimeOverride(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1b9) = param_2;
  return;
}



// ============================================================
// RVA: 0x165cd14 | Core.Networking.NetworkSession.get_LocalPlayerIndexCache
// ============================================================

undefined4 Core_Networking_NetworkSession__get_LocalPlayerIndexCache(long param_1)

{
  return *(undefined4 *)(param_1 + 0x198);
}



// ============================================================
// RVA: 0x165cd1c | Core.Networking.NetworkSession.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x0165cd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165cdf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165cd74) */
/* WARNING: Removing unreachable block (ram,0x0165cd80) */
/* WARNING: Removing unreachable block (ram,0x0165cd88) */
/* WARNING: Removing unreachable block (ram,0x0165cdc0) */
/* WARNING: Removing unreachable block (ram,0x0165ce40) */
/* WARNING: Removing unreachable block (ram,0x0165cdcc) */
/* WARNING: Removing unreachable block (ram,0x0165cdf8) */
/* WARNING: Removing unreachable block (ram,0x0165ce44) */
/* WARNING: Removing unreachable block (ram,0x0165ce2c) */

void Core_Networking_NetworkSession__Init
               (long *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *extraout_x8;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb5837 & 1) == 0) {
    func_0x00f78a20(0x3d708d0);
    bRam0000000003eb5837 = 1;
  }
  param_1[5] = param_2;
  if ((bRam0000000003eb583a & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d5ad10);
    bRam0000000003eb583a = 1;
  }
  if ((param_1[5] != 0) && (lVar7 = *(long *)(param_1[5] + 0x30), lVar7 != 0)) {
    uVar6 = *(undefined8 *)(lVar7 + 0x98);
    uVar1 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    uVar3 = uRam0000000003d2a018;
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar1,param_1,uRam0000000003d5ad10);
    param_4 = (undefined4)uVar3;
    param_3 = 0;
    plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,uVar1,0);
    if ((plVar2 != (long *)0x0) && (*plVar2 != /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) goto code_r0x0165cfac;
    *(long **)(lVar7 + 0x98) = plVar2;
    if ((param_1[5] != 0) && (lVar7 = *(long *)(param_1[5] + 0x30), lVar7 != 0)) {
      uVar6 = *(undefined8 *)(lVar7 + 0xf8);
      uVar1 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      uVar3 = uRam0000000003d2a290;
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar1,param_1,*(undefined8 *)(*param_1 + 0x260));
      param_4 = (undefined4)uVar3;
      param_3 = 0;
      plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,uVar1,0);
      if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) {
        *(long **)(lVar7 + 0xf8) = plVar2;
        return;
      }
      goto code_r0x0165cfac;
    }
  }
  func_0x00f78af4();
code_r0x0165cfac:
  auVar8 = func_0x00f78e5c();
  lVar7 = auVar8._0_8_;
  if ((bRam0000000003eb5839 & 1) == 0) {
    func_0x00f78a20(0x3d21960);
    func_0x00f78a20(0x3d3b510);
    func_0x00f78a20(0x3d3b5a0);
    func_0x00f78a20(0x3d3b6a8);
    func_0x00f78a20(0x3d1dc68);
    func_0x00f78a20(0x3d1dc48);
    func_0x00f78a20(0x3d23700);
    func_0x00f78a20(0x3d23710);
    func_0x00f78a20(0x3d23768);
    func_0x00f78a20(0x3d237b0);
    func_0x00f78a20(0x3d23808);
    func_0x00f78a20(0x3d76be8);
    bRam0000000003eb5839 = 1;
  }
  uVar3 = func_0x00f78aec(/*Core.Networking.NetworkDelegates_TypeInfo*/ uRam0000000003d23700);
  Core_Networking_NetworkDelegates___ctor();
  *(undefined8 *)(lVar7 + 0x10) = uVar3;
  lVar4 = func_0x00f78aec(/*Core.Networking.NetworkMigrationManager_TypeInfo*/ uRam0000000003d23768);
  Core_Networking_NetworkMigrationManager___ctor();
  *(long *)(lVar7 + 0xa0) = lVar4;
  if (lVar4 != 0) {
    Core_Networking_NetworkMigrationManager__Init(lVar4);
    if (*(long *)(lVar7 + 0x58) != 0) {
      uVar3 = /*System.Collections.Generic.List<NetworkPlayer>$$AsReadOnly*/ func_0x02413d60(*(long *)(lVar7 + 0x58),uRam0000000003d3b510);
      *(undefined8 *)(lVar7 + 0x188) = uVar3;
      *(undefined4 *)(lVar7 + 0x1a0) = param_4;
      uVar3 = /*System.String$$Concat*/ func_0x029be39c(auVar8._8_8_,/*STR('_')*/ uRam0000000003d76be8,param_3,0);
      uVar1 = func_0x00f78aec(/*Core.Networking.NetworkSessionId_TypeInfo*/ uRam0000000003d237b0);
      /*Core.Networking.NetworkSessionId$$.ctor*/ func_0x0165d344(uVar1,uVar3);
      *(undefined8 *)(lVar7 + 0x1b0) = uVar1;
      uVar3 = func_0x00f78aec(/*FlatBuffers.FlatBufferBuilder_TypeInfo*/ uRam0000000003d21960);
      /*FlatBuffers.FlatBufferBuilder$$.ctor*/ func_0x016cd72c(uVar3,0x400,0);
      *(undefined8 *)(lVar7 + 0x30) = uVar3;
      uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVoteHistory>_TypeInfo*/ uRam0000000003d1dc68);
      /*System.Collections.Generic.List<NetworkVoteHistory>$$.ctor*/ func_0x024238d4(uVar3,3,uRam0000000003d3b6a8);
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024188d0(uVar1,0xc,uRam0000000003d3b5a0);
      uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024188d0(uVar6,0xc,uRam0000000003d3b5a0);
      uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024188d0(uVar5,0xc,uRam0000000003d3b5a0);
      *(undefined8 *)(lVar7 + 0xd0) = uVar3;
      *(undefined8 *)(lVar7 + 0xd8) = uVar1;
      *(undefined8 *)(lVar7 + 0xe0) = uVar6;
      *(undefined8 *)(lVar7 + 0xe8) = uVar5;
      uVar3 = func_0x00f78aec(/*Core.Networking.NetworkEventResult_TypeInfo*/ uRam0000000003d23710);
      Core_Networking_NetworkEventResult___ctor();
      *(undefined8 *)(lVar7 + 0x170) = uVar3;
      uVar3 = func_0x00f78aec(/*Core.Networking.NetworkVoteUpdate_TypeInfo*/ uRam0000000003d23808);
      /*Core.Networking.NetworkVoteUpdate$$.ctor*/ func_0x0165d38c();
      *(undefined8 *)(lVar7 + 0x178) = uVar3;
      *(undefined8 *)(lVar7 + 0x130) = 0;
      *(undefined8 *)(lVar7 + 0x138) = *(undefined8 *)(lVar7 + 0x1b0);
      *(undefined8 *)(lVar7 + 0x110) = 0;
      *(undefined8 *)(lVar7 + 0x118) = 0;
      *(undefined8 *)(lVar7 + 0x120) = *(undefined8 *)(lVar7 + 0x1b0);
      *(undefined8 *)(lVar7 + 0x128) = 0;
      *(undefined4 *)(lVar7 + 0x1a4) = *(undefined4 *)(lVar7 + 0x1a0);
      return;
    }
  }
  lVar7 = func_0x00f78af4();
  uVar3 = *(undefined8 *)(lVar7 + 0x1b0);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = uVar3;
  return;
}



// ============================================================
// RVA: 0x165ce48 | Core.Networking.NetworkSession.InitDisconnectHandlers
// ============================================================

void Core_Networking_NetworkSession__InitDisconnectHandlers
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *extraout_x8;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb583a & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d5ad10);
    bRam0000000003eb583a = 1;
  }
  if ((param_1[5] != 0) && (lVar7 = *(long *)(param_1[5] + 0x30), lVar7 != 0)) {
    uVar6 = *(undefined8 *)(lVar7 + 0x98);
    uVar1 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    uVar3 = uRam0000000003d2a018;
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar1,param_1,uRam0000000003d5ad10);
    param_4 = (undefined4)uVar3;
    param_3 = 0;
    plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,uVar1,0);
    if ((plVar2 != (long *)0x0) && (*plVar2 != /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) goto LAB_0165cfac;
    *(long **)(lVar7 + 0x98) = plVar2;
    if ((param_1[5] != 0) && (lVar7 = *(long *)(param_1[5] + 0x30), lVar7 != 0)) {
      uVar6 = *(undefined8 *)(lVar7 + 0xf8);
      uVar1 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      uVar3 = uRam0000000003d2a290;
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar1,param_1,*(undefined8 *)(*param_1 + 0x260));
      param_4 = (undefined4)uVar3;
      param_3 = 0;
      plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,uVar1,0);
      if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) {
        *(long **)(lVar7 + 0xf8) = plVar2;
        return;
      }
      goto LAB_0165cfac;
    }
  }
  func_0x00f78af4();
LAB_0165cfac:
  auVar8 = func_0x00f78e5c();
  lVar7 = auVar8._0_8_;
  if ((bRam0000000003eb5839 & 1) == 0) {
    func_0x00f78a20(0x3d21960);
    func_0x00f78a20(0x3d3b510);
    func_0x00f78a20(0x3d3b5a0);
    func_0x00f78a20(0x3d3b6a8);
    func_0x00f78a20(0x3d1dc68);
    func_0x00f78a20(0x3d1dc48);
    func_0x00f78a20(0x3d23700);
    func_0x00f78a20(0x3d23710);
    func_0x00f78a20(0x3d23768);
    func_0x00f78a20(0x3d237b0);
    func_0x00f78a20(0x3d23808);
    func_0x00f78a20(0x3d76be8);
    bRam0000000003eb5839 = 1;
  }
  uVar3 = func_0x00f78aec(/*Core.Networking.NetworkDelegates_TypeInfo*/ uRam0000000003d23700);
  Core_Networking_NetworkDelegates___ctor();
  *(undefined8 *)(lVar7 + 0x10) = uVar3;
  lVar4 = func_0x00f78aec(/*Core.Networking.NetworkMigrationManager_TypeInfo*/ uRam0000000003d23768);
  Core_Networking_NetworkMigrationManager___ctor();
  *(long *)(lVar7 + 0xa0) = lVar4;
  if (lVar4 != 0) {
    Core_Networking_NetworkMigrationManager__Init(lVar4);
    if (*(long *)(lVar7 + 0x58) != 0) {
      uVar3 = /*System.Collections.Generic.List<NetworkPlayer>$$AsReadOnly*/ func_0x02413d60(*(long *)(lVar7 + 0x58),uRam0000000003d3b510);
      *(undefined8 *)(lVar7 + 0x188) = uVar3;
      *(undefined4 *)(lVar7 + 0x1a0) = param_4;
      uVar3 = /*System.String$$Concat*/ func_0x029be39c(auVar8._8_8_,/*STR('_')*/ uRam0000000003d76be8,param_3,0);
      uVar1 = func_0x00f78aec(/*Core.Networking.NetworkSessionId_TypeInfo*/ uRam0000000003d237b0);
      /*Core.Networking.NetworkSessionId$$.ctor*/ func_0x0165d344(uVar1,uVar3);
      *(undefined8 *)(lVar7 + 0x1b0) = uVar1;
      uVar3 = func_0x00f78aec(/*FlatBuffers.FlatBufferBuilder_TypeInfo*/ uRam0000000003d21960);
      /*FlatBuffers.FlatBufferBuilder$$.ctor*/ func_0x016cd72c(uVar3,0x400,0);
      *(undefined8 *)(lVar7 + 0x30) = uVar3;
      uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVoteHistory>_TypeInfo*/ uRam0000000003d1dc68);
      /*System.Collections.Generic.List<NetworkVoteHistory>$$.ctor*/ func_0x024238d4(uVar3,3,uRam0000000003d3b6a8);
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024188d0(uVar1,0xc,uRam0000000003d3b5a0);
      uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024188d0(uVar6,0xc,uRam0000000003d3b5a0);
      uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024188d0(uVar5,0xc,uRam0000000003d3b5a0);
      *(undefined8 *)(lVar7 + 0xd0) = uVar3;
      *(undefined8 *)(lVar7 + 0xd8) = uVar1;
      *(undefined8 *)(lVar7 + 0xe0) = uVar6;
      *(undefined8 *)(lVar7 + 0xe8) = uVar5;
      uVar3 = func_0x00f78aec(/*Core.Networking.NetworkEventResult_TypeInfo*/ uRam0000000003d23710);
      Core_Networking_NetworkEventResult___ctor();
      *(undefined8 *)(lVar7 + 0x170) = uVar3;
      uVar3 = func_0x00f78aec(/*Core.Networking.NetworkVoteUpdate_TypeInfo*/ uRam0000000003d23808);
      /*Core.Networking.NetworkVoteUpdate$$.ctor*/ func_0x0165d38c();
      *(undefined8 *)(lVar7 + 0x178) = uVar3;
      *(undefined8 *)(lVar7 + 0x130) = 0;
      *(undefined8 *)(lVar7 + 0x138) = *(undefined8 *)(lVar7 + 0x1b0);
      *(undefined8 *)(lVar7 + 0x110) = 0;
      *(undefined8 *)(lVar7 + 0x118) = 0;
      *(undefined8 *)(lVar7 + 0x120) = *(undefined8 *)(lVar7 + 0x1b0);
      *(undefined8 *)(lVar7 + 0x128) = 0;
      *(undefined4 *)(lVar7 + 0x1a4) = *(undefined4 *)(lVar7 + 0x1a0);
      return;
    }
  }
  lVar7 = func_0x00f78af4();
  uVar3 = *(undefined8 *)(lVar7 + 0x1b0);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = uVar3;
  return;
}



// ============================================================
// RVA: 0x165cfb0 | Core.Networking.NetworkSession.InitInternal
// ============================================================

void Core_Networking_NetworkSession__InitInternal
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *extraout_x8;
  
  if ((bRam0000000003eb5839 & 1) == 0) {
    func_0x00f78a20(0x3d21960);
    func_0x00f78a20(0x3d3b510);
    func_0x00f78a20(0x3d3b5a0);
    func_0x00f78a20(0x3d3b6a8);
    func_0x00f78a20(0x3d1dc68);
    func_0x00f78a20(0x3d1dc48);
    func_0x00f78a20(0x3d23700);
    func_0x00f78a20(0x3d23710);
    func_0x00f78a20(0x3d23768);
    func_0x00f78a20(0x3d237b0);
    func_0x00f78a20(0x3d23808);
    func_0x00f78a20(0x3d76be8);
    bRam0000000003eb5839 = 1;
  }
  uVar1 = func_0x00f78aec(/*Core.Networking.NetworkDelegates_TypeInfo*/ uRam0000000003d23700);
  Core_Networking_NetworkDelegates___ctor();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  lVar2 = func_0x00f78aec(/*Core.Networking.NetworkMigrationManager_TypeInfo*/ uRam0000000003d23768);
  Core_Networking_NetworkMigrationManager___ctor();
  *(long *)(param_1 + 0xa0) = lVar2;
  if (lVar2 != 0) {
    Core_Networking_NetworkMigrationManager__Init(lVar2);
    if (*(long *)(param_1 + 0x58) != 0) {
      uVar1 = /*System.Collections.Generic.List<NetworkPlayer>$$AsReadOnly*/ func_0x02413d60(*(long *)(param_1 + 0x58),uRam0000000003d3b510);
      *(undefined8 *)(param_1 + 0x188) = uVar1;
      *(undefined4 *)(param_1 + 0x1a0) = param_4;
      uVar1 = /*System.String$$Concat*/ func_0x029be39c(param_2,/*STR('_')*/ uRam0000000003d76be8,param_3,0);
      uVar3 = func_0x00f78aec(/*Core.Networking.NetworkSessionId_TypeInfo*/ uRam0000000003d237b0);
      /*Core.Networking.NetworkSessionId$$.ctor*/ func_0x0165d344(uVar3,uVar1);
      *(undefined8 *)(param_1 + 0x1b0) = uVar3;
      uVar1 = func_0x00f78aec(/*FlatBuffers.FlatBufferBuilder_TypeInfo*/ uRam0000000003d21960);
      /*FlatBuffers.FlatBufferBuilder$$.ctor*/ func_0x016cd72c(uVar1,0x400,0);
      *(undefined8 *)(param_1 + 0x30) = uVar1;
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVoteHistory>_TypeInfo*/ uRam0000000003d1dc68);
      /*System.Collections.Generic.List<NetworkVoteHistory>$$.ctor*/ func_0x024238d4(uVar1,3,uRam0000000003d3b6a8);
      uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024188d0(uVar3,0xc,uRam0000000003d3b5a0);
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024188d0(uVar4,0xc,uRam0000000003d3b5a0);
      uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024188d0(uVar5,0xc,uRam0000000003d3b5a0);
      *(undefined8 *)(param_1 + 0xd0) = uVar1;
      *(undefined8 *)(param_1 + 0xd8) = uVar3;
      *(undefined8 *)(param_1 + 0xe0) = uVar4;
      *(undefined8 *)(param_1 + 0xe8) = uVar5;
      uVar1 = func_0x00f78aec(/*Core.Networking.NetworkEventResult_TypeInfo*/ uRam0000000003d23710);
      Core_Networking_NetworkEventResult___ctor();
      *(undefined8 *)(param_1 + 0x170) = uVar1;
      uVar1 = func_0x00f78aec(/*Core.Networking.NetworkVoteUpdate_TypeInfo*/ uRam0000000003d23808);
      /*Core.Networking.NetworkVoteUpdate$$.ctor*/ func_0x0165d38c();
      *(undefined8 *)(param_1 + 0x178) = uVar1;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x1b0);
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x1b0);
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1a0);
      return;
    }
  }
  lVar2 = func_0x00f78af4();
  uVar1 = *(undefined8 *)(lVar2 + 0x1b0);
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = uVar1;
  return;
}



// ============================================================
// RVA: 0x165d240 | Core.Networking.NetworkSession.CreateInvalidTime
// ============================================================

void Core_Networking_NetworkSession__CreateInvalidTime(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1b0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar1;
  return;
}



// ============================================================
// RVA: 0x165d268 | Core.Networking.NetworkSession.Init
// ============================================================

void Core_Networking_NetworkSession__Init(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  
  if ((bRam0000000003eb5838 & 1) == 0) {
    func_0x00f78a20(0x3d21ce0);
    func_0x00f78a20(0x3d708a0);
    bRam0000000003eb5838 = 1;
  }
  uVar1 = /*System.Environment$$get_TickCount*/ func_0x02aca40c(0);
  *(int *)(param_1 + 0x1a4) = (int)uVar1;
  *(int *)(param_1 + 0x1a8) = (int)uVar1;
  *(undefined1 *)(param_1 + 0x181) = param_2;
  if (((*(byte *)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*System.Guid_TypeInfo*/ lRam0000000003d21ce0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auStack_50 = /*System.Guid$$NewGuid*/ func_0x02adfc04(0);
  uVar2 = /*System.Guid$$ToString*/ func_0x02adeea8(auStack_50,0);
  Core_Networking_NetworkSession__InitInternal(param_1,/*STR('OFFLINE')*/ uRam0000000003d708a0,uVar2,uVar1);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x1b0);
  return;
}



// ============================================================
// RVA: 0x165d410 | Core.Networking.NetworkSession.UpdateNow
// ============================================================

void Core_Networking_NetworkSession__UpdateNow(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_2 + 0x1a4) = param_3;
  uVar2 = *(undefined8 *)(param_2 + 0x1b0);
  uVar1 = *(undefined4 *)(param_2 + 0x1a0);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)param_1 = param_3;
  *(undefined1 *)((long)param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 1) = uVar1;
  param_1[2] = uVar2;
  return;
}



// ============================================================
// RVA: 0x165d438 | Core.Networking.NetworkSession.DeInitDisconnectHandlers
// ============================================================

/* WARNING: Possible PIC construction at 0x0165d7a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165d7ac) */
/* WARNING: Removing unreachable block (ram,0x0165d7b4) */
/* WARNING: Removing unreachable block (ram,0x0165d7dc) */
/* WARNING: Removing unreachable block (ram,0x0165d7e8) */
/* WARNING: Removing unreachable block (ram,0x0165d7f8) */
/* WARNING: Removing unreachable block (ram,0x0165d804) */
/* WARNING: Removing unreachable block (ram,0x0165d808) */
/* WARNING: Removing unreachable block (ram,0x0165d81c) */

void Core_Networking_NetworkSession__DeInitDisconnectHandlers
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *extraout_x8;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *unaff_x23;
  undefined1 auVar13 [16];
  undefined8 auStack_f0 [7];
  long lStack_b8;
  
  if ((bRam0000000003eb583b & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d5ad10);
    bRam0000000003eb583b = 1;
  }
  if ((param_1[5] == 0) || (lVar10 = *(long *)(param_1[5] + 0x30), lVar10 == 0)) {
LAB_0165d598:
    func_0x00f78af4();
  }
  else {
    unaff_x23 = (undefined8 *)0x3d1b410;
    uVar5 = *(undefined8 *)(lVar10 + 0x98);
    uVar1 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar1,param_1,uRam0000000003d5ad10,uRam0000000003d2a018);
    param_3 = 0;
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar1);
    if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) {
      *(long **)(lVar10 + 0x98) = plVar2;
      if ((param_1[5] == 0) || (lVar10 = *(long *)(param_1[5] + 0x30), lVar10 == 0))
      goto LAB_0165d598;
      unaff_x23 = (undefined8 *)0x3d1b548;
      uVar5 = *(undefined8 *)(lVar10 + 0xf8);
      uVar1 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar1,param_1,*(undefined8 *)(*param_1 + 0x260),uRam0000000003d2a290);
      param_3 = 0;
      plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar1);
      if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) {
        *(long **)(lVar10 + 0xf8) = plVar2;
        return;
      }
    }
  }
  auVar13 = func_0x00f78e5c();
  lVar9 = auVar13._8_8_;
  lVar10 = auVar13._0_8_;
  puVar4 = auStack_f0;
  lStack_b8 = *(long *)PTR_03a5d648;
  puVar11 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb583c & 1) == 0) {
    func_0x00f78a20(0x3d21960);
    func_0x00f78a20(0x3d3b510);
    func_0x00f78a20(0x3d3b6a0);
    func_0x00f78a20(0x3d3b4f8);
    func_0x00f78a20(0x3d3b598);
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b548);
    func_0x00f78a20(0x3d3b550);
    func_0x00f78a20(0x3d1dc68);
    func_0x00f78a20(0x3d1dc48);
    func_0x00f78a20(0x3d1dc38);
    func_0x00f78a20(0x3d23808);
    bRam0000000003eb583c = 1;
  }
  *(undefined8 *)(lVar10 + 0x28) = param_3;
  Core_Networking_NetworkSession__InitDisconnectHandlers(lVar10);
  if (lVar9 != 0) {
    unaff_x23 = (undefined8 *)0x3d3b000;
    *(undefined4 *)(lVar10 + 0x1a0) = *(undefined4 *)(lVar9 + 0x1a0);
    *(undefined8 *)(lVar10 + 0x1b0) = *(undefined8 *)(lVar9 + 0x1b0);
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    *(undefined8 *)(lVar10 + 0xa0) = *(undefined8 *)(lVar9 + 0xa0);
    puVar11 = *(undefined8 **)(lVar9 + 0x58);
    lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
    /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412f98(lVar3,puVar11,uRam0000000003d3b4f8);
    *(long *)(lVar10 + 0x58) = lVar3;
    if (lVar3 != 0) {
      uVar1 = /*System.Collections.Generic.List<NetworkPlayer>$$AsReadOnly*/ func_0x02413d60(lVar3,uRam0000000003d3b510);
      *(undefined8 *)(lVar10 + 0x188) = uVar1;
      uVar5 = *(undefined8 *)(lVar9 + 0xd0);
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVoteHistory>_TypeInfo*/ uRam0000000003d1dc68);
      /*System.Collections.Generic.List<NetworkVoteHistory>$$.ctor*/ func_0x024239ec(uVar1,uVar5,uRam0000000003d3b6a0);
      uVar6 = *(undefined8 *)(lVar9 + 0xd8);
      uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(uVar5,uVar6,uRam0000000003d3b598);
      uVar7 = *(undefined8 *)(lVar9 + 0xe0);
      uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(uVar6,uVar7,uRam0000000003d3b598);
      uVar8 = *(undefined8 *)(lVar9 + 0xe8);
      uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(uVar7,uVar8,uRam0000000003d3b598);
      *(undefined8 *)(lVar10 + 0xd0) = uVar1;
      *(undefined8 *)(lVar10 + 0xd8) = uVar5;
      *(undefined8 *)(lVar10 + 0xe0) = uVar6;
      *(undefined8 *)(lVar10 + 0xe8) = uVar7;
      *(undefined1 *)(lVar10 + 0x181) = *(undefined1 *)(lVar9 + 0x181);
      goto code_r0x0165d950;
    }
  }
  func_0x00f78af4();
  /*Core.Networking.NetworkSession$$SortNetworkPlayers*/ func_0x0165da68(lVar10);
  *(undefined1 *)(lVar10 + 0x180) = *(undefined1 *)(lVar9 + 0x180);
  uVar5 = *(undefined8 *)(lVar9 + 0x130);
  uVar1 = *(undefined8 *)(lVar9 + 0x128);
  *(undefined8 *)(lVar10 + 0x138) = *(undefined8 *)(lVar9 + 0x138);
  *(undefined8 *)(lVar10 + 0x130) = uVar5;
  *(undefined8 *)(lVar10 + 0x128) = uVar1;
  uVar5 = *(undefined8 *)(lVar9 + 0x148);
  uVar1 = *(undefined8 *)(lVar9 + 0x140);
  uVar7 = *(undefined8 *)(lVar9 + 0x158);
  uVar6 = *(undefined8 *)(lVar9 + 0x150);
  *(undefined8 *)(lVar10 + 0x160) = *(undefined8 *)(lVar9 + 0x160);
  *(undefined8 *)(lVar10 + 0x148) = uVar5;
  *(undefined8 *)(lVar10 + 0x140) = uVar1;
  *(undefined8 *)(lVar10 + 0x158) = uVar7;
  *(undefined8 *)(lVar10 + 0x150) = uVar6;
  uVar5 = *(undefined8 *)(lVar9 + 0x118);
  uVar1 = *(undefined8 *)(lVar9 + 0x110);
  *(undefined8 *)(lVar10 + 0x120) = *(undefined8 *)(lVar9 + 0x120);
  *(undefined8 *)(lVar10 + 0x118) = uVar5;
  *(undefined8 *)(lVar10 + 0x110) = uVar1;
  *(undefined1 *)(lVar10 + 0x168) = *(undefined1 *)(lVar9 + 0x168);
  *(undefined2 *)(lVar10 + 0x16a) = *(undefined2 *)(lVar9 + 0x16a);
  *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar9 + 0x70);
  *(undefined1 *)(lVar10 + 0xf0) = *(undefined1 *)(lVar9 + 0xf0);
  uVar1 = *(undefined8 *)(lVar9 + 0x80);
  uVar6 = *(undefined8 *)(lVar9 + 0x98);
  uVar5 = *(undefined8 *)(lVar9 + 0x90);
  *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar9 + 0x88);
  *(undefined8 *)(lVar10 + 0x80) = uVar1;
  *(undefined8 *)(lVar10 + 0x98) = uVar6;
  *(undefined8 *)(lVar10 + 0x90) = uVar5;
  uVar1 = func_0x00f78aec(*unaff_x23);
  /*FlatBuffers.FlatBufferBuilder$$.ctor*/ func_0x016cd72c(uVar1,0x400,0);
  *(undefined8 *)(lVar10 + 0x30) = uVar1;
  *(undefined8 *)(lVar10 + 0x170) = *(undefined8 *)(lVar9 + 0x170);
  uVar1 = func_0x00f78aec(*puVar11);
  /*Core.Networking.NetworkVoteUpdate$$.ctor*/ func_0x0165d38c();
  *(undefined8 *)(lVar10 + 0x178) = uVar1;
  *(undefined4 *)(lVar10 + 0x1a4) = *(undefined4 *)(lVar10 + 0x1a0);
  if (*(long *)PTR_03a5d648 == lStack_b8) {
    return;
  }
  lVar10 = ___stack_chk_fail();
  puVar4 = extraout_x8;
code_r0x0165d950:
  if ((bRam0000000003eb5845 & 1) == 0) {
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b548);
    bRam0000000003eb5845 = 1;
  }
  uVar12 = *(uint *)(lVar10 + 0x198);
  lVar9 = *(long *)(lVar10 + 0x58);
  if (uVar12 == 0xffffffff) {
    if (lVar9 != 0) {
      lVar3 = 0;
      uVar12 = 0;
      do {
        if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar12) goto code_r0x0165da18;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(int *)(*(long *)(lVar9 + 0x10) + lVar3 + 0x28) == 0) {
          *(uint *)(lVar10 + 0x198) = uVar12;
          lVar10 = *(long *)(lVar10 + 0x58);
          if (lVar10 != 0) {
            if (*(uint *)(lVar10 + 0x18) <= uVar12) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar3 = *(long *)(lVar10 + 0x10) + lVar3;
            goto code_r0x0165da4c;
          }
          break;
        }
        uVar12 = uVar12 + 1;
        lVar9 = *(long *)(lVar10 + 0x58);
        lVar3 = lVar3 + 0x20;
      } while (lVar9 != 0);
    }
  }
  else if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) <= uVar12) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar3 = *(long *)(lVar9 + 0x10) + (long)(int)uVar12 * 0x20;
code_r0x0165da4c:
    uVar1 = *(undefined8 *)(lVar3 + 0x20);
    uVar6 = *(undefined8 *)(lVar3 + 0x38);
    uVar5 = *(undefined8 *)(lVar3 + 0x30);
    puVar4[1] = *(undefined8 *)(lVar3 + 0x28);
    *puVar4 = uVar1;
    puVar4[3] = uVar6;
    puVar4[2] = uVar5;
    return;
  }
  func_0x00f78af4();
code_r0x0165da18:
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  return;
}



// ============================================================
// RVA: 0x165d5a0 | Core.Networking.NetworkSession.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x0165d7a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165d7ac) */
/* WARNING: Removing unreachable block (ram,0x0165d7b4) */
/* WARNING: Removing unreachable block (ram,0x0165d7dc) */
/* WARNING: Removing unreachable block (ram,0x0165d7e8) */
/* WARNING: Removing unreachable block (ram,0x0165d7f8) */
/* WARNING: Removing unreachable block (ram,0x0165d804) */
/* WARNING: Removing unreachable block (ram,0x0165d808) */
/* WARNING: Removing unreachable block (ram,0x0165d81c) */

void Core_Networking_NetworkSession__Init(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *extraout_x8;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  undefined8 *unaff_x23;
  undefined8 auStack_a0 [7];
  long lStack_68;
  
  puVar3 = auStack_a0;
  lStack_68 = *(long *)PTR_03a5d648;
  puVar8 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb583c & 1) == 0) {
    func_0x00f78a20(0x3d21960);
    func_0x00f78a20(0x3d3b510);
    func_0x00f78a20(0x3d3b6a0);
    func_0x00f78a20(0x3d3b4f8);
    func_0x00f78a20(0x3d3b598);
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b548);
    func_0x00f78a20(0x3d3b550);
    func_0x00f78a20(0x3d1dc68);
    func_0x00f78a20(0x3d1dc48);
    func_0x00f78a20(0x3d1dc38);
    func_0x00f78a20(0x3d23808);
    bRam0000000003eb583c = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = param_3;
  Core_Networking_NetworkSession__InitDisconnectHandlers(param_1);
  if (param_2 != 0) {
    unaff_x23 = (undefined8 *)0x3d3b000;
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    puVar8 = *(undefined8 **)(param_2 + 0x58);
    lVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
    /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412f98(lVar1,puVar8,uRam0000000003d3b4f8);
    *(long *)(param_1 + 0x58) = lVar1;
    if (lVar1 != 0) {
      uVar2 = /*System.Collections.Generic.List<NetworkPlayer>$$AsReadOnly*/ func_0x02413d60(lVar1,uRam0000000003d3b510);
      *(undefined8 *)(param_1 + 0x188) = uVar2;
      uVar4 = *(undefined8 *)(param_2 + 0xd0);
      uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVoteHistory>_TypeInfo*/ uRam0000000003d1dc68);
      /*System.Collections.Generic.List<NetworkVoteHistory>$$.ctor*/ func_0x024239ec(uVar2,uVar4,uRam0000000003d3b6a0);
      uVar5 = *(undefined8 *)(param_2 + 0xd8);
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(uVar4,uVar5,uRam0000000003d3b598);
      uVar6 = *(undefined8 *)(param_2 + 0xe0);
      uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(uVar5,uVar6,uRam0000000003d3b598);
      uVar7 = *(undefined8 *)(param_2 + 0xe8);
      uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(uVar6,uVar7,uRam0000000003d3b598);
      *(undefined8 *)(param_1 + 0xd0) = uVar2;
      *(undefined8 *)(param_1 + 0xd8) = uVar4;
      *(undefined8 *)(param_1 + 0xe0) = uVar5;
      *(undefined8 *)(param_1 + 0xe8) = uVar6;
      *(undefined1 *)(param_1 + 0x181) = *(undefined1 *)(param_2 + 0x181);
      goto code_r0x0165d950;
    }
  }
  func_0x00f78af4();
  /*Core.Networking.NetworkSession$$SortNetworkPlayers*/ func_0x0165da68(param_1);
  *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(param_2 + 0x180);
  uVar4 = *(undefined8 *)(param_2 + 0x130);
  uVar2 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = uVar4;
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x148);
  uVar2 = *(undefined8 *)(param_2 + 0x140);
  uVar6 = *(undefined8 *)(param_2 + 0x158);
  uVar5 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x148) = uVar4;
  *(undefined8 *)(param_1 + 0x140) = uVar2;
  *(undefined8 *)(param_1 + 0x158) = uVar6;
  *(undefined8 *)(param_1 + 0x150) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x118);
  uVar2 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
  *(undefined2 *)(param_1 + 0x16a) = *(undefined2 *)(param_2 + 0x16a);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  uVar5 = *(undefined8 *)(param_2 + 0x98);
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  uVar2 = func_0x00f78aec(*unaff_x23);
  /*FlatBuffers.FlatBufferBuilder$$.ctor*/ func_0x016cd72c(uVar2,0x400,0);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  uVar2 = func_0x00f78aec(*puVar8);
  /*Core.Networking.NetworkVoteUpdate$$.ctor*/ func_0x0165d38c();
  *(undefined8 *)(param_1 + 0x178) = uVar2;
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x1a0);
  if (*(long *)PTR_03a5d648 == lStack_68) {
    return;
  }
  param_1 = ___stack_chk_fail();
  puVar3 = extraout_x8;
code_r0x0165d950:
  if ((bRam0000000003eb5845 & 1) == 0) {
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b548);
    bRam0000000003eb5845 = 1;
  }
  uVar10 = *(uint *)(param_1 + 0x198);
  lVar1 = *(long *)(param_1 + 0x58);
  if (uVar10 == 0xffffffff) {
    if (lVar1 != 0) {
      lVar9 = 0;
      uVar10 = 0;
      do {
        if ((int)*(uint *)(lVar1 + 0x18) <= (int)uVar10) goto code_r0x0165da18;
        if (*(uint *)(lVar1 + 0x18) <= uVar10) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(int *)(*(long *)(lVar1 + 0x10) + lVar9 + 0x28) == 0) {
          *(uint *)(param_1 + 0x198) = uVar10;
          lVar1 = *(long *)(param_1 + 0x58);
          if (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x18) <= uVar10) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar9 = *(long *)(lVar1 + 0x10) + lVar9;
            goto code_r0x0165da4c;
          }
          break;
        }
        uVar10 = uVar10 + 1;
        lVar1 = *(long *)(param_1 + 0x58);
        lVar9 = lVar9 + 0x20;
      } while (lVar1 != 0);
    }
  }
  else if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= uVar10) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar9 = *(long *)(lVar1 + 0x10) + (long)(int)uVar10 * 0x20;
code_r0x0165da4c:
    uVar2 = *(undefined8 *)(lVar9 + 0x20);
    uVar5 = *(undefined8 *)(lVar9 + 0x38);
    uVar4 = *(undefined8 *)(lVar9 + 0x30);
    puVar3[1] = *(undefined8 *)(lVar9 + 0x28);
    *puVar3 = uVar2;
    puVar3[3] = uVar5;
    puVar3[2] = uVar4;
    return;
  }
  func_0x00f78af4();
code_r0x0165da18:
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  return;
}



// ============================================================
// RVA: 0x165d950 | Core.Networking.NetworkSession.GetLocalPlayer
// ============================================================

void Core_Networking_NetworkSession__GetLocalPlayer(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((bRam0000000003eb5845 & 1) == 0) {
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b548);
    bRam0000000003eb5845 = 1;
  }
  uVar3 = *(uint *)(param_2 + 0x198);
  lVar1 = *(long *)(param_2 + 0x58);
  if (uVar3 == 0xffffffff) {
    if (lVar1 != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        if ((int)*(uint *)(lVar1 + 0x18) <= (int)uVar3) goto code_r0x0165da18;
        if (*(uint *)(lVar1 + 0x18) <= uVar3) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(int *)(*(long *)(lVar1 + 0x10) + lVar2 + 0x28) == 0) {
          *(uint *)(param_2 + 0x198) = uVar3;
          lVar1 = *(long *)(param_2 + 0x58);
          if (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x18) <= uVar3) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar2 = *(long *)(lVar1 + 0x10) + lVar2;
            goto LAB_0165da4c;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        lVar1 = *(long *)(param_2 + 0x58);
        lVar2 = lVar2 + 0x20;
      } while (lVar1 != 0);
    }
  }
  else if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar2 = *(long *)(lVar1 + 0x10) + (long)(int)uVar3 * 0x20;
LAB_0165da4c:
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar6 = *(undefined8 *)(lVar2 + 0x38);
    uVar5 = *(undefined8 *)(lVar2 + 0x30);
    param_1[1] = *(undefined8 *)(lVar2 + 0x28);
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    return;
  }
  func_0x00f78af4();
code_r0x0165da18:
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



// ============================================================
// RVA: 0x165da68 | Core.Networking.NetworkSession.SortNetworkPlayers
// ============================================================

void Core_Networking_NetworkSession__SortNetworkPlayers
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int extraout_w1;
  undefined8 *extraout_x8;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x21;
  undefined8 *puVar11;
  undefined8 *unaff_x22;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_1b0;
  int iStack_1a8;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  long lStack_178;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb584e & 1) == 0) {
    func_0x00f78a20(0x3d32b60);
    func_0x00f78a20(0x3d32b68);
    func_0x00f78a20(0x3d32b70);
    func_0x00f78a20(0x3d35af8);
    func_0x00f78a20(0x3d1cd78);
    func_0x00f78a20(0x3d5a0a8);
    func_0x00f78a20(0x3d5a0b8);
    func_0x00f78a20(0x3d5a0c8);
    func_0x00f78a20(0x3d3b508);
    func_0x00f78a20(0x3d3b518);
    func_0x00f78a20(0x3d3b530);
    func_0x00f78a20(0x3d63888);
    func_0x00f78a20(0x3d282e8);
    bRam0000000003eb584e = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (*(long *)(param_1 + 400) != 0) {
    /*System.Collections.Generic.List<NetworkPlayer>$$Clear*/ func_0x02413dcc(*(long *)(param_1 + 400),uRam0000000003d3b518);
    if (*(long *)(param_1 + 0x58) != 0) {
      unaff_x21 = (undefined8 *)0x3d5a0a8;
      unaff_x22 = (undefined8 *)0x3d5a0b8;
      unaff_x26 = (long *)0x3d282e8;
      unaff_x25 = (undefined8 *)0x3d5a0c8;
      /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620(&uStack_b0,*(long *)(param_1 + 0x58),uRam0000000003d3b530);
      while (uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8(&uStack_b0,uRam0000000003d32b68), (uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 400) == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x165dcec);
          (*pcVar1)();
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        uStack_68 = uStack_88;
        uStack_70 = uStack_90;
        /*System.Collections.Generic.List<NetworkPlayer>$$Add*/ func_0x02413ab4(*(long *)(param_1 + 400),&uStack_80,uRam0000000003d3b508);
      }
      /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_b0,uRam0000000003d32b60);
      goto code_r0x0165dbf8;
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar6 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_b0,*unaff_x23);
    if (lVar6 == 0) {
code_r0x0165dbf8:
      auVar18 = Core_Containers_ListIteratorExtensions__Begin_NetworkPlayer_
                          (*(undefined8 *)(param_1 + 400),*unaff_x21);
      auVar19 = Core_Containers_ListIteratorExtensions__End_NetworkPlayer_
                          (*(undefined8 *)(param_1 + 400),*unaff_x22);
      lVar6 = *unaff_x26;
      if (((*(ushort *)(lVar6 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar6 = *unaff_x26;
      }
      puVar8 = *(undefined8 **)(lVar6 + 0xb8);
      lVar14 = puVar8[1];
      if (lVar14 == 0) {
        if (((*(ushort *)(lVar6 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
          func_0x00f78ad0();
          puVar8 = *(undefined8 **)(*unaff_x26 + 0xb8);
        }
        uVar16 = *puVar8;
        lVar14 = func_0x00f78aec(/*System.Func<NetworkPlayer, NetworkPlayer, bool>_TypeInfo*/ uRam0000000003d1cd78);
        /*System.Func<NetworkPlayer, NetworkPlayer, bool>$$.ctor*/ func_0x02182c40(lVar14,uVar16,uRam0000000003d63888,uRam0000000003d35af8);
        *(long *)(*(long *)(*unaff_x26 + 0xb8) + 8) = lVar14;
      }
      Core_Containers_ListIteratorExtensions__Sort_NetworkPlayer_
                (auVar18._0_8_,auVar18._8_8_,auVar19._0_8_,auVar19._8_8_,lVar14,*unaff_x25);
      return;
    }
    func_0x00f78ac0(lVar6,0);
  }
  lVar6 = __Unwind_Resume();
  plVar7 = *(long **)(lVar6 + 0x1b0);
  if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0165dd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    return;
  }
  plVar7 = (long *)func_0x00f78af4();
  plVar7[2] = 0;
  if ((plVar7[4] != 0) && (Core_Networking_NetworkServicesInput__DeInit(), plVar7[4] != 0)) {
    Core_Networking_NetworkServicesInput__Clear();
  }
  if ((plVar7[5] == 0) || (*(long *)(plVar7[5] + 0x30) == 0)) {
    return;
  }
  if ((bRam0000000003eb583b & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d5ad10);
    bRam0000000003eb583b = 1;
  }
  if ((plVar7[5] != 0) && (lVar6 = *(long *)(plVar7[5] + 0x30), lVar6 != 0)) {
    unaff_x23 = (undefined8 *)0x3d1b410;
    uVar9 = *(undefined8 *)(lVar6 + 0x98);
    uVar16 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar16,plVar7,uRam0000000003d5ad10,uRam0000000003d2a018);
    param_3 = 0;
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar16);
    if ((plVar2 != (long *)0x0) && (*plVar2 != /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) goto LAB_0165d59c;
    *(long **)(lVar6 + 0x98) = plVar2;
    if ((plVar7[5] != 0) && (lVar6 = *(long *)(plVar7[5] + 0x30), lVar6 != 0)) {
      unaff_x23 = (undefined8 *)0x3d1b548;
      uVar9 = *(undefined8 *)(lVar6 + 0xf8);
      uVar16 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar16,plVar7,*(undefined8 *)(*plVar7 + 0x260),uRam0000000003d2a290);
      param_3 = 0;
      plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar16);
      if ((plVar7 == (long *)0x0) || (*plVar7 == /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) {
        *(long **)(lVar6 + 0xf8) = plVar7;
        return;
      }
      goto LAB_0165d59c;
    }
  }
  func_0x00f78af4();
LAB_0165d59c:
  auVar18 = func_0x00f78e5c();
  lVar14 = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  lStack_178 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb583c & 1) == 0) {
    func_0x00f78a20(0x3d21960);
    func_0x00f78a20(0x3d3b510);
    func_0x00f78a20(0x3d3b6a0);
    func_0x00f78a20(0x3d3b4f8);
    func_0x00f78a20(0x3d3b598);
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b548);
    func_0x00f78a20(0x3d3b550);
    func_0x00f78a20(0x3d1dc68);
    func_0x00f78a20(0x3d1dc48);
    func_0x00f78a20(0x3d1dc38);
    func_0x00f78a20(0x3d23808);
    bRam0000000003eb583c = 1;
  }
  *(undefined8 *)(lVar6 + 0x28) = param_3;
  Core_Networking_NetworkSession__InitDisconnectHandlers(lVar6);
  puVar8 = (undefined8 *)0x3eb5000;
  if (lVar14 != 0) {
    *(undefined4 *)(lVar6 + 0x1a0) = *(undefined4 *)(lVar14 + 0x1a0);
    *(undefined8 *)(lVar6 + 0x1b0) = *(undefined8 *)(lVar14 + 0x1b0);
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar14 + 0x10);
    *(undefined8 *)(lVar6 + 0xa0) = *(undefined8 *)(lVar14 + 0xa0);
    puVar8 = *(undefined8 **)(lVar14 + 0x58);
    lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
    /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412f98(lVar3,puVar8,uRam0000000003d3b4f8);
    *(long *)(lVar6 + 0x58) = lVar3;
    unaff_x23 = (undefined8 *)0x3d3b000;
    if (lVar3 != 0) {
      uVar16 = /*System.Collections.Generic.List<NetworkPlayer>$$AsReadOnly*/ func_0x02413d60(lVar3,uRam0000000003d3b510);
      *(undefined8 *)(lVar6 + 0x188) = uVar16;
      uVar16 = *(undefined8 *)(lVar14 + 0xd0);
      puVar8 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<NetworkVoteHistory>_TypeInfo*/ uRam0000000003d1dc68);
      /*System.Collections.Generic.List<NetworkVoteHistory>$$.ctor*/ func_0x024239ec(puVar8,uVar16,uRam0000000003d3b6a0);
      uVar16 = *(undefined8 *)(lVar14 + 0xd8);
      unaff_x23 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(unaff_x23,uVar16,uRam0000000003d3b598);
      uVar9 = *(undefined8 *)(lVar14 + 0xe0);
      uVar16 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(uVar16,uVar9,uRam0000000003d3b598);
      uVar10 = *(undefined8 *)(lVar14 + 0xe8);
      uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(uVar9,uVar10,uRam0000000003d3b598);
      *(undefined8 **)(lVar6 + 0xd0) = puVar8;
      *(undefined8 **)(lVar6 + 0xd8) = unaff_x23;
      *(undefined8 *)(lVar6 + 0xe0) = uVar16;
      *(undefined8 *)(lVar6 + 0xe8) = uVar9;
      *(undefined1 *)(lVar6 + 0x181) = *(undefined1 *)(lVar14 + 0x181);
      Core_Networking_NetworkSession__GetLocalPlayer(&uStack_1b0,lVar6);
      lVar3 = *(long *)(lVar6 + 0x58);
      if (lVar3 != 0) {
        lVar15 = 0;
        uVar5 = 0;
        puVar13 = (undefined8 *)0x3d21960;
        puVar11 = (undefined8 *)0x3d23808;
        do {
          if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar5) goto LAB_0165d864;
          lVar4 = lVar3;
          if (*(uint *)(lVar3 + 0x18) <= uVar5) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar4 = *(long *)(lVar6 + 0x58);
          }
          puVar8 = puVar11;
          unaff_x23 = puVar13;
          if (lVar4 == 0) break;
          lVar3 = *(long *)(lVar3 + 0x10) + lVar15;
          uStack_1b0 = *(undefined8 *)(lVar3 + 0x20);
          iStack_1a8 = 2;
          if (*(int *)(lVar3 + 0x28) != 3) {
            iStack_1a8 = *(int *)(lVar3 + 0x28);
          }
          uStack_19c = *(undefined8 *)(lVar3 + 0x34);
          uStack_1a4 = *(undefined8 *)(lVar3 + 0x2c);
          uStack_194 = *(undefined4 *)(lVar3 + 0x3c);
          uStack_190 = uStack_1a4;
          uStack_188 = uStack_19c;
          uStack_180 = uStack_194;
          /*System.Collections.Generic.List<NetworkPlayer>$$set_Item*/ func_0x02413744(lVar4,uVar5,&uStack_1b0,uRam0000000003d3b550);
          uVar5 = uVar5 + 1;
          lVar3 = *(long *)(lVar6 + 0x58);
          lVar15 = lVar15 + 0x20;
          puVar8 = (undefined8 *)0x3d23808;
          unaff_x23 = (undefined8 *)0x3d21960;
        } while (lVar3 != 0);
      }
    }
  }
  puVar13 = unaff_x23;
  puVar11 = puVar8;
  func_0x00f78af4();
LAB_0165d864:
  Core_Networking_NetworkSession__SortNetworkPlayers(lVar6);
  *(undefined1 *)(lVar6 + 0x180) = *(undefined1 *)(lVar14 + 0x180);
  uVar9 = *(undefined8 *)(lVar14 + 0x130);
  uVar16 = *(undefined8 *)(lVar14 + 0x128);
  *(undefined8 *)(lVar6 + 0x138) = *(undefined8 *)(lVar14 + 0x138);
  *(undefined8 *)(lVar6 + 0x130) = uVar9;
  *(undefined8 *)(lVar6 + 0x128) = uVar16;
  uVar9 = *(undefined8 *)(lVar14 + 0x148);
  uVar16 = *(undefined8 *)(lVar14 + 0x140);
  uVar17 = *(undefined8 *)(lVar14 + 0x158);
  uVar10 = *(undefined8 *)(lVar14 + 0x150);
  *(undefined8 *)(lVar6 + 0x160) = *(undefined8 *)(lVar14 + 0x160);
  *(undefined8 *)(lVar6 + 0x148) = uVar9;
  *(undefined8 *)(lVar6 + 0x140) = uVar16;
  *(undefined8 *)(lVar6 + 0x158) = uVar17;
  *(undefined8 *)(lVar6 + 0x150) = uVar10;
  uVar9 = *(undefined8 *)(lVar14 + 0x118);
  uVar16 = *(undefined8 *)(lVar14 + 0x110);
  *(undefined8 *)(lVar6 + 0x120) = *(undefined8 *)(lVar14 + 0x120);
  *(undefined8 *)(lVar6 + 0x118) = uVar9;
  *(undefined8 *)(lVar6 + 0x110) = uVar16;
  *(undefined1 *)(lVar6 + 0x168) = *(undefined1 *)(lVar14 + 0x168);
  *(undefined2 *)(lVar6 + 0x16a) = *(undefined2 *)(lVar14 + 0x16a);
  *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar14 + 0x70);
  *(undefined1 *)(lVar6 + 0xf0) = *(undefined1 *)(lVar14 + 0xf0);
  uVar16 = *(undefined8 *)(lVar14 + 0x80);
  uVar10 = *(undefined8 *)(lVar14 + 0x98);
  uVar9 = *(undefined8 *)(lVar14 + 0x90);
  *(undefined8 *)(lVar6 + 0x88) = *(undefined8 *)(lVar14 + 0x88);
  *(undefined8 *)(lVar6 + 0x80) = uVar16;
  *(undefined8 *)(lVar6 + 0x98) = uVar10;
  *(undefined8 *)(lVar6 + 0x90) = uVar9;
  uVar16 = func_0x00f78aec(*puVar13);
  /*FlatBuffers.FlatBufferBuilder$$.ctor*/ func_0x016cd72c(uVar16,0x400,0);
  *(undefined8 *)(lVar6 + 0x30) = uVar16;
  *(undefined8 *)(lVar6 + 0x170) = *(undefined8 *)(lVar14 + 0x170);
  uVar16 = func_0x00f78aec(*puVar11);
  /*Core.Networking.NetworkVoteUpdate$$.ctor*/ func_0x0165d38c();
  *(undefined8 *)(lVar6 + 0x178) = uVar16;
  *(undefined4 *)(lVar6 + 0x1a4) = *(undefined4 *)(lVar6 + 0x1a0);
  if (*(long *)PTR_03a5d648 == lStack_178) {
    return;
  }
  lVar6 = ___stack_chk_fail();
  if ((bRam0000000003eb5845 & 1) == 0) {
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b548);
    bRam0000000003eb5845 = 1;
  }
  uVar12 = *(uint *)(lVar6 + 0x198);
  lVar14 = *(long *)(lVar6 + 0x58);
  if (uVar12 == 0xffffffff) {
    if (lVar14 != 0) {
      lVar3 = 0;
      uVar12 = 0;
      do {
        if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar12) goto code_r0x0165da18;
        if (*(uint *)(lVar14 + 0x18) <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(int *)(*(long *)(lVar14 + 0x10) + lVar3 + 0x28) == 0) {
          *(uint *)(lVar6 + 0x198) = uVar12;
          lVar6 = *(long *)(lVar6 + 0x58);
          if (lVar6 != 0) {
            if (*(uint *)(lVar6 + 0x18) <= uVar12) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar3 = *(long *)(lVar6 + 0x10) + lVar3;
            goto LAB_0165da4c;
          }
          break;
        }
        uVar12 = uVar12 + 1;
        lVar14 = *(long *)(lVar6 + 0x58);
        lVar3 = lVar3 + 0x20;
      } while (lVar14 != 0);
    }
  }
  else if (lVar14 != 0) {
    if (*(uint *)(lVar14 + 0x18) <= uVar12) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar3 = *(long *)(lVar14 + 0x10) + (long)(int)uVar12 * 0x20;
LAB_0165da4c:
    uVar16 = *(undefined8 *)(lVar3 + 0x20);
    uVar10 = *(undefined8 *)(lVar3 + 0x38);
    uVar9 = *(undefined8 *)(lVar3 + 0x30);
    extraout_x8[1] = *(undefined8 *)(lVar3 + 0x28);
    *extraout_x8 = uVar16;
    extraout_x8[3] = uVar10;
    extraout_x8[2] = uVar9;
    return;
  }
  func_0x00f78af4();
code_r0x0165da18:
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  return;
}



// ============================================================
// RVA: 0x165dd2c | Core.Networking.NetworkSession.ToString
// ============================================================

void Core_Networking_NetworkSession__ToString(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *extraout_x8;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x23;
  long lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_100;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  long lStack_c8;
  
  plVar5 = *(long **)(param_1 + 0x1b0);
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0165dd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    return;
  }
  plVar5 = (long *)func_0x00f78af4();
  plVar5[2] = 0;
  if ((plVar5[4] != 0) && (Core_Networking_NetworkServicesInput__DeInit(), plVar5[4] != 0)) {
    Core_Networking_NetworkServicesInput__Clear();
  }
  if ((plVar5[5] == 0) || (*(long *)(plVar5[5] + 0x30) == 0)) {
    return;
  }
  if ((bRam0000000003eb583b & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d5ad10);
    bRam0000000003eb583b = 1;
  }
  if ((plVar5[5] != 0) && (lVar10 = *(long *)(plVar5[5] + 0x30), lVar10 != 0)) {
    unaff_x23 = (undefined8 *)0x3d1b410;
    uVar6 = *(undefined8 *)(lVar10 + 0x98);
    uVar1 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar1,plVar5,uRam0000000003d5ad10,uRam0000000003d2a018);
    param_3 = 0;
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar1);
    if ((plVar2 != (long *)0x0) && (*plVar2 != /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) goto LAB_0165d59c;
    *(long **)(lVar10 + 0x98) = plVar2;
    if ((plVar5[5] != 0) && (lVar10 = *(long *)(plVar5[5] + 0x30), lVar10 != 0)) {
      unaff_x23 = (undefined8 *)0x3d1b548;
      uVar6 = *(undefined8 *)(lVar10 + 0xf8);
      uVar1 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar1,plVar5,*(undefined8 *)(*plVar5 + 0x260),uRam0000000003d2a290);
      param_3 = 0;
      plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar1);
      if ((plVar5 == (long *)0x0) || (*plVar5 == /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) {
        *(long **)(lVar10 + 0xf8) = plVar5;
        return;
      }
      goto LAB_0165d59c;
    }
  }
  func_0x00f78af4();
LAB_0165d59c:
  auVar17 = func_0x00f78e5c();
  lVar9 = auVar17._8_8_;
  lVar10 = auVar17._0_8_;
  lStack_c8 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb583c & 1) == 0) {
    func_0x00f78a20(0x3d21960);
    func_0x00f78a20(0x3d3b510);
    func_0x00f78a20(0x3d3b6a0);
    func_0x00f78a20(0x3d3b4f8);
    func_0x00f78a20(0x3d3b598);
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b548);
    func_0x00f78a20(0x3d3b550);
    func_0x00f78a20(0x3d1dc68);
    func_0x00f78a20(0x3d1dc48);
    func_0x00f78a20(0x3d1dc38);
    func_0x00f78a20(0x3d23808);
    bRam0000000003eb583c = 1;
  }
  *(undefined8 *)(lVar10 + 0x28) = param_3;
  Core_Networking_NetworkSession__InitDisconnectHandlers(lVar10);
  puVar11 = (undefined8 *)0x3eb5000;
  if (lVar9 != 0) {
    *(undefined4 *)(lVar10 + 0x1a0) = *(undefined4 *)(lVar9 + 0x1a0);
    *(undefined8 *)(lVar10 + 0x1b0) = *(undefined8 *)(lVar9 + 0x1b0);
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    *(undefined8 *)(lVar10 + 0xa0) = *(undefined8 *)(lVar9 + 0xa0);
    puVar11 = *(undefined8 **)(lVar9 + 0x58);
    lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
    /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412f98(lVar3,puVar11,uRam0000000003d3b4f8);
    *(long *)(lVar10 + 0x58) = lVar3;
    unaff_x23 = (undefined8 *)0x3d3b000;
    if (lVar3 != 0) {
      uVar1 = /*System.Collections.Generic.List<NetworkPlayer>$$AsReadOnly*/ func_0x02413d60(lVar3,uRam0000000003d3b510);
      *(undefined8 *)(lVar10 + 0x188) = uVar1;
      uVar1 = *(undefined8 *)(lVar9 + 0xd0);
      puVar11 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<NetworkVoteHistory>_TypeInfo*/ uRam0000000003d1dc68);
      /*System.Collections.Generic.List<NetworkVoteHistory>$$.ctor*/ func_0x024239ec(puVar11,uVar1,uRam0000000003d3b6a0);
      uVar1 = *(undefined8 *)(lVar9 + 0xd8);
      unaff_x23 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(unaff_x23,uVar1,uRam0000000003d3b598);
      uVar6 = *(undefined8 *)(lVar9 + 0xe0);
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(uVar1,uVar6,uRam0000000003d3b598);
      uVar7 = *(undefined8 *)(lVar9 + 0xe8);
      uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(uVar6,uVar7,uRam0000000003d3b598);
      *(undefined8 **)(lVar10 + 0xd0) = puVar11;
      *(undefined8 **)(lVar10 + 0xd8) = unaff_x23;
      *(undefined8 *)(lVar10 + 0xe0) = uVar1;
      *(undefined8 *)(lVar10 + 0xe8) = uVar6;
      *(undefined1 *)(lVar10 + 0x181) = *(undefined1 *)(lVar9 + 0x181);
      Core_Networking_NetworkSession__GetLocalPlayer(&uStack_100,lVar10);
      lVar3 = *(long *)(lVar10 + 0x58);
      if (lVar3 != 0) {
        lVar15 = 0;
        uVar8 = 0;
        puVar14 = (undefined8 *)0x3d21960;
        puVar12 = (undefined8 *)0x3d23808;
        do {
          if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar8) goto LAB_0165d864;
          lVar4 = lVar3;
          if (*(uint *)(lVar3 + 0x18) <= uVar8) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar4 = *(long *)(lVar10 + 0x58);
          }
          puVar11 = puVar12;
          unaff_x23 = puVar14;
          if (lVar4 == 0) break;
          lVar3 = *(long *)(lVar3 + 0x10) + lVar15;
          uStack_100 = *(undefined8 *)(lVar3 + 0x20);
          iStack_f8 = 2;
          if (*(int *)(lVar3 + 0x28) != 3) {
            iStack_f8 = *(int *)(lVar3 + 0x28);
          }
          uStack_ec = *(undefined8 *)(lVar3 + 0x34);
          uStack_f4 = *(undefined8 *)(lVar3 + 0x2c);
          uStack_e4 = *(undefined4 *)(lVar3 + 0x3c);
          uStack_e0 = uStack_f4;
          uStack_d8 = uStack_ec;
          uStack_d0 = uStack_e4;
          /*System.Collections.Generic.List<NetworkPlayer>$$set_Item*/ func_0x02413744(lVar4,uVar8,&uStack_100,uRam0000000003d3b550);
          uVar8 = uVar8 + 1;
          lVar3 = *(long *)(lVar10 + 0x58);
          lVar15 = lVar15 + 0x20;
          puVar11 = (undefined8 *)0x3d23808;
          unaff_x23 = (undefined8 *)0x3d21960;
        } while (lVar3 != 0);
      }
    }
  }
  puVar14 = unaff_x23;
  puVar12 = puVar11;
  func_0x00f78af4();
LAB_0165d864:
  Core_Networking_NetworkSession__SortNetworkPlayers(lVar10);
  *(undefined1 *)(lVar10 + 0x180) = *(undefined1 *)(lVar9 + 0x180);
  uVar6 = *(undefined8 *)(lVar9 + 0x130);
  uVar1 = *(undefined8 *)(lVar9 + 0x128);
  *(undefined8 *)(lVar10 + 0x138) = *(undefined8 *)(lVar9 + 0x138);
  *(undefined8 *)(lVar10 + 0x130) = uVar6;
  *(undefined8 *)(lVar10 + 0x128) = uVar1;
  uVar6 = *(undefined8 *)(lVar9 + 0x148);
  uVar1 = *(undefined8 *)(lVar9 + 0x140);
  uVar16 = *(undefined8 *)(lVar9 + 0x158);
  uVar7 = *(undefined8 *)(lVar9 + 0x150);
  *(undefined8 *)(lVar10 + 0x160) = *(undefined8 *)(lVar9 + 0x160);
  *(undefined8 *)(lVar10 + 0x148) = uVar6;
  *(undefined8 *)(lVar10 + 0x140) = uVar1;
  *(undefined8 *)(lVar10 + 0x158) = uVar16;
  *(undefined8 *)(lVar10 + 0x150) = uVar7;
  uVar6 = *(undefined8 *)(lVar9 + 0x118);
  uVar1 = *(undefined8 *)(lVar9 + 0x110);
  *(undefined8 *)(lVar10 + 0x120) = *(undefined8 *)(lVar9 + 0x120);
  *(undefined8 *)(lVar10 + 0x118) = uVar6;
  *(undefined8 *)(lVar10 + 0x110) = uVar1;
  *(undefined1 *)(lVar10 + 0x168) = *(undefined1 *)(lVar9 + 0x168);
  *(undefined2 *)(lVar10 + 0x16a) = *(undefined2 *)(lVar9 + 0x16a);
  *(undefined8 *)(lVar10 + 0x70) = *(undefined8 *)(lVar9 + 0x70);
  *(undefined1 *)(lVar10 + 0xf0) = *(undefined1 *)(lVar9 + 0xf0);
  uVar1 = *(undefined8 *)(lVar9 + 0x80);
  uVar7 = *(undefined8 *)(lVar9 + 0x98);
  uVar6 = *(undefined8 *)(lVar9 + 0x90);
  *(undefined8 *)(lVar10 + 0x88) = *(undefined8 *)(lVar9 + 0x88);
  *(undefined8 *)(lVar10 + 0x80) = uVar1;
  *(undefined8 *)(lVar10 + 0x98) = uVar7;
  *(undefined8 *)(lVar10 + 0x90) = uVar6;
  uVar1 = func_0x00f78aec(*puVar14);
  /*FlatBuffers.FlatBufferBuilder$$.ctor*/ func_0x016cd72c(uVar1,0x400,0);
  *(undefined8 *)(lVar10 + 0x30) = uVar1;
  *(undefined8 *)(lVar10 + 0x170) = *(undefined8 *)(lVar9 + 0x170);
  uVar1 = func_0x00f78aec(*puVar12);
  /*Core.Networking.NetworkVoteUpdate$$.ctor*/ func_0x0165d38c();
  *(undefined8 *)(lVar10 + 0x178) = uVar1;
  *(undefined4 *)(lVar10 + 0x1a4) = *(undefined4 *)(lVar10 + 0x1a0);
  if (*(long *)PTR_03a5d648 == lStack_c8) {
    return;
  }
  lVar10 = ___stack_chk_fail();
  if ((bRam0000000003eb5845 & 1) == 0) {
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b548);
    bRam0000000003eb5845 = 1;
  }
  uVar13 = *(uint *)(lVar10 + 0x198);
  lVar9 = *(long *)(lVar10 + 0x58);
  if (uVar13 == 0xffffffff) {
    if (lVar9 != 0) {
      lVar3 = 0;
      uVar13 = 0;
      do {
        if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar13) goto code_r0x0165da18;
        if (*(uint *)(lVar9 + 0x18) <= uVar13) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(int *)(*(long *)(lVar9 + 0x10) + lVar3 + 0x28) == 0) {
          *(uint *)(lVar10 + 0x198) = uVar13;
          lVar10 = *(long *)(lVar10 + 0x58);
          if (lVar10 != 0) {
            if (*(uint *)(lVar10 + 0x18) <= uVar13) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar3 = *(long *)(lVar10 + 0x10) + lVar3;
            goto LAB_0165da4c;
          }
          break;
        }
        uVar13 = uVar13 + 1;
        lVar9 = *(long *)(lVar10 + 0x58);
        lVar3 = lVar3 + 0x20;
      } while (lVar9 != 0);
    }
  }
  else if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) <= uVar13) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar3 = *(long *)(lVar9 + 0x10) + (long)(int)uVar13 * 0x20;
LAB_0165da4c:
    uVar1 = *(undefined8 *)(lVar3 + 0x20);
    uVar7 = *(undefined8 *)(lVar3 + 0x38);
    uVar6 = *(undefined8 *)(lVar3 + 0x30);
    extraout_x8[1] = *(undefined8 *)(lVar3 + 0x28);
    *extraout_x8 = uVar1;
    extraout_x8[3] = uVar7;
    extraout_x8[2] = uVar6;
    return;
  }
  func_0x00f78af4();
code_r0x0165da18:
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  return;
}



// ============================================================
// RVA: 0x165dd50 | Core.Networking.NetworkSession.DeInit
// ============================================================

void Core_Networking_NetworkSession__DeInit(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_f0;
  int iStack_e8;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  long lStack_b8;
  
  param_1[2] = 0;
  if ((param_1[4] != 0) && (Core_Networking_NetworkServicesInput__DeInit(), param_1[4] != 0)) {
    Core_Networking_NetworkServicesInput__Clear();
  }
  if ((param_1[5] == 0) || (*(long *)(param_1[5] + 0x30) == 0)) {
    return;
  }
  if ((bRam0000000003eb583b & 1) == 0) {
    func_0x00f78a20(0x3d2a018);
    func_0x00f78a20(0x3d2a290);
    func_0x00f78a20(0x3d1b410);
    func_0x00f78a20(0x3d1b548);
    func_0x00f78a20(0x3d5ad10);
    bRam0000000003eb583b = 1;
  }
  if ((param_1[5] != 0) && (lVar9 = *(long *)(param_1[5] + 0x30), lVar9 != 0)) {
    unaff_x23 = (undefined8 *)0x3d1b410;
    uVar5 = *(undefined8 *)(lVar9 + 0x98);
    uVar1 = func_0x00f78aec(/*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410);
    /*System.Action<SaveRecommendedReason>$$.ctor*/ func_0x01e4bde4(uVar1,param_1,uRam0000000003d5ad10,uRam0000000003d2a018);
    param_3 = 0;
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar1);
    if ((plVar2 != (long *)0x0) && (*plVar2 != /*System.Action<DisconnectCause>_TypeInfo*/ lRam0000000003d1b410)) goto LAB_0165d59c;
    *(long **)(lVar9 + 0x98) = plVar2;
    if ((param_1[5] != 0) && (lVar9 = *(long *)(param_1[5] + 0x30), lVar9 != 0)) {
      unaff_x23 = (undefined8 *)0x3d1b548;
      uVar5 = *(undefined8 *)(lVar9 + 0xf8);
      uVar1 = func_0x00f78aec(/*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548);
      /*System.Action<Player>$$.ctor*/ func_0x01e497ac(uVar1,param_1,*(undefined8 *)(*param_1 + 0x260),uRam0000000003d2a290);
      param_3 = 0;
      plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar1);
      if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<Player>_TypeInfo*/ lRam0000000003d1b548)) {
        *(long **)(lVar9 + 0xf8) = plVar2;
        return;
      }
      goto LAB_0165d59c;
    }
  }
  func_0x00f78af4();
LAB_0165d59c:
  auVar16 = func_0x00f78e5c();
  lVar8 = auVar16._8_8_;
  lVar9 = auVar16._0_8_;
  lStack_b8 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb583c & 1) == 0) {
    func_0x00f78a20(0x3d21960);
    func_0x00f78a20(0x3d3b510);
    func_0x00f78a20(0x3d3b6a0);
    func_0x00f78a20(0x3d3b4f8);
    func_0x00f78a20(0x3d3b598);
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b548);
    func_0x00f78a20(0x3d3b550);
    func_0x00f78a20(0x3d1dc68);
    func_0x00f78a20(0x3d1dc48);
    func_0x00f78a20(0x3d1dc38);
    func_0x00f78a20(0x3d23808);
    bRam0000000003eb583c = 1;
  }
  *(undefined8 *)(lVar9 + 0x28) = param_3;
  Core_Networking_NetworkSession__InitDisconnectHandlers(lVar9);
  puVar10 = (undefined8 *)0x3eb5000;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar9 + 0x1a0) = *(undefined4 *)(lVar8 + 0x1a0);
    *(undefined8 *)(lVar9 + 0x1b0) = *(undefined8 *)(lVar8 + 0x1b0);
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    *(undefined8 *)(lVar9 + 0xa0) = *(undefined8 *)(lVar8 + 0xa0);
    puVar10 = *(undefined8 **)(lVar8 + 0x58);
    lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
    /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412f98(lVar3,puVar10,uRam0000000003d3b4f8);
    *(long *)(lVar9 + 0x58) = lVar3;
    unaff_x23 = (undefined8 *)0x3d3b000;
    if (lVar3 != 0) {
      uVar1 = /*System.Collections.Generic.List<NetworkPlayer>$$AsReadOnly*/ func_0x02413d60(lVar3,uRam0000000003d3b510);
      *(undefined8 *)(lVar9 + 0x188) = uVar1;
      uVar1 = *(undefined8 *)(lVar8 + 0xd0);
      puVar10 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<NetworkVoteHistory>_TypeInfo*/ uRam0000000003d1dc68);
      /*System.Collections.Generic.List<NetworkVoteHistory>$$.ctor*/ func_0x024239ec(puVar10,uVar1,uRam0000000003d3b6a0);
      uVar1 = *(undefined8 *)(lVar8 + 0xd8);
      unaff_x23 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(unaff_x23,uVar1,uRam0000000003d3b598);
      uVar5 = *(undefined8 *)(lVar8 + 0xe0);
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(uVar1,uVar5,uRam0000000003d3b598);
      uVar6 = *(undefined8 *)(lVar8 + 0xe8);
      uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
      /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024189e8(uVar5,uVar6,uRam0000000003d3b598);
      *(undefined8 **)(lVar9 + 0xd0) = puVar10;
      *(undefined8 **)(lVar9 + 0xd8) = unaff_x23;
      *(undefined8 *)(lVar9 + 0xe0) = uVar1;
      *(undefined8 *)(lVar9 + 0xe8) = uVar5;
      *(undefined1 *)(lVar9 + 0x181) = *(undefined1 *)(lVar8 + 0x181);
      Core_Networking_NetworkSession__GetLocalPlayer(&uStack_f0,lVar9);
      lVar3 = *(long *)(lVar9 + 0x58);
      if (lVar3 != 0) {
        lVar14 = 0;
        uVar7 = 0;
        puVar13 = (undefined8 *)0x3d21960;
        puVar11 = (undefined8 *)0x3d23808;
        do {
          if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar7) goto LAB_0165d864;
          lVar4 = lVar3;
          if (*(uint *)(lVar3 + 0x18) <= uVar7) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar4 = *(long *)(lVar9 + 0x58);
          }
          puVar10 = puVar11;
          unaff_x23 = puVar13;
          if (lVar4 == 0) break;
          lVar3 = *(long *)(lVar3 + 0x10) + lVar14;
          uStack_f0 = *(undefined8 *)(lVar3 + 0x20);
          iStack_e8 = 2;
          if (*(int *)(lVar3 + 0x28) != 3) {
            iStack_e8 = *(int *)(lVar3 + 0x28);
          }
          uStack_dc = *(undefined8 *)(lVar3 + 0x34);
          uStack_e4 = *(undefined8 *)(lVar3 + 0x2c);
          uStack_d4 = *(undefined4 *)(lVar3 + 0x3c);
          uStack_d0 = uStack_e4;
          uStack_c8 = uStack_dc;
          uStack_c0 = uStack_d4;
          /*System.Collections.Generic.List<NetworkPlayer>$$set_Item*/ func_0x02413744(lVar4,uVar7,&uStack_f0,uRam0000000003d3b550);
          uVar7 = uVar7 + 1;
          lVar3 = *(long *)(lVar9 + 0x58);
          lVar14 = lVar14 + 0x20;
          puVar10 = (undefined8 *)0x3d23808;
          unaff_x23 = (undefined8 *)0x3d21960;
        } while (lVar3 != 0);
      }
    }
  }
  puVar13 = unaff_x23;
  puVar11 = puVar10;
  func_0x00f78af4();
LAB_0165d864:
  Core_Networking_NetworkSession__SortNetworkPlayers(lVar9);
  *(undefined1 *)(lVar9 + 0x180) = *(undefined1 *)(lVar8 + 0x180);
  uVar5 = *(undefined8 *)(lVar8 + 0x130);
  uVar1 = *(undefined8 *)(lVar8 + 0x128);
  *(undefined8 *)(lVar9 + 0x138) = *(undefined8 *)(lVar8 + 0x138);
  *(undefined8 *)(lVar9 + 0x130) = uVar5;
  *(undefined8 *)(lVar9 + 0x128) = uVar1;
  uVar5 = *(undefined8 *)(lVar8 + 0x148);
  uVar1 = *(undefined8 *)(lVar8 + 0x140);
  uVar15 = *(undefined8 *)(lVar8 + 0x158);
  uVar6 = *(undefined8 *)(lVar8 + 0x150);
  *(undefined8 *)(lVar9 + 0x160) = *(undefined8 *)(lVar8 + 0x160);
  *(undefined8 *)(lVar9 + 0x148) = uVar5;
  *(undefined8 *)(lVar9 + 0x140) = uVar1;
  *(undefined8 *)(lVar9 + 0x158) = uVar15;
  *(undefined8 *)(lVar9 + 0x150) = uVar6;
  uVar5 = *(undefined8 *)(lVar8 + 0x118);
  uVar1 = *(undefined8 *)(lVar8 + 0x110);
  *(undefined8 *)(lVar9 + 0x120) = *(undefined8 *)(lVar8 + 0x120);
  *(undefined8 *)(lVar9 + 0x118) = uVar5;
  *(undefined8 *)(lVar9 + 0x110) = uVar1;
  *(undefined1 *)(lVar9 + 0x168) = *(undefined1 *)(lVar8 + 0x168);
  *(undefined2 *)(lVar9 + 0x16a) = *(undefined2 *)(lVar8 + 0x16a);
  *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)(lVar8 + 0x70);
  *(undefined1 *)(lVar9 + 0xf0) = *(undefined1 *)(lVar8 + 0xf0);
  uVar1 = *(undefined8 *)(lVar8 + 0x80);
  uVar6 = *(undefined8 *)(lVar8 + 0x98);
  uVar5 = *(undefined8 *)(lVar8 + 0x90);
  *(undefined8 *)(lVar9 + 0x88) = *(undefined8 *)(lVar8 + 0x88);
  *(undefined8 *)(lVar9 + 0x80) = uVar1;
  *(undefined8 *)(lVar9 + 0x98) = uVar6;
  *(undefined8 *)(lVar9 + 0x90) = uVar5;
  uVar1 = func_0x00f78aec(*puVar13);
  /*FlatBuffers.FlatBufferBuilder$$.ctor*/ func_0x016cd72c(uVar1,0x400,0);
  *(undefined8 *)(lVar9 + 0x30) = uVar1;
  *(undefined8 *)(lVar9 + 0x170) = *(undefined8 *)(lVar8 + 0x170);
  uVar1 = func_0x00f78aec(*puVar11);
  /*Core.Networking.NetworkVoteUpdate$$.ctor*/ func_0x0165d38c();
  *(undefined8 *)(lVar9 + 0x178) = uVar1;
  *(undefined4 *)(lVar9 + 0x1a4) = *(undefined4 *)(lVar9 + 0x1a0);
  if (*(long *)PTR_03a5d648 == lStack_b8) {
    return;
  }
  lVar9 = ___stack_chk_fail();
  if ((bRam0000000003eb5845 & 1) == 0) {
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b548);
    bRam0000000003eb5845 = 1;
  }
  uVar12 = *(uint *)(lVar9 + 0x198);
  lVar8 = *(long *)(lVar9 + 0x58);
  if (uVar12 == 0xffffffff) {
    if (lVar8 != 0) {
      lVar3 = 0;
      uVar12 = 0;
      do {
        if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar12) goto code_r0x0165da18;
        if (*(uint *)(lVar8 + 0x18) <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(int *)(*(long *)(lVar8 + 0x10) + lVar3 + 0x28) == 0) {
          *(uint *)(lVar9 + 0x198) = uVar12;
          lVar9 = *(long *)(lVar9 + 0x58);
          if (lVar9 != 0) {
            if (*(uint *)(lVar9 + 0x18) <= uVar12) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar3 = *(long *)(lVar9 + 0x10) + lVar3;
            goto LAB_0165da4c;
          }
          break;
        }
        uVar12 = uVar12 + 1;
        lVar8 = *(long *)(lVar9 + 0x58);
        lVar3 = lVar3 + 0x20;
      } while (lVar8 != 0);
    }
  }
  else if (lVar8 != 0) {
    if (*(uint *)(lVar8 + 0x18) <= uVar12) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar3 = *(long *)(lVar8 + 0x10) + (long)(int)uVar12 * 0x20;
LAB_0165da4c:
    uVar1 = *(undefined8 *)(lVar3 + 0x20);
    uVar6 = *(undefined8 *)(lVar3 + 0x38);
    uVar5 = *(undefined8 *)(lVar3 + 0x30);
    extraout_x8[1] = *(undefined8 *)(lVar3 + 0x28);
    *extraout_x8 = uVar1;
    extraout_x8[3] = uVar6;
    extraout_x8[2] = uVar5;
    return;
  }
  func_0x00f78af4();
code_r0x0165da18:
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  return;
}



// ============================================================
// RVA: 0x165dda8 | Core.Networking.NetworkSession.Ping
// ============================================================

void Core_Networking_NetworkSession__Ping(void)

{
  return;
}



// ============================================================
// RVA: 0x165ddac | Core.Networking.NetworkSession.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x0165dea8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165deac) */
/* WARNING: Removing unreachable block (ram,0x0165deb8) */
/* WARNING: Removing unreachable block (ram,0x0165ded4) */
/* WARNING: Removing unreachable block (ram,0x0165dedc) */
/* WARNING: Removing unreachable block (ram,0x0165dee0) */
/* WARNING: Removing unreachable block (ram,0x0165df10) */
/* WARNING: Removing unreachable block (ram,0x0165df34) */
/* WARNING: Removing unreachable block (ram,0x0165df3c) */
/* WARNING: Removing unreachable block (ram,0x0165df78) */
/* WARNING: Removing unreachable block (ram,0x0165df90) */
/* WARNING: Removing unreachable block (ram,0x0165dfbc) */
/* WARNING: Removing unreachable block (ram,0x0165dfe8) */
/* WARNING: Removing unreachable block (ram,0x0165e010) */
/* WARNING: Removing unreachable block (ram,0x0165e018) */
/* WARNING: Removing unreachable block (ram,0x0165e020) */
/* WARNING: Removing unreachable block (ram,0x0165e028) */
/* WARNING: Removing unreachable block (ram,0x0165e048) */
/* WARNING: Removing unreachable block (ram,0x0165e050) */
/* WARNING: Removing unreachable block (ram,0x0165e054) */
/* WARNING: Removing unreachable block (ram,0x0165e084) */
/* WARNING: Removing unreachable block (ram,0x0165e0a0) */
/* WARNING: Removing unreachable block (ram,0x0165e0a8) */
/* WARNING: Removing unreachable block (ram,0x0165e0bc) */
/* WARNING: Removing unreachable block (ram,0x0165e0c4) */
/* WARNING: Removing unreachable block (ram,0x0165e0e4) */
/* WARNING: Removing unreachable block (ram,0x0165e0ec) */
/* WARNING: Removing unreachable block (ram,0x0165e0f0) */
/* WARNING: Removing unreachable block (ram,0x0165e120) */
/* WARNING: Removing unreachable block (ram,0x0165e134) */
/* WARNING: Removing unreachable block (ram,0x0165e154) */
/* WARNING: Removing unreachable block (ram,0x0165e164) */
/* WARNING: Removing unreachable block (ram,0x0165e170) */
/* WARNING: Removing unreachable block (ram,0x0165e1a0) */
/* WARNING: Removing unreachable block (ram,0x0165e1b4) */
/* WARNING: Removing unreachable block (ram,0x0165e1b8) */
/* WARNING: Removing unreachable block (ram,0x0165e1c0) */
/* WARNING: Removing unreachable block (ram,0x0165e200) */
/* WARNING: Removing unreachable block (ram,0x0165e258) */
/* WARNING: Removing unreachable block (ram,0x0165e20c) */
/* WARNING: Removing unreachable block (ram,0x0165e1c8) */
/* WARNING: Removing unreachable block (ram,0x0165e1dc) */
/* WARNING: Removing unreachable block (ram,0x0165dfcc) */
/* WARNING: Removing unreachable block (ram,0x0165e1f8) */
/* WARNING: Removing unreachable block (ram,0x0165dfd4) */

void Core_Networking_NetworkSession__Update(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  if ((bRam0000000003eb583d & 1) == 0) {
    func_0x00f78a20(0x3d29f30);
    func_0x00f78a20(0x3d2a1e0);
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3b5a8);
    func_0x00f78a20(0x3d3b5b0);
    func_0x00f78a20(0x3d3b440);
    func_0x00f78a20(0x3d3b5c0);
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb583d = 1;
  }
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (plVar4 = *(long **)(*(long *)(param_1 + 0x28) + 0x30), plVar4 == (long *)0x0)) {
    iVar1 = *(int *)(param_1 + 0x1a4);
    iVar2 = /*System.Environment$$get_TickCount*/ func_0x02aca40c(0);
    if ((*(char *)(param_1 + 0x1b8) == '\0') && (*(char *)(param_1 + 0x1b9) == '\0')) {
      iVar3 = /*UnityEngine.Mathf$$Abs*/ func_0x0323cc74(*(int *)(param_1 + 0x1a8) - iVar2,0);
      iVar1 = iVar3 + iVar1;
    }
    *(int *)(param_1 + 0x1a8) = iVar2;
  }
  else {
    iVar1 = (**(code **)(*plVar4 + 0x898))(plVar4,*(undefined8 *)(*plVar4 + 0x8a0));
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x1a4);
    }
  }
  *(int *)(param_1 + 0x1a4) = iVar1;
  return;
}



// ============================================================
// RVA: 0x165e25c | Core.Networking.NetworkSession.Now
// ============================================================

void Core_Networking_NetworkSession__Now(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((*(long *)(param_2 + 0x28) == 0) ||
     (plVar4 = *(long **)(*(long *)(param_2 + 0x28) + 0x30), plVar4 == (long *)0x0)) {
    iVar1 = *(int *)(param_2 + 0x1a4);
    iVar2 = /*System.Environment$$get_TickCount*/ func_0x02aca40c(0);
    if ((*(char *)(param_2 + 0x1b8) == '\0') && (*(char *)(param_2 + 0x1b9) == '\0')) {
      iVar3 = /*UnityEngine.Mathf$$Abs*/ func_0x0323cc74(*(int *)(param_2 + 0x1a8) - iVar2,0);
      iVar1 = iVar3 + iVar1;
    }
    *(int *)(param_2 + 0x1a8) = iVar2;
  }
  else {
    iVar1 = (**(code **)(*plVar4 + 0x898))(plVar4,*(undefined8 *)(*plVar4 + 0x8a0));
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_2 + 0x1a4);
    }
  }
  *(int *)(param_2 + 0x1a4) = iVar1;
  uVar5 = *(undefined8 *)(param_2 + 0x1b0);
  iVar2 = *(int *)(param_2 + 0x1a0);
  *param_1 = iVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined2 *)((long)param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 7) = 0;
  param_1[2] = iVar2;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 4) = uVar5;
  return;
}



// ============================================================
// RVA: 0x165e438 | Core.Networking.NetworkSession.LateUpdate
// ============================================================

ulong Core_Networking_NetworkSession__LateUpdate(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar8 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    uStack_38 = *(undefined8 *)(param_1 + 0x88);
    uStack_40 = *(undefined8 *)(param_1 + 0x80);
    uStack_28 = *(undefined8 *)(param_1 + 0x98);
    uStack_30 = *(undefined8 *)(param_1 + 0x90);
    Core_Networking_NetworkMigrationManager__SetNetworkState(*(long *)(param_1 + 0xa0),&uStack_40);
    lVar3 = *(long *)(param_1 + 0xa0);
    if (lVar3 != 0) {
      while( true ) {
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(code **)((long)register0x00000008 + -8) = unaff_x30;
        if ((*(char *)(lVar3 + 0x5c) == '\0') && (*(int *)(lVar3 + 0x58) == 0)) {
          lVar5 = *(long *)(lVar3 + 0x50);
          if (lVar5 == 0) goto LAB_0165a534;
          uVar7 = 0;
          uVar6 = 0;
        }
        else {
          lVar5 = *(long *)(lVar3 + 0x50);
          if (lVar5 == 0) goto LAB_0165a534;
          uVar6 = *(uint *)(lVar3 + 0x58);
          uVar7 = 0;
          if (uVar6 != *(int *)(lVar5 + 0x18) - 1U) {
            uVar7 = uVar6 + 1;
          }
        }
        if ((*(uint *)(lVar5 + 0x18) <= uVar7) || (*(uint *)(lVar5 + 0x18) <= uVar6)) break;
        if (*(int *)(lVar5 + 0x20 + (long)(int)uVar7 * 0x28) !=
            *(int *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x28)) {
          uVar7 = uVar6;
        }
        Core_Networking_NetworkMigrationManager__SetMigrationState(lVar3,uVar7);
        uVar7 = *(int *)(lVar3 + 0x58) + 1;
        *(uint *)(lVar3 + 0x58) = uVar7;
        lVar5 = *(long *)(lVar3 + 0x50);
        if (lVar5 == 0) goto LAB_0165a534;
        uVar6 = *(uint *)(lVar5 + 0x18);
        if (uVar7 == uVar6) {
          uVar7 = 0;
          *(undefined4 *)(lVar3 + 0x58) = 0;
          *(undefined1 *)(lVar3 + 0x5c) = *(undefined1 *)(lVar3 + 0x5d);
        }
        if (uVar6 <= uVar7) break;
        lVar5 = lVar5 + (long)(int)uVar7 * 0x28;
        unaff_x19 = (undefined8 *)(lVar5 + 0x20);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        unaff_x20 = 0x3eb5000;
        if ((bRam0000000003eb5827 & 1) == 0) {
          func_0x00f78a20(0x3d3b2f0);
          bRam0000000003eb5827 = 1;
        }
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *unaff_x19 = 0;
        *(undefined8 *)(lVar5 + 0x38) = 0;
        *(undefined8 *)(lVar5 + 0x30) = 0;
        uVar1 = *(ulong *)(lVar5 + 0x40);
        if (uVar1 != 0) {
          *(undefined8 *)((long)register0x00000008 + -0x20) =
               *(undefined8 *)((long)register0x00000008 + -0x20);
          *(undefined8 *)((long)register0x00000008 + -0x18) =
               *(undefined8 *)((long)register0x00000008 + -0x18);
          *(undefined8 *)((long)register0x00000008 + -0x10) =
               *(undefined8 *)((long)register0x00000008 + -0x10);
          *(undefined8 *)((long)register0x00000008 + -8) =
               *(undefined8 *)((long)register0x00000008 + -8);
          uVar4 = uVar1;
          if (0 < *(int *)(uVar1 + 0x18)) {
            uVar4 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar1 + 0x10),0,*(int *)(uVar1 + 0x18),0);
            *(undefined4 *)(uVar1 + 0x18) = 0;
          }
          *(int *)(uVar1 + 0x1c) = *(int *)(uVar1 + 0x1c) + 1;
          return uVar4;
        }
        unaff_x30 = Core_Networking_NetworkMigrationManager__CompleteFrame;
        lVar3 = func_0x00f78af4();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
      }
      uVar2 = func_0x00f78b24();
      func_0x00f78ac0(uVar2,0);
LAB_0165a534:
      uVar1 = func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x38) = lVar3;
      *(undefined1 **)((long)register0x00000008 + -0x30) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x28) = Core_Networking_NetworkMigrationManager___ctor;
      if ((bRam0000000003eb5825 & 1) == 0) {
        func_0x00f78a20(0x3d1f210);
        bRam0000000003eb5825 = 1;
      }
      uVar2 = func_0x00f78a34(/*Core.Networking.NetworkMigrationState[]_TypeInfo*/ uRam0000000003d1f210,200);
      *(undefined8 *)(uVar1 + 0x50) = uVar2;
      return uVar1;
    }
  }
  auVar8 = func_0x00f78af4();
  uVar7 = *auVar8._0_8_ - *auVar8._8_8_;
  if ((bRam0000000003ebfdd0 & 1) == 0) {
    func_0x00f78a20(0x3d232c0,0);
    bRam0000000003ebfdd0 = 1;
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar6 = uVar7;
  }
  return (ulong)uVar6;
}



// ============================================================
// RVA: 0x165e4c0 | Core.Networking.NetworkSession.IsValid
// ============================================================

undefined1 Core_Networking_NetworkSession__IsValid(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19c);
}



// ============================================================
// RVA: 0x165e4c8 | Core.Networking.NetworkSession.GetNetworkStateType
// ============================================================

undefined4 Core_Networking_NetworkSession__GetNetworkStateType(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x165e4d0 | Core.Networking.NetworkSession.IsEventCompleted
// ============================================================

undefined1 Core_Networking_NetworkSession__IsEventCompleted(long param_1)

{
  return *(undefined1 *)(param_1 + 0x180);
}



// ============================================================
// RVA: 0x165e4d8 | Core.Networking.NetworkSession.GetNetworkMigrationManager
// ============================================================

undefined8 Core_Networking_NetworkSession__GetNetworkMigrationManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x165e4e0 | Core.Networking.NetworkSession.SetToHostConfigCompletedState
// ============================================================

void Core_Networking_NetworkSession__SetToHostConfigCompletedState(long param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x1b0);
  return;
}



// ============================================================
// RVA: 0x165e500 | Core.Networking.NetworkSession.SetToEventStartedState
// ============================================================

void Core_Networking_NetworkSession__SetToEventStartedState(long param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 5;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x1b0);
  return;
}



// ============================================================
// RVA: 0x165e520 | Core.Networking.NetworkSession.GetTournamentData
// ============================================================

void Core_Networking_NetworkSession__GetTournamentData(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  uVar3 = *(undefined8 *)(param_2 + 0xe8);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  param_1[1] = *(undefined8 *)(param_2 + 0xd8);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



// ============================================================
// RVA: 0x165e52c | Core.Networking.NetworkSession.IsFirstRoundOfTournament
// ============================================================

/* WARNING: Possible PIC construction at 0x0165e67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165e6e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165e680) */
/* WARNING: Removing unreachable block (ram,0x0165e688) */
/* WARNING: Removing unreachable block (ram,0x0165e690) */
/* WARNING: Removing unreachable block (ram,0x0165e6a8) */
/* WARNING: Removing unreachable block (ram,0x0165e6b4) */
/* WARNING: Removing unreachable block (ram,0x0165e6ec) */
/* WARNING: Removing unreachable block (ram,0x0165e6f4) */
/* WARNING: Removing unreachable block (ram,0x0165e704) */
/* WARNING: Removing unreachable block (ram,0x0165e70c) */
/* WARNING: Removing unreachable block (ram,0x0165e710) */
/* WARNING: Removing unreachable block (ram,0x0165e760) */
/* WARNING: Removing unreachable block (ram,0x0165e784) */
/* WARNING: Removing unreachable block (ram,0x0165e7d0) */
/* WARNING: Removing unreachable block (ram,0x0165e78c) */
/* WARNING: Removing unreachable block (ram,0x0165e7a0) */
/* WARNING: Removing unreachable block (ram,0x0165e6d0) */
/* WARNING: Removing unreachable block (ram,0x0165e7ac) */

ulong Core_Networking_NetworkSession__IsFirstRoundOfTournament(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam0000000003eb583e & 1) == 0) {
    func_0x00f78a20(0x3d3b6c0);
    bRam0000000003eb583e = 1;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    return (ulong)(*(int *)(*(long *)(param_1 + 0xd0) + 0x18) == 1);
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb583f & 1) == 0) {
    func_0x00f78a20(0x3d3b6c0);
    bRam0000000003eb583f = 1;
  }
  if (*(long *)(lVar1 + 0xd0) != 0) {
    return (ulong)(2 < *(int *)(*(long *)(lVar1 + 0xd0) + 0x18));
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb5840 & 1) == 0) {
    func_0x00f78a20(0x3d3b5f0);
    func_0x00f78a20(0x3d3b5f8);
    func_0x00f78a20(0x3d3b520);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b5d8);
    func_0x00f78a20(0x3d3f438);
    func_0x00f78a20(0x3d1e5a8);
    func_0x00f78a20(0x3d638b0);
    func_0x00f78a20(0x3d282f8);
    bRam0000000003eb5840 = 1;
  }
  if ((bRam0000000003eb585d & 1) == 0) {
    func_0x00f78a20(0x3d3b6c0);
    bRam0000000003eb585d = 1;
  }
  if (*(long *)(lVar1 + 0xd0) != 0) {
    return (ulong)*(uint *)(*(long *)(lVar1 + 0xd0) + 0x18);
  }
  uVar2 = func_0x00f78af4();
  return uVar2;
}



// ============================================================
// RVA: 0x165e580 | Core.Networking.NetworkSession.IsLastRoundOfTournament
// ============================================================

/* WARNING: Possible PIC construction at 0x0165e67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165e6e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165e680) */
/* WARNING: Removing unreachable block (ram,0x0165e688) */
/* WARNING: Removing unreachable block (ram,0x0165e690) */
/* WARNING: Removing unreachable block (ram,0x0165e6a8) */
/* WARNING: Removing unreachable block (ram,0x0165e6b4) */
/* WARNING: Removing unreachable block (ram,0x0165e6ec) */
/* WARNING: Removing unreachable block (ram,0x0165e6f4) */
/* WARNING: Removing unreachable block (ram,0x0165e704) */
/* WARNING: Removing unreachable block (ram,0x0165e70c) */
/* WARNING: Removing unreachable block (ram,0x0165e710) */
/* WARNING: Removing unreachable block (ram,0x0165e760) */
/* WARNING: Removing unreachable block (ram,0x0165e784) */
/* WARNING: Removing unreachable block (ram,0x0165e7d0) */
/* WARNING: Removing unreachable block (ram,0x0165e78c) */
/* WARNING: Removing unreachable block (ram,0x0165e7a0) */
/* WARNING: Removing unreachable block (ram,0x0165e6d0) */
/* WARNING: Removing unreachable block (ram,0x0165e7ac) */

ulong Core_Networking_NetworkSession__IsLastRoundOfTournament(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam0000000003eb583f & 1) == 0) {
    func_0x00f78a20(0x3d3b6c0);
    bRam0000000003eb583f = 1;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    return (ulong)(2 < *(int *)(*(long *)(param_1 + 0xd0) + 0x18));
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb5840 & 1) == 0) {
    func_0x00f78a20(0x3d3b5f0);
    func_0x00f78a20(0x3d3b5f8);
    func_0x00f78a20(0x3d3b520);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b5d8);
    func_0x00f78a20(0x3d3f438);
    func_0x00f78a20(0x3d1e5a8);
    func_0x00f78a20(0x3d638b0);
    func_0x00f78a20(0x3d282f8);
    bRam0000000003eb5840 = 1;
  }
  if ((bRam0000000003eb585d & 1) == 0) {
    func_0x00f78a20(0x3d3b6c0);
    bRam0000000003eb585d = 1;
  }
  if (*(long *)(lVar1 + 0xd0) != 0) {
    return (ulong)*(uint *)(*(long *)(lVar1 + 0xd0) + 0x18);
  }
  uVar2 = func_0x00f78af4();
  return uVar2;
}



// ============================================================
// RVA: 0x165e5d4 | Core.Networking.NetworkSession.GetSpawnPositions
// ============================================================

/* WARNING: Possible PIC construction at 0x0165e67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165e6e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165e680) */
/* WARNING: Removing unreachable block (ram,0x0165e688) */
/* WARNING: Removing unreachable block (ram,0x0165e690) */
/* WARNING: Removing unreachable block (ram,0x0165e6a8) */
/* WARNING: Removing unreachable block (ram,0x0165e6b4) */
/* WARNING: Removing unreachable block (ram,0x0165e6ec) */
/* WARNING: Removing unreachable block (ram,0x0165e6f4) */
/* WARNING: Removing unreachable block (ram,0x0165e704) */
/* WARNING: Removing unreachable block (ram,0x0165e70c) */
/* WARNING: Removing unreachable block (ram,0x0165e710) */
/* WARNING: Removing unreachable block (ram,0x0165e760) */
/* WARNING: Removing unreachable block (ram,0x0165e784) */
/* WARNING: Removing unreachable block (ram,0x0165e7d0) */
/* WARNING: Removing unreachable block (ram,0x0165e78c) */
/* WARNING: Removing unreachable block (ram,0x0165e7a0) */
/* WARNING: Removing unreachable block (ram,0x0165e6d0) */
/* WARNING: Removing unreachable block (ram,0x0165e7ac) */

ulong Core_Networking_NetworkSession__GetSpawnPositions(long param_1)

{
  ulong uVar1;
  
  if ((bRam0000000003eb5840 & 1) == 0) {
    func_0x00f78a20(0x3d3b5f0);
    func_0x00f78a20(0x3d3b5f8);
    func_0x00f78a20(0x3d3b520);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b5d8);
    func_0x00f78a20(0x3d3f438);
    func_0x00f78a20(0x3d1e5a8);
    func_0x00f78a20(0x3d638b0);
    func_0x00f78a20(0x3d282f8);
    bRam0000000003eb5840 = 1;
  }
  if ((bRam0000000003eb585d & 1) == 0) {
    func_0x00f78a20(0x3d3b6c0);
    bRam0000000003eb585d = 1;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    return (ulong)*(uint *)(*(long *)(param_1 + 0xd0) + 0x18);
  }
  uVar1 = func_0x00f78af4();
  return uVar1;
}



// ============================================================
// RVA: 0x165e828 | Core.Networking.NetworkSession.GetFinishedPlayers
// ============================================================

undefined8 Core_Networking_NetworkSession__GetFinishedPlayers(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x165e830 | Core.Networking.NetworkSession.GetTournamentVoteHistory
// ============================================================

undefined8 Core_Networking_NetworkSession__GetTournamentVoteHistory(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x165e838 | Core.Networking.NetworkSession.GetTournamentVoteHistory
// ============================================================

void Core_Networking_NetworkSession__GetTournamentVoteHistory
               (undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 *extraout_x8;
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb5841 & 1) == 0) {
    func_0x00f78a20(0x3d3b6c0);
    func_0x00f78a20(0x3d3b6c8);
    bRam0000000003eb5841 = 1;
  }
  lVar1 = *(long *)(param_2 + 0xd0);
  if (lVar1 != 0) {
    if ((int)param_3 < (int)*(uint *)(lVar1 + 0x18)) {
      if (*(uint *)(lVar1 + 0x18) <= param_3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar1 = *(long *)(lVar1 + 0x10) + (long)(int)param_3 * 0x18;
      uVar2 = *(undefined8 *)(lVar1 + 0x20);
      param_1[1] = *(undefined8 *)(lVar1 + 0x28);
      *param_1 = uVar2;
      param_1[2] = *(undefined8 *)(lVar1 + 0x30);
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    return;
  }
  lVar1 = func_0x00f78af4();
  uVar2 = *(undefined8 *)(lVar1 + 0x128);
  extraout_x8[1] = *(undefined8 *)(lVar1 + 0x130);
  *extraout_x8 = uVar2;
  extraout_x8[2] = *(undefined8 *)(lVar1 + 0x138);
  return;
}



// ============================================================
// RVA: 0x165e8dc | Core.Networking.NetworkSession.GetEventForceEndTimeStamp
// ============================================================

void Core_Networking_NetworkSession__GetEventForceEndTimeStamp(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x128);
  param_1[1] = *(undefined8 *)(param_2 + 0x130);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x138);
  return;
}



// ============================================================
// RVA: 0x165e8f4 | Core.Networking.NetworkSession.GetEventResults
// ============================================================

undefined8 Core_Networking_NetworkSession__GetEventResults(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



// ============================================================
// RVA: 0x165e8fc | Core.Networking.NetworkSession.AddOutgoingCarUpdate
// ============================================================

undefined8 Core_Networking_NetworkSession__AddOutgoingCarUpdate(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5842 & 1) == 0) {
    func_0x00f78a20(0x3d3b3c8);
    bRam0000000003eb5842 = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    uStack_38 = param_2[3];
    uStack_40 = param_2[2];
    uVar1 = /*System.Collections.Generic.List<NetworkCar>$$Add*/ func_0x024029ec(*(long *)(param_1 + 0x38),&uStack_50,uRam0000000003d3b3c8);
    return uVar1;
  }
  lVar2 = func_0x00f78af4();
  return *(undefined8 *)(lVar2 + 0x40);
}



// ============================================================
// RVA: 0x165e974 | Core.Networking.NetworkSession.GetIncomingCarUpdates
// ============================================================

undefined8 Core_Networking_NetworkSession__GetIncomingCarUpdates(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x165e97c | Core.Networking.NetworkSession.GetIncomingUsableUpdates
// ============================================================

undefined8 Core_Networking_NetworkSession__GetIncomingUsableUpdates(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x165e984 | Core.Networking.NetworkSession.AddOutgoingUsableUpdate
// ============================================================

undefined8 Core_Networking_NetworkSession__AddOutgoingUsableUpdate(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb5843 & 1) == 0) {
    func_0x00f78a20(0x3d3b630);
    bRam0000000003eb5843 = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_58 = param_2[3];
    uStack_60 = param_2[2];
    uStack_48 = param_2[5];
    uStack_50 = param_2[4];
    uStack_40 = param_2[6];
    uVar1 = /*System.Collections.Generic.List<NetworkUsable>$$Add*/ func_0x0241eb94(*(long *)(param_1 + 0x50),&uStack_70,uRam0000000003d3b630);
    return uVar1;
  }
  auVar3 = func_0x00f78af4();
  lVar2 = auVar3._0_8_;
  if ((bRam0000000003eb5844 & 1) == 0) {
    func_0x00f78a20(0x3d3b510);
    bRam0000000003eb5844 = 1;
  }
  *(long *)(lVar2 + 0x58) = auVar3._8_8_;
  Core_Networking_NetworkSession__SortNetworkPlayers(lVar2);
  if (*(long *)(lVar2 + 0x58) != 0) {
    uVar1 = /*System.Collections.Generic.List<NetworkPlayer>$$AsReadOnly*/ func_0x02413d60(*(long *)(lVar2 + 0x58),uRam0000000003d3b510);
    *(undefined8 *)(lVar2 + 0x188) = uVar1;
    return uVar1;
  }
  lVar2 = func_0x00f78af4();
  return *(undefined8 *)(lVar2 + 0x188);
}



// ============================================================
// RVA: 0x165ea0c | Core.Networking.NetworkSession.SetPlayers
// ============================================================

undefined8 Core_Networking_NetworkSession__SetPlayers(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb5844 & 1) == 0) {
    func_0x00f78a20(0x3d3b510);
    bRam0000000003eb5844 = 1;
  }
  *(undefined8 *)(param_1 + 0x58) = param_2;
  Core_Networking_NetworkSession__SortNetworkPlayers(param_1);
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar1 = /*System.Collections.Generic.List<NetworkPlayer>$$AsReadOnly*/ func_0x02413d60(*(long *)(param_1 + 0x58),uRam0000000003d3b510);
    *(undefined8 *)(param_1 + 0x188) = uVar1;
    return uVar1;
  }
  lVar2 = func_0x00f78af4();
  return *(undefined8 *)(lVar2 + 0x188);
}



// ============================================================
// RVA: 0x165ea80 | Core.Networking.NetworkSession.GetPlayers
// ============================================================

undefined8 Core_Networking_NetworkSession__GetPlayers(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



// ============================================================
// RVA: 0x165ea88 | Core.Networking.NetworkSession.GetSortedPlayers
// ============================================================

undefined8 Core_Networking_NetworkSession__GetSortedPlayers(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



// ============================================================
// RVA: 0x165ea90 | Core.Networking.NetworkSession.IsHost
// ============================================================

undefined8 Core_Networking_NetworkSession__IsHost(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x28) + 0x30), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0165eaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x938))(plVar1,*(undefined8 *)(*plVar1 + 0x940));
    return uVar2;
  }
  return 1;
}



// ============================================================
// RVA: 0x165eab8 | Core.Networking.NetworkSession.GetPlayer
// ============================================================

/* WARNING: Possible PIC construction at 0x0165ed58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165ed5c) */

undefined8 *
Core_Networking_NetworkSession__GetPlayer(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  int aiStack_b0 [2];
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  puVar8 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR_03a5d648;
  uVar7 = 0x3eb5000;
  if ((bRam0000000003eb5846 & 1) == 0) {
    func_0x00f78a20(0x3d32b60);
    func_0x00f78a20(0x3d32b68);
    func_0x00f78a20(0x3d32b70);
    func_0x00f78a20(0x3d3b530);
    bRam0000000003eb5846 = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  plVar1 = (long *)(param_2 + 0x58);
  if (*plVar1 == 0) {
    auVar10 = func_0x00f78af4();
    if (auVar10._8_4_ != 1) goto code_r0x0165ec54;
    puVar4 = (undefined8 *)func_0x032ff6c4(auVar10._0_8_,auVar10._8_8_,&uStack_90);
code_r0x0165ec18:
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    uVar7 = 0x3d32b68;
    param_2 = 0x3d32b60;
    /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620(&uStack_90,*plVar1,uRam0000000003d3b530);
    do {
      uVar3 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8(&uStack_90,uRam0000000003d32b68);
      if ((uVar3 & 1) == 0) {
        param_3 = 0;
        aiStack_b0[0] = 0x3c;
        goto LAB_0165ebc4;
      }
    } while (uStack_78._4_4_ != (int)param_3);
    uStack_58 = uStack_80;
    uStack_50 = (undefined4)uStack_78;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    aiStack_b0[0] = 0x46;
LAB_0165ebc4:
    uStack_a8 = 1;
    puVar4 = (undefined8 *)/*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_90,uRam0000000003d32b60);
    if (aiStack_b0[0] != 0x46) goto code_r0x0165ec18;
    *param_1 = uStack_58;
    *(undefined4 *)(param_1 + 1) = uStack_50;
    *(int *)((long)param_1 + 0xc) = (int)param_3;
    param_1[3] = uStack_98;
    param_1[2] = uStack_a0;
  }
  if (*(long *)PTR_03a5d648 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
code_r0x0165ec54:
  puVar9 = &Core_Networking_NetworkSession__NumberOfRealPlayers;
  puVar4 = (undefined8 *)__Unwind_Resume();
  piVar2 = aiStack_b0;
  while( true ) {
    puVar5 = puVar4;
    *(undefined8 *)((long)piVar2 + -0x30) = uVar7;
    *(long *)((long)piVar2 + -0x28) = param_2;
    *(undefined8 *)((long)piVar2 + -0x20) = param_3;
    *(undefined8 **)((long)piVar2 + -0x18) = param_1;
    *(undefined1 **)((long)piVar2 + -0x10) = puVar8;
    *(undefined **)((long)piVar2 + -8) = puVar9;
    param_3 = 0x3eb5000;
    if ((bRam0000000003eb5847 & 1) == 0) {
      func_0x00f78a20(0x3d32b60);
      func_0x00f78a20(0x3d32b68);
      func_0x00f78a20(0x3d32b70);
      func_0x00f78a20(0x3d3b530);
      bRam0000000003eb5847 = 1;
    }
    *(undefined8 *)((long)piVar2 + -0x48) = 0;
    *(undefined8 *)((long)piVar2 + -0x50) = 0;
    *(undefined8 *)((long)piVar2 + -0x38) = 0;
    *(undefined8 *)((long)piVar2 + -0x40) = 0;
    *(undefined8 *)((long)piVar2 + -0x58) = 0;
    *(undefined8 *)((long)piVar2 + -0x60) = 0;
    if (puVar5[0xb] != 0) break;
    auVar10 = func_0x00f78af4();
    if (auVar10._8_4_ == 1) {
      func_0x032ff710(auVar10._0_8_,auVar10._8_8_,(undefined1 *)((long)piVar2 + -0x60));
      return puVar5;
    }
    puVar4 = (undefined8 *)__Unwind_Resume();
    puVar8 = (undefined1 *)((long)piVar2 + -0x70);
    *(undefined1 **)((long)piVar2 + -0x70) = (undefined1 *)((long)piVar2 + -0x10);
    *(undefined **)((long)piVar2 + -0x68) = &Core_Networking_NetworkSession__IsOnlyHumanPlayer;
    puVar9 = &UNK_0165ed5c;
    piVar2 = (int *)((long)piVar2 + -0x70);
    param_1 = puVar5;
  }
  /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620((undefined1 *)((long)piVar2 + -0x60),puVar5[0xb],uRam0000000003d3b530);
  puVar4 = (undefined8 *)0x0;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8((undefined1 *)((long)piVar2 + -0x60),uRam0000000003d32b68),
        (uVar3 & 1) != 0) {
    uVar6 = (uint)puVar4;
    if (*(uint *)((long)piVar2 + -0x48) < 2) {
      uVar6 = uVar6 + 1;
    }
    puVar4 = (undefined8 *)(ulong)uVar6;
  }
  /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4((undefined1 *)((long)piVar2 + -0x60),uRam0000000003d32b60);
  return puVar4;
}



// ============================================================
// RVA: 0x165ec58 | Core.Networking.NetworkSession.NumberOfRealPlayers
// ============================================================

ulong Core_Networking_NetworkSession__NumberOfRealPlayers(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5847 & 1) == 0) {
    func_0x00f78a20(0x3d32b60);
    func_0x00f78a20(0x3d32b68);
    func_0x00f78a20(0x3d32b70);
    func_0x00f78a20(0x3d3b530);
    bRam0000000003eb5847 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x58) == 0) {
    auVar4 = func_0x00f78af4();
    if (auVar4._8_4_ != 1) {
      __Unwind_Resume();
      iVar1 = Core_Networking_NetworkSession__NumberOfRealPlayers();
      return (ulong)(iVar1 < 2);
    }
    func_0x032ff710(auVar4._0_8_,auVar4._8_8_,&uStack_60);
  }
  else {
    /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620(&uStack_60,*(long *)(param_1 + 0x58),uRam0000000003d3b530);
    param_1 = 0;
    while (uVar2 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8(&uStack_60,uRam0000000003d32b68), (uVar2 & 1) != 0) {
      uVar3 = (uint)param_1;
      if ((uint)uStack_48 < 2) {
        uVar3 = uVar3 + 1;
      }
      param_1 = (ulong)uVar3;
    }
    /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_60,uRam0000000003d32b60);
  }
  return param_1;
}



// ============================================================
// RVA: 0x165ed50 | Core.Networking.NetworkSession.IsOnlyHumanPlayer
// ============================================================

bool Core_Networking_NetworkSession__IsOnlyHumanPlayer(void)

{
  int iVar1;
  
  iVar1 = Core_Networking_NetworkSession__NumberOfRealPlayers();
  return iVar1 < 2;
}



// ============================================================
// RVA: 0x165ed6c | Core.Networking.NetworkSession.HostGetCurrentVotes
// ============================================================

undefined8 Core_Networking_NetworkSession__HostGetCurrentVotes(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000003eb5848 & 1) == 0) {
    func_0x00f78a20(0x3d3b668);
    bRam0000000003eb5848 = 1;
  }
  lVar1 = lRam0000000003d3b668;
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(lRam0000000003d3b668 + 0x18) + 0xc0) + 0x78);
    if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar4);
    }
    uVar3 = func_0x00f78aec(lVar4);
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x80))(uVar3,lVar2);
    return uVar3;
  }
  uVar3 = func_0x00f78af4();
  return uVar3;
}



// ============================================================
// RVA: 0x165edc0 | Core.Networking.NetworkSession.SendHostMigrationState
// ============================================================

void Core_Networking_NetworkSession__SendHostMigrationState(void)

{
  return;
}



// ============================================================
// RVA: 0x165edc4 | Core.Networking.NetworkSession.SetVoteOptions
// ============================================================

void Core_Networking_NetworkSession__SetVoteOptions(void)

{
  return;
}



// ============================================================
// RVA: 0x165edc8 | Core.Networking.NetworkSession.CastVote
// ============================================================

void Core_Networking_NetworkSession__CastVote(void)

{
  return;
}



// ============================================================
// RVA: 0x165edcc | Core.Networking.NetworkSession.CastVotes
// ============================================================

void Core_Networking_NetworkSession__CastVotes(void)

{
  return;
}



// ============================================================
// RVA: 0x165edd0 | Core.Networking.NetworkSession.SetVoteResult
// ============================================================

void Core_Networking_NetworkSession__SetVoteResult(void)

{
  return;
}



// ============================================================
// RVA: 0x165edd4 | Core.Networking.NetworkSession.AddEventScore
// ============================================================

ulong Core_Networking_NetworkSession__AddEventScore(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint extraout_w8;
  uint uVar8;
  long lVar9;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long lVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  
  if ((bRam0000000003eb5849 & 1) == 0) {
    func_0x00f78a20(0x3d3b5a8);
    bRam0000000003eb5849 = 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x68);
  if (uVar2 == 0) {
    uVar2 = func_0x00f78af4();
    return uVar2;
  }
  puVar6 = (undefined8 *)(param_3 & 0xffffffff);
  lVar9 = *(long *)(uVar2 + 0x10);
  puVar7 = puVar6;
  if (lVar9 == 0) {
code_r0x0241954c:
    param_2 = unaff_x21;
    puVar6 = unaff_x20;
    uVar2 = unaff_x19;
    uVar3 = func_0x00f78af4();
    lVar9 = extraout_x9;
    uVar8 = extraout_w8;
code_r0x02419550:
    *(uint *)(uVar2 + 0x18) = uVar8 + 1;
  }
  else {
    uVar8 = *(uint *)(uVar2 + 0x18);
    uVar3 = uVar2;
    if (uVar8 != *(uint *)(lVar9 + 0x18)) goto code_r0x02419550;
    puVar7 = *(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3b5a8 + 0x18) + 0xc0) + 0x60);
    uVar3 = (*(code *)*puVar7)(uVar2,uVar8 + 1);
    lVar9 = *(long *)(uVar2 + 0x10);
    uVar8 = *(uint *)(uVar2 + 0x18);
    *(uint *)(uVar2 + 0x18) = uVar8 + 1;
    unaff_x19 = uVar2;
    unaff_x20 = puVar6;
    unaff_x21 = param_2;
    if (lVar9 == 0) goto code_r0x0241954c;
  }
  if (uVar8 < *(uint *)(lVar9 + 0x18)) {
    lVar9 = lVar9 + (long)(int)uVar8 * 0xc;
    *(undefined8 *)(lVar9 + 0x20) = param_2;
    *(int *)(lVar9 + 0x28) = (int)puVar6;
    *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
    return uVar3;
  }
  uVar4 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar4,0);
  plVar5 = auVar12._8_8_;
  lVar9 = auVar12._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))(plVar5,0x14);
  if (lVar9 != 0) {
    pcVar11 = (code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x28);
    lVar10 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (plVar5 != (long *)0x0) {
      if (*(long *)(*plVar5 + 0x40) == *(long *)(lVar10 + 0x40)) {
        puVar6 = (undefined8 *)func_0x00f78ae4(plVar5);
        (*pcVar11)(lVar9,*puVar6,*(undefined4 *)(puVar6 + 1),
                   *(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0x28));
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68))(lVar9);
        return (ulong)(iVar1 - 1);
      }
      func_0x00f78e5c(plVar5,lVar10);
      goto code_r0x02419744;
    }
  }
  func_0x00f78af4();
code_r0x02419744:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x2419748);
  (*pcVar11)();
}



// ============================================================
// RVA: 0x165ee40 | Core.Networking.NetworkSession.RequestUsableFromHost
// ============================================================

void Core_Networking_NetworkSession__RequestUsableFromHost(void)

{
  return;
}



// ============================================================
// RVA: 0x165ee44 | Core.Networking.NetworkSession.RespondToUsableRequest
// ============================================================

void Core_Networking_NetworkSession__RespondToUsableRequest(void)

{
  return;
}



// ============================================================
// RVA: 0x165ee48 | Core.Networking.NetworkSession.RequestResultsFinished
// ============================================================

void Core_Networking_NetworkSession__RequestResultsFinished(void)

{
  return;
}



// ============================================================
// RVA: 0x165ee4c | Core.Networking.NetworkSession.RequestGameModeLoaded
// ============================================================

void Core_Networking_NetworkSession__RequestGameModeLoaded(void)

{
  return;
}



// ============================================================
// RVA: 0x165ee50 | Core.Networking.NetworkSession.GetVoteEndTime
// ============================================================

void Core_Networking_NetworkSession__GetVoteEndTime(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  param_1[1] = *(undefined8 *)(param_2 + 0x100);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x108);
  return;
}



// ============================================================
// RVA: 0x165ee68 | Core.Networking.NetworkSession.SetMigrationStartTime
// ============================================================

void Core_Networking_NetworkSession__SetMigrationStartTime(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  
  if (*(char *)((long)param_2 + 4) != '\0') {
    lVar3 = *(long *)(param_1 + 0xa0);
    if (lVar3 == 0) {
      auVar11 = func_0x00f78af4();
      iVar2 = auVar11._8_4_;
      plVar1 = auVar11._0_8_;
      if ((bRam0000000003eb584a & 1) == 0) {
        func_0x00f78a20(0x3d3b430);
        func_0x00f78a20(0x3d3b540);
        func_0x00f78a20(0x3d3b548);
        func_0x00f78a20(0x3d237b8);
        bRam0000000003eb584a = 1;
      }
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      if (plVar1[0xe] != 0) {
        /*System.Collections.Generic.List<NetworkEventStanding>$$Clear*/ func_0x0240868c(plVar1[0xe],uRam0000000003d3b430);
        *(undefined1 *)(plVar1 + 0x2d) = 0;
        Core_Networking_NetworkSession__Now(&uStack_c8,plVar1);
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        if (iVar2 < 1) {
          lVar3 = plVar1[0xb];
          if (lVar3 == 0) goto code_r0x0165f0f8;
          uVar6 = 0;
        }
        else {
          Core_Networking_NetworkSession__Now(&uStack_90,plVar1);
          if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uStack_118 = uStack_88;
          uStack_120 = uStack_90;
          uStack_110 = uStack_80;
          /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(auStack_138,&uStack_120,iVar2 << 1);
          /*Core.Networking.NetworkSessionTime$$op_Subtraction*/ func_0x0165f1c4(&uStack_e0,auStack_138,1);
          lVar3 = plVar1[0xb];
          if (lVar3 == 0) goto code_r0x0165f0f8;
          uVar6 = (*(int *)(lVar3 + 0x18) - iVar2) * 2 | 1;
        }
        lVar7 = 0;
        uVar4 = 0;
        uVar8 = 0;
        do {
          if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar8) {
            return;
          }
          if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uStack_148 = uStack_c0;
          uStack_150 = uStack_c8;
          uStack_140 = uStack_b8;
          /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_100,&uStack_150,uVar4);
          uVar5 = uVar4;
          if (0 < iVar2) {
            lVar3 = plVar1[0xb];
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) <= uVar8) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (*(int *)(*(long *)(lVar3 + 0x10) + lVar7 + 0x28) == 0) {
              uStack_f8 = uStack_d8;
              uStack_100 = uStack_e0;
              uStack_f0 = uStack_d0;
              uVar5 = uVar6;
            }
          }
          lVar3 = plVar1[0xb];
          if (lVar3 == 0) break;
          if (*(uint *)(lVar3 + 0x18) <= uVar8) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar3 = *(long *)(lVar3 + 0x10) + lVar7;
          uStack_88 = *(undefined8 *)(lVar3 + 0x28);
          uStack_90 = *(undefined8 *)(lVar3 + 0x20);
          uStack_78 = *(undefined8 *)(lVar3 + 0x38);
          uStack_80 = *(undefined8 *)(lVar3 + 0x30);
          uStack_a8 = uStack_f8;
          uStack_b0 = uStack_100;
          uStack_a0 = uStack_f0;
          (**(code **)(*plVar1 + 0x248))
                    (0x3f800000,plVar1,&uStack_90,uVar5,0,&uStack_b0,
                     *(undefined8 *)(*plVar1 + 0x250),in_x6,in_x7,uStack_90,uStack_88,uStack_80,
                     uStack_78);
          uVar8 = uVar8 + 1;
          lVar3 = plVar1[0xb];
          uVar4 = uVar4 + 2;
          lVar7 = lVar7 + 0x20;
        } while (lVar3 != 0);
      }
code_r0x0165f0f8:
      func_0x00f78af4();
      return;
    }
    if (*(char *)(lVar3 + 0x3c) == '\0') {
      uVar10 = param_2[1];
      uVar9 = *param_2;
      *(undefined8 *)(lVar3 + 0x48) = param_2[2];
      *(undefined8 *)(lVar3 + 0x40) = uVar10;
      *(undefined8 *)(lVar3 + 0x38) = uVar9;
    }
  }
  return;
}



// ============================================================
// RVA: 0x165eea4 | Core.Networking.NetworkSession.DebugResetFinishedPlayers
// ============================================================

void Core_Networking_NetworkSession__DebugResetFinishedPlayers(long *param_1,int param_2)

{
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb584a & 1) == 0) {
    func_0x00f78a20(0x3d3b430);
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b548);
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb584a = 1;
  }
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  if (param_1[0xe] != 0) {
    /*System.Collections.Generic.List<NetworkEventStanding>$$Clear*/ func_0x0240868c(param_1[0xe],uRam0000000003d3b430);
    *(undefined1 *)(param_1 + 0x2d) = 0;
    Core_Networking_NetworkSession__Now(&uStack_b8,param_1);
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    if (param_2 < 1) {
      lVar1 = param_1[0xb];
      if (lVar1 == 0) goto LAB_0165f0f8;
      uVar4 = 0;
    }
    else {
      Core_Networking_NetworkSession__Now(&uStack_80,param_1);
      if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_108 = uStack_78;
      uStack_110 = uStack_80;
      uStack_100 = uStack_70;
      /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(auStack_128,&uStack_110,param_2 << 1);
      /*Core.Networking.NetworkSessionTime$$op_Subtraction*/ func_0x0165f1c4(&uStack_d0,auStack_128,1);
      lVar1 = param_1[0xb];
      if (lVar1 == 0) goto LAB_0165f0f8;
      uVar4 = (*(int *)(lVar1 + 0x18) - param_2) * 2 | 1;
    }
    lVar5 = 0;
    uVar2 = 0;
    uVar6 = 0;
    do {
      if ((long)*(int *)(lVar1 + 0x18) <= (long)uVar6) {
        return;
      }
      if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uStack_138 = uStack_b0;
      uStack_140 = uStack_b8;
      uStack_130 = uStack_a8;
      /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_f0,&uStack_140,uVar2);
      uVar3 = uVar2;
      if (0 < param_2) {
        lVar1 = param_1[0xb];
        if (lVar1 == 0) break;
        if (*(uint *)(lVar1 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(int *)(*(long *)(lVar1 + 0x10) + lVar5 + 0x28) == 0) {
          uStack_e8 = uStack_c8;
          uStack_f0 = uStack_d0;
          uStack_e0 = uStack_c0;
          uVar3 = uVar4;
        }
      }
      lVar1 = param_1[0xb];
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar6) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar1 = *(long *)(lVar1 + 0x10) + lVar5;
      uStack_78 = *(undefined8 *)(lVar1 + 0x28);
      uStack_80 = *(undefined8 *)(lVar1 + 0x20);
      uStack_68 = *(undefined8 *)(lVar1 + 0x38);
      uStack_70 = *(undefined8 *)(lVar1 + 0x30);
      uStack_98 = uStack_e8;
      uStack_a0 = uStack_f0;
      uStack_90 = uStack_e0;
      (**(code **)(*param_1 + 0x248))
                (0x3f800000,param_1,&uStack_80,uVar3,0,&uStack_a0,*(undefined8 *)(*param_1 + 0x250),
                 in_x6,in_x7,uStack_80,uStack_78,uStack_70,uStack_68);
      uVar6 = uVar6 + 1;
      lVar1 = param_1[0xb];
      uVar2 = uVar2 + 2;
      lVar5 = lVar5 + 0x20;
    } while (lVar1 != 0);
  }
LAB_0165f0f8:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x165f26c | Core.Networking.NetworkSession.OnSessionPlayerDisconnected
// ============================================================

/* WARNING: Possible PIC construction at 0x0165f494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165f498) */
/* WARNING: Removing unreachable block (ram,0x0165f49c) */
/* WARNING: Removing unreachable block (ram,0x0165f4b8) */
/* WARNING: Removing unreachable block (ram,0x0165f4c0) */
/* WARNING: Removing unreachable block (ram,0x0165f4d8) */
/* WARNING: Removing unreachable block (ram,0x0165f4e4) */
/* WARNING: Removing unreachable block (ram,0x0165f514) */
/* WARNING: Removing unreachable block (ram,0x0165f51c) */
/* WARNING: Removing unreachable block (ram,0x0165f588) */
/* WARNING: Removing unreachable block (ram,0x0165f5a4) */
/* WARNING: Removing unreachable block (ram,0x0165f5ac) */
/* WARNING: Removing unreachable block (ram,0x0165f5c0) */
/* WARNING: Removing unreachable block (ram,0x0165f5cc) */
/* WARNING: Removing unreachable block (ram,0x0165f5d0) */
/* WARNING: Removing unreachable block (ram,0x0165f618) */
/* WARNING: Removing unreachable block (ram,0x0165f654) */
/* WARNING: Removing unreachable block (ram,0x0165f670) */
/* WARNING: Removing unreachable block (ram,0x0165f678) */
/* WARNING: Removing unreachable block (ram,0x0165f68c) */
/* WARNING: Removing unreachable block (ram,0x0165f69c) */
/* WARNING: Removing unreachable block (ram,0x0165f6c8) */
/* WARNING: Removing unreachable block (ram,0x0165f704) */
/* WARNING: Removing unreachable block (ram,0x0165f720) */
/* WARNING: Removing unreachable block (ram,0x0165f728) */
/* WARNING: Removing unreachable block (ram,0x0165f73c) */
/* WARNING: Removing unreachable block (ram,0x0165f74c) */
/* WARNING: Removing unreachable block (ram,0x0165f778) */
/* WARNING: Removing unreachable block (ram,0x0165f7b4) */
/* WARNING: Removing unreachable block (ram,0x0165f7d0) */
/* WARNING: Removing unreachable block (ram,0x0165f7d8) */
/* WARNING: Removing unreachable block (ram,0x0165f7ec) */
/* WARNING: Removing unreachable block (ram,0x0165f7fc) */
/* WARNING: Removing unreachable block (ram,0x0165f824) */

void Core_Networking_NetworkSession__OnSessionPlayerDisconnected
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR_03a5d648;
  uStack_b8 = param_2;
  uStack_b0 = param_3;
  if ((bRam0000000003eb584b & 1) == 0) {
    func_0x00f78a20(0x3d2a4a0);
    func_0x00f78a20(0x3d3b438);
    func_0x00f78a20(0x3d3b5b8);
    func_0x00f78a20(0x3d3b678);
    func_0x00f78a20(0x3d3b600);
    func_0x00f78a20(0x3d3b540);
    func_0x00f78a20(0x3d3b548);
    func_0x00f78a20(0x3d3b5d8);
    func_0x00f78a20(0x3d3b618);
    func_0x00f78a20(0x3d3b450);
    func_0x00f78a20(0x3d3b690);
    func_0x00f78a20(0x3d3b458);
    func_0x00f78a20(0x3d3b5e0);
    func_0x00f78a20(0x3d3b550);
    func_0x00f78a20(0x3d3b698);
    func_0x00f78a20(0x3d3b620);
    func_0x00f78a20(0x3d3f448);
    func_0x00f78a20(0x3d3f428);
    func_0x00f78a20(0x3d3f440);
    func_0x00f78a20(0x3d3f450);
    func_0x00f78a20(0x3d1e598);
    func_0x00f78a20(0x3d1e5b0);
    func_0x00f78a20(0x3d1e5b8);
    func_0x00f78a20(0x3d1e5c0);
    func_0x00f78a20(0x3d63890);
    func_0x00f78a20(0x3d63898);
    func_0x00f78a20(0x3d638a0);
    func_0x00f78a20(0x3d638a8);
    func_0x00f78a20(0x3d282f0);
    bRam0000000003eb584b = 1;
  }
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar5) {
        if (*(long *)PTR_03a5d648 != lStack_58) {
          ___stack_chk_fail();
          return;
        }
        return;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      iVar1 = *(int *)(*(long *)(lVar3 + 0x10) + lVar4 + 0x2c);
      iVar2 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(&uStack_b8,0);
      if (iVar1 == iVar2) goto LAB_0165f47c;
      uVar5 = uVar5 + 1;
      lVar3 = *(long *)(param_1 + 0x58);
      lVar4 = lVar4 + 0x20;
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
LAB_0165f47c:
  func_0x00f78aec(/*Core.Networking.NetworkSession.<>c__DisplayClass106_0_TypeInfo*/ uRam0000000003d282f0);
  return;
}



// ============================================================
// RVA: 0x165f8c4 | Core.Networking.NetworkSession.OnMigrationSynced
// ============================================================

/* WARNING: Possible PIC construction at 0x0165fc44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165fc48) */
/* WARNING: Removing unreachable block (ram,0x0165fc50) */
/* WARNING: Removing unreachable block (ram,0x0165fc58) */
/* WARNING: Removing unreachable block (ram,0x0165fc64) */
/* WARNING: Removing unreachable block (ram,0x0165fc6c) */
/* WARNING: Removing unreachable block (ram,0x0165fc74) */
/* WARNING: Removing unreachable block (ram,0x0165fcc4) */
/* WARNING: Removing unreachable block (ram,0x0165fccc) */
/* WARNING: Removing unreachable block (ram,0x0165fcdc) */
/* WARNING: Removing unreachable block (ram,0x0165fcec) */
/* WARNING: Removing unreachable block (ram,0x02419178) */
/* WARNING: Removing unreachable block (ram,0x024191a4) */
/* WARNING: Removing unreachable block (ram,0x024191ac) */
/* WARNING: Removing unreachable block (ram,0x024191ec) */
/* WARNING: Removing unreachable block (ram,0x024191b4) */
/* WARNING: Removing unreachable block (ram,0x024191f0) */
/* WARNING: Removing unreachable block (ram,0x02419224) */
/* WARNING: Removing unreachable block (ram,0x0241922c) */
/* WARNING: Removing unreachable block (ram,0x0241923c) */
/* WARNING: Removing unreachable block (ram,0x02419244) */
/* WARNING: Removing unreachable block (ram,0x0241925c) */
/* WARNING: Removing unreachable block (ram,0x02419268) */
/* WARNING: Removing unreachable block (ram,0x0241927c) */
/* WARNING: Removing unreachable block (ram,0x02419284) */
/* WARNING: Removing unreachable block (ram,0x02419294) */
/* WARNING: Removing unreachable block (ram,0x0241929c) */
/* WARNING: Removing unreachable block (ram,0x02419260) */
/* WARNING: Removing unreachable block (ram,0x02419254) */
/* WARNING: Removing unreachable block (ram,0x024192b0) */
/* WARNING: Removing unreachable block (ram,0x024191c0) */
/* WARNING: Removing unreachable block (ram,0x0165fc88) */

long * Core_Networking_NetworkSession__OnMigrationSynced(long *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint extraout_w8;
  uint uVar8;
  long lVar9;
  long extraout_x9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  code *pcVar14;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 ****ppppuVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  ulong uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  int iStack_120;
  undefined4 uStack_118;
  long alStack_110 [2];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  puVar5 = (undefined8 *)auStack_190;
  lStack_68 = *(long *)PTR_03a5d648;
  plVar2 = param_1;
  uVar6 = param_3;
  if ((bRam0000000003eb584c & 1) == 0) {
    func_0x00f78a20(0x3d32b00);
    func_0x00f78a20(0x3d32b08);
    func_0x00f78a20(0x3d32b10);
    func_0x00f78a20(0x3d3b440);
    plVar2 = (long *)func_0x00f78a20(0x3d237b8);
    bRam0000000003eb584c = 1;
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  alStack_110[1] = 0;
  alStack_110[0] = 0;
  uStack_118 = 0;
  if (*(char *)((long)param_1 + 300) != '\0') {
    unaff_x24 = param_1 + 0x25;
    uStack_98 = param_1[0x26];
    lStack_a0 = *unaff_x24;
    lStack_90 = param_1[0x27];
    if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lStack_138 = uStack_98;
    lStack_140 = lStack_a0;
    lStack_130 = lStack_90;
    plVar2 = (long *)/*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&lStack_158,&lStack_140,param_3);
    param_1[0x26] = lStack_150;
    *unaff_x24 = lStack_158;
    param_1[0x27] = lStack_148;
  }
  if (*(char *)((long)param_1 + 0x169) == '\0') goto LAB_0165fac8;
  Core_Networking_NetworkSession__GetLocalPlayer(&lStack_a0,param_1);
  lStack_78 = lStack_a0;
  uVar8 = uStack_98._4_4_;
  unaff_x24 = (long *)(ulong)uStack_98._4_4_;
  uStack_70 = (undefined4)uStack_98;
  uStack_c8 = uStack_88;
  lStack_d0 = lStack_90;
  if (param_1[0xe] == 0) goto LAB_0165fba0;
  unaff_x26 = 0x3d32b08;
  unaff_x25 = (long *)0x3d32b00;
  /*System.Collections.Generic.List<NetworkEventStanding>$$GetEnumerator*/ func_0x02408f24(alStack_110,param_1[0xe],uRam0000000003d3b440);
  do {
    param_3 = /*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$MoveNext*/ func_0x01f6cf9c(alStack_110,uRam0000000003d32b08);
    if ((param_3 & 1) == 0) break;
  } while ((uint)uStack_100 != uVar8);
  iStack_120 = 0x6f;
  plVar2 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkEventStanding>$$Dispose*/ func_0x01f6cf98(alStack_110,uRam0000000003d32b00);
  if (iStack_120 == 0x6f) {
    uStack_118 = 0;
  }
  if ((param_3 & 1) != 0) goto LAB_0165fac8;
  while( true ) {
    uVar6 = (ulong)*(uint *)((long)param_1 + 0x144);
    lStack_a0 = lStack_78;
    uStack_98 = CONCAT44((int)unaff_x24,uStack_70);
    uStack_88 = uStack_c8;
    lStack_90 = lStack_d0;
    lStack_b8 = param_1[0x2a];
    lStack_c0 = param_1[0x29];
    lStack_b0 = param_1[0x2b];
    plVar2 = (long *)(**(code **)(*param_1 + 0x248))
                               ((int)param_1[0x2c],param_1,&lStack_a0,uVar6,
                                *(undefined1 *)((long)param_1 + 0x164),&lStack_c0,
                                *(undefined8 *)(*param_1 + 0x250));
LAB_0165fac8:
    if (*(char *)((long)param_1 + 0x16b) != '\0') {
      plVar2 = (long *)(**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    }
    if (*(char *)((long)param_1 + 0x16a) != '\0') {
      plVar2 = (long *)(**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
    }
    if ((char)param_1[0x1e] != '\0') {
      uStack_98 = param_2[1];
      lStack_a0 = *param_2;
      lStack_90 = param_2[2];
      if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lStack_168 = uStack_98;
      lStack_170 = lStack_a0;
      lStack_160 = lStack_90;
      plVar2 = (long *)/*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&lStack_188,&lStack_170,&UNK_00001770);
      param_1[0x20] = lStack_180;
      param_1[0x1f] = lStack_188;
      param_1[0x21] = lStack_178;
    }
    if (*(long *)PTR_03a5d648 == lStack_68) {
      return plVar2;
    }
    ___stack_chk_fail();
LAB_0165fba0:
    auVar17 = func_0x00f78af4();
    if (auVar17._8_4_ != 1) break;
    func_0x032ff75c(auVar17._0_8_,auVar17._8_8_,alStack_110);
  }
  auVar17 = __Unwind_Resume();
  uVar10 = auVar17._8_8_;
  plStack_1c8 = (long *)0x3d237b8;
  puStack_198 = &Core_Networking_NetworkSession__AddScoreToTournament;
  uStack_1e0 = unaff_x26;
  plStack_1d8 = unaff_x25;
  plStack_1d0 = unaff_x24;
  plStack_1c0 = alStack_110;
  uStack_1b8 = param_3;
  plStack_1b0 = param_2;
  plStack_1a8 = param_1;
  pppuStack_1a0 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb584d & 1) == 0) {
    func_0x00f78a20(0x3d3b5a8);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b5d8);
    func_0x00f78a20(0x3d3b5e0);
    bRam0000000003eb584d = 1;
  }
  plVar2 = *(long **)(auVar17._0_8_ + 0xe0);
  if (plVar2 == (long *)0x0) {
    func_0x00f78af4();
    auVar17._8_8_ = plStack_1a8;
    auVar17._0_8_ = plStack_1b0;
    lVar7 = *unaff_x25;
    plVar11 = (long *)0x3eb5000;
    plVar2 = (long *)0x3d237b8;
    uVar6 = uStack_1b8;
    plVar12 = plStack_1c0;
    plVar13 = plStack_1c8;
    unaff_x24 = plStack_1d0;
    ppppuVar15 = (undefined8 ****)pppuStack_1a0;
    puVar16 = puStack_198;
  }
  else {
    plVar11 = (long *)(uVar6 & 0xffffffff);
    puVar5 = &uStack_1e0;
    lVar7 = lRam0000000003d3b5a8;
    plVar12 = plVar11;
    plVar13 = (long *)0x3d237b8;
    ppppuVar15 = &pppuStack_1a0;
    puVar16 = &UNK_0165fc48;
  }
  auVar18._8_8_ = plVar2;
  auVar18._0_8_ = plVar11;
  *(long **)((long)puVar5 + -0x30) = plVar12;
  *(ulong *)((long)puVar5 + -0x28) = uVar6;
  *(undefined1 (*) [16])((long)puVar5 + -0x20) = auVar17;
  *(undefined8 *****)((long)puVar5 + -0x10) = ppppuVar15;
  *(undefined **)((long)puVar5 + -8) = puVar16;
  lVar9 = plVar2[2];
  if (lVar9 == 0) {
code_r0x0241954c:
    uVar10 = uVar6;
    plVar3 = (long *)func_0x00f78af4();
    lVar9 = extraout_x9;
    uVar8 = extraout_w8;
code_r0x02419550:
    *(uint *)(auVar17._8_8_ + 0x18) = uVar8 + 1;
  }
  else {
    uVar8 = *(uint *)(plVar2 + 3);
    plVar3 = plVar2;
    auVar17 = auVar18;
    if (uVar8 != *(uint *)(lVar9 + 0x18)) goto code_r0x02419550;
    plVar11 = *(long **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x60);
    plVar3 = (long *)(*(code *)*plVar11)(plVar2,uVar8 + 1);
    lVar9 = plVar2[2];
    uVar8 = *(uint *)(plVar2 + 3);
    *(uint *)(plVar2 + 3) = uVar8 + 1;
    uVar6 = uVar10;
    if (lVar9 == 0) goto code_r0x0241954c;
  }
  if (uVar8 < *(uint *)(lVar9 + 0x18)) {
    lVar9 = lVar9 + (long)(int)uVar8 * 0xc;
    *(ulong *)(lVar9 + 0x20) = uVar10;
    *(int *)(lVar9 + 0x28) = auVar17._0_4_;
    *(int *)(auVar17._8_8_ + 0x1c) = *(int *)(auVar17._8_8_ + 0x1c) + 1;
    return plVar3;
  }
  uVar4 = func_0x00f78b24();
  auVar18 = func_0x00f78ac0(uVar4,0);
  plVar2 = auVar18._8_8_;
  lVar7 = auVar18._0_8_;
  *(long **)((long)puVar5 + -0x70) = unaff_x24;
  *(long **)((long)puVar5 + -0x68) = plVar13;
  *(long **)((long)puVar5 + -0x60) = plVar12;
  *(ulong *)((long)puVar5 + -0x58) = uVar10;
  *(undefined1 (*) [16])((long)puVar5 + -0x50) = auVar17;
  *(undefined1 **)((long)puVar5 + -0x40) = (undefined1 *)((long)puVar5 + -0x10);
  *(undefined **)((long)puVar5 + -0x38) =
       &System_Collections_Generic_List_NetworkScore___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(plVar11[3] + 0xc0) + 0x48))(plVar2,0x14);
  if (lVar7 != 0) {
    pcVar14 = (code *)**(undefined8 **)(*(long *)(plVar11[3] + 0xc0) + 0x28);
    lVar9 = *(long *)(*(long *)(plVar11[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    if (plVar2 != (long *)0x0) {
      if (*(long *)(*plVar2 + 0x40) == *(long *)(lVar9 + 0x40)) {
        puVar5 = (undefined8 *)func_0x00f78ae4(plVar2);
        (*pcVar14)(lVar7,*puVar5,*(undefined4 *)(puVar5 + 1),
                   *(undefined8 *)(*(long *)(plVar11[3] + 0xc0) + 0x28));
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(plVar11[3] + 0xc0) + 0x68))(lVar7);
        return (long *)(ulong)(iVar1 - 1);
      }
      func_0x00f78e5c(plVar2,lVar9);
      goto code_r0x02419744;
    }
  }
  func_0x00f78af4();
code_r0x02419744:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x2419748);
  (*pcVar14)();
}



// ============================================================
// RVA: 0x165fbbc | Core.Networking.NetworkSession.AddScoreToTournament
// ============================================================

/* WARNING: Possible PIC construction at 0x0165fc44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0165fc48) */
/* WARNING: Removing unreachable block (ram,0x0165fc50) */
/* WARNING: Removing unreachable block (ram,0x0165fc58) */
/* WARNING: Removing unreachable block (ram,0x0165fc64) */
/* WARNING: Removing unreachable block (ram,0x0165fc6c) */
/* WARNING: Removing unreachable block (ram,0x0165fc74) */
/* WARNING: Removing unreachable block (ram,0x0165fcc4) */
/* WARNING: Removing unreachable block (ram,0x0165fccc) */
/* WARNING: Removing unreachable block (ram,0x0165fcdc) */
/* WARNING: Removing unreachable block (ram,0x0165fcec) */
/* WARNING: Removing unreachable block (ram,0x02419178) */
/* WARNING: Removing unreachable block (ram,0x024191a4) */
/* WARNING: Removing unreachable block (ram,0x024191ac) */
/* WARNING: Removing unreachable block (ram,0x024191ec) */
/* WARNING: Removing unreachable block (ram,0x024191b4) */
/* WARNING: Removing unreachable block (ram,0x024191f0) */
/* WARNING: Removing unreachable block (ram,0x02419224) */
/* WARNING: Removing unreachable block (ram,0x0241922c) */
/* WARNING: Removing unreachable block (ram,0x0241923c) */
/* WARNING: Removing unreachable block (ram,0x02419244) */
/* WARNING: Removing unreachable block (ram,0x0241925c) */
/* WARNING: Removing unreachable block (ram,0x02419268) */
/* WARNING: Removing unreachable block (ram,0x0241927c) */
/* WARNING: Removing unreachable block (ram,0x02419284) */
/* WARNING: Removing unreachable block (ram,0x02419294) */
/* WARNING: Removing unreachable block (ram,0x0241929c) */
/* WARNING: Removing unreachable block (ram,0x02419260) */
/* WARNING: Removing unreachable block (ram,0x02419254) */
/* WARNING: Removing unreachable block (ram,0x024192b0) */
/* WARNING: Removing unreachable block (ram,0x024191c0) */
/* WARNING: Removing unreachable block (ram,0x0165fc88) */

ulong Core_Networking_NetworkSession__AddScoreToTournament
                (undefined8 *param_1,ulong param_2,ulong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  uint extraout_w8;
  uint uVar9;
  long lVar10;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar11;
  ulong unaff_x23;
  code *pcVar12;
  undefined8 unaff_x24;
  long *unaff_x25;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar13 [16];
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb584d & 1) == 0) {
    func_0x00f78a20(0x3d3b5a8);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b5d8);
    func_0x00f78a20(0x3d3b5e0);
    bRam0000000003eb584d = 1;
  }
  if (param_1[0x1c] == 0) {
    func_0x00f78af4();
    lVar8 = *unaff_x25;
    puVar11 = (undefined8 *)0x3eb5000;
    uVar3 = unaff_x23;
  }
  else {
    puVar11 = (undefined8 *)(param_3 & 0xffffffff);
    unaff_x30 = 0x165fc48;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    uVar3 = param_1[0x1c];
    lVar8 = lRam0000000003d3b5a8;
    unaff_x19 = param_2;
    unaff_x20 = param_1;
    unaff_x21 = param_3;
    unaff_x22 = puVar11;
    unaff_x29 = puVar1;
  }
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar10 = *(long *)(uVar3 + 0x10);
  puVar7 = puVar11;
  if (lVar10 == 0) {
code_r0x0241954c:
    param_2 = unaff_x21;
    puVar11 = unaff_x20;
    uVar3 = unaff_x19;
    uVar4 = func_0x00f78af4();
    lVar10 = extraout_x9;
    uVar9 = extraout_w8;
code_r0x02419550:
    *(uint *)(uVar3 + 0x18) = uVar9 + 1;
  }
  else {
    uVar9 = *(uint *)(uVar3 + 0x18);
    uVar4 = uVar3;
    if (uVar9 != *(uint *)(lVar10 + 0x18)) goto code_r0x02419550;
    puVar7 = *(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x60);
    uVar4 = (*(code *)*puVar7)(uVar3,uVar9 + 1);
    lVar10 = *(long *)(uVar3 + 0x10);
    uVar9 = *(uint *)(uVar3 + 0x18);
    *(uint *)(uVar3 + 0x18) = uVar9 + 1;
    unaff_x19 = uVar3;
    unaff_x20 = puVar11;
    unaff_x21 = param_2;
    if (lVar10 == 0) goto code_r0x0241954c;
  }
  if (uVar9 < *(uint *)(lVar10 + 0x18)) {
    lVar10 = lVar10 + (long)(int)uVar9 * 0xc;
    *(ulong *)(lVar10 + 0x20) = param_2;
    *(int *)(lVar10 + 0x28) = (int)puVar11;
    *(int *)(uVar3 + 0x1c) = *(int *)(uVar3 + 0x1c) + 1;
    return uVar4;
  }
  uVar5 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar5,0);
  plVar6 = auVar13._8_8_;
  lVar8 = auVar13._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x60) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x58) = param_2;
  *(undefined8 **)((long)register0x00000008 + -0x50) = puVar11;
  *(ulong *)((long)register0x00000008 + -0x48) = uVar3;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &System_Collections_Generic_List_NetworkScore___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))(plVar6,0x14);
  if (lVar8 != 0) {
    pcVar12 = (code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x28);
    lVar10 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (plVar6 != (long *)0x0) {
      if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar10 + 0x40)) {
        puVar11 = (undefined8 *)func_0x00f78ae4(plVar6);
        (*pcVar12)(lVar8,*puVar11,*(undefined4 *)(puVar11 + 1),
                   *(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0x28));
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68))(lVar8);
        return (ulong)(iVar2 - 1);
      }
      func_0x00f78e5c(plVar6,lVar10);
      goto code_r0x02419744;
    }
  }
  func_0x00f78af4();
code_r0x02419744:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x2419748);
  (*pcVar12)();
}



// ============================================================
// RVA: 0x165fd2c | Core.Networking.NetworkSession.OnDisconnected
// ============================================================

void Core_Networking_NetworkSession__OnDisconnected(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 uStack_41;
  
  if ((bRam0000000003eb584f & 1) == 0) {
    func_0x00f78a20(0x3d21390);
    func_0x00f78a20(0x3d70b40);
    bRam0000000003eb584f = 1;
  }
  uStack_41 = param_2;
  uVar1 = func_0x00f78ae0(/*Core.Services.DisconnectCause_TypeInfo*/ uRam0000000003d21390,&uStack_41);
  /*System.String$$Format*/ func_0x029bc688(/*STR('OnDisconnected: Reason: {0}')*/ uRam0000000003d70b40,uVar1,0);
  *(undefined1 *)(param_1 + 0x19c) = 0;
  return;
}



// ============================================================
// RVA: 0x165fdc4 | Core.Networking.NetworkSession.Invalidate
// ============================================================

void Core_Networking_NetworkSession__Invalidate(long param_1)

{
  *(undefined1 *)(param_1 + 0x19c) = 0;
  return;
}



// ============================================================
// RVA: 0x165fdcc | Core.Networking.NetworkSession.SetTimePaused
// ============================================================

void Core_Networking_NetworkSession__SetTimePaused(long param_1,undefined1 param_2)

{
  undefined1 auStack_28 [24];
  
  *(undefined1 *)(param_1 + 0x1b8) = param_2;
  Core_Networking_NetworkSession__Now(auStack_28);
  return;
}



// ============================================================
// RVA: 0x165fdf0 | Core.Networking.NetworkSession.OnSinglePlayerApplicationUnpaused
// ============================================================

void Core_Networking_NetworkSession__OnSinglePlayerApplicationUnpaused(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = /*System.Environment$$get_TickCount*/ func_0x02aca40c(0);
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x165fe18 | Core.Networking.NetworkSession.OnClientUsable
// ============================================================

void Core_Networking_NetworkSession__OnClientUsable
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined4 uStack_178;
  undefined1 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_c0 = param_2;
  uStack_b8 = param_3;
  if ((bRam0000000003eb5850 & 1) == 0) {
    func_0x00f78a20(0x3d53190);
    func_0x00f78a20(0x3d3b630);
    func_0x00f78a20(0x3d3e688);
    func_0x00f78a20(0x3d3ee30);
    bRam0000000003eb5850 = 1;
  }
  auStack_d0._0_8_ = 0;
  auStack_d0._8_8_ = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  auStack_100._0_8_ = 0;
  auStack_100._8_8_ = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  Core_Networking_ClientUpdateHolder__Update_ClientUsable_
            (&uStack_b0,&uStack_c0,uRam0000000003d53190);
  uStack_e8 = uStack_a8;
  uStack_f0 = uStack_b0;
  uStack_e0 = uStack_a0;
  auStack_d0 = /*System.Nullable<ClientUsable>$$get_Value*/ func_0x0261dde4(&uStack_f0,uRam0000000003d3e688);
  iVar2 = Core_Networking_ClientUsable__get_UsablesLength(auStack_d0);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      Core_Networking_ClientUsable__Usables(&uStack_b0,auStack_d0,iVar2);
      uStack_158 = uStack_a8;
      uStack_160 = uStack_b0;
      uStack_150 = uStack_a0;
      auVar3 = /*System.Nullable<UsableBase>$$get_Value*/ func_0x02663b60(&uStack_160,uRam0000000003d3ee30);
      auStack_100 = auVar3;
      uStack_178 = /*Core.Networking.UsableBase$$get_Time*/ func_0x01660094(auStack_100);
      uStack_168 = *(undefined8 *)(param_1 + 0x1b0);
      uStack_170 = *(undefined4 *)(param_1 + 0x1a0);
      *(undefined2 *)((ulong)&uStack_178 | 5) = 0;
      *(undefined1 *)((undefined2 *)((ulong)&uStack_178 | 5) + 1) = 0;
      uStack_174 = 1;
      uStack_16c = 0;
      /*Core.Networking.NetworkUsable$$FlatBufferToNetworkUsable*/ func_0x016600c0(&uStack_b0,auVar3._0_8_,auVar3._8_8_,&uStack_178,param_4);
      uStack_138 = uStack_a8;
      uStack_140 = uStack_b0;
      uStack_128 = uStack_98;
      uStack_130 = uStack_a0;
      uStack_118 = uStack_88;
      uStack_120 = uStack_90;
      uStack_110 = uStack_80;
      if (*(long *)(param_1 + 0x48) == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1660080);
        (*pcVar1)();
      }
      /*System.Collections.Generic.List<NetworkUsable>$$Add*/ func_0x0241eb94(*(long *)(param_1 + 0x48),&uStack_b0,uRam0000000003d3b630);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// ============================================================
// RVA: 0x1660204 | Core.Networking.NetworkSession..ctor
// ============================================================

undefined1  [16] Core_Networking_NetworkSession___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5851 & 1) == 0) {
    func_0x00f78a20(0x3d3b3c0);
    func_0x00f78a20(0x3d3b500);
    func_0x00f78a20(0x3d3b420);
    func_0x00f78a20(0x3d3b5a0);
    func_0x00f78a20(0x3d3b628);
    func_0x00f78a20(0x3d3b5e8);
    func_0x00f78a20(0x3d3b658);
    func_0x00f78a20(0x3d1dc50);
    func_0x00f78a20(0x3d1dc60);
    func_0x00f78a20(0x3d1dc18);
    func_0x00f78a20(0x3d1dc58);
    func_0x00f78a20(0x3d1dc08);
    func_0x00f78a20(0x3d1dc48);
    func_0x00f78a20(0x3d1dc38);
    bRam0000000003eb5851 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkCar>_TypeInfo*/ uRam0000000003d1dc08);
  /*System.Collections.Generic.List<NetworkCar>$$.ctor*/ func_0x02401db8(uVar1,8,uRam0000000003d3b3c0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkCar>_TypeInfo*/ uRam0000000003d1dc08);
  /*System.Collections.Generic.List<NetworkCar>$$.ctor*/ func_0x02401db8(uVar1,8,uRam0000000003d3b3c0);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkUsable>_TypeInfo*/ uRam0000000003d1dc58);
  /*System.Collections.Generic.List<NetworkUsable>$$.ctor*/ func_0x0241def8(uVar1,8,uRam0000000003d3b628);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkUsable>_TypeInfo*/ uRam0000000003d1dc58);
  /*System.Collections.Generic.List<NetworkUsable>$$.ctor*/ func_0x0241def8(uVar1,8,uRam0000000003d3b628);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
  /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412e80(uVar1,8,uRam0000000003d3b500);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVote>_TypeInfo*/ uRam0000000003d1dc60);
  /*System.Collections.Generic.List<NetworkVote>$$.ctor*/ func_0x02420d24(uVar1,0xc,uRam0000000003d3b658);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkScore>_TypeInfo*/ uRam0000000003d1dc48);
  /*System.Collections.Generic.List<NetworkScore>$$.ctor*/ func_0x024188d0(uVar1,0xc,uRam0000000003d3b5a0);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkEventStanding>_TypeInfo*/ uRam0000000003d1dc18);
  /*System.Collections.Generic.List<NetworkEventStanding>$$.ctor*/ func_0x024076e8(uVar1,8,uRam0000000003d3b420);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkSpawnPosition>_TypeInfo*/ uRam0000000003d1dc50);
  /*System.Collections.Generic.List<NetworkSpawnPosition>$$.ctor*/ func_0x0241b480(uVar1,0xc,uRam0000000003d3b5e8);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
  /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412e80(uVar1,8,uRam0000000003d3b500);
  *(undefined8 *)(param_1 + 400) = uVar1;
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x19c) = 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



