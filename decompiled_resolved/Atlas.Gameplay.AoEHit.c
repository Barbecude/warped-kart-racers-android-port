// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.AoEHit

// ============================================================
// RVA: 0x1449404 | Atlas.Gameplay.AoEHit.Spawn
// ============================================================

void Atlas_Gameplay_AoEHit__Spawn
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uVar7 = param_2;
  uVar8 = param_3;
  if ((bRam0000000003eb4731 & 1) == 0) {
    func_0x00f78a20(0x3d3b6d8);
    func_0x00f78a20(0x3d39c38);
    func_0x00f78a20(0x3d1d798);
    func_0x00f78a20(0x3d1dc70);
    func_0x00f78a20(0x3d237b8);
    bRam0000000003eb4731 = 1;
  }
  *(undefined8 *)(param_4 + 0x10) = param_5;
  *(undefined8 *)(param_4 + 0x18) = param_6;
  *(undefined8 *)(param_4 + 0x20) = param_7;
  *(undefined8 *)(param_4 + 0x28) = param_8;
  *(undefined8 *)(param_4 + 0x30) = param_9;
  *(long *)(param_4 + 0x60) = param_10;
  *(undefined8 *)(param_4 + 0x68) = param_11;
  *(undefined8 *)(param_4 + 0x70) = param_12;
  *(int *)(param_4 + 0x78) = (int)param_5;
  *(undefined4 *)(param_4 + 0x7c) = param_1;
  *(undefined4 *)(param_4 + 0x80) = param_2;
  *(undefined4 *)(param_4 + 0x84) = param_3;
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<ActorGroup>_TypeInfo*/ uRam0000000003d1d798);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar2,uRam0000000003d39c38);
  *(undefined8 *)(param_4 + 0x50) = uVar2;
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<object>_TypeInfo*/ uRam0000000003d1dc70);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar2,uRam0000000003d3b6d8);
  *(undefined8 *)(param_4 + 0x58) = uVar2;
  if ((param_10 != 0) && (*(long *)(param_10 + 0x20) != 0)) {
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_98,*(long *)(param_10 + 0x20),0);
    if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_a8 = uStack_90;
    uStack_b0 = uStack_98;
    uStack_a0 = uStack_88;
    fVar5 = (float)((ulong)param_5 >> 0x20) * 1000.0;
    fVar1 = -fVar5;
    if (fVar5 != INFINITY) {
      fVar1 = fVar5;
    }
    /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(&uStack_c8,&uStack_b0,(int)fVar1,0);
    *(undefined8 *)(param_4 + 0x40) = uStack_c0;
    *(undefined8 *)(param_4 + 0x38) = uStack_c8;
    *(undefined8 *)(param_4 + 0x48) = uStack_b8;
    return;
  }
  lVar3 = func_0x00f78af4();
  puStack_d8 = &Atlas_Gameplay_AoEHit__OnDeSpawn;
  uStack_f0 = param_5;
  lStack_e8 = param_4;
  puStack_e0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4732 & 1) == 0) {
    func_0x00f78a20(0x3d39c50);
    func_0x00f78a20(0x3d3b6f8);
    bRam0000000003eb4732 = 1;
  }
  if ((*(long *)(lVar3 + 0x60) != 0) &&
     (lVar4 = *(long *)(*(long *)(lVar3 + 0x60) + 0x20), lVar4 != 0)) {
    /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_108,lVar4,0);
    lVar4 = *(long *)(lVar3 + 0x50);
    *(undefined8 *)(lVar3 + 0x40) = uStack_100;
    *(undefined8 *)(lVar3 + 0x38) = uStack_108;
    *(undefined8 *)(lVar3 + 0x48) = uStack_f8;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    if (lVar4 != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(lVar4,uRam0000000003d39c50);
      if (*(long *)(lVar3 + 0x58) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar3 + 0x58),uRam0000000003d3b6f8);
        *(undefined4 *)(lVar3 + 0x78) = 0;
        *(long *)(lVar3 + 0x50) = 0;
        *(undefined8 *)(lVar3 + 0x58) = 0;
        uVar6 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        *(undefined4 *)(lVar3 + 0x7c) = uVar6;
        *(undefined4 *)(lVar3 + 0x80) = uVar7;
        *(undefined4 *)(lVar3 + 0x84) = uVar8;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x60) = 0;
        return;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14495e8 | Atlas.Gameplay.AoEHit.OnDeSpawn
