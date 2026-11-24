// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Usables.NormalShieldUsable

// ============================================================
// RVA: 0x14b0e54 | Atlas.Gameplay.Usables.NormalShieldUsable.get_ShieldUsableDefinition
// ============================================================

long * Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((bRam0000000003eb4a93 & 1) == 0) {
    func_0x00f78a20(0x3d238a8);
    bRam0000000003eb4a93 = 1;
  }
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 300) < *(byte *)(/*Atlas.Definitions.NormalShieldUsableDefinition_TypeInfo*/ lRam0000000003d238a8 + 300)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.NormalShieldUsableDefinition_TypeInfo*/ lRam0000000003d238a8 + 300) * 8 + -8)
        != /*Atlas.Definitions.NormalShieldUsableDefinition_TypeInfo*/ lRam0000000003d238a8)) {
      lVar2 = func_0x00f78e5c();
      if ((bRam0000000003eb4a94 & 1) == 0) {
        func_0x00f78a20(0x3d238a0);
        bRam0000000003eb4a94 = 1;
      }
      plVar1 = *(long **)(lVar2 + 0x48);
      if (plVar1 != (long *)0x0) {
        if ((*(byte *)(*plVar1 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 300)) ||
           (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 300) * 8 +
                     -8) != /*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0)) {
          lVar2 = func_0x00f78e5c();
          plVar1 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_IsAlive*/ func_0x015237d4(lVar2,0);
          if ((int)plVar1 != 0) {
            plVar1 = (long *)(ulong)(*(char *)(lVar2 + 0xe4) == '\0');
          }
          return plVar1;
        }
      }
      return plVar1;
    }
  }
  return plVar1;
}



// ============================================================
// RVA: 0x14b0ed0 | Atlas.Gameplay.Usables.NormalShieldUsable.get_NormalShieldUsableBehaviour
// ============================================================

long * Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((bRam0000000003eb4a94 & 1) == 0) {
    func_0x00f78a20(0x3d238a0);
    bRam0000000003eb4a94 = 1;
  }
  plVar1 = *(long **)(param_1 + 0x48);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 300)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 300) * 8 + -8)
        != /*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0)) {
      lVar2 = func_0x00f78e5c();
      plVar1 = (long *)/*Atlas.Gameplay.Usables.Usable$$get_IsAlive*/ func_0x015237d4(lVar2,0);
      if ((int)plVar1 != 0) {
        plVar1 = (long *)(ulong)(*(char *)(lVar2 + 0xe4) == '\0');
      }
      return plVar1;
    }
  }
  return plVar1;
}



// ============================================================
// RVA: 0x14b0f4c | Atlas.Gameplay.Usables.NormalShieldUsable.get_IsAlive
// ============================================================

ulong Atlas_Gameplay_Usables_NormalShieldUsable__get_IsAlive(long param_1)

{
  ulong uVar1;
  
  uVar1 = /*Atlas.Gameplay.Usables.Usable$$get_IsAlive*/ func_0x015237d4(param_1,0);
  if ((int)uVar1 != 0) {
    uVar1 = (ulong)(*(char *)(param_1 + 0xe4) == '\0');
  }
  return uVar1;
}



// ============================================================
// RVA: 0x14b0f80 | Atlas.Gameplay.Usables.NormalShieldUsable.DeInit
// ============================================================

void Atlas_Gameplay_Usables_NormalShieldUsable__DeInit(long param_1)

{
  if (*(char *)(param_1 + 0x19) != '\0') {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xdd) = 0;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    /*Atlas.Gameplay.Usables.Usable$$OnTearDownParamsInternal*/ func_0x01523890(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// ============================================================
// RVA: 0x14b0f98 | Atlas.Gameplay.Usables.NormalShieldUsable.OnTearDownParamsInternal
// ============================================================

void Atlas_Gameplay_Usables_NormalShieldUsable__OnTearDownParamsInternal(long param_1)

{
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xdd) = 0;
  return;
}



// ============================================================
// RVA: 0x14b0fa4 | Atlas.Gameplay.Usables.NormalShieldUsable.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x014b1084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b1088) */
/* WARNING: Removing unreachable block (ram,0x014b1090) */
/* WARNING: Removing unreachable block (ram,0x014b109c) */
/* WARNING: Removing unreachable block (ram,0x014b10b4) */
/* WARNING: Removing unreachable block (ram,0x014b10c0) */
/* WARNING: Removing unreachable block (ram,0x014b10d0) */

void Atlas_Gameplay_Usables_NormalShieldUsable__OnExitPool
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 extraout_w1;
  undefined1 extraout_w1_00;
  long lVar5;
  undefined4 uVar6;
  undefined4 extraout_s0;
  
  if ((bRam0000000003eb4a95 & 1) == 0) {
    func_0x00f78a20(0x3d432e0);
    bRam0000000003eb4a95 = 1;
  }
  /*Atlas.Gameplay.Usables.Usable$$OnExitPool*/ func_0x015239c4(param_1,param_2,param_3,0,0,0,0);
  lVar2 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(param_1);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x50) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x50),0,0);
    lVar2 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(param_1);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x58) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x58),1,0);
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x48),0);
        *(undefined8 *)(param_1 + 0xd0) = uVar3;
        lVar2 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(param_1);
        if (lVar2 != 0) goto code_r0x014b10f0;
      }
    }
  }
  lVar2 = func_0x00f78af4();
