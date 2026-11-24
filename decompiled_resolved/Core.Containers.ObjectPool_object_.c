// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.ObjectPool<object>

// ============================================================
// RVA: 0x26f50a8 | Core.Containers.ObjectPool<object>.get_AvailableObjects
// ============================================================

undefined8 Core_Containers_ObjectPool_object___get_AvailableObjects(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x26f50b0 | Core.Containers.ObjectPool<object>.Init
// ============================================================

ulong Core_Containers_ObjectPool_object___Init
                (long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 *extraout_x1_02;
  long extraout_x1_03;
  dword *pdVar10;
  dword *pdVar11;
  dword *pdVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *unaff_x23;
  undefined4 uVar19;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined8 uVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  long lStack_2b8;
  undefined8 uStack_2b0;
  float fStack_2a8;
  undefined4 uStack_2a4;
  long lStack_2a0;
  undefined8 uStack_298;
  float fStack_290;
  undefined4 uStack_28c;
  long lStack_288;
  undefined8 uStack_280;
  undefined4 uStack_274;
  long lStack_270;
  undefined8 uStack_268;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1c8;
  long lStack_1c0;
  dword *pdStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *****pppppuStack_1a0;
  undefined *puStack_198;
  ulong uStack_188;
  undefined1 ****ppppuStack_180;
  undefined *puStack_178;
  ulong uStack_168;
  undefined1 ***pppuStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  long *plStack_d0;
  dword *pdStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_a8;
  long *plStack_a0;
  float fStack_98;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  *(int *)(param_1 + 0x18) = (int)param_2;
  uVar5 = *param_3;
  uVar20 = param_3[3];
  uVar7 = param_3[2];
  *(undefined8 *)(param_1 + 0x28) = param_3[1];
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar20;
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  lVar16 = **(long **)(*(long *)(param_4 + 0x18) + 0xc0);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  uVar5 = func_0x00f78aec(lVar16);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 8))(uVar5,param_2);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  lVar16 = *(long *)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  uVar5 = func_0x00f78aec(lVar16);
  pdVar10 = *(dword **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x18);
  (**(code **)pdVar10)(uVar5,param_2);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  lVar16 = *(long *)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  uVar5 = func_0x00f78aec(lVar16);
  auVar22 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x28))();
  lVar16 = auVar22._8_8_;
  uVar17 = auVar22._0_8_;
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar3 = 0;
    do {
      if (*(long *)(param_1 + 0x20) == 0) {
LAB_026f5214:
        auVar23 = func_0x00f78af4(0,lVar16);
        plVar8 = auVar23._8_8_;
        auVar22._8_8_ = plVar8;
        auVar22._0_8_ = pdVar10;
        lVar16 = auVar23._0_8_;
        puStack_38 = &Core_Containers_ObjectPool_object___Update;
        uVar17 = 0x3eb8000;
        pdVar11 = pdVar10;
        puStack_40 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb85eb & 1) == 0) {
          func_0x00f78a20(0x3d22458);
          func_0x00f78a20(0x3d22618);
          bRam0000000003eb85eb = 1;
        }
        if (plVar8 == (long *)0x0) goto code_r0x026f53f8;
        lVar13 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 == 0) goto code_r0x026f52ac;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto code_r0x026f5294;
      }
      lVar16 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x30))();
      if (lVar16 == 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_026f5214;
      pdVar10 = *(dword **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x40);
      auVar22 = (**(code **)pdVar10)();
      lVar16 = auVar22._8_8_;
      uVar17 = auVar22._0_8_;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  return uVar17;
  while( true ) {
    piVar15 = piVar15 + 4;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) break;
code_r0x026f5294:
    if (*(long *)(piVar15 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
      puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 4) * 0x10 + 0x138);
      goto code_r0x026f52cc;
    }
  }
code_r0x026f52ac:
  pdVar11 = &MACH_HEADER.cputype;
  puVar6 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x026f52cc:
  uVar19 = (*(code *)*puVar6)(plVar8,puVar6[1]);
  *(undefined4 *)(lVar16 + 0x58) = uVar19;
  if (*(long *)(lVar16 + 0x50) != 0) {
    uVar14 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0x48))();
    uVar1 = (int)uVar14 - 1;
    if (-1 < (int)uVar1) {
      unaff_x23 = (long *)0x0;
      do {
        uVar17 = (ulong)uVar1;
        if (*(long *)(lVar16 + 0x50) == 0) goto code_r0x026f53f8;
        pdVar11 = *(dword **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0x50);
        uVar14 = (**(code **)pdVar11)(&uStack_a8,*(long *)(lVar16 + 0x50),uVar17);
        fVar21 = fStack_98;
        plVar2 = plStack_a0;
        uVar5 = uStack_a8;
        if (plStack_a0 != (long *)0x0) {
          unaff_x23 = plStack_a0;
          if (plStack_a0 == (long *)0x0) goto code_r0x026f53f8;
          lVar13 = *plStack_a0;
          uVar17 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar17 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
                puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto code_r0x026f5398;
              }
              piVar15 = piVar15 + 4;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plStack_a0,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458,2);
code_r0x026f5398:
          pdVar11 = (dword *)puVar6[1];
          uVar14 = (*(code *)*puVar6)(plVar2,plVar8);
          unaff_x23 = plVar2;
        }
        if (fVar21 <= *(float *)(lVar16 + 0x58)) {
          pdVar11 = *(dword **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0x58);
          uVar14 = (**(code **)pdVar11)(lVar16,uVar5);
        }
        uVar1 = uVar1 - 1;
      } while (-1 < (int)uVar1);
    }
    return uVar14;
  }
code_r0x026f53f8:
  auVar23 = func_0x00f78af4();
  lVar9 = auVar23._8_8_;
  lVar18 = auVar23._0_8_;
  puStack_b8 = &Core_Containers_ObjectPool_object___DeInit;
  lVar13 = lVar9;
  plStack_d0 = plVar8;
  pdStack_c8 = pdVar10;
  ppuStack_c0 = &puStack_40;
  if (lVar18 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x60))();
    lVar13 = extraout_x1;
    while (auVar22 = auVar23, *(long *)(lVar18 + 0x40) != 0) {
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x78))();
      if (iVar3 < 1) {
        *(undefined4 *)(lVar18 + 0x18) = 0;
        uVar17 = 0;
        if (*(long *)(lVar18 + 0x10) != 0) {
          uVar17 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x80))();
        }
        *(undefined8 *)(lVar18 + 0x10) = 0;
        return uVar17;
      }
      lVar13 = extraout_x1_00;
      if (*(long *)(lVar18 + 0x40) == 0) break;
      lVar13 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x68))();
      if (*(long *)(lVar18 + 0x38) != 0) {
        pdVar11 = *(dword **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x70);
        (**(code **)pdVar11)();
        lVar13 = extraout_x1_01;
      }
    }
  }
  auVar23 = func_0x00f78af4(0,lVar13);
  puStack_d8 = &Core_Containers_ObjectPool_object___GetNumOfAvailableObjects;
  pppuStack_e0 = &ppuStack_c0;
  if (*(long *)(auVar23._0_8_ + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x026f54e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar17 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar23._8_8_ + 0x18) + 0xc0) + 0x78))
                       ();
    return uVar17;
  }
  auVar23 = func_0x00f78af4();
  puVar6 = auVar23._8_8_;
  lVar13 = auVar23._0_8_;
  puStack_e8 = &Core_Containers_ObjectPool_object___TryAcquire;
  uVar5 = 0x3eb8000;
  pdVar10 = pdVar11;
  uStack_110 = uVar17;
  lStack_108 = lVar16;
  puStack_f0 = (undefined1 *)&pppuStack_e0;
  if ((bRam0000000003eb85ec & 1) == 0) {
    uStack_100 = auVar22._8_8_;
    uStack_f8 = auVar22._0_8_;
    puStack_f0 = (undefined1 *)&pppuStack_e0;
    func_0x00f78a20(0x3d22458);
    auVar22._8_8_ = uStack_100;
    auVar22._0_8_ = uStack_f8;
    bRam0000000003eb85ec = 1;
  }
  uStack_100 = auVar22._8_8_;
  uStack_f8 = auVar22._0_8_;
  if (*(long *)(lVar13 + 0x40) != 0) {
    uVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar11 + 6) + 0xc0) + 0x78))();
    auVar22._8_8_ = uStack_100;
    auVar22._0_8_ = uStack_f8;
    if ((int)uVar5 == 0) {
      *puVar6 = 0;
code_r0x026f5628:
      return (ulong)((int)uVar5 != 0);
    }
    if (*(long *)(lVar13 + 0x40) != 0) {
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar11 + 6) + 0xc0) + 0x68))();
      auVar22._8_8_ = uStack_100;
      auVar22._0_8_ = uStack_f8;
      *puVar6 = uVar7;
      if (*(long *)(lVar13 + 0x48) != 0) {
        pdVar10 = *(dword **)(*(long *)(*(long *)(pdVar11 + 6) + 0xc0) + 0x88);
        (**(code **)pdVar10)(*(long *)(lVar13 + 0x48),uVar7);
        auVar22._8_8_ = uStack_100;
        auVar22._0_8_ = uStack_f8;
        if (*(long *)(lVar13 + 0x28) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar11 + 6) + 0xc0) + 0x90))
                    (*(long *)(lVar13 + 0x28),*puVar6);
          plVar8 = (long *)func_0x00f78adc(*puVar6,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
          if (plVar8 != (long *)0x0) {
            lVar16 = *plVar8;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
            if (uVar17 != 0) {
              piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
                  puVar6 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
                  goto code_r0x026f561c;
                }
                piVar15 = piVar15 + 4;
                uVar17 = uVar17 - 1;
              } while (uVar17 != 0);
            }
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458,0);
code_r0x026f561c:
            (*(code *)*puVar6)(plVar8,puVar6[1]);
          }
          goto code_r0x026f5628;
        }
      }
    }
  }
  uStack_100 = auVar22._8_8_;
  uStack_f8 = auVar22._0_8_;
  lVar16 = func_0x00f78af4();
  puStack_118 = &Core_Containers_ObjectPool_object___TryTimedAcquire;
  ppuStack_120 = &puStack_f0;
  if (lVar16 != 0) {
    uVar17 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0x98))();
    if ((int)uVar17 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0xa0))
                (extraout_s0,lVar16,*extraout_x1_02);
    }
    return uVar17;
  }
  auVar22 = func_0x00f78af4();
  puStack_158 = &Core_Containers_ObjectPool_object___Acquire;
  uStack_168 = 0;
  pppuStack_160 = &ppuStack_120;
  if (auVar22._0_8_ != 0) {
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar22._8_8_ + 0x18) + 0xc0) + 0x98))
                      (auVar22._0_8_,&uStack_168);
    if (iVar3 == 0) {
      uStack_168 = 0;
    }
    return uStack_168;
  }
  auVar22 = func_0x00f78af4();
  puStack_178 = &Core_Containers_ObjectPool_object___TimedAcquire;
  uStack_188 = 0;
  ppppuStack_180 = &pppuStack_160;
  if (auVar22._0_8_ != 0) {
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar22._8_8_ + 0x18) + 0xc0) + 0xa8))
                      (auVar22._0_8_,&uStack_188);
    if (iVar3 == 0) {
      uStack_188 = 0;
    }
    return uStack_188;
  }
  auVar22 = func_0x00f78af4();
  lVar18 = auVar22._8_8_;
  lVar16 = auVar22._0_8_;
  puStack_198 = &Core_Containers_ObjectPool_object___Return;
  pdVar12 = pdVar10;
  plStack_1c8 = unaff_x23;
  pdStack_1b8 = pdVar11;
  uStack_1a8 = uVar5;
  pppppuStack_1a0 = &ppppuStack_180;
  if ((bRam0000000003eb85ed & 1) == 0) {
    lStack_1c0 = lVar13;
    puStack_1b0 = puVar6;
    func_0x00f78a20(0x3d22458);
    auVar23._8_8_ = puStack_1b0;
    auVar23._0_8_ = lStack_1c0;
    bRam0000000003eb85ed = 1;
  }
  puStack_1b0 = auVar23._8_8_;
  lStack_1c0 = auVar23._0_8_;
  if (*(long *)(lVar16 + 0x48) != 0) {
    pdVar12 = *(dword **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0xb0);
    uVar5 = (**(code **)pdVar12)(*(long *)(lVar16 + 0x48),lVar18);
    auVar23._8_8_ = puStack_1b0;
    auVar23._0_8_ = lStack_1c0;
    if ((int)uVar5 == -1) {
code_r0x026f5930:
      return (ulong)((int)uVar5 != -1);
    }
    if (*(long *)(lVar16 + 0x30) != 0) {
      pdVar12 = *(dword **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0xb8);
      (**(code **)pdVar12)(*(long *)(lVar16 + 0x30),lVar18);
      plVar8 = (long *)func_0x00f78adc(lVar18,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
      if (plVar8 != (long *)0x0) {
        lVar13 = *plVar8;
        uVar17 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar17 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
              puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto code_r0x026f5850;
            }
            piVar15 = piVar15 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        pdVar12 = (dword *)((long)&MACH_HEADER.magic + 1);
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x026f5850:
        (*(code *)*puVar6)(plVar8,puVar6[1]);
      }
      auVar23._8_8_ = puStack_1b0;
      auVar23._0_8_ = lStack_1c0;
      if (*(long *)(lVar16 + 0x40) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0x40))
                  (*(long *)(lVar16 + 0x40),lVar18);
        pdVar12 = *(dword **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0xc0);
        (**(code **)pdVar12)(*(undefined8 *)(lVar16 + 0x48),uVar5);
        auVar23._8_8_ = puStack_1b0;
        auVar23._0_8_ = lStack_1c0;
        if (*(long *)(lVar16 + 0x50) != 0) {
          iVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0x48))();
          do {
            auVar23._8_8_ = puStack_1b0;
            auVar23._0_8_ = lStack_1c0;
            iVar3 = iVar3 + -1;
            if (iVar3 < 0) goto code_r0x026f5930;
            if (*(long *)(lVar16 + 0x50) == 0) goto code_r0x026f5950;
            pdVar12 = *(dword **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0x50);
            (**(code **)pdVar12)(&lStack_1f8,*(long *)(lVar16 + 0x50),iVar3);
            auVar23._8_8_ = puStack_1b0;
            auVar23._0_8_ = lStack_1c0;
            uStack_1d8 = uStack_1e8;
            uStack_1e0 = uStack_1f0;
          } while (lStack_1f8 != lVar18);
          if (*(long *)(lVar16 + 0x50) != 0) {
            uStack_200 = uStack_1e8;
            uStack_208 = uStack_1f0;
            lStack_210 = lVar18;
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 200))
                      (*(long *)(lVar16 + 0x50),&lStack_210,
                       *(undefined8 *)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 200));
            goto code_r0x026f5930;
          }
        }
      }
    }
  }
