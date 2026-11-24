// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0

// ============================================================
// RVA: 0x1563e14 | Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0..ctor
// ============================================================

void Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1563e1c | Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0.<GenerateRandomList>b__0
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__0
                (long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  ushort *puVar16;
  uint uVar17;
  uint *puVar18;
  code *pcVar19;
  ushort *puVar20;
  int *piVar21;
  long lVar22;
  ushort *puVar23;
  long *unaff_x19;
  long lVar24;
  long *unaff_x20;
  long *plVar25;
  long *plVar26;
  int iVar27;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined *puStack_1b8;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4fd5 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d220b0);
    bRam0000000003eb4fd5 = 1;
  }
  uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(param_2,0);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  plVar25 = *(long **)(param_1 + 0x10);
  if (plVar25 == (long *)0x0) {
    auVar29 = func_0x00f78af4();
    puStack_38 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__1;
    pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4fd6 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d220b0);
      bRam0000000003eb4fd6 = 1;
    }
    unaff_x21 = (long *)(auVar29._8_8_ + 0x18);
    uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    plVar25 = (long *)auVar29._0_8_[2];
    if (plVar25 == (long *)0x0) {
      auVar28 = func_0x00f78af4();
      puStack_68 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__2;
      pppppppuStack_70 = &pppppppuStack_40;
      if ((bRam0000000003eb4fd7 & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d220b0);
        bRam0000000003eb4fd7 = 1;
      }
      plVar25 = *(long **)(auVar28._0_8_ + 0x10);
      if (plVar25 == (long *)0x0) {
        auVar29 = func_0x00f78af4();
        puStack_98 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__3;
        pppppppuStack_a0 = &pppppppuStack_70;
        if ((bRam0000000003eb4fd8 & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d220b0);
          bRam0000000003eb4fd8 = 1;
        }
        unaff_x21 = (long *)(auVar29._8_8_ + 0x28);
        uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
        if ((int)uVar6 == 0) {
          return uVar6;
        }
        plVar25 = (long *)auVar29._0_8_[2];
        if (plVar25 == (long *)0x0) {
          auVar28 = func_0x00f78af4();
          puStack_c8 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__4;
          pppppppuStack_d0 = &pppppppuStack_a0;
          if ((bRam0000000003eb4fd9 & 1) == 0) {
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d220b0);
            bRam0000000003eb4fd9 = 1;
          }
          plVar25 = *(long **)(auVar28._0_8_ + 0x10);
          if (plVar25 == (long *)0x0) {
            auVar29 = func_0x00f78af4();
            puStack_f8 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__5;
            pppppppuStack_100 = &pppppppuStack_d0;
            if ((bRam0000000003eb4fda & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d220b0);
              bRam0000000003eb4fda = 1;
            }
            unaff_x21 = (long *)(auVar29._8_8_ + 0x38);
            uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
            if ((int)uVar6 == 0) {
              return uVar6;
            }
            plVar25 = (long *)auVar29._0_8_[2];
            if (plVar25 == (long *)0x0) {
              auVar28 = func_0x00f78af4();
              puStack_128 = &
                            Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__6
              ;
              pppppppuStack_130 = &pppppppuStack_100;
              if ((bRam0000000003eb4fdb & 1) == 0) {
                func_0x00f78a20(0x3d21270);
                func_0x00f78a20(0x3d220b0);
                bRam0000000003eb4fdb = 1;
              }
              plVar25 = *(long **)(auVar28._0_8_ + 0x10);
              if (plVar25 == (long *)0x0) {
                auVar29 = func_0x00f78af4();
                puStack_158 = &
                              Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__7
                ;
                pppppppuStack_160 = &pppppppuStack_130;
                if ((bRam0000000003eb4fdc & 1) == 0) {
                  func_0x00f78a20(0x3d21270);
                  func_0x00f78a20(0x3d220b0);
                  bRam0000000003eb4fdc = 1;
                }
                unaff_x21 = (long *)(auVar29._8_8_ + 0x48);
                uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
                if ((int)uVar6 == 0) {
                  return uVar6;
                }
                plVar25 = (long *)auVar29._0_8_[2];
                if (plVar25 == (long *)0x0) {
                  auVar28 = func_0x00f78af4();
                  unaff_x19 = auVar28._8_8_;
                  puStack_188 = &
                                Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__8
                  ;
                  unaff_x29 = &pppppppuStack_190;
                  pppppppuStack_190 = &pppppppuStack_160;
                  if ((bRam0000000003eb4fdd & 1) == 0) {
                    func_0x00f78a20(0x3d21270);
                    func_0x00f78a20(0x3d220b0);
                    bRam0000000003eb4fdd = 1;
                  }
                  plVar25 = *(long **)(auVar28._0_8_ + 0x10);
                  if (plVar25 == (long *)0x0) {
                    auVar29 = func_0x00f78af4();
                    puStack_1b8 = &
                                  Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__9
                    ;
                    if ((bRam0000000003eb4fde & 1) == 0) {
                      func_0x00f78a20(0x3d21270);
                      func_0x00f78a20(0x3d220b0);
                      bRam0000000003eb4fde = 1;
                    }
                    plVar25 = (long *)(auVar29._8_8_ + 0x58);
                    uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar25,0);
                    if ((int)uVar6 == 0) {
                      return uVar6;
                    }
                    plVar26 = *(long **)(auVar29._0_8_ + 0x10);
                    if (plVar26 == (long *)0x0) {
                      auVar30 = func_0x00f78af4();
                      uVar6 = /*System.Object$$.ctor*/ func_0x0294d018(auVar30._0_8_,0);
                      *(int *)(auVar30._0_8_ + 0x10) = auVar30._8_4_;
                      return uVar6;
                    }
                    lVar24 = *plVar25;
                    lVar13 = *plVar26;
                    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
                    if (uVar6 != 0) {
                      piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                          puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                          goto code_r0x01564828;
                        }
                        piVar21 = piVar21 + 4;
                        uVar6 = uVar6 - 1;
                      } while (uVar6 != 0);
                    }
                    puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564828:
                    lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffe50;
                    unaff_x21 = (long *)0x3eb4000;
                    unaff_x20 = (long *)0x0;
                  }
                  else {
                    lVar24 = unaff_x19[4];
                    lVar13 = *plVar25;
                    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
                    if (uVar6 != 0) {
                      piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                          puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                          goto code_r0x01564718;
                        }
                        piVar21 = piVar21 + 4;
                        uVar6 = uVar6 - 1;
                      } while (uVar6 != 0);
                    }
                    puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564718:
                    lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
                    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffe80;
                    unaff_x20 = (long *)0x0;
                    unaff_x19 = auVar29._0_8_;
                    unaff_x29 = pppppppuStack_190;
                    puStack_1b8 = puStack_188;
                  }
                }
                else {
                  lVar24 = *unaff_x21;
                  lVar13 = *plVar25;
                  uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
                  if (uVar6 != 0) {
                    piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                        puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                        goto code_r0x0156461c;
                      }
                      piVar21 = piVar21 + 4;
                      uVar6 = uVar6 - 1;
                    } while (uVar6 != 0);
                  }
                  puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x0156461c:
                  lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
                  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffeb0;
                  unaff_x21 = (long *)0x3eb4000;
                  unaff_x20 = (long *)0x0;
                  unaff_x19 = auVar28._8_8_;
                  unaff_x29 = pppppppuStack_160;
                  puStack_1b8 = puStack_158;
                }
              }
              else {
                lVar24 = auVar28._8_8_[3];
                lVar13 = *plVar25;
                uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar6 != 0) {
                  piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                      puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                      goto code_r0x0156450c;
                    }
                    piVar21 = piVar21 + 4;
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
                puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x0156450c:
                lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffee0;
                unaff_x20 = (long *)0x0;
                unaff_x19 = auVar29._0_8_;
                unaff_x29 = pppppppuStack_130;
                puStack_1b8 = puStack_128;
              }
            }
            else {
              lVar24 = *unaff_x21;
              lVar13 = *plVar25;
              uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar6 != 0) {
                piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                    puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                    goto code_r0x01564410;
                  }
                  piVar21 = piVar21 + 4;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564410:
              lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff10;
              unaff_x21 = (long *)0x3eb4000;
              unaff_x20 = (long *)0x0;
              unaff_x19 = auVar28._8_8_;
              unaff_x29 = pppppppuStack_100;
              puStack_1b8 = puStack_f8;
            }
          }
          else {
            lVar24 = auVar28._8_8_[2];
            lVar13 = *plVar25;
            uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar6 != 0) {
              piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                  puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                  goto code_r0x01564300;
                }
                piVar21 = piVar21 + 4;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564300:
            lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
            unaff_x20 = (long *)0x0;
            unaff_x19 = auVar29._0_8_;
            unaff_x29 = pppppppuStack_d0;
            puStack_1b8 = puStack_c8;
          }
        }
        else {
          lVar24 = *unaff_x21;
          lVar13 = *plVar25;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar6 != 0) {
            piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                goto code_r0x01564204;
              }
              piVar21 = piVar21 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564204:
          lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff70;
          unaff_x21 = (long *)0x3eb4000;
          unaff_x20 = (long *)0x0;
          unaff_x19 = auVar28._8_8_;
          unaff_x29 = pppppppuStack_a0;
          puStack_1b8 = puStack_98;
        }
      }
      else {
        lVar24 = auVar28._8_8_[1];
        lVar13 = *plVar25;
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar6 != 0) {
          piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
              goto code_r0x015640f4;
            }
            piVar21 = piVar21 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x015640f4:
        lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        unaff_x20 = (long *)0x0;
        unaff_x19 = auVar29._0_8_;
        unaff_x29 = pppppppuStack_70;
        puStack_1b8 = puStack_68;
      }
    }
    else {
      lVar24 = *unaff_x21;
      lVar13 = *plVar25;
      uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar6 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto code_r0x01563ff8;
          }
          piVar21 = piVar21 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01563ff8:
      lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x21 = (long *)0x3eb4000;
      unaff_x20 = (long *)0x0;
      unaff_x19 = param_2;
      unaff_x29 = pppppppuStack_40;
      puStack_1b8 = puStack_38;
    }
  }
  else {
    lVar24 = *param_2;
    lVar13 = *plVar25;
    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar6 != 0) {
      piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01563ee0;
        }
        piVar21 = piVar21 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
LAB_01563ee0:
    lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
    puStack_1b8 = unaff_x30;
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar29._8_8_ = lVar13;
  auVar29._0_8_ = lVar24;
  if ((lVar24 == 0) || (lVar13 == 0)) {
    uVar6 = 0;
    if (lVar24 == lVar13) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
      if ((lVar24 != 0) && (lVar13 != 0)) {
        if (*(int *)(lVar24 + 0x10) == *(int *)(lVar13 + 0x10)) goto System_String__EqualsHelper;
        uVar11 = 0;
      }
    }
    return uVar11;
  }
  uVar11 = 5;
code_r0x029caa48:
  lVar13 = auVar29._8_8_;
  lVar24 = auVar29._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_1b8;
  uVar6 = uVar11;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb9443 = 1;
  }
  if (5 < (uint)uVar11) {
code_r0x029caca0:
    uVar8 = func_0x00f78a24(0x3d746f0);
    uVar8 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar8,0);
    func_0x00f78a24(0x3d1fce8);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar9,uVar8,uVar10,0);
    uVar8 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar9,uVar8);
    goto code_r0x029cad04;
  }
  if (lVar24 == lVar13) {
    return 1;
  }
  if (lVar13 == 0) {
    return 0;
  }
  switch(uVar11 & 0xffffffff) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caba0;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
    if ((plVar25 == (long *)0x0) ||
       (plVar25 = (long *)(**(code **)(*plVar25 + 0x1f8))(plVar25,*(undefined8 *)(*plVar25 + 0x200))
       , plVar25 == (long *)0x0)) goto code_r0x029cad04;
    pcVar19 = *(code **)(*plVar25 + 0x1a8);
    uVar8 = *(undefined8 *)(*plVar25 + 0x1b0);
    uVar9 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar5 = *(int *)(lVar24 + 0x10);
    if (iVar5 != *(int *)(lVar13 + 0x10)) {
      return 0;
    }
    if (iVar5 == 0) goto code_r0x029cac68;
    lVar15 = (long)iVar5 << 1;
    puVar16 = (ushort *)(lVar24 + 0x16);
    puVar23 = (ushort *)(lVar24 + 0x14);
    lVar22 = lVar15;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar25 == (long *)0x0) ||
     (plVar25 = (long *)(**(code **)(*plVar25 + 0x1f8))(plVar25,*(undefined8 *)(*plVar25 + 0x200)),
     plVar25 == (long *)0x0)) {
code_r0x029cad04:
    lVar24 = func_0x00f78af4();
    if (*(int *)(lVar24 + 0x10) == 0) {
      return 1;
    }
    lVar13 = (long)*(int *)(lVar24 + 0x10) * 2;
    puVar16 = (ushort *)(lVar24 + 0x14);
    puVar23 = (ushort *)(lVar24 + 0x16);
    do {
      lVar13 = lVar13 + -2;
      uVar3 = *puVar16;
      puVar16 = puVar23;
      puVar23 = puVar23 + 1;
    } while (uVar3 < 0x80 && lVar13 != 0);
    return (ulong)(uVar3 < 0x80);
  }
  pcVar19 = *(code **)(*plVar25 + 0x1a8);
  uVar8 = *(undefined8 *)(*plVar25 + 0x1b0);
  uVar9 = 0;
code_r0x029cabc8:
  iVar5 = (*pcVar19)(plVar25,lVar24,lVar13,uVar9,uVar8);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar5 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar24,lVar13,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar24 + 0x10) != *(int *)(lVar13 + 0x10)) {
    return 0;
  }
  unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x10);
  puStack_1b8 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
