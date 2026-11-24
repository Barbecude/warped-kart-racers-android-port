// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ReplicatorProviderEsq

// ============================================================
// RVA: 0x167f0ac | Core.Services.ReplicatorProviderEsq.GetOwnerState
// ============================================================

void Core_Services_ReplicatorProviderEsq__GetOwnerState
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  /*Core.Services.ReplicatorProviderEsq$$GetOwnerState*/ func_0x01680c7c(param_5,&uStack_38,&uStack_40,&uStack_44);
  uVar1 = Core_Services_ReplicatorFloatCompression__DeQuantize
                    (0x44fa0000,(ulong)CONCAT24(uStack_34,uStack_38));
  *param_6 = uVar1;
  param_6[1] = param_2;
  param_6[2] = param_3;
  uVar1 = Core_Services_ReplicatorFloatCompression__DeQuantize
                    (0x42c80000,(ulong)CONCAT24(uStack_3c,uStack_40));
  *param_7 = uVar1;
  param_7[1] = param_2;
  param_7[2] = param_3;
  uVar1 = Core_Services_ReplicatorFloatCompression__DeQuantize(0x3f800000,uStack_44);
  *param_8 = uVar1;
  param_8[1] = param_2;
  param_8[2] = param_3;
  param_8[3] = param_4;
  return;
}



// ============================================================
// RVA: 0x167f23c | Core.Services.ReplicatorProviderEsq.EnableReducedMode
// ============================================================

void Core_Services_ReplicatorProviderEsq__EnableReducedMode(long param_1)

{
  *(undefined1 *)(param_1 + 0xf0) = 1;
  return;
}



// ============================================================
// RVA: 0x167f328 | Core.Services.ReplicatorProviderEsq.OnOwnerChanged
// ============================================================

void Core_Services_ReplicatorProviderEsq__OnOwnerChanged(void)

{
  return;
}



// ============================================================
// RVA: 0x167f32c | Core.Services.ReplicatorProviderEsq.OnUpdateTransform
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x167ff9c | Core.Services.ReplicatorProviderEsq.OnClear
// ============================================================

/* WARNING: Possible PIC construction at 0x01680840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01680ba0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01680844) */
/* WARNING: Removing unreachable block (ram,0x01680ba4) */
/* WARNING: Removing unreachable block (ram,0x01680ba8) */