code_r0x014b10f0:
  if ((bRam0000000003eb4a9a & 1) == 0) {
    func_0x00f78a20(0x3d238a0);
    bRam0000000003eb4a9a = 1;
  }
  lVar5 = *(long *)(lVar2 + 0x60);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 != 0) {
    /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(lVar5,**(undefined4 **)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8),0);
    if (*(long *)(lVar2 + 0x60) != 0) {
      /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(lVar2 + 0x60),
                      *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 4),0);
      if (*(long *)(lVar2 + 0x60) != 0) {
        /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(lVar2 + 0x60),
                        *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 8),0);
        if (*(long *)(lVar2 + 0x60) != 0) {
          /*UnityEngine.Animator$$Play*/ func_0x03210958(0,*(long *)(lVar2 + 0x60),
                          *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 0x10),0,0);
          *(undefined1 *)(lVar2 + 0x68) = 0;
          *(undefined4 *)(lVar2 + 0x78) = 0;
          *(undefined1 *)(lVar2 + 0x7c) = 0;
          return;
        }
      }
    }
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4a96 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4a96 = 1;
  }
  uVar4 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(uVar3);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  if (iVar1 != 0) {
    lVar2 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(uVar3);
    lVar5 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(uVar3);
    if ((lVar5 == 0) || (lVar2 == 0)) {
      lVar2 = func_0x00f78af4();
      *(undefined1 *)(lVar2 + 0x7c) = extraout_w1_00;
      *(undefined4 *)(lVar2 + 0x80) = extraout_s0;
      *(undefined4 *)(lVar2 + 0x78) = extraout_s0;
      return;
    }
    uVar6 = *(undefined4 *)(lVar5 + 0x80);
    *(undefined1 *)(lVar2 + 0x7c) = extraout_w1;
    *(undefined4 *)(lVar2 + 0x80) = uVar6;
    *(undefined4 *)(lVar2 + 0x78) = uVar6;
  }
  return;
}



// ============================================================
// RVA: 0x14b0fb4 | Atlas.Gameplay.Usables.NormalShieldUsable.OnExitPool
// ============================================================

/* WARNING: Possible PIC construction at 0x014b1084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b1088) */
/* WARNING: Removing unreachable block (ram,0x014b1090) */
/* WARNING: Removing unreachable block (ram,0x014b109c) */
/* WARNING: Removing unreachable block (ram,0x014b10b4) */
/* WARNING: Removing unreachable block (ram,0x014b10c0) */
/* WARNING: Removing unreachable block (ram,0x014b10d0) */

void Atlas_Gameplay_Usables_NormalShieldUsable__OnExitPool
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 extraout_w1;
  undefined1 extraout_w1_00;
  long lVar5;
  undefined4 uVar6;
  undefined4 extraout_s0;
  
  if ((bRam0000000003eb4a95 & 1) == 0) {
    func_0x00f78a20(0x3d432e0);
    bRam0000000003eb4a95 = 1;
  }
  /*Atlas.Gameplay.Usables.Usable$$OnExitPool*/ func_0x015239c4(param_1,param_2,param_3,param_4,param_5,param_6,0);
  lVar2 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(param_1);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x50) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x50),0,0);
    lVar2 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(param_1);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x58) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x58),1,0);
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x48),0);
        *(undefined8 *)(param_1 + 0xd0) = uVar3;
        lVar2 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(param_1);
        if (lVar2 != 0) goto code_r0x014b10f0;
      }
    }
  }
  lVar2 = func_0x00f78af4();
