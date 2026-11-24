// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.ShieldUsable

// ============================================================
// RVA: 0x14f6924 | Atlas.Gameplay.Usables.ShieldUsable.Use
// ============================================================

void Atlas_Gameplay_Usables_ShieldUsable__Use(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  /*Atlas.Gameplay.Usables.Usable$$Use*/ func_0x01523ec4(param_1,0);
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x48),0);
    if ((((*(long *)(param_1 + 0x28) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar3 != 0)) &&
        (lVar3 = *(long *)(lVar3 + 0x70), lVar3 != 0)) &&
       (uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0), lVar1 != 0)) {
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar1,uVar2,0,0);
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar3 != 0)) {
        uVar4 = *(undefined4 *)(lVar3 + 100);
        uVar5 = *(undefined4 *)(lVar3 + 0x68);
        /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar3 + 0x60),lVar1,0);
        /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
        /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar1,0);
        uStack_30 = /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
        uStack_2c = uVar4;
        uStack_28 = uVar5;
        if (pcRam0000000003ec19a8 == (code *)0x0) {
          pcRam0000000003ec19a8 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        (*pcRam0000000003ec19a8)(lVar1,&uStack_30);
        return;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14f694c | Atlas.Gameplay.Usables.ShieldUsable.SetPosition
// ============================================================

void Atlas_Gameplay_Usables_ShieldUsable__SetPosition(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x48),0);
    if ((((*(long *)(param_1 + 0x28) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar3 != 0)) &&
        (lVar3 = *(long *)(lVar3 + 0x70), lVar3 != 0)) &&
       (uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0), lVar1 != 0)) {
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar1,uVar2,0,0);
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x18), lVar3 != 0)) {
        uVar4 = *(undefined4 *)(lVar3 + 100);
        uVar5 = *(undefined4 *)(lVar3 + 0x68);
        /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar3 + 0x60),lVar1,0);
        /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
        /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar1,0);
        uStack_30 = /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
        uStack_2c = uVar4;
        uStack_28 = uVar5;
        if (pcRam0000000003ec19a8 == (code *)0x0) {
          pcRam0000000003ec19a8 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        (*pcRam0000000003ec19a8)(lVar1,&uStack_30);
        return;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14f6a00 | Atlas.Gameplay.Usables.ShieldUsable.TriggerScale
// ============================================================

void Atlas_Gameplay_Usables_ShieldUsable__TriggerScale(void)

{
  return;
}



// ============================================================
// RVA: 0x14f6a04 | Atlas.Gameplay.Usables.ShieldUsable..ctor
// ============================================================

void Atlas_Gameplay_Usables_ShieldUsable___ctor(void)

{
  return;
}



