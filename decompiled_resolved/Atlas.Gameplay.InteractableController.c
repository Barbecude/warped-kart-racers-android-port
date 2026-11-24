// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.InteractableController

// ============================================================
// RVA: 0x15b811c | Atlas.Gameplay.InteractableController.Init
// ============================================================

void Atlas_Gameplay_InteractableController__Init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if ((bRam0000000003eb529e & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb529e = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_2,0,0);
  if ((uVar2 & 1) == 0) {
    if (param_2 == 0) {
      lVar3 = func_0x00f78af4();
      if ((bRam0000000003eb529f & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb529f = 1;
      }
      plVar4 = (long *)(lVar3 + 0x10);
      lVar5 = *plVar4;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
      if (iVar1 != 0) {
        if (*plVar4 == 0) {
          func_0x00f78af4();
          return;
        }
        *(undefined8 *)(*plVar4 + 0x20) = 0;
      }
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *plVar4 = 0;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      return;
    }
    Atlas_Gameplay_InteractableBehaviour__Init(param_2);
    *(long *)(param_2 + 0x20) = param_1;
    *(long *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x18) = param_3;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x18);
  }
  return;
}



// ============================================================
// RVA: 0x15b81c4 | Atlas.Gameplay.InteractableController.DeInit
// ============================================================

void Atlas_Gameplay_InteractableController__DeInit(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam0000000003eb529f & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb529f = 1;
  }
  plVar2 = (long *)(param_1 + 0x10);
  lVar3 = *plVar2;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
  if (iVar1 != 0) {
    if (*plVar2 == 0) {
      func_0x00f78af4();
      return;
    }
    *(undefined8 *)(*plVar2 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// ============================================================
// RVA: 0x15b8258 | Atlas.Gameplay.InteractableController.PreFixedUpdate
// ============================================================

void Atlas_Gameplay_InteractableController__PreFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15b825c | Atlas.Gameplay.InteractableController.PostFixedUpdate
// ============================================================

void Atlas_Gameplay_InteractableController__PostFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15b8260 | Atlas.Gameplay.InteractableController.EarlyUpdate
// ============================================================

void Atlas_Gameplay_InteractableController__EarlyUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15b8264 | Atlas.Gameplay.InteractableController.Update
// ============================================================

void Atlas_Gameplay_InteractableController__Update
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  
  if ((bRam0000000003eb52a0 & 1) == 0) {
    func_0x00f78a20(0x3d432e0);
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d3a7d0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb52a0 = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  if ((*(long *)(param_4 + 0x18) != 0) && (*(long *)(param_4 + 0x28) != 0)) {
    uVar7 = *(undefined8 *)(param_4 + 0x10);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    lVar5 = *(long *)(param_4 + 0x20);
    if (lVar5 == 0) {
      if (*(long *)(param_4 + 0x18) == 0) goto LAB_015b86a4;
      lVar5 = /*Core.Actors.ActorManager$$FindActorGroup<RicochetProjectile>*/ func_0x0171e69c(*(long *)(param_4 + 0x18),uRam0000000003d432e0);
      *(long *)(param_4 + 0x20) = lVar5;
      if (lVar5 == 0) {
        return;
      }
    }
    lVar6 = *(long *)(param_4 + 0x28);
    if (lVar6 == 0) {
LAB_015b86a4:
      func_0x00f78af4();
LAB_015b86a8:
      func_0x00f78af4();
code_r0x015b86e4:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x15b86e8);
      (*pcVar2)();
    }
    if (*(char *)(lVar6 + 0x6c) != '\0') {
      if (*(long *)(lVar5 + 0x10) == 0) goto LAB_015b86a4;
      fVar8 = *(float *)(lVar6 + 0x74);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,*(long *)(lVar5 + 0x10),uRam0000000003d3a7d0);
      uStack_a8 = uStack_c0;
      uStack_b0 = uStack_c8;
      plStack_a0 = plStack_b8;
      while (uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_b0,uRam0000000003d325c8), plVar1 = plStack_a0,
            (uVar4 & 1) != 0) {
        if (plStack_a0 != (long *)0x0) {
          if ((*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) <= *(byte *)(*plStack_a0 + 300)) &&
             (*(long *)(*(long *)(*plStack_a0 + 200) +
                        (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8) ==
              /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
            if (plStack_a0[2] == 0) {
              func_0x00f78af4();
              goto code_r0x015b86e4;
            }
            lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(plStack_a0[2],0);
            if (*(long *)(param_4 + 0x10) == 0) {
              func_0x00f78af4();
              goto code_r0x015b86e4;
            }
            fVar10 = *(float *)(lVar5 + 0x13c);
            fVar11 = *(float *)(lVar5 + 0x140);
            fVar12 = *(float *)(lVar5 + 0x144);
            lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_4 + 0x10),0);
            if (lVar5 == 0) {
              func_0x00f78af4();
              goto code_r0x015b86e4;
            }
            /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
            fVar9 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
            fVar9 = fVar9 - fVar10;
            fVar11 = param_2 - fVar11;
            param_3 = param_3 - fVar12;
            param_2 = param_3 * param_3;
            fVar11 = param_2 + fVar9 * fVar9 + fVar11 * fVar11;
            if (fVar11 <= fVar8 * fVar8) {
              if (*(long *)(param_4 + 0x10) == 0) {
                func_0x00f78af4();
                goto code_r0x015b86e4;
              }
              lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_4 + 0x10),0);
              if (lVar5 == 0) {
                func_0x00f78af4();
                goto code_r0x015b86e4;
              }
              /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
              fVar10 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
              lVar5 = plVar1[2];
              if (lVar5 == 0) {
                func_0x00f78af4();
                goto code_r0x015b86e4;
              }
              lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(lVar5,0);
              fVar13 = *(float *)(lVar5 + 0x13c);
              fVar9 = *(float *)(lVar5 + 0x140);
              fVar12 = *(float *)(lVar5 + 0x144);
              if (cRam0000000003ca34fc == '\0') {
                func_0x00f78a20(0x3d232c0);
                cRam0000000003ca34fc = '\x01';
              }
              if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (*(long *)(param_4 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x015b86e4;
              }
              fVar10 = fVar10 - fVar13;
              param_2 = param_2 - fVar9;
              param_3 = param_3 - fVar12;
              fVar12 = param_3 * param_3 + fVar10 * fVar10 + param_2 * param_2;
              fVar9 = 1.0 / SQRT(fVar12);
              fVar10 = fVar10 * fVar9;
              param_2 = param_2 * fVar9;
              param_3 = param_3 * fVar9;
              if (fVar12 <= 1.1754944e-38) {
                param_3 = 0.0;
                param_2 = 0.0;
                fVar10 = 0.0;
              }
              if (*(char *)(*(long *)(param_4 + 0x28) + 0x78) != '\0') {
                fVar10 = -fVar10;
                param_2 = -param_2;
                param_3 = -param_3;
              }
              if (cRam0000000003ca34fc == '\0') {
                func_0x00f78a20(0x3d232c0);
                cRam0000000003ca34fc = '\x01';
              }
              if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (*(long *)(param_4 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x015b86e4;
              }
              fVar12 = SQRT(fVar11) / *(float *)(*(long *)(param_4 + 0x28) + 0x74);
              iVar3 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar12,0);
              fVar11 = 1.0;
              if (iVar3 == 0 && fVar12 <= 1.0) {
                fVar11 = fVar12;
              }
              iVar3 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar11,0);
              if (*(long *)(param_4 + 0x28) == 0) goto LAB_015b86a8;
              lVar5 = plVar1[2];
              if (lVar5 == 0) {
                func_0x00f78af4();
                goto code_r0x015b86e4;
              }
              fVar12 = 1.0;
              if (0.0 <= fVar11 && iVar3 == 0) {
                fVar12 = 1.0 - fVar11;
              }
              fVar11 = fVar12 * fVar12 * *(float *)(*(long *)(param_4 + 0x28) + 0x70);
              lVar5 = *(long *)(lVar5 + 0x70);
              param_2 = param_2 * fVar11;
              param_3 = param_3 * fVar11;
              /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar10 * fVar11,0);
              if (lVar5 == 0) {
                func_0x00f78af4();
                goto code_r0x015b86e4;
              }
              /*UnityEngine.Rigidbody$$AddForce*/ func_0x032a3a78(lVar5,5,0);
            }
          }
        }
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b0,uRam0000000003d325c0);
    }
  }
  return;
}