code_r0x014b10f0:
  if ((bRam0000000003eb4a9a & 1) == 0) {
    func_0x00f78a20(0x3d238a0);
    bRam0000000003eb4a9a = 1;
  }
  lVar5 = *(long *)(lVar2 + 0x60);
  if (((*(ushort *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 != 0) {
    /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(lVar5,**(undefined4 **)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8),0);
    if (*(long *)(lVar2 + 0x60) != 0) {
      /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(lVar2 + 0x60),
                      *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 4),0);
      if (*(long *)(lVar2 + 0x60) != 0) {
        /*UnityEngine.Animator$$ResetTrigger*/ func_0x0320d96c(*(long *)(lVar2 + 0x60),
                        *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 8),0);
        if (*(long *)(lVar2 + 0x60) != 0) {
          /*UnityEngine.Animator$$Play*/ func_0x03210958(0,*(long *)(lVar2 + 0x60),
                          *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour_TypeInfo*/ lRam0000000003d238a0 + 0xb8) + 0x10),0,0);
          *(undefined1 *)(lVar2 + 0x68) = 0;
          *(undefined4 *)(lVar2 + 0x78) = 0;
          *(undefined1 *)(lVar2 + 0x7c) = 0;
          return;
        }
      }
    }
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4a96 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4a96 = 1;
  }
  uVar4 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(uVar3);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  if (iVar1 != 0) {
    lVar2 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(uVar3);
    lVar5 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(uVar3);
    if ((lVar5 == 0) || (lVar2 == 0)) {
      lVar2 = func_0x00f78af4();
      *(undefined1 *)(lVar2 + 0x7c) = extraout_w1_00;
      *(undefined4 *)(lVar2 + 0x80) = extraout_s0;
      *(undefined4 *)(lVar2 + 0x78) = extraout_s0;
      return;
    }
    uVar6 = *(undefined4 *)(lVar5 + 0x80);
    *(undefined1 *)(lVar2 + 0x7c) = extraout_w1;
    *(undefined4 *)(lVar2 + 0x80) = uVar6;
    *(undefined4 *)(lVar2 + 0x78) = uVar6;
  }
  return;
}



// ============================================================
// RVA: 0x14b11e0 | Atlas.Gameplay.Usables.NormalShieldUsable.TriggerScale
// ============================================================

void Atlas_Gameplay_Usables_NormalShieldUsable__TriggerScale(undefined8 param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 extraout_w1;
  undefined4 uVar5;
  undefined4 extraout_s0;
  
  if ((bRam0000000003eb4a96 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4a96 = 1;
  }
  uVar2 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(param_1);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
  if (iVar1 != 0) {
    lVar3 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(param_1);
    lVar4 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(param_1);
    if ((lVar4 == 0) || (lVar3 == 0)) {
      lVar3 = func_0x00f78af4();
      *(undefined1 *)(lVar3 + 0x7c) = extraout_w1;
      *(undefined4 *)(lVar3 + 0x80) = extraout_s0;
      *(undefined4 *)(lVar3 + 0x78) = extraout_s0;
      return;
    }
    uVar5 = *(undefined4 *)(lVar4 + 0x80);
    *(undefined1 *)(lVar3 + 0x7c) = param_2;
    *(undefined4 *)(lVar3 + 0x80) = uVar5;
    *(undefined4 *)(lVar3 + 0x78) = uVar5;
  }
  return;
}



// ============================================================
// RVA: 0x14b12a8 | Atlas.Gameplay.Usables.NormalShieldUsable.OnEnterPool
// ============================================================

/* WARNING: Possible PIC construction at 0x01523aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01523aa4) */
/* WARNING: Removing unreachable block (ram,0x01523aa8) */
/* WARNING: Removing unreachable block (ram,0x01523ab0) */
/* WARNING: Removing unreachable block (ram,0x01523ac8) */
/* WARNING: Removing unreachable block (ram,0x01523ae0) */
/* WARNING: Removing unreachable block (ram,0x01523afc) */
/* WARNING: Removing unreachable block (ram,0x01523b08) */
/* WARNING: Removing unreachable block (ram,0x01523b28) */
/* WARNING: Removing unreachable block (ram,0x01523b40) */
/* WARNING: Removing unreachable block (ram,0x01523b48) */
/* WARNING: Removing unreachable block (ram,0x01523b4c) */
/* WARNING: Removing unreachable block (ram,0x01523b60) */
/* WARNING: Removing unreachable block (ram,0x01523b64) */
/* WARNING: Removing unreachable block (ram,0x01523b6c) */
/* WARNING: Removing unreachable block (ram,0x01523b70) */
/* WARNING: Removing unreachable block (ram,0x01523b8c) */

void Atlas_Gameplay_Usables_NormalShieldUsable__OnEnterPool
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  int extraout_w1;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xdd) = 0;
  if ((bRam0000000003eb4e50 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003eb4e50 = 1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                    *(undefined4 *)(param_1 + 0x6c),lVar3,0);
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                      *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),lVar3,0);
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x28), lVar3 != 0)) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                        *(undefined4 *)(param_1 + 0x88),lVar3,0);
        *(undefined1 *)(param_1 + 0x19) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x30);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_3 = 0;
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0);
          if (iVar1 != 0) {
            if (lVar3 == 0) goto code_r0x015239b0;
            *(undefined2 *)(lVar3 + 0x46) = 0;
            *(undefined4 *)(lVar3 + 0x40) = 0;
            *(undefined1 *)(lVar3 + 0x44) = 0;
          }
          if (*(long *)(param_1 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40) = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined1 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
            *(undefined2 *)(param_1 + 0x60) = 0;
            return;
          }
        }
      }
    }
  }