System_String__EqualsHelper:
  while( true ) {
    lVar24 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = puStack_1b8;
    if ((lVar24 != 0) && (auVar29._8_8_ != 0)) {
      plVar25 = (long *)(lVar24 + 0x14);
      iVar5 = *(int *)(lVar24 + 0x10);
      plVar26 = (long *)(auVar29._8_8_ + 0x14);
      uVar6 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar6 & 1) == 0) {
        iVar27 = iVar5;
        if (9 < iVar5) {
          do {
            if ((int)*plVar25 != (int)*plVar26) {
              return 0;
            }
            if (*(int *)((long)plVar25 + 4) != *(int *)((long)plVar26 + 4)) {
              return 0;
            }
            if ((int)plVar25[1] != (int)plVar26[1]) {
              return 0;
            }
            if (*(int *)((long)plVar25 + 0xc) != *(int *)((long)plVar26 + 0xc)) {
              return 0;
            }
            if ((int)plVar25[2] != (int)plVar26[2]) {
              return 0;
            }
            plVar25 = (long *)((long)plVar25 + 0x14);
            plVar26 = (long *)((long)plVar26 + 0x14);
            iVar5 = iVar27 + -10;
            bVar4 = 0x13 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      else {
        iVar27 = iVar5;
        if (0xb < iVar5) {
          do {
            if (((*plVar25 != *plVar26) || (plVar25[1] != plVar26[1])) || (plVar25[2] != plVar26[2])
               ) {
              return 0;
            }
            plVar25 = plVar25 + 3;
            plVar26 = plVar26 + 3;
            iVar5 = iVar27 + -0xc;
            bVar4 = 0x17 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      if (iVar5 < 1) {
        uVar6 = 1;
      }
      else {
        iVar5 = iVar5 + 2;
        do {
          bVar4 = (int)*plVar25 == (int)*plVar26;
          uVar6 = (ulong)bVar4;
          if (!bVar4) {
            return uVar6;
          }
          plVar25 = (long *)((long)plVar25 + 4);
          plVar26 = (long *)((long)plVar26 + 4);
          iVar5 = iVar5 + -2;
        } while (2 < iVar5);
      }
      return uVar6;
    }
    auVar28 = func_0x00f78af4();
    lVar13 = auVar28._8_8_;
    lVar24 = auVar28._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
    uVar11 = uVar6;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
      uVar11 = uVar6;
    }
    if ((lVar24 != 0) && (lVar13 != 0)) {
      uVar1 = *(undefined4 *)(lVar24 + 0x10);
      uVar2 = *(undefined4 *)(lVar13 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar14 = (uint *)(lVar24 + 0x14);
      puVar18 = (uint *)(lVar13 + 0x14);
      if (iVar5 < 10) goto code_r0x029ca8c8;
      lVar22 = 4;
      iVar27 = iVar5;
      goto code_r0x029ca858;
    }
    auVar29 = func_0x00f78af4();
    unaff_x20 = auVar29._8_8_;
    unaff_x19 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar28;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x68) = &System_String__Equals;
    unaff_x29 = (undefined8 *******)((long)register0x00000008 + -0x70);
    unaff_x21 = (long *)0x3eb9000;
    if ((bRam0000000003eb9442 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9442 = 1;
    }
    if (unaff_x19 == (long *)0x0) break;
    if ((unaff_x20 == (long *)0x0) || (*unaff_x20 != /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      return 0;
    }
    if (unaff_x19 == unaff_x20) {
      return 1;
    }
    if (unaff_x20 == (long *)0x0) goto code_r0x029caa44;
    if ((int)unaff_x19[2] != (int)unaff_x20[2]) {
      return 0;
    }
    unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x70);
    puStack_1b8 = *(undefined **)((long)register0x00000008 + -0x68);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x80);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    uVar6 = uVar11;
  }
  func_0x00f78a24(0x3d23938);
  unaff_x19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(unaff_x19,0);
  uVar8 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar8);
code_r0x029caa44:
  puStack_1b8 = &System_String__Equals;
  auVar29 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  goto code_r0x029caa48;
  while( true ) {
    if (puVar14[1] != puVar18[1]) goto code_r0x029ca930;
    if (puVar14[2] != puVar18[2]) {
      lVar22 = 8;
      goto code_r0x029ca930;
    }
    if (puVar14[3] != puVar18[3]) {
      lVar22 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar14[4] != puVar18[4]) {
      lVar22 = 0x10;
      goto code_r0x029ca930;
    }
    puVar14 = puVar14 + 5;
    puVar18 = puVar18 + 5;
    iVar5 = iVar27 + -10;
    bVar4 = iVar27 < 0x14;
    iVar27 = iVar5;
    if (bVar4) break;
code_r0x029ca858:
    if (*puVar14 != *puVar18) {
      lVar22 = 0;
code_r0x029ca930:
      puVar14 = (uint *)(lVar22 + (long)puVar14);
      puVar18 = (uint *)(lVar22 + (long)puVar18);
      uVar12 = (uint)(ushort)*puVar14 - (uint)(ushort)*puVar18;
      if (uVar12 != 0) {
        return (ulong)uVar12;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar5) {
    iVar5 = iVar5 + 2;
    do {
      if (*puVar14 != *puVar18) {
        uVar12 = (*puVar14 & 0xffff) - (*puVar18 & 0xffff);
        if (uVar12 != 0) {
          return (ulong)uVar12;
        }
code_r0x029ca948:
        uVar12 = (uint)*(ushort *)((long)puVar14 + 2);
        uVar17 = (uint)*(ushort *)((long)puVar18 + 2);
        goto code_r0x029ca950;
      }
      puVar14 = puVar14 + 1;
      puVar18 = puVar18 + 1;
      iVar5 = iVar5 + -2;
    } while (2 < iVar5);
  }
  uVar12 = *(uint *)(lVar24 + 0x10);
  uVar17 = *(uint *)(lVar13 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar12 - uVar17);
  while( true ) {
    lVar22 = lVar22 + -2;
    puVar16 = puVar20 + 1;
    puVar23 = puVar20;
    if (lVar22 == 0) break;
code_r0x029cac24:
    puVar20 = puVar16;
    if (0x7f < *puVar23) goto code_r0x029cac8c;
  }
  if (iVar5 != 0) {
    puVar16 = (ushort *)(lVar13 + 0x16);
    puVar23 = (ushort *)(lVar13 + 0x14);
    do {
      puVar20 = puVar16;
      if (0x7f < *puVar23) goto code_r0x029cac8c;
      lVar15 = lVar15 + -2;
      puVar16 = puVar20 + 1;
      puVar23 = puVar20;
    } while (lVar15 != 0);
  }
code_r0x029cac68:
  iVar5 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar24,lVar13);
code_r0x029cabcc:
  return (ulong)(iVar5 == 0);
}



// ============================================================
// RVA: 0x1563f30 | Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0.<GenerateRandomList>b__1
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__1
                (long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  ushort *puVar16;
  uint uVar17;
  uint *puVar18;
  code *pcVar19;
  ushort *puVar20;
  int *piVar21;
  long lVar22;
  ushort *puVar23;
  long *unaff_x19;
  long lVar24;
  long *unaff_x20;
  long *plVar25;
  long *plVar26;
  int iVar27;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined *puStack_188;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4fd6 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d220b0);
    bRam0000000003eb4fd6 = 1;
  }
  plVar26 = (long *)(param_2 + 0x18);
  uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar26,0);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  plVar25 = (long *)param_1[2];
  if (plVar25 == (long *)0x0) {
    auVar29 = func_0x00f78af4();
    puStack_38 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__2;
    pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4fd7 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d220b0);
      bRam0000000003eb4fd7 = 1;
    }
    plVar25 = *(long **)(auVar29._0_8_ + 0x10);
    if (plVar25 == (long *)0x0) {
      auVar28 = func_0x00f78af4();
      puStack_68 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__3;
      pppppppuStack_70 = &pppppppuStack_40;
      if ((bRam0000000003eb4fd8 & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d220b0);
        bRam0000000003eb4fd8 = 1;
      }
      unaff_x21 = (long *)(auVar28._8_8_ + 0x28);
      uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      plVar26 = (long *)auVar28._0_8_[2];
      if (plVar26 == (long *)0x0) {
        auVar29 = func_0x00f78af4();
        puStack_98 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__4;
        pppppppuStack_a0 = &pppppppuStack_70;
        if ((bRam0000000003eb4fd9 & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d220b0);
          bRam0000000003eb4fd9 = 1;
        }
        plVar26 = *(long **)(auVar29._0_8_ + 0x10);
        if (plVar26 == (long *)0x0) {
          auVar28 = func_0x00f78af4();
          puStack_c8 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__5;
          pppppppuStack_d0 = &pppppppuStack_a0;
          if ((bRam0000000003eb4fda & 1) == 0) {
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d220b0);
            bRam0000000003eb4fda = 1;
          }
          unaff_x21 = (long *)(auVar28._8_8_ + 0x38);
          uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          plVar26 = (long *)auVar28._0_8_[2];
          if (plVar26 == (long *)0x0) {
            auVar29 = func_0x00f78af4();
            puStack_f8 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__6;
            pppppppuStack_100 = &pppppppuStack_d0;
            if ((bRam0000000003eb4fdb & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d220b0);
              bRam0000000003eb4fdb = 1;
            }
            plVar26 = *(long **)(auVar29._0_8_ + 0x10);
            if (plVar26 == (long *)0x0) {
              auVar28 = func_0x00f78af4();
              puStack_128 = &
                            Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__7
              ;
              pppppppuStack_130 = &pppppppuStack_100;
              if ((bRam0000000003eb4fdc & 1) == 0) {
                func_0x00f78a20(0x3d21270);
                func_0x00f78a20(0x3d220b0);
                bRam0000000003eb4fdc = 1;
              }
              unaff_x21 = (long *)(auVar28._8_8_ + 0x48);
              uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
              if ((int)uVar6 == 0) {
                return uVar6;
              }
              plVar26 = (long *)auVar28._0_8_[2];
              if (plVar26 == (long *)0x0) {
                auVar29 = func_0x00f78af4();
                unaff_x19 = auVar29._8_8_;
                puStack_158 = &
                              Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__8
                ;
                unaff_x29 = &pppppppuStack_160;
                pppppppuStack_160 = &pppppppuStack_130;
                if ((bRam0000000003eb4fdd & 1) == 0) {
                  func_0x00f78a20(0x3d21270);
                  func_0x00f78a20(0x3d220b0);
                  bRam0000000003eb4fdd = 1;
                }
                plVar26 = *(long **)(auVar29._0_8_ + 0x10);
                if (plVar26 == (long *)0x0) {
                  auVar29 = func_0x00f78af4();
                  puStack_188 = &
                                Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__9
                  ;
                  if ((bRam0000000003eb4fde & 1) == 0) {
                    func_0x00f78a20(0x3d21270);
                    func_0x00f78a20(0x3d220b0);
                    bRam0000000003eb4fde = 1;
                  }
                  plVar26 = (long *)(auVar29._8_8_ + 0x58);
                  uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar26,0);
                  if ((int)uVar6 == 0) {
                    return uVar6;
                  }
                  plVar25 = *(long **)(auVar29._0_8_ + 0x10);
                  if (plVar25 == (long *)0x0) {
                    auVar30 = func_0x00f78af4();
                    uVar6 = /*System.Object$$.ctor*/ func_0x0294d018(auVar30._0_8_,0);
                    *(int *)(auVar30._0_8_ + 0x10) = auVar30._8_4_;
                    return uVar6;
                  }
                  lVar24 = *plVar26;
                  lVar13 = *plVar25;
                  uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
                  if (uVar6 != 0) {
                    piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                        puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                        goto code_r0x01564828;
                      }
                      piVar21 = piVar21 + 4;
                      uVar6 = uVar6 - 1;
                    } while (uVar6 != 0);
                  }
                  puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564828:
                  lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
                  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffe80;
                  unaff_x21 = (long *)0x3eb4000;
                  unaff_x20 = (long *)0x0;
                }
                else {
                  lVar24 = unaff_x19[4];
                  lVar13 = *plVar26;
                  uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
                  if (uVar6 != 0) {
                    piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                        puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                        goto code_r0x01564718;
                      }
                      piVar21 = piVar21 + 4;
                      uVar6 = uVar6 - 1;
                    } while (uVar6 != 0);
                  }
                  puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564718:
                  lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
                  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffeb0;
                  unaff_x20 = (long *)0x0;
                  unaff_x19 = auVar28._0_8_;
                  unaff_x29 = pppppppuStack_160;
                  puStack_188 = puStack_158;
                }
              }
              else {
                lVar24 = *unaff_x21;
                lVar13 = *plVar26;
                uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
                if (uVar6 != 0) {
                  piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                      puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                      goto code_r0x0156461c;
                    }
                    piVar21 = piVar21 + 4;
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
                puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x0156461c:
                lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffee0;
                unaff_x21 = (long *)0x3eb4000;
                unaff_x20 = (long *)0x0;
                unaff_x19 = auVar29._8_8_;
                unaff_x29 = pppppppuStack_130;
                puStack_188 = puStack_128;
              }
            }
            else {
              lVar24 = auVar29._8_8_[3];
              lVar13 = *plVar26;
              uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar6 != 0) {
                piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                    puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                    goto code_r0x0156450c;
                  }
                  piVar21 = piVar21 + 4;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x0156450c:
              lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff10;
              unaff_x20 = (long *)0x0;
              unaff_x19 = auVar28._0_8_;
              unaff_x29 = pppppppuStack_100;
              puStack_188 = puStack_f8;
            }
          }
          else {
            lVar24 = *unaff_x21;
            lVar13 = *plVar26;
            uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar6 != 0) {
              piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                  puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                  goto code_r0x01564410;
                }
                piVar21 = piVar21 + 4;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564410:
            lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
            unaff_x21 = (long *)0x3eb4000;
            unaff_x20 = (long *)0x0;
            unaff_x19 = auVar29._8_8_;
            unaff_x29 = pppppppuStack_d0;
            puStack_188 = puStack_c8;
          }
        }
        else {
          lVar24 = auVar29._8_8_[2];
          lVar13 = *plVar26;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar6 != 0) {
            piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                goto code_r0x01564300;
              }
              piVar21 = piVar21 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564300:
          lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff70;
          unaff_x20 = (long *)0x0;
          unaff_x19 = auVar28._0_8_;
          unaff_x29 = pppppppuStack_a0;
          puStack_188 = puStack_98;
        }
      }
      else {
        lVar24 = *unaff_x21;
        lVar13 = *plVar26;
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar6 != 0) {
          piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
              goto code_r0x01564204;
            }
            piVar21 = piVar21 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564204:
        lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        unaff_x21 = (long *)0x3eb4000;
        unaff_x20 = (long *)0x0;
        unaff_x19 = auVar29._8_8_;
        unaff_x29 = pppppppuStack_70;
        puStack_188 = puStack_68;
      }
    }
    else {
      lVar24 = auVar29._8_8_[1];
      lVar13 = *plVar25;
      uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar6 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto code_r0x015640f4;
          }
          piVar21 = piVar21 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x015640f4:
      lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x20 = (long *)0x0;
      unaff_x19 = param_1;
      unaff_x21 = plVar26;
      unaff_x29 = pppppppuStack_40;
      puStack_188 = puStack_38;
    }
  }
  else {
    lVar24 = *plVar26;
    lVar13 = *plVar25;
    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar6 != 0) {
      piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01563ff8;
        }
        piVar21 = piVar21 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
LAB_01563ff8:
    lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
    puStack_188 = unaff_x30;
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar29._8_8_ = lVar13;
  auVar29._0_8_ = lVar24;
  if ((lVar24 == 0) || (lVar13 == 0)) {
    uVar6 = 0;
    if (lVar24 == lVar13) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
      if ((lVar24 != 0) && (lVar13 != 0)) {
        if (*(int *)(lVar24 + 0x10) == *(int *)(lVar13 + 0x10)) goto System_String__EqualsHelper;
        uVar11 = 0;
      }
    }
    return uVar11;
  }
  uVar11 = 5;
code_r0x029caa48:
  lVar13 = auVar29._8_8_;
  lVar24 = auVar29._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_188;
  uVar6 = uVar11;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb9443 = 1;
  }
  if (5 < (uint)uVar11) {
code_r0x029caca0:
    uVar8 = func_0x00f78a24(0x3d746f0);
    uVar8 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar8,0);
    func_0x00f78a24(0x3d1fce8);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar9,uVar8,uVar10,0);
    uVar8 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar9,uVar8);
    goto code_r0x029cad04;
  }
  if (lVar24 == lVar13) {
    return 1;
  }
  if (lVar13 == 0) {
    return 0;
  }
  switch(uVar11 & 0xffffffff) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caba0;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
    if ((plVar26 == (long *)0x0) ||
       (plVar26 = (long *)(**(code **)(*plVar26 + 0x1f8))(plVar26,*(undefined8 *)(*plVar26 + 0x200))
       , plVar26 == (long *)0x0)) goto code_r0x029cad04;
    pcVar19 = *(code **)(*plVar26 + 0x1a8);
    uVar8 = *(undefined8 *)(*plVar26 + 0x1b0);
    uVar9 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar5 = *(int *)(lVar24 + 0x10);
    if (iVar5 != *(int *)(lVar13 + 0x10)) {
      return 0;
    }
    if (iVar5 == 0) goto code_r0x029cac68;
    lVar15 = (long)iVar5 << 1;
    puVar16 = (ushort *)(lVar24 + 0x16);
    puVar23 = (ushort *)(lVar24 + 0x14);
    lVar22 = lVar15;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar26 == (long *)0x0) ||
     (plVar26 = (long *)(**(code **)(*plVar26 + 0x1f8))(plVar26,*(undefined8 *)(*plVar26 + 0x200)),
     plVar26 == (long *)0x0)) {
code_r0x029cad04:
    lVar24 = func_0x00f78af4();
    if (*(int *)(lVar24 + 0x10) == 0) {
      return 1;
    }
    lVar13 = (long)*(int *)(lVar24 + 0x10) * 2;
    puVar16 = (ushort *)(lVar24 + 0x14);
    puVar23 = (ushort *)(lVar24 + 0x16);
    do {
      lVar13 = lVar13 + -2;
      uVar3 = *puVar16;
      puVar16 = puVar23;
      puVar23 = puVar23 + 1;
    } while (uVar3 < 0x80 && lVar13 != 0);
    return (ulong)(uVar3 < 0x80);
  }
  pcVar19 = *(code **)(*plVar26 + 0x1a8);
  uVar8 = *(undefined8 *)(*plVar26 + 0x1b0);
  uVar9 = 0;
code_r0x029cabc8:
  iVar5 = (*pcVar19)(plVar26,lVar24,lVar13,uVar9,uVar8);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar5 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar24,lVar13,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar24 + 0x10) != *(int *)(lVar13 + 0x10)) {
    return 0;
  }
  unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x10);
  puStack_188 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
