// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.GameObjectPool<object>

// ============================================================
// RVA: 0x2188d38 | Core.Containers.GameObjectPool<object>.get__usePrefabMode
// ============================================================

uint Core_Containers_GameObjectPool_object___get__usePrefabMode(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb7b66 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb7b66 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec027c & 1) == 0) {
    func_0x00f78a20(0x3d23990,0,0);
    bRam0000000003ec027c = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(uVar2,0);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x2188dac | Core.Containers.GameObjectPool<object>.get_InnerPool
// ============================================================

undefined8 Core_Containers_GameObjectPool_object___get_InnerPool(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x2188db4 | Core.Containers.GameObjectPool<object>.Init
// ============================================================

long Core_Containers_GameObjectPool_object___Init
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,
               long param_10)

{
  undefined1 ***pppuVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long extraout_x1;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined1 ***pppuVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb7b67 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    bRam0000000003eb7b67 = 1;
  }
  lVar3 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
  plVar11 = (long *)0x0;
  /*UnityEngine.GameObject$$.ctor*/ func_0x0322f3a8(lVar3,param_8);
  if (lVar3 != 0) {
    lVar3 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar3,0);
    *(long *)(param_5 + 0x20) = lVar3;
    if (lVar3 != 0) {
      /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar3,param_9,0,0);
      *(long *)(param_5 + 0x18) = param_7;
      lVar3 = *(long *)(param_5 + 0x10);
      lVar14 = *(long *)(*(long *)(*(long *)(param_10 + 0x18) + 0xc0) + 8);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      uVar4 = func_0x00f78aec(lVar14);
      puVar12 = *(undefined8 **)(*(long *)(param_10 + 0x18) + 0xc0);
      (**(code **)puVar12[2])(uVar4,param_5,*puVar12);
      lVar14 = *(long *)(*(long *)(*(long *)(param_10 + 0x18) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      uVar5 = func_0x00f78aec(lVar14);
      lVar14 = *(long *)(*(long *)(param_10 + 0x18) + 0xc0);
      (*(code *)**(undefined8 **)(lVar14 + 0x28))(uVar5,param_5,*(undefined8 *)(lVar14 + 0x18));
      lVar14 = *(long *)(*(long *)(*(long *)(param_10 + 0x18) + 0xc0) + 0x38);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      uVar6 = func_0x00f78aec(lVar14);
      lVar14 = *(long *)(*(long *)(param_10 + 0x18) + 0xc0);
      plVar11 = *(long **)(lVar14 + 0x30);
      (*(code *)**(undefined8 **)(lVar14 + 0x40))(uVar6,param_5);
      param_7 = 0;
      if (lVar3 != 0) {
        lVar14 = *(long *)(*(long *)(param_10 + 0x18) + 0xc0);
        uStack_58 = 0;
        uStack_70 = uVar4;
        uStack_68 = uVar6;
        uStack_60 = uVar5;
        lVar3 = (*(code *)**(undefined8 **)(lVar14 + 0x48))
                          (lVar3,param_6,&uStack_70,*(undefined8 *)(lVar14 + 0x48));
        return lVar3;
      }
    }
  }
  auVar17 = func_0x00f78af4();
  puStack_78 = &Core_Containers_GameObjectPool_object___DeInit;
  puStack_80 = &stack0xfffffffffffffff0;
  if (*(long *)(auVar17._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02188f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar17._8_8_ + 0x18) + 0xc0) + 0x50))()
    ;
    return lVar3;
  }
  auVar17 = func_0x00f78af4();
  lVar14 = auVar17._8_8_;
  lVar3 = auVar17._0_8_;
  pppuVar1 = (undefined1 ***)auStack_c0;
  puStack_88 = &Core_Containers_GameObjectPool_object___InitPooledObject;
  plVar13 = (long *)0x3eb7000;
  lStack_b0 = param_7;
  lStack_a8 = param_5;
  lStack_a0 = param_10;
  uStack_98 = param_6;
  puStack_90 = (undefined1 *)&puStack_80;
  if ((bRam0000000003eb7b68 & 1) == 0) {
    puStack_90 = (undefined1 *)&puStack_80;
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b0d0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f578);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d71348);
    bRam0000000003eb7b68 = 1;
  }
  lStack_b8 = 0;
  if (lVar3 == 0) {
code_r0x021891f0:
    func_0x00f78af4();
    lVar7 = param_7;
code_r0x021891f4:
    uVar4 = func_0x00f78b24();
  }
  else {
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar14 + 0x18) + 0xc0) + 0x58))(lVar3);
    if (iVar2 != 0) {
      plVar13 = *(long **)(lVar3 + 0x18);
      param_7 = *(long *)(lVar3 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar11 = plRam0000000003d5b0d0;
      lVar7 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(plVar13,param_7);
      if (lVar7 != 0) {
        plVar11 = *(long **)(*(long *)(*(long *)(lVar14 + 0x18) + 0xc0) + 0x60);
        iVar2 = (*(code *)*plVar11)(lVar7,&lStack_b8);
        if (iVar2 == 0) {
          return 0;
        }
code_r0x02189168:
        if ((lStack_b8 != 0) && (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lStack_b8,0), lVar7 != 0)) {
          uVar16 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar7,0);
          *(undefined4 *)(lVar3 + 0x28) = uVar16;
          *(undefined4 *)(lVar3 + 0x2c) = param_2;
          *(undefined4 *)(lVar3 + 0x30) = param_3;
          uVar16 = /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar7,0);
          *(undefined4 *)(lVar3 + 0x34) = uVar16;
          *(undefined4 *)(lVar3 + 0x38) = param_2;
          *(undefined4 *)(lVar3 + 0x3c) = param_3;
          *(undefined4 *)(lVar3 + 0x40) = param_4;
          uVar16 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar7,0);
          *(undefined4 *)(lVar3 + 0x44) = uVar16;
          *(undefined4 *)(lVar3 + 0x48) = param_2;
          *(undefined4 *)(lVar3 + 0x4c) = param_3;
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar14 + 0x18) + 0xc0) + 0x18))
                    (lVar3,lStack_b8);
          return lStack_b8;
        }
      }
      goto code_r0x021891f0;
    }
    plVar13 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
    param_7 = *(long *)(*(long *)(*(long *)(lVar14 + 0x18) + 0xc0) + 0x68);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(param_7,0);
    if (plVar13 == (long *)0x0) goto code_r0x021891f0;
    if ((lVar7 == 0) ||
       (lVar8 = func_0x00f78adc(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar8 != 0)) {
      if ((int)plVar13[3] != 0) {
        plVar13[4] = lVar7;
        param_7 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
        plVar11 = plVar13;
        /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(param_7,/*STR('Pooled Object')*/ uRam0000000003d71348,plVar13,0);
        if (param_7 != 0) {
          lStack_b8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar14 + 0x18) + 0xc0) + 0x70)
                      )(param_7);
          goto code_r0x02189168;
        }
        goto code_r0x021891f0;
      }
      goto code_r0x021891f4;
    }
    uVar4 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar4,0);
  pppuVar15 = &ppuStack_d0;
  puStack_c8 = &Core_Containers_GameObjectPool_object___OnLeavePool;
  ppuStack_d0 = &puStack_90;
  if ((extraout_x1 != 0) && (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(extraout_x1,0), lVar8 != 0)) {
    uVar4 = 1;
    pppuVar15 = (undefined1 ***)ppuStack_d0;
    puStack_d8 = puStack_c8;
UnityEngine_GameObject__SetActive:
    *(long *)((long)pppuVar1 + -0x30) = lVar7;
    *(long **)((long)pppuVar1 + -0x28) = plVar13;
    *(long *)((long)pppuVar1 + -0x20) = lVar14;
    *(long *)((long)pppuVar1 + -0x18) = lVar3;
    *(undefined1 ****)((long)pppuVar1 + -0x10) = pppuVar15;
    *(undefined **)((long)pppuVar1 + -8) = puStack_d8;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ebf4c0)(lVar8,uVar4);
    return lVar3;
  }
  auVar17 = func_0x00f78af4();
  lVar10 = auVar17._8_8_;
  lVar8 = auVar17._0_8_;
  puStack_d8 = &Core_Containers_GameObjectPool_object___OnEnterPool;
  if ((lVar10 != 0) && (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0), lVar9 != 0)) {
    plVar11 = (long *)0x0;
    /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar9,*(undefined8 *)(lVar8 + 0x20),0,0);
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar8 + 0x28),*(undefined4 *)(lVar8 + 0x2c),
                    *(undefined4 *)(lVar8 + 0x30),lVar9,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar8 + 0x34),*(undefined4 *)(lVar8 + 0x38),
                    *(undefined4 *)(lVar8 + 0x3c),*(undefined4 *)(lVar8 + 0x40),lVar9,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar8 + 0x44),*(undefined4 *)(lVar8 + 0x48),
                    *(undefined4 *)(lVar8 + 0x4c),lVar9,0);
    lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0);
    if (lVar8 != 0) {
      uVar4 = 0;
      pppuVar1 = &ppuStack_d0;
      goto UnityEngine_GameObject__SetActive;
    }
  }
  auVar17 = func_0x00f78af4();
  if (*(long *)(auVar17._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar17._8_8_ + 0x18) + 0xc0) + 0x80))()
    ;
    return lVar3;
  }
  auVar17 = func_0x00f78af4();
  if (*(long *)(auVar17._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar17._8_8_ + 0x18) + 0xc0) + 0x88))()
    ;
    return lVar3;
  }
  auVar17 = func_0x00f78af4();
  if (*(long *)(auVar17._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar17._8_8_ + 0x18) + 0xc0) + 0x90))()
    ;
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(plVar11[3] + 0xc0) + 0x98))();
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(plVar11[3] + 0xc0) + 0xa0))();
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(plVar11[3] + 0xc0) + 0xa8))();
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(plVar11[3] + 0xc0) + 0xb0))();
    return lVar3;
  }
  auVar17 = func_0x00f78af4();
  if (*(long *)(auVar17._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar17._8_8_ + 0x18) + 0xc0) + 0xb8))()
    ;
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(plVar11[3] + 0xc0) + 0xc0))();
    return lVar3;
  }
  auVar17 = func_0x00f78af4();
  lVar3 = *(long *)(*(long *)(*(long *)(auVar17._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  uVar4 = func_0x00f78aec(lVar3);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar17._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar17._0_8_ + 0x10) = uVar4;
  return auVar17._0_8_;
}



// ============================================================
// RVA: 0x2188f74 | Core.Containers.GameObjectPool<object>.DeInit
// ============================================================

long Core_Containers_GameObjectPool_object___DeInit
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6,long *param_7)