code_r0x015239b0:
  auVar14 = func_0x00f78af4();
  lVar9 = auVar14._8_8_;
  lVar3 = auVar14._0_8_;
  puStack_28 = &Atlas_Gameplay_Usables_Usable__OnExitPool;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e4e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572a0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e4e = 1;
  }
  *(undefined1 *)(lVar3 + 0x19) = 1;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(long *)(lVar3 + 0x30) = lVar9;
  *(undefined8 *)(lVar3 + 0x48) = param_3;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  if ((*(long *)(lVar3 + 0x58) != 0) && (lVar9 != 0)) {
    lVar10 = *(long *)(*(long *)(lVar3 + 0x58) + 0x10);
    lVar9 = *(long *)(lVar9 + 0x40);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar9,0);
    if (lVar10 != 0) {
      uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,uVar4,uRam0000000003d572a0);
      *(undefined8 *)(lVar3 + 0x90) = uVar4;
      puVar11 = &UNK_01523aa4;
      lVar10 = lVar3;
      goto code_r0x01523ba8;
    }
  }
  puVar11 = &Atlas_Gameplay_Usables_Usable__SetInHandUsableTransformValues;
  lVar10 = func_0x00f78af4();
code_r0x01523ba8:
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_b0 = lVar9;
  uStack_a8 = param_3;
  lStack_a0 = lVar3;
  ppuStack_80 = &puStack_30;
  puStack_78 = puVar11;
  if ((bRam0000000003eb4e51 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d334e8);
    func_0x00f78a20(0x3d334f0);
    func_0x00f78a20(0x3d334f8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d2e8);
    func_0x00f78a20(0x3d3d2f0);
    bRam0000000003eb4e51 = 1;
  }
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (*(long *)(lVar10 + 0x28) == 0) {
    return;
  }
  lVar3 = *(long *)(lVar10 + 0x90);
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    uVar13 = *(undefined8 *)(lVar3 + 0x38);
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar10 + 0xb8) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar10 + 0xb0) = uVar13;
    *(undefined8 *)(lVar10 + 0xa8) = uVar12;
    *(undefined8 *)(lVar10 + 0xa0) = uVar6;
    *(undefined8 *)(lVar10 + 0x98) = uVar4;
    if (*(long *)(lVar3 + 0x48) == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x48) + 0x18) == 0) {
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar10 + 0x28) + 0x28);
    if (lVar3 != 0) {
      uStack_b8 = *(undefined8 *)(lVar3 + 0xc0);
      if (((*(long *)(lVar10 + 0x58) != 0) &&
          (lVar3 = *(long *)(*(long *)(lVar10 + 0x58) + 0x10), lVar3 != 0)) &&
         (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,uStack_b8,uRam0000000003d57270), lVar3 != 0)) {
        uStack_c0 = *(undefined8 *)(lVar3 + 0x70);
        if ((*(long *)(lVar10 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar10 + 0x90) + 0x48), lVar3 != 0)) {
          /*System.Collections.Generic.List<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$GetEnumerator*/ func_0x025337a8(&uStack_100,lVar3,uRam0000000003d3d2e8);
          bVar8 = false;
          while (uVar5 = /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$MoveNext*/ func_0x01f7de64(&uStack_100,uRam0000000003d334f0), uVar4 = uStack_f0,
                (uVar5 & 1) != 0) {
            uStack_128 = uStack_e0;
            uStack_130 = uStack_e8;
            uStack_118 = uStack_d0;
            uStack_120 = uStack_d8;
            uStack_110 = uStack_c8;
            uStack_138 = uStack_f0;
            uVar6 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
            uVar5 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_b8,uVar6,0);
            if ((uVar5 & 1) != 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_128;
              *(undefined8 *)(lVar10 + 0x98) = uStack_130;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_118;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_120;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_110;
              bVar8 = true;
            }
            uStack_138 = uVar4;
            uVar4 = func_0x00f78ae0(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270,&uStack_138);
            uVar2 = /*Core.Definitions.DefinitionID$$Equals*/ func_0x01645384(&uStack_c0,uVar4,0);
            if (!bVar8 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
              *(undefined8 *)(lVar10 + 0xa0) = uStack_128;
              *(undefined8 *)(lVar10 + 0x98) = uStack_130;
              *(undefined8 *)(lVar10 + 0xb0) = uStack_118;
              *(undefined8 *)(lVar10 + 0xa8) = uStack_120;
              *(undefined8 *)(lVar10 + 0xb8) = uStack_110;
            }
          }
          /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_100,uRam0000000003d334e8);
          return;
        }
      }
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar7 = (long *)___cxa_begin_catch();
    lVar3 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<InHandUsableVisualsDefinition.CharacterTransformDataPair>$$Dispose*/ func_0x01f7de60(&uStack_100,uRam0000000003d334e8);
    if (lVar3 == 0) {
      return;
    }
    func_0x00f78ac0(lVar3,0);
  }
  __Unwind_Resume();
  return;
}



