// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour

// ============================================================
// RVA: 0x15b2fe0 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.get_BoxDropLocator
// ============================================================

undefined8 Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__get_BoxDropLocator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x15b2fe8 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.get_RewardKartLocator
// ============================================================

undefined8 Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__get_RewardKartLocator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x15b2ff0 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.get_RewardCharacterLocator
// ============================================================

undefined8 Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__get_RewardCharacterLocator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15b2ff8 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.get_RewardAntennaLocator
// ============================================================

undefined8 Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__get_RewardAntennaLocator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x15b3000 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.get_RewardGliderLocator
// ============================================================

undefined8 Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__get_RewardGliderLocator(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x15b3008 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.get_RewardWheelLocator
// ============================================================

undefined8 Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__get_RewardWheelLocator(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



// ============================================================
// RVA: 0x15b3010 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.get_RewardBoostLocator
// ============================================================

undefined8 Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__get_RewardBoostLocator(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x15b3018 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.get_RewardKartIPPlane
// ============================================================

undefined8 Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__get_RewardKartIPPlane(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



// ============================================================
// RVA: 0x15b3020 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.get_RewardCharacterIPPlane
// ============================================================

undefined8 Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__get_RewardCharacterIPPlane(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



// ============================================================
// RVA: 0x15b3028 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.get_RewardAntennaIPPlane
// ============================================================

undefined8 Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__get_RewardAntennaIPPlane(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



// ============================================================
// RVA: 0x15b3030 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.get_RewardGliderIPPlane
// ============================================================

undefined8 Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__get_RewardGliderIPPlane(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x15b3038 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.get_RewardWheelIPPlane
// ============================================================

undefined8 Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__get_RewardWheelIPPlane(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



// ============================================================
// RVA: 0x15b3040 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x015b3258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b325c) */
/* WARNING: Removing unreachable block (ram,0x015b3264) */
/* WARNING: Removing unreachable block (ram,0x015b3270) */

void Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__Update
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  int aiStack_f8 [2];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  
  /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  if ((bRam0000000003eb5268 & 1) == 0) {
    func_0x00f78a20(0x3d21b88);
    bRam0000000003eb5268 = 1;
  }
  if (*(char *)(param_1 + 0x181) == '\0') {
    if (*(char *)(param_1 + 0x180) != '\0') {
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x100);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x104);
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x108);
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x10c);
      goto code_r0x015b3118;
    }
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x118);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x11c);
  }
  else {
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x140);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x144);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x148);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x14c);
    if (*(char *)(param_1 + 0x180) != '\0') {
code_r0x015b3118:
      puVar8 = (undefined4 *)(param_1 + 0xe0);
      puVar10 = (undefined4 *)(param_1 + 0xe4);
      puVar11 = (undefined4 *)(param_1 + 0xe8);
      puVar12 = (undefined4 *)(param_1 + 0xec);
      goto code_r0x015b315c;
    }
  }
  puVar8 = (undefined4 *)(param_1 + 0xf0);
  puVar10 = (undefined4 *)(param_1 + 0xf4);
  puVar11 = (undefined4 *)(param_1 + 0xf8);
  puVar12 = (undefined4 *)(param_1 + 0xfc);
code_r0x015b315c:
  uVar15 = *puVar12;
  uVar16 = *puVar11;
  uVar17 = *puVar10;
  *(undefined4 *)(param_1 + 0x160) = *puVar8;
  *(undefined4 *)(param_1 + 0x164) = uVar17;
  *(undefined4 *)(param_1 + 0x168) = uVar16;
  *(undefined4 *)(param_1 + 0x16c) = uVar15;
  uVar18 = *(undefined4 *)(param_1 + 0x130);
  uVar15 = *(undefined4 *)(param_1 + 0x134);
  uVar16 = *(undefined4 *)(param_1 + 0x138);
  uVar17 = *(undefined4 *)(param_1 + 0x13c);
  if (((*(byte *)(/*Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour_TypeInfo*/ lRam0000000003d21b88 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour_TypeInfo*/ lRam0000000003d21b88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar18 = /*UnityEngine.Color$$Lerp*/ func_0x032234c0(uVar18,0);
  *(undefined4 *)(param_1 + 0x130) = uVar18;
  *(undefined4 *)(param_1 + 0x134) = uVar15;
  *(undefined4 *)(param_1 + 0x138) = uVar16;
  *(undefined4 *)(param_1 + 0x13c) = uVar17;
  uVar16 = *(undefined4 *)(param_1 + 0x124);
  uVar17 = *(undefined4 *)(param_1 + 0x128);
  uVar18 = *(undefined4 *)(param_1 + 300);
  uVar15 = /*UnityEngine.Color$$Lerp*/ func_0x032234c0(*(undefined4 *)(param_1 + 0x120),0);
  *(undefined4 *)(param_1 + 0x120) = uVar15;
  *(undefined4 *)(param_1 + 0x124) = uVar16;
  *(undefined4 *)(param_1 + 0x128) = uVar17;
  *(undefined4 *)(param_1 + 300) = uVar18;
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar3 = /*UnityEngine.Renderer$$get_material*/ func_0x0325be64(*(long *)(param_1 + 0x50),0), lVar3 != 0)) {
    uVar15 = **(undefined4 **)(/*Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour_TypeInfo*/ lRam0000000003d21b88 + 0xb8);
    if (pcRam0000000003ebfd28 == (code *)0x0) {
      pcRam0000000003ebfd28 =
           (code *)func_0x00f789d4("UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)"
                                   ,uVar15,0);
    }
    (*pcRam0000000003ebfd28)(lVar3,uVar15,&stack0xffffffffffffff50);
    return;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb5267 & 1) == 0) {
    func_0x00f78a20(0x3d53400);
    func_0x00f78a20(0x3d32968);
    func_0x00f78a20(0x3d32970);
    func_0x00f78a20(0x3d32978);
    func_0x00f78a20(0x3d57a10);
    func_0x00f78a20(0x3d3b048);
    func_0x00f78a20(0x3d3b050);
    func_0x00f78a20(0x3d3b040);
    func_0x00f78a20(0x3d1db68);
    bRam0000000003eb5267 = 1;
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_e0 = 0;
  aiStack_f8[1] = 0;
  *(long *)(lVar3 + 0x170) = param_3;
  if (param_3 != 0) {
    uVar7 = *(undefined8 *)(param_3 + 0x68);
    *(undefined8 *)(lVar3 + 0xe8) = *(undefined8 *)(param_3 + 0x70);
    *(undefined8 *)(lVar3 + 0xe0) = uVar7;
    uVar7 = *(undefined8 *)(param_3 + 0x58);
    *(undefined8 *)(lVar3 + 0x108) = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(lVar3 + 0x100) = uVar7;
    lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<LightWorldMemberBehaviour>_TypeInfo*/ uRam0000000003d1db68);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar4,uRam0000000003d3b040);
    lVar9 = *(long *)(lVar3 + 0x68);
    if (lVar9 != 0) {
      iVar14 = 0;
      uVar13 = 0;
      while ((int)uVar13 < (int)*(uint *)(lVar9 + 0x18)) {
        if (*(uint *)(lVar9 + 0x18) <= uVar13) goto code_r0x015b3580;
        lVar9 = *(long *)(lVar9 + (long)(int)uVar13 * 8 + 0x20);
        if ((lVar9 == 0) || (/*UnityEngine.GameObject$$GetComponentsInChildren<Renderer>*/ func_0x0185d724(lVar9,1,lVar4,uRam0000000003d57a10), lVar4 == 0))
        goto code_r0x015b357c;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_110,lVar4,uRam0000000003d3b050);
        uStack_e8 = uStack_108;
        uStack_f0 = uStack_110;
        lStack_e0 = lStack_100;
        while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_f0,uRam0000000003d32970), lVar9 = lStack_e0,
              (uVar5 & 1) != 0) {
          if (lStack_e0 == 0) {
            func_0x00f78af4();
            goto code_r0x015b3590;
          }
          lVar6 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lStack_e0,uRam0000000003d53400);
          if (lVar6 == 0) {
            func_0x00f78af4();
            goto code_r0x015b3590;
          }
          /*Atlas.Gameplay.BlipBehaviour$$Init*/ func_0x0153daec(lVar6,0);
          if (param_4 == 0) {
            func_0x00f78af4();
            goto code_r0x015b3590;
          }
          /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x014864a4(param_4,lVar9,*(undefined8 *)(lVar6 + 0x48),0,0,1,0);
        }
        aiStack_f8[iVar14] = 0x8c;
        iVar1 = aiStack_f8[1];
        iVar14 = aiStack_f8[1] + 1;
        aiStack_f8[1] = iVar14;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f0,uRam0000000003d32968);
        if ((iVar14 != 0) && (aiStack_f8[iVar1] == 0x8c)) {
          iVar14 = iVar1;
          aiStack_f8[1] = iVar1;
        }
        uVar13 = uVar13 + 1;
        lVar9 = *(long *)(lVar3 + 0x68);
        if (lVar9 == 0) goto code_r0x015b357c;
      }
      if (lVar4 != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(lVar4,uRam0000000003d3b048);
        return;
      }
    }
  }
