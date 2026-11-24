// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Replicator

// ============================================================
// RVA: 0x167f014 | Core.Services.Replicator.get_LatestCookie
// ============================================================

undefined8 Core_Services_Replicator__get_LatestCookie(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x167f01c | Core.Services.Replicator.get_IsReplicating
// ============================================================

bool Core_Services_Replicator__get_IsReplicating(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(char *)(*(long *)(param_1 + 0x20) + 0x30) != '\0';
  }
  return false;
}



// ============================================================
// RVA: 0x167f03c | Core.Services.Replicator.get_ViewID
// ============================================================

ulong Core_Services_Replicator__get_ViewID(long param_1)

{
  return (long)CONCAT24(*(undefined2 *)(param_1 + 0x46),*(undefined4 *)(param_1 + 0x40)) |
         (long)*(char *)(param_1 + 0x45) << 0x30;
}



// ============================================================
// RVA: 0x167f064 | Core.Services.Replicator.get_LatestLocalPosition
// ============================================================

undefined1  [16] Core_Services_Replicator__get_LatestLocalPosition(long param_1)

{
  undefined4 extraout_s0;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4();
    uStack_20._0_4_ = extraout_s0;
    uVar2 = extraout_var;
    uVar3 = extraout_var_00;
  }
  else {
    uStack_18 = 0;
    uStack_20 = 0;
    /*Core.Services.ReplicatorProviderEsq$$GetOwnerState*/ func_0x0167f0ac(*(long *)(param_1 + 0x20),&uStack_20,auStack_30,auStack_40);
    uVar2 = 0;
    uVar3 = 0;
  }
  auVar1._4_4_ = uVar2;
  auVar1._0_4_ = (undefined4)uStack_20;
  auVar1._8_8_ = uVar3;
  return auVar1;
}



// ============================================================
// RVA: 0x167f154 | Core.Services.Replicator.get_LatestLocalRotation
// ============================================================

undefined1  [16] Core_Services_Replicator__get_LatestLocalRotation(long param_1)

{
  undefined4 extraout_s0;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 auStack_20 [16];
  
  if (*(long *)(param_1 + 0x20) == 0) {
    /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08();
    uStack_30._0_4_ = extraout_s0;
    uVar2 = extraout_var;
    uVar3 = extraout_var_00;
  }
  else {
    uStack_30 = 0;
    uStack_28 = 0;
    /*Core.Services.ReplicatorProviderEsq$$GetOwnerState*/ func_0x0167f0ac(*(long *)(param_1 + 0x20),auStack_20,auStack_20,&uStack_30);
    uVar2 = 0;
    uVar3 = 0;
  }
  auVar1._4_4_ = uVar2;
  auVar1._0_4_ = (undefined4)uStack_30;
  auVar1._8_8_ = uVar3;
  return auVar1;
}



// ============================================================
// RVA: 0x167f198 | Core.Services.Replicator.get_LatestPosition
// ============================================================

long Core_Services_Replicator__get_LatestPosition(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  lVar1 = 0;
  if ((bRam0000000003ec1ac5 & 1) == 0) {
    lVar1 = func_0x00f78a20(0x3d25978);
    bRam0000000003ec1ac5 = 1;
  }
  return lVar1;
}



// ============================================================
// RVA: 0x167f1b4 | Core.Services.Replicator.get_LatestRotation
// ============================================================

long Core_Services_Replicator__get_LatestRotation(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  lVar1 = 0;
  if ((bRam0000000003ec0640 & 1) == 0) {
    lVar1 = func_0x00f78a20(0x3d23f70);
    bRam0000000003ec0640 = 1;
  }
  return lVar1;
}



// ============================================================
// RVA: 0x167f1d0 | Core.Services.Replicator.get_LastKnownPosition
// ============================================================

long Core_Services_Replicator__get_LastKnownPosition(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  lVar1 = 0;
  if ((bRam0000000003ec1ac5 & 1) == 0) {
    lVar1 = func_0x00f78a20(0x3d25978);
    bRam0000000003ec1ac5 = 1;
  }
  return lVar1;
}



// ============================================================
// RVA: 0x167f1ec | Core.Services.Replicator.get_LastKnownRotation
// ============================================================

long Core_Services_Replicator__get_LastKnownRotation(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  lVar1 = 0;
  if ((bRam0000000003ec0640 & 1) == 0) {
    lVar1 = func_0x00f78a20(0x3d23f70);
    bRam0000000003ec0640 = 1;
  }
  return lVar1;
}



// ============================================================
// RVA: 0x167f208 | Core.Services.Replicator.get_VelocityOnlyMode
// ============================================================

bool Core_Services_Replicator__get_VelocityOnlyMode(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(char *)(*(long *)(param_1 + 0x20) + 0x100) != '\0';
  }
  return false;
}



// ============================================================
// RVA: 0x167f228 | Core.Services.Replicator.EnableReducedMode
// ============================================================

void Core_Services_Replicator__EnableReducedMode(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xf0) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x167f248 | Core.Services.Replicator.get_RigidBodyVelocity
// ============================================================

long Core_Services_Replicator__get_RigidBodyVelocity(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return param_1;
  }
  lVar1 = 0;
  if ((bRam0000000003ec1ac5 & 1) == 0) {
    lVar1 = func_0x00f78a20(0x3d25978);
    bRam0000000003ec1ac5 = 1;
  }
  return lVar1;
}



// ============================================================
// RVA: 0x167f264 | Core.Services.Replicator.UpdateTransform
// ============================================================

void Core_Services_Replicator__UpdateTransform(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x40)) {
      uStack_48 = param_2[1];
      uStack_50 = *param_2;
      uStack_40 = param_2[2];
      uStack_38 = (undefined4)param_2[3];
      uStack_2c = *(undefined8 *)((long)param_2 + 0x24);
      uStack_34 = (undefined4)*(undefined8 *)((long)param_2 + 0x1c);
      uStack_30 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x1c) >> 0x20);
    }
    else {
      plVar3 = *(long **)(param_1 + 0x18);
      if (plVar3 == (long *)0x0) {
code_r0x0167f324:
        func_0x00f78af4();
        return;
      }
      iVar1 = (**(code **)(*plVar3 + 0x748))(plVar3,*(undefined8 *)(*plVar3 + 0x750));
      if (iVar1 == *(int *)(param_1 + 0x40)) {
        lVar2 = *(long *)(param_1 + 0x20);
        if (lVar2 == 0) goto code_r0x0167f324;
      }
      else {
        lVar2 = *(long *)(param_1 + 0x20);
        iVar1 = *(int *)(param_1 + 0x40);
      }
      *(int *)(param_1 + 0x30) = iVar1;
      uStack_48 = param_2[1];
      uStack_50 = *param_2;
      uStack_40 = param_2[2];
      uStack_38 = (undefined4)param_2[3];
      uStack_2c = *(undefined8 *)((long)param_2 + 0x24);
      uStack_34 = (undefined4)*(undefined8 *)((long)param_2 + 0x1c);
      uStack_30 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x1c) >> 0x20);
      if (lVar2 == 0) goto code_r0x0167f324;
    }
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_5c = uStack_2c;
    uStack_64 = uStack_34;
    uStack_60 = uStack_30;
    /*Core.Services.ReplicatorProviderEsq$$OnUpdateTransform*/ func_0x0167f32c(lVar2,&uStack_80);
  }
  return;
}



// ============================================================
// RVA: 0x167ff88 | Core.Services.Replicator.Clear
// ============================================================

/* WARNING: Possible PIC construction at 0x01680840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01680b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01680844) */
/* WARNING: Removing unreachable block (ram,0x01680b78) */
/* WARNING: Removing unreachable block (ram,0x01680b7c) */
/* WARNING: Removing unreachable block (ram,0x01680b94) */
/* WARNING: Removing unreachable block (ram,0x01680be8) */
/* WARNING: Removing unreachable block (ram,0x01680ba8) */
/* WARNING: Removing unreachable block (ram,0x01680bd8) */