// ============================================================

void Atlas_Gameplay_AoEHit__OnDeSpawn
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000003eb4732 & 1) == 0) {
    func_0x00f78a20(0x3d39c50);
    func_0x00f78a20(0x3d3b6f8);
    bRam0000000003eb4732 = 1;
  }
  if ((*(long *)(param_4 + 0x60) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_4 + 0x60) + 0x20), lVar1 != 0)) {
    /*Core.Networking.NetworkSession$$CreateInvalidTime*/ func_0x0165d240(&uStack_38,lVar1,0);
    lVar1 = *(long *)(param_4 + 0x50);
    *(undefined8 *)(param_4 + 0x40) = uStack_30;
    *(undefined8 *)(param_4 + 0x38) = uStack_38;
    *(undefined8 *)(param_4 + 0x48) = uStack_28;
    *(undefined8 *)(param_4 + 0x30) = 0;
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(undefined8 *)(param_4 + 0x20) = 0;
    *(undefined8 *)(param_4 + 0x10) = 0;
    if (lVar1 != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(lVar1,uRam0000000003d39c50);
      if (*(long *)(param_4 + 0x58) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_4 + 0x58),uRam0000000003d3b6f8);
        *(undefined4 *)(param_4 + 0x78) = 0;
        *(long *)(param_4 + 0x50) = 0;
        *(undefined8 *)(param_4 + 0x58) = 0;
        uVar2 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        *(undefined4 *)(param_4 + 0x7c) = uVar2;
        *(undefined4 *)(param_4 + 0x80) = param_2;
        *(undefined4 *)(param_4 + 0x84) = param_3;
        *(undefined8 *)(param_4 + 0x28) = 0;
        *(undefined8 *)(param_4 + 0x60) = 0;
        return;
      }
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x14496c8 | Atlas.Gameplay.AoEHit.EarlyUpdate
// ============================================================

void Atlas_Gameplay_AoEHit__EarlyUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x14496cc | Atlas.Gameplay.AoEHit.Update
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01449bec) */