code_r0x015b357c:
  func_0x00f78af4();
code_r0x015b3580:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
  __Unwind_Resume();
code_r0x015b3590:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x15b3594);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x15b3068 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.ApplyColoursToRenderers
// ============================================================

/* WARNING: Possible PIC construction at 0x015b3258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b325c) */
/* WARNING: Removing unreachable block (ram,0x015b3264) */
/* WARNING: Removing unreachable block (ram,0x015b3270) */

void Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__ApplyColoursToRenderers
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  int aiStack_f8 [2];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  
  if ((bRam0000000003eb5268 & 1) == 0) {
    func_0x00f78a20(0x3d21b88);
    bRam0000000003eb5268 = 1;
  }
  if (*(char *)(param_1 + 0x181) == '\0') {
    if (*(char *)(param_1 + 0x180) != '\0') {
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x100);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x104);
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x108);
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x10c);
      goto LAB_015b3118;
    }
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x118);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x11c);
  }
  else {
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x140);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x144);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x148);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x14c);
    if (*(char *)(param_1 + 0x180) != '\0') {
LAB_015b3118:
      puVar8 = (undefined4 *)(param_1 + 0xe0);
      puVar10 = (undefined4 *)(param_1 + 0xe4);
      puVar11 = (undefined4 *)(param_1 + 0xe8);
      puVar12 = (undefined4 *)(param_1 + 0xec);
      goto code_r0x015b315c;
    }
  }
  puVar8 = (undefined4 *)(param_1 + 0xf0);
  puVar10 = (undefined4 *)(param_1 + 0xf4);
  puVar11 = (undefined4 *)(param_1 + 0xf8);
  puVar12 = (undefined4 *)(param_1 + 0xfc);