code_r0x026f5950:
  puStack_1b0 = auVar23._8_8_;
  lStack_1c0 = auVar23._0_8_;
  lVar16 = func_0x00f78af4();
  if ((bRam0000000003eb85ee & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ee = 1;
  }
  if (*(long *)(lVar16 + 0x50) != 0) {
    iVar3 = 0;
    fVar21 = *(float *)(lVar16 + 0x58) + extraout_s0_00;
    do {
      iVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar12 + 6) + 0xc0) + 0x48))();
      if (iVar4 <= iVar3) {
        uStack_2b0 = func_0x00f78adc(extraout_x1_03,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
        if (*(long *)(lVar16 + 0x50) != 0) {
          uStack_2a4 = 0;
          lStack_2b8 = extraout_x1_03;
          fStack_2a8 = fVar21;
          uVar17 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar12 + 6) + 0xc0) + 0xd8))
                             (*(long *)(lVar16 + 0x50),&lStack_2b8,
                              *(undefined8 *)(*(long *)(*(long *)(pdVar12 + 6) + 0xc0) + 0xd8));
          return uVar17;
        }
        break;
      }
      if (*(long *)(lVar16 + 0x50) == 0) break;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar12 + 6) + 0xc0) + 0x50))
                (&lStack_288,*(long *)(lVar16 + 0x50),iVar3);
      if (lStack_288 == extraout_x1_03) {
        if (*(long *)(lVar16 + 0x50) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar12 + 6) + 0xc0) + 0x50))
                    (&lStack_288,*(long *)(lVar16 + 0x50),iVar3);
          uStack_268 = uStack_280;
          lStack_270 = lStack_288;
          if (*(long *)(lVar16 + 0x50) != 0) {
            uStack_298 = uStack_280;
            lStack_2a0 = lStack_288;
            uStack_28c = uStack_274;
            fStack_290 = fVar21;
            uVar17 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar12 + 6) + 0xc0) + 0xd0))
                               (*(long *)(lVar16 + 0x50),iVar3,&lStack_2a0,
                                *(undefined8 *)(*(long *)(*(long *)(pdVar12 + 6) + 0xc0) + 0xd0));
            return uVar17;
          }
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (*(long *)(lVar16 + 0x50) != 0);
  }
  auVar22 = func_0x00f78af4();
  lVar13 = auVar22._8_8_;
  lVar16 = auVar22._0_8_;
  if (*(long *)(lVar16 + 0x48) != 0) {
    uVar17 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar13 + 0x18) + 0xc0) + 0xe0))();
    while (*(long *)(lVar16 + 0x48) != 0) {
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar13 + 0x18) + 0xc0) + 0xe0))();
      if (iVar3 < 1) {
        return uVar17;
      }
      lVar18 = *(long *)(lVar16 + 0x48);
      if (lVar18 == 0) break;
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar13 + 0x18) + 0xc0) + 0xe0))
                        (lVar18);
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar13 + 0x18) + 0xc0) + 0xe8))
                        (lVar18,iVar3 + -1);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar13 + 0x18) + 0xc0) + 0x58))(lVar16,uVar5);
    }
  }
  uVar17 = func_0x00f78af4();
  if (uVar17 != 0) {
    return uVar17;
  }
  lVar16 = func_0x00f78af4();
  return (ulong)*(uint *)(lVar16 + 0x2c);
}



// ============================================================
// RVA: 0x26f5218 | Core.Containers.ObjectPool<object>.Update
// ============================================================

ulong Core_Containers_ObjectPool_object___Update(long param_1,long *param_2,dword *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 *extraout_x1_02;
  long extraout_x1_03;
  dword *pdVar8;
  dword *pdVar9;
  dword *pdVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long *unaff_x23;
  undefined4 uVar17;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  long lStack_288;
  undefined8 uStack_280;
  float fStack_278;
  undefined4 uStack_274;
  long lStack_270;
  undefined8 uStack_268;
  float fStack_260;
  undefined4 uStack_25c;
  long lStack_258;
  undefined8 uStack_250;
  undefined4 uStack_244;
  long lStack_240;
  undefined8 uStack_238;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_198;
  long lStack_190;
  dword *pdStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined1 *****pppppuStack_170;
  undefined *puStack_168;
  ulong uStack_158;
  undefined1 ****ppppuStack_150;
  undefined *puStack_148;
  ulong uStack_138;
  undefined1 ***pppuStack_130;
  undefined *puStack_128;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  dword *pdStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  long *plStack_70;
  float fStack_68;
  
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = param_3;
  uVar15 = 0x3eb8000;
  pdVar8 = param_3;
  if ((bRam0000000003eb85eb & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb85eb = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar11 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
          goto LAB_026f52cc;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    pdVar8 = &MACH_HEADER.cputype;
    puVar4 = (undefined8 *)func_0x00fac1f0(param_2);
LAB_026f52cc:
    uVar17 = (*(code *)*puVar4)(param_2,puVar4[1]);
    *(undefined4 *)(param_1 + 0x58) = uVar17;
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar12 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 6) + 0xc0) + 0x48))();
      uVar1 = (int)uVar12 - 1;
      if (-1 < (int)uVar1) {
        unaff_x23 = (long *)0x0;
        do {
          uVar15 = (ulong)uVar1;
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_026f53f8;
          pdVar8 = *(dword **)(*(long *)(*(long *)(param_3 + 6) + 0xc0) + 0x50);
          uVar12 = (**(code **)pdVar8)(&uStack_78,*(long *)(param_1 + 0x50),uVar15);
          fVar18 = fStack_68;
          plVar6 = plStack_70;
          uVar14 = uStack_78;
          if (plStack_70 != (long *)0x0) {
            unaff_x23 = plStack_70;
            if (plStack_70 == (long *)0x0) goto LAB_026f53f8;
            lVar11 = *plStack_70;
            uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar15 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
                  puVar4 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                  goto code_r0x026f5398;
                }
                piVar13 = piVar13 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar4 = (undefined8 *)func_0x00fac1f0(plStack_70,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458,2);
code_r0x026f5398:
            pdVar8 = (dword *)puVar4[1];
            uVar12 = (*(code *)*puVar4)(plVar6,param_2);
            unaff_x23 = plVar6;
          }
          if (fVar18 <= *(float *)(param_1 + 0x58)) {
            pdVar8 = *(dword **)(*(long *)(*(long *)(param_3 + 6) + 0xc0) + 0x58);
            uVar12 = (**(code **)pdVar8)(param_1,uVar14);
          }
          uVar1 = uVar1 - 1;
        } while (-1 < (int)uVar1);
      }
      return uVar12;
    }
  }