{
  undefined1 ***pppuVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x1;
  long lVar9;
  long *plVar10;
  long unaff_x22;
  undefined1 ***pppuVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined *puStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_5 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02188f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_6 + 0x18) + 0xc0) + 0x50))();
    return lVar3;
  }
  auVar13 = func_0x00f78af4();
  lVar8 = auVar13._8_8_;
  lVar3 = auVar13._0_8_;
  puStack_18 = &Core_Containers_GameObjectPool_object___InitPooledObject;
  plVar10 = (long *)0x3eb7000;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb7b68 & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b0d0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f578);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d71348);
    bRam0000000003eb7b68 = 1;
  }
  lStack_48 = 0;
  if (lVar3 == 0) {
code_r0x021891f0:
    func_0x00f78af4();
    lVar4 = unaff_x22;
code_r0x021891f4:
    uVar5 = func_0x00f78b24();
  }
  else {
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x58))(lVar3);
    if (iVar2 != 0) {
      plVar10 = *(long **)(lVar3 + 0x18);
      unaff_x22 = *(long *)(lVar3 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_7 = plRam0000000003d5b0d0;
      lVar4 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(plVar10,unaff_x22);
      if (lVar4 != 0) {
        param_7 = *(long **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x60);
        iVar2 = (*(code *)*param_7)(lVar4,&lStack_48);
        if (iVar2 == 0) {
          return 0;
        }
code_r0x02189168:
        if ((lStack_48 != 0) && (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lStack_48,0), lVar4 != 0)) {
          uVar12 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar4,0);
          *(undefined4 *)(lVar3 + 0x28) = uVar12;
          *(undefined4 *)(lVar3 + 0x2c) = param_2;
          *(undefined4 *)(lVar3 + 0x30) = param_3;
          uVar12 = /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar4,0);
          *(undefined4 *)(lVar3 + 0x34) = uVar12;
          *(undefined4 *)(lVar3 + 0x38) = param_2;
          *(undefined4 *)(lVar3 + 0x3c) = param_3;
          *(undefined4 *)(lVar3 + 0x40) = param_4;
          uVar12 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar4,0);
          *(undefined4 *)(lVar3 + 0x44) = uVar12;
          *(undefined4 *)(lVar3 + 0x48) = param_2;
          *(undefined4 *)(lVar3 + 0x4c) = param_3;
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x18))
                    (lVar3,lStack_48);
          return lStack_48;
        }
      }
      goto code_r0x021891f0;
    }
    plVar10 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
    unaff_x22 = *(long *)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x68);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x22,0);
    if (plVar10 == (long *)0x0) goto code_r0x021891f0;
    if ((lVar4 == 0) ||
       (lVar6 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar10 + 0x40)), lVar6 != 0)) {
      if ((int)plVar10[3] != 0) {
        plVar10[4] = lVar4;
        unaff_x22 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
        param_7 = plVar10;
        /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(unaff_x22,/*STR('Pooled Object')*/ uRam0000000003d71348,plVar10,0);
        if (unaff_x22 != 0) {
          lStack_48 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x70))
                                (unaff_x22);
          goto code_r0x02189168;
        }
        goto code_r0x021891f0;
      }
      goto code_r0x021891f4;
    }
    uVar5 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar5,0);
  pppuVar11 = &ppuStack_60;
  puStack_58 = &Core_Containers_GameObjectPool_object___OnLeavePool;
  ppuStack_60 = &puStack_20;
  if ((extraout_x1 != 0) && (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(extraout_x1,0), lVar6 != 0)) {
    uVar5 = 1;
    pppuVar1 = (undefined1 ***)auStack_50;
    pppuVar11 = (undefined1 ***)ppuStack_60;
    puStack_68 = puStack_58;
UnityEngine_GameObject__SetActive:
    *(long *)((long)pppuVar1 + -0x30) = lVar4;
    *(long **)((long)pppuVar1 + -0x28) = plVar10;
    *(long *)((long)pppuVar1 + -0x20) = lVar8;
    *(long *)((long)pppuVar1 + -0x18) = lVar3;
    *(undefined1 ****)((long)pppuVar1 + -0x10) = pppuVar11;
    *(undefined **)((long)pppuVar1 + -8) = puStack_68;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ebf4c0)(lVar6,uVar5);
    return lVar3;
  }
  auVar13 = func_0x00f78af4();
  lVar9 = auVar13._8_8_;
  lVar6 = auVar13._0_8_;
  puStack_68 = &Core_Containers_GameObjectPool_object___OnEnterPool;
  if ((lVar9 != 0) && (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0), lVar7 != 0)) {
    param_7 = (long *)0x0;
    /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar7,*(undefined8 *)(lVar6 + 0x20),0,0);
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x2c),
                    *(undefined4 *)(lVar6 + 0x30),lVar7,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar6 + 0x34),*(undefined4 *)(lVar6 + 0x38),
                    *(undefined4 *)(lVar6 + 0x3c),*(undefined4 *)(lVar6 + 0x40),lVar7,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar6 + 0x44),*(undefined4 *)(lVar6 + 0x48),
                    *(undefined4 *)(lVar6 + 0x4c),lVar7,0);
    lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0);
    if (lVar6 != 0) {
      uVar5 = 0;
      pppuVar1 = &ppuStack_60;
      goto UnityEngine_GameObject__SetActive;
    }
  }
  auVar13 = func_0x00f78af4();
  if (*(long *)(auVar13._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar13._8_8_ + 0x18) + 0xc0) + 0x80))()
    ;
    return lVar3;
  }
  auVar13 = func_0x00f78af4();
  if (*(long *)(auVar13._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar13._8_8_ + 0x18) + 0xc0) + 0x88))()
    ;
    return lVar3;
  }
  auVar13 = func_0x00f78af4();
  if (*(long *)(auVar13._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar13._8_8_ + 0x18) + 0xc0) + 0x90))()
    ;
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7[3] + 0xc0) + 0x98))();
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7[3] + 0xc0) + 0xa0))();
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7[3] + 0xc0) + 0xa8))();
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7[3] + 0xc0) + 0xb0))();
    return lVar3;
  }
  auVar13 = func_0x00f78af4();
  if (*(long *)(auVar13._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar13._8_8_ + 0x18) + 0xc0) + 0xb8))()
    ;
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7[3] + 0xc0) + 0xc0))();
    return lVar3;
  }
  auVar13 = func_0x00f78af4();
  lVar3 = *(long *)(*(long *)(*(long *)(auVar13._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  uVar5 = func_0x00f78aec(lVar3);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar13._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar13._0_8_ + 0x10) = uVar5;
  return auVar13._0_8_;
}



// ============================================================
// RVA: 0x2188fa0 | Core.Containers.GameObjectPool<object>.InitPooledObject
// ============================================================

long Core_Containers_GameObjectPool_object___InitPooledObject
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6,long *param_7)