// ============================================================
// RVA: 0x15b8784 | Atlas.Gameplay.InteractableController.LateUpdate
// ============================================================

void Atlas_Gameplay_InteractableController__LateUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15b8788 | Atlas.Gameplay.InteractableController.FixedUpdate
// ============================================================

void Atlas_Gameplay_InteractableController__FixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x15b878c | Atlas.Gameplay.InteractableController.OnCollisionEnter
// ============================================================

void Atlas_Gameplay_InteractableController__OnCollisionEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x15b8790 | Atlas.Gameplay.InteractableController.OnCollisionStay
// ============================================================

void Atlas_Gameplay_InteractableController__OnCollisionStay(void)

{
  return;
}



// ============================================================
// RVA: 0x15b8794 | Atlas.Gameplay.InteractableController.OnCollisionExit
// ============================================================

void Atlas_Gameplay_InteractableController__OnCollisionExit(void)

{
  return;
}



// ============================================================
// RVA: 0x15b8798 | Atlas.Gameplay.InteractableController.OnTriggerEnter
// ============================================================

void Atlas_Gameplay_InteractableController__OnTriggerEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x15b879c | Atlas.Gameplay.InteractableController.OnTriggerStay
// ============================================================

void Atlas_Gameplay_InteractableController__OnTriggerStay(void)

{
  return;
}



// ============================================================
// RVA: 0x15b87a0 | Atlas.Gameplay.InteractableController.OnTriggerExit
// ============================================================

void Atlas_Gameplay_InteractableController__OnTriggerExit(void)

{
  return;
}



// ============================================================
// RVA: 0x15b87a4 | Atlas.Gameplay.InteractableController..ctor
// ============================================================

void Atlas_Gameplay_InteractableController___ctor(void)

{
  return;
}