long * Core_Services_Replicator__Clear
                 (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  float fVar16;
  float extraout_s0;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  long lStack_f0;
  long lStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined2 uStack_68;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined4 uStack_64;
  
  *(undefined8 *)(param_4 + 0x28) = 0;
  lVar2 = *(long *)(param_4 + 0x20);
  if (lVar2 == 0) {
    return (long *)0x0;
  }
  *(undefined1 *)(lVar2 + 0x30) = 0;
  *(undefined2 *)(lVar2 + 0x100) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x9c) = 0;
  *(undefined8 *)(lVar2 + 0xac) = 0;
  *(undefined8 *)(lVar2 + 0xa4) = 0;
  *(undefined8 *)(lVar2 + 0xc0) = 0;
  *(undefined8 *)(lVar2 + 0xb8) = 0;
  *(undefined8 *)(lVar2 + 0xd0) = 0;
  *(undefined8 *)(lVar2 + 200) = 0;
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  *(undefined8 *)(lVar2 + 0xd8) = 0;
  *(undefined8 *)(lVar2 + 0xe9) = 0;
  *(undefined8 *)(lVar2 + 0xe1) = 0;
  lVar2 = *(long *)(lVar2 + 0xf8);
  fVar16 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  if (lVar2 != 0) {
    fVar17 = 0.0;
    fVar18 = fVar16;
    plVar9 = (long *)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(float *)(lVar2 + 0x38) = param_2;
    *(float *)(lVar2 + 0x3c) = param_3;
    *(float *)(lVar2 + 0x10) = fVar16;
    *(float *)(lVar2 + 0x14) = param_2;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(float *)(lVar2 + 0x18) = param_3;
    *(float *)(lVar2 + 0x1c) = extraout_s0;
    *(float *)(lVar2 + 0x20) = fVar17;
    *(float *)(lVar2 + 0x24) = fVar18;
    *(float *)(lVar2 + 0x28) = fVar16 + extraout_s0 * 0.0;
    *(float *)(lVar2 + 0x2c) = param_2 + fVar17 * 0.0;
    *(float *)(lVar2 + 0x30) = param_3 + fVar18 * 0.0;
    *(float *)(lVar2 + 0x34) = fVar16;
    return plVar9;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb59ef & 1) == 0) {
    func_0x00f78a20(0x3d20260);
    func_0x00f78a20(0x3d22900);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d24ee8);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d73060);
    func_0x00f78a20(0x3d73048);
    func_0x00f78a20(0x3d73038);
    func_0x00f78a20(0x3d73028);
    func_0x00f78a20(0x3d7d1e8);
    func_0x00f78a20(0x3d760d0);
    func_0x00f78a20(0x3d7d100);
    bRam0000000003eb59ef = 1;
  }
  plVar9 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
  if (plVar9 != (long *)0x0) {
    if ((/*STR('{{')*/ lRam0000000003d7d100 == 0) ||
       (lVar3 = func_0x00f78adc(/*STR('{{')*/ lRam0000000003d7d100,*(undefined8 *)(*plVar9 + 0x40)), lVar3 != 0))
    {
      if ((int)plVar9[3] != 0) {
        plVar9[4] = /*STR('{{')*/ lRam0000000003d7d100;
        uStack_64 = *(undefined4 *)(lVar2 + 0x40);
        uVar4 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_64);
        lVar3 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncId={0} ')*/ uRam0000000003d73038,uVar4,0);
        if ((lVar3 != 0) &&
           (lVar5 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
        goto code_r0x01680440;
        if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
          plVar9[5] = lVar3;
          uStack_65 = *(undefined1 *)(lVar2 + 0x44);
          uVar4 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&uStack_65);
          lVar3 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncOwner={0} ')*/ uRam0000000003d73060,uVar4,0);
          if ((lVar3 != 0) &&
             (lVar5 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
          goto code_r0x01680440;
          if (2 < *(uint *)(plVar9 + 3)) {
            plVar9[6] = lVar3;
            uStack_66 = *(undefined1 *)(lVar2 + 0x45);
            uVar4 = func_0x00f78ae0(/*Core.Services.SyncCategory_TypeInfo*/ uRam0000000003d24ee8,&uStack_66);
            lVar3 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncCategory={0} ')*/ uRam0000000003d73028,uVar4,0);
            if ((lVar3 != 0) &&
               (lVar5 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
            goto code_r0x01680440;
            if ((*(uint *)(plVar9 + 3) & 0xfffffffc) != 0) {
              plVar9[7] = lVar3;
              uStack_68 = *(undefined2 *)(lVar2 + 0x46);
              uVar4 = func_0x00f78ae0(/*short_TypeInfo*/ uRam0000000003d22900,&uStack_68);
              uStack_6c = (uint)*(byte *)(lVar2 + 0x46);
              uVar6 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_6c);
              iStack_70 = (int)*(char *)(lVar2 + 0x47);
              uVar7 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_70);
              lVar3 = /*System.String$$Format*/ func_0x029bdf30(/*STR('SyncInstanceId={0}({1}:{2}) ')*/ uRam0000000003d73048,uVar4,uVar6,uVar7,0);
              if ((lVar3 != 0) &&
                 (lVar5 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
              goto code_r0x01680440;
              if (4 < *(uint *)(plVar9 + 3)) {
                plVar9[8] = lVar3;
                if (*(long *)(lVar2 + 0x20) == 0) {
                  uStack_74 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                }
                else {
                  uStack_74 = *(undefined4 *)(*(long *)(lVar2 + 0x20) + 0x9c);
                }
                uVar4 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&uStack_74);
                if (*(long *)(lVar2 + 0x20) == 0) {
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                }
                else {
                  param_2 = *(float *)(*(long *)(lVar2 + 0x20) + 0xa0);
                }
                fStack_78 = param_2;
                uVar6 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&fStack_78);
                if (*(long *)(lVar2 + 0x20) == 0) {
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                }
                else {
                  param_3 = *(float *)(*(long *)(lVar2 + 0x20) + 0xa4);
                }
                fStack_7c = param_3;
                uVar7 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&fStack_7c);
                lVar2 = /*System.String$$Format*/ func_0x029bdf30(/*STR('Velocity={0:F2},{1:F2},{2:F2} ')*/ uRam0000000003d760d0,uVar4,uVar6,uVar7,0);
                if ((lVar2 != 0) &&
                   (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar9 + 0x40)), lVar3 == 0))
                goto code_r0x01680440;
                uVar13 = *(uint *)(plVar9 + 3);
                if (5 < uVar13) {
                  plVar9[9] = lVar2;
                  if (/*STR('}}')*/ lRam0000000003d7d1e8 != 0) {
                    lVar2 = func_0x00f78adc(/*STR('}}')*/ lRam0000000003d7d1e8,*(undefined8 *)(*plVar9 + 0x40));
                    if (lVar2 == 0) goto code_r0x01680440;
                    uVar13 = *(uint *)(plVar9 + 3);
                  }
                  if (6 < uVar13) {
                    plVar9[10] = /*STR('}}')*/ lRam0000000003d7d1e8;
                    plVar9 = (long *)/*System.String$$Concat*/ func_0x029cfadc(plVar9,0);
                    return plVar9;
                  }
                }
              }
            }
          }
        }
      }
      uVar4 = func_0x00f78b24();
    }
    else {
code_r0x01680440:
      uVar4 = func_0x00f78b14();
    }
    func_0x00f78ac0(uVar4,0);
  }
  lVar2 = func_0x00f78af4();
  puStack_88 = &Core_Services_Replicator__Start;
  puStack_90 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb59f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d35530);
    func_0x00f78a20(0x3d1c8d0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d5c480);
    func_0x00f78a20(0x3d63b80);
    func_0x00f78a20(0x3d28928);
    func_0x00f78a20(0x3d25710);
    bRam0000000003eb59f0 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8) == 0) {
    if (((*(ushort *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar14 = *(undefined8 **)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8);
    lVar3 = puVar14[1];
    if (lVar3 == 0) {
      if (((*(ushort *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar14 = *(undefined8 **)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8);
      }
      uVar4 = *puVar14;
      lVar3 = func_0x00f78aec(/*System.Func<bool>_TypeInfo*/ uRam0000000003d1c8d0);
      /*System.Func<bool>$$.ctor*/ func_0x02163070(lVar3,uVar4,uRam0000000003d63b80,uRam0000000003d35530);
      *(long *)(*(long *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8) + 8) = lVar3;
    }
    if (((*(ushort *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UniRx.Async.UniTask$$WaitUntil*/ func_0x02fa1ff4(lVar3,4,0,0);
    uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar4,lVar2,uRam0000000003d5c480,0);
    if ((bRam0000000003ebc80e & 1) == 0) {
      func_0x00f78a20(0x3d52108,uVar4,0);
      bRam0000000003ebc80e = 1;
    }
    puStack_d8 = (undefined *)0x0;
    ppuStack_e0 = (undefined1 **)0xffffffff;
    lStack_f0 = 0;
    lStack_e8 = 0;
    /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Start<UniTaskExtensions.<ContinueWith>d__29>*/ func_0x0181e1cc(&lStack_f0,&ppuStack_e0,uRam0000000003d52108);
    plVar9 = (long *)/*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$get_Task*/ func_0x02f99570((ulong)&ppuStack_e0 | 8);
    return plVar9;
  }
  lVar3 = 0x3d22970;
  if ((bRam0000000003eb59f1 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d24408);
    func_0x00f78a20(0x3d5c488);
    func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f1 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  *(long *)(lVar2 + 0x18) = lVar5;
  if (lVar5 == 0) {
code_r0x01680860:
    func_0x00f78af4();
code_r0x01680864:
    puVar15 = &Core_Services_ReplicatorProviderEsq___ctor;
    auVar19 = func_0x00f78e5c();
  }
  else {
    lVar3 = *(long *)(lVar5 + 0x148);
    uVar4 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
    /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar4,lVar2,uRam0000000003d5c488,puRam0000000003d2a5c8);
    plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar3,uVar4,0);
    if ((plVar9 != (long *)0x0) && (*plVar9 != /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) goto code_r0x01680864;
    *(long **)(lVar5 + 0x148) = plVar9;
    lVar5 = *(long *)(lVar2 + 0x18);
    if (lVar5 == 0) goto code_r0x01680860;
    lVar3 = *(long *)(lVar5 + 0x140);
    uVar4 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,lVar2,uRam0000000003d5c490,puRam0000000003d2a2a8);
    plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar3,uVar4,0);
    if ((plVar9 != (long *)0x0) && (*plVar9 != /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) goto code_r0x01680864;
    *(long **)(lVar5 + 0x140) = plVar9;
    lVar3 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq_TypeInfo*/ uRam0000000003d24408);
    auVar19._8_8_ = lVar2;
    auVar19._0_8_ = lVar3;
    puVar15 = &UNK_01680844;
  }
  lVar10 = auVar19._8_8_;
  lVar5 = auVar19._0_8_;
  lStack_f0 = lVar3;
  lStack_e8 = lVar2;
  ppuStack_e0 = &puStack_90;
  puStack_d8 = puVar15;
  if ((bRam0000000003eb5a02 & 1) == 0) {
    func_0x00f78a20(0x3d28938);
    func_0x00f78a20(0x3d57978);
    func_0x00f78a20(0x3d578f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d243f8);
    bRam0000000003eb5a02 = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(lVar5,0);
  *(long *)(lVar5 + 0x28) = lVar10;
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  if ((lVar10 != 0) && (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0), lVar2 != 0)) {
    uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar2,uRam0000000003d578f0);
    *(undefined8 *)(lVar5 + 0x10) = uVar4;
    lVar2 = func_0x00f78aec(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ uRam0000000003d243f8);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar2,0);
    *(long *)(lVar5 + 0x18) = lVar2;
    lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0);
    if ((lVar3 != 0) && (uVar4 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar3,uRam0000000003d57978), lVar2 != 0)) {
      /*Core.Services.ReplicatorFloorClampEsq$$Init*/ func_0x016820f8(lVar2,uVar4);
      uVar4 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq.Extrapolator3_TypeInfo*/ uRam0000000003d28938);
      plVar9 = (long *)/*Core.Services.ReplicatorProviderEsq.Extrapolator3$$.ctor*/ func_0x01682e70();
      *(undefined8 *)(lVar5 + 0xf8) = uVar4;
      return plVar9;
    }
  }
  plVar8 = (long *)func_0x00f78af4();
  plVar9 = plVar8;
  if ((bRam0000000003eb59f2 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d5c488);
    plVar9 = (long *)func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f2 = 1;
  }
  lVar2 = plVar8[3];
  if (lVar2 == 0) {
    return plVar9;
  }
  uVar6 = *(undefined8 *)(lVar2 + 0x148);
  uVar4 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
  puVar12 = puRam0000000003d2a5c8;
  /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar4,plVar8,uRam0000000003d5c488);
  puVar11 = (undefined4 *)0x0;
  plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar4);
  if ((plVar9 == (long *)0x0) || (*plVar9 == /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) {
    *(long **)(lVar2 + 0x148) = plVar9;
    lVar2 = plVar8[3];
    if (lVar2 == 0) goto code_r0x01680b58;
    uVar6 = *(undefined8 *)(lVar2 + 0x140);
    uVar4 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    puVar12 = puRam0000000003d2a2a8;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,plVar8,uRam0000000003d5c490);
    puVar11 = (undefined4 *)0x0;
    plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar4);
    if ((plVar9 == (long *)0x0) || (*plVar9 == /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) {
      *(long **)(lVar2 + 0x140) = plVar9;
      plVar8[3] = 0;
      return plVar9;
    }
  }
  func_0x00f78e5c();
code_r0x01680b58:
  lVar2 = func_0x00f78af4();
  iVar1 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(lVar2,0);
  if (iVar1 == 0) {
    return (long *)0x0;
  }
  lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar2,0);
  if (lVar3 != 0) {
    iVar1 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar3,0);
    if (iVar1 == 0) {
      return (long *)0x0;
    }
    if (*(char *)(lVar2 + 0x44) == '\0') {
      return (long *)0x0;
    }
    plVar9 = *(long **)(lVar2 + 0x18);
    if (plVar9 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar9 + 0x928))(plVar9,*(undefined8 *)(*plVar9 + 0x930));
      if (iVar1 == 0) {
        return (long *)0x0;
      }
      plVar9 = *(long **)(lVar2 + 0x18);
      if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01680c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar9 = (long *)(**(code **)(*plVar9 + 0x2e8))(plVar9,*(undefined8 *)(*plVar9 + 0x2f0));
        return plVar9;
      }
    }
  }
  auVar19 = func_0x00f78af4();
  lVar2 = auVar19._0_8_;
  uVar4 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar2 + 200),*(undefined4 *)(lVar2 + 0xcc),
                          *(undefined4 *)(lVar2 + 0xd0),0x44fa0000);
  *auVar19._8_8_ = (int)uVar4;
  *(short *)(auVar19._8_8_ + 1) = (short)((ulong)uVar4 >> 0x20);
  uVar4 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar2 + 0xd4),*(undefined4 *)(lVar2 + 0xd8),
                          *(undefined4 *)(lVar2 + 0xdc),0x42c80000);
  *puVar11 = (int)uVar4;
  *(short *)(puVar11 + 1) = (short)((ulong)uVar4 >> 0x20);
  plVar9 = (long *)/*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681f2c(*(undefined4 *)(lVar2 + 0xe0),*(undefined4 *)(lVar2 + 0xe4),
                                   *(undefined4 *)(lVar2 + 0xe8),*(undefined4 *)(lVar2 + 0xec),
                                   0x3f800000);
  *puVar12 = (int)plVar9;
  return plVar9;
}



// ============================================================
// RVA: 0x1680028 | Core.Services.Replicator.ToString
// ============================================================

/* WARNING: Possible PIC construction at 0x01680840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01680b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01680844) */
/* WARNING: Removing unreachable block (ram,0x01680b78) */
/* WARNING: Removing unreachable block (ram,0x01680b7c) */
/* WARNING: Removing unreachable block (ram,0x01680b94) */
/* WARNING: Removing unreachable block (ram,0x01680be8) */
/* WARNING: Removing unreachable block (ram,0x01680ba8) */
/* WARNING: Removing unreachable block (ram,0x01680bd8) */