System_String__EqualsHelper:
  while( true ) {
    lVar24 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = puStack_188;
    if ((lVar24 != 0) && (auVar29._8_8_ != 0)) {
      plVar26 = (long *)(lVar24 + 0x14);
      iVar5 = *(int *)(lVar24 + 0x10);
      plVar25 = (long *)(auVar29._8_8_ + 0x14);
      uVar6 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar6 & 1) == 0) {
        iVar27 = iVar5;
        if (9 < iVar5) {
          do {
            if ((int)*plVar26 != (int)*plVar25) {
              return 0;
            }
            if (*(int *)((long)plVar26 + 4) != *(int *)((long)plVar25 + 4)) {
              return 0;
            }
            if ((int)plVar26[1] != (int)plVar25[1]) {
              return 0;
            }
            if (*(int *)((long)plVar26 + 0xc) != *(int *)((long)plVar25 + 0xc)) {
              return 0;
            }
            if ((int)plVar26[2] != (int)plVar25[2]) {
              return 0;
            }
            plVar26 = (long *)((long)plVar26 + 0x14);
            plVar25 = (long *)((long)plVar25 + 0x14);
            iVar5 = iVar27 + -10;
            bVar4 = 0x13 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      else {
        iVar27 = iVar5;
        if (0xb < iVar5) {
          do {
            if (((*plVar26 != *plVar25) || (plVar26[1] != plVar25[1])) || (plVar26[2] != plVar25[2])
               ) {
              return 0;
            }
            plVar26 = plVar26 + 3;
            plVar25 = plVar25 + 3;
            iVar5 = iVar27 + -0xc;
            bVar4 = 0x17 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      if (iVar5 < 1) {
        uVar6 = 1;
      }
      else {
        iVar5 = iVar5 + 2;
        do {
          bVar4 = (int)*plVar26 == (int)*plVar25;
          uVar6 = (ulong)bVar4;
          if (!bVar4) {
            return uVar6;
          }
          plVar26 = (long *)((long)plVar26 + 4);
          plVar25 = (long *)((long)plVar25 + 4);
          iVar5 = iVar5 + -2;
        } while (2 < iVar5);
      }
      return uVar6;
    }
    auVar28 = func_0x00f78af4();
    lVar13 = auVar28._8_8_;
    lVar24 = auVar28._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
    uVar11 = uVar6;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
      uVar11 = uVar6;
    }
    if ((lVar24 != 0) && (lVar13 != 0)) {
      uVar1 = *(undefined4 *)(lVar24 + 0x10);
      uVar2 = *(undefined4 *)(lVar13 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar14 = (uint *)(lVar24 + 0x14);
      puVar18 = (uint *)(lVar13 + 0x14);
      if (iVar5 < 10) goto code_r0x029ca8c8;
      lVar22 = 4;
      iVar27 = iVar5;
      goto code_r0x029ca858;
    }
    auVar29 = func_0x00f78af4();
    unaff_x20 = auVar29._8_8_;
    unaff_x19 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar28;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x68) = &System_String__Equals;
    unaff_x29 = (undefined8 *******)((long)register0x00000008 + -0x70);
    unaff_x21 = (long *)0x3eb9000;
    if ((bRam0000000003eb9442 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9442 = 1;
    }
    if (unaff_x19 == (long *)0x0) break;
    if ((unaff_x20 == (long *)0x0) || (*unaff_x20 != /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      return 0;
    }
    if (unaff_x19 == unaff_x20) {
      return 1;
    }
    if (unaff_x20 == (long *)0x0) goto code_r0x029caa44;
    if ((int)unaff_x19[2] != (int)unaff_x20[2]) {
      return 0;
    }
    unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x70);
    puStack_188 = *(undefined **)((long)register0x00000008 + -0x68);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x80);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    uVar6 = uVar11;
  }
  func_0x00f78a24(0x3d23938);
  unaff_x19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(unaff_x19,0);
  uVar8 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar8);
code_r0x029caa44:
  puStack_188 = &System_String__Equals;
  auVar29 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  goto code_r0x029caa48;
  while( true ) {
    if (puVar14[1] != puVar18[1]) goto code_r0x029ca930;
    if (puVar14[2] != puVar18[2]) {
      lVar22 = 8;
      goto code_r0x029ca930;
    }
    if (puVar14[3] != puVar18[3]) {
      lVar22 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar14[4] != puVar18[4]) {
      lVar22 = 0x10;
      goto code_r0x029ca930;
    }
    puVar14 = puVar14 + 5;
    puVar18 = puVar18 + 5;
    iVar5 = iVar27 + -10;
    bVar4 = iVar27 < 0x14;
    iVar27 = iVar5;
    if (bVar4) break;
code_r0x029ca858:
    if (*puVar14 != *puVar18) {
      lVar22 = 0;
code_r0x029ca930:
      puVar14 = (uint *)(lVar22 + (long)puVar14);
      puVar18 = (uint *)(lVar22 + (long)puVar18);
      uVar12 = (uint)(ushort)*puVar14 - (uint)(ushort)*puVar18;
      if (uVar12 != 0) {
        return (ulong)uVar12;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar5) {
    iVar5 = iVar5 + 2;
    do {
      if (*puVar14 != *puVar18) {
        uVar12 = (*puVar14 & 0xffff) - (*puVar18 & 0xffff);
        if (uVar12 != 0) {
          return (ulong)uVar12;
        }
code_r0x029ca948:
        uVar12 = (uint)*(ushort *)((long)puVar14 + 2);
        uVar17 = (uint)*(ushort *)((long)puVar18 + 2);
        goto code_r0x029ca950;
      }
      puVar14 = puVar14 + 1;
      puVar18 = puVar18 + 1;
      iVar5 = iVar5 + -2;
    } while (2 < iVar5);
  }
  uVar12 = *(uint *)(lVar24 + 0x10);
  uVar17 = *(uint *)(lVar13 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar12 - uVar17);
  while( true ) {
    lVar22 = lVar22 + -2;
    puVar16 = puVar20 + 1;
    puVar23 = puVar20;
    if (lVar22 == 0) break;
code_r0x029cac24:
    puVar20 = puVar16;
    if (0x7f < *puVar23) goto code_r0x029cac8c;
  }
  if (iVar5 != 0) {
    puVar16 = (ushort *)(lVar13 + 0x16);
    puVar23 = (ushort *)(lVar13 + 0x14);
    do {
      puVar20 = puVar16;
      if (0x7f < *puVar23) goto code_r0x029cac8c;
      lVar15 = lVar15 + -2;
      puVar16 = puVar20 + 1;
      puVar23 = puVar20;
    } while (lVar15 != 0);
  }
code_r0x029cac68:
  iVar5 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar24,lVar13);
code_r0x029cabcc:
  return (ulong)(iVar5 == 0);
}



// ============================================================
// RVA: 0x1564048 | Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0.<GenerateRandomList>b__2
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__2
                (long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  ushort *puVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  code *pcVar19;
  ushort *puVar20;
  int *piVar21;
  long lVar22;
  ushort *puVar23;
  long *unaff_x19;
  long lVar24;
  long *unaff_x20;
  long *plVar25;
  long *plVar26;
  int iVar27;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined *puStack_158;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4fd7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d220b0);
    bRam0000000003eb4fd7 = 1;
  }
  plVar25 = *(long **)(param_1 + 0x10);
  if (plVar25 == (long *)0x0) {
    auVar29 = func_0x00f78af4();
    puStack_38 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__3;
    pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4fd8 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d220b0);
      bRam0000000003eb4fd8 = 1;
    }
    unaff_x21 = (long *)(auVar29._8_8_ + 0x28);
    uVar17 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
    if ((int)uVar17 == 0) {
      return uVar17;
    }
    plVar25 = (long *)auVar29._0_8_[2];
    if (plVar25 == (long *)0x0) {
      auVar28 = func_0x00f78af4();
      puStack_68 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__4;
      pppppppuStack_70 = &pppppppuStack_40;
      if ((bRam0000000003eb4fd9 & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d220b0);
        bRam0000000003eb4fd9 = 1;
      }
      plVar25 = *(long **)(auVar28._0_8_ + 0x10);
      if (plVar25 == (long *)0x0) {
        auVar29 = func_0x00f78af4();
        puStack_98 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__5;
        pppppppuStack_a0 = &pppppppuStack_70;
        if ((bRam0000000003eb4fda & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d220b0);
          bRam0000000003eb4fda = 1;
        }
        unaff_x21 = (long *)(auVar29._8_8_ + 0x38);
        uVar17 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
        if ((int)uVar17 == 0) {
          return uVar17;
        }
        plVar25 = (long *)auVar29._0_8_[2];
        if (plVar25 == (long *)0x0) {
          auVar28 = func_0x00f78af4();
          puStack_c8 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__6;
          pppppppuStack_d0 = &pppppppuStack_a0;
          if ((bRam0000000003eb4fdb & 1) == 0) {
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d220b0);
            bRam0000000003eb4fdb = 1;
          }
          plVar25 = *(long **)(auVar28._0_8_ + 0x10);
          if (plVar25 == (long *)0x0) {
            auVar29 = func_0x00f78af4();
            puStack_f8 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__7;
            pppppppuStack_100 = &pppppppuStack_d0;
            if ((bRam0000000003eb4fdc & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d220b0);
              bRam0000000003eb4fdc = 1;
            }
            unaff_x21 = (long *)(auVar29._8_8_ + 0x48);
            uVar17 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
            if ((int)uVar17 == 0) {
              return uVar17;
            }
            plVar25 = (long *)auVar29._0_8_[2];
            if (plVar25 == (long *)0x0) {
              auVar28 = func_0x00f78af4();
              unaff_x19 = auVar28._8_8_;
              puStack_128 = &
                            Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__8
              ;
              unaff_x29 = &pppppppuStack_130;
              pppppppuStack_130 = &pppppppuStack_100;
              if ((bRam0000000003eb4fdd & 1) == 0) {
                func_0x00f78a20(0x3d21270);
                func_0x00f78a20(0x3d220b0);
                bRam0000000003eb4fdd = 1;
              }
              plVar25 = *(long **)(auVar28._0_8_ + 0x10);
              if (plVar25 == (long *)0x0) {
                auVar29 = func_0x00f78af4();
                puStack_158 = &
                              Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__9
                ;
                if ((bRam0000000003eb4fde & 1) == 0) {
                  func_0x00f78a20(0x3d21270);
                  func_0x00f78a20(0x3d220b0);
                  bRam0000000003eb4fde = 1;
                }
                plVar25 = (long *)(auVar29._8_8_ + 0x58);
                uVar17 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar25,0);
                if ((int)uVar17 == 0) {
                  return uVar17;
                }
                plVar26 = *(long **)(auVar29._0_8_ + 0x10);
                if (plVar26 == (long *)0x0) {
                  auVar30 = func_0x00f78af4();
                  uVar17 = /*System.Object$$.ctor*/ func_0x0294d018(auVar30._0_8_,0);
                  *(int *)(auVar30._0_8_ + 0x10) = auVar30._8_4_;
                  return uVar17;
                }
                lVar24 = *plVar25;
                lVar12 = *plVar26;
                uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar17 != 0) {
                  piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                      puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                      goto code_r0x01564828;
                    }
                    piVar21 = piVar21 + 4;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
                puVar6 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564828:
                lVar12 = (*(code *)*puVar6)(plVar26,puVar6[1]);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffeb0;
                unaff_x21 = (long *)0x3eb4000;
                unaff_x20 = (long *)0x0;
              }
              else {
                lVar24 = unaff_x19[4];
                lVar12 = *plVar25;
                uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar17 != 0) {
                  piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                      puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                      goto code_r0x01564718;
                    }
                    piVar21 = piVar21 + 4;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
                puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564718:
                lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffee0;
                unaff_x20 = (long *)0x0;
                unaff_x19 = auVar29._0_8_;
                unaff_x29 = pppppppuStack_130;
                puStack_158 = puStack_128;
              }
            }
            else {
              lVar24 = *unaff_x21;
              lVar12 = *plVar25;
              uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar17 != 0) {
                piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                    puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                    goto code_r0x0156461c;
                  }
                  piVar21 = piVar21 + 4;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x0156461c:
              lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff10;
              unaff_x21 = (long *)0x3eb4000;
              unaff_x20 = (long *)0x0;
              unaff_x19 = auVar28._8_8_;
              unaff_x29 = pppppppuStack_100;
              puStack_158 = puStack_f8;
            }
          }
          else {
            lVar24 = auVar28._8_8_[3];
            lVar12 = *plVar25;
            uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar17 != 0) {
              piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                  goto code_r0x0156450c;
                }
                piVar21 = piVar21 + 4;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x0156450c:
            lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
            unaff_x20 = (long *)0x0;
            unaff_x19 = auVar29._0_8_;
            unaff_x29 = pppppppuStack_d0;
            puStack_158 = puStack_c8;
          }
        }
        else {
          lVar24 = *unaff_x21;
          lVar12 = *plVar25;
          uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar17 != 0) {
            piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                goto code_r0x01564410;
              }
              piVar21 = piVar21 + 4;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564410:
          lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff70;
          unaff_x21 = (long *)0x3eb4000;
          unaff_x20 = (long *)0x0;
          unaff_x19 = auVar28._8_8_;
          unaff_x29 = pppppppuStack_a0;
          puStack_158 = puStack_98;
        }
      }
      else {
        lVar24 = auVar28._8_8_[2];
        lVar12 = *plVar25;
        uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar17 != 0) {
          piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
              goto code_r0x01564300;
            }
            piVar21 = piVar21 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564300:
        lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        unaff_x20 = (long *)0x0;
        unaff_x19 = auVar29._0_8_;
        unaff_x29 = pppppppuStack_70;
        puStack_158 = puStack_68;
      }
    }
    else {
      lVar24 = *unaff_x21;
      lVar12 = *plVar25;
      uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar17 != 0) {
        piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
            goto code_r0x01564204;
          }
          piVar21 = piVar21 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564204:
      lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x21 = (long *)0x3eb4000;
      unaff_x20 = (long *)0x0;
      unaff_x19 = param_2;
      unaff_x29 = pppppppuStack_40;
      puStack_158 = puStack_38;
    }
  }
  else {
    lVar24 = param_2[1];
    lVar12 = *plVar25;
    uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar17 != 0) {
      piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_015640f4;
        }
        piVar21 = piVar21 + 4;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
LAB_015640f4:
    lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
    puStack_158 = unaff_x30;
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar29._8_8_ = lVar12;
  auVar29._0_8_ = lVar24;
  if ((lVar24 == 0) || (lVar12 == 0)) {
    uVar17 = 0;
    if (lVar24 == lVar12) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
      if ((lVar24 != 0) && (lVar12 != 0)) {
        if (*(int *)(lVar24 + 0x10) == *(int *)(lVar12 + 0x10)) goto System_String__EqualsHelper;
        uVar10 = 0;
      }
    }
    return uVar10;
  }
  uVar10 = 5;
code_r0x029caa48:
  lVar12 = auVar29._8_8_;
  lVar24 = auVar29._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_158;
  uVar17 = uVar10;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb9443 = 1;
  }
  if (5 < (uint)uVar10) {
code_r0x029caca0:
    uVar7 = func_0x00f78a24(0x3d746f0);
    uVar7 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar7,0);
    func_0x00f78a24(0x3d1fce8);
    uVar8 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar8,uVar7,uVar9,0);
    uVar7 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar8,uVar7);
    goto code_r0x029cad04;
  }
  if (lVar24 == lVar12) {
    return 1;
  }
  if (lVar12 == 0) {
    return 0;
  }
  switch(uVar10 & 0xffffffff) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caba0;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
    if ((plVar25 == (long *)0x0) ||
       (plVar25 = (long *)(**(code **)(*plVar25 + 0x1f8))(plVar25,*(undefined8 *)(*plVar25 + 0x200))
       , plVar25 == (long *)0x0)) goto code_r0x029cad04;
    pcVar19 = *(code **)(*plVar25 + 0x1a8);
    uVar7 = *(undefined8 *)(*plVar25 + 0x1b0);
    uVar8 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar5 = *(int *)(lVar24 + 0x10);
    if (iVar5 != *(int *)(lVar12 + 0x10)) {
      return 0;
    }
    if (iVar5 == 0) goto code_r0x029cac68;
    lVar14 = (long)iVar5 << 1;
    puVar15 = (ushort *)(lVar24 + 0x16);
    puVar23 = (ushort *)(lVar24 + 0x14);
    lVar22 = lVar14;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar25 == (long *)0x0) ||
     (plVar25 = (long *)(**(code **)(*plVar25 + 0x1f8))(plVar25,*(undefined8 *)(*plVar25 + 0x200)),
     plVar25 == (long *)0x0)) {
code_r0x029cad04:
    lVar24 = func_0x00f78af4();
    if (*(int *)(lVar24 + 0x10) == 0) {
      return 1;
    }
    lVar12 = (long)*(int *)(lVar24 + 0x10) * 2;
    puVar15 = (ushort *)(lVar24 + 0x14);
    puVar23 = (ushort *)(lVar24 + 0x16);
    do {
      lVar12 = lVar12 + -2;
      uVar3 = *puVar15;
      puVar15 = puVar23;
      puVar23 = puVar23 + 1;
    } while (uVar3 < 0x80 && lVar12 != 0);
    return (ulong)(uVar3 < 0x80);
  }
  pcVar19 = *(code **)(*plVar25 + 0x1a8);
  uVar7 = *(undefined8 *)(*plVar25 + 0x1b0);
  uVar8 = 0;
code_r0x029cabc8:
  iVar5 = (*pcVar19)(plVar25,lVar24,lVar12,uVar8,uVar7);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar5 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar24,lVar12,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar24 + 0x10) != *(int *)(lVar12 + 0x10)) {
    return 0;
  }
  unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x10);
  puStack_158 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
System_String__EqualsHelper:
  while( true ) {
    lVar24 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = puStack_158;
    if ((lVar24 != 0) && (auVar29._8_8_ != 0)) {
      plVar25 = (long *)(lVar24 + 0x14);
      iVar5 = *(int *)(lVar24 + 0x10);
      plVar26 = (long *)(auVar29._8_8_ + 0x14);
      uVar17 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar17 & 1) == 0) {
        iVar27 = iVar5;
        if (9 < iVar5) {
          do {
            if ((int)*plVar25 != (int)*plVar26) {
              return 0;
            }
            if (*(int *)((long)plVar25 + 4) != *(int *)((long)plVar26 + 4)) {
              return 0;
            }
            if ((int)plVar25[1] != (int)plVar26[1]) {
              return 0;
            }
            if (*(int *)((long)plVar25 + 0xc) != *(int *)((long)plVar26 + 0xc)) {
              return 0;
            }
            if ((int)plVar25[2] != (int)plVar26[2]) {
              return 0;
            }
            plVar25 = (long *)((long)plVar25 + 0x14);
            plVar26 = (long *)((long)plVar26 + 0x14);
            iVar5 = iVar27 + -10;
            bVar4 = 0x13 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      else {
        iVar27 = iVar5;
        if (0xb < iVar5) {
          do {
            if (((*plVar25 != *plVar26) || (plVar25[1] != plVar26[1])) || (plVar25[2] != plVar26[2])
               ) {
              return 0;
            }
            plVar25 = plVar25 + 3;
            plVar26 = plVar26 + 3;
            iVar5 = iVar27 + -0xc;
            bVar4 = 0x17 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      if (iVar5 < 1) {
        uVar17 = 1;
      }
      else {
        iVar5 = iVar5 + 2;
        do {
          bVar4 = (int)*plVar25 == (int)*plVar26;
          uVar17 = (ulong)bVar4;
          if (!bVar4) {
            return uVar17;
          }
          plVar25 = (long *)((long)plVar25 + 4);
          plVar26 = (long *)((long)plVar26 + 4);
          iVar5 = iVar5 + -2;
        } while (2 < iVar5);
      }
      return uVar17;
    }
    auVar28 = func_0x00f78af4();
    lVar12 = auVar28._8_8_;
    lVar24 = auVar28._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
    uVar10 = uVar17;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
      uVar10 = uVar17;
    }
    if ((lVar24 != 0) && (lVar12 != 0)) {
      uVar1 = *(undefined4 *)(lVar24 + 0x10);
      uVar2 = *(undefined4 *)(lVar12 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar13 = (uint *)(lVar24 + 0x14);
      puVar18 = (uint *)(lVar12 + 0x14);
      if (iVar5 < 10) goto code_r0x029ca8c8;
      lVar22 = 4;
      iVar27 = iVar5;
      goto code_r0x029ca858;
    }
    auVar29 = func_0x00f78af4();
    unaff_x20 = auVar29._8_8_;
    unaff_x19 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar28;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x68) = &System_String__Equals;
    unaff_x29 = (undefined8 *******)((long)register0x00000008 + -0x70);
    unaff_x21 = (long *)0x3eb9000;
    if ((bRam0000000003eb9442 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9442 = 1;
    }
    if (unaff_x19 == (long *)0x0) break;
    if ((unaff_x20 == (long *)0x0) || (*unaff_x20 != /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      return 0;
    }
    if (unaff_x19 == unaff_x20) {
      return 1;
    }
    if (unaff_x20 == (long *)0x0) goto code_r0x029caa44;
    if ((int)unaff_x19[2] != (int)unaff_x20[2]) {
      return 0;
    }
    unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x70);
    puStack_158 = *(undefined **)((long)register0x00000008 + -0x68);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x80);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    uVar17 = uVar10;
  }
  func_0x00f78a24(0x3d23938);
  unaff_x19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(unaff_x19,0);
  uVar7 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar7);
code_r0x029caa44:
  puStack_158 = &System_String__Equals;
  auVar29 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  goto code_r0x029caa48;
  while( true ) {
    if (puVar13[1] != puVar18[1]) goto code_r0x029ca930;
    if (puVar13[2] != puVar18[2]) {
      lVar22 = 8;
      goto code_r0x029ca930;
    }
    if (puVar13[3] != puVar18[3]) {
      lVar22 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar13[4] != puVar18[4]) {
      lVar22 = 0x10;
      goto code_r0x029ca930;
    }
    puVar13 = puVar13 + 5;
    puVar18 = puVar18 + 5;
    iVar5 = iVar27 + -10;
    bVar4 = iVar27 < 0x14;
    iVar27 = iVar5;
    if (bVar4) break;
code_r0x029ca858:
    if (*puVar13 != *puVar18) {
      lVar22 = 0;
code_r0x029ca930:
      puVar13 = (uint *)(lVar22 + (long)puVar13);
      puVar18 = (uint *)(lVar22 + (long)puVar18);
      uVar11 = (uint)(ushort)*puVar13 - (uint)(ushort)*puVar18;
      if (uVar11 != 0) {
        return (ulong)uVar11;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar5) {
    iVar5 = iVar5 + 2;
    do {
      if (*puVar13 != *puVar18) {
        uVar11 = (*puVar13 & 0xffff) - (*puVar18 & 0xffff);
        if (uVar11 != 0) {
          return (ulong)uVar11;
        }
code_r0x029ca948:
        uVar11 = (uint)*(ushort *)((long)puVar13 + 2);
        uVar16 = (uint)*(ushort *)((long)puVar18 + 2);
        goto code_r0x029ca950;
      }
      puVar13 = puVar13 + 1;
      puVar18 = puVar18 + 1;
      iVar5 = iVar5 + -2;
    } while (2 < iVar5);
  }
  uVar11 = *(uint *)(lVar24 + 0x10);
  uVar16 = *(uint *)(lVar12 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar11 - uVar16);
  while( true ) {
    lVar22 = lVar22 + -2;
    puVar15 = puVar20 + 1;
    puVar23 = puVar20;
    if (lVar22 == 0) break;
code_r0x029cac24:
    puVar20 = puVar15;
    if (0x7f < *puVar23) goto code_r0x029cac8c;
  }
  if (iVar5 != 0) {
    puVar15 = (ushort *)(lVar12 + 0x16);
    puVar23 = (ushort *)(lVar12 + 0x14);
    do {
      puVar20 = puVar15;
      if (0x7f < *puVar23) goto code_r0x029cac8c;
      lVar14 = lVar14 + -2;
      puVar15 = puVar20 + 1;
      puVar23 = puVar20;
    } while (lVar14 != 0);
  }
code_r0x029cac68:
  iVar5 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar24,lVar12);
code_r0x029cabcc:
  return (ulong)(iVar5 == 0);
}



// ============================================================
// RVA: 0x156413c | Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0.<GenerateRandomList>b__3
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__3
                (long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  ushort *puVar16;
  uint uVar17;
  uint *puVar18;
  code *pcVar19;
  ushort *puVar20;
  int *piVar21;
  long lVar22;
  ushort *puVar23;
  long *unaff_x19;
  long lVar24;
  long *unaff_x20;
  long *plVar25;
  long *plVar26;
  int iVar27;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined *puStack_128;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4fd8 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d220b0);
    bRam0000000003eb4fd8 = 1;
  }
  plVar26 = (long *)(param_2 + 0x28);
  uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar26,0);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  plVar25 = (long *)param_1[2];
  if (plVar25 == (long *)0x0) {
    auVar29 = func_0x00f78af4();
    puStack_38 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__4;
    pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4fd9 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d220b0);
      bRam0000000003eb4fd9 = 1;
    }
    plVar25 = *(long **)(auVar29._0_8_ + 0x10);
    if (plVar25 == (long *)0x0) {
      auVar28 = func_0x00f78af4();
      puStack_68 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__5;
      pppppppuStack_70 = &pppppppuStack_40;
      if ((bRam0000000003eb4fda & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d220b0);
        bRam0000000003eb4fda = 1;
      }
      unaff_x21 = (long *)(auVar28._8_8_ + 0x38);
      uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      plVar26 = (long *)auVar28._0_8_[2];
      if (plVar26 == (long *)0x0) {
        auVar29 = func_0x00f78af4();
        puStack_98 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__6;
        pppppppuStack_a0 = &pppppppuStack_70;
        if ((bRam0000000003eb4fdb & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d220b0);
          bRam0000000003eb4fdb = 1;
        }
        plVar26 = *(long **)(auVar29._0_8_ + 0x10);
        if (plVar26 == (long *)0x0) {
          auVar28 = func_0x00f78af4();
          puStack_c8 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__7;
          pppppppuStack_d0 = &pppppppuStack_a0;
          if ((bRam0000000003eb4fdc & 1) == 0) {
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d220b0);
            bRam0000000003eb4fdc = 1;
          }
          unaff_x21 = (long *)(auVar28._8_8_ + 0x48);
          uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          plVar26 = (long *)auVar28._0_8_[2];
          if (plVar26 == (long *)0x0) {
            auVar29 = func_0x00f78af4();
            unaff_x19 = auVar29._8_8_;
            puStack_f8 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__8;
            unaff_x29 = &pppppppuStack_100;
            pppppppuStack_100 = &pppppppuStack_d0;
            if ((bRam0000000003eb4fdd & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d220b0);
              bRam0000000003eb4fdd = 1;
            }
            plVar26 = *(long **)(auVar29._0_8_ + 0x10);
            if (plVar26 == (long *)0x0) {
              auVar29 = func_0x00f78af4();
              puStack_128 = &
                            Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__9
              ;
              if ((bRam0000000003eb4fde & 1) == 0) {
                func_0x00f78a20(0x3d21270);
                func_0x00f78a20(0x3d220b0);
                bRam0000000003eb4fde = 1;
              }
              plVar26 = (long *)(auVar29._8_8_ + 0x58);
              uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar26,0);
              if ((int)uVar6 == 0) {
                return uVar6;
              }
              plVar25 = *(long **)(auVar29._0_8_ + 0x10);
              if (plVar25 == (long *)0x0) {
                auVar30 = func_0x00f78af4();
                uVar6 = /*System.Object$$.ctor*/ func_0x0294d018(auVar30._0_8_,0);
                *(int *)(auVar30._0_8_ + 0x10) = auVar30._8_4_;
                return uVar6;
              }
              lVar24 = *plVar26;
              lVar13 = *plVar25;
              uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar6 != 0) {
                piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                    puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                    goto code_r0x01564828;
                  }
                  piVar21 = piVar21 + 4;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564828:
              lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffee0;
              unaff_x21 = (long *)0x3eb4000;
              unaff_x20 = (long *)0x0;
            }
            else {
              lVar24 = unaff_x19[4];
              lVar13 = *plVar26;
              uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar6 != 0) {
                piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                    puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                    goto code_r0x01564718;
                  }
                  piVar21 = piVar21 + 4;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564718:
              lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff10;
              unaff_x20 = (long *)0x0;
              unaff_x19 = auVar28._0_8_;
              unaff_x29 = pppppppuStack_100;
              puStack_128 = puStack_f8;
            }
          }
          else {
            lVar24 = *unaff_x21;
            lVar13 = *plVar26;
            uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar6 != 0) {
              piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                  puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                  goto code_r0x0156461c;
                }
                piVar21 = piVar21 + 4;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x0156461c:
            lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
            unaff_x21 = (long *)0x3eb4000;
            unaff_x20 = (long *)0x0;
            unaff_x19 = auVar29._8_8_;
            unaff_x29 = pppppppuStack_d0;
            puStack_128 = puStack_c8;
          }
        }
        else {
          lVar24 = auVar29._8_8_[3];
          lVar13 = *plVar26;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar6 != 0) {
            piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                goto code_r0x0156450c;
              }
              piVar21 = piVar21 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x0156450c:
          lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff70;
          unaff_x20 = (long *)0x0;
          unaff_x19 = auVar28._0_8_;
          unaff_x29 = pppppppuStack_a0;
          puStack_128 = puStack_98;
        }
      }
      else {
        lVar24 = *unaff_x21;
        lVar13 = *plVar26;
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar6 != 0) {
          piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
              goto code_r0x01564410;
            }
            piVar21 = piVar21 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564410:
        lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        unaff_x21 = (long *)0x3eb4000;
        unaff_x20 = (long *)0x0;
        unaff_x19 = auVar29._8_8_;
        unaff_x29 = pppppppuStack_70;
        puStack_128 = puStack_68;
      }
    }
    else {
      lVar24 = auVar29._8_8_[2];
      lVar13 = *plVar25;
      uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar6 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto code_r0x01564300;
          }
          piVar21 = piVar21 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564300:
      lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x20 = (long *)0x0;
      unaff_x19 = param_1;
      unaff_x21 = plVar26;
      unaff_x29 = pppppppuStack_40;
      puStack_128 = puStack_38;
    }
  }
  else {
    lVar24 = *plVar26;
    lVar13 = *plVar25;
    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar6 != 0) {
      piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01564204;
        }
        piVar21 = piVar21 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