LAB_026f53f8:
  auVar19 = func_0x00f78af4();
  lVar16 = auVar19._8_8_;
  lVar7 = auVar19._0_8_;
  puStack_88 = &Core_Containers_ObjectPool_object___DeInit;
  lVar11 = lVar16;
  plStack_a0 = param_2;
  pdStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  if (lVar7 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar16 + 0x18) + 0xc0) + 0x60))();
    lVar11 = extraout_x1;
    while (auVar20 = auVar19, *(long *)(lVar7 + 0x40) != 0) {
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar16 + 0x18) + 0xc0) + 0x78))();
      if (iVar2 < 1) {
        *(undefined4 *)(lVar7 + 0x18) = 0;
        uVar15 = 0;
        if (*(long *)(lVar7 + 0x10) != 0) {
          uVar15 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar16 + 0x18) + 0xc0) + 0x80))()
          ;
        }
        *(undefined8 *)(lVar7 + 0x10) = 0;
        return uVar15;
      }
      lVar11 = extraout_x1_00;
      if (*(long *)(lVar7 + 0x40) == 0) break;
      lVar11 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar16 + 0x18) + 0xc0) + 0x68))();
      if (*(long *)(lVar7 + 0x38) != 0) {
        pdVar8 = *(dword **)(*(long *)(*(long *)(lVar16 + 0x18) + 0xc0) + 0x70);
        (**(code **)pdVar8)();
        lVar11 = extraout_x1_01;
      }
    }
  }
  auVar19 = func_0x00f78af4(0,lVar11);
  puStack_a8 = &Core_Containers_ObjectPool_object___GetNumOfAvailableObjects;
  ppuStack_b0 = &puStack_90;
  if (*(long *)(auVar19._0_8_ + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x026f54e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar15 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar19._8_8_ + 0x18) + 0xc0) + 0x78))
                       ();
    return uVar15;
  }
  auVar19 = func_0x00f78af4();
  puVar4 = auVar19._8_8_;
  lVar11 = auVar19._0_8_;
  puStack_b8 = &Core_Containers_ObjectPool_object___TryAcquire;
  uVar14 = 0x3eb8000;
  pdVar9 = pdVar8;
  uStack_e0 = uVar15;
  lStack_d8 = param_1;
  puStack_c0 = (undefined1 *)&ppuStack_b0;
  if ((bRam0000000003eb85ec & 1) == 0) {
    uStack_d0 = auVar20._8_8_;
    uStack_c8 = auVar20._0_8_;
    puStack_c0 = (undefined1 *)&ppuStack_b0;
    func_0x00f78a20(0x3d22458);
    auVar20._8_8_ = uStack_d0;
    auVar20._0_8_ = uStack_c8;
    bRam0000000003eb85ec = 1;
  }
  uStack_d0 = auVar20._8_8_;
  uStack_c8 = auVar20._0_8_;
  if (*(long *)(lVar11 + 0x40) != 0) {
    uVar14 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar8 + 6) + 0xc0) + 0x78))();
    auVar20._8_8_ = uStack_d0;
    auVar20._0_8_ = uStack_c8;
    if ((int)uVar14 == 0) {
      *puVar4 = 0;
code_r0x026f5628:
      return (ulong)((int)uVar14 != 0);
    }
    if (*(long *)(lVar11 + 0x40) != 0) {
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar8 + 6) + 0xc0) + 0x68))();
      auVar20._8_8_ = uStack_d0;
      auVar20._0_8_ = uStack_c8;
      *puVar4 = uVar5;
      if (*(long *)(lVar11 + 0x48) != 0) {
        pdVar9 = *(dword **)(*(long *)(*(long *)(pdVar8 + 6) + 0xc0) + 0x88);
        (**(code **)pdVar9)(*(long *)(lVar11 + 0x48),uVar5);
        auVar20._8_8_ = uStack_d0;
        auVar20._0_8_ = uStack_c8;
        if (*(long *)(lVar11 + 0x28) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar8 + 6) + 0xc0) + 0x90))
                    (*(long *)(lVar11 + 0x28),*puVar4);
          plVar6 = (long *)func_0x00f78adc(*puVar4,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
          if (plVar6 != (long *)0x0) {
            lVar11 = *plVar6;
            uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar15 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
                  puVar4 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto code_r0x026f561c;
                }
                piVar13 = piVar13 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar4 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458,0);
code_r0x026f561c:
            (*(code *)*puVar4)(plVar6,puVar4[1]);
          }
          goto code_r0x026f5628;
        }
      }
    }
  }
  uStack_d0 = auVar20._8_8_;
  uStack_c8 = auVar20._0_8_;
  lVar7 = func_0x00f78af4();
  puStack_e8 = &Core_Containers_ObjectPool_object___TryTimedAcquire;
  ppuStack_f0 = &puStack_c0;
  if (lVar7 != 0) {
    uVar15 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar9 + 6) + 0xc0) + 0x98))();
    if ((int)uVar15 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar9 + 6) + 0xc0) + 0xa0))
                (extraout_s0,lVar7,*extraout_x1_02);
    }
    return uVar15;
  }
  auVar20 = func_0x00f78af4();
  puStack_128 = &Core_Containers_ObjectPool_object___Acquire;
  uStack_138 = 0;
  pppuStack_130 = &ppuStack_f0;
  if (auVar20._0_8_ != 0) {
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar20._8_8_ + 0x18) + 0xc0) + 0x98))
                      (auVar20._0_8_,&uStack_138);
    if (iVar2 == 0) {
      uStack_138 = 0;
    }
    return uStack_138;
  }
  auVar20 = func_0x00f78af4();
  puStack_148 = &Core_Containers_ObjectPool_object___TimedAcquire;
  uStack_158 = 0;
  ppppuStack_150 = &pppuStack_130;
  if (auVar20._0_8_ != 0) {
    iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar20._8_8_ + 0x18) + 0xc0) + 0xa8))
                      (auVar20._0_8_,&uStack_158);
    if (iVar2 == 0) {
      uStack_158 = 0;
    }
    return uStack_158;
  }
  auVar20 = func_0x00f78af4();
  lVar16 = auVar20._8_8_;
  lVar7 = auVar20._0_8_;
  puStack_168 = &Core_Containers_ObjectPool_object___Return;
  pdVar10 = pdVar9;
  plStack_198 = unaff_x23;
  pdStack_188 = pdVar8;
  uStack_178 = uVar14;
  pppppuStack_170 = &ppppuStack_150;
  if ((bRam0000000003eb85ed & 1) == 0) {
    lStack_190 = lVar11;
    puStack_180 = puVar4;
    func_0x00f78a20(0x3d22458);
    auVar19._8_8_ = puStack_180;
    auVar19._0_8_ = lStack_190;
    bRam0000000003eb85ed = 1;
  }
  puStack_180 = auVar19._8_8_;
  lStack_190 = auVar19._0_8_;
  if (*(long *)(lVar7 + 0x48) != 0) {
    pdVar10 = *(dword **)(*(long *)(*(long *)(pdVar9 + 6) + 0xc0) + 0xb0);
    uVar14 = (**(code **)pdVar10)(*(long *)(lVar7 + 0x48),lVar16);
    auVar19._8_8_ = puStack_180;
    auVar19._0_8_ = lStack_190;
    if ((int)uVar14 == -1) {
code_r0x026f5930:
      return (ulong)((int)uVar14 != -1);
    }
    if (*(long *)(lVar7 + 0x30) != 0) {
      pdVar10 = *(dword **)(*(long *)(*(long *)(pdVar9 + 6) + 0xc0) + 0xb8);
      (**(code **)pdVar10)(*(long *)(lVar7 + 0x30),lVar16);
      plVar6 = (long *)func_0x00f78adc(lVar16,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
      if (plVar6 != (long *)0x0) {
        lVar11 = *plVar6;
        uVar15 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar15 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
              puVar4 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto code_r0x026f5850;
            }
            piVar13 = piVar13 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar6);
code_r0x026f5850:
        (*(code *)*puVar4)(plVar6,puVar4[1]);
      }
      auVar19._8_8_ = puStack_180;
      auVar19._0_8_ = lStack_190;
      if (*(long *)(lVar7 + 0x40) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar9 + 6) + 0xc0) + 0x40))
                  (*(long *)(lVar7 + 0x40),lVar16);
        pdVar10 = *(dword **)(*(long *)(*(long *)(pdVar9 + 6) + 0xc0) + 0xc0);
        (**(code **)pdVar10)(*(undefined8 *)(lVar7 + 0x48),uVar14);
        auVar19._8_8_ = puStack_180;
        auVar19._0_8_ = lStack_190;
        if (*(long *)(lVar7 + 0x50) != 0) {
          iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar9 + 6) + 0xc0) + 0x48))();
          do {
            auVar19._8_8_ = puStack_180;
            auVar19._0_8_ = lStack_190;
            iVar2 = iVar2 + -1;
            if (iVar2 < 0) goto code_r0x026f5930;
            if (*(long *)(lVar7 + 0x50) == 0) goto code_r0x026f5950;
            pdVar10 = *(dword **)(*(long *)(*(long *)(pdVar9 + 6) + 0xc0) + 0x50);
            (**(code **)pdVar10)(&lStack_1c8,*(long *)(lVar7 + 0x50),iVar2);
            auVar19._8_8_ = puStack_180;
            auVar19._0_8_ = lStack_190;
            uStack_1a8 = uStack_1b8;
            uStack_1b0 = uStack_1c0;
          } while (lStack_1c8 != lVar16);
          if (*(long *)(lVar7 + 0x50) != 0) {
            uStack_1d0 = uStack_1b8;
            uStack_1d8 = uStack_1c0;
            lStack_1e0 = lVar16;
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar9 + 6) + 0xc0) + 200))
                      (*(long *)(lVar7 + 0x50),&lStack_1e0,
                       *(undefined8 *)(*(long *)(*(long *)(pdVar9 + 6) + 0xc0) + 200));
            goto code_r0x026f5930;
          }
        }
      }
    }
  }
