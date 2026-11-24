// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.EventInfo

// ============================================================
// RVA: 0x1583850 | Atlas.FrontEnd.EventInfo.get_NumberOfAI
// ============================================================

uint Atlas_FrontEnd_EventInfo__get_NumberOfAI(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((bRam0000000003eb50c0 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb50c0 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if (iVar2 == 0) {
    uVar3 = 0xb;
  }
  else {
    if (*(long *)(param_1 + 0x70) == 0) {
      lVar4 = func_0x00f78af4();
      if ((bRam0000000003eb50c1 & 1) == 0) {
        func_0x00f78a20(0x3d21b70);
        bRam0000000003eb50c1 = 1;
      }
      uVar1 = *(undefined4 *)(lVar4 + 0x10);
      if (((*(ushort *)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*Atlas.FrontEnd.GameTypeExtensions$$IsMultiplayer*/ func_0x015b2f7c(uVar1,0);
      if ((uVar5 & 1) == 0) {
        uVar3 = (uint)(*(char *)(lVar4 + 0x78) != '\0');
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
    uVar3 = *(uint *)(*(long *)(param_1 + 0x70) + 0x108);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x15838e4 | Atlas.FrontEnd.EventInfo.get_Multiplayer
// ============================================================

bool Atlas_FrontEnd_EventInfo__get_Multiplayer(long param_1)

{
  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;
  
  if ((bRam0000000003eb50c1 & 1) == 0) {
    func_0x00f78a20(0x3d21b70);
    bRam0000000003eb50c1 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (((*(ushort *)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.FrontEnd.GameTypeExtensions_TypeInfo*/ lRam0000000003d21b70 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*Atlas.FrontEnd.GameTypeExtensions$$IsMultiplayer*/ func_0x015b2f7c(uVar1,0);
  if ((uVar3 & 1) == 0) {
    bVar2 = *(char *)(param_1 + 0x78) != '\0';
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}



// ============================================================
// RVA: 0x1583970 | Atlas.FrontEnd.EventInfo..ctor
// ============================================================

undefined1  [16] Atlas_FrontEnd_EventInfo___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb50c2 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb50c2 = 1;
  }
  uVar1 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x15839dc | Atlas.FrontEnd.EventInfo..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_FrontEnd_EventInfo___ctor(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((bRam0000000003eb50c3 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb50c3 = 1;
  }
  uVar2 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = 1;
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    uVar8 = *(undefined8 *)(param_2 + 0x68);
    uVar7 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar6;
    *(undefined8 *)(param_1 + 0x68) = uVar8;
    *(undefined8 *)(param_1 + 0x60) = uVar7;
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    return;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb50c4 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb50c4 = 1;
  }
  *(undefined4 *)(lVar1 + 0x10) = 0;
  uVar2 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = _UNK_033f8410;
  Atlas_Gameplay_KartLoadout__ClearLoadout(lVar1 + 0x30,0);
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined1 *)(lVar1 + 0x78) = 0;
  return;
}



// ============================================================
// RVA: 0x1583a88 | Atlas.FrontEnd.EventInfo.Reset
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_FrontEnd_EventInfo__Reset(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb50c4 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb50c4 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar1 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = _UNK_033f8410;
  Atlas_Gameplay_KartLoadout__ClearLoadout(param_1 + 0x30,0);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



