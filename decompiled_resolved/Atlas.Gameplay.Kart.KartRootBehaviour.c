// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartRootBehaviour

// ============================================================
// RVA: 0x15dddbc | Atlas.Gameplay.Kart.KartRootBehaviour.get_KartPhysicsSetup
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartRootBehaviour__get_KartPhysicsSetup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15dddc4 | Atlas.Gameplay.Kart.KartRootBehaviour.get_Replicator
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartRootBehaviour__get_Replicator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15dddcc | Atlas.Gameplay.Kart.KartRootBehaviour.get_RigidBody
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartRootBehaviour__get_RigidBody(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15dddd4 | Atlas.Gameplay.Kart.KartRootBehaviour.get_PhysicsColliderObject
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderObject(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15ddddc | Atlas.Gameplay.Kart.KartRootBehaviour.get_PhysicsColliderWorldCentre
// ============================================================

float Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderWorldCentre(long param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if (lVar1 != 0) {
    fVar2 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar1,0);
    return fVar2 + *(float *)(param_1 + 0x90);
  }
  lVar1 = func_0x00f78af4();
  return *(float *)(lVar1 + 0x9c);
}



// ============================================================
// RVA: 0x15dde24 | Atlas.Gameplay.Kart.KartRootBehaviour.get_PhysicsColliderLength
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartRootBehaviour__get_PhysicsColliderLength(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}



// ============================================================
// RVA: 0x15dde2c | Atlas.Gameplay.Kart.KartRootBehaviour.get_TriggerCollider
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartRootBehaviour__get_TriggerCollider(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x15dde34 | Atlas.Gameplay.Kart.KartRootBehaviour.get_VisualCompositeParent
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartRootBehaviour__get_VisualCompositeParent(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15dde3c | Atlas.Gameplay.Kart.KartRootBehaviour.get_Owner
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartRootBehaviour__get_Owner(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x15dde44 | Atlas.Gameplay.Kart.KartRootBehaviour.set_Owner
// ============================================================

void Atlas_Gameplay_Kart_KartRootBehaviour__set_Owner(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = param_2;
  return;
}



// ============================================================
// RVA: 0x15dde4c | Atlas.Gameplay.Kart.KartRootBehaviour.get_EventOnDrawGizmosSelected
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartRootBehaviour__get_EventOnDrawGizmosSelected(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



// ============================================================
// RVA: 0x15dde54 | Atlas.Gameplay.Kart.KartRootBehaviour.get_FrontUsePosition
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartRootBehaviour__get_FrontUsePosition(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15dde60 | Atlas.Gameplay.Kart.KartRootBehaviour.get_BackUsePosition
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartRootBehaviour__get_BackUsePosition(long param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// ============================================================
// RVA: 0x15dde6c | Atlas.Gameplay.Kart.KartRootBehaviour.get_ShieldUsePosition
// ============================================================

undefined4 Atlas_Gameplay_Kart_KartRootBehaviour__get_ShieldUsePosition(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x15dde78 | Atlas.Gameplay.Kart.KartRootBehaviour.get_PortalRespawnInTransform
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartRootBehaviour__get_PortalRespawnInTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x15dde80 | Atlas.Gameplay.Kart.KartRootBehaviour.get_PortalRespawnOutTransform
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartRootBehaviour__get_PortalRespawnOutTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x15dde88 | Atlas.Gameplay.Kart.KartRootBehaviour.get_IntroSequencePortalTransform
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartRootBehaviour__get_IntroSequencePortalTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x15dde90 | Atlas.Gameplay.Kart.KartRootBehaviour.get_OutroSequencePortalTransform
// ============================================================

undefined8 Atlas_Gameplay_Kart_KartRootBehaviour__get_OutroSequencePortalTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x15dde98 | Atlas.Gameplay.Kart.KartRootBehaviour.Init
// ============================================================

void Atlas_Gameplay_Kart_KartRootBehaviour__Init
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb539e & 1) == 0) {
    func_0x00f78a20(0x3d57800);
    bRam0000000003eb539e = 1;
  }
  if ((*(long *)(param_4 + 0x30) != 0) &&
     (lVar1 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(param_4 + 0x30),uRam0000000003d57800), lVar1 != 0)) {
    uVar6 = /*UnityEngine.CapsuleCollider$$get_center*/ func_0x0329e494(lVar1,0);
    *(undefined4 *)(param_4 + 0x90) = uVar6;
    *(undefined4 *)(param_4 + 0x94) = param_2;
    *(undefined4 *)(param_4 + 0x98) = param_3;
    uVar6 = /*UnityEngine.CapsuleCollider$$get_height*/ func_0x0329e67c(lVar1,0);
    *(undefined4 *)(param_4 + 0x9c) = uVar6;
    return;
  }
  auVar7 = func_0x00f78af4();
  if ((bRam0000000003eb539f & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb539f = 1;
  }
  plVar5 = *(long **)(auVar7._0_8_ + 0xa0);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar1 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
        goto code_r0x015ddfbc;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,0);
code_r0x015ddfbc:
                    /* WARNING: Could not recover jumptable at 0x015ddfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,auVar7._8_8_,puVar2[1]);
  return;
}



// ============================================================
// RVA: 0x15ddf18 | Atlas.Gameplay.Kart.KartRootBehaviour.OnCollisionEnter
// ============================================================

void Atlas_Gameplay_Kart_KartRootBehaviour__OnCollisionEnter(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb539f & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb539f = 1;
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_015ddfbc;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,0);
LAB_015ddfbc:
                    /* WARNING: Could not recover jumptable at 0x015ddfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x15ddfd8 | Atlas.Gameplay.Kart.KartRootBehaviour.OnCollisionStay
// ============================================================

void Atlas_Gameplay_Kart_KartRootBehaviour__OnCollisionStay(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb53a0 & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb53a0 = 1;
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_015de080;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,1);
LAB_015de080:
                    /* WARNING: Could not recover jumptable at 0x015de098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x15de09c | Atlas.Gameplay.Kart.KartRootBehaviour.OnCollisionExit
// ============================================================

void Atlas_Gameplay_Kart_KartRootBehaviour__OnCollisionExit(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb53a1 & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb53a1 = 1;
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_015de144;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,2);
LAB_015de144:
                    /* WARNING: Could not recover jumptable at 0x015de15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x15de160 | Atlas.Gameplay.Kart.KartRootBehaviour.OnTriggerEnter
// ============================================================

void Atlas_Gameplay_Kart_KartRootBehaviour__OnTriggerEnter(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb53a2 & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb53a2 = 1;
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
        goto LAB_015de208;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,3);
LAB_015de208:
                    /* WARNING: Could not recover jumptable at 0x015de220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x15de224 | Atlas.Gameplay.Kart.KartRootBehaviour.OnTriggerStay
// ============================================================

void Atlas_Gameplay_Kart_KartRootBehaviour__OnTriggerStay(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb53a3 & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb53a3 = 1;
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_015de2cc;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,4);
LAB_015de2cc:
                    /* WARNING: Could not recover jumptable at 0x015de2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x15de2e8 | Atlas.Gameplay.Kart.KartRootBehaviour.OnTriggerExit
// ============================================================

void Atlas_Gameplay_Kart_KartRootBehaviour__OnTriggerExit(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb53a4 & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb53a4 = 1;
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 5) * 0x10 + 0x138);
        goto LAB_015de390;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,5);
LAB_015de390:
                    /* WARNING: Could not recover jumptable at 0x015de3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x15de3ac | Atlas.Gameplay.Kart.KartRootBehaviour.OnDrawGizmosSelected
// ============================================================

/* WARNING: Possible PIC construction at 0x03278390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03278394) */
/* WARNING: Removing unreachable block (ram,0x03278398) */
/* WARNING: Removing unreachable block (ram,0x032783a8) */
/* WARNING: Removing unreachable block (ram,0x032783bc) */
/* WARNING: Removing unreachable block (ram,0x032783c8) */
/* WARNING: Removing unreachable block (ram,0x032783d0) */
/* WARNING: Removing unreachable block (ram,0x032783e0) */
/* WARNING: Removing unreachable block (ram,0x032783f4) */
/* WARNING: Removing unreachable block (ram,0x03278408) */
/* WARNING: Removing unreachable block (ram,0x03278414) */
/* WARNING: Removing unreachable block (ram,0x03278428) */
/* WARNING: Removing unreachable block (ram,0x0327842c) */
/* WARNING: Removing unreachable block (ram,0x03278440) */
/* WARNING: Removing unreachable block (ram,0x032784a0) */
/* WARNING: Removing unreachable block (ram,0x03278454) */
/* WARNING: Removing unreachable block (ram,0x03278460) */
/* WARNING: Removing unreachable block (ram,0x03278470) */
/* WARNING: Removing unreachable block (ram,0x03278478) */
/* WARNING: Removing unreachable block (ram,0x03278488) */
/* WARNING: Removing unreachable block (ram,0x032784d8) */
/* WARNING: Removing unreachable block (ram,0x0327848c) */
/* WARNING: Removing unreachable block (ram,0x032784ac) */
/* WARNING: Removing unreachable block (ram,0x032784c0) */

long Atlas_Gameplay_Kart_KartRootBehaviour__OnDrawGizmosSelected(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 **ppuVar6;
  undefined *puVar7;
  long alStack_90 [6];
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 == 0) {
    lVar2 = func_0x00f78af4();
    if ((bRam0000000003eb53a5 & 1) == 0) {
      func_0x00f78a20(0x3d25750);
      bRam0000000003eb53a5 = 1;
    }
    uVar3 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
    /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar3,0);
    *(undefined8 *)(lVar2 + 0xa8) = uVar3;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  else {
    if ((bRam0000000003ec1a33 & 1) == 0) {
      func_0x00f78a20(0x3d22a90,0);
      func_0x00f78a20(0x3d39e50);
      func_0x00f78a20(0x3d39e58);
      func_0x00f78a20(0x3d1f218);
      bRam0000000003ec1a33 = 1;
    }
    alStack_90[4] = 0x3ec1000;
    puStack_58 = &UNK_03278394;
    ppuVar6 = &puStack_60;
    alStack_90[5] = lVar2;
    puStack_60 = &stack0xfffffffffffffff0;
    /*UnityEngine.Events.UnityEventBase$$RebuildPersistentCallsIfNeeded*/ func_0x03278a68();
    lVar4 = *(long *)(lVar2 + 0x10);
    if (lVar4 == 0) {
      puVar7 = &
               UnityEngine_Events_UnityEventBase__UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
      ;
      lVar4 = func_0x00f78af4();
      plVar1 = alStack_90 + 4;
      while( true ) {
        lVar5 = lVar4;
        *(undefined8 *)((long)plVar1 + -0x20) = 0x3ec1000;
        *(long *)((long)plVar1 + -0x18) = lVar2;
        *(undefined1 ***)((long)plVar1 + -0x10) = ppuVar6;
        *(undefined **)((long)plVar1 + -8) = puVar7;
        ppuVar6 = (undefined1 **)((long)plVar1 + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) break;
        puVar7 = &
                 UnityEngine_Events_UnityEventBase__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
        ;
        lVar4 = func_0x00f78af4();
        plVar1 = (long *)((long)plVar1 + -0x20);
        lVar2 = lVar5;
      }
      lVar2 = /*UnityEngine.Events.InvokableCallList$$ClearPersistent*/ func_0x03231820(*(long *)(lVar5 + 0x10),0);
      *(undefined1 *)(lVar5 + 0x20) = 1;
      return lVar2;
    }
    if ((bRam0000000003ebf6c2 & 1) == 0) {
      func_0x00f78a20(0x3d39e38,0);
      func_0x00f78a20(0x3d39e40);
      bRam0000000003ebf6c2 = 1;
    }
    if (*(char *)(lVar4 + 0x28) == '\0') {
code_r0x03231910:
      return *(long *)(lVar4 + 0x20);
    }
    if (*(long *)(lVar4 + 0x20) != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar4 + 0x20),uRam0000000003d39e40);
      if (*(long *)(lVar4 + 0x20) != 0) {
        /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$AddRange*/ func_0x02427364(*(long *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x10),uRam0000000003d39e38);
        if (*(long *)(lVar4 + 0x20) != 0) {
          /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$AddRange*/ func_0x02427364(*(long *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x18),uRam0000000003d39e38
                         );
          *(undefined1 *)(lVar4 + 0x28) = 0;
          goto code_r0x03231910;
        }
      }
    }
    lVar2 = func_0x00f78af4();
    if ((bRam0000000003ebf6c3 & 1) == 0) {
      func_0x00f78a20(0x3d39e28);
      func_0x00f78a20(0x3d1d7f8);
      bRam0000000003ebf6c3 = 1;
    }
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar3,uRam0000000003d39e28);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar3,uRam0000000003d39e28);
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar3,uRam0000000003d39e28);
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    *(undefined1 *)(lVar2 + 0x28) = 1;
  }
  return lVar2;
}



// ============================================================
// RVA: 0x15de3cc | Atlas.Gameplay.Kart.KartRootBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_KartRootBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb53a5 & 1) == 0) {
    func_0x00f78a20(0x3d25750);
    bRam0000000003eb53a5 = 1;
  }
  uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
  /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar1,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