LAB_01564204:
    lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
    puStack_128 = unaff_x30;
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar29._8_8_ = lVar13;
  auVar29._0_8_ = lVar24;
  if ((lVar24 == 0) || (lVar13 == 0)) {
    uVar6 = 0;
    if (lVar24 == lVar13) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
      if ((lVar24 != 0) && (lVar13 != 0)) {
        if (*(int *)(lVar24 + 0x10) == *(int *)(lVar13 + 0x10)) goto System_String__EqualsHelper;
        uVar11 = 0;
      }
    }
    return uVar11;
  }
  uVar11 = 5;
code_r0x029caa48:
  lVar13 = auVar29._8_8_;
  lVar24 = auVar29._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_128;
  uVar6 = uVar11;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb9443 = 1;
  }
  if (5 < (uint)uVar11) {
code_r0x029caca0:
    uVar8 = func_0x00f78a24(0x3d746f0);
    uVar8 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar8,0);
    func_0x00f78a24(0x3d1fce8);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar9,uVar8,uVar10,0);
    uVar8 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar9,uVar8);
    goto code_r0x029cad04;
  }
  if (lVar24 == lVar13) {
    return 1;
  }
  if (lVar13 == 0) {
    return 0;
  }
  switch(uVar11 & 0xffffffff) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caba0;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
    if ((plVar26 == (long *)0x0) ||
       (plVar26 = (long *)(**(code **)(*plVar26 + 0x1f8))(plVar26,*(undefined8 *)(*plVar26 + 0x200))
       , plVar26 == (long *)0x0)) goto code_r0x029cad04;
    pcVar19 = *(code **)(*plVar26 + 0x1a8);
    uVar8 = *(undefined8 *)(*plVar26 + 0x1b0);
    uVar9 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar5 = *(int *)(lVar24 + 0x10);
    if (iVar5 != *(int *)(lVar13 + 0x10)) {
      return 0;
    }
    if (iVar5 == 0) goto code_r0x029cac68;
    lVar15 = (long)iVar5 << 1;
    puVar16 = (ushort *)(lVar24 + 0x16);
    puVar23 = (ushort *)(lVar24 + 0x14);
    lVar22 = lVar15;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar26 == (long *)0x0) ||
     (plVar26 = (long *)(**(code **)(*plVar26 + 0x1f8))(plVar26,*(undefined8 *)(*plVar26 + 0x200)),
     plVar26 == (long *)0x0)) {
code_r0x029cad04:
    lVar24 = func_0x00f78af4();
    if (*(int *)(lVar24 + 0x10) == 0) {
      return 1;
    }
    lVar13 = (long)*(int *)(lVar24 + 0x10) * 2;
    puVar16 = (ushort *)(lVar24 + 0x14);
    puVar23 = (ushort *)(lVar24 + 0x16);
    do {
      lVar13 = lVar13 + -2;
      uVar3 = *puVar16;
      puVar16 = puVar23;
      puVar23 = puVar23 + 1;
    } while (uVar3 < 0x80 && lVar13 != 0);
    return (ulong)(uVar3 < 0x80);
  }
  pcVar19 = *(code **)(*plVar26 + 0x1a8);
  uVar8 = *(undefined8 *)(*plVar26 + 0x1b0);
  uVar9 = 0;
code_r0x029cabc8:
  iVar5 = (*pcVar19)(plVar26,lVar24,lVar13,uVar9,uVar8);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar5 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar24,lVar13,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar24 + 0x10) != *(int *)(lVar13 + 0x10)) {
    return 0;
  }
  unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x10);
  puStack_128 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
System_String__EqualsHelper:
  while( true ) {
    lVar24 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = puStack_128;
    if ((lVar24 != 0) && (auVar29._8_8_ != 0)) {
      plVar26 = (long *)(lVar24 + 0x14);
      iVar5 = *(int *)(lVar24 + 0x10);
      plVar25 = (long *)(auVar29._8_8_ + 0x14);
      uVar6 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar6 & 1) == 0) {
        iVar27 = iVar5;
        if (9 < iVar5) {
          do {
            if ((int)*plVar26 != (int)*plVar25) {
              return 0;
            }
            if (*(int *)((long)plVar26 + 4) != *(int *)((long)plVar25 + 4)) {
              return 0;
            }
            if ((int)plVar26[1] != (int)plVar25[1]) {
              return 0;
            }
            if (*(int *)((long)plVar26 + 0xc) != *(int *)((long)plVar25 + 0xc)) {
              return 0;
            }
            if ((int)plVar26[2] != (int)plVar25[2]) {
              return 0;
            }
            plVar26 = (long *)((long)plVar26 + 0x14);
            plVar25 = (long *)((long)plVar25 + 0x14);
            iVar5 = iVar27 + -10;
            bVar4 = 0x13 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      else {
        iVar27 = iVar5;
        if (0xb < iVar5) {
          do {
            if (((*plVar26 != *plVar25) || (plVar26[1] != plVar25[1])) || (plVar26[2] != plVar25[2])
               ) {
              return 0;
            }
            plVar26 = plVar26 + 3;
            plVar25 = plVar25 + 3;
            iVar5 = iVar27 + -0xc;
            bVar4 = 0x17 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      if (iVar5 < 1) {
        uVar6 = 1;
      }
      else {
        iVar5 = iVar5 + 2;
        do {
          bVar4 = (int)*plVar26 == (int)*plVar25;
          uVar6 = (ulong)bVar4;
          if (!bVar4) {
            return uVar6;
          }
          plVar26 = (long *)((long)plVar26 + 4);
          plVar25 = (long *)((long)plVar25 + 4);
          iVar5 = iVar5 + -2;
        } while (2 < iVar5);
      }
      return uVar6;
    }
    auVar28 = func_0x00f78af4();
    lVar13 = auVar28._8_8_;
    lVar24 = auVar28._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
    uVar11 = uVar6;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
      uVar11 = uVar6;
    }
    if ((lVar24 != 0) && (lVar13 != 0)) {
      uVar1 = *(undefined4 *)(lVar24 + 0x10);
      uVar2 = *(undefined4 *)(lVar13 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar14 = (uint *)(lVar24 + 0x14);
      puVar18 = (uint *)(lVar13 + 0x14);
      if (iVar5 < 10) goto code_r0x029ca8c8;
      lVar22 = 4;
      iVar27 = iVar5;
      goto code_r0x029ca858;
    }
    auVar29 = func_0x00f78af4();
    unaff_x20 = auVar29._8_8_;
    unaff_x19 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar28;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x68) = &System_String__Equals;
    unaff_x29 = (undefined8 *******)((long)register0x00000008 + -0x70);
    unaff_x21 = (long *)0x3eb9000;
    if ((bRam0000000003eb9442 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9442 = 1;
    }
    if (unaff_x19 == (long *)0x0) break;
    if ((unaff_x20 == (long *)0x0) || (*unaff_x20 != /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      return 0;
    }
    if (unaff_x19 == unaff_x20) {
      return 1;
    }
    if (unaff_x20 == (long *)0x0) goto code_r0x029caa44;
    if ((int)unaff_x19[2] != (int)unaff_x20[2]) {
      return 0;
    }
    unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x70);
    puStack_128 = *(undefined **)((long)register0x00000008 + -0x68);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x80);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    uVar6 = uVar11;
  }
  func_0x00f78a24(0x3d23938);
  unaff_x19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(unaff_x19,0);
  uVar8 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar8);
code_r0x029caa44:
  puStack_128 = &System_String__Equals;
  auVar29 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  goto code_r0x029caa48;
  while( true ) {
    if (puVar14[1] != puVar18[1]) goto code_r0x029ca930;
    if (puVar14[2] != puVar18[2]) {
      lVar22 = 8;
      goto code_r0x029ca930;
    }
    if (puVar14[3] != puVar18[3]) {
      lVar22 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar14[4] != puVar18[4]) {
      lVar22 = 0x10;
      goto code_r0x029ca930;
    }
    puVar14 = puVar14 + 5;
    puVar18 = puVar18 + 5;
    iVar5 = iVar27 + -10;
    bVar4 = iVar27 < 0x14;
    iVar27 = iVar5;
    if (bVar4) break;
code_r0x029ca858:
    if (*puVar14 != *puVar18) {
      lVar22 = 0;
code_r0x029ca930:
      puVar14 = (uint *)(lVar22 + (long)puVar14);
      puVar18 = (uint *)(lVar22 + (long)puVar18);
      uVar12 = (uint)(ushort)*puVar14 - (uint)(ushort)*puVar18;
      if (uVar12 != 0) {
        return (ulong)uVar12;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar5) {
    iVar5 = iVar5 + 2;
    do {
      if (*puVar14 != *puVar18) {
        uVar12 = (*puVar14 & 0xffff) - (*puVar18 & 0xffff);
        if (uVar12 != 0) {
          return (ulong)uVar12;
        }
code_r0x029ca948:
        uVar12 = (uint)*(ushort *)((long)puVar14 + 2);
        uVar17 = (uint)*(ushort *)((long)puVar18 + 2);
        goto code_r0x029ca950;
      }
      puVar14 = puVar14 + 1;
      puVar18 = puVar18 + 1;
      iVar5 = iVar5 + -2;
    } while (2 < iVar5);
  }
  uVar12 = *(uint *)(lVar24 + 0x10);
  uVar17 = *(uint *)(lVar13 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar12 - uVar17);
  while( true ) {
    lVar22 = lVar22 + -2;
    puVar16 = puVar20 + 1;
    puVar23 = puVar20;
    if (lVar22 == 0) break;
code_r0x029cac24:
    puVar20 = puVar16;
    if (0x7f < *puVar23) goto code_r0x029cac8c;
  }
  if (iVar5 != 0) {
    puVar16 = (ushort *)(lVar13 + 0x16);
    puVar23 = (ushort *)(lVar13 + 0x14);
    do {
      puVar20 = puVar16;
      if (0x7f < *puVar23) goto code_r0x029cac8c;
      lVar15 = lVar15 + -2;
      puVar16 = puVar20 + 1;
      puVar23 = puVar20;
    } while (lVar15 != 0);
  }
code_r0x029cac68:
  iVar5 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar24,lVar13);
code_r0x029cabcc:
  return (ulong)(iVar5 == 0);
}



// ============================================================
// RVA: 0x1564254 | Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0.<GenerateRandomList>b__4
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__4
                (long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  ushort *puVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  code *pcVar19;
  ushort *puVar20;
  int *piVar21;
  long lVar22;
  ushort *puVar23;
  long *unaff_x19;
  long lVar24;
  long *unaff_x20;
  long *plVar25;
  long *plVar26;
  int iVar27;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4fd9 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d220b0);
    bRam0000000003eb4fd9 = 1;
  }
  plVar25 = *(long **)(param_1 + 0x10);
  if (plVar25 == (long *)0x0) {
    auVar29 = func_0x00f78af4();
    puStack_38 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__5;
    pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4fda & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d220b0);
      bRam0000000003eb4fda = 1;
    }
    unaff_x21 = (long *)(auVar29._8_8_ + 0x38);
    uVar17 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
    if ((int)uVar17 == 0) {
      return uVar17;
    }
    plVar25 = (long *)auVar29._0_8_[2];
    if (plVar25 == (long *)0x0) {
      auVar28 = func_0x00f78af4();
      puStack_68 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__6;
      pppppppuStack_70 = &pppppppuStack_40;
      if ((bRam0000000003eb4fdb & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d220b0);
        bRam0000000003eb4fdb = 1;
      }
      plVar25 = *(long **)(auVar28._0_8_ + 0x10);
      if (plVar25 == (long *)0x0) {
        auVar29 = func_0x00f78af4();
        puStack_98 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__7;
        pppppppuStack_a0 = &pppppppuStack_70;
        if ((bRam0000000003eb4fdc & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d220b0);
          bRam0000000003eb4fdc = 1;
        }
        unaff_x21 = (long *)(auVar29._8_8_ + 0x48);
        uVar17 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
        if ((int)uVar17 == 0) {
          return uVar17;
        }
        plVar25 = (long *)auVar29._0_8_[2];
        if (plVar25 == (long *)0x0) {
          auVar28 = func_0x00f78af4();
          unaff_x19 = auVar28._8_8_;
          puStack_c8 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__8;
          unaff_x29 = &pppppppuStack_d0;
          pppppppuStack_d0 = &pppppppuStack_a0;
          if ((bRam0000000003eb4fdd & 1) == 0) {
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d220b0);
            bRam0000000003eb4fdd = 1;
          }
          plVar25 = *(long **)(auVar28._0_8_ + 0x10);
          if (plVar25 == (long *)0x0) {
            auVar29 = func_0x00f78af4();
            puStack_f8 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__9;
            if ((bRam0000000003eb4fde & 1) == 0) {
              func_0x00f78a20(0x3d21270);
              func_0x00f78a20(0x3d220b0);
              bRam0000000003eb4fde = 1;
            }
            plVar25 = (long *)(auVar29._8_8_ + 0x58);
            uVar17 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar25,0);
            if ((int)uVar17 == 0) {
              return uVar17;
            }
            plVar26 = *(long **)(auVar29._0_8_ + 0x10);
            if (plVar26 == (long *)0x0) {
              auVar30 = func_0x00f78af4();
              uVar17 = /*System.Object$$.ctor*/ func_0x0294d018(auVar30._0_8_,0);
              *(int *)(auVar30._0_8_ + 0x10) = auVar30._8_4_;
              return uVar17;
            }
            lVar24 = *plVar25;
            lVar12 = *plVar26;
            uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar17 != 0) {
              piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                  goto code_r0x01564828;
                }
                piVar21 = piVar21 + 4;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564828:
            lVar12 = (*(code *)*puVar6)(plVar26,puVar6[1]);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff10;
            unaff_x21 = (long *)0x3eb4000;
            unaff_x20 = (long *)0x0;
          }
          else {
            lVar24 = unaff_x19[4];
            lVar12 = *plVar25;
            uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar17 != 0) {
              piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                  goto code_r0x01564718;
                }
                piVar21 = piVar21 + 4;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564718:
            lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
            unaff_x20 = (long *)0x0;
            unaff_x19 = auVar29._0_8_;
            unaff_x29 = pppppppuStack_d0;
            puStack_f8 = puStack_c8;
          }
        }
        else {
          lVar24 = *unaff_x21;
          lVar12 = *plVar25;
          uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar17 != 0) {
            piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
                goto code_r0x0156461c;
              }
              piVar21 = piVar21 + 4;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x0156461c:
          lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff70;
          unaff_x21 = (long *)0x3eb4000;
          unaff_x20 = (long *)0x0;
          unaff_x19 = auVar28._8_8_;
          unaff_x29 = pppppppuStack_a0;
          puStack_f8 = puStack_98;
        }
      }
      else {
        lVar24 = auVar28._8_8_[3];
        lVar12 = *plVar25;
        uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar17 != 0) {
          piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
              goto code_r0x0156450c;
            }
            piVar21 = piVar21 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x0156450c:
        lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        unaff_x20 = (long *)0x0;
        unaff_x19 = auVar29._0_8_;
        unaff_x29 = pppppppuStack_70;
        puStack_f8 = puStack_68;
      }
    }
    else {
      lVar24 = *unaff_x21;
      lVar12 = *plVar25;
      uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar17 != 0) {
        piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
            goto code_r0x01564410;
          }
          piVar21 = piVar21 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564410:
      lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x21 = (long *)0x3eb4000;
      unaff_x20 = (long *)0x0;
      unaff_x19 = param_2;
      unaff_x29 = pppppppuStack_40;
      puStack_f8 = puStack_38;
    }
  }
  else {
    lVar24 = param_2[2];
    lVar12 = *plVar25;
    uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar17 != 0) {
      piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01564300;
        }
        piVar21 = piVar21 + 4;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
