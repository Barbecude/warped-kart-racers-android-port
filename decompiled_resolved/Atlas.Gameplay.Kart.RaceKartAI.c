// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.RaceKartAI

// ============================================================
// RVA: 0x14d2e04 | Atlas.Gameplay.Kart.RaceKartAI.add_OnLapCompleted
// ============================================================

ulong Atlas_Gameplay_Kart_RaceKartAI__add_OnLapCompleted(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4b97 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4b97 = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x60);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x60),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4b98 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4b98 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x60);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(uint *)(lVar4 + 0xb4);
}



// ============================================================
// RVA: 0x14d2ea4 | Atlas.Gameplay.Kart.RaceKartAI.remove_OnLapCompleted
// ============================================================

ulong Atlas_Gameplay_Kart_RaceKartAI__remove_OnLapCompleted(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000003eb4b98 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4b98 = 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x60);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x60),plVar2,uVar5);
    bVar1 = uVar5 == uVar3;
    uVar5 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(uint *)(lVar4 + 0xb4);
}



// ============================================================
// RVA: 0x14d2f44 | Atlas.Gameplay.Kart.RaceKartAI.get_LapsCompleted
// ============================================================

undefined4 Atlas_Gameplay_Kart_RaceKartAI__get_LapsCompleted(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}



// ============================================================
// RVA: 0x14d2f4c | Atlas.Gameplay.Kart.RaceKartAI.get_TrackCoords
// ============================================================

undefined4 Atlas_Gameplay_Kart_RaceKartAI__get_TrackCoords(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd4);
}



// ============================================================
// RVA: 0x14d2f54 | Atlas.Gameplay.Kart.RaceKartAI.get_HasPassedHalfwayMark
// ============================================================

undefined1 Atlas_Gameplay_Kart_RaceKartAI__get_HasPassedHalfwayMark(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd2);
}



// ============================================================
// RVA: 0x14d2f5c | Atlas.Gameplay.Kart.RaceKartAI.get_PolylineIndex
// ============================================================

undefined4 Atlas_Gameplay_Kart_RaceKartAI__get_PolylineIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x14d2f64 | Atlas.Gameplay.Kart.RaceKartAI.get_IsFacingWrongWay
// ============================================================

undefined1 Atlas_Gameplay_Kart_RaceKartAI__get_IsFacingWrongWay(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x14d2f6c | Atlas.Gameplay.Kart.RaceKartAI.get_ShowWrongWayIndicator
// ============================================================

ulong Atlas_Gameplay_Kart_RaceKartAI__get_ShowWrongWayIndicator(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    uVar1 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x448) == 0) {
      lVar2 = func_0x00f78af4();
      return *(ulong *)(lVar2 + 0x448);
    }
    uVar1 = (ulong)(*(float *)(*(long *)(param_1 + 0x448) + 0x60) < *(float *)(param_1 + 0x8c));
  }
  return uVar1;
}



// ============================================================
// RVA: 0x14d2fa8 | Atlas.Gameplay.Kart.RaceKartAI.GetKartAIDefinition
// ============================================================

undefined8 Atlas_Gameplay_Kart_RaceKartAI__GetKartAIDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x448);
}



// ============================================================
// RVA: 0x14d2fb0 | Atlas.Gameplay.Kart.RaceKartAI.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014d3380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d343c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d3384) */
/* WARNING: Removing unreachable block (ram,0x014d338c) */
/* WARNING: Removing unreachable block (ram,0x014d33a0) */
/* WARNING: Removing unreachable block (ram,0x014d3440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_RaceKartAI__Init
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
               undefined8 param_6,long param_7)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000003eb4b99 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b99 = 1;
  }
  Atlas_Gameplay_Kart_KartAI__Init(param_1,param_2,param_3,param_6,0);
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_014d3074:
    *(long *)(param_1 + 0x98) = param_5;
    if (param_5 != 0) {
      /*Atlas.Gameplay.RaceAIUtilityManager$$Init*/ func_0x014d1cfc(param_5,param_3,param_4);
    }
    *(undefined8 *)(param_1 + 0x448) = param_4;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_4,0,0);
    if (iVar3 != 0) {
      if ((*(long *)(param_1 + 0x448) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_1 + 0x448) + 0x78), lVar4 == 0)) goto LAB_014d3298;
      Atlas_Gameplay_Kart_KartAIUsablesParameters__Calculate(lVar4,0);
    }
    fVar2 = _UNK_033f850c;
    if (*(long *)(param_1 + 0x448) != 0) {
      fVar9 = *(float *)(*(long *)(param_1 + 0x448) + 0x20);
      if (cRam0000000003ca3501 == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca3501 = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      dVar10 = (double)_cos((double)((90.0 - fVar9) * fVar2));
      *(float *)(param_1 + 0x74) = (float)dVar10;
      if (*(long *)(param_1 + 0x448) != 0) {
        fVar9 = *(float *)(*(long *)(param_1 + 0x448) + 0x24);
        if (cRam0000000003ca3501 == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca3501 = '\x01';
        }
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        dVar10 = (double)_cos((double)((90.0 - fVar9) * fVar2));
        *(float *)(param_1 + 0x78) = (float)dVar10;
        if (*(long *)(param_1 + 0x448) != 0) {
          fVar9 = *(float *)(*(long *)(param_1 + 0x448) + 0x48);
          if (cRam0000000003ca3501 == '\0') {
            func_0x00f78a20(0x3d232c0);
            cRam0000000003ca3501 = '\x01';
          }
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          dVar10 = (double)_cos((double)((90.0 - fVar9) * fVar2));
          *(float *)(param_1 + 0x7c) = (float)dVar10;
          if (*(long *)(param_1 + 0x448) != 0) {
            fVar9 = *(float *)(*(long *)(param_1 + 0x448) + 0x4c);
            if (cRam0000000003ca3501 == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca3501 = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            dVar10 = (double)_cos((double)((90.0 - fVar9) * fVar2));
            *(float *)(param_1 + 0x80) = (float)dVar10;
            *(undefined8 *)(param_1 + 0x90) = 0;
            *(undefined4 *)(param_1 + 0x8c) = 0;
            *(undefined1 *)(param_1 + 0x45c) = 0;
            if (param_7 != 0) {
              *(long *)(param_1 + 0x450) = param_7;
            }
            return;
          }
        }
      }
    }
  }
  else if (param_3 != 0) {
    uVar8 = *(undefined8 *)(param_3 + 0x1d0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
    if (iVar3 != 0) {
      if (*(long *)(param_3 + 0x1d0) == 0) goto LAB_014d3298;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(*(long *)(param_3 + 0x1d0) + 0x40);
    }
    goto LAB_014d3074;
  }
LAB_014d3298:
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4b9a & 1) == 0) {
    func_0x00f78a20(0x3d23a68);
    func_0x00f78a20(0x3d5bf48);
    func_0x00f78a20(0x3d5bf50);
    bRam0000000003eb4b9a = 1;
  }
  if (*(long *)(lVar4 + 0x38) != 0) {
    lVar6 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if (lVar6 == 0) goto code_r0x014d33c0;
    uVar8 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ uRam0000000003d23a68);
    Atlas_Gameplay_Kart_OnTriggerDelegate___ctor(uVar8,lVar4,uRam0000000003d5bf48,0);
    Atlas_Gameplay_Kart_KartPhysics__remove_OnTriggerEnterDelegate(lVar6,uVar8,0);
    if (*(long *)(lVar4 + 0x38) != 0) {
      lVar6 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      uVar8 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ uRam0000000003d23a68);
      Atlas_Gameplay_Kart_OnTriggerDelegate___ctor(uVar8,lVar4,uRam0000000003d5bf50,0);
      if (lVar6 != 0) {
        Atlas_Gameplay_Kart_KartPhysics__remove_OnTriggerExitDelegate(lVar6,uVar8,0);
        goto code_r0x014d33c0;
      }
    }
  }
  lVar4 = func_0x00f78af4();
code_r0x014d33c0:
  if ((bRam0000000003eb4b9f & 1) == 0) {
    func_0x00f78a20(0x3d3e2f8);
    func_0x00f78a20(0x3d3e218);
    func_0x00f78a20(0x3d3e3e0);
    bRam0000000003eb4b9f = 1;
  }
  /*Unity.Collections.NativeArray<RaceKartAIUpdateJobBurstParams>$$Dispose*/ func_0x025fd658(lVar4 + 0x438,uRam0000000003d3e2f8);
  lVar6 = *(long *)(lVar4 + 0x300);
  if (lVar6 == 0) {
    func_0x00f78a24(0x3d23998,uRam0000000003d3e3e0);
    uVar5 = func_0x00f78aec();
    uVar8 = func_0x00f78a24(0x3d73ae8);
    lVar4 = 0;
    /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar5,uVar8);
  }
  else {
    iVar3 = *(int *)(lVar4 + 0x30c);
    if (iVar3 != 0) {
      if (1 < iVar3) {
        /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar6,iVar3,0);
        *(undefined4 *)(lVar4 + 0x30c) = 0;
      }
      *(long *)(lVar4 + 0x300) = 0;
      *(undefined4 *)(lVar4 + 0x308) = 0;
      return;
    }
    func_0x00f78a24(0x3d22a38);
    uVar5 = func_0x00f78aec();
    uVar8 = func_0x00f78a24(0x3d73ae0);
    lVar4 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar5,uVar8);
  }
  uVar8 = func_0x00f78a24(0x3d3e3e0);
  auVar11 = func_0x00f78ac0(uVar5,uVar8);
  uVar8 = *auVar11._0_8_;
  uVar5 = auVar11._0_8_[1];
  lVar7 = *(long *)(lVar4 + 0x18);
  uVar1 = *(ushort *)(lVar7 + 0x132);
  lVar6 = lVar7;
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar7);
    lVar6 = *(long *)(lVar4 + 0x18);
    uVar1 = *(ushort *)(lVar6 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    func_0x00fac028(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0260ac5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (auVar11._8_8_,uVar8,uVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20));
  return;
}



// ============================================================
// RVA: 0x14d329c | Atlas.Gameplay.Kart.RaceKartAI.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014d3380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014d343c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d3384) */
/* WARNING: Removing unreachable block (ram,0x014d338c) */
/* WARNING: Removing unreachable block (ram,0x014d33a0) */
/* WARNING: Removing unreachable block (ram,0x014d3440) */

void Atlas_Gameplay_Kart_RaceKartAI__DeInit(long param_1)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb4b9a & 1) == 0) {
    func_0x00f78a20(0x3d23a68);
    func_0x00f78a20(0x3d5bf48);
    func_0x00f78a20(0x3d5bf50);
    bRam0000000003eb4b9a = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
    if (lVar5 == 0) goto code_r0x014d33c0;
    uVar3 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ uRam0000000003d23a68);
    Atlas_Gameplay_Kart_OnTriggerDelegate___ctor(uVar3,param_1,uRam0000000003d5bf48,0);
    Atlas_Gameplay_Kart_KartPhysics__remove_OnTriggerEnterDelegate(lVar5,uVar3,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
      uVar3 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ uRam0000000003d23a68);
      Atlas_Gameplay_Kart_OnTriggerDelegate___ctor(uVar3,param_1,uRam0000000003d5bf50,0);
      if (lVar5 != 0) {
        Atlas_Gameplay_Kart_KartPhysics__remove_OnTriggerExitDelegate(lVar5,uVar3,0);
        goto code_r0x014d33c0;
      }
    }
  }
  param_1 = func_0x00f78af4();
