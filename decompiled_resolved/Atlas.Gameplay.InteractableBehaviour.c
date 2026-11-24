// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.InteractableBehaviour

// ============================================================
// RVA: 0x15b7c24 | Atlas.Gameplay.InteractableBehaviour.get_KartTriggerEffectParameters
// ============================================================

undefined8 Atlas_Gameplay_InteractableBehaviour__get_KartTriggerEffectParameters(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15b7c2c | Atlas.Gameplay.InteractableBehaviour.Init
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Gameplay_InteractableBehaviour__Init
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_4 + 0x18);
  if (lVar2 == 0) {
    return param_4;
  }
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_4,0);
  if (lVar1 != 0) {
    /*UnityEngine.Transform$$get_localToWorldMatrix*/ func_0x03276000(&uStack_60,lVar1,0);
    uVar4 = *(undefined4 *)(lVar2 + 0x30);
    uVar5 = *(undefined4 *)(lVar2 + 0x34);
    /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d07c(*(undefined4 *)(lVar2 + 0x2c),0);
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    uStack_88 = uStack_48;
    uStack_90 = uStack_50;
    uStack_78 = uStack_38;
    uStack_80 = uStack_40;
    uStack_68 = uStack_28;
    uStack_70 = uStack_30;
    /*UnityEngine.Matrix4x4$$op_Multiply*/ func_0x0323e1e0(&uStack_a0,0);
    uVar3 = /*UnityEngine.Vector4$$op_Implicit*/ func_0x0327d084(0);
    *(undefined4 *)(lVar2 + 0x48) = uVar3;
    *(undefined4 *)(lVar2 + 0x4c) = uVar4;
    *(undefined4 *)(lVar2 + 0x50) = uVar5;
    lVar2 = /*UnityEngine.Vector3$$Normalize*/ func_0x0327b824((undefined4 *)(lVar2 + 0x48),0);
    return lVar2;
  }
  lVar2 = func_0x00f78af4(lVar2,0,0);
  *(undefined4 *)(lVar2 + 0x24) = 0x3f000000;
  uVar3 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar2 + 0x2c) = uVar3;
  *(undefined4 *)(lVar2 + 0x30) = param_2;
  *(undefined4 *)(lVar2 + 0x34) = param_3;
  *(undefined4 *)(lVar2 + 0x40) = 0x3f800000;
  uVar3 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(lVar2 + 0x48) = uVar3;
  *(undefined4 *)(lVar2 + 0x4c) = param_2;
  *(undefined4 *)(lVar2 + 0x50) = param_3;
  *(undefined8 *)(lVar2 + 0x60) = _UNK_033f8d70;
  *(undefined4 *)(lVar2 + 0x74) = 0x3f800000;
  return lVar2;
}



// ============================================================
// RVA: 0x15b7c6c | Atlas.Gameplay.InteractableBehaviour.DeInit
// ============================================================

void Atlas_Gameplay_InteractableBehaviour__DeInit(void)

{
  return;
}



// ============================================================
// RVA: 0x15b7c70 | Atlas.Gameplay.InteractableBehaviour.get_Owner
// ============================================================

undefined8 Atlas_Gameplay_InteractableBehaviour__get_Owner(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15b7c78 | Atlas.Gameplay.InteractableBehaviour.set_Owner
// ============================================================

void Atlas_Gameplay_InteractableBehaviour__set_Owner(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



// ============================================================
// RVA: 0x15b7c80 | Atlas.Gameplay.InteractableBehaviour.OnCollisionEnter
// ============================================================

void Atlas_Gameplay_InteractableBehaviour__OnCollisionEnter(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb5298 & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb5298 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
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
        goto LAB_015b7d24;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,0);
LAB_015b7d24:
                    /* WARNING: Could not recover jumptable at 0x015b7d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x15b7d40 | Atlas.Gameplay.InteractableBehaviour.OnCollisionStay
// ============================================================

void Atlas_Gameplay_InteractableBehaviour__OnCollisionStay(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb5299 & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb5299 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
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
        goto LAB_015b7de8;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,1);
LAB_015b7de8:
                    /* WARNING: Could not recover jumptable at 0x015b7e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x15b7e04 | Atlas.Gameplay.InteractableBehaviour.OnCollisionExit
// ============================================================

void Atlas_Gameplay_InteractableBehaviour__OnCollisionExit(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb529a & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb529a = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
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
        goto LAB_015b7eac;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,2);
LAB_015b7eac:
                    /* WARNING: Could not recover jumptable at 0x015b7ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x15b7ec8 | Atlas.Gameplay.InteractableBehaviour.OnTriggerEnter
// ============================================================

void Atlas_Gameplay_InteractableBehaviour__OnTriggerEnter(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb529b & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb529b = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
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
        goto LAB_015b7f70;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,3);
LAB_015b7f70:
                    /* WARNING: Could not recover jumptable at 0x015b7f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x15b7f8c | Atlas.Gameplay.InteractableBehaviour.OnTriggerStay
// ============================================================

void Atlas_Gameplay_InteractableBehaviour__OnTriggerStay(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb529c & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb529c = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
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
        goto LAB_015b8034;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,4);
LAB_015b8034:
                    /* WARNING: Could not recover jumptable at 0x015b804c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x15b8050 | Atlas.Gameplay.InteractableBehaviour.OnTriggerExit
// ============================================================

void Atlas_Gameplay_InteractableBehaviour__OnTriggerExit(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb529d & 1) == 0) {
    func_0x00f78a20(0x3d21fd0);
    bRam0000000003eb529d = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
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
        goto LAB_015b80f8;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Atlas.Gameplay.ICollidableOwner_TypeInfo*/ lRam0000000003d21fd0,5);
LAB_015b80f8:
                    /* WARNING: Could not recover jumptable at 0x015b8110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x15b8114 | Atlas.Gameplay.InteractableBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_InteractableBehaviour___ctor(ulong param_1)

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