long * Core_Services_Replicator__ToString
                 (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 uVar17;
  undefined1 extraout_b0;
  undefined1 uVar18;
  undefined1 extraout_var;
  undefined1 uVar19;
  undefined1 extraout_var_00;
  undefined1 uVar20;
  undefined1 extraout_var_01;
  undefined1 auVar21 [16];
  long lStack_d0;
  long lStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined2 uStack_48;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined4 uStack_44;
  
  if ((bRam0000000003eb59ef & 1) == 0) {
    func_0x00f78a20(0x3d20260);
    func_0x00f78a20(0x3d22900);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d24ee8);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d73060);
    func_0x00f78a20(0x3d73048);
    func_0x00f78a20(0x3d73038);
    func_0x00f78a20(0x3d73028);
    func_0x00f78a20(0x3d7d1e8);
    func_0x00f78a20(0x3d760d0);
    func_0x00f78a20(0x3d7d100);
    bRam0000000003eb59ef = 1;
  }
  plVar3 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
  if (plVar3 != (long *)0x0) {
    if ((/*STR('{{')*/ lRam0000000003d7d100 == 0) ||
       (lVar4 = func_0x00f78adc(/*STR('{{')*/ lRam0000000003d7d100,*(undefined8 *)(*plVar3 + 0x40)), lVar4 != 0))
    {
      if ((int)plVar3[3] != 0) {
        plVar3[4] = /*STR('{{')*/ lRam0000000003d7d100;
        uStack_44 = *(undefined4 *)(param_4 + 0x40);
        uVar5 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_44);
        lVar4 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncId={0} ')*/ uRam0000000003d73038,uVar5,0);
        if ((lVar4 != 0) &&
           (lVar6 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
        goto LAB_01680440;
        if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
          plVar3[5] = lVar4;
          uStack_45 = *(undefined1 *)(param_4 + 0x44);
          uVar5 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&uStack_45);
          lVar4 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncOwner={0} ')*/ uRam0000000003d73060,uVar5,0);
          if ((lVar4 != 0) &&
             (lVar6 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
          goto LAB_01680440;
          if (2 < *(uint *)(plVar3 + 3)) {
            plVar3[6] = lVar4;
            uStack_46 = *(undefined1 *)(param_4 + 0x45);
            uVar5 = func_0x00f78ae0(/*Core.Services.SyncCategory_TypeInfo*/ uRam0000000003d24ee8,&uStack_46);
            lVar4 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncCategory={0} ')*/ uRam0000000003d73028,uVar5,0);
            if ((lVar4 != 0) &&
               (lVar6 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
            goto LAB_01680440;
            if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
              plVar3[7] = lVar4;
              uStack_48 = *(undefined2 *)(param_4 + 0x46);
              uVar5 = func_0x00f78ae0(/*short_TypeInfo*/ uRam0000000003d22900,&uStack_48);
              uStack_4c = (uint)*(byte *)(param_4 + 0x46);
              uVar7 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_4c);
              iStack_50 = (int)*(char *)(param_4 + 0x47);
              uVar8 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_50);
              lVar4 = /*System.String$$Format*/ func_0x029bdf30(/*STR('SyncInstanceId={0}({1}:{2}) ')*/ uRam0000000003d73048,uVar5,uVar7,uVar8,0);
              if ((lVar4 != 0) &&
                 (lVar6 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
              goto LAB_01680440;
              if (4 < *(uint *)(plVar3 + 3)) {
                plVar3[8] = lVar4;
                if (*(long *)(param_4 + 0x20) == 0) {
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                  uVar17 = extraout_b0;
                  uVar18 = extraout_var;
                  uVar19 = extraout_var_00;
                  uVar20 = extraout_var_01;
                }
                else {
                  uVar1 = *(undefined4 *)(*(long *)(param_4 + 0x20) + 0x9c);
                  uVar17 = (undefined1)uVar1;
                  uVar18 = (undefined1)((uint)uVar1 >> 8);
                  uVar19 = (undefined1)((uint)uVar1 >> 0x10);
                  uVar20 = (undefined1)((uint)uVar1 >> 0x18);
                }
                uStack_54 = CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
                uVar5 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&uStack_54);
                if (*(long *)(param_4 + 0x20) == 0) {
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                }
                else {
                  param_2 = *(undefined4 *)(*(long *)(param_4 + 0x20) + 0xa0);
                }
                uStack_58 = param_2;
                uVar7 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&uStack_58);
                if (*(long *)(param_4 + 0x20) == 0) {
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                }
                else {
                  param_3 = *(undefined4 *)(*(long *)(param_4 + 0x20) + 0xa4);
                }
                uStack_5c = param_3;
                uVar8 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&uStack_5c);
                lVar4 = /*System.String$$Format*/ func_0x029bdf30(/*STR('Velocity={0:F2},{1:F2},{2:F2} ')*/ uRam0000000003d760d0,uVar5,uVar7,uVar8,0);
                if ((lVar4 != 0) &&
                   (lVar6 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
                goto LAB_01680440;
                uVar13 = *(uint *)(plVar3 + 3);
                if (5 < uVar13) {
                  plVar3[9] = lVar4;
                  if (/*STR('}}')*/ lRam0000000003d7d1e8 != 0) {
                    lVar4 = func_0x00f78adc(/*STR('}}')*/ lRam0000000003d7d1e8,*(undefined8 *)(*plVar3 + 0x40));
                    if (lVar4 == 0) goto LAB_01680440;
                    uVar13 = *(uint *)(plVar3 + 3);
                  }
                  if (6 < uVar13) {
                    plVar3[10] = /*STR('}}')*/ lRam0000000003d7d1e8;
                    plVar3 = (long *)/*System.String$$Concat*/ func_0x029cfadc(plVar3,0);
                    return plVar3;
                  }
                }
              }
            }
          }
        }
      }
      uVar5 = func_0x00f78b24();
    }
    else {
LAB_01680440:
      uVar5 = func_0x00f78b14();
    }
    func_0x00f78ac0(uVar5,0);
  }
  lVar4 = func_0x00f78af4();
  puStack_68 = &Core_Services_Replicator__Start;
  puStack_70 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb59f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d35530);
    func_0x00f78a20(0x3d1c8d0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d5c480);
    func_0x00f78a20(0x3d63b80);
    func_0x00f78a20(0x3d28928);
    func_0x00f78a20(0x3d25710);
    bRam0000000003eb59f0 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8) == 0) {
    if (((*(ushort *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar14 = *(undefined8 **)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8);
    lVar6 = puVar14[1];
    if (lVar6 == 0) {
      if (((*(ushort *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar14 = *(undefined8 **)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8);
      }
      uVar5 = *puVar14;
      lVar6 = func_0x00f78aec(/*System.Func<bool>_TypeInfo*/ uRam0000000003d1c8d0);
      /*System.Func<bool>$$.ctor*/ func_0x02163070(lVar6,uVar5,uRam0000000003d63b80,uRam0000000003d35530);
      *(long *)(*(long *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8) + 8) = lVar6;
    }
    if (((*(ushort *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UniRx.Async.UniTask$$WaitUntil*/ func_0x02fa1ff4(lVar6,4,0,0);
    uVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar5,lVar4,uRam0000000003d5c480,0);
    if ((bRam0000000003ebc80e & 1) == 0) {
      func_0x00f78a20(0x3d52108,uVar5,0);
      bRam0000000003ebc80e = 1;
    }
    puStack_b8 = (undefined *)0x0;
    ppuStack_c0 = (undefined1 **)0xffffffff;
    lStack_d0 = 0;
    lStack_c8 = 0;
    /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Start<UniTaskExtensions.<ContinueWith>d__29>*/ func_0x0181e1cc(&lStack_d0,&ppuStack_c0,uRam0000000003d52108);
    plVar3 = (long *)/*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$get_Task*/ func_0x02f99570((ulong)&ppuStack_c0 | 8);
    return plVar3;
  }
  lVar6 = 0x3d22970;
  if ((bRam0000000003eb59f1 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d24408);
    func_0x00f78a20(0x3d5c488);
    func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f1 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar15 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  *(long *)(lVar4 + 0x18) = lVar15;
  if (lVar15 == 0) {
code_r0x01680860:
    func_0x00f78af4();
code_r0x01680864:
    puVar16 = &Core_Services_ReplicatorProviderEsq___ctor;
    auVar21 = func_0x00f78e5c();
  }
  else {
    lVar6 = *(long *)(lVar15 + 0x148);
    uVar5 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
    /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar5,lVar4,uRam0000000003d5c488,puRam0000000003d2a5c8);
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar6,uVar5,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) goto code_r0x01680864;
    *(long **)(lVar15 + 0x148) = plVar3;
    lVar15 = *(long *)(lVar4 + 0x18);
    if (lVar15 == 0) goto code_r0x01680860;
    lVar6 = *(long *)(lVar15 + 0x140);
    uVar5 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,lVar4,uRam0000000003d5c490,puRam0000000003d2a2a8);
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar6,uVar5,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) goto code_r0x01680864;
    *(long **)(lVar15 + 0x140) = plVar3;
    lVar6 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq_TypeInfo*/ uRam0000000003d24408);
    auVar21._8_8_ = lVar4;
    auVar21._0_8_ = lVar6;
    puVar16 = &UNK_01680844;
  }
  lVar10 = auVar21._8_8_;
  lVar15 = auVar21._0_8_;
  lStack_d0 = lVar6;
  lStack_c8 = lVar4;
  ppuStack_c0 = &puStack_70;
  puStack_b8 = puVar16;
  if ((bRam0000000003eb5a02 & 1) == 0) {
    func_0x00f78a20(0x3d28938);
    func_0x00f78a20(0x3d57978);
    func_0x00f78a20(0x3d578f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d243f8);
    bRam0000000003eb5a02 = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(lVar15,0);
  *(long *)(lVar15 + 0x28) = lVar10;
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  if ((lVar10 != 0) && (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0), lVar4 != 0)) {
    uVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar4,uRam0000000003d578f0);
    *(undefined8 *)(lVar15 + 0x10) = uVar5;
    lVar4 = func_0x00f78aec(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ uRam0000000003d243f8);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar4,0);
    *(long *)(lVar15 + 0x18) = lVar4;
    lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0);
    if ((lVar6 != 0) && (uVar5 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar6,uRam0000000003d57978), lVar4 != 0)) {
      /*Core.Services.ReplicatorFloorClampEsq$$Init*/ func_0x016820f8(lVar4,uVar5);
      uVar5 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq.Extrapolator3_TypeInfo*/ uRam0000000003d28938);
      plVar3 = (long *)/*Core.Services.ReplicatorProviderEsq.Extrapolator3$$.ctor*/ func_0x01682e70();
      *(undefined8 *)(lVar15 + 0xf8) = uVar5;
      return plVar3;
    }
  }
  plVar9 = (long *)func_0x00f78af4();
  plVar3 = plVar9;
  if ((bRam0000000003eb59f2 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d5c488);
    plVar3 = (long *)func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f2 = 1;
  }
  lVar4 = plVar9[3];
  if (lVar4 == 0) {
    return plVar3;
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x148);
  uVar5 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
  puVar12 = puRam0000000003d2a5c8;
  /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar5,plVar9,uRam0000000003d5c488);
  puVar11 = (undefined4 *)0x0;
  plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar5);
  if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) {
    *(long **)(lVar4 + 0x148) = plVar3;
    lVar4 = plVar9[3];
    if (lVar4 == 0) goto code_r0x01680b58;
    uVar7 = *(undefined8 *)(lVar4 + 0x140);
    uVar5 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    puVar12 = puRam0000000003d2a2a8;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,plVar9,uRam0000000003d5c490);
    puVar11 = (undefined4 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar5);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) {
      *(long **)(lVar4 + 0x140) = plVar3;
      plVar9[3] = 0;
      return plVar3;
    }
  }
  func_0x00f78e5c();