code_r0x014d33c0:
  if ((bRam0000000003eb4b9f & 1) == 0) {
    func_0x00f78a20(0x3d3e2f8);
    func_0x00f78a20(0x3d3e218);
    func_0x00f78a20(0x3d3e3e0);
    bRam0000000003eb4b9f = 1;
  }
  /*Unity.Collections.NativeArray<RaceKartAIUpdateJobBurstParams>$$Dispose*/ func_0x025fd658(param_1 + 0x438,uRam0000000003d3e2f8);
  lVar5 = *(long *)(param_1 + 0x300);
  if (lVar5 == 0) {
    func_0x00f78a24(0x3d23998,uRam0000000003d3e3e0);
    uVar4 = func_0x00f78aec();
    uVar3 = func_0x00f78a24(0x3d73ae8);
    lVar5 = 0;
    /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar4,uVar3);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30c);
    if (iVar1 != 0) {
      if (1 < iVar1) {
        /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar5,iVar1,0);
        *(undefined4 *)(param_1 + 0x30c) = 0;
      }
      *(long *)(param_1 + 0x300) = 0;
      *(undefined4 *)(param_1 + 0x308) = 0;
      return;
    }
    func_0x00f78a24(0x3d22a38);
    uVar4 = func_0x00f78aec();
    uVar3 = func_0x00f78a24(0x3d73ae0);
    lVar5 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar4,uVar3);
  }
  uVar3 = func_0x00f78a24(0x3d3e3e0);
  auVar8 = func_0x00f78ac0(uVar4,uVar3);
  uVar3 = *auVar8._0_8_;
  uVar4 = auVar8._0_8_[1];
  lVar7 = *(long *)(lVar5 + 0x18);
  uVar2 = *(ushort *)(lVar7 + 0x132);
  lVar6 = lVar7;
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar7);
    lVar6 = *(long *)(lVar5 + 0x18);
    uVar2 = *(ushort *)(lVar6 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0260ac5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(auVar8._8_8_,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20))
  ;
  return;
}



// ============================================================
// RVA: 0x14d33c0 | Atlas.Gameplay.Kart.RaceKartAI.DeInitBurstContainers
// ============================================================

/* WARNING: Possible PIC construction at 0x014d343c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d3440) */

void Atlas_Gameplay_Kart_RaceKartAI__DeInitBurstContainers(long param_1)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb4b9f & 1) == 0) {
    func_0x00f78a20(0x3d3e2f8);
    func_0x00f78a20(0x3d3e218);
    func_0x00f78a20(0x3d3e3e0);
    bRam0000000003eb4b9f = 1;
  }
  /*Unity.Collections.NativeArray<RaceKartAIUpdateJobBurstParams>$$Dispose*/ func_0x025fd658(param_1 + 0x438,uRam0000000003d3e2f8);
  lVar3 = *(long *)(param_1 + 0x300);
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d23998,uRam0000000003d3e3e0);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d73ae8);
    lVar3 = 0;
    /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar4,uVar5);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30c);
    if (iVar1 != 0) {
      if (1 < iVar1) {
        /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar3,iVar1,0);
        *(undefined4 *)(param_1 + 0x30c) = 0;
      }
      *(long *)(param_1 + 0x300) = 0;
      *(undefined4 *)(param_1 + 0x308) = 0;
      return;
    }
    func_0x00f78a24(0x3d22a38);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d73ae0);
    lVar3 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar4,uVar5);
  }
  uVar5 = func_0x00f78a24(0x3d3e3e0);
  auVar8 = func_0x00f78ac0(uVar4,uVar5);
  uVar5 = *auVar8._0_8_;
  uVar4 = auVar8._0_8_[1];
  lVar7 = *(long *)(lVar3 + 0x18);
  uVar2 = *(ushort *)(lVar7 + 0x132);
  lVar6 = lVar7;
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar7);
    lVar6 = *(long *)(lVar3 + 0x18);
    uVar2 = *(ushort *)(lVar6 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x0260ac5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(auVar8._8_8_,uVar5,uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20))
  ;
  return;
}



// ============================================================
// RVA: 0x14d3474 | Atlas.Gameplay.Kart.RaceKartAI.PostInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014d356c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d3570) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_RaceKartAI__PostInit(long param_1,undefined8 param_2,undefined1 param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 extraout_w1;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 extraout_s0;
  double dVar6;
  undefined4 uVar7;
  undefined8 uVar8;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  
  if ((bRam0000000003eb4b9b & 1) == 0) {
    func_0x00f78a20(0x3d23a68);
    func_0x00f78a20(0x3d5bf48);
    func_0x00f78a20(0x3d5bf50);
    bRam0000000003eb4b9b = 1;
  }
  if ((*(long *)(param_1 + 0x98) != 0) && (*(char *)(*(long *)(param_1 + 0x98) + 0x21) == '\0')) {
    /*Atlas.Gameplay.RaceAIUtilityManager$$UpdateValidData*/ func_0x014d1f80();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
    uVar2 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ uRam0000000003d23a68);
    uVar8 = uRam0000000003d5bf48;
    Atlas_Gameplay_Kart_OnTriggerDelegate___ctor(uVar2,param_1,uRam0000000003d5bf48,0);
    param_3 = (undefined1)uVar8;
    if (lVar4 != 0) {
      param_3 = 0;
      Atlas_Gameplay_Kart_KartPhysics__add_OnTriggerEnterDelegate(lVar4,uVar2);
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
        uVar2 = func_0x00f78aec(/*Atlas.Gameplay.Kart.OnTriggerDelegate_TypeInfo*/ uRam0000000003d23a68);
        uVar8 = uRam0000000003d5bf50;
        Atlas_Gameplay_Kart_OnTriggerDelegate___ctor(uVar2,param_1,uRam0000000003d5bf50,0);
        param_3 = (undefined1)uVar8;
        if (lVar4 != 0) {
          param_3 = 0;
          Atlas_Gameplay_Kart_KartPhysics__add_OnTriggerExitDelegate(lVar4,uVar2);
          goto code_r0x014d3590;
        }
      }
    }
  }
  param_1 = func_0x00f78af4();
code_r0x014d3590:
  if ((bRam0000000003eb4b9e & 1) == 0) {
    func_0x00f78a20(0x3d3e210);
    func_0x00f78a20(0x3d3e3d8);
    func_0x00f78a20(0x3d3e2f0);
    func_0x00f78a20(0x3d24090);
    func_0x00f78a20(0x3d265d0);
    func_0x00f78a20(0x3d265e8);
    bRam0000000003eb4b9e = 1;
  }
  Atlas_Gameplay_Kart_KartAIInputData__Reset(param_1 + 0x20,0);
  Atlas_Gameplay_Kart_KartAIInputData__Reset(param_1 + 0x10,0);
  Atlas_Gameplay_Kart_KartAIInputData__Reset(param_1 + 0x11c,0);
  *(undefined8 *)(param_1 + 0xd4) = **(undefined8 **)(/*Unity.Mathematics.float2_TypeInfo*/ lRam0000000003d265d0 + 0xb8);
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  /*Atlas.Gameplay.RaceSplineCacheParams$$Init*/ func_0x014d9a3c(param_1 + 0xa0,0);
  uVar8 = **(undefined8 **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8);
  *(undefined8 *)(param_1 + 0xe4) = (*(undefined8 **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8))[1];
  *(undefined8 *)(param_1 + 0xdc) = uVar8;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xd2) = 1;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0xd0);
  lVar4 = *(long *)(param_1 + 0x448);
  uVar8 = *(undefined8 *)(param_1 + 0xd0);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x25c) = *(undefined8 *)(lVar4 + 0x58);
    uVar8 = *(undefined8 *)(param_1 + 0x74);
    uVar2 = NEON_rev64(*(undefined8 *)(lVar4 + 0x38),4);
    *(undefined8 *)(param_1 + 0x270) = uVar8;
    *(undefined8 *)(param_1 + 0x268) = uVar2;
    *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(lVar4 + 0x28);
    *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_1 + 0x7c);
    if (((*(long *)(param_1 + 0x38) != 0) &&
        (lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar3 != 0)) &&
       (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(lVar3 + 0x70);
      *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(lVar3 + 0x3c);
      *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(lVar4 + 0x44);
      *(undefined8 *)(param_1 + 0x29c) = *(undefined8 *)(lVar3 + 0x84);
      *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(lVar3 + 0x80);
      *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_1 + 0x80);
      *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(lVar4 + 0x50);
      fVar1 = _UNK_033f850c;
      fVar5 = *(float *)(lVar4 + 0x54);
      uVar8 = 0x42b40000;
      if (cRam0000000003ca3501 == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca3501 = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      dVar6 = (double)_cos((double)((90.0 - fVar5) * fVar1));
      *(float *)(param_1 + 0x2b0) = (float)dVar6;
      lVar4 = *(long *)(param_1 + 0x448);
      if (lVar4 != 0) {
        *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(lVar4 + 0x40);
        *(undefined8 *)(param_1 + 0x340) = 0;
        *(undefined8 *)(param_1 + 0x338) = 0;
        *(undefined8 *)(param_1 + 0x350) = 0;
        *(undefined8 *)(param_1 + 0x348) = 0;
        *(undefined8 *)(param_1 + 0x360) = 0;
        *(undefined8 *)(param_1 + 0x358) = 0;
        *(undefined8 *)(param_1 + 0x370) = 0;
        *(undefined8 *)(param_1 + 0x368) = 0;
        *(undefined8 *)(param_1 + 0x380) = 0;
        *(undefined8 *)(param_1 + 0x378) = 0;
        *(undefined8 *)(param_1 + 0x390) = 0;
        *(undefined8 *)(param_1 + 0x388) = 0;
        *(undefined8 *)(param_1 + 0x3a0) = 0;
        *(undefined8 *)(param_1 + 0x398) = 0;
        *(undefined8 *)(param_1 + 0x3b0) = 0;
        *(undefined8 *)(param_1 + 0x3a8) = 0;
        *(undefined8 *)(param_1 + 0x3c0) = 0;
        *(undefined8 *)(param_1 + 0x3b8) = 0;
        *(undefined8 *)(param_1 + 0x3c8) = 0;
        lVar3 = *(long *)(param_1 + 0x68);
        if (lVar3 != 0) {
          uVar2 = *(undefined8 *)(lVar3 + 0x60);
          *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(lVar3 + 0x68);
          *(undefined8 *)(param_1 + 0x338) = uVar2;
          uVar2 = *(undefined8 *)(lVar3 + 0x70);
          *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(lVar3 + 0x78);
          *(undefined8 *)(param_1 + 0x348) = uVar2;
          uVar2 = *(undefined8 *)(lVar3 + 0x90);
          *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(lVar3 + 0x98);
          *(undefined8 *)(param_1 + 0x358) = uVar2;
          uVar2 = *(undefined8 *)(lVar3 + 0xa0);
          *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(lVar3 + 0xa8);
          *(undefined8 *)(param_1 + 0x368) = uVar2;
          uVar2 = *(undefined8 *)(lVar3 + 0xb0);
          *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(lVar3 + 0xb8);
          *(undefined8 *)(param_1 + 0x378) = uVar2;
          uVar2 = *(undefined8 *)(lVar3 + 0xc0);
          *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(lVar3 + 200);
          *(undefined8 *)(param_1 + 0x388) = uVar2;
          uVar2 = *(undefined8 *)(lVar3 + 0xd0);
          *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(lVar3 + 0xd8);
          *(undefined8 *)(param_1 + 0x398) = uVar2;
          uVar2 = *(undefined8 *)(lVar3 + 0xe0);
          *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(lVar3 + 0xe8);
          *(undefined8 *)(param_1 + 0x3a8) = uVar2;
          uVar2 = *(undefined8 *)(lVar3 + 0x80);
          *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(lVar3 + 0x88);
          *(undefined8 *)(param_1 + 0x3b8) = uVar2;
          *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(lVar3 + 0x58);
          if (*(long *)(lVar4 + 0x78) != 0) {
            Atlas_Gameplay_Kart_KartAIUsablesParameters__ToBurstStruct
                      (&uStack_118,*(long *)(lVar4 + 0x78),0);
            *(undefined8 *)(param_1 + 0x418) = uStack_d0;
            *(undefined8 *)(param_1 + 0x410) = uStack_d8;
            *(undefined8 *)(param_1 + 0x428) = uStack_c0;
            *(undefined8 *)(param_1 + 0x420) = uStack_c8;
            *(undefined4 *)(param_1 + 0x430) = uStack_b8;
            *(undefined8 *)(param_1 + 0x3d8) = uStack_110;
            *(undefined8 *)(param_1 + 0x3d0) = uStack_118;
            *(undefined8 *)(param_1 + 1000) = uStack_100;
            *(undefined8 *)(param_1 + 0x3e0) = uStack_108;
            *(undefined8 *)(param_1 + 0x3f8) = uStack_f0;
            *(undefined8 *)(param_1 + 0x3f0) = uStack_f8;
            *(undefined8 *)(param_1 + 0x408) = uStack_e0;
            *(undefined8 *)(param_1 + 0x400) = uStack_e8;
            uStack_130 = 0;
            uStack_128 = 0;
            /*Unity.Collections.NativeArray<RaceKartAIUpdateJobBurstParams>$$.ctor*/ func_0x025fd15c(&uStack_130,1,4,1,uRam0000000003d3e2f0);
            *(undefined8 *)(param_1 + 0x440) = uStack_128;
            *(undefined8 *)(param_1 + 0x438) = uStack_130;
            uStack_140 = 0;
            uStack_138 = 0;
            /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(&uStack_140,100,4,1,uRam0000000003d3e3d8);
            *(undefined8 *)(param_1 + 0x308) = uStack_138;
            *(undefined8 *)(param_1 + 0x300) = uStack_140;
            uStack_150 = 0;
            uStack_148 = 0;
            /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(&uStack_150,100,4,1,uRam0000000003d3e3d8);
            *(undefined8 *)(param_1 + 0x318) = uStack_148;
            *(undefined8 *)(param_1 + 0x310) = uStack_150;
            uStack_160 = 0;
            uStack_158 = 0;
            /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(&uStack_160,100,4,1,uRam0000000003d3e210);
            *(undefined8 *)(param_1 + 0x2f8) = uStack_158;
            *(undefined8 *)(param_1 + 0x2f0) = uStack_160;
            uStack_170 = 0;
            uStack_168 = 0;
            param_3 = 4;
            /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(&uStack_170,0xc,4,1,uRam0000000003d3e3d8);
            *(undefined8 *)(param_1 + 0x328) = uStack_168;
            *(undefined8 *)(param_1 + 800) = uStack_170;
            if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            *(undefined4 *)(param_1 + 0x434) = **(undefined4 **)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xb8);
            lVar4 = *(long *)(param_1 + 0x448);
            uVar8 = uStack_f8;
            if (lVar4 != 0) {
              *(undefined8 *)(param_1 + 0x2dc) = *(undefined8 *)(lVar4 + 0x68);
              *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(lVar4 + 0x70);
              *(float *)(param_1 + 0x2e8) = *(float *)(lVar4 + 0x74) * *(float *)(lVar4 + 0x74);
              return;
            }
          }
        }
      }
    }
  }
  uVar7 = (undefined4)uVar8;
  lVar4 = func_0x00f78af4();
  *(undefined4 *)(lVar4 + 0xd4) = extraout_s0;
  *(undefined4 *)(lVar4 + 0xd8) = uVar7;
  *(undefined4 *)(lVar4 + 0xb4) = extraout_w1;
  *(undefined1 *)(lVar4 + 0xd2) = param_3;
  return;
}