long * Core_Services_ReplicatorProviderEsq__OnClear
                 (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 ****ppppuVar17;
  undefined *puVar18;
  float fVar19;
  float extraout_s0;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_1b0 [16];
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  undefined1 auStack_190 [12];
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined2 uStack_17c;
  undefined4 uStack_178;
  undefined2 uStack_174;
  undefined8 uStack_170;
  long *plStack_168;
  undefined8 ***pppuStack_160;
  code *pcStack_158;
  undefined1 ***pppuStack_110;
  code *pcStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined2 uStack_68;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined4 uStack_64;
  
  *(undefined1 *)(param_4 + 0x30) = 0;
  *(undefined2 *)(param_4 + 0x100) = 0;
  *(undefined8 *)(param_4 + 0x40) = 0;
  *(undefined8 *)(param_4 + 0x38) = 0;
  *(undefined8 *)(param_4 + 0x50) = 0;
  *(undefined8 *)(param_4 + 0x48) = 0;
  *(undefined8 *)(param_4 + 0x60) = 0;
  *(undefined8 *)(param_4 + 0x58) = 0;
  *(undefined8 *)(param_4 + 0x70) = 0;
  *(undefined8 *)(param_4 + 0x68) = 0;
  *(undefined8 *)(param_4 + 0x78) = 0;
  *(undefined8 *)(param_4 + 0x9c) = 0;
  *(undefined8 *)(param_4 + 0xac) = 0;
  *(undefined8 *)(param_4 + 0xa4) = 0;
  *(undefined8 *)(param_4 + 0xc0) = 0;
  *(undefined8 *)(param_4 + 0xb8) = 0;
  *(undefined8 *)(param_4 + 0xd0) = 0;
  *(undefined8 *)(param_4 + 200) = 0;
  *(undefined8 *)(param_4 + 0xe0) = 0;
  *(undefined8 *)(param_4 + 0xd8) = 0;
  *(undefined8 *)(param_4 + 0xe9) = 0;
  *(undefined8 *)(param_4 + 0xe1) = 0;
  lVar16 = *(long *)(param_4 + 0xf8);
  fVar19 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  if (lVar16 != 0) {
    fVar20 = 0.0;
    fVar21 = fVar19;
    plVar10 = (long *)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(float *)(lVar16 + 0x38) = param_2;
    *(float *)(lVar16 + 0x3c) = param_3;
    *(float *)(lVar16 + 0x10) = fVar19;
    *(float *)(lVar16 + 0x14) = param_2;
    *(undefined8 *)(lVar16 + 0x58) = 0;
    *(undefined8 *)(lVar16 + 0x60) = 0;
    *(undefined8 *)(lVar16 + 0x40) = 0;
    *(undefined8 *)(lVar16 + 0x48) = 0;
    *(undefined8 *)(lVar16 + 0x50) = 0;
    *(float *)(lVar16 + 0x18) = param_3;
    *(float *)(lVar16 + 0x1c) = extraout_s0;
    *(float *)(lVar16 + 0x20) = fVar20;
    *(float *)(lVar16 + 0x24) = fVar21;
    *(float *)(lVar16 + 0x28) = fVar19 + extraout_s0 * 0.0;
    *(float *)(lVar16 + 0x2c) = param_2 + fVar20 * 0.0;
    *(float *)(lVar16 + 0x30) = param_3 + fVar21 * 0.0;
    *(float *)(lVar16 + 0x34) = fVar19;
    return plVar10;
  }
  lVar16 = func_0x00f78af4();
  if ((bRam0000000003eb59ef & 1) == 0) {
    func_0x00f78a20(0x3d20260);
    func_0x00f78a20(0x3d22900);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d24a58);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d24ee8);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d73060);
    func_0x00f78a20(0x3d73048);
    func_0x00f78a20(0x3d73038);
    func_0x00f78a20(0x3d73028);
    func_0x00f78a20(0x3d7d1e8);
    func_0x00f78a20(0x3d760d0);
    func_0x00f78a20(0x3d7d100);
    bRam0000000003eb59ef = 1;
  }
  plVar10 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,7);
  if (plVar10 != (long *)0x0) {
    if ((/*STR('{{')*/ lRam0000000003d7d100 == 0) ||
       (lVar3 = func_0x00f78adc(/*STR('{{')*/ lRam0000000003d7d100,*(undefined8 *)(*plVar10 + 0x40)), lVar3 != 0))
    {
      if ((int)plVar10[3] != 0) {
        plVar10[4] = /*STR('{{')*/ lRam0000000003d7d100;
        uStack_64 = *(undefined4 *)(lVar16 + 0x40);
        uVar4 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_64);
        lVar3 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncId={0} ')*/ uRam0000000003d73038,uVar4,0);
        if ((lVar3 != 0) &&
           (lVar5 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
        goto LAB_01680440;
        if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
          plVar10[5] = lVar3;
          uStack_65 = *(undefined1 *)(lVar16 + 0x44);
          uVar4 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&uStack_65);
          lVar3 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncOwner={0} ')*/ uRam0000000003d73060,uVar4,0);
          if ((lVar3 != 0) &&
             (lVar5 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
          goto LAB_01680440;
          if (2 < *(uint *)(plVar10 + 3)) {
            plVar10[6] = lVar3;
            uStack_66 = *(undefined1 *)(lVar16 + 0x45);
            uVar4 = func_0x00f78ae0(/*Core.Services.SyncCategory_TypeInfo*/ uRam0000000003d24ee8,&uStack_66);
            lVar3 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncCategory={0} ')*/ uRam0000000003d73028,uVar4,0);
            if ((lVar3 != 0) &&
               (lVar5 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
            goto LAB_01680440;
            if ((*(uint *)(plVar10 + 3) & 0xfffffffc) != 0) {
              plVar10[7] = lVar3;
              uStack_68 = *(undefined2 *)(lVar16 + 0x46);
              uVar4 = func_0x00f78ae0(/*short_TypeInfo*/ uRam0000000003d22900,&uStack_68);
              uStack_6c = (uint)*(byte *)(lVar16 + 0x46);
              uVar6 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_6c);
              iStack_70 = (int)*(char *)(lVar16 + 0x47);
              uVar7 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_70);
              lVar3 = /*System.String$$Format*/ func_0x029bdf30(/*STR('SyncInstanceId={0}({1}:{2}) ')*/ uRam0000000003d73048,uVar4,uVar6,uVar7,0);
              if ((lVar3 != 0) &&
                 (lVar5 = func_0x00f78adc(lVar3,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
              goto LAB_01680440;
              if (4 < *(uint *)(plVar10 + 3)) {
                plVar10[8] = lVar3;
                if (*(long *)(lVar16 + 0x20) == 0) {
                  uStack_74 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                }
                else {
                  uStack_74 = *(undefined4 *)(*(long *)(lVar16 + 0x20) + 0x9c);
                }
                uVar4 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&uStack_74);
                if (*(long *)(lVar16 + 0x20) == 0) {
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                }
                else {
                  param_2 = *(float *)(*(long *)(lVar16 + 0x20) + 0xa0);
                }
                fStack_78 = param_2;
                uVar6 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&fStack_78);
                if (*(long *)(lVar16 + 0x20) == 0) {
                  /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                }
                else {
                  param_3 = *(float *)(*(long *)(lVar16 + 0x20) + 0xa4);
                }
                fStack_7c = param_3;
                uVar7 = func_0x00f78ae0(/*float_TypeInfo*/ uRam0000000003d24a58,&fStack_7c);
                lVar16 = /*System.String$$Format*/ func_0x029bdf30(/*STR('Velocity={0:F2},{1:F2},{2:F2} ')*/ uRam0000000003d760d0,uVar4,uVar6,uVar7,0);
                if ((lVar16 != 0) &&
                   (lVar3 = func_0x00f78adc(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar3 == 0))
                goto LAB_01680440;
                uVar14 = *(uint *)(plVar10 + 3);
                if (5 < uVar14) {
                  plVar10[9] = lVar16;
                  if (/*STR('}}')*/ lRam0000000003d7d1e8 != 0) {
                    lVar16 = func_0x00f78adc(/*STR('}}')*/ lRam0000000003d7d1e8,*(undefined8 *)(*plVar10 + 0x40));
                    if (lVar16 == 0) goto LAB_01680440;
                    uVar14 = *(uint *)(plVar10 + 3);
                  }
                  if (6 < uVar14) {
                    plVar10[10] = /*STR('}}')*/ lRam0000000003d7d1e8;
                    plVar10 = (long *)/*System.String$$Concat*/ func_0x029cfadc(plVar10,0);
                    return plVar10;
                  }
                }
              }
            }
          }
        }
      }
      uVar4 = func_0x00f78b24();
    }
    else {
LAB_01680440:
      uVar4 = func_0x00f78b14();
    }
    func_0x00f78ac0(uVar4,0);
  }
  lVar16 = func_0x00f78af4();
  pcStack_88 = Core_Services_Replicator__Start;
  puStack_90 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb59f0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d35530);
    func_0x00f78a20(0x3d1c8d0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d5c480);
    func_0x00f78a20(0x3d63b80);
    func_0x00f78a20(0x3d28928);
    func_0x00f78a20(0x3d25710);
    bRam0000000003eb59f0 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8) == 0) {
    if (((*(ushort *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar15 = *(undefined8 **)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8);
    lVar3 = puVar15[1];
    if (lVar3 == 0) {
      if (((*(ushort *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xe0) == 0)) {
        func_0x00f78ad0();
        puVar15 = *(undefined8 **)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8);
      }
      uVar4 = *puVar15;
      lVar3 = func_0x00f78aec(/*System.Func<bool>_TypeInfo*/ uRam0000000003d1c8d0);
      /*System.Func<bool>$$.ctor*/ func_0x02163070(lVar3,uVar4,uRam0000000003d63b80,uRam0000000003d35530);
      *(long *)(*(long *)(/*Core.Services.Replicator.<>c_TypeInfo*/ lRam0000000003d28928 + 0xb8) + 8) = lVar3;
    }
    if (((*(ushort *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UniRx.Async.UniTask_TypeInfo*/ lRam0000000003d25710 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UniRx.Async.UniTask$$WaitUntil*/ func_0x02fa1ff4(lVar3,4,0,0);
    uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar4,lVar16,uRam0000000003d5c480,0);
    if ((bRam0000000003ebc80e & 1) == 0) {
      func_0x00f78a20(0x3d52108,uVar4,0);
      bRam0000000003ebc80e = 1;
    }
    puStack_d8 = (undefined *)0x0;
    ppuStack_e0 = (undefined1 **)0xffffffff;
    lStack_f0 = 0;
    lStack_e8 = 0;
    /*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$Start<UniTaskExtensions.<ContinueWith>d__29>*/ func_0x0181e1cc(&lStack_f0,&ppuStack_e0,uRam0000000003d52108);
    plVar10 = (long *)/*UniRx.Async.CompilerServices.AsyncUniTaskMethodBuilder$$get_Task*/ func_0x02f99570((ulong)&ppuStack_e0 | 8);
    return plVar10;
  }
  lVar3 = 0x3d22970;
  if ((bRam0000000003eb59f1 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d24408);
    func_0x00f78a20(0x3d5c488);
    func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f1 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = 0x3cbe000;
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  *(long *)(lVar16 + 0x18) = lVar5;
  if (lVar5 == 0) {
LAB_01680860:
    func_0x00f78af4();
LAB_01680864:
    puVar18 = &Core_Services_ReplicatorProviderEsq___ctor;
    auVar22 = func_0x00f78e5c();
  }
  else {
    lVar3 = *(long *)(lVar5 + 0x148);
    uVar4 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
    /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar4,lVar16,uRam0000000003d5c488,puRam0000000003d2a5c8);
    plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar3,uVar4,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) goto LAB_01680864;
    *(long **)(lVar5 + 0x148) = plVar10;
    lVar5 = *(long *)(lVar16 + 0x18);
    if (lVar5 == 0) goto LAB_01680860;
    lVar3 = *(long *)(lVar5 + 0x140);
    uVar4 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,lVar16,uRam0000000003d5c490,puRam0000000003d2a2a8);
    plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar3,uVar4,0);
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) goto LAB_01680864;
    *(long **)(lVar5 + 0x140) = plVar10;
    lVar3 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq_TypeInfo*/ uRam0000000003d24408);
    auVar22._8_8_ = lVar16;
    auVar22._0_8_ = lVar3;
    puVar18 = (undefined *)0x1680844;
  }
  lVar11 = auVar22._8_8_;
  lVar8 = auVar22._0_8_;
  lStack_100 = lVar5;
  uStack_f8 = uVar4;
  lStack_f0 = lVar3;
  lStack_e8 = lVar16;
  ppuStack_e0 = &puStack_90;
  puStack_d8 = puVar18;
  if ((bRam0000000003eb5a02 & 1) == 0) {
    func_0x00f78a20(0x3d28938);
    func_0x00f78a20(0x3d57978);
    func_0x00f78a20(0x3d578f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d243f8);
    bRam0000000003eb5a02 = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(lVar8,0);
  *(long *)(lVar8 + 0x28) = lVar11;
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  if ((lVar11 != 0) && (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar11,0), lVar16 != 0)) {
    uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar16,uRam0000000003d578f0);
    *(undefined8 *)(lVar8 + 0x10) = uVar4;
    lVar16 = func_0x00f78aec(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ uRam0000000003d243f8);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar16,0);
    *(long *)(lVar8 + 0x18) = lVar16;
    lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar11,0);
    if ((lVar3 != 0) && (uVar4 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar3,uRam0000000003d57978), lVar16 != 0)) {
      Core_Services_ReplicatorFloorClampEsq__Init(lVar16,uVar4);
      uVar4 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq.Extrapolator3_TypeInfo*/ uRam0000000003d28938);
      plVar10 = (long *)/*Core.Services.ReplicatorProviderEsq.Extrapolator3$$.ctor*/ func_0x01682e70();
      *(undefined8 *)(lVar8 + 0xf8) = uVar4;
      return plVar10;
    }
  }
  plVar9 = (long *)func_0x00f78af4();
  pcStack_108 = Core_Services_Replicator__OnDestroy;
  plVar10 = plVar9;
  pppuStack_110 = &ppuStack_e0;
  if ((bRam0000000003eb59f2 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d5c488);
    plVar10 = (long *)func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f2 = 1;
  }
  lVar16 = plVar9[3];
  if (lVar16 == 0) {
    return plVar10;
  }
  uVar6 = *(undefined8 *)(lVar16 + 0x148);
  uVar4 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
  puVar13 = puRam0000000003d2a5c8;
  /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar4,plVar9,uRam0000000003d5c488);
  puVar12 = (undefined4 *)0x0;
  plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar4);
  if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) {
    *(long **)(lVar16 + 0x148) = plVar10;
    lVar16 = plVar9[3];
    if (lVar16 == 0) goto LAB_01680b58;
    uVar6 = *(undefined8 *)(lVar16 + 0x140);
    uVar4 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    puVar13 = puRam0000000003d2a2a8;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,plVar9,uRam0000000003d5c490);
    puVar12 = (undefined4 *)0x0;
    plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,uVar4);
    if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) {
      *(long **)(lVar16 + 0x140) = plVar10;
      plVar9[3] = 0;
      return plVar10;
    }
  }
  func_0x00f78e5c();