LAB_01564300:
    lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
    puStack_f8 = unaff_x30;
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar29._8_8_ = lVar12;
  auVar29._0_8_ = lVar24;
  if ((lVar24 == 0) || (lVar12 == 0)) {
    uVar17 = 0;
    if (lVar24 == lVar12) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
      if ((lVar24 != 0) && (lVar12 != 0)) {
        if (*(int *)(lVar24 + 0x10) == *(int *)(lVar12 + 0x10)) goto System_String__EqualsHelper;
        uVar10 = 0;
      }
    }
    return uVar10;
  }
  uVar10 = 5;
code_r0x029caa48:
  lVar12 = auVar29._8_8_;
  lVar24 = auVar29._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_f8;
  uVar17 = uVar10;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb9443 = 1;
  }
  if (5 < (uint)uVar10) {
code_r0x029caca0:
    uVar7 = func_0x00f78a24(0x3d746f0);
    uVar7 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar7,0);
    func_0x00f78a24(0x3d1fce8);
    uVar8 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar8,uVar7,uVar9,0);
    uVar7 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar8,uVar7);
    goto code_r0x029cad04;
  }
  if (lVar24 == lVar12) {
    return 1;
  }
  if (lVar12 == 0) {
    return 0;
  }
  switch(uVar10 & 0xffffffff) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caba0;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
    if ((plVar25 == (long *)0x0) ||
       (plVar25 = (long *)(**(code **)(*plVar25 + 0x1f8))(plVar25,*(undefined8 *)(*plVar25 + 0x200))
       , plVar25 == (long *)0x0)) goto code_r0x029cad04;
    pcVar19 = *(code **)(*plVar25 + 0x1a8);
    uVar7 = *(undefined8 *)(*plVar25 + 0x1b0);
    uVar8 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar5 = *(int *)(lVar24 + 0x10);
    if (iVar5 != *(int *)(lVar12 + 0x10)) {
      return 0;
    }
    if (iVar5 == 0) goto code_r0x029cac68;
    lVar14 = (long)iVar5 << 1;
    puVar15 = (ushort *)(lVar24 + 0x16);
    puVar23 = (ushort *)(lVar24 + 0x14);
    lVar22 = lVar14;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar25 == (long *)0x0) ||
     (plVar25 = (long *)(**(code **)(*plVar25 + 0x1f8))(plVar25,*(undefined8 *)(*plVar25 + 0x200)),
     plVar25 == (long *)0x0)) {
code_r0x029cad04:
    lVar24 = func_0x00f78af4();
    if (*(int *)(lVar24 + 0x10) == 0) {
      return 1;
    }
    lVar12 = (long)*(int *)(lVar24 + 0x10) * 2;
    puVar15 = (ushort *)(lVar24 + 0x14);
    puVar23 = (ushort *)(lVar24 + 0x16);
    do {
      lVar12 = lVar12 + -2;
      uVar3 = *puVar15;
      puVar15 = puVar23;
      puVar23 = puVar23 + 1;
    } while (uVar3 < 0x80 && lVar12 != 0);
    return (ulong)(uVar3 < 0x80);
  }
  pcVar19 = *(code **)(*plVar25 + 0x1a8);
  uVar7 = *(undefined8 *)(*plVar25 + 0x1b0);
  uVar8 = 0;
code_r0x029cabc8:
  iVar5 = (*pcVar19)(plVar25,lVar24,lVar12,uVar8,uVar7);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar5 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar24,lVar12,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar24 + 0x10) != *(int *)(lVar12 + 0x10)) {
    return 0;
  }
  unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x10);
  puStack_f8 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
System_String__EqualsHelper:
  while( true ) {
    lVar24 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = puStack_f8;
    if ((lVar24 != 0) && (auVar29._8_8_ != 0)) {
      plVar25 = (long *)(lVar24 + 0x14);
      iVar5 = *(int *)(lVar24 + 0x10);
      plVar26 = (long *)(auVar29._8_8_ + 0x14);
      uVar17 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar17 & 1) == 0) {
        iVar27 = iVar5;
        if (9 < iVar5) {
          do {
            if ((int)*plVar25 != (int)*plVar26) {
              return 0;
            }
            if (*(int *)((long)plVar25 + 4) != *(int *)((long)plVar26 + 4)) {
              return 0;
            }
            if ((int)plVar25[1] != (int)plVar26[1]) {
              return 0;
            }
            if (*(int *)((long)plVar25 + 0xc) != *(int *)((long)plVar26 + 0xc)) {
              return 0;
            }
            if ((int)plVar25[2] != (int)plVar26[2]) {
              return 0;
            }
            plVar25 = (long *)((long)plVar25 + 0x14);
            plVar26 = (long *)((long)plVar26 + 0x14);
            iVar5 = iVar27 + -10;
            bVar4 = 0x13 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      else {
        iVar27 = iVar5;
        if (0xb < iVar5) {
          do {
            if (((*plVar25 != *plVar26) || (plVar25[1] != plVar26[1])) || (plVar25[2] != plVar26[2])
               ) {
              return 0;
            }
            plVar25 = plVar25 + 3;
            plVar26 = plVar26 + 3;
            iVar5 = iVar27 + -0xc;
            bVar4 = 0x17 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      if (iVar5 < 1) {
        uVar17 = 1;
      }
      else {
        iVar5 = iVar5 + 2;
        do {
          bVar4 = (int)*plVar25 == (int)*plVar26;
          uVar17 = (ulong)bVar4;
          if (!bVar4) {
            return uVar17;
          }
          plVar25 = (long *)((long)plVar25 + 4);
          plVar26 = (long *)((long)plVar26 + 4);
          iVar5 = iVar5 + -2;
        } while (2 < iVar5);
      }
      return uVar17;
    }
    auVar28 = func_0x00f78af4();
    lVar12 = auVar28._8_8_;
    lVar24 = auVar28._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
    uVar10 = uVar17;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
      uVar10 = uVar17;
    }
    if ((lVar24 != 0) && (lVar12 != 0)) {
      uVar1 = *(undefined4 *)(lVar24 + 0x10);
      uVar2 = *(undefined4 *)(lVar12 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar13 = (uint *)(lVar24 + 0x14);
      puVar18 = (uint *)(lVar12 + 0x14);
      if (iVar5 < 10) goto code_r0x029ca8c8;
      lVar22 = 4;
      iVar27 = iVar5;
      goto code_r0x029ca858;
    }
    auVar29 = func_0x00f78af4();
    unaff_x20 = auVar29._8_8_;
    unaff_x19 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar28;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x68) = &System_String__Equals;
    unaff_x29 = (undefined8 *******)((long)register0x00000008 + -0x70);
    unaff_x21 = (long *)0x3eb9000;
    if ((bRam0000000003eb9442 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9442 = 1;
    }
    if (unaff_x19 == (long *)0x0) break;
    if ((unaff_x20 == (long *)0x0) || (*unaff_x20 != /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      return 0;
    }
    if (unaff_x19 == unaff_x20) {
      return 1;
    }
    if (unaff_x20 == (long *)0x0) goto code_r0x029caa44;
    if ((int)unaff_x19[2] != (int)unaff_x20[2]) {
      return 0;
    }
    unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x70);
    puStack_f8 = *(undefined **)((long)register0x00000008 + -0x68);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x80);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    uVar17 = uVar10;
  }
  func_0x00f78a24(0x3d23938);
  unaff_x19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(unaff_x19,0);
  uVar7 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar7);
code_r0x029caa44:
  puStack_f8 = &System_String__Equals;
  auVar29 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  goto code_r0x029caa48;
  while( true ) {
    if (puVar13[1] != puVar18[1]) goto code_r0x029ca930;
    if (puVar13[2] != puVar18[2]) {
      lVar22 = 8;
      goto code_r0x029ca930;
    }
    if (puVar13[3] != puVar18[3]) {
      lVar22 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar13[4] != puVar18[4]) {
      lVar22 = 0x10;
      goto code_r0x029ca930;
    }
    puVar13 = puVar13 + 5;
    puVar18 = puVar18 + 5;
    iVar5 = iVar27 + -10;
    bVar4 = iVar27 < 0x14;
    iVar27 = iVar5;
    if (bVar4) break;
code_r0x029ca858:
    if (*puVar13 != *puVar18) {
      lVar22 = 0;
code_r0x029ca930:
      puVar13 = (uint *)(lVar22 + (long)puVar13);
      puVar18 = (uint *)(lVar22 + (long)puVar18);
      uVar11 = (uint)(ushort)*puVar13 - (uint)(ushort)*puVar18;
      if (uVar11 != 0) {
        return (ulong)uVar11;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar5) {
    iVar5 = iVar5 + 2;
    do {
      if (*puVar13 != *puVar18) {
        uVar11 = (*puVar13 & 0xffff) - (*puVar18 & 0xffff);
        if (uVar11 != 0) {
          return (ulong)uVar11;
        }
code_r0x029ca948:
        uVar11 = (uint)*(ushort *)((long)puVar13 + 2);
        uVar16 = (uint)*(ushort *)((long)puVar18 + 2);
        goto code_r0x029ca950;
      }
      puVar13 = puVar13 + 1;
      puVar18 = puVar18 + 1;
      iVar5 = iVar5 + -2;
    } while (2 < iVar5);
  }
  uVar11 = *(uint *)(lVar24 + 0x10);
  uVar16 = *(uint *)(lVar12 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar11 - uVar16);
  while( true ) {
    lVar22 = lVar22 + -2;
    puVar15 = puVar20 + 1;
    puVar23 = puVar20;
    if (lVar22 == 0) break;
code_r0x029cac24:
    puVar20 = puVar15;
    if (0x7f < *puVar23) goto code_r0x029cac8c;
  }
  if (iVar5 != 0) {
    puVar15 = (ushort *)(lVar12 + 0x16);
    puVar23 = (ushort *)(lVar12 + 0x14);
    do {
      puVar20 = puVar15;
      if (0x7f < *puVar23) goto code_r0x029cac8c;
      lVar14 = lVar14 + -2;
      puVar15 = puVar20 + 1;
      puVar23 = puVar20;
    } while (lVar14 != 0);
  }
code_r0x029cac68:
  iVar5 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar24,lVar12);
code_r0x029cabcc:
  return (ulong)(iVar5 == 0);
}



// ============================================================
// RVA: 0x1564348 | Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0.<GenerateRandomList>b__5
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__5
                (long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  ushort *puVar16;
  uint uVar17;
  uint *puVar18;
  code *pcVar19;
  ushort *puVar20;
  int *piVar21;
  long lVar22;
  ushort *puVar23;
  long *unaff_x19;
  long lVar24;
  long *unaff_x20;
  long *plVar25;
  long *plVar26;
  int iVar27;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4fda & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d220b0);
    bRam0000000003eb4fda = 1;
  }
  plVar26 = (long *)(param_2 + 0x38);
  uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar26,0);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  plVar25 = (long *)param_1[2];
  if (plVar25 == (long *)0x0) {
    auVar29 = func_0x00f78af4();
    puStack_38 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__6;
    pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4fdb & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d220b0);
      bRam0000000003eb4fdb = 1;
    }
    plVar25 = *(long **)(auVar29._0_8_ + 0x10);
    if (plVar25 == (long *)0x0) {
      auVar28 = func_0x00f78af4();
      puStack_68 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__7;
      pppppppuStack_70 = &pppppppuStack_40;
      if ((bRam0000000003eb4fdc & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d220b0);
        bRam0000000003eb4fdc = 1;
      }
      unaff_x21 = (long *)(auVar28._8_8_ + 0x48);
      uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      plVar26 = (long *)auVar28._0_8_[2];
      if (plVar26 == (long *)0x0) {
        auVar29 = func_0x00f78af4();
        unaff_x19 = auVar29._8_8_;
        puStack_98 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__8;
        unaff_x29 = &pppppppuStack_a0;
        pppppppuStack_a0 = &pppppppuStack_70;
        if ((bRam0000000003eb4fdd & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d220b0);
          bRam0000000003eb4fdd = 1;
        }
        plVar26 = *(long **)(auVar29._0_8_ + 0x10);
        if (plVar26 == (long *)0x0) {
          auVar29 = func_0x00f78af4();
          puStack_c8 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__9;
          if ((bRam0000000003eb4fde & 1) == 0) {
            func_0x00f78a20(0x3d21270);
            func_0x00f78a20(0x3d220b0);
            bRam0000000003eb4fde = 1;
          }
          plVar26 = (long *)(auVar29._8_8_ + 0x58);
          uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar26,0);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          plVar25 = *(long **)(auVar29._0_8_ + 0x10);
          if (plVar25 == (long *)0x0) {
            auVar30 = func_0x00f78af4();
            uVar6 = /*System.Object$$.ctor*/ func_0x0294d018(auVar30._0_8_,0);
            *(int *)(auVar30._0_8_ + 0x10) = auVar30._8_4_;
            return uVar6;
          }
          lVar24 = *plVar26;
          lVar13 = *plVar25;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar6 != 0) {
            piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                goto code_r0x01564828;
              }
              piVar21 = piVar21 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564828:
          lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
          unaff_x21 = (long *)0x3eb4000;
          unaff_x20 = (long *)0x0;
        }
        else {
          lVar24 = unaff_x19[4];
          lVar13 = *plVar26;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar6 != 0) {
            piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
                goto code_r0x01564718;
              }
              piVar21 = piVar21 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564718:
          lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff70;
          unaff_x20 = (long *)0x0;
          unaff_x19 = auVar28._0_8_;
          unaff_x29 = pppppppuStack_a0;
          puStack_c8 = puStack_98;
        }
      }
      else {
        lVar24 = *unaff_x21;
        lVar13 = *plVar26;
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar6 != 0) {
          piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
              goto code_r0x0156461c;
            }
            piVar21 = piVar21 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x0156461c:
        lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        unaff_x21 = (long *)0x3eb4000;
        unaff_x20 = (long *)0x0;
        unaff_x19 = auVar29._8_8_;
        unaff_x29 = pppppppuStack_70;
        puStack_c8 = puStack_68;
      }
    }
    else {
      lVar24 = auVar29._8_8_[3];
      lVar13 = *plVar25;
      uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar6 != 0) {
        piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
            goto code_r0x0156450c;
          }
          piVar21 = piVar21 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x0156450c:
      lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x20 = (long *)0x0;
      unaff_x19 = param_1;
      unaff_x21 = plVar26;
      unaff_x29 = pppppppuStack_40;
      puStack_c8 = puStack_38;
    }
  }
  else {
    lVar24 = *plVar26;
    lVar13 = *plVar25;
    uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar6 != 0) {
      piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01564410;
        }
        piVar21 = piVar21 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
LAB_01564410:
    lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
    puStack_c8 = unaff_x30;
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar29._8_8_ = lVar13;
  auVar29._0_8_ = lVar24;
  if ((lVar24 == 0) || (lVar13 == 0)) {
    uVar6 = 0;
    if (lVar24 == lVar13) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
      if ((lVar24 != 0) && (lVar13 != 0)) {
        if (*(int *)(lVar24 + 0x10) == *(int *)(lVar13 + 0x10)) goto System_String__EqualsHelper;
        uVar11 = 0;
      }
    }
    return uVar11;
  }
  uVar11 = 5;
code_r0x029caa48:
  lVar13 = auVar29._8_8_;
  lVar24 = auVar29._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_c8;
  uVar6 = uVar11;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb9443 = 1;
  }
  if (5 < (uint)uVar11) {
code_r0x029caca0:
    uVar8 = func_0x00f78a24(0x3d746f0);
    uVar8 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar8,0);
    func_0x00f78a24(0x3d1fce8);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar9,uVar8,uVar10,0);
    uVar8 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar9,uVar8);
    goto code_r0x029cad04;
  }
  if (lVar24 == lVar13) {
    return 1;
  }
  if (lVar13 == 0) {
    return 0;
  }
  switch(uVar11 & 0xffffffff) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caba0;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
    if ((plVar26 == (long *)0x0) ||
       (plVar26 = (long *)(**(code **)(*plVar26 + 0x1f8))(plVar26,*(undefined8 *)(*plVar26 + 0x200))
       , plVar26 == (long *)0x0)) goto code_r0x029cad04;
    pcVar19 = *(code **)(*plVar26 + 0x1a8);
    uVar8 = *(undefined8 *)(*plVar26 + 0x1b0);
    uVar9 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar5 = *(int *)(lVar24 + 0x10);
    if (iVar5 != *(int *)(lVar13 + 0x10)) {
      return 0;
    }
    if (iVar5 == 0) goto code_r0x029cac68;
    lVar15 = (long)iVar5 << 1;
    puVar16 = (ushort *)(lVar24 + 0x16);
    puVar23 = (ushort *)(lVar24 + 0x14);
    lVar22 = lVar15;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar26 == (long *)0x0) ||
     (plVar26 = (long *)(**(code **)(*plVar26 + 0x1f8))(plVar26,*(undefined8 *)(*plVar26 + 0x200)),
     plVar26 == (long *)0x0)) {
code_r0x029cad04:
    lVar24 = func_0x00f78af4();
    if (*(int *)(lVar24 + 0x10) == 0) {
      return 1;
    }
    lVar13 = (long)*(int *)(lVar24 + 0x10) * 2;
    puVar16 = (ushort *)(lVar24 + 0x14);
    puVar23 = (ushort *)(lVar24 + 0x16);
    do {
      lVar13 = lVar13 + -2;
      uVar3 = *puVar16;
      puVar16 = puVar23;
      puVar23 = puVar23 + 1;
    } while (uVar3 < 0x80 && lVar13 != 0);
    return (ulong)(uVar3 < 0x80);
  }
  pcVar19 = *(code **)(*plVar26 + 0x1a8);
  uVar8 = *(undefined8 *)(*plVar26 + 0x1b0);
  uVar9 = 0;