code_r0x026f5950:
  puStack_180 = auVar19._8_8_;
  lStack_190 = auVar19._0_8_;
  lVar11 = func_0x00f78af4();
  if ((bRam0000000003eb85ee & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ee = 1;
  }
  if (*(long *)(lVar11 + 0x50) != 0) {
    iVar2 = 0;
    fVar18 = *(float *)(lVar11 + 0x58) + extraout_s0_00;
    do {
      iVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0x48))();
      if (iVar3 <= iVar2) {
        uStack_280 = func_0x00f78adc(extraout_x1_03,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
        if (*(long *)(lVar11 + 0x50) != 0) {
          uStack_274 = 0;
          lStack_288 = extraout_x1_03;
          fStack_278 = fVar18;
          uVar15 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0xd8))
                             (*(long *)(lVar11 + 0x50),&lStack_288,
                              *(undefined8 *)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0xd8));
          return uVar15;
        }
        break;
      }
      if (*(long *)(lVar11 + 0x50) == 0) break;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0x50))
                (&lStack_258,*(long *)(lVar11 + 0x50),iVar2);
      if (lStack_258 == extraout_x1_03) {
        if (*(long *)(lVar11 + 0x50) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0x50))
                    (&lStack_258,*(long *)(lVar11 + 0x50),iVar2);
          uStack_238 = uStack_250;
          lStack_240 = lStack_258;
          if (*(long *)(lVar11 + 0x50) != 0) {
            uStack_268 = uStack_250;
            lStack_270 = lStack_258;
            uStack_25c = uStack_244;
            fStack_260 = fVar18;
            uVar15 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0xd0))
                               (*(long *)(lVar11 + 0x50),iVar2,&lStack_270,
                                *(undefined8 *)(*(long *)(*(long *)(pdVar10 + 6) + 0xc0) + 0xd0));
            return uVar15;
          }
        }
        break;
      }
      iVar2 = iVar2 + 1;
    } while (*(long *)(lVar11 + 0x50) != 0);
  }
  auVar20 = func_0x00f78af4();
  lVar7 = auVar20._8_8_;
  lVar11 = auVar20._0_8_;
  if (*(long *)(lVar11 + 0x48) != 0) {
    uVar15 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe0))();
    while (*(long *)(lVar11 + 0x48) != 0) {
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe0))();
      if (iVar2 < 1) {
        return uVar15;
      }
      lVar16 = *(long *)(lVar11 + 0x48);
      if (lVar16 == 0) break;
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe0))(lVar16)
      ;
      uVar14 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe8))
                         (lVar16,iVar2 + -1);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x58))(lVar11,uVar14);
    }
  }
  uVar15 = func_0x00f78af4();
  if (uVar15 != 0) {
    return uVar15;
  }
  lVar11 = func_0x00f78af4();
  return (ulong)*(uint *)(lVar11 + 0x2c);
}



// ============================================================
// RVA: 0x26f53fc | Core.Containers.ObjectPool<object>.DeInit
// ============================================================

ulong Core_Containers_ObjectPool_object___DeInit(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  undefined8 *extraout_x1_02;
  long lVar8;
  long extraout_x1_03;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float fVar13;
  undefined1 auVar14 [16];
  long lStack_208;
  undefined8 uStack_200;
  float fStack_1f8;
  undefined4 uStack_1f4;
  long lStack_1f0;
  undefined8 uStack_1e8;
  float fStack_1e0;
  undefined4 uStack_1dc;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c4;
  long lStack_1c0;
  undefined8 uStack_1b8;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_d8;
  undefined1 ****ppppuStack_d0;
  undefined *puStack_c8;
  ulong uStack_b8;
  undefined1 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  lVar3 = param_2;
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x60))();
    lVar3 = extraout_x1;
    while (*(long *)(param_1 + 0x40) != 0) {
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x78))();
      if (iVar1 < 1) {
        *(undefined4 *)(param_1 + 0x18) = 0;
        uVar4 = 0;
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x80))()
          ;
        }
        *(undefined8 *)(param_1 + 0x10) = 0;
        return uVar4;
      }
      lVar3 = extraout_x1_00;
      if (*(long *)(param_1 + 0x40) == 0) break;
      lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x68))();
      if (*(long *)(param_1 + 0x38) != 0) {
        param_3 = *(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x70);
        (*(code *)*param_3)();
        lVar3 = extraout_x1_01;
      }
    }
  }
  auVar14 = func_0x00f78af4(0,lVar3);
  puStack_28 = &Core_Containers_ObjectPool_object___GetNumOfAvailableObjects;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long *)(auVar14._0_8_ + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x026f54e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar14._8_8_ + 0x18) + 0xc0) + 0x78))()
    ;
    return uVar4;
  }
  auVar14 = func_0x00f78af4();
  puVar10 = auVar14._8_8_;
  lVar3 = auVar14._0_8_;
  puStack_38 = &Core_Containers_ObjectPool_object___TryAcquire;
  puVar9 = param_3;
  puStack_40 = (undefined1 *)&puStack_30;
  if ((bRam0000000003eb85ec & 1) == 0) {
    puStack_40 = (undefined1 *)&puStack_30;
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ec = 1;
  }
  if (*(long *)(lVar3 + 0x40) != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x78))();
    if (iVar1 == 0) {
      *puVar10 = 0;
code_r0x026f5628:
      return (ulong)(iVar1 != 0);
    }
    if (*(long *)(lVar3 + 0x40) != 0) {
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x68))();
      *puVar10 = uVar5;
      if (*(long *)(lVar3 + 0x48) != 0) {
        puVar9 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x88);
        (*(code *)*puVar9)(*(long *)(lVar3 + 0x48),uVar5);
        if (*(long *)(lVar3 + 0x28) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x90))
                    (*(long *)(lVar3 + 0x28),*puVar10);
          plVar6 = (long *)func_0x00f78adc(*puVar10,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
          if (plVar6 != (long *)0x0) {
            lVar3 = *plVar6;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
            if (uVar4 != 0) {
              piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
                  puVar9 = (undefined8 *)(lVar3 + (long)*piVar12 * 0x10 + 0x138);
                  goto code_r0x026f561c;
                }
                piVar12 = piVar12 + 4;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458,0);
code_r0x026f561c:
            (*(code *)*puVar9)(plVar6,puVar9[1]);
          }
          goto code_r0x026f5628;
        }
      }
    }
  }
  lVar3 = func_0x00f78af4();
  puStack_68 = &Core_Containers_ObjectPool_object___TryTimedAcquire;
  ppuStack_70 = &puStack_40;
  if (lVar3 != 0) {
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x98))();
    if ((int)uVar4 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0xa0))
                (extraout_s0,lVar3,*extraout_x1_02);
    }
    return uVar4;
  }
  auVar14 = func_0x00f78af4();
  puStack_a8 = &Core_Containers_ObjectPool_object___Acquire;
  uStack_b8 = 0;
  pppuStack_b0 = &ppuStack_70;
  if (auVar14._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar14._8_8_ + 0x18) + 0xc0) + 0x98))
                      (auVar14._0_8_,&uStack_b8);
    if (iVar1 == 0) {
      uStack_b8 = 0;
    }
    return uStack_b8;
  }
  auVar14 = func_0x00f78af4();
  puStack_c8 = &Core_Containers_ObjectPool_object___TimedAcquire;
  uStack_d8 = 0;
  ppppuStack_d0 = &pppuStack_b0;
  if (auVar14._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar14._8_8_ + 0x18) + 0xc0) + 0xa8))
                      (auVar14._0_8_,&uStack_d8);
    if (iVar1 == 0) {
      uStack_d8 = 0;
    }
    return uStack_d8;
  }
  auVar14 = func_0x00f78af4();
  lVar8 = auVar14._8_8_;
  lVar3 = auVar14._0_8_;
  puVar10 = puVar9;
  if ((bRam0000000003eb85ed & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ed = 1;
  }
  if (*(long *)(lVar3 + 0x48) != 0) {
    puVar10 = *(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0xb0);
    uVar5 = (*(code *)*puVar10)(*(long *)(lVar3 + 0x48),lVar8);
    if ((int)uVar5 == -1) {
code_r0x026f5930:
      return (ulong)((int)uVar5 != -1);
    }
    if (*(long *)(lVar3 + 0x30) != 0) {
      puVar10 = *(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0xb8);
      (*(code *)*puVar10)(*(long *)(lVar3 + 0x30),lVar8);
      plVar6 = (long *)func_0x00f78adc(lVar8,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
      if (plVar6 != (long *)0x0) {
        lVar11 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto code_r0x026f5850;
            }
            piVar12 = piVar12 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        puVar10 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar6);
code_r0x026f5850:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
      if (*(long *)(lVar3 + 0x40) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x40))
                  (*(long *)(lVar3 + 0x40),lVar8);
        puVar10 = *(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0xc0);
        (*(code *)*puVar10)(*(undefined8 *)(lVar3 + 0x48),uVar5);
        if (*(long *)(lVar3 + 0x50) != 0) {
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))();
          do {
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) goto code_r0x026f5930;
            if (*(long *)(lVar3 + 0x50) == 0) goto code_r0x026f5950;
            puVar10 = *(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x50);
            (*(code *)*puVar10)(&lStack_148,*(long *)(lVar3 + 0x50),iVar1);
            uStack_128 = uStack_138;
            uStack_130 = uStack_140;
          } while (lStack_148 != lVar8);
          if (*(long *)(lVar3 + 0x50) != 0) {
            uStack_150 = uStack_138;
            uStack_158 = uStack_140;
            lStack_160 = lVar8;
            (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 200))
                      (*(long *)(lVar3 + 0x50),&lStack_160,
                       *(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 200));
            goto code_r0x026f5930;
          }
        }
      }
    }
  }
code_r0x026f5950:
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb85ee & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ee = 1;
  }
  if (*(long *)(lVar3 + 0x50) != 0) {
    iVar1 = 0;
    fVar13 = *(float *)(lVar3 + 0x58) + extraout_s0_00;
    do {
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x48))();
      if (iVar2 <= iVar1) {
        uStack_200 = func_0x00f78adc(extraout_x1_03,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
        if (*(long *)(lVar3 + 0x50) != 0) {
          uStack_1f4 = 0;
          lStack_208 = extraout_x1_03;
          fStack_1f8 = fVar13;
          uVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0xd8))
                            (*(long *)(lVar3 + 0x50),&lStack_208,
                             *(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0xd8));
          return uVar4;
        }
        break;
      }
      if (*(long *)(lVar3 + 0x50) == 0) break;
      (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x50))
                (&lStack_1d8,*(long *)(lVar3 + 0x50),iVar1);
      if (lStack_1d8 == extraout_x1_03) {
        if (*(long *)(lVar3 + 0x50) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x50))
                    (&lStack_1d8,*(long *)(lVar3 + 0x50),iVar1);
          uStack_1b8 = uStack_1d0;
          lStack_1c0 = lStack_1d8;
          if (*(long *)(lVar3 + 0x50) != 0) {
            uStack_1e8 = uStack_1d0;
            lStack_1f0 = lStack_1d8;
            uStack_1dc = uStack_1c4;
            fStack_1e0 = fVar13;
            uVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0xd0))
                              (*(long *)(lVar3 + 0x50),iVar1,&lStack_1f0,
                               *(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0xd0));
            return uVar4;
          }
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (*(long *)(lVar3 + 0x50) != 0);
  }
  auVar14 = func_0x00f78af4();
  lVar8 = auVar14._8_8_;
  lVar3 = auVar14._0_8_;
  if (*(long *)(lVar3 + 0x48) != 0) {
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0xe0))();
    while (*(long *)(lVar3 + 0x48) != 0) {
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0xe0))();
      if (iVar1 < 1) {
        return uVar4;
      }
      lVar11 = *(long *)(lVar3 + 0x48);
      if (lVar11 == 0) break;
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0xe0))(lVar11)
      ;
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0xe8))
                        (lVar11,iVar1 + -1);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x58))(lVar3,uVar5);
    }
  }
  uVar4 = func_0x00f78af4();
  if (uVar4 != 0) {
    return uVar4;
  }
  lVar3 = func_0x00f78af4();
  return (ulong)*(uint *)(lVar3 + 0x2c);
}