LAB_01680b58:
  auVar22 = func_0x00f78af4();
  lVar3 = auVar22._8_8_;
  puVar1 = auStack_190;
  pcStack_158 = Core_Services_Replicator__OnUpdateReplicatorData;
  uStack_170 = uVar6;
  plStack_168 = plVar9;
  pppuStack_160 = &pppuStack_110;
  plVar10 = (long *)Core_Services_Replicator__ShouldSend();
  if ((int)plVar10 == 0) {
    return plVar10;
  }
  uStack_174 = 0;
  uStack_178 = 0;
  uStack_17c = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  lVar5 = *(long *)(auVar22._0_8_ + 0x20);
  if (lVar5 == 0) {
    lVar3 = func_0x00f78af4();
    puVar1 = auStack_1b0;
    pcStack_198 = Core_Services_Replicator__ShouldSend;
    ppppuVar17 = &pppuStack_1a0;
    pppuStack_1a0 = &pppuStack_160;
    auStack_1b0 = auVar22;
    iVar2 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(lVar3,0);
    if (iVar2 == 0) {
      return (long *)0x0;
    }
    lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0);
    if (lVar5 != 0) {
      iVar2 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar5,0);
      if (iVar2 == 0) {
        return (long *)0x0;
      }
      if (*(char *)(lVar3 + 0x44) == '\0') {
        return (long *)0x0;
      }
      plVar10 = *(long **)(lVar3 + 0x18);
      if (plVar10 != (long *)0x0) {
        iVar2 = (**(code **)(*plVar10 + 0x928))(plVar10,*(undefined8 *)(*plVar10 + 0x930));
        if (iVar2 == 0) {
          return (long *)0x0;
        }
        plVar10 = *(long **)(lVar3 + 0x18);
        if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01680c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar10 = (long *)(**(code **)(*plVar10 + 0x2e8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x2f0));
          return plVar10;
        }
      }
    }
    puVar18 = &Core_Services_ReplicatorProviderEsq__GetOwnerState;
    auVar23 = func_0x00f78af4();
  }
  else {
    auVar23._8_8_ = &uStack_178;
    auVar23._0_8_ = lVar5;
    puVar12 = &uStack_180;
    puVar13 = &uStack_184;
    puVar18 = (undefined *)0x1680ba4;
    ppppuVar17 = &pppuStack_160;
  }
  lVar5 = auVar23._0_8_;
  *(long *)(puVar1 + -0x30) = lVar16;
  *(undefined8 *)(puVar1 + -0x28) = uVar4;
  *(long *)(puVar1 + -0x20) = auVar22._0_8_;
  *(long *)(puVar1 + -0x18) = lVar3;
  *(undefined8 *****)(puVar1 + -0x10) = ppppuVar17;
  *(undefined **)(puVar1 + -8) = puVar18;
  uVar4 = Core_Services_ReplicatorFloatCompression__QuantizeToUShort
                    (*(undefined4 *)(lVar5 + 200),*(undefined4 *)(lVar5 + 0xcc),
                     *(undefined4 *)(lVar5 + 0xd0),0x44fa0000);
  *auVar23._8_8_ = (int)uVar4;
  *(short *)(auVar23._8_8_ + 1) = (short)((ulong)uVar4 >> 0x20);
  uVar4 = Core_Services_ReplicatorFloatCompression__QuantizeToUShort
                    (*(undefined4 *)(lVar5 + 0xd4),*(undefined4 *)(lVar5 + 0xd8),
                     *(undefined4 *)(lVar5 + 0xdc),0x42c80000);
  *puVar12 = (int)uVar4;
  *(short *)(puVar12 + 1) = (short)((ulong)uVar4 >> 0x20);
  plVar10 = (long *)Core_Services_ReplicatorFloatCompression__QuantizeToUShort
                              (*(undefined4 *)(lVar5 + 0xe0),*(undefined4 *)(lVar5 + 0xe4),
                               *(undefined4 *)(lVar5 + 0xe8),*(undefined4 *)(lVar5 + 0xec),
                               0x3f800000);
  *puVar13 = (int)plVar10;
  return plVar10;
}



