// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.ObjectCache.<>c__DisplayClass6_0<object, object>

// ============================================================
// RVA: 0x1b192f8 | Core.Containers.ObjectCache.<>c__DisplayClass6_0<object, object>..ctor
// ============================================================

void Core_Containers_ObjectCache___c__DisplayClass6_0_object__object____ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  int iVar1;
  undefined8 *puVar2;
  long extraout_x1;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 extraout_s0;
  undefined1 auVar11 [16];
  
  if (param_5 == 0) {
    auVar11 = func_0x00f78af4();
    lVar5 = auVar11._8_8_;
    if ((lVar5 != 0) && (plVar9 = *(long **)(lVar5 + 0x10), plVar9 != (long *)0x0)) {
      uVar8 = *(undefined8 *)(auVar11._0_8_ + 0x10);
      lVar10 = *(long *)(*(long *)(param_7[3] + 0xc0) + 8);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
        plVar9 = *(long **)(lVar5 + 0x10);
      }
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar10) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x01b193a0;
          }
          piVar7 = piVar7 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(plVar9,lVar10,0);
code_r0x01b193a0:
                    /* WARNING: Could not recover jumptable at 0x01b193b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar9,uVar8,puVar2[1]);
      return;
    }
    lVar5 = func_0x00f78af4();
    if (lVar5 == 0) {
      auVar11 = func_0x00f78af4();
      puVar2 = param_7;
      puVar4 = param_8;
      if (*(long *)(auVar11._0_8_ + 0x10) != 0) {
        puVar4 = (undefined8 *)**(long **)(param_8[3] + 0xc0);
        iVar1 = (*(code *)*puVar4)();
        if (iVar1 == 0) {
          return;
        }
        lVar5 = *(long *)(auVar11._0_8_ + 0x18);
        if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b19444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)**(undefined8 **)(param_8[3] + 0xc0))(lVar5,auVar11._8_8_,param_7);
          return;
        }
      }
      lVar5 = func_0x00f78af4();
      if (lVar5 == 0) {
        lVar5 = func_0x00f78af4();
        if (*(long *)(lVar5 + 0x10) != 0) {
          iVar1 = (**(code **)**(undefined8 **)(*(long *)(extraout_x1 + 0x18) + 0xc0))();
          if (iVar1 == 0) {
            return;
          }
          if (*(long *)(lVar5 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b194f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)**(undefined8 **)(*(long *)(extraout_x1 + 0x18) + 0xc0))
                      (extraout_s0,param_2,param_3,param_4);
            return;
          }
        }
        lVar5 = func_0x00f78af4();
        if (lVar5 == 0) {
          auVar11 = func_0x00f78af4();
          puVar3 = puVar2;
          if (*(long *)(auVar11._0_8_ + 0x10) != 0) {
            puVar3 = (undefined8 *)**(long **)(puVar2[3] + 0xc0);
            iVar1 = (*(code *)*puVar3)();
            if (iVar1 == 0) {
              return;
            }
            lVar5 = *(long *)(auVar11._0_8_ + 0x18);
            if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b19590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)**(undefined8 **)(puVar2[3] + 0xc0))(lVar5,auVar11._8_8_);
              return;
            }
          }
          lVar5 = func_0x00f78af4();
          if (lVar5 == 0) {
            auVar11 = func_0x00f78af4();
            puVar2 = puVar3;
            if (*(long *)(auVar11._0_8_ + 0x10) != 0) {
              iVar1 = (**(code **)**(undefined8 **)(puVar4[3] + 0xc0))();
              if (iVar1 == 0) {
                return;
              }
              lVar5 = *(long *)(auVar11._0_8_ + 0x18);
              if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b1962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)**(undefined8 **)(puVar4[3] + 0xc0))(lVar5,auVar11._8_8_,puVar3);
                return;
              }
            }
            lVar5 = func_0x00f78af4();
            if (lVar5 == 0) {
              auVar11 = func_0x00f78af4();
              if (*(long *)(auVar11._0_8_ + 0x10) != 0) {
                iVar1 = (**(code **)**(undefined8 **)(puVar2[3] + 0xc0))();
                if (iVar1 == 0) {
                  return;
                }
                lVar5 = *(long *)(auVar11._0_8_ + 0x18);
                if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b196c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)**(undefined8 **)(puVar2[3] + 0xc0))(lVar5,auVar11._8_8_);
                  return;
                }
              }
              lVar5 = func_0x00f78af4();
              if (lVar5 == 0) {
                auVar11 = func_0x00f78af4();
                plVar9 = *(long **)(auVar11._0_8_ + 0x10);
                if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01b19714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar9 + 0x2e8))
                            (plVar9,auVar11._8_8_,0,*(undefined8 *)(*plVar9 + 0x2f0));
                  return;
                }
                lVar5 = func_0x00f78af4();
                if (lVar5 == 0) {
                  lVar5 = func_0x00f78af4();
                  if ((bRam0000000003eb6ad8 & 1) == 0) {
                    func_0x00f78a20(0x3d220f0);
                    bRam0000000003eb6ad8 = 1;
                  }
                  plVar9 = *(long **)(lVar5 + 0x10);
                  if (plVar9 == (long *)0x0) {
                    return;
                  }
                  lVar5 = *plVar9;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                        goto code_r0x01b197cc;
                      }
                      piVar7 = piVar7 + 4;
                      uVar6 = uVar6 - 1;
                    } while (uVar6 != 0);
                  }
                  puVar2 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01b197cc:
                    /* WARNING: Could not recover jumptable at 0x01b197dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar2)(plVar9,puVar2[1]);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x1b19310 | Core.Containers.ObjectCache.<>c__DisplayClass6_0<object, object>.<TryGet>b__0
// ============================================================

void Core_Containers_ObjectCache___c__DisplayClass6_0_object__object____TryGet_b__0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6,undefined8 *param_7,undefined8 *param_8)

{
  int iVar1;
  undefined8 *puVar2;
  long extraout_x1;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 extraout_s0;
  undefined1 auVar11 [16];
  
  if ((param_6 == 0) || (plVar9 = *(long **)(param_6 + 0x10), plVar9 == (long *)0x0)) {
    lVar10 = func_0x00f78af4();
    if (lVar10 == 0) {
      auVar11 = func_0x00f78af4();
      puVar2 = param_7;
      puVar4 = param_8;
      if (*(long *)(auVar11._0_8_ + 0x10) != 0) {
        puVar4 = (undefined8 *)**(long **)(param_8[3] + 0xc0);
        iVar1 = (*(code *)*puVar4)();
        if (iVar1 == 0) {
          return;
        }
        lVar10 = *(long *)(auVar11._0_8_ + 0x18);
        if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b19444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)**(undefined8 **)(param_8[3] + 0xc0))(lVar10,auVar11._8_8_,param_7);
          return;
        }
      }
      lVar10 = func_0x00f78af4();
      if (lVar10 == 0) {
        lVar10 = func_0x00f78af4();
        if (*(long *)(lVar10 + 0x10) != 0) {
          iVar1 = (**(code **)**(undefined8 **)(*(long *)(extraout_x1 + 0x18) + 0xc0))();
          if (iVar1 == 0) {
            return;
          }
          if (*(long *)(lVar10 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b194f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)**(undefined8 **)(*(long *)(extraout_x1 + 0x18) + 0xc0))
                      (extraout_s0,param_2,param_3,param_4);
            return;
          }
        }
        lVar10 = func_0x00f78af4();
        if (lVar10 == 0) {
          auVar11 = func_0x00f78af4();
          puVar3 = puVar2;
          if (*(long *)(auVar11._0_8_ + 0x10) != 0) {
            puVar3 = (undefined8 *)**(long **)(puVar2[3] + 0xc0);
            iVar1 = (*(code *)*puVar3)();
            if (iVar1 == 0) {
              return;
            }
            lVar10 = *(long *)(auVar11._0_8_ + 0x18);
            if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b19590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)**(undefined8 **)(puVar2[3] + 0xc0))(lVar10,auVar11._8_8_);
              return;
            }
          }
          lVar10 = func_0x00f78af4();
          if (lVar10 == 0) {
            auVar11 = func_0x00f78af4();
            puVar2 = puVar3;
            if (*(long *)(auVar11._0_8_ + 0x10) != 0) {
              iVar1 = (**(code **)**(undefined8 **)(puVar4[3] + 0xc0))();
              if (iVar1 == 0) {
                return;
              }
              lVar10 = *(long *)(auVar11._0_8_ + 0x18);
              if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b1962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)**(undefined8 **)(puVar4[3] + 0xc0))(lVar10,auVar11._8_8_,puVar3);
                return;
              }
            }
            lVar10 = func_0x00f78af4();
            if (lVar10 == 0) {
              auVar11 = func_0x00f78af4();
              if (*(long *)(auVar11._0_8_ + 0x10) != 0) {
                iVar1 = (**(code **)**(undefined8 **)(puVar2[3] + 0xc0))();
                if (iVar1 == 0) {
                  return;
                }
                lVar10 = *(long *)(auVar11._0_8_ + 0x18);
                if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01b196c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)**(undefined8 **)(puVar2[3] + 0xc0))(lVar10,auVar11._8_8_);
                  return;
                }
              }
              lVar10 = func_0x00f78af4();
              if (lVar10 == 0) {
                auVar11 = func_0x00f78af4();
                plVar9 = *(long **)(auVar11._0_8_ + 0x10);
                if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01b19714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar9 + 0x2e8))
                            (plVar9,auVar11._8_8_,0,*(undefined8 *)(*plVar9 + 0x2f0));
                  return;
                }
                lVar10 = func_0x00f78af4();
                if (lVar10 == 0) {
                  lVar10 = func_0x00f78af4();
                  if ((bRam0000000003eb6ad8 & 1) == 0) {
                    func_0x00f78a20(0x3d220f0);
                    bRam0000000003eb6ad8 = 1;
                  }
                  plVar9 = *(long **)(lVar10 + 0x10);
                  if (plVar9 == (long *)0x0) {
                    return;
                  }
                  lVar10 = *plVar9;
                  uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                        puVar2 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
                        goto code_r0x01b197cc;
                      }
                      piVar7 = piVar7 + 4;
                      uVar6 = uVar6 - 1;
                    } while (uVar6 != 0);
                  }
                  puVar2 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01b197cc:
                    /* WARNING: Could not recover jumptable at 0x01b197dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)*puVar2)(plVar9,puVar2[1]);
                  return;
                }
              }
            }
          }
        }
      }
    }
    return;
  }
  uVar8 = *(undefined8 *)(param_5 + 0x10);
  lVar10 = *(long *)(*(long *)(param_7[3] + 0xc0) + 8);
  if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar10);
    plVar9 = *(long **)(param_6 + 0x10);
  }
  lVar5 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar10) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_01b193a0;
      }
      piVar7 = piVar7 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)func_0x00fac1f0(plVar9,lVar10,0);
LAB_01b193a0:
                    /* WARNING: Could not recover jumptable at 0x01b193b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar9,uVar8,puVar2[1]);
  return;
}