code_r0x015b315c:
  uVar15 = *puVar12;
  uVar16 = *puVar11;
  uVar17 = *puVar10;
  *(undefined4 *)(param_1 + 0x160) = *puVar8;
  *(undefined4 *)(param_1 + 0x164) = uVar17;
  *(undefined4 *)(param_1 + 0x168) = uVar16;
  *(undefined4 *)(param_1 + 0x16c) = uVar15;
  uVar18 = *(undefined4 *)(param_1 + 0x130);
  uVar15 = *(undefined4 *)(param_1 + 0x134);
  uVar16 = *(undefined4 *)(param_1 + 0x138);
  uVar17 = *(undefined4 *)(param_1 + 0x13c);
  if (((*(byte *)(/*Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour_TypeInfo*/ lRam0000000003d21b88 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour_TypeInfo*/ lRam0000000003d21b88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar18 = /*UnityEngine.Color$$Lerp*/ func_0x032234c0(uVar18,0);
  *(undefined4 *)(param_1 + 0x130) = uVar18;
  *(undefined4 *)(param_1 + 0x134) = uVar15;
  *(undefined4 *)(param_1 + 0x138) = uVar16;
  *(undefined4 *)(param_1 + 0x13c) = uVar17;
  uVar16 = *(undefined4 *)(param_1 + 0x124);
  uVar17 = *(undefined4 *)(param_1 + 0x128);
  uVar18 = *(undefined4 *)(param_1 + 300);
  uVar15 = /*UnityEngine.Color$$Lerp*/ func_0x032234c0(*(undefined4 *)(param_1 + 0x120),0);
  *(undefined4 *)(param_1 + 0x120) = uVar15;
  *(undefined4 *)(param_1 + 0x124) = uVar16;
  *(undefined4 *)(param_1 + 0x128) = uVar17;
  *(undefined4 *)(param_1 + 300) = uVar18;
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar3 = /*UnityEngine.Renderer$$get_material*/ func_0x0325be64(*(long *)(param_1 + 0x50),0), lVar3 != 0)) {
    uVar15 = **(undefined4 **)(/*Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour_TypeInfo*/ lRam0000000003d21b88 + 0xb8);
    if (pcRam0000000003ebfd28 == (code *)0x0) {
      pcRam0000000003ebfd28 =
           (code *)func_0x00f789d4("UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)"
                                   ,uVar15,0);
    }
    (*pcRam0000000003ebfd28)(lVar3,uVar15,&stack0xffffffffffffff50);
    return;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb5267 & 1) == 0) {
    func_0x00f78a20(0x3d53400);
    func_0x00f78a20(0x3d32968);
    func_0x00f78a20(0x3d32970);
    func_0x00f78a20(0x3d32978);
    func_0x00f78a20(0x3d57a10);
    func_0x00f78a20(0x3d3b048);
    func_0x00f78a20(0x3d3b050);
    func_0x00f78a20(0x3d3b040);
    func_0x00f78a20(0x3d1db68);
    bRam0000000003eb5267 = 1;
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_e0 = 0;
  aiStack_f8[1] = 0;
  *(long *)(lVar3 + 0x170) = param_3;
  if (param_3 != 0) {
    uVar7 = *(undefined8 *)(param_3 + 0x68);
    *(undefined8 *)(lVar3 + 0xe8) = *(undefined8 *)(param_3 + 0x70);
    *(undefined8 *)(lVar3 + 0xe0) = uVar7;
    uVar7 = *(undefined8 *)(param_3 + 0x58);
    *(undefined8 *)(lVar3 + 0x108) = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(lVar3 + 0x100) = uVar7;
    lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<LightWorldMemberBehaviour>_TypeInfo*/ uRam0000000003d1db68);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar4,uRam0000000003d3b040);
    lVar9 = *(long *)(lVar3 + 0x68);
    if (lVar9 != 0) {
      iVar14 = 0;
      uVar13 = 0;
      while ((int)uVar13 < (int)*(uint *)(lVar9 + 0x18)) {
        if (*(uint *)(lVar9 + 0x18) <= uVar13) goto code_r0x015b3580;
        lVar9 = *(long *)(lVar9 + (long)(int)uVar13 * 8 + 0x20);
        if ((lVar9 == 0) || (/*UnityEngine.GameObject$$GetComponentsInChildren<Renderer>*/ func_0x0185d724(lVar9,1,lVar4,uRam0000000003d57a10), lVar4 == 0))
        goto code_r0x015b357c;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_110,lVar4,uRam0000000003d3b050);
        uStack_e8 = uStack_108;
        uStack_f0 = uStack_110;
        lStack_e0 = lStack_100;
        while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_f0,uRam0000000003d32970), lVar9 = lStack_e0,
              (uVar5 & 1) != 0) {
          if (lStack_e0 == 0) {
            func_0x00f78af4();
            goto code_r0x015b3590;
          }
          lVar6 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lStack_e0,uRam0000000003d53400);
          if (lVar6 == 0) {
            func_0x00f78af4();
            goto code_r0x015b3590;
          }
          /*Atlas.Gameplay.BlipBehaviour$$Init*/ func_0x0153daec(lVar6,0);
          if (param_4 == 0) {
            func_0x00f78af4();
            goto code_r0x015b3590;
          }
          /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x014864a4(param_4,lVar9,*(undefined8 *)(lVar6 + 0x48),0,0,1,0);
        }
        aiStack_f8[iVar14] = 0x8c;
        iVar1 = aiStack_f8[1];
        iVar14 = aiStack_f8[1] + 1;
        aiStack_f8[1] = iVar14;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f0,uRam0000000003d32968);
        if ((iVar14 != 0) && (aiStack_f8[iVar1] == 0x8c)) {
          iVar14 = iVar1;
          aiStack_f8[1] = iVar1;
        }
        uVar13 = uVar13 + 1;
        lVar9 = *(long *)(lVar3 + 0x68);
        if (lVar9 == 0) goto code_r0x015b357c;
      }
      if (lVar4 != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(lVar4,uRam0000000003d3b048);
        return;
      }
    }
  }
code_r0x015b357c:
  func_0x00f78af4();
code_r0x015b3580:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
  __Unwind_Resume();
code_r0x015b3590:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x15b3594);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x15b32b4 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.OnInit
// ============================================================

void Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__OnInit
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  int aiStack_88 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000003eb5267 & 1) == 0) {
    func_0x00f78a20(0x3d53400);
    func_0x00f78a20(0x3d32968);
    func_0x00f78a20(0x3d32970);
    func_0x00f78a20(0x3d32978);
    func_0x00f78a20(0x3d57a10);
    func_0x00f78a20(0x3d3b048);
    func_0x00f78a20(0x3d3b050);
    func_0x00f78a20(0x3d3b040);
    func_0x00f78a20(0x3d1db68);
    bRam0000000003eb5267 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  aiStack_88[1] = 0;
  *(long *)(param_1 + 0x170) = param_3;
  if (param_3 != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x68);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_3 + 0x70);
    *(undefined8 *)(param_1 + 0xe0) = uVar6;
    uVar6 = *(undefined8 *)(param_3 + 0x58);
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(param_1 + 0x100) = uVar6;
    lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<LightWorldMemberBehaviour>_TypeInfo*/ uRam0000000003d1db68);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar3,uRam0000000003d3b040);
    lVar7 = *(long *)(param_1 + 0x68);
    if (lVar7 != 0) {
      iVar9 = 0;
      uVar8 = 0;
      while ((int)uVar8 < (int)*(uint *)(lVar7 + 0x18)) {
        if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_015b3580;
        lVar7 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
        if ((lVar7 == 0) || (/*UnityEngine.GameObject$$GetComponentsInChildren<Renderer>*/ func_0x0185d724(lVar7,1,lVar3,uRam0000000003d57a10), lVar3 == 0))
        goto LAB_015b357c;
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a0,lVar3,uRam0000000003d3b050);
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_70 = lStack_90;
        while (uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32970), lVar7 = lStack_70,
              (uVar4 & 1) != 0) {
          if (lStack_70 == 0) {
            func_0x00f78af4();
            goto code_r0x015b3590;
          }
          lVar5 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lStack_70,uRam0000000003d53400);
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x015b3590;
          }
          /*Atlas.Gameplay.BlipBehaviour$$Init*/ func_0x0153daec(lVar5,0);
          if (param_4 == 0) {
            func_0x00f78af4();
            goto code_r0x015b3590;
          }
          /*Atlas.Lighting.LightWorld$$RegisterMember*/ func_0x014864a4(param_4,lVar7,*(undefined8 *)(lVar5 + 0x48),0,0,1,0);
        }
        aiStack_88[iVar9] = 0x8c;
        iVar1 = aiStack_88[1];
        iVar9 = aiStack_88[1] + 1;
        aiStack_88[1] = iVar9;
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32968);
        if ((iVar9 != 0) && (aiStack_88[iVar1] == 0x8c)) {
          iVar9 = iVar1;
          aiStack_88[1] = iVar1;
        }
        uVar8 = uVar8 + 1;
        lVar7 = *(long *)(param_1 + 0x68);
        if (lVar7 == 0) goto LAB_015b357c;
      }
      if (lVar3 != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(lVar3,uRam0000000003d3b048);
        return;
      }
    }
  }
