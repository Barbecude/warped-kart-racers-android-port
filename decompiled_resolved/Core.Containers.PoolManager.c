// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.PoolManager

// ============================================================
// RVA: 0x163c828 | Core.Containers.PoolManager.Init
// ============================================================

void Core_Containers_PoolManager__Init(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb56e7 & 1) == 0) {
    func_0x00f78a20(0x3d2fbd0);
    func_0x00f78a20(0x3d1c490);
    bRam0000000003eb56e7 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, IPool>_TypeInfo*/ uRam0000000003d1c490);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar1,uRam0000000003d2fbd0);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



// ============================================================
// RVA: 0x163c8a0 | Core.Containers.PoolManager.DeInit
// ============================================================

ulong Core_Containers_PoolManager__DeInit
                (long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  int extraout_w1;
  long *plVar18;
  ulong uVar19;
  undefined8 *extraout_x8;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined4 *puVar23;
  int *piVar24;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long lVar25;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  uint uVar26;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uStack_d8;
  undefined1 ***pppuStack_d0;
  long *plStack_c8;
  undefined1 *puStack_80;
  undefined1 auStack_78 [16];
  long *plStack_68;
  undefined1 **ppuStack_60;
  long *plStack_58;
  ulong uStack_40;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  auVar28._8_8_ = unaff_x19;
  auVar28._0_8_ = unaff_x20;
  if ((bRam0000000003eb56e8 & 1) == 0) {
    func_0x00f78a20(0x3d2fbe0);
    bRam0000000003eb56e8 = 1;
  }
  auVar27._8_8_ = uRam0000000003d2fbe0;
  auVar27._0_8_ = param_1[2];
  if (param_1[2] == 0) {
    auVar28 = func_0x00f78af4();
    uStack_40 = 0x3eb5000;
    puStack_28 = &Core_Containers_PoolManager__AddPool;
    puStack_30 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb56e9 & 1) == 0) {
      func_0x00f78a20(0x3d2fbd8);
      bRam0000000003eb56e9 = 1;
    }
    lVar22 = *(long *)(auVar28._0_8_ + 0x10);
    if (lVar22 == 0) {
      auVar27 = func_0x00f78af4();
      lVar22 = auVar27._8_8_;
      puStack_80 = (undefined1 *)0x3eb5000;
      plStack_58 = (long *)&Core_Containers_PoolManager__RemovePool;
      plStack_68 = param_3;
      ppuStack_60 = &puStack_30;
      auStack_78 = auVar28;
      if ((bRam0000000003eb56ea & 1) == 0) {
        func_0x00f78a20(0x3d2fbe8);
        bRam0000000003eb56ea = 1;
      }
      lVar21 = lRam0000000003d2fbe8;
      lVar8 = *(long *)(auVar27._0_8_ + 0x10);
      if (lVar8 == 0) {
        auVar28 = func_0x00f78af4();
        if ((bRam0000000003eb56eb & 1) == 0) {
          func_0x00f78a20(0x3d2fbf8);
          func_0x00f78a20(0x3d34e38);
          func_0x00f78a20(0x3d34e40);
          func_0x00f78a20(0x3d34e48);
          func_0x00f78a20(0x3d22450);
          func_0x00f78a20(0x3d421b8);
          bRam0000000003eb56eb = 1;
        }
        uStack_d8 = 0;
        pppuStack_d0 = (undefined1 ***)0x0;
        plStack_c8 = (long *)0x0;
        lVar22 = *(long *)(auVar28._0_8_ + 0x10);
        if (lVar22 != 0) {
          lVar22 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, SchemaEntity>$$get_Values*/ func_0x01ed7608(lVar22,uRam0000000003d2fbf8);
          if (lVar22 != 0) {
            /*System.Collections.Generic.Dictionary.ValueCollection<XmlQualifiedName, SchemaEntity>$$GetEnumerator*/ func_0x01ba1fec(&uStack_d8,lVar22,uRam0000000003d421b8);
            do {
              uVar13 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$MoveNext*/ func_0x01fd66d0(&uStack_d8,uRam0000000003d34e40);
              plVar11 = plStack_c8;
              if ((uVar13 & 1) == 0) {
                uVar13 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$Dispose*/ func_0x01fd66cc(&uStack_d8,uRam0000000003d34e38);
                return uVar13;
              }
              if (plStack_c8 == (long *)0x0) {
                func_0x00f78af4();
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x163cb34);
                (*pcVar5)();
              }
              lVar22 = *plStack_c8;
              uVar13 = (ulong)*(ushort *)(lVar22 + 0x12a);
              if (uVar13 != 0) {
                piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == /*Core.Containers.IPool_TypeInfo*/ lRam0000000003d22450) {
                    puVar17 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
                    goto code_r0x0163caf4;
                  }
                  piVar24 = piVar24 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plStack_c8,/*Core.Containers.IPool_TypeInfo*/ lRam0000000003d22450,0);
code_r0x0163caf4:
              (*(code *)*puVar17)(plVar11,auVar28._8_8_,puVar17[1]);
            } while( true );
          }
        }
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar11 = (long *)___cxa_begin_catch();
          lVar22 = *plVar11;
          ___cxa_end_catch();
          uVar13 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$Dispose*/ func_0x01fd66cc(&uStack_d8,uRam0000000003eb5000);
          if (lVar22 == 0) {
            return uVar13;
          }
          func_0x00f78ac0(lVar22,0);
        }
        uVar13 = __Unwind_Resume();
        return uVar13;
      }
      if (lVar22 != 0) {
        if (*(long *)(lVar8 + 0x10) == 0) {
          return 0;
        }
        plVar11 = *(long **)(lVar8 + 0x30);
        if (plVar11 == (long *)0x0) {
code_r0x01ed93c0:
          func_0x00f78af4();
        }
        else {
          lVar25 = *(long *)(*(long *)(*(long *)(lRam0000000003d2fbe8 + 0x18) + 0xc0) + 0xe0);
          if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar25);
          }
          lVar20 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar13 != 0) {
            piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar25) {
                puVar17 = (undefined8 *)(lVar20 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto code_r0x01ed9194;
              }
              piVar24 = piVar24 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar17 = (undefined8 *)func_0x00fac1f0(plVar11,lVar25,1);
code_r0x01ed9194:
          uVar6 = (*(code *)*puVar17)(plVar11,lVar22,puVar17[1]);
          lVar25 = *(long *)(lVar8 + 0x10);
          if (lVar25 == 0) goto code_r0x01ed93c0;
          uVar6 = uVar6 & 0x7fffffff;
          uVar1 = *(uint *)(lVar25 + 0x18);
          iVar7 = 0;
          if (uVar1 != 0) {
            iVar7 = (int)uVar6 / (int)uVar1;
          }
          uVar4 = uVar6 - iVar7 * uVar1;
          if (uVar4 < uVar1) {
            uVar1 = *(uint *)(lVar25 + (ulong)uVar4 * 4 + 0x20);
            if ((int)uVar1 < 0) {
              return 0;
            }
            lVar25 = *(long *)(lVar8 + 0x18);
            uVar26 = 0xffffffff;
            while (lVar25 != 0) {
              if (*(uint *)(lVar25 + 0x18) <= uVar1) goto code_r0x01ed93c4;
              uVar13 = (ulong)uVar1;
              if (*(uint *)(lVar25 + uVar13 * 0x18 + 0x20) == uVar6) {
                plVar11 = *(long **)(lVar8 + 0x30);
                if (plVar11 == (long *)0x0) break;
                uVar12 = *(undefined8 *)(lVar25 + uVar13 * 0x18 + 0x28);
                lVar25 = *(long *)(*(long *)(*(long *)(lVar21 + 0x18) + 0xc0) + 0xe0);
                if ((*(ushort *)(lVar25 + 0x132) & 1) == 0) {
                  func_0x00fac028(lVar25);
                }
                lVar20 = *plVar11;
                uVar19 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar19 != 0) {
                  piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == lVar25) {
                      puVar17 = (undefined8 *)(lVar20 + (long)*piVar24 * 0x10 + 0x138);
                      goto code_r0x01ed9284;
                    }
                    piVar24 = piVar24 + 4;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                }
                puVar17 = (undefined8 *)func_0x00fac1f0(plVar11,lVar25,0);
code_r0x01ed9284:
                param_4 = (long *)puVar17[1];
                iVar7 = (*(code *)*puVar17)(plVar11,uVar12,lVar22);
                if (iVar7 != 0) {
                  if ((int)uVar26 < 0) {
                    lVar22 = *(long *)(lVar8 + 0x18);
                    if (lVar22 == 0) break;
                    uVar6 = (uint)*(undefined8 *)(lVar22 + 0x18);
                    if (uVar6 <= uVar1) goto code_r0x01ed93c4;
                    lVar21 = *(long *)(lVar8 + 0x10);
                    if (lVar21 == 0) break;
                    if (*(uint *)(lVar21 + 0x18) <= uVar4) goto code_r0x01ed93c4;
                    *(undefined4 *)(lVar21 + (ulong)uVar4 * 4 + 0x20) =
                         *(undefined4 *)(lVar22 + uVar13 * 0x18 + 0x24);
                  }
                  else {
                    lVar22 = *(long *)(lVar8 + 0x18);
                    if (lVar22 == 0) break;
                    uVar6 = (uint)*(undefined8 *)(lVar22 + 0x18);
                    if ((uVar6 <= uVar1) || (uVar6 <= uVar26)) goto code_r0x01ed93c4;
                    *(undefined4 *)(lVar22 + 0x20 + (ulong)uVar26 * 0x18 + 4) =
                         *(undefined4 *)(lVar22 + 0x20 + uVar13 * 0x18 + 4);
                  }
                  if (uVar6 <= uVar1) goto code_r0x01ed93c4;
                  lVar22 = lVar22 + uVar13 * 0x18;
                  uVar3 = *(undefined4 *)(lVar8 + 0x28);
                  *(undefined4 *)(lVar22 + 0x20) = 0xffffffff;
                  *(undefined4 *)(lVar22 + 0x24) = uVar3;
                  *(undefined8 *)(lVar22 + 0x28) = 0;
                  lVar22 = *(long *)(lVar8 + 0x18);
                  if (lVar22 == 0) break;
                  if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                    *(undefined8 *)(lVar22 + uVar13 * 0x18 + 0x30) = 0;
                    *(uint *)(lVar8 + 0x28) = uVar1;
                    *(int *)(lVar8 + 0x2c) = *(int *)(lVar8 + 0x2c) + 1;
                    *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
                    return 1;
                  }
                  goto code_r0x01ed93c4;
                }
                lVar25 = *(long *)(lVar8 + 0x18);
                if (lVar25 == 0) break;
              }
              if (*(uint *)(lVar25 + 0x18) <= uVar1) goto code_r0x01ed93c4;
              uVar2 = *(uint *)(lVar25 + uVar13 * 0x18 + 0x24);
              uVar26 = uVar1;
              uVar1 = uVar2;
              if ((int)uVar2 < 0) {
                return 0;
              }
            }
            goto code_r0x01ed93c0;
          }
        }
code_r0x01ed93c4:
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
      }
      func_0x00f78a24(0x3d1fcf0);
      uVar12 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d79fc0);
      puVar17 = (undefined8 *)0x0;
      /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar12,uVar15);
      uVar15 = func_0x00f78a24(0x3d2f6b0);
      lVar22 = func_0x00f78ac0(uVar12,uVar15);
      plStack_c8 = (long *)&
                           System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue
      ;
      uStack_d8 = uVar12;
      pppuStack_d0 = &ppuStack_60;
      if (lVar22 != 0) {
        uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x40))();
        if ((int)uVar6 < 0) {
          *puVar17 = 0;
code_r0x01ed9474:
          return (ulong)(~uVar6 >> 0x1f);
        }
        lVar22 = *(long *)(lVar22 + 0x18);
        if (lVar22 != 0) {
          if (uVar6 < *(uint *)(lVar22 + 0x18)) {
            *puVar17 = *(undefined8 *)(lVar22 + (ulong)uVar6 * 0x18 + 0x30);
            goto code_r0x01ed9474;
          }
          goto code_r0x01ed948c;
        }
      }
      func_0x00f78af4();
code_r0x01ed948c:
      uVar12 = func_0x00f78b24();
      lVar22 = func_0x00f78ac0(uVar12,0);
      if (lVar22 == 0) {
        func_0x00f78af4();
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x01ed94bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x48))();
      return uVar13;
    }
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01ed77e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(plRam0000000003d2fbd8[3] + 0xc0) + 0x48))();
      return uVar13;
    }
    plVar11 = plRam0000000003d2fbd8;
    lVar22 = func_0x00f78af4(0,auVar28._8_8_);
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01ed780c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(plVar11[3] + 0xc0) + 0x60))();
      return uVar13;
    }
    plVar9 = (long *)func_0x00f78af4();
    ppuStack_60 = (undefined1 **)0x3eb5000;
    plVar14 = param_3;
    plVar18 = plVar11;
    plStack_58 = param_1;
    if (plVar9 == (long *)0x0) {
code_r0x01ed78b8:
      func_0x00f78af4();
    }
    else {
      plVar14 = *(long **)(*(long *)(plVar11[3] + 0xc0) + 0x40);
      uStack_40 = (*(code *)*plVar14)();
      if ((int)(uint)uStack_40 < 0) {
        return 0;
      }
      plVar10 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar11[3] + 0xc0) + 0x68))();
      lVar22 = plVar9[3];
      param_1 = param_3;
      unaff_x21 = plVar9;
      unaff_x22 = plVar11;
      if (lVar22 == 0) goto code_r0x01ed78b8;
      if ((uint)uStack_40 < *(uint *)(lVar22 + 0x18)) {
        if (plVar10 != (long *)0x0) {
          uVar13 = (**(code **)(*plVar10 + 0x1b8))
                             (plVar10,*(undefined8 *)
                                       (lVar22 + (uStack_40 & 0xffffffff) * 0x18 + 0x30),param_3,
                              *(undefined8 *)(*plVar10 + 0x1c0));
          if ((uVar13 & 1) == 0) {
            return 0;
          }
          return 1;
        }
        goto code_r0x01ed78b8;
      }
    }
    auVar28._8_8_ = param_1;
    auVar28._0_8_ = uStack_40;
    uVar12 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar12,0);
    lVar22 = auVar27._0_8_;
    auStack_78._0_8_ =
         &
         System_Collections_Generic_Dictionary_object__object___System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove
    ;
    unaff_x29 = &puStack_80;
    param_3 = plVar14;
    param_4 = plVar18;
    puStack_80 = &stack0xffffffffffffffb0;
    if (lVar22 == 0) {
code_r0x01ed7994:
      func_0x00f78af4();
    }
    else {
      param_3 = *(long **)(*(long *)(plVar18[3] + 0xc0) + 0x40);
      unaff_x23 = (*(code *)*param_3)();
      if ((int)(uint)unaff_x23 < 0) {
        return 0;
      }
      plVar11 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar18[3] + 0xc0) + 0x68))();
      lVar21 = *(long *)(lVar22 + 0x18);
      unaff_x21 = plVar18;
      unaff_x22 = plVar14;
      auVar28 = auVar27;
      if (lVar21 == 0) goto code_r0x01ed7994;
      if ((uint)unaff_x23 < *(uint *)(lVar21 + 0x18)) {
        if (plVar11 != (long *)0x0) {
          uVar13 = (**(code **)(*plVar11 + 0x1b8))
                             (plVar11,*(undefined8 *)
                                       (lVar21 + (unaff_x23 & 0xffffffff) * 0x18 + 0x30),plVar14,
                              *(undefined8 *)(*plVar11 + 0x1c0));
          if ((int)uVar13 != 0) {
            (*(code *)**(undefined8 **)(*(long *)(plVar18[3] + 0xc0) + 0x80))(lVar22,auVar27._8_8_);
            return 1;
          }
          return uVar13;
        }
        goto code_r0x01ed7994;
      }
    }
    uVar12 = func_0x00f78b24();
    unaff_x30 = &System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear;
    auVar27 = func_0x00f78ac0(uVar12,0);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff50;
  }
  uVar13 = auVar27._0_8_;
  plVar11 = auVar28._0_8_;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar28;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (*(int *)(uVar13 + 0x20) < 1) {
    return uVar13;
  }
  lVar22 = *(long *)(uVar13 + 0x10);
  if (lVar22 != 0) {
    uVar19 = (ulong)*(uint *)(lVar22 + 0x18);
    lVar21 = (long)(int)*(uint *)(lVar22 + 0x18);
    if (lVar21 < 1) {
      lVar21 = 0;
    }
    if (uVar19 == 1 || 0x100000000 < (long)(uVar19 << 0x20)) {
      puVar23 = (undefined4 *)(lVar22 + 0x20);
      do {
        if (uVar19 == 0) {
          uVar12 = func_0x00f78b24(uVar13,auVar27._8_8_);
          func_0x00f78ac0(uVar12,0);
          goto code_r0x01ed7a40;
        }
        *puVar23 = 0xffffffff;
        uVar19 = uVar19 - 1;
        lVar21 = lVar21 + -1;
        puVar23 = puVar23 + 1;
      } while (lVar21 != 0);
    }
    uVar19 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar13 + 0x18),0,*(undefined4 *)(uVar13 + 0x20),0);
    *(undefined8 *)(uVar13 + 0x28) = 0xffffffff;
    *(undefined4 *)(uVar13 + 0x20) = 0;
    *(int *)(uVar13 + 0x24) = *(int *)(uVar13 + 0x24) + 1;
    return uVar19;
  }
code_r0x01ed7a40:
  lVar22 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) =
       &
       System_Collections_Generic_Dictionary_TabController_TabPanel__List_CharacterRepresentationViewBehaviour____ContainsKey
  ;
  if (lVar22 != 0) {
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x40))();
    return (ulong)(~uVar6 >> 0x1f);
  }
  auVar28 = func_0x00f78af4();
  plVar14 = auVar28._8_8_;
  lVar22 = auVar28._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x60) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x58) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x50) = plVar11;
  *(ulong *)((long)register0x00000008 + -0x48) = uVar13;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &System_Collections_Generic_Dictionary_object__object___ContainsValue;
  if (plVar14 != (long *)0x0) {
    unaff_x21 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x68))();
    iVar7 = *(int *)(lVar22 + 0x20);
    if (0 < iVar7) {
      unaff_x22 = (long *)0x0;
      unaff_x23 = 0;
      do {
        lVar21 = *(long *)(lVar22 + 0x18);
        plVar11 = plVar14;
        if (lVar21 == 0) goto code_r0x01ed7b80;
        if (*(uint *)(lVar21 + 0x18) <= unaff_x23) goto code_r0x01ed7b84;
        if (-1 < *(int *)((long)unaff_x22 + lVar21 + 0x20)) {
          if (unaff_x21 == (long *)0x0) goto code_r0x01ed7b80;
          param_4 = *(long **)(*unaff_x21 + 0x1c0);
          param_3 = plVar14;
          uVar13 = (**(code **)(*unaff_x21 + 0x1b8))
                             (unaff_x21,*(undefined8 *)((long)unaff_x22 + lVar21 + 0x30));
          if ((uVar13 & 1) != 0) {
            return 1;
          }
          iVar7 = *(int *)(lVar22 + 0x20);
        }
        unaff_x23 = unaff_x23 + 1;
        unaff_x22 = unaff_x22 + 3;
      } while ((long)unaff_x23 < (long)iVar7);
    }
    return 0;
  }
  uVar13 = (ulong)*(uint *)(lVar22 + 0x20);
  if ((int)*(uint *)(lVar22 + 0x20) < 1) {
    return 0;
  }
  lVar21 = *(long *)(lVar22 + 0x18);
  if (lVar21 == 0) {
code_r0x01ed7b80:
    func_0x00f78af4();
  }
  else {
    uVar19 = (ulong)*(uint *)(lVar21 + 0x18);
    plVar14 = (long *)(lVar21 + 0x30);
    while (uVar19 != 0) {
      if ((-1 < (int)plVar14[-2]) && (*plVar14 == 0)) {
        return 1;
      }
      uVar19 = uVar19 - 1;
      plVar14 = plVar14 + 3;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        return 0;
      }
    }
  }
code_r0x01ed7b84:
  uVar12 = func_0x00f78b24();
  auVar28 = func_0x00f78ac0(uVar12,0);
  plVar14 = auVar28._8_8_;
  lVar21 = auVar28._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0xa8) = unaff_x23;
  *(long **)((long)register0x00000008 + -0xa0) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x98) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x90) = plVar11;
  *(long *)((long)register0x00000008 + -0x88) = lVar22;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x78) =
       &System_Collections_Generic_Dictionary_object__object___CopyTo;
  if (plVar14 != (long *)0x0) {
    uVar6 = (uint)param_3;
    if (((int)uVar6 < 0) || ((int)plVar14[3] < (int)uVar6)) {
code_r0x01ed7c9c:
      *(uint *)((long)register0x00000008 + -0xd0) = uVar6;
      uVar12 = func_0x00f78a24(0x3d22910);
      uVar12 = func_0x00f78ae0(uVar12,(undefined1 *)((long)register0x00000008 + -0xd0));
      func_0x00f78a24(0x3d1fcf8);
      plVar14 = (long *)func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d79a60);
      uVar16 = func_0x00f78a24(0x3d6de28);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(plVar14,uVar15,uVar12,uVar16,0);
      uVar12 = func_0x00f78a24(0x3d2f688);
      func_0x00f78ac0(plVar14,uVar12);
    }
    else if (lVar21 != 0) {
      uVar13 = (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x90))(lVar21);
      if ((int)((int)plVar14[3] - uVar6) < (int)uVar13) {
        func_0x00f78a24(0x3d1fce8);
        uVar12 = func_0x00f78aec();
        uVar15 = func_0x00f78a24(0x3d6bc10);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar12,uVar15,0);
        goto code_r0x01ed7d80;
      }
      uVar1 = *(uint *)(lVar21 + 0x20);
      if ((int)uVar1 < 1) {
        return uVar13;
      }
      lVar22 = *(long *)(lVar21 + 0x18);
      if (lVar22 != 0) {
        uVar19 = 0;
        puVar17 = (undefined8 *)(lVar22 + 0x30);
        while (uVar6 = (uint)param_3, uVar19 < *(uint *)(lVar22 + 0x18)) {
          if (-1 < *(int *)(puVar17 + -2)) {
            uVar12 = puVar17[-1];
            uVar15 = *puVar17;
            *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
            *(undefined8 *)((long)register0x00000008 + -200) = 0;
            uVar13 = /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4((undefined1 *)((long)register0x00000008 + -0xd0),uVar12,uVar15,
                                     *(undefined8 *)(*(long *)(param_4[3] + 0xc0) + 0xa0));
            if (*(uint *)(plVar14 + 3) <= uVar6) break;
            param_3 = (long *)(ulong)(uVar6 + 1);
            lVar21 = *(long *)((long)register0x00000008 + -0xd0);
            plVar14[(long)(int)uVar6 * 2 + 5] = *(long *)((long)register0x00000008 + -200);
            plVar14[(long)(int)uVar6 * 2 + 4] = lVar21;
          }
          uVar19 = uVar19 + 1;
          puVar17 = puVar17 + 3;
          if (uVar1 == uVar19) {
            return uVar13;
          }
        }
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
        goto code_r0x01ed7c9c;
      }
    }
    func_0x00f78af4();
    plVar11 = plVar14;
  }
  func_0x00f78a24(0x3d1fcf0);
  uVar12 = func_0x00f78aec();
  uVar15 = func_0x00f78a24(0x3d77d18);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar12,uVar15,0);
  plVar14 = plVar11;
code_r0x01ed7d80:
  uVar15 = func_0x00f78a24(0x3d2f688);
  auVar28 = func_0x00f78ac0(uVar12,uVar15);
  *(long **)((long)register0x00000008 + -0xf0) = plVar14;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar12;
  *(undefined1 **)((long)register0x00000008 + -0xe0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0xd8) =
       &System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator;
  *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
  uVar13 = /*System.Collections.Generic.Dictionary.Enumerator<object, object>$$.ctor*/ func_0x01fd5da8((undefined1 *)((long)register0x00000008 + -0x120),auVar28._0_8_,2,
                           *(undefined8 *)(*(long *)(*(long *)(auVar28._8_8_ + 0x18) + 0xc0) + 0xb0)
                          );
  uVar12 = *(undefined8 *)((long)register0x00000008 + -0x120);
  uVar16 = *(undefined8 *)((long)register0x00000008 + -0x108);
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x110);
  extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x118);
  *extraout_x8 = uVar12;
  extraout_x8[3] = uVar16;
  extraout_x8[2] = uVar15;
  extraout_x8[4] = *(undefined8 *)((long)register0x00000008 + -0x100);
  return uVar13;
}



// ============================================================
// RVA: 0x163c8f4 | Core.Containers.PoolManager.AddPool
// ============================================================

ulong Core_Containers_PoolManager__AddPool
                (long param_1,undefined1 *param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  int extraout_w1;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *extraout_x8;
  long lVar22;
  undefined4 *puVar23;
  int *piVar24;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 **ppuStack_110;
  undefined *puStack_108;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb56e9 & 1) == 0) {
    func_0x00f78a20(0x3d2fbd8);
    bRam0000000003eb56e9 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    auVar27 = func_0x00f78af4();
    lVar19 = auVar27._8_8_;
    puStack_38 = &Core_Containers_PoolManager__RemovePool;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb56ea & 1) == 0) {
      func_0x00f78a20(0x3d2fbe8);
      bRam0000000003eb56ea = 1;
    }
    lVar9 = lRam0000000003d2fbe8;
    lVar10 = *(long *)(auVar27._0_8_ + 0x10);
    if (lVar10 == 0) {
      auVar27 = func_0x00f78af4();
      if ((bRam0000000003eb56eb & 1) == 0) {
        func_0x00f78a20(0x3d2fbf8);
        func_0x00f78a20(0x3d34e38);
        func_0x00f78a20(0x3d34e40);
        func_0x00f78a20(0x3d34e48);
        func_0x00f78a20(0x3d22450);
        func_0x00f78a20(0x3d421b8);
        bRam0000000003eb56eb = 1;
      }
      puStack_b8 = (undefined *)0x0;
      auStack_b0 = (undefined1  [8])0x0;
      plStack_a8 = (long *)0x0;
      lVar19 = *(long *)(auVar27._0_8_ + 0x10);
      if ((lVar19 == 0) || (lVar19 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, SchemaEntity>$$get_Values*/ func_0x01ed7608(lVar19,uRam0000000003d2fbf8), lVar19 == 0)) {
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar11 = (long *)___cxa_begin_catch();
          lVar19 = *plVar11;
          ___cxa_end_catch();
          uVar8 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$Dispose*/ func_0x01fd66cc(&puStack_b8,uRam0000000003eb5000);
          if (lVar19 == 0) {
            return uVar8;
          }
          func_0x00f78ac0(lVar19,0);
        }
        uVar8 = __Unwind_Resume();
        return uVar8;
      }
      /*System.Collections.Generic.Dictionary.ValueCollection<XmlQualifiedName, SchemaEntity>$$GetEnumerator*/ func_0x01ba1fec(&puStack_b8,lVar19,uRam0000000003d421b8);
      do {
        uVar8 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$MoveNext*/ func_0x01fd66d0(&puStack_b8,uRam0000000003d34e40);
        plVar11 = plStack_a8;
        if ((uVar8 & 1) == 0) {
          uVar8 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$Dispose*/ func_0x01fd66cc(&puStack_b8,uRam0000000003d34e38);
          return uVar8;
        }
        if (plStack_a8 == (long *)0x0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x163cb34);
          (*pcVar5)();
        }
        lVar19 = *plStack_a8;
        uVar8 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar8 != 0) {
          piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == /*Core.Containers.IPool_TypeInfo*/ lRam0000000003d22450) {
              puVar17 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
              goto code_r0x0163caf4;
            }
            piVar24 = piVar24 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar17 = (undefined8 *)func_0x00fac1f0(plStack_a8,/*Core.Containers.IPool_TypeInfo*/ lRam0000000003d22450,0);
code_r0x0163caf4:
        (*(code *)*puVar17)(plVar11,auVar27._8_8_,puVar17[1]);
      } while( true );
    }
    if (lVar19 != 0) {
      if (*(long *)(lVar10 + 0x10) == 0) {
        return 0;
      }
      plVar11 = *(long **)(lVar10 + 0x30);
      if (plVar11 == (long *)0x0) {
code_r0x01ed93c0:
        func_0x00f78af4();
      }
      else {
        lVar20 = *(long *)(*(long *)(*(long *)(lRam0000000003d2fbe8 + 0x18) + 0xc0) + 0xe0);
        if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar20);
        }
        lVar22 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar22 + 0x12a);
        if (uVar8 != 0) {
          piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == lVar20) {
              puVar17 = (undefined8 *)(lVar22 + (long)(*piVar24 + 1) * 0x10 + 0x138);
              goto code_r0x01ed9194;
            }
            piVar24 = piVar24 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar17 = (undefined8 *)func_0x00fac1f0(plVar11,lVar20,1);
code_r0x01ed9194:
        uVar6 = (*(code *)*puVar17)(plVar11,lVar19,puVar17[1]);
        lVar20 = *(long *)(lVar10 + 0x10);
        if (lVar20 == 0) goto code_r0x01ed93c0;
        uVar6 = uVar6 & 0x7fffffff;
        uVar1 = *(uint *)(lVar20 + 0x18);
        iVar7 = 0;
        if (uVar1 != 0) {
          iVar7 = (int)uVar6 / (int)uVar1;
        }
        uVar4 = uVar6 - iVar7 * uVar1;
        if (uVar4 < uVar1) {
          uVar1 = *(uint *)(lVar20 + (ulong)uVar4 * 4 + 0x20);
          if ((int)uVar1 < 0) {
            return 0;
          }
          lVar20 = *(long *)(lVar10 + 0x18);
          param_2 = (undefined1 *)0x18;
          uVar25 = 0xffffffff;
          while (lVar20 != 0) {
            if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x01ed93c4;
            uVar8 = (ulong)uVar1;
            if (*(uint *)(lVar20 + uVar8 * 0x18 + 0x20) == uVar6) {
              plVar11 = *(long **)(lVar10 + 0x30);
              if (plVar11 == (long *)0x0) break;
              uVar12 = *(undefined8 *)(lVar20 + uVar8 * 0x18 + 0x28);
              lVar20 = *(long *)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0xe0);
              if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar20);
              }
              lVar22 = *plVar11;
              uVar21 = (ulong)*(ushort *)(lVar22 + 0x12a);
              if (uVar21 != 0) {
                piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == lVar20) {
                    puVar17 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
                    goto code_r0x01ed9284;
                  }
                  piVar24 = piVar24 + 4;
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plVar11,lVar20,0);
code_r0x01ed9284:
              param_4 = puVar17[1];
              iVar7 = (*(code *)*puVar17)(plVar11,uVar12,lVar19);
              if (iVar7 != 0) {
                if ((int)uVar25 < 0) {
                  lVar19 = *(long *)(lVar10 + 0x18);
                  if (lVar19 == 0) break;
                  uVar6 = (uint)*(undefined8 *)(lVar19 + 0x18);
                  if (uVar6 <= uVar1) goto code_r0x01ed93c4;
                  lVar9 = *(long *)(lVar10 + 0x10);
                  if (lVar9 == 0) break;
                  if (*(uint *)(lVar9 + 0x18) <= uVar4) goto code_r0x01ed93c4;
                  *(undefined4 *)(lVar9 + (ulong)uVar4 * 4 + 0x20) =
                       *(undefined4 *)(lVar19 + uVar8 * 0x18 + 0x24);
                }
                else {
                  lVar19 = *(long *)(lVar10 + 0x18);
                  if (lVar19 == 0) break;
                  uVar6 = (uint)*(undefined8 *)(lVar19 + 0x18);
                  if ((uVar6 <= uVar1) || (uVar6 <= uVar25)) goto code_r0x01ed93c4;
                  *(undefined4 *)(lVar19 + 0x20 + (ulong)uVar25 * 0x18 + 4) =
                       *(undefined4 *)(lVar19 + 0x20 + uVar8 * 0x18 + 4);
                }
                if (uVar6 <= uVar1) goto code_r0x01ed93c4;
                lVar19 = lVar19 + uVar8 * 0x18;
                uVar3 = *(undefined4 *)(lVar10 + 0x28);
                *(undefined4 *)(lVar19 + 0x20) = 0xffffffff;
                *(undefined4 *)(lVar19 + 0x24) = uVar3;
                *(undefined8 *)(lVar19 + 0x28) = 0;
                lVar19 = *(long *)(lVar10 + 0x18);
                if (lVar19 == 0) break;
                if (uVar1 < *(uint *)(lVar19 + 0x18)) {
                  *(undefined8 *)(lVar19 + uVar8 * 0x18 + 0x30) = 0;
                  *(uint *)(lVar10 + 0x28) = uVar1;
                  *(int *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) + 1;
                  *(int *)(lVar10 + 0x24) = *(int *)(lVar10 + 0x24) + 1;
                  return 1;
                }
                goto code_r0x01ed93c4;
              }
              lVar20 = *(long *)(lVar10 + 0x18);
              if (lVar20 == 0) break;
            }
            if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x01ed93c4;
            uVar2 = *(uint *)(lVar20 + uVar8 * 0x18 + 0x24);
            uVar25 = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 < 0) {
              return 0;
            }
          }
          goto code_r0x01ed93c0;
        }
      }
code_r0x01ed93c4:
      uVar12 = func_0x00f78b24();
      func_0x00f78ac0(uVar12,0);
    }
    func_0x00f78a24(0x3d1fcf0);
    puVar16 = (undefined *)func_0x00f78aec();
    uVar12 = func_0x00f78a24(0x3d79fc0);
    puVar17 = (undefined8 *)0x0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(puVar16,uVar12);
    uVar12 = func_0x00f78a24(0x3d2f6b0);
    lVar19 = func_0x00f78ac0(puVar16,uVar12);
    plStack_a8 = (long *)&
                         System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue
    ;
    puStack_c0 = param_2;
    puStack_b8 = puVar16;
    auStack_b0 = (undefined1  [8])&puStack_40;
    if (lVar19 != 0) {
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x40))();
      if ((int)uVar6 < 0) {
        *puVar17 = 0;
code_r0x01ed9474:
        return (ulong)(~uVar6 >> 0x1f);
      }
      lVar19 = *(long *)(lVar19 + 0x18);
      if (lVar19 != 0) {
        if (uVar6 < *(uint *)(lVar19 + 0x18)) {
          *puVar17 = *(undefined8 *)(lVar19 + (ulong)uVar6 * 0x18 + 0x30);
          goto code_r0x01ed9474;
        }
        goto code_r0x01ed948c;
      }
    }
    func_0x00f78af4();
code_r0x01ed948c:
    uVar12 = func_0x00f78b24();
    lVar19 = func_0x00f78ac0(uVar12,0);
    puStack_c8 = &System_Collections_Generic_Dictionary_object__object___TryAdd;
    puStack_d0 = (undefined8 *)auStack_b0;
    if (lVar19 == 0) {
      func_0x00f78af4();
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x01ed94bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x48))();
    return uVar8;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01ed77e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(lRam0000000003d2fbd8 + 0x18) + 0xc0) + 0x48))();
    return uVar8;
  }
  lVar19 = lRam0000000003d2fbd8;
  lVar9 = func_0x00f78af4(0,param_2);
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01ed780c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar19 + 0x18) + 0xc0) + 0x60))();
    return uVar8;
  }
  lVar10 = func_0x00f78af4();
  puVar17 = param_3;
  lVar9 = lVar19;
  if (lVar10 == 0) {
code_r0x01ed78b8:
    func_0x00f78af4();
  }
  else {
    puVar17 = *(undefined8 **)(*(long *)(*(long *)(lVar19 + 0x18) + 0xc0) + 0x40);
    unaff_x20 = (*(code *)*puVar17)();
    if ((int)(uint)unaff_x20 < 0) {
      return 0;
    }
    plVar11 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar19 + 0x18) + 0xc0) + 0x68)
                      )();
    lVar19 = *(long *)(lVar10 + 0x18);
    unaff_x19 = param_3;
    if (lVar19 == 0) goto code_r0x01ed78b8;
    if ((uint)unaff_x20 < *(uint *)(lVar19 + 0x18)) {
      if (plVar11 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar11 + 0x1b8))
                          (plVar11,*(undefined8 *)(lVar19 + (unaff_x20 & 0xffffffff) * 0x18 + 0x30),
                           param_3,*(undefined8 *)(*plVar11 + 0x1c0));
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        return 1;
      }
      goto code_r0x01ed78b8;
    }
  }
  auVar27._8_8_ = unaff_x19;
  auVar27._0_8_ = unaff_x20;
  uVar12 = func_0x00f78b24();
  auVar26 = func_0x00f78ac0(uVar12,0);
  lVar10 = auVar26._0_8_;
  puVar18 = puVar17;
  lVar19 = lVar9;
  if (lVar10 == 0) {
code_r0x01ed7994:
    func_0x00f78af4();
  }
  else {
    puVar18 = *(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x40);
    uVar6 = (*(code *)*puVar18)();
    if ((int)uVar6 < 0) {
      return 0;
    }
    plVar11 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x68))
                                ();
    lVar20 = *(long *)(lVar10 + 0x18);
    auVar27 = auVar26;
    if (lVar20 == 0) goto code_r0x01ed7994;
    if (uVar6 < *(uint *)(lVar20 + 0x18)) {
      if (plVar11 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar11 + 0x1b8))
                          (plVar11,*(undefined8 *)(lVar20 + (ulong)uVar6 * 0x18 + 0x30),puVar17,
                           *(undefined8 *)(*plVar11 + 0x1c0));
        if ((int)uVar8 != 0) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x80))
                    (lVar10,auVar26._8_8_);
          return 1;
        }
        return uVar8;
      }
      goto code_r0x01ed7994;
    }
  }
  puVar17 = auVar27._0_8_;
  uVar12 = func_0x00f78b24();
  uVar8 = func_0x00f78ac0(uVar12,0);
  if (*(int *)(uVar8 + 0x20) < 1) {
    return uVar8;
  }
  lVar9 = *(long *)(uVar8 + 0x10);
  _auStack_b0 = auVar27;
  if (lVar9 != 0) {
    uVar21 = (ulong)*(uint *)(lVar9 + 0x18);
    lVar10 = (long)(int)*(uint *)(lVar9 + 0x18);
    if (lVar10 < 1) {
      lVar10 = 0;
    }
    if (uVar21 == 1 || 0x100000000 < (long)(uVar21 << 0x20)) {
      puVar23 = (undefined4 *)(lVar9 + 0x20);
      do {
        if (uVar21 == 0) {
          uVar12 = func_0x00f78b24();
          func_0x00f78ac0(uVar12,0);
          goto code_r0x01ed7a40;
        }
        *puVar23 = 0xffffffff;
        uVar21 = uVar21 - 1;
        lVar10 = lVar10 + -1;
        puVar23 = puVar23 + 1;
      } while (lVar10 != 0);
    }
    uVar21 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar8 + 0x18),0,*(undefined4 *)(uVar8 + 0x20),0);
    *(undefined8 *)(uVar8 + 0x28) = 0xffffffff;
    *(undefined4 *)(uVar8 + 0x20) = 0;
    *(int *)(uVar8 + 0x24) = *(int *)(uVar8 + 0x24) + 1;
    return uVar21;
  }
code_r0x01ed7a40:
  lVar9 = func_0x00f78af4();
  puStack_b8 = &
               System_Collections_Generic_Dictionary_TabController_TabPanel__List_CharacterRepresentationViewBehaviour____ContainsKey
  ;
  puStack_c0 = &stack0xffffffffffffff60;
  if (lVar9 != 0) {
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x40))();
    return (ulong)(~uVar6 >> 0x1f);
  }
  auVar27 = func_0x00f78af4();
  puVar13 = auVar27._8_8_;
  lVar9 = auVar27._0_8_;
  puStack_c8 = &System_Collections_Generic_Dictionary_object__object___ContainsValue;
  if (puVar13 != (undefined8 *)0x0) {
    puStack_d0 = &puStack_c0;
    plVar11 = (long *)(*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x68))();
    iVar7 = *(int *)(lVar9 + 0x20);
    if (0 < iVar7) {
      lVar10 = 0;
      uVar8 = 0;
      do {
        lVar20 = *(long *)(lVar9 + 0x18);
        puVar17 = puVar13;
        if (lVar20 == 0) goto code_r0x01ed7b80;
        if (*(uint *)(lVar20 + 0x18) <= uVar8) goto code_r0x01ed7b84;
        if (-1 < *(int *)(lVar20 + lVar10 + 0x20)) {
          if (plVar11 == (long *)0x0) goto code_r0x01ed7b80;
          lVar19 = *(long *)(*plVar11 + 0x1c0);
          puVar18 = puVar13;
          uVar21 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(lVar20 + lVar10 + 0x30));
          if ((uVar21 & 1) != 0) {
            return 1;
          }
          iVar7 = *(int *)(lVar9 + 0x20);
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x18;
      } while ((long)uVar8 < (long)iVar7);
    }
    return 0;
  }
  uVar8 = (ulong)*(uint *)(lVar9 + 0x20);
  if ((int)*(uint *)(lVar9 + 0x20) < 1) {
    return 0;
  }
  lVar9 = *(long *)(lVar9 + 0x18);
  puStack_d0 = &puStack_c0;
  if (lVar9 == 0) {
code_r0x01ed7b80:
    func_0x00f78af4();
  }
  else {
    uVar21 = (ulong)*(uint *)(lVar9 + 0x18);
    plVar11 = (long *)(lVar9 + 0x30);
    while (puStack_d0 = &puStack_c0, uVar21 != 0) {
      if ((-1 < (int)plVar11[-2]) && (*plVar11 == 0)) {
        return 1;
      }
      uVar21 = uVar21 - 1;
      plVar11 = plVar11 + 3;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return 0;
      }
    }
  }
code_r0x01ed7b84:
  uVar12 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar12,0);
  puVar13 = auVar27._8_8_;
  lVar9 = auVar27._0_8_;
  puStack_108 = &System_Collections_Generic_Dictionary_object__object___CopyTo;
  ppuStack_110 = &puStack_d0;
  if (puVar13 != (undefined8 *)0x0) {
    uVar6 = (uint)puVar18;
    if (((int)uVar6 < 0) || (*(int *)(puVar13 + 3) < (int)uVar6)) {
code_r0x01ed7c9c:
      uStack_160 = CONCAT44(uStack_160._4_4_,uVar6);
      uVar12 = func_0x00f78a24(0x3d22910);
      uVar12 = func_0x00f78ae0(uVar12,&uStack_160);
      func_0x00f78a24(0x3d1fcf8);
      puVar13 = (undefined8 *)func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d79a60);
      uVar15 = func_0x00f78a24(0x3d6de28);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(puVar13,uVar14,uVar12,uVar15,0);
      uVar12 = func_0x00f78a24(0x3d2f688);
      func_0x00f78ac0(puVar13,uVar12);
    }
    else if (lVar9 != 0) {
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar19 + 0x18) + 0xc0) + 0x90))(lVar9)
      ;
      if ((int)(*(int *)(puVar13 + 3) - uVar6) < (int)uVar8) {
        func_0x00f78a24(0x3d1fce8);
        uVar12 = func_0x00f78aec();
        uVar14 = func_0x00f78a24(0x3d6bc10);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar12,uVar14,0);
        goto code_r0x01ed7d80;
      }
      uVar1 = *(uint *)(lVar9 + 0x20);
      if ((int)uVar1 < 1) {
        return uVar8;
      }
      lVar9 = *(long *)(lVar9 + 0x18);
      if (lVar9 != 0) {
        uVar21 = 0;
        puVar17 = (undefined8 *)(lVar9 + 0x30);
        while (uVar6 = (uint)puVar18, uVar21 < *(uint *)(lVar9 + 0x18)) {
          if (-1 < *(int *)(puVar17 + -2)) {
            uStack_160 = 0;
            uStack_158 = 0;
            uVar8 = /*System.Collections.Generic.KeyValuePair<Type, XmlRootAttribute>$$.ctor*/ func_0x023185d4(&uStack_160,puVar17[-1],*puVar17,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(lVar19 + 0x18) + 0xc0) + 0xa0));
            if (*(uint *)(puVar13 + 3) <= uVar6) break;
            puVar18 = (undefined8 *)(ulong)(uVar6 + 1);
            puVar13[(long)(int)uVar6 * 2 + 5] = uStack_158;
            puVar13[(long)(int)uVar6 * 2 + 4] = uStack_160;
          }
          uVar21 = uVar21 + 1;
          puVar17 = puVar17 + 3;
          if (uVar1 == uVar21) {
            return uVar8;
          }
        }
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
        goto code_r0x01ed7c9c;
      }
    }
    func_0x00f78af4();
    puVar17 = puVar13;
  }
  func_0x00f78a24(0x3d1fcf0);
  uVar12 = func_0x00f78aec();
  uVar14 = func_0x00f78a24(0x3d77d18);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar12,uVar14,0);
  puVar13 = puVar17;
code_r0x01ed7d80:
  uVar14 = func_0x00f78a24(0x3d2f688);
  auVar27 = func_0x00f78ac0(uVar12,uVar14);
  puStack_168 = &
                System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator
  ;
  uStack_190 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  puStack_180 = puVar13;
  uStack_178 = uVar12;
  pppuStack_170 = &ppuStack_110;
  uVar8 = /*System.Collections.Generic.Dictionary.Enumerator<object, object>$$.ctor*/ func_0x01fd5da8(&uStack_1b0,auVar27._0_8_,2,
                          *(undefined8 *)(*(long *)(*(long *)(auVar27._8_8_ + 0x18) + 0xc0) + 0xb0))
  ;
  extraout_x8[1] = uStack_1a8;
  *extraout_x8 = uStack_1b0;
  extraout_x8[3] = uStack_198;
  extraout_x8[2] = uStack_1a0;
  extraout_x8[4] = uStack_190;
  return uVar8;
}



// ============================================================
// RVA: 0x163c960 | Core.Containers.PoolManager.RemovePool
// ============================================================

ulong Core_Containers_PoolManager__RemovePool
                (long param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int extraout_w1;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_88;
  undefined1 *puStack_80;
  long *plStack_78;
  
  if ((bRam0000000003eb56ea & 1) == 0) {
    func_0x00f78a20(0x3d2fbe8);
    bRam0000000003eb56ea = 1;
  }
  lVar11 = lRam0000000003d2fbe8;
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    auVar20 = func_0x00f78af4();
    if ((bRam0000000003eb56eb & 1) == 0) {
      func_0x00f78a20(0x3d2fbf8);
      func_0x00f78a20(0x3d34e38);
      func_0x00f78a20(0x3d34e40);
      func_0x00f78a20(0x3d34e48);
      func_0x00f78a20(0x3d22450);
      func_0x00f78a20(0x3d421b8);
      bRam0000000003eb56eb = 1;
    }
    uStack_88 = 0;
    puStack_80 = (undefined1 *)0x0;
    plStack_78 = (long *)0x0;
    lVar11 = *(long *)(auVar20._0_8_ + 0x10);
    if ((lVar11 == 0) || (lVar11 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, SchemaEntity>$$get_Values*/ func_0x01ed7608(lVar11,uRam0000000003d2fbf8), lVar11 == 0)) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar16 = (long *)___cxa_begin_catch();
        lVar11 = *plVar16;
        ___cxa_end_catch();
        uVar13 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$Dispose*/ func_0x01fd66cc(&uStack_88,uRam0000000003eb5000);
        if (lVar11 == 0) {
          return uVar13;
        }
        func_0x00f78ac0(lVar11,0);
      }
      uVar13 = __Unwind_Resume();
      return uVar13;
    }
    /*System.Collections.Generic.Dictionary.ValueCollection<XmlQualifiedName, SchemaEntity>$$GetEnumerator*/ func_0x01ba1fec(&uStack_88,lVar11,uRam0000000003d421b8);
    do {
      uVar13 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$MoveNext*/ func_0x01fd66d0(&uStack_88,uRam0000000003d34e40);
      plVar16 = plStack_78;
      if ((uVar13 & 1) == 0) {
        uVar13 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$Dispose*/ func_0x01fd66cc(&uStack_88,uRam0000000003d34e38);
        return uVar13;
      }
      if (plStack_78 == (long *)0x0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x163cb34);
        (*pcVar5)();
      }
      lVar11 = *plStack_78;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == /*Core.Containers.IPool_TypeInfo*/ lRam0000000003d22450) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto code_r0x0163caf4;
          }
          piVar15 = piVar15 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)func_0x00fac1f0(plStack_78,/*Core.Containers.IPool_TypeInfo*/ lRam0000000003d22450,0);
code_r0x0163caf4:
      (*(code *)*puVar9)(plVar16,auVar20._8_8_,puVar9[1]);
    } while( true );
  }
  if (param_2 != 0) {
    if (*(long *)(lVar8 + 0x10) == 0) {
      return 0;
    }
    plVar16 = *(long **)(lVar8 + 0x30);
    if (plVar16 == (long *)0x0) {
code_r0x01ed93c0:
      func_0x00f78af4();
    }
    else {
      lVar17 = *(long *)(*(long *)(*(long *)(lRam0000000003d2fbe8 + 0x18) + 0xc0) + 0xe0);
      if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar17);
      }
      lVar12 = *plVar16;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar17) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
            goto code_r0x01ed9194;
          }
          piVar15 = piVar15 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)func_0x00fac1f0(plVar16,lVar17,1);
code_r0x01ed9194:
      uVar6 = (*(code *)*puVar9)(plVar16,param_2,puVar9[1]);
      lVar17 = *(long *)(lVar8 + 0x10);
      if (lVar17 == 0) goto code_r0x01ed93c0;
      uVar6 = uVar6 & 0x7fffffff;
      uVar1 = *(uint *)(lVar17 + 0x18);
      iVar7 = 0;
      if (uVar1 != 0) {
        iVar7 = (int)uVar6 / (int)uVar1;
      }
      uVar4 = uVar6 - iVar7 * uVar1;
      if (uVar4 < uVar1) {
        uVar1 = *(uint *)(lVar17 + (ulong)uVar4 * 4 + 0x20);
        if ((int)uVar1 < 0) {
          return 0;
        }
        lVar17 = *(long *)(lVar8 + 0x18);
        uVar19 = 0xffffffff;
        while (lVar17 != 0) {
          if (*(uint *)(lVar17 + 0x18) <= uVar1) goto code_r0x01ed93c4;
          uVar13 = (ulong)uVar1;
          if (*(uint *)(lVar17 + uVar13 * 0x18 + 0x20) == uVar6) {
            plVar16 = *(long **)(lVar8 + 0x30);
            if (plVar16 == (long *)0x0) break;
            uVar18 = *(undefined8 *)(lVar17 + uVar13 * 0x18 + 0x28);
            lVar17 = *(long *)(*(long *)(*(long *)(lVar11 + 0x18) + 0xc0) + 0xe0);
            if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar17);
            }
            lVar12 = *plVar16;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar17) {
                  puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x01ed9284;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar16,lVar17,0);
code_r0x01ed9284:
            param_4 = puVar9[1];
            iVar7 = (*(code *)*puVar9)(plVar16,uVar18,param_2);
            if (iVar7 != 0) {
              if ((int)uVar19 < 0) {
                lVar11 = *(long *)(lVar8 + 0x18);
                if (lVar11 == 0) break;
                uVar6 = (uint)*(undefined8 *)(lVar11 + 0x18);
                if (uVar6 <= uVar1) goto code_r0x01ed93c4;
                lVar17 = *(long *)(lVar8 + 0x10);
                if (lVar17 == 0) break;
                if (*(uint *)(lVar17 + 0x18) <= uVar4) goto code_r0x01ed93c4;
                *(undefined4 *)(lVar17 + (ulong)uVar4 * 4 + 0x20) =
                     *(undefined4 *)(lVar11 + uVar13 * 0x18 + 0x24);
              }
              else {
                lVar11 = *(long *)(lVar8 + 0x18);
                if (lVar11 == 0) break;
                uVar6 = (uint)*(undefined8 *)(lVar11 + 0x18);
                if ((uVar6 <= uVar1) || (uVar6 <= uVar19)) goto code_r0x01ed93c4;
                *(undefined4 *)(lVar11 + 0x20 + (ulong)uVar19 * 0x18 + 4) =
                     *(undefined4 *)(lVar11 + 0x20 + uVar13 * 0x18 + 4);
              }
              if (uVar6 <= uVar1) goto code_r0x01ed93c4;
              lVar11 = lVar11 + uVar13 * 0x18;
              uVar3 = *(undefined4 *)(lVar8 + 0x28);
              *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
              *(undefined4 *)(lVar11 + 0x24) = uVar3;
              *(undefined8 *)(lVar11 + 0x28) = 0;
              lVar11 = *(long *)(lVar8 + 0x18);
              if (lVar11 == 0) break;
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(undefined8 *)(lVar11 + uVar13 * 0x18 + 0x30) = 0;
                *(uint *)(lVar8 + 0x28) = uVar1;
                *(int *)(lVar8 + 0x2c) = *(int *)(lVar8 + 0x2c) + 1;
                *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
                return 1;
              }
              goto code_r0x01ed93c4;
            }
            lVar17 = *(long *)(lVar8 + 0x18);
            if (lVar17 == 0) break;
          }
          if (*(uint *)(lVar17 + 0x18) <= uVar1) goto code_r0x01ed93c4;
          uVar2 = *(uint *)(lVar17 + uVar13 * 0x18 + 0x24);
          uVar19 = uVar1;
          uVar1 = uVar2;
          if ((int)uVar2 < 0) {
            return 0;
          }
        }
        goto code_r0x01ed93c0;
      }
    }
code_r0x01ed93c4:
    uVar18 = func_0x00f78b24();
    func_0x00f78ac0(uVar18,0);
  }
  func_0x00f78a24(0x3d1fcf0);
  uVar18 = func_0x00f78aec();
  uVar10 = func_0x00f78a24(0x3d79fc0);
  puVar9 = (undefined8 *)0x0;
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar18,uVar10);
  uVar10 = func_0x00f78a24(0x3d2f6b0);
  lVar11 = func_0x00f78ac0(uVar18,uVar10);
  plStack_78 = (long *)&
                       System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue
  ;
  uStack_88 = uVar18;
  puStack_80 = &stack0xfffffffffffffff0;
  if (lVar11 != 0) {
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x40))();
    if ((int)uVar6 < 0) {
      *puVar9 = 0;
code_r0x01ed9474:
      return (ulong)(~uVar6 >> 0x1f);
    }
    lVar11 = *(long *)(lVar11 + 0x18);
    if (lVar11 != 0) {
      if (uVar6 < *(uint *)(lVar11 + 0x18)) {
        *puVar9 = *(undefined8 *)(lVar11 + (ulong)uVar6 * 0x18 + 0x30);
        goto code_r0x01ed9474;
      }
      goto code_r0x01ed948c;
    }
  }
  func_0x00f78af4();
code_r0x01ed948c:
  uVar18 = func_0x00f78b24();
  lVar11 = func_0x00f78ac0(uVar18,0);
  if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01ed94bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x48))();
    return uVar13;
  }
  func_0x00f78af4();
  return 0;
}



// ============================================================
// RVA: 0x163c9c4 | Core.Containers.PoolManager.Update
// ============================================================

void Core_Containers_PoolManager__Update(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w1;
  int *piVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  if ((bRam0000000003eb56eb & 1) == 0) {
    func_0x00f78a20(0x3d2fbf8);
    func_0x00f78a20(0x3d34e38);
    func_0x00f78a20(0x3d34e40);
    func_0x00f78a20(0x3d34e48);
    func_0x00f78a20(0x3d22450);
    func_0x00f78a20(0x3d421b8);
    bRam0000000003eb56eb = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar2 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, SchemaEntity>$$get_Values*/ func_0x01ed7608(*(long *)(param_1 + 0x10),uRam0000000003d2fbf8), lVar2 == 0)) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar5 = (long *)___cxa_begin_catch();
      lVar2 = *plVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$Dispose*/ func_0x01fd66cc(&uStack_58,uRam0000000003eb5000);
      if (lVar2 == 0) {
        return;
      }
      func_0x00f78ac0(lVar2,0);
    }
    __Unwind_Resume();
    return;
  }
  /*System.Collections.Generic.Dictionary.ValueCollection<XmlQualifiedName, SchemaEntity>$$GetEnumerator*/ func_0x01ba1fec(&uStack_58,lVar2,uRam0000000003d421b8);
  do {
    uVar3 = /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$MoveNext*/ func_0x01fd66d0(&uStack_58,uRam0000000003d34e40);
    plVar5 = plStack_48;
    if ((uVar3 & 1) == 0) {
      /*System.Collections.Generic.Dictionary.ValueCollection.Enumerator<XmlQualifiedName, SchemaEntity>$$Dispose*/ func_0x01fd66cc(&uStack_58,uRam0000000003d34e38);
      return;
    }
    if (plStack_48 == (long *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x163cb34);
      (*pcVar1)();
    }
    lVar2 = *plStack_48;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == /*Core.Containers.IPool_TypeInfo*/ lRam0000000003d22450) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0163caf4;
        }
        piVar6 = piVar6 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(plStack_48,/*Core.Containers.IPool_TypeInfo*/ lRam0000000003d22450,0);
LAB_0163caf4:
    (*(code *)*puVar4)(plVar5,param_2,puVar4[1]);
  } while( true );
}



// ============================================================
// RVA: 0x163cb74 | Core.Containers.PoolManager..ctor
// ============================================================

void Core_Containers_PoolManager___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x18bc284 | Core.Containers.PoolManager.AcquireObject<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc32c | Core.Containers.PoolManager.AcquireObject<VFXBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc32c | Core.Containers.PoolManager.AcquireObject<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc3e0 | Core.Containers.PoolManager.AcquireTimedObject<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc498 | Core.Containers.PoolManager.AcquireTimedObject<VFXBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc498 | Core.Containers.PoolManager.AcquireTimedObject<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc564 | Core.Containers.PoolManager.DeInitAndRemovePool<BoostUsableBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc564 | Core.Containers.PoolManager.DeInitAndRemovePool<GoldenTurdProjectileBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc564 | Core.Containers.PoolManager.DeInitAndRemovePool<NormalShieldUsableBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc564 | Core.Containers.PoolManager.DeInitAndRemovePool<PlacementHomingProjectileBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc564 | Core.Containers.PoolManager.DeInitAndRemovePool<PortalVFXBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc564 | Core.Containers.PoolManager.DeInitAndRemovePool<ProximityHomingProjectileBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc564 | Core.Containers.PoolManager.DeInitAndRemovePool<RicochetProjectileBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc564 | Core.Containers.PoolManager.DeInitAndRemovePool<SatelliteUsableBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc564 | Core.Containers.PoolManager.DeInitAndRemovePool<SuperShieldUsableBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc564 | Core.Containers.PoolManager.DeInitAndRemovePool<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc60c | Core.Containers.PoolManager.DeInitAndRemovePool<VFXBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc60c | Core.Containers.PoolManager.DeInitAndRemovePool<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc6d8 | Core.Containers.PoolManager.GetGameObjectPool<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc780 | Core.Containers.PoolManager.GetGameObjectPool<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc7a4 | Core.Containers.PoolManager.GetObjectPool<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc84c | Core.Containers.PoolManager.GetObjectPool<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc870 | Core.Containers.PoolManager.GetPool<BoostUsableBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc870 | Core.Containers.PoolManager.GetPool<GoldenTurdProjectileBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc870 | Core.Containers.PoolManager.GetPool<NormalShieldUsableBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc870 | Core.Containers.PoolManager.GetPool<PlacementHomingProjectileBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc870 | Core.Containers.PoolManager.GetPool<ProximityHomingProjectileBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc870 | Core.Containers.PoolManager.GetPool<RicochetProjectileBehaviour>
// ============================================================

ulong Core_Containers_PoolManager__GetPool_BoostUsableBehaviour_
                (long param_1,long param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long **pplVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 uVar20;
  long **pplVar21;
  long lVar22;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  undefined8 uStack_688;
  undefined8 ***pppuStack_680;
  undefined *puStack_678;
  ulong uStack_668;
  long lStack_660;
  long **pplStack_658;
  undefined1 auStack_650 [16];
  undefined8 ***pppuStack_640;
  undefined *puStack_638;
  long lStack_630;
  long **pplStack_628;
  undefined1 auStack_620 [16];
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  undefined8 ***pppuStack_5d0;
  code *pcStack_5c8;
  ulong uStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_590;
  undefined8 uStack_588;
  undefined8 ***pppuStack_580;
  code *pcStack_578;
  long lStack_570;
  long lStack_568;
  undefined8 ***pppuStack_560;
  code *pcStack_558;
  long lStack_550;
  long **pplStack_548;
  undefined1 auStack_540 [16];
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  long lStack_520;
  long **pplStack_518;
  undefined1 auStack_510 [16];
  undefined8 ***pppuStack_500;
  code *pcStack_4f8;
  undefined8 ***pppuStack_4c0;
  code *pcStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  long **pplStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 ***pppuStack_460;
  code *pcStack_458;
  long *plStack_448;
  undefined8 uStack_440;
  long **pplStack_438;
  long lStack_430;
  long lStack_428;
  undefined1 ***pppuStack_420;
  undefined *puStack_418;
  undefined1 auStack_410 [16];
  long **pplStack_400;
  long **pplStack_3f8;
  undefined1 **ppuStack_3f0;
  undefined *puStack_3e8;
  long lStack_3d8;
  undefined1 *puStack_3a0;
  undefined *puStack_398;
  undefined1 **ppuStack_390;
  undefined *puStack_388;
  undefined1 *puStack_350;
  undefined *puStack_348;
  undefined1 **ppuStack_340;
  undefined *puStack_338;
  undefined1 *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  undefined *puStack_2e8;
  undefined8 ***pppuStack_2b0;
  undefined *puStack_2a8;
  long *plStack_298;
  undefined8 ***pppuStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  long *plStack_1f8;
  long lStack_1f0;
  long **pplStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 ***pppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 ***pppuStack_190;
  undefined *puStack_188;
  long *plStack_178;
  undefined8 ***pppuStack_140;
  undefined *puStack_138;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  long *plStack_d8;
  long lStack_d0;
  long **pplStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  ulong uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65d1 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d1 = 1;
  }
  uVar20 = **(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar20,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar20 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), param_1 != 0
     )) {
                    /* WARNING: Could not recover jumptable at 0x018bc910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar20);
    return uVar7;
  }
  lVar8 = func_0x00f78af4();
  puStack_38 = &Core_Containers_PoolManager__GetPool_object_;
  puStack_40 = &stack0xfffffffffffffff0;
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bc934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)*param_3[6])();
    return uVar7;
  }
  auVar23 = func_0x00f78af4();
  puStack_48 = &Core_Containers_PoolManager__GetPoolImpl_object_;
  uStack_58 = 0;
  if (auVar23._0_8_ != 0) {
    puStack_50 = (undefined1 *)&puStack_40;
    iVar5 = (**(code **)*param_3[6])(auVar23._0_8_,auVar23._8_8_,&uStack_58);
    if (iVar5 == 0) {
      uStack_58 = 0;
    }
    return uStack_58;
  }
  puStack_50 = (undefined1 *)&puStack_40;
  auVar23 = func_0x00f78af4();
  puStack_68 = &Core_Containers_PoolManager__ReturnObject_PortalVFXBehaviour_;
  pplVar21 = param_3;
  ppuStack_70 = &puStack_50;
  if ((bRam0000000003eb65d2 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d2 = 1;
  }
  lVar8 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar8,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar20 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bca30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)param_3[6][1])(auVar23._0_8_,uVar20,auVar23._8_8_);
    return uVar7;
  }
  lVar9 = func_0x00f78af4();
  puStack_a8 = &Core_Containers_PoolManager__ReturnObject_object_;
  plStack_d8 = (long *)0x0;
  pplVar14 = pplVar21;
  pplVar15 = param_4;
  lStack_d0 = lVar8;
  pplStack_c8 = param_3;
  pppuStack_b0 = &ppuStack_70;
  auStack_c0 = auVar23;
  if (lVar9 != 0) {
    pplVar15 = (long **)*param_4[6];
    pplVar14 = &plStack_d8;
    uVar7 = (*(code *)*pplVar15)();
    plVar6 = plStack_d8;
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (plStack_d8 != (long *)0x0) {
      lVar8 = param_4[6][1];
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar9 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar7 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 4) * 0x10 + 0x138);
            goto code_r0x018bcae4;
          }
          piVar19 = piVar19 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar8,4);
code_r0x018bcae4:
      uVar7 = (*(code *)*puVar10)(plVar6,pplVar21,puVar10[1]);
      return uVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_e8 = &Core_Containers_PoolManager__ReturnObjectAtTime_object_;
  pplVar21 = pplVar14;
  pppuStack_f0 = &pppuStack_b0;
  if ((bRam0000000003eb65d3 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d3 = 1;
  }
  lVar9 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar9,0);
  if (plVar6 != (long *)0x0) {
    uVar20 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bcbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)pplVar14[6][1])(extraout_s0,lVar8,uVar20,extraout_x1);
      return uVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_138 = &Core_Containers_PoolManager__ReturnObjectAtTime_VFXBehaviour_;
  plStack_178 = (long *)0x0;
  pplVar14 = pplVar21;
  pplVar16 = pplVar15;
  pppuStack_140 = &pppuStack_f0;
  if (lVar8 != 0) {
    pplVar16 = (long **)*pplVar15[6];
    pplVar14 = &plStack_178;
    uVar7 = (*(code *)*pplVar16)();
    plVar6 = plStack_178;
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (plStack_178 != (long *)0x0) {
      lVar8 = pplVar15[6][1];
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar9 = *plVar6;
      uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 5) * 0x10 + 0x138);
            goto code_r0x018bcc8c;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar8,5);
code_r0x018bcc8c:
      (*(code *)*puVar10)(extraout_s0_00,plVar6,pplVar21,puVar10[1]);
      return uVar7;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_188 = &Core_Containers_PoolManager__TryAcquireObject_SuperShieldUsableBehaviour_;
  pplVar21 = pplVar14;
  pppuStack_190 = &pppuStack_140;
  if ((bRam0000000003eb65d4 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d4 = 1;
  }
  lVar8 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar8,0);
  if (plVar6 != (long *)0x0) {
    uVar20 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar20,auVar23._8_8_);
      return uVar7;
    }
  }
  lVar9 = func_0x00f78af4();
  puStack_1c8 = &Core_Containers_PoolManager__TryAcquireObject_object_;
  plStack_1f8 = (long *)0x0;
  pplVar15 = pplVar21;
  pplVar17 = pplVar16;
  lStack_1f0 = lVar8;
  pplStack_1e8 = pplVar14;
  pppuStack_1d0 = &pppuStack_190;
  auStack_1e0 = auVar23;
  if (lVar9 != 0) {
    pplVar17 = (long **)*pplVar16[6];
    pplVar15 = &plStack_1f8;
    iVar5 = (*(code *)*pplVar17)();
    plVar6 = plStack_1f8;
    if (iVar5 == 0) {
code_r0x018bce40:
      *pplVar21 = (long *)0x0;
      return 0;
    }
    if (plStack_1f8 != (long *)0x0) {
      lVar8 = pplVar16[6][1];
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar9 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar7 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto code_r0x018bce24;
          }
          piVar19 = piVar19 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar8,2);
code_r0x018bce24:
      uVar7 = (*(code *)*puVar10)(plVar6,pplVar21,puVar10[1]);
      if ((uVar7 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bce40;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_208 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  pplVar21 = pplVar15;
  pppuStack_210 = &pppuStack_1d0;
  if ((bRam0000000003eb65d5 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d5 = 1;
  }
  lVar9 = *pplVar15[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar9,0);
  if (plVar6 != (long *)0x0) {
    uVar20 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bcf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)pplVar15[6][1])(extraout_s0_01,lVar8,uVar20,extraout_x1_00);
      return uVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_258 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  plStack_298 = (long *)0x0;
  pplVar14 = pplVar21;
  pplVar15 = pplVar17;
  pppuStack_260 = &pppuStack_210;
  if (lVar8 != 0) {
    pplVar15 = (long **)*pplVar17[6];
    pplVar14 = &plStack_298;
    iVar5 = (*(code *)*pplVar15)();
    plVar6 = plStack_298;
    if (iVar5 == 0) {
code_r0x018bcffc:
      *pplVar21 = (long *)0x0;
      return 0;
    }
    if (plStack_298 != (long *)0x0) {
      lVar8 = pplVar17[6][1];
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar9 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar7 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto code_r0x018bcfdc;
          }
          piVar19 = piVar19 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar8,3);
code_r0x018bcfdc:
      uVar7 = (*(code *)*puVar10)(extraout_s0_02,plVar6,pplVar21,puVar10[1]);
      if ((uVar7 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bcffc;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_2a8 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pplVar21 = pplVar14;
  pppuStack_2b0 = &pppuStack_260;
  if ((bRam0000000003eb65d6 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d6 = 1;
  }
  lVar8 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar8,0);
  if (plVar6 != (long *)0x0) {
    uVar20 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar20,auVar23._8_8_);
      return uVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_2e8 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pppuStack_2f0 = &pppuStack_2b0;
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)*pplVar15[6])();
    return uVar7;
  }
  auVar23 = func_0x00f78af4();
  puStack_2f8 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  pplVar14 = pplVar21;
  puStack_300 = (undefined1 *)&pppuStack_2f0;
  if ((bRam0000000003eb65d7 & 1) == 0) {
    puStack_300 = (undefined1 *)&pppuStack_2f0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d7 = 1;
  }
  lVar8 = *pplVar21[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar8,0);
  if (plVar6 != (long *)0x0) {
    uVar20 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)pplVar21[6][1])(auVar23._0_8_,uVar20,auVar23._8_8_);
      return uVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_338 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  ppuStack_340 = &puStack_300;
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)*pplVar15[6])();
    return uVar7;
  }
  auVar23 = func_0x00f78af4();
  puStack_348 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar21 = pplVar14;
  puStack_350 = (undefined1 *)&ppuStack_340;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_350 = (undefined1 *)&ppuStack_340;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar8 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar8,0);
  if (plVar6 != (long *)0x0) {
    uVar20 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar20,auVar23._8_8_);
      return uVar7;
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_388 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_390 = &puStack_350;
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)*pplVar15[6])();
    return uVar7;
  }
  auVar23 = func_0x00f78af4();
  puStack_398 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar14 = pplVar21;
  pplVar16 = pplVar15;
  puStack_3a0 = (undefined1 *)&ppuStack_390;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_3a0 = (undefined1 *)&ppuStack_390;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_3d8 = 0;
  lVar8 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar8 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar8,auVar23._8_8_,&lStack_3d8,uRam0000000003d2fbf0);
    lVar8 = lStack_3d8;
    if (iVar5 != 0) {
      lVar9 = *pplVar15[6];
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      lVar9 = func_0x00f78adc(lVar8,lVar9);
      lVar8 = lStack_3d8;
      if (lVar9 != 0) {
        lVar9 = *pplVar15[6];
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        if (lVar8 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)func_0x00f78adc(lVar8,lVar9);
          if (plVar6 == (long *)0x0) {
            func_0x00f78e5c(lVar8,lVar9);
            goto code_r0x018bd38c;
          }
        }
        *pplVar21 = plVar6;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar21 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar9 = auVar24._8_8_;
  lVar8 = auVar24._0_8_;
  puStack_3e8 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_400 = pplVar15;
  pplStack_3f8 = pplVar21;
  ppuStack_3f0 = &puStack_3a0;
  auStack_410 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar21 = (long **)**(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar21,0);
  if (plVar6 != (long *)0x0) {
    uVar20 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar8,uVar20);
      return uVar7;
    }
  }
  lVar11 = func_0x00f78af4();
  uStack_440 = 0x3d25458;
  puStack_418 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_448 = (long *)0x0;
  pplVar15 = pplVar14;
  pplStack_438 = pplVar21;
  pppuStack_420 = &ppuStack_3f0;
  auVar23 = auVar24;
  if (lVar11 != 0) {
    pplVar16 = (long **)*pplVar14[6];
    pplVar15 = &plStack_448;
    lStack_430 = lVar9;
    lStack_428 = lVar8;
    uVar7 = (*(code *)*pplVar16)();
    plVar6 = plStack_448;
    auVar23._8_8_ = lStack_430;
    auVar23._0_8_ = lStack_428;
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar7;
    pplVar21 = pplVar14;
    if (plStack_448 != (long *)0x0) {
      lVar8 = pplVar14[6][1];
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar9 = *plVar6;
      uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar8,6);
code_r0x018bd514:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
      return uVar7;
    }
  }
  lStack_430 = auVar23._8_8_;
  lStack_428 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar9 = auVar25._8_8_;
  lVar8 = auVar25._0_8_;
  uStack_480 = 0x3d25458;
  pcStack_458 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_478 = pplVar21;
  pppuStack_460 = &pppuStack_420;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_470 = auVar24._8_8_;
    uStack_468 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_470;
    auVar24._0_8_ = uStack_468;
    bRam0000000003eb65db = 1;
  }
  uStack_470 = auVar24._8_8_;
  uStack_468 = auVar24._0_8_;
  uVar20 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_470;
    auVar24._0_8_ = uStack_468;
  }
  uStack_470 = auVar24._8_8_;
  uStack_468 = auVar24._0_8_;
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar20,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar8,uVar12);
      return uVar7;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_4b0 = 0x3d25458;
  pcStack_488 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar21 = pplVar15;
  uStack_4a8 = uVar20;
  pppuStack_490 = &pppuStack_460;
  if (auVar23._0_8_ != 0) {
    pplVar21 = (long **)*pplVar15[6];
    lStack_4a0 = lVar9;
    lStack_498 = lVar8;
    (*(code *)*pplVar21)();
    auVar25._8_8_ = lStack_4a0;
    auVar25._0_8_ = lStack_498;
    lVar8 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)pplVar15[6][1])(lVar8,auVar23._8_8_);
      return uVar7;
    }
  }
  lStack_4a0 = auVar25._8_8_;
  lStack_498 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_4b8 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar14 = pplVar21;
  pppuStack_4c0 = &pppuStack_490;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar8 = *pplVar21[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar8,0);
  if (plVar6 != (long *)0x0) {
    uVar20 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)pplVar21[6][1])(auVar23._0_8_,uVar20,auVar23._8_8_);
      return uVar7;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar14;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_550 = auVar24._0_8_;
  pcStack_4f8 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar15 = pplVar14;
  pplVar17 = pplVar16;
  lStack_520 = lVar8;
  pplStack_518 = pplVar21;
  pppuStack_500 = &pppuStack_4c0;
  auStack_510 = auVar23;
  if (*(long *)(lStack_550 + 0x18) != 0) {
    pplVar15 = (long **)pplVar16[6][1];
    (*(code *)*pplVar15)(*(long *)(lStack_550 + 0x18),pplVar14);
    pplVar21 = pplVar16;
    auVar23 = auVar2;
    if (*(long *)(lStack_550 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)pplVar16[6][2])(*(long *)(lStack_550 + 0x10),auVar24._8_8_,pplVar14);
      return uVar7;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar9 = auVar26._8_8_;
  lVar8 = auVar26._0_8_;
  pcStack_528 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_548 = pplVar21;
  pppuStack_530 = &pppuStack_500;
  auStack_540 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar20 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar20,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar8,uVar12);
      return uVar7;
    }
  }
  lVar11 = func_0x00f78af4();
  pcStack_558 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar21 = pplVar15;
  lStack_568 = lVar8;
  pppuStack_560 = &pppuStack_530;
  if (*(long *)(lVar11 + 0x10) != 0) {
    pplVar21 = (long **)*pplVar15[6];
    lStack_570 = lVar9;
    uVar7 = (*(code *)*pplVar21)();
    auVar26._8_8_ = lStack_570;
    auVar26._0_8_ = pplVar15;
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (*(long *)(lVar11 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)pplVar15[6][1])();
      return uVar7;
    }
  }
  lStack_570 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_5a0 = 0x3d25458;
  pcStack_578 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_598 = uVar20;
  lStack_590 = lVar11;
  uStack_588 = auVar26._0_8_;
  pppuStack_580 = &pppuStack_560;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar20 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar20,0);
  if (plVar6 != (long *)0x0) {
    uVar20 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))
                        (auVar23._0_8_,uVar20);
      return uVar7;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_5a8 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_5b8 = 0;
  pppuStack_5b0 = &pppuStack_580;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar21[6])(auVar23._0_8_,auVar23._8_8_,&uStack_5b8);
    return uStack_5b8;
  }
  auVar23 = func_0x00f78af4();
  pcStack_5c8 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar14 = pplVar21;
  pppuStack_5d0 = &pppuStack_5b0;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar8 = *pplVar21[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar8,0);
  if (plVar6 != (long *)0x0) {
    uVar20 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)pplVar21[6][1])(auVar23._0_8_,uVar20,auVar23._8_8_);
      return uVar7;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar20 = auVar24._8_8_;
  auVar4._8_8_ = uVar20;
  auVar4._0_8_ = pplVar17;
  auVar3._8_8_ = uVar20;
  auVar3._0_8_ = pplVar17;
  lVar9 = auVar24._0_8_;
  pcStack_608 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_630 = lVar8;
  pplStack_628 = pplVar21;
  pppuStack_610 = &pppuStack_5d0;
  auStack_620 = auVar23;
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar8 = auVar27._8_8_;
    puStack_638 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_668 = 0;
    lVar11 = **(long **)(lVar8 + 0x30);
    uVar1 = *(ushort *)(lVar11 + 0x132);
    lStack_660 = lVar9;
    pplStack_658 = pplVar21;
    pppuStack_640 = &pppuStack_610;
    auStack_650 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar11);
      uVar1 = *(ushort *)(lVar11 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar11 = **(long **)(lVar8 + 0x30);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = **(long **)(lVar8 + 0x30);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        func_0x00f78ad0(lVar11);
      }
    }
    lVar11 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (**(long **)(lVar11 + 0xb8) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))
                (**(long **)(lVar11 + 0xb8),auVar27._0_8_,&uStack_668);
      return uStack_668;
    }
    auVar23 = func_0x00f78af4();
    lVar13 = auVar23._8_8_;
    puStack_678 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
    uStack_6a8 = 0;
    lVar22 = **(long **)(lVar13 + 0x30);
    uVar1 = *(ushort *)(lVar22 + 0x132);
    lStack_6a0 = lVar9;
    lStack_698 = lVar11;
    pppuStack_680 = &pppuStack_640;
    if ((uVar1 & 1) == 0) {
      lStack_690 = lVar8;
      uStack_688 = auVar27._0_8_;
      func_0x00fac028(lVar22);
      auVar27._8_8_ = lStack_690;
      auVar27._0_8_ = uStack_688;
      uVar1 = *(ushort *)(lVar22 + 0x132);
    }
    lStack_690 = auVar27._8_8_;
    uStack_688 = auVar27._0_8_;
    if ((uVar1 >> 10 & 1) != 0) {
      lVar8 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
        auVar27._8_8_ = lStack_690;
        auVar27._0_8_ = uStack_688;
      }
      lStack_690 = auVar27._8_8_;
      uStack_688 = auVar27._0_8_;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        lVar8 = **(long **)(lVar13 + 0x30);
        if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar8);
          auVar27._8_8_ = lStack_690;
          auVar27._0_8_ = uStack_688;
        }
        lStack_690 = auVar27._8_8_;
        uStack_688 = auVar27._0_8_;
        func_0x00f78ad0(lVar8);
        auVar27._8_8_ = lStack_690;
        auVar27._0_8_ = uStack_688;
      }
    }
    lStack_690 = auVar27._8_8_;
    uStack_688 = auVar27._0_8_;
    lVar8 = **(long **)(lVar13 + 0x30);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
      auVar27._8_8_ = lStack_690;
      auVar27._0_8_ = uStack_688;
    }
    lStack_690 = auVar27._8_8_;
    uStack_688 = auVar27._0_8_;
    if (**(long **)(lVar8 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar8 = auVar23._8_8_;
      if (auVar23._0_8_ == 0) {
        lVar9 = **(long **)(lVar8 + 0x30);
        uVar1 = *(ushort *)(lVar9 + 0x132);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar9);
          uVar1 = *(ushort *)(lVar9 + 0x132);
        }
        if ((uVar1 >> 10 & 1) != 0) {
          lVar9 = **(long **)(lVar8 + 0x30);
          if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar9);
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            lVar9 = **(long **)(lVar8 + 0x30);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
            }
            func_0x00f78ad0(lVar9);
          }
        }
        lVar8 = **(long **)(lVar8 + 0x30);
        if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar8);
        }
        uVar7 = **(ulong **)(lVar8 + 0xb8);
      }
      else {
        lVar9 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        uVar7 = func_0x00f78aec(lVar9);
        (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))(uVar7,auVar23._0_8_);
      }
      return uVar7;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
              (**(long **)(lVar8 + 0xb8),auVar23._0_8_,&uStack_6a8);
    return uStack_6a8;
  }
  uVar7 = (**(code **)*pplVar17[6])();
  if ((int)uVar7 != 0) {
    pplVar21 = pplVar14;
    auVar23 = auVar3;
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_018bdaa0;
    uVar7 = (**(code **)pplVar17[6][1])(*(long *)(lVar9 + 0x18),*pplVar14);
    if ((uVar7 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar17[6][2])(*(long *)(lVar9 + 0x10),uVar20,*pplVar14);
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
  }
  return uVar7;
}



// ============================================================
// RVA: 0x18bc870 | Core.Containers.PoolManager.GetPool<SatelliteUsableBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc870 | Core.Containers.PoolManager.GetPool<SuperShieldUsableBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc870 | Core.Containers.PoolManager.GetPool<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc918 | Core.Containers.PoolManager.GetPool<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc93c | Core.Containers.PoolManager.GetPoolImpl<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc980 | Core.Containers.PoolManager.ReturnObject<PortalVFXBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bc980 | Core.Containers.PoolManager.ReturnObject<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bca38 | Core.Containers.PoolManager.ReturnObject<object>
// ============================================================

ulong Core_Containers_PoolManager__ReturnObject_object_
                (long param_1,undefined8 param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  long **pplVar21;
  long lVar22;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_608;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined8 ***pppuStack_5e0;
  undefined *puStack_5d8;
  ulong uStack_5c8;
  long lStack_5c0;
  long **pplStack_5b8;
  undefined1 auStack_5b0 [16];
  undefined8 ***pppuStack_5a0;
  undefined *puStack_598;
  long lStack_590;
  long **pplStack_588;
  undefined1 auStack_580 [16];
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  ulong uStack_518;
  undefined8 ***pppuStack_510;
  code *pcStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e8;
  undefined8 ***pppuStack_4e0;
  code *pcStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  undefined8 ***pppuStack_4c0;
  code *pcStack_4b8;
  long lStack_4b0;
  long **pplStack_4a8;
  undefined1 auStack_4a0 [16];
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  long lStack_480;
  long **pplStack_478;
  undefined1 auStack_470 [16];
  undefined8 ***pppuStack_460;
  code *pcStack_458;
  undefined8 ***pppuStack_420;
  code *pcStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  long lStack_3f8;
  undefined8 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  long **pplStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 ***pppuStack_3c0;
  code *pcStack_3b8;
  long *plStack_3a8;
  undefined8 uStack_3a0;
  long **pplStack_398;
  long lStack_390;
  long lStack_388;
  undefined1 ***pppuStack_380;
  undefined *puStack_378;
  undefined1 auStack_370 [16];
  long **pplStack_360;
  long **pplStack_358;
  undefined1 **ppuStack_350;
  undefined *puStack_348;
  long lStack_338;
  undefined1 *puStack_300;
  undefined *puStack_2f8;
  undefined1 **ppuStack_2f0;
  undefined *puStack_2e8;
  undefined1 *puStack_2b0;
  undefined *puStack_2a8;
  undefined1 **ppuStack_2a0;
  undefined *puStack_298;
  undefined1 *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  undefined *puStack_248;
  undefined8 ***pppuStack_210;
  undefined *puStack_208;
  long *plStack_1f8;
  undefined8 ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  long *plStack_158;
  long lStack_150;
  long **pplStack_148;
  undefined1 auStack_140 [16];
  undefined8 ***pppuStack_130;
  undefined *puStack_128;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  long *plStack_d8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_50;
  undefined *puStack_48;
  long *plStack_38;
  
  plStack_38 = (long *)0x0;
  pplVar21 = param_3;
  pplVar13 = param_4;
  if (param_1 != 0) {
    pplVar13 = (long **)*param_4[6];
    pplVar21 = &plStack_38;
    uVar6 = (*(code *)*pplVar13)();
    plVar8 = plStack_38;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (plStack_38 != (long *)0x0) {
      lVar20 = param_4[6][1];
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
      }
      lVar17 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar6 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar20) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar19 + 4) * 0x10 + 0x138);
            goto LAB_018bcae4;
          }
          piVar19 = piVar19 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar20,4);
LAB_018bcae4:
      uVar6 = (*(code *)*puVar7)(plVar8,param_3,puVar7[1]);
      return uVar6;
    }
  }
  lVar20 = func_0x00f78af4();
  puStack_48 = &Core_Containers_PoolManager__ReturnObjectAtTime_object_;
  pplVar16 = pplVar21;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb65d3 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d3 = 1;
  }
  lVar17 = *pplVar21[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar17,0);
  if ((plVar8 != (long *)0x0) &&
     (uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0)), lVar20 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x018bcbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)pplVar21[6][1])(extraout_s0,lVar20,uVar9,extraout_x1);
    return uVar6;
  }
  lVar20 = func_0x00f78af4();
  puStack_98 = &Core_Containers_PoolManager__ReturnObjectAtTime_VFXBehaviour_;
  plStack_d8 = (long *)0x0;
  pplVar21 = pplVar16;
  pplVar14 = pplVar13;
  ppuStack_a0 = &puStack_50;
  if (lVar20 != 0) {
    pplVar14 = (long **)*pplVar13[6];
    pplVar21 = &plStack_d8;
    uVar6 = (*(code *)*pplVar14)();
    plVar8 = plStack_d8;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (plStack_d8 != (long *)0x0) {
      lVar20 = pplVar13[6][1];
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
      }
      lVar17 = *plVar8;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar20) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar19 + 5) * 0x10 + 0x138);
            goto code_r0x018bcc8c;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar20,5);
code_r0x018bcc8c:
      (*(code *)*puVar7)(extraout_s0_00,plVar8,pplVar16,puVar7[1]);
      return uVar6;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_e8 = &Core_Containers_PoolManager__TryAcquireObject_SuperShieldUsableBehaviour_;
  pplVar13 = pplVar21;
  pppuStack_f0 = &ppuStack_a0;
  if ((bRam0000000003eb65d4 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d4 = 1;
  }
  lVar20 = *pplVar21[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar20,0);
  if ((plVar8 != (long *)0x0) &&
     (uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)pplVar21[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
    return uVar6;
  }
  lVar17 = func_0x00f78af4();
  puStack_128 = &Core_Containers_PoolManager__TryAcquireObject_object_;
  plStack_158 = (long *)0x0;
  pplVar16 = pplVar13;
  pplVar15 = pplVar14;
  lStack_150 = lVar20;
  pplStack_148 = pplVar21;
  pppuStack_130 = &pppuStack_f0;
  auStack_140 = auVar23;
  if (lVar17 != 0) {
    pplVar15 = (long **)*pplVar14[6];
    pplVar16 = &plStack_158;
    iVar5 = (*(code *)*pplVar15)();
    plVar8 = plStack_158;
    if (iVar5 == 0) {
code_r0x018bce40:
      *pplVar13 = (long *)0x0;
      return 0;
    }
    if (plStack_158 != (long *)0x0) {
      lVar20 = pplVar14[6][1];
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
      }
      lVar17 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar6 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar20) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto code_r0x018bce24;
          }
          piVar19 = piVar19 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar20,2);
code_r0x018bce24:
      uVar6 = (*(code *)*puVar7)(plVar8,pplVar13,puVar7[1]);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bce40;
    }
  }
  lVar20 = func_0x00f78af4();
  puStack_168 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  pplVar21 = pplVar16;
  pppuStack_170 = &pppuStack_130;
  if ((bRam0000000003eb65d5 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d5 = 1;
  }
  lVar17 = *pplVar16[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar17,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bcf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar16[6][1])(extraout_s0_01,lVar20,uVar9,extraout_x1_00);
      return uVar6;
    }
  }
  lVar20 = func_0x00f78af4();
  puStack_1b8 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  plStack_1f8 = (long *)0x0;
  pplVar13 = pplVar21;
  pplVar16 = pplVar15;
  pppuStack_1c0 = &pppuStack_170;
  if (lVar20 != 0) {
    pplVar16 = (long **)*pplVar15[6];
    pplVar13 = &plStack_1f8;
    iVar5 = (*(code *)*pplVar16)();
    plVar8 = plStack_1f8;
    if (iVar5 == 0) {
code_r0x018bcffc:
      *pplVar21 = (long *)0x0;
      return 0;
    }
    if (plStack_1f8 != (long *)0x0) {
      lVar20 = pplVar15[6][1];
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
      }
      lVar17 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar6 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar20) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto code_r0x018bcfdc;
          }
          piVar19 = piVar19 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar20,3);
code_r0x018bcfdc:
      uVar6 = (*(code *)*puVar7)(extraout_s0_02,plVar8,pplVar21,puVar7[1]);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bcffc;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_208 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pplVar21 = pplVar13;
  pppuStack_210 = &pppuStack_1c0;
  if ((bRam0000000003eb65d6 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d6 = 1;
  }
  lVar20 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar20,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
      return uVar6;
    }
  }
  lVar20 = func_0x00f78af4();
  puStack_248 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pppuStack_250 = &pppuStack_210;
  if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)*pplVar16[6])();
    return uVar6;
  }
  auVar23 = func_0x00f78af4();
  puStack_258 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  pplVar13 = pplVar21;
  puStack_260 = (undefined1 *)&pppuStack_250;
  if ((bRam0000000003eb65d7 & 1) == 0) {
    puStack_260 = (undefined1 *)&pppuStack_250;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d7 = 1;
  }
  lVar20 = *pplVar21[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar20,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar21[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
      return uVar6;
    }
  }
  lVar20 = func_0x00f78af4();
  puStack_298 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  ppuStack_2a0 = &puStack_260;
  if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)*pplVar16[6])();
    return uVar6;
  }
  auVar23 = func_0x00f78af4();
  puStack_2a8 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar21 = pplVar13;
  puStack_2b0 = (undefined1 *)&ppuStack_2a0;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_2b0 = (undefined1 *)&ppuStack_2a0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar20 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar20,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
      return uVar6;
    }
  }
  lVar20 = func_0x00f78af4();
  puStack_2e8 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_2f0 = &puStack_2b0;
  if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)*pplVar16[6])();
    return uVar6;
  }
  auVar23 = func_0x00f78af4();
  puStack_2f8 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar13 = pplVar21;
  pplVar14 = pplVar16;
  puStack_300 = (undefined1 *)&ppuStack_2f0;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_300 = (undefined1 *)&ppuStack_2f0;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_338 = 0;
  lVar20 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar20 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar20,auVar23._8_8_,&lStack_338,uRam0000000003d2fbf0);
    lVar20 = lStack_338;
    if (iVar5 != 0) {
      lVar17 = *pplVar16[6];
      if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar17);
      }
      lVar17 = func_0x00f78adc(lVar20,lVar17);
      lVar20 = lStack_338;
      if (lVar17 != 0) {
        lVar17 = *pplVar16[6];
        if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar17);
        }
        if (lVar20 == 0) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = (long *)func_0x00f78adc(lVar20,lVar17);
          if (plVar8 == (long *)0x0) {
            func_0x00f78e5c(lVar20,lVar17);
            goto code_r0x018bd38c;
          }
        }
        *pplVar21 = plVar8;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar21 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar17 = auVar24._8_8_;
  lVar20 = auVar24._0_8_;
  puStack_348 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_360 = pplVar16;
  pplStack_358 = pplVar21;
  ppuStack_350 = &puStack_300;
  auStack_370 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar21 = (long **)**(undefined8 **)(lVar17 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar21,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar20,uVar9);
      return uVar6;
    }
  }
  lVar10 = func_0x00f78af4();
  uStack_3a0 = 0x3d25458;
  puStack_378 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_3a8 = (long *)0x0;
  pplVar16 = pplVar13;
  pplStack_398 = pplVar21;
  pppuStack_380 = &ppuStack_350;
  auVar23 = auVar24;
  if (lVar10 != 0) {
    pplVar14 = (long **)*pplVar13[6];
    pplVar16 = &plStack_3a8;
    lStack_390 = lVar17;
    lStack_388 = lVar20;
    uVar6 = (*(code *)*pplVar14)();
    plVar8 = plStack_3a8;
    auVar23._8_8_ = lStack_390;
    auVar23._0_8_ = lStack_388;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar6;
    pplVar21 = pplVar13;
    if (plStack_3a8 != (long *)0x0) {
      lVar20 = pplVar13[6][1];
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
      }
      lVar17 = *plVar8;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar20) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar19 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar20,6);
code_r0x018bd514:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      return uVar6;
    }
  }
  lStack_390 = auVar23._8_8_;
  lStack_388 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar17 = auVar25._8_8_;
  lVar20 = auVar25._0_8_;
  uStack_3e0 = 0x3d25458;
  pcStack_3b8 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_3d8 = pplVar21;
  pppuStack_3c0 = &pppuStack_380;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_3d0 = auVar24._8_8_;
    uStack_3c8 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_3d0;
    auVar24._0_8_ = uStack_3c8;
    bRam0000000003eb65db = 1;
  }
  uStack_3d0 = auVar24._8_8_;
  uStack_3c8 = auVar24._0_8_;
  uVar9 = **(undefined8 **)(lVar17 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_3d0;
    auVar24._0_8_ = uStack_3c8;
  }
  uStack_3d0 = auVar24._8_8_;
  uStack_3c8 = auVar24._0_8_;
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar8 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar20,uVar11);
      return uVar6;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_410 = 0x3d25458;
  pcStack_3e8 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar21 = pplVar16;
  uStack_408 = uVar9;
  pppuStack_3f0 = &pppuStack_3c0;
  if (auVar23._0_8_ != 0) {
    pplVar21 = (long **)*pplVar16[6];
    lStack_400 = lVar17;
    lStack_3f8 = lVar20;
    (*(code *)*pplVar21)();
    auVar25._8_8_ = lStack_400;
    auVar25._0_8_ = lStack_3f8;
    lVar20 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar16[6][1])(lVar20,auVar23._8_8_);
      return uVar6;
    }
  }
  lStack_400 = auVar25._8_8_;
  lStack_3f8 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_418 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar13 = pplVar21;
  pppuStack_420 = &pppuStack_3f0;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar20 = *pplVar21[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar20,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar21[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
      return uVar6;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar13;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_4b0 = auVar24._0_8_;
  pcStack_458 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar16 = pplVar13;
  pplVar15 = pplVar14;
  lStack_480 = lVar20;
  pplStack_478 = pplVar21;
  pppuStack_460 = &pppuStack_420;
  auStack_470 = auVar23;
  if (*(long *)(lStack_4b0 + 0x18) != 0) {
    pplVar16 = (long **)pplVar14[6][1];
    (*(code *)*pplVar16)(*(long *)(lStack_4b0 + 0x18),pplVar13);
    pplVar21 = pplVar14;
    auVar23 = auVar2;
    if (*(long *)(lStack_4b0 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar14[6][2])(*(long *)(lStack_4b0 + 0x10),auVar24._8_8_,pplVar13);
      return uVar6;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar17 = auVar26._8_8_;
  lVar20 = auVar26._0_8_;
  pcStack_488 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_4a8 = pplVar21;
  pppuStack_490 = &pppuStack_460;
  auStack_4a0 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar9 = **(undefined8 **)(lVar17 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar8 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar20,uVar11);
      return uVar6;
    }
  }
  lVar10 = func_0x00f78af4();
  pcStack_4b8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar21 = pplVar16;
  lStack_4c8 = lVar20;
  pppuStack_4c0 = &pppuStack_490;
  if (*(long *)(lVar10 + 0x10) != 0) {
    pplVar21 = (long **)*pplVar16[6];
    lStack_4d0 = lVar17;
    uVar6 = (*(code *)*pplVar21)();
    auVar26._8_8_ = lStack_4d0;
    auVar26._0_8_ = pplVar16;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (*(long *)(lVar10 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar16[6][1])();
      return uVar6;
    }
  }
  lStack_4d0 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_500 = 0x3d25458;
  pcStack_4d8 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_4f8 = uVar9;
  lStack_4f0 = lVar10;
  uStack_4e8 = auVar26._0_8_;
  pppuStack_4e0 = &pppuStack_4c0;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar9 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar9)
      ;
      return uVar6;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_508 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_518 = 0;
  pppuStack_510 = &pppuStack_4e0;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar21[6])(auVar23._0_8_,auVar23._8_8_,&uStack_518);
    return uStack_518;
  }
  auVar23 = func_0x00f78af4();
  pcStack_528 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar13 = pplVar21;
  pppuStack_530 = &pppuStack_510;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar20 = *pplVar21[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar20,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar21[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
      return uVar6;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar9 = auVar24._8_8_;
  auVar4._8_8_ = uVar9;
  auVar4._0_8_ = pplVar15;
  auVar3._8_8_ = uVar9;
  auVar3._0_8_ = pplVar15;
  lVar17 = auVar24._0_8_;
  pcStack_568 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_590 = lVar20;
  pplStack_588 = pplVar21;
  pppuStack_570 = &pppuStack_530;
  auStack_580 = auVar23;
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar20 = auVar27._8_8_;
    puStack_598 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_5c8 = 0;
    lVar10 = **(long **)(lVar20 + 0x30);
    uVar1 = *(ushort *)(lVar10 + 0x132);
    lStack_5c0 = lVar17;
    pplStack_5b8 = pplVar21;
    pppuStack_5a0 = &pppuStack_570;
    auStack_5b0 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar10);
      uVar1 = *(ushort *)(lVar10 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar10 = **(long **)(lVar20 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        lVar10 = **(long **)(lVar20 + 0x30);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        func_0x00f78ad0(lVar10);
      }
    }
    lVar10 = **(long **)(lVar20 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (**(long **)(lVar10 + 0xb8) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))
                (**(long **)(lVar10 + 0xb8),auVar27._0_8_,&uStack_5c8);
      return uStack_5c8;
    }
    auVar23 = func_0x00f78af4();
    lVar12 = auVar23._8_8_;
    puStack_5d8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
    uStack_608 = 0;
    lVar22 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar22 + 0x132);
    lStack_600 = lVar17;
    lStack_5f8 = lVar10;
    pppuStack_5e0 = &pppuStack_5a0;
    if ((uVar1 & 1) == 0) {
      lStack_5f0 = lVar20;
      uStack_5e8 = auVar27._0_8_;
      func_0x00fac028(lVar22);
      auVar27._8_8_ = lStack_5f0;
      auVar27._0_8_ = uStack_5e8;
      uVar1 = *(ushort *)(lVar22 + 0x132);
    }
    lStack_5f0 = auVar27._8_8_;
    uStack_5e8 = auVar27._0_8_;
    if ((uVar1 >> 10 & 1) != 0) {
      lVar20 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
        auVar27._8_8_ = lStack_5f0;
        auVar27._0_8_ = uStack_5e8;
      }
      lStack_5f0 = auVar27._8_8_;
      uStack_5e8 = auVar27._0_8_;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        lVar20 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar20);
          auVar27._8_8_ = lStack_5f0;
          auVar27._0_8_ = uStack_5e8;
        }
        lStack_5f0 = auVar27._8_8_;
        uStack_5e8 = auVar27._0_8_;
        func_0x00f78ad0(lVar20);
        auVar27._8_8_ = lStack_5f0;
        auVar27._0_8_ = uStack_5e8;
      }
    }
    lStack_5f0 = auVar27._8_8_;
    uStack_5e8 = auVar27._0_8_;
    lVar20 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      auVar27._8_8_ = lStack_5f0;
      auVar27._0_8_ = uStack_5e8;
    }
    lStack_5f0 = auVar27._8_8_;
    uStack_5e8 = auVar27._0_8_;
    if (**(long **)(lVar20 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar20 = auVar23._8_8_;
      if (auVar23._0_8_ == 0) {
        lVar17 = **(long **)(lVar20 + 0x30);
        uVar1 = *(ushort *)(lVar17 + 0x132);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar17);
          uVar1 = *(ushort *)(lVar17 + 0x132);
        }
        if ((uVar1 >> 10 & 1) != 0) {
          lVar17 = **(long **)(lVar20 + 0x30);
          if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar17);
          }
          if (*(int *)(lVar17 + 0xe0) == 0) {
            lVar17 = **(long **)(lVar20 + 0x30);
            if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar17);
            }
            func_0x00f78ad0(lVar17);
          }
        }
        lVar20 = **(long **)(lVar20 + 0x30);
        if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar20);
        }
        uVar6 = **(ulong **)(lVar20 + 0xb8);
      }
      else {
        lVar17 = *(long *)(*(long *)(lVar20 + 0x30) + 8);
        if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar17);
        }
        uVar6 = func_0x00f78aec(lVar17);
        (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))(uVar6,auVar23._0_8_);
      }
      return uVar6;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
              (**(long **)(lVar20 + 0xb8),auVar23._0_8_,&uStack_608);
    return uStack_608;
  }
  uVar6 = (**(code **)*pplVar15[6])();
  if ((int)uVar6 != 0) {
    pplVar21 = pplVar13;
    auVar23 = auVar3;
    if (*(long *)(lVar17 + 0x18) == 0) goto LAB_018bdaa0;
    uVar6 = (**(code **)pplVar15[6][1])(*(long *)(lVar17 + 0x18),*pplVar13);
    if ((uVar6 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar17 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar15[6][2])(*(long *)(lVar17 + 0x10),uVar9,*pplVar13);
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  return uVar6;
}



// ============================================================
// RVA: 0x18bcb0c | Core.Containers.PoolManager.ReturnObjectAtTime<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bcbd4 | Core.Containers.PoolManager.ReturnObjectAtTime<VFXBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bcbd4 | Core.Containers.PoolManager.ReturnObjectAtTime<object>
// ============================================================

ulong Core_Containers_PoolManager__ReturnObjectAtTime_VFXBehaviour_
                (undefined4 param_1,long param_2,undefined8 param_3,long **param_4,long **param_5)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long **pplVar20;
  long lVar21;
  long lVar22;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  undefined8 uStack_558;
  undefined8 ***pppuStack_550;
  undefined *puStack_548;
  ulong uStack_538;
  long lStack_530;
  long **pplStack_528;
  undefined1 auStack_520 [16];
  undefined8 ***pppuStack_510;
  undefined *puStack_508;
  long lStack_500;
  long **pplStack_4f8;
  undefined1 auStack_4f0 [16];
  undefined8 ***pppuStack_4e0;
  code *pcStack_4d8;
  undefined8 ***pppuStack_4a0;
  code *pcStack_498;
  ulong uStack_488;
  undefined8 ***pppuStack_480;
  code *pcStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  undefined8 uStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  long lStack_440;
  long lStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  long lStack_420;
  long **pplStack_418;
  undefined1 auStack_410 [16];
  undefined8 ***pppuStack_400;
  code *pcStack_3f8;
  long lStack_3f0;
  long **pplStack_3e8;
  undefined1 auStack_3e0 [16];
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_370;
  long lStack_368;
  undefined8 ***pppuStack_360;
  code *pcStack_358;
  undefined8 uStack_350;
  long **pplStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  long *plStack_318;
  undefined8 uStack_310;
  long **pplStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined1 ***pppuStack_2f0;
  undefined *puStack_2e8;
  undefined1 auStack_2e0 [16];
  long **pplStack_2d0;
  long **pplStack_2c8;
  undefined1 **ppuStack_2c0;
  undefined *puStack_2b8;
  long lStack_2a8;
  undefined1 *puStack_270;
  undefined *puStack_268;
  undefined1 **ppuStack_260;
  undefined *puStack_258;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined1 **ppuStack_210;
  undefined *puStack_208;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined *puStack_1b8;
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  long *plStack_168;
  undefined8 ***pppuStack_130;
  undefined *puStack_128;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  long *plStack_c8;
  long lStack_c0;
  long **pplStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  long *plStack_48;
  
  plStack_48 = (long *)0x0;
  pplVar20 = param_4;
  pplVar13 = param_5;
  if (param_2 != 0) {
    pplVar13 = (long **)*param_5[6];
    pplVar20 = &plStack_48;
    uVar6 = (*(code *)*pplVar13)();
    plVar8 = plStack_48;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (plStack_48 != (long *)0x0) {
      lVar22 = param_5[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar17 = *plVar8;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar19 + 5) * 0x10 + 0x138);
            goto LAB_018bcc8c;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar22,5);
LAB_018bcc8c:
      (*(code *)*puVar7)(param_1,plVar8,param_4,puVar7[1]);
      return uVar6;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_58 = &Core_Containers_PoolManager__TryAcquireObject_SuperShieldUsableBehaviour_;
  pplVar15 = pplVar20;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb65d4 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d4 = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar8 != (long *)0x0) &&
     (uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
    return uVar6;
  }
  lVar17 = func_0x00f78af4();
  puStack_98 = &Core_Containers_PoolManager__TryAcquireObject_object_;
  plStack_c8 = (long *)0x0;
  pplVar16 = pplVar15;
  pplVar14 = pplVar13;
  lStack_c0 = lVar22;
  pplStack_b8 = pplVar20;
  ppuStack_a0 = &puStack_60;
  auStack_b0 = auVar23;
  if (lVar17 != 0) {
    pplVar14 = (long **)*pplVar13[6];
    pplVar16 = &plStack_c8;
    iVar5 = (*(code *)*pplVar14)();
    plVar8 = plStack_c8;
    if (iVar5 == 0) {
code_r0x018bce40:
      *pplVar15 = (long *)0x0;
      return 0;
    }
    if (plStack_c8 != (long *)0x0) {
      lVar22 = pplVar13[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar17 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar6 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto code_r0x018bce24;
          }
          piVar19 = piVar19 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar22,2);
code_r0x018bce24:
      uVar6 = (*(code *)*puVar7)(plVar8,pplVar15,puVar7[1]);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bce40;
    }
  }
  lVar22 = func_0x00f78af4();
  puStack_d8 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  pplVar20 = pplVar16;
  pppuStack_e0 = &ppuStack_a0;
  if ((bRam0000000003eb65d5 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d5 = 1;
  }
  lVar17 = *pplVar16[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar17,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bcf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar16[6][1])(extraout_s0,lVar22,uVar9,extraout_x1);
      return uVar6;
    }
  }
  lVar22 = func_0x00f78af4();
  puStack_128 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  plStack_168 = (long *)0x0;
  pplVar13 = pplVar20;
  pplVar15 = pplVar14;
  pppuStack_130 = &pppuStack_e0;
  if (lVar22 != 0) {
    pplVar15 = (long **)*pplVar14[6];
    pplVar13 = &plStack_168;
    iVar5 = (*(code *)*pplVar15)();
    plVar8 = plStack_168;
    if (iVar5 == 0) {
code_r0x018bcffc:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_168 != (long *)0x0) {
      lVar22 = pplVar14[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar17 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar6 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto code_r0x018bcfdc;
          }
          piVar19 = piVar19 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar22,3);
code_r0x018bcfdc:
      uVar6 = (*(code *)*puVar7)(extraout_s0_00,plVar8,pplVar20,puVar7[1]);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bcffc;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_178 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pplVar20 = pplVar13;
  pppuStack_180 = &pppuStack_130;
  if ((bRam0000000003eb65d6 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d6 = 1;
  }
  lVar22 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
      return uVar6;
    }
  }
  lVar22 = func_0x00f78af4();
  puStack_1b8 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pppuStack_1c0 = &pppuStack_180;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)*pplVar15[6])();
    return uVar6;
  }
  auVar23 = func_0x00f78af4();
  puStack_1c8 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  pplVar13 = pplVar20;
  puStack_1d0 = (undefined1 *)&pppuStack_1c0;
  if ((bRam0000000003eb65d7 & 1) == 0) {
    puStack_1d0 = (undefined1 *)&pppuStack_1c0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d7 = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
      return uVar6;
    }
  }
  lVar22 = func_0x00f78af4();
  puStack_208 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  ppuStack_210 = &puStack_1d0;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)*pplVar15[6])();
    return uVar6;
  }
  auVar23 = func_0x00f78af4();
  puStack_218 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar20 = pplVar13;
  puStack_220 = (undefined1 *)&ppuStack_210;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_220 = (undefined1 *)&ppuStack_210;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar22 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
      return uVar6;
    }
  }
  lVar22 = func_0x00f78af4();
  puStack_258 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_260 = &puStack_220;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)*pplVar15[6])();
    return uVar6;
  }
  auVar23 = func_0x00f78af4();
  puStack_268 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar13 = pplVar20;
  pplVar16 = pplVar15;
  puStack_270 = (undefined1 *)&ppuStack_260;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_270 = (undefined1 *)&ppuStack_260;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_2a8 = 0;
  lVar22 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar22 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar22,auVar23._8_8_,&lStack_2a8,uRam0000000003d2fbf0);
    lVar22 = lStack_2a8;
    if (iVar5 != 0) {
      lVar17 = *pplVar15[6];
      if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar17);
      }
      lVar17 = func_0x00f78adc(lVar22,lVar17);
      lVar22 = lStack_2a8;
      if (lVar17 != 0) {
        lVar17 = *pplVar15[6];
        if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar17);
        }
        if (lVar22 == 0) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = (long *)func_0x00f78adc(lVar22,lVar17);
          if (plVar8 == (long *)0x0) {
            func_0x00f78e5c(lVar22,lVar17);
            goto code_r0x018bd38c;
          }
        }
        *pplVar20 = plVar8;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar20 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar17 = auVar24._8_8_;
  lVar22 = auVar24._0_8_;
  puStack_2b8 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_2d0 = pplVar15;
  pplStack_2c8 = pplVar20;
  ppuStack_2c0 = &puStack_270;
  auStack_2e0 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar20 = (long **)**(undefined8 **)(lVar17 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar20,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar22,uVar9);
      return uVar6;
    }
  }
  lVar10 = func_0x00f78af4();
  uStack_310 = 0x3d25458;
  puStack_2e8 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_318 = (long *)0x0;
  pplVar15 = pplVar13;
  pplStack_308 = pplVar20;
  pppuStack_2f0 = &ppuStack_2c0;
  auVar23 = auVar24;
  if (lVar10 != 0) {
    pplVar16 = (long **)*pplVar13[6];
    pplVar15 = &plStack_318;
    lStack_300 = lVar17;
    lStack_2f8 = lVar22;
    uVar6 = (*(code *)*pplVar16)();
    plVar8 = plStack_318;
    auVar23._8_8_ = lStack_300;
    auVar23._0_8_ = lStack_2f8;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar6;
    pplVar20 = pplVar13;
    if (plStack_318 != (long *)0x0) {
      lVar22 = pplVar13[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar17 = *plVar8;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar7 = (undefined8 *)(lVar17 + (long)(*piVar19 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,lVar22,6);
code_r0x018bd514:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      return uVar6;
    }
  }
  lStack_300 = auVar23._8_8_;
  lStack_2f8 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar17 = auVar25._8_8_;
  lVar22 = auVar25._0_8_;
  uStack_350 = 0x3d25458;
  pcStack_328 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_348 = pplVar20;
  pppuStack_330 = &pppuStack_2f0;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_340 = auVar24._8_8_;
    uStack_338 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_340;
    auVar24._0_8_ = uStack_338;
    bRam0000000003eb65db = 1;
  }
  uStack_340 = auVar24._8_8_;
  uStack_338 = auVar24._0_8_;
  uVar9 = **(undefined8 **)(lVar17 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_340;
    auVar24._0_8_ = uStack_338;
  }
  uStack_340 = auVar24._8_8_;
  uStack_338 = auVar24._0_8_;
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar8 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar22,uVar11);
      return uVar6;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_380 = 0x3d25458;
  pcStack_358 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar20 = pplVar15;
  uStack_378 = uVar9;
  pppuStack_360 = &pppuStack_330;
  if (auVar23._0_8_ != 0) {
    pplVar20 = (long **)*pplVar15[6];
    lStack_370 = lVar17;
    lStack_368 = lVar22;
    (*(code *)*pplVar20)();
    auVar25._8_8_ = lStack_370;
    auVar25._0_8_ = lStack_368;
    lVar22 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar15[6][1])(lVar22,auVar23._8_8_);
      return uVar6;
    }
  }
  lStack_370 = auVar25._8_8_;
  lStack_368 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_388 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar13 = pplVar20;
  pppuStack_390 = &pppuStack_360;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
      return uVar6;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar13;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_420 = auVar24._0_8_;
  pcStack_3c8 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar15 = pplVar13;
  pplVar14 = pplVar16;
  lStack_3f0 = lVar22;
  pplStack_3e8 = pplVar20;
  pppuStack_3d0 = &pppuStack_390;
  auStack_3e0 = auVar23;
  if (*(long *)(lStack_420 + 0x18) != 0) {
    pplVar15 = (long **)pplVar16[6][1];
    (*(code *)*pplVar15)(*(long *)(lStack_420 + 0x18),pplVar13);
    pplVar20 = pplVar16;
    auVar23 = auVar2;
    if (*(long *)(lStack_420 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar16[6][2])(*(long *)(lStack_420 + 0x10),auVar24._8_8_,pplVar13);
      return uVar6;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar17 = auVar26._8_8_;
  lVar22 = auVar26._0_8_;
  pcStack_3f8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_418 = pplVar20;
  pppuStack_400 = &pppuStack_3d0;
  auStack_410 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar9 = **(undefined8 **)(lVar17 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar8 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar22,uVar11);
      return uVar6;
    }
  }
  lVar10 = func_0x00f78af4();
  pcStack_428 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar20 = pplVar15;
  lStack_438 = lVar22;
  pppuStack_430 = &pppuStack_400;
  if (*(long *)(lVar10 + 0x10) != 0) {
    pplVar20 = (long **)*pplVar15[6];
    lStack_440 = lVar17;
    uVar6 = (*(code *)*pplVar20)();
    auVar26._8_8_ = lStack_440;
    auVar26._0_8_ = pplVar15;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (*(long *)(lVar10 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar15[6][1])();
      return uVar6;
    }
  }
  lStack_440 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_470 = 0x3d25458;
  pcStack_448 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_468 = uVar9;
  lStack_460 = lVar10;
  uStack_458 = auVar26._0_8_;
  pppuStack_450 = &pppuStack_430;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar9 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar9)
      ;
      return uVar6;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_478 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_488 = 0;
  pppuStack_480 = &pppuStack_450;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar20[6])(auVar23._0_8_,auVar23._8_8_,&uStack_488);
    return uStack_488;
  }
  auVar23 = func_0x00f78af4();
  pcStack_498 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar13 = pplVar20;
  pppuStack_4a0 = &pppuStack_480;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
      return uVar6;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar9 = auVar24._8_8_;
  auVar4._8_8_ = uVar9;
  auVar4._0_8_ = pplVar14;
  auVar3._8_8_ = uVar9;
  auVar3._0_8_ = pplVar14;
  lVar17 = auVar24._0_8_;
  pcStack_4d8 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_500 = lVar22;
  pplStack_4f8 = pplVar20;
  pppuStack_4e0 = &pppuStack_4a0;
  auStack_4f0 = auVar23;
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar22 = auVar27._8_8_;
    puStack_508 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_538 = 0;
    lVar10 = **(long **)(lVar22 + 0x30);
    uVar1 = *(ushort *)(lVar10 + 0x132);
    lStack_530 = lVar17;
    pplStack_528 = pplVar20;
    pppuStack_510 = &pppuStack_4e0;
    auStack_520 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar10);
      uVar1 = *(ushort *)(lVar10 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar10 = **(long **)(lVar22 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        lVar10 = **(long **)(lVar22 + 0x30);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        func_0x00f78ad0(lVar10);
      }
    }
    lVar10 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (**(long **)(lVar10 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar12 = auVar23._8_8_;
      puStack_548 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
      uStack_578 = 0;
      lVar21 = **(long **)(lVar12 + 0x30);
      uVar1 = *(ushort *)(lVar21 + 0x132);
      lStack_570 = lVar17;
      lStack_568 = lVar10;
      pppuStack_550 = &pppuStack_510;
      if ((uVar1 & 1) == 0) {
        lStack_560 = lVar22;
        uStack_558 = auVar27._0_8_;
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_560;
        auVar27._0_8_ = uStack_558;
        uVar1 = *(ushort *)(lVar21 + 0x132);
      }
      lStack_560 = auVar27._8_8_;
      uStack_558 = auVar27._0_8_;
      if ((uVar1 >> 10 & 1) != 0) {
        lVar22 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
          auVar27._8_8_ = lStack_560;
          auVar27._0_8_ = uStack_558;
        }
        lStack_560 = auVar27._8_8_;
        uStack_558 = auVar27._0_8_;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          lVar22 = **(long **)(lVar12 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
            auVar27._8_8_ = lStack_560;
            auVar27._0_8_ = uStack_558;
          }
          lStack_560 = auVar27._8_8_;
          uStack_558 = auVar27._0_8_;
          func_0x00f78ad0(lVar22);
          auVar27._8_8_ = lStack_560;
          auVar27._0_8_ = uStack_558;
        }
      }
      lStack_560 = auVar27._8_8_;
      uStack_558 = auVar27._0_8_;
      lVar22 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
        auVar27._8_8_ = lStack_560;
        auVar27._0_8_ = uStack_558;
      }
      lStack_560 = auVar27._8_8_;
      uStack_558 = auVar27._0_8_;
      if (**(long **)(lVar22 + 0xb8) == 0) {
        auVar23 = func_0x00f78af4();
        lVar22 = auVar23._8_8_;
        if (auVar23._0_8_ == 0) {
          lVar17 = **(long **)(lVar22 + 0x30);
          uVar1 = *(ushort *)(lVar17 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar17);
            uVar1 = *(ushort *)(lVar17 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar17 = **(long **)(lVar22 + 0x30);
            if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar17);
            }
            if (*(int *)(lVar17 + 0xe0) == 0) {
              lVar17 = **(long **)(lVar22 + 0x30);
              if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar17);
              }
              func_0x00f78ad0(lVar17);
            }
          }
          lVar22 = **(long **)(lVar22 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          uVar6 = **(ulong **)(lVar22 + 0xb8);
        }
        else {
          lVar17 = *(long *)(*(long *)(lVar22 + 0x30) + 8);
          if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar17);
          }
          uVar6 = func_0x00f78aec(lVar17);
          (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))(uVar6,auVar23._0_8_);
        }
        return uVar6;
      }
      (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
                (**(long **)(lVar22 + 0xb8),auVar23._0_8_,&uStack_578);
      return uStack_578;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar27._0_8_,&uStack_538);
    return uStack_538;
  }
  uVar6 = (**(code **)*pplVar14[6])();
  if ((int)uVar6 != 0) {
    pplVar20 = pplVar13;
    auVar23 = auVar3;
    if (*(long *)(lVar17 + 0x18) == 0) goto LAB_018bdaa0;
    uVar6 = (**(code **)pplVar14[6][1])(*(long *)(lVar17 + 0x18),*pplVar13);
    if ((uVar6 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar17 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar14[6][2])(*(long *)(lVar17 + 0x10),uVar9,*pplVar13);
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  return uVar6;
}



// ============================================================
// RVA: 0x18bccc0 | Core.Containers.PoolManager.TryAcquireObject<BoostUsableBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bccc0 | Core.Containers.PoolManager.TryAcquireObject<GoldenTurdProjectileBehaviour>
// ============================================================

ulong Core_Containers_PoolManager__TryAcquireObject_BoostUsableBehaviour_
                (long param_1,undefined8 param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  long lVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long **pplVar17;
  ulong uVar18;
  int *piVar19;
  long **pplVar20;
  long lVar21;
  long lVar22;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 ***pppuStack_500;
  undefined *puStack_4f8;
  ulong uStack_4e8;
  long lStack_4e0;
  long **pplStack_4d8;
  undefined1 auStack_4d0 [16];
  undefined8 ***pppuStack_4c0;
  undefined *puStack_4b8;
  long lStack_4b0;
  long **pplStack_4a8;
  undefined1 auStack_4a0 [16];
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  ulong uStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 ***pppuStack_400;
  code *pcStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 ***pppuStack_3e0;
  code *pcStack_3d8;
  long lStack_3d0;
  long **pplStack_3c8;
  undefined1 auStack_3c0 [16];
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  long lStack_3a0;
  long **pplStack_398;
  undefined1 auStack_390 [16];
  undefined8 ***pppuStack_380;
  code *pcStack_378;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  long **pplStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  long **pplStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 ***pppuStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [16];
  long **pplStack_280;
  long **pplStack_278;
  undefined1 **ppuStack_270;
  undefined *puStack_268;
  long lStack_258;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined1 **ppuStack_210;
  undefined *puStack_208;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined8 ***pppuStack_130;
  undefined *puStack_128;
  long *plStack_118;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long *plStack_78;
  long lStack_70;
  long **pplStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  pplVar20 = param_3;
  if ((bRam0000000003eb65d4 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d4 = 1;
  }
  lVar22 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), param_1 != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x018bcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)param_3[6][1])(param_1,uVar7,param_2);
    return uVar8;
  }
  lVar9 = func_0x00f78af4();
  puStack_48 = &Core_Containers_PoolManager__TryAcquireObject_object_;
  plStack_78 = (long *)0x0;
  pplVar14 = pplVar20;
  pplVar15 = param_4;
  lStack_70 = lVar22;
  pplStack_68 = param_3;
  lStack_60 = param_1;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar9 != 0) {
    pplVar15 = (long **)*param_4[6];
    pplVar14 = &plStack_78;
    iVar5 = (*(code *)*pplVar15)();
    plVar6 = plStack_78;
    if (iVar5 == 0) {
code_r0x018bce40:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_78 != (long *)0x0) {
      lVar22 = param_4[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto code_r0x018bce24;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,2);
code_r0x018bce24:
      uVar8 = (*(code *)*puVar10)(plVar6,pplVar20,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bce40;
    }
  }
  lVar22 = func_0x00f78af4();
  puStack_88 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  pplVar20 = pplVar14;
  ppuStack_90 = &puStack_50;
  if ((bRam0000000003eb65d5 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d5 = 1;
  }
  lVar9 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar9,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), lVar22 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x018bcf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(extraout_s0,lVar22,uVar7,extraout_x1);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_d8 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  plStack_118 = (long *)0x0;
  pplVar14 = pplVar20;
  pplVar16 = pplVar15;
  pppuStack_e0 = &ppuStack_90;
  if (lVar22 != 0) {
    pplVar16 = (long **)*pplVar15[6];
    pplVar14 = &plStack_118;
    iVar5 = (*(code *)*pplVar16)();
    plVar6 = plStack_118;
    if (iVar5 == 0) {
code_r0x018bcffc:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_118 != (long *)0x0) {
      lVar22 = pplVar15[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto code_r0x018bcfdc;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,3);
code_r0x018bcfdc:
      uVar8 = (*(code *)*puVar10)(extraout_s0_00,plVar6,pplVar20,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bcffc;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_128 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pplVar20 = pplVar14;
  pppuStack_130 = &pppuStack_e0;
  if ((bRam0000000003eb65d6 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d6 = 1;
  }
  lVar22 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_168 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pppuStack_170 = &pppuStack_130;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_178 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  pplVar14 = pplVar20;
  puStack_180 = (undefined1 *)&pppuStack_170;
  if ((bRam0000000003eb65d7 & 1) == 0) {
    puStack_180 = (undefined1 *)&pppuStack_170;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d7 = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_1b8 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  ppuStack_1c0 = &puStack_180;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_1c8 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar20 = pplVar14;
  puStack_1d0 = (undefined1 *)&ppuStack_1c0;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_1d0 = (undefined1 *)&ppuStack_1c0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar22 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_208 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_210 = &puStack_1d0;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_218 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar14 = pplVar20;
  pplVar15 = pplVar16;
  puStack_220 = (undefined1 *)&ppuStack_210;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_220 = (undefined1 *)&ppuStack_210;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_258 = 0;
  lVar22 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar22 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar22,auVar23._8_8_,&lStack_258,uRam0000000003d2fbf0);
    lVar22 = lStack_258;
    if (iVar5 != 0) {
      lVar9 = *pplVar16[6];
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      lVar9 = func_0x00f78adc(lVar22,lVar9);
      lVar22 = lStack_258;
      if (lVar9 != 0) {
        lVar9 = *pplVar16[6];
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        if (lVar22 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)func_0x00f78adc(lVar22,lVar9);
          if (plVar6 == (long *)0x0) {
            func_0x00f78e5c(lVar22,lVar9);
            goto code_r0x018bd38c;
          }
        }
        *pplVar20 = plVar6;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar20 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar9 = auVar24._8_8_;
  lVar22 = auVar24._0_8_;
  puStack_268 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_280 = pplVar16;
  pplStack_278 = pplVar20;
  ppuStack_270 = &puStack_220;
  auStack_290 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar20 = (long **)**(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar20,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar7);
      return uVar8;
    }
  }
  lVar11 = func_0x00f78af4();
  uStack_2c0 = 0x3d25458;
  puStack_298 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_2c8 = (long *)0x0;
  pplVar16 = pplVar14;
  pplStack_2b8 = pplVar20;
  pppuStack_2a0 = &ppuStack_270;
  auVar23 = auVar24;
  if (lVar11 != 0) {
    pplVar15 = (long **)*pplVar14[6];
    pplVar16 = &plStack_2c8;
    lStack_2b0 = lVar9;
    lStack_2a8 = lVar22;
    uVar8 = (*(code *)*pplVar15)();
    plVar6 = plStack_2c8;
    auVar23._8_8_ = lStack_2b0;
    auVar23._0_8_ = lStack_2a8;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar8;
    pplVar20 = pplVar14;
    if (plStack_2c8 != (long *)0x0) {
      lVar22 = pplVar14[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,6);
code_r0x018bd514:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
      return uVar8;
    }
  }
  lStack_2b0 = auVar23._8_8_;
  lStack_2a8 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar9 = auVar25._8_8_;
  lVar22 = auVar25._0_8_;
  uStack_300 = 0x3d25458;
  pcStack_2d8 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_2f8 = pplVar20;
  pppuStack_2e0 = &pppuStack_2a0;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_2f0 = auVar24._8_8_;
    uStack_2e8 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_2f0;
    auVar24._0_8_ = uStack_2e8;
    bRam0000000003eb65db = 1;
  }
  uStack_2f0 = auVar24._8_8_;
  uStack_2e8 = auVar24._0_8_;
  uVar7 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_2f0;
    auVar24._0_8_ = uStack_2e8;
  }
  uStack_2f0 = auVar24._8_8_;
  uStack_2e8 = auVar24._0_8_;
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar12);
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_330 = 0x3d25458;
  pcStack_308 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar20 = pplVar16;
  uStack_328 = uVar7;
  pppuStack_310 = &pppuStack_2e0;
  if (auVar23._0_8_ != 0) {
    pplVar20 = (long **)*pplVar16[6];
    lStack_320 = lVar9;
    lStack_318 = lVar22;
    (*(code *)*pplVar20)();
    auVar25._8_8_ = lStack_320;
    auVar25._0_8_ = lStack_318;
    lVar22 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar16[6][1])(lVar22,auVar23._8_8_);
      return uVar8;
    }
  }
  lStack_320 = auVar25._8_8_;
  lStack_318 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_338 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar14 = pplVar20;
  pppuStack_340 = &pppuStack_310;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar14;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_3d0 = auVar24._0_8_;
  pcStack_378 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar16 = pplVar14;
  pplVar17 = pplVar15;
  lStack_3a0 = lVar22;
  pplStack_398 = pplVar20;
  pppuStack_380 = &pppuStack_340;
  auStack_390 = auVar23;
  if (*(long *)(lStack_3d0 + 0x18) != 0) {
    pplVar16 = (long **)pplVar15[6][1];
    (*(code *)*pplVar16)(*(long *)(lStack_3d0 + 0x18),pplVar14);
    pplVar20 = pplVar15;
    auVar23 = auVar2;
    if (*(long *)(lStack_3d0 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar15[6][2])(*(long *)(lStack_3d0 + 0x10),auVar24._8_8_,pplVar14);
      return uVar8;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar9 = auVar26._8_8_;
  lVar22 = auVar26._0_8_;
  pcStack_3a8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_3c8 = pplVar20;
  pppuStack_3b0 = &pppuStack_380;
  auStack_3c0 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar7 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar12);
      return uVar8;
    }
  }
  lVar11 = func_0x00f78af4();
  pcStack_3d8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar20 = pplVar16;
  lStack_3e8 = lVar22;
  pppuStack_3e0 = &pppuStack_3b0;
  if (*(long *)(lVar11 + 0x10) != 0) {
    pplVar20 = (long **)*pplVar16[6];
    lStack_3f0 = lVar9;
    uVar8 = (*(code *)*pplVar20)();
    auVar26._8_8_ = lStack_3f0;
    auVar26._0_8_ = pplVar16;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (*(long *)(lVar11 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar16[6][1])();
      return uVar8;
    }
  }
  lStack_3f0 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_420 = 0x3d25458;
  pcStack_3f8 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_418 = uVar7;
  lStack_410 = lVar11;
  uStack_408 = auVar26._0_8_;
  pppuStack_400 = &pppuStack_3e0;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar7 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar7)
      ;
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_428 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_438 = 0;
  pppuStack_430 = &pppuStack_400;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar20[6])(auVar23._0_8_,auVar23._8_8_,&uStack_438);
    return uStack_438;
  }
  auVar23 = func_0x00f78af4();
  pcStack_448 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar14 = pplVar20;
  pppuStack_450 = &pppuStack_430;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar7 = auVar24._8_8_;
  auVar4._8_8_ = uVar7;
  auVar4._0_8_ = pplVar17;
  auVar3._8_8_ = uVar7;
  auVar3._0_8_ = pplVar17;
  lVar9 = auVar24._0_8_;
  pcStack_488 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_4b0 = lVar22;
  pplStack_4a8 = pplVar20;
  pppuStack_490 = &pppuStack_450;
  auStack_4a0 = auVar23;
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar22 = auVar27._8_8_;
    puStack_4b8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_4e8 = 0;
    lVar11 = **(long **)(lVar22 + 0x30);
    uVar1 = *(ushort *)(lVar11 + 0x132);
    lStack_4e0 = lVar9;
    pplStack_4d8 = pplVar20;
    pppuStack_4c0 = &pppuStack_490;
    auStack_4d0 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar11);
      uVar1 = *(ushort *)(lVar11 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar11 = **(long **)(lVar22 + 0x30);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = **(long **)(lVar22 + 0x30);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        func_0x00f78ad0(lVar11);
      }
    }
    lVar11 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (**(long **)(lVar11 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar13 = auVar23._8_8_;
      puStack_4f8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
      uStack_528 = 0;
      lVar21 = **(long **)(lVar13 + 0x30);
      uVar1 = *(ushort *)(lVar21 + 0x132);
      lStack_520 = lVar9;
      lStack_518 = lVar11;
      pppuStack_500 = &pppuStack_4c0;
      if ((uVar1 & 1) == 0) {
        lStack_510 = lVar22;
        uStack_508 = auVar27._0_8_;
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_510;
        auVar27._0_8_ = uStack_508;
        uVar1 = *(ushort *)(lVar21 + 0x132);
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      if ((uVar1 >> 10 & 1) != 0) {
        lVar22 = **(long **)(lVar13 + 0x30);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
          auVar27._8_8_ = lStack_510;
          auVar27._0_8_ = uStack_508;
        }
        lStack_510 = auVar27._8_8_;
        uStack_508 = auVar27._0_8_;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          lVar22 = **(long **)(lVar13 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
            auVar27._8_8_ = lStack_510;
            auVar27._0_8_ = uStack_508;
          }
          lStack_510 = auVar27._8_8_;
          uStack_508 = auVar27._0_8_;
          func_0x00f78ad0(lVar22);
          auVar27._8_8_ = lStack_510;
          auVar27._0_8_ = uStack_508;
        }
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      lVar22 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
        auVar27._8_8_ = lStack_510;
        auVar27._0_8_ = uStack_508;
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      if (**(long **)(lVar22 + 0xb8) == 0) {
        auVar23 = func_0x00f78af4();
        lVar22 = auVar23._8_8_;
        if (auVar23._0_8_ == 0) {
          lVar9 = **(long **)(lVar22 + 0x30);
          uVar1 = *(ushort *)(lVar9 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar9);
            uVar1 = *(ushort *)(lVar9 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar9 = **(long **)(lVar22 + 0x30);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
            }
            if (*(int *)(lVar9 + 0xe0) == 0) {
              lVar9 = **(long **)(lVar22 + 0x30);
              if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar9);
              }
              func_0x00f78ad0(lVar9);
            }
          }
          lVar22 = **(long **)(lVar22 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          uVar8 = **(ulong **)(lVar22 + 0xb8);
        }
        else {
          lVar9 = *(long *)(*(long *)(lVar22 + 0x30) + 8);
          if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar9);
          }
          uVar8 = func_0x00f78aec(lVar9);
          (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))(uVar8,auVar23._0_8_);
        }
        return uVar8;
      }
      (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
                (**(long **)(lVar22 + 0xb8),auVar23._0_8_,&uStack_528);
      return uStack_528;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))
              (**(long **)(lVar11 + 0xb8),auVar27._0_8_,&uStack_4e8);
    return uStack_4e8;
  }
  uVar8 = (**(code **)*pplVar17[6])();
  if ((int)uVar8 != 0) {
    pplVar20 = pplVar14;
    auVar23 = auVar3;
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_018bdaa0;
    uVar8 = (**(code **)pplVar17[6][1])(*(long *)(lVar9 + 0x18),*pplVar14);
    if ((uVar8 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar17[6][2])(*(long *)(lVar9 + 0x10),uVar7,*pplVar14);
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}



// ============================================================
// RVA: 0x18bccc0 | Core.Containers.PoolManager.TryAcquireObject<NormalShieldUsableBehaviour>
// ============================================================

ulong Core_Containers_PoolManager__TryAcquireObject_BoostUsableBehaviour_
                (long param_1,undefined8 param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  long lVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long **pplVar17;
  ulong uVar18;
  int *piVar19;
  long **pplVar20;
  long lVar21;
  long lVar22;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 ***pppuStack_500;
  undefined *puStack_4f8;
  ulong uStack_4e8;
  long lStack_4e0;
  long **pplStack_4d8;
  undefined1 auStack_4d0 [16];
  undefined8 ***pppuStack_4c0;
  undefined *puStack_4b8;
  long lStack_4b0;
  long **pplStack_4a8;
  undefined1 auStack_4a0 [16];
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  ulong uStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 ***pppuStack_400;
  code *pcStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 ***pppuStack_3e0;
  code *pcStack_3d8;
  long lStack_3d0;
  long **pplStack_3c8;
  undefined1 auStack_3c0 [16];
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  long lStack_3a0;
  long **pplStack_398;
  undefined1 auStack_390 [16];
  undefined8 ***pppuStack_380;
  code *pcStack_378;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  long **pplStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  long **pplStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 ***pppuStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [16];
  long **pplStack_280;
  long **pplStack_278;
  undefined1 **ppuStack_270;
  undefined *puStack_268;
  long lStack_258;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined1 **ppuStack_210;
  undefined *puStack_208;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined8 ***pppuStack_130;
  undefined *puStack_128;
  long *plStack_118;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long *plStack_78;
  long lStack_70;
  long **pplStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  pplVar20 = param_3;
  if ((bRam0000000003eb65d4 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d4 = 1;
  }
  lVar22 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), param_1 != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x018bcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)param_3[6][1])(param_1,uVar7,param_2);
    return uVar8;
  }
  lVar9 = func_0x00f78af4();
  puStack_48 = &Core_Containers_PoolManager__TryAcquireObject_object_;
  plStack_78 = (long *)0x0;
  pplVar14 = pplVar20;
  pplVar15 = param_4;
  lStack_70 = lVar22;
  pplStack_68 = param_3;
  lStack_60 = param_1;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar9 != 0) {
    pplVar15 = (long **)*param_4[6];
    pplVar14 = &plStack_78;
    iVar5 = (*(code *)*pplVar15)();
    plVar6 = plStack_78;
    if (iVar5 == 0) {
code_r0x018bce40:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_78 != (long *)0x0) {
      lVar22 = param_4[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto code_r0x018bce24;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,2);
code_r0x018bce24:
      uVar8 = (*(code *)*puVar10)(plVar6,pplVar20,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bce40;
    }
  }
  lVar22 = func_0x00f78af4();
  puStack_88 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  pplVar20 = pplVar14;
  ppuStack_90 = &puStack_50;
  if ((bRam0000000003eb65d5 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d5 = 1;
  }
  lVar9 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar9,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), lVar22 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x018bcf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(extraout_s0,lVar22,uVar7,extraout_x1);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_d8 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  plStack_118 = (long *)0x0;
  pplVar14 = pplVar20;
  pplVar16 = pplVar15;
  pppuStack_e0 = &ppuStack_90;
  if (lVar22 != 0) {
    pplVar16 = (long **)*pplVar15[6];
    pplVar14 = &plStack_118;
    iVar5 = (*(code *)*pplVar16)();
    plVar6 = plStack_118;
    if (iVar5 == 0) {
code_r0x018bcffc:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_118 != (long *)0x0) {
      lVar22 = pplVar15[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto code_r0x018bcfdc;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,3);
code_r0x018bcfdc:
      uVar8 = (*(code *)*puVar10)(extraout_s0_00,plVar6,pplVar20,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bcffc;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_128 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pplVar20 = pplVar14;
  pppuStack_130 = &pppuStack_e0;
  if ((bRam0000000003eb65d6 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d6 = 1;
  }
  lVar22 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_168 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pppuStack_170 = &pppuStack_130;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_178 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  pplVar14 = pplVar20;
  puStack_180 = (undefined1 *)&pppuStack_170;
  if ((bRam0000000003eb65d7 & 1) == 0) {
    puStack_180 = (undefined1 *)&pppuStack_170;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d7 = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_1b8 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  ppuStack_1c0 = &puStack_180;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_1c8 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar20 = pplVar14;
  puStack_1d0 = (undefined1 *)&ppuStack_1c0;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_1d0 = (undefined1 *)&ppuStack_1c0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar22 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_208 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_210 = &puStack_1d0;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_218 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar14 = pplVar20;
  pplVar15 = pplVar16;
  puStack_220 = (undefined1 *)&ppuStack_210;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_220 = (undefined1 *)&ppuStack_210;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_258 = 0;
  lVar22 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar22 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar22,auVar23._8_8_,&lStack_258,uRam0000000003d2fbf0);
    lVar22 = lStack_258;
    if (iVar5 != 0) {
      lVar9 = *pplVar16[6];
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      lVar9 = func_0x00f78adc(lVar22,lVar9);
      lVar22 = lStack_258;
      if (lVar9 != 0) {
        lVar9 = *pplVar16[6];
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        if (lVar22 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)func_0x00f78adc(lVar22,lVar9);
          if (plVar6 == (long *)0x0) {
            func_0x00f78e5c(lVar22,lVar9);
            goto code_r0x018bd38c;
          }
        }
        *pplVar20 = plVar6;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar20 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar9 = auVar24._8_8_;
  lVar22 = auVar24._0_8_;
  puStack_268 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_280 = pplVar16;
  pplStack_278 = pplVar20;
  ppuStack_270 = &puStack_220;
  auStack_290 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar20 = (long **)**(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar20,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar7);
      return uVar8;
    }
  }
  lVar11 = func_0x00f78af4();
  uStack_2c0 = 0x3d25458;
  puStack_298 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_2c8 = (long *)0x0;
  pplVar16 = pplVar14;
  pplStack_2b8 = pplVar20;
  pppuStack_2a0 = &ppuStack_270;
  auVar23 = auVar24;
  if (lVar11 != 0) {
    pplVar15 = (long **)*pplVar14[6];
    pplVar16 = &plStack_2c8;
    lStack_2b0 = lVar9;
    lStack_2a8 = lVar22;
    uVar8 = (*(code *)*pplVar15)();
    plVar6 = plStack_2c8;
    auVar23._8_8_ = lStack_2b0;
    auVar23._0_8_ = lStack_2a8;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar8;
    pplVar20 = pplVar14;
    if (plStack_2c8 != (long *)0x0) {
      lVar22 = pplVar14[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,6);
code_r0x018bd514:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
      return uVar8;
    }
  }
  lStack_2b0 = auVar23._8_8_;
  lStack_2a8 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar9 = auVar25._8_8_;
  lVar22 = auVar25._0_8_;
  uStack_300 = 0x3d25458;
  pcStack_2d8 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_2f8 = pplVar20;
  pppuStack_2e0 = &pppuStack_2a0;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_2f0 = auVar24._8_8_;
    uStack_2e8 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_2f0;
    auVar24._0_8_ = uStack_2e8;
    bRam0000000003eb65db = 1;
  }
  uStack_2f0 = auVar24._8_8_;
  uStack_2e8 = auVar24._0_8_;
  uVar7 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_2f0;
    auVar24._0_8_ = uStack_2e8;
  }
  uStack_2f0 = auVar24._8_8_;
  uStack_2e8 = auVar24._0_8_;
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar12);
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_330 = 0x3d25458;
  pcStack_308 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar20 = pplVar16;
  uStack_328 = uVar7;
  pppuStack_310 = &pppuStack_2e0;
  if (auVar23._0_8_ != 0) {
    pplVar20 = (long **)*pplVar16[6];
    lStack_320 = lVar9;
    lStack_318 = lVar22;
    (*(code *)*pplVar20)();
    auVar25._8_8_ = lStack_320;
    auVar25._0_8_ = lStack_318;
    lVar22 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar16[6][1])(lVar22,auVar23._8_8_);
      return uVar8;
    }
  }
  lStack_320 = auVar25._8_8_;
  lStack_318 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_338 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar14 = pplVar20;
  pppuStack_340 = &pppuStack_310;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar14;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_3d0 = auVar24._0_8_;
  pcStack_378 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar16 = pplVar14;
  pplVar17 = pplVar15;
  lStack_3a0 = lVar22;
  pplStack_398 = pplVar20;
  pppuStack_380 = &pppuStack_340;
  auStack_390 = auVar23;
  if (*(long *)(lStack_3d0 + 0x18) != 0) {
    pplVar16 = (long **)pplVar15[6][1];
    (*(code *)*pplVar16)(*(long *)(lStack_3d0 + 0x18),pplVar14);
    pplVar20 = pplVar15;
    auVar23 = auVar2;
    if (*(long *)(lStack_3d0 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar15[6][2])(*(long *)(lStack_3d0 + 0x10),auVar24._8_8_,pplVar14);
      return uVar8;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar9 = auVar26._8_8_;
  lVar22 = auVar26._0_8_;
  pcStack_3a8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_3c8 = pplVar20;
  pppuStack_3b0 = &pppuStack_380;
  auStack_3c0 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar7 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar12);
      return uVar8;
    }
  }
  lVar11 = func_0x00f78af4();
  pcStack_3d8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar20 = pplVar16;
  lStack_3e8 = lVar22;
  pppuStack_3e0 = &pppuStack_3b0;
  if (*(long *)(lVar11 + 0x10) != 0) {
    pplVar20 = (long **)*pplVar16[6];
    lStack_3f0 = lVar9;
    uVar8 = (*(code *)*pplVar20)();
    auVar26._8_8_ = lStack_3f0;
    auVar26._0_8_ = pplVar16;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (*(long *)(lVar11 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar16[6][1])();
      return uVar8;
    }
  }
  lStack_3f0 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_420 = 0x3d25458;
  pcStack_3f8 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_418 = uVar7;
  lStack_410 = lVar11;
  uStack_408 = auVar26._0_8_;
  pppuStack_400 = &pppuStack_3e0;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar7 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar7)
      ;
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_428 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_438 = 0;
  pppuStack_430 = &pppuStack_400;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar20[6])(auVar23._0_8_,auVar23._8_8_,&uStack_438);
    return uStack_438;
  }
  auVar23 = func_0x00f78af4();
  pcStack_448 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar14 = pplVar20;
  pppuStack_450 = &pppuStack_430;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar7 = auVar24._8_8_;
  auVar4._8_8_ = uVar7;
  auVar4._0_8_ = pplVar17;
  auVar3._8_8_ = uVar7;
  auVar3._0_8_ = pplVar17;
  lVar9 = auVar24._0_8_;
  pcStack_488 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_4b0 = lVar22;
  pplStack_4a8 = pplVar20;
  pppuStack_490 = &pppuStack_450;
  auStack_4a0 = auVar23;
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar22 = auVar27._8_8_;
    puStack_4b8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_4e8 = 0;
    lVar11 = **(long **)(lVar22 + 0x30);
    uVar1 = *(ushort *)(lVar11 + 0x132);
    lStack_4e0 = lVar9;
    pplStack_4d8 = pplVar20;
    pppuStack_4c0 = &pppuStack_490;
    auStack_4d0 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar11);
      uVar1 = *(ushort *)(lVar11 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar11 = **(long **)(lVar22 + 0x30);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = **(long **)(lVar22 + 0x30);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        func_0x00f78ad0(lVar11);
      }
    }
    lVar11 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (**(long **)(lVar11 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar13 = auVar23._8_8_;
      puStack_4f8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
      uStack_528 = 0;
      lVar21 = **(long **)(lVar13 + 0x30);
      uVar1 = *(ushort *)(lVar21 + 0x132);
      lStack_520 = lVar9;
      lStack_518 = lVar11;
      pppuStack_500 = &pppuStack_4c0;
      if ((uVar1 & 1) == 0) {
        lStack_510 = lVar22;
        uStack_508 = auVar27._0_8_;
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_510;
        auVar27._0_8_ = uStack_508;
        uVar1 = *(ushort *)(lVar21 + 0x132);
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      if ((uVar1 >> 10 & 1) != 0) {
        lVar22 = **(long **)(lVar13 + 0x30);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
          auVar27._8_8_ = lStack_510;
          auVar27._0_8_ = uStack_508;
        }
        lStack_510 = auVar27._8_8_;
        uStack_508 = auVar27._0_8_;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          lVar22 = **(long **)(lVar13 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
            auVar27._8_8_ = lStack_510;
            auVar27._0_8_ = uStack_508;
          }
          lStack_510 = auVar27._8_8_;
          uStack_508 = auVar27._0_8_;
          func_0x00f78ad0(lVar22);
          auVar27._8_8_ = lStack_510;
          auVar27._0_8_ = uStack_508;
        }
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      lVar22 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
        auVar27._8_8_ = lStack_510;
        auVar27._0_8_ = uStack_508;
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      if (**(long **)(lVar22 + 0xb8) == 0) {
        auVar23 = func_0x00f78af4();
        lVar22 = auVar23._8_8_;
        if (auVar23._0_8_ == 0) {
          lVar9 = **(long **)(lVar22 + 0x30);
          uVar1 = *(ushort *)(lVar9 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar9);
            uVar1 = *(ushort *)(lVar9 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar9 = **(long **)(lVar22 + 0x30);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
            }
            if (*(int *)(lVar9 + 0xe0) == 0) {
              lVar9 = **(long **)(lVar22 + 0x30);
              if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar9);
              }
              func_0x00f78ad0(lVar9);
            }
          }
          lVar22 = **(long **)(lVar22 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          uVar8 = **(ulong **)(lVar22 + 0xb8);
        }
        else {
          lVar9 = *(long *)(*(long *)(lVar22 + 0x30) + 8);
          if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar9);
          }
          uVar8 = func_0x00f78aec(lVar9);
          (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))(uVar8,auVar23._0_8_);
        }
        return uVar8;
      }
      (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
                (**(long **)(lVar22 + 0xb8),auVar23._0_8_,&uStack_528);
      return uStack_528;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))
              (**(long **)(lVar11 + 0xb8),auVar27._0_8_,&uStack_4e8);
    return uStack_4e8;
  }
  uVar8 = (**(code **)*pplVar17[6])();
  if ((int)uVar8 != 0) {
    pplVar20 = pplVar14;
    auVar23 = auVar3;
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_018bdaa0;
    uVar8 = (**(code **)pplVar17[6][1])(*(long *)(lVar9 + 0x18),*pplVar14);
    if ((uVar8 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar17[6][2])(*(long *)(lVar9 + 0x10),uVar7,*pplVar14);
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}



// ============================================================
// RVA: 0x18bccc0 | Core.Containers.PoolManager.TryAcquireObject<PlacementHomingProjectileBehaviour>
// ============================================================

ulong Core_Containers_PoolManager__TryAcquireObject_BoostUsableBehaviour_
                (long param_1,undefined8 param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  long lVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long **pplVar17;
  ulong uVar18;
  int *piVar19;
  long **pplVar20;
  long lVar21;
  long lVar22;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 ***pppuStack_500;
  undefined *puStack_4f8;
  ulong uStack_4e8;
  long lStack_4e0;
  long **pplStack_4d8;
  undefined1 auStack_4d0 [16];
  undefined8 ***pppuStack_4c0;
  undefined *puStack_4b8;
  long lStack_4b0;
  long **pplStack_4a8;
  undefined1 auStack_4a0 [16];
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  ulong uStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 ***pppuStack_400;
  code *pcStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 ***pppuStack_3e0;
  code *pcStack_3d8;
  long lStack_3d0;
  long **pplStack_3c8;
  undefined1 auStack_3c0 [16];
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  long lStack_3a0;
  long **pplStack_398;
  undefined1 auStack_390 [16];
  undefined8 ***pppuStack_380;
  code *pcStack_378;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  long **pplStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  long **pplStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 ***pppuStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [16];
  long **pplStack_280;
  long **pplStack_278;
  undefined1 **ppuStack_270;
  undefined *puStack_268;
  long lStack_258;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined1 **ppuStack_210;
  undefined *puStack_208;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined8 ***pppuStack_130;
  undefined *puStack_128;
  long *plStack_118;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long *plStack_78;
  long lStack_70;
  long **pplStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  pplVar20 = param_3;
  if ((bRam0000000003eb65d4 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d4 = 1;
  }
  lVar22 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), param_1 != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x018bcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)param_3[6][1])(param_1,uVar7,param_2);
    return uVar8;
  }
  lVar9 = func_0x00f78af4();
  puStack_48 = &Core_Containers_PoolManager__TryAcquireObject_object_;
  plStack_78 = (long *)0x0;
  pplVar14 = pplVar20;
  pplVar15 = param_4;
  lStack_70 = lVar22;
  pplStack_68 = param_3;
  lStack_60 = param_1;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar9 != 0) {
    pplVar15 = (long **)*param_4[6];
    pplVar14 = &plStack_78;
    iVar5 = (*(code *)*pplVar15)();
    plVar6 = plStack_78;
    if (iVar5 == 0) {
code_r0x018bce40:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_78 != (long *)0x0) {
      lVar22 = param_4[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto code_r0x018bce24;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,2);
code_r0x018bce24:
      uVar8 = (*(code *)*puVar10)(plVar6,pplVar20,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bce40;
    }
  }
  lVar22 = func_0x00f78af4();
  puStack_88 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  pplVar20 = pplVar14;
  ppuStack_90 = &puStack_50;
  if ((bRam0000000003eb65d5 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d5 = 1;
  }
  lVar9 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar9,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), lVar22 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x018bcf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(extraout_s0,lVar22,uVar7,extraout_x1);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_d8 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  plStack_118 = (long *)0x0;
  pplVar14 = pplVar20;
  pplVar16 = pplVar15;
  pppuStack_e0 = &ppuStack_90;
  if (lVar22 != 0) {
    pplVar16 = (long **)*pplVar15[6];
    pplVar14 = &plStack_118;
    iVar5 = (*(code *)*pplVar16)();
    plVar6 = plStack_118;
    if (iVar5 == 0) {
code_r0x018bcffc:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_118 != (long *)0x0) {
      lVar22 = pplVar15[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto code_r0x018bcfdc;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,3);
code_r0x018bcfdc:
      uVar8 = (*(code *)*puVar10)(extraout_s0_00,plVar6,pplVar20,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bcffc;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_128 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pplVar20 = pplVar14;
  pppuStack_130 = &pppuStack_e0;
  if ((bRam0000000003eb65d6 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d6 = 1;
  }
  lVar22 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_168 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pppuStack_170 = &pppuStack_130;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_178 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  pplVar14 = pplVar20;
  puStack_180 = (undefined1 *)&pppuStack_170;
  if ((bRam0000000003eb65d7 & 1) == 0) {
    puStack_180 = (undefined1 *)&pppuStack_170;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d7 = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_1b8 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  ppuStack_1c0 = &puStack_180;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_1c8 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar20 = pplVar14;
  puStack_1d0 = (undefined1 *)&ppuStack_1c0;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_1d0 = (undefined1 *)&ppuStack_1c0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar22 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_208 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_210 = &puStack_1d0;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_218 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar14 = pplVar20;
  pplVar15 = pplVar16;
  puStack_220 = (undefined1 *)&ppuStack_210;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_220 = (undefined1 *)&ppuStack_210;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_258 = 0;
  lVar22 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar22 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar22,auVar23._8_8_,&lStack_258,uRam0000000003d2fbf0);
    lVar22 = lStack_258;
    if (iVar5 != 0) {
      lVar9 = *pplVar16[6];
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      lVar9 = func_0x00f78adc(lVar22,lVar9);
      lVar22 = lStack_258;
      if (lVar9 != 0) {
        lVar9 = *pplVar16[6];
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        if (lVar22 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)func_0x00f78adc(lVar22,lVar9);
          if (plVar6 == (long *)0x0) {
            func_0x00f78e5c(lVar22,lVar9);
            goto code_r0x018bd38c;
          }
        }
        *pplVar20 = plVar6;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar20 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar9 = auVar24._8_8_;
  lVar22 = auVar24._0_8_;
  puStack_268 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_280 = pplVar16;
  pplStack_278 = pplVar20;
  ppuStack_270 = &puStack_220;
  auStack_290 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar20 = (long **)**(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar20,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar7);
      return uVar8;
    }
  }
  lVar11 = func_0x00f78af4();
  uStack_2c0 = 0x3d25458;
  puStack_298 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_2c8 = (long *)0x0;
  pplVar16 = pplVar14;
  pplStack_2b8 = pplVar20;
  pppuStack_2a0 = &ppuStack_270;
  auVar23 = auVar24;
  if (lVar11 != 0) {
    pplVar15 = (long **)*pplVar14[6];
    pplVar16 = &plStack_2c8;
    lStack_2b0 = lVar9;
    lStack_2a8 = lVar22;
    uVar8 = (*(code *)*pplVar15)();
    plVar6 = plStack_2c8;
    auVar23._8_8_ = lStack_2b0;
    auVar23._0_8_ = lStack_2a8;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar8;
    pplVar20 = pplVar14;
    if (plStack_2c8 != (long *)0x0) {
      lVar22 = pplVar14[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,6);
code_r0x018bd514:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
      return uVar8;
    }
  }
  lStack_2b0 = auVar23._8_8_;
  lStack_2a8 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar9 = auVar25._8_8_;
  lVar22 = auVar25._0_8_;
  uStack_300 = 0x3d25458;
  pcStack_2d8 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_2f8 = pplVar20;
  pppuStack_2e0 = &pppuStack_2a0;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_2f0 = auVar24._8_8_;
    uStack_2e8 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_2f0;
    auVar24._0_8_ = uStack_2e8;
    bRam0000000003eb65db = 1;
  }
  uStack_2f0 = auVar24._8_8_;
  uStack_2e8 = auVar24._0_8_;
  uVar7 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_2f0;
    auVar24._0_8_ = uStack_2e8;
  }
  uStack_2f0 = auVar24._8_8_;
  uStack_2e8 = auVar24._0_8_;
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar12);
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_330 = 0x3d25458;
  pcStack_308 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar20 = pplVar16;
  uStack_328 = uVar7;
  pppuStack_310 = &pppuStack_2e0;
  if (auVar23._0_8_ != 0) {
    pplVar20 = (long **)*pplVar16[6];
    lStack_320 = lVar9;
    lStack_318 = lVar22;
    (*(code *)*pplVar20)();
    auVar25._8_8_ = lStack_320;
    auVar25._0_8_ = lStack_318;
    lVar22 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar16[6][1])(lVar22,auVar23._8_8_);
      return uVar8;
    }
  }
  lStack_320 = auVar25._8_8_;
  lStack_318 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_338 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar14 = pplVar20;
  pppuStack_340 = &pppuStack_310;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar14;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_3d0 = auVar24._0_8_;
  pcStack_378 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar16 = pplVar14;
  pplVar17 = pplVar15;
  lStack_3a0 = lVar22;
  pplStack_398 = pplVar20;
  pppuStack_380 = &pppuStack_340;
  auStack_390 = auVar23;
  if (*(long *)(lStack_3d0 + 0x18) != 0) {
    pplVar16 = (long **)pplVar15[6][1];
    (*(code *)*pplVar16)(*(long *)(lStack_3d0 + 0x18),pplVar14);
    pplVar20 = pplVar15;
    auVar23 = auVar2;
    if (*(long *)(lStack_3d0 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar15[6][2])(*(long *)(lStack_3d0 + 0x10),auVar24._8_8_,pplVar14);
      return uVar8;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar9 = auVar26._8_8_;
  lVar22 = auVar26._0_8_;
  pcStack_3a8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_3c8 = pplVar20;
  pppuStack_3b0 = &pppuStack_380;
  auStack_3c0 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar7 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar12);
      return uVar8;
    }
  }
  lVar11 = func_0x00f78af4();
  pcStack_3d8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar20 = pplVar16;
  lStack_3e8 = lVar22;
  pppuStack_3e0 = &pppuStack_3b0;
  if (*(long *)(lVar11 + 0x10) != 0) {
    pplVar20 = (long **)*pplVar16[6];
    lStack_3f0 = lVar9;
    uVar8 = (*(code *)*pplVar20)();
    auVar26._8_8_ = lStack_3f0;
    auVar26._0_8_ = pplVar16;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (*(long *)(lVar11 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar16[6][1])();
      return uVar8;
    }
  }
  lStack_3f0 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_420 = 0x3d25458;
  pcStack_3f8 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_418 = uVar7;
  lStack_410 = lVar11;
  uStack_408 = auVar26._0_8_;
  pppuStack_400 = &pppuStack_3e0;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar7 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar7)
      ;
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_428 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_438 = 0;
  pppuStack_430 = &pppuStack_400;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar20[6])(auVar23._0_8_,auVar23._8_8_,&uStack_438);
    return uStack_438;
  }
  auVar23 = func_0x00f78af4();
  pcStack_448 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar14 = pplVar20;
  pppuStack_450 = &pppuStack_430;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar7 = auVar24._8_8_;
  auVar4._8_8_ = uVar7;
  auVar4._0_8_ = pplVar17;
  auVar3._8_8_ = uVar7;
  auVar3._0_8_ = pplVar17;
  lVar9 = auVar24._0_8_;
  pcStack_488 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_4b0 = lVar22;
  pplStack_4a8 = pplVar20;
  pppuStack_490 = &pppuStack_450;
  auStack_4a0 = auVar23;
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar22 = auVar27._8_8_;
    puStack_4b8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_4e8 = 0;
    lVar11 = **(long **)(lVar22 + 0x30);
    uVar1 = *(ushort *)(lVar11 + 0x132);
    lStack_4e0 = lVar9;
    pplStack_4d8 = pplVar20;
    pppuStack_4c0 = &pppuStack_490;
    auStack_4d0 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar11);
      uVar1 = *(ushort *)(lVar11 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar11 = **(long **)(lVar22 + 0x30);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = **(long **)(lVar22 + 0x30);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        func_0x00f78ad0(lVar11);
      }
    }
    lVar11 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (**(long **)(lVar11 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar13 = auVar23._8_8_;
      puStack_4f8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
      uStack_528 = 0;
      lVar21 = **(long **)(lVar13 + 0x30);
      uVar1 = *(ushort *)(lVar21 + 0x132);
      lStack_520 = lVar9;
      lStack_518 = lVar11;
      pppuStack_500 = &pppuStack_4c0;
      if ((uVar1 & 1) == 0) {
        lStack_510 = lVar22;
        uStack_508 = auVar27._0_8_;
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_510;
        auVar27._0_8_ = uStack_508;
        uVar1 = *(ushort *)(lVar21 + 0x132);
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      if ((uVar1 >> 10 & 1) != 0) {
        lVar22 = **(long **)(lVar13 + 0x30);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
          auVar27._8_8_ = lStack_510;
          auVar27._0_8_ = uStack_508;
        }
        lStack_510 = auVar27._8_8_;
        uStack_508 = auVar27._0_8_;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          lVar22 = **(long **)(lVar13 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
            auVar27._8_8_ = lStack_510;
            auVar27._0_8_ = uStack_508;
          }
          lStack_510 = auVar27._8_8_;
          uStack_508 = auVar27._0_8_;
          func_0x00f78ad0(lVar22);
          auVar27._8_8_ = lStack_510;
          auVar27._0_8_ = uStack_508;
        }
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      lVar22 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
        auVar27._8_8_ = lStack_510;
        auVar27._0_8_ = uStack_508;
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      if (**(long **)(lVar22 + 0xb8) == 0) {
        auVar23 = func_0x00f78af4();
        lVar22 = auVar23._8_8_;
        if (auVar23._0_8_ == 0) {
          lVar9 = **(long **)(lVar22 + 0x30);
          uVar1 = *(ushort *)(lVar9 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar9);
            uVar1 = *(ushort *)(lVar9 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar9 = **(long **)(lVar22 + 0x30);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
            }
            if (*(int *)(lVar9 + 0xe0) == 0) {
              lVar9 = **(long **)(lVar22 + 0x30);
              if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar9);
              }
              func_0x00f78ad0(lVar9);
            }
          }
          lVar22 = **(long **)(lVar22 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          uVar8 = **(ulong **)(lVar22 + 0xb8);
        }
        else {
          lVar9 = *(long *)(*(long *)(lVar22 + 0x30) + 8);
          if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar9);
          }
          uVar8 = func_0x00f78aec(lVar9);
          (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))(uVar8,auVar23._0_8_);
        }
        return uVar8;
      }
      (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
                (**(long **)(lVar22 + 0xb8),auVar23._0_8_,&uStack_528);
      return uStack_528;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))
              (**(long **)(lVar11 + 0xb8),auVar27._0_8_,&uStack_4e8);
    return uStack_4e8;
  }
  uVar8 = (**(code **)*pplVar17[6])();
  if ((int)uVar8 != 0) {
    pplVar20 = pplVar14;
    auVar23 = auVar3;
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_018bdaa0;
    uVar8 = (**(code **)pplVar17[6][1])(*(long *)(lVar9 + 0x18),*pplVar14);
    if ((uVar8 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar17[6][2])(*(long *)(lVar9 + 0x10),uVar7,*pplVar14);
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}



// ============================================================
// RVA: 0x18bccc0 | Core.Containers.PoolManager.TryAcquireObject<PortalVFXBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bccc0 | Core.Containers.PoolManager.TryAcquireObject<ProximityHomingProjectileBehaviour>
// ============================================================

ulong Core_Containers_PoolManager__TryAcquireObject_BoostUsableBehaviour_
                (long param_1,undefined8 param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  long lVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long **pplVar17;
  ulong uVar18;
  int *piVar19;
  long **pplVar20;
  long lVar21;
  long lVar22;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 ***pppuStack_500;
  undefined *puStack_4f8;
  ulong uStack_4e8;
  long lStack_4e0;
  long **pplStack_4d8;
  undefined1 auStack_4d0 [16];
  undefined8 ***pppuStack_4c0;
  undefined *puStack_4b8;
  long lStack_4b0;
  long **pplStack_4a8;
  undefined1 auStack_4a0 [16];
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  ulong uStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 ***pppuStack_400;
  code *pcStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 ***pppuStack_3e0;
  code *pcStack_3d8;
  long lStack_3d0;
  long **pplStack_3c8;
  undefined1 auStack_3c0 [16];
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  long lStack_3a0;
  long **pplStack_398;
  undefined1 auStack_390 [16];
  undefined8 ***pppuStack_380;
  code *pcStack_378;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  long **pplStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  long **pplStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 ***pppuStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [16];
  long **pplStack_280;
  long **pplStack_278;
  undefined1 **ppuStack_270;
  undefined *puStack_268;
  long lStack_258;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined1 **ppuStack_210;
  undefined *puStack_208;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined8 ***pppuStack_130;
  undefined *puStack_128;
  long *plStack_118;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long *plStack_78;
  long lStack_70;
  long **pplStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  pplVar20 = param_3;
  if ((bRam0000000003eb65d4 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d4 = 1;
  }
  lVar22 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), param_1 != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x018bcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)param_3[6][1])(param_1,uVar7,param_2);
    return uVar8;
  }
  lVar9 = func_0x00f78af4();
  puStack_48 = &Core_Containers_PoolManager__TryAcquireObject_object_;
  plStack_78 = (long *)0x0;
  pplVar14 = pplVar20;
  pplVar15 = param_4;
  lStack_70 = lVar22;
  pplStack_68 = param_3;
  lStack_60 = param_1;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar9 != 0) {
    pplVar15 = (long **)*param_4[6];
    pplVar14 = &plStack_78;
    iVar5 = (*(code *)*pplVar15)();
    plVar6 = plStack_78;
    if (iVar5 == 0) {
code_r0x018bce40:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_78 != (long *)0x0) {
      lVar22 = param_4[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto code_r0x018bce24;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,2);
code_r0x018bce24:
      uVar8 = (*(code *)*puVar10)(plVar6,pplVar20,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bce40;
    }
  }
  lVar22 = func_0x00f78af4();
  puStack_88 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  pplVar20 = pplVar14;
  ppuStack_90 = &puStack_50;
  if ((bRam0000000003eb65d5 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d5 = 1;
  }
  lVar9 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar9,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), lVar22 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x018bcf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(extraout_s0,lVar22,uVar7,extraout_x1);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_d8 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  plStack_118 = (long *)0x0;
  pplVar14 = pplVar20;
  pplVar16 = pplVar15;
  pppuStack_e0 = &ppuStack_90;
  if (lVar22 != 0) {
    pplVar16 = (long **)*pplVar15[6];
    pplVar14 = &plStack_118;
    iVar5 = (*(code *)*pplVar16)();
    plVar6 = plStack_118;
    if (iVar5 == 0) {
code_r0x018bcffc:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_118 != (long *)0x0) {
      lVar22 = pplVar15[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto code_r0x018bcfdc;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,3);
code_r0x018bcfdc:
      uVar8 = (*(code *)*puVar10)(extraout_s0_00,plVar6,pplVar20,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bcffc;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_128 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pplVar20 = pplVar14;
  pppuStack_130 = &pppuStack_e0;
  if ((bRam0000000003eb65d6 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d6 = 1;
  }
  lVar22 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_168 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pppuStack_170 = &pppuStack_130;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_178 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  pplVar14 = pplVar20;
  puStack_180 = (undefined1 *)&pppuStack_170;
  if ((bRam0000000003eb65d7 & 1) == 0) {
    puStack_180 = (undefined1 *)&pppuStack_170;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d7 = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_1b8 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  ppuStack_1c0 = &puStack_180;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_1c8 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar20 = pplVar14;
  puStack_1d0 = (undefined1 *)&ppuStack_1c0;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_1d0 = (undefined1 *)&ppuStack_1c0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar22 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_208 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_210 = &puStack_1d0;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_218 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar14 = pplVar20;
  pplVar15 = pplVar16;
  puStack_220 = (undefined1 *)&ppuStack_210;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_220 = (undefined1 *)&ppuStack_210;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_258 = 0;
  lVar22 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar22 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar22,auVar23._8_8_,&lStack_258,uRam0000000003d2fbf0);
    lVar22 = lStack_258;
    if (iVar5 != 0) {
      lVar9 = *pplVar16[6];
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      lVar9 = func_0x00f78adc(lVar22,lVar9);
      lVar22 = lStack_258;
      if (lVar9 != 0) {
        lVar9 = *pplVar16[6];
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        if (lVar22 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)func_0x00f78adc(lVar22,lVar9);
          if (plVar6 == (long *)0x0) {
            func_0x00f78e5c(lVar22,lVar9);
            goto code_r0x018bd38c;
          }
        }
        *pplVar20 = plVar6;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar20 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar9 = auVar24._8_8_;
  lVar22 = auVar24._0_8_;
  puStack_268 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_280 = pplVar16;
  pplStack_278 = pplVar20;
  ppuStack_270 = &puStack_220;
  auStack_290 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar20 = (long **)**(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar20,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar7);
      return uVar8;
    }
  }
  lVar11 = func_0x00f78af4();
  uStack_2c0 = 0x3d25458;
  puStack_298 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_2c8 = (long *)0x0;
  pplVar16 = pplVar14;
  pplStack_2b8 = pplVar20;
  pppuStack_2a0 = &ppuStack_270;
  auVar23 = auVar24;
  if (lVar11 != 0) {
    pplVar15 = (long **)*pplVar14[6];
    pplVar16 = &plStack_2c8;
    lStack_2b0 = lVar9;
    lStack_2a8 = lVar22;
    uVar8 = (*(code *)*pplVar15)();
    plVar6 = plStack_2c8;
    auVar23._8_8_ = lStack_2b0;
    auVar23._0_8_ = lStack_2a8;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar8;
    pplVar20 = pplVar14;
    if (plStack_2c8 != (long *)0x0) {
      lVar22 = pplVar14[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,6);
code_r0x018bd514:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
      return uVar8;
    }
  }
  lStack_2b0 = auVar23._8_8_;
  lStack_2a8 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar9 = auVar25._8_8_;
  lVar22 = auVar25._0_8_;
  uStack_300 = 0x3d25458;
  pcStack_2d8 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_2f8 = pplVar20;
  pppuStack_2e0 = &pppuStack_2a0;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_2f0 = auVar24._8_8_;
    uStack_2e8 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_2f0;
    auVar24._0_8_ = uStack_2e8;
    bRam0000000003eb65db = 1;
  }
  uStack_2f0 = auVar24._8_8_;
  uStack_2e8 = auVar24._0_8_;
  uVar7 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_2f0;
    auVar24._0_8_ = uStack_2e8;
  }
  uStack_2f0 = auVar24._8_8_;
  uStack_2e8 = auVar24._0_8_;
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar12);
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_330 = 0x3d25458;
  pcStack_308 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar20 = pplVar16;
  uStack_328 = uVar7;
  pppuStack_310 = &pppuStack_2e0;
  if (auVar23._0_8_ != 0) {
    pplVar20 = (long **)*pplVar16[6];
    lStack_320 = lVar9;
    lStack_318 = lVar22;
    (*(code *)*pplVar20)();
    auVar25._8_8_ = lStack_320;
    auVar25._0_8_ = lStack_318;
    lVar22 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar16[6][1])(lVar22,auVar23._8_8_);
      return uVar8;
    }
  }
  lStack_320 = auVar25._8_8_;
  lStack_318 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_338 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar14 = pplVar20;
  pppuStack_340 = &pppuStack_310;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar14;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_3d0 = auVar24._0_8_;
  pcStack_378 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar16 = pplVar14;
  pplVar17 = pplVar15;
  lStack_3a0 = lVar22;
  pplStack_398 = pplVar20;
  pppuStack_380 = &pppuStack_340;
  auStack_390 = auVar23;
  if (*(long *)(lStack_3d0 + 0x18) != 0) {
    pplVar16 = (long **)pplVar15[6][1];
    (*(code *)*pplVar16)(*(long *)(lStack_3d0 + 0x18),pplVar14);
    pplVar20 = pplVar15;
    auVar23 = auVar2;
    if (*(long *)(lStack_3d0 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar15[6][2])(*(long *)(lStack_3d0 + 0x10),auVar24._8_8_,pplVar14);
      return uVar8;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar9 = auVar26._8_8_;
  lVar22 = auVar26._0_8_;
  pcStack_3a8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_3c8 = pplVar20;
  pppuStack_3b0 = &pppuStack_380;
  auStack_3c0 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar7 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar12);
      return uVar8;
    }
  }
  lVar11 = func_0x00f78af4();
  pcStack_3d8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar20 = pplVar16;
  lStack_3e8 = lVar22;
  pppuStack_3e0 = &pppuStack_3b0;
  if (*(long *)(lVar11 + 0x10) != 0) {
    pplVar20 = (long **)*pplVar16[6];
    lStack_3f0 = lVar9;
    uVar8 = (*(code *)*pplVar20)();
    auVar26._8_8_ = lStack_3f0;
    auVar26._0_8_ = pplVar16;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (*(long *)(lVar11 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar16[6][1])();
      return uVar8;
    }
  }
  lStack_3f0 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_420 = 0x3d25458;
  pcStack_3f8 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_418 = uVar7;
  lStack_410 = lVar11;
  uStack_408 = auVar26._0_8_;
  pppuStack_400 = &pppuStack_3e0;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar7 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar7)
      ;
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_428 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_438 = 0;
  pppuStack_430 = &pppuStack_400;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar20[6])(auVar23._0_8_,auVar23._8_8_,&uStack_438);
    return uStack_438;
  }
  auVar23 = func_0x00f78af4();
  pcStack_448 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar14 = pplVar20;
  pppuStack_450 = &pppuStack_430;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar7 = auVar24._8_8_;
  auVar4._8_8_ = uVar7;
  auVar4._0_8_ = pplVar17;
  auVar3._8_8_ = uVar7;
  auVar3._0_8_ = pplVar17;
  lVar9 = auVar24._0_8_;
  pcStack_488 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_4b0 = lVar22;
  pplStack_4a8 = pplVar20;
  pppuStack_490 = &pppuStack_450;
  auStack_4a0 = auVar23;
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar22 = auVar27._8_8_;
    puStack_4b8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_4e8 = 0;
    lVar11 = **(long **)(lVar22 + 0x30);
    uVar1 = *(ushort *)(lVar11 + 0x132);
    lStack_4e0 = lVar9;
    pplStack_4d8 = pplVar20;
    pppuStack_4c0 = &pppuStack_490;
    auStack_4d0 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar11);
      uVar1 = *(ushort *)(lVar11 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar11 = **(long **)(lVar22 + 0x30);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = **(long **)(lVar22 + 0x30);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        func_0x00f78ad0(lVar11);
      }
    }
    lVar11 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (**(long **)(lVar11 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar13 = auVar23._8_8_;
      puStack_4f8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
      uStack_528 = 0;
      lVar21 = **(long **)(lVar13 + 0x30);
      uVar1 = *(ushort *)(lVar21 + 0x132);
      lStack_520 = lVar9;
      lStack_518 = lVar11;
      pppuStack_500 = &pppuStack_4c0;
      if ((uVar1 & 1) == 0) {
        lStack_510 = lVar22;
        uStack_508 = auVar27._0_8_;
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_510;
        auVar27._0_8_ = uStack_508;
        uVar1 = *(ushort *)(lVar21 + 0x132);
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      if ((uVar1 >> 10 & 1) != 0) {
        lVar22 = **(long **)(lVar13 + 0x30);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
          auVar27._8_8_ = lStack_510;
          auVar27._0_8_ = uStack_508;
        }
        lStack_510 = auVar27._8_8_;
        uStack_508 = auVar27._0_8_;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          lVar22 = **(long **)(lVar13 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
            auVar27._8_8_ = lStack_510;
            auVar27._0_8_ = uStack_508;
          }
          lStack_510 = auVar27._8_8_;
          uStack_508 = auVar27._0_8_;
          func_0x00f78ad0(lVar22);
          auVar27._8_8_ = lStack_510;
          auVar27._0_8_ = uStack_508;
        }
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      lVar22 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
        auVar27._8_8_ = lStack_510;
        auVar27._0_8_ = uStack_508;
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      if (**(long **)(lVar22 + 0xb8) == 0) {
        auVar23 = func_0x00f78af4();
        lVar22 = auVar23._8_8_;
        if (auVar23._0_8_ == 0) {
          lVar9 = **(long **)(lVar22 + 0x30);
          uVar1 = *(ushort *)(lVar9 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar9);
            uVar1 = *(ushort *)(lVar9 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar9 = **(long **)(lVar22 + 0x30);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
            }
            if (*(int *)(lVar9 + 0xe0) == 0) {
              lVar9 = **(long **)(lVar22 + 0x30);
              if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar9);
              }
              func_0x00f78ad0(lVar9);
            }
          }
          lVar22 = **(long **)(lVar22 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          uVar8 = **(ulong **)(lVar22 + 0xb8);
        }
        else {
          lVar9 = *(long *)(*(long *)(lVar22 + 0x30) + 8);
          if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar9);
          }
          uVar8 = func_0x00f78aec(lVar9);
          (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))(uVar8,auVar23._0_8_);
        }
        return uVar8;
      }
      (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
                (**(long **)(lVar22 + 0xb8),auVar23._0_8_,&uStack_528);
      return uStack_528;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))
              (**(long **)(lVar11 + 0xb8),auVar27._0_8_,&uStack_4e8);
    return uStack_4e8;
  }
  uVar8 = (**(code **)*pplVar17[6])();
  if ((int)uVar8 != 0) {
    pplVar20 = pplVar14;
    auVar23 = auVar3;
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_018bdaa0;
    uVar8 = (**(code **)pplVar17[6][1])(*(long *)(lVar9 + 0x18),*pplVar14);
    if ((uVar8 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar17[6][2])(*(long *)(lVar9 + 0x10),uVar7,*pplVar14);
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}



// ============================================================
// RVA: 0x18bccc0 | Core.Containers.PoolManager.TryAcquireObject<RicochetProjectileBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bccc0 | Core.Containers.PoolManager.TryAcquireObject<SatelliteUsableBehaviour>
// ============================================================

ulong Core_Containers_PoolManager__TryAcquireObject_BoostUsableBehaviour_
                (long param_1,undefined8 param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  long lVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long **pplVar17;
  ulong uVar18;
  int *piVar19;
  long **pplVar20;
  long lVar21;
  long lVar22;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 ***pppuStack_500;
  undefined *puStack_4f8;
  ulong uStack_4e8;
  long lStack_4e0;
  long **pplStack_4d8;
  undefined1 auStack_4d0 [16];
  undefined8 ***pppuStack_4c0;
  undefined *puStack_4b8;
  long lStack_4b0;
  long **pplStack_4a8;
  undefined1 auStack_4a0 [16];
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  ulong uStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 ***pppuStack_400;
  code *pcStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 ***pppuStack_3e0;
  code *pcStack_3d8;
  long lStack_3d0;
  long **pplStack_3c8;
  undefined1 auStack_3c0 [16];
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  long lStack_3a0;
  long **pplStack_398;
  undefined1 auStack_390 [16];
  undefined8 ***pppuStack_380;
  code *pcStack_378;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  long **pplStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  long **pplStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 ***pppuStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [16];
  long **pplStack_280;
  long **pplStack_278;
  undefined1 **ppuStack_270;
  undefined *puStack_268;
  long lStack_258;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined1 **ppuStack_210;
  undefined *puStack_208;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined8 ***pppuStack_130;
  undefined *puStack_128;
  long *plStack_118;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long *plStack_78;
  long lStack_70;
  long **pplStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  pplVar20 = param_3;
  if ((bRam0000000003eb65d4 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d4 = 1;
  }
  lVar22 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), param_1 != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x018bcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)param_3[6][1])(param_1,uVar7,param_2);
    return uVar8;
  }
  lVar9 = func_0x00f78af4();
  puStack_48 = &Core_Containers_PoolManager__TryAcquireObject_object_;
  plStack_78 = (long *)0x0;
  pplVar14 = pplVar20;
  pplVar15 = param_4;
  lStack_70 = lVar22;
  pplStack_68 = param_3;
  lStack_60 = param_1;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar9 != 0) {
    pplVar15 = (long **)*param_4[6];
    pplVar14 = &plStack_78;
    iVar5 = (*(code *)*pplVar15)();
    plVar6 = plStack_78;
    if (iVar5 == 0) {
code_r0x018bce40:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_78 != (long *)0x0) {
      lVar22 = param_4[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto code_r0x018bce24;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,2);
code_r0x018bce24:
      uVar8 = (*(code *)*puVar10)(plVar6,pplVar20,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bce40;
    }
  }
  lVar22 = func_0x00f78af4();
  puStack_88 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  pplVar20 = pplVar14;
  ppuStack_90 = &puStack_50;
  if ((bRam0000000003eb65d5 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d5 = 1;
  }
  lVar9 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar9,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), lVar22 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x018bcf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(extraout_s0,lVar22,uVar7,extraout_x1);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_d8 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  plStack_118 = (long *)0x0;
  pplVar14 = pplVar20;
  pplVar16 = pplVar15;
  pppuStack_e0 = &ppuStack_90;
  if (lVar22 != 0) {
    pplVar16 = (long **)*pplVar15[6];
    pplVar14 = &plStack_118;
    iVar5 = (*(code *)*pplVar16)();
    plVar6 = plStack_118;
    if (iVar5 == 0) {
code_r0x018bcffc:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_118 != (long *)0x0) {
      lVar22 = pplVar15[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto code_r0x018bcfdc;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,3);
code_r0x018bcfdc:
      uVar8 = (*(code *)*puVar10)(extraout_s0_00,plVar6,pplVar20,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bcffc;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_128 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pplVar20 = pplVar14;
  pppuStack_130 = &pppuStack_e0;
  if ((bRam0000000003eb65d6 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d6 = 1;
  }
  lVar22 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_168 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pppuStack_170 = &pppuStack_130;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_178 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  pplVar14 = pplVar20;
  puStack_180 = (undefined1 *)&pppuStack_170;
  if ((bRam0000000003eb65d7 & 1) == 0) {
    puStack_180 = (undefined1 *)&pppuStack_170;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d7 = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_1b8 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  ppuStack_1c0 = &puStack_180;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_1c8 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar20 = pplVar14;
  puStack_1d0 = (undefined1 *)&ppuStack_1c0;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_1d0 = (undefined1 *)&ppuStack_1c0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar22 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_208 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_210 = &puStack_1d0;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_218 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar14 = pplVar20;
  pplVar15 = pplVar16;
  puStack_220 = (undefined1 *)&ppuStack_210;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_220 = (undefined1 *)&ppuStack_210;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_258 = 0;
  lVar22 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar22 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar22,auVar23._8_8_,&lStack_258,uRam0000000003d2fbf0);
    lVar22 = lStack_258;
    if (iVar5 != 0) {
      lVar9 = *pplVar16[6];
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      lVar9 = func_0x00f78adc(lVar22,lVar9);
      lVar22 = lStack_258;
      if (lVar9 != 0) {
        lVar9 = *pplVar16[6];
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        if (lVar22 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)func_0x00f78adc(lVar22,lVar9);
          if (plVar6 == (long *)0x0) {
            func_0x00f78e5c(lVar22,lVar9);
            goto code_r0x018bd38c;
          }
        }
        *pplVar20 = plVar6;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar20 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar9 = auVar24._8_8_;
  lVar22 = auVar24._0_8_;
  puStack_268 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_280 = pplVar16;
  pplStack_278 = pplVar20;
  ppuStack_270 = &puStack_220;
  auStack_290 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar20 = (long **)**(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar20,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar7);
      return uVar8;
    }
  }
  lVar11 = func_0x00f78af4();
  uStack_2c0 = 0x3d25458;
  puStack_298 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_2c8 = (long *)0x0;
  pplVar16 = pplVar14;
  pplStack_2b8 = pplVar20;
  pppuStack_2a0 = &ppuStack_270;
  auVar23 = auVar24;
  if (lVar11 != 0) {
    pplVar15 = (long **)*pplVar14[6];
    pplVar16 = &plStack_2c8;
    lStack_2b0 = lVar9;
    lStack_2a8 = lVar22;
    uVar8 = (*(code *)*pplVar15)();
    plVar6 = plStack_2c8;
    auVar23._8_8_ = lStack_2b0;
    auVar23._0_8_ = lStack_2a8;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar8;
    pplVar20 = pplVar14;
    if (plStack_2c8 != (long *)0x0) {
      lVar22 = pplVar14[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,6);
code_r0x018bd514:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
      return uVar8;
    }
  }
  lStack_2b0 = auVar23._8_8_;
  lStack_2a8 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar9 = auVar25._8_8_;
  lVar22 = auVar25._0_8_;
  uStack_300 = 0x3d25458;
  pcStack_2d8 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_2f8 = pplVar20;
  pppuStack_2e0 = &pppuStack_2a0;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_2f0 = auVar24._8_8_;
    uStack_2e8 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_2f0;
    auVar24._0_8_ = uStack_2e8;
    bRam0000000003eb65db = 1;
  }
  uStack_2f0 = auVar24._8_8_;
  uStack_2e8 = auVar24._0_8_;
  uVar7 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_2f0;
    auVar24._0_8_ = uStack_2e8;
  }
  uStack_2f0 = auVar24._8_8_;
  uStack_2e8 = auVar24._0_8_;
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar12);
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_330 = 0x3d25458;
  pcStack_308 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar20 = pplVar16;
  uStack_328 = uVar7;
  pppuStack_310 = &pppuStack_2e0;
  if (auVar23._0_8_ != 0) {
    pplVar20 = (long **)*pplVar16[6];
    lStack_320 = lVar9;
    lStack_318 = lVar22;
    (*(code *)*pplVar20)();
    auVar25._8_8_ = lStack_320;
    auVar25._0_8_ = lStack_318;
    lVar22 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar16[6][1])(lVar22,auVar23._8_8_);
      return uVar8;
    }
  }
  lStack_320 = auVar25._8_8_;
  lStack_318 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_338 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar14 = pplVar20;
  pppuStack_340 = &pppuStack_310;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar14;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_3d0 = auVar24._0_8_;
  pcStack_378 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar16 = pplVar14;
  pplVar17 = pplVar15;
  lStack_3a0 = lVar22;
  pplStack_398 = pplVar20;
  pppuStack_380 = &pppuStack_340;
  auStack_390 = auVar23;
  if (*(long *)(lStack_3d0 + 0x18) != 0) {
    pplVar16 = (long **)pplVar15[6][1];
    (*(code *)*pplVar16)(*(long *)(lStack_3d0 + 0x18),pplVar14);
    pplVar20 = pplVar15;
    auVar23 = auVar2;
    if (*(long *)(lStack_3d0 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar15[6][2])(*(long *)(lStack_3d0 + 0x10),auVar24._8_8_,pplVar14);
      return uVar8;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar9 = auVar26._8_8_;
  lVar22 = auVar26._0_8_;
  pcStack_3a8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_3c8 = pplVar20;
  pppuStack_3b0 = &pppuStack_380;
  auStack_3c0 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar7 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar12);
      return uVar8;
    }
  }
  lVar11 = func_0x00f78af4();
  pcStack_3d8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar20 = pplVar16;
  lStack_3e8 = lVar22;
  pppuStack_3e0 = &pppuStack_3b0;
  if (*(long *)(lVar11 + 0x10) != 0) {
    pplVar20 = (long **)*pplVar16[6];
    lStack_3f0 = lVar9;
    uVar8 = (*(code *)*pplVar20)();
    auVar26._8_8_ = lStack_3f0;
    auVar26._0_8_ = pplVar16;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (*(long *)(lVar11 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar16[6][1])();
      return uVar8;
    }
  }
  lStack_3f0 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_420 = 0x3d25458;
  pcStack_3f8 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_418 = uVar7;
  lStack_410 = lVar11;
  uStack_408 = auVar26._0_8_;
  pppuStack_400 = &pppuStack_3e0;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar7 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar7)
      ;
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_428 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_438 = 0;
  pppuStack_430 = &pppuStack_400;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar20[6])(auVar23._0_8_,auVar23._8_8_,&uStack_438);
    return uStack_438;
  }
  auVar23 = func_0x00f78af4();
  pcStack_448 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar14 = pplVar20;
  pppuStack_450 = &pppuStack_430;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar7 = auVar24._8_8_;
  auVar4._8_8_ = uVar7;
  auVar4._0_8_ = pplVar17;
  auVar3._8_8_ = uVar7;
  auVar3._0_8_ = pplVar17;
  lVar9 = auVar24._0_8_;
  pcStack_488 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_4b0 = lVar22;
  pplStack_4a8 = pplVar20;
  pppuStack_490 = &pppuStack_450;
  auStack_4a0 = auVar23;
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar22 = auVar27._8_8_;
    puStack_4b8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_4e8 = 0;
    lVar11 = **(long **)(lVar22 + 0x30);
    uVar1 = *(ushort *)(lVar11 + 0x132);
    lStack_4e0 = lVar9;
    pplStack_4d8 = pplVar20;
    pppuStack_4c0 = &pppuStack_490;
    auStack_4d0 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar11);
      uVar1 = *(ushort *)(lVar11 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar11 = **(long **)(lVar22 + 0x30);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = **(long **)(lVar22 + 0x30);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        func_0x00f78ad0(lVar11);
      }
    }
    lVar11 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (**(long **)(lVar11 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar13 = auVar23._8_8_;
      puStack_4f8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
      uStack_528 = 0;
      lVar21 = **(long **)(lVar13 + 0x30);
      uVar1 = *(ushort *)(lVar21 + 0x132);
      lStack_520 = lVar9;
      lStack_518 = lVar11;
      pppuStack_500 = &pppuStack_4c0;
      if ((uVar1 & 1) == 0) {
        lStack_510 = lVar22;
        uStack_508 = auVar27._0_8_;
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_510;
        auVar27._0_8_ = uStack_508;
        uVar1 = *(ushort *)(lVar21 + 0x132);
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      if ((uVar1 >> 10 & 1) != 0) {
        lVar22 = **(long **)(lVar13 + 0x30);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
          auVar27._8_8_ = lStack_510;
          auVar27._0_8_ = uStack_508;
        }
        lStack_510 = auVar27._8_8_;
        uStack_508 = auVar27._0_8_;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          lVar22 = **(long **)(lVar13 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
            auVar27._8_8_ = lStack_510;
            auVar27._0_8_ = uStack_508;
          }
          lStack_510 = auVar27._8_8_;
          uStack_508 = auVar27._0_8_;
          func_0x00f78ad0(lVar22);
          auVar27._8_8_ = lStack_510;
          auVar27._0_8_ = uStack_508;
        }
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      lVar22 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
        auVar27._8_8_ = lStack_510;
        auVar27._0_8_ = uStack_508;
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      if (**(long **)(lVar22 + 0xb8) == 0) {
        auVar23 = func_0x00f78af4();
        lVar22 = auVar23._8_8_;
        if (auVar23._0_8_ == 0) {
          lVar9 = **(long **)(lVar22 + 0x30);
          uVar1 = *(ushort *)(lVar9 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar9);
            uVar1 = *(ushort *)(lVar9 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar9 = **(long **)(lVar22 + 0x30);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
            }
            if (*(int *)(lVar9 + 0xe0) == 0) {
              lVar9 = **(long **)(lVar22 + 0x30);
              if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar9);
              }
              func_0x00f78ad0(lVar9);
            }
          }
          lVar22 = **(long **)(lVar22 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          uVar8 = **(ulong **)(lVar22 + 0xb8);
        }
        else {
          lVar9 = *(long *)(*(long *)(lVar22 + 0x30) + 8);
          if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar9);
          }
          uVar8 = func_0x00f78aec(lVar9);
          (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))(uVar8,auVar23._0_8_);
        }
        return uVar8;
      }
      (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
                (**(long **)(lVar22 + 0xb8),auVar23._0_8_,&uStack_528);
      return uStack_528;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))
              (**(long **)(lVar11 + 0xb8),auVar27._0_8_,&uStack_4e8);
    return uStack_4e8;
  }
  uVar8 = (**(code **)*pplVar17[6])();
  if ((int)uVar8 != 0) {
    pplVar20 = pplVar14;
    auVar23 = auVar3;
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_018bdaa0;
    uVar8 = (**(code **)pplVar17[6][1])(*(long *)(lVar9 + 0x18),*pplVar14);
    if ((uVar8 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar17[6][2])(*(long *)(lVar9 + 0x10),uVar7,*pplVar14);
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}



// ============================================================
// RVA: 0x18bccc0 | Core.Containers.PoolManager.TryAcquireObject<SuperShieldUsableBehaviour>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bccc0 | Core.Containers.PoolManager.TryAcquireObject<object>
// ============================================================

ulong Core_Containers_PoolManager__TryAcquireObject_BoostUsableBehaviour_
                (long param_1,undefined8 param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  long lVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long **pplVar17;
  ulong uVar18;
  int *piVar19;
  long **pplVar20;
  long lVar21;
  long lVar22;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  undefined8 uStack_508;
  undefined8 ***pppuStack_500;
  undefined *puStack_4f8;
  ulong uStack_4e8;
  long lStack_4e0;
  long **pplStack_4d8;
  undefined1 auStack_4d0 [16];
  undefined8 ***pppuStack_4c0;
  undefined *puStack_4b8;
  long lStack_4b0;
  long **pplStack_4a8;
  undefined1 auStack_4a0 [16];
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  ulong uStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined8 ***pppuStack_400;
  code *pcStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 ***pppuStack_3e0;
  code *pcStack_3d8;
  long lStack_3d0;
  long **pplStack_3c8;
  undefined1 auStack_3c0 [16];
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  long lStack_3a0;
  long **pplStack_398;
  undefined1 auStack_390 [16];
  undefined8 ***pppuStack_380;
  code *pcStack_378;
  undefined8 ***pppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  long **pplStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  long **pplStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 ***pppuStack_2a0;
  undefined *puStack_298;
  undefined1 auStack_290 [16];
  long **pplStack_280;
  long **pplStack_278;
  undefined1 **ppuStack_270;
  undefined *puStack_268;
  long lStack_258;
  undefined1 *puStack_220;
  undefined *puStack_218;
  undefined1 **ppuStack_210;
  undefined *puStack_208;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined8 ***pppuStack_170;
  undefined *puStack_168;
  undefined8 ***pppuStack_130;
  undefined *puStack_128;
  long *plStack_118;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long *plStack_78;
  long lStack_70;
  long **pplStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  pplVar20 = param_3;
  if ((bRam0000000003eb65d4 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d4 = 1;
  }
  lVar22 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), param_1 != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x018bcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)param_3[6][1])(param_1,uVar7,param_2);
    return uVar8;
  }
  lVar9 = func_0x00f78af4();
  puStack_48 = &Core_Containers_PoolManager__TryAcquireObject_object_;
  plStack_78 = (long *)0x0;
  pplVar14 = pplVar20;
  pplVar15 = param_4;
  lStack_70 = lVar22;
  pplStack_68 = param_3;
  lStack_60 = param_1;
  uStack_58 = param_2;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar9 != 0) {
    pplVar15 = (long **)*param_4[6];
    pplVar14 = &plStack_78;
    iVar5 = (*(code *)*pplVar15)();
    plVar6 = plStack_78;
    if (iVar5 == 0) {
code_r0x018bce40:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_78 != (long *)0x0) {
      lVar22 = param_4[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto code_r0x018bce24;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,2);
code_r0x018bce24:
      uVar8 = (*(code *)*puVar10)(plVar6,pplVar20,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bce40;
    }
  }
  lVar22 = func_0x00f78af4();
  puStack_88 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  pplVar20 = pplVar14;
  ppuStack_90 = &puStack_50;
  if ((bRam0000000003eb65d5 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d5 = 1;
  }
  lVar9 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar9,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), lVar22 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x018bcf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(extraout_s0,lVar22,uVar7,extraout_x1);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_d8 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  plStack_118 = (long *)0x0;
  pplVar14 = pplVar20;
  pplVar16 = pplVar15;
  pppuStack_e0 = &ppuStack_90;
  if (lVar22 != 0) {
    pplVar16 = (long **)*pplVar15[6];
    pplVar14 = &plStack_118;
    iVar5 = (*(code *)*pplVar16)();
    plVar6 = plStack_118;
    if (iVar5 == 0) {
code_r0x018bcffc:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_118 != (long *)0x0) {
      lVar22 = pplVar15[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto code_r0x018bcfdc;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,3);
code_r0x018bcfdc:
      uVar8 = (*(code *)*puVar10)(extraout_s0_00,plVar6,pplVar20,puVar10[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bcffc;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_128 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pplVar20 = pplVar14;
  pppuStack_130 = &pppuStack_e0;
  if ((bRam0000000003eb65d6 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d6 = 1;
  }
  lVar22 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_168 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pppuStack_170 = &pppuStack_130;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_178 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  pplVar14 = pplVar20;
  puStack_180 = (undefined1 *)&pppuStack_170;
  if ((bRam0000000003eb65d7 & 1) == 0) {
    puStack_180 = (undefined1 *)&pppuStack_170;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d7 = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_1b8 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  ppuStack_1c0 = &puStack_180;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_1c8 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar20 = pplVar14;
  puStack_1d0 = (undefined1 *)&ppuStack_1c0;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_1d0 = (undefined1 *)&ppuStack_1c0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar22 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_208 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_210 = &puStack_1d0;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar16[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_218 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar14 = pplVar20;
  pplVar15 = pplVar16;
  puStack_220 = (undefined1 *)&ppuStack_210;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_220 = (undefined1 *)&ppuStack_210;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_258 = 0;
  lVar22 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar22 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar22,auVar23._8_8_,&lStack_258,uRam0000000003d2fbf0);
    lVar22 = lStack_258;
    if (iVar5 != 0) {
      lVar9 = *pplVar16[6];
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      lVar9 = func_0x00f78adc(lVar22,lVar9);
      lVar22 = lStack_258;
      if (lVar9 != 0) {
        lVar9 = *pplVar16[6];
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        if (lVar22 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)func_0x00f78adc(lVar22,lVar9);
          if (plVar6 == (long *)0x0) {
            func_0x00f78e5c(lVar22,lVar9);
            goto code_r0x018bd38c;
          }
        }
        *pplVar20 = plVar6;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar20 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar9 = auVar24._8_8_;
  lVar22 = auVar24._0_8_;
  puStack_268 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_280 = pplVar16;
  pplStack_278 = pplVar20;
  ppuStack_270 = &puStack_220;
  auStack_290 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar20 = (long **)**(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar20,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar7);
      return uVar8;
    }
  }
  lVar11 = func_0x00f78af4();
  uStack_2c0 = 0x3d25458;
  puStack_298 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_2c8 = (long *)0x0;
  pplVar16 = pplVar14;
  pplStack_2b8 = pplVar20;
  pppuStack_2a0 = &ppuStack_270;
  auVar23 = auVar24;
  if (lVar11 != 0) {
    pplVar15 = (long **)*pplVar14[6];
    pplVar16 = &plStack_2c8;
    lStack_2b0 = lVar9;
    lStack_2a8 = lVar22;
    uVar8 = (*(code *)*pplVar15)();
    plVar6 = plStack_2c8;
    auVar23._8_8_ = lStack_2b0;
    auVar23._0_8_ = lStack_2a8;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar8;
    pplVar20 = pplVar14;
    if (plStack_2c8 != (long *)0x0) {
      lVar22 = pplVar14[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar9 = *plVar6;
      uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar10 = (undefined8 *)(lVar9 + (long)(*piVar19 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,6);
code_r0x018bd514:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
      return uVar8;
    }
  }
  lStack_2b0 = auVar23._8_8_;
  lStack_2a8 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar9 = auVar25._8_8_;
  lVar22 = auVar25._0_8_;
  uStack_300 = 0x3d25458;
  pcStack_2d8 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_2f8 = pplVar20;
  pppuStack_2e0 = &pppuStack_2a0;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_2f0 = auVar24._8_8_;
    uStack_2e8 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_2f0;
    auVar24._0_8_ = uStack_2e8;
    bRam0000000003eb65db = 1;
  }
  uStack_2f0 = auVar24._8_8_;
  uStack_2e8 = auVar24._0_8_;
  uVar7 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_2f0;
    auVar24._0_8_ = uStack_2e8;
  }
  uStack_2f0 = auVar24._8_8_;
  uStack_2e8 = auVar24._0_8_;
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar12);
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_330 = 0x3d25458;
  pcStack_308 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar20 = pplVar16;
  uStack_328 = uVar7;
  pppuStack_310 = &pppuStack_2e0;
  if (auVar23._0_8_ != 0) {
    pplVar20 = (long **)*pplVar16[6];
    lStack_320 = lVar9;
    lStack_318 = lVar22;
    (*(code *)*pplVar20)();
    auVar25._8_8_ = lStack_320;
    auVar25._0_8_ = lStack_318;
    lVar22 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar16[6][1])(lVar22,auVar23._8_8_);
      return uVar8;
    }
  }
  lStack_320 = auVar25._8_8_;
  lStack_318 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_338 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar14 = pplVar20;
  pppuStack_340 = &pppuStack_310;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar14;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_3d0 = auVar24._0_8_;
  pcStack_378 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar16 = pplVar14;
  pplVar17 = pplVar15;
  lStack_3a0 = lVar22;
  pplStack_398 = pplVar20;
  pppuStack_380 = &pppuStack_340;
  auStack_390 = auVar23;
  if (*(long *)(lStack_3d0 + 0x18) != 0) {
    pplVar16 = (long **)pplVar15[6][1];
    (*(code *)*pplVar16)(*(long *)(lStack_3d0 + 0x18),pplVar14);
    pplVar20 = pplVar15;
    auVar23 = auVar2;
    if (*(long *)(lStack_3d0 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar15[6][2])(*(long *)(lStack_3d0 + 0x10),auVar24._8_8_,pplVar14);
      return uVar8;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar9 = auVar26._8_8_;
  lVar22 = auVar26._0_8_;
  pcStack_3a8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_3c8 = pplVar20;
  pppuStack_3b0 = &pppuStack_380;
  auStack_3c0 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar7 = **(undefined8 **)(lVar9 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar9 + 0x30) + 8))(lVar22,uVar12);
      return uVar8;
    }
  }
  lVar11 = func_0x00f78af4();
  pcStack_3d8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar20 = pplVar16;
  lStack_3e8 = lVar22;
  pppuStack_3e0 = &pppuStack_3b0;
  if (*(long *)(lVar11 + 0x10) != 0) {
    pplVar20 = (long **)*pplVar16[6];
    lStack_3f0 = lVar9;
    uVar8 = (*(code *)*pplVar20)();
    auVar26._8_8_ = lStack_3f0;
    auVar26._0_8_ = pplVar16;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (*(long *)(lVar11 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar16[6][1])();
      return uVar8;
    }
  }
  lStack_3f0 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_420 = 0x3d25458;
  pcStack_3f8 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_418 = uVar7;
  lStack_410 = lVar11;
  uStack_408 = auVar26._0_8_;
  pppuStack_400 = &pppuStack_3e0;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar7 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar7)
      ;
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_428 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_438 = 0;
  pppuStack_430 = &pppuStack_400;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar20[6])(auVar23._0_8_,auVar23._8_8_,&uStack_438);
    return uStack_438;
  }
  auVar23 = func_0x00f78af4();
  pcStack_448 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar14 = pplVar20;
  pppuStack_450 = &pppuStack_430;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar7 = auVar24._8_8_;
  auVar4._8_8_ = uVar7;
  auVar4._0_8_ = pplVar17;
  auVar3._8_8_ = uVar7;
  auVar3._0_8_ = pplVar17;
  lVar9 = auVar24._0_8_;
  pcStack_488 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_4b0 = lVar22;
  pplStack_4a8 = pplVar20;
  pppuStack_490 = &pppuStack_450;
  auStack_4a0 = auVar23;
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar22 = auVar27._8_8_;
    puStack_4b8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_4e8 = 0;
    lVar11 = **(long **)(lVar22 + 0x30);
    uVar1 = *(ushort *)(lVar11 + 0x132);
    lStack_4e0 = lVar9;
    pplStack_4d8 = pplVar20;
    pppuStack_4c0 = &pppuStack_490;
    auStack_4d0 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar11);
      uVar1 = *(ushort *)(lVar11 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar11 = **(long **)(lVar22 + 0x30);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        lVar11 = **(long **)(lVar22 + 0x30);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        func_0x00f78ad0(lVar11);
      }
    }
    lVar11 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar11);
    }
    if (**(long **)(lVar11 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar13 = auVar23._8_8_;
      puStack_4f8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
      uStack_528 = 0;
      lVar21 = **(long **)(lVar13 + 0x30);
      uVar1 = *(ushort *)(lVar21 + 0x132);
      lStack_520 = lVar9;
      lStack_518 = lVar11;
      pppuStack_500 = &pppuStack_4c0;
      if ((uVar1 & 1) == 0) {
        lStack_510 = lVar22;
        uStack_508 = auVar27._0_8_;
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_510;
        auVar27._0_8_ = uStack_508;
        uVar1 = *(ushort *)(lVar21 + 0x132);
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      if ((uVar1 >> 10 & 1) != 0) {
        lVar22 = **(long **)(lVar13 + 0x30);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
          auVar27._8_8_ = lStack_510;
          auVar27._0_8_ = uStack_508;
        }
        lStack_510 = auVar27._8_8_;
        uStack_508 = auVar27._0_8_;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          lVar22 = **(long **)(lVar13 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
            auVar27._8_8_ = lStack_510;
            auVar27._0_8_ = uStack_508;
          }
          lStack_510 = auVar27._8_8_;
          uStack_508 = auVar27._0_8_;
          func_0x00f78ad0(lVar22);
          auVar27._8_8_ = lStack_510;
          auVar27._0_8_ = uStack_508;
        }
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      lVar22 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
        auVar27._8_8_ = lStack_510;
        auVar27._0_8_ = uStack_508;
      }
      lStack_510 = auVar27._8_8_;
      uStack_508 = auVar27._0_8_;
      if (**(long **)(lVar22 + 0xb8) == 0) {
        auVar23 = func_0x00f78af4();
        lVar22 = auVar23._8_8_;
        if (auVar23._0_8_ == 0) {
          lVar9 = **(long **)(lVar22 + 0x30);
          uVar1 = *(ushort *)(lVar9 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar9);
            uVar1 = *(ushort *)(lVar9 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar9 = **(long **)(lVar22 + 0x30);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
            }
            if (*(int *)(lVar9 + 0xe0) == 0) {
              lVar9 = **(long **)(lVar22 + 0x30);
              if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar9);
              }
              func_0x00f78ad0(lVar9);
            }
          }
          lVar22 = **(long **)(lVar22 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          uVar8 = **(ulong **)(lVar22 + 0xb8);
        }
        else {
          lVar9 = *(long *)(*(long *)(lVar22 + 0x30) + 8);
          if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar9);
          }
          uVar8 = func_0x00f78aec(lVar9);
          (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))(uVar8,auVar23._0_8_);
        }
        return uVar8;
      }
      (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
                (**(long **)(lVar22 + 0xb8),auVar23._0_8_,&uStack_528);
      return uStack_528;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))
              (**(long **)(lVar11 + 0xb8),auVar27._0_8_,&uStack_4e8);
    return uStack_4e8;
  }
  uVar8 = (**(code **)*pplVar17[6])();
  if ((int)uVar8 != 0) {
    pplVar20 = pplVar14;
    auVar23 = auVar3;
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_018bdaa0;
    uVar8 = (**(code **)pplVar17[6][1])(*(long *)(lVar9 + 0x18),*pplVar14);
    if ((uVar8 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar17[6][2])(*(long *)(lVar9 + 0x10),uVar7,*pplVar14);
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}



// ============================================================
// RVA: 0x18bcd78 | Core.Containers.PoolManager.TryAcquireObject<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bce60 | Core.Containers.PoolManager.TryAcquireTimedObject<object>
// ============================================================

ulong Core_Containers_PoolManager__TryAcquireTimedObject_object_
                (undefined4 param_1,long param_2,undefined8 param_3,long **param_4,long **param_5)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long **pplVar20;
  long lVar21;
  long lVar22;
  undefined4 extraout_s0;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  undefined8 uStack_488;
  undefined8 ***pppuStack_480;
  undefined *puStack_478;
  ulong uStack_468;
  long lStack_460;
  long **pplStack_458;
  undefined1 auStack_450 [16];
  undefined8 ***pppuStack_440;
  undefined *puStack_438;
  long lStack_430;
  long **pplStack_428;
  undefined1 auStack_420 [16];
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  ulong uStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 ***pppuStack_380;
  code *pcStack_378;
  long lStack_370;
  long lStack_368;
  undefined8 ***pppuStack_360;
  code *pcStack_358;
  long lStack_350;
  long **pplStack_348;
  undefined1 auStack_340 [16];
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  long lStack_320;
  long **pplStack_318;
  undefined1 auStack_310 [16];
  undefined8 ***pppuStack_300;
  code *pcStack_2f8;
  undefined8 ***pppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  long **pplStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 ***pppuStack_260;
  code *pcStack_258;
  long *plStack_248;
  undefined8 uStack_240;
  long **pplStack_238;
  long lStack_230;
  long lStack_228;
  undefined1 ***pppuStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [16];
  long **pplStack_200;
  long **pplStack_1f8;
  undefined1 **ppuStack_1f0;
  undefined *puStack_1e8;
  long lStack_1d8;
  undefined1 *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined1 **ppuStack_140;
  undefined *puStack_138;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  long *plStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  pplVar20 = param_4;
  if ((bRam0000000003eb65d5 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d5 = 1;
  }
  lVar22 = *param_4[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), param_2 != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x018bcf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)param_4[6][1])(param_1,param_2,uVar7,param_3);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_58 = &Core_Containers_PoolManager__TryAcquireTimedObject_object_;
  plStack_98 = (long *)0x0;
  pplVar13 = pplVar20;
  pplVar14 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  if (lVar22 != 0) {
    pplVar14 = (long **)*param_5[6];
    pplVar13 = &plStack_98;
    iVar5 = (*(code *)*pplVar14)();
    plVar6 = plStack_98;
    if (iVar5 == 0) {
code_r0x018bcffc:
      *pplVar20 = (long *)0x0;
      return 0;
    }
    if (plStack_98 != (long *)0x0) {
      lVar22 = param_5[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar17 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto code_r0x018bcfdc;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,3);
code_r0x018bcfdc:
      uVar8 = (*(code *)*puVar9)(extraout_s0,plVar6,pplVar20,puVar9[1]);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto code_r0x018bcffc;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_a8 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pplVar20 = pplVar13;
  ppuStack_b0 = &puStack_60;
  if ((bRam0000000003eb65d6 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d6 = 1;
  }
  lVar22 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_e8 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pppuStack_f0 = &ppuStack_b0;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar14[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_f8 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  pplVar13 = pplVar20;
  puStack_100 = (undefined1 *)&pppuStack_f0;
  if ((bRam0000000003eb65d7 & 1) == 0) {
    puStack_100 = (undefined1 *)&pppuStack_f0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d7 = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_138 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  ppuStack_140 = &puStack_100;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar14[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_148 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar20 = pplVar13;
  puStack_150 = (undefined1 *)&ppuStack_140;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_150 = (undefined1 *)&ppuStack_140;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar22 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar22 = func_0x00f78af4();
  puStack_188 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_190 = &puStack_150;
  if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*pplVar14[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_198 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar13 = pplVar20;
  pplVar15 = pplVar14;
  puStack_1a0 = (undefined1 *)&ppuStack_190;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_1a0 = (undefined1 *)&ppuStack_190;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_1d8 = 0;
  lVar22 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar22 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar22,auVar23._8_8_,&lStack_1d8,uRam0000000003d2fbf0);
    lVar22 = lStack_1d8;
    if (iVar5 != 0) {
      lVar17 = *pplVar14[6];
      if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar17);
      }
      lVar17 = func_0x00f78adc(lVar22,lVar17);
      lVar22 = lStack_1d8;
      if (lVar17 != 0) {
        lVar17 = *pplVar14[6];
        if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar17);
        }
        if (lVar22 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)func_0x00f78adc(lVar22,lVar17);
          if (plVar6 == (long *)0x0) {
            func_0x00f78e5c(lVar22,lVar17);
            goto code_r0x018bd38c;
          }
        }
        *pplVar20 = plVar6;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar20 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar17 = auVar24._8_8_;
  lVar22 = auVar24._0_8_;
  puStack_1e8 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_200 = pplVar14;
  pplStack_1f8 = pplVar20;
  ppuStack_1f0 = &puStack_1a0;
  auStack_210 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar20 = (long **)**(undefined8 **)(lVar17 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar20,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar22,uVar7);
      return uVar8;
    }
  }
  lVar10 = func_0x00f78af4();
  uStack_240 = 0x3d25458;
  puStack_218 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_248 = (long *)0x0;
  pplVar14 = pplVar13;
  pplStack_238 = pplVar20;
  pppuStack_220 = &ppuStack_1f0;
  auVar23 = auVar24;
  if (lVar10 != 0) {
    pplVar15 = (long **)*pplVar13[6];
    pplVar14 = &plStack_248;
    lStack_230 = lVar17;
    lStack_228 = lVar22;
    uVar8 = (*(code *)*pplVar15)();
    plVar6 = plStack_248;
    auVar23._8_8_ = lStack_230;
    auVar23._0_8_ = lStack_228;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar8;
    pplVar20 = pplVar13;
    if (plStack_248 != (long *)0x0) {
      lVar22 = pplVar13[6][1];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar17 = *plVar6;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar22) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar19 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar9 = (undefined8 *)func_0x00fac1f0(plVar6,lVar22,6);
code_r0x018bd514:
      (*(code *)*puVar9)(plVar6,puVar9[1]);
      return uVar8;
    }
  }
  lStack_230 = auVar23._8_8_;
  lStack_228 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar17 = auVar25._8_8_;
  lVar22 = auVar25._0_8_;
  uStack_280 = 0x3d25458;
  pcStack_258 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_278 = pplVar20;
  pppuStack_260 = &pppuStack_220;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_270 = auVar24._8_8_;
    uStack_268 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_270;
    auVar24._0_8_ = uStack_268;
    bRam0000000003eb65db = 1;
  }
  uStack_270 = auVar24._8_8_;
  uStack_268 = auVar24._0_8_;
  uVar7 = **(undefined8 **)(lVar17 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_270;
    auVar24._0_8_ = uStack_268;
  }
  uStack_270 = auVar24._8_8_;
  uStack_268 = auVar24._0_8_;
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar22,uVar11);
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_2b0 = 0x3d25458;
  pcStack_288 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar20 = pplVar14;
  uStack_2a8 = uVar7;
  pppuStack_290 = &pppuStack_260;
  if (auVar23._0_8_ != 0) {
    pplVar20 = (long **)*pplVar14[6];
    lStack_2a0 = lVar17;
    lStack_298 = lVar22;
    (*(code *)*pplVar20)();
    auVar25._8_8_ = lStack_2a0;
    auVar25._0_8_ = lStack_298;
    lVar22 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar14[6][1])(lVar22,auVar23._8_8_);
      return uVar8;
    }
  }
  lStack_2a0 = auVar25._8_8_;
  lStack_298 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_2b8 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar13 = pplVar20;
  pppuStack_2c0 = &pppuStack_290;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar13;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_350 = auVar24._0_8_;
  pcStack_2f8 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar14 = pplVar13;
  pplVar16 = pplVar15;
  lStack_320 = lVar22;
  pplStack_318 = pplVar20;
  pppuStack_300 = &pppuStack_2c0;
  auStack_310 = auVar23;
  if (*(long *)(lStack_350 + 0x18) != 0) {
    pplVar14 = (long **)pplVar15[6][1];
    (*(code *)*pplVar14)(*(long *)(lStack_350 + 0x18),pplVar13);
    pplVar20 = pplVar15;
    auVar23 = auVar2;
    if (*(long *)(lStack_350 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar15[6][2])(*(long *)(lStack_350 + 0x10),auVar24._8_8_,pplVar13);
      return uVar8;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar17 = auVar26._8_8_;
  lVar22 = auVar26._0_8_;
  pcStack_328 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_348 = pplVar20;
  pppuStack_330 = &pppuStack_300;
  auStack_340 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar7 = **(undefined8 **)(lVar17 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar22 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar22,uVar11);
      return uVar8;
    }
  }
  lVar10 = func_0x00f78af4();
  pcStack_358 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar20 = pplVar14;
  lStack_368 = lVar22;
  pppuStack_360 = &pppuStack_330;
  if (*(long *)(lVar10 + 0x10) != 0) {
    pplVar20 = (long **)*pplVar14[6];
    lStack_370 = lVar17;
    uVar8 = (*(code *)*pplVar20)();
    auVar26._8_8_ = lStack_370;
    auVar26._0_8_ = pplVar14;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (*(long *)(lVar10 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar14[6][1])();
      return uVar8;
    }
  }
  lStack_370 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_3a0 = 0x3d25458;
  pcStack_378 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_398 = uVar7;
  lStack_390 = lVar10;
  uStack_388 = auVar26._0_8_;
  pppuStack_380 = &pppuStack_360;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar7 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar7)
      ;
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_3a8 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_3b8 = 0;
  pppuStack_3b0 = &pppuStack_380;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar20[6])(auVar23._0_8_,auVar23._8_8_,&uStack_3b8);
    return uStack_3b8;
  }
  auVar23 = func_0x00f78af4();
  pcStack_3c8 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar13 = pplVar20;
  pppuStack_3d0 = &pppuStack_3b0;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar22 = *pplVar20[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar22,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar20[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar7 = auVar24._8_8_;
  auVar4._8_8_ = uVar7;
  auVar4._0_8_ = pplVar16;
  auVar3._8_8_ = uVar7;
  auVar3._0_8_ = pplVar16;
  lVar17 = auVar24._0_8_;
  pcStack_408 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_430 = lVar22;
  pplStack_428 = pplVar20;
  pppuStack_410 = &pppuStack_3d0;
  auStack_420 = auVar23;
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar22 = auVar27._8_8_;
    puStack_438 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_468 = 0;
    lVar10 = **(long **)(lVar22 + 0x30);
    uVar1 = *(ushort *)(lVar10 + 0x132);
    lStack_460 = lVar17;
    pplStack_458 = pplVar20;
    pppuStack_440 = &pppuStack_410;
    auStack_450 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar10);
      uVar1 = *(ushort *)(lVar10 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar10 = **(long **)(lVar22 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        lVar10 = **(long **)(lVar22 + 0x30);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        func_0x00f78ad0(lVar10);
      }
    }
    lVar10 = **(long **)(lVar22 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (**(long **)(lVar10 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar12 = auVar23._8_8_;
      puStack_478 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
      uStack_4a8 = 0;
      lVar21 = **(long **)(lVar12 + 0x30);
      uVar1 = *(ushort *)(lVar21 + 0x132);
      lStack_4a0 = lVar17;
      lStack_498 = lVar10;
      pppuStack_480 = &pppuStack_440;
      if ((uVar1 & 1) == 0) {
        lStack_490 = lVar22;
        uStack_488 = auVar27._0_8_;
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_490;
        auVar27._0_8_ = uStack_488;
        uVar1 = *(ushort *)(lVar21 + 0x132);
      }
      lStack_490 = auVar27._8_8_;
      uStack_488 = auVar27._0_8_;
      if ((uVar1 >> 10 & 1) != 0) {
        lVar22 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
          auVar27._8_8_ = lStack_490;
          auVar27._0_8_ = uStack_488;
        }
        lStack_490 = auVar27._8_8_;
        uStack_488 = auVar27._0_8_;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          lVar22 = **(long **)(lVar12 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
            auVar27._8_8_ = lStack_490;
            auVar27._0_8_ = uStack_488;
          }
          lStack_490 = auVar27._8_8_;
          uStack_488 = auVar27._0_8_;
          func_0x00f78ad0(lVar22);
          auVar27._8_8_ = lStack_490;
          auVar27._0_8_ = uStack_488;
        }
      }
      lStack_490 = auVar27._8_8_;
      uStack_488 = auVar27._0_8_;
      lVar22 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
        auVar27._8_8_ = lStack_490;
        auVar27._0_8_ = uStack_488;
      }
      lStack_490 = auVar27._8_8_;
      uStack_488 = auVar27._0_8_;
      if (**(long **)(lVar22 + 0xb8) == 0) {
        auVar23 = func_0x00f78af4();
        lVar22 = auVar23._8_8_;
        if (auVar23._0_8_ == 0) {
          lVar17 = **(long **)(lVar22 + 0x30);
          uVar1 = *(ushort *)(lVar17 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar17);
            uVar1 = *(ushort *)(lVar17 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar17 = **(long **)(lVar22 + 0x30);
            if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar17);
            }
            if (*(int *)(lVar17 + 0xe0) == 0) {
              lVar17 = **(long **)(lVar22 + 0x30);
              if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar17);
              }
              func_0x00f78ad0(lVar17);
            }
          }
          lVar22 = **(long **)(lVar22 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          uVar8 = **(ulong **)(lVar22 + 0xb8);
        }
        else {
          lVar17 = *(long *)(*(long *)(lVar22 + 0x30) + 8);
          if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar17);
          }
          uVar8 = func_0x00f78aec(lVar17);
          (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 0x10))(uVar8,auVar23._0_8_);
        }
        return uVar8;
      }
      (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
                (**(long **)(lVar22 + 0xb8),auVar23._0_8_,&uStack_4a8);
      return uStack_4a8;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar27._0_8_,&uStack_468);
    return uStack_468;
  }
  uVar8 = (**(code **)*pplVar16[6])();
  if ((int)uVar8 != 0) {
    pplVar20 = pplVar13;
    auVar23 = auVar3;
    if (*(long *)(lVar17 + 0x18) == 0) goto LAB_018bdaa0;
    uVar8 = (**(code **)pplVar16[6][1])(*(long *)(lVar17 + 0x18),*pplVar13);
    if ((uVar8 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar17 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar16[6][2])(*(long *)(lVar17 + 0x10),uVar7,*pplVar13);
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}



// ============================================================
// RVA: 0x18bcf28 | Core.Containers.PoolManager.TryAcquireTimedObject<object>
// ============================================================

ulong Core_Containers_PoolManager__TryAcquireTimedObject_object_
                (undefined4 param_1,long param_2,undefined8 param_3,long **param_4,long **param_5)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long **pplVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 ***pppuStack_430;
  undefined *puStack_428;
  ulong uStack_418;
  long lStack_410;
  long **pplStack_408;
  undefined1 auStack_400 [16];
  undefined8 ***pppuStack_3f0;
  undefined *puStack_3e8;
  long lStack_3e0;
  long **pplStack_3d8;
  undefined1 auStack_3d0 [16];
  undefined8 ***pppuStack_3c0;
  code *pcStack_3b8;
  undefined8 ***pppuStack_380;
  code *pcStack_378;
  ulong uStack_368;
  undefined8 ***pppuStack_360;
  code *pcStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  long lStack_300;
  long **pplStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  long lStack_2d0;
  long **pplStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 ***pppuStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  long **pplStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  long **pplStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 ***pppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1c0 [16];
  long **pplStack_1b0;
  long **pplStack_1a8;
  undefined1 **ppuStack_1a0;
  undefined *puStack_198;
  long lStack_188;
  undefined1 *puStack_150;
  undefined *puStack_148;
  undefined1 **ppuStack_140;
  undefined *puStack_138;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  long *plStack_48;
  
  plStack_48 = (long *)0x0;
  pplVar12 = param_4;
  pplVar14 = param_5;
  if (param_2 != 0) {
    pplVar14 = (long **)*param_5[6];
    pplVar12 = &plStack_48;
    iVar5 = (*(code *)*pplVar14)();
    plVar7 = plStack_48;
    if (iVar5 == 0) {
LAB_018bcffc:
      *param_4 = (long *)0x0;
      return 0;
    }
    if (plStack_48 != (long *)0x0) {
      lVar21 = param_5[6][1];
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
      }
      lVar17 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar21) {
            puVar6 = (undefined8 *)(lVar17 + (long)(*piVar20 + 3) * 0x10 + 0x138);
            goto LAB_018bcfdc;
          }
          piVar20 = piVar20 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar21,3);
LAB_018bcfdc:
      uVar18 = (*(code *)*puVar6)(param_1,plVar7,param_4,puVar6[1]);
      if ((uVar18 & 1) != 0) {
        return 1;
      }
      goto LAB_018bcffc;
    }
  }
  auVar23 = func_0x00f78af4();
  puStack_58 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  pplVar13 = pplVar12;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb65d6 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d6 = 1;
  }
  lVar21 = *pplVar12[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if ((plVar7 != (long *)0x0) &&
     (uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar18 = (**(code **)pplVar12[6][1])(auVar23._0_8_,uVar8,auVar23._8_8_);
    return uVar18;
  }
  lVar21 = func_0x00f78af4();
  puStack_98 = &Core_Containers_PoolManager__TryGetGameObjectPool_object_;
  ppuStack_a0 = &puStack_60;
  if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar18 = (**(code **)*pplVar14[6])();
    return uVar18;
  }
  auVar23 = func_0x00f78af4();
  puStack_a8 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  pplVar12 = pplVar13;
  puStack_b0 = (undefined1 *)&ppuStack_a0;
  if ((bRam0000000003eb65d7 & 1) == 0) {
    puStack_b0 = (undefined1 *)&ppuStack_a0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d7 = 1;
  }
  lVar21 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if ((plVar7 != (long *)0x0) &&
     (uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar18 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar8,auVar23._8_8_);
    return uVar18;
  }
  lVar21 = func_0x00f78af4();
  puStack_e8 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  ppuStack_f0 = &puStack_b0;
  if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar18 = (**(code **)*pplVar14[6])();
    return uVar18;
  }
  auVar23 = func_0x00f78af4();
  puStack_f8 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar13 = pplVar12;
  puStack_100 = (undefined1 *)&ppuStack_f0;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_100 = (undefined1 *)&ppuStack_f0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar21 = *pplVar12[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if ((plVar7 != (long *)0x0) &&
     (uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar18 = (**(code **)pplVar12[6][1])(auVar23._0_8_,uVar8,auVar23._8_8_);
    return uVar18;
  }
  lVar21 = func_0x00f78af4();
  puStack_138 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_140 = &puStack_100;
  if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar18 = (**(code **)*pplVar14[6])();
    return uVar18;
  }
  auVar23 = func_0x00f78af4();
  puStack_148 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar12 = pplVar13;
  pplVar15 = pplVar14;
  puStack_150 = (undefined1 *)&ppuStack_140;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_150 = (undefined1 *)&ppuStack_140;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_188 = 0;
  lVar21 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar21 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar21,auVar23._8_8_,&lStack_188,uRam0000000003d2fbf0);
    lVar21 = lStack_188;
    if (iVar5 != 0) {
      lVar17 = *pplVar14[6];
      if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar17);
      }
      lVar17 = func_0x00f78adc(lVar21,lVar17);
      lVar21 = lStack_188;
      if (lVar17 != 0) {
        lVar17 = *pplVar14[6];
        if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar17);
        }
        if (lVar21 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = (long *)func_0x00f78adc(lVar21,lVar17);
          if (plVar7 == (long *)0x0) {
            func_0x00f78e5c(lVar21,lVar17);
            goto code_r0x018bd38c;
          }
        }
        *pplVar13 = plVar7;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar13 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar17 = auVar24._8_8_;
  lVar21 = auVar24._0_8_;
  puStack_198 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_1b0 = pplVar14;
  pplStack_1a8 = pplVar13;
  ppuStack_1a0 = &puStack_150;
  auStack_1c0 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar14 = (long **)**(undefined8 **)(lVar17 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar14,0);
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar21,uVar8);
      return uVar18;
    }
  }
  lVar9 = func_0x00f78af4();
  uStack_1f0 = 0x3d25458;
  puStack_1c8 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_1f8 = (long *)0x0;
  pplVar13 = pplVar12;
  pplStack_1e8 = pplVar14;
  pppuStack_1d0 = &ppuStack_1a0;
  auVar23 = auVar24;
  if (lVar9 != 0) {
    pplVar15 = (long **)*pplVar12[6];
    pplVar13 = &plStack_1f8;
    lStack_1e0 = lVar17;
    lStack_1d8 = lVar21;
    uVar18 = (*(code *)*pplVar15)();
    plVar7 = plStack_1f8;
    auVar23._8_8_ = lStack_1e0;
    auVar23._0_8_ = lStack_1d8;
    if ((int)uVar18 == 0) {
      return uVar18;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar18;
    pplVar14 = pplVar12;
    if (plStack_1f8 != (long *)0x0) {
      lVar21 = pplVar12[6][1];
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
      }
      lVar17 = *plVar7;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar21) {
            puVar6 = (undefined8 *)(lVar17 + (long)(*piVar20 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar20 = piVar20 + 4;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar21,6);
code_r0x018bd514:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
      return uVar18;
    }
  }
  lStack_1e0 = auVar23._8_8_;
  lStack_1d8 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar17 = auVar25._8_8_;
  lVar21 = auVar25._0_8_;
  uStack_230 = 0x3d25458;
  pcStack_208 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_228 = pplVar14;
  pppuStack_210 = &pppuStack_1d0;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_220 = auVar24._8_8_;
    uStack_218 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_220;
    auVar24._0_8_ = uStack_218;
    bRam0000000003eb65db = 1;
  }
  uStack_220 = auVar24._8_8_;
  uStack_218 = auVar24._0_8_;
  uVar8 = **(undefined8 **)(lVar17 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_220;
    auVar24._0_8_ = uStack_218;
  }
  uStack_220 = auVar24._8_8_;
  uStack_218 = auVar24._0_8_;
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
  if (plVar7 != (long *)0x0) {
    uVar10 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar21,uVar10);
      return uVar18;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_260 = 0x3d25458;
  pcStack_238 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar12 = pplVar13;
  uStack_258 = uVar8;
  pppuStack_240 = &pppuStack_210;
  if (auVar23._0_8_ != 0) {
    pplVar12 = (long **)*pplVar13[6];
    lStack_250 = lVar17;
    lStack_248 = lVar21;
    (*(code *)*pplVar12)();
    auVar25._8_8_ = lStack_250;
    auVar25._0_8_ = lStack_248;
    lVar21 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (**(code **)pplVar13[6][1])(lVar21,auVar23._8_8_);
      return uVar18;
    }
  }
  lStack_250 = auVar25._8_8_;
  lStack_248 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_268 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar14 = pplVar12;
  pppuStack_270 = &pppuStack_240;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar21 = *pplVar12[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (**(code **)pplVar12[6][1])(auVar23._0_8_,uVar8,auVar23._8_8_);
      return uVar18;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar14;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_300 = auVar24._0_8_;
  pcStack_2a8 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar13 = pplVar14;
  pplVar16 = pplVar15;
  lStack_2d0 = lVar21;
  pplStack_2c8 = pplVar12;
  pppuStack_2b0 = &pppuStack_270;
  auStack_2c0 = auVar23;
  if (*(long *)(lStack_300 + 0x18) != 0) {
    pplVar13 = (long **)pplVar15[6][1];
    (*(code *)*pplVar13)(*(long *)(lStack_300 + 0x18),pplVar14);
    pplVar12 = pplVar15;
    auVar23 = auVar2;
    if (*(long *)(lStack_300 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (**(code **)pplVar15[6][2])(*(long *)(lStack_300 + 0x10),auVar24._8_8_,pplVar14);
      return uVar18;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar17 = auVar26._8_8_;
  lVar21 = auVar26._0_8_;
  pcStack_2d8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_2f8 = pplVar12;
  pppuStack_2e0 = &pppuStack_2b0;
  auStack_2f0 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar8 = **(undefined8 **)(lVar17 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
  if (plVar7 != (long *)0x0) {
    uVar10 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar17 + 0x30) + 8))(lVar21,uVar10);
      return uVar18;
    }
  }
  lVar9 = func_0x00f78af4();
  pcStack_308 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar12 = pplVar13;
  lStack_318 = lVar21;
  pppuStack_310 = &pppuStack_2e0;
  if (*(long *)(lVar9 + 0x10) != 0) {
    pplVar12 = (long **)*pplVar13[6];
    lStack_320 = lVar17;
    uVar18 = (*(code *)*pplVar12)();
    auVar26._8_8_ = lStack_320;
    auVar26._0_8_ = pplVar13;
    if ((int)uVar18 == 0) {
      return uVar18;
    }
    if (*(long *)(lVar9 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (**(code **)pplVar13[6][1])();
      return uVar18;
    }
  }
  lStack_320 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_350 = 0x3d25458;
  pcStack_328 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_348 = uVar8;
  lStack_340 = lVar9;
  uStack_338 = auVar26._0_8_;
  pppuStack_330 = &pppuStack_310;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar8 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))
                         (auVar23._0_8_,uVar8);
      return uVar18;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_358 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_368 = 0;
  pppuStack_360 = &pppuStack_330;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar12[6])(auVar23._0_8_,auVar23._8_8_,&uStack_368);
    return uStack_368;
  }
  auVar23 = func_0x00f78af4();
  pcStack_378 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar14 = pplVar12;
  pppuStack_380 = &pppuStack_360;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar21 = *pplVar12[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (**(code **)pplVar12[6][1])(auVar23._0_8_,uVar8,auVar23._8_8_);
      return uVar18;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar8 = auVar24._8_8_;
  auVar4._8_8_ = uVar8;
  auVar4._0_8_ = pplVar16;
  auVar3._8_8_ = uVar8;
  auVar3._0_8_ = pplVar16;
  lVar17 = auVar24._0_8_;
  pcStack_3b8 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_3e0 = lVar21;
  pplStack_3d8 = pplVar12;
  pppuStack_3c0 = &pppuStack_380;
  auStack_3d0 = auVar23;
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar21 = auVar27._8_8_;
    puStack_3e8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_418 = 0;
    lVar9 = **(long **)(lVar21 + 0x30);
    uVar1 = *(ushort *)(lVar9 + 0x132);
    lStack_410 = lVar17;
    pplStack_408 = pplVar12;
    pppuStack_3f0 = &pppuStack_3c0;
    auStack_400 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar9);
      uVar1 = *(ushort *)(lVar9 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar9 = **(long **)(lVar21 + 0x30);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        lVar9 = **(long **)(lVar21 + 0x30);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        func_0x00f78ad0(lVar9);
      }
    }
    lVar9 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    if (**(long **)(lVar9 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar11 = auVar23._8_8_;
      puStack_428 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
      uStack_458 = 0;
      lVar22 = **(long **)(lVar11 + 0x30);
      uVar1 = *(ushort *)(lVar22 + 0x132);
      lStack_450 = lVar17;
      lStack_448 = lVar9;
      pppuStack_430 = &pppuStack_3f0;
      if ((uVar1 & 1) == 0) {
        lStack_440 = lVar21;
        uStack_438 = auVar27._0_8_;
        func_0x00fac028(lVar22);
        auVar27._8_8_ = lStack_440;
        auVar27._0_8_ = uStack_438;
        uVar1 = *(ushort *)(lVar22 + 0x132);
      }
      lStack_440 = auVar27._8_8_;
      uStack_438 = auVar27._0_8_;
      if ((uVar1 >> 10 & 1) != 0) {
        lVar21 = **(long **)(lVar11 + 0x30);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
          auVar27._8_8_ = lStack_440;
          auVar27._0_8_ = uStack_438;
        }
        lStack_440 = auVar27._8_8_;
        uStack_438 = auVar27._0_8_;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          lVar21 = **(long **)(lVar11 + 0x30);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
            auVar27._8_8_ = lStack_440;
            auVar27._0_8_ = uStack_438;
          }
          lStack_440 = auVar27._8_8_;
          uStack_438 = auVar27._0_8_;
          func_0x00f78ad0(lVar21);
          auVar27._8_8_ = lStack_440;
          auVar27._0_8_ = uStack_438;
        }
      }
      lStack_440 = auVar27._8_8_;
      uStack_438 = auVar27._0_8_;
      lVar21 = **(long **)(lVar11 + 0x30);
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_440;
        auVar27._0_8_ = uStack_438;
      }
      lStack_440 = auVar27._8_8_;
      uStack_438 = auVar27._0_8_;
      if (**(long **)(lVar21 + 0xb8) == 0) {
        auVar23 = func_0x00f78af4();
        lVar21 = auVar23._8_8_;
        if (auVar23._0_8_ == 0) {
          lVar17 = **(long **)(lVar21 + 0x30);
          uVar1 = *(ushort *)(lVar17 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar17);
            uVar1 = *(ushort *)(lVar17 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar17 = **(long **)(lVar21 + 0x30);
            if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar17);
            }
            if (*(int *)(lVar17 + 0xe0) == 0) {
              lVar17 = **(long **)(lVar21 + 0x30);
              if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar17);
              }
              func_0x00f78ad0(lVar17);
            }
          }
          lVar21 = **(long **)(lVar21 + 0x30);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
          }
          uVar18 = **(ulong **)(lVar21 + 0xb8);
        }
        else {
          lVar17 = *(long *)(*(long *)(lVar21 + 0x30) + 8);
          if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar17);
          }
          uVar18 = func_0x00f78aec(lVar17);
          (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x10))(uVar18,auVar23._0_8_);
        }
        return uVar18;
      }
      (*(code *)**(undefined8 **)(*(long *)(lVar11 + 0x30) + 8))
                (**(long **)(lVar21 + 0xb8),auVar23._0_8_,&uStack_458);
      return uStack_458;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))
              (**(long **)(lVar9 + 0xb8),auVar27._0_8_,&uStack_418);
    return uStack_418;
  }
  uVar18 = (**(code **)*pplVar16[6])();
  if ((int)uVar18 != 0) {
    pplVar12 = pplVar14;
    auVar23 = auVar3;
    if (*(long *)(lVar17 + 0x18) == 0) goto LAB_018bdaa0;
    uVar18 = (**(code **)pplVar16[6][1])(*(long *)(lVar17 + 0x18),*pplVar14);
    if ((uVar18 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar17 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar16[6][2])(*(long *)(lVar17 + 0x10),uVar8,*pplVar14);
      uVar18 = 0;
    }
    else {
      uVar18 = 1;
    }
  }
  return uVar18;
}



// ============================================================
// RVA: 0x18bd020 | Core.Containers.PoolManager.TryGetGameObjectPool<object>
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x18bd0d8 | Core.Containers.PoolManager.TryGetGameObjectPool<object>
// ============================================================

ulong Core_Containers_PoolManager__TryGetGameObjectPool_object_
                (long param_1,undefined8 param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  ulong uVar17;
  int *piVar18;
  long **pplVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined8 ***pppuStack_3a0;
  undefined *puStack_398;
  ulong uStack_388;
  long lStack_380;
  long **pplStack_378;
  undefined1 auStack_370 [16];
  undefined8 ***pppuStack_360;
  undefined *puStack_358;
  long lStack_350;
  long **pplStack_348;
  undefined1 auStack_340 [16];
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  ulong uStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 ***pppuStack_2a0;
  code *pcStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  long lStack_270;
  long **pplStack_268;
  undefined1 auStack_260 [16];
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  long lStack_240;
  long **pplStack_238;
  undefined1 auStack_230 [16];
  undefined8 ***pppuStack_220;
  code *pcStack_218;
  undefined8 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  long **pplStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 ***pppuStack_180;
  code *pcStack_178;
  long *plStack_168;
  undefined8 uStack_160;
  long **pplStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 ***pppuStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [16];
  long **pplStack_120;
  long **pplStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  long lStack_f8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)*param_4[6])();
    return uVar6;
  }
  auVar23 = func_0x00f78af4();
  puStack_18 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  pplVar13 = param_3;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb65d7 & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d7 = 1;
  }
  lVar21 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if ((plVar7 != (long *)0x0) &&
     (uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)param_3[6][1])(auVar23._0_8_,uVar8,auVar23._8_8_);
    return uVar6;
  }
  lVar21 = func_0x00f78af4();
  puStack_58 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  ppuStack_60 = &puStack_20;
  if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)*param_4[6])();
    return uVar6;
  }
  auVar23 = func_0x00f78af4();
  puStack_68 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar19 = pplVar13;
  puStack_70 = (undefined1 *)&ppuStack_60;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_70 = (undefined1 *)&ppuStack_60;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar21 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if ((plVar7 != (long *)0x0) &&
     (uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar8,auVar23._8_8_);
    return uVar6;
  }
  lVar21 = func_0x00f78af4();
  puStack_a8 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_b0 = &puStack_70;
  if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)*param_4[6])();
    return uVar6;
  }
  auVar23 = func_0x00f78af4();
  puStack_b8 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar13 = pplVar19;
  pplVar15 = param_4;
  puStack_c0 = (undefined1 *)&ppuStack_b0;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_c0 = (undefined1 *)&ppuStack_b0;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_f8 = 0;
  lVar21 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar21 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar21,auVar23._8_8_,&lStack_f8,uRam0000000003d2fbf0);
    lVar21 = lStack_f8;
    if (iVar5 != 0) {
      lVar22 = *param_4[6];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar22 = func_0x00f78adc(lVar21,lVar22);
      lVar21 = lStack_f8;
      if (lVar22 != 0) {
        lVar22 = *param_4[6];
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
        }
        if (lVar21 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = (long *)func_0x00f78adc(lVar21,lVar22);
          if (plVar7 == (long *)0x0) {
            func_0x00f78e5c(lVar21,lVar22);
            goto code_r0x018bd38c;
          }
        }
        *pplVar19 = plVar7;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar19 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar22 = auVar24._8_8_;
  lVar21 = auVar24._0_8_;
  puStack_108 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_120 = param_4;
  pplStack_118 = pplVar19;
  ppuStack_110 = &puStack_c0;
  auStack_130 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar19 = (long **)**(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar19,0);
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar21,uVar8);
      return uVar6;
    }
  }
  lVar9 = func_0x00f78af4();
  uStack_160 = 0x3d25458;
  puStack_138 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_168 = (long *)0x0;
  pplVar14 = pplVar13;
  pplStack_158 = pplVar19;
  pppuStack_140 = &ppuStack_110;
  auVar23 = auVar24;
  if (lVar9 != 0) {
    pplVar15 = (long **)*pplVar13[6];
    pplVar14 = &plStack_168;
    lStack_150 = lVar22;
    lStack_148 = lVar21;
    uVar6 = (*(code *)*pplVar15)();
    plVar7 = plStack_168;
    auVar23._8_8_ = lStack_150;
    auVar23._0_8_ = lStack_148;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar6;
    pplVar19 = pplVar13;
    if (plStack_168 != (long *)0x0) {
      lVar21 = pplVar13[6][1];
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
      }
      lVar22 = *plVar7;
      uVar17 = (ulong)*(ushort *)(lVar22 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar21) {
            puVar10 = (undefined8 *)(lVar22 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar18 = piVar18 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,lVar21,6);
code_r0x018bd514:
      (*(code *)*puVar10)(plVar7,puVar10[1]);
      return uVar6;
    }
  }
  lStack_150 = auVar23._8_8_;
  lStack_148 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar22 = auVar25._8_8_;
  lVar21 = auVar25._0_8_;
  uStack_1a0 = 0x3d25458;
  pcStack_178 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_198 = pplVar19;
  pppuStack_180 = &pppuStack_140;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_190 = auVar24._8_8_;
    uStack_188 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_190;
    auVar24._0_8_ = uStack_188;
    bRam0000000003eb65db = 1;
  }
  uStack_190 = auVar24._8_8_;
  uStack_188 = auVar24._0_8_;
  uVar8 = **(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_190;
    auVar24._0_8_ = uStack_188;
  }
  uStack_190 = auVar24._8_8_;
  uStack_188 = auVar24._0_8_;
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
  if (plVar7 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar21,uVar11);
      return uVar6;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_1d0 = 0x3d25458;
  pcStack_1a8 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar13 = pplVar14;
  uStack_1c8 = uVar8;
  pppuStack_1b0 = &pppuStack_180;
  if (auVar23._0_8_ != 0) {
    pplVar13 = (long **)*pplVar14[6];
    lStack_1c0 = lVar22;
    lStack_1b8 = lVar21;
    (*(code *)*pplVar13)();
    auVar25._8_8_ = lStack_1c0;
    auVar25._0_8_ = lStack_1b8;
    lVar21 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar14[6][1])(lVar21,auVar23._8_8_);
      return uVar6;
    }
  }
  lStack_1c0 = auVar25._8_8_;
  lStack_1b8 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_1d8 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar19 = pplVar13;
  pppuStack_1e0 = &pppuStack_1b0;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar21 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar8,auVar23._8_8_);
      return uVar6;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar19;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_270 = auVar24._0_8_;
  pcStack_218 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar14 = pplVar19;
  pplVar16 = pplVar15;
  lStack_240 = lVar21;
  pplStack_238 = pplVar13;
  pppuStack_220 = &pppuStack_1e0;
  auStack_230 = auVar23;
  if (*(long *)(lStack_270 + 0x18) != 0) {
    pplVar14 = (long **)pplVar15[6][1];
    (*(code *)*pplVar14)(*(long *)(lStack_270 + 0x18),pplVar19);
    pplVar13 = pplVar15;
    auVar23 = auVar2;
    if (*(long *)(lStack_270 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar15[6][2])(*(long *)(lStack_270 + 0x10),auVar24._8_8_,pplVar19);
      return uVar6;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar22 = auVar26._8_8_;
  lVar21 = auVar26._0_8_;
  pcStack_248 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_268 = pplVar13;
  pppuStack_250 = &pppuStack_220;
  auStack_260 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar8 = **(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
  if (plVar7 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar21,uVar11);
      return uVar6;
    }
  }
  lVar9 = func_0x00f78af4();
  pcStack_278 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar13 = pplVar14;
  lStack_288 = lVar21;
  pppuStack_280 = &pppuStack_250;
  if (*(long *)(lVar9 + 0x10) != 0) {
    pplVar13 = (long **)*pplVar14[6];
    lStack_290 = lVar22;
    uVar6 = (*(code *)*pplVar13)();
    auVar26._8_8_ = lStack_290;
    auVar26._0_8_ = pplVar14;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (*(long *)(lVar9 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar14[6][1])();
      return uVar6;
    }
  }
  lStack_290 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_2c0 = 0x3d25458;
  pcStack_298 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_2b8 = uVar8;
  lStack_2b0 = lVar9;
  uStack_2a8 = auVar26._0_8_;
  pppuStack_2a0 = &pppuStack_280;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar8 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar8)
      ;
      return uVar6;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_2c8 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_2d8 = 0;
  pppuStack_2d0 = &pppuStack_2a0;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar13[6])(auVar23._0_8_,auVar23._8_8_,&uStack_2d8);
    return uStack_2d8;
  }
  auVar23 = func_0x00f78af4();
  pcStack_2e8 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar19 = pplVar13;
  pppuStack_2f0 = &pppuStack_2d0;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar21 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar8,auVar23._8_8_);
      return uVar6;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar8 = auVar24._8_8_;
  auVar4._8_8_ = uVar8;
  auVar4._0_8_ = pplVar16;
  auVar3._8_8_ = uVar8;
  auVar3._0_8_ = pplVar16;
  lVar22 = auVar24._0_8_;
  pcStack_328 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_350 = lVar21;
  pplStack_348 = pplVar13;
  pppuStack_330 = &pppuStack_2f0;
  auStack_340 = auVar23;
  if (*(long *)(lVar22 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar21 = auVar27._8_8_;
    puStack_358 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_388 = 0;
    lVar9 = **(long **)(lVar21 + 0x30);
    uVar1 = *(ushort *)(lVar9 + 0x132);
    lStack_380 = lVar22;
    pplStack_378 = pplVar13;
    pppuStack_360 = &pppuStack_330;
    auStack_370 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar9);
      uVar1 = *(ushort *)(lVar9 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar9 = **(long **)(lVar21 + 0x30);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        lVar9 = **(long **)(lVar21 + 0x30);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        func_0x00f78ad0(lVar9);
      }
    }
    lVar9 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    if (**(long **)(lVar9 + 0xb8) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))
                (**(long **)(lVar9 + 0xb8),auVar27._0_8_,&uStack_388);
      return uStack_388;
    }
    auVar23 = func_0x00f78af4();
    lVar12 = auVar23._8_8_;
    puStack_398 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
    uStack_3c8 = 0;
    lVar20 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar20 + 0x132);
    lStack_3c0 = lVar22;
    lStack_3b8 = lVar9;
    pppuStack_3a0 = &pppuStack_360;
    if ((uVar1 & 1) == 0) {
      lStack_3b0 = lVar21;
      uStack_3a8 = auVar27._0_8_;
      func_0x00fac028(lVar20);
      auVar27._8_8_ = lStack_3b0;
      auVar27._0_8_ = uStack_3a8;
      uVar1 = *(ushort *)(lVar20 + 0x132);
    }
    lStack_3b0 = auVar27._8_8_;
    uStack_3a8 = auVar27._0_8_;
    if ((uVar1 >> 10 & 1) != 0) {
      lVar21 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_3b0;
        auVar27._0_8_ = uStack_3a8;
      }
      lStack_3b0 = auVar27._8_8_;
      uStack_3a8 = auVar27._0_8_;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        lVar21 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
          auVar27._8_8_ = lStack_3b0;
          auVar27._0_8_ = uStack_3a8;
        }
        lStack_3b0 = auVar27._8_8_;
        uStack_3a8 = auVar27._0_8_;
        func_0x00f78ad0(lVar21);
        auVar27._8_8_ = lStack_3b0;
        auVar27._0_8_ = uStack_3a8;
      }
    }
    lStack_3b0 = auVar27._8_8_;
    uStack_3a8 = auVar27._0_8_;
    lVar21 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar21);
      auVar27._8_8_ = lStack_3b0;
      auVar27._0_8_ = uStack_3a8;
    }
    lStack_3b0 = auVar27._8_8_;
    uStack_3a8 = auVar27._0_8_;
    if (**(long **)(lVar21 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar21 = auVar23._8_8_;
      if (auVar23._0_8_ == 0) {
        lVar22 = **(long **)(lVar21 + 0x30);
        uVar1 = *(ushort *)(lVar22 + 0x132);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar22);
          uVar1 = *(ushort *)(lVar22 + 0x132);
        }
        if ((uVar1 >> 10 & 1) != 0) {
          lVar22 = **(long **)(lVar21 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          if (*(int *)(lVar22 + 0xe0) == 0) {
            lVar22 = **(long **)(lVar21 + 0x30);
            if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar22);
            }
            func_0x00f78ad0(lVar22);
          }
        }
        lVar21 = **(long **)(lVar21 + 0x30);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
        }
        uVar6 = **(ulong **)(lVar21 + 0xb8);
      }
      else {
        lVar22 = *(long *)(*(long *)(lVar21 + 0x30) + 8);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
        }
        uVar6 = func_0x00f78aec(lVar22);
        (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x10))(uVar6,auVar23._0_8_);
      }
      return uVar6;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
              (**(long **)(lVar21 + 0xb8),auVar23._0_8_,&uStack_3c8);
    return uStack_3c8;
  }
  uVar6 = (**(code **)*pplVar16[6])();
  if ((int)uVar6 != 0) {
    pplVar13 = pplVar19;
    auVar23 = auVar3;
    if (*(long *)(lVar22 + 0x18) == 0) goto LAB_018bdaa0;
    uVar6 = (**(code **)pplVar16[6][1])(*(long *)(lVar22 + 0x18),*pplVar19);
    if ((uVar6 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar16[6][2])(*(long *)(lVar22 + 0x10),uVar8,*pplVar19);
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  return uVar6;
}



// ============================================================
// RVA: 0x18bd0fc | Core.Containers.PoolManager.TryGetObjectPool<object>
// ============================================================

ulong Core_Containers_PoolManager__TryGetObjectPool_object_
                (long param_1,undefined8 param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  ulong uVar17;
  int *piVar18;
  long **pplVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  undefined8 ***pppuStack_390;
  undefined *puStack_388;
  ulong uStack_378;
  long lStack_370;
  long **pplStack_368;
  undefined1 auStack_360 [16];
  undefined8 ***pppuStack_350;
  undefined *puStack_348;
  long lStack_340;
  long **pplStack_338;
  undefined1 auStack_330 [16];
  undefined8 ***pppuStack_320;
  code *pcStack_318;
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  ulong uStack_2c8;
  undefined8 ***pppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  long lStack_260;
  long **pplStack_258;
  undefined1 auStack_250 [16];
  undefined8 ***pppuStack_240;
  code *pcStack_238;
  long lStack_230;
  long **pplStack_228;
  undefined1 auStack_220 [16];
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  long **pplStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 ***pppuStack_170;
  code *pcStack_168;
  long *plStack_158;
  undefined8 uStack_150;
  long **pplStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 ***pppuStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [16];
  long **pplStack_110;
  long **pplStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  long lStack_e8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  pplVar13 = param_3;
  if ((bRam0000000003eb65d7 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d7 = 1;
  }
  lVar21 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), param_1 != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x018bd1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)param_3[6][1])(param_1,uVar7,param_2);
    return uVar8;
  }
  lVar21 = func_0x00f78af4();
  puStack_48 = &Core_Containers_PoolManager__TryGetObjectPool_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*param_4[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_58 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar19 = pplVar13;
  puStack_60 = (undefined1 *)&puStack_50;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_60 = (undefined1 *)&puStack_50;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar21 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  lVar21 = func_0x00f78af4();
  puStack_98 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_a0 = &puStack_60;
  if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*param_4[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_a8 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar13 = pplVar19;
  pplVar15 = param_4;
  puStack_b0 = (undefined1 *)&ppuStack_a0;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_b0 = (undefined1 *)&ppuStack_a0;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_e8 = 0;
  lVar21 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar21 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar21,auVar23._8_8_,&lStack_e8,uRam0000000003d2fbf0);
    lVar21 = lStack_e8;
    if (iVar5 != 0) {
      lVar22 = *param_4[6];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar22 = func_0x00f78adc(lVar21,lVar22);
      lVar21 = lStack_e8;
      if (lVar22 != 0) {
        lVar22 = *param_4[6];
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
        }
        if (lVar21 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)func_0x00f78adc(lVar21,lVar22);
          if (plVar6 == (long *)0x0) {
            func_0x00f78e5c(lVar21,lVar22);
            goto code_r0x018bd38c;
          }
        }
        *pplVar19 = plVar6;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar19 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar22 = auVar24._8_8_;
  lVar21 = auVar24._0_8_;
  puStack_f8 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_110 = param_4;
  pplStack_108 = pplVar19;
  ppuStack_100 = &puStack_b0;
  auStack_120 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar19 = (long **)**(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar19,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar21,uVar7);
      return uVar8;
    }
  }
  lVar9 = func_0x00f78af4();
  uStack_150 = 0x3d25458;
  puStack_128 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_158 = (long *)0x0;
  pplVar14 = pplVar13;
  pplStack_148 = pplVar19;
  pppuStack_130 = &ppuStack_100;
  auVar23 = auVar24;
  if (lVar9 != 0) {
    pplVar15 = (long **)*pplVar13[6];
    pplVar14 = &plStack_158;
    lStack_140 = lVar22;
    lStack_138 = lVar21;
    uVar8 = (*(code *)*pplVar15)();
    plVar6 = plStack_158;
    auVar23._8_8_ = lStack_140;
    auVar23._0_8_ = lStack_138;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar8;
    pplVar19 = pplVar13;
    if (plStack_158 != (long *)0x0) {
      lVar21 = pplVar13[6][1];
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
      }
      lVar22 = *plVar6;
      uVar17 = (ulong)*(ushort *)(lVar22 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar21) {
            puVar10 = (undefined8 *)(lVar22 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar18 = piVar18 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar21,6);
code_r0x018bd514:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
      return uVar8;
    }
  }
  lStack_140 = auVar23._8_8_;
  lStack_138 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar22 = auVar25._8_8_;
  lVar21 = auVar25._0_8_;
  uStack_190 = 0x3d25458;
  pcStack_168 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_188 = pplVar19;
  pppuStack_170 = &pppuStack_130;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_180 = auVar24._8_8_;
    uStack_178 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_180;
    auVar24._0_8_ = uStack_178;
    bRam0000000003eb65db = 1;
  }
  uStack_180 = auVar24._8_8_;
  uStack_178 = auVar24._0_8_;
  uVar7 = **(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_180;
    auVar24._0_8_ = uStack_178;
  }
  uStack_180 = auVar24._8_8_;
  uStack_178 = auVar24._0_8_;
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar21,uVar11);
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_1c0 = 0x3d25458;
  pcStack_198 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar13 = pplVar14;
  uStack_1b8 = uVar7;
  pppuStack_1a0 = &pppuStack_170;
  if (auVar23._0_8_ != 0) {
    pplVar13 = (long **)*pplVar14[6];
    lStack_1b0 = lVar22;
    lStack_1a8 = lVar21;
    (*(code *)*pplVar13)();
    auVar25._8_8_ = lStack_1b0;
    auVar25._0_8_ = lStack_1a8;
    lVar21 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar14[6][1])(lVar21,auVar23._8_8_);
      return uVar8;
    }
  }
  lStack_1b0 = auVar25._8_8_;
  lStack_1a8 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_1c8 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar19 = pplVar13;
  pppuStack_1d0 = &pppuStack_1a0;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar21 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar19;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_260 = auVar24._0_8_;
  pcStack_208 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar14 = pplVar19;
  pplVar16 = pplVar15;
  lStack_230 = lVar21;
  pplStack_228 = pplVar13;
  pppuStack_210 = &pppuStack_1d0;
  auStack_220 = auVar23;
  if (*(long *)(lStack_260 + 0x18) != 0) {
    pplVar14 = (long **)pplVar15[6][1];
    (*(code *)*pplVar14)(*(long *)(lStack_260 + 0x18),pplVar19);
    pplVar13 = pplVar15;
    auVar23 = auVar2;
    if (*(long *)(lStack_260 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar15[6][2])(*(long *)(lStack_260 + 0x10),auVar24._8_8_,pplVar19);
      return uVar8;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar22 = auVar26._8_8_;
  lVar21 = auVar26._0_8_;
  pcStack_238 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_258 = pplVar13;
  pppuStack_240 = &pppuStack_210;
  auStack_250 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar7 = **(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar21,uVar11);
      return uVar8;
    }
  }
  lVar9 = func_0x00f78af4();
  pcStack_268 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar13 = pplVar14;
  lStack_278 = lVar21;
  pppuStack_270 = &pppuStack_240;
  if (*(long *)(lVar9 + 0x10) != 0) {
    pplVar13 = (long **)*pplVar14[6];
    lStack_280 = lVar22;
    uVar8 = (*(code *)*pplVar13)();
    auVar26._8_8_ = lStack_280;
    auVar26._0_8_ = pplVar14;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (*(long *)(lVar9 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar14[6][1])();
      return uVar8;
    }
  }
  lStack_280 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_2b0 = 0x3d25458;
  pcStack_288 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_2a8 = uVar7;
  lStack_2a0 = lVar9;
  uStack_298 = auVar26._0_8_;
  pppuStack_290 = &pppuStack_270;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar7 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar7)
      ;
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_2b8 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_2c8 = 0;
  pppuStack_2c0 = &pppuStack_290;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar13[6])(auVar23._0_8_,auVar23._8_8_,&uStack_2c8);
    return uStack_2c8;
  }
  auVar23 = func_0x00f78af4();
  pcStack_2d8 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar19 = pplVar13;
  pppuStack_2e0 = &pppuStack_2c0;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar21 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar7 = auVar24._8_8_;
  auVar4._8_8_ = uVar7;
  auVar4._0_8_ = pplVar16;
  auVar3._8_8_ = uVar7;
  auVar3._0_8_ = pplVar16;
  lVar22 = auVar24._0_8_;
  pcStack_318 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_340 = lVar21;
  pplStack_338 = pplVar13;
  pppuStack_320 = &pppuStack_2e0;
  auStack_330 = auVar23;
  if (*(long *)(lVar22 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar21 = auVar27._8_8_;
    puStack_348 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_378 = 0;
    lVar9 = **(long **)(lVar21 + 0x30);
    uVar1 = *(ushort *)(lVar9 + 0x132);
    lStack_370 = lVar22;
    pplStack_368 = pplVar13;
    pppuStack_350 = &pppuStack_320;
    auStack_360 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar9);
      uVar1 = *(ushort *)(lVar9 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar9 = **(long **)(lVar21 + 0x30);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        lVar9 = **(long **)(lVar21 + 0x30);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        func_0x00f78ad0(lVar9);
      }
    }
    lVar9 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    if (**(long **)(lVar9 + 0xb8) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))
                (**(long **)(lVar9 + 0xb8),auVar27._0_8_,&uStack_378);
      return uStack_378;
    }
    auVar23 = func_0x00f78af4();
    lVar12 = auVar23._8_8_;
    puStack_388 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
    uStack_3b8 = 0;
    lVar20 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar20 + 0x132);
    lStack_3b0 = lVar22;
    lStack_3a8 = lVar9;
    pppuStack_390 = &pppuStack_350;
    if ((uVar1 & 1) == 0) {
      lStack_3a0 = lVar21;
      uStack_398 = auVar27._0_8_;
      func_0x00fac028(lVar20);
      auVar27._8_8_ = lStack_3a0;
      auVar27._0_8_ = uStack_398;
      uVar1 = *(ushort *)(lVar20 + 0x132);
    }
    lStack_3a0 = auVar27._8_8_;
    uStack_398 = auVar27._0_8_;
    if ((uVar1 >> 10 & 1) != 0) {
      lVar21 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_3a0;
        auVar27._0_8_ = uStack_398;
      }
      lStack_3a0 = auVar27._8_8_;
      uStack_398 = auVar27._0_8_;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        lVar21 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
          auVar27._8_8_ = lStack_3a0;
          auVar27._0_8_ = uStack_398;
        }
        lStack_3a0 = auVar27._8_8_;
        uStack_398 = auVar27._0_8_;
        func_0x00f78ad0(lVar21);
        auVar27._8_8_ = lStack_3a0;
        auVar27._0_8_ = uStack_398;
      }
    }
    lStack_3a0 = auVar27._8_8_;
    uStack_398 = auVar27._0_8_;
    lVar21 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar21);
      auVar27._8_8_ = lStack_3a0;
      auVar27._0_8_ = uStack_398;
    }
    lStack_3a0 = auVar27._8_8_;
    uStack_398 = auVar27._0_8_;
    if (**(long **)(lVar21 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar21 = auVar23._8_8_;
      if (auVar23._0_8_ == 0) {
        lVar22 = **(long **)(lVar21 + 0x30);
        uVar1 = *(ushort *)(lVar22 + 0x132);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar22);
          uVar1 = *(ushort *)(lVar22 + 0x132);
        }
        if ((uVar1 >> 10 & 1) != 0) {
          lVar22 = **(long **)(lVar21 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          if (*(int *)(lVar22 + 0xe0) == 0) {
            lVar22 = **(long **)(lVar21 + 0x30);
            if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar22);
            }
            func_0x00f78ad0(lVar22);
          }
        }
        lVar21 = **(long **)(lVar21 + 0x30);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
        }
        uVar8 = **(ulong **)(lVar21 + 0xb8);
      }
      else {
        lVar22 = *(long *)(*(long *)(lVar21 + 0x30) + 8);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
        }
        uVar8 = func_0x00f78aec(lVar22);
        (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x10))(uVar8,auVar23._0_8_);
      }
      return uVar8;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
              (**(long **)(lVar21 + 0xb8),auVar23._0_8_,&uStack_3b8);
    return uStack_3b8;
  }
  uVar8 = (**(code **)*pplVar16[6])();
  if ((int)uVar8 != 0) {
    pplVar13 = pplVar19;
    auVar23 = auVar3;
    if (*(long *)(lVar22 + 0x18) == 0) goto LAB_018bdaa0;
    uVar8 = (**(code **)pplVar16[6][1])(*(long *)(lVar22 + 0x18),*pplVar19);
    if ((uVar8 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar16[6][2])(*(long *)(lVar22 + 0x10),uVar7,*pplVar19);
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}



// ============================================================
// RVA: 0x18bd1b4 | Core.Containers.PoolManager.TryGetObjectPool<object>
// ============================================================

ulong Core_Containers_PoolManager__TryGetObjectPool_object_
                (long param_1,undefined8 param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  ulong uVar17;
  int *piVar18;
  long **pplVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  undefined8 uStack_358;
  undefined8 ***pppuStack_350;
  undefined *puStack_348;
  ulong uStack_338;
  long lStack_330;
  long **pplStack_328;
  undefined1 auStack_320 [16];
  undefined8 ***pppuStack_310;
  undefined *puStack_308;
  long lStack_300;
  long **pplStack_2f8;
  undefined1 auStack_2f0 [16];
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  undefined8 ***pppuStack_2a0;
  code *pcStack_298;
  ulong uStack_288;
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  long lStack_240;
  long lStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  long lStack_220;
  long **pplStack_218;
  undefined1 auStack_210 [16];
  undefined8 ***pppuStack_200;
  code *pcStack_1f8;
  long lStack_1f0;
  long **pplStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined8 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 ***pppuStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  long **pplStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  code *pcStack_128;
  long *plStack_118;
  undefined8 uStack_110;
  long **pplStack_108;
  long lStack_100;
  long lStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [16];
  long **pplStack_d0;
  long **pplStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  long lStack_a8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)*param_4[6])();
    return uVar6;
  }
  auVar23 = func_0x00f78af4();
  puStack_18 = &Core_Containers_PoolManager__TryGetPool_object_;
  pplVar19 = param_3;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar21 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if ((plVar7 != (long *)0x0) &&
     (uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)param_3[6][1])(auVar23._0_8_,uVar8,auVar23._8_8_);
    return uVar6;
  }
  lVar21 = func_0x00f78af4();
  puStack_58 = &Core_Containers_PoolManager__TryGetPool_object_;
  ppuStack_60 = &puStack_20;
  if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)*param_4[6])();
    return uVar6;
  }
  auVar23 = func_0x00f78af4();
  puStack_68 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar13 = pplVar19;
  pplVar15 = param_4;
  puStack_70 = (undefined1 *)&ppuStack_60;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_70 = (undefined1 *)&ppuStack_60;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_a8 = 0;
  lVar21 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar21 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar21,auVar23._8_8_,&lStack_a8,uRam0000000003d2fbf0);
    lVar21 = lStack_a8;
    if (iVar5 != 0) {
      lVar22 = *param_4[6];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar22 = func_0x00f78adc(lVar21,lVar22);
      lVar21 = lStack_a8;
      if (lVar22 != 0) {
        lVar22 = *param_4[6];
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
        }
        if (lVar21 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = (long *)func_0x00f78adc(lVar21,lVar22);
          if (plVar7 == (long *)0x0) {
            func_0x00f78e5c(lVar21,lVar22);
            goto code_r0x018bd38c;
          }
        }
        *pplVar19 = plVar7;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar19 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar22 = auVar24._8_8_;
  lVar21 = auVar24._0_8_;
  puStack_b8 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_d0 = param_4;
  pplStack_c8 = pplVar19;
  ppuStack_c0 = &puStack_70;
  auStack_e0 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar19 = (long **)**(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar19,0);
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar21,uVar8);
      return uVar6;
    }
  }
  lVar9 = func_0x00f78af4();
  uStack_110 = 0x3d25458;
  puStack_e8 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_118 = (long *)0x0;
  pplVar14 = pplVar13;
  pplStack_108 = pplVar19;
  pppuStack_f0 = &ppuStack_c0;
  auVar23 = auVar24;
  if (lVar9 != 0) {
    pplVar15 = (long **)*pplVar13[6];
    pplVar14 = &plStack_118;
    lStack_100 = lVar22;
    lStack_f8 = lVar21;
    uVar6 = (*(code *)*pplVar15)();
    plVar7 = plStack_118;
    auVar23._8_8_ = lStack_100;
    auVar23._0_8_ = lStack_f8;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar6;
    pplVar19 = pplVar13;
    if (plStack_118 != (long *)0x0) {
      lVar21 = pplVar13[6][1];
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
      }
      lVar22 = *plVar7;
      uVar17 = (ulong)*(ushort *)(lVar22 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar21) {
            puVar10 = (undefined8 *)(lVar22 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar18 = piVar18 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,lVar21,6);
code_r0x018bd514:
      (*(code *)*puVar10)(plVar7,puVar10[1]);
      return uVar6;
    }
  }
  lStack_100 = auVar23._8_8_;
  lStack_f8 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar22 = auVar25._8_8_;
  lVar21 = auVar25._0_8_;
  uStack_150 = 0x3d25458;
  pcStack_128 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_148 = pplVar19;
  pppuStack_130 = &pppuStack_f0;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_140 = auVar24._8_8_;
    uStack_138 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_140;
    auVar24._0_8_ = uStack_138;
    bRam0000000003eb65db = 1;
  }
  uStack_140 = auVar24._8_8_;
  uStack_138 = auVar24._0_8_;
  uVar8 = **(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_140;
    auVar24._0_8_ = uStack_138;
  }
  uStack_140 = auVar24._8_8_;
  uStack_138 = auVar24._0_8_;
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
  if (plVar7 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar21,uVar11);
      return uVar6;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_180 = 0x3d25458;
  pcStack_158 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar19 = pplVar14;
  uStack_178 = uVar8;
  pppuStack_160 = &pppuStack_130;
  if (auVar23._0_8_ != 0) {
    pplVar19 = (long **)*pplVar14[6];
    lStack_170 = lVar22;
    lStack_168 = lVar21;
    (*(code *)*pplVar19)();
    auVar25._8_8_ = lStack_170;
    auVar25._0_8_ = lStack_168;
    lVar21 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar14[6][1])(lVar21,auVar23._8_8_);
      return uVar6;
    }
  }
  lStack_170 = auVar25._8_8_;
  lStack_168 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_188 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar13 = pplVar19;
  pppuStack_190 = &pppuStack_160;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar21 = *pplVar19[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar19[6][1])(auVar23._0_8_,uVar8,auVar23._8_8_);
      return uVar6;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar13;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_220 = auVar24._0_8_;
  pcStack_1c8 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar14 = pplVar13;
  pplVar16 = pplVar15;
  lStack_1f0 = lVar21;
  pplStack_1e8 = pplVar19;
  pppuStack_1d0 = &pppuStack_190;
  auStack_1e0 = auVar23;
  if (*(long *)(lStack_220 + 0x18) != 0) {
    pplVar14 = (long **)pplVar15[6][1];
    (*(code *)*pplVar14)(*(long *)(lStack_220 + 0x18),pplVar13);
    pplVar19 = pplVar15;
    auVar23 = auVar2;
    if (*(long *)(lStack_220 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar15[6][2])(*(long *)(lStack_220 + 0x10),auVar24._8_8_,pplVar13);
      return uVar6;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar22 = auVar26._8_8_;
  lVar21 = auVar26._0_8_;
  pcStack_1f8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_218 = pplVar19;
  pppuStack_200 = &pppuStack_1d0;
  auStack_210 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar8 = **(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
  if (plVar7 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar21,uVar11);
      return uVar6;
    }
  }
  lVar9 = func_0x00f78af4();
  pcStack_228 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar19 = pplVar14;
  lStack_238 = lVar21;
  pppuStack_230 = &pppuStack_200;
  if (*(long *)(lVar9 + 0x10) != 0) {
    pplVar19 = (long **)*pplVar14[6];
    lStack_240 = lVar22;
    uVar6 = (*(code *)*pplVar19)();
    auVar26._8_8_ = lStack_240;
    auVar26._0_8_ = pplVar14;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (*(long *)(lVar9 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar14[6][1])();
      return uVar6;
    }
  }
  lStack_240 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_270 = 0x3d25458;
  pcStack_248 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_268 = uVar8;
  lStack_260 = lVar9;
  uStack_258 = auVar26._0_8_;
  pppuStack_250 = &pppuStack_230;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar8 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar8)
      ;
      return uVar6;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_278 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_288 = 0;
  pppuStack_280 = &pppuStack_250;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar19[6])(auVar23._0_8_,auVar23._8_8_,&uStack_288);
    return uStack_288;
  }
  auVar23 = func_0x00f78af4();
  pcStack_298 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar13 = pplVar19;
  pppuStack_2a0 = &pppuStack_280;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar21 = *pplVar19[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar19[6][1])(auVar23._0_8_,uVar8,auVar23._8_8_);
      return uVar6;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar8 = auVar24._8_8_;
  auVar4._8_8_ = uVar8;
  auVar4._0_8_ = pplVar16;
  auVar3._8_8_ = uVar8;
  auVar3._0_8_ = pplVar16;
  lVar22 = auVar24._0_8_;
  pcStack_2d8 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_300 = lVar21;
  pplStack_2f8 = pplVar19;
  pppuStack_2e0 = &pppuStack_2a0;
  auStack_2f0 = auVar23;
  if (*(long *)(lVar22 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar21 = auVar27._8_8_;
    puStack_308 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_338 = 0;
    lVar9 = **(long **)(lVar21 + 0x30);
    uVar1 = *(ushort *)(lVar9 + 0x132);
    lStack_330 = lVar22;
    pplStack_328 = pplVar19;
    pppuStack_310 = &pppuStack_2e0;
    auStack_320 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar9);
      uVar1 = *(ushort *)(lVar9 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar9 = **(long **)(lVar21 + 0x30);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        lVar9 = **(long **)(lVar21 + 0x30);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        func_0x00f78ad0(lVar9);
      }
    }
    lVar9 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    if (**(long **)(lVar9 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar12 = auVar23._8_8_;
      puStack_348 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
      uStack_378 = 0;
      lVar20 = **(long **)(lVar12 + 0x30);
      uVar1 = *(ushort *)(lVar20 + 0x132);
      lStack_370 = lVar22;
      lStack_368 = lVar9;
      pppuStack_350 = &pppuStack_310;
      if ((uVar1 & 1) == 0) {
        lStack_360 = lVar21;
        uStack_358 = auVar27._0_8_;
        func_0x00fac028(lVar20);
        auVar27._8_8_ = lStack_360;
        auVar27._0_8_ = uStack_358;
        uVar1 = *(ushort *)(lVar20 + 0x132);
      }
      lStack_360 = auVar27._8_8_;
      uStack_358 = auVar27._0_8_;
      if ((uVar1 >> 10 & 1) != 0) {
        lVar21 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
          auVar27._8_8_ = lStack_360;
          auVar27._0_8_ = uStack_358;
        }
        lStack_360 = auVar27._8_8_;
        uStack_358 = auVar27._0_8_;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          lVar21 = **(long **)(lVar12 + 0x30);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
            auVar27._8_8_ = lStack_360;
            auVar27._0_8_ = uStack_358;
          }
          lStack_360 = auVar27._8_8_;
          uStack_358 = auVar27._0_8_;
          func_0x00f78ad0(lVar21);
          auVar27._8_8_ = lStack_360;
          auVar27._0_8_ = uStack_358;
        }
      }
      lStack_360 = auVar27._8_8_;
      uStack_358 = auVar27._0_8_;
      lVar21 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_360;
        auVar27._0_8_ = uStack_358;
      }
      lStack_360 = auVar27._8_8_;
      uStack_358 = auVar27._0_8_;
      if (**(long **)(lVar21 + 0xb8) == 0) {
        auVar23 = func_0x00f78af4();
        lVar21 = auVar23._8_8_;
        if (auVar23._0_8_ == 0) {
          lVar22 = **(long **)(lVar21 + 0x30);
          uVar1 = *(ushort *)(lVar22 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar22);
            uVar1 = *(ushort *)(lVar22 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar22 = **(long **)(lVar21 + 0x30);
            if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar22);
            }
            if (*(int *)(lVar22 + 0xe0) == 0) {
              lVar22 = **(long **)(lVar21 + 0x30);
              if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar22);
              }
              func_0x00f78ad0(lVar22);
            }
          }
          lVar21 = **(long **)(lVar21 + 0x30);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
          }
          uVar6 = **(ulong **)(lVar21 + 0xb8);
        }
        else {
          lVar22 = *(long *)(*(long *)(lVar21 + 0x30) + 8);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          uVar6 = func_0x00f78aec(lVar22);
          (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x10))(uVar6,auVar23._0_8_);
        }
        return uVar6;
      }
      (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
                (**(long **)(lVar21 + 0xb8),auVar23._0_8_,&uStack_378);
      return uStack_378;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))
              (**(long **)(lVar9 + 0xb8),auVar27._0_8_,&uStack_338);
    return uStack_338;
  }
  uVar6 = (**(code **)*pplVar16[6])();
  if ((int)uVar6 != 0) {
    pplVar19 = pplVar13;
    auVar23 = auVar3;
    if (*(long *)(lVar22 + 0x18) == 0) goto LAB_018bdaa0;
    uVar6 = (**(code **)pplVar16[6][1])(*(long *)(lVar22 + 0x18),*pplVar13);
    if ((uVar6 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar16[6][2])(*(long *)(lVar22 + 0x10),uVar8,*pplVar13);
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  return uVar6;
}



// ============================================================
// RVA: 0x18bd1d8 | Core.Containers.PoolManager.TryGetPool<object>
// ============================================================

ulong Core_Containers_PoolManager__TryGetPool_object_
                (long param_1,undefined8 param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  ulong uVar17;
  int *piVar18;
  long **pplVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 ***pppuStack_340;
  undefined *puStack_338;
  ulong uStack_328;
  long lStack_320;
  long **pplStack_318;
  undefined1 auStack_310 [16];
  undefined8 ***pppuStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  long **pplStack_2e8;
  undefined1 auStack_2e0 [16];
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  ulong uStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  code *pcStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 ***pppuStack_220;
  code *pcStack_218;
  long lStack_210;
  long **pplStack_208;
  undefined1 auStack_200 [16];
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  long lStack_1e0;
  long **pplStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined8 ***pppuStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long **pplStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  long *plStack_108;
  undefined8 uStack_100;
  long **pplStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [16];
  long **pplStack_c0;
  long **pplStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  long lStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  pplVar19 = param_3;
  if ((bRam0000000003eb65d8 & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65d8 = 1;
  }
  lVar21 = *param_3[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), param_1 != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x018bd288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)param_3[6][1])(param_1,uVar7,param_2);
    return uVar8;
  }
  lVar21 = func_0x00f78af4();
  puStack_48 = &Core_Containers_PoolManager__TryGetPool_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)*param_4[6])();
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  puStack_58 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar13 = pplVar19;
  pplVar15 = param_4;
  puStack_60 = (undefined1 *)&puStack_50;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_60 = (undefined1 *)&puStack_50;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_98 = 0;
  lVar21 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar21 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar21,auVar23._8_8_,&lStack_98,uRam0000000003d2fbf0);
    lVar21 = lStack_98;
    if (iVar5 != 0) {
      lVar22 = *param_4[6];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar22 = func_0x00f78adc(lVar21,lVar22);
      lVar21 = lStack_98;
      if (lVar22 != 0) {
        lVar22 = *param_4[6];
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
        }
        if (lVar21 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)func_0x00f78adc(lVar21,lVar22);
          if (plVar6 == (long *)0x0) {
            func_0x00f78e5c(lVar21,lVar22);
            goto code_r0x018bd38c;
          }
        }
        *pplVar19 = plVar6;
        return 1;
      }
    }
code_r0x018bd38c:
    *pplVar19 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar22 = auVar24._8_8_;
  lVar21 = auVar24._0_8_;
  puStack_a8 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_c0 = param_4;
  pplStack_b8 = pplVar19;
  ppuStack_b0 = &puStack_60;
  auStack_d0 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar19 = (long **)**(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar19,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar21,uVar7);
      return uVar8;
    }
  }
  lVar9 = func_0x00f78af4();
  uStack_100 = 0x3d25458;
  puStack_d8 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_108 = (long *)0x0;
  pplVar14 = pplVar13;
  pplStack_f8 = pplVar19;
  pppuStack_e0 = &ppuStack_b0;
  auVar23 = auVar24;
  if (lVar9 != 0) {
    pplVar15 = (long **)*pplVar13[6];
    pplVar14 = &plStack_108;
    lStack_f0 = lVar22;
    lStack_e8 = lVar21;
    uVar8 = (*(code *)*pplVar15)();
    plVar6 = plStack_108;
    auVar23._8_8_ = lStack_f0;
    auVar23._0_8_ = lStack_e8;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar8;
    pplVar19 = pplVar13;
    if (plStack_108 != (long *)0x0) {
      lVar21 = pplVar13[6][1];
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
      }
      lVar22 = *plVar6;
      uVar17 = (ulong)*(ushort *)(lVar22 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar21) {
            puVar10 = (undefined8 *)(lVar22 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar18 = piVar18 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar21,6);
code_r0x018bd514:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
      return uVar8;
    }
  }
  lStack_f0 = auVar23._8_8_;
  lStack_e8 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar22 = auVar25._8_8_;
  lVar21 = auVar25._0_8_;
  uStack_140 = 0x3d25458;
  pcStack_118 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_138 = pplVar19;
  pppuStack_120 = &pppuStack_e0;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_130 = auVar24._8_8_;
    uStack_128 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_130;
    auVar24._0_8_ = uStack_128;
    bRam0000000003eb65db = 1;
  }
  uStack_130 = auVar24._8_8_;
  uStack_128 = auVar24._0_8_;
  uVar7 = **(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_130;
    auVar24._0_8_ = uStack_128;
  }
  uStack_130 = auVar24._8_8_;
  uStack_128 = auVar24._0_8_;
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar21,uVar11);
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_170 = 0x3d25458;
  pcStack_148 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar19 = pplVar14;
  uStack_168 = uVar7;
  pppuStack_150 = &pppuStack_120;
  if (auVar23._0_8_ != 0) {
    pplVar19 = (long **)*pplVar14[6];
    lStack_160 = lVar22;
    lStack_158 = lVar21;
    (*(code *)*pplVar19)();
    auVar25._8_8_ = lStack_160;
    auVar25._0_8_ = lStack_158;
    lVar21 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar14[6][1])(lVar21,auVar23._8_8_);
      return uVar8;
    }
  }
  lStack_160 = auVar25._8_8_;
  lStack_158 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_178 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar13 = pplVar19;
  pppuStack_180 = &pppuStack_150;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar21 = *pplVar19[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar19[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar13;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_210 = auVar24._0_8_;
  pcStack_1b8 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar14 = pplVar13;
  pplVar16 = pplVar15;
  lStack_1e0 = lVar21;
  pplStack_1d8 = pplVar19;
  pppuStack_1c0 = &pppuStack_180;
  auStack_1d0 = auVar23;
  if (*(long *)(lStack_210 + 0x18) != 0) {
    pplVar14 = (long **)pplVar15[6][1];
    (*(code *)*pplVar14)(*(long *)(lStack_210 + 0x18),pplVar13);
    pplVar19 = pplVar15;
    auVar23 = auVar2;
    if (*(long *)(lStack_210 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar15[6][2])(*(long *)(lStack_210 + 0x10),auVar24._8_8_,pplVar13);
      return uVar8;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar22 = auVar26._8_8_;
  lVar21 = auVar26._0_8_;
  pcStack_1e8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_208 = pplVar19;
  pppuStack_1f0 = &pppuStack_1c0;
  auStack_200 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar7 = **(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar21 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar21,uVar11);
      return uVar8;
    }
  }
  lVar9 = func_0x00f78af4();
  pcStack_218 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar19 = pplVar14;
  lStack_228 = lVar21;
  pppuStack_220 = &pppuStack_1f0;
  if (*(long *)(lVar9 + 0x10) != 0) {
    pplVar19 = (long **)*pplVar14[6];
    lStack_230 = lVar22;
    uVar8 = (*(code *)*pplVar19)();
    auVar26._8_8_ = lStack_230;
    auVar26._0_8_ = pplVar14;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (*(long *)(lVar9 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar14[6][1])();
      return uVar8;
    }
  }
  lStack_230 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_260 = 0x3d25458;
  pcStack_238 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_258 = uVar7;
  lStack_250 = lVar9;
  uStack_248 = auVar26._0_8_;
  pppuStack_240 = &pppuStack_220;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar7 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar7)
      ;
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_268 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_278 = 0;
  pppuStack_270 = &pppuStack_240;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar19[6])(auVar23._0_8_,auVar23._8_8_,&uStack_278);
    return uStack_278;
  }
  auVar23 = func_0x00f78af4();
  pcStack_288 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar13 = pplVar19;
  pppuStack_290 = &pppuStack_270;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar21 = *pplVar19[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar21,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar19[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar7 = auVar24._8_8_;
  auVar4._8_8_ = uVar7;
  auVar4._0_8_ = pplVar16;
  auVar3._8_8_ = uVar7;
  auVar3._0_8_ = pplVar16;
  lVar22 = auVar24._0_8_;
  pcStack_2c8 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_2f0 = lVar21;
  pplStack_2e8 = pplVar19;
  pppuStack_2d0 = &pppuStack_290;
  auStack_2e0 = auVar23;
  if (*(long *)(lVar22 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar21 = auVar27._8_8_;
    puStack_2f8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_328 = 0;
    lVar9 = **(long **)(lVar21 + 0x30);
    uVar1 = *(ushort *)(lVar9 + 0x132);
    lStack_320 = lVar22;
    pplStack_318 = pplVar19;
    pppuStack_300 = &pppuStack_2d0;
    auStack_310 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar9);
      uVar1 = *(ushort *)(lVar9 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar9 = **(long **)(lVar21 + 0x30);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        lVar9 = **(long **)(lVar21 + 0x30);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        func_0x00f78ad0(lVar9);
      }
    }
    lVar9 = **(long **)(lVar21 + 0x30);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    if (**(long **)(lVar9 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar12 = auVar23._8_8_;
      puStack_338 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
      uStack_368 = 0;
      lVar20 = **(long **)(lVar12 + 0x30);
      uVar1 = *(ushort *)(lVar20 + 0x132);
      lStack_360 = lVar22;
      lStack_358 = lVar9;
      pppuStack_340 = &pppuStack_300;
      if ((uVar1 & 1) == 0) {
        lStack_350 = lVar21;
        uStack_348 = auVar27._0_8_;
        func_0x00fac028(lVar20);
        auVar27._8_8_ = lStack_350;
        auVar27._0_8_ = uStack_348;
        uVar1 = *(ushort *)(lVar20 + 0x132);
      }
      lStack_350 = auVar27._8_8_;
      uStack_348 = auVar27._0_8_;
      if ((uVar1 >> 10 & 1) != 0) {
        lVar21 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
          auVar27._8_8_ = lStack_350;
          auVar27._0_8_ = uStack_348;
        }
        lStack_350 = auVar27._8_8_;
        uStack_348 = auVar27._0_8_;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          lVar21 = **(long **)(lVar12 + 0x30);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
            auVar27._8_8_ = lStack_350;
            auVar27._0_8_ = uStack_348;
          }
          lStack_350 = auVar27._8_8_;
          uStack_348 = auVar27._0_8_;
          func_0x00f78ad0(lVar21);
          auVar27._8_8_ = lStack_350;
          auVar27._0_8_ = uStack_348;
        }
      }
      lStack_350 = auVar27._8_8_;
      uStack_348 = auVar27._0_8_;
      lVar21 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_350;
        auVar27._0_8_ = uStack_348;
      }
      lStack_350 = auVar27._8_8_;
      uStack_348 = auVar27._0_8_;
      if (**(long **)(lVar21 + 0xb8) == 0) {
        auVar23 = func_0x00f78af4();
        lVar21 = auVar23._8_8_;
        if (auVar23._0_8_ == 0) {
          lVar22 = **(long **)(lVar21 + 0x30);
          uVar1 = *(ushort *)(lVar22 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar22);
            uVar1 = *(ushort *)(lVar22 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar22 = **(long **)(lVar21 + 0x30);
            if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar22);
            }
            if (*(int *)(lVar22 + 0xe0) == 0) {
              lVar22 = **(long **)(lVar21 + 0x30);
              if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar22);
              }
              func_0x00f78ad0(lVar22);
            }
          }
          lVar21 = **(long **)(lVar21 + 0x30);
          if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar21);
          }
          uVar8 = **(ulong **)(lVar21 + 0xb8);
        }
        else {
          lVar22 = *(long *)(*(long *)(lVar21 + 0x30) + 8);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          uVar8 = func_0x00f78aec(lVar22);
          (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 0x10))(uVar8,auVar23._0_8_);
        }
        return uVar8;
      }
      (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
                (**(long **)(lVar21 + 0xb8),auVar23._0_8_,&uStack_368);
      return uStack_368;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar21 + 0x30) + 8))
              (**(long **)(lVar9 + 0xb8),auVar27._0_8_,&uStack_328);
    return uStack_328;
  }
  uVar8 = (**(code **)*pplVar16[6])();
  if ((int)uVar8 != 0) {
    pplVar19 = pplVar13;
    auVar23 = auVar3;
    if (*(long *)(lVar22 + 0x18) == 0) goto LAB_018bdaa0;
    uVar8 = (**(code **)pplVar16[6][1])(*(long *)(lVar22 + 0x18),*pplVar13);
    if ((uVar8 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar16[6][2])(*(long *)(lVar22 + 0x10),uVar7,*pplVar13);
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}



// ============================================================
// RVA: 0x18bd290 | Core.Containers.PoolManager.TryGetPool<object>
// ============================================================

ulong Core_Containers_PoolManager__TryGetPool_object_
                (long param_1,undefined8 param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long **pplVar17;
  ulong uVar18;
  int *piVar19;
  long **pplVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 ***pppuStack_300;
  undefined *puStack_2f8;
  ulong uStack_2e8;
  long lStack_2e0;
  long **pplStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined8 ***pppuStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  long **pplStack_2a8;
  undefined1 auStack_2a0 [16];
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  ulong uStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 ***pppuStack_200;
  code *pcStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 ***pppuStack_1e0;
  code *pcStack_1d8;
  long lStack_1d0;
  long **pplStack_1c8;
  undefined1 auStack_1c0 [16];
  undefined8 ***pppuStack_1b0;
  code *pcStack_1a8;
  long lStack_1a0;
  long **pplStack_198;
  undefined1 auStack_190 [16];
  undefined8 ***pppuStack_180;
  code *pcStack_178;
  undefined8 ***pppuStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 ***pppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  long **pplStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  code *pcStack_d8;
  long *plStack_c8;
  undefined8 uStack_c0;
  long **pplStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [16];
  long **pplStack_80;
  long **pplStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  long lStack_58;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)*param_4[6])();
    return uVar6;
  }
  auVar23 = func_0x00f78af4();
  puStack_18 = &Core_Containers_PoolManager__TryGetPoolImpl_object_;
  pplVar14 = param_3;
  pplVar16 = param_4;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_58 = 0;
  lVar7 = *(long *)(auVar23._0_8_ + 0x10);
  if (lVar7 != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(lVar7,auVar23._8_8_,&lStack_58,uRam0000000003d2fbf0);
    lVar7 = lStack_58;
    if (iVar5 != 0) {
      lVar22 = *param_4[6];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar22 = func_0x00f78adc(lVar7,lVar22);
      lVar7 = lStack_58;
      if (lVar22 != 0) {
        lVar22 = *param_4[6];
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
        }
        if (lVar7 == 0) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = (long *)func_0x00f78adc(lVar7,lVar22);
          if (plVar8 == (long *)0x0) {
            func_0x00f78e5c(lVar7,lVar22);
            goto code_r0x018bd38c;
          }
        }
        *param_3 = plVar8;
        return 1;
      }
    }
code_r0x018bd38c:
    *param_3 = (long *)0x0;
    return 0;
  }
  auVar24 = func_0x00f78af4();
  lVar22 = auVar24._8_8_;
  lVar7 = auVar24._0_8_;
  puStack_68 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  pplStack_80 = param_4;
  pplStack_78 = param_3;
  ppuStack_70 = &puStack_20;
  auStack_90 = auVar23;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar20 = (long **)**(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar20,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar7,uVar9);
      return uVar6;
    }
  }
  lVar10 = func_0x00f78af4();
  uStack_c0 = 0x3d25458;
  puStack_98 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_c8 = (long *)0x0;
  pplVar15 = pplVar14;
  pplStack_b8 = pplVar20;
  pppuStack_a0 = &ppuStack_70;
  auVar23 = auVar24;
  if (lVar10 != 0) {
    pplVar16 = (long **)*pplVar14[6];
    pplVar15 = &plStack_c8;
    lStack_b0 = lVar22;
    lStack_a8 = lVar7;
    uVar6 = (*(code *)*pplVar16)();
    plVar8 = plStack_c8;
    auVar23._8_8_ = lStack_b0;
    auVar23._0_8_ = lStack_a8;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar6;
    pplVar20 = pplVar14;
    if (plStack_c8 != (long *)0x0) {
      lVar7 = pplVar14[6][1];
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
      }
      lVar22 = *plVar8;
      uVar18 = (ulong)*(ushort *)(lVar22 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar7) {
            puVar11 = (undefined8 *)(lVar22 + (long)(*piVar19 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar19 = piVar19 + 4;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)func_0x00fac1f0(plVar8,lVar7,6);
code_r0x018bd514:
      (*(code *)*puVar11)(plVar8,puVar11[1]);
      return uVar6;
    }
  }
  lStack_b0 = auVar23._8_8_;
  lStack_a8 = auVar23._0_8_;
  auVar25 = func_0x00f78af4();
  lVar22 = auVar25._8_8_;
  lVar7 = auVar25._0_8_;
  uStack_100 = 0x3d25458;
  pcStack_d8 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_f8 = pplVar20;
  pppuStack_e0 = &pppuStack_a0;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_f0 = auVar24._8_8_;
    uStack_e8 = auVar24._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar24._8_8_ = uStack_f0;
    auVar24._0_8_ = uStack_e8;
    bRam0000000003eb65db = 1;
  }
  uStack_f0 = auVar24._8_8_;
  uStack_e8 = auVar24._0_8_;
  uVar9 = **(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar24._8_8_ = uStack_f0;
    auVar24._0_8_ = uStack_e8;
  }
  uStack_f0 = auVar24._8_8_;
  uStack_e8 = auVar24._0_8_;
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar8 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar7,uVar12);
      return uVar6;
    }
  }
  auVar23 = func_0x00f78af4();
  uStack_130 = 0x3d25458;
  pcStack_108 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar14 = pplVar15;
  uStack_128 = uVar9;
  pppuStack_110 = &pppuStack_e0;
  if (auVar23._0_8_ != 0) {
    pplVar14 = (long **)*pplVar15[6];
    lStack_120 = lVar22;
    lStack_118 = lVar7;
    (*(code *)*pplVar14)();
    auVar25._8_8_ = lStack_120;
    auVar25._0_8_ = lStack_118;
    lVar7 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar15[6][1])(lVar7,auVar23._8_8_);
      return uVar6;
    }
  }
  lStack_120 = auVar25._8_8_;
  lStack_118 = auVar25._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_138 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar20 = pplVar14;
  pppuStack_140 = &pppuStack_110;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar7 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar7,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
      return uVar6;
    }
  }
  auVar24 = func_0x00f78af4();
  auVar2._8_8_ = pplVar20;
  auVar2._0_8_ = auVar24._8_8_;
  lStack_1d0 = auVar24._0_8_;
  pcStack_178 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar15 = pplVar20;
  pplVar17 = pplVar16;
  lStack_1a0 = lVar7;
  pplStack_198 = pplVar14;
  pppuStack_180 = &pppuStack_140;
  auStack_190 = auVar23;
  if (*(long *)(lStack_1d0 + 0x18) != 0) {
    pplVar15 = (long **)pplVar16[6][1];
    (*(code *)*pplVar15)(*(long *)(lStack_1d0 + 0x18),pplVar20);
    pplVar14 = pplVar16;
    auVar23 = auVar2;
    if (*(long *)(lStack_1d0 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar16[6][2])(*(long *)(lStack_1d0 + 0x10),auVar24._8_8_,pplVar20);
      return uVar6;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar22 = auVar26._8_8_;
  lVar7 = auVar26._0_8_;
  pcStack_1a8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_1c8 = pplVar14;
  pppuStack_1b0 = &pppuStack_180;
  auStack_1c0 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar9 = **(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar8 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar7,uVar12);
      return uVar6;
    }
  }
  lVar10 = func_0x00f78af4();
  pcStack_1d8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar14 = pplVar15;
  lStack_1e8 = lVar7;
  pppuStack_1e0 = &pppuStack_1b0;
  if (*(long *)(lVar10 + 0x10) != 0) {
    pplVar14 = (long **)*pplVar15[6];
    lStack_1f0 = lVar22;
    uVar6 = (*(code *)*pplVar14)();
    auVar26._8_8_ = lStack_1f0;
    auVar26._0_8_ = pplVar15;
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (*(long *)(lVar10 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar15[6][1])();
      return uVar6;
    }
  }
  lStack_1f0 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_220 = 0x3d25458;
  pcStack_1f8 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_218 = uVar9;
  lStack_210 = lVar10;
  uStack_208 = auVar26._0_8_;
  pppuStack_200 = &pppuStack_1e0;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar9 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar9)
      ;
      return uVar6;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_228 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_238 = 0;
  pppuStack_230 = &pppuStack_200;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar14[6])(auVar23._0_8_,auVar23._8_8_,&uStack_238);
    return uStack_238;
  }
  auVar23 = func_0x00f78af4();
  pcStack_248 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar16 = pplVar14;
  pppuStack_250 = &pppuStack_230;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar7 = *pplVar14[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar7,0);
  if (plVar8 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)pplVar14[6][1])(auVar23._0_8_,uVar9,auVar23._8_8_);
      return uVar6;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar9 = auVar24._8_8_;
  auVar4._8_8_ = uVar9;
  auVar4._0_8_ = pplVar17;
  auVar3._8_8_ = uVar9;
  auVar3._0_8_ = pplVar17;
  lVar22 = auVar24._0_8_;
  pcStack_288 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_2b0 = lVar7;
  pplStack_2a8 = pplVar14;
  pppuStack_290 = &pppuStack_250;
  auStack_2a0 = auVar23;
  if (*(long *)(lVar22 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar7 = auVar27._8_8_;
    puStack_2b8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_2e8 = 0;
    lVar10 = **(long **)(lVar7 + 0x30);
    uVar1 = *(ushort *)(lVar10 + 0x132);
    lStack_2e0 = lVar22;
    pplStack_2d8 = pplVar14;
    pppuStack_2c0 = &pppuStack_290;
    auStack_2d0 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar10);
      uVar1 = *(ushort *)(lVar10 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar10 = **(long **)(lVar7 + 0x30);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        lVar10 = **(long **)(lVar7 + 0x30);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        func_0x00f78ad0(lVar10);
      }
    }
    lVar10 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar10);
    }
    if (**(long **)(lVar10 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar13 = auVar23._8_8_;
      puStack_2f8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
      uStack_328 = 0;
      lVar21 = **(long **)(lVar13 + 0x30);
      uVar1 = *(ushort *)(lVar21 + 0x132);
      lStack_320 = lVar22;
      lStack_318 = lVar10;
      pppuStack_300 = &pppuStack_2c0;
      if ((uVar1 & 1) == 0) {
        lStack_310 = lVar7;
        uStack_308 = auVar27._0_8_;
        func_0x00fac028(lVar21);
        auVar27._8_8_ = lStack_310;
        auVar27._0_8_ = uStack_308;
        uVar1 = *(ushort *)(lVar21 + 0x132);
      }
      lStack_310 = auVar27._8_8_;
      uStack_308 = auVar27._0_8_;
      if ((uVar1 >> 10 & 1) != 0) {
        lVar7 = **(long **)(lVar13 + 0x30);
        if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar7);
          auVar27._8_8_ = lStack_310;
          auVar27._0_8_ = uStack_308;
        }
        lStack_310 = auVar27._8_8_;
        uStack_308 = auVar27._0_8_;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          lVar7 = **(long **)(lVar13 + 0x30);
          if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar7);
            auVar27._8_8_ = lStack_310;
            auVar27._0_8_ = uStack_308;
          }
          lStack_310 = auVar27._8_8_;
          uStack_308 = auVar27._0_8_;
          func_0x00f78ad0(lVar7);
          auVar27._8_8_ = lStack_310;
          auVar27._0_8_ = uStack_308;
        }
      }
      lStack_310 = auVar27._8_8_;
      uStack_308 = auVar27._0_8_;
      lVar7 = **(long **)(lVar13 + 0x30);
      if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar7);
        auVar27._8_8_ = lStack_310;
        auVar27._0_8_ = uStack_308;
      }
      lStack_310 = auVar27._8_8_;
      uStack_308 = auVar27._0_8_;
      if (**(long **)(lVar7 + 0xb8) == 0) {
        auVar23 = func_0x00f78af4();
        lVar7 = auVar23._8_8_;
        if (auVar23._0_8_ == 0) {
          lVar22 = **(long **)(lVar7 + 0x30);
          uVar1 = *(ushort *)(lVar22 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar22);
            uVar1 = *(ushort *)(lVar22 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar22 = **(long **)(lVar7 + 0x30);
            if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar22);
            }
            if (*(int *)(lVar22 + 0xe0) == 0) {
              lVar22 = **(long **)(lVar7 + 0x30);
              if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar22);
              }
              func_0x00f78ad0(lVar22);
            }
          }
          lVar7 = **(long **)(lVar7 + 0x30);
          if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar7);
          }
          uVar6 = **(ulong **)(lVar7 + 0xb8);
        }
        else {
          lVar22 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          uVar6 = func_0x00f78aec(lVar22);
          (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 0x10))(uVar6,auVar23._0_8_);
        }
        return uVar6;
      }
      (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x30) + 8))
                (**(long **)(lVar7 + 0xb8),auVar23._0_8_,&uStack_328);
      return uStack_328;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar7 + 0x30) + 8))
              (**(long **)(lVar10 + 0xb8),auVar27._0_8_,&uStack_2e8);
    return uStack_2e8;
  }
  uVar6 = (**(code **)*pplVar17[6])();
  if ((int)uVar6 != 0) {
    pplVar14 = pplVar16;
    auVar23 = auVar3;
    if (*(long *)(lVar22 + 0x18) == 0) goto LAB_018bdaa0;
    uVar6 = (**(code **)pplVar17[6][1])(*(long *)(lVar22 + 0x18),*pplVar16);
    if ((uVar6 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar17[6][2])(*(long *)(lVar22 + 0x10),uVar9,*pplVar16);
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  return uVar6;
}



// ============================================================
// RVA: 0x18bd2b4 | Core.Containers.PoolManager.TryGetPoolImpl<object>
// ============================================================

ulong Core_Containers_PoolManager__TryGetPoolImpl_object_
                (long param_1,undefined8 param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  ulong uVar17;
  int *piVar18;
  long **pplVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 ***pppuStack_2f0;
  undefined *puStack_2e8;
  ulong uStack_2d8;
  long lStack_2d0;
  long **pplStack_2c8;
  undefined1 auStack_2c0 [16];
  undefined8 ***pppuStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  long **pplStack_298;
  undefined1 auStack_290 [16];
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  undefined8 ***pppuStack_240;
  code *pcStack_238;
  ulong uStack_228;
  undefined8 ***pppuStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 ***pppuStack_1d0;
  code *pcStack_1c8;
  long lStack_1c0;
  long **pplStack_1b8;
  undefined1 auStack_1b0 [16];
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  long lStack_190;
  long **pplStack_188;
  undefined1 auStack_180 [16];
  undefined8 ***pppuStack_170;
  code *pcStack_168;
  undefined8 ***pppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 ***pppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  long **pplStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  long *plStack_b8;
  undefined8 uStack_b0;
  long **pplStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long **pplStack_70;
  long **pplStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  long lStack_48;
  
  pplVar13 = param_3;
  pplVar15 = param_4;
  if ((bRam0000000003eb65d9 & 1) == 0) {
    func_0x00f78a20(0x3d2fbf0);
    bRam0000000003eb65d9 = 1;
  }
  lStack_48 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar5 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x10),param_2,&lStack_48,uRam0000000003d2fbf0);
    lVar20 = lStack_48;
    if (iVar5 != 0) {
      lVar22 = *param_4[6];
      if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar22);
      }
      lVar22 = func_0x00f78adc(lVar20,lVar22);
      lVar20 = lStack_48;
      if (lVar22 != 0) {
        lVar22 = *param_4[6];
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
        }
        if (lVar20 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)func_0x00f78adc(lVar20,lVar22);
          if (plVar6 == (long *)0x0) {
            func_0x00f78e5c(lVar20,lVar22);
            goto LAB_018bd38c;
          }
        }
        *param_3 = plVar6;
        return 1;
      }
    }
LAB_018bd38c:
    *param_3 = (long *)0x0;
    return 0;
  }
  auVar23 = func_0x00f78af4();
  lVar22 = auVar23._8_8_;
  lVar20 = auVar23._0_8_;
  puStack_58 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  lStack_80 = param_1;
  uStack_78 = param_2;
  pplStack_70 = param_4;
  pplStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar19 = (long **)**(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar19,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), lVar20 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar20,uVar7);
    return uVar8;
  }
  lVar9 = func_0x00f78af4();
  uStack_b0 = 0x3d25458;
  puStack_88 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_b8 = (long *)0x0;
  pplVar14 = pplVar13;
  pplStack_a8 = pplVar19;
  ppuStack_90 = &puStack_60;
  auVar25 = auVar23;
  if (lVar9 != 0) {
    pplVar15 = (long **)*pplVar13[6];
    pplVar14 = &plStack_b8;
    lStack_a0 = lVar22;
    lStack_98 = lVar20;
    uVar8 = (*(code *)*pplVar15)();
    plVar6 = plStack_b8;
    auVar25._8_8_ = lStack_a0;
    auVar25._0_8_ = lStack_98;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar8;
    pplVar19 = pplVar13;
    if (plStack_b8 != (long *)0x0) {
      lVar20 = pplVar13[6][1];
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
      }
      lVar22 = *plVar6;
      uVar17 = (ulong)*(ushort *)(lVar22 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar20) {
            puVar10 = (undefined8 *)(lVar22 + (long)(*piVar18 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar18 = piVar18 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar6,lVar20,6);
code_r0x018bd514:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
      return uVar8;
    }
  }
  lStack_a0 = auVar25._8_8_;
  lStack_98 = auVar25._0_8_;
  auVar24 = func_0x00f78af4();
  lVar22 = auVar24._8_8_;
  lVar20 = auVar24._0_8_;
  uStack_f0 = 0x3d25458;
  pcStack_c8 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_e8 = pplVar19;
  pppuStack_d0 = &ppuStack_90;
  if ((bRam0000000003eb65db & 1) == 0) {
    uStack_e0 = auVar23._8_8_;
    uStack_d8 = auVar23._0_8_;
    func_0x00f78a20(0x3d25458);
    auVar23._8_8_ = uStack_e0;
    auVar23._0_8_ = uStack_d8;
    bRam0000000003eb65db = 1;
  }
  uStack_e0 = auVar23._8_8_;
  uStack_d8 = auVar23._0_8_;
  uVar7 = **(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
    auVar23._8_8_ = uStack_e0;
    auVar23._0_8_ = uStack_d8;
  }
  uStack_e0 = auVar23._8_8_;
  uStack_d8 = auVar23._0_8_;
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar11 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)), lVar20 != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar20,uVar11);
    return uVar8;
  }
  auVar23 = func_0x00f78af4();
  uStack_120 = 0x3d25458;
  pcStack_f8 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar13 = pplVar14;
  uStack_118 = uVar7;
  pppuStack_100 = &pppuStack_d0;
  if (auVar23._0_8_ != 0) {
    pplVar13 = (long **)*pplVar14[6];
    lStack_110 = lVar22;
    lStack_108 = lVar20;
    (*(code *)*pplVar13)();
    auVar24._8_8_ = lStack_110;
    auVar24._0_8_ = lStack_108;
    lVar20 = *(long *)(auVar23._0_8_ + 0x10);
    if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar14[6][1])(lVar20,auVar23._8_8_);
      return uVar8;
    }
  }
  lStack_110 = auVar24._8_8_;
  lStack_108 = auVar24._0_8_;
  auVar23 = func_0x00f78af4();
  pcStack_128 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar19 = pplVar13;
  pppuStack_130 = &pppuStack_100;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar20 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar20,0);
  if ((plVar6 != (long *)0x0) &&
     (uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     auVar23._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
    return uVar8;
  }
  auVar25 = func_0x00f78af4();
  auVar2._8_8_ = pplVar19;
  auVar2._0_8_ = auVar25._8_8_;
  lStack_1c0 = auVar25._0_8_;
  pcStack_168 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar14 = pplVar19;
  pplVar16 = pplVar15;
  lStack_190 = lVar20;
  pplStack_188 = pplVar13;
  pppuStack_170 = &pppuStack_130;
  auStack_180 = auVar23;
  if (*(long *)(lStack_1c0 + 0x18) != 0) {
    pplVar14 = (long **)pplVar15[6][1];
    (*(code *)*pplVar14)(*(long *)(lStack_1c0 + 0x18),pplVar19);
    pplVar13 = pplVar15;
    auVar23 = auVar2;
    if (*(long *)(lStack_1c0 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar15[6][2])(*(long *)(lStack_1c0 + 0x10),auVar25._8_8_,pplVar19);
      return uVar8;
    }
  }
  auVar26 = func_0x00f78af4();
  lVar22 = auVar26._8_8_;
  lVar20 = auVar26._0_8_;
  pcStack_198 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_1b8 = pplVar13;
  pppuStack_1a0 = &pppuStack_170;
  auStack_1b0 = auVar23;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar7 = **(undefined8 **)(lVar22 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (lVar20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x30) + 8))(lVar20,uVar11);
      return uVar8;
    }
  }
  lVar9 = func_0x00f78af4();
  pcStack_1c8 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar13 = pplVar14;
  lStack_1d8 = lVar20;
  pppuStack_1d0 = &pppuStack_1a0;
  if (*(long *)(lVar9 + 0x10) != 0) {
    pplVar13 = (long **)*pplVar14[6];
    lStack_1e0 = lVar22;
    uVar8 = (*(code *)*pplVar13)();
    auVar26._8_8_ = lStack_1e0;
    auVar26._0_8_ = pplVar14;
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (*(long *)(lVar9 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar14[6][1])();
      return uVar8;
    }
  }
  lStack_1e0 = auVar26._8_8_;
  auVar23 = func_0x00f78af4();
  uStack_210 = 0x3d25458;
  pcStack_1e8 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_208 = uVar7;
  lStack_200 = lVar9;
  uStack_1f8 = auVar26._0_8_;
  pppuStack_1f0 = &pppuStack_1d0;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar7 = **(undefined8 **)(auVar23._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(auVar23._8_8_ + 0x30) + 8))(auVar23._0_8_,uVar7)
      ;
      return uVar8;
    }
  }
  auVar23 = func_0x00f78af4();
  pcStack_218 = Core_Actors_PooledActorManager__Spawn_object_;
  uStack_228 = 0;
  pppuStack_220 = &pppuStack_1f0;
  if (auVar23._0_8_ != 0) {
    (**(code **)*pplVar13[6])(auVar23._0_8_,auVar23._8_8_,&uStack_228);
    return uStack_228;
  }
  auVar23 = func_0x00f78af4();
  pcStack_238 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar15 = pplVar13;
  pppuStack_240 = &pppuStack_220;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar20 = *pplVar13[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar20,0);
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (auVar23._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)pplVar13[6][1])(auVar23._0_8_,uVar7,auVar23._8_8_);
      return uVar8;
    }
  }
  auVar25 = func_0x00f78af4();
  uVar7 = auVar25._8_8_;
  auVar4._8_8_ = uVar7;
  auVar4._0_8_ = pplVar16;
  auVar3._8_8_ = uVar7;
  auVar3._0_8_ = pplVar16;
  lVar22 = auVar25._0_8_;
  pcStack_278 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_2a0 = lVar20;
  pplStack_298 = pplVar13;
  pppuStack_280 = &pppuStack_240;
  auStack_290 = auVar23;
  if (*(long *)(lVar22 + 0x10) == 0) {
LAB_018bdaa0:
    auVar27 = func_0x00f78af4();
    lVar20 = auVar27._8_8_;
    puStack_2a8 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    uStack_2d8 = 0;
    lVar9 = **(long **)(lVar20 + 0x30);
    uVar1 = *(ushort *)(lVar9 + 0x132);
    lStack_2d0 = lVar22;
    pplStack_2c8 = pplVar13;
    pppuStack_2b0 = &pppuStack_280;
    auStack_2c0 = auVar23;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar9);
      uVar1 = *(ushort *)(lVar9 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar9 = **(long **)(lVar20 + 0x30);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        lVar9 = **(long **)(lVar20 + 0x30);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        func_0x00f78ad0(lVar9);
      }
    }
    lVar9 = **(long **)(lVar20 + 0x30);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    if (**(long **)(lVar9 + 0xb8) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 8))
                (**(long **)(lVar9 + 0xb8),auVar27._0_8_,&uStack_2d8);
      return uStack_2d8;
    }
    auVar23 = func_0x00f78af4();
    lVar12 = auVar23._8_8_;
    puStack_2e8 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
    uStack_318 = 0;
    lVar21 = **(long **)(lVar12 + 0x30);
    uVar1 = *(ushort *)(lVar21 + 0x132);
    lStack_310 = lVar22;
    lStack_308 = lVar9;
    pppuStack_2f0 = &pppuStack_2b0;
    if ((uVar1 & 1) == 0) {
      lStack_300 = lVar20;
      uStack_2f8 = auVar27._0_8_;
      func_0x00fac028(lVar21);
      auVar27._8_8_ = lStack_300;
      auVar27._0_8_ = uStack_2f8;
      uVar1 = *(ushort *)(lVar21 + 0x132);
    }
    lStack_300 = auVar27._8_8_;
    uStack_2f8 = auVar27._0_8_;
    if ((uVar1 >> 10 & 1) != 0) {
      lVar20 = **(long **)(lVar12 + 0x30);
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
        auVar27._8_8_ = lStack_300;
        auVar27._0_8_ = uStack_2f8;
      }
      lStack_300 = auVar27._8_8_;
      uStack_2f8 = auVar27._0_8_;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        lVar20 = **(long **)(lVar12 + 0x30);
        if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar20);
          auVar27._8_8_ = lStack_300;
          auVar27._0_8_ = uStack_2f8;
        }
        lStack_300 = auVar27._8_8_;
        uStack_2f8 = auVar27._0_8_;
        func_0x00f78ad0(lVar20);
        auVar27._8_8_ = lStack_300;
        auVar27._0_8_ = uStack_2f8;
      }
    }
    lStack_300 = auVar27._8_8_;
    uStack_2f8 = auVar27._0_8_;
    lVar20 = **(long **)(lVar12 + 0x30);
    if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar20);
      auVar27._8_8_ = lStack_300;
      auVar27._0_8_ = uStack_2f8;
    }
    lStack_300 = auVar27._8_8_;
    uStack_2f8 = auVar27._0_8_;
    if (**(long **)(lVar20 + 0xb8) == 0) {
      auVar23 = func_0x00f78af4();
      lVar20 = auVar23._8_8_;
      if (auVar23._0_8_ == 0) {
        lVar22 = **(long **)(lVar20 + 0x30);
        uVar1 = *(ushort *)(lVar22 + 0x132);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar22);
          uVar1 = *(ushort *)(lVar22 + 0x132);
        }
        if ((uVar1 >> 10 & 1) != 0) {
          lVar22 = **(long **)(lVar20 + 0x30);
          if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar22);
          }
          if (*(int *)(lVar22 + 0xe0) == 0) {
            lVar22 = **(long **)(lVar20 + 0x30);
            if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar22);
            }
            func_0x00f78ad0(lVar22);
          }
        }
        lVar20 = **(long **)(lVar20 + 0x30);
        if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar20);
        }
        uVar8 = **(ulong **)(lVar20 + 0xb8);
      }
      else {
        lVar22 = *(long *)(*(long *)(lVar20 + 0x30) + 8);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
        }
        uVar8 = func_0x00f78aec(lVar22);
        (*(code *)**(undefined8 **)(*(long *)(lVar20 + 0x30) + 0x10))(uVar8,auVar23._0_8_);
      }
      return uVar8;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x30) + 8))
              (**(long **)(lVar20 + 0xb8),auVar23._0_8_,&uStack_318);
    return uStack_318;
  }
  uVar8 = (**(code **)*pplVar16[6])();
  if ((int)uVar8 != 0) {
    pplVar13 = pplVar15;
    auVar23 = auVar3;
    if (*(long *)(lVar22 + 0x18) == 0) goto LAB_018bdaa0;
    uVar8 = (**(code **)pplVar16[6][1])(*(long *)(lVar22 + 0x18),*pplVar15);
    if ((uVar8 & 1) == 0) {
      auVar23 = auVar4;
      if (*(long *)(lVar22 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar16[6][2])(*(long *)(lVar22 + 0x10),uVar7,*pplVar15);
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  return uVar8;
}



// ============================================================
// RVA: 0x18bd3c0 | Core.Containers.PoolManager.TryReleaseAllInPool<object>
// ============================================================

long Core_Containers_PoolManager__TryReleaseAllInPool_object_
               (long param_1,long param_2,long **param_3,long **param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long **pplVar11;
  long **pplVar12;
  long **pplVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long **pplVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 ***pppuStack_2a0;
  undefined *puStack_298;
  long lStack_288;
  long lStack_280;
  long **pplStack_278;
  undefined1 auStack_270 [16];
  undefined8 ***pppuStack_260;
  undefined *puStack_258;
  long lStack_250;
  long **pplStack_248;
  undefined1 auStack_240 [16];
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  long lStack_1d8;
  undefined8 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 ***pppuStack_180;
  code *pcStack_178;
  long lStack_170;
  long **pplStack_168;
  undefined1 auStack_160 [16];
  undefined8 ***pppuStack_150;
  code *pcStack_148;
  long lStack_140;
  long **pplStack_138;
  undefined1 auStack_130 [16];
  undefined8 ***pppuStack_120;
  code *pcStack_118;
  undefined8 ***pppuStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  long **pplStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  long *plStack_68;
  undefined8 uStack_60;
  long **pplStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb65da & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65da = 1;
  }
  pplVar17 = (long **)**(undefined8 **)(param_2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(pplVar17,0);
  if ((plVar4 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0)), param_1 != 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x018bd460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar6 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x30) + 8))(param_1,uVar5);
    return lVar6;
  }
  lVar6 = func_0x00f78af4();
  uStack_60 = 0x3d25458;
  puStack_38 = &Core_Containers_PoolManager__TryReleaseAllInPool_object_;
  plStack_68 = (long *)0x0;
  pplVar11 = param_3;
  pplStack_58 = pplVar17;
  lStack_50 = param_2;
  lStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (lVar6 != 0) {
    param_4 = (long **)*param_3[6];
    pplVar11 = &plStack_68;
    param_1 = (*(code *)*param_4)();
    plVar4 = plStack_68;
    if ((int)param_1 == 0) {
      return param_1;
    }
    param_2 = 0;
    pplVar17 = param_3;
    if (plStack_68 != (long *)0x0) {
      lVar6 = param_3[6][1];
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
      }
      lVar14 = *plVar4;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar6) {
            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
            goto code_r0x018bd514;
          }
          piVar16 = piVar16 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar4,lVar6,6);
code_r0x018bd514:
      (*(code *)*puVar7)(plVar4,puVar7[1]);
      return param_1;
    }
  }
  auVar19 = func_0x00f78af4();
  lVar14 = auVar19._8_8_;
  lVar6 = auVar19._0_8_;
  uStack_a0 = 0x3d25458;
  pcStack_78 = Core_Actors_PooledActorManager__DeInitAndRemovePool_AoEHit_;
  pplStack_98 = pplVar17;
  lStack_90 = param_2;
  lStack_88 = param_1;
  ppuStack_80 = &puStack_40;
  if ((bRam0000000003eb65db & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65db = 1;
  }
  uVar5 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
  if ((plVar4 != (long *)0x0) &&
     (uVar8 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0)), lVar6 != 0))
  {
                    /* WARNING: Could not recover jumptable at 0x018bd5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar6,uVar8);
    return lVar6;
  }
  auVar20 = func_0x00f78af4();
  uStack_d0 = 0x3d25458;
  pcStack_a8 = Core_Actors_PooledActorManager__DeInitAndRemovePool_object_;
  pplVar17 = pplVar11;
  uStack_c8 = uVar5;
  pppuStack_b0 = &ppuStack_80;
  if (auVar20._0_8_ != 0) {
    pplVar17 = (long **)*pplVar11[6];
    lStack_c0 = lVar14;
    lStack_b8 = lVar6;
    (*(code *)*pplVar17)();
    auVar19._8_8_ = lStack_c0;
    auVar19._0_8_ = lStack_b8;
    lVar6 = *(long *)(auVar20._0_8_ + 0x10);
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar6 = (**(code **)pplVar11[6][1])(lVar6,auVar20._8_8_);
      return lVar6;
    }
  }
  lStack_c0 = auVar19._8_8_;
  lStack_b8 = auVar19._0_8_;
  auVar19 = func_0x00f78af4();
  pcStack_d8 = Core_Actors_PooledActorManager__DeSpawn_AoEHit_;
  pplVar11 = pplVar17;
  pppuStack_e0 = &pppuStack_b0;
  if ((bRam0000000003eb65dc & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dc = 1;
  }
  lVar6 = *pplVar17[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar6,0);
  if ((plVar4 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0)),
     auVar19._0_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x018bd6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar6 = (**(code **)pplVar17[6][1])(auVar19._0_8_,uVar5,auVar19._8_8_);
    return lVar6;
  }
  auVar21 = func_0x00f78af4();
  auVar20._8_8_ = pplVar11;
  auVar20._0_8_ = auVar21._8_8_;
  lStack_170 = auVar21._0_8_;
  pcStack_118 = Core_Actors_PooledActorManager__DeSpawn_object_;
  pplVar12 = pplVar11;
  pplVar13 = param_4;
  lStack_140 = lVar6;
  pplStack_138 = pplVar17;
  pppuStack_120 = &pppuStack_e0;
  auStack_130 = auVar19;
  if (*(long *)(lStack_170 + 0x18) != 0) {
    pplVar12 = (long **)param_4[6][1];
    (*(code *)*pplVar12)(*(long *)(lStack_170 + 0x18),pplVar11);
    pplVar17 = param_4;
    auVar19 = auVar20;
    if (*(long *)(lStack_170 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar6 = (**(code **)param_4[6][2])(*(long *)(lStack_170 + 0x10),auVar21._8_8_,pplVar11);
      return lVar6;
    }
  }
  auVar21 = func_0x00f78af4();
  lVar14 = auVar21._8_8_;
  lVar6 = auVar21._0_8_;
  pcStack_148 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplStack_168 = pplVar17;
  pppuStack_150 = &pppuStack_120;
  auStack_160 = auVar19;
  if ((bRam0000000003eb65dd & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65dd = 1;
  }
  uVar5 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
  if (plVar4 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar6 = (*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x30) + 8))(lVar6,uVar8);
      return lVar6;
    }
  }
  lVar9 = func_0x00f78af4();
  pcStack_178 = Core_Actors_PooledActorManager__DeSpawnAllInGroup_object_;
  pplVar17 = pplVar12;
  lStack_188 = lVar6;
  pppuStack_180 = &pppuStack_150;
  if (*(long *)(lVar9 + 0x10) != 0) {
    pplVar17 = (long **)*pplVar12[6];
    lStack_190 = lVar14;
    lVar6 = (*(code *)*pplVar17)();
    auVar21._8_8_ = lStack_190;
    auVar21._0_8_ = pplVar12;
    if ((int)lVar6 == 0) {
      return lVar6;
    }
    if (*(long *)(lVar9 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar6 = (**(code **)pplVar12[6][1])();
      return lVar6;
    }
  }
  lStack_190 = auVar21._8_8_;
  auVar19 = func_0x00f78af4();
  uStack_1c0 = 0x3d25458;
  pcStack_198 = Core_Actors_PooledActorManager__Spawn_AoEHit_;
  uStack_1b8 = uVar5;
  lStack_1b0 = lVar9;
  uStack_1a8 = auVar21._0_8_;
  pppuStack_1a0 = &pppuStack_180;
  if ((bRam0000000003eb65de & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65de = 1;
  }
  uVar5 = **(undefined8 **)(auVar19._8_8_ + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar19._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar6 = (*(code *)**(undefined8 **)(*(long *)(auVar19._8_8_ + 0x30) + 8))(auVar19._0_8_,uVar5)
      ;
      return lVar6;
    }
  }
  auVar19 = func_0x00f78af4();
  pcStack_1c8 = Core_Actors_PooledActorManager__Spawn_object_;
  lStack_1d8 = 0;
  pppuStack_1d0 = &pppuStack_1a0;
  if (auVar19._0_8_ != 0) {
    (**(code **)*pplVar17[6])(auVar19._0_8_,auVar19._8_8_,&lStack_1d8);
    return lStack_1d8;
  }
  auVar19 = func_0x00f78af4();
  pcStack_1e8 = Core_Actors_PooledActorManager__TrySpawn_object_;
  pplVar11 = pplVar17;
  pppuStack_1f0 = &pppuStack_1d0;
  if ((bRam0000000003eb65df & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb65df = 1;
  }
  lVar6 = *pplVar17[6];
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar4 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar6,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (auVar19._0_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x018bda00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar6 = (**(code **)pplVar17[6][1])(auVar19._0_8_,uVar5,auVar19._8_8_);
      return lVar6;
    }
  }
  auVar20 = func_0x00f78af4();
  uVar5 = auVar20._8_8_;
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = pplVar13;
  auVar2._8_8_ = uVar5;
  auVar2._0_8_ = pplVar13;
  lVar14 = auVar20._0_8_;
  pcStack_228 = Core_Actors_PooledActorManager__TrySpawn_object_;
  lStack_250 = lVar6;
  pplStack_248 = pplVar17;
  pppuStack_230 = &pppuStack_1f0;
  auStack_240 = auVar19;
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_018bdaa0:
    auVar22 = func_0x00f78af4();
    lVar6 = auVar22._8_8_;
    puStack_258 = &UnityEngine_Rendering_ProfilingSampler__Get_URPProfileId_;
    lStack_288 = 0;
    lVar9 = **(long **)(lVar6 + 0x30);
    uVar1 = *(ushort *)(lVar9 + 0x132);
    lStack_280 = lVar14;
    pplStack_278 = pplVar17;
    pppuStack_260 = &pppuStack_230;
    auStack_270 = auVar19;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(lVar9);
      uVar1 = *(ushort *)(lVar9 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar9 = **(long **)(lVar6 + 0x30);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        lVar9 = **(long **)(lVar6 + 0x30);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        func_0x00f78ad0(lVar9);
      }
    }
    lVar9 = **(long **)(lVar6 + 0x30);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    if (**(long **)(lVar9 + 0xb8) == 0) {
      auVar19 = func_0x00f78af4();
      lVar10 = auVar19._8_8_;
      puStack_298 = &UnityEngine_Rendering_ProfilingSampler__Get_object_;
      lStack_2c8 = 0;
      lVar18 = **(long **)(lVar10 + 0x30);
      uVar1 = *(ushort *)(lVar18 + 0x132);
      lStack_2c0 = lVar14;
      lStack_2b8 = lVar9;
      pppuStack_2a0 = &pppuStack_260;
      if ((uVar1 & 1) == 0) {
        lStack_2b0 = lVar6;
        uStack_2a8 = auVar22._0_8_;
        func_0x00fac028(lVar18);
        auVar22._8_8_ = lStack_2b0;
        auVar22._0_8_ = uStack_2a8;
        uVar1 = *(ushort *)(lVar18 + 0x132);
      }
      lStack_2b0 = auVar22._8_8_;
      uStack_2a8 = auVar22._0_8_;
      if ((uVar1 >> 10 & 1) != 0) {
        lVar6 = **(long **)(lVar10 + 0x30);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
          auVar22._8_8_ = lStack_2b0;
          auVar22._0_8_ = uStack_2a8;
        }
        lStack_2b0 = auVar22._8_8_;
        uStack_2a8 = auVar22._0_8_;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          lVar6 = **(long **)(lVar10 + 0x30);
          if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar6);
            auVar22._8_8_ = lStack_2b0;
            auVar22._0_8_ = uStack_2a8;
          }
          lStack_2b0 = auVar22._8_8_;
          uStack_2a8 = auVar22._0_8_;
          func_0x00f78ad0(lVar6);
          auVar22._8_8_ = lStack_2b0;
          auVar22._0_8_ = uStack_2a8;
        }
      }
      lStack_2b0 = auVar22._8_8_;
      uStack_2a8 = auVar22._0_8_;
      lVar6 = **(long **)(lVar10 + 0x30);
      if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar6);
        auVar22._8_8_ = lStack_2b0;
        auVar22._0_8_ = uStack_2a8;
      }
      lStack_2b0 = auVar22._8_8_;
      uStack_2a8 = auVar22._0_8_;
      if (**(long **)(lVar6 + 0xb8) == 0) {
        auVar19 = func_0x00f78af4();
        lVar6 = auVar19._8_8_;
        if (auVar19._0_8_ == 0) {
          lVar14 = **(long **)(lVar6 + 0x30);
          uVar1 = *(ushort *)(lVar14 + 0x132);
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar14);
            uVar1 = *(ushort *)(lVar14 + 0x132);
          }
          if ((uVar1 >> 10 & 1) != 0) {
            lVar14 = **(long **)(lVar6 + 0x30);
            if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar14);
            }
            if (*(int *)(lVar14 + 0xe0) == 0) {
              lVar14 = **(long **)(lVar6 + 0x30);
              if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
                func_0x00fac028(lVar14);
              }
              func_0x00f78ad0(lVar14);
            }
          }
          lVar6 = **(long **)(lVar6 + 0x30);
          if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar6);
          }
          lVar14 = **(long **)(lVar6 + 0xb8);
        }
        else {
          lVar14 = *(long *)(*(long *)(lVar6 + 0x30) + 8);
          if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar14);
          }
          lVar14 = func_0x00f78aec(lVar14);
          (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x10))(lVar14,auVar19._0_8_);
        }
        return lVar14;
      }
      (*(code *)**(undefined8 **)(*(long *)(lVar10 + 0x30) + 8))
                (**(long **)(lVar6 + 0xb8),auVar19._0_8_,&lStack_2c8);
      return lStack_2c8;
    }
    (*(code *)**(undefined8 **)(*(long *)(lVar6 + 0x30) + 8))
              (**(long **)(lVar9 + 0xb8),auVar22._0_8_,&lStack_288);
    return lStack_288;
  }
  lVar6 = (**(code **)*pplVar13[6])();
  if ((int)lVar6 != 0) {
    pplVar17 = pplVar11;
    auVar19 = auVar2;
    if (*(long *)(lVar14 + 0x18) == 0) goto LAB_018bdaa0;
    uVar15 = (**(code **)pplVar13[6][1])(*(long *)(lVar14 + 0x18),*pplVar11);
    if ((uVar15 & 1) == 0) {
      auVar19 = auVar3;
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_018bdaa0;
      (**(code **)pplVar13[6][2])(*(long *)(lVar14 + 0x10),uVar5,*pplVar11);
      lVar6 = 0;
    }
    else {
      lVar6 = 1;
    }
  }
  return lVar6;
}



// ============================================================
// RVA: 0x18bd468 | Core.Containers.PoolManager.TryReleaseAllInPool<object>
// ============================================================
// [DECOMPILE_FAILED]

