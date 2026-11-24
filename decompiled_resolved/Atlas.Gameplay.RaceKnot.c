// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.RaceKnot

// ============================================================
// RVA: 0x14d69c4 | Atlas.Gameplay.RaceKnot.get_PrimaryNext
// ============================================================

ulong Atlas_Gameplay_RaceKnot__get_PrimaryNext(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar2 + 0x18) != 0) {
    return (ulong)*(uint *)(lVar2 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  lVar2 = *(long *)(lVar2 + 0x30);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar2 + 0x18) != 0) {
    return (ulong)*(uint *)(lVar2 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  lVar2 = *(long *)(lVar2 + 0x40);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar2 + 0x18) != 0) {
    return *(ulong *)(lVar2 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  return (ulong)(*(char *)(lVar2 + 0x48) == '\0');
}



// ============================================================
// RVA: 0x14d69f8 | Atlas.Gameplay.RaceKnot.get_PrimaryPrev
// ============================================================

ulong Atlas_Gameplay_RaceKnot__get_PrimaryPrev(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar2 + 0x18) != 0) {
    return (ulong)*(uint *)(lVar2 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  lVar2 = *(long *)(lVar2 + 0x40);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar2 + 0x18) != 0) {
    return *(ulong *)(lVar2 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  return (ulong)(*(char *)(lVar2 + 0x48) == '\0');
}



// ============================================================
// RVA: 0x14d6a2c | Atlas.Gameplay.RaceKnot.get_PrimaryNextPoly
// ============================================================

ulong Atlas_Gameplay_RaceKnot__get_PrimaryNextPoly(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(lVar2 + 0x18) != 0) {
    return *(ulong *)(lVar2 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar1,0);
  return (ulong)(*(char *)(lVar2 + 0x48) == '\0');
}



// ============================================================
// RVA: 0x14d6a60 | Atlas.Gameplay.RaceKnot.get_IsMainRoute
// ============================================================

bool Atlas_Gameplay_RaceKnot__get_IsMainRoute(long param_1)

{
  return *(char *)(param_1 + 0x48) == '\0';
}



// ============================================================
// RVA: 0x14d6a70 | Atlas.Gameplay.RaceKnot.get_IsBranchedRoute
// ============================================================

undefined1 Atlas_Gameplay_RaceKnot__get_IsBranchedRoute(long param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x14d6a78 | Atlas.Gameplay.RaceKnot.get_IsStartEnd
// ============================================================

bool Atlas_Gameplay_RaceKnot__get_IsStartEnd(long param_1)

{
  return *(int *)(param_1 + 0x10) == 0;
}



// ============================================================
// RVA: 0x14d6a88 | Atlas.Gameplay.RaceKnot.get_ID
// ============================================================

undefined4 Atlas_Gameplay_RaceKnot__get_ID(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x14d6a90 | Atlas.Gameplay.RaceKnot.get_KnotBehaviourID
// ============================================================

undefined4 Atlas_Gameplay_RaceKnot__get_KnotBehaviourID(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ============================================================
// RVA: 0x14d6a98 | Atlas.Gameplay.RaceKnot.get_WorldPos
// ============================================================

undefined4 Atlas_Gameplay_RaceKnot__get_WorldPos(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14d6aa4 | Atlas.Gameplay.RaceKnot.get_NextKnots
// ============================================================

undefined8 Atlas_Gameplay_RaceKnot__get_NextKnots(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x14d6aac | Atlas.Gameplay.RaceKnot.get_PreviousKnots
// ============================================================

undefined8 Atlas_Gameplay_RaceKnot__get_PreviousKnots(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x14d6ab4 | Atlas.Gameplay.RaceKnot.get_NextKnotsProbabilityWeight
// ============================================================

undefined8 Atlas_Gameplay_RaceKnot__get_NextKnotsProbabilityWeight(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x14d6abc | Atlas.Gameplay.RaceKnot.get_PolyLinesToNext
// ============================================================

undefined8 Atlas_Gameplay_RaceKnot__get_PolyLinesToNext(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x14d6ac4 | Atlas.Gameplay.RaceKnot.get_DistToLap
// ============================================================

undefined4 Atlas_Gameplay_RaceKnot__get_DistToLap(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ============================================================
// RVA: 0x14d6acc | Atlas.Gameplay.RaceKnot.get_DistFromStartLap
// ============================================================

undefined4 Atlas_Gameplay_RaceKnot__get_DistFromStartLap(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x14d6ad4 | Atlas.Gameplay.RaceKnot.AddNextKnot
// ============================================================

void Atlas_Gameplay_RaceKnot__AddNextKnot
               (long param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb4ba9 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1f2d0);
    bRam0000000003eb4ba9 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(int *)(*(long *)(param_1 + 0x28) + 0x18) + 1);
    lVar2 = *(long *)(param_1 + 0x28);
    if ((lVar2 != 0) && (/*System.Array$$Copy*/ func_0x0292c49c(lVar2,lVar1,*(undefined4 *)(lVar2 + 0x18),0), lVar1 != 0))
    {
      if ((int)*(long *)(lVar1 + 0x18) == 0) goto LAB_014d6c50;
      *(undefined4 *)(lVar1 + ((*(long *)(lVar1 + 0x18) << 0x20) + -0x100000000 >> 0x1e) + 0x20) =
           param_2;
      *(long *)(param_1 + 0x28) = lVar1;
      lVar1 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100);
      lVar2 = *(long *)(param_1 + 0x38);
      if ((lVar2 != 0) && (/*System.Array$$Copy*/ func_0x0292c49c(lVar2,lVar1,*(undefined4 *)(lVar2 + 0x18),0), lVar1 != 0)
         ) {
        if ((int)*(long *)(lVar1 + 0x18) == 0) goto LAB_014d6c50;
        *(undefined4 *)(lVar1 + ((*(long *)(lVar1 + 0x18) << 0x20) + -0x100000000 >> 0x1e) + 0x20) =
             param_3;
        *(long *)(param_1 + 0x38) = lVar1;
        if (*(long *)(param_1 + 0x40) != 0) {
          plVar3 = (long *)func_0x00f78a34(/*RacePolyLine[]_TypeInfo*/ uRam0000000003d1f2d0,
                                           *(int *)(*(long *)(param_1 + 0x40) + 0x18) + 1);
          lVar1 = *(long *)(param_1 + 0x40);
          if ((lVar1 != 0) &&
             (/*System.Array$$Copy*/ func_0x0292c49c(lVar1,plVar3,*(undefined4 *)(lVar1 + 0x18),0), plVar3 != (long *)0x0))
          {
            if ((param_4 != 0) &&
               (lVar1 = func_0x00f78adc(param_4,*(undefined8 *)(*plVar3 + 0x40)), lVar1 == 0))
            goto LAB_014d6c5c;
            if ((int)plVar3[3] != 0) {
              *(long *)((long)plVar3 + ((plVar3[3] << 0x20) + -0x100000000 >> 0x1d) + 0x20) =
                   param_4;
              *(long **)(param_1 + 0x40) = plVar3;
              return;
            }
            goto LAB_014d6c50;
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_014d6c50:
  uVar4 = func_0x00f78b24();
  do {
    func_0x00f78ac0(uVar4,0);
LAB_014d6c5c:
    uVar4 = func_0x00f78b14();
  } while( true );
}



// ============================================================
// RVA: 0x14d6c64 | Atlas.Gameplay.RaceKnot.AddPreviousKnot
// ============================================================

/* WARNING: Possible PIC construction at 0x014d6e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d6e58) */

void Atlas_Gameplay_RaceKnot__AddPreviousKnot
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000003eb4baa & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb4baa = 1;
  }
  if (*(long *)(param_4 + 0x30) == 0) {
LAB_014d6d08:
    func_0x00f78af4();
  }
  else {
    lVar3 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(int *)(*(long *)(param_4 + 0x30) + 0x18) + 1);
    lVar4 = *(long *)(param_4 + 0x30);
    if (lVar4 == 0) goto LAB_014d6d08;
    param_6 = *(undefined4 *)(lVar4 + 0x18);
    param_7 = 0;
    /*System.Array$$Copy*/ func_0x0292c49c(lVar4,lVar3);
    if (lVar3 == 0) goto LAB_014d6d08;
    if ((int)*(long *)(lVar3 + 0x18) != 0) {
      *(undefined4 *)(lVar3 + ((*(long *)(lVar3 + 0x18) << 0x20) + -0x100000000 >> 0x1e) + 0x20) =
           param_5;
      *(long *)(param_4 + 0x30) = lVar3;
      return;
    }
  }
  uVar5 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar5,0);
  lVar4 = auVar9._8_8_;
  lVar3 = auVar9._0_8_;
  if ((bRam0000000003eb4bab & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1f2d0);
    bRam0000000003eb4bab = 1;
  }
  uVar5 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0);
  *(undefined8 *)(lVar3 + 0x28) = uVar5;
  uVar5 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0);
  *(undefined8 *)(lVar3 + 0x30) = uVar5;
  uVar5 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0);
  *(undefined8 *)(lVar3 + 0x38) = uVar5;
  uVar5 = func_0x00f78a34(/*RacePolyLine[]_TypeInfo*/ uRam0000000003d1f2d0,0);
  *(undefined8 *)(lVar3 + 0x40) = uVar5;
  /*System.Object$$.ctor*/ func_0x0294d018(lVar3,0);
  if (lVar4 != 0) {
    uVar8 = *(undefined4 *)(lVar4 + 0x38);
    *(undefined4 *)(lVar3 + 0x10) = param_6;
    *(undefined4 *)(lVar3 + 0x14) = uVar8;
    lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar4,0);
    if (lVar4 != 0) {
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0);
      uVar8 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      *(undefined4 *)(lVar3 + 0x18) = uVar8;
      *(undefined4 *)(lVar3 + 0x1c) = param_2;
      *(undefined4 *)(lVar3 + 0x20) = param_3;
      *(undefined1 *)(lVar3 + 0x48) = param_7;
      return;
    }
  }
  lVar3 = func_0x00f78af4();
  lVar3 = *(long *)(lVar3 + 0x40);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) < 1) {
      return;
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x20);
      if (lVar3 != 0) goto code_r0x014d6e84;
    }
  }
  lVar3 = func_0x00f78af4();