// ============================================================
// RVA: 0x26f54c0 | Core.Containers.ObjectPool<object>.GetNumOfAvailableObjects
// ============================================================

ulong Core_Containers_ObjectPool_object___GetNumOfAvailableObjects
                (long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x1;
  long lVar7;
  long extraout_x1_00;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float fVar13;
  undefined1 auVar14 [16];
  long lStack_1e8;
  undefined8 uStack_1e0;
  float fStack_1d8;
  undefined4 uStack_1d4;
  long lStack_1d0;
  undefined8 uStack_1c8;
  float fStack_1c0;
  undefined4 uStack_1bc;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a4;
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_b8;
  undefined1 ****ppppuStack_b0;
  undefined *puStack_a8;
  ulong uStack_98;
  undefined1 ***pppuStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x026f54e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x78))();
    return uVar3;
  }
  auVar14 = func_0x00f78af4();
  puVar9 = auVar14._8_8_;
  lVar10 = auVar14._0_8_;
  puStack_18 = &Core_Containers_ObjectPool_object___TryAcquire;
  puVar8 = param_3;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb85ec & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ec = 1;
  }
  if (*(long *)(lVar10 + 0x40) != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x78))();
    if (iVar1 == 0) {
      *puVar9 = 0;
code_r0x026f5628:
      return (ulong)(iVar1 != 0);
    }
    if (*(long *)(lVar10 + 0x40) != 0) {
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x68))();
      *puVar9 = uVar4;
      if (*(long *)(lVar10 + 0x48) != 0) {
        puVar8 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x88);
        (*(code *)*puVar8)(*(long *)(lVar10 + 0x48),uVar4);
        if (*(long *)(lVar10 + 0x28) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x90))
                    (*(long *)(lVar10 + 0x28),*puVar9);
          plVar5 = (long *)func_0x00f78adc(*puVar9,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
          if (plVar5 != (long *)0x0) {
            lVar10 = *plVar5;
            uVar3 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar3 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto code_r0x026f561c;
                }
                piVar12 = piVar12 + 4;
                uVar3 = uVar3 - 1;
              } while (uVar3 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458,0);
code_r0x026f561c:
            (*(code *)*puVar8)(plVar5,puVar8[1]);
          }
          goto code_r0x026f5628;
        }
      }
    }
  }
  lVar10 = func_0x00f78af4();
  puStack_48 = &Core_Containers_ObjectPool_object___TryTimedAcquire;
  ppuStack_50 = &puStack_20;
  if (lVar10 != 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x98))();
    if ((int)uVar3 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0xa0))
                (extraout_s0,lVar10,*extraout_x1);
    }
    return uVar3;
  }
  auVar14 = func_0x00f78af4();
  puStack_88 = &Core_Containers_ObjectPool_object___Acquire;
  uStack_98 = 0;
  pppuStack_90 = &ppuStack_50;
  if (auVar14._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar14._8_8_ + 0x18) + 0xc0) + 0x98))
                      (auVar14._0_8_,&uStack_98);
    if (iVar1 == 0) {
      uStack_98 = 0;
    }
    return uStack_98;
  }
  auVar14 = func_0x00f78af4();
  puStack_a8 = &Core_Containers_ObjectPool_object___TimedAcquire;
  uStack_b8 = 0;
  ppppuStack_b0 = &pppuStack_90;
  if (auVar14._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar14._8_8_ + 0x18) + 0xc0) + 0xa8))
                      (auVar14._0_8_,&uStack_b8);
    if (iVar1 == 0) {
      uStack_b8 = 0;
    }
    return uStack_b8;
  }
  auVar14 = func_0x00f78af4();
  lVar7 = auVar14._8_8_;
  lVar10 = auVar14._0_8_;
  puVar9 = puVar8;
  if ((bRam0000000003eb85ed & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ed = 1;
  }
  if (*(long *)(lVar10 + 0x48) != 0) {
    puVar9 = *(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0xb0);
    uVar4 = (*(code *)*puVar9)(*(long *)(lVar10 + 0x48),lVar7);
    if ((int)uVar4 == -1) {
code_r0x026f5930:
      return (ulong)((int)uVar4 != -1);
    }
    if (*(long *)(lVar10 + 0x30) != 0) {
      puVar9 = *(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0xb8);
      (*(code *)*puVar9)(*(long *)(lVar10 + 0x30),lVar7);
      plVar5 = (long *)func_0x00f78adc(lVar7,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
      if (plVar5 != (long *)0x0) {
        lVar11 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar3 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
              puVar6 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto code_r0x026f5850;
            }
            piVar12 = piVar12 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar9 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar5);
code_r0x026f5850:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
      }
      if (*(long *)(lVar10 + 0x40) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x40))
                  (*(long *)(lVar10 + 0x40),lVar7);
        puVar9 = *(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0xc0);
        (*(code *)*puVar9)(*(undefined8 *)(lVar10 + 0x48),uVar4);
        if (*(long *)(lVar10 + 0x50) != 0) {
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x48))();
          do {
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) goto code_r0x026f5930;
            if (*(long *)(lVar10 + 0x50) == 0) goto code_r0x026f5950;
            puVar9 = *(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x50);
            (*(code *)*puVar9)(&lStack_128,*(long *)(lVar10 + 0x50),iVar1);
            uStack_108 = uStack_118;
            uStack_110 = uStack_120;
          } while (lStack_128 != lVar7);
          if (*(long *)(lVar10 + 0x50) != 0) {
            uStack_130 = uStack_118;
            uStack_138 = uStack_120;
            lStack_140 = lVar7;
            (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 200))
                      (*(long *)(lVar10 + 0x50),&lStack_140,
                       *(undefined8 *)(*(long *)(puVar8[3] + 0xc0) + 200));
            goto code_r0x026f5930;
          }
        }
      }
    }
  }
code_r0x026f5950:
  lVar10 = func_0x00f78af4();
  if ((bRam0000000003eb85ee & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ee = 1;
  }
  if (*(long *)(lVar10 + 0x50) != 0) {
    iVar1 = 0;
    fVar13 = *(float *)(lVar10 + 0x58) + extraout_s0_00;
    do {
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))();
      if (iVar2 <= iVar1) {
        uStack_1e0 = func_0x00f78adc(extraout_x1_00,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
        if (*(long *)(lVar10 + 0x50) != 0) {
          uStack_1d4 = 0;
          lStack_1e8 = extraout_x1_00;
          fStack_1d8 = fVar13;
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0xd8))
                            (*(long *)(lVar10 + 0x50),&lStack_1e8,
                             *(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0xd8));
          return uVar3;
        }
        break;
      }
      if (*(long *)(lVar10 + 0x50) == 0) break;
      (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x50))
                (&lStack_1b8,*(long *)(lVar10 + 0x50),iVar1);
      if (lStack_1b8 == extraout_x1_00) {
        if (*(long *)(lVar10 + 0x50) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x50))
                    (&lStack_1b8,*(long *)(lVar10 + 0x50),iVar1);
          uStack_198 = uStack_1b0;
          lStack_1a0 = lStack_1b8;
          if (*(long *)(lVar10 + 0x50) != 0) {
            uStack_1c8 = uStack_1b0;
            lStack_1d0 = lStack_1b8;
            uStack_1bc = uStack_1a4;
            fStack_1c0 = fVar13;
            uVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0xd0))
                              (*(long *)(lVar10 + 0x50),iVar1,&lStack_1d0,
                               *(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0xd0));
            return uVar3;
          }
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (*(long *)(lVar10 + 0x50) != 0);
  }
  auVar14 = func_0x00f78af4();
  lVar7 = auVar14._8_8_;
  lVar10 = auVar14._0_8_;
  if (*(long *)(lVar10 + 0x48) != 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe0))();
    while (*(long *)(lVar10 + 0x48) != 0) {
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe0))();
      if (iVar1 < 1) {
        return uVar3;
      }
      lVar11 = *(long *)(lVar10 + 0x48);
      if (lVar11 == 0) break;
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe0))(lVar11)
      ;
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe8))
                        (lVar11,iVar1 + -1);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x58))(lVar10,uVar4);
    }
  }
  uVar3 = func_0x00f78af4();
  if (uVar3 != 0) {
    return uVar3;
  }
  lVar10 = func_0x00f78af4();
  return (ulong)*(uint *)(lVar10 + 0x2c);
}



// ============================================================
// RVA: 0x26f54ec | Core.Containers.ObjectPool<object>.TryAcquire
// ============================================================

ulong Core_Containers_ObjectPool_object___TryAcquire
                (long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *extraout_x1;
  long lVar6;
  long extraout_x1_00;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float fVar13;
  undefined1 auVar14 [16];
  long lStack_1d8;
  undefined8 uStack_1d0;
  float fStack_1c8;
  undefined4 uStack_1c4;
  long lStack_1c0;
  undefined8 uStack_1b8;
  float fStack_1b0;
  undefined4 uStack_1ac;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_194;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  ulong uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  puVar7 = param_3;
  if ((bRam0000000003eb85ec & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ec = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x78))();
    if (iVar1 == 0) {
      *param_2 = 0;
LAB_026f5628:
      return (ulong)(iVar1 != 0);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x68))();
      *param_2 = uVar3;
      if (*(long *)(param_1 + 0x48) != 0) {
        puVar7 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x88);
        (*(code *)*puVar7)(*(long *)(param_1 + 0x48),uVar3);
        if (*(long *)(param_1 + 0x28) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x90))
                    (*(long *)(param_1 + 0x28),*param_2);
          plVar4 = (long *)func_0x00f78adc(*param_2,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
          if (plVar4 != (long *)0x0) {
            lVar9 = *plVar4;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_026f561c;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)func_0x00fac1f0(plVar4,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458,0);
LAB_026f561c:
            (*(code *)*puVar7)(plVar4,puVar7[1]);
          }
          goto LAB_026f5628;
        }
      }
    }
  }
  lVar9 = func_0x00f78af4();
  puStack_38 = &Core_Containers_ObjectPool_object___TryTimedAcquire;
  puStack_40 = &stack0xfffffffffffffff0;
  if (lVar9 != 0) {
    uVar11 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x98))();
    if ((int)uVar11 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0xa0))
                (extraout_s0,lVar9,*extraout_x1);
    }
    return uVar11;
  }
  auVar14 = func_0x00f78af4();
  puStack_78 = &Core_Containers_ObjectPool_object___Acquire;
  uStack_88 = 0;
  ppuStack_80 = &puStack_40;
  if (auVar14._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar14._8_8_ + 0x18) + 0xc0) + 0x98))
                      (auVar14._0_8_,&uStack_88);
    if (iVar1 == 0) {
      uStack_88 = 0;
    }
    return uStack_88;
  }
  auVar14 = func_0x00f78af4();
  puStack_98 = &Core_Containers_ObjectPool_object___TimedAcquire;
  uStack_a8 = 0;
  pppuStack_a0 = &ppuStack_80;
  if (auVar14._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar14._8_8_ + 0x18) + 0xc0) + 0xa8))
                      (auVar14._0_8_,&uStack_a8);
    if (iVar1 == 0) {
      uStack_a8 = 0;
    }
    return uStack_a8;
  }
  auVar14 = func_0x00f78af4();
  lVar6 = auVar14._8_8_;
  lVar9 = auVar14._0_8_;
  puVar8 = puVar7;
  if ((bRam0000000003eb85ed & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ed = 1;
  }
  if (*(long *)(lVar9 + 0x48) != 0) {
    puVar8 = *(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0xb0);
    uVar3 = (*(code *)*puVar8)(*(long *)(lVar9 + 0x48),lVar6);
    if ((int)uVar3 == -1) {
code_r0x026f5930:
      return (ulong)((int)uVar3 != -1);
    }
    if (*(long *)(lVar9 + 0x30) != 0) {
      puVar8 = *(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0xb8);
      (*(code *)*puVar8)(*(long *)(lVar9 + 0x30),lVar6);
      plVar4 = (long *)func_0x00f78adc(lVar6,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
      if (plVar4 != (long *)0x0) {
        lVar10 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto code_r0x026f5850;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4);
code_r0x026f5850:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
      }
      if (*(long *)(lVar9 + 0x40) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x40))
                  (*(long *)(lVar9 + 0x40),lVar6);
        puVar8 = *(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0xc0);
        (*(code *)*puVar8)(*(undefined8 *)(lVar9 + 0x48),uVar3);
        if (*(long *)(lVar9 + 0x50) != 0) {
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))();
          do {
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) goto code_r0x026f5930;
            if (*(long *)(lVar9 + 0x50) == 0) goto code_r0x026f5950;
            puVar8 = *(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x50);
            (*(code *)*puVar8)(&lStack_118,*(long *)(lVar9 + 0x50),iVar1);
            uStack_f8 = uStack_108;
            uStack_100 = uStack_110;
          } while (lStack_118 != lVar6);
          if (*(long *)(lVar9 + 0x50) != 0) {
            uStack_120 = uStack_108;
            uStack_128 = uStack_110;
            lStack_130 = lVar6;
            (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 200))
                      (*(long *)(lVar9 + 0x50),&lStack_130,
                       *(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 200));
            goto code_r0x026f5930;
          }
        }
      }
    }
  }