// ============================================================
// RVA: 0x1680868 | Core.Services.ReplicatorProviderEsq..ctor
// ============================================================

/* WARNING: Possible PIC construction at 0x01680ba0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01680ba4) */
/* WARNING: Removing unreachable block (ram,0x01680ba8) */

long * Core_Services_ReplicatorProviderEsq___ctor(long param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 ****ppppuVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_e0 [16];
  undefined8 ***pppuStack_d0;
  code *pcStack_c8;
  undefined1 auStack_c0 [12];
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 **ppuStack_90;
  code *pcStack_88;
  undefined8 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb5a02 & 1) == 0) {
    func_0x00f78a20(0x3d28938);
    func_0x00f78a20(0x3d57978);
    func_0x00f78a20(0x3d578f0);
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d243f8);
    bRam0000000003eb5a02 = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(long *)(param_1 + 0x28) = param_2;
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (cRam0000000003cbe500 == '\0') {
    func_0x00f78a20(0x3d22970);
    cRam0000000003cbe500 = '\x01';
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  if ((param_2 != 0) && (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0), lVar3 != 0)) {
    uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar3,uRam0000000003d578f0);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    lVar3 = func_0x00f78aec(/*Core.Services.ReplicatorFloorClampEsq_TypeInfo*/ uRam0000000003d243f8);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar3,0);
    *(long *)(param_1 + 0x18) = lVar3;
    lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
    if ((lVar5 != 0) && (uVar4 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar5,uRam0000000003d57978), lVar3 != 0)) {
      Core_Services_ReplicatorFloorClampEsq__Init(lVar3,uVar4);
      uVar4 = func_0x00f78aec(/*Core.Services.ReplicatorProviderEsq.Extrapolator3_TypeInfo*/ uRam0000000003d28938);
      plVar6 = (long *)/*Core.Services.ReplicatorProviderEsq.Extrapolator3$$.ctor*/ func_0x01682e70();
      *(undefined8 *)(param_1 + 0xf8) = uVar4;
      return plVar6;
    }
  }
  plVar7 = (long *)func_0x00f78af4();
  pcStack_38 = Core_Services_Replicator__OnDestroy;
  plVar6 = plVar7;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb59f2 & 1) == 0) {
    func_0x00f78a20(0x3d2a2a8);
    func_0x00f78a20(0x3d1b558);
    func_0x00f78a20(0x3d2a5c8);
    func_0x00f78a20(0x3d1b6f0);
    func_0x00f78a20(0x3d5c488);
    plVar6 = (long *)func_0x00f78a20(0x3d5c490);
    bRam0000000003eb59f2 = 1;
  }
  lVar3 = plVar7[3];
  if (lVar3 == 0) {
    return plVar6;
  }
  uVar11 = *(undefined8 *)(lVar3 + 0x148);
  uVar4 = func_0x00f78aec(/*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0);
  puVar10 = puRam0000000003d2a5c8;
  /*System.Action<ulong, int, ReplicatorStream>$$.ctor*/ func_0x01e7275c(uVar4,plVar7,uRam0000000003d5c488);
  puVar9 = (undefined4 *)0x0;
  plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar4);
  if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<ulong, int, ReplicatorStream>_TypeInfo*/ lRam0000000003d1b6f0)) {
    *(long **)(lVar3 + 0x148) = plVar6;
    lVar3 = plVar7[3];
    if (lVar3 == 0) goto LAB_01680b58;
    uVar11 = *(undefined8 *)(lVar3 + 0x140);
    uVar4 = func_0x00f78aec(/*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558);
    puVar10 = puRam0000000003d2a2a8;
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,plVar7,uRam0000000003d5c490);
    puVar9 = (undefined4 *)0x0;
    plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,uVar4);
    if ((plVar6 == (long *)0x0) || (*plVar6 == /*System.Action<ReplicatorOutput>_TypeInfo*/ lRam0000000003d1b558)) {
      *(long **)(lVar3 + 0x140) = plVar6;
      plVar7[3] = 0;
      return plVar6;
    }
  }
  func_0x00f78e5c();