code_r0x014d6e84:
  if ((bRam0000000003eb4baf & 1) == 0) {
    func_0x00f78a20(0x3d3e438);
    func_0x00f78a20(0x3d3e428);
    func_0x00f78a20(0x3d3e470);
    bRam0000000003eb4baf = 1;
  }
  /*Unity.Collections.NativeArray<RacePolyLine.BurstCompatiblePoint>$$Dispose*/ func_0x02612e74(lVar3 + 0x30,uRam0000000003d3e470);
  /*Unity.Collections.NativeArray<FindClosestPointOnPolyLineJob.ClosestPointResult>$$Dispose*/ func_0x0260ec70(lVar3 + 0x40,uRam0000000003d3e438);
  lVar4 = *(long *)(lVar3 + 0x50);
  if (lVar4 == 0) {
    func_0x00f78a24(0x3d23998,uRam0000000003d3e428);
    uVar6 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d73ae8);
    lVar3 = 0;
    /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar6,uVar5);
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x5c);
    if (iVar1 != 0) {
      if (1 < iVar1) {
        /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar4,iVar1,0);
        *(undefined4 *)(lVar3 + 0x5c) = 0;
      }
      *(long *)(lVar3 + 0x50) = 0;
      *(undefined4 *)(lVar3 + 0x58) = 0;
      return;
    }
    func_0x00f78a24(0x3d22a38);
    uVar6 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d73ae0);
    lVar3 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar6,uVar5);
  }
  uVar5 = func_0x00f78a24(0x3d3e428);
  auVar9 = func_0x00f78ac0(uVar6,uVar5);
  uVar5 = *auVar9._0_8_;
  uVar6 = auVar9._0_8_[1];
  lVar7 = *(long *)(lVar3 + 0x18);
  uVar2 = *(ushort *)(lVar7 + 0x132);
  lVar4 = lVar7;
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar7);
    lVar4 = *(long *)(lVar3 + 0x18);
    uVar2 = *(ushort *)(lVar4 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0260dd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(auVar9._8_8_,uVar5,uVar6,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20))
  ;
  return;
}