void Atlas_Gameplay_AoEHit__Update(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  int aiStack_b0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if ((bRam0000000003eb4733 & 1) == 0) {
    func_0x00f78a20(0x3d432e0);
    func_0x00f78a20(0x3d432f0);
    func_0x00f78a20(0x3d207e8);
    func_0x00f78a20(0x3d32108);
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d32110);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d32118);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d3b6f0);
    func_0x00f78a20(0x3d39c50);
    func_0x00f78a20(0x3d3b700);
    func_0x00f78a20(0x3d39c58);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb4733 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_a0 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  aiStack_b0[3] = 0;
  if (((*(long *)(param_1 + 0x30) != 0) &&
      (lVar5 = /*Core.Actors.ActorManager$$FindActorGroup<RicochetProjectile>*/ func_0x0171e69c(*(long *)(param_1 + 0x30),uRam0000000003d432e0), lVar5 != 0)) &&
     (*(long *)(lVar5 + 0x10) != 0)) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,*(long *)(lVar5 + 0x10),uRam0000000003d3a7d0);
    uStack_78 = uStack_c0;
    uStack_80 = uStack_c8;
    plStack_70 = plStack_b8;
    while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d325c8), plVar3 = plStack_70,
          (uVar6 & 1) != 0) {
      if (plStack_70 != (long *)0x0) {
        if ((*(byte *)(*plStack_70 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
           (*(long *)(*(long *)(*plStack_70 + 200) +
                      (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8) != /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78
           )) {
          func_0x00f78e5c(plStack_70);
          goto code_r0x01449c14;
        }
      }
      if (*(long *)(param_1 + 0x58) == 0) {
        func_0x00f78af4();
        goto code_r0x01449c14;
      }
      uVar6 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(param_1 + 0x58),plStack_70,uRam0000000003d3b700);
      if ((uVar6 & 1) == 0) {
        if (plVar3 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01449c14;
        }
        if (plVar3[2] == 0) {
          func_0x00f78af4();
          goto code_r0x01449c14;
        }
        lVar5 = Atlas_Gameplay_Kart_KartPhysics__get_Body(plVar3[2],0);
        /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x13c),*(undefined4 *)(lVar5 + 0x140),
                        *(undefined4 *)(lVar5 + 0x144),0);
        uVar6 = /*Atlas.Gameplay.AoEHit$$IsInRange*/ func_0x01449cc8(param_1);
        if ((((uVar6 & 1) != 0) && (*(long **)(param_1 + 0x70) != plVar3)) &&
           (uVar6 = Atlas_Gameplay_Kart_KartComposite__OnUsableHit
                              (*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                               *(undefined4 *)(param_1 + 0x84),plVar3,
                               *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x68),
                               *(undefined8 *)(param_1 + 0x20),0), (uVar6 & 1) != 0)) {
          if (*(long *)(param_1 + 0x58) == 0) goto LAB_01449c10;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x58),plVar3,uRam0000000003d3b6f0);
        }
      }
    }
    aiStack_b0[0] = 0xa3;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d325c0);
    aiStack_b0[3] = 0;
    if (*(long *)(param_1 + 0x30) != 0) {
      /*Core.Actors.ActorManager$$FindDerivedActorGroups<Usable>*/ func_0x0171e8f4(*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x50),uRam0000000003d432f0
                     );
      if (*(long *)(param_1 + 0x50) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,*(long *)(param_1 + 0x50),uRam0000000003d39c58);
        uStack_98 = uStack_c0;
        uStack_a0 = uStack_c8;
        plStack_90 = plStack_b8;
        iVar7 = 0;
        while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a0,uRam0000000003d32110), (uVar6 & 1) != 0) {
          if (plStack_90 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x01449c14;
          }
          if (plStack_90[2] == 0) {
            func_0x00f78af4();
            goto code_r0x01449c14;
          }
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,plStack_90[2],uRam0000000003d3a7d0);
          uStack_78 = uStack_c0;
          uStack_80 = uStack_c8;
          plStack_70 = plStack_b8;
          while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d325c8), plVar3 = plStack_70,
                (uVar6 & 1) != 0) {
            if (plStack_70 != (long *)0x0) {
              if ((*(byte *)(*plStack_70 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300)) ||
                 (*(long *)(*(long *)(*plStack_70 + 200) +
                            (ulong)*(byte *)(/*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8 + 300) * 8 + -8) !=
                  /*Atlas.Gameplay.Usables.CollidableUsable_TypeInfo*/ lRam0000000003d207e8)) {
                func_0x00f78e5c(plStack_70);
                goto code_r0x01449c14;
              }
            }
            if (*(long *)(param_1 + 0x58) == 0) {
              func_0x00f78af4();
              goto code_r0x01449c14;
            }
            uVar6 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(*(long *)(param_1 + 0x58),plStack_70,uRam0000000003d3b700);
            if ((uVar6 & 1) == 0) {
              if (plVar3 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x01449c14;
              }
              lVar5 = Atlas_Gameplay_Usables_CollidableUsable__get_CollidableUsableBehaviour
                                (plVar3,0);
              if (lVar5 == 0) {
                func_0x00f78af4();
                goto code_r0x01449c14;
              }
              lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
              if (lVar5 == 0) {
                func_0x00f78af4();
                goto code_r0x01449c14;
              }
              /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
              uVar6 = /*Atlas.Gameplay.AoEHit$$IsInRange*/ func_0x01449cc8(param_1);
              if ((uVar6 & 1) != 0) {
                (**(code **)(*plVar3 + 0x348))(plVar3,*(undefined8 *)(*plVar3 + 0x350));
                if (*(long *)(param_1 + 0x58) == 0) {
                  func_0x00f78af4();
                  goto code_r0x01449c14;
                }
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x58),plVar3,uRam0000000003d3b6f0);
              }
            }
          }
          aiStack_b0[iVar7] = 0x134;
          iVar2 = aiStack_b0[3];
          iVar1 = aiStack_b0[3] + 1;
          aiStack_b0[3] = iVar1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d325c0);
          iVar7 = 0;
          if ((iVar1 != 0) && (iVar7 = iVar1, aiStack_b0[iVar2] == 0x134)) {
            iVar7 = iVar2;
            aiStack_b0[3] = iVar2;
          }
        }
        aiStack_b0[iVar7] = 0x14d;
        aiStack_b0[3] = aiStack_b0[3] + 1;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a0,uRam0000000003d32108);
        if (*(long *)(param_1 + 0x50) != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(param_1 + 0x50),uRam0000000003d39c50);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