{
  undefined1 **ppuVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long extraout_x1;
  long lVar7;
  long *plVar8;
  long unaff_x22;
  undefined1 **ppuVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  ppuVar1 = (undefined1 **)auStack_40;
  plVar8 = (long *)0x3eb7000;
  if ((bRam0000000003eb7b68 & 1) == 0) {
    func_0x00f78a20(0x3d21b60);
    func_0x00f78a20(0x3d5b0d0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f578);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d71348);
    bRam0000000003eb7b68 = 1;
  }
  lStack_38 = 0;
  if (param_5 == 0) {
LAB_021891f0:
    func_0x00f78af4();
    lVar3 = unaff_x22;
code_r0x021891f4:
    uVar4 = func_0x00f78b24();
  }
  else {
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_6 + 0x18) + 0xc0) + 0x58))
                      (param_5);
    if (iVar2 != 0) {
      plVar8 = *(long **)(param_5 + 0x18);
      unaff_x22 = *(long *)(param_5 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_7 = plRam0000000003d5b0d0;
      lVar3 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(plVar8,unaff_x22);
      if (lVar3 != 0) {
        param_7 = *(long **)(*(long *)(*(long *)(param_6 + 0x18) + 0xc0) + 0x60);
        iVar2 = (*(code *)*param_7)(lVar3,&lStack_38);
        if (iVar2 == 0) {
          return 0;
        }
LAB_02189168:
        if ((lStack_38 != 0) && (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lStack_38,0), lVar3 != 0)) {
          uVar10 = /*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(lVar3,0);
          *(undefined4 *)(param_5 + 0x28) = uVar10;
          *(undefined4 *)(param_5 + 0x2c) = param_2;
          *(undefined4 *)(param_5 + 0x30) = param_3;
          uVar10 = /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar3,0);
          *(undefined4 *)(param_5 + 0x34) = uVar10;
          *(undefined4 *)(param_5 + 0x38) = param_2;
          *(undefined4 *)(param_5 + 0x3c) = param_3;
          *(undefined4 *)(param_5 + 0x40) = param_4;
          uVar10 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar3,0);
          *(undefined4 *)(param_5 + 0x44) = uVar10;
          *(undefined4 *)(param_5 + 0x48) = param_2;
          *(undefined4 *)(param_5 + 0x4c) = param_3;
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_6 + 0x18) + 0xc0) + 0x18))
                    (param_5,lStack_38);
          return lStack_38;
        }
      }
      goto LAB_021891f0;
    }
    plVar8 = (long *)func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,1);
    unaff_x22 = *(long *)(*(long *)(*(long *)(param_6 + 0x18) + 0xc0) + 0x68);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar3 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x22,0);
    if (plVar8 == (long *)0x0) goto LAB_021891f0;
    if ((lVar3 == 0) || (lVar5 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar8 + 0x40)), lVar5 != 0)
       ) {
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar3;
        unaff_x22 = func_0x00f78aec(/*UnityEngine.GameObject_TypeInfo*/ uRam0000000003d21b60);
        param_7 = plVar8;
        /*UnityEngine.GameObject$$.ctor*/ func_0x0322f52c(unaff_x22,/*STR('Pooled Object')*/ uRam0000000003d71348,plVar8,0);
        if (unaff_x22 != 0) {
          lStack_38 = (*(code *)**(undefined8 **)
                                  (*(long *)(*(long *)(param_6 + 0x18) + 0xc0) + 0x70))(unaff_x22);
          goto LAB_02189168;
        }
        goto LAB_021891f0;
      }
      goto code_r0x021891f4;
    }
    uVar4 = func_0x00f78b14();
  }
  func_0x00f78ac0(uVar4,0);
  ppuVar9 = &puStack_50;
  puStack_48 = &Core_Containers_GameObjectPool_object___OnLeavePool;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((extraout_x1 != 0) && (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(extraout_x1,0), lVar5 != 0)) {
    uVar4 = 1;
    ppuVar9 = (undefined1 **)puStack_50;
    puStack_58 = puStack_48;
UnityEngine_GameObject__SetActive:
    *(long *)((long)ppuVar1 + -0x30) = lVar3;
    *(long **)((long)ppuVar1 + -0x28) = plVar8;
    *(long *)((long)ppuVar1 + -0x20) = param_6;
    *(long *)((long)ppuVar1 + -0x18) = param_5;
    *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar9;
    *(undefined **)((long)ppuVar1 + -8) = puStack_58;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ebf4c0)(lVar5,uVar4);
    return lVar3;
  }
  auVar11 = func_0x00f78af4();
  lVar7 = auVar11._8_8_;
  lVar5 = auVar11._0_8_;
  puStack_58 = &Core_Containers_GameObjectPool_object___OnEnterPool;
  if ((lVar7 != 0) && (lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0), lVar6 != 0)) {
    param_7 = (long *)0x0;
    /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar6,*(undefined8 *)(lVar5 + 0x20),0,0);
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x2c),
                    *(undefined4 *)(lVar5 + 0x30),lVar6,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar5 + 0x34),*(undefined4 *)(lVar5 + 0x38),
                    *(undefined4 *)(lVar5 + 0x3c),*(undefined4 *)(lVar5 + 0x40),lVar6,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar5 + 0x44),*(undefined4 *)(lVar5 + 0x48),
                    *(undefined4 *)(lVar5 + 0x4c),lVar6,0);
    lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0);
    if (lVar5 != 0) {
      uVar4 = 0;
      ppuVar1 = &puStack_50;
      goto UnityEngine_GameObject__SetActive;
    }
  }
  auVar11 = func_0x00f78af4();
  if (*(long *)(auVar11._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar11._8_8_ + 0x18) + 0xc0) + 0x80))()
    ;
    return lVar3;
  }
  auVar11 = func_0x00f78af4();
  if (*(long *)(auVar11._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar11._8_8_ + 0x18) + 0xc0) + 0x88))()
    ;
    return lVar3;
  }
  auVar11 = func_0x00f78af4();
  if (*(long *)(auVar11._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar11._8_8_ + 0x18) + 0xc0) + 0x90))()
    ;
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7[3] + 0xc0) + 0x98))();
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7[3] + 0xc0) + 0xa0))();
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7[3] + 0xc0) + 0xa8))();
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7[3] + 0xc0) + 0xb0))();
    return lVar3;
  }
  auVar11 = func_0x00f78af4();
  if (*(long *)(auVar11._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar11._8_8_ + 0x18) + 0xc0) + 0xb8))()
    ;
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(param_7[3] + 0xc0) + 0xc0))();
    return lVar3;
  }
  auVar11 = func_0x00f78af4();
  lVar3 = *(long *)(*(long *)(*(long *)(auVar11._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  uVar4 = func_0x00f78aec(lVar3);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar11._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar11._0_8_ + 0x10) = uVar4;
  return auVar11._0_8_;
}



// ============================================================
// RVA: 0x2189208 | Core.Containers.GameObjectPool<object>.OnLeavePool
// ============================================================

undefined1  [16]
Core_Containers_GameObjectPool_object___OnLeavePool(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar5;
  undefined *unaff_x30;
  undefined1 auVar6 [16];
  undefined *puStack_18;
  
  puVar5 = &stack0xfffffffffffffff0;
  if ((param_2 != 0) && (lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0), lVar1 != 0)) {
    uVar3 = 1;
    puVar5 = unaff_x29;
UnityEngine_GameObject__SetActive:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar5;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*pcRam0000000003ebf4c0)(lVar1,uVar3);
    return auVar6;
  }
  auVar6 = func_0x00f78af4();
  lVar4 = auVar6._8_8_;
  lVar1 = auVar6._0_8_;
  puStack_18 = &Core_Containers_GameObjectPool_object___OnEnterPool;
  if ((lVar4 != 0) && (lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar4,0), lVar2 != 0)) {
    param_3 = 0;
    /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar2,*(undefined8 *)(lVar1 + 0x20),0,0);
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c),
                    *(undefined4 *)(lVar1 + 0x30),lVar2,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(lVar1 + 0x34),*(undefined4 *)(lVar1 + 0x38),
                    *(undefined4 *)(lVar1 + 0x3c),*(undefined4 *)(lVar1 + 0x40),lVar2,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(lVar1 + 0x44),*(undefined4 *)(lVar1 + 0x48),
                    *(undefined4 *)(lVar1 + 0x4c),lVar2,0);
    lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0);
    if (lVar1 != 0) {
      uVar3 = 0;
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = puStack_18;
      goto UnityEngine_GameObject__SetActive;
    }
  }
  auVar6 = func_0x00f78af4();
  if (*(long *)(auVar6._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar6._8_8_ + 0x18) + 0xc0) + 0x80))()
    ;
    return auVar6;
  }
  auVar6 = func_0x00f78af4();
  if (*(long *)(auVar6._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar6._8_8_ + 0x18) + 0xc0) + 0x88))()
    ;
    return auVar6;
  }
  auVar6 = func_0x00f78af4();
  if (*(long *)(auVar6._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar6._8_8_ + 0x18) + 0xc0) + 0x90))()
    ;
    return auVar6;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x98))();
    return auVar6;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa0))();
    return auVar6;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa8))();
    return auVar6;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xb0))();
    return auVar6;
  }
  auVar6 = func_0x00f78af4();
  if (*(long *)(auVar6._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar6._8_8_ + 0x18) + 0xc0) + 0xb8))()
    ;
    return auVar6;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xc0))();
    return auVar6;
  }
  auVar6 = func_0x00f78af4();
  lVar1 = *(long *)(*(long *)(*(long *)(auVar6._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar1 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar1);
  }
  uVar3 = func_0x00f78aec(lVar1);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar6._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar6._0_8_ + 0x10) = uVar3;
  auVar6._8_8_ = 0;
  return auVar6;
}