code_r0x01680b58:
  lVar4 = func_0x00f78af4();
  iVar2 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(lVar4,0);
  if (iVar2 == 0) {
    return (long *)0x0;
  }
  lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0);
  if (lVar6 != 0) {
    iVar2 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar6,0);
    if (iVar2 == 0) {
      return (long *)0x0;
    }
    if (*(char *)(lVar4 + 0x44) == '\0') {
      return (long *)0x0;
    }
    plVar3 = *(long **)(lVar4 + 0x18);
    if (plVar3 != (long *)0x0) {
      iVar2 = (**(code **)(*plVar3 + 0x928))(plVar3,*(undefined8 *)(*plVar3 + 0x930));
      if (iVar2 == 0) {
        return (long *)0x0;
      }
      plVar3 = *(long **)(lVar4 + 0x18);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01680c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
        return plVar3;
      }
    }
  }
  auVar21 = func_0x00f78af4();
  lVar4 = auVar21._0_8_;
  uVar5 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4((char)*(undefined4 *)(lVar4 + 200),*(undefined4 *)(lVar4 + 0xcc),
                          *(undefined4 *)(lVar4 + 0xd0),0x44fa0000);
  *auVar21._8_8_ = (int)uVar5;
  *(short *)(auVar21._8_8_ + 1) = (short)((ulong)uVar5 >> 0x20);
  uVar5 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4((char)*(undefined4 *)(lVar4 + 0xd4),*(undefined4 *)(lVar4 + 0xd8),
                          *(undefined4 *)(lVar4 + 0xdc),0x42c80000);
  *puVar11 = (int)uVar5;
  *(short *)(puVar11 + 1) = (short)((ulong)uVar5 >> 0x20);
  plVar3 = (long *)/*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681f2c((char)*(undefined4 *)(lVar4 + 0xe0),*(undefined4 *)(lVar4 + 0xe4)
                                   ,*(undefined4 *)(lVar4 + 0xe8),*(undefined4 *)(lVar4 + 0xec),
                                   0x3f800000);
  *puVar12 = (int)plVar3;
  return plVar3;
}



// ============================================================
// RVA: 0x1680450 | Core.Services.Replicator.Start
// ============================================================

/* WARNING: Possible PIC construction at 0x01680840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01680b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01680844) */
/* WARNING: Removing unreachable block (ram,0x01680b78) */
/* WARNING: Removing unreachable block (ram,0x01680b7c) */
/* WARNING: Removing unreachable block (ram,0x01680b94) */
/* WARNING: Removing unreachable block (ram,0x01680be8) */
/* WARNING: Removing unreachable block (ram,0x01680ba8) */
/* WARNING: Removing unreachable block (ram,0x01680bd8) */

long * Core_Services_Replicator__Start(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 auVar13 [16];
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb59f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d35530);
    func_0x00f78a20(0x3d1c8d0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d5c480);
    func_0x00f78a20(0x3d63b80);
    func_0x00f78a20(0x3d28928);
    func_0x00f78a20(0x3d25710);
    bRam0000000003eb59f0 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8) == 0) {
    if (((*(ushort *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar8 = *(undefined8 **)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8);
    lVar9 = puVar8[1];
    if (lVar9 == 0) {
      if (((*(ushort *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar8 = *(undefined8 **)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8);
      }
      uVar2 = *puVar8;
      lVar9 = func_0x00f78aec(/*System.Func<bool>_TypeInfo*/ uRam0000000003d1c8d0);
      /*System.Func<bool>$$.ctor*/ func_0x02163070(lVar9,uVar2,uRam0000000003d63b80,uRam0000000003d35530);
      *(long *)(*(long *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8) + 8) = lVar9;
    }
    if (((*(ushort *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UniRx.Async.UniTask$$WaitUntil*/ func_0x02fa1ff4(lVar9,4,0,0);
    uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar2,param_1,uRam0000000003d5c480,0);
    if ((bRam0000000003ebc80e & 1) == 0) {
      func_0x00f78a20(0x3d52108,uVar2,0);
      bRam0000000003ebc80e = 1;
    }
    puStack_58 = (undefined *)0x0;
    puStack_60 = (undefined1 *)0xffffffff;
    lStack_70 = 0;
    lStack_68 = 0;
    /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Start<UniTaskExtensions.<ContinueWith>d__29>*/ func_0x0181e1cc(&lStack_70,&puStack_60,uRam0000000003d52108);
    plVar3 = (long *)/*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$get_Task*/ func_0x02f99570((ulong)&puStack_60 | 8);
    return plVar3;
  }
  lVar9 = 0x3d22970;
  if ((bRam0000000003eb59f1 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d24408);
    func_0x00f78a20(0x3d5c488);
    func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f1 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar11 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  *(long *)(param_1 + 0x18) = lVar11;
  if (lVar11 == 0) {
code_r0x01680860:
    func_0x00f78af4();
code_r0x01680864:
    puVar12 = &Core_Services_ReplicatorProviderEsq___ctor;
    auVar13 = func_0x00f78e5c();
    lVar11 = auVar13._8_8_;
    lVar4 = auVar13._0_8_;
  }
  else {
    lVar9 = *(long *)(lVar11 + 0x148);
    uVar2 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
    /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar2,param_1,uRam0000000003d5c488,puRam0000000003d2a5c8);
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,uVar2,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) goto code_r0x01680864;
    *(long **)(lVar11 + 0x148) = plVar3;
    lVar11 = *(long *)(param_1 + 0x18);
    if (lVar11 == 0) goto code_r0x01680860;
    lVar9 = *(long *)(lVar11 + 0x140);
    uVar2 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d5c490,puRam0000000003d2a2a8);
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,uVar2,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) goto code_r0x01680864;
    *(long **)(lVar11 + 0x140) = plVar3;
    lVar4 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq_TypeInfo*/ uRam0000000003d24408);
    puVar12 = &UNK_01680844;
    lVar11 = param_1;
    lVar9 = lVar4;
  }
  lStack_70 = lVar9;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar12;
  if ((bRam0000000003eb5a02 & 1) == 0) {
    func_0x00f78a20(0x3d28938);
    func_0x00f78a20(0x3d57978);
    func_0x00f78a20(0x3d578f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d243f8);
    bRam0000000003eb5a02 = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(lVar4,0);
  *(long *)(lVar4 + 0x28) = lVar11;
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  if ((lVar11 != 0) && (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar11,0), lVar9 != 0)) {
    uVar2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar9,uRam0000000003d578f0);
    *(undefined8 *)(lVar4 + 0x10) = uVar2;
    lVar9 = func_0x00f78aec(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ uRam0000000003d243f8);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar9,0);
    *(long *)(lVar4 + 0x18) = lVar9;
    lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar11,0);
    if ((lVar11 != 0) && (uVar2 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar11,uRam0000000003d57978), lVar9 != 0)) {
      /*Core.Services.ReplicatorFloorClampEsq$$Init*/ func_0x016820f8(lVar9,uVar2);
      uVar2 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq.Extrapolator3_TypeInfo*/ uRam0000000003d28938);
      plVar3 = (long *)/*Core.Services.ReplicatorProviderEsq.Extrapolator3$$.ctor*/ func_0x01682e70();
      *(undefined8 *)(lVar4 + 0xf8) = uVar2;
      return plVar3;
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  plVar3 = plVar5;
  if ((bRam0000000003eb59f2 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d5c488);
    plVar3 = (long *)func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f2 = 1;
  }
  lVar9 = plVar5[3];
  if (lVar9 == 0) {
    return plVar3;
  }
  uVar10 = *(undefined8 *)(lVar9 + 0x148);
  uVar2 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
  puVar7 = puRam0000000003d2a5c8;
  /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar2,plVar5,uRam0000000003d5c488);
  puVar6 = (undefined4 *)0x0;
  plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar2);
  if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) {
    *(long **)(lVar9 + 0x148) = plVar3;
    lVar9 = plVar5[3];
    if (lVar9 == 0) goto code_r0x01680b58;
    uVar10 = *(undefined8 *)(lVar9 + 0x140);
    uVar2 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    puVar7 = puRam0000000003d2a2a8;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,plVar5,uRam0000000003d5c490);
    puVar6 = (undefined4 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar2);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) {
      *(long **)(lVar9 + 0x140) = plVar3;
      plVar5[3] = 0;
      return plVar3;
    }
  }
  func_0x00f78e5c();
code_r0x01680b58:
  lVar9 = func_0x00f78af4();
  iVar1 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(lVar9,0);
  if (iVar1 == 0) {
    return (long *)0x0;
  }
  lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0);
  if (lVar11 != 0) {
    iVar1 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar11,0);
    if (iVar1 == 0) {
      return (long *)0x0;
    }
    if (*(char *)(lVar9 + 0x44) == '\0') {
      return (long *)0x0;
    }
    plVar3 = *(long **)(lVar9 + 0x18);
    if (plVar3 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar3 + 0x928))(plVar3,*(undefined8 *)(*plVar3 + 0x930));
      if (iVar1 == 0) {
        return (long *)0x0;
      }
      plVar3 = *(long **)(lVar9 + 0x18);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01680c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
        return plVar3;
      }
    }
  }
  auVar13 = func_0x00f78af4();
  lVar9 = auVar13._0_8_;
  uVar2 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4((char)*(undefined4 *)(lVar9 + 200),*(undefined4 *)(lVar9 + 0xcc),
                          *(undefined4 *)(lVar9 + 0xd0),0x44fa0000);
  *auVar13._8_8_ = (int)uVar2;
  *(short *)(auVar13._8_8_ + 1) = (short)((ulong)uVar2 >> 0x20);
  uVar2 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4((char)*(undefined4 *)(lVar9 + 0xd4),*(undefined4 *)(lVar9 + 0xd8),
                          *(undefined4 *)(lVar9 + 0xdc),0x42c80000);
  *puVar6 = (int)uVar2;
  *(short *)(puVar6 + 1) = (short)((ulong)uVar2 >> 0x20);
  plVar3 = (long *)/*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681f2c((char)*(undefined4 *)(lVar9 + 0xe0),*(undefined4 *)(lVar9 + 0xe4)
                                   ,*(undefined4 *)(lVar9 + 0xe8),*(undefined4 *)(lVar9 + 0xec),
                                   0x3f800000);
  *puVar7 = (int)plVar3;
  return plVar3;
}



// ============================================================
// RVA: 0x1680664 | Core.Services.Replicator.Initialise
// ============================================================

/* WARNING: Possible PIC construction at 0x01680840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01680b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01680844) */
/* WARNING: Removing unreachable block (ram,0x01680b78) */
/* WARNING: Removing unreachable block (ram,0x01680b7c) */
/* WARNING: Removing unreachable block (ram,0x01680b94) */
/* WARNING: Removing unreachable block (ram,0x01680be8) */
/* WARNING: Removing unreachable block (ram,0x01680ba8) */
/* WARNING: Removing unreachable block (ram,0x01680bd8) */