code_r0x026f5950:
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb85ee & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ee = 1;
  }
  if (*(long *)(lVar9 + 0x50) != 0) {
    iVar1 = 0;
    fVar13 = *(float *)(lVar9 + 0x58) + extraout_s0_00;
    do {
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x48))();
      if (iVar2 <= iVar1) {
        uStack_1d0 = func_0x00f78adc(extraout_x1_00,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
        if (*(long *)(lVar9 + 0x50) != 0) {
          uStack_1c4 = 0;
          lStack_1d8 = extraout_x1_00;
          fStack_1c8 = fVar13;
          uVar11 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0xd8))
                             (*(long *)(lVar9 + 0x50),&lStack_1d8,
                              *(undefined8 *)(*(long *)(puVar8[3] + 0xc0) + 0xd8));
          return uVar11;
        }
        break;
      }
      if (*(long *)(lVar9 + 0x50) == 0) break;
      (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x50))
                (&lStack_1a8,*(long *)(lVar9 + 0x50),iVar1);
      if (lStack_1a8 == extraout_x1_00) {
        if (*(long *)(lVar9 + 0x50) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x50))
                    (&lStack_1a8,*(long *)(lVar9 + 0x50),iVar1);
          uStack_188 = uStack_1a0;
          lStack_190 = lStack_1a8;
          if (*(long *)(lVar9 + 0x50) != 0) {
            uStack_1b8 = uStack_1a0;
            lStack_1c0 = lStack_1a8;
            uStack_1ac = uStack_194;
            fStack_1b0 = fVar13;
            uVar11 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0xd0))
                               (*(long *)(lVar9 + 0x50),iVar1,&lStack_1c0,
                                *(undefined8 *)(*(long *)(puVar8[3] + 0xc0) + 0xd0));
            return uVar11;
          }
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (*(long *)(lVar9 + 0x50) != 0);
  }
  auVar14 = func_0x00f78af4();
  lVar6 = auVar14._8_8_;
  lVar9 = auVar14._0_8_;
  if (*(long *)(lVar9 + 0x48) != 0) {
    uVar11 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0xe0))();
    while (*(long *)(lVar9 + 0x48) != 0) {
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0xe0))();
      if (iVar1 < 1) {
        return uVar11;
      }
      lVar10 = *(long *)(lVar9 + 0x48);
      if (lVar10 == 0) break;
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0xe0))(lVar10)
      ;
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0xe8))
                        (lVar10,iVar1 + -1);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x58))(lVar9,uVar3);
    }
  }
  uVar11 = func_0x00f78af4();
  if (uVar11 != 0) {
    return uVar11;
  }
  lVar9 = func_0x00f78af4();
  return (ulong)*(uint *)(lVar9 + 0x2c);
}



// ============================================================
// RVA: 0x26f5644 | Core.Containers.ObjectPool<object>.TryTimedAcquire
// ============================================================

ulong Core_Containers_ObjectPool_object___TryTimedAcquire
                (undefined4 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long extraout_x1;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  float extraout_s0;
  float fVar12;
  undefined1 auVar13 [16];
  long lStack_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  undefined4 uStack_194;
  long lStack_190;
  undefined8 uStack_188;
  float fStack_180;
  undefined4 uStack_17c;
  long lStack_178;
  undefined8 uStack_170;
  undefined4 uStack_164;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  ulong uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (param_2 != 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x98))();
    if ((int)uVar3 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0xa0))(param_1,param_2,*param_3);
    }
    return uVar3;
  }
  auVar13 = func_0x00f78af4();
  puStack_48 = &Core_Containers_ObjectPool_object___Acquire;
  uStack_58 = 0;
  puStack_50 = &stack0xfffffffffffffff0;
  if (auVar13._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar13._8_8_ + 0x18) + 0xc0) + 0x98))
                      (auVar13._0_8_,&uStack_58);
    if (iVar1 == 0) {
      uStack_58 = 0;
    }
    return uStack_58;
  }
  auVar13 = func_0x00f78af4();
  puStack_68 = &Core_Containers_ObjectPool_object___TimedAcquire;
  uStack_78 = 0;
  ppuStack_70 = &puStack_50;
  if (auVar13._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar13._8_8_ + 0x18) + 0xc0) + 0xa8))
                      (auVar13._0_8_,&uStack_78);
    if (iVar1 == 0) {
      uStack_78 = 0;
    }
    return uStack_78;
  }
  auVar13 = func_0x00f78af4();
  lVar8 = auVar13._8_8_;
  lVar7 = auVar13._0_8_;
  puVar9 = param_4;
  if ((bRam0000000003eb85ed & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ed = 1;
  }
  if (*(long *)(lVar7 + 0x48) != 0) {
    puVar9 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0xb0);
    uVar4 = (*(code *)*puVar9)(*(long *)(lVar7 + 0x48),lVar8);
    if ((int)uVar4 == -1) {
code_r0x026f5930:
      return (ulong)((int)uVar4 != -1);
    }
    if (*(long *)(lVar7 + 0x30) != 0) {
      puVar9 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0xb8);
      (*(code *)*puVar9)(*(long *)(lVar7 + 0x30),lVar8);
      plVar5 = (long *)func_0x00f78adc(lVar8,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar3 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto code_r0x026f5850;
            }
            piVar11 = piVar11 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar9 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar5);
code_r0x026f5850:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
      }
      if (*(long *)(lVar7 + 0x40) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x40))
                  (*(long *)(lVar7 + 0x40),lVar8);
        puVar9 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0xc0);
        (*(code *)*puVar9)(*(undefined8 *)(lVar7 + 0x48),uVar4);
        if (*(long *)(lVar7 + 0x50) != 0) {
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x48))();
          do {
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) goto code_r0x026f5930;
            if (*(long *)(lVar7 + 0x50) == 0) goto code_r0x026f5950;
            puVar9 = *(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 0x50);
            (*(code *)*puVar9)(&lStack_e8,*(long *)(lVar7 + 0x50),iVar1);
            uStack_c8 = uStack_d8;
            uStack_d0 = uStack_e0;
          } while (lStack_e8 != lVar8);
          if (*(long *)(lVar7 + 0x50) != 0) {
            uStack_f0 = uStack_d8;
            uStack_f8 = uStack_e0;
            lStack_100 = lVar8;
            (*(code *)**(undefined8 **)(*(long *)(param_4[3] + 0xc0) + 200))
                      (*(long *)(lVar7 + 0x50),&lStack_100,
                       *(undefined8 *)(*(long *)(param_4[3] + 0xc0) + 200));
            goto code_r0x026f5930;
          }
        }
      }
    }
  }
code_r0x026f5950:
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb85ee & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ee = 1;
  }
  if (*(long *)(lVar7 + 0x50) != 0) {
    iVar1 = 0;
    fVar12 = *(float *)(lVar7 + 0x58) + extraout_s0;
    do {
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x48))();
      if (iVar2 <= iVar1) {
        uStack_1a0 = func_0x00f78adc(extraout_x1,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
        if (*(long *)(lVar7 + 0x50) != 0) {
          uStack_194 = 0;
          lStack_1a8 = extraout_x1;
          fStack_198 = fVar12;
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0xd8))
                            (*(long *)(lVar7 + 0x50),&lStack_1a8,
                             *(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0xd8));
          return uVar3;
        }
        break;
      }
      if (*(long *)(lVar7 + 0x50) == 0) break;
      (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x50))
                (&lStack_178,*(long *)(lVar7 + 0x50),iVar1);
      if (lStack_178 == extraout_x1) {
        if (*(long *)(lVar7 + 0x50) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0x50))
                    (&lStack_178,*(long *)(lVar7 + 0x50),iVar1);
          uStack_158 = uStack_170;
          lStack_160 = lStack_178;
          if (*(long *)(lVar7 + 0x50) != 0) {
            uStack_188 = uStack_170;
            lStack_190 = lStack_178;
            uStack_17c = uStack_164;
            fStack_180 = fVar12;
            uVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 0xd0))
                              (*(long *)(lVar7 + 0x50),iVar1,&lStack_190,
                               *(undefined8 *)(*(long *)(puVar9[3] + 0xc0) + 0xd0));
            return uVar3;
          }
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (*(long *)(lVar7 + 0x50) != 0);
  }
  auVar13 = func_0x00f78af4();
  lVar8 = auVar13._8_8_;
  lVar7 = auVar13._0_8_;
  if (*(long *)(lVar7 + 0x48) != 0) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0xe0))();
    while (*(long *)(lVar7 + 0x48) != 0) {
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0xe0))();
      if (iVar1 < 1) {
        return uVar3;
      }
      lVar10 = *(long *)(lVar7 + 0x48);
      if (lVar10 == 0) break;
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0xe0))(lVar10)
      ;
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0xe8))
                        (lVar10,iVar1 + -1);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar8 + 0x18) + 0xc0) + 0x58))(lVar7,uVar4);
    }
  }
  uVar3 = func_0x00f78af4();
  if (uVar3 != 0) {
    return uVar3;
  }
  lVar7 = func_0x00f78af4();
  return (ulong)*(uint *)(lVar7 + 0x2c);
}