// ============================================================
// RVA: 0x2189238 | Core.Containers.GameObjectPool<object>.OnEnterPool
// ============================================================

undefined1  [16]
Core_Containers_GameObjectPool_object___OnEnterPool(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((param_2 != 0) && (lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0), lVar1 != 0)) {
    param_3 = 0;
    /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar1,*(undefined8 *)(param_1 + 0x20),0,0);
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                    *(undefined4 *)(param_1 + 0x30),lVar1,0);
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                    *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),lVar1,0);
    /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),
                    *(undefined4 *)(param_1 + 0x4c),lVar1,0);
    lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
    if (lVar1 != 0) {
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar3 = (*pcRam0000000003ebf4c0)(lVar1,0);
      return auVar3;
    }
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0x80))()
    ;
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0x88))()
    ;
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0x90))()
    ;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x98))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa0))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa8))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xb0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xb8))()
    ;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xc0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  lVar1 = *(long *)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar1 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar1);
  }
  uVar2 = func_0x00f78aec(lVar1);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar3._0_8_ + 0x10) = uVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x21892e0 | Core.Containers.GameObjectPool<object>.GetNumOfAvailableObjects
// ============================================================

undefined1  [16]
Core_Containers_GameObjectPool_object___GetNumOfAvailableObjects
          (long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x80))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0x88))()
    ;
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0x90))()
    ;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x98))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa0))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa8))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xb0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xb8))()
    ;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xc0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  lVar1 = *(long *)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar1 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar1);
  }
  uVar2 = func_0x00f78aec(lVar1);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar3._0_8_ + 0x10) = uVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x218930c | Core.Containers.GameObjectPool<object>.Acquire
