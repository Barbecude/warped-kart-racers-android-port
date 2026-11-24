// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.RandomPoolByDefinitionID

// ============================================================
// RVA: 0x14df724 | Atlas.RandomPoolByDefinitionID..ctor
// ============================================================

void Atlas_RandomPoolByDefinitionID___ctor(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000003eb4bd4 & 1) == 0) {
    func_0x00f78a20(0x3d2e360);
    func_0x00f78a20(0x3d33c98);
    func_0x00f78a20(0x3d33ca0);
    func_0x00f78a20(0x3d33ca8);
    func_0x00f78a20(0x3d39200);
    func_0x00f78a20(0x3d3a4a8);
    func_0x00f78a20(0x3d3a498);
    func_0x00f78a20(0x3d1d930);
    bRam0000000003eb4bd4 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<DefinitionID>_TypeInfo*/ uRam0000000003d1d930);
  /*System.Collections.Generic.List<DefinitionID>$$.ctor*/ func_0x023c5148(uVar2,uRam0000000003d3a498);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  if (*(long *)(param_1 + 0x10) != 0) {
    /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$GetEnumerator*/ func_0x01e3c660(&uStack_70,*(long *)(param_1 + 0x10),uRam0000000003d2e360);
    while (uVar3 = /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$MoveNext*/ func_0x01fbbed4(&uStack_70,uRam0000000003d33ca0), (uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14df888);
        (*pcVar1)();
      }
      /*System.Collections.Generic.List<DefinitionID>$$Add*/ func_0x023c5e00(*(long *)(param_1 + 0x18),uStack_60,uRam0000000003d3a4a8);
    }
    /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$Dispose*/ func_0x01fbc04c(&uStack_70,uRam0000000003d33c98);
  }
  return;
}



// ============================================================
// RVA: 0x14dfb9c | Atlas.RandomPoolByDefinitionID.GetNextDefinitionIDFromPoolByKey
// ============================================================