long * Core_Services_Replicator__Initialise(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000003eb59f1 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d24408);
    func_0x00f78a20(0x3d5c488);
    func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f1 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  *(long *)(param_1 + 0x18) = lVar10;
  if (lVar10 == 0) {
LAB_01680860:
    func_0x00f78af4();
LAB_01680864:
    auVar11 = func_0x00f78e5c();
    param_1 = auVar11._8_8_;
    lVar10 = auVar11._0_8_;
  }
  else {
    uVar9 = *(undefined8 *)(lVar10 + 0x148);
    uVar2 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
    /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar2,param_1,uRam0000000003d5c488,puRam0000000003d2a5c8);
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar9,uVar2,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) goto LAB_01680864;
    *(long **)(lVar10 + 0x148) = plVar3;
    lVar10 = *(long *)(param_1 + 0x18);
    if (lVar10 == 0) goto LAB_01680860;
    uVar9 = *(undefined8 *)(lVar10 + 0x140);
    uVar2 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d5c490,puRam0000000003d2a2a8);
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar9,uVar2,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) goto LAB_01680864;
    *(long **)(lVar10 + 0x140) = plVar3;
    lVar10 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq_TypeInfo*/ uRam0000000003d24408);
  }
  if ((bRam0000000003eb5a02 & 1) == 0) {
    func_0x00f78a20(0x3d28938);
    func_0x00f78a20(0x3d57978);
    func_0x00f78a20(0x3d578f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d243f8);
    bRam0000000003eb5a02 = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(lVar10,0);
  *(long *)(lVar10 + 0x28) = param_1;
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  if ((param_1 != 0) && (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0), lVar4 != 0)) {
    uVar2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar4,uRam0000000003d578f0);
    *(undefined8 *)(lVar10 + 0x10) = uVar2;
    lVar4 = func_0x00f78aec(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ uRam0000000003d243f8);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar4,0);
    *(long *)(lVar10 + 0x18) = lVar4;
    lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
    if ((lVar5 != 0) && (uVar2 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar5,uRam0000000003d57978), lVar4 != 0)) {
      /*Core.Services.ReplicatorFloorClampEsq$$Init*/ func_0x016820f8(lVar4,uVar2);
      uVar2 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq.Extrapolator3_TypeInfo*/ uRam0000000003d28938);
      plVar3 = (long *)/*Core.Services.ReplicatorProviderEsq.Extrapolator3$$.ctor*/ func_0x01682e70();
      *(undefined8 *)(lVar10 + 0xf8) = uVar2;
      return plVar3;
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  plVar3 = plVar6;
  if ((bRam0000000003eb59f2 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d5c488);
    plVar3 = (long *)func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f2 = 1;
  }
  lVar10 = plVar6[3];
  if (lVar10 == 0) {
    return plVar3;
  }
  uVar9 = *(undefined8 *)(lVar10 + 0x148);
  uVar2 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
  puVar8 = puRam0000000003d2a5c8;
  /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar2,plVar6,uRam0000000003d5c488);
  puVar7 = (undefined4 *)0x0;
  plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar2);
  if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) {
    *(long **)(lVar10 + 0x148) = plVar3;
    lVar10 = plVar6[3];
    if (lVar10 == 0) goto code_r0x01680b58;
    uVar9 = *(undefined8 *)(lVar10 + 0x140);
    uVar2 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    puVar8 = puRam0000000003d2a2a8;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,plVar6,uRam0000000003d5c490);
    puVar7 = (undefined4 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar2);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) {
      *(long **)(lVar10 + 0x140) = plVar3;
      plVar6[3] = 0;
      return plVar3;
    }
  }
  func_0x00f78e5c();
code_r0x01680b58:
  lVar10 = func_0x00f78af4();
  iVar1 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(lVar10,0);
  if (iVar1 == 0) {
    return (long *)0x0;
  }
  lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0);
  if (lVar4 != 0) {
    iVar1 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar4,0);
    if (iVar1 == 0) {
      return (long *)0x0;
    }
    if (*(char *)(lVar10 + 0x44) == '\0') {
      return (long *)0x0;
    }
    plVar3 = *(long **)(lVar10 + 0x18);
    if (plVar3 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar3 + 0x928))(plVar3,*(undefined8 *)(*plVar3 + 0x930));
      if (iVar1 == 0) {
        return (long *)0x0;
      }
      plVar3 = *(long **)(lVar10 + 0x18);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01680c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar3 = (long *)(**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
        return plVar3;
      }
    }
  }
  auVar11 = func_0x00f78af4();
  lVar10 = auVar11._0_8_;
  uVar2 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar10 + 200),*(undefined4 *)(lVar10 + 0xcc),
                          *(undefined4 *)(lVar10 + 0xd0),0x44fa0000);
  *auVar11._8_8_ = (int)uVar2;
  *(short *)(auVar11._8_8_ + 1) = (short)((ulong)uVar2 >> 0x20);
  uVar2 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar10 + 0xd4),*(undefined4 *)(lVar10 + 0xd8),
                          *(undefined4 *)(lVar10 + 0xdc),0x42c80000);
  *puVar7 = (int)uVar2;
  *(short *)(puVar7 + 1) = (short)((ulong)uVar2 >> 0x20);
  plVar3 = (long *)/*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681f2c(*(undefined4 *)(lVar10 + 0xe0),*(undefined4 *)(lVar10 + 0xe4),
                                   *(undefined4 *)(lVar10 + 0xe8),*(undefined4 *)(lVar10 + 0xec),
                                   0x3f800000);
  *puVar8 = (int)plVar3;
  return plVar3;
}



// ============================================================
// RVA: 0x16809f0 | Core.Services.Replicator.OnDestroy
// ============================================================

/* WARNING: Possible PIC construction at 0x01680b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01680b78) */
/* WARNING: Removing unreachable block (ram,0x01680b7c) */
/* WARNING: Removing unreachable block (ram,0x01680b94) */
/* WARNING: Removing unreachable block (ram,0x01680be8) */
/* WARNING: Removing unreachable block (ram,0x01680ba8) */
/* WARNING: Removing unreachable block (ram,0x01680bd8) */

long * Core_Services_Replicator__OnDestroy(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  plVar2 = param_1;
  if ((bRam0000000003eb59f2 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d5c488);
    plVar2 = (long *)func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f2 = 1;
  }
  lVar8 = param_1[3];
  if (lVar8 == 0) {
    return plVar2;
  }
  uVar7 = *(undefined8 *)(lVar8 + 0x148);
  uVar3 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
  puVar6 = puRam0000000003d2a5c8;
  /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar3,param_1,uRam0000000003d5c488);
  puVar5 = (undefined4 *)0x0;
  plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar3);
  if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) {
    *(long **)(lVar8 + 0x148) = plVar2;
    lVar8 = param_1[3];
    if (lVar8 == 0) goto LAB_01680b58;
    uVar7 = *(undefined8 *)(lVar8 + 0x140);
    uVar3 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    puVar6 = puRam0000000003d2a2a8;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,param_1,uRam0000000003d5c490);
    puVar5 = (undefined4 *)0x0;
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar7,uVar3);
    if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) {
      *(long **)(lVar8 + 0x140) = plVar2;
      param_1[3] = 0;
      return plVar2;
    }
  }
  func_0x00f78e5c();
LAB_01680b58:
  lVar8 = func_0x00f78af4();
  iVar1 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(lVar8,0);
  if (iVar1 == 0) {
    return (long *)0x0;
  }
  lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0);
  if (lVar4 != 0) {
    iVar1 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar4,0);
    if (iVar1 == 0) {
      return (long *)0x0;
    }
    if (*(char *)(lVar8 + 0x44) == '\0') {
      return (long *)0x0;
    }
    plVar2 = *(long **)(lVar8 + 0x18);
    if (plVar2 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar2 + 0x928))(plVar2,*(undefined8 *)(*plVar2 + 0x930));
      if (iVar1 == 0) {
        return (long *)0x0;
      }
      plVar2 = *(long **)(lVar8 + 0x18);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01680c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar2 = (long *)(**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
        return plVar2;
      }
    }
  }
  auVar9 = func_0x00f78af4();
  lVar8 = auVar9._0_8_;
  uVar3 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar8 + 200),*(undefined4 *)(lVar8 + 0xcc),
                          *(undefined4 *)(lVar8 + 0xd0),0x44fa0000);
  *auVar9._8_8_ = (int)uVar3;
  *(short *)(auVar9._8_8_ + 1) = (short)((ulong)uVar3 >> 0x20);
  uVar3 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar8 + 0xd4),*(undefined4 *)(lVar8 + 0xd8),
                          *(undefined4 *)(lVar8 + 0xdc),0x42c80000);
  *puVar5 = (int)uVar3;
  *(short *)(puVar5 + 1) = (short)((ulong)uVar3 >> 0x20);
  plVar2 = (long *)/*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681f2c(*(undefined4 *)(lVar8 + 0xe0),*(undefined4 *)(lVar8 + 0xe4),
                                   *(undefined4 *)(lVar8 + 0xe8),*(undefined4 *)(lVar8 + 0xec),
                                   0x3f800000);
  *puVar6 = (int)plVar2;
  return plVar2;
}



// ============================================================
// RVA: 0x1680b5c | Core.Services.Replicator.OnUpdateReplicatorData
// ============================================================

/* WARNING: Possible PIC construction at 0x01680b74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01680b78) */
/* WARNING: Removing unreachable block (ram,0x01680b7c) */
/* WARNING: Removing unreachable block (ram,0x01680b94) */
/* WARNING: Removing unreachable block (ram,0x01680be8) */
/* WARNING: Removing unreachable block (ram,0x01680ba8) */
/* WARNING: Removing unreachable block (ram,0x01680bd8) */

undefined8
Core_Services_Replicator__OnUpdateReplicatorData
          (long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  iVar1 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(param_1,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (lVar2 != 0) {
    iVar1 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar2,0);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x44) == '\0') {
      return 0;
    }
    plVar3 = *(long **)(param_1 + 0x18);
    if (plVar3 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar3 + 0x928))(plVar3,*(undefined8 *)(*plVar3 + 0x930));
      if (iVar1 == 0) {
        return 0;
      }
      plVar3 = *(long **)(param_1 + 0x18);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01680c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
        return uVar4;
      }
    }
  }
  auVar5 = func_0x00f78af4();
  lVar2 = auVar5._0_8_;
  uVar4 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar2 + 200),*(undefined4 *)(lVar2 + 0xcc),
                          *(undefined4 *)(lVar2 + 0xd0),0x44fa0000);
  *auVar5._8_8_ = (int)uVar4;
  *(short *)(auVar5._8_8_ + 1) = (short)((ulong)uVar4 >> 0x20);
  uVar4 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar2 + 0xd4),*(undefined4 *)(lVar2 + 0xd8),
                          *(undefined4 *)(lVar2 + 0xdc),0x42c80000);
  *param_3 = (int)uVar4;
  *(short *)(param_3 + 1) = (short)((ulong)uVar4 >> 0x20);
  uVar4 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681f2c(*(undefined4 *)(lVar2 + 0xe0),*(undefined4 *)(lVar2 + 0xe4),
                          *(undefined4 *)(lVar2 + 0xe8),*(undefined4 *)(lVar2 + 0xec),0x3f800000);
  *param_4 = (int)uVar4;
  return uVar4;
}



// ============================================================
// RVA: 0x1680bec | Core.Services.Replicator.ShouldSend
// ============================================================