LAB_01680b58:
  auVar14 = func_0x00f78af4();
  lVar5 = auVar14._8_8_;
  puVar1 = auStack_c0;
  pcStack_88 = Core_Services_Replicator__OnUpdateReplicatorData;
  uStack_a0 = uVar11;
  plStack_98 = plVar7;
  ppuStack_90 = &puStack_40;
  plVar6 = (long *)Core_Services_Replicator__ShouldSend();
  if ((int)plVar6 == 0) {
    return plVar6;
  }
  uStack_a4 = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  lVar8 = *(long *)(auVar14._0_8_ + 0x20);
  if (lVar8 == 0) {
    lVar5 = func_0x00f78af4();
    puVar1 = auStack_e0;
    pcStack_c8 = Core_Services_Replicator__ShouldSend;
    ppppuVar12 = &pppuStack_d0;
    pppuStack_d0 = &ppuStack_90;
    auStack_e0 = auVar14;
    iVar2 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(lVar5,0);
    if (iVar2 == 0) {
      return (long *)0x0;
    }
    lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0);
    if (lVar8 != 0) {
      iVar2 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar8,0);
      if (iVar2 == 0) {
        return (long *)0x0;
      }
      if (*(char *)(lVar5 + 0x44) == '\0') {
        return (long *)0x0;
      }
      plVar6 = *(long **)(lVar5 + 0x18);
      if (plVar6 != (long *)0x0) {
        iVar2 = (**(code **)(*plVar6 + 0x928))(plVar6,*(undefined8 *)(*plVar6 + 0x930));
        if (iVar2 == 0) {
          return (long *)0x0;
        }
        plVar6 = *(long **)(lVar5 + 0x18);
        if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01680c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar6 = (long *)(**(code **)(*plVar6 + 0x2e8))(plVar6,*(undefined8 *)(*plVar6 + 0x2f0));
          return plVar6;
        }
      }
    }
    puVar13 = &Core_Services_ReplicatorProviderEsq__GetOwnerState;
    auVar15 = func_0x00f78af4();
  }
  else {
    auVar15._8_8_ = &uStack_a8;
    auVar15._0_8_ = lVar8;
    puVar9 = &uStack_b0;
    puVar10 = &uStack_b4;
    puVar13 = (undefined *)0x1680ba4;
    ppppuVar12 = (undefined8 ****)&ppuStack_90;
  }
  lVar8 = auVar15._0_8_;
  *(long *)(puVar1 + -0x30) = lVar3;
  *(undefined8 *)(puVar1 + -0x28) = uVar4;
  *(long *)(puVar1 + -0x20) = auVar14._0_8_;
  *(long *)(puVar1 + -0x18) = lVar5;
  *(undefined8 *****)(puVar1 + -0x10) = ppppuVar12;
  *(undefined **)(puVar1 + -8) = puVar13;
  uVar4 = Core_Services_ReplicatorFloatCompression__QuantizeToUShort
                    (*(undefined4 *)(lVar8 + 200),*(undefined4 *)(lVar8 + 0xcc),
                     *(undefined4 *)(lVar8 + 0xd0),0x44fa0000);
  *auVar15._8_8_ = (int)uVar4;
  *(short *)(auVar15._8_8_ + 1) = (short)((ulong)uVar4 >> 0x20);
  uVar4 = Core_Services_ReplicatorFloatCompression__QuantizeToUShort
                    (*(undefined4 *)(lVar8 + 0xd4),*(undefined4 *)(lVar8 + 0xd8),
                     *(undefined4 *)(lVar8 + 0xdc),0x42c80000);
  *puVar9 = (int)uVar4;
  *(short *)(puVar9 + 1) = (short)((ulong)uVar4 >> 0x20);
  plVar6 = (long *)Core_Services_ReplicatorFloatCompression__QuantizeToUShort
                             (*(undefined4 *)(lVar8 + 0xe0),*(undefined4 *)(lVar8 + 0xe4),
                              *(undefined4 *)(lVar8 + 0xe8),*(undefined4 *)(lVar8 + 0xec),0x3f800000
                             );
  *puVar10 = (int)plVar6;
  return plVar6;
}



// ============================================================
// RVA: 0x1680c7c | Core.Services.ReplicatorProviderEsq.GetOwnerState
// ============================================================

void Core_Services_ReplicatorProviderEsq__GetOwnerState
               (long param_1,undefined6 *param_2,undefined6 *param_3,undefined4 *param_4)

{
  undefined6 uVar1;
  undefined4 uVar2;
  
  uVar1 = Core_Services_ReplicatorFloatCompression__QuantizeToUShort
                    (*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc),
                     *(undefined4 *)(param_1 + 0xd0),0x44fa0000);
  *param_2 = uVar1;
  uVar1 = Core_Services_ReplicatorFloatCompression__QuantizeToUShort
                    (*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd8),
                     *(undefined4 *)(param_1 + 0xdc),0x42c80000);
  *param_3 = uVar1;
  uVar2 = Core_Services_ReplicatorFloatCompression__QuantizeToUShort
                    (*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe4),
                     *(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xec),0x3f800000);
  *param_4 = uVar2;
  return;
}



// ============================================================
// RVA: 0x1680ed4 | Core.Services.ReplicatorProviderEsq.OnReplicatorStream
// ============================================================

/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc878) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */

ulong Core_Services_ReplicatorProviderEsq__OnReplicatorStream
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                ulong param_5,undefined8 param_6,int param_7,undefined8 param_8)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 **ppuVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 extraout_d0;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 uStack_a1;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  uVar4 = param_5;
  if ((bRam0000000003eb5a04 & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23f70);
    func_0x00f78a20(0x3d24ee8);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d25978);
    func_0x00f78a20(0x3d6dc78);
    func_0x00f78a20(0x3d73038);
    func_0x00f78a20(0x3d6dc68);
    func_0x00f78a20(0x3d71de0);
    func_0x00f78a20(0x3d73020);
    uVar4 = func_0x00f78a20(0x3d6dc70);
    bRam0000000003eb5a04 = 1;
  }
  if (*(long *)(param_5 + 0x28) == 0) goto LAB_01681324;
  if (*(char *)(*(long *)(param_5 + 0x28) + 0x44) != '\0') {
    return uVar4;
  }
  uVar10 = *(undefined8 *)(param_5 + 0x10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  uVar13 = /*Core.Services.ReplicatorProviderEsq$$ToVector3*/ func_0x01683104(0x42c80000,param_7 + 0x16,param_8);
  uVar15 = param_3;
  uVar16 = param_2;
  iVar3 = /*Core.Services.ReplicatorProviderEsq$$IsNaN*/ func_0x01683180();
  if (iVar3 == 0) {
    uVar14 = /*Core.Services.ReplicatorProviderEsq$$ToVector3*/ func_0x01683104(0x44fa0000,param_7 + 0xc,param_8);
    uVar18 = uVar15;
    uVar17 = uVar16;
    iVar3 = /*Core.Services.ReplicatorProviderEsq$$IsNaN*/ func_0x01683180();
    if (iVar3 == 0) {
      uStack_ac = uVar16;
      uStack_a8 = uVar15;
      uStack_90 = /*Core.Services.ReplicatorProviderEsq$$ToQuaternion*/ func_0x016831f4(0x3f800000,param_7 + 0x12,param_8);
      uStack_8c = uVar17;
      uStack_88 = uVar18;
      uStack_84 = param_4;
      uVar15 = /*UnityEngine.Quaternion$$get_normalized*/ func_0x03252288(&uStack_90,0);
      iVar3 = /*Core.Services.ReplicatorProviderEsq$$IsNaN*/ func_0x01683290();
      if (iVar3 == 0) {
        uStack_b8 = uVar17;
        uStack_b4 = uVar18;
        uStack_b0 = param_4;
        uVar10 = /*Core.Services.ReplicatorProviderEsq$$NowPacketTime*/ func_0x01682f94(param_5);
        uVar7 = /*Core.Services.ReplicatorProviderEsq$$ToPacketTime*/ func_0x01683304(param_6);
        uVar18 = uStack_a8;
        uVar16 = uStack_ac;
        if (*(char *)(param_5 + 0x30) == '\0') {
          if (*(long *)(param_5 + 0xf8) != 0) {
            /*Core.Services.ReplicatorProviderEsq.Extrapolator3$$Reset*/ func_0x016834b0(uVar7,uVar10,uVar14,uStack_ac,uStack_a8,uVar13,param_2,param_3);
            *(undefined1 *)(param_5 + 0x30) = 1;
code_r0x016812cc:
            uVar4 = /*UnityEngine.Time$$get_realtimeSinceStartupAsDouble*/ func_0x03272dbc(0);
            *(undefined8 *)(param_5 + 0xc0) = extraout_d0;
            *(undefined8 *)(param_5 + 0x68) = *(undefined8 *)(param_5 + 0x38);
            *(undefined8 *)(param_5 + 0x78) = *(undefined8 *)(param_5 + 0x54);
            *(undefined8 *)(param_5 + 0x70) = *(undefined8 *)(param_5 + 0x4c);
            *(undefined8 *)(param_5 + 0x38) = uVar7;
            *(undefined4 *)(param_5 + 0x60) = param_2;
            *(undefined4 *)(param_5 + 100) = param_3;
            *(undefined4 *)(param_5 + 0x40) = uVar14;
            *(undefined4 *)(param_5 + 0x44) = uVar16;
            *(undefined4 *)(param_5 + 0x48) = uVar18;
            *(undefined4 *)(param_5 + 0x4c) = uVar15;
            *(undefined4 *)(param_5 + 0x50) = uStack_b8;
            *(undefined4 *)(param_5 + 0x54) = uStack_b4;
            *(undefined4 *)(param_5 + 0x58) = uStack_b0;
            *(undefined4 *)(param_5 + 0x5c) = uVar13;
            *(undefined4 *)(param_5 + 0x80) = uVar14;
            *(undefined4 *)(param_5 + 0x84) = uVar16;
            *(undefined4 *)(param_5 + 0x88) = uVar18;
            *(undefined4 *)(param_5 + 0x8c) = uVar15;
            *(undefined4 *)(param_5 + 0x90) = uStack_b8;
            *(undefined4 *)(param_5 + 0x94) = uStack_b4;
            *(undefined4 *)(param_5 + 0x98) = uStack_b0;
            return uVar4;
          }
LAB_01681324:
          puVar5 = (uint *)func_0x00f78af4();
          puStack_c8 = &Core_Services_ReplicatorStream__get_Cookie;
          puStack_d0 = &stack0xfffffffffffffff0;
          if (*(long *)(puVar5 + 2) == 0) {
            uVar4 = func_0x00f78af4();
            if ((bRam0000000003ebf1b8 & 1) == 0) {
              func_0x00f78a20(0x3d23990,0);
              bRam0000000003ebf1b8 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            return uVar4;
          }
          uVar1 = *puVar5;
          auVar19._8_4_ = uVar1;
          auVar19._0_8_ = *(long *)(puVar5 + 2);
          auVar19._12_4_ = 0;
          puStack_c8 = &Core_Services_ReplicatorStream__get_Cookie;
          ppuVar11 = &puStack_d0;
          if ((bRam0000000003eb5cd0 & 1) == 0) {
            func_0x00f78a20(0x3d201a0);
            bRam0000000003eb5cd0 = 1;
          }
          puVar12 = &UNK_016cc68c;
          puVar2 = &stack0xffffffffffffff00;
          uVar4 = 8;
          uVar6 = (ulong)uVar1;
          uVar10 = 8;
          do {
            uVar8 = uVar4;
            uVar4 = auVar19._0_8_;
            *(undefined8 *)(puVar2 + -0x20) = uVar10;
            *(ulong *)(puVar2 + -0x18) = uVar6;
            *(undefined1 ***)(puVar2 + -0x10) = ppuVar11;
            *(undefined **)(puVar2 + -8) = puVar12;
            if (auVar19._8_4_ < 0) {
code_r0x016cc7d8:
              func_0x00f78a24(0x3d1fcf8);
              uVar6 = func_0x00f78aec();
              /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar6,0);
              uVar7 = func_0x00f78a24(0x3d52ce8);
              func_0x00f78ac0(uVar6,uVar7);
            }
            else if (*(long *)(uVar4 + 0x10) != 0) {
              if (auVar19._8_4_ <= *(int *)(*(long *)(uVar4 + 0x10) + 0x18) - (int)uVar8) {
                return uVar4;
              }
              goto code_r0x016cc7d8;
            }
            auVar19 = func_0x00f78af4();
            *(undefined8 *)(puVar2 + -0x50) = 0x3d201a0;
            *(ulong *)(puVar2 + -0x48) = uVar4;
            *(undefined8 *)(puVar2 + -0x40) = uVar10;
            *(ulong *)(puVar2 + -0x38) = uVar6;
            *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
            *(undefined **)(puVar2 + -0x28) = &FlatBuffers_ByteBuffer__PutSbyte;
            ppuVar11 = (undefined1 **)(puVar2 + -0x30);
            puVar12 = &UNK_016cc834;
            puVar2 = puVar2 + -0x50;
            uVar4 = 1;
            uVar6 = uVar8;
            uVar10 = auVar19._8_8_;
          } while( true );
        }
        if (*(long *)(param_5 + 0xf8) == 0) goto LAB_01681324;
        uVar4 = /*Core.Services.ReplicatorProviderEsq.Extrapolator3$$AddSample*/ func_0x0168338c(uVar7,uVar10,uVar14,uStack_ac,uStack_a8,uVar13,param_2,param_3);
        if ((uVar4 & 1) != 0) goto code_r0x016812cc;
        if (*(long *)(param_5 + 0x28) == 0) goto LAB_01681324;
        uStack_a0 = *(undefined4 *)(*(long *)(param_5 + 0x28) + 0x40);
        uVar10 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&uStack_a0);
        uVar10 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncId={0} ')*/ uRam0000000003d73038,uVar10,0);
        if (*(long *)(param_5 + 0x28) == 0) goto LAB_01681324;
        uStack_a1 = *(undefined1 *)(*(long *)(param_5 + 0x28) + 0x45);
        uVar7 = func_0x00f78ae0(/*Core.Services.SyncCategory_TypeInfo*/ uRam0000000003d24ee8,&uStack_a1);
        uVar7 = /*System.String$$Format*/ func_0x029bc688(/*STR('SyncCategory={0}')*/ uRam0000000003d73020,uVar7,0);
        uVar10 = /*System.String$$Concat*/ func_0x029be39c(/*STR('Replicator ignored old stream: ')*/ uRam0000000003d71de0,uVar10,uVar7,0);
        if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = 3;
        goto code_r0x01681148;
      }
      uStack_a0 = uVar15;
      uStack_9c = uVar17;
      uStack_98 = uVar18;
      uStack_94 = param_4;
      uVar10 = func_0x00f78ae0(/*UnityEngine.Quaternion_TypeInfo*/ uRam0000000003d23f70,&uStack_a0);
      uVar7 = *(undefined8 *)(param_5 + 0x28);
      puVar9 = (undefined8 *)0x3d6dc70;
    }
    else {
      uStack_90 = uVar14;
      uStack_8c = uVar16;
      uStack_88 = uVar15;
      uVar10 = func_0x00f78ae0(/*UnityEngine.Vector3_TypeInfo*/ uRam0000000003d25978,&uStack_90);
      uVar7 = *(undefined8 *)(param_5 + 0x28);
      puVar9 = (undefined8 *)0x3d6dc68;
    }
  }
  else {
    uStack_90 = uVar13;
    uStack_8c = param_2;
    uStack_88 = param_3;
    uVar10 = func_0x00f78ae0(/*UnityEngine.Vector3_TypeInfo*/ uRam0000000003d25978,&uStack_90);
    uVar7 = *(undefined8 *)(param_5 + 0x28);
    puVar9 = (undefined8 *)0x3d6dc78;
  }
  uVar10 = /*System.String$$Format*/ func_0x029bcac4(*puVar9,uVar10,uVar7,0);
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = 4;
code_r0x01681148:
  uVar4 = Core_Services_Internal__LogManaged(uVar7,uVar10,0);
  return uVar4;
}