LAB_015b357c:
  func_0x00f78af4();
LAB_015b3580:
  uVar6 = func_0x00f78b24();
  func_0x00f78ac0(uVar6,0);
  __Unwind_Resume();
code_r0x015b3590:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x15b3594);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x15b3594 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.HueLerp
// ============================================================

float Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__HueLerp(float param_1)

{
  float fVar1;
  float in_s4;
  undefined4 in_stack_00000000;
  
  fVar1 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(in_stack_00000000,0);
  return param_1 + (in_s4 - param_1) * fVar1;
}



// ============================================================
// RVA: 0x15b35a4 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.OnIPChanged
// ============================================================

/* WARNING: Possible PIC construction at 0x015b3610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b36b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b3740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b383c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b38d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b3980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b39c4) */
/* WARNING: Removing unreachable block (ram,0x015b39cc) */
/* WARNING: Removing unreachable block (ram,0x015b39d8) */
/* WARNING: Removing unreachable block (ram,0x015b39a4) */
/* WARNING: Removing unreachable block (ram,0x015b39ac) */
/* WARNING: Removing unreachable block (ram,0x015b39b8) */
/* WARNING: Removing unreachable block (ram,0x015b3984) */
/* WARNING: Removing unreachable block (ram,0x015b398c) */
/* WARNING: Removing unreachable block (ram,0x015b3998) */
/* WARNING: Removing unreachable block (ram,0x015b38dc) */
/* WARNING: Removing unreachable block (ram,0x015b3900) */
/* WARNING: Removing unreachable block (ram,0x015b3908) */
/* WARNING: Removing unreachable block (ram,0x015b3910) */
/* WARNING: Removing unreachable block (ram,0x015b3914) */
/* WARNING: Removing unreachable block (ram,0x015b3918) */
/* WARNING: Removing unreachable block (ram,0x03237f38) */
/* WARNING: Removing unreachable block (ram,0x0323946c) */
/* WARNING: Removing unreachable block (ram,0x0323949c) */
/* WARNING: Removing unreachable block (ram,0x032394b0) */
/* WARNING: Removing unreachable block (ram,0x015b3840) */
/* WARNING: Removing unreachable block (ram,0x015b386c) */
/* WARNING: Removing unreachable block (ram,0x015b3848) */
/* WARNING: Removing unreachable block (ram,0x015b388c) */
/* WARNING: Removing unreachable block (ram,0x015b3864) */
/* WARNING: Removing unreachable block (ram,0x015b3884) */
/* WARNING: Removing unreachable block (ram,0x015b387c) */
/* WARNING: Removing unreachable block (ram,0x015b3874) */
/* WARNING: Removing unreachable block (ram,0x015b3890) */
/* WARNING: Removing unreachable block (ram,0x015b3894) */
/* WARNING: Removing unreachable block (ram,0x015b38a0) */
/* WARNING: Removing unreachable block (ram,0x015b38a8) */
/* WARNING: Removing unreachable block (ram,0x015b38ac) */
/* WARNING: Removing unreachable block (ram,0x015b3940) */
/* WARNING: Removing unreachable block (ram,0x015b38bc) */
/* WARNING: Removing unreachable block (ram,0x015b38c0) */
/* WARNING: Removing unreachable block (ram,0x015b3950) */
/* WARNING: Removing unreachable block (ram,0x015b38d0) */
/* WARNING: Removing unreachable block (ram,0x015b3744) */
/* WARNING: Removing unreachable block (ram,0x015b3770) */
/* WARNING: Removing unreachable block (ram,0x015b3778) */
/* WARNING: Removing unreachable block (ram,0x015b377c) */
/* WARNING: Removing unreachable block (ram,0x015b378c) */
/* WARNING: Removing unreachable block (ram,0x015b37a4) */
/* WARNING: Removing unreachable block (ram,0x015b37ac) */
/* WARNING: Removing unreachable block (ram,0x015b37b0) */
/* WARNING: Removing unreachable block (ram,0x015b37b4) */
/* WARNING: Removing unreachable block (ram,0x015b37d0) */
/* WARNING: Removing unreachable block (ram,0x015b36b4) */
/* WARNING: Removing unreachable block (ram,0x015b3614) */
/* WARNING: Removing unreachable block (ram,0x015b39e4) */
/* WARNING: Removing unreachable block (ram,0x015b39ec) */
/* WARNING: Removing unreachable block (ram,0x015b39f8) */
/* WARNING: Recovered jumptable eliminated as dead code */