// ============================================================
// RVA: 0x14b12b8 | Atlas.Gameplay.Usables.NormalShieldUsable.DeSpawn
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b1344 | Atlas.Gameplay.Usables.NormalShieldUsable.PlayExplodeSound
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b1368 | Atlas.Gameplay.Usables.NormalShieldUsable.GetKartTriggerEffectParameters
// ============================================================

/* WARNING: Possible PIC construction at 0x014b13ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b13b0) */

long * Atlas_Gameplay_Usables_NormalShieldUsable__GetKartTriggerEffectParameters(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  
  lVar3 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition();
  if (lVar3 != 0) {
    return *(long **)(lVar3 + 0x68);
  }
  auVar12 = func_0x00f78af4();
  plVar5 = auVar12._0_8_;
  plVar4 = (long *)/*Atlas.Gameplay.Usables.Usable$$Update*/ func_0x01523f78(plVar5,auVar12._8_8_,0);
  if ((char)plVar5[3] == '\0') {
    if (*(char *)((long)plVar5 + 0xe4) != '\0') {
      lVar3 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(plVar5);
      if (lVar3 == 0) {
        plVar5 = (long *)func_0x00f78af4();
        goto code_r0x014b1400;
      }
      plVar4 = (long *)/*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour$$CheckAnimationFinished*/ func_0x014b19d8();
      if ((int)plVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x014b13ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
        return plVar4;
      }
    }
    return plVar4;
  }
code_r0x014b1400:
  plVar4 = plVar5;
  if ((bRam0000000003eb4a99 & 1) == 0) {
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d22c78);
    plVar4 = (long *)func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb4a99 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  if (((plVar5[0x19] != 0) && (*(char *)((long)plVar5 + 0xe4) == '\0')) &&
     ((char)plVar5[0xc] == '\0')) {
    lVar3 = *(long *)(plVar5[0x19] + 0x10);
    if (lVar3 == 0) {
      func_0x00f78af4();
code_r0x014b17d4:
      func_0x00f78af4();
code_r0x014b1860:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14b1864);
      (*pcVar1)();
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d8,lVar3,uRam0000000003d3a7d0);
    uStack_b8 = uStack_d0;
    uStack_c0 = uStack_d8;
    plStack_b0 = plStack_c8;
code_r0x014b14dc:
    do {
      do {
        do {
          do {
            uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d325c8);
            plVar4 = plStack_b0;
            if ((uVar6 & 1) == 0) goto code_r0x014b1744;
          } while (plStack_b0 == (long *)0x0);
          if ((*(byte *)(*plStack_b0 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
             (*(long *)(*(long *)(*plStack_b0 + 200) +
                        (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8) !=
              /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
            func_0x00f78e5c(plStack_b0);
            goto code_r0x014b1860;
          }
        } while (plStack_b0 == (long *)plVar5[5]);
        lVar3 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar5,0);
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        if (*(long *)(lVar3 + 0x130) == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        fVar11 = (float)Atlas_Gameplay_Kart_KartManager__GetKartToKartDistance
                                  (*(long *)(lVar3 + 0x130),plVar5[5],plVar4,0);
        lVar3 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(plVar5);
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
      } while (*(float *)(lVar3 + 0x78) <= fVar11);
      if (plVar4[2] == 0) {
        func_0x00f78af4();
        goto code_r0x014b1860;
      }
      lVar3 = *(long *)(plVar4[2] + 0x60);
      if (lVar3 == 0) {
        func_0x00f78af4();
        goto code_r0x014b1860;
      }
      uVar6 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_HasValidShield(lVar3,0);
      lVar3 = plVar4[2];
      if ((uVar6 & 1) == 0) {
        if (lVar3 == 0) goto code_r0x014b17d4;
        uVar6 = Atlas_Gameplay_Kart_KartPhysics__get_HitInvuln(lVar3,0);
        if ((uVar6 & 1) == 0) {
          lVar3 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(plVar5);
          if (lVar3 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          uVar10 = *(undefined8 *)(lVar3 + 0x68);
          uVar7 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(plVar5);
          lVar3 = plVar5[5];
          if (lVar3 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          if (*(long *)(lVar3 + 0x10) == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          lVar8 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(lVar3 + 0x10),0);
          /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar8 + 0x13c),*(undefined4 *)(lVar8 + 0x140),
                          *(undefined4 *)(lVar8 + 0x144),0);
          Atlas_Gameplay_Kart_KartComposite__OnUsableHit(plVar4,uVar10,uVar7,lVar3,0);
          if (plVar5[5] == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          lVar3 = *(long *)(plVar5[5] + 0x10);
          if (lVar3 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          lVar3 = *(long *)(lVar3 + 0x60);
          if (lVar3 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
                    (0xbf800000,lVar3,0);
        }
      }
      else {
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        if (*(long *)(lVar3 + 0x60) == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x60) + 200);
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        plVar9 = *(long **)(lVar3 + 0x30);
        if (plVar9 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        iVar2 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
        if (iVar2 == 6) goto code_r0x014b14dc;
        uVar7 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(plVar5);
        if (plVar5[5] == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        lVar3 = *(long *)(plVar5[5] + 0x10);
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        lVar3 = *(long *)(lVar3 + 0x60);
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
                  (0xbf800000,lVar3,0);
        lVar3 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar5,0);
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        lVar3 = *(long *)(lVar3 + 0x40);
        if (lVar3 != 0) {
          if (plVar5[5] == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          if (lVar3 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitShield*/ func_0x015a62e0(lVar3,*(undefined8 *)(plVar5[5] + 0x90),plVar4[0x12],plVar9,uVar7,0);
        }
        if (plVar4[2] == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        lVar3 = *(long *)(plVar4[2] + 0x60);
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
                  (0xbf800000,lVar3,0);
        lVar3 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(plVar5,0);
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        lVar3 = *(long *)(lVar3 + 0x40);
        if (lVar3 != 0) {
          if (plVar5[5] == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          if (lVar3 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitShield*/ func_0x015a62e0(lVar3,plVar4[0x12],*(undefined8 *)(plVar5[5] + 0x90),uVar7,plVar9,0);
        }
      }
    } while (*(char *)((long)plVar5 + 0xe4) == '\0');
code_r0x014b1744:
    plVar4 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d325c0);
  }
  return plVar4;
}



// ============================================================
// RVA: 0x14b1388 | Atlas.Gameplay.Usables.NormalShieldUsable.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x014b13ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b13b0) */

void Atlas_Gameplay_Usables_NormalShieldUsable__Update(long *param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  
  /*Atlas.Gameplay.Usables.Usable$$Update*/ func_0x01523f78(param_1,param_2,0);
  if ((char)param_1[3] != '\0') {
code_r0x014b1400:
    if ((bRam0000000003eb4a99 & 1) == 0) {
      func_0x00f78a20(0x3d325c0);
      func_0x00f78a20(0x3d325c8);
      func_0x00f78a20(0x3d325d0);
      func_0x00f78a20(0x3d22c78);
      func_0x00f78a20(0x3d3a7d0);
      bRam0000000003eb4a99 = 1;
    }
    uStack_b0 = 0;
    uStack_a8 = 0;
    plStack_a0 = (long *)0x0;
    if (((param_1[0x19] != 0) && (*(char *)((long)param_1 + 0xe4) == '\0')) &&
       ((char)param_1[0xc] == '\0')) {
      lVar4 = *(long *)(param_1[0x19] + 0x10);
      if (lVar4 == 0) {
        func_0x00f78af4();
code_r0x014b17d4:
        func_0x00f78af4();
code_r0x014b1860:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14b1864);
        (*pcVar2)();
      }
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,lVar4,uRam0000000003d3a7d0);
      uStack_a8 = uStack_c0;
      uStack_b0 = uStack_c8;
      plStack_a0 = plStack_b8;
code_r0x014b14dc:
      do {
        do {
          do {
            do {
              uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_b0,uRam0000000003d325c8);
              plVar1 = plStack_a0;
              if ((uVar5 & 1) == 0) goto code_r0x014b1744;
            } while (plStack_a0 == (long *)0x0);
            if ((*(byte *)(*plStack_a0 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
               (*(long *)(*(long *)(*plStack_a0 + 200) +
                          (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8) !=
                /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
              func_0x00f78e5c(plStack_a0);
              goto code_r0x014b1860;
            }
          } while (plStack_a0 == (long *)param_1[5]);
          lVar4 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          if (*(long *)(lVar4 + 0x130) == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          fVar10 = (float)Atlas_Gameplay_Kart_KartManager__GetKartToKartDistance
                                    (*(long *)(lVar4 + 0x130),param_1[5],plVar1,0);
          lVar4 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(param_1);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
        } while (*(float *)(lVar4 + 0x78) <= fVar10);
        if (plVar1[2] == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        lVar4 = *(long *)(plVar1[2] + 0x60);
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        uVar5 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_HasValidShield(lVar4,0)
        ;
        lVar4 = plVar1[2];
        if ((uVar5 & 1) == 0) {
          if (lVar4 == 0) goto code_r0x014b17d4;
          uVar5 = Atlas_Gameplay_Kart_KartPhysics__get_HitInvuln(lVar4,0);
          if ((uVar5 & 1) == 0) {
            lVar4 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(param_1);
            if (lVar4 == 0) {
              func_0x00f78af4();
              goto code_r0x014b1860;
            }
            uVar9 = *(undefined8 *)(lVar4 + 0x68);
            uVar6 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(param_1);
            lVar4 = param_1[5];
            if (lVar4 == 0) {
              func_0x00f78af4();
              goto code_r0x014b1860;
            }
            if (*(long *)(lVar4 + 0x10) == 0) {
              func_0x00f78af4();
              goto code_r0x014b1860;
            }
            lVar7 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(lVar4 + 0x10),0);
            /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar7 + 0x13c),*(undefined4 *)(lVar7 + 0x140),
                            *(undefined4 *)(lVar7 + 0x144),0);
            Atlas_Gameplay_Kart_KartComposite__OnUsableHit(plVar1,uVar9,uVar6,lVar4,0);
            if (param_1[5] == 0) {
              func_0x00f78af4();
              goto code_r0x014b1860;
            }
            lVar4 = *(long *)(param_1[5] + 0x10);
            if (lVar4 == 0) {
              func_0x00f78af4();
              goto code_r0x014b1860;
            }
            lVar4 = *(long *)(lVar4 + 0x60);
            if (lVar4 == 0) {
              func_0x00f78af4();
              goto code_r0x014b1860;
            }
            Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
                      (0xbf800000,lVar4,0);
          }
        }
        else {
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          if (*(long *)(lVar4 + 0x60) == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0x60) + 200);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          plVar8 = *(long **)(lVar4 + 0x30);
          if (plVar8 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          iVar3 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
          if (iVar3 == 6) goto code_r0x014b14dc;
          uVar6 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(param_1);
          if (param_1[5] == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          lVar4 = *(long *)(param_1[5] + 0x10);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          lVar4 = *(long *)(lVar4 + 0x60);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
                    (0xbf800000,lVar4,0);
          lVar4 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          lVar4 = *(long *)(lVar4 + 0x40);
          if (lVar4 != 0) {
            if (param_1[5] == 0) {
              func_0x00f78af4();
              goto code_r0x014b1860;
            }
            if (lVar4 == 0) {
              func_0x00f78af4();
              goto code_r0x014b1860;
            }
            /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitShield*/ func_0x015a62e0(lVar4,*(undefined8 *)(param_1[5] + 0x90),plVar1[0x12],plVar8,uVar6,0);
          }
          if (plVar1[2] == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          lVar4 = *(long *)(plVar1[2] + 0x60);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
                    (0xbf800000,lVar4,0);
          lVar4 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          lVar4 = *(long *)(lVar4 + 0x40);
          if (lVar4 != 0) {
            if (param_1[5] == 0) {
              func_0x00f78af4();
              goto code_r0x014b1860;
            }
            if (lVar4 == 0) {
              func_0x00f78af4();
              goto code_r0x014b1860;
            }
            /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitShield*/ func_0x015a62e0(lVar4,plVar1[0x12],*(undefined8 *)(param_1[5] + 0x90),uVar6,plVar8,0);
          }
        }
      } while (*(char *)((long)param_1 + 0xe4) == '\0');
code_r0x014b1744:
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b0,uRam0000000003d325c0);
    }
    return;
  }
  if (*(char *)((long)param_1 + 0xe4) != '\0') {
    lVar4 = Atlas_Gameplay_Usables_NormalShieldUsable__get_NormalShieldUsableBehaviour(param_1);
    if (lVar4 == 0) {
      param_1 = (long *)func_0x00f78af4();
      goto code_r0x014b1400;
    }
    iVar3 = /*Atlas.Gameplay.Usables.NormalShieldUsableBehaviour$$CheckAnimationFinished*/ func_0x014b19d8();
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x014b13ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x14b1400 | Atlas.Gameplay.Usables.NormalShieldUsable.InUseLogic
// ============================================================

void Atlas_Gameplay_Usables_NormalShieldUsable__InUseLogic(long param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  
  if ((bRam0000000003eb4a99 & 1) == 0) {
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d22c78);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb4a99 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  if (((*(long *)(param_1 + 200) != 0) && (*(char *)(param_1 + 0xe4) == '\0')) &&
     (*(char *)(param_1 + 0x60) == '\0')) {
    lVar4 = *(long *)(*(long *)(param_1 + 200) + 0x10);
    if (lVar4 == 0) {
      func_0x00f78af4();
code_r0x014b17d4:
      func_0x00f78af4();
code_r0x014b1860:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x14b1864);
      (*pcVar2)();
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,lVar4,uRam0000000003d3a7d0);
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    plStack_80 = plStack_98;
LAB_014b14dc:
    do {
      do {
        do {
          do {
            uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_90,uRam0000000003d325c8);
            plVar1 = plStack_80;
            if ((uVar5 & 1) == 0) goto LAB_014b1744;
          } while (plStack_80 == (long *)0x0);
          if ((*(byte *)(*plStack_80 + 300) < *(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300)) ||
             (*(long *)(*(long *)(*plStack_80 + 200) +
                        (ulong)*(byte *)(/*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78 + 300) * 8 + -8) !=
              /*Atlas.Gameplay.Kart.KartComposite_TypeInfo*/ lRam0000000003d22c78)) {
            func_0x00f78e5c(plStack_80);
            goto code_r0x014b1860;
          }
        } while (plStack_80 == *(long **)(param_1 + 0x28));
        lVar4 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        if (*(long *)(lVar4 + 0x130) == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        fVar10 = (float)Atlas_Gameplay_Kart_KartManager__GetKartToKartDistance
                                  (*(long *)(lVar4 + 0x130),*(undefined8 *)(param_1 + 0x28),plVar1,0
                                  );
        lVar4 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(param_1);
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
      } while (*(float *)(lVar4 + 0x78) <= fVar10);
      if (plVar1[2] == 0) {
        func_0x00f78af4();
        goto code_r0x014b1860;
      }
      lVar4 = *(long *)(plVar1[2] + 0x60);
      if (lVar4 == 0) {
        func_0x00f78af4();
        goto code_r0x014b1860;
      }
      uVar5 = Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__get_HasValidShield(lVar4,0);
      lVar4 = plVar1[2];
      if ((uVar5 & 1) == 0) {
        if (lVar4 == 0) goto code_r0x014b17d4;
        uVar5 = Atlas_Gameplay_Kart_KartPhysics__get_HitInvuln(lVar4,0);
        if ((uVar5 & 1) == 0) {
          lVar4 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(param_1);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          uVar9 = *(undefined8 *)(lVar4 + 0x68);
          uVar6 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(param_1);
          lVar4 = *(long *)(param_1 + 0x28);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          if (*(long *)(lVar4 + 0x10) == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          lVar7 = Atlas_Gameplay_Kart_KartPhysics__get_Body(*(long *)(lVar4 + 0x10),0);
          /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar7 + 0x13c),*(undefined4 *)(lVar7 + 0x140),
                          *(undefined4 *)(lVar7 + 0x144),0);
          Atlas_Gameplay_Kart_KartComposite__OnUsableHit(plVar1,uVar9,uVar6,lVar4,0);
          if (*(long *)(param_1 + 0x28) == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          lVar4 = *(long *)(lVar4 + 0x60);
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
                    (0xbf800000,lVar4,0);
        }
      }
      else {
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        if (*(long *)(lVar4 + 0x60) == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0x60) + 200);
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        plVar8 = *(long **)(lVar4 + 0x30);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        iVar3 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
        if (iVar3 == 6) goto LAB_014b14dc;
        uVar6 = Atlas_Gameplay_Usables_NormalShieldUsable__get_ShieldUsableDefinition(param_1);
        if (*(long *)(param_1 + 0x28) == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        lVar4 = *(long *)(lVar4 + 0x60);
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
                  (0xbf800000,lVar4,0);
        lVar4 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        lVar4 = *(long *)(lVar4 + 0x40);
        if (lVar4 != 0) {
          if (*(long *)(param_1 + 0x28) == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitShield*/ func_0x015a62e0(lVar4,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x90),plVar1[0x12],
                          plVar8,uVar6,0);
        }
        if (plVar1[2] == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        lVar4 = *(long *)(plVar1[2] + 0x60);
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        Atlas_Gameplay_Kart_KartPhysicsHandlingModifiersManager__ConsumeShieldHit
                  (0xbf800000,lVar4,0);
        lVar4 = /*Atlas.Gameplay.Usables.Usable$$get_GameContextBase*/ func_0x0152373c(param_1,0);
        if (lVar4 == 0) {
          func_0x00f78af4();
          goto code_r0x014b1860;
        }
        lVar4 = *(long *)(lVar4 + 0x40);
        if (lVar4 != 0) {
          if (*(long *)(param_1 + 0x28) == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          if (lVar4 == 0) {
            func_0x00f78af4();
            goto code_r0x014b1860;
          }
          /*Atlas.Gameplay.Player.GameContextPlayerManager$$FireOnUsableHitShield*/ func_0x015a62e0(lVar4,plVar1[0x12],*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x90),uVar6
                          ,plVar8,0);
        }
      }
    } while (*(char *)(param_1 + 0xe4) == '\0');
LAB_014b1744:
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,uRam0000000003d325c0);
  }
  return;
}



// ============================================================
// RVA: 0x14b195c | Atlas.Gameplay.Usables.NormalShieldUsable.InUseVisuals
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b1af0 | Atlas.Gameplay.Usables.NormalShieldUsable.Use
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b1b84 | Atlas.Gameplay.Usables.NormalShieldUsable.PlayUseSound
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b1ba8 | Atlas.Gameplay.Usables.NormalShieldUsable.TriggerDestroy
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b1e00 | Atlas.Gameplay.Usables.NormalShieldUsable.ConsumeHit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b1f28 | Atlas.Gameplay.Usables.NormalShieldUsable.PlayTimeoutSound
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14b1f48 | Atlas.Gameplay.Usables.NormalShieldUsable..ctor
// ============================================================

void Atlas_Gameplay_Usables_NormalShieldUsable___ctor(void)

{
  return;
}