// ============================================================
// RVA: 0x14d3590 | Atlas.Gameplay.Kart.RaceKartAI.InitBurstContainers
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_RaceKartAI__InitBurstContainers
               (long param_1,undefined8 param_2,undefined1 param_3)

{
  float fVar1;
  undefined4 extraout_w1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 extraout_s0;
  undefined8 uVar5;
  double dVar6;
  undefined4 uVar7;
  undefined8 uVar8;
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  if ((bRam0000000003eb4b9e & 1) == 0) {
    func_0x00f78a20(0x3d3e210);
    func_0x00f78a20(0x3d3e3d8);
    func_0x00f78a20(0x3d3e2f0);
    func_0x00f78a20(0x3d24090);
    func_0x00f78a20(0x3d265d0);
    func_0x00f78a20(0x3d265e8);
    bRam0000000003eb4b9e = 1;
  }
  Atlas_Gameplay_Kart_KartAIInputData__Reset(param_1 + 0x20,0);
  Atlas_Gameplay_Kart_KartAIInputData__Reset(param_1 + 0x10,0);
  Atlas_Gameplay_Kart_KartAIInputData__Reset(param_1 + 0x11c,0);
  *(undefined8 *)(param_1 + 0xd4) = **(undefined8 **)(/*Unity.Mathematics.float2_TypeInfo*/ lRam0000000003d265d0 + 0xb8);
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  /*Atlas.Gameplay.RaceSplineCacheParams$$Init*/ func_0x014d9a3c(param_1 + 0xa0,0);
  uVar8 = **(undefined8 **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8);
  *(undefined8 *)(param_1 + 0xe4) = (*(undefined8 **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8))[1];
  *(undefined8 *)(param_1 + 0xdc) = uVar8;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xd2) = 1;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0xd0);
  lVar2 = *(long *)(param_1 + 0x448);
  uVar8 = *(undefined8 *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x25c) = *(undefined8 *)(lVar2 + 0x58);
    uVar8 = *(undefined8 *)(param_1 + 0x74);
    uVar5 = NEON_rev64(*(undefined8 *)(lVar2 + 0x38),4);
    *(undefined8 *)(param_1 + 0x270) = uVar8;
    *(undefined8 *)(param_1 + 0x268) = uVar5;
    *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(lVar2 + 0x28);
    *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(param_1 + 0x7c);
    if (((*(long *)(param_1 + 0x38) != 0) &&
        (lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar3 != 0)) &&
       (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(lVar3 + 0x70);
      *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(lVar3 + 0x3c);
      *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(lVar2 + 0x44);
      *(undefined8 *)(param_1 + 0x29c) = *(undefined8 *)(lVar3 + 0x84);
      *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(lVar3 + 0x80);
      *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_1 + 0x80);
      *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(lVar2 + 0x50);
      fVar1 = _UNK_033f850c;
      fVar4 = *(float *)(lVar2 + 0x54);
      uVar8 = 0x42b40000;
      if (cRam0000000003ca3501 == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca3501 = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      dVar6 = (double)_cos((double)((90.0 - fVar4) * fVar1));
      *(float *)(param_1 + 0x2b0) = (float)dVar6;
      lVar2 = *(long *)(param_1 + 0x448);
      if (lVar2 != 0) {
        *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(lVar2 + 0x40);
        *(undefined8 *)(param_1 + 0x340) = 0;
        *(undefined8 *)(param_1 + 0x338) = 0;
        *(undefined8 *)(param_1 + 0x350) = 0;
        *(undefined8 *)(param_1 + 0x348) = 0;
        *(undefined8 *)(param_1 + 0x360) = 0;
        *(undefined8 *)(param_1 + 0x358) = 0;
        *(undefined8 *)(param_1 + 0x370) = 0;
        *(undefined8 *)(param_1 + 0x368) = 0;
        *(undefined8 *)(param_1 + 0x380) = 0;
        *(undefined8 *)(param_1 + 0x378) = 0;
        *(undefined8 *)(param_1 + 0x390) = 0;
        *(undefined8 *)(param_1 + 0x388) = 0;
        *(undefined8 *)(param_1 + 0x3a0) = 0;
        *(undefined8 *)(param_1 + 0x398) = 0;
        *(undefined8 *)(param_1 + 0x3b0) = 0;
        *(undefined8 *)(param_1 + 0x3a8) = 0;
        *(undefined8 *)(param_1 + 0x3c0) = 0;
        *(undefined8 *)(param_1 + 0x3b8) = 0;
        *(undefined8 *)(param_1 + 0x3c8) = 0;
        lVar3 = *(long *)(param_1 + 0x68);
        if (lVar3 != 0) {
          uVar5 = *(undefined8 *)(lVar3 + 0x60);
          *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(lVar3 + 0x68);
          *(undefined8 *)(param_1 + 0x338) = uVar5;
          uVar5 = *(undefined8 *)(lVar3 + 0x70);
          *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(lVar3 + 0x78);
          *(undefined8 *)(param_1 + 0x348) = uVar5;
          uVar5 = *(undefined8 *)(lVar3 + 0x90);
          *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(lVar3 + 0x98);
          *(undefined8 *)(param_1 + 0x358) = uVar5;
          uVar5 = *(undefined8 *)(lVar3 + 0xa0);
          *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(lVar3 + 0xa8);
          *(undefined8 *)(param_1 + 0x368) = uVar5;
          uVar5 = *(undefined8 *)(lVar3 + 0xb0);
          *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(lVar3 + 0xb8);
          *(undefined8 *)(param_1 + 0x378) = uVar5;
          uVar5 = *(undefined8 *)(lVar3 + 0xc0);
          *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(lVar3 + 200);
          *(undefined8 *)(param_1 + 0x388) = uVar5;
          uVar5 = *(undefined8 *)(lVar3 + 0xd0);
          *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(lVar3 + 0xd8);
          *(undefined8 *)(param_1 + 0x398) = uVar5;
          uVar5 = *(undefined8 *)(lVar3 + 0xe0);
          *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(lVar3 + 0xe8);
          *(undefined8 *)(param_1 + 0x3a8) = uVar5;
          uVar5 = *(undefined8 *)(lVar3 + 0x80);
          *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(lVar3 + 0x88);
          *(undefined8 *)(param_1 + 0x3b8) = uVar5;
          *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(lVar3 + 0x58);
          if (*(long *)(lVar2 + 0x78) != 0) {
            Atlas_Gameplay_Kart_KartAIUsablesParameters__ToBurstStruct
                      (&uStack_d8,*(long *)(lVar2 + 0x78),0);
            *(undefined8 *)(param_1 + 0x418) = uStack_90;
            *(undefined8 *)(param_1 + 0x410) = uStack_98;
            *(undefined8 *)(param_1 + 0x428) = uStack_80;
            *(undefined8 *)(param_1 + 0x420) = uStack_88;
            *(undefined4 *)(param_1 + 0x430) = uStack_78;
            *(undefined8 *)(param_1 + 0x3d8) = uStack_d0;
            *(undefined8 *)(param_1 + 0x3d0) = uStack_d8;
            *(undefined8 *)(param_1 + 1000) = uStack_c0;
            *(undefined8 *)(param_1 + 0x3e0) = uStack_c8;
            *(undefined8 *)(param_1 + 0x3f8) = uStack_b0;
            *(undefined8 *)(param_1 + 0x3f0) = uStack_b8;
            *(undefined8 *)(param_1 + 0x408) = uStack_a0;
            *(undefined8 *)(param_1 + 0x400) = uStack_a8;
            uStack_f0 = 0;
            uStack_e8 = 0;
            /*Unity.Collections.NativeArray<RaceKartAIUpdateJobBurstParams>$$.ctor*/ func_0x025fd15c(&uStack_f0,1,4,1,uRam0000000003d3e2f0);
            *(undefined8 *)(param_1 + 0x440) = uStack_e8;
            *(undefined8 *)(param_1 + 0x438) = uStack_f0;
            uStack_100 = 0;
            uStack_f8 = 0;
            /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(&uStack_100,100,4,1,uRam0000000003d3e3d8);
            *(undefined8 *)(param_1 + 0x308) = uStack_f8;
            *(undefined8 *)(param_1 + 0x300) = uStack_100;
            uStack_110 = 0;
            uStack_108 = 0;
            /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(&uStack_110,100,4,1,uRam0000000003d3e3d8);
            *(undefined8 *)(param_1 + 0x318) = uStack_108;
            *(undefined8 *)(param_1 + 0x310) = uStack_110;
            uStack_120 = 0;
            uStack_118 = 0;
            /*Unity.Collections.NativeArray<int>$$.ctor*/ func_0x025eda58(&uStack_120,100,4,1,uRam0000000003d3e210);
            *(undefined8 *)(param_1 + 0x2f8) = uStack_118;
            *(undefined8 *)(param_1 + 0x2f0) = uStack_120;
            uStack_130 = 0;
            uStack_128 = 0;
            param_3 = 4;
            /*Unity.Collections.NativeArray<float4>$$.ctor*/ func_0x0260a6b4(&uStack_130,0xc,4,1,uRam0000000003d3e3d8);
            *(undefined8 *)(param_1 + 0x328) = uStack_128;
            *(undefined8 *)(param_1 + 800) = uStack_130;
            if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            *(undefined4 *)(param_1 + 0x434) = **(undefined4 **)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xb8);
            lVar2 = *(long *)(param_1 + 0x448);
            uVar8 = uStack_b8;
            if (lVar2 != 0) {
              *(undefined8 *)(param_1 + 0x2dc) = *(undefined8 *)(lVar2 + 0x68);
              *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(lVar2 + 0x70);
              *(float *)(param_1 + 0x2e8) = *(float *)(lVar2 + 0x74) * *(float *)(lVar2 + 0x74);
              return;
            }
          }
        }
      }
    }
  }
  uVar7 = (undefined4)uVar8;
  lVar2 = func_0x00f78af4();
  *(undefined4 *)(lVar2 + 0xd4) = extraout_s0;
  *(undefined4 *)(lVar2 + 0xd8) = uVar7;
  *(undefined4 *)(lVar2 + 0xb4) = extraout_w1;
  *(undefined1 *)(lVar2 + 0xd2) = param_3;
  return;
}