// ============================================================
// RVA: 0x26f56c4 | Core.Containers.ObjectPool<object>.Acquire
// ============================================================

ulong Core_Containers_ObjectPool_object___Acquire(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long extraout_x1;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  float extraout_s0;
  float fVar12;
  undefined1 auVar13 [16];
  long lStack_168;
  undefined8 uStack_160;
  float fStack_158;
  undefined4 uStack_154;
  long lStack_150;
  undefined8 uStack_148;
  float fStack_140;
  undefined4 uStack_13c;
  long lStack_138;
  undefined8 uStack_130;
  undefined4 uStack_124;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  ulong uStack_18;
  
  uStack_18 = 0;
  if (param_1 != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x98))
                      (param_1,&uStack_18);
    if (iVar1 == 0) {
      uStack_18 = 0;
    }
    return uStack_18;
  }
  auVar13 = func_0x00f78af4();
  puStack_28 = &Core_Containers_ObjectPool_object___TimedAcquire;
  uStack_38 = 0;
  puStack_30 = &stack0xfffffffffffffff0;
  if (auVar13._0_8_ != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(auVar13._8_8_ + 0x18) + 0xc0) + 0xa8))
                      (auVar13._0_8_,&uStack_38);
    if (iVar1 == 0) {
      uStack_38 = 0;
    }
    return uStack_38;
  }
  auVar13 = func_0x00f78af4();
  lVar7 = auVar13._8_8_;
  lVar6 = auVar13._0_8_;
  puVar8 = param_3;
  if ((bRam0000000003eb85ed & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ed = 1;
  }
  if (*(long *)(lVar6 + 0x48) != 0) {
    puVar8 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0xb0);
    uVar3 = (*(code *)*puVar8)(*(long *)(lVar6 + 0x48),lVar7);
    if ((int)uVar3 == -1) {
code_r0x026f5930:
      return (ulong)((int)uVar3 != -1);
    }
    if (*(long *)(lVar6 + 0x30) != 0) {
      puVar8 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0xb8);
      (*(code *)*puVar8)(*(long *)(lVar6 + 0x30),lVar7);
      plVar4 = (long *)func_0x00f78adc(lVar7,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto code_r0x026f5850;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4);
code_r0x026f5850:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
      }
      if (*(long *)(lVar6 + 0x40) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x40))
                  (*(long *)(lVar6 + 0x40),lVar7);
        puVar8 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0xc0);
        (*(code *)*puVar8)(*(undefined8 *)(lVar6 + 0x48),uVar3);
        if (*(long *)(lVar6 + 0x50) != 0) {
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x48))();
          do {
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) goto code_r0x026f5930;
            if (*(long *)(lVar6 + 0x50) == 0) goto code_r0x026f5950;
            puVar8 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x50);
            (*(code *)*puVar8)(&lStack_a8,*(long *)(lVar6 + 0x50),iVar1);
            uStack_88 = uStack_98;
            uStack_90 = uStack_a0;
          } while (lStack_a8 != lVar7);
          if (*(long *)(lVar6 + 0x50) != 0) {
            uStack_b0 = uStack_98;
            uStack_b8 = uStack_a0;
            lStack_c0 = lVar7;
            (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 200))
                      (*(long *)(lVar6 + 0x50),&lStack_c0,
                       *(undefined8 *)(*(long *)(param_3[3] + 0xc0) + 200));
            goto code_r0x026f5930;
          }
        }
      }
    }
  }
code_r0x026f5950:
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb85ee & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ee = 1;
  }
  if (*(long *)(lVar6 + 0x50) != 0) {
    iVar1 = 0;
    fVar12 = *(float *)(lVar6 + 0x58) + extraout_s0;
    do {
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x48))();
      if (iVar2 <= iVar1) {
        uStack_160 = func_0x00f78adc(extraout_x1,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
        if (*(long *)(lVar6 + 0x50) != 0) {
          uStack_154 = 0;
          lStack_168 = extraout_x1;
          fStack_158 = fVar12;
          uVar10 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0xd8))
                             (*(long *)(lVar6 + 0x50),&lStack_168,
                              *(undefined8 *)(*(long *)(puVar8[3] + 0xc0) + 0xd8));
          return uVar10;
        }
        break;
      }
      if (*(long *)(lVar6 + 0x50) == 0) break;
      (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x50))
                (&lStack_138,*(long *)(lVar6 + 0x50),iVar1);
      if (lStack_138 == extraout_x1) {
        if (*(long *)(lVar6 + 0x50) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x50))
                    (&lStack_138,*(long *)(lVar6 + 0x50),iVar1);
          uStack_118 = uStack_130;
          lStack_120 = lStack_138;
          if (*(long *)(lVar6 + 0x50) != 0) {
            uStack_148 = uStack_130;
            lStack_150 = lStack_138;
            uStack_13c = uStack_124;
            fStack_140 = fVar12;
            uVar10 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0xd0))
                               (*(long *)(lVar6 + 0x50),iVar1,&lStack_150,
                                *(undefined8 *)(*(long *)(puVar8[3] + 0xc0) + 0xd0));
            return uVar10;
          }
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (*(long *)(lVar6 + 0x50) != 0);
  }
  auVar13 = func_0x00f78af4();
  lVar7 = auVar13._8_8_;
  lVar6 = auVar13._0_8_;
  if (*(long *)(lVar6 + 0x48) != 0) {
    uVar10 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe0))();
    while (*(long *)(lVar6 + 0x48) != 0) {
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe0))();
      if (iVar1 < 1) {
        return uVar10;
      }
      lVar9 = *(long *)(lVar6 + 0x48);
      if (lVar9 == 0) break;
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe0))(lVar9);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe8))
                        (lVar9,iVar1 + -1);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x58))(lVar6,uVar3);
    }
  }
  uVar10 = func_0x00f78af4();
  if (uVar10 != 0) {
    return uVar10;
  }
  lVar6 = func_0x00f78af4();
  return (ulong)*(uint *)(lVar6 + 0x2c);
}



// ============================================================
// RVA: 0x26f570c | Core.Containers.ObjectPool<object>.TimedAcquire
// ============================================================

ulong Core_Containers_ObjectPool_object___TimedAcquire
                (long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long extraout_x1;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  float extraout_s0;
  float fVar12;
  undefined1 auVar13 [16];
  long lStack_148;
  undefined8 uStack_140;
  float fStack_138;
  undefined4 uStack_134;
  long lStack_130;
  undefined8 uStack_128;
  float fStack_120;
  undefined4 uStack_11c;
  long lStack_118;
  undefined8 uStack_110;
  undefined4 uStack_104;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_18;
  
  uStack_18 = 0;
  if (param_1 != 0) {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0xa8))
                      (param_1,&uStack_18);
    if (iVar1 == 0) {
      uStack_18 = 0;
    }
    return uStack_18;
  }
  auVar13 = func_0x00f78af4();
  lVar7 = auVar13._8_8_;
  lVar6 = auVar13._0_8_;
  puVar8 = param_3;
  if ((bRam0000000003eb85ed & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ed = 1;
  }
  if (*(long *)(lVar6 + 0x48) != 0) {
    puVar8 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0xb0);
    uVar3 = (*(code *)*puVar8)(*(long *)(lVar6 + 0x48),lVar7);
    if ((int)uVar3 == -1) {
code_r0x026f5930:
      return (ulong)((int)uVar3 != -1);
    }
    if (*(long *)(lVar6 + 0x30) != 0) {
      puVar8 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0xb8);
      (*(code *)*puVar8)(*(long *)(lVar6 + 0x30),lVar7);
      plVar4 = (long *)func_0x00f78adc(lVar7,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto code_r0x026f5850;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4);
code_r0x026f5850:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
      }
      if (*(long *)(lVar6 + 0x40) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x40))
                  (*(long *)(lVar6 + 0x40),lVar7);
        puVar8 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0xc0);
        (*(code *)*puVar8)(*(undefined8 *)(lVar6 + 0x48),uVar3);
        if (*(long *)(lVar6 + 0x50) != 0) {
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x48))();
          do {
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) goto code_r0x026f5930;
            if (*(long *)(lVar6 + 0x50) == 0) goto code_r0x026f5950;
            puVar8 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x50);
            (*(code *)*puVar8)(&lStack_88,*(long *)(lVar6 + 0x50),iVar1);
            uStack_68 = uStack_78;
            uStack_70 = uStack_80;
          } while (lStack_88 != lVar7);
          if (*(long *)(lVar6 + 0x50) != 0) {
            uStack_90 = uStack_78;
            uStack_98 = uStack_80;
            lStack_a0 = lVar7;
            (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 200))
                      (*(long *)(lVar6 + 0x50),&lStack_a0,
                       *(undefined8 *)(*(long *)(param_3[3] + 0xc0) + 200));
            goto code_r0x026f5930;
          }
        }
      }
    }
  }
code_r0x026f5950:
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb85ee & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ee = 1;
  }
  if (*(long *)(lVar6 + 0x50) != 0) {
    iVar1 = 0;
    fVar12 = *(float *)(lVar6 + 0x58) + extraout_s0;
    do {
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x48))();
      if (iVar2 <= iVar1) {
        uStack_140 = func_0x00f78adc(extraout_x1,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
        if (*(long *)(lVar6 + 0x50) != 0) {
          uStack_134 = 0;
          lStack_148 = extraout_x1;
          fStack_138 = fVar12;
          uVar10 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0xd8))
                             (*(long *)(lVar6 + 0x50),&lStack_148,
                              *(undefined8 *)(*(long *)(puVar8[3] + 0xc0) + 0xd8));
          return uVar10;
        }
        break;
      }
      if (*(long *)(lVar6 + 0x50) == 0) break;
      (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x50))
                (&lStack_118,*(long *)(lVar6 + 0x50),iVar1);
      if (lStack_118 == extraout_x1) {
        if (*(long *)(lVar6 + 0x50) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x50))
                    (&lStack_118,*(long *)(lVar6 + 0x50),iVar1);
          uStack_f8 = uStack_110;
          lStack_100 = lStack_118;
          if (*(long *)(lVar6 + 0x50) != 0) {
            uStack_128 = uStack_110;
            lStack_130 = lStack_118;
            uStack_11c = uStack_104;
            fStack_120 = fVar12;
            uVar10 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0xd0))
                               (*(long *)(lVar6 + 0x50),iVar1,&lStack_130,
                                *(undefined8 *)(*(long *)(puVar8[3] + 0xc0) + 0xd0));
            return uVar10;
          }
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (*(long *)(lVar6 + 0x50) != 0);
  }
  auVar13 = func_0x00f78af4();
  lVar7 = auVar13._8_8_;
  lVar6 = auVar13._0_8_;
  if (*(long *)(lVar6 + 0x48) != 0) {
    uVar10 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe0))();
    while (*(long *)(lVar6 + 0x48) != 0) {
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe0))();
      if (iVar1 < 1) {
        return uVar10;
      }
      lVar9 = *(long *)(lVar6 + 0x48);
      if (lVar9 == 0) break;
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe0))(lVar9);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0xe8))
                        (lVar9,iVar1 + -1);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x18) + 0xc0) + 0x58))(lVar6,uVar3);
    }
  }
  uVar10 = func_0x00f78af4();
  if (uVar10 != 0) {
    return uVar10;
  }
  lVar6 = func_0x00f78af4();
  return (ulong)*(uint *)(lVar6 + 0x2c);
}



