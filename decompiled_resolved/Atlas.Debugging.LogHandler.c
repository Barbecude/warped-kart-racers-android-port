// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Debugging.LogHandler

// ============================================================
// RVA: 0x148a51c | Atlas.Debugging.LogHandler.Init
// ============================================================

void Atlas_Debugging_LogHandler__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int extraout_w1;
  undefined8 extraout_x1;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined4 uStack_114;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb4963 & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d35488);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22300);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d23110);
    func_0x00f78a20(0x3d19a00);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4963 = 1;
  }
  if (((*(ushort *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (**(long **)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xb8) == 0) {
    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (cRam0000000003ca34ff == '\0') {
      func_0x00f78a20(0x3d210d8);
      cRam0000000003ca34ff = '\x01';
    }
    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar12 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0148a6c4;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(plVar12,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,0);
LAB_0148a6c4:
      uVar3 = (*(code *)*puVar2)(plVar12,puVar2[1]);
      if (((*(ushort *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      **(undefined8 **)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xb8) = uVar3;
      goto LAB_0148a6f8;
    }
LAB_0148aa30:
    func_0x00f78af4();
  }
  else {
LAB_0148a6f8:
    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (cRam0000000003ca34ff == '\0') {
      func_0x00f78a20(0x3d210d8);
      cRam0000000003ca34ff = '\x01';
    }
    if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar12 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
    if (plVar12 == (long *)0x0) goto LAB_0148aa30;
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar2 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto code_r0x0148a7b4;
        }
        piVar11 = piVar11 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar12,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,1);
code_r0x0148a7b4:
    uVar3 = puVar2[1];
    (*(code *)*puVar2)(plVar12,param_1);
    uVar4 = /*UnityEngine.LogType_var*/ uRam0000000003d19a00;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar4,0);
    if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*System.Enum$$GetValues*/ func_0x02ac6504(uVar4,0);
    if (lVar8 == 0) goto LAB_0148aa30;
    plVar12 = (long *)/*System.Array$$GetEnumerator*/ func_0x0292e160(lVar8,0);
    if (plVar12 != (long *)0x0) {
      do {
        lVar8 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar2 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x0148a898;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        uVar3 = 0;
        puVar2 = (undefined8 *)func_0x00fac1f0(plVar12);
code_r0x0148a898:
        uVar10 = (*(code *)*puVar2)(plVar12,puVar2[1]);
        if ((uVar10 & 1) == 0) {
          lVar8 = 0;
          goto code_r0x0148a970;
        }
        lVar8 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar2 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto code_r0x0148a8f8;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar2 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,1);
code_r0x0148a8f8:
        plVar5 = (long *)(*(code *)*puVar2)(plVar12,puVar2[1]);
        if (plVar5 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x0148aa38;
        }
        if (*(long *)(*plVar5 + 0x40) != *(long *)(/*int_TypeInfo*/ lRam0000000003d22910 + 0x40))
        goto code_r0x0148aa24;
        puVar6 = (undefined4 *)func_0x00f78ae4(plVar5);
        uVar3 = uRam0000000003d35488;
        puVar2 = (undefined8 *)/*Core.Containers.FixedArray8<FixedString32Bytes>$$get_Item*/ func_0x021448ac(param_1 + 0x10,*puVar6);
        uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        /*Unity.Collections.FixedString32Bytes$$op_Implicit*/ func_0x02fd6d20(&uStack_a0,uVar4,0);
        puVar2[1] = uStack_98;
        *puVar2 = uStack_a0;
        puVar2[3] = uStack_88;
        puVar2[2] = uStack_90;
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x0148aa38:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x148aa3c);
  (*pcVar1)();
code_r0x0148a970:
  plVar5 = (long *)func_0x00f78adc(plVar12,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0);
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar2 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto code_r0x0148a9d8;
        }
        piVar11 = piVar11 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    uVar3 = 0;
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar5);
code_r0x0148a9d8:
    (*(code *)*puVar2)(plVar5,puVar2[1]);
    plVar12 = plVar5;
  }
  if (lVar8 == 0) {
    if (*(long *)PTR_03a5d648 == lStack_58) {
      return;
    }
  }
  else {
    func_0x00f78ac0(lVar8,0);
  }
  ___stack_chk_fail();
  if (extraout_w1 != 1) goto code_r0x0148aa7c;
  plVar5 = (long *)___cxa_begin_catch();
  lVar8 = *plVar5;
  ___cxa_end_catch();
  goto code_r0x0148a970;