undefined8
Core_Services_Replicator__ShouldSend
          (long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  iVar1 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(param_1,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (lVar2 != 0) {
    iVar1 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar2,0);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x44) == '\0') {
      return 0;
    }
    plVar3 = *(long **)(param_1 + 0x18);
    if (plVar3 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar3 + 0x928))(plVar3,*(undefined8 *)(*plVar3 + 0x930));
      if (iVar1 == 0) {
        return 0;
      }
      plVar3 = *(long **)(param_1 + 0x18);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01680c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
        return uVar4;
      }
    }
  }
  auVar5 = func_0x00f78af4();
  lVar2 = auVar5._0_8_;
  uVar4 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar2 + 200),*(undefined4 *)(lVar2 + 0xcc),
                          *(undefined4 *)(lVar2 + 0xd0),0x44fa0000);
  *auVar5._8_8_ = (int)uVar4;
  *(short *)(auVar5._8_8_ + 1) = (short)((ulong)uVar4 >> 0x20);
  uVar4 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar2 + 0xd4),*(undefined4 *)(lVar2 + 0xd8),
                          *(undefined4 *)(lVar2 + 0xdc),0x42c80000);
  *param_3 = (int)uVar4;
  *(short *)(param_3 + 1) = (short)((ulong)uVar4 >> 0x20);
  uVar4 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681f2c(*(undefined4 *)(lVar2 + 0xe0),*(undefined4 *)(lVar2 + 0xe4),
                          *(undefined4 *)(lVar2 + 0xe8),*(undefined4 *)(lVar2 + 0xec),0x3f800000);
  *param_4 = (int)uVar4;
  return uVar4;
}



// ============================================================
// RVA: 0x1680dfc | Core.Services.Replicator.ShouldReceive
// ============================================================

/* WARNING: Possible PIC construction at 0x01680ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x01680ea8) */
/* WARNING: Removing unreachable block (ram,0x01680eac) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc878) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */

ulong Core_Services_Replicator__ShouldReceive
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                long param_5,ulong param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 ****ppppuVar14;
  undefined *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 extraout_d0;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 ***pppuStack_120;
  undefined *puStack_118;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 uStack_f1;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (((long)CONCAT24(*(undefined2 *)(param_5 + 0x46),*(undefined4 *)(param_5 + 0x40)) |
      (long)*(char *)(param_5 + 0x45) << 0x30) != param_6) {
    return 0;
  }
  iVar3 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(param_5,0);
  if (iVar3 == 0) {
    return 0;
  }
  lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_5,0);
  if (lVar4 != 0) {
    if (pcRam0000000003ebf4c8 == (code *)0x0) {
      pcRam0000000003ebf4c8 = (code *)func_0x00f789d4("UnityEngine.GameObject::get_activeSelf()");
    }
                    /* WARNING: Could not recover jumptable at 0x0322efa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*pcRam0000000003ebf4c8)(lVar4);
    return uVar8;
  }
  lVar4 = func_0x00f78af4();
  puStack_28 = &Core_Services_Replicator__OnReplicatorStream;
  uVar5 = param_7;
  uVar9 = param_8;
  puStack_30 = &stack0xfffffffffffffff0;
  uVar8 = Core_Services_Replicator__ShouldReceive();
  if ((int)uVar8 == 0) {
    return uVar8;
  }
  auVar22._8_8_ = param_7;
  auVar22._0_8_ = *(long *)(lVar4 + 0x20);
  if (*(long *)(lVar4 + 0x20) == 0) {
    puVar15 = &Core_Services_ReplicatorProviderEsq__OnReplicatorStream;
    auVar22 = func_0x00f78af4();
  }
  else {
    puVar15 = &UNK_01680ea8;
    uVar5 = param_8;
    uVar9 = param_9;
  }
  uVar7 = auVar22._0_8_;
  uVar8 = uVar7;
  ppuStack_60 = &puStack_30;
  puStack_58 = puVar15;
  if ((bRam0000000003eb5a04 & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23f70);
    func_0x00f78a20(0x3d24ee8);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d25978);
    func_0x00f78a20(0x3d6dc78);
    func_0x00f78a20(0x3d73038);
    func_0x00f78a20(0x3d6dc68);
    func_0x00f78a20(0x3d71de0);
    func_0x00f78a20(0x3d73020);
    uVar8 = func_0x00f78a20(0x3d6dc70);
    bRam0000000003eb5a04 = 1;
  }
  if (*(long *)(uVar7 + 0x28) == 0) goto code_r0x01681324;
  if (*(char *)(*(long *)(uVar7 + 0x28) + 0x44) != '\0') {
    return uVar8;
  }
  uVar13 = *(undefined8 *)(uVar7 + 0x10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0,0);
  if ((uVar8 & 1) != 0) {
    return uVar8;
  }
  iVar12 = (int)uVar5;
  uVar16 = /*Core.Services.ReplicatorProviderEsq$$ToVector3*/ func_0x01683104(0x42c80000,iVar12 + 0x16,uVar9);
  uVar18 = param_3;
  uVar19 = param_2;
  iVar3 = /*Core.Services.ReplicatorProviderEsq$$IsNaN*/ func_0x01683180();
  if (iVar3 == 0) {
    uVar17 = /*Core.Services.ReplicatorProviderEsq$$ToVector3*/ func_0x01683104(0x44fa0000,iVar12 + 0xc,uVar9);
    uVar21 = uVar18;
    uVar20 = uVar19;
    iVar3 = /*Core.Services.ReplicatorProviderEsq$$IsNaN*/ func_0x01683180();
    if (iVar3 == 0) {
      uStack_fc = uVar19;
      uStack_f8 = uVar18;
      uStack_e0 = /*Core.Services.ReplicatorProviderEsq$$ToQuaternion*/ func_0x016831f4(0x3f800000,iVar12 + 0x12,uVar9);
      uStack_dc = uVar20;
      uStack_d8 = uVar21;
      uStack_d4 = param_4;
      uVar18 = /*UnityEngine.Quaternion$$get_normalized*/ func_0x03252288(&uStack_e0,0);
      iVar3 = /*Core.Services.ReplicatorProviderEsq$$IsNaN*/ func_0x01683290();
      if (iVar3 == 0) {
        uStack_108 = uVar20;
        uStack_104 = uVar21;
        uStack_100 = param_4;
        uVar5 = /*Core.Services.ReplicatorProviderEsq$$NowPacketTime*/ func_0x01682f94(uVar7);
        uVar9 = /*Core.Services.ReplicatorProviderEsq$$ToPacketTime*/ func_0x01683304(auVar22._8_8_);
        uVar21 = uStack_f8;
        uVar19 = uStack_fc;
        if (*(char *)(uVar7 + 0x30) == '\0') {
          if (*(long *)(uVar7 + 0xf8) != 0) {
            /*Core.Services.ReplicatorProviderEsq.Extrapolator3$$Reset*/ func_0x016834b0(uVar9,uVar5,uVar17,uStack_fc,uStack_f8,uVar16,param_2,param_3);
            *(undefined1 *)(uVar7 + 0x30) = 1;
code_r0x016812cc:
            uVar8 = /*UnityEngine.Time$$get_realtimeSinceStartupAsDouble*/ func_0x03272dbc(0);
            *(undefined8 *)(uVar7 + 0xc0) = extraout_d0;
            *(undefined8 *)(uVar7 + 0x68) = *(undefined8 *)(uVar7 + 0x38);
            *(undefined8 *)(uVar7 + 0x78) = *(undefined8 *)(uVar7 + 0x54);
            *(undefined8 *)(uVar7 + 0x70) = *(undefined8 *)(uVar7 + 0x4c);
            *(undefined8 *)(uVar7 + 0x38) = uVar9;
            *(undefined4 *)(uVar7 + 0x60) = param_2;
            *(undefined4 *)(uVar7 + 100) = param_3;
            *(undefined4 *)(uVar7 + 0x40) = uVar17;
            *(undefined4 *)(uVar7 + 0x44) = uVar19;
            *(undefined4 *)(uVar7 + 0x48) = uVar21;
            *(undefined4 *)(uVar7 + 0x4c) = uVar18;
            *(undefined4 *)(uVar7 + 0x50) = uStack_108;
            *(undefined4 *)(uVar7 + 0x54) = uStack_104;
            *(undefined4 *)(uVar7 + 0x58) = uStack_100;
            *(undefined4 *)(uVar7 + 0x5c) = uVar16;
            *(undefined4 *)(uVar7 + 0x80) = uVar17;
            *(undefined4 *)(uVar7 + 0x84) = uVar19;
            *(undefined4 *)(uVar7 + 0x88) = uVar21;
            *(undefined4 *)(uVar7 + 0x8c) = uVar18;
            *(undefined4 *)(uVar7 + 0x90) = uStack_108;
            *(undefined4 *)(uVar7 + 0x94) = uStack_104;
            *(undefined4 *)(uVar7 + 0x98) = uStack_100;
            return uVar8;
          }
code_r0x01681324:
          puVar6 = (uint *)func_0x00f78af4();
          puStack_118 = &Core_Services_ReplicatorStream__get_Cookie;
          pppuStack_120 = &ppuStack_60;
          if (*(long *)(puVar6 + 2) == 0) {
            uVar8 = func_0x00f78af4();
            if ((bRam0000000003ebf1b8 & 1) == 0) {
              func_0x00f78a20(0x3d23990,0);
              bRam0000000003ebf1b8 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            return uVar8;
          }
          uVar1 = *puVar6;
          auVar23._8_4_ = uVar1;
          auVar23._0_8_ = *(long *)(puVar6 + 2);
          auVar23._12_4_ = 0;
          puStack_118 = &Core_Services_ReplicatorStream__get_Cookie;
          ppppuVar14 = &pppuStack_120;
          if ((bRam0000000003eb5cd0 & 1) == 0) {
            func_0x00f78a20(0x3d201a0);
            bRam0000000003eb5cd0 = 1;
          }
          puVar15 = &UNK_016cc68c;
          puVar2 = &stack0xfffffffffffffeb0;
          uVar8 = 8;
          uVar7 = (ulong)uVar1;
          uVar5 = 8;
          do {
            uVar10 = uVar8;
            uVar8 = auVar23._0_8_;
            *(undefined8 *)(puVar2 + -0x20) = uVar5;
            *(ulong *)(puVar2 + -0x18) = uVar7;
            *(undefined1 *****)(puVar2 + -0x10) = ppppuVar14;
            *(undefined **)(puVar2 + -8) = puVar15;
            if (auVar23._8_4_ < 0) {
code_r0x016cc7d8:
              func_0x00f78a24(0x3d1fcf8);
              uVar7 = func_0x00f78aec();
              /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar7,0);
              uVar9 = func_0x00f78a24(0x3d52ce8);
              func_0x00f78ac0(uVar7,uVar9);
            }
            else if (*(long *)(uVar8 + 0x10) != 0) {
              if (auVar23._8_4_ <= *(int *)(*(long *)(uVar8 + 0x10) + 0x18) - (int)uVar10) {
                return uVar8;
              }
              goto code_r0x016cc7d8;
            }
            auVar23 = func_0x00f78af4();
            *(undefined8 *)(puVar2 + -0x50) = 0x3d201a0;
            *(ulong *)(puVar2 + -0x48) = uVar8;
            *(undefined8 *)(puVar2 + -0x40) = uVar5;
            *(ulong *)(puVar2 + -0x38) = uVar7;
            *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
            *(undefined **)(puVar2 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
            ppppuVar14 = (undefined1 ****)(puVar2 + -0x30);
            puVar15 = &UNK_016cc834;
            puVar2 = puVar2 + -0x50;
            uVar8 = 1;
            uVar7 = uVar10;
            uVar5 = auVar23._8_8_;
          } while( true );
        }
        if (*(long *)(uVar7 + 0xf8) == 0) goto code_r0x01681324;
        uVar8 = /*Core.Services.ReplicatorProviderEsq.Extrapolator3$$AddSample*/ func_0x0168338c(uVar9,uVar5,uVar17,uStack_fc,uStack_f8,uVar16,param_2,param_3);
        if ((uVar8 & 1) != 0) goto code_r0x016812cc;
        if (*(long *)(uVar7 + 0x28) == 0) goto code_r0x01681324;
        uStack_f0 = *(undefined4 *)(*(long *)(uVar7 + 0x28) + 0x40);
        uVar5 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_f0);
        uVar5 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncId={0} ')*/ uRam0000000003d73038,uVar5,0);
        if (*(long *)(uVar7 + 0x28) == 0) goto code_r0x01681324;
        uStack_f1 = *(undefined1 *)(*(long *)(uVar7 + 0x28) + 0x45);
        uVar9 = func_0x00f78ae0(/*Core.Services.SyncCategory_TypeInfo*/ uRam0000000003d24ee8,&uStack_f1);
        uVar9 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncCategory={0}')*/ uRam0000000003d73020,uVar9,0);
        uVar5 = /*System.String$$Concat*/ func_0x029be39c(/*STR('Replicator ignored old stream: ')*/ uRam0000000003d71de0,uVar5,uVar9,0);
        if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = 3;
        goto code_r0x01681148;
      }
      uStack_f0 = uVar18;
      uStack_ec = uVar20;
      uStack_e8 = uVar21;
      uStack_e4 = param_4;
      uVar5 = func_0x00f78ae0(/*UnityEngine.Quaternion_TypeInfo*/ uRam0000000003d23f70,&uStack_f0);
      uVar9 = *(undefined8 *)(uVar7 + 0x28);
      puVar11 = (undefined8 *)0x3d6dc70;
    }
    else {
      uStack_e0 = uVar17;
      uStack_dc = uVar19;
      uStack_d8 = uVar18;
      uVar5 = func_0x00f78ae0(/*UnityEngine.Vector3_TypeInfo*/ uRam0000000003d25978,&uStack_e0);
      uVar9 = *(undefined8 *)(uVar7 + 0x28);
      puVar11 = (undefined8 *)0x3d6dc68;
    }
  }
  else {
    uStack_e0 = uVar16;
    uStack_dc = param_2;
    uStack_d8 = param_3;
    uVar5 = func_0x00f78ae0(/*UnityEngine.Vector3_TypeInfo*/ uRam0000000003d25978,&uStack_e0);
    uVar9 = *(undefined8 *)(uVar7 + 0x28);
    puVar11 = (undefined8 *)0x3d6dc78;
  }
  uVar5 = /*System.String$$Format*/ func_0x029bcac4(*puVar11,uVar5,uVar9,0);
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = 4;
code_r0x01681148:
  uVar8 = Core_Services_Internal__LogManaged(uVar9,uVar5,0);
  return uVar8;
}