// ============================================================
// RVA: 0x14d39ec | Atlas.Gameplay.Kart.RaceKartAI.OverrideLapPositionState
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAI__OverrideLapPositionState
               (undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4,
               undefined1 param_5)

{
  *(undefined4 *)(param_3 + 0xd4) = param_1;
  *(undefined4 *)(param_3 + 0xd8) = param_2;
  *(undefined4 *)(param_3 + 0xb4) = param_4;
  *(undefined1 *)(param_3 + 0xd2) = param_5;
  return;
}



// ============================================================
// RVA: 0x14d39fc | Atlas.Gameplay.Kart.RaceKartAI.OnFinishGame
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_RaceKartAI__OnFinishGame(long param_1)

{
  float fVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  
  fVar1 = _UNK_033f850c;
  if (*(long *)(param_1 + 0x448) != 0) {
    fVar3 = *(float *)(*(long *)(param_1 + 0x448) + 0x2c);
    if (cRam0000000003ca3501 == '\0') {
      func_0x00f78a20(0x3d232c0);
      cRam0000000003ca3501 = '\x01';
    }
    if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    dVar4 = (double)_cos((double)((90.0 - fVar3) * fVar1));
    *(float *)(param_1 + 0x74) = (float)dVar4;
    if (*(long *)(param_1 + 0x448) != 0) {
      fVar3 = *(float *)(*(long *)(param_1 + 0x448) + 0x30);
      if (cRam0000000003ca3501 == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca3501 = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      dVar4 = (double)_cos((double)((90.0 - fVar3) * fVar1));
      *(float *)(param_1 + 0x78) = (float)dVar4;
      *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x74);
      *(float *)(param_1 + 0x274) = (float)dVar4;
      if (*(long *)(param_1 + 0x448) != 0) {
        *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(*(long *)(param_1 + 0x448) + 0x34);
        return;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  *(undefined8 *)(lVar2 + 0xa0) = 0xffffffffffffffff;
  *(undefined8 *)(lVar2 + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar2 + 0xa8) = 0xffffffffffffffff;
  *(undefined4 *)(lVar2 + 0xb0) = 0xffffffff;
  *(undefined1 *)(lVar2 + 0x134) = 0;
  *(undefined4 *)(lVar2 + 0x11c) = 0;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  return;
}



// ============================================================
// RVA: 0x14d3b1c | Atlas.Gameplay.Kart.RaceKartAI.OnResetPosition
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAI__OnResetPosition(long param_1)

{
  *(undefined8 *)(param_1 + 0xa0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// ============================================================
// RVA: 0x14d3b48 | Atlas.Gameplay.Kart.RaceKartAI.OnTriggerEnterCheckReroute
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAI__OnTriggerEnterCheckReroute
               (long param_1,long param_2,undefined1 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  
  if ((bRam0000000003eb4b9c & 1) == 0) {
    func_0x00f78a20(0x3d533e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b9c = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = Atlas_Gameplay_Kart_KartComposite__get_IsLocalPlayerInput(*(long *)(param_1 + 0x38),0);
    if (((uVar2 & 1) == 0) && (*(char *)(param_1 + 0x135) == '\0')) {
      if (param_2 == 0) goto LAB_014d3c24;
      lVar3 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_2,uRam0000000003d533e8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_3 = 0;
      uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar3,0);
      if ((uVar2 & 1) == 0) {
        if (lVar3 == 0) goto LAB_014d3c24;
        uVar4 = *(undefined8 *)(lVar3 + 0x24);
        *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(lVar3 + 0x2c);
        *(undefined8 *)(param_1 + 0x13c) = uVar4;
        *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
      }
    }
    return;
  }
LAB_014d3c24:
  auVar5 = func_0x00f78af4();
  if ((bRam0000000003eb4b9d & 1) == 0) {
    func_0x00f78a20(0x3d533e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b9d = 1;
  }
  if (auVar5._8_8_ != 0) {
    uVar4 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(auVar5._8_8_,uRam0000000003d533e8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      iVar1 = *(int *)(auVar5._0_8_ + 0x14c) + -1;
      if (iVar1 < 1) {
        iVar1 = 0;
      }
      *(int *)(auVar5._0_8_ + 0x14c) = iVar1;
    }
    return;
  }
  auVar6 = func_0x00f78af4();
  *(int *)(auVar6._0_8_ + 0xb4) = auVar6._8_4_ + -1;
  *(undefined1 *)(auVar6._0_8_ + 0xd2) = param_3;
  return;
}



// ============================================================
// RVA: 0x14d3c28 | Atlas.Gameplay.Kart.RaceKartAI.OnTriggerExitCheckReroute
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAI__OnTriggerExitCheckReroute
               (long param_1,long param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [12];
  
  if ((bRam0000000003eb4b9d & 1) == 0) {
    func_0x00f78a20(0x3d533e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b9d = 1;
  }
  if (param_2 != 0) {
    uVar2 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_2,uRam0000000003d533e8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      iVar1 = *(int *)(param_1 + 0x14c) + -1;
      if (iVar1 < 1) {
        iVar1 = 0;
      }
      *(int *)(param_1 + 0x14c) = iVar1;
    }
    return;
  }
  auVar4 = func_0x00f78af4();
  *(int *)(auVar4._0_8_ + 0xb4) = auVar4._8_4_ + -1;
  *(undefined1 *)(auVar4._0_8_ + 0xd2) = param_3;
  return;
}



// ============================================================
// RVA: 0x14d3ce4 | Atlas.Gameplay.Kart.RaceKartAI.SetKartProgressToBeginningOfLap
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAI__SetKartProgressToBeginningOfLap
               (long param_1,int param_2,undefined1 param_3)

{
  *(int *)(param_1 + 0xb4) = param_2 + -1;
  *(undefined1 *)(param_1 + 0xd2) = param_3;
  return;
}



// ============================================================
// RVA: 0x14d3cf4 | Atlas.Gameplay.Kart.RaceKartAI.DebugFixedUpdate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_RaceKartAI__DebugFixedUpdate(long param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  fVar13 = _UNK_033f850c;
  if (*(long *)(param_1 + 0x448) != 0) {
    fVar10 = *(float *)(*(long *)(param_1 + 0x448) + 0x20);
    if (cRam0000000003ca3501 == '\0') {
      func_0x00f78a20(0x3d232c0);
      cRam0000000003ca3501 = '\x01';
    }
    if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    dVar11 = (double)_cos((double)((90.0 - fVar10) * fVar13));
    *(float *)(param_1 + 0x74) = (float)dVar11;
    if (*(long *)(param_1 + 0x448) != 0) {
      fVar10 = *(float *)(*(long *)(param_1 + 0x448) + 0x24);
      if (cRam0000000003ca3501 == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca3501 = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      dVar11 = (double)_cos((double)((90.0 - fVar10) * fVar13));
      *(float *)(param_1 + 0x78) = (float)dVar11;
      *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x74);
      *(float *)(param_1 + 0x274) = (float)dVar11;
      lVar6 = *(long *)(param_1 + 0x448);
      if (lVar6 != 0) {
        *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(lVar6 + 0x28);
        fVar10 = *(float *)(lVar6 + 0x54);
        if (cRam0000000003ca3501 == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca3501 = '\x01';
        }
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        dVar11 = (double)_cos((double)((90.0 - fVar10) * fVar13));
        *(float *)(param_1 + 0x2b0) = (float)dVar11;
        if (*(long *)(param_1 + 0x448) != 0) {
          fVar10 = *(float *)(*(long *)(param_1 + 0x448) + 0x48);
          if (cRam0000000003ca3501 == '\0') {
            func_0x00f78a20(0x3d232c0);
            cRam0000000003ca3501 = '\x01';
          }
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          dVar11 = (double)_cos((double)((90.0 - fVar10) * fVar13));
          *(float *)(param_1 + 0x7c) = (float)dVar11;
          *(float *)(param_1 + 0x280) = (float)dVar11;
          lVar6 = *(long *)(param_1 + 0x448);
          if (lVar6 != 0) {
            *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(lVar6 + 0x44);
            fVar10 = *(float *)(lVar6 + 0x4c);
            if (cRam0000000003ca3501 == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca3501 = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            dVar11 = (double)_cos((double)((90.0 - fVar10) * fVar13));
            *(float *)(param_1 + 0x80) = (float)dVar11;
            *(float *)(param_1 + 0x2a8) = (float)dVar11;
            lVar6 = *(long *)(param_1 + 0x448);
            if (lVar6 != 0) {
              *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(lVar6 + 0x50);
              uVar12 = NEON_rev64(*(undefined8 *)(lVar6 + 0x38),4);
              *(undefined8 *)(param_1 + 0x268) = uVar12;
              return;
            }
          }
        }
      }
    }
  }
  auVar14 = func_0x00f78af4();
  plVar5 = auVar14._8_8_;
  lVar6 = auVar14._0_8_;
  if ((bRam0000000003eb4ba0 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c68);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ba0 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar12 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar12,0);
  if (*(char *)(lVar6 + 0x45c) != '\0') {
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar6 + 0x18);
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
    uVar9 = *(undefined8 *)(lVar6 + 0x68);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,0,0);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x38) != 0)) &&
       (lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10), lVar7 != 0)) {
      uVar9 = *(undefined8 *)(lVar7 + 0x70);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,0,0);
      if ((uVar3 & 1) == 0) {
        /*Atlas.Gameplay.Kart.RaceKartAI$$PrepareJobUpdate*/ func_0x014d42e0(lVar6,plVar5);
        /*Atlas.Gameplay.Kart.RaceKartAI$$RunUpdateJob*/ func_0x014d4cf0(lVar6);
        /*Atlas.Gameplay.Kart.RaceKartAI$$PostUpdateJob*/ func_0x014d4d78(lVar6);
        if (*(long *)(lVar6 + 0x38) == 0) {
          func_0x00f78af4();
        }
        else {
          lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x20);
          if (lVar7 == 0) {
            func_0x00f78af4();
          }
          else if (*(int *)(lVar7 + 0x10) == 1) {
            if (*(char *)(lVar6 + 0x1c) == '\0') {
              Atlas_Gameplay_Kart_KartAI__ApplyHopping(lVar6,0);
            }
            /*Atlas.Gameplay.Kart.RaceKartAI$$CheckStuckAI*/ func_0x014d4fc8(lVar6);
            Atlas_Gameplay_Kart_KartAI__UpdateTimers(lVar6,plVar5,0);
            if (plVar5 == (long *)0x0) {
              func_0x00f78af4();
            }
            else {
              lVar7 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar3 != 0) {
                piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                    goto code_r0x014d41a0;
                  }
                  piVar8 = piVar8 + 4;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014d41a0:
              (*(code *)*puVar4)(plVar5,puVar4[1]);
              /*Atlas.Gameplay.Kart.RaceKartAI$$UpdateSpeedFactor*/ func_0x014d5084(lVar6);
              if (*(long *)(lVar6 + 0x38) == 0) {
                func_0x00f78af4();
              }
              else {
                lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
                if (lVar7 == 0) {
                  func_0x00f78af4();
                }
                else {
                  lVar7 = *(long *)(lVar7 + 0x60);
                  if (lVar7 != 0) {
                    *(undefined4 *)(lVar7 + 0xd0) = *(undefined4 *)(lVar6 + 0x84);
                    fVar13 = *(float *)(lVar6 + 0x70);
                    iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,2,0);
                    if (iVar2 != 0) {
                      fVar13 = -fVar13;
                    }
                    *(float *)(lVar6 + 0x70) = fVar13;
                    goto code_r0x014d41f8;
                  }
                  func_0x00f78af4();
                }
              }
            }
          }
          else {
            if (plVar5 != (long *)0x0) {
              lVar7 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar3 != 0) {
                piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                    goto code_r0x014d4178;
                  }
                  piVar8 = piVar8 + 4;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014d4178:
              (*(code *)*puVar4)(plVar5,puVar4[1]);
              /*Atlas.Gameplay.Kart.RaceKartAI$$UpdateWrongWay*/ func_0x014d4de8(lVar6,*(undefined4 *)(lVar6 + 0xb8),*(undefined4 *)(lVar6 + 0xbc));
              goto code_r0x014d41f8;
            }
            func_0x00f78af4();
          }
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14d4250);
        (*pcVar1)();
      }
    }
  }