// ============================================================
// RVA: 0x26f5754 | Core.Containers.ObjectPool<object>.Return
// ============================================================

ulong Core_Containers_ObjectPool_object___Return(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long extraout_x1;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  float extraout_s0;
  float fVar12;
  undefined1 auVar13 [16];
  long lStack_128;
  undefined8 uStack_120;
  float fStack_118;
  undefined4 uStack_114;
  long lStack_110;
  undefined8 uStack_108;
  float fStack_100;
  undefined4 uStack_fc;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e4;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar7 = param_3;
  if ((bRam0000000003eb85ed & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ed = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    puVar7 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0xb0);
    uVar3 = (*(code *)*puVar7)(*(long *)(param_1 + 0x48),param_2);
    if ((int)uVar3 == -1) {
LAB_026f5930:
      return (ulong)((int)uVar3 != -1);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      puVar7 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0xb8);
      (*(code *)*puVar7)(*(long *)(param_1 + 0x30),param_2);
      plVar4 = (long *)func_0x00f78adc(param_2,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == /*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_026f5850;
            }
            piVar10 = piVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar4);
LAB_026f5850:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x40))
                  (*(long *)(param_1 + 0x40),param_2);
        puVar7 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0xc0);
        (*(code *)*puVar7)(*(undefined8 *)(param_1 + 0x48),uVar3);
        if (*(long *)(param_1 + 0x50) != 0) {
          iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x48))();
          do {
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) goto LAB_026f5930;
            if (*(long *)(param_1 + 0x50) == 0) goto LAB_026f5950;
            puVar7 = *(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x50);
            (*(code *)*puVar7)(&lStack_68,*(long *)(param_1 + 0x50),iVar1);
            uStack_48 = uStack_58;
            uStack_50 = uStack_60;
          } while (lStack_68 != param_2);
          if (*(long *)(param_1 + 0x50) != 0) {
            uStack_70 = uStack_58;
            uStack_78 = uStack_60;
            lStack_80 = param_2;
            (*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 200))
                      (*(long *)(param_1 + 0x50),&lStack_80,
                       *(undefined8 *)(*(long *)(param_3[3] + 0xc0) + 200));
            goto LAB_026f5930;
          }
        }
      }
    }
  }
LAB_026f5950:
  lVar8 = func_0x00f78af4();
  if ((bRam0000000003eb85ee & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ee = 1;
  }
  if (*(long *)(lVar8 + 0x50) != 0) {
    iVar1 = 0;
    fVar12 = *(float *)(lVar8 + 0x58) + extraout_s0;
    do {
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x48))();
      if (iVar2 <= iVar1) {
        uStack_120 = func_0x00f78adc(extraout_x1,/*Core.Containers.IPoolableObject_TypeInfo*/ lRam0000000003d22458);
        if (*(long *)(lVar8 + 0x50) != 0) {
          uStack_114 = 0;
          lStack_128 = extraout_x1;
          fStack_118 = fVar12;
          uVar9 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0xd8))
                            (*(long *)(lVar8 + 0x50),&lStack_128,
                             *(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0xd8));
          return uVar9;
        }
        break;
      }
      if (*(long *)(lVar8 + 0x50) == 0) break;
      (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x50))
                (&lStack_f8,*(long *)(lVar8 + 0x50),iVar1);
      if (lStack_f8 == extraout_x1) {
        if (*(long *)(lVar8 + 0x50) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x50))
                    (&lStack_f8,*(long *)(lVar8 + 0x50),iVar1);
          uStack_d8 = uStack_f0;
          lStack_e0 = lStack_f8;
          if (*(long *)(lVar8 + 0x50) != 0) {
            uStack_108 = uStack_f0;
            lStack_110 = lStack_f8;
            uStack_fc = uStack_e4;
            fStack_100 = fVar12;
            uVar9 = (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0xd0))
                              (*(long *)(lVar8 + 0x50),iVar1,&lStack_110,
                               *(undefined8 *)(*(long *)(puVar7[3] + 0xc0) + 0xd0));
            return uVar9;
          }
        }
        break;
      }
      iVar1 = iVar1 + 1;
    } while (*(long *)(lVar8 + 0x50) != 0);
  }
  auVar13 = func_0x00f78af4();
  lVar6 = auVar13._8_8_;
  lVar8 = auVar13._0_8_;
  if (*(long *)(lVar8 + 0x48) != 0) {
    uVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0xe0))();
    while (*(long *)(lVar8 + 0x48) != 0) {
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0xe0))();
      if (iVar1 < 1) {
        return uVar9;
      }
      lVar11 = *(long *)(lVar8 + 0x48);
      if (lVar11 == 0) break;
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0xe0))(lVar11)
      ;
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0xe8))
                        (lVar11,iVar1 + -1);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x58))(lVar8,uVar3);
    }
  }
  uVar9 = func_0x00f78af4();
  if (uVar9 != 0) {
    return uVar9;
  }
  lVar8 = func_0x00f78af4();
  return (ulong)*(uint *)(lVar8 + 0x2c);
}



// ============================================================
// RVA: 0x26f5954 | Core.Containers.ObjectPool<object>.ReturnAtTime
// ============================================================

undefined1  [16]
Core_Containers_ObjectPool_object___ReturnAtTime
          (float param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  undefined4 uStack_94;
  long lStack_90;
  undefined8 uStack_88;
  float fStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  long lStack_60;
  undefined8 uStack_58;
  long lVar4;
  
  if ((bRam0000000003eb85ee & 1) == 0) {
    func_0x00f78a20(0x3d22458);
    bRam0000000003eb85ee = 1;
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    iVar2 = 0;
    param_1 = *(float *)(param_2 + 0x58) + param_1;
    do {
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x48))();
      if (iVar1 <= iVar2) {
        uStack_a0 = func_0x00f78adc(param_3,/*Core.Containers.IPoolableObject_TypeInfo*/ uRam0000000003d22458);
        if (*(long *)(param_2 + 0x50) != 0) {
          lVar5 = *(long *)(*(long *)(param_4 + 0x18) + 0xc0);
          uStack_94 = 0;
          lStack_a8 = param_3;
          fStack_98 = param_1;
          auVar7 = (*(code *)**(undefined8 **)(lVar5 + 0xd8))
                             (*(long *)(param_2 + 0x50),&lStack_a8,*(undefined8 *)(lVar5 + 0xd8));
          return auVar7;
        }
        break;
      }
      if (*(long *)(param_2 + 0x50) == 0) break;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x50))
                (&lStack_78,*(long *)(param_2 + 0x50),iVar2);
      if (lStack_78 == param_3) {
        if (*(long *)(param_2 + 0x50) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x50))
                    (&lStack_78,*(long *)(param_2 + 0x50),iVar2);
          uStack_58 = uStack_70;
          lStack_60 = lStack_78;
          if (*(long *)(param_2 + 0x50) != 0) {
            lVar5 = *(long *)(*(long *)(param_4 + 0x18) + 0xc0);
            uStack_88 = uStack_70;
            lStack_90 = lStack_78;
            uStack_7c = uStack_64;
            fStack_80 = param_1;
            auVar7 = (*(code *)**(undefined8 **)(lVar5 + 0xd0))
                               (*(long *)(param_2 + 0x50),iVar2,&lStack_90,
                                *(undefined8 *)(lVar5 + 0xd0));
            return auVar7;
          }
        }
        break;
      }
      iVar2 = iVar2 + 1;
    } while (*(long *)(param_2 + 0x50) != 0);
  }
  auVar7 = func_0x00f78af4();
  lVar4 = auVar7._8_8_;
  lVar5 = auVar7._0_8_;
  if (*(long *)(lVar5 + 0x48) != 0) {
    auVar7._0_8_ = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0xe0))();
    while (*(long *)(lVar5 + 0x48) != 0) {
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0xe0))();
      if (iVar2 < 1) {
        auVar7._8_8_ = extraout_x1;
        return auVar7;
      }
      lVar6 = *(long *)(lVar5 + 0x48);
      if (lVar6 == 0) break;
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0xe0))(lVar6);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0xe8))
                        (lVar6,iVar2 + -1);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0x58))(lVar5,uVar3);
    }
  }
  auVar9._0_8_ = func_0x00f78af4();
  if (auVar9._0_8_ != 0) {
    auVar9._8_8_ = 0;
    return auVar9;
  }
  auVar7 = func_0x00f78af4();
  auVar8._8_8_ = auVar7._8_8_;
  auVar8._4_4_ = 0;
  auVar8._0_4_ = *(uint *)(auVar7._0_8_ + 0x2c);
  return auVar8;
}



// ============================================================
// RVA: 0x26f5ae4 | Core.Containers.ObjectPool<object>.ReleaseAll
// ============================================================

undefined1  [16] Core_Containers_ObjectPool_object___ReleaseAll(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (*(long *)(param_1 + 0x48) != 0) {
    auVar4._0_8_ = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0xe0))
                             ();
    while (*(long *)(param_1 + 0x48) != 0) {
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0xe0))();
      if (iVar1 < 1) {
        auVar4._8_8_ = extraout_x1;
        return auVar4;
      }
      lVar3 = *(long *)(param_1 + 0x48);
      if (lVar3 == 0) break;
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0xe0))
                        (lVar3);
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0xe8))
                        (lVar3,iVar1 + -1);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x58))
                (param_1,uVar2);
    }
  }
  auVar6._0_8_ = func_0x00f78af4();
  if (auVar6._0_8_ != 0) {
    auVar6._8_8_ = 0;
    return auVar6;
  }
  auVar4 = func_0x00f78af4();
  auVar5._8_8_ = auVar4._8_8_;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = *(uint *)(auVar4._0_8_ + 0x2c);
  return auVar5;
}



// ============================================================
// RVA: 0x26f5bb4 | Core.Containers.ObjectPool<object>..ctor
// ============================================================

undefined1  [16] Core_Containers_ObjectPool_object____ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 != 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  auVar1 = func_0x00f78af4();
  auVar2._8_8_ = auVar1._8_8_;
  auVar2._4_4_ = 0;
  auVar2._0_4_ = *(uint *)(auVar1._0_8_ + 0x2c);
  return auVar2;
}