// ============================================================
// RVA: 0x1680e68 | Core.Services.Replicator.OnReplicatorStream
// ============================================================

/* WARNING: Possible PIC construction at 0x01680ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x01680ea8) */
/* WARNING: Removing unreachable block (ram,0x01680eac) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc878) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */

ulong Core_Services_Replicator__OnReplicatorStream
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 ***pppuVar13;
  undefined *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 extraout_d0;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 uStack_d1;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  uVar6 = param_7;
  uVar8 = param_8;
  uVar4 = Core_Services_Replicator__ShouldReceive();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  uVar4 = *(ulong *)(param_5 + 0x20);
  if (uVar4 == 0) {
    puVar14 = &Core_Services_ReplicatorProviderEsq__OnReplicatorStream;
    auVar21 = func_0x00f78af4();
    param_7 = auVar21._8_8_;
    uVar4 = auVar21._0_8_;
  }
  else {
    puVar14 = (undefined *)0x1680ea8;
    uVar6 = param_8;
    uVar8 = param_9;
  }
  uVar5 = uVar4;
  puStack_40 = &stack0xfffffffffffffff0;
  puStack_38 = puVar14;
  if ((bRam0000000003eb5a04 & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23f70);
    func_0x00f78a20(0x3d24ee8);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d25978);
    func_0x00f78a20(0x3d6dc78);
    func_0x00f78a20(0x3d73038);
    func_0x00f78a20(0x3d6dc68);
    func_0x00f78a20(0x3d71de0);
    func_0x00f78a20(0x3d73020);
    uVar5 = func_0x00f78a20(0x3d6dc70);
    bRam0000000003eb5a04 = 1;
  }
  if (*(long *)(uVar4 + 0x28) == 0) goto code_r0x01681324;
  if (*(char *)(*(long *)(uVar4 + 0x28) + 0x44) != '\0') {
    return uVar5;
  }
  uVar12 = *(undefined8 *)(uVar4 + 0x10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    return uVar5;
  }
  iVar11 = (int)uVar6;
  uVar15 = /*Core.Services.ReplicatorProviderEsq$$ToVector3*/ func_0x01683104(0x42c80000,iVar11 + 0x16,uVar8);
  uVar17 = param_3;
  uVar18 = param_2;
  iVar3 = /*Core.Services.ReplicatorProviderEsq$$IsNaN*/ func_0x01683180();
  if (iVar3 == 0) {
    uVar16 = /*Core.Services.ReplicatorProviderEsq$$ToVector3*/ func_0x01683104(0x44fa0000,iVar11 + 0xc,uVar8);
    uVar20 = uVar17;
    uVar19 = uVar18;
    iVar3 = /*Core.Services.ReplicatorProviderEsq$$IsNaN*/ func_0x01683180();
    if (iVar3 == 0) {
      uStack_dc = uVar18;
      uStack_d8 = uVar17;
      uStack_c0 = /*Core.Services.ReplicatorProviderEsq$$ToQuaternion*/ func_0x016831f4(0x3f800000,iVar11 + 0x12,uVar8);
      uStack_bc = uVar19;
      uStack_b8 = uVar20;
      uStack_b4 = param_4;
      uVar17 = /*UnityEngine.Quaternion$$get_normalized*/ func_0x03252288(&uStack_c0,0);
      iVar3 = /*Core.Services.ReplicatorProviderEsq$$IsNaN*/ func_0x01683290();
      if (iVar3 == 0) {
        uStack_e8 = uVar19;
        uStack_e4 = uVar20;
        uStack_e0 = param_4;
        uVar6 = /*Core.Services.ReplicatorProviderEsq$$NowPacketTime*/ func_0x01682f94(uVar4);
        uVar8 = /*Core.Services.ReplicatorProviderEsq$$ToPacketTime*/ func_0x01683304(param_7);
        uVar20 = uStack_d8;
        uVar18 = uStack_dc;
        if (*(char *)(uVar4 + 0x30) == '\0') {
          if (*(long *)(uVar4 + 0xf8) != 0) {
            /*Core.Services.ReplicatorProviderEsq.Extrapolator3$$Reset*/ func_0x016834b0(uVar8,uVar6,uVar16,uStack_dc,uStack_d8,uVar15,param_2,param_3);
            *(undefined1 *)(uVar4 + 0x30) = 1;
code_r0x016812cc:
            uVar5 = /*UnityEngine.Time$$get_realtimeSinceStartupAsDouble*/ func_0x03272dbc(0);
            *(undefined8 *)(uVar4 + 0xc0) = extraout_d0;
            *(undefined8 *)(uVar4 + 0x68) = *(undefined8 *)(uVar4 + 0x38);
            *(undefined8 *)(uVar4 + 0x78) = *(undefined8 *)(uVar4 + 0x54);
            *(undefined8 *)(uVar4 + 0x70) = *(undefined8 *)(uVar4 + 0x4c);
            *(undefined8 *)(uVar4 + 0x38) = uVar8;
            *(undefined4 *)(uVar4 + 0x60) = param_2;
            *(undefined4 *)(uVar4 + 100) = param_3;
            *(undefined4 *)(uVar4 + 0x40) = uVar16;
            *(undefined4 *)(uVar4 + 0x44) = uVar18;
            *(undefined4 *)(uVar4 + 0x48) = uVar20;
            *(undefined4 *)(uVar4 + 0x4c) = uVar17;
            *(undefined4 *)(uVar4 + 0x50) = uStack_e8;
            *(undefined4 *)(uVar4 + 0x54) = uStack_e4;
            *(undefined4 *)(uVar4 + 0x58) = uStack_e0;
            *(undefined4 *)(uVar4 + 0x5c) = uVar15;
            *(undefined4 *)(uVar4 + 0x80) = uVar16;
            *(undefined4 *)(uVar4 + 0x84) = uVar18;
            *(undefined4 *)(uVar4 + 0x88) = uVar20;
            *(undefined4 *)(uVar4 + 0x8c) = uVar17;
            *(undefined4 *)(uVar4 + 0x90) = uStack_e8;
            *(undefined4 *)(uVar4 + 0x94) = uStack_e4;
            *(undefined4 *)(uVar4 + 0x98) = uStack_e0;
            return uVar5;
          }
code_r0x01681324:
          puVar7 = (uint *)func_0x00f78af4();
          puStack_f8 = &Core_Services_ReplicatorStream__get_Cookie;
          ppuStack_100 = &puStack_40;
          if (*(long *)(puVar7 + 2) == 0) {
            uVar4 = func_0x00f78af4();
            if ((bRam0000000003ebf1b8 & 1) == 0) {
              func_0x00f78a20(0x3d23990,0);
              bRam0000000003ebf1b8 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            return uVar4;
          }
          uVar1 = *puVar7;
          auVar21._8_4_ = uVar1;
          auVar21._0_8_ = *(long *)(puVar7 + 2);
          auVar21._12_4_ = 0;
          puStack_f8 = &Core_Services_ReplicatorStream__get_Cookie;
          pppuVar13 = &ppuStack_100;
          if ((bRam0000000003eb5cd0 & 1) == 0) {
            func_0x00f78a20(0x3d201a0);
            bRam0000000003eb5cd0 = 1;
          }
          puVar14 = &UNK_016cc68c;
          puVar2 = &stack0xfffffffffffffed0;
          uVar4 = 8;
          uVar5 = (ulong)uVar1;
          uVar6 = 8;
          do {
            uVar9 = uVar4;
            uVar4 = auVar21._0_8_;
            *(undefined8 *)(puVar2 + -0x20) = uVar6;
            *(ulong *)(puVar2 + -0x18) = uVar5;
            *(undefined1 ****)(puVar2 + -0x10) = pppuVar13;
            *(undefined **)(puVar2 + -8) = puVar14;
            if (auVar21._8_4_ < 0) {
code_r0x016cc7d8:
              func_0x00f78a24(0x3d1fcf8);
              uVar5 = func_0x00f78aec();
              /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar5,0);
              uVar8 = func_0x00f78a24(0x3d52ce8);
              func_0x00f78ac0(uVar5,uVar8);
            }
            else if (*(long *)(uVar4 + 0x10) != 0) {
              if (auVar21._8_4_ <= *(int *)(*(long *)(uVar4 + 0x10) + 0x18) - (int)uVar9) {
                return uVar4;
              }
              goto code_r0x016cc7d8;
            }
            auVar21 = func_0x00f78af4();
            *(undefined8 *)(puVar2 + -0x50) = 0x3d201a0;
            *(ulong *)(puVar2 + -0x48) = uVar4;
            *(undefined8 *)(puVar2 + -0x40) = uVar6;
            *(ulong *)(puVar2 + -0x38) = uVar5;
            *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
            *(undefined **)(puVar2 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
            pppuVar13 = (undefined1 ***)(puVar2 + -0x30);
            puVar14 = &UNK_016cc834;
            puVar2 = puVar2 + -0x50;
            uVar4 = 1;
            uVar5 = uVar9;
            uVar6 = auVar21._8_8_;
          } while( true );
        }
        if (*(long *)(uVar4 + 0xf8) == 0) goto code_r0x01681324;
        uVar5 = /*Core.Services.ReplicatorProviderEsq.Extrapolator3$$AddSample*/ func_0x0168338c(uVar8,uVar6,uVar16,uStack_dc,uStack_d8,uVar15,param_2,param_3);
        if ((uVar5 & 1) != 0) goto code_r0x016812cc;
        if (*(long *)(uVar4 + 0x28) == 0) goto code_r0x01681324;
        uStack_d0 = *(undefined4 *)(*(long *)(uVar4 + 0x28) + 0x40);
        uVar6 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_d0);
        uVar6 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncId={0} ')*/ uRam0000000003d73038,uVar6,0);
        if (*(long *)(uVar4 + 0x28) == 0) goto code_r0x01681324;
        uStack_d1 = *(undefined1 *)(*(long *)(uVar4 + 0x28) + 0x45);
        uVar8 = func_0x00f78ae0(/*Core.Services.SyncCategory_TypeInfo*/ uRam0000000003d24ee8,&uStack_d1);
        uVar8 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncCategory={0}')*/ uRam0000000003d73020,uVar8,0);
        uVar6 = /*System.String$$Concat*/ func_0x029be39c(/*STR('Replicator ignored old stream: ')*/ uRam0000000003d71de0,uVar6,uVar8,0);
        if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = 3;
        goto code_r0x01681148;
      }
      uStack_d0 = uVar17;
      uStack_cc = uVar19;
      uStack_c8 = uVar20;
      uStack_c4 = param_4;
      uVar6 = func_0x00f78ae0(/*UnityEngine.Quaternion_TypeInfo*/ uRam0000000003d23f70,&uStack_d0);
      uVar8 = *(undefined8 *)(uVar4 + 0x28);
      puVar10 = (undefined8 *)0x3d6dc70;
    }
    else {
      uStack_c0 = uVar16;
      uStack_bc = uVar18;
      uStack_b8 = uVar17;
      uVar6 = func_0x00f78ae0(/*UnityEngine.Vector3_TypeInfo*/ uRam0000000003d25978,&uStack_c0);
      uVar8 = *(undefined8 *)(uVar4 + 0x28);
      puVar10 = (undefined8 *)0x3d6dc68;
    }
  }
  else {
    uStack_c0 = uVar15;
    uStack_bc = param_2;
    uStack_b8 = param_3;
    uVar6 = func_0x00f78ae0(/*UnityEngine.Vector3_TypeInfo*/ uRam0000000003d25978,&uStack_c0);
    uVar8 = *(undefined8 *)(uVar4 + 0x28);
    puVar10 = (undefined8 *)0x3d6dc78;
  }
  uVar6 = /*System.String$$Format*/ func_0x029bcac4(*puVar10,uVar6,uVar8,0);
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = 4;
code_r0x01681148:
  uVar4 = Core_Services_Internal__LogManaged(uVar8,uVar6,0);
  return uVar4;
}