undefined8
Atlas_RandomPoolByDefinitionID__GetNextDefinitionIDFromPoolByKey(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  int aiStack_c8 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  
  if ((bRam0000000003eb4bd5 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2e358);
    func_0x00f78a20(0x3d2e368);
    bRam0000000003eb4bd5 = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (uVar7 = /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$ContainsKey*/ func_0x01e3c30c(*(long *)(param_1 + 0x10),param_2,uRam0000000003d2e358),
     (uVar7 & 1) == 0)) {
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar8 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(param_1 + 0x10),param_2,uRam0000000003d2e368), lVar8 != 0))
  {
    if ((bRam0000000003eb4bcd & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d3a4c8);
      func_0x00f78a20(0x3d3a4d0);
      bRam0000000003eb4bcd = 1;
    }
    if ((bRam0000000003eb4bcc & 1) == 0) {
      func_0x00f78a20(0x3d3a4c8);
      bRam0000000003eb4bcc = 1;
    }
    lVar12 = *(long *)(lVar8 + 0x10);
    if ((lVar12 == 0) || (uVar1 = *(uint *)(lVar12 + 0x18), (int)uVar1 < 1)) {
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar11 = *(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
    }
    else {
      iVar6 = *(int *)(lVar8 + 0x18);
      *(int *)(lVar8 + 0x18) = iVar6 + 1;
      iVar14 = 0;
      if (uVar1 != 0) {
        iVar14 = iVar6 / (int)uVar1;
      }
      uVar3 = iVar6 - iVar14 * uVar1;
      if (uVar1 <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      puVar11 = (undefined8 *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
    }
    return *puVar11;
  }
  lVar8 = func_0x00f78af4();
  if ((bRam0000000003eb4bd6 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2e360);
    func_0x00f78a20(0x3d2e368);
    func_0x00f78a20(0x3d33c98);
    func_0x00f78a20(0x3d33ca0);
    func_0x00f78a20(0x3d33ca8);
    func_0x00f78a20(0x3d39208);
    func_0x00f78a20(0x3d3a4c8);
    func_0x00f78a20(0x3d3a4d0);
    bRam0000000003eb4bd6 = 1;
  }
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  aiStack_c8[1] = 0;
  lVar12 = *(long *)(lVar8 + 0x18);
  if (((lVar12 == 0) || (uVar1 = *(uint *)(lVar12 + 0x18), (int)uVar1 < 1)) ||
     (lVar9 = *(long *)(lVar8 + 0x10), lVar9 == 0)) {
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  }
  else {
    iVar6 = *(int *)(lVar8 + 0x20);
    *(int *)(lVar8 + 0x20) = iVar6 + 1;
    iVar14 = 0;
    if (uVar1 != 0) {
      iVar14 = iVar6 / (int)uVar1;
    }
    uVar3 = iVar6 - iVar14 * uVar1;
    if (uVar1 <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar9 = *(long *)(lVar8 + 0x10);
      if (lVar9 == 0) goto code_r0x014dff68;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
    lVar12 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(lVar9,uVar13,uRam0000000003d2e368);
    if (lVar12 == 0) {
code_r0x014dff68:
      func_0x00f78af4();
code_r0x014dff6c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x14dff70);
      (*pcVar5)();
    }
    iVar6 = /*Atlas.RandomDefinitionIDPool$$IsIndexLooped*/ func_0x014ddbbc();
    if (iVar6 != 0) {
      iVar14 = 0;
      iVar6 = 0;
      do {
        while( true ) {
          lVar12 = *(long *)(lVar8 + 0x18);
          iVar2 = *(int *)(lVar8 + 0x20);
          *(int *)(lVar8 + 0x20) = iVar2 + 1;
          if (lVar12 == 0) goto code_r0x014dff68;
          uVar1 = *(uint *)(lVar12 + 0x18);
          iVar4 = 0;
          if (uVar1 != 0) {
            iVar4 = iVar2 / (int)uVar1;
          }
          uVar3 = iVar2 - iVar4 * uVar1;
          if (uVar1 <= uVar3) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(lVar8 + 0x10) == 0) goto code_r0x014dff68;
          uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
          lVar12 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(lVar8 + 0x10),uVar13,uRam0000000003d2e368);
          if (lVar12 == 0) goto code_r0x014dff68;
          uVar7 = /*Atlas.RandomDefinitionIDPool$$IsIndexLooped*/ func_0x014ddbbc();
          if (*(long *)(lVar8 + 0x18) == 0) goto code_r0x014dff68;
          iVar6 = iVar6 + 1;
          if (*(int *)(*(long *)(lVar8 + 0x18) + 0x18) <= iVar6) break;
code_r0x014dfec4:
          if ((uVar7 & 1) == 0) goto code_r0x014dff3c;
        }
        if (*(long *)(lVar8 + 0x10) == 0) goto code_r0x014dff68;
        /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$GetEnumerator*/ func_0x01e3c660(&uStack_f0,*(long *)(lVar8 + 0x10),uRam0000000003d2e360);
        uStack_b8 = uStack_e8;
        uStack_c0 = uStack_f0;
        lStack_a8 = lStack_d8;
        uStack_b0 = uStack_e0;
        uStack_a0 = uStack_d0;
        while (uVar10 = /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$MoveNext*/ func_0x01fbbed4(&uStack_c0,uRam0000000003d33ca0), (uVar10 & 1) != 0) {
          if (lStack_a8 == 0) {
            func_0x00f78af4();
            goto code_r0x014dff6c;
          }
          *(undefined4 *)(lStack_a8 + 0x18) = 0;
        }
        aiStack_c8[iVar14] = 0xfc;
        iVar2 = aiStack_c8[1];
        iVar14 = aiStack_c8[1] + 1;
        aiStack_c8[1] = iVar14;
        /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$Dispose*/ func_0x01fbc04c(&uStack_c0,uRam0000000003d33c98);
        if (iVar14 != 0) {
          if (aiStack_c8[iVar2] != 0xfc) goto code_r0x014dfec4;
          break;
        }
        iVar14 = 0;
      } while ((uVar7 & 1) != 0);
    }
code_r0x014dff3c:
    uVar13 = Atlas_RandomPoolByDefinitionID__GetNextDefinitionIDFromPoolByKey(lVar8,uVar13);
  }
  return uVar13;
}



// ============================================================
// RVA: 0x14dfc7c | Atlas.RandomPoolByDefinitionID.GetNextRandomDefinitionID
// ============================================================