code_r0x0148aa24:
  func_0x00f78e5c(plVar5);
  goto code_r0x0148aa38;
code_r0x0148aa7c:
  __Unwind_Resume();
  if ((bRam0000000003eb4964 & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d22300);
    func_0x00f78a20(0x3d23110);
    bRam0000000003eb4964 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar12 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (((*(ushort *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (plVar12 != (long *)0x0) {
    uVar3 = **(undefined8 **)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xb8);
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar2 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto code_r0x0148abb0;
        }
        piVar11 = piVar11 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar12,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,1);
code_r0x0148abb0:
                    /* WARNING: Could not recover jumptable at 0x0148abc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(plVar12,uVar3,puVar2[1]);
    return;
  }
  auVar13 = func_0x00f78af4();
  uVar4 = uVar3;
  if ((bRam0000000003eb4965 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d35488);
    func_0x00f78a20(0x3d222f8);
    func_0x00f78a20(0x3d23110);
    func_0x00f78a20(0x3d1f218);
    func_0x00f78a20(0x3d6d618);
    func_0x00f78a20(0x3d768d0);
    bRam0000000003eb4965 = 1;
  }
  plVar12 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,4);
  lVar8 = /*System.Diagnostics.Process$$GetCurrentProcess*/ func_0x02ef43a4(0);
  if (lVar8 == 0) {
code_r0x0148aebc:
    func_0x00f78af4();
  }
  else {
    uStack_114 = /*System.Diagnostics.Process$$get_Id*/ func_0x02ef3f20(lVar8,0);
    lVar8 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_114,0);
    if (plVar12 == (long *)0x0) goto code_r0x0148aebc;
    if ((lVar8 != 0) &&
       (lVar9 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar9 == 0))
    goto code_r0x0148aec0;
    if ((int)plVar12[3] == 0) goto code_r0x0148aeb4;
    plVar12[4] = lVar8;
    lVar8 = /*System.Threading.Thread$$get_CurrentThread*/ func_0x029eb8e0(0);
    if (lVar8 == 0) goto code_r0x0148aebc;
    uStack_114 = /*System.Threading.Thread$$get_ManagedThreadId*/ func_0x029ed348(lVar8,0);
    lVar8 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_114,0);
    if ((lVar8 == 0) ||
       (lVar9 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar9 != 0)) {
      if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
        plVar12[5] = lVar8;
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
        uVar4 = 0;
        lVar8 = /*Core.Services.Extensions$$ToStringSafe*/ func_0x0166878c(uVar7,/*STR('HH:mm:ss.fff')*/ uRam0000000003d6d618,0);
        if ((lVar8 != 0) &&
           (lVar9 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar9 == 0))
        goto code_r0x0148aec0;
        if (2 < *(uint *)(plVar12 + 3)) {
          plVar12[6] = lVar8;
          uVar4 = uRam0000000003d35488;
          uVar7 = /*Core.Containers.FixedArray8<FixedString32Bytes>$$get_Item*/ func_0x021448ac(auVar13._0_8_ + 0x10,auVar13._8_8_,uRam0000000003d35488);
          lVar8 = /*Unity.Collections.FixedString32Bytes$$ToString*/ func_0x02fd65dc(uVar7,0);
          if ((lVar8 != 0) &&
             (lVar9 = func_0x00f78adc(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar9 == 0))
          goto code_r0x0148aec0;
          if ((*(uint *)(plVar12 + 3) & 0xfffffffc) != 0) {
            plVar12[7] = lVar8;
            uVar7 = /*System.String$$Format*/ func_0x029cf564(/*STR('[({0}.{1}) {2}] [{3}] ')*/ uRam0000000003d768d0,plVar12,0);
            uVar4 = 0;
            uVar7 = /*System.String$$Concat*/ func_0x029bdb88(uVar7,param_4,0);
            if (((*(ushort *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar12 = (long *)**(undefined8 **)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xb8);
            if (plVar12 != (long *)0x0) {
              lVar8 = *plVar12;
              uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                    puVar2 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                    goto code_r0x0148ae7c;
                  }
                  piVar11 = piVar11 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              puVar2 = (undefined8 *)func_0x00fac1f0(plVar12,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0148ae7c:
              (*(code *)*puVar2)(plVar12,auVar13._8_8_,uVar3,uVar7,param_5,puVar2[1]);
              return;
            }
            goto code_r0x0148aebc;
          }
        }
      }
code_r0x0148aeb4:
      uVar3 = func_0x00f78b24();
      goto code_r0x0148aec4;
    }
  }
code_r0x0148aec0:
  uVar3 = func_0x00f78b14();
code_r0x0148aec4:
  func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb4966 & 1) == 0) {
    func_0x00f78a20(0x3d222f8);
    func_0x00f78a20(0x3d23110);
    bRam0000000003eb4966 = 1;
  }
  if (((*(ushort *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar12 = (long *)**(undefined8 **)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xb8);
  if (plVar12 == (long *)0x0) {
    func_0x00f78af4();
    return;
  }
  lVar8 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
        puVar2 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto code_r0x0148af98;
      }
      piVar11 = piVar11 + 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  puVar2 = (undefined8 *)func_0x00fac1f0(plVar12,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0148af98:
                    /* WARNING: Could not recover jumptable at 0x0148afb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar12,extraout_x1,uVar4,puVar2[1]);
  return;
}



// ============================================================
// RVA: 0x148aa80 | Atlas.Debugging.LogHandler.DeInit
// ============================================================

void Atlas_Debugging_LogHandler__DeInit
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined4 uStack_74;
  
  if ((bRam0000000003eb4964 & 1) == 0) {
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d22300);
    func_0x00f78a20(0x3d23110);
    bRam0000000003eb4964 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003ca34ff == '\0') {
    func_0x00f78a20(0x3d210d8);
    cRam0000000003ca34ff = '\x01';
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
  if (((*(ushort *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (plVar7 != (long *)0x0) {
    uVar8 = **(undefined8 **)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xb8);
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0148abb0;
        }
        piVar6 = piVar6 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,1);
LAB_0148abb0:
                    /* WARNING: Could not recover jumptable at 0x0148abc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(plVar7,uVar8,puVar1[1]);
    return;
  }
  auVar9 = func_0x00f78af4();
  uVar8 = param_3;
  if ((bRam0000000003eb4965 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d35488);
    func_0x00f78a20(0x3d222f8);
    func_0x00f78a20(0x3d23110);
    func_0x00f78a20(0x3d1f218);
    func_0x00f78a20(0x3d6d618);
    func_0x00f78a20(0x3d768d0);
    bRam0000000003eb4965 = 1;
  }
  plVar7 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,4);
  lVar4 = /*System.Diagnostics.Process$$GetCurrentProcess*/ func_0x02ef43a4(0);
  if (lVar4 == 0) {
code_r0x0148aebc:
    func_0x00f78af4();
  }
  else {
    uStack_74 = /*System.Diagnostics.Process$$get_Id*/ func_0x02ef3f20(lVar4,0);
    lVar4 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_74,0);
    if (plVar7 == (long *)0x0) goto code_r0x0148aebc;
    if ((lVar4 != 0) && (lVar2 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar2 == 0)
       ) goto code_r0x0148aec0;
    if ((int)plVar7[3] == 0) goto code_r0x0148aeb4;
    plVar7[4] = lVar4;
    lVar4 = /*System.Threading.Thread$$get_CurrentThread*/ func_0x029eb8e0(0);
    if (lVar4 == 0) goto code_r0x0148aebc;
    uStack_74 = /*System.Threading.Thread$$get_ManagedThreadId*/ func_0x029ed348(lVar4,0);
    lVar4 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_74,0);
    if ((lVar4 == 0) || (lVar2 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar2 != 0)
       ) {
      if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
        plVar7[5] = lVar4;
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
        uVar8 = 0;
        lVar4 = /*Core.Services.Extensions$$ToStringSafe*/ func_0x0166878c(uVar3,/*STR('HH:mm:ss.fff')*/ uRam0000000003d6d618,0);
        if ((lVar4 != 0) &&
           (lVar2 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar2 == 0))
        goto code_r0x0148aec0;
        if (2 < *(uint *)(plVar7 + 3)) {
          plVar7[6] = lVar4;
          uVar8 = uRam0000000003d35488;
          uVar3 = /*Core.Containers.FixedArray8<FixedString32Bytes>$$get_Item*/ func_0x021448ac(auVar9._0_8_ + 0x10,auVar9._8_8_,uRam0000000003d35488);
          lVar4 = /*Unity.Collections.FixedString32Bytes$$ToString*/ func_0x02fd65dc(uVar3,0);
          if ((lVar4 != 0) &&
             (lVar2 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar2 == 0))
          goto code_r0x0148aec0;
          if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
            plVar7[7] = lVar4;
            uVar3 = /*System.String$$Format*/ func_0x029cf564(/*STR('[({0}.{1}) {2}] [{3}] ')*/ uRam0000000003d768d0,plVar7,0);
            uVar8 = 0;
            uVar3 = /*System.String$$Concat*/ func_0x029bdb88(uVar3,param_4,0);
            if (((*(ushort *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar7 = (long *)**(undefined8 **)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xb8);
            if (plVar7 != (long *)0x0) {
              lVar4 = *plVar7;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                    puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                    goto code_r0x0148ae7c;
                  }
                  piVar6 = piVar6 + 4;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
              puVar1 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0148ae7c:
              (*(code *)*puVar1)(plVar7,auVar9._8_8_,param_3,uVar3,param_5,puVar1[1]);
              return;
            }
            goto code_r0x0148aebc;
          }
        }
      }
code_r0x0148aeb4:
      uVar3 = func_0x00f78b24();
      goto code_r0x0148aec4;
    }
  }
code_r0x0148aec0:
  uVar3 = func_0x00f78b14();
code_r0x0148aec4:
  func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003eb4966 & 1) == 0) {
    func_0x00f78a20(0x3d222f8);
    func_0x00f78a20(0x3d23110);
    bRam0000000003eb4966 = 1;
  }
  if (((*(ushort *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = (long *)**(undefined8 **)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xb8);
  if (plVar7 == (long *)0x0) {
    func_0x00f78af4();
    return;
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto code_r0x0148af98;
      }
      piVar6 = piVar6 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar7,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0148af98:
                    /* WARNING: Could not recover jumptable at 0x0148afb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar7,extraout_x1,uVar8,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x148abcc | Atlas.Debugging.LogHandler.LogFormat
// ============================================================

void Atlas_Debugging_LogHandler__LogFormat
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 uStack_54;
  
  uVar6 = param_3;
  if ((bRam0000000003eb4965 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d35488);
    func_0x00f78a20(0x3d222f8);
    func_0x00f78a20(0x3d23110);
    func_0x00f78a20(0x3d1f218);
    func_0x00f78a20(0x3d6d618);
    func_0x00f78a20(0x3d768d0);
    bRam0000000003eb4965 = 1;
  }
  plVar1 = (long *)func_0x00f78a34(/*object[]_TypeInfo*/ uRam0000000003d1f218,4);
  lVar2 = /*System.Diagnostics.Process$$GetCurrentProcess*/ func_0x02ef43a4(0);
  if (lVar2 == 0) {
LAB_0148aebc:
    func_0x00f78af4();
  }
  else {
    uStack_54 = /*System.Diagnostics.Process$$get_Id*/ func_0x02ef3f20(lVar2,0);
    lVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
    if (plVar1 == (long *)0x0) goto LAB_0148aebc;
    if ((lVar2 != 0) && (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)
       ) goto LAB_0148aec0;
    if ((int)plVar1[3] == 0) goto LAB_0148aeb4;
    plVar1[4] = lVar2;
    lVar2 = /*System.Threading.Thread$$get_CurrentThread*/ func_0x029eb8e0(0);
    if (lVar2 == 0) goto LAB_0148aebc;
    uStack_54 = /*System.Threading.Thread$$get_ManagedThreadId*/ func_0x029ed348(lVar2,0);
    lVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
    if ((lVar2 == 0) || (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 != 0)
       ) {
      if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
        plVar1[5] = lVar2;
        if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
        uVar6 = 0;
        lVar2 = /*Core.Services.Extensions$$ToStringSafe*/ func_0x0166878c(uVar4,/*STR('HH:mm:ss.fff')*/ uRam0000000003d6d618,0);
        if ((lVar2 != 0) &&
           (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto LAB_0148aec0;
        if (2 < *(uint *)(plVar1 + 3)) {
          plVar1[6] = lVar2;
          uVar6 = uRam0000000003d35488;
          uVar4 = /*Core.Containers.FixedArray8<FixedString32Bytes>$$get_Item*/ func_0x021448ac(param_1 + 0x10,param_2,uRam0000000003d35488);
          lVar2 = /*Unity.Collections.FixedString32Bytes$$ToString*/ func_0x02fd65dc(uVar4,0);
          if ((lVar2 != 0) &&
             (lVar3 = func_0x00f78adc(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
          goto LAB_0148aec0;
          if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
            plVar1[7] = lVar2;
            uVar4 = /*System.String$$Format*/ func_0x029cf564(/*STR('[({0}.{1}) {2}] [{3}] ')*/ uRam0000000003d768d0,plVar1,0);
            uVar6 = 0;
            uVar4 = /*System.String$$Concat*/ func_0x029bdb88(uVar4,param_4,0);
            if (((*(ushort *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar1 = (long *)**(undefined8 **)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xb8);
            if (plVar1 != (long *)0x0) {
              lVar2 = *plVar1;
              uVar7 = (ulong)*(ushort *)(lVar2 + 0x12a);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                    puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_0148ae7c;
                  }
                  piVar8 = piVar8 + 4;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              puVar5 = (undefined8 *)func_0x00fac1f0(plVar1,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
LAB_0148ae7c:
              (*(code *)*puVar5)(plVar1,param_2,param_3,uVar4,param_5,puVar5[1]);
              return;
            }
            goto LAB_0148aebc;
          }
        }
      }
LAB_0148aeb4:
      uVar4 = func_0x00f78b24();
      goto code_r0x0148aec4;
    }
  }
LAB_0148aec0:
  uVar4 = func_0x00f78b14();
code_r0x0148aec4:
  func_0x00f78ac0(uVar4,0);
  if ((bRam0000000003eb4966 & 1) == 0) {
    func_0x00f78a20(0x3d222f8);
    func_0x00f78a20(0x3d23110);
    bRam0000000003eb4966 = 1;
  }
  if (((*(ushort *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar1 = (long *)**(undefined8 **)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xb8);
  if (plVar1 == (long *)0x0) {
    func_0x00f78af4();
    return;
  }
  lVar2 = *plVar1;
  uVar7 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
        puVar5 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto code_r0x0148af98;
      }
      piVar8 = piVar8 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)func_0x00fac1f0(plVar1,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0148af98:
                    /* WARNING: Could not recover jumptable at 0x0148afb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar1,extraout_x1,uVar6,puVar5[1]);
  return;
}



// ============================================================
// RVA: 0x148aecc | Atlas.Debugging.LogHandler.LogException
// ============================================================

void Atlas_Debugging_LogHandler__LogException
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb4966 & 1) == 0) {
    func_0x00f78a20(0x3d222f8);
    func_0x00f78a20(0x3d23110);
    bRam0000000003eb4966 = 1;
  }
  if (((*(ushort *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)**(undefined8 **)(/*Atlas.Debugging.LogHandler_TypeInfo*/ lRam0000000003d23110 + 0xb8);
  if (plVar5 == (long *)0x0) {
    func_0x00f78af4();
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_0148af98;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
LAB_0148af98:
                    /* WARNING: Could not recover jumptable at 0x0148afb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,param_3,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x148afbc | Atlas.Debugging.LogHandler..ctor
// ============================================================

void Atlas_Debugging_LogHandler___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x148afc4 | Atlas.Debugging.LogHandler..cctor
// ============================================================

void Atlas_Debugging_LogHandler___cctor(void)

{
  return;
}