code_r0x014d41f8:
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar12);
  return;
}



// ============================================================
// RVA: 0x14d3f58 | Atlas.Gameplay.Kart.RaceKartAI.Update
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAI__Update(long param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  if ((bRam0000000003eb4ba0 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c68);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ba0 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = **(undefined8 **)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar7,0);
  if (*(char *)(param_1 + 0x45c) != '\0') {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x68);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
    if ((((uVar3 & 1) == 0) && (*(long *)(param_1 + 0x38) != 0)) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar5 != 0)) {
      uVar8 = *(undefined8 *)(lVar5 + 0x70);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
      if ((uVar3 & 1) == 0) {
        /*Atlas.Gameplay.Kart.RaceKartAI$$PrepareJobUpdate*/ func_0x014d42e0(param_1,param_2);
        /*Atlas.Gameplay.Kart.RaceKartAI$$RunUpdateJob*/ func_0x014d4cf0(param_1);
        /*Atlas.Gameplay.Kart.RaceKartAI$$PostUpdateJob*/ func_0x014d4d78(param_1);
        if (*(long *)(param_1 + 0x38) == 0) {
          func_0x00f78af4();
        }
        else {
          lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
          if (lVar5 == 0) {
            func_0x00f78af4();
          }
          else if (*(int *)(lVar5 + 0x10) == 1) {
            if (*(char *)(param_1 + 0x1c) == '\0') {
              Atlas_Gameplay_Kart_KartAI__ApplyHopping(param_1,0);
            }
            /*Atlas.Gameplay.Kart.RaceKartAI$$CheckStuckAI*/ func_0x014d4fc8(param_1);
            Atlas_Gameplay_Kart_KartAI__UpdateTimers(param_1,param_2,0);
            if (param_2 == (long *)0x0) {
              func_0x00f78af4();
            }
            else {
              lVar5 = *param_2;
              uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                    puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_014d41a0;
                  }
                  piVar6 = piVar6 + 4;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_014d41a0:
              (*(code *)*puVar4)(param_2,puVar4[1]);
              /*Atlas.Gameplay.Kart.RaceKartAI$$UpdateSpeedFactor*/ func_0x014d5084(param_1);
              if (*(long *)(param_1 + 0x38) == 0) {
                func_0x00f78af4();
              }
              else {
                lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
                if (lVar5 == 0) {
                  func_0x00f78af4();
                }
                else {
                  lVar5 = *(long *)(lVar5 + 0x60);
                  if (lVar5 != 0) {
                    *(undefined4 *)(lVar5 + 0xd0) = *(undefined4 *)(param_1 + 0x84);
                    fVar9 = *(float *)(param_1 + 0x70);
                    iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,2,0);
                    if (iVar2 != 0) {
                      fVar9 = -fVar9;
                    }
                    *(float *)(param_1 + 0x70) = fVar9;
                    goto LAB_014d41f8;
                  }
                  func_0x00f78af4();
                }
              }
            }
          }
          else {
            if (param_2 != (long *)0x0) {
              lVar5 = *param_2;
              uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
                    puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                    goto code_r0x014d4178;
                  }
                  piVar6 = piVar6 + 4;
                  uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014d4178:
              (*(code *)*puVar4)(param_2,puVar4[1]);
              /*Atlas.Gameplay.Kart.RaceKartAI$$UpdateWrongWay*/ func_0x014d4de8(param_1,*(undefined4 *)(param_1 + 0xb8),
                              *(undefined4 *)(param_1 + 0xbc));
              goto LAB_014d41f8;
            }
            func_0x00f78af4();
          }
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14d4250);
        (*pcVar1)();
      }
    }
  }
LAB_014d41f8:
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar7);
  return;
}



// ============================================================
// RVA: 0x14d42e0 | Atlas.Gameplay.Kart.RaceKartAI.PrepareJobUpdate
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAI__PrepareJobUpdate(long param_1,long *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  int aiStack_b8 [4];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  
  if ((bRam0000000003eb4ba2 & 1) == 0) {
    func_0x00f78a20(0x3d432d8);
    func_0x00f78a20(0x3d432e8);
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d57088);
    func_0x00f78a20(0x3d21c08);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3ae20);
    func_0x00f78a20(0x3d3a7d0);
    func_0x00f78a20(0x3d244c0);
    bRam0000000003eb4ba2 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  aiStack_b8[3] = 0;
  *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x40);
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar6 == 0)) goto LAB_014d4b9c;
  puVar7 = (undefined4 *)Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar6,0);
  lVar6 = *(long *)(param_1 + 0x38);
  if ((lVar6 == 0) || ((*(long *)(lVar6 + 0x10) == 0 || (*(long *)(lVar6 + 0x38) == 0))))
  goto LAB_014d4b9c;
  lVar13 = *(long *)(*(long *)(lVar6 + 0x10) + 0x60);
  iVar4 = Atlas_Gameplay_Kart_KartUsableManager__get_CanStartUseLocal(*(long *)(lVar6 + 0x38),0);
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x20), lVar6 == 0)) goto LAB_014d4b9c;
  fVar19 = 1.25;
  if (*(char *)(lVar6 + 0x85) == '\0') {
    if (param_2 == (long *)0x0) goto LAB_014d4b9c;
    fVar19 = *(float *)(param_1 + 0x94);
    lVar6 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_014d44ac;
        }
        piVar11 = piVar11 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_014d44ac:
    fVar15 = (float)(*(code *)*puVar8)(param_2,puVar8[1]);
    if (param_1 == 0) goto LAB_014d4b9c;
    fVar19 = fVar19 - fVar15;
    if (fVar19 < 0.0) {
      fVar19 = -1.0;
    }
  }
  *(float *)(param_1 + 0x94) = fVar19;
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0xb0);
  uVar18 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0x188) = uVar18;
  *(undefined4 *)(param_1 + 0x20c) = *puVar7;
  *(bool *)(param_1 + 0x278) = 0.0 < fVar19;
  uVar16 = puVar7[0x51];
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(puVar7 + 0x4f);
  *(undefined4 *)(param_1 + 0x218) = uVar16;
  *(undefined4 *)(param_1 + 0x21c) = 0x3f800000;
  uVar16 = puVar7[0x42];
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(puVar7 + 0x40);
  *(undefined4 *)(param_1 + 0x228) = uVar16;
  *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
  uVar16 = puVar7[0x4b];
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(puVar7 + 0x49);
  *(undefined4 *)(param_1 + 0x238) = uVar16;
  *(undefined4 *)(param_1 + 0x23c) = 0x3f800000;
  uVar16 = puVar7[0x48];
  uVar17 = *(undefined8 *)(puVar7 + 0x46);
  *(undefined8 *)(param_1 + 0x240) = uVar17;
  *(undefined4 *)(param_1 + 0x248) = uVar16;
  *(undefined4 *)(param_1 + 0x24c) = 0x3f800000;
  *(bool *)(param_1 + 0x250) = 0.0 < (float)puVar7[0x19];
  lVar6 = *(long *)(param_1 + 0x38);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x20) == 0)) goto LAB_014d4b9c;
  *(bool *)(param_1 + 0x251) = *(int *)(*(long *)(lVar6 + 0x20) + 0x10) != 1;
  if ((*(long *)(lVar6 + 0x90) == 0) ||
     (*(undefined1 *)(param_1 + 0x252) = *(undefined1 *)(*(long *)(lVar6 + 0x90) + 0x98),
     param_2 == (long *)0x0)) goto LAB_014d4b9c;
  lVar6 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
        puVar8 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
        goto code_r0x014d460c;
      }
      piVar11 = piVar11 + 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
