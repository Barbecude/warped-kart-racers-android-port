// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartSuspensionState

// ============================================================
// RVA: 0x15e1464 | Atlas.Gameplay.Kart.KartSuspensionState.Init
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartSuspensionState__Init(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb53b9 & 1) == 0) {
    func_0x00f78a20(0x3d265e8);
    bRam0000000003eb53b9 = 1;
  }
  puVar2 = *(undefined8 **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8);
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = _UNK_033f8448;
  uVar4 = _UNK_033f8440;
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  param_1[3] = *(undefined8 *)(param_2 + 0x14);
  param_1[2] = uVar3;
  param_1[5] = uVar1;
  param_1[4] = uVar4;
  uVar4 = *puVar2;
  param_1[7] = puVar2[1];
  param_1[6] = uVar4;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  return;
}



// ============================================================
// RVA: 0x15e14e0 | Atlas.Gameplay.Kart.KartSuspensionState.GetDebugStr
// ============================================================

ulong Atlas_Gameplay_Kart_KartSuspensionState__GetDebugStr(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb53ba & 1) == 0) {
    func_0x00f78a20(0x3d20260);
    func_0x00f78a20(0x3d1f218);
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d6ef60);
    func_0x00f78a20(0x3d265e8);
    bRam0000000003eb53ba = 1;
  }
  plVar1 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,8);
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  lVar2 = func_0x00f78ae0(/*Unity.Mathematics.float4_TypeInfo*/ uRam0000000003d265e8,&uStack_40);
  if (plVar1 == (long *)0x0) goto LAB_015e17b8;
  if ((lVar2 == 0) || (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 != 0))
  {
    if ((int)plVar1[3] != 0) {
      plVar1[4] = lVar2;
      uStack_48 = param_1[3];
      uStack_50 = param_1[2];
      lVar2 = func_0x00f78ae0(/*Unity.Mathematics.float4_TypeInfo*/ uRam0000000003d265e8,&uStack_50);
      if ((lVar2 != 0) &&
         (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_015e17ac;
      if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
        plVar1[5] = lVar2;
        uStack_58 = param_1[5];
        uStack_60 = param_1[4];
        lVar2 = func_0x00f78ae0(/*Unity.Mathematics.float4_TypeInfo*/ uRam0000000003d265e8,&uStack_60);
        if ((lVar2 != 0) &&
           (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto LAB_015e17ac;
        if (2 < *(uint *)(plVar1 + 3)) {
          plVar1[6] = lVar2;
          uStack_68 = param_1[7];
          uStack_70 = param_1[6];
          lVar2 = func_0x00f78ae0(/*Unity.Mathematics.float4_TypeInfo*/ uRam0000000003d265e8,&uStack_70);
          if ((lVar2 != 0) &&
             (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
          goto LAB_015e17ac;
          if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
            plVar1[7] = lVar2;
            uStack_74 = *(undefined4 *)(param_1 + 8);
            lVar2 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&uStack_74);
            if ((lVar2 != 0) &&
               (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
            goto LAB_015e17ac;
            if (4 < *(uint *)(plVar1 + 3)) {
              plVar1[8] = lVar2;
              uStack_78 = *(undefined4 *)(param_1 + 9);
              lVar2 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&uStack_78);
              if ((lVar2 != 0) &&
                 (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
              goto LAB_015e17ac;
              if (5 < *(uint *)(plVar1 + 3)) {
                plVar1[9] = lVar2;
                uStack_79 = *(undefined1 *)((long)param_1 + 0x4c);
                lVar2 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&uStack_79);
                if ((lVar2 != 0) &&
                   (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
                goto LAB_015e17ac;
                if (6 < *(uint *)(plVar1 + 3)) {
                  plVar1[10] = lVar2;
                  uStack_7a = *(undefined1 *)((long)param_1 + 0x4d);
                  lVar2 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&uStack_7a);
                  if ((lVar2 != 0) &&
                     (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
                  goto LAB_015e17ac;
                  if ((*(uint *)(plVar1 + 3) & 0xfffffff8) != 0) {
                    plVar1[0xb] = lVar2;
                    uVar4 = /*System.String$$Format*/ func_0x029cf564(/*STR('KartSuspensionState: Velocity: {0}, GroundPos {1}, GroundNormal {2}, SuspensionForce {3}, RideHeight {4}, CompressedLength {5}, FindGround {6}, TouchGround {7} ')*/ uRam0000000003d6ef60,plVar1,0);
                    return uVar4;
                  }
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
LAB_015e17ac:
    uVar5 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar5,0);
LAB_015e17b8:
  lVar2 = func_0x00f78af4();
  return (ulong)*(uint *)(lVar2 + 0x18);
}