LAB_01449c10:
  func_0x00f78af4();
code_r0x01449c14:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1449c18);
  (*pcVar4)();
}



// ============================================================
// RVA: 0x1449cc8 | Atlas.Gameplay.AoEHit.IsInRange
// ============================================================

bool Atlas_Gameplay_AoEHit__IsInRange(float param_1,float param_2,float param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_70;
  float fStack_68;
  
  fVar5 = *(float *)(param_4 + 0x7c);
  fVar6 = *(float *)(param_4 + 0x80);
  fVar7 = *(float *)(param_4 + 0x84);
  fStack_68 = param_3 - fVar7;
  uStack_70 = CONCAT44(param_2 - fVar6,param_1 - fVar5);
  fVar2 = fStack_68;
  fVar3 = param_2;
  fVar1 = (float)/*UnityEngine.Vector3$$get_normalized*/ func_0x0327b8e4(&uStack_70,0);
  fVar4 = *(float *)(param_4 + 0x78);
  /*UnityEngine.Color$$get_yellow*/ func_0x032235d0(0);
  /*Debug$$DrawLine*/ func_0x0162ed3c(fVar5,fVar6,fVar7,fVar5 + fVar1 * fVar4,fVar6 + fVar3 * fVar4,
                  fVar7 + fVar2 * fVar4,0);
  fStack_68 = param_3 - *(float *)(param_4 + 0x84);
  uStack_70 = CONCAT44(param_2 - (float)((ulong)*(undefined8 *)(param_4 + 0x7c) >> 0x20),
                       param_1 - (float)*(undefined8 *)(param_4 + 0x7c));
  fVar2 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_70,0);
  return fVar2 <= *(float *)(param_4 + 0x78) * *(float *)(param_4 + 0x78);
}



// ============================================================
// RVA: 0x1449dc4 | Atlas.Gameplay.AoEHit.LateUpdate
// ============================================================

void Atlas_Gameplay_AoEHit__LateUpdate(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000003eb4734 & 1) == 0) {
    func_0x00f78a20(0x3d237b8);
    func_0x00f78a20(0x3d5ba88);
    bRam0000000003eb4734 = 1;
  }
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x60) + 0x20), lVar2 != 0)) {
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_38,lVar2,0);
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    uStack_40 = *(undefined8 *)(param_1 + 0x48);
    uStack_68 = uStack_30;
    uStack_70 = uStack_38;
    uStack_60 = uStack_28;
    if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_88 = uStack_48;
    uStack_90 = uStack_50;
    uStack_80 = uStack_40;
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_a0 = uStack_60;
    iVar1 = /*Core.Networking.NetworkSessionTime$$op_LessThanOrEqual*/ func_0x01660a2c(&uStack_90,&uStack_b0,0);
    if (iVar1 != 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_01449ec0;
      /*Core.Actors.PooledActorManager$$DeSpawn<object>*/ func_0x018bd640(*(long *)(param_1 + 0x28),param_1,uRam0000000003d5ba88);
    }
    return;
  }
LAB_01449ec0:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1449ec4 | Atlas.Gameplay.AoEHit.FixedUpdate
// ============================================================

void Atlas_Gameplay_AoEHit__FixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x1449ec8 | Atlas.Gameplay.AoEHit.PreFixedUpdate
// ============================================================

void Atlas_Gameplay_AoEHit__PreFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x1449ecc | Atlas.Gameplay.AoEHit.PostFixedUpdate
// ============================================================

void Atlas_Gameplay_AoEHit__PostFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x1449ed0 | Atlas.Gameplay.AoEHit..ctor
// ============================================================

void Atlas_Gameplay_AoEHit___ctor(void)

{
  return;
}