ulong Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__OnIPChanged
                (ulong param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar7;
  long lVar8;
  ulong unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong uVar9;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  undefined *unaff_x30;
  undefined *puVar11;
  undefined1 auVar12 [16];
  long lVar6;
  
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  puVar1 = &stack0xffffffffffffffd0;
  puVar10 = &stack0xfffffffffffffff0;
  *(long *)(param_1 + 0x178) = param_2;
  uVar3 = unaff_x19;
  if (param_2 == 0) {
LAB_015b3620:
    func_0x00f78af4();
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x110) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0xf0) = uVar4;
    lVar7 = *(long *)(param_1 + 0x68);
    uVar3 = param_1;
    if (lVar7 == 0) goto LAB_015b3620;
    uVar9 = 0;
    if (0 < *(int *)(lVar7 + 0x18)) {
      if (*(int *)(lVar7 + 0x18) != 0) {
        lVar7 = *(long *)(lVar7 + 0x20);
        if (lVar7 != 0) {
          uVar2 = *(int *)(param_2 + 0x78) == 0;
          puVar11 = (undefined *)0x15b3614;
          goto code_r0x0322ef1c;
        }
        goto LAB_015b3620;
      }
      uVar4 = func_0x00f78b24();
      unaff_x30 = &Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__ChangeIPBackgroundObjects;
      uVar3 = func_0x00f78ac0(uVar4,0);
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = param_1;
      unaff_x20 = param_2;
      unaff_x21 = uVar9;
      unaff_x29 = puVar10;
    }
  }
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0x10);
  if (*(char *)(uVar3 + 0x180) == '\0') {
    lVar8 = *(long *)(uVar3 + 0x178);
  }
  else {
    lVar8 = *(long *)(uVar3 + 0x170);
  }
  if ((lVar8 != 0) && (lVar7 = *(long *)(uVar3 + 0x78), lVar7 != 0)) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar3;
    uVar9 = (ulong)*(uint *)(lVar8 + 0x7c);
    if (*(int *)(lVar7 + 0x18) < 1) {
      return uVar3;
    }
    if (*(int *)(lVar7 + 0x18) == 0) {
      uVar4 = func_0x00f78b24();
      auVar12 = func_0x00f78ac0(uVar4,0);
      lVar6 = auVar12._8_8_;
      lVar8 = auVar12._0_8_;
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
      *(ulong *)((long)register0x00000008 + -0x58) = uVar9;
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      *(ulong *)((long)register0x00000008 + -0x48) = uVar3;
      *(undefined1 **)((long)register0x00000008 + -0x40) = puVar10;
      *(undefined **)((long)register0x00000008 + -0x38) =
           &Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__OnSceneDefinitionChanged;
      puVar10 = (undefined1 *)((long)register0x00000008 + -0x40);
      uVar9 = 0x3eb5000;
      if ((bRam0000000003eb5269 & 1) == 0) {
        func_0x00f78a20(0x3d21b88);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5269 = 1;
      }
      if ((lVar6 == 0) || (lVar7 = *(long *)(lVar8 + 0x60), lVar7 == 0)) {
        auVar12 = func_0x00f78af4();
        uVar9 = auVar12._8_8_;
        lVar5 = auVar12._0_8_;
        auVar12._8_8_ = lVar5;
        auVar12._0_8_ = lVar5;
        *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb5000;
        *(long *)((long)register0x00000008 + -0x80) = lVar6;
        *(long *)((long)register0x00000008 + -0x78) = lVar8;
        *(undefined1 **)((long)register0x00000008 + -0x70) = puVar10;
        *(undefined **)((long)register0x00000008 + -0x68) =
             &Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__ShowIPPlane;
        if ((bRam0000000003eb526a & 1) == 0) {
          func_0x00f78a20(0x3d21b88);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb526a = 1;
        }
        unaff_x22 = 0x3d23990;
        puVar1 = (undefined1 *)((long)register0x00000008 + -0xb0);
        *(long *)((long)register0x00000008 + -0xb0) = lVar5;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = param_3;
        *(undefined1 **)((long)register0x00000008 + -0xa0) =
             (undefined1 *)((long)register0x00000008 + -0x70);
        *(undefined **)((long)register0x00000008 + -0x98) = &UNK_015b3840;
        puVar10 = (undefined1 *)((long)register0x00000008 + -0xa0);
        if ((*(long *)(lVar5 + 0xb8) == 0) ||
           (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar5 + 0xb8),0), lVar7 == 0)) {
          uVar3 = func_0x00f78af4();
          *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d23990;
          *(ulong *)((long)register0x00000008 + -0xd8) = uVar9;
          *(long *)((long)register0x00000008 + -0xd0) = lVar5;
          *(long *)((long)register0x00000008 + -200) = lVar5;
          *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar10;
          *(undefined **)((long)register0x00000008 + -0xb8) =
               &Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour___ctor;
          if ((bRam0000000003eb517d & 1) == 0) {
            func_0x00f78a20(0x3d2e428,0);
            func_0x00f78a20(0x3d1c210);
            bRam0000000003eb517d = 1;
          }
          uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
          /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar4,uRam0000000003d2e428);
          *(undefined8 *)(uVar3 + 0x40) = uVar4;
          *(undefined8 *)((long)register0x00000008 + -0xe0) =
               *(undefined8 *)((long)register0x00000008 + -0xe0);
          *(undefined8 *)((long)register0x00000008 + -0xd8) =
               *(undefined8 *)((long)register0x00000008 + -0xd8);
          *(undefined8 *)((long)register0x00000008 + -0xd0) =
               *(undefined8 *)((long)register0x00000008 + -0xd0);
          *(undefined8 *)((long)register0x00000008 + -200) =
               *(undefined8 *)((long)register0x00000008 + -200);
          *(undefined8 *)((long)register0x00000008 + -0xc0) =
               *(undefined8 *)((long)register0x00000008 + -0xc0);
          *(undefined8 *)((long)register0x00000008 + -0xb8) =
               *(undefined8 *)((long)register0x00000008 + -0xb8);
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          return uVar3;
        }
        uVar2 = 0;
        puVar11 = &UNK_015b3984;
      }
      else {
        unaff_x22 = 0x3d23000;
        uVar2 = *(undefined1 *)(lVar6 + 0x33);
        puVar11 = &UNK_015b3744;
      }
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x20);
      if (lVar7 == 0) goto code_r0x015b36c0;
      uVar2 = *(uint *)(lVar8 + 0x7c) == 0;
      puVar11 = &UNK_015b36b4;
    }
code_r0x0322ef1c:
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(ulong *)(puVar1 + -0x28) = uVar9;
    *(long *)(puVar1 + -0x20) = auVar12._8_8_;
    *(long *)(puVar1 + -0x18) = auVar12._0_8_;
    *(undefined1 **)(puVar1 + -0x10) = puVar10;
    *(undefined **)(puVar1 + -8) = puVar11;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000003ebf4c0)(lVar7,uVar2);
    return uVar3;
  }
code_r0x015b36c0:
  uVar3 = func_0x00f78af4();
  return uVar3;
}



// ============================================================
// RVA: 0x15b3644 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.ChangeIPBackgroundObjects
// ============================================================

