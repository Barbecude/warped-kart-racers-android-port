// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.RandomDefinitionIDPool

// ============================================================
// RVA: 0x14dda38 | Atlas.RandomDefinitionIDPool.get_DefinitionList
// ============================================================

undefined8 Atlas_RandomDefinitionIDPool__get_DefinitionList(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x14dda40 | Atlas.RandomDefinitionIDPool..ctor
// ============================================================

void Atlas_RandomDefinitionIDPool___ctor(long param_1,undefined8 param_2,undefined4 param_3)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



// ============================================================
// RVA: 0x14dda7c | Atlas.RandomDefinitionIDPool.IsValid
// ============================================================

bool Atlas_RandomDefinitionIDPool__IsValid(long param_1)

{
  bool bVar1;
  
  if ((bRam0000000003eb4bcc & 1) == 0) {
    func_0x00f78a20(0x3d3a4c8);
    bRam0000000003eb4bcc = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = 0 < *(int *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  return bVar1;
}



// ============================================================
// RVA: 0x14ddad4 | Atlas.RandomDefinitionIDPool.GetNextDefinitionID
// ============================================================

undefined8 Atlas_RandomDefinitionIDPool__GetNextDefinitionID(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  
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
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      iVar2 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar2 + 1;
      iVar4 = 0;
      if (uVar1 != 0) {
        iVar4 = iVar2 / (int)uVar1;
      }
      uVar3 = iVar2 - iVar4 * uVar1;
      if (uVar1 <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      puVar5 = (undefined8 *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
      goto LAB_014ddbac;
    }
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar5 = *(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
LAB_014ddbac:
  return *puVar5;
}



// ============================================================
// RVA: 0x14ddbbc | Atlas.RandomDefinitionIDPool.IsIndexLooped
// ============================================================

bool Atlas_RandomDefinitionIDPool__IsIndexLooped(long param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((bRam0000000003eb4bce & 1) == 0) {
    func_0x00f78a20(0x3d3a4c8);
    bRam0000000003eb4bce = 1;
  }
  if ((bRam0000000003eb4bcc & 1) == 0) {
    func_0x00f78a20(0x3d3a4c8);
    bRam0000000003eb4bcc = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x18), iVar1 < 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = iVar1 <= *(int *)(param_1 + 0x18);
  }
  return bVar2;
}



// ============================================================
// RVA: 0x14ddc40 | Atlas.RandomDefinitionIDPool.ResetIndex
// ============================================================

void Atlas_RandomDefinitionIDPool__ResetIndex(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// ============================================================
// RVA: 0x14ddc48 | Atlas.RandomDefinitionIDPool.AddDefinitionIDToList
// ============================================================

ulong Atlas_RandomDefinitionIDPool__AddDefinitionIDToList(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint extraout_w8;
  uint uVar8;
  long lVar9;
  long extraout_x9;
  ulong unaff_x19;
  undefined8 unaff_x20;
  long lVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  
  if ((bRam0000000003eb4bcf & 1) == 0) {
    func_0x00f78a20(0x3d3a4a8);
    bRam0000000003eb4bcf = 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar2 == 0) {
    return 0;
  }
  lVar9 = *(long *)(uVar2 + 0x10);
  puVar7 = puRam0000000003d3a4a8;
  if (lVar9 == 0) {
code_r0x023c5e5c:
    param_2 = unaff_x20;
    uVar2 = unaff_x19;
    uVar3 = func_0x00f78af4();
    lVar9 = extraout_x9;
    uVar8 = extraout_w8;
code_r0x023c5e60:
    *(uint *)(uVar2 + 0x18) = uVar8 + 1;
  }
  else {
    uVar8 = *(uint *)(uVar2 + 0x18);
    uVar3 = uVar2;
    if (uVar8 != *(uint *)(lVar9 + 0x18)) goto code_r0x023c5e60;
    puVar7 = *(undefined8 **)(*(long *)(puRam0000000003d3a4a8[3] + 0xc0) + 0x60);
    uVar3 = (*(code *)*puVar7)(uVar2,uVar8 + 1);
    lVar9 = *(long *)(uVar2 + 0x10);
    uVar8 = *(uint *)(uVar2 + 0x18);
    *(uint *)(uVar2 + 0x18) = uVar8 + 1;
    unaff_x19 = uVar2;
    unaff_x20 = param_2;
    if (lVar9 == 0) goto code_r0x023c5e5c;
  }
  if (uVar8 < *(uint *)(lVar9 + 0x18)) {
    *(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20) = param_2;
    *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
    return uVar3;
  }
  uVar4 = func_0x00f78b24();
  auVar12 = func_0x00f78ac0(uVar4,0);
  plVar6 = auVar12._8_8_;
  lVar9 = auVar12._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))(plVar6,0x14);
  if (lVar9 != 0) {
    pcVar11 = (code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x28);
    lVar10 = *(long *)(*(long *)(puVar7[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (plVar6 != (long *)0x0) {
      if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar10 + 0x40)) {
        puVar5 = (undefined8 *)func_0x00f78ae4(plVar6);
        (*pcVar11)(lVar9,*puVar5,*(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0x28));
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x68))(lVar9);
        return (ulong)(iVar1 - 1);
      }
      func_0x00f78e5c(plVar6,lVar10);
      goto code_r0x023c6044;
    }
  }
  func_0x00f78af4();
code_r0x023c6044:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x23c6048);
  (*pcVar11)();
}