code_r0x029cabc8:
  iVar5 = (*pcVar19)(plVar26,lVar24,lVar13,uVar9,uVar8);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar5 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar24,lVar13,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar24 + 0x10) != *(int *)(lVar13 + 0x10)) {
    return 0;
  }
  unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x10);
  puStack_c8 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
System_String__EqualsHelper:
  while( true ) {
    lVar24 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = puStack_c8;
    if ((lVar24 != 0) && (auVar29._8_8_ != 0)) {
      plVar26 = (long *)(lVar24 + 0x14);
      iVar5 = *(int *)(lVar24 + 0x10);
      plVar25 = (long *)(auVar29._8_8_ + 0x14);
      uVar6 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar6 & 1) == 0) {
        iVar27 = iVar5;
        if (9 < iVar5) {
          do {
            if ((int)*plVar26 != (int)*plVar25) {
              return 0;
            }
            if (*(int *)((long)plVar26 + 4) != *(int *)((long)plVar25 + 4)) {
              return 0;
            }
            if ((int)plVar26[1] != (int)plVar25[1]) {
              return 0;
            }
            if (*(int *)((long)plVar26 + 0xc) != *(int *)((long)plVar25 + 0xc)) {
              return 0;
            }
            if ((int)plVar26[2] != (int)plVar25[2]) {
              return 0;
            }
            plVar26 = (long *)((long)plVar26 + 0x14);
            plVar25 = (long *)((long)plVar25 + 0x14);
            iVar5 = iVar27 + -10;
            bVar4 = 0x13 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      else {
        iVar27 = iVar5;
        if (0xb < iVar5) {
          do {
            if (((*plVar26 != *plVar25) || (plVar26[1] != plVar25[1])) || (plVar26[2] != plVar25[2])
               ) {
              return 0;
            }
            plVar26 = plVar26 + 3;
            plVar25 = plVar25 + 3;
            iVar5 = iVar27 + -0xc;
            bVar4 = 0x17 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      if (iVar5 < 1) {
        uVar6 = 1;
      }
      else {
        iVar5 = iVar5 + 2;
        do {
          bVar4 = (int)*plVar26 == (int)*plVar25;
          uVar6 = (ulong)bVar4;
          if (!bVar4) {
            return uVar6;
          }
          plVar26 = (long *)((long)plVar26 + 4);
          plVar25 = (long *)((long)plVar25 + 4);
          iVar5 = iVar5 + -2;
        } while (2 < iVar5);
      }
      return uVar6;
    }
    auVar28 = func_0x00f78af4();
    lVar13 = auVar28._8_8_;
    lVar24 = auVar28._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
    uVar11 = uVar6;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
      uVar11 = uVar6;
    }
    if ((lVar24 != 0) && (lVar13 != 0)) {
      uVar1 = *(undefined4 *)(lVar24 + 0x10);
      uVar2 = *(undefined4 *)(lVar13 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar14 = (uint *)(lVar24 + 0x14);
      puVar18 = (uint *)(lVar13 + 0x14);
      if (iVar5 < 10) goto code_r0x029ca8c8;
      lVar22 = 4;
      iVar27 = iVar5;
      goto code_r0x029ca858;
    }
    auVar29 = func_0x00f78af4();
    unaff_x20 = auVar29._8_8_;
    unaff_x19 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar28;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x68) = &System_String__Equals;
    unaff_x29 = (undefined8 *******)((long)register0x00000008 + -0x70);
    unaff_x21 = (long *)0x3eb9000;
    if ((bRam0000000003eb9442 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9442 = 1;
    }
    if (unaff_x19 == (long *)0x0) break;
    if ((unaff_x20 == (long *)0x0) || (*unaff_x20 != /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      return 0;
    }
    if (unaff_x19 == unaff_x20) {
      return 1;
    }
    if (unaff_x20 == (long *)0x0) goto code_r0x029caa44;
    if ((int)unaff_x19[2] != (int)unaff_x20[2]) {
      return 0;
    }
    unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x70);
    puStack_c8 = *(undefined **)((long)register0x00000008 + -0x68);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x80);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    uVar6 = uVar11;
  }
  func_0x00f78a24(0x3d23938);
  unaff_x19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(unaff_x19,0);
  uVar8 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar8);
code_r0x029caa44:
  puStack_c8 = &System_String__Equals;
  auVar29 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  goto code_r0x029caa48;
  while( true ) {
    if (puVar14[1] != puVar18[1]) goto code_r0x029ca930;
    if (puVar14[2] != puVar18[2]) {
      lVar22 = 8;
      goto code_r0x029ca930;
    }
    if (puVar14[3] != puVar18[3]) {
      lVar22 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar14[4] != puVar18[4]) {
      lVar22 = 0x10;
      goto code_r0x029ca930;
    }
    puVar14 = puVar14 + 5;
    puVar18 = puVar18 + 5;
    iVar5 = iVar27 + -10;
    bVar4 = iVar27 < 0x14;
    iVar27 = iVar5;
    if (bVar4) break;
code_r0x029ca858:
    if (*puVar14 != *puVar18) {
      lVar22 = 0;
code_r0x029ca930:
      puVar14 = (uint *)(lVar22 + (long)puVar14);
      puVar18 = (uint *)(lVar22 + (long)puVar18);
      uVar12 = (uint)(ushort)*puVar14 - (uint)(ushort)*puVar18;
      if (uVar12 != 0) {
        return (ulong)uVar12;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar5) {
    iVar5 = iVar5 + 2;
    do {
      if (*puVar14 != *puVar18) {
        uVar12 = (*puVar14 & 0xffff) - (*puVar18 & 0xffff);
        if (uVar12 != 0) {
          return (ulong)uVar12;
        }
code_r0x029ca948:
        uVar12 = (uint)*(ushort *)((long)puVar14 + 2);
        uVar17 = (uint)*(ushort *)((long)puVar18 + 2);
        goto code_r0x029ca950;
      }
      puVar14 = puVar14 + 1;
      puVar18 = puVar18 + 1;
      iVar5 = iVar5 + -2;
    } while (2 < iVar5);
  }
  uVar12 = *(uint *)(lVar24 + 0x10);
  uVar17 = *(uint *)(lVar13 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar12 - uVar17);
  while( true ) {
    lVar22 = lVar22 + -2;
    puVar16 = puVar20 + 1;
    puVar23 = puVar20;
    if (lVar22 == 0) break;
code_r0x029cac24:
    puVar20 = puVar16;
    if (0x7f < *puVar23) goto code_r0x029cac8c;
  }
  if (iVar5 != 0) {
    puVar16 = (ushort *)(lVar13 + 0x16);
    puVar23 = (ushort *)(lVar13 + 0x14);
    do {
      puVar20 = puVar16;
      if (0x7f < *puVar23) goto code_r0x029cac8c;
      lVar15 = lVar15 + -2;
      puVar16 = puVar20 + 1;
      puVar23 = puVar20;
    } while (lVar15 != 0);
  }
code_r0x029cac68:
  iVar5 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar24,lVar13);
code_r0x029cabcc:
  return (ulong)(iVar5 == 0);
}



// ============================================================
// RVA: 0x1564460 | Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0.<GenerateRandomList>b__6
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__6
                (long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  ushort *puVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  code *pcVar19;
  ushort *puVar20;
  int *piVar21;
  long lVar22;
  ushort *puVar23;
  long *unaff_x19;
  long lVar24;
  long *unaff_x20;
  long *plVar25;
  long *plVar26;
  int iVar27;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined *puStack_98;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4fdb & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d220b0);
    bRam0000000003eb4fdb = 1;
  }
  plVar25 = *(long **)(param_1 + 0x10);
  if (plVar25 == (long *)0x0) {
    auVar29 = func_0x00f78af4();
    puStack_38 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__7;
    pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4fdc & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d220b0);
      bRam0000000003eb4fdc = 1;
    }
    unaff_x21 = (long *)(auVar29._8_8_ + 0x48);
    uVar17 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(unaff_x21,0);
    if ((int)uVar17 == 0) {
      return uVar17;
    }
    plVar25 = (long *)auVar29._0_8_[2];
    if (plVar25 == (long *)0x0) {
      auVar28 = func_0x00f78af4();
      unaff_x19 = auVar28._8_8_;
      puStack_68 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__8;
      unaff_x29 = &pppppppuStack_70;
      pppppppuStack_70 = &pppppppuStack_40;
      if ((bRam0000000003eb4fdd & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d220b0);
        bRam0000000003eb4fdd = 1;
      }
      plVar25 = *(long **)(auVar28._0_8_ + 0x10);
      if (plVar25 == (long *)0x0) {
        auVar29 = func_0x00f78af4();
        puStack_98 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__9;
        if ((bRam0000000003eb4fde & 1) == 0) {
          func_0x00f78a20(0x3d21270);
          func_0x00f78a20(0x3d220b0);
          bRam0000000003eb4fde = 1;
        }
        plVar25 = (long *)(auVar29._8_8_ + 0x58);
        uVar17 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar25,0);
        if ((int)uVar17 == 0) {
          return uVar17;
        }
        plVar26 = *(long **)(auVar29._0_8_ + 0x10);
        if (plVar26 == (long *)0x0) {
          auVar30 = func_0x00f78af4();
          uVar17 = /*System.Object$$.ctor*/ func_0x0294d018(auVar30._0_8_,0);
          *(int *)(auVar30._0_8_ + 0x10) = auVar30._8_4_;
          return uVar17;
        }
        lVar24 = *plVar25;
        lVar12 = *plVar26;
        uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar17 != 0) {
          piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
              goto code_r0x01564828;
            }
            piVar21 = piVar21 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564828:
        lVar12 = (*(code *)*puVar6)(plVar26,puVar6[1]);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff70;
        unaff_x21 = (long *)0x3eb4000;
        unaff_x20 = (long *)0x0;
      }
      else {
        lVar24 = unaff_x19[4];
        lVar12 = *plVar25;
        uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar17 != 0) {
          piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
              goto code_r0x01564718;
            }
            piVar21 = piVar21 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564718:
        lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        unaff_x20 = (long *)0x0;
        unaff_x19 = auVar29._0_8_;
        unaff_x29 = pppppppuStack_70;
        puStack_98 = puStack_68;
      }
    }
    else {
      lVar24 = *unaff_x21;
      lVar12 = *plVar25;
      uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar17 != 0) {
        piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
            goto code_r0x0156461c;
          }
          piVar21 = piVar21 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x0156461c:
      lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x21 = (long *)0x3eb4000;
      unaff_x20 = (long *)0x0;
      unaff_x19 = param_2;
      unaff_x29 = pppppppuStack_40;
      puStack_98 = puStack_38;
    }
  }
  else {
    lVar24 = param_2[3];
    lVar12 = *plVar25;
    uVar17 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar17 != 0) {
      piVar21 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_0156450c;
        }
        piVar21 = piVar21 + 4;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
LAB_0156450c:
    lVar12 = (*(code *)*puVar6)(plVar25,puVar6[1]);
    puStack_98 = unaff_x30;
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar29._8_8_ = lVar12;
  auVar29._0_8_ = lVar24;
  if ((lVar24 == 0) || (lVar12 == 0)) {
    uVar17 = 0;
    if (lVar24 == lVar12) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
      if ((lVar24 != 0) && (lVar12 != 0)) {
        if (*(int *)(lVar24 + 0x10) == *(int *)(lVar12 + 0x10)) goto System_String__EqualsHelper;
        uVar10 = 0;
      }
    }
    return uVar10;
  }
  uVar10 = 5;
code_r0x029caa48:
  lVar12 = auVar29._8_8_;
  lVar24 = auVar29._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_98;
  uVar17 = uVar10;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb9443 = 1;
  }
  if (5 < (uint)uVar10) {
code_r0x029caca0:
    uVar7 = func_0x00f78a24(0x3d746f0);
    uVar7 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar7,0);
    func_0x00f78a24(0x3d1fce8);
    uVar8 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar8,uVar7,uVar9,0);
    uVar7 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar8,uVar7);
    goto code_r0x029cad04;
  }
  if (lVar24 == lVar12) {
    return 1;
  }
  if (lVar12 == 0) {
    return 0;
  }
  switch(uVar10 & 0xffffffff) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caba0;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
    if ((plVar25 == (long *)0x0) ||
       (plVar25 = (long *)(**(code **)(*plVar25 + 0x1f8))(plVar25,*(undefined8 *)(*plVar25 + 0x200))
       , plVar25 == (long *)0x0)) goto code_r0x029cad04;
    pcVar19 = *(code **)(*plVar25 + 0x1a8);
    uVar7 = *(undefined8 *)(*plVar25 + 0x1b0);
    uVar8 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar5 = *(int *)(lVar24 + 0x10);
    if (iVar5 != *(int *)(lVar12 + 0x10)) {
      return 0;
    }
    if (iVar5 == 0) goto code_r0x029cac68;
    lVar14 = (long)iVar5 << 1;
    puVar15 = (ushort *)(lVar24 + 0x16);
    puVar23 = (ushort *)(lVar24 + 0x14);
    lVar22 = lVar14;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar25 == (long *)0x0) ||
     (plVar25 = (long *)(**(code **)(*plVar25 + 0x1f8))(plVar25,*(undefined8 *)(*plVar25 + 0x200)),
     plVar25 == (long *)0x0)) {
code_r0x029cad04:
    lVar24 = func_0x00f78af4();
    if (*(int *)(lVar24 + 0x10) == 0) {
      return 1;
    }
    lVar12 = (long)*(int *)(lVar24 + 0x10) * 2;
    puVar15 = (ushort *)(lVar24 + 0x14);
    puVar23 = (ushort *)(lVar24 + 0x16);
    do {
      lVar12 = lVar12 + -2;
      uVar3 = *puVar15;
      puVar15 = puVar23;
      puVar23 = puVar23 + 1;
    } while (uVar3 < 0x80 && lVar12 != 0);
    return (ulong)(uVar3 < 0x80);
  }
  pcVar19 = *(code **)(*plVar25 + 0x1a8);
  uVar7 = *(undefined8 *)(*plVar25 + 0x1b0);
  uVar8 = 0;
code_r0x029cabc8:
  iVar5 = (*pcVar19)(plVar25,lVar24,lVar12,uVar8,uVar7);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar5 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar24,lVar12,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar24 + 0x10) != *(int *)(lVar12 + 0x10)) {
    return 0;
  }
  unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x10);
  puStack_98 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
System_String__EqualsHelper:
  while( true ) {
    lVar24 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = puStack_98;
    if ((lVar24 != 0) && (auVar29._8_8_ != 0)) {
      plVar25 = (long *)(lVar24 + 0x14);
      iVar5 = *(int *)(lVar24 + 0x10);
      plVar26 = (long *)(auVar29._8_8_ + 0x14);
      uVar17 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar17 & 1) == 0) {
        iVar27 = iVar5;
        if (9 < iVar5) {
          do {
            if ((int)*plVar25 != (int)*plVar26) {
              return 0;
            }
            if (*(int *)((long)plVar25 + 4) != *(int *)((long)plVar26 + 4)) {
              return 0;
            }
            if ((int)plVar25[1] != (int)plVar26[1]) {
              return 0;
            }
            if (*(int *)((long)plVar25 + 0xc) != *(int *)((long)plVar26 + 0xc)) {
              return 0;
            }
            if ((int)plVar25[2] != (int)plVar26[2]) {
              return 0;
            }
            plVar25 = (long *)((long)plVar25 + 0x14);
            plVar26 = (long *)((long)plVar26 + 0x14);
            iVar5 = iVar27 + -10;
            bVar4 = 0x13 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      else {
        iVar27 = iVar5;
        if (0xb < iVar5) {
          do {
            if (((*plVar25 != *plVar26) || (plVar25[1] != plVar26[1])) || (plVar25[2] != plVar26[2])
               ) {
              return 0;
            }
            plVar25 = plVar25 + 3;
            plVar26 = plVar26 + 3;
            iVar5 = iVar27 + -0xc;
            bVar4 = 0x17 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      if (iVar5 < 1) {
        uVar17 = 1;
      }
      else {
        iVar5 = iVar5 + 2;
        do {
          bVar4 = (int)*plVar25 == (int)*plVar26;
          uVar17 = (ulong)bVar4;
          if (!bVar4) {
            return uVar17;
          }
          plVar25 = (long *)((long)plVar25 + 4);
          plVar26 = (long *)((long)plVar26 + 4);
          iVar5 = iVar5 + -2;
        } while (2 < iVar5);
      }
      return uVar17;
    }
    auVar28 = func_0x00f78af4();
    lVar12 = auVar28._8_8_;
    lVar24 = auVar28._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
    uVar10 = uVar17;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
      uVar10 = uVar17;
    }
    if ((lVar24 != 0) && (lVar12 != 0)) {
      uVar1 = *(undefined4 *)(lVar24 + 0x10);
      uVar2 = *(undefined4 *)(lVar12 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar13 = (uint *)(lVar24 + 0x14);
      puVar18 = (uint *)(lVar12 + 0x14);
      if (iVar5 < 10) goto code_r0x029ca8c8;
      lVar22 = 4;
      iVar27 = iVar5;
      goto code_r0x029ca858;
    }
    auVar29 = func_0x00f78af4();
    unaff_x20 = auVar29._8_8_;
    unaff_x19 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar28;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x68) = &System_String__Equals;
    unaff_x29 = (undefined8 *******)((long)register0x00000008 + -0x70);
    unaff_x21 = (long *)0x3eb9000;
    if ((bRam0000000003eb9442 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9442 = 1;
    }
    if (unaff_x19 == (long *)0x0) break;
    if ((unaff_x20 == (long *)0x0) || (*unaff_x20 != /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      return 0;
    }
    if (unaff_x19 == unaff_x20) {
      return 1;
    }
    if (unaff_x20 == (long *)0x0) goto code_r0x029caa44;
    if ((int)unaff_x19[2] != (int)unaff_x20[2]) {
      return 0;
    }
    unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x70);
    puStack_98 = *(undefined **)((long)register0x00000008 + -0x68);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x80);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    uVar17 = uVar10;
  }
  func_0x00f78a24(0x3d23938);
  unaff_x19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(unaff_x19,0);
  uVar7 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar7);
code_r0x029caa44:
  puStack_98 = &System_String__Equals;
  auVar29 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  goto code_r0x029caa48;
  while( true ) {
    if (puVar13[1] != puVar18[1]) goto code_r0x029ca930;
    if (puVar13[2] != puVar18[2]) {
      lVar22 = 8;
      goto code_r0x029ca930;
    }
    if (puVar13[3] != puVar18[3]) {
      lVar22 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar13[4] != puVar18[4]) {
      lVar22 = 0x10;
      goto code_r0x029ca930;
    }
    puVar13 = puVar13 + 5;
    puVar18 = puVar18 + 5;
    iVar5 = iVar27 + -10;
    bVar4 = iVar27 < 0x14;
    iVar27 = iVar5;
    if (bVar4) break;
code_r0x029ca858:
    if (*puVar13 != *puVar18) {
      lVar22 = 0;
code_r0x029ca930:
      puVar13 = (uint *)(lVar22 + (long)puVar13);
      puVar18 = (uint *)(lVar22 + (long)puVar18);
      uVar11 = (uint)(ushort)*puVar13 - (uint)(ushort)*puVar18;
      if (uVar11 != 0) {
        return (ulong)uVar11;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar5) {
    iVar5 = iVar5 + 2;
    do {
      if (*puVar13 != *puVar18) {
        uVar11 = (*puVar13 & 0xffff) - (*puVar18 & 0xffff);
        if (uVar11 != 0) {
          return (ulong)uVar11;
        }
code_r0x029ca948:
        uVar11 = (uint)*(ushort *)((long)puVar13 + 2);
        uVar16 = (uint)*(ushort *)((long)puVar18 + 2);
        goto code_r0x029ca950;
      }
      puVar13 = puVar13 + 1;
      puVar18 = puVar18 + 1;
      iVar5 = iVar5 + -2;
    } while (2 < iVar5);
  }
  uVar11 = *(uint *)(lVar24 + 0x10);
  uVar16 = *(uint *)(lVar12 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar11 - uVar16);
  while( true ) {
    lVar22 = lVar22 + -2;
    puVar15 = puVar20 + 1;
    puVar23 = puVar20;
    if (lVar22 == 0) break;
code_r0x029cac24:
    puVar20 = puVar15;
    if (0x7f < *puVar23) goto code_r0x029cac8c;
  }
  if (iVar5 != 0) {
    puVar15 = (ushort *)(lVar12 + 0x16);
    puVar23 = (ushort *)(lVar12 + 0x14);
    do {
      puVar20 = puVar15;
      if (0x7f < *puVar23) goto code_r0x029cac8c;
      lVar14 = lVar14 + -2;
      puVar15 = puVar20 + 1;
      puVar23 = puVar20;
    } while (lVar14 != 0);
  }
code_r0x029cac68:
  iVar5 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar24,lVar12);
code_r0x029cabcc:
  return (ulong)(iVar5 == 0);
}



// ============================================================
// RVA: 0x1564554 | Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0.<GenerateRandomList>b__7
// ============================================================

/* WARNING: Type propagation algorithm not settling */

ulong Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__7
                (long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  ushort *puVar17;
  uint uVar18;
  uint *puVar19;
  code *pcVar20;
  ushort *puVar21;
  int *piVar22;
  long lVar23;
  ushort *puVar24;
  long *unaff_x19;
  long lVar25;
  long *unaff_x20;
  long *plVar26;
  int iVar27;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined *puStack_68;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4fdc & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d220b0);
    bRam0000000003eb4fdc = 1;
  }
  plVar8 = (long *)(param_2 + 0x48);
  uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar8,0);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  plVar26 = (long *)param_1[2];
  if (plVar26 == (long *)0x0) {
    auVar29 = func_0x00f78af4();
    unaff_x19 = auVar29._8_8_;
    puStack_38 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__8;
    unaff_x29 = &pppppppuStack_40;
    pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4fdd & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d220b0);
      bRam0000000003eb4fdd = 1;
    }
    plVar26 = *(long **)(auVar29._0_8_ + 0x10);
    if (plVar26 == (long *)0x0) {
      auVar29 = func_0x00f78af4();
      puStack_68 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__9;
      if ((bRam0000000003eb4fde & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d220b0);
        bRam0000000003eb4fde = 1;
      }
      plVar8 = (long *)(auVar29._8_8_ + 0x58);
      uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar8,0);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      plVar26 = *(long **)(auVar29._0_8_ + 0x10);
      if (plVar26 == (long *)0x0) {
        auVar30 = func_0x00f78af4();
        uVar6 = /*System.Object$$.ctor*/ func_0x0294d018(auVar30._0_8_,0);
        *(int *)(auVar30._0_8_ + 0x10) = auVar30._8_4_;
        return uVar6;
      }
      lVar25 = *plVar8;
      lVar14 = *plVar26;
      uVar6 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar6 != 0) {
        piVar22 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar22 * 0x10 + 0x138);
            goto code_r0x01564828;
          }
          piVar22 = piVar22 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564828:
      lVar14 = (*(code *)*puVar7)(plVar26,puVar7[1]);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
      unaff_x21 = (long *)0x3eb4000;
      unaff_x20 = (long *)0x0;
    }
    else {
      lVar25 = unaff_x19[4];
      lVar14 = *plVar26;
      uVar6 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar6 != 0) {
        piVar22 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar22 * 0x10 + 0x138);
            goto code_r0x01564718;
          }
          piVar22 = piVar22 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564718:
      lVar14 = (*(code *)*puVar7)(plVar26,puVar7[1]);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x20 = (long *)0x0;
      unaff_x19 = param_1;
      unaff_x21 = plVar8;
      unaff_x29 = pppppppuStack_40;
      puStack_68 = puStack_38;
    }
  }
  else {
    lVar25 = *plVar8;
    lVar14 = *plVar26;
    uVar6 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar6 != 0) {
      piVar22 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_0156461c;
        }
        piVar22 = piVar22 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