code_r0x014d460c:
  uVar16 = (*(code *)*puVar8)(param_2,puVar8[1]);
  *(undefined4 *)(param_1 + 0x254) = uVar16;
  *(undefined1 *)(param_1 + 0x259) = *(undefined1 *)(puVar7 + 0xf);
  *(undefined1 *)(param_1 + 0x25a) = *(undefined1 *)((long)puVar7 + 0x3f);
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar6 == 0)) goto LAB_014d4b9c;
  lVar6 = Atlas_Gameplay_Kart_KartPhysics__get_LngForce(lVar6,0);
  *(bool *)(param_1 + 600) = 0 < *(int *)(lVar6 + 0x44);
  *(undefined4 *)(param_1 + 0x28c) = puVar7[1];
  if ((*(long *)(param_1 + 0x38) == 0) ||
     ((lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar6 == 0 ||
      (lVar6 = *(long *)(lVar6 + 0x60), lVar6 == 0)))) goto LAB_014d4b9c;
  uVar16 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__GetDriftSpeedMinModifier
                     (lVar6,0);
  *(undefined4 *)(param_1 + 0x290) = uVar16;
  *(undefined4 *)(param_1 + 0x298) = puVar7[0x1b];
  *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_1 + 0x70);
  uVar16 = Atlas_Gameplay_Kart_KartAI__GetRoll(param_1,0);
  *(undefined4 *)(param_1 + 700) = uVar16;
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar6 == 0)) goto LAB_014d4b9c;
  uVar3 = Atlas_Gameplay_Kart_KartPhysics__get_HopInvuln(lVar6,0);
  *(undefined1 *)(param_1 + 0x2c4) = uVar3;
  uVar16 = Atlas_Gameplay_Kart_KartAI__GetRoll(param_1,0);
  *(undefined4 *)(param_1 + 0x2c0) = uVar16;
  *(char *)(param_1 + 0x2cc) = (char)iVar4;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  uVar16 = Atlas_Gameplay_Kart_KartAI__GetRoll(param_1,0);
  *(undefined4 *)(param_1 + 0x2c8) = uVar16;
  if (lVar13 == 0) goto LAB_014d4b9c;
  uVar10 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_IsRespawning(lVar13,0);
  if (((uVar10 & 1) == 0) &&
     (uVar10 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_IsHitSpin(lVar13,0),
     (uVar10 & 1) == 0)) {
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x20), lVar6 == 0)) goto LAB_014d4b9c;
    if (0.0 < *(float *)(lVar6 + 0x5c)) goto code_r0x014d4724;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_014d4b9c;
    uVar3 = /*Atlas.Contexts.GameContextBase$$IsActiveState<object>*/ func_0x0185c060(*(long *)(param_1 + 0x30),uRam0000000003d57088);
  }
  else {
code_r0x014d4724:
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0x2d8) = uVar3;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0xa0), lVar6 != 0)) {
    lVar13 = /*Core.Actors.ActorManager$$FindActorGroup<RicochetProjectile>*/ func_0x0171e69c(lVar6,uRam0000000003d432e8);
    lVar6 = /*Core.Actors.ActorManager$$FindActorGroup<RicochetProjectile>*/ func_0x0171e69c(lVar6,uRam0000000003d432d8);
    if (lVar13 == 0) {
      iVar14 = 0;
    }
    else {
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_014d4b9c;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d0,*(long *)(lVar13 + 0x10),uRam0000000003d3a7d0);
      iVar14 = 0;
      uStack_88 = uStack_c8;
      uStack_90 = uStack_d0;
      plStack_80 = plStack_c0;
      while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_90,uRam0000000003d325c8), plVar9 = plStack_80,
            (uVar10 & 1) != 0) {
        if (plStack_80 != (long *)0x0) {
          if (((*(byte *)(/*Atlas.Gameplay.Usables.RicochetProjectile_TypeInfo*/ lRam0000000003d244c0 + 300) <= *(byte *)(*plStack_80 + 300)) &&
              (*(long *)(*(long *)(*plStack_80 + 200) +
                         (ulong)*(byte *)(/*Atlas.Gameplay.Usables.RicochetProjectile_TypeInfo*/ lRam0000000003d244c0 + 300) * 8 + -8) ==
               /*Atlas.Gameplay.Usables.RicochetProjectile_TypeInfo*/ lRam0000000003d244c0)) && ((char)plStack_80[3] != '\0')) {
            lVar13 = /*Atlas.Gameplay.Usables.RicochetProjectile$$get_RicochetBehaviour*/ func_0x014e4268(plStack_80,0);
            if (lVar13 == 0) {
              func_0x00f78af4();
              goto code_r0x014d4bec;
            }
            lVar13 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar13,0);
            if (lVar13 == 0) {
              func_0x00f78af4();
              goto code_r0x014d4bec;
            }
            /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar13,0);
            uVar16 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            puVar7 = (undefined4 *)(*(long *)(param_1 + 0x300) + (long)iVar14 * 0x10);
            *puVar7 = uVar16;
            puVar7[1] = (int)uVar17;
            puVar7[2] = (int)uVar18;
            puVar7[3] = 0x3f800000;
            lVar13 = /*Atlas.Gameplay.Usables.RicochetProjectile$$get_RicochetBehaviour*/ func_0x014e4268(plVar9,0);
            if (lVar13 == 0) {
              func_0x00f78af4();
              goto code_r0x014d4bec;
            }
            if (*(long *)(lVar13 + 0x50) == 0) {
              func_0x00f78af4();
              goto code_r0x014d4bec;
            }
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(*(long *)(lVar13 + 0x50),0);
            uVar16 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            puVar7 = (undefined4 *)(*(long *)(param_1 + 0x310) + (long)iVar14 * 0x10);
            *puVar7 = uVar16;
            puVar7[1] = (int)uVar17;
            puVar7[2] = (int)uVar18;
            puVar7[3] = 0;
            uVar16 = Atlas_Gameplay_Kart_KartAI__GetRoll(param_1,0);
            *(undefined4 *)(*(long *)(param_1 + 0x2f0) + (long)iVar14 * 4) = uVar16;
            iVar14 = iVar14 + 1;
          }
        }
      }
      aiStack_b8[0] = 0x3da;
      aiStack_b8[3] = 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,uRam0000000003d325c0);
      aiStack_b8[3] = 0;
    }
    iVar12 = 0;
    if (lVar6 != 0) {
      *(int *)(param_1 + 0x330) = iVar14;
      if (*(long *)(lVar6 + 0x10) == 0) goto LAB_014d4b9c;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d0,*(long *)(lVar6 + 0x10),uRam0000000003d3a7d0);
      uStack_88 = uStack_c8;
      uStack_90 = uStack_d0;
      plStack_80 = plStack_c0;
      while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_90,uRam0000000003d325c8), plVar9 = plStack_80,
            iVar1 = aiStack_b8[3], (uVar10 & 1) != 0) {
        if (plStack_80 != (long *)0x0) {
          if (((*(byte *)(/*Atlas.Gameplay.Usables.GoldenTurdProjectile_TypeInfo*/ lRam0000000003d21c08 + 300) <= *(byte *)(*plStack_80 + 300)) &&
              (*(long *)(*(long *)(*plStack_80 + 200) +
                         (ulong)*(byte *)(/*Atlas.Gameplay.Usables.GoldenTurdProjectile_TypeInfo*/ lRam0000000003d21c08 + 300) * 8 + -8) ==
               /*Atlas.Gameplay.Usables.GoldenTurdProjectile_TypeInfo*/ lRam0000000003d21c08)) && ((char)plStack_80[3] != '\0')) {
            lVar6 = /*Atlas.Gameplay.Usables.GoldenTurdProjectile$$get_GoldenTurdProjectileBehaviour*/ func_0x015b3d30(plStack_80,0);
            if (lVar6 == 0) {
              func_0x00f78af4();
              goto code_r0x014d4bec;
            }
            lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
            if (lVar6 == 0) {
              func_0x00f78af4();
              goto code_r0x014d4bec;
            }
            /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar6,0);
            uVar16 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            puVar7 = (undefined4 *)(*(long *)(param_1 + 0x300) + (long)iVar14 * 0x10);
            *puVar7 = uVar16;
            puVar7[1] = (int)uVar17;
            puVar7[2] = (int)uVar18;
            puVar7[3] = 0x3f800000;
            lVar6 = /*Atlas.Gameplay.Usables.GoldenTurdProjectile$$get_GoldenTurdProjectileBehaviour*/ func_0x015b3d30(plVar9,0);
            if (lVar6 == 0) {
              func_0x00f78af4();
              goto code_r0x014d4bec;
            }
            if (*(long *)(lVar6 + 0x50) == 0) {
              func_0x00f78af4();
              goto code_r0x014d4bec;
            }
            /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(*(long *)(lVar6 + 0x50),0);
            uVar16 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            puVar7 = (undefined4 *)(*(long *)(param_1 + 0x310) + (long)iVar14 * 0x10);
            *puVar7 = uVar16;
            puVar7[1] = (int)uVar17;
            puVar7[2] = (int)uVar18;
            puVar7[3] = 0;
            uVar16 = Atlas_Gameplay_Kart_KartAI__GetRoll(param_1,0);
            *(undefined4 *)(*(long *)(param_1 + 0x2f0) + (long)iVar14 * 4) = uVar16;
            iVar14 = iVar14 + 1;
          }
        }
      }
      iVar12 = aiStack_b8[3] + 1;
      aiStack_b8[0] = 0x4c0;
      aiStack_b8[3] = iVar12;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,uRam0000000003d325c0);
      if ((iVar12 != 0) && (aiStack_b8[iVar1] == 0x4c0)) {
        aiStack_b8[3] = iVar1;
        iVar12 = iVar1;
      }
    }
    *(float *)(param_1 + 0x264) = (float)iVar14;
    if ((iVar4 != 0) && (*(float *)(param_1 + 300) < 0.0)) {
      uVar5 = *(uint *)(param_1 + 0x434) ^ *(uint *)(param_1 + 0x434) << 0xd;
      uVar5 = uVar5 ^ uVar5 >> 0x11;
      *(uint *)(param_1 + 0x434) = uVar5 ^ uVar5 << 5;
      if ((*(long *)(param_1 + 0x38) == 0) ||
         (((lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x38), lVar6 == 0 ||
           (lVar6 = Atlas_Gameplay_Kart_KartUsableManager__get_CurHeldUsable(lVar6,0), lVar6 == 0))
          || (plVar9 = *(long **)(lVar6 + 0x30), plVar9 == (long *)0x0)))) goto LAB_014d4b9c;
      uVar5 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
      *(uint *)(param_1 + 0x2d0) = uVar5;
      if (uVar5 < 2) {
        if (((*(long *)(param_1 + 0x30) == 0) ||
            (lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x130), lVar6 == 0)) ||
           (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_014d4b9c;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,lVar6,uRam0000000003d3ae20);
        iVar4 = 0;
        while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a8,uRam0000000003d328d0), (uVar10 & 1) != 0) {
          if (lStack_98 != *(long *)(param_1 + 0x38)) {
            if (lStack_98 == 0) goto code_r0x014d4ba0;
            if (*(long *)(lStack_98 + 0x10) == 0) {
              func_0x00f78af4();
              goto code_r0x014d4bec;
            }
            lVar6 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(lStack_98 + 0x10),0);
            uVar16 = *(undefined4 *)(lVar6 + 0x144);
            puVar8 = (undefined8 *)(*(long *)(param_1 + 800) + (long)iVar4 * 0x10);
            *puVar8 = *(undefined8 *)(lVar6 + 0x13c);
            *(undefined4 *)(puVar8 + 1) = uVar16;
            *(undefined4 *)((long)puVar8 + 0xc) = 0x3f800000;
            iVar4 = iVar4 + 1;
          }
        }
        aiStack_b8[iVar12] = 0x5be;
        aiStack_b8[3] = aiStack_b8[3] + 1;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,uRam0000000003d328c8);
        *(int *)(param_1 + 0x2d4) = iVar4;
      }
    }
    return;
  }