/* WARNING: Possible PIC construction at 0x015b36b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b3740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b383c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b38d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b3980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b39c4) */
/* WARNING: Removing unreachable block (ram,0x015b39cc) */
/* WARNING: Removing unreachable block (ram,0x015b39d8) */
/* WARNING: Removing unreachable block (ram,0x015b39a4) */
/* WARNING: Removing unreachable block (ram,0x015b39ac) */
/* WARNING: Removing unreachable block (ram,0x015b39b8) */
/* WARNING: Removing unreachable block (ram,0x015b3984) */
/* WARNING: Removing unreachable block (ram,0x015b398c) */
/* WARNING: Removing unreachable block (ram,0x015b3998) */
/* WARNING: Removing unreachable block (ram,0x015b38dc) */
/* WARNING: Removing unreachable block (ram,0x015b3900) */
/* WARNING: Removing unreachable block (ram,0x015b3908) */
/* WARNING: Removing unreachable block (ram,0x015b3910) */
/* WARNING: Removing unreachable block (ram,0x015b3914) */
/* WARNING: Removing unreachable block (ram,0x015b3918) */
/* WARNING: Removing unreachable block (ram,0x03237f38) */
/* WARNING: Removing unreachable block (ram,0x0323946c) */
/* WARNING: Removing unreachable block (ram,0x0323949c) */
/* WARNING: Removing unreachable block (ram,0x032394b0) */
/* WARNING: Removing unreachable block (ram,0x015b3840) */
/* WARNING: Removing unreachable block (ram,0x015b386c) */
/* WARNING: Removing unreachable block (ram,0x015b3848) */
/* WARNING: Removing unreachable block (ram,0x015b388c) */
/* WARNING: Removing unreachable block (ram,0x015b3864) */
/* WARNING: Removing unreachable block (ram,0x015b3884) */
/* WARNING: Removing unreachable block (ram,0x015b387c) */
/* WARNING: Removing unreachable block (ram,0x015b3874) */
/* WARNING: Removing unreachable block (ram,0x015b3890) */
/* WARNING: Removing unreachable block (ram,0x015b3894) */
/* WARNING: Removing unreachable block (ram,0x015b38a0) */
/* WARNING: Removing unreachable block (ram,0x015b38a8) */
/* WARNING: Removing unreachable block (ram,0x015b38ac) */
/* WARNING: Removing unreachable block (ram,0x015b3940) */
/* WARNING: Removing unreachable block (ram,0x015b38bc) */
/* WARNING: Removing unreachable block (ram,0x015b38c0) */
/* WARNING: Removing unreachable block (ram,0x015b3950) */
/* WARNING: Removing unreachable block (ram,0x015b38d0) */
/* WARNING: Removing unreachable block (ram,0x015b3744) */
/* WARNING: Removing unreachable block (ram,0x015b3770) */
/* WARNING: Removing unreachable block (ram,0x015b3778) */
/* WARNING: Removing unreachable block (ram,0x015b377c) */
/* WARNING: Removing unreachable block (ram,0x015b378c) */
/* WARNING: Removing unreachable block (ram,0x015b37a4) */
/* WARNING: Removing unreachable block (ram,0x015b37ac) */
/* WARNING: Removing unreachable block (ram,0x015b37b0) */
/* WARNING: Removing unreachable block (ram,0x015b37b4) */
/* WARNING: Removing unreachable block (ram,0x015b37d0) */
/* WARNING: Removing unreachable block (ram,0x015b36b4) */
/* WARNING: Removing unreachable block (ram,0x015b39e4) */
/* WARNING: Removing unreachable block (ram,0x015b39ec) */
/* WARNING: Removing unreachable block (ram,0x015b39f8) */
/* WARNING: Recovered jumptable eliminated as dead code */

long Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__ChangeIPBackgroundObjects
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  plVar1 = (long *)&stack0xffffffffffffffd0;
  if (*(char *)(param_1 + 0x180) == '\0') {
    lVar5 = *(long *)(param_1 + 0x178);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x170);
  }
  if ((lVar5 != 0) && (lVar4 = *(long *)(param_1 + 0x78), lVar4 != 0)) {
    auVar8 = ZEXT416(*(uint *)(lVar5 + 0x7c)) << 0x40;
    if (*(int *)(lVar4 + 0x18) < 1) {
      return param_1;
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
      uVar3 = func_0x00f78b24();
      auVar8 = func_0x00f78ac0(uVar3,0);
      lVar5 = auVar8._8_8_;
      param_1 = auVar8._0_8_;
      plVar1 = (long *)&stack0xffffffffffffffa0;
      puStack_38 = &Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__OnSceneDefinitionChanged;
      pppppppuVar6 = &ppppppuStack_40;
      auVar8._8_8_ = 0x3eb5000;
      auVar8._0_8_ = lVar5;
      ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
      if ((bRam0000000003eb5269 & 1) == 0) {
        func_0x00f78a20(0x3d21b88);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5269 = 1;
      }
      if ((lVar5 == 0) || (lVar4 = *(long *)(param_1 + 0x60), lVar4 == 0)) {
        auVar8 = func_0x00f78af4();
        param_1 = auVar8._0_8_;
        puStack_68 = &Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__ShowIPPlane;
        ppppppuStack_a0 = &ppppppuStack_70;
        ppppppuStack_70 = pppppppuVar6;
        if ((bRam0000000003eb526a & 1) == 0) {
          func_0x00f78a20(0x3d21b88);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb526a = 1;
        }
        unaff_x22 = 0x3d23990;
        plVar1 = &lStack_b0;
        puStack_98 = &UNK_015b3840;
        pppppppuVar6 = &ppppppuStack_a0;
        lStack_b0 = param_1;
        uStack_a8 = param_3;
        if ((*(long *)(param_1 + 0xb8) == 0) ||
           (lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0xb8),0), lVar4 == 0)) {
          lVar5 = func_0x00f78af4();
          if ((bRam0000000003eb517d & 1) == 0) {
            func_0x00f78a20(0x3d2e428,0);
            func_0x00f78a20(0x3d1c210);
            bRam0000000003eb517d = 1;
          }
          uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
          /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar3,uRam0000000003d2e428);
          *(undefined8 *)(lVar5 + 0x40) = uVar3;
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          return lVar5;
        }
        uVar2 = 0;
        puVar7 = &UNK_015b3984;
      }
      else {
        unaff_x22 = 0x3d23000;
        uVar2 = *(undefined1 *)(lVar5 + 0x33);
        puVar7 = &UNK_015b3744;
      }
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x20);
      if (lVar4 == 0) goto LAB_015b36c0;
      uVar2 = *(uint *)(lVar5 + 0x7c) == 0;
      puVar7 = &UNK_015b36b4;
      pppppppuVar6 = (undefined8 *******)&stack0xfffffffffffffff0;
    }
    *(undefined8 *)((long)plVar1 + -0x30) = unaff_x22;
    *(long *)((long)plVar1 + -0x28) = auVar8._8_8_;
    *(long *)((long)plVar1 + -0x20) = auVar8._0_8_;
    *(long *)((long)plVar1 + -0x18) = param_1;
    *(undefined8 ********)((long)plVar1 + -0x10) = pppppppuVar6;
    *(undefined **)((long)plVar1 + -8) = puVar7;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (*pcRam0000000003ebf4c0)(lVar4,uVar2);
    return lVar5;
  }
LAB_015b36c0:
  lVar5 = func_0x00f78af4();
  return lVar5;
}



// ============================================================
// RVA: 0x15b36e0 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.OnSceneDefinitionChanged
// ============================================================