LAB_0156461c:
    lVar14 = (*(code *)*puVar7)(plVar26,puVar7[1]);
    puStack_68 = unaff_x30;
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar29._8_8_ = lVar14;
  auVar29._0_8_ = lVar25;
  if ((lVar25 == 0) || (lVar14 == 0)) {
    uVar6 = 0;
    if (lVar25 == lVar14) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
      if ((lVar25 != 0) && (lVar14 != 0)) {
        if (*(int *)(lVar25 + 0x10) == *(int *)(lVar14 + 0x10)) goto System_String__EqualsHelper;
        uVar12 = 0;
      }
    }
    return uVar12;
  }
  uVar12 = 5;
code_r0x029caa48:
  lVar14 = auVar29._8_8_;
  lVar25 = auVar29._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_68;
  uVar6 = uVar12;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb9443 = 1;
  }
  if (5 < (uint)uVar12) {
code_r0x029caca0:
    uVar9 = func_0x00f78a24(0x3d746f0);
    uVar9 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
    func_0x00f78a24(0x3d1fce8);
    uVar10 = func_0x00f78aec();
    uVar11 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar10,uVar9,uVar11,0);
    uVar9 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar10,uVar9);
    goto code_r0x029cad04;
  }
  if (lVar25 == lVar14) {
    return 1;
  }
  if (lVar14 == 0) {
    return 0;
  }
  switch(uVar12 & 0xffffffff) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar8 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar8 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caba0;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar8 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar8 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
    if ((plVar8 == (long *)0x0) ||
       (plVar8 = (long *)(**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200)),
       plVar8 == (long *)0x0)) goto code_r0x029cad04;
    pcVar20 = *(code **)(*plVar8 + 0x1a8);
    uVar9 = *(undefined8 *)(*plVar8 + 0x1b0);
    uVar10 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar5 = *(int *)(lVar25 + 0x10);
    if (iVar5 != *(int *)(lVar14 + 0x10)) {
      return 0;
    }
    if (iVar5 == 0) goto code_r0x029cac68;
    lVar16 = (long)iVar5 << 1;
    puVar17 = (ushort *)(lVar25 + 0x16);
    puVar24 = (ushort *)(lVar25 + 0x14);
    lVar23 = lVar16;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar8 == (long *)0x0) ||
     (plVar8 = (long *)(**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200)),
     plVar8 == (long *)0x0)) {
code_r0x029cad04:
    lVar25 = func_0x00f78af4();
    if (*(int *)(lVar25 + 0x10) == 0) {
      return 1;
    }
    lVar14 = (long)*(int *)(lVar25 + 0x10) * 2;
    puVar17 = (ushort *)(lVar25 + 0x14);
    puVar24 = (ushort *)(lVar25 + 0x16);
    do {
      lVar14 = lVar14 + -2;
      uVar3 = *puVar17;
      puVar17 = puVar24;
      puVar24 = puVar24 + 1;
    } while (uVar3 < 0x80 && lVar14 != 0);
    return (ulong)(uVar3 < 0x80);
  }
  pcVar20 = *(code **)(*plVar8 + 0x1a8);
  uVar9 = *(undefined8 *)(*plVar8 + 0x1b0);
  uVar10 = 0;
code_r0x029cabc8:
  iVar5 = (*pcVar20)(plVar8,lVar25,lVar14,uVar10,uVar9);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar5 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar25,lVar14,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar25 + 0x10) != *(int *)(lVar14 + 0x10)) {
    return 0;
  }
  unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x10);
  puStack_68 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(long **)((long)register0x00000008 + -0x28);
System_String__EqualsHelper:
  while( true ) {
    lVar25 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = puStack_68;
    if ((lVar25 != 0) && (auVar29._8_8_ != 0)) {
      plVar8 = (long *)(lVar25 + 0x14);
      iVar5 = *(int *)(lVar25 + 0x10);
      plVar26 = (long *)(auVar29._8_8_ + 0x14);
      uVar6 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar6 & 1) == 0) {
        iVar27 = iVar5;
        if (9 < iVar5) {
          do {
            if ((int)*plVar8 != (int)*plVar26) {
              return 0;
            }
            if (*(int *)((long)plVar8 + 4) != *(int *)((long)plVar26 + 4)) {
              return 0;
            }
            if ((int)plVar8[1] != (int)plVar26[1]) {
              return 0;
            }
            if (*(int *)((long)plVar8 + 0xc) != *(int *)((long)plVar26 + 0xc)) {
              return 0;
            }
            if ((int)plVar8[2] != (int)plVar26[2]) {
              return 0;
            }
            plVar8 = (long *)((long)plVar8 + 0x14);
            plVar26 = (long *)((long)plVar26 + 0x14);
            iVar5 = iVar27 + -10;
            bVar4 = 0x13 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      else {
        iVar27 = iVar5;
        if (0xb < iVar5) {
          do {
            if (((*plVar8 != *plVar26) || (plVar8[1] != plVar26[1])) || (plVar8[2] != plVar26[2])) {
              return 0;
            }
            plVar8 = plVar8 + 3;
            plVar26 = plVar26 + 3;
            iVar5 = iVar27 + -0xc;
            bVar4 = 0x17 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      if (iVar5 < 1) {
        uVar6 = 1;
      }
      else {
        iVar5 = iVar5 + 2;
        do {
          bVar4 = (int)*plVar8 == (int)*plVar26;
          uVar6 = (ulong)bVar4;
          if (!bVar4) {
            return uVar6;
          }
          plVar8 = (long *)((long)plVar8 + 4);
          plVar26 = (long *)((long)plVar26 + 4);
          iVar5 = iVar5 + -2;
        } while (2 < iVar5);
      }
      return uVar6;
    }
    auVar28 = func_0x00f78af4();
    lVar14 = auVar28._8_8_;
    lVar25 = auVar28._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
    uVar12 = uVar6;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
      uVar12 = uVar6;
    }
    if ((lVar25 != 0) && (lVar14 != 0)) {
      uVar1 = *(undefined4 *)(lVar25 + 0x10);
      uVar2 = *(undefined4 *)(lVar14 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar15 = (uint *)(lVar25 + 0x14);
      puVar19 = (uint *)(lVar14 + 0x14);
      if (iVar5 < 10) goto code_r0x029ca8c8;
      lVar23 = 4;
      iVar27 = iVar5;
      goto code_r0x029ca858;
    }
    auVar29 = func_0x00f78af4();
    unaff_x20 = auVar29._8_8_;
    unaff_x19 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar28;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x68) = &System_String__Equals;
    unaff_x29 = (undefined8 *******)((long)register0x00000008 + -0x70);
    unaff_x21 = (long *)0x3eb9000;
    if ((bRam0000000003eb9442 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9442 = 1;
    }
    if (unaff_x19 == (long *)0x0) break;
    if ((unaff_x20 == (long *)0x0) || (*unaff_x20 != /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      return 0;
    }
    if (unaff_x19 == unaff_x20) {
      return 1;
    }
    if (unaff_x20 == (long *)0x0) goto code_r0x029caa44;
    if ((int)unaff_x19[2] != (int)unaff_x20[2]) {
      return 0;
    }
    unaff_x29 = *(undefined8 ********)((long)register0x00000008 + -0x70);
    puStack_68 = *(undefined **)((long)register0x00000008 + -0x68);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x80);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    uVar6 = uVar12;
  }
  func_0x00f78a24(0x3d23938);
  unaff_x19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(unaff_x19,0);
  uVar9 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar9);
code_r0x029caa44:
  puStack_68 = &System_String__Equals;
  auVar29 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  goto code_r0x029caa48;
  while( true ) {
    if (puVar15[1] != puVar19[1]) goto code_r0x029ca930;
    if (puVar15[2] != puVar19[2]) {
      lVar23 = 8;
      goto code_r0x029ca930;
    }
    if (puVar15[3] != puVar19[3]) {
      lVar23 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar15[4] != puVar19[4]) {
      lVar23 = 0x10;
      goto code_r0x029ca930;
    }
    puVar15 = puVar15 + 5;
    puVar19 = puVar19 + 5;
    iVar5 = iVar27 + -10;
    bVar4 = iVar27 < 0x14;
    iVar27 = iVar5;
    if (bVar4) break;
code_r0x029ca858:
    if (*puVar15 != *puVar19) {
      lVar23 = 0;
code_r0x029ca930:
      puVar15 = (uint *)(lVar23 + (long)puVar15);
      puVar19 = (uint *)(lVar23 + (long)puVar19);
      uVar13 = (uint)(ushort)*puVar15 - (uint)(ushort)*puVar19;
      if (uVar13 != 0) {
        return (ulong)uVar13;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar5) {
    iVar5 = iVar5 + 2;
    do {
      if (*puVar15 != *puVar19) {
        uVar13 = (*puVar15 & 0xffff) - (*puVar19 & 0xffff);
        if (uVar13 != 0) {
          return (ulong)uVar13;
        }
code_r0x029ca948:
        uVar13 = (uint)*(ushort *)((long)puVar15 + 2);
        uVar18 = (uint)*(ushort *)((long)puVar19 + 2);
        goto code_r0x029ca950;
      }
      puVar15 = puVar15 + 1;
      puVar19 = puVar19 + 1;
      iVar5 = iVar5 + -2;
    } while (2 < iVar5);
  }
  uVar13 = *(uint *)(lVar25 + 0x10);
  uVar18 = *(uint *)(lVar14 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar13 - uVar18);
  while( true ) {
    lVar23 = lVar23 + -2;
    puVar17 = puVar21 + 1;
    puVar24 = puVar21;
    if (lVar23 == 0) break;
code_r0x029cac24:
    puVar21 = puVar17;
    if (0x7f < *puVar24) goto code_r0x029cac8c;
  }
  if (iVar5 != 0) {
    puVar17 = (ushort *)(lVar14 + 0x16);
    puVar24 = (ushort *)(lVar14 + 0x14);
    do {
      puVar21 = puVar17;
      if (0x7f < *puVar24) goto code_r0x029cac8c;
      lVar16 = lVar16 + -2;
      puVar17 = puVar21 + 1;
      puVar24 = puVar21;
    } while (lVar16 != 0);
  }
code_r0x029cac68:
  iVar5 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar25,lVar14);
code_r0x029cabcc:
  return (ulong)(iVar5 == 0);
}



// ============================================================
// RVA: 0x156466c | Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0.<GenerateRandomList>b__8
// ============================================================

ulong Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__8
                (long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  ushort *puVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  code *pcVar20;
  ushort *puVar21;
  int *piVar22;
  long lVar23;
  ushort *puVar24;
  long *unaff_x19;
  long lVar25;
  long *unaff_x20;
  long *plVar26;
  long *plVar27;
  int iVar28;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined *puStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4fdd & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d220b0);
    bRam0000000003eb4fdd = 1;
  }
  plVar26 = *(long **)(param_1 + 0x10);
  if (plVar26 == (long *)0x0) {
    auVar30 = func_0x00f78af4();
    puStack_38 = &Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__9;
    if ((bRam0000000003eb4fde & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d220b0);
      bRam0000000003eb4fde = 1;
    }
    plVar26 = (long *)(auVar30._8_8_ + 0x58);
    uVar18 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(plVar26,0);
    if ((int)uVar18 == 0) {
      return uVar18;
    }
    plVar27 = *(long **)(auVar30._0_8_ + 0x10);
    if (plVar27 == (long *)0x0) {
      auVar31 = func_0x00f78af4();
      uVar18 = /*System.Object$$.ctor*/ func_0x0294d018(auVar31._0_8_,0);
      *(int *)(auVar31._0_8_ + 0x10) = auVar31._8_4_;
      return uVar18;
    }
    lVar25 = *plVar26;
    lVar13 = *plVar27;
    uVar18 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar18 != 0) {
      piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
          goto code_r0x01564828;
        }
        piVar22 = piVar22 + 4;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar27,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x01564828:
    lVar13 = (*(code *)*puVar7)(plVar27,puVar7[1]);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x21 = 0x3eb4000;
    unaff_x20 = (long *)0x0;
    unaff_x19 = param_2;
    unaff_x29 = puVar1;
  }
  else {
    lVar25 = param_2[4];
    lVar13 = *plVar26;
    uVar18 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar18 != 0) {
      piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_01564718;
        }
        piVar22 = piVar22 + 4;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar26,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
LAB_01564718:
    lVar13 = (*(code *)*puVar7)(plVar26,puVar7[1]);
    puStack_38 = unaff_x30;
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
  }
  auVar30._8_8_ = lVar13;
  auVar30._0_8_ = lVar25;
  if ((lVar25 == 0) || (lVar13 == 0)) {
    uVar18 = 0;
    if (lVar25 == lVar13) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
      if ((lVar25 != 0) && (lVar13 != 0)) {
        if (*(int *)(lVar25 + 0x10) == *(int *)(lVar13 + 0x10)) goto System_String__EqualsHelper;
        uVar11 = 0;
      }
    }
    return uVar11;
  }
  uVar11 = 5;
code_r0x029caa48:
  lVar13 = auVar30._8_8_;
  lVar25 = auVar30._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_38;
  uVar18 = uVar11;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb9443 = 1;
  }
  if (5 < (uint)uVar11) {
code_r0x029caca0:
    uVar8 = func_0x00f78a24(0x3d746f0);
    uVar8 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar8,0);
    func_0x00f78a24(0x3d1fce8);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar9,uVar8,uVar10,0);
    uVar8 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar9,uVar8);
    goto code_r0x029cad04;
  }
  if (lVar25 == lVar13) {
    return 1;
  }
  if (lVar13 == 0) {
    return 0;
  }
  switch(uVar11 & 0xffffffff) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caba0;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar26 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
    if ((plVar26 == (long *)0x0) ||
       (plVar26 = (long *)(**(code **)(*plVar26 + 0x1f8))(plVar26,*(undefined8 *)(*plVar26 + 0x200))
       , plVar26 == (long *)0x0)) goto code_r0x029cad04;
    pcVar20 = *(code **)(*plVar26 + 0x1a8);
    uVar8 = *(undefined8 *)(*plVar26 + 0x1b0);
    uVar9 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar6 = *(int *)(lVar25 + 0x10);
    if (iVar6 != *(int *)(lVar13 + 0x10)) {
      return 0;
    }
    if (iVar6 == 0) goto code_r0x029cac68;
    lVar15 = (long)iVar6 << 1;
    puVar16 = (ushort *)(lVar25 + 0x16);
    puVar24 = (ushort *)(lVar25 + 0x14);
    lVar23 = lVar15;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar26 == (long *)0x0) ||
     (plVar26 = (long *)(**(code **)(*plVar26 + 0x1f8))(plVar26,*(undefined8 *)(*plVar26 + 0x200)),
     plVar26 == (long *)0x0)) {
code_r0x029cad04:
    lVar25 = func_0x00f78af4();
    if (*(int *)(lVar25 + 0x10) == 0) {
      return 1;
    }
    lVar13 = (long)*(int *)(lVar25 + 0x10) * 2;
    puVar16 = (ushort *)(lVar25 + 0x14);
    puVar24 = (ushort *)(lVar25 + 0x16);
    do {
      lVar13 = lVar13 + -2;
      uVar4 = *puVar16;
      puVar16 = puVar24;
      puVar24 = puVar24 + 1;
    } while (uVar4 < 0x80 && lVar13 != 0);
    return (ulong)(uVar4 < 0x80);
  }
  pcVar20 = *(code **)(*plVar26 + 0x1a8);
  uVar8 = *(undefined8 *)(*plVar26 + 0x1b0);
  uVar9 = 0;