// ============================================================
// RVA: 0x14d6d18 | Atlas.Gameplay.RaceKnot..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x014d6e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d6e58) */

void Atlas_Gameplay_RaceKnot___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000003eb4bab & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1f2d0);
    bRam0000000003eb4bab = 1;
  }
  uVar3 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0);
  *(undefined8 *)(param_4 + 0x28) = uVar3;
  uVar3 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0);
  *(undefined8 *)(param_4 + 0x30) = uVar3;
  uVar3 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,0);
  *(undefined8 *)(param_4 + 0x38) = uVar3;
  uVar3 = func_0x00f78a34(/*RacePolyLine[]_TypeInfo*/ uRam0000000003d1f2d0,0);
  *(undefined8 *)(param_4 + 0x40) = uVar3;
  /*System.Object$$.ctor*/ func_0x0294d018(param_4,0);
  if (param_5 != 0) {
    uVar8 = *(undefined4 *)(param_5 + 0x38);
    *(undefined4 *)(param_4 + 0x10) = param_6;
    *(undefined4 *)(param_4 + 0x14) = uVar8;
    lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
    if (lVar4 != 0) {
      /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0);
      uVar8 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
      *(undefined4 *)(param_4 + 0x18) = uVar8;
      *(undefined4 *)(param_4 + 0x1c) = param_2;
      *(undefined4 *)(param_4 + 0x20) = param_3;
      *(undefined1 *)(param_4 + 0x48) = param_7;
      return;
    }
  }
  lVar4 = func_0x00f78af4();
  lVar4 = *(long *)(lVar4 + 0x40);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) < 1) {
      return;
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
      uVar3 = func_0x00f78b24();
      func_0x00f78ac0(uVar3,0);
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x20);
      if (lVar4 != 0) goto code_r0x014d6e84;
    }
  }
  lVar4 = func_0x00f78af4();