/* WARNING: Possible PIC construction at 0x015b3740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b36b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b383c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b38d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b3980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b39c4) */
/* WARNING: Removing unreachable block (ram,0x015b39cc) */
/* WARNING: Removing unreachable block (ram,0x015b39d8) */
/* WARNING: Removing unreachable block (ram,0x015b39a4) */
/* WARNING: Removing unreachable block (ram,0x015b39ac) */
/* WARNING: Removing unreachable block (ram,0x015b39b8) */
/* WARNING: Removing unreachable block (ram,0x015b3984) */
/* WARNING: Removing unreachable block (ram,0x015b398c) */
/* WARNING: Removing unreachable block (ram,0x015b3998) */
/* WARNING: Removing unreachable block (ram,0x015b38dc) */
/* WARNING: Removing unreachable block (ram,0x015b3900) */
/* WARNING: Removing unreachable block (ram,0x015b3908) */
/* WARNING: Removing unreachable block (ram,0x015b3910) */
/* WARNING: Removing unreachable block (ram,0x015b3914) */
/* WARNING: Removing unreachable block (ram,0x015b3918) */
/* WARNING: Removing unreachable block (ram,0x03237f38) */
/* WARNING: Removing unreachable block (ram,0x0323946c) */
/* WARNING: Removing unreachable block (ram,0x0323949c) */
/* WARNING: Removing unreachable block (ram,0x032394b0) */
/* WARNING: Removing unreachable block (ram,0x015b3840) */
/* WARNING: Removing unreachable block (ram,0x015b386c) */
/* WARNING: Removing unreachable block (ram,0x015b3848) */
/* WARNING: Removing unreachable block (ram,0x015b388c) */
/* WARNING: Removing unreachable block (ram,0x015b3864) */
/* WARNING: Removing unreachable block (ram,0x015b3884) */
/* WARNING: Removing unreachable block (ram,0x015b387c) */
/* WARNING: Removing unreachable block (ram,0x015b3874) */
/* WARNING: Removing unreachable block (ram,0x015b3890) */
/* WARNING: Removing unreachable block (ram,0x015b3894) */
/* WARNING: Removing unreachable block (ram,0x015b38a0) */
/* WARNING: Removing unreachable block (ram,0x015b38a8) */
/* WARNING: Removing unreachable block (ram,0x015b38ac) */
/* WARNING: Removing unreachable block (ram,0x015b3940) */
/* WARNING: Removing unreachable block (ram,0x015b38bc) */
/* WARNING: Removing unreachable block (ram,0x015b38c0) */
/* WARNING: Removing unreachable block (ram,0x015b3950) */
/* WARNING: Removing unreachable block (ram,0x015b38d0) */
/* WARNING: Removing unreachable block (ram,0x015b36b4) */
/* WARNING: Removing unreachable block (ram,0x015b3744) */
/* WARNING: Removing unreachable block (ram,0x015b3770) */
/* WARNING: Removing unreachable block (ram,0x015b3778) */
/* WARNING: Removing unreachable block (ram,0x015b377c) */
/* WARNING: Removing unreachable block (ram,0x015b378c) */
/* WARNING: Removing unreachable block (ram,0x015b37a4) */
/* WARNING: Removing unreachable block (ram,0x015b37ac) */
/* WARNING: Removing unreachable block (ram,0x015b37b0) */
/* WARNING: Removing unreachable block (ram,0x015b37b4) */
/* WARNING: Removing unreachable block (ram,0x015b37d0) */
/* WARNING: Removing unreachable block (ram,0x015b3644) */
/* WARNING: Removing unreachable block (ram,0x015b366c) */
/* WARNING: Removing unreachable block (ram,0x015b3660) */
/* WARNING: Removing unreachable block (ram,0x015b3674) */
/* WARNING: Removing unreachable block (ram,0x015b367c) */
/* WARNING: Removing unreachable block (ram,0x015b3684) */
/* WARNING: Removing unreachable block (ram,0x015b3690) */
/* WARNING: Removing unreachable block (ram,0x015b36d4) */
/* WARNING: Removing unreachable block (ram,0x015b3698) */
/* WARNING: Removing unreachable block (ram,0x015b36a4) */
/* WARNING: Removing unreachable block (ram,0x015b3668) */
/* WARNING: Removing unreachable block (ram,0x015b36c0) */
/* WARNING: Removing unreachable block (ram,0x015b36c4) */
/* WARNING: Removing unreachable block (ram,0x015b39e4) */
/* WARNING: Removing unreachable block (ram,0x015b39ec) */
/* WARNING: Removing unreachable block (ram,0x015b39f8) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined1  [16]
Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__OnSceneDefinitionChanged
          (long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  long lStack_80;
  undefined8 uStack_78;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  plVar1 = (long *)&stack0xffffffffffffffd0;
  pppuVar6 = (undefined8 ***)&stack0xfffffffffffffff0;
  uVar4 = 0x3eb5000;
  if ((bRam0000000003eb5269 & 1) == 0) {
    func_0x00f78a20(0x3d21b88);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5269 = 1;
  }
  if ((param_2 == 0) || (lVar2 = *(long *)(param_1 + 0x60), lVar2 == 0)) {
    auVar8 = func_0x00f78af4();
    uVar4 = auVar8._8_8_;
    param_1 = auVar8._0_8_;
    puStack_38 = &Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__ShowIPPlane;
    ppuStack_70 = &ppuStack_40;
    ppuStack_40 = pppuVar6;
    if ((bRam0000000003eb526a & 1) == 0) {
      func_0x00f78a20(0x3d21b88);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb526a = 1;
    }
    uVar5 = 0x3d23990;
    plVar1 = &lStack_80;
    puStack_68 = &UNK_015b3840;
    pppuVar6 = &ppuStack_70;
    lStack_80 = param_1;
    uStack_78 = param_3;
    if ((*(long *)(param_1 + 0xb8) == 0) ||
       (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0xb8),0), lVar2 == 0)) {
      auVar8._0_8_ = func_0x00f78af4();
      if ((bRam0000000003eb517d & 1) == 0) {
        func_0x00f78a20(0x3d2e428,0);
        func_0x00f78a20(0x3d1c210);
        bRam0000000003eb517d = 1;
      }
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
      /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar4,uRam0000000003d2e428);
      *(undefined8 *)(auVar8._0_8_ + 0x40) = uVar4;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar8._8_8_ = 0;
      return auVar8;
    }
    uVar3 = 0;
    puVar7 = &UNK_015b3984;
    param_2 = param_1;
  }
  else {
    uVar5 = 0x3d23000;
    uVar3 = *(undefined1 *)(param_2 + 0x33);
    puVar7 = (undefined *)0x15b3744;
  }
  *(undefined8 *)((long)plVar1 + -0x30) = uVar5;
  *(undefined8 *)((long)plVar1 + -0x28) = uVar4;
  *(long *)((long)plVar1 + -0x20) = param_2;
  *(long *)((long)plVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)plVar1 + -0x10) = pppuVar6;
  *(undefined **)((long)plVar1 + -8) = puVar7;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar8 = (*pcRam0000000003ebf4c0)(lVar2,uVar3);
  return auVar8;
}



// ============================================================
// RVA: 0x15b37e8 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.ShowIPPlane
// ============================================================

/* WARNING: Possible PIC construction at 0x015b383c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b38d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b3980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b39c4) */
/* WARNING: Removing unreachable block (ram,0x015b39cc) */
/* WARNING: Removing unreachable block (ram,0x015b39d8) */
/* WARNING: Removing unreachable block (ram,0x015b39a4) */
/* WARNING: Removing unreachable block (ram,0x015b39ac) */
/* WARNING: Removing unreachable block (ram,0x015b39b8) */
/* WARNING: Removing unreachable block (ram,0x015b3984) */
/* WARNING: Removing unreachable block (ram,0x015b398c) */
/* WARNING: Removing unreachable block (ram,0x015b3998) */
/* WARNING: Removing unreachable block (ram,0x015b38dc) */
/* WARNING: Removing unreachable block (ram,0x015b3900) */
/* WARNING: Removing unreachable block (ram,0x015b3908) */
/* WARNING: Removing unreachable block (ram,0x015b3910) */
/* WARNING: Removing unreachable block (ram,0x015b3914) */
/* WARNING: Removing unreachable block (ram,0x015b3918) */
/* WARNING: Removing unreachable block (ram,0x03237f38) */
/* WARNING: Removing unreachable block (ram,0x0323946c) */
/* WARNING: Removing unreachable block (ram,0x0323949c) */
/* WARNING: Removing unreachable block (ram,0x032394b0) */
/* WARNING: Removing unreachable block (ram,0x015b3840) */
/* WARNING: Removing unreachable block (ram,0x015b386c) */
/* WARNING: Removing unreachable block (ram,0x015b3848) */
/* WARNING: Removing unreachable block (ram,0x015b388c) */
/* WARNING: Removing unreachable block (ram,0x015b3864) */
/* WARNING: Removing unreachable block (ram,0x015b3884) */
/* WARNING: Removing unreachable block (ram,0x015b387c) */
/* WARNING: Removing unreachable block (ram,0x015b3874) */
/* WARNING: Removing unreachable block (ram,0x015b3890) */
/* WARNING: Removing unreachable block (ram,0x015b3894) */
/* WARNING: Removing unreachable block (ram,0x015b38a0) */
/* WARNING: Removing unreachable block (ram,0x015b38a8) */
/* WARNING: Removing unreachable block (ram,0x015b38ac) */
/* WARNING: Removing unreachable block (ram,0x015b3940) */
/* WARNING: Removing unreachable block (ram,0x015b38bc) */
/* WARNING: Removing unreachable block (ram,0x015b38c0) */
/* WARNING: Removing unreachable block (ram,0x015b3950) */
/* WARNING: Removing unreachable block (ram,0x015b38d0) */
/* WARNING: Removing unreachable block (ram,0x015b39e4) */
/* WARNING: Removing unreachable block (ram,0x015b39ec) */
/* WARNING: Removing unreachable block (ram,0x015b39f8) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined1  [16] Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__ShowIPPlane(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb526a & 1) == 0) {
    func_0x00f78a20(0x3d21b88);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb526a = 1;
  }
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0xb8),0), lVar2 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*pcRam0000000003ebf4c0)(lVar2,0);
    return auVar3;
  }
  auVar3._0_8_ = func_0x00f78af4();
  if ((bRam0000000003eb517d & 1) == 0) {
    func_0x00f78a20(0x3d2e428,0);
    func_0x00f78a20(0x3d1c210);
    bRam0000000003eb517d = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar1,uRam0000000003d2e428);
  *(undefined8 *)(auVar3._0_8_ + 0x40) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x15b3954 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour.HideIPPlanes
// ============================================================

/* WARNING: Possible PIC construction at 0x015b3980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015b39e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b39c4) */
/* WARNING: Removing unreachable block (ram,0x015b39cc) */
/* WARNING: Removing unreachable block (ram,0x015b39d8) */
/* WARNING: Removing unreachable block (ram,0x015b39a4) */
/* WARNING: Removing unreachable block (ram,0x015b39ac) */
/* WARNING: Removing unreachable block (ram,0x015b39b8) */
/* WARNING: Removing unreachable block (ram,0x015b3984) */
/* WARNING: Removing unreachable block (ram,0x015b398c) */
/* WARNING: Removing unreachable block (ram,0x015b3998) */
/* WARNING: Removing unreachable block (ram,0x015b39e4) */
/* WARNING: Removing unreachable block (ram,0x015b39ec) */
/* WARNING: Removing unreachable block (ram,0x015b39f8) */