// ============================================================

undefined1  [16]
Core_Containers_GameObjectPool_object___Acquire(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x88))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0x90))()
    ;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x98))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa0))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa8))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xb0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xb8))()
    ;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xc0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  lVar1 = *(long *)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar1 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar1);
  }
  uVar2 = func_0x00f78aec(lVar1);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar3._0_8_ + 0x10) = uVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x2189338 | Core.Containers.GameObjectPool<object>.TimedAcquire
// ============================================================

undefined1  [16]
Core_Containers_GameObjectPool_object___TimedAcquire(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x90))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x98))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa0))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa8))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xb0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xb8))()
    ;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xc0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  lVar1 = *(long *)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar1 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar1);
  }
  uVar2 = func_0x00f78aec(lVar1);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar3._0_8_ + 0x10) = uVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x2189364 | Core.Containers.GameObjectPool<object>.TryAcquire
// ============================================================

undefined1  [16]
Core_Containers_GameObjectPool_object___TryAcquire(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0x98))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa0))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa8))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xb0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xb8))()
    ;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xc0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  lVar1 = *(long *)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar1 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar1);
  }
  uVar2 = func_0x00f78aec(lVar1);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar3._0_8_ + 0x10) = uVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x2189390 | Core.Containers.GameObjectPool<object>.TryTimedAcquire