code_r0x014d6e84:
  if ((bRam0000000003eb4baf & 1) == 0) {
    func_0x00f78a20(0x3d3e438);
    func_0x00f78a20(0x3d3e428);
    func_0x00f78a20(0x3d3e470);
    bRam0000000003eb4baf = 1;
  }
  /*Unity.Collections.NativeArray<RacePolyLine.BurstCompatiblePoint>$$Dispose*/ func_0x02612e74(lVar4 + 0x30,uRam0000000003d3e470);
  /*Unity.Collections.NativeArray<FindClosestPointOnPolyLineJob.ClosestPointResult>$$Dispose*/ func_0x0260ec70(lVar4 + 0x40,uRam0000000003d3e438);
  lVar5 = *(long *)(lVar4 + 0x50);
  if (lVar5 == 0) {
    func_0x00f78a24(0x3d23998,uRam0000000003d3e428);
    uVar6 = func_0x00f78aec();
    uVar3 = func_0x00f78a24(0x3d73ae8);
    lVar4 = 0;
    /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar6,uVar3);
  }
  else {
    iVar1 = *(int *)(lVar4 + 0x5c);
    if (iVar1 != 0) {
      if (1 < iVar1) {
        /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar5,iVar1,0);
        *(undefined4 *)(lVar4 + 0x5c) = 0;
      }
      *(long *)(lVar4 + 0x50) = 0;
      *(undefined4 *)(lVar4 + 0x58) = 0;
      return;
    }
    func_0x00f78a24(0x3d22a38);
    uVar6 = func_0x00f78aec();
    uVar3 = func_0x00f78a24(0x3d73ae0);
    lVar4 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar6,uVar3);
  }
  uVar3 = func_0x00f78a24(0x3d3e428);
  auVar9 = func_0x00f78ac0(uVar6,uVar3);
  uVar3 = *auVar9._0_8_;
  uVar6 = auVar9._0_8_[1];
  lVar7 = *(long *)(lVar4 + 0x18);
  uVar2 = *(ushort *)(lVar7 + 0x132);
  lVar5 = lVar7;
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar7);
    lVar5 = *(long *)(lVar4 + 0x18);
    uVar2 = *(ushort *)(lVar5 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0260dd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(auVar9._8_8_,uVar3,uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20))
  ;
  return;
}



// ============================================================
// RVA: 0x14d6e1c | Atlas.Gameplay.RaceKnot.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x014d6e54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014d6e58) */