undefined8 Atlas_RandomPoolByDefinitionID__GetNextRandomDefinitionID(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  int aiStack_98 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000003eb4bd6 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2e360);
    func_0x00f78a20(0x3d2e368);
    func_0x00f78a20(0x3d33c98);
    func_0x00f78a20(0x3d33ca0);
    func_0x00f78a20(0x3d33ca8);
    func_0x00f78a20(0x3d39208);
    func_0x00f78a20(0x3d3a4c8);
    func_0x00f78a20(0x3d3a4d0);
    bRam0000000003eb4bd6 = 1;
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  aiStack_98[1] = 0;
  lVar11 = *(long *)(param_1 + 0x18);
  if (((lVar11 == 0) || (uVar1 = *(uint *)(lVar11 + 0x18), (int)uVar1 < 1)) ||
     (lVar7 = *(long *)(param_1 + 0x10), lVar7 == 0)) {
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar6 + 1;
    iVar12 = 0;
    if (uVar1 != 0) {
      iVar12 = iVar6 / (int)uVar1;
    }
    uVar3 = iVar6 - iVar12 * uVar1;
    if (uVar1 <= uVar3) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == 0) goto LAB_014dff68;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
    lVar11 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(lVar7,uVar10,uRam0000000003d2e368);
    if (lVar11 == 0) {
LAB_014dff68:
      func_0x00f78af4();
code_r0x014dff6c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x14dff70);
      (*pcVar5)();
    }
    iVar6 = /*Atlas.RandomDefinitionIDPool$$IsIndexLooped*/ func_0x014ddbbc();
    if (iVar6 != 0) {
      iVar12 = 0;
      iVar6 = 0;
      do {
        while( true ) {
          lVar11 = *(long *)(param_1 + 0x18);
          iVar2 = *(int *)(param_1 + 0x20);
          *(int *)(param_1 + 0x20) = iVar2 + 1;
          if (lVar11 == 0) goto LAB_014dff68;
          uVar1 = *(uint *)(lVar11 + 0x18);
          iVar4 = 0;
          if (uVar1 != 0) {
            iVar4 = iVar2 / (int)uVar1;
          }
          uVar3 = iVar2 - iVar4 * uVar1;
          if (uVar1 <= uVar3) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_014dff68;
          uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
          lVar11 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(*(long *)(param_1 + 0x10),uVar10,uRam0000000003d2e368);
          if (lVar11 == 0) goto LAB_014dff68;
          uVar8 = /*Atlas.RandomDefinitionIDPool$$IsIndexLooped*/ func_0x014ddbbc();
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_014dff68;
          iVar6 = iVar6 + 1;
          if (*(int *)(*(long *)(param_1 + 0x18) + 0x18) <= iVar6) break;
LAB_014dfec4:
          if ((uVar8 & 1) == 0) goto LAB_014dff3c;
        }
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_014dff68;
        /*System.Collections.Generic.Dictionary<DefinitionID, RandomDefinitionIDPool>$$GetEnumerator*/ func_0x01e3c660(&uStack_c0,*(long *)(param_1 + 0x10),uRam0000000003d2e360);
        uStack_88 = uStack_b8;
        uStack_90 = uStack_c0;
        lStack_78 = lStack_a8;
        uStack_80 = uStack_b0;
        uStack_70 = uStack_a0;
        while (uVar9 = /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$MoveNext*/ func_0x01fbbed4(&uStack_90,uRam0000000003d33ca0), (uVar9 & 1) != 0) {
          if (lStack_78 == 0) {
            func_0x00f78af4();
            goto code_r0x014dff6c;
          }
          *(undefined4 *)(lStack_78 + 0x18) = 0;
        }
        aiStack_98[iVar12] = 0xfc;
        iVar2 = aiStack_98[1];
        iVar12 = aiStack_98[1] + 1;
        aiStack_98[1] = iVar12;
        /*System.Collections.Generic.Dictionary.Enumerator<DefinitionID, RandomDefinitionIDPool>$$Dispose*/ func_0x01fbc04c(&uStack_90,uRam0000000003d33c98);
        if (iVar12 != 0) {
          if (aiStack_98[iVar2] != 0xfc) goto LAB_014dfec4;
          break;
        }
        iVar12 = 0;
      } while ((uVar8 & 1) != 0);
    }
LAB_014dff3c:
    uVar10 = Atlas_RandomPoolByDefinitionID__GetNextDefinitionIDFromPoolByKey(param_1,uVar10);
  }
  return uVar10;
}