// ============================================================
// RVA: 0x1681350 | Core.Services.Replicator..ctor
// ============================================================

undefined1  [16] Core_Services_Replicator___ctor(ulong param_1)

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



// ============================================================
// RVA: 0x1681358 | Core.Services.Replicator.<Start>b__40_1
// ============================================================

/* WARNING: Possible PIC construction at 0x01680840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01680ba0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01680844) */
/* WARNING: Removing unreachable block (ram,0x01680ba4) */
/* WARNING: Removing unreachable block (ram,0x01680ba8) */

long * Core_Services_Replicator___Start_b__40_1(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 ****ppppuVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_130 [16];
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined1 auStack_110 [12];
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined2 uStack_fc;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined1 ***pppuStack_e0;
  code *pcStack_d8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar9 = 0x3d22970;
  if ((bRam0000000003eb59f1 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d24408);
    func_0x00f78a20(0x3d5c488);
    func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f1 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = 0x3cbe000;
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  *(long *)(param_1 + 0x18) = lVar12;
  if (lVar12 == 0) {
LAB_01680860:
    func_0x00f78af4();
LAB_01680864:
    puVar14 = &Core_Services_ReplicatorProviderEsq___ctor;
    auVar15 = func_0x00f78e5c();
    lVar6 = auVar15._8_8_;
    lVar4 = auVar15._0_8_;
  }
  else {
    lVar9 = *(long *)(lVar12 + 0x148);
    uVar11 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
    /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar11,param_1,uRam0000000003d5c488,puRam0000000003d2a5c8);
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,uVar11,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) goto LAB_01680864;
    *(long **)(lVar12 + 0x148) = plVar3;
    lVar12 = *(long *)(param_1 + 0x18);
    if (lVar12 == 0) goto LAB_01680860;
    lVar9 = *(long *)(lVar12 + 0x140);
    uVar11 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar11,param_1,uRam0000000003d5c490,puRam0000000003d2a2a8);
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,uVar11,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) goto LAB_01680864;
    *(long **)(lVar12 + 0x140) = plVar3;
    lVar4 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq_TypeInfo*/ uRam0000000003d24408);
    puVar14 = (undefined *)0x1680844;
    lVar6 = param_1;
    lVar9 = lVar4;
  }
  lStack_80 = lVar12;
  uStack_78 = uVar11;
  lStack_70 = lVar9;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar14;
  if ((bRam0000000003eb5a02 & 1) == 0) {
    func_0x00f78a20(0x3d28938);
    func_0x00f78a20(0x3d57978);
    func_0x00f78a20(0x3d578f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d243f8);
    bRam0000000003eb5a02 = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(lVar4,0);
  *(long *)(lVar4 + 0x28) = lVar6;
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  if ((lVar6 != 0) && (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar6,0), lVar9 != 0)) {
    uVar11 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar9,uRam0000000003d578f0);
    *(undefined8 *)(lVar4 + 0x10) = uVar11;
    lVar9 = func_0x00f78aec(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ uRam0000000003d243f8);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar9,0);
    *(long *)(lVar4 + 0x18) = lVar9;
    lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar6,0);
    if ((lVar12 != 0) && (uVar11 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar12,uRam0000000003d57978), lVar9 != 0)) {
      /*Core.Services.ReplicatorFloorClampEsq$$Init*/ func_0x016820f8(lVar9,uVar11);
      uVar11 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq.Extrapolator3_TypeInfo*/ uRam0000000003d28938);
      plVar3 = (long *)/*Core.Services.ReplicatorProviderEsq.Extrapolator3$$.ctor*/ func_0x01682e70();
      *(undefined8 *)(lVar4 + 0xf8) = uVar11;
      return plVar3;
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  pcStack_88 = Core_Services_Replicator__OnDestroy;
  plVar3 = plVar5;
  ppuStack_90 = &puStack_60;
  if ((bRam0000000003eb59f2 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d5c488);
    plVar3 = (long *)func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f2 = 1;
  }
  lVar9 = plVar5[3];
  if (lVar9 == 0) {
    return plVar3;
  }
  uVar10 = *(undefined8 *)(lVar9 + 0x148);
  uVar11 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
  puVar8 = puRam0000000003d2a5c8;
  /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar11,plVar5,uRam0000000003d5c488);
  puVar7 = (undefined4 *)0x0;
  plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar11);
  if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) {
    *(long **)(lVar9 + 0x148) = plVar3;
    lVar9 = plVar5[3];
    if (lVar9 == 0) goto LAB_01680b58;
    uVar10 = *(undefined8 *)(lVar9 + 0x140);
    uVar11 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    puVar8 = puRam0000000003d2a2a8;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar11,plVar5,uRam0000000003d5c490);
    puVar7 = (undefined4 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar11);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) {
      *(long **)(lVar9 + 0x140) = plVar3;
      plVar5[3] = 0;
      return plVar3;
    }
  }
  func_0x00f78e5c();
LAB_01680b58:
  auVar15 = func_0x00f78af4();
  lVar12 = auVar15._8_8_;
  puVar1 = auStack_110;
  pcStack_d8 = Core_Services_Replicator__OnUpdateReplicatorData;
  uStack_f0 = uVar10;
  plStack_e8 = plVar5;
  pppuStack_e0 = &ppuStack_90;
  plVar3 = (long *)Core_Services_Replicator__ShouldSend();
  if ((int)plVar3 == 0) {
    return plVar3;
  }
  uStack_f4 = 0;
  uStack_f8 = 0;
  uStack_fc = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(auVar15._0_8_ + 0x20);
  if (lVar6 == 0) {
    lVar12 = func_0x00f78af4();
    puVar1 = auStack_130;
    pcStack_118 = Core_Services_Replicator__ShouldSend;
    ppppuVar13 = &pppuStack_120;
    pppuStack_120 = &pppuStack_e0;
    auStack_130 = auVar15;
    iVar2 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(lVar12,0);
    if (iVar2 == 0) {
      return (long *)0x0;
    }
    lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0);
    if (lVar6 != 0) {
      iVar2 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar6,0);
      if (iVar2 == 0) {
        return (long *)0x0;
      }
      if (*(char *)(lVar12 + 0x44) == '\0') {
        return (long *)0x0;
      }
      plVar3 = *(long **)(lVar12 + 0x18);
      if (plVar3 != (long *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0x928))(plVar3,*(undefined8 *)(*plVar3 + 0x930));
        if (iVar2 == 0) {
          return (long *)0x0;
        }
        plVar3 = *(long **)(lVar12 + 0x18);
        if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01680c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar3 = (long *)(**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
          return plVar3;
        }
      }
    }
    puVar14 = &Core_Services_ReplicatorProviderEsq__GetOwnerState;
    auVar16 = func_0x00f78af4();
  }
  else {
    auVar16._8_8_ = &uStack_f8;
    auVar16._0_8_ = lVar6;
    puVar7 = &uStack_100;
    puVar8 = &uStack_104;
    puVar14 = (undefined *)0x1680ba4;
    ppppuVar13 = (undefined8 ****)&pppuStack_e0;
  }
  lVar6 = auVar16._0_8_;
  *(long *)(puVar1 + -0x30) = lVar9;
  *(undefined8 *)(puVar1 + -0x28) = uVar11;
  *(long *)(puVar1 + -0x20) = auVar15._0_8_;
  *(long *)(puVar1 + -0x18) = lVar12;
  *(undefined8 *****)(puVar1 + -0x10) = ppppuVar13;
  *(undefined **)(puVar1 + -8) = puVar14;
  uVar11 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar6 + 200),*(undefined4 *)(lVar6 + 0xcc),
                           *(undefined4 *)(lVar6 + 0xd0),0x44fa0000);
  *auVar16._8_8_ = (int)uVar11;
  *(short *)(auVar16._8_8_ + 1) = (short)((ulong)uVar11 >> 0x20);
  uVar11 = /*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681dd4(*(undefined4 *)(lVar6 + 0xd4),*(undefined4 *)(lVar6 + 0xd8),
                           *(undefined4 *)(lVar6 + 0xdc),0x42c80000);
  *puVar7 = (int)uVar11;
  *(short *)(puVar7 + 1) = (short)((ulong)uVar11 >> 0x20);
  plVar3 = (long *)/*Core.Services.ReplicatorFloatCompression$$QuantizeToUShort*/ func_0x01681f2c(*(undefined4 *)(lVar6 + 0xe0),*(undefined4 *)(lVar6 + 0xe4),
                                   *(undefined4 *)(lVar6 + 0xe8),*(undefined4 *)(lVar6 + 0xec),
                                   0x3f800000);
  *puVar8 = (int)plVar3;
  return plVar3;
}



