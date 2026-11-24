// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.ObjectCache.<>c__DisplayClass8_0<int, object>

// ============================================================
// RVA: 0x1b1d6dc | Core.Containers.ObjectCache.<>c__DisplayClass8_0<int, object>..ctor
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1b1d6f4 | Core.Containers.ObjectCache.<>c__DisplayClass8_0<int, object>.<Remove>b__0
// ============================================================

undefined1  [16]
Core_Containers_ObjectCache___c__DisplayClass8_0_int__object____Remove_b__0
          (long param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  long lVar6;
  undefined8 *extraout_x8;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [2];
  int iStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  
  if (param_2 != 0) {
    auVar13._1_7_ = 0;
    auVar13[0] = *(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x10);
    auVar13._8_4_ = *(int *)(param_1 + 0x10);
    auVar13._12_4_ = 0;
    return auVar13;
  }
  uVar3 = func_0x00f78af4();
  if (uVar3 != 0) {
System_Object___ctor:
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar3;
    return auVar14;
  }
  auVar13 = func_0x00f78af4();
  lVar6 = auVar13._8_8_;
  if ((lVar6 != 0) && (plVar10 = *(long **)(lVar6 + 0x10), plVar10 != (long *)0x0)) {
    uVar9 = *(undefined8 *)(auVar13._0_8_ + 0x10);
    lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 8);
    if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar12);
      plVar10 = *(long **)(lVar6 + 0x10);
    }
    lVar6 = *plVar10;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar12) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto code_r0x01b1d7c4;
        }
        piVar8 = piVar8 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(plVar10,lVar12,0);
code_r0x01b1d7c4:
                    /* WARNING: Could not recover jumptable at 0x01b1d7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar13 = (*(code *)*puVar4)(plVar10,uVar9,puVar4[1]);
    return auVar13;
  }
  uVar3 = func_0x00f78af4();
  if (uVar3 != 0) goto System_Object___ctor;
  lVar6 = func_0x00f78af4();
  if (*(long **)(lVar6 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02ad04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar13 = (**(code **)(**(long **)(lVar6 + 0x10) + 0x2e8))();
    return auVar13;
  }
  uVar3 = func_0x00f78af4();
  if (uVar3 != 0) goto System_Object___ctor;
  auVar13 = func_0x00f78af4();
  lVar11 = *(long *)(auVar13._0_8_ + 0x10);
  lVar6 = param_3;
  lVar12 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$get_Result*/ func_0x031728e0(auVar13._8_8_,0);
  if (lVar11 != 0) {
    plVar10 = *(long **)(*(long *)(param_3 + 0x18) + 0xc0);
    lVar6 = *plVar10;
    UNRECOVERED_JUMPTABLE = *(code **)plVar10[1];
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    if (lVar12 != 0) {
      lVar5 = func_0x00f78adc(lVar12,lVar6);
      if (lVar5 != 0) goto code_r0x01b1d8b0;
      func_0x00f78e5c(lVar12,lVar6);
    }
    lVar5 = 0;
code_r0x01b1d8b0:
                    /* WARNING: Could not recover jumptable at 0x01b1d8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar13 = (*UNRECOVERED_JUMPTABLE)
                        (lVar11,lVar5,
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x18) + 0xc0) + 8));
    return auVar13;
  }
  auVar13 = func_0x00f78af4();
  lVar12 = auVar13._0_8_;
  if ((bRam0000000003eb6ada & 1) == 0) {
    func_0x00f78a20(0x3d2bdc8);
    func_0x00f78a20(0x3d2bdd8);
    func_0x00f78a20(0x3d2bde0);
    func_0x00f78a20(0x3d51c38);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d058);
    func_0x00f78a20(0x3d1d210);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24468);
    func_0x00f78a20(0x3d71710);
    func_0x00f78a20(0x3d71110);
    bRam0000000003eb6ada = 1;
  }
  uVar9 = 0x3d2bde0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  iStack_1b8 = 0;
  /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$Convert<object>*/ func_0x01818c9c(&uStack_1e0,auVar13._8_8_,uRam0000000003d51c38);
  uStack_148 = uStack_1d8;
  uStack_150 = uStack_1e0;
  uStack_138 = uStack_1c8;
  uStack_140 = uStack_1d0;
  lVar11 = *(long *)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x10);
  if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar11);
  }
  lVar11 = func_0x00f78aec(lVar11);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x18))();
  iVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_Status*/ func_0x01b5755c(&uStack_150,uRam0000000003d2bde0);
  if (iVar2 != 1) {
    uVar9 = 0x3d2bde0;
    lVar5 = 0;
    goto code_r0x01b1dc78;
  }
  plVar10 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_150,uRam0000000003d2bdd8);
  if (plVar10 == (long *)0x0) goto code_r0x01b1dff4;
  lVar5 = *plVar10;
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == /*System.Collections.Generic.IEnumerable<AsyncOperationHandle>_TypeInfo*/ lRam0000000003d1d058) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto code_r0x01b1daac;
      }
      piVar8 = piVar8 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerable<AsyncOperationHandle>_TypeInfo*/ lRam0000000003d1d058,0);