void Atlas_Gameplay_RaceKnot__DeInit(long param_1)

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
  
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) < 1) {
      return;
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 != 0) goto code_r0x014d6e84;
    }
  }
  lVar6 = func_0x00f78af4();
code_r0x014d6e84:
  if ((bRam0000000003eb4baf & 1) == 0) {
    func_0x00f78a20(0x3d3e438);
    func_0x00f78a20(0x3d3e428);
    func_0x00f78a20(0x3d3e470);
    bRam0000000003eb4baf = 1;
  }
  /*Unity.Collections.NativeArray<RacePolyLine.BurstCompatiblePoint>$$Dispose*/ func_0x02612e74(lVar6 + 0x30,uRam0000000003d3e470);
  /*Unity.Collections.NativeArray<FindClosestPointOnPolyLineJob.ClosestPointResult>$$Dispose*/ func_0x0260ec70(lVar6 + 0x40,uRam0000000003d3e438);
  lVar3 = *(long *)(lVar6 + 0x50);
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d23998,uRam0000000003d3e428);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d73ae8);
    lVar6 = 0;
    /*System.ObjectDisposedException$$.ctor*/ func_0x029596a4(uVar4,uVar5);
  }
  else {
    iVar1 = *(int *)(lVar6 + 0x5c);
    if (iVar1 != 0) {
      if (1 < iVar1) {
        /*Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$Free*/ func_0x03279ba4(lVar3,iVar1,0);
        *(undefined4 *)(lVar6 + 0x5c) = 0;
      }
      *(long *)(lVar6 + 0x50) = 0;
      *(undefined4 *)(lVar6 + 0x58) = 0;
      return;
    }
    func_0x00f78a24(0x3d22a38);
    uVar4 = func_0x00f78aec();
    uVar5 = func_0x00f78a24(0x3d73ae0);
    lVar6 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar4,uVar5);
  }
  uVar5 = func_0x00f78a24(0x3d3e428);
  auVar8 = func_0x00f78ac0(uVar4,uVar5);
  uVar5 = *auVar8._0_8_;
  uVar4 = auVar8._0_8_[1];
  lVar7 = *(long *)(lVar6 + 0x18);
  uVar2 = *(ushort *)(lVar7 + 0x132);
  lVar3 = lVar7;
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar7);
    lVar3 = *(long *)(lVar6 + 0x18);
    uVar2 = *(ushort *)(lVar3 + 0x132);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    func_0x00fac028(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0260dd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(auVar8._8_8_,uVar5,uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20))
  ;
  return;
}



// ============================================================
// RVA: 0x14d6f20 | Atlas.Gameplay.RaceKnot.RandomNextKnotIndex
// ============================================================

ulong Atlas_Gameplay_RaceKnot__RandomNextKnotIndex(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  
  lVar11 = *(long *)(param_1 + 0x38);
  if (lVar11 != 0) {
    uVar7 = (ulong)*(uint *)(lVar11 + 0x18);
    lVar8 = (long)(int)*(uint *)(lVar11 + 0x18);
    if (lVar8 < 1) {
      lVar8 = 0;
    }
    if (uVar7 == 1 || 0x100000000 < (long)(uVar7 << 0x20)) {
      iVar2 = 0;
      piVar12 = (int *)(lVar11 + 0x20);
      do {
        if (uVar7 == 0) goto code_r0x014d6fec;
        iVar2 = *piVar12 + iVar2;
        uVar7 = uVar7 - 1;
        lVar8 = lVar8 + -1;
        piVar12 = piVar12 + 1;
      } while (lVar8 != 0);
    }
    else {
      iVar2 = 0;
    }
    iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,iVar2,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x28) + 0x18);
      if (0 < (int)uVar3) {
        uVar7 = 0;
        lVar11 = *(long *)(param_1 + 0x38);
        do {
          if (lVar11 == 0) goto LAB_014d6ff8;
          uVar6 = (uint)uVar7;
          if (*(uint *)(lVar11 + 0x18) <= uVar6) goto code_r0x014d6fec;
          iVar1 = *(int *)(lVar11 + (long)(int)uVar6 * 4 + 0x20);
          if (iVar2 < iVar1) {
            return uVar7;
          }
          uVar7 = (ulong)(uVar6 + 1);
          iVar2 = iVar2 - iVar1;
        } while (uVar3 != uVar6 + 1);
      }
      return 0;
    }
  }
