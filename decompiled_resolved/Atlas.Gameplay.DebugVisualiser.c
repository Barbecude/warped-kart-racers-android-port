// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.DebugVisualiser

// ============================================================
// RVA: 0x157bbd8 | Atlas.Gameplay.DebugVisualiser.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x0157bf78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157c140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157c180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157c1cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157c214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157c258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157c27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157c2f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157cfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157c2f4) */
/* WARNING: Removing unreachable block (ram,0x0157c2f8) */
/* WARNING: Removing unreachable block (ram,0x0157c300) */
/* WARNING: Removing unreachable block (ram,0x0157c280) */
/* WARNING: Removing unreachable block (ram,0x0157c2cc) */
/* WARNING: Removing unreachable block (ram,0x0157c2dc) */
/* WARNING: Removing unreachable block (ram,0x0157c25c) */
/* WARNING: Removing unreachable block (ram,0x0157c218) */
/* WARNING: Removing unreachable block (ram,0x0157c1d0) */
/* WARNING: Removing unreachable block (ram,0x0157c184) */
/* WARNING: Removing unreachable block (ram,0x0157c144) */
/* WARNING: Removing unreachable block (ram,0x0157bf7c) */
/* WARNING: Removing unreachable block (ram,0x0157bf98) */
/* WARNING: Removing unreachable block (ram,0x0157bfc0) */
/* WARNING: Removing unreachable block (ram,0x0157bff4) */
/* WARNING: Removing unreachable block (ram,0x0157cfdc) */
/* WARNING: Removing unreachable block (ram,0x0157d014) */
/* WARNING: Removing unreachable block (ram,0x0157cfe8) */
/* WARNING: Removing unreachable block (ram,0x0157cffc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_DebugVisualiser__Init
                (undefined1 param_1 [16],ulong param_2,ulong param_3,float param_4,long param_5,
                undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
                undefined8 param_10)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulong extraout_d0;
  float fVar21;
  uint uVar22;
  undefined4 uVar23;
  ulong uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  
  if ((bRam0000000003eb5093 & 1) == 0) {
    func_0x00f78a20(0x3d210f0);
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d3b260);
    func_0x00f78a20(0x3d3d028);
    func_0x00f78a20(0x3d1dbc0);
    func_0x00f78a20(0x3d1e108);
    func_0x00f78a20(0x3d23298);
    func_0x00f78a20(0x3d296d8);
    func_0x00f78a20(0x3d6b8e8);
    func_0x00f78a20(0x3d6b970);
    func_0x00f78a20(0x3d72850);
    func_0x00f78a20(0x3d776a0);
    func_0x00f78a20(0x3d6b9c0);
    func_0x00f78a20(0x3d6b9b0);
    func_0x00f78a20(0x3d6b9c8);
    func_0x00f78a20(0x3d76c20);
    func_0x00f78a20(0x3d6ef00);
    func_0x00f78a20(0x3d776f0);
    func_0x00f78a20(0x3d76fb8);
    func_0x00f78a20(0x3d6b978);
    func_0x00f78a20(0x3d6b9d8);
    func_0x00f78a20(0x3d6b9d0);
    func_0x00f78a20(0x3d6b940);
    func_0x00f78a20(0x3d778f8);
    func_0x00f78a20(0x3d76d38);
    func_0x00f78a20(0x3d6b980);
    func_0x00f78a20(0x3d6b3e8);
    func_0x00f78a20(0x3d6b9e0);
    func_0x00f78a20(0x3d6b938);
    func_0x00f78a20(0x3d6b988);
    func_0x00f78a20(0x3d76c28);
    func_0x00f78a20(0x3d71d88);
    func_0x00f78a20(0x3d75168);
    func_0x00f78a20(0x3d6b9b8);
    bRam0000000003eb5093 = 1;
  }
  uVar5 = /*Core.Environment.Pref$$CreateBool*/ func_0x01646484(/*STR('DebugVisualiser_Show_Colliders')*/ uRam0000000003d6b9c8,0,0);
  *(undefined8 *)(param_5 + 0xc0) = uVar5;
  uVar5 = /*Core.Environment.Pref$$CreateBool*/ func_0x01646484(/*STR('DebugVisualiser_Show_Respawners')*/ uRam0000000003d6b9d8,0,0);
  *(undefined8 *)(param_5 + 200) = uVar5;
  uVar5 = /*Core.Environment.Pref$$CreateBool*/ func_0x01646484(/*STR('DebugVisualiser_Show_Replicators')*/ uRam0000000003d6b9d0,0,0);
  *(undefined8 *)(param_5 + 0xd0) = uVar5;
  uVar5 = /*Core.Environment.Pref$$CreateBool*/ func_0x01646484(/*STR('DebugVisualiser_Show_Triggers')*/ uRam0000000003d6b9e0,0,0);
  *(undefined8 *)(param_5 + 0xd8) = uVar5;
  uVar5 = /*Core.Environment.Pref$$CreateBool*/ func_0x01646484(/*STR('DebugVisualiser_Hide_Scene')*/ uRam0000000003d6b9b0,0,0);
  *(undefined8 *)(param_5 + 0xe0) = uVar5;
  uVar5 = /*Core.Environment.Pref$$CreateBool*/ func_0x01646484(/*STR('DebugVisualiser_Highlight_Dynamic')*/ uRam0000000003d6b9b8,0,0);
  *(undefined8 *)(param_5 + 0xe8) = uVar5;
  uVar5 = /*Core.Environment.Pref$$CreateBool*/ func_0x01646484(/*STR('DebugVisualiser_Show_BattleAI_Waypoints')*/ uRam0000000003d6b9c0,0,0);
  *(undefined8 *)(param_5 + 0xf0) = uVar5;
  *(undefined8 *)(param_5 + 0x10) = param_6;
  *(long *)(param_5 + 0x18) = param_8;
  *(undefined8 *)(param_5 + 0x20) = param_10;
  uVar6 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
  uVar5 = uRam0000000003d54b70;
  Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
            (uVar6,param_5,uRam0000000003d54b70,0);
  if (param_8 == 0) {
LAB_0157c324:
    fVar16 = (float)func_0x00f78af4();
  }
  else {
    uVar5 = 0;
    Atlas_Gameplay_Usables_UsableManager__add_OnUsableSpawned(param_8,uVar6);
    lVar7 = func_0x00f78aec(/*Atlas.Gameplay.DebugFreeCameraController_TypeInfo*/ uRam0000000003d210f0);
    Atlas_Gameplay_DebugFreeCameraController___ctor();
    *(long *)(param_5 + 0x28) = lVar7;
    if (lVar7 == 0) goto LAB_0157c324;
    uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<MeshRenderer>_TypeInfo*/ uRam0000000003d1dbc0);
    /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar5,1000,uRam0000000003d3b260);
    *(undefined8 *)(param_5 + 0x38) = uVar5;
    uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Collider>_TypeInfo*/ uRam0000000003d1e108);
    /*System.Collections.Generic.List<DebugVisualiser.Collider>$$.ctor*/ func_0x0251664c(uVar5,1000,uRam0000000003d3d028);
    *(undefined8 *)(param_5 + 0x40) = uVar5;
    uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Collider>_TypeInfo*/ uRam0000000003d1e108);
    uVar5 = uRam0000000003d3d028;
    /*System.Collections.Generic.List<DebugVisualiser.Collider>$$.ctor*/ func_0x0251664c(uVar6,1000);
    *(undefined8 *)(param_5 + 0x48) = uVar6;
    fVar16 = 1.0;
    param_2 = 0x3f800000;
    param_3 = 0x3f800000;
  }
  fVar21 = (float)param_3;
  fVar27 = (float)param_2;
  if ((bRam0000000003eb50a5 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d653f8);
    func_0x00f78a20(0x3d1f5d8);
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003eb50a5 = 1;
  }
  lVar7 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,8);
  uVar26 = (undefined4)param_3;
  uVar18 = (undefined4)param_2;
  if (lVar7 == 0) goto code_r0x0157c9dc;
  uVar1 = *(uint *)(lVar7 + 0x18);
  if (uVar1 == 0) {
code_r0x0157c9d0:
    uVar26 = (undefined4)param_3;
    uVar18 = (undefined4)param_2;
    uVar6 = func_0x00f78b24();
    func_0x00f78ac0(uVar6,0);
  }
  else {
    fVar21 = fVar21 * 0.5;
    param_2 = (ulong)(uint)fVar21;
    fVar17 = -(fVar16 * 0.5);
    fVar28 = -(fVar27 * 0.5);
    *(float *)(lVar7 + 0x20) = fVar17;
    *(float *)(lVar7 + 0x24) = fVar28;
    *(float *)(lVar7 + 0x28) = fVar21;
    if (uVar1 == 1) goto code_r0x0157c9d0;
    param_4 = fVar16 * 0.5;
    *(float *)(lVar7 + 0x2c) = param_4;
    *(float *)(lVar7 + 0x30) = fVar28;
    *(float *)(lVar7 + 0x34) = fVar21;
    if (uVar1 < 3) goto code_r0x0157c9d0;
    fVar16 = -fVar21;
    param_3 = (ulong)(uint)fVar16;
    *(float *)(lVar7 + 0x38) = param_4;
    *(float *)(lVar7 + 0x3c) = fVar28;
    *(float *)(lVar7 + 0x40) = fVar16;
    if (uVar1 == 3) goto code_r0x0157c9d0;
    *(float *)(lVar7 + 0x44) = fVar17;
    *(float *)(lVar7 + 0x48) = fVar28;
    *(float *)(lVar7 + 0x4c) = fVar16;
    if (uVar1 < 5) goto code_r0x0157c9d0;
    fVar27 = fVar27 * 0.5;
    *(float *)(lVar7 + 0x50) = fVar17;
    *(float *)(lVar7 + 0x54) = fVar27;
    *(float *)(lVar7 + 0x58) = fVar21;
    if (uVar1 == 5) goto code_r0x0157c9d0;
    *(float *)(lVar7 + 0x5c) = param_4;
    *(float *)(lVar7 + 0x60) = fVar27;
    *(float *)(lVar7 + 100) = fVar21;
    if (uVar1 < 7) goto code_r0x0157c9d0;
    *(float *)(lVar7 + 0x68) = param_4;
    *(float *)(lVar7 + 0x6c) = fVar27;
    *(float *)(lVar7 + 0x70) = fVar16;
    if (uVar1 == 7) goto code_r0x0157c9d0;
    *(float *)(lVar7 + 0x74) = fVar17;
    *(float *)(lVar7 + 0x78) = fVar27;
    *(float *)(lVar7 + 0x7c) = fVar16;
    lVar8 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,0x18);
    uVar26 = (undefined4)param_3;
    uVar18 = (undefined4)param_2;
    if (*(int *)(lVar7 + 0x18) == 0) goto code_r0x0157c9d0;
    if (lVar8 == 0) goto code_r0x0157c9dc;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 == 0) goto code_r0x0157c9d0;
    uVar22 = *(uint *)(lVar7 + 0x28);
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar7 + 0x20);
    *(uint *)(lVar8 + 0x28) = uVar22;
    param_2 = (ulong)uVar22;
    if (((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) || (uVar1 < 2)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x34);
    param_2 = *(ulong *)(lVar7 + 0x2c);
    *(ulong *)(lVar8 + 0x2c) = param_2;
    *(undefined4 *)(lVar8 + 0x34) = uVar18;
    if ((*(uint *)(lVar7 + 0x18) < 3) || (uVar1 < 3)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x40);
    param_2 = *(ulong *)(lVar7 + 0x38);
    *(ulong *)(lVar8 + 0x38) = param_2;
    *(undefined4 *)(lVar8 + 0x40) = uVar18;
    if (((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) || (uVar1 < 4)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x4c);
    param_2 = *(ulong *)(lVar7 + 0x44);
    *(ulong *)(lVar8 + 0x44) = param_2;
    *(undefined4 *)(lVar8 + 0x4c) = uVar18;
    if (((*(uint *)(lVar7 + 0x18) & 0xfffffff8) == 0) || (uVar1 < 5)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x7c);
    param_2 = *(ulong *)(lVar7 + 0x74);
    *(ulong *)(lVar8 + 0x50) = param_2;
    *(undefined4 *)(lVar8 + 0x58) = uVar18;
    if ((*(uint *)(lVar7 + 0x18) < 5) || (uVar1 < 6)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x58);
    param_2 = *(ulong *)(lVar7 + 0x50);
    *(ulong *)(lVar8 + 0x5c) = param_2;
    *(undefined4 *)(lVar8 + 100) = uVar18;
    if ((*(int *)(lVar7 + 0x18) == 0) || (uVar1 < 7)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x28);
    param_2 = *(ulong *)(lVar7 + 0x20);
    *(ulong *)(lVar8 + 0x68) = param_2;
    *(undefined4 *)(lVar8 + 0x70) = uVar18;
    if (((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) || (uVar1 < 8)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x4c);
    param_2 = *(ulong *)(lVar7 + 0x44);
    *(ulong *)(lVar8 + 0x74) = param_2;
    *(undefined4 *)(lVar8 + 0x7c) = uVar18;
    if ((*(uint *)(lVar7 + 0x18) < 5) || (uVar1 < 9)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x58);
    param_2 = *(ulong *)(lVar7 + 0x50);
    *(ulong *)(lVar8 + 0x80) = param_2;
    *(undefined4 *)(lVar8 + 0x88) = uVar18;
    if ((*(uint *)(lVar7 + 0x18) < 6) || (uVar1 < 10)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 100);
    param_2 = *(ulong *)(lVar7 + 0x5c);
    *(ulong *)(lVar8 + 0x8c) = param_2;
    *(undefined4 *)(lVar8 + 0x94) = uVar18;
    if (((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) || (uVar1 < 0xb)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x34);
    param_2 = *(ulong *)(lVar7 + 0x2c);
    *(ulong *)(lVar8 + 0x98) = param_2;
    *(undefined4 *)(lVar8 + 0xa0) = uVar18;
    if ((*(int *)(lVar7 + 0x18) == 0) || (uVar1 < 0xc)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x28);
    param_2 = *(ulong *)(lVar7 + 0x20);
    *(ulong *)(lVar8 + 0xa4) = param_2;
    *(undefined4 *)(lVar8 + 0xac) = uVar18;
    if ((*(uint *)(lVar7 + 0x18) < 7) || (uVar1 < 0xd)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x70);
    param_2 = *(ulong *)(lVar7 + 0x68);
    *(ulong *)(lVar8 + 0xb0) = param_2;
    *(undefined4 *)(lVar8 + 0xb8) = uVar18;
    if (((*(uint *)(lVar7 + 0x18) & 0xfffffff8) == 0) || (uVar1 < 0xe)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x7c);
    param_2 = *(ulong *)(lVar7 + 0x74);
    *(ulong *)(lVar8 + 0xbc) = param_2;
    *(undefined4 *)(lVar8 + 0xc4) = uVar18;
    if (((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) || (uVar1 < 0xf)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x4c);
    param_2 = *(ulong *)(lVar7 + 0x44);
    *(ulong *)(lVar8 + 200) = param_2;
    *(undefined4 *)(lVar8 + 0xd0) = uVar18;
    if ((*(uint *)(lVar7 + 0x18) < 3) || (uVar1 < 0x10)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x40);
    param_2 = *(ulong *)(lVar7 + 0x38);
    *(ulong *)(lVar8 + 0xd4) = param_2;
    *(undefined4 *)(lVar8 + 0xdc) = uVar18;
    if ((*(uint *)(lVar7 + 0x18) < 6) || (uVar1 < 0x11)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 100);
    param_2 = *(ulong *)(lVar7 + 0x5c);
    *(ulong *)(lVar8 + 0xe0) = param_2;
    *(undefined4 *)(lVar8 + 0xe8) = uVar18;
    if ((*(uint *)(lVar7 + 0x18) < 7) || (uVar1 < 0x12)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x70);
    param_2 = *(ulong *)(lVar7 + 0x68);
    *(ulong *)(lVar8 + 0xec) = param_2;
    *(undefined4 *)(lVar8 + 0xf4) = uVar18;
    if ((*(uint *)(lVar7 + 0x18) < 3) || (uVar1 < 0x13)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x40);
    param_2 = *(ulong *)(lVar7 + 0x38);
    *(ulong *)(lVar8 + 0xf8) = param_2;
    *(undefined4 *)(lVar8 + 0x100) = uVar18;
    if (((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) || (uVar1 < 0x14)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x34);
    param_2 = *(ulong *)(lVar7 + 0x2c);
    *(ulong *)(lVar8 + 0x104) = param_2;
    *(undefined4 *)(lVar8 + 0x10c) = uVar18;
    if (((*(uint *)(lVar7 + 0x18) & 0xfffffff8) == 0) || (uVar1 < 0x15)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x7c);
    param_2 = *(ulong *)(lVar7 + 0x74);
    *(ulong *)(lVar8 + 0x110) = param_2;
    *(undefined4 *)(lVar8 + 0x118) = uVar18;
    if ((*(uint *)(lVar7 + 0x18) < 7) || (uVar1 < 0x16)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x70);
    param_2 = *(ulong *)(lVar7 + 0x68);
    *(ulong *)(lVar8 + 0x11c) = param_2;
    *(undefined4 *)(lVar8 + 0x124) = uVar18;
    if ((*(uint *)(lVar7 + 0x18) < 6) || (uVar1 < 0x17)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 100);
    param_2 = *(ulong *)(lVar7 + 0x5c);
    *(ulong *)(lVar8 + 0x128) = param_2;
    *(undefined4 *)(lVar8 + 0x130) = uVar18;
    if ((*(uint *)(lVar7 + 0x18) < 5) || (uVar1 < 0x18)) goto code_r0x0157c9d0;
    uVar18 = *(undefined4 *)(lVar7 + 0x58);
    param_2 = *(ulong *)(lVar7 + 0x50);
    *(ulong *)(lVar8 + 0x134) = param_2;
    *(undefined4 *)(lVar8 + 0x13c) = uVar18;
    lVar7 = func_0x00f78a34(/*UnityEngine.Vector2[]_TypeInfo*/ uRam0000000003d1f5d8,0x18);
    uVar26 = (undefined4)param_3;
    uVar18 = (undefined4)param_2;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 != 0) {
        uVar6 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(lVar7 + 0x20) = uVar6;
        uVar9 = _UNK_033f83a8;
        if (((((((uVar1 != 1) &&
                (*(ulong *)(lVar7 + 0x28) = _UNK_033f83a8, param_3 = uVar9, 2 < uVar1)) &&
               (*(undefined8 *)(lVar7 + 0x30) = 0, uVar24 = _UNK_033f8418, uVar1 != 3)) &&
              ((*(ulong *)(lVar7 + 0x38) = _UNK_033f8418, param_2 = uVar24, 4 < uVar1 &&
               (*(undefined8 *)(lVar7 + 0x40) = uVar6, uVar1 != 5)))) &&
             (*(ulong *)(lVar7 + 0x48) = uVar9, 6 < uVar1)) &&
            (((*(undefined8 *)(lVar7 + 0x50) = 0, uVar1 != 7 &&
              (*(ulong *)(lVar7 + 0x58) = uVar24, 8 < uVar1)) &&
             ((*(undefined8 *)(lVar7 + 0x60) = uVar6, uVar1 != 9 &&
              (((*(ulong *)(lVar7 + 0x68) = uVar9, 10 < uVar1 &&
                (*(undefined8 *)(lVar7 + 0x70) = 0, uVar1 != 0xb)) &&
               (*(ulong *)(lVar7 + 0x78) = uVar24, 0xc < uVar1)))))))) &&
           (((*(undefined8 *)(lVar7 + 0x80) = uVar6, uVar1 != 0xd &&
             (*(ulong *)(lVar7 + 0x88) = uVar9, 0xe < uVar1)) &&
            ((*(undefined8 *)(lVar7 + 0x90) = 0, uVar1 != 0xf &&
             ((((*(ulong *)(lVar7 + 0x98) = uVar24, 0x10 < uVar1 &&
                (*(undefined8 *)(lVar7 + 0xa0) = uVar6, uVar1 != 0x11)) &&
               ((*(ulong *)(lVar7 + 0xa8) = uVar9, 0x12 < uVar1 &&
                (((*(undefined8 *)(lVar7 + 0xb0) = 0, uVar1 != 0x13 &&
                  (*(ulong *)(lVar7 + 0xb8) = uVar24, 0x14 < uVar1)) &&
                 (*(undefined8 *)(lVar7 + 0xc0) = uVar6, uVar1 != 0x15)))))) &&
              ((*(ulong *)(lVar7 + 200) = uVar9, 0x16 < uVar1 &&
               (*(undefined8 *)(lVar7 + 0xd0) = 0, uVar1 != 0x17)))))))))) {
          *(ulong *)(lVar7 + 0xd8) = uVar24;
          uVar6 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0x24);
          uVar26 = (undefined4)uVar9;
          uVar18 = (undefined4)uVar24;
          uVar5 = 0;
          /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar6,/*Field$<PrivateImplementationDetails>.BDFF4BF48DBC7214A392CF884F7F2A6073CCDB77CA3EB11BEBB93DA8ED8B2158*/ uRam0000000003d653f8);
          uVar9 = func_0x00f78aec(/*UnityEngine.Mesh_TypeInfo*/ uRam0000000003d23388);
          /*UnityEngine.Mesh$$.ctor*/ func_0x0323f420(uVar9,0);
          if (uVar9 != 0) {
            /*UnityEngine.Mesh$$set_vertices*/ func_0x03241d34(uVar9,lVar8,0);
            /*UnityEngine.Mesh$$set_triangles*/ func_0x032448a4(uVar9,uVar6,0);
            /*UnityEngine.Mesh$$set_uv*/ func_0x03241f68(uVar9,lVar7,0);
            /*UnityEngine.Mesh$$Optimize*/ func_0x032470b4(uVar9,0);
            /*UnityEngine.Mesh$$RecalculateNormals*/ func_0x03246b7c(uVar9,0);
            return uVar9;
          }
          goto code_r0x0157c9dc;
        }
      }
      goto code_r0x0157c9d0;
    }
  }
code_r0x0157c9dc:
  uVar6 = func_0x00f78af4();
  fVar16 = param_4;
  uVar23 = uVar18;
  uVar25 = uVar26;
  if ((bRam0000000003eb5094 & 1) == 0) {
    func_0x00f78a20(0x3d23298);
    func_0x00f78a20(0x3d777d8);
    func_0x00f78a20(0x3d777a8);
    bRam0000000003eb5094 = 1;
  }
  uVar9 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
  /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar9,uVar6,0);
  if (uVar9 != 0) {
    /*UnityEngine.Object$$set_name*/ func_0x03248994(uVar9,uVar5,0);
    /*UnityEngine.Material$$SetColor*/ func_0x03237f3c(extraout_d0 & 0xffffffff,uVar18,uVar26,param_4,uVar9,/*STR('_ToonColour')*/ uRam0000000003d777a8,0);
    /*UnityEngine.Material$$SetTexture*/ func_0x0323822c(uVar9,/*STR('_ToonMap')*/ uRam0000000003d777d8,extraout_x1,0);
    return uVar9;
  }
  lVar7 = func_0x00f78af4();
  if (*(long *)(lVar7 + 0xc0) != 0) {
    if (*(char *)(*(long *)(lVar7 + 0xc0) + 0x10) != '\0') {
      return 1;
    }
    if (*(long *)(lVar7 + 200) != 0) {
      if (*(char *)(*(long *)(lVar7 + 200) + 0x10) != '\0') {
        return 1;
      }
      if (*(long *)(lVar7 + 0xd0) != 0) {
        if (*(char *)(*(long *)(lVar7 + 0xd0) + 0x10) != '\0') {
          return 1;
        }
        if (*(long *)(lVar7 + 0xd8) != 0) {
          if (*(char *)(*(long *)(lVar7 + 0xd8) + 0x10) != '\0') {
            return 1;
          }
          if (*(long *)(lVar7 + 0xe0) != 0) {
            if (*(char *)(*(long *)(lVar7 + 0xe0) + 0x10) != '\0') {
              return 1;
            }
            if (*(long *)(lVar7 + 0xe8) != 0) {
              return (ulong)(*(char *)(*(long *)(lVar7 + 0xe8) + 0x10) != '\0');
            }
          }
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  if (*(char *)(lVar7 + 0x30) == '\0') {
    /*Atlas.Gameplay.DebugVisualiser$$CacheSceneObjects*/ func_0x0157deb8(lVar7,0);
    *(undefined1 *)(lVar7 + 0x30) = 1;
  }
  uVar5 = /*Atlas.Gameplay.DebugVisualiser$$DestroyProxyGameObjectRoot*/ func_0x0157fc14(lVar7);
  *(undefined8 *)(lVar7 + 0x60) = 0;
  /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar5,*(undefined8 *)(lVar7 + 0x38),1);
  uVar5 = /*Atlas.Gameplay.DebugVisualiser$$CreateProxyGameObjectRoot*/ func_0x0157fb5c(lVar7);
  if (*(long *)(lVar7 + 0xc0) == 0) goto code_r0x0157cd20;
  cVar2 = *(char *)(*(long *)(lVar7 + 0xc0) + 0x10);
  if (cVar2 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar7 + 0x78);
  }
  if (*(long *)(lVar7 + 0xd8) == 0) goto code_r0x0157cd20;
  cVar3 = *(char *)(*(long *)(lVar7 + 0xd8) + 0x10);
  if (cVar3 == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar7 + 0x88);
  }
  if (*(long *)(lVar7 + 200) == 0) goto code_r0x0157cd20;
  cVar4 = *(char *)(*(long *)(lVar7 + 200) + 0x10);
  if (cVar4 == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar7 + 0x90);
  }
  if (*(long *)(lVar7 + 0xd0) == 0) goto code_r0x0157cd20;
  if (*(char *)(*(long *)(lVar7 + 0xd0) + 0x10) == '\0') {
    uVar12 = 0;
    if (cVar2 == '\0') goto code_r0x0157cc50;
code_r0x0157cc30:
    uVar13 = *(undefined8 *)(lVar7 + 0x80);
    if (cVar3 != '\0') goto code_r0x0157cc38;
code_r0x0157cc58:
    uVar14 = 0;
    if (cVar4 == '\0') goto code_r0x0157cc60;
code_r0x0157cc40:
    uVar15 = *(undefined8 *)(lVar7 + 0x80);
  }
  else {
    uVar12 = *(undefined8 *)(lVar7 + 0x98);
    if (cVar2 != '\0') goto code_r0x0157cc30;
code_r0x0157cc50:
    uVar13 = 0;
    if (cVar3 == '\0') goto code_r0x0157cc58;
code_r0x0157cc38:
    uVar14 = *(undefined8 *)(lVar7 + 0x80);
    if (cVar4 != '\0') goto code_r0x0157cc40;
code_r0x0157cc60:
    uVar15 = 0;
  }
  if (*(long *)(lVar7 + 0xe0) != 0) {
    /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar5,*(undefined8 *)(lVar7 + 0x38),
                    *(char *)(*(long *)(lVar7 + 0xe0) + 0x10) == '\0');
    /*Atlas.Gameplay.DebugVisualiser$$CreateMeshColliderVisuals*/ func_0x0157f4a4(lVar7,*(undefined8 *)(lVar7 + 0x40),uVar6,uVar10,uVar11,uVar12);
    if (*(long *)(lVar7 + 0xe8) != 0) {
      if (*(char *)(*(long *)(lVar7 + 0xe8) + 0x10) != '\0') {
        uVar6 = uVar13;
        uVar10 = uVar14;
        uVar11 = uVar15;
      }
      uVar9 = /*Atlas.Gameplay.DebugVisualiser$$CreateMeshColliderVisuals*/ func_0x0157f4a4(lVar7,*(undefined8 *)(lVar7 + 0x48),uVar6,uVar10,uVar11,uVar12);
      if (*(long *)(lVar7 + 0xf0) != 0) {
        if (*(char *)(*(long *)(lVar7 + 0xf0) + 0x10) == '\0') {
          return uVar9;
        }
        if ((bRam0000000003eb5096 & 1) == 0) {
          func_0x00f78a20(0x3d3d070);
          func_0x00f78a20(0x3d3d068);
          func_0x00f78a20(0x3d1e110);
          func_0x00f78a20(0x3d23298);
          func_0x00f78a20(0x3d76358);
          bRam0000000003eb5096 = 1;
        }
        uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
        /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar5,0x14,uRam0000000003d3d068);
        *(undefined8 *)(lVar7 + 0x60) = uVar5;
        uVar5 = *(undefined8 *)(lVar7 + 0xa0);
        uVar6 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
        /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar6,uVar5,0);
        uVar19 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        uVar5 = /*STR('WaypointSphere')*/ uRam0000000003d76358;
        uVar10 = *(undefined8 *)(lVar7 + 0x70);
        uVar18 = uVar23;
        uVar26 = uVar25;
        uVar20 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
        /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
        uVar9 = /*Atlas.Gameplay.DebugVisualiser$$CreateMeshProxy*/ func_0x0157f840(uVar19,uVar23,uVar25,uVar20,uVar18,uVar26,fVar16,lVar7,uVar10,uVar5,
                                uVar6);
        return uVar9;
      }
    }
  }
code_r0x0157cd20:
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(lVar7 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar7 + 0xb0),lVar7,0);
    *(undefined4 *)(lVar7 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
  }
  uVar5 = /*Atlas.Gameplay.DebugVisualiser$$DestroyProxyGameObjectRoot*/ func_0x0157fc14(lVar7);
  *(undefined8 *)(lVar7 + 0x60) = 0;
  /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar5,*(undefined8 *)(lVar7 + 0x38),1);
  if (*(char *)(lVar7 + 0xf8) != '\0') {
    /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(0x3f800000,0);
    *(undefined1 *)(lVar7 + 0xf8) = 0;
  }
  if (*(char *)(lVar7 + 0xf9) != '\0') {
    *(undefined1 *)(lVar7 + 0xf9) = 0;
  }
  lVar8 = *(long *)(lVar7 + 0x18);
  uVar5 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
  Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
            (uVar5,lVar7,uRam0000000003d54b70,0);
  if (lVar8 != 0) {
    Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar8,uVar5,0);
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(undefined8 *)(lVar7 + 0x48) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x78) = 0;
    *(undefined8 *)(lVar7 + 0x80) = 0;
    uVar5 = *(undefined8 *)(lVar7 + 0x50);
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar5,0);
    *(undefined8 *)(lVar7 + 0x50) = 0;
    if (*(long *)(lVar7 + 0x28) != 0) {
      *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      return uVar9;
    }
  }
  lVar7 = func_0x00f78af4();
  uVar9 = 0;
  if (*(long *)(lVar7 + 0xb0) != 0) {
    uVar9 = /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar7 + 0xb0),lVar7,0);
    *(undefined4 *)(lVar7 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
  }
  return uVar9;
}



// ============================================================
// RVA: 0x157c328 | Atlas.Gameplay.DebugVisualiser.CreateCubeMesh
// ============================================================

/* WARNING: Possible PIC construction at 0x0157cfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157cfdc) */
/* WARNING: Removing unreachable block (ram,0x0157d014) */
/* WARNING: Removing unreachable block (ram,0x0157cfe8) */
/* WARNING: Removing unreachable block (ram,0x0157cffc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_DebugVisualiser__CreateCubeMesh
                (float param_1,ulong param_2,ulong param_3,float param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  ulong extraout_d0;
  float fVar20;
  uint uVar21;
  undefined4 uVar22;
  ulong uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  
  fVar20 = (float)param_3;
  fVar27 = (float)param_2;
  if ((bRam0000000003eb50a5 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d653f8);
    func_0x00f78a20(0x3d1f5d8);
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003eb50a5 = 1;
  }
  lVar5 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,8);
  uVar16 = (undefined4)param_2;
  uVar26 = (undefined4)param_3;
  if (lVar5 == 0) goto LAB_0157c9dc;
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (uVar1 == 0) {
LAB_0157c9d0:
    uVar16 = (undefined4)param_2;
    uVar26 = (undefined4)param_3;
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
  }
  else {
    fVar20 = fVar20 * 0.5;
    param_2 = (ulong)(uint)fVar20;
    fVar15 = -(param_1 * 0.5);
    fVar28 = -(fVar27 * 0.5);
    *(float *)(lVar5 + 0x20) = fVar15;
    *(float *)(lVar5 + 0x24) = fVar28;
    *(float *)(lVar5 + 0x28) = fVar20;
    if (uVar1 == 1) goto LAB_0157c9d0;
    param_4 = param_1 * 0.5;
    *(float *)(lVar5 + 0x2c) = param_4;
    *(float *)(lVar5 + 0x30) = fVar28;
    *(float *)(lVar5 + 0x34) = fVar20;
    if (uVar1 < 3) goto LAB_0157c9d0;
    fVar24 = -fVar20;
    param_3 = (ulong)(uint)fVar24;
    *(float *)(lVar5 + 0x38) = param_4;
    *(float *)(lVar5 + 0x3c) = fVar28;
    *(float *)(lVar5 + 0x40) = fVar24;
    if (uVar1 == 3) goto LAB_0157c9d0;
    *(float *)(lVar5 + 0x44) = fVar15;
    *(float *)(lVar5 + 0x48) = fVar28;
    *(float *)(lVar5 + 0x4c) = fVar24;
    if (uVar1 < 5) goto LAB_0157c9d0;
    fVar27 = fVar27 * 0.5;
    *(float *)(lVar5 + 0x50) = fVar15;
    *(float *)(lVar5 + 0x54) = fVar27;
    *(float *)(lVar5 + 0x58) = fVar20;
    if (uVar1 == 5) goto LAB_0157c9d0;
    *(float *)(lVar5 + 0x5c) = param_4;
    *(float *)(lVar5 + 0x60) = fVar27;
    *(float *)(lVar5 + 100) = fVar20;
    if (uVar1 < 7) goto LAB_0157c9d0;
    *(float *)(lVar5 + 0x68) = param_4;
    *(float *)(lVar5 + 0x6c) = fVar27;
    *(float *)(lVar5 + 0x70) = fVar24;
    if (uVar1 == 7) goto LAB_0157c9d0;
    *(float *)(lVar5 + 0x74) = fVar15;
    *(float *)(lVar5 + 0x78) = fVar27;
    *(float *)(lVar5 + 0x7c) = fVar24;
    lVar6 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,0x18);
    uVar16 = (undefined4)param_2;
    uVar26 = (undefined4)param_3;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0157c9d0;
    if (lVar6 == 0) goto LAB_0157c9dc;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 == 0) goto LAB_0157c9d0;
    uVar21 = *(uint *)(lVar5 + 0x28);
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar5 + 0x20);
    *(uint *)(lVar6 + 0x28) = uVar21;
    param_2 = (ulong)uVar21;
    if (((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) || (uVar1 < 2)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x34);
    param_2 = *(ulong *)(lVar5 + 0x2c);
    *(ulong *)(lVar6 + 0x2c) = param_2;
    *(undefined4 *)(lVar6 + 0x34) = uVar16;
    if ((*(uint *)(lVar5 + 0x18) < 3) || (uVar1 < 3)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x40);
    param_2 = *(ulong *)(lVar5 + 0x38);
    *(ulong *)(lVar6 + 0x38) = param_2;
    *(undefined4 *)(lVar6 + 0x40) = uVar16;
    if (((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) || (uVar1 < 4)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x4c);
    param_2 = *(ulong *)(lVar5 + 0x44);
    *(ulong *)(lVar6 + 0x44) = param_2;
    *(undefined4 *)(lVar6 + 0x4c) = uVar16;
    if (((*(uint *)(lVar5 + 0x18) & 0xfffffff8) == 0) || (uVar1 < 5)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x7c);
    param_2 = *(ulong *)(lVar5 + 0x74);
    *(ulong *)(lVar6 + 0x50) = param_2;
    *(undefined4 *)(lVar6 + 0x58) = uVar16;
    if ((*(uint *)(lVar5 + 0x18) < 5) || (uVar1 < 6)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x58);
    param_2 = *(ulong *)(lVar5 + 0x50);
    *(ulong *)(lVar6 + 0x5c) = param_2;
    *(undefined4 *)(lVar6 + 100) = uVar16;
    if ((*(int *)(lVar5 + 0x18) == 0) || (uVar1 < 7)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x28);
    param_2 = *(ulong *)(lVar5 + 0x20);
    *(ulong *)(lVar6 + 0x68) = param_2;
    *(undefined4 *)(lVar6 + 0x70) = uVar16;
    if (((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) || (uVar1 < 8)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x4c);
    param_2 = *(ulong *)(lVar5 + 0x44);
    *(ulong *)(lVar6 + 0x74) = param_2;
    *(undefined4 *)(lVar6 + 0x7c) = uVar16;
    if ((*(uint *)(lVar5 + 0x18) < 5) || (uVar1 < 9)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x58);
    param_2 = *(ulong *)(lVar5 + 0x50);
    *(ulong *)(lVar6 + 0x80) = param_2;
    *(undefined4 *)(lVar6 + 0x88) = uVar16;
    if ((*(uint *)(lVar5 + 0x18) < 6) || (uVar1 < 10)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 100);
    param_2 = *(ulong *)(lVar5 + 0x5c);
    *(ulong *)(lVar6 + 0x8c) = param_2;
    *(undefined4 *)(lVar6 + 0x94) = uVar16;
    if (((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) || (uVar1 < 0xb)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x34);
    param_2 = *(ulong *)(lVar5 + 0x2c);
    *(ulong *)(lVar6 + 0x98) = param_2;
    *(undefined4 *)(lVar6 + 0xa0) = uVar16;
    if ((*(int *)(lVar5 + 0x18) == 0) || (uVar1 < 0xc)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x28);
    param_2 = *(ulong *)(lVar5 + 0x20);
    *(ulong *)(lVar6 + 0xa4) = param_2;
    *(undefined4 *)(lVar6 + 0xac) = uVar16;
    if ((*(uint *)(lVar5 + 0x18) < 7) || (uVar1 < 0xd)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x70);
    param_2 = *(ulong *)(lVar5 + 0x68);
    *(ulong *)(lVar6 + 0xb0) = param_2;
    *(undefined4 *)(lVar6 + 0xb8) = uVar16;
    if (((*(uint *)(lVar5 + 0x18) & 0xfffffff8) == 0) || (uVar1 < 0xe)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x7c);
    param_2 = *(ulong *)(lVar5 + 0x74);
    *(ulong *)(lVar6 + 0xbc) = param_2;
    *(undefined4 *)(lVar6 + 0xc4) = uVar16;
    if (((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) || (uVar1 < 0xf)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x4c);
    param_2 = *(ulong *)(lVar5 + 0x44);
    *(ulong *)(lVar6 + 200) = param_2;
    *(undefined4 *)(lVar6 + 0xd0) = uVar16;
    if ((*(uint *)(lVar5 + 0x18) < 3) || (uVar1 < 0x10)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x40);
    param_2 = *(ulong *)(lVar5 + 0x38);
    *(ulong *)(lVar6 + 0xd4) = param_2;
    *(undefined4 *)(lVar6 + 0xdc) = uVar16;
    if ((*(uint *)(lVar5 + 0x18) < 6) || (uVar1 < 0x11)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 100);
    param_2 = *(ulong *)(lVar5 + 0x5c);
    *(ulong *)(lVar6 + 0xe0) = param_2;
    *(undefined4 *)(lVar6 + 0xe8) = uVar16;
    if ((*(uint *)(lVar5 + 0x18) < 7) || (uVar1 < 0x12)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x70);
    param_2 = *(ulong *)(lVar5 + 0x68);
    *(ulong *)(lVar6 + 0xec) = param_2;
    *(undefined4 *)(lVar6 + 0xf4) = uVar16;
    if ((*(uint *)(lVar5 + 0x18) < 3) || (uVar1 < 0x13)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x40);
    param_2 = *(ulong *)(lVar5 + 0x38);
    *(ulong *)(lVar6 + 0xf8) = param_2;
    *(undefined4 *)(lVar6 + 0x100) = uVar16;
    if (((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) || (uVar1 < 0x14)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x34);
    param_2 = *(ulong *)(lVar5 + 0x2c);
    *(ulong *)(lVar6 + 0x104) = param_2;
    *(undefined4 *)(lVar6 + 0x10c) = uVar16;
    if (((*(uint *)(lVar5 + 0x18) & 0xfffffff8) == 0) || (uVar1 < 0x15)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x7c);
    param_2 = *(ulong *)(lVar5 + 0x74);
    *(ulong *)(lVar6 + 0x110) = param_2;
    *(undefined4 *)(lVar6 + 0x118) = uVar16;
    if ((*(uint *)(lVar5 + 0x18) < 7) || (uVar1 < 0x16)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x70);
    param_2 = *(ulong *)(lVar5 + 0x68);
    *(ulong *)(lVar6 + 0x11c) = param_2;
    *(undefined4 *)(lVar6 + 0x124) = uVar16;
    if ((*(uint *)(lVar5 + 0x18) < 6) || (uVar1 < 0x17)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 100);
    param_2 = *(ulong *)(lVar5 + 0x5c);
    *(ulong *)(lVar6 + 0x128) = param_2;
    *(undefined4 *)(lVar6 + 0x130) = uVar16;
    if ((*(uint *)(lVar5 + 0x18) < 5) || (uVar1 < 0x18)) goto LAB_0157c9d0;
    uVar16 = *(undefined4 *)(lVar5 + 0x58);
    param_2 = *(ulong *)(lVar5 + 0x50);
    *(ulong *)(lVar6 + 0x134) = param_2;
    *(undefined4 *)(lVar6 + 0x13c) = uVar16;
    lVar5 = func_0x00f78a34(/*UnityEngine.Vector2[]_TypeInfo*/ uRam0000000003d1f5d8,0x18);
    uVar16 = (undefined4)param_2;
    uVar26 = (undefined4)param_3;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 != 0) {
        uVar19 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(lVar5 + 0x20) = uVar19;
        uVar7 = _UNK_033f83a8;
        if (((((((uVar1 != 1) &&
                (*(ulong *)(lVar5 + 0x28) = _UNK_033f83a8, param_3 = uVar7, 2 < uVar1)) &&
               (*(undefined8 *)(lVar5 + 0x30) = 0, uVar23 = _UNK_033f8418, uVar1 != 3)) &&
              ((*(ulong *)(lVar5 + 0x38) = _UNK_033f8418, param_2 = uVar23, 4 < uVar1 &&
               (*(undefined8 *)(lVar5 + 0x40) = uVar19, uVar1 != 5)))) &&
             (*(ulong *)(lVar5 + 0x48) = uVar7, 6 < uVar1)) &&
            (((*(undefined8 *)(lVar5 + 0x50) = 0, uVar1 != 7 &&
              (*(ulong *)(lVar5 + 0x58) = uVar23, 8 < uVar1)) &&
             ((*(undefined8 *)(lVar5 + 0x60) = uVar19, uVar1 != 9 &&
              (((*(ulong *)(lVar5 + 0x68) = uVar7, 10 < uVar1 &&
                (*(undefined8 *)(lVar5 + 0x70) = 0, uVar1 != 0xb)) &&
               (*(ulong *)(lVar5 + 0x78) = uVar23, 0xc < uVar1)))))))) &&
           (((*(undefined8 *)(lVar5 + 0x80) = uVar19, uVar1 != 0xd &&
             (*(ulong *)(lVar5 + 0x88) = uVar7, 0xe < uVar1)) &&
            ((*(undefined8 *)(lVar5 + 0x90) = 0, uVar1 != 0xf &&
             ((((*(ulong *)(lVar5 + 0x98) = uVar23, 0x10 < uVar1 &&
                (*(undefined8 *)(lVar5 + 0xa0) = uVar19, uVar1 != 0x11)) &&
               ((*(ulong *)(lVar5 + 0xa8) = uVar7, 0x12 < uVar1 &&
                (((*(undefined8 *)(lVar5 + 0xb0) = 0, uVar1 != 0x13 &&
                  (*(ulong *)(lVar5 + 0xb8) = uVar23, 0x14 < uVar1)) &&
                 (*(undefined8 *)(lVar5 + 0xc0) = uVar19, uVar1 != 0x15)))))) &&
              ((*(ulong *)(lVar5 + 200) = uVar7, 0x16 < uVar1 &&
               (*(undefined8 *)(lVar5 + 0xd0) = 0, uVar1 != 0x17)))))))))) {
          *(ulong *)(lVar5 + 0xd8) = uVar23;
          uVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0x24);
          uVar16 = (undefined4)uVar23;
          uVar26 = (undefined4)uVar7;
          param_7 = 0;
          /*System.Runtime.CompilerServices.RuntimeHelpers$$InitializeArray*/ func_0x02995384(uVar19,/*Field$<PrivateImplementationDetails>.BDFF4BF48DBC7214A392CF884F7F2A6073CCDB77CA3EB11BEBB93DA8ED8B2158*/ uRam0000000003d653f8);
          uVar7 = func_0x00f78aec(/*UnityEngine.Mesh_TypeInfo*/ uRam0000000003d23388);
          /*UnityEngine.Mesh$$.ctor*/ func_0x0323f420(uVar7,0);
          if (uVar7 != 0) {
            /*UnityEngine.Mesh$$set_vertices*/ func_0x03241d34(uVar7,lVar6,0);
            /*UnityEngine.Mesh$$set_triangles*/ func_0x032448a4(uVar7,uVar19,0);
            /*UnityEngine.Mesh$$set_uv*/ func_0x03241f68(uVar7,lVar5,0);
            /*UnityEngine.Mesh$$Optimize*/ func_0x032470b4(uVar7,0);
            /*UnityEngine.Mesh$$RecalculateNormals*/ func_0x03246b7c(uVar7,0);
            return uVar7;
          }
          goto LAB_0157c9dc;
        }
      }
      goto LAB_0157c9d0;
    }
  }
LAB_0157c9dc:
  uVar19 = func_0x00f78af4();
  fVar20 = param_4;
  uVar22 = uVar16;
  uVar25 = uVar26;
  if ((bRam0000000003eb5094 & 1) == 0) {
    func_0x00f78a20(0x3d23298);
    func_0x00f78a20(0x3d777d8);
    func_0x00f78a20(0x3d777a8);
    bRam0000000003eb5094 = 1;
  }
  uVar7 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
  /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar7,uVar19,0);
  if (uVar7 != 0) {
    /*UnityEngine.Object$$set_name*/ func_0x03248994(uVar7,param_7,0);
    /*UnityEngine.Material$$SetColor*/ func_0x03237f3c(extraout_d0 & 0xffffffff,uVar16,uVar26,param_4,uVar7,/*STR('_ToonColour')*/ uRam0000000003d777a8,0);
    /*UnityEngine.Material$$SetTexture*/ func_0x0323822c(uVar7,/*STR('_ToonMap')*/ uRam0000000003d777d8,extraout_x1,0);
    return uVar7;
  }
  lVar5 = func_0x00f78af4();
  if (*(long *)(lVar5 + 0xc0) != 0) {
    if (*(char *)(*(long *)(lVar5 + 0xc0) + 0x10) != '\0') {
      return 1;
    }
    if (*(long *)(lVar5 + 200) != 0) {
      if (*(char *)(*(long *)(lVar5 + 200) + 0x10) != '\0') {
        return 1;
      }
      if (*(long *)(lVar5 + 0xd0) != 0) {
        if (*(char *)(*(long *)(lVar5 + 0xd0) + 0x10) != '\0') {
          return 1;
        }
        if (*(long *)(lVar5 + 0xd8) != 0) {
          if (*(char *)(*(long *)(lVar5 + 0xd8) + 0x10) != '\0') {
            return 1;
          }
          if (*(long *)(lVar5 + 0xe0) != 0) {
            if (*(char *)(*(long *)(lVar5 + 0xe0) + 0x10) != '\0') {
              return 1;
            }
            if (*(long *)(lVar5 + 0xe8) != 0) {
              return (ulong)(*(char *)(*(long *)(lVar5 + 0xe8) + 0x10) != '\0');
            }
          }
        }
      }
    }
  }
  lVar5 = func_0x00f78af4();
  if (*(char *)(lVar5 + 0x30) == '\0') {
    /*Atlas.Gameplay.DebugVisualiser$$CacheSceneObjects*/ func_0x0157deb8(lVar5,0);
    *(undefined1 *)(lVar5 + 0x30) = 1;
  }
  uVar19 = /*Atlas.Gameplay.DebugVisualiser$$DestroyProxyGameObjectRoot*/ func_0x0157fc14(lVar5);
  *(undefined8 *)(lVar5 + 0x60) = 0;
  /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar19,*(undefined8 *)(lVar5 + 0x38),1);
  uVar19 = /*Atlas.Gameplay.DebugVisualiser$$CreateProxyGameObjectRoot*/ func_0x0157fb5c(lVar5);
  if (*(long *)(lVar5 + 0xc0) == 0) goto code_r0x0157cd20;
  cVar2 = *(char *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if (cVar2 == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar5 + 0x78);
  }
  if (*(long *)(lVar5 + 0xd8) == 0) goto code_r0x0157cd20;
  cVar3 = *(char *)(*(long *)(lVar5 + 0xd8) + 0x10);
  if (cVar3 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar5 + 0x88);
  }
  if (*(long *)(lVar5 + 200) == 0) goto code_r0x0157cd20;
  cVar4 = *(char *)(*(long *)(lVar5 + 200) + 0x10);
  if (cVar4 == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar5 + 0x90);
  }
  if (*(long *)(lVar5 + 0xd0) == 0) goto code_r0x0157cd20;
  if (*(char *)(*(long *)(lVar5 + 0xd0) + 0x10) == '\0') {
    uVar11 = 0;
    if (cVar2 == '\0') goto code_r0x0157cc50;
code_r0x0157cc30:
    uVar12 = *(undefined8 *)(lVar5 + 0x80);
    if (cVar3 != '\0') goto code_r0x0157cc38;
code_r0x0157cc58:
    uVar13 = 0;
    if (cVar4 == '\0') goto code_r0x0157cc60;
code_r0x0157cc40:
    uVar14 = *(undefined8 *)(lVar5 + 0x80);
  }
  else {
    uVar11 = *(undefined8 *)(lVar5 + 0x98);
    if (cVar2 != '\0') goto code_r0x0157cc30;
code_r0x0157cc50:
    uVar12 = 0;
    if (cVar3 == '\0') goto code_r0x0157cc58;
code_r0x0157cc38:
    uVar13 = *(undefined8 *)(lVar5 + 0x80);
    if (cVar4 != '\0') goto code_r0x0157cc40;
code_r0x0157cc60:
    uVar14 = 0;
  }
  if (*(long *)(lVar5 + 0xe0) != 0) {
    /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar19,*(undefined8 *)(lVar5 + 0x38),
                    *(char *)(*(long *)(lVar5 + 0xe0) + 0x10) == '\0');
    /*Atlas.Gameplay.DebugVisualiser$$CreateMeshColliderVisuals*/ func_0x0157f4a4(lVar5,*(undefined8 *)(lVar5 + 0x40),uVar8,uVar9,uVar10,uVar11);
    if (*(long *)(lVar5 + 0xe8) != 0) {
      if (*(char *)(*(long *)(lVar5 + 0xe8) + 0x10) != '\0') {
        uVar8 = uVar12;
        uVar9 = uVar13;
        uVar10 = uVar14;
      }
      uVar7 = /*Atlas.Gameplay.DebugVisualiser$$CreateMeshColliderVisuals*/ func_0x0157f4a4(lVar5,*(undefined8 *)(lVar5 + 0x48),uVar8,uVar9,uVar10,uVar11);
      if (*(long *)(lVar5 + 0xf0) != 0) {
        if (*(char *)(*(long *)(lVar5 + 0xf0) + 0x10) == '\0') {
          return uVar7;
        }
        if ((bRam0000000003eb5096 & 1) == 0) {
          func_0x00f78a20(0x3d3d070);
          func_0x00f78a20(0x3d3d068);
          func_0x00f78a20(0x3d1e110);
          func_0x00f78a20(0x3d23298);
          func_0x00f78a20(0x3d76358);
          bRam0000000003eb5096 = 1;
        }
        uVar19 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
        /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar19,0x14,uRam0000000003d3d068);
        *(undefined8 *)(lVar5 + 0x60) = uVar19;
        uVar19 = *(undefined8 *)(lVar5 + 0xa0);
        uVar8 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
        /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar8,uVar19,0);
        uVar17 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        uVar19 = /*STR('WaypointSphere')*/ uRam0000000003d76358;
        uVar9 = *(undefined8 *)(lVar5 + 0x70);
        uVar16 = uVar22;
        uVar26 = uVar25;
        uVar18 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
        /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
        uVar7 = /*Atlas.Gameplay.DebugVisualiser$$CreateMeshProxy*/ func_0x0157f840(uVar17,uVar22,uVar25,uVar18,uVar16,uVar26,fVar20,lVar5,uVar9,uVar19,
                                uVar8);
        return uVar7;
      }
    }
  }
code_r0x0157cd20:
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(lVar5 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar5 + 0xb0),lVar5,0);
    *(undefined4 *)(lVar5 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar5 + 0xb0) = 0;
  }
  uVar19 = /*Atlas.Gameplay.DebugVisualiser$$DestroyProxyGameObjectRoot*/ func_0x0157fc14(lVar5);
  *(undefined8 *)(lVar5 + 0x60) = 0;
  /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar19,*(undefined8 *)(lVar5 + 0x38),1);
  if (*(char *)(lVar5 + 0xf8) != '\0') {
    /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(0x3f800000,0);
    *(undefined1 *)(lVar5 + 0xf8) = 0;
  }
  if (*(char *)(lVar5 + 0xf9) != '\0') {
    *(undefined1 *)(lVar5 + 0xf9) = 0;
  }
  lVar6 = *(long *)(lVar5 + 0x18);
  uVar19 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
  Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
            (uVar19,lVar5,uRam0000000003d54b70,0);
  if (lVar6 != 0) {
    Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar6,uVar19,0);
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x78) = 0;
    *(undefined8 *)(lVar5 + 0x80) = 0;
    uVar19 = *(undefined8 *)(lVar5 + 0x50);
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar19,0);
    *(undefined8 *)(lVar5 + 0x50) = 0;
    if (*(long *)(lVar5 + 0x28) != 0) {
      *(undefined8 *)(*(long *)(lVar5 + 0x28) + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x28) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      return uVar7;
    }
  }
  lVar5 = func_0x00f78af4();
  uVar7 = 0;
  if (*(long *)(lVar5 + 0xb0) != 0) {
    uVar7 = /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar5 + 0xb0),lVar5,0);
    *(undefined4 *)(lVar5 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar5 + 0xb0) = 0;
  }
  return uVar7;
}



// ============================================================
// RVA: 0x157c9e0 | Atlas.Gameplay.DebugVisualiser.CreateMaterialParameters
// ============================================================

/* WARNING: Possible PIC construction at 0x0157cfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157cfdc) */
/* WARNING: Removing unreachable block (ram,0x0157d014) */
/* WARNING: Removing unreachable block (ram,0x0157cfe8) */
/* WARNING: Removing unreachable block (ram,0x0157cffc) */

ulong Atlas_Gameplay_DebugVisualiser__CreateMaterialParameters
                (undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  uVar15 = param_2;
  uVar17 = param_3;
  uVar19 = param_4;
  if ((bRam0000000003eb5094 & 1) == 0) {
    func_0x00f78a20(0x3d23298);
    func_0x00f78a20(0x3d777d8);
    func_0x00f78a20(0x3d777a8);
    bRam0000000003eb5094 = 1;
  }
  uVar4 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
  /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar4,param_5,0);
  if (uVar4 != 0) {
    /*UnityEngine.Object$$set_name*/ func_0x03248994(uVar4,param_7,0);
    /*UnityEngine.Material$$SetColor*/ func_0x03237f3c(param_1,param_2,param_3,param_4,uVar4,/*STR('_ToonColour')*/ uRam0000000003d777a8,0);
    /*UnityEngine.Material$$SetTexture*/ func_0x0323822c(uVar4,/*STR('_ToonMap')*/ uRam0000000003d777d8,param_6,0);
    return uVar4;
  }
  lVar5 = func_0x00f78af4();
  if (*(long *)(lVar5 + 0xc0) != 0) {
    if (*(char *)(*(long *)(lVar5 + 0xc0) + 0x10) != '\0') {
      return 1;
    }
    if (*(long *)(lVar5 + 200) != 0) {
      if (*(char *)(*(long *)(lVar5 + 200) + 0x10) != '\0') {
        return 1;
      }
      if (*(long *)(lVar5 + 0xd0) != 0) {
        if (*(char *)(*(long *)(lVar5 + 0xd0) + 0x10) != '\0') {
          return 1;
        }
        if (*(long *)(lVar5 + 0xd8) != 0) {
          if (*(char *)(*(long *)(lVar5 + 0xd8) + 0x10) != '\0') {
            return 1;
          }
          if (*(long *)(lVar5 + 0xe0) != 0) {
            if (*(char *)(*(long *)(lVar5 + 0xe0) + 0x10) != '\0') {
              return 1;
            }
            if (*(long *)(lVar5 + 0xe8) != 0) {
              return (ulong)(*(char *)(*(long *)(lVar5 + 0xe8) + 0x10) != '\0');
            }
          }
        }
      }
    }
  }
  lVar5 = func_0x00f78af4();
  if (*(char *)(lVar5 + 0x30) == '\0') {
    /*Atlas.Gameplay.DebugVisualiser$$CacheSceneObjects*/ func_0x0157deb8(lVar5,0);
    *(undefined1 *)(lVar5 + 0x30) = 1;
  }
  uVar6 = /*Atlas.Gameplay.DebugVisualiser$$DestroyProxyGameObjectRoot*/ func_0x0157fc14(lVar5);
  *(undefined8 *)(lVar5 + 0x60) = 0;
  /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar6,*(undefined8 *)(lVar5 + 0x38),1);
  uVar6 = /*Atlas.Gameplay.DebugVisualiser$$CreateProxyGameObjectRoot*/ func_0x0157fb5c(lVar5);
  if (*(long *)(lVar5 + 0xc0) == 0) goto code_r0x0157cd20;
  cVar1 = *(char *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if (cVar1 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar5 + 0x78);
  }
  if (*(long *)(lVar5 + 0xd8) == 0) goto code_r0x0157cd20;
  cVar2 = *(char *)(*(long *)(lVar5 + 0xd8) + 0x10);
  if (cVar2 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar5 + 0x88);
  }
  if (*(long *)(lVar5 + 200) == 0) goto code_r0x0157cd20;
  cVar3 = *(char *)(*(long *)(lVar5 + 200) + 0x10);
  if (cVar3 == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar5 + 0x90);
  }
  if (*(long *)(lVar5 + 0xd0) == 0) goto code_r0x0157cd20;
  if (*(char *)(*(long *)(lVar5 + 0xd0) + 0x10) == '\0') {
    uVar11 = 0;
    if (cVar1 == '\0') goto code_r0x0157cc50;
code_r0x0157cc30:
    uVar12 = *(undefined8 *)(lVar5 + 0x80);
    if (cVar2 != '\0') goto code_r0x0157cc38;
code_r0x0157cc58:
    uVar13 = 0;
    if (cVar3 == '\0') goto code_r0x0157cc60;
code_r0x0157cc40:
    uVar14 = *(undefined8 *)(lVar5 + 0x80);
  }
  else {
    uVar11 = *(undefined8 *)(lVar5 + 0x98);
    if (cVar1 != '\0') goto code_r0x0157cc30;
code_r0x0157cc50:
    uVar12 = 0;
    if (cVar2 == '\0') goto code_r0x0157cc58;
code_r0x0157cc38:
    uVar13 = *(undefined8 *)(lVar5 + 0x80);
    if (cVar3 != '\0') goto code_r0x0157cc40;
code_r0x0157cc60:
    uVar14 = 0;
  }
  if (*(long *)(lVar5 + 0xe0) != 0) {
    /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar6,*(undefined8 *)(lVar5 + 0x38),
                    *(char *)(*(long *)(lVar5 + 0xe0) + 0x10) == '\0');
    /*Atlas.Gameplay.DebugVisualiser$$CreateMeshColliderVisuals*/ func_0x0157f4a4(lVar5,*(undefined8 *)(lVar5 + 0x40),uVar7,uVar9,uVar10,uVar11);
    if (*(long *)(lVar5 + 0xe8) != 0) {
      if (*(char *)(*(long *)(lVar5 + 0xe8) + 0x10) != '\0') {
        uVar7 = uVar12;
        uVar9 = uVar13;
        uVar10 = uVar14;
      }
      uVar4 = /*Atlas.Gameplay.DebugVisualiser$$CreateMeshColliderVisuals*/ func_0x0157f4a4(lVar5,*(undefined8 *)(lVar5 + 0x48),uVar7,uVar9,uVar10,uVar11);
      if (*(long *)(lVar5 + 0xf0) != 0) {
        if (*(char *)(*(long *)(lVar5 + 0xf0) + 0x10) == '\0') {
          return uVar4;
        }
        if ((bRam0000000003eb5096 & 1) == 0) {
          func_0x00f78a20(0x3d3d070);
          func_0x00f78a20(0x3d3d068);
          func_0x00f78a20(0x3d1e110);
          func_0x00f78a20(0x3d23298);
          func_0x00f78a20(0x3d76358);
          bRam0000000003eb5096 = 1;
        }
        uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
        /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar6,0x14,uRam0000000003d3d068);
        *(undefined8 *)(lVar5 + 0x60) = uVar6;
        uVar6 = *(undefined8 *)(lVar5 + 0xa0);
        uVar7 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
        /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar7,uVar6,0);
        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        uVar6 = /*STR('WaypointSphere')*/ uRam0000000003d76358;
        uVar9 = *(undefined8 *)(lVar5 + 0x70);
        uVar16 = uVar15;
        uVar18 = uVar17;
        /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
        /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
        uVar4 = /*Atlas.Gameplay.DebugVisualiser$$CreateMeshProxy*/ func_0x0157f840(extraout_b0,uVar15,uVar17,
                                CONCAT13(extraout_var_01,
                                         CONCAT12(extraout_var_00,
                                                  CONCAT11(extraout_var,extraout_b0_00))),uVar16,
                                uVar18,uVar19,lVar5,uVar9,uVar6,uVar7);
        return uVar4;
      }
    }
  }
code_r0x0157cd20:
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(lVar5 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar5 + 0xb0),lVar5,0);
    *(undefined4 *)(lVar5 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar5 + 0xb0) = 0;
  }
  uVar6 = /*Atlas.Gameplay.DebugVisualiser$$DestroyProxyGameObjectRoot*/ func_0x0157fc14(lVar5);
  *(undefined8 *)(lVar5 + 0x60) = 0;
  /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar6,*(undefined8 *)(lVar5 + 0x38),1);
  if (*(char *)(lVar5 + 0xf8) != '\0') {
    /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(0,0);
    *(undefined1 *)(lVar5 + 0xf8) = 0;
  }
  if (*(char *)(lVar5 + 0xf9) != '\0') {
    *(undefined1 *)(lVar5 + 0xf9) = 0;
  }
  lVar8 = *(long *)(lVar5 + 0x18);
  uVar6 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
  Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
            (uVar6,lVar5,uRam0000000003d54b70,0);
  if (lVar8 != 0) {
    Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar8,uVar6,0);
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x78) = 0;
    *(undefined8 *)(lVar5 + 0x80) = 0;
    uVar6 = *(undefined8 *)(lVar5 + 0x50);
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar6,0);
    *(undefined8 *)(lVar5 + 0x50) = 0;
    if (*(long *)(lVar5 + 0x28) != 0) {
      *(undefined8 *)(*(long *)(lVar5 + 0x28) + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x28) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      return uVar4;
    }
  }
  lVar5 = func_0x00f78af4();
  uVar4 = 0;
  if (*(long *)(lVar5 + 0xb0) != 0) {
    uVar4 = /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar5 + 0xb0),lVar5,0);
    *(undefined4 *)(lVar5 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar5 + 0xb0) = 0;
  }
  return uVar4;
}



// ============================================================
// RVA: 0x157caec | Atlas.Gameplay.DebugVisualiser.AreAnyCosmeticSettingsEnabled
// ============================================================

/* WARNING: Possible PIC construction at 0x0157cfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157cfdc) */
/* WARNING: Removing unreachable block (ram,0x0157d014) */
/* WARNING: Removing unreachable block (ram,0x0157cfe8) */
/* WARNING: Removing unreachable block (ram,0x0157cffc) */

ulong Atlas_Gameplay_DebugVisualiser__AreAnyCosmeticSettingsEnabled
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                long param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if (*(long *)(param_5 + 0xc0) != 0) {
    if (*(char *)(*(long *)(param_5 + 0xc0) + 0x10) != '\0') {
      return 1;
    }
    if (*(long *)(param_5 + 200) != 0) {
      if (*(char *)(*(long *)(param_5 + 200) + 0x10) != '\0') {
        return 1;
      }
      if (*(long *)(param_5 + 0xd0) != 0) {
        if (*(char *)(*(long *)(param_5 + 0xd0) + 0x10) != '\0') {
          return 1;
        }
        if (*(long *)(param_5 + 0xd8) != 0) {
          if (*(char *)(*(long *)(param_5 + 0xd8) + 0x10) != '\0') {
            return 1;
          }
          if (*(long *)(param_5 + 0xe0) != 0) {
            if (*(char *)(*(long *)(param_5 + 0xe0) + 0x10) != '\0') {
              return 1;
            }
            if (*(long *)(param_5 + 0xe8) != 0) {
              return (ulong)(*(char *)(*(long *)(param_5 + 0xe8) + 0x10) != '\0');
            }
          }
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  if (*(char *)(lVar4 + 0x30) == '\0') {
    /*Atlas.Gameplay.DebugVisualiser$$CacheSceneObjects*/ func_0x0157deb8(lVar4,0);
    *(undefined1 *)(lVar4 + 0x30) = 1;
  }
  uVar5 = /*Atlas.Gameplay.DebugVisualiser$$DestroyProxyGameObjectRoot*/ func_0x0157fc14(lVar4);
  *(undefined8 *)(lVar4 + 0x60) = 0;
  /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar5,*(undefined8 *)(lVar4 + 0x38),1);
  uVar5 = /*Atlas.Gameplay.DebugVisualiser$$CreateProxyGameObjectRoot*/ func_0x0157fb5c(lVar4);
  if (*(long *)(lVar4 + 0xc0) == 0) goto code_r0x0157cd20;
  cVar1 = *(char *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if (cVar1 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar4 + 0x78);
  }
  if (*(long *)(lVar4 + 0xd8) == 0) goto code_r0x0157cd20;
  cVar2 = *(char *)(*(long *)(lVar4 + 0xd8) + 0x10);
  if (cVar2 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + 0x88);
  }
  if (*(long *)(lVar4 + 200) == 0) goto code_r0x0157cd20;
  cVar3 = *(char *)(*(long *)(lVar4 + 200) + 0x10);
  if (cVar3 == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar4 + 0x90);
  }
  if (*(long *)(lVar4 + 0xd0) == 0) goto code_r0x0157cd20;
  if (*(char *)(*(long *)(lVar4 + 0xd0) + 0x10) == '\0') {
    uVar11 = 0;
    if (cVar1 == '\0') goto code_r0x0157cc50;
code_r0x0157cc30:
    uVar12 = *(undefined8 *)(lVar4 + 0x80);
    if (cVar2 != '\0') goto code_r0x0157cc38;
code_r0x0157cc58:
    uVar13 = 0;
    if (cVar3 == '\0') goto code_r0x0157cc60;
code_r0x0157cc40:
    uVar14 = *(undefined8 *)(lVar4 + 0x80);
  }
  else {
    uVar11 = *(undefined8 *)(lVar4 + 0x98);
    if (cVar1 != '\0') goto code_r0x0157cc30;
code_r0x0157cc50:
    uVar12 = 0;
    if (cVar2 == '\0') goto code_r0x0157cc58;
code_r0x0157cc38:
    uVar13 = *(undefined8 *)(lVar4 + 0x80);
    if (cVar3 != '\0') goto code_r0x0157cc40;
code_r0x0157cc60:
    uVar14 = 0;
  }
  if (*(long *)(lVar4 + 0xe0) != 0) {
    /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar5,*(undefined8 *)(lVar4 + 0x38),
                    *(char *)(*(long *)(lVar4 + 0xe0) + 0x10) == '\0');
    /*Atlas.Gameplay.DebugVisualiser$$CreateMeshColliderVisuals*/ func_0x0157f4a4(lVar4,*(undefined8 *)(lVar4 + 0x40),uVar7,uVar9,uVar10,uVar11);
    if (*(long *)(lVar4 + 0xe8) != 0) {
      if (*(char *)(*(long *)(lVar4 + 0xe8) + 0x10) != '\0') {
        uVar7 = uVar12;
        uVar9 = uVar13;
        uVar10 = uVar14;
      }
      uVar6 = /*Atlas.Gameplay.DebugVisualiser$$CreateMeshColliderVisuals*/ func_0x0157f4a4(lVar4,*(undefined8 *)(lVar4 + 0x48),uVar7,uVar9,uVar10,uVar11);
      if (*(long *)(lVar4 + 0xf0) != 0) {
        if (*(char *)(*(long *)(lVar4 + 0xf0) + 0x10) == '\0') {
          return uVar6;
        }
        if ((bRam0000000003eb5096 & 1) == 0) {
          func_0x00f78a20(0x3d3d070);
          func_0x00f78a20(0x3d3d068);
          func_0x00f78a20(0x3d1e110);
          func_0x00f78a20(0x3d23298);
          func_0x00f78a20(0x3d76358);
          bRam0000000003eb5096 = 1;
        }
        uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
        /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar5,0x14,uRam0000000003d3d068);
        *(undefined8 *)(lVar4 + 0x60) = uVar5;
        uVar5 = *(undefined8 *)(lVar4 + 0xa0);
        uVar7 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
        /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar7,uVar5,0);
        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        uVar5 = /*STR('WaypointSphere')*/ uRam0000000003d76358;
        uVar9 = *(undefined8 *)(lVar4 + 0x70);
        uVar15 = param_2;
        uVar16 = param_3;
        /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
        /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
        uVar6 = /*Atlas.Gameplay.DebugVisualiser$$CreateMeshProxy*/ func_0x0157f840(extraout_b0,param_2,param_3,
                                CONCAT13(extraout_var_01,
                                         CONCAT12(extraout_var_00,
                                                  CONCAT11(extraout_var,extraout_b0_00))),uVar15,
                                uVar16,param_4,lVar4,uVar9,uVar5,uVar7);
        return uVar6;
      }
    }
  }
code_r0x0157cd20:
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(lVar4 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar4 + 0xb0),lVar4,0);
    *(undefined4 *)(lVar4 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar4 + 0xb0) = 0;
  }
  uVar5 = /*Atlas.Gameplay.DebugVisualiser$$DestroyProxyGameObjectRoot*/ func_0x0157fc14(lVar4);
  *(undefined8 *)(lVar4 + 0x60) = 0;
  /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar5,*(undefined8 *)(lVar4 + 0x38),1);
  if (*(char *)(lVar4 + 0xf8) != '\0') {
    /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(0,0);
    *(undefined1 *)(lVar4 + 0xf8) = 0;
  }
  if (*(char *)(lVar4 + 0xf9) != '\0') {
    *(undefined1 *)(lVar4 + 0xf9) = 0;
  }
  lVar8 = *(long *)(lVar4 + 0x18);
  uVar5 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
  Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
            (uVar5,lVar4,uRam0000000003d54b70,0);
  if (lVar8 != 0) {
    Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar8,uVar5,0);
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x78) = 0;
    *(undefined8 *)(lVar4 + 0x80) = 0;
    uVar5 = *(undefined8 *)(lVar4 + 0x50);
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar5,0);
    *(undefined8 *)(lVar4 + 0x50) = 0;
    if (*(long *)(lVar4 + 0x28) != 0) {
      *(undefined8 *)(*(long *)(lVar4 + 0x28) + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      return uVar6;
    }
  }
  lVar4 = func_0x00f78af4();
  uVar6 = 0;
  if (*(long *)(lVar4 + 0xb0) != 0) {
    uVar6 = /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar4 + 0xb0),lVar4,0);
    *(undefined4 *)(lVar4 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar4 + 0xb0) = 0;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x157cb6c | Atlas.Gameplay.DebugVisualiser.UpdateSettings
// ============================================================

/* WARNING: Possible PIC construction at 0x0157cfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157cfdc) */
/* WARNING: Removing unreachable block (ram,0x0157d014) */
/* WARNING: Removing unreachable block (ram,0x0157cfe8) */
/* WARNING: Removing unreachable block (ram,0x0157cffc) */

void Atlas_Gameplay_DebugVisualiser__UpdateSettings
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if (*(char *)(param_5 + 0x30) == '\0') {
    /*Atlas.Gameplay.DebugVisualiser$$CacheSceneObjects*/ func_0x0157deb8(param_5,0);
    *(undefined1 *)(param_5 + 0x30) = 1;
  }
  uVar4 = /*Atlas.Gameplay.DebugVisualiser$$DestroyProxyGameObjectRoot*/ func_0x0157fc14(param_5);
  *(undefined8 *)(param_5 + 0x60) = 0;
  /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar4,*(undefined8 *)(param_5 + 0x38),1);
  uVar4 = /*Atlas.Gameplay.DebugVisualiser$$CreateProxyGameObjectRoot*/ func_0x0157fb5c(param_5);
  if (*(long *)(param_5 + 0xc0) == 0) goto LAB_0157cd20;
  cVar1 = *(char *)(*(long *)(param_5 + 0xc0) + 0x10);
  if (cVar1 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_5 + 0x78);
  }
  if (*(long *)(param_5 + 0xd8) == 0) goto LAB_0157cd20;
  cVar2 = *(char *)(*(long *)(param_5 + 0xd8) + 0x10);
  if (cVar2 == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_5 + 0x88);
  }
  if (*(long *)(param_5 + 200) == 0) goto LAB_0157cd20;
  cVar3 = *(char *)(*(long *)(param_5 + 200) + 0x10);
  if (cVar3 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_5 + 0x90);
  }
  if (*(long *)(param_5 + 0xd0) == 0) goto LAB_0157cd20;
  if (*(char *)(*(long *)(param_5 + 0xd0) + 0x10) == '\0') {
    uVar10 = 0;
    if (cVar1 == '\0') goto code_r0x0157cc50;
code_r0x0157cc30:
    uVar11 = *(undefined8 *)(param_5 + 0x80);
    if (cVar2 != '\0') goto code_r0x0157cc38;
code_r0x0157cc58:
    uVar12 = 0;
    if (cVar3 == '\0') goto code_r0x0157cc60;
code_r0x0157cc40:
    uVar13 = *(undefined8 *)(param_5 + 0x80);
  }
  else {
    uVar10 = *(undefined8 *)(param_5 + 0x98);
    if (cVar1 != '\0') goto code_r0x0157cc30;
code_r0x0157cc50:
    uVar11 = 0;
    if (cVar2 == '\0') goto code_r0x0157cc58;
code_r0x0157cc38:
    uVar12 = *(undefined8 *)(param_5 + 0x80);
    if (cVar3 != '\0') goto code_r0x0157cc40;
code_r0x0157cc60:
    uVar13 = 0;
  }
  if (*(long *)(param_5 + 0xe0) != 0) {
    /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar4,*(undefined8 *)(param_5 + 0x38),
                    *(char *)(*(long *)(param_5 + 0xe0) + 0x10) == '\0');
    /*Atlas.Gameplay.DebugVisualiser$$CreateMeshColliderVisuals*/ func_0x0157f4a4(param_5,*(undefined8 *)(param_5 + 0x40),uVar6,uVar8,uVar9,uVar10);
    if (*(long *)(param_5 + 0xe8) != 0) {
      if (*(char *)(*(long *)(param_5 + 0xe8) + 0x10) != '\0') {
        uVar6 = uVar11;
        uVar8 = uVar12;
        uVar9 = uVar13;
      }
      /*Atlas.Gameplay.DebugVisualiser$$CreateMeshColliderVisuals*/ func_0x0157f4a4(param_5,*(undefined8 *)(param_5 + 0x48),uVar6,uVar8,uVar9,uVar10);
      if (*(long *)(param_5 + 0xf0) != 0) {
        if (*(char *)(*(long *)(param_5 + 0xf0) + 0x10) == '\0') {
          return;
        }
        if ((bRam0000000003eb5096 & 1) == 0) {
          func_0x00f78a20(0x3d3d070);
          func_0x00f78a20(0x3d3d068);
          func_0x00f78a20(0x3d1e110);
          func_0x00f78a20(0x3d23298);
          func_0x00f78a20(0x3d76358);
          bRam0000000003eb5096 = 1;
        }
        uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
        /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar4,0x14,uRam0000000003d3d068);
        *(undefined8 *)(param_5 + 0x60) = uVar4;
        uVar4 = *(undefined8 *)(param_5 + 0xa0);
        uVar6 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
        /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar6,uVar4,0);
        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        uVar4 = /*STR('WaypointSphere')*/ uRam0000000003d76358;
        uVar8 = *(undefined8 *)(param_5 + 0x70);
        uVar14 = param_2;
        uVar15 = param_3;
        /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
        /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
        /*Atlas.Gameplay.DebugVisualiser$$CreateMeshProxy*/ func_0x0157f840(extraout_b0,param_2,param_3,
                        CONCAT13(extraout_var_01,
                                 CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0_00))),
                        uVar14,uVar15,param_4,param_5,uVar8,uVar4,uVar6);
        return;
      }
    }
  }
LAB_0157cd20:
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(lVar5 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar5 + 0xb0),lVar5,0);
    *(undefined4 *)(lVar5 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar5 + 0xb0) = 0;
  }
  uVar4 = /*Atlas.Gameplay.DebugVisualiser$$DestroyProxyGameObjectRoot*/ func_0x0157fc14(lVar5);
  *(undefined8 *)(lVar5 + 0x60) = 0;
  /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar4,*(undefined8 *)(lVar5 + 0x38),1);
  if (*(char *)(lVar5 + 0xf8) != '\0') {
    /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(0,0);
    *(undefined1 *)(lVar5 + 0xf8) = 0;
  }
  if (*(char *)(lVar5 + 0xf9) != '\0') {
    *(undefined1 *)(lVar5 + 0xf9) = 0;
  }
  lVar7 = *(long *)(lVar5 + 0x18);
  uVar4 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
  Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
            (uVar4,lVar5,uRam0000000003d54b70,0);
  if (lVar7 != 0) {
    Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar7,uVar4,0);
    *(undefined8 *)(lVar5 + 0x40) = 0;
    *(undefined8 *)(lVar5 + 0x48) = 0;
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x78) = 0;
    *(undefined8 *)(lVar5 + 0x80) = 0;
    uVar4 = *(undefined8 *)(lVar5 + 0x50);
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar4,0);
    *(undefined8 *)(lVar5 + 0x50) = 0;
    if (*(long *)(lVar5 + 0x28) != 0) {
      *(undefined8 *)(*(long *)(lVar5 + 0x28) + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x28) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      return;
    }
  }
  lVar5 = func_0x00f78af4();
  if (*(long *)(lVar5 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar5 + 0xb0),lVar5,0);
    *(undefined4 *)(lVar5 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar5 + 0xb0) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x157cd24 | Atlas.Gameplay.DebugVisualiser.DeInit
// ============================================================

void Atlas_Gameplay_DebugVisualiser__DeInit(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(param_1 + 0xb0),param_1,0);
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  uVar1 = /*Atlas.Gameplay.DebugVisualiser$$DestroyProxyGameObjectRoot*/ func_0x0157fc14(param_1);
  *(undefined8 *)(param_1 + 0x60) = 0;
  /*Atlas.Gameplay.DebugVisualiser$$SetMeshRendererVisibility*/ func_0x0157f328(uVar1,*(undefined8 *)(param_1 + 0x38),1);
  if (*(char *)(param_1 + 0xf8) != '\0') {
    /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(0,0);
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  if (*(char *)(param_1 + 0xf9) != '\0') {
    *(undefined1 *)(param_1 + 0xf9) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  uVar1 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
  Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
            (uVar1,param_1,uRam0000000003d54b70,0);
  if (lVar2 != 0) {
    Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar2,uVar1,0);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar1,0);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (*(long *)(param_1 + 0x28) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      return;
    }
  }
  lVar2 = func_0x00f78af4();
  if (*(long *)(lVar2 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar2 + 0xb0),lVar2,0);
    *(undefined4 *)(lVar2 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x157ce84 | Atlas.Gameplay.DebugVisualiser.DeInitDebugMenuBindings
// ============================================================

void Atlas_Gameplay_DebugVisualiser__DeInitDebugMenuBindings(long param_1)

{
  if (*(long *)(param_1 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(param_1 + 0xb0),param_1,0);
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x157cec0 | Atlas.Gameplay.DebugVisualiser.Reset
// ============================================================

/* WARNING: Possible PIC construction at 0x0157ced0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157f814) */
/* WARNING: Removing unreachable block (ram,0x0157f598) */
/* WARNING: Removing unreachable block (ram,0x0157f5b0) */
/* WARNING: Removing unreachable block (ram,0x0157f5b8) */
/* WARNING: Removing unreachable block (ram,0x0157f5bc) */
/* WARNING: Removing unreachable block (ram,0x0157f5d0) */
/* WARNING: Removing unreachable block (ram,0x0157f5d4) */
/* WARNING: Removing unreachable block (ram,0x0157ced4) */
/* WARNING: Removing unreachable block (ram,0x0157f328) */
/* WARNING: Removing unreachable block (ram,0x0157f354) */
/* WARNING: Removing unreachable block (ram,0x0157f398) */
/* WARNING: Removing unreachable block (ram,0x0157f45c) */
/* WARNING: Removing unreachable block (ram,0x0157f470) */
/* WARNING: Removing unreachable block (ram,0x0157f478) */
/* WARNING: Removing unreachable block (ram,0x0157f494) */
/* WARNING: Removing unreachable block (ram,0x0157f4a0) */
/* WARNING: Removing unreachable block (ram,0x0157f4e0) */
/* WARNING: Removing unreachable block (ram,0x0157f518) */
/* WARNING: Removing unreachable block (ram,0x0157f640) */
/* WARNING: Removing unreachable block (ram,0x0157f51c) */
/* WARNING: Removing unreachable block (ram,0x0157f528) */
/* WARNING: Removing unreachable block (ram,0x0157f534) */
/* WARNING: Removing unreachable block (ram,0x0157f53c) */
/* WARNING: Removing unreachable block (ram,0x0157f544) */
/* WARNING: Removing unreachable block (ram,0x0157f608) */
/* WARNING: Removing unreachable block (ram,0x0157f620) */
/* WARNING: Removing unreachable block (ram,0x0157f610) */
/* WARNING: Removing unreachable block (ram,0x0157f554) */
/* WARNING: Removing unreachable block (ram,0x0157f568) */
/* WARNING: Removing unreachable block (ram,0x0157f574) */
/* WARNING: Removing unreachable block (ram,0x0157f580) */
/* WARNING: Removing unreachable block (ram,0x0157f644) */
/* WARNING: Removing unreachable block (ram,0x0157f68c) */
/* WARNING: Removing unreachable block (ram,0x0157f6a0) */
/* WARNING: Removing unreachable block (ram,0x0157f83c) */
/* WARNING: Removing unreachable block (ram,0x0157f6a4) */
/* WARNING: Removing unreachable block (ram,0x0157f6bc) */
/* WARNING: Removing unreachable block (ram,0x0157f6c4) */
/* WARNING: Removing unreachable block (ram,0x0157f6ec) */
/* WARNING: Removing unreachable block (ram,0x0157f6d0) */
/* WARNING: Removing unreachable block (ram,0x0157f6dc) */
/* WARNING: Removing unreachable block (ram,0x0157f6fc) */
/* WARNING: Removing unreachable block (ram,0x0157f724) */
/* WARNING: Removing unreachable block (ram,0x0157f72c) */
/* WARNING: Removing unreachable block (ram,0x0157f754) */
/* WARNING: Removing unreachable block (ram,0x0157f738) */
/* WARNING: Removing unreachable block (ram,0x0157f744) */
/* WARNING: Removing unreachable block (ram,0x0157f764) */
/* WARNING: Removing unreachable block (ram,0x0157f790) */
/* WARNING: Removing unreachable block (ram,0x0157f798) */
/* WARNING: Removing unreachable block (ram,0x0157f7c0) */
/* WARNING: Removing unreachable block (ram,0x0157f7a4) */
/* WARNING: Removing unreachable block (ram,0x0157f7b0) */
/* WARNING: Removing unreachable block (ram,0x0157f7d0) */
/* WARNING: Removing unreachable block (ram,0x0157f840) */
/* WARNING: Removing unreachable block (ram,0x0157f8a8) */
/* WARNING: Removing unreachable block (ram,0x0157f8ec) */
/* WARNING: Removing unreachable block (ram,0x0157f8f8) */
/* WARNING: Removing unreachable block (ram,0x0157f900) */
/* WARNING: Removing unreachable block (ram,0x0157f904) */
/* WARNING: Removing unreachable block (ram,0x0157f91c) */
/* WARNING: Removing unreachable block (ram,0x0157f940) */
/* WARNING: Removing unreachable block (ram,0x0157f954) */
/* WARNING: Removing unreachable block (ram,0x0157f9ac) */
/* WARNING: Removing unreachable block (ram,0x0157f3a4) */
/* WARNING: Removing unreachable block (ram,0x0157f3d8) */
/* WARNING: Removing unreachable block (ram,0x0157f430) */
/* WARNING: Removing unreachable block (ram,0x0157f43c) */
/* WARNING: Removing unreachable block (ram,0x0157f3e8) */
/* WARNING: Removing unreachable block (ram,0x0157f3f8) */
/* WARNING: Removing unreachable block (ram,0x0157f400) */
/* WARNING: Removing unreachable block (ram,0x0157f404) */
/* WARNING: Removing unreachable block (ram,0x0157f418) */
/* WARNING: Removing unreachable block (ram,0x0157f454) */
/* WARNING: Removing unreachable block (ram,0x0157f41c) */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fb4c) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fb50) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157fb54) */
/* WARNING: Removing unreachable block (ram,0x0157fb8c) */
/* WARNING: Removing unreachable block (ram,0x0157fbac) */
/* WARNING: Removing unreachable block (ram,0x0157fbcc) */
/* WARNING: Removing unreachable block (ram,0x0157fbe4) */
/* WARNING: Removing unreachable block (ram,0x0157fc10) */
/* WARNING: Removing unreachable block (ram,0x0157fbf0) */
/* WARNING: Removing unreachable block (ram,0x03275ee0) */
/* WARNING: Removing unreachable block (ram,0x03275f08) */
/* WARNING: Removing unreachable block (ram,0x03275f1c) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */
/* WARNING: Removing unreachable block (ram,0x0157fb18) */

void Atlas_Gameplay_DebugVisualiser__Reset(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar2,0);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x157ceec | Atlas.Gameplay.DebugVisualiser.InitWaypoints
// ============================================================

/* WARNING: Possible PIC construction at 0x0157cfd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157cfdc) */
/* WARNING: Removing unreachable block (ram,0x0157d014) */
/* WARNING: Removing unreachable block (ram,0x0157cfe8) */

void Atlas_Gameplay_DebugVisualiser__InitWaypoints
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((bRam0000000003eb5096 & 1) == 0) {
    func_0x00f78a20(0x3d3d070);
    func_0x00f78a20(0x3d3d068);
    func_0x00f78a20(0x3d1e110);
    func_0x00f78a20(0x3d23298);
    func_0x00f78a20(0x3d76358);
    bRam0000000003eb5096 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
  /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar1,param_6,uRam0000000003d3d068);
  *(undefined8 *)(param_5 + 0x60) = uVar1;
  if (0 < (int)param_6) {
    uVar1 = *(undefined8 *)(param_5 + 0xa0);
    uVar2 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
    /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar2,uVar1,0);
    uVar4 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    uVar1 = /*STR('WaypointSphere')*/ uRam0000000003d76358;
    uVar3 = *(undefined8 *)(param_5 + 0x70);
    uVar6 = param_2;
    uVar7 = param_3;
    uVar5 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    /*Atlas.Gameplay.DebugVisualiser$$CreateMeshProxy*/ func_0x0157f840(uVar4,param_2,param_3,uVar5,uVar6,uVar7,param_4,param_5,uVar3,uVar1,uVar2);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x157d018 | Atlas.Gameplay.DebugVisualiser.CreateUnitSphere
// ============================================================

void Atlas_Gameplay_DebugVisualiser__CreateUnitSphere
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined8 *)(param_5 + 0x70);
  uVar3 = param_2;
  uVar4 = param_3;
  uVar2 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
  /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  /*Atlas.Gameplay.DebugVisualiser$$CreateMeshProxy*/ func_0x0157f840(param_1,param_2,param_3,uVar2,uVar3,uVar4,param_4,param_5,uVar1,param_6,param_7);
  return;
}



// ============================================================
// RVA: 0x157d0d4 | Atlas.Gameplay.DebugVisualiser.UpdateWaypoints
// ============================================================

/* WARNING: Possible PIC construction at 0x0157d75c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d8ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157da10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e15c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e4b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e5d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157e6c4) */
/* WARNING: Removing unreachable block (ram,0x0157e6c8) */
/* WARNING: Removing unreachable block (ram,0x0157e6cc) */
/* WARNING: Removing unreachable block (ram,0x0157e6f0) */
/* WARNING: Removing unreachable block (ram,0x0157e6f8) */
/* WARNING: Removing unreachable block (ram,0x0157e6fc) */
/* WARNING: Removing unreachable block (ram,0x0157e710) */
/* WARNING: Removing unreachable block (ram,0x0157e644) */
/* WARNING: Removing unreachable block (ram,0x0157e648) */
/* WARNING: Removing unreachable block (ram,0x0157e5d4) */
/* WARNING: Removing unreachable block (ram,0x0157e5ec) */
/* WARNING: Removing unreachable block (ram,0x0157e5f4) */
/* WARNING: Removing unreachable block (ram,0x0157e5f8) */
/* WARNING: Removing unreachable block (ram,0x0157e60c) */
/* WARNING: Removing unreachable block (ram,0x0157e570) */
/* WARNING: Removing unreachable block (ram,0x0157e580) */
/* WARNING: Removing unreachable block (ram,0x0157e598) */
/* WARNING: Removing unreachable block (ram,0x0157e58c) */
/* WARNING: Removing unreachable block (ram,0x0157e5a0) */
/* WARNING: Removing unreachable block (ram,0x0157e594) */
/* WARNING: Removing unreachable block (ram,0x0157e528) */
/* WARNING: Removing unreachable block (ram,0x0157e4bc) */
/* WARNING: Removing unreachable block (ram,0x0157e67c) */
/* WARNING: Removing unreachable block (ram,0x0157e4c0) */
/* WARNING: Removing unreachable block (ram,0x0157e4c4) */
/* WARNING: Removing unreachable block (ram,0x0157e440) */
/* WARNING: Removing unreachable block (ram,0x0157e444) */
/* WARNING: Removing unreachable block (ram,0x0157e3d0) */
/* WARNING: Removing unreachable block (ram,0x0157e3e8) */
/* WARNING: Removing unreachable block (ram,0x0157e3f0) */
/* WARNING: Removing unreachable block (ram,0x0157e3f4) */
/* WARNING: Removing unreachable block (ram,0x0157e408) */
/* WARNING: Removing unreachable block (ram,0x0157e36c) */
/* WARNING: Removing unreachable block (ram,0x0157e37c) */
/* WARNING: Removing unreachable block (ram,0x0157e390) */
/* WARNING: Removing unreachable block (ram,0x0157e388) */
/* WARNING: Removing unreachable block (ram,0x0157e394) */
/* WARNING: Removing unreachable block (ram,0x0157e39c) */
/* WARNING: Removing unreachable block (ram,0x0157e304) */
/* WARNING: Removing unreachable block (ram,0x0157e474) */
/* WARNING: Removing unreachable block (ram,0x0157e308) */
/* WARNING: Removing unreachable block (ram,0x0157e30c) */
/* WARNING: Removing unreachable block (ram,0x0157e288) */
/* WARNING: Removing unreachable block (ram,0x0157e28c) */
/* WARNING: Removing unreachable block (ram,0x0157e214) */
/* WARNING: Removing unreachable block (ram,0x0157e22c) */
/* WARNING: Removing unreachable block (ram,0x0157e234) */
/* WARNING: Removing unreachable block (ram,0x0157e238) */
/* WARNING: Removing unreachable block (ram,0x0157e24c) */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */
/* WARNING: Removing unreachable block (ram,0x0157f814) */
/* WARNING: Removing unreachable block (ram,0x0157f598) */
/* WARNING: Removing unreachable block (ram,0x0157f5b0) */
/* WARNING: Removing unreachable block (ram,0x0157f5b8) */
/* WARNING: Removing unreachable block (ram,0x0157f5bc) */
/* WARNING: Removing unreachable block (ram,0x0157f5d0) */
/* WARNING: Removing unreachable block (ram,0x0157f5d4) */
/* WARNING: Removing unreachable block (ram,0x0157e8f8) */
/* WARNING: Removing unreachable block (ram,0x0157e1b0) */
/* WARNING: Removing unreachable block (ram,0x0157e1c0) */
/* WARNING: Removing unreachable block (ram,0x0157e1d8) */
/* WARNING: Removing unreachable block (ram,0x0157e1cc) */
/* WARNING: Removing unreachable block (ram,0x0157e1e0) */
/* WARNING: Removing unreachable block (ram,0x0157e1d4) */
/* WARNING: Removing unreachable block (ram,0x0157e160) */
/* WARNING: Removing unreachable block (ram,0x0157e2c0) */
/* WARNING: Removing unreachable block (ram,0x0157e164) */
/* WARNING: Removing unreachable block (ram,0x0157e168) */
/* WARNING: Removing unreachable block (ram,0x0157e0fc) */
/* WARNING: Removing unreachable block (ram,0x0157e100) */
/* WARNING: Removing unreachable block (ram,0x0157e108) */
/* WARNING: Removing unreachable block (ram,0x01641834) */
/* WARNING: Removing unreachable block (ram,0x0164183c) */
/* WARNING: Removing unreachable block (ram,0x0164185c) */
/* WARNING: Removing unreachable block (ram,0x01641870) */
/* WARNING: Removing unreachable block (ram,0x0164148c) */
/* WARNING: Removing unreachable block (ram,0x01641494) */
/* WARNING: Removing unreachable block (ram,0x016414b4) */
/* WARNING: Removing unreachable block (ram,0x016414c8) */
/* WARNING: Removing unreachable block (ram,0x0157da14) */
/* WARNING: Removing unreachable block (ram,0x01641368) */
/* WARNING: Removing unreachable block (ram,0x016413b4) */
/* WARNING: Removing unreachable block (ram,0x016413e0) */
/* WARNING: Removing unreachable block (ram,0x016414d4) */
/* WARNING: Removing unreachable block (ram,0x016414d8) */
/* WARNING: Removing unreachable block (ram,0x01641404) */
/* WARNING: Removing unreachable block (ram,0x016414fc) */
/* WARNING: Removing unreachable block (ram,0x01641500) */
/* WARNING: Removing unreachable block (ram,0x0164140c) */
/* WARNING: Removing unreachable block (ram,0x01641504) */
/* WARNING: Removing unreachable block (ram,0x01641548) */
/* WARNING: Removing unreachable block (ram,0x016415a4) */
/* WARNING: Removing unreachable block (ram,0x016415c8) */
/* WARNING: Removing unreachable block (ram,0x016415ec) */
/* WARNING: Removing unreachable block (ram,0x016415f4) */
/* WARNING: Removing unreachable block (ram,0x01641608) */
/* WARNING: Removing unreachable block (ram,0x01641618) */
/* WARNING: Removing unreachable block (ram,0x01641620) */
/* WARNING: Removing unreachable block (ram,0x01641624) */
/* WARNING: Removing unreachable block (ram,0x0164162c) */
/* WARNING: Removing unreachable block (ram,0x0164166c) */
/* WARNING: Removing unreachable block (ram,0x01641680) */
/* WARNING: Removing unreachable block (ram,0x01641688) */
/* WARNING: Removing unreachable block (ram,0x01641698) */
/* WARNING: Removing unreachable block (ram,0x016416a0) */
/* WARNING: Removing unreachable block (ram,0x01641714) */
/* WARNING: Removing unreachable block (ram,0x016416dc) */
/* WARNING: Removing unreachable block (ram,0x016416f4) */
/* WARNING: Removing unreachable block (ram,0x0157d9b0) */
/* WARNING: Removing unreachable block (ram,0x0157d9b8) */
/* WARNING: Removing unreachable block (ram,0x0157d958) */
/* WARNING: Removing unreachable block (ram,0x0157d8f0) */
/* WARNING: Removing unreachable block (ram,0x0157d8f8) */
/* WARNING: Removing unreachable block (ram,0x0157d88c) */
/* WARNING: Removing unreachable block (ram,0x0157d894) */
/* WARNING: Removing unreachable block (ram,0x0157d828) */
/* WARNING: Removing unreachable block (ram,0x0157d830) */
/* WARNING: Removing unreachable block (ram,0x0157d7c4) */
/* WARNING: Removing unreachable block (ram,0x0157d7cc) */
/* WARNING: Removing unreachable block (ram,0x0157d760) */
/* WARNING: Removing unreachable block (ram,0x0157d768) */
/* WARNING: Removing unreachable block (ram,0x0157e764) */
/* WARNING: Removing unreachable block (ram,0x0157e774) */
/* WARNING: Removing unreachable block (ram,0x0157e788) */
/* WARNING: Removing unreachable block (ram,0x0157e780) */
/* WARNING: Removing unreachable block (ram,0x0157e78c) */
/* WARNING: Removing unreachable block (ram,0x0157e794) */
/* WARNING: Removing unreachable block (ram,0x0157e7bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_DebugVisualiser__UpdateWaypoints
                 (undefined1 param_1 [16],ulong param_2,undefined1 param_3 [16],ulong param_4,
                 ulong param_5,float param_6,uint param_7,long *param_8,ulong param_9,
                 float *param_10,float *param_11,float *param_12,long *param_13)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  undefined1 *puVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  long *plVar15;
  long lVar16;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  float *pfVar22;
  long *plVar23;
  ulong uVar24;
  int iVar14;
  long *plVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined4 extraout_w1;
  uint uVar29;
  uint uVar30;
  int extraout_w1_00;
  long extraout_x1;
  long *extraout_x1_00;
  long extraout_x1_01;
  undefined8 extraout_x1_02;
  long extraout_x1_03;
  float *pfVar31;
  float *pfVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  float *pfVar36;
  undefined1 *puVar37;
  float *pfVar38;
  undefined8 *extraout_x8;
  ulong uVar39;
  ulong uVar40;
  int *piVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  uint uVar46;
  undefined8 unaff_x21;
  ulong uVar47;
  undefined8 unaff_x22;
  ulong uVar48;
  float fVar49;
  undefined8 unaff_x23;
  ulong uVar50;
  ulong uVar51;
  undefined8 unaff_x24;
  undefined8 uVar52;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined *puVar53;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 uVar54;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_b0_07;
  undefined1 extraout_b0_08;
  undefined1 extraout_b0_09;
  undefined1 extraout_b0_10;
  undefined1 extraout_b0_11;
  undefined1 extraout_b0_12;
  undefined1 extraout_b0_13;
  undefined1 extraout_b0_14;
  undefined1 extraout_b0_15;
  undefined1 extraout_b0_16;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar55;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 uVar56;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 uVar57;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  undefined1 extraout_var_38;
  undefined1 extraout_var_39;
  undefined1 extraout_var_40;
  undefined1 extraout_var_41;
  undefined1 extraout_var_42;
  undefined1 extraout_var_43;
  undefined1 extraout_var_44;
  undefined1 extraout_var_45;
  undefined1 extraout_var_46;
  undefined1 extraout_var_47;
  undefined1 extraout_var_48;
  undefined1 extraout_var_49;
  uint uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined4 uVar62;
  undefined8 unaff_d8;
  ulong uVar63;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  float fVar64;
  ulong unaff_d11;
  float fVar65;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  float fVar66;
  undefined4 uVar67;
  ulong unaff_d15;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  
  uVar62 = param_3._4_4_;
  fVar60 = param_3._0_4_;
  uVar56 = param_1[3];
  uVar55 = param_1[2];
  uVar54 = param_1[1];
  uVar10 = param_1[0];
  do {
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_d15;
    *(ulong *)((long)register0x00000008 + -0x98) = unaff_d14;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x88) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x80) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d10;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar35 = (ulong)(uint)fVar60;
    uVar63 = param_2 & 0xffffffff;
    uVar51 = (ulong)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar10)));
    plVar15 = param_8;
    pfVar32 = param_11;
    pfVar38 = param_12;
    uVar48 = param_2;
    fVar59 = fVar60;
    if ((bRam0000000003eb5097 & 1) == 0) {
      func_0x00f78a20(0x3d3d078);
      plVar15 = (long *)func_0x00f78a20(0x3d777a8);
      bRam0000000003eb5097 = 1;
    }
    unaff_x27 = param_8[0xc];
    if (unaff_x27 == 0) {
      return plVar15;
    }
    uVar28 = 0x3d777a8;
    fVar49 = (float)((int)param_11 - 1);
    if ((int)param_11 < 1) {
      uVar50 = 0;
code_r0x0157d2c0:
      fVar49 = (float)uVar50;
      if ((uint)*(float *)(unaff_x27 + 0x18) <= (uint)fVar49) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(*(long *)(unaff_x27 + 0x10) + uVar50 * 0x10 + 0x20);
      fVar61 = fVar59;
      if ((lVar16 != 0) && (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar16,0), fVar61 = fVar59, lVar16 != 0)) {
        param_10 = (float *)0x0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar16,1);
        param_12 = (float *)param_8[0xc];
        fVar61 = fVar59;
        if (param_12 != (float *)0x0) {
          if ((uint)param_12[6] <= (uint)fVar49) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar16 = *(long *)(*(long *)(param_12 + 4) + uVar50 * 0x10 + 0x20);
          param_9 = uVar50;
          fVar61 = fVar59;
          if ((lVar16 != 0) && (lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar16,0), fVar61 = fVar59, lVar16 != 0)) {
            uVar48 = param_2 & 0xffffffff;
            uVar62 = 0;
            /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(uVar10,lVar16,0);
            lVar16 = param_8[0xc];
            param_12 = (float *)0x0;
            fVar61 = fVar60;
            if (lVar16 != 0) {
              if ((uint)*(float *)(lVar16 + 0x18) <= (uint)fVar49) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + uVar50 * 0x10 + 0x28);
              /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
              param_12 = (float *)0x0;
              fVar61 = fVar60;
              if (lVar16 != 0) {
                param_10 = (float *)0x0;
                plVar15 = (long *)/*UnityEngine.Material$$SetColor*/ func_0x03237f3c(lVar16,/*STR('_ToonColour')*/ uRam0000000003d777a8);
                if (0x12 < (int)fVar49) {
                  return plVar15;
                }
                param_12 = (float *)(uVar50 * 0x10 + 0x30);
                while( true ) {
                  param_9 = param_9 + 1;
                  param_11 = (float *)param_8[0xc];
                  fVar61 = fVar60;
                  if (param_11 == (float *)0x0) break;
                  if ((uint)param_11[6] <= param_9) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  fVar61 = fVar60;
                  if ((*(long *)(*(long *)(param_11 + 4) + (long)param_12) == 0) ||
                     (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(*(long *)(param_11 + 4) + (long)param_12),0
                                              ), fVar61 = fVar60, lVar16 == 0)) break;
                  param_10 = (float *)0x0;
                  plVar15 = (long *)/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar16,0);
                  param_12 = param_12 + 4;
                  if (param_12 == (float *)(section_00000158.sectname + 8)) {
                    return plVar15;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      unaff_x25 = 0;
      if (0x11 < (uint)fVar49) {
        fVar49 = 2.52234e-44;
      }
      unaff_x26 = (ulong)(uint)fVar49;
      uVar50 = (ulong)((int)fVar49 + 1);
      do {
        fVar65 = (float)unaff_x25;
        uVar47 = param_4;
        if ((uint)*(float *)(unaff_x27 + 0x18) <= (uint)fVar65) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar47 = param_4;
        }
        lVar16 = *(long *)(*(long *)(unaff_x27 + 0x10) + (long)(int)fVar65 * 0x10 + 0x20);
        fVar61 = fVar59;
        param_4 = uVar47;
        if ((lVar16 == 0) ||
           (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar16,0), fVar61 = fVar59, param_4 = uVar47, lVar16 == 0))
        break;
        param_10 = (float *)0x0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar16,1);
        param_11 = (float *)param_8[0xc];
        fVar61 = fVar59;
        param_4 = uVar47;
        if (param_11 == (float *)0x0) break;
        if ((uint)param_11[6] <= (uint)fVar65) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        unaff_x27 = (ulong)(int)fVar65;
        lVar16 = *(long *)(*(long *)(param_11 + 4) + unaff_x27 * 0x10 + 0x20);
        fVar61 = fVar59;
        param_4 = uVar47;
        if (lVar16 == 0) break;
        lVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar16,0);
        puVar1 = (undefined4 *)(param_9 + unaff_x27 * 0x10);
        uVar40 = (ulong)(uint)puVar1[1];
        fVar59 = (float)puVar1[2];
        uVar62 = 0;
        /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c((char)*puVar1,0);
        param_11 = (float *)0x0;
        uVar48 = uVar40;
        fVar61 = fVar59;
        param_4 = uVar47;
        if (lVar16 == 0) break;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar16,0);
        if (SUB84(param_12,0) == fVar65) {
          /*UnityEngine.Color$$get_red*/ func_0x0322356c(0);
          uVar54 = extraout_b0;
          uVar55 = extraout_var;
          uVar56 = extraout_var_16;
          uVar57 = extraout_var_33;
        }
        else if ((int)fVar65 < (int)SUB84(param_12,0)) {
          /*UnityEngine.Color$$get_blue*/ func_0x03223594(0);
          uVar54 = extraout_b0_00;
          uVar55 = extraout_var_00;
          uVar56 = extraout_var_17;
          uVar57 = extraout_var_34;
        }
        else {
          /*UnityEngine.Color$$get_yellow*/ func_0x032235d0(0);
          uVar54 = extraout_b0_01;
          uVar55 = extraout_var_01;
          uVar56 = extraout_var_18;
          uVar57 = extraout_var_35;
        }
        unaff_d11 = (ulong)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54)));
        unaff_d12 = uVar40 & 0xffffffff;
        unaff_d13 = (ulong)(uint)fVar59;
        unaff_d14 = uVar47 & 0xffffffff;
        param_11 = (float *)param_8[0xc];
        uVar48 = uVar40;
        fVar61 = fVar59;
        param_4 = uVar47;
        if (param_11 == (float *)0x0) break;
        if ((uint)param_11[6] <= (uint)fVar65) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = *(long *)(*(long *)(param_11 + 4) + unaff_x27 * 0x10 + 0x28);
        if (lVar16 == 0) break;
        uVar48 = uVar40 & 0xffffffff;
        uVar62 = 0;
        param_4 = uVar47 & 0xffffffff;
        param_10 = (float *)0x0;
        /*UnityEngine.Material$$SetColor*/ func_0x03237f3c(uVar54,lVar16,/*STR('_ToonColour')*/ uRam0000000003d777a8);
        fVar61 = fVar59;
        if (fVar49 == fVar65) {
          unaff_x27 = param_8[0xc];
          if (unaff_x27 != 0) goto code_r0x0157d2c0;
          break;
        }
        unaff_x25 = (ulong)((int)fVar65 + 1);
        unaff_x27 = param_8[0xc];
      } while (unaff_x27 != 0);
    }
    auVar68 = func_0x00f78af4();
    lVar26 = auVar68._8_8_;
    plVar25 = auVar68._0_8_;
    *(ulong *)((long)register0x00000008 + -0x100) = uVar63;
    *(ulong *)((long)register0x00000008 + -0xf8) = uVar35;
    *(ulong *)((long)register0x00000008 + -0xf0) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0xe8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d777a8;
    *(ulong *)((long)register0x00000008 + -0xd8) = uVar50;
    *(float **)((long)register0x00000008 + -0xd0) = param_11;
    *(ulong *)((long)register0x00000008 + -200) = param_9;
    *(float **)((long)register0x00000008 + -0xc0) = param_12;
    *(long **)((long)register0x00000008 + -0xb8) = param_8;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0xa8) =
         &Atlas_Gameplay_DebugVisualiser__InitDebugMenuBindings;
    lVar16 = 0x3eb5000;
    plVar15 = plVar25;
    if ((bRam0000000003eb5098 & 1) == 0) {
      func_0x00f78a20(0x3d54b28);
      func_0x00f78a20(0x3d54b30);
      func_0x00f78a20(0x3d54b38);
      func_0x00f78a20(0x3d54b40);
      func_0x00f78a20(0x3d54b48);
      func_0x00f78a20(0x3d54b50);
      func_0x00f78a20(0x3d54b58);
      func_0x00f78a20(0x3d54b60);
      func_0x00f78a20(0x3d54b68);
      func_0x00f78a20(0x3d3bfa0);
      func_0x00f78a20(0x3d3bf88);
      func_0x00f78a20(0x3d1de30);
      func_0x00f78a20(0x3d41608);
      func_0x00f78a20(0x3d415f8);
      func_0x00f78a20(0x3d1eb38);
      func_0x00f78a20(0x3d1eb40);
      func_0x00f78a20(0x3d72948);
      func_0x00f78a20(0x3d72940);
      func_0x00f78a20(0x3d72950);
      func_0x00f78a20(0x3d713f8);
      func_0x00f78a20(0x3d6b890);
      func_0x00f78a20(0x3d72928);
      func_0x00f78a20(0x3d6d818);
      func_0x00f78a20(0x3d70570);
      func_0x00f78a20(0x3d70d30);
      func_0x00f78a20(0x3d6d008);
      func_0x00f78a20(0x3d72930);
      func_0x00f78a20(0x3d6d7e8);
      func_0x00f78a20(0x3d761c0);
      plVar15 = (long *)func_0x00f78a20(0x3d70d28);
      bRam0000000003eb5098 = 1;
    }
    if (plVar25[0x16] != 0) {
      return plVar15;
    }
    plVar25[0x16] = lVar26;
    if (lVar26 != 0) {
      fVar61 = 50.0;
      uVar62 = 0;
      uVar48 = 0;
      uVar11 = /*Core.DebugMenu.DebugMenu$$AddPanelByScreenPercentage*/ func_0x0163f854(0,lVar26,1,/*STR('Visualiser')*/ pfRam0000000003d761c0,plVar25,0xffffffff,0);
      *(undefined4 *)(plVar25 + 0x17) = uVar11;
      uVar11 = *(undefined4 *)(lVar26 + 0x3c);
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
      pfVar32 = (float *)((long)&MACH_HEADER.magic + 1);
      pfVar38 = (float *)0x0;
      param_10 = /*STR('Visualiser')*/ pfRam0000000003d761c0;
      param_13 = plVar25;
      /*Core.DebugMenu.DebugMenu$$AddButton*/ func_0x0163f880(0,lVar26,uVar11);
      lVar16 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar16,uRam0000000003d3bf88);
      if (lVar16 != 0) {
        param_11 = (float *)0x3d3bfa0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar16,/*STR('None')*/ uRam0000000003d70570,pfRam0000000003d3bfa0);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar16,/*STR('Free')*/ uRam0000000003d6d008,pfRam0000000003d3bfa0);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar16,/*STR('Orbital Local')*/ uRam0000000003d70d28,pfRam0000000003d3bfa0);
        param_10 = pfRam0000000003d3bfa0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar16,/*STR('Orbital World')*/ uRam0000000003d70d30);
        if (plVar25[0x18] != 0) {
          uVar48 = (ulong)*(uint *)(plVar25 + 0x17);
          uVar51 = (ulong)*(byte *)(plVar25[0x18] + 0x10);
          puVar17 = (undefined1 *)func_0x00f78aec(/*UnityEngine.Events.UnityAction<int, bool>_TypeInfo*/ uRam0000000003d1eb38);
          /*UnityEngine.Events.UnityAction<int, bool>$$.ctor*/ func_0x01b7facc(puVar17,plVar25,uRam0000000003d54b48,uRam0000000003d415f8);
          uVar28 = /*STR('Show Colliders')*/ uRam0000000003d72930;
          puVar37 = (undefined1 *)((long)register0x00000008 + -0x1a0);
          *(ulong *)((long)register0x00000008 + -0x170) = uVar63;
          *(ulong *)((long)register0x00000008 + -0x168) = uVar35;
          *(undefined8 *)((long)register0x00000008 + -0x160) = 0x3d415f8;
          *(undefined8 *)((long)register0x00000008 + -0x158) = 0x3d1eb38;
          *(undefined1 **)((long)register0x00000008 + -0x150) = puVar17;
          *(ulong *)((long)register0x00000008 + -0x148) = uVar51;
          *(ulong *)((long)register0x00000008 + -0x140) = uVar48;
          *(long *)((long)register0x00000008 + -0x138) = lVar16;
          *(long *)((long)register0x00000008 + -0x130) = lVar26;
          *(long **)((long)register0x00000008 + -0x128) = plVar25;
          *(undefined1 **)((long)register0x00000008 + -0x120) =
               (undefined1 *)((long)register0x00000008 + -0xb0);
          *(undefined **)((long)register0x00000008 + -0x118) = &UNK_0157d760;
          if ((bRam0000000003eb5712 & 1) == 0) {
            func_0x00f78a20(0x3d54908);
            func_0x00f78a20(0x3d21150);
            func_0x00f78a20(0x3d74e90);
            bRam0000000003eb5712 = 1;
          }
          *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
          *(undefined8 *)((long)register0x00000008 + -400) = 0;
          uVar35 = 1;
          iVar14 = /*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(lVar26,uVar48);
          if (iVar14 == 0) {
            return (long *)0xffffffff;
          }
          if (*(long *)((long)register0x00000008 + -400) == 0) {
            func_0x00f78af4();
            puVar53 = &Core_DebugMenu_DebugMenu__ConfigureToggle;
            auVar68 = func_0x00f78e5c();
          }
          else {
            /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(*(long *)((long)register0x00000008 + -400),0);
            auVar68 = /*Core.DebugMenu.DebugMenu$$InstantiateUIWithOptionalLabel*/ func_0x01640384(SUB41((float)CONCAT13(extraout_var_49,
                                                            CONCAT12(extraout_var_32,
                                                                     CONCAT11(extraout_var_15,
                                                                              extraout_b0_16))) +
                                            -6.0,0),0x42480000,0x428c0000,lVar26,7,
                                      /*STR('Toggle')*/ uRam0000000003d74e90,uVar28);
            uVar28 = auVar68._0_8_;
            plVar25 = (long *)/*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(lVar26,7,uVar48,uVar28,auVar68._8_8_,plVar25,
                                              uRam0000000003d54908);
            auVar68._8_8_ = plVar25;
            auVar68._0_8_ = lVar26;
            puVar53 = &UNK_01641834;
            uVar35 = uVar51;
            puVar37 = puVar17;
          }
          uVar52 = auVar68._0_8_;
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar28;
          *(ulong *)((long)register0x00000008 + -0x1d8) = uVar48;
          *(long **)((long)register0x00000008 + -0x1d0) = plVar25;
          *(long *)((long)register0x00000008 + -0x1c8) = lVar26;
          *(ulong *)((long)register0x00000008 + -0x1c0) = uVar51;
          *(undefined1 **)((long)register0x00000008 + -0x1b8) = puVar17;
          *(undefined1 **)((long)register0x00000008 + -0x1b0) =
               (undefined1 *)((long)register0x00000008 + -0x120);
          *(undefined **)((long)register0x00000008 + -0x1a8) = puVar53;
          if ((bRam0000000003eb571d & 1) == 0) {
            func_0x00f78a20(0x3d535d0);
            func_0x00f78a20(0x3d62a40);
            func_0x00f78a20(0x3d270a0);
            func_0x00f78a20(0x3d41568);
            func_0x00f78a20(0x3d1ead0);
            func_0x00f78a20(0x3d41668);
            bRam0000000003eb571d = 1;
          }
          *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
          lVar16 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass84_0_TypeInfo*/ uRam0000000003d270a0);
          /*System.Object$$.ctor*/ func_0x0294d018(lVar16,0);
          if (lVar16 != 0) {
            *(undefined1 **)(lVar16 + 0x10) = puVar37;
            *(int *)(lVar16 + 0x18) = auVar68._8_4_;
            plVar15 = (long *)/*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(uVar52,auVar68._8_8_,7,
                                              (undefined1 *)((long)register0x00000008 + -0x210));
            auVar71._8_8_ = plVar15;
            auVar71._0_8_ = uVar52;
            auVar68._8_8_ = plVar15;
            auVar68._0_8_ = uVar52;
            if ((int)plVar15 == 0) {
              return plVar15;
            }
            if (*(long *)((long)register0x00000008 + -0x200) != 0) {
              lVar26 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)register0x00000008 + -0x200),
                                       uRam0000000003d535d0);
              auVar6._8_8_ = plVar15;
              auVar6._0_8_ = lVar26;
              auVar5._8_8_ = plVar15;
              auVar5._0_8_ = lVar26;
              auVar4._8_8_ = plVar15;
              auVar4._0_8_ = lVar26;
              auVar3._8_8_ = plVar15;
              auVar3._0_8_ = lVar26;
              auVar68 = auVar71;
              if ((lVar26 != 0) && (auVar68 = auVar3, *(long *)(lVar26 + 0x18) != 0)) {
                /*UnityEngine.UI.Toggle$$set_isOn*/ func_0x032ec7f8(*(long *)(lVar26 + 0x18),uVar35,0);
                auVar68 = auVar4;
                if ((*(long *)(lVar26 + 0x18) != 0) &&
                   (lVar27 = *(long *)(*(long *)(lVar26 + 0x18) + 0x110), auVar68 = auVar5,
                   lVar27 != 0)) {
                  /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar27,0);
                  if (*(long *)(lVar16 + 0x10) == 0) {
                    return plVar15;
                  }
                  auVar68 = auVar6;
                  if (*(long *)(lVar26 + 0x18) != 0) {
                    lVar26 = *(long *)(*(long *)(lVar26 + 0x18) + 0x110);
                    uVar28 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<bool>_TypeInfo*/ uRam0000000003d1ead0);
                    auVar68._0_8_ = uVar28;
                    /*UnityEngine.Events.UnityAction<bool>$$.ctor*/ func_0x01b7da80(uVar28,lVar16,uRam0000000003d62a40,uRam0000000003d41568);
                    uVar35 = 0;
                    if (lVar26 != 0) {
                      /*UnityEngine.Events.UnityEvent<bool>$$AddListener*/ func_0x01b827cc(lVar26,uVar28,uRam0000000003d41668);
                      return plVar15;
                    }
                  }
                }
              }
            }
          }
          auVar71 = func_0x00f78af4();
          *(undefined1 (*) [16])((long)register0x00000008 + -0x240) = auVar68;
          *(long *)((long)register0x00000008 + -0x230) = lVar16;
          *(ulong *)((long)register0x00000008 + -0x228) = uVar35;
          *(undefined1 **)((long)register0x00000008 + -0x220) =
               (undefined1 *)((long)register0x00000008 + -0x1b0);
          *(undefined **)((long)register0x00000008 + -0x218) = &Core_DebugMenu_DebugMenu__GetButton;
          if ((bRam0000000003eb5713 & 1) == 0) {
            func_0x00f78a20(0x3d21140);
            bRam0000000003eb5713 = 1;
          }
          *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
          *(undefined8 *)((long)register0x00000008 + -600) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
          uVar48 = /*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(auVar71._0_8_,auVar71._8_8_,2,
                                   (undefined1 *)((long)register0x00000008 + -0x270));
          if (((uVar48 & 1) != 0) ||
             (iVar14 = /*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(auVar71._0_8_,auVar71._8_8_,3,
                                       (undefined1 *)((long)register0x00000008 + -0x270)),
             iVar14 != 0)) {
            plVar15 = *(long **)((long)register0x00000008 + -600);
            if (plVar15 == (long *)0x0) {
              return (long *)0x0;
            }
            if ((*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) <= *(byte *)(*plVar15 + 300)) &&
               (*(long *)(*(long *)(*plVar15 + 200) +
                          (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8 + -8) ==
                /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
              return plVar15;
            }
            func_0x00f78e5c();
          }
          return (long *)0x0;
        }
      }
    }
    param_8 = (long *)func_0x00f78af4();
    *(ulong *)((long)register0x00000008 + -0x1a0) = unaff_d15;
    *(ulong *)((long)register0x00000008 + -0x198) = unaff_d14;
    *(ulong *)((long)register0x00000008 + -400) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x188) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x180) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x178) = uVar51;
    *(ulong *)((long)register0x00000008 + -0x170) = uVar63;
    *(ulong *)((long)register0x00000008 + -0x168) = uVar35;
    *(ulong *)((long)register0x00000008 + -0x160) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x158) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x150) = 0x3d777a8;
    *(ulong *)((long)register0x00000008 + -0x148) = uVar50;
    *(float **)((long)register0x00000008 + -0x140) = param_11;
    *(long *)((long)register0x00000008 + -0x138) = lVar16;
    *(long *)((long)register0x00000008 + -0x130) = lVar26;
    *(long **)((long)register0x00000008 + -0x128) = plVar25;
    *(undefined1 **)((long)register0x00000008 + -0x120) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined **)((long)register0x00000008 + -0x118) = &Atlas_Gameplay_DebugVisualiser__Update;
    uVar12 = CONCAT13(extraout_var_36,
                      CONCAT12(extraout_var_19,CONCAT11(extraout_var_02,extraout_b0_02)));
    uVar47 = (ulong)uVar12;
    uVar35 = 0x3eb5000;
    plVar15 = param_8;
    if ((bRam0000000003eb5099 & 1) == 0) {
      func_0x00f78a20(0x3d20058);
      func_0x00f78a20(0x3d27140);
      func_0x00f78a20(0x3d3d048);
      func_0x00f78a20(0x3d3d050);
      func_0x00f78a20(0x3d3d058);
      plVar15 = (long *)func_0x00f78a20(0x3d23990);
      bRam0000000003eb5099 = 1;
    }
    uVar40 = unaff_x25;
    uVar24 = unaff_x26;
    if (*(char *)((long)param_8 + 0xf9) != '\0') {
      uVar52 = uVar28;
      if ((param_8[4] != 0) && (lVar26 = *(long *)(param_8[4] + 0x18), lVar26 != 0)) {
        plVar15 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar26,0);
        uVar46 = (uint)uVar48;
        uVar35 = param_8[5];
        if (uVar35 != 0) {
          *(uint *)((long)register0x00000008 + -0x1a4) = uVar12;
          lVar16 = 0;
          uVar52 = 0x3d777a8;
          if (plVar15 == (long *)0x0) goto code_r0x0157deb4;
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar15,0);
          *(uint *)((long)register0x00000008 + -0x1a8) =
               CONCAT13(extraout_var_37,
                        CONCAT12(extraout_var_20,CONCAT11(extraout_var_03,extraout_b0_03)));
          uVar51 = (ulong)uVar46;
          unaff_d11 = (ulong)(uint)fVar61;
          param_6 = fVar61;
          uVar58 = uVar46;
          /*UnityEngine.Transform$$get_right*/ func_0x03275618(plVar15,0);
          uVar12 = CONCAT13(extraout_var_38,
                            CONCAT12(extraout_var_21,CONCAT11(extraout_var_04,extraout_b0_04)));
          unaff_d12 = (ulong)uVar12;
          unaff_d13 = (ulong)uVar58;
          unaff_d14 = (ulong)(uint)param_6;
          fVar60 = param_6;
          uVar29 = uVar58;
          /*UnityEngine.Transform$$get_up*/ func_0x03275714(plVar15,0);
          uVar13 = CONCAT13(extraout_var_39,
                            CONCAT12(extraout_var_22,CONCAT11(extraout_var_05,extraout_b0_05)));
          unaff_d15 = (ulong)uVar13;
          uVar47 = (ulong)uVar29;
          uVar63 = (ulong)(uint)fVar60;
          fVar59 = fVar60;
          uVar30 = uVar29;
          /*UnityEngine.Transform$$get_forward*/ func_0x03275810(plVar15,0);
          *(uint *)((long)register0x00000008 + -0x1b0) = uVar30;
          *(float *)((long)register0x00000008 + -0x1ac) = fVar59;
          *(float *)((long)register0x00000008 + -0x1b8) = fVar60;
          *(uint *)((long)register0x00000008 + -0x1b4) =
               CONCAT13(extraout_var_40,
                        CONCAT12(extraout_var_23,CONCAT11(extraout_var_06,extraout_b0_06)));
          *(uint *)((long)register0x00000008 + -0x1c0) = uVar13;
          *(uint *)((long)register0x00000008 + -0x1bc) = uVar29;
          uVar48 = (ulong)uVar46;
          uVar62 = 0;
          param_4 = (ulong)uVar12;
          param_5 = (ulong)uVar58;
          Atlas_Gameplay_DebugFreeCameraController__SetOrbitalTarget
                    ((char)*(undefined4 *)((long)register0x00000008 + -0x1a8),uVar35);
          plVar15 = (long *)0x0;
          if (param_8[5] != 0) {
            plVar15 = (long *)Atlas_Gameplay_DebugFreeCameraController__Update
                                        ((char)*(undefined4 *)((long)register0x00000008 + -0x1a4));
          }
        }
        goto code_r0x0157dbf0;
      }
code_r0x0157deb4:
      auVar68 = func_0x00f78af4();
      pfVar36 = auVar68._8_8_;
      lVar26 = auVar68._0_8_;
      puVar17 = (undefined1 *)((long)register0x00000008 + -0x3a0);
      puVar8 = (undefined1 *)((long)register0x00000008 + -0x3a0);
      *(ulong *)((long)register0x00000008 + -0x250) = unaff_d13;
      *(ulong *)((long)register0x00000008 + -0x248) = unaff_d12;
      *(ulong *)((long)register0x00000008 + -0x240) = unaff_d11;
      *(ulong *)((long)register0x00000008 + -0x238) = uVar51;
      *(ulong *)((long)register0x00000008 + -0x230) = uVar63;
      *(ulong *)((long)register0x00000008 + -0x228) = uVar47;
      *(long *)((long)register0x00000008 + -0x220) = unaff_x28;
      *(ulong *)((long)register0x00000008 + -0x218) = unaff_x27;
      *(ulong *)((long)register0x00000008 + -0x210) = uVar24;
      *(ulong *)((long)register0x00000008 + -0x208) = uVar40;
      *(undefined8 *)((long)register0x00000008 + -0x200) = uVar52;
      *(ulong *)((long)register0x00000008 + -0x1f8) = uVar50;
      *(float **)((long)register0x00000008 + -0x1f0) = param_11;
      *(long *)((long)register0x00000008 + -0x1e8) = lVar16;
      *(ulong *)((long)register0x00000008 + -0x1e0) = uVar35;
      *(long **)((long)register0x00000008 + -0x1d8) = param_8;
      *(undefined1 **)((long)register0x00000008 + -0x1d0) =
           (undefined1 *)((long)register0x00000008 + -0x120);
      *(undefined **)((long)register0x00000008 + -0x1c8) =
           &Atlas_Gameplay_DebugVisualiser__CacheSceneObjects;
      puVar37 = (undefined1 *)((long)register0x00000008 + -0x1d0);
      if ((bRam0000000003eb509a & 1) == 0) {
        func_0x00f78a20(0x3d3d030);
        func_0x00f78a20(0x3d3b268);
        func_0x00f78a20(0x3d3d038);
        func_0x00f78a20(0x3d3b270);
        func_0x00f78a20(0x3d5b058);
        func_0x00f78a20(0x3d5b060);
        func_0x00f78a20(0x3d5b068);
        func_0x00f78a20(0x3d5b070);
        func_0x00f78a20(0x3d5b088);
        func_0x00f78a20(0x3d5b078);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d27150);
        func_0x00f78a20(0x3d27148);
        bRam0000000003eb509a = 1;
      }
      plVar15 = (long *)0x3d5b068;
      uVar35 = 0x3d5b088;
      *(undefined8 *)((long)register0x00000008 + -0x2a0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x2e0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x300) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x318) = 0;
      *(undefined8 *)((long)register0x00000008 + -800) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x308) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x310) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x330) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x348) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x350) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x340) = 0;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar19 = (long *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b070);
      plVar20 = (long *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b058);
      uVar28 = /*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b078);
      *(undefined8 *)((long)register0x00000008 + -0x388) = uVar28;
      plVar21 = (long *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b060);
      pfVar22 = (float *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b068);
      uVar28 = /*UnityEngine.Object$$FindObjectsOfType<Volume>*/ func_0x018a6574(1,uRam0000000003d5b088);
      *(undefined8 *)((long)register0x00000008 + -0x380) = uVar28;
      plVar25 = plVar15;
      if (*(long *)(lVar26 + 0x38) == 0) goto code_r0x0157e7f8;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar26 + 0x38),uRam0000000003d3b270);
      if (*(long *)(lVar26 + 0x40) == 0) goto code_r0x0157e7f8;
      uVar35 = 0x3d3d038;
      /*System.Collections.Generic.List<DebugVisualiser.Collider>$$Clear*/ func_0x025175f0(*(long *)(lVar26 + 0x40),uRam0000000003d3d038);
      lVar16 = *(long *)(lVar26 + 0x48);
      plVar25 = (long *)0x3d5b068;
      if (lVar16 == 0) goto code_r0x0157e7f8;
      *(long **)((long)register0x00000008 + -0x390) = plVar21;
      plVar23 = (long *)/*System.Collections.Generic.List<DebugVisualiser.Collider>$$Clear*/ func_0x025175f0(lVar16,uRam0000000003d3d038);
      if (plVar19 == (long *)0x0) goto code_r0x0157e7f8;
      uVar12 = *(uint *)(plVar19 + 3);
      uVar35 = 0x3d3d038;
      if ((int)uVar12 < 1) goto code_r0x0157e124;
      uVar35 = 0;
      plVar25 = (long *)0x3d3b268;
      goto code_r0x0157e0c0;
    }
code_r0x0157dbf0:
    lVar16 = param_8[9];
    uVar52 = 0x3d777a8;
    if (lVar16 == 0) goto code_r0x0157deb4;
    uVar12 = *(int *)(lVar16 + 0x18) - 1;
    uVar35 = (ulong)uVar12;
    if (-1 < (int)uVar12) {
      uVar50 = 0x28;
      uVar52 = 0x3d3d048;
      unaff_x25 = 0x3d23990;
      unaff_x26 = 0x3d27140;
      do {
        if (*(uint *)(lVar16 + 0x18) <= (uint)uVar35) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar26 = *(long *)(lVar16 + 0x10) + uVar35 * 0x28;
        param_11 = *(float **)(lVar26 + 0x28);
        if (param_11 == (float *)0x0) {
          uVar40 = 0x3d23990;
          uVar24 = 0x3d27140;
          if (param_8[9] == 0) goto code_r0x0157deb4;
          param_10 = pfRam0000000003d3d048;
          plVar15 = (long *)/*System.Collections.Generic.List<DebugVisualiser.Collider>$$RemoveAt*/ func_0x02518cf0(param_8[9],uVar35);
        }
        else {
          lVar16 = *(long *)(lVar26 + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_10 = (float *)0x0;
          plVar15 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar16,0);
          if (((ulong)plVar15 & 1) == 0) {
            lVar26 = *(long *)param_11;
            uVar40 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar40 != 0) {
              piVar41 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar41 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
                  puVar18 = (undefined8 *)(lVar26 + (long)(*piVar41 + 1) * 0x10 + 0x138);
                  goto code_r0x0157dcdc;
                }
                piVar41 = piVar41 + 4;
                uVar40 = uVar40 - 1;
              } while (uVar40 != 0);
            }
            param_10 = (float *)((long)&MACH_HEADER.magic + 1);
            puVar18 = (undefined8 *)func_0x00fac1f0(param_11);
code_r0x0157dcdc:
            (*(code *)*puVar18)(param_11,puVar18[1]);
            uVar40 = unaff_x25;
            uVar24 = unaff_x26;
            if (lVar16 == 0) goto code_r0x0157deb4;
            /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar16,0);
            lVar26 = *(long *)param_11;
            uVar40 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar40 != 0) {
              piVar41 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar41 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
                  puVar18 = (undefined8 *)(lVar26 + (long)(*piVar41 + 2) * 0x10 + 0x138);
                  goto code_r0x0157dd48;
                }
                piVar41 = piVar41 + 4;
                uVar40 = uVar40 - 1;
              } while (uVar40 != 0);
            }
            param_10 = (float *)((long)&MACH_HEADER.magic + 2);
            puVar18 = (undefined8 *)func_0x00fac1f0(param_11);
code_r0x0157dd48:
            (*(code *)*puVar18)(param_11,puVar18[1]);
            /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar16,0);
            lVar26 = *(long *)param_11;
            uVar40 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar40 != 0) {
              piVar41 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar41 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
                  puVar18 = (undefined8 *)(lVar26 + (long)(*piVar41 + 3) * 0x10 + 0x138);
                  goto code_r0x0157ddb0;
                }
                piVar41 = piVar41 + 4;
                uVar40 = uVar40 - 1;
              } while (uVar40 != 0);
            }
            param_10 = (float *)((long)&MACH_HEADER.magic + 3);
            puVar18 = (undefined8 *)func_0x00fac1f0(param_11);
code_r0x0157ddb0:
            (*(code *)*puVar18)(param_11,puVar18[1]);
            plVar15 = (long *)/*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar16,0);
          }
        }
        uVar12 = (uint)uVar35 - 1;
        uVar35 = (ulong)uVar12;
        uVar28 = 0x3d3d048;
        if ((int)uVar12 < 0) break;
        lVar16 = param_8[9];
        uVar40 = unaff_x25;
        uVar24 = unaff_x26;
        if (lVar16 == 0) goto code_r0x0157deb4;
      } while( true );
    }
    uVar52 = uVar28;
    uVar40 = unaff_x25;
    uVar24 = unaff_x26;
    if (param_8[0x1e] == 0) goto code_r0x0157deb4;
    if (*(char *)(param_8[0x1e] + 0x10) == '\0') {
      return plVar15;
    }
    if (param_8[4] == 0) goto code_r0x0157deb4;
    plVar25 = *(long **)(param_8[4] + 0x68);
    if (plVar25 == (long *)0x0) {
      return plVar15;
    }
    if (*(byte *)(*plVar25 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300)) {
      return plVar15;
    }
    if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300) * 8 + -8)
        != /*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058) {
      return plVar15;
    }
    param_9 = plVar25[0x2b];
    param_10 = (float *)plVar25[0x2c];
    param_11 = (float *)(ulong)*(uint *)(plVar25 + 0xf);
    param_2 = (ulong)*(uint *)((long)plVar25 + 0x8c);
    fVar60 = *(float *)(plVar25 + 0x12);
    uVar62 = 0;
    /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c((char)(int)plVar25[0x11],0);
    param_12 = (float *)(ulong)*(uint *)(plVar25 + 0x16);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x120);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x118);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x130);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x128);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x140);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x138);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x150);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x148);
    unaff_x26 = *(ulong *)((long)register0x00000008 + -0x160);
    unaff_x25 = *(ulong *)((long)register0x00000008 + -0x158);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x170);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x168);
    unaff_d11 = *(ulong *)((long)register0x00000008 + -0x180);
    unaff_d10 = *(undefined8 *)((long)register0x00000008 + -0x178);
    unaff_d13 = *(ulong *)((long)register0x00000008 + -400);
    unaff_d12 = *(ulong *)((long)register0x00000008 + -0x188);
    unaff_d15 = *(ulong *)((long)register0x00000008 + -0x1a0);
    unaff_d14 = *(ulong *)((long)register0x00000008 + -0x198);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
    uVar10 = extraout_b0_07;
    uVar54 = extraout_var_07;
    uVar55 = extraout_var_24;
    uVar56 = extraout_var_41;
  } while( true );
code_r0x0157f1d8:
  if (uVar24 != 0) {
    uVar12 = *(uint *)(uVar24 + 0x18);
    if (0 < (int)uVar12) {
      uVar46 = 0;
      do {
        if ((uVar12 <= uVar46) || (uVar13 = uVar46 + 1, uVar12 <= uVar13)) goto code_r0x0157f274;
        lVar33 = uVar24 + 0x20;
        uVar62 = *(undefined4 *)(lVar33 + (long)(int)uVar46 * 4);
        *(undefined4 *)(lVar33 + (long)(int)uVar46 * 4) =
             *(undefined4 *)(lVar33 + (long)(int)uVar13 * 4);
        *(undefined4 *)(lVar33 + (long)(int)uVar13 * 4) = uVar62;
        uVar46 = uVar46 + 3;
      } while ((int)uVar46 < (int)uVar12);
    }
    goto code_r0x0157f280;
  }
  goto code_r0x0157f324;
  while( true ) {
    unaff_x27 = plVar19[(long)(int)uVar46 + 4];
    if (unaff_x27 == 0) goto code_r0x0157e7f8;
    plVar23 = (long *)/*UnityEngine.Renderer$$get_enabled*/ func_0x0325baf4(unaff_x27,0);
    if ((int)plVar23 != 0) {
      lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x27,0);
      if (lVar16 == 0) goto code_r0x0157e7f8;
      puVar53 = &UNK_0157e0fc;
      puVar8 = (undefined1 *)((long)register0x00000008 + -0x3a0);
      goto code_r0x0322efac;
    }
    uVar35 = (ulong)(uVar46 + 1);
    uVar12 = *(uint *)(plVar19 + 3);
    if ((int)uVar12 <= (int)(uVar46 + 1)) break;
code_r0x0157e0c0:
    uVar46 = (uint)uVar35;
    plVar15 = (long *)0x3d3b268;
    if (uVar12 <= uVar46) goto code_r0x0157e7fc;
  }
code_r0x0157e124:
  plVar25 = plVar15;
  *(float **)((long)register0x00000008 + -0x398) = pfVar22;
  if (plVar20 == (long *)0x0) {
code_r0x0157e7f8:
    func_0x00f78af4();
    plVar15 = plVar25;
code_r0x0157e7fc:
    pfVar36 = param_10;
    uVar28 = func_0x00f78b24();
    puVar53 = &Atlas_Gameplay_DebugVisualiser__IncludeGameObject;
    func_0x00f78ac0(uVar28,0);
    lVar16 = extraout_x1;
    if (extraout_x1 != 0) goto code_r0x0322efac;
    *(undefined1 **)((long)register0x00000008 + -0x3b0) = puVar37;
    *(undefined **)((long)register0x00000008 + -0x3a8) =
         &Atlas_Gameplay_DebugVisualiser__IncludeGameObject;
    puVar53 = &Atlas_Gameplay_DebugVisualiser__IgnoreCollider;
    func_0x00f78af4();
    puVar17 = (undefined1 *)((long)register0x00000008 + -0x3b0);
    plVar23 = extraout_x1_00;
    plVar25 = plVar15;
    puVar37 = (undefined1 *)((long)register0x00000008 + -0x3b0);
  }
  else {
    plVar25 = *(long **)((long)register0x00000008 + -0x388);
    plVar15 = plVar25;
    if (0 < (int)plVar20[3]) {
      pfVar22 = (float *)0x0;
      plVar21 = plVar20 + 4;
      if ((plVar20[3] & 0xffffffffU) == 0) goto code_r0x0157e7fc;
      plVar23 = (long *)*plVar21;
      puVar53 = &UNK_0157e160;
      puVar17 = (undefined1 *)((long)register0x00000008 + -0x3a0);
      plVar19 = plVar23;
      goto code_r0x0157e824;
    }
    if (plVar25 == (long *)0x0) goto code_r0x0157e7f8;
    if (0 < (int)plVar25[3]) {
      pfVar22 = (float *)0x0;
      plVar21 = plVar25 + 4;
      if ((plVar25[3] & 0xffffffffU) == 0) goto code_r0x0157e7fc;
      plVar23 = (long *)*plVar21;
      puVar53 = &UNK_0157e304;
      puVar17 = (undefined1 *)((long)register0x00000008 + -0x3a0);
      plVar20 = plVar23;
      goto code_r0x0157e824;
    }
    unaff_x27 = *(ulong *)((long)register0x00000008 + -0x390);
    if (unaff_x27 == 0) goto code_r0x0157e7f8;
    if ((int)*(ulong *)(unaff_x27 + 0x18) < 1) {
      uVar35 = *(ulong *)((long)register0x00000008 + -0x398);
      if (uVar35 == 0) goto code_r0x0157e7f8;
      if ((int)*(ulong *)(uVar35 + 0x18) < 1) {
        return plVar23;
      }
      plVar20 = (long *)0x0;
      plVar19 = (long *)(uVar35 + 0x20);
      if ((*(ulong *)(uVar35 + 0x18) & 0xffffffff) == 0) goto code_r0x0157e7fc;
      plVar23 = (long *)*plVar19;
      puVar53 = &UNK_0157e6c4;
      plVar25 = plVar23;
    }
    else {
      unaff_x28 = 0;
      pfVar22 = (float *)(unaff_x27 + 0x20);
      if ((*(ulong *)(unaff_x27 + 0x18) & 0xffffffff) == 0) goto code_r0x0157e7fc;
      plVar23 = *(long **)pfVar22;
      puVar53 = &UNK_0157e4bc;
      puVar17 = (undefined1 *)((long)register0x00000008 + -0x3a0);
      plVar21 = plVar23;
    }
  }
code_r0x0157e824:
  auVar2._8_8_ = plVar23;
  auVar2._0_8_ = pfVar36;
  puVar8 = puVar17 + -0x40;
  *(long **)(puVar17 + -0x40) = plVar21;
  *(float **)(puVar17 + -0x38) = pfVar22;
  *(long **)(puVar17 + -0x30) = plVar25;
  *(ulong *)(puVar17 + -0x28) = uVar35;
  *(undefined1 (*) [16])(puVar17 + -0x20) = auVar68;
  *(undefined1 **)(puVar17 + -0x10) = puVar37;
  *(undefined **)(puVar17 + -8) = puVar53;
  puVar37 = puVar17 + -0x10;
  uVar28 = 0x3eb5000;
  pfVar31 = pfVar36;
  if ((bRam0000000003eb509c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509c = 1;
  }
  if ((pfVar36 != (float *)0x0) && (0 < (int)*(ulong *)(pfVar36 + 6))) {
    plVar25 = (long *)0x0;
    plVar15 = (long *)(*(ulong *)(pfVar36 + 6) & 0xffffffff);
    pfVar22 = pfVar36 + 8;
    plVar21 = (long *)0x3d23990;
    do {
      if (plVar15 <= plVar25) {
        uVar52 = func_0x00f78b24();
        func_0x00f78ac0(uVar52,0);
        goto code_r0x0157e92c;
      }
      uVar28 = *(undefined8 *)(pfVar22 + (long)plVar25 * 2);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pfVar31 = (float *)0x0;
      uVar35 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar23,uVar28);
      if ((uVar35 & 1) != 0) {
        return (long *)0x0;
      }
      plVar25 = (long *)((long)plVar25 + 1);
      plVar15 = (long *)(ulong)(uint)pfVar36[6];
    } while ((long)plVar25 < (long)(int)pfVar36[6]);
  }
  if (plVar23 != (long *)0x0) {
    iVar14 = /*UnityEngine.Collider$$get_enabled*/ func_0x0329e914(plVar23,0);
    if (iVar14 == 0) {
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
    lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar23,0);
    if (lVar16 != 0) {
      puVar53 = &UNK_0157e8f8;
      auVar68 = auVar2;
code_r0x0322efac:
      *(undefined1 (*) [16])(puVar8 + -0x20) = auVar68;
      *(undefined1 **)(puVar8 + -0x10) = puVar37;
      *(undefined **)(puVar8 + -8) = puVar53;
      if (pcRam0000000003ebf4d0 == (code *)0x0) {
        pcRam0000000003ebf4d0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeInHierarchy()");
      }
                    /* WARNING: Could not recover jumptable at 0x0322efe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar15 = (long *)(*pcRam0000000003ebf4d0)(lVar16);
      return plVar15;
    }
  }
code_r0x0157e92c:
  func_0x00f78af4();
  *(long **)(puVar17 + -0x90) = plVar19;
  *(long **)(puVar17 + -0x88) = plVar20;
  *(long **)(puVar17 + -0x80) = plVar21;
  *(float **)(puVar17 + -0x78) = pfVar22;
  *(long **)(puVar17 + -0x70) = plVar25;
  *(undefined8 *)(puVar17 + -0x68) = uVar28;
  *(float **)(puVar17 + -0x60) = pfVar36;
  *(long **)(puVar17 + -0x58) = plVar23;
  *(undefined1 **)(puVar17 + -0x50) = puVar37;
  *(undefined **)(puVar17 + -0x48) = &Atlas_Gameplay_DebugVisualiser__CreateCollider;
  uVar35 = 0x3eb5000;
  pfVar22 = pfVar31;
  pfVar36 = pfVar32;
  if ((bRam0000000003eb50a4 & 1) == 0) {
    func_0x00f78a20(0x3d53750);
    func_0x00f78a20(0x3d27140);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d27150);
    bRam0000000003eb50a4 = 1;
  }
  *(undefined8 *)(puVar17 + -0x98) = 0;
  if ((extraout_x1_01 != 0) &&
     (pfVar22 = pfRam0000000003d53750, /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(extraout_x1_01,puVar17 + -0x98),
     pfVar32 != (float *)0x0)) {
    lVar16 = *(long *)pfVar32;
    uVar48 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar48 != 0) {
      piVar41 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar41 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar16 + (long)*piVar41 * 0x10 + 0x138);
          goto code_r0x0157ea20;
        }
        piVar41 = piVar41 + 4;
        uVar48 = uVar48 - 1;
      } while (uVar48 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(pfVar32,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,0);
code_r0x0157ea20:
    uVar28 = (*(code *)*puVar18)(pfVar32,puVar18[1]);
    uVar10 = /*UnityEngine.Collider$$get_isTrigger*/ func_0x0329e9e4(extraout_x1_01,0);
    uVar52 = *(undefined8 *)(puVar17 + -0x98);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar15 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar52,0,0);
    if (*(byte *)(*(long *)pfVar32 + 300) < *(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300)) {
      bVar9 = false;
    }
    else {
      bVar9 = *(long *)(*(long *)(*(long *)pfVar32 + 200) +
                        (ulong)*(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300) * 8 + -8) ==
              /*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150;
    }
    *extraout_x8 = pfVar31;
    extraout_x8[1] = pfVar32;
    extraout_x8[2] = 0;
    extraout_x8[3] = uVar28;
    *(undefined1 *)(extraout_x8 + 4) = uVar10;
    *(char *)((long)extraout_x8 + 0x21) = (char)plVar15;
    *(bool *)((long)extraout_x8 + 0x22) = bVar9;
    *(undefined4 *)((long)extraout_x8 + 0x23) = 0;
    *(undefined1 *)((long)extraout_x8 + 0x27) = 0;
    return plVar15;
  }
  func_0x00f78af4();
  *(long **)(puVar17 + -0xe0) = plVar21;
  *(undefined8 *)(puVar17 + -0xd8) = 0x3eb5000;
  *(long *)(puVar17 + -0xd0) = extraout_x1_01;
  *(float **)(puVar17 + -200) = pfVar31;
  *(float **)(puVar17 + -0xc0) = pfVar32;
  *(undefined8 **)(puVar17 + -0xb8) = extraout_x8;
  *(undefined1 **)(puVar17 + -0xb0) = puVar17 + -0x50;
  *(undefined **)(puVar17 + -0xa8) = &Atlas_Gameplay_DebugVisualiser__GetReplicator;
  plVar15 = (long *)0x3eb5000;
  pfVar32 = pfVar22;
  if ((bRam0000000003eb509b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509b = 1;
  }
  lVar16 = extraout_x1_01;
  if (pfVar22 != (float *)0x0) {
    fVar60 = pfVar22[6];
    if (0 < (int)fVar60) {
      uVar35 = 0;
      plVar21 = (long *)0x3d23990;
      do {
        fVar59 = (float)uVar35;
        if ((uint)fVar60 <= (uint)fVar59) {
          uVar28 = func_0x00f78b24();
          func_0x00f78ac0(uVar28,0);
          goto code_r0x0157ebb8;
        }
        plVar15 = *(long **)(pfVar22 + (long)(int)fVar59 * 2 + 8);
        if (plVar15 == (long *)0x0) goto code_r0x0157ebb8;
        lVar16 = plVar15[7];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pfVar32 = (float *)0x0;
        uVar35 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar16,extraout_x1_02);
        if ((uVar35 & 1) != 0) {
          return plVar15;
        }
        uVar35 = (ulong)((int)fVar59 + 1U);
        fVar60 = pfVar22[6];
      } while ((int)((int)fVar59 + 1U) < (int)fVar60);
    }
    return (long *)0x0;
  }
code_r0x0157ebb8:
  uVar12 = func_0x00f78af4();
  *(ulong *)(puVar17 + -0x180) = unaff_d15;
  *(ulong *)(puVar17 + -0x178) = unaff_d14;
  *(ulong *)(puVar17 + -0x170) = unaff_d13;
  *(ulong *)(puVar17 + -0x168) = unaff_d12;
  *(ulong *)(puVar17 + -0x160) = unaff_d11;
  *(ulong *)(puVar17 + -0x158) = uVar51;
  *(ulong *)(puVar17 + -0x150) = uVar63;
  *(ulong *)(puVar17 + -0x148) = uVar47;
  *(long *)(puVar17 + -0x140) = unaff_x28;
  *(ulong *)(puVar17 + -0x138) = unaff_x27;
  *(long **)(puVar17 + -0x130) = plVar19;
  *(long **)(puVar17 + -0x128) = plVar20;
  *(long **)(puVar17 + -0x120) = plVar21;
  *(ulong *)(puVar17 + -0x118) = uVar35;
  *(long *)(puVar17 + -0x110) = lVar16;
  *(long **)(puVar17 + -0x108) = plVar15;
  *(undefined8 *)(puVar17 + -0x100) = extraout_x1_02;
  *(float **)(puVar17 + -0xf8) = pfVar22;
  *(undefined1 **)(puVar17 + -0xf0) = puVar17 + -0xb0;
  *(undefined **)(puVar17 + -0xe8) = &Atlas_Gameplay_DebugVisualiser__CreateCapsuleMesh;
  *(undefined4 *)(puVar17 + -0x1b4) = extraout_w1;
  fVar60 = (float)param_5;
  uVar63 = param_5 & 0xffffffff;
  *(ulong *)(puVar17 + -0x1b0) = param_4;
  *(ulong *)(puVar17 + -0x1a0) = CONCAT44(uVar62,fVar61);
  fVar59 = (float)uVar48;
  uVar50 = uVar48 & 0xffffffff;
  *(uint *)(puVar17 + -400) =
       CONCAT13(extraout_var_42,CONCAT12(extraout_var_25,CONCAT11(extraout_var_08,extraout_b0_08)));
  uVar35 = 0x3d1f3d8;
  if ((bRam0000000003eb50a6 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d1f3d8);
    func_0x00f78a20(0x3d1f5e0);
    func_0x00f78a20(0x3d715a8);
    bRam0000000003eb50a6 = 1;
  }
  uVar12 = (uVar12 & 1) + uVar12;
  uVar40 = (ulong)uVar12;
  uVar47 = (ulong)(uVar12 + 1);
  uVar24 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar47);
  lVar16 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar47);
  lVar26 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar47);
  *(ulong *)(puVar17 + -0x188) = uVar47;
  lVar27 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar47);
  fVar49 = _UNK_033f850c;
  *(uint *)(puVar17 + -0x18c) = uVar12;
  if (uVar12 < 0x7fffffff) {
    if (uVar24 == 0) goto code_r0x0157f324;
    uVar40 = 0;
    fVar65 = 360.0 / (float)*(int *)(puVar17 + -0x18c);
    unaff_d12 = (ulong)(uint)fVar65;
    uVar48 = 0x43340000;
    unaff_x27 = (ulong)*(uint *)(uVar24 + 0x18);
    unaff_x28 = uVar24 + 0x20;
    uVar35 = lVar16 + 0x20;
    plVar19 = (long *)(lVar26 + 0x20);
    unaff_d13 = (ulong)(uint)_UNK_033f850c;
    uVar47 = lVar27 + 0x20;
    unaff_d14 = 0;
    fVar66 = 180.0 / (float)*(int *)(puVar17 + -0x18c);
    unaff_d15 = (ulong)(uint)fVar66;
    uVar51 = 0;
    do {
      if (unaff_x27 == uVar40) goto code_r0x0157f274;
      ___sincosf_stret(SUB41((float)unaff_d14 * fVar49,0));
      *(uint *)(unaff_x28 + uVar40 * 4) =
           CONCAT13(extraout_var_43,
                    CONCAT12(extraout_var_26,CONCAT11(extraout_var_09,extraout_b0_09)));
      if (lVar16 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar16 + 0x18) <= uVar40) goto code_r0x0157f274;
      *(int *)(uVar35 + uVar40 * 4) = (int)uVar48;
      fVar64 = (float)uVar51 * fVar49;
      unaff_d11 = (ulong)(uint)fVar64;
      uVar10 = SUB41(fVar64,0);
      _cosf(uVar10);
      if (lVar26 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar26 + 0x18) <= uVar40) goto code_r0x0157f274;
      *(uint *)((long)plVar19 + uVar40 * 4) =
           CONCAT13(extraout_var_44,
                    CONCAT12(extraout_var_27,CONCAT11(extraout_var_10,extraout_b0_10)));
      _sinf(uVar10);
      if (lVar27 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar27 + 0x18) <= uVar40) goto code_r0x0157f274;
      *(uint *)(uVar47 + uVar40 * 4) =
           CONCAT13(extraout_var_45,
                    CONCAT12(extraout_var_28,CONCAT11(extraout_var_11,extraout_b0_11)));
      unaff_d14 = (ulong)(uint)(fVar65 + (float)unaff_d14);
      uVar51 = (ulong)(uint)(fVar66 + (float)uVar51);
      uVar40 = uVar40 + 1;
    } while (*(ulong *)(puVar17 + -0x188) != uVar40);
  }
  uVar12 = *(uint *)(puVar17 + -0x18c);
  uVar35 = (ulong)uVar12;
  uVar47 = *(ulong *)(puVar17 + -0x188);
  uVar46 = (uint)uVar47;
  uVar40 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,(uVar12 + 2) * uVar46);
  uVar48 = 0x3f000000;
  fVar49 = (*(float *)(puVar17 + -400) - (fVar59 + fVar59)) * 0.5;
  fVar61 = 0.0;
  if (fVar49 <= 0.0) {
    fVar49 = 0.0;
  }
  unaff_d11 = (ulong)(uint)fVar49;
  uVar51 = (ulong)(uint)((float)(int)uVar46 * 0.5);
  uVar10 = SUB41((float)(int)uVar46 * 0.5,0);
  uVar13 = /*UnityEngine.Mathf$$CeilToInt*/ func_0x0323d108(uVar10,0);
  if ((int)uVar13 < 1) {
    unaff_x27 = 0;
  }
  else {
    uVar39 = 0;
    unaff_x27 = 0;
    uVar30 = uVar46;
    if ((int)uVar46 < 2) {
      uVar30 = 1;
    }
    do {
      if (uVar12 < 0x7fffffff) {
        if (uVar24 == 0) goto code_r0x0157f324;
        uVar45 = 0;
        do {
          if (*(uint *)(uVar24 + 0x18) <= uVar45) goto code_r0x0157f274;
          if (lVar27 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar27 + 0x18) <= uVar39) goto code_r0x0157f274;
          if (lVar26 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar26 + 0x18) <= uVar39) goto code_r0x0157f274;
          if (lVar16 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar16 + 0x18) <= uVar45) goto code_r0x0157f274;
          if (uVar40 == 0) goto code_r0x0157f324;
          uVar29 = (int)unaff_x27 + (int)uVar45;
          pfVar32 = (float *)(ulong)*(uint *)(uVar40 + 0x18);
          if (*(uint *)(uVar40 + 0x18) <= uVar29) goto code_r0x0157f274;
          fVar65 = *(float *)(lVar27 + uVar39 * 4 + 0x20);
          fVar61 = *(float *)(lVar26 + uVar39 * 4 + 0x20);
          fVar66 = *(float *)(uVar24 + 0x20 + uVar45 * 4) * fVar65 * fVar59;
          param_4 = (ulong)(uint)fVar66;
          fVar65 = fVar65 * *(float *)(lVar16 + 0x20 + uVar45 * 4) * fVar59;
          uVar48 = (ulong)(uint)fVar65;
          lVar33 = uVar40 + (long)(int)uVar29 * 0xc;
          pfVar32 = (float *)(lVar33 + 0x24);
          *pfVar32 = fVar61 * fVar59;
          *(float *)(lVar33 + 0x20) = fVar66;
          *(float *)(lVar33 + 0x28) = fVar65;
          pfVar36 = (float *)(ulong)*(uint *)(uVar40 + 0x18);
          if (*(uint *)(uVar40 + 0x18) <= uVar29) goto code_r0x0157f274;
          *pfVar32 = fVar49 + fVar61 * fVar59;
          uVar45 = uVar45 + 1;
        } while (uVar30 != uVar45);
        unaff_x27 = (ulong)(uint)((int)unaff_x27 + (int)uVar45);
      }
      uVar39 = uVar39 + 1;
    } while (uVar39 != uVar13);
  }
  iVar14 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(uVar10,0);
  if (iVar14 < (int)uVar46) {
    uVar13 = uVar46;
    if ((int)uVar46 < 2) {
      uVar13 = 1;
    }
    lVar33 = (long)iVar14;
    do {
      if (uVar12 < 0x7fffffff) {
        if (uVar24 == 0) goto code_r0x0157f324;
        uVar39 = 0;
        do {
          if (*(uint *)(uVar24 + 0x18) <= uVar39) goto code_r0x0157f274;
          if (lVar27 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar27 + 0x18) <= (uint)lVar33) goto code_r0x0157f274;
          if (lVar26 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar26 + 0x18) <= (uint)lVar33) goto code_r0x0157f274;
          if (lVar16 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar16 + 0x18) <= uVar39) goto code_r0x0157f274;
          if (uVar40 == 0) goto code_r0x0157f324;
          uVar30 = (int)unaff_x27 + (int)uVar39;
          pfVar32 = (float *)(ulong)*(uint *)(uVar40 + 0x18);
          if (*(uint *)(uVar40 + 0x18) <= uVar30) goto code_r0x0157f274;
          fVar65 = *(float *)(lVar27 + lVar33 * 4 + 0x20);
          fVar61 = *(float *)(lVar26 + lVar33 * 4 + 0x20);
          fVar66 = *(float *)(uVar24 + 0x20 + uVar39 * 4) * fVar65 * fVar59;
          param_4 = (ulong)(uint)fVar66;
          fVar65 = fVar65 * *(float *)(lVar16 + 0x20 + uVar39 * 4) * fVar59;
          uVar48 = (ulong)(uint)fVar65;
          lVar34 = uVar40 + (long)(int)uVar30 * 0xc;
          pfVar32 = (float *)(lVar34 + 0x24);
          *pfVar32 = fVar61 * fVar59;
          *(float *)(lVar34 + 0x20) = fVar66;
          *(float *)(lVar34 + 0x28) = fVar65;
          pfVar36 = (float *)(ulong)*(uint *)(uVar40 + 0x18);
          if (*(uint *)(uVar40 + 0x18) <= uVar30) goto code_r0x0157f274;
          *pfVar32 = fVar61 * fVar59 - fVar49;
          uVar39 = uVar39 + 1;
        } while (uVar13 != uVar39);
        unaff_x27 = (ulong)(uint)((int)unaff_x27 + (int)uVar39);
      }
      lVar33 = lVar33 + 1;
    } while (lVar33 != (int)uVar46);
  }
  uVar24 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar12 * uVar46 * 6);
  param_5 = *(ulong *)(puVar17 + -0x1b0);
  param_4 = *(ulong *)(puVar17 + -0x1a0);
  if (uVar12 < 0x7fffffff) {
    uVar30 = 0;
    uVar13 = 0;
    uVar29 = uVar12;
    if ((int)uVar12 < 2) {
      uVar29 = 1;
    }
    do {
      if (uVar12 != 0) {
        if (uVar24 == 0) goto code_r0x0157f324;
        iVar14 = uVar30 * uVar46;
        iVar42 = (uVar30 + 1) * uVar46;
        uVar58 = *(uint *)(uVar24 + 0x18);
        uVar43 = uVar29;
        do {
          uVar44 = uVar13;
          if (uVar58 <= uVar44) goto code_r0x0157f274;
          *(int *)(uVar24 + (long)(int)uVar44 * 4 + 0x20) = iVar14;
          if ((uVar58 <= uVar44 + 1) ||
             (*(int *)(uVar24 + (long)(int)(uVar44 + 1) * 4 + 0x20) = iVar42, uVar58 <= uVar44 + 2))
          goto code_r0x0157f274;
          *(int *)(uVar24 + (long)(int)(uVar44 + 2) * 4 + 0x20) = iVar42 + 1;
          if ((uVar58 <= uVar44 + 3) ||
             ((*(int *)(uVar24 + (long)(int)(uVar44 + 3) * 4 + 0x20) = iVar14 + 1,
              uVar58 <= uVar44 + 4 ||
              (*(int *)(uVar24 + (long)(int)(uVar44 + 4) * 4 + 0x20) = iVar14, uVar58 <= uVar44 + 5)
              ))) goto code_r0x0157f274;
          *(int *)(uVar24 + (long)(int)(uVar44 + 5) * 4 + 0x20) = iVar42 + 1;
          iVar14 = iVar14 + 1;
          iVar42 = iVar42 + 1;
          uVar43 = uVar43 - 1;
          uVar13 = uVar44 + 6;
        } while (uVar43 != 0);
        uVar13 = uVar44 + 6;
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar46);
  }
  if (uVar40 != 0) {
    uVar39 = *(ulong *)(uVar40 + 0x18) & 0xffffffff;
    iVar14 = *(int *)(puVar17 + -0x1b4);
    fVar59 = (float)param_4;
    fVar49 = (float)param_5;
    iVar42 = (int)*(ulong *)(uVar40 + 0x18);
    if (iVar14 == 0) {
      if (0 < iVar42) {
        if (uVar39 != 0) {
          uVar45 = 0;
          pfVar22 = (float *)(uVar40 + 0x28);
          do {
            fVar65 = pfVar22[-2];
            uVar48 = (ulong)(uint)(fVar59 + pfVar22[-1]);
            fVar61 = fVar60 + *pfVar22;
            pfVar22[-2] = fVar59 + pfVar22[-1];
            pfVar22[-1] = fVar49 + fVar65;
            *pfVar22 = fVar61;
            if (uVar39 - 1 == uVar45) goto code_r0x0157f1d8;
            uVar45 = uVar45 + 1;
            pfVar22 = pfVar22 + 3;
          } while (uVar45 < *(uint *)(uVar40 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if (iVar14 == 1) {
      if (0 < iVar42) {
        if (uVar39 != 0) {
          uVar35 = 0;
          param_4 = CONCAT44(fVar49,fVar59);
          pfVar22 = (float *)(uVar40 + 0x28);
          do {
            uVar48 = CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(pfVar22 + -2) >> 0x20),
                              fVar59 + (float)*(undefined8 *)(pfVar22 + -2));
            *(ulong *)(pfVar22 + -2) = uVar48;
            *pfVar22 = fVar60 + *pfVar22;
            if (uVar39 - 1 == uVar35) goto code_r0x0157f280;
            uVar35 = uVar35 + 1;
            pfVar22 = pfVar22 + 3;
          } while (uVar35 < *(uint *)(uVar40 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if ((iVar14 == 2) && (0 < iVar42)) {
      if (uVar39 != 0) {
        uVar45 = 0;
        pfVar22 = (float *)(uVar40 + 0x28);
        do {
          fVar65 = pfVar22[-1];
          fVar61 = fVar49 + *pfVar22;
          uVar48 = (ulong)(uint)(fVar60 + fVar65);
          pfVar22[-2] = fVar59 + pfVar22[-2];
          pfVar22[-1] = fVar61;
          *pfVar22 = fVar60 + fVar65;
          if (uVar39 - 1 == uVar45) goto code_r0x0157f1d8;
          uVar45 = uVar45 + 1;
          pfVar22 = pfVar22 + 3;
        } while (uVar45 < *(uint *)(uVar40 + 0x18));
      }
code_r0x0157f274:
      uVar28 = func_0x00f78b24();
      func_0x00f78ac0(uVar28,0);
    }
code_r0x0157f280:
    plVar15 = (long *)func_0x00f78aec(/*UnityEngine.Mesh_TypeInfo*/ uRam0000000003d23388);
    /*UnityEngine.Mesh$$.ctor*/ func_0x0323f420(plVar15,0);
    uVar35 = 0;
    if (plVar15 != (long *)0x0) {
      /*UnityEngine.Object$$set_name*/ func_0x03248994(plVar15,/*STR('ProceduralCapsule')*/ uRam0000000003d715a8,0);
      /*UnityEngine.Mesh$$set_vertices*/ func_0x03241d34(plVar15,uVar40,0);
      /*UnityEngine.Mesh$$set_triangles*/ func_0x032448a4(plVar15,uVar24,0);
      /*UnityEngine.Mesh$$Optimize*/ func_0x032470b4(plVar15,0);
      /*UnityEngine.Mesh$$RecalculateBounds*/ func_0x03246a70(plVar15,0);
      return plVar15;
    }
  }
code_r0x0157f324:
  func_0x00f78af4();
  *(long *)(puVar17 + -0x200) = lVar26;
  *(long *)(puVar17 + -0x1f8) = lVar16;
  *(ulong *)(puVar17 + -0x1f0) = uVar24;
  *(ulong *)(puVar17 + -0x1e8) = uVar47;
  *(ulong *)(puVar17 + -0x1e0) = uVar35;
  *(ulong *)(puVar17 + -0x1d8) = uVar40;
  *(undefined1 **)(puVar17 + -0x1d0) = puVar17 + -0xf0;
  *(undefined **)(puVar17 + -0x1c8) = &Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility;
  lVar33 = 0x3eb5000;
  pfVar22 = pfVar32;
  if ((bRam0000000003eb509d & 1) == 0) {
    func_0x00f78a20(0x3d32a28);
    func_0x00f78a20(0x3d32a30);
    func_0x00f78a20(0x3d32a38);
    func_0x00f78a20(0x3d3b278);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509d = 1;
  }
  *(undefined8 *)(puVar17 + -0x218) = 0;
  *(undefined8 *)(puVar17 + -0x210) = 0;
  *(undefined8 *)(puVar17 + -0x208) = 0;
  if (extraout_x1_03 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar17 + -0x218,extraout_x1_03,uRam0000000003d3b278);
    while( true ) {
      do {
        uVar48 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar17 + -0x218,uRam0000000003d32a30);
        if ((uVar48 & 1) == 0) {
          plVar15 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar17 + -0x218,uRam0000000003d32a28);
          return plVar15;
        }
        lVar16 = *(long *)(puVar17 + -0x208);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar48 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar16,0,0);
      } while ((uVar48 & 1) != 0);
      if (lVar16 == 0) break;
      /*UnityEngine.Renderer$$set_forceRenderingOff*/ func_0x0325bc24(lVar16,(uint)pfVar32 ^ 1,0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x157f45c);
    (*pcVar7)();
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    puVar18 = (undefined8 *)___cxa_begin_catch();
    pfVar32 = (float *)*puVar18;
    ___cxa_end_catch();
    plVar15 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar17 + -0x218,uRam0000000003eb5000);
    if (pfVar32 == (float *)0x0) {
      return plVar15;
    }
    func_0x00f78ac0(pfVar32,0);
  }
  auVar68 = __Unwind_Resume();
  lVar34 = auVar68._8_8_;
  *(long *)(puVar17 + -0x280) = unaff_x28;
  *(ulong *)(puVar17 + -0x278) = unaff_x27;
  *(long **)(puVar17 + -0x270) = plVar19;
  *(long *)(puVar17 + -0x268) = lVar27;
  *(long *)(puVar17 + -0x260) = lVar26;
  *(long *)(puVar17 + -600) = lVar16;
  *(ulong *)(puVar17 + -0x250) = uVar24;
  *(undefined8 *)(puVar17 + -0x248) = 0x3eb5000;
  *(undefined8 *)(puVar17 + -0x240) = 0;
  *(float **)(puVar17 + -0x238) = pfVar32;
  *(undefined1 **)(puVar17 + -0x230) = puVar17 + -0x1d0;
  *(undefined **)(puVar17 + -0x228) = &Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals;
  *(float **)(puVar17 + -0x2b8) = pfVar38;
  *(long **)(puVar17 + -0x2b0) = param_13;
  *(float **)(puVar17 + -0x2c8) = pfVar22;
  *(float **)(puVar17 + -0x2c0) = pfVar36;
  plVar15 = auVar68._0_8_;
  if ((bRam0000000003eb509e & 1) == 0) {
    func_0x00f78a20(0x3d3d050);
    func_0x00f78a20(0x3d3d058);
    func_0x00f78a20(0x3d3d060);
    plVar15 = (long *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb509e = 1;
  }
  uVar13 = (uint)uVar48;
  uVar12 = (uint)param_4;
  uVar46 = (uint)param_5;
  if (lVar34 != 0) {
    uVar35 = (ulong)*(uint *)(lVar34 + 0x18);
    if (0 < (int)*(uint *)(lVar34 + 0x18)) {
      uVar47 = 0;
      uVar40 = uVar35 - 1;
      lVar33 = 0x20;
      while( true ) {
        if (uVar35 <= uVar47) {
          plVar15 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar13 = (uint)uVar48;
        uVar12 = (uint)param_4;
        uVar46 = (uint)param_5;
        puVar18 = (undefined8 *)(*(long *)(lVar34 + 0x10) + lVar33);
        pfVar22 = (float *)puVar18[1];
        if (pfVar22 != (float *)0x0) {
          auVar69._8_8_ = *puVar18;
          auVar69._0_8_ = auVar68._0_8_;
          pfVar36 = (float *)puVar18[3];
          uVar24 = puVar18[4];
          pfVar38 = *(float **)(puVar17 + -0x2c8);
          if ((uVar24 & 0xff0000) != 0) {
            pfVar38 = *(float **)(puVar17 + -0x2b0);
          }
          pfVar32 = *(float **)(puVar17 + -0x2c0);
          if ((uVar24 & 0xff) == 0) {
            pfVar32 = pfVar38;
          }
          pfVar38 = *(float **)(puVar17 + -0x2b8);
          if ((uVar24 & 0xff00) == 0) {
            pfVar38 = pfVar32;
          }
          puVar53 = &UNK_0157f598;
          goto code_r0x0157f644;
        }
        if (uVar40 == uVar47) break;
        uVar35 = (ulong)*(uint *)(lVar34 + 0x18);
        lVar33 = lVar33 + 0x28;
        uVar47 = uVar47 + 1;
      }
    }
    return plVar15;
  }
  puVar53 = &Atlas_Gameplay_DebugVisualiser__CreateMeshProxy;
  auVar69 = func_0x00f78af4();
  uVar40 = 0;
code_r0x0157f644:
  *(ulong *)(puVar17 + -0x350) = unaff_d15;
  *(ulong *)(puVar17 + -0x348) = unaff_d14;
  *(ulong *)(puVar17 + -0x340) = unaff_d13;
  *(ulong *)(puVar17 + -0x338) = unaff_d12;
  *(ulong *)(puVar17 + -0x330) = unaff_d11;
  *(ulong *)(puVar17 + -0x328) = uVar51;
  *(ulong *)(puVar17 + -800) = uVar50;
  *(ulong *)(puVar17 + -0x318) = uVar63;
  *(undefined1 (*) [16])(puVar17 + -0x310) = auVar68;
  *(ulong *)(puVar17 + -0x300) = uVar24;
  *(long *)(puVar17 + -0x2f8) = lVar33;
  *(ulong *)(puVar17 + -0x2f0) = uVar40;
  *(undefined8 *)(puVar17 + -0x2e8) = 0x3eb5000;
  *(undefined1 **)(puVar17 + -0x2e0) = puVar17 + -0x230;
  *(undefined **)(puVar17 + -0x2d8) = puVar53;
  uVar28 = 0x3eb5000;
  pfVar31 = pfVar22;
  pfVar32 = pfVar36;
  if ((bRam0000000003eb509f & 1) == 0) {
    func_0x00f78a20(0x3d27140);
    bRam0000000003eb509f = 1;
  }
  if (pfVar22 == (float *)0x0) {
    puVar53 = &Atlas_Gameplay_DebugVisualiser__CreateMeshProxy;
    auVar70 = func_0x00f78af4();
    uVar10 = extraout_b0_15;
  }
  else {
    uVar28 = 0x3d27140;
    lVar16 = *(long *)pfVar22;
    uVar48 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar48 != 0) {
      piVar41 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar41 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar16 + (long)(*piVar41 + 1) * 0x10 + 0x138);
          param_7 = uVar12;
          goto code_r0x0157f6fc;
        }
        piVar41 = piVar41 + 4;
        uVar48 = uVar48 - 1;
      } while (uVar48 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(pfVar22,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,1);
    param_7 = uVar12;
code_r0x0157f6fc:
    (*(code *)*puVar18)(pfVar22,puVar18[1]);
    uVar63 = (ulong)CONCAT13(extraout_var_46,
                             CONCAT12(extraout_var_29,CONCAT11(extraout_var_12,extraout_b0_12)));
    uVar50 = (ulong)uVar13;
    uVar51 = (ulong)(uint)fVar61;
    lVar16 = *(long *)pfVar22;
    uVar48 = (ulong)*(ushort *)(lVar16 + 0x12a);
    param_6 = fVar61;
    uVar46 = uVar13;
    if (uVar48 != 0) {
      piVar41 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar41 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar16 + (long)(*piVar41 + 2) * 0x10 + 0x138);
          goto code_r0x0157f764;
        }
        piVar41 = piVar41 + 4;
        uVar48 = uVar48 - 1;
      } while (uVar48 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(pfVar22,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,2);
code_r0x0157f764:
    (*(code *)*puVar18)(pfVar22,puVar18[1]);
    uVar12 = CONCAT13(extraout_var_47,
                      CONCAT12(extraout_var_30,CONCAT11(extraout_var_13,extraout_b0_13)));
    unaff_d11 = (ulong)uVar12;
    unaff_d12 = (ulong)uVar46;
    unaff_d13 = (ulong)(uint)param_6;
    unaff_d14 = (ulong)param_7;
    lVar16 = *(long *)pfVar22;
    uVar48 = (ulong)*(ushort *)(lVar16 + 0x12a);
    fVar60 = param_6;
    uVar30 = uVar46;
    if (uVar48 != 0) {
      piVar41 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar41 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar16 + (long)(*piVar41 + 3) * 0x10 + 0x138);
          goto code_r0x0157f7d0;
        }
        piVar41 = piVar41 + 4;
        uVar48 = uVar48 - 1;
      } while (uVar48 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(pfVar22,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,3);
code_r0x0157f7d0:
    (*(code *)*puVar18)(pfVar22,puVar18[1]);
    *(uint *)(puVar17 + -0x35c) = uVar30;
    *(float *)(puVar17 + -0x358) = fVar60;
    *(uint *)(puVar17 + -0x360) =
         CONCAT13(extraout_var_48,CONCAT12(extraout_var_31,CONCAT11(extraout_var_14,extraout_b0_14))
                 );
    puVar53 = &UNK_0157f814;
    pfVar31 = pfVar36;
    pfVar32 = pfVar38;
    uVar10 = extraout_b0_12;
    auVar70 = auVar69;
  }
  *(ulong *)(puVar17 + -0x3e0) = unaff_d15;
  *(ulong *)(puVar17 + -0x3d8) = unaff_d14;
  *(ulong *)(puVar17 + -0x3d0) = unaff_d13;
  *(ulong *)(puVar17 + -0x3c8) = unaff_d12;
  *(ulong *)(puVar17 + -0x3c0) = unaff_d11;
  *(ulong *)(puVar17 + -0x3b8) = uVar51;
  *(ulong *)(puVar17 + -0x3b0) = uVar50;
  *(ulong *)(puVar17 + -0x3a8) = uVar63;
  *(undefined8 *)(puVar17 + -0x3a0) = uVar28;
  *(float **)(puVar17 + -0x398) = pfVar22;
  *(undefined1 (*) [16])(puVar17 + -0x390) = auVar69;
  *(float **)(puVar17 + -0x380) = pfVar36;
  *(float **)(puVar17 + -0x378) = pfVar38;
  *(undefined1 **)(puVar17 + -0x370) = puVar17 + -0x2e0;
  *(undefined **)(puVar17 + -0x368) = puVar53;
  puVar37 = puVar17 + -0x370;
  if ((bRam0000000003eb50a0 & 1) == 0) {
    func_0x00f78a20(0x3d57700);
    func_0x00f78a20(0x3d57708);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar48 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(pfVar32,0,0);
  if ((uVar48 & 1) != 0) {
    return (long *)0x0;
  }
  lVar16 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar16,pfVar31,0);
  if (lVar16 != 0) {
    *(float *)(puVar17 + -1000) = param_6;
    *(uint *)(puVar17 + -0x3e4) = param_7;
    lVar26 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar16,0);
    if (lVar26 != 0) {
      uVar62 = *(undefined4 *)(puVar17 + -0x35c);
      uVar67 = *(undefined4 *)(puVar17 + -0x358);
      uVar11 = *(undefined4 *)(puVar17 + -0x360);
      /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(uVar10,uVar13,fVar61,lVar26,0);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0((char)uVar12,uVar46,*(undefined4 *)(puVar17 + -1000),
                      *(undefined4 *)(puVar17 + -0x3e4),lVar26,0);
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0((char)uVar11,uVar62,uVar67,lVar26,0);
      lVar27 = *(long *)(auVar70._0_8_ + 0x58);
      if (lVar27 != 0) {
        uVar28 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar27,0);
        puVar53 = &UNK_0157f9c8;
        goto code_r0x03275ee0;
      }
    }
  }
  func_0x00f78af4();
  uVar28 = func_0x00f78b14();
  lVar27 = func_0x00f78ac0(uVar28,0);
  *(long *)(puVar17 + -0x420) = auVar70._0_8_;
  *(long *)(puVar17 + -0x418) = lVar16;
  *(long *)(puVar17 + -0x410) = auVar70._8_8_;
  *(float **)(puVar17 + -0x408) = pfVar32;
  *(undefined1 **)(puVar17 + -0x400) = puVar37;
  *(undefined **)(puVar17 + -0x3f8) = &Atlas_Gameplay_DebugVisualiser__CreateProxyGameObjectRoot;
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar16 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar16,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(lVar27 + 0x58) = lVar16;
  lVar26 = 0;
  if (lVar16 != 0) {
    lVar26 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar16,0);
    if ((*(long *)(lVar27 + 0x50) != 0) &&
       (uVar28 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar27 + 0x50),0), lVar26 != 0)) {
      puVar37 = *(undefined1 **)(puVar17 + -0x400);
      puVar53 = *(undefined **)(puVar17 + -0x3f8);
      pfVar32 = *(float **)(puVar17 + -0x408);
      auVar70._8_8_ = *(undefined8 *)(puVar17 + -0x410);
      auVar70._0_8_ = *(undefined8 *)(puVar17 + -0x420);
      lVar16 = *(long *)(puVar17 + -0x418);
code_r0x03275ee0:
      *(long *)(puVar17 + -0x420) = auVar70._0_8_;
      *(long *)(puVar17 + -0x418) = lVar16;
      *(long *)(puVar17 + -0x410) = auVar70._8_8_;
      *(float **)(puVar17 + -0x408) = pfVar32;
      *(undefined1 **)(puVar17 + -0x400) = puVar37;
      *(undefined **)(puVar17 + -0x3f8) = puVar53;
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar15 = (long *)(*pcRam0000000003ec1898)(lVar26,uVar28,0);
      return plVar15;
    }
  }
  lVar16 = func_0x00f78af4();
  *(undefined8 *)(puVar17 + -0x450) = 0x3d21b60;
  *(undefined8 *)(puVar17 + -0x448) = 0x3d71738;
  *(long *)(puVar17 + -0x440) = lVar26;
  *(long *)(puVar17 + -0x438) = lVar27;
  *(undefined1 **)(puVar17 + -0x430) = puVar17 + -0x400;
  *(undefined **)(puVar17 + -0x428) = &Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot;
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar28 = *(undefined8 *)(lVar16 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar15 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar28,0,0);
  if (((ulong)plVar15 & 1) == 0) {
    uVar28 = *(undefined8 *)(lVar16 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar15 = (long *)/*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar28,0);
    *(undefined8 *)(lVar16 + 0x58) = 0;
  }
  return plVar15;
}



// ============================================================
// RVA: 0x157d424 | Atlas.Gameplay.DebugVisualiser.InitDebugMenuBindings
// ============================================================

/* WARNING: Possible PIC construction at 0x0157d75c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d8ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157da10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e15c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e4b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e5d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157e6c4) */
/* WARNING: Removing unreachable block (ram,0x0157e6c8) */
/* WARNING: Removing unreachable block (ram,0x0157e6cc) */
/* WARNING: Removing unreachable block (ram,0x0157e6f0) */
/* WARNING: Removing unreachable block (ram,0x0157e6f8) */
/* WARNING: Removing unreachable block (ram,0x0157e6fc) */
/* WARNING: Removing unreachable block (ram,0x0157e710) */
/* WARNING: Removing unreachable block (ram,0x0157e644) */
/* WARNING: Removing unreachable block (ram,0x0157e648) */
/* WARNING: Removing unreachable block (ram,0x0157e5d4) */
/* WARNING: Removing unreachable block (ram,0x0157e5ec) */
/* WARNING: Removing unreachable block (ram,0x0157e5f4) */
/* WARNING: Removing unreachable block (ram,0x0157e5f8) */
/* WARNING: Removing unreachable block (ram,0x0157e60c) */
/* WARNING: Removing unreachable block (ram,0x0157e570) */
/* WARNING: Removing unreachable block (ram,0x0157e580) */
/* WARNING: Removing unreachable block (ram,0x0157e598) */
/* WARNING: Removing unreachable block (ram,0x0157e58c) */
/* WARNING: Removing unreachable block (ram,0x0157e5a0) */
/* WARNING: Removing unreachable block (ram,0x0157e594) */
/* WARNING: Removing unreachable block (ram,0x0157e528) */
/* WARNING: Removing unreachable block (ram,0x0157e4bc) */
/* WARNING: Removing unreachable block (ram,0x0157e67c) */
/* WARNING: Removing unreachable block (ram,0x0157e4c0) */
/* WARNING: Removing unreachable block (ram,0x0157e4c4) */
/* WARNING: Removing unreachable block (ram,0x0157e440) */
/* WARNING: Removing unreachable block (ram,0x0157e444) */
/* WARNING: Removing unreachable block (ram,0x0157e3d0) */
/* WARNING: Removing unreachable block (ram,0x0157e3e8) */
/* WARNING: Removing unreachable block (ram,0x0157e3f0) */
/* WARNING: Removing unreachable block (ram,0x0157e3f4) */
/* WARNING: Removing unreachable block (ram,0x0157e408) */
/* WARNING: Removing unreachable block (ram,0x0157e36c) */
/* WARNING: Removing unreachable block (ram,0x0157e37c) */
/* WARNING: Removing unreachable block (ram,0x0157e390) */
/* WARNING: Removing unreachable block (ram,0x0157e388) */
/* WARNING: Removing unreachable block (ram,0x0157e394) */
/* WARNING: Removing unreachable block (ram,0x0157e39c) */
/* WARNING: Removing unreachable block (ram,0x0157e304) */
/* WARNING: Removing unreachable block (ram,0x0157e474) */
/* WARNING: Removing unreachable block (ram,0x0157e308) */
/* WARNING: Removing unreachable block (ram,0x0157e30c) */
/* WARNING: Removing unreachable block (ram,0x0157e288) */
/* WARNING: Removing unreachable block (ram,0x0157e28c) */
/* WARNING: Removing unreachable block (ram,0x0157e214) */
/* WARNING: Removing unreachable block (ram,0x0157e22c) */
/* WARNING: Removing unreachable block (ram,0x0157e234) */
/* WARNING: Removing unreachable block (ram,0x0157e238) */
/* WARNING: Removing unreachable block (ram,0x0157e24c) */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */
/* WARNING: Removing unreachable block (ram,0x0157f814) */
/* WARNING: Removing unreachable block (ram,0x0157f598) */
/* WARNING: Removing unreachable block (ram,0x0157f5b0) */
/* WARNING: Removing unreachable block (ram,0x0157f5b8) */
/* WARNING: Removing unreachable block (ram,0x0157f5bc) */
/* WARNING: Removing unreachable block (ram,0x0157f5d0) */
/* WARNING: Removing unreachable block (ram,0x0157f5d4) */
/* WARNING: Removing unreachable block (ram,0x0157e8f8) */
/* WARNING: Removing unreachable block (ram,0x0157e1b0) */
/* WARNING: Removing unreachable block (ram,0x0157e1c0) */
/* WARNING: Removing unreachable block (ram,0x0157e1d8) */
/* WARNING: Removing unreachable block (ram,0x0157e1cc) */
/* WARNING: Removing unreachable block (ram,0x0157e1e0) */
/* WARNING: Removing unreachable block (ram,0x0157e1d4) */
/* WARNING: Removing unreachable block (ram,0x0157e160) */
/* WARNING: Removing unreachable block (ram,0x0157e2c0) */
/* WARNING: Removing unreachable block (ram,0x0157e164) */
/* WARNING: Removing unreachable block (ram,0x0157e168) */
/* WARNING: Removing unreachable block (ram,0x0157e0fc) */
/* WARNING: Removing unreachable block (ram,0x0157e100) */
/* WARNING: Removing unreachable block (ram,0x0157e108) */
/* WARNING: Removing unreachable block (ram,0x01641834) */
/* WARNING: Removing unreachable block (ram,0x0164183c) */
/* WARNING: Removing unreachable block (ram,0x0164185c) */
/* WARNING: Removing unreachable block (ram,0x01641870) */
/* WARNING: Removing unreachable block (ram,0x0164148c) */
/* WARNING: Removing unreachable block (ram,0x01641494) */
/* WARNING: Removing unreachable block (ram,0x016414b4) */
/* WARNING: Removing unreachable block (ram,0x016414c8) */
/* WARNING: Removing unreachable block (ram,0x0157da14) */
/* WARNING: Removing unreachable block (ram,0x01641368) */
/* WARNING: Removing unreachable block (ram,0x016413b4) */
/* WARNING: Removing unreachable block (ram,0x016413e0) */
/* WARNING: Removing unreachable block (ram,0x016414d4) */
/* WARNING: Removing unreachable block (ram,0x016414d8) */
/* WARNING: Removing unreachable block (ram,0x01641404) */
/* WARNING: Removing unreachable block (ram,0x016414fc) */
/* WARNING: Removing unreachable block (ram,0x01641500) */
/* WARNING: Removing unreachable block (ram,0x0164140c) */
/* WARNING: Removing unreachable block (ram,0x01641504) */
/* WARNING: Removing unreachable block (ram,0x01641548) */
/* WARNING: Removing unreachable block (ram,0x016415a4) */
/* WARNING: Removing unreachable block (ram,0x016415c8) */
/* WARNING: Removing unreachable block (ram,0x016415ec) */
/* WARNING: Removing unreachable block (ram,0x016415f4) */
/* WARNING: Removing unreachable block (ram,0x01641608) */
/* WARNING: Removing unreachable block (ram,0x01641618) */
/* WARNING: Removing unreachable block (ram,0x01641620) */
/* WARNING: Removing unreachable block (ram,0x01641624) */
/* WARNING: Removing unreachable block (ram,0x0164162c) */
/* WARNING: Removing unreachable block (ram,0x0164166c) */
/* WARNING: Removing unreachable block (ram,0x01641680) */
/* WARNING: Removing unreachable block (ram,0x01641688) */
/* WARNING: Removing unreachable block (ram,0x01641698) */
/* WARNING: Removing unreachable block (ram,0x016416a0) */
/* WARNING: Removing unreachable block (ram,0x01641714) */
/* WARNING: Removing unreachable block (ram,0x016416dc) */
/* WARNING: Removing unreachable block (ram,0x016416f4) */
/* WARNING: Removing unreachable block (ram,0x0157d9b0) */
/* WARNING: Removing unreachable block (ram,0x0157d9b8) */
/* WARNING: Removing unreachable block (ram,0x0157d958) */
/* WARNING: Removing unreachable block (ram,0x0157d8f0) */
/* WARNING: Removing unreachable block (ram,0x0157d8f8) */
/* WARNING: Removing unreachable block (ram,0x0157d88c) */
/* WARNING: Removing unreachable block (ram,0x0157d894) */
/* WARNING: Removing unreachable block (ram,0x0157d828) */
/* WARNING: Removing unreachable block (ram,0x0157d830) */
/* WARNING: Removing unreachable block (ram,0x0157d7c4) */
/* WARNING: Removing unreachable block (ram,0x0157d7cc) */
/* WARNING: Removing unreachable block (ram,0x0157d760) */
/* WARNING: Removing unreachable block (ram,0x0157d768) */
/* WARNING: Removing unreachable block (ram,0x0157e764) */
/* WARNING: Removing unreachable block (ram,0x0157e774) */
/* WARNING: Removing unreachable block (ram,0x0157e788) */
/* WARNING: Removing unreachable block (ram,0x0157e780) */
/* WARNING: Removing unreachable block (ram,0x0157e78c) */
/* WARNING: Removing unreachable block (ram,0x0157e794) */
/* WARNING: Removing unreachable block (ram,0x0157e7bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_DebugVisualiser__InitDebugMenuBindings
                 (undefined1 param_1 [16],ulong param_2,undefined1 param_3 [16],ulong param_4,
                 ulong param_5,float param_6,uint param_7,undefined8 param_8,undefined8 param_9,
                 float *param_10,float *param_11,float *param_12,long *param_13)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined1 *puVar9;
  bool bVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  long *plVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  float *pfVar22;
  long *plVar23;
  ulong uVar24;
  int iVar15;
  long *plVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined4 extraout_w1;
  uint uVar29;
  uint uVar30;
  int extraout_w1_00;
  long extraout_x1;
  long *extraout_x1_00;
  long extraout_x1_01;
  undefined8 extraout_x1_02;
  long extraout_x1_03;
  float *pfVar31;
  long lVar32;
  long lVar33;
  float *pfVar34;
  ulong uVar35;
  float *pfVar36;
  undefined1 *puVar37;
  undefined8 *extraout_x8;
  ulong uVar38;
  int *piVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  long *unaff_x19;
  ulong uVar44;
  float *unaff_x20;
  uint uVar45;
  ulong unaff_x21;
  long lVar46;
  ulong uVar47;
  float *unaff_x22;
  ulong uVar48;
  float fVar49;
  ulong unaff_x23;
  ulong uVar50;
  undefined8 unaff_x24;
  undefined8 uVar51;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar52;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_b0_07;
  undefined1 extraout_b0_08;
  undefined1 extraout_b0_09;
  undefined1 extraout_b0_10;
  undefined1 extraout_b0_11;
  undefined1 extraout_b0_12;
  undefined1 extraout_b0_13;
  undefined1 extraout_b0_14;
  undefined1 extraout_b0_15;
  undefined1 extraout_b0_16;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar53;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 uVar54;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 uVar55;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  undefined1 extraout_var_38;
  undefined1 extraout_var_39;
  undefined1 extraout_var_40;
  undefined1 extraout_var_41;
  undefined1 extraout_var_42;
  undefined1 extraout_var_43;
  undefined1 extraout_var_44;
  undefined1 extraout_var_45;
  undefined1 extraout_var_46;
  undefined1 extraout_var_47;
  undefined1 extraout_var_48;
  undefined1 extraout_var_49;
  uint uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar61;
  ulong unaff_d11;
  float fVar62;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  float fVar63;
  undefined4 uVar64;
  ulong unaff_d15;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  
  auVar67._8_8_ = param_9;
  auVar67._0_8_ = param_8;
  uVar60 = param_3._4_4_;
  fVar59 = param_3._0_4_;
  while( true ) {
    lVar26 = auVar67._8_8_;
    plVar25 = auVar67._0_8_;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(float **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar46 = 0x3eb5000;
    plVar16 = plVar25;
    if ((bRam0000000003eb5098 & 1) == 0) {
      func_0x00f78a20(0x3d54b28);
      func_0x00f78a20(0x3d54b30);
      func_0x00f78a20(0x3d54b38);
      func_0x00f78a20(0x3d54b40);
      func_0x00f78a20(0x3d54b48);
      func_0x00f78a20(0x3d54b50);
      func_0x00f78a20(0x3d54b58);
      func_0x00f78a20(0x3d54b60);
      func_0x00f78a20(0x3d54b68);
      func_0x00f78a20(0x3d3bfa0);
      func_0x00f78a20(0x3d3bf88);
      func_0x00f78a20(0x3d1de30);
      func_0x00f78a20(0x3d41608);
      func_0x00f78a20(0x3d415f8);
      func_0x00f78a20(0x3d1eb38);
      func_0x00f78a20(0x3d1eb40);
      func_0x00f78a20(0x3d72948);
      func_0x00f78a20(0x3d72940);
      func_0x00f78a20(0x3d72950);
      func_0x00f78a20(0x3d713f8);
      func_0x00f78a20(0x3d6b890);
      func_0x00f78a20(0x3d72928);
      func_0x00f78a20(0x3d6d818);
      func_0x00f78a20(0x3d70570);
      func_0x00f78a20(0x3d70d30);
      func_0x00f78a20(0x3d6d008);
      func_0x00f78a20(0x3d72930);
      func_0x00f78a20(0x3d6d7e8);
      func_0x00f78a20(0x3d761c0);
      plVar16 = (long *)func_0x00f78a20(0x3d70d28);
      bRam0000000003eb5098 = 1;
    }
    if (plVar25[0x16] != 0) {
      return plVar16;
    }
    plVar25[0x16] = lVar26;
    if (lVar26 != 0) {
      fVar59 = 50.0;
      uVar60 = 0;
      param_2 = 0;
      uVar12 = /*Core.DebugMenu.DebugMenu$$AddPanelByScreenPercentage*/ func_0x0163f854(0,lVar26,1,/*STR('Visualiser')*/ pfRam0000000003d761c0,plVar25,0xffffffff,0);
      *(undefined4 *)(plVar25 + 0x17) = uVar12;
      uVar12 = *(undefined4 *)(lVar26 + 0x3c);
      *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
      param_11 = (float *)((long)&MACH_HEADER.magic + 1);
      param_12 = (float *)0x0;
      param_10 = /*STR('Visualiser')*/ pfRam0000000003d761c0;
      param_13 = plVar25;
      /*Core.DebugMenu.DebugMenu$$AddButton*/ func_0x0163f880(0,lVar26,uVar12);
      lVar46 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar46,uRam0000000003d3bf88);
      if (lVar46 != 0) {
        unaff_x22 = (float *)0x3d3bfa0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar46,/*STR('None')*/ uRam0000000003d70570,pfRam0000000003d3bfa0);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar46,/*STR('Free')*/ uRam0000000003d6d008,pfRam0000000003d3bfa0);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar46,/*STR('Orbital Local')*/ uRam0000000003d70d28,pfRam0000000003d3bfa0);
        param_10 = pfRam0000000003d3bfa0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar46,/*STR('Orbital World')*/ uRam0000000003d70d30);
        if (plVar25[0x18] != 0) {
          uVar48 = (ulong)*(uint *)(plVar25 + 0x17);
          uVar50 = (ulong)*(byte *)(plVar25[0x18] + 0x10);
          puVar17 = (undefined1 *)func_0x00f78aec(/*UnityEngine.Events.UnityAction<int, bool>_TypeInfo*/ uRam0000000003d1eb38);
          /*UnityEngine.Events.UnityAction<int, bool>$$.ctor*/ func_0x01b7facc(puVar17,plVar25,uRam0000000003d54b48,uRam0000000003d415f8);
          uVar28 = /*STR('Show Colliders')*/ uRam0000000003d72930;
          puVar37 = (undefined1 *)((long)register0x00000008 + -0x100);
          *(ulong *)((long)register0x00000008 + -0xd0) = unaff_d9;
          *(ulong *)((long)register0x00000008 + -200) = unaff_d8;
          *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3d415f8;
          *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3d1eb38;
          *(undefined1 **)((long)register0x00000008 + -0xb0) = puVar17;
          *(ulong *)((long)register0x00000008 + -0xa8) = uVar50;
          *(ulong *)((long)register0x00000008 + -0xa0) = uVar48;
          *(long *)((long)register0x00000008 + -0x98) = lVar46;
          *(long *)((long)register0x00000008 + -0x90) = lVar26;
          *(long **)((long)register0x00000008 + -0x88) = plVar25;
          *(undefined1 **)((long)register0x00000008 + -0x80) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x78) = &UNK_0157d760;
          if ((bRam0000000003eb5712 & 1) == 0) {
            func_0x00f78a20(0x3d54908);
            func_0x00f78a20(0x3d21150);
            func_0x00f78a20(0x3d74e90);
            bRam0000000003eb5712 = 1;
          }
          *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
          uVar35 = 1;
          iVar15 = /*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(lVar26,uVar48);
          if (iVar15 == 0) {
            return (long *)0xffffffff;
          }
          if (*(long *)((long)register0x00000008 + -0xf0) == 0) {
            func_0x00f78af4();
            puVar52 = &Core_DebugMenu_DebugMenu__ConfigureToggle;
            auVar68 = func_0x00f78e5c();
          }
          else {
            /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(*(long *)((long)register0x00000008 + -0xf0),0);
            auVar67 = /*Core.DebugMenu.DebugMenu$$InstantiateUIWithOptionalLabel*/ func_0x01640384(SUB41((float)CONCAT13(extraout_var_49,
                                                            CONCAT12(extraout_var_32,
                                                                     CONCAT11(extraout_var_15,
                                                                              extraout_b0_16))) +
                                            -6.0,0),0x42480000,0x428c0000,lVar26,7,
                                      /*STR('Toggle')*/ uRam0000000003d74e90,uVar28);
            uVar28 = auVar67._0_8_;
            plVar25 = (long *)/*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(lVar26,7,uVar48,uVar28,auVar67._8_8_,plVar25,
                                              uRam0000000003d54908);
            auVar68._8_8_ = plVar25;
            auVar68._0_8_ = lVar26;
            puVar52 = &UNK_01641834;
            uVar35 = uVar50;
            puVar37 = puVar17;
          }
          uVar51 = auVar68._0_8_;
          *(undefined8 *)((long)register0x00000008 + -0x140) = uVar28;
          *(ulong *)((long)register0x00000008 + -0x138) = uVar48;
          *(long **)((long)register0x00000008 + -0x130) = plVar25;
          *(long *)((long)register0x00000008 + -0x128) = lVar26;
          *(ulong *)((long)register0x00000008 + -0x120) = uVar50;
          *(undefined1 **)((long)register0x00000008 + -0x118) = puVar17;
          *(undefined1 **)((long)register0x00000008 + -0x110) =
               (undefined1 *)((long)register0x00000008 + -0x80);
          *(undefined **)((long)register0x00000008 + -0x108) = puVar52;
          if ((bRam0000000003eb571d & 1) == 0) {
            func_0x00f78a20(0x3d535d0);
            func_0x00f78a20(0x3d62a40);
            func_0x00f78a20(0x3d270a0);
            func_0x00f78a20(0x3d41568);
            func_0x00f78a20(0x3d1ead0);
            func_0x00f78a20(0x3d41668);
            bRam0000000003eb571d = 1;
          }
          *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
          lVar46 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass84_0_TypeInfo*/ uRam0000000003d270a0);
          /*System.Object$$.ctor*/ func_0x0294d018(lVar46,0);
          if (lVar46 != 0) {
            *(undefined1 **)(lVar46 + 0x10) = puVar37;
            *(int *)(lVar46 + 0x18) = auVar68._8_4_;
            plVar16 = (long *)/*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(uVar51,auVar68._8_8_,7,
                                              (undefined1 *)((long)register0x00000008 + -0x170));
            auVar3._8_8_ = plVar16;
            auVar3._0_8_ = uVar51;
            auVar68._8_8_ = plVar16;
            auVar68._0_8_ = uVar51;
            if ((int)plVar16 == 0) {
              return plVar16;
            }
            if (*(long *)((long)register0x00000008 + -0x160) != 0) {
              lVar26 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)register0x00000008 + -0x160),
                                       uRam0000000003d535d0);
              auVar7._8_8_ = plVar16;
              auVar7._0_8_ = lVar26;
              auVar6._8_8_ = plVar16;
              auVar6._0_8_ = lVar26;
              auVar5._8_8_ = plVar16;
              auVar5._0_8_ = lVar26;
              auVar4._8_8_ = plVar16;
              auVar4._0_8_ = lVar26;
              auVar68 = auVar3;
              if ((lVar26 != 0) && (auVar68 = auVar4, *(long *)(lVar26 + 0x18) != 0)) {
                /*UnityEngine.UI.Toggle$$set_isOn*/ func_0x032ec7f8(*(long *)(lVar26 + 0x18),uVar35,0);
                auVar68 = auVar5;
                if ((*(long *)(lVar26 + 0x18) != 0) &&
                   (lVar27 = *(long *)(*(long *)(lVar26 + 0x18) + 0x110), auVar68 = auVar6,
                   lVar27 != 0)) {
                  /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar27,0);
                  if (*(long *)(lVar46 + 0x10) == 0) {
                    return plVar16;
                  }
                  auVar68 = auVar7;
                  if (*(long *)(lVar26 + 0x18) != 0) {
                    lVar26 = *(long *)(*(long *)(lVar26 + 0x18) + 0x110);
                    uVar28 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<bool>_TypeInfo*/ uRam0000000003d1ead0);
                    auVar68._0_8_ = uVar28;
                    /*UnityEngine.Events.UnityAction<bool>$$.ctor*/ func_0x01b7da80(uVar28,lVar46,uRam0000000003d62a40,uRam0000000003d41568);
                    uVar35 = 0;
                    if (lVar26 != 0) {
                      /*UnityEngine.Events.UnityEvent<bool>$$AddListener*/ func_0x01b827cc(lVar26,uVar28,uRam0000000003d41668);
                      return plVar16;
                    }
                  }
                }
              }
            }
          }
          auVar67 = func_0x00f78af4();
          *(undefined1 (*) [16])((long)register0x00000008 + -0x1a0) = auVar68;
          *(long *)((long)register0x00000008 + -400) = lVar46;
          *(ulong *)((long)register0x00000008 + -0x188) = uVar35;
          *(undefined1 **)((long)register0x00000008 + -0x180) =
               (undefined1 *)((long)register0x00000008 + -0x110);
          *(undefined **)((long)register0x00000008 + -0x178) = &Core_DebugMenu_DebugMenu__GetButton;
          if ((bRam0000000003eb5713 & 1) == 0) {
            func_0x00f78a20(0x3d21140);
            bRam0000000003eb5713 = 1;
          }
          *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
          uVar48 = /*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(auVar67._0_8_,auVar67._8_8_,2,
                                   (undefined1 *)((long)register0x00000008 + -0x1d0));
          if (((uVar48 & 1) != 0) ||
             (iVar15 = /*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(auVar67._0_8_,auVar67._8_8_,3,
                                       (undefined1 *)((long)register0x00000008 + -0x1d0)),
             iVar15 != 0)) {
            plVar16 = *(long **)((long)register0x00000008 + -0x1b8);
            if (plVar16 == (long *)0x0) {
              return (long *)0x0;
            }
            if ((*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) <= *(byte *)(*plVar16 + 300)) &&
               (*(long *)(*(long *)(*plVar16 + 200) +
                          (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8 + -8) ==
                /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
              return plVar16;
            }
            func_0x00f78e5c();
          }
          return (long *)0x0;
        }
      }
    }
    unaff_x19 = (long *)func_0x00f78af4();
    *(ulong *)((long)register0x00000008 + -0x100) = unaff_d15;
    *(ulong *)((long)register0x00000008 + -0xf8) = unaff_d14;
    *(ulong *)((long)register0x00000008 + -0xf0) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0xe8) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0xe0) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0xd8) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0xd0) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -200) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0xb8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0xa8) = unaff_x23;
    *(float **)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x98) = lVar46;
    *(long *)((long)register0x00000008 + -0x90) = lVar26;
    *(long **)((long)register0x00000008 + -0x88) = plVar25;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_Gameplay_DebugVisualiser__Update;
    uVar13 = CONCAT13(extraout_var_36,
                      CONCAT12(extraout_var_19,CONCAT11(extraout_var_02,extraout_b0_02)));
    uVar50 = (ulong)uVar13;
    uVar48 = 0x3eb5000;
    plVar16 = unaff_x19;
    if ((bRam0000000003eb5099 & 1) == 0) {
      func_0x00f78a20(0x3d20058);
      func_0x00f78a20(0x3d27140);
      func_0x00f78a20(0x3d3d048);
      func_0x00f78a20(0x3d3d050);
      func_0x00f78a20(0x3d3d058);
      plVar16 = (long *)func_0x00f78a20(0x3d23990);
      bRam0000000003eb5099 = 1;
    }
    uVar28 = unaff_x24;
    uVar35 = unaff_x25;
    uVar47 = unaff_x26;
    if (*(char *)((long)unaff_x19 + 0xf9) != '\0') break;
code_r0x0157dbf0:
    lVar46 = unaff_x19[9];
    if (lVar46 == 0) goto code_r0x0157deb4;
    uVar13 = *(int *)(lVar46 + 0x18) - 1;
    uVar48 = (ulong)uVar13;
    if (-1 < (int)uVar13) {
      unaff_x23 = 0x28;
      unaff_x24 = 0x3d3d048;
      unaff_x25 = 0x3d23990;
      unaff_x26 = 0x3d27140;
      do {
        if (*(uint *)(lVar46 + 0x18) <= (uint)uVar48) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar26 = *(long *)(lVar46 + 0x10) + uVar48 * 0x28;
        unaff_x22 = *(float **)(lVar26 + 0x28);
        if (unaff_x22 == (float *)0x0) {
          uVar28 = 0x3d3d048;
          uVar35 = 0x3d23990;
          uVar47 = 0x3d27140;
          if (unaff_x19[9] == 0) goto code_r0x0157deb4;
          param_10 = pfRam0000000003d3d048;
          plVar16 = (long *)/*System.Collections.Generic.List<DebugVisualiser.Collider>$$RemoveAt*/ func_0x02518cf0(unaff_x19[9],uVar48);
        }
        else {
          lVar46 = *(long *)(lVar26 + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_10 = (float *)0x0;
          plVar16 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar46,0);
          if (((ulong)plVar16 & 1) == 0) {
            lVar26 = *(long *)unaff_x22;
            uVar35 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar35 != 0) {
              piVar39 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar39 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
                  puVar18 = (undefined8 *)(lVar26 + (long)(*piVar39 + 1) * 0x10 + 0x138);
                  goto code_r0x0157dcdc;
                }
                piVar39 = piVar39 + 4;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
            param_10 = (float *)((long)&MACH_HEADER.magic + 1);
            puVar18 = (undefined8 *)func_0x00fac1f0(unaff_x22);
code_r0x0157dcdc:
            (*(code *)*puVar18)(unaff_x22,puVar18[1]);
            uVar28 = unaff_x24;
            uVar35 = unaff_x25;
            uVar47 = unaff_x26;
            if (lVar46 == 0) goto code_r0x0157deb4;
            /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar46,0);
            lVar26 = *(long *)unaff_x22;
            uVar35 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar35 != 0) {
              piVar39 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar39 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
                  puVar18 = (undefined8 *)(lVar26 + (long)(*piVar39 + 2) * 0x10 + 0x138);
                  goto code_r0x0157dd48;
                }
                piVar39 = piVar39 + 4;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
            param_10 = (float *)((long)&MACH_HEADER.magic + 2);
            puVar18 = (undefined8 *)func_0x00fac1f0(unaff_x22);
code_r0x0157dd48:
            (*(code *)*puVar18)(unaff_x22,puVar18[1]);
            /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar46,0);
            lVar26 = *(long *)unaff_x22;
            uVar35 = (ulong)*(ushort *)(lVar26 + 0x12a);
            if (uVar35 != 0) {
              piVar39 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
              do {
                if (*(long *)(piVar39 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
                  puVar18 = (undefined8 *)(lVar26 + (long)(*piVar39 + 3) * 0x10 + 0x138);
                  goto code_r0x0157ddb0;
                }
                piVar39 = piVar39 + 4;
                uVar35 = uVar35 - 1;
              } while (uVar35 != 0);
            }
            param_10 = (float *)((long)&MACH_HEADER.magic + 3);
            puVar18 = (undefined8 *)func_0x00fac1f0(unaff_x22);
code_r0x0157ddb0:
            (*(code *)*puVar18)(unaff_x22,puVar18[1]);
            plVar16 = (long *)/*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar46,0);
          }
        }
        uVar13 = (uint)uVar48 - 1;
        uVar48 = (ulong)uVar13;
        if ((int)uVar13 < 0) break;
        lVar46 = unaff_x19[9];
        uVar28 = unaff_x24;
        uVar35 = unaff_x25;
        uVar47 = unaff_x26;
        if (lVar46 == 0) goto code_r0x0157deb4;
      } while( true );
    }
    uVar28 = unaff_x24;
    uVar35 = unaff_x25;
    uVar47 = unaff_x26;
    if (unaff_x19[0x1e] == 0) goto code_r0x0157deb4;
    if (*(char *)(unaff_x19[0x1e] + 0x10) == '\0') {
      return plVar16;
    }
    if (unaff_x19[4] == 0) goto code_r0x0157deb4;
    plVar25 = *(long **)(unaff_x19[4] + 0x68);
    if (plVar25 == (long *)0x0) {
      return plVar16;
    }
    if (*(byte *)(*plVar25 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300)) {
      return plVar16;
    }
    if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300) * 8 + -8)
        != /*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058) {
      return plVar16;
    }
    unaff_x21 = plVar25[0x2b];
    param_10 = (float *)plVar25[0x2c];
    uVar13 = *(uint *)(plVar25 + 0xf);
    unaff_x22 = (float *)(ulong)uVar13;
    uVar48 = (ulong)*(uint *)((long)plVar25 + 0x8c);
    fVar58 = *(float *)(plVar25 + 0x12);
    uVar60 = 0;
    /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c((char)(int)plVar25[0x11],0);
    fVar49 = *(float *)(plVar25 + 0x16);
    unaff_x20 = (float *)(ulong)(uint)fVar49;
    unaff_x26 = *(ulong *)((long)register0x00000008 + -0xc0);
    unaff_x25 = *(ulong *)((long)register0x00000008 + -0xb8);
    unaff_d11 = *(ulong *)((long)register0x00000008 + -0xe0);
    unaff_d13 = *(ulong *)((long)register0x00000008 + -0xf0);
    unaff_d12 = *(ulong *)((long)register0x00000008 + -0xe8);
    unaff_d15 = *(ulong *)((long)register0x00000008 + -0x100);
    unaff_d14 = *(ulong *)((long)register0x00000008 + -0xf8);
    *(ulong *)((long)register0x00000008 + -0x110) = unaff_d15;
    *(ulong *)((long)register0x00000008 + -0x108) = unaff_d14;
    *(ulong *)((long)register0x00000008 + -0x100) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0xf8) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0xf0) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0xe8) =
         *(undefined8 *)((long)register0x00000008 + -0xd8);
    *(undefined8 *)((long)register0x00000008 + -0xe0) =
         *(undefined8 *)((long)register0x00000008 + -0xd0);
    *(undefined8 *)((long)register0x00000008 + -0xd8) =
         *(undefined8 *)((long)register0x00000008 + -200);
    *(long *)((long)register0x00000008 + -0xd0) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -200) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0xb8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)((long)register0x00000008 + -0xb0);
    *(undefined8 *)((long)register0x00000008 + -0xa8) =
         *(undefined8 *)((long)register0x00000008 + -0xa8);
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -0x98);
    *(undefined8 *)((long)register0x00000008 + -0x90) =
         *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
    unaff_d8 = (ulong)(uint)fVar58;
    unaff_d9 = uVar48 & 0xffffffff;
    unaff_d10 = (ulong)CONCAT13(extraout_var_41,
                                CONCAT12(extraout_var_24,CONCAT11(extraout_var_07,extraout_b0_07)));
    plVar16 = unaff_x19;
    param_11 = unaff_x22;
    param_12 = unaff_x20;
    param_2 = uVar48;
    fVar57 = fVar58;
    if ((bRam0000000003eb5097 & 1) == 0) {
      func_0x00f78a20(0x3d3d078);
      plVar16 = (long *)func_0x00f78a20(0x3d777a8);
      bRam0000000003eb5097 = 1;
    }
    unaff_x27 = unaff_x19[0xc];
    if (unaff_x27 == 0) {
      return plVar16;
    }
    unaff_x24 = 0x3d777a8;
    fVar62 = (float)(uVar13 - 1);
    if ((int)uVar13 < 1) {
      unaff_x23 = 0;
code_r0x0157d2c0:
      fVar49 = (float)unaff_x23;
      if ((uint)*(float *)(unaff_x27 + 0x18) <= (uint)fVar49) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar46 = *(long *)(*(long *)(unaff_x27 + 0x10) + unaff_x23 * 0x10 + 0x20);
      fVar59 = fVar57;
      if ((lVar46 != 0) && (lVar46 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar46,0), fVar59 = fVar57, lVar46 != 0)) {
        param_10 = (float *)0x0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar46,1);
        unaff_x20 = (float *)unaff_x19[0xc];
        fVar59 = fVar57;
        if (unaff_x20 != (float *)0x0) {
          if ((uint)unaff_x20[6] <= (uint)fVar49) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar46 = *(long *)(*(long *)(unaff_x20 + 4) + unaff_x23 * 0x10 + 0x20);
          unaff_x21 = unaff_x23;
          fVar59 = fVar57;
          if ((lVar46 != 0) && (lVar46 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar46,0), fVar59 = fVar57, lVar46 != 0)) {
            param_2 = uVar48 & 0xffffffff;
            uVar60 = 0;
            /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(extraout_b0_07,lVar46,0);
            lVar46 = unaff_x19[0xc];
            unaff_x20 = (float *)0x0;
            fVar59 = fVar58;
            if (lVar46 != 0) {
              if ((uint)*(float *)(lVar46 + 0x18) <= (uint)fVar49) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar46 = *(long *)(*(long *)(lVar46 + 0x10) + unaff_x23 * 0x10 + 0x28);
              /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
              unaff_x20 = (float *)0x0;
              fVar59 = fVar58;
              if (lVar46 != 0) {
                param_10 = (float *)0x0;
                plVar16 = (long *)/*UnityEngine.Material$$SetColor*/ func_0x03237f3c(lVar46,/*STR('_ToonColour')*/ uRam0000000003d777a8);
                if (0x12 < (int)fVar49) {
                  return plVar16;
                }
                unaff_x20 = (float *)(unaff_x23 * 0x10 + 0x30);
                while( true ) {
                  unaff_x21 = unaff_x21 + 1;
                  unaff_x22 = (float *)unaff_x19[0xc];
                  fVar59 = fVar58;
                  if (unaff_x22 == (float *)0x0) break;
                  if ((uint)unaff_x22[6] <= unaff_x21) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  fVar59 = fVar58;
                  if ((*(long *)(*(long *)(unaff_x22 + 4) + (long)unaff_x20) == 0) ||
                     (lVar46 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(*(long *)(unaff_x22 + 4) + (long)unaff_x20)
                                               ,0), fVar59 = fVar58, lVar46 == 0)) break;
                  param_10 = (float *)0x0;
                  plVar16 = (long *)/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar46,0);
                  unaff_x20 = unaff_x20 + 4;
                  if (unaff_x20 == (float *)(section_00000158.sectname + 8)) {
                    return plVar16;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      unaff_x25 = 0;
      if (0x11 < (uint)fVar62) {
        fVar62 = 2.52234e-44;
      }
      unaff_x26 = (ulong)(uint)fVar62;
      unaff_x23 = (ulong)((int)fVar62 + 1);
      do {
        fVar63 = (float)unaff_x25;
        uVar50 = param_4;
        if ((uint)*(float *)(unaff_x27 + 0x18) <= (uint)fVar63) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar50 = param_4;
        }
        lVar46 = *(long *)(*(long *)(unaff_x27 + 0x10) + (long)(int)fVar63 * 0x10 + 0x20);
        fVar59 = fVar57;
        param_4 = uVar50;
        if ((lVar46 == 0) ||
           (lVar46 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar46,0), fVar59 = fVar57, param_4 = uVar50, lVar46 == 0))
        break;
        param_10 = (float *)0x0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar46,1);
        unaff_x22 = (float *)unaff_x19[0xc];
        fVar59 = fVar57;
        param_4 = uVar50;
        if (unaff_x22 == (float *)0x0) break;
        if ((uint)unaff_x22[6] <= (uint)fVar63) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        unaff_x27 = (ulong)(int)fVar63;
        lVar46 = *(long *)(*(long *)(unaff_x22 + 4) + unaff_x27 * 0x10 + 0x20);
        fVar59 = fVar57;
        param_4 = uVar50;
        if (lVar46 == 0) break;
        lVar46 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar46,0);
        puVar1 = (undefined4 *)(unaff_x21 + unaff_x27 * 0x10);
        uVar35 = (ulong)(uint)puVar1[1];
        fVar57 = (float)puVar1[2];
        uVar60 = 0;
        /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c((char)*puVar1,0);
        unaff_x22 = (float *)0x0;
        param_2 = uVar35;
        fVar59 = fVar57;
        param_4 = uVar50;
        if (lVar46 == 0) break;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar46,0);
        if (fVar49 == fVar63) {
          /*UnityEngine.Color$$get_red*/ func_0x0322356c(0);
          uVar11 = extraout_b0;
          uVar53 = extraout_var;
          uVar54 = extraout_var_16;
          uVar55 = extraout_var_33;
        }
        else if ((int)fVar63 < (int)fVar49) {
          /*UnityEngine.Color$$get_blue*/ func_0x03223594(0);
          uVar11 = extraout_b0_00;
          uVar53 = extraout_var_00;
          uVar54 = extraout_var_17;
          uVar55 = extraout_var_34;
        }
        else {
          /*UnityEngine.Color$$get_yellow*/ func_0x032235d0(0);
          uVar11 = extraout_b0_01;
          uVar53 = extraout_var_01;
          uVar54 = extraout_var_18;
          uVar55 = extraout_var_35;
        }
        unaff_d11 = (ulong)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar11)));
        unaff_d12 = uVar35 & 0xffffffff;
        unaff_d13 = (ulong)(uint)fVar57;
        unaff_d14 = uVar50 & 0xffffffff;
        unaff_x22 = (float *)unaff_x19[0xc];
        param_2 = uVar35;
        fVar59 = fVar57;
        param_4 = uVar50;
        if (unaff_x22 == (float *)0x0) break;
        if ((uint)unaff_x22[6] <= (uint)fVar63) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar46 = *(long *)(*(long *)(unaff_x22 + 4) + unaff_x27 * 0x10 + 0x28);
        if (lVar46 == 0) break;
        param_2 = uVar35 & 0xffffffff;
        uVar60 = 0;
        param_4 = uVar50 & 0xffffffff;
        param_10 = (float *)0x0;
        /*UnityEngine.Material$$SetColor*/ func_0x03237f3c(uVar11,lVar46,/*STR('_ToonColour')*/ uRam0000000003d777a8);
        fVar59 = fVar57;
        if (fVar62 == fVar63) {
          unaff_x27 = unaff_x19[0xc];
          if (unaff_x27 != 0) goto code_r0x0157d2c0;
          break;
        }
        unaff_x25 = (ulong)((int)fVar63 + 1);
        unaff_x27 = unaff_x19[0xc];
      } while (unaff_x27 != 0);
    }
    unaff_x30 = Atlas_Gameplay_DebugVisualiser__InitDebugMenuBindings;
    auVar67 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  }
  if ((unaff_x19[4] != 0) && (lVar26 = *(long *)(unaff_x19[4] + 0x18), lVar26 != 0)) {
    plVar16 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar26,0);
    uVar45 = (uint)param_2;
    uVar48 = unaff_x19[5];
    if (uVar48 != 0) {
      *(uint *)((long)register0x00000008 + -0x104) = uVar13;
      lVar46 = 0;
      if (plVar16 == (long *)0x0) goto code_r0x0157deb4;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar16,0);
      *(uint *)((long)register0x00000008 + -0x108) =
           CONCAT13(extraout_var_37,
                    CONCAT12(extraout_var_20,CONCAT11(extraout_var_03,extraout_b0_03)));
      unaff_d10 = (ulong)uVar45;
      unaff_d11 = (ulong)(uint)fVar59;
      param_6 = fVar59;
      uVar56 = uVar45;
      /*UnityEngine.Transform$$get_right*/ func_0x03275618(plVar16,0);
      uVar13 = CONCAT13(extraout_var_38,
                        CONCAT12(extraout_var_21,CONCAT11(extraout_var_04,extraout_b0_04)));
      unaff_d12 = (ulong)uVar13;
      unaff_d13 = (ulong)uVar56;
      unaff_d14 = (ulong)(uint)param_6;
      fVar49 = param_6;
      uVar29 = uVar56;
      /*UnityEngine.Transform$$get_up*/ func_0x03275714(plVar16,0);
      uVar14 = CONCAT13(extraout_var_39,
                        CONCAT12(extraout_var_22,CONCAT11(extraout_var_05,extraout_b0_05)));
      unaff_d15 = (ulong)uVar14;
      uVar50 = (ulong)uVar29;
      unaff_d9 = (ulong)(uint)fVar49;
      fVar57 = fVar49;
      uVar30 = uVar29;
      /*UnityEngine.Transform$$get_forward*/ func_0x03275810(plVar16,0);
      *(uint *)((long)register0x00000008 + -0x110) = uVar30;
      *(float *)((long)register0x00000008 + -0x10c) = fVar57;
      *(float *)((long)register0x00000008 + -0x118) = fVar49;
      *(uint *)((long)register0x00000008 + -0x114) =
           CONCAT13(extraout_var_40,
                    CONCAT12(extraout_var_23,CONCAT11(extraout_var_06,extraout_b0_06)));
      *(uint *)((long)register0x00000008 + -0x120) = uVar14;
      *(uint *)((long)register0x00000008 + -0x11c) = uVar29;
      param_2 = (ulong)uVar45;
      uVar60 = 0;
      param_4 = (ulong)uVar13;
      param_5 = (ulong)uVar56;
      Atlas_Gameplay_DebugFreeCameraController__SetOrbitalTarget
                ((char)*(undefined4 *)((long)register0x00000008 + -0x108),uVar48);
      plVar16 = (long *)0x0;
      if (unaff_x19[5] != 0) {
        plVar16 = (long *)Atlas_Gameplay_DebugFreeCameraController__Update
                                    ((char)*(undefined4 *)((long)register0x00000008 + -0x104));
      }
    }
    goto code_r0x0157dbf0;
  }
code_r0x0157deb4:
  auVar67 = func_0x00f78af4();
  pfVar36 = auVar67._8_8_;
  lVar26 = auVar67._0_8_;
  puVar17 = (undefined1 *)((long)register0x00000008 + -0x300);
  puVar9 = (undefined1 *)((long)register0x00000008 + -0x300);
  *(ulong *)((long)register0x00000008 + -0x1b0) = unaff_d13;
  *(ulong *)((long)register0x00000008 + -0x1a8) = unaff_d12;
  *(ulong *)((long)register0x00000008 + -0x1a0) = unaff_d11;
  *(ulong *)((long)register0x00000008 + -0x198) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -400) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x188) = uVar50;
  *(long *)((long)register0x00000008 + -0x180) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x178) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x170) = uVar47;
  *(ulong *)((long)register0x00000008 + -0x168) = uVar35;
  *(undefined8 *)((long)register0x00000008 + -0x160) = uVar28;
  *(ulong *)((long)register0x00000008 + -0x158) = unaff_x23;
  *(float **)((long)register0x00000008 + -0x150) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x148) = lVar46;
  *(ulong *)((long)register0x00000008 + -0x140) = uVar48;
  *(long **)((long)register0x00000008 + -0x138) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x130) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0x128) =
       &Atlas_Gameplay_DebugVisualiser__CacheSceneObjects;
  puVar37 = (undefined1 *)((long)register0x00000008 + -0x130);
  if ((bRam0000000003eb509a & 1) == 0) {
    func_0x00f78a20(0x3d3d030);
    func_0x00f78a20(0x3d3b268);
    func_0x00f78a20(0x3d3d038);
    func_0x00f78a20(0x3d3b270);
    func_0x00f78a20(0x3d5b058);
    func_0x00f78a20(0x3d5b060);
    func_0x00f78a20(0x3d5b068);
    func_0x00f78a20(0x3d5b070);
    func_0x00f78a20(0x3d5b088);
    func_0x00f78a20(0x3d5b078);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d27150);
    func_0x00f78a20(0x3d27148);
    bRam0000000003eb509a = 1;
  }
  plVar16 = (long *)0x3d5b068;
  uVar48 = 0x3d5b088;
  *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x218) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x220) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x290) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x298) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x2a0) = 0;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar19 = (long *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b070);
  plVar20 = (long *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b058);
  uVar28 = /*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b078);
  *(undefined8 *)((long)register0x00000008 + -0x2e8) = uVar28;
  plVar21 = (long *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b060);
  pfVar22 = (float *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b068);
  uVar28 = /*UnityEngine.Object$$FindObjectsOfType<Volume>*/ func_0x018a6574(1,uRam0000000003d5b088);
  *(undefined8 *)((long)register0x00000008 + -0x2e0) = uVar28;
  plVar25 = plVar16;
  if (*(long *)(lVar26 + 0x38) == 0) {
code_r0x0157e7f8:
    func_0x00f78af4();
    plVar16 = plVar25;
code_r0x0157e7fc:
    pfVar36 = param_10;
    uVar28 = func_0x00f78b24();
    puVar52 = &Atlas_Gameplay_DebugVisualiser__IncludeGameObject;
    func_0x00f78ac0(uVar28,0);
    lVar46 = extraout_x1;
    if (extraout_x1 != 0) goto code_r0x0322efac;
    *(undefined1 **)((long)register0x00000008 + -0x310) = puVar37;
    *(undefined **)((long)register0x00000008 + -0x308) =
         &Atlas_Gameplay_DebugVisualiser__IncludeGameObject;
    puVar52 = &Atlas_Gameplay_DebugVisualiser__IgnoreCollider;
    func_0x00f78af4();
    puVar17 = (undefined1 *)((long)register0x00000008 + -0x310);
    plVar23 = extraout_x1_00;
    plVar25 = plVar16;
    puVar37 = (undefined1 *)((long)register0x00000008 + -0x310);
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar26 + 0x38),uRam0000000003d3b270);
    if (*(long *)(lVar26 + 0x40) == 0) goto code_r0x0157e7f8;
    uVar48 = 0x3d3d038;
    /*System.Collections.Generic.List<DebugVisualiser.Collider>$$Clear*/ func_0x025175f0(*(long *)(lVar26 + 0x40),uRam0000000003d3d038);
    lVar46 = *(long *)(lVar26 + 0x48);
    plVar25 = (long *)0x3d5b068;
    if (lVar46 == 0) goto code_r0x0157e7f8;
    *(long **)((long)register0x00000008 + -0x2f0) = plVar21;
    plVar23 = (long *)/*System.Collections.Generic.List<DebugVisualiser.Collider>$$Clear*/ func_0x025175f0(lVar46,uRam0000000003d3d038);
    if (plVar19 == (long *)0x0) goto code_r0x0157e7f8;
    uVar13 = *(uint *)(plVar19 + 3);
    uVar48 = 0x3d3d038;
    if (0 < (int)uVar13) {
      uVar48 = 0;
      plVar25 = (long *)0x3d3b268;
      do {
        uVar45 = (uint)uVar48;
        plVar16 = (long *)0x3d3b268;
        if (uVar13 <= uVar45) goto code_r0x0157e7fc;
        unaff_x27 = plVar19[(long)(int)uVar45 + 4];
        if (unaff_x27 == 0) goto code_r0x0157e7f8;
        plVar23 = (long *)/*UnityEngine.Renderer$$get_enabled*/ func_0x0325baf4(unaff_x27,0);
        if ((int)plVar23 != 0) {
          lVar46 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x27,0);
          if (lVar46 == 0) goto code_r0x0157e7f8;
          puVar52 = &UNK_0157e0fc;
          puVar9 = (undefined1 *)((long)register0x00000008 + -0x300);
          goto code_r0x0322efac;
        }
        uVar48 = (ulong)(uVar45 + 1);
        uVar13 = *(uint *)(plVar19 + 3);
      } while ((int)(uVar45 + 1) < (int)uVar13);
    }
    plVar25 = plVar16;
    *(float **)((long)register0x00000008 + -0x2f8) = pfVar22;
    if (plVar20 == (long *)0x0) goto code_r0x0157e7f8;
    plVar25 = *(long **)((long)register0x00000008 + -0x2e8);
    plVar16 = plVar25;
    if (0 < (int)plVar20[3]) {
      pfVar22 = (float *)0x0;
      plVar21 = plVar20 + 4;
      if ((plVar20[3] & 0xffffffffU) == 0) goto code_r0x0157e7fc;
      plVar23 = (long *)*plVar21;
      puVar52 = &UNK_0157e160;
      puVar17 = (undefined1 *)((long)register0x00000008 + -0x300);
      plVar19 = plVar23;
      goto code_r0x0157e824;
    }
    if (plVar25 == (long *)0x0) goto code_r0x0157e7f8;
    if (0 < (int)plVar25[3]) {
      pfVar22 = (float *)0x0;
      plVar21 = plVar25 + 4;
      if ((plVar25[3] & 0xffffffffU) == 0) goto code_r0x0157e7fc;
      plVar23 = (long *)*plVar21;
      puVar52 = &UNK_0157e304;
      puVar17 = (undefined1 *)((long)register0x00000008 + -0x300);
      plVar20 = plVar23;
      goto code_r0x0157e824;
    }
    unaff_x27 = *(ulong *)((long)register0x00000008 + -0x2f0);
    if (unaff_x27 == 0) goto code_r0x0157e7f8;
    if (0 < (int)*(ulong *)(unaff_x27 + 0x18)) {
      unaff_x28 = 0;
      pfVar22 = (float *)(unaff_x27 + 0x20);
      if ((*(ulong *)(unaff_x27 + 0x18) & 0xffffffff) != 0) {
        plVar23 = *(long **)pfVar22;
        puVar52 = &UNK_0157e4bc;
        puVar17 = (undefined1 *)((long)register0x00000008 + -0x300);
        plVar21 = plVar23;
        goto code_r0x0157e824;
      }
      goto code_r0x0157e7fc;
    }
    uVar48 = *(ulong *)((long)register0x00000008 + -0x2f8);
    if (uVar48 == 0) goto code_r0x0157e7f8;
    if ((int)*(ulong *)(uVar48 + 0x18) < 1) {
      return plVar23;
    }
    plVar20 = (long *)0x0;
    plVar19 = (long *)(uVar48 + 0x20);
    if ((*(ulong *)(uVar48 + 0x18) & 0xffffffff) == 0) goto code_r0x0157e7fc;
    plVar23 = (long *)*plVar19;
    puVar52 = &UNK_0157e6c4;
    plVar25 = plVar23;
  }
code_r0x0157e824:
  auVar2._8_8_ = plVar23;
  auVar2._0_8_ = pfVar36;
  puVar9 = puVar17 + -0x40;
  *(long **)(puVar17 + -0x40) = plVar21;
  *(float **)(puVar17 + -0x38) = pfVar22;
  *(long **)(puVar17 + -0x30) = plVar25;
  *(ulong *)(puVar17 + -0x28) = uVar48;
  *(undefined1 (*) [16])(puVar17 + -0x20) = auVar67;
  *(undefined1 **)(puVar17 + -0x10) = puVar37;
  *(undefined **)(puVar17 + -8) = puVar52;
  puVar37 = puVar17 + -0x10;
  uVar28 = 0x3eb5000;
  pfVar31 = pfVar36;
  if ((bRam0000000003eb509c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509c = 1;
  }
  if ((pfVar36 != (float *)0x0) && (0 < (int)*(ulong *)(pfVar36 + 6))) {
    plVar25 = (long *)0x0;
    plVar16 = (long *)(*(ulong *)(pfVar36 + 6) & 0xffffffff);
    pfVar22 = pfVar36 + 8;
    plVar21 = (long *)0x3d23990;
    do {
      if (plVar16 <= plVar25) {
        uVar51 = func_0x00f78b24();
        func_0x00f78ac0(uVar51,0);
        goto code_r0x0157e92c;
      }
      uVar28 = *(undefined8 *)(pfVar22 + (long)plVar25 * 2);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pfVar31 = (float *)0x0;
      uVar48 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar23,uVar28);
      if ((uVar48 & 1) != 0) {
        return (long *)0x0;
      }
      plVar25 = (long *)((long)plVar25 + 1);
      plVar16 = (long *)(ulong)(uint)pfVar36[6];
    } while ((long)plVar25 < (long)(int)pfVar36[6]);
  }
  if (plVar23 != (long *)0x0) {
    iVar15 = /*UnityEngine.Collider$$get_enabled*/ func_0x0329e914(plVar23,0);
    if (iVar15 == 0) {
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
    lVar46 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar23,0);
    if (lVar46 != 0) {
      puVar52 = &UNK_0157e8f8;
      auVar67 = auVar2;
code_r0x0322efac:
      *(undefined1 (*) [16])(puVar9 + -0x20) = auVar67;
      *(undefined1 **)(puVar9 + -0x10) = puVar37;
      *(undefined **)(puVar9 + -8) = puVar52;
      if (pcRam0000000003ebf4d0 == (code *)0x0) {
        pcRam0000000003ebf4d0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeInHierarchy()");
      }
                    /* WARNING: Could not recover jumptable at 0x0322efe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar16 = (long *)(*pcRam0000000003ebf4d0)(lVar46);
      return plVar16;
    }
  }
code_r0x0157e92c:
  func_0x00f78af4();
  *(long **)(puVar17 + -0x90) = plVar19;
  *(long **)(puVar17 + -0x88) = plVar20;
  *(long **)(puVar17 + -0x80) = plVar21;
  *(float **)(puVar17 + -0x78) = pfVar22;
  *(long **)(puVar17 + -0x70) = plVar25;
  *(undefined8 *)(puVar17 + -0x68) = uVar28;
  *(float **)(puVar17 + -0x60) = pfVar36;
  *(long **)(puVar17 + -0x58) = plVar23;
  *(undefined1 **)(puVar17 + -0x50) = puVar37;
  *(undefined **)(puVar17 + -0x48) = &Atlas_Gameplay_DebugVisualiser__CreateCollider;
  uVar48 = 0x3eb5000;
  pfVar22 = pfVar31;
  pfVar36 = param_11;
  if ((bRam0000000003eb50a4 & 1) == 0) {
    func_0x00f78a20(0x3d53750);
    func_0x00f78a20(0x3d27140);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d27150);
    bRam0000000003eb50a4 = 1;
  }
  *(undefined8 *)(puVar17 + -0x98) = 0;
  if ((extraout_x1_01 != 0) &&
     (pfVar22 = pfRam0000000003d53750, /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(extraout_x1_01,puVar17 + -0x98),
     param_11 != (float *)0x0)) {
    lVar46 = *(long *)param_11;
    uVar48 = (ulong)*(ushort *)(lVar46 + 0x12a);
    if (uVar48 != 0) {
      piVar39 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar46 + (long)*piVar39 * 0x10 + 0x138);
          goto code_r0x0157ea20;
        }
        piVar39 = piVar39 + 4;
        uVar48 = uVar48 - 1;
      } while (uVar48 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(param_11,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,0);
code_r0x0157ea20:
    uVar28 = (*(code *)*puVar18)(param_11,puVar18[1]);
    uVar11 = /*UnityEngine.Collider$$get_isTrigger*/ func_0x0329e9e4(extraout_x1_01,0);
    uVar51 = *(undefined8 *)(puVar17 + -0x98);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar16 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar51,0,0);
    if (*(byte *)(*(long *)param_11 + 300) < *(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300)) {
      bVar10 = false;
    }
    else {
      bVar10 = *(long *)(*(long *)(*(long *)param_11 + 200) +
                         (ulong)*(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300) * 8 + -8) ==
               /*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150;
    }
    *extraout_x8 = pfVar31;
    extraout_x8[1] = param_11;
    extraout_x8[2] = 0;
    extraout_x8[3] = uVar28;
    *(undefined1 *)(extraout_x8 + 4) = uVar11;
    *(char *)((long)extraout_x8 + 0x21) = (char)plVar16;
    *(bool *)((long)extraout_x8 + 0x22) = bVar10;
    *(undefined4 *)((long)extraout_x8 + 0x23) = 0;
    *(undefined1 *)((long)extraout_x8 + 0x27) = 0;
    return plVar16;
  }
  func_0x00f78af4();
  *(long **)(puVar17 + -0xe0) = plVar21;
  *(undefined8 *)(puVar17 + -0xd8) = 0x3eb5000;
  *(long *)(puVar17 + -0xd0) = extraout_x1_01;
  *(float **)(puVar17 + -200) = pfVar31;
  *(float **)(puVar17 + -0xc0) = param_11;
  *(undefined8 **)(puVar17 + -0xb8) = extraout_x8;
  *(undefined1 **)(puVar17 + -0xb0) = puVar17 + -0x50;
  *(undefined **)(puVar17 + -0xa8) = &Atlas_Gameplay_DebugVisualiser__GetReplicator;
  plVar16 = (long *)0x3eb5000;
  pfVar31 = pfVar22;
  if ((bRam0000000003eb509b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509b = 1;
  }
  lVar46 = extraout_x1_01;
  if (pfVar22 != (float *)0x0) {
    fVar49 = pfVar22[6];
    if (0 < (int)fVar49) {
      uVar48 = 0;
      plVar21 = (long *)0x3d23990;
      do {
        fVar57 = (float)uVar48;
        if ((uint)fVar49 <= (uint)fVar57) {
          uVar28 = func_0x00f78b24();
          func_0x00f78ac0(uVar28,0);
          goto code_r0x0157ebb8;
        }
        plVar16 = *(long **)(pfVar22 + (long)(int)fVar57 * 2 + 8);
        if (plVar16 == (long *)0x0) goto code_r0x0157ebb8;
        lVar46 = plVar16[7];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pfVar31 = (float *)0x0;
        uVar48 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar46,extraout_x1_02);
        if ((uVar48 & 1) != 0) {
          return plVar16;
        }
        uVar48 = (ulong)((int)fVar57 + 1U);
        fVar49 = pfVar22[6];
      } while ((int)((int)fVar57 + 1U) < (int)fVar49);
    }
    return (long *)0x0;
  }
code_r0x0157ebb8:
  uVar13 = func_0x00f78af4();
  *(ulong *)(puVar17 + -0x180) = unaff_d15;
  *(ulong *)(puVar17 + -0x178) = unaff_d14;
  *(ulong *)(puVar17 + -0x170) = unaff_d13;
  *(ulong *)(puVar17 + -0x168) = unaff_d12;
  *(ulong *)(puVar17 + -0x160) = unaff_d11;
  *(ulong *)(puVar17 + -0x158) = unaff_d10;
  *(ulong *)(puVar17 + -0x150) = unaff_d9;
  *(ulong *)(puVar17 + -0x148) = uVar50;
  *(long *)(puVar17 + -0x140) = unaff_x28;
  *(ulong *)(puVar17 + -0x138) = unaff_x27;
  *(long **)(puVar17 + -0x130) = plVar19;
  *(long **)(puVar17 + -0x128) = plVar20;
  *(long **)(puVar17 + -0x120) = plVar21;
  *(ulong *)(puVar17 + -0x118) = uVar48;
  *(long *)(puVar17 + -0x110) = lVar46;
  *(long **)(puVar17 + -0x108) = plVar16;
  *(undefined8 *)(puVar17 + -0x100) = extraout_x1_02;
  *(float **)(puVar17 + -0xf8) = pfVar22;
  *(undefined1 **)(puVar17 + -0xf0) = puVar17 + -0xb0;
  *(undefined **)(puVar17 + -0xe8) = &Atlas_Gameplay_DebugVisualiser__CreateCapsuleMesh;
  *(undefined4 *)(puVar17 + -0x1b4) = extraout_w1;
  fVar49 = (float)param_5;
  uVar50 = param_5 & 0xffffffff;
  *(ulong *)(puVar17 + -0x1b0) = param_4;
  *(ulong *)(puVar17 + -0x1a0) = CONCAT44(uVar60,fVar59);
  fVar57 = (float)param_2;
  uVar35 = param_2 & 0xffffffff;
  *(uint *)(puVar17 + -400) =
       CONCAT13(extraout_var_42,CONCAT12(extraout_var_25,CONCAT11(extraout_var_08,extraout_b0_08)));
  uVar48 = 0x3d1f3d8;
  if ((bRam0000000003eb50a6 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d1f3d8);
    func_0x00f78a20(0x3d1f5e0);
    func_0x00f78a20(0x3d715a8);
    bRam0000000003eb50a6 = 1;
  }
  uVar13 = (uVar13 & 1) + uVar13;
  uVar44 = (ulong)uVar13;
  uVar47 = (ulong)(uVar13 + 1);
  uVar24 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar47);
  lVar46 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar47);
  lVar26 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar47);
  *(ulong *)(puVar17 + -0x188) = uVar47;
  lVar27 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar47);
  fVar58 = _UNK_033f850c;
  *(uint *)(puVar17 + -0x18c) = uVar13;
  if (uVar13 < 0x7fffffff) {
    if (uVar24 == 0) goto code_r0x0157f324;
    uVar44 = 0;
    fVar62 = 360.0 / (float)*(int *)(puVar17 + -0x18c);
    unaff_d12 = (ulong)(uint)fVar62;
    param_2 = 0x43340000;
    unaff_x27 = (ulong)*(uint *)(uVar24 + 0x18);
    unaff_x28 = uVar24 + 0x20;
    uVar48 = lVar46 + 0x20;
    plVar19 = (long *)(lVar26 + 0x20);
    unaff_d13 = (ulong)(uint)_UNK_033f850c;
    uVar47 = lVar27 + 0x20;
    unaff_d14 = 0;
    fVar63 = 180.0 / (float)*(int *)(puVar17 + -0x18c);
    unaff_d15 = (ulong)(uint)fVar63;
    unaff_d10 = 0;
    do {
      if (unaff_x27 == uVar44) goto code_r0x0157f274;
      ___sincosf_stret(SUB41((float)unaff_d14 * fVar58,0));
      *(uint *)(unaff_x28 + uVar44 * 4) =
           CONCAT13(extraout_var_43,
                    CONCAT12(extraout_var_26,CONCAT11(extraout_var_09,extraout_b0_09)));
      if (lVar46 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar46 + 0x18) <= uVar44) goto code_r0x0157f274;
      *(int *)(uVar48 + uVar44 * 4) = (int)param_2;
      fVar61 = (float)unaff_d10 * fVar58;
      unaff_d11 = (ulong)(uint)fVar61;
      uVar11 = SUB41(fVar61,0);
      _cosf(uVar11);
      if (lVar26 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar26 + 0x18) <= uVar44) goto code_r0x0157f274;
      *(uint *)((long)plVar19 + uVar44 * 4) =
           CONCAT13(extraout_var_44,
                    CONCAT12(extraout_var_27,CONCAT11(extraout_var_10,extraout_b0_10)));
      _sinf(uVar11);
      if (lVar27 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar27 + 0x18) <= uVar44) goto code_r0x0157f274;
      *(uint *)(uVar47 + uVar44 * 4) =
           CONCAT13(extraout_var_45,
                    CONCAT12(extraout_var_28,CONCAT11(extraout_var_11,extraout_b0_11)));
      unaff_d14 = (ulong)(uint)(fVar62 + (float)unaff_d14);
      unaff_d10 = (ulong)(uint)(fVar63 + (float)unaff_d10);
      uVar44 = uVar44 + 1;
    } while (*(ulong *)(puVar17 + -0x188) != uVar44);
  }
  uVar13 = *(uint *)(puVar17 + -0x18c);
  uVar48 = (ulong)uVar13;
  uVar47 = *(ulong *)(puVar17 + -0x188);
  uVar45 = (uint)uVar47;
  uVar44 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,(uVar13 + 2) * uVar45);
  param_2 = 0x3f000000;
  fVar58 = (*(float *)(puVar17 + -400) - (fVar57 + fVar57)) * 0.5;
  fVar59 = 0.0;
  if (fVar58 <= 0.0) {
    fVar58 = 0.0;
  }
  unaff_d11 = (ulong)(uint)fVar58;
  unaff_d10 = (ulong)(uint)((float)(int)uVar45 * 0.5);
  uVar11 = SUB41((float)(int)uVar45 * 0.5,0);
  uVar14 = /*UnityEngine.Mathf$$CeilToInt*/ func_0x0323d108(uVar11,0);
  if ((int)uVar14 < 1) {
    unaff_x27 = 0;
  }
  else {
    uVar38 = 0;
    unaff_x27 = 0;
    uVar30 = uVar45;
    if ((int)uVar45 < 2) {
      uVar30 = 1;
    }
    do {
      if (uVar13 < 0x7fffffff) {
        if (uVar24 == 0) goto code_r0x0157f324;
        uVar43 = 0;
        do {
          if (*(uint *)(uVar24 + 0x18) <= uVar43) goto code_r0x0157f274;
          if (lVar27 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar27 + 0x18) <= uVar38) goto code_r0x0157f274;
          if (lVar26 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar26 + 0x18) <= uVar38) goto code_r0x0157f274;
          if (lVar46 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar46 + 0x18) <= uVar43) goto code_r0x0157f274;
          if (uVar44 == 0) goto code_r0x0157f324;
          uVar29 = (int)unaff_x27 + (int)uVar43;
          pfVar31 = (float *)(ulong)*(uint *)(uVar44 + 0x18);
          if (*(uint *)(uVar44 + 0x18) <= uVar29) goto code_r0x0157f274;
          fVar62 = *(float *)(lVar27 + uVar38 * 4 + 0x20);
          fVar59 = *(float *)(lVar26 + uVar38 * 4 + 0x20);
          fVar63 = *(float *)(uVar24 + 0x20 + uVar43 * 4) * fVar62 * fVar57;
          param_4 = (ulong)(uint)fVar63;
          fVar62 = fVar62 * *(float *)(lVar46 + 0x20 + uVar43 * 4) * fVar57;
          param_2 = (ulong)(uint)fVar62;
          lVar32 = uVar44 + (long)(int)uVar29 * 0xc;
          pfVar31 = (float *)(lVar32 + 0x24);
          *pfVar31 = fVar59 * fVar57;
          *(float *)(lVar32 + 0x20) = fVar63;
          *(float *)(lVar32 + 0x28) = fVar62;
          pfVar36 = (float *)(ulong)*(uint *)(uVar44 + 0x18);
          if (*(uint *)(uVar44 + 0x18) <= uVar29) goto code_r0x0157f274;
          *pfVar31 = fVar58 + fVar59 * fVar57;
          uVar43 = uVar43 + 1;
        } while (uVar30 != uVar43);
        unaff_x27 = (ulong)(uint)((int)unaff_x27 + (int)uVar43);
      }
      uVar38 = uVar38 + 1;
    } while (uVar38 != uVar14);
  }
  iVar15 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(uVar11,0);
  if (iVar15 < (int)uVar45) {
    uVar14 = uVar45;
    if ((int)uVar45 < 2) {
      uVar14 = 1;
    }
    lVar32 = (long)iVar15;
    do {
      if (uVar13 < 0x7fffffff) {
        if (uVar24 == 0) goto code_r0x0157f324;
        uVar38 = 0;
        do {
          if (*(uint *)(uVar24 + 0x18) <= uVar38) goto code_r0x0157f274;
          if (lVar27 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar27 + 0x18) <= (uint)lVar32) goto code_r0x0157f274;
          if (lVar26 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar26 + 0x18) <= (uint)lVar32) goto code_r0x0157f274;
          if (lVar46 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar46 + 0x18) <= uVar38) goto code_r0x0157f274;
          if (uVar44 == 0) goto code_r0x0157f324;
          uVar30 = (int)unaff_x27 + (int)uVar38;
          pfVar31 = (float *)(ulong)*(uint *)(uVar44 + 0x18);
          if (*(uint *)(uVar44 + 0x18) <= uVar30) goto code_r0x0157f274;
          fVar62 = *(float *)(lVar27 + lVar32 * 4 + 0x20);
          fVar59 = *(float *)(lVar26 + lVar32 * 4 + 0x20);
          fVar63 = *(float *)(uVar24 + 0x20 + uVar38 * 4) * fVar62 * fVar57;
          param_4 = (ulong)(uint)fVar63;
          fVar62 = fVar62 * *(float *)(lVar46 + 0x20 + uVar38 * 4) * fVar57;
          param_2 = (ulong)(uint)fVar62;
          lVar33 = uVar44 + (long)(int)uVar30 * 0xc;
          pfVar31 = (float *)(lVar33 + 0x24);
          *pfVar31 = fVar59 * fVar57;
          *(float *)(lVar33 + 0x20) = fVar63;
          *(float *)(lVar33 + 0x28) = fVar62;
          pfVar36 = (float *)(ulong)*(uint *)(uVar44 + 0x18);
          if (*(uint *)(uVar44 + 0x18) <= uVar30) goto code_r0x0157f274;
          *pfVar31 = fVar59 * fVar57 - fVar58;
          uVar38 = uVar38 + 1;
        } while (uVar14 != uVar38);
        unaff_x27 = (ulong)(uint)((int)unaff_x27 + (int)uVar38);
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 != (int)uVar45);
  }
  uVar24 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar13 * uVar45 * 6);
  param_5 = *(ulong *)(puVar17 + -0x1b0);
  param_4 = *(ulong *)(puVar17 + -0x1a0);
  if (uVar13 < 0x7fffffff) {
    uVar30 = 0;
    uVar14 = 0;
    uVar29 = uVar13;
    if ((int)uVar13 < 2) {
      uVar29 = 1;
    }
    do {
      if (uVar13 != 0) {
        if (uVar24 == 0) goto code_r0x0157f324;
        iVar15 = uVar30 * uVar45;
        iVar40 = (uVar30 + 1) * uVar45;
        uVar56 = *(uint *)(uVar24 + 0x18);
        uVar41 = uVar29;
        do {
          uVar42 = uVar14;
          if (uVar56 <= uVar42) goto code_r0x0157f274;
          *(int *)(uVar24 + (long)(int)uVar42 * 4 + 0x20) = iVar15;
          if ((uVar56 <= uVar42 + 1) ||
             (*(int *)(uVar24 + (long)(int)(uVar42 + 1) * 4 + 0x20) = iVar40, uVar56 <= uVar42 + 2))
          goto code_r0x0157f274;
          *(int *)(uVar24 + (long)(int)(uVar42 + 2) * 4 + 0x20) = iVar40 + 1;
          if ((uVar56 <= uVar42 + 3) ||
             ((*(int *)(uVar24 + (long)(int)(uVar42 + 3) * 4 + 0x20) = iVar15 + 1,
              uVar56 <= uVar42 + 4 ||
              (*(int *)(uVar24 + (long)(int)(uVar42 + 4) * 4 + 0x20) = iVar15, uVar56 <= uVar42 + 5)
              ))) goto code_r0x0157f274;
          *(int *)(uVar24 + (long)(int)(uVar42 + 5) * 4 + 0x20) = iVar40 + 1;
          iVar15 = iVar15 + 1;
          iVar40 = iVar40 + 1;
          uVar41 = uVar41 - 1;
          uVar14 = uVar42 + 6;
        } while (uVar41 != 0);
        uVar14 = uVar42 + 6;
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar45);
  }
  if (uVar44 != 0) {
    uVar38 = *(ulong *)(uVar44 + 0x18) & 0xffffffff;
    iVar15 = *(int *)(puVar17 + -0x1b4);
    fVar57 = (float)param_4;
    fVar58 = (float)param_5;
    iVar40 = (int)*(ulong *)(uVar44 + 0x18);
    if (iVar15 == 0) {
      if (0 < iVar40) {
        if (uVar38 != 0) {
          uVar43 = 0;
          pfVar22 = (float *)(uVar44 + 0x28);
          do {
            fVar62 = pfVar22[-2];
            param_2 = (ulong)(uint)(fVar57 + pfVar22[-1]);
            fVar59 = fVar49 + *pfVar22;
            pfVar22[-2] = fVar57 + pfVar22[-1];
            pfVar22[-1] = fVar58 + fVar62;
            *pfVar22 = fVar59;
            if (uVar38 - 1 == uVar43) goto code_r0x0157f1d8;
            uVar43 = uVar43 + 1;
            pfVar22 = pfVar22 + 3;
          } while (uVar43 < *(uint *)(uVar44 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if (iVar15 == 1) {
      if (0 < iVar40) {
        if (uVar38 != 0) {
          uVar48 = 0;
          param_4 = CONCAT44(fVar58,fVar57);
          pfVar22 = (float *)(uVar44 + 0x28);
          do {
            param_2 = CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(pfVar22 + -2) >> 0x20),
                               fVar57 + (float)*(undefined8 *)(pfVar22 + -2));
            *(ulong *)(pfVar22 + -2) = param_2;
            *pfVar22 = fVar49 + *pfVar22;
            if (uVar38 - 1 == uVar48) goto code_r0x0157f280;
            uVar48 = uVar48 + 1;
            pfVar22 = pfVar22 + 3;
          } while (uVar48 < *(uint *)(uVar44 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if ((iVar15 == 2) && (0 < iVar40)) {
      if (uVar38 != 0) {
        uVar43 = 0;
        pfVar22 = (float *)(uVar44 + 0x28);
        do {
          fVar62 = pfVar22[-1];
          fVar59 = fVar58 + *pfVar22;
          param_2 = (ulong)(uint)(fVar49 + fVar62);
          pfVar22[-2] = fVar57 + pfVar22[-2];
          pfVar22[-1] = fVar59;
          *pfVar22 = fVar49 + fVar62;
          if (uVar38 - 1 == uVar43) goto code_r0x0157f1d8;
          uVar43 = uVar43 + 1;
          pfVar22 = pfVar22 + 3;
        } while (uVar43 < *(uint *)(uVar44 + 0x18));
      }
code_r0x0157f274:
      uVar28 = func_0x00f78b24();
      func_0x00f78ac0(uVar28,0);
    }
code_r0x0157f280:
    plVar16 = (long *)func_0x00f78aec(/*UnityEngine.Mesh_TypeInfo*/ uRam0000000003d23388);
    /*UnityEngine.Mesh$$.ctor*/ func_0x0323f420(plVar16,0);
    uVar48 = 0;
    if (plVar16 != (long *)0x0) {
      /*UnityEngine.Object$$set_name*/ func_0x03248994(plVar16,/*STR('ProceduralCapsule')*/ uRam0000000003d715a8,0);
      /*UnityEngine.Mesh$$set_vertices*/ func_0x03241d34(plVar16,uVar44,0);
      /*UnityEngine.Mesh$$set_triangles*/ func_0x032448a4(plVar16,uVar24,0);
      /*UnityEngine.Mesh$$Optimize*/ func_0x032470b4(plVar16,0);
      /*UnityEngine.Mesh$$RecalculateBounds*/ func_0x03246a70(plVar16,0);
      return plVar16;
    }
  }
code_r0x0157f324:
  func_0x00f78af4();
  *(long *)(puVar17 + -0x200) = lVar26;
  *(long *)(puVar17 + -0x1f8) = lVar46;
  *(ulong *)(puVar17 + -0x1f0) = uVar24;
  *(ulong *)(puVar17 + -0x1e8) = uVar47;
  *(ulong *)(puVar17 + -0x1e0) = uVar48;
  *(ulong *)(puVar17 + -0x1d8) = uVar44;
  *(undefined1 **)(puVar17 + -0x1d0) = puVar17 + -0xf0;
  *(undefined **)(puVar17 + -0x1c8) = &Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility;
  lVar32 = 0x3eb5000;
  pfVar22 = pfVar31;
  if ((bRam0000000003eb509d & 1) == 0) {
    func_0x00f78a20(0x3d32a28);
    func_0x00f78a20(0x3d32a30);
    func_0x00f78a20(0x3d32a38);
    func_0x00f78a20(0x3d3b278);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509d = 1;
  }
  *(undefined8 *)(puVar17 + -0x218) = 0;
  *(undefined8 *)(puVar17 + -0x210) = 0;
  *(undefined8 *)(puVar17 + -0x208) = 0;
  if (extraout_x1_03 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar17 + -0x218,extraout_x1_03,uRam0000000003d3b278);
    while( true ) {
      do {
        uVar48 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar17 + -0x218,uRam0000000003d32a30);
        if ((uVar48 & 1) == 0) {
          plVar16 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar17 + -0x218,uRam0000000003d32a28);
          return plVar16;
        }
        lVar46 = *(long *)(puVar17 + -0x208);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar48 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar46,0,0);
      } while ((uVar48 & 1) != 0);
      if (lVar46 == 0) break;
      /*UnityEngine.Renderer$$set_forceRenderingOff*/ func_0x0325bc24(lVar46,(uint)pfVar31 ^ 1,0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x157f45c);
    (*pcVar8)();
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    puVar18 = (undefined8 *)___cxa_begin_catch();
    pfVar31 = (float *)*puVar18;
    ___cxa_end_catch();
    plVar16 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar17 + -0x218,uRam0000000003eb5000);
    if (pfVar31 == (float *)0x0) {
      return plVar16;
    }
    func_0x00f78ac0(pfVar31,0);
  }
  auVar67 = __Unwind_Resume();
  lVar33 = auVar67._8_8_;
  *(long *)(puVar17 + -0x280) = unaff_x28;
  *(ulong *)(puVar17 + -0x278) = unaff_x27;
  *(long **)(puVar17 + -0x270) = plVar19;
  *(long *)(puVar17 + -0x268) = lVar27;
  *(long *)(puVar17 + -0x260) = lVar26;
  *(long *)(puVar17 + -600) = lVar46;
  *(ulong *)(puVar17 + -0x250) = uVar24;
  *(undefined8 *)(puVar17 + -0x248) = 0x3eb5000;
  *(undefined8 *)(puVar17 + -0x240) = 0;
  *(float **)(puVar17 + -0x238) = pfVar31;
  *(undefined1 **)(puVar17 + -0x230) = puVar17 + -0x1d0;
  *(undefined **)(puVar17 + -0x228) = &Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals;
  *(float **)(puVar17 + -0x2b8) = param_12;
  *(long **)(puVar17 + -0x2b0) = param_13;
  *(float **)(puVar17 + -0x2c8) = pfVar22;
  *(float **)(puVar17 + -0x2c0) = pfVar36;
  plVar16 = auVar67._0_8_;
  if ((bRam0000000003eb509e & 1) == 0) {
    func_0x00f78a20(0x3d3d050);
    func_0x00f78a20(0x3d3d058);
    func_0x00f78a20(0x3d3d060);
    plVar16 = (long *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb509e = 1;
  }
  uVar14 = (uint)param_2;
  uVar13 = (uint)param_4;
  uVar45 = (uint)param_5;
  if (lVar33 != 0) {
    uVar48 = (ulong)*(uint *)(lVar33 + 0x18);
    if (0 < (int)*(uint *)(lVar33 + 0x18)) {
      uVar47 = 0;
      uVar44 = uVar48 - 1;
      lVar32 = 0x20;
      while( true ) {
        if (uVar48 <= uVar47) {
          plVar16 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar14 = (uint)param_2;
        uVar13 = (uint)param_4;
        uVar45 = (uint)param_5;
        puVar18 = (undefined8 *)(*(long *)(lVar33 + 0x10) + lVar32);
        pfVar22 = (float *)puVar18[1];
        if (pfVar22 != (float *)0x0) {
          auVar65._8_8_ = *puVar18;
          auVar65._0_8_ = auVar67._0_8_;
          pfVar36 = (float *)puVar18[3];
          uVar24 = puVar18[4];
          pfVar31 = *(float **)(puVar17 + -0x2c8);
          if ((uVar24 & 0xff0000) != 0) {
            pfVar31 = *(float **)(puVar17 + -0x2b0);
          }
          pfVar34 = *(float **)(puVar17 + -0x2c0);
          if ((uVar24 & 0xff) == 0) {
            pfVar34 = pfVar31;
          }
          param_12 = *(float **)(puVar17 + -0x2b8);
          if ((uVar24 & 0xff00) == 0) {
            param_12 = pfVar34;
          }
          puVar52 = &UNK_0157f598;
          goto code_r0x0157f644;
        }
        if (uVar44 == uVar47) break;
        uVar48 = (ulong)*(uint *)(lVar33 + 0x18);
        lVar32 = lVar32 + 0x28;
        uVar47 = uVar47 + 1;
      }
    }
    return plVar16;
  }
  puVar52 = &Atlas_Gameplay_DebugVisualiser__CreateMeshProxy;
  auVar65 = func_0x00f78af4();
  uVar44 = 0;
code_r0x0157f644:
  *(ulong *)(puVar17 + -0x350) = unaff_d15;
  *(ulong *)(puVar17 + -0x348) = unaff_d14;
  *(ulong *)(puVar17 + -0x340) = unaff_d13;
  *(ulong *)(puVar17 + -0x338) = unaff_d12;
  *(ulong *)(puVar17 + -0x330) = unaff_d11;
  *(ulong *)(puVar17 + -0x328) = unaff_d10;
  *(ulong *)(puVar17 + -800) = uVar35;
  *(ulong *)(puVar17 + -0x318) = uVar50;
  *(undefined1 (*) [16])(puVar17 + -0x310) = auVar67;
  *(ulong *)(puVar17 + -0x300) = uVar24;
  *(long *)(puVar17 + -0x2f8) = lVar32;
  *(ulong *)(puVar17 + -0x2f0) = uVar44;
  *(undefined8 *)(puVar17 + -0x2e8) = 0x3eb5000;
  *(undefined1 **)(puVar17 + -0x2e0) = puVar17 + -0x230;
  *(undefined **)(puVar17 + -0x2d8) = puVar52;
  uVar28 = 0x3eb5000;
  pfVar34 = pfVar22;
  pfVar31 = pfVar36;
  if ((bRam0000000003eb509f & 1) == 0) {
    func_0x00f78a20(0x3d27140);
    bRam0000000003eb509f = 1;
  }
  if (pfVar22 == (float *)0x0) {
    puVar52 = &Atlas_Gameplay_DebugVisualiser__CreateMeshProxy;
    auVar66 = func_0x00f78af4();
    uVar11 = extraout_b0_15;
  }
  else {
    uVar28 = 0x3d27140;
    lVar46 = *(long *)pfVar22;
    uVar48 = (ulong)*(ushort *)(lVar46 + 0x12a);
    if (uVar48 != 0) {
      piVar39 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar46 + (long)(*piVar39 + 1) * 0x10 + 0x138);
          param_7 = uVar13;
          goto code_r0x0157f6fc;
        }
        piVar39 = piVar39 + 4;
        uVar48 = uVar48 - 1;
      } while (uVar48 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(pfVar22,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,1);
    param_7 = uVar13;
code_r0x0157f6fc:
    (*(code *)*puVar18)(pfVar22,puVar18[1]);
    uVar50 = (ulong)CONCAT13(extraout_var_46,
                             CONCAT12(extraout_var_29,CONCAT11(extraout_var_12,extraout_b0_12)));
    uVar35 = (ulong)uVar14;
    unaff_d10 = (ulong)(uint)fVar59;
    lVar46 = *(long *)pfVar22;
    uVar48 = (ulong)*(ushort *)(lVar46 + 0x12a);
    param_6 = fVar59;
    uVar45 = uVar14;
    if (uVar48 != 0) {
      piVar39 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar46 + (long)(*piVar39 + 2) * 0x10 + 0x138);
          goto code_r0x0157f764;
        }
        piVar39 = piVar39 + 4;
        uVar48 = uVar48 - 1;
      } while (uVar48 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(pfVar22,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,2);
code_r0x0157f764:
    (*(code *)*puVar18)(pfVar22,puVar18[1]);
    uVar13 = CONCAT13(extraout_var_47,
                      CONCAT12(extraout_var_30,CONCAT11(extraout_var_13,extraout_b0_13)));
    unaff_d11 = (ulong)uVar13;
    unaff_d12 = (ulong)uVar45;
    unaff_d13 = (ulong)(uint)param_6;
    unaff_d14 = (ulong)param_7;
    lVar46 = *(long *)pfVar22;
    uVar48 = (ulong)*(ushort *)(lVar46 + 0x12a);
    fVar49 = param_6;
    uVar30 = uVar45;
    if (uVar48 != 0) {
      piVar39 = (int *)(*(long *)(lVar46 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar46 + (long)(*piVar39 + 3) * 0x10 + 0x138);
          goto code_r0x0157f7d0;
        }
        piVar39 = piVar39 + 4;
        uVar48 = uVar48 - 1;
      } while (uVar48 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(pfVar22,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,3);
code_r0x0157f7d0:
    (*(code *)*puVar18)(pfVar22,puVar18[1]);
    *(uint *)(puVar17 + -0x35c) = uVar30;
    *(float *)(puVar17 + -0x358) = fVar49;
    *(uint *)(puVar17 + -0x360) =
         CONCAT13(extraout_var_48,CONCAT12(extraout_var_31,CONCAT11(extraout_var_14,extraout_b0_14))
                 );
    puVar52 = &UNK_0157f814;
    pfVar34 = pfVar36;
    pfVar31 = param_12;
    uVar11 = extraout_b0_12;
    auVar66 = auVar65;
  }
  *(ulong *)(puVar17 + -0x3e0) = unaff_d15;
  *(ulong *)(puVar17 + -0x3d8) = unaff_d14;
  *(ulong *)(puVar17 + -0x3d0) = unaff_d13;
  *(ulong *)(puVar17 + -0x3c8) = unaff_d12;
  *(ulong *)(puVar17 + -0x3c0) = unaff_d11;
  *(ulong *)(puVar17 + -0x3b8) = unaff_d10;
  *(ulong *)(puVar17 + -0x3b0) = uVar35;
  *(ulong *)(puVar17 + -0x3a8) = uVar50;
  *(undefined8 *)(puVar17 + -0x3a0) = uVar28;
  *(float **)(puVar17 + -0x398) = pfVar22;
  *(undefined1 (*) [16])(puVar17 + -0x390) = auVar65;
  *(float **)(puVar17 + -0x380) = pfVar36;
  *(float **)(puVar17 + -0x378) = param_12;
  *(undefined1 **)(puVar17 + -0x370) = puVar17 + -0x2e0;
  *(undefined **)(puVar17 + -0x368) = puVar52;
  puVar37 = puVar17 + -0x370;
  if ((bRam0000000003eb50a0 & 1) == 0) {
    func_0x00f78a20(0x3d57700);
    func_0x00f78a20(0x3d57708);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar48 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(pfVar31,0,0);
  if ((uVar48 & 1) != 0) {
    return (long *)0x0;
  }
  lVar46 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar46,pfVar34,0);
  if (lVar46 != 0) {
    *(float *)(puVar17 + -1000) = param_6;
    *(uint *)(puVar17 + -0x3e4) = param_7;
    lVar26 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar46,0);
    if (lVar26 != 0) {
      uVar60 = *(undefined4 *)(puVar17 + -0x35c);
      uVar64 = *(undefined4 *)(puVar17 + -0x358);
      uVar12 = *(undefined4 *)(puVar17 + -0x360);
      /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(uVar11,uVar14,fVar59,lVar26,0);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0((char)uVar13,uVar45,*(undefined4 *)(puVar17 + -1000),
                      *(undefined4 *)(puVar17 + -0x3e4),lVar26,0);
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0((char)uVar12,uVar60,uVar64,lVar26,0);
      lVar27 = *(long *)(auVar66._0_8_ + 0x58);
      if (lVar27 != 0) {
        uVar28 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar27,0);
        puVar52 = &UNK_0157f9c8;
        goto code_r0x03275ee0;
      }
    }
  }
  func_0x00f78af4();
  uVar28 = func_0x00f78b14();
  lVar27 = func_0x00f78ac0(uVar28,0);
  *(long *)(puVar17 + -0x420) = auVar66._0_8_;
  *(long *)(puVar17 + -0x418) = lVar46;
  *(long *)(puVar17 + -0x410) = auVar66._8_8_;
  *(float **)(puVar17 + -0x408) = pfVar31;
  *(undefined1 **)(puVar17 + -0x400) = puVar37;
  *(undefined **)(puVar17 + -0x3f8) = &Atlas_Gameplay_DebugVisualiser__CreateProxyGameObjectRoot;
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar46 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar46,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(lVar27 + 0x58) = lVar46;
  lVar26 = 0;
  if (lVar46 != 0) {
    lVar26 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar46,0);
    if ((*(long *)(lVar27 + 0x50) != 0) &&
       (uVar28 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar27 + 0x50),0), lVar26 != 0)) {
      puVar37 = *(undefined1 **)(puVar17 + -0x400);
      puVar52 = *(undefined **)(puVar17 + -0x3f8);
      pfVar31 = *(float **)(puVar17 + -0x408);
      auVar66._8_8_ = *(undefined8 *)(puVar17 + -0x410);
      auVar66._0_8_ = *(undefined8 *)(puVar17 + -0x420);
      lVar46 = *(long *)(puVar17 + -0x418);
code_r0x03275ee0:
      *(long *)(puVar17 + -0x420) = auVar66._0_8_;
      *(long *)(puVar17 + -0x418) = lVar46;
      *(long *)(puVar17 + -0x410) = auVar66._8_8_;
      *(float **)(puVar17 + -0x408) = pfVar31;
      *(undefined1 **)(puVar17 + -0x400) = puVar37;
      *(undefined **)(puVar17 + -0x3f8) = puVar52;
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar16 = (long *)(*pcRam0000000003ec1898)(lVar26,uVar28,0);
      return plVar16;
    }
  }
  lVar46 = func_0x00f78af4();
  *(undefined8 *)(puVar17 + -0x450) = 0x3d21b60;
  *(undefined8 *)(puVar17 + -0x448) = 0x3d71738;
  *(long *)(puVar17 + -0x440) = lVar26;
  *(long *)(puVar17 + -0x438) = lVar27;
  *(undefined1 **)(puVar17 + -0x430) = puVar17 + -0x400;
  *(undefined **)(puVar17 + -0x428) = &Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot;
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar28 = *(undefined8 *)(lVar46 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar16 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar28,0,0);
  if (((ulong)plVar16 & 1) == 0) {
    uVar28 = *(undefined8 *)(lVar46 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar16 = (long *)/*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar28,0);
    *(undefined8 *)(lVar46 + 0x58) = 0;
  }
  return plVar16;
code_r0x0157f1d8:
  if (uVar24 != 0) {
    uVar13 = *(uint *)(uVar24 + 0x18);
    if (0 < (int)uVar13) {
      uVar45 = 0;
      do {
        if ((uVar13 <= uVar45) || (uVar14 = uVar45 + 1, uVar13 <= uVar14)) goto code_r0x0157f274;
        lVar32 = uVar24 + 0x20;
        uVar60 = *(undefined4 *)(lVar32 + (long)(int)uVar45 * 4);
        *(undefined4 *)(lVar32 + (long)(int)uVar45 * 4) =
             *(undefined4 *)(lVar32 + (long)(int)uVar14 * 4);
        *(undefined4 *)(lVar32 + (long)(int)uVar14 * 4) = uVar60;
        uVar45 = uVar45 + 3;
      } while ((int)uVar45 < (int)uVar13);
    }
    goto code_r0x0157f280;
  }
  goto code_r0x0157f324;
}



// ============================================================
// RVA: 0x157da9c | Atlas.Gameplay.DebugVisualiser.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x0157e0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e15c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e4b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e5d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d75c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d8ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157d9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157da10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01641830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164148c) */
/* WARNING: Removing unreachable block (ram,0x01641494) */
/* WARNING: Removing unreachable block (ram,0x016414b4) */
/* WARNING: Removing unreachable block (ram,0x016414c8) */
/* WARNING: Removing unreachable block (ram,0x0157da14) */
/* WARNING: Removing unreachable block (ram,0x01641368) */
/* WARNING: Removing unreachable block (ram,0x016413b4) */
/* WARNING: Removing unreachable block (ram,0x016413e0) */
/* WARNING: Removing unreachable block (ram,0x016414d4) */
/* WARNING: Removing unreachable block (ram,0x016414d8) */
/* WARNING: Removing unreachable block (ram,0x01641404) */
/* WARNING: Removing unreachable block (ram,0x016414fc) */
/* WARNING: Removing unreachable block (ram,0x01641500) */
/* WARNING: Removing unreachable block (ram,0x0164140c) */
/* WARNING: Removing unreachable block (ram,0x01641504) */
/* WARNING: Removing unreachable block (ram,0x01641548) */
/* WARNING: Removing unreachable block (ram,0x016415a4) */
/* WARNING: Removing unreachable block (ram,0x016415c8) */
/* WARNING: Removing unreachable block (ram,0x016415ec) */
/* WARNING: Removing unreachable block (ram,0x016415f4) */
/* WARNING: Removing unreachable block (ram,0x01641608) */
/* WARNING: Removing unreachable block (ram,0x01641618) */
/* WARNING: Removing unreachable block (ram,0x01641620) */
/* WARNING: Removing unreachable block (ram,0x01641624) */
/* WARNING: Removing unreachable block (ram,0x0164162c) */
/* WARNING: Removing unreachable block (ram,0x0164166c) */
/* WARNING: Removing unreachable block (ram,0x01641680) */
/* WARNING: Removing unreachable block (ram,0x01641688) */
/* WARNING: Removing unreachable block (ram,0x01641698) */
/* WARNING: Removing unreachable block (ram,0x016416a0) */
/* WARNING: Removing unreachable block (ram,0x01641714) */
/* WARNING: Removing unreachable block (ram,0x016416dc) */
/* WARNING: Removing unreachable block (ram,0x016416f4) */
/* WARNING: Removing unreachable block (ram,0x0157d9b0) */
/* WARNING: Removing unreachable block (ram,0x0157d9b8) */
/* WARNING: Removing unreachable block (ram,0x0157d958) */
/* WARNING: Removing unreachable block (ram,0x0157d8f0) */
/* WARNING: Removing unreachable block (ram,0x0157d8f8) */
/* WARNING: Removing unreachable block (ram,0x0157d88c) */
/* WARNING: Removing unreachable block (ram,0x0157d894) */
/* WARNING: Removing unreachable block (ram,0x0157d828) */
/* WARNING: Removing unreachable block (ram,0x0157d830) */
/* WARNING: Removing unreachable block (ram,0x0157d7c4) */
/* WARNING: Removing unreachable block (ram,0x0157d7cc) */
/* WARNING: Removing unreachable block (ram,0x0157d760) */
/* WARNING: Removing unreachable block (ram,0x0157d768) */
/* WARNING: Removing unreachable block (ram,0x0157e764) */
/* WARNING: Removing unreachable block (ram,0x0157e774) */
/* WARNING: Removing unreachable block (ram,0x0157e788) */
/* WARNING: Removing unreachable block (ram,0x0157e780) */
/* WARNING: Removing unreachable block (ram,0x0157e78c) */
/* WARNING: Removing unreachable block (ram,0x0157e794) */
/* WARNING: Removing unreachable block (ram,0x0157e6c4) */
/* WARNING: Removing unreachable block (ram,0x0157e6c8) */
/* WARNING: Removing unreachable block (ram,0x0157e6cc) */
/* WARNING: Removing unreachable block (ram,0x0157e6f0) */
/* WARNING: Removing unreachable block (ram,0x0157e6f8) */
/* WARNING: Removing unreachable block (ram,0x0157e6fc) */
/* WARNING: Removing unreachable block (ram,0x0157e7bc) */
/* WARNING: Removing unreachable block (ram,0x0157e710) */
/* WARNING: Removing unreachable block (ram,0x0157e644) */
/* WARNING: Removing unreachable block (ram,0x0157e648) */
/* WARNING: Removing unreachable block (ram,0x0157e5d4) */
/* WARNING: Removing unreachable block (ram,0x0157e5ec) */
/* WARNING: Removing unreachable block (ram,0x0157e5f4) */
/* WARNING: Removing unreachable block (ram,0x0157e5f8) */
/* WARNING: Removing unreachable block (ram,0x0157e60c) */
/* WARNING: Removing unreachable block (ram,0x0157e570) */
/* WARNING: Removing unreachable block (ram,0x0157e580) */
/* WARNING: Removing unreachable block (ram,0x0157e598) */
/* WARNING: Removing unreachable block (ram,0x0157e58c) */
/* WARNING: Removing unreachable block (ram,0x0157e5a0) */
/* WARNING: Removing unreachable block (ram,0x0157e594) */
/* WARNING: Removing unreachable block (ram,0x0157e528) */
/* WARNING: Removing unreachable block (ram,0x0157e4bc) */
/* WARNING: Removing unreachable block (ram,0x0157e67c) */
/* WARNING: Removing unreachable block (ram,0x0157e4c0) */
/* WARNING: Removing unreachable block (ram,0x0157e4c4) */
/* WARNING: Removing unreachable block (ram,0x0157e440) */
/* WARNING: Removing unreachable block (ram,0x0157e444) */
/* WARNING: Removing unreachable block (ram,0x0157e3d0) */
/* WARNING: Removing unreachable block (ram,0x0157e3e8) */
/* WARNING: Removing unreachable block (ram,0x0157e3f0) */
/* WARNING: Removing unreachable block (ram,0x0157e3f4) */
/* WARNING: Removing unreachable block (ram,0x0157e408) */
/* WARNING: Removing unreachable block (ram,0x0157e36c) */
/* WARNING: Removing unreachable block (ram,0x0157e37c) */
/* WARNING: Removing unreachable block (ram,0x0157e390) */
/* WARNING: Removing unreachable block (ram,0x0157e388) */
/* WARNING: Removing unreachable block (ram,0x0157e394) */
/* WARNING: Removing unreachable block (ram,0x0157e39c) */
/* WARNING: Removing unreachable block (ram,0x0157e304) */
/* WARNING: Removing unreachable block (ram,0x0157e474) */
/* WARNING: Removing unreachable block (ram,0x0157e308) */
/* WARNING: Removing unreachable block (ram,0x0157e30c) */
/* WARNING: Removing unreachable block (ram,0x0157e288) */
/* WARNING: Removing unreachable block (ram,0x0157e28c) */
/* WARNING: Removing unreachable block (ram,0x0157e214) */
/* WARNING: Removing unreachable block (ram,0x0157e22c) */
/* WARNING: Removing unreachable block (ram,0x0157e234) */
/* WARNING: Removing unreachable block (ram,0x0157e238) */
/* WARNING: Removing unreachable block (ram,0x0157e24c) */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */
/* WARNING: Removing unreachable block (ram,0x0157f814) */
/* WARNING: Removing unreachable block (ram,0x0157f598) */
/* WARNING: Removing unreachable block (ram,0x0157f5b0) */
/* WARNING: Removing unreachable block (ram,0x0157f5b8) */
/* WARNING: Removing unreachable block (ram,0x0157f5bc) */
/* WARNING: Removing unreachable block (ram,0x0157f5d0) */
/* WARNING: Removing unreachable block (ram,0x0157f5d4) */
/* WARNING: Removing unreachable block (ram,0x0157e8f8) */
/* WARNING: Removing unreachable block (ram,0x0157e1b0) */
/* WARNING: Removing unreachable block (ram,0x0157e1c0) */
/* WARNING: Removing unreachable block (ram,0x0157e1d8) */
/* WARNING: Removing unreachable block (ram,0x0157e1cc) */
/* WARNING: Removing unreachable block (ram,0x0157e1e0) */
/* WARNING: Removing unreachable block (ram,0x0157e1d4) */
/* WARNING: Removing unreachable block (ram,0x0157e160) */
/* WARNING: Removing unreachable block (ram,0x0157e2c0) */
/* WARNING: Removing unreachable block (ram,0x0157e164) */
/* WARNING: Removing unreachable block (ram,0x0157e168) */
/* WARNING: Removing unreachable block (ram,0x0157e0fc) */
/* WARNING: Removing unreachable block (ram,0x0157e100) */
/* WARNING: Removing unreachable block (ram,0x0157e108) */
/* WARNING: Removing unreachable block (ram,0x01641834) */
/* WARNING: Removing unreachable block (ram,0x0164183c) */
/* WARNING: Removing unreachable block (ram,0x0164185c) */
/* WARNING: Removing unreachable block (ram,0x01641870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Gameplay_DebugVisualiser__Update
                 (undefined1 param_1 [16],ulong param_2,undefined1 param_3 [16],ulong param_4,
                 ulong param_5,float param_6,uint param_7,long *param_8,undefined8 param_9,
                 float *param_10,float *param_11,float *param_12,long *param_13)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined1 *puVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  undefined1 *puVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  uint uVar13;
  uint uVar14;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  float *pfVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined4 extraout_w1;
  uint uVar28;
  uint uVar29;
  int extraout_w1_00;
  long extraout_x1;
  long *extraout_x1_00;
  long extraout_x1_01;
  undefined8 extraout_x1_02;
  long extraout_x1_03;
  float *pfVar30;
  long lVar31;
  long lVar32;
  float *pfVar33;
  float *pfVar34;
  undefined1 *puVar35;
  undefined8 *extraout_x8;
  ulong uVar36;
  ulong uVar37;
  int *piVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 unaff_x19;
  ulong uVar43;
  undefined8 unaff_x20;
  ulong uVar44;
  uint uVar45;
  long unaff_x21;
  ulong uVar46;
  float *unaff_x22;
  long *plVar47;
  float fVar48;
  ulong uVar49;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar50;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar51;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_b0_07;
  undefined1 extraout_b0_08;
  undefined1 extraout_b0_09;
  undefined1 extraout_b0_10;
  undefined1 extraout_b0_11;
  undefined1 extraout_b0_12;
  undefined1 extraout_b0_13;
  undefined1 extraout_b0_14;
  undefined1 extraout_b0_15;
  undefined1 extraout_b0_16;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar52;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 uVar53;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 uVar54;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  undefined1 extraout_var_38;
  undefined1 extraout_var_39;
  undefined1 extraout_var_40;
  undefined1 extraout_var_41;
  undefined1 extraout_var_42;
  undefined1 extraout_var_43;
  undefined1 extraout_var_44;
  undefined1 extraout_var_45;
  undefined1 extraout_var_46;
  undefined1 extraout_var_47;
  undefined1 extraout_var_48;
  undefined1 extraout_var_49;
  uint uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  ulong unaff_d8;
  undefined4 uVar60;
  ulong unaff_d9;
  ulong unaff_d10;
  float fVar61;
  ulong unaff_d11;
  float fVar62;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  float fVar63;
  undefined4 uVar64;
  ulong unaff_d15;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  
  auVar65._8_8_ = unaff_x20;
  auVar65._0_8_ = unaff_x19;
  uVar59 = param_3._4_4_;
  fVar58 = param_3._0_4_;
  uVar54 = param_1[3];
  uVar53 = param_1[2];
  uVar52 = param_1[1];
  uVar11 = param_1[0];
  while( true ) {
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_d15;
    *(ulong *)((long)register0x00000008 + -0x88) = unaff_d14;
    *(ulong *)((long)register0x00000008 + -0x80) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x78) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(float **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar65._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar65._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar13 = CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar11)));
    uVar49 = (ulong)uVar13;
    uVar44 = 0x3eb5000;
    plVar16 = param_8;
    if ((bRam0000000003eb5099 & 1) == 0) {
      func_0x00f78a20(0x3d20058);
      func_0x00f78a20(0x3d27140);
      func_0x00f78a20(0x3d3d048);
      func_0x00f78a20(0x3d3d050);
      func_0x00f78a20(0x3d3d058);
      plVar16 = (long *)func_0x00f78a20(0x3d23990);
      bRam0000000003eb5099 = 1;
    }
    uVar21 = unaff_x24;
    uVar37 = unaff_x25;
    uVar46 = unaff_x26;
    if (*(char *)((long)param_8 + 0xf9) != '\0') break;
LAB_0157dbf0:
    unaff_x21 = param_8[9];
    if (unaff_x21 == 0) goto LAB_0157deb4;
    uVar13 = *(int *)(unaff_x21 + 0x18) - 1;
    uVar44 = (ulong)uVar13;
    if (-1 < (int)uVar13) {
      unaff_x23 = 0x28;
      unaff_x24 = 0x3d3d048;
      unaff_x25 = 0x3d23990;
      unaff_x26 = 0x3d27140;
      do {
        if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar44) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar17 = *(long *)(unaff_x21 + 0x10) + uVar44 * 0x28;
        unaff_x22 = *(float **)(lVar17 + 0x28);
        if (unaff_x22 == (float *)0x0) {
          uVar21 = 0x3d3d048;
          uVar37 = 0x3d23990;
          uVar46 = 0x3d27140;
          if (param_8[9] == 0) goto LAB_0157deb4;
          param_10 = pfRam0000000003d3d048;
          plVar16 = (long *)/*System.Collections.Generic.List<DebugVisualiser.Collider>$$RemoveAt*/ func_0x02518cf0(param_8[9],uVar44);
        }
        else {
          unaff_x21 = *(long *)(lVar17 + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_10 = (float *)0x0;
          plVar16 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x21,0);
          if (((ulong)plVar16 & 1) == 0) {
            lVar17 = *(long *)unaff_x22;
            uVar37 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar37 != 0) {
              piVar38 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar38 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
                  puVar18 = (undefined8 *)(lVar17 + (long)(*piVar38 + 1) * 0x10 + 0x138);
                  goto LAB_0157dcdc;
                }
                piVar38 = piVar38 + 4;
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
            }
            param_10 = (float *)((long)&MACH_HEADER.magic + 1);
            puVar18 = (undefined8 *)func_0x00fac1f0(unaff_x22);
LAB_0157dcdc:
            (*(code *)*puVar18)(unaff_x22,puVar18[1]);
            uVar21 = unaff_x24;
            uVar37 = unaff_x25;
            uVar46 = unaff_x26;
            if (unaff_x21 == 0) goto LAB_0157deb4;
            /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(unaff_x21,0);
            lVar17 = *(long *)unaff_x22;
            uVar37 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar37 != 0) {
              piVar38 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar38 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
                  puVar18 = (undefined8 *)(lVar17 + (long)(*piVar38 + 2) * 0x10 + 0x138);
                  goto code_r0x0157dd48;
                }
                piVar38 = piVar38 + 4;
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
            }
            param_10 = (float *)((long)&MACH_HEADER.magic + 2);
            puVar18 = (undefined8 *)func_0x00fac1f0(unaff_x22);
code_r0x0157dd48:
            (*(code *)*puVar18)(unaff_x22,puVar18[1]);
            /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(unaff_x21,0);
            lVar17 = *(long *)unaff_x22;
            uVar37 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar37 != 0) {
              piVar38 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar38 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
                  puVar18 = (undefined8 *)(lVar17 + (long)(*piVar38 + 3) * 0x10 + 0x138);
                  goto code_r0x0157ddb0;
                }
                piVar38 = piVar38 + 4;
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
            }
            param_10 = (float *)((long)&MACH_HEADER.magic + 3);
            puVar18 = (undefined8 *)func_0x00fac1f0(unaff_x22);
code_r0x0157ddb0:
            (*(code *)*puVar18)(unaff_x22,puVar18[1]);
            plVar16 = (long *)/*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(unaff_x21,0);
          }
        }
        uVar13 = (uint)uVar44 - 1;
        uVar44 = (ulong)uVar13;
        if ((int)uVar13 < 0) break;
        unaff_x21 = param_8[9];
        uVar21 = unaff_x24;
        uVar37 = unaff_x25;
        uVar46 = unaff_x26;
        if (unaff_x21 == 0) goto LAB_0157deb4;
      } while( true );
    }
    uVar21 = unaff_x24;
    uVar37 = unaff_x25;
    uVar46 = unaff_x26;
    if (param_8[0x1e] == 0) goto LAB_0157deb4;
    if (*(char *)(param_8[0x1e] + 0x10) == '\0') {
      return plVar16;
    }
    if (param_8[4] == 0) goto LAB_0157deb4;
    plVar47 = *(long **)(param_8[4] + 0x68);
    if (plVar47 == (long *)0x0) {
      return plVar16;
    }
    if (*(byte *)(*plVar47 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300)) {
      return plVar16;
    }
    if (*(long *)(*(long *)(*plVar47 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058 + 300) * 8 + -8)
        != /*Atlas.Gameplay.Kart.BattleKartAI_TypeInfo*/ lRam0000000003d20058) {
      return plVar16;
    }
    uVar44 = plVar47[0x2b];
    param_10 = (float *)plVar47[0x2c];
    uVar13 = *(uint *)(plVar47 + 0xf);
    unaff_x22 = (float *)(ulong)uVar13;
    uVar49 = (ulong)*(uint *)((long)plVar47 + 0x8c);
    fVar57 = *(float *)(plVar47 + 0x12);
    uVar59 = 0;
    /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c((char)(int)plVar47[0x11],0);
    fVar48 = *(float *)(plVar47 + 0x16);
    pfVar34 = (float *)(ulong)(uint)fVar48;
    unaff_x26 = *(ulong *)((long)register0x00000008 + -0x50);
    unaff_x25 = *(ulong *)((long)register0x00000008 + -0x48);
    unaff_d11 = *(ulong *)((long)register0x00000008 + -0x70);
    unaff_d13 = *(ulong *)((long)register0x00000008 + -0x80);
    unaff_d12 = *(ulong *)((long)register0x00000008 + -0x78);
    unaff_d15 = *(ulong *)((long)register0x00000008 + -0x90);
    unaff_d14 = *(ulong *)((long)register0x00000008 + -0x88);
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_d15;
    *(ulong *)((long)register0x00000008 + -0x98) = unaff_d14;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x88) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x80) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x58);
    *(long *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_d8 = (ulong)(uint)fVar57;
    unaff_d9 = uVar49 & 0xffffffff;
    unaff_d10 = (ulong)CONCAT13(extraout_var_41,
                                CONCAT12(extraout_var_24,CONCAT11(extraout_var_07,extraout_b0_07)));
    plVar16 = param_8;
    param_11 = unaff_x22;
    param_12 = pfVar34;
    param_2 = uVar49;
    fVar56 = fVar57;
    if ((bRam0000000003eb5097 & 1) == 0) {
      func_0x00f78a20(0x3d3d078);
      plVar16 = (long *)func_0x00f78a20(0x3d777a8);
      bRam0000000003eb5097 = 1;
    }
    unaff_x27 = param_8[0xc];
    if (unaff_x27 == 0) {
      return plVar16;
    }
    unaff_x24 = 0x3d777a8;
    fVar62 = (float)(uVar13 - 1);
    if ((int)uVar13 < 1) {
      unaff_x23 = 0;
code_r0x0157d2c0:
      fVar48 = (float)unaff_x23;
      if ((uint)*(float *)(unaff_x27 + 0x18) <= (uint)fVar48) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(*(long *)(unaff_x27 + 0x10) + unaff_x23 * 0x10 + 0x20);
      fVar58 = fVar56;
      if ((lVar17 != 0) && (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar17,0), fVar58 = fVar56, lVar17 != 0)) {
        param_10 = (float *)0x0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,1);
        pfVar34 = (float *)param_8[0xc];
        fVar58 = fVar56;
        if (pfVar34 != (float *)0x0) {
          if ((uint)pfVar34[6] <= (uint)fVar48) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar17 = *(long *)(*(long *)(pfVar34 + 4) + unaff_x23 * 0x10 + 0x20);
          uVar44 = unaff_x23;
          fVar58 = fVar56;
          if ((lVar17 != 0) && (lVar17 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar17,0), fVar58 = fVar56, lVar17 != 0)) {
            param_2 = uVar49 & 0xffffffff;
            uVar59 = 0;
            /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(extraout_b0_07,lVar17,0);
            lVar17 = param_8[0xc];
            pfVar34 = (float *)0x0;
            fVar58 = fVar57;
            if (lVar17 != 0) {
              if ((uint)*(float *)(lVar17 + 0x18) <= (uint)fVar48) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + unaff_x23 * 0x10 + 0x28);
              /*UnityEngine.Color$$get_green*/ func_0x03223580(0);
              pfVar34 = (float *)0x0;
              fVar58 = fVar57;
              if (lVar17 != 0) {
                param_10 = (float *)0x0;
                plVar16 = (long *)/*UnityEngine.Material$$SetColor*/ func_0x03237f3c(lVar17,/*STR('_ToonColour')*/ uRam0000000003d777a8);
                if (0x12 < (int)fVar48) {
                  return plVar16;
                }
                pfVar34 = (float *)(unaff_x23 * 0x10 + 0x30);
                while( true ) {
                  uVar44 = uVar44 + 1;
                  unaff_x22 = (float *)param_8[0xc];
                  fVar58 = fVar57;
                  if (unaff_x22 == (float *)0x0) break;
                  if ((uint)unaff_x22[6] <= uVar44) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  fVar58 = fVar57;
                  if ((*(long *)(*(long *)(unaff_x22 + 4) + (long)pfVar34) == 0) ||
                     (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(*(long *)(unaff_x22 + 4) + (long)pfVar34),0
                                              ), fVar58 = fVar57, lVar17 == 0)) break;
                  param_10 = (float *)0x0;
                  plVar16 = (long *)/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,0);
                  pfVar34 = pfVar34 + 4;
                  if (pfVar34 == (float *)(section_00000158.sectname + 8)) {
                    return plVar16;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      unaff_x25 = 0;
      if (0x11 < (uint)fVar62) {
        fVar62 = 2.52234e-44;
      }
      unaff_x26 = (ulong)(uint)fVar62;
      unaff_x23 = (ulong)((int)fVar62 + 1);
      do {
        fVar63 = (float)unaff_x25;
        uVar37 = param_4;
        if ((uint)*(float *)(unaff_x27 + 0x18) <= (uint)fVar63) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar37 = param_4;
        }
        lVar17 = *(long *)(*(long *)(unaff_x27 + 0x10) + (long)(int)fVar63 * 0x10 + 0x20);
        fVar58 = fVar56;
        param_4 = uVar37;
        if ((lVar17 == 0) ||
           (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar17,0), fVar58 = fVar56, param_4 = uVar37, lVar17 == 0))
        break;
        param_10 = (float *)0x0;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,1);
        unaff_x22 = (float *)param_8[0xc];
        fVar58 = fVar56;
        param_4 = uVar37;
        if (unaff_x22 == (float *)0x0) break;
        if ((uint)unaff_x22[6] <= (uint)fVar63) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        unaff_x27 = (ulong)(int)fVar63;
        lVar17 = *(long *)(*(long *)(unaff_x22 + 4) + unaff_x27 * 0x10 + 0x20);
        fVar58 = fVar56;
        param_4 = uVar37;
        if (lVar17 == 0) break;
        lVar17 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar17,0);
        puVar1 = (undefined4 *)(uVar44 + unaff_x27 * 0x10);
        uVar46 = (ulong)(uint)puVar1[1];
        fVar56 = (float)puVar1[2];
        uVar59 = 0;
        /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c((char)*puVar1,0);
        unaff_x22 = (float *)0x0;
        param_2 = uVar46;
        fVar58 = fVar56;
        param_4 = uVar37;
        if (lVar17 == 0) break;
        /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar17,0);
        if (fVar48 == fVar63) {
          /*UnityEngine.Color$$get_red*/ func_0x0322356c(0);
          uVar11 = extraout_b0;
          uVar52 = extraout_var;
          uVar53 = extraout_var_16;
          uVar54 = extraout_var_33;
        }
        else if ((int)fVar63 < (int)fVar48) {
          /*UnityEngine.Color$$get_blue*/ func_0x03223594(0);
          uVar11 = extraout_b0_00;
          uVar52 = extraout_var_00;
          uVar53 = extraout_var_17;
          uVar54 = extraout_var_34;
        }
        else {
          /*UnityEngine.Color$$get_yellow*/ func_0x032235d0(0);
          uVar11 = extraout_b0_01;
          uVar52 = extraout_var_01;
          uVar53 = extraout_var_18;
          uVar54 = extraout_var_35;
        }
        unaff_d11 = (ulong)CONCAT13(uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar11)));
        unaff_d12 = uVar46 & 0xffffffff;
        unaff_d13 = (ulong)(uint)fVar56;
        unaff_d14 = uVar37 & 0xffffffff;
        unaff_x22 = (float *)param_8[0xc];
        param_2 = uVar46;
        fVar58 = fVar56;
        param_4 = uVar37;
        if (unaff_x22 == (float *)0x0) break;
        if ((uint)unaff_x22[6] <= (uint)fVar63) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar17 = *(long *)(*(long *)(unaff_x22 + 4) + unaff_x27 * 0x10 + 0x28);
        if (lVar17 == 0) break;
        param_2 = uVar46 & 0xffffffff;
        uVar59 = 0;
        param_4 = uVar37 & 0xffffffff;
        param_10 = (float *)0x0;
        /*UnityEngine.Material$$SetColor*/ func_0x03237f3c(uVar11,lVar17,/*STR('_ToonColour')*/ uRam0000000003d777a8);
        fVar58 = fVar56;
        if (fVar62 == fVar63) {
          unaff_x27 = param_8[0xc];
          if (unaff_x27 != 0) goto code_r0x0157d2c0;
          break;
        }
        unaff_x25 = (ulong)((int)fVar63 + 1);
        unaff_x27 = param_8[0xc];
      } while (unaff_x27 != 0);
    }
    auVar65 = func_0x00f78af4();
    lVar17 = auVar65._8_8_;
    plVar47 = auVar65._0_8_;
    *(ulong *)((long)register0x00000008 + -0x100) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0xf8) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0xf0) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0xe8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d777a8;
    *(ulong *)((long)register0x00000008 + -0xd8) = unaff_x23;
    *(float **)((long)register0x00000008 + -0xd0) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -200) = uVar44;
    *(float **)((long)register0x00000008 + -0xc0) = pfVar34;
    *(long **)((long)register0x00000008 + -0xb8) = param_8;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xa8) =
         Atlas_Gameplay_DebugVisualiser__InitDebugMenuBindings;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xb0);
    unaff_x21 = 0x3eb5000;
    plVar16 = plVar47;
    if ((bRam0000000003eb5098 & 1) == 0) {
      func_0x00f78a20(0x3d54b28);
      func_0x00f78a20(0x3d54b30);
      func_0x00f78a20(0x3d54b38);
      func_0x00f78a20(0x3d54b40);
      func_0x00f78a20(0x3d54b48);
      func_0x00f78a20(0x3d54b50);
      func_0x00f78a20(0x3d54b58);
      func_0x00f78a20(0x3d54b60);
      func_0x00f78a20(0x3d54b68);
      func_0x00f78a20(0x3d3bfa0);
      func_0x00f78a20(0x3d3bf88);
      func_0x00f78a20(0x3d1de30);
      func_0x00f78a20(0x3d41608);
      func_0x00f78a20(0x3d415f8);
      func_0x00f78a20(0x3d1eb38);
      func_0x00f78a20(0x3d1eb40);
      func_0x00f78a20(0x3d72948);
      func_0x00f78a20(0x3d72940);
      func_0x00f78a20(0x3d72950);
      func_0x00f78a20(0x3d713f8);
      func_0x00f78a20(0x3d6b890);
      func_0x00f78a20(0x3d72928);
      func_0x00f78a20(0x3d6d818);
      func_0x00f78a20(0x3d70570);
      func_0x00f78a20(0x3d70d30);
      func_0x00f78a20(0x3d6d008);
      func_0x00f78a20(0x3d72930);
      func_0x00f78a20(0x3d6d7e8);
      func_0x00f78a20(0x3d761c0);
      plVar16 = (long *)func_0x00f78a20(0x3d70d28);
      bRam0000000003eb5098 = 1;
    }
    if (plVar47[0x16] != 0) {
      return plVar16;
    }
    plVar47[0x16] = lVar17;
    if (lVar17 != 0) {
      fVar58 = 50.0;
      uVar59 = 0;
      param_2 = 0;
      uVar60 = /*Core.DebugMenu.DebugMenu$$AddPanelByScreenPercentage*/ func_0x0163f854(0,lVar17,1,/*STR('Visualiser')*/ pfRam0000000003d761c0,plVar47,0xffffffff,0);
      *(undefined4 *)(plVar47 + 0x17) = uVar60;
      uVar60 = *(undefined4 *)(lVar17 + 0x3c);
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
      param_11 = (float *)((long)&MACH_HEADER.magic + 1);
      param_12 = (float *)0x0;
      param_10 = /*STR('Visualiser')*/ pfRam0000000003d761c0;
      param_13 = plVar47;
      /*Core.DebugMenu.DebugMenu$$AddButton*/ func_0x0163f880(0,lVar17,uVar60);
      unaff_x21 = func_0x00f78aec(/*System.Collections.Generic.List<string>_TypeInfo*/ uRam0000000003d1de30);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(unaff_x21,uRam0000000003d3bf88);
      if (unaff_x21 != 0) {
        unaff_x22 = (float *)0x3d3bfa0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(unaff_x21,/*STR('None')*/ uRam0000000003d70570,pfRam0000000003d3bfa0);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(unaff_x21,/*STR('Free')*/ uRam0000000003d6d008,pfRam0000000003d3bfa0);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(unaff_x21,/*STR('Orbital Local')*/ uRam0000000003d70d28,pfRam0000000003d3bfa0);
        param_10 = pfRam0000000003d3bfa0;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(unaff_x21,/*STR('Orbital World')*/ uRam0000000003d70d30);
        if (plVar47[0x18] != 0) {
          uVar44 = (ulong)*(uint *)(plVar47 + 0x17);
          uVar49 = (ulong)*(byte *)(plVar47[0x18] + 0x10);
          puVar15 = (undefined1 *)func_0x00f78aec(/*UnityEngine.Events.UnityAction<int, bool>_TypeInfo*/ uRam0000000003d1eb38);
          /*UnityEngine.Events.UnityAction<int, bool>$$.ctor*/ func_0x01b7facc(puVar15,plVar47,uRam0000000003d54b48,uRam0000000003d415f8);
          uVar21 = /*STR('Show Colliders')*/ uRam0000000003d72930;
          puVar35 = (undefined1 *)((long)register0x00000008 + -0x1a0);
          *(ulong *)((long)register0x00000008 + -0x170) = unaff_d9;
          *(ulong *)((long)register0x00000008 + -0x168) = unaff_d8;
          *(undefined8 *)((long)register0x00000008 + -0x160) = 0x3d415f8;
          *(undefined8 *)((long)register0x00000008 + -0x158) = 0x3d1eb38;
          *(undefined1 **)((long)register0x00000008 + -0x150) = puVar15;
          *(ulong *)((long)register0x00000008 + -0x148) = uVar49;
          *(ulong *)((long)register0x00000008 + -0x140) = uVar44;
          *(long *)((long)register0x00000008 + -0x138) = unaff_x21;
          *(long *)((long)register0x00000008 + -0x130) = lVar17;
          *(long **)((long)register0x00000008 + -0x128) = plVar47;
          *(undefined1 **)((long)register0x00000008 + -0x120) = unaff_x29;
          *(undefined **)((long)register0x00000008 + -0x118) = &UNK_0157d760;
          if ((bRam0000000003eb5712 & 1) == 0) {
            func_0x00f78a20(0x3d54908);
            func_0x00f78a20(0x3d21150);
            func_0x00f78a20(0x3d74e90);
            bRam0000000003eb5712 = 1;
          }
          *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
          *(undefined8 *)((long)register0x00000008 + -400) = 0;
          uVar37 = 1;
          iVar12 = /*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(lVar17,uVar44);
          if (iVar12 == 0) {
            return (long *)0xffffffff;
          }
          if (*(long *)((long)register0x00000008 + -400) == 0) {
            func_0x00f78af4();
            puVar51 = &Core_DebugMenu_DebugMenu__ConfigureToggle;
            auVar68 = func_0x00f78e5c();
          }
          else {
            /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(*(long *)((long)register0x00000008 + -400),0);
            auVar65 = /*Core.DebugMenu.DebugMenu$$InstantiateUIWithOptionalLabel*/ func_0x01640384(SUB41((float)CONCAT13(extraout_var_49,
                                                            CONCAT12(extraout_var_32,
                                                                     CONCAT11(extraout_var_15,
                                                                              extraout_b0_16))) +
                                            -6.0,0),0x42480000,0x428c0000,lVar17,7,
                                      /*STR('Toggle')*/ uRam0000000003d74e90,uVar21);
            uVar21 = auVar65._0_8_;
            plVar47 = (long *)/*Core.DebugMenu.DebugMenu$$CreateElement<object>*/ func_0x01840b34(lVar17,7,uVar44,uVar21,auVar65._8_8_,plVar47,
                                              uRam0000000003d54908);
            auVar68._8_8_ = plVar47;
            auVar68._0_8_ = lVar17;
            puVar51 = &UNK_01641834;
            uVar37 = uVar49;
            puVar35 = puVar15;
          }
          uVar50 = auVar68._0_8_;
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar21;
          *(ulong *)((long)register0x00000008 + -0x1d8) = uVar44;
          *(long **)((long)register0x00000008 + -0x1d0) = plVar47;
          *(long *)((long)register0x00000008 + -0x1c8) = lVar17;
          *(ulong *)((long)register0x00000008 + -0x1c0) = uVar49;
          *(undefined1 **)((long)register0x00000008 + -0x1b8) = puVar15;
          *(undefined1 **)((long)register0x00000008 + -0x1b0) =
               (undefined1 *)((long)register0x00000008 + -0x120);
          *(undefined **)((long)register0x00000008 + -0x1a8) = puVar51;
          if ((bRam0000000003eb571d & 1) == 0) {
            func_0x00f78a20(0x3d535d0);
            func_0x00f78a20(0x3d62a40);
            func_0x00f78a20(0x3d270a0);
            func_0x00f78a20(0x3d41568);
            func_0x00f78a20(0x3d1ead0);
            func_0x00f78a20(0x3d41668);
            bRam0000000003eb571d = 1;
          }
          *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
          lVar17 = func_0x00f78aec(/*Core.DebugMenu.DebugMenu.<>c__DisplayClass84_0_TypeInfo*/ uRam0000000003d270a0);
          /*System.Object$$.ctor*/ func_0x0294d018(lVar17,0);
          if (lVar17 != 0) {
            *(undefined1 **)(lVar17 + 0x10) = puVar35;
            *(int *)(lVar17 + 0x18) = auVar68._8_4_;
            plVar16 = (long *)/*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(uVar50,auVar68._8_8_,7,
                                              (undefined1 *)((long)register0x00000008 + -0x210));
            auVar3._8_8_ = plVar16;
            auVar3._0_8_ = uVar50;
            auVar68._8_8_ = plVar16;
            auVar68._0_8_ = uVar50;
            if ((int)plVar16 == 0) {
              return plVar16;
            }
            if (*(long *)((long)register0x00000008 + -0x200) != 0) {
              lVar26 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)register0x00000008 + -0x200),
                                       uRam0000000003d535d0);
              auVar7._8_8_ = plVar16;
              auVar7._0_8_ = lVar26;
              auVar6._8_8_ = plVar16;
              auVar6._0_8_ = lVar26;
              auVar5._8_8_ = plVar16;
              auVar5._0_8_ = lVar26;
              auVar4._8_8_ = plVar16;
              auVar4._0_8_ = lVar26;
              auVar68 = auVar3;
              if ((lVar26 != 0) && (auVar68 = auVar4, *(long *)(lVar26 + 0x18) != 0)) {
                /*UnityEngine.UI.Toggle$$set_isOn*/ func_0x032ec7f8(*(long *)(lVar26 + 0x18),uVar37,0);
                auVar68 = auVar5;
                if ((*(long *)(lVar26 + 0x18) != 0) &&
                   (lVar27 = *(long *)(*(long *)(lVar26 + 0x18) + 0x110), auVar68 = auVar6,
                   lVar27 != 0)) {
                  /*UnityEngine.Events.UnityEventBase$$RemoveAllListeners*/ func_0x03278aac(lVar27,0);
                  if (*(long *)(lVar17 + 0x10) == 0) {
                    return plVar16;
                  }
                  auVar68 = auVar7;
                  if (*(long *)(lVar26 + 0x18) != 0) {
                    lVar26 = *(long *)(*(long *)(lVar26 + 0x18) + 0x110);
                    uVar21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<bool>_TypeInfo*/ uRam0000000003d1ead0);
                    auVar68._0_8_ = uVar21;
                    /*UnityEngine.Events.UnityAction<bool>$$.ctor*/ func_0x01b7da80(uVar21,lVar17,uRam0000000003d62a40,uRam0000000003d41568);
                    uVar37 = 0;
                    if (lVar26 != 0) {
                      /*UnityEngine.Events.UnityEvent<bool>$$AddListener*/ func_0x01b827cc(lVar26,uVar21,uRam0000000003d41668);
                      return plVar16;
                    }
                  }
                }
              }
            }
          }
          auVar65 = func_0x00f78af4();
          *(undefined1 (*) [16])((long)register0x00000008 + -0x240) = auVar68;
          *(long *)((long)register0x00000008 + -0x230) = lVar17;
          *(ulong *)((long)register0x00000008 + -0x228) = uVar37;
          *(undefined1 **)((long)register0x00000008 + -0x220) =
               (undefined1 *)((long)register0x00000008 + -0x1b0);
          *(undefined **)((long)register0x00000008 + -0x218) = &Core_DebugMenu_DebugMenu__GetButton;
          if ((bRam0000000003eb5713 & 1) == 0) {
            func_0x00f78a20(0x3d21140);
            bRam0000000003eb5713 = 1;
          }
          *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
          *(undefined8 *)((long)register0x00000008 + -600) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
          uVar44 = /*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(auVar65._0_8_,auVar65._8_8_,2,
                                   (undefined1 *)((long)register0x00000008 + -0x270));
          if (((uVar44 & 1) != 0) ||
             (iVar12 = /*Core.DebugMenu.DebugMenu$$TryGetElementCopy*/ func_0x0163f14c(auVar65._0_8_,auVar65._8_8_,3,
                                       (undefined1 *)((long)register0x00000008 + -0x270)),
             iVar12 != 0)) {
            plVar16 = *(long **)((long)register0x00000008 + -600);
            if (plVar16 == (long *)0x0) {
              return (long *)0x0;
            }
            if ((*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) <= *(byte *)(*plVar16 + 300)) &&
               (*(long *)(*(long *)(*plVar16 + 200) +
                          (ulong)*(byte *)(/*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140 + 300) * 8 + -8) ==
                /*Core.DebugMenu.DebugUIButtonBehaviour_TypeInfo*/ lRam0000000003d21140)) {
              return plVar16;
            }
            func_0x00f78e5c();
          }
          return (long *)0x0;
        }
      }
    }
    unaff_x30 = Atlas_Gameplay_DebugVisualiser__Update;
    param_8 = (long *)func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
    uVar11 = extraout_b0_02;
    uVar52 = extraout_var_02;
    uVar53 = extraout_var_19;
    uVar54 = extraout_var_36;
  }
  if ((param_8[4] != 0) && (lVar17 = *(long *)(param_8[4] + 0x18), lVar17 != 0)) {
    plVar16 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar17,0);
    uVar45 = (uint)param_2;
    uVar44 = param_8[5];
    if (uVar44 != 0) {
      *(uint *)((long)register0x00000008 + -0x94) = uVar13;
      unaff_x21 = 0;
      if (plVar16 == (long *)0x0) goto LAB_0157deb4;
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(plVar16,0);
      *(uint *)((long)register0x00000008 + -0x98) =
           CONCAT13(extraout_var_37,
                    CONCAT12(extraout_var_20,CONCAT11(extraout_var_03,extraout_b0_03)));
      unaff_d10 = (ulong)uVar45;
      unaff_d11 = (ulong)(uint)fVar58;
      param_6 = fVar58;
      uVar55 = uVar45;
      /*UnityEngine.Transform$$get_right*/ func_0x03275618(plVar16,0);
      uVar13 = CONCAT13(extraout_var_38,
                        CONCAT12(extraout_var_21,CONCAT11(extraout_var_04,extraout_b0_04)));
      unaff_d12 = (ulong)uVar13;
      unaff_d13 = (ulong)uVar55;
      unaff_d14 = (ulong)(uint)param_6;
      fVar48 = param_6;
      uVar28 = uVar55;
      /*UnityEngine.Transform$$get_up*/ func_0x03275714(plVar16,0);
      uVar14 = CONCAT13(extraout_var_39,
                        CONCAT12(extraout_var_22,CONCAT11(extraout_var_05,extraout_b0_05)));
      unaff_d15 = (ulong)uVar14;
      uVar49 = (ulong)uVar28;
      unaff_d9 = (ulong)(uint)fVar48;
      fVar56 = fVar48;
      uVar29 = uVar28;
      /*UnityEngine.Transform$$get_forward*/ func_0x03275810(plVar16,0);
      *(uint *)((long)register0x00000008 + -0xa0) = uVar29;
      *(float *)((long)register0x00000008 + -0x9c) = fVar56;
      *(float *)((long)register0x00000008 + -0xa8) = fVar48;
      *(uint *)((long)register0x00000008 + -0xa4) =
           CONCAT13(extraout_var_40,
                    CONCAT12(extraout_var_23,CONCAT11(extraout_var_06,extraout_b0_06)));
      *(uint *)((long)register0x00000008 + -0xb0) = uVar14;
      *(uint *)((long)register0x00000008 + -0xac) = uVar28;
      param_2 = (ulong)uVar45;
      uVar59 = 0;
      param_4 = (ulong)uVar13;
      param_5 = (ulong)uVar55;
      Atlas_Gameplay_DebugFreeCameraController__SetOrbitalTarget
                ((char)*(undefined4 *)((long)register0x00000008 + -0x98),uVar44);
      plVar16 = (long *)0x0;
      if (param_8[5] != 0) {
        plVar16 = (long *)Atlas_Gameplay_DebugFreeCameraController__Update
                                    ((char)*(undefined4 *)((long)register0x00000008 + -0x94));
      }
    }
    goto LAB_0157dbf0;
  }
LAB_0157deb4:
  auVar65 = func_0x00f78af4();
  pfVar34 = auVar65._8_8_;
  lVar17 = auVar65._0_8_;
  puVar15 = (undefined1 *)((long)register0x00000008 + -0x290);
  puVar9 = (undefined1 *)((long)register0x00000008 + -0x290);
  *(ulong *)((long)register0x00000008 + -0x140) = unaff_d13;
  *(ulong *)((long)register0x00000008 + -0x138) = unaff_d12;
  *(ulong *)((long)register0x00000008 + -0x130) = unaff_d11;
  *(ulong *)((long)register0x00000008 + -0x128) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0x120) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x118) = uVar49;
  *(long *)((long)register0x00000008 + -0x110) = unaff_x28;
  *(ulong *)((long)register0x00000008 + -0x108) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x100) = uVar46;
  *(ulong *)((long)register0x00000008 + -0xf8) = uVar37;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar21;
  *(ulong *)((long)register0x00000008 + -0xe8) = unaff_x23;
  *(float **)((long)register0x00000008 + -0xe0) = unaff_x22;
  *(long *)((long)register0x00000008 + -0xd8) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0xd0) = uVar44;
  *(long **)((long)register0x00000008 + -200) = param_8;
  *(undefined1 **)((long)register0x00000008 + -0xc0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0xb8) =
       &Atlas_Gameplay_DebugVisualiser__CacheSceneObjects;
  puVar35 = (undefined1 *)((long)register0x00000008 + -0xc0);
  if ((bRam0000000003eb509a & 1) == 0) {
    func_0x00f78a20(0x3d3d030);
    func_0x00f78a20(0x3d3b268);
    func_0x00f78a20(0x3d3d038);
    func_0x00f78a20(0x3d3b270);
    func_0x00f78a20(0x3d5b058);
    func_0x00f78a20(0x3d5b060);
    func_0x00f78a20(0x3d5b068);
    func_0x00f78a20(0x3d5b070);
    func_0x00f78a20(0x3d5b088);
    func_0x00f78a20(0x3d5b078);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d27150);
    func_0x00f78a20(0x3d27148);
    bRam0000000003eb509a = 1;
  }
  plVar16 = (long *)0x3d5b068;
  uVar44 = 0x3d5b088;
  *(undefined8 *)((long)register0x00000008 + -400) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x220) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar19 = (long *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b070);
  plVar20 = (long *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b058);
  uVar21 = /*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b078);
  *(undefined8 *)((long)register0x00000008 + -0x278) = uVar21;
  plVar22 = (long *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b060);
  pfVar23 = (float *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b068);
  uVar21 = /*UnityEngine.Object$$FindObjectsOfType<Volume>*/ func_0x018a6574(1,uRam0000000003d5b088);
  *(undefined8 *)((long)register0x00000008 + -0x270) = uVar21;
  plVar47 = plVar16;
  if (*(long *)(lVar17 + 0x38) == 0) {
code_r0x0157e7f8:
    func_0x00f78af4();
    plVar16 = plVar47;
code_r0x0157e7fc:
    pfVar34 = param_10;
    uVar21 = func_0x00f78b24();
    puVar51 = &Atlas_Gameplay_DebugVisualiser__IncludeGameObject;
    func_0x00f78ac0(uVar21,0);
    lVar17 = extraout_x1;
    if (extraout_x1 != 0) goto code_r0x0322efac;
    *(undefined1 **)((long)register0x00000008 + -0x2a0) = puVar35;
    *(undefined **)((long)register0x00000008 + -0x298) =
         &Atlas_Gameplay_DebugVisualiser__IncludeGameObject;
    puVar51 = &Atlas_Gameplay_DebugVisualiser__IgnoreCollider;
    func_0x00f78af4();
    puVar15 = (undefined1 *)((long)register0x00000008 + -0x2a0);
    plVar24 = extraout_x1_00;
    plVar47 = plVar16;
    puVar35 = (undefined1 *)((long)register0x00000008 + -0x2a0);
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar17 + 0x38),uRam0000000003d3b270);
    if (*(long *)(lVar17 + 0x40) == 0) goto code_r0x0157e7f8;
    uVar44 = 0x3d3d038;
    /*System.Collections.Generic.List<DebugVisualiser.Collider>$$Clear*/ func_0x025175f0(*(long *)(lVar17 + 0x40),uRam0000000003d3d038);
    lVar17 = *(long *)(lVar17 + 0x48);
    plVar47 = (long *)0x3d5b068;
    if (lVar17 == 0) goto code_r0x0157e7f8;
    *(long **)((long)register0x00000008 + -0x280) = plVar22;
    plVar24 = (long *)/*System.Collections.Generic.List<DebugVisualiser.Collider>$$Clear*/ func_0x025175f0(lVar17,uRam0000000003d3d038);
    if (plVar19 == (long *)0x0) goto code_r0x0157e7f8;
    uVar13 = *(uint *)(plVar19 + 3);
    uVar44 = 0x3d3d038;
    if (0 < (int)uVar13) {
      uVar44 = 0;
      plVar47 = (long *)0x3d3b268;
      do {
        uVar45 = (uint)uVar44;
        plVar16 = (long *)0x3d3b268;
        if (uVar13 <= uVar45) goto code_r0x0157e7fc;
        unaff_x27 = plVar19[(long)(int)uVar45 + 4];
        if (unaff_x27 == 0) goto code_r0x0157e7f8;
        plVar24 = (long *)/*UnityEngine.Renderer$$get_enabled*/ func_0x0325baf4(unaff_x27,0);
        if ((int)plVar24 != 0) {
          lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x27,0);
          if (lVar17 == 0) goto code_r0x0157e7f8;
          puVar51 = &UNK_0157e0fc;
          puVar9 = (undefined1 *)((long)register0x00000008 + -0x290);
          goto code_r0x0322efac;
        }
        uVar44 = (ulong)(uVar45 + 1);
        uVar13 = *(uint *)(plVar19 + 3);
      } while ((int)(uVar45 + 1) < (int)uVar13);
    }
    plVar47 = plVar16;
    *(float **)((long)register0x00000008 + -0x288) = pfVar23;
    if (plVar20 == (long *)0x0) goto code_r0x0157e7f8;
    plVar47 = *(long **)((long)register0x00000008 + -0x278);
    plVar16 = plVar47;
    if (0 < (int)plVar20[3]) {
      pfVar23 = (float *)0x0;
      plVar22 = plVar20 + 4;
      if ((plVar20[3] & 0xffffffffU) == 0) goto code_r0x0157e7fc;
      plVar24 = (long *)*plVar22;
      puVar51 = &UNK_0157e160;
      puVar15 = (undefined1 *)((long)register0x00000008 + -0x290);
      plVar19 = plVar24;
      goto code_r0x0157e824;
    }
    if (plVar47 == (long *)0x0) goto code_r0x0157e7f8;
    if (0 < (int)plVar47[3]) {
      pfVar23 = (float *)0x0;
      plVar22 = plVar47 + 4;
      if ((plVar47[3] & 0xffffffffU) == 0) goto code_r0x0157e7fc;
      plVar24 = (long *)*plVar22;
      puVar51 = &UNK_0157e304;
      puVar15 = (undefined1 *)((long)register0x00000008 + -0x290);
      plVar20 = plVar24;
      goto code_r0x0157e824;
    }
    unaff_x27 = *(ulong *)((long)register0x00000008 + -0x280);
    if (unaff_x27 == 0) goto code_r0x0157e7f8;
    if (0 < (int)*(ulong *)(unaff_x27 + 0x18)) {
      unaff_x28 = 0;
      pfVar23 = (float *)(unaff_x27 + 0x20);
      if ((*(ulong *)(unaff_x27 + 0x18) & 0xffffffff) != 0) {
        plVar24 = *(long **)pfVar23;
        puVar51 = &UNK_0157e4bc;
        puVar15 = (undefined1 *)((long)register0x00000008 + -0x290);
        plVar22 = plVar24;
        goto code_r0x0157e824;
      }
      goto code_r0x0157e7fc;
    }
    uVar44 = *(ulong *)((long)register0x00000008 + -0x288);
    if (uVar44 == 0) goto code_r0x0157e7f8;
    if ((int)*(ulong *)(uVar44 + 0x18) < 1) {
      return plVar24;
    }
    plVar20 = (long *)0x0;
    plVar19 = (long *)(uVar44 + 0x20);
    if ((*(ulong *)(uVar44 + 0x18) & 0xffffffff) == 0) goto code_r0x0157e7fc;
    plVar24 = (long *)*plVar19;
    puVar51 = &UNK_0157e6c4;
    plVar47 = plVar24;
  }
code_r0x0157e824:
  auVar2._8_8_ = plVar24;
  auVar2._0_8_ = pfVar34;
  puVar9 = puVar15 + -0x40;
  *(long **)(puVar15 + -0x40) = plVar22;
  *(float **)(puVar15 + -0x38) = pfVar23;
  *(long **)(puVar15 + -0x30) = plVar47;
  *(ulong *)(puVar15 + -0x28) = uVar44;
  *(undefined1 (*) [16])(puVar15 + -0x20) = auVar65;
  *(undefined1 **)(puVar15 + -0x10) = puVar35;
  *(undefined **)(puVar15 + -8) = puVar51;
  puVar35 = puVar15 + -0x10;
  uVar21 = 0x3eb5000;
  pfVar30 = pfVar34;
  if ((bRam0000000003eb509c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509c = 1;
  }
  if ((pfVar34 != (float *)0x0) && (0 < (int)*(ulong *)(pfVar34 + 6))) {
    plVar47 = (long *)0x0;
    plVar16 = (long *)(*(ulong *)(pfVar34 + 6) & 0xffffffff);
    pfVar23 = pfVar34 + 8;
    plVar22 = (long *)0x3d23990;
    do {
      if (plVar16 <= plVar47) {
        uVar50 = func_0x00f78b24();
        func_0x00f78ac0(uVar50,0);
        goto code_r0x0157e92c;
      }
      uVar21 = *(undefined8 *)(pfVar23 + (long)plVar47 * 2);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pfVar30 = (float *)0x0;
      uVar44 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar24,uVar21);
      if ((uVar44 & 1) != 0) {
        return (long *)0x0;
      }
      plVar47 = (long *)((long)plVar47 + 1);
      plVar16 = (long *)(ulong)(uint)pfVar34[6];
    } while ((long)plVar47 < (long)(int)pfVar34[6]);
  }
  if (plVar24 != (long *)0x0) {
    iVar12 = /*UnityEngine.Collider$$get_enabled*/ func_0x0329e914(plVar24,0);
    if (iVar12 == 0) {
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
    lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar24,0);
    if (lVar17 != 0) {
      puVar51 = &UNK_0157e8f8;
      auVar65 = auVar2;
code_r0x0322efac:
      *(undefined1 (*) [16])(puVar9 + -0x20) = auVar65;
      *(undefined1 **)(puVar9 + -0x10) = puVar35;
      *(undefined **)(puVar9 + -8) = puVar51;
      if (pcRam0000000003ebf4d0 == (code *)0x0) {
        pcRam0000000003ebf4d0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeInHierarchy()");
      }
                    /* WARNING: Could not recover jumptable at 0x0322efe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar16 = (long *)(*pcRam0000000003ebf4d0)(lVar17);
      return plVar16;
    }
  }
code_r0x0157e92c:
  func_0x00f78af4();
  *(long **)(puVar15 + -0x90) = plVar19;
  *(long **)(puVar15 + -0x88) = plVar20;
  *(long **)(puVar15 + -0x80) = plVar22;
  *(float **)(puVar15 + -0x78) = pfVar23;
  *(long **)(puVar15 + -0x70) = plVar47;
  *(undefined8 *)(puVar15 + -0x68) = uVar21;
  *(float **)(puVar15 + -0x60) = pfVar34;
  *(long **)(puVar15 + -0x58) = plVar24;
  *(undefined1 **)(puVar15 + -0x50) = puVar35;
  *(undefined **)(puVar15 + -0x48) = &Atlas_Gameplay_DebugVisualiser__CreateCollider;
  uVar44 = 0x3eb5000;
  pfVar23 = pfVar30;
  pfVar34 = param_11;
  if ((bRam0000000003eb50a4 & 1) == 0) {
    func_0x00f78a20(0x3d53750);
    func_0x00f78a20(0x3d27140);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d27150);
    bRam0000000003eb50a4 = 1;
  }
  *(undefined8 *)(puVar15 + -0x98) = 0;
  if ((extraout_x1_01 != 0) &&
     (pfVar23 = pfRam0000000003d53750, /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(extraout_x1_01,puVar15 + -0x98),
     param_11 != (float *)0x0)) {
    lVar17 = *(long *)param_11;
    uVar44 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar44 != 0) {
      piVar38 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar38 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar17 + (long)*piVar38 * 0x10 + 0x138);
          goto code_r0x0157ea20;
        }
        piVar38 = piVar38 + 4;
        uVar44 = uVar44 - 1;
      } while (uVar44 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(param_11,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,0);
code_r0x0157ea20:
    uVar21 = (*(code *)*puVar18)(param_11,puVar18[1]);
    uVar11 = /*UnityEngine.Collider$$get_isTrigger*/ func_0x0329e9e4(extraout_x1_01,0);
    uVar50 = *(undefined8 *)(puVar15 + -0x98);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar16 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar50,0,0);
    if (*(byte *)(*(long *)param_11 + 300) < *(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300)) {
      bVar10 = false;
    }
    else {
      bVar10 = *(long *)(*(long *)(*(long *)param_11 + 200) +
                         (ulong)*(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300) * 8 + -8) ==
               /*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150;
    }
    *extraout_x8 = pfVar30;
    extraout_x8[1] = param_11;
    extraout_x8[2] = 0;
    extraout_x8[3] = uVar21;
    *(undefined1 *)(extraout_x8 + 4) = uVar11;
    *(char *)((long)extraout_x8 + 0x21) = (char)plVar16;
    *(bool *)((long)extraout_x8 + 0x22) = bVar10;
    *(undefined4 *)((long)extraout_x8 + 0x23) = 0;
    *(undefined1 *)((long)extraout_x8 + 0x27) = 0;
    return plVar16;
  }
  func_0x00f78af4();
  *(long **)(puVar15 + -0xe0) = plVar22;
  *(undefined8 *)(puVar15 + -0xd8) = 0x3eb5000;
  *(long *)(puVar15 + -0xd0) = extraout_x1_01;
  *(float **)(puVar15 + -200) = pfVar30;
  *(float **)(puVar15 + -0xc0) = param_11;
  *(undefined8 **)(puVar15 + -0xb8) = extraout_x8;
  *(undefined1 **)(puVar15 + -0xb0) = puVar15 + -0x50;
  *(undefined **)(puVar15 + -0xa8) = &Atlas_Gameplay_DebugVisualiser__GetReplicator;
  plVar16 = (long *)0x3eb5000;
  pfVar30 = pfVar23;
  if ((bRam0000000003eb509b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509b = 1;
  }
  lVar17 = extraout_x1_01;
  if (pfVar23 != (float *)0x0) {
    fVar48 = pfVar23[6];
    if (0 < (int)fVar48) {
      uVar44 = 0;
      plVar22 = (long *)0x3d23990;
      do {
        fVar56 = (float)uVar44;
        if ((uint)fVar48 <= (uint)fVar56) {
          uVar21 = func_0x00f78b24();
          func_0x00f78ac0(uVar21,0);
          goto code_r0x0157ebb8;
        }
        plVar16 = *(long **)(pfVar23 + (long)(int)fVar56 * 2 + 8);
        if (plVar16 == (long *)0x0) goto code_r0x0157ebb8;
        lVar17 = plVar16[7];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pfVar30 = (float *)0x0;
        uVar44 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar17,extraout_x1_02);
        if ((uVar44 & 1) != 0) {
          return plVar16;
        }
        uVar44 = (ulong)((int)fVar56 + 1U);
        fVar48 = pfVar23[6];
      } while ((int)((int)fVar56 + 1U) < (int)fVar48);
    }
    return (long *)0x0;
  }
code_r0x0157ebb8:
  uVar13 = func_0x00f78af4();
  *(ulong *)(puVar15 + -0x180) = unaff_d15;
  *(ulong *)(puVar15 + -0x178) = unaff_d14;
  *(ulong *)(puVar15 + -0x170) = unaff_d13;
  *(ulong *)(puVar15 + -0x168) = unaff_d12;
  *(ulong *)(puVar15 + -0x160) = unaff_d11;
  *(ulong *)(puVar15 + -0x158) = unaff_d10;
  *(ulong *)(puVar15 + -0x150) = unaff_d9;
  *(ulong *)(puVar15 + -0x148) = uVar49;
  *(long *)(puVar15 + -0x140) = unaff_x28;
  *(ulong *)(puVar15 + -0x138) = unaff_x27;
  *(long **)(puVar15 + -0x130) = plVar19;
  *(long **)(puVar15 + -0x128) = plVar20;
  *(long **)(puVar15 + -0x120) = plVar22;
  *(ulong *)(puVar15 + -0x118) = uVar44;
  *(long *)(puVar15 + -0x110) = lVar17;
  *(long **)(puVar15 + -0x108) = plVar16;
  *(undefined8 *)(puVar15 + -0x100) = extraout_x1_02;
  *(float **)(puVar15 + -0xf8) = pfVar23;
  *(undefined1 **)(puVar15 + -0xf0) = puVar15 + -0xb0;
  *(undefined **)(puVar15 + -0xe8) = &Atlas_Gameplay_DebugVisualiser__CreateCapsuleMesh;
  *(undefined4 *)(puVar15 + -0x1b4) = extraout_w1;
  fVar48 = (float)param_5;
  uVar49 = param_5 & 0xffffffff;
  *(ulong *)(puVar15 + -0x1b0) = param_4;
  *(ulong *)(puVar15 + -0x1a0) = CONCAT44(uVar59,fVar58);
  fVar56 = (float)param_2;
  uVar37 = param_2 & 0xffffffff;
  *(uint *)(puVar15 + -400) =
       CONCAT13(extraout_var_42,CONCAT12(extraout_var_25,CONCAT11(extraout_var_08,extraout_b0_08)));
  uVar44 = 0x3d1f3d8;
  if ((bRam0000000003eb50a6 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d1f3d8);
    func_0x00f78a20(0x3d1f5e0);
    func_0x00f78a20(0x3d715a8);
    bRam0000000003eb50a6 = 1;
  }
  uVar13 = (uVar13 & 1) + uVar13;
  uVar43 = (ulong)uVar13;
  uVar46 = (ulong)(uVar13 + 1);
  uVar25 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar46);
  lVar17 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar46);
  lVar26 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar46);
  *(ulong *)(puVar15 + -0x188) = uVar46;
  lVar27 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar46);
  fVar57 = _UNK_033f850c;
  *(uint *)(puVar15 + -0x18c) = uVar13;
  if (uVar13 < 0x7fffffff) {
    if (uVar25 == 0) goto code_r0x0157f324;
    uVar43 = 0;
    fVar62 = 360.0 / (float)*(int *)(puVar15 + -0x18c);
    unaff_d12 = (ulong)(uint)fVar62;
    param_2 = 0x43340000;
    unaff_x27 = (ulong)*(uint *)(uVar25 + 0x18);
    unaff_x28 = uVar25 + 0x20;
    uVar44 = lVar17 + 0x20;
    plVar19 = (long *)(lVar26 + 0x20);
    unaff_d13 = (ulong)(uint)_UNK_033f850c;
    uVar46 = lVar27 + 0x20;
    unaff_d14 = 0;
    fVar63 = 180.0 / (float)*(int *)(puVar15 + -0x18c);
    unaff_d15 = (ulong)(uint)fVar63;
    unaff_d10 = 0;
    do {
      if (unaff_x27 == uVar43) goto code_r0x0157f274;
      ___sincosf_stret(SUB41((float)unaff_d14 * fVar57,0));
      *(uint *)(unaff_x28 + uVar43 * 4) =
           CONCAT13(extraout_var_43,
                    CONCAT12(extraout_var_26,CONCAT11(extraout_var_09,extraout_b0_09)));
      if (lVar17 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar17 + 0x18) <= uVar43) goto code_r0x0157f274;
      *(int *)(uVar44 + uVar43 * 4) = (int)param_2;
      fVar61 = (float)unaff_d10 * fVar57;
      unaff_d11 = (ulong)(uint)fVar61;
      uVar11 = SUB41(fVar61,0);
      _cosf(uVar11);
      if (lVar26 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar26 + 0x18) <= uVar43) goto code_r0x0157f274;
      *(uint *)((long)plVar19 + uVar43 * 4) =
           CONCAT13(extraout_var_44,
                    CONCAT12(extraout_var_27,CONCAT11(extraout_var_10,extraout_b0_10)));
      _sinf(uVar11);
      if (lVar27 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar27 + 0x18) <= uVar43) goto code_r0x0157f274;
      *(uint *)(uVar46 + uVar43 * 4) =
           CONCAT13(extraout_var_45,
                    CONCAT12(extraout_var_28,CONCAT11(extraout_var_11,extraout_b0_11)));
      unaff_d14 = (ulong)(uint)(fVar62 + (float)unaff_d14);
      unaff_d10 = (ulong)(uint)(fVar63 + (float)unaff_d10);
      uVar43 = uVar43 + 1;
    } while (*(ulong *)(puVar15 + -0x188) != uVar43);
  }
  uVar13 = *(uint *)(puVar15 + -0x18c);
  uVar44 = (ulong)uVar13;
  uVar46 = *(ulong *)(puVar15 + -0x188);
  uVar45 = (uint)uVar46;
  uVar43 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,(uVar13 + 2) * uVar45);
  param_2 = 0x3f000000;
  fVar57 = (*(float *)(puVar15 + -400) - (fVar56 + fVar56)) * 0.5;
  fVar58 = 0.0;
  if (fVar57 <= 0.0) {
    fVar57 = 0.0;
  }
  unaff_d11 = (ulong)(uint)fVar57;
  unaff_d10 = (ulong)(uint)((float)(int)uVar45 * 0.5);
  uVar11 = SUB41((float)(int)uVar45 * 0.5,0);
  uVar14 = /*UnityEngine.Mathf$$CeilToInt*/ func_0x0323d108(uVar11,0);
  if ((int)uVar14 < 1) {
    unaff_x27 = 0;
  }
  else {
    uVar36 = 0;
    unaff_x27 = 0;
    uVar29 = uVar45;
    if ((int)uVar45 < 2) {
      uVar29 = 1;
    }
    do {
      if (uVar13 < 0x7fffffff) {
        if (uVar25 == 0) goto code_r0x0157f324;
        uVar42 = 0;
        do {
          if (*(uint *)(uVar25 + 0x18) <= uVar42) goto code_r0x0157f274;
          if (lVar27 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar27 + 0x18) <= uVar36) goto code_r0x0157f274;
          if (lVar26 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar26 + 0x18) <= uVar36) goto code_r0x0157f274;
          if (lVar17 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar17 + 0x18) <= uVar42) goto code_r0x0157f274;
          if (uVar43 == 0) goto code_r0x0157f324;
          uVar28 = (int)unaff_x27 + (int)uVar42;
          pfVar30 = (float *)(ulong)*(uint *)(uVar43 + 0x18);
          if (*(uint *)(uVar43 + 0x18) <= uVar28) goto code_r0x0157f274;
          fVar62 = *(float *)(lVar27 + uVar36 * 4 + 0x20);
          fVar58 = *(float *)(lVar26 + uVar36 * 4 + 0x20);
          fVar63 = *(float *)(uVar25 + 0x20 + uVar42 * 4) * fVar62 * fVar56;
          param_4 = (ulong)(uint)fVar63;
          fVar62 = fVar62 * *(float *)(lVar17 + 0x20 + uVar42 * 4) * fVar56;
          param_2 = (ulong)(uint)fVar62;
          lVar31 = uVar43 + (long)(int)uVar28 * 0xc;
          pfVar30 = (float *)(lVar31 + 0x24);
          *pfVar30 = fVar58 * fVar56;
          *(float *)(lVar31 + 0x20) = fVar63;
          *(float *)(lVar31 + 0x28) = fVar62;
          pfVar34 = (float *)(ulong)*(uint *)(uVar43 + 0x18);
          if (*(uint *)(uVar43 + 0x18) <= uVar28) goto code_r0x0157f274;
          *pfVar30 = fVar57 + fVar58 * fVar56;
          uVar42 = uVar42 + 1;
        } while (uVar29 != uVar42);
        unaff_x27 = (ulong)(uint)((int)unaff_x27 + (int)uVar42);
      }
      uVar36 = uVar36 + 1;
    } while (uVar36 != uVar14);
  }
  iVar12 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(uVar11,0);
  if (iVar12 < (int)uVar45) {
    uVar14 = uVar45;
    if ((int)uVar45 < 2) {
      uVar14 = 1;
    }
    lVar31 = (long)iVar12;
    do {
      if (uVar13 < 0x7fffffff) {
        if (uVar25 == 0) goto code_r0x0157f324;
        uVar36 = 0;
        do {
          if (*(uint *)(uVar25 + 0x18) <= uVar36) goto code_r0x0157f274;
          if (lVar27 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar27 + 0x18) <= (uint)lVar31) goto code_r0x0157f274;
          if (lVar26 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar26 + 0x18) <= (uint)lVar31) goto code_r0x0157f274;
          if (lVar17 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar17 + 0x18) <= uVar36) goto code_r0x0157f274;
          if (uVar43 == 0) goto code_r0x0157f324;
          uVar29 = (int)unaff_x27 + (int)uVar36;
          pfVar30 = (float *)(ulong)*(uint *)(uVar43 + 0x18);
          if (*(uint *)(uVar43 + 0x18) <= uVar29) goto code_r0x0157f274;
          fVar62 = *(float *)(lVar27 + lVar31 * 4 + 0x20);
          fVar58 = *(float *)(lVar26 + lVar31 * 4 + 0x20);
          fVar63 = *(float *)(uVar25 + 0x20 + uVar36 * 4) * fVar62 * fVar56;
          param_4 = (ulong)(uint)fVar63;
          fVar62 = fVar62 * *(float *)(lVar17 + 0x20 + uVar36 * 4) * fVar56;
          param_2 = (ulong)(uint)fVar62;
          lVar32 = uVar43 + (long)(int)uVar29 * 0xc;
          pfVar30 = (float *)(lVar32 + 0x24);
          *pfVar30 = fVar58 * fVar56;
          *(float *)(lVar32 + 0x20) = fVar63;
          *(float *)(lVar32 + 0x28) = fVar62;
          pfVar34 = (float *)(ulong)*(uint *)(uVar43 + 0x18);
          if (*(uint *)(uVar43 + 0x18) <= uVar29) goto code_r0x0157f274;
          *pfVar30 = fVar58 * fVar56 - fVar57;
          uVar36 = uVar36 + 1;
        } while (uVar14 != uVar36);
        unaff_x27 = (ulong)(uint)((int)unaff_x27 + (int)uVar36);
      }
      lVar31 = lVar31 + 1;
    } while (lVar31 != (int)uVar45);
  }
  uVar25 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar13 * uVar45 * 6);
  param_5 = *(ulong *)(puVar15 + -0x1b0);
  param_4 = *(ulong *)(puVar15 + -0x1a0);
  if (uVar13 < 0x7fffffff) {
    uVar29 = 0;
    uVar14 = 0;
    uVar28 = uVar13;
    if ((int)uVar13 < 2) {
      uVar28 = 1;
    }
    do {
      if (uVar13 != 0) {
        if (uVar25 == 0) goto code_r0x0157f324;
        iVar12 = uVar29 * uVar45;
        iVar39 = (uVar29 + 1) * uVar45;
        uVar55 = *(uint *)(uVar25 + 0x18);
        uVar40 = uVar28;
        do {
          uVar41 = uVar14;
          if (uVar55 <= uVar41) goto code_r0x0157f274;
          *(int *)(uVar25 + (long)(int)uVar41 * 4 + 0x20) = iVar12;
          if ((uVar55 <= uVar41 + 1) ||
             (*(int *)(uVar25 + (long)(int)(uVar41 + 1) * 4 + 0x20) = iVar39, uVar55 <= uVar41 + 2))
          goto code_r0x0157f274;
          *(int *)(uVar25 + (long)(int)(uVar41 + 2) * 4 + 0x20) = iVar39 + 1;
          if ((uVar55 <= uVar41 + 3) ||
             ((*(int *)(uVar25 + (long)(int)(uVar41 + 3) * 4 + 0x20) = iVar12 + 1,
              uVar55 <= uVar41 + 4 ||
              (*(int *)(uVar25 + (long)(int)(uVar41 + 4) * 4 + 0x20) = iVar12, uVar55 <= uVar41 + 5)
              ))) goto code_r0x0157f274;
          *(int *)(uVar25 + (long)(int)(uVar41 + 5) * 4 + 0x20) = iVar39 + 1;
          iVar12 = iVar12 + 1;
          iVar39 = iVar39 + 1;
          uVar40 = uVar40 - 1;
          uVar14 = uVar41 + 6;
        } while (uVar40 != 0);
        uVar14 = uVar41 + 6;
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar45);
  }
  if (uVar43 != 0) {
    uVar36 = *(ulong *)(uVar43 + 0x18) & 0xffffffff;
    iVar12 = *(int *)(puVar15 + -0x1b4);
    fVar56 = (float)param_4;
    fVar57 = (float)param_5;
    iVar39 = (int)*(ulong *)(uVar43 + 0x18);
    if (iVar12 == 0) {
      if (0 < iVar39) {
        if (uVar36 != 0) {
          uVar42 = 0;
          pfVar23 = (float *)(uVar43 + 0x28);
          do {
            fVar62 = pfVar23[-2];
            param_2 = (ulong)(uint)(fVar56 + pfVar23[-1]);
            fVar58 = fVar48 + *pfVar23;
            pfVar23[-2] = fVar56 + pfVar23[-1];
            pfVar23[-1] = fVar57 + fVar62;
            *pfVar23 = fVar58;
            if (uVar36 - 1 == uVar42) goto code_r0x0157f1d8;
            uVar42 = uVar42 + 1;
            pfVar23 = pfVar23 + 3;
          } while (uVar42 < *(uint *)(uVar43 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if (iVar12 == 1) {
      if (0 < iVar39) {
        if (uVar36 != 0) {
          uVar44 = 0;
          param_4 = CONCAT44(fVar57,fVar56);
          pfVar23 = (float *)(uVar43 + 0x28);
          do {
            param_2 = CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(pfVar23 + -2) >> 0x20),
                               fVar56 + (float)*(undefined8 *)(pfVar23 + -2));
            *(ulong *)(pfVar23 + -2) = param_2;
            *pfVar23 = fVar48 + *pfVar23;
            if (uVar36 - 1 == uVar44) goto code_r0x0157f280;
            uVar44 = uVar44 + 1;
            pfVar23 = pfVar23 + 3;
          } while (uVar44 < *(uint *)(uVar43 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if ((iVar12 == 2) && (0 < iVar39)) {
      if (uVar36 != 0) {
        uVar42 = 0;
        pfVar23 = (float *)(uVar43 + 0x28);
        do {
          fVar62 = pfVar23[-1];
          fVar58 = fVar57 + *pfVar23;
          param_2 = (ulong)(uint)(fVar48 + fVar62);
          pfVar23[-2] = fVar56 + pfVar23[-2];
          pfVar23[-1] = fVar58;
          *pfVar23 = fVar48 + fVar62;
          if (uVar36 - 1 == uVar42) goto code_r0x0157f1d8;
          uVar42 = uVar42 + 1;
          pfVar23 = pfVar23 + 3;
        } while (uVar42 < *(uint *)(uVar43 + 0x18));
      }
code_r0x0157f274:
      uVar21 = func_0x00f78b24();
      func_0x00f78ac0(uVar21,0);
    }
code_r0x0157f280:
    plVar16 = (long *)func_0x00f78aec(/*UnityEngine.Mesh_TypeInfo*/ uRam0000000003d23388);
    /*UnityEngine.Mesh$$.ctor*/ func_0x0323f420(plVar16,0);
    uVar44 = 0;
    if (plVar16 != (long *)0x0) {
      /*UnityEngine.Object$$set_name*/ func_0x03248994(plVar16,/*STR('ProceduralCapsule')*/ uRam0000000003d715a8,0);
      /*UnityEngine.Mesh$$set_vertices*/ func_0x03241d34(plVar16,uVar43,0);
      /*UnityEngine.Mesh$$set_triangles*/ func_0x032448a4(plVar16,uVar25,0);
      /*UnityEngine.Mesh$$Optimize*/ func_0x032470b4(plVar16,0);
      /*UnityEngine.Mesh$$RecalculateBounds*/ func_0x03246a70(plVar16,0);
      return plVar16;
    }
  }
code_r0x0157f324:
  func_0x00f78af4();
  *(long *)(puVar15 + -0x200) = lVar26;
  *(long *)(puVar15 + -0x1f8) = lVar17;
  *(ulong *)(puVar15 + -0x1f0) = uVar25;
  *(ulong *)(puVar15 + -0x1e8) = uVar46;
  *(ulong *)(puVar15 + -0x1e0) = uVar44;
  *(ulong *)(puVar15 + -0x1d8) = uVar43;
  *(undefined1 **)(puVar15 + -0x1d0) = puVar15 + -0xf0;
  *(undefined **)(puVar15 + -0x1c8) = &Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility;
  lVar31 = 0x3eb5000;
  pfVar23 = pfVar30;
  if ((bRam0000000003eb509d & 1) == 0) {
    func_0x00f78a20(0x3d32a28);
    func_0x00f78a20(0x3d32a30);
    func_0x00f78a20(0x3d32a38);
    func_0x00f78a20(0x3d3b278);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509d = 1;
  }
  *(undefined8 *)(puVar15 + -0x218) = 0;
  *(undefined8 *)(puVar15 + -0x210) = 0;
  *(undefined8 *)(puVar15 + -0x208) = 0;
  if (extraout_x1_03 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar15 + -0x218,extraout_x1_03,uRam0000000003d3b278);
    while( true ) {
      do {
        uVar44 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar15 + -0x218,uRam0000000003d32a30);
        if ((uVar44 & 1) == 0) {
          plVar16 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar15 + -0x218,uRam0000000003d32a28);
          return plVar16;
        }
        lVar17 = *(long *)(puVar15 + -0x208);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar44 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar17,0,0);
      } while ((uVar44 & 1) != 0);
      if (lVar17 == 0) break;
      /*UnityEngine.Renderer$$set_forceRenderingOff*/ func_0x0325bc24(lVar17,(uint)pfVar30 ^ 1,0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x157f45c);
    (*pcVar8)();
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    puVar18 = (undefined8 *)___cxa_begin_catch();
    pfVar30 = (float *)*puVar18;
    ___cxa_end_catch();
    plVar16 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar15 + -0x218,uRam0000000003eb5000);
    if (pfVar30 == (float *)0x0) {
      return plVar16;
    }
    func_0x00f78ac0(pfVar30,0);
  }
  auVar65 = __Unwind_Resume();
  lVar32 = auVar65._8_8_;
  *(long *)(puVar15 + -0x280) = unaff_x28;
  *(ulong *)(puVar15 + -0x278) = unaff_x27;
  *(long **)(puVar15 + -0x270) = plVar19;
  *(long *)(puVar15 + -0x268) = lVar27;
  *(long *)(puVar15 + -0x260) = lVar26;
  *(long *)(puVar15 + -600) = lVar17;
  *(ulong *)(puVar15 + -0x250) = uVar25;
  *(undefined8 *)(puVar15 + -0x248) = 0x3eb5000;
  *(undefined8 *)(puVar15 + -0x240) = 0;
  *(float **)(puVar15 + -0x238) = pfVar30;
  *(undefined1 **)(puVar15 + -0x230) = puVar15 + -0x1d0;
  *(undefined **)(puVar15 + -0x228) = &Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals;
  *(float **)(puVar15 + -0x2b8) = param_12;
  *(long **)(puVar15 + -0x2b0) = param_13;
  *(float **)(puVar15 + -0x2c8) = pfVar23;
  *(float **)(puVar15 + -0x2c0) = pfVar34;
  plVar16 = auVar65._0_8_;
  if ((bRam0000000003eb509e & 1) == 0) {
    func_0x00f78a20(0x3d3d050);
    func_0x00f78a20(0x3d3d058);
    func_0x00f78a20(0x3d3d060);
    plVar16 = (long *)func_0x00f78a20(0x3d23990);
    bRam0000000003eb509e = 1;
  }
  uVar14 = (uint)param_2;
  uVar13 = (uint)param_4;
  uVar45 = (uint)param_5;
  if (lVar32 != 0) {
    uVar44 = (ulong)*(uint *)(lVar32 + 0x18);
    if (0 < (int)*(uint *)(lVar32 + 0x18)) {
      uVar46 = 0;
      uVar43 = uVar44 - 1;
      lVar31 = 0x20;
      while( true ) {
        if (uVar44 <= uVar46) {
          plVar16 = (long *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar14 = (uint)param_2;
        uVar13 = (uint)param_4;
        uVar45 = (uint)param_5;
        puVar18 = (undefined8 *)(*(long *)(lVar32 + 0x10) + lVar31);
        pfVar23 = (float *)puVar18[1];
        if (pfVar23 != (float *)0x0) {
          auVar66._8_8_ = *puVar18;
          auVar66._0_8_ = auVar65._0_8_;
          pfVar34 = (float *)puVar18[3];
          uVar25 = puVar18[4];
          pfVar30 = *(float **)(puVar15 + -0x2c8);
          if ((uVar25 & 0xff0000) != 0) {
            pfVar30 = *(float **)(puVar15 + -0x2b0);
          }
          pfVar33 = *(float **)(puVar15 + -0x2c0);
          if ((uVar25 & 0xff) == 0) {
            pfVar33 = pfVar30;
          }
          param_12 = *(float **)(puVar15 + -0x2b8);
          if ((uVar25 & 0xff00) == 0) {
            param_12 = pfVar33;
          }
          puVar51 = &UNK_0157f598;
          goto code_r0x0157f644;
        }
        if (uVar43 == uVar46) break;
        uVar44 = (ulong)*(uint *)(lVar32 + 0x18);
        lVar31 = lVar31 + 0x28;
        uVar46 = uVar46 + 1;
      }
    }
    return plVar16;
  }
  puVar51 = &Atlas_Gameplay_DebugVisualiser__CreateMeshProxy;
  auVar66 = func_0x00f78af4();
  uVar43 = 0;
code_r0x0157f644:
  *(ulong *)(puVar15 + -0x350) = unaff_d15;
  *(ulong *)(puVar15 + -0x348) = unaff_d14;
  *(ulong *)(puVar15 + -0x340) = unaff_d13;
  *(ulong *)(puVar15 + -0x338) = unaff_d12;
  *(ulong *)(puVar15 + -0x330) = unaff_d11;
  *(ulong *)(puVar15 + -0x328) = unaff_d10;
  *(ulong *)(puVar15 + -800) = uVar37;
  *(ulong *)(puVar15 + -0x318) = uVar49;
  *(undefined1 (*) [16])(puVar15 + -0x310) = auVar65;
  *(ulong *)(puVar15 + -0x300) = uVar25;
  *(long *)(puVar15 + -0x2f8) = lVar31;
  *(ulong *)(puVar15 + -0x2f0) = uVar43;
  *(undefined8 *)(puVar15 + -0x2e8) = 0x3eb5000;
  *(undefined1 **)(puVar15 + -0x2e0) = puVar15 + -0x230;
  *(undefined **)(puVar15 + -0x2d8) = puVar51;
  uVar21 = 0x3eb5000;
  pfVar33 = pfVar23;
  pfVar30 = pfVar34;
  if ((bRam0000000003eb509f & 1) == 0) {
    func_0x00f78a20(0x3d27140);
    bRam0000000003eb509f = 1;
  }
  if (pfVar23 == (float *)0x0) {
    puVar51 = &Atlas_Gameplay_DebugVisualiser__CreateMeshProxy;
    auVar67 = func_0x00f78af4();
    uVar11 = extraout_b0_15;
  }
  else {
    uVar21 = 0x3d27140;
    lVar17 = *(long *)pfVar23;
    uVar44 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar44 != 0) {
      piVar38 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar38 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar17 + (long)(*piVar38 + 1) * 0x10 + 0x138);
          param_7 = uVar13;
          goto code_r0x0157f6fc;
        }
        piVar38 = piVar38 + 4;
        uVar44 = uVar44 - 1;
      } while (uVar44 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(pfVar23,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,1);
    param_7 = uVar13;
code_r0x0157f6fc:
    (*(code *)*puVar18)(pfVar23,puVar18[1]);
    uVar49 = (ulong)CONCAT13(extraout_var_46,
                             CONCAT12(extraout_var_29,CONCAT11(extraout_var_12,extraout_b0_12)));
    uVar37 = (ulong)uVar14;
    unaff_d10 = (ulong)(uint)fVar58;
    lVar17 = *(long *)pfVar23;
    uVar44 = (ulong)*(ushort *)(lVar17 + 0x12a);
    param_6 = fVar58;
    uVar45 = uVar14;
    if (uVar44 != 0) {
      piVar38 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar38 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar17 + (long)(*piVar38 + 2) * 0x10 + 0x138);
          goto code_r0x0157f764;
        }
        piVar38 = piVar38 + 4;
        uVar44 = uVar44 - 1;
      } while (uVar44 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(pfVar23,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,2);
code_r0x0157f764:
    (*(code *)*puVar18)(pfVar23,puVar18[1]);
    uVar13 = CONCAT13(extraout_var_47,
                      CONCAT12(extraout_var_30,CONCAT11(extraout_var_13,extraout_b0_13)));
    unaff_d11 = (ulong)uVar13;
    unaff_d12 = (ulong)uVar45;
    unaff_d13 = (ulong)(uint)param_6;
    unaff_d14 = (ulong)param_7;
    lVar17 = *(long *)pfVar23;
    uVar44 = (ulong)*(ushort *)(lVar17 + 0x12a);
    fVar48 = param_6;
    uVar29 = uVar45;
    if (uVar44 != 0) {
      piVar38 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar38 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar17 + (long)(*piVar38 + 3) * 0x10 + 0x138);
          goto code_r0x0157f7d0;
        }
        piVar38 = piVar38 + 4;
        uVar44 = uVar44 - 1;
      } while (uVar44 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(pfVar23,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,3);
code_r0x0157f7d0:
    (*(code *)*puVar18)(pfVar23,puVar18[1]);
    *(uint *)(puVar15 + -0x35c) = uVar29;
    *(float *)(puVar15 + -0x358) = fVar48;
    *(uint *)(puVar15 + -0x360) =
         CONCAT13(extraout_var_48,CONCAT12(extraout_var_31,CONCAT11(extraout_var_14,extraout_b0_14))
                 );
    puVar51 = &UNK_0157f814;
    pfVar33 = pfVar34;
    pfVar30 = param_12;
    uVar11 = extraout_b0_12;
    auVar67 = auVar66;
  }
  *(ulong *)(puVar15 + -0x3e0) = unaff_d15;
  *(ulong *)(puVar15 + -0x3d8) = unaff_d14;
  *(ulong *)(puVar15 + -0x3d0) = unaff_d13;
  *(ulong *)(puVar15 + -0x3c8) = unaff_d12;
  *(ulong *)(puVar15 + -0x3c0) = unaff_d11;
  *(ulong *)(puVar15 + -0x3b8) = unaff_d10;
  *(ulong *)(puVar15 + -0x3b0) = uVar37;
  *(ulong *)(puVar15 + -0x3a8) = uVar49;
  *(undefined8 *)(puVar15 + -0x3a0) = uVar21;
  *(float **)(puVar15 + -0x398) = pfVar23;
  *(undefined1 (*) [16])(puVar15 + -0x390) = auVar66;
  *(float **)(puVar15 + -0x380) = pfVar34;
  *(float **)(puVar15 + -0x378) = param_12;
  *(undefined1 **)(puVar15 + -0x370) = puVar15 + -0x2e0;
  *(undefined **)(puVar15 + -0x368) = puVar51;
  puVar35 = puVar15 + -0x370;
  if ((bRam0000000003eb50a0 & 1) == 0) {
    func_0x00f78a20(0x3d57700);
    func_0x00f78a20(0x3d57708);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar44 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(pfVar30,0,0);
  if ((uVar44 & 1) != 0) {
    return (long *)0x0;
  }
  lVar17 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar17,pfVar33,0);
  if (lVar17 != 0) {
    *(float *)(puVar15 + -1000) = param_6;
    *(uint *)(puVar15 + -0x3e4) = param_7;
    lVar26 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar17,0);
    if (lVar26 != 0) {
      uVar59 = *(undefined4 *)(puVar15 + -0x35c);
      uVar64 = *(undefined4 *)(puVar15 + -0x358);
      uVar60 = *(undefined4 *)(puVar15 + -0x360);
      /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(uVar11,uVar14,fVar58,lVar26,0);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0((char)uVar13,uVar45,*(undefined4 *)(puVar15 + -1000),
                      *(undefined4 *)(puVar15 + -0x3e4),lVar26,0);
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0((char)uVar60,uVar59,uVar64,lVar26,0);
      lVar27 = *(long *)(auVar67._0_8_ + 0x58);
      if (lVar27 != 0) {
        uVar21 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar27,0);
        puVar51 = &UNK_0157f9c8;
        goto code_r0x03275ee0;
      }
    }
  }
  func_0x00f78af4();
  uVar21 = func_0x00f78b14();
  lVar27 = func_0x00f78ac0(uVar21,0);
  *(long *)(puVar15 + -0x420) = auVar67._0_8_;
  *(long *)(puVar15 + -0x418) = lVar17;
  *(long *)(puVar15 + -0x410) = auVar67._8_8_;
  *(float **)(puVar15 + -0x408) = pfVar30;
  *(undefined1 **)(puVar15 + -0x400) = puVar35;
  *(undefined **)(puVar15 + -0x3f8) = &Atlas_Gameplay_DebugVisualiser__CreateProxyGameObjectRoot;
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar17 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar17,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(lVar27 + 0x58) = lVar17;
  lVar26 = 0;
  if (lVar17 != 0) {
    lVar26 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar17,0);
    if ((*(long *)(lVar27 + 0x50) != 0) &&
       (uVar21 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar27 + 0x50),0), lVar26 != 0)) {
      puVar35 = *(undefined1 **)(puVar15 + -0x400);
      puVar51 = *(undefined **)(puVar15 + -0x3f8);
      pfVar30 = *(float **)(puVar15 + -0x408);
      auVar67._8_8_ = *(undefined8 *)(puVar15 + -0x410);
      auVar67._0_8_ = *(undefined8 *)(puVar15 + -0x420);
      lVar17 = *(long *)(puVar15 + -0x418);
code_r0x03275ee0:
      *(long *)(puVar15 + -0x420) = auVar67._0_8_;
      *(long *)(puVar15 + -0x418) = lVar17;
      *(long *)(puVar15 + -0x410) = auVar67._8_8_;
      *(float **)(puVar15 + -0x408) = pfVar30;
      *(undefined1 **)(puVar15 + -0x400) = puVar35;
      *(undefined **)(puVar15 + -0x3f8) = puVar51;
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar16 = (long *)(*pcRam0000000003ec1898)(lVar26,uVar21,0);
      return plVar16;
    }
  }
  lVar17 = func_0x00f78af4();
  *(undefined8 *)(puVar15 + -0x450) = 0x3d21b60;
  *(undefined8 *)(puVar15 + -0x448) = 0x3d71738;
  *(long *)(puVar15 + -0x440) = lVar26;
  *(long *)(puVar15 + -0x438) = lVar27;
  *(undefined1 **)(puVar15 + -0x430) = puVar15 + -0x400;
  *(undefined **)(puVar15 + -0x428) = &Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot;
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar21 = *(undefined8 *)(lVar17 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar16 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar21,0,0);
  if (((ulong)plVar16 & 1) == 0) {
    uVar21 = *(undefined8 *)(lVar17 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar16 = (long *)/*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar21,0);
    *(undefined8 *)(lVar17 + 0x58) = 0;
  }
  return plVar16;
code_r0x0157f1d8:
  if (uVar25 != 0) {
    uVar13 = *(uint *)(uVar25 + 0x18);
    if (0 < (int)uVar13) {
      uVar45 = 0;
      do {
        if ((uVar13 <= uVar45) || (uVar14 = uVar45 + 1, uVar13 <= uVar14)) goto code_r0x0157f274;
        lVar31 = uVar25 + 0x20;
        uVar59 = *(undefined4 *)(lVar31 + (long)(int)uVar45 * 4);
        *(undefined4 *)(lVar31 + (long)(int)uVar45 * 4) =
             *(undefined4 *)(lVar31 + (long)(int)uVar14 * 4);
        *(undefined4 *)(lVar31 + (long)(int)uVar14 * 4) = uVar59;
        uVar45 = uVar45 + 3;
      } while ((int)uVar45 < (int)uVar13);
    }
    goto code_r0x0157f280;
  }
  goto code_r0x0157f324;
}



// ============================================================
// RVA: 0x157deb8 | Atlas.Gameplay.DebugVisualiser.CacheSceneObjects
// ============================================================

/* WARNING: Possible PIC construction at 0x0157e0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e15c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e300: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e4b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e5d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157e760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157e6c4) */
/* WARNING: Removing unreachable block (ram,0x0157e6c8) */
/* WARNING: Removing unreachable block (ram,0x0157e6cc) */
/* WARNING: Removing unreachable block (ram,0x0157e6f0) */
/* WARNING: Removing unreachable block (ram,0x0157e6f8) */
/* WARNING: Removing unreachable block (ram,0x0157e6fc) */
/* WARNING: Removing unreachable block (ram,0x0157e710) */
/* WARNING: Removing unreachable block (ram,0x0157e644) */
/* WARNING: Removing unreachable block (ram,0x0157e648) */
/* WARNING: Removing unreachable block (ram,0x0157e5d4) */
/* WARNING: Removing unreachable block (ram,0x0157e5ec) */
/* WARNING: Removing unreachable block (ram,0x0157e5f4) */
/* WARNING: Removing unreachable block (ram,0x0157e5f8) */
/* WARNING: Removing unreachable block (ram,0x0157e60c) */
/* WARNING: Removing unreachable block (ram,0x0157e570) */
/* WARNING: Removing unreachable block (ram,0x0157e580) */
/* WARNING: Removing unreachable block (ram,0x0157e598) */
/* WARNING: Removing unreachable block (ram,0x0157e58c) */
/* WARNING: Removing unreachable block (ram,0x0157e5a0) */
/* WARNING: Removing unreachable block (ram,0x0157e594) */
/* WARNING: Removing unreachable block (ram,0x0157e528) */
/* WARNING: Removing unreachable block (ram,0x0157e4bc) */
/* WARNING: Removing unreachable block (ram,0x0157e67c) */
/* WARNING: Removing unreachable block (ram,0x0157e4c0) */
/* WARNING: Removing unreachable block (ram,0x0157e4c4) */
/* WARNING: Removing unreachable block (ram,0x0157e440) */
/* WARNING: Removing unreachable block (ram,0x0157e444) */
/* WARNING: Removing unreachable block (ram,0x0157e3d0) */
/* WARNING: Removing unreachable block (ram,0x0157e3e8) */
/* WARNING: Removing unreachable block (ram,0x0157e3f0) */
/* WARNING: Removing unreachable block (ram,0x0157e3f4) */
/* WARNING: Removing unreachable block (ram,0x0157e408) */
/* WARNING: Removing unreachable block (ram,0x0157e36c) */
/* WARNING: Removing unreachable block (ram,0x0157e37c) */
/* WARNING: Removing unreachable block (ram,0x0157e390) */
/* WARNING: Removing unreachable block (ram,0x0157e388) */
/* WARNING: Removing unreachable block (ram,0x0157e394) */
/* WARNING: Removing unreachable block (ram,0x0157e39c) */
/* WARNING: Removing unreachable block (ram,0x0157e304) */
/* WARNING: Removing unreachable block (ram,0x0157e474) */
/* WARNING: Removing unreachable block (ram,0x0157e308) */
/* WARNING: Removing unreachable block (ram,0x0157e30c) */
/* WARNING: Removing unreachable block (ram,0x0157e288) */
/* WARNING: Removing unreachable block (ram,0x0157e28c) */
/* WARNING: Removing unreachable block (ram,0x0157e214) */
/* WARNING: Removing unreachable block (ram,0x0157e22c) */
/* WARNING: Removing unreachable block (ram,0x0157e234) */
/* WARNING: Removing unreachable block (ram,0x0157e238) */
/* WARNING: Removing unreachable block (ram,0x0157e24c) */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */
/* WARNING: Removing unreachable block (ram,0x0157f814) */
/* WARNING: Removing unreachable block (ram,0x0157f598) */
/* WARNING: Removing unreachable block (ram,0x0157f5b0) */
/* WARNING: Removing unreachable block (ram,0x0157f5b8) */
/* WARNING: Removing unreachable block (ram,0x0157f5bc) */
/* WARNING: Removing unreachable block (ram,0x0157f5d0) */
/* WARNING: Removing unreachable block (ram,0x0157f5d4) */
/* WARNING: Removing unreachable block (ram,0x0157e8f8) */
/* WARNING: Removing unreachable block (ram,0x0157e1b0) */
/* WARNING: Removing unreachable block (ram,0x0157e1c0) */
/* WARNING: Removing unreachable block (ram,0x0157e1d8) */
/* WARNING: Removing unreachable block (ram,0x0157e1cc) */
/* WARNING: Removing unreachable block (ram,0x0157e1e0) */
/* WARNING: Removing unreachable block (ram,0x0157e1d4) */
/* WARNING: Removing unreachable block (ram,0x0157e160) */
/* WARNING: Removing unreachable block (ram,0x0157e2c0) */
/* WARNING: Removing unreachable block (ram,0x0157e164) */
/* WARNING: Removing unreachable block (ram,0x0157e168) */
/* WARNING: Removing unreachable block (ram,0x0157e0fc) */
/* WARNING: Removing unreachable block (ram,0x0157e100) */
/* WARNING: Removing unreachable block (ram,0x0157e108) */
/* WARNING: Removing unreachable block (ram,0x0157e764) */
/* WARNING: Removing unreachable block (ram,0x0157e774) */
/* WARNING: Removing unreachable block (ram,0x0157e788) */
/* WARNING: Removing unreachable block (ram,0x0157e780) */
/* WARNING: Removing unreachable block (ram,0x0157e78c) */
/* WARNING: Removing unreachable block (ram,0x0157e794) */
/* WARNING: Removing unreachable block (ram,0x0157e7bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_DebugVisualiser__CacheSceneObjects
                (undefined1 param_1 [16],ulong param_2,undefined1 param_3 [16],ulong param_4,
                ulong param_5,float param_6,uint param_7,float *param_8,float *param_9,
                float *param_10,float *param_11,float *param_12,undefined8 param_13)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined4 extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  float *extraout_x1_00;
  long extraout_x1_01;
  undefined8 extraout_x1_02;
  long extraout_x1_03;
  float *pfVar23;
  undefined8 *extraout_x8;
  ulong uVar24;
  long lVar25;
  int *piVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  float fVar31;
  uint uVar32;
  float *pfVar33;
  ulong uVar34;
  ulong uVar35;
  float *pfVar36;
  undefined8 uVar37;
  float *pfVar38;
  float *unaff_x27;
  long unaff_x28;
  undefined1 **ppuVar39;
  undefined *puVar40;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  uint uVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  undefined8 unaff_d8;
  undefined4 uVar45;
  undefined8 unaff_d9;
  ulong uVar46;
  ulong unaff_d10;
  float fVar47;
  float fVar48;
  ulong unaff_d11;
  float fVar49;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  float fVar50;
  undefined4 uVar51;
  ulong unaff_d15;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [8];
  float *pfStack_1d8;
  float *pfStack_1d0;
  float *pfStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  long lVar22;
  
  uVar44 = param_3._4_4_;
  fVar42 = param_3._0_4_;
  ppuVar4 = (undefined1 **)auStack_1e0;
  puVar5 = auStack_1e0;
  ppuVar39 = (undefined1 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb509a & 1) == 0) {
    func_0x00f78a20(0x3d3d030);
    func_0x00f78a20(0x3d3b268);
    func_0x00f78a20(0x3d3d038);
    func_0x00f78a20(0x3d3b270);
    func_0x00f78a20(0x3d5b058);
    func_0x00f78a20(0x3d5b060);
    func_0x00f78a20(0x3d5b068);
    func_0x00f78a20(0x3d5b070);
    func_0x00f78a20(0x3d5b088);
    func_0x00f78a20(0x3d5b078);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d27150);
    func_0x00f78a20(0x3d27148);
    bRam0000000003eb509a = 1;
  }
  pfVar36 = (float *)0x3d5b068;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  pfVar11 = (float *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b070);
  pfVar12 = (float *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b058);
  pfStack_1c8 = (float *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b078);
  pfVar13 = (float *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b060);
  pfVar14 = (float *)/*UnityEngine.Object$$FindObjectsOfType<SphereCollider>*/ func_0x018a64b0(uRam0000000003d5b068);
  uStack_1c0 = /*UnityEngine.Object$$FindObjectsOfType<Volume>*/ func_0x018a6574(1,uRam0000000003d5b088);
  pfVar38 = (float *)0x3d5b088;
  pfVar23 = pfVar36;
  if (*(long *)(param_8 + 0xe) == 0) {
LAB_0157e7f8:
    func_0x00f78af4();
    pfVar33 = pfVar38;
    pfVar36 = pfVar23;
LAB_0157e7fc:
    uVar17 = func_0x00f78b24();
    puVar40 = &Atlas_Gameplay_DebugVisualiser__IncludeGameObject;
    func_0x00f78ac0(uVar17,0);
    lVar16 = extraout_x1;
    if (extraout_x1 != 0) goto code_r0x0322efac;
    puStack_1e8 = &Atlas_Gameplay_DebugVisualiser__IncludeGameObject;
    puVar40 = &Atlas_Gameplay_DebugVisualiser__IgnoreCollider;
    puStack_1f0 = (undefined1 *)ppuVar39;
    func_0x00f78af4();
    ppuVar4 = &puStack_1f0;
    pfVar38 = extraout_x1_00;
    ppuVar39 = &puStack_1f0;
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_8 + 0xe),uRam0000000003d3b270);
    if (*(long *)(param_8 + 0x10) == 0) goto LAB_0157e7f8;
    pfVar33 = (float *)0x3d3d038;
    /*System.Collections.Generic.List<DebugVisualiser.Collider>$$Clear*/ func_0x025175f0(*(long *)(param_8 + 0x10),uRam0000000003d3d038);
    pfVar38 = (float *)0x3d3d038;
    pfVar23 = (float *)0x3d5b068;
    if ((*(long *)(param_8 + 0x12) == 0) ||
       (pfStack_1d0 = pfVar13,
       uVar15 = /*System.Collections.Generic.List<DebugVisualiser.Collider>$$Clear*/ func_0x025175f0(*(long *)(param_8 + 0x12),uRam0000000003d3d038),
       pfVar11 == (float *)0x0)) goto LAB_0157e7f8;
    fVar43 = pfVar11[6];
    if (0 < (int)fVar43) {
      pfVar33 = (float *)0x0;
      pfVar36 = (float *)0x3d3b268;
      do {
        fVar31 = SUB84(pfVar33,0);
        if ((uint)fVar43 <= (uint)fVar31) goto LAB_0157e7fc;
        unaff_x27 = *(float **)(pfVar11 + (long)(int)fVar31 * 2 + 8);
        pfVar38 = pfVar33;
        pfVar23 = (float *)0x3d3b268;
        if (unaff_x27 == (float *)0x0) goto LAB_0157e7f8;
        uVar15 = /*UnityEngine.Renderer$$get_enabled*/ func_0x0325baf4(unaff_x27,0);
        if ((int)uVar15 != 0) {
          lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x27,0);
          if (lVar16 == 0) goto LAB_0157e7f8;
          puVar40 = (undefined *)0x157e0fc;
          puVar5 = auStack_1e0;
          goto code_r0x0322efac;
        }
        pfVar33 = (float *)(ulong)((int)fVar31 + 1U);
        fVar43 = pfVar11[6];
      } while ((int)((int)fVar31 + 1U) < (int)fVar43);
    }
    pfVar38 = pfVar33;
    pfVar23 = pfVar36;
    pfStack_1d8 = pfVar14;
    if (pfVar12 == (float *)0x0) goto LAB_0157e7f8;
    pfVar36 = pfStack_1c8;
    if (0 < (int)*(ulong *)(pfVar12 + 6)) {
      pfVar13 = pfVar12 + 8;
      pfVar14 = (float *)0x0;
      if ((*(ulong *)(pfVar12 + 6) & 0xffffffff) == 0) goto LAB_0157e7fc;
      pfVar38 = *(float **)pfVar13;
      puVar40 = (undefined *)0x157e160;
      ppuVar4 = (undefined1 **)auStack_1e0;
      param_10 = param_9;
      pfVar11 = pfVar38;
      goto code_r0x0157e824;
    }
    pfVar23 = pfStack_1c8;
    if (pfStack_1c8 == (float *)0x0) goto LAB_0157e7f8;
    if (0 < (int)*(ulong *)(pfStack_1c8 + 6)) {
      pfVar13 = pfStack_1c8 + 8;
      pfVar14 = (float *)0x0;
      if ((*(ulong *)(pfStack_1c8 + 6) & 0xffffffff) == 0) goto LAB_0157e7fc;
      pfVar38 = *(float **)pfVar13;
      puVar40 = &UNK_0157e304;
      ppuVar4 = (undefined1 **)auStack_1e0;
      param_10 = param_9;
      pfVar12 = pfVar38;
      goto code_r0x0157e824;
    }
    unaff_x27 = pfStack_1d0;
    if (pfStack_1d0 == (float *)0x0) goto LAB_0157e7f8;
    if (0 < (int)*(ulong *)(pfStack_1d0 + 6)) {
      unaff_x28 = 0;
      pfVar14 = pfStack_1d0 + 8;
      if ((*(ulong *)(pfStack_1d0 + 6) & 0xffffffff) != 0) {
        pfVar38 = *(float **)pfVar14;
        puVar40 = &UNK_0157e4bc;
        ppuVar4 = (undefined1 **)auStack_1e0;
        param_10 = param_9;
        pfVar13 = pfVar38;
        goto code_r0x0157e824;
      }
      goto LAB_0157e7fc;
    }
    pfVar38 = pfVar14;
    if (pfVar14 == (float *)0x0) goto LAB_0157e7f8;
    if ((int)*(ulong *)(pfVar14 + 6) < 1) {
      return uVar15;
    }
    pfVar12 = (float *)0x0;
    pfVar11 = pfVar14 + 8;
    pfVar33 = pfVar14;
    if ((*(ulong *)(pfVar14 + 6) & 0xffffffff) == 0) goto LAB_0157e7fc;
    pfVar38 = *(float **)pfVar11;
    puVar40 = &UNK_0157e6c4;
    param_10 = param_9;
    pfVar36 = pfVar38;
  }
code_r0x0157e824:
  puVar5 = (undefined1 *)((long)ppuVar4 + -0x40);
  *(float **)((long)ppuVar4 + -0x40) = pfVar13;
  *(float **)((long)ppuVar4 + -0x38) = pfVar14;
  *(float **)((long)ppuVar4 + -0x30) = pfVar36;
  *(float **)((long)ppuVar4 + -0x28) = pfVar33;
  *(float **)((long)ppuVar4 + -0x20) = param_8;
  *(float **)((long)ppuVar4 + -0x18) = param_9;
  *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar39;
  *(undefined **)((long)ppuVar4 + -8) = puVar40;
  ppuVar39 = (undefined1 **)((long)ppuVar4 + -0x10);
  uVar17 = 0x3eb5000;
  pfVar23 = param_10;
  if ((bRam0000000003eb509c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509c = 1;
  }
  if ((param_10 != (float *)0x0) && (0 < (int)*(ulong *)(param_10 + 6))) {
    pfVar36 = (float *)0x0;
    pfVar33 = (float *)(*(ulong *)(param_10 + 6) & 0xffffffff);
    pfVar14 = param_10 + 8;
    pfVar13 = (float *)0x3d23990;
    do {
      if (pfVar33 <= pfVar36) {
        uVar37 = func_0x00f78b24();
        func_0x00f78ac0(uVar37,0);
        goto code_r0x0157e92c;
      }
      uVar17 = *(undefined8 *)(pfVar14 + (long)pfVar36 * 2);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pfVar23 = (float *)0x0;
      uVar15 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(pfVar38,uVar17);
      if ((uVar15 & 1) != 0) {
        return 0;
      }
      pfVar36 = (float *)((long)pfVar36 + 1);
      pfVar33 = (float *)(ulong)(uint)param_10[6];
    } while ((long)pfVar36 < (long)(int)param_10[6]);
  }
  if (pfVar38 != (float *)0x0) {
    iVar8 = /*UnityEngine.Collider$$get_enabled*/ func_0x0329e914(pfVar38,0);
    if (iVar8 == 0) {
      return 1;
    }
    lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(pfVar38,0);
    if (lVar16 != 0) {
      puVar40 = &UNK_0157e8f8;
      param_9 = pfVar38;
      param_8 = param_10;
code_r0x0322efac:
      *(float **)(puVar5 + -0x20) = param_8;
      *(float **)(puVar5 + -0x18) = param_9;
      *(undefined1 ***)(puVar5 + -0x10) = ppuVar39;
      *(undefined **)(puVar5 + -8) = puVar40;
      if (pcRam0000000003ebf4d0 == (code *)0x0) {
        pcRam0000000003ebf4d0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeInHierarchy()");
      }
                    /* WARNING: Could not recover jumptable at 0x0322efe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar15 = (*pcRam0000000003ebf4d0)(lVar16);
      return uVar15;
    }
  }
code_r0x0157e92c:
  func_0x00f78af4();
  *(float **)((long)ppuVar4 + -0x90) = pfVar11;
  *(float **)((long)ppuVar4 + -0x88) = pfVar12;
  *(float **)((long)ppuVar4 + -0x80) = pfVar13;
  *(float **)((long)ppuVar4 + -0x78) = pfVar14;
  *(float **)((long)ppuVar4 + -0x70) = pfVar36;
  *(undefined8 *)((long)ppuVar4 + -0x68) = uVar17;
  *(float **)((long)ppuVar4 + -0x60) = param_10;
  *(float **)((long)ppuVar4 + -0x58) = pfVar38;
  *(undefined1 ***)((long)ppuVar4 + -0x50) = ppuVar39;
  *(undefined **)((long)ppuVar4 + -0x48) = &Atlas_Gameplay_DebugVisualiser__CreateCollider;
  uVar15 = 0x3eb5000;
  pfVar14 = pfVar23;
  pfVar36 = param_11;
  if ((bRam0000000003eb50a4 & 1) == 0) {
    func_0x00f78a20(0x3d53750);
    func_0x00f78a20(0x3d27140);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d27150);
    bRam0000000003eb50a4 = 1;
  }
  *(undefined8 *)((long)ppuVar4 + -0x98) = 0;
  if ((extraout_x1_01 != 0) &&
     (pfVar14 = pfRam0000000003d53750,
     /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(extraout_x1_01,(undefined1 *)((long)ppuVar4 + -0x98)), param_11 != (float *)0x0
     )) {
    lVar16 = *(long *)param_11;
    uVar15 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar15 != 0) {
      piVar26 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar16 + (long)*piVar26 * 0x10 + 0x138);
          goto code_r0x0157ea20;
        }
        piVar26 = piVar26 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(param_11,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,0);
code_r0x0157ea20:
    uVar17 = (*(code *)*puVar18)(param_11,puVar18[1]);
    uVar7 = /*UnityEngine.Collider$$get_isTrigger*/ func_0x0329e9e4(extraout_x1_01,0);
    uVar37 = *(undefined8 *)((long)ppuVar4 + -0x98);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar37,0,0);
    if (*(byte *)(*(long *)param_11 + 300) < *(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300)) {
      bVar6 = false;
    }
    else {
      bVar6 = *(long *)(*(long *)(*(long *)param_11 + 200) +
                        (ulong)*(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300) * 8 + -8) ==
              /*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150;
    }
    *extraout_x8 = pfVar23;
    extraout_x8[1] = param_11;
    extraout_x8[2] = 0;
    extraout_x8[3] = uVar17;
    *(undefined1 *)(extraout_x8 + 4) = uVar7;
    *(char *)((long)extraout_x8 + 0x21) = (char)uVar15;
    *(bool *)((long)extraout_x8 + 0x22) = bVar6;
    *(undefined4 *)((long)extraout_x8 + 0x23) = 0;
    *(undefined1 *)((long)extraout_x8 + 0x27) = 0;
    return uVar15;
  }
  func_0x00f78af4();
  *(float **)((long)ppuVar4 + -0xe0) = pfVar13;
  *(undefined8 *)((long)ppuVar4 + -0xd8) = 0x3eb5000;
  *(long *)((long)ppuVar4 + -0xd0) = extraout_x1_01;
  *(float **)((long)ppuVar4 + -200) = pfVar23;
  *(float **)((long)ppuVar4 + -0xc0) = param_11;
  *(undefined8 **)((long)ppuVar4 + -0xb8) = extraout_x8;
  *(undefined1 **)((long)ppuVar4 + -0xb0) = (undefined1 *)((long)ppuVar4 + -0x50);
  *(undefined **)((long)ppuVar4 + -0xa8) = &Atlas_Gameplay_DebugVisualiser__GetReplicator;
  uVar34 = 0x3eb5000;
  pfVar38 = pfVar14;
  if ((bRam0000000003eb509b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509b = 1;
  }
  lVar16 = extraout_x1_01;
  if (pfVar14 != (float *)0x0) {
    fVar43 = pfVar14[6];
    if (0 < (int)fVar43) {
      uVar15 = 0;
      pfVar13 = (float *)0x3d23990;
      do {
        fVar31 = (float)uVar15;
        if ((uint)fVar43 <= (uint)fVar31) {
          uVar17 = func_0x00f78b24();
          func_0x00f78ac0(uVar17,0);
          goto code_r0x0157ebb8;
        }
        uVar34 = *(ulong *)(pfVar14 + (long)(int)fVar31 * 2 + 8);
        if (uVar34 == 0) goto code_r0x0157ebb8;
        lVar16 = *(long *)(uVar34 + 0x38);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pfVar38 = (float *)0x0;
        uVar15 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar16,extraout_x1_02);
        if ((uVar15 & 1) != 0) {
          return uVar34;
        }
        uVar15 = (ulong)((int)fVar31 + 1U);
        fVar43 = pfVar14[6];
      } while ((int)((int)fVar31 + 1U) < (int)fVar43);
    }
    return 0;
  }
code_r0x0157ebb8:
  uVar9 = func_0x00f78af4();
  *(ulong *)((long)ppuVar4 + -0x180) = unaff_d15;
  *(ulong *)((long)ppuVar4 + -0x178) = unaff_d14;
  *(ulong *)((long)ppuVar4 + -0x170) = unaff_d13;
  *(ulong *)((long)ppuVar4 + -0x168) = unaff_d12;
  *(ulong *)((long)ppuVar4 + -0x160) = unaff_d11;
  *(ulong *)((long)ppuVar4 + -0x158) = unaff_d10;
  *(undefined8 *)((long)ppuVar4 + -0x150) = unaff_d9;
  *(undefined8 *)((long)ppuVar4 + -0x148) = unaff_d8;
  *(long *)((long)ppuVar4 + -0x140) = unaff_x28;
  *(float **)((long)ppuVar4 + -0x138) = unaff_x27;
  *(float **)((long)ppuVar4 + -0x130) = pfVar11;
  *(float **)((long)ppuVar4 + -0x128) = pfVar12;
  *(float **)((long)ppuVar4 + -0x120) = pfVar13;
  *(ulong *)((long)ppuVar4 + -0x118) = uVar15;
  *(long *)((long)ppuVar4 + -0x110) = lVar16;
  *(ulong *)((long)ppuVar4 + -0x108) = uVar34;
  *(undefined8 *)((long)ppuVar4 + -0x100) = extraout_x1_02;
  *(float **)((long)ppuVar4 + -0xf8) = pfVar14;
  *(undefined1 **)((long)ppuVar4 + -0xf0) = (undefined1 *)((long)ppuVar4 + -0xb0);
  *(undefined **)((long)ppuVar4 + -0xe8) = &Atlas_Gameplay_DebugVisualiser__CreateCapsuleMesh;
  *(undefined4 *)((long)ppuVar4 + -0x1b4) = extraout_w1;
  fVar43 = (float)param_5;
  uVar34 = param_5 & 0xffffffff;
  *(ulong *)((long)ppuVar4 + -0x1b0) = param_4;
  *(ulong *)((long)ppuVar4 + -0x1a0) = CONCAT44(uVar44,fVar42);
  fVar31 = (float)param_2;
  uVar46 = param_2 & 0xffffffff;
  *(uint *)((long)ppuVar4 + -400) =
       CONCAT13(extraout_var_13,CONCAT12(extraout_var_06,CONCAT11(extraout_var,extraout_b0)));
  uVar15 = 0x3d1f3d8;
  if ((bRam0000000003eb50a6 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d1f3d8);
    func_0x00f78a20(0x3d1f5e0);
    func_0x00f78a20(0x3d715a8);
    bRam0000000003eb50a6 = 1;
  }
  uVar9 = (uVar9 & 1) + uVar9;
  pfVar14 = (float *)(ulong)uVar9;
  uVar35 = (ulong)(uVar9 + 1);
  uVar19 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar35);
  lVar16 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar35);
  lVar20 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar35);
  *(ulong *)((long)ppuVar4 + -0x188) = uVar35;
  lVar21 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar35);
  fVar48 = _UNK_033f850c;
  *(uint *)((long)ppuVar4 + -0x18c) = uVar9;
  if (uVar9 < 0x7fffffff) {
    if (uVar19 == 0) goto code_r0x0157f324;
    pfVar14 = (float *)0x0;
    fVar49 = 360.0 / (float)*(int *)((long)ppuVar4 + -0x18c);
    unaff_d12 = (ulong)(uint)fVar49;
    param_2 = 0x43340000;
    unaff_x27 = (float *)(ulong)*(uint *)(uVar19 + 0x18);
    unaff_x28 = uVar19 + 0x20;
    uVar15 = lVar16 + 0x20;
    pfVar11 = (float *)(lVar20 + 0x20);
    unaff_d13 = (ulong)(uint)_UNK_033f850c;
    uVar35 = lVar21 + 0x20;
    unaff_d14 = 0;
    fVar50 = 180.0 / (float)*(int *)((long)ppuVar4 + -0x18c);
    unaff_d15 = (ulong)(uint)fVar50;
    unaff_d10 = 0;
    do {
      if (unaff_x27 == pfVar14) goto code_r0x0157f274;
      ___sincosf_stret(SUB41((float)unaff_d14 * fVar48,0));
      *(uint *)(unaff_x28 + (long)pfVar14 * 4) =
           CONCAT13(extraout_var_14,
                    CONCAT12(extraout_var_07,CONCAT11(extraout_var_00,extraout_b0_00)));
      if (lVar16 == 0) goto code_r0x0157f324;
      if ((float *)(ulong)*(uint *)(lVar16 + 0x18) <= pfVar14) goto code_r0x0157f274;
      *(int *)(uVar15 + (long)pfVar14 * 4) = (int)param_2;
      fVar47 = (float)unaff_d10 * fVar48;
      unaff_d11 = (ulong)(uint)fVar47;
      uVar7 = SUB41(fVar47,0);
      _cosf(uVar7);
      if (lVar20 == 0) goto code_r0x0157f324;
      if ((float *)(ulong)*(uint *)(lVar20 + 0x18) <= pfVar14) goto code_r0x0157f274;
      pfVar11[(long)pfVar14] =
           (float)CONCAT13(extraout_var_15,
                           CONCAT12(extraout_var_08,CONCAT11(extraout_var_01,extraout_b0_01)));
      _sinf(uVar7);
      if (lVar21 == 0) goto code_r0x0157f324;
      if ((float *)(ulong)*(uint *)(lVar21 + 0x18) <= pfVar14) goto code_r0x0157f274;
      *(uint *)(uVar35 + (long)pfVar14 * 4) =
           CONCAT13(extraout_var_16,
                    CONCAT12(extraout_var_09,CONCAT11(extraout_var_02,extraout_b0_02)));
      unaff_d14 = (ulong)(uint)(fVar49 + (float)unaff_d14);
      unaff_d10 = (ulong)(uint)(fVar50 + (float)unaff_d10);
      pfVar14 = (float *)((long)pfVar14 + 1);
    } while (*(float **)((long)ppuVar4 + -0x188) != pfVar14);
  }
  uVar9 = *(uint *)((long)ppuVar4 + -0x18c);
  uVar15 = (ulong)uVar9;
  uVar35 = *(ulong *)((long)ppuVar4 + -0x188);
  uVar32 = (uint)uVar35;
  pfVar14 = (float *)func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,(uVar9 + 2) * uVar32);
  param_2 = 0x3f000000;
  fVar48 = (*(float *)((long)ppuVar4 + -400) - (fVar31 + fVar31)) * 0.5;
  fVar42 = 0.0;
  if (fVar48 <= 0.0) {
    fVar48 = 0.0;
  }
  unaff_d11 = (ulong)(uint)fVar48;
  unaff_d10 = (ulong)(uint)((float)(int)uVar32 * 0.5);
  uVar7 = SUB41((float)(int)uVar32 * 0.5,0);
  uVar10 = /*UnityEngine.Mathf$$CeilToInt*/ func_0x0323d108(uVar7,0);
  if ((int)uVar10 < 1) {
    unaff_x27 = (float *)0x0;
  }
  else {
    uVar24 = 0;
    unaff_x27 = (float *)0x0;
    uVar41 = uVar32;
    if ((int)uVar32 < 2) {
      uVar41 = 1;
    }
    do {
      if (uVar9 < 0x7fffffff) {
        if (uVar19 == 0) goto code_r0x0157f324;
        uVar30 = 0;
        do {
          if (*(uint *)(uVar19 + 0x18) <= uVar30) goto code_r0x0157f274;
          if (lVar21 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar21 + 0x18) <= uVar24) goto code_r0x0157f274;
          if (lVar20 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar20 + 0x18) <= uVar24) goto code_r0x0157f274;
          if (lVar16 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar16 + 0x18) <= uVar30) goto code_r0x0157f274;
          if (pfVar14 == (float *)0x0) goto code_r0x0157f324;
          fVar49 = (float)((int)unaff_x27 + (int)uVar30);
          pfVar38 = (float *)(ulong)(uint)pfVar14[6];
          if ((uint)pfVar14[6] <= (uint)fVar49) goto code_r0x0157f274;
          fVar50 = *(float *)(lVar21 + uVar24 * 4 + 0x20);
          fVar42 = *(float *)(lVar20 + uVar24 * 4 + 0x20);
          fVar47 = *(float *)(uVar19 + 0x20 + uVar30 * 4) * fVar50 * fVar31;
          param_4 = (ulong)(uint)fVar47;
          fVar50 = fVar50 * *(float *)(lVar16 + 0x20 + uVar30 * 4) * fVar31;
          param_2 = (ulong)(uint)fVar50;
          pfVar38 = pfVar14 + (long)(int)fVar49 * 3 + 9;
          *pfVar38 = fVar42 * fVar31;
          pfVar14[(long)(int)fVar49 * 3 + 8] = fVar47;
          pfVar14[(long)(int)fVar49 * 3 + 10] = fVar50;
          pfVar36 = (float *)(ulong)(uint)pfVar14[6];
          if ((uint)pfVar14[6] <= (uint)fVar49) goto code_r0x0157f274;
          *pfVar38 = fVar48 + fVar42 * fVar31;
          uVar30 = uVar30 + 1;
        } while (uVar41 != uVar30);
        unaff_x27 = (float *)(ulong)(uint)((int)unaff_x27 + (int)uVar30);
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar10);
  }
  iVar8 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(uVar7,0);
  if (iVar8 < (int)uVar32) {
    uVar10 = uVar32;
    if ((int)uVar32 < 2) {
      uVar10 = 1;
    }
    lVar25 = (long)iVar8;
    do {
      if (uVar9 < 0x7fffffff) {
        if (uVar19 == 0) goto code_r0x0157f324;
        uVar24 = 0;
        do {
          if (*(uint *)(uVar19 + 0x18) <= uVar24) goto code_r0x0157f274;
          if (lVar21 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar21 + 0x18) <= (uint)lVar25) goto code_r0x0157f274;
          if (lVar20 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar20 + 0x18) <= (uint)lVar25) goto code_r0x0157f274;
          if (lVar16 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar16 + 0x18) <= uVar24) goto code_r0x0157f274;
          if (pfVar14 == (float *)0x0) goto code_r0x0157f324;
          fVar49 = (float)((int)unaff_x27 + (int)uVar24);
          pfVar38 = (float *)(ulong)(uint)pfVar14[6];
          if ((uint)pfVar14[6] <= (uint)fVar49) goto code_r0x0157f274;
          fVar50 = *(float *)(lVar21 + lVar25 * 4 + 0x20);
          fVar42 = *(float *)(lVar20 + lVar25 * 4 + 0x20);
          fVar47 = *(float *)(uVar19 + 0x20 + uVar24 * 4) * fVar50 * fVar31;
          param_4 = (ulong)(uint)fVar47;
          fVar50 = fVar50 * *(float *)(lVar16 + 0x20 + uVar24 * 4) * fVar31;
          param_2 = (ulong)(uint)fVar50;
          pfVar38 = pfVar14 + (long)(int)fVar49 * 3 + 9;
          *pfVar38 = fVar42 * fVar31;
          pfVar14[(long)(int)fVar49 * 3 + 8] = fVar47;
          pfVar14[(long)(int)fVar49 * 3 + 10] = fVar50;
          pfVar36 = (float *)(ulong)(uint)pfVar14[6];
          if ((uint)pfVar14[6] <= (uint)fVar49) goto code_r0x0157f274;
          *pfVar38 = fVar42 * fVar31 - fVar48;
          uVar24 = uVar24 + 1;
        } while (uVar10 != uVar24);
        unaff_x27 = (float *)(ulong)(uint)((int)unaff_x27 + (int)uVar24);
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 != (int)uVar32);
  }
  uVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar9 * uVar32 * 6);
  param_5 = *(ulong *)((long)ppuVar4 + -0x1b0);
  param_4 = *(ulong *)((long)ppuVar4 + -0x1a0);
  if (uVar9 < 0x7fffffff) {
    uVar41 = 0;
    uVar10 = 0;
    uVar1 = uVar9;
    if ((int)uVar9 < 2) {
      uVar1 = 1;
    }
    do {
      if (uVar9 != 0) {
        if (uVar19 == 0) goto code_r0x0157f324;
        iVar8 = uVar41 * uVar32;
        iVar27 = (uVar41 + 1) * uVar32;
        uVar2 = *(uint *)(uVar19 + 0x18);
        uVar28 = uVar1;
        do {
          uVar29 = uVar10;
          if (uVar2 <= uVar29) goto code_r0x0157f274;
          *(int *)(uVar19 + (long)(int)uVar29 * 4 + 0x20) = iVar8;
          if ((uVar2 <= uVar29 + 1) ||
             (*(int *)(uVar19 + (long)(int)(uVar29 + 1) * 4 + 0x20) = iVar27, uVar2 <= uVar29 + 2))
          goto code_r0x0157f274;
          *(int *)(uVar19 + (long)(int)(uVar29 + 2) * 4 + 0x20) = iVar27 + 1;
          if ((uVar2 <= uVar29 + 3) ||
             ((*(int *)(uVar19 + (long)(int)(uVar29 + 3) * 4 + 0x20) = iVar8 + 1,
              uVar2 <= uVar29 + 4 ||
              (*(int *)(uVar19 + (long)(int)(uVar29 + 4) * 4 + 0x20) = iVar8, uVar2 <= uVar29 + 5)))
             ) goto code_r0x0157f274;
          *(int *)(uVar19 + (long)(int)(uVar29 + 5) * 4 + 0x20) = iVar27 + 1;
          iVar8 = iVar8 + 1;
          iVar27 = iVar27 + 1;
          uVar28 = uVar28 - 1;
          uVar10 = uVar29 + 6;
        } while (uVar28 != 0);
        uVar10 = uVar29 + 6;
      }
      uVar41 = uVar41 + 1;
    } while (uVar41 != uVar32);
  }
  if (pfVar14 != (float *)0x0) {
    uVar24 = *(ulong *)(pfVar14 + 6) & 0xffffffff;
    iVar8 = *(int *)((long)ppuVar4 + -0x1b4);
    fVar31 = (float)param_4;
    fVar48 = (float)param_5;
    iVar27 = (int)*(ulong *)(pfVar14 + 6);
    if (iVar8 == 0) {
      if (0 < iVar27) {
        if (uVar24 != 0) {
          uVar30 = 0;
          pfVar13 = pfVar14 + 10;
          do {
            fVar49 = pfVar13[-2];
            param_2 = (ulong)(uint)(fVar31 + pfVar13[-1]);
            fVar42 = fVar43 + *pfVar13;
            pfVar13[-2] = fVar31 + pfVar13[-1];
            pfVar13[-1] = fVar48 + fVar49;
            *pfVar13 = fVar42;
            if (uVar24 - 1 == uVar30) goto code_r0x0157f1d8;
            uVar30 = uVar30 + 1;
            pfVar13 = pfVar13 + 3;
          } while (uVar30 < (uint)pfVar14[6]);
        }
        goto code_r0x0157f274;
      }
    }
    else if (iVar8 == 1) {
      if (0 < iVar27) {
        if (uVar24 != 0) {
          uVar15 = 0;
          param_4 = CONCAT44(fVar48,fVar31);
          pfVar13 = pfVar14 + 10;
          do {
            param_2 = CONCAT44(fVar48 + (float)((ulong)*(long *)(pfVar13 + -2) >> 0x20),
                               fVar31 + (float)*(long *)(pfVar13 + -2));
            *(ulong *)(pfVar13 + -2) = param_2;
            *pfVar13 = fVar43 + *pfVar13;
            if (uVar24 - 1 == uVar15) goto code_r0x0157f280;
            uVar15 = uVar15 + 1;
            pfVar13 = pfVar13 + 3;
          } while (uVar15 < (uint)pfVar14[6]);
        }
        goto code_r0x0157f274;
      }
    }
    else if ((iVar8 == 2) && (0 < iVar27)) {
      if (uVar24 != 0) {
        uVar30 = 0;
        pfVar13 = pfVar14 + 10;
        do {
          fVar49 = pfVar13[-1];
          fVar42 = fVar48 + *pfVar13;
          param_2 = (ulong)(uint)(fVar43 + fVar49);
          pfVar13[-2] = fVar31 + pfVar13[-2];
          pfVar13[-1] = fVar42;
          *pfVar13 = fVar43 + fVar49;
          if (uVar24 - 1 == uVar30) goto code_r0x0157f1d8;
          uVar30 = uVar30 + 1;
          pfVar13 = pfVar13 + 3;
        } while (uVar30 < (uint)pfVar14[6]);
      }
code_r0x0157f274:
      uVar17 = func_0x00f78b24();
      func_0x00f78ac0(uVar17,0);
    }
code_r0x0157f280:
    uVar24 = func_0x00f78aec(/*UnityEngine.Mesh_TypeInfo*/ uRam0000000003d23388);
    /*UnityEngine.Mesh$$.ctor*/ func_0x0323f420(uVar24,0);
    uVar15 = 0;
    if (uVar24 != 0) {
      /*UnityEngine.Object$$set_name*/ func_0x03248994(uVar24,/*STR('ProceduralCapsule')*/ uRam0000000003d715a8,0);
      /*UnityEngine.Mesh$$set_vertices*/ func_0x03241d34(uVar24,pfVar14,0);
      /*UnityEngine.Mesh$$set_triangles*/ func_0x032448a4(uVar24,uVar19,0);
      /*UnityEngine.Mesh$$Optimize*/ func_0x032470b4(uVar24,0);
      /*UnityEngine.Mesh$$RecalculateBounds*/ func_0x03246a70(uVar24,0);
      return uVar24;
    }
  }
code_r0x0157f324:
  func_0x00f78af4();
  *(long *)((long)ppuVar4 + -0x200) = lVar20;
  *(long *)((long)ppuVar4 + -0x1f8) = lVar16;
  *(ulong *)((long)ppuVar4 + -0x1f0) = uVar19;
  *(ulong *)((long)ppuVar4 + -0x1e8) = uVar35;
  *(ulong *)((long)ppuVar4 + -0x1e0) = uVar15;
  *(float **)((long)ppuVar4 + -0x1d8) = pfVar14;
  *(undefined1 **)((long)ppuVar4 + -0x1d0) = (undefined1 *)((long)ppuVar4 + -0xf0);
  *(undefined **)((long)ppuVar4 + -0x1c8) =
       &Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility;
  lVar25 = 0x3eb5000;
  pfVar14 = pfVar38;
  if ((bRam0000000003eb509d & 1) == 0) {
    func_0x00f78a20(0x3d32a28);
    func_0x00f78a20(0x3d32a30);
    func_0x00f78a20(0x3d32a38);
    func_0x00f78a20(0x3d3b278);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509d = 1;
  }
  *(undefined8 *)((long)ppuVar4 + -0x218) = 0;
  *(undefined8 *)((long)ppuVar4 + -0x210) = 0;
  *(undefined8 *)((long)ppuVar4 + -0x208) = 0;
  if (extraout_x1_03 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)ppuVar4 + -0x218),extraout_x1_03,uRam0000000003d3b278);
    while( true ) {
      do {
        uVar15 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)ppuVar4 + -0x218),uRam0000000003d32a30);
        if ((uVar15 & 1) == 0) {
          uVar15 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)ppuVar4 + -0x218),uRam0000000003d32a28);
          return uVar15;
        }
        lVar16 = *(long *)((long)ppuVar4 + -0x208);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar15 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar16,0,0);
      } while ((uVar15 & 1) != 0);
      if (lVar16 == 0) break;
      /*UnityEngine.Renderer$$set_forceRenderingOff*/ func_0x0325bc24(lVar16,(uint)pfVar38 ^ 1,0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x157f45c);
    (*pcVar3)();
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    puVar18 = (undefined8 *)___cxa_begin_catch();
    pfVar38 = (float *)*puVar18;
    ___cxa_end_catch();
    uVar15 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)ppuVar4 + -0x218),uRam0000000003eb5000);
    if (pfVar38 == (float *)0x0) {
      return uVar15;
    }
    func_0x00f78ac0(pfVar38,0);
  }
  auVar52 = __Unwind_Resume();
  lVar22 = auVar52._8_8_;
  *(long *)((long)ppuVar4 + -0x280) = unaff_x28;
  *(float **)((long)ppuVar4 + -0x278) = unaff_x27;
  *(float **)((long)ppuVar4 + -0x270) = pfVar11;
  *(long *)((long)ppuVar4 + -0x268) = lVar21;
  *(long *)((long)ppuVar4 + -0x260) = lVar20;
  *(long *)((long)ppuVar4 + -600) = lVar16;
  *(ulong *)((long)ppuVar4 + -0x250) = uVar19;
  *(undefined8 *)((long)ppuVar4 + -0x248) = 0x3eb5000;
  *(undefined8 *)((long)ppuVar4 + -0x240) = 0;
  *(float **)((long)ppuVar4 + -0x238) = pfVar38;
  *(undefined1 **)((long)ppuVar4 + -0x230) = (undefined1 *)((long)ppuVar4 + -0x1d0);
  *(undefined **)((long)ppuVar4 + -0x228) =
       &Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals;
  *(float **)((long)ppuVar4 + -0x2b8) = param_12;
  *(undefined8 *)((long)ppuVar4 + -0x2b0) = param_13;
  *(float **)((long)ppuVar4 + -0x2c8) = pfVar14;
  *(float **)((long)ppuVar4 + -0x2c0) = pfVar36;
  uVar15 = auVar52._0_8_;
  if ((bRam0000000003eb509e & 1) == 0) {
    func_0x00f78a20(0x3d3d050);
    func_0x00f78a20(0x3d3d058);
    func_0x00f78a20(0x3d3d060);
    uVar15 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb509e = 1;
  }
  uVar10 = (uint)param_2;
  uVar9 = (uint)param_4;
  uVar32 = (uint)param_5;
  if (lVar22 != 0) {
    uVar35 = (ulong)*(uint *)(lVar22 + 0x18);
    if (0 < (int)*(uint *)(lVar22 + 0x18)) {
      uVar19 = 0;
      uVar24 = uVar35 - 1;
      lVar25 = 0x20;
      while( true ) {
        if (uVar35 <= uVar19) {
          uVar15 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar10 = (uint)param_2;
        uVar9 = (uint)param_4;
        uVar32 = (uint)param_5;
        puVar18 = (undefined8 *)(*(long *)(lVar22 + 0x10) + lVar25);
        pfVar14 = (float *)puVar18[1];
        if (pfVar14 != (float *)0x0) {
          auVar53._8_8_ = *puVar18;
          auVar53._0_8_ = auVar52._0_8_;
          pfVar36 = (float *)puVar18[3];
          uVar19 = puVar18[4];
          pfVar13 = *(float **)((long)ppuVar4 + -0x2c8);
          if ((uVar19 & 0xff0000) != 0) {
            pfVar13 = *(float **)((long)ppuVar4 + -0x2b0);
          }
          pfVar11 = *(float **)((long)ppuVar4 + -0x2c0);
          if ((uVar19 & 0xff) == 0) {
            pfVar11 = pfVar13;
          }
          param_12 = *(float **)((long)ppuVar4 + -0x2b8);
          if ((uVar19 & 0xff00) == 0) {
            param_12 = pfVar11;
          }
          puVar40 = &UNK_0157f598;
          goto code_r0x0157f644;
        }
        if (uVar24 == uVar19) break;
        uVar35 = (ulong)*(uint *)(lVar22 + 0x18);
        lVar25 = lVar25 + 0x28;
        uVar19 = uVar19 + 1;
      }
    }
    return uVar15;
  }
  puVar40 = &Atlas_Gameplay_DebugVisualiser__CreateMeshProxy;
  auVar53 = func_0x00f78af4();
  uVar24 = 0;
code_r0x0157f644:
  *(ulong *)((long)ppuVar4 + -0x350) = unaff_d15;
  *(ulong *)((long)ppuVar4 + -0x348) = unaff_d14;
  *(ulong *)((long)ppuVar4 + -0x340) = unaff_d13;
  *(ulong *)((long)ppuVar4 + -0x338) = unaff_d12;
  *(ulong *)((long)ppuVar4 + -0x330) = unaff_d11;
  *(ulong *)((long)ppuVar4 + -0x328) = unaff_d10;
  *(ulong *)((long)ppuVar4 + -800) = uVar46;
  *(ulong *)((long)ppuVar4 + -0x318) = uVar34;
  *(undefined1 (*) [16])((long)ppuVar4 + -0x310) = auVar52;
  *(ulong *)((long)ppuVar4 + -0x300) = uVar19;
  *(long *)((long)ppuVar4 + -0x2f8) = lVar25;
  *(ulong *)((long)ppuVar4 + -0x2f0) = uVar24;
  *(undefined8 *)((long)ppuVar4 + -0x2e8) = 0x3eb5000;
  *(undefined1 **)((long)ppuVar4 + -0x2e0) = (undefined1 *)((long)ppuVar4 + -0x230);
  *(undefined **)((long)ppuVar4 + -0x2d8) = puVar40;
  uVar17 = 0x3eb5000;
  pfVar11 = pfVar14;
  pfVar13 = pfVar36;
  if ((bRam0000000003eb509f & 1) == 0) {
    func_0x00f78a20(0x3d27140);
    bRam0000000003eb509f = 1;
  }
  if (pfVar14 == (float *)0x0) {
    puVar40 = &Atlas_Gameplay_DebugVisualiser__CreateMeshProxy;
    auVar52 = func_0x00f78af4();
    uVar7 = extraout_b0_06;
  }
  else {
    uVar17 = 0x3d27140;
    lVar16 = *(long *)pfVar14;
    uVar15 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar15 != 0) {
      piVar26 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar16 + (long)(*piVar26 + 1) * 0x10 + 0x138);
          param_7 = uVar9;
          goto code_r0x0157f6fc;
        }
        piVar26 = piVar26 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(pfVar14,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,1);
    param_7 = uVar9;
code_r0x0157f6fc:
    (*(code *)*puVar18)(pfVar14,puVar18[1]);
    uVar34 = (ulong)CONCAT13(extraout_var_17,
                             CONCAT12(extraout_var_10,CONCAT11(extraout_var_03,extraout_b0_03)));
    uVar46 = (ulong)uVar10;
    unaff_d10 = (ulong)(uint)fVar42;
    lVar16 = *(long *)pfVar14;
    uVar15 = (ulong)*(ushort *)(lVar16 + 0x12a);
    param_6 = fVar42;
    uVar32 = uVar10;
    if (uVar15 != 0) {
      piVar26 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar16 + (long)(*piVar26 + 2) * 0x10 + 0x138);
          goto code_r0x0157f764;
        }
        piVar26 = piVar26 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(pfVar14,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,2);
code_r0x0157f764:
    (*(code *)*puVar18)(pfVar14,puVar18[1]);
    uVar9 = CONCAT13(extraout_var_18,
                     CONCAT12(extraout_var_11,CONCAT11(extraout_var_04,extraout_b0_04)));
    unaff_d11 = (ulong)uVar9;
    unaff_d12 = (ulong)uVar32;
    unaff_d13 = (ulong)(uint)param_6;
    unaff_d14 = (ulong)param_7;
    lVar16 = *(long *)pfVar14;
    uVar15 = (ulong)*(ushort *)(lVar16 + 0x12a);
    fVar43 = param_6;
    uVar41 = uVar32;
    if (uVar15 != 0) {
      piVar26 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar18 = (undefined8 *)(lVar16 + (long)(*piVar26 + 3) * 0x10 + 0x138);
          goto code_r0x0157f7d0;
        }
        piVar26 = piVar26 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    puVar18 = (undefined8 *)func_0x00fac1f0(pfVar14,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,3);
code_r0x0157f7d0:
    (*(code *)*puVar18)(pfVar14,puVar18[1]);
    *(uint *)((long)ppuVar4 + -0x35c) = uVar41;
    *(float *)((long)ppuVar4 + -0x358) = fVar43;
    *(uint *)((long)ppuVar4 + -0x360) =
         CONCAT13(extraout_var_19,CONCAT12(extraout_var_12,CONCAT11(extraout_var_05,extraout_b0_05))
                 );
    puVar40 = &UNK_0157f814;
    pfVar11 = pfVar36;
    pfVar13 = param_12;
    uVar7 = extraout_b0_03;
    auVar52 = auVar53;
  }
  *(ulong *)((long)ppuVar4 + -0x3e0) = unaff_d15;
  *(ulong *)((long)ppuVar4 + -0x3d8) = unaff_d14;
  *(ulong *)((long)ppuVar4 + -0x3d0) = unaff_d13;
  *(ulong *)((long)ppuVar4 + -0x3c8) = unaff_d12;
  *(ulong *)((long)ppuVar4 + -0x3c0) = unaff_d11;
  *(ulong *)((long)ppuVar4 + -0x3b8) = unaff_d10;
  *(ulong *)((long)ppuVar4 + -0x3b0) = uVar46;
  *(ulong *)((long)ppuVar4 + -0x3a8) = uVar34;
  *(undefined8 *)((long)ppuVar4 + -0x3a0) = uVar17;
  *(float **)((long)ppuVar4 + -0x398) = pfVar14;
  *(undefined1 (*) [16])((long)ppuVar4 + -0x390) = auVar53;
  *(float **)((long)ppuVar4 + -0x380) = pfVar36;
  *(float **)((long)ppuVar4 + -0x378) = param_12;
  *(undefined1 **)((long)ppuVar4 + -0x370) = (undefined1 *)((long)ppuVar4 + -0x2e0);
  *(undefined **)((long)ppuVar4 + -0x368) = puVar40;
  puVar5 = (undefined1 *)((long)ppuVar4 + -0x370);
  if ((bRam0000000003eb50a0 & 1) == 0) {
    func_0x00f78a20(0x3d57700);
    func_0x00f78a20(0x3d57708);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(pfVar13,0,0);
  if ((uVar15 & 1) != 0) {
    return 0;
  }
  lVar16 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar16,pfVar11,0);
  if (lVar16 != 0) {
    *(float *)((long)ppuVar4 + -1000) = param_6;
    *(uint *)((long)ppuVar4 + -0x3e4) = param_7;
    lVar20 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar16,0);
    if (lVar20 != 0) {
      uVar44 = *(undefined4 *)((long)ppuVar4 + -0x35c);
      uVar51 = *(undefined4 *)((long)ppuVar4 + -0x358);
      uVar45 = *(undefined4 *)((long)ppuVar4 + -0x360);
      /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(uVar7,uVar10,fVar42,lVar20,0);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0((char)uVar9,uVar32,*(undefined4 *)((long)ppuVar4 + -1000),
                      *(undefined4 *)((long)ppuVar4 + -0x3e4),lVar20,0);
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0((char)uVar45,uVar44,uVar51,lVar20,0);
      lVar21 = *(long *)(auVar52._0_8_ + 0x58);
      if (lVar21 != 0) {
        uVar17 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar21,0);
        puVar40 = &UNK_0157f9c8;
        goto code_r0x03275ee0;
      }
    }
  }
  func_0x00f78af4();
  uVar17 = func_0x00f78b14();
  lVar21 = func_0x00f78ac0(uVar17,0);
  *(long *)((long)ppuVar4 + -0x420) = auVar52._0_8_;
  *(long *)((long)ppuVar4 + -0x418) = lVar16;
  *(long *)((long)ppuVar4 + -0x410) = auVar52._8_8_;
  *(float **)((long)ppuVar4 + -0x408) = pfVar13;
  *(undefined1 **)((long)ppuVar4 + -0x400) = puVar5;
  *(undefined **)((long)ppuVar4 + -0x3f8) =
       &Atlas_Gameplay_DebugVisualiser__CreateProxyGameObjectRoot;
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar16 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar16,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(lVar21 + 0x58) = lVar16;
  lVar20 = 0;
  if (lVar16 != 0) {
    lVar20 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar16,0);
    if ((*(long *)(lVar21 + 0x50) != 0) &&
       (uVar17 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar21 + 0x50),0), lVar20 != 0)) {
      puVar5 = *(undefined1 **)((long)ppuVar4 + -0x400);
      puVar40 = *(undefined **)((long)ppuVar4 + -0x3f8);
      pfVar13 = *(float **)((long)ppuVar4 + -0x408);
      auVar52._8_8_ = *(undefined8 *)((long)ppuVar4 + -0x410);
      auVar52._0_8_ = *(undefined8 *)((long)ppuVar4 + -0x420);
      lVar16 = *(long *)((long)ppuVar4 + -0x418);
code_r0x03275ee0:
      *(long *)((long)ppuVar4 + -0x420) = auVar52._0_8_;
      *(long *)((long)ppuVar4 + -0x418) = lVar16;
      *(long *)((long)ppuVar4 + -0x410) = auVar52._8_8_;
      *(float **)((long)ppuVar4 + -0x408) = pfVar13;
      *(undefined1 **)((long)ppuVar4 + -0x400) = puVar5;
      *(undefined **)((long)ppuVar4 + -0x3f8) = puVar40;
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar15 = (*pcRam0000000003ec1898)(lVar20,uVar17,0);
      return uVar15;
    }
  }
  lVar16 = func_0x00f78af4();
  *(undefined8 *)((long)ppuVar4 + -0x450) = 0x3d21b60;
  *(undefined8 *)((long)ppuVar4 + -0x448) = 0x3d71738;
  *(long *)((long)ppuVar4 + -0x440) = lVar20;
  *(long *)((long)ppuVar4 + -0x438) = lVar21;
  *(undefined1 **)((long)ppuVar4 + -0x430) = (undefined1 *)((long)ppuVar4 + -0x400);
  *(undefined **)((long)ppuVar4 + -0x428) =
       &Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot;
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar17 = *(undefined8 *)(lVar16 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar17,0,0);
  if ((uVar15 & 1) == 0) {
    uVar17 = *(undefined8 *)(lVar16 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar17,0);
    *(undefined8 *)(lVar16 + 0x58) = 0;
  }
  return uVar15;
code_r0x0157f1d8:
  if (uVar19 != 0) {
    uVar9 = *(uint *)(uVar19 + 0x18);
    if (0 < (int)uVar9) {
      uVar32 = 0;
      do {
        if ((uVar9 <= uVar32) || (uVar10 = uVar32 + 1, uVar9 <= uVar10)) goto code_r0x0157f274;
        lVar25 = uVar19 + 0x20;
        uVar44 = *(undefined4 *)(lVar25 + (long)(int)uVar32 * 4);
        *(undefined4 *)(lVar25 + (long)(int)uVar32 * 4) =
             *(undefined4 *)(lVar25 + (long)(int)uVar10 * 4);
        *(undefined4 *)(lVar25 + (long)(int)uVar10 * 4) = uVar44;
        uVar32 = uVar32 + 3;
      } while ((int)uVar32 < (int)uVar9);
    }
    goto code_r0x0157f280;
  }
  goto code_r0x0157f324;
}



// ============================================================
// RVA: 0x157e808 | Atlas.Gameplay.DebugVisualiser.IncludeGameObject
// ============================================================

/* WARNING: Possible PIC construction at 0x0157e8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157f814) */
/* WARNING: Removing unreachable block (ram,0x0157f598) */
/* WARNING: Removing unreachable block (ram,0x0157f5b0) */
/* WARNING: Removing unreachable block (ram,0x0157f5b8) */
/* WARNING: Removing unreachable block (ram,0x0157f5bc) */
/* WARNING: Removing unreachable block (ram,0x0157f5d0) */
/* WARNING: Removing unreachable block (ram,0x0157f5d4) */
/* WARNING: Removing unreachable block (ram,0x0157e8f8) */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_DebugVisualiser__IncludeGameObject
                (undefined1 param_1 [16],ulong param_2,undefined1 param_3 [16],ulong param_4,
                ulong param_5,float param_6,undefined4 param_7,undefined8 param_8,long param_9,
                float *param_10,float *param_11,float *param_12,float *param_13)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  int extraout_w1;
  uint uVar16;
  uint uVar17;
  int extraout_w1_00;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  long extraout_x1_02;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  float *pfVar23;
  float *pfVar24;
  ulong uVar25;
  ulong *extraout_x8;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  long unaff_x19;
  ulong uVar32;
  float *unaff_x20;
  uint uVar33;
  undefined8 uVar34;
  undefined8 unaff_x24;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  float extraout_s0;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 extraout_s0_00;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined4 uStack_370;
  undefined4 uStack_36c;
  float fStack_368;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  undefined1 *****pppppuStack_1e0;
  undefined *puStack_1d8;
  int iStack_1c4;
  ulong uStack_1c0;
  ulong uStack_1b0;
  float fStack_1a0;
  uint uStack_19c;
  ulong uStack_198;
  undefined1 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  float *pfStack_d8;
  float *pfStack_d0;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_a8;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  uVar35 = param_3._4_4_;
  fVar40 = param_3._0_4_;
  if (param_9 != 0) {
code_r0x0322efac:
    *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebf4d0 == (code *)0x0) {
      pcRam0000000003ebf4d0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeInHierarchy()");
    }
                    /* WARNING: Could not recover jumptable at 0x0322efe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar15 = (*pcRam0000000003ebf4d0)(param_9);
    return uVar15;
  }
  func_0x00f78af4();
  puStack_18 = &Atlas_Gameplay_DebugVisualiser__IgnoreCollider;
  unaff_x29 = &puStack_20;
  pfVar18 = param_10;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb509c & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509c = 1;
  }
  if ((param_10 != (float *)0x0) && (0 < (int)*(ulong *)(param_10 + 6))) {
    uVar15 = 0;
    uVar25 = *(ulong *)(param_10 + 6) & 0xffffffff;
    unaff_x24 = 0x3d23990;
    do {
      if (uVar25 <= uVar15) {
        uVar34 = func_0x00f78b24();
        func_0x00f78ac0(uVar34,0);
        goto code_r0x0157e92c;
      }
      uVar34 = *(undefined8 *)(param_10 + uVar15 * 2 + 8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pfVar18 = (float *)0x0;
      uVar25 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(extraout_x1,uVar34);
      if ((uVar25 & 1) != 0) {
        return 0;
      }
      uVar15 = uVar15 + 1;
      uVar25 = (ulong)(uint)param_10[6];
    } while ((long)uVar15 < (long)(int)param_10[6]);
  }
  if (extraout_x1 != 0) {
    iVar6 = /*UnityEngine.Collider$$get_enabled*/ func_0x0329e914(extraout_x1,0);
    if (iVar6 == 0) {
      return 1;
    }
    param_9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(extraout_x1,0);
    if (param_9 != 0) {
      unaff_x30 = &UNK_0157e8f8;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
      unaff_x19 = extraout_x1;
      unaff_x20 = param_10;
      goto code_r0x0322efac;
    }
  }
code_r0x0157e92c:
  func_0x00f78af4();
  puStack_58 = &Atlas_Gameplay_DebugVisualiser__CreateCollider;
  pfVar19 = pfVar18;
  pfVar23 = param_11;
  ppuStack_60 = unaff_x29;
  if ((bRam0000000003eb50a4 & 1) == 0) {
    func_0x00f78a20(0x3d53750);
    func_0x00f78a20(0x3d27140);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d27150);
    bRam0000000003eb50a4 = 1;
  }
  uStack_a8 = 0;
  if ((extraout_x1_00 != 0) &&
     (pfVar19 = pfRam0000000003d53750, /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(extraout_x1_00,&uStack_a8),
     param_11 != (float *)0x0)) {
    lVar26 = *(long *)param_11;
    uVar15 = (ulong)*(ushort *)(lVar26 + 0x12a);
    if (uVar15 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar10 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
          goto code_r0x0157ea20;
        }
        piVar28 = piVar28 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)func_0x00fac1f0(param_11,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,0);
code_r0x0157ea20:
    uVar15 = (*(code *)*puVar10)(param_11,puVar10[1]);
    uVar5 = /*UnityEngine.Collider$$get_isTrigger*/ func_0x0329e9e4(extraout_x1_00,0);
    uVar34 = uStack_a8;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar25 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar34,0,0);
    if (*(byte *)(*(long *)param_11 + 300) < *(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300)) {
      bVar4 = false;
    }
    else {
      bVar4 = *(long *)(*(long *)(*(long *)param_11 + 200) +
                        (ulong)*(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300) * 8 + -8) ==
              /*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150;
    }
    *extraout_x8 = (ulong)pfVar18;
    extraout_x8[1] = (ulong)param_11;
    extraout_x8[2] = 0;
    extraout_x8[3] = uVar15;
    *(undefined1 *)(extraout_x8 + 4) = uVar5;
    *(char *)((long)extraout_x8 + 0x21) = (char)uVar25;
    *(bool *)((long)extraout_x8 + 0x22) = bVar4;
    *(undefined4 *)((long)extraout_x8 + 0x23) = 0;
    *(undefined1 *)((long)extraout_x8 + 0x27) = 0;
    return uVar25;
  }
  func_0x00f78af4();
  uStack_e8 = 0x3eb5000;
  puStack_b8 = &Atlas_Gameplay_DebugVisualiser__GetReplicator;
  pfVar20 = pfVar19;
  uStack_f0 = unaff_x24;
  lStack_e0 = extraout_x1_00;
  pfStack_d8 = pfVar18;
  pfStack_d0 = param_11;
  pppuStack_c0 = &ppuStack_60;
  if ((bRam0000000003eb509b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509b = 1;
  }
  if (pfVar19 != (float *)0x0) {
    fVar1 = pfVar19[6];
    if (0 < (int)fVar1) {
      fVar41 = 0.0;
      do {
        if ((uint)fVar1 <= (uint)fVar41) {
          uVar34 = func_0x00f78b24();
          func_0x00f78ac0(uVar34,0);
          goto code_r0x0157ebb8;
        }
        uVar15 = *(ulong *)(pfVar19 + (long)(int)fVar41 * 2 + 8);
        if (uVar15 == 0) goto code_r0x0157ebb8;
        uVar34 = *(undefined8 *)(uVar15 + 0x38);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pfVar20 = (float *)0x0;
        uVar25 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar34,extraout_x1_01);
        if ((uVar25 & 1) != 0) {
          return uVar15;
        }
        fVar41 = (float)((int)fVar41 + 1);
        fVar1 = pfVar19[6];
      } while ((int)fVar41 < (int)fVar1);
    }
    return 0;
  }
code_r0x0157ebb8:
  uVar7 = func_0x00f78af4();
  puStack_f8 = &Atlas_Gameplay_DebugVisualiser__CreateCapsuleMesh;
  fVar1 = (float)param_5;
  uStack_1b0 = CONCAT44(uVar35,fVar40);
  fVar41 = (float)param_2;
  uVar15 = 0x3d1f3d8;
  iStack_1c4 = extraout_w1;
  uStack_1c0 = param_4;
  fStack_1a0 = extraout_s0;
  ppppuStack_100 = &pppuStack_c0;
  if ((bRam0000000003eb50a6 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d1f3d8);
    func_0x00f78a20(0x3d1f5e0);
    func_0x00f78a20(0x3d715a8);
    bRam0000000003eb50a6 = 1;
  }
  uVar7 = (uVar7 & 1) + uVar7;
  uVar32 = (ulong)uVar7;
  uVar25 = (ulong)(uVar7 + 1);
  lVar26 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar25);
  lVar11 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar25);
  lVar12 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar25);
  uStack_198 = uVar25;
  lVar13 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar25);
  fVar36 = _UNK_033f850c;
  uStack_19c = uVar7;
  if (uVar7 < 0x7fffffff) {
    if (lVar26 == 0) goto code_r0x0157f324;
    uVar32 = 0;
    param_2 = 0x43340000;
    uVar33 = *(uint *)(lVar26 + 0x18);
    uVar15 = lVar11 + 0x20;
    uVar25 = lVar13 + 0x20;
    fVar44 = 0.0;
    fVar42 = 0.0;
    do {
      if (uVar33 == uVar32) goto code_r0x0157f274;
      uVar35 = ___sincosf_stret(fVar44 * fVar36);
      *(undefined4 *)(lVar26 + 0x20 + uVar32 * 4) = uVar35;
      if (lVar11 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar11 + 0x18) <= uVar32) goto code_r0x0157f274;
      *(int *)(uVar15 + uVar32 * 4) = (int)param_2;
      fVar43 = fVar42 * fVar36;
      uVar35 = _cosf(fVar43);
      if (lVar12 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar12 + 0x18) <= uVar32) goto code_r0x0157f274;
      *(undefined4 *)(lVar12 + 0x20 + uVar32 * 4) = uVar35;
      uVar35 = _sinf(fVar43);
      if (lVar13 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar13 + 0x18) <= uVar32) goto code_r0x0157f274;
      *(undefined4 *)(uVar25 + uVar32 * 4) = uVar35;
      fVar44 = 360.0 / (float)(int)uVar7 + fVar44;
      fVar42 = 180.0 / (float)(int)uVar7 + fVar42;
      uVar32 = uVar32 + 1;
    } while (uStack_198 != uVar32);
  }
  uVar25 = uStack_198;
  uVar7 = uStack_19c;
  uVar15 = (ulong)uStack_19c;
  uVar33 = (uint)uStack_198;
  uVar32 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,(uStack_19c + 2) * uVar33);
  param_2 = 0x3f000000;
  fVar36 = (fStack_1a0 - (fVar41 + fVar41)) * 0.5;
  fVar40 = 0.0;
  if (fVar36 <= 0.0) {
    fVar36 = 0.0;
  }
  uVar8 = /*UnityEngine.Mathf$$CeilToInt*/ func_0x0323d108((float)(int)uVar33 * 0.5,0);
  if ((int)uVar8 < 1) {
    iVar6 = 0;
  }
  else {
    uVar27 = 0;
    iVar6 = 0;
    uVar17 = uVar33;
    if ((int)uVar33 < 2) {
      uVar17 = 1;
    }
    do {
      if (uVar7 < 0x7fffffff) {
        if (lVar26 == 0) goto code_r0x0157f324;
        uVar31 = 0;
        do {
          if (*(uint *)(lVar26 + 0x18) <= uVar31) goto code_r0x0157f274;
          if (lVar13 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar13 + 0x18) <= uVar27) goto code_r0x0157f274;
          if (lVar12 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar12 + 0x18) <= uVar27) goto code_r0x0157f274;
          if (lVar11 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar11 + 0x18) <= uVar31) goto code_r0x0157f274;
          if (uVar32 == 0) goto code_r0x0157f324;
          uVar16 = iVar6 + (int)uVar31;
          pfVar20 = (float *)(ulong)*(uint *)(uVar32 + 0x18);
          if (*(uint *)(uVar32 + 0x18) <= uVar16) goto code_r0x0157f274;
          fVar42 = *(float *)(lVar13 + uVar27 * 4 + 0x20);
          fVar40 = *(float *)(lVar12 + uVar27 * 4 + 0x20);
          fVar44 = *(float *)(lVar26 + 0x20 + uVar31 * 4) * fVar42 * fVar41;
          param_4 = (ulong)(uint)fVar44;
          fVar42 = fVar42 * *(float *)(lVar11 + 0x20 + uVar31 * 4) * fVar41;
          param_2 = (ulong)(uint)fVar42;
          lVar21 = uVar32 + (long)(int)uVar16 * 0xc;
          pfVar20 = (float *)(lVar21 + 0x24);
          *pfVar20 = fVar40 * fVar41;
          *(float *)(lVar21 + 0x20) = fVar44;
          *(float *)(lVar21 + 0x28) = fVar42;
          pfVar23 = (float *)(ulong)*(uint *)(uVar32 + 0x18);
          if (*(uint *)(uVar32 + 0x18) <= uVar16) goto code_r0x0157f274;
          *pfVar20 = fVar36 + fVar40 * fVar41;
          uVar31 = uVar31 + 1;
        } while (uVar17 != uVar31);
        iVar6 = iVar6 + (int)uVar31;
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar8);
  }
  iVar9 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c((float)(int)uVar33 * 0.5,0);
  if (iVar9 < (int)uVar33) {
    uVar8 = uVar33;
    if ((int)uVar33 < 2) {
      uVar8 = 1;
    }
    lVar21 = (long)iVar9;
    do {
      if (uVar7 < 0x7fffffff) {
        if (lVar26 == 0) goto code_r0x0157f324;
        uVar27 = 0;
        do {
          if (*(uint *)(lVar26 + 0x18) <= uVar27) goto code_r0x0157f274;
          if (lVar13 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar13 + 0x18) <= (uint)lVar21) goto code_r0x0157f274;
          if (lVar12 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar12 + 0x18) <= (uint)lVar21) goto code_r0x0157f274;
          if (lVar11 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar11 + 0x18) <= uVar27) goto code_r0x0157f274;
          if (uVar32 == 0) goto code_r0x0157f324;
          uVar17 = iVar6 + (int)uVar27;
          pfVar20 = (float *)(ulong)*(uint *)(uVar32 + 0x18);
          if (*(uint *)(uVar32 + 0x18) <= uVar17) goto code_r0x0157f274;
          fVar42 = *(float *)(lVar13 + lVar21 * 4 + 0x20);
          fVar40 = *(float *)(lVar12 + lVar21 * 4 + 0x20);
          fVar44 = *(float *)(lVar26 + 0x20 + uVar27 * 4) * fVar42 * fVar41;
          param_4 = (ulong)(uint)fVar44;
          fVar42 = fVar42 * *(float *)(lVar11 + 0x20 + uVar27 * 4) * fVar41;
          param_2 = (ulong)(uint)fVar42;
          lVar22 = uVar32 + (long)(int)uVar17 * 0xc;
          pfVar20 = (float *)(lVar22 + 0x24);
          *pfVar20 = fVar40 * fVar41;
          *(float *)(lVar22 + 0x20) = fVar44;
          *(float *)(lVar22 + 0x28) = fVar42;
          pfVar23 = (float *)(ulong)*(uint *)(uVar32 + 0x18);
          if (*(uint *)(uVar32 + 0x18) <= uVar17) goto code_r0x0157f274;
          *pfVar20 = fVar40 * fVar41 - fVar36;
          uVar27 = uVar27 + 1;
        } while (uVar8 != uVar27);
        iVar6 = iVar6 + (int)uVar27;
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != (int)uVar33);
  }
  lVar26 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar7 * uVar33 * 6);
  param_4 = uStack_1b0;
  param_5 = uStack_1c0;
  if (uVar7 < 0x7fffffff) {
    uVar17 = 0;
    uVar8 = 0;
    uVar16 = uVar7;
    if ((int)uVar7 < 2) {
      uVar16 = 1;
    }
    do {
      if (uVar7 != 0) {
        if (lVar26 == 0) goto code_r0x0157f324;
        iVar6 = uVar17 * uVar33;
        iVar9 = (uVar17 + 1) * uVar33;
        uVar2 = *(uint *)(lVar26 + 0x18);
        uVar29 = uVar16;
        do {
          uVar30 = uVar8;
          if (uVar2 <= uVar30) goto code_r0x0157f274;
          *(int *)(lVar26 + (long)(int)uVar30 * 4 + 0x20) = iVar6;
          if ((uVar2 <= uVar30 + 1) ||
             (*(int *)(lVar26 + (long)(int)(uVar30 + 1) * 4 + 0x20) = iVar9, uVar2 <= uVar30 + 2))
          goto code_r0x0157f274;
          *(int *)(lVar26 + (long)(int)(uVar30 + 2) * 4 + 0x20) = iVar9 + 1;
          if ((uVar2 <= uVar30 + 3) ||
             ((*(int *)(lVar26 + (long)(int)(uVar30 + 3) * 4 + 0x20) = iVar6 + 1,
              uVar2 <= uVar30 + 4 ||
              (*(int *)(lVar26 + (long)(int)(uVar30 + 4) * 4 + 0x20) = iVar6, uVar2 <= uVar30 + 5)))
             ) goto code_r0x0157f274;
          *(int *)(lVar26 + (long)(int)(uVar30 + 5) * 4 + 0x20) = iVar9 + 1;
          iVar6 = iVar6 + 1;
          iVar9 = iVar9 + 1;
          uVar29 = uVar29 - 1;
          uVar8 = uVar30 + 6;
        } while (uVar29 != 0);
        uVar8 = uVar30 + 6;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar33);
  }
  if (uVar32 != 0) {
    uVar27 = *(ulong *)(uVar32 + 0x18) & 0xffffffff;
    fVar41 = (float)uStack_1b0;
    fVar36 = (float)uStack_1c0;
    iVar6 = (int)*(ulong *)(uVar32 + 0x18);
    if (iStack_1c4 == 0) {
      if (0 < iVar6) {
        if (uVar27 != 0) {
          uVar31 = 0;
          pfVar18 = (float *)(uVar32 + 0x28);
          do {
            fVar42 = pfVar18[-2];
            param_2 = (ulong)(uint)(fVar41 + pfVar18[-1]);
            fVar40 = fVar1 + *pfVar18;
            pfVar18[-2] = fVar41 + pfVar18[-1];
            pfVar18[-1] = fVar36 + fVar42;
            *pfVar18 = fVar40;
            if (uVar27 - 1 == uVar31) goto code_r0x0157f1d8;
            uVar31 = uVar31 + 1;
            pfVar18 = pfVar18 + 3;
          } while (uVar31 < *(uint *)(uVar32 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if (iStack_1c4 == 1) {
      if (0 < iVar6) {
        if (uVar27 != 0) {
          uVar15 = 0;
          pfVar18 = (float *)(uVar32 + 0x28);
          do {
            param_2 = CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(pfVar18 + -2) >> 0x20),
                               fVar41 + (float)*(undefined8 *)(pfVar18 + -2));
            *(ulong *)(pfVar18 + -2) = param_2;
            *pfVar18 = fVar1 + *pfVar18;
            param_4 = CONCAT44(fVar36,fVar41);
            if (uVar27 - 1 == uVar15) goto code_r0x0157f280;
            uVar15 = uVar15 + 1;
            pfVar18 = pfVar18 + 3;
          } while (uVar15 < *(uint *)(uVar32 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if ((iStack_1c4 == 2) && (0 < iVar6)) {
      if (uVar27 != 0) {
        uVar31 = 0;
        pfVar18 = (float *)(uVar32 + 0x28);
        do {
          fVar42 = pfVar18[-1];
          fVar40 = fVar36 + *pfVar18;
          param_2 = (ulong)(uint)(fVar1 + fVar42);
          pfVar18[-2] = fVar41 + pfVar18[-2];
          pfVar18[-1] = fVar40;
          *pfVar18 = fVar1 + fVar42;
          if (uVar27 - 1 == uVar31) goto code_r0x0157f1d8;
          uVar31 = uVar31 + 1;
          pfVar18 = pfVar18 + 3;
        } while (uVar31 < *(uint *)(uVar32 + 0x18));
      }
code_r0x0157f274:
      uVar34 = func_0x00f78b24();
      func_0x00f78ac0(uVar34,0);
    }
code_r0x0157f280:
    uVar27 = func_0x00f78aec(/*UnityEngine.Mesh_TypeInfo*/ uRam0000000003d23388);
    /*UnityEngine.Mesh$$.ctor*/ func_0x0323f420(uVar27,0);
    uVar15 = 0;
    if (uVar27 != 0) {
      /*UnityEngine.Object$$set_name*/ func_0x03248994(uVar27,/*STR('ProceduralCapsule')*/ uRam0000000003d715a8,0);
      /*UnityEngine.Mesh$$set_vertices*/ func_0x03241d34(uVar27,uVar32,0);
      /*UnityEngine.Mesh$$set_triangles*/ func_0x032448a4(uVar27,lVar26,0);
      /*UnityEngine.Mesh$$Optimize*/ func_0x032470b4(uVar27,0);
      /*UnityEngine.Mesh$$RecalculateBounds*/ func_0x03246a70(uVar27,0);
      return uVar27;
    }
  }
  goto code_r0x0157f324;
code_r0x0157f1d8:
  if (lVar26 != 0) {
    uVar7 = *(uint *)(lVar26 + 0x18);
    if (0 < (int)uVar7) {
      uVar33 = 0;
      do {
        if ((uVar7 <= uVar33) || (uVar8 = uVar33 + 1, uVar7 <= uVar8)) goto code_r0x0157f274;
        lVar13 = lVar26 + 0x20;
        uVar35 = *(undefined4 *)(lVar13 + (long)(int)uVar33 * 4);
        *(undefined4 *)(lVar13 + (long)(int)uVar33 * 4) =
             *(undefined4 *)(lVar13 + (long)(int)uVar8 * 4);
        *(undefined4 *)(lVar13 + (long)(int)uVar8 * 4) = uVar35;
        uVar33 = uVar33 + 3;
      } while ((int)uVar33 < (int)uVar7);
    }
    goto code_r0x0157f280;
  }
code_r0x0157f324:
  func_0x00f78af4();
  puStack_1d8 = &Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility;
  pfVar18 = pfVar20;
  lStack_210 = lVar12;
  lStack_208 = lVar11;
  lStack_200 = lVar26;
  uStack_1f8 = uVar25;
  uStack_1f0 = uVar15;
  uStack_1e8 = uVar32;
  pppppuStack_1e0 = &ppppuStack_100;
  if ((bRam0000000003eb509d & 1) == 0) {
    func_0x00f78a20(0x3d32a28);
    func_0x00f78a20(0x3d32a30);
    func_0x00f78a20(0x3d32a38);
    func_0x00f78a20(0x3d3b278);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509d = 1;
  }
  uStack_228 = 0;
  uStack_220 = 0;
  lStack_218 = 0;
  if (extraout_x1_02 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_228,extraout_x1_02,uRam0000000003d3b278);
    while( true ) {
      do {
        uVar15 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_228,uRam0000000003d32a30);
        lVar26 = lStack_218;
        if ((uVar15 & 1) == 0) {
          uVar15 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_228,uRam0000000003d32a28);
          return uVar15;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar15 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar26,0,0);
      } while ((uVar15 & 1) != 0);
      if (lVar26 == 0) break;
      /*UnityEngine.Renderer$$set_forceRenderingOff*/ func_0x0325bc24(lVar26,(uint)pfVar20 ^ 1,0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x157f45c);
    (*pcVar3)();
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar14 = (long *)___cxa_begin_catch();
    lVar26 = *plVar14;
    ___cxa_end_catch();
    uVar15 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_228,uRam0000000003eb5000);
    if (lVar26 == 0) {
      return uVar15;
    }
    func_0x00f78ac0(lVar26,0);
  }
  auVar45 = __Unwind_Resume();
  lVar26 = auVar45._8_8_;
  uVar25 = auVar45._0_8_;
  uVar15 = uVar25;
  pfVar20 = pfVar18;
  pfVar19 = pfVar23;
  pfVar24 = param_12;
  if ((bRam0000000003eb509e & 1) == 0) {
    func_0x00f78a20(0x3d3d050);
    func_0x00f78a20(0x3d3d058);
    func_0x00f78a20(0x3d3d060);
    uVar15 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb509e = 1;
  }
  uVar39 = (undefined4)param_2;
  uVar38 = (undefined4)param_4;
  uVar35 = (undefined4)param_5;
  if (lVar26 != 0) {
    uVar32 = (ulong)*(uint *)(lVar26 + 0x18);
    if (0 < (int)*(uint *)(lVar26 + 0x18)) {
      uVar27 = 0;
      uVar31 = uVar32 - 1;
      lVar11 = 0x20;
      while( true ) {
        if (uVar32 <= uVar27) {
          uVar15 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar39 = (undefined4)param_2;
        uVar38 = (undefined4)param_4;
        uVar35 = (undefined4)param_5;
        lVar12 = *(long *)(lVar26 + 0x10) + lVar11;
        pfVar20 = *(float **)(lVar12 + 8);
        if (pfVar20 != (float *)0x0) {
          pfVar19 = *(float **)(lVar12 + 0x18);
          uVar15 = *(ulong *)(lVar12 + 0x20);
          if ((uVar15 & 0xff0000) != 0) {
            pfVar18 = param_13;
          }
          if ((uVar15 & 0xff) == 0) {
            pfVar23 = pfVar18;
          }
          if ((uVar15 & 0xff00) == 0) {
            param_12 = pfVar23;
          }
          goto code_r0x0157f644;
        }
        if (uVar31 == uVar27) break;
        uVar32 = (ulong)*(uint *)(lVar26 + 0x18);
        lVar11 = lVar11 + 0x28;
        uVar27 = uVar27 + 1;
      }
    }
    return uVar15;
  }
  uVar25 = func_0x00f78af4();
  param_12 = pfVar24;
code_r0x0157f644:
  pfVar18 = pfVar20;
  pfVar23 = pfVar19;
  if ((bRam0000000003eb509f & 1) == 0) {
    func_0x00f78a20(0x3d27140);
    bRam0000000003eb509f = 1;
  }
  if (pfVar20 == (float *)0x0) {
    uVar25 = func_0x00f78af4();
    uVar37 = extraout_s0_00;
  }
  else {
    lVar26 = *(long *)pfVar20;
    uVar15 = (ulong)*(ushort *)(lVar26 + 0x12a);
    if (uVar15 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 1) * 0x10 + 0x138);
          param_7 = uVar38;
          goto code_r0x0157f6fc;
        }
        piVar28 = piVar28 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)func_0x00fac1f0(pfVar20,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,1);
    param_7 = uVar38;
code_r0x0157f6fc:
    uVar37 = (*(code *)*puVar10)(pfVar20,puVar10[1]);
    lVar26 = *(long *)pfVar20;
    uVar15 = (ulong)*(ushort *)(lVar26 + 0x12a);
    param_6 = fVar40;
    uVar35 = uVar39;
    if (uVar15 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 2) * 0x10 + 0x138);
          goto code_r0x0157f764;
        }
        piVar28 = piVar28 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)func_0x00fac1f0(pfVar20,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,2);
code_r0x0157f764:
    uVar38 = (*(code *)*puVar10)(pfVar20,puVar10[1]);
    lVar26 = *(long *)pfVar20;
    uVar15 = (ulong)*(ushort *)(lVar26 + 0x12a);
    fStack_368 = param_6;
    uStack_36c = uVar35;
    if (uVar15 != 0) {
      piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar10 = (undefined8 *)(lVar26 + (long)(*piVar28 + 3) * 0x10 + 0x138);
          goto code_r0x0157f7d0;
        }
        piVar28 = piVar28 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)func_0x00fac1f0(pfVar20,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,3);
code_r0x0157f7d0:
    uStack_370 = (*(code *)*puVar10)(pfVar20,puVar10[1]);
    pfVar18 = pfVar19;
    pfVar23 = param_12;
  }
  if ((bRam0000000003eb50a0 & 1) == 0) {
    func_0x00f78a20(0x3d57700);
    func_0x00f78a20(0x3d57708);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(pfVar23,0,0);
  if ((uVar15 & 1) != 0) {
    return 0;
  }
  lVar26 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar26,pfVar18,0);
  if ((lVar26 != 0) && (lVar26 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar26,0), lVar26 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(uVar37,uVar39,fVar40,lVar26,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(uVar38,uVar35,param_6,param_7,lVar26,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uStack_370,uStack_36c,fStack_368,lVar26,0);
    if (*(long *)(uVar25 + 0x58) != 0) {
      uVar34 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(uVar25 + 0x58),0);
      goto code_r0x03275ee0;
    }
  }
  func_0x00f78af4();
  uVar34 = func_0x00f78b14();
  lVar11 = func_0x00f78ac0(uVar34,0);
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar26 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar26,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(lVar11 + 0x58) = lVar26;
  if (lVar26 != 0) {
    lVar26 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar26,0);
    if ((*(long *)(lVar11 + 0x50) != 0) &&
       (uVar34 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar11 + 0x50),0), lVar26 != 0)) {
code_r0x03275ee0:
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar15 = (*pcRam0000000003ec1898)(lVar26,uVar34,0);
      return uVar15;
    }
  }
  lVar26 = func_0x00f78af4();
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar34 = *(undefined8 *)(lVar26 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar34,0,0);
  if ((uVar15 & 1) == 0) {
    uVar34 = *(undefined8 *)(lVar26 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar34,0);
    *(undefined8 *)(lVar26 + 0x58) = 0;
  }
  return uVar15;
}



// ============================================================
// RVA: 0x157e824 | Atlas.Gameplay.DebugVisualiser.IgnoreCollider
// ============================================================

/* WARNING: Possible PIC construction at 0x0157f594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157f814) */
/* WARNING: Removing unreachable block (ram,0x0157f598) */
/* WARNING: Removing unreachable block (ram,0x0157f5b0) */
/* WARNING: Removing unreachable block (ram,0x0157f5b8) */
/* WARNING: Removing unreachable block (ram,0x0157f5bc) */
/* WARNING: Removing unreachable block (ram,0x0157f5d0) */
/* WARNING: Removing unreachable block (ram,0x0157f5d4) */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_DebugVisualiser__IgnoreCollider
                (undefined1 param_1 [16],ulong param_2,undefined1 param_3 [16],ulong param_4,
                ulong param_5,float param_6,undefined4 param_7,undefined8 param_8,long param_9,
                float *param_10,float *param_11,float *param_12,float *param_13)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  int extraout_w1;
  uint uVar16;
  uint uVar17;
  int extraout_w1_00;
  long extraout_x1;
  undefined8 extraout_x1_00;
  long extraout_x1_01;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  float *pfVar23;
  float *pfVar24;
  ulong uVar25;
  ulong *extraout_x8;
  ulong uVar26;
  int *piVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  undefined8 uVar33;
  ulong uVar34;
  undefined8 unaff_x24;
  float extraout_s0;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 extraout_s0_00;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined4 uStack_360;
  undefined4 uStack_35c;
  float fStack_358;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined1 ****ppppuStack_1d0;
  undefined *puStack_1c8;
  int iStack_1b4;
  ulong uStack_1b0;
  ulong uStack_1a0;
  float fStack_190;
  uint uStack_18c;
  ulong uStack_188;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  float *pfStack_c8;
  float *pfStack_c0;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar35 = param_3._4_4_;
  fVar40 = param_3._0_4_;
  pfVar18 = param_10;
  if ((bRam0000000003eb509c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509c = 1;
  }
  if ((param_10 != (float *)0x0) && (0 < (int)*(ulong *)(param_10 + 6))) {
    uVar34 = 0;
    uVar25 = *(ulong *)(param_10 + 6) & 0xffffffff;
    unaff_x24 = 0x3d23990;
    do {
      if (uVar25 <= uVar34) {
        uVar33 = func_0x00f78b24();
        func_0x00f78ac0(uVar33,0);
        goto LAB_0157e92c;
      }
      uVar33 = *(undefined8 *)(param_10 + uVar34 * 2 + 8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      pfVar18 = (float *)0x0;
      uVar25 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_9,uVar33);
      if ((uVar25 & 1) != 0) {
        return 0;
      }
      uVar34 = uVar34 + 1;
      uVar25 = (ulong)(uint)param_10[6];
    } while ((long)uVar34 < (long)(int)param_10[6]);
  }
  if (param_9 != 0) {
    iVar6 = /*UnityEngine.Collider$$get_enabled*/ func_0x0329e914(param_9,0);
    if (iVar6 == 0) {
      return 1;
    }
    lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_9,0);
    if (lVar10 != 0) {
      uVar7 = /*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar10,0);
      return (ulong)(uVar7 ^ 1);
    }
  }
LAB_0157e92c:
  func_0x00f78af4();
  puStack_48 = &Atlas_Gameplay_DebugVisualiser__CreateCollider;
  pfVar19 = pfVar18;
  pfVar23 = param_11;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb50a4 & 1) == 0) {
    func_0x00f78a20(0x3d53750);
    func_0x00f78a20(0x3d27140);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d27150);
    bRam0000000003eb50a4 = 1;
  }
  uStack_98 = 0;
  if ((extraout_x1 != 0) &&
     (pfVar19 = pfRam0000000003d53750, /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(extraout_x1,&uStack_98),
     param_11 != (float *)0x0)) {
    lVar10 = *(long *)param_11;
    uVar34 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar34 != 0) {
      piVar27 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar27 * 0x10 + 0x138);
          goto code_r0x0157ea20;
        }
        piVar27 = piVar27 + 4;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x00fac1f0(param_11,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,0);
code_r0x0157ea20:
    uVar34 = (*(code *)*puVar11)(param_11,puVar11[1]);
    uVar5 = /*UnityEngine.Collider$$get_isTrigger*/ func_0x0329e9e4(extraout_x1,0);
    uVar33 = uStack_98;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar25 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar33,0,0);
    if (*(byte *)(*(long *)param_11 + 300) < *(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300)) {
      bVar4 = false;
    }
    else {
      bVar4 = *(long *)(*(long *)(*(long *)param_11 + 200) +
                        (ulong)*(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300) * 8 + -8) ==
              /*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150;
    }
    *extraout_x8 = (ulong)pfVar18;
    extraout_x8[1] = (ulong)param_11;
    extraout_x8[2] = 0;
    extraout_x8[3] = uVar34;
    *(undefined1 *)(extraout_x8 + 4) = uVar5;
    *(char *)((long)extraout_x8 + 0x21) = (char)uVar25;
    *(bool *)((long)extraout_x8 + 0x22) = bVar4;
    *(undefined4 *)((long)extraout_x8 + 0x23) = 0;
    *(undefined1 *)((long)extraout_x8 + 0x27) = 0;
    return uVar25;
  }
  func_0x00f78af4();
  uStack_d8 = 0x3eb5000;
  puStack_a8 = &Atlas_Gameplay_DebugVisualiser__GetReplicator;
  pfVar20 = pfVar19;
  uStack_e0 = unaff_x24;
  lStack_d0 = extraout_x1;
  pfStack_c8 = pfVar18;
  pfStack_c0 = param_11;
  ppuStack_b0 = &puStack_50;
  if ((bRam0000000003eb509b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509b = 1;
  }
  if (pfVar19 != (float *)0x0) {
    fVar1 = pfVar19[6];
    if (0 < (int)fVar1) {
      fVar41 = 0.0;
      do {
        if ((uint)fVar1 <= (uint)fVar41) {
          uVar33 = func_0x00f78b24();
          func_0x00f78ac0(uVar33,0);
          goto code_r0x0157ebb8;
        }
        uVar34 = *(ulong *)(pfVar19 + (long)(int)fVar41 * 2 + 8);
        if (uVar34 == 0) goto code_r0x0157ebb8;
        uVar33 = *(undefined8 *)(uVar34 + 0x38);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pfVar20 = (float *)0x0;
        uVar25 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar33,extraout_x1_00);
        if ((uVar25 & 1) != 0) {
          return uVar34;
        }
        fVar41 = (float)((int)fVar41 + 1);
        fVar1 = pfVar19[6];
      } while ((int)fVar41 < (int)fVar1);
    }
    return 0;
  }
code_r0x0157ebb8:
  uVar7 = func_0x00f78af4();
  puStack_e8 = &Atlas_Gameplay_DebugVisualiser__CreateCapsuleMesh;
  fVar1 = (float)param_5;
  uStack_1a0 = CONCAT44(uVar35,fVar40);
  fVar41 = (float)param_2;
  uVar34 = 0x3d1f3d8;
  iStack_1b4 = extraout_w1;
  uStack_1b0 = param_4;
  fStack_190 = extraout_s0;
  pppuStack_f0 = &ppuStack_b0;
  if ((bRam0000000003eb50a6 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d1f3d8);
    func_0x00f78a20(0x3d1f5e0);
    func_0x00f78a20(0x3d715a8);
    bRam0000000003eb50a6 = 1;
  }
  uVar7 = (uVar7 & 1) + uVar7;
  uVar31 = (ulong)uVar7;
  uVar25 = (ulong)(uVar7 + 1);
  lVar10 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar25);
  lVar12 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar25);
  lVar13 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar25);
  uStack_188 = uVar25;
  lVar14 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar25);
  fVar36 = _UNK_033f850c;
  uStack_18c = uVar7;
  if (uVar7 < 0x7fffffff) {
    if (lVar10 == 0) goto code_r0x0157f324;
    uVar31 = 0;
    param_2 = 0x43340000;
    uVar32 = *(uint *)(lVar10 + 0x18);
    uVar34 = lVar12 + 0x20;
    uVar25 = lVar14 + 0x20;
    fVar44 = 0.0;
    fVar42 = 0.0;
    do {
      if (uVar32 == uVar31) goto code_r0x0157f274;
      uVar35 = ___sincosf_stret(fVar44 * fVar36);
      *(undefined4 *)(lVar10 + 0x20 + uVar31 * 4) = uVar35;
      if (lVar12 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar12 + 0x18) <= uVar31) goto code_r0x0157f274;
      *(int *)(uVar34 + uVar31 * 4) = (int)param_2;
      fVar43 = fVar42 * fVar36;
      uVar35 = _cosf(fVar43);
      if (lVar13 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar13 + 0x18) <= uVar31) goto code_r0x0157f274;
      *(undefined4 *)(lVar13 + 0x20 + uVar31 * 4) = uVar35;
      uVar35 = _sinf(fVar43);
      if (lVar14 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar14 + 0x18) <= uVar31) goto code_r0x0157f274;
      *(undefined4 *)(uVar25 + uVar31 * 4) = uVar35;
      fVar44 = 360.0 / (float)(int)uVar7 + fVar44;
      fVar42 = 180.0 / (float)(int)uVar7 + fVar42;
      uVar31 = uVar31 + 1;
    } while (uStack_188 != uVar31);
  }
  uVar25 = uStack_188;
  uVar7 = uStack_18c;
  uVar34 = (ulong)uStack_18c;
  uVar32 = (uint)uStack_188;
  uVar31 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,(uStack_18c + 2) * uVar32);
  param_2 = 0x3f000000;
  fVar36 = (fStack_190 - (fVar41 + fVar41)) * 0.5;
  fVar40 = 0.0;
  if (fVar36 <= 0.0) {
    fVar36 = 0.0;
  }
  uVar8 = /*UnityEngine.Mathf$$CeilToInt*/ func_0x0323d108((float)(int)uVar32 * 0.5,0);
  if ((int)uVar8 < 1) {
    iVar6 = 0;
  }
  else {
    uVar26 = 0;
    iVar6 = 0;
    uVar17 = uVar32;
    if ((int)uVar32 < 2) {
      uVar17 = 1;
    }
    do {
      if (uVar7 < 0x7fffffff) {
        if (lVar10 == 0) goto code_r0x0157f324;
        uVar30 = 0;
        do {
          if (*(uint *)(lVar10 + 0x18) <= uVar30) goto code_r0x0157f274;
          if (lVar14 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar14 + 0x18) <= uVar26) goto code_r0x0157f274;
          if (lVar13 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar13 + 0x18) <= uVar26) goto code_r0x0157f274;
          if (lVar12 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar12 + 0x18) <= uVar30) goto code_r0x0157f274;
          if (uVar31 == 0) goto code_r0x0157f324;
          uVar16 = iVar6 + (int)uVar30;
          pfVar20 = (float *)(ulong)*(uint *)(uVar31 + 0x18);
          if (*(uint *)(uVar31 + 0x18) <= uVar16) goto code_r0x0157f274;
          fVar42 = *(float *)(lVar14 + uVar26 * 4 + 0x20);
          fVar40 = *(float *)(lVar13 + uVar26 * 4 + 0x20);
          fVar44 = *(float *)(lVar10 + 0x20 + uVar30 * 4) * fVar42 * fVar41;
          param_4 = (ulong)(uint)fVar44;
          fVar42 = fVar42 * *(float *)(lVar12 + 0x20 + uVar30 * 4) * fVar41;
          param_2 = (ulong)(uint)fVar42;
          lVar21 = uVar31 + (long)(int)uVar16 * 0xc;
          pfVar20 = (float *)(lVar21 + 0x24);
          *pfVar20 = fVar40 * fVar41;
          *(float *)(lVar21 + 0x20) = fVar44;
          *(float *)(lVar21 + 0x28) = fVar42;
          pfVar23 = (float *)(ulong)*(uint *)(uVar31 + 0x18);
          if (*(uint *)(uVar31 + 0x18) <= uVar16) goto code_r0x0157f274;
          *pfVar20 = fVar36 + fVar40 * fVar41;
          uVar30 = uVar30 + 1;
        } while (uVar17 != uVar30);
        iVar6 = iVar6 + (int)uVar30;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar8);
  }
  iVar9 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c((float)(int)uVar32 * 0.5,0);
  if (iVar9 < (int)uVar32) {
    uVar8 = uVar32;
    if ((int)uVar32 < 2) {
      uVar8 = 1;
    }
    lVar21 = (long)iVar9;
    do {
      if (uVar7 < 0x7fffffff) {
        if (lVar10 == 0) goto code_r0x0157f324;
        uVar26 = 0;
        do {
          if (*(uint *)(lVar10 + 0x18) <= uVar26) goto code_r0x0157f274;
          if (lVar14 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar14 + 0x18) <= (uint)lVar21) goto code_r0x0157f274;
          if (lVar13 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar13 + 0x18) <= (uint)lVar21) goto code_r0x0157f274;
          if (lVar12 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar12 + 0x18) <= uVar26) goto code_r0x0157f274;
          if (uVar31 == 0) goto code_r0x0157f324;
          uVar17 = iVar6 + (int)uVar26;
          pfVar20 = (float *)(ulong)*(uint *)(uVar31 + 0x18);
          if (*(uint *)(uVar31 + 0x18) <= uVar17) goto code_r0x0157f274;
          fVar42 = *(float *)(lVar14 + lVar21 * 4 + 0x20);
          fVar40 = *(float *)(lVar13 + lVar21 * 4 + 0x20);
          fVar44 = *(float *)(lVar10 + 0x20 + uVar26 * 4) * fVar42 * fVar41;
          param_4 = (ulong)(uint)fVar44;
          fVar42 = fVar42 * *(float *)(lVar12 + 0x20 + uVar26 * 4) * fVar41;
          param_2 = (ulong)(uint)fVar42;
          lVar22 = uVar31 + (long)(int)uVar17 * 0xc;
          pfVar20 = (float *)(lVar22 + 0x24);
          *pfVar20 = fVar40 * fVar41;
          *(float *)(lVar22 + 0x20) = fVar44;
          *(float *)(lVar22 + 0x28) = fVar42;
          pfVar23 = (float *)(ulong)*(uint *)(uVar31 + 0x18);
          if (*(uint *)(uVar31 + 0x18) <= uVar17) goto code_r0x0157f274;
          *pfVar20 = fVar40 * fVar41 - fVar36;
          uVar26 = uVar26 + 1;
        } while (uVar8 != uVar26);
        iVar6 = iVar6 + (int)uVar26;
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != (int)uVar32);
  }
  lVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar7 * uVar32 * 6);
  param_4 = uStack_1a0;
  param_5 = uStack_1b0;
  if (uVar7 < 0x7fffffff) {
    uVar17 = 0;
    uVar8 = 0;
    uVar16 = uVar7;
    if ((int)uVar7 < 2) {
      uVar16 = 1;
    }
    do {
      if (uVar7 != 0) {
        if (lVar10 == 0) goto code_r0x0157f324;
        iVar6 = uVar17 * uVar32;
        iVar9 = (uVar17 + 1) * uVar32;
        uVar2 = *(uint *)(lVar10 + 0x18);
        uVar28 = uVar16;
        do {
          uVar29 = uVar8;
          if (uVar2 <= uVar29) goto code_r0x0157f274;
          *(int *)(lVar10 + (long)(int)uVar29 * 4 + 0x20) = iVar6;
          if ((uVar2 <= uVar29 + 1) ||
             (*(int *)(lVar10 + (long)(int)(uVar29 + 1) * 4 + 0x20) = iVar9, uVar2 <= uVar29 + 2))
          goto code_r0x0157f274;
          *(int *)(lVar10 + (long)(int)(uVar29 + 2) * 4 + 0x20) = iVar9 + 1;
          if ((uVar2 <= uVar29 + 3) ||
             ((*(int *)(lVar10 + (long)(int)(uVar29 + 3) * 4 + 0x20) = iVar6 + 1,
              uVar2 <= uVar29 + 4 ||
              (*(int *)(lVar10 + (long)(int)(uVar29 + 4) * 4 + 0x20) = iVar6, uVar2 <= uVar29 + 5)))
             ) goto code_r0x0157f274;
          *(int *)(lVar10 + (long)(int)(uVar29 + 5) * 4 + 0x20) = iVar9 + 1;
          iVar6 = iVar6 + 1;
          iVar9 = iVar9 + 1;
          uVar28 = uVar28 - 1;
          uVar8 = uVar29 + 6;
        } while (uVar28 != 0);
        uVar8 = uVar29 + 6;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar32);
  }
  if (uVar31 != 0) {
    uVar26 = *(ulong *)(uVar31 + 0x18) & 0xffffffff;
    fVar41 = (float)uStack_1a0;
    fVar36 = (float)uStack_1b0;
    iVar6 = (int)*(ulong *)(uVar31 + 0x18);
    if (iStack_1b4 == 0) {
      if (0 < iVar6) {
        if (uVar26 != 0) {
          uVar30 = 0;
          pfVar18 = (float *)(uVar31 + 0x28);
          do {
            fVar42 = pfVar18[-2];
            param_2 = (ulong)(uint)(fVar41 + pfVar18[-1]);
            fVar40 = fVar1 + *pfVar18;
            pfVar18[-2] = fVar41 + pfVar18[-1];
            pfVar18[-1] = fVar36 + fVar42;
            *pfVar18 = fVar40;
            if (uVar26 - 1 == uVar30) goto code_r0x0157f1d8;
            uVar30 = uVar30 + 1;
            pfVar18 = pfVar18 + 3;
          } while (uVar30 < *(uint *)(uVar31 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if (iStack_1b4 == 1) {
      if (0 < iVar6) {
        if (uVar26 != 0) {
          uVar34 = 0;
          pfVar18 = (float *)(uVar31 + 0x28);
          do {
            param_2 = CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(pfVar18 + -2) >> 0x20),
                               fVar41 + (float)*(undefined8 *)(pfVar18 + -2));
            *(ulong *)(pfVar18 + -2) = param_2;
            *pfVar18 = fVar1 + *pfVar18;
            param_4 = CONCAT44(fVar36,fVar41);
            if (uVar26 - 1 == uVar34) goto code_r0x0157f280;
            uVar34 = uVar34 + 1;
            pfVar18 = pfVar18 + 3;
          } while (uVar34 < *(uint *)(uVar31 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if ((iStack_1b4 == 2) && (0 < iVar6)) {
      if (uVar26 != 0) {
        uVar30 = 0;
        pfVar18 = (float *)(uVar31 + 0x28);
        do {
          fVar42 = pfVar18[-1];
          fVar40 = fVar36 + *pfVar18;
          param_2 = (ulong)(uint)(fVar1 + fVar42);
          pfVar18[-2] = fVar41 + pfVar18[-2];
          pfVar18[-1] = fVar40;
          *pfVar18 = fVar1 + fVar42;
          if (uVar26 - 1 == uVar30) goto code_r0x0157f1d8;
          uVar30 = uVar30 + 1;
          pfVar18 = pfVar18 + 3;
        } while (uVar30 < *(uint *)(uVar31 + 0x18));
      }
code_r0x0157f274:
      uVar33 = func_0x00f78b24();
      func_0x00f78ac0(uVar33,0);
    }
code_r0x0157f280:
    uVar26 = func_0x00f78aec(/*UnityEngine.Mesh_TypeInfo*/ uRam0000000003d23388);
    /*UnityEngine.Mesh$$.ctor*/ func_0x0323f420(uVar26,0);
    uVar34 = 0;
    if (uVar26 != 0) {
      /*UnityEngine.Object$$set_name*/ func_0x03248994(uVar26,/*STR('ProceduralCapsule')*/ uRam0000000003d715a8,0);
      /*UnityEngine.Mesh$$set_vertices*/ func_0x03241d34(uVar26,uVar31,0);
      /*UnityEngine.Mesh$$set_triangles*/ func_0x032448a4(uVar26,lVar10,0);
      /*UnityEngine.Mesh$$Optimize*/ func_0x032470b4(uVar26,0);
      /*UnityEngine.Mesh$$RecalculateBounds*/ func_0x03246a70(uVar26,0);
      return uVar26;
    }
  }
code_r0x0157f324:
  func_0x00f78af4();
  puStack_1c8 = &Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility;
  pfVar18 = pfVar20;
  lStack_200 = lVar13;
  lStack_1f8 = lVar12;
  lStack_1f0 = lVar10;
  uStack_1e8 = uVar25;
  uStack_1e0 = uVar34;
  uStack_1d8 = uVar31;
  ppppuStack_1d0 = &pppuStack_f0;
  if ((bRam0000000003eb509d & 1) == 0) {
    func_0x00f78a20(0x3d32a28);
    func_0x00f78a20(0x3d32a30);
    func_0x00f78a20(0x3d32a38);
    func_0x00f78a20(0x3d3b278);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509d = 1;
  }
  uStack_218 = 0;
  uStack_210 = 0;
  lStack_208 = 0;
  if (extraout_x1_01 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_218,extraout_x1_01,uRam0000000003d3b278);
    while( true ) {
      do {
        uVar34 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_218,uRam0000000003d32a30);
        lVar10 = lStack_208;
        if ((uVar34 & 1) == 0) {
          uVar34 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_218,uRam0000000003d32a28);
          return uVar34;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar34 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar10,0,0);
      } while ((uVar34 & 1) != 0);
      if (lVar10 == 0) break;
      /*UnityEngine.Renderer$$set_forceRenderingOff*/ func_0x0325bc24(lVar10,(uint)pfVar20 ^ 1,0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x157f45c);
    (*pcVar3)();
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar15 = (long *)___cxa_begin_catch();
    lVar10 = *plVar15;
    ___cxa_end_catch();
    uVar34 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_218,uRam0000000003eb5000);
    if (lVar10 == 0) {
      return uVar34;
    }
    func_0x00f78ac0(lVar10,0);
  }
  auVar45 = __Unwind_Resume();
  lVar10 = auVar45._8_8_;
  uVar25 = auVar45._0_8_;
  uVar34 = uVar25;
  pfVar20 = pfVar18;
  pfVar19 = pfVar23;
  pfVar24 = param_12;
  if ((bRam0000000003eb509e & 1) == 0) {
    func_0x00f78a20(0x3d3d050);
    func_0x00f78a20(0x3d3d058);
    func_0x00f78a20(0x3d3d060);
    uVar34 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb509e = 1;
  }
  uVar39 = (undefined4)param_2;
  uVar38 = (undefined4)param_4;
  uVar35 = (undefined4)param_5;
  if (lVar10 != 0) {
    uVar31 = (ulong)*(uint *)(lVar10 + 0x18);
    if (0 < (int)*(uint *)(lVar10 + 0x18)) {
      uVar26 = 0;
      uVar30 = uVar31 - 1;
      lVar12 = 0x20;
      while( true ) {
        if (uVar31 <= uVar26) {
          uVar34 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar39 = (undefined4)param_2;
        uVar38 = (undefined4)param_4;
        uVar35 = (undefined4)param_5;
        lVar13 = *(long *)(lVar10 + 0x10) + lVar12;
        pfVar20 = *(float **)(lVar13 + 8);
        if (pfVar20 != (float *)0x0) {
          pfVar19 = *(float **)(lVar13 + 0x18);
          uVar34 = *(ulong *)(lVar13 + 0x20);
          if ((uVar34 & 0xff0000) != 0) {
            pfVar18 = param_13;
          }
          if ((uVar34 & 0xff) == 0) {
            pfVar23 = pfVar18;
          }
          if ((uVar34 & 0xff00) == 0) {
            param_12 = pfVar23;
          }
          goto code_r0x0157f644;
        }
        if (uVar30 == uVar26) break;
        uVar31 = (ulong)*(uint *)(lVar10 + 0x18);
        lVar12 = lVar12 + 0x28;
        uVar26 = uVar26 + 1;
      }
    }
    return uVar34;
  }
  uVar25 = func_0x00f78af4();
  param_12 = pfVar24;
code_r0x0157f644:
  pfVar18 = pfVar20;
  pfVar23 = pfVar19;
  if ((bRam0000000003eb509f & 1) == 0) {
    func_0x00f78a20(0x3d27140);
    bRam0000000003eb509f = 1;
  }
  if (pfVar20 == (float *)0x0) {
    uVar25 = func_0x00f78af4();
    uVar37 = extraout_s0_00;
  }
  else {
    lVar10 = *(long *)pfVar20;
    uVar34 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar34 != 0) {
      piVar27 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar11 = (undefined8 *)(lVar10 + (long)(*piVar27 + 1) * 0x10 + 0x138);
          param_7 = uVar38;
          goto code_r0x0157f6fc;
        }
        piVar27 = piVar27 + 4;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x00fac1f0(pfVar20,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,1);
    param_7 = uVar38;
code_r0x0157f6fc:
    uVar37 = (*(code *)*puVar11)(pfVar20,puVar11[1]);
    lVar10 = *(long *)pfVar20;
    uVar34 = (ulong)*(ushort *)(lVar10 + 0x12a);
    param_6 = fVar40;
    uVar35 = uVar39;
    if (uVar34 != 0) {
      piVar27 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar11 = (undefined8 *)(lVar10 + (long)(*piVar27 + 2) * 0x10 + 0x138);
          goto code_r0x0157f764;
        }
        piVar27 = piVar27 + 4;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x00fac1f0(pfVar20,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,2);
code_r0x0157f764:
    uVar38 = (*(code *)*puVar11)(pfVar20,puVar11[1]);
    lVar10 = *(long *)pfVar20;
    uVar34 = (ulong)*(ushort *)(lVar10 + 0x12a);
    fStack_358 = param_6;
    uStack_35c = uVar35;
    if (uVar34 != 0) {
      piVar27 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar11 = (undefined8 *)(lVar10 + (long)(*piVar27 + 3) * 0x10 + 0x138);
          goto code_r0x0157f7d0;
        }
        piVar27 = piVar27 + 4;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
    puVar11 = (undefined8 *)func_0x00fac1f0(pfVar20,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,3);
code_r0x0157f7d0:
    uStack_360 = (*(code *)*puVar11)(pfVar20,puVar11[1]);
    pfVar18 = pfVar19;
    pfVar23 = param_12;
  }
  if ((bRam0000000003eb50a0 & 1) == 0) {
    func_0x00f78a20(0x3d57700);
    func_0x00f78a20(0x3d57708);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar34 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(pfVar23,0,0);
  if ((uVar34 & 1) != 0) {
    return 0;
  }
  lVar10 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar10,pfVar18,0);
  if ((lVar10 != 0) && (lVar10 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar10,0), lVar10 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(uVar37,uVar39,fVar40,lVar10,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(uVar38,uVar35,param_6,param_7,lVar10,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uStack_360,uStack_35c,fStack_358,lVar10,0);
    if (*(long *)(uVar25 + 0x58) != 0) {
      uVar33 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(uVar25 + 0x58),0);
      goto code_r0x03275ee0;
    }
  }
  func_0x00f78af4();
  uVar33 = func_0x00f78b14();
  lVar12 = func_0x00f78ac0(uVar33,0);
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar10 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar10,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(lVar12 + 0x58) = lVar10;
  if (lVar10 != 0) {
    lVar10 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar10,0);
    if ((*(long *)(lVar12 + 0x50) != 0) &&
       (uVar33 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar12 + 0x50),0), lVar10 != 0)) {
code_r0x03275ee0:
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar34 = (*pcRam0000000003ec1898)(lVar10,uVar33,0);
      return uVar34;
    }
  }
  lVar10 = func_0x00f78af4();
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar33 = *(undefined8 *)(lVar10 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar34 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar33,0,0);
  if ((uVar34 & 1) == 0) {
    uVar33 = *(undefined8 *)(lVar10 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar34 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar33,0);
    *(undefined8 *)(lVar10 + 0x58) = 0;
  }
  return uVar34;
code_r0x0157f1d8:
  if (lVar10 != 0) {
    uVar7 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar7) {
      uVar32 = 0;
      do {
        if ((uVar7 <= uVar32) || (uVar8 = uVar32 + 1, uVar7 <= uVar8)) goto code_r0x0157f274;
        lVar14 = lVar10 + 0x20;
        uVar35 = *(undefined4 *)(lVar14 + (long)(int)uVar32 * 4);
        *(undefined4 *)(lVar14 + (long)(int)uVar32 * 4) =
             *(undefined4 *)(lVar14 + (long)(int)uVar8 * 4);
        *(undefined4 *)(lVar14 + (long)(int)uVar8 * 4) = uVar35;
        uVar32 = uVar32 + 3;
      } while ((int)uVar32 < (int)uVar7);
    }
    goto code_r0x0157f280;
  }
  goto code_r0x0157f324;
}



// ============================================================
// RVA: 0x157e930 | Atlas.Gameplay.DebugVisualiser.CreateCollider
// ============================================================

/* WARNING: Possible PIC construction at 0x0157f594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157f814) */
/* WARNING: Removing unreachable block (ram,0x0157f598) */
/* WARNING: Removing unreachable block (ram,0x0157f5b0) */
/* WARNING: Removing unreachable block (ram,0x0157f5b8) */
/* WARNING: Removing unreachable block (ram,0x0157f5bc) */
/* WARNING: Removing unreachable block (ram,0x0157f5d0) */
/* WARNING: Removing unreachable block (ram,0x0157f5d4) */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_DebugVisualiser__CreateCollider
                (ulong *param_1,undefined1 param_2 [16],ulong param_3,undefined1 param_4 [16],
                ulong param_5,ulong param_6,float param_7,undefined4 param_8,undefined8 param_9,
                long param_10,float *param_11,float *param_12,float *param_13,float *param_14)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int extraout_w1;
  uint uVar15;
  uint uVar16;
  int extraout_w1_00;
  undefined8 extraout_x1;
  long extraout_x1_00;
  float *pfVar17;
  float *pfVar18;
  long lVar19;
  long lVar20;
  float *pfVar21;
  float *pfVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  int *piVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  undefined8 uVar33;
  float *pfVar34;
  float extraout_s0;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 extraout_s0_00;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined4 uStack_320;
  undefined4 uStack_31c;
  float fStack_318;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined1 ***pppuStack_190;
  undefined *puStack_188;
  int iStack_174;
  ulong uStack_170;
  ulong uStack_160;
  float fStack_150;
  uint uStack_14c;
  ulong uStack_148;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_58;
  
  uVar35 = param_4._4_4_;
  fVar40 = param_4._0_4_;
  pfVar17 = param_11;
  pfVar21 = param_12;
  if ((bRam0000000003eb50a4 & 1) == 0) {
    func_0x00f78a20(0x3d53750);
    func_0x00f78a20(0x3d27140);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d27150);
    bRam0000000003eb50a4 = 1;
  }
  uStack_58 = 0;
  if ((param_10 != 0) &&
     (pfVar17 = pfRam0000000003d53750, /*UnityEngine.Component$$TryGetComponent<UniversalAdditionalCameraData>*/ func_0x018395fc(param_10,&uStack_58),
     param_12 != (float *)0x0)) {
    lVar23 = *(long *)param_12;
    uVar25 = (ulong)*(ushort *)(lVar23 + 0x12a);
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar9 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_0157ea20;
        }
        piVar27 = piVar27 + 4;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(param_12,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,0);
LAB_0157ea20:
    uVar25 = (*(code *)*puVar9)(param_12,puVar9[1]);
    uVar5 = /*UnityEngine.Collider$$get_isTrigger*/ func_0x0329e9e4(param_10,0);
    uVar33 = uStack_58;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar33,0,0);
    if (*(byte *)(*(long *)param_12 + 300) < *(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300)) {
      bVar4 = false;
    }
    else {
      bVar4 = *(long *)(*(long *)(*(long *)param_12 + 200) +
                        (ulong)*(byte *)(/*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150 + 300) * 8 + -8) ==
              /*Atlas.Gameplay.DebugVisualiser.TransformSourceReplicator_TypeInfo*/ lRam0000000003d27150;
    }
    *param_1 = (ulong)param_11;
    param_1[1] = (ulong)param_12;
    param_1[2] = 0;
    param_1[3] = uVar25;
    *(undefined1 *)(param_1 + 4) = uVar5;
    *(char *)((long)param_1 + 0x21) = (char)uVar10;
    *(bool *)((long)param_1 + 0x22) = bVar4;
    *(undefined4 *)((long)param_1 + 0x23) = 0;
    *(undefined1 *)((long)param_1 + 0x27) = 0;
    return uVar10;
  }
  func_0x00f78af4();
  puStack_68 = &Atlas_Gameplay_DebugVisualiser__GetReplicator;
  pfVar18 = pfVar17;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb509b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509b = 1;
  }
  if (pfVar17 != (float *)0x0) {
    fVar1 = pfVar17[6];
    if (0 < (int)fVar1) {
      fVar41 = 0.0;
      do {
        if ((uint)fVar1 <= (uint)fVar41) {
          uVar33 = func_0x00f78b24();
          func_0x00f78ac0(uVar33,0);
          goto code_r0x0157ebb8;
        }
        uVar25 = *(ulong *)(pfVar17 + (long)(int)fVar41 * 2 + 8);
        if (uVar25 == 0) goto code_r0x0157ebb8;
        uVar33 = *(undefined8 *)(uVar25 + 0x38);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pfVar18 = (float *)0x0;
        uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar33,extraout_x1);
        if ((uVar10 & 1) != 0) {
          return uVar25;
        }
        fVar41 = (float)((int)fVar41 + 1);
        fVar1 = pfVar17[6];
      } while ((int)fVar41 < (int)fVar1);
    }
    return 0;
  }
code_r0x0157ebb8:
  uVar6 = func_0x00f78af4();
  puStack_a8 = &Atlas_Gameplay_DebugVisualiser__CreateCapsuleMesh;
  fVar1 = (float)param_6;
  uStack_160 = CONCAT44(uVar35,fVar40);
  fVar41 = (float)param_3;
  uVar25 = 0x3d1f3d8;
  iStack_174 = extraout_w1;
  uStack_170 = param_5;
  fStack_150 = extraout_s0;
  ppuStack_b0 = &puStack_70;
  if ((bRam0000000003eb50a6 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d1f3d8);
    func_0x00f78a20(0x3d1f5e0);
    func_0x00f78a20(0x3d715a8);
    bRam0000000003eb50a6 = 1;
  }
  uVar6 = (uVar6 & 1) + uVar6;
  uVar31 = (ulong)uVar6;
  uVar10 = (ulong)(uVar6 + 1);
  lVar23 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar10);
  lVar11 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar10);
  lVar12 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar10);
  uStack_148 = uVar10;
  lVar13 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar10);
  fVar36 = _UNK_033f850c;
  uStack_14c = uVar6;
  if (uVar6 < 0x7fffffff) {
    if (lVar23 == 0) goto code_r0x0157f324;
    uVar31 = 0;
    param_3 = 0x43340000;
    uVar32 = *(uint *)(lVar23 + 0x18);
    uVar25 = lVar11 + 0x20;
    uVar10 = lVar13 + 0x20;
    fVar44 = 0.0;
    fVar42 = 0.0;
    do {
      if (uVar32 == uVar31) goto code_r0x0157f274;
      uVar35 = ___sincosf_stret(fVar44 * fVar36);
      *(undefined4 *)(lVar23 + 0x20 + uVar31 * 4) = uVar35;
      if (lVar11 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar11 + 0x18) <= uVar31) goto code_r0x0157f274;
      *(int *)(uVar25 + uVar31 * 4) = (int)param_3;
      fVar43 = fVar42 * fVar36;
      uVar35 = _cosf(fVar43);
      if (lVar12 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar12 + 0x18) <= uVar31) goto code_r0x0157f274;
      *(undefined4 *)(lVar12 + 0x20 + uVar31 * 4) = uVar35;
      uVar35 = _sinf(fVar43);
      if (lVar13 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar13 + 0x18) <= uVar31) goto code_r0x0157f274;
      *(undefined4 *)(uVar10 + uVar31 * 4) = uVar35;
      fVar44 = 360.0 / (float)(int)uVar6 + fVar44;
      fVar42 = 180.0 / (float)(int)uVar6 + fVar42;
      uVar31 = uVar31 + 1;
    } while (uStack_148 != uVar31);
  }
  uVar10 = uStack_148;
  uVar6 = uStack_14c;
  uVar25 = (ulong)uStack_14c;
  uVar32 = (uint)uStack_148;
  uVar31 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,(uStack_14c + 2) * uVar32);
  param_3 = 0x3f000000;
  fVar36 = (fStack_150 - (fVar41 + fVar41)) * 0.5;
  fVar40 = 0.0;
  if (fVar36 <= 0.0) {
    fVar36 = 0.0;
  }
  uVar7 = /*UnityEngine.Mathf$$CeilToInt*/ func_0x0323d108((float)(int)uVar32 * 0.5,0);
  if ((int)uVar7 < 1) {
    iVar26 = 0;
  }
  else {
    uVar24 = 0;
    iVar26 = 0;
    uVar16 = uVar32;
    if ((int)uVar32 < 2) {
      uVar16 = 1;
    }
    do {
      if (uVar6 < 0x7fffffff) {
        if (lVar23 == 0) goto code_r0x0157f324;
        uVar30 = 0;
        do {
          if (*(uint *)(lVar23 + 0x18) <= uVar30) goto code_r0x0157f274;
          if (lVar13 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar13 + 0x18) <= uVar24) goto code_r0x0157f274;
          if (lVar12 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar12 + 0x18) <= uVar24) goto code_r0x0157f274;
          if (lVar11 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar11 + 0x18) <= uVar30) goto code_r0x0157f274;
          if (uVar31 == 0) goto code_r0x0157f324;
          uVar15 = iVar26 + (int)uVar30;
          pfVar18 = (float *)(ulong)*(uint *)(uVar31 + 0x18);
          if (*(uint *)(uVar31 + 0x18) <= uVar15) goto code_r0x0157f274;
          fVar42 = *(float *)(lVar13 + uVar24 * 4 + 0x20);
          fVar40 = *(float *)(lVar12 + uVar24 * 4 + 0x20);
          fVar44 = *(float *)(lVar23 + 0x20 + uVar30 * 4) * fVar42 * fVar41;
          param_5 = (ulong)(uint)fVar44;
          fVar42 = fVar42 * *(float *)(lVar11 + 0x20 + uVar30 * 4) * fVar41;
          param_3 = (ulong)(uint)fVar42;
          lVar19 = uVar31 + (long)(int)uVar15 * 0xc;
          pfVar18 = (float *)(lVar19 + 0x24);
          *pfVar18 = fVar40 * fVar41;
          *(float *)(lVar19 + 0x20) = fVar44;
          *(float *)(lVar19 + 0x28) = fVar42;
          pfVar21 = (float *)(ulong)*(uint *)(uVar31 + 0x18);
          if (*(uint *)(uVar31 + 0x18) <= uVar15) goto code_r0x0157f274;
          *pfVar18 = fVar36 + fVar40 * fVar41;
          uVar30 = uVar30 + 1;
        } while (uVar16 != uVar30);
        iVar26 = iVar26 + (int)uVar30;
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar7);
  }
  iVar8 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c((float)(int)uVar32 * 0.5,0);
  if (iVar8 < (int)uVar32) {
    uVar7 = uVar32;
    if ((int)uVar32 < 2) {
      uVar7 = 1;
    }
    lVar19 = (long)iVar8;
    do {
      if (uVar6 < 0x7fffffff) {
        if (lVar23 == 0) goto code_r0x0157f324;
        uVar24 = 0;
        do {
          if (*(uint *)(lVar23 + 0x18) <= uVar24) goto code_r0x0157f274;
          if (lVar13 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar13 + 0x18) <= (uint)lVar19) goto code_r0x0157f274;
          if (lVar12 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar12 + 0x18) <= (uint)lVar19) goto code_r0x0157f274;
          if (lVar11 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar11 + 0x18) <= uVar24) goto code_r0x0157f274;
          if (uVar31 == 0) goto code_r0x0157f324;
          uVar16 = iVar26 + (int)uVar24;
          pfVar18 = (float *)(ulong)*(uint *)(uVar31 + 0x18);
          if (*(uint *)(uVar31 + 0x18) <= uVar16) goto code_r0x0157f274;
          fVar42 = *(float *)(lVar13 + lVar19 * 4 + 0x20);
          fVar40 = *(float *)(lVar12 + lVar19 * 4 + 0x20);
          fVar44 = *(float *)(lVar23 + 0x20 + uVar24 * 4) * fVar42 * fVar41;
          param_5 = (ulong)(uint)fVar44;
          fVar42 = fVar42 * *(float *)(lVar11 + 0x20 + uVar24 * 4) * fVar41;
          param_3 = (ulong)(uint)fVar42;
          lVar20 = uVar31 + (long)(int)uVar16 * 0xc;
          pfVar18 = (float *)(lVar20 + 0x24);
          *pfVar18 = fVar40 * fVar41;
          *(float *)(lVar20 + 0x20) = fVar44;
          *(float *)(lVar20 + 0x28) = fVar42;
          pfVar21 = (float *)(ulong)*(uint *)(uVar31 + 0x18);
          if (*(uint *)(uVar31 + 0x18) <= uVar16) goto code_r0x0157f274;
          *pfVar18 = fVar40 * fVar41 - fVar36;
          uVar24 = uVar24 + 1;
        } while (uVar7 != uVar24);
        iVar26 = iVar26 + (int)uVar24;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != (int)uVar32);
  }
  lVar23 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar6 * uVar32 * 6);
  param_5 = uStack_160;
  param_6 = uStack_170;
  if (uVar6 < 0x7fffffff) {
    uVar16 = 0;
    uVar7 = 0;
    uVar15 = uVar6;
    if ((int)uVar6 < 2) {
      uVar15 = 1;
    }
    do {
      if (uVar6 != 0) {
        if (lVar23 == 0) goto code_r0x0157f324;
        iVar26 = uVar16 * uVar32;
        iVar8 = (uVar16 + 1) * uVar32;
        uVar2 = *(uint *)(lVar23 + 0x18);
        uVar28 = uVar15;
        do {
          uVar29 = uVar7;
          if (uVar2 <= uVar29) goto code_r0x0157f274;
          *(int *)(lVar23 + (long)(int)uVar29 * 4 + 0x20) = iVar26;
          if ((uVar2 <= uVar29 + 1) ||
             (*(int *)(lVar23 + (long)(int)(uVar29 + 1) * 4 + 0x20) = iVar8, uVar2 <= uVar29 + 2))
          goto code_r0x0157f274;
          *(int *)(lVar23 + (long)(int)(uVar29 + 2) * 4 + 0x20) = iVar8 + 1;
          if ((uVar2 <= uVar29 + 3) ||
             ((*(int *)(lVar23 + (long)(int)(uVar29 + 3) * 4 + 0x20) = iVar26 + 1,
              uVar2 <= uVar29 + 4 ||
              (*(int *)(lVar23 + (long)(int)(uVar29 + 4) * 4 + 0x20) = iVar26, uVar2 <= uVar29 + 5))
             )) goto code_r0x0157f274;
          *(int *)(lVar23 + (long)(int)(uVar29 + 5) * 4 + 0x20) = iVar8 + 1;
          iVar26 = iVar26 + 1;
          iVar8 = iVar8 + 1;
          uVar28 = uVar28 - 1;
          uVar7 = uVar29 + 6;
        } while (uVar28 != 0);
        uVar7 = uVar29 + 6;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar32);
  }
  if (uVar31 != 0) {
    uVar24 = *(ulong *)(uVar31 + 0x18) & 0xffffffff;
    fVar41 = (float)uStack_160;
    fVar36 = (float)uStack_170;
    iVar26 = (int)*(ulong *)(uVar31 + 0x18);
    if (iStack_174 == 0) {
      if (0 < iVar26) {
        if (uVar24 != 0) {
          uVar30 = 0;
          pfVar17 = (float *)(uVar31 + 0x28);
          do {
            fVar42 = pfVar17[-2];
            param_3 = (ulong)(uint)(fVar41 + pfVar17[-1]);
            fVar40 = fVar1 + *pfVar17;
            pfVar17[-2] = fVar41 + pfVar17[-1];
            pfVar17[-1] = fVar36 + fVar42;
            *pfVar17 = fVar40;
            if (uVar24 - 1 == uVar30) goto code_r0x0157f1d8;
            uVar30 = uVar30 + 1;
            pfVar17 = pfVar17 + 3;
          } while (uVar30 < *(uint *)(uVar31 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if (iStack_174 == 1) {
      if (0 < iVar26) {
        if (uVar24 != 0) {
          uVar25 = 0;
          pfVar17 = (float *)(uVar31 + 0x28);
          do {
            param_3 = CONCAT44(fVar36 + (float)((ulong)*(undefined8 *)(pfVar17 + -2) >> 0x20),
                               fVar41 + (float)*(undefined8 *)(pfVar17 + -2));
            *(ulong *)(pfVar17 + -2) = param_3;
            *pfVar17 = fVar1 + *pfVar17;
            param_5 = CONCAT44(fVar36,fVar41);
            if (uVar24 - 1 == uVar25) goto code_r0x0157f280;
            uVar25 = uVar25 + 1;
            pfVar17 = pfVar17 + 3;
          } while (uVar25 < *(uint *)(uVar31 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if ((iStack_174 == 2) && (0 < iVar26)) {
      if (uVar24 != 0) {
        uVar30 = 0;
        pfVar17 = (float *)(uVar31 + 0x28);
        do {
          fVar42 = pfVar17[-1];
          fVar40 = fVar36 + *pfVar17;
          param_3 = (ulong)(uint)(fVar1 + fVar42);
          pfVar17[-2] = fVar41 + pfVar17[-2];
          pfVar17[-1] = fVar40;
          *pfVar17 = fVar1 + fVar42;
          if (uVar24 - 1 == uVar30) goto code_r0x0157f1d8;
          uVar30 = uVar30 + 1;
          pfVar17 = pfVar17 + 3;
        } while (uVar30 < *(uint *)(uVar31 + 0x18));
      }
code_r0x0157f274:
      uVar33 = func_0x00f78b24();
      func_0x00f78ac0(uVar33,0);
    }
code_r0x0157f280:
    uVar24 = func_0x00f78aec(/*UnityEngine.Mesh_TypeInfo*/ uRam0000000003d23388);
    /*UnityEngine.Mesh$$.ctor*/ func_0x0323f420(uVar24,0);
    uVar25 = 0;
    if (uVar24 != 0) {
      /*UnityEngine.Object$$set_name*/ func_0x03248994(uVar24,/*STR('ProceduralCapsule')*/ uRam0000000003d715a8,0);
      /*UnityEngine.Mesh$$set_vertices*/ func_0x03241d34(uVar24,uVar31,0);
      /*UnityEngine.Mesh$$set_triangles*/ func_0x032448a4(uVar24,lVar23,0);
      /*UnityEngine.Mesh$$Optimize*/ func_0x032470b4(uVar24,0);
      /*UnityEngine.Mesh$$RecalculateBounds*/ func_0x03246a70(uVar24,0);
      return uVar24;
    }
  }
code_r0x0157f324:
  func_0x00f78af4();
  puStack_188 = &Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility;
  pfVar17 = pfVar18;
  lStack_1c0 = lVar12;
  lStack_1b8 = lVar11;
  lStack_1b0 = lVar23;
  uStack_1a8 = uVar10;
  uStack_1a0 = uVar25;
  uStack_198 = uVar31;
  pppuStack_190 = &ppuStack_b0;
  if ((bRam0000000003eb509d & 1) == 0) {
    func_0x00f78a20(0x3d32a28);
    func_0x00f78a20(0x3d32a30);
    func_0x00f78a20(0x3d32a38);
    func_0x00f78a20(0x3d3b278);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509d = 1;
  }
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  lStack_1c8 = 0;
  if (extraout_x1_00 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1d8,extraout_x1_00,uRam0000000003d3b278);
    while( true ) {
      do {
        uVar25 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1d8,uRam0000000003d32a30);
        lVar23 = lStack_1c8;
        if ((uVar25 & 1) == 0) {
          uVar25 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1d8,uRam0000000003d32a28);
          return uVar25;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar25 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar23,0,0);
      } while ((uVar25 & 1) != 0);
      if (lVar23 == 0) break;
      /*UnityEngine.Renderer$$set_forceRenderingOff*/ func_0x0325bc24(lVar23,(uint)pfVar18 ^ 1,0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x157f45c);
    (*pcVar3)();
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar14 = (long *)___cxa_begin_catch();
    lVar23 = *plVar14;
    ___cxa_end_catch();
    uVar25 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1d8,uRam0000000003eb5000);
    if (lVar23 == 0) {
      return uVar25;
    }
    func_0x00f78ac0(lVar23,0);
  }
  auVar45 = __Unwind_Resume();
  lVar23 = auVar45._8_8_;
  uVar10 = auVar45._0_8_;
  uVar25 = uVar10;
  pfVar34 = pfVar17;
  pfVar18 = pfVar21;
  pfVar22 = param_13;
  if ((bRam0000000003eb509e & 1) == 0) {
    func_0x00f78a20(0x3d3d050);
    func_0x00f78a20(0x3d3d058);
    func_0x00f78a20(0x3d3d060);
    uVar25 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb509e = 1;
  }
  uVar39 = (undefined4)param_3;
  uVar38 = (undefined4)param_5;
  uVar35 = (undefined4)param_6;
  if (lVar23 != 0) {
    uVar31 = (ulong)*(uint *)(lVar23 + 0x18);
    if (0 < (int)*(uint *)(lVar23 + 0x18)) {
      uVar24 = 0;
      uVar30 = uVar31 - 1;
      lVar11 = 0x20;
      while( true ) {
        if (uVar31 <= uVar24) {
          uVar25 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar39 = (undefined4)param_3;
        uVar38 = (undefined4)param_5;
        uVar35 = (undefined4)param_6;
        lVar12 = *(long *)(lVar23 + 0x10) + lVar11;
        pfVar34 = *(float **)(lVar12 + 8);
        if (pfVar34 != (float *)0x0) {
          pfVar18 = *(float **)(lVar12 + 0x18);
          uVar25 = *(ulong *)(lVar12 + 0x20);
          if ((uVar25 & 0xff0000) != 0) {
            pfVar17 = param_14;
          }
          if ((uVar25 & 0xff) == 0) {
            pfVar21 = pfVar17;
          }
          if ((uVar25 & 0xff00) == 0) {
            param_13 = pfVar21;
          }
          goto code_r0x0157f644;
        }
        if (uVar30 == uVar24) break;
        uVar31 = (ulong)*(uint *)(lVar23 + 0x18);
        lVar11 = lVar11 + 0x28;
        uVar24 = uVar24 + 1;
      }
    }
    return uVar25;
  }
  uVar10 = func_0x00f78af4();
  param_13 = pfVar22;
code_r0x0157f644:
  pfVar21 = pfVar34;
  pfVar17 = pfVar18;
  if ((bRam0000000003eb509f & 1) == 0) {
    func_0x00f78a20(0x3d27140);
    bRam0000000003eb509f = 1;
  }
  if (pfVar34 == (float *)0x0) {
    uVar10 = func_0x00f78af4();
    uVar37 = extraout_s0_00;
  }
  else {
    lVar23 = *(long *)pfVar34;
    uVar25 = (ulong)*(ushort *)(lVar23 + 0x12a);
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar9 = (undefined8 *)(lVar23 + (long)(*piVar27 + 1) * 0x10 + 0x138);
          param_8 = uVar38;
          goto code_r0x0157f6fc;
        }
        piVar27 = piVar27 + 4;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(pfVar34,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,1);
    param_8 = uVar38;
code_r0x0157f6fc:
    uVar37 = (*(code *)*puVar9)(pfVar34,puVar9[1]);
    lVar23 = *(long *)pfVar34;
    uVar25 = (ulong)*(ushort *)(lVar23 + 0x12a);
    param_7 = fVar40;
    uVar35 = uVar39;
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar9 = (undefined8 *)(lVar23 + (long)(*piVar27 + 2) * 0x10 + 0x138);
          goto code_r0x0157f764;
        }
        piVar27 = piVar27 + 4;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(pfVar34,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,2);
code_r0x0157f764:
    uVar38 = (*(code *)*puVar9)(pfVar34,puVar9[1]);
    lVar23 = *(long *)pfVar34;
    uVar25 = (ulong)*(ushort *)(lVar23 + 0x12a);
    fStack_318 = param_7;
    uStack_31c = uVar35;
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar9 = (undefined8 *)(lVar23 + (long)(*piVar27 + 3) * 0x10 + 0x138);
          goto code_r0x0157f7d0;
        }
        piVar27 = piVar27 + 4;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    puVar9 = (undefined8 *)func_0x00fac1f0(pfVar34,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,3);
code_r0x0157f7d0:
    uStack_320 = (*(code *)*puVar9)(pfVar34,puVar9[1]);
    pfVar21 = pfVar18;
    pfVar17 = param_13;
  }
  if ((bRam0000000003eb50a0 & 1) == 0) {
    func_0x00f78a20(0x3d57700);
    func_0x00f78a20(0x3d57708);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar25 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(pfVar17,0,0);
  if ((uVar25 & 1) != 0) {
    return 0;
  }
  lVar23 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar23,pfVar21,0);
  if ((lVar23 != 0) && (lVar23 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar23,0), lVar23 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(uVar37,uVar39,fVar40,lVar23,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(uVar38,uVar35,param_7,param_8,lVar23,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uStack_320,uStack_31c,fStack_318,lVar23,0);
    if (*(long *)(uVar10 + 0x58) != 0) {
      uVar33 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(uVar10 + 0x58),0);
      goto code_r0x03275ee0;
    }
  }
  func_0x00f78af4();
  uVar33 = func_0x00f78b14();
  lVar11 = func_0x00f78ac0(uVar33,0);
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar23 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar23,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(lVar11 + 0x58) = lVar23;
  if (lVar23 != 0) {
    lVar23 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar23,0);
    if ((*(long *)(lVar11 + 0x50) != 0) &&
       (uVar33 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar11 + 0x50),0), lVar23 != 0)) {
code_r0x03275ee0:
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar25 = (*pcRam0000000003ec1898)(lVar23,uVar33,0);
      return uVar25;
    }
  }
  lVar23 = func_0x00f78af4();
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar33 = *(undefined8 *)(lVar23 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar25 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar33,0,0);
  if ((uVar25 & 1) == 0) {
    uVar33 = *(undefined8 *)(lVar23 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar25 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar33,0);
    *(undefined8 *)(lVar23 + 0x58) = 0;
  }
  return uVar25;
code_r0x0157f1d8:
  if (lVar23 != 0) {
    uVar6 = *(uint *)(lVar23 + 0x18);
    if (0 < (int)uVar6) {
      uVar32 = 0;
      do {
        if ((uVar6 <= uVar32) || (uVar7 = uVar32 + 1, uVar6 <= uVar7)) goto code_r0x0157f274;
        lVar13 = lVar23 + 0x20;
        uVar35 = *(undefined4 *)(lVar13 + (long)(int)uVar32 * 4);
        *(undefined4 *)(lVar13 + (long)(int)uVar32 * 4) =
             *(undefined4 *)(lVar13 + (long)(int)uVar7 * 4);
        *(undefined4 *)(lVar13 + (long)(int)uVar7 * 4) = uVar35;
        uVar32 = uVar32 + 3;
      } while ((int)uVar32 < (int)uVar6);
    }
    goto code_r0x0157f280;
  }
  goto code_r0x0157f324;
}



// ============================================================
// RVA: 0x157eae4 | Atlas.Gameplay.DebugVisualiser.GetReplicator
// ============================================================

/* WARNING: Possible PIC construction at 0x0157f594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157f814) */
/* WARNING: Removing unreachable block (ram,0x0157f598) */
/* WARNING: Removing unreachable block (ram,0x0157f5b0) */
/* WARNING: Removing unreachable block (ram,0x0157f5b8) */
/* WARNING: Removing unreachable block (ram,0x0157f5bc) */
/* WARNING: Removing unreachable block (ram,0x0157f5d0) */
/* WARNING: Removing unreachable block (ram,0x0157f5d4) */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_DebugVisualiser__GetReplicator
                (undefined1 param_1 [16],ulong param_2,undefined1 param_3 [16],ulong param_4,
                ulong param_5,float param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9
                ,float *param_10,float *param_11,float *param_12,float *param_13)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  int extraout_w1;
  uint uVar14;
  uint uVar15;
  int extraout_w1_00;
  long extraout_x1;
  float *pfVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  float *pfVar20;
  ulong uVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 uVar30;
  float *pfVar31;
  float extraout_s0;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 extraout_s0_00;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  float fStack_2b8;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  int iStack_114;
  ulong uStack_110;
  ulong uStack_100;
  float fStack_f0;
  uint uStack_ec;
  ulong uStack_e8;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar32 = param_3._4_4_;
  fVar37 = param_3._0_4_;
  pfVar16 = param_10;
  if ((bRam0000000003eb509b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509b = 1;
  }
  if (param_10 != (float *)0x0) {
    fVar1 = param_10[6];
    if (0 < (int)fVar1) {
      fVar38 = 0.0;
      do {
        if ((uint)fVar1 <= (uint)fVar38) {
          uVar30 = func_0x00f78b24();
          func_0x00f78ac0(uVar30,0);
          goto LAB_0157ebb8;
        }
        uVar29 = *(ulong *)(param_10 + (long)(int)fVar38 * 2 + 8);
        if (uVar29 == 0) goto LAB_0157ebb8;
        uVar30 = *(undefined8 *)(uVar29 + 0x38);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pfVar16 = (float *)0x0;
        uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar30,param_9);
        if ((uVar7 & 1) != 0) {
          return uVar29;
        }
        fVar38 = (float)((int)fVar38 + 1);
        fVar1 = param_10[6];
      } while ((int)fVar38 < (int)fVar1);
    }
    return 0;
  }
LAB_0157ebb8:
  uVar4 = func_0x00f78af4();
  puStack_48 = &Atlas_Gameplay_DebugVisualiser__CreateCapsuleMesh;
  fVar1 = (float)param_5;
  uStack_100 = CONCAT44(uVar32,fVar37);
  fVar38 = (float)param_2;
  uVar29 = 0x3d1f3d8;
  iStack_114 = extraout_w1;
  uStack_110 = param_4;
  fStack_f0 = extraout_s0;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb50a6 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d1f3d8);
    func_0x00f78a20(0x3d1f5e0);
    func_0x00f78a20(0x3d715a8);
    bRam0000000003eb50a6 = 1;
  }
  uVar4 = (uVar4 & 1) + uVar4;
  uVar27 = (ulong)uVar4;
  uVar7 = (ulong)(uVar4 + 1);
  lVar8 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar7);
  lVar9 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar7);
  lVar10 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar7);
  uStack_e8 = uVar7;
  lVar11 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar7);
  fVar33 = _UNK_033f850c;
  uStack_ec = uVar4;
  if (uVar4 < 0x7fffffff) {
    if (lVar8 == 0) goto code_r0x0157f324;
    uVar27 = 0;
    param_2 = 0x43340000;
    uVar28 = *(uint *)(lVar8 + 0x18);
    uVar29 = lVar9 + 0x20;
    uVar7 = lVar11 + 0x20;
    fVar41 = 0.0;
    fVar39 = 0.0;
    do {
      if (uVar28 == uVar27) goto code_r0x0157f274;
      uVar32 = ___sincosf_stret(fVar41 * fVar33);
      *(undefined4 *)(lVar8 + 0x20 + uVar27 * 4) = uVar32;
      if (lVar9 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar9 + 0x18) <= uVar27) goto code_r0x0157f274;
      *(int *)(uVar29 + uVar27 * 4) = (int)param_2;
      fVar40 = fVar39 * fVar33;
      uVar32 = _cosf(fVar40);
      if (lVar10 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar10 + 0x18) <= uVar27) goto code_r0x0157f274;
      *(undefined4 *)(lVar10 + 0x20 + uVar27 * 4) = uVar32;
      uVar32 = _sinf(fVar40);
      if (lVar11 == 0) goto code_r0x0157f324;
      if (*(uint *)(lVar11 + 0x18) <= uVar27) goto code_r0x0157f274;
      *(undefined4 *)(uVar7 + uVar27 * 4) = uVar32;
      fVar41 = 360.0 / (float)(int)uVar4 + fVar41;
      fVar39 = 180.0 / (float)(int)uVar4 + fVar39;
      uVar27 = uVar27 + 1;
    } while (uStack_e8 != uVar27);
  }
  uVar7 = uStack_e8;
  uVar4 = uStack_ec;
  uVar29 = (ulong)uStack_ec;
  uVar28 = (uint)uStack_e8;
  uVar27 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,(uStack_ec + 2) * uVar28);
  param_2 = 0x3f000000;
  fVar33 = (fStack_f0 - (fVar38 + fVar38)) * 0.5;
  fVar37 = 0.0;
  if (fVar33 <= 0.0) {
    fVar33 = 0.0;
  }
  uVar5 = /*UnityEngine.Mathf$$CeilToInt*/ func_0x0323d108((float)(int)uVar28 * 0.5,0);
  if ((int)uVar5 < 1) {
    iVar22 = 0;
  }
  else {
    uVar21 = 0;
    iVar22 = 0;
    uVar15 = uVar28;
    if ((int)uVar28 < 2) {
      uVar15 = 1;
    }
    do {
      if (uVar4 < 0x7fffffff) {
        if (lVar8 == 0) goto code_r0x0157f324;
        uVar26 = 0;
        do {
          if (*(uint *)(lVar8 + 0x18) <= uVar26) goto code_r0x0157f274;
          if (lVar11 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar11 + 0x18) <= uVar21) goto code_r0x0157f274;
          if (lVar10 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar10 + 0x18) <= uVar21) goto code_r0x0157f274;
          if (lVar9 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar9 + 0x18) <= uVar26) goto code_r0x0157f274;
          if (uVar27 == 0) goto code_r0x0157f324;
          uVar14 = iVar22 + (int)uVar26;
          pfVar16 = (float *)(ulong)*(uint *)(uVar27 + 0x18);
          if (*(uint *)(uVar27 + 0x18) <= uVar14) goto code_r0x0157f274;
          fVar39 = *(float *)(lVar11 + uVar21 * 4 + 0x20);
          fVar37 = *(float *)(lVar10 + uVar21 * 4 + 0x20);
          fVar41 = *(float *)(lVar8 + 0x20 + uVar26 * 4) * fVar39 * fVar38;
          param_4 = (ulong)(uint)fVar41;
          fVar39 = fVar39 * *(float *)(lVar9 + 0x20 + uVar26 * 4) * fVar38;
          param_2 = (ulong)(uint)fVar39;
          lVar17 = uVar27 + (long)(int)uVar14 * 0xc;
          pfVar16 = (float *)(lVar17 + 0x24);
          *pfVar16 = fVar37 * fVar38;
          *(float *)(lVar17 + 0x20) = fVar41;
          *(float *)(lVar17 + 0x28) = fVar39;
          param_11 = (float *)(ulong)*(uint *)(uVar27 + 0x18);
          if (*(uint *)(uVar27 + 0x18) <= uVar14) goto code_r0x0157f274;
          *pfVar16 = fVar33 + fVar37 * fVar38;
          uVar26 = uVar26 + 1;
        } while (uVar15 != uVar26);
        iVar22 = iVar22 + (int)uVar26;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar5);
  }
  iVar6 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c((float)(int)uVar28 * 0.5,0);
  if (iVar6 < (int)uVar28) {
    uVar5 = uVar28;
    if ((int)uVar28 < 2) {
      uVar5 = 1;
    }
    lVar17 = (long)iVar6;
    do {
      if (uVar4 < 0x7fffffff) {
        if (lVar8 == 0) goto code_r0x0157f324;
        uVar21 = 0;
        do {
          if (*(uint *)(lVar8 + 0x18) <= uVar21) goto code_r0x0157f274;
          if (lVar11 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar11 + 0x18) <= (uint)lVar17) goto code_r0x0157f274;
          if (lVar10 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar10 + 0x18) <= (uint)lVar17) goto code_r0x0157f274;
          if (lVar9 == 0) goto code_r0x0157f324;
          if (*(uint *)(lVar9 + 0x18) <= uVar21) goto code_r0x0157f274;
          if (uVar27 == 0) goto code_r0x0157f324;
          uVar15 = iVar22 + (int)uVar21;
          pfVar16 = (float *)(ulong)*(uint *)(uVar27 + 0x18);
          if (*(uint *)(uVar27 + 0x18) <= uVar15) goto code_r0x0157f274;
          fVar39 = *(float *)(lVar11 + lVar17 * 4 + 0x20);
          fVar37 = *(float *)(lVar10 + lVar17 * 4 + 0x20);
          fVar41 = *(float *)(lVar8 + 0x20 + uVar21 * 4) * fVar39 * fVar38;
          param_4 = (ulong)(uint)fVar41;
          fVar39 = fVar39 * *(float *)(lVar9 + 0x20 + uVar21 * 4) * fVar38;
          param_2 = (ulong)(uint)fVar39;
          lVar18 = uVar27 + (long)(int)uVar15 * 0xc;
          pfVar16 = (float *)(lVar18 + 0x24);
          *pfVar16 = fVar37 * fVar38;
          *(float *)(lVar18 + 0x20) = fVar41;
          *(float *)(lVar18 + 0x28) = fVar39;
          param_11 = (float *)(ulong)*(uint *)(uVar27 + 0x18);
          if (*(uint *)(uVar27 + 0x18) <= uVar15) goto code_r0x0157f274;
          *pfVar16 = fVar37 * fVar38 - fVar33;
          uVar21 = uVar21 + 1;
        } while (uVar5 != uVar21);
        iVar22 = iVar22 + (int)uVar21;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != (int)uVar28);
  }
  lVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar4 * uVar28 * 6);
  param_4 = uStack_100;
  param_5 = uStack_110;
  if (uVar4 < 0x7fffffff) {
    uVar15 = 0;
    uVar5 = 0;
    uVar14 = uVar4;
    if ((int)uVar4 < 2) {
      uVar14 = 1;
    }
    do {
      if (uVar4 != 0) {
        if (lVar8 == 0) goto code_r0x0157f324;
        iVar22 = uVar15 * uVar28;
        iVar6 = (uVar15 + 1) * uVar28;
        uVar2 = *(uint *)(lVar8 + 0x18);
        uVar24 = uVar14;
        do {
          uVar25 = uVar5;
          if (uVar2 <= uVar25) goto code_r0x0157f274;
          *(int *)(lVar8 + (long)(int)uVar25 * 4 + 0x20) = iVar22;
          if ((uVar2 <= uVar25 + 1) ||
             (*(int *)(lVar8 + (long)(int)(uVar25 + 1) * 4 + 0x20) = iVar6, uVar2 <= uVar25 + 2))
          goto code_r0x0157f274;
          *(int *)(lVar8 + (long)(int)(uVar25 + 2) * 4 + 0x20) = iVar6 + 1;
          if ((uVar2 <= uVar25 + 3) ||
             ((*(int *)(lVar8 + (long)(int)(uVar25 + 3) * 4 + 0x20) = iVar22 + 1,
              uVar2 <= uVar25 + 4 ||
              (*(int *)(lVar8 + (long)(int)(uVar25 + 4) * 4 + 0x20) = iVar22, uVar2 <= uVar25 + 5)))
             ) goto code_r0x0157f274;
          *(int *)(lVar8 + (long)(int)(uVar25 + 5) * 4 + 0x20) = iVar6 + 1;
          iVar22 = iVar22 + 1;
          iVar6 = iVar6 + 1;
          uVar24 = uVar24 - 1;
          uVar5 = uVar25 + 6;
        } while (uVar24 != 0);
        uVar5 = uVar25 + 6;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar28);
  }
  if (uVar27 != 0) {
    uVar21 = *(ulong *)(uVar27 + 0x18) & 0xffffffff;
    fVar38 = (float)uStack_100;
    fVar33 = (float)uStack_110;
    iVar22 = (int)*(ulong *)(uVar27 + 0x18);
    if (iStack_114 == 0) {
      if (0 < iVar22) {
        if (uVar21 != 0) {
          uVar26 = 0;
          pfVar19 = (float *)(uVar27 + 0x28);
          do {
            fVar39 = pfVar19[-2];
            param_2 = (ulong)(uint)(fVar38 + pfVar19[-1]);
            fVar37 = fVar1 + *pfVar19;
            pfVar19[-2] = fVar38 + pfVar19[-1];
            pfVar19[-1] = fVar33 + fVar39;
            *pfVar19 = fVar37;
            if (uVar21 - 1 == uVar26) goto code_r0x0157f1d8;
            uVar26 = uVar26 + 1;
            pfVar19 = pfVar19 + 3;
          } while (uVar26 < *(uint *)(uVar27 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if (iStack_114 == 1) {
      if (0 < iVar22) {
        if (uVar21 != 0) {
          uVar29 = 0;
          pfVar19 = (float *)(uVar27 + 0x28);
          do {
            param_2 = CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(pfVar19 + -2) >> 0x20),
                               fVar38 + (float)*(undefined8 *)(pfVar19 + -2));
            *(ulong *)(pfVar19 + -2) = param_2;
            *pfVar19 = fVar1 + *pfVar19;
            param_4 = CONCAT44(fVar33,fVar38);
            if (uVar21 - 1 == uVar29) goto code_r0x0157f280;
            uVar29 = uVar29 + 1;
            pfVar19 = pfVar19 + 3;
          } while (uVar29 < *(uint *)(uVar27 + 0x18));
        }
        goto code_r0x0157f274;
      }
    }
    else if ((iStack_114 == 2) && (0 < iVar22)) {
      if (uVar21 != 0) {
        uVar26 = 0;
        pfVar19 = (float *)(uVar27 + 0x28);
        do {
          fVar39 = pfVar19[-1];
          fVar37 = fVar33 + *pfVar19;
          param_2 = (ulong)(uint)(fVar1 + fVar39);
          pfVar19[-2] = fVar38 + pfVar19[-2];
          pfVar19[-1] = fVar37;
          *pfVar19 = fVar1 + fVar39;
          if (uVar21 - 1 == uVar26) goto code_r0x0157f1d8;
          uVar26 = uVar26 + 1;
          pfVar19 = pfVar19 + 3;
        } while (uVar26 < *(uint *)(uVar27 + 0x18));
      }
code_r0x0157f274:
      uVar30 = func_0x00f78b24();
      func_0x00f78ac0(uVar30,0);
    }
code_r0x0157f280:
    uVar21 = func_0x00f78aec(/*UnityEngine.Mesh_TypeInfo*/ uRam0000000003d23388);
    /*UnityEngine.Mesh$$.ctor*/ func_0x0323f420(uVar21,0);
    uVar29 = 0;
    if (uVar21 != 0) {
      /*UnityEngine.Object$$set_name*/ func_0x03248994(uVar21,/*STR('ProceduralCapsule')*/ uRam0000000003d715a8,0);
      /*UnityEngine.Mesh$$set_vertices*/ func_0x03241d34(uVar21,uVar27,0);
      /*UnityEngine.Mesh$$set_triangles*/ func_0x032448a4(uVar21,lVar8,0);
      /*UnityEngine.Mesh$$Optimize*/ func_0x032470b4(uVar21,0);
      /*UnityEngine.Mesh$$RecalculateBounds*/ func_0x03246a70(uVar21,0);
      return uVar21;
    }
  }
code_r0x0157f324:
  func_0x00f78af4();
  puStack_128 = &Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility;
  pfVar19 = pfVar16;
  lStack_160 = lVar10;
  lStack_158 = lVar9;
  lStack_150 = lVar8;
  uStack_148 = uVar7;
  uStack_140 = uVar29;
  uStack_138 = uVar27;
  ppuStack_130 = &puStack_50;
  if ((bRam0000000003eb509d & 1) == 0) {
    func_0x00f78a20(0x3d32a28);
    func_0x00f78a20(0x3d32a30);
    func_0x00f78a20(0x3d32a38);
    func_0x00f78a20(0x3d3b278);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509d = 1;
  }
  uStack_178 = 0;
  uStack_170 = 0;
  lStack_168 = 0;
  if (extraout_x1 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_178,extraout_x1,uRam0000000003d3b278);
    while( true ) {
      do {
        uVar29 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_178,uRam0000000003d32a30);
        lVar8 = lStack_168;
        if ((uVar29 & 1) == 0) {
          uVar29 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_178,uRam0000000003d32a28);
          return uVar29;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar29 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0,0);
      } while ((uVar29 & 1) != 0);
      if (lVar8 == 0) break;
      /*UnityEngine.Renderer$$set_forceRenderingOff*/ func_0x0325bc24(lVar8,(uint)pfVar16 ^ 1,0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x157f45c);
    (*pcVar3)();
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar12 = (long *)___cxa_begin_catch();
    lVar8 = *plVar12;
    ___cxa_end_catch();
    uVar29 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_178,uRam0000000003eb5000);
    if (lVar8 == 0) {
      return uVar29;
    }
    func_0x00f78ac0(lVar8,0);
  }
  auVar42 = __Unwind_Resume();
  lVar8 = auVar42._8_8_;
  uVar7 = auVar42._0_8_;
  uVar29 = uVar7;
  pfVar31 = pfVar19;
  pfVar16 = param_11;
  pfVar20 = param_12;
  if ((bRam0000000003eb509e & 1) == 0) {
    func_0x00f78a20(0x3d3d050);
    func_0x00f78a20(0x3d3d058);
    func_0x00f78a20(0x3d3d060);
    uVar29 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb509e = 1;
  }
  uVar36 = (undefined4)param_2;
  uVar35 = (undefined4)param_4;
  uVar32 = (undefined4)param_5;
  if (lVar8 != 0) {
    uVar27 = (ulong)*(uint *)(lVar8 + 0x18);
    if (0 < (int)*(uint *)(lVar8 + 0x18)) {
      uVar21 = 0;
      uVar26 = uVar27 - 1;
      lVar9 = 0x20;
      while( true ) {
        if (uVar27 <= uVar21) {
          uVar29 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar36 = (undefined4)param_2;
        uVar35 = (undefined4)param_4;
        uVar32 = (undefined4)param_5;
        lVar10 = *(long *)(lVar8 + 0x10) + lVar9;
        pfVar31 = *(float **)(lVar10 + 8);
        if (pfVar31 != (float *)0x0) {
          pfVar16 = *(float **)(lVar10 + 0x18);
          uVar29 = *(ulong *)(lVar10 + 0x20);
          if ((uVar29 & 0xff0000) != 0) {
            pfVar19 = param_13;
          }
          if ((uVar29 & 0xff) == 0) {
            param_11 = pfVar19;
          }
          if ((uVar29 & 0xff00) == 0) {
            param_12 = param_11;
          }
          goto code_r0x0157f644;
        }
        if (uVar26 == uVar21) break;
        uVar27 = (ulong)*(uint *)(lVar8 + 0x18);
        lVar9 = lVar9 + 0x28;
        uVar21 = uVar21 + 1;
      }
    }
    return uVar29;
  }
  uVar7 = func_0x00f78af4();
  param_12 = pfVar20;
code_r0x0157f644:
  pfVar19 = pfVar31;
  pfVar20 = pfVar16;
  if ((bRam0000000003eb509f & 1) == 0) {
    func_0x00f78a20(0x3d27140);
    bRam0000000003eb509f = 1;
  }
  if (pfVar31 == (float *)0x0) {
    uVar7 = func_0x00f78af4();
    uVar34 = extraout_s0_00;
  }
  else {
    lVar8 = *(long *)pfVar31;
    uVar29 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar29 != 0) {
      piVar23 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar13 = (undefined8 *)(lVar8 + (long)(*piVar23 + 1) * 0x10 + 0x138);
          param_7 = uVar35;
          goto code_r0x0157f6fc;
        }
        piVar23 = piVar23 + 4;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(pfVar31,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,1);
    param_7 = uVar35;
code_r0x0157f6fc:
    uVar34 = (*(code *)*puVar13)(pfVar31,puVar13[1]);
    lVar8 = *(long *)pfVar31;
    uVar29 = (ulong)*(ushort *)(lVar8 + 0x12a);
    param_6 = fVar37;
    uVar32 = uVar36;
    if (uVar29 != 0) {
      piVar23 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar13 = (undefined8 *)(lVar8 + (long)(*piVar23 + 2) * 0x10 + 0x138);
          goto code_r0x0157f764;
        }
        piVar23 = piVar23 + 4;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(pfVar31,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,2);
code_r0x0157f764:
    uVar35 = (*(code *)*puVar13)(pfVar31,puVar13[1]);
    lVar8 = *(long *)pfVar31;
    uVar29 = (ulong)*(ushort *)(lVar8 + 0x12a);
    fStack_2b8 = param_6;
    uStack_2bc = uVar32;
    if (uVar29 != 0) {
      piVar23 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar13 = (undefined8 *)(lVar8 + (long)(*piVar23 + 3) * 0x10 + 0x138);
          goto code_r0x0157f7d0;
        }
        piVar23 = piVar23 + 4;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(pfVar31,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,3);
code_r0x0157f7d0:
    uStack_2c0 = (*(code *)*puVar13)(pfVar31,puVar13[1]);
    pfVar19 = pfVar16;
    pfVar20 = param_12;
  }
  if ((bRam0000000003eb50a0 & 1) == 0) {
    func_0x00f78a20(0x3d57700);
    func_0x00f78a20(0x3d57708);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar29 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(pfVar20,0,0);
  if ((uVar29 & 1) != 0) {
    return 0;
  }
  lVar8 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar8,pfVar19,0);
  if ((lVar8 != 0) && (lVar8 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar8,0), lVar8 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(uVar34,uVar36,fVar37,lVar8,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(uVar35,uVar32,param_6,param_7,lVar8,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uStack_2c0,uStack_2bc,fStack_2b8,lVar8,0);
    if (*(long *)(uVar7 + 0x58) != 0) {
      uVar30 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(uVar7 + 0x58),0);
      goto code_r0x03275ee0;
    }
  }
  func_0x00f78af4();
  uVar30 = func_0x00f78b14();
  lVar9 = func_0x00f78ac0(uVar30,0);
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar8 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar8,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(lVar9 + 0x58) = lVar8;
  if (lVar8 != 0) {
    lVar8 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar8,0);
    if ((*(long *)(lVar9 + 0x50) != 0) &&
       (uVar30 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar9 + 0x50),0), lVar8 != 0)) {
code_r0x03275ee0:
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar29 = (*pcRam0000000003ec1898)(lVar8,uVar30,0);
      return uVar29;
    }
  }
  lVar8 = func_0x00f78af4();
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar30 = *(undefined8 *)(lVar8 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar29 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar30,0,0);
  if ((uVar29 & 1) == 0) {
    uVar30 = *(undefined8 *)(lVar8 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar29 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar30,0);
    *(undefined8 *)(lVar8 + 0x58) = 0;
  }
  return uVar29;
code_r0x0157f1d8:
  if (lVar8 != 0) {
    uVar4 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar4) {
      uVar28 = 0;
      do {
        if ((uVar4 <= uVar28) || (uVar5 = uVar28 + 1, uVar4 <= uVar5)) goto code_r0x0157f274;
        lVar11 = lVar8 + 0x20;
        uVar32 = *(undefined4 *)(lVar11 + (long)(int)uVar28 * 4);
        *(undefined4 *)(lVar11 + (long)(int)uVar28 * 4) =
             *(undefined4 *)(lVar11 + (long)(int)uVar5 * 4);
        *(undefined4 *)(lVar11 + (long)(int)uVar5 * 4) = uVar32;
        uVar28 = uVar28 + 3;
      } while ((int)uVar28 < (int)uVar4);
    }
    goto code_r0x0157f280;
  }
  goto code_r0x0157f324;
}



// ============================================================
// RVA: 0x157ebbc | Atlas.Gameplay.DebugVisualiser.CreateCapsuleMesh
// ============================================================

/* WARNING: Possible PIC construction at 0x0157f594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157f814) */
/* WARNING: Removing unreachable block (ram,0x0157f598) */
/* WARNING: Removing unreachable block (ram,0x0157f5b0) */
/* WARNING: Removing unreachable block (ram,0x0157f5b8) */
/* WARNING: Removing unreachable block (ram,0x0157f5bc) */
/* WARNING: Removing unreachable block (ram,0x0157f5d0) */
/* WARNING: Removing unreachable block (ram,0x0157f5d4) */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_DebugVisualiser__CreateCapsuleMesh
                (float param_1,ulong param_2,undefined1 param_3 [16],ulong param_4,ulong param_5,
                float param_6,undefined4 param_7,uint param_8,int param_9,float *param_10,
                float *param_11,float *param_12,float *param_13)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  int extraout_w1;
  long extraout_x1;
  long lVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  ulong uVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  float *pfVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 extraout_s0;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined4 uStack_280;
  undefined4 uStack_27c;
  float fStack_278;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  int iStack_d4;
  ulong uStack_d0;
  ulong uStack_c0;
  float fStack_b0;
  uint uStack_ac;
  ulong uStack_a8;
  
  fVar37 = param_3._0_4_;
  fVar3 = (float)param_5;
  uStack_c0 = param_3._0_8_;
  fVar38 = (float)param_2;
  uVar28 = 0x3d1f3d8;
  iStack_d4 = param_9;
  uStack_d0 = param_4;
  fStack_b0 = param_1;
  if ((bRam0000000003eb50a6 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d23388);
    func_0x00f78a20(0x3d1f3d8);
    func_0x00f78a20(0x3d1f5e0);
    func_0x00f78a20(0x3d715a8);
    bRam0000000003eb50a6 = 1;
  }
  param_8 = (param_8 & 1) + param_8;
  uVar27 = (ulong)param_8;
  uVar30 = (ulong)(param_8 + 1);
  lVar7 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar30);
  lVar8 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar30);
  lVar9 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar30);
  uStack_a8 = uVar30;
  lVar10 = func_0x00f78a34(/*float[]_TypeInfo*/ uRam0000000003d1f3d8,uVar30);
  fVar33 = _UNK_033f850c;
  uStack_ac = param_8;
  if (param_8 < 0x7fffffff) {
    if (lVar7 == 0) goto LAB_0157f324;
    uVar27 = 0;
    param_2 = 0x43340000;
    uVar1 = *(uint *)(lVar7 + 0x18);
    uVar28 = lVar8 + 0x20;
    uVar30 = lVar10 + 0x20;
    fVar41 = 0.0;
    fVar39 = 0.0;
    do {
      if (uVar1 == uVar27) goto LAB_0157f274;
      uVar32 = ___sincosf_stret(fVar41 * fVar33);
      *(undefined4 *)(lVar7 + 0x20 + uVar27 * 4) = uVar32;
      if (lVar8 == 0) goto LAB_0157f324;
      if (*(uint *)(lVar8 + 0x18) <= uVar27) goto LAB_0157f274;
      *(int *)(uVar28 + uVar27 * 4) = (int)param_2;
      fVar40 = fVar39 * fVar33;
      uVar32 = _cosf(fVar40);
      if (lVar9 == 0) goto LAB_0157f324;
      if (*(uint *)(lVar9 + 0x18) <= uVar27) goto LAB_0157f274;
      *(undefined4 *)(lVar9 + 0x20 + uVar27 * 4) = uVar32;
      uVar32 = _sinf(fVar40);
      if (lVar10 == 0) goto LAB_0157f324;
      if (*(uint *)(lVar10 + 0x18) <= uVar27) goto LAB_0157f274;
      *(undefined4 *)(uVar30 + uVar27 * 4) = uVar32;
      fVar41 = 360.0 / (float)(int)param_8 + fVar41;
      fVar39 = 180.0 / (float)(int)param_8 + fVar39;
      uVar27 = uVar27 + 1;
    } while (uStack_a8 != uVar27);
  }
  uVar30 = uStack_a8;
  uVar1 = uStack_ac;
  uVar28 = (ulong)uStack_ac;
  uVar29 = (uint)uStack_a8;
  uVar27 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,(uStack_ac + 2) * uVar29);
  param_2 = 0x3f000000;
  fVar33 = (fStack_b0 - (fVar38 + fVar38)) * 0.5;
  fVar37 = 0.0;
  if (fVar33 <= 0.0) {
    fVar33 = 0.0;
  }
  uVar5 = /*UnityEngine.Mathf$$CeilToInt*/ func_0x0323d108((float)(int)uVar29 * 0.5,0);
  if ((int)uVar5 < 1) {
    iVar22 = 0;
  }
  else {
    uVar21 = 0;
    iVar22 = 0;
    uVar15 = uVar29;
    if ((int)uVar29 < 2) {
      uVar15 = 1;
    }
    do {
      if (uVar1 < 0x7fffffff) {
        if (lVar7 == 0) goto LAB_0157f324;
        uVar26 = 0;
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar26) goto LAB_0157f274;
          if (lVar10 == 0) goto LAB_0157f324;
          if (*(uint *)(lVar10 + 0x18) <= uVar21) goto LAB_0157f274;
          if (lVar9 == 0) goto LAB_0157f324;
          if (*(uint *)(lVar9 + 0x18) <= uVar21) goto LAB_0157f274;
          if (lVar8 == 0) goto LAB_0157f324;
          if (*(uint *)(lVar8 + 0x18) <= uVar26) goto LAB_0157f274;
          if (uVar27 == 0) goto LAB_0157f324;
          uVar14 = iVar22 + (int)uVar26;
          param_10 = (float *)(ulong)*(uint *)(uVar27 + 0x18);
          if (*(uint *)(uVar27 + 0x18) <= uVar14) goto LAB_0157f274;
          fVar39 = *(float *)(lVar10 + uVar21 * 4 + 0x20);
          fVar37 = *(float *)(lVar9 + uVar21 * 4 + 0x20);
          fVar41 = *(float *)(lVar7 + 0x20 + uVar26 * 4) * fVar39 * fVar38;
          param_4 = (ulong)(uint)fVar41;
          fVar39 = fVar39 * *(float *)(lVar8 + 0x20 + uVar26 * 4) * fVar38;
          param_2 = (ulong)(uint)fVar39;
          lVar16 = uVar27 + (long)(int)uVar14 * 0xc;
          param_10 = (float *)(lVar16 + 0x24);
          *param_10 = fVar37 * fVar38;
          *(float *)(lVar16 + 0x20) = fVar41;
          *(float *)(lVar16 + 0x28) = fVar39;
          param_11 = (float *)(ulong)*(uint *)(uVar27 + 0x18);
          if (*(uint *)(uVar27 + 0x18) <= uVar14) goto LAB_0157f274;
          *param_10 = fVar33 + fVar37 * fVar38;
          uVar26 = uVar26 + 1;
        } while (uVar15 != uVar26);
        iVar22 = iVar22 + (int)uVar26;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar5);
  }
  iVar6 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c((float)(int)uVar29 * 0.5,0);
  if (iVar6 < (int)uVar29) {
    uVar5 = uVar29;
    if ((int)uVar29 < 2) {
      uVar5 = 1;
    }
    lVar16 = (long)iVar6;
    do {
      if (uVar1 < 0x7fffffff) {
        if (lVar7 == 0) goto LAB_0157f324;
        uVar21 = 0;
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_0157f274;
          if (lVar10 == 0) goto LAB_0157f324;
          if (*(uint *)(lVar10 + 0x18) <= (uint)lVar16) goto LAB_0157f274;
          if (lVar9 == 0) goto LAB_0157f324;
          if (*(uint *)(lVar9 + 0x18) <= (uint)lVar16) goto LAB_0157f274;
          if (lVar8 == 0) goto LAB_0157f324;
          if (*(uint *)(lVar8 + 0x18) <= uVar21) goto LAB_0157f274;
          if (uVar27 == 0) goto LAB_0157f324;
          uVar15 = iVar22 + (int)uVar21;
          param_10 = (float *)(ulong)*(uint *)(uVar27 + 0x18);
          if (*(uint *)(uVar27 + 0x18) <= uVar15) goto LAB_0157f274;
          fVar39 = *(float *)(lVar10 + lVar16 * 4 + 0x20);
          fVar37 = *(float *)(lVar9 + lVar16 * 4 + 0x20);
          fVar41 = *(float *)(lVar7 + 0x20 + uVar21 * 4) * fVar39 * fVar38;
          param_4 = (ulong)(uint)fVar41;
          fVar39 = fVar39 * *(float *)(lVar8 + 0x20 + uVar21 * 4) * fVar38;
          param_2 = (ulong)(uint)fVar39;
          lVar17 = uVar27 + (long)(int)uVar15 * 0xc;
          param_10 = (float *)(lVar17 + 0x24);
          *param_10 = fVar37 * fVar38;
          *(float *)(lVar17 + 0x20) = fVar41;
          *(float *)(lVar17 + 0x28) = fVar39;
          param_11 = (float *)(ulong)*(uint *)(uVar27 + 0x18);
          if (*(uint *)(uVar27 + 0x18) <= uVar15) goto LAB_0157f274;
          *param_10 = fVar37 * fVar38 - fVar33;
          uVar21 = uVar21 + 1;
        } while (uVar5 != uVar21);
        iVar22 = iVar22 + (int)uVar21;
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != (int)uVar29);
  }
  lVar7 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar1 * uVar29 * 6);
  param_4 = uStack_c0;
  param_5 = uStack_d0;
  if (uVar1 < 0x7fffffff) {
    uVar15 = 0;
    uVar5 = 0;
    uVar14 = uVar1;
    if ((int)uVar1 < 2) {
      uVar14 = 1;
    }
    do {
      if (uVar1 != 0) {
        if (lVar7 == 0) goto LAB_0157f324;
        iVar22 = uVar15 * uVar29;
        iVar6 = (uVar15 + 1) * uVar29;
        uVar2 = *(uint *)(lVar7 + 0x18);
        uVar24 = uVar14;
        do {
          uVar25 = uVar5;
          if (uVar2 <= uVar25) goto LAB_0157f274;
          *(int *)(lVar7 + (long)(int)uVar25 * 4 + 0x20) = iVar22;
          if ((uVar2 <= uVar25 + 1) ||
             (*(int *)(lVar7 + (long)(int)(uVar25 + 1) * 4 + 0x20) = iVar6, uVar2 <= uVar25 + 2))
          goto LAB_0157f274;
          *(int *)(lVar7 + (long)(int)(uVar25 + 2) * 4 + 0x20) = iVar6 + 1;
          if ((uVar2 <= uVar25 + 3) ||
             ((*(int *)(lVar7 + (long)(int)(uVar25 + 3) * 4 + 0x20) = iVar22 + 1,
              uVar2 <= uVar25 + 4 ||
              (*(int *)(lVar7 + (long)(int)(uVar25 + 4) * 4 + 0x20) = iVar22, uVar2 <= uVar25 + 5)))
             ) goto LAB_0157f274;
          *(int *)(lVar7 + (long)(int)(uVar25 + 5) * 4 + 0x20) = iVar6 + 1;
          iVar22 = iVar22 + 1;
          iVar6 = iVar6 + 1;
          uVar24 = uVar24 - 1;
          uVar5 = uVar25 + 6;
        } while (uVar24 != 0);
        uVar5 = uVar25 + 6;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar29);
  }
  if (uVar27 != 0) {
    uVar21 = *(ulong *)(uVar27 + 0x18) & 0xffffffff;
    fVar38 = (float)uStack_c0;
    fVar33 = (float)uStack_d0;
    iVar22 = (int)*(ulong *)(uVar27 + 0x18);
    if (iStack_d4 == 0) {
      if (0 < iVar22) {
        if (uVar21 != 0) {
          uVar26 = 0;
          pfVar18 = (float *)(uVar27 + 0x28);
          do {
            fVar39 = pfVar18[-2];
            param_2 = (ulong)(uint)(fVar38 + pfVar18[-1]);
            fVar37 = fVar3 + *pfVar18;
            pfVar18[-2] = fVar38 + pfVar18[-1];
            pfVar18[-1] = fVar33 + fVar39;
            *pfVar18 = fVar37;
            if (uVar21 - 1 == uVar26) goto code_r0x0157f1d8;
            uVar26 = uVar26 + 1;
            pfVar18 = pfVar18 + 3;
          } while (uVar26 < *(uint *)(uVar27 + 0x18));
        }
        goto LAB_0157f274;
      }
    }
    else if (iStack_d4 == 1) {
      if (0 < iVar22) {
        if (uVar21 != 0) {
          uVar28 = 0;
          pfVar18 = (float *)(uVar27 + 0x28);
          do {
            param_2 = CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)(pfVar18 + -2) >> 0x20),
                               fVar38 + (float)*(undefined8 *)(pfVar18 + -2));
            *(ulong *)(pfVar18 + -2) = param_2;
            *pfVar18 = fVar3 + *pfVar18;
            param_4 = CONCAT44(fVar33,fVar38);
            if (uVar21 - 1 == uVar28) goto code_r0x0157f280;
            uVar28 = uVar28 + 1;
            pfVar18 = pfVar18 + 3;
          } while (uVar28 < *(uint *)(uVar27 + 0x18));
        }
        goto LAB_0157f274;
      }
    }
    else if ((iStack_d4 == 2) && (0 < iVar22)) {
      if (uVar21 != 0) {
        uVar26 = 0;
        pfVar18 = (float *)(uVar27 + 0x28);
        do {
          fVar39 = pfVar18[-1];
          fVar37 = fVar33 + *pfVar18;
          param_2 = (ulong)(uint)(fVar3 + fVar39);
          pfVar18[-2] = fVar38 + pfVar18[-2];
          pfVar18[-1] = fVar37;
          *pfVar18 = fVar3 + fVar39;
          if (uVar21 - 1 == uVar26) goto code_r0x0157f1d8;
          uVar26 = uVar26 + 1;
          pfVar18 = pfVar18 + 3;
        } while (uVar26 < *(uint *)(uVar27 + 0x18));
      }
LAB_0157f274:
      uVar11 = func_0x00f78b24();
      func_0x00f78ac0(uVar11,0);
    }
code_r0x0157f280:
    uVar21 = func_0x00f78aec(/*UnityEngine.Mesh_TypeInfo*/ uRam0000000003d23388);
    /*UnityEngine.Mesh$$.ctor*/ func_0x0323f420(uVar21,0);
    uVar28 = 0;
    if (uVar21 != 0) {
      /*UnityEngine.Object$$set_name*/ func_0x03248994(uVar21,/*STR('ProceduralCapsule')*/ uRam0000000003d715a8,0);
      /*UnityEngine.Mesh$$set_vertices*/ func_0x03241d34(uVar21,uVar27,0);
      /*UnityEngine.Mesh$$set_triangles*/ func_0x032448a4(uVar21,lVar7,0);
      /*UnityEngine.Mesh$$Optimize*/ func_0x032470b4(uVar21,0);
      /*UnityEngine.Mesh$$RecalculateBounds*/ func_0x03246a70(uVar21,0);
      return uVar21;
    }
  }
LAB_0157f324:
  func_0x00f78af4();
  puStack_e8 = &Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility;
  pfVar18 = param_10;
  lStack_120 = lVar9;
  lStack_118 = lVar8;
  lStack_110 = lVar7;
  uStack_108 = uVar30;
  uStack_100 = uVar28;
  uStack_f8 = uVar27;
  puStack_f0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb509d & 1) == 0) {
    func_0x00f78a20(0x3d32a28);
    func_0x00f78a20(0x3d32a30);
    func_0x00f78a20(0x3d32a38);
    func_0x00f78a20(0x3d3b278);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509d = 1;
  }
  uStack_138 = 0;
  uStack_130 = 0;
  lStack_128 = 0;
  if (extraout_x1 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_138,extraout_x1,uRam0000000003d3b278);
    while( true ) {
      do {
        uVar28 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_138,uRam0000000003d32a30);
        lVar7 = lStack_128;
        if ((uVar28 & 1) == 0) {
          uVar28 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_138,uRam0000000003d32a28);
          return uVar28;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar28 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar7,0,0);
      } while ((uVar28 & 1) != 0);
      if (lVar7 == 0) break;
      /*UnityEngine.Renderer$$set_forceRenderingOff*/ func_0x0325bc24(lVar7,(uint)param_10 ^ 1,0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x157f45c);
    (*pcVar4)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar12 = (long *)___cxa_begin_catch();
    lVar7 = *plVar12;
    ___cxa_end_catch();
    uVar28 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_138,uRam0000000003eb5000);
    if (lVar7 == 0) {
      return uVar28;
    }
    func_0x00f78ac0(lVar7,0);
  }
  auVar42 = __Unwind_Resume();
  lVar7 = auVar42._8_8_;
  uVar30 = auVar42._0_8_;
  uVar28 = uVar30;
  pfVar31 = pfVar18;
  pfVar19 = param_11;
  pfVar20 = param_12;
  if ((bRam0000000003eb509e & 1) == 0) {
    func_0x00f78a20(0x3d3d050);
    func_0x00f78a20(0x3d3d058);
    func_0x00f78a20(0x3d3d060);
    uVar28 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb509e = 1;
  }
  uVar36 = (undefined4)param_2;
  uVar35 = (undefined4)param_4;
  uVar32 = (undefined4)param_5;
  if (lVar7 != 0) {
    uVar27 = (ulong)*(uint *)(lVar7 + 0x18);
    if (0 < (int)*(uint *)(lVar7 + 0x18)) {
      uVar21 = 0;
      uVar26 = uVar27 - 1;
      lVar8 = 0x20;
      while( true ) {
        if (uVar27 <= uVar21) {
          uVar28 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar36 = (undefined4)param_2;
        uVar35 = (undefined4)param_4;
        uVar32 = (undefined4)param_5;
        lVar9 = *(long *)(lVar7 + 0x10) + lVar8;
        pfVar31 = *(float **)(lVar9 + 8);
        if (pfVar31 != (float *)0x0) {
          pfVar19 = *(float **)(lVar9 + 0x18);
          uVar28 = *(ulong *)(lVar9 + 0x20);
          if ((uVar28 & 0xff0000) != 0) {
            pfVar18 = param_13;
          }
          if ((uVar28 & 0xff) == 0) {
            param_11 = pfVar18;
          }
          if ((uVar28 & 0xff00) == 0) {
            param_12 = param_11;
          }
          goto code_r0x0157f644;
        }
        if (uVar26 == uVar21) break;
        uVar27 = (ulong)*(uint *)(lVar7 + 0x18);
        lVar8 = lVar8 + 0x28;
        uVar21 = uVar21 + 1;
      }
    }
    return uVar28;
  }
  uVar30 = func_0x00f78af4();
  param_12 = pfVar20;
code_r0x0157f644:
  pfVar18 = pfVar31;
  pfVar20 = pfVar19;
  if ((bRam0000000003eb509f & 1) == 0) {
    func_0x00f78a20(0x3d27140);
    bRam0000000003eb509f = 1;
  }
  if (pfVar31 == (float *)0x0) {
    uVar30 = func_0x00f78af4();
    uVar34 = extraout_s0;
  }
  else {
    lVar7 = *(long *)pfVar31;
    uVar28 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar28 != 0) {
      piVar23 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar13 = (undefined8 *)(lVar7 + (long)(*piVar23 + 1) * 0x10 + 0x138);
          param_7 = uVar35;
          goto code_r0x0157f6fc;
        }
        piVar23 = piVar23 + 4;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(pfVar31,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,1);
    param_7 = uVar35;
code_r0x0157f6fc:
    uVar34 = (*(code *)*puVar13)(pfVar31,puVar13[1]);
    lVar7 = *(long *)pfVar31;
    uVar28 = (ulong)*(ushort *)(lVar7 + 0x12a);
    param_6 = fVar37;
    uVar32 = uVar36;
    if (uVar28 != 0) {
      piVar23 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar13 = (undefined8 *)(lVar7 + (long)(*piVar23 + 2) * 0x10 + 0x138);
          goto code_r0x0157f764;
        }
        piVar23 = piVar23 + 4;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(pfVar31,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,2);
code_r0x0157f764:
    uVar35 = (*(code *)*puVar13)(pfVar31,puVar13[1]);
    lVar7 = *(long *)pfVar31;
    uVar28 = (ulong)*(ushort *)(lVar7 + 0x12a);
    fStack_278 = param_6;
    uStack_27c = uVar32;
    if (uVar28 != 0) {
      piVar23 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar23 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar13 = (undefined8 *)(lVar7 + (long)(*piVar23 + 3) * 0x10 + 0x138);
          goto code_r0x0157f7d0;
        }
        piVar23 = piVar23 + 4;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
    puVar13 = (undefined8 *)func_0x00fac1f0(pfVar31,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,3);
code_r0x0157f7d0:
    uStack_280 = (*(code *)*puVar13)(pfVar31,puVar13[1]);
    pfVar18 = pfVar19;
    pfVar20 = param_12;
  }
  if ((bRam0000000003eb50a0 & 1) == 0) {
    func_0x00f78a20(0x3d57700);
    func_0x00f78a20(0x3d57708);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar28 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(pfVar20,0,0);
  if ((uVar28 & 1) != 0) {
    return 0;
  }
  lVar7 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar7,pfVar18,0);
  if ((lVar7 != 0) && (lVar7 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar7,0), lVar7 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(uVar34,uVar36,fVar37,lVar7,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(uVar35,uVar32,param_6,param_7,lVar7,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uStack_280,uStack_27c,fStack_278,lVar7,0);
    if (*(long *)(uVar30 + 0x58) != 0) {
      uVar11 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(uVar30 + 0x58),0);
      goto code_r0x03275ee0;
    }
  }
  func_0x00f78af4();
  uVar11 = func_0x00f78b14();
  lVar8 = func_0x00f78ac0(uVar11,0);
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar7 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar7,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(lVar8 + 0x58) = lVar7;
  if (lVar7 != 0) {
    lVar7 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar7,0);
    if ((*(long *)(lVar8 + 0x50) != 0) &&
       (uVar11 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar8 + 0x50),0), lVar7 != 0)) {
code_r0x03275ee0:
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar28 = (*pcRam0000000003ec1898)(lVar7,uVar11,0);
      return uVar28;
    }
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar11 = *(undefined8 *)(lVar7 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar28 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0,0);
  if ((uVar28 & 1) == 0) {
    uVar11 = *(undefined8 *)(lVar7 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar28 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar11,0);
    *(undefined8 *)(lVar7 + 0x58) = 0;
  }
  return uVar28;
code_r0x0157f1d8:
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar29 = 0;
      do {
        if ((uVar1 <= uVar29) || (uVar5 = uVar29 + 1, uVar1 <= uVar5)) goto LAB_0157f274;
        lVar10 = lVar7 + 0x20;
        uVar32 = *(undefined4 *)(lVar10 + (long)(int)uVar29 * 4);
        *(undefined4 *)(lVar10 + (long)(int)uVar29 * 4) =
             *(undefined4 *)(lVar10 + (long)(int)uVar5 * 4);
        *(undefined4 *)(lVar10 + (long)(int)uVar5 * 4) = uVar32;
        uVar29 = uVar29 + 3;
      } while ((int)uVar29 < (int)uVar1);
    }
    goto code_r0x0157f280;
  }
  goto LAB_0157f324;
}



// ============================================================
// RVA: 0x157f328 | Atlas.Gameplay.DebugVisualiser.SetMeshRendererVisibility
// ============================================================

/* WARNING: Possible PIC construction at 0x0157f594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157f814) */
/* WARNING: Removing unreachable block (ram,0x0157f598) */
/* WARNING: Removing unreachable block (ram,0x0157f5b0) */
/* WARNING: Removing unreachable block (ram,0x0157f5b8) */
/* WARNING: Removing unreachable block (ram,0x0157f5bc) */
/* WARNING: Removing unreachable block (ram,0x0157f5d0) */
/* WARNING: Removing unreachable block (ram,0x0157f5d4) */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */

ulong Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                long param_9,long *param_10,long *param_11,long *param_12,long *param_13)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int extraout_w1;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined4 uVar17;
  undefined4 extraout_s0;
  undefined1 auVar18 [16];
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  plVar8 = param_10;
  if ((bRam0000000003eb509d & 1) == 0) {
    func_0x00f78a20(0x3d32a28);
    func_0x00f78a20(0x3d32a30);
    func_0x00f78a20(0x3d32a38);
    func_0x00f78a20(0x3d3b278);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb509d = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (param_9 != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,param_9,uRam0000000003d3b278);
    while( true ) {
      do {
        uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d32a30);
        lVar12 = lStack_48;
        if ((uVar3 & 1) == 0) {
          uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d32a28);
          return uVar3;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar12,0,0);
      } while ((uVar3 & 1) != 0);
      if (lVar12 == 0) break;
      /*UnityEngine.Renderer$$set_forceRenderingOff*/ func_0x0325bc24(lVar12,(uint)param_10 ^ 1,0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x157f45c);
    (*pcVar2)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar4 = (long *)___cxa_begin_catch();
    lVar12 = *plVar4;
    ___cxa_end_catch();
    uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003eb5000);
    if (lVar12 == 0) {
      return uVar3;
    }
    func_0x00f78ac0(lVar12,0);
  }
  auVar18 = __Unwind_Resume();
  lVar12 = auVar18._8_8_;
  uVar5 = auVar18._0_8_;
  uVar3 = uVar5;
  plVar16 = plVar8;
  plVar4 = param_11;
  plVar9 = param_12;
  if ((bRam0000000003eb509e & 1) == 0) {
    func_0x00f78a20(0x3d3d050);
    func_0x00f78a20(0x3d3d058);
    func_0x00f78a20(0x3d3d060);
    uVar3 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb509e = 1;
  }
  if (lVar12 != 0) {
    uVar10 = (ulong)*(uint *)(lVar12 + 0x18);
    if (0 < (int)*(uint *)(lVar12 + 0x18)) {
      uVar15 = 0;
      uVar13 = uVar10 - 1;
      lVar14 = 0x20;
      while( true ) {
        if (uVar10 <= uVar15) {
          uVar3 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar1 = *(long *)(lVar12 + 0x10) + lVar14;
        plVar16 = *(long **)(lVar1 + 8);
        if (plVar16 != (long *)0x0) {
          plVar4 = *(long **)(lVar1 + 0x18);
          uVar3 = *(ulong *)(lVar1 + 0x20);
          if ((uVar3 & 0xff0000) != 0) {
            plVar8 = param_13;
          }
          if ((uVar3 & 0xff) == 0) {
            param_11 = plVar8;
          }
          if ((uVar3 & 0xff00) == 0) {
            param_12 = param_11;
          }
          goto code_r0x0157f644;
        }
        if (uVar13 == uVar15) break;
        uVar10 = (ulong)*(uint *)(lVar12 + 0x18);
        lVar14 = lVar14 + 0x28;
        uVar15 = uVar15 + 1;
      }
    }
    return uVar3;
  }
  uVar5 = func_0x00f78af4();
  param_12 = plVar9;
code_r0x0157f644:
  plVar8 = plVar16;
  plVar9 = plVar4;
  if ((bRam0000000003eb509f & 1) == 0) {
    func_0x00f78a20(0x3d27140);
    bRam0000000003eb509f = 1;
  }
  if (plVar16 == (long *)0x0) {
    uVar5 = func_0x00f78af4();
    uVar17 = extraout_s0;
  }
  else {
    lVar12 = *plVar16;
    uVar3 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          param_7 = param_4;
          goto code_r0x0157f6fc;
        }
        piVar11 = piVar11 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar16,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,1);
    param_7 = param_4;
code_r0x0157f6fc:
    uVar17 = (*(code *)*puVar6)(plVar16,puVar6[1]);
    lVar12 = *plVar16;
    uVar3 = (ulong)*(ushort *)(lVar12 + 0x12a);
    param_5 = param_2;
    param_6 = param_3;
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto code_r0x0157f764;
        }
        piVar11 = piVar11 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar16,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,2);
code_r0x0157f764:
    param_4 = (*(code *)*puVar6)(plVar16,puVar6[1]);
    lVar12 = *plVar16;
    uVar3 = (ulong)*(ushort *)(lVar12 + 0x12a);
    uStack_19c = param_5;
    uStack_198 = param_6;
    if (uVar3 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto code_r0x0157f7d0;
        }
        piVar11 = piVar11 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar16,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,3);
code_r0x0157f7d0:
    uStack_1a0 = (*(code *)*puVar6)(plVar16,puVar6[1]);
    plVar8 = plVar4;
    plVar9 = param_12;
  }
  if ((bRam0000000003eb50a0 & 1) == 0) {
    func_0x00f78a20(0x3d57700);
    func_0x00f78a20(0x3d57708);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar9,0,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  lVar12 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar12,plVar8,0);
  if ((lVar12 != 0) && (lVar12 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar12,0), lVar12 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(uVar17,param_2,param_3,lVar12,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(param_4,param_5,param_6,param_7,lVar12,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uStack_1a0,uStack_19c,uStack_198,lVar12,0);
    if (*(long *)(uVar5 + 0x58) != 0) {
      uVar7 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(uVar5 + 0x58),0);
      goto code_r0x03275ee0;
    }
  }
  func_0x00f78af4();
  uVar7 = func_0x00f78b14();
  lVar14 = func_0x00f78ac0(uVar7,0);
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar12 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar12,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(lVar14 + 0x58) = lVar12;
  if (lVar12 != 0) {
    lVar12 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar12,0);
    if ((*(long *)(lVar14 + 0x50) != 0) &&
       (uVar7 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar14 + 0x50),0), lVar12 != 0)) {
code_r0x03275ee0:
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000003ec1898)(lVar12,uVar7,0);
      return uVar3;
    }
  }
  lVar12 = func_0x00f78af4();
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar7 = *(undefined8 *)(lVar12 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
  if ((uVar3 & 1) == 0) {
    uVar7 = *(undefined8 *)(lVar12 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar7,0);
    *(undefined8 *)(lVar12 + 0x58) = 0;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x157f4a4 | Atlas.Gameplay.DebugVisualiser.CreateMeshColliderVisuals
// ============================================================

/* WARNING: Possible PIC construction at 0x0157f594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157f814) */
/* WARNING: Removing unreachable block (ram,0x0157f598) */
/* WARNING: Removing unreachable block (ram,0x0157f5b0) */
/* WARNING: Removing unreachable block (ram,0x0157f5b8) */
/* WARNING: Removing unreachable block (ram,0x0157f5bc) */
/* WARNING: Removing unreachable block (ram,0x0157f5d0) */
/* WARNING: Removing unreachable block (ram,0x0157f5d4) */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */

ulong Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,ulong param_8,long param_9,
                long *param_10,long *param_11,long *param_12,long *param_13)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined4 extraout_s0;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  
  uVar1 = param_8;
  plVar13 = param_10;
  plVar6 = param_11;
  plVar5 = param_12;
  if ((bRam0000000003eb509e & 1) == 0) {
    func_0x00f78a20(0x3d3d050);
    func_0x00f78a20(0x3d3d058);
    func_0x00f78a20(0x3d3d060);
    uVar1 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb509e = 1;
  }
  if (param_9 != 0) {
    uVar8 = (ulong)*(uint *)(param_9 + 0x18);
    if (0 < (int)*(uint *)(param_9 + 0x18)) {
      uVar12 = 0;
      uVar10 = uVar8 - 1;
      lVar11 = 0x20;
      while( true ) {
        if (uVar8 <= uVar12) {
          uVar1 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar4 = *(long *)(param_9 + 0x10) + lVar11;
        plVar13 = *(long **)(lVar4 + 8);
        if (plVar13 != (long *)0x0) {
          plVar6 = *(long **)(lVar4 + 0x18);
          uVar1 = *(ulong *)(lVar4 + 0x20);
          if ((uVar1 & 0xff0000) != 0) {
            param_10 = param_13;
          }
          if ((uVar1 & 0xff) == 0) {
            param_11 = param_10;
          }
          if ((uVar1 & 0xff00) == 0) {
            param_12 = param_11;
          }
          goto code_r0x0157f644;
        }
        if (uVar10 == uVar12) break;
        uVar8 = (ulong)*(uint *)(param_9 + 0x18);
        lVar11 = lVar11 + 0x28;
        uVar12 = uVar12 + 1;
      }
    }
    return uVar1;
  }
  param_8 = func_0x00f78af4();
  param_12 = plVar5;
code_r0x0157f644:
  plVar5 = plVar13;
  plVar7 = plVar6;
  if ((bRam0000000003eb509f & 1) == 0) {
    func_0x00f78a20(0x3d27140);
    bRam0000000003eb509f = 1;
  }
  if (plVar13 == (long *)0x0) {
    param_8 = func_0x00f78af4();
    uVar14 = extraout_s0;
  }
  else {
    lVar11 = *plVar13;
    uVar1 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar1 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar2 = (undefined8 *)(lVar11 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          param_7 = param_4;
          goto code_r0x0157f6fc;
        }
        piVar9 = piVar9 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar13,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,1);
    param_7 = param_4;
code_r0x0157f6fc:
    uVar14 = (*(code *)*puVar2)(plVar13,puVar2[1]);
    lVar11 = *plVar13;
    uVar1 = (ulong)*(ushort *)(lVar11 + 0x12a);
    param_5 = param_2;
    param_6 = param_3;
    if (uVar1 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar2 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto code_r0x0157f764;
        }
        piVar9 = piVar9 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar13,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,2);
code_r0x0157f764:
    param_4 = (*(code *)*puVar2)(plVar13,puVar2[1]);
    lVar11 = *plVar13;
    uVar1 = (ulong)*(ushort *)(lVar11 + 0x12a);
    uStack_13c = param_5;
    uStack_138 = param_6;
    if (uVar1 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar2 = (undefined8 *)(lVar11 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto code_r0x0157f7d0;
        }
        piVar9 = piVar9 + 4;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar13,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,3);
code_r0x0157f7d0:
    uStack_140 = (*(code *)*puVar2)(plVar13,puVar2[1]);
    plVar5 = plVar6;
    plVar7 = param_12;
  }
  if ((bRam0000000003eb50a0 & 1) == 0) {
    func_0x00f78a20(0x3d57700);
    func_0x00f78a20(0x3d57708);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar7,0,0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  lVar11 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar11,plVar5,0);
  if ((lVar11 != 0) && (lVar11 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar11,0), lVar11 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(uVar14,param_2,param_3,lVar11,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(param_4,param_5,param_6,param_7,lVar11,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uStack_140,uStack_13c,uStack_138,lVar11,0);
    if (*(long *)(param_8 + 0x58) != 0) {
      uVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_8 + 0x58),0);
      goto code_r0x03275ee0;
    }
  }
  func_0x00f78af4();
  uVar3 = func_0x00f78b14();
  lVar4 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar11 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar11,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(lVar4 + 0x58) = lVar11;
  if (lVar11 != 0) {
    lVar11 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar11,0);
    if ((*(long *)(lVar4 + 0x50) != 0) &&
       (uVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar4 + 0x50),0), lVar11 != 0)) {
code_r0x03275ee0:
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*pcRam0000000003ec1898)(lVar11,uVar3,0);
      return uVar1;
    }
  }
  lVar11 = func_0x00f78af4();
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar3 = *(undefined8 *)(lVar11 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(lVar11 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar3,0);
    *(undefined8 *)(lVar11 + 0x58) = 0;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x157f644 | Atlas.Gameplay.DebugVisualiser.CreateMeshProxy
// ============================================================

/* WARNING: Possible PIC construction at 0x0157f810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157f814) */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */

ulong Atlas_Gameplay_DebugVisualiser__CreateMeshProxy
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,
                undefined8 param_9,long *param_10,long *param_11,long *param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 extraout_s0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  plVar4 = param_10;
  plVar5 = param_11;
  if ((bRam0000000003eb509f & 1) == 0) {
    func_0x00f78a20(0x3d27140);
    bRam0000000003eb509f = 1;
  }
  if (param_10 == (long *)0x0) {
    param_8 = func_0x00f78af4();
    uVar9 = extraout_s0;
  }
  else {
    lVar6 = *param_10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          param_7 = param_4;
          goto LAB_0157f6fc;
        }
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)func_0x00fac1f0(param_10,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,1);
    param_7 = param_4;
LAB_0157f6fc:
    uVar9 = (*(code *)*puVar1)(param_10,puVar1[1]);
    lVar6 = *param_10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    param_5 = param_2;
    param_6 = param_3;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto code_r0x0157f764;
        }
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)func_0x00fac1f0(param_10,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,2);
code_r0x0157f764:
    param_4 = (*(code *)*puVar1)(param_10,puVar1[1]);
    lVar6 = *param_10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    uStack_8c = param_5;
    uStack_88 = param_6;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto code_r0x0157f7d0;
        }
        piVar8 = piVar8 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)func_0x00fac1f0(param_10,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,3);
code_r0x0157f7d0:
    uStack_90 = (*(code *)*puVar1)(param_10,puVar1[1]);
    plVar4 = param_11;
    plVar5 = param_12;
  }
  if ((bRam0000000003eb50a0 & 1) == 0) {
    func_0x00f78a20(0x3d57700);
    func_0x00f78a20(0x3d57708);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar5,0,0);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  lVar6 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar6,plVar4,0);
  if ((lVar6 != 0) && (lVar6 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar6,0), lVar6 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(uVar9,param_2,param_3,lVar6,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(param_4,param_5,param_6,param_7,lVar6,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uStack_90,uStack_8c,uStack_88,lVar6,0);
    if (*(long *)(param_8 + 0x58) != 0) {
      uVar2 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_8 + 0x58),0);
      goto code_r0x03275ee0;
    }
  }
  func_0x00f78af4();
  uVar2 = func_0x00f78b14();
  lVar3 = func_0x00f78ac0(uVar2,0);
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar6 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar6,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(lVar3 + 0x58) = lVar6;
  if (lVar6 != 0) {
    lVar6 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar6,0);
    if ((*(long *)(lVar3 + 0x50) != 0) &&
       (uVar2 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar3 + 0x50),0), lVar6 != 0)) {
code_r0x03275ee0:
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*pcRam0000000003ec1898)(lVar6,uVar2,0);
      return uVar7;
    }
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar2 = *(undefined8 *)(lVar6 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,0,0);
  if ((uVar7 & 1) == 0) {
    uVar2 = *(undefined8 *)(lVar6 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar2,0);
    *(undefined8 *)(lVar6 + 0x58) = 0;
  }
  return uVar7;
}



// ============================================================
// RVA: 0x157f840 | Atlas.Gameplay.DebugVisualiser.CreateMeshProxy
// ============================================================

/* WARNING: Possible PIC construction at 0x0157f9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157f9c8) */
/* WARNING: Removing unreachable block (ram,0x0157f9e0) */
/* WARNING: Removing unreachable block (ram,0x0157fa00) */
/* WARNING: Removing unreachable block (ram,0x0157fa0c) */
/* WARNING: Removing unreachable block (ram,0x0157fa1c) */
/* WARNING: Removing unreachable block (ram,0x0157fa24) */
/* WARNING: Removing unreachable block (ram,0x0157fa3c) */
/* WARNING: Removing unreachable block (ram,0x0157fa70) */
/* WARNING: Removing unreachable block (ram,0x0157fa84) */
/* WARNING: Removing unreachable block (ram,0x0157fabc) */
/* WARNING: Removing unreachable block (ram,0x0157fac0) */
/* WARNING: Removing unreachable block (ram,0x0157fac8) */
/* WARNING: Removing unreachable block (ram,0x0157facc) */
/* WARNING: Removing unreachable block (ram,0x0157fae0) */
/* WARNING: Removing unreachable block (ram,0x0157fb44) */
/* WARNING: Removing unreachable block (ram,0x0157faec) */
/* WARNING: Removing unreachable block (ram,0x0157fb08) */

ulong Atlas_Gameplay_DebugVisualiser__CreateMeshProxy
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,
                undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  if ((bRam0000000003eb50a0 & 1) == 0) {
    func_0x00f78a20(0x3d57700);
    func_0x00f78a20(0x3d57708);
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d1f1d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a0 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_11,0,0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar2,param_10,0);
  if ((lVar2 != 0) && (lVar2 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar2,0), lVar2 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(param_1,param_2,param_3,lVar2,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(param_4,param_5,param_6,param_7,lVar2,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,lVar2,0);
    if (*(long *)(param_8 + 0x58) != 0) {
      uVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_8 + 0x58),0);
      goto code_r0x03275ee0;
    }
  }
  func_0x00f78af4();
  uVar3 = func_0x00f78b14();
  lVar4 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar2 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar2,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(lVar4 + 0x58) = lVar2;
  if (lVar2 != 0) {
    lVar2 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar2,0);
    if ((*(long *)(lVar4 + 0x50) != 0) &&
       (uVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar4 + 0x50),0), lVar2 != 0)) {
code_r0x03275ee0:
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*pcRam0000000003ec1898)(lVar2,uVar3,0);
      return uVar1;
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar3,0);
    *(undefined8 *)(lVar2 + 0x58) = 0;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x157fb5c | Atlas.Gameplay.DebugVisualiser.CreateProxyGameObjectRoot
// ============================================================

void Atlas_Gameplay_DebugVisualiser__CreateProxyGameObjectRoot(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((bRam0000000003eb50a1 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d71738);
    bRam0000000003eb50a1 = 1;
  }
  lVar1 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar1,/*STR('Proxies')*/ uRam0000000003d71738,0);
  *(long *)(param_1 + 0x58) = lVar1;
  if (lVar1 != 0) {
    lVar1 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar1,0);
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (uVar2 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(param_1 + 0x50),0), lVar1 != 0)) {
      if (pcRam0000000003ec1898 == (code *)0x0) {
        pcRam0000000003ec1898 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03275f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec1898)(lVar1,uVar2,0);
      return;
    }
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar2,0);
    *(undefined8 *)(lVar1 + 0x58) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x157fc14 | Atlas.Gameplay.DebugVisualiser.DestroyProxyGameObjectRoot
// ============================================================

void Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb50a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a2 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar2,0);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x157fcbc | Atlas.Gameplay.DebugVisualiser.OnUsableSpawned
// ============================================================

/* WARNING: Possible PIC construction at 0x0157cdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157cdc4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_DebugVisualiser__OnUsableSpawned
               (undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6,undefined8 param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  code *pcVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  int extraout_w1;
  undefined8 extraout_x1;
  long lVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long lVar20;
  undefined8 unaff_x25;
  undefined8 uVar21;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar22;
  undefined8 *******pppppppuVar23;
  undefined *puVar24;
  undefined4 extraout_s0;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined4 auStack_270 [4];
  long alStack_260 [22];
  undefined8 *******apppppppuStack_1b0 [2];
  long lStack_1a0;
  long lStack_198;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 *******pppppppuStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 *******pppppppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  plVar6 = (long *)auStack_e0;
  lVar18 = 0x3eb5000;
  if ((bRam0000000003eb50a3 & 1) == 0) {
    func_0x00f78a20(0x3d333d8);
    func_0x00f78a20(0x3d333e0);
    func_0x00f78a20(0x3d333e8);
    func_0x00f78a20(0x3d57a00);
    func_0x00f78a20(0x3d27140);
    func_0x00f78a20(0x3d3d040);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50a3 = 1;
  }
  uStack_60 = 0;
  plStack_78 = (long *)0x0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  iVar7 = Atlas_Gameplay_DebugVisualiser__AreAnyCosmeticSettingsEnabled(param_5);
  if (iVar7 == 0) {
    return;
  }
  if (*(long *)(param_5 + 0x48) == 0) goto LAB_0157ff2c;
  /*System.Collections.Generic.List<DebugVisualiser.Collider>$$GetEnumerator*/ func_0x02517e88(&uStack_d8,*(long *)(param_5 + 0x48),uRam0000000003d3d040);
  uStack_88 = uStack_d0;
  uStack_90 = uStack_d8;
  plStack_78 = plStack_c0;
  uStack_80 = uStack_c8;
  uStack_68 = uStack_b0;
  uStack_70 = uStack_b8;
  uStack_60 = uStack_a8;
  unaff_x23 = 0x3d333e0;
  unaff_x24 = 0x3d27140;
  unaff_x25 = 0x3d23990;
  param_2 = uStack_c8;
  do {
    uVar10 = /*System.Collections.Generic.List.Enumerator<DebugVisualiser.Collider>$$MoveNext*/ func_0x01f7bec0(&uStack_90,uRam0000000003d333e0);
    plVar12 = plStack_78;
    if ((uVar10 & 1) == 0) {
      iStack_a0 = 0x57;
      goto code_r0x0157fe7c;
    }
    if (param_6 == 0) {
      func_0x00f78af4();
code_r0x0157ff28:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x157ff2c);
      (*pcVar5)();
    }
    if (*(long *)(param_6 + 0x48) == 0) {
      func_0x00f78af4();
      goto code_r0x0157ff28;
    }
    lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_6 + 0x48),0);
    if (plVar12 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x0157ff28;
    }
    lVar15 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar10 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == /*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar16 + 4) * 0x10 + 0x138);
          goto LAB_0157fe34;
        }
        piVar16 = piVar16 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)func_0x00fac1f0(plVar12,/*Atlas.Gameplay.DebugVisualiser.ITransformSource_TypeInfo*/ lRam0000000003d27140,4);
LAB_0157fe34:
    unaff_x22 = (*(code *)*puVar11)(plVar12,puVar11[1]);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_7 = 0;
    uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar18,unaff_x22);
  } while ((uVar10 & 1) == 0);
  iStack_a0 = 0x7b;
code_r0x0157fe7c:
  /*System.Collections.Generic.List.Enumerator<DebugVisualiser.Collider>$$Dispose*/ func_0x01f7bebc(&uStack_90,uRam0000000003d333d8);
  if (iStack_a0 == 0x7b) {
    return;
  }
  if (iStack_a0 == 0x57) {
    uStack_98 = 0;
  }
  do {
    if ((((param_6 != 0) && (*(long *)(param_6 + 0x48) != 0)) &&
        (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_6 + 0x48),0), lVar15 != 0)) &&
       (param_7 = uRam0000000003d57a00, lVar15 = /*UnityEngine.GameObject$$GetComponentsInChildren<object>*/ func_0x0185d600(lVar15,1), lVar15 != 0)) {
      if (*(long *)(lVar15 + 0x18) == 0) {
        return;
      }
      Atlas_Gameplay_DebugVisualiser__CacheSceneObjects(param_5,lVar15);
      Atlas_Gameplay_DebugVisualiser__UpdateSettings(param_5);
      return;
    }
LAB_0157ff2c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x0157ff80;
    plVar12 = (long *)___cxa_begin_catch();
    lVar18 = *plVar12;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<DebugVisualiser.Collider>$$Dispose*/ func_0x01f7bebc(&uStack_90,uRam0000000003d333d8);
  } while (lVar18 == 0);
  func_0x00f78ac0(lVar18,0);
code_r0x0157ff80:
  lVar15 = __Unwind_Resume();
  puStack_e8 = &Atlas_Gameplay_DebugVisualiser__OnShowCollidersPressed;
  lStack_100 = param_6;
  lStack_f8 = param_5;
  pppppppuStack_f0 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (*(long *)(lVar15 + 0xc0) == 0) {
    lVar20 = func_0x00f78af4();
    puStack_108 = &Atlas_Gameplay_DebugVisualiser__OnShowBattleAIWaypoints;
    lStack_120 = param_6;
    lStack_118 = lVar15;
    pppppppuStack_110 = &pppppppuStack_f0;
    if (*(long *)(lVar20 + 0xf0) == 0) {
      lVar15 = func_0x00f78af4();
      puStack_128 = &Atlas_Gameplay_DebugVisualiser__OnShowTriggersPressed;
      lStack_140 = param_6;
      lStack_138 = lVar20;
      pppppppuStack_130 = &pppppppuStack_110;
      if (*(long *)(lVar15 + 0xd8) == 0) {
        lVar20 = func_0x00f78af4();
        puStack_148 = &Atlas_Gameplay_DebugVisualiser__OnShowRespawnersPressed;
        lStack_160 = param_6;
        lStack_158 = lVar15;
        pppppppuStack_150 = &pppppppuStack_130;
        if (*(long *)(lVar20 + 200) == 0) {
          lVar15 = func_0x00f78af4();
          puStack_168 = &Atlas_Gameplay_DebugVisualiser__OnShowReplicatorsPressed;
          lStack_180 = param_6;
          lStack_178 = lVar20;
          pppppppuStack_170 = &pppppppuStack_150;
          if (*(long *)(lVar15 + 0xd0) == 0) {
            lVar20 = func_0x00f78af4();
            puStack_188 = &Atlas_Gameplay_DebugVisualiser__OnShowScenePressed;
            lStack_1a0 = param_6;
            lStack_198 = lVar15;
            pppppppuStack_190 = &pppppppuStack_170;
            if (*(long *)(lVar20 + 0xe0) == 0) {
              lVar15 = func_0x00f78af4();
              apppppppuStack_1b0[1] =
                   (undefined8 *******)&Atlas_Gameplay_DebugVisualiser__OnHighlightDynamicPressed;
              pppppppuVar22 = apppppppuStack_1b0;
              alStack_260[0x14] = param_6;
              alStack_260[0x15] = lVar20;
              apppppppuStack_1b0[0] = &pppppppuStack_190;
              if (*(long *)(lVar15 + 0xe8) == 0) {
                puVar24 = &Atlas_Gameplay_DebugVisualiser__OnPracticallyPausedPressed;
                lVar18 = func_0x00f78af4();
                *(char *)(lVar18 + 0xf8) = (char)param_7;
                plVar12 = alStack_260 + 0x14;
                uVar27 = _UNK_033f8758;
                if ((int)param_7 == 0) {
                  plVar12 = alStack_260 + 0x14;
                  uVar27 = 0x3f800000;
                }
                goto code_r0x03272d10;
              }
              /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar15 + 0xe8),param_7,0);
              plVar6 = &lStack_1a0;
              lVar20 = alStack_260[0x15];
              lVar17 = alStack_260[0x14];
              pppppppuVar22 = apppppppuStack_1b0[0];
              pppppppuVar23 = apppppppuStack_1b0[1];
            }
            else {
              /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar20 + 0xe0),param_7,0);
              plVar6 = &lStack_180;
              lVar15 = lVar20;
              lVar20 = lStack_198;
              lVar17 = lStack_1a0;
              pppppppuVar22 = pppppppuStack_190;
              pppppppuVar23 = (undefined8 *******)puStack_188;
            }
          }
          else {
            /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar15 + 0xd0),param_7,0);
            plVar6 = &lStack_160;
            lVar20 = lStack_178;
            lVar17 = lStack_180;
            pppppppuVar22 = pppppppuStack_170;
            pppppppuVar23 = (undefined8 *******)puStack_168;
          }
        }
        else {
          /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar20 + 200),param_7,0);
          plVar6 = &lStack_140;
          lVar15 = lVar20;
          lVar20 = lStack_158;
          lVar17 = lStack_160;
          pppppppuVar22 = pppppppuStack_150;
          pppppppuVar23 = (undefined8 *******)puStack_148;
        }
      }
      else {
        /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar15 + 0xd8),param_7,0);
        plVar6 = &lStack_120;
        lVar20 = lStack_138;
        lVar17 = lStack_140;
        pppppppuVar22 = pppppppuStack_130;
        pppppppuVar23 = (undefined8 *******)puStack_128;
      }
    }
    else {
      /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar20 + 0xf0),param_7,0);
      plVar6 = &lStack_100;
      lVar15 = lVar20;
      lVar20 = lStack_118;
      lVar17 = lStack_120;
      pppppppuVar22 = pppppppuStack_110;
      pppppppuVar23 = (undefined8 *******)puStack_108;
    }
  }
  else {
    /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar15 + 0xc0),param_7,0);
    lVar20 = lStack_f8;
    lVar17 = lStack_100;
    pppppppuVar22 = pppppppuStack_f0;
    pppppppuVar23 = (undefined8 *******)puStack_e8;
  }
  *(undefined8 *)((long)plVar6 + -0x50) = unaff_x26;
  *(undefined8 *)((long)plVar6 + -0x48) = unaff_x25;
  *(long *)((long)plVar6 + -0x40) = unaff_x24;
  *(undefined8 *)((long)plVar6 + -0x38) = unaff_x23;
  *(undefined8 *)((long)plVar6 + -0x30) = unaff_x22;
  *(long *)((long)plVar6 + -0x28) = lVar18;
  *(long *)((long)plVar6 + -0x20) = lVar17;
  *(long *)((long)plVar6 + -0x18) = lVar20;
  *(undefined8 ********)((long)plVar6 + -0x10) = pppppppuVar22;
  *(undefined8 ********)((long)plVar6 + -8) = pppppppuVar23;
  if (*(char *)(lVar15 + 0x30) == '\0') {
    Atlas_Gameplay_DebugVisualiser__CacheSceneObjects(lVar15,0);
    *(undefined1 *)(lVar15 + 0x30) = 1;
  }
  uVar8 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar15);
  *(undefined8 *)(lVar15 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar8,*(undefined8 *)(lVar15 + 0x38),1);
  uVar8 = Atlas_Gameplay_DebugVisualiser__CreateProxyGameObjectRoot(lVar15);
  if (*(long *)(lVar15 + 0xc0) != 0) {
    cVar1 = *(char *)(*(long *)(lVar15 + 0xc0) + 0x10);
    if (cVar1 == '\0') {
      lVar17 = 0;
    }
    else {
      lVar17 = *(long *)(lVar15 + 0x78);
    }
    if (*(long *)(lVar15 + 0xd8) != 0) {
      cVar2 = *(char *)(*(long *)(lVar15 + 0xd8) + 0x10);
      if (cVar2 == '\0') {
        lVar18 = 0;
      }
      else {
        lVar18 = *(long *)(lVar15 + 0x88);
      }
      if (*(long *)(lVar15 + 200) != 0) {
        cVar3 = *(char *)(*(long *)(lVar15 + 200) + 0x10);
        if (cVar3 == '\0') {
          unaff_x22 = 0;
        }
        else {
          unaff_x22 = *(undefined8 *)(lVar15 + 0x90);
        }
        if (*(long *)(lVar15 + 0xd0) != 0) {
          if (*(char *)(*(long *)(lVar15 + 0xd0) + 0x10) == '\0') {
            unaff_x23 = 0;
            if (cVar1 != '\0') goto code_r0x0157cc30;
code_r0x0157cc50:
            unaff_x24 = 0;
            if (cVar2 != '\0') goto code_r0x0157cc38;
code_r0x0157cc58:
            lVar20 = 0;
            if (cVar3 != '\0') goto code_r0x0157cc40;
code_r0x0157cc60:
            uVar21 = 0;
          }
          else {
            unaff_x23 = *(undefined8 *)(lVar15 + 0x98);
            if (cVar1 == '\0') goto code_r0x0157cc50;
code_r0x0157cc30:
            unaff_x24 = *(long *)(lVar15 + 0x80);
            if (cVar2 == '\0') goto code_r0x0157cc58;
code_r0x0157cc38:
            lVar20 = *(long *)(lVar15 + 0x80);
            if (cVar3 == '\0') goto code_r0x0157cc60;
code_r0x0157cc40:
            uVar21 = *(undefined8 *)(lVar15 + 0x80);
          }
          if (*(long *)(lVar15 + 0xe0) != 0) {
            Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility
                      (uVar8,*(undefined8 *)(lVar15 + 0x38),
                       *(char *)(*(long *)(lVar15 + 0xe0) + 0x10) == '\0');
            Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                      (lVar15,*(undefined8 *)(lVar15 + 0x40),lVar17,lVar18,unaff_x22,unaff_x23);
            if (*(long *)(lVar15 + 0xe8) != 0) {
              lVar13 = lVar17;
              lVar14 = lVar18;
              uVar8 = unaff_x22;
              if (*(char *)(*(long *)(lVar15 + 0xe8) + 0x10) != '\0') {
                lVar13 = unaff_x24;
                lVar14 = lVar20;
                uVar8 = uVar21;
              }
              Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                        (lVar15,*(undefined8 *)(lVar15 + 0x48),lVar13,lVar14,uVar8,unaff_x23);
              if (*(long *)(lVar15 + 0xf0) != 0) {
                if (*(char *)(*(long *)(lVar15 + 0xf0) + 0x10) == '\0') {
                  return;
                }
                *(undefined8 *)((long)plVar6 + -0x50) = *(undefined8 *)((long)plVar6 + -0x50);
                *(undefined8 *)((long)plVar6 + -0x48) = *(undefined8 *)((long)plVar6 + -0x48);
                *(undefined8 *)((long)plVar6 + -0x40) = *(undefined8 *)((long)plVar6 + -0x40);
                *(undefined8 *)((long)plVar6 + -0x38) = *(undefined8 *)((long)plVar6 + -0x38);
                *(undefined8 *)((long)plVar6 + -0x30) = *(undefined8 *)((long)plVar6 + -0x30);
                *(undefined8 *)((long)plVar6 + -0x28) = *(undefined8 *)((long)plVar6 + -0x28);
                *(undefined8 *)((long)plVar6 + -0x20) = *(undefined8 *)((long)plVar6 + -0x20);
                *(undefined8 *)((long)plVar6 + -0x18) = *(undefined8 *)((long)plVar6 + -0x18);
                *(undefined8 *)((long)plVar6 + -0x10) = *(undefined8 *)((long)plVar6 + -0x10);
                *(undefined8 *)((long)plVar6 + -8) = *(undefined8 *)((long)plVar6 + -8);
                uVar10 = 0x14;
                if ((bRam0000000003eb5096 & 1) == 0) {
                  func_0x00f78a20(0x3d3d070);
                  func_0x00f78a20(0x3d3d068);
                  func_0x00f78a20(0x3d1e110);
                  func_0x00f78a20(0x3d23298);
                  func_0x00f78a20(0x3d76358);
                  bRam0000000003eb5096 = 1;
                }
                uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
                /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar8,0x14,uRam0000000003d3d068);
                *(undefined8 *)(lVar15 + 0x60) = uVar8;
                do {
                  uVar19 = *(undefined8 *)(lVar15 + 0xa0);
                  uVar21 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
                  /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar21,uVar19,0);
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                  uVar8 = uVar21;
                  uVar9 = Atlas_Gameplay_DebugVisualiser__CreateUnitSphere
                                    (lVar15,/*STR('WaypointSphere')*/ uRam0000000003d76358,uVar21);
                  uVar27 = (undefined4)param_2;
                  if (*(long *)(lVar15 + 0x60) == 0) {
                    lVar18 = func_0x00f78af4(0,uVar9);
                    *(undefined8 *)((long)plVar6 + -0xc0) = unaff_d15;
                    *(undefined8 *)((long)plVar6 + -0xb8) = unaff_d14;
                    *(undefined8 *)((long)plVar6 + -0xb0) = unaff_d13;
                    *(undefined8 *)((long)plVar6 + -0xa8) = unaff_d12;
                    *(undefined8 *)((long)plVar6 + -0xa0) = unaff_d11;
                    *(undefined8 *)((long)plVar6 + -0x98) = unaff_d10;
                    *(undefined8 *)((long)plVar6 + -0x90) = unaff_d9;
                    *(undefined8 *)((long)plVar6 + -0x88) = unaff_d8;
                    *(undefined8 *)((long)plVar6 + -0x80) = uVar19;
                    *(undefined8 *)((long)plVar6 + -0x78) = uVar21;
                    *(long *)((long)plVar6 + -0x70) = lVar15;
                    *(ulong *)((long)plVar6 + -0x68) = uVar10;
                    *(undefined1 **)((long)plVar6 + -0x60) = (undefined1 *)((long)plVar6 + -0x10);
                    *(code **)((long)plVar6 + -0x58) =
                         Atlas_Gameplay_DebugVisualiser__CreateUnitSphere;
                    uVar21 = *(undefined8 *)(lVar18 + 0x70);
                    uVar30 = param_3;
                    uVar28 = uVar27;
                    uVar25 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
                    uVar31 = uVar30;
                    uVar29 = uVar28;
                    uVar26 = /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
                    *(undefined4 *)((long)plVar6 + -0xcc) = uVar29;
                    *(undefined4 *)((long)plVar6 + -200) = uVar31;
                    *(undefined4 *)((long)plVar6 + -0xd0) = uVar26;
                    Atlas_Gameplay_DebugVisualiser__CreateMeshProxy
                              (extraout_s0,uVar27,param_3,uVar25,uVar28,uVar30,param_4,lVar18,uVar21
                               ,extraout_x1,uVar8);
                    return;
                  }
                  /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$Add*/ func_0x02519f88(*(long *)(lVar15 + 0x60),uVar9,uVar21,uRam0000000003d3d070);
                  uVar4 = (int)uVar10 - 1;
                  uVar10 = (ulong)uVar4;
                } while (uVar4 != 0);
                return;
              }
            }
          }
        }
      }
    }
  }
  lVar20 = func_0x00f78af4();
  *(long *)((long)plVar6 + -0x90) = unaff_x24;
  *(undefined8 *)((long)plVar6 + -0x88) = unaff_x23;
  *(undefined8 *)((long)plVar6 + -0x80) = unaff_x22;
  *(long *)((long)plVar6 + -0x78) = lVar18;
  *(long *)((long)plVar6 + -0x70) = lVar17;
  *(long *)((long)plVar6 + -0x68) = lVar15;
  *(undefined1 **)((long)plVar6 + -0x60) = (undefined1 *)((long)plVar6 + -0x10);
  *(code **)((long)plVar6 + -0x58) = Atlas_Gameplay_DebugVisualiser__DeInit;
  pppppppuVar22 = (undefined8 *******)((long)plVar6 + -0x60);
  param_6 = 0x3eb5000;
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(lVar20 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar20 + 0xb0),lVar20,0);
    *(undefined4 *)(lVar20 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar20 + 0xb0) = 0;
  }
  uVar8 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar20);
  *(undefined8 *)(lVar20 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar8,*(undefined8 *)(lVar20 + 0x38),1);
  if (*(char *)(lVar20 + 0xf8) == '\0') {
    if (*(char *)(lVar20 + 0xf9) != '\0') {
      *(undefined1 *)(lVar20 + 0xf9) = 0;
    }
    lVar18 = *(long *)(lVar20 + 0x18);
    uVar21 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
    Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
              (uVar21,lVar20,uRam0000000003d54b70,0);
    uVar8 = 0;
    if (lVar18 != 0) {
      Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar18,uVar21,0);
      *(undefined8 *)(lVar20 + 0x40) = 0;
      *(undefined8 *)(lVar20 + 0x48) = 0;
      *(undefined8 *)(lVar20 + 0x38) = 0;
      *(undefined8 *)(lVar20 + 0x78) = 0;
      *(undefined8 *)(lVar20 + 0x80) = 0;
      uVar8 = *(undefined8 *)(lVar20 + 0x50);
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar8,0);
      *(undefined8 *)(lVar20 + 0x50) = 0;
      if (*(long *)(lVar20 + 0x28) != 0) {
        *(undefined8 *)(*(long *)(lVar20 + 0x28) + 0x18) = 0;
        *(undefined8 *)(lVar20 + 0x18) = 0;
        *(undefined8 *)(lVar20 + 0x10) = 0;
        *(undefined8 *)(lVar20 + 0x28) = 0;
        *(undefined8 *)(lVar20 + 0x20) = 0;
        return;
      }
    }
    lVar18 = func_0x00f78af4();
    *(undefined8 *)((long)plVar6 + -0xb0) = uVar8;
    *(long *)((long)plVar6 + -0xa8) = lVar20;
    *(undefined8 ********)((long)plVar6 + -0xa0) = pppppppuVar22;
    *(code **)((long)plVar6 + -0x98) = Atlas_Gameplay_DebugVisualiser__DeInitDebugMenuBindings;
    if (*(long *)(lVar18 + 0xb0) != 0) {
      /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar18 + 0xb0),lVar18,0);
      *(undefined4 *)(lVar18 + 0xb8) = 0xffffffff;
      *(undefined8 *)(lVar18 + 0xb0) = 0;
    }
    return;
  }
  puVar24 = (undefined *)0x157cdc4;
  plVar12 = (long *)((long)plVar6 + -0x90);
  lVar15 = lVar20;
  uVar27 = 0x3f800000;
code_r0x03272d10:
  *(undefined8 *)((long)plVar12 + -0x30) = unaff_d9;
  *(undefined8 *)((long)plVar12 + -0x28) = unaff_d8;
  *(long *)((long)plVar12 + -0x20) = param_6;
  *(long *)((long)plVar12 + -0x18) = lVar15;
  *(undefined8 ********)((long)plVar12 + -0x10) = pppppppuVar22;
  *(undefined **)((long)plVar12 + -8) = puVar24;
  if (pcRam0000000003ec1660 == (code *)0x0) {
    pcRam0000000003ec1660 =
         (code *)func_0x00f789d4("UnityEngine.Time::set_timeScale(System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03272d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec1660)(uVar27);
  return;
}



// ============================================================
// RVA: 0x157ff84 | Atlas.Gameplay.DebugVisualiser.OnShowCollidersPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x0157cdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157cdc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_DebugVisualiser__OnShowCollidersPressed
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x19;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar12;
  undefined8 unaff_x25;
  undefined8 uVar13;
  undefined8 unaff_x26;
  undefined8 ****unaff_x29;
  undefined8 ****ppppuVar14;
  undefined *puVar15;
  undefined *unaff_x30;
  undefined1 uVar16;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar21 [16];
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_5 + 0xc0) == 0) {
    unaff_x19 = func_0x00f78af4();
    puStack_28 = &Atlas_Gameplay_DebugVisualiser__OnShowBattleAIWaypoints;
    pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
    if (*(long *)(unaff_x19 + 0xf0) == 0) {
      lVar7 = func_0x00f78af4();
      puStack_48 = &Atlas_Gameplay_DebugVisualiser__OnShowTriggersPressed;
      pppuStack_50 = &pppuStack_30;
      if (*(long *)(lVar7 + 0xd8) == 0) {
        unaff_x19 = func_0x00f78af4();
        puStack_68 = &Atlas_Gameplay_DebugVisualiser__OnShowRespawnersPressed;
        pppuStack_70 = &pppuStack_50;
        if (*(long *)(unaff_x19 + 200) == 0) {
          lVar7 = func_0x00f78af4();
          puStack_88 = &Atlas_Gameplay_DebugVisualiser__OnShowReplicatorsPressed;
          pppuStack_90 = &pppuStack_70;
          if (*(long *)(lVar7 + 0xd0) == 0) {
            unaff_x19 = func_0x00f78af4();
            puStack_a8 = &Atlas_Gameplay_DebugVisualiser__OnShowScenePressed;
            pppuStack_b0 = &pppuStack_90;
            if (*(long *)(unaff_x19 + 0xe0) == 0) {
              lVar10 = func_0x00f78af4();
              puStack_c8 = &Atlas_Gameplay_DebugVisualiser__OnHighlightDynamicPressed;
              ppppuVar14 = &pppuStack_d0;
              pppuStack_d0 = &pppuStack_b0;
              if (*(long *)(lVar10 + 0xe8) == 0) {
                puVar15 = &Atlas_Gameplay_DebugVisualiser__OnPracticallyPausedPressed;
                lVar7 = func_0x00f78af4();
                *(char *)(lVar7 + 0xf8) = (char)param_7;
                uVar16 = (undefined1)_UNK_033f8758;
                puVar5 = &stack0xffffffffffffff20;
                if ((int)param_7 == 0) {
                  uVar16 = 0;
                  puVar5 = &stack0xffffffffffffff20;
                }
                goto code_r0x03272d10;
              }
              /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar10 + 0xe8),param_7,0);
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
              unaff_x29 = (undefined8 ****)pppuStack_d0;
              unaff_x30 = puStack_c8;
            }
            else {
              /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(unaff_x19 + 0xe0),param_7,0);
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff60;
              lVar10 = unaff_x19;
              unaff_x19 = lVar7;
              unaff_x29 = (undefined8 ****)pppuStack_b0;
              unaff_x30 = puStack_a8;
            }
          }
          else {
            /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar7 + 0xd0),param_7,0);
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
            lVar10 = lVar7;
            unaff_x29 = (undefined8 ****)pppuStack_90;
            unaff_x30 = puStack_88;
          }
        }
        else {
          /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(unaff_x19 + 200),param_7,0);
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
          lVar10 = unaff_x19;
          unaff_x19 = lVar7;
          unaff_x29 = (undefined8 ****)pppuStack_70;
          unaff_x30 = puStack_68;
        }
      }
      else {
        /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar7 + 0xd8),param_7,0);
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        lVar10 = lVar7;
        unaff_x29 = (undefined8 ****)pppuStack_50;
        unaff_x30 = puStack_48;
      }
    }
    else {
      /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(unaff_x19 + 0xf0),param_7,0);
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      lVar10 = unaff_x19;
      unaff_x19 = param_5;
      unaff_x29 = (undefined8 ****)pppuStack_30;
      unaff_x30 = puStack_28;
    }
  }
  else {
    /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(param_5 + 0xc0),param_7,0);
    lVar10 = param_5;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(lVar10 + 0x30) == '\0') {
    Atlas_Gameplay_DebugVisualiser__CacheSceneObjects(lVar10,0);
    *(undefined1 *)(lVar10 + 0x30) = 1;
  }
  uVar6 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar10);
  *(undefined8 *)(lVar10 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar6,*(undefined8 *)(lVar10 + 0x38),1);
  uVar6 = Atlas_Gameplay_DebugVisualiser__CreateProxyGameObjectRoot(lVar10);
  if (*(long *)(lVar10 + 0xc0) != 0) {
    cVar1 = *(char *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if (cVar1 == '\0') {
      unaff_x20 = 0;
    }
    else {
      unaff_x20 = *(undefined8 *)(lVar10 + 0x78);
    }
    if (*(long *)(lVar10 + 0xd8) != 0) {
      cVar2 = *(char *)(*(long *)(lVar10 + 0xd8) + 0x10);
      if (cVar2 == '\0') {
        unaff_x21 = 0;
      }
      else {
        unaff_x21 = *(undefined8 *)(lVar10 + 0x88);
      }
      if (*(long *)(lVar10 + 200) != 0) {
        cVar3 = *(char *)(*(long *)(lVar10 + 200) + 0x10);
        if (cVar3 == '\0') {
          unaff_x22 = 0;
        }
        else {
          unaff_x22 = *(undefined8 *)(lVar10 + 0x90);
        }
        if (*(long *)(lVar10 + 0xd0) != 0) {
          if (*(char *)(*(long *)(lVar10 + 0xd0) + 0x10) == '\0') {
            unaff_x23 = 0;
            if (cVar1 == '\0') goto code_r0x0157cc50;
code_r0x0157cc30:
            unaff_x24 = *(undefined8 *)(lVar10 + 0x80);
            if (cVar2 != '\0') goto code_r0x0157cc38;
code_r0x0157cc58:
            uVar12 = 0;
            if (cVar3 == '\0') goto code_r0x0157cc60;
code_r0x0157cc40:
            uVar13 = *(undefined8 *)(lVar10 + 0x80);
          }
          else {
            unaff_x23 = *(undefined8 *)(lVar10 + 0x98);
            if (cVar1 != '\0') goto code_r0x0157cc30;
code_r0x0157cc50:
            unaff_x24 = 0;
            if (cVar2 == '\0') goto code_r0x0157cc58;
code_r0x0157cc38:
            uVar12 = *(undefined8 *)(lVar10 + 0x80);
            if (cVar3 != '\0') goto code_r0x0157cc40;
code_r0x0157cc60:
            uVar13 = 0;
          }
          if (*(long *)(lVar10 + 0xe0) != 0) {
            Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility
                      (uVar6,*(undefined8 *)(lVar10 + 0x38),
                       *(char *)(*(long *)(lVar10 + 0xe0) + 0x10) == '\0');
            Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                      (lVar10,*(undefined8 *)(lVar10 + 0x40),unaff_x20,unaff_x21,unaff_x22,unaff_x23
                      );
            if (*(long *)(lVar10 + 0xe8) != 0) {
              uVar6 = unaff_x20;
              uVar11 = unaff_x21;
              uVar8 = unaff_x22;
              if (*(char *)(*(long *)(lVar10 + 0xe8) + 0x10) != '\0') {
                uVar6 = unaff_x24;
                uVar11 = uVar12;
                uVar8 = uVar13;
              }
              Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                        (lVar10,*(undefined8 *)(lVar10 + 0x48),uVar6,uVar11,uVar8,unaff_x23);
              if (*(long *)(lVar10 + 0xf0) != 0) {
                if (*(char *)(*(long *)(lVar10 + 0xf0) + 0x10) == '\0') {
                  return;
                }
                *(undefined8 *)((long)register0x00000008 + -0x50) =
                     *(undefined8 *)((long)register0x00000008 + -0x50);
                *(undefined8 *)((long)register0x00000008 + -0x48) =
                     *(undefined8 *)((long)register0x00000008 + -0x48);
                *(undefined8 *)((long)register0x00000008 + -0x40) =
                     *(undefined8 *)((long)register0x00000008 + -0x40);
                *(undefined8 *)((long)register0x00000008 + -0x38) =
                     *(undefined8 *)((long)register0x00000008 + -0x38);
                *(undefined8 *)((long)register0x00000008 + -0x30) =
                     *(undefined8 *)((long)register0x00000008 + -0x30);
                *(undefined8 *)((long)register0x00000008 + -0x28) =
                     *(undefined8 *)((long)register0x00000008 + -0x28);
                *(undefined8 *)((long)register0x00000008 + -0x20) =
                     *(undefined8 *)((long)register0x00000008 + -0x20);
                *(undefined8 *)((long)register0x00000008 + -0x18) =
                     *(undefined8 *)((long)register0x00000008 + -0x18);
                *(undefined8 *)((long)register0x00000008 + -0x10) =
                     *(undefined8 *)((long)register0x00000008 + -0x10);
                *(undefined8 *)((long)register0x00000008 + -8) =
                     *(undefined8 *)((long)register0x00000008 + -8);
                uVar9 = 0x14;
                if ((bRam0000000003eb5096 & 1) == 0) {
                  func_0x00f78a20(0x3d3d070);
                  func_0x00f78a20(0x3d3d068);
                  func_0x00f78a20(0x3d1e110);
                  func_0x00f78a20(0x3d23298);
                  func_0x00f78a20(0x3d76358);
                  bRam0000000003eb5096 = 1;
                }
                uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
                /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar6,0x14,uRam0000000003d3d068);
                *(undefined8 *)(lVar10 + 0x60) = uVar6;
                do {
                  uVar11 = *(undefined8 *)(lVar10 + 0xa0);
                  uVar12 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
                  /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar12,uVar11,0);
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                  uVar6 = uVar12;
                  uVar13 = Atlas_Gameplay_DebugVisualiser__CreateUnitSphere
                                     (lVar10,/*STR('WaypointSphere')*/ uRam0000000003d76358,uVar12);
                  if (*(long *)(lVar10 + 0x60) == 0) {
                    auVar21 = func_0x00f78af4(0,uVar13);
                    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_d15;
                    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_d14;
                    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_d13;
                    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_d12;
                    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d11;
                    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d10;
                    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d9;
                    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d8;
                    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar11;
                    *(undefined8 *)((long)register0x00000008 + -0x78) = uVar12;
                    *(long *)((long)register0x00000008 + -0x70) = lVar10;
                    *(ulong *)((long)register0x00000008 + -0x68) = uVar9;
                    *(undefined1 **)((long)register0x00000008 + -0x60) =
                         (undefined1 *)((long)register0x00000008 + -0x10);
                    *(code **)((long)register0x00000008 + -0x58) =
                         Atlas_Gameplay_DebugVisualiser__CreateUnitSphere;
                    uVar12 = *(undefined8 *)(auVar21._0_8_ + 0x70);
                    uVar17 = param_2;
                    uVar19 = param_3;
                    /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
                    uVar18 = uVar17;
                    uVar20 = uVar19;
                    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
                    *(undefined4 *)((long)register0x00000008 + -0xcc) = uVar18;
                    *(undefined4 *)((long)register0x00000008 + -200) = uVar20;
                    *(uint *)((long)register0x00000008 + -0xd0) =
                         CONCAT13(extraout_var_04,
                                  CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_01))
                                 );
                    Atlas_Gameplay_DebugVisualiser__CreateMeshProxy
                              (extraout_b0,param_2,param_3,
                               CONCAT13(extraout_var_03,
                                        CONCAT12(extraout_var_01,
                                                 CONCAT11(extraout_var,extraout_b0_00))),uVar17,
                               uVar19,param_4,auVar21._0_8_,uVar12,auVar21._8_8_,uVar6);
                    return;
                  }
                  /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$Add*/ func_0x02519f88(*(long *)(lVar10 + 0x60),uVar13,uVar12,uRam0000000003d3d070);
                  uVar4 = (int)uVar9 - 1;
                  uVar9 = (ulong)uVar4;
                } while (uVar4 != 0);
                return;
              }
            }
          }
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x68) = lVar10;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = Atlas_Gameplay_DebugVisualiser__DeInit;
  ppppuVar14 = (undefined8 ****)((long)register0x00000008 + -0x60);
  unaff_x20 = 0x3eb5000;
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(lVar7 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar7 + 0xb0),lVar7,0);
    *(undefined4 *)(lVar7 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
  }
  uVar6 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar7);
  *(undefined8 *)(lVar7 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar6,*(undefined8 *)(lVar7 + 0x38),1);
  if (*(char *)(lVar7 + 0xf8) == '\0') {
    if (*(char *)(lVar7 + 0xf9) != '\0') {
      *(undefined1 *)(lVar7 + 0xf9) = 0;
    }
    lVar10 = *(long *)(lVar7 + 0x18);
    uVar12 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
    Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
              (uVar12,lVar7,uRam0000000003d54b70,0);
    uVar6 = 0;
    if (lVar10 != 0) {
      Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar10,uVar12,0);
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined8 *)(lVar7 + 0x80) = 0;
      uVar6 = *(undefined8 *)(lVar7 + 0x50);
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar6,0);
      *(undefined8 *)(lVar7 + 0x50) = 0;
      if (*(long *)(lVar7 + 0x28) != 0) {
        *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        return;
      }
    }
    lVar10 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
    *(long *)((long)register0x00000008 + -0xa8) = lVar7;
    *(undefined8 *****)((long)register0x00000008 + -0xa0) = ppppuVar14;
    *(code **)((long)register0x00000008 + -0x98) =
         Atlas_Gameplay_DebugVisualiser__DeInitDebugMenuBindings;
    if (*(long *)(lVar10 + 0xb0) != 0) {
      /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar10 + 0xb0),lVar10,0);
      *(undefined4 *)(lVar10 + 0xb8) = 0xffffffff;
      *(undefined8 *)(lVar10 + 0xb0) = 0;
    }
    return;
  }
  uVar16 = 0;
  puVar15 = (undefined *)0x157cdc4;
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x90);
  lVar10 = lVar7;
code_r0x03272d10:
  *(undefined8 *)(puVar5 + -0x30) = unaff_d9;
  *(undefined8 *)(puVar5 + -0x28) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
  *(long *)(puVar5 + -0x18) = lVar10;
  *(undefined8 *****)(puVar5 + -0x10) = ppppuVar14;
  *(undefined **)(puVar5 + -8) = puVar15;
  if (pcRam0000000003ec1660 == (code *)0x0) {
    pcRam0000000003ec1660 =
         (code *)func_0x00f789d4("UnityEngine.Time::set_timeScale(System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03272d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec1660)(uVar16);
  return;
}



// ============================================================
// RVA: 0x157ffbc | Atlas.Gameplay.DebugVisualiser.OnShowBattleAIWaypoints
// ============================================================

/* WARNING: Possible PIC construction at 0x0157cdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157cdc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_DebugVisualiser__OnShowBattleAIWaypoints
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x19;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar12;
  undefined8 unaff_x25;
  undefined8 uVar13;
  undefined8 unaff_x26;
  undefined8 ****unaff_x29;
  undefined8 ****ppppuVar14;
  undefined *puVar15;
  undefined *unaff_x30;
  undefined1 uVar16;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar21 [16];
  undefined8 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_5 + 0xf0) == 0) {
    lVar7 = func_0x00f78af4();
    puStack_28 = &Atlas_Gameplay_DebugVisualiser__OnShowTriggersPressed;
    pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
    if (*(long *)(lVar7 + 0xd8) == 0) {
      param_5 = func_0x00f78af4();
      puStack_48 = &Atlas_Gameplay_DebugVisualiser__OnShowRespawnersPressed;
      pppuStack_50 = &pppuStack_30;
      if (*(long *)(param_5 + 200) == 0) {
        lVar7 = func_0x00f78af4();
        puStack_68 = &Atlas_Gameplay_DebugVisualiser__OnShowReplicatorsPressed;
        pppuStack_70 = &pppuStack_50;
        if (*(long *)(lVar7 + 0xd0) == 0) {
          param_5 = func_0x00f78af4();
          puStack_88 = &Atlas_Gameplay_DebugVisualiser__OnShowScenePressed;
          pppuStack_90 = &pppuStack_70;
          if (*(long *)(param_5 + 0xe0) == 0) {
            lVar10 = func_0x00f78af4();
            puStack_a8 = &Atlas_Gameplay_DebugVisualiser__OnHighlightDynamicPressed;
            ppppuVar14 = &pppuStack_b0;
            pppuStack_b0 = &pppuStack_90;
            if (*(long *)(lVar10 + 0xe8) == 0) {
              puVar15 = &Atlas_Gameplay_DebugVisualiser__OnPracticallyPausedPressed;
              lVar7 = func_0x00f78af4();
              *(char *)(lVar7 + 0xf8) = (char)param_7;
              uVar16 = (undefined1)_UNK_033f8758;
              puVar5 = &stack0xffffffffffffff40;
              if ((int)param_7 == 0) {
                uVar16 = 0;
                puVar5 = &stack0xffffffffffffff40;
              }
              goto code_r0x03272d10;
            }
            /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar10 + 0xe8),param_7,0);
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff60;
            unaff_x29 = (undefined8 ****)pppuStack_b0;
            unaff_x30 = puStack_a8;
          }
          else {
            /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(param_5 + 0xe0),param_7,0);
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
            lVar10 = param_5;
            param_5 = lVar7;
            unaff_x29 = (undefined8 ****)pppuStack_90;
            unaff_x30 = puStack_88;
          }
        }
        else {
          /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar7 + 0xd0),param_7,0);
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
          lVar10 = lVar7;
          unaff_x29 = (undefined8 ****)pppuStack_70;
          unaff_x30 = puStack_68;
        }
      }
      else {
        /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(param_5 + 200),param_7,0);
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        lVar10 = param_5;
        param_5 = lVar7;
        unaff_x29 = (undefined8 ****)pppuStack_50;
        unaff_x30 = puStack_48;
      }
    }
    else {
      /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar7 + 0xd8),param_7,0);
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      lVar10 = lVar7;
      unaff_x29 = (undefined8 ****)pppuStack_30;
      unaff_x30 = puStack_28;
    }
  }
  else {
    /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(param_5 + 0xf0),param_7,0);
    lVar10 = param_5;
    param_5 = unaff_x19;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = param_5;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(lVar10 + 0x30) == '\0') {
    Atlas_Gameplay_DebugVisualiser__CacheSceneObjects(lVar10,0);
    *(undefined1 *)(lVar10 + 0x30) = 1;
  }
  uVar6 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar10);
  *(undefined8 *)(lVar10 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar6,*(undefined8 *)(lVar10 + 0x38),1);
  uVar6 = Atlas_Gameplay_DebugVisualiser__CreateProxyGameObjectRoot(lVar10);
  if (*(long *)(lVar10 + 0xc0) != 0) {
    cVar1 = *(char *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if (cVar1 == '\0') {
      unaff_x20 = 0;
    }
    else {
      unaff_x20 = *(undefined8 *)(lVar10 + 0x78);
    }
    if (*(long *)(lVar10 + 0xd8) != 0) {
      cVar2 = *(char *)(*(long *)(lVar10 + 0xd8) + 0x10);
      if (cVar2 == '\0') {
        unaff_x21 = 0;
      }
      else {
        unaff_x21 = *(undefined8 *)(lVar10 + 0x88);
      }
      if (*(long *)(lVar10 + 200) != 0) {
        cVar3 = *(char *)(*(long *)(lVar10 + 200) + 0x10);
        if (cVar3 == '\0') {
          unaff_x22 = 0;
        }
        else {
          unaff_x22 = *(undefined8 *)(lVar10 + 0x90);
        }
        if (*(long *)(lVar10 + 0xd0) != 0) {
          if (*(char *)(*(long *)(lVar10 + 0xd0) + 0x10) == '\0') {
            unaff_x23 = 0;
            if (cVar1 == '\0') goto code_r0x0157cc50;
code_r0x0157cc30:
            unaff_x24 = *(undefined8 *)(lVar10 + 0x80);
            if (cVar2 != '\0') goto code_r0x0157cc38;
code_r0x0157cc58:
            uVar12 = 0;
            if (cVar3 == '\0') goto code_r0x0157cc60;
code_r0x0157cc40:
            uVar13 = *(undefined8 *)(lVar10 + 0x80);
          }
          else {
            unaff_x23 = *(undefined8 *)(lVar10 + 0x98);
            if (cVar1 != '\0') goto code_r0x0157cc30;
code_r0x0157cc50:
            unaff_x24 = 0;
            if (cVar2 == '\0') goto code_r0x0157cc58;
code_r0x0157cc38:
            uVar12 = *(undefined8 *)(lVar10 + 0x80);
            if (cVar3 != '\0') goto code_r0x0157cc40;
code_r0x0157cc60:
            uVar13 = 0;
          }
          if (*(long *)(lVar10 + 0xe0) != 0) {
            Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility
                      (uVar6,*(undefined8 *)(lVar10 + 0x38),
                       *(char *)(*(long *)(lVar10 + 0xe0) + 0x10) == '\0');
            Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                      (lVar10,*(undefined8 *)(lVar10 + 0x40),unaff_x20,unaff_x21,unaff_x22,unaff_x23
                      );
            if (*(long *)(lVar10 + 0xe8) != 0) {
              uVar6 = unaff_x20;
              uVar11 = unaff_x21;
              uVar8 = unaff_x22;
              if (*(char *)(*(long *)(lVar10 + 0xe8) + 0x10) != '\0') {
                uVar6 = unaff_x24;
                uVar11 = uVar12;
                uVar8 = uVar13;
              }
              Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                        (lVar10,*(undefined8 *)(lVar10 + 0x48),uVar6,uVar11,uVar8,unaff_x23);
              if (*(long *)(lVar10 + 0xf0) != 0) {
                if (*(char *)(*(long *)(lVar10 + 0xf0) + 0x10) == '\0') {
                  return;
                }
                *(undefined8 *)((long)register0x00000008 + -0x50) =
                     *(undefined8 *)((long)register0x00000008 + -0x50);
                *(undefined8 *)((long)register0x00000008 + -0x48) =
                     *(undefined8 *)((long)register0x00000008 + -0x48);
                *(undefined8 *)((long)register0x00000008 + -0x40) =
                     *(undefined8 *)((long)register0x00000008 + -0x40);
                *(undefined8 *)((long)register0x00000008 + -0x38) =
                     *(undefined8 *)((long)register0x00000008 + -0x38);
                *(undefined8 *)((long)register0x00000008 + -0x30) =
                     *(undefined8 *)((long)register0x00000008 + -0x30);
                *(undefined8 *)((long)register0x00000008 + -0x28) =
                     *(undefined8 *)((long)register0x00000008 + -0x28);
                *(undefined8 *)((long)register0x00000008 + -0x20) =
                     *(undefined8 *)((long)register0x00000008 + -0x20);
                *(undefined8 *)((long)register0x00000008 + -0x18) =
                     *(undefined8 *)((long)register0x00000008 + -0x18);
                *(undefined8 *)((long)register0x00000008 + -0x10) =
                     *(undefined8 *)((long)register0x00000008 + -0x10);
                *(undefined8 *)((long)register0x00000008 + -8) =
                     *(undefined8 *)((long)register0x00000008 + -8);
                uVar9 = 0x14;
                if ((bRam0000000003eb5096 & 1) == 0) {
                  func_0x00f78a20(0x3d3d070);
                  func_0x00f78a20(0x3d3d068);
                  func_0x00f78a20(0x3d1e110);
                  func_0x00f78a20(0x3d23298);
                  func_0x00f78a20(0x3d76358);
                  bRam0000000003eb5096 = 1;
                }
                uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
                /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar6,0x14,uRam0000000003d3d068);
                *(undefined8 *)(lVar10 + 0x60) = uVar6;
                do {
                  uVar11 = *(undefined8 *)(lVar10 + 0xa0);
                  uVar12 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
                  /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar12,uVar11,0);
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                  uVar6 = uVar12;
                  uVar13 = Atlas_Gameplay_DebugVisualiser__CreateUnitSphere
                                     (lVar10,/*STR('WaypointSphere')*/ uRam0000000003d76358,uVar12);
                  if (*(long *)(lVar10 + 0x60) == 0) {
                    auVar21 = func_0x00f78af4(0,uVar13);
                    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_d15;
                    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_d14;
                    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_d13;
                    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_d12;
                    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d11;
                    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d10;
                    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d9;
                    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d8;
                    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar11;
                    *(undefined8 *)((long)register0x00000008 + -0x78) = uVar12;
                    *(long *)((long)register0x00000008 + -0x70) = lVar10;
                    *(ulong *)((long)register0x00000008 + -0x68) = uVar9;
                    *(undefined1 **)((long)register0x00000008 + -0x60) =
                         (undefined1 *)((long)register0x00000008 + -0x10);
                    *(code **)((long)register0x00000008 + -0x58) =
                         Atlas_Gameplay_DebugVisualiser__CreateUnitSphere;
                    uVar12 = *(undefined8 *)(auVar21._0_8_ + 0x70);
                    uVar17 = param_2;
                    uVar19 = param_3;
                    /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
                    uVar18 = uVar17;
                    uVar20 = uVar19;
                    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
                    *(undefined4 *)((long)register0x00000008 + -0xcc) = uVar18;
                    *(undefined4 *)((long)register0x00000008 + -200) = uVar20;
                    *(uint *)((long)register0x00000008 + -0xd0) =
                         CONCAT13(extraout_var_04,
                                  CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_01))
                                 );
                    Atlas_Gameplay_DebugVisualiser__CreateMeshProxy
                              (extraout_b0,param_2,param_3,
                               CONCAT13(extraout_var_03,
                                        CONCAT12(extraout_var_01,
                                                 CONCAT11(extraout_var,extraout_b0_00))),uVar17,
                               uVar19,param_4,auVar21._0_8_,uVar12,auVar21._8_8_,uVar6);
                    return;
                  }
                  /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$Add*/ func_0x02519f88(*(long *)(lVar10 + 0x60),uVar13,uVar12,uRam0000000003d3d070);
                  uVar4 = (int)uVar9 - 1;
                  uVar9 = (ulong)uVar4;
                } while (uVar4 != 0);
                return;
              }
            }
          }
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x68) = lVar10;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = Atlas_Gameplay_DebugVisualiser__DeInit;
  ppppuVar14 = (undefined8 ****)((long)register0x00000008 + -0x60);
  unaff_x20 = 0x3eb5000;
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(lVar7 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar7 + 0xb0),lVar7,0);
    *(undefined4 *)(lVar7 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
  }
  uVar6 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar7);
  *(undefined8 *)(lVar7 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar6,*(undefined8 *)(lVar7 + 0x38),1);
  if (*(char *)(lVar7 + 0xf8) == '\0') {
    if (*(char *)(lVar7 + 0xf9) != '\0') {
      *(undefined1 *)(lVar7 + 0xf9) = 0;
    }
    lVar10 = *(long *)(lVar7 + 0x18);
    uVar12 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
    Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
              (uVar12,lVar7,uRam0000000003d54b70,0);
    uVar6 = 0;
    if (lVar10 != 0) {
      Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar10,uVar12,0);
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined8 *)(lVar7 + 0x80) = 0;
      uVar6 = *(undefined8 *)(lVar7 + 0x50);
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar6,0);
      *(undefined8 *)(lVar7 + 0x50) = 0;
      if (*(long *)(lVar7 + 0x28) != 0) {
        *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        return;
      }
    }
    lVar10 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
    *(long *)((long)register0x00000008 + -0xa8) = lVar7;
    *(undefined8 *****)((long)register0x00000008 + -0xa0) = ppppuVar14;
    *(code **)((long)register0x00000008 + -0x98) =
         Atlas_Gameplay_DebugVisualiser__DeInitDebugMenuBindings;
    if (*(long *)(lVar10 + 0xb0) != 0) {
      /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar10 + 0xb0),lVar10,0);
      *(undefined4 *)(lVar10 + 0xb8) = 0xffffffff;
      *(undefined8 *)(lVar10 + 0xb0) = 0;
    }
    return;
  }
  uVar16 = 0;
  puVar15 = (undefined *)0x157cdc4;
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x90);
  lVar10 = lVar7;
code_r0x03272d10:
  *(undefined8 *)(puVar5 + -0x30) = unaff_d9;
  *(undefined8 *)(puVar5 + -0x28) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
  *(long *)(puVar5 + -0x18) = lVar10;
  *(undefined8 *****)(puVar5 + -0x10) = ppppuVar14;
  *(undefined **)(puVar5 + -8) = puVar15;
  if (pcRam0000000003ec1660 == (code *)0x0) {
    pcRam0000000003ec1660 =
         (code *)func_0x00f789d4("UnityEngine.Time::set_timeScale(System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03272d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec1660)(uVar16);
  return;
}



// ============================================================
// RVA: 0x157fff4 | Atlas.Gameplay.DebugVisualiser.OnShowTriggersPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x0157cdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157cdc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_DebugVisualiser__OnShowTriggersPressed
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x19;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar12;
  undefined8 unaff_x25;
  undefined8 uVar13;
  undefined8 unaff_x26;
  undefined8 ****unaff_x29;
  undefined8 ****ppppuVar14;
  undefined *puVar15;
  undefined *unaff_x30;
  undefined1 uVar16;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar21 [16];
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_5 + 0xd8) == 0) {
    unaff_x19 = func_0x00f78af4();
    puStack_28 = &Atlas_Gameplay_DebugVisualiser__OnShowRespawnersPressed;
    pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
    if (*(long *)(unaff_x19 + 200) == 0) {
      lVar7 = func_0x00f78af4();
      puStack_48 = &Atlas_Gameplay_DebugVisualiser__OnShowReplicatorsPressed;
      pppuStack_50 = &pppuStack_30;
      if (*(long *)(lVar7 + 0xd0) == 0) {
        unaff_x19 = func_0x00f78af4();
        puStack_68 = &Atlas_Gameplay_DebugVisualiser__OnShowScenePressed;
        pppuStack_70 = &pppuStack_50;
        if (*(long *)(unaff_x19 + 0xe0) == 0) {
          lVar10 = func_0x00f78af4();
          puStack_88 = &Atlas_Gameplay_DebugVisualiser__OnHighlightDynamicPressed;
          ppppuVar14 = &pppuStack_90;
          pppuStack_90 = &pppuStack_70;
          if (*(long *)(lVar10 + 0xe8) == 0) {
            puVar15 = &Atlas_Gameplay_DebugVisualiser__OnPracticallyPausedPressed;
            lVar7 = func_0x00f78af4();
            *(char *)(lVar7 + 0xf8) = (char)param_7;
            uVar16 = (undefined1)_UNK_033f8758;
            puVar5 = &stack0xffffffffffffff60;
            if ((int)param_7 == 0) {
              uVar16 = 0;
              puVar5 = &stack0xffffffffffffff60;
            }
            goto code_r0x03272d10;
          }
          /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar10 + 0xe8),param_7,0);
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
          unaff_x29 = (undefined8 ****)pppuStack_90;
          unaff_x30 = puStack_88;
        }
        else {
          /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(unaff_x19 + 0xe0),param_7,0);
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
          lVar10 = unaff_x19;
          unaff_x19 = lVar7;
          unaff_x29 = (undefined8 ****)pppuStack_70;
          unaff_x30 = puStack_68;
        }
      }
      else {
        /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar7 + 0xd0),param_7,0);
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        lVar10 = lVar7;
        unaff_x29 = (undefined8 ****)pppuStack_50;
        unaff_x30 = puStack_48;
      }
    }
    else {
      /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(unaff_x19 + 200),param_7,0);
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      lVar10 = unaff_x19;
      unaff_x19 = param_5;
      unaff_x29 = (undefined8 ****)pppuStack_30;
      unaff_x30 = puStack_28;
    }
  }
  else {
    /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(param_5 + 0xd8),param_7,0);
    lVar10 = param_5;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(lVar10 + 0x30) == '\0') {
    Atlas_Gameplay_DebugVisualiser__CacheSceneObjects(lVar10,0);
    *(undefined1 *)(lVar10 + 0x30) = 1;
  }
  uVar6 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar10);
  *(undefined8 *)(lVar10 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar6,*(undefined8 *)(lVar10 + 0x38),1);
  uVar6 = Atlas_Gameplay_DebugVisualiser__CreateProxyGameObjectRoot(lVar10);
  if (*(long *)(lVar10 + 0xc0) != 0) {
    cVar1 = *(char *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if (cVar1 == '\0') {
      unaff_x20 = 0;
    }
    else {
      unaff_x20 = *(undefined8 *)(lVar10 + 0x78);
    }
    if (*(long *)(lVar10 + 0xd8) != 0) {
      cVar2 = *(char *)(*(long *)(lVar10 + 0xd8) + 0x10);
      if (cVar2 == '\0') {
        unaff_x21 = 0;
      }
      else {
        unaff_x21 = *(undefined8 *)(lVar10 + 0x88);
      }
      if (*(long *)(lVar10 + 200) != 0) {
        cVar3 = *(char *)(*(long *)(lVar10 + 200) + 0x10);
        if (cVar3 == '\0') {
          unaff_x22 = 0;
        }
        else {
          unaff_x22 = *(undefined8 *)(lVar10 + 0x90);
        }
        if (*(long *)(lVar10 + 0xd0) != 0) {
          if (*(char *)(*(long *)(lVar10 + 0xd0) + 0x10) == '\0') {
            unaff_x23 = 0;
            if (cVar1 == '\0') goto code_r0x0157cc50;
code_r0x0157cc30:
            unaff_x24 = *(undefined8 *)(lVar10 + 0x80);
            if (cVar2 != '\0') goto code_r0x0157cc38;
code_r0x0157cc58:
            uVar12 = 0;
            if (cVar3 == '\0') goto code_r0x0157cc60;
code_r0x0157cc40:
            uVar13 = *(undefined8 *)(lVar10 + 0x80);
          }
          else {
            unaff_x23 = *(undefined8 *)(lVar10 + 0x98);
            if (cVar1 != '\0') goto code_r0x0157cc30;
code_r0x0157cc50:
            unaff_x24 = 0;
            if (cVar2 == '\0') goto code_r0x0157cc58;
code_r0x0157cc38:
            uVar12 = *(undefined8 *)(lVar10 + 0x80);
            if (cVar3 != '\0') goto code_r0x0157cc40;
code_r0x0157cc60:
            uVar13 = 0;
          }
          if (*(long *)(lVar10 + 0xe0) != 0) {
            Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility
                      (uVar6,*(undefined8 *)(lVar10 + 0x38),
                       *(char *)(*(long *)(lVar10 + 0xe0) + 0x10) == '\0');
            Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                      (lVar10,*(undefined8 *)(lVar10 + 0x40),unaff_x20,unaff_x21,unaff_x22,unaff_x23
                      );
            if (*(long *)(lVar10 + 0xe8) != 0) {
              uVar6 = unaff_x20;
              uVar11 = unaff_x21;
              uVar8 = unaff_x22;
              if (*(char *)(*(long *)(lVar10 + 0xe8) + 0x10) != '\0') {
                uVar6 = unaff_x24;
                uVar11 = uVar12;
                uVar8 = uVar13;
              }
              Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                        (lVar10,*(undefined8 *)(lVar10 + 0x48),uVar6,uVar11,uVar8,unaff_x23);
              if (*(long *)(lVar10 + 0xf0) != 0) {
                if (*(char *)(*(long *)(lVar10 + 0xf0) + 0x10) == '\0') {
                  return;
                }
                *(undefined8 *)((long)register0x00000008 + -0x50) =
                     *(undefined8 *)((long)register0x00000008 + -0x50);
                *(undefined8 *)((long)register0x00000008 + -0x48) =
                     *(undefined8 *)((long)register0x00000008 + -0x48);
                *(undefined8 *)((long)register0x00000008 + -0x40) =
                     *(undefined8 *)((long)register0x00000008 + -0x40);
                *(undefined8 *)((long)register0x00000008 + -0x38) =
                     *(undefined8 *)((long)register0x00000008 + -0x38);
                *(undefined8 *)((long)register0x00000008 + -0x30) =
                     *(undefined8 *)((long)register0x00000008 + -0x30);
                *(undefined8 *)((long)register0x00000008 + -0x28) =
                     *(undefined8 *)((long)register0x00000008 + -0x28);
                *(undefined8 *)((long)register0x00000008 + -0x20) =
                     *(undefined8 *)((long)register0x00000008 + -0x20);
                *(undefined8 *)((long)register0x00000008 + -0x18) =
                     *(undefined8 *)((long)register0x00000008 + -0x18);
                *(undefined8 *)((long)register0x00000008 + -0x10) =
                     *(undefined8 *)((long)register0x00000008 + -0x10);
                *(undefined8 *)((long)register0x00000008 + -8) =
                     *(undefined8 *)((long)register0x00000008 + -8);
                uVar9 = 0x14;
                if ((bRam0000000003eb5096 & 1) == 0) {
                  func_0x00f78a20(0x3d3d070);
                  func_0x00f78a20(0x3d3d068);
                  func_0x00f78a20(0x3d1e110);
                  func_0x00f78a20(0x3d23298);
                  func_0x00f78a20(0x3d76358);
                  bRam0000000003eb5096 = 1;
                }
                uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
                /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar6,0x14,uRam0000000003d3d068);
                *(undefined8 *)(lVar10 + 0x60) = uVar6;
                do {
                  uVar11 = *(undefined8 *)(lVar10 + 0xa0);
                  uVar12 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
                  /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar12,uVar11,0);
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                  uVar6 = uVar12;
                  uVar13 = Atlas_Gameplay_DebugVisualiser__CreateUnitSphere
                                     (lVar10,/*STR('WaypointSphere')*/ uRam0000000003d76358,uVar12);
                  if (*(long *)(lVar10 + 0x60) == 0) {
                    auVar21 = func_0x00f78af4(0,uVar13);
                    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_d15;
                    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_d14;
                    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_d13;
                    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_d12;
                    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d11;
                    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d10;
                    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d9;
                    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d8;
                    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar11;
                    *(undefined8 *)((long)register0x00000008 + -0x78) = uVar12;
                    *(long *)((long)register0x00000008 + -0x70) = lVar10;
                    *(ulong *)((long)register0x00000008 + -0x68) = uVar9;
                    *(undefined1 **)((long)register0x00000008 + -0x60) =
                         (undefined1 *)((long)register0x00000008 + -0x10);
                    *(code **)((long)register0x00000008 + -0x58) =
                         Atlas_Gameplay_DebugVisualiser__CreateUnitSphere;
                    uVar12 = *(undefined8 *)(auVar21._0_8_ + 0x70);
                    uVar17 = param_2;
                    uVar19 = param_3;
                    /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
                    uVar18 = uVar17;
                    uVar20 = uVar19;
                    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
                    *(undefined4 *)((long)register0x00000008 + -0xcc) = uVar18;
                    *(undefined4 *)((long)register0x00000008 + -200) = uVar20;
                    *(uint *)((long)register0x00000008 + -0xd0) =
                         CONCAT13(extraout_var_04,
                                  CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_01))
                                 );
                    Atlas_Gameplay_DebugVisualiser__CreateMeshProxy
                              (extraout_b0,param_2,param_3,
                               CONCAT13(extraout_var_03,
                                        CONCAT12(extraout_var_01,
                                                 CONCAT11(extraout_var,extraout_b0_00))),uVar17,
                               uVar19,param_4,auVar21._0_8_,uVar12,auVar21._8_8_,uVar6);
                    return;
                  }
                  /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$Add*/ func_0x02519f88(*(long *)(lVar10 + 0x60),uVar13,uVar12,uRam0000000003d3d070);
                  uVar4 = (int)uVar9 - 1;
                  uVar9 = (ulong)uVar4;
                } while (uVar4 != 0);
                return;
              }
            }
          }
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x68) = lVar10;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = Atlas_Gameplay_DebugVisualiser__DeInit;
  ppppuVar14 = (undefined8 ****)((long)register0x00000008 + -0x60);
  unaff_x20 = 0x3eb5000;
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(lVar7 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar7 + 0xb0),lVar7,0);
    *(undefined4 *)(lVar7 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
  }
  uVar6 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar7);
  *(undefined8 *)(lVar7 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar6,*(undefined8 *)(lVar7 + 0x38),1);
  if (*(char *)(lVar7 + 0xf8) == '\0') {
    if (*(char *)(lVar7 + 0xf9) != '\0') {
      *(undefined1 *)(lVar7 + 0xf9) = 0;
    }
    lVar10 = *(long *)(lVar7 + 0x18);
    uVar12 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
    Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
              (uVar12,lVar7,uRam0000000003d54b70,0);
    uVar6 = 0;
    if (lVar10 != 0) {
      Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar10,uVar12,0);
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined8 *)(lVar7 + 0x80) = 0;
      uVar6 = *(undefined8 *)(lVar7 + 0x50);
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar6,0);
      *(undefined8 *)(lVar7 + 0x50) = 0;
      if (*(long *)(lVar7 + 0x28) != 0) {
        *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        return;
      }
    }
    lVar10 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
    *(long *)((long)register0x00000008 + -0xa8) = lVar7;
    *(undefined8 *****)((long)register0x00000008 + -0xa0) = ppppuVar14;
    *(code **)((long)register0x00000008 + -0x98) =
         Atlas_Gameplay_DebugVisualiser__DeInitDebugMenuBindings;
    if (*(long *)(lVar10 + 0xb0) != 0) {
      /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar10 + 0xb0),lVar10,0);
      *(undefined4 *)(lVar10 + 0xb8) = 0xffffffff;
      *(undefined8 *)(lVar10 + 0xb0) = 0;
    }
    return;
  }
  uVar16 = 0;
  puVar15 = (undefined *)0x157cdc4;
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x90);
  lVar10 = lVar7;
code_r0x03272d10:
  *(undefined8 *)(puVar5 + -0x30) = unaff_d9;
  *(undefined8 *)(puVar5 + -0x28) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
  *(long *)(puVar5 + -0x18) = lVar10;
  *(undefined8 *****)(puVar5 + -0x10) = ppppuVar14;
  *(undefined **)(puVar5 + -8) = puVar15;
  if (pcRam0000000003ec1660 == (code *)0x0) {
    pcRam0000000003ec1660 =
         (code *)func_0x00f789d4("UnityEngine.Time::set_timeScale(System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03272d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec1660)(uVar16);
  return;
}



// ============================================================
// RVA: 0x158002c | Atlas.Gameplay.DebugVisualiser.OnShowRespawnersPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x0157cdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157cdc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_DebugVisualiser__OnShowRespawnersPressed
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x19;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar12;
  undefined8 unaff_x25;
  undefined8 uVar13;
  undefined8 unaff_x26;
  undefined8 ****unaff_x29;
  undefined8 ****ppppuVar14;
  undefined *puVar15;
  undefined *unaff_x30;
  undefined1 uVar16;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar21 [16];
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_5 + 200) == 0) {
    lVar7 = func_0x00f78af4();
    puStack_28 = &Atlas_Gameplay_DebugVisualiser__OnShowReplicatorsPressed;
    pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
    if (*(long *)(lVar7 + 0xd0) == 0) {
      param_5 = func_0x00f78af4();
      puStack_48 = &Atlas_Gameplay_DebugVisualiser__OnShowScenePressed;
      pppuStack_50 = &pppuStack_30;
      if (*(long *)(param_5 + 0xe0) == 0) {
        lVar10 = func_0x00f78af4();
        puStack_68 = &Atlas_Gameplay_DebugVisualiser__OnHighlightDynamicPressed;
        ppppuVar14 = &pppuStack_70;
        pppuStack_70 = &pppuStack_50;
        if (*(long *)(lVar10 + 0xe8) == 0) {
          puVar15 = &Atlas_Gameplay_DebugVisualiser__OnPracticallyPausedPressed;
          lVar7 = func_0x00f78af4();
          *(char *)(lVar7 + 0xf8) = (char)param_7;
          uVar16 = (undefined1)_UNK_033f8758;
          puVar5 = &stack0xffffffffffffff80;
          if ((int)param_7 == 0) {
            uVar16 = 0;
            puVar5 = &stack0xffffffffffffff80;
          }
          goto code_r0x03272d10;
        }
        /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar10 + 0xe8),param_7,0);
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        unaff_x29 = (undefined8 ****)pppuStack_70;
        unaff_x30 = puStack_68;
      }
      else {
        /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(param_5 + 0xe0),param_7,0);
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        lVar10 = param_5;
        param_5 = lVar7;
        unaff_x29 = (undefined8 ****)pppuStack_50;
        unaff_x30 = puStack_48;
      }
    }
    else {
      /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar7 + 0xd0),param_7,0);
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      lVar10 = lVar7;
      unaff_x29 = (undefined8 ****)pppuStack_30;
      unaff_x30 = puStack_28;
    }
  }
  else {
    /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(param_5 + 200),param_7,0);
    lVar10 = param_5;
    param_5 = unaff_x19;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = param_5;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(lVar10 + 0x30) == '\0') {
    Atlas_Gameplay_DebugVisualiser__CacheSceneObjects(lVar10,0);
    *(undefined1 *)(lVar10 + 0x30) = 1;
  }
  uVar6 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar10);
  *(undefined8 *)(lVar10 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar6,*(undefined8 *)(lVar10 + 0x38),1);
  uVar6 = Atlas_Gameplay_DebugVisualiser__CreateProxyGameObjectRoot(lVar10);
  if (*(long *)(lVar10 + 0xc0) != 0) {
    cVar1 = *(char *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if (cVar1 == '\0') {
      unaff_x20 = 0;
    }
    else {
      unaff_x20 = *(undefined8 *)(lVar10 + 0x78);
    }
    if (*(long *)(lVar10 + 0xd8) != 0) {
      cVar2 = *(char *)(*(long *)(lVar10 + 0xd8) + 0x10);
      if (cVar2 == '\0') {
        unaff_x21 = 0;
      }
      else {
        unaff_x21 = *(undefined8 *)(lVar10 + 0x88);
      }
      if (*(long *)(lVar10 + 200) != 0) {
        cVar3 = *(char *)(*(long *)(lVar10 + 200) + 0x10);
        if (cVar3 == '\0') {
          unaff_x22 = 0;
        }
        else {
          unaff_x22 = *(undefined8 *)(lVar10 + 0x90);
        }
        if (*(long *)(lVar10 + 0xd0) != 0) {
          if (*(char *)(*(long *)(lVar10 + 0xd0) + 0x10) == '\0') {
            unaff_x23 = 0;
            if (cVar1 == '\0') goto code_r0x0157cc50;
code_r0x0157cc30:
            unaff_x24 = *(undefined8 *)(lVar10 + 0x80);
            if (cVar2 != '\0') goto code_r0x0157cc38;
code_r0x0157cc58:
            uVar12 = 0;
            if (cVar3 == '\0') goto code_r0x0157cc60;
code_r0x0157cc40:
            uVar13 = *(undefined8 *)(lVar10 + 0x80);
          }
          else {
            unaff_x23 = *(undefined8 *)(lVar10 + 0x98);
            if (cVar1 != '\0') goto code_r0x0157cc30;
code_r0x0157cc50:
            unaff_x24 = 0;
            if (cVar2 == '\0') goto code_r0x0157cc58;
code_r0x0157cc38:
            uVar12 = *(undefined8 *)(lVar10 + 0x80);
            if (cVar3 != '\0') goto code_r0x0157cc40;
code_r0x0157cc60:
            uVar13 = 0;
          }
          if (*(long *)(lVar10 + 0xe0) != 0) {
            Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility
                      (uVar6,*(undefined8 *)(lVar10 + 0x38),
                       *(char *)(*(long *)(lVar10 + 0xe0) + 0x10) == '\0');
            Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                      (lVar10,*(undefined8 *)(lVar10 + 0x40),unaff_x20,unaff_x21,unaff_x22,unaff_x23
                      );
            if (*(long *)(lVar10 + 0xe8) != 0) {
              uVar6 = unaff_x20;
              uVar11 = unaff_x21;
              uVar8 = unaff_x22;
              if (*(char *)(*(long *)(lVar10 + 0xe8) + 0x10) != '\0') {
                uVar6 = unaff_x24;
                uVar11 = uVar12;
                uVar8 = uVar13;
              }
              Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                        (lVar10,*(undefined8 *)(lVar10 + 0x48),uVar6,uVar11,uVar8,unaff_x23);
              if (*(long *)(lVar10 + 0xf0) != 0) {
                if (*(char *)(*(long *)(lVar10 + 0xf0) + 0x10) == '\0') {
                  return;
                }
                *(undefined8 *)((long)register0x00000008 + -0x50) =
                     *(undefined8 *)((long)register0x00000008 + -0x50);
                *(undefined8 *)((long)register0x00000008 + -0x48) =
                     *(undefined8 *)((long)register0x00000008 + -0x48);
                *(undefined8 *)((long)register0x00000008 + -0x40) =
                     *(undefined8 *)((long)register0x00000008 + -0x40);
                *(undefined8 *)((long)register0x00000008 + -0x38) =
                     *(undefined8 *)((long)register0x00000008 + -0x38);
                *(undefined8 *)((long)register0x00000008 + -0x30) =
                     *(undefined8 *)((long)register0x00000008 + -0x30);
                *(undefined8 *)((long)register0x00000008 + -0x28) =
                     *(undefined8 *)((long)register0x00000008 + -0x28);
                *(undefined8 *)((long)register0x00000008 + -0x20) =
                     *(undefined8 *)((long)register0x00000008 + -0x20);
                *(undefined8 *)((long)register0x00000008 + -0x18) =
                     *(undefined8 *)((long)register0x00000008 + -0x18);
                *(undefined8 *)((long)register0x00000008 + -0x10) =
                     *(undefined8 *)((long)register0x00000008 + -0x10);
                *(undefined8 *)((long)register0x00000008 + -8) =
                     *(undefined8 *)((long)register0x00000008 + -8);
                uVar9 = 0x14;
                if ((bRam0000000003eb5096 & 1) == 0) {
                  func_0x00f78a20(0x3d3d070);
                  func_0x00f78a20(0x3d3d068);
                  func_0x00f78a20(0x3d1e110);
                  func_0x00f78a20(0x3d23298);
                  func_0x00f78a20(0x3d76358);
                  bRam0000000003eb5096 = 1;
                }
                uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
                /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar6,0x14,uRam0000000003d3d068);
                *(undefined8 *)(lVar10 + 0x60) = uVar6;
                do {
                  uVar11 = *(undefined8 *)(lVar10 + 0xa0);
                  uVar12 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
                  /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar12,uVar11,0);
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                  uVar6 = uVar12;
                  uVar13 = Atlas_Gameplay_DebugVisualiser__CreateUnitSphere
                                     (lVar10,/*STR('WaypointSphere')*/ uRam0000000003d76358,uVar12);
                  if (*(long *)(lVar10 + 0x60) == 0) {
                    auVar21 = func_0x00f78af4(0,uVar13);
                    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_d15;
                    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_d14;
                    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_d13;
                    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_d12;
                    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d11;
                    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d10;
                    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d9;
                    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d8;
                    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar11;
                    *(undefined8 *)((long)register0x00000008 + -0x78) = uVar12;
                    *(long *)((long)register0x00000008 + -0x70) = lVar10;
                    *(ulong *)((long)register0x00000008 + -0x68) = uVar9;
                    *(undefined1 **)((long)register0x00000008 + -0x60) =
                         (undefined1 *)((long)register0x00000008 + -0x10);
                    *(code **)((long)register0x00000008 + -0x58) =
                         Atlas_Gameplay_DebugVisualiser__CreateUnitSphere;
                    uVar12 = *(undefined8 *)(auVar21._0_8_ + 0x70);
                    uVar17 = param_2;
                    uVar19 = param_3;
                    /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
                    uVar18 = uVar17;
                    uVar20 = uVar19;
                    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
                    *(undefined4 *)((long)register0x00000008 + -0xcc) = uVar18;
                    *(undefined4 *)((long)register0x00000008 + -200) = uVar20;
                    *(uint *)((long)register0x00000008 + -0xd0) =
                         CONCAT13(extraout_var_04,
                                  CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_01))
                                 );
                    Atlas_Gameplay_DebugVisualiser__CreateMeshProxy
                              (extraout_b0,param_2,param_3,
                               CONCAT13(extraout_var_03,
                                        CONCAT12(extraout_var_01,
                                                 CONCAT11(extraout_var,extraout_b0_00))),uVar17,
                               uVar19,param_4,auVar21._0_8_,uVar12,auVar21._8_8_,uVar6);
                    return;
                  }
                  /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$Add*/ func_0x02519f88(*(long *)(lVar10 + 0x60),uVar13,uVar12,uRam0000000003d3d070);
                  uVar4 = (int)uVar9 - 1;
                  uVar9 = (ulong)uVar4;
                } while (uVar4 != 0);
                return;
              }
            }
          }
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x68) = lVar10;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = Atlas_Gameplay_DebugVisualiser__DeInit;
  ppppuVar14 = (undefined8 ****)((long)register0x00000008 + -0x60);
  unaff_x20 = 0x3eb5000;
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(lVar7 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar7 + 0xb0),lVar7,0);
    *(undefined4 *)(lVar7 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
  }
  uVar6 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar7);
  *(undefined8 *)(lVar7 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar6,*(undefined8 *)(lVar7 + 0x38),1);
  if (*(char *)(lVar7 + 0xf8) == '\0') {
    if (*(char *)(lVar7 + 0xf9) != '\0') {
      *(undefined1 *)(lVar7 + 0xf9) = 0;
    }
    lVar10 = *(long *)(lVar7 + 0x18);
    uVar12 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
    Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
              (uVar12,lVar7,uRam0000000003d54b70,0);
    uVar6 = 0;
    if (lVar10 != 0) {
      Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar10,uVar12,0);
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined8 *)(lVar7 + 0x80) = 0;
      uVar6 = *(undefined8 *)(lVar7 + 0x50);
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar6,0);
      *(undefined8 *)(lVar7 + 0x50) = 0;
      if (*(long *)(lVar7 + 0x28) != 0) {
        *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        return;
      }
    }
    lVar10 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
    *(long *)((long)register0x00000008 + -0xa8) = lVar7;
    *(undefined8 *****)((long)register0x00000008 + -0xa0) = ppppuVar14;
    *(code **)((long)register0x00000008 + -0x98) =
         Atlas_Gameplay_DebugVisualiser__DeInitDebugMenuBindings;
    if (*(long *)(lVar10 + 0xb0) != 0) {
      /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar10 + 0xb0),lVar10,0);
      *(undefined4 *)(lVar10 + 0xb8) = 0xffffffff;
      *(undefined8 *)(lVar10 + 0xb0) = 0;
    }
    return;
  }
  uVar16 = 0;
  puVar15 = (undefined *)0x157cdc4;
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x90);
  lVar10 = lVar7;
code_r0x03272d10:
  *(undefined8 *)(puVar5 + -0x30) = unaff_d9;
  *(undefined8 *)(puVar5 + -0x28) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
  *(long *)(puVar5 + -0x18) = lVar10;
  *(undefined8 *****)(puVar5 + -0x10) = ppppuVar14;
  *(undefined **)(puVar5 + -8) = puVar15;
  if (pcRam0000000003ec1660 == (code *)0x0) {
    pcRam0000000003ec1660 =
         (code *)func_0x00f789d4("UnityEngine.Time::set_timeScale(System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03272d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec1660)(uVar16);
  return;
}



// ============================================================
// RVA: 0x1580064 | Atlas.Gameplay.DebugVisualiser.OnShowReplicatorsPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x0157cdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157cdc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_DebugVisualiser__OnShowReplicatorsPressed
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x19;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar12;
  undefined8 unaff_x25;
  undefined8 uVar13;
  undefined8 unaff_x26;
  undefined8 ****unaff_x29;
  undefined8 ****ppppuVar14;
  undefined *puVar15;
  undefined *unaff_x30;
  undefined1 uVar16;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar21 [16];
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_5 + 0xd0) == 0) {
    unaff_x19 = func_0x00f78af4();
    puStack_28 = &Atlas_Gameplay_DebugVisualiser__OnShowScenePressed;
    pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
    if (*(long *)(unaff_x19 + 0xe0) == 0) {
      lVar10 = func_0x00f78af4();
      puStack_48 = &Atlas_Gameplay_DebugVisualiser__OnHighlightDynamicPressed;
      ppppuVar14 = &pppuStack_50;
      pppuStack_50 = &pppuStack_30;
      if (*(long *)(lVar10 + 0xe8) == 0) {
        puVar15 = &Atlas_Gameplay_DebugVisualiser__OnPracticallyPausedPressed;
        lVar7 = func_0x00f78af4();
        *(char *)(lVar7 + 0xf8) = (char)param_7;
        uVar16 = (undefined1)_UNK_033f8758;
        puVar5 = &stack0xffffffffffffffa0;
        if ((int)param_7 == 0) {
          uVar16 = 0;
          puVar5 = &stack0xffffffffffffffa0;
        }
        goto code_r0x03272d10;
      }
      /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar10 + 0xe8),param_7,0);
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x29 = (undefined8 ****)pppuStack_50;
      unaff_x30 = puStack_48;
    }
    else {
      /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(unaff_x19 + 0xe0),param_7,0);
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      lVar10 = unaff_x19;
      unaff_x19 = param_5;
      unaff_x29 = (undefined8 ****)pppuStack_30;
      unaff_x30 = puStack_28;
    }
  }
  else {
    /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(param_5 + 0xd0),param_7,0);
    lVar10 = param_5;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(lVar10 + 0x30) == '\0') {
    Atlas_Gameplay_DebugVisualiser__CacheSceneObjects(lVar10,0);
    *(undefined1 *)(lVar10 + 0x30) = 1;
  }
  uVar6 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar10);
  *(undefined8 *)(lVar10 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar6,*(undefined8 *)(lVar10 + 0x38),1);
  uVar6 = Atlas_Gameplay_DebugVisualiser__CreateProxyGameObjectRoot(lVar10);
  if (*(long *)(lVar10 + 0xc0) != 0) {
    cVar1 = *(char *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if (cVar1 == '\0') {
      unaff_x20 = 0;
    }
    else {
      unaff_x20 = *(undefined8 *)(lVar10 + 0x78);
    }
    if (*(long *)(lVar10 + 0xd8) != 0) {
      cVar2 = *(char *)(*(long *)(lVar10 + 0xd8) + 0x10);
      if (cVar2 == '\0') {
        unaff_x21 = 0;
      }
      else {
        unaff_x21 = *(undefined8 *)(lVar10 + 0x88);
      }
      if (*(long *)(lVar10 + 200) != 0) {
        cVar3 = *(char *)(*(long *)(lVar10 + 200) + 0x10);
        if (cVar3 == '\0') {
          unaff_x22 = 0;
        }
        else {
          unaff_x22 = *(undefined8 *)(lVar10 + 0x90);
        }
        if (*(long *)(lVar10 + 0xd0) != 0) {
          if (*(char *)(*(long *)(lVar10 + 0xd0) + 0x10) == '\0') {
            unaff_x23 = 0;
            if (cVar1 == '\0') goto code_r0x0157cc50;
code_r0x0157cc30:
            unaff_x24 = *(undefined8 *)(lVar10 + 0x80);
            if (cVar2 != '\0') goto code_r0x0157cc38;
code_r0x0157cc58:
            uVar12 = 0;
            if (cVar3 == '\0') goto code_r0x0157cc60;
code_r0x0157cc40:
            uVar13 = *(undefined8 *)(lVar10 + 0x80);
          }
          else {
            unaff_x23 = *(undefined8 *)(lVar10 + 0x98);
            if (cVar1 != '\0') goto code_r0x0157cc30;
code_r0x0157cc50:
            unaff_x24 = 0;
            if (cVar2 == '\0') goto code_r0x0157cc58;
code_r0x0157cc38:
            uVar12 = *(undefined8 *)(lVar10 + 0x80);
            if (cVar3 != '\0') goto code_r0x0157cc40;
code_r0x0157cc60:
            uVar13 = 0;
          }
          if (*(long *)(lVar10 + 0xe0) != 0) {
            Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility
                      (uVar6,*(undefined8 *)(lVar10 + 0x38),
                       *(char *)(*(long *)(lVar10 + 0xe0) + 0x10) == '\0');
            Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                      (lVar10,*(undefined8 *)(lVar10 + 0x40),unaff_x20,unaff_x21,unaff_x22,unaff_x23
                      );
            if (*(long *)(lVar10 + 0xe8) != 0) {
              uVar6 = unaff_x20;
              uVar11 = unaff_x21;
              uVar8 = unaff_x22;
              if (*(char *)(*(long *)(lVar10 + 0xe8) + 0x10) != '\0') {
                uVar6 = unaff_x24;
                uVar11 = uVar12;
                uVar8 = uVar13;
              }
              Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                        (lVar10,*(undefined8 *)(lVar10 + 0x48),uVar6,uVar11,uVar8,unaff_x23);
              if (*(long *)(lVar10 + 0xf0) != 0) {
                if (*(char *)(*(long *)(lVar10 + 0xf0) + 0x10) == '\0') {
                  return;
                }
                *(undefined8 *)((long)register0x00000008 + -0x50) =
                     *(undefined8 *)((long)register0x00000008 + -0x50);
                *(undefined8 *)((long)register0x00000008 + -0x48) =
                     *(undefined8 *)((long)register0x00000008 + -0x48);
                *(undefined8 *)((long)register0x00000008 + -0x40) =
                     *(undefined8 *)((long)register0x00000008 + -0x40);
                *(undefined8 *)((long)register0x00000008 + -0x38) =
                     *(undefined8 *)((long)register0x00000008 + -0x38);
                *(undefined8 *)((long)register0x00000008 + -0x30) =
                     *(undefined8 *)((long)register0x00000008 + -0x30);
                *(undefined8 *)((long)register0x00000008 + -0x28) =
                     *(undefined8 *)((long)register0x00000008 + -0x28);
                *(undefined8 *)((long)register0x00000008 + -0x20) =
                     *(undefined8 *)((long)register0x00000008 + -0x20);
                *(undefined8 *)((long)register0x00000008 + -0x18) =
                     *(undefined8 *)((long)register0x00000008 + -0x18);
                *(undefined8 *)((long)register0x00000008 + -0x10) =
                     *(undefined8 *)((long)register0x00000008 + -0x10);
                *(undefined8 *)((long)register0x00000008 + -8) =
                     *(undefined8 *)((long)register0x00000008 + -8);
                uVar9 = 0x14;
                if ((bRam0000000003eb5096 & 1) == 0) {
                  func_0x00f78a20(0x3d3d070);
                  func_0x00f78a20(0x3d3d068);
                  func_0x00f78a20(0x3d1e110);
                  func_0x00f78a20(0x3d23298);
                  func_0x00f78a20(0x3d76358);
                  bRam0000000003eb5096 = 1;
                }
                uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
                /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar6,0x14,uRam0000000003d3d068);
                *(undefined8 *)(lVar10 + 0x60) = uVar6;
                do {
                  uVar11 = *(undefined8 *)(lVar10 + 0xa0);
                  uVar12 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
                  /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar12,uVar11,0);
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                  uVar6 = uVar12;
                  uVar13 = Atlas_Gameplay_DebugVisualiser__CreateUnitSphere
                                     (lVar10,/*STR('WaypointSphere')*/ uRam0000000003d76358,uVar12);
                  if (*(long *)(lVar10 + 0x60) == 0) {
                    auVar21 = func_0x00f78af4(0,uVar13);
                    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_d15;
                    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_d14;
                    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_d13;
                    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_d12;
                    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d11;
                    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d10;
                    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d9;
                    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d8;
                    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar11;
                    *(undefined8 *)((long)register0x00000008 + -0x78) = uVar12;
                    *(long *)((long)register0x00000008 + -0x70) = lVar10;
                    *(ulong *)((long)register0x00000008 + -0x68) = uVar9;
                    *(undefined1 **)((long)register0x00000008 + -0x60) =
                         (undefined1 *)((long)register0x00000008 + -0x10);
                    *(code **)((long)register0x00000008 + -0x58) =
                         Atlas_Gameplay_DebugVisualiser__CreateUnitSphere;
                    uVar12 = *(undefined8 *)(auVar21._0_8_ + 0x70);
                    uVar17 = param_2;
                    uVar19 = param_3;
                    /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
                    uVar18 = uVar17;
                    uVar20 = uVar19;
                    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
                    *(undefined4 *)((long)register0x00000008 + -0xcc) = uVar18;
                    *(undefined4 *)((long)register0x00000008 + -200) = uVar20;
                    *(uint *)((long)register0x00000008 + -0xd0) =
                         CONCAT13(extraout_var_04,
                                  CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_01))
                                 );
                    Atlas_Gameplay_DebugVisualiser__CreateMeshProxy
                              (extraout_b0,param_2,param_3,
                               CONCAT13(extraout_var_03,
                                        CONCAT12(extraout_var_01,
                                                 CONCAT11(extraout_var,extraout_b0_00))),uVar17,
                               uVar19,param_4,auVar21._0_8_,uVar12,auVar21._8_8_,uVar6);
                    return;
                  }
                  /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$Add*/ func_0x02519f88(*(long *)(lVar10 + 0x60),uVar13,uVar12,uRam0000000003d3d070);
                  uVar4 = (int)uVar9 - 1;
                  uVar9 = (ulong)uVar4;
                } while (uVar4 != 0);
                return;
              }
            }
          }
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x68) = lVar10;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = Atlas_Gameplay_DebugVisualiser__DeInit;
  ppppuVar14 = (undefined8 ****)((long)register0x00000008 + -0x60);
  unaff_x20 = 0x3eb5000;
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(lVar7 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar7 + 0xb0),lVar7,0);
    *(undefined4 *)(lVar7 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
  }
  uVar6 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar7);
  *(undefined8 *)(lVar7 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar6,*(undefined8 *)(lVar7 + 0x38),1);
  if (*(char *)(lVar7 + 0xf8) == '\0') {
    if (*(char *)(lVar7 + 0xf9) != '\0') {
      *(undefined1 *)(lVar7 + 0xf9) = 0;
    }
    lVar10 = *(long *)(lVar7 + 0x18);
    uVar12 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
    Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
              (uVar12,lVar7,uRam0000000003d54b70,0);
    uVar6 = 0;
    if (lVar10 != 0) {
      Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar10,uVar12,0);
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined8 *)(lVar7 + 0x80) = 0;
      uVar6 = *(undefined8 *)(lVar7 + 0x50);
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar6,0);
      *(undefined8 *)(lVar7 + 0x50) = 0;
      if (*(long *)(lVar7 + 0x28) != 0) {
        *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        return;
      }
    }
    lVar10 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
    *(long *)((long)register0x00000008 + -0xa8) = lVar7;
    *(undefined8 *****)((long)register0x00000008 + -0xa0) = ppppuVar14;
    *(code **)((long)register0x00000008 + -0x98) =
         Atlas_Gameplay_DebugVisualiser__DeInitDebugMenuBindings;
    if (*(long *)(lVar10 + 0xb0) != 0) {
      /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar10 + 0xb0),lVar10,0);
      *(undefined4 *)(lVar10 + 0xb8) = 0xffffffff;
      *(undefined8 *)(lVar10 + 0xb0) = 0;
    }
    return;
  }
  uVar16 = 0;
  puVar15 = (undefined *)0x157cdc4;
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x90);
  lVar10 = lVar7;
code_r0x03272d10:
  *(undefined8 *)(puVar5 + -0x30) = unaff_d9;
  *(undefined8 *)(puVar5 + -0x28) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
  *(long *)(puVar5 + -0x18) = lVar10;
  *(undefined8 *****)(puVar5 + -0x10) = ppppuVar14;
  *(undefined **)(puVar5 + -8) = puVar15;
  if (pcRam0000000003ec1660 == (code *)0x0) {
    pcRam0000000003ec1660 =
         (code *)func_0x00f789d4("UnityEngine.Time::set_timeScale(System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03272d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec1660)(uVar16);
  return;
}



// ============================================================
// RVA: 0x158009c | Atlas.Gameplay.DebugVisualiser.OnShowScenePressed
// ============================================================

/* WARNING: Possible PIC construction at 0x0157cdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157cdc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_DebugVisualiser__OnShowScenePressed
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x19;
  long lVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar12;
  undefined8 unaff_x25;
  undefined8 uVar13;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 **ppuVar14;
  undefined *puVar15;
  undefined *unaff_x30;
  undefined1 uVar16;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  undefined1 auVar21 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_5 + 0xe0) == 0) {
    lVar10 = func_0x00f78af4();
    puStack_28 = &Atlas_Gameplay_DebugVisualiser__OnHighlightDynamicPressed;
    ppuVar14 = &puStack_30;
    puStack_30 = &stack0xfffffffffffffff0;
    if (*(long *)(lVar10 + 0xe8) == 0) {
      puVar15 = &Atlas_Gameplay_DebugVisualiser__OnPracticallyPausedPressed;
      lVar7 = func_0x00f78af4();
      *(char *)(lVar7 + 0xf8) = (char)param_7;
      uVar16 = (undefined1)_UNK_033f8758;
      puVar5 = &stack0xffffffffffffffc0;
      if ((int)param_7 == 0) {
        uVar16 = 0;
        puVar5 = &stack0xffffffffffffffc0;
      }
      goto code_r0x03272d10;
    }
    /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(lVar10 + 0xe8),param_7,0);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = puStack_30;
    unaff_x30 = puStack_28;
  }
  else {
    /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(param_5 + 0xe0),param_7,0);
    lVar10 = param_5;
    param_5 = unaff_x19;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = param_5;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(char *)(lVar10 + 0x30) == '\0') {
    Atlas_Gameplay_DebugVisualiser__CacheSceneObjects(lVar10,0);
    *(undefined1 *)(lVar10 + 0x30) = 1;
  }
  uVar6 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar10);
  *(undefined8 *)(lVar10 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar6,*(undefined8 *)(lVar10 + 0x38),1);
  uVar6 = Atlas_Gameplay_DebugVisualiser__CreateProxyGameObjectRoot(lVar10);
  if (*(long *)(lVar10 + 0xc0) != 0) {
    cVar1 = *(char *)(*(long *)(lVar10 + 0xc0) + 0x10);
    if (cVar1 == '\0') {
      unaff_x20 = 0;
    }
    else {
      unaff_x20 = *(undefined8 *)(lVar10 + 0x78);
    }
    if (*(long *)(lVar10 + 0xd8) != 0) {
      cVar2 = *(char *)(*(long *)(lVar10 + 0xd8) + 0x10);
      if (cVar2 == '\0') {
        unaff_x21 = 0;
      }
      else {
        unaff_x21 = *(undefined8 *)(lVar10 + 0x88);
      }
      if (*(long *)(lVar10 + 200) != 0) {
        cVar3 = *(char *)(*(long *)(lVar10 + 200) + 0x10);
        if (cVar3 == '\0') {
          unaff_x22 = 0;
        }
        else {
          unaff_x22 = *(undefined8 *)(lVar10 + 0x90);
        }
        if (*(long *)(lVar10 + 0xd0) != 0) {
          if (*(char *)(*(long *)(lVar10 + 0xd0) + 0x10) == '\0') {
            unaff_x23 = 0;
            if (cVar1 == '\0') goto code_r0x0157cc50;
code_r0x0157cc30:
            unaff_x24 = *(undefined8 *)(lVar10 + 0x80);
            if (cVar2 != '\0') goto code_r0x0157cc38;
code_r0x0157cc58:
            uVar12 = 0;
            if (cVar3 == '\0') goto code_r0x0157cc60;
code_r0x0157cc40:
            uVar13 = *(undefined8 *)(lVar10 + 0x80);
          }
          else {
            unaff_x23 = *(undefined8 *)(lVar10 + 0x98);
            if (cVar1 != '\0') goto code_r0x0157cc30;
code_r0x0157cc50:
            unaff_x24 = 0;
            if (cVar2 == '\0') goto code_r0x0157cc58;
code_r0x0157cc38:
            uVar12 = *(undefined8 *)(lVar10 + 0x80);
            if (cVar3 != '\0') goto code_r0x0157cc40;
code_r0x0157cc60:
            uVar13 = 0;
          }
          if (*(long *)(lVar10 + 0xe0) != 0) {
            Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility
                      (uVar6,*(undefined8 *)(lVar10 + 0x38),
                       *(char *)(*(long *)(lVar10 + 0xe0) + 0x10) == '\0');
            Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                      (lVar10,*(undefined8 *)(lVar10 + 0x40),unaff_x20,unaff_x21,unaff_x22,unaff_x23
                      );
            if (*(long *)(lVar10 + 0xe8) != 0) {
              uVar6 = unaff_x20;
              uVar11 = unaff_x21;
              uVar8 = unaff_x22;
              if (*(char *)(*(long *)(lVar10 + 0xe8) + 0x10) != '\0') {
                uVar6 = unaff_x24;
                uVar11 = uVar12;
                uVar8 = uVar13;
              }
              Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                        (lVar10,*(undefined8 *)(lVar10 + 0x48),uVar6,uVar11,uVar8,unaff_x23);
              if (*(long *)(lVar10 + 0xf0) != 0) {
                if (*(char *)(*(long *)(lVar10 + 0xf0) + 0x10) == '\0') {
                  return;
                }
                *(undefined8 *)((long)register0x00000008 + -0x50) =
                     *(undefined8 *)((long)register0x00000008 + -0x50);
                *(undefined8 *)((long)register0x00000008 + -0x48) =
                     *(undefined8 *)((long)register0x00000008 + -0x48);
                *(undefined8 *)((long)register0x00000008 + -0x40) =
                     *(undefined8 *)((long)register0x00000008 + -0x40);
                *(undefined8 *)((long)register0x00000008 + -0x38) =
                     *(undefined8 *)((long)register0x00000008 + -0x38);
                *(undefined8 *)((long)register0x00000008 + -0x30) =
                     *(undefined8 *)((long)register0x00000008 + -0x30);
                *(undefined8 *)((long)register0x00000008 + -0x28) =
                     *(undefined8 *)((long)register0x00000008 + -0x28);
                *(undefined8 *)((long)register0x00000008 + -0x20) =
                     *(undefined8 *)((long)register0x00000008 + -0x20);
                *(undefined8 *)((long)register0x00000008 + -0x18) =
                     *(undefined8 *)((long)register0x00000008 + -0x18);
                *(undefined8 *)((long)register0x00000008 + -0x10) =
                     *(undefined8 *)((long)register0x00000008 + -0x10);
                *(undefined8 *)((long)register0x00000008 + -8) =
                     *(undefined8 *)((long)register0x00000008 + -8);
                uVar9 = 0x14;
                if ((bRam0000000003eb5096 & 1) == 0) {
                  func_0x00f78a20(0x3d3d070);
                  func_0x00f78a20(0x3d3d068);
                  func_0x00f78a20(0x3d1e110);
                  func_0x00f78a20(0x3d23298);
                  func_0x00f78a20(0x3d76358);
                  bRam0000000003eb5096 = 1;
                }
                uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
                /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar6,0x14,uRam0000000003d3d068);
                *(undefined8 *)(lVar10 + 0x60) = uVar6;
                do {
                  uVar11 = *(undefined8 *)(lVar10 + 0xa0);
                  uVar12 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
                  /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar12,uVar11,0);
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                  uVar6 = uVar12;
                  uVar13 = Atlas_Gameplay_DebugVisualiser__CreateUnitSphere
                                     (lVar10,/*STR('WaypointSphere')*/ uRam0000000003d76358,uVar12);
                  if (*(long *)(lVar10 + 0x60) == 0) {
                    auVar21 = func_0x00f78af4(0,uVar13);
                    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_d15;
                    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_d14;
                    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_d13;
                    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_d12;
                    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d11;
                    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_d10;
                    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d9;
                    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d8;
                    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar11;
                    *(undefined8 *)((long)register0x00000008 + -0x78) = uVar12;
                    *(long *)((long)register0x00000008 + -0x70) = lVar10;
                    *(ulong *)((long)register0x00000008 + -0x68) = uVar9;
                    *(undefined1 **)((long)register0x00000008 + -0x60) =
                         (undefined1 *)((long)register0x00000008 + -0x10);
                    *(code **)((long)register0x00000008 + -0x58) =
                         Atlas_Gameplay_DebugVisualiser__CreateUnitSphere;
                    uVar12 = *(undefined8 *)(auVar21._0_8_ + 0x70);
                    uVar17 = param_2;
                    uVar19 = param_3;
                    /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
                    uVar18 = uVar17;
                    uVar20 = uVar19;
                    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
                    *(undefined4 *)((long)register0x00000008 + -0xcc) = uVar18;
                    *(undefined4 *)((long)register0x00000008 + -200) = uVar20;
                    *(uint *)((long)register0x00000008 + -0xd0) =
                         CONCAT13(extraout_var_04,
                                  CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_01))
                                 );
                    Atlas_Gameplay_DebugVisualiser__CreateMeshProxy
                              (extraout_b0,param_2,param_3,
                               CONCAT13(extraout_var_03,
                                        CONCAT12(extraout_var_01,
                                                 CONCAT11(extraout_var,extraout_b0_00))),uVar17,
                               uVar19,param_4,auVar21._0_8_,uVar12,auVar21._8_8_,uVar6);
                    return;
                  }
                  /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$Add*/ func_0x02519f88(*(long *)(lVar10 + 0x60),uVar13,uVar12,uRam0000000003d3d070);
                  uVar4 = (int)uVar9 - 1;
                  uVar9 = (ulong)uVar4;
                } while (uVar4 != 0);
                return;
              }
            }
          }
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x68) = lVar10;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x58) = Atlas_Gameplay_DebugVisualiser__DeInit;
  ppuVar14 = (undefined1 **)((long)register0x00000008 + -0x60);
  unaff_x20 = 0x3eb5000;
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(lVar7 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar7 + 0xb0),lVar7,0);
    *(undefined4 *)(lVar7 + 0xb8) = 0xffffffff;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
  }
  uVar6 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(lVar7);
  *(undefined8 *)(lVar7 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar6,*(undefined8 *)(lVar7 + 0x38),1);
  if (*(char *)(lVar7 + 0xf8) == '\0') {
    if (*(char *)(lVar7 + 0xf9) != '\0') {
      *(undefined1 *)(lVar7 + 0xf9) = 0;
    }
    lVar10 = *(long *)(lVar7 + 0x18);
    uVar12 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
    Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
              (uVar12,lVar7,uRam0000000003d54b70,0);
    uVar6 = 0;
    if (lVar10 != 0) {
      Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar10,uVar12,0);
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined8 *)(lVar7 + 0x80) = 0;
      uVar6 = *(undefined8 *)(lVar7 + 0x50);
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar6,0);
      *(undefined8 *)(lVar7 + 0x50) = 0;
      if (*(long *)(lVar7 + 0x28) != 0) {
        *(undefined8 *)(*(long *)(lVar7 + 0x28) + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        return;
      }
    }
    lVar10 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
    *(long *)((long)register0x00000008 + -0xa8) = lVar7;
    *(undefined1 ***)((long)register0x00000008 + -0xa0) = ppuVar14;
    *(code **)((long)register0x00000008 + -0x98) =
         Atlas_Gameplay_DebugVisualiser__DeInitDebugMenuBindings;
    if (*(long *)(lVar10 + 0xb0) != 0) {
      /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar10 + 0xb0),lVar10,0);
      *(undefined4 *)(lVar10 + 0xb8) = 0xffffffff;
      *(undefined8 *)(lVar10 + 0xb0) = 0;
    }
    return;
  }
  uVar16 = 0;
  puVar15 = (undefined *)0x157cdc4;
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x90);
  lVar10 = lVar7;
code_r0x03272d10:
  *(undefined8 *)(puVar5 + -0x30) = unaff_d9;
  *(undefined8 *)(puVar5 + -0x28) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
  *(long *)(puVar5 + -0x18) = lVar10;
  *(undefined1 ***)(puVar5 + -0x10) = ppuVar14;
  *(undefined **)(puVar5 + -8) = puVar15;
  if (pcRam0000000003ec1660 == (code *)0x0) {
    pcRam0000000003ec1660 =
         (code *)func_0x00f789d4("UnityEngine.Time::set_timeScale(System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03272d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec1660)(uVar16);
  return;
}



// ============================================================
// RVA: 0x15800d4 | Atlas.Gameplay.DebugVisualiser.OnHighlightDynamicPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x0157cdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0157cdc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_DebugVisualiser__OnHighlightDynamicPressed
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 **ppuVar15;
  undefined *puVar16;
  undefined1 uVar17;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar20 [16];
  undefined1 *puStack_60;
  code *pcStack_58;
  
  ppuVar15 = (undefined1 **)&stack0xfffffffffffffff0;
  if (*(long *)(param_5 + 0xe8) == 0) {
    puVar16 = &Atlas_Gameplay_DebugVisualiser__OnPracticallyPausedPressed;
    lVar8 = func_0x00f78af4();
    *(char *)(lVar8 + 0xf8) = (char)param_7;
    uVar17 = (undefined1)_UNK_033f8758;
    puVar4 = &stack0xffffffffffffffe0;
    if ((int)param_7 == 0) {
      uVar17 = 0;
      puVar4 = &stack0xffffffffffffffe0;
    }
    goto code_r0x03272d10;
  }
  /*Core.Environment.Pref$$SetBool*/ func_0x016466c4(*(long *)(param_5 + 0xe8),param_7,0);
  if (*(char *)(param_5 + 0x30) == '\0') {
    Atlas_Gameplay_DebugVisualiser__CacheSceneObjects(param_5,0);
    *(undefined1 *)(param_5 + 0x30) = 1;
  }
  uVar5 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(param_5);
  *(undefined8 *)(param_5 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar5,*(undefined8 *)(param_5 + 0x38),1)
  ;
  uVar5 = Atlas_Gameplay_DebugVisualiser__CreateProxyGameObjectRoot(param_5);
  if (*(long *)(param_5 + 0xc0) != 0) {
    cVar1 = *(char *)(*(long *)(param_5 + 0xc0) + 0x10);
    if (cVar1 == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(param_5 + 0x78);
    }
    if (*(long *)(param_5 + 0xd8) != 0) {
      cVar2 = *(char *)(*(long *)(param_5 + 0xd8) + 0x10);
      if (cVar2 == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(param_5 + 0x88);
      }
      if (*(long *)(param_5 + 200) != 0) {
        cVar3 = *(char *)(*(long *)(param_5 + 200) + 0x10);
        if (cVar3 == '\0') {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(param_5 + 0x90);
        }
        if (*(long *)(param_5 + 0xd0) != 0) {
          if (*(char *)(*(long *)(param_5 + 0xd0) + 0x10) == '\0') {
            uVar11 = 0;
            if (cVar1 == '\0') goto code_r0x0157cc50;
code_r0x0157cc30:
            uVar12 = *(undefined8 *)(param_5 + 0x80);
            if (cVar2 != '\0') goto code_r0x0157cc38;
code_r0x0157cc58:
            uVar13 = 0;
            if (cVar3 == '\0') goto code_r0x0157cc60;
code_r0x0157cc40:
            uVar14 = *(undefined8 *)(param_5 + 0x80);
          }
          else {
            uVar11 = *(undefined8 *)(param_5 + 0x98);
            if (cVar1 != '\0') goto code_r0x0157cc30;
code_r0x0157cc50:
            uVar12 = 0;
            if (cVar2 == '\0') goto code_r0x0157cc58;
code_r0x0157cc38:
            uVar13 = *(undefined8 *)(param_5 + 0x80);
            if (cVar3 != '\0') goto code_r0x0157cc40;
code_r0x0157cc60:
            uVar14 = 0;
          }
          if (*(long *)(param_5 + 0xe0) != 0) {
            Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility
                      (uVar5,*(undefined8 *)(param_5 + 0x38),
                       *(char *)(*(long *)(param_5 + 0xe0) + 0x10) == '\0');
            Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                      (param_5,*(undefined8 *)(param_5 + 0x40),uVar7,uVar9,uVar10,uVar11);
            if (*(long *)(param_5 + 0xe8) != 0) {
              if (*(char *)(*(long *)(param_5 + 0xe8) + 0x10) != '\0') {
                uVar7 = uVar12;
                uVar9 = uVar13;
                uVar10 = uVar14;
              }
              Atlas_Gameplay_DebugVisualiser__CreateMeshColliderVisuals
                        (param_5,*(undefined8 *)(param_5 + 0x48),uVar7,uVar9,uVar10,uVar11);
              if (*(long *)(param_5 + 0xf0) != 0) {
                if (*(char *)(*(long *)(param_5 + 0xf0) + 0x10) == '\0') {
                  return;
                }
                iVar6 = 0x14;
                if ((bRam0000000003eb5096 & 1) == 0) {
                  func_0x00f78a20(0x3d3d070);
                  func_0x00f78a20(0x3d3d068);
                  func_0x00f78a20(0x3d1e110);
                  func_0x00f78a20(0x3d23298);
                  func_0x00f78a20(0x3d76358);
                  bRam0000000003eb5096 = 1;
                }
                uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<DebugVisualiser.Waypoint>_TypeInfo*/ uRam0000000003d1e110);
                /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$.ctor*/ func_0x0251938c(uVar5,0x14,uRam0000000003d3d068);
                *(undefined8 *)(param_5 + 0x60) = uVar5;
                do {
                  uVar5 = *(undefined8 *)(param_5 + 0xa0);
                  uVar7 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
                  /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar7,uVar5,0);
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                  uVar5 = uVar7;
                  uVar9 = Atlas_Gameplay_DebugVisualiser__CreateUnitSphere
                                    (param_5,/*STR('WaypointSphere')*/ uRam0000000003d76358,uVar7);
                  if (*(long *)(param_5 + 0x60) == 0) {
                    auVar20 = func_0x00f78af4(0,uVar9);
                    pcStack_58 = Atlas_Gameplay_DebugVisualiser__CreateUnitSphere;
                    uVar7 = *(undefined8 *)(auVar20._0_8_ + 0x70);
                    uVar18 = param_2;
                    uVar19 = param_3;
                    puStack_60 = &stack0xfffffffffffffff0;
                    /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
                    /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
                    Atlas_Gameplay_DebugVisualiser__CreateMeshProxy
                              (extraout_b0,param_2,param_3,
                               CONCAT13(extraout_var_01,
                                        CONCAT12(extraout_var_00,
                                                 CONCAT11(extraout_var,extraout_b0_00))),uVar18,
                               uVar19,param_4,auVar20._0_8_,uVar7,auVar20._8_8_,uVar5);
                    return;
                  }
                  /*System.Collections.Generic.List<DebugVisualiser.Waypoint>$$Add*/ func_0x02519f88(*(long *)(param_5 + 0x60),uVar9,uVar7,uRam0000000003d3d070);
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
                return;
              }
            }
          }
        }
      }
    }
  }
  param_5 = func_0x00f78af4();
  pcStack_58 = Atlas_Gameplay_DebugVisualiser__DeInit;
  ppuVar15 = &puStack_60;
  unaff_x20 = 0x3eb5000;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5095 & 1) == 0) {
    func_0x00f78a20(0x3d54b70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d296d8);
    bRam0000000003eb5095 = 1;
  }
  if (*(long *)(param_5 + 0xb0) != 0) {
    /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(param_5 + 0xb0),param_5,0);
    *(undefined4 *)(param_5 + 0xb8) = 0xffffffff;
    *(undefined8 *)(param_5 + 0xb0) = 0;
  }
  uVar5 = Atlas_Gameplay_DebugVisualiser__DestroyProxyGameObjectRoot(param_5);
  *(undefined8 *)(param_5 + 0x60) = 0;
  Atlas_Gameplay_DebugVisualiser__SetMeshRendererVisibility(uVar5,*(undefined8 *)(param_5 + 0x38),1)
  ;
  if (*(char *)(param_5 + 0xf8) == '\0') {
    if (*(char *)(param_5 + 0xf9) != '\0') {
      *(undefined1 *)(param_5 + 0xf9) = 0;
    }
    lVar8 = *(long *)(param_5 + 0x18);
    uVar5 = func_0x00f78aec(/*Atlas.Gameplay.Usables.UsableManagerEvents.UsableSpawned_TypeInfo*/ uRam0000000003d296d8);
    Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned___ctor
              (uVar5,param_5,uRam0000000003d54b70,0);
    if (lVar8 != 0) {
      Atlas_Gameplay_Usables_UsableManager__remove_OnUsableSpawned(lVar8,uVar5,0);
      *(undefined8 *)(param_5 + 0x40) = 0;
      *(undefined8 *)(param_5 + 0x48) = 0;
      *(undefined8 *)(param_5 + 0x38) = 0;
      *(undefined8 *)(param_5 + 0x78) = 0;
      *(undefined8 *)(param_5 + 0x80) = 0;
      uVar5 = *(undefined8 *)(param_5 + 0x50);
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.Object$$Destroy*/ func_0x03249390(uVar5,0);
      *(undefined8 *)(param_5 + 0x50) = 0;
      if (*(long *)(param_5 + 0x28) != 0) {
        *(undefined8 *)(*(long *)(param_5 + 0x28) + 0x18) = 0;
        *(undefined8 *)(param_5 + 0x18) = 0;
        *(undefined8 *)(param_5 + 0x10) = 0;
        *(undefined8 *)(param_5 + 0x28) = 0;
        *(undefined8 *)(param_5 + 0x20) = 0;
        return;
      }
    }
    lVar8 = func_0x00f78af4();
    if (*(long *)(lVar8 + 0xb0) != 0) {
      /*Core.DebugMenu.DebugMenu$$RemoveAllElementsCreatedBy*/ func_0x01640a78(*(long *)(lVar8 + 0xb0),lVar8,0);
      *(undefined4 *)(lVar8 + 0xb8) = 0xffffffff;
      *(undefined8 *)(lVar8 + 0xb0) = 0;
    }
    return;
  }
  uVar17 = 0;
  puVar16 = (undefined *)0x157cdc4;
  puVar4 = &stack0xffffffffffffff70;
code_r0x03272d10:
  *(undefined8 *)(puVar4 + -0x30) = unaff_d9;
  *(undefined8 *)(puVar4 + -0x28) = unaff_d8;
  *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
  *(long *)(puVar4 + -0x18) = param_5;
  *(undefined1 ***)(puVar4 + -0x10) = ppuVar15;
  *(undefined **)(puVar4 + -8) = puVar16;
  if (pcRam0000000003ec1660 == (code *)0x0) {
    pcRam0000000003ec1660 =
         (code *)func_0x00f789d4("UnityEngine.Time::set_timeScale(System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03272d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec1660)(uVar17);
  return;
}



// ============================================================
// RVA: 0x158010c | Atlas.Gameplay.DebugVisualiser.OnPracticallyPausedPressed
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_DebugVisualiser__OnPracticallyPausedPressed
               (long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  *(char *)(param_1 + 0xf8) = (char)param_3;
  uVar1 = _UNK_033f8758;
  if (param_3 == 0) {
    uVar1 = 0x3f800000;
  }
  if (pcRam0000000003ec1660 == (code *)0x0) {
    pcRam0000000003ec1660 =
         (code *)func_0x00f789d4("UnityEngine.Time::set_timeScale(System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x03272d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec1660)(uVar1);
  return;
}



// ============================================================
// RVA: 0x158012c | Atlas.Gameplay.DebugVisualiser.OnDebugCameraChanged
// ============================================================

void Atlas_Gameplay_DebugVisualiser__OnDebugCameraChanged
               (long param_1,undefined8 param_2,int param_3)

{
  *(bool *)(param_1 + 0xf9) = param_3 != 0;
  return;
}



// ============================================================
// RVA: 0x158013c | Atlas.Gameplay.DebugVisualiser.CreateChequerBoardTexture
// ============================================================

undefined1  [16]
Atlas_Gameplay_DebugVisualiser__CreateChequerBoardTexture
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5,
          undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((bRam0000000003eb50a7 & 1) == 0) {
    func_0x00f78a20(0x3d1ee10);
    func_0x00f78a20(0x3d25168);
    bRam0000000003eb50a7 = 1;
  }
  iVar8 = (int)param_3;
  auVar13._0_8_ = func_0x00f78aec(/*UnityEngine.Texture2D_TypeInfo*/ uRam0000000003d25168);
  iVar9 = (int)param_2;
  /*UnityEngine.Texture2D$$.ctor*/ func_0x03270a94(auVar13._0_8_,param_4 * iVar9,param_5 * iVar8,3,1,0);
  uVar12 = (ulong)(uint)(iVar8 * iVar9);
  lVar2 = func_0x00f78a34(/*UnityEngine.Color32[]_TypeInfo*/ uRam0000000003d1ee10,uVar12);
  lVar3 = func_0x00f78a34(/*UnityEngine.Color32[]_TypeInfo*/ uRam0000000003d1ee10,uVar12);
  if (0 < iVar8 * iVar9) {
    if (lVar2 == 0) goto LAB_01580300;
    uVar5 = 0;
    do {
      if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_01580304;
      *(undefined4 *)(lVar2 + 0x20 + uVar5 * 4) = param_6;
      if (lVar3 == 0) goto LAB_01580300;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_01580304;
      *(undefined4 *)(lVar3 + 0x20 + uVar5 * 4) = param_7;
      uVar5 = uVar5 + 1;
    } while (uVar12 != uVar5);
  }
  if (0 < (int)param_4) {
    uVar11 = 0;
    do {
      if (0 < param_5) {
        iVar10 = 0;
        uVar7 = uVar11 & 1;
        iVar6 = param_5;
        do {
          lVar1 = lVar3;
          if (uVar7 != 0) {
            lVar1 = lVar2;
          }
          if (auVar13._0_8_ == 0) goto LAB_01580300;
          /*UnityEngine.Texture2D$$SetPixels32*/ func_0x03271a40(auVar13._0_8_,uVar11 * iVar9,iVar10,param_2,param_3,lVar1,0);
          uVar7 = uVar7 ^ 1;
          iVar10 = iVar10 + iVar8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_4);
  }
  if (auVar13._0_8_ != 0) {
    /*UnityEngine.Texture2D$$Apply*/ func_0x032714a4(auVar13._0_8_,1,0);
    auVar13._8_8_ = extraout_x1;
    return auVar13;
  }
LAB_01580300:
  func_0x00f78af4();
LAB_01580304:
  uVar4 = func_0x00f78b24();
  auVar14._0_8_ = func_0x00f78ac0(uVar4,0);
  *(undefined4 *)(auVar14._0_8_ + 0xb8) = 0xffffffff;
  auVar14._8_8_ = 0;
  return auVar14;
}



// ============================================================
// RVA: 0x1580310 | Atlas.Gameplay.DebugVisualiser..ctor
// ============================================================

void Atlas_Gameplay_DebugVisualiser___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  return;
}