// ============================================================
// RVA: 0x1682e5c | Core.Services.ReplicatorProviderEsq.get_HasHadFirstNetworkUpdate
// ============================================================

undefined1 Core_Services_ReplicatorProviderEsq__get_HasHadFirstNetworkUpdate(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1682e64 | Core.Services.ReplicatorProviderEsq.GetRigidBodyVelocity
// ============================================================

undefined4 Core_Services_ReplicatorProviderEsq__GetRigidBodyVelocity(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}



// ============================================================
// RVA: 0x1682ec0 | Core.Services.ReplicatorProviderEsq.GetLatestPosition
// ============================================================

undefined4 Core_Services_ReplicatorProviderEsq__GetLatestPosition(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x1682ecc | Core.Services.ReplicatorProviderEsq.GetLatestRotation
// ============================================================

undefined4 Core_Services_ReplicatorProviderEsq__GetLatestRotation(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ============================================================
// RVA: 0x1682ed8 | Core.Services.ReplicatorProviderEsq.GetLastKnownPosition
// ============================================================

undefined4 Core_Services_ReplicatorProviderEsq__GetLastKnownPosition(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x1682ee4 | Core.Services.ReplicatorProviderEsq.GetLastKnownRotation
// ============================================================

undefined4 Core_Services_ReplicatorProviderEsq__GetLastKnownRotation(long param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}



// ============================================================
// RVA: 0x1682ef0 | Core.Services.ReplicatorProviderEsq.VelocityOnlyMode
// ============================================================

undefined1 Core_Services_ReplicatorProviderEsq__VelocityOnlyMode(long param_1)

{
  return *(undefined1 *)(param_1 + 0x100);
}



// ============================================================
// RVA: 0x1682ef8 | Core.Services.ReplicatorProviderEsq.SetPosition
// ============================================================

void Core_Services_ReplicatorProviderEsq__SetPosition
               (undefined4 param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5
               ,long param_6)

{
  double dVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  double extraout_d0;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  ulong unaff_d8;
  ulong uStack_78;
  
  uVar8 = param_2._4_4_;
  fVar7 = param_2._0_4_;
  fVar6 = fVar7;
  fVar9 = param_3;
  if (*(long *)(param_6 + 0x10) != 0) {
    unaff_d8 = (ulong)(uint)param_3;
    lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_6 + 0x10),0);
    if (*(long *)(param_6 + 0x28) != 0) {
      if (*(char *)(*(long *)(param_6 + 0x28) + 0x55) != '\0') {
        if (*(long *)(param_6 + 0x18) == 0) goto LAB_01682f90;
        uVar8 = 0;
        Core_Services_ReplicatorFloorClampEsq__ClampToFloor(param_1);
        unaff_d8 = (ulong)(uint)param_3;
        fVar6 = fVar7;
        fVar9 = param_3;
      }
      if (lVar3 != 0) {
        if (pcRam0000000003ec1950 == (code *)0x0) {
          pcRam0000000003ec1950 =
               (code *)func_0x00f789d4("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)"
                                       ,0);
        }
        (*pcRam0000000003ec1950)(lVar3,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
LAB_01682f90:
  lVar3 = func_0x00f78af4();
  plVar4 = *(long **)(lVar3 + 0x20);
  if (plVar4 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar4 + 0x898))(plVar4,*(undefined8 *)(*plVar4 + 0x8a0));
    if ((bRam0000000003eb5a05 & 1) == 0) {
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb5a05 = 1;
    }
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uStack_78 = /*System.TimeSpan$$FromMilliseconds*/ func_0x029f0858((double)uVar2,0);
    /*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_78,0);
    return;
  }
  lVar3 = func_0x00f78af4();
  dVar1 = (double)CONCAT44(uVar8,fVar6);
  fVar7 = fVar9;
  uStack_78 = unaff_d8;
  fVar5 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(float *)(lVar3 + 0x38) = param_4;
  *(float *)(lVar3 + 0x3c) = param_5;
  *(float *)(lVar3 + 0x10) = fVar9;
  *(float *)(lVar3 + 0x14) = param_4;
  dVar11 = dVar1 - extraout_d0;
  *(double *)(lVar3 + 0x58) = dVar11;
  *(double *)(lVar3 + 0x60) = dVar11;
  *(double *)(lVar3 + 0x40) = dVar1;
  *(double *)(lVar3 + 0x48) = dVar11 + dVar1;
  *(double *)(lVar3 + 0x50) = extraout_d0;
  *(float *)(lVar3 + 0x18) = param_5;
  *(float *)(lVar3 + 0x1c) = fVar5;
  *(float *)(lVar3 + 0x20) = fVar6;
  *(float *)(lVar3 + 0x24) = fVar7;
  fVar10 = (float)dVar11;
  *(float *)(lVar3 + 0x28) = fVar9 + fVar5 * fVar10;
  *(float *)(lVar3 + 0x2c) = param_4 + fVar6 * fVar10;
  *(float *)(lVar3 + 0x30) = param_5 + fVar7 * fVar10;
  *(float *)(lVar3 + 0x34) = fVar9;
  return;
}



// ============================================================
// RVA: 0x1682f94 | Core.Services.ReplicatorProviderEsq.NowPacketTime
// ============================================================

void Core_Services_ReplicatorProviderEsq__NowPacketTime
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               float param_5,long param_6)

{
  double dVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  double extraout_d0;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  
  uVar7 = param_2._4_4_;
  fVar6 = param_2._0_4_;
  plVar3 = *(long **)(param_6 + 0x20);
  if (plVar3 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x898))(plVar3,*(undefined8 *)(*plVar3 + 0x8a0));
    if ((bRam0000000003eb5a05 & 1) == 0) {
      func_0x00f78a20(0x3d25238);
      bRam0000000003eb5a05 = 1;
    }
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.TimeSpan$$FromMilliseconds*/ func_0x029f0858((double)uVar2,0);
    /*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&stack0xffffffffffffffc8,0);
    return;
  }
  lVar4 = func_0x00f78af4();
  dVar1 = (double)CONCAT44(uVar7,fVar6);
  fVar8 = param_3;
  fVar5 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(float *)(lVar4 + 0x38) = param_4;
  *(float *)(lVar4 + 0x3c) = param_5;
  *(float *)(lVar4 + 0x10) = param_3;
  *(float *)(lVar4 + 0x14) = param_4;
  dVar10 = dVar1 - extraout_d0;
  *(double *)(lVar4 + 0x58) = dVar10;
  *(double *)(lVar4 + 0x60) = dVar10;
  *(double *)(lVar4 + 0x40) = dVar1;
  *(double *)(lVar4 + 0x48) = dVar10 + dVar1;
  *(double *)(lVar4 + 0x50) = extraout_d0;
  *(float *)(lVar4 + 0x18) = param_5;
  *(float *)(lVar4 + 0x1c) = fVar5;
  *(float *)(lVar4 + 0x20) = fVar6;
  *(float *)(lVar4 + 0x24) = fVar8;
  fVar9 = (float)dVar10;
  *(float *)(lVar4 + 0x28) = param_3 + fVar5 * fVar9;
  *(float *)(lVar4 + 0x2c) = param_4 + fVar6 * fVar9;
  *(float *)(lVar4 + 0x30) = param_5 + fVar8 * fVar9;
  *(float *)(lVar4 + 0x34) = param_3;
  return;
}



// ============================================================
// RVA: 0x1683104 | Core.Services.ReplicatorProviderEsq.ToVector3
// ============================================================

/* WARNING: Possible PIC construction at 0x01683198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168319c) */
/* WARNING: Removing unreachable block (ram,0x016831a0) */
/* WARNING: Removing unreachable block (ram,0x016831c0) */
/* WARNING: Removing unreachable block (ram,0x016831b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_Services_ReplicatorProviderEsq__ToVector3(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_40 = param_1;
  lStack_38 = param_2;
  if (param_2 == 0) {
    uVar1 = func_0x00f78af4();
    return (ulong)(0x7f800000 < (uVar1 & 0x7fffffff));
  }
  uVar2 = /*FlatBuffers.ByteBuffer$$GetUshort*/ func_0x016ccdd0(param_2,param_1,0);
  uVar3 = /*Core.Services.ReplicatorVector3$$get_Y*/ func_0x01683524(&uStack_40);
  uVar1 = /*Core.Services.ReplicatorVector3$$get_Z*/ func_0x01683550(&uStack_40);
  return (uVar3 & 0xffff) << 0x10 | (ulong)(uVar1 & 0xffff) << 0x20 | uVar2 & 0xffffffff;
}



// ============================================================
// RVA: 0x1683180 | Core.Services.ReplicatorProviderEsq.IsNaN
// ============================================================

/* WARNING: Possible PIC construction at 0x01683198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168319c) */
/* WARNING: Removing unreachable block (ram,0x016831a0) */
/* WARNING: Removing unreachable block (ram,0x016831c0) */
/* WARNING: Removing unreachable block (ram,0x016831b0) */

bool Core_Services_ReplicatorProviderEsq__IsNaN(uint param_1)

{
  return 0x7f800000 < (param_1 & 0x7fffffff);
}



// ============================================================
// RVA: 0x16831f4 | Core.Services.ReplicatorProviderEsq.ToQuaternion
// ============================================================

/* WARNING: Possible PIC construction at 0x016832b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016832d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016832b4) */
/* WARNING: Removing unreachable block (ram,0x016832b8) */
/* WARNING: Removing unreachable block (ram,0x016832c8) */
/* WARNING: Removing unreachable block (ram,0x016832d4) */
/* WARNING: Removing unreachable block (ram,0x016832ec) */
/* WARNING: Removing unreachable block (ram,0x016832d8) */

ulong Core_Services_ReplicatorProviderEsq__ToQuaternion(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uStack_50;
  long lStack_48;
  
  uStack_50 = param_1;
  lStack_48 = param_2;
  if (param_2 == 0) {
    uVar5 = func_0x00f78af4();
    return (ulong)(0x7f800000 < (uVar5 & 0x7fffffff));
  }
  uVar1 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(param_2,param_1,0);
  uVar2 = /*Core.Services.ReplicatorQuaternion$$get_Y*/ func_0x016835a4(&uStack_50);
  uVar3 = /*Core.Services.ReplicatorQuaternion$$get_Z*/ func_0x016835d0(&uStack_50);
  uVar4 = /*Core.Services.ReplicatorQuaternion$$get_W*/ func_0x016835fc(&uStack_50);
  uVar3 = (uVar3 & 0xffffffff) << 0x10;
  return uVar3 & 0xffffffff00000000 | uVar3 & 0xffffff | (uVar4 & 0xff) << 0x18 |
         (uVar2 & 0xff) << 8 | uVar1 & 0xffffffff;
}



// ============================================================
// RVA: 0x1683290 | Core.Services.ReplicatorProviderEsq.IsNaN
// ============================================================

/* WARNING: Possible PIC construction at 0x016832b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016832d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016832b4) */
/* WARNING: Removing unreachable block (ram,0x016832b8) */
/* WARNING: Removing unreachable block (ram,0x016832c8) */
/* WARNING: Removing unreachable block (ram,0x016832d4) */
/* WARNING: Removing unreachable block (ram,0x016832ec) */
/* WARNING: Removing unreachable block (ram,0x016832d8) */

bool Core_Services_ReplicatorProviderEsq__IsNaN(uint param_1)

{
  return 0x7f800000 < (param_1 & 0x7fffffff);
}



// ============================================================
// RVA: 0x1683304 | Core.Services.ReplicatorProviderEsq.ToPacketTime
// ============================================================

void Core_Services_ReplicatorProviderEsq__ToPacketTime(uint param_1)

{
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5a05 & 1) == 0) {
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb5a05 = 1;
  }
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_38 = /*System.TimeSpan$$FromMilliseconds*/ func_0x029f0858((double)param_1,0);
  /*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_38,0);
  return;
}