LAB_014d4b9c:
  func_0x00f78af4();
code_r0x014d4ba0:
  func_0x00f78af4();
code_r0x014d4bec:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14d4bf0);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14d4cf0 | Atlas.Gameplay.Kart.RaceKartAI.RunUpdateJob
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAI__RunUpdateJob(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_320 [752];
  
  if ((bRam0000000003eb4ba3 & 1) == 0) {
    func_0x00f78a20(0x3d57fb0);
    bRam0000000003eb4ba3 = 1;
  }
  uVar2 = uRam0000000003d57fb0;
  _memcpy(auStack_320,param_1 + 0x158,0x2f0);
  /*Unity.Jobs.IJobExtensions$$Run<RaceKartAIUpdateJob>*/ func_0x0185e794(auStack_320,uVar2);
  uVar1 = *(uint *)(param_1 + 0x434) ^ *(uint *)(param_1 + 0x434) << 0xd;
  uVar1 = uVar1 ^ uVar1 >> 0x11;
  *(uint *)(param_1 + 0x434) = uVar1 ^ uVar1 << 5;
  return;
}



// ============================================================
// RVA: 0x14d4d78 | Atlas.Gameplay.Kart.RaceKartAI.PostUpdateJob
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAI__PostUpdateJob(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x438) + 0x14);
  iVar2 = *(int *)(param_1 + 0xb4);
  _memmove(param_1 + 0xa0,*(long *)(param_1 + 0x438),0xb4);
  if ((iVar2 < iVar1) && (*(long *)(param_1 + 0x60) != 0)) {
    /*System.Action$$Invoke*/ func_0x02924c90(*(long *)(param_1 + 0x60),0);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x124);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x11c);
  *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 300);
  return;
}



