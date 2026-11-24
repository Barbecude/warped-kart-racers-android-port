// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.VfxHitVolumeManager

// ============================================================
// RVA: 0x1527a08 | Atlas.Gameplay.VfxHitVolumeManager.FireVFXEvent
// ============================================================

void Atlas_Gameplay_VfxHitVolumeManager__FireVFXEvent(long param_1,int param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined4 uStack_88;
  int iStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000003eb4e67 & 1) == 0) {
    func_0x00f78a20(0x3d32590);
    func_0x00f78a20(0x3d325a8);
    func_0x00f78a20(0x3d325b0);
    func_0x00f78a20(0x3d32598);
    func_0x00f78a20(0x3d325a0);
    func_0x00f78a20(0x3d325b8);
    func_0x00f78a20(0x3d3a7b0);
    func_0x00f78a20(0x3d3a7a8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e67 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  iStack_80 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a0,*(long *)(param_1 + 0x10),uRam0000000003d3a7b0);
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    lStack_50 = lStack_90;
    while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_60,uRam0000000003d325b0), lVar1 = lStack_50,
          (uVar3 & 1) != 0) {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar1,0,0);
      if ((uVar3 & 1) == 0) {
        if (lVar1 == 0) {
          func_0x00f78af4();
          goto code_r0x01527c48;
        }
        if (*(int *)(lVar1 + 0x44) == param_2) {
          Atlas_Gameplay_HitVolumeVFXTriggerBehaviour__ManualActivate(lVar1,0);
        }
      }
    }
    uStack_88 = 0x54;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,uRam0000000003d325a8);
  }
  iStack_80 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,*(long *)(param_1 + 0x18),uRam0000000003d3a7a8);
    while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_78,uRam0000000003d32598), lVar1 = lStack_68,
          (uVar3 & 1) != 0) {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar1,0,0);
      if ((uVar3 & 1) == 0) {
        if (lVar1 == 0) {
          func_0x00f78af4();
code_r0x01527c48:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1527c4c);
          (*pcVar2)();
        }
        if (*(int *)(lVar1 + 0x40) == param_2) {
          Atlas_Gameplay_HitVolumeVFXAdditionalTriggerBehaviour__ManualActivate(lVar1,0);
        }
      }
    }
    iStack_80 = iStack_80 + 1;
    uStack_88 = 0xa8;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d32590);
  }
  return;
}



// ============================================================
// RVA: 0x1527ccc | Atlas.Gameplay.VfxHitVolumeManager.Init
// ============================================================

void Atlas_Gameplay_VfxHitVolumeManager__Init(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  int extraout_w1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  int iStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb4e68 & 1) == 0) {
    func_0x00f78a20(0x3d32590);
    func_0x00f78a20(0x3d325a8);
    func_0x00f78a20(0x3d325b0);
    func_0x00f78a20(0x3d32598);
    func_0x00f78a20(0x3d325a0);
    func_0x00f78a20(0x3d325b8);
    func_0x00f78a20(0x3d3a7b0);
    func_0x00f78a20(0x3d3a7a8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e68 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  iStack_68 = 0;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_2,0,0);
  if ((uVar1 & 1) == 0) {
    if (param_2 == 0) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar3 = (long *)___cxa_begin_catch();
        param_1 = *plVar3;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,uRam0000000003d32590);
        if (param_1 == 0) {
          return;
        }
        func_0x00f78ac0(param_1,0);
      }
      lVar2 = __Unwind_Resume();
      uStack_a0 = 0x3eb4000;
      uStack_98 = 0x3d23990;
      puStack_78 = &Atlas_Gameplay_VfxHitVolumeManager__DeInit;
      lStack_90 = param_2;
      lStack_88 = param_1;
      puStack_80 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb4e69 & 1) == 0) {
        func_0x00f78a20(0x3d32590);
        func_0x00f78a20(0x3d325a8);
        func_0x00f78a20(0x3d325b0);
        func_0x00f78a20(0x3d32598);
        func_0x00f78a20(0x3d325a0);
        func_0x00f78a20(0x3d325b8);
        func_0x00f78a20(0x3d3a7b0);
        func_0x00f78a20(0x3d3a7a8);
        bRam0000000003eb4e69 = 1;
      }
      uStack_b8 = 0;
      uStack_b0 = 0;
      lStack_a8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      lStack_c0 = 0;
      if (*(long *)(lVar2 + 0x10) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_b8,*(long *)(lVar2 + 0x10),uRam0000000003d3a7b0);
        while (uVar1 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_b8,uRam0000000003d325b0), (uVar1 & 1) != 0) {
          if (lStack_a8 != 0) {
            Atlas_Gameplay_HitVolumeVFXTriggerBehaviour__DeInit(lStack_a8,0);
          }
        }
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b8,uRam0000000003d325a8);
      }
      if (*(long *)(lVar2 + 0x18) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d0,*(long *)(lVar2 + 0x18),uRam0000000003d3a7a8);
        while (uVar1 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_d0,uRam0000000003d32598), (uVar1 & 1) != 0) {
          if (lStack_c0 != 0) {
            Atlas_Gameplay_HitVolumeVFXAdditionalTriggerBehaviour__DeInit(lStack_c0,0);
          }
        }
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_d0,uRam0000000003d32590);
      }
      *(undefined8 *)(lVar2 + 0x10) = 0;
      return;
    }
    lVar2 = *(long *)(param_2 + 0x20);
    *(long *)(param_1 + 0x10) = lVar2;
    if (lVar2 != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,lVar2,uRam0000000003d3a7b0);
      while (uVar1 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d325b0), (uVar1 & 1) != 0) {
        if (lStack_38 != 0) {
          Atlas_Gameplay_HitVolumeVFXTriggerBehaviour__Init(lStack_38,0);
        }
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d325a8);
      iStack_68 = 0;
    }
    lVar2 = *(long *)(param_2 + 0x28);
    *(long *)(param_1 + 0x18) = lVar2;
    if (lVar2 != 0) {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_60,lVar2,uRam0000000003d3a7a8);
      while (uVar1 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_60,uRam0000000003d32598), (uVar1 & 1) != 0) {
        if (lStack_50 != 0) {
          Atlas_Gameplay_HitVolumeVFXAdditionalTriggerBehaviour__Init(lStack_50,0);
        }
      }
      iStack_68 = iStack_68 + 1;
      uStack_70 = 0xa4;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,uRam0000000003d32590);
    }
  }
  return;
}