code_r0x029cabc8:
  iVar6 = (*pcVar20)(plVar26,lVar25,lVar13,uVar9,uVar8);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar6 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar25,lVar13,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar25 + 0x10) != *(int *)(lVar13 + 0x10)) {
    return 0;
  }
  unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
  puStack_38 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
System_String__EqualsHelper:
  while( true ) {
    lVar25 = auVar30._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = puStack_38;
    if ((lVar25 != 0) && (auVar30._8_8_ != 0)) {
      plVar26 = (long *)(lVar25 + 0x14);
      iVar6 = *(int *)(lVar25 + 0x10);
      plVar27 = (long *)(auVar30._8_8_ + 0x14);
      uVar18 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar18 & 1) == 0) {
        iVar28 = iVar6;
        if (9 < iVar6) {
          do {
            if ((int)*plVar26 != (int)*plVar27) {
              return 0;
            }
            if (*(int *)((long)plVar26 + 4) != *(int *)((long)plVar27 + 4)) {
              return 0;
            }
            if ((int)plVar26[1] != (int)plVar27[1]) {
              return 0;
            }
            if (*(int *)((long)plVar26 + 0xc) != *(int *)((long)plVar27 + 0xc)) {
              return 0;
            }
            if ((int)plVar26[2] != (int)plVar27[2]) {
              return 0;
            }
            plVar26 = (long *)((long)plVar26 + 0x14);
            plVar27 = (long *)((long)plVar27 + 0x14);
            iVar6 = iVar28 + -10;
            bVar5 = 0x13 < iVar28;
            iVar28 = iVar6;
          } while (bVar5);
        }
      }
      else {
        iVar28 = iVar6;
        if (0xb < iVar6) {
          do {
            if (((*plVar26 != *plVar27) || (plVar26[1] != plVar27[1])) || (plVar26[2] != plVar27[2])
               ) {
              return 0;
            }
            plVar26 = plVar26 + 3;
            plVar27 = plVar27 + 3;
            iVar6 = iVar28 + -0xc;
            bVar5 = 0x17 < iVar28;
            iVar28 = iVar6;
          } while (bVar5);
        }
      }
      if (iVar6 < 1) {
        uVar18 = 1;
      }
      else {
        iVar6 = iVar6 + 2;
        do {
          bVar5 = (int)*plVar26 == (int)*plVar27;
          uVar18 = (ulong)bVar5;
          if (!bVar5) {
            return uVar18;
          }
          plVar26 = (long *)((long)plVar26 + 4);
          plVar27 = (long *)((long)plVar27 + 4);
          iVar6 = iVar6 + -2;
        } while (2 < iVar6);
      }
      return uVar18;
    }
    auVar29 = func_0x00f78af4();
    lVar13 = auVar29._8_8_;
    lVar25 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
    uVar11 = uVar18;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
      uVar11 = uVar18;
    }
    if ((lVar25 != 0) && (lVar13 != 0)) {
      uVar2 = *(undefined4 *)(lVar25 + 0x10);
      uVar3 = *(undefined4 *)(lVar13 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*System.Math$$Min*/ func_0x02b020f4(uVar2,uVar3,0);
      puVar14 = (uint *)(lVar25 + 0x14);
      puVar19 = (uint *)(lVar13 + 0x14);
      if (iVar6 < 10) goto code_r0x029ca8c8;
      lVar23 = 4;
      iVar28 = iVar6;
      goto code_r0x029ca858;
    }
    auVar30 = func_0x00f78af4();
    unaff_x20 = auVar30._8_8_;
    unaff_x19 = auVar30._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar29;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x68) = &System_String__Equals;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x70);
    unaff_x21 = 0x3eb9000;
    if ((bRam0000000003eb9442 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9442 = 1;
    }
    if (unaff_x19 == (long *)0x0) break;
    if ((unaff_x20 == (long *)0x0) || (*unaff_x20 != /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      return 0;
    }
    if (unaff_x19 == unaff_x20) {
      return 1;
    }
    if (unaff_x20 == (long *)0x0) goto code_r0x029caa44;
    if ((int)unaff_x19[2] != (int)unaff_x20[2]) {
      return 0;
    }
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x70);
    puStack_38 = *(undefined **)((long)register0x00000008 + -0x68);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x80);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    uVar18 = uVar11;
  }
  func_0x00f78a24(0x3d23938);
  unaff_x19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(unaff_x19,0);
  uVar8 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar8);
code_r0x029caa44:
  puStack_38 = &System_String__Equals;
  auVar30 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  goto code_r0x029caa48;
  while( true ) {
    if (puVar14[1] != puVar19[1]) goto code_r0x029ca930;
    if (puVar14[2] != puVar19[2]) {
      lVar23 = 8;
      goto code_r0x029ca930;
    }
    if (puVar14[3] != puVar19[3]) {
      lVar23 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar14[4] != puVar19[4]) {
      lVar23 = 0x10;
      goto code_r0x029ca930;
    }
    puVar14 = puVar14 + 5;
    puVar19 = puVar19 + 5;
    iVar6 = iVar28 + -10;
    bVar5 = iVar28 < 0x14;
    iVar28 = iVar6;
    if (bVar5) break;
code_r0x029ca858:
    if (*puVar14 != *puVar19) {
      lVar23 = 0;
code_r0x029ca930:
      puVar14 = (uint *)(lVar23 + (long)puVar14);
      puVar19 = (uint *)(lVar23 + (long)puVar19);
      uVar12 = (uint)(ushort)*puVar14 - (uint)(ushort)*puVar19;
      if (uVar12 != 0) {
        return (ulong)uVar12;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar6) {
    iVar6 = iVar6 + 2;
    do {
      if (*puVar14 != *puVar19) {
        uVar12 = (*puVar14 & 0xffff) - (*puVar19 & 0xffff);
        if (uVar12 != 0) {
          return (ulong)uVar12;
        }
code_r0x029ca948:
        uVar12 = (uint)*(ushort *)((long)puVar14 + 2);
        uVar17 = (uint)*(ushort *)((long)puVar19 + 2);
        goto code_r0x029ca950;
      }
      puVar14 = puVar14 + 1;
      puVar19 = puVar19 + 1;
      iVar6 = iVar6 + -2;
    } while (2 < iVar6);
  }
  uVar12 = *(uint *)(lVar25 + 0x10);
  uVar17 = *(uint *)(lVar13 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar12 - uVar17);
  while( true ) {
    lVar23 = lVar23 + -2;
    puVar16 = puVar21 + 1;
    puVar24 = puVar21;
    if (lVar23 == 0) break;
code_r0x029cac24:
    puVar21 = puVar16;
    if (0x7f < *puVar24) goto code_r0x029cac8c;
  }
  if (iVar6 != 0) {
    puVar16 = (ushort *)(lVar13 + 0x16);
    puVar24 = (ushort *)(lVar13 + 0x14);
    do {
      puVar21 = puVar16;
      if (0x7f < *puVar24) goto code_r0x029cac8c;
      lVar15 = lVar15 + -2;
      puVar16 = puVar21 + 1;
      puVar24 = puVar21;
    } while (lVar15 != 0);
  }
code_r0x029cac68:
  iVar6 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar25,lVar13);
code_r0x029cabcc:
  return (ulong)(iVar6 == 0);
}



// ============================================================
// RVA: 0x1564760 | Atlas.RandomLoadoutHelpers.<>c__DisplayClass4_0.<GenerateRandomList>b__9
// ============================================================

ulong Atlas_RandomLoadoutHelpers___c__DisplayClass4_0___GenerateRandomList_b__9
                (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  ushort *puVar16;
  uint uVar17;
  uint *puVar18;
  code *pcVar19;
  ushort *puVar20;
  int *piVar21;
  long lVar22;
  ushort *puVar23;
  long *unaff_x19;
  long lVar24;
  long *unaff_x20;
  long *plVar25;
  long *plVar26;
  int iVar27;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  
  if ((bRam0000000003eb4fde & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d220b0);
    bRam0000000003eb4fde = 1;
  }
  uVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c((long *)(param_2 + 0x58),0);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  plVar25 = *(long **)(param_1 + 0x10);
  if (plVar25 == (long *)0x0) {
    auVar30 = func_0x00f78af4();
    uVar6 = /*System.Object$$.ctor*/ func_0x0294d018(auVar30._0_8_,0);
    *(int *)(auVar30._0_8_ + 0x10) = auVar30._8_4_;
    return uVar6;
  }
  lVar24 = *(long *)(param_2 + 0x58);
  lVar13 = *plVar25;
  uVar6 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar6 != 0) {
    piVar21 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
        puVar7 = (undefined8 *)(lVar13 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_01564828;
      }
      piVar21 = piVar21 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  puVar7 = (undefined8 *)func_0x00fac1f0(plVar25,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
LAB_01564828:
  lVar13 = (*(code *)*puVar7)(plVar25,puVar7[1]);
  auVar28._8_8_ = lVar13;
  auVar28._0_8_ = lVar24;
  auVar29._8_8_ = lVar13;
  auVar29._0_8_ = lVar24;
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((lVar24 == 0) || (lVar13 == 0)) {
    uVar6 = 0;
    if (lVar24 == lVar13) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
      if ((lVar24 != 0) && (lVar13 != 0)) {
        if (*(int *)(lVar24 + 0x10) == *(int *)(lVar13 + 0x10)) goto System_String__EqualsHelper;
        uVar11 = 0;
      }
    }
    return uVar11;
  }
  uVar11 = 5;
  auVar29 = auVar28;
code_r0x029caa48:
  lVar24 = auVar29._8_8_;
  lVar13 = auVar29._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar6 = uVar11;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb9443 = 1;
  }
  if (5 < (uint)uVar11) {
code_r0x029caca0:
    uVar8 = func_0x00f78a24(0x3d746f0);
    uVar8 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar8,0);
    func_0x00f78a24(0x3d1fce8);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar9,uVar8,uVar10,0);
    uVar8 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar9,uVar8);
    goto code_r0x029cad04;
  }
  if (lVar13 == lVar24) {
    return 1;
  }
  if (lVar24 == 0) {
    return 0;
  }
  switch(uVar11 & 0xffffffff) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caba0;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar25 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
    if ((plVar25 == (long *)0x0) ||
       (plVar25 = (long *)(**(code **)(*plVar25 + 0x1f8))(plVar25,*(undefined8 *)(*plVar25 + 0x200))
       , plVar25 == (long *)0x0)) goto code_r0x029cad04;
    pcVar19 = *(code **)(*plVar25 + 0x1a8);
    uVar8 = *(undefined8 *)(*plVar25 + 0x1b0);
    uVar9 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar5 = *(int *)(lVar13 + 0x10);
    if (iVar5 != *(int *)(lVar24 + 0x10)) {
      return 0;
    }
    if (iVar5 == 0) goto code_r0x029cac68;
    lVar15 = (long)iVar5 << 1;
    puVar16 = (ushort *)(lVar13 + 0x16);
    puVar23 = (ushort *)(lVar13 + 0x14);
    lVar22 = lVar15;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar25 == (long *)0x0) ||
     (plVar25 = (long *)(**(code **)(*plVar25 + 0x1f8))(plVar25,*(undefined8 *)(*plVar25 + 0x200)),
     plVar25 == (long *)0x0)) {
code_r0x029cad04:
    lVar13 = func_0x00f78af4();
    if (*(int *)(lVar13 + 0x10) == 0) {
      return 1;
    }
    lVar24 = (long)*(int *)(lVar13 + 0x10) * 2;
    puVar16 = (ushort *)(lVar13 + 0x14);
    puVar23 = (ushort *)(lVar13 + 0x16);
    do {
      lVar24 = lVar24 + -2;
      uVar3 = *puVar16;
      puVar16 = puVar23;
      puVar23 = puVar23 + 1;
    } while (uVar3 < 0x80 && lVar24 != 0);
    return (ulong)(uVar3 < 0x80);
  }
  pcVar19 = *(code **)(*plVar25 + 0x1a8);
  uVar8 = *(undefined8 *)(*plVar25 + 0x1b0);
  uVar9 = 0;
code_r0x029cabc8:
  iVar5 = (*pcVar19)(plVar25,lVar13,lVar24,uVar9,uVar8);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar5 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar13,lVar24,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar13 + 0x10) != *(int *)(lVar24 + 0x10)) {
    return 0;
  }
  unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
  unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
System_String__EqualsHelper:
  while( true ) {
    lVar13 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((lVar13 != 0) && (auVar29._8_8_ != 0)) {
      plVar25 = (long *)(lVar13 + 0x14);
      iVar5 = *(int *)(lVar13 + 0x10);
      plVar26 = (long *)(auVar29._8_8_ + 0x14);
      uVar6 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar6 & 1) == 0) {
        iVar27 = iVar5;
        if (9 < iVar5) {
          do {
            if ((int)*plVar25 != (int)*plVar26) {
              return 0;
            }
            if (*(int *)((long)plVar25 + 4) != *(int *)((long)plVar26 + 4)) {
              return 0;
            }
            if ((int)plVar25[1] != (int)plVar26[1]) {
              return 0;
            }
            if (*(int *)((long)plVar25 + 0xc) != *(int *)((long)plVar26 + 0xc)) {
              return 0;
            }
            if ((int)plVar25[2] != (int)plVar26[2]) {
              return 0;
            }
            plVar25 = (long *)((long)plVar25 + 0x14);
            plVar26 = (long *)((long)plVar26 + 0x14);
            iVar5 = iVar27 + -10;
            bVar4 = 0x13 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      else {
        iVar27 = iVar5;
        if (0xb < iVar5) {
          do {
            if (((*plVar25 != *plVar26) || (plVar25[1] != plVar26[1])) || (plVar25[2] != plVar26[2])
               ) {
              return 0;
            }
            plVar25 = plVar25 + 3;
            plVar26 = plVar26 + 3;
            iVar5 = iVar27 + -0xc;
            bVar4 = 0x17 < iVar27;
            iVar27 = iVar5;
          } while (bVar4);
        }
      }
      if (iVar5 < 1) {
        uVar6 = 1;
      }
      else {
        iVar5 = iVar5 + 2;
        do {
          bVar4 = (int)*plVar25 == (int)*plVar26;
          uVar6 = (ulong)bVar4;
          if (!bVar4) {
            return uVar6;
          }
          plVar25 = (long *)((long)plVar25 + 4);
          plVar26 = (long *)((long)plVar26 + 4);
          iVar5 = iVar5 + -2;
        } while (2 < iVar5);
      }
      return uVar6;
    }
    auVar28 = func_0x00f78af4();
    lVar24 = auVar28._8_8_;
    lVar13 = auVar28._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
    uVar11 = uVar6;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
      uVar11 = uVar6;
    }
    if ((lVar13 != 0) && (lVar24 != 0)) {
      uVar1 = *(undefined4 *)(lVar13 + 0x10);
      uVar2 = *(undefined4 *)(lVar24 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar14 = (uint *)(lVar13 + 0x14);
      puVar18 = (uint *)(lVar24 + 0x14);
      if (iVar5 < 10) goto code_r0x029ca8c8;
      lVar22 = 4;
      iVar27 = iVar5;
      goto code_r0x029ca858;
    }
    auVar29 = func_0x00f78af4();
    unaff_x20 = auVar29._8_8_;
    unaff_x19 = auVar29._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar28;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x68) = &System_String__Equals;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x70);
    unaff_x21 = 0x3eb9000;
    if ((bRam0000000003eb9442 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9442 = 1;
    }
    if (unaff_x19 == (long *)0x0) break;
    if ((unaff_x20 == (long *)0x0) || (*unaff_x20 != /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      return 0;
    }
    if (unaff_x19 == unaff_x20) {
      return 1;
    }
    if (unaff_x20 == (long *)0x0) goto code_r0x029caa44;
    if ((int)unaff_x19[2] != (int)unaff_x20[2]) {
      return 0;
    }
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -0x68);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x80);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    uVar6 = uVar11;
  }
  func_0x00f78a24(0x3d23938);
  unaff_x19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(unaff_x19,0);
  uVar8 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar8);
code_r0x029caa44:
  unaff_x30 = &System_String__Equals;
  auVar29 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  goto code_r0x029caa48;
  while( true ) {
    if (puVar14[1] != puVar18[1]) goto code_r0x029ca930;
    if (puVar14[2] != puVar18[2]) {
      lVar22 = 8;
      goto code_r0x029ca930;
    }
    if (puVar14[3] != puVar18[3]) {
      lVar22 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar14[4] != puVar18[4]) {
      lVar22 = 0x10;
      goto code_r0x029ca930;
    }
    puVar14 = puVar14 + 5;
    puVar18 = puVar18 + 5;
    iVar5 = iVar27 + -10;
    bVar4 = iVar27 < 0x14;
    iVar27 = iVar5;
    if (bVar4) break;
code_r0x029ca858:
    if (*puVar14 != *puVar18) {
      lVar22 = 0;
code_r0x029ca930:
      puVar14 = (uint *)(lVar22 + (long)puVar14);
      puVar18 = (uint *)(lVar22 + (long)puVar18);
      uVar12 = (uint)(ushort)*puVar14 - (uint)(ushort)*puVar18;
      if (uVar12 != 0) {
        return (ulong)uVar12;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar5) {
    iVar5 = iVar5 + 2;
    do {
      if (*puVar14 != *puVar18) {
        uVar12 = (*puVar14 & 0xffff) - (*puVar18 & 0xffff);
        if (uVar12 != 0) {
          return (ulong)uVar12;
        }
code_r0x029ca948:
        uVar12 = (uint)*(ushort *)((long)puVar14 + 2);
        uVar17 = (uint)*(ushort *)((long)puVar18 + 2);
        goto code_r0x029ca950;
      }
      puVar14 = puVar14 + 1;
      puVar18 = puVar18 + 1;
      iVar5 = iVar5 + -2;
    } while (2 < iVar5);
  }
  uVar12 = *(uint *)(lVar13 + 0x10);
  uVar17 = *(uint *)(lVar24 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar12 - uVar17);
  while( true ) {
    lVar22 = lVar22 + -2;
    puVar16 = puVar20 + 1;
    puVar23 = puVar20;
    if (lVar22 == 0) break;
code_r0x029cac24:
    puVar20 = puVar16;
    if (0x7f < *puVar23) goto code_r0x029cac8c;
  }
  if (iVar5 != 0) {
    puVar16 = (ushort *)(lVar24 + 0x16);
    puVar23 = (ushort *)(lVar24 + 0x14);
    do {
      puVar20 = puVar16;
      if (0x7f < *puVar23) goto code_r0x029cac8c;
      lVar15 = lVar15 + -2;
      puVar16 = puVar20 + 1;
      puVar23 = puVar20;
    } while (lVar15 != 0);
  }
code_r0x029cac68:
  iVar5 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar13,lVar24);
code_r0x029cabcc:
  return (ulong)(iVar5 == 0);
}