// ============================================================
// RVA: 0x14d4de8 | Atlas.Gameplay.Kart.RaceKartAI.UpdateWrongWay
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAI__UpdateWrongWay
               (float param_1,long param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  uint uVar13;
  float extraout_s0;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ulong unaff_d11;
  uint uVar22;
  ulong unaff_d12;
  uint uVar23;
  ulong unaff_d13;
  undefined4 uVar24;
  undefined4 uVar25;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  
  if ((int)(param_3 | param_4) < 0) {
    return;
  }
  if (*(int *)(param_2 + 0x3b0) <= (int)param_3 || *(int *)(param_2 + 0x3b0) <= (int)param_4) {
    return;
  }
  if ((*(long *)(param_2 + 0x38) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_2 + 0x38) + 0x10), lVar4 != 0)) {
    lVar4 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar4,0);
    fVar14 = *(float *)(lVar4 + 0x11c);
    fVar17 = *(float *)(lVar4 + 0x120);
    fVar10 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x118),0);
    unaff_d11 = (ulong)(uint)fVar17;
    lVar4 = *(long *)(param_2 + 0x3a8) + (long)(int)param_4 * 0x70;
    fVar15 = *(float *)(lVar4 + 0x24);
    fVar18 = *(float *)(lVar4 + 0x28);
    fVar11 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x20),0);
    bVar2 = fVar17 * fVar18 + fVar10 * fVar11 + fVar14 * fVar15 < 0.0;
    *(bool *)(param_2 + 0x88) = bVar2;
    fVar10 = 0.0;
    if (!bVar2) goto LAB_014d4f9c;
    if (*(long *)(param_2 + 0x448) != 0) {
      if (*(float *)(param_2 + 0x8c) <= *(float *)(*(long *)(param_2 + 0x448) + 100)) {
        fVar10 = *(float *)(param_2 + 0x8c) + param_1;
LAB_014d4f9c:
        *(float *)(param_2 + 0x8c) = fVar10;
        return;
      }
      puVar6 = (undefined4 *)(*(long *)(param_2 + 0x3a8) + (long)(int)param_3 * 0x70);
      uVar16 = puVar6[1];
      uVar19 = puVar6[2];
      uVar21 = puVar6[8];
      uVar22 = puVar6[9];
      uVar23 = puVar6[10];
      uVar24 = puVar6[0x10];
      uVar25 = puVar6[0x11];
      uVar20 = puVar6[0x12];
      lVar4 = *(long *)(param_2 + 0x38);
      uVar12 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*puVar6,0);
      uVar13 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar21,0);
      unaff_d11 = (ulong)uVar13;
      unaff_d12 = (ulong)uVar22;
      unaff_d13 = (ulong)uVar23;
      uVar21 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(uVar24,uVar25,uVar20,0);
      uVar25 = /*UnityEngine.Quaternion$$LookRotation*/ func_0x03251cec(uVar13,uVar22,uVar23,uVar21,uVar25,uVar20,0);
      if (lVar4 != 0) {
        Atlas_Gameplay_Kart_KartComposite__InvokeRespawn
                  (uVar12,uVar16,uVar19,uVar25,uVar22,uVar23,uVar21,0xbf800000,lVar4,2,0);
        goto LAB_014d4f9c;
      }
    }
  }
  lVar4 = func_0x00f78af4();
  if (*(char *)(lVar4 + 0xfc) != '\0') {
    lVar8 = *(long *)(lVar4 + 0x38);
    uVar22 = *(uint *)(lVar4 + 0x104);
    uVar23 = *(uint *)(lVar4 + 0x108);
    uVar13 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x100),0);
    uVar21 = *(undefined4 *)(lVar4 + 0x110);
    uVar25 = *(undefined4 *)(lVar4 + 0x114);
    uVar16 = *(undefined4 *)(lVar4 + 0x118);
    uVar12 = /*Unity.Mathematics.quaternion$$op_Implicit*/ func_0x030c6310(*(undefined4 *)(lVar4 + 0x10c),uVar21,uVar25,uVar16,0);
    if (lVar8 == 0) {
      lVar4 = func_0x00f78af4();
      uStack_130 = unaff_d13;
      uStack_128 = unaff_d12;
      uStack_120 = unaff_d11;
      uStack_118 = (ulong)uVar23;
      uStack_110 = (ulong)uVar22;
      uStack_108 = (ulong)uVar13;
      if ((bRam0000000003eb4ba1 & 1) == 0) {
        func_0x00f78a20(0x3d22c68);
        bRam0000000003eb4ba1 = 1;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) + 8);
      /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar7,0);
      if (*(long *)(lVar4 + 0x38) == 0) {
        func_0x00f78af4();
      }
      else {
        uVar5 = Atlas_Gameplay_Kart_KartComposite__get_IsLocalPlayerInput(*(long *)(lVar4 + 0x38),0)
        ;
        if (((((uVar5 & 1) != 0) || (*(long *)(lVar4 + 0x30) == 0)) ||
            (lVar8 = *(long *)(*(long *)(lVar4 + 0x30) + 0x40), lVar8 == 0)) ||
           (fVar10 = *(float *)(lVar4 + 0x458) - extraout_s0, *(float *)(lVar4 + 0x458) = fVar10,
           0.0 < fVar10)) {
code_r0x014d516c:
          if (pcRam0000000003ec05a0 == (code *)0x0) {
            pcRam0000000003ec05a0 =
                 (code *)func_0x00f789d4(
                                        "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003ec05a0)(uVar7);
          return;
        }
        *(undefined4 *)(lVar4 + 0x458) = 0x3d888889;
        *(undefined4 *)(lVar4 + 0x84) = 0x3f800000;
        if (*(long *)(lVar4 + 0x38) == 0) {
          func_0x00f78af4();
        }
        else {
          lVar9 = *(long *)(*(long *)(lVar4 + 0x38) + 0x90);
          if (lVar9 != 0) {
            if ((*(char *)(lVar9 + 0x98) == '\0') &&
               (iVar3 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetAIPlacement*/ func_0x015a6754(lVar8,lVar9,0), -1 < iVar3)) {
              lVar8 = *(long *)(lVar4 + 0x450);
              if (lVar8 == 0) {
                if (*(long *)(lVar4 + 0x98) == 0) {
                  func_0x00f78af4();
                  goto code_r0x014d52dc;
                }
                lVar8 = /*Atlas.Gameplay.RaceAIUtilityManager$$GetAIGroupBasedOnRacePlacement*/ func_0x014d2074();
                if (lVar8 == 0) goto code_r0x014d516c;
              }
              if (0 < *(int *)(lVar8 + 0x10)) {
                uVar12 = /*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(lVar9,0);
                *(undefined4 *)(lVar4 + 0x84) = *(undefined4 *)(lVar8 + 0x14);
                lVar9 = *(long *)(lVar4 + 0x98);
                if (lVar9 == 0) {
                  func_0x00f78af4();
                  goto code_r0x014d52dc;
                }
                if (*(char *)(lVar9 + 0x21) == '\0') {
                  /*Atlas.Gameplay.RaceAIUtilityManager$$UpdateValidData*/ func_0x014d1f80(lVar9);
                }
                fVar10 = *(float *)(lVar9 + 0x40);
                Atlas_Gameplay_Kart_RaceAIGroup__GetRubberbandingRuleFromProgress
                          (&fStack_148,uVar12,(int *)(lVar8 + 0x10));
                if (0.0 < fStack_148) {
                  if (*(long *)(lVar8 + 0x28) != 0) {
                    fVar11 = (float)/*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(*(long *)(lVar8 + 0x28),0);
                    if (*(long *)(lVar4 + 0x68) == 0) {
                      func_0x00f78af4();
                      goto code_r0x014d52dc;
                    }
                    if (fStack_144 <= (fVar10 - fVar11) * *(float *)(*(long *)(lVar4 + 0x68) + 0x58)
                       ) {
                      *(float *)(lVar4 + 0x84) = fStack_140 * *(float *)(lVar4 + 0x84);
                    }
                  }
                  if (*(long *)(lVar8 + 0x30) != 0) {
                    fVar11 = (float)/*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(*(long *)(lVar8 + 0x30),0);
                    if (*(long *)(lVar4 + 0x68) == 0) {
                      func_0x00f78af4();
                      goto code_r0x014d52dc;
                    }
                    if (fStack_13c <= (fVar11 - fVar10) * *(float *)(*(long *)(lVar4 + 0x68) + 0x58)
                       ) {
                      *(float *)(lVar4 + 0x84) = fStack_138 * *(float *)(lVar4 + 0x84);
                    }
                  }
                }
              }
            }
            goto code_r0x014d516c;
          }
          func_0x00f78af4();
        }
      }
code_r0x014d52dc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14d52e0);
      (*pcVar1)();
    }
    Atlas_Gameplay_Kart_KartComposite__InvokeRespawn
              (uVar13,uVar22,uVar23,uVar12,uVar21,uVar25,uVar16,0xbf800000,lVar8,3,0);
    *(undefined1 *)(lVar4 + 0xfc) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x14d4fc8 | Atlas.Gameplay.Kart.RaceKartAI.CheckStuckAI
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAI__CheckStuckAI(long param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float extraout_s0;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  
  if (*(char *)(param_1 + 0xfc) != '\0') {
    lVar6 = *(long *)(param_1 + 0x38);
    uVar12 = *(undefined4 *)(param_1 + 0x104);
    uVar14 = *(undefined4 *)(param_1 + 0x108);
    uVar8 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(param_1 + 0x100),0);
    uVar13 = *(undefined4 *)(param_1 + 0x110);
    uVar15 = *(undefined4 *)(param_1 + 0x114);
    uVar16 = *(undefined4 *)(param_1 + 0x118);
    uVar9 = /*Unity.Mathematics.quaternion$$op_Implicit*/ func_0x030c6310(*(undefined4 *)(param_1 + 0x10c),uVar13,uVar15,uVar16,0);
    if (lVar6 == 0) {
      lVar6 = func_0x00f78af4();
      if ((bRam0000000003eb4ba1 & 1) == 0) {
        func_0x00f78a20(0x3d22c68);
        bRam0000000003eb4ba1 = 1;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) + 8);
      /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
      if (*(long *)(lVar6 + 0x38) == 0) {
        func_0x00f78af4();
      }
      else {
        uVar3 = Atlas_Gameplay_Kart_KartComposite__get_IsLocalPlayerInput(*(long *)(lVar6 + 0x38),0)
        ;
        if (((((uVar3 & 1) != 0) || (*(long *)(lVar6 + 0x30) == 0)) ||
            (lVar4 = *(long *)(*(long *)(lVar6 + 0x30) + 0x40), lVar4 == 0)) ||
           (fVar10 = *(float *)(lVar6 + 0x458) - extraout_s0, *(float *)(lVar6 + 0x458) = fVar10,
           0.0 < fVar10)) {
code_r0x014d516c:
          if (pcRam0000000003ec05a0 == (code *)0x0) {
            pcRam0000000003ec05a0 =
                 (code *)func_0x00f789d4(
                                        "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003ec05a0)(uVar5);
          return;
        }
        *(undefined4 *)(lVar6 + 0x458) = 0x3d888889;
        *(undefined4 *)(lVar6 + 0x84) = 0x3f800000;
        if (*(long *)(lVar6 + 0x38) == 0) {
          func_0x00f78af4();
        }
        else {
          lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x90);
          if (lVar7 != 0) {
            if ((*(char *)(lVar7 + 0x98) == '\0') &&
               (iVar2 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetAIPlacement*/ func_0x015a6754(lVar4,lVar7,0), -1 < iVar2)) {
              lVar4 = *(long *)(lVar6 + 0x450);
              if (lVar4 == 0) {
                if (*(long *)(lVar6 + 0x98) == 0) {
                  func_0x00f78af4();
                  goto code_r0x014d52dc;
                }
                lVar4 = /*Atlas.Gameplay.RaceAIUtilityManager$$GetAIGroupBasedOnRacePlacement*/ func_0x014d2074();
                if (lVar4 == 0) goto code_r0x014d516c;
              }
              if (0 < *(int *)(lVar4 + 0x10)) {
                uVar8 = /*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(lVar7,0);
                *(undefined4 *)(lVar6 + 0x84) = *(undefined4 *)(lVar4 + 0x14);
                lVar7 = *(long *)(lVar6 + 0x98);
                if (lVar7 == 0) {
                  func_0x00f78af4();
                  goto code_r0x014d52dc;
                }
                if (*(char *)(lVar7 + 0x21) == '\0') {
                  /*Atlas.Gameplay.RaceAIUtilityManager$$UpdateValidData*/ func_0x014d1f80(lVar7);
                }
                fVar10 = *(float *)(lVar7 + 0x40);
                Atlas_Gameplay_Kart_RaceAIGroup__GetRubberbandingRuleFromProgress
                          (&fStack_c8,uVar8,(int *)(lVar4 + 0x10));
                if (0.0 < fStack_c8) {
                  if (*(long *)(lVar4 + 0x28) != 0) {
                    fVar11 = (float)/*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(*(long *)(lVar4 + 0x28),0);
                    if (*(long *)(lVar6 + 0x68) == 0) {
                      func_0x00f78af4();
                      goto code_r0x014d52dc;
                    }
                    if (fStack_c4 <= (fVar10 - fVar11) * *(float *)(*(long *)(lVar6 + 0x68) + 0x58))
                    {
                      *(float *)(lVar6 + 0x84) = fStack_c0 * *(float *)(lVar6 + 0x84);
                    }
                  }
                  if (*(long *)(lVar4 + 0x30) != 0) {
                    fVar11 = (float)/*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(*(long *)(lVar4 + 0x30),0);
                    if (*(long *)(lVar6 + 0x68) == 0) {
                      func_0x00f78af4();
                      goto code_r0x014d52dc;
                    }
                    if (fStack_bc <= (fVar11 - fVar10) * *(float *)(*(long *)(lVar6 + 0x68) + 0x58))
                    {
                      *(float *)(lVar6 + 0x84) = fStack_b8 * *(float *)(lVar6 + 0x84);
                    }
                  }
                }
              }
            }
            goto code_r0x014d516c;
          }
          func_0x00f78af4();
        }
      }
code_r0x014d52dc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14d52e0);
      (*pcVar1)();
    }
    Atlas_Gameplay_Kart_KartComposite__InvokeRespawn
              (uVar8,uVar12,uVar14,uVar9,uVar13,uVar15,uVar16,0xbf800000,lVar6,3,0);
    *(undefined1 *)(param_1 + 0xfc) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x14d5084 | Atlas.Gameplay.Kart.RaceKartAI.UpdateSpeedFactor
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAI__UpdateSpeedFactor(float param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  if ((bRam0000000003eb4ba1 & 1) == 0) {
    func_0x00f78a20(0x3d22c68);
    bRam0000000003eb4ba1 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
  if (*(long *)(param_2 + 0x38) == 0) {
    func_0x00f78af4();
  }
  else {
    uVar3 = Atlas_Gameplay_Kart_KartComposite__get_IsLocalPlayerInput(*(long *)(param_2 + 0x38),0);
    if (((((uVar3 & 1) != 0) || (*(long *)(param_2 + 0x30) == 0)) ||
        (lVar4 = *(long *)(*(long *)(param_2 + 0x30) + 0x40), lVar4 == 0)) ||
       (param_1 = *(float *)(param_2 + 0x458) - param_1, *(float *)(param_2 + 0x458) = param_1,
       0.0 < param_1)) {
LAB_014d516c:
      if (pcRam0000000003ec05a0 == (code *)0x0) {
        pcRam0000000003ec05a0 =
             (code *)func_0x00f789d4(
                                    "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec05a0)(uVar5);
      return;
    }
    *(undefined4 *)(param_2 + 0x458) = 0x3d888889;
    *(undefined4 *)(param_2 + 0x84) = 0x3f800000;
    if (*(long *)(param_2 + 0x38) == 0) {
      func_0x00f78af4();
    }
    else {
      lVar6 = *(long *)(*(long *)(param_2 + 0x38) + 0x90);
      if (lVar6 != 0) {
        if ((*(char *)(lVar6 + 0x98) == '\0') &&
           (iVar2 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetAIPlacement*/ func_0x015a6754(lVar4,lVar6,0), -1 < iVar2)) {
          lVar4 = *(long *)(param_2 + 0x450);
          if (lVar4 == 0) {
            if (*(long *)(param_2 + 0x98) == 0) {
              func_0x00f78af4();
              goto code_r0x014d52dc;
            }
            lVar4 = /*Atlas.Gameplay.RaceAIUtilityManager$$GetAIGroupBasedOnRacePlacement*/ func_0x014d2074();
            if (lVar4 == 0) goto LAB_014d516c;
          }
          if (0 < *(int *)(lVar4 + 0x10)) {
            uVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(lVar6,0);
            *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(lVar4 + 0x14);
            lVar6 = *(long *)(param_2 + 0x98);
            if (lVar6 == 0) {
              func_0x00f78af4();
              goto code_r0x014d52dc;
            }
            if (*(char *)(lVar6 + 0x21) == '\0') {
              /*Atlas.Gameplay.RaceAIUtilityManager$$UpdateValidData*/ func_0x014d1f80(lVar6);
            }
            fVar9 = *(float *)(lVar6 + 0x40);
            Atlas_Gameplay_Kart_RaceAIGroup__GetRubberbandingRuleFromProgress
                      (&fStack_88,uVar7,(int *)(lVar4 + 0x10));
            if (0.0 < fStack_88) {
              if (*(long *)(lVar4 + 0x28) != 0) {
                fVar8 = (float)/*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(*(long *)(lVar4 + 0x28),0);
                if (*(long *)(param_2 + 0x68) == 0) {
                  func_0x00f78af4();
                  goto code_r0x014d52dc;
                }
                if (fStack_84 <= (fVar9 - fVar8) * *(float *)(*(long *)(param_2 + 0x68) + 0x58)) {
                  *(float *)(param_2 + 0x84) = fStack_80 * *(float *)(param_2 + 0x84);
                }
              }
              if (*(long *)(lVar4 + 0x30) != 0) {
                fVar8 = (float)/*Atlas.Gameplay.Player.GameContextPlayer$$GetRaceProgress*/ func_0x015a569c(*(long *)(lVar4 + 0x30),0);
                if (*(long *)(param_2 + 0x68) == 0) {
                  func_0x00f78af4();
                  goto code_r0x014d52dc;
                }
                if (fStack_7c <= (fVar8 - fVar9) * *(float *)(*(long *)(param_2 + 0x68) + 0x58)) {
                  *(float *)(param_2 + 0x84) = fStack_78 * *(float *)(param_2 + 0x84);
                }
              }
            }
          }
        }
        goto LAB_014d516c;
      }
      func_0x00f78af4();
    }
  }
code_r0x014d52dc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14d52e0);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14d5370 | Atlas.Gameplay.Kart.RaceKartAI.LateUpdate
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAI__LateUpdate(long param_1)

{
  if (*(long *)(param_1 + 0x98) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x98) + 0x21) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x14d5380 | Atlas.Gameplay.Kart.RaceKartAI..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_Kart_RaceKartAI___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4ba4 & 1) == 0) {
    func_0x00f78a20(0x3d22c68);
    bRam0000000003eb4ba4 = 1;
  }
  uVar1 = _UNK_033f8540;
  *(undefined8 *)(param_1 + 0x78) = _UNK_033f8548;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x80) = _UNK_033f8528;
  *(undefined4 *)(param_1 + 0x458) = 0xbf800000;
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return param_1;
}