LAB_014d6ff8:
  auVar17 = func_0x00f78af4();
  lVar11 = auVar17._8_8_;
  uVar5 = auVar17._0_8_;
  uVar7 = uVar5;
  if ((bRam0000000003eb4bac & 1) == 0) {
    uVar7 = func_0x00f78a20(0x3d3ba08);
    bRam0000000003eb4bac = 1;
  }
  if (*(int *)(uVar5 + 0x10) == 0) {
    *(undefined4 *)(uVar5 + 0x4c) = 0;
    fVar15 = 0.0;
code_r0x014d72a0:
    *(float *)(uVar5 + 0x50) = fVar15;
    return uVar7;
  }
  uVar3 = Atlas_Gameplay_RaceKnot__get_PrimaryNext(uVar5);
  if (lVar11 != 0) {
    if (*(uint *)(lVar11 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar13 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
    lVar8 = Atlas_Gameplay_RaceKnot__get_PrimaryNextPoly(uVar5);
    if ((lVar8 != 0) && (lVar13 != 0)) {
      fVar15 = *(float *)(lVar8 + 0x108);
      do {
        if (*(char *)(lVar13 + 0x48) == '\0') goto code_r0x014d7118;
        lVar8 = Atlas_Gameplay_RaceKnot__get_PrimaryNextPoly(lVar13);
        if (lVar8 == 0) break;
        fVar16 = *(float *)(lVar8 + 0x108);
        uVar3 = Atlas_Gameplay_RaceKnot__get_PrimaryNext(lVar13);
        if (*(uint *)(lVar11 + 0x18) <= uVar3) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        fVar15 = fVar15 + fVar16;
        lVar13 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
      } while (lVar13 != 0);
    }
  }
code_r0x014d72b8:
  func_0x00f78af4();
code_r0x014d72bc:
  uVar4 = func_0x00f78b24();
  uVar7 = func_0x00f78ac0(uVar4,0);
  uVar4 = *(undefined8 *)(uVar7 + 0x10);
  extraout_x8[1] = *(undefined8 *)(uVar7 + 0x18);
  *extraout_x8 = uVar4;
  extraout_x8[2] = *(undefined8 *)(uVar7 + 0x20);
  return uVar7;
code_r0x014d6fec:
  uVar4 = func_0x00f78b24();
  func_0x00f78ac0(uVar4,0);
  goto LAB_014d6ff8;
  while( true ) {
    lVar8 = Atlas_Gameplay_RaceKnot__get_PrimaryNextPoly(lVar13);
    if (lVar8 == 0) break;
    fVar16 = *(float *)(lVar8 + 0x108);
    uVar3 = Atlas_Gameplay_RaceKnot__get_PrimaryNext(lVar13);
    if (*(uint *)(lVar11 + 0x18) <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    fVar15 = fVar15 + fVar16;
    lVar13 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
    if (lVar13 == 0) break;
code_r0x014d7118:
    if (*(int *)(lVar13 + 0x10) == 0) {
      *(float *)(uVar5 + 0x4c) = fVar15;
      uVar7 = Atlas_Gameplay_RaceKnot__get_PrimaryPrev(uVar5);
      uVar3 = (uint)uVar7;
      if (*(uint *)(lVar11 + 0x18) <= uVar3) {
        uVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar9 = *(ulong *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
      if (uVar9 != 0) {
        fVar15 = 0.0;
        uVar14 = uVar5;
        goto code_r0x014d715c;
      }
      break;
    }
  }
  goto code_r0x014d72b8;
code_r0x014d715c:
  uVar10 = uVar9;
  lVar8 = *(long *)(uVar10 + 0x28);
  if (*(int *)(uVar10 + 0x10) == 0) {
    if (lVar8 != 0) {
      uVar3 = (uint)*(undefined8 *)(lVar8 + 0x18);
      if ((int)uVar3 < 1) goto code_r0x014d72a0;
      lVar11 = 0;
      goto code_r0x014d7238;
    }
    goto code_r0x014d72b8;
  }
  if (lVar8 == 0) goto code_r0x014d72b8;
  uVar3 = (uint)*(undefined8 *)(lVar8 + 0x18);
  if (0 < (int)uVar3) {
    lVar13 = 0;
    do {
      uVar6 = (uint)lVar13;
      if (uVar3 == uVar6) goto code_r0x014d72bc;
      if (uVar14 == 0) goto code_r0x014d72b8;
      if (*(int *)(lVar8 + (long)(int)uVar6 * 4 + 0x20) == *(int *)(uVar14 + 0x10)) {
        if (-1 < (int)uVar6) {
          lVar8 = *(long *)(uVar10 + 0x40);
          if (lVar8 == 0) goto code_r0x014d72b8;
          if (*(uint *)(lVar8 + 0x18) <= uVar6) goto code_r0x014d72bc;
          lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
          if (lVar8 == 0) goto code_r0x014d72b8;
          fVar15 = fVar15 + *(float *)(lVar8 + 0x108);
        }
        break;
      }
      lVar13 = lVar13 + 1;
    } while (uVar3 != (uint)lVar13);
  }
  uVar7 = Atlas_Gameplay_RaceKnot__get_PrimaryPrev(uVar10);
  uVar3 = (uint)uVar7;
  if (*(uint *)(lVar11 + 0x18) <= uVar3) {
    uVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
  uVar14 = uVar10;
  if (uVar9 == 0) goto code_r0x014d72b8;
  goto code_r0x014d715c;
  while (lVar11 = lVar11 + 1, uVar3 != (uint)lVar11) {
code_r0x014d7238:
    uVar6 = (uint)lVar11;
    if (uVar3 == uVar6) goto code_r0x014d72bc;
    if (uVar14 == 0) goto code_r0x014d72b8;
    if (*(int *)(lVar8 + (long)(int)uVar6 * 4 + 0x20) == *(int *)(uVar14 + 0x10)) {
      if (-1 < (int)uVar6) {
        lVar8 = *(long *)(uVar10 + 0x40);
        if (lVar8 == 0) goto code_r0x014d72b8;
        if (*(uint *)(lVar8 + 0x18) <= uVar6) goto code_r0x014d72bc;
        lVar11 = *(long *)(lVar8 + lVar11 * 8 + 0x20);
        if (lVar11 == 0) goto code_r0x014d72b8;
        fVar15 = fVar15 + *(float *)(lVar11 + 0x108);
      }
      break;
    }
  }
  goto code_r0x014d72a0;
}



// ============================================================
// RVA: 0x14d6ffc | Atlas.Gameplay.RaceKnot.ComputeDistanceToLap
// ============================================================

void Atlas_Gameplay_RaceKnot__ComputeDistanceToLap(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *extraout_x8;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000003eb4bac & 1) == 0) {
    func_0x00f78a20(0x3d3ba08);
    bRam0000000003eb4bac = 1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    fVar8 = 0.0;
    goto code_r0x014d72a0;
  }
  uVar1 = Atlas_Gameplay_RaceKnot__get_PrimaryNext(param_1);
  if (param_2 != 0) {
    if (*(uint *)(param_2 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar7 = *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
    lVar2 = Atlas_Gameplay_RaceKnot__get_PrimaryNextPoly(param_1);
    if ((lVar2 != 0) && (lVar7 != 0)) {
      fVar8 = *(float *)(lVar2 + 0x108);
      do {
        if (*(char *)(lVar7 + 0x48) == '\0') goto LAB_014d7118;
        lVar2 = Atlas_Gameplay_RaceKnot__get_PrimaryNextPoly(lVar7);
        if (lVar2 == 0) break;
        fVar9 = *(float *)(lVar2 + 0x108);
        uVar1 = Atlas_Gameplay_RaceKnot__get_PrimaryNext(lVar7);
        if (*(uint *)(param_2 + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        fVar8 = fVar8 + fVar9;
        lVar7 = *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
      } while (lVar7 != 0);
    }
  }
  goto LAB_014d72b8;
code_r0x014d715c:
  lVar4 = lVar2;
  lVar2 = *(long *)(lVar4 + 0x28);
  if (*(int *)(lVar4 + 0x10) == 0) {
    if (lVar2 != 0) {
      uVar1 = (uint)*(undefined8 *)(lVar2 + 0x18);
      if ((int)uVar1 < 1) goto code_r0x014d72a0;
      lVar6 = 0;
      goto code_r0x014d7238;
    }
    goto LAB_014d72b8;
  }
  if (lVar2 == 0) goto LAB_014d72b8;
  uVar1 = (uint)*(undefined8 *)(lVar2 + 0x18);
  if (0 < (int)uVar1) {
    lVar6 = 0;
    do {
      uVar5 = (uint)lVar6;
      if (uVar1 == uVar5) goto code_r0x014d72bc;
      if (lVar7 == 0) goto LAB_014d72b8;
      if (*(int *)(lVar2 + (long)(int)uVar5 * 4 + 0x20) == *(int *)(lVar7 + 0x10)) {
        if (-1 < (int)uVar5) {
          lVar2 = *(long *)(lVar4 + 0x40);
          if (lVar2 == 0) goto LAB_014d72b8;
          if (*(uint *)(lVar2 + 0x18) <= uVar5) goto code_r0x014d72bc;
          lVar2 = *(long *)(lVar2 + lVar6 * 8 + 0x20);
          if (lVar2 == 0) goto LAB_014d72b8;
          fVar8 = fVar8 + *(float *)(lVar2 + 0x108);
        }
        break;
      }
      lVar6 = lVar6 + 1;
    } while (uVar1 != (uint)lVar6);
  }
  uVar1 = Atlas_Gameplay_RaceKnot__get_PrimaryPrev(lVar4);
  if (*(uint *)(param_2 + 0x18) <= uVar1) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
  lVar7 = lVar4;
  if (lVar2 == 0) goto LAB_014d72b8;
  goto code_r0x014d715c;
  while (lVar6 = lVar6 + 1, uVar1 != (uint)lVar6) {
code_r0x014d7238:
    uVar5 = (uint)lVar6;
    if (uVar1 == uVar5) goto code_r0x014d72bc;
    if (lVar7 == 0) goto LAB_014d72b8;
    if (*(int *)(lVar2 + (long)(int)uVar5 * 4 + 0x20) == *(int *)(lVar7 + 0x10)) {
      if (-1 < (int)uVar5) {
        lVar2 = *(long *)(lVar4 + 0x40);
        if (lVar2 == 0) goto LAB_014d72b8;
        if (*(uint *)(lVar2 + 0x18) <= uVar5) goto code_r0x014d72bc;
        lVar2 = *(long *)(lVar2 + lVar6 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_014d72b8;
        fVar8 = fVar8 + *(float *)(lVar2 + 0x108);
      }
      break;
    }
  }
code_r0x014d72a0:
  *(float *)(param_1 + 0x50) = fVar8;
  return;
  while( true ) {
    lVar2 = Atlas_Gameplay_RaceKnot__get_PrimaryNextPoly(lVar7);
    if (lVar2 == 0) break;
    fVar9 = *(float *)(lVar2 + 0x108);
    uVar1 = Atlas_Gameplay_RaceKnot__get_PrimaryNext(lVar7);
    if (*(uint *)(param_2 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    fVar8 = fVar8 + fVar9;
    lVar7 = *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
    if (lVar7 == 0) break;
LAB_014d7118:
    if (*(int *)(lVar7 + 0x10) == 0) {
      *(float *)(param_1 + 0x4c) = fVar8;
      uVar1 = Atlas_Gameplay_RaceKnot__get_PrimaryPrev(param_1);
      if (*(uint *)(param_2 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar2 = *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
      if (lVar2 != 0) {
        fVar8 = 0.0;
        lVar7 = param_1;
        goto code_r0x014d715c;
      }
      break;
    }
  }
LAB_014d72b8:
  func_0x00f78af4();
code_r0x014d72bc:
  uVar3 = func_0x00f78b24();
  lVar2 = func_0x00f78ac0(uVar3,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  extraout_x8[1] = *(undefined8 *)(lVar2 + 0x18);
  *extraout_x8 = uVar3;
  extraout_x8[2] = *(undefined8 *)(lVar2 + 0x20);
  return;
}



