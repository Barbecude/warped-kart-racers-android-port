// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.CollidableUsableBehaviour

// ============================================================
// RVA: 0x157092c | Atlas.Gameplay.Usables.CollidableUsableBehaviour.get_Rigidbody
// ============================================================

undefined8 Atlas_Gameplay_Usables_CollidableUsableBehaviour__get_Rigidbody(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x1570934 | Atlas.Gameplay.Usables.CollidableUsableBehaviour.get_PhysicsCollider
// ============================================================

undefined8 Atlas_Gameplay_Usables_CollidableUsableBehaviour__get_PhysicsCollider(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x157093c | Atlas.Gameplay.Usables.CollidableUsableBehaviour.get_TriggerCollider
// ============================================================

undefined8 Atlas_Gameplay_Usables_CollidableUsableBehaviour__get_TriggerCollider(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x1570944 | Atlas.Gameplay.Usables.CollidableUsableBehaviour.get_Owner
// ============================================================

undefined8 Atlas_Gameplay_Usables_CollidableUsableBehaviour__get_Owner(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x157094c | Atlas.Gameplay.Usables.CollidableUsableBehaviour.set_Owner
// ============================================================

void Atlas_Gameplay_Usables_CollidableUsableBehaviour__set_Owner(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}



// ============================================================
// RVA: 0x1570954 | Atlas.Gameplay.Usables.CollidableUsableBehaviour.OnCollisionEnter
// ============================================================

undefined1  [16]
Atlas_Gameplay_Usables_CollidableUsableBehaviour__OnCollisionEnter(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb5034 & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb5034 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 == (long *)0x0) {
    auVar7 = func_0x00f78af4();
    if ((bRam0000000003eb5035 & 1) == 0) {
      func_0x00f78a20(0x3d21fd0);
      bRam0000000003eb5035 = 1;
    }
    plVar6 = *(long **)(auVar7._0_8_ + 0x68);
    if (plVar6 == (long *)0x0) {
      auVar7 = func_0x00f78af4();
      if ((bRam0000000003eb5036 & 1) == 0) {
        func_0x00f78a20(0x3d21fd0);
        bRam0000000003eb5036 = 1;
      }
      plVar6 = *(long **)(auVar7._0_8_ + 0x68);
      if (plVar6 == (long *)0x0) {
        auVar7 = func_0x00f78af4();
        if ((bRam0000000003eb5037 & 1) == 0) {
          func_0x00f78a20(0x3d21fd0);
          bRam0000000003eb5037 = 1;
        }
        plVar6 = *(long **)(auVar7._0_8_ + 0x68);
        if (plVar6 == (long *)0x0) {
          auVar7 = func_0x00f78af4();
          if ((bRam0000000003eb5038 & 1) == 0) {
            func_0x00f78a20(0x3d21fd0);
            bRam0000000003eb5038 = 1;
          }
          plVar6 = *(long **)(auVar7._0_8_ + 0x68);
          if (plVar6 == (long *)0x0) {
            auVar7 = func_0x00f78af4();
            if ((bRam0000000003eb5039 & 1) == 0) {
              func_0x00f78a20(0x3d21fd0);
              bRam0000000003eb5039 = 1;
            }
            plVar6 = *(long **)(auVar7._0_8_ + 0x68);
            if (plVar6 == (long *)0x0) {
              auVar7._0_8_ = func_0x00f78af4();
              if ((bRam0000000003eb4e52 & 1) == 0) {
                func_0x00f78a20(0x3d25750,0);
                bRam0000000003eb4e52 = 1;
              }
              uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
              /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar1,0);
              *(undefined8 *)(auVar7._0_8_ + 0x38) = uVar1;
              if ((bRam0000000003ebf1b8 & 1) == 0) {
                func_0x00f78a20(0x3d23990,0);
                bRam0000000003ebf1b8 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              auVar7._8_8_ = 0;
              return auVar7;
            }
            lVar3 = *plVar6;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
                  puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                  goto code_r0x01570d80;
                }
                piVar5 = piVar5 + 4;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,5);
code_r0x01570d80:
                    /* WARNING: Could not recover jumptable at 0x01570d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
            return auVar7;
          }
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
                goto code_r0x01570cc8;
              }
              piVar5 = piVar5 + 4;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,4);
code_r0x01570cc8:
                    /* WARNING: Could not recover jumptable at 0x01570ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
          return auVar7;
        }
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
              goto code_r0x01570c10;
            }
            piVar5 = piVar5 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,3);
code_r0x01570c10:
                    /* WARNING: Could not recover jumptable at 0x01570c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
        return auVar7;
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto code_r0x01570b58;
          }
          piVar5 = piVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,2);
code_r0x01570b58:
                    /* WARNING: Could not recover jumptable at 0x01570b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
      return auVar7;
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto code_r0x01570aa0;
        }
        piVar5 = piVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,1);
code_r0x01570aa0:
                    /* WARNING: Could not recover jumptable at 0x01570ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
    return auVar7;
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_015709e8;
      }
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,0);
LAB_015709e8:
                    /* WARNING: Could not recover jumptable at 0x01570a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar7 = (*(code *)*puVar2)(plVar6,param_2,puVar2[1]);
  return auVar7;
}



// ============================================================
// RVA: 0x1570a08 | Atlas.Gameplay.Usables.CollidableUsableBehaviour.OnCollisionStay
// ============================================================

undefined1  [16]
Atlas_Gameplay_Usables_CollidableUsableBehaviour__OnCollisionStay(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb5035 & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb5035 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 == (long *)0x0) {
    auVar7 = func_0x00f78af4();
    if ((bRam0000000003eb5036 & 1) == 0) {
      func_0x00f78a20(0x3d21fd0);
      bRam0000000003eb5036 = 1;
    }
    plVar6 = *(long **)(auVar7._0_8_ + 0x68);
    if (plVar6 == (long *)0x0) {
      auVar7 = func_0x00f78af4();
      if ((bRam0000000003eb5037 & 1) == 0) {
        func_0x00f78a20(0x3d21fd0);
        bRam0000000003eb5037 = 1;
      }
      plVar6 = *(long **)(auVar7._0_8_ + 0x68);
      if (plVar6 == (long *)0x0) {
        auVar7 = func_0x00f78af4();
        if ((bRam0000000003eb5038 & 1) == 0) {
          func_0x00f78a20(0x3d21fd0);
          bRam0000000003eb5038 = 1;
        }
        plVar6 = *(long **)(auVar7._0_8_ + 0x68);
        if (plVar6 == (long *)0x0) {
          auVar7 = func_0x00f78af4();
          if ((bRam0000000003eb5039 & 1) == 0) {
            func_0x00f78a20(0x3d21fd0);
            bRam0000000003eb5039 = 1;
          }
          plVar6 = *(long **)(auVar7._0_8_ + 0x68);
          if (plVar6 == (long *)0x0) {
            auVar7._0_8_ = func_0x00f78af4();
            if ((bRam0000000003eb4e52 & 1) == 0) {
              func_0x00f78a20(0x3d25750,0);
              bRam0000000003eb4e52 = 1;
            }
            uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
            /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar1,0);
            *(undefined8 *)(auVar7._0_8_ + 0x38) = uVar1;
            if ((bRam0000000003ebf1b8 & 1) == 0) {
              func_0x00f78a20(0x3d23990,0);
              bRam0000000003ebf1b8 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            auVar7._8_8_ = 0;
            return auVar7;
          }
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                goto code_r0x01570d80;
              }
              piVar5 = piVar5 + 4;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,5);
code_r0x01570d80:
                    /* WARNING: Could not recover jumptable at 0x01570d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
          return auVar7;
        }
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
              goto code_r0x01570cc8;
            }
            piVar5 = piVar5 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,4);
code_r0x01570cc8:
                    /* WARNING: Could not recover jumptable at 0x01570ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
        return auVar7;
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
            goto code_r0x01570c10;
          }
          piVar5 = piVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,3);
code_r0x01570c10:
                    /* WARNING: Could not recover jumptable at 0x01570c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
      return auVar7;
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto code_r0x01570b58;
        }
        piVar5 = piVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,2);
code_r0x01570b58:
                    /* WARNING: Could not recover jumptable at 0x01570b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
    return auVar7;
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_01570aa0;
      }
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,1);
LAB_01570aa0:
                    /* WARNING: Could not recover jumptable at 0x01570ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar7 = (*(code *)*puVar2)(plVar6,param_2,puVar2[1]);
  return auVar7;
}



// ============================================================
// RVA: 0x1570ac0 | Atlas.Gameplay.Usables.CollidableUsableBehaviour.OnCollisionExit
// ============================================================

undefined1  [16]
Atlas_Gameplay_Usables_CollidableUsableBehaviour__OnCollisionExit(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb5036 & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb5036 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 == (long *)0x0) {
    auVar7 = func_0x00f78af4();
    if ((bRam0000000003eb5037 & 1) == 0) {
      func_0x00f78a20(0x3d21fd0);
      bRam0000000003eb5037 = 1;
    }
    plVar6 = *(long **)(auVar7._0_8_ + 0x68);
    if (plVar6 == (long *)0x0) {
      auVar7 = func_0x00f78af4();
      if ((bRam0000000003eb5038 & 1) == 0) {
        func_0x00f78a20(0x3d21fd0);
        bRam0000000003eb5038 = 1;
      }
      plVar6 = *(long **)(auVar7._0_8_ + 0x68);
      if (plVar6 == (long *)0x0) {
        auVar7 = func_0x00f78af4();
        if ((bRam0000000003eb5039 & 1) == 0) {
          func_0x00f78a20(0x3d21fd0);
          bRam0000000003eb5039 = 1;
        }
        plVar6 = *(long **)(auVar7._0_8_ + 0x68);
        if (plVar6 == (long *)0x0) {
          auVar7._0_8_ = func_0x00f78af4();
          if ((bRam0000000003eb4e52 & 1) == 0) {
            func_0x00f78a20(0x3d25750,0);
            bRam0000000003eb4e52 = 1;
          }
          uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
          /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar1,0);
          *(undefined8 *)(auVar7._0_8_ + 0x38) = uVar1;
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar7._8_8_ = 0;
          return auVar7;
        }
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
              goto code_r0x01570d80;
            }
            piVar5 = piVar5 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,5);
code_r0x01570d80:
                    /* WARNING: Could not recover jumptable at 0x01570d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
        return auVar7;
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto code_r0x01570cc8;
          }
          piVar5 = piVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,4);
code_r0x01570cc8:
                    /* WARNING: Could not recover jumptable at 0x01570ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
      return auVar7;
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto code_r0x01570c10;
        }
        piVar5 = piVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,3);
code_r0x01570c10:
                    /* WARNING: Could not recover jumptable at 0x01570c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
    return auVar7;
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_01570b58;
      }
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,2);
LAB_01570b58:
                    /* WARNING: Could not recover jumptable at 0x01570b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar7 = (*(code *)*puVar2)(plVar6,param_2,puVar2[1]);
  return auVar7;
}



// ============================================================
// RVA: 0x1570b78 | Atlas.Gameplay.Usables.CollidableUsableBehaviour.OnTriggerEnter
// ============================================================

undefined1  [16]
Atlas_Gameplay_Usables_CollidableUsableBehaviour__OnTriggerEnter(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb5037 & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb5037 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 == (long *)0x0) {
    auVar7 = func_0x00f78af4();
    if ((bRam0000000003eb5038 & 1) == 0) {
      func_0x00f78a20(0x3d21fd0);
      bRam0000000003eb5038 = 1;
    }
    plVar6 = *(long **)(auVar7._0_8_ + 0x68);
    if (plVar6 == (long *)0x0) {
      auVar7 = func_0x00f78af4();
      if ((bRam0000000003eb5039 & 1) == 0) {
        func_0x00f78a20(0x3d21fd0);
        bRam0000000003eb5039 = 1;
      }
      plVar6 = *(long **)(auVar7._0_8_ + 0x68);
      if (plVar6 == (long *)0x0) {
        auVar7._0_8_ = func_0x00f78af4();
        if ((bRam0000000003eb4e52 & 1) == 0) {
          func_0x00f78a20(0x3d25750,0);
          bRam0000000003eb4e52 = 1;
        }
        uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
        /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar1,0);
        *(undefined8 *)(auVar7._0_8_ + 0x38) = uVar1;
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        auVar7._8_8_ = 0;
        return auVar7;
      }
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
            goto code_r0x01570d80;
          }
          piVar5 = piVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,5);
code_r0x01570d80:
                    /* WARNING: Could not recover jumptable at 0x01570d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
      return auVar7;
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto code_r0x01570cc8;
        }
        piVar5 = piVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,4);
code_r0x01570cc8:
                    /* WARNING: Could not recover jumptable at 0x01570ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
    return auVar7;
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_01570c10;
      }
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,3);
LAB_01570c10:
                    /* WARNING: Could not recover jumptable at 0x01570c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar7 = (*(code *)*puVar2)(plVar6,param_2,puVar2[1]);
  return auVar7;
}



// ============================================================
// RVA: 0x1570c30 | Atlas.Gameplay.Usables.CollidableUsableBehaviour.OnTriggerStay
// ============================================================

undefined1  [16]
Atlas_Gameplay_Usables_CollidableUsableBehaviour__OnTriggerStay(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb5038 & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb5038 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 == (long *)0x0) {
    auVar7 = func_0x00f78af4();
    if ((bRam0000000003eb5039 & 1) == 0) {
      func_0x00f78a20(0x3d21fd0);
      bRam0000000003eb5039 = 1;
    }
    plVar6 = *(long **)(auVar7._0_8_ + 0x68);
    if (plVar6 == (long *)0x0) {
      auVar7._0_8_ = func_0x00f78af4();
      if ((bRam0000000003eb4e52 & 1) == 0) {
        func_0x00f78a20(0x3d25750,0);
        bRam0000000003eb4e52 = 1;
      }
      uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
      /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar1,0);
      *(undefined8 *)(auVar7._0_8_ + 0x38) = uVar1;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar7._8_8_ = 0;
      return auVar7;
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto code_r0x01570d80;
        }
        piVar5 = piVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,5);
code_r0x01570d80:
                    /* WARNING: Could not recover jumptable at 0x01570d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar7 = (*(code *)*puVar2)(plVar6,auVar7._8_8_,puVar2[1]);
    return auVar7;
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_01570cc8;
      }
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,4);
LAB_01570cc8:
                    /* WARNING: Could not recover jumptable at 0x01570ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar7 = (*(code *)*puVar2)(plVar6,param_2,puVar2[1]);
  return auVar7;
}



// ============================================================
// RVA: 0x1570ce8 | Atlas.Gameplay.Usables.CollidableUsableBehaviour.OnTriggerExit
// ============================================================

undefined1  [16]
Atlas_Gameplay_Usables_CollidableUsableBehaviour__OnTriggerExit(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb5039 & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb5039 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 == (long *)0x0) {
    auVar7._0_8_ = func_0x00f78af4();
    if ((bRam0000000003eb4e52 & 1) == 0) {
      func_0x00f78a20(0x3d25750,0);
      bRam0000000003eb4e52 = 1;
    }
    uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
    /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar1,0);
    *(undefined8 *)(auVar7._0_8_ + 0x38) = uVar1;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar7._8_8_ = 0;
    return auVar7;
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == /*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_01570d80;
      }
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,5);
LAB_01570d80:
                    /* WARNING: Could not recover jumptable at 0x01570d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar7 = (*(code *)*puVar2)(plVar6,param_2,puVar2[1]);
  return auVar7;
}



// ============================================================
// RVA: 0x1570da0 | Atlas.Gameplay.Usables.CollidableUsableBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Usables_CollidableUsableBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4e52 & 1) == 0) {
    func_0x00f78a20(0x3d25750,0);
    bRam0000000003eb4e52 = 1;
  }
  uVar1 = func_0x00f78aec(/*UnityEngine.Events.UnityEvent_TypeInfo*/ uRam0000000003d25750);
  /*UnityEngine.Events.UnityEvent$$.ctor*/ func_0x03277ec8(uVar1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
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