undefined1  [16] Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour__HideIPPlanes(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((*(long *)(param_1 + 0xb8) != 0) &&
     (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0xb8),0), lVar2 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*pcRam0000000003ebf4c0)(lVar2,0);
    return auVar3;
  }
  auVar3._0_8_ = func_0x00f78af4();
  if ((bRam0000000003eb517d & 1) == 0) {
    func_0x00f78a20(0x3d2e428,0);
    func_0x00f78a20(0x3d1c210);
    bRam0000000003eb517d = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar1,uRam0000000003d2e428);
  *(undefined8 *)(auVar3._0_8_ + 0x40) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x15b3a10 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb517d & 1) == 0) {
    func_0x00f78a20(0x3d2e428,0);
    func_0x00f78a20(0x3d1c210);
    bRam0000000003eb517d = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar1,uRam0000000003d2e428);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
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



// ============================================================
// RVA: 0x15b3a18 | Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour..cctor
// ============================================================

void Atlas_FrontEnd_GenericFrontEndSubsceneBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb526b & 1) == 0) {
    func_0x00f78a20(0x3d21b88);
    func_0x00f78a20(0x3d6c718);
    func_0x00f78a20(0x3d777a8);
    bRam0000000003eb526b = 1;
  }
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_ToonColour')*/ uRam0000000003d777a8,0);
  **(undefined4 **)(/*Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour_TypeInfo*/ lRam0000000003d21b88 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Expanded')*/ uRam0000000003d6c718,0);
  *(undefined4 *)(*(long *)(/*Atlas.FrontEnd.GenericFrontEndSubsceneBehaviour_TypeInfo*/ lRam0000000003d21b88 + 0xb8) + 4) = uVar1;
  return;
}