// ============================================================

undefined1  [16]
Core_Containers_GameObjectPool_object___TryTimedAcquire
          (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa0))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa8))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xb0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xb8))()
    ;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xc0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  lVar1 = *(long *)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar1 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar1);
  }
  uVar2 = func_0x00f78aec(lVar1);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar3._0_8_ + 0x10) = uVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x21893bc | Core.Containers.GameObjectPool<object>.Return
// ============================================================

undefined1  [16]
Core_Containers_GameObjectPool_object___Return(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x021893e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xa8))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xb0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xb8))()
    ;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xc0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  lVar1 = *(long *)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar1 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar1);
  }
  uVar2 = func_0x00f78aec(lVar1);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar3._0_8_ + 0x10) = uVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x21893e8 | Core.Containers.GameObjectPool<object>.ReturnAtTime
// ============================================================

undefined1  [16]
Core_Containers_GameObjectPool_object___ReturnAtTime(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0218940c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xb0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  if (*(long *)(auVar3._0_8_ + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xb8))()
    ;
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xc0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  lVar1 = *(long *)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar1 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar1);
  }
  uVar2 = func_0x00f78aec(lVar1);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar3._0_8_ + 0x10) = uVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x2189414 | Core.Containers.GameObjectPool<object>.ReleaseAll
// ============================================================

undefined1  [16]
Core_Containers_GameObjectPool_object___ReleaseAll(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0xb8))();
    return auVar3;
  }
  lVar1 = func_0x00f78af4();
  if (*(long *)(lVar1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xc0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  lVar1 = *(long *)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar1 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar1);
  }
  uVar2 = func_0x00f78aec(lVar1);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar3._0_8_ + 0x10) = uVar2;
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x2189440 | Core.Containers.GameObjectPool<object>.Update
// ============================================================

undefined1  [16]
Core_Containers_GameObjectPool_object___Update(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x02189464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 0xc0))();
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  lVar2 = *(long *)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  uVar1 = func_0x00f78aec(lVar2);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar3._8_8_ + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(auVar3._0_8_ + 0x10) = uVar1;
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x218946c | Core.Containers.GameObjectPool<object>..ctor
// ============================================================

undefined1  [16] Core_Containers_GameObjectPool_object____ctor(ulong param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 200);
  if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar2);
  }
  uVar1 = func_0x00f78aec(lVar2);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0xd0))();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  return auVar3;
}