code_r0x01b1daac:
  plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
  if (plVar10 != (long *)0x0) {
    do {
      lVar5 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x01b1db1c;
          }
          piVar8 = piVar8 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01b1db1c:
      uVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if ((uVar3 & 1) == 0) {
        uVar9 = 0;
        lVar5 = 1;
        auStack_1c0[0] = 0xf5;
        iStack_1b8 = 1;
        if (plVar10 == (long *)0x0) goto code_r0x01b1dc6c;
        lVar7 = *plVar10;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar3 == 0) goto code_r0x01b1dc44;
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto code_r0x01b1dc2c;
      }
      lVar5 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == /*System.Collections.Generic.IEnumerator<AsyncOperationHandle>_TypeInfo*/ lRam0000000003d1d210) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x01b1db78;
          }
          piVar8 = piVar8 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerator<AsyncOperationHandle>_TypeInfo*/ lRam0000000003d1d210,0);
code_r0x01b1db78:
      (*(code *)*puVar4)(&uStack_1e0,plVar10,puVar4[1]);
      uStack_168 = uStack_1d8;
      uStack_170 = uStack_1e0;
      uStack_160 = uStack_1d0;
      /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$Convert<object>*/ func_0x01818c9c(&uStack_1e0,&uStack_170,
                      *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x20));
      uStack_188 = uStack_1d8;
      uStack_190 = uStack_1e0;
      uStack_178 = uStack_1c8;
      uStack_180 = uStack_1d0;
      uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_190,
                              *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x28));
      if (lVar11 == 0) goto code_r0x01b1dfe4;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x30))(lVar11);
    } while( true );
  }
  goto code_r0x01b1e004;
  while( true ) {
    piVar8 = piVar8 + 4;
    uVar3 = uVar3 - 1;
    if (uVar3 == 0) break;
code_r0x01b1dc2c:
    if (*(long *)(piVar8 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto code_r0x01b1dc60;
    }
  }
code_r0x01b1dc44:
  puVar4 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01b1dc60:
  (*(code *)*puVar4)(plVar10,puVar4[1]);
code_r0x01b1dc6c:
  if (*(int *)(((ulong)auStack_1c0 | 4) - 4) == 0xf5) {
    lVar5 = 0;
    goto code_r0x01b1df88;
  }
code_r0x01b1dc78:
  if (*(char *)(lVar12 + 0x18) != '\0') goto code_r0x01b1dc80;
  plVar10 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_150,uRam0000000003d2bdd8);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == /*System.Collections.Generic.IEnumerable<AsyncOperationHandle>_TypeInfo*/ lRam0000000003d1d058) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto code_r0x01b1dd18;
        }
        piVar8 = piVar8 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerable<AsyncOperationHandle>_TypeInfo*/ lRam0000000003d1d058,0);
