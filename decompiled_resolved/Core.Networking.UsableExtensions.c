// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.UsableExtensions

// ============================================================
// RVA: 0x1662860 | Core.Networking.UsableExtensions.Print
// ============================================================

void Core_Networking_UsableExtensions__Print
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar14;
  undefined *unaff_x30;
  undefined1 auVar15 [16];
  
  puVar2 = &stack0xffffffffffffffd0;
  puVar14 = &stack0xfffffffffffffff0;
  if (param_2 == 0) {
    unaff_x30 = &Core_Networking_UsableExtensions__PrintInternal;
    auVar15 = func_0x00f78af4();
    param_2 = auVar15._8_8_;
    unaff_x20 = 0;
    uVar1 = auVar15._0_8_;
    lVar7 = param_3;
  }
  else {
    lVar7 = /*FlatBuffers.ByteBuffer$$GetUint*/ func_0x016cce04(param_2,param_1,0);
    puVar2 = (undefined1 *)register0x00000008;
    uVar1 = (ulong)((int)param_1 + 4);
    param_4 = param_3;
    puVar14 = unaff_x29;
  }
  do {
    uVar8 = uVar1;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(long *)(puVar2 + -0x30) = unaff_x22;
    *(long **)(puVar2 + -0x28) = unaff_x21;
    *(ulong *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar14;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    puVar14 = puVar2 + -0x10;
    *(ulong *)(puVar2 + -0x60) = uVar8;
    *(long *)(puVar2 + -0x58) = param_2;
    unaff_x26 = 0x3d1f498;
    unaff_x25 = 0x3d25628;
    unaff_x24 = 0x3d7d168;
    lVar13 = param_4;
    if ((bRam0000000003eb5870 & 1) == 0) {
      func_0x00f78a20(0x3d203a0);
      func_0x00f78a20(0x3d22900);
      func_0x00f78a20(0x3d22910);
      func_0x00f78a20(0x3d1f498);
      func_0x00f78a20(0x3d25628);
      func_0x00f78a20(0x3d7d168);
      func_0x00f78a20(0x3d74de8);
      func_0x00f78a20(0x3d65ed8);
      func_0x00f78a20(0x3d66048);
      func_0x00f78a20(0x3d68b40);
      func_0x00f78a20(0x3d71398);
      func_0x00f78a20(0x3d75d88);
      func_0x00f78a20(0x3d66090);
      bRam0000000003eb5870 = 1;
    }
    unaff_x21 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,10);
    *(int *)(puVar2 + -100) = (int)lVar7;
    uVar9 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,puVar2 + -100);
    lVar12 = 0;
    lVar10 = /*System.String$$Format*/ func_0x029bc688(/*STR('{{SyncId={0}')*/ uRam0000000003d7d168,uVar9);
    unaff_x19 = param_2;
    unaff_x22 = param_4;
    unaff_x23 = lVar7;
    if (unaff_x21 != (long *)0x0) {
      uVar9 = unaff_x24;
      if ((lVar10 == 0) ||
         (lVar7 = func_0x00f78adc(lVar10,*(undefined8 *)(*unaff_x21 + 0x40)), lVar7 != 0)) {
        if ((int)unaff_x21[3] != 0) {
          unaff_x25 = 0x3d66000;
          unaff_x21[4] = lVar10;
          uVar3 = Core_Networking_UsableBase__get_GroupId(puVar2 + -0x60);
          puVar2[-0x65] = uVar3;
          uVar9 = func_0x00f78ae0(/*byte_TypeInfo*/ uRam0000000003d203a0,puVar2 + -0x65);
          lVar12 = 0;
          lVar10 = /*System.String$$Format*/ func_0x029bc688(/*STR(' GroupId={0}')*/ uRam0000000003d66090,uVar9);
          uVar9 = 0x3d203a0;
          if ((lVar10 != 0) &&
             (lVar7 = func_0x00f78adc(lVar10,*(undefined8 *)(*unaff_x21 + 0x40)), lVar7 == 0))
          goto code_r0x01662cdc;
          if ((*(uint *)(unaff_x21 + 3) & 0xfffffffe) != 0) {
            unaff_x25 = 0x3d66000;
            unaff_x21[5] = lVar10;
            uVar3 = Core_Networking_UsableBase__get_ChargesRemaining(puVar2 + -0x60);
            puVar2[-0x66] = uVar3;
            uVar9 = func_0x00f78ae0(/*byte_TypeInfo*/ uRam0000000003d203a0,puVar2 + -0x66);
            lVar12 = 0;
            lVar10 = /*System.String$$Format*/ func_0x029bc688(/*STR(' ChargesRemaining={0} ')*/ uRam0000000003d66048,uVar9);
            uVar9 = 0x3d203a0;
            if ((lVar10 != 0) &&
               (lVar7 = func_0x00f78adc(lVar10,*(undefined8 *)(*unaff_x21 + 0x40)), lVar7 == 0))
            goto code_r0x01662cdc;
            if (2 < *(uint *)(unaff_x21 + 3)) {
              uVar9 = 0x3d22000;
              unaff_x25 = 0x3d75000;
              unaff_x21[6] = lVar10;
              uVar4 = Core_Networking_UsableBase__get_UsableKey(puVar2 + -0x60);
              *(undefined2 *)(puVar2 + -0x68) = uVar4;
              uVar11 = func_0x00f78ae0(/*short_TypeInfo*/ uRam0000000003d22900,puVar2 + -0x68);
              lVar12 = 0;
              lVar10 = /*System.String$$Format*/ func_0x029bc688(/*STR('UsableKey={0} ')*/ uRam0000000003d75d88,uVar11);
              if ((lVar10 != 0) &&
                 (lVar7 = func_0x00f78adc(lVar10,*(undefined8 *)(*unaff_x21 + 0x40)), lVar7 == 0))
              goto code_r0x01662cdc;
              uVar5 = (uint)unaff_x21[3];
              if ((unaff_x21[3] & 0xfffffffcU) != 0) {
                unaff_x24 = 0x3d68b40;
                uVar9 = 0x3d68b40;
                unaff_x21[7] = lVar10;
                if (/*STR('Action=')*/ lRam0000000003d68b40 != 0) {
                  lVar7 = func_0x00f78adc(/*STR('Action=')*/ lRam0000000003d68b40,*(undefined8 *)(*unaff_x21 + 0x40));
                  if (lVar7 == 0) goto code_r0x01662cdc;
                  uVar5 = (uint)unaff_x21[3];
                }
                if (4 < uVar5) {
                  unaff_x21[8] = /*STR('Action=')*/ lRam0000000003d68b40;
                  uVar5 = Core_Networking_UsableBase__get_Action(puVar2 + -0x60);
                  unaff_x23 = lVar10;
                  if (param_4 == 0) goto code_r0x01662ce8;
                  if (uVar5 < *(uint *)(param_4 + 0x18)) {
                    param_4 = *(long *)(param_4 + (ulong)uVar5 * 8 + 0x20);
                    if ((param_4 != 0) &&
                       (lVar7 = func_0x00f78adc(param_4,*(undefined8 *)(*unaff_x21 + 0x40)),
                       lVar7 == 0)) goto code_r0x01662cdc;
                    uVar5 = *(uint *)(unaff_x21 + 3);
                    if (5 < uVar5) {
                      lVar10 = 0x3d65ed8;
                      unaff_x21[9] = param_4;
                      if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
                        lVar7 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,
                                                *(undefined8 *)(*unaff_x21 + 0x40));
                        if (lVar7 == 0) goto code_r0x01662cdc;
                        uVar5 = *(uint *)(unaff_x21 + 3);
                      }
                      if (6 < uVar5) {
                        uVar9 = 0x3d74000;
                        unaff_x21[10] = /*STR(' ')*/ lRam0000000003d65ed8;
                        uVar6 = Core_Networking_UsableBase__get_Time(puVar2 + -0x60);
                        *(undefined4 *)(puVar2 + -0x6c) = uVar6;
                        uVar11 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar2 + -0x6c);
                        lVar12 = 0;
                        param_4 = /*System.String$$Format*/ func_0x029bc688(/*STR('Time={0} ')*/ uRam0000000003d74de8,uVar11);
                        if ((param_4 != 0) &&
                           (lVar7 = func_0x00f78adc(param_4,*(undefined8 *)(*unaff_x21 + 0x40)),
                           lVar7 == 0)) goto code_r0x01662cdc;
                        uVar5 = (uint)unaff_x21[3];
                        if ((unaff_x21[3] & 0xfffffff8U) != 0) {
                          lVar10 = 0x3d71398;
                          unaff_x21[0xb] = param_4;
                          if (/*STR('Position=')*/ lRam0000000003d71398 != 0) {
                            lVar7 = func_0x00f78adc(/*STR('Position=')*/ lRam0000000003d71398,
                                                    *(undefined8 *)(*unaff_x21 + 0x40));
                            if (lVar7 == 0) goto code_r0x01662cdc;
                            uVar5 = (uint)unaff_x21[3];
                          }
                          if (8 < uVar5) {
                            unaff_x21[0xc] = /*STR('Position=')*/ lRam0000000003d71398;
                            param_2 = /*Core.Networking.UsableExtensions$$Print*/ func_0x01662cf0(uVar8 & 0xffffffff,param_2);
                            if ((param_2 != 0) &&
                               (lVar7 = func_0x00f78adc(param_2,*(undefined8 *)(*unaff_x21 + 0x40)),
                               lVar7 == 0)) goto code_r0x01662cdc;
                            if (9 < *(uint *)(unaff_x21 + 3)) {
                              unaff_x21[0xd] = param_2;
                              /*System.String$$Concat*/ func_0x029cfadc(unaff_x21,0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar11 = func_0x00f78b24();
        unaff_x23 = lVar10;
        unaff_x24 = uVar9;
      }
      else {
code_r0x01662cdc:
        uVar11 = func_0x00f78b14();
        unaff_x23 = lVar10;
        unaff_x24 = uVar9;
      }
      func_0x00f78ac0(uVar11,0);
      unaff_x19 = param_2;
      unaff_x22 = param_4;
    }
code_r0x01662ce8:
    unaff_x30 = &Core_Networking_UsableExtensions__Print;
    auVar15 = func_0x00f78af4();
    param_2 = auVar15._8_8_;
    puVar2 = puVar2 + -0x70;
    uVar1 = auVar15._0_8_;
    lVar7 = lVar12;
    param_4 = lVar13;
    unaff_x20 = uVar8;
  } while( true );
}



// ============================================================
// RVA: 0x16628b4 | Core.Networking.UsableExtensions.PrintInternal
// ============================================================

void Core_Networking_UsableExtensions__PrintInternal
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar13 [16];
  
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  do {
    lVar10 = auVar13._8_8_;
    uVar5 = auVar13._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 (*) [16])((long)register0x00000008 + -0x60) = auVar13;
    unaff_x26 = 0x3d1f498;
    unaff_x25 = 0x3d25628;
    unaff_x24 = 0x3d7d168;
    lVar12 = param_4;
    if ((bRam0000000003eb5870 & 1) == 0) {
      func_0x00f78a20(0x3d203a0);
      func_0x00f78a20(0x3d22900);
      func_0x00f78a20(0x3d22910);
      func_0x00f78a20(0x3d1f498);
      func_0x00f78a20(0x3d25628);
      func_0x00f78a20(0x3d7d168);
      func_0x00f78a20(0x3d74de8);
      func_0x00f78a20(0x3d65ed8);
      func_0x00f78a20(0x3d66048);
      func_0x00f78a20(0x3d68b40);
      func_0x00f78a20(0x3d71398);
      func_0x00f78a20(0x3d75d88);
      func_0x00f78a20(0x3d66090);
      bRam0000000003eb5870 = 1;
    }
    unaff_x21 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,10);
    *(int *)((long)register0x00000008 + -100) = (int)param_3;
    uVar6 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,(undefined1 *)((long)register0x00000008 + -100));
    lVar11 = 0;
    lVar7 = /*System.String$$Format*/ func_0x029bc688(/*STR('{{SyncId={0}')*/ uRam0000000003d7d168,uVar6);
    unaff_x22 = param_4;
    unaff_x23 = param_3;
    if (unaff_x21 != (long *)0x0) {
      uVar6 = unaff_x24;
      if ((lVar7 == 0) ||
         (lVar8 = func_0x00f78adc(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)), lVar8 != 0)) {
        if ((int)unaff_x21[3] != 0) {
          unaff_x25 = 0x3d66000;
          unaff_x21[4] = lVar7;
          uVar1 = Core_Networking_UsableBase__get_GroupId
                            ((undefined1 *)((long)register0x00000008 + -0x60));
          *(undefined1 *)((long)register0x00000008 + -0x65) = uVar1;
          uVar6 = func_0x00f78ae0(/*byte_TypeInfo*/ uRam0000000003d203a0,
                                  (undefined1 *)((long)register0x00000008 + -0x65));
          lVar11 = 0;
          lVar7 = /*System.String$$Format*/ func_0x029bc688(/*STR(' GroupId={0}')*/ uRam0000000003d66090,uVar6);
          uVar6 = 0x3d203a0;
          if ((lVar7 != 0) &&
             (lVar8 = func_0x00f78adc(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)), lVar8 == 0))
          goto LAB_01662cdc;
          if ((*(uint *)(unaff_x21 + 3) & 0xfffffffe) != 0) {
            unaff_x25 = 0x3d66000;
            unaff_x21[5] = lVar7;
            uVar1 = Core_Networking_UsableBase__get_ChargesRemaining
                              ((undefined1 *)((long)register0x00000008 + -0x60));
            *(undefined1 *)((long)register0x00000008 + -0x66) = uVar1;
            uVar6 = func_0x00f78ae0(/*byte_TypeInfo*/ uRam0000000003d203a0,
                                    (undefined1 *)((long)register0x00000008 + -0x66));
            lVar11 = 0;
            lVar7 = /*System.String$$Format*/ func_0x029bc688(/*STR(' ChargesRemaining={0} ')*/ uRam0000000003d66048,uVar6);
            uVar6 = 0x3d203a0;
            if ((lVar7 != 0) &&
               (lVar8 = func_0x00f78adc(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)), lVar8 == 0))
            goto LAB_01662cdc;
            if (2 < *(uint *)(unaff_x21 + 3)) {
              uVar6 = 0x3d22000;
              unaff_x25 = 0x3d75000;
              unaff_x21[6] = lVar7;
              uVar2 = Core_Networking_UsableBase__get_UsableKey
                                ((undefined1 *)((long)register0x00000008 + -0x60));
              *(undefined2 *)((long)register0x00000008 + -0x68) = uVar2;
              uVar9 = func_0x00f78ae0(/*short_TypeInfo*/ uRam0000000003d22900,
                                      (undefined1 *)((long)register0x00000008 + -0x68));
              lVar11 = 0;
              lVar7 = /*System.String$$Format*/ func_0x029bc688(/*STR('UsableKey={0} ')*/ uRam0000000003d75d88,uVar9);
              if ((lVar7 != 0) &&
                 (lVar8 = func_0x00f78adc(lVar7,*(undefined8 *)(*unaff_x21 + 0x40)), lVar8 == 0))
              goto LAB_01662cdc;
              uVar3 = (uint)unaff_x21[3];
              if ((unaff_x21[3] & 0xfffffffcU) != 0) {
                unaff_x24 = 0x3d68b40;
                uVar6 = 0x3d68b40;
                unaff_x21[7] = lVar7;
                if (/*STR('Action=')*/ lRam0000000003d68b40 != 0) {
                  lVar8 = func_0x00f78adc(/*STR('Action=')*/ lRam0000000003d68b40,*(undefined8 *)(*unaff_x21 + 0x40));
                  if (lVar8 == 0) goto LAB_01662cdc;
                  uVar3 = (uint)unaff_x21[3];
                }
                if (4 < uVar3) {
                  unaff_x21[8] = /*STR('Action=')*/ lRam0000000003d68b40;
                  uVar3 = Core_Networking_UsableBase__get_Action
                                    ((undefined1 *)((long)register0x00000008 + -0x60));
                  unaff_x23 = lVar7;
                  if (param_4 == 0) goto LAB_01662ce8;
                  if (uVar3 < *(uint *)(param_4 + 0x18)) {
                    param_4 = *(long *)(param_4 + (ulong)uVar3 * 8 + 0x20);
                    if ((param_4 != 0) &&
                       (lVar8 = func_0x00f78adc(param_4,*(undefined8 *)(*unaff_x21 + 0x40)),
                       lVar8 == 0)) goto LAB_01662cdc;
                    uVar3 = *(uint *)(unaff_x21 + 3);
                    if (5 < uVar3) {
                      lVar7 = 0x3d65ed8;
                      unaff_x21[9] = param_4;
                      if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
                        lVar8 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,
                                                *(undefined8 *)(*unaff_x21 + 0x40));
                        if (lVar8 == 0) goto LAB_01662cdc;
                        uVar3 = *(uint *)(unaff_x21 + 3);
                      }
                      if (6 < uVar3) {
                        uVar6 = 0x3d74000;
                        unaff_x21[10] = /*STR(' ')*/ lRam0000000003d65ed8;
                        uVar4 = Core_Networking_UsableBase__get_Time
                                          ((undefined1 *)((long)register0x00000008 + -0x60));
                        *(undefined4 *)((long)register0x00000008 + -0x6c) = uVar4;
                        uVar9 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,
                                                (undefined1 *)((long)register0x00000008 + -0x6c));
                        lVar11 = 0;
                        param_4 = /*System.String$$Format*/ func_0x029bc688(/*STR('Time={0} ')*/ uRam0000000003d74de8,uVar9);
                        if ((param_4 != 0) &&
                           (lVar8 = func_0x00f78adc(param_4,*(undefined8 *)(*unaff_x21 + 0x40)),
                           lVar8 == 0)) goto LAB_01662cdc;
                        uVar3 = (uint)unaff_x21[3];
                        if ((unaff_x21[3] & 0xfffffff8U) != 0) {
                          lVar7 = 0x3d71398;
                          unaff_x21[0xb] = param_4;
                          if (/*STR('Position=')*/ lRam0000000003d71398 != 0) {
                            lVar8 = func_0x00f78adc(/*STR('Position=')*/ lRam0000000003d71398,
                                                    *(undefined8 *)(*unaff_x21 + 0x40));
                            if (lVar8 == 0) goto LAB_01662cdc;
                            uVar3 = (uint)unaff_x21[3];
                          }
                          if (8 < uVar3) {
                            unaff_x21[0xc] = /*STR('Position=')*/ lRam0000000003d71398;
                            lVar10 = /*Core.Networking.UsableExtensions$$Print*/ func_0x01662cf0(uVar5 & 0xffffffff,lVar10);
                            if ((lVar10 != 0) &&
                               (lVar8 = func_0x00f78adc(lVar10,*(undefined8 *)(*unaff_x21 + 0x40)),
                               lVar8 == 0)) goto LAB_01662cdc;
                            if (9 < *(uint *)(unaff_x21 + 3)) {
                              unaff_x21[0xd] = lVar10;
                              /*System.String$$Concat*/ func_0x029cfadc(unaff_x21,0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar9 = func_0x00f78b24();
        unaff_x23 = lVar7;
        unaff_x24 = uVar6;
      }
      else {
LAB_01662cdc:
        uVar9 = func_0x00f78b14();
        unaff_x23 = lVar7;
        unaff_x24 = uVar6;
      }
      func_0x00f78ac0(uVar9,0);
      unaff_x22 = param_4;
    }
LAB_01662ce8:
    unaff_x30 = &Core_Networking_UsableExtensions__Print;
    auVar13 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    param_3 = lVar11;
    param_4 = lVar12;
    unaff_x19 = lVar10;
    unaff_x20 = uVar5;
  } while( true );
}



// ============================================================
// RVA: 0x1662cec | Core.Networking.UsableExtensions.Print
// ============================================================

void Core_Networking_UsableExtensions__Print
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar13 [16];
  
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  do {
    lVar9 = auVar13._8_8_;
    uVar10 = auVar13._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 (*) [16])((long)register0x00000008 + -0x60) = auVar13;
    unaff_x26 = 0x3d1f498;
    unaff_x25 = 0x3d25628;
    unaff_x24 = 0x3d7d168;
    lVar12 = param_4;
    if ((bRam0000000003eb5870 & 1) == 0) {
      func_0x00f78a20(0x3d203a0);
      func_0x00f78a20(0x3d22900);
      func_0x00f78a20(0x3d22910);
      func_0x00f78a20(0x3d1f498);
      func_0x00f78a20(0x3d25628);
      func_0x00f78a20(0x3d7d168);
      func_0x00f78a20(0x3d74de8);
      func_0x00f78a20(0x3d65ed8);
      func_0x00f78a20(0x3d66048);
      func_0x00f78a20(0x3d68b40);
      func_0x00f78a20(0x3d71398);
      func_0x00f78a20(0x3d75d88);
      func_0x00f78a20(0x3d66090);
      bRam0000000003eb5870 = 1;
    }
    unaff_x21 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,10);
    *(int *)((long)register0x00000008 + -100) = (int)param_3;
    uVar5 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,(undefined1 *)((long)register0x00000008 + -100));
    lVar11 = 0;
    lVar6 = /*System.String$$Format*/ func_0x029bc688(/*STR('{{SyncId={0}')*/ uRam0000000003d7d168,uVar5);
    unaff_x22 = param_4;
    unaff_x23 = param_3;
    if (unaff_x21 != (long *)0x0) {
      uVar5 = unaff_x24;
      if ((lVar6 == 0) ||
         (lVar7 = func_0x00f78adc(lVar6,*(undefined8 *)(*unaff_x21 + 0x40)), lVar7 != 0)) {
        if ((int)unaff_x21[3] != 0) {
          unaff_x25 = 0x3d66000;
          unaff_x21[4] = lVar6;
          uVar1 = Core_Networking_UsableBase__get_GroupId
                            ((undefined1 *)((long)register0x00000008 + -0x60));
          *(undefined1 *)((long)register0x00000008 + -0x65) = uVar1;
          uVar5 = func_0x00f78ae0(/*byte_TypeInfo*/ uRam0000000003d203a0,
                                  (undefined1 *)((long)register0x00000008 + -0x65));
          lVar11 = 0;
          lVar6 = /*System.String$$Format*/ func_0x029bc688(/*STR(' GroupId={0}')*/ uRam0000000003d66090,uVar5);
          uVar5 = 0x3d203a0;
          if ((lVar6 != 0) &&
             (lVar7 = func_0x00f78adc(lVar6,*(undefined8 *)(*unaff_x21 + 0x40)), lVar7 == 0))
          goto LAB_01662cdc;
          if ((*(uint *)(unaff_x21 + 3) & 0xfffffffe) != 0) {
            unaff_x25 = 0x3d66000;
            unaff_x21[5] = lVar6;
            uVar1 = Core_Networking_UsableBase__get_ChargesRemaining
                              ((undefined1 *)((long)register0x00000008 + -0x60));
            *(undefined1 *)((long)register0x00000008 + -0x66) = uVar1;
            uVar5 = func_0x00f78ae0(/*byte_TypeInfo*/ uRam0000000003d203a0,
                                    (undefined1 *)((long)register0x00000008 + -0x66));
            lVar11 = 0;
            lVar6 = /*System.String$$Format*/ func_0x029bc688(/*STR(' ChargesRemaining={0} ')*/ uRam0000000003d66048,uVar5);
            uVar5 = 0x3d203a0;
            if ((lVar6 != 0) &&
               (lVar7 = func_0x00f78adc(lVar6,*(undefined8 *)(*unaff_x21 + 0x40)), lVar7 == 0))
            goto LAB_01662cdc;
            if (2 < *(uint *)(unaff_x21 + 3)) {
              uVar5 = 0x3d22000;
              unaff_x25 = 0x3d75000;
              unaff_x21[6] = lVar6;
              uVar2 = Core_Networking_UsableBase__get_UsableKey
                                ((undefined1 *)((long)register0x00000008 + -0x60));
              *(undefined2 *)((long)register0x00000008 + -0x68) = uVar2;
              uVar8 = func_0x00f78ae0(/*short_TypeInfo*/ uRam0000000003d22900,
                                      (undefined1 *)((long)register0x00000008 + -0x68));
              lVar11 = 0;
              lVar6 = /*System.String$$Format*/ func_0x029bc688(/*STR('UsableKey={0} ')*/ uRam0000000003d75d88,uVar8);
              if ((lVar6 != 0) &&
                 (lVar7 = func_0x00f78adc(lVar6,*(undefined8 *)(*unaff_x21 + 0x40)), lVar7 == 0))
              goto LAB_01662cdc;
              uVar3 = (uint)unaff_x21[3];
              if ((unaff_x21[3] & 0xfffffffcU) != 0) {
                unaff_x24 = 0x3d68b40;
                uVar5 = 0x3d68b40;
                unaff_x21[7] = lVar6;
                if (/*STR('Action=')*/ lRam0000000003d68b40 != 0) {
                  lVar7 = func_0x00f78adc(/*STR('Action=')*/ lRam0000000003d68b40,*(undefined8 *)(*unaff_x21 + 0x40));
                  if (lVar7 == 0) goto LAB_01662cdc;
                  uVar3 = (uint)unaff_x21[3];
                }
                if (4 < uVar3) {
                  unaff_x21[8] = /*STR('Action=')*/ lRam0000000003d68b40;
                  uVar3 = Core_Networking_UsableBase__get_Action
                                    ((undefined1 *)((long)register0x00000008 + -0x60));
                  unaff_x23 = lVar6;
                  if (param_4 == 0) goto LAB_01662ce8;
                  if (uVar3 < *(uint *)(param_4 + 0x18)) {
                    param_4 = *(long *)(param_4 + (ulong)uVar3 * 8 + 0x20);
                    if ((param_4 != 0) &&
                       (lVar7 = func_0x00f78adc(param_4,*(undefined8 *)(*unaff_x21 + 0x40)),
                       lVar7 == 0)) goto LAB_01662cdc;
                    uVar3 = *(uint *)(unaff_x21 + 3);
                    if (5 < uVar3) {
                      lVar6 = 0x3d65ed8;
                      unaff_x21[9] = param_4;
                      if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
                        lVar7 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,
                                                *(undefined8 *)(*unaff_x21 + 0x40));
                        if (lVar7 == 0) goto LAB_01662cdc;
                        uVar3 = *(uint *)(unaff_x21 + 3);
                      }
                      if (6 < uVar3) {
                        uVar5 = 0x3d74000;
                        unaff_x21[10] = /*STR(' ')*/ lRam0000000003d65ed8;
                        uVar4 = Core_Networking_UsableBase__get_Time
                                          ((undefined1 *)((long)register0x00000008 + -0x60));
                        *(undefined4 *)((long)register0x00000008 + -0x6c) = uVar4;
                        uVar8 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,
                                                (undefined1 *)((long)register0x00000008 + -0x6c));
                        lVar11 = 0;
                        param_4 = /*System.String$$Format*/ func_0x029bc688(/*STR('Time={0} ')*/ uRam0000000003d74de8,uVar8);
                        if ((param_4 != 0) &&
                           (lVar7 = func_0x00f78adc(param_4,*(undefined8 *)(*unaff_x21 + 0x40)),
                           lVar7 == 0)) goto LAB_01662cdc;
                        uVar3 = (uint)unaff_x21[3];
                        if ((unaff_x21[3] & 0xfffffff8U) != 0) {
                          lVar6 = 0x3d71398;
                          unaff_x21[0xb] = param_4;
                          if (/*STR('Position=')*/ lRam0000000003d71398 != 0) {
                            lVar7 = func_0x00f78adc(/*STR('Position=')*/ lRam0000000003d71398,
                                                    *(undefined8 *)(*unaff_x21 + 0x40));
                            if (lVar7 == 0) goto LAB_01662cdc;
                            uVar3 = (uint)unaff_x21[3];
                          }
                          if (8 < uVar3) {
                            unaff_x21[0xc] = /*STR('Position=')*/ lRam0000000003d71398;
                            lVar9 = /*Core.Networking.UsableExtensions$$Print*/ func_0x01662cf0(uVar10 & 0xffffffff,lVar9);
                            if ((lVar9 != 0) &&
                               (lVar7 = func_0x00f78adc(lVar9,*(undefined8 *)(*unaff_x21 + 0x40)),
                               lVar7 == 0)) goto LAB_01662cdc;
                            if (9 < *(uint *)(unaff_x21 + 3)) {
                              unaff_x21[0xd] = lVar9;
                              /*System.String$$Concat*/ func_0x029cfadc(unaff_x21,0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar8 = func_0x00f78b24();
        unaff_x23 = lVar6;
        unaff_x24 = uVar5;
      }
      else {
LAB_01662cdc:
        uVar8 = func_0x00f78b14();
        unaff_x23 = lVar6;
        unaff_x24 = uVar5;
      }
      func_0x00f78ac0(uVar8,0);
      unaff_x22 = param_4;
    }
LAB_01662ce8:
    unaff_x30 = Core_Networking_UsableExtensions__Print;
    auVar13 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    param_3 = lVar11;
    param_4 = lVar12;
    unaff_x19 = lVar9;
    unaff_x20 = uVar10;
  } while( true );
}



// ============================================================
// RVA: 0x1662cf0 | Core.Networking.UsableExtensions.Print
// ============================================================

undefined8 Core_Networking_UsableExtensions__Print(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_40 = param_1;
  lStack_38 = param_2;
  if ((bRam0000000003eb586f & 1) == 0) {
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d7d178);
    bRam0000000003eb586f = 1;
  }
  if (param_2 != 0) {
    uStack_44 = /*FlatBuffers.ByteBuffer$$GetFloat*/ func_0x016cce2c(param_2,param_1,0);
    uVar1 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&uStack_44);
    uStack_48 = /*Core.Networking.Vec3$$get_Y*/ func_0x0165aa2c(&uStack_40);
    uVar2 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&uStack_48);
    uStack_4c = /*Core.Networking.Vec3$$get_Z*/ func_0x0165aa58(&uStack_40);
    uVar3 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&uStack_4c);
    uVar1 = /*System.String$$Format*/ func_0x029bdf30(/*STR('{{{0},{1},{2}}}')*/ uRam0000000003d7d178,uVar1,uVar2,uVar3,0);
    return uVar1;
  }
  lVar4 = func_0x00f78af4();
  return *(undefined8 *)(lVar4 + 8);
}



