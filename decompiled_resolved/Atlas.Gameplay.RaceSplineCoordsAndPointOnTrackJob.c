// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.RaceSplineCoordsAndPointOnTrackJob

// ============================================================
// RVA: 0x14d9a4c | Atlas.Gameplay.RaceSplineCoordsAndPointOnTrackJob.Execute
// ============================================================

void Atlas_Gameplay_RaceSplineCoordsAndPointOnTrackJob__Execute(long *param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b4;
  float fStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  if ((bRam0000000003eb4bb9 & 1) == 0) {
    func_0x00f78a20(0x3d24090);
    func_0x00f78a20(0x3d265d0);
    func_0x00f78a20(0x3d265e8);
    bRam0000000003eb4bb9 = 1;
  }
  fStack_b0 = 0.0;
  iStack_ac = 0;
  uStack_a8 = 0;
  uStack_b4 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_e8 = 0;
  uStack_a0 = 0;
  lVar7 = (*(long **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8))[1];
  lVar8 = **(long **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8);
  uStack_9c = (undefined4)lVar8;
  uStack_98 = (undefined4)((ulong)lVar8 >> 0x20);
  uStack_8c = (undefined4)**(undefined8 **)(/*Unity.Mathematics.float2_TypeInfo*/ lRam0000000003d265d0 + 0xb8);
  uStack_88 = (undefined4)((ulong)**(undefined8 **)(/*Unity.Mathematics.float2_TypeInfo*/ lRam0000000003d265d0 + 0xb8) >> 0x20);
  uStack_94 = (undefined4)lVar7;
  uStack_90 = (undefined4)((ulong)lVar7 >> 0x20);
  iStack_64 = (int)param_1[0x17];
  iStack_6c = (int)param_1[0x16];
  iStack_68 = (int)((ulong)param_1[0x16] >> 0x20);
  iStack_74 = (int)param_1[0x15];
  iStack_70 = (int)((ulong)param_1[0x15] >> 0x20);
  plVar4 = (long *)param_1[0x19];
  plVar4[1] = CONCAT44(uStack_94,uStack_98);
  *plVar4 = lVar8 << 0x20;
  plVar4[3] = CONCAT44(uStack_9c,uStack_88);
  plVar4[2] = CONCAT44(uStack_8c,uStack_90);
  plVar4[5] = CONCAT44(iStack_74,uStack_90);
  plVar4[4] = CONCAT44(uStack_94,uStack_98);
  plVar4[7] = CONCAT44(iStack_64,iStack_68);
  plVar4[6] = CONCAT44(iStack_6c,iStack_70);
  lVar8 = param_1[0x13];
  uVar14 = *(undefined4 *)((long)param_1 + 0x9c);
  lVar7 = param_1[0x14];
  uVar15 = *(undefined4 *)((long)param_1 + 0xa4);
  uStack_84 = uStack_9c;
  uStack_80 = uStack_98;
  uStack_7c = uStack_94;
  uStack_78 = uStack_90;
  if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_8c = Atlas_Gameplay_RaceSplineBurstHelpers__GetTrackCoords
                        ((int)lVar8,uVar14,(int)lVar7,uVar15,param_1,param_1 + 0x16,
                         (long)param_1 + 0xac,param_1 + 0x15,(long)&uStack_a8 + 4,&uStack_a8,
                         &iStack_ac,(long)&uStack_e8 + 4,&uStack_e8,&fStack_b0,&uStack_b4,&uStack_d0
                        );
  uStack_88 = uVar14;
  if (-1 < iStack_ac) {
    uStack_7c = (undefined4)uStack_c8;
    uStack_78 = (undefined4)((ulong)uStack_c8 >> 0x20);
    uStack_84 = (undefined4)uStack_d0;
    uStack_80 = (undefined4)((ulong)uStack_d0 >> 0x20);
    iVar1 = (int)uStack_a8;
    lVar8 = (long)(int)uStack_a8;
    iStack_74 = iStack_ac;
    iStack_70 = uStack_a8._4_4_;
    iStack_6c = (int)uStack_a8;
    fVar12 = *(float *)((long)param_1 + 0xbc);
    if (*(float *)((long)param_1 + 0xbc) <= 0.0) {
      fVar12 = 0.0;
    }
    fVar12 = fStack_b0 + fVar12;
    iVar3 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar12,0);
    piVar6 = (int *)(*param_1 + lVar8 * 0x34);
    fVar9 = (float)param_1[0x13] - (float)*(undefined8 *)(piVar6 + 1);
    fVar10 = (float)((ulong)param_1[0x13] >> 0x20) -
             (float)((ulong)*(undefined8 *)(piVar6 + 1) >> 0x20);
    fVar13 = 0.0;
    if (iVar3 == 0 && 0.0 <= fVar12) {
      fVar13 = fVar12;
    }
    fVar12 = (float)param_1[0x14] - (float)*(undefined8 *)(piVar6 + 3);
    fVar11 = (float)((ulong)param_1[0x14] >> 0x20) -
             (float)((ulong)*(undefined8 *)(piVar6 + 3) >> 0x20);
    if (fVar11 * fVar11 + fVar12 * fVar12 + fVar9 * fVar9 + fVar10 * fVar10 < 225.0) {
      iVar3 = piVar6[5];
      lVar8 = (long)iVar3;
      iStack_74 = (int)param_1[0x18];
      if ((-1 < iStack_74) && (iVar3 < piVar6[6])) {
        lVar7 = lVar8 << 2;
        iVar3 = piVar6[6] - iVar3;
        do {
          if (*(int *)(param_1[8] + lVar7) == iStack_74) {
            iStack_6c = *(int *)(param_1[4] + lVar7);
            iStack_68 = iStack_74;
            iStack_ac = iStack_74;
            iStack_64 = iStack_6c;
            goto joined_r0x014d9d74;
          }
          lVar7 = lVar7 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iStack_74 = iStack_68;
      if (iStack_68 < 0) {
        iStack_74 = *(int *)(param_1[8] + lVar8 * 4);
      }
      iStack_6c = iStack_64;
      if (iStack_64 < 0) {
        iStack_6c = *(int *)(param_1[4] + lVar8 * 4);
      }
joined_r0x014d9d74:
      uStack_a8 = CONCAT44(iVar1,iStack_6c);
      fVar13 = 5.0;
      if (*piVar6 == iStack_6c) {
        fVar13 = *(float *)((long)param_1 + 0xbc);
      }
      iStack_70 = iVar1;
      fStack_b0 = fVar13;
    }
    uVar14 = *(undefined4 *)((long)param_1 + 0xc4);
    if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = Atlas_Gameplay_RaceSplineBurstHelpers__TryGetPointOnTrack
                      (fVar13,0,param_1,&iStack_74,&uStack_e0,0,uVar14);
    uStack_94 = (undefined4)uStack_d8;
    uStack_90 = (undefined4)((ulong)uStack_d8 >> 0x20);
    uStack_9c = (undefined4)uStack_e0;
    uStack_98 = (undefined4)((ulong)uStack_e0 >> 0x20);
    uStack_a0 = CONCAT31(uStack_a0._1_3_,uVar2);
    puVar5 = (undefined8 *)param_1[0x19];
    puVar5[5] = CONCAT44(iStack_74,uStack_78);
    puVar5[4] = CONCAT44(uStack_7c,uStack_80);
    puVar5[7] = CONCAT44(iStack_64,iStack_68);
    puVar5[6] = CONCAT44(iStack_6c,iStack_70);
    puVar5[1] = CONCAT44(uStack_94,uStack_98);
    *puVar5 = CONCAT44(uStack_9c,uStack_a0);
    puVar5[3] = CONCAT44(uStack_84,uStack_88);
    puVar5[2] = CONCAT44(uStack_8c,uStack_90);
  }
  return;
}