code_r0x01b1dd18:
    plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
    if (plVar10 != (long *)0x0) {
      bVar1 = false;
code_r0x01b1dd44:
      do {
        lVar7 = *plVar10;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto code_r0x01b1dd90;
            }
            piVar8 = piVar8 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x01b1dd90:
        uVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
        if ((uVar3 & 1) == 0) {
          *(undefined4 *)((ulong)auStack_1c0 | lVar5 << 2) = 0xc9;
          iStack_1b8 = iStack_1b8 + 1;
          if (plVar10 == (long *)0x0) goto code_r0x01b1df28;
          lVar5 = *plVar10;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar3 == 0) goto code_r0x01b1df00;
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto code_r0x01b1dee8;
        }
        lVar7 = *plVar10;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == /*System.Collections.Generic.IEnumerator<AsyncOperationHandle>_TypeInfo*/ lRam0000000003d1d210) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto code_r0x01b1ddec;
            }
            piVar8 = piVar8 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.Collections.Generic.IEnumerator<AsyncOperationHandle>_TypeInfo*/ lRam0000000003d1d210,0);
code_r0x01b1ddec:
        (*(code *)*puVar4)(&uStack_1e0,plVar10,puVar4[1]);
        uStack_1a8 = uStack_1d8;
        uStack_1b0 = uStack_1e0;
        uStack_1a0 = uStack_1d0;
        iVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$get_Status*/ func_0x0317298c(&uStack_1b0,0);
        if (iVar2 == 1) {
          /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle$$Convert<object>*/ func_0x01818c9c(&uStack_1e0,&uStack_1b0,
                          *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x20));
          uStack_188 = uStack_1d8;
          uStack_190 = uStack_1e0;
          uStack_178 = uStack_1c8;
          uStack_180 = uStack_1d0;
          uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_190,
                                  *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x28))
          ;
          if (lVar11 == 0) {
            func_0x00f78af4(uVar9,uVar9);
            goto code_r0x01b1e018;
          }
          bVar1 = true;
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x30))(lVar11);
          goto code_r0x01b1dd44;
        }
        if (lVar11 == 0) goto code_r0x01b1dfec;
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x30))(lVar11,0);
      } while( true );
    }
    func_0x00f78af4();
    goto code_r0x01b1e018;
  }
  goto code_r0x01b1dff4;
code_r0x01b1dfec:
  func_0x00f78af4();
  goto code_r0x01b1e018;
code_r0x01b1dfe4:
  func_0x00f78af4(uVar9,uVar9);
  goto code_r0x01b1e018;
  while( true ) {
    piVar8 = piVar8 + 4;
    uVar3 = uVar3 - 1;
    if (uVar3 == 0) break;
code_r0x01b1dee8:
    if (*(long *)(piVar8 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto code_r0x01b1df1c;
    }
  }
code_r0x01b1df00:
  puVar4 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01b1df1c:
  (*(code *)*puVar4)(plVar10,puVar4[1]);
code_r0x01b1df28:
  if (bVar1) {
    puVar4 = (undefined8 *)0x3d71110;
  }
  else {
code_r0x01b1dc80:
    lVar11 = 0;
    puVar4 = (undefined8 *)0x3d71710;
  }
  uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_OperationException*/ func_0x01b57200(&uStack_150,uRam0000000003d2bdc8);
  lVar5 = func_0x00f78aec(/*UnityEngine.ResourceManagement.Exceptions.ResourceManagerException_TypeInfo*/ uRam0000000003d24468);
  /*UnityEngine.ResourceManagement.Exceptions.ResourceManagerException$$.ctor*/ func_0x0317e8bc(lVar5,*puVar4,uVar9,0);
code_r0x01b1df88:
  if (*(long *)(lVar12 + 0x20) != 0) {
    auVar13 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x38))
                        (&uStack_1e0,*(long *)(lVar12 + 0x20),lVar11,lVar5 == 0,lVar5,
                         *(undefined1 *)(lVar12 + 0x18));
    extraout_x8[1] = uStack_1d8;
    *extraout_x8 = uStack_1e0;
    extraout_x8[3] = uStack_1c8;
    extraout_x8[2] = uStack_1d0;
    return auVar13;
  }
code_r0x01b1dff4:
  func_0x00f78af4();
  func_0x00f78ac0(uVar9,0);
code_r0x01b1e004:
  func_0x00f78af4();
code_r0x01b1e018:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1b1e01c);
  (*UNRECOVERED_JUMPTABLE)();
}