// ============================================================
// RVA: 0x1527f1c | Atlas.Gameplay.VfxHitVolumeManager.DeInit
// ============================================================

void Atlas_Gameplay_VfxHitVolumeManager__DeInit(long param_1)

{
  ulong uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb4e69 & 1) == 0) {
    func_0x00f78a20(0x3d32590);
    func_0x00f78a20(0x3d325a8);
    func_0x00f78a20(0x3d325b0);
    func_0x00f78a20(0x3d32598);
    func_0x00f78a20(0x3d325a0);
    func_0x00f78a20(0x3d325b8);
    func_0x00f78a20(0x3d3a7b0);
    func_0x00f78a20(0x3d3a7a8);
    bRam0000000003eb4e69 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*(long *)(param_1 + 0x10),uRam0000000003d3a7b0);
    while (uVar1 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d325b0), (uVar1 & 1) != 0) {
      if (lStack_38 != 0) {
        Atlas_Gameplay_HitVolumeVFXTriggerBehaviour__DeInit(lStack_38,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d325a8);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_60,*(long *)(param_1 + 0x18),uRam0000000003d3a7a8);
    while (uVar1 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_60,uRam0000000003d32598), (uVar1 & 1) != 0) {
      if (lStack_50 != 0) {
        Atlas_Gameplay_HitVolumeVFXAdditionalTriggerBehaviour__DeInit(lStack_50,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,uRam0000000003d32590);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// ============================================================
// RVA: 0x1528118 | Atlas.Gameplay.VfxHitVolumeManager.Update
// ============================================================

void Atlas_Gameplay_VfxHitVolumeManager__Update(long param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000003eb4e6a & 1) == 0) {
    func_0x00f78a20(0x3d325a8);
    func_0x00f78a20(0x3d325b0);
    func_0x00f78a20(0x3d325b8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d3a7b0);
    bRam0000000003eb4e6a = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,*(long *)(param_1 + 0x10),uRam0000000003d3a7b0);
    while (uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d325b0), lVar1 = lStack_48,
          (uVar3 & 1) != 0) {
      if (lStack_48 != 0) {
        if (param_2 == (long *)0x0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1528274);
          (*pcVar2)();
        }
        lVar5 = *param_2;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0152822c;
            }
            piVar6 = piVar6 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_0152822c:
        (*(code *)*puVar4)(param_2,puVar4[1]);
        Atlas_Gameplay_HitVolumeVFXTriggerBehaviour__OnUpdate(lVar1,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d325a8);
  }
  return;
}



// ============================================================
// RVA: 0x15282b0 | Atlas.Gameplay.VfxHitVolumeManager..ctor
// ============================================================

void Atlas_Gameplay_VfxHitVolumeManager___ctor(void)

{
  return;
}



