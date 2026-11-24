// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Localisation.LocaliseTextBehaviour

// ============================================================
// RVA: 0x16516cc | Core.Localisation.LocaliseTextBehaviour.SetLocalisationKey
// ============================================================

void Core_Localisation_LocaliseTextBehaviour__SetLocalisationKey(long *param_1,long param_2)

{
  param_1[6] = param_2;
                    /* WARNING: Could not recover jumptable at 0x016516d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  return;
}



// ============================================================
// RVA: 0x16516dc | Core.Localisation.LocaliseTextBehaviour.SplitTextIfRequired
// ============================================================

ulong Core_Localisation_LocaliseTextBehaviour__SplitTextIfRequired
                (ulong param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (((param_3 < 0) || (param_1 = *param_2, param_1 == 0)) ||
     (iVar1 = *(int *)(param_1 + 0x10), iVar1 <= param_3)) {
    return param_1;
  }
  iVar12 = iVar1;
  if (iVar1 < 0) {
    iVar12 = iVar1 + 1;
  }
  if (iVar1 < 1) {
    return param_1;
  }
  uVar8 = 0;
  uVar9 = (ulong)(uint)(iVar12 >> 1);
  iVar12 = 0x7fffffff;
  uVar11 = 0xffffffff;
  do {
    uVar3 = /*System.String$$get_Chars*/ func_0x029c5420(param_1,uVar8,0);
    uVar7 = (uint)uVar8;
    iVar2 = iVar12;
    if ((int)uVar3 == 0x20) {
      uVar3 = /*UnityEngine.Mathf$$Abs*/ func_0x0323cc74(uVar9,0);
      iVar2 = (int)uVar3;
      uVar10 = uVar7;
      if (iVar12 <= iVar2) {
        uVar10 = (uint)uVar11;
      }
      uVar11 = (ulong)uVar10;
      if (iVar12 <= iVar2) {
        iVar2 = iVar12;
      }
    }
    iVar12 = iVar2;
    if (iVar1 - 1U == uVar7) goto LAB_01651774;
    param_1 = *param_2;
    uVar9 = (ulong)((int)uVar9 - 1);
    uVar8 = (ulong)(uVar7 + 1);
  } while (param_1 != 0);
  do {
    uVar3 = func_0x00f78af4();
LAB_01651774:
    if ((int)(uint)uVar11 < 0) {
      return uVar3;
    }
  } while ((*param_2 == 0) || (lVar4 = /*System.String$$ToCharArray*/ func_0x029cb060(*param_2,0), lVar4 == 0));
  if ((uint)uVar11 < *(uint *)(lVar4 + 0x18)) {
    *(undefined2 *)(lVar4 + uVar11 * 2 + 0x20) = 10;
    uVar8 = /*System.String$$CreateString*/ func_0x029d16a0(0,lVar4,0);
    *param_2 = uVar8;
    return uVar8;
  }
  uVar5 = func_0x00f78b24();
  lVar4 = func_0x00f78ac0(uVar5,0);
  puStack_48 = &Core_Localisation_LocaliseTextBehaviour__UpdateTextComponent;
  uStack_70 = uVar11;
  uStack_68 = uVar9;
  uStack_60 = uVar8;
  puStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb57d0 & 1) == 0) {
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57d0 = 1;
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0,0);
  if ((uVar8 & 1) == 0) {
    if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0xb8) == 0) {
      return /*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0;
    }
    Core_Localisation_LocaliseFontBehaviour__SetTextFontAndMaterials(lVar4);
    uStack_78 = 0;
    uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar4 + 0x30),0);
    if ((uVar8 & 1) == 0) {
      if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0xb8) == 0) goto code_r0x01651910;
      uVar8 = Core_Localisation_LocalisationManager__TryGetLocalisedString
                        (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0xb8),*(undefined8 *)(lVar4 + 0x30),
                         &uStack_78);
    }
    Core_Localisation_LocaliseTextBehaviour__SplitTextIfRequired
              (uVar8,&uStack_78,*(undefined4 *)(lVar4 + 0x38));
    plVar6 = *(long **)(lVar4 + 0x18);
    if (plVar6 == (long *)0x0) {
code_r0x01651910:
      uVar8 = func_0x00f78af4();
      if ((bRam0000000003eb57d1 & 1) == 0) {
        func_0x00f78a20(0x3d230e0);
        bRam0000000003eb57d1 = 1;
      }
      *(undefined4 *)(uVar8 + 0x38) = 0xffffffff;
      if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar8;
    }
    uVar8 = (**(code **)(*plVar6 + 0x558))(plVar6,uStack_78,*(undefined8 *)(*plVar6 + 0x560));
  }
  return uVar8;
}



// ============================================================
// RVA: 0x16517d8 | Core.Localisation.LocaliseTextBehaviour.UpdateTextComponent
// ============================================================

ulong Core_Localisation_LocaliseTextBehaviour__UpdateTextComponent(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb57d0 & 1) == 0) {
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb57d0 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0xb8) == 0) {
      return /*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0;
    }
    Core_Localisation_LocaliseFontBehaviour__SetTextFontAndMaterials(param_1);
    uStack_38 = 0;
    uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x30),0);
    if ((uVar1 & 1) == 0) {
      if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0xb8) == 0) goto LAB_01651910;
      uVar1 = Core_Localisation_LocalisationManager__TryGetLocalisedString
                        (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0xb8),*(undefined8 *)(param_1 + 0x30),
                         &uStack_38);
    }
    Core_Localisation_LocaliseTextBehaviour__SplitTextIfRequired
              (uVar1,&uStack_38,*(undefined4 *)(param_1 + 0x38));
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) {
LAB_01651910:
      uVar1 = func_0x00f78af4();
      if ((bRam0000000003eb57d1 & 1) == 0) {
        func_0x00f78a20(0x3d230e0);
        bRam0000000003eb57d1 = 1;
      }
      *(undefined4 *)(uVar1 + 0x38) = 0xffffffff;
      if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ uRam0000000003d230e0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar1;
    }
    uVar1 = (**(code **)(*plVar2 + 0x558))(plVar2,uStack_38,*(undefined8 *)(*plVar2 + 0x560));
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1651914 | Core.Localisation.LocaliseTextBehaviour..ctor
// ============================================================

undefined1  [16] Core_Localisation_LocaliseTextBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb57d1 & 1) == 0) {
    func_0x00f78a20(0x3d230e0);
    bRam0000000003eb57d1 = 1;
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
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



